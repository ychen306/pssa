// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 77E4330A
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
   const int32_t f0;
   int64_t f1;
   unsigned f2 : 17;
   int8_t f3;
   unsigned f4 : 9;
   int32_t f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   unsigned f0 : 3;
   const signed f1 : 28;
   unsigned f2 : 10;
   const signed f3 : 13;
   signed f4 : 4;
   signed f5 : 21;
   unsigned f6 : 9;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint16_t f0;
   int32_t f1;
   const uint32_t f2;
};
#pragma pack(pop)

struct S3 {
   unsigned f0 : 10;
};

union U4 {
   int64_t f0;
   int16_t f1;
};

union U5 {
   int64_t f0;
   const uint16_t f1;
   struct S2 f2;
   const struct S2 f3;
};


static uint64_t g_3 = 0xD8D383303773672DLL;
static int32_t g_7 = 3L;
static int32_t g_11[3][8][5] = {{{(-5L),0x4D3EC93CL,(-5L),(-5L),0x4D3EC93CL},{0x4D3EC93CL,(-5L),(-5L),0x4D3EC93CL,(-5L)},{0x4D3EC93CL,0x4D3EC93CL,0L,0x4D3EC93CL,0x4D3EC93CL},{(-5L),0x4D3EC93CL,(-5L),(-5L),0x4D3EC93CL},{0x4D3EC93CL,(-5L),(-5L),0x4D3EC93CL,(-5L)},{0x4D3EC93CL,0x4D3EC93CL,0L,0x4D3EC93CL,0x4D3EC93CL},{(-5L),0x4D3EC93CL,(-5L),(-5L),0x4D3EC93CL},{0x4D3EC93CL,(-5L),(-5L),0x4D3EC93CL,(-5L)}},{{0x4D3EC93CL,0x4D3EC93CL,0L,0x4D3EC93CL,0x4D3EC93CL},{(-5L),(-5L),0L,0L,(-5L)},{(-5L),0L,0L,(-5L),0L},{(-5L),(-5L),0x4D3EC93CL,(-5L),(-5L)},{0L,(-5L),0L,0L,(-5L)},{(-5L),0L,0L,(-5L),0L},{(-5L),(-5L),0x4D3EC93CL,(-5L),(-5L)},{0L,(-5L),0L,0L,(-5L)}},{{(-5L),0L,0L,(-5L),0L},{(-5L),(-5L),0x4D3EC93CL,(-5L),(-5L)},{0L,(-5L),0L,0L,(-5L)},{(-5L),0L,0L,(-5L),0L},{(-5L),(-5L),0x4D3EC93CL,(-5L),(-5L)},{0L,(-5L),0L,0L,(-5L)},{(-5L),0L,0L,(-5L),0L},{(-5L),(-5L),0x4D3EC93CL,(-5L),(-5L)}}};
static uint16_t g_73 = 0x1DA9L;
static struct S0 g_101 = {0xF7D0102AL,0x92F95BF6126C6071LL,349,0x43L,13,-1L};
static struct S0 *g_100 = &g_101;
static struct S3 g_109 = {25};
static int32_t g_111 = (-1L);
static uint8_t g_131 = 0UL;
static uint32_t g_141 = 0xD70E512BL;
static int32_t *g_149 = &g_11[2][6][4];
static int32_t **g_148 = &g_149;
static int32_t ***g_147 = &g_148;
static int16_t g_166 = 0x02A9L;
static union U5 g_167[9][7][3] = {{{{1L},{0x25B980044ACA4CA2LL},{-1L}},{{3L},{-1L},{-1L}},{{0x70C5B0B88990D299LL},{0x7789590A6FF864FFLL},{-5L}},{{-1L},{8L},{0x24406AF2D10044AALL}},{{1L},{7L},{-7L}},{{1L},{0L},{5L}},{{0xFE5E5E1387A81754LL},{7L},{0xFB03A11718A23994LL}}},{{{0x770A46BAF6D2A347LL},{8L},{0xDC0E5944C72F990ALL}},{{0x273AD263BBA08E5ELL},{0x7789590A6FF864FFLL},{0x812F4B4B49C438BBLL}},{{0x883D10087D275BA9LL},{-1L},{0L}},{{-1L},{0x25B980044ACA4CA2LL},{1L}},{{8L},{0x948756993133B8B3LL},{8L}},{{-1L},{-1L},{0x273AD263BBA08E5ELL}},{{0xC0D730730238BE1ALL},{-1L},{1L}}},{{{4L},{0xB5801B7B750C1D09LL},{1L}},{{0xB2783F5DF4781F18LL},{1L},{3L}},{{4L},{-1L},{-4L}},{{0xC0D730730238BE1ALL},{0xF839FAA199BFBAFDLL},{0L}},{{-1L},{0L},{0xCBBA2194038E5110LL}},{{8L},{5L},{0x19FA18239A94666CLL}},{{-1L},{1L},{0x25B980044ACA4CA2LL}}},{{{0x883D10087D275BA9LL},{0x883D10087D275BA9LL},{0L}},{{0x273AD263BBA08E5ELL},{1L},{-1L}},{{0x770A46BAF6D2A347LL},{0x19FA18239A94666CLL},{3L}},{{0xFE5E5E1387A81754LL},{-1L},{0x7789590A6FF864FFLL}},{{1L},{0x770A46BAF6D2A347LL},{3L}},{{1L},{7L},{-1L}},{{-1L},{-6L},{0L}}},{{{0x70C5B0B88990D299LL},{0xEE618692B30807B0LL},{0x25B980044ACA4CA2LL}},{{3L},{0x3F291EF01F62BBA2LL},{0x19FA18239A94666CLL}},{{1L},{0xCBBA2194038E5110LL},{0xCBBA2194038E5110LL}},{{0x98805535B230E549LL},{1L},{0L}},{{0xCBBA2194038E5110LL},{0x812F4B4B49C438BBLL},{-4L}},{{5L},{1L},{3L}},{{7L},{-5L},{1L}}},{{{1L},{1L},{1L}},{{0xB5801B7B750C1D09LL},{0x812F4B4B49C438BBLL},{0x273AD263BBA08E5ELL}},{{0xDC0E5944C72F990ALL},{1L},{8L}},{{0L},{0xCBBA2194038E5110LL},{1L}},{{0xDC0E5944C72F990ALL},{-6L},{0x2EA9840A54B791F8LL}},{{1L},{1L},{1L}},{{0xC0D730730238BE1ALL},{0x24406AF2D10044AALL},{3L}}},{{{0xCBBA2194038E5110LL},{7L},{0x7789590A6FF864FFLL}},{{1L},{0L},{0xB2783F5DF4781F18LL}},{{0x70C5B0B88990D299LL},{0x273AD263BBA08E5ELL},{-3L}},{{1L},{0L},{3L}},{{0xCBBA2194038E5110LL},{0xB5801B7B750C1D09LL},{0L}},{{0xC0D730730238BE1ALL},{0L},{1L}},{{1L},{0xC3AFA74D9B914904LL},{-5L}}},{{{0xDC0E5944C72F990ALL},{0xB2783F5DF4781F18LL},{-6L}},{{0x62F89DFEE80C7017LL},{0x62F89DFEE80C7017LL},{-1L}},{{3L},{0x770A46BAF6D2A347LL},{0xDC0E5944C72F990ALL}},{{4L},{-5L},{-1L}},{{-1L},{0xDC0E5944C72F990ALL},{8L}},{{0x25B980044ACA4CA2LL},{4L},{-1L}},{{0xB2783F5DF4781F18LL},{1L},{0xDC0E5944C72F990ALL}}},{{{0xFE5E5E1387A81754LL},{-4L},{-1L}},{{0x948756993133B8B3LL},{0L},{-6L}},{{-1L},{-1L},{-5L}},{{0x19FA18239A94666CLL},{1L},{1L}},{{0xEE618692B30807B0LL},{0x812F4B4B49C438BBLL},{0L}},{{1L},{0xF839FAA199BFBAFDLL},{3L}},{{0xC3AFA74D9B914904LL},{0x25B980044ACA4CA2LL},{-3L}}}};
static int16_t * const *g_176 = (void*)0;
static struct S1 g_197 = {1,10044,30,85,0,-468,10};
static uint16_t g_237 = 0x0F13L;
static struct S2 g_240[5][9] = {{{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{65530UL,0xB4F8A2E9L,0x7E6EE4CDL},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{65530UL,0xB4F8A2E9L,0x7E6EE4CDL},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{65530UL,0xB4F8A2E9L,0x7E6EE4CDL},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L}},{{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{65530UL,0xB4F8A2E9L,0x7E6EE4CDL},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{65530UL,0xB4F8A2E9L,0x7E6EE4CDL},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{65530UL,0xB4F8A2E9L,0x7E6EE4CDL},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L}},{{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{65530UL,0xB4F8A2E9L,0x7E6EE4CDL},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{65530UL,0xB4F8A2E9L,0x7E6EE4CDL},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{65530UL,0xB4F8A2E9L,0x7E6EE4CDL},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L}},{{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{65530UL,0xB4F8A2E9L,0x7E6EE4CDL},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{65530UL,0xB4F8A2E9L,0x7E6EE4CDL},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{65530UL,0xB4F8A2E9L,0x7E6EE4CDL},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L}},{{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{65530UL,0xB4F8A2E9L,0x7E6EE4CDL},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{65530UL,0xB4F8A2E9L,0x7E6EE4CDL},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L},{65530UL,0xB4F8A2E9L,0x7E6EE4CDL},{0x4BBCL,0x24C7D9B6L,0xBEFD1AA8L}}};
static uint8_t g_270[10][5][1] = {{{0x0EL},{251UL},{0x62L},{0xAEL},{0x20L}},{{0xEAL},{0x80L},{0x80L},{0xEAL},{0x20L}},{{0xAEL},{0x62L},{251UL},{0x0EL},{251UL}},{{0x62L},{0xAEL},{0x20L},{0xEAL},{0x80L}},{{0x80L},{0xEAL},{0x20L},{0xAEL},{0x62L}},{{251UL},{0x0EL},{251UL},{0x62L},{0xAEL}},{{0x20L},{0xEAL},{0x80L},{0x80L},{0xEAL}},{{0x20L},{0xAEL},{0x62L},{251UL},{0x0EL}},{{251UL},{0x62L},{0xAEL},{0x20L},{0xEAL}},{{0x80L},{0x80L},{0xEAL},{0x20L},{0xAEL}}};
static struct S3 *g_297 = &g_109;
static uint64_t g_373 = 1UL;
static struct S2 *g_392 = (void*)0;
static struct S2 **g_391 = &g_392;
static struct S3 g_406 = {24};
static struct S3 * const g_405 = &g_406;
static struct S3 * const *g_404 = &g_405;
static int32_t *g_495 = &g_7;
static union U5 *g_513 = (void*)0;
static uint32_t g_547 = 4294967295UL;
static int8_t g_586 = 0xCAL;
static uint64_t g_587 = 0UL;
static int32_t ****g_608 = &g_147;
static int32_t *****g_607 = &g_608;
static union U4 g_630 = {0x49600CC59B6D60BBLL};
static uint32_t g_644 = 0xC6B65CEAL;
static struct S3 **g_759 = &g_297;
static struct S3 ***g_758[1] = {&g_759};
static int16_t g_797[8] = {0x8B42L,0x8B42L,0x8B42L,0x8B42L,0x8B42L,0x8B42L,0x8B42L,0x8B42L};
static union U5 g_803 = {0x3647348D8E01BE80LL};
static int64_t g_883 = 0x8D00383165D57E11LL;
static uint32_t g_892 = 0x427AEC10L;
static struct S1 *g_928 = (void*)0;
static uint16_t g_960[5][1] = {{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}};
static struct S1 g_991[10] = {{1,-8634,11,-12,-0,1034,18},{1,-8634,11,-12,-0,1034,18},{1,-8634,11,-12,-0,1034,18},{1,-8634,11,-12,-0,1034,18},{1,-8634,11,-12,-0,1034,18},{1,-8634,11,-12,-0,1034,18},{1,-8634,11,-12,-0,1034,18},{1,-8634,11,-12,-0,1034,18},{1,-8634,11,-12,-0,1034,18},{1,-8634,11,-12,-0,1034,18}};
static const struct S2 **g_1089 = (void*)0;
static const struct S2 g_1092 = {65535UL,4L,1UL};
static const struct S2 *g_1091 = &g_1092;
static const struct S2 **g_1090 = &g_1091;
static int16_t ***g_1198[3] = {(void*)0,(void*)0,(void*)0};
static struct S3 ****g_1259 = &g_758[0];
static int16_t g_1285 = 0xBA25L;
static int64_t *g_1315[2][9] = {{(void*)0,&g_101.f1,&g_630.f0,&g_101.f1,(void*)0,(void*)0,&g_101.f1,&g_630.f0,&g_101.f1},{&g_101.f1,(void*)0,&g_630.f0,&g_630.f0,(void*)0,&g_101.f1,(void*)0,&g_630.f0,&g_630.f0}};
static int64_t *g_1316 = &g_630.f0;
static const int16_t g_1361 = 9L;
static uint8_t *g_1388[1][10][5] = {{{&g_270[8][3][0],&g_270[6][3][0],&g_131,&g_270[9][1][0],&g_270[8][3][0]},{(void*)0,&g_131,&g_131,(void*)0,&g_270[8][4][0]},{(void*)0,(void*)0,&g_131,&g_270[8][3][0],&g_270[6][3][0]},{(void*)0,&g_131,&g_270[8][4][0],&g_131,(void*)0},{(void*)0,&g_270[9][1][0],&g_270[8][3][0],&g_270[8][3][0],&g_131},{&g_270[8][3][0],&g_270[9][1][0],(void*)0,(void*)0,&g_270[9][1][0]},{&g_270[8][4][0],&g_131,(void*)0,&g_270[9][1][0],&g_131},{&g_131,(void*)0,(void*)0,&g_131,(void*)0},{&g_131,&g_131,(void*)0,&g_270[8][4][0],&g_270[6][3][0]},{&g_131,&g_270[6][3][0],&g_270[8][3][0],&g_270[8][4][0],&g_270[8][4][0]}}};
static uint8_t ** const g_1387[10] = {&g_1388[0][7][3],(void*)0,&g_1388[0][7][3],(void*)0,&g_1388[0][7][3],(void*)0,&g_1388[0][7][3],(void*)0,&g_1388[0][7][3],(void*)0};
static struct S0 **g_1598 = &g_100;
static struct S0 ***g_1597[8] = {&g_1598,(void*)0,&g_1598,(void*)0,&g_1598,(void*)0,&g_1598,(void*)0};
static struct S0 ***g_1601 = &g_1598;
static union U5 g_1696 = {2L};
static uint32_t g_1714 = 4294967295UL;
static uint32_t g_1725 = 4294967290UL;
static uint32_t **g_1762 = (void*)0;
static union U4 *g_1838 = (void*)0;
static int32_t g_1853 = 0xAC2058A6L;
static int64_t **g_1868[6][1][2] = {{{&g_1315[0][4],(void*)0}},{{&g_1315[0][4],(void*)0}},{{&g_1315[0][4],(void*)0}},{{&g_1315[0][4],(void*)0}},{{&g_1315[0][4],(void*)0}},{{&g_1315[0][4],(void*)0}}};
static int64_t ***g_1867 = &g_1868[1][0][1];
static int64_t **** const g_1866[1] = {&g_1867};
static union U5 g_1969 = {0xBF72944E780E2545LL};
static uint32_t g_1979 = 2UL;
static struct S1 ** const g_2022 = &g_928;
static struct S1 ** const *g_2021 = &g_2022;
static int8_t g_2060 = (-3L);
static int32_t g_2076 = 0x48ED368FL;
static uint64_t g_2099 = 0x2D02B7ABC5B0517CLL;
static int8_t g_2176 = 0xAEL;
static uint16_t *g_2236[2][4][3] = {{{&g_960[0][0],&g_240[3][3].f0,&g_960[3][0]},{&g_960[3][0],&g_960[3][0],&g_960[3][0]},{(void*)0,&g_960[0][0],&g_960[3][0]},{&g_237,&g_237,&g_237}},{{&g_960[0][0],&g_960[0][0],&g_960[0][0]},{&g_237,&g_960[3][0],&g_960[0][0]},{&g_960[0][0],&g_240[3][3].f0,&g_960[0][0]},{&g_237,&g_237,&g_960[0][0]}}};
static uint16_t **g_2235[9] = {&g_2236[0][3][1],&g_2236[0][3][1],&g_2236[0][3][1],&g_2236[0][3][1],&g_2236[0][3][1],&g_2236[0][3][1],&g_2236[0][3][1],&g_2236[0][3][1],&g_2236[0][3][1]};
static uint64_t g_2248 = 0UL;
static struct S1 g_2283[4] = {{0,-3918,27,12,-3,180,19},{0,-3918,27,12,-3,180,19},{0,-3918,27,12,-3,180,19},{0,-3918,27,12,-3,180,19}};



