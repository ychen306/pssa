// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = DAED68D8
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



static int32_t g_2 = 6L;
static int32_t g_6 = 9L;
static uint16_t g_50 = 65535UL;
static int32_t g_63 = 0xADF851F0L;
static const int32_t g_91[6][3] = {{0x99275A80L,0x99275A80L,0x99275A80L},{0x99275A80L,0x99275A80L,0x99275A80L},{0x99275A80L,0x99275A80L,0x99275A80L},{0x99275A80L,0x99275A80L,0x99275A80L},{0x99275A80L,0x99275A80L,0x99275A80L},{0x99275A80L,0x99275A80L,0x99275A80L}};
static int64_t g_95 = 0x506546D79C1F6213LL;
static int16_t g_105[2] = {0L,0L};
static uint64_t g_115[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static uint16_t g_119 = 65530UL;
static int64_t g_124 = 0xB9F09720137108D8LL;
static int64_t g_142 = (-6L);
static uint32_t g_143 = 0UL;
static int64_t g_147 = (-1L);
static int64_t g_177 = 0x3DCD55CD4276EE3ELL;
static uint16_t g_178 = 0x6D23L;
static int32_t *g_202 = &g_2;
static int32_t **g_201 = &g_202;
static int32_t g_218 = (-3L);
static uint32_t g_228[5] = {1UL,1UL,1UL,1UL,1UL};
static uint8_t g_230 = 0xE9L;
static uint8_t g_233 = 0x45L;
static int8_t g_234[1] = {0x92L};
static uint32_t g_286 = 0UL;
static uint32_t g_311 = 0UL;
static uint8_t g_318 = 1UL;
static int8_t g_325[6] = {1L,1L,1L,1L,1L,1L};
static int16_t g_332 = 0xE98DL;
static uint32_t g_357 = 1UL;
static int32_t g_359 = 0x4F0659C4L;
static int8_t g_362[3][10][7] = {{{(-1L),(-1L),(-3L),(-7L),0x33L,(-1L),(-3L)},{0x24L,0xAFL,0xDBL,0xB5L,0x58L,1L,1L},{0x84L,0L,0x85L,0L,0x84L,(-1L),(-1L)},{6L,0x08L,1L,0xD9L,1L,0xDBL,(-9L)},{0x14L,(-1L),0xDDL,2L,(-6L),0x84L,(-1L)},{6L,0xD9L,(-1L),0xAAL,(-1L),0xD9L,6L},{0x84L,(-7L),0x19L,(-1L),0L,(-1L),0x85L},{0x24L,0xCCL,0x39L,1L,0xAAL,(-9L),0x08L},{0xDDL,6L,0x19L,0L,(-7L),0L,0x19L},{0x02L,0x02L,(-1L),7L,0xAFL,1L,0xD4L}},{{(-7L),0xDDL,0xDDL,0x19L,0x85L,6L,(-1L)},{0xA8L,0xDBL,1L,1L,0xAFL,0x7EL,0xAFL},{(-1L),0x85L,0x85L,(-1L),(-7L),1L,6L},{1L,1L,0xDBL,0xA8L,0xAAL,0x08L,7L},{0x19L,0xDDL,0xDDL,(-7L),0L,0x14L,6L},{7L,(-1L),0x02L,0x02L,(-1L),7L,0xAFL},{0L,0x19L,6L,0xDDL,(-6L),(-3L),(-1L)},{1L,0x39L,0xCCL,0x24L,1L,6L,0xD4L},{(-1L),0x19L,(-7L),0x84L,0x84L,(-7L),0x19L},{0xAAL,(-1L),0xD9L,6L,0x58L,(-6L),0x08L}},{{2L,0xDDL,(-1L),0x14L,1L,(-1L),0x85L},{0xD9L,1L,0x08L,6L,0xCCL,0xCCL,6L},{0L,0x85L,0L,0x84L,(-1L),(-1L),(-1L)},{0xB5L,0xDBL,0xAFL,0x24L,0x7EL,(-1L),(-9L)},{0x85L,0xDDL,(-1L),0xDDL,0x33L,(-1L),(-1L)},{(-6L),0x02L,0x24L,0x02L,(-6L),0xCCL,1L},{(-1L),6L,0x14L,(-7L),(-1L),(-1L),(-3L)},{1L,0xCCL,0xB5L,0xA8L,0xD4L,(-6L),0xAAL},{(-1L),0x85L,6L,(-3L),6L,0x85L,(-1L)},{1L,0x24L,(-6L),1L,0x58L,0xDBL,0xFFL}}};
static uint8_t g_363 = 4UL;
static uint32_t g_411 = 0x8AAC0F7AL;
static int16_t *g_483 = &g_105[0];
static int16_t **g_482 = &g_483;
static const int32_t *g_516 = &g_2;
static const int32_t **g_515[6] = {&g_516,&g_516,&g_516,&g_516,&g_516,&g_516};
static uint8_t *g_569 = &g_233;
static uint8_t **g_568 = &g_569;
static int32_t *g_593 = (void*)0;
static int32_t **g_592 = &g_593;
static uint64_t g_668 = 1UL;
static uint16_t g_680 = 3UL;
static int8_t *g_729 = &g_325[3];
static int8_t **g_728 = &g_729;
static int8_t ***g_727 = &g_728;
static uint16_t g_774 = 0x1B0AL;
static uint32_t g_778 = 0xBF259A59L;
static int8_t g_803 = 1L;
static int64_t *g_830 = (void*)0;
static int64_t **g_829[4] = {&g_830,&g_830,&g_830,&g_830};
static int32_t ****g_856 = (void*)0;
static int32_t ***** const g_855[10] = {&g_856,&g_856,&g_856,&g_856,&g_856,&g_856,&g_856,&g_856,&g_856,&g_856};
static int64_t g_891 = 0x26D52B07B2EBA80ELL;
static int64_t ***g_942 = &g_829[0];
static int64_t ***g_943[10] = {&g_829[1],&g_829[1],&g_829[1],&g_829[1],&g_829[1],&g_829[1],&g_829[1],&g_829[1],&g_829[1],&g_829[1]};
static uint16_t g_991 = 65535UL;
static const int16_t ****g_1231 = (void*)0;
static uint32_t *g_1323 = &g_411;
static uint32_t **g_1322 = &g_1323;
static int64_t ** const g_1390 = (void*)0;
static int64_t ** const *g_1389 = &g_1390;
static int64_t ** const **g_1388 = &g_1389;
static uint8_t g_1408 = 255UL;
static const int8_t g_1507 = 0x9BL;
static const int8_t g_1509 = (-10L);
static const int8_t *g_1508[2][2][7] = {{{&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509},{&g_1507,&g_1507,&g_1507,&g_1507,&g_1507,&g_1507,&g_1507}},{{&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509},{&g_1507,&g_1507,&g_1507,&g_1507,&g_1507,&g_1507,&g_1507}}};
static int16_t g_1576 = 0xC416L;
static uint32_t g_1577[2] = {0x7334BEF1L,0x7334BEF1L};
static const int32_t ****g_1726 = (void*)0;
static uint64_t g_1845 = 0x6855B12386963904LL;
static uint64_t g_1939 = 18446744073709551615UL;
static uint16_t *g_1960 = &g_178;
static uint64_t g_1996 = 18446744073709551615UL;
static int64_t *g_2017 = (void*)0;
static int32_t g_2033[9][7] = {{0xFD6B1B62L,0L,0x0C08B3AFL,0xAA3476CBL,0xAA3476CBL,0x0C08B3AFL,0L},{0xFD6B1B62L,0xA6288F8DL,1L,0x5B6BF36EL,(-10L),1L,0x5B6BF36EL},{0L,1L,0x226EB388L,1L,0xDC367A41L,0xA6288F8DL,0L},{0xDC367A41L,0xFD6B1B62L,0x0C08B3AFL,0x5B6BF36EL,1L,4L,0x5FDB6D01L},{0x5FDB6D01L,0L,(-10L),0xAA3476CBL,(-10L),0L,0x5FDB6D01L},{1L,7L,0L,(-10L),0x5FDB6D01L,1L,0L},{7L,0xAA3476CBL,4L,0xDC367A41L,0xFD6B1B62L,0x0C08B3AFL,0x5B6BF36EL},{1L,0L,0L,1L,1L,0L,0L},{0L,0x40FBFFC1L,(-10L),(-10L),0x40FBFFC1L,0L,0xA6288F8DL}};
static uint8_t * const *g_2035 = &g_569;
static uint8_t * const * const *g_2034 = &g_2035;
static int32_t ***g_2087 = &g_592;
static int32_t ****g_2086[3][7][5] = {{{&g_2087,&g_2087,&g_2087,&g_2087,&g_2087},{&g_2087,(void*)0,&g_2087,&g_2087,&g_2087},{&g_2087,&g_2087,&g_2087,&g_2087,&g_2087},{(void*)0,&g_2087,&g_2087,&g_2087,&g_2087},{&g_2087,(void*)0,&g_2087,&g_2087,&g_2087},{&g_2087,&g_2087,&g_2087,&g_2087,&g_2087},{&g_2087,&g_2087,&g_2087,&g_2087,&g_2087}},{{(void*)0,(void*)0,&g_2087,(void*)0,&g_2087},{&g_2087,&g_2087,(void*)0,&g_2087,&g_2087},{(void*)0,&g_2087,&g_2087,&g_2087,&g_2087},{&g_2087,(void*)0,(void*)0,&g_2087,(void*)0},{&g_2087,&g_2087,&g_2087,&g_2087,&g_2087},{&g_2087,&g_2087,&g_2087,&g_2087,&g_2087},{&g_2087,&g_2087,(void*)0,&g_2087,&g_2087}},{{(void*)0,(void*)0,&g_2087,(void*)0,&g_2087},{&g_2087,&g_2087,&g_2087,&g_2087,&g_2087},{&g_2087,&g_2087,(void*)0,&g_2087,(void*)0},{&g_2087,&g_2087,&g_2087,&g_2087,&g_2087},{(void*)0,&g_2087,&g_2087,(void*)0,&g_2087},{&g_2087,&g_2087,&g_2087,&g_2087,&g_2087},{&g_2087,(void*)0,&g_2087,&g_2087,&g_2087}}};
static uint16_t g_2162 = 6UL;
static int8_t g_2195 = 0x33L;
static int16_t g_2211 = (-2L);
static int64_t ****g_2229 = (void*)0;
static int16_t g_2281 = (-1L);
static uint32_t *g_2308 = &g_311;
static int16_t ***g_2386 = &g_482;
static int16_t ****g_2385 = &g_2386;
static int16_t *****g_2384[6][10][4] = {{{&g_2385,(void*)0,&g_2385,&g_2385},{(void*)0,&g_2385,&g_2385,(void*)0},{&g_2385,(void*)0,&g_2385,&g_2385},{&g_2385,(void*)0,&g_2385,(void*)0},{&g_2385,&g_2385,&g_2385,&g_2385},{&g_2385,(void*)0,&g_2385,&g_2385},{(void*)0,(void*)0,&g_2385,&g_2385},{&g_2385,&g_2385,&g_2385,(void*)0},{(void*)0,(void*)0,&g_2385,&g_2385},{(void*)0,(void*)0,&g_2385,(void*)0}},{{(void*)0,&g_2385,&g_2385,&g_2385},{(void*)0,(void*)0,&g_2385,&g_2385},{&g_2385,(void*)0,&g_2385,&g_2385},{(void*)0,&g_2385,&g_2385,(void*)0},{&g_2385,(void*)0,&g_2385,&g_2385},{&g_2385,(void*)0,&g_2385,(void*)0},{&g_2385,&g_2385,&g_2385,&g_2385},{&g_2385,(void*)0,&g_2385,&g_2385},{(void*)0,(void*)0,&g_2385,&g_2385},{&g_2385,&g_2385,&g_2385,(void*)0}},{{(void*)0,(void*)0,&g_2385,&g_2385},{(void*)0,(void*)0,&g_2385,(void*)0},{(void*)0,&g_2385,&g_2385,&g_2385},{(void*)0,(void*)0,&g_2385,&g_2385},{&g_2385,(void*)0,&g_2385,&g_2385},{(void*)0,&g_2385,&g_2385,(void*)0},{&g_2385,(void*)0,&g_2385,&g_2385},{&g_2385,(void*)0,&g_2385,(void*)0},{&g_2385,&g_2385,&g_2385,&g_2385},{&g_2385,(void*)0,&g_2385,&g_2385}},{{(void*)0,(void*)0,&g_2385,&g_2385},{&g_2385,&g_2385,&g_2385,(void*)0},{(void*)0,(void*)0,&g_2385,&g_2385},{(void*)0,(void*)0,&g_2385,(void*)0},{(void*)0,&g_2385,&g_2385,&g_2385},{(void*)0,&g_2385,&g_2385,&g_2385},{(void*)0,&g_2385,&g_2385,&g_2385},{&g_2385,(void*)0,&g_2385,&g_2385},{(void*)0,&g_2385,&g_2385,&g_2385},{(void*)0,&g_2385,&g_2385,&g_2385}},{{(void*)0,(void*)0,&g_2385,&g_2385},{&g_2385,&g_2385,&g_2385,&g_2385},{&g_2385,&g_2385,&g_2385,&g_2385},{(void*)0,(void*)0,&g_2385,&g_2385},{&g_2385,&g_2385,&g_2385,&g_2385},{&g_2385,&g_2385,(void*)0,&g_2385},{&g_2385,(void*)0,&g_2385,&g_2385},{(void*)0,&g_2385,&g_2385,&g_2385},{(void*)0,&g_2385,&g_2385,&g_2385},{&g_2385,(void*)0,&g_2385,&g_2385}},{{(void*)0,&g_2385,&g_2385,&g_2385},{(void*)0,&g_2385,&g_2385,&g_2385},{(void*)0,(void*)0,&g_2385,&g_2385},{&g_2385,&g_2385,&g_2385,&g_2385},{&g_2385,&g_2385,&g_2385,&g_2385},{(void*)0,(void*)0,&g_2385,&g_2385},{&g_2385,&g_2385,&g_2385,&g_2385},{&g_2385,&g_2385,(void*)0,&g_2385},{&g_2385,(void*)0,&g_2385,&g_2385},{(void*)0,&g_2385,&g_2385,&g_2385}}};
static const int32_t g_2398 = 0xFA762904L;
static int16_t g_2449 = 0xF25AL;
static int32_t ****g_2553 = &g_2087;
static uint16_t *g_2638 = &g_50;
static uint32_t g_2665 = 0x568F124DL;
static uint32_t g_2666 = 6UL;
static uint32_t g_2667 = 0xDE9F8228L;
static uint32_t g_2668[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static uint32_t * const g_2664[4][2][5] = {{{&g_2668[3],(void*)0,&g_2666,(void*)0,&g_2668[3]},{&g_2668[3],(void*)0,&g_2666,(void*)0,&g_2668[3]}},{{&g_2668[3],(void*)0,&g_2666,(void*)0,&g_2668[3]},{&g_2668[3],(void*)0,&g_2666,(void*)0,&g_2668[3]}},{{&g_2668[3],(void*)0,&g_2666,(void*)0,&g_2668[3]},{&g_2668[3],(void*)0,&g_2666,(void*)0,&g_2668[3]}},{{&g_2668[3],(void*)0,&g_2666,(void*)0,&g_2668[3]},{&g_2668[3],(void*)0,&g_2666,(void*)0,&g_2668[3]}}};
static uint32_t * const *g_2663 = &g_2664[3][1][1];
static int32_t * const *g_2727 = (void*)0;
static int32_t * const **g_2726[5] = {&g_2727,&g_2727,&g_2727,&g_2727,&g_2727};
static const uint32_t g_2784 = 0xECF1281AL;
static int8_t *****g_2836 = (void*)0;
static const uint8_t *g_2877 = (void*)0;
static const uint8_t **g_2876 = &g_2877;
static const uint8_t ***g_2875 = &g_2876;
static const uint8_t ****g_2874 = &g_2875;
static const uint8_t *****g_2873 = &g_2874;
static uint8_t ***g_2958 = &g_568;
static uint8_t ****g_2957 = &g_2958;
static uint8_t *****g_2956 = &g_2957;
static const uint32_t *g_2971 = (void*)0;
static const uint32_t * const *g_2970 = &g_2971;
static uint32_t **g_3044 = &g_2308;
static uint32_t ***g_3043 = &g_3044;
static int32_t * const g_3459 = (void*)0;
static int32_t * const *g_3458 = &g_3459;
static uint8_t g_3490 = 248UL;
static uint8_t g_3529 = 8UL;
static uint64_t g_3609[4][8][7] = {{{0x74AE24C092F75E1ELL,0x58C581AAF63FDAA6LL,0x74FA384EBEB419D6LL,0x4020947C9843985ELL,18446744073709551614UL,1UL,1UL},{0xAD584E5E4EC2C75CLL,0UL,0xD06E9C46D381B84CLL,0xAE5B58B25B6BA3A2LL,1UL,0UL,1UL},{0xBCD89F6E5DBE22B1LL,1UL,1UL,0xBCD89F6E5DBE22B1LL,0x5670CAC556A875BALL,0x1F3E8EA26E21E4A3LL,0UL},{0x001E21AD24E857C7LL,0x447CC9B94DD2E280LL,18446744073709551615UL,0UL,0UL,0x6754065D78150655LL,5UL},{18446744073709551609UL,6UL,0x4020947C9843985ELL,0x4B710EB4927E6ACELL,5UL,0x8F6705D2C034C3B6LL,0UL},{18446744073709551606UL,0xB622AF55FEF58904LL,0xE5CFC7ECBAF08B94LL,0xD06E9C46D381B84CLL,0xE4F343F1A5B4424ALL,0xB622AF55FEF58904LL,0UL},{18446744073709551614UL,0x4B710EB4927E6ACELL,4UL,0x4020947C9843985ELL,0x5CE38AC5BC851B35LL,0x6369E872AA0F9EEFLL,1UL},{0xE5CFC7ECBAF08B94LL,0xAE5B58B25B6BA3A2LL,1UL,1UL,0xAE5B58B25B6BA3A2LL,0xE5CFC7ECBAF08B94LL,5UL}},{{0UL,0x74AE24C092F75E1ELL,0xE7A1BD6B9F5C271CLL,0x8F6705D2C034C3B6LL,0x58C581AAF63FDAA6LL,0x4020947C9843985ELL,1UL},{0x8534808ADA6D1DA4LL,0x83FC50F2E9B224F7LL,0xCECEF9D29B795659LL,0x6389AD2715A09C1ELL,7UL,18446744073709551615UL,0UL},{0x5670CAC556A875BALL,0x74AE24C092F75E1ELL,0x79C1D7E5358B22EFLL,0x4EAB6DB5AF19BEB1LL,0x1F3E8EA26E21E4A3LL,1UL,0x67D5987B06BAA791LL},{0x83FC50F2E9B224F7LL,0xAE5B58B25B6BA3A2LL,0xFC78B08ABC1F029DLL,0x4ED6A4B160EE7515LL,5UL,0xD06E9C46D381B84CLL,0x6389AD2715A09C1ELL},{0x0B9480E52EFDE84ELL,0x4B710EB4927E6ACELL,0x74FA384EBEB419D6LL,0xE7A1BD6B9F5C271CLL,0xE7A1BD6B9F5C271CLL,0x74FA384EBEB419D6LL,0x4B710EB4927E6ACELL},{1UL,1UL,18446744073709551606UL,1UL,0x83FC50F2E9B224F7LL,1UL,0UL},{0xF0DD31EA96A208FBLL,0UL,18446744073709551609UL,6UL,0x4020947C9843985ELL,0x4B710EB4927E6ACELL,5UL},{0x447CC9B94DD2E280LL,0xC4EB16DF08D3AB16LL,0x001E21AD24E857C7LL,1UL,18446744073709551615UL,0x83FC50F2E9B224F7LL,18446744073709551606UL}},{{0x74FA384EBEB419D6LL,5UL,0xBCD89F6E5DBE22B1LL,0xE7A1BD6B9F5C271CLL,0UL,0x1F3E8EA26E21E4A3LL,0x58C581AAF63FDAA6LL},{1UL,18446744073709551615UL,0xAD584E5E4EC2C75CLL,0x4ED6A4B160EE7515LL,2UL,2UL,0x4ED6A4B160EE7515LL},{0x74AE24C092F75E1ELL,0xA918D4FCE36A213BLL,0x74AE24C092F75E1ELL,0x4EAB6DB5AF19BEB1LL,1UL,1UL,0x6369E872AA0F9EEFLL},{2UL,0xAD584E5E4EC2C75CLL,0x447CC9B94DD2E280LL,0x6389AD2715A09C1ELL,0xADF991A3EFB36A1BLL,6UL,0xC4EB16DF08D3AB16LL},{0x67D5987B06BAA791LL,0x0B9480E52EFDE84ELL,0x4020947C9843985ELL,0x8F6705D2C034C3B6LL,18446744073709551612UL,1UL,0xC733822D08726696LL},{1UL,0xFC78B08ABC1F029DLL,0x6BD32FB19C9BCAE0LL,1UL,0x001E21AD24E857C7LL,2UL,0UL},{0x79C1D7E5358B22EFLL,0xB007CA1EEAFB3B8DLL,0xC733822D08726696LL,0x4020947C9843985ELL,18446744073709551612UL,0x1F3E8EA26E21E4A3LL,0x1F3E8EA26E21E4A3LL},{0UL,0xD06E9C46D381B84CLL,0xE5CFC7ECBAF08B94LL,0xD06E9C46D381B84CLL,0UL,0x83FC50F2E9B224F7LL,0xB622AF55FEF58904LL}},{{1UL,0x8F6705D2C034C3B6LL,6UL,0x1F3E8EA26E21E4A3LL,0xA918D4FCE36A213BLL,0x4B710EB4927E6ACELL,0xF0DD31EA96A208FBLL},{0xAD584E5E4EC2C75CLL,0x6754065D78150655LL,0UL,0UL,0x8534808ADA6D1DA4LL,1UL,1UL},{1UL,0x1F3E8EA26E21E4A3LL,0xB007CA1EEAFB3B8DLL,18446744073709551612UL,6UL,0x74FA384EBEB419D6LL,0x29040E84A738AB5FLL},{0UL,0UL,0UL,2UL,0x7EA29C8F97B9577ELL,0xD06E9C46D381B84CLL,0x8534808ADA6D1DA4LL},{0x79C1D7E5358B22EFLL,1UL,0x4B710EB4927E6ACELL,0xA97ED899A2995C6ELL,0x4B710EB4927E6ACELL,1UL,0x79C1D7E5358B22EFLL},{1UL,0UL,0UL,7UL,0xFC78B08ABC1F029DLL,18446744073709551615UL,0x6BD32FB19C9BCAE0LL},{0x67D5987B06BAA791LL,18446744073709551606UL,0x6369E872AA0F9EEFLL,0x74AE24C092F75E1ELL,1UL,0x4020947C9843985ELL,1UL},{2UL,18446744073709551615UL,0UL,0x6754065D78150655LL,0x4ED6A4B160EE7515LL,0xE5CFC7ECBAF08B94LL,0xE4F343F1A5B4424ALL}}};
static const int16_t *g_3836 = (void*)0;
static const int16_t **g_3835 = &g_3836;
static const int16_t ***g_3834 = &g_3835;
static const uint8_t ** const ***g_3838 = (void*)0;
static uint8_t g_3940 = 0xD9L;
static int64_t ** const ***g_3946[8] = {&g_1388,&g_1388,&g_1388,&g_1388,&g_1388,&g_1388,&g_1388,&g_1388};
static uint8_t g_4004 = 0xD9L;
static int32_t g_4097 = 6L;
static int32_t g_4121[9][9] = {{0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L},{0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L},{0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L},{0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L},{0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L},{0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L},{0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L},{0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L},{0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L,0xE82C1D62L}};
static uint32_t g_4200 = 0x60F8CA55L;
static uint32_t ****g_4226[4][1][4] = {{{&g_3043,&g_3043,&g_3043,&g_3043}},{{&g_3043,(void*)0,(void*)0,&g_3043}},{{(void*)0,&g_3043,(void*)0,(void*)0}},{{&g_3043,&g_3043,&g_3043,&g_3043}}};
static uint32_t *****g_4225[3] = {&g_4226[3][0][1],&g_4226[3][0][1],&g_4226[3][0][1]};



static uint32_t func_1(void);
static int16_t func_9(int16_t p_10);
static int32_t func_13(uint64_t p_14, int32_t p_15, int8_t p_16, int16_t p_17);
static uint16_t func_18(int16_t p_19, uint8_t p_20, uint16_t p_21, int32_t p_22);
static uint16_t func_25(int16_t p_26, int32_t p_27);
static int32_t func_28(int64_t p_29, int16_t p_30, int16_t p_31, uint32_t p_32, int8_t p_33);
static int16_t func_34(uint32_t p_35);
static int16_t func_43(int32_t p_44);
static int32_t func_64(int32_t * p_65, uint16_t * p_66);
static int32_t * func_67(uint32_t p_68, const uint8_t p_69, int16_t p_70, int32_t p_71, uint16_t p_72);
# 169 "<stdin>"
static uint32_t func_1(void)
{
    int8_t l_5 = 0xF4L;
    int16_t ** const *l_3666 = &g_482;
    int16_t ** const **l_3665 = &l_3666;
    int32_t *l_3700 = &g_359;
    int8_t l_3721 = 0L;
    int32_t l_3722 = 0xFF7BD770L;
    int32_t l_3781 = (-1L);
    uint32_t l_3791 = 0x151426A2L;
    uint64_t l_3812 = 0x955E300898057975LL;
    int32_t l_3813[4][1];
    int32_t ***l_3846[4][2][10] = {{{(void*)0,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,(void*)0,&g_201,&g_201},{&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,(void*)0}},{{&g_201,(void*)0,(void*)0,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,(void*)0},{&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,(void*)0,(void*)0,&g_201}},{{&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,(void*)0},{&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,(void*)0,&g_201,&g_201}},{{&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201},{&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201}}};
    int32_t ****l_3845 = &l_3846[1][1][4];
    const int16_t l_3850 = 0x3755L;
    int32_t l_3851 = 0xB8A3FB21L;
    int32_t *l_3880 = &l_3813[1][0];
    int64_t ***l_3891 = &g_829[0];
    uint8_t **l_3917 = &g_569;
    uint64_t l_3942 = 0x7E9375D9DE5BF84CLL;
    int8_t ** const *l_4115[10][1] = {{&g_728},{(void*)0},{&g_728},{(void*)0},{&g_728},{(void*)0},{&g_728},{(void*)0},{&g_728},{(void*)0}};
    int8_t ** const ** const l_4114[10] = {&l_4115[2][0],&l_4115[1][0],&l_4115[1][0],&l_4115[2][0],&l_4115[1][0],&l_4115[1][0],&l_4115[2][0],&l_4115[1][0],&l_4115[1][0],&l_4115[2][0]};
    uint8_t l_4120 = 0xDFL;
    int32_t l_4158 = (-7L);
    int32_t l_4163 = 1L;
    int8_t l_4164 = 0L;
    uint8_t l_4201 = 1UL;
    int32_t l_4202 = (-1L);
    int64_t ****l_4241 = &g_942;
    uint8_t l_4257[5][3][1] = {{{0x1CL},{246UL},{246UL}},{{0x1CL},{246UL},{246UL}},{{0x1CL},{246UL},{246UL}},{{0x1CL},{246UL},{246UL}},{{0x1CL},{246UL},{246UL}}};
    int16_t l_4262 = 0x1C24L;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_3813[i][j] = (-4L);
    }
lbl_3631:
    for (g_2 = 0; (g_2 > 6); g_2 = safe_add_func_int32_t_s_s(g_2, 4))
    {
        int16_t l_3624 = 0L;
        g_6 = l_5;
        l_3624 |= (safe_add_func_int16_t_s_s(func_9(g_2), 0xD202L));
    }
    for (g_1576 = 0; (g_1576 != 19); g_1576++)
    {
        for (g_2162 = 0; (g_2162 <= 1); g_2162 += 1)
        {
            int32_t l_3628 = 0L;
            for (g_411 = 0; (g_411 <= 1); g_411 += 1)
            {
                for (g_143 = 0; (g_143 <= 1); g_143 += 1)
                {
                    int32_t l_3627 = 9L;
                    if (l_3627)
                        break;
                    (*g_2553) = (*g_2553);
                    for (g_357 = 0; (g_357 <= 1); g_357 += 1)
                    {
                        return l_3628;
                    }
                }
            }
        }
    }
    for (g_991 = (-28); (g_991 >= 57); ++g_991)
    {
        int64_t l_3634 = 7L;
        int8_t * const *l_3645 = &g_729;
        int8_t * const **l_3644[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t ***l_3668 = &g_201;
        int32_t *l_3701 = &g_359;
        int16_t *l_3725 = &g_105[0];
        int8_t l_3779 = (-4L);
        int16_t l_3853 = 0x63EAL;
        int64_t l_3864 = 0xFA3B9CE55B3118E7LL;
        uint16_t l_3877 = 7UL;
        uint32_t l_3900 = 4294967294UL;
        int32_t ***l_3938 = &g_592;
        int64_t **l_3941 = &g_830;
        int32_t l_3945 = 0x1D3316D5L;
        const int32_t l_3960[4][10][5] = {{{(-4L),0x3A594FE2L,0xFB8FC630L,0x0A755EC3L,0x314ECFE7L},{0x3A594FE2L,(-4L),0xFB8FC630L,(-7L),0xFB8FC630L},{0x3A594FE2L,0x3A594FE2L,0xA291B350L,(-7L),0x314ECFE7L},{(-4L),0x3A594FE2L,0xFB8FC630L,0x0A755EC3L,0x314ECFE7L},{0x3A594FE2L,(-4L),0xFB8FC630L,(-7L),0xFB8FC630L},{0x3A594FE2L,0x3A594FE2L,0xA291B350L,(-7L),0x314ECFE7L},{(-4L),0x3A594FE2L,0xFB8FC630L,0x0A755EC3L,0x314ECFE7L},{0x3A594FE2L,(-4L),0xFB8FC630L,(-7L),0xFB8FC630L},{0x3A594FE2L,0x3A594FE2L,0xA291B350L,(-7L),0x314ECFE7L},{(-4L),0x3A594FE2L,0xFB8FC630L,0x0A755EC3L,0x314ECFE7L}},{{0x3A594FE2L,(-4L),0xFB8FC630L,(-7L),0xFB8FC630L},{0x3A594FE2L,0x3A594FE2L,0xA291B350L,(-7L),0x314ECFE7L},{(-4L),0x3A594FE2L,0xFB8FC630L,0x0A755EC3L,0x314ECFE7L},{0x3A594FE2L,(-4L),0xFB8FC630L,(-7L),0xFB8FC630L},{0x3A594FE2L,0x3A594FE2L,0xA291B350L,(-7L),0x314ECFE7L},{(-4L),0x3A594FE2L,0xFB8FC630L,0x0A755EC3L,0x314ECFE7L},{0x3A594FE2L,(-4L),0xFB8FC630L,(-7L),0xFB8FC630L},{0x3A594FE2L,0x3A594FE2L,0xA291B350L,(-7L),0x314ECFE7L},{(-4L),0x3A594FE2L,0xFB8FC630L,0x0A755EC3L,0x314ECFE7L},{0x3A594FE2L,(-4L),0xFB8FC630L,(-7L),0xFB8FC630L}},{{0x3A594FE2L,0x3A594FE2L,0xA291B350L,(-7L),0x314ECFE7L},{(-4L),0x3A594FE2L,0xFB8FC630L,0x0A755EC3L,0x314ECFE7L},{0x3A594FE2L,(-4L),0xFB8FC630L,(-7L),0xFB8FC630L},{0x3A594FE2L,0x3A594FE2L,0xA291B350L,(-7L),0x314ECFE7L},{(-4L),0x3A594FE2L,0xFB8FC630L,0x0A755EC3L,0x314ECFE7L},{0x3A594FE2L,(-4L),0xFB8FC630L,(-7L),0xFB8FC630L},{0x3A594FE2L,0x3A594FE2L,0xA291B350L,(-7L),0x314ECFE7L},{(-4L),0x3A594FE2L,0xFB8FC630L,0x0A755EC3L,0x314ECFE7L},{0x3A594FE2L,(-4L),0xFB8FC630L,(-7L),0xFB8FC630L},{0x3A594FE2L,0x3A594FE2L,0xA291B350L,(-7L),0x314ECFE7L}},{{(-4L),0x3A594FE2L,0xFB8FC630L,0x0A755EC3L,0x314ECFE7L},{0x3A594FE2L,(-4L),0x9E7E6AE4L,1L,0x9E7E6AE4L},{0xFB8FC630L,0xFB8FC630L,7L,1L,0L},{0xA291B350L,0xFB8FC630L,0x9E7E6AE4L,(-1L),0L},{0xFB8FC630L,0xA291B350L,0x9E7E6AE4L,1L,0x9E7E6AE4L},{0xFB8FC630L,0xFB8FC630L,7L,1L,0L},{0xA291B350L,0xFB8FC630L,0x9E7E6AE4L,(-1L),0L},{0xFB8FC630L,0xA291B350L,0x9E7E6AE4L,1L,0x9E7E6AE4L},{0xFB8FC630L,0xFB8FC630L,7L,1L,0L},{0xA291B350L,0xFB8FC630L,0x9E7E6AE4L,(-1L),0L}}};
        int32_t l_4063 = 0x0812C9E6L;
        int32_t l_4065 = (-1L);
        int32_t l_4066 = 0L;
        uint8_t l_4067 = 0x21L;
        int8_t ****l_4178 = &g_727;
        int8_t *****l_4177[5][9][3] = {{{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178}},{{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178}},{{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178}},{{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178}},{{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178},{&l_4178,&l_4178,&l_4178}}};
        int32_t l_4195[2][2][7] = {{{0x66ED1981L,0x27FF03CAL,0x27FF03CAL,0x66ED1981L,0x27FF03CAL,0x27FF03CAL,0x66ED1981L},{0x897B1897L,0xEBE482DDL,0x897B1897L,0x897B1897L,0xEBE482DDL,0x897B1897L,0x2FEDBC73L}},{{0x27FF03CAL,0x27FF03CAL,0x66ED1981L,0x27FF03CAL,0x27FF03CAL,0x66ED1981L,0x27FF03CAL},{0x897B1897L,0x2FEDBC73L,0x2FEDBC73L,0x897B1897L,0x2FEDBC73L,0x2FEDBC73L,0x897B1897L}}};
        uint32_t l_4199 = 4294967295UL;
        const uint8_t l_4212[7][6][6] = {{{0x63L,8UL,0x45L,3UL,8UL,0x47L},{0x0AL,0x1AL,248UL,0UL,0xF0L,3UL},{0xF9L,0x64L,255UL,0x47L,1UL,0UL},{0xF9L,255UL,255UL,0UL,8UL,0x93L},{0x0AL,0xF0L,0xF9L,3UL,0UL,9UL},{0x63L,0x31L,6UL,1UL,8UL,0UL}},{{0UL,255UL,0UL,6UL,5UL,6UL},{1UL,255UL,1UL,0x93L,0xF0L,0x45L},{255UL,0x0EL,6UL,0xC4L,0xF7L,0xF9L},{246UL,8UL,9UL,0xC4L,255UL,0x93L},{255UL,0UL,0x63L,0x93L,0x98L,0x78L},{1UL,0UL,255UL,6UL,0x50L,8UL}},{{0UL,0UL,0x67L,1UL,255UL,0x47L},{0x63L,252UL,0UL,3UL,252UL,255UL},{0x0AL,0x0EL,250UL,0UL,0x31L,8UL},{0xF9L,6UL,0x33L,0x47L,5UL,0xB8L},{0xF9L,248UL,0x63L,0UL,0xFBL,0x48L},{0x0AL,0x31L,0x91L,3UL,0xB3L,0xF9L}},{{0x63L,255UL,0x93L,1UL,8UL,3UL},{0UL,248UL,1UL,6UL,0UL,0x93L},{1UL,0x64L,0UL,0x93L,0x31L,0UL},{255UL,0xD7L,0x93L,0xC4L,8UL,0x91L},{246UL,252UL,0xF9L,0xC4L,255UL,0x48L},{255UL,0xB3L,0x47L,0x93L,0x50L,0UL}},{{1UL,255UL,0x33L,6UL,0x2DL,249UL},{0UL,0UL,248UL,1UL,255UL,255UL},{0x63L,0xF7L,3UL,3UL,0xF7L,0x63L},{0x0AL,0xD7L,0x67L,0UL,255UL,249UL},{0xF9L,255UL,0xEAL,0x47L,0UL,0x78L},{0xF9L,250UL,0x46L,1UL,255UL,8UL}},{{0xCAL,0xA7L,0x86L,1UL,0xF9L,255UL},{0xA2L,0x93L,0x33L,0x48L,0x33L,2UL},{0x59L,250UL,1UL,0xCEL,0x5CL,0x33L},{0xE4L,0x0AL,5UL,255UL,0xA7L,1UL},{249UL,3UL,0x33L,0x7FL,1UL,0x86L},{0xC7L,0xC4L,255UL,0x7FL,0xB8L,8UL}},{{249UL,0xF9L,254UL,255UL,0UL,250UL},{0xE4L,0x78L,0x13L,0xCEL,0x45L,0x9BL},{0x59L,0x91L,0UL,0x48L,0xB8L,0xA2L},{0xA2L,246UL,2UL,1UL,246UL,0x46L},{0xCAL,3UL,1UL,1UL,0x93L,0x9BL},{0xE0L,1UL,0xC9L,0x46L,0x5CL,0x59L}}};
        int i, j, k;
        if (g_2)
            goto lbl_3631;
    }
    (*g_201) = func_67((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(((*g_1960) |= ((((*l_4241) = l_3891) != (*g_1388)) < (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((~(*l_3880)), 11)), 5)))), (*l_3880))), 14)), (((g_2836 = g_2836) == ((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(g_3609[2][1][6], (safe_add_func_int64_t_s_s(l_4257[2][0][0], (safe_lshift_func_int16_t_s_s(8L, 1)))))), ((safe_lshift_func_int16_t_s_u((((*l_3700) = (*l_3880)) , (***g_2386)), (*g_2638))) != 0x5B574F15A0F1C5B0LL))), 0)), 1L)) || (**g_1322)) >= 9UL) , &l_4114[5])) , (*l_3880)), (***g_2386), (*g_202), (*g_2638));
    return l_4262;
}







