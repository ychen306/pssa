// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = E95503AB
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



static const int32_t g_8 = 0xF782A183L;
static const int32_t *g_7 = &g_8;
static uint32_t g_15[3][4][8] = {{{0UL,0x00168AA2L,18446744073709551615UL,0x968939F5L,0x82E58099L,3UL,0x82E58099L,0x968939F5L},{0x58900FDBL,0x82E58099L,0x58900FDBL,0x26F39384L,0UL,18446744073709551606UL,0xA67F8B4DL,0x58900FDBL},{0UL,18446744073709551614UL,18446744073709551613UL,3UL,9UL,1UL,0UL,2UL},{0UL,1UL,0x26F39384L,18446744073709551613UL,0UL,18446744073709551609UL,1UL,18446744073709551614UL}},{{0x58900FDBL,0UL,18446744073709551614UL,0x57392715L,0x82E58099L,0xE3F9150FL,18446744073709551615UL,18446744073709551615UL},{0UL,6UL,1UL,1UL,6UL,0UL,0UL,0x00168AA2L},{1UL,1UL,2UL,0x58900FDBL,0x6B6CD333L,18446744073709551613UL,18446744073709551615UL,1UL},{18446744073709551615UL,0x57392715L,6UL,0x58900FDBL,18446744073709551608UL,0x26F39384L,0x05732AA6L,0x00168AA2L}},{{3UL,18446744073709551608UL,0x57392715L,0xDA8AFC1DL,0xE55A4419L,18446744073709551614UL,0UL,0x57392715L},{0UL,0x05732AA6L,0xE55A4419L,1UL,1UL,1UL,0xE55A4419L,0x05732AA6L},{0x05732AA6L,1UL,0xDA8AFC1DL,0x82E58099L,0UL,18446744073709551606UL,1UL,0UL},{18446744073709551609UL,1UL,0UL,0x6B6CD333L,0x05732AA6L,18446744073709551615UL,1UL,18446744073709551609UL}}};
static uint8_t g_17 = 0xD3L;
static uint8_t *g_96 = &g_17;
static uint8_t **g_95 = &g_96;
static int8_t g_100 = 0xEAL;
static int32_t g_102 = 0xE7416AF0L;
static uint16_t g_126 = 0x9BF6L;
static int8_t g_132 = 0x4AL;
static uint16_t g_134 = 9UL;
static uint16_t *g_133 = &g_134;
static uint32_t g_139 = 0x9BDD5229L;
static int16_t g_146 = 0xDC8DL;
static uint8_t g_149 = 1UL;
static uint8_t g_151 = 0x8EL;
static uint32_t g_153 = 0xC195823BL;
static int8_t *g_168 = &g_100;
static int8_t **g_167 = &g_168;
static uint32_t g_171 = 0x70DDB654L;
static const uint8_t g_175 = 8UL;
static uint32_t g_177 = 1UL;
static uint32_t *g_176[3] = {&g_177,&g_177,&g_177};
static int64_t g_181[6][9][4] = {{{0x91DE431997A29FEDLL,0xAA43C15C23271FE8LL,0xD0FC4F5E6F9BC801LL,(-1L)},{0xAEB2B1B5CBCDF5D2LL,1L,1L,0x40A1317D21247B8CLL},{0xCAD6C9FEA8EEED4ELL,0x4882AC582B1A140DLL,0x4882AC582B1A140DLL,0xCAD6C9FEA8EEED4ELL},{0x91DE431997A29FEDLL,0x40A1317D21247B8CLL,(-7L),0L},{0xD4F8719566CB3554LL,(-1L),(-6L),0x4EE80DCCF353F810LL},{0xC0E69535F3DCD55CLL,1L,0xD0FC4F5E6F9BC801LL,0x4EE80DCCF353F810LL},{0L,(-1L),1L,0L},{0x1B0BCF91A75F86E7LL,0x40A1317D21247B8CLL,0x5A3AA3B8C42DAAAALL,0xCAD6C9FEA8EEED4ELL},{(-1L),0x4882AC582B1A140DLL,(-1L),0x40A1317D21247B8CLL}},{{0xD0FC4F5E6F9BC801LL,1L,0x1924A4583ED9FA11LL,(-1L)},{0xC0E69535F3DCD55CLL,0xAA43C15C23271FE8LL,0x5A3AA3B8C42DAAAALL,6L},{0xCAD6C9FEA8EEED4ELL,0x66AC14BEF022BA7ALL,0xACA1152ABA5E1858LL,0xD4F8719566CB3554LL},{0L,0x40A1317D21247B8CLL,0x4882AC582B1A140DLL,1L},{0xAA43C15C23271FE8LL,5L,(-6L),5L},{5L,0x66AC14BEF022BA7ALL,0x1924A4583ED9FA11LL,0x4EE80DCCF353F810LL},{0x91DE431997A29FEDLL,0xC0E69535F3DCD55CLL,0L,(-1L)},{0x1B0BCF91A75F86E7LL,0x6CADF514A7B4A855LL,1L,0xD4F8719566CB3554LL},{0x1B0BCF91A75F86E7LL,0x4882AC582B1A140DLL,0L,0x1B0BCF91A75F86E7LL}},{{0x91DE431997A29FEDLL,0xD4F8719566CB3554LL,0x1924A4583ED9FA11LL,0L},{5L,1L,(-6L),6L},{0xAA43C15C23271FE8LL,1L,0x4882AC582B1A140DLL,0x5878EC11135B92F1LL},{0L,0x6CADF514A7B4A855LL,0xACA1152ABA5E1858LL,0L},{0xCAD6C9FEA8EEED4ELL,5L,0x5A3AA3B8C42DAAAALL,0xAEB2B1B5CBCDF5D2LL},{0xC0E69535F3DCD55CLL,0x4882AC582B1A140DLL,0x1924A4583ED9FA11LL,5L},{0xD0FC4F5E6F9BC801LL,(-1L),(-1L),(-1L)},{(-1L),(-1L),0x5A3AA3B8C42DAAAALL,0x5878EC11135B92F1LL},{0x1B0BCF91A75F86E7LL,0x66AC14BEF022BA7ALL,1L,0x40A1317D21247B8CLL}},{{0L,0xD4F8719566CB3554LL,0xD0FC4F5E6F9BC801LL,1L},{0xC0E69535F3DCD55CLL,0xD4F8719566CB3554LL,(-6L),0x40A1317D21247B8CLL},{0xD4F8719566CB3554LL,0x66AC14BEF022BA7ALL,(-7L),0x5878EC11135B92F1LL},{0x91DE431997A29FEDLL,(-1L),0x4882AC582B1A140DLL,(-1L)},{0xCAD6C9FEA8EEED4ELL,(-1L),1L,5L},{0xAEB2B1B5CBCDF5D2LL,0x4882AC582B1A140DLL,0xD0FC4F5E6F9BC801LL,0xAEB2B1B5CBCDF5D2LL},{0x91DE431997A29FEDLL,5L,(-1L),0L},{0x40A1317D21247B8CLL,0x6CADF514A7B4A855LL,0x6CADF514A7B4A855LL,0x66AC14BEF022BA7ALL},{0xD0FC4F5E6F9BC801LL,0x5A3AA3B8C42DAAAALL,0xD19084CD6FD9E37CLL,0xEE7B9A5162B35B44LL}},{{0x1308165012FDBCC2LL,1L,0x1308165012FDBCC2LL,0xD19084CD6FD9E37CLL},{(-1L),0xACA1152ABA5E1858LL,0x1B0BCF91A75F86E7LL,0x1924A4583ED9FA11LL},{0x4882AC582B1A140DLL,1L,0x9BDB73D745D28D44LL,0xACA1152ABA5E1858LL},{1L,0x91DE431997A29FEDLL,0x9BDB73D745D28D44LL,0x3E417FD6AEB38440LL},{0x4882AC582B1A140DLL,0L,0x1B0BCF91A75F86E7LL,(-1L)},{(-1L),0x502F1E5DE67BC55CLL,0x1308165012FDBCC2LL,1L},{0x1308165012FDBCC2LL,1L,0xD19084CD6FD9E37CLL,4L},{0xD0FC4F5E6F9BC801LL,0L,0x6CADF514A7B4A855LL,0xACA1152ABA5E1858LL},{0L,0x502F1E5DE67BC55CLL,0x3E417FD6AEB38440LL,0xEE7B9A5162B35B44LL}},{{0x5B8B10249FC326A3LL,0x4882AC582B1A140DLL,1L,0x3E417FD6AEB38440LL},{(-1L),1L,6L,0L},{(-7L),1L,1L,(-7L)},{0x5B8B10249FC326A3LL,0L,0x9BDB73D745D28D44LL,0xD19084CD6FD9E37CLL},{0xACA1152ABA5E1858LL,0xA001A3C860666158LL,0x6CADF514A7B4A855LL,(-1L)},{0L,0x5A3AA3B8C42DAAAALL,1L,(-1L)},{0x1308165012FDBCC2LL,0xA001A3C860666158LL,4L,0xD19084CD6FD9E37CLL},{0x1924A4583ED9FA11LL,0L,0x1B0BCF91A75F86E7LL,(-7L)},{0xD0FC4F5E6F9BC801LL,1L,0x3E417FD6AEB38440LL,0L}}};
static int64_t *g_180 = &g_181[4][1][0];
static uint64_t g_183 = 0xD7022298E17D4CA5LL;
static uint64_t g_194 = 0x823C796E06187993LL;
static uint32_t g_195[2] = {0xA24EF59AL,0xA24EF59AL};
static int32_t g_226[7] = {0xC46614FEL,0x53177069L,0x53177069L,0xC46614FEL,0x53177069L,0x53177069L,0xC46614FEL};
static uint64_t g_227 = 0xC9EB641AC3D22769LL;
static int8_t g_235 = 0x8BL;
static int16_t g_239 = (-1L);
static int64_t g_241 = 6L;
static int64_t g_242 = 6L;
static int8_t g_244 = 0x8BL;
static uint32_t g_245 = 0xEE06E931L;
static const uint64_t g_263 = 0xD8E522D616180E2ALL;
static uint32_t g_282[5] = {0x9176EC82L,0x9176EC82L,0x9176EC82L,0x9176EC82L,0x9176EC82L};
static const int32_t g_286 = 0xA2C005C3L;
static const int32_t g_288 = 0L;
static const int32_t *g_287 = &g_288;
static int32_t g_308[6][6] = {{0x02EBB47EL,0L,0x02EBB47EL,0x7611F6D5L,2L,1L},{0xE83AC69CL,0x7611F6D5L,0L,0x3CFD7DF8L,(-1L),(-1L)},{0x3CFD7DF8L,(-1L),(-1L),0x3CFD7DF8L,0L,0x7611F6D5L},{0xE83AC69CL,1L,2L,0x7611F6D5L,0x02EBB47EL,0L},{0x02EBB47EL,0L,0x74795C82L,0L,0x02EBB47EL,0L},{0L,1L,(-3L),0xDC2A12C2L,0L,2L}};
static int32_t g_321[10][7] = {{0xAAFDB7AFL,0xA44A8340L,0xFC986ED9L,0xFC986ED9L,0xA44A8340L,0xAAFDB7AFL,0L},{0L,0xFC986ED9L,9L,0L,0xFFF41DDBL,0xAAFDB7AFL,0xAAFDB7AFL},{0x0829E44BL,0xFFF41DDBL,0x19264914L,0xFFF41DDBL,0x0829E44BL,5L,0L},{0x07411C62L,0xFC986ED9L,0xAAFDB7AFL,(-1L),0x0829E44BL,0L,0x0829E44BL},{(-1L),0xA44A8340L,0xA44A8340L,(-1L),0xFFF41DDBL,(-1L),0x07411C62L},{0x07411C62L,(-1L),0xFFF41DDBL,(-1L),0xA44A8340L,0xA44A8340L,(-1L)},{0x0829E44BL,0L,0x0829E44BL,(-1L),0xAAFDB7AFL,0xFC986ED9L,0x07411C62L},{0L,5L,0x0829E44BL,0xFFF41DDBL,0x19264914L,0xFFF41DDBL,0x0829E44BL},{0xAAFDB7AFL,0xAAFDB7AFL,0xFFF41DDBL,0L,9L,0xFC986ED9L,0L},{(-1L),0xFFF41DDBL,(-1L),0xA44A8340L,0xA44A8340L,(-1L),0xFFF41DDBL}};
static uint64_t g_353 = 0x98C5AC05FD57864FLL;
static uint64_t g_354 = 18446744073709551606UL;
static uint64_t g_355 = 1UL;
static uint64_t g_356 = 0x42EC95E6251620DALL;
static uint64_t * const g_352[2][5] = {{&g_356,&g_354,&g_356,&g_354,&g_356},{&g_353,&g_353,&g_353,&g_353,&g_353}};
static uint64_t * const *g_351 = &g_352[1][1];
static uint8_t g_396 = 9UL;
static uint8_t g_402 = 7UL;
static int8_t g_405 = 0xA8L;
static uint8_t g_407 = 0xE3L;
static int32_t g_410 = 0xA0B0C248L;
static int64_t g_416 = 0x7B843FA7BD63A894LL;
static int32_t g_417[2] = {2L,2L};
static int32_t *g_489[3][9][2] = {{{&g_417[1],&g_417[1]},{&g_410,(void*)0},{(void*)0,&g_410},{&g_417[1],&g_417[1]},{&g_417[1],&g_410},{(void*)0,(void*)0},{&g_410,&g_417[1]},{&g_417[1],&g_417[1]},{&g_410,(void*)0}},{{(void*)0,&g_410},{&g_417[1],&g_417[1]},{&g_417[1],&g_410},{(void*)0,(void*)0},{&g_410,&g_417[1]},{&g_417[1],&g_417[1]},{&g_410,(void*)0},{(void*)0,&g_410},{&g_417[1],&g_417[1]}},{{&g_417[1],&g_410},{(void*)0,(void*)0},{&g_410,&g_417[1]},{&g_417[1],&g_417[1]},{&g_410,(void*)0},{(void*)0,&g_410},{&g_417[1],&g_417[1]},{&g_417[1],&g_410},{(void*)0,(void*)0}}};
static int32_t **g_488[2] = {&g_489[2][1][1],&g_489[2][1][1]};
static uint64_t ** const g_532 = (void*)0;
static uint64_t ** const *g_531 = &g_532;
static uint64_t ** const ** const g_530 = &g_531;
static uint64_t ** const **g_535[9] = {&g_531,&g_531,&g_531,&g_531,&g_531,&g_531,&g_531,&g_531,&g_531};
static int32_t g_625 = 1L;
static const int16_t g_733 = 0x33C6L;
static int16_t *g_787 = &g_239;
static int16_t **g_786 = &g_787;
static int8_t g_874[9] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
static int16_t g_876 = (-3L);
static const int64_t g_955 = (-8L);
static uint16_t g_991 = 0x2A1AL;
static uint64_t *g_1019[3] = {(void*)0,(void*)0,(void*)0};
static uint64_t **g_1018[3] = {&g_1019[2],&g_1019[2],&g_1019[2]};
static uint64_t ***g_1017 = &g_1018[0];
static int32_t *g_1207 = &g_226[4];
static int32_t **g_1206[2][2][10] = {{{&g_1207,(void*)0,(void*)0,&g_1207,(void*)0,&g_1207,(void*)0,(void*)0,&g_1207,(void*)0},{&g_1207,(void*)0,(void*)0,&g_1207,(void*)0,&g_1207,(void*)0,(void*)0,&g_1207,(void*)0}},{{&g_1207,(void*)0,(void*)0,&g_1207,(void*)0,&g_1207,(void*)0,(void*)0,&g_1207,(void*)0},{&g_1207,(void*)0,(void*)0,&g_1207,(void*)0,&g_1207,(void*)0,(void*)0,&g_1207,(void*)0}}};
static int64_t ***g_1357 = (void*)0;
static int64_t ****g_1356 = &g_1357;
static int64_t ***g_1371 = (void*)0;
static const uint64_t *g_1509 = &g_263;
static const uint64_t **g_1508[4][2][7] = {{{&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509},{&g_1509,&g_1509,(void*)0,&g_1509,&g_1509,(void*)0,&g_1509}},{{&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509},{&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509}},{{&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509},{&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509}},{{&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509},{&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509}}};
static const uint64_t **g_1510 = (void*)0;
static int32_t *g_1556 = &g_417[1];
static int8_t g_1635 = 0xFAL;
static const int16_t *g_1695[3] = {&g_146,&g_146,&g_146};
static const int16_t **g_1694 = &g_1695[0];
static const int16_t ***g_1693[3][8][1] = {{{&g_1694},{&g_1694},{&g_1694},{&g_1694},{&g_1694},{&g_1694},{&g_1694},{&g_1694}},{{&g_1694},{&g_1694},{&g_1694},{&g_1694},{&g_1694},{&g_1694},{&g_1694},{&g_1694}},{{&g_1694},{&g_1694},{&g_1694},{&g_1694},{&g_1694},{&g_1694},{&g_1694},{&g_1694}}};
static const int16_t *** const *g_1692[4][3] = {{(void*)0,(void*)0,(void*)0},{&g_1693[1][0][0],&g_1693[1][0][0],&g_1693[1][0][0]},{(void*)0,(void*)0,(void*)0},{&g_1693[1][0][0],&g_1693[1][0][0],&g_1693[1][0][0]}};
static const int16_t *** const * const *g_1691 = &g_1692[0][1];
static uint64_t g_1730 = 0x76C873EC5DC0FD7FLL;
static int16_t *g_1796 = &g_146;
static int32_t *g_1799 = &g_102;
static uint16_t g_1801 = 0xFD56L;
static int32_t g_1803[5][3] = {{(-6L),(-6L),(-6L)},{(-1L),0x0D130EA8L,(-1L)},{(-6L),(-6L),(-6L)},{(-1L),0x0D130EA8L,(-1L)},{(-6L),(-6L),(-6L)}};
static int32_t *g_1802[6][1][5] = {{{&g_1803[1][1],&g_1803[1][1],&g_1803[1][1],&g_1803[1][1],&g_1803[1][1]}},{{&g_1803[3][1],&g_1803[3][1],&g_1803[1][1],&g_1803[1][1],&g_1803[3][1]}},{{&g_1803[1][0],&g_1803[1][1],&g_1803[1][0],&g_1803[1][1],&g_1803[1][0]}},{{&g_1803[3][1],&g_1803[1][1],&g_1803[1][1],&g_1803[3][1],&g_1803[3][1]}},{{&g_1803[1][1],&g_1803[1][1],&g_1803[1][1],&g_1803[1][1],&g_1803[1][1]}},{{&g_1803[3][1],&g_1803[3][1],&g_1803[1][1],&g_1803[1][1],&g_1803[3][1]}}};
static uint64_t ****g_1856[8][1] = {{&g_1017},{&g_1017},{&g_1017},{&g_1017},{&g_1017},{&g_1017},{&g_1017},{&g_1017}};
static uint64_t *****g_1855 = &g_1856[5][0];
static uint8_t g_2076 = 1UL;
static int32_t g_2141 = 0xE18A6D46L;
static uint16_t g_2142 = 0x63F9L;
static uint64_t g_2191 = 1UL;
static uint8_t ***g_2195 = &g_95;
static uint8_t *** const *g_2194 = &g_2195;