static int32_t func_1(void);
static struct S3 func_20(struct S3 p_21, struct S0 p_22);
static struct S3 func_23(int32_t * p_24, uint64_t p_25);
static struct S2 func_27(uint64_t p_28, int32_t * p_29, int32_t * p_30);
static int32_t * func_32(struct S3 p_33, struct S2 p_34, struct S2 p_35, int32_t * p_36);
static struct S3 func_37(int32_t * p_38);
static int32_t * func_39(int32_t * p_40, struct S0 p_41);
static struct S0 func_42(int32_t * p_43);
static int32_t * func_44(struct S2 p_45, int32_t * p_46, int32_t * p_47);
static int32_t * func_50(int8_t p_51, uint64_t p_52, int32_t * p_53, uint32_t p_54);
# 169 "<stdin>"
static int32_t func_1(void)
{
    int32_t *l_2 = (void*)0;
    int32_t *l_6 = &g_7;
    int32_t *l_8 = &g_7;
    int32_t *l_9 = &g_7;
    int32_t *l_10[3];
    int32_t l_12 = 0L;
    uint8_t l_13 = 0xB8L;
    struct S2 l_191 = {0x9E3CL,-1L,0xA795CD91L};
    struct S3 l_2043 = {11};
    int16_t * const *l_2053 = (void*)0;
    int16_t *l_2055 = &g_630.f1;
    int16_t **l_2054 = &l_2055;
    const int64_t *l_2066[9][5][5] = {{{&g_803.f0,&g_101.f1,(void*)0,&g_1696.f0,&g_167[8][6][0].f0},{&g_167[8][6][0].f0,&g_1696.f0,&g_1969.f0,&g_883,&g_167[8][6][0].f0},{(void*)0,&g_803.f0,&g_167[8][6][0].f0,&g_883,&g_630.f0},{&g_803.f0,&g_167[8][6][0].f0,&g_803.f0,&g_101.f1,(void*)0},{&g_883,(void*)0,&g_101.f1,&g_883,&g_101.f1}},{{&g_883,&g_630.f0,&g_167[8][6][0].f0,(void*)0,&g_883},{(void*)0,&g_803.f0,&g_883,(void*)0,&g_101.f1},{&g_101.f1,&g_1969.f0,(void*)0,&g_883,&g_167[8][6][0].f0},{&g_630.f0,&g_803.f0,&g_883,&g_101.f1,&g_803.f0},{&g_101.f1,&g_167[8][6][0].f0,&g_883,&g_883,(void*)0}},{{&g_1969.f0,&g_1696.f0,&g_1696.f0,&g_630.f0,&g_101.f1},{&g_803.f0,&g_1969.f0,&g_630.f0,(void*)0,&g_1969.f0},{&g_167[8][6][0].f0,&g_167[8][6][0].f0,&g_803.f0,&g_630.f0,&g_1969.f0},{&g_167[8][6][0].f0,&g_101.f1,(void*)0,&g_101.f1,(void*)0},{(void*)0,&g_803.f0,&g_167[8][6][0].f0,&g_167[8][6][0].f0,&g_803.f0}},{{&g_1969.f0,(void*)0,&g_803.f0,&g_1969.f0,&g_803.f0},{(void*)0,&g_883,&g_1969.f0,&g_167[8][6][0].f0,&g_883},{&g_883,(void*)0,(void*)0,&g_883,&g_630.f0},{(void*)0,&g_101.f1,&g_883,&g_883,&g_101.f1},{&g_1969.f0,&g_883,(void*)0,(void*)0,&g_883}},{{(void*)0,&g_803.f0,&g_883,&g_1696.f0,&g_1696.f0},{&g_167[8][6][0].f0,&g_630.f0,&g_1969.f0,&g_1969.f0,&g_1969.f0},{&g_167[8][6][0].f0,&g_1696.f0,&g_883,(void*)0,&g_630.f0},{&g_803.f0,&g_1696.f0,&g_1696.f0,&g_101.f1,&g_1969.f0},{&g_630.f0,&g_1969.f0,&g_101.f1,&g_883,&g_167[8][6][0].f0}},{{&g_883,&g_101.f1,&g_883,&g_630.f0,&g_803.f0},{&g_101.f1,&g_1696.f0,&g_167[8][6][0].f0,&g_883,&g_1969.f0},{(void*)0,&g_883,&g_803.f0,&g_167[8][6][0].f0,&g_803.f0},{&g_803.f0,&g_101.f1,&g_803.f0,(void*)0,&g_630.f0},{&g_630.f0,(void*)0,&g_167[8][6][0].f0,&g_803.f0,(void*)0}},{{&g_167[8][6][0].f0,&g_1696.f0,&g_883,&g_883,&g_167[8][6][0].f0},{&g_167[8][6][0].f0,(void*)0,&g_101.f1,&g_101.f1,&g_803.f0},{&g_1696.f0,(void*)0,&g_1696.f0,&g_883,&g_1696.f0},{&g_883,&g_630.f0,&g_883,&g_167[8][6][0].f0,&g_101.f1},{&g_101.f1,&g_803.f0,&g_1969.f0,&g_883,&g_803.f0}},{{&g_167[8][6][0].f0,&g_1969.f0,&g_883,&g_167[8][6][0].f0,&g_101.f1},{&g_1696.f0,(void*)0,(void*)0,(void*)0,&g_1696.f0},{(void*)0,&g_883,&g_883,&g_101.f1,&g_1969.f0},{&g_803.f0,&g_803.f0,(void*)0,&g_803.f0,&g_883},{&g_1696.f0,(void*)0,&g_1969.f0,&g_883,&g_1969.f0}},{{(void*)0,&g_803.f0,&g_803.f0,(void*)0,&g_1696.f0},{&g_1969.f0,&g_803.f0,&g_167[8][6][0].f0,&g_101.f1,&g_101.f1},{&g_803.f0,&g_1969.f0,(void*)0,&g_101.f1,&g_803.f0},{&g_803.f0,&g_803.f0,&g_803.f0,&g_1969.f0,&g_101.f1},{(void*)0,&g_883,&g_630.f0,&g_803.f0,&g_1696.f0}}};
    struct S3 ***l_2150 = (void*)0;
    uint16_t l_2198 = 0xD91BL;
    const union U4 **l_2258 = (void*)0;
    uint8_t **l_2260 = &g_1388[0][4][3];
    uint8_t ***l_2259[9][3][1] = {{{(void*)0},{&l_2260},{&l_2260}},{{(void*)0},{&l_2260},{&l_2260}},{{(void*)0},{&l_2260},{&l_2260}},{{(void*)0},{&l_2260},{&l_2260}},{{(void*)0},{&l_2260},{&l_2260}},{{(void*)0},{&l_2260},{(void*)0}},{{&l_2260},{(void*)0},{(void*)0}},{{&l_2260},{(void*)0},{(void*)0}},{{&l_2260},{(void*)0},{(void*)0}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_10[i] = &g_7;
    g_3--;
    ++l_13;
    for (g_7 = 7; (g_7 > 10); g_7 = safe_add_func_uint64_t_u_u(g_7, 1))
    {
        int32_t *l_26 = &g_7;
        int32_t *l_49 = &g_11[1][5][2];
        int32_t *l_68 = (void*)0;
        struct S0 l_1930 = {-10L,0x08032D9385D2B4D9LL,45,-9L,6,1L};
        for (g_3 = 11; (g_3 != 29); g_3 = safe_add_func_int8_t_s_s(g_3, 9))
        {
            uint32_t l_31 = 0xAE7BE98BL;
            struct S2 l_48 = {65535UL,0xBC0716CFL,0x31DF9520L};
            uint16_t *l_72 = &g_73;
            int32_t **l_79[9] = {&l_2,&l_8,&l_2,&l_2,&l_8,&l_2,&l_2,&l_8,&l_2};
            int i;
        }
        return g_197.f2;
    }
    if ((*l_9))
    {
        uint32_t l_2048 = 0UL;
        int16_t ***l_2056 = &l_2054;
        int64_t l_2061 = (-1L);
        const int64_t *l_2065[9] = {&l_2061,&l_2061,&l_2061,&l_2061,&l_2061,&l_2061,&l_2061,&l_2061,&l_2061};
        int32_t l_2072 = 0xA24C7D90L;
        const struct S1 l_2109 = {1,-12257,2,-54,1,-144,7};
        struct S3 ***l_2149 = &g_759;
        int32_t l_2180 = 0x1D595B97L;
        int i;
        (*g_1090) = ((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_2048, ((safe_sub_func_int32_t_s_s((0xC3L != ((safe_sub_func_int16_t_s_s(((((*l_6) , ((*l_8) , g_630)) , l_2053) != ((*l_2056) = l_2054)), ((*l_9) ^ (~((((safe_lshift_func_int8_t_s_s(l_2048, (*l_8))) <= (-1L)) , 9L) , g_2060))))) <= 0xCFL)), 0x9E32CF3BL)) | l_2061))), 0)) , (*g_1090));
        if ((((g_1725 || (0x6BAFEEF07D7DE9A1LL || (((safe_unary_minus_func_uint64_t_u((*l_8))) , l_2065[3]) == l_2066[7][4][0]))) , &g_1598) != (void*)0))
        {
            uint64_t l_2069 = 0xF9C1D2B8E7F49E69LL;
            uint16_t l_2070[1];
            uint32_t l_2073[6][8] = {{0UL,18446744073709551615UL,0UL,0UL,18446744073709551615UL,0UL,0UL,18446744073709551615UL},{18446744073709551615UL,0UL,0UL,18446744073709551615UL,0UL,0UL,18446744073709551615UL,0UL},{18446744073709551615UL,18446744073709551615UL,0x5F7BAA16L,18446744073709551615UL,18446744073709551615UL,0x5F7BAA16L,18446744073709551615UL,18446744073709551615UL},{0UL,18446744073709551615UL,0UL,0UL,18446744073709551615UL,0UL,0UL,18446744073709551615UL},{18446744073709551615UL,0UL,0UL,18446744073709551615UL,0UL,0UL,18446744073709551615UL,0UL},{18446744073709551615UL,18446744073709551615UL,0x5F7BAA16L,18446744073709551615UL,18446744073709551615UL,0x5F7BAA16L,18446744073709551615UL,18446744073709551615UL}};
            uint64_t l_2085[2][8] = {{0x0E10418AC72FC0A7LL,0x9D3B89CAFA7358DELL,0x0E10418AC72FC0A7LL,0x0E10418AC72FC0A7LL,0x9D3B89CAFA7358DELL,0x0E10418AC72FC0A7LL,0x0E10418AC72FC0A7LL,0x9D3B89CAFA7358DELL},{0x9D3B89CAFA7358DELL,0x0E10418AC72FC0A7LL,0x0E10418AC72FC0A7LL,0x9D3B89CAFA7358DELL,0x0E10418AC72FC0A7LL,0x0E10418AC72FC0A7LL,0x9D3B89CAFA7358DELL,0x0E10418AC72FC0A7LL}};
            int32_t **l_2114[5][5][6] = {{{&l_10[2],&l_9,&l_10[2],&l_9,&l_10[2],&l_9},{&l_8,&l_9,&l_8,&l_9,&l_8,&l_9},{&l_10[2],&l_9,&l_10[2],&l_9,&l_10[2],&l_9},{&l_8,&l_9,&l_8,&l_9,&l_8,&l_9},{&l_10[2],&l_9,&l_10[2],&l_9,&l_10[2],&l_9}},{{&l_8,&l_9,&l_8,&l_9,&l_8,&l_9},{&l_10[2],&l_9,&l_10[2],&l_9,&l_10[2],&l_9},{&l_8,&l_9,&l_8,&l_9,&l_8,&l_9},{&l_10[2],&l_9,&l_10[2],&l_9,&l_10[2],&l_9},{&l_8,&l_9,&l_8,&l_9,&l_8,&l_9}},{{&l_10[2],&l_9,&l_10[2],&l_9,&l_10[2],&l_9},{&l_8,&l_9,&l_8,&l_9,&l_8,&l_9},{&l_10[2],&l_9,&l_10[2],&l_9,&l_10[2],&l_9},{&l_8,&l_9,&l_8,&l_9,&l_8,&l_9},{&l_10[2],&l_9,&l_10[2],&l_9,&l_10[2],&l_9}},{{&l_8,&l_9,&l_8,&l_9,&l_8,&l_9},{&l_10[2],&l_9,&l_10[2],&l_9,&l_10[2],&l_9},{&l_8,&l_9,&l_8,&l_9,&l_8,&l_9},{&l_10[2],&l_9,&l_10[2],&l_9,&l_10[2],&l_9},{&l_8,&l_9,&l_8,&l_9,&l_8,&l_9}},{{&l_10[2],&l_9,&l_10[2],&l_9,&l_10[2],&l_9},{&l_8,&l_9,&l_8,&l_9,&l_8,&l_9},{&l_10[2],&l_9,&l_10[2],&l_9,&l_10[2],&l_9},{&l_8,&l_9,&l_8,&l_9,&l_8,&l_9},{&l_10[2],&l_9,&l_10[2],&l_9,&l_10[2],&l_9}}};
            const struct S1 l_2160 = {1,-14836,2,6,-3,829,5};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2070[i] = 0x03AAL;
            if (((safe_div_func_uint8_t_u_u(l_2069, (*l_8))) == l_2070[0]))
            {
                uint64_t l_2071 = 18446744073709551612UL;
                (****g_608) &= l_2071;
                return g_109.f0;
            }
            else
            {
                uint64_t *l_2086 = &g_587;
                const struct S2 l_2095 = {0xA4DFL,0x5F030364L,0xB8B3A454L};
                struct S0 *l_2098 = (void*)0;
                int16_t l_2110 = 1L;
                int32_t ** const l_2115[8][4] = {{&l_8,&l_2,&l_6,&l_6},{&l_2,&g_149,&g_149,&l_8},{(void*)0,&l_10[1],&l_10[1],(void*)0},{(void*)0,&l_6,&g_149,&l_2},{&l_2,(void*)0,&l_6,&l_9},{&l_8,&l_10[0],&l_8,&l_9},{&l_6,(void*)0,&l_2,&l_2},{&g_149,&l_6,(void*)0,(void*)0}};
                int32_t *l_2135 = &g_101.f5;
                int32_t l_2172 = 1L;
                int i, j;
                l_2073[2][1]++;
                (***g_147) = (g_2076 | g_991[1].f5);
                for (g_547 = 0; (g_547 <= 0); g_547 += 1)
                {
                    uint32_t l_2078 = 0UL;
                    (*l_8) ^= (-10L);
                    for (l_191.f0 = 0; (l_191.f0 <= 0); l_191.f0 += 1)
                    {
                        int8_t l_2077[2][6][10] = {{{0x43L,0x12L,0x43L,0x40L,0x46L,0x0DL,1L,1L,1L,1L},{0x46L,3L,0x0DL,0x0DL,3L,0x46L,1L,1L,0x26L,0xC1L},{0x12L,0xC1L,0x43L,(-1L),1L,(-1L),0x43L,0xC1L,0x12L,0x46L},{0x12L,0x0DL,0xB4L,1L,(-1L),0x46L,0x46L,(-1L),1L,0xB4L},{0x46L,0x46L,(-1L),1L,0xB4L,0x0DL,0x12L,1L,0x12L,0x0DL},{0x43L,(-1L),1L,(-1L),0x43L,0xC1L,0x12L,0x46L,0x26L,0x26L}},{{1L,0x46L,3L,0x0DL,0x0DL,3L,0x46L,1L,1L,0x26L},{1L,0x0DL,0x46L,0x40L,0x43L,0x12L,0x43L,0x40L,0x46L,0x0DL},{3L,0xC1L,0x46L,0x43L,0xB4L,0x40L,1L,1L,0x40L,0xB4L},{0x26L,3L,3L,0x26L,(-1L),0x40L,1L,0x46L,0xB4L,0x46L},{3L,0x12L,1L,0x46L,1L,0x12L,3L,0x43L,1L,0xB4L},{0x43L,0xC1L,0x12L,0x46L,0x26L,0x26L,0x46L,0x12L,0xC1L,0x43L}}};
                        int i, j, k;
                        if (l_2070[l_191.f0])
                            break;
                        ++l_2078;
                    }
                }
                if (((*****g_607) = (safe_sub_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u((((((g_3 |= ((*l_2086) = l_2085[1][4])) && (l_2072 || ((0x469DACD3L <= (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((1UL != (((safe_lshift_func_int8_t_s_s((+(l_2095 , (safe_sub_func_uint8_t_u_u(((g_197.f4 , (**g_1601)) != l_2098), (0xA47DA000L <= 0xB45D949AL))))), g_237)) , g_167[8][6][0]) , g_2099)))), 3))) == g_197.f0))) > l_2095.f1) > 251UL) || l_2095.f0), 0x94L)) != (*l_9)) == l_2085[1][4]), l_2085[1][1]))))
                {
                    uint32_t l_2106 = 0UL;
                    int8_t l_2120[10] = {0x66L,(-3L),0x66L,(-3L),0x66L,(-3L),0x66L,(-3L),0x66L,(-3L)};
                    uint32_t l_2151 = 0UL;
                    uint8_t *l_2152[9][4][7] = {{{&g_131,&g_131,&g_270[8][3][0],&l_13,(void*)0,(void*)0,&g_131},{&g_131,&l_13,&g_270[8][3][0],&l_13,&g_270[9][3][0],&g_270[8][3][0],&l_13},{&g_131,&g_270[8][3][0],&g_270[8][3][0],&g_270[8][3][0],&g_131,&g_270[7][2][0],&g_270[7][4][0]},{&g_270[0][2][0],&g_270[8][3][0],&l_13,&g_270[9][4][0],&l_13,&g_131,&g_270[6][4][0]}},{{(void*)0,&g_270[7][0][0],&g_131,&l_13,&g_131,&g_270[8][3][0],&g_270[8][3][0]},{&l_13,&g_270[7][0][0],&g_131,&l_13,&l_13,&g_270[4][4][0],(void*)0},{&g_270[8][3][0],&g_131,&g_270[7][2][0],&g_270[7][2][0],&g_131,&g_270[8][3][0],(void*)0},{&g_270[8][3][0],&g_131,&g_131,&g_270[2][4][0],&l_13,(void*)0,&g_270[8][3][0]}},{{(void*)0,&g_131,(void*)0,&g_270[8][3][0],(void*)0,&g_131,(void*)0},{&g_270[8][3][0],&g_131,&g_270[5][1][0],&g_270[1][3][0],&g_270[0][2][0],&g_270[7][3][0],&g_131},{&g_131,&g_131,&g_270[8][3][0],(void*)0,(void*)0,&l_13,&g_131},{&g_131,&g_270[7][0][0],(void*)0,(void*)0,&g_270[9][3][0],&l_13,&g_131}},{{&g_131,&g_270[7][0][0],&g_270[8][3][0],&g_131,&g_131,&g_270[8][3][0],&g_270[7][0][0]},{&g_270[4][2][0],&g_270[8][3][0],&l_13,&g_131,&g_270[0][1][0],(void*)0,(void*)0},{&g_131,&g_270[8][3][0],&g_270[8][3][0],&g_270[8][3][0],&g_131,&g_270[8][3][0],(void*)0},{(void*)0,&l_13,&l_13,&g_270[8][3][0],&g_270[8][3][0],(void*)0,&g_270[2][4][0]}},{{(void*)0,&g_131,&g_270[7][2][0],&g_270[8][3][0],&g_131,&g_270[7][4][0],&g_270[8][3][0]},{(void*)0,&g_270[8][3][0],&g_131,&g_131,&g_270[0][2][0],(void*)0,&g_270[8][3][0]},{&g_131,&g_270[6][1][0],&g_270[8][3][0],&l_13,&g_270[7][0][0],&g_270[8][3][0],&g_131},{&g_270[4][2][0],&g_270[4][0][0],&l_13,&g_270[1][3][0],&g_270[4][4][0],&g_270[0][2][0],&g_270[8][3][0]}},{{&g_131,&g_131,&l_13,&g_270[7][4][0],&g_270[8][3][0],&g_131,&g_131},{&g_131,&g_270[0][2][0],&g_270[8][3][0],&g_270[8][3][0],&g_270[7][0][0],&l_13,&g_270[7][0][0]},{&g_131,(void*)0,(void*)0,&g_131,&g_131,(void*)0,&g_270[7][4][0]},{&g_270[8][3][0],&g_270[8][3][0],&g_270[8][3][0],&l_13,&l_13,&g_270[8][3][0],&g_270[8][3][0]}},{{&l_13,&g_270[8][0][0],&g_270[8][3][0],&g_131,&g_270[7][4][0],&g_270[8][3][0],&g_131},{&g_270[8][3][0],&g_270[7][2][0],&g_131,&g_131,(void*)0,(void*)0,(void*)0},{&g_131,&g_131,&g_270[4][3][0],&g_131,&g_270[8][3][0],&g_131,&g_131},{&l_13,&g_270[4][4][0],&l_13,&g_131,&g_270[0][2][0],&g_270[9][4][0],&g_131}},{{(void*)0,&l_13,&g_270[8][3][0],&g_131,&g_131,(void*)0,&g_270[7][0][0]},{&g_270[8][3][0],&l_13,(void*)0,(void*)0,&l_13,&l_13,(void*)0},{(void*)0,&g_131,(void*)0,&g_131,(void*)0,(void*)0,(void*)0},{&g_131,&g_270[6][4][0],(void*)0,&g_270[2][4][0],&g_270[8][3][0],&l_13,&g_270[7][2][0]}},{{&g_270[5][0][0],&g_131,&g_131,&g_131,(void*)0,(void*)0,&g_270[7][2][0]},{&g_270[0][1][0],&g_270[1][3][0],&g_270[4][4][0],&g_270[7][0][0],(void*)0,&l_13,&g_131},{(void*)0,&l_13,&g_131,&g_270[8][3][0],&l_13,(void*)0,&l_13},{&g_131,&g_270[7][2][0],&g_270[8][3][0],&g_131,&g_270[4][4][0],&g_270[9][4][0],&g_270[8][3][0]}}};
                    int32_t l_2153 = (-1L);
                    int i, j, k;
                    if ((safe_rshift_func_uint16_t_u_s(((-6L) > (safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u((l_2106 |= l_2070[0]), (safe_rshift_func_int16_t_s_u(0L, (((l_2109 , (l_2110 = l_2095.f1)) ^ (((~(safe_sub_func_int8_t_s_s((l_2114[2][4][4] == (l_2095.f1 , l_2115[6][3])), 0x82L))) >= l_2109.f6) , g_991[1].f5)) >= 0x1E026892L))))) < g_991[1].f6), (*l_6)))), 13)))
                    {
                        uint32_t *l_2125 = &g_1714;
                        uint32_t l_2130 = 0xDA9B043FL;
                        (****g_607) = func_44((**g_1090), (((safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(0x9A8EL, (g_1969.f0 || g_197.f4))), l_2120[6])) , (safe_lshift_func_int16_t_s_u((-1L), ((g_1092.f1 & ((++(*l_2125)) <= (0xF30AF4EFL < (safe_mul_func_int16_t_s_s((g_101.f4 || 5UL), g_991[1].f0))))) == 3L)))) , (void*)0), (***g_608));
                        l_2130++;
                        (***g_608) = (*g_148);
                        (**g_148) = ((safe_add_func_int8_t_s_s((g_630 , g_11[2][5][1]), (-8L))) != ((g_495 == l_2135) > g_587));
                    }
                    else
                    {
                        return l_2109.f1;
                    }
                    g_991[1].f5 &= (safe_rshift_func_uint8_t_u_s((l_2153 = (l_2106 , ((((0xF4L != ((safe_mul_func_uint8_t_u_u((((0xDEL >= (((+((*l_6) = (safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(((*l_8) != (((*****g_607) ^= (((0xB876L || l_2072) , l_2106) & (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((l_2149 != l_2150) != l_2151), 1L)), l_2120[9])))) && 0xD9A8E20AL)), (*l_6))), g_109.f0)))) ^ l_2109.f4) | l_2109.f1)) >= l_2120[6]) , (*l_6)), 0UL)) <= l_2109.f0)) & 0x05L) , (-4L)) || 1UL))), g_197.f1));
                }
                else
                {
                    uint32_t l_2171 = 6UL;
                    uint16_t l_2175 = 65531UL;
                    int32_t l_2177 = (-1L);
                    for (g_644 = 0; (g_644 <= 0); g_644 += 1)
                    {
                        uint64_t l_2167 = 0xF671779F70F8DF23LL;
                        int32_t l_2168 = 0x1914F24EL;
                        l_2168 |= (safe_sub_func_uint64_t_u_u((safe_div_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((((l_2160 , ((*l_8) == 0L)) && l_2072) < (safe_div_func_int16_t_s_s((((0x30729787AE50C713LL == (safe_div_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(l_2167, ((((*g_1316) = 0L) && 18446744073709551615UL) , ((-1L) & l_2061)))), (-2L)))) < g_587) ^ g_797[4]), g_11[2][6][4]))) ^ 0xD0L), 0x7B419E5732623984LL)), l_2109.f6)), l_2061));
                    }
                    (***g_608) = (void*)0;
                    for (g_237 = 0; (g_237 <= 2); g_237 += 1)
                    {
                        int32_t *l_2173 = &g_11[2][7][3];
                        int8_t *l_2174 = &g_2060;
                        int32_t l_2178 = (-4L);
                        int32_t l_2179[9][8][3] = {{{0x96BBD4EAL,7L,(-8L)},{0x6CB53C8AL,(-5L),0x12E041DBL},{0x2DD6A396L,(-7L),0x25A0D5BDL},{0xD3165523L,0x7AE01662L,0xA3386FCBL},{0L,(-7L),0x77323F69L},{0xA0A4786FL,(-5L),0x0B027C4EL},{1L,7L,0xEF7F2C7DL},{0x7AE01662L,0L,9L}},{{(-1L),(-2L),0x96BBD4EAL},{0xAE02229AL,0xA3386FCBL,0xF20AA4E0L},{0x96BBD4EAL,0xD8D6D521L,8L},{0x6A6C32D5L,0xFD377CB7L,0x12E041DBL},{(-6L),(-5L),8L},{(-1L),0x7AE01662L,0xF20AA4E0L},{0xDE05F49EL,(-7L),0x96BBD4EAL},{0xA0A4786FL,0xE2B123D4L,9L}},{{0xEF7F2C7DL,(-7L),0xEF7F2C7DL},{1L,0x01B250C5L,0x0B027C4EL},{0xEF7A9B61L,(-2L),0x77323F69L},{0xA2372A99L,0xA0A4786FL,0xA3386FCBL},{0x96BBD4EAL,(-1L),0x25A0D5BDL},{0xA2372A99L,(-3L),0x12E041DBL},{0xEF7A9B61L,0xA3223991L,(-8L)},{1L,0x7AE01662L,0L}},{{0xEF7F2C7DL,1L,0x2079DA7CL},{0xA0A4786FL,(-1L),0x765F7E31L},{0xDE05F49EL,0L,0xEF7F2C7DL},{(-1L),0xF20AA4E0L,(-3L)},{(-6L),(-2L),0xF27C8FEDL},{0x6A6C32D5L,0xF20AA4E0L,0x01B250C5L},{0x96BBD4EAL,0L,0L},{0xAE02229AL,(-1L),0x12E041DBL}},{{(-1L),1L,0x3113C9F4L},{0x7AE01662L,0x7AE01662L,0xA0A4786FL},{1L,0xA3223991L,1L},{0xA0A4786FL,(-3L),(-5L)},{(-8L),0xAB838970L,0x25A0D5BDL},{0xF20AA4E0L,0x6A6C32D5L,(-5L)},{0xF27C8FEDL,(-5L),(-1L)},{0x52C071AFL,0xAE02229AL,0x6A6C32D5L}},{{0L,(-2L),0x91B12794L},{(-3L),0x7AE01662L,(-3L)},{0x77323F69L,(-1L),(-10L)},{0L,0xA0A4786FL,0xAE02229AL},{0x3113C9F4L,2L,0xDE05F49EL},{0x6A6C32D5L,0xD3165523L,(-1L)},{0x3113C9F4L,(-3L),0x25A0D5BDL},{0L,0x6CB53C8AL,(-3L)}},{{0x77323F69L,(-5L),0xEF7F2C7DL},{(-3L),0x12E041DBL,0x12E041DBL},{0L,0x897CACC2L,0xE76AE532L},{0x52C071AFL,0L,(-3L)},{0xF27C8FEDL,0x2665B0F5L,0L},{0xF20AA4E0L,0xA0A4786FL,0x6CB53C8AL},{(-8L),0x2665B0F5L,1L},{0x6A6C32D5L,0L,0xFD377CB7L}},{{0L,0x897CACC2L,0x25A0D5BDL},{0xA0A4786FL,0x12E041DBL,0xE2B123D4L},{0x96BBD4EAL,(-5L),0L},{0x0B027C4EL,0x6CB53C8AL,0xA2372A99L},{0L,(-3L),0xD642CDEAL},{0x765F7E31L,0xD3165523L,(-3L)},{1L,2L,0xD642CDEAL},{0xA3386FCBL,0xA0A4786FL,0xA2372A99L}},{{8L,(-1L),0L},{0x6A6C32D5L,0x7AE01662L,0xE2B123D4L},{0x25A0D5BDL,(-2L),0x25A0D5BDL},{0x01B250C5L,0xAE02229AL,0xFD377CB7L},{0x2079DA7CL,(-5L),1L},{9L,0x6A6C32D5L,0x6CB53C8AL},{0L,0xAB838970L,0L},{9L,(-1L),(-3L)}}};
                        uint32_t l_2181 = 0x081C2900L;
                        int i, j, k;
                        (*l_9) ^= (0x43L || ((safe_div_func_int32_t_s_s((g_797[(g_237 + 1)] == (((*l_2174) = (0x18L > (0x39L < ((l_2171 != g_797[(g_237 + 1)]) || (((**g_404) = func_37(l_2173)) , g_991[1].f2))))) & 0x96L)), l_2175)) >= l_2175));
                        --l_2181;
                        return l_2072;
                    }
                }
            }
        }
        else
        {
            uint32_t l_2186 = 0x059B8BC5L;
            for (g_630.f1 = 0; (g_630.f1 > (-20)); --g_630.f1)
            {
                uint8_t l_2189 = 1UL;
                ++l_2186;
                return l_2189;
            }
            for (l_2048 = (-22); (l_2048 >= 47); l_2048++)
            {
                return g_991[1].f3;
            }
            (*g_148) = (***g_608);
            (*l_6) |= (!g_270[5][1][0]);
        }
    }
    else
    {
        int32_t *l_2193 = &g_11[2][6][4];
        int32_t l_2197 = (-1L);
        struct S2 l_2202[10] = {{0xC760L,0L,0x2F002739L},{0xFF75L,-1L,0x5685E9D0L},{0xC760L,0L,0x2F002739L},{0xFF75L,-1L,0x5685E9D0L},{0xC760L,0L,0x2F002739L},{0xFF75L,-1L,0x5685E9D0L},{0xC760L,0L,0x2F002739L},{0xFF75L,-1L,0x5685E9D0L},{0xC760L,0L,0x2F002739L},{0xFF75L,-1L,0x5685E9D0L}};
        struct S3 l_2218 = {12};
        const uint16_t *l_2233 = (void*)0;
        const uint16_t **l_2232 = &l_2233;
        int64_t *l_2265 = &g_101.f1;
        struct S1 *l_2282 = &g_2283[3];
        uint16_t l_2290 = 0x7EB8L;
        int16_t **l_2298[2];
        int i;
        for (i = 0; i < 2; i++)
            l_2298[i] = (void*)0;
        for (l_191.f1 = 0; (l_191.f1 <= 0); l_191.f1 += 1)
        {
            int32_t l_2195 = 0xED562B99L;
            int32_t l_2196[5] = {(-5L),(-5L),(-5L),(-5L),(-5L)};
            struct S3 *l_2221 = &g_406;
            int64_t *l_2263 = &g_1969.f0;
            struct S1 l_2280 = {0,14391,1,-44,-2,-203,15};
            union U5 **l_2300 = &g_513;
            union U5 **l_2302 = &g_513;
            int i;
        }
    }
    return (*l_6);
}