static int16_t func_9(int16_t p_10)
{
    int32_t l_36[2];
    int32_t l_2869 = 0x6136CC26L;
    int32_t l_2935 = 1L;
    uint8_t ***l_2955[4] = {&g_568,&g_568,&g_568,&g_568};
    uint8_t ****l_2954 = &l_2955[1];
    uint8_t *****l_2953 = &l_2954;
    const uint32_t *l_2989 = &g_411;
    const uint32_t **l_2988 = &l_2989;
    uint16_t **l_3028 = &g_2638;
    uint32_t **l_3041 = (void*)0;
    uint32_t ***l_3040 = &l_3041;
    int64_t * const *l_3052 = &g_830;
    int64_t * const **l_3051[4][2][5] = {{{(void*)0,(void*)0,&l_3052,(void*)0,(void*)0},{&l_3052,&l_3052,&l_3052,&l_3052,&l_3052}},{{(void*)0,&l_3052,&l_3052,(void*)0,&l_3052},{&l_3052,&l_3052,&l_3052,&l_3052,&l_3052}},{{&l_3052,(void*)0,&l_3052,&l_3052,(void*)0},{&l_3052,&l_3052,&l_3052,&l_3052,&l_3052}},{{(void*)0,(void*)0,&l_3052,(void*)0,(void*)0},{&l_3052,&l_3052,&l_3052,&l_3052,&l_3052}}};
    int64_t * const ***l_3050[2];
    int64_t * const ****l_3049 = &l_3050[0];
    int64_t *l_3065 = &g_147;
    int32_t l_3071 = 0L;
    int32_t l_3072 = 0L;
    int32_t l_3075 = 0x4DEB92E3L;
    int32_t l_3079 = (-1L);
    int32_t l_3080 = 0xE74BDE05L;
    uint32_t * const *l_3129[2];
    int32_t l_3132 = 0x5521D5EBL;
    int32_t l_3133[8][1];
    uint64_t l_3216 = 3UL;
    int32_t ***l_3280 = &g_201;
    int32_t ****l_3279[9][10][2] = {{{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0}},{{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280}},{{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280}},{{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280}},{{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0}},{{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280}},{{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280}},{{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280}},{{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,&l_3280},{&l_3280,(void*)0}}};
    int32_t *l_3286 = &l_3133[5][0];
    int32_t l_3298 = 0x55770D68L;
    uint64_t l_3334 = 2UL;
    uint32_t l_3382 = 0xD6A4999BL;
    int32_t ***l_3433 = (void*)0;
    int32_t *l_3533[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_36[i] = 0x8D72A67FL;
    for (i = 0; i < 2; i++)
        l_3050[i] = &l_3051[2][0][0];
    for (i = 0; i < 2; i++)
        l_3129[i] = &g_1323;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
            l_3133[i][j] = 0xCCD31268L;
    }
    for (g_6 = (-20); (g_6 <= (-13)); g_6++)
    {
        uint8_t l_1372 = 255UL;
        uint32_t l_1373 = 4UL;
        int32_t l_1793[1][8] = {{(-10L),(-5L),(-10L),(-10L),(-5L),(-10L),(-10L),(-5L)}};
        int32_t l_2962[7] = {1L,1L,1L,1L,1L,1L,1L};
        int32_t l_2963[2][1];
        uint8_t * const **l_3029[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int64_t *****l_3045 = &g_2229;
        const int32_t *l_3087 = &g_2033[8][5];
        const int64_t *l_3101 = &g_124;
        uint8_t ** const l_3102[6][1][7] = {{{(void*)0,(void*)0,&g_569,(void*)0,&g_569,&g_569,&g_569}},{{&g_569,&g_569,&g_569,&g_569,&g_569,&g_569,&g_569}},{{&g_569,&g_569,&g_569,&g_569,&g_569,&g_569,&g_569}},{{&g_569,&g_569,&g_569,&g_569,&g_569,&g_569,&g_569}},{{&g_569,&g_569,&g_569,&g_569,&g_569,&g_569,&g_569}},{{&g_569,&g_569,&g_569,&g_569,&g_569,&g_569,&g_569}}};
        uint32_t l_3182 = 0x6DD29E34L;
        int32_t * const **l_3190 = &g_2727;
        int8_t ****l_3199 = &g_727;
        uint16_t **l_3219 = &g_1960;
        int32_t l_3276 = 9L;
        int16_t ***l_3283[2];
        uint32_t **l_3430 = &g_1323;
        uint32_t ***l_3456 = (void*)0;
        int32_t * const *l_3457 = (void*)0;
        int16_t l_3488 = 4L;
        const int16_t *****l_3536 = &g_1231;
        uint64_t l_3544 = 0xC257D70B659FCC28LL;
        uint8_t **** const *l_3578 = (void*)0;
        int32_t *l_3593[8][4][6] = {{{&l_3079,&l_3132,&l_2963[0][0],&l_3071,(void*)0,(void*)0},{&g_2033[8][5],(void*)0,(void*)0,&g_2033[8][5],(void*)0,&g_6},{(void*)0,&l_3079,&l_3079,&g_6,(void*)0,&l_2963[0][0]},{(void*)0,&l_3071,(void*)0,(void*)0,(void*)0,&l_3132}},{{&l_3075,&l_3079,&l_2935,(void*)0,&l_1793[0][7],&l_3075},{&l_3071,&g_2033[8][5],(void*)0,&g_2033[8][5],&l_3071,&g_2},{(void*)0,(void*)0,(void*)0,&l_3079,&g_2033[2][0],&l_3276},{&l_2963[0][0],&l_1793[0][4],&l_3079,(void*)0,&l_3075,&l_3276}},{{&l_3132,&l_3071,(void*)0,&l_2935,&g_6,&g_2},{&l_3075,(void*)0,(void*)0,(void*)0,(void*)0,&l_3075},{&g_2,&g_6,&l_2935,(void*)0,&l_3071,&l_3132},{&l_3276,&l_3075,(void*)0,&l_3079,&l_1793[0][4],&l_2963[0][0]}},{{&l_3276,&g_2033[2][0],&l_3079,(void*)0,(void*)0,(void*)0},{&g_2,&l_3071,&g_2033[8][5],(void*)0,&g_2033[8][5],&l_3071},{&l_3075,&l_1793[0][7],(void*)0,&l_2935,&l_3079,&l_3075},{&l_3132,(void*)0,(void*)0,(void*)0,&l_3071,(void*)0}},{{&l_2963[0][0],(void*)0,&g_6,&l_3079,&l_3079,&l_3276},{(void*)0,&l_1793[0][7],&l_3079,&g_2033[8][5],&g_2033[8][5],&l_3079},{&l_3071,&l_3071,&l_3075,(void*)0,(void*)0,(void*)0},{&l_3075,&g_2033[2][0],&g_63,(void*)0,&l_1793[0][4],&l_3075}},{{(void*)0,&l_3075,&g_63,&g_6,&l_3071,(void*)0},{&l_3276,&g_6,&l_3075,&l_3079,(void*)0,&l_3079},{&l_3079,(void*)0,&l_3079,&l_3075,&g_6,&l_3276},{(void*)0,&l_3071,&g_6,&g_63,&l_3075,(void*)0}},{{&l_3075,&l_1793[0][4],(void*)0,&g_63,&g_2033[2][0],&l_3075},{(void*)0,(void*)0,(void*)0,&l_3075,&l_3071,&l_3071},{&l_3079,&g_2033[8][5],&g_2033[8][5],&l_3079,&l_1793[0][7],(void*)0},{&l_3276,&l_3079,&l_3079,&g_6,(void*)0,&l_2963[0][0]}},{{(void*)0,&l_3071,(void*)0,(void*)0,(void*)0,&l_3132},{&l_3075,&l_3079,&l_2935,(void*)0,&l_1793[0][7],&l_3075},{&l_3071,&g_2033[8][5],(void*)0,&g_2033[8][5],&l_3071,&g_2},{(void*)0,(void*)0,(void*)0,&l_3079,&g_2033[2][0],&l_3276}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_2963[i][j] = 0L;
        }
        for (i = 0; i < 2; i++)
            l_3283[i] = (void*)0;
    }
    return p_10;
}







static int32_t func_13(uint64_t p_14, int32_t p_15, int8_t p_16, int16_t p_17)
{
    uint8_t ***l_2872 = (void*)0;
    uint8_t ****l_2871 = &l_2872;
    uint8_t *****l_2870 = &l_2871;
    int32_t l_2878 = 0xEE7189A9L;
    const int32_t l_2894 = 0xABAF6538L;
    if ((l_2870 != g_2873))
    {
        uint16_t l_2879[3];
        const int16_t l_2890 = 0x01B2L;
        int32_t l_2893 = (-1L);
        uint32_t *l_2907 = &g_228[4];
        uint8_t l_2912[8][4] = {{1UL,0x7BL,0xAEL,0x7BL},{1UL,0UL,0xAEL,0UL},{1UL,0x7BL,0xAEL,0x7BL},{1UL,0UL,0xAEL,0UL},{1UL,0x7BL,0xAEL,0x7BL},{1UL,0UL,0xAEL,0UL},{1UL,0x7BL,0xAEL,0x7BL},{1UL,0UL,0xAEL,0UL}};
        int32_t l_2913 = (-1L);
        int i, j;
        for (i = 0; i < 3; i++)
            l_2879[i] = 9UL;
        ++l_2879[1];
        l_2878 = (safe_add_func_uint8_t_u_u(p_15, ((safe_mul_func_int8_t_s_s(0L, ((safe_sub_func_uint8_t_u_u(((l_2878 > ((safe_div_func_int8_t_s_s(((**g_728) = l_2879[1]), p_16)) | (p_17 || ((*g_1323) &= (l_2890 , ((((safe_sub_func_uint64_t_u_u((l_2890 >= l_2893), p_15)) && (*g_1960)) , l_2894) != 0xA1L)))))) < p_16), l_2893)) , 0xF5L))) == p_16)));
        l_2913 |= (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((-1L), (safe_sub_func_uint32_t_u_u((0xCE3FB34E902B777ELL != (((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(p_16, (((((*l_2907) |= ((*g_1323) = (safe_sub_func_int8_t_s_s((p_16 && p_15), (*g_729))))) >= (((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((l_2878 = ((*g_483) > 0xF38EL)), l_2912[1][0])), l_2894)) | l_2893) || 4294967287UL)) ^ 0xADA63FC4450B8071LL) ^ p_17))), (****g_2385))) > l_2894) ^ p_17)), 0xD54E3216L)))), 0));
    }
    else
    {
        int32_t *l_2916 = &g_2033[7][1];
        (*l_2916) = (safe_div_func_int64_t_s_s(l_2878, 0x103296F6364CCC6DLL));
        (*g_201) = (void*)0;
        (*g_201) = (void*)0;
    }
    return l_2894;
}