static uint64_t func_1(void);
static int32_t * const func_2(const int32_t * p_3, int32_t p_4, uint8_t p_5, int32_t * p_6);
static int32_t * func_9(int8_t p_10, int32_t * p_11);
static int8_t func_19(int32_t p_20, uint8_t * p_21, int64_t p_22);
static uint8_t func_23(int32_t p_24, int64_t p_25);
static int32_t func_26(uint8_t * p_27, uint8_t * const p_28, uint8_t * p_29);
static uint8_t * func_31(int32_t * p_32, const int32_t * p_33, int32_t * p_34);
static const int32_t * func_36(const int32_t * p_37, uint8_t * p_38, uint16_t p_39);
static int8_t func_42(const uint8_t * p_43, uint8_t p_44, const uint8_t * p_45, const int32_t * p_46);
static const uint8_t * func_47(int16_t p_48, int32_t * p_49, uint32_t p_50, int16_t p_51, int32_t p_52);
# 140 "<stdin>"
static uint64_t func_1(void)
{
    int64_t l_14 = 0x5613717BE9FB1C03LL;
    uint8_t *l_16 = &g_17;
    int32_t l_18 = 0x67B47E0FL;
    uint16_t **l_1331[10] = {&g_133,&g_133,&g_133,&g_133,&g_133,&g_133,&g_133,&g_133,&g_133,&g_133};
    int32_t *l_1673 = &g_410;
    int32_t **l_1800 = &g_489[2][8][1];
    int32_t **l_2210 = &g_489[2][1][1];
    uint32_t l_2211 = 0xAC0FBA5BL;
    int i;
    (*l_2210) = func_2(g_7, (((*l_1800) = func_9(((safe_lshift_func_uint8_t_u_u((l_18 = ((*l_16) = (g_15[1][0][0] = l_14))), 1)) , func_19(((func_23(g_17, l_14) && (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((((-1L) | ((((l_14 , ((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((l_18 ^ (safe_mod_func_int64_t_s_s(((*g_180) ^= (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_add_func_int32_t_s_s(((safe_div_func_int16_t_s_s((((**g_786) , l_1331[7]) == l_1331[7]), (*g_787))) ^ (-1L)), l_14)) == (-1L)), (*g_787))), 1L))), l_14))) , l_14), l_18)) != (**g_167)), 0xF8L)) ^ l_18)) || (*g_787)) && (**g_167)) , l_14)) == 0x44887359L), 0x2C71686D9956234BLL)), 12)), l_18))) , 0x166E2B70L), &g_151, g_321[7][1])), l_1673)) == (void*)0), g_1801, g_1802[0][0][2]);
    return l_2211;
}







static int32_t * const func_2(const int32_t * p_3, int32_t p_4, uint8_t p_5, int32_t * p_6)
{
    int32_t ***l_1821 = &g_1206[0][0][0];
    int32_t l_1826 = 0x04E4213AL;
    int32_t l_1837 = (-1L);
    int32_t l_1838[3][9] = {{0x6E830FB6L,1L,(-1L),0x1EBC9F03L,(-5L),(-5L),0x1EBC9F03L,(-1L),1L},{(-5L),(-2L),1L,0xC15D79F4L,0x82E872FFL,1L,0x44432BFDL,0x44432BFDL,1L},{0xC15D79F4L,(-1L),0xBF513752L,(-1L),0xC15D79F4L,(-2L),(-1L),1L,0x1EBC9F03L}};
    uint64_t **** const l_1848 = (void*)0;
    int64_t *l_1941[7] = {&g_242,(void*)0,(void*)0,&g_242,(void*)0,(void*)0,&g_242};
    int8_t l_1977 = 0xCCL;
    const uint16_t *l_2001 = &g_134;
    uint32_t l_2093 = 0x9F0A9E87L;
    uint32_t l_2127 = 0x39EEE24AL;
    int8_t ***l_2130 = &g_167;
    uint16_t l_2205[9] = {0xFF2EL,65531UL,0xFF2EL,0xFF2EL,65531UL,0xFF2EL,0xFF2EL,65531UL,0xFF2EL};
    int32_t * const l_2208 = &l_1838[1][2];
    int32_t * const l_2209 = &g_1803[1][1];
    int i, j;
    for (g_402 = (-11); (g_402 >= 11); g_402++)
    {
        int32_t l_1824 = 0x2BBDAAFAL;
        int64_t **l_1825 = &g_180;
        int32_t l_1839 = 0L;
        int32_t l_1840 = (-1L);
        int32_t l_1841[7][6][3] = {{{(-4L),0x1AE2FCD4L,0xCB378E41L},{(-4L),(-1L),1L},{(-4L),0L,(-4L)},{(-4L),0x1AE2FCD4L,0xCB378E41L},{(-4L),(-1L),1L},{(-4L),0L,(-4L)}},{{(-4L),0x1AE2FCD4L,0xCB378E41L},{(-4L),(-1L),1L},{(-4L),0L,(-4L)},{(-4L),0x1AE2FCD4L,0xCB378E41L},{(-4L),(-1L),1L},{(-4L),0L,(-4L)}},{{(-4L),0x1AE2FCD4L,0xCB378E41L},{(-4L),(-1L),2L},{1L,0xCB378E41L,1L},{1L,(-4L),0xCE5981DEL},{1L,1L,2L},{1L,0xCB378E41L,1L}},{{1L,(-4L),0xCE5981DEL},{1L,1L,2L},{1L,0xCB378E41L,1L},{1L,(-4L),0xCE5981DEL},{1L,1L,2L},{1L,0xCB378E41L,1L}},{{1L,(-4L),0xCE5981DEL},{1L,1L,2L},{1L,0xCB378E41L,1L},{1L,(-4L),0xCE5981DEL},{1L,1L,2L},{1L,0xCB378E41L,1L}},{{1L,(-4L),0xCE5981DEL},{1L,1L,2L},{1L,0xCB378E41L,1L},{1L,(-4L),0xCE5981DEL},{1L,1L,2L},{1L,0xCB378E41L,1L}},{{1L,(-4L),0xCE5981DEL},{1L,1L,2L},{1L,0xCB378E41L,1L},{1L,(-4L),0xCE5981DEL},{1L,1L,2L},{1L,0xCB378E41L,1L}}};
        int32_t l_1842 = (-2L);
        uint64_t *****l_1854 = (void*)0;
        const int32_t * const *l_1859 = &g_7;
        const int32_t * const **l_1858 = &l_1859;
        uint32_t l_1863 = 0x2BED4EC7L;
        uint32_t *l_1926 = &g_171;
        const int32_t l_1944 = 0x066DB2B8L;
        int64_t l_1964 = 0x62790496CAB108CELL;
        uint64_t l_2094 = 0x60C6B045E172707FLL;
        int32_t l_2104 = 0L;
        int16_t l_2190[2];
        int32_t l_2204 = (-5L);
        uint32_t l_2207 = 0xE1005469L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2190[i] = 0xF0B1L;
        if (((*p_6) ^= (safe_mul_func_uint8_t_u_u(0xF4L, (safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s((((*g_133) < ((*g_787) = ((p_4 < (safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((0x49E4L | (p_4 ^ (!(safe_add_func_int64_t_s_s(((&g_1206[0][0][0] == l_1821) != (safe_lshift_func_uint16_t_u_u(l_1824, 13))), (l_1825 == l_1825)))))), 7)), 8UL)), p_4))) != p_5))) , 0x3CF6L), 1)), l_1824))))))
        {
            int64_t ****l_1827 = &g_1371;
            int32_t *l_1828 = &g_1803[1][1];
            int32_t *l_1829 = &g_1803[1][1];
            int32_t *l_1830 = (void*)0;
            int32_t *l_1831 = &g_1803[1][1];
            int32_t *l_1832 = &g_417[1];
            int32_t *l_1833 = (void*)0;
            int32_t *l_1834 = &g_417[1];
            int32_t *l_1835 = (void*)0;
            int32_t *l_1836[10] = {&g_1803[1][1],&g_1803[1][1],&l_1826,&g_1803[2][0],&l_1826,&g_1803[1][1],&g_1803[1][1],&l_1826,&g_1803[2][0],&l_1826};
            uint32_t l_1843 = 0x2C8E5684L;
            uint32_t l_1857 = 0x12F6A317L;
            int i;
            (*p_6) = (l_1826 == ((-1L) | ((**l_1825) = ((g_1356 = l_1827) == (void*)0))));
            for (g_17 = 0; (g_17 <= 5); g_17 += 1)
            {
                if ((*g_1799))
                    break;
            }
            ++l_1843;
            (*g_1799) = ((65532UL <= (safe_sub_func_int64_t_s_s(l_1841[3][4][0], (l_1839 |= ((((**g_786) = ((void*)0 == &g_95)) , l_1848) != ((!(&g_488[1] == ((((l_1840 != (l_1837 = (*g_180))) & (safe_mul_func_uint8_t_u_u(((((((g_1855 = l_1854) == &g_535[0]) && p_4) || l_1841[5][1][0]) , l_1857) == (*p_3)), 0UL))) || 0x1E2B3FB8C42AFACELL) , l_1858))) , &g_1017)))))) ^ (***l_1858));
        }
        else
        {
            int32_t *l_1860 = &g_1803[1][1];
            int32_t *l_1861 = (void*)0;
            int32_t *l_1862[6] = {&l_1837,&l_1837,&l_1837,&l_1837,&l_1837,&l_1837};
            int i;
            p_4 = ((*p_6) = l_1837);
            ++l_1863;
            (*g_1799) = (safe_sub_func_uint64_t_u_u((**l_1859), ((*p_3) , (((void*)0 == &p_3) <= 0L))));
            return l_1861;
        }
        for (p_5 = (-7); (p_5 >= 23); ++p_5)
        {
            int8_t *l_1897[10] = {&g_1635,&g_100,&g_132,&g_132,&g_100,&g_1635,&g_100,&g_132,&g_132,&g_100};
            int32_t *l_1909 = &g_410;
            int32_t *l_1910 = &l_1838[1][2];
            int32_t *l_1911 = (void*)0;
            int32_t *l_1912 = &g_410;
            int32_t *l_1913 = &l_1841[5][1][0];
            int32_t *l_1914 = (void*)0;
            int32_t *l_1915 = &g_1803[1][1];
            int32_t *l_1916[8][4] = {{(void*)0,(void*)0,(void*)0,&l_1841[6][0][2]},{&l_1839,(void*)0,(void*)0,&l_1839},{(void*)0,&l_1839,(void*)0,&l_1841[5][1][0]},{(void*)0,(void*)0,(void*)0,(void*)0},{&l_1839,&l_1841[5][1][0],(void*)0,(void*)0},{(void*)0,(void*)0,&l_1841[6][0][2],&l_1841[5][1][0]},{&l_1841[5][1][0],&l_1839,&l_1841[6][0][2],&l_1839},{(void*)0,(void*)0,(void*)0,&l_1841[6][0][2]}};
            uint64_t l_1917 = 0x3C062FC6BBA6F436LL;
            int i, j;
            for (g_177 = 0; (g_177 == 27); g_177 = safe_add_func_int16_t_s_s(g_177, 1))
            {
                uint32_t l_1881 = 0x6BA0B813L;
                int32_t **l_1906 = &g_1207;
                int32_t * const l_1908 = &g_625;
                for (g_132 = (-12); (g_132 == (-5)); g_132 = safe_add_func_int32_t_s_s(g_132, 5))
                {
                    uint64_t l_1896 = 0x9F7129BDE49A1763LL;
                    for (l_1840 = 15; (l_1840 == (-10)); l_1840--)
                    {
                        uint16_t l_1878 = 0xFDCBL;
                        l_1878++;
                    }
                    l_1881++;
                    for (l_1824 = 1; (l_1824 >= 0); l_1824 -= 1)
                    {
                        uint32_t *l_1895 = &g_139;
                        int i;
                        (*p_6) = (g_417[l_1824] = ((-7L) == (g_417[l_1824] , (safe_sub_func_int64_t_s_s(((((1L | ((0x45364A71E6546415LL ^ 0xE3AF1E2D336230B0LL) ^ (g_417[l_1824] < ((*g_167) != (((0xADL > (((*g_787) = ((safe_sub_func_uint8_t_u_u(((((*g_133) |= (~((*l_1895) ^= (safe_rshift_func_uint8_t_u_s(p_5, p_4))))) <= l_1896) < (*g_96)), 0UL)) > (***l_1858))) < 0UL)) > 0xC539CAAA70F5FE65LL) , l_1897[2]))))) , 0xE753L) & (-1L)) != 0xF85FL), p_4)))));
                        g_417[l_1824] &= ((*g_7) && (*p_6));
                    }
                }
                for (l_1837 = (-11); (l_1837 <= 11); l_1837++)
                {
                    (*g_1799) ^= (safe_mul_func_int8_t_s_s((**g_167), l_1826));
                }
                for (g_241 = 0; (g_241 >= (-21)); g_241 = safe_sub_func_uint32_t_u_u(g_241, 8))
                {
                    int32_t * const l_1907 = &l_1837;
                    (*p_6) = (255UL > (p_4 && (((*l_1821) = l_1906) != (void*)0)));
                    return l_1908;
                }
            }
            l_1917++;
        }
        if ((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((--(*l_1926)) > 0xA8A4256CL), (0xCEB4L ^ (+((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(((safe_add_func_int32_t_s_s((*p_3), (p_4 == ((safe_unary_minus_func_int16_t_s((((l_1941[3] != (void*)0) && (65535UL == (p_5 < ((safe_sub_func_uint64_t_u_u(l_1944, (**l_1859))) != 4294967291UL)))) , p_4))) ^ (*g_168))))) & 0xCDB6089F9D5E50BELL), p_5)), 0x3C47154CL)) , p_5), (*g_96))), 5)) ^ (*p_6)))))), (*g_133))), 4)))
        {
            if ((*p_6))
                break;
        }
        else
        {
            int32_t **l_1945 = &g_1556;
            const int32_t **l_1946[7] = {&g_287,&g_287,(void*)0,&g_287,&g_287,(void*)0,&g_287};
            const int32_t **l_1947[3];
            uint16_t l_1979 = 0UL;
            uint64_t *l_1993[10][3][1] = {{{&g_194},{&g_353},{(void*)0}},{{(void*)0},{&g_353},{&g_194}},{{(void*)0},{&g_353},{(void*)0}},{{&g_194},{&g_353},{(void*)0}},{{(void*)0},{&g_353},{&g_194}},{{(void*)0},{&g_353},{(void*)0}},{{&g_194},{&g_353},{(void*)0}},{{(void*)0},{&g_353},{&g_194}},{{(void*)0},{&g_353},{(void*)0}},{{&g_194},{&g_353},{(void*)0}}};
            uint16_t *l_2000[7] = {&g_126,(void*)0,(void*)0,&g_126,(void*)0,(void*)0,&g_126};
            int8_t l_2023 = 3L;
            int32_t l_2073[9][1] = {{0x95B915F7L},{(-1L)},{(-1L)},{0x95B915F7L},{0x95B915F7L},{0x95B915F7L},{3L},{0x95B915F7L},{0x95B915F7L}};
            int32_t *l_2096 = &l_1841[5][2][0];
            int32_t l_2107 = 1L;
            uint16_t l_2108 = 6UL;
            int32_t l_2189[3][10] = {{0x839B853AL,0x252B811CL,5L,0L,5L,0x252B811CL,0x839B853AL,0x839B853AL,0x252B811CL,5L},{0x252B811CL,0x839B853AL,0x839B853AL,0x252B811CL,5L,0L,5L,0x252B811CL,0x839B853AL,0x839B853AL},{5L,0x839B853AL,3L,0L,0L,3L,0x839B853AL,5L,0x839B853AL,3L}};
            uint32_t *l_2206[2];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1947[i] = &g_7;
            for (i = 0; i < 2; i++)
                l_2206[i] = &g_195[1];
            (*l_1945) = func_9((*g_168), &p_4);
            g_7 = (*l_1859);
            for (l_1842 = 0; (l_1842 >= (-9)); l_1842--)
            {
                int32_t l_1965 = 1L;
                int32_t l_1976 = 0x25C2EFCDL;
                int32_t l_1978 = 0x8C5A361EL;
                uint16_t *l_1999 = &l_1979;
                int16_t ***l_2011 = &g_786;
                int16_t ****l_2010 = &l_2011;
                int16_t *****l_2009 = &l_2010;
                int32_t l_2074 = 0x47BED265L;
                int32_t l_2075 = 0L;
                int64_t l_2095 = 0xBB93CCABF06CFF21LL;
                int32_t l_2103 = 0L;
                int32_t l_2105 = 0x380DC62AL;
                int32_t l_2106 = 0L;
                uint32_t l_2163 = 4UL;
            }
            (*l_2096) = ((g_2194 == (void*)0) ^ (safe_add_func_uint16_t_u_u(((((((l_2207 = ((safe_div_func_uint16_t_u_u((0x7AL == ((l_1826 = p_5) || p_4)), ((g_405 , ((safe_sub_func_int8_t_s_s(p_5, (safe_div_func_int32_t_s_s(((((*p_6) = (1UL | 65528UL)) ^ 0L) & (***l_1858)), p_4)))) < 0UL)) , l_2204))) , l_2205[8])) , 0L) >= p_5) != l_2205[4]) <= (**l_1859)) != (*l_2096)), 0xC42EL)));
        }
    }
    (*p_6) |= ((l_1826 &= p_4) < l_2205[8]);
    (*g_530) = (*g_530);
    return l_2209;
}