static struct S3 func_20(struct S3 p_21, struct S0 p_22)
{
    const uint16_t *l_1945[10];
    uint16_t *l_1946 = (void*)0;
    uint16_t **l_1947 = &l_1946;
    uint32_t l_1948[6] = {0x18DF5784L,0x18DF5784L,0UL,0x18DF5784L,0x18DF5784L,0UL};
    int32_t l_1949[2][3] = {{0x55F71172L,0x55F71172L,0x5D274DADL},{0x55F71172L,0x55F71172L,0x5D274DADL}};
    int16_t *l_1950 = &g_797[7];
    uint32_t l_1951 = 0x51FB0D0AL;
    uint8_t l_1952 = 255UL;
    int32_t l_1953[10][6][1] = {{{0x708F4D3CL},{0L},{(-2L)},{0L},{0x708F4D3CL},{0L}},{{(-1L)},{(-9L)},{(-9L)},{(-1L)},{0L},{0x708F4D3CL}},{{0L},{(-2L)},{0L},{0x708F4D3CL},{0L},{(-1L)}},{{(-9L)},{(-9L)},{(-1L)},{0L},{0x708F4D3CL},{0L}},{{(-2L)},{0L},{0x708F4D3CL},{0L},{(-1L)},{(-9L)}},{{(-9L)},{(-1L)},{0L},{0x708F4D3CL},{0L},{(-2L)}},{{0L},{0x708F4D3CL},{0L},{(-1L)},{(-9L)},{(-9L)}},{{(-1L)},{0L},{0x708F4D3CL},{0L},{(-2L)},{0L}},{{0x708F4D3CL},{0L},{(-1L)},{(-9L)},{(-9L)},{(-1L)}},{{(-1L)},{(-2L)},{(-1L)},{1L},{(-1L)},{(-2L)}}};
    int64_t l_1961 = 0L;
    union U5 *l_1968 = &g_1969;
    struct S2 l_1997 = {0x60FFL,0L,0x33C31213L};
    int32_t *l_2008 = &g_101.f5;
    int32_t **l_2007 = &l_2008;
    struct S1 ***l_2019 = (void*)0;
    struct S3 ***l_2033 = &g_759;
    uint16_t *l_2035 = &g_73;
    int32_t *l_2036 = &g_1853;
    int32_t *l_2037 = &l_1949[0][0];
    int32_t *l_2038 = &l_1953[5][3][0];
    int32_t *l_2039[10] = {&g_1969.f2.f1,&g_1969.f2.f1,&g_1969.f2.f1,&g_1969.f2.f1,&g_1969.f2.f1,&g_1969.f2.f1,&g_1969.f2.f1,&g_1969.f2.f1,&g_1969.f2.f1,&g_1969.f2.f1};
    uint8_t l_2040 = 246UL;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_1945[i] = (void*)0;
    l_1953[5][3][0] = (safe_add_func_int64_t_s_s(((safe_add_func_int64_t_s_s(((1UL && ((((*g_1091) , ((p_22.f1 | (1UL == ((((*l_1950) ^= (safe_mul_func_int8_t_s_s((g_586 = (safe_rshift_func_int16_t_s_s((l_1949[0][0] = ((safe_div_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u(p_22.f5)) > ((!(p_22.f0 && (l_1945[3] == ((*l_1947) = l_1946)))) < l_1948[5])), l_1948[5])) != g_7)), p_22.f0))), p_22.f3))) > p_22.f5) ^ l_1951))) | p_22.f0)) , l_1949[0][0]) > l_1952)) | (-6L)), l_1951)) <= p_22.f1), l_1951));
    if (l_1948[5])
    {
        uint64_t l_1954 = 0UL;
        int32_t l_1958 = (-5L);
        int32_t l_1959 = 0x9ED32B14L;
        int32_t l_1960 = 1L;
        int32_t l_1962 = 0L;
        int32_t l_1963[5];
        uint8_t l_1964[2][9] = {{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL},{253UL,255UL,253UL,255UL,253UL,255UL,253UL,255UL,253UL}};
        struct S1 ***l_1983 = (void*)0;
        uint32_t l_1984[2];
        int i, j;
        for (i = 0; i < 5; i++)
            l_1963[i] = (-1L);
        for (i = 0; i < 2; i++)
            l_1984[i] = 4294967291UL;
        if (l_1954)
        {
            int32_t *l_1955 = &g_1853;
            int32_t *l_1956 = &l_1949[0][0];
            int32_t *l_1957[8] = {&g_167[8][6][0].f2.f1,&g_167[8][6][0].f2.f1,&g_167[8][6][0].f2.f1,&g_167[8][6][0].f2.f1,&g_167[8][6][0].f2.f1,&g_167[8][6][0].f2.f1,&g_167[8][6][0].f2.f1,&g_167[8][6][0].f2.f1};
            int i;
            (**g_404) = p_21;
            ++l_1964[1][4];
        }
        else
        {
            union U5 **l_1967[1];
            int16_t *l_1974 = &g_630.f1;
            int32_t l_1975 = 8L;
            uint32_t *l_1978 = &g_1979;
            int32_t l_1982 = 0xCB7D9844L;
            int i;
            for (i = 0; i < 1; i++)
                l_1967[i] = &g_513;
            l_1968 = &g_803;
            for (g_586 = 0; (g_586 <= 29); g_586 = safe_add_func_int8_t_s_s(g_586, 5))
            {
                uint8_t l_1985[6][7] = {{0x75L,0x75L,255UL,0x75L,0x75L,255UL,0x75L},{7UL,9UL,9UL,7UL,9UL,9UL,7UL},{5UL,0x75L,5UL,5UL,0x75L,5UL,5UL},{7UL,7UL,248UL,7UL,7UL,248UL,7UL},{0x75L,5UL,5UL,0x75L,5UL,5UL,0x75L},{9UL,7UL,9UL,9UL,7UL,9UL,9UL}};
                int8_t *l_1986[7][1] = {{&g_101.f3},{&g_101.f3},{&g_586},{&g_101.f3},{&g_101.f3},{&g_586},{&g_101.f3}};
                uint16_t *l_1987 = &g_240[3][3].f0;
                uint64_t *l_1988 = (void*)0;
                uint64_t *l_1989 = &g_373;
                int i, j;
                (**g_404) = func_37(func_50((((*l_1989) &= (((safe_lshift_func_int16_t_s_s((l_1946 != l_1974), l_1975)) > p_22.f4) & ((*l_1987) = (safe_add_func_uint8_t_u_u((l_1978 != (void*)0), (((g_101.f3 = ((((safe_add_func_int32_t_s_s((l_1982 = 0x0CAA0FF0L), ((((p_22.f4 < (((void*)0 != l_1983) != p_22.f1)) && p_22.f4) | l_1984[1]) ^ 1L))) || 0xA784L) & l_1985[0][5]) >= g_197.f3)) | l_1975) != p_22.f2)))))) , 0x33L), l_1985[0][5], &l_1975, l_1985[0][5]));
            }
        }
    }
    else
    {
        int32_t *l_1996 = &g_11[1][2][1];
        union U5 l_2014 = {-1L};
        struct S1 *l_2026[6][10][4] = {{{&g_991[7],&g_991[1],&g_991[1],&g_197},{&g_197,&g_991[1],&g_991[6],&g_991[1]},{&g_991[7],&g_991[7],&g_197,&g_991[7]},{&g_991[1],&g_197,&g_991[1],(void*)0},{&g_991[6],&g_991[1],&g_197,&g_991[6]},{&g_991[1],&g_991[7],&g_197,&g_991[7]},{&g_991[1],&g_197,&g_197,&g_197},{&g_991[6],&g_991[7],&g_991[1],&g_991[1]},{&g_991[1],&g_991[1],&g_197,&g_991[7]},{&g_991[7],&g_991[6],&g_991[6],&g_991[7]}},{{&g_197,&g_991[1],&g_991[1],&g_991[6]},{&g_991[7],&g_991[1],&g_197,&g_991[7]},{&g_991[1],&g_991[6],&g_197,&g_991[7]},{&g_197,&g_991[1],&g_197,&g_991[1]},{&g_991[7],&g_991[7],&g_991[4],&g_197},{&g_991[1],&g_197,&g_991[6],&g_991[7]},{&g_991[1],&g_991[7],&g_991[6],&g_991[6]},{&g_991[1],&g_991[1],&g_991[4],(void*)0},{&g_991[7],&g_197,&g_197,&g_991[7]},{&g_197,&g_991[7],&g_197,&g_991[1]}},{{&g_991[1],&g_991[1],&g_197,&g_197},{&g_991[7],&g_991[1],&g_991[1],&g_197},{&g_197,&g_991[1],&g_991[6],&g_991[1]},{&g_991[7],&g_991[7],&g_197,&g_991[7]},{&g_991[1],&g_197,&g_991[1],(void*)0},{&g_197,&g_991[1],&g_991[9],&g_197},{&g_991[1],&g_197,&g_991[8],&g_991[1]},{&g_991[1],(void*)0,&g_991[9],&g_991[6]},{&g_197,&g_991[1],&g_197,&g_197},{&g_991[1],&g_991[1],&g_991[1],&g_991[1]}},{{&g_991[1],&g_197,&g_197,&g_197},{(void*)0,&g_991[1],&g_197,&g_197},{&g_197,&g_991[1],&g_991[7],&g_197},{&g_991[1],&g_197,(void*)0,&g_991[1]},{&g_991[9],&g_991[1],&g_991[9],&g_197},{&g_197,&g_991[1],(void*)0,&g_991[6]},{&g_991[1],(void*)0,&g_197,&g_991[1]},{&g_991[4],&g_197,&g_197,&g_197},{&g_991[1],&g_991[1],(void*)0,&g_197},{&g_197,&g_991[9],&g_991[9],&g_197}},{{&g_991[9],&g_197,(void*)0,&g_991[4]},{&g_991[1],&g_991[1],&g_991[7],&g_991[6]},{&g_197,&g_991[4],&g_197,&g_991[6]},{(void*)0,&g_991[1],&g_197,&g_991[4]},{&g_991[1],&g_197,&g_991[1],&g_197},{&g_991[1],&g_991[9],&g_197,&g_197},{&g_197,&g_991[1],&g_991[9],&g_197},{&g_991[1],&g_197,&g_991[8],&g_991[1]},{&g_991[1],(void*)0,&g_991[9],&g_991[6]},{&g_197,&g_991[1],&g_197,&g_197}},{{&g_991[1],&g_991[1],&g_991[1],&g_991[1]},{&g_991[1],&g_197,&g_197,&g_197},{(void*)0,&g_991[1],&g_197,&g_197},{&g_197,&g_991[1],&g_991[7],&g_197},{&g_991[1],&g_197,(void*)0,&g_991[1]},{&g_991[9],&g_991[1],&g_991[9],&g_197},{&g_197,&g_991[1],(void*)0,&g_991[6]},{&g_991[1],(void*)0,&g_197,&g_991[1]},{&g_991[4],&g_197,&g_197,&g_197},{&g_991[1],&g_991[1],(void*)0,&g_197}}};
        const struct S2 l_2034 = {65527UL,1L,4294967286UL};
        int i, j, k;
        if ((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((void*)0 == &g_1598), ((g_197.f0 < ((safe_add_func_int64_t_s_s((-1L), (l_1997 , 18446744073709551608UL))) || 0x08D8L)) , 0x37L))), g_11[2][6][4])))
        {
            uint64_t l_2004 = 9UL;
            int32_t ***l_2009 = &l_2007;
            uint64_t *l_2010[5][9] = {{&l_2004,&l_2004,&l_2004,&l_2004,&g_587,&g_587,&l_2004,&g_587,&l_2004},{&g_587,&l_2004,&l_2004,&l_2004,&l_2004,&g_587,&g_587,&l_2004,(void*)0},{&g_373,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_373,&l_2004},{(void*)0,&l_2004,&g_373,&g_587,&g_587,&g_587,&g_587,&g_373,&l_2004},{&g_587,&g_373,(void*)0,&l_2004,&l_2004,&l_2004,&l_2004,&l_2004,&l_2004}};
            int32_t l_2011[6] = {0x449CC9C8L,1L,1L,0x449CC9C8L,1L,1L};
            int i, j;
            (*l_1996) = ((safe_rshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u((((p_22.f2 > (p_22.f5 ^ (l_2011[0] ^= (safe_rshift_func_int16_t_s_s(((g_197.f2 = l_2004) != (safe_mul_func_uint16_t_u_u((((*l_2009) = l_2007) == &l_2008), l_2004))), 14))))) > ((safe_sub_func_uint8_t_u_u(((l_2014 , (((void*)0 == &g_608) || 5UL)) , 4UL), (-10L))) < 0x84L)) ^ l_2004), p_22.f3)), (*l_1996))) >= l_2004);
        }
        else
        {
            struct S1 ****l_2020 = &l_2019;
            struct S1 *l_2025 = (void*)0;
            int32_t *l_2027 = (void*)0;
            int32_t *l_2028 = &l_1953[5][3][0];
            (*l_1996) &= (-1L);
            (*l_2028) |= (safe_mod_func_uint64_t_u_u(7UL, (((p_21 = p_21) , (l_1949[1][0] = (((safe_lshift_func_uint8_t_u_u((g_197.f6 , (((((*l_2020) = l_2019) != g_2021) && (*l_1996)) ^ 0x4FL)), (safe_sub_func_int32_t_s_s((((p_22.f1 != l_1949[1][0]) , l_2025) == l_2026[2][8][0]), 0x91093605L)))) > 0x8CA16BD6C47297F2LL) >= p_22.f3))) , p_22.f1)));
        }
        (*l_1996) = (*g_495);
        (*g_148) = func_50((safe_rshift_func_int16_t_s_u((p_22.f1 | ((((*g_1259) != l_2033) >= ((l_2034 , l_2026[2][8][0]) == (**g_2021))) <= (*l_1996))), 3)), (&g_960[3][0] == ((*l_1947) = l_2035)), l_1996, g_11[2][6][4]);
    }
    l_2040--;
    return p_21;
}