static uint16_t func_18(int16_t p_19, uint8_t p_20, uint16_t p_21, int32_t p_22)
{
    uint16_t * const l_1831 = (void*)0;
    int32_t l_1844 = (-7L);
    int32_t l_1895 = (-1L);
    int32_t **l_1911 = &g_202;
    uint32_t *l_1915 = (void*)0;
    int32_t l_1990 = 1L;
    int32_t l_1995 = 8L;
    int32_t l_2051 = 0xF2F6DD4DL;
    int32_t l_2052 = 0x5EC673F5L;
    int32_t l_2053 = 0L;
    int32_t l_2054 = (-1L);
    int32_t l_2055 = 1L;
    int32_t l_2056 = 0x6CA065E7L;
    uint32_t l_2057 = 0UL;
    int16_t l_2109[1];
    uint8_t *l_2110 = &g_233;
    uint8_t l_2115 = 1UL;
    uint16_t l_2116 = 65529UL;
    int16_t ***l_2139 = &g_482;
    uint8_t l_2175 = 246UL;
    int32_t *****l_2234 = &g_856;
    int64_t *l_2283 = &g_95;
    int16_t l_2311 = (-1L);
    int32_t l_2358[6] = {0xD1B5B473L,0L,0xD1B5B473L,0xD1B5B473L,0L,0xD1B5B473L};
    uint32_t **l_2359[7] = {&g_2308,(void*)0,&g_2308,&g_2308,(void*)0,&g_2308,&g_2308};
    const int32_t *l_2397 = &g_2398;
    uint32_t l_2426 = 4294967287UL;
    uint16_t l_2503[5];
    uint16_t l_2559[10] = {0xEFBFL,0xEFBFL,0xEFBFL,0xEFBFL,0xEFBFL,0xEFBFL,0xEFBFL,0xEFBFL,0xEFBFL,0xEFBFL};
    uint64_t l_2651 = 9UL;
    int8_t l_2721 = 1L;
    uint8_t ***l_2850 = &g_568;
    uint8_t ****l_2849 = &l_2850;
    uint8_t *****l_2848 = &l_2849;
    int i;
    for (i = 0; i < 1; i++)
        l_2109[i] = 0xF2FCL;
    for (i = 0; i < 5; i++)
        l_2503[i] = 0xA984L;
    if ((((safe_sub_func_uint32_t_u_u(((l_1831 != l_1831) < ((safe_add_func_int8_t_s_s(((*g_1323) | (5UL <= ((((**g_728) &= ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((+(p_22 | p_20)), p_19)), (p_19 ^ (((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(g_105[1])), 0x41L)), l_1844)) & l_1844) == 0xCB8CL)))) < 1UL)) , g_1845) <= 6L))), p_21)) , (**g_728))), 0L)) == 0x83L) == 0UL))
    {
        uint16_t l_1859 = 4UL;
        int64_t *l_1860 = (void*)0;
        int64_t *l_1861 = &g_891;
        int32_t *l_1872 = &g_63;
        (*l_1872) |= ((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(252UL, ((safe_rshift_func_int16_t_s_s((p_20 || (safe_sub_func_int64_t_s_s((((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((**g_568) = ((((*g_1323) = (safe_unary_minus_func_int64_t_s(((*l_1861) = l_1859)))) || ((safe_rshift_func_int16_t_s_u(((((((***g_727) & p_21) != (safe_sub_func_uint8_t_u_u(((((l_1844 ^ (safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((p_21 >= (safe_div_func_uint8_t_u_u((*g_569), l_1844))), p_19)), 18446744073709551612UL))) , 0xC7L) != 0L) || 0x66D9L), 0x87L))) >= p_21) == p_20) && (*g_1323)), 14)) != (*g_1323))) , (**g_568))), p_21)), p_21)) , 0xEC05DAFFL) < 0x474EADD0L), p_19))), 13)) > l_1859))), p_22)) <= l_1859);
    }
    else
    {
        uint8_t l_1875 = 0UL;
        int32_t **l_1909[5][10] = {{&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202},{&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202},{&g_202,&g_202,(void*)0,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202},{&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202},{&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202}};
        int32_t *l_1940 = (void*)0;
        uint32_t l_1946 = 1UL;
        int32_t l_1985 = 0x5C181752L;
        int64_t *l_2018[6];
        int32_t *****l_2032 = (void*)0;
        uint32_t **l_2092 = &l_1915;
        const int8_t l_2111 = 0xB1L;
        int32_t l_2161 = (-1L);
        uint32_t l_2180[9][8] = {{0xA035AF4AL,0x595B5772L,0xBF3550B6L,0x3C47154CL,0x5636DCE5L,4294967293UL,4294967295UL,1UL},{0x6B0CFA90L,0x5636DCE5L,0UL,4294967287UL,0x93B1B2E5L,4294967295UL,0x93B1B2E5L,4294967287UL},{0UL,0x26660FE5L,0UL,0x5636DCE5L,0UL,7UL,6UL,0xD8F7C5E5L},{4294967293UL,0xA035AF4AL,0UL,0x066DB2B8L,0x3CBBDD91L,4294967287UL,0UL,0xBF3550B6L},{4294967293UL,0UL,0x089F9D5EL,4294967295UL,0UL,0x91D92C89L,0xBF3550B6L,0UL},{0UL,4294967293UL,0x91D6E04AL,0x93B1B2E5L,0x93B1B2E5L,0x91D6E04AL,4294967293UL,0UL},{0x6B0CFA90L,0x3C47154CL,4294967295UL,6UL,0x5636DCE5L,0x595B5772L,0UL,0UL},{0xA035AF4AL,1UL,4294967293UL,0UL,6UL,0x595B5772L,1UL,0x089F9D5EL},{0UL,0x3C47154CL,0x3CBBDD91L,0xBF3550B6L,4294967295UL,0x91D6E04AL,4294967295UL,0x91D6E04AL}};
        int16_t **l_2187 = &g_483;
        int32_t l_2197 = 0xF846A37EL;
        int64_t l_2198 = 0L;
        int32_t l_2204 = (-1L);
        int64_t ****l_2228 = &g_942;
        int16_t ****l_2269[1];
        int32_t ****l_2279 = &g_2087;
        int32_t l_2282 = 1L;
        uint8_t *l_2284 = &g_230;
        int64_t l_2309 = (-6L);
        uint8_t ****l_2319 = (void*)0;
        uint8_t ***l_2321[3][4][5] = {{{&g_568,&g_568,&g_568,&g_568,&g_568},{&g_568,&g_568,&g_568,&g_568,&g_568},{&g_568,&g_568,&g_568,&g_568,&g_568},{&g_568,&g_568,&g_568,&g_568,&g_568}},{{&g_568,&g_568,&g_568,&g_568,&g_568},{&g_568,&g_568,&g_568,&g_568,&g_568},{&g_568,&g_568,&g_568,&g_568,&g_568},{&g_568,&g_568,&g_568,&g_568,&g_568}},{{&g_568,&g_568,&g_568,&g_568,&g_568},{&g_568,&g_568,&g_568,&g_568,&g_568},{&g_568,&g_568,&g_568,&g_568,&g_568},{&g_568,&g_568,&g_568,&g_568,&g_568}}};
        uint8_t ****l_2320 = &l_2321[0][1][4];
        int32_t *l_2322[3][1];
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_2018[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_2269[i] = &l_2139;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_2322[i][j] = &l_1990;
        }
        for (g_357 = 0; (g_357 < 8); g_357 = safe_add_func_int64_t_s_s(g_357, 1))
        {
            uint32_t l_1896 = 0x208E06B1L;
            int64_t l_1935 = 0xF7B325CDC6439D47LL;
            int32_t l_1936 = 0L;
            int32_t l_1938 = (-6L);
            int32_t *l_1941[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1941[i] = &l_1938;
            --l_1875;
            for (g_63 = 0; (g_63 <= 6); g_63 = safe_add_func_int32_t_s_s(g_63, 7))
            {
                int8_t *l_1892 = (void*)0;
                const int32_t l_1894[9][5][5] = {{{0x1B1AC513L,0x2801923FL,5L,0xB2C78CA3L,0x2801923FL},{3L,0xF40546B6L,0x3ACF9F1AL,0x3ACF9F1AL,0xF40546B6L},{0x1B1AC513L,4L,0x721AAB20L,0xB2C78CA3L,4L},{0xEBE5228DL,0xF40546B6L,(-2L),2L,0xF40546B6L},{0x7382F9ACL,0x2801923FL,0x721AAB20L,0x721AAB20L,0x2801923FL}},{{0xEBE5228DL,0x43A242A7L,0x3ACF9F1AL,2L,0x43A242A7L},{0x1B1AC513L,0x2801923FL,5L,0xB2C78CA3L,0x2801923FL},{3L,0xF40546B6L,0x3ACF9F1AL,0x3ACF9F1AL,0xF40546B6L},{0x1B1AC513L,4L,0x721AAB20L,0xB2C78CA3L,4L},{0xEBE5228DL,0xF40546B6L,(-2L),2L,0xF40546B6L}},{{0x7382F9ACL,0x2801923FL,0x721AAB20L,0x721AAB20L,0x2801923FL},{0xEBE5228DL,0x43A242A7L,0x3ACF9F1AL,2L,0x43A242A7L},{0x1B1AC513L,0x2801923FL,5L,0xB2C78CA3L,0x2801923FL},{3L,0xF40546B6L,0x3ACF9F1AL,0x3ACF9F1AL,0xF40546B6L},{0x1B1AC513L,4L,0x721AAB20L,0xB2C78CA3L,4L}},{{0xEBE5228DL,0xF40546B6L,(-2L),2L,0xF40546B6L},{0x7382F9ACL,0x2801923FL,0x721AAB20L,0x721AAB20L,0x2801923FL},{0xEBE5228DL,0x43A242A7L,0x3ACF9F1AL,2L,0x43A242A7L},{0x1B1AC513L,0x2801923FL,5L,0xB2C78CA3L,0x2801923FL},{3L,0xF40546B6L,0x3ACF9F1AL,0x3ACF9F1AL,0xF40546B6L}},{{0x1B1AC513L,4L,0x721AAB20L,0xB2C78CA3L,4L},{0xEBE5228DL,0xF40546B6L,(-2L),2L,0xF40546B6L},{0x7382F9ACL,0x2801923FL,0x721AAB20L,0x721AAB20L,0x2801923FL},{0xEBE5228DL,0x43A242A7L,0x3ACF9F1AL,2L,0x43A242A7L},{0x1B1AC513L,0x2801923FL,5L,0xB2C78CA3L,0x2801923FL}},{{3L,0xF40546B6L,0x3ACF9F1AL,0x3ACF9F1AL,0xF40546B6L},{0x1B1AC513L,4L,0x721AAB20L,0xB2C78CA3L,4L},{0xEBE5228DL,0xF40546B6L,(-2L),2L,0xF40546B6L},{0x7382F9ACL,0x2801923FL,0x721AAB20L,0x721AAB20L,0x2801923FL},{0xEBE5228DL,0x43A242A7L,0x3ACF9F1AL,2L,0x43A242A7L}},{{0x1B1AC513L,0x2801923FL,5L,0xB2C78CA3L,0x2801923FL},{3L,0xB23FBEB3L,0L,0L,0xB23FBEB3L},{0xD2EF90F0L,(-7L),0xB46ACE58L,4L,(-7L)},{2L,0xB23FBEB3L,0xF40546B6L,0x43A242A7L,0xB23FBEB3L},{8L,0x3242F29EL,0xB46ACE58L,0xB46ACE58L,0x3242F29EL}},{{2L,(-4L),0L,0x43A242A7L,(-4L)},{0xD2EF90F0L,0x3242F29EL,0x2801923FL,4L,0x3242F29EL},{0xB7587C95L,0xB23FBEB3L,0L,0L,0xB23FBEB3L},{0xD2EF90F0L,(-7L),0xB46ACE58L,4L,(-7L)},{2L,0xB23FBEB3L,0xF40546B6L,0x43A242A7L,0xB23FBEB3L}},{{8L,0x3242F29EL,0xB46ACE58L,0xB46ACE58L,0x3242F29EL},{2L,(-4L),0L,0x43A242A7L,(-4L)},{0xD2EF90F0L,0x3242F29EL,0x2801923FL,4L,0x3242F29EL},{0xB7587C95L,0xB23FBEB3L,0L,0L,0xB23FBEB3L},{0xD2EF90F0L,(-7L),0xB46ACE58L,4L,(-7L)}}};
                int32_t **l_1912 = &g_202;
                uint32_t l_1934[9] = {0xC378EA96L,0xC378EA96L,0UL,0xC378EA96L,0xC378EA96L,0UL,0xC378EA96L,0xC378EA96L,0UL};
                uint16_t *l_1959 = &g_178;
                int32_t l_1971 = (-6L);
                int64_t **l_1982 = &g_830;
                int i, j, k;
                for (g_143 = 0; (g_143 > 44); g_143 = safe_add_func_int8_t_s_s(g_143, 8))
                {
                    int8_t *l_1887 = &g_325[2];
                    int8_t *l_1889 = &g_362[1][1][0];
                    int8_t **l_1888 = &l_1889;
                    int8_t *l_1891 = (void*)0;
                    int8_t **l_1890 = &l_1891;
                    int16_t *l_1893 = &g_332;
                    int32_t l_1901 = 0x7A16D9E7L;
                    uint32_t *l_1917 = &g_411;
                    int32_t l_1966 = 0xDD311E2AL;
                    const uint32_t l_1967 = 0x4075873BL;
                    int32_t l_1970 = (-1L);
                    l_1895 = (safe_unary_minus_func_uint8_t_u((((!((((safe_mul_func_int8_t_s_s(((((((*l_1893) &= ((**g_482) = (!(g_177 & (((l_1887 = (**g_727)) != ((*l_1890) = ((p_22 , l_1875) , ((*l_1888) = (*g_728))))) || (((l_1844 &= ((p_22 < g_142) <= p_21)) , l_1892) != (*g_728))))))) , (**g_568)) , l_1844) && p_20) <= l_1894[7][0][4]), l_1895)) , (void*)0) != (void*)0) | 0x7EL)) != l_1896) <= 0xBEC7E01C27B2C511LL)));
                    for (g_50 = 0; (g_50 >= 21); g_50 = safe_add_func_int64_t_s_s(g_50, 1))
                    {
                        int32_t ***l_1910[1];
                        uint32_t **l_1916[8];
                        int16_t *l_1937[7] = {&g_1576,&g_1576,&g_1576,&g_1576,&g_1576,&g_1576,&g_1576};
                        uint16_t **l_1961 = &l_1959;
                        uint8_t ** const * const l_1968 = &g_568;
                        uint16_t l_1969 = 0UL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1910[i] = &g_201;
                        for (i = 0; i < 8; i++)
                            l_1916[i] = (void*)0;
                        g_1939 ^= ((safe_rshift_func_uint8_t_u_s(((l_1901 = 0x0C61B27DL) <= 0x438D6DE7L), (~(safe_lshift_func_uint8_t_u_s(((safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s((((l_1938 |= (((l_1895 = (((l_1911 = l_1909[4][5]) != l_1912) ^ p_22)) >= (safe_lshift_func_uint16_t_u_s(p_20, 9))) , ((l_1917 = l_1915) == ((((l_1936 = (safe_lshift_func_int16_t_s_s((((g_218 == ((*l_1893) = (((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((safe_mul_func_int16_t_s_s(((**g_482) = l_1934[5]), p_22)), p_19)) , l_1896), 1)) >= l_1935), p_19)), 13)), 1L)), (-10L))) >= 0L) | 0x0743L))) , 0x9BD86969L) | l_1935), 3))) | l_1896) ^ p_22) , l_1915)))) | 0x8FA8L) | 0UL), g_991)), p_22)) < g_803), l_1935))))) || p_21);
                        (*l_1912) = &l_1938;
                        l_1941[0] = l_1940;
                        l_1971 |= (((**l_1912) = p_19) <= ((safe_div_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((l_1946 , ((safe_sub_func_int32_t_s_s(l_1901, (l_1970 = (safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((p_19 || ((((safe_sub_func_uint64_t_u_u((((safe_mod_func_int8_t_s_s(p_20, (safe_lshift_func_uint8_t_u_u(((((*l_1961) = (g_1960 = l_1959)) != &g_119) , (((l_1966 = (((p_22 ^ (safe_sub_func_int16_t_s_s((((**l_1888) = (safe_mul_func_int16_t_s_s((**g_482), (*g_1960)))) , p_21), (**g_482)))) == p_22) , l_1901)) || l_1967) , p_21)), p_19)))) , l_1968) == (void*)0), 1UL)) == l_1969) & 9UL) >= (*g_483))), 0x2CCDL)), 15))))) >= l_1844)), g_1845)) , p_19), (*g_483))) & p_22));
                    }
                    l_1966 = (l_1901 = (((((safe_sub_func_uint64_t_u_u(g_91[3][2], (-1L))) >= (safe_mod_func_uint16_t_u_u(((p_20 |= ((((safe_mul_func_int8_t_s_s((((safe_add_func_uint64_t_u_u(p_21, ((safe_mul_func_uint16_t_u_u(((p_19 ^ p_19) && p_19), ((((p_19 , ((*g_942) = l_1982)) != (void*)0) , p_21) != (*g_516)))) <= 0x23L))) == l_1895) , 3L), (*g_729))) & p_21) == 0xBB7DD796A8D3EC15LL) & p_19)) || 1L), p_21))) && p_19) || p_21) < (-4L)));
                }
            }
        }
        for (g_803 = 1; (g_803 <= 4); g_803 += 1)
        {
            int16_t l_1983 = 1L;
            int32_t l_1984 = 0xB3E18B12L;
            int32_t l_1987[4];
            uint32_t *l_2036 = &g_411;
            int32_t l_2093 = 0xA0A91C06L;
            int16_t * const *l_2119 = (void*)0;
            int16_t * const **l_2118[1];
            int16_t * const ***l_2117 = &l_2118[0];
            int32_t *l_2178 = &l_1844;
            int64_t *l_2249 = (void*)0;
            uint8_t l_2255 = 248UL;
            int i;
            for (i = 0; i < 4; i++)
                l_1987[i] = 0x173D97A0L;
            for (i = 0; i < 1; i++)
                l_2118[i] = &l_2119;
            for (p_20 = 0; (p_20 <= 4); p_20 += 1)
            {
                int32_t l_1986 = 0x95C1EDFAL;
                int16_t l_1988 = 0x899AL;
                int32_t l_1989 = 8L;
                int32_t l_1991 = 7L;
                int32_t l_1992 = 0x6C40FA84L;
                int32_t l_1993 = 0x1747B904L;
                int32_t l_1994 = (-1L);
                int32_t l_2001[7][7][3] = {{{0xE7C7FFBFL,0x7390B74CL,(-1L)},{0x876B24DAL,0x2A2F85F7L,(-1L)},{0xE7C7FFBFL,0xAFAFBF0FL,0x1DE48043L},{0x7B7BD24AL,0x6AD16295L,0x3CF07D35L},{1L,7L,2L},{(-6L),(-1L),0xAFAFBF0FL},{0x2A2F85F7L,(-1L),0xF4FBD9CBL}},{{7L,7L,0xE7C7FFBFL},{0xB7906D31L,0x6AD16295L,0x2A2F85F7L},{0x7390B74CL,0xAFAFBF0FL,0xE2F90BE8L},{1L,0x2A2F85F7L,0x2397BF40L},{(-3L),0x7390B74CL,0xE2F90BE8L},{(-1L),(-1L),0x2A2F85F7L},{2L,5L,0xE7C7FFBFL}},{{0xB6D71F76L,0x64E95E79L,0xF4FBD9CBL},{0xE2F90BE8L,0xF4FBD9CBL,0xAFAFBF0FL},{0xE2F90BE8L,2L,2L},{0xB6D71F76L,0x2397BF40L,0x3CF07D35L},{2L,(-6L),0x1DE48043L},{(-1L),(-3L),(-1L)},{(-3L),0x3CF07D35L,(-1L)}},{{1L,(-3L),0x487A2FC0L},{0x7390B74CL,(-6L),0xB7906D31L},{0xB7906D31L,0x2397BF40L,(-6L)},{7L,2L,0L},{0x2A2F85F7L,0xF4FBD9CBL,0L},{(-6L),0x64E95E79L,(-6L)},{1L,5L,0xB7906D31L}},{{0x7B7BD24AL,(-1L),0x487A2FC0L},{0xE7C7FFBFL,0x7390B74CL,(-1L)},{0x876B24DAL,0x2A2F85F7L,(-1L)},{0xE7C7FFBFL,0xAFAFBF0FL,0x1DE48043L},{0x7B7BD24AL,0x6AD16295L,0x3CF07D35L},{1L,7L,2L},{(-6L),(-1L),0xAFAFBF0FL}},{{0x2A2F85F7L,0x876B24DAL,5L},{(-8L),(-8L),0x2A2F85F7L},{(-1L),0x7390B74CL,0xB7906D31L},{0xE7C7FFBFL,0x3CF07D35L,0xAFAFBF0FL},{(-1L),0xB7906D31L,(-6L)},{0xF4FBD9CBL,0xE7C7FFBFL,0xAFAFBF0FL},{0x876B24DAL,(-3L),0xB7906D31L}},{{1L,0x1DE48043L,0x2A2F85F7L},{0x64E95E79L,0L,5L},{0xAFAFBF0FL,5L,0x3CF07D35L},{0xAFAFBF0FL,1L,1L},{0x64E95E79L,(-6L),7L},{1L,0x6AD16295L,0xE2F90BE8L},{0x876B24DAL,0xF4FBD9CBL,0x3881DA28L}}};
                int8_t l_2095 = (-1L);
                int32_t l_2112[10] = {5L,5L,5L,5L,5L,5L,5L,5L,5L,5L};
                int8_t * const *l_2141 = &g_729;
                int i, j, k;
                --g_1996;
                if ((((g_228[g_803] = (safe_add_func_uint16_t_u_u((p_21 ^= (*g_1960)), (*g_483)))) || l_2001[1][1][0]) != 1UL))
                {
                    const int32_t l_2014 = 0xDC8D8B2DL;
                    int64_t *l_2016 = (void*)0;
                    uint64_t *l_2037 = &g_1996;
                    int32_t l_2038 = 0xDC7B5A0AL;
                    int32_t l_2049 = 0xF6F987B7L;
                    int32_t l_2050[8] = {9L,9L,9L,9L,9L,9L,9L,9L};
                    int32_t * const *l_2075 = &g_593;
                    int32_t * const **l_2074[10] = {&l_2075,&l_2075,&l_2075,&l_2075,&l_2075,&l_2075,&l_2075,&l_2075,&l_2075,&l_2075};
                    int8_t *l_2076 = &g_234[0];
                    uint8_t l_2077 = 255UL;
                    uint32_t l_2104 = 4294967294UL;
                    int i;
                    if (((p_19 | ((((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((*l_2037) = (safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u((*g_1323), (*g_516))), (safe_lshift_func_int8_t_s_s((l_1987[1] = (safe_lshift_func_int8_t_s_u(((**g_728) = (l_2014 ^ (~(((((l_2016 != (l_2018[0] = g_2017)) && (***g_727)) && ((safe_sub_func_int16_t_s_s(((*g_483) = ((!((safe_mod_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(((*g_1960) == (((safe_sub_func_uint32_t_u_u((((safe_div_func_int32_t_s_s((-4L), p_21)) , (void*)0) == l_2032), g_2033[8][5])) , g_2034) == (void*)0)), p_20)) || 1UL), p_21)), p_19)) >= 0xF2L)) > p_21)), 5UL)) == p_19)) , &g_411) == l_2036)))), 6))), 1))))), 0x2292F348C30C971FLL)), p_22)) & 65535UL) >= 0x535FL) && p_22)) <= 255UL))
                    {
                        uint32_t l_2041 = 0x4CD0DFE9L;
                        uint64_t *l_2042 = &g_115[2];
                        int32_t l_2045 = 0x632DF6F8L;
                        int32_t l_2046 = 0xA62FD476L;
                        int32_t l_2047 = 0L;
                        int32_t l_2048[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_2048[i] = 1L;
                        l_2046 = (l_2045 = (((l_2038 ^= p_20) || ((safe_sub_func_uint64_t_u_u(((*l_2037) = (p_22 , l_2041)), ((*l_2042) = 0x4BF9035A4A02A6E6LL))) >= p_20)) > ((*g_1960)--)));
                        l_2057++;
                        l_1994 ^= (safe_lshift_func_int8_t_s_s(p_22, 3));
                    }
                    else
                    {
                        return (*g_1960);
                    }
                    if (((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(0x45L, ((***g_727) = (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((p_20 || (p_21 >= ((((((safe_unary_minus_func_uint64_t_u(((+(safe_div_func_int8_t_s_s(((((((((**g_728) <= ((((*l_2037) = ((**g_568) != (p_19 > (((*l_2076) &= (((void*)0 == l_2074[3]) , ((*g_1960) && (**g_482)))) >= p_21)))) , p_20) && 0xA054L)) > l_1984) ^ 0x3008L) == l_2050[7]) | (*g_1323)) <= l_2077) == 0x82E872FFC6E830FBLL), p_21))) , p_21))) == 1L) == p_21) == p_20) , l_2049) || l_1987[1]))), (*g_1960))), p_21))))), l_1984)) < 0L))
                    {
                        int32_t l_2078[8][4] = {{0L,0L,0xE626CD46L,0xD0431F1BL},{(-1L),0xE626CD46L,0xE626CD46L,(-1L)},{0L,0xD4726D45L,(-4L),0xD0DBF529L},{0xA4410C8FL,0x2EBD6456L,0xD0DBF529L,3L},{0xD0DBF529L,3L,0x8376CD9EL,3L},{0xE626CD46L,0x2EBD6456L,0L,0xD0DBF529L},{0xC82D960EL,0xD4726D45L,3L,(-1L)},{0L,0xE626CD46L,0xD0431F1BL,0xD0431F1BL}};
                        int i, j;
                        if (l_2078[2][2])
                            break;
                        if (l_2078[2][2])
                            continue;
                    }
                    else
                    {
                        int32_t ***l_2085 = (void*)0;
                        int32_t ****l_2084[7] = {&l_2085,&l_2085,&l_2085,&l_2085,&l_2085,&l_2085,&l_2085};
                        int32_t *****l_2088 = &g_2086[0][4][0];
                        int32_t l_2094 = 0x8BA2EC07L;
                        int i;
                        l_2093 = ((safe_unary_minus_func_int8_t_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((p_20 , l_2084[4]) == ((*l_2088) = g_2086[2][5][4])), ((((safe_add_func_uint32_t_u_u((*g_1323), (0L & (!((void*)0 == l_2092))))) , (*g_727)) != (void*)0) == (*g_483)))), p_20)))) == (**g_568));
                        return l_2094;
                    }
                    (*g_201) = ((l_2095 < (((*l_2110) = ((&l_1915 != (void*)0) < ((safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u(p_21, (g_228[g_803] = (safe_sub_func_int8_t_s_s(((l_2104 | (safe_rshift_func_int8_t_s_u((((safe_sub_func_int16_t_s_s(l_2109[0], l_2014)) & (((p_19 && (((*g_568) = &p_20) != l_2110)) , p_19) > 0x48A39E15165EDFDCLL)) <= l_2050[7]), 2))) || l_2111), l_2112[4]))))), 0x1634L)), (**g_728))) != 0x5998501B486EF4F8LL))) , (*g_483))) , &l_2050[7]);
                }
                else
                {
                    uint32_t *l_2120[1][8][8] = {{{&g_143,&l_1946,&g_357,&g_311,&g_1577[1],(void*)0,(void*)0,&g_1577[1]},{&g_143,(void*)0,(void*)0,&g_143,(void*)0,&l_1946,&g_1577[1],&l_1946},{&g_1577[0],&g_1577[1],&g_143,&l_1946,&g_1577[0],(void*)0,&g_143,&g_778},{(void*)0,&g_1577[1],(void*)0,&g_1577[1],&l_1946,&l_1946,&g_143,&g_357},{&g_143,(void*)0,&g_1577[0],(void*)0,&g_1577[1],(void*)0,&g_1577[0],(void*)0},{&g_143,&l_1946,(void*)0,&g_1577[1],&g_311,&g_143,&g_1577[0],&g_143},{(void*)0,&l_1946,&l_1946,&g_143,&g_143,&g_1577[1],&g_1577[0],(void*)0},{&l_1946,&g_143,(void*)0,&g_143,&l_1946,&g_143,&g_1577[0],&g_1577[0]}}};
                    int32_t l_2121 = 0L;
                    int32_t l_2122 = 0xDEBB99ADL;
                    uint64_t *l_2140[5][7][3] = {{{&g_1939,&g_1996,&g_115[7]},{&g_1939,&g_1939,&g_115[7]},{&g_668,&g_1939,&g_1939},{&g_1939,&g_1939,&g_1996},{&g_1939,&g_115[3],&g_1996},{&g_1939,&g_1845,&g_1996},{&g_1845,&g_1845,&g_115[3]}},{{&g_1996,&g_1845,&g_1996},{&g_1996,&g_115[3],&g_1845},{&g_668,(void*)0,&g_1939},{&g_115[3],&g_1996,&g_1845},{&g_668,&g_115[1],&g_1996},{&g_1996,(void*)0,&g_115[3]},{&g_1996,&g_115[3],&g_1939}},{{&g_668,&g_1996,&g_1939},{&g_115[3],&g_668,(void*)0},{&g_668,&g_1996,&g_1939},{&g_1996,&g_115[3],&g_115[4]},{&g_1996,(void*)0,&g_115[4]},{&g_1845,&g_115[1],&g_1939},{(void*)0,&g_1996,(void*)0}},{{(void*)0,(void*)0,&g_1939},{(void*)0,&g_115[3],&g_1939},{&g_1845,&g_1845,&g_115[3]},{&g_1996,&g_1845,&g_1996},{&g_1996,&g_115[3],&g_1845},{&g_668,(void*)0,&g_1939},{&g_115[3],&g_1996,&g_1845}},{{&g_668,&g_115[1],&g_1996},{&g_1996,(void*)0,&g_115[3]},{&g_1996,&g_115[3],&g_1939},{&g_668,&g_1996,&g_1939},{&g_115[3],&g_668,(void*)0},{&g_668,&g_1996,&g_1939},{&g_1996,&g_115[3],&g_115[4]}}};
                    uint32_t l_2152 = 18446744073709551608UL;
                    uint64_t l_2160[10][4][6] = {{{0xEADD33A514D5CB0DLL,18446744073709551611UL,18446744073709551615UL,18446744073709551611UL,0xEADD33A514D5CB0DLL,18446744073709551615UL},{18446744073709551611UL,0xEADD33A514D5CB0DLL,18446744073709551615UL,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL},{18446744073709551610UL,18446744073709551610UL,18446744073709551615UL,0xEADD33A514D5CB0DLL,18446744073709551611UL,18446744073709551615UL},{0xEADD33A514D5CB0DLL,18446744073709551611UL,18446744073709551615UL,18446744073709551611UL,0xEADD33A514D5CB0DLL,18446744073709551615UL}},{{18446744073709551611UL,0xEADD33A514D5CB0DLL,18446744073709551615UL,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL},{18446744073709551610UL,18446744073709551610UL,18446744073709551615UL,0xEADD33A514D5CB0DLL,18446744073709551611UL,18446744073709551615UL},{0xEADD33A514D5CB0DLL,18446744073709551611UL,18446744073709551615UL,18446744073709551611UL,0xEADD33A514D5CB0DLL,18446744073709551615UL},{18446744073709551611UL,0xEADD33A514D5CB0DLL,18446744073709551615UL,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL}},{{18446744073709551610UL,18446744073709551610UL,18446744073709551615UL,0xEADD33A514D5CB0DLL,18446744073709551611UL,18446744073709551615UL},{0xEADD33A514D5CB0DLL,18446744073709551611UL,18446744073709551615UL,18446744073709551611UL,0xEADD33A514D5CB0DLL,18446744073709551615UL},{18446744073709551611UL,0xEADD33A514D5CB0DLL,18446744073709551615UL,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL},{18446744073709551610UL,18446744073709551610UL,18446744073709551615UL,0xEADD33A514D5CB0DLL,18446744073709551611UL,18446744073709551615UL}},{{0xEADD33A514D5CB0DLL,18446744073709551611UL,18446744073709551615UL,18446744073709551611UL,0xEADD33A514D5CB0DLL,18446744073709551615UL},{18446744073709551611UL,0xEADD33A514D5CB0DLL,18446744073709551615UL,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL},{18446744073709551610UL,18446744073709551610UL,18446744073709551615UL,0xEADD33A514D5CB0DLL,18446744073709551611UL,18446744073709551615UL},{0xEADD33A514D5CB0DLL,18446744073709551611UL,18446744073709551615UL,18446744073709551611UL,0xEADD33A514D5CB0DLL,18446744073709551615UL}},{{18446744073709551611UL,0xEADD33A514D5CB0DLL,18446744073709551615UL,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL},{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,0UL,18446744073709551615UL,18446744073709551610UL},{0UL,18446744073709551615UL,18446744073709551610UL,18446744073709551615UL,0UL,18446744073709551610UL},{18446744073709551615UL,0UL,18446744073709551610UL,0x4137D9E889DE6B4ALL,0x4137D9E889DE6B4ALL,18446744073709551610UL}},{{0x4137D9E889DE6B4ALL,0x4137D9E889DE6B4ALL,18446744073709551610UL,0UL,18446744073709551615UL,18446744073709551610UL},{0UL,18446744073709551615UL,18446744073709551610UL,18446744073709551615UL,0UL,18446744073709551610UL},{18446744073709551615UL,0UL,18446744073709551610UL,0x4137D9E889DE6B4ALL,0x4137D9E889DE6B4ALL,18446744073709551610UL},{0x4137D9E889DE6B4ALL,0x4137D9E889DE6B4ALL,18446744073709551610UL,0UL,18446744073709551615UL,18446744073709551610UL}},{{0UL,18446744073709551615UL,18446744073709551610UL,18446744073709551615UL,0UL,18446744073709551610UL},{18446744073709551615UL,0UL,18446744073709551610UL,0x4137D9E889DE6B4ALL,0x4137D9E889DE6B4ALL,18446744073709551610UL},{0x4137D9E889DE6B4ALL,0x4137D9E889DE6B4ALL,18446744073709551610UL,0UL,18446744073709551615UL,18446744073709551610UL},{0UL,18446744073709551615UL,18446744073709551610UL,18446744073709551615UL,0UL,18446744073709551610UL}},{{18446744073709551615UL,0UL,18446744073709551610UL,0x4137D9E889DE6B4ALL,0x4137D9E889DE6B4ALL,18446744073709551610UL},{0x4137D9E889DE6B4ALL,0x4137D9E889DE6B4ALL,18446744073709551610UL,0UL,18446744073709551615UL,18446744073709551610UL},{0UL,18446744073709551615UL,18446744073709551610UL,18446744073709551615UL,0UL,18446744073709551610UL},{18446744073709551615UL,0UL,18446744073709551610UL,0x4137D9E889DE6B4ALL,0x4137D9E889DE6B4ALL,18446744073709551610UL}},{{0x4137D9E889DE6B4ALL,0x4137D9E889DE6B4ALL,18446744073709551610UL,0UL,18446744073709551615UL,18446744073709551610UL},{0UL,18446744073709551615UL,18446744073709551610UL,18446744073709551615UL,0UL,18446744073709551610UL},{18446744073709551615UL,0UL,18446744073709551610UL,0x4137D9E889DE6B4ALL,0x4137D9E889DE6B4ALL,18446744073709551610UL},{0x4137D9E889DE6B4ALL,0x4137D9E889DE6B4ALL,18446744073709551610UL,0UL,18446744073709551615UL,18446744073709551610UL}},{{0UL,18446744073709551615UL,18446744073709551610UL,18446744073709551615UL,0UL,18446744073709551610UL},{18446744073709551615UL,0UL,18446744073709551610UL,0x4137D9E889DE6B4ALL,0x4137D9E889DE6B4ALL,18446744073709551610UL},{0x4137D9E889DE6B4ALL,0x4137D9E889DE6B4ALL,18446744073709551610UL,0UL,18446744073709551615UL,18446744073709551610UL},{0UL,18446744073709551615UL,18446744073709551610UL,18446744073709551615UL,0UL,18446744073709551610UL}}};
                    int32_t *l_2179[8][2] = {{&l_1992,&l_1992},{&l_1895,&l_1992},{&l_1992,&l_1895},{&l_1992,&l_1992},{&l_1895,&l_1992},{&l_1992,&l_1895},{&l_1992,&l_1992},{&l_1895,&l_1992}};
                    int i, j, k;
                    if ((+(((*g_592) != (((((l_2093 ^= (((g_115[3] = ((((p_19 = (((+(l_2115 , l_2116)) , (((l_2117 != ((g_311++) , g_1231)) , (void*)0) == (**g_727))) == (safe_mul_func_uint8_t_u_u(((l_1844 = (safe_mod_func_int16_t_s_s(((*g_483) = (safe_rshift_func_int8_t_s_s(0x76L, (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((((l_1991 = (0x7396L < p_22)) <= g_177) , (void*)0) == l_2139), l_2122)), l_1987[0])), p_22)), p_22))))), p_20))) , (**g_568)), p_19)))) | p_21) & 1UL) <= 0x83E7BEA6L)) == p_22) | (-1L))) & p_21) , (*g_727)) == l_2141) , (void*)0)) == l_1987[1])))
                    {
                        uint32_t l_2142 = 18446744073709551615UL;
                        int32_t l_2145 = 0xA1D1A9E1L;
                        if (p_20)
                            break;
                        --l_2142;
                        l_2145 &= p_22;
                        l_2054 |= ((p_21 , ((safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((0x74B77968L || (safe_mul_func_uint16_t_u_u(((((((((((p_22 , (l_2152 & (((safe_div_func_uint32_t_u_u(((((l_2145 != (~(((l_1990 |= (g_668 < 0UL)) & (((***g_727) = (*g_729)) , (safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(l_2145, 1L)), (**g_482))))) <= 0x4CCF68E9A9BBDB0CLL))) == p_19) || (**g_482)) , l_2145), 0xA0EA539AL)) ^ l_2160[9][0][1]) >= 0L))) >= 0x85548554L) | p_19) || p_20) == l_2161) , g_325[3]) && p_20) || (*g_1960)) , l_2160[9][0][1]) , 0x222DL), l_1987[1]))) & (-1L)), 0x3315DF4CL)), 0x07310DD9L)) , g_2162)) , 0x495E4EE8L);
                    }
                    else
                    {
                        uint8_t l_2174 = 0x4AL;
                        l_2093 = (safe_lshift_func_int8_t_s_s((((safe_sub_func_uint64_t_u_u(((*g_1323) , (0x8931L & 1UL)), (p_19 == p_20))) , 65535UL) ^ (((((safe_lshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((***g_2034) == (p_21 > ((((safe_unary_minus_func_int16_t_s(l_2174)) != (**g_568)) == 0xAC29F971L) & p_19))), (***g_2034))), l_2121)), (*g_1960))) , p_22) , l_2175) | 0UL) == p_22)), 6));
                    }
                    for (g_359 = (-19); (g_359 >= 2); g_359 = safe_add_func_uint64_t_u_u(g_359, 8))
                    {
                        uint32_t **l_2188 = &l_2120[0][4][6];
                        int32_t l_2196[9][8][2] = {{{0xA135C8ADL,(-1L)},{(-1L),(-1L)},{(-6L),0xA135C8ADL},{0x202E9D93L,9L},{0L,9L},{0x202E9D93L,0xA135C8ADL},{(-6L),(-1L)},{(-1L),(-1L)}},{{0xA135C8ADL,0L},{2L,1L},{0xABEA07BAL,(-1L)},{0x0D262292L,0xABEA07BAL},{1L,0x202E9D93L},{1L,0xABEA07BAL},{0x0D262292L,(-1L)},{0xABEA07BAL,1L}},{{2L,0L},{0xA135C8ADL,(-1L)},{(-1L),(-1L)},{(-6L),(-1L)},{(-1L),0x202E9D93L},{(-6L),0x202E9D93L},{(-1L),(-1L)},{2L,0xEBEDDFA2L}},{{1L,1L},{(-1L),(-6L)},{6L,9L},{0xD7D097A3L,(-1L)},{0xABEA07BAL,0xD7D097A3L},{0L,(-1L)},{0L,0xD7D097A3L},{0xABEA07BAL,(-1L)}},{{0xD7D097A3L,9L},{6L,(-6L)},{(-1L),1L},{1L,0xEBEDDFA2L},{2L,(-1L)},{(-1L),0x202E9D93L},{(-6L),0x202E9D93L},{(-1L),(-1L)}},{{2L,0xEBEDDFA2L},{1L,1L},{(-1L),(-6L)},{6L,9L},{0xD7D097A3L,(-1L)},{0xABEA07BAL,0xD7D097A3L},{0L,(-1L)},{0L,0xD7D097A3L}},{{0xABEA07BAL,(-1L)},{0xD7D097A3L,9L},{6L,(-6L)},{(-1L),1L},{1L,0xEBEDDFA2L},{2L,(-1L)},{(-1L),0x202E9D93L},{(-6L),0x202E9D93L}},{{(-1L),(-1L)},{2L,0xEBEDDFA2L},{1L,1L},{(-1L),(-6L)},{6L,9L},{0xD7D097A3L,(-1L)},{0xABEA07BAL,0xD7D097A3L},{0L,(-1L)}},{{0L,0xD7D097A3L},{0xABEA07BAL,(-1L)},{0xD7D097A3L,9L},{6L,(-6L)},{(-1L),1L},{1L,0xEBEDDFA2L},{2L,(-1L)},{(-1L),0x202E9D93L}}};
                        int i, j, k;
                        l_2178 = ((*g_201) = &l_1987[1]);
                        (*g_201) = &l_2122;
                        l_2179[0][0] = &l_1984;
                        l_2056 = (l_2180[8][0] & ((((*g_202) = ((((*g_729) & ((safe_sub_func_int32_t_s_s(6L, (((safe_unary_minus_func_uint8_t_u(((safe_add_func_int8_t_s_s(((+p_22) > (((l_2187 != ((**l_2117) = &g_483)) > ((g_1996 = ((void*)0 != l_2188)) <= (safe_mul_func_uint16_t_u_u((((safe_div_func_int64_t_s_s((((((*l_2178) ^= (((safe_div_func_int8_t_s_s((255UL != g_2195), 0x6EL)) , (**g_482)) && l_2196[7][2][0])) < (-1L)) || p_20) == (-1L)), l_2196[7][2][0])) , p_19) <= (*g_516)), (*g_1960))))) >= (*g_483))), (*g_729))) < 0UL))) | 18446744073709551606UL) || g_286))) , p_21)) > 0x311B4949L) && 4L)) , 18446744073709551615UL) & g_91[1][0]));
                    }
                }
                (*l_2178) = p_19;
                if (((l_2197 <= (((0x0BL > 0xCFL) >= p_20) & p_21)) > 0xACL))
                {
                    uint8_t l_2199 = 0xCBL;
                    --l_2199;
                }
                else
                {
                    return (*g_1960);
                }
            }
            if ((((**l_2187) |= (((p_19 <= (((p_21 , p_19) != ((safe_mul_func_int8_t_s_s(l_2204, ((safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((*l_2036) = ((safe_add_func_uint8_t_u_u((**g_568), p_19)) >= (0x823B27A8L < (0xB425C948DC493BD4LL && ((((*l_2178) = p_22) >= 0x0BBA7089L) < p_21))))), p_22)), (**g_728))) >= p_19))) && p_20)) , 0x647C2B33L)) == g_2211) , 0L)) > (*g_1960)))
            {
                uint8_t l_2216 = 255UL;
                int64_t ****l_2220 = &g_943[4];
                uint64_t *l_2227 = (void*)0;
                int64_t *****l_2230 = (void*)0;
                int64_t *****l_2231 = &l_2228;
                int32_t l_2232 = 0x9C2D621EL;
                l_2093 = ((safe_div_func_int64_t_s_s((&l_2187 == (*l_2117)), (((*l_2110) = (**g_2035)) | (safe_mul_func_uint16_t_u_u((((*l_2178) = (*l_2178)) < (l_2216 = 0xC672BD30L)), ((safe_sub_func_uint32_t_u_u(((((!p_20) | 1UL) , (l_2220 == ((*l_2231) = (g_2229 = ((safe_div_func_uint64_t_u_u((safe_div_func_int16_t_s_s((((safe_mod_func_uint64_t_u_u((g_1996 = 0xEA66E58D020BD2ABLL), 0x677B568BE135E1F6LL)) & p_19) == 4294967295UL), 65535UL)), p_19)) , l_2228))))) == (*g_1960)), p_19)) , 0L)))))) | l_2232);
            }
            else
            {
                uint32_t l_2242 = 18446744073709551613UL;
                int16_t ***l_2264 = &g_482;
                int64_t *l_2280[8];
                uint16_t l_2310 = 0x7059L;
                int32_t l_2315 = (-5L);
                int i;
                for (i = 0; i < 8; i++)
                    l_2280[i] = (void*)0;
                if ((+(p_21 > 0x5CD1L)))
                {
                    int8_t l_2238 = 0L;
                    int32_t l_2239 = 0x035A60C4L;
                    int32_t l_2240 = 0x165D3E8EL;
                    int32_t l_2241 = 0x259C42FAL;
                    (*l_2178) |= (((void*)0 != l_2234) < (safe_unary_minus_func_int64_t_s(p_20)));
                    for (l_2054 = 24; (l_2054 == 29); ++l_2054)
                    {
                        int32_t l_2256 = 0xF732BC12L;
                        l_2242++;
                        l_2255 &= (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s((l_2249 == (void*)0), (*g_483))) < (0x6EL && p_22)), (l_2242 , (safe_div_func_int8_t_s_s((~p_22), ((*g_729) ^= ((*l_2178) > (safe_rshift_func_uint16_t_u_u(l_2239, p_22)))))))));
                        if (l_2256)
                            continue;
                    }
                }
                else
                {
                    uint32_t l_2257 = 0x6C987F9BL;
                    uint32_t *l_2261 = &g_357;
                    uint32_t **l_2260[1];
                    int16_t ***l_2265 = (void*)0;
                    uint8_t l_2272[4] = {6UL,6UL,6UL,6UL};
                    int8_t *l_2286[1];
                    int32_t l_2289[3][4][8] = {{{0L,0x3A63A677L,0x84CD17FFL,8L,0x84CD17FFL,0x3A63A677L,0L,1L},{0x3A63A677L,0x24C43DCCL,2L,0x74F2DDDEL,0x68BD6B81L,8L,8L,0x68BD6B81L},{0x53FEA944L,0L,0L,0x53FEA944L,0x68BD6B81L,(-2L),1L,8L},{0x3A63A677L,0x6403F479L,0x5597B072L,0x68BD6B81L,0x84CD17FFL,0x68BD6B81L,0x5597B072L,0x6403F479L}},{{0L,0x6403F479L,8L,0x5597B072L,2L,(-2L),0x74F2DDDEL,0x74F2DDDEL},{8L,0L,0x24C43DCCL,0x24C43DCCL,0L,8L,0x74F2DDDEL,0x84CD17FFL},{1L,0x24C43DCCL,8L,(-2L),0x5597B072L,0x3A63A677L,0x5597B072L,(-2L)},{0x5597B072L,0x3A63A677L,0x5597B072L,(-2L),8L,0x24C43DCCL,1L,0x84CD17FFL}},{{0x74F2DDDEL,8L,0L,0x24C43DCCL,0x24C43DCCL,0L,8L,0x74F2DDDEL},{0x74F2DDDEL,(-2L),2L,0x5597B072L,8L,0x6403F479L,0L,0x6403F479L},{0x5597B072L,0x3A63A677L,1L,0x3A63A677L,0x24C43DCCL,2L,0x74F2DDDEL,0x68BD6B81L},{0x5597B072L,0x6403F479L,0x3A63A677L,8L,0x53FEA944L,0x53FEA944L,8L,0x3A63A677L}}};
                    int32_t l_2312[2][10] = {{8L,8L,8L,8L,8L,8L,8L,8L,8L,8L},{8L,8L,8L,8L,8L,8L,8L,8L,8L,8L}};
                    uint8_t l_2316 = 255UL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_2260[i] = &l_2261;
                    for (i = 0; i < 1; i++)
                        l_2286[i] = &g_803;
                    if (((l_2257 == (safe_sub_func_int32_t_s_s(((void*)0 == l_2260[0]), (g_1939 , (safe_rshift_func_int16_t_s_s((((l_2242 >= 0L) , l_2264) == l_2265), 9)))))) , (safe_sub_func_int64_t_s_s(l_2242, 18446744073709551609UL))))
                    {
                        uint64_t *l_2268 = &g_668;
                        (*l_2178) ^= ((((*l_2268) = ((void*)0 == (*g_482))) || (l_2269[0] != (void*)0)) && 0xBFL);
                        if (l_2242)
                            break;
                    }
                    else
                    {
                        int32_t ****l_2276 = &g_2087;
                        int32_t *****l_2277 = (void*)0;
                        int32_t *****l_2278 = &g_2086[0][4][4];
                        uint8_t *l_2285 = &l_2255;
                        uint64_t *l_2287[7][4] = {{&g_115[5],&g_668,&g_668,&g_115[5]},{&g_668,&g_115[5],&g_668,&g_668},{&g_115[5],&g_115[5],(void*)0,&g_115[5]},{&g_115[5],&g_668,&g_668,&g_115[5]},{&g_668,&g_115[5],&g_668,&g_668},{&g_115[5],&g_115[5],(void*)0,&g_115[5]},{&g_115[5],&g_668,&g_668,&g_115[5]}};
                        int32_t l_2288[6][1] = {{0L},{0x65FEA070L},{0x65FEA070L},{0L},{0x65FEA070L},{0x65FEA070L}};
                        int i, j;
                        l_2289[1][2][6] = ((safe_add_func_int8_t_s_s((0x5809L && (l_2272[1] >= ((((!(safe_div_func_uint16_t_u_u(((((*l_2278) = l_2276) == l_2279) != ((p_19 ^ ((*l_2178) = ((**g_727) == (((l_2284 = (((*l_2092) != ((l_2280[4] == ((((((*g_1323) ^ g_2281) >= l_2282) >= p_21) && l_2272[1]) , l_2283)) , l_2261)) , (void*)0)) != l_2285) , l_2286[0])))) , p_22)), l_2242))) > p_22) , (void*)0) != (void*)0))), l_2288[4][0])) >= (-1L));
                    }
                    l_2312[0][2] &= (safe_mul_func_uint8_t_u_u(((((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_2242, (((safe_div_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((((((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(((0x07D3A089L ^ ((0xF2E2L || l_2242) , p_19)) > ((void*)0 != &p_20)), 11)), 15)) != (((safe_mul_func_int8_t_s_s((((safe_mul_func_int32_t_s_s(l_2242, (((*l_2178) = ((g_2308 = &g_357) == (void*)0)) == l_2289[1][2][6]))) , l_2309) ^ (*g_1960)), 1L)) >= p_21) <= l_2257)) >= (**g_482)) , 0L) , p_22), p_22)) || l_2310), 65532UL)) ^ p_21) , 0xA4L))), l_2311)) , 0x4FA0L) == l_2289[1][2][6]) | p_20), (**g_2035)));
                    for (g_177 = 0; (g_177 < 15); g_177 = safe_add_func_int64_t_s_s(g_177, 3))
                    {
                        l_2316--;
                    }
                }
                (*g_201) = &l_2315;
            }
        }
        (*l_2320) = &g_568;
        (*g_201) = l_2322[2][0];
    }