static int32_t * func_9(int8_t p_10, int32_t * p_11)
{
    uint64_t *l_1681 = &g_183;
    const int32_t l_1700 = 6L;
    uint64_t l_1732 = 0xEE54B557B28CF542LL;
    uint16_t l_1733 = 0xF387L;
    const int32_t *l_1736 = (void*)0;
    int32_t l_1743[2];
    int32_t l_1750[10] = {1L,4L,1L,1L,4L,1L,1L,4L,1L,1L};
    int16_t *** const l_1791 = &g_786;
    int16_t *** const *l_1790 = &l_1791;
    uint32_t *l_1792[3][4][1] = {{{&g_245},{(void*)0},{&g_139},{(void*)0}},{{&g_245},{(void*)0},{&g_245},{(void*)0}},{{&g_139},{(void*)0},{&g_245},{(void*)0}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1743[i] = 0xABF38C1EL;
    if ((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_uint8_t_u_u(((l_1681 != l_1681) ^ (safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((*g_168) <= p_10), ((safe_sub_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s(p_10)) <= (safe_sub_func_uint32_t_u_u(p_10, (g_1691 == (((*p_11) = (safe_lshift_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((l_1700 , ((safe_sub_func_uint64_t_u_u(((void*)0 != &g_96), p_10)) <= p_10)), l_1700)) | 9L) < p_10), p_10))) , (void*)0))))), (*g_96))) | l_1700))), p_10))), 1)) | 0UL))), p_10)))
    {
        int64_t ****l_1726 = &g_1371;
        int32_t l_1727 = 0xF80AFFAEL;
        uint16_t *l_1728 = (void*)0;
        uint16_t *l_1729[9][10] = {{&g_991,(void*)0,(void*)0,&g_126,&g_126,(void*)0,(void*)0,&g_126,&g_126,(void*)0},{&g_126,&g_126,&g_126,(void*)0,(void*)0,(void*)0,&g_991,&g_126,(void*)0,&g_126},{&g_991,&g_991,&g_991,(void*)0,&g_991,&g_126,&g_991,&g_126,&g_126,(void*)0},{&g_991,&g_126,&g_991,&g_126,&g_126,&g_991,(void*)0,&g_126,&g_126,&g_991},{&g_991,(void*)0,&g_126,(void*)0,&g_991,(void*)0,&g_126,&g_126,&g_126,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_126,&g_991,&g_991,&g_126},{(void*)0,(void*)0,&g_126,&g_991,&g_126,&g_126,&g_991,&g_991,(void*)0,&g_126},{&g_991,&g_991,&g_126,&g_991,(void*)0,&g_991,&g_126,&g_126,&g_126,(void*)0},{&g_126,&g_991,(void*)0,&g_991,&g_991,&g_126,&g_991,(void*)0,&g_991,&g_991}};
        int8_t *l_1731 = &g_874[2];
        int32_t ***l_1734 = (void*)0;
        uint32_t l_1735 = 0UL;
        const int32_t l_1753[7] = {1L,1L,1L,1L,1L,1L,1L};
        int i, j;
        l_1735 |= ((safe_add_func_int64_t_s_s(0x4B5CF7B723420992LL, ((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u((p_10 , (((((((((safe_div_func_int8_t_s_s((((((*l_1731) = (((!((safe_mul_func_uint8_t_u_u(((l_1700 == (((safe_div_func_int32_t_s_s(((((((g_1730 ^= (safe_rshift_func_uint16_t_u_s(((*g_133) = (&l_1681 != ((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((**g_167) = (((((-1L) & (safe_div_func_int8_t_s_s((!((+(*p_11)) & (((((void*)0 != l_1726) , (p_10 != 0xA5L)) > 0xF86A723E0450E2D6LL) <= p_10))), p_10))) | l_1700) <= (-1L)) < 7UL)), 5)), l_1727)) , (void*)0))), 5))) , p_10) ^ 250UL) >= p_10) & 0x616AL) == p_10), (*p_11))) , 0x12C04C2DL) , 0L)) , 0x77L), 0x16L)) || 7UL)) , l_1700) ^ p_10)) == p_10) || l_1700) != l_1732), 0xA2L)) >= l_1732) <= l_1733) , l_1734) == &g_1206[0][0][0]) || (*p_11)) == 0x7491BA45L) , (*g_133)) == g_407)), 0x39E1L)) ^ l_1732), p_10)) < l_1700))) != 0xA97CAEF1L);
        l_1736 = func_36(func_36(l_1736, (p_10 , &g_402), (++(*g_133))), &g_396, (l_1727 = (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((l_1743[0] = p_10) == (safe_unary_minus_func_int64_t_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((l_1750[6] = (!1L)), 13)), (safe_rshift_func_int8_t_s_u(l_1753[3], 3))))))), (*g_96))), p_10))));
    }
    else
    {
        int8_t l_1754 = 0x78L;
        int32_t *l_1755 = &l_1743[0];
        int32_t *l_1756 = &g_102;
        int32_t l_1757 = 0x669F1EEBL;
        int32_t *l_1758 = &g_625;
        int32_t *l_1759 = &l_1750[6];
        int32_t *l_1760 = &g_410;
        int32_t *l_1761 = &g_625;
        int32_t *l_1762 = &l_1750[6];
        int32_t *l_1763 = &l_1743[0];
        int32_t *l_1764 = &l_1750[8];
        int32_t *l_1765 = &l_1757;
        int32_t *l_1766 = &g_410;
        int32_t *l_1767 = &l_1750[0];
        int32_t *l_1768 = &g_410;
        int32_t *l_1769 = (void*)0;
        int32_t *l_1770 = &g_410;
        int32_t *l_1771[8][1] = {{(void*)0},{&g_417[1]},{(void*)0},{(void*)0},{&g_417[1]},{(void*)0},{(void*)0},{&g_417[1]}};
        uint16_t l_1772 = 65535UL;
        int i, j;
        l_1772++;
    }
    (*p_11) = ((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(((void*)0 == &l_1681), (safe_sub_func_int32_t_s_s((*p_11), ((p_10 ^ 0xB8L) == (safe_rshift_func_uint16_t_u_s(p_10, (l_1743[0] = ((((safe_mod_func_uint32_t_u_u((l_1750[6] = ((((((**g_786) = 1L) , (~(p_10 || ((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((void*)0 == l_1790), (*g_96))), p_10)) >= 3L)))) == l_1700) , 0x4AF6L) && 2L)), p_10)) > p_10) , p_10) , 8L))))))))), l_1733)) | 0x4D491D1900B7C393LL);
    for (g_1635 = 0; (g_1635 >= (-20)); g_1635 = safe_sub_func_int16_t_s_s(g_1635, 5))
    {
        int16_t l_1795 = 3L;
        (*p_11) = (l_1795 < (((*g_786) = (*g_786)) == (g_1796 = &g_146)));
        for (g_134 = 0; (g_134 <= 27); ++g_134)
        {
            return p_11;
        }
    }
    return g_1799;
}