static struct S3 func_23(int32_t * p_24, uint64_t p_25)
{
    uint32_t l_1287 = 4294967295UL;
    struct S2 l_1302 = {0x0A0DL,1L,0x56410E23L};
    int32_t *l_1303 = &g_111;
    int16_t *l_1304 = &g_630.f1;
    int16_t *l_1305 = (void*)0;
    int16_t *l_1306 = (void*)0;
    int16_t *l_1307 = (void*)0;
    int16_t *l_1308[4] = {&g_797[0],&g_797[0],&g_797[0],&g_797[0]};
    int32_t *l_1309 = &g_167[8][6][0].f2.f1;
    int32_t *l_1310 = &g_803.f2.f1;
    uint64_t *l_1311[3][5][5] = {{{&g_373,(void*)0,(void*)0,&g_373,(void*)0},{&g_373,&g_373,&g_587,&g_587,&g_587},{&g_373,&g_587,(void*)0,&g_587,&g_373},{&g_373,(void*)0,&g_587,&g_587,(void*)0},{&g_587,(void*)0,&g_373,&g_373,(void*)0}},{{(void*)0,&g_587,&g_373,(void*)0,(void*)0},{&g_587,&g_373,&g_373,&g_3,&g_373},{(void*)0,(void*)0,&g_373,(void*)0,&g_587},{&g_587,&g_587,&g_587,(void*)0,(void*)0},{(void*)0,&g_3,(void*)0,&g_3,&g_587}},{{&g_587,&g_587,&g_587,(void*)0,&g_587},{&g_373,(void*)0,(void*)0,&g_373,(void*)0},{&g_373,&g_373,&g_587,&g_587,&g_587},{&g_373,&g_587,(void*)0,&g_587,&g_373},{&g_373,(void*)0,&g_587,&g_587,(void*)0}}};
    uint64_t *l_1312[2];
    struct S2 **l_1330[5];
    int16_t l_1375 = 0xC15AL;
    int32_t l_1415 = 0x0AA2B0C3L;
    int32_t l_1416 = 7L;
    int32_t l_1417 = 1L;
    union U5 l_1421 = {0xBEC46A97197B141ELL};
    int32_t l_1468[8] = {(-4L),0xABF60C93L,(-4L),(-4L),0xABF60C93L,(-4L),(-4L),0xABF60C93L};
    uint32_t l_1550 = 2UL;
    uint32_t l_1551[8];
    union U4 l_1559[8] = {{0x045A7DFEF5DEBC18LL},{0x045A7DFEF5DEBC18LL},{0x045A7DFEF5DEBC18LL},{0x045A7DFEF5DEBC18LL},{0x045A7DFEF5DEBC18LL},{0x045A7DFEF5DEBC18LL},{0x045A7DFEF5DEBC18LL},{0x045A7DFEF5DEBC18LL}};
    struct S2 l_1594 = {0xFCEEL,0x467AFA36L,0UL};
    struct S0 ***l_1600 = &g_1598;
    const int64_t *l_1619 = (void*)0;
    const int64_t **l_1618[6][3][6] = {{{&l_1619,&l_1619,&l_1619,&l_1619,&l_1619,&l_1619},{&l_1619,&l_1619,&l_1619,&l_1619,&l_1619,&l_1619},{(void*)0,&l_1619,(void*)0,&l_1619,&l_1619,&l_1619}},{{&l_1619,(void*)0,&l_1619,&l_1619,&l_1619,&l_1619},{&l_1619,&l_1619,&l_1619,&l_1619,&l_1619,&l_1619},{(void*)0,&l_1619,&l_1619,&l_1619,&l_1619,&l_1619}},{{&l_1619,(void*)0,&l_1619,&l_1619,&l_1619,&l_1619},{&l_1619,&l_1619,&l_1619,&l_1619,&l_1619,&l_1619},{&l_1619,&l_1619,&l_1619,&l_1619,&l_1619,&l_1619}},{{(void*)0,&l_1619,(void*)0,&l_1619,&l_1619,&l_1619},{&l_1619,(void*)0,&l_1619,&l_1619,&l_1619,&l_1619},{&l_1619,&l_1619,&l_1619,&l_1619,&l_1619,&l_1619}},{{(void*)0,&l_1619,&l_1619,&l_1619,&l_1619,&l_1619},{&l_1619,(void*)0,&l_1619,&l_1619,&l_1619,&l_1619},{&l_1619,&l_1619,&l_1619,&l_1619,&l_1619,&l_1619}},{{&l_1619,&l_1619,&l_1619,&l_1619,&l_1619,(void*)0},{&l_1619,&l_1619,&l_1619,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1619,&l_1619,&l_1619,&l_1619,&l_1619}}};
    const int64_t ***l_1617 = &l_1618[3][2][3];
    const int64_t ****l_1616[10][2] = {{&l_1617,&l_1617},{&l_1617,&l_1617},{&l_1617,&l_1617},{&l_1617,&l_1617},{&l_1617,&l_1617},{&l_1617,&l_1617},{&l_1617,&l_1617},{&l_1617,&l_1617},{&l_1617,&l_1617},{&l_1617,&l_1617}};
    uint8_t l_1644 = 1UL;
    uint32_t l_1665 = 0x691015F4L;
    int16_t l_1724 = 0xB810L;
    struct S3 l_1728 = {2};
    uint32_t l_1738 = 0UL;
    uint8_t ***l_1774 = (void*)0;
    struct S1 l_1795 = {0,-11162,6,-37,1,328,15};
    uint16_t l_1860[3];
    int8_t l_1882 = 0x64L;
    int32_t l_1890 = (-1L);
    uint32_t l_1909 = 9UL;
    struct S3 ***l_1911 = (void*)0;
    uint8_t l_1919 = 0xB6L;
    int32_t ** const *l_1926 = &g_148;
    int32_t ** const **l_1925[1][10][6] = {{{&l_1926,&l_1926,(void*)0,&l_1926,&l_1926,&l_1926},{&l_1926,&l_1926,&l_1926,(void*)0,&l_1926,(void*)0},{&l_1926,&l_1926,&l_1926,&l_1926,(void*)0,&l_1926},{&l_1926,&l_1926,&l_1926,&l_1926,&l_1926,&l_1926},{&l_1926,(void*)0,&l_1926,&l_1926,&l_1926,&l_1926},{&l_1926,&l_1926,&l_1926,&l_1926,&l_1926,&l_1926},{&l_1926,&l_1926,&l_1926,(void*)0,&l_1926,&l_1926},{&l_1926,&l_1926,&l_1926,&l_1926,&l_1926,&l_1926},{&l_1926,&l_1926,&l_1926,&l_1926,&l_1926,&l_1926},{&l_1926,&l_1926,&l_1926,&l_1926,&l_1926,&l_1926}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1312[i] = &g_3;
    for (i = 0; i < 5; i++)
        l_1330[i] = (void*)0;
    for (i = 0; i < 8; i++)
        l_1551[i] = 0xB98F8BF4L;
    for (i = 0; i < 3; i++)
        l_1860[i] = 0x8499L;
    (*l_1310) = (l_1287 , ((*l_1309) = (safe_lshift_func_int8_t_s_s((((-3L) & ((safe_div_func_int16_t_s_s((l_1302.f1 = ((*l_1304) = (safe_mod_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(((p_25 | (safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(255UL, 0UL)), ((g_197.f4 , ((*l_1303) = ((((g_197.f2 , &g_587) == (l_1302 , &p_25)) != p_25) > p_25))) & (*p_24))))) ^ 0L), p_25)), g_883)))), g_197.f2)) <= p_25)) , p_25), p_25))));
    return (**g_404);
}