lbl_2601:
    for (g_363 = (-11); (g_363 <= 48); g_363 = safe_add_func_int8_t_s_s(g_363, 1))
    {
        int64_t l_2329 = 0L;
        int32_t *****l_2334 = &g_2086[2][5][4];
        int32_t *l_2341 = &l_1844;
        const uint8_t l_2350 = 0x07L;
        const uint32_t *l_2361 = &g_778;
        const uint32_t **l_2360[7][3] = {{&l_2361,&l_2361,&l_2361},{&l_2361,&l_2361,&l_2361},{&l_2361,&l_2361,&l_2361},{&l_2361,&l_2361,&l_2361},{&l_2361,&l_2361,&l_2361},{&l_2361,&l_2361,&l_2361},{&l_2361,&l_2361,&l_2361}};
        int i, j;
        (*l_2341) = (safe_lshift_func_int16_t_s_u((((((**g_2035) = (safe_mul_func_int8_t_s_s((l_2329 >= ((&g_1389 == (void*)0) && (safe_mod_func_int8_t_s_s(0L, (safe_mod_func_int64_t_s_s(((l_2334 != (void*)0) & p_20), (((((safe_div_func_int32_t_s_s((p_20 < (--(*g_1960))), 0xF9545433L)) == (-9L)) >= p_22) <= 0L) , p_20))))))), (**g_568)))) , (-4L)) < p_21) , 0xBBC7L), 11));
        l_1995 |= (((l_2359[2] = (((0x91CB9547BAECA1BBLL >= (l_2358[3] = (safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(9L, (safe_sub_func_int64_t_s_s(((((safe_mul_func_uint16_t_u_u(((l_2350 , (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((*g_1960), 2)), (safe_add_func_uint16_t_u_u((*g_1960), (((*l_2341) ^ ((0x69DCB871L & (*l_2341)) >= ((safe_unary_minus_func_int64_t_s((((*g_483) , 0UL) | (*l_2341)))) || p_21))) > (*l_2341))))))) != g_778), (*g_1960))) | (*g_729)) >= p_20) , 0x28F7613724E75D9FLL), (*l_2341))))), 14)))) | 0xA0L) , (void*)0)) != l_2360[1][2]) > 0UL);
    }
    if ((p_19 < (g_63 >= 0xF5FA4EC0DFEC3DBCLL)))
    {
        int16_t l_2374 = (-6L);
        uint32_t l_2375 = 0UL;
        int32_t ***l_2377 = (void*)0;
        int32_t *l_2381 = (void*)0;
        int32_t l_2394 = (-4L);
        const int32_t *l_2400 = &l_2394;
        uint8_t l_2448 = 0xACL;
        int64_t l_2471 = 9L;
        int32_t l_2500 = 0x7FB7F731L;
        int64_t l_2501 = 4L;
        int16_t *** const *l_2510 = &g_2386;
        int16_t *** const **l_2509 = &l_2510;
        int32_t ****l_2551 = &g_2087;
        int64_t **l_2617[1][1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_2617[i][j] = &g_2017;
        }
lbl_2506:
        for (g_357 = 0; (g_357 <= 0); g_357 += 1)
        {
            int32_t *l_2376 = &l_1844;
            int32_t ***l_2378 = (void*)0;
            int i;
            (*l_2376) ^= ((((((safe_lshift_func_uint8_t_u_s(((((safe_rshift_func_int8_t_s_s((-1L), 4)) && ((((((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((((void*)0 == &g_728) <= ((safe_mod_func_int16_t_s_s((g_234[g_357] , ((g_234[g_357] , (l_2358[(g_357 + 1)] , (-3L))) ^ (((++(***g_2034)) , ((&g_1960 == (void*)0) , p_20)) , p_21))), (**g_482))) & 255UL)) <= 65535UL), 6)), 0x1647L)) <= g_234[g_357]) , p_21) | (*g_1323)) || p_20) >= l_2374)) , p_20) < 255UL), p_22)) > 0xAA6FL) && (*g_1323)) && l_2375) >= (*g_729)) ^ 9L);
            for (g_147 = 0; (g_147 >= 0); g_147 -= 1)
            {
                uint32_t l_2380 = 0x1AC85223L;
                for (p_20 = 1; (p_20 <= 6); p_20 += 1)
                {
                    int i, j;
                    (*g_201) = &g_2033[(g_357 + 7)][(g_147 + 6)];
                    if (((void*)0 != &g_311))
                    {
                        int i, j;
                        (*l_2376) = ((l_2377 != l_2378) != (((!0x84L) == (l_2380 = (g_2033[(g_357 + 4)][p_20] &= 1L))) <= p_19));
                        g_2033[(g_357 + 7)][(g_147 + 6)] = p_19;
                    }
                    else
                    {
                        return (*g_1960);
                    }
                    if (p_20)
                        break;
                }
            }
        }
lbl_2602:
        for (g_2195 = 0; (g_2195 <= 2); g_2195 += 1)
        {
            int32_t l_2382[1][3];
            int32_t *l_2387 = &l_2358[3];
            uint8_t l_2392 = 0x8DL;
            int32_t *l_2393[4];
            const int32_t **l_2399[8][9][3] = {{{(void*)0,&g_516,(void*)0},{&g_516,(void*)0,&g_516},{(void*)0,&g_516,&g_516},{&g_516,&g_516,&g_516},{(void*)0,(void*)0,(void*)0},{&g_516,&g_516,&g_516},{(void*)0,&g_516,(void*)0},{&g_516,(void*)0,&g_516},{(void*)0,&g_516,&g_516}},{{&g_516,&g_516,&g_516},{(void*)0,(void*)0,(void*)0},{&g_516,&g_516,&g_516},{(void*)0,&g_516,(void*)0},{&g_516,(void*)0,&g_516},{(void*)0,&g_516,&g_516},{&g_516,&g_516,&g_516},{(void*)0,(void*)0,(void*)0},{&g_516,&g_516,&g_516}},{{(void*)0,&g_516,(void*)0},{&g_516,(void*)0,&g_516},{(void*)0,&g_516,&g_516},{&g_516,&g_516,&g_516},{(void*)0,(void*)0,(void*)0},{&g_516,&g_516,&g_516},{(void*)0,&g_516,(void*)0},{&g_516,(void*)0,&g_516},{(void*)0,&g_516,&g_516}},{{&g_516,&g_516,&g_516},{(void*)0,(void*)0,(void*)0},{&g_516,&g_516,&g_516},{(void*)0,&g_516,(void*)0},{&g_516,(void*)0,&g_516},{(void*)0,&g_516,&g_516},{&g_516,&g_516,&g_516},{&g_516,&g_516,&g_516},{&g_516,&g_516,(void*)0}},{{&g_516,(void*)0,&g_516},{&g_516,&g_516,&g_516},{&g_516,(void*)0,&g_516},{&g_516,&g_516,&g_516},{&g_516,&g_516,&g_516},{&g_516,&g_516,(void*)0},{&g_516,(void*)0,&g_516},{&g_516,&g_516,&g_516},{&g_516,(void*)0,&g_516}},{{&g_516,&g_516,&g_516},{&g_516,&g_516,&g_516},{&g_516,&g_516,(void*)0},{&g_516,(void*)0,&g_516},{&g_516,&g_516,&g_516},{&g_516,(void*)0,&g_516},{&g_516,&g_516,&g_516},{&g_516,&g_516,&g_516},{&g_516,&g_516,(void*)0}},{{&g_516,(void*)0,&g_516},{&g_516,&g_516,&g_516},{&g_516,(void*)0,&g_516},{&g_516,&g_516,&g_516},{&g_516,&g_516,&g_516},{&g_516,&g_516,(void*)0},{&g_516,(void*)0,&g_516},{&g_516,&g_516,&g_516},{&g_516,(void*)0,&g_516}},{{&g_516,&g_516,&g_516},{&g_516,&g_516,&g_516},{&g_516,&g_516,(void*)0},{&g_516,(void*)0,&g_516},{&g_516,&g_516,&g_516},{&g_516,(void*)0,&g_516},{&g_516,&g_516,&g_516},{&g_516,&g_516,&g_516},{&g_516,&g_516,(void*)0}}};
            uint16_t l_2470 = 0xF53DL;
            const int8_t l_2482[10][8] = {{(-3L),0x0AL,(-3L),(-3L),0x0AL,(-3L),(-3L),0x0AL},{0x0AL,(-3L),(-3L),0x0AL,(-3L),(-3L),0x0AL,(-3L)},{0x0AL,0x0AL,(-6L),0x0AL,0x0AL,(-6L),0x0AL,0x0AL},{(-3L),0x0AL,(-3L),(-3L),0x0AL,(-3L),(-3L),0x0AL},{0x0AL,(-3L),(-3L),0x0AL,(-3L),(-3L),0x0AL,(-3L)},{0x0AL,0x0AL,(-6L),0x0AL,0x0AL,(-6L),0x0AL,0x0AL},{(-3L),0x0AL,(-3L),(-3L),0x0AL,(-3L),(-3L),0x0AL},{0x0AL,(-3L),(-3L),0x0AL,(-3L),(-3L),0x0AL,(-3L)},{0x0AL,0x0AL,(-6L),0x0AL,0x0AL,(-6L),0x0AL,0x0AL},{(-3L),0x0AL,(-3L),(-3L),(-3L),(-6L),(-6L),(-3L)}};
            uint16_t **l_2485 = (void*)0;
            int32_t ****l_2555 = (void*)0;
            int64_t ***l_2557 = (void*)0;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_2382[i][j] = 0x686D0EF2L;
            }
            for (i = 0; i < 4; i++)
                l_2393[i] = &g_63;
            (*g_201) = l_2381;
            if (l_2382[0][0])
                continue;
            l_2056 = (p_19 & (safe_unary_minus_func_uint32_t_u(((&g_1231 == (g_2384[2][9][3] = g_2384[0][7][1])) >= (((*l_2387) = (*g_516)) >= (((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_int8_t_s_s(((p_22 | ((~((l_2394 = l_2392) , ((((&l_2377 != ((safe_lshift_func_uint16_t_u_u((p_19 , p_22), p_21)) , (void*)0)) , 0x0DFFL) > 65534UL) , (*g_1323)))) , (*g_483))) && 5L), 5)) & p_20))) > (**g_482)) <= (*g_1960)))))));
            l_2400 = (l_2397 = l_2393[1]);
            for (g_2281 = 2; (g_2281 >= 0); g_2281 -= 1)
            {
                int32_t l_2406 = 0x6F7589B6L;
                int32_t l_2499 = 0xDA734AD2L;
                int32_t ****l_2596 = &l_2377;
                if (((***g_2386) , p_22))
                {
                    int32_t l_2401 = (-9L);
                    int32_t ***l_2410 = &g_201;
                    int32_t l_2425 = 0x4FFAC94EL;
                    if ((l_2401 = (p_21 | g_991)))
                    {
                        int32_t l_2407[4] = {4L,4L,4L,4L};
                        int32_t l_2424 = 7L;
                        int i;
                        l_2425 |= (safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(l_2406, (l_2407[2] , (((safe_lshift_func_uint8_t_u_s(((l_2424 &= ((0xA96F2688L >= (&l_2399[7][0][2] != l_2410)) & ((safe_lshift_func_int8_t_s_u(((safe_div_func_int16_t_s_s((((((safe_rshift_func_uint16_t_u_s((((safe_sub_func_int8_t_s_s(0x98L, (safe_sub_func_int32_t_s_s(((*l_2387) |= ((~((*g_1960) |= (safe_sub_func_int32_t_s_s(p_19, (*l_2400))))) , (1UL && 18446744073709551612UL))), (*l_2400))))) , 0x66F2L) != g_143), 11)) != p_19) ^ 5UL) & l_2406) ^ 1UL), p_22)) <= 8L), p_21)) | l_2407[0]))) | 0UL), p_22)) != l_2407[2]) != p_21)))), p_19));
                        return p_21;
                    }
                    else
                    {
                        return l_2426;
                    }
                }
                else
                {
                    uint16_t l_2447[2][10] = {{0x130CL,0x130CL,0UL,2UL,0UL,0x130CL,0x130CL,0UL,2UL,0UL},{0x130CL,0x130CL,0UL,2UL,0UL,0x130CL,0x130CL,0UL,2UL,0UL}};
                    int32_t *l_2450 = &l_1990;
                    int32_t ** const *l_2481[1][7][3];
                    int32_t l_2526[3][9] = {{0xFBE48F8DL,0xFBE48F8DL,(-6L),0x15E2D5F2L,(-6L),0xFBE48F8DL,0xFBE48F8DL,(-6L),0x15E2D5F2L},{0xA8616AA9L,4L,0xA8616AA9L,(-6L),(-6L),0xA8616AA9L,4L,0xA8616AA9L,(-6L)},{0xA8616AA9L,(-6L),(-6L),0xA8616AA9L,4L,0xA8616AA9L,(-6L),(-6L),0xA8616AA9L}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 7; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_2481[i][j][k] = &g_201;
                        }
                    }
                    for (l_2055 = 2; (l_2055 >= 0); l_2055 -= 1)
                    {
                        uint8_t ** const *l_2430 = &g_568;
                        const uint32_t l_2445[2] = {0x7D99C1F5L,0x7D99C1F5L};
                        int32_t l_2446 = 0xDAFEC8D3L;
                        int i;
                        (*l_2387) = (~(safe_mul_func_int8_t_s_s((&g_2035 == l_2430), (0x7427AADBL && ((safe_lshift_func_int8_t_s_s((-6L), (((((*g_1323) = ((safe_sub_func_int16_t_s_s(p_21, (safe_mul_func_int16_t_s_s(((0xCDA13051B3F8993ELL != (safe_mul_func_int16_t_s_s((((((((safe_mul_func_uint8_t_u_u((***g_2034), (p_19 || ((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((g_1996 = (l_2446 &= (l_2445[0] | 0UL))) < p_20), (**g_2035))), p_20)) , l_2447[0][3])))) , l_2446) != 0x1613166C8D2CA16ALL) > (-1L)) >= l_2448) == 0x22L) & p_20), p_21))) <= p_20), g_2449)))) || p_20)) || p_22) & 0x7F329C724748E893LL) <= p_19))) , (*l_2387))))));
                    }
                    (*g_201) = l_2450;
                    if (((safe_lshift_func_int8_t_s_s((4294967289UL < ((*g_1323) &= (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(((*l_2400) & (*g_516)), (0xC5L | (!1L)))), (safe_sub_func_int32_t_s_s((((*l_2450) = (((safe_mod_func_uint8_t_u_u(((0x63F948C4L > (&g_942 != (void*)0)) , ((((*l_2397) ^ l_2406) <= l_2470) , p_22)), 255UL)) == l_2406) , p_22)) ^ 0x22B6666EL), 2L)))), p_21)) || p_19), (**g_728))), l_2471)))), (**g_728))) & (-1L)))
                    {
                        int32_t *l_2472 = &l_1895;
                        (*g_201) = l_2472;
                        if (p_20)
                            break;
                        (*g_202) ^= (*g_516);
                    }
                    else
                    {
                        int64_t l_2484[2][10][4] = {{{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL}},{{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL},{0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL,0xD7F041DAB4DF1FAALL}}};
                        int64_t *l_2486 = &g_142;
                        int i, j, k;
                        (**g_201) = ((*l_2387) |= (safe_div_func_uint32_t_u_u((l_2450 == ((((((((*l_2486) = (((*l_2283) = (((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((0UL || ((safe_mul_func_int8_t_s_s((p_20 && (&l_2399[1][2][2] == l_2481[0][4][2])), l_2482[2][5])) , ((!((p_21 ^ ((void*)0 != &g_1726)) , l_2484[1][2][1])) , p_19))) , p_21), 0L)), (*g_729))) , &g_1960) != l_2485)) < p_20)) && 0L) > (*g_516)) <= (*l_2450)) | p_20) , 0xA484C74275F44994LL) , l_2387)), (-4L))));
                    }
                    if (((**g_201) = ((l_2406 &= (p_22 , (safe_rshift_func_uint8_t_u_u((p_19 , (safe_div_func_uint64_t_u_u(0x2AAF0F91792CE18CLL, p_19))), 6)))) | ((*l_2283) |= (safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((((p_19 ^ (0xA02759C4D771850ELL & (p_21 ^ ((((p_19 , (((**g_728) > 0x62L) ^ (*l_2450))) , 0xCE53A0D3L) , p_21) < (*l_2400))))) > 0xECAFL) , l_2499), (**g_568))), 18446744073709551609UL)), p_20)) | p_22) > l_2499), (**g_728)))))))
                    {
                        int16_t l_2502 = 7L;
                        ++l_2503[3];
                        if (g_1996)
                            goto lbl_2506;
                    }
                    else
                    {
                        int32_t l_2525 = 8L;
                        (*g_202) = (*g_516);
                        (*l_2387) ^= ((((safe_mul_func_uint16_t_u_u((p_22 < ((void*)0 != l_2509)), p_22)) >= (safe_div_func_uint32_t_u_u(((*g_1323) = (*g_1323)), (((!((((((--(*g_1960)) && p_19) & ((l_2499 || (+(((*g_202) = (safe_add_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(p_20, ((*l_2110)++))), (l_2525 < (-1L))))) , 0x8F7840E07A67372CLL))) == 0L)) > p_22) <= l_2526[0][2]) >= p_21)) < l_2525) , p_19)))) && 0x16601BD3L) < 0xCA1D19CB76B11A29LL);
                    }
                }
                for (g_2162 = 0; (g_2162 <= 2); g_2162 += 1)
                {
                    uint16_t **l_2536 = &g_1960;
                    int8_t * const *l_2548[7] = {&g_729,&g_729,&g_729,&g_729,&g_729,&g_729,&g_729};
                    int32_t ****l_2554 = &g_2087;
                    int64_t *** const l_2558 = &g_829[0];
                    int32_t l_2593 = 0x6AF8636EL;
                    int32_t *** const *l_2597 = &l_2377;
                    int16_t *l_2598 = &g_2449;
                    int i;
                }
            }
        }
        for (g_991 = 17; (g_991 == 58); ++g_991)
        {
            int16_t *l_2620[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_2621 = (-8L);
            int32_t l_2622 = 1L;
            int32_t *l_2623 = &g_2033[8][5];
            int i;
            if (g_177)
                goto lbl_2601;
            if (g_178)
                goto lbl_2602;
            (*l_2623) |= (safe_mod_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((*g_483) = p_21), p_22)) | (0L && ((*g_1960) >= ((l_2622 = (safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((safe_mul_func_int16_t_s_s((l_2621 = ((((&l_2283 == l_2617[0][0]) || 0xE34A7E3D983353D7LL) && ((*g_569) = p_22)) , (safe_lshift_func_int16_t_s_u((*l_2400), 15)))), p_22)) , (-6L)), (*l_2397))), p_19))) <= p_22)))), (*l_2400)));
            if (p_22)
                continue;
        }
    }
    else
    {
        uint32_t *l_2631 = &g_357;
        uint32_t *l_2639 = (void*)0;
        int32_t l_2642 = 1L;
        int64_t *l_2652 = &g_147;
        int32_t l_2682 = 0x30E729E2L;
        int16_t ****l_2785 = &g_2386;
        const uint32_t l_2816 = 0x0C3056F9L;
        uint8_t *l_2820[5] = {&g_230,&g_230,&g_230,&g_230,&g_230};
        int32_t *l_2866 = &l_2054;
        int i;
        for (g_1996 = 0; (g_1996 < 30); g_1996 = safe_add_func_int32_t_s_s(g_1996, 3))
        {
            uint8_t l_2648 = 247UL;
            uint16_t l_2677 = 0x92D9L;
            int32_t *****l_2708 = &g_2086[2][5][4];
            int8_t ** const *l_2733 = &g_728;
            int8_t ** const ** const l_2732 = &l_2733;
            int32_t ***l_2742 = &g_592;
            int32_t ** const *l_2744 = (void*)0;
            int32_t l_2787 = 0L;
            int8_t ****l_2804 = &g_727;
            const int32_t l_2840 = 0xB1E2ACA1L;
            int8_t ****l_2865 = &g_727;
        }
        (*l_2866) &= (*l_2397);
        for (g_286 = (-19); (g_286 <= 37); ++g_286)
        {
            if (p_19)
                break;
            l_2866 = &l_2642;
        }
    }
    return (*l_2397);
}