static int8_t func_19(int32_t p_20, uint8_t * p_21, int64_t p_22)
{
    uint32_t *l_1332[8];
    int32_t l_1333 = 0xA9530A03L;
    int32_t l_1334[3][8] = {{0x5CB673FEL,0x2BFFD236L,(-1L),0x889703A6L,(-10L),0x656188F8L,(-10L),0x889703A6L},{9L,0xD90332DBL,9L,0xE20A4168L,0x889703A6L,0x656188F8L,(-1L),(-1L)},{(-1L),0x2BFFD236L,0x5CB673FEL,0x5CB673FEL,0x2BFFD236L,(-1L),0x889703A6L,(-10L)}};
    uint16_t l_1335 = 0xCFBCL;
    int32_t *l_1350 = &g_102;
    int64_t ****l_1360 = &g_1357;
    int32_t l_1392 = (-1L);
    uint8_t l_1393 = 248UL;
    int64_t *l_1396 = (void*)0;
    int32_t l_1406 = 0xA1C7EBDDL;
    int32_t ***l_1411 = (void*)0;
    const uint64_t ***l_1421 = (void*)0;
    const uint64_t ****l_1420[9][10][2] = {{{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,(void*)0},{&l_1421,(void*)0},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421},{(void*)0,&l_1421},{(void*)0,&l_1421}},{{(void*)0,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,(void*)0},{&l_1421,(void*)0},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,(void*)0},{&l_1421,&l_1421},{&l_1421,&l_1421}},{{&l_1421,(void*)0},{&l_1421,(void*)0},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421},{(void*)0,&l_1421},{(void*)0,&l_1421},{(void*)0,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421}},{{&l_1421,(void*)0},{&l_1421,(void*)0},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,(void*)0},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,(void*)0},{&l_1421,(void*)0},{&l_1421,&l_1421}},{{&l_1421,&l_1421},{&l_1421,&l_1421},{(void*)0,&l_1421},{(void*)0,&l_1421},{(void*)0,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,(void*)0},{&l_1421,(void*)0},{&l_1421,&l_1421}},{{&l_1421,&l_1421},{&l_1421,(void*)0},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,(void*)0},{&l_1421,(void*)0},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421},{(void*)0,&l_1421}},{{(void*)0,&l_1421},{(void*)0,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,(void*)0},{&l_1421,(void*)0},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,(void*)0},{&l_1421,&l_1421}},{{&l_1421,&l_1421},{&l_1421,(void*)0},{&l_1421,(void*)0},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421},{(void*)0,&l_1421},{(void*)0,&l_1421},{(void*)0,&l_1421},{&l_1421,&l_1421}},{{&l_1421,&l_1421},{&l_1421,(void*)0},{&l_1421,(void*)0},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,(void*)0},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,(void*)0},{&l_1421,(void*)0}}};
    const uint64_t ***** const l_1419 = &l_1420[4][6][1];
    uint16_t l_1459 = 0x266AL;
    int64_t ** const l_1472 = &g_180;
    uint8_t * const *l_1479 = &g_96;
    uint8_t * const **l_1478 = &l_1479;
    int16_t **l_1632 = (void*)0;
    int64_t **l_1666 = &l_1396;
    int32_t l_1672 = (-4L);
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_1332[i] = &g_245;
    if (((*l_1350) &= (((l_1335++) >= (l_1334[0][6] > (*g_180))) <= (safe_sub_func_int64_t_s_s((safe_sub_func_int32_t_s_s((((safe_add_func_int16_t_s_s((**g_786), p_22)) , ((((((*g_787) = 0x404AL) <= (safe_add_func_int64_t_s_s(((((l_1333 ^ p_22) & 0x03L) > (((((((*p_21) = ((safe_div_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u(l_1334[0][7], (*g_180))) == 1UL), p_22)) >= (**g_167))) < (*g_168)) > 0xFA4D3F6B4B592CABLL) == p_20) | p_20) || 1UL)) == l_1334[0][7]), 0xAF533D6781BCDA5CLL))) ^ p_22) > l_1334[0][7]) | l_1334[0][3])) , l_1334[0][7]), p_20)), p_22)))))
    {
        const uint16_t l_1353 = 0x63A6L;
        int64_t *****l_1358[10] = {&g_1356,&g_1356,&g_1356,&g_1356,&g_1356,&g_1356,&g_1356,&g_1356,&g_1356,&g_1356};
        int64_t ****l_1359 = &g_1357;
        uint8_t ***l_1364 = &g_95;
        uint8_t ****l_1363 = &l_1364;
        uint8_t ***l_1366 = &g_95;
        uint8_t ****l_1365 = &l_1366;
        uint16_t *l_1367 = &g_126;
        int32_t *l_1368 = &l_1334[0][1];
        const uint16_t l_1374 = 65532UL;
        const int32_t **l_1375 = &g_287;
        int32_t *l_1376 = &l_1334[0][7];
        int32_t *l_1377 = &g_417[0];
        int32_t *l_1378 = &g_410;
        int32_t *l_1379 = &l_1333;
        int32_t *l_1380 = &l_1334[1][7];
        int32_t *l_1381 = (void*)0;
        int32_t *l_1382 = &g_102;
        int32_t *l_1383 = &g_625;
        int32_t *l_1384 = (void*)0;
        int32_t *l_1385 = &l_1333;
        int32_t *l_1386 = &l_1333;
        int32_t *l_1387 = &g_625;
        int32_t *l_1388 = &g_625;
        int32_t l_1389 = 0L;
        int32_t *l_1390[2][8][4] = {{{&g_417[1],&g_625,&g_625,&g_417[1]},{&g_417[1],&g_625,&g_417[1],&l_1333},{&g_417[1],&g_625,&l_1389,&g_417[1]},{&g_417[1],&g_417[1],&g_417[1],&g_417[1]},{&l_1333,&g_625,&g_417[1],&l_1333},{&g_417[1],&g_625,&l_1389,&g_417[1]},{&g_417[1],&g_417[1],&g_417[1],&g_417[1]},{&l_1333,&g_625,&g_417[1],&l_1333}},{{&g_417[1],&g_625,&l_1389,&g_417[1]},{&g_417[1],&g_417[1],&g_417[1],&g_417[1]},{&l_1333,&g_625,&g_417[1],&l_1333},{&g_417[1],&g_625,&l_1389,&g_417[1]},{&g_417[1],&g_417[1],&g_417[1],&g_417[1]},{&l_1333,&g_625,&g_417[1],&l_1333},{&g_417[1],&g_625,&l_1389,&g_417[1]},{&g_417[1],&g_417[1],&g_417[1],&g_417[1]}}};
        int16_t l_1391 = 0x1A55L;
        int i, j, k;
        (*l_1368) |= (0xD001L < ((*l_1367) |= ((safe_div_func_uint8_t_u_u((*l_1350), l_1353)) >= ((safe_lshift_func_int16_t_s_u(((((l_1360 = (l_1359 = g_1356)) != (((0x725618DDL > (((*g_133) ^ (safe_rshift_func_int8_t_s_u(((((*l_1363) = &g_95) != ((*l_1365) = &g_95)) || ((*p_21) > (*p_21))), 1))) > 0xEDC2L)) == 0xBE6E6323092BBC4BLL) , &g_1357)) , &p_22) == (void*)0), 5)) && 0x7FL))));
        (*l_1375) = func_36((g_287 = l_1368), p_21, (safe_add_func_int8_t_s_s((((*l_1359) = (*g_1356)) == g_1371), ((((*p_21) ^= (*g_96)) <= (p_20 && ((*l_1368) < (-1L)))) < ((((**g_786) = (((*l_1350) |= ((safe_lshift_func_uint16_t_u_s(((void*)0 == p_21), 10)) > (*g_96))) == p_20)) , 0L) || l_1374)))));
        --l_1393;
    }
    else
    {
        int64_t *****l_1397 = &l_1360;
        int32_t *l_1404 = (void*)0;
        int32_t *l_1405 = &g_417[1];
        uint16_t **l_1432 = &g_133;
        int32_t l_1440 = 0x88E03B6AL;
        int32_t l_1446[5][5] = {{0x63611B33L,0x6FD93EBAL,0x63611B33L,0x63611B33L,0x6FD93EBAL},{(-5L),(-1L),(-1L),(-5L),(-1L)},{0x6FD93EBAL,0x6FD93EBAL,0x4ED0AC5CL,0x6FD93EBAL,0x6FD93EBAL},{(-1L),(-5L),(-1L),(-1L),(-5L)},{0x6FD93EBAL,0x63611B33L,0x63611B33L,0x6FD93EBAL,0x63611B33L}};
        uint8_t l_1449 = 249UL;
        uint8_t * const l_1460 = &g_149;
        int16_t **l_1463 = &g_787;
        int32_t ***l_1477 = &g_1206[0][0][9];
        int32_t *l_1482 = &g_417[1];
        uint16_t l_1592 = 0xD897L;
        int32_t l_1623 = 0x0958C1A6L;
        int64_t **l_1667 = &l_1396;
        int i, j;
        if ((l_1396 != ((((((**g_786) = ((void*)0 != l_1397)) < (safe_div_func_int64_t_s_s(p_20, ((((*l_1405) = ((((*l_1350) = (((safe_lshift_func_uint16_t_u_s(((1L < (((((*g_133) >= ((0xCF342D3C4E0329BELL <= (safe_sub_func_int64_t_s_s(((*l_1350) < (-1L)), (*l_1350)))) , (*l_1350))) <= (*p_21)) ^ 1UL) >= 4L)) & (*l_1350)), p_22)) == p_20) > 0x73EB0C7571A52144LL)) && 1UL) && (*l_1350))) & l_1406) , p_22)))) , 65535UL) >= p_22) , (void*)0)))
        {
            int32_t ***l_1412 = &g_488[1];
            const int32_t *l_1415 = (void*)0;
            uint16_t **l_1433 = (void*)0;
            int32_t l_1441 = (-1L);
            int32_t l_1444 = 1L;
            int64_t **l_1471 = &g_180;
            const uint64_t *l_1507 = &g_227;
            const uint64_t **l_1506[5][5][9] = {{{&l_1507,&l_1507,&l_1507,(void*)0,&l_1507,&l_1507,&l_1507,(void*)0,&l_1507},{&l_1507,&l_1507,&l_1507,&l_1507,(void*)0,&l_1507,&l_1507,(void*)0,&l_1507},{(void*)0,&l_1507,&l_1507,(void*)0,&l_1507,&l_1507,&l_1507,&l_1507,&l_1507},{&l_1507,(void*)0,&l_1507,&l_1507,&l_1507,&l_1507,(void*)0,(void*)0,&l_1507},{&l_1507,(void*)0,&l_1507,(void*)0,&l_1507,&l_1507,&l_1507,(void*)0,&l_1507}},{{(void*)0,&l_1507,&l_1507,&l_1507,&l_1507,&l_1507,&l_1507,&l_1507,&l_1507},{&l_1507,&l_1507,&l_1507,(void*)0,&l_1507,&l_1507,&l_1507,(void*)0,&l_1507},{&l_1507,&l_1507,&l_1507,(void*)0,(void*)0,&l_1507,&l_1507,&l_1507,&l_1507},{(void*)0,(void*)0,&l_1507,&l_1507,&l_1507,&l_1507,&l_1507,(void*)0,&l_1507},{&l_1507,(void*)0,&l_1507,(void*)0,&l_1507,&l_1507,(void*)0,&l_1507,&l_1507}},{{&l_1507,&l_1507,&l_1507,(void*)0,&l_1507,&l_1507,&l_1507,(void*)0,&l_1507},{&l_1507,&l_1507,&l_1507,&l_1507,(void*)0,&l_1507,&l_1507,(void*)0,&l_1507},{&l_1507,&l_1507,&l_1507,&l_1507,&l_1507,(void*)0,&l_1507,&l_1507,(void*)0},{&l_1507,&l_1507,&l_1507,&l_1507,(void*)0,&l_1507,&l_1507,&l_1507,&l_1507},{(void*)0,&l_1507,&l_1507,&l_1507,(void*)0,(void*)0,&l_1507,&l_1507,(void*)0}},{{&l_1507,(void*)0,&l_1507,&l_1507,(void*)0,&l_1507,(void*)0,&l_1507,&l_1507},{(void*)0,&l_1507,(void*)0,&l_1507,&l_1507,(void*)0,(void*)0,&l_1507,&l_1507},{&l_1507,(void*)0,&l_1507,&l_1507,&l_1507,&l_1507,(void*)0,&l_1507,&l_1507},{&l_1507,&l_1507,(void*)0,&l_1507,&l_1507,(void*)0,&l_1507,&l_1507,&l_1507},{&l_1507,&l_1507,&l_1507,&l_1507,&l_1507,(void*)0,&l_1507,&l_1507,&l_1507}},{{&l_1507,&l_1507,&l_1507,&l_1507,&l_1507,&l_1507,&l_1507,&l_1507,&l_1507},{&l_1507,&l_1507,&l_1507,&l_1507,&l_1507,(void*)0,&l_1507,&l_1507,&l_1507},{&l_1507,&l_1507,&l_1507,&l_1507,&l_1507,(void*)0,&l_1507,&l_1507,(void*)0},{&l_1507,&l_1507,&l_1507,&l_1507,(void*)0,&l_1507,&l_1507,&l_1507,&l_1507},{(void*)0,&l_1507,&l_1507,&l_1507,(void*)0,(void*)0,&l_1507,&l_1507,(void*)0}}};
            int i, j, k;
            for (g_139 = 0; (g_139 != 60); g_139 = safe_add_func_int8_t_s_s(g_139, 2))
            {
                uint8_t l_1413 = 0UL;
                const int32_t **l_1414[4][3] = {{(void*)0,(void*)0,&g_287},{(void*)0,(void*)0,&g_287},{(void*)0,(void*)0,&g_287},{(void*)0,(void*)0,&g_287}};
                int32_t l_1445 = 0L;
                int32_t l_1447 = (-9L);
                int32_t l_1448[10] = {0xF4FF6763L,0xF4FF6763L,0xF4FF6763L,0xF4FF6763L,0xF4FF6763L,0xF4FF6763L,0xF4FF6763L,0xF4FF6763L,0xF4FF6763L,0xF4FF6763L};
                const uint8_t *l_1462[6][8][2];
                const uint8_t **l_1461 = &l_1462[0][4][0];
                int8_t *l_1464[1];
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 8; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_1462[i][j][k] = &g_175;
                    }
                }
                for (i = 0; i < 1; i++)
                    l_1464[i] = &g_244;
                l_1415 = func_36(((safe_sub_func_int64_t_s_s((*g_180), ((l_1411 == ((*l_1405) , l_1412)) <= (p_20 , (**g_167))))) , func_36((**l_1412), p_21, (*l_1350))), p_21, l_1413);
                for (g_146 = (-2); (g_146 > (-8)); --g_146)
                {
                    const int64_t *l_1427[7];
                    const int64_t **l_1426 = &l_1427[0];
                    const int64_t ***l_1425 = &l_1426;
                    const int64_t ****l_1424 = &l_1425;
                    uint32_t l_1434 = 0UL;
                    int32_t *l_1435 = &g_625;
                    int32_t l_1442 = 0L;
                    int32_t l_1443[6][4][8] = {{{0x99927F93L,0xB7BEE999L,0x27E2A620L,0x2D39B4D3L,0x71D64DC9L,0x70F4D87DL,0xD6C749DCL,0xD6C749DCL},{0x99927F93L,0xD6C749DCL,0xB79DEAA3L,0xB79DEAA3L,0xD6C749DCL,0x99927F93L,0x3188BC4CL,0x04F38325L},{0xB7BEE999L,4L,0x70F4D87DL,0x3188BC4CL,0x27E2A620L,1L,3L,0xC406EE64L},{0x71D64DC9L,0x04F38325L,1L,0x3188BC4CL,(-1L),0x3188BC4CL,1L,0x04F38325L}},{{3L,(-1L),0x2D39B4D3L,0xB79DEAA3L,0xC406EE64L,0xAF63624CL,0x71D64DC9L,0xD6C749DCL},{0xB79DEAA3L,0x0A67BA47L,0x04F38325L,0x2D39B4D3L,3L,0x71D64DC9L,0x71D64DC9L,3L},{0xAF63624CL,0x2D39B4D3L,(-1L),0xB7BEE999L,4L,0x70F4D87DL,0x3188BC4CL,0x27E2A620L},{4L,0x70F4D87DL,0x3188BC4CL,0x27E2A620L,1L,3L,0xC406EE64L,0x99927F93L}},{{0x0A67BA47L,0x70F4D87DL,0x04F38325L,0xB79DEAA3L,0x04F38325L,0x70F4D87DL,0x0A67BA47L,0xAF63624CL},{0x71D64DC9L,(-1L),0xAF63624CL,0x70F4D87DL,0xB7BEE999L,1L,0x68A1E99FL,0x2D39B4D3L},{0x2D39B4D3L,0x99927F93L,0xB79DEAA3L,1L,0xB7BEE999L,0xB7BEE999L,1L,0xB79DEAA3L},{0x71D64DC9L,0x71D64DC9L,3L,0x2D39B4D3L,0x04F38325L,0x0A67BA47L,0xB79DEAA3L,0x3188BC4CL}},{{0x0A67BA47L,4L,0x71D64DC9L,0x04F38325L,1L,0x3188BC4CL,(-1L),0x3188BC4CL},{4L,0x2D39B4D3L,0xB7BEE999L,0x2D39B4D3L,4L,0x27E2A620L,3L,0xB79DEAA3L},{0xB7BEE999L,0x68A1E99FL,0x99927F93L,1L,0xC406EE64L,0x04F38325L,0xAF63624CL,0x2D39B4D3L},{0xAF63624CL,3L,0x99927F93L,0x70F4D87DL,0x70F4D87DL,0x99927F93L,3L,0xAF63624CL}},{{0xC406EE64L,0x0A67BA47L,0xB7BEE999L,0xB79DEAA3L,0x71D64DC9L,0x68A1E99FL,(-1L),0x99927F93L},{1L,1L,0x71D64DC9L,0x27E2A620L,0xB79DEAA3L,0x68A1E99FL,0xB79DEAA3L,0x27E2A620L},{3L,0x0A67BA47L,3L,0xB7BEE999L,0x68A1E99FL,0x99927F93L,1L,0xC406EE64L},{0x27E2A620L,3L,0xB79DEAA3L,(-1L),1L,0x04F38325L,0x68A1E99FL,0x68A1E99FL}},{{0x27E2A620L,0x68A1E99FL,0xAF63624CL,0xAF63624CL,0x68A1E99FL,0x27E2A620L,0x0A67BA47L,4L},{3L,0x2D39B4D3L,0x04F38325L,0x0A67BA47L,0xB79DEAA3L,0x3188BC4CL,0xC406EE64L,0x70F4D87DL},{1L,4L,0x3188BC4CL,0x0A67BA47L,0x71D64DC9L,0x0A67BA47L,0x3188BC4CL,4L},{0xC406EE64L,0x71D64DC9L,(-1L),0xAF63624CL,0x70F4D87DL,0xB7BEE999L,1L,0x68A1E99FL}}};
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_1427[i] = &g_955;
                    (*l_1435) |= (0x487C17F4L != ((~((void*)0 == l_1404)) != ((((p_22 , l_1419) == ((safe_mod_func_int32_t_s_s((((((*l_1424) = (void*)0) != (((*g_168) < (safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((((p_20 , l_1432) == l_1433) , (*l_1405)), (*l_1350))), 0x9BF304C1L))) , (*l_1360))) , 0x8965L) != p_22), l_1434)) , &g_535[0])) , 6L) < p_22)));
                    for (l_1392 = 0; (l_1392 > (-15)); --l_1392)
                    {
                        int32_t *l_1438 = &l_1333;
                        int32_t *l_1439[10][5] = {{&l_1334[0][7],&g_625,&l_1392,&g_625,&g_625},{&g_410,&g_417[1],&g_410,&g_417[1],&g_410},{&l_1334[0][7],&g_625,&g_625,&g_625,&g_625},{(void*)0,&g_417[1],&g_417[1],&g_417[1],(void*)0},{&g_625,&g_625,&g_625,&g_625,&l_1334[0][7]},{&g_410,&g_417[1],&g_410,&g_417[1],&g_410},{&g_625,&g_625,&l_1392,&g_625,&l_1334[0][7]},{(void*)0,&g_417[1],&g_417[1],&g_417[1],(void*)0},{&l_1334[0][7],&g_625,&l_1392,&g_625,&g_625},{&g_410,&g_417[1],&g_410,&g_417[1],&g_410}};
                        int i, j;
                        --l_1449;
                    }
                    return (**g_167);
                }
                (*l_1350) = ((l_1445 |= (safe_sub_func_int32_t_s_s((p_22 , (safe_div_func_int32_t_s_s((((*p_21) ^= ((l_1447 = (safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint16_t_u((l_1459 == (p_22 && p_20)))), (((((**g_167) | (l_1460 == ((*l_1461) = &l_1449))) , l_1463) != (void*)0) & 0xB5L)))) < p_22)) < p_20), p_20))), p_22))) && (*l_1405));
                for (g_353 = (-6); (g_353 >= 35); ++g_353)
                {
                    return p_20;
                }
            }
            for (l_1459 = 0; (l_1459 > 37); l_1459++)
            {
                int8_t l_1473[2];
                int32_t *l_1490 = &l_1446[4][4];
                int i;
                for (i = 0; i < 2; i++)
                    l_1473[i] = 0xA1L;
                if (((*l_1405) &= (safe_div_func_uint64_t_u_u(((**g_351) = ((((l_1471 == l_1472) | l_1473[1]) && ((safe_unary_minus_func_uint32_t_u(l_1473[1])) == ((((*l_1350) = ((safe_sub_func_uint32_t_u_u(p_20, ((void*)0 != l_1477))) || (((l_1478 == (void*)0) , 0L) && (*g_180)))) < 0x2804917CL) && p_20))) && 0xAFL)), 1UL))))
                {
                    return p_22;
                }
                else
                {
                    uint16_t l_1522 = 1UL;
                    for (g_194 = (-13); (g_194 != 54); ++g_194)
                    {
                        int32_t *l_1489 = &l_1334[0][7];
                        uint64_t **l_1512[9][8][3] = {{{&g_1019[1],&g_1019[1],&g_1019[0]},{&g_1019[2],&g_1019[2],&g_1019[1]},{&g_1019[2],&g_1019[2],&g_1019[0]},{&g_1019[1],&g_1019[1],&g_1019[2]},{(void*)0,&g_1019[2],&g_1019[0]},{&g_1019[0],&g_1019[2],&g_1019[0]},{(void*)0,&g_1019[2],&g_1019[2]},{&g_1019[2],&g_1019[0],&g_1019[0]}},{{&g_1019[0],&g_1019[2],&g_1019[1]},{(void*)0,&g_1019[1],&g_1019[0]},{&g_1019[2],&g_1019[0],&g_1019[2]},{(void*)0,&g_1019[2],&g_1019[0]},{&g_1019[1],&g_1019[1],&g_1019[0]},{&g_1019[2],(void*)0,&g_1019[2]},{&g_1019[0],&g_1019[2],&g_1019[0]},{&g_1019[1],(void*)0,&g_1019[1]}},{{&g_1019[2],&g_1019[0],&g_1019[0]},{&g_1019[0],&g_1019[2],&g_1019[2]},{&g_1019[2],(void*)0,&g_1019[0]},{&g_1019[2],&g_1019[0],&g_1019[0]},{&g_1019[2],(void*)0,&g_1019[2]},{&g_1019[1],&g_1019[1],&g_1019[0]},{&g_1019[2],&g_1019[2],&g_1019[1]},{&g_1019[2],&g_1019[2],&g_1019[0]}},{{&g_1019[1],&g_1019[1],&g_1019[2]},{(void*)0,&g_1019[2],&g_1019[0]},{&g_1019[0],&g_1019[2],&g_1019[0]},{(void*)0,&g_1019[2],&g_1019[2]},{&g_1019[2],&g_1019[0],&g_1019[0]},{&g_1019[0],&g_1019[2],&g_1019[1]},{(void*)0,&g_1019[1],&g_1019[0]},{&g_1019[2],&g_1019[0],&g_1019[2]}},{{(void*)0,&g_1019[2],&g_1019[0]},{&g_1019[1],&g_1019[1],&g_1019[0]},{&g_1019[2],(void*)0,&g_1019[2]},{&g_1019[0],&g_1019[2],&g_1019[0]},{&g_1019[1],(void*)0,&g_1019[1]},{&g_1019[2],&g_1019[0],&g_1019[0]},{&g_1019[0],&g_1019[2],&g_1019[2]},{&g_1019[2],(void*)0,&g_1019[0]}},{{&g_1019[2],&g_1019[0],&g_1019[0]},{&g_1019[2],(void*)0,&g_1019[2]},{&g_1019[1],&g_1019[1],&g_1019[0]},{&g_1019[2],&g_1019[2],&g_1019[1]},{&g_1019[2],&g_1019[2],&g_1019[0]},{&g_1019[1],&g_1019[1],&g_1019[2]},{(void*)0,&g_1019[2],&g_1019[0]},{&g_1019[0],&g_1019[2],&g_1019[0]}},{{(void*)0,&g_1019[2],&g_1019[2]},{&g_1019[2],&g_1019[0],&g_1019[0]},{&g_1019[0],&g_1019[2],&g_1019[1]},{(void*)0,&g_1019[1],&g_1019[0]},{&g_1019[2],&g_1019[0],&g_1019[2]},{(void*)0,&g_1019[2],&g_1019[0]},{&g_1019[1],&g_1019[1],&g_1019[0]},{&g_1019[2],(void*)0,&g_1019[2]}},{{&g_1019[0],&g_1019[2],&g_1019[0]},{&g_1019[1],(void*)0,&g_1019[1]},{&g_1019[2],&g_1019[0],&g_1019[0]},{&g_1019[0],&g_1019[2],&g_1019[2]},{&g_1019[2],(void*)0,&g_1019[0]},{&g_1019[2],&g_1019[0],&g_1019[0]},{&g_1019[2],(void*)0,&g_1019[2]},{&g_1019[1],&g_1019[2],&g_1019[2]}},{{(void*)0,(void*)0,&g_1019[2]},{(void*)0,(void*)0,&g_1019[2]},{&g_1019[2],&g_1019[2],(void*)0},{&g_1019[2],(void*)0,&g_1019[1]},{&g_1019[0],(void*)0,&g_1019[1]},{&g_1019[2],&g_1019[2],(void*)0},{(void*)0,&g_1019[0],&g_1019[2]},{&g_1019[0],&g_1019[2],&g_1019[2]}}};
                        uint64_t ***l_1511 = &l_1512[8][4][0];
                        int i, j, k;
                        (**l_1412) = l_1482;
                        (*l_1489) = (safe_rshift_func_uint16_t_u_s(((**l_1432) |= (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((l_1489 == l_1490), (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((*g_96) == p_20), 7)), ((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((+(((*g_1017) = (*g_1017)) != (**g_530))) == (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((g_1510 = (g_1508[3][1][1] = l_1506[2][2][7])) != ((*l_1511) = &g_1019[1])) >= (safe_sub_func_int32_t_s_s(((*l_1350) = (safe_add_func_int64_t_s_s(((safe_div_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((~(p_20 ^ 0xB5E92839L)) != (*p_21)), (*l_1490))) && (**g_167)), (*g_787))) != 0x9AFBL), 0x8D7A700D4204D8EALL))), p_22))), 3)), l_1522))), 10)), p_20)), l_1522)) , 0xD85DL))))), 3UL))), 8));
                    }
                    (*l_1405) |= ((void*)0 == &p_21);
                    return (**g_167);
                }
            }
        }
        else
        {
            int8_t l_1535[1][6][6] = {{{5L,0x8DL,4L,4L,0x8DL,5L},{5L,4L,0L,0x8DL,0x8DL,0L},{0x8DL,0x8DL,0L,4L,5L,5L},{0x8DL,4L,4L,0x8DL,5L,0L},{5L,0x8DL,4L,4L,0x8DL,5L},{5L,4L,0L,0x8DL,0x8DL,0L}}};
            int32_t l_1538 = 0L;
            int32_t *l_1539[3];
            int16_t ***l_1543 = &g_786;
            int16_t ****l_1542 = &l_1543;
            int8_t l_1548 = (-6L);
            int32_t l_1568[1];
            int8_t l_1591 = 0x2CL;
            int64_t l_1625 = 0x9D454411743A1B14LL;
            int8_t l_1626 = 0x07L;
            int16_t l_1646 = 0xC241L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1539[i] = &g_625;
            for (i = 0; i < 1; i++)
                l_1568[i] = (-1L);
            if (((void*)0 == &g_786))
            {
                uint8_t *l_1523 = &g_149;
                int16_t ****l_1540 = (void*)0;
                int16_t *****l_1541[2][6];
                int32_t l_1551 = 0xED682BAEL;
                int32_t l_1558 = 0x102A816AL;
                int32_t l_1559 = 0xAA627E08L;
                int32_t l_1562 = 0L;
                int32_t l_1563 = 0x629D89DEL;
                int32_t l_1564 = 1L;
                int32_t l_1565 = 0xB80113FBL;
                int32_t l_1566 = 0xB45A7522L;
                int16_t l_1576[5][2];
                int32_t l_1577 = 0L;
                int64_t l_1578 = 3L;
                int32_t l_1582 = 0x3D7C4072L;
                int32_t l_1583 = 0x7114BDFBL;
                int32_t l_1584 = 0x4616198FL;
                int32_t l_1585 = 0L;
                int32_t l_1586 = 0x74EADD05L;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_1541[i][j] = &l_1540;
                }
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1576[i][j] = 0xE4F8L;
                }
                l_1539[1] = (((**g_786) == ((l_1523 == ((safe_rshift_func_int8_t_s_u((0UL != (safe_div_func_uint64_t_u_u(((l_1538 ^= (((safe_div_func_uint8_t_u_u((+(((**l_1432) = (safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((((-1L) && p_20) | (((*g_1207) = l_1535[0][1][2]) , ((**g_351)++))), ((void*)0 != l_1332[3]))), (*l_1482)))) , (*l_1482))), (*g_96))) | p_22) >= (*g_180))) > (*l_1350)), 0x1CA8F75F65EE6260LL))), (*g_96))) , (void*)0)) != p_22)) , &l_1538);
                l_1542 = l_1540;
                for (g_416 = 0; (g_416 < 8); g_416 = safe_add_func_uint32_t_u_u(g_416, 3))
                {
                    int64_t l_1549 = 0xB5414410D0168E9DLL;
                    int32_t l_1550 = 0xC3CBB804L;
                    int32_t l_1552 = 0x50A5103EL;
                    int32_t l_1560 = 9L;
                    int32_t l_1561[7][1][3] = {{{(-1L),(-1L),(-1L)}},{{0x0E329A53L,0x0E329A53L,0x0E329A53L}},{{(-1L),(-1L),(-1L)}},{{0x0E329A53L,0x0E329A53L,0x0E329A53L}},{{(-1L),(-1L),(-1L)}},{{0x0E329A53L,0x0E329A53L,0x0E329A53L}},{{(-1L),(-1L),(-1L)}}};
                    uint32_t l_1570 = 4294967295UL;
                    uint32_t l_1588 = 4294967289UL;
                    int i, j, k;
                    if (((*l_1350) = (safe_mod_func_int16_t_s_s(0xF18BL, p_20))))
                    {
                        uint8_t l_1553 = 0x22L;
                        --l_1553;
                        l_1552 ^= (-4L);
                        l_1551 = 0x073B3907L;
                    }
                    else
                    {
                        int32_t **l_1557[4][1] = {{&l_1482},{&l_1404},{&l_1482},{&l_1404}};
                        int32_t l_1567 = (-1L);
                        int64_t l_1569 = 1L;
                        int i, j;
                        g_1556 = &l_1334[2][7];
                        l_1404 = &l_1551;
                        --l_1570;
                        return (*g_168);
                    }
                    for (g_153 = (-9); (g_153 >= 41); g_153 = safe_add_func_int16_t_s_s(g_153, 8))
                    {
                        int64_t l_1575 = 0xC11BDD1BDB2EDDC4LL;
                        int32_t l_1579 = 0x29B7E158L;
                        int32_t l_1580 = 0x2FB45A57L;
                        int32_t l_1581 = 0x8594E02EL;
                        int32_t l_1587[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1587[i] = (-10L);
                        l_1588--;
                    }
                    --l_1592;
                }
            }
            else
            {
                const uint32_t l_1624[8][9][3] = {{{5UL,4294967294UL,8UL},{0xF4A897A5L,0UL,0UL},{0x00CA893DL,1UL,1UL},{0UL,0x56F9FFB2L,1UL},{1UL,0x5CF07C9DL,0xC41A8522L},{1UL,1UL,1UL},{4294967290UL,0x34D74CC7L,0UL},{1UL,4294967286UL,0xAAD09A2AL},{1UL,0xCF660CF7L,3UL}},{{0xA682383BL,3UL,0x77BE8512L},{7UL,6UL,0x369FFB14L},{4294967295UL,0x53387C56L,1UL},{0xF6610087L,8UL,0x9B0085B7L},{0xA53B8FC7L,0xA682383BL,0x02606312L},{0x07F84CC4L,4294967295UL,7UL},{0x3D1AD2ABL,0xF5FBC106L,7UL},{0xC5F7F5CAL,5UL,0x02606312L},{0xF0E4581DL,0xEE587068L,0x9B0085B7L}},{{0x5B4F3978L,9UL,1UL},{0UL,1UL,0x369FFB14L},{7UL,0x89BFBFB8L,0x77BE8512L},{0UL,0x5B4F3978L,3UL},{0x369FFB14L,0xCB0C2DD2L,0xAAD09A2AL},{0x89BFBFB8L,4294967295UL,0UL},{0xF988D1E6L,1UL,1UL},{0UL,8UL,0xC41A8522L},{1UL,0xE8974A93L,1UL}},{{0x1486411AL,1UL,1UL},{4294967295UL,7UL,0UL},{0xA6542160L,0x298214A6L,8UL},{4294967289UL,0x405B1427L,0x5B4F3978L},{0x77BE8512L,1UL,4294967295UL},{0x9D237B10L,0x405B1427L,1UL},{0x23E55731L,0x298214A6L,0x56F9FFB2L},{4294967286UL,0UL,3UL},{4294967287UL,1UL,0x00CA893DL}},{{4294967286UL,0UL,0xCB0C2DD2L},{1UL,0UL,0xC5F7F5CAL},{1UL,0xEE587068L,0x369FFB14L},{5UL,0x61A4F8EBL,0xE8974A93L},{0UL,0xF4A897A5L,0UL},{0x405B1427L,6UL,0xDFFC34E5L},{0UL,0x369FFB14L,0x77BE8512L},{4294967295UL,1UL,0x34D74CC7L},{0xE0DF08CEL,0xE8974A93L,0x298214A6L}},{{0xF5FBC106L,0x9D237B10L,4294967295UL},{0xC19CBDC1L,0xCB0C2DD2L,0UL},{0x02606312L,0UL,0UL},{0x02606312L,0UL,0xF5FBC106L},{0xC19CBDC1L,7UL,0xA682383BL},{0xF5FBC106L,6UL,0xFB472C7BL},{0xE0DF08CEL,0xF5FBC106L,0x44F23D44L},{4294967295UL,0xFB472C7BL,1UL},{0UL,1UL,0xF4A897A5L}},{{0x405B1427L,1UL,0UL},{0UL,0xCF660CF7L,4294967295UL},{5UL,0UL,1UL},{1UL,1UL,0xC41A8522L},{1UL,0x5B4F3978L,0x02606312L},{4294967286UL,0xC19CBDC1L,1UL},{4294967287UL,4294967287UL,0x2A072218L},{0xCF660CF7L,4294967295UL,4294967295UL},{9UL,0UL,0xA53B8FC7L}},{{0xF6610087L,0x4646240BL,5UL},{0UL,9UL,0xA53B8FC7L},{0x9A220EF1L,0UL,4294967295UL},{0x8C18D4CDL,1UL,0x2A072218L},{0UL,0x73BA5ACEL,1UL},{4294967294UL,0x07F84CC4L,0x02606312L},{0xA682383BL,0x00CA893DL,0xC41A8522L},{4294967295UL,0xD551FD12L,1UL},{0UL,0x405B1427L,4294967295UL}}};
                int32_t l_1645 = 0xA780894FL;
                int32_t l_1652 = (-9L);
                int i, j, k;
                if ((l_1460 != (void*)0))
                {
                    uint16_t l_1595 = 1UL;
                    --l_1595;
                }
                else
                {
                    int16_t l_1600 = 0L;
                    int8_t *l_1627 = &g_235;
                    int32_t *l_1630[5];
                    int32_t *l_1631 = &l_1623;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1630[i] = &l_1333;
                    if (((safe_add_func_int64_t_s_s(l_1600, (safe_mul_func_int16_t_s_s(((~0x20L) != (safe_rshift_func_int8_t_s_s((*g_168), ((*l_1627) = (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((((*g_133) != (0x57AA20915392AEE9LL == (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((**g_351) = (safe_sub_func_int32_t_s_s((safe_mod_func_int64_t_s_s(p_22, ((((((*l_1482) , ((*g_787) < (safe_div_func_int16_t_s_s(((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_u((((p_22 , 1L) , p_20) ^ 3L), (*p_21))))) , (**g_786)), 0xD2E0L)))) && p_22) < p_22) > l_1600) & 0x8DL))), p_22))) == l_1623), 4)), l_1624[4][8][2])))) != 0x08E24CDBC1D2EBC2LL) < (*g_787)), (*g_133))) != l_1625), l_1626)))))), 65535UL)))) | 4L))
                    {
                        int32_t *l_1628 = &l_1446[4][4];
                        int32_t **l_1629[10] = {&l_1350,(void*)0,&l_1350,(void*)0,&l_1350,(void*)0,&l_1350,(void*)0,&l_1350,(void*)0};
                        int i;
                        l_1631 = (l_1630[1] = l_1628);
                        (*g_1556) &= ((p_22 | ((((void*)0 == &l_1568[0]) > ((void*)0 == l_1632)) != (((safe_add_func_int32_t_s_s((*l_1628), g_1635)) <= ((((((((safe_mul_func_int8_t_s_s((((**l_1479) = (l_1624[4][8][2] || (safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((~(((((safe_div_func_uint64_t_u_u(p_22, p_22)) & p_20) && (*g_96)) < (*l_1631)) >= p_22)) & l_1624[4][8][2]), (*p_21))), l_1645)))) | (*g_168)), (**g_167))) & p_22) <= (-6L)) >= l_1646) , 0L) > 8UL) , (*g_133)) > p_20)) | 0x1384L))) , 0L);
                        (*l_1350) = (safe_rshift_func_uint16_t_u_u(((*g_133) ^= (safe_unary_minus_func_int8_t_s((**g_167)))), (*l_1628)));
                    }
                    else
                    {
                        int32_t l_1650 = 0x76141860L;
                        int32_t l_1651 = (-6L);
                        int32_t l_1653[1][2];
                        uint8_t l_1654 = 249UL;
                        int32_t **l_1657 = (void*)0;
                        int32_t **l_1658[6][4] = {{&g_1556,&g_1556,&g_1556,&g_1556},{&g_1556,&g_1556,&g_1556,&g_1556},{&g_1556,&g_1556,&g_1556,&g_1556},{&g_1556,&g_1556,&g_1556,&g_1556},{&g_1556,&g_1556,&g_1556,&g_1556},{&g_1556,&g_1556,&g_1556,&g_1556}};
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_1653[i][j] = 0x56441A0BL;
                        }
                        ++l_1654;
                        l_1350 = &l_1652;
                    }
                    return (*g_168);
                }
                return l_1652;
            }
            for (g_355 = (-6); (g_355 < 20); ++g_355)
            {
                uint32_t l_1661 = 0x1616D00DL;
                return l_1661;
            }
        }
        l_1406 |= (safe_mul_func_uint8_t_u_u((p_22 < (safe_add_func_int8_t_s_s(((l_1667 = (l_1666 = &l_1396)) != &g_180), ((safe_lshift_func_uint8_t_u_s((7L <= (0xEBE9966BL || ((*g_96) <= ((safe_rshift_func_uint8_t_u_u(l_1672, 5)) & ((p_20 <= 0x451DE480435FDD68LL) > (*l_1482)))))), p_22)) , (*l_1350))))), (-1L)));
    }
    return (*g_168);
}