static struct S2 func_27(uint64_t p_28, int32_t * p_29, int32_t * p_30)
{
    uint32_t l_899[2][4][5] = {{{4294967295UL,0xB7926559L,4294967288UL,4294967288UL,0xB7926559L},{0xB7926559L,0x0A059ED9L,4294967295UL,0xB7926559L,4294967288UL},{0x9ABCBEB9L,0xB7926559L,6UL,0xB7926559L,0x9ABCBEB9L},{4294967295UL,1UL,0x0A059ED9L,4294967288UL,1UL}},{{0x9ABCBEB9L,0x0A059ED9L,0x0A059ED9L,0x9ABCBEB9L,4294967288UL},{0xB7926559L,0x9ABCBEB9L,6UL,1UL,1UL},{4294967295UL,0x9ABCBEB9L,4294967295UL,4294967288UL,0x9ABCBEB9L},{1UL,0x0A059ED9L,4294967288UL,1UL,4294967288UL}}};
    union U4 l_908 = {0xDB00CCD57574F83CLL};
    uint8_t *l_911 = &g_131;
    int8_t *l_912[8][4][8] = {{{&g_101.f3,&g_101.f3,&g_586,&g_101.f3,&g_586,&g_101.f3,(void*)0,&g_586},{&g_586,&g_101.f3,(void*)0,(void*)0,(void*)0,&g_586,&g_586,&g_101.f3},{(void*)0,&g_586,&g_586,&g_101.f3,&g_101.f3,&g_101.f3,&g_101.f3,&g_586},{&g_101.f3,&g_101.f3,&g_101.f3,&g_586,&g_101.f3,&g_586,&g_586,(void*)0}},{{(void*)0,(void*)0,&g_101.f3,&g_586,(void*)0,&g_101.f3,&g_586,(void*)0},{(void*)0,&g_101.f3,&g_101.f3,&g_586,&g_101.f3,&g_101.f3,&g_101.f3,&g_586},{&g_101.f3,&g_586,&g_101.f3,&g_101.f3,&g_101.f3,&g_101.f3,&g_101.f3,&g_101.f3},{&g_101.f3,(void*)0,&g_586,&g_586,&g_101.f3,&g_101.f3,(void*)0,&g_101.f3}},{{&g_101.f3,&g_101.f3,&g_586,&g_586,&g_101.f3,(void*)0,&g_101.f3,&g_586},{&g_101.f3,(void*)0,(void*)0,&g_586,&g_101.f3,&g_101.f3,(void*)0,(void*)0},{&g_586,(void*)0,&g_101.f3,&g_101.f3,(void*)0,&g_586,&g_586,(void*)0},{&g_586,&g_586,&g_586,&g_586,&g_586,&g_101.f3,&g_586,(void*)0}},{{(void*)0,&g_586,&g_586,&g_586,&g_101.f3,&g_101.f3,(void*)0,&g_101.f3},{&g_101.f3,&g_586,&g_101.f3,&g_101.f3,(void*)0,&g_101.f3,&g_101.f3,(void*)0},{(void*)0,&g_586,&g_586,&g_101.f3,&g_101.f3,&g_586,&g_101.f3,&g_586},{&g_101.f3,(void*)0,&g_586,(void*)0,&g_101.f3,&g_101.f3,(void*)0,&g_586}},{{&g_101.f3,(void*)0,(void*)0,&g_586,&g_101.f3,(void*)0,&g_101.f3,(void*)0},{&g_586,&g_101.f3,(void*)0,&g_101.f3,&g_586,&g_101.f3,(void*)0,&g_101.f3},{&g_101.f3,&g_586,&g_586,&g_586,&g_101.f3,&g_586,&g_101.f3,&g_101.f3},{(void*)0,&g_586,&g_586,&g_586,&g_586,(void*)0,&g_101.f3,(void*)0}},{{&g_101.f3,&g_101.f3,&g_101.f3,&g_586,&g_101.f3,&g_101.f3,(void*)0,&g_101.f3},{&g_101.f3,(void*)0,&g_586,&g_586,(void*)0,(void*)0,&g_586,(void*)0},{&g_586,(void*)0,&g_586,&g_586,&g_101.f3,&g_101.f3,&g_586,&g_101.f3},{(void*)0,&g_586,&g_101.f3,&g_586,&g_101.f3,&g_586,(void*)0,&g_101.f3}},{{&g_101.f3,&g_586,(void*)0,&g_101.f3,(void*)0,(void*)0,&g_101.f3,(void*)0},{&g_586,(void*)0,&g_586,&g_586,(void*)0,&g_586,(void*)0,&g_586},{&g_101.f3,&g_101.f3,&g_586,(void*)0,&g_101.f3,&g_101.f3,(void*)0,&g_586},{(void*)0,(void*)0,&g_586,&g_101.f3,&g_101.f3,&g_586,(void*)0,(void*)0}},{{&g_586,&g_586,(void*)0,&g_101.f3,(void*)0,&g_101.f3,&g_586,&g_101.f3},{&g_101.f3,&g_586,&g_586,&g_586,&g_101.f3,&g_101.f3,&g_101.f3,(void*)0},{&g_101.f3,&g_586,&g_101.f3,&g_586,&g_586,&g_586,&g_101.f3,(void*)0},{(void*)0,&g_101.f3,&g_101.f3,&g_101.f3,&g_101.f3,&g_101.f3,&g_101.f3,&g_101.f3}}};
    int32_t l_913[9] = {0x6A6CC81DL,0L,0L,0x6A6CC81DL,0L,0L,0x6A6CC81DL,0L,0L};
    struct S1 *l_929 = &g_197;
    struct S1 **l_935 = &l_929;
    struct S1 ***l_934 = &l_935;
    struct S1 *** const *l_933 = &l_934;
    struct S1 **l_980 = (void*)0;
    uint32_t l_985 = 1UL;
    int32_t l_1003[6][3][3] = {{{(-1L),(-1L),0x1B2E0469L},{0x3025A8B9L,0x8D3D6DE8L,0xEAF23546L},{2L,(-1L),2L}},{{5L,0x3025A8B9L,1L},{0x6CE4FBABL,2L,2L},{1L,5L,0xEAF23546L}},{{0x35A02935L,0x6CE4FBABL,0x1B2E0469L},{1L,1L,0x46B2DD99L},{0x6CE4FBABL,0x35A02935L,0x8DC5BF74L}},{{5L,1L,5L},{2L,0x6CE4FBABL,(-1L)},{0x3025A8B9L,5L,5L}},{{(-1L),2L,0x8DC5BF74L},{0x8D3D6DE8L,0x3025A8B9L,0x46B2DD99L},{(-1L),(-1L),0x1B2E0469L}},{{0x3025A8B9L,0x8D3D6DE8L,0xEAF23546L},{2L,(-1L),2L},{5L,0x3025A8B9L,1L}}};
    uint32_t l_1029[4];
    struct S2 l_1059 = {4UL,0L,0x7FC64641L};
    int32_t *l_1067 = &g_11[2][0][3];
    struct S3 l_1075 = {4};
    const struct S2 *l_1088 = &g_240[3][3];
    const struct S2 **l_1087 = &l_1088;
    struct S0 l_1099 = {0L,0x5C8C7BA59A27003ALL,46,-1L,8,-6L};
    uint16_t *l_1161 = (void*)0;
    int16_t ***l_1196 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1029[i] = 0UL;
    if ((safe_add_func_int16_t_s_s(((0xD5A999EBB5FC32F2LL || (safe_mod_func_uint8_t_u_u(l_899[0][3][3], (((l_899[1][0][1] == (safe_div_func_uint16_t_u_u((0x1BL <= (l_913[5] = (((((((safe_add_func_int8_t_s_s((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((l_899[1][3][0] == (&g_586 != (l_908 , &g_586))), 3)), ((((*l_911) &= (safe_rshift_func_int8_t_s_s(((((*g_100) , &g_73) == (void*)0) & p_28), 4))) >= l_899[0][3][3]) ^ l_908.f1))), (-7L))) && l_908.f1) , 4294967294UL) , 1L) != 0x2537L) || (*g_495)) || l_899[1][2][2]))), p_28))) == 0xD5D5L) || 4UL)))) && l_913[5]), l_908.f1)))
    {
        struct S0 l_923 = {0x8577989BL,5L,136,-7L,8,-10L};
        int32_t l_936 = 0xEDA4EBF0L;
        union U4 l_952 = {6L};
        struct S1 **l_979 = (void*)0;
        const union U5 l_1013 = {0x7174923C2032DD45LL};
        int32_t l_1041 = 0x73137DD3L;
        int32_t l_1043 = 0x479447F1L;
        int32_t l_1044[8][4] = {{0x770E4803L,0xDB1B0636L,0x9403A7B3L,0x9403A7B3L},{0xDB1B0636L,0xDB1B0636L,(-7L),0x9403A7B3L},{0x770E4803L,0xDB1B0636L,0x9403A7B3L,0x9403A7B3L},{0xDB1B0636L,0xDB1B0636L,(-7L),0x9403A7B3L},{0x770E4803L,0xDB1B0636L,0x9403A7B3L,0x9403A7B3L},{0xDB1B0636L,0xDB1B0636L,(-7L),0x9403A7B3L},{0x770E4803L,0xDB1B0636L,0x9403A7B3L,0x9403A7B3L},{0xDB1B0636L,0xDB1B0636L,(-7L),0x9403A7B3L}};
        struct S2 l_1093 = {0x2BBAL,0xE827906DL,1UL};
        uint32_t l_1143 = 0x83EFCAB5L;
        uint8_t l_1158 = 6UL;
        int16_t ***l_1197 = (void*)0;
        int32_t *l_1203 = &g_167[8][6][0].f2.f1;
        int32_t *l_1204 = &g_240[3][3].f1;
        int32_t *l_1205 = &g_803.f2.f1;
        int32_t *l_1206 = &l_1043;
        int32_t *l_1207 = &l_913[8];
        int32_t *l_1208[9] = {&g_11[2][6][4],&g_11[2][6][4],&g_11[2][6][4],&g_11[2][6][4],&g_11[2][6][4],&g_11[2][6][4],&g_11[2][6][4],&g_11[2][6][4],&g_11[2][6][4]};
        uint32_t l_1209 = 0x8EE112A0L;
        int8_t *l_1218 = &l_1099.f3;
        uint32_t l_1230[10][2];
        int i, j;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 2; j++)
                l_1230[i][j] = 4294967287UL;
        }
        for (g_101.f3 = 0; (g_101.f3 <= 23); g_101.f3 = safe_add_func_int32_t_s_s(g_101.f3, 7))
        {
            struct S1 **l_930 = &g_928;
            int32_t *l_931 = (void*)0;
            struct S1 **** const l_932 = (void*)0;
            const int32_t l_986 = 0x673A09F7L;
            int8_t l_987[3][10];
            const int32_t l_988 = 0x5F6D1278L;
            struct S2 l_1014 = {0UL,0L,0x3C372B0BL};
            uint8_t l_1030[1];
            int32_t l_1039 = 0xBB6C7E2AL;
            int32_t l_1046 = 0x9F81C2E6L;
            int32_t l_1047 = (-1L);
            int32_t l_1049 = 1L;
            int32_t l_1050 = (-9L);
            int32_t l_1051[10][4][2] = {{{1L,0x0EF5F11EL},{0x62A7D1CEL,0x55DA2BDFL},{0L,0x798BAEC0L},{0x806ED0C9L,0L}},{{0x99B45C55L,0x545CE75DL},{0x99B45C55L,0L},{0x806ED0C9L,0x798BAEC0L},{0L,0x55DA2BDFL}},{{0x62A7D1CEL,0x0EF5F11EL},{1L,0x1F2564B7L},{0x1F2564B7L,0xD0BFD0B7L},{0x35A3CFFAL,1L}},{{0x545CE75DL,0x170B6735L},{0x0EF5F11EL,0x170B6735L},{0x545CE75DL,1L},{0x35A3CFFAL,0xD0BFD0B7L}},{{0x1F2564B7L,0x1F2564B7L},{1L,0x0EF5F11EL},{0x62A7D1CEL,0x55DA2BDFL},{0L,0x798BAEC0L}},{{0x806ED0C9L,0L},{0x99B45C55L,0x545CE75DL},{0x99B45C55L,0L},{0x806ED0C9L,0x798BAEC0L}},{{0L,0x55DA2BDFL},{0x62A7D1CEL,0x0EF5F11EL},{1L,0x1F2564B7L},{0x1F2564B7L,0xD0BFD0B7L}},{{0x35A3CFFAL,1L},{0x545CE75DL,0x170B6735L},{0x0EF5F11EL,0x170B6735L},{0x545CE75DL,1L}},{{0x35A3CFFAL,0xD0BFD0B7L},{0x1F2564B7L,0x1F2564B7L},{1L,0x0EF5F11EL},{0x62A7D1CEL,0x55DA2BDFL}},{{0L,0x798BAEC0L},{0x806ED0C9L,0L},{0x99B45C55L,0x545CE75DL},{0x99B45C55L,0L}}};
            const union U5 l_1124 = {0xB7D28D5097E2CCF8LL};
            uint16_t l_1174 = 0xB73FL;
            uint32_t *l_1187 = &g_892;
            int16_t *l_1199 = &l_908.f1;
            int32_t *l_1200 = &l_1039;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 10; j++)
                    l_987[i][j] = 1L;
            }
            for (i = 0; i < 1; i++)
                l_1030[i] = 255UL;
        }
        l_936 ^= (safe_rshift_func_uint8_t_u_s(l_1044[5][0], 4));
        ++l_1209;
        for (g_587 = 26; (g_587 < 13); g_587 = safe_sub_func_uint64_t_u_u(g_587, 7))
        {
            struct S3 *** const **l_1219 = (void*)0;
            struct S3 **l_1223 = &g_297;
            struct S3 **l_1224 = &g_297;
            struct S3 **l_1225 = &g_297;
            struct S3 *** const l_1222[6][4][8] = {{{&l_1224,&l_1225,&l_1224,&l_1224,&l_1225,&l_1224,&l_1224,&l_1225},{&l_1225,&l_1224,&l_1224,&l_1225,&l_1224,&l_1224,&l_1225,&l_1224},{&l_1225,&l_1225,&l_1223,&l_1225,&l_1225,&l_1223,&l_1225,&l_1225},{&l_1224,&l_1225,&l_1224,&l_1224,&l_1225,&l_1224,&l_1224,&l_1225}},{{&l_1225,&l_1224,&l_1224,&l_1225,&l_1224,&l_1224,&l_1225,&l_1224},{&l_1225,&l_1225,&l_1223,&l_1225,&l_1225,&l_1223,&l_1225,&l_1225},{&l_1224,&l_1225,&l_1224,&l_1224,&l_1225,&l_1224,&l_1224,&l_1225},{&l_1225,&l_1224,&l_1224,&l_1225,&l_1224,&l_1224,&l_1225,&l_1224}},{{&l_1225,&l_1225,&l_1223,&l_1225,&l_1225,&l_1223,&l_1225,&l_1225},{&l_1224,&l_1225,&l_1224,&l_1224,&l_1225,&l_1224,&l_1224,&l_1225},{&l_1225,&l_1224,&l_1224,&l_1225,&l_1224,&l_1224,&l_1225,&l_1224},{&l_1225,&l_1225,&l_1223,&l_1225,&l_1225,&l_1223,&l_1225,&l_1225}},{{&l_1224,&l_1225,&l_1224,&l_1224,&l_1225,&l_1224,&l_1224,&l_1225},{&l_1225,&l_1224,&l_1224,&l_1225,&l_1224,&l_1224,&l_1225,&l_1224},{&l_1225,&l_1225,&l_1223,&l_1225,&l_1225,&l_1223,&l_1225,&l_1225},{&l_1224,&l_1225,&l_1224,&l_1224,&l_1225,&l_1224,&l_1224,&l_1225}},{{&l_1225,&l_1224,&l_1224,&l_1225,&l_1224,&l_1224,&l_1225,&l_1224},{&l_1225,&l_1225,&l_1223,&l_1225,&l_1225,&l_1223,&l_1225,&l_1225},{&l_1224,&l_1225,&l_1224,&l_1224,&l_1225,&l_1224,&l_1224,&l_1225},{&l_1225,&l_1224,&l_1224,&l_1225,&l_1224,&l_1224,&l_1225,&l_1224}},{{&l_1225,&l_1225,&l_1223,&l_1225,&l_1225,&l_1223,&l_1225,&l_1225},{&l_1224,&l_1225,&l_1224,&l_1224,&l_1225,&l_1224,&l_1224,&l_1225},{&l_1225,&l_1224,&l_1224,&l_1225,&l_1224,&l_1224,&l_1225,&l_1224},{&l_1225,&l_1225,&l_1223,&l_1225,&l_1225,&l_1223,&l_1224,&l_1224}}};
            struct S3 *** const *l_1221 = &l_1222[3][2][7];
            struct S3 *** const **l_1220 = &l_1221;
            int32_t l_1226 = 1L;
            int16_t *l_1229 = &g_797[4];
            int8_t l_1251 = 0xBDL;
            int i, j, k;
            (*l_1206) |= ((safe_add_func_int64_t_s_s((((((p_28 , ((((*l_1229) = (safe_mod_func_int32_t_s_s((252UL && ((void*)0 != l_1218)), ((((((*l_1220) = &g_758[0]) != &g_758[0]) ^ l_1226) < (safe_mul_func_uint8_t_u_u((((g_586 >= g_373) && 0x20L) , p_28), 0xAFL))) , (*l_1067))))) , l_1230[8][0]) && p_28)) || 0xF0AE0217L) , p_28) && p_28) < 0xC8L), g_892)) || p_28);
            for (l_923.f5 = 0; (l_923.f5 <= 2); l_923.f5 += 1)
            {
                uint16_t *l_1247 = (void*)0;
                (*l_1204) &= (safe_div_func_int32_t_s_s(0x6E09B9CCL, ((*l_1206) &= l_1226)));
                for (l_952.f0 = 0; (l_952.f0 <= 2); l_952.f0 += 1)
                {
                    int32_t ***l_1245[1];
                    uint16_t **l_1248 = &l_1161;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1245[i] = &g_148;
                    (**g_147) = func_44(((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_u((+(safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(p_28)), (++(*l_911))))), 1)) & 1L) && ((l_1245[0] = (**g_607)) != (((*l_911) = (((~(((*l_1248) = l_1247) == &g_73)) == ((*g_495) >= (safe_rshift_func_uint8_t_u_u(p_28, l_1251)))) < 2UL)) , (void*)0))) & (*l_1067)), 6)), 0xE9D68E1AL)) , (**g_1090)), p_29, &l_936);
                }
            }
        }
    }
    else
    {
        int32_t *l_1252 = &g_11[2][6][4];
        int32_t *l_1253[1][6] = {{&g_803.f2.f1,&l_913[5],&g_803.f2.f1,&g_803.f2.f1,&l_913[5],&g_803.f2.f1}};
        uint32_t l_1254 = 18446744073709551615UL;
        int i, j;
        --l_1254;
        (*g_405) = (*g_297);
        for (g_803.f2.f1 = (-17); (g_803.f2.f1 >= 26); g_803.f2.f1 = safe_add_func_uint64_t_u_u(g_803.f2.f1, 4))
        {
            struct S3 ****l_1261 = &g_758[0];
            struct S3 *****l_1260 = &l_1261;
            int32_t l_1266 = 0x0E578F72L;
            struct S3 *l_1280 = (void*)0;
            uint32_t *l_1282 = &l_899[0][3][3];
            uint32_t *l_1283 = &g_644;
            uint32_t *l_1284[3][3];
            int8_t l_1286[9][3][4] = {{{0x6EL,0x8FL,(-10L),7L},{1L,5L,0x6EL,0x71L},{(-3L),0L,(-2L),(-2L)}},{{1L,1L,0xB7L,0xDBL},{0x1FL,0x23L,0x49L,(-1L)},{0xC5L,0x77L,0x6AL,0x49L}},{{1L,0x77L,8L,(-1L)},{0x77L,0x23L,(-10L),0xDBL},{0xF5L,1L,1L,(-2L)}},{{(-7L),0L,(-6L),0x71L},{(-10L),5L,0xB5L,7L},{0x1FL,0x8FL,(-10L),0x23L}},{{0xF9L,0x8DL,(-1L),0x49L},{0x23L,0x6EL,0x77L,0x8FL},{0x8DL,1L,(-10L),1L}},{{0x1AL,(-10L),0x1AL,0xC0L},{0x8FL,0L,0x71L,0x6AL},{7L,1L,0xF8L,0L}},{{0x1FL,(-7L),0xF8L,(-3L)},{7L,0x1AL,0x71L,0x49L},{0x8FL,8L,0x1AL,0x4BL}},{{0x1AL,0x4BL,(-10L),0x1FL},{0x8DL,7L,0x77L,(-1L)},{0x23L,0L,(-1L),(-2L)}},{{0xF9L,0xC5L,(-10L),0xAAL},{0x1FL,(-3L),0xB5L,1L},{(-10L),0xF5L,(-6L),0x49L}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1284[i][j] = &l_1254;
            }
            for (g_587 = 0; g_587 < 1; g_587 += 1)
            {
                g_758[g_587] = &g_759;
            }
            l_1286[4][1][2] &= (((g_1285 = ((g_1259 != ((*l_1260) = &g_758[0])) != ((safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((l_1266 == (safe_div_func_int32_t_s_s(((0x4F58L == ((((*l_1283) = (((+(safe_mul_func_uint16_t_u_u((p_28 >= (safe_div_func_int16_t_s_s((((*l_1282) &= (g_630.f0 && (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(((*l_1067) |= (++g_270[8][3][0])), 5)) ^ (((***g_1259) = (void*)0) == l_1280)), (~0x6DL))))) ^ 0xE83DA5FFL), p_28))), p_28))) || 1L) & 0x5B963F86L)) ^ l_1266) && p_28)) & 0L), 2UL))), l_1266)), 0xBE848D27FFEE73F6LL)) & g_991[1].f0))) , &g_1259) != &g_1259);
        }
    }
    return (*l_1088);
}