static uint16_t func_25(int16_t p_26, int32_t p_27)
{
    int8_t l_1801 = (-7L);
    int32_t **l_1821[9] = {&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202};
    uint64_t l_1825 = 18446744073709551607UL;
    uint32_t l_1826[2][8][6] = {{{1UL,0x8E5F7D23L,1UL,0x111BCBB7L,0x907ABA58L,0x907ABA58L},{0x88F6BFE6L,1UL,1UL,0x88F6BFE6L,0x8E5F7D23L,0xDC11C65AL},{0xDC11C65AL,0x88F6BFE6L,0x907ABA58L,0x88F6BFE6L,0xDC11C65AL,0x111BCBB7L},{0x88F6BFE6L,0xDC11C65AL,0x111BCBB7L,0x111BCBB7L,0xDC11C65AL,0x88F6BFE6L},{1UL,0x88F6BFE6L,5UL,0x111BCBB7L,5UL,1UL},{5UL,0xDC11C65AL,0x907ABA58L,0x8E5F7D23L,0x8E5F7D23L,0x907ABA58L},{5UL,5UL,0x8E5F7D23L,0x111BCBB7L,0x88F6BFE6L,0x111BCBB7L},{0xDC11C65AL,5UL,0xDC11C65AL,0x907ABA58L,0x8E5F7D23L,0x8E5F7D23L}},{{1UL,0xDC11C65AL,0xDC11C65AL,1UL,5UL,0x111BCBB7L},{0x111BCBB7L,1UL,0x8E5F7D23L,1UL,0x111BCBB7L,0x907ABA58L},{1UL,0x111BCBB7L,0x907ABA58L,0x907ABA58L,0x111BCBB7L,1UL},{0xDC11C65AL,1UL,5UL,0x111BCBB7L,5UL,1UL},{5UL,0xDC11C65AL,0x907ABA58L,0x8E5F7D23L,0x8E5F7D23L,0x907ABA58L},{5UL,5UL,0x8E5F7D23L,0x111BCBB7L,0x88F6BFE6L,0x111BCBB7L},{0xDC11C65AL,5UL,0xDC11C65AL,0x907ABA58L,0x8E5F7D23L,0x8E5F7D23L},{1UL,0xDC11C65AL,0xDC11C65AL,1UL,5UL,0x111BCBB7L}}};
    int64_t l_1827 = (-8L);
    int i, j, k;
    for (g_143 = 0; g_143 < 4; g_143 += 1)
    {
        g_829[g_143] = &g_830;
    }
    for (g_233 = 26; (g_233 == 6); --g_233)
    {
        int32_t l_1796[2];
        uint64_t l_1809 = 0x4CFC4F9A6115CD89LL;
        int i;
        for (i = 0; i < 2; i++)
            l_1796[i] = (-6L);
        l_1796[1] ^= 0L;
        for (g_891 = 0; (g_891 <= (-11)); g_891 = safe_sub_func_int16_t_s_s(g_891, 6))
        {
            int16_t * const *l_1799 = &g_483;
            int16_t ***l_1800 = &g_482;
            int32_t l_1804 = 0x795F2814L;
            l_1804 = (((*g_483) ^ (((l_1801 ^= ((l_1799 != ((*l_1800) = &g_483)) | p_27)) <= (safe_lshift_func_uint8_t_u_u(0xA8L, 7))) ^ l_1804)) || (((p_27 &= (safe_sub_func_int64_t_s_s(((0x06L == ((*g_729) = (***g_727))) , (((safe_div_func_int64_t_s_s(p_26, p_26)) || l_1804) | l_1804)), l_1809))) , 0xEAFB6A566575C64ALL) , l_1804));
        }
    }
    l_1827 = (safe_lshift_func_int16_t_s_u((~(g_115[5] &= 6UL)), (((*g_1323) = (g_359 & (p_26 ^ (safe_add_func_int8_t_s_s(l_1801, ((*g_569) = (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((l_1821[3] != l_1821[5]) == p_26), 9UL)), (((~(safe_mod_func_uint32_t_u_u(((0UL | (***g_727)) , 4294967290UL), l_1825))) | (*g_483)) ^ p_27))), p_26)))))))) >= l_1826[0][4][5])));
    return p_27;
}







static int32_t func_28(int64_t p_29, int16_t p_30, int16_t p_31, uint32_t p_32, int8_t p_33)
{
    uint32_t *l_1376[10];
    int32_t l_1397 = 0x60057FEEL;
    uint8_t * const *l_1404[2][6][6] = {{{&g_569,&g_569,&g_569,(void*)0,&g_569,&g_569},{&g_569,(void*)0,&g_569,&g_569,(void*)0,&g_569},{(void*)0,&g_569,&g_569,&g_569,&g_569,&g_569},{(void*)0,&g_569,&g_569,&g_569,&g_569,&g_569},{(void*)0,&g_569,&g_569,&g_569,&g_569,&g_569},{(void*)0,&g_569,(void*)0,&g_569,&g_569,(void*)0}},{{&g_569,&g_569,&g_569,(void*)0,&g_569,&g_569},{&g_569,&g_569,&g_569,&g_569,&g_569,&g_569},{&g_569,&g_569,&g_569,&g_569,&g_569,&g_569},{&g_569,&g_569,&g_569,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_569,&g_569},{&g_569,&g_569,&g_569,&g_569,&g_569,&g_569}}};
    int32_t l_1427 = 0x0F9B9FA9L;
    int8_t * const *l_1446 = &g_729;
    int8_t * const **l_1445[5][5][10] = {{{&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,(void*)0,&l_1446,&l_1446},{(void*)0,&l_1446,&l_1446,(void*)0,(void*)0,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446},{&l_1446,(void*)0,&l_1446,(void*)0,(void*)0,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446},{&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446},{&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,(void*)0,(void*)0,(void*)0}},{{&l_1446,&l_1446,&l_1446,(void*)0,&l_1446,&l_1446,&l_1446,&l_1446,(void*)0,&l_1446},{(void*)0,&l_1446,&l_1446,&l_1446,(void*)0,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446},{(void*)0,&l_1446,&l_1446,(void*)0,&l_1446,(void*)0,&l_1446,&l_1446,(void*)0,&l_1446},{&l_1446,&l_1446,&l_1446,(void*)0,&l_1446,(void*)0,(void*)0,(void*)0,&l_1446,(void*)0},{&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,(void*)0,&l_1446,&l_1446}},{{(void*)0,(void*)0,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,(void*)0,&l_1446,(void*)0},{&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,(void*)0,&l_1446,&l_1446},{(void*)0,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,(void*)0,&l_1446,&l_1446,&l_1446},{&l_1446,&l_1446,&l_1446,(void*)0,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446},{&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,(void*)0}},{{&l_1446,&l_1446,&l_1446,(void*)0,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446},{&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446},{&l_1446,&l_1446,&l_1446,(void*)0,&l_1446,&l_1446,(void*)0,&l_1446,&l_1446,&l_1446},{&l_1446,&l_1446,(void*)0,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446},{(void*)0,&l_1446,(void*)0,&l_1446,(void*)0,(void*)0,&l_1446,&l_1446,&l_1446,&l_1446}},{{&l_1446,(void*)0,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446},{&l_1446,&l_1446,(void*)0,&l_1446,(void*)0,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446},{&l_1446,(void*)0,&l_1446,(void*)0,&l_1446,&l_1446,&l_1446,(void*)0,(void*)0,&l_1446},{&l_1446,&l_1446,&l_1446,(void*)0,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446},{&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446,&l_1446}}};
    const int8_t *l_1506 = &g_1507;
    int32_t l_1565[6];
    uint64_t l_1595 = 0x36E1DB2976811926LL;
    int16_t l_1614 = (-2L);
    uint64_t l_1661 = 1UL;
    int32_t * const *l_1664 = &g_202;
    int64_t l_1759 = 0x43304EF37A6FF103LL;
    int32_t *l_1763 = (void*)0;
    int16_t l_1765 = 5L;
    int16_t *l_1781 = (void*)0;
    uint8_t l_1790 = 0x97L;
    int8_t l_1791 = 0x53L;
    int32_t *l_1792 = &l_1397;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_1376[i] = &g_411;
    for (i = 0; i < 6; i++)
        l_1565[i] = 1L;
    for (g_778 = 29; (g_778 <= 49); g_778 = safe_add_func_uint16_t_u_u(g_778, 1))
    {
        uint64_t *l_1385 = &g_115[4];
        int64_t ** const *l_1387[7];
        int64_t ** const **l_1386 = &l_1387[6];
        uint32_t **l_1391 = (void*)0;
        uint32_t *l_1393[2][4][9] = {{{&g_143,&g_778,&g_357,&g_778,&g_143,&g_778,&g_143,&g_778,&g_357},{&g_311,(void*)0,&g_311,(void*)0,&g_311,&g_311,&g_311,&g_311,&g_311},{&g_143,&g_778,&g_357,&g_778,&g_143,&g_778,&g_143,&g_778,&g_357},{&g_311,(void*)0,&g_311,(void*)0,&g_311,&g_311,&g_311,&g_311,&g_311}},{{&g_143,&g_778,&g_357,&g_778,&g_143,&g_778,&g_143,&g_778,&g_357},{&g_311,(void*)0,&g_311,(void*)0,&g_311,&g_311,&g_311,&g_311,&g_311},{&g_143,&g_778,&g_357,&g_778,&g_143,&g_778,&g_143,&g_778,&g_357},{&g_311,(void*)0,&g_311,(void*)0,&g_311,&g_311,&g_311,&g_311,&g_311}}};
        uint32_t **l_1392 = &l_1393[1][2][7];
        int32_t *l_1394 = (void*)0;
        uint32_t l_1395 = 0x4FCF829BL;
        int32_t *l_1396[7] = {&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2};
        uint8_t * const l_1407 = &g_1408;
        uint8_t * const *l_1406[9][2][5] = {{{(void*)0,&l_1407,&l_1407,(void*)0,&l_1407},{(void*)0,&l_1407,&l_1407,&l_1407,&l_1407}},{{(void*)0,&l_1407,&l_1407,&l_1407,&l_1407},{&l_1407,&l_1407,&l_1407,&l_1407,&l_1407}},{{(void*)0,&l_1407,&l_1407,(void*)0,&l_1407},{(void*)0,&l_1407,&l_1407,&l_1407,&l_1407}},{{(void*)0,&l_1407,&l_1407,&l_1407,&l_1407},{&l_1407,&l_1407,&l_1407,&l_1407,&l_1407}},{{(void*)0,&l_1407,&l_1407,(void*)0,&l_1407},{(void*)0,&l_1407,&l_1407,&l_1407,&l_1407}},{{(void*)0,&l_1407,&l_1407,&l_1407,&l_1407},{&l_1407,&l_1407,&l_1407,&l_1407,&l_1407}},{{(void*)0,&l_1407,&l_1407,(void*)0,&l_1407},{(void*)0,&l_1407,&l_1407,&l_1407,&l_1407}},{{(void*)0,&l_1407,&l_1407,&l_1407,&l_1407},{&l_1407,&l_1407,&l_1407,&l_1407,&l_1407}},{{(void*)0,&l_1407,&l_1407,(void*)0,&l_1407},{(void*)0,&l_1407,&l_1407,&l_1407,&l_1407}}};
        int16_t ***l_1422 = &g_482;
        int16_t ****l_1421 = &l_1422;
        int8_t ***l_1448 = (void*)0;
        int16_t l_1489 = 1L;
        uint16_t *l_1518 = (void*)0;
        int8_t l_1574 = 0xA6L;
        uint32_t ** const l_1593[2] = {&l_1376[5],&l_1376[5]};
        int8_t l_1609 = (-7L);
        const int32_t l_1625 = (-2L);
        int32_t ***l_1654 = &g_201;
        int32_t ****l_1653 = &l_1654;
        uint16_t l_1734[2];
        uint32_t l_1742[5][10] = {{4294967293UL,0x86B0A328L,0x86B0A328L,4294967293UL,0x4D9B92A4L,1UL,1UL,0x4D9B92A4L,4294967293UL,0x86B0A328L},{4294967293UL,4294967293UL,1UL,0x86B0A328L,0x4D9B92A4L,0x4D9B92A4L,0x86B0A328L,1UL,4294967293UL,4294967293UL},{0x4D9B92A4L,0x86B0A328L,1UL,4294967293UL,4294967293UL,1UL,0x86B0A328L,0x4D9B92A4L,0x4D9B92A4L,0x86B0A328L},{0x4D9B92A4L,4294967293UL,0x86B0A328L,0x86B0A328L,4294967293UL,0x4D9B92A4L,1UL,1UL,0x4D9B92A4L,4294967293UL},{4294967293UL,0x86B0A328L,0x86B0A328L,4294967293UL,0x4D9B92A4L,1UL,1UL,0x4D9B92A4L,4294967293UL,0x86B0A328L}};
        int64_t *l_1757 = &g_891;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_1387[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_1734[i] = 65530UL;
        if ((l_1397 = (l_1395 |= ((&p_32 != l_1376[5]) == (safe_lshift_func_uint16_t_u_s(((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(((**g_568) ^= (+(((safe_unary_minus_func_int32_t_s((((*l_1385) = (((**g_482) , g_228[0]) , g_774)) | p_30))) >= ((g_1388 = l_1386) == &l_1387[6])) >= ((((*l_1392) = &g_143) == l_1376[5]) != p_29)))), 4)), 1L)) && p_29), p_30))))))
        {
            int64_t ***l_1398 = &g_829[0];
            uint8_t * const *l_1405 = &g_569;
            int32_t l_1409 = 0x3544CCE9L;
            int64_t l_1410 = 0x4199132CE1FD4CA8LL;
            int8_t *l_1455 = &g_362[2][2][2];
            (*g_201) = l_1396[5];
            for (g_143 = (-1); (g_143 > 52); g_143 = safe_add_func_uint8_t_u_u(g_143, 1))
            {
                int32_t l_1418[4][5][4] = {{{0x565C703AL,0x30F855E9L,1L,0xE29D8439L},{0x3DB781FCL,(-3L),0x7AC2BAB3L,0xE29D8439L},{0xF2A08E66L,0x30F855E9L,0x3DB781FCL,0x30F855E9L},{1L,0L,0x8CFDD822L,0xE249B63DL},{1L,0x3BAC12C5L,0xF2A08E66L,(-6L)}},{{(-3L),0xE29D8439L,(-6L),1L},{(-3L),0x1D0094B5L,0xF2A08E66L,0xF2A08E66L},{1L,1L,0x8CFDD822L,0x27D6AA89L},{1L,0x8CFDD822L,0x3DB781FCL,0L},{0xF2A08E66L,0x565C703AL,0x7AC2BAB3L,0x3DB781FCL}},{{0x3DB781FCL,0x565C703AL,1L,0L},{0x565C703AL,0x8CFDD822L,0x565C703AL,0x27D6AA89L},{0x1D0094B5L,1L,0x3BAC12C5L,0xF2A08E66L},{0xE249B63DL,0x1D0094B5L,0x27D6AA89L,1L},{0L,0xE29D8439L,0x27D6AA89L,(-6L)}},{{0xE249B63DL,0x3BAC12C5L,0x3BAC12C5L,0xE249B63DL},{0x1D0094B5L,0L,0x565C703AL,0x30F855E9L},{0x565C703AL,0x30F855E9L,1L,0xE29D8439L},{0x3DB781FCL,(-3L),0x7AC2BAB3L,0xE29D8439L},{0xF2A08E66L,0x30F855E9L,0x3DB781FCL,0x30F855E9L}}};
                int i, j, k;
                for (g_318 = 0; (g_318 == 3); g_318 = safe_add_func_uint8_t_u_u(g_318, 8))
                {
                    int32_t *l_1417 = &l_1397;
                    for (g_668 = 5; (g_668 >= 22); ++g_668)
                    {
                        l_1417 = &l_1409;
                    }
                    (*l_1417) &= 0L;
                }
                l_1418[0][4][0] = ((void*)0 != &g_991);
                if (l_1418[0][4][0])
                    continue;
                if (p_29)
                    break;
            }
            if ((l_1427 |= (l_1410 == ((**g_1322) <= (safe_lshift_func_int8_t_s_s((((((((void*)0 != l_1421) , (l_1397 ^= 0L)) , l_1397) ^ l_1409) <= ((safe_div_func_uint8_t_u_u(0x5BL, (((safe_mul_func_int8_t_s_s(((((-4L) || p_32) & l_1410) , 8L), (*g_569))) <= 0x14FB4A7DL) | g_680))) ^ 0xCF5E3560L)) , (-5L)), (***g_727)))))))
            {
                int8_t l_1428 = 0x70L;
                int8_t * const ***l_1447 = &l_1445[4][0][8];
                uint16_t *l_1449 = &g_680;
                l_1427 = (l_1428 = ((**g_482) , l_1410));
                (*g_201) = ((p_33 = (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((((((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((*g_516) <= ((*g_1323)++)), ((safe_mod_func_uint16_t_u_u(((*l_1449) = ((l_1409 , (safe_sub_func_uint64_t_u_u(l_1410, (((*l_1447) = l_1445[2][2][9]) == l_1448)))) , 0xDA02L)), ((~(65534UL > (((safe_sub_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((((**g_727) = l_1455) == &p_33) > 0x5FB9A5B2L), 8L)) , l_1410), 1UL)) | 0xE8L) > 1L))) & 0x76L))) > 0UL))), p_32)) , (**g_568)) == (-2L)) != p_33) , p_31) , 5UL) || (**g_482)), 0x98L)), l_1427))) , &l_1409);
            }
            else
            {
                const int32_t *l_1460 = &g_359;
                const int32_t **l_1459 = &l_1460;
                const int32_t ***l_1458[7][6] = {{&l_1459,&l_1459,&l_1459,&l_1459,&l_1459,&l_1459},{&l_1459,&l_1459,&l_1459,&l_1459,&l_1459,&l_1459},{&l_1459,&l_1459,&l_1459,&l_1459,&l_1459,&l_1459},{&l_1459,&l_1459,&l_1459,&l_1459,&l_1459,&l_1459},{&l_1459,&l_1459,&l_1459,&l_1459,&l_1459,&l_1459},{&l_1459,&l_1459,&l_1459,&l_1459,&l_1459,&l_1459},{&l_1459,&l_1459,&l_1459,&l_1459,&l_1459,&l_1459}};
                int i, j;
                for (g_357 = 0; (g_357 != 53); g_357++)
                {
                    const int32_t ***l_1462 = &l_1459;
                    const int32_t ****l_1461 = &l_1462;
                    int16_t * const *l_1463 = &g_483;
                    int16_t * const **l_1464 = &l_1463;
                    (*l_1461) = (l_1458[0][5] = l_1458[0][2]);
                    (*l_1464) = l_1463;
                    (*g_201) = (void*)0;
                }
                return l_1427;
            }
            (**g_201) ^= (!7L);
        }
        else
        {
            uint16_t l_1466 = 0xFDC9L;
            int32_t l_1549 = 0x4DCCA64CL;
            int32_t l_1555 = (-10L);
            int32_t l_1556[8][7][4] = {{{0x00C73B9FL,0xB8C035D3L,1L,0x363B1D24L},{0x1D4243B1L,(-1L),0xB8C035D3L,0x1D4243B1L},{0x00C73B9FL,(-1L),(-4L),0x363B1D24L},{0x363B1D24L,0xB8C035D3L,0xB8C035D3L,0x363B1D24L},{9L,(-1L),1L,0x1D4243B1L},{0x363B1D24L,(-1L),0x7088724BL,0x363B1D24L},{0x00C73B9FL,0xB8C035D3L,1L,0x363B1D24L}},{{0x78A9163AL,0xB8C035D3L,0x7088724BL,0x78A9163AL},{9L,0xB8C035D3L,0x63A6C02DL,0x1D4243B1L},{0x1D4243B1L,0x7088724BL,0x7088724BL,0x1D4243B1L},{0xD02D5608L,0xB8C035D3L,(-4L),0x78A9163AL},{0x1D4243B1L,0xB8C035D3L,(-1L),0x1D4243B1L},{9L,0x7088724BL,(-4L),0x1D4243B1L},{0x78A9163AL,0xB8C035D3L,0x7088724BL,0x78A9163AL}},{{9L,0xB8C035D3L,0x63A6C02DL,0x1D4243B1L},{0x1D4243B1L,0x7088724BL,0x7088724BL,0x1D4243B1L},{0xD02D5608L,0xB8C035D3L,(-4L),0x78A9163AL},{0x1D4243B1L,0xB8C035D3L,(-1L),0x1D4243B1L},{9L,0x7088724BL,(-4L),0x1D4243B1L},{0x78A9163AL,0xB8C035D3L,0x7088724BL,0x78A9163AL},{9L,0xB8C035D3L,0x63A6C02DL,0x1D4243B1L}},{{0x1D4243B1L,0x7088724BL,0x7088724BL,0x1D4243B1L},{0xD02D5608L,0xB8C035D3L,(-4L),0x78A9163AL},{0x1D4243B1L,0xB8C035D3L,(-1L),0x1D4243B1L},{9L,0x7088724BL,(-4L),0x1D4243B1L},{0x78A9163AL,0xB8C035D3L,0x7088724BL,0x78A9163AL},{9L,0xB8C035D3L,0x63A6C02DL,0x1D4243B1L},{0x1D4243B1L,0x7088724BL,0x7088724BL,0x1D4243B1L}},{{0xD02D5608L,0xB8C035D3L,(-4L),0x78A9163AL},{0x1D4243B1L,0xB8C035D3L,(-1L),0x1D4243B1L},{9L,0x7088724BL,(-4L),0x1D4243B1L},{0x78A9163AL,0xB8C035D3L,0x7088724BL,0x78A9163AL},{9L,0xB8C035D3L,0x63A6C02DL,0x1D4243B1L},{0x1D4243B1L,0x7088724BL,0x7088724BL,0x1D4243B1L},{0xD02D5608L,0xB8C035D3L,(-4L),0x78A9163AL}},{{0x1D4243B1L,0xB8C035D3L,(-1L),0x1D4243B1L},{9L,0x7088724BL,(-4L),0x1D4243B1L},{0x78A9163AL,0xB8C035D3L,0x7088724BL,0x78A9163AL},{9L,0xB8C035D3L,0x63A6C02DL,0x1D4243B1L},{0x1D4243B1L,0x7088724BL,0x7088724BL,0x1D4243B1L},{0xD02D5608L,0xB8C035D3L,(-4L),0x78A9163AL},{0x1D4243B1L,0xB8C035D3L,(-1L),0x1D4243B1L}},{{9L,0x7088724BL,(-4L),0x1D4243B1L},{0x78A9163AL,0xB8C035D3L,0x7088724BL,0x78A9163AL},{9L,0xB8C035D3L,0x63A6C02DL,0x1D4243B1L},{0x1D4243B1L,0x7088724BL,0x7088724BL,0x1D4243B1L},{0xD02D5608L,0xB8C035D3L,(-4L),0x78A9163AL},{0x1D4243B1L,0xB8C035D3L,(-1L),0x1D4243B1L},{9L,0x7088724BL,(-4L),0x1D4243B1L}},{{0x78A9163AL,0xB8C035D3L,0x7088724BL,0x78A9163AL},{9L,0xB8C035D3L,0x63A6C02DL,0x1D4243B1L},{0x1D4243B1L,0x7088724BL,0x7088724BL,0x1D4243B1L},{0xD02D5608L,0xB8C035D3L,(-4L),0x78A9163AL},{0x1D4243B1L,0xB8C035D3L,(-1L),0x1D4243B1L},{9L,0x7088724BL,0x63A6C02DL,0x78A9163AL},{0x363B1D24L,0x7088724BL,(-1L),0x363B1D24L}}};
            uint32_t **l_1592 = &l_1376[1];
            int64_t l_1640[7] = {0x055B767ED8126A28LL,0x055B767ED8126A28LL,0x055B767ED8126A28LL,0x055B767ED8126A28LL,0x055B767ED8126A28LL,0x055B767ED8126A28LL,0x055B767ED8126A28LL};
            int8_t l_1770[8] = {1L,0x11L,1L,0x11L,1L,0x11L,1L,0x11L};
            int i, j, k;
            if (p_29)
            {
                l_1427 = ((l_1466 != (safe_div_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((g_363 & 2L) >= ((((safe_add_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((p_30 & (*g_569)) >= ((void*)0 == (*l_1421))), (*g_569))), p_30)) & p_30), 255UL)) >= p_31) || l_1466) , 0xB76DL)), 0x988A6087L)), p_32))) == g_147);
            }
            else
            {
                int32_t l_1494[1];
                const int8_t **l_1505[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1494[i] = 0xECD3629DL;
                for (i = 0; i < 1; i++)
                    l_1505[i] = (void*)0;
                (*g_201) = ((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((*g_1322) != (void*)0), ((((l_1489 == l_1466) & (safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u(g_332, l_1494[0])), ((g_178 ^= p_33) <= ((**g_482) = (safe_mul_func_uint16_t_u_u((((((*l_1385) ^= (safe_mod_func_uint16_t_u_u(((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(g_105[0], (safe_sub_func_uint16_t_u_u(((g_1508[1][0][4] = (l_1506 = &p_33)) == (**g_727)), p_32)))), l_1427)) && p_30), p_29))) & l_1397) & p_29) > 0x9B3FL), p_32))))))) , p_32) | p_31))), l_1466)), 2)), (**g_1322))), (*g_729))), p_30)) , l_1396[6]);
                if (p_32)
                    continue;
            }
            for (p_31 = 0; (p_31 >= (-15)); p_31--)
            {
                for (g_680 = 0; (g_680 == 2); g_680 = safe_add_func_uint64_t_u_u(g_680, 9))
                {
                    l_1427 = (-5L);
                }
                for (p_29 = (-25); (p_29 <= 12); p_29 = safe_add_func_uint64_t_u_u(p_29, 2))
                {
                    for (g_357 = 28; (g_357 != 47); g_357 = safe_add_func_uint64_t_u_u(g_357, 1))
                    {
                        l_1397 ^= 0x98B89A4FL;
                    }
                }
            }
            for (g_178 = 0; (g_178 <= 1); g_178 += 1)
            {
                int32_t ***l_1540 = &g_201;
                int32_t ****l_1539 = &l_1540;
                int32_t l_1550 = 1L;
                int32_t l_1553 = (-1L);
                int32_t l_1557 = (-1L);
                int32_t l_1561 = 0L;
                int32_t l_1563 = 9L;
                int32_t l_1564 = 0xAF984B8EL;
                int32_t l_1567 = 0x4E9B4D75L;
                int32_t l_1569 = 6L;
                int32_t l_1575 = 0L;
                int16_t l_1608 = 2L;
                uint64_t *l_1655 = (void*)0;
                uint16_t *l_1658 = &l_1466;
                int8_t ****l_1668[1];
                uint32_t *l_1706 = &g_357;
                int16_t l_1723 = (-1L);
                int64_t l_1758 = 5L;
                int i;
                for (i = 0; i < 1; i++)
                    l_1668[i] = &l_1448;
                for (g_680 = 2; (g_680 <= 9); g_680 += 1)
                {
                    int32_t l_1520 = 0xB8CA3D7EL;
                    int32_t l_1545[6][10] = {{0L,0x317A8E72L,(-3L),0x317A8E72L,0L,0L,0xEF39D61FL,0x2DB1E8D7L,(-5L),(-5L)},{0L,0x2DB1E8D7L,(-6L),5L,5L,(-6L),0x2DB1E8D7L,0L,(-3L),(-5L)},{5L,5L,0x2DB1E8D7L,0L,0L,0xEF39D61FL,0L,0L,0x2DB1E8D7L,5L},{(-6L),0L,0x2DB1E8D7L,0L,1L,0L,0L,0L,0L,1L},{(-5L),(-6L),(-6L),(-5L),0x317A8E72L,0L,5L,0x2DB1E8D7L,1L,0x2DB1E8D7L},{(-6L),0xEF39D61FL,(-3L),0x2DB1E8D7L,(-3L),0xEF39D61FL,(-6L),5L,1L,0L}};
                    uint16_t *l_1546 = &g_991;
                    int32_t l_1551 = 0xC54CFBCEL;
                    int32_t l_1552 = (-1L);
                    int32_t l_1554 = 0x17390595L;
                    int32_t l_1558 = 0x3A3D793AL;
                    int32_t l_1559 = 1L;
                    int32_t l_1560 = 0x0C209254L;
                    int32_t l_1566 = 0L;
                    int32_t l_1568[7][10][3] = {{{2L,(-1L),(-1L)},{6L,(-1L),(-1L)},{(-1L),0xD2C13AD8L,1L},{0x4C7A20BDL,(-1L),0x970EED94L},{0L,0xB1C375BBL,(-1L)},{0xBD97D037L,(-1L),0x06A197DEL},{0x041F150AL,0xD2C13AD8L,2L},{(-1L),(-1L),(-1L)},{(-1L),(-1L),0xBD97D037L},{0x041F150AL,0x28E43B08L,0L}},{{0xBD97D037L,0x06A197DEL,0x041F150AL},{0L,0x041F150AL,0L},{0x4C7A20BDL,0L,0xBD97D037L},{(-1L),0xE7AB5800L,(-1L)},{6L,0xE7AB5800L,2L},{2L,0L,0x06A197DEL},{0xE7AB5800L,0x041F150AL,(-1L)},{0xD2C13AD8L,0x06A197DEL,0x970EED94L},{0xE7AB5800L,0x28E43B08L,1L},{2L,(-1L),(-1L)}},{{6L,(-1L),(-1L)},{(-1L),0xD2C13AD8L,1L},{0x4C7A20BDL,(-1L),0x970EED94L},{0L,0xB1C375BBL,(-1L)},{0xBD97D037L,(-1L),0x06A197DEL},{0x041F150AL,0xD2C13AD8L,2L},{(-1L),(-1L),(-1L)},{(-1L),(-1L),0xBD97D037L},{0x041F150AL,0x28E43B08L,0L},{0xBD97D037L,0x06A197DEL,0x041F150AL}},{{0L,0x041F150AL,0L},{0x4C7A20BDL,0L,0xBD97D037L},{(-1L),0xE7AB5800L,(-1L)},{6L,0xE7AB5800L,2L},{2L,0L,0x06A197DEL},{0xE7AB5800L,0x041F150AL,(-1L)},{0xD2C13AD8L,0x06A197DEL,0xBD97D037L},{0x06A197DEL,1L,0x041F150AL},{(-1L),(-1L),(-1L)},{0x28E43B08L,0L,(-1L)}},{{6L,(-1L),0x041F150AL},{0x970EED94L,6L,0xBD97D037L},{0L,0L,0L},{2L,6L,0x4C7A20BDL},{0xD2C13AD8L,(-1L),(-1L)},{0L,0L,6L},{0L,(-1L),2L},{0xD2C13AD8L,1L,0xE7AB5800L},{2L,0x4C7A20BDL,0xD2C13AD8L},{0L,0xD2C13AD8L,0xE7AB5800L}},{{0x970EED94L,0xB1C375BBL,2L},{6L,0x06A197DEL,6L},{0x28E43B08L,0x06A197DEL,(-1L)},{(-1L),0xB1C375BBL,0x4C7A20BDL},{0x06A197DEL,0xD2C13AD8L,0L},{(-1L),0x4C7A20BDL,0xBD97D037L},{0x06A197DEL,1L,0x041F150AL},{(-1L),(-1L),(-1L)},{0x28E43B08L,0L,(-1L)},{6L,(-1L),0x041F150AL}},{{0x970EED94L,6L,0xBD97D037L},{0L,0L,0L},{2L,6L,0x4C7A20BDL},{0xD2C13AD8L,(-1L),(-1L)},{0L,0L,6L},{0L,(-1L),2L},{0xD2C13AD8L,1L,0xE7AB5800L},{2L,0x4C7A20BDL,0xD2C13AD8L},{0L,0xD2C13AD8L,0xE7AB5800L},{0x970EED94L,0xB1C375BBL,2L}}};
                    uint16_t l_1570[10] = {1UL,4UL,0x1ACBL,0x1ACBL,4UL,1UL,4UL,0x1ACBL,0x1ACBL,4UL};
                    int i, j, k;
                    l_1520 = (((*g_729) ^ (((((l_1518 != (void*)0) , (~l_1520)) < ((*g_727) == (void*)0)) > ((*g_1323)--)) , (!p_33))) , (safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(p_30, (p_29 , p_29))), 1L)));
                    if (((+(safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(g_2, ((((*g_569) = (safe_add_func_int64_t_s_s(((safe_rshift_func_int16_t_s_s(((((l_1448 != (void*)0) != ((((void*)0 == l_1539) , (safe_sub_func_uint8_t_u_u(((g_115[3] &= (safe_div_func_int32_t_s_s((l_1545[2][7] = (-1L)), p_30))) != (((*l_1546) |= 0xD1F0L) != (safe_mul_func_uint8_t_u_u((p_33 <= g_230), 246UL)))), p_31))) , 0xB822D06074E85F93LL)) != p_33) <= 0x62B13347443E2D06LL), (*g_483))) == l_1466), p_31))) < p_32) && 1L))) >= 0x7B1DL) , 0x6CL), p_32)), l_1520))) > p_31))
                    {
                        int32_t l_1562[5] = {0xBBC4B16BL,0xBBC4B16BL,0xBBC4B16BL,0xBBC4B16BL,0xBBC4B16BL};
                        int32_t *l_1573 = (void*)0;
                        int i;
                        l_1549 = 0x10FEAE20L;
                        ++l_1570[4];
                        l_1573 = ((***l_1539) = l_1376[(g_178 + 5)]);
                    }
                    else
                    {
                        return p_32;
                    }
                    g_1577[0]--;
                }
                for (g_124 = 2; (g_124 <= 9); g_124 += 1)
                {
                    int32_t l_1584 = 8L;
                    int32_t l_1597 = 4L;
                    int32_t l_1641 = 0xC752505BL;
                    int32_t l_1642 = (-9L);
                    uint32_t l_1644 = 0xAE27096DL;
                    for (l_1489 = 0; (l_1489 <= 9); l_1489 += 1)
                    {
                        int32_t *****l_1591 = &l_1539;
                        int32_t l_1594 = 0x6AA9E800L;
                        int32_t *l_1596 = (void*)0;
                        int i;
                        l_1597 = (safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s(((g_359 |= ((((((-4L) < (l_1594 ^= ((((l_1376[(g_178 + 8)] == (l_1584 , (void*)0)) <= (safe_rshift_func_uint16_t_u_s((0UL > (safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((((g_803 &= (**g_728)) , ((((l_1591 = &g_856) == ((((g_1322 = l_1592) != l_1593[0]) , 0UL) , &g_856)) ^ l_1584) , (*g_483))) & 0x7E71L), 0x510DDC9F592A8084LL)), 11))), 8))) == 0x8CL) > (*g_516)))) , (*g_516)) & p_31) || l_1595) < p_32)) , 2L), g_115[0])), 0xEC75L));
                    }
                    for (l_1557 = 0; (l_1557 <= (-16)); --l_1557)
                    {
                        int8_t l_1626[7];
                        uint64_t *l_1639 = &l_1595;
                        int32_t l_1643 = 0x43C28E50L;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1626[i] = 1L;
                        l_1561 = (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_sub_func_int64_t_s_s(((p_31 , (l_1608 , l_1609)) , (((l_1556[2][5][1] = (safe_add_func_uint8_t_u_u(((*l_1407) = (*g_569)), (((l_1626[1] |= ((safe_lshift_func_uint16_t_u_s((7UL < (l_1614 <= (((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((18446744073709551615UL == (l_1625 && p_30)) , p_33), p_30)), 1)), 0x177F6EA4L)), 3)) || l_1584), 7)) & p_32) , p_29))), 8)) < p_31)) <= p_30) ^ g_362[2][5][2])))) <= (*g_569)) < 0x055DE942L)), g_803)), 0xE4ACBE9D3A8307C0LL)), l_1466)), p_33));
                        l_1597 ^= (((safe_sub_func_int32_t_s_s(((((void*)0 != (*g_568)) , (((*l_1385) = (l_1584 && 0x1310L)) , (safe_rshift_func_int16_t_s_u(((((*l_1639) = (g_115[2] = ((safe_mod_func_uint8_t_u_u((safe_div_func_int8_t_s_s(0L, (*g_569))), (safe_lshift_func_int8_t_s_s(1L, (**g_728))))) , (safe_mul_func_int8_t_s_s(((*g_516) | 0x152E427EL), p_31))))) || p_33) , (**g_482)), 10)))) || 0x538BL), 0x46E4D19BL)) && l_1640[4]) ^ (**g_568));
                        --l_1644;
                    }
                }
                l_1549 = p_31;
                if ((l_1549 = (safe_sub_func_uint16_t_u_u((~(p_29 | (safe_rshift_func_uint16_t_u_s((~((l_1556[6][5][3] = (((void*)0 != l_1653) < (g_115[3] ^= (l_1397 | p_33)))) | (safe_mul_func_uint16_t_u_u(((*l_1658) = 0xE858L), (65529UL <= (((((***g_727) = (l_1661 , (((**g_728) < 0xEBL) <= (**g_728)))) >= 0x7CL) , l_1555) != p_29)))))), (*g_483))))), g_95))))
                {
                    uint32_t l_1669 = 1UL;
                    for (l_1557 = 0; (l_1557 != 29); ++l_1557)
                    {
                        return p_30;
                    }
                    for (g_143 = 0; (g_143 <= 3); g_143 += 1)
                    {
                        int32_t * const **l_1665 = &l_1664;
                        int32_t **l_1666 = &l_1396[6];
                        int32_t **l_1667 = &l_1396[6];
                        (*l_1666) = ((***l_1539) = (((p_30 || (*g_1323)) || ((((*g_1323) , ((*l_1385) = (l_1614 == l_1614))) , ((*g_729) == (*g_569))) ^ ((*l_1658) = ((*l_1654) != ((*l_1665) = l_1664))))) , &l_1556[6][5][3]));
                        (*l_1667) = (*l_1664);
                        l_1669 = ((***l_1540) = ((void*)0 == l_1668[0]));
                    }
                    for (l_1575 = 16; (l_1575 != (-1)); l_1575 = safe_sub_func_int32_t_s_s(l_1575, 1))
                    {
                        return l_1669;
                    }
                    if (l_1669)
                        break;
                }
                else
                {
                    const uint32_t l_1697 = 0xCD8A9E62L;
                    int32_t l_1718 = 5L;
                    uint8_t **l_1728 = &g_569;
                    int32_t l_1732 = 0xFD3E0580L;
                    int32_t **l_1764 = &l_1394;
                    l_1397 &= ((safe_add_func_int16_t_s_s(((p_33 = (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((((0xA61D1E863192EBD9LL ^ (p_29 = ((safe_rshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(1UL, (((*g_1323) <= (((((((((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((***g_727), 0x04L)), 0)) == (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((p_30 < (((g_119 && ((safe_rshift_func_int16_t_s_u((((safe_unary_minus_func_uint8_t_u(p_33)) && (&l_1555 != (void*)0)) , (**g_482)), 8)) > 255UL)) , p_30) || (-1L))), 4)), 0L))) != 8UL) && p_33) ^ l_1697) , 1L) > 0x1DDDF26F394EF4E9LL) >= g_411) || p_33)) & p_31))), p_29)) | 0x6301L), 5)) , p_29))) == p_30) < 0UL) != 1UL), 10)), (**g_568)))) || 0x6EL), p_31)) != 0L);
                    for (l_1466 = 0; (l_1466 <= 1); l_1466 += 1)
                    {
                        return l_1555;
                    }
                    if ((safe_lshift_func_uint16_t_u_u((((!((*l_1407) = p_30)) , ((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(0xBC47L, (safe_unary_minus_func_uint64_t_u(((((l_1697 && (l_1706 != ((~(l_1556[0][2][0] >= (((!(*g_569)) >= (safe_div_func_uint64_t_u_u((--(*l_1385)), (((safe_sub_func_uint32_t_u_u((p_31 > (((safe_div_func_uint16_t_u_u(((l_1697 ^ ((((+((g_778 , (void*)0) == &g_593)) | (**g_1322)) < 0xF009BC0715539A0CLL) , l_1556[6][5][3])) > p_32), p_31)) & l_1697) == 8UL)), (*g_1323))) && 1L) ^ l_1718)))) & p_32))) , (void*)0))) <= p_33) <= l_1718) <= 0x834062812140E5B5LL))))), 0x0DL)) , p_33)) >= p_31), g_1577[0])))
                    {
                        int16_t l_1727 = 0xBE68L;
                        uint8_t ***l_1729 = &l_1728;
                        int32_t l_1733[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1733[i] = 8L;
                        l_1732 &= ((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(l_1723, ((((&p_29 != ((safe_sub_func_uint32_t_u_u(((void*)0 == g_1726), (l_1727 = 0x2F3AC098L))) , (void*)0)) & 0x49E56305FEB40A79LL) , (((*l_1729) = l_1728) == (((+(!((g_234[0] = ((***g_727) = (p_29 , p_31))) | l_1565[2]))) && 0xD9DFB15E33B577CALL) , &g_569))) || (**g_482)))), 0x76C59BA7L)) == 0xDE68L);
                        l_1732 = p_32;
                        l_1734[1]++;
                    }
                    else
                    {
                        uint16_t l_1760 = 0xD8EAL;
                        l_1565[2] &= (safe_unary_minus_func_uint32_t_u((safe_add_func_uint64_t_u_u(g_286, (p_29 = (safe_mod_func_uint32_t_u_u(((l_1742[1][0] , p_33) | (((((*l_1653) = (*l_1539)) == (void*)0) || (safe_mod_func_uint8_t_u_u((l_1718 >= ((((*l_1658) = (((**l_1592) = ((safe_mod_func_int64_t_s_s(((p_33 <= ((((((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((l_1732 |= (safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s(((l_1757 = &l_1640[5]) != &l_1640[1]), 1UL)), (*g_569)))), g_178)) != p_32), (**g_568))), 0x9BDFL)) > p_29) != (**g_728)) < l_1718) > (-9L)) & 18446744073709551609UL)) | (**g_1322)), l_1697)) == (**g_1322))) && l_1758)) , g_311) & l_1759)), p_31))) , p_29)), 9UL)))))));
                        l_1760++;
                    }
                    (*l_1764) = (l_1763 = ((***l_1539) = &l_1565[2]));
                }
            }
            for (g_178 = 0; (g_178 <= 0); g_178 += 1)
            {
                int8_t l_1766 = 0xE6L;
                int32_t l_1767 = 0x8AD2EECDL;
                int64_t l_1768[4];
                int32_t l_1769[1];
                uint32_t l_1771 = 4294967289UL;
                int i;
                for (i = 0; i < 4; i++)
                    l_1768[i] = (-1L);
                for (i = 0; i < 1; i++)
                    l_1769[i] = 1L;
                l_1771++;
                return g_234[g_178];
            }
        }
    }
    (*l_1792) = (p_30 , (((**g_1322) ^= (safe_sub_func_int16_t_s_s(((+(safe_sub_func_int8_t_s_s(p_30, ((((**g_728) ^ (((safe_sub_func_int8_t_s_s((g_234[0] = (p_30 , ((l_1781 != (void*)0) > ((safe_rshift_func_uint8_t_u_u((p_29 && (g_803 = (((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(p_30, l_1790)), p_29)), p_31)) >= p_32) ^ l_1791))), 7)) ^ (**g_568))))), l_1791)) , p_32) & (**g_482))) >= 1UL) , 0x23L)))) <= 0x7B37B226L), 0x377FL))) | 0xDE0EBB2BL));
    return p_32;
}