static uint8_t func_23(int32_t p_24, int64_t p_25)
{
    uint8_t *l_30 = &g_17;
    int32_t *l_35 = (void*)0;
    int32_t l_55 = 2L;
    int32_t *l_803 = &g_417[1];
    uint32_t *l_811[4][1] = {{&g_171},{&g_177},{&g_171},{&g_177}};
    int32_t l_812 = 0x0FF3943FL;
    int32_t l_813 = 0x25928902L;
    int32_t l_814 = 0x469B45DDL;
    int32_t l_815 = 1L;
    int32_t l_816 = 0x9A9C79AAL;
    int32_t l_817 = 0xE07361EBL;
    int32_t l_818 = 0x6DA9656AL;
    int32_t l_819 = 0xAFD1776AL;
    int32_t l_820 = 0x3889A92BL;
    int32_t l_821[2];
    uint64_t l_822[8][3][3] = {{{18446744073709551611UL,18446744073709551611UL,18446744073709551612UL},{0UL,18446744073709551608UL,18446744073709551612UL},{18446744073709551608UL,0UL,18446744073709551612UL}},{{18446744073709551611UL,18446744073709551611UL,18446744073709551612UL},{0UL,18446744073709551608UL,18446744073709551612UL},{18446744073709551608UL,0UL,18446744073709551612UL}},{{18446744073709551611UL,18446744073709551611UL,18446744073709551612UL},{0UL,18446744073709551608UL,18446744073709551612UL},{18446744073709551608UL,0UL,18446744073709551612UL}},{{18446744073709551611UL,18446744073709551611UL,18446744073709551612UL},{0UL,18446744073709551608UL,18446744073709551612UL},{18446744073709551608UL,0UL,18446744073709551612UL}},{{18446744073709551611UL,18446744073709551611UL,18446744073709551612UL},{0UL,0x8A98D7280CDFA338LL,18446744073709551611UL},{0x8A98D7280CDFA338LL,1UL,18446744073709551611UL}},{{0x207D5D885821C9AELL,0x207D5D885821C9AELL,18446744073709551611UL},{1UL,0x8A98D7280CDFA338LL,18446744073709551611UL},{0x8A98D7280CDFA338LL,1UL,18446744073709551611UL}},{{0x207D5D885821C9AELL,0x207D5D885821C9AELL,18446744073709551611UL},{1UL,0x8A98D7280CDFA338LL,18446744073709551611UL},{0x8A98D7280CDFA338LL,1UL,18446744073709551611UL}},{{0x207D5D885821C9AELL,0x207D5D885821C9AELL,18446744073709551611UL},{1UL,0x8A98D7280CDFA338LL,18446744073709551611UL},{0x8A98D7280CDFA338LL,1UL,18446744073709551611UL}}};
    int16_t *l_825[8] = {&g_239,&g_239,&g_239,&g_239,&g_239,&g_239,&g_239,&g_239};
    int32_t *l_826 = (void*)0;
    int32_t *l_827 = &g_625;
    uint8_t ***l_842 = &g_95;
    int32_t l_873 = 0x4E65C8F6L;
    int8_t l_875[2];
    int64_t l_877 = 0xFB70CE53FD21F79FLL;
    uint8_t l_898 = 0x16L;
    uint64_t ***l_933 = (void*)0;
    int64_t **l_934 = &g_180;
    uint32_t l_987 = 1UL;
    int32_t l_1057 = 1L;
    int32_t l_1168 = (-5L);
    uint32_t l_1180 = 0xE7AB4154L;
    int32_t l_1227 = 0x5242DCBFL;
    uint16_t l_1250[10];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_821[i] = (-1L);
    for (i = 0; i < 2; i++)
        l_875[i] = 0xADL;
    for (i = 0; i < 10; i++)
        l_1250[i] = 0x3290L;
    (*l_803) &= func_26(l_30, &g_17, func_31(l_35, func_36(&g_8, &g_17, (safe_lshift_func_int8_t_s_u(func_42(func_47(((p_24 , 0x39L) && 0L), l_35, p_24, g_8, l_55), p_25, &g_17, &l_55), 4))), &l_55));
    (*l_827) = ((**g_786) <= ((safe_lshift_func_int8_t_s_s(((g_146 = ((*l_803) = (((((*l_803) | p_25) <= ((((safe_mul_func_int8_t_s_s((p_24 , (p_25 ^ (safe_sub_func_int16_t_s_s((+((l_816 = (((++l_822[2][0][0]) == p_25) <= (((p_25 , ((p_25 == 0x89A1DABBB749A794LL) , (**g_167))) == (-1L)) >= 4UL))) == 4294967290UL)), p_24)))), 0L)) != p_24) , (*g_96)) && 255UL)) , (*g_287)) ^ 8L))) != (**g_786)), 5)) || 0x89E5L));
    (*l_827) = ((0xCFB4L <= ((safe_sub_func_uint64_t_u_u(((p_24 | (0x1983C1CCL > (safe_lshift_func_uint8_t_u_s(((*l_30) ^= (&g_787 != &l_825[3])), 0)))) | ((*l_827) | 0x852EAD88A929EB51LL)), p_25)) != (((*l_803) = ((--(**g_351)) > 0UL)) & 1UL))) ^ (*g_287));
    if ((safe_mul_func_int8_t_s_s(((-1L) & (0x6DAF3A35L == (safe_rshift_func_uint16_t_u_s(((0L & (safe_sub_func_uint16_t_u_u((0xD43A462DL < (((safe_div_func_int32_t_s_s(((*l_827) = (((void*)0 == l_842) ^ ((((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0xAE0BL, p_24)), ((*g_133) = (safe_div_func_uint32_t_u_u(p_25, (*l_803)))))) | p_24) > p_24) != (*l_803)))), p_25)) < 0x54L) , (*l_827))), g_244))) > 1UL), (*g_787))))), p_24)))
    {
        int32_t *l_856[5][3] = {{&g_308[5][1],&g_308[4][1],(void*)0},{&g_308[2][5],&g_321[7][1],&g_226[6]},{&g_308[5][1],&g_308[5][1],&g_226[6]},{&g_321[7][1],&g_308[2][5],(void*)0},{&g_308[4][1],&g_308[5][1],&g_308[4][1]}};
        int32_t **l_855 = &l_856[4][0];
        int32_t l_863 = 1L;
        int32_t l_868 = 3L;
        int32_t l_869 = 0x80C4AEDAL;
        int32_t l_870 = 1L;
        int32_t l_871[8] = {6L,6L,6L,6L,6L,6L,6L,6L};
        int32_t l_872 = 0x122DB014L;
        uint64_t l_878 = 18446744073709551615UL;
        const uint8_t *l_891[8][7] = {{&g_151,&g_151,&g_17,&g_407,&g_396,&g_402,&g_402},{(void*)0,&g_402,&g_175,(void*)0,(void*)0,&g_407,(void*)0},{&g_407,(void*)0,(void*)0,&g_407,&g_175,&g_402,(void*)0},{&g_402,(void*)0,(void*)0,&g_407,&g_151,&g_175,&g_149},{(void*)0,&g_402,&g_402,&g_151,&g_402,&g_402,(void*)0},{&g_396,&g_151,&g_402,&g_149,&g_402,&g_175,(void*)0},{&g_396,&g_175,&g_407,&g_402,&g_151,&g_151,&g_402},{&g_402,&g_17,&g_402,&g_402,&g_175,&g_396,&g_175}};
        uint8_t *l_899 = &l_898;
        int32_t **l_900 = (void*)0;
        const int32_t **l_901 = (void*)0;
        int32_t **l_902 = (void*)0;
        const int32_t **l_903 = &g_287;
        int i, j;
        (*l_827) = (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((*g_168), (&p_24 == ((*l_855) = &g_226[4])))) , ((*l_30)++)), (((safe_add_func_int64_t_s_s((-4L), (safe_div_func_int8_t_s_s(0x75L, (l_863 , 0xF4L))))) && ((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((*g_133), 13)), p_25)) || 2UL)) < 1L))) != p_25), 0xC714L));
        (*l_903) = ((((*l_803) , (((l_878++) ^ (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(6L, 12)), ((*g_787) = ((((safe_add_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(l_872, p_25)), (((*l_803) &= ((((p_24 < p_25) , (((l_891[6][4] == ((safe_div_func_int16_t_s_s(((p_24 >= (safe_mod_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((**g_167) ^= 0xC3L), p_24)) != l_898), p_24))) || 0xA6D6611B82B6A277LL), 65527UL)) , l_899)) != (-3L)) & l_869)) != (*g_180)) & (*g_787))) & (*g_180)))), l_863)) || p_24) ^ p_25) , (*g_787)))))) , (*l_803))) > 1L) , (void*)0);
        for (g_402 = 0; (g_402 != 32); g_402++)
        {
            return p_25;
        }
    }
    else
    {
        int64_t l_908 = (-2L);
        uint64_t *l_922 = &g_356;
        uint64_t **l_921 = &l_922;
        uint64_t ***l_920[6][2][1] = {{{&l_921},{&l_921}},{{&l_921},{&l_921}},{{&l_921},{&l_921}},{{&l_921},{&l_921}},{{&l_921},{&l_921}},{{&l_921},{&l_921}}};
        int32_t l_931 = (-1L);
        const int64_t *l_936[10] = {&l_908,&l_908,&g_241,&l_908,&l_908,&g_241,&l_908,&l_908,&g_241,&l_908};
        const int64_t **l_935 = &l_936[9];
        const int16_t *l_954 = &g_733;
        int32_t l_979 = 0xD7C811DCL;
        int32_t l_981 = 0xF1D5BA00L;
        int32_t l_983[8][2][2] = {{{0x465F4CD1L,0L},{0x465F4CD1L,(-10L)}},{{0xFD9EEAC0L,0x465F4CD1L},{(-10L),0L}},{{0x610E5D13L,0x610E5D13L},{0xFD9EEAC0L,0x610E5D13L}},{{0x610E5D13L,0L},{(-10L),0x465F4CD1L}},{{0xFD9EEAC0L,(-10L)},{0x465F4CD1L,0L}},{{0x465F4CD1L,(-10L)},{0xFD9EEAC0L,0x465F4CD1L}},{{(-10L),0L},{0x610E5D13L,0x610E5D13L}},{{0xFD9EEAC0L,0x610E5D13L},{0x610E5D13L,0L}}};
        int16_t l_1054 = 0x260DL;
        int64_t ** const *l_1058 = &l_934;
        uint8_t *l_1110 = (void*)0;
        int32_t l_1121 = 0x61635899L;
        int8_t **l_1127 = &g_168;
        int64_t **l_1143 = &g_180;
        uint32_t l_1177 = 4294967292UL;
        int32_t *l_1204 = &g_321[0][0];
        int32_t **l_1203 = &l_1204;
        int16_t l_1226 = 0x9B63L;
        int16_t l_1245 = 0x2A4EL;
        int64_t l_1268 = 0xDF412F14A694CEBBLL;
        int i, j, k;
        for (g_625 = 0; (g_625 > (-16)); g_625 = safe_sub_func_uint8_t_u_u(g_625, 9))
        {
            uint32_t l_923 = 18446744073709551612UL;
            uint16_t *l_932 = &g_126;
            int32_t l_953 = 0xD4553B64L;
            int16_t l_956[4][4][9] = {{{0x87B6L,5L,0x3294L,5L,0x87B6L,0x3294L,0L,0L,0x3294L},{0x47D2L,0x0869L,9L,0x0869L,0x47D2L,0xED7FL,0x53B8L,0x56E3L,9L},{(-6L),(-6L),0L,(-6L),(-6L),0L,9L,9L,0L},{0xDA5AL,5L,0x53B8L,5L,0xDA5AL,0x56E3L,0L,0x1EF8L,0x53B8L}},{{(-6L),(-6L),0L,(-6L),(-6L),0L,9L,9L,0L},{0xDA5AL,5L,0x53B8L,5L,0xDA5AL,0x56E3L,0L,0x1EF8L,0x53B8L},{(-6L),(-6L),0L,(-6L),(-6L),0L,9L,9L,0L},{0xDA5AL,5L,0x53B8L,5L,0xDA5AL,0x56E3L,0L,0x1EF8L,0x53B8L}},{{(-6L),(-6L),0L,(-6L),(-6L),0L,9L,9L,0L},{0xDA5AL,5L,0x53B8L,5L,0xDA5AL,0x56E3L,0L,0x1EF8L,0x53B8L},{(-6L),(-6L),0L,(-6L),(-6L),0L,9L,9L,0L},{0xDA5AL,5L,0x53B8L,5L,0xDA5AL,0x56E3L,0L,0x1EF8L,0x53B8L}},{{(-6L),(-6L),0L,(-6L),(-6L),0L,9L,9L,0L},{0xDA5AL,5L,0x53B8L,5L,0xDA5AL,0x56E3L,0L,0x1EF8L,0x53B8L},{(-6L),(-6L),0L,(-6L),(-6L),0L,9L,9L,0L},{0xDA5AL,5L,0x53B8L,5L,0xDA5AL,0x56E3L,0L,0x1EF8L,0x53B8L}}};
            int32_t l_977 = 0x6D1E775BL;
            int32_t l_978 = (-4L);
            int32_t l_980 = 0L;
            int32_t l_982 = 1L;
            int32_t l_984 = 1L;
            int32_t l_986 = 1L;
            int32_t l_990[8] = {0x617A967EL,0x617A967EL,0x617A967EL,0x617A967EL,0x617A967EL,0x617A967EL,0x617A967EL,0x617A967EL};
            int i, j, k;
            for (g_132 = 1; (g_132 <= 4); g_132 += 1)
            {
                int i;
                return g_282[g_132];
            }
            if (l_908)
                continue;
            for (p_25 = (-26); (p_25 < (-18)); p_25++)
            {
                (*l_803) &= 0L;
            }
            if ((~(safe_sub_func_uint32_t_u_u(p_25, ((*g_168) < (((safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(0x89L, 2)), (l_920[4][0][0] != (((*g_96) |= (((((l_923 > ((safe_lshift_func_uint16_t_u_u(((*l_932) &= ((*g_133) |= (l_923 , (safe_add_func_uint8_t_u_u((+(l_931 &= (((254UL == (safe_div_func_uint32_t_u_u((*l_803), p_24))) , l_923) , p_25))), (**g_167)))))), p_25)) | l_908)) && (**g_351)) || 0x771FCD3D451CB923LL) || 0L) >= 0x855BD223L)) , l_933)))), 3)) , l_934) != l_935))))))
            {
                int32_t *l_943 = (void*)0;
                for (g_17 = 18; (g_17 == 58); g_17 = safe_add_func_int8_t_s_s(g_17, 3))
                {
                    int32_t **l_944 = &g_489[2][2][1];
                    int32_t *l_957 = (void*)0;
                    int32_t *l_958[2][3];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_958[i][j] = &l_818;
                    }
                    (*l_803) = 0x0E3F4EE8L;
                    l_931 ^= (safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((l_923 | ((*g_787) = (l_943 == ((*l_944) = l_943)))), (((((((((safe_sub_func_int16_t_s_s((((*g_168) |= (l_923 == p_25)) | (*g_96)), (safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((*g_133), 0)), (((l_953 = p_24) < ((void*)0 != l_954)) || (-1L)))))) < (*g_180)) & l_923) , (*l_803)) || (-4L)) >= g_955) <= p_24) > l_956[3][3][2]) ^ (*g_287)))), p_25));
                    for (g_355 = (-19); (g_355 <= 28); g_355++)
                    {
                        (*l_803) &= 0L;
                        return (*g_96);
                    }
                }
            }
            else
            {
                int32_t *l_961 = &g_417[1];
                int32_t *l_962 = &l_813;
                int32_t *l_963 = &l_817;
                int32_t *l_964 = &l_820;
                int32_t *l_965 = &l_813;
                int32_t *l_966 = &l_816;
                int32_t l_967 = 1L;
                int32_t *l_968 = &l_812;
                int32_t l_969 = 0x6FF49DBAL;
                int32_t *l_970 = (void*)0;
                int32_t *l_971 = (void*)0;
                int32_t *l_972 = &g_102;
                int32_t *l_973 = &g_417[1];
                int32_t *l_974 = &l_820;
                int32_t *l_975[3];
                int16_t l_976 = (-2L);
                int8_t l_985[3][10] = {{1L,1L,0x56L,0x56L,1L,1L,0x56L,0x56L,1L,1L},{1L,0x56L,0x56L,1L,1L,0x56L,0x56L,1L,1L,0x56L},{1L,1L,0x56L,0x56L,1L,1L,0x56L,0x56L,1L,1L}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_975[i] = &l_812;
                ++l_987;
                --g_991;
            }
        }
        for (g_146 = 1; (g_146 <= 5); g_146 += 1)
        {
            int64_t l_1012 = 0L;
            uint16_t *l_1013 = &g_126;
            uint64_t ****l_1016[1][9] = {{&l_933,&l_920[0][1][0],&l_933,&l_933,&l_920[0][1][0],&l_933,&l_933,&l_920[0][1][0],&l_933}};
            int64_t *l_1022 = &l_1012;
            int32_t l_1026 = 0x5C2A1C73L;
            int32_t l_1037 = 0x4CDAA604L;
            int32_t l_1038 = 0x2CF06AD6L;
            int32_t l_1039 = 0x6AA5E445L;
            int64_t ***l_1075 = &l_934;
            int64_t ****l_1074 = &l_1075;
            int32_t *l_1091 = &g_308[4][1];
            int32_t **l_1090 = &l_1091;
            int32_t l_1163 = 0x7E339E85L;
            int32_t l_1164 = 0xD59CE102L;
            int32_t l_1165 = 1L;
            int32_t l_1167 = 0x7933B046L;
            int32_t l_1169 = 0xA251F836L;
            int32_t l_1170 = 0x234C80B3L;
            int32_t l_1173 = (-6L);
            int32_t l_1176[2][7] = {{3L,3L,3L,3L,3L,3L,3L},{6L,6L,6L,6L,6L,6L,6L}};
            int32_t * const *l_1213[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint8_t ***l_1297 = &g_95;
            int i, j;
        }
    }
    return p_25;
}