static int32_t * func_32(struct S3 p_33, struct S2 p_34, struct S2 p_35, int32_t * p_36)
{
    int32_t l_192 = 0xAB741B8BL;
    union U5 l_206 = {6L};
    struct S3 l_216 = {18};
    int16_t *l_225 = &g_166;
    int16_t **l_224 = &l_225;
    int16_t ***l_223 = &l_224;
    int8_t l_281[7][5] = {{0xDBL,0x2BL,0x85L,0x85L,0x2BL},{0xE5L,0x40L,0xBFL,0x2BL,0x4EL},{0x40L,0x85L,0xBFL,0x66L,0xBFL},{0x4EL,0x4EL,0x85L,0xE5L,0x43L},{0x40L,0x43L,0xDBL,0xE5L,0xE5L},{0xE5L,0x10L,0xE5L,0x66L,0xAFL},{0xDBL,0x43L,0x40L,0x2BL,0xAFL}};
    union U4 l_312 = {-1L};
    struct S0 *l_326 = &g_101;
    uint32_t *l_431 = &g_141;
    int8_t l_442 = (-5L);
    int8_t l_459 = (-2L);
    const uint32_t l_467 = 0xD3BD6F87L;
    int32_t l_482 = 0xB2B798E9L;
    int32_t **l_511 = &g_495;
    int64_t *l_602 = &g_101.f1;
    int32_t *****l_621 = &g_608;
    int32_t l_643 = 4L;
    int64_t l_654 = 0xDC329F5B34B88D02LL;
    struct S3 **l_683 = &g_297;
    struct S3 ***l_682 = &l_683;
    int64_t l_720[1][9][7] = {{{0x2B21BB7A6E4B497BLL,6L,(-2L),0xE3B84CB1F8E68A2DLL,1L,0x0369FD8E7C4E1ED2LL,1L},{2L,(-2L),(-2L),2L,1L,0xE1E2A2F2A6C485CFLL,0x0369FD8E7C4E1ED2LL},{0xB0E03ACA83164EB2LL,0xD8294A17E0CF3C51LL,0x0369FD8E7C4E1ED2LL,(-2L),4L,0xE3B84CB1F8E68A2DLL,0x26F3CB8B792EAF59LL},{1L,0x8B15B02966035660LL,2L,0L,6L,0L,0x0369FD8E7C4E1ED2LL},{(-3L),0xE1E2A2F2A6C485CFLL,(-5L),0L,0x92B0CABAB31162A2LL,1L,1L},{0xDDD47DBD2802AEF7LL,0L,(-1L),0L,0xDDD47DBD2802AEF7LL,0L,1L},{1L,0xEC15B7B5AC7C8622LL,2L,0x26F3CB8B792EAF59LL,0x0369FD8E7C4E1ED2LL,(-1L),0x8B15B02966035660LL},{4L,(-3L),1L,1L,0xD3EA68B91260DB3CLL,0L,0x0369FD8E7C4E1ED2LL},{1L,0x26F3CB8B792EAF59LL,0xDDD47DBD2802AEF7LL,0x92B0CABAB31162A2LL,0L,(-8L),(-5L)}}};
    struct S1 *l_740[7] = {&g_197,&g_197,&g_197,&g_197,&g_197,&g_197,&g_197};
    struct S1 **l_739 = &l_740[0];
    struct S1 ***l_738 = &l_739;
    struct S3 ****l_760 = (void*)0;
    struct S3 ****l_761 = (void*)0;
    struct S3 ****l_762 = (void*)0;
    struct S3 ****l_763 = (void*)0;
    struct S3 ****l_764 = &g_758[0];
    int32_t l_770 = 0xB28437FDL;
    uint16_t *l_771[2][6] = {{(void*)0,&g_240[3][3].f0,(void*)0,(void*)0,&g_240[3][3].f0,(void*)0},{(void*)0,&g_240[3][3].f0,(void*)0,(void*)0,&g_240[3][3].f0,(void*)0}};
    int16_t l_772 = 0x7FC4L;
    uint64_t l_788 = 18446744073709551615UL;
    uint64_t l_790 = 18446744073709551615UL;
    union U5 *l_802 = &g_803;
    int32_t l_832[5];
    struct S2 *l_854[9][6][4];
    int32_t l_881 = (-1L);
    int32_t l_882 = 1L;
    int64_t l_884 = 4L;
    int32_t l_885 = 0xB8859FEDL;
    int32_t l_886 = (-1L);
    int32_t l_887 = 1L;
    int32_t l_888 = 1L;
    int32_t l_889[5][7] = {{1L,(-1L),0x1FC787A1L,0x1FC787A1L,(-1L),1L,0x61013F89L},{0x9FD910B4L,5L,0L,0x9FD910B4L,(-1L),1L,5L},{0xB487D99DL,0xD4FC6BC7L,1L,(-1L),1L,0xD4FC6BC7L,0xB487D99DL},{0xD4FC6BC7L,5L,0x1FC787A1L,1L,0xB487D99DL,0xD4FC6BC7L,1L},{0x9FD910B4L,(-1L),1L,5L,5L,1L,(-1L)}};
    int64_t l_891 = 0x34199AF277C0B0AELL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_832[i] = (-1L);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
                l_854[i][j][k] = &g_240[2][3];
        }
    }
    if (l_192)
    {
        int32_t ***l_202 = &g_148;
        struct S2 *l_239[9][10] = {{&g_240[1][8],&g_240[3][3],&g_240[1][5],&g_240[3][3],&g_240[3][3],&g_240[3][3],&g_240[3][3],&g_240[3][3],&g_240[2][2],(void*)0},{&g_240[1][5],&g_240[3][3],&g_240[1][8],&g_240[3][3],&g_240[1][1],&g_240[3][3],&g_240[1][8],&g_240[3][3],&g_240[1][5],&g_240[3][3]},{&g_240[3][3],(void*)0,&g_240[1][8],(void*)0,&g_240[3][3],&g_240[3][3],&g_240[1][1],&g_240[3][3],(void*)0,(void*)0},{(void*)0,&g_240[3][3],&g_240[1][5],(void*)0,&g_240[3][3],(void*)0,&g_240[3][3],(void*)0,&g_240[1][5],&g_240[3][3]},{&g_240[3][3],&g_240[3][3],&g_240[3][3],&g_240[3][3],&g_240[3][3],&g_240[2][5],&g_240[2][3],&g_240[4][8],&g_240[2][2],(void*)0},{&g_240[3][3],&g_240[4][8],(void*)0,&g_240[3][3],&g_240[3][3],&g_240[2][5],&g_240[1][5],&g_240[2][5],&g_240[3][3],&g_240[3][3]},{&g_240[3][3],(void*)0,&g_240[3][3],&g_240[2][5],&g_240[1][1],(void*)0,&g_240[1][5],&g_240[3][3],&g_240[3][3],(void*)0},{(void*)0,&g_240[4][8],&g_240[3][3],(void*)0,&g_240[3][3],&g_240[3][3],&g_240[2][3],&g_240[3][3],&g_240[2][3],&g_240[3][3]},{&g_240[3][3],&g_240[3][3],&g_240[3][3],&g_240[3][3],&g_240[3][3],&g_240[3][3],&g_240[3][3],&g_240[2][5],&g_240[2][3],&g_240[4][8]}};
        const int16_t l_251[1] = {1L};
        union U4 l_256 = {0xB2A7CC61FBE05432LL};
        int32_t l_319 = (-3L);
        const struct S0 *l_325 = &g_101;
        int16_t l_371 = 0x0C95L;
        union U5 l_384 = {-1L};
        struct S3 * const *l_402 = &g_297;
        uint32_t *l_430 = &g_141;
        int32_t l_480 = 0x001878A9L;
        uint8_t l_483 = 253UL;
        struct S1 l_505 = {1,-11861,17,83,0,-207,19};
        uint64_t l_542 = 18446744073709551615UL;
        int32_t l_641 = 0x2167E23FL;
        int32_t l_642 = 8L;
        int8_t l_731[6][6][4] = {{{0xC3L,0xA6L,(-1L),0xA6L},{(-1L),0xA6L,0xC3L,0xFDL},{0xA6L,1L,0x44L,(-1L)},{0L,(-5L),(-5L),0L},{0L,0xFDL,0x44L,0xBBL},{0xA6L,0L,0xC3L,0xA6L}},{{0xFDL,0xBBL,0xFDL,0xA6L},{0x44L,(-5L),0L,1L},{(-1L),0L,(-5L),(-5L)},{0xE1L,0xE1L,(-5L),0xFDL},{(-1L),0xC3L,0L,0L},{0x44L,0L,0xFDL,0L}},{{0xFDL,0L,0x44L,0L},{0L,0xC3L,(-1L),0xFDL},{(-5L),0xE1L,0xE1L,(-5L)},{(-5L),0L,(-1L),1L},{0L,(-5L),0x44L,0xA6L},{0xFDL,0xBBL,0xFDL,0xA6L}},{{0x44L,(-5L),0L,1L},{(-1L),0L,(-5L),(-5L)},{0xE1L,0xE1L,(-5L),0xFDL},{(-1L),0xC3L,0L,0L},{0x44L,0L,0xFDL,0L},{0xFDL,0L,0x44L,0L}},{{0L,0xC3L,(-1L),0xFDL},{(-5L),0xE1L,0xE1L,(-5L)},{(-5L),0L,(-1L),1L},{0L,(-5L),0x44L,0xA6L},{0xFDL,0xBBL,0xFDL,0xA6L},{0x44L,(-5L),0L,1L}},{{(-1L),0L,(-5L),(-5L)},{0xE1L,0xE1L,(-5L),0xFDL},{(-1L),0xC3L,0L,0L},{0x44L,0L,0xFDL,0L},{0xFDL,0L,0x44L,0L},{0L,0xC3L,(-1L),0xFDL}}};
        uint16_t l_732[2][7][5] = {{{65533UL,0x32DAL,0x057AL,0x057AL,0x32DAL},{0x1FC4L,2UL,7UL,7UL,2UL},{65533UL,0x32DAL,0x057AL,0x057AL,0x32DAL},{0x1FC4L,2UL,7UL,7UL,2UL},{65533UL,0x32DAL,0x057AL,0x057AL,0x32DAL},{0x1FC4L,2UL,7UL,7UL,2UL},{65533UL,0x32DAL,0x057AL,0x057AL,0x32DAL}},{{0x1FC4L,2UL,7UL,7UL,2UL},{65533UL,0x32DAL,0x057AL,0x057AL,0x32DAL},{0x1FC4L,2UL,7UL,7UL,2UL},{65533UL,0x32DAL,0x057AL,0x057AL,0x32DAL},{0x1FC4L,2UL,7UL,7UL,2UL},{65533UL,0x32DAL,0x057AL,0x057AL,0x32DAL},{0x1FC4L,2UL,7UL,7UL,0UL}}};
        int i, j, k;
        for (p_35.f1 = 0; (p_35.f1 == (-28)); --p_35.f1)
        {
            union U4 l_198 = {-9L};
            uint8_t *l_199 = &g_131;
            int32_t ****l_203 = &l_202;
            int32_t ****l_204 = (void*)0;
            int32_t ****l_205 = &g_147;
            uint16_t *l_207 = &g_167[8][6][0].f2.f0;
            struct S0 *l_208 = &g_101;
            int16_t ***l_226 = &l_224;
            uint16_t l_234 = 65527UL;
            union U5 l_284 = {0xAAD2AB0D9BE3B201LL};
        }
    }
    else
    {
        uint32_t l_735 = 0x0FE2AAFEL;
        struct S1 ****l_741 = &l_738;
        (**l_683) = func_37(p_36);
        (**g_147) = p_36;
        (*****g_607) = (l_735 == (safe_lshift_func_uint16_t_u_u(p_35.f2, 1)));
        (*l_741) = l_738;
    }
    if ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(0xEE5BL, (safe_rshift_func_uint16_t_u_u((l_312 , (l_772 = (((!((((safe_rshift_func_uint16_t_u_s(((((*l_602) = (!(p_34.f2 < ((safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s(((safe_mod_func_int32_t_s_s((((*l_764) = g_758[0]) != (void*)0), (safe_mod_func_int32_t_s_s((((!(((*l_225) = (p_35.f2 <= (safe_sub_func_uint16_t_u_u(65535UL, ((p_34 , &g_167[8][6][0]) != &l_206))))) < p_35.f2)) ^ g_197.f4) != 0xC63C29C5D7E054D1LL), (**l_511))))) || p_34.f0), 0xC5A44C9385F7B367LL)), l_770)) <= 0x12L)))) && 0xEC89A96692E733FALL) & 0x5D42B3CAL), 6)) > p_34.f1) & 0xEBL) > (**l_511))) && p_34.f1) ^ (**l_511)))), p_34.f2)))), g_270[2][0][0])))
    {
        uint16_t l_776 = 0x96DBL;
        int32_t l_777 = 1L;
        int16_t l_791[2];
        struct S1 **l_833 = &l_740[0];
        struct S2 *l_866 = &g_240[3][3];
        int i;
        for (i = 0; i < 2; i++)
            l_791[i] = 0x1517L;
        l_777 |= (~(safe_sub_func_uint16_t_u_u((&g_404 == (p_35.f0 , &g_759)), l_776)));
        for (p_35.f0 = 0; (p_35.f0 <= 0); p_35.f0 += 1)
        {
            int8_t *l_785[6];
            int32_t l_789 = 0x5A2ACE3EL;
            int32_t *l_792 = &g_167[8][6][0].f2.f1;
            int32_t *l_793[8][6][5] = {{{&g_111,(void*)0,(void*)0,&l_789,&g_7},{&g_11[2][6][4],&l_789,&g_111,&g_7,(void*)0},{&l_482,&l_777,&g_7,&l_777,&l_643},{&l_482,&l_192,&l_789,&l_643,&g_240[3][3].f1},{&g_11[2][6][4],(void*)0,&l_777,&g_11[2][6][4],(void*)0},{&g_111,(void*)0,&l_789,&l_643,(void*)0}},{{&g_111,&l_192,&g_7,(void*)0,(void*)0},{&l_482,&l_643,&g_111,&g_11[2][6][4],(void*)0},{&l_789,&g_7,(void*)0,&g_7,&g_240[3][3].f1},{&g_11[2][2][2],&l_643,&l_777,&l_777,&l_643},{&g_7,&l_192,&g_11[2][6][4],&l_777,(void*)0},{&l_482,(void*)0,(void*)0,&g_7,&g_7}},{{&l_482,(void*)0,&l_643,&g_11[2][6][4],(void*)0},{&l_482,&l_192,&l_777,(void*)0,(void*)0},{&g_7,&l_777,&l_777,&l_643,&l_192},{&g_11[2][2][2],&l_789,&l_643,&g_11[2][6][4],(void*)0},{&l_789,(void*)0,(void*)0,&l_643,&l_192},{&l_482,&g_11[0][2][1],&g_11[2][6][4],&l_777,(void*)0}},{{&g_111,&g_11[0][2][1],&l_777,&g_7,(void*)0},{&g_111,(void*)0,(void*)0,&l_789,&g_7},{&g_11[2][6][4],&l_789,&g_111,&g_7,(void*)0},{&l_482,&l_777,&g_7,&l_777,&l_643},{&l_482,&l_192,&l_789,&l_643,&g_240[3][3].f1},{&g_11[2][6][4],(void*)0,&l_777,&g_11[2][6][4],(void*)0}},{{&g_111,(void*)0,&l_789,&l_643,(void*)0},{&g_111,&l_192,&g_7,(void*)0,(void*)0},{&l_482,&l_643,&g_111,&g_11[2][6][4],(void*)0},{&l_789,&g_7,(void*)0,&g_7,&g_240[3][3].f1},{&g_11[2][2][2],&l_643,&l_777,&l_777,&l_643},{&g_7,&l_192,&g_11[2][6][4],&l_777,(void*)0}},{{&l_482,(void*)0,(void*)0,&g_7,&g_7},{&l_482,(void*)0,&l_643,&g_11[2][6][4],(void*)0},{&l_482,&l_192,&l_777,(void*)0,(void*)0},{&g_7,&l_777,&l_777,&l_643,&l_192},{&g_11[2][2][2],&l_789,&l_643,&g_11[2][6][4],(void*)0},{&l_789,(void*)0,(void*)0,&l_643,&l_192}},{{&l_482,&g_11[0][2][1],&g_11[2][6][4],&l_777,(void*)0},{&g_111,&g_11[0][2][1],&l_777,&g_7,(void*)0},{&g_7,(void*)0,(void*)0,(void*)0,&g_240[3][3].f1},{&g_240[3][3].f1,&g_7,&g_7,(void*)0,&l_482},{&g_240[3][3].f1,&l_789,(void*)0,&l_789,&g_11[2][6][4]},{&g_240[3][3].f1,&l_643,(void*)0,(void*)0,(void*)0}},{{&g_240[3][3].f1,&l_192,&l_192,&l_192,&g_11[2][1][2]},{&g_7,&l_482,(void*)0,(void*)0,&l_482},{&l_777,&l_643,(void*)0,&g_11[0][2][1],&l_482},{&l_789,&g_11[2][6][4],&g_7,&g_11[0][3][2],&g_11[2][1][2]},{&l_482,&g_240[3][3].f1,(void*)0,&g_240[3][3].f1,(void*)0},{&g_7,&g_11[2][6][4],(void*)0,(void*)0,&g_11[2][6][4]}}};
            uint64_t l_794[7][4] = {{18446744073709551609UL,0x1B5681F04563FAC9LL,18446744073709551608UL,0xD4B8D9FD54D96170LL},{0xADB97D1043B3C8F3LL,0x982A27AE3F8D8C76LL,18446744073709551613UL,18446744073709551613UL},{0xADB97D1043B3C8F3LL,0xADB97D1043B3C8F3LL,18446744073709551608UL,0x9E3334DD8FB3B2EBLL},{18446744073709551609UL,18446744073709551613UL,0xADB97D1043B3C8F3LL,0x1B5681F04563FAC9LL},{0x982A27AE3F8D8C76LL,0xEE99EEE3A77316EELL,0xCA74039330165F82LL,0xADB97D1043B3C8F3LL},{0x534FECA43FC34F84LL,0xEE99EEE3A77316EELL,0x534FECA43FC34F84LL,0x1B5681F04563FAC9LL},{0xEE99EEE3A77316EELL,18446744073709551613UL,0x8720B0BD74CB85C2LL,0x9E3334DD8FB3B2EBLL}};
            int32_t ***** const l_831 = (void*)0;
            const union U5 l_844 = {0L};
            int16_t l_853 = 0x189EL;
            struct S0 *l_855 = &g_101;
            struct S1 **** const l_869 = (void*)0;
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_785[i] = &l_442;
            l_791[0] = ((*p_36) = ((((safe_rshift_func_int8_t_s_u((**l_511), 2)) ^ (safe_mul_func_uint8_t_u_u(((g_270[8][3][0] > (safe_add_func_int16_t_s_s(0xCACBL, ((l_777 = (!p_34.f0)) >= g_587)))) == (safe_div_func_int8_t_s_s((((0xB4L & g_141) != (((((void*)0 != (*l_764)) , l_788) < p_33.f0) || l_789)) == g_270[8][3][0]), g_644))), l_790))) & p_33.f0) && p_34.f2));
            l_794[6][3]++;
            if (g_797[4])
                break;
            if ((((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((&g_167[2][1][1] != (l_802 = &g_167[8][6][0])), (-3L))), p_35.f1)) && (safe_sub_func_int16_t_s_s(p_35.f2, 0x4079L))) , 0xCE6E160CL))
            {
                struct S2 l_830 = {0x0F5DL,4L,0x4220A307L};
                struct S0 **l_856[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                for (l_206.f0 = 4; (l_206.f0 >= 0); l_206.f0 -= 1)
                {
                    union U5 l_845 = {0L};
                    int32_t l_852 = 0x6B4CFA47L;
                    int i, j;
                    (*p_36) = ((((void*)0 == &l_281[(l_206.f0 + 2)][(p_35.f0 + 2)]) , l_281[(l_206.f0 + 2)][(p_35.f0 + 2)]) | (0x1D5CL < g_803.f0));
                    for (l_312.f0 = 0; (l_312.f0 <= 3); l_312.f0 += 1)
                    {
                        union U5 l_816[5] = {{0xD7EE9D7613F22097LL},{0xD7EE9D7613F22097LL},{0xD7EE9D7613F22097LL},{0xD7EE9D7613F22097LL},{0xD7EE9D7613F22097LL}};
                        int i, j, k;
                        p_34.f1 &= ((safe_sub_func_uint16_t_u_u((g_270[(l_206.f0 + 5)][p_35.f0][p_35.f0] <= 0L), ((((((safe_div_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((l_816[0] , ((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint64_t_u((0x8E4D8803L | (&g_100 == (void*)0)))), 14)), ((g_131 ^= ((safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(g_270[(l_206.f0 + 5)][(p_35.f0 + 3)][p_35.f0], p_35.f1)), (((safe_rshift_func_uint16_t_u_u((((((l_830 , l_621) == l_831) > p_33.f0) && g_803.f1) <= 255UL), l_816[0].f0)) ^ p_35.f0) & (*g_495)))), g_197.f0)) & p_34.f0)) || g_197.f0))) , 0xEB1AFC2655C9657DLL)), g_101.f2)), 0xCFL)), l_832[1])) && g_101.f1) == l_830.f2) | 0x7BA28C56L) == 0x678FL) == 0xB0D2L))) , (*p_36));
                        (*p_36) |= (((*l_738) = l_833) == (void*)0);
                        (*p_36) = (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s(((safe_div_func_uint64_t_u_u(l_791[0], g_240[3][3].f1)) != ((0x01L && p_33.f0) <= (safe_sub_func_int16_t_s_s((((*l_431) ^= ((*p_36) > (safe_rshift_func_int8_t_s_u((l_281[(p_35.f0 + 4)][p_35.f0] = ((l_844 , ((l_845 , p_33) , (((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((p_34.f0 &= g_240[3][3].f1), 12)), g_197.f2)), 0)) | 0x27078F7E82DD4C43LL) && g_73))) & l_852)), g_166)))) == l_853), p_35.f2)))), 7)) < p_34.f2), 6));
                        l_854[6][0][1] = l_854[7][5][3];
                    }
                }
                l_326 = l_855;
                return (*g_148);
            }
            else
            {
                uint8_t *l_870 = (void*)0;
                uint8_t *l_871 = (void*)0;
                uint64_t *l_876 = &l_794[0][0];
                uint64_t *l_877 = &l_790;
                (*p_36) |= ((((((((*l_877) = ((*l_876) &= (safe_mod_func_int64_t_s_s((((g_131 = (safe_unary_minus_func_int64_t_s(((p_34.f2 == g_644) != (((g_587 = ((--g_373) < (&p_34 == ((*g_391) = l_866)))) < (safe_mod_func_uint64_t_u_u(((void*)0 != l_869), p_34.f1))) == 0L))))) >= (((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(g_406.f0, 5)), 1)) , &g_240[3][3]) != &p_34)) , p_34.f0), g_197.f3)))) , (***l_738)) , &g_176) != (void*)0) , 8L) ^ g_197.f1) , 0xFD861B78L);
                return (**g_147);
            }
        }
    }
    else
    {
        int32_t *l_878 = &g_111;
        int32_t *l_879 = &g_111;
        int32_t *l_880[1][7] = {{&g_111,&l_206.f2.f1,&g_111,&g_111,&l_206.f2.f1,&g_111,&g_111}};
        int32_t l_890[7] = {0x41889099L,0x41889099L,0x41889099L,0x41889099L,0x41889099L,0x41889099L,0x41889099L};
        int i, j;
        ++g_892;
    }
    return p_36;
}