static int16_t func_34(uint32_t p_35)
{
    uint16_t *l_49 = &g_50;
    int32_t l_61[3][2][6] = {{{(-9L),0x644BB323L,0x644BB323L,(-9L),(-9L),0x644BB323L},{(-9L),(-9L),0x644BB323L,0x644BB323L,(-9L),(-9L)}},{{(-9L),0x644BB323L,0x644BB323L,(-9L),(-9L),0x644BB323L},{(-9L),(-9L),0x644BB323L,0x644BB323L,(-9L),(-9L)}},{{(-9L),0x644BB323L,0x644BB323L,(-9L),(-9L),0x644BB323L},{(-9L),(-9L),0x644BB323L,0x644BB323L,(-9L),(-9L)}}};
    int32_t *l_62 = &g_63;
    int32_t *l_87 = &l_61[1][0][3];
    const int32_t **l_88 = (void*)0;
    const int32_t *l_90 = &g_91[0][0];
    const int32_t **l_89[6];
    const int32_t *l_92[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_93[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t *l_94 = &g_95;
    int16_t * const *l_1341[10][10][1] = {{{&g_483},{&g_483},{&g_483},{&g_483},{&g_483},{&g_483},{&g_483},{&g_483},{&g_483},{&g_483}},{{&g_483},{&g_483},{&g_483},{(void*)0},{&g_483},{&g_483},{&g_483},{&g_483},{&g_483},{&g_483}},{{&g_483},{&g_483},{&g_483},{&g_483},{(void*)0},{(void*)0},{&g_483},{(void*)0},{(void*)0},{(void*)0}},{{&g_483},{(void*)0},{(void*)0},{&g_483},{&g_483},{&g_483},{&g_483},{&g_483},{&g_483},{(void*)0}},{{(void*)0},{&g_483},{(void*)0},{(void*)0},{(void*)0},{&g_483},{(void*)0},{(void*)0},{&g_483},{&g_483}},{{&g_483},{&g_483},{&g_483},{&g_483},{(void*)0},{(void*)0},{&g_483},{(void*)0},{(void*)0},{(void*)0}},{{&g_483},{(void*)0},{(void*)0},{&g_483},{&g_483},{&g_483},{&g_483},{&g_483},{&g_483},{(void*)0}},{{(void*)0},{&g_483},{(void*)0},{(void*)0},{(void*)0},{&g_483},{(void*)0},{(void*)0},{&g_483},{&g_483}},{{&g_483},{&g_483},{&g_483},{&g_483},{(void*)0},{(void*)0},{&g_483},{(void*)0},{(void*)0},{(void*)0}},{{&g_483},{(void*)0},{(void*)0},{&g_483},{&g_483},{&g_483},{&g_483},{&g_483},{&g_483},{(void*)0}}};
    int16_t * const **l_1340 = &l_1341[6][0][0];
    uint8_t l_1349 = 1UL;
    int16_t l_1361[2];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_89[i] = &l_90;
    for (i = 0; i < 2; i++)
        l_1361[i] = 0L;
    (*l_62) &= (safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0x58L, (safe_mul_func_int16_t_s_s(func_43(g_2), ((-4L) & (safe_lshift_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((*l_49)--), g_2)) , (func_43((1L >= (safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((+0xBD53D2AE45661C44LL), (+func_43(g_2)))), p_35)), g_6)))) , p_35)), l_61[0][1][1]))))))), p_35));
    (*l_87) = func_64(func_67((p_35 , (safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((0xCA404523830AE734LL > ((*l_94) |= ((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s(((*l_87) ^= (safe_mul_func_uint16_t_u_u((*l_62), ((*l_62) == g_63)))), g_50)), p_35)) >= (((l_92[0] = l_87) == l_93[3]) <= 0x78DB5841L)))), g_6)), 1UL)), 6L)), 0x7D1C2B13L))), p_35, p_35, p_35, p_35), l_49);
    if ((((((0x5E2F4143BE3530C1LL ^ (((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((((((safe_lshift_func_int16_t_s_u(((void*)0 != &g_593), 13)) , l_1340) != &l_1341[6][0][0]) || (g_115[1]--)) && (safe_div_func_int8_t_s_s((((*l_62) = ((!(safe_sub_func_int16_t_s_s(p_35, ((g_332 ^= (**g_482)) & ((p_35 == (*l_90)) , g_411))))) | (*g_729))) == g_357), l_1349))), 7)), p_35)), 0)))) < 0L), 0xD9L)) , p_35), (**g_728))) & p_35) ^ (**g_728))) < 0xC2L) , 0xE614L) == (*g_483)) && (*l_90)))
    {
        return (*g_483);
    }
    else
    {
        int64_t l_1352 = 0x40C767409DA48ECELL;
        int32_t l_1362 = (-1L);
        l_1362 = ((*l_87) = (((l_1352 < ((void*)0 != &l_92[0])) || ((safe_lshift_func_uint8_t_u_s(255UL, ((void*)0 == &g_593))) > (safe_add_func_int64_t_s_s(p_35, ((safe_div_func_int32_t_s_s(((g_63 || (safe_lshift_func_int16_t_s_u(p_35, 5))) , p_35), l_1352)) , p_35))))) , l_1361[0]));
    }
    return p_35;
}







static int16_t func_43(int32_t p_44)
{
    return p_44;
}







static int32_t func_64(int32_t * p_65, uint16_t * p_66)
{
    int32_t l_1278 = 0xBE414F23L;
    uint8_t *l_1294 = &g_230;
    int32_t l_1295 = 0L;
    int32_t *l_1296 = (void*)0;
    int32_t *l_1297 = &g_63;
    int32_t *l_1298 = &g_63;
    int32_t *l_1299[2];
    uint16_t l_1300 = 0UL;
    int16_t ***l_1316 = (void*)0;
    int16_t ****l_1315 = &l_1316;
    int16_t *****l_1317 = &l_1315;
    int16_t ****l_1318 = (void*)0;
    int16_t *****l_1319 = &l_1318;
    uint32_t **l_1324 = &g_1323;
    uint64_t l_1325[6];
    uint32_t l_1326 = 18446744073709551613UL;
    int i;
    for (i = 0; i < 2; i++)
        l_1299[i] = &g_63;
    for (i = 0; i < 6; i++)
        l_1325[i] = 0x4616B623C43ACEC0LL;
    l_1278 |= 3L;
    l_1295 = (((((((0x0525D2B2L ^ (((safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((*p_66), 12)), ((**g_568) != 0x8EL))) , g_105[0]) , ((!l_1278) && ((safe_add_func_uint8_t_u_u(0x73L, 0xFFL)) != (safe_mod_func_int32_t_s_s((((safe_mul_func_uint8_t_u_u(((*l_1294) &= (safe_sub_func_uint64_t_u_u((((((((((*g_569) ^ l_1278) >= l_1278) > (**g_728)) == l_1278) , g_332) , (*g_516)) > 1UL) == 0x287F511F093431A0LL), l_1278))), 8L)) , l_1278) < 0xE3185A44A0C5E2CELL), g_357)))))) ^ g_332) < g_778) == l_1278) ^ 0x9C3D8CD6L) && l_1278) , l_1278);
    --l_1300;
    p_65 = &l_1295;
    return (*l_1298);
}