static int32_t func_26(uint8_t * p_27, uint8_t * const p_28, uint8_t * p_29)
{
    int32_t l_127 = (-5L);
    int32_t l_152 = 0x19B780A7L;
    int32_t *l_155 = &l_152;
    int64_t *l_190 = &g_181[4][1][0];
    int32_t l_240 = 0x4082952BL;
    int8_t ** const l_300[1] = {(void*)0};
    uint64_t *l_349 = &g_183;
    uint64_t * const *l_348 = &l_349;
    int32_t l_424 = 0x0BA0D21EL;
    int32_t l_427 = 0x589544A4L;
    uint32_t l_459 = 0x3DAB5C59L;
    const uint64_t *l_573 = &g_227;
    const uint64_t **l_572 = &l_573;
    const uint64_t ***l_571 = &l_572;
    const uint64_t ****l_570 = &l_571;
    const uint64_t *****l_569 = &l_570;
    uint8_t l_657 = 255UL;
    int32_t *l_689 = &g_102;
    uint16_t **l_723 = &g_133;
    const int16_t *l_732 = &g_733;
    int16_t *l_783[2][6] = {{&g_146,&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146,&g_146}};
    int16_t **l_782 = &l_783[0][5];
    int16_t ***l_784 = (void*)0;
    int16_t ***l_785 = &l_782;
    int32_t *l_791[3];
    uint32_t l_792[10][5][5] = {{{0xA56DFD5EL,0x9023B44AL,1UL,18446744073709551615UL,0UL},{18446744073709551615UL,1UL,0UL,18446744073709551615UL,0x4540C12AL},{0xAD1FC94CL,18446744073709551615UL,1UL,0UL,0x63615671L},{18446744073709551609UL,1UL,18446744073709551615UL,7UL,0xAD1FC94CL},{18446744073709551615UL,18446744073709551615UL,1UL,7UL,1UL}},{{0UL,18446744073709551615UL,0UL,0UL,18446744073709551615UL},{0x4540C12AL,1UL,0xAD1FC94CL,18446744073709551615UL,0x4E59F3B8L},{7UL,18446744073709551615UL,18446744073709551613UL,0UL,18446744073709551609UL},{0x4E59F3B8L,1UL,0UL,18446744073709551615UL,0x63615671L},{7UL,0x9023B44AL,0UL,0x4540C12AL,18446744073709551615UL}},{{0x4540C12AL,18446744073709551615UL,18446744073709551614UL,0UL,7UL},{0UL,0x63615671L,1UL,0x34A12C31L,7UL},{18446744073709551615UL,0x4E59F3B8L,0x4E59F3B8L,18446744073709551615UL,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,18446744073709551614UL,7UL,0x63615671L},{0xAD1FC94CL,7UL,18446744073709551615UL,1UL,18446744073709551609UL}},{{18446744073709551615UL,0x34A12C31L,0UL,7UL,0x4E59F3B8L},{0xA56DFD5EL,18446744073709551615UL,0x43D414EFL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,7UL,0xAD1FC94CL,0x34A12C31L,1UL},{7UL,0UL,0xAD1FC94CL,0UL,0xAD1FC94CL},{1UL,1UL,0x43D414EFL,0x4540C12AL,0x63615671L}},{{1UL,0x63615671L,0UL,18446744073709551615UL,0x4540C12AL},{0x4540C12AL,18446744073709551612UL,18446744073709551615UL,0UL,0UL},{0xA56DFD5EL,0x63615671L,18446744073709551614UL,18446744073709551615UL,7UL},{0UL,1UL,0x4E59F3B8L,0UL,0x4540C12AL},{18446744073709551609UL,0UL,1UL,7UL,0x9023B44AL}},{{18446744073709551609UL,7UL,18446744073709551614UL,7UL,18446744073709551609UL},{0UL,18446744073709551615UL,0UL,0UL,1UL},{0xA56DFD5EL,0x34A12C31L,0UL,18446744073709551615UL,0x34A12C31L},{0x4540C12AL,7UL,18446744073709551613UL,18446744073709551615UL,1UL},{1UL,18446744073709551615UL,0xAD1FC94CL,0xA7ED42B4L,18446744073709551609UL}},{{1UL,0x4E59F3B8L,0UL,0x4540C12AL,0x9023B44AL},{7UL,0x63615671L,1UL,0x4540C12AL,0x4540C12AL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0xA7ED42B4L,7UL},{0xA56DFD5EL,0x9023B44AL,1UL,18446744073709551615UL,0UL},{18446744073709551615UL,1UL,0UL,0x4E59F3B8L,0x34A12C31L}},{{1UL,0x4E59F3B8L,0x458302E6L,4UL,0xAD1FC94CL},{0UL,0x458302E6L,0x9BFEC42AL,18446744073709551612UL,1UL},{0x4E59F3B8L,0UL,0x4540C12AL,0x9023B44AL,0xA7ED42B4L},{18446744073709551614UL,0UL,0UL,0UL,0UL},{0x34A12C31L,0x458302E6L,1UL,0UL,3UL}},{{18446744073709551612UL,0x4E59F3B8L,0xA56DFD5EL,1UL,0UL},{3UL,0xA7ED42B4L,0UL,0x9BFEC42AL,0xAD1FC94CL},{18446744073709551612UL,18446744073709551613UL,18446744073709551614UL,0x34A12C31L,0x9BFEC42AL},{0x34A12C31L,0UL,18446744073709551615UL,1UL,0x9023B44AL},{18446744073709551614UL,0xAD1FC94CL,0x458302E6L,0x43D414EFL,0x9023B44AL}},{{0x4E59F3B8L,3UL,3UL,0x4E59F3B8L,0x9BFEC42AL},{0UL,0x4E59F3B8L,18446744073709551615UL,0x9023B44AL,0xAD1FC94CL},{1UL,18446744073709551612UL,0x9BFEC42AL,0x458302E6L,0UL},{0x4E59F3B8L,0x43D414EFL,18446744073709551614UL,0x9023B44AL,3UL},{18446744073709551615UL,0UL,1UL,0x4E59F3B8L,0UL}}};
    const uint32_t l_802 = 1UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_791[i] = &l_424;
    for (g_102 = 13; (g_102 > 13); g_102++)
    {
        int32_t *l_161[8] = {&l_152,&l_152,&l_152,&l_152,&l_152,&l_152,&l_152,&l_152};
        int8_t * const *l_169 = &g_168;
        const int32_t *l_285 = &g_286;
        const uint64_t *l_358 = &g_354;
        const uint64_t **l_357 = &l_358;
        uint64_t * const *l_369 = &l_349;
        uint64_t l_432 = 0UL;
        int32_t l_446 = 0x7225334AL;
        int8_t l_466 = 0x3CL;
        uint8_t ***l_480[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int8_t l_482 = 0x8BL;
        uint16_t *l_517[7][1][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_134,&g_126,&g_126,&g_134,&g_134,&g_126,&g_126}},{{&g_126,(void*)0,&g_126,(void*)0,&g_126,(void*)0,&g_126}},{{&g_134,&g_134,&g_126,&g_126,&g_134,&g_134,&g_126}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_134,&g_126,&g_126,&g_134,&g_134,&g_126,&g_126}},{{&g_126,(void*)0,&g_126,(void*)0,&g_126,(void*)0,&g_126}}};
        uint16_t l_562 = 5UL;
        uint16_t l_583 = 0x52ABL;
        const int32_t l_604[10][1] = {{7L},{0xE0FDFBF5L},{7L},{0xE0FDFBF5L},{7L},{0xE0FDFBF5L},{7L},{0xE0FDFBF5L},{7L},{0xE0FDFBF5L}};
        int16_t *l_653[5] = {&g_239,&g_239,&g_239,&g_239,&g_239};
        int16_t **l_652 = &l_653[0];
        int64_t l_709 = 1L;
        int32_t l_755 = 0xCF955E69L;
        int32_t l_757 = (-1L);
        int64_t **l_772 = &g_180;
        int i, j, k;
        for (g_17 = 24; (g_17 != 24); ++g_17)
        {
            uint32_t l_130 = 0x2485FC01L;
            int32_t *l_143[6][5] = {{&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102}};
            int32_t **l_142 = &l_143[1][4];
            int i, j;
            for (g_100 = (-26); (g_100 > 26); ++g_100)
            {
                uint32_t l_119 = 0x8D8AE6FBL;
                int32_t l_124[2];
                uint16_t *l_125[10][2][1] = {{{&g_126},{&g_126}},{{&g_126},{&g_126}},{{&g_126},{&g_126}},{{&g_126},{&g_126}},{{&g_126},{&g_126}},{{&g_126},{&g_126}},{{&g_126},{&g_126}},{{&g_126},{&g_126}},{{&g_126},{&g_126}},{{&g_126},{&g_126}}};
                int8_t *l_131 = &g_132;
                int64_t *l_136 = (void*)0;
                int64_t *l_137 = (void*)0;
                int64_t *l_138 = (void*)0;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_124[i] = (-1L);
                if ((!(g_139 = (((safe_add_func_uint8_t_u_u((--l_119), (safe_lshift_func_int16_t_s_u(l_124[1], (g_126 = g_15[2][0][4]))))) != ((l_127 , l_125[1][0][0]) == ((0x2FF03E53L > (((*l_131) = l_130) <= 0UL)) , g_133))) < (!255UL)))))
                {
                    int32_t l_144 = 0L;
                    int16_t *l_145 = &g_146;
                    uint8_t *l_147 = (void*)0;
                    uint8_t *l_148 = &g_149;
                    uint8_t *l_150[1][5] = {{&g_17,&g_17,&g_17,&g_17,&g_17}};
                    int i, j;
                    g_153 &= (safe_sub_func_uint8_t_u_u((((*l_145) = ((((void*)0 != l_142) & l_119) <= (l_144 | g_139))) , (*g_96)), (l_152 = ((*l_148) |= (*p_28)))));
                }
                else
                {
                    return l_127;
                }
                for (g_146 = 2; (g_146 >= 0); g_146 -= 1)
                {
                    if ((*g_7))
                        break;
                }
                l_152 |= (~1L);
                if ((*g_7))
                    continue;
            }
            (*l_142) = (l_155 = &g_102);
        }
        for (g_100 = (-4); (g_100 <= (-12)); --g_100)
        {
            int32_t *l_160 = &l_152;
            uint32_t l_178[5][8][1] = {{{0x0D84A95BL},{0UL},{0x0D84A95BL},{0x0D84A95BL},{0UL},{0x0D84A95BL},{0x0D84A95BL},{0UL}},{{0x0D84A95BL},{0x0D84A95BL},{0UL},{0x0D84A95BL},{0x0D84A95BL},{0UL},{0x0D84A95BL},{0x0D84A95BL}},{{0UL},{0x0D84A95BL},{0x0D84A95BL},{0UL},{0x0D84A95BL},{0x0D84A95BL},{0UL},{0x0D84A95BL}},{{0x0D84A95BL},{0UL},{0x0D84A95BL},{0x0D84A95BL},{0UL},{0x0D84A95BL},{0x0D84A95BL},{0UL}},{{0x0D84A95BL},{0x0D84A95BL},{0UL},{0x0D84A95BL},{0x0D84A95BL},{0UL},{0x0D84A95BL},{0x0D84A95BL}}};
            int64_t l_179 = 2L;
            int32_t l_221 = 0L;
            uint64_t *l_268 = (void*)0;
            uint64_t **l_267[7][9] = {{&l_268,(void*)0,&l_268,&l_268,&l_268,&l_268,&l_268,&l_268,&l_268},{&l_268,&l_268,(void*)0,&l_268,&l_268,&l_268,&l_268,&l_268,&l_268},{&l_268,&l_268,&l_268,&l_268,&l_268,&l_268,&l_268,&l_268,(void*)0},{&l_268,&l_268,&l_268,&l_268,&l_268,&l_268,&l_268,&l_268,&l_268},{&l_268,&l_268,&l_268,&l_268,&l_268,&l_268,&l_268,&l_268,&l_268},{&l_268,&l_268,&l_268,(void*)0,&l_268,&l_268,&l_268,&l_268,&l_268},{&l_268,&l_268,&l_268,&l_268,&l_268,(void*)0,&l_268,&l_268,&l_268}};
            uint16_t *l_275 = &g_134;
            uint8_t *l_280 = &g_151;
            const uint64_t **l_360 = (void*)0;
            int32_t l_414 = 0x2B48DD4AL;
            int32_t l_418[6] = {8L,8L,8L,8L,8L,8L};
            uint32_t l_481 = 0x4A6F76CAL;
            const uint64_t ** const *l_565[7];
            const uint64_t ** const **l_564 = &l_565[1];
            int8_t l_603 = 0x14L;
            uint64_t l_629[5] = {6UL,6UL,6UL,6UL,6UL};
            int16_t **l_654 = &l_653[1];
            int16_t l_673 = 0x3DFAL;
            int32_t **l_734 = (void*)0;
            int32_t **l_735 = &g_489[2][1][1];
            uint32_t l_758 = 0x951DC705L;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_565[i] = &l_360;
        }
    }
    l_792[2][4][0] ^= ((safe_div_func_uint32_t_u_u(((((*g_96) == ((safe_lshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u((*l_689), (safe_mul_func_uint16_t_u_u(((~(((*l_785) = l_782) == g_786)) , ((*g_133) = (safe_sub_func_uint32_t_u_u((((((*g_168) , (((void*)0 != (*l_723)) < (*l_155))) || (!(*p_27))) , (*p_27)) <= 0x0AL), (*l_155))))), (*l_689))))), (*g_787))) < 0xA4L)) & 0xDD7CL) & (*l_689)), (*l_689))) && (*g_168));
    (*l_155) = ((0xD629F6C5386194ADLL != 0xABA59FC5461BB2F5LL) == ((safe_div_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(0x3288L, (safe_rshift_func_uint16_t_u_u((1L | ((*g_180) > (((~(l_802 , (*l_689))) && 6UL) , (*l_155)))), (*g_133))))), 5)) & (*p_27)), (*l_689))) | 0x86CA639BL));
    return (*g_7);
}