static struct S3 func_37(int32_t * p_38)
{
    int32_t *l_188 = (void*)0;
    struct S3 l_189 = {30};
    struct S3 l_190 = {8};
    (**g_147) = l_188;
    l_189 = g_109;
    return l_190;
}







static int32_t * func_39(int32_t * p_40, struct S0 p_41)
{
    uint8_t l_184 = 0xC1L;
    int32_t *l_187[6][10][4] = {{{&g_111,&g_11[2][6][4],&g_11[2][6][4],&g_111},{&g_7,&g_7,(void*)0,&g_11[2][6][4]},{(void*)0,(void*)0,(void*)0,&g_11[2][6][4]},{&g_7,(void*)0,&g_11[2][6][4],&g_11[2][6][4]},{&g_111,&g_11[2][6][4],(void*)0,&g_11[2][6][4]},{(void*)0,&g_11[2][6][4],&g_11[2][6][4],&g_11[2][6][4]},{(void*)0,&g_7,(void*)0,&g_111},{&g_11[2][7][2],&g_111,&g_111,&g_11[1][5][3]},{(void*)0,&g_11[2][6][2],&g_11[1][5][3],&g_7},{&g_7,&g_11[0][7][0],&g_11[0][4][2],&g_7}},{{(void*)0,(void*)0,&g_11[2][6][4],&g_11[0][2][2]},{(void*)0,(void*)0,&g_11[2][6][4],&g_11[0][5][4]},{&g_111,&g_11[0][7][1],&g_7,(void*)0},{&g_11[0][1][0],&g_111,&g_7,&g_11[0][2][2]},{&g_11[0][0][3],&g_11[2][6][4],&g_11[2][6][4],&g_11[0][0][3]},{(void*)0,&g_11[2][6][4],&g_11[2][5][2],&g_11[2][6][4]},{&g_7,&g_11[2][2][2],&g_111,(void*)0},{&g_11[2][6][4],&g_11[0][2][2],&g_11[0][1][0],(void*)0},{&g_11[2][6][4],&g_11[2][2][2],&g_11[0][7][0],&g_11[2][6][4]},{&g_11[1][5][3],&g_11[2][6][4],&g_111,&g_11[0][0][3]}},{{&g_111,&g_11[2][6][4],&g_7,&g_11[0][2][2]},{&g_111,&g_111,&g_111,(void*)0},{&g_111,&g_111,&g_11[2][6][4],&g_11[0][7][0]},{&g_11[0][1][0],&g_7,(void*)0,&g_11[2][6][4]},{&g_11[2][6][4],&g_7,&g_111,&g_7},{&g_11[2][6][4],(void*)0,&g_7,&g_11[2][6][4]},{&g_11[2][6][4],&g_111,&g_111,&g_111},{(void*)0,&g_7,&g_11[0][2][2],&g_11[2][6][4]},{&g_11[2][6][4],&g_11[2][6][4],&g_111,&g_7},{&g_11[2][6][4],&g_7,&g_11[2][6][4],&g_7}},{{&g_11[2][6][4],&g_11[0][1][0],(void*)0,(void*)0},{&g_111,&g_11[2][6][4],&g_111,&g_11[0][2][2]},{&g_11[0][7][0],&g_11[2][6][4],(void*)0,&g_11[0][2][2]},{&g_11[0][7][0],&g_11[2][7][2],&g_111,&g_11[2][2][2]},{&g_111,&g_11[0][2][2],(void*)0,&g_11[2][5][2]},{&g_11[2][6][4],&g_11[2][6][4],&g_11[2][6][4],&g_111},{&g_11[2][6][4],(void*)0,&g_111,&g_11[2][6][4]},{&g_11[2][6][4],(void*)0,&g_11[0][2][2],&g_11[2][6][4]},{(void*)0,&g_7,&g_111,(void*)0},{&g_11[2][6][4],(void*)0,&g_7,&g_111}},{{&g_11[2][6][4],(void*)0,&g_111,&g_111},{&g_11[2][6][4],&g_7,(void*)0,&g_7},{&g_11[0][1][0],&g_11[0][2][2],&g_11[2][6][4],(void*)0},{&g_111,&g_11[2][6][4],&g_11[2][5][2],&g_11[2][6][4]},{(void*)0,&g_11[2][6][4],&g_11[2][7][2],&g_11[2][7][2]},{&g_111,&g_111,&g_11[2][6][4],(void*)0},{&g_111,(void*)0,(void*)0,&g_111},{&g_11[0][2][2],&g_11[0][4][2],&g_11[1][5][3],(void*)0},{&g_7,&g_11[0][4][2],&g_11[2][6][4],&g_111},{&g_11[0][4][2],(void*)0,&g_11[2][6][2],(void*)0}},{{&g_11[2][6][4],&g_111,&g_11[0][0][3],&g_11[2][7][2]},{(void*)0,&g_11[2][6][4],&g_11[0][4][2],&g_11[2][6][4]},{&g_11[1][5][3],&g_11[2][6][4],&g_11[2][6][4],(void*)0},{(void*)0,&g_11[0][2][2],&g_111,&g_7},{&g_11[2][6][4],&g_7,&g_11[0][1][0],&g_111},{&g_7,(void*)0,&g_111,&g_111},{&g_111,(void*)0,&g_111,(void*)0},{&g_11[2][6][4],&g_7,&g_11[2][6][4],&g_11[2][6][4]},{&g_11[2][6][4],(void*)0,(void*)0,&g_11[2][6][4]},{&g_7,(void*)0,(void*)0,&g_111}}};
    int i, j, k;
    for (g_111 = 0; (g_111 > 23); ++g_111)
    {
        int32_t *l_183[9] = {&g_11[2][6][2],&g_11[2][6][2],&g_11[2][6][2],&g_11[2][6][2],&g_11[2][6][2],&g_11[2][6][2],&g_11[2][6][2],&g_11[2][6][2],&g_11[2][6][2]};
        int i;
        l_184--;
    }
    return l_187[4][3][3];
}