static int32_t * func_67(uint32_t p_68, const uint8_t p_69, int16_t p_70, int32_t p_71, uint16_t p_72)
{
    int32_t **l_108[3];
    uint32_t l_117 = 0x2F22DDF8L;
    int32_t * const l_184 = (void*)0;
    int32_t * const *l_183 = &l_184;
    int32_t l_366 = (-4L);
    const int64_t *l_387 = (void*)0;
    uint8_t *l_459 = &g_230;
    uint8_t * const *l_458 = &l_459;
    int32_t *l_492 = (void*)0;
    int32_t **l_491[10][1] = {{&l_492},{&l_492},{&l_492},{&l_492},{&l_492},{&l_492},{&l_492},{&l_492},{&l_492},{&l_492}};
    uint16_t *l_495 = &g_50;
    int16_t ***l_530 = &g_482;
    uint32_t l_544[7][1];
    int8_t **l_670 = (void*)0;
    uint32_t l_777 = 0xF67A0C9BL;
    int32_t *l_804 = &g_2;
    int32_t **l_859[6][3] = {{&g_202,&g_202,&g_202},{&g_202,&l_804,(void*)0},{&g_202,&l_804,&g_202},{&g_202,&g_202,(void*)0},{&g_202,&g_202,&g_202},{&g_202,&g_202,&g_202}};
    int64_t ***l_944[3];
    int16_t l_952 = (-2L);
    uint32_t l_1003 = 0UL;
    uint8_t l_1181 = 0xCCL;
    uint8_t l_1258 = 1UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_108[i] = (void*)0;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_544[i][j] = 4294967293UL;
    }
    for (i = 0; i < 3; i++)
        l_944[i] = (void*)0;
    for (g_50 = (-21); (g_50 > 59); ++g_50)
    {
        int16_t *l_104 = &g_105[0];
        const int32_t l_113 = 0x2663943EL;
        uint64_t *l_114 = &g_115[3];
        int64_t *l_116 = &g_95;
        uint16_t *l_118 = &g_119;
        int32_t *l_121 = &g_63;
        int32_t **l_120 = &l_121;
        int64_t *l_122 = (void*)0;
        int64_t *l_123 = &g_124;
        const int32_t l_205 = 0L;
        int8_t l_323 = 0xDBL;
        int32_t l_324 = 0x64653F55L;
        int32_t l_326[4][1] = {{1L},{(-1L)},{1L},{(-1L)}};
        int8_t l_406 = 0x83L;
        int i, j;
        (*l_120) = ((((safe_mul_func_int8_t_s_s((p_72 != (((((*l_123) ^= ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((*l_104) = p_68) , ((p_69 , (safe_sub_func_uint16_t_u_u((0L >= 1UL), 8UL))) < ((l_108[1] == ((((*l_118) = (((safe_lshift_func_int16_t_s_u(p_72, 1)) | ((*l_116) = ((safe_add_func_uint64_t_u_u(((*l_114) &= (l_113 == 9L)), p_69)) | p_71))) == l_117)) >= p_69) , l_120)) != g_6))), 10)), p_68)) ^ 6L)) == 0x6FB37E84F54957FALL) , g_124) | g_2)), g_91[4][0])) , &p_71) != &g_91[0][0]) , &p_71);
        for (p_72 = 16; (p_72 != 6); p_72 = safe_sub_func_uint32_t_u_u(p_72, 1))
        {
            int16_t l_162 = 0x46F2L;
            int32_t * const *l_182 = &l_121;
            int32_t **l_199 = (void*)0;
            int32_t **l_261 = (void*)0;
            int16_t l_287 = (-8L);
            uint32_t l_288 = 0x92DE4622L;
            int32_t l_317 = 0x85689E5FL;
            int32_t l_327 = 0x1811C08DL;
            int32_t l_328[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
            int i;
            for (l_117 = 0; (l_117 == 56); l_117 = safe_add_func_uint32_t_u_u(l_117, 6))
            {
                int8_t l_163[10] = {2L,2L,2L,2L,2L,2L,2L,2L,2L,2L};
                uint16_t *l_200[4][9] = {{&g_50,&g_178,&g_119,&g_178,&g_119,&g_50,&g_119,&g_178,&g_119},{&g_119,&g_119,&g_50,&g_50,&g_119,&g_178,&g_50,&g_50,&g_50},{&g_119,&g_178,&g_178,&g_178,&g_178,&g_119,&g_50,(void*)0,&g_178},{&g_50,&g_178,&g_50,&g_178,&g_178,&g_178,&g_178,&g_50,&g_178}};
                int32_t l_252 = 1L;
                int32_t **l_257[2];
                uint64_t *l_304[5] = {&g_115[3],&g_115[3],&g_115[3],&g_115[3],&g_115[3]};
                const int8_t l_345[6] = {0x73L,0L,0L,0x73L,0L,0L};
                int8_t l_356 = (-1L);
                int i, j;
                for (i = 0; i < 2; i++)
                    l_257[i] = &l_121;
            }
            for (p_71 = 2; (p_71 >= 0); p_71 -= 1)
            {
                for (l_117 = 0; (l_117 <= 2); l_117 += 1)
                {
                    int64_t l_407 = 0xBA671EF585538BD6LL;
                    int32_t l_409 = 1L;
                    int32_t l_410 = 1L;
                    for (l_162 = 2; (l_162 >= 0); l_162 -= 1)
                    {
                        int32_t l_408[9][6] = {{0L,0x254D38C0L,0L,0L,0x254D38C0L,0L},{0x8F6AF8E6L,0L,0L,0L,0x8F6AF8E6L,0x8F6AF8E6L},{0x910DD1D6L,0L,0L,0x910DD1D6L,0x8F6AF8E6L,0L},{0L,0x8F6AF8E6L,0L,0x910DD1D6L,0x910DD1D6L,0L},{0L,0L,0x910DD1D6L,0x254D38C0L,0x910DD1D6L,0L},{0x910DD1D6L,0x8F6AF8E6L,0x254D38C0L,0x254D38C0L,0x8F6AF8E6L,0x910DD1D6L},{0L,0x910DD1D6L,0x254D38C0L,0x910DD1D6L,0L,0L},{0L,0x910DD1D6L,0x910DD1D6L,0L,0x8F6AF8E6L,0L},{0L,0x8F6AF8E6L,0L,0x910DD1D6L,0x910DD1D6L,0L}};
                        int i, j;
                        ++g_411;
                    }
                }
                return (*g_201);
            }
        }
        return (*g_201);
    }
    for (g_230 = 1; (g_230 <= 5); g_230 += 1)
    {
        int16_t l_423 = 1L;
        int32_t l_425 = 0xFA7BD63AL;
        int32_t l_426[8][2][7] = {{{0x27A12609L,0xB1F27604L,0xB1F27604L,0x27A12609L,0xB1F27604L,0xB1F27604L,0x27A12609L},{0xB1F27604L,0x27A12609L,0xB1F27604L,0xB1F27604L,0x27A12609L,0xB1F27604L,0xB1F27604L}},{{0x27A12609L,0x27A12609L,0x712EF9B2L,0x27A12609L,0x27A12609L,0x712EF9B2L,0x27A12609L},{0x27A12609L,0xB1F27604L,0xB1F27604L,0x27A12609L,0xB1F27604L,0xB1F27604L,0x27A12609L}},{{0xB1F27604L,0x27A12609L,0xB1F27604L,0xB1F27604L,0x27A12609L,0xB1F27604L,0xB1F27604L},{0x27A12609L,0x27A12609L,0x712EF9B2L,0x27A12609L,0x27A12609L,0x712EF9B2L,0x27A12609L}},{{0x27A12609L,0xB1F27604L,0xB1F27604L,0x27A12609L,0xB1F27604L,0xB1F27604L,0x27A12609L},{0xB1F27604L,0x27A12609L,0xB1F27604L,0xB1F27604L,0x27A12609L,0xB1F27604L,0xB1F27604L}},{{0x27A12609L,0x27A12609L,0x712EF9B2L,0x27A12609L,0x27A12609L,0x712EF9B2L,0x27A12609L},{0x27A12609L,0xB1F27604L,0xB1F27604L,0x27A12609L,0xB1F27604L,0xB1F27604L,0x27A12609L}},{{0xB1F27604L,0x27A12609L,0xB1F27604L,0xB1F27604L,0x27A12609L,0xB1F27604L,0xB1F27604L},{0x27A12609L,0x27A12609L,0x712EF9B2L,0x27A12609L,0x27A12609L,0x712EF9B2L,0x27A12609L}},{{0x27A12609L,0xB1F27604L,0xB1F27604L,0x27A12609L,0xB1F27604L,0xB1F27604L,0x27A12609L},{0xB1F27604L,0x27A12609L,0xB1F27604L,0xB1F27604L,0x27A12609L,0xB1F27604L,0xB1F27604L}},{{0x27A12609L,0x27A12609L,0x712EF9B2L,0x27A12609L,0x27A12609L,0x712EF9B2L,0x27A12609L},{0x27A12609L,0xB1F27604L,0xB1F27604L,0x27A12609L,0xB1F27604L,0xB1F27604L,0x27A12609L}}};
        uint8_t **l_464[6] = {&l_459,&l_459,&l_459,&l_459,&l_459,&l_459};
        int32_t *l_490 = (void*)0;
        int64_t *l_550[9][3] = {{&g_147,&g_95,&g_147},{&g_147,&g_95,&g_147},{&g_147,&g_95,&g_147},{&g_147,&g_95,&g_147},{&g_147,&g_95,&g_147},{&g_147,&g_95,&g_147},{&g_147,&g_95,&g_147},{&g_147,&g_95,&g_147},{&g_147,&g_95,&g_147}};
        uint64_t l_558 = 0x23DB8272E4031009LL;
        uint8_t l_574[7] = {0x1CL,0x1CL,0x1CL,0x1CL,0x1CL,0x1CL,0x1CL};
        int32_t *l_578 = &l_366;
        int32_t * const *l_579 = &l_492;
        const int32_t **l_582 = (void*)0;
        const int32_t ***l_583 = &l_582;
        int i, j, k;
    }
    if (p_70)
    {
        int16_t * const **l_606 = (void*)0;
        uint64_t *l_614[5][2][5] = {{{&g_115[5],&g_115[3],&g_115[5],&g_115[3],&g_115[3]},{&g_115[3],&g_115[7],&g_115[3],(void*)0,&g_115[1]}},{{&g_115[3],&g_115[3],&g_115[3],&g_115[3],&g_115[3]},{&g_115[1],&g_115[7],&g_115[5],&g_115[7],&g_115[1]}},{{&g_115[3],&g_115[3],&g_115[3],&g_115[3],&g_115[3]},{&g_115[1],(void*)0,&g_115[3],&g_115[7],&g_115[3]}},{{&g_115[3],&g_115[3],&g_115[5],&g_115[3],&g_115[3]},{&g_115[3],&g_115[7],&g_115[3],(void*)0,&g_115[1]}},{{&g_115[3],&g_115[3],&g_115[3],&g_115[3],&g_115[3]},{&g_115[1],&g_115[7],&g_115[5],&g_115[7],&g_115[1]}}};
        uint8_t l_622 = 0x9BL;
        int32_t l_665 = 0x30A452EFL;
        uint16_t l_733 = 0xC48EL;
        int32_t l_812 = 0xACA95351L;
        int i, j, k;
        for (g_147 = (-18); (g_147 <= (-19)); g_147--)
        {
            uint8_t l_608 = 0x4CL;
            int32_t *l_613 = &g_63;
            int64_t *l_651 = &g_142;
            uint32_t l_667 = 0x84F95529L;
            int32_t l_722[6][4];
            int32_t ***l_773[6] = {&l_108[1],&l_108[1],&l_108[1],&l_108[1],&l_108[1],&l_108[1]};
            int32_t ****l_772 = &l_773[1];
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 4; j++)
                    l_722[i][j] = (-1L);
            }
            for (g_332 = (-17); (g_332 < 29); g_332 = safe_add_func_int32_t_s_s(g_332, 3))
            {
                int32_t ***l_599 = &g_201;
                int32_t ****l_598 = &l_599;
                int32_t *****l_600 = &l_598;
                int32_t ****l_602[4][10][6] = {{{&l_599,&l_599,&l_599,&l_599,&l_599,&l_599},{&l_599,&l_599,&l_599,&l_599,(void*)0,&l_599},{&l_599,&l_599,&l_599,(void*)0,(void*)0,&l_599},{&l_599,&l_599,&l_599,&l_599,&l_599,&l_599},{&l_599,&l_599,(void*)0,&l_599,&l_599,&l_599},{&l_599,&l_599,&l_599,&l_599,&l_599,&l_599},{&l_599,(void*)0,&l_599,(void*)0,&l_599,&l_599},{&l_599,&l_599,&l_599,&l_599,&l_599,&l_599},{&l_599,&l_599,&l_599,&l_599,(void*)0,&l_599},{&l_599,&l_599,&l_599,&l_599,&l_599,&l_599}},{{(void*)0,&l_599,&l_599,&l_599,&l_599,&l_599},{&l_599,&l_599,&l_599,&l_599,&l_599,&l_599},{&l_599,&l_599,&l_599,&l_599,&l_599,(void*)0},{&l_599,(void*)0,&l_599,&l_599,&l_599,&l_599},{(void*)0,&l_599,&l_599,&l_599,&l_599,&l_599},{&l_599,&l_599,&l_599,&l_599,&l_599,&l_599},{&l_599,&l_599,(void*)0,(void*)0,&l_599,&l_599},{&l_599,&l_599,&l_599,&l_599,&l_599,&l_599},{(void*)0,&l_599,&l_599,&l_599,(void*)0,&l_599},{(void*)0,&l_599,(void*)0,&l_599,(void*)0,&l_599}},{{&l_599,(void*)0,&l_599,&l_599,&l_599,(void*)0},{&l_599,(void*)0,&l_599,(void*)0,&l_599,(void*)0},{&l_599,&l_599,&l_599,&l_599,&l_599,&l_599},{(void*)0,&l_599,&l_599,&l_599,(void*)0,&l_599},{&l_599,(void*)0,&l_599,&l_599,(void*)0,&l_599},{&l_599,&l_599,&l_599,&l_599,&l_599,&l_599},{&l_599,&l_599,&l_599,&l_599,&l_599,(void*)0},{&l_599,&l_599,&l_599,&l_599,&l_599,(void*)0},{(void*)0,&l_599,&l_599,&l_599,&l_599,(void*)0},{&l_599,&l_599,&l_599,&l_599,&l_599,&l_599}},{{&l_599,&l_599,&l_599,&l_599,&l_599,(void*)0},{&l_599,&l_599,&l_599,&l_599,&l_599,&l_599},{(void*)0,&l_599,&l_599,&l_599,&l_599,&l_599},{&l_599,&l_599,&l_599,&l_599,&l_599,&l_599},{&l_599,&l_599,&l_599,(void*)0,&l_599,&l_599},{&l_599,&l_599,&l_599,&l_599,&l_599,&l_599},{(void*)0,&l_599,&l_599,&l_599,&l_599,&l_599},{&l_599,&l_599,&l_599,&l_599,&l_599,(void*)0},{&l_599,&l_599,&l_599,&l_599,&l_599,&l_599},{&l_599,&l_599,(void*)0,(void*)0,&l_599,&l_599}}};
                int32_t *****l_601 = &l_602[2][2][3];
                int8_t *l_642 = &g_325[3];
                const int16_t *l_649[7][5][7] = {{{&g_332,&g_105[1],&g_332,&g_105[0],&g_105[1],&g_105[1],&g_105[0]},{(void*)0,&g_332,(void*)0,(void*)0,&g_105[0],&g_105[0],(void*)0},{&g_332,&g_105[1],&g_332,&g_105[0],&g_105[1],&g_105[1],&g_105[0]},{(void*)0,&g_332,(void*)0,(void*)0,&g_105[0],&g_105[0],(void*)0},{&g_332,&g_105[1],&g_332,&g_105[0],&g_105[1],&g_105[1],&g_105[0]}},{{(void*)0,&g_332,(void*)0,(void*)0,&g_105[0],&g_105[0],(void*)0},{&g_332,&g_105[1],&g_332,&g_105[0],&g_105[1],&g_105[1],&g_105[0]},{(void*)0,&g_332,(void*)0,(void*)0,&g_105[0],&g_105[0],(void*)0},{&g_332,&g_105[1],&g_332,&g_105[0],&g_105[1],&g_105[1],&g_105[0]},{(void*)0,&g_332,(void*)0,(void*)0,&g_105[0],&g_105[0],(void*)0}},{{&g_332,&g_105[1],&g_332,&g_105[0],&g_105[1],&g_105[1],&g_105[0]},{(void*)0,&g_332,(void*)0,(void*)0,&g_105[0],&g_105[0],(void*)0},{&g_332,&g_105[1],&g_105[1],&g_105[1],&g_105[1],&g_105[1],&g_105[1]},{&g_332,&g_105[0],&g_332,&g_105[0],&g_332,&g_332,&g_105[0]},{&g_105[1],(void*)0,&g_105[1],&g_105[1],&g_105[1],&g_105[1],&g_105[1]}},{{&g_332,&g_105[0],&g_332,&g_105[0],&g_332,&g_332,&g_105[0]},{&g_105[1],(void*)0,&g_105[1],&g_105[1],&g_105[1],&g_105[1],&g_105[1]},{&g_332,&g_105[0],&g_332,&g_105[0],&g_332,&g_332,&g_105[0]},{&g_105[1],(void*)0,&g_105[1],&g_105[1],&g_105[1],&g_105[1],&g_105[1]},{&g_332,&g_105[0],&g_332,&g_105[0],&g_332,&g_332,&g_105[0]}},{{&g_105[1],(void*)0,&g_105[1],&g_105[1],&g_105[1],&g_105[1],&g_105[1]},{&g_332,&g_105[0],&g_332,&g_105[0],&g_332,&g_332,&g_105[0]},{&g_105[1],(void*)0,&g_105[1],&g_105[1],&g_105[1],&g_105[1],&g_105[1]},{&g_332,&g_105[0],&g_332,&g_105[0],&g_332,&g_332,&g_105[0]},{&g_105[1],(void*)0,&g_105[1],&g_105[1],&g_105[1],&g_105[1],&g_105[1]}},{{&g_332,&g_105[0],&g_332,&g_105[0],&g_332,&g_332,&g_105[0]},{&g_105[1],(void*)0,&g_105[1],&g_105[1],&g_105[1],&g_105[1],&g_105[1]},{&g_332,&g_105[0],&g_332,&g_105[0],&g_332,&g_332,&g_105[0]},{&g_105[1],(void*)0,&g_105[1],&g_105[1],&g_105[1],&g_105[1],&g_105[1]},{&g_332,&g_105[0],&g_332,&g_105[0],&g_332,&g_332,&g_105[0]}},{{&g_105[1],(void*)0,&g_105[1],&g_105[1],&g_105[1],&g_105[1],&g_105[1]},{&g_332,&g_105[0],&g_332,&g_105[0],&g_332,&g_332,&g_105[0]},{&g_105[1],(void*)0,&g_105[1],&g_105[1],&g_105[1],&g_105[1],&g_105[1]},{&g_332,&g_105[0],&g_332,&g_105[0],&g_332,&g_332,&g_105[0]},{&g_105[1],(void*)0,&g_105[1],&g_105[1],&g_105[1],&g_105[1],&g_105[1]}}};
                int64_t l_801 = (-9L);
                int i, j, k;
                (*l_601) = ((*l_600) = l_598);
            }
        }
        g_63 = ((((~0UL) > (l_665 | 1UL)) <= ((safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s((((((*l_458) != &p_69) && g_2) != (((safe_lshift_func_int16_t_s_u(l_665, l_665)) & ((l_812 = ((0x4A91L < (*g_483)) , 0x081513785D855CEDLL)) , (*l_804))) , g_50)) , p_71), g_411)), (*g_483))) != p_69)) < (*g_569));
    }
    else
    {
        uint16_t *l_825 = (void*)0;
        int32_t l_826 = 0xF50F1D76L;
        int32_t l_852[4][9][6] = {{{(-2L),0L,(-1L),7L,8L,1L},{0x04AA29D1L,3L,0x03302033L,0L,8L,0L},{(-8L),0L,9L,0x22080262L,(-2L),0x8F3366AFL},{0x89B20C41L,0x96C9E951L,0xB3AFB5C6L,1L,9L,0x700A1469L},{1L,0x15E5B455L,(-2L),0x9CF21EE8L,(-6L),0x700A1469L},{0L,0L,0x274B4963L,9L,0x5D425DF3L,0xD2D26742L},{(-2L),(-1L),0xE307FD02L,0xB3AFB5C6L,0xB31234E2L,0x5D425DF3L},{0x15E5B455L,1L,0xB31234E2L,(-2L),0xF97E560AL,0x22FCA3BBL},{0x15E5B455L,0xB213191AL,0xA458FF2FL,0xB3AFB5C6L,0xA458FF2FL,0xB213191AL}},{{(-2L),0xB31234E2L,0x8B619079L,9L,0xB213191AL,0xE307FD02L},{8L,1L,1L,0x03302033L,0xD2EA0466L,0xA458FF2FL},{9L,1L,(-7L),(-1L),0xB213191AL,(-7L)},{0x700A1469L,0xB31234E2L,1L,0x96C9E951L,0xA458FF2FL,(-1L)},{0L,0xB213191AL,0x22FCA3BBL,8L,0xF97E560AL,1L},{0xE1D8741CL,1L,0x22FCA3BBL,0x15E5B455L,0xB31234E2L,(-1L)},{(-6L),(-1L),1L,1L,0x5D425DF3L,(-7L)},{1L,0x5D425DF3L,(-7L),1L,2L,0xA458FF2FL},{0x96C9E951L,(-7L),1L,1L,0xE307FD02L,0xE307FD02L}},{{1L,0x8B619079L,0x8B619079L,1L,1L,0xB213191AL},{(-6L),(-1L),0xA458FF2FL,0x15E5B455L,1L,0x22FCA3BBL},{0xE1D8741CL,0xF97E560AL,0xB31234E2L,8L,1L,0x5D425DF3L},{0L,(-1L),0xE307FD02L,0x96C9E951L,1L,0xD2D26742L},{0x700A1469L,0x8B619079L,0x274B4963L,(-1L),0xE307FD02L,0xD2EA0466L},{9L,(-7L),1L,0x03302033L,2L,0xD2EA0466L},{8L,0x5D425DF3L,0x274B4963L,9L,0x5D425DF3L,0xD2D26742L},{(-2L),(-1L),0xE307FD02L,0xB3AFB5C6L,0xB31234E2L,0x5D425DF3L},{0x15E5B455L,1L,0xB31234E2L,(-2L),0xF97E560AL,0x22FCA3BBL}},{{0x15E5B455L,0xB213191AL,0xA458FF2FL,0xB3AFB5C6L,0xA458FF2FL,0xB213191AL},{(-2L),0xB31234E2L,0x8B619079L,9L,0xB213191AL,0xE307FD02L},{8L,1L,1L,0x03302033L,0xD2EA0466L,0xA458FF2FL},{9L,1L,(-7L),(-1L),0xB213191AL,(-7L)},{0x700A1469L,0xB31234E2L,1L,0x96C9E951L,0xA458FF2FL,(-1L)},{0L,0xB213191AL,0x22FCA3BBL,8L,0xF97E560AL,1L},{0xE1D8741CL,1L,0x22FCA3BBL,0x15E5B455L,0xB31234E2L,(-1L)},{(-6L),(-1L),1L,1L,0x5D425DF3L,(-7L)},{1L,0x5D425DF3L,(-7L),1L,2L,0xA458FF2FL}}};
        int8_t l_857 = 0xD4L;
        uint32_t l_871[1];
        int64_t **l_887 = &g_830;
        int32_t l_906 = 9L;
        int32_t l_910[7][7][5] = {{{(-3L),(-4L),1L,0xAE0BC7ADL,(-1L)},{0x202FF677L,1L,0L,(-1L),0L},{0x81983C1CL,0x81983C1CL,1L,8L,0xA357CC08L},{0xA68594A6L,0xEBC86287L,(-1L),0xF2229D43L,1L},{8L,(-4L),0x9284CD66L,(-5L),0x1D2F4715L},{(-2L),0xEBC86287L,(-8L),(-5L),(-1L)},{0x8E0A9C67L,0x81983C1CL,0x4BBC19FEL,(-8L),0x5B83E139L}},{{0xF2229D43L,1L,1L,0L,0L},{1L,0L,0x8F2D3065L,0x8E0A9C67L,0xDF1D5A87L},{0x72736DAFL,0x12F1490EL,0x202FF677L,0x33909A30L,9L},{8L,(-8L),1L,0xAE0BC7ADL,0xABCB61EFL},{2L,0L,(-1L),0L,(-1L)},{0x1D2F4715L,0x473EB7AAL,(-5L),0x352584F3L,0x662F880CL},{0x8C67FB20L,1L,0xA68594A6L,0xA68594A6L,1L}},{{1L,1L,0L,(-4L),(-5L)},{1L,0L,0x6B901076L,0x2F69F1C6L,1L},{(-4L),0x8E0A9C67L,0xF1028EBBL,0x0DDCD885L,0x6B4E0B2BL},{1L,(-1L),0L,0L,(-5L)},{1L,0L,1L,1L,1L},{0x8C67FB20L,1L,1L,(-5L),(-2L)},{0x1D2F4715L,0L,1L,0L,(-1L)}},{{2L,0x8C67FB20L,(-1L),(-5L),0xB1FC49A1L},{8L,(-9L),(-2L),0xF7F91D21L,0x8F2D3065L},{0x72736DAFL,0xF2229D43L,0x12F1490EL,1L,0x9F1C8EDDL},{1L,0x67ECD650L,(-9L),0x18D38AE2L,0L},{0xF2229D43L,0L,0L,0L,0xF2229D43L},{0x8E0A9C67L,0L,2L,0x1D2F4715L,0x81983C1CL},{(-2L),0x53E8B532L,0x8C67FB20L,0L,0L}},{{8L,(-5L),0x6B4E0B2BL,0L,0x81983C1CL},{0xA68594A6L,0L,0L,1L,0xF2229D43L},{0x81983C1CL,0x4BBC19FEL,(-8L),0x5B83E139L,0L},{(-1L),0L,0x2F69F1C6L,0x06E521BEL,0x9F1C8EDDL},{0x473EB7AAL,0x17786690L,0xDEC45F31L,0x86A5F947L,0x8F2D3065L},{(-5L),(-1L),(-1L),1L,0xB1FC49A1L},{(-5L),0xDEC45F31L,0x647B4652L,0x9284CD66L,(-1L)}},{{(-1L),0xB8CF0A77L,0L,0x12F1490EL,(-2L)},{0x5B83E139L,8L,0xABCB61EFL,0xB070178AL,1L},{(-2L),0xB405DCA8L,0xB405DCA8L,(-2L),(-5L)},{0xABCB61EFL,1L,(-4L),0xDF1D5A87L,0x6B4E0B2BL},{0L,1L,0x6B901076L,0xC283DF85L,0xEBC86287L},{0x647B4652L,(-9L),0x40D365F0L,1L,0x8E0A9C67L},{(-1L),0L,0L,(-5L),0x8C67FB20L}},{{2L,(-4L),0x647B4652L,1L,(-2L)},{(-1L),(-6L),(-5L),1L,0x2F69F1C6L},{(-3L),0xA357CC08L,(-9L),0x6B4E0B2BL,0x8F2D3065L},{0xFA4D1374L,0xEBC86287L,0xAB0C549FL,0xB8CF0A77L,0xB668CFB1L},{0x5B83E139L,1L,0x473EB7AAL,0x352584F3L,1L},{(-1L),(-1L),(-5L),1L,0L},{1L,0L,1L,0xF7F91D21L,0xF7F91D21L}}};
        uint8_t l_919 = 0x47L;
        uint16_t l_922 = 0x0A2BL;
        int64_t l_951 = 0x7B79663DF5EBEE60LL;
        int32_t *l_957 = &l_366;
        int32_t l_990 = 0x79925302L;
        int32_t l_997 = 3L;
        int32_t *l_1002 = &l_910[1][0][4];
        uint64_t l_1031 = 0xBB2E696203ADBBF2LL;
        uint32_t l_1035 = 0x5B73C578L;
        int16_t l_1065 = 1L;
        int32_t *l_1079 = &l_906;
        int32_t *l_1081 = &l_366;
        int32_t *l_1082 = &l_910[0][3][1];
        uint32_t *l_1158 = &l_1035;
        uint32_t **l_1157 = &l_1158;
        int32_t l_1159 = 0L;
        int8_t l_1160 = 0x23L;
        int32_t l_1161 = 0x49E596E1L;
        uint16_t l_1162 = 0xD343L;
        uint32_t l_1228 = 0x5040E3EDL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_871[i] = 0UL;
        if (((safe_sub_func_uint16_t_u_u(0UL, (l_826 = ((safe_mod_func_uint64_t_u_u((0x1F1BEBE43AAA940ALL ^ 0UL), (safe_mod_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u(p_70, (((p_68 && (p_71 , (safe_add_func_uint16_t_u_u(((*l_495)++), ((void*)0 == (*g_728)))))) <= (0UL | p_70)) & 2L))) ^ p_71), 18446744073709551612UL)))) , p_72)))) || (*g_729)))
        {
            int64_t **l_832 = &g_830;
            int64_t **l_833[10][2][8] = {{{&g_830,&g_830,&g_830,&g_830,&g_830,(void*)0,&g_830,(void*)0},{&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,(void*)0}},{{&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830},{&g_830,&g_830,&g_830,&g_830,&g_830,(void*)0,&g_830,(void*)0}},{{&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,(void*)0},{&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830}},{{&g_830,&g_830,&g_830,&g_830,&g_830,(void*)0,&g_830,(void*)0},{&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,(void*)0}},{{&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830},{&g_830,&g_830,&g_830,&g_830,&g_830,(void*)0,&g_830,(void*)0}},{{&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,(void*)0},{&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830}},{{&g_830,&g_830,&g_830,&g_830,&g_830,(void*)0,&g_830,(void*)0},{&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,(void*)0}},{{&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830},{&g_830,&g_830,&g_830,&g_830,&g_830,(void*)0,&g_830,(void*)0}},{{&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,(void*)0},{&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830,&g_830}},{{&g_830,&g_830,(void*)0,&g_830,&g_830,&g_830,&g_830,&g_830},{&g_830,&g_830,&g_830,(void*)0,&g_830,(void*)0,(void*)0,&g_830}}};
            int32_t l_842[5][6][5] = {{{4L,4L,0x3392EBD0L,0x7B05B11DL,4L},{0x3CF955E6L,0x09275C01L,(-1L),0L,(-1L)},{1L,(-5L),0x3392EBD0L,4L,1L},{0x4E05DD03L,(-1L),0xB82FC906L,0x09275C01L,0xE8551256L},{4L,4L,0x6A24A189L,0x6A24A189L,4L},{(-1L),(-1L),0x06E11658L,(-9L),0x4C9138A4L}},{{(-1L),(-5L),1L,1L,0x6028E11AL},{0xCA2B4D1CL,0x09275C01L,0L,0x09275C01L,0xCA2B4D1CL},{(-1L),4L,(-5L),2L,1L},{(-1L),(-1L),0x4C9138A4L,0L,0x094E5304L},{4L,1L,1L,4L,1L},{0x4E05DD03L,0L,5L,0x65E00720L,0xCA2B4D1CL}},{{1L,(-1L),0x6A24A189L,0x3392EBD0L,0x6028E11AL},{0x3CF955E6L,(-1L),0x3CF955E6L,0x65E00720L,0x4C9138A4L},{4L,0x7B05B11DL,0x3392EBD0L,4L,4L},{0xB82FC906L,0x09275C01L,0xE8551256L,0L,0xE8551256L},{1L,1L,0x3392EBD0L,2L,1L},{1L,(-1L),0x3CF955E6L,0x09275C01L,(-1L)}},{{4L,2L,0x6A24A189L,1L,4L},{0xE8551256L,(-1L),5L,(-9L),0L},{(-1L),1L,1L,0x6A24A189L,0x6028E11AL},{(-3L),0x09275C01L,0x4C9138A4L,0x09275C01L,(-3L)},{(-1L),0x7B05B11DL,(-5L),4L,1L},{0xE8551256L,(-1L),0L,0L,5L}},{{4L,(-1L),1L,0x7B05B11DL,1L},{1L,0L,0x06E11658L,0x65E00720L,(-3L)},{1L,1L,0x6A24A189L,0x6028E11AL,0x6028E11AL},{0xB82FC906L,(-1L),0xB82FC906L,0x65E00720L,0L},{4L,4L,0x3392EBD0L,0x7B05B11DL,4L},{0x3CF955E6L,0x09275C01L,(-1L),0L,(-1L)}}};
            int16_t l_854 = 1L;
            int32_t **l_858 = &l_804;
            int32_t * const **l_880 = &l_183;
            int64_t * const l_890 = &g_891;
            int64_t * const *l_889 = &l_890;
            uint32_t l_914 = 0x0D43B0B2L;
            int32_t l_921 = 1L;
            int i, j, k;
            for (g_63 = 0; (g_63 <= 2); g_63 += 1)
            {
                int16_t **l_850 = &g_483;
                int32_t l_853 = 0x2D5733F3L;
                int32_t *l_886 = (void*)0;
                int32_t l_900 = 0x8FBC5C96L;
                int32_t l_905 = (-2L);
                int32_t l_907 = 0x32E1AA17L;
                int32_t l_908 = 0x9D6D9232L;
                int32_t l_909 = 0L;
                int32_t l_911 = 0x512CCFA2L;
                int32_t l_912 = 0xFA2D0C70L;
                for (p_71 = 1; (p_71 >= 0); p_71 -= 1)
                {
                    uint8_t **l_828 = &g_569;
                    int64_t ***l_831[5][3][8] = {{{&g_829[0],&g_829[0],&g_829[0],&g_829[0],&g_829[0],&g_829[0],&g_829[2],&g_829[0]},{&g_829[2],&g_829[0],&g_829[0],&g_829[1],&g_829[2],&g_829[0],&g_829[2],&g_829[1]},{&g_829[2],&g_829[0],&g_829[2],&g_829[1],&g_829[0],&g_829[0],&g_829[2],&g_829[2]}},{{&g_829[1],&g_829[1],&g_829[0],&g_829[0],&g_829[0],&g_829[0],&g_829[1],&g_829[1]},{&g_829[1],&g_829[0],&g_829[0],&g_829[0],&g_829[1],&g_829[2],&g_829[0],&g_829[2]},{&g_829[0],&g_829[0],&g_829[2],&g_829[0],&g_829[0],&g_829[2],&g_829[2],&g_829[1]}},{{&g_829[2],&g_829[0],&g_829[0],&g_829[0],&g_829[0],&g_829[0],&g_829[0],&g_829[0]},{&g_829[1],&g_829[1],&g_829[0],&g_829[1],&g_829[0],&g_829[0],&g_829[2],&g_829[2]},{&g_829[0],&g_829[2],&g_829[2],&g_829[1],&g_829[2],&g_829[2],&g_829[0],&g_829[2]}},{{&g_829[2],&g_829[0],&g_829[0],&g_829[1],&g_829[0],&g_829[1],&g_829[1],&g_829[0]},{&g_829[0],&g_829[0],&g_829[0],&g_829[0],&g_829[0],&g_829[0],&g_829[2],&g_829[1]},{&g_829[2],&g_829[2],&g_829[0],&g_829[0],&g_829[2],&g_829[0],&g_829[0],&g_829[2]}},{{&g_829[0],&g_829[2],&g_829[1],&g_829[0],&g_829[0],&g_829[0],&g_829[1],&g_829[1]},{&g_829[1],&g_829[0],&g_829[0],&g_829[0],&g_829[0],&g_829[1],&g_829[1],&g_829[2]},{&g_829[2],&g_829[0],&g_829[1],&g_829[0],&g_829[0],&g_829[2],&g_829[0],&g_829[0]}}};
                    uint64_t *l_839 = &g_115[3];
                    int32_t l_851 = (-3L);
                    int i, j, k;
                    l_857 = (((((((*g_569) = p_70) | (g_63 || (p_72 <= (((safe_unary_minus_func_int32_t_s(p_72)) <= ((&g_569 != l_828) , (((l_832 = g_829[0]) != l_833[4][0][7]) , (safe_div_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(((~((l_842[0][2][2] = ((*l_839)++)) >= ((((!(safe_add_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((**g_482), (*g_483))) > p_72), 0L)) , l_850) != (void*)0), p_69))) || l_851) , l_852[3][3][1]) <= l_853))) & p_71), p_68)) < g_228[4]), (***g_727)))))) >= 0x89FEL)))) <= l_854) , (**g_482)) , g_855[3]) == (void*)0);
                    return (*g_201);
                }
                l_859[1][2] = l_858;
                p_71 |= (p_68 < ((void*)0 != &g_482));
                for (g_286 = 0; (g_286 <= 1); g_286 += 1)
                {
                    int16_t * const *l_862 = (void*)0;
                    int32_t l_865 = 0xB7FB8CC3L;
                    int32_t l_898[10][7] = {{(-2L),0x7ED42B4AL,(-2L),0x79F1D43DL,1L,1L,(-1L)},{0L,0xAB9023B4L,0x9F309731L,(-1L),1L,(-1L),0x9F309731L},{1L,1L,0x2393B936L,0x559BFEC4L,0xC64243D6L,1L,0x7ED42B4AL},{(-4L),0xD575582AL,8L,(-1L),(-1L),8L,0xD575582AL},{0xE8FC20B1L,0x284984C5L,1L,(-2L),0xC64243D6L,0x79F1D43DL,0x559BFEC4L},{8L,0L,1L,0xD575582AL,1L,0L,8L},{0x559BFEC4L,0x79F1D43DL,0xC64243D6L,(-2L),1L,0x284984C5L,0xE8FC20B1L},{0xD575582AL,8L,(-1L),(-1L),8L,0xD575582AL,(-4L)},{0x7ED42B4AL,1L,0xC64243D6L,0x559BFEC4L,0x2393B936L,1L,1L},{0x9F309731L,(-1L),1L,(-1L),0x9F309731L,0xAB9023B4L,0L}};
                    int8_t l_899 = 0xD5L;
                    int8_t l_913 = 0L;
                    int32_t **l_917 = &l_492;
                    int i, j;
                }
            }
            l_922++;
        }
        else
        {
            int32_t *l_930 = &l_366;
            int64_t ***l_940 = &g_829[0];
            int32_t l_945 = 0xEB74F8DBL;
            int32_t l_950[9][8] = {{0L,0L,0xF969D393L,0x0F022C7BL,1L,0xF969D393L,0x48978440L,0xE1C06340L},{0L,(-1L),0L,0xCF930794L,0L,(-1L),0L,0x48978440L},{0x20D888C5L,0xCF930794L,0x59D54F72L,(-9L),0xCF930794L,0x77260B7EL,1L,0x20D888C5L},{0x59D54F72L,0x48978440L,7L,(-1L),0xF969D393L,5L,5L,0xF969D393L},{0x48978440L,0L,0L,0x48978440L,0xC9D22C04L,0x59D54F72L,0x6037E6D5L,(-1L)},{(-1L),0x6037E6D5L,0xCF930794L,0x0F022C7BL,0L,0xE1C06340L,0x0F022C7BL,(-1L)},{0xC9D22C04L,0x6037E6D5L,7L,0x59D54F72L,(-1L),0x59D54F72L,7L,0x6037E6D5L},{0x6037E6D5L,0L,5L,0L,7L,5L,(-1L),0xC9D22C04L},{(-1L),0x48978440L,0x111D4C10L,0xF969D393L,0x6037E6D5L,0L,(-1L),(-1L)}};
            int32_t l_953 = 5L;
            uint64_t l_954 = 0UL;
            int16_t *l_989 = &l_952;
            int i, j;
            for (g_63 = 0; (g_63 <= (-18)); --g_63)
            {
                const int32_t *l_931[7];
                int32_t l_946[1];
                int i;
                for (i = 0; i < 7; i++)
                    l_931[i] = (void*)0;
                for (i = 0; i < 1; i++)
                    l_946[i] = 0x97B21E0BL;
                for (g_680 = (-19); (g_680 > 13); g_680++)
                {
                    uint32_t l_929 = 0UL;
                    int32_t ***l_937[6] = {&l_859[1][2],&l_859[1][2],&l_859[1][2],&l_859[1][2],&l_859[1][2],&l_859[1][2]};
                    int32_t ****l_936 = &l_937[5];
                    int16_t l_949 = 7L;
                    int i;
                    l_929 = (*g_202);
                    for (p_68 = 0; (p_68 <= 2); p_68 += 1)
                    {
                        int64_t ****l_941[1];
                        int32_t l_947 = 0x85F482F5L;
                        int32_t l_948[5][4] = {{0x84426683L,0xAEE2F688L,0x97BBAB7DL,(-1L)},{0x84426683L,0x97BBAB7DL,0x84426683L,0L},{0xAEE2F688L,(-1L),0L,0L},{0x97BBAB7DL,0x97BBAB7DL,0x117F4D28L,(-1L)},{(-1L),0xAEE2F688L,0x117F4D28L,0xAEE2F688L}};
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_941[i] = (void*)0;
                        l_945 &= ((l_930 != l_931[2]) , (safe_mul_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u(3L, ((((l_910[6][6][0] |= 0xE5CD0A28L) , ((void*)0 != l_936)) , (safe_add_func_int8_t_s_s((*l_930), ((g_943[7] = (g_942 = l_940)) != l_944[1])))) , (**g_568)))) | p_71) <= (**g_728)), (**g_482))));
                        l_954++;
                        p_71 = 0xCBCCE222L;
                        l_910[0][3][1] ^= p_71;
                    }
                    if (g_411)
                        goto lbl_1006;
                }
                l_957 = &l_946[0];
            }
            for (g_177 = 0; (g_177 != (-18)); g_177 = safe_sub_func_int32_t_s_s(g_177, 3))
            {
                (*l_930) |= (**g_201);
            }
            if (((g_991 = (safe_sub_func_int8_t_s_s((((((safe_div_func_int8_t_s_s(((**g_482) && (safe_sub_func_int64_t_s_s((l_826 = (l_906 = (((safe_lshift_func_int8_t_s_u(p_71, 5)) <= ((*l_930) = (((void*)0 == &g_592) == ((((~((safe_mul_func_int16_t_s_s(((((p_72 ^ (((((**g_728) = (-6L)) , ((safe_add_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((((*l_989) |= ((safe_lshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u((p_69 >= (safe_rshift_func_int16_t_s_u(((**g_568) < ((((((((safe_mod_func_uint8_t_u_u(((((safe_add_func_int8_t_s_s((safe_div_func_uint8_t_u_u((65535UL || g_228[4]), 0x9AL)), p_70)) & 0x2C52C9F81791207BLL) > (*l_930)) ^ (*g_516)), p_72)) != (*l_930)) || (**g_482)) > p_68) ^ p_69) < (*l_930)) && 4294967295UL) , (-1L))), 2))), (*l_930))) || p_68), 11)) | 7UL)) <= g_233) & p_71), (*g_569))), p_68)) <= l_990)) <= (*l_930)) && 18446744073709551607UL)) == (*l_804)) ^ 0UL) < g_91[1][1]), p_68)) , 0x41B1L)) , 0x2EL) == (**g_568)) ^ 0xA8L)))) && 0xC36336AE48C9B502LL))), p_69))), p_72)) < l_852[1][3][5]) || 0x6465F4CD15AABFD9LL) > g_803) & 0x1610E5D1L), (**g_568)))) && g_91[0][0]))
            {
                return (*g_201);
            }
            else
            {
                uint32_t l_998[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_998[i] = 4294967295UL;
                for (l_919 = 13; (l_919 < 30); l_919++)
                {
                    int32_t *l_1001 = &l_366;
                    if ((safe_div_func_int64_t_s_s(0xB0032031EBE07566LL, 0x0EE3818411B27151LL)))
                    {
                        int64_t l_996[5][4] = {{0x5C599278E13BBCF6LL,(-10L),(-10L),0x5C599278E13BBCF6LL},{(-10L),0x5C599278E13BBCF6LL,(-10L),(-10L)},{0x5C599278E13BBCF6LL,0x5C599278E13BBCF6LL,0xBE83D55A97CE9880LL,0x5C599278E13BBCF6LL},{0x5C599278E13BBCF6LL,(-10L),(-10L),0x5C599278E13BBCF6LL},{(-10L),0x5C599278E13BBCF6LL,(-10L),(-10L)}};
                        int i, j;
                        l_998[3]--;
                        p_71 = ((*l_930) |= p_68);
                    }
                    else
                    {
                        return (*g_201);
                    }
                    return (*g_201);
                }
            }
        }