static uint8_t * func_31(int32_t * p_32, const int32_t * p_33, int32_t * p_34)
{
    uint8_t *l_107 = &g_17;
    return l_107;
}







static const int32_t * func_36(const int32_t * p_37, uint8_t * p_38, uint16_t p_39)
{
    int8_t *l_103 = &g_100;
    int8_t *l_105 = (void*)0;
    int8_t **l_104 = &l_105;
    int32_t *l_106 = &g_102;
    (*l_106) = (l_103 != ((*l_104) = &g_100));
    return &g_102;
}







static int8_t func_42(const uint8_t * p_43, uint8_t p_44, const uint8_t * p_45, const int32_t * p_46)
{
    uint16_t l_91 = 0x2F08L;
    uint8_t **l_93 = (void*)0;
    uint8_t ***l_94 = &l_93;
    int8_t *l_99 = &g_100;
    int32_t *l_101 = &g_102;
    for (g_17 = 0; (g_17 <= 2); g_17 += 1)
    {
        int32_t *l_90[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t l_92 = 0x115E53F0L;
        int i;
        l_91 |= (*p_46);
        return l_92;
    }
    (*l_101) ^= ((0xFDL || (0xA6L >= (65527UL || (((*l_94) = l_93) != (g_95 = (void*)0))))) , (safe_div_func_uint64_t_u_u(0x9F56C0C90B22F2EELL, (0x8B5DL || (((*l_99) = ((&g_95 == (void*)0) , p_44)) & g_15[1][0][0])))));
    return p_44;
}







static const uint8_t * func_47(int16_t p_48, int32_t * p_49, uint32_t p_50, int16_t p_51, int32_t p_52)
{
    uint32_t l_68 = 0x9EFCC72FL;
    uint8_t *l_80 = &g_17;
    const int32_t *l_89[1][9][10] = {{{&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8}}};
    const int32_t **l_88 = &l_89[0][0][6];
    int i, j, k;
    for (p_50 = (-14); (p_50 < 28); ++p_50)
    {
        int32_t l_69 = 0L;
        const uint8_t *l_75 = &g_17;
        uint8_t *l_77 = &g_17;
        uint8_t **l_76 = &l_77;
        int32_t l_81 = 0L;
        int32_t *l_82 = (void*)0;
        int32_t *l_83 = &l_81;
        const int32_t *l_85 = (void*)0;
        const int32_t **l_84 = &l_85;
        (*l_83) = (safe_mod_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((((safe_mod_func_int64_t_s_s((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((l_69 = l_68), (safe_rshift_func_int8_t_s_u((!((safe_mul_func_int16_t_s_s(0x6007L, ((void*)0 != l_75))) >= ((void*)0 != l_75))), 6)))), (p_51 > (((*l_76) = (void*)0) == ((safe_add_func_uint8_t_u_u(l_68, 3L)) , l_80))))), 1L)) , 2L) != (*g_7)), p_48)) < g_17), l_81));
        (*l_84) = &g_8;
        (*l_84) = (void*)0;
    }
    for (p_50 = 28; (p_50 == 48); p_50 = safe_add_func_int8_t_s_s(p_50, 1))
    {
        return &g_17;
    }
    (*l_88) = &g_8;
    return &g_17;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_15[i][j][k], "g_15[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_181[i][j][k], "g_181[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_195[i], "g_195[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_226[i], "g_226[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_282[i], "g_282[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_308[i][j], "g_308[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_321[i][j], "g_321[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_417[i], "g_417[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_625, "g_625", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_874[i], "g_874[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_876, "g_876", print_hash_value);
    transparent_crc(g_955, "g_955", print_hash_value);
    transparent_crc(g_991, "g_991", print_hash_value);
    transparent_crc(g_1635, "g_1635", print_hash_value);
    transparent_crc(g_1730, "g_1730", print_hash_value);
    transparent_crc(g_1801, "g_1801", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1803[i][j], "g_1803[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2076, "g_2076", print_hash_value);
    transparent_crc(g_2141, "g_2141", print_hash_value);
    transparent_crc(g_2142, "g_2142", print_hash_value);
    transparent_crc(g_2191, "g_2191", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