static struct S0 func_42(int32_t * p_43)
{
    struct S3 l_82 = {25};
    int32_t *l_83 = &g_11[0][5][3];
    int32_t *l_84 = &g_11[2][6][4];
    int32_t *l_85 = &g_11[2][6][4];
    int32_t *l_86 = (void*)0;
    int32_t *l_87 = &g_11[2][6][4];
    int64_t l_88[7] = {(-1L),0xD0A635A0DCE6BA5CLL,0xD0A635A0DCE6BA5CLL,(-1L),0xD0A635A0DCE6BA5CLL,0xD0A635A0DCE6BA5CLL,(-1L)};
    int32_t *l_89 = &g_11[1][2][3];
    int32_t *l_90 = (void*)0;
    int32_t *l_91 = &g_11[1][0][1];
    int32_t *l_92 = (void*)0;
    int32_t *l_93 = (void*)0;
    int32_t *l_94 = &g_11[2][6][4];
    int32_t *l_95[1];
    int32_t l_96[7] = {0x39048C16L,0x39048C16L,0x39048C16L,0x39048C16L,0x39048C16L,0x39048C16L,0x39048C16L};
    uint64_t l_97 = 0UL;
    int16_t * const **l_177 = &g_176;
    int16_t * const *l_179 = (void*)0;
    int16_t * const **l_178 = &l_179;
    struct S0 l_180 = {0x8C1426E5L,0L,314,0xABL,15,5L};
    int i;
    for (i = 0; i < 1; i++)
        l_95[i] = &g_11[2][6][4];
lbl_173:
    l_82 = l_82;
    l_97++;
    for (l_97 = 0; (l_97 <= 6); l_97 += 1)
    {
        struct S0 **l_102[8][4] = {{&g_100,&g_100,&g_100,&g_100},{&g_100,&g_100,&g_100,(void*)0},{&g_100,&g_100,(void*)0,(void*)0},{&g_100,&g_100,(void*)0,&g_100},{(void*)0,&g_100,&g_100,&g_100},{&g_100,&g_100,(void*)0,&g_100},{&g_100,&g_100,&g_100,&g_100},{&g_100,&g_100,&g_100,(void*)0}};
        uint16_t *l_108 = &g_73;
        int32_t l_112 = 0xCBFB4229L;
        struct S1 l_129 = {1,-12788,12,-62,-2,329,16};
        uint32_t l_145 = 1UL;
        uint16_t l_164 = 65535UL;
        const struct S3 l_174 = {8};
        int i, j;
        g_100 = g_100;
        for (g_101.f5 = 0; (g_101.f5 >= 0); g_101.f5 -= 1)
        {
            int32_t ** const *l_103 = (void*)0;
            int32_t ** const **l_104 = &l_103;
            int32_t l_144 = 0xC28C5A1FL;
            uint32_t l_170[10][5] = {{0x490DEC96L,0xA22E7C7CL,4294967293UL,4294967291UL,4294967293UL},{2UL,2UL,0xA22E7C7CL,0x60EC3E43L,4294967291UL},{0x490DEC96L,4294967291UL,0xB8084EC3L,0x60EC3E43L,0x60EC3E43L},{0x60EC3E43L,1UL,0x60EC3E43L,4294967291UL,4294967295UL},{0xB8084EC3L,4294967291UL,0x490DEC96L,1UL,4294967295UL},{0xA22E7C7CL,2UL,2UL,0xA22E7C7CL,0x60EC3E43L},{4294967293UL,0xA22E7C7CL,0x490DEC96L,4294967295UL,4294967291UL},{4294967293UL,0x490DEC96L,0x60EC3E43L,0x490DEC96L,4294967293UL},{0xA22E7C7CL,1UL,0xB8084EC3L,4294967295UL,2UL},{0xB8084EC3L,1UL,0xA22E7C7CL,0xA22E7C7CL,1UL}};
            struct S3 *l_175 = &l_82;
            int i, j;
            (*l_104) = l_103;
            if ((safe_mod_func_int64_t_s_s(((+0UL) <= (l_88[l_97] ^ (l_108 != l_108))), (9UL && (((g_3 && (g_109 , (((!((g_111 &= 0x2BL) != l_112)) <= 4L) == (-5L)))) != l_112) >= (-8L))))))
            {
                uint8_t *l_130 = &g_131;
                uint32_t *l_140 = &g_141;
                int32_t l_142 = (-4L);
                union U4 l_143 = {-1L};
                struct S3 *l_146 = &g_109;
                (*l_146) = (((g_101.f0 , ((g_101.f4 ^ (safe_rshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(((g_3 && (safe_mod_func_uint64_t_u_u((safe_add_func_int32_t_s_s(((((safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(l_112, (safe_sub_func_uint8_t_u_u(g_101.f5, ((l_129 , 0x1170L) < ((((((g_11[2][6][4] || (--(*l_130))) , (((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((((*l_140) = (safe_add_func_uint32_t_u_u(g_131, l_129.f0))) > 0x932EB66CL) & l_142), g_101.f2)), (*l_84))) , (void*)0) == (void*)0)) <= g_101.f2) <= 0x7996L) , (void*)0) != &p_43)))))), 0)), l_142)) >= g_101.f5) , l_143) , l_144), l_145)), g_111))) > 0x119FL), 0x39L)) == g_111), l_143.f1))) , g_101.f4)) != (*l_84)) , g_109);
            }
            else
            {
                int32_t ****l_168[2][3];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_168[i][j] = &g_147;
                }
                for (g_111 = 0; (g_111 >= 0); g_111 -= 1)
                {
                    int32_t l_169 = 0x8E07C21FL;
                    if (((void*)0 != g_147))
                    {
                        int16_t *l_165 = &g_166;
                        int i, j, k;
                        (*l_94) = ((((((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(g_11[(g_101.f5 + 2)][l_97][(g_111 + 1)], 0)), (safe_add_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s((0xE24AL && ((*l_165) ^= (safe_div_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(g_11[(g_101.f5 + 2)][(g_101.f5 + 6)][(g_101.f5 + 1)], ((safe_sub_func_int16_t_s_s(0x7E7DL, ((l_164 = g_11[(g_111 + 2)][l_97][(g_101.f5 + 2)]) < ((void*)0 != &g_73)))) != (&g_131 == (void*)0)))) || (*l_84)), 0x227EL)))), g_11[(g_101.f5 + 1)][g_101.f5][(g_111 + 4)])) ^ (-1L)), 0x8A15B142L)))) , g_167[8][6][0]) , l_168[0][1]) == (void*)0) , 0L) >= g_11[(g_111 + 2)][(l_97 + 1)][(g_101.f5 + 3)]);
                        l_95[g_111] = (*g_148);
                    }
                    else
                    {
                        ++l_170[7][2];
                    }
                }
            }
            if (g_101.f5)
                goto lbl_173;
            (*l_175) = l_174;
            for (g_101.f1 = 0; (g_101.f1 >= 0); g_101.f1 -= 1)
            {
                int i, j, k;
                if (l_145)
                    goto lbl_173;
                if (g_11[(g_101.f1 + 1)][(g_101.f5 + 7)][(g_101.f1 + 1)])
                    continue;
                if (l_144)
                    goto lbl_173;
                for (l_164 = 0; (l_164 <= 2); l_164 += 1)
                {
                    for (g_111 = 0; (g_111 <= 0); g_111 += 1)
                    {
                        if (g_101.f5)
                            goto lbl_173;
                    }
                    return (*g_100);
                }
            }
        }
    }
    (*l_178) = ((*l_177) = g_176);
    return l_180;
}







static int32_t * func_44(struct S2 p_45, int32_t * p_46, int32_t * p_47)
{
    int32_t *l_81 = &g_7;
    int32_t **l_80 = &l_81;
    (*p_47) = (&p_47 == l_80);
    return p_47;
}







static int32_t * func_50(int8_t p_51, uint64_t p_52, int32_t * p_53, uint32_t p_54)
{
    uint32_t l_76 = 0x2DEB474DL;
    for (p_54 = 0; (p_54 > 35); p_54++)
    {
        l_76++;
    }
    g_11[2][6][0] = (*p_53);
    return &g_11[1][2][3];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_11[i][j][k], "g_11[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_101.f0, "g_101.f0", print_hash_value);
    transparent_crc(g_101.f1, "g_101.f1", print_hash_value);
    transparent_crc(g_101.f2, "g_101.f2", print_hash_value);
    transparent_crc(g_101.f3, "g_101.f3", print_hash_value);
    transparent_crc(g_101.f4, "g_101.f4", print_hash_value);
    transparent_crc(g_101.f5, "g_101.f5", print_hash_value);
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_167[i][j][k].f0, "g_167[i][j][k].f0", print_hash_value);
                transparent_crc(g_167[i][j][k].f1, "g_167[i][j][k].f1", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_197.f0, "g_197.f0", print_hash_value);
    transparent_crc(g_197.f1, "g_197.f1", print_hash_value);
    transparent_crc(g_197.f2, "g_197.f2", print_hash_value);
    transparent_crc(g_197.f3, "g_197.f3", print_hash_value);
    transparent_crc(g_197.f4, "g_197.f4", print_hash_value);
    transparent_crc(g_197.f5, "g_197.f5", print_hash_value);
    transparent_crc(g_197.f6, "g_197.f6", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_240[i][j].f0, "g_240[i][j].f0", print_hash_value);
            transparent_crc(g_240[i][j].f1, "g_240[i][j].f1", print_hash_value);
            transparent_crc(g_240[i][j].f2, "g_240[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_270[i][j][k], "g_270[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_406.f0, "g_406.f0", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_587, "g_587", print_hash_value);
    transparent_crc(g_630.f1, "g_630.f1", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_797[i], "g_797[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_803.f0, "g_803.f0", print_hash_value);
    transparent_crc(g_803.f1, "g_803.f1", print_hash_value);
    transparent_crc(g_883, "g_883", print_hash_value);
    transparent_crc(g_892, "g_892", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_960[i][j], "g_960[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_991[i].f0, "g_991[i].f0", print_hash_value);
        transparent_crc(g_991[i].f1, "g_991[i].f1", print_hash_value);
        transparent_crc(g_991[i].f2, "g_991[i].f2", print_hash_value);
        transparent_crc(g_991[i].f3, "g_991[i].f3", print_hash_value);
        transparent_crc(g_991[i].f4, "g_991[i].f4", print_hash_value);
        transparent_crc(g_991[i].f5, "g_991[i].f5", print_hash_value);
        transparent_crc(g_991[i].f6, "g_991[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1092.f0, "g_1092.f0", print_hash_value);
    transparent_crc(g_1092.f1, "g_1092.f1", print_hash_value);
    transparent_crc(g_1092.f2, "g_1092.f2", print_hash_value);
    transparent_crc(g_1285, "g_1285", print_hash_value);
    transparent_crc(g_1361, "g_1361", print_hash_value);
    transparent_crc(g_1696.f0, "g_1696.f0", print_hash_value);
    transparent_crc(g_1696.f1, "g_1696.f1", print_hash_value);
    transparent_crc(g_1714, "g_1714", print_hash_value);
    transparent_crc(g_1725, "g_1725", print_hash_value);
    transparent_crc(g_1853, "g_1853", print_hash_value);
    transparent_crc(g_1969.f0, "g_1969.f0", print_hash_value);
    transparent_crc(g_1969.f1, "g_1969.f1", print_hash_value);
    transparent_crc(g_1979, "g_1979", print_hash_value);
    transparent_crc(g_2060, "g_2060", print_hash_value);
    transparent_crc(g_2076, "g_2076", print_hash_value);
    transparent_crc(g_2099, "g_2099", print_hash_value);
    transparent_crc(g_2176, "g_2176", print_hash_value);
    transparent_crc(g_2248, "g_2248", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2283[i].f0, "g_2283[i].f0", print_hash_value);
        transparent_crc(g_2283[i].f1, "g_2283[i].f1", print_hash_value);
        transparent_crc(g_2283[i].f2, "g_2283[i].f2", print_hash_value);
        transparent_crc(g_2283[i].f3, "g_2283[i].f3", print_hash_value);
        transparent_crc(g_2283[i].f4, "g_2283[i].f4", print_hash_value);
        transparent_crc(g_2283[i].f5, "g_2283[i].f5", print_hash_value);
        transparent_crc(g_2283[i].f6, "g_2283[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