lbl_1006:
        l_1003--;
        for (g_803 = 0; (g_803 >= (-9)); --g_803)
        {
            int16_t l_1019[6][4] = {{0x3F57L,0x3F57L,8L,0x3F57L},{0x3F57L,0x45AFL,0x45AFL,0x3F57L},{0x45AFL,0x3F57L,0x45AFL,0x45AFL},{0x3F57L,0x3F57L,8L,0x3F57L},{0x3F57L,0x45AFL,0x45AFL,0x3F57L},{0x45AFL,0x3F57L,0x45AFL,0x45AFL}};
            int32_t l_1029[4];
            const int32_t *l_1045 = &l_997;
            uint8_t * const l_1066[8] = {&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230};
            int32_t *l_1080 = &l_910[0][6][1];
            int32_t *l_1083 = (void*)0;
            const uint32_t l_1116 = 0xB9F7EB62L;
            int16_t ***l_1133 = &g_482;
            int i, j;
            for (i = 0; i < 4; i++)
                l_1029[i] = (-2L);
            if ((p_71 = 0x597920D0L))
            {
                int64_t l_1028 = 0x3D78D20A8D6BC56FLL;
                int32_t l_1034 = 7L;
                int32_t ** const l_1044 = &l_492;
                int32_t *l_1076 = &l_366;
                int32_t *l_1077 = &l_990;
                int32_t *l_1078 = &l_366;
                for (g_50 = 0; (g_50 <= 45); g_50++)
                {
                    for (g_357 = 0; (g_357 <= 1); g_357 += 1)
                    {
                        int8_t *l_1018 = (void*)0;
                        int i;
                        (*l_1002) ^= (((~251UL) >= (safe_rshift_func_uint8_t_u_s(0xD8L, ((safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((l_1018 == (void*)0) || (l_1019[4][1] = g_105[g_357])), (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(g_105[g_357], 14)), p_68)))), ((p_72 >= (safe_rshift_func_int16_t_s_s(((g_991 |= (((((safe_div_func_uint16_t_u_u(g_680, (**g_482))) , p_68) == g_680) != p_70) ^ p_72)) , (*g_483)), 6))) && p_68))) & (**g_728))))) > p_72);
                    }
                }
                for (l_777 = 0; (l_777 <= 4); l_777 += 1)
                {
                    int32_t l_1030[3];
                    uint64_t *l_1064[10] = {(void*)0,(void*)0,(void*)0,&g_668,&g_668,(void*)0,(void*)0,(void*)0,&g_668,&g_668};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1030[i] = (-8L);
                    if (p_69)
                        break;
                    for (g_119 = 0; (g_119 <= 3); g_119 += 1)
                    {
                        int i, j, k;
                        --l_1031;
                    }
                    l_1035--;
                    (*l_1002) = (((((((*g_569) = (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s((l_1044 != (p_68 , (((l_1045 == (void*)0) ^ (&l_1031 == (((safe_add_func_uint8_t_u_u((~(g_668 &= ((safe_add_func_int8_t_s_s(l_1030[1], (((safe_add_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s(((((safe_add_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((!(g_115[3] = (l_1029[2] <= p_68))) , (l_1030[2] | 1UL)), l_1030[2])), p_71)) ^ l_1065), 0L)) && 0L) , l_1066[0]) != (*g_568)), l_1030[0])), (**g_728))) < (**g_568)), (-6L))) || p_71) >= g_891))) , p_72))), (**g_568))) != g_362[0][1][5]) , l_1064[1]))) , (void*)0))), p_72)), (*g_729))), l_1030[2]))) <= p_71) || (-1L)) | p_68) ^ g_803) > (*g_483));
                    for (l_117 = 0; (l_117 <= 4); l_117 += 1)
                    {
                        const uint32_t l_1075 = 0x5CE043A1L;
                        int i, j, k;
                        (*g_201) = &l_910[l_777][(l_777 + 2)][l_117];
                        p_71 = (l_910[(l_777 + 1)][(l_777 + 1)][l_777] = ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((g_115[3] , 0UL) , 1L), 7)), 0)), (**g_482))), l_1028)) , ((l_1075 , ((g_363 | 4L) && g_318)) != 0x31L)));
                        if ((*l_804))
                            continue;
                    }
                }
                return l_1083;
            }
            else
            {
                uint64_t *l_1088 = &g_115[4];
                int32_t l_1117 = (-6L);
                int32_t l_1118[7];
                int16_t ***l_1131 = &g_482;
                int32_t *l_1132 = (void*)0;
                int i;
                for (i = 0; i < 7; i++)
                    l_1118[i] = 0L;
                (*g_201) = (void*)0;
                (*l_1080) = (safe_mod_func_uint8_t_u_u(0xD4L, (safe_mod_func_uint64_t_u_u(((*l_1088)++), (safe_div_func_uint16_t_u_u(9UL, (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(0x429CL, ((safe_lshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((((*g_483) = (*l_1079)) <= (((safe_unary_minus_func_uint8_t_u((((l_1117 &= ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_div_func_uint64_t_u_u((((***g_727) & (**g_728)) < ((safe_lshift_func_uint8_t_u_u((p_71 <= (safe_add_func_int16_t_s_s((((*l_1079) & g_234[0]) || p_70), p_70))), l_1116)) | 0xFAF84EF0L)), 0x3B83E2D20F711F5BLL)), 3UL)), 6)) | p_72)) , 0x5294L) != g_178))) >= p_70) == l_1118[5])) > (*g_569)), 0x37BCL)), (**g_728))) && 1UL), (*l_1080))) == 0xC30CFA7BL))), 1)), (*g_569)))))))));
                l_1132 = (((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((*g_483) <= (((((safe_mod_func_int16_t_s_s((((!(((+0UL) >= (((((*l_495) ^= (safe_sub_func_uint64_t_u_u(((0x35L <= (-1L)) != l_1118[5]), p_70))) == (*l_1082)) , (*g_568)) != (void*)0)) | l_1117)) > 2UL) , 0x264DL), p_69)) , l_1131) != &g_482) != (*g_569)) | (-1L))) && l_1118[5]), (**g_568))), 9)), (*l_1002))) < (*l_804)) , (void*)0);
                for (g_147 = 0; (g_147 <= 9); g_147 += 1)
                {
                    int16_t ****l_1134 = &l_530;
                    const uint8_t *l_1138 = &g_363;
                    int32_t * const **l_1156 = (void*)0;
                    p_71 = (l_1133 != ((*l_1134) = &g_482));
                    for (g_177 = 0; (g_177 <= 5); g_177 += 1)
                    {
                        int32_t l_1149 = 0xE073C85EL;
                        int32_t l_1152[6][4][8] = {{{0L,0xD089219AL,0xA2645812L,0x288BAD1BL,0xA2645812L,0xD089219AL,0L,0x7A73EE00L},{0xD089219AL,4L,0L,8L,0xF249BD01L,0x288BAD1BL,0x288BAD1BL,0xF249BD01L},{(-1L),0L,0L,(-1L),0xF249BD01L,5L,0x7A73EE00L,0x288BAD1BL},{0xD089219AL,0L,1L,0xF249BD01L,0xA2645812L,0xF249BD01L,1L,0L}},{{0L,0L,0x288BAD1BL,1L,0L,5L,8L,8L},{0x288BAD1BL,0L,4L,4L,0L,0x288BAD1BL,8L,0xA2645812L},{0x7A73EE00L,4L,0x288BAD1BL,5L,1L,0xD089219AL,1L,0L},{4L,8L,4L,0L,0xF249BD01L,0L,1L,0x7A73EE00L}},{{5L,0xF249BD01L,(-1L),0L,0L,(-1L),0xF249BD01L,5L},{5L,0L,0xA2645812L,4L,0xF249BD01L,0L,(-1L),0L},{4L,0xD089219AL,0x7A73EE00L,0xD089219AL,4L,0L,8L,0xF249BD01L},{1L,0L,0xD089219AL,0x288BAD1BL,(-1L),(-1L),0x288BAD1BL,0xD089219AL}},{{0xF249BD01L,0xF249BD01L,0xD089219AL,5L,0xA2645812L,0L,8L,1L},{(-1L),8L,0x7A73EE00L,0xF249BD01L,0x7A73EE00L,8L,(-1L),1L},{8L,0L,0xA2645812L,5L,0xD089219AL,0xF249BD01L,0xF249BD01L,0xD089219AL},{0x288BAD1BL,(-1L),(-1L),0x288BAD1BL,0xD089219AL,0L,1L,0xF249BD01L}},{{8L,0L,4L,0xD089219AL,0x7A73EE00L,0xD089219AL,4L,0L},{(-1L),0L,0xF249BD01L,4L,0xA2645812L,0L,5L,5L},{0xF249BD01L,(-1L),0L,0L,(-1L),0xF249BD01L,5L,0x7A73EE00L},{1L,0L,0xF249BD01L,0L,4L,8L,4L,0L}},{{4L,8L,4L,0L,0xF249BD01L,0L,1L,0x7A73EE00L},{5L,0xF249BD01L,(-1L),0L,0L,(-1L),0xF249BD01L,5L},{5L,0L,0xA2645812L,4L,0xF249BD01L,0L,(-1L),0L},{4L,0xD089219AL,0x7A73EE00L,0xD089219AL,4L,0L,8L,0xF249BD01L}}};
                        int i, j, k;
                        l_1152[5][2][1] ^= (4294967295UL <= ((**g_728) >= ((*l_1080) = (((*l_1079) = (~(safe_rshift_func_int16_t_s_u((**g_482), ((&p_69 == l_1138) > (((l_1149 = (safe_mod_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(p_70, ((*l_459)++))), (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(l_1149, 6)) < ((safe_sub_func_uint64_t_u_u(((*l_1088) &= p_70), (p_69 ^ p_71))) <= p_71)), g_311))))) , (*l_1081)) >= (**g_482))))))) || p_71))));
                    }
                    (*l_1079) ^= (((((!(safe_rshift_func_int16_t_s_s((((void*)0 != l_1156) <= (((((p_68 | (((void*)0 != l_1157) , p_68)) | 0x6DL) || 0x8E390279D88D9E2BLL) <= (g_891 , p_68)) , p_71)), (**g_482)))) , (void*)0) == (void*)0) , p_68) ^ p_71);
                }
            }
            --l_1162;
            if (p_72)
                break;
        }
        for (g_143 = 0; (g_143 <= 0); g_143 += 1)
        {
            int32_t *l_1165 = &l_366;
            uint16_t *l_1180[2][10][7] = {{{&g_178,&g_991,&g_178,(void*)0,&g_119,(void*)0,&g_119},{&g_119,&l_1162,&l_922,&g_991,&g_991,&l_1162,&l_1162},{&g_680,&l_1162,&l_1162,&g_178,&g_991,&g_178,&l_1162},{&g_119,&g_119,&g_178,&g_774,&g_119,&g_50,&g_774},{&g_991,(void*)0,&g_680,&g_991,&l_922,&g_50,(void*)0},{(void*)0,(void*)0,(void*)0,&l_1162,&g_119,(void*)0,(void*)0},{&g_50,&g_119,&l_1162,&g_50,&g_991,&g_774,&g_680},{(void*)0,(void*)0,&g_774,&g_991,&g_991,(void*)0,&l_1162},{&g_774,&l_1162,&g_774,&l_1162,&g_50,(void*)0,&g_178},{&l_1162,&l_922,&g_178,&g_50,&l_922,&g_119,&g_178}},{{&l_1162,&g_774,(void*)0,&l_1162,&l_922,&l_922,&l_922},{&g_774,(void*)0,&g_178,&g_680,&l_1162,(void*)0,&l_922},{&l_1162,&g_178,&g_119,(void*)0,(void*)0,&g_119,&g_178},{&l_1162,&g_774,&l_1162,&g_774,&g_774,&g_50,&l_1162},{(void*)0,&l_1162,&g_178,(void*)0,&g_680,&g_119,&g_680},{&l_922,&g_50,(void*)0,&g_774,&l_922,&g_991,&g_774},{&g_50,&g_680,(void*)0,(void*)0,&g_178,&g_178,&l_1162},{&l_922,&g_680,&g_774,&g_680,&g_680,&g_774,&l_922},{&g_991,&g_178,(void*)0,&l_1162,(void*)0,&g_991,&l_1162},{(void*)0,(void*)0,&g_680,&g_50,&g_50,&g_178,&l_1162}}};
            int32_t l_1218 = (-1L);
            int8_t l_1227[8] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
            int32_t l_1241 = 0x46547C48L;
            int16_t l_1257[7][1][8] = {{{0x966EL,0L,0L,0x966EL,0L,0L,0x966EL,0L}},{{0x966EL,0x966EL,0x7E71L,0x966EL,0x966EL,0x7E71L,0x966EL,0x966EL}},{{0L,0x966EL,0L,0L,0x966EL,0L,0L,0x966EL}},{{0x966EL,0L,0L,0x966EL,0L,0L,0x966EL,0L}},{{0x966EL,0x966EL,0x7E71L,0x966EL,0x966EL,0x7E71L,0x966EL,0x966EL}},{{0L,0x966EL,0L,0L,0x966EL,0L,0L,0x966EL}},{{0x966EL,0L,0L,0x966EL,0L,0L,0x966EL,0L}}};
            int8_t ***l_1271 = &l_670;
            int8_t * const *l_1273 = (void*)0;
            int8_t * const **l_1272 = &l_1273;
            uint16_t l_1277[7] = {0xE171L,0xE171L,0xB030L,0xE171L,0xE171L,0xB030L,0xE171L};
            int i, j, k;
            l_1165 = &p_71;
            for (g_119 = 0; (g_119 <= 0); g_119 += 1)
            {
                int16_t ***l_1168[3][3] = {{&g_482,&g_482,&g_482},{&g_482,&g_482,&g_482},{&g_482,&g_482,&g_482}};
                int64_t *l_1182 = &g_95;
                int32_t *l_1184 = &l_910[0][3][1];
                int32_t l_1186 = (-1L);
                int32_t l_1187 = (-1L);
                uint8_t l_1188 = 0x6AL;
                int32_t l_1226 = 0x4745F58FL;
                int16_t *l_1236 = &l_1065;
                int16_t ** const l_1235 = &l_1236;
                int16_t ** const *l_1234 = &l_1235;
                int16_t ** const **l_1233 = &l_1234;
                int16_t ** const ***l_1232 = &l_1233;
                const int8_t **l_1265 = (void*)0;
                const int8_t ***l_1264 = &l_1265;
                const int8_t ****l_1263 = &l_1264;
                int i, j;
            }
        }
    }
    return (*g_201);
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
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_91[i][j], "g_91[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_95, "g_95", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_105[i], "g_105[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_115[i], "g_115[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_228[i], "g_228[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_234[i], "g_234[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_325[i], "g_325[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_332, "g_332", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_359, "g_359", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_362[i][j][k], "g_362[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_668, "g_668", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    transparent_crc(g_774, "g_774", print_hash_value);
    transparent_crc(g_778, "g_778", print_hash_value);
    transparent_crc(g_803, "g_803", print_hash_value);
    transparent_crc(g_891, "g_891", print_hash_value);
    transparent_crc(g_991, "g_991", print_hash_value);
    transparent_crc(g_1408, "g_1408", print_hash_value);
    transparent_crc(g_1507, "g_1507", print_hash_value);
    transparent_crc(g_1509, "g_1509", print_hash_value);
    transparent_crc(g_1576, "g_1576", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1577[i], "g_1577[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1845, "g_1845", print_hash_value);
    transparent_crc(g_1939, "g_1939", print_hash_value);
    transparent_crc(g_1996, "g_1996", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_2033[i][j], "g_2033[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2162, "g_2162", print_hash_value);
    transparent_crc(g_2195, "g_2195", print_hash_value);
    transparent_crc(g_2211, "g_2211", print_hash_value);
    transparent_crc(g_2281, "g_2281", print_hash_value);
    transparent_crc(g_2398, "g_2398", print_hash_value);
    transparent_crc(g_2449, "g_2449", print_hash_value);
    transparent_crc(g_2665, "g_2665", print_hash_value);
    transparent_crc(g_2666, "g_2666", print_hash_value);
    transparent_crc(g_2667, "g_2667", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_2668[i], "g_2668[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2784, "g_2784", print_hash_value);
    transparent_crc(g_3490, "g_3490", print_hash_value);
    transparent_crc(g_3529, "g_3529", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_3609[i][j][k], "g_3609[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_3940, "g_3940", print_hash_value);
    transparent_crc(g_4004, "g_4004", print_hash_value);
    transparent_crc(g_4097, "g_4097", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_4121[i][j], "g_4121[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_4200, "g_4200", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
