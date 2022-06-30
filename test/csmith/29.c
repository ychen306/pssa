// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = CEF6A45C
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
   const uint8_t f0;
   uint8_t f1;
};


static int32_t g_2 = 0x2C70BB74L;
static int32_t g_6 = 0x5E00FE1CL;
static int16_t g_70 = (-10L);
static int32_t *g_82[5][1] = {{&g_6},{(void*)0},{&g_6},{(void*)0},{&g_6}};
static int32_t **g_81 = &g_82[0][0];
static uint16_t g_86 = 0x7725L;
static union U0 g_106[3] = {{0xE8L},{0xE8L},{0xE8L}};
static uint64_t g_108 = 0x566449D4C0F60069LL;
static int8_t g_115 = 5L;
static uint64_t g_117[4] = {18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL};
static uint8_t g_162 = 0x4FL;
static int16_t *g_172 = (void*)0;
static int16_t **g_171 = &g_172;
static uint16_t *g_224[5][3] = {{&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86}};
static uint32_t g_279 = 5UL;
static int64_t g_293 = (-3L);
static uint32_t g_337 = 4294967295UL;
static uint8_t g_433 = 255UL;
static const uint16_t *g_485 = &g_86;
static const uint16_t **g_484 = &g_485;
static int64_t g_491 = (-10L);
static uint8_t g_614 = 0x8CL;
static uint8_t *g_634 = &g_106[2].f1;
static uint8_t **g_633 = &g_634;
static const uint32_t **g_649 = (void*)0;
static int64_t g_679 = 0xE4E7661FEB5874D3LL;
static int32_t g_710 = 0xA9EFE2B2L;
static union U0 g_754 = {0UL};
static int32_t ***g_795 = &g_81;
static int16_t ** const *g_825 = &g_171;
static int16_t ** const **g_824 = &g_825;
static int16_t ***g_827 = (void*)0;
static int16_t ****g_826 = &g_827;
static uint16_t g_836[7][8][4] = {{{3UL,65527UL,0UL,0xC2DAL},{0x0346L,0x68B4L,65531UL,65534UL},{0x4025L,0xD27DL,0x68DBL,65527UL},{65535UL,0xD11BL,0x30E5L,0x68DBL},{0x1D5CL,65529UL,0x1D5CL,0x21ECL},{0x9951L,0x56BDL,0x863DL,65527UL},{0xA8BCL,65530UL,0xA17CL,0x56BDL},{3UL,1UL,0xA17CL,9UL}},{{0xA8BCL,0UL,0x863DL,0xD27DL},{0x9951L,65535UL,0UL,65535UL},{0UL,65535UL,0xCB3AL,0xDCB2L},{0x62FCL,0UL,3UL,0xC2DAL},{0x1D5CL,0UL,65529UL,9UL},{0xAAB5L,0x62FCL,0x56BDL,2UL},{65531UL,0x508FL,0xDCB2L,1UL},{0x975CL,0x56BDL,65530UL,65535UL}},{{0x62FCL,1UL,0UL,65530UL},{0xC2DAL,0xFBD6L,0xD27DL,0UL},{65534UL,65527UL,0x863DL,0xAC06L},{65527UL,0x508FL,5UL,0x56BDL},{0x68DBL,65529UL,65529UL,0x68DBL},{0xA8BCL,0x21ECL,1UL,0xC2DAL},{1UL,65535UL,0xD27DL,65529UL},{0UL,0x420FL,0xCB3AL,65529UL}},{{5UL,65535UL,65531UL,0xC2DAL},{0x975CL,0x21ECL,65535UL,0x68DBL},{0xAAB5L,65529UL,2UL,0x56BDL},{65530UL,0x508FL,65529UL,0xAC06L},{65535UL,65527UL,65530UL,0UL},{5UL,0xFBD6L,0UL,65530UL},{0UL,1UL,0xC2DAL,65535UL},{65534UL,0x56BDL,1UL,1UL}},{{1UL,0x508FL,0xA17CL,2UL},{0x68B4L,0x62FCL,65529UL,9UL},{65527UL,0UL,0xABF1L,0xC2DAL},{0x9951L,0UL,0xC2DAL,0xDCB2L},{0UL,65535UL,0UL,65535UL},{65529UL,65535UL,3UL,0xD27DL},{65535UL,0UL,65535UL,9UL},{65531UL,1UL,65532UL,0x56BDL}},{{65531UL,65530UL,65535UL,65527UL},{65535UL,0x56BDL,3UL,0x21ECL},{65529UL,0xFBD6L,0UL,3UL},{0UL,65534UL,0xC2DAL,0UL},{0x9951L,65535UL,0xABF1L,1UL},{65527UL,65530UL,65529UL,65532UL},{0x68B4L,65529UL,0xA17CL,3UL},{1UL,0UL,1UL,0xD27DL}},{{65534UL,65535UL,0xC2DAL,65529UL},{0UL,0xD11BL,0UL,65535UL},{5UL,0UL,65530UL,0UL},{65535UL,0x21ECL,65529UL,3UL},{65530UL,1UL,1UL,1UL},{65535UL,65535UL,0x9951L,0UL},{0xD27DL,0x62FCL,65529UL,0x91E8L},{9UL,65527UL,0x975CL,65529UL}}};
static uint64_t *g_872 = &g_117[0];
static uint64_t *g_877 = &g_117[1];
static uint32_t g_920 = 0x42EAF9BEL;
static uint32_t *g_921 = &g_920;
static uint32_t *g_922 = &g_920;
static int32_t g_934 = 0x8F153B80L;
static const uint16_t ***g_1159 = (void*)0;
static uint32_t g_1197 = 4294967293UL;
static int32_t g_1238[4] = {0xC2733604L,0xC2733604L,0xC2733604L,0xC2733604L};
static int8_t g_1275 = 0L;
static uint16_t **g_1334 = &g_224[4][1];
static uint16_t ***g_1333 = &g_1334;
static uint8_t g_1424 = 255UL;
static int32_t g_1434 = (-1L);
static uint8_t g_1489 = 255UL;
static uint8_t g_1490 = 255UL;
static const int8_t g_1504 = (-3L);
static int64_t * const *g_1509 = (void*)0;
static int64_t g_1512 = (-1L);
static uint32_t g_1559 = 0x1EA692EBL;
static int32_t *g_1595 = &g_2;
static int32_t *g_1645 = &g_710;
static int32_t **g_1644 = &g_1645;
static union U0 g_1838 = {0x2CL};
static union U0 *g_1837 = &g_1838;
static int32_t ****g_1845 = (void*)0;
static int32_t ***** const g_1844 = &g_1845;
static uint32_t g_1867 = 4294967287UL;
static union U0 **g_1880 = &g_1837;
static union U0 ***g_1879[7][2][9] = {{{&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880},{&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880}},{{&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880},{&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880}},{{&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880},{&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880}},{{&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880},{&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880}},{{&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880},{&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880}},{{&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880},{&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880}},{{&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880},{&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880,&g_1880}}};
static int8_t *g_1890 = &g_1275;
static uint32_t g_1937 = 0UL;
static uint64_t g_1974[6][8][5] = {{{18446744073709551615UL,0x10AD25280A2C43BFLL,0UL,0x2A10EE6F2705C3F0LL,0x97A9BB2745457CE5LL},{0UL,0x10AD25280A2C43BFLL,18446744073709551615UL,18446744073709551615UL,0x10AD25280A2C43BFLL},{0x4A95EC07C900C8BCLL,18446744073709551615UL,0x9C0935631982B399LL,0x10AD25280A2C43BFLL,0x97A9BB2745457CE5LL},{18446744073709551615UL,18446744073709551615UL,0x9C0935631982B399LL,18446744073709551611UL,0x9C0935631982B399LL},{0x97A9BB2745457CE5LL,0x97A9BB2745457CE5LL,18446744073709551615UL,0x4A95EC07C900C8BCLL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,0UL,0x4A95EC07C900C8BCLL,0x4A95EC07C900C8BCLL},{0x4A95EC07C900C8BCLL,8UL,0x4A95EC07C900C8BCLL,18446744073709551611UL,0x2A10EE6F2705C3F0LL},{0UL,18446744073709551615UL,18446744073709551615UL,0x10AD25280A2C43BFLL,0x2A10EE6F2705C3F0LL}},{{18446744073709551615UL,0x97A9BB2745457CE5LL,0x97A9BB2745457CE5LL,18446744073709551615UL,0x4A95EC07C900C8BCLL},{0x9C0935631982B399LL,0x97A9BB2745457CE5LL,8UL,18446744073709551615UL,0x9C0935631982B399LL},{0UL,8UL,0x10AD25280A2C43BFLL,8UL,0UL},{0x97A9BB2745457CE5LL,18446744073709551615UL,0x4A95EC07C900C8BCLL,18446744073709551615UL,18446744073709551611UL},{0x4A95EC07C900C8BCLL,18446744073709551615UL,0x97A9BB2745457CE5LL,0x97A9BB2745457CE5LL,18446744073709551615UL},{0x10AD25280A2C43BFLL,8UL,0UL,18446744073709551615UL,18446744073709551611UL},{8UL,0x97A9BB2745457CE5LL,0UL,18446744073709551615UL,0UL},{18446744073709551611UL,18446744073709551611UL,0x97A9BB2745457CE5LL,0x10AD25280A2C43BFLL,0x9C0935631982B399LL}},{{8UL,0x9C0935631982B399LL,0x4A95EC07C900C8BCLL,0x10AD25280A2C43BFLL,0x10AD25280A2C43BFLL},{0x10AD25280A2C43BFLL,0x2A10EE6F2705C3F0LL,0x10AD25280A2C43BFLL,18446744073709551615UL,18446744073709551615UL},{0x4A95EC07C900C8BCLL,0x9C0935631982B399LL,8UL,18446744073709551615UL,18446744073709551615UL},{0x97A9BB2745457CE5LL,18446744073709551611UL,18446744073709551611UL,0x97A9BB2745457CE5LL,0x10AD25280A2C43BFLL},{0UL,0x97A9BB2745457CE5LL,8UL,18446744073709551615UL,0x9C0935631982B399LL},{0UL,8UL,0x10AD25280A2C43BFLL,8UL,0UL},{0x97A9BB2745457CE5LL,18446744073709551615UL,0x4A95EC07C900C8BCLL,18446744073709551615UL,18446744073709551611UL},{0x4A95EC07C900C8BCLL,18446744073709551615UL,0x97A9BB2745457CE5LL,0x97A9BB2745457CE5LL,18446744073709551615UL}},{{0x10AD25280A2C43BFLL,8UL,0UL,18446744073709551615UL,18446744073709551611UL},{8UL,0x97A9BB2745457CE5LL,0UL,18446744073709551615UL,0UL},{18446744073709551611UL,18446744073709551611UL,0x97A9BB2745457CE5LL,0x10AD25280A2C43BFLL,0x9C0935631982B399LL},{8UL,0x9C0935631982B399LL,0x4A95EC07C900C8BCLL,0x10AD25280A2C43BFLL,0x10AD25280A2C43BFLL},{0x10AD25280A2C43BFLL,0x2A10EE6F2705C3F0LL,0x10AD25280A2C43BFLL,18446744073709551615UL,18446744073709551615UL},{0x4A95EC07C900C8BCLL,0x9C0935631982B399LL,8UL,18446744073709551615UL,18446744073709551615UL},{0x97A9BB2745457CE5LL,18446744073709551611UL,18446744073709551611UL,0x97A9BB2745457CE5LL,0x10AD25280A2C43BFLL},{0UL,0x97A9BB2745457CE5LL,8UL,18446744073709551615UL,0x9C0935631982B399LL}},{{0UL,8UL,0x10AD25280A2C43BFLL,8UL,0UL},{0x97A9BB2745457CE5LL,18446744073709551615UL,0x4A95EC07C900C8BCLL,18446744073709551615UL,18446744073709551611UL},{0x4A95EC07C900C8BCLL,18446744073709551615UL,0x97A9BB2745457CE5LL,0x97A9BB2745457CE5LL,18446744073709551615UL},{0x10AD25280A2C43BFLL,8UL,0UL,18446744073709551615UL,18446744073709551611UL},{8UL,0x97A9BB2745457CE5LL,0UL,18446744073709551615UL,0UL},{18446744073709551611UL,18446744073709551611UL,0x97A9BB2745457CE5LL,0x10AD25280A2C43BFLL,0x9C0935631982B399LL},{8UL,0x9C0935631982B399LL,0x4A95EC07C900C8BCLL,0x10AD25280A2C43BFLL,0x10AD25280A2C43BFLL},{0x10AD25280A2C43BFLL,0x2A10EE6F2705C3F0LL,0x10AD25280A2C43BFLL,18446744073709551615UL,18446744073709551615UL}},{{0x4A95EC07C900C8BCLL,0x9C0935631982B399LL,8UL,18446744073709551615UL,18446744073709551615UL},{0x97A9BB2745457CE5LL,18446744073709551611UL,18446744073709551611UL,0x97A9BB2745457CE5LL,0x10AD25280A2C43BFLL},{0UL,0x97A9BB2745457CE5LL,8UL,18446744073709551615UL,0x9C0935631982B399LL},{0UL,8UL,0x10AD25280A2C43BFLL,8UL,0UL},{0x97A9BB2745457CE5LL,18446744073709551615UL,0x4A95EC07C900C8BCLL,18446744073709551615UL,18446744073709551611UL},{0x4A95EC07C900C8BCLL,18446744073709551615UL,0x97A9BB2745457CE5LL,0x97A9BB2745457CE5LL,18446744073709551615UL},{0x10AD25280A2C43BFLL,8UL,0UL,18446744073709551615UL,18446744073709551611UL},{8UL,0x97A9BB2745457CE5LL,0x4A95EC07C900C8BCLL,8UL,0x4A95EC07C900C8BCLL}}};
static uint32_t *g_1982 = &g_1197;
static uint32_t **g_1981 = &g_1982;
static int8_t g_1985 = 0L;
static int32_t ***g_1997 = &g_1644;
static const uint8_t g_2159 = 255UL;
static const uint8_t g_2160 = 1UL;
static const uint8_t g_2161 = 0xB1L;
static const uint8_t g_2162 = 5UL;
static const uint8_t g_2163 = 0x2AL;
static const uint8_t g_2164[9][2] = {{250UL,0x06L},{250UL,0x06L},{250UL,0x06L},{250UL,0x06L},{250UL,0x06L},{250UL,0x06L},{250UL,0x06L},{250UL,0x06L},{250UL,0x06L}};
static const uint8_t g_2165[5] = {2UL,2UL,2UL,2UL,2UL};
static const uint8_t g_2166 = 1UL;
static const uint8_t g_2167 = 0x5EL;
static const uint8_t g_2168 = 255UL;
static const uint8_t g_2169 = 0x19L;
static const uint8_t g_2170 = 253UL;
static const uint8_t g_2171 = 0UL;
static const uint8_t g_2172 = 1UL;
static const uint8_t g_2173 = 0xCFL;



static uint64_t func_1(void);
static int8_t func_27(int32_t * const p_28, int64_t p_29, const uint16_t p_30, uint64_t p_31, const uint8_t p_32);
static int32_t * const func_33(int32_t p_34, const int32_t p_35, int64_t p_36, int32_t * p_37);
static uint8_t func_40(int32_t * p_41, int32_t * p_42);
static const int32_t * func_48(uint8_t p_49, int32_t ** p_50);
static int32_t func_53(int32_t * p_54, uint32_t p_55, uint32_t p_56);
static int32_t * func_57(int64_t p_58);
static int64_t func_59(int32_t ** p_60, int32_t * p_61, int32_t p_62, int32_t * p_63, int32_t p_64);
static uint32_t func_65(int16_t p_66, const int16_t p_67);
static int32_t *** func_76(int32_t ** p_77, uint32_t p_78, int32_t p_79, int32_t * p_80);
# 129 "<stdin>"
static uint64_t func_1(void)
{
    uint64_t l_20 = 0x1FDBD0176DF7E441LL;
    int32_t *l_43 = &g_2;
    const int8_t l_1548 = (-1L);
    int16_t l_1665[4][10] = {{0x3BDDL,0L,0L,0x3BDDL,0x5B86L,(-1L),(-1L),0x5B86L,0x3BDDL,0L},{0x3BDDL,0x3BDDL,(-1L),0L,0x5B86L,0x5B86L,0L,(-1L),0x3BDDL,0x3BDDL},{0x5B86L,0L,(-1L),0x3BDDL,0x3BDDL,(-1L),0L,0x5B86L,0x5B86L,0L},{0x5B86L,0x3BDDL,0L,0L,0x3BDDL,0x5B86L,(-1L),(-1L),0x5B86L,0x3BDDL}};
    const union U0 *l_1723 = (void*)0;
    uint64_t l_1732[2];
    int16_t l_1767 = 0x6486L;
    int16_t l_1769 = 0x7793L;
    const uint32_t l_1774[5][6] = {{0x632089B6L,0x632089B6L,0x632089B6L,0x632089B6L,0x632089B6L,0x632089B6L},{0x632089B6L,0x632089B6L,0x632089B6L,0x632089B6L,0x632089B6L,0x632089B6L},{0x632089B6L,0x632089B6L,0x632089B6L,0x632089B6L,0x632089B6L,0x632089B6L},{0x632089B6L,0x632089B6L,0x632089B6L,0x632089B6L,0x632089B6L,0x632089B6L},{0x632089B6L,0x632089B6L,0x632089B6L,0x632089B6L,0x632089B6L,0x632089B6L}};
    int32_t l_1781 = 0x88A84DE0L;
    int32_t *l_1785[8][9][3] = {{{&g_710,&g_1238[2],&g_1434},{(void*)0,&g_1238[2],&g_1238[1]},{(void*)0,&g_710,&g_1434},{&g_710,&g_1238[2],&g_1238[2]},{&g_1434,(void*)0,&g_710},{&g_1434,(void*)0,&g_1238[2]},{&g_1434,&g_1238[2],&g_1434},{&g_1238[1],&g_1434,&g_1238[1]},{&g_710,&g_1434,&g_1434}},{{&g_1434,&g_1238[2],(void*)0},{&g_710,(void*)0,(void*)0},{&g_1434,(void*)0,&g_710},{&g_710,&g_1238[2],&g_1434},{&g_1434,&g_710,&g_1434},{&g_710,&g_1238[2],&g_1434},{&g_1238[1],&g_1238[2],&g_1434},{&g_1434,&g_1434,&g_710},{&g_1434,&g_1238[2],(void*)0}},{{&g_1434,&g_1434,(void*)0},{&g_710,&g_1238[2],&g_1434},{(void*)0,&g_1238[2],&g_1238[1]},{(void*)0,&g_710,&g_1434},{&g_710,&g_1238[2],&g_1238[2]},{&g_1434,(void*)0,&g_710},{&g_1434,(void*)0,&g_1238[2]},{&g_1434,&g_1238[2],&g_1434},{&g_1238[1],&g_1434,&g_1238[1]}},{{&g_710,&g_1434,&g_1434},{&g_1434,&g_1238[2],(void*)0},{&g_710,(void*)0,(void*)0},{&g_1434,(void*)0,&g_710},{&g_710,&g_1238[2],(void*)0},{(void*)0,(void*)0,&g_1434},{&g_1434,&g_1434,&g_1434},{(void*)0,&g_1434,(void*)0},{&g_1434,&g_710,&g_1238[3]}},{{&g_1238[2],&g_1238[2],&g_1238[2]},{&g_1238[2],&g_710,&g_1434},{(void*)0,&g_1434,(void*)0},{&g_1238[2],&g_1434,(void*)0},{&g_1238[2],(void*)0,&g_1238[2]},{(void*)0,&g_1434,&g_1434},{&g_1238[2],&g_1434,(void*)0},{&g_1238[2],&g_1434,&g_1434},{&g_1434,&g_1238[2],&g_1238[2]}},{{(void*)0,(void*)0,(void*)0},{&g_1434,(void*)0,(void*)0},{(void*)0,&g_1238[2],&g_1434},{&g_1434,&g_1434,&g_1238[2]},{(void*)0,&g_1434,&g_1238[3]},{&g_1434,&g_1434,(void*)0},{(void*)0,(void*)0,&g_1434},{&g_1434,&g_1434,&g_1434},{(void*)0,&g_1434,(void*)0}},{{&g_1434,&g_710,&g_1238[3]},{&g_1238[2],&g_1238[2],&g_1238[2]},{&g_1238[2],&g_710,&g_1434},{(void*)0,&g_1434,(void*)0},{&g_1238[2],&g_1434,(void*)0},{&g_1238[2],(void*)0,&g_1238[2]},{(void*)0,&g_1434,&g_1434},{&g_1238[2],&g_1434,(void*)0},{&g_1238[2],&g_1434,&g_1434}},{{&g_1434,&g_1238[2],&g_1238[2]},{(void*)0,(void*)0,(void*)0},{&g_1434,(void*)0,(void*)0},{(void*)0,&g_1238[2],&g_1434},{&g_1434,&g_1434,&g_1238[2]},{(void*)0,&g_1434,&g_1238[3]},{&g_1434,&g_1434,(void*)0},{(void*)0,(void*)0,&g_1434},{&g_1434,&g_1434,&g_1434}}};
    int32_t l_1798[6] = {0L,0xC267C0E1L,0L,0L,0xC267C0E1L,0L};
    uint32_t l_1864 = 0x85975157L;
    int16_t ***l_1876 = &g_171;
    int32_t l_1883[6] = {(-10L),(-1L),(-10L),(-10L),(-1L),(-10L)};
    int16_t l_1961[2][3] = {{0x17C7L,0x17C7L,0x17C7L},{0x691FL,0x691FL,0x691FL}};
    int32_t *l_1972[1][3];
    int32_t ***l_1995 = &g_1644;
    const int32_t *l_2014 = &g_2;
    const int32_t **l_2013 = &l_2014;
    const int32_t ***l_2012[4][1];
    int64_t l_2030 = 0xB71A2309B4A497D1LL;
    int8_t l_2112 = 0x94L;
    uint32_t l_2151 = 9UL;
    int64_t *l_2204 = &g_679;
    int64_t **l_2203 = &l_2204;
    union U0 l_2224[3][10][8] = {{{{1UL},{1UL},{5UL},{0xC9L},{247UL},{0xC9L},{5UL},{1UL}},{{0x05L},{0x33L},{1UL},{0x9FL},{0xB5L},{0x5CL},{0x3BL},{5UL}},{{1UL},{0xC9L},{0xDCL},{0x3BL},{0x05L},{0x05L},{0x3BL},{0xDCL}},{{0x3BL},{0x3BL},{1UL},{0x5CL},{248UL},{252UL},{5UL},{1UL}},{{248UL},{252UL},{5UL},{1UL},{255UL},{0xDCL},{255UL},{1UL}},{{252UL},{1UL},{252UL},{0x5CL},{0x7EL},{1UL},{0xC9L},{0xDCL}},{{0x9FL},{0xB5L},{0x5CL},{0x3BL},{0xDCL},{1UL},{1UL},{0xDCL}},{{0x05L},{5UL},{5UL},{0x05L},{1UL},{1UL},{0x33L},{247UL}},{{0x7EL},{0x3BL},{1UL},{1UL},{5UL},{0xC9L},{247UL},{0xC9L}},{{252UL},{0x3BL},{0x33L},{0x3BL},{252UL},{1UL},{0x05L},{0x9FL}}},{{{1UL},{5UL},{252UL},{248UL},{0x5CL},{1UL},{0x3BL},{0x3BL}},{{247UL},{255UL},{252UL},{252UL},{255UL},{247UL},{0x05L},{0x5CL}},{{0x5CL},{0xC9L},{0x33L},{0x9FL},{0x3BL},{248UL},{247UL},{1UL}},{{0x33L},{0x7EL},{1UL},{0x9FL},{1UL},{0x7EL},{0x33L},{0x5CL}},{{255UL},{1UL},{5UL},{252UL},{248UL},{0x5CL},{1UL},{0x3BL}},{{0x9FL},{1UL},{0xB5L},{248UL},{248UL},{0xB5L},{1UL},{0x9FL}},{{255UL},{0x9FL},{0x7EL},{0x3BL},{1UL},{1UL},{5UL},{0xC9L}},{{0x33L},{247UL},{0xDCL},{1UL},{0x3BL},{1UL},{0xDCL},{247UL}},{{0x5CL},{0x9FL},{0xC9L},{0x05L},{255UL},{0xB5L},{1UL},{0xDCL}},{{247UL},{1UL},{248UL},{1UL},{0x5CL},{0x5CL},{1UL},{248UL}}},{{{1UL},{1UL},{0xC9L},{0xB5L},{252UL},{0x7EL},{0xDCL},{0x33L}},{{252UL},{0x7EL},{0xDCL},{0x33L},{5UL},{248UL},{5UL},{0x33L}},{{0x7EL},{0xC9L},{0x7EL},{0xB5L},{1UL},{247UL},{1UL},{248UL}},{{0x05L},{255UL},{0xB5L},{1UL},{0xDCL},{1UL},{1UL},{0xDCL}},{{0x05L},{5UL},{5UL},{0x05L},{1UL},{1UL},{0x33L},{247UL}},{{0x7EL},{0x3BL},{1UL},{1UL},{5UL},{0xC9L},{247UL},{0xC9L}},{{252UL},{0x3BL},{0x33L},{0x3BL},{252UL},{1UL},{0x05L},{0x9FL}},{{1UL},{5UL},{252UL},{248UL},{0x5CL},{1UL},{0x3BL},{0x3BL}},{{247UL},{255UL},{252UL},{252UL},{255UL},{247UL},{0x05L},{0x5CL}},{{0x5CL},{0xC9L},{0x33L},{0x9FL},{0x3BL},{248UL},{247UL},{1UL}}}};
    uint8_t *l_2236 = &g_106[2].f1;
    uint32_t l_2238[8][10][1] = {{{0x749D1E09L},{0UL},{0x3E47392FL},{4294967289UL},{0x65914A9AL},{0x96D35BB4L},{0x65914A9AL},{4294967289UL},{0x3E47392FL},{0xDA3BA33FL}},{{0x7B8FE2C7L},{1UL},{1UL},{0UL},{0xD0C4C680L},{4294967294UL},{9UL},{4294967294UL},{0xD0C4C680L},{0UL}},{{1UL},{1UL},{0x7B8FE2C7L},{0xDA3BA33FL},{0x3E47392FL},{4294967289UL},{0x65914A9AL},{0x96D35BB4L},{0x65914A9AL},{4294967289UL}},{{0x3E47392FL},{0xDA3BA33FL},{0x7B8FE2C7L},{1UL},{1UL},{0UL},{0xD0C4C680L},{4294967294UL},{9UL},{4294967294UL}},{{0xD0C4C680L},{0UL},{1UL},{1UL},{0x7B8FE2C7L},{0xDA3BA33FL},{0x3E47392FL},{4294967289UL},{0x65914A9AL},{0x96D35BB4L}},{{0x65914A9AL},{4294967289UL},{0x3E47392FL},{0xDA3BA33FL},{0x7B8FE2C7L},{1UL},{1UL},{0UL},{0xD0C4C680L},{4294967294UL}},{{9UL},{4294967294UL},{0xD0C4C680L},{0UL},{1UL},{1UL},{0x7B8FE2C7L},{0xDA3BA33FL},{0x3E47392FL},{4294967289UL}},{{0x65914A9AL},{0x96D35BB4L},{0x65914A9AL},{4294967289UL},{0x3E47392FL},{0xDA3BA33FL},{0x7B8FE2C7L},{1UL},{1UL},{0UL}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1732[i] = 0xD99CB07BD16BC444LL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1972[i][j] = &g_1238[3];
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_2012[i][j] = &l_2013;
    }
lbl_1549:
    for (g_2 = 0; (g_2 == 19); g_2++)
    {
        int32_t *l_5 = &g_6;
        int32_t *l_7 = &g_6;
        int32_t *l_8 = &g_6;
        int32_t *l_9 = &g_6;
        int32_t l_10[1][10] = {{0xEC4279C4L,0xEC4279C4L,0xEC4279C4L,0xEC4279C4L,0xEC4279C4L,0xEC4279C4L,0xEC4279C4L,0xEC4279C4L,0xEC4279C4L,0xEC4279C4L}};
        int32_t *l_11 = (void*)0;
        int32_t *l_12 = &g_6;
        int32_t *l_13 = &l_10[0][9];
        int32_t *l_14 = &l_10[0][8];
        int32_t *l_15 = &l_10[0][6];
        int32_t *l_16 = &l_10[0][5];
        int32_t *l_17 = &g_6;
        int32_t *l_18 = &g_6;
        int32_t *l_19 = &g_6;
        int32_t **l_44 = &l_15;
        int32_t **l_45 = &l_18;
        int i, j;
        l_20++;
    }
    for (g_162 = 0; (g_162 <= 3); g_162 += 1)
    {
        const uint32_t l_1547 = 6UL;
        uint8_t l_1581[5][4][8] = {{{0xA9L,249UL,8UL,0x59L,8UL,249UL,0xA9L,0xA9L},{249UL,0x59L,0UL,0UL,0x59L,249UL,248UL,249UL},{0x59L,249UL,248UL,249UL,0x59L,0UL,0UL,0x59L},{249UL,0xA9L,0xA9L,249UL,8UL,0x59L,8UL,249UL}},{{0xA9L,8UL,0xA9L,0UL,248UL,248UL,0UL,0xA9L},{8UL,8UL,248UL,0x59L,0xB2L,0x59L,248UL,8UL},{8UL,0xA9L,0UL,248UL,248UL,0UL,0xA9L,8UL},{0xA9L,249UL,8UL,0x59L,8UL,249UL,0xA9L,0xA9L}},{{249UL,0x59L,0UL,0UL,0x59L,249UL,248UL,249UL},{0x59L,249UL,248UL,249UL,0x59L,0UL,0UL,0x59L},{249UL,0xA9L,0xA9L,249UL,8UL,0x59L,8UL,249UL},{0xA9L,8UL,0xA9L,0UL,248UL,248UL,0UL,0xA9L}},{{8UL,8UL,248UL,0x59L,0xB2L,0x59L,248UL,0xB2L},{0xB2L,0x59L,248UL,8UL,8UL,248UL,0x59L,0xB2L},{0x59L,0xA9L,0xB2L,0UL,0xB2L,0xA9L,0x59L,0x59L},{0xA9L,0UL,248UL,248UL,0UL,0xA9L,8UL,0xA9L}},{{0UL,0xA9L,8UL,0xA9L,0UL,248UL,248UL,0UL},{0xA9L,0x59L,0x59L,0xA9L,0xB2L,0UL,0xB2L,0xA9L},{0x59L,0xB2L,0x59L,248UL,8UL,8UL,248UL,0x59L},{0xB2L,0xB2L,8UL,0UL,249UL,0UL,8UL,0xB2L}}};
        int32_t l_1629 = 1L;
        uint16_t **** const l_1636 = &g_1333;
        int32_t *l_1643 = &g_1434;
        int32_t **l_1642 = &l_1643;
        int16_t ***l_1694[2];
        int32_t **l_1755 = &g_82[0][0];
        uint64_t l_1768 = 18446744073709551615UL;
        uint64_t l_1770 = 0x4E5FC4B314129A9BLL;
        uint16_t l_1771 = 4UL;
        uint64_t l_1782 = 0xEDA640A679F890E1LL;
        const uint32_t l_1799 = 1UL;
        uint32_t l_1841 = 2UL;
        uint32_t l_1885 = 0x99EB91B5L;
        uint8_t l_1888[8] = {2UL,2UL,4UL,2UL,2UL,4UL,2UL,2UL};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1694[i] = (void*)0;
        (*l_43) = l_1547;
        if (l_1548)
            continue;
        if (l_1548)
            goto lbl_1549;
    }
    for (g_1559 = 0; (g_1559 <= 3); g_1559 += 1)
    {
        uint8_t l_1889 = 0x19L;
        uint16_t *l_1899[5] = {&g_86,&g_86,&g_86,&g_86,&g_86};
        int16_t l_1904 = (-10L);
        int16_t l_1990 = 0x0601L;
        int32_t l_1999 = 0xC46A55F1L;
        int64_t l_2000 = 0xAA254E6D5C6145ADLL;
        uint32_t l_2003 = 0x243F2AD8L;
        uint32_t l_2026 = 18446744073709551615UL;
        uint16_t ***l_2044 = &g_1334;
        int64_t l_2047 = 0x45F6027C913D01BELL;
        uint16_t l_2088 = 65527UL;
        int32_t l_2176 = 0x226565C3L;
        uint64_t **l_2196 = (void*)0;
        uint64_t ***l_2195 = &l_2196;
        int64_t *l_2202 = &g_293;
        int64_t * const *l_2201[2];
        int i;
        for (i = 0; i < 2; i++)
            l_2201[i] = &l_2202;
    }
    if ((*l_43))
    {
        uint16_t l_2231 = 65526UL;
        union U0 ** const *l_2237[3];
        uint32_t *l_2243 = &l_1864;
        uint32_t **l_2242 = &l_2243;
        int32_t **l_2244 = &g_82[0][0];
        int32_t * const l_2245 = &g_6;
        int32_t **l_2246 = (void*)0;
        int32_t **l_2247[10][10] = {{&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0},{&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0},{&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0},{&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0},{&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0},{&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0},{&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0},{&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0},{&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0},{&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0,&g_82[0][0],(void*)0}};
        int32_t **l_2248 = (void*)0;
        int32_t **l_2249 = (void*)0;
        int i, j;
        for (i = 0; i < 3; i++)
            l_2237[i] = &g_1880;
        --l_2231;
        (*l_2244) = func_33((((((((safe_mod_func_int8_t_s_s((l_2236 != l_2236), ((l_2237[0] == ((((l_2238[7][3][0] ^ (((*g_1981) == ((*l_2242) = func_57(((safe_mod_func_int32_t_s_s((((!0x3AL) < (0x4F86F15E18185856LL || ((void*)0 == &l_1995))) == l_2231), l_2231)) & l_2231)))) < l_2231)) ^ 7UL) , (**g_1880)) , l_2237[0])) && l_2231))) >= g_1238[2]) & 6UL) != l_2231) != l_2231) , (*l_2014)) < 6L), (**g_1644), l_2231, &l_1781);
        (*l_2244) = l_2245;
    }
    else
    {
        uint32_t l_2252[9] = {0x741234AEL,0xEACA0710L,0x741234AEL,0xEACA0710L,0x741234AEL,0xEACA0710L,0x741234AEL,0xEACA0710L,0x741234AEL};
        int32_t *l_2257 = (void*)0;
        int32_t *l_2258 = &l_1781;
        int i;
        (*g_1595) |= (safe_rshift_func_int8_t_s_s(0xA9L, 5));
        (*l_2258) &= ((l_2252[7] < (((safe_lshift_func_uint8_t_u_s(0xB7L, 1)) > 0xCFC2AED933635BB3LL) , (((**g_1334) , ((*g_1890) || (l_2224[1][8][1] , (**l_2013)))) | (safe_rshift_func_int8_t_s_s(l_2252[1], 5))))) | 0x7F68385CL);
    }
    return (*g_877);
}







static int8_t func_27(int32_t * const p_28, int64_t p_29, const uint16_t p_30, uint64_t p_31, const uint8_t p_32)
{
    int64_t *l_1508[8] = {&g_491,&g_491,&g_491,&g_491,&g_491,&g_491,&g_491,&g_491};
    int64_t **l_1507 = &l_1508[1];
    int64_t * const l_1511 = &g_1512;
    int64_t * const *l_1510 = &l_1511;
    uint8_t *l_1515 = &g_1490;
    uint32_t * const l_1520 = &g_920;
    int32_t l_1523 = 0x289AD4C1L;
    int32_t *l_1524 = (void*)0;
    int32_t *l_1525 = &g_1434;
    int32_t l_1526 = (-1L);
    int32_t **l_1533 = &g_82[2][0];
    int i;
    l_1526 |= ((*p_28) = ((((safe_lshift_func_uint8_t_u_u((l_1507 != (l_1510 = g_1509)), ((0x1CA7L <= ((safe_mod_func_uint64_t_u_u(((((*g_633) = l_1515) != (void*)0) & (((*l_1525) ^= (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_1520 != ((safe_lshift_func_uint16_t_u_s(0x9688L, ((((p_29 != p_29) | 0x699CL) != l_1523) <= 0x7D2146C93E8BB466LL))) , (void*)0)), (-1L))), l_1523))) , p_31)), l_1523)) , 1UL)) , p_29))) ^ 0xB066L) , (*g_872)) || p_32));
    (*p_28) &= (safe_rshift_func_int16_t_s_u(p_32, 15));
    for (g_710 = 7; (g_710 >= 3); g_710--)
    {
        return l_1523;
    }
    for (g_1424 = (-29); (g_1424 != 55); g_1424++)
    {
        int32_t l_1539 = 1L;
        uint32_t l_1546 = 0x47B5797AL;
        (*p_28) = (((((**l_1507) |= (((((((*g_795) = l_1533) != &p_28) , (safe_mul_func_int8_t_s_s(((((((((safe_sub_func_uint32_t_u_u(g_1275, ((((0xAB7C2CA6L <= (~0xF880222328B969A8LL)) >= p_29) , (l_1539 >= (((((0xAE75C658806F2024LL & (((*g_634) = (safe_mul_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((*p_28), l_1539)) != (**g_633)), 1UL)) , p_32), l_1546))) , l_1546)) && g_86) , 0UL) > (-6L)) , p_31))) && p_32))) > (*g_877)) ^ g_117[0]) ^ p_32) , l_1546) >= (-1L)) , g_836[4][1][3]) & l_1523), 0x0DL))) & (**g_484)) > p_29) == p_30)) || (*g_872)) , 0x7AL) && g_117[0]);
        return g_1434;
    }
    return g_106[2].f0;
}







static int32_t * const func_33(int32_t p_34, const int32_t p_35, int64_t p_36, int32_t * p_37)
{
    int32_t *l_1493 = &g_934;
    int32_t *l_1494 = &g_934;
    int32_t *l_1495 = &g_934;
    int32_t *l_1496 = (void*)0;
    int32_t *l_1497 = &g_6;
    int32_t *l_1498 = (void*)0;
    int32_t *l_1499 = &g_934;
    int32_t *l_1500[1][6] = {{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6}};
    uint64_t l_1501 = 0x6650A2161D67E2EALL;
    int i, j;
    ++l_1501;
    return l_1495;
}







static uint8_t func_40(int32_t * p_41, int32_t * p_42)
{
    int16_t l_73 = 1L;
    int32_t l_1055 = 5L;
    int32_t l_1056 = 1L;
    int32_t * const *l_1099 = &g_82[0][0];
    int32_t **l_1181 = (void*)0;
    uint64_t **l_1201 = &g_877;
    const int32_t *l_1218 = &g_934;
    int16_t ** const *l_1231 = &g_171;
    union U0 l_1272[3] = {{255UL},{255UL},{255UL}};
    uint64_t l_1290 = 18446744073709551613UL;
    int32_t *l_1311 = &l_1055;
    const uint16_t ***l_1332 = (void*)0;
    uint32_t **l_1337 = &g_922;
    uint64_t l_1352 = 0xF68A8AA6097046B9LL;
    uint32_t l_1356 = 1UL;
    int32_t *l_1422[5] = {&g_934,&g_934,&g_934,&g_934,&g_934};
    uint64_t l_1432[1];
    uint8_t l_1487 = 0x5DL;
    int i;
    for (i = 0; i < 1; i++)
        l_1432[i] = 1UL;
    for (g_6 = 0; (g_6 == (-20)); g_6 = safe_sub_func_uint64_t_u_u(g_6, 4))
    {
        uint8_t l_68 = 251UL;
        int16_t *l_69 = &g_70;
        int32_t l_74 = (-3L);
        int32_t *l_75 = &g_6;
        const int32_t *l_993 = &g_6;
        const int32_t **l_992 = &l_993;
    }
    for (g_162 = 0; (g_162 != 28); g_162 = safe_add_func_int16_t_s_s(g_162, 7))
    {
        uint32_t l_1001 = 4294967293UL;
        int64_t l_1043 = 0x310AD138C1428404LL;
        int32_t l_1048 = 8L;
        union U0 l_1119[8] = {{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}};
        int16_t ****l_1157 = &g_827;
        uint64_t l_1158 = 18446744073709551615UL;
        int32_t l_1193 = 0x0E56FE67L;
        int32_t l_1195 = 0xA03752ABL;
        int32_t l_1196 = 0L;
        const union U0 *l_1208[9];
        uint16_t l_1306 = 0xB359L;
        uint16_t **l_1403 = &g_224[4][1];
        int32_t l_1405 = 0L;
        int32_t ****l_1468[10][4][6] = {{{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795},{(void*)0,(void*)0,&g_795,&g_795,(void*)0,&g_795},{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795}},{{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,(void*)0,(void*)0,&g_795,&g_795},{&g_795,&g_795,(void*)0,&g_795,(void*)0,(void*)0},{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795}},{{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795},{(void*)0,&g_795,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,&g_795,(void*)0,&g_795,&g_795}},{{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,(void*)0,&g_795,(void*)0,&g_795},{&g_795,&g_795,&g_795,&g_795,&g_795,(void*)0}},{{(void*)0,&g_795,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,(void*)0,(void*)0,&g_795,&g_795},{(void*)0,&g_795,&g_795,&g_795,(void*)0,&g_795},{&g_795,(void*)0,&g_795,&g_795,&g_795,&g_795}},{{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,&g_795,&g_795,(void*)0,&g_795},{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795}},{{(void*)0,(void*)0,&g_795,(void*)0,&g_795,(void*)0},{&g_795,&g_795,(void*)0,&g_795,&g_795,&g_795},{(void*)0,(void*)0,(void*)0,&g_795,&g_795,&g_795},{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795}},{{&g_795,(void*)0,&g_795,&g_795,(void*)0,&g_795},{(void*)0,&g_795,(void*)0,&g_795,&g_795,&g_795},{(void*)0,&g_795,&g_795,&g_795,&g_795,(void*)0},{&g_795,&g_795,&g_795,&g_795,(void*)0,(void*)0}},{{&g_795,&g_795,&g_795,&g_795,(void*)0,&g_795},{&g_795,(void*)0,(void*)0,&g_795,&g_795,&g_795},{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,&g_795,&g_795,&g_795,(void*)0}},{{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,(void*)0,&g_795,&g_795,&g_795},{&g_795,&g_795,(void*)0,&g_795,&g_795,&g_795}}};
        int16_t l_1480 = 0x06F0L;
        int64_t *l_1485 = &l_1043;
        int8_t *l_1486 = &g_1275;
        uint16_t *l_1488 = &g_836[4][1][3];
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_1208[i] = &l_1119[4];
        (*p_41) = (l_73 != (*g_877));
    }
    g_1490--;
    return (**g_633);
}







static const int32_t * func_48(uint8_t p_49, int32_t ** p_50)
{
    uint32_t l_977 = 0x83B31E07L;
    uint8_t *l_978 = &g_162;
    int32_t l_983 = 0xE6337BEDL;
    int32_t l_984 = 4L;
    int32_t l_989 = 0x33C17D57L;
    l_977 |= 0x4875F5EBL;
    l_989 = ((&p_49 == l_978) , (safe_mul_func_int16_t_s_s(((l_977 , ((((safe_rshift_func_int16_t_s_u(p_49, 1)) > (l_983 |= ((void*)0 == &g_633))) , l_977) , l_984)) ^ (((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((0x3BL | 0x22L) < 1L), (*g_634))) && l_977), 5)) , l_984) < p_49)), (*g_485))));
    for (g_279 = (-3); (g_279 <= 28); ++g_279)
    {
        return (*p_50);
    }
    return (*p_50);
}







static int32_t func_53(int32_t * p_54, uint32_t p_55, uint32_t p_56)
{
    int64_t l_901 = 0x360FF8B25696C7E8LL;
    uint32_t *l_923 = &g_920;
    int16_t l_937 = 0x32AFL;
    union U0 l_943 = {7UL};
    int32_t ****l_946 = &g_795;
    int64_t *l_947[1][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_948 = 9L;
    int32_t ****l_949[2];
    int16_t *l_957 = &g_70;
    uint16_t *l_958[5];
    int16_t l_959 = (-10L);
    uint32_t l_960 = 0x84E4A226L;
    int8_t l_967 = 0x79L;
    int16_t l_968[9][3] = {{(-8L),(-8L),(-8L)},{(-1L),(-1L),(-1L)},{(-8L),(-8L),(-8L)},{(-1L),(-1L),(-1L)},{(-8L),(-8L),(-8L)},{(-1L),(-1L),(-1L)},{(-8L),(-8L),(-8L)},{(-1L),(-1L),(-1L)},{(-8L),(-8L),(-8L)}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_949[i] = &g_795;
    for (i = 0; i < 5; i++)
        l_958[i] = &g_836[3][2][3];
    if ((*p_54))
    {
        const int32_t l_924 = (-9L);
        uint8_t *l_932 = &g_162;
        int32_t *l_933 = &g_934;
        for (g_279 = (-17); (g_279 < 3); g_279 = safe_add_func_uint32_t_u_u(g_279, 5))
        {
            int8_t l_908 = 0x1DL;
            int32_t *l_930 = (void*)0;
            if ((safe_mod_func_int8_t_s_s(g_108, l_901)))
            {
                (*g_81) = (void*)0;
                if (l_901)
                    break;
            }
            else
            {
                return p_55;
            }
            for (g_491 = 3; (g_491 >= 0); g_491 -= 1)
            {
                uint32_t *l_919[5][7][1] = {{{(void*)0},{(void*)0},{&g_920},{&g_920},{&g_920},{&g_920},{(void*)0}},{{&g_920},{&g_920},{&g_920},{(void*)0},{&g_920},{&g_920},{&g_920}},{{&g_920},{(void*)0},{(void*)0},{&g_920},{&g_920},{&g_920},{&g_920}},{{(void*)0},{&g_920},{&g_920},{&g_920},{(void*)0},{&g_920},{&g_920}},{{&g_920},{&g_920},{(void*)0},{(void*)0},{&g_920},{&g_920},{&g_920}}};
                uint32_t **l_918[7][8] = {{&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0]},{&l_919[1][1][0],&l_919[1][1][0],(void*)0,(void*)0,&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0],(void*)0},{&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0]},{(void*)0,&l_919[1][1][0],(void*)0,&l_919[1][1][0],(void*)0,(void*)0,&l_919[1][1][0],(void*)0},{(void*)0,(void*)0,&l_919[1][1][0],(void*)0,&l_919[1][1][0],(void*)0,(void*)0,&l_919[1][1][0]},{&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0],&l_919[1][1][0]},{&l_919[1][1][0],&l_919[1][1][0],(void*)0,&l_919[1][1][0],(void*)0,&l_919[1][1][0],(void*)0,&l_919[1][1][0]}};
                int32_t l_925 = 0xD3C515CEL;
                int32_t *l_926 = &l_925;
                uint64_t *l_929[7] = {&g_117[0],&g_117[0],&g_117[0],&g_117[0],&g_117[0],&g_117[0],&g_117[0]};
                int i, j, k;
                (*l_926) = (g_754.f0 , ((safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(((safe_add_func_uint64_t_u_u(p_56, l_908)) & (safe_add_func_int64_t_s_s(p_56, (safe_mul_func_uint8_t_u_u(p_56, (~((*g_877) = ((l_923 = (g_922 = (g_754 , (g_921 = func_57((0x96L <= (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((((*p_54) < (((0x8EL && (**g_633)) , l_901) && l_901)) <= l_901) , (**g_484)), l_908)) || 0xB2E928EAL), g_433)))))))) == &p_56)))))))), l_924)), l_925)) < p_56));
                for (l_901 = 3; (l_901 >= 0); l_901 -= 1)
                {
                    int i, j, k;
                    (*l_926) = (safe_sub_func_uint64_t_u_u((g_836[(l_901 + 1)][(l_901 + 2)][g_491] || (l_929[0] == &g_108)), (0x8B3CL ^ 9L)));
                }
            }
            l_930 = func_57(g_117[0]);
        }
        (*l_933) = ((safe_unary_minus_func_uint64_t_u(p_56)) , ((void*)0 != l_932));
    }
    else
    {
        int32_t *l_935 = (void*)0;
        int32_t *l_936 = (void*)0;
        l_937 = 0x307DA47EL;
    }
    for (g_614 = 11; (g_614 == 1); g_614 = safe_sub_func_uint8_t_u_u(g_614, 4))
    {
        int16_t l_940 = 1L;
        return l_940;
    }
    if (((((l_959 |= (safe_rshift_func_uint8_t_u_s((l_943 , (((*l_957) ^= ((safe_mul_func_uint8_t_u_u(((l_946 = &g_795) != ((l_948 = 0xD0F9FB01AD6EAC1CLL) , (l_937 , l_949[0]))), (safe_mul_func_uint8_t_u_u(0x6FL, (safe_mul_func_uint16_t_u_u((*g_485), ((((g_279 && (((+(safe_sub_func_int16_t_s_s((0L == p_56), p_55))) , 18446744073709551615UL) ^ g_162)) , p_56) & 0L) >= 0x5817FE6D9C13E732LL))))))) || p_55)) ^ p_56)), p_55))) <= l_960) && p_56) , (*p_54)))
    {
        uint16_t l_961 = 1UL;
        int32_t l_962 = (-1L);
        l_961 |= (*p_54);
        l_962 = 0x20CB1FE2L;
    }
    else
    {
        uint32_t **l_964[5][4][7] = {{{&g_922,&g_921,&g_921,&g_921,&g_921,&g_922,(void*)0},{&g_921,(void*)0,&g_921,&g_922,&g_921,&g_921,&l_923},{(void*)0,&g_922,&g_921,&g_921,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_921,&g_921,&g_922,(void*)0,&l_923}},{{&g_921,&g_921,&g_922,&g_921,(void*)0,&g_921,(void*)0},{&g_922,&g_921,&g_921,&g_921,&g_921,&g_922,(void*)0},{&g_921,(void*)0,&g_921,&g_922,&g_921,&g_921,&l_923},{(void*)0,&g_922,&g_921,&g_921,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_921,&g_921,&g_922,(void*)0,&l_923},{&g_921,&g_921,&g_922,&g_921,(void*)0,&g_921,(void*)0},{&g_922,&g_921,&g_921,&g_921,&g_921,&g_922,(void*)0},{&g_921,(void*)0,&g_921,&g_922,&g_921,&g_921,&l_923}},{{(void*)0,&g_922,&g_921,&g_921,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_921,&g_921,&g_922,(void*)0,&l_923},{&g_921,&g_921,&g_922,&g_921,(void*)0,&g_921,(void*)0},{&g_922,&g_921,&g_921,&g_921,&g_921,&g_922,(void*)0}},{{&g_921,(void*)0,&g_921,&g_922,&g_921,&g_921,&l_923},{(void*)0,&g_922,&g_921,&g_921,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_921,&g_921,&g_922,(void*)0,&l_923},{&g_921,&g_921,&g_922,&g_921,(void*)0,&g_921,(void*)0}}};
        uint32_t ***l_963 = &l_964[0][3][4];
        int32_t *l_965 = &g_934;
        int32_t l_966[3];
        int32_t l_969 = 0L;
        uint16_t l_970 = 0x73C0L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_966[i] = 0x7AF28591L;
        (*l_963) = &g_922;
        (***l_946) = l_965;
        ++l_970;
    }
    for (g_710 = 22; (g_710 > (-28)); g_710 = safe_sub_func_int16_t_s_s(g_710, 9))
    {
        (*g_81) = func_57((safe_lshift_func_uint16_t_u_u(p_56, 2)));
        (*g_81) = p_54;
    }
    return g_754.f0;
}







static int32_t * func_57(int64_t p_58)
{
    int32_t *l_896[2];
    int i;
    for (i = 0; i < 2; i++)
        l_896[i] = &g_6;
    (*g_81) = l_896[1];
    return l_896[0];
}







static int64_t func_59(int32_t ** p_60, int32_t * p_61, int32_t p_62, int32_t * p_63, int32_t p_64)
{
    uint16_t *l_85 = &g_86;
    uint64_t *l_107 = &g_108;
    int32_t l_111 = 0x0A1111CDL;
    int16_t l_112 = 0xCD4FL;
    const int8_t l_113 = 0x80L;
    int8_t *l_114 = &g_115;
    int16_t *l_116 = &g_70;
    int16_t **l_118 = (void*)0;
    int16_t **l_119 = &l_116;
    int16_t *l_121 = &l_112;
    int16_t **l_120 = &l_121;
    int32_t ****l_817[4] = {&g_795,&g_795,&g_795,&g_795};
    int32_t ***l_818 = &g_81;
    uint16_t l_868[8][9] = {{0UL,0xA20BL,0UL,0xA20BL,0UL,0xA20BL,0UL,0xA20BL,0UL},{65535UL,65535UL,0x77A0L,0x77A0L,65535UL,65535UL,0x77A0L,0x77A0L,65535UL},{0x69CAL,0xA20BL,0x69CAL,0xA20BL,0x69CAL,0xA20BL,0x69CAL,0xA20BL,0x69CAL},{65535UL,0x77A0L,0x77A0L,65535UL,65535UL,0x77A0L,0x77A0L,65535UL,65535UL},{0UL,0xA20BL,0UL,0xA20BL,0UL,0xA20BL,0UL,0xA20BL,0UL},{65535UL,65535UL,0x77A0L,0x77A0L,65535UL,65535UL,0x77A0L,0x77A0L,65535UL},{0x69CAL,0xA20BL,0x69CAL,0xA20BL,0x69CAL,0xA20BL,0x69CAL,0xA20BL,0x69CAL},{65535UL,0x77A0L,0x77A0L,65535UL,65535UL,0x77A0L,0x77A0L,65535UL,65535UL}};
    uint64_t *l_876 = &g_117[0];
    uint8_t l_895 = 1UL;
    int i, j;
    l_818 = func_76(g_81, ((safe_div_func_uint16_t_u_u(((*l_85)++), (safe_mul_func_int16_t_s_s((+(((((safe_sub_func_int16_t_s_s((p_64 && ((l_85 == ((*l_120) = ((*l_119) = ((((g_117[0] ^= (((*l_116) = ((safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint8_t_u_u(g_2, (safe_lshift_func_int8_t_s_u(((*l_114) |= ((((safe_mod_func_uint8_t_u_u(255UL, (safe_sub_func_int8_t_s_s(p_64, (safe_unary_minus_func_uint64_t_u(((18446744073709551615UL ^ (((safe_mul_func_int8_t_s_s(((((((g_106[2] , ((((*l_107)--) , g_6) == g_106[2].f0)) > l_111) < 0x91B6L) >= l_112) == 255UL) < l_113), 0x27L)) || l_112) , g_106[2].f1)) , l_112))))))) >= p_64) , (void*)0) != (void*)0)), g_6)))))) != l_113)) | g_6)) >= l_112) ^ 0xADB2L) , (void*)0)))) ^ l_112)), p_62)) > (**p_60)) > p_64) || 0x18A2FD92DD8B1B82LL) , 0x90E515E6AD316F54LL)), l_112)))) != 0L), l_112, &l_111);
    for (g_162 = 0; (g_162 == 8); g_162++)
    {
        int64_t l_822 = 0x36C063240A243C3ELL;
        int32_t l_843 = 0xE36E6235L;
        int16_t l_850 = 0x8FEDL;
        int32_t l_852 = (-1L);
        int32_t l_854 = 0L;
        int32_t l_855 = 0x0F732B12L;
        int32_t l_856 = 0x7101B1D6L;
        int32_t l_857[3];
        int i;
        for (i = 0; i < 3; i++)
            l_857[i] = 1L;
        for (g_614 = 0; (g_614 <= 2); g_614 += 1)
        {
            int8_t l_844 = (-1L);
            int32_t l_849[4] = {0L,0L,0L,0L};
            int i;
            for (g_337 = 0; (g_337 <= 3); g_337 += 1)
            {
                uint8_t *l_821 = &g_106[2].f1;
                int32_t l_837[1];
                int32_t l_842 = 0x9DC6461DL;
                int32_t l_858[2][1][9] = {{{0x243118DFL,(-10L),0x243118DFL,0L,1L,1L,0L,0x243118DFL,(-10L)}},{{(-10L),0x243118DFL,0L,1L,1L,0L,0x243118DFL,(-10L),0x243118DFL}}};
                uint32_t l_859 = 0xE11A5213L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_837[i] = (-7L);
                for (g_86 = 0; (g_86 <= 2); g_86 += 1)
                {
                    uint8_t * const l_823[9][10] = {{&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162},{&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162},{&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162},{&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162},{&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162},{&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162},{&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162},{&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162},{&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162}};
                    int16_t *****l_828 = (void*)0;
                    uint16_t *l_835[7][8][4] = {{{&g_836[5][5][1],&g_836[4][1][3],&g_86,&g_86},{&g_836[5][5][1],&g_836[4][1][3],&g_836[4][1][3],&g_836[1][0][1]},{&g_836[5][5][2],&g_86,&g_836[0][1][2],&g_836[4][1][3]},{&g_836[4][7][3],&g_836[4][1][3],&g_836[1][0][2],&g_836[4][6][0]},{&g_836[4][1][3],&g_836[4][3][1],&g_836[4][1][3],&g_836[4][6][0]},{&g_836[0][4][2],&g_836[4][1][3],&g_836[0][4][2],&g_836[4][1][3]},{&g_836[5][5][1],&g_86,&g_836[4][1][3],&g_836[1][0][1]},{&g_836[4][1][3],&g_836[4][1][3],&g_836[0][1][2],&g_86}},{{&g_836[4][1][3],&g_836[4][1][3],&g_836[0][1][2],&g_836[6][1][2]},{&g_836[4][1][3],&g_836[4][1][3],&g_836[4][1][3],&g_836[4][6][0]},{&g_836[5][5][1],&g_86,&g_836[1][0][2],&g_86},{&g_836[1][0][2],&g_86,&g_86,&g_836[3][1][2]},{&g_836[4][1][3],&g_86,(void*)0,&g_86},{&g_836[0][4][2],&g_86,&g_836[4][1][3],&g_836[4][1][3]},{&g_836[4][1][3],&g_836[4][1][3],&g_86,&g_86},{&g_836[0][1][2],&g_836[4][3][1],(void*)0,&g_86}},{{&g_836[0][1][2],&g_836[4][1][3],&g_86,&g_836[6][1][2]},{&g_836[4][1][3],&g_86,&g_836[4][1][3],&g_836[4][1][3]},{&g_836[0][4][2],&g_836[4][3][1],(void*)0,&g_836[4][1][3]},{&g_836[4][1][3],&g_836[4][1][3],&g_86,&g_836[4][1][3]},{&g_836[1][0][2],&g_836[4][3][1],&g_836[1][0][2],&g_836[4][1][3]},{&g_836[0][1][2],&g_86,&g_836[5][5][1],&g_836[6][1][2]},{&g_836[4][1][3],&g_836[4][1][3],&g_836[4][1][3],&g_86},{&g_86,&g_836[4][3][1],&g_836[4][1][3],&g_86}},{{&g_836[4][1][3],&g_836[4][1][3],&g_836[5][5][1],&g_836[4][1][3]},{&g_836[0][1][2],&g_86,&g_836[1][0][2],&g_86},{&g_836[1][0][2],&g_86,&g_86,&g_836[3][1][2]},{&g_836[4][1][3],&g_86,(void*)0,&g_86},{&g_836[0][4][2],&g_86,&g_836[4][1][3],&g_836[4][1][3]},{&g_836[4][1][3],&g_836[4][1][3],&g_86,&g_86},{&g_836[0][1][2],&g_836[4][3][1],(void*)0,&g_86},{&g_836[0][1][2],&g_836[4][1][3],&g_86,&g_836[6][1][2]}},{{&g_836[4][1][3],&g_86,&g_836[4][1][3],&g_836[4][1][3]},{&g_836[0][4][2],&g_836[4][3][1],(void*)0,&g_836[4][1][3]},{&g_836[4][1][3],&g_836[4][1][3],&g_86,&g_836[4][1][3]},{&g_836[1][0][2],&g_836[4][3][1],&g_836[1][0][2],&g_836[4][1][3]},{&g_836[0][1][2],&g_86,&g_836[5][5][1],&g_836[6][1][2]},{&g_836[4][1][3],&g_836[4][1][3],&g_836[4][1][3],&g_86},{&g_86,&g_836[4][3][1],&g_836[4][1][3],&g_86},{&g_836[4][1][3],&g_836[4][1][3],&g_836[5][5][1],&g_836[4][1][3]}},{{&g_836[0][1][2],&g_86,&g_836[1][0][2],&g_86},{&g_836[1][0][2],&g_86,&g_86,&g_836[3][1][2]},{&g_836[4][1][3],&g_86,(void*)0,&g_86},{&g_836[0][4][2],&g_86,&g_836[4][1][3],&g_836[4][1][3]},{&g_836[4][1][3],&g_836[4][1][3],&g_86,&g_86},{&g_836[0][1][2],&g_836[4][3][1],(void*)0,&g_86},{&g_836[0][1][2],&g_836[4][1][3],&g_86,&g_836[6][1][2]},{&g_836[4][1][3],&g_86,&g_836[4][1][3],&g_836[4][1][3]}},{{&g_836[0][4][2],&g_836[4][3][1],(void*)0,&g_836[4][1][3]},{&g_836[4][1][3],&g_836[4][1][3],&g_86,&g_836[4][1][3]},{&g_836[1][0][2],&g_836[4][3][1],&g_836[1][0][2],&g_836[4][1][3]},{&g_836[0][1][2],&g_86,&g_836[5][5][1],&g_836[6][1][2]},{&g_836[4][1][3],&g_836[4][1][3],&g_836[4][1][3],&g_86},{&g_86,&g_836[4][3][1],&g_836[4][1][3],&g_86},{&g_836[4][1][3],&g_836[4][1][3],&g_836[5][5][1],&g_836[4][1][3]},{&g_836[0][1][2],&g_86,&g_836[1][0][2],&g_86}}};
                    int32_t l_845 = 1L;
                    int32_t l_846 = 0xDA48D365L;
                    int32_t l_847 = 0L;
                    int32_t l_848 = (-4L);
                    int32_t l_851 = 0x22B0E146L;
                    int32_t l_853[3][4][3] = {{{1L,(-1L),(-1L)},{(-9L),(-1L),0L},{1L,(-4L),7L},{(-9L),0L,(-1L)}},{{(-1L),(-1L),1L},{0L,0L,0L},{1L,0x3FE60B0AL,(-4L)},{0L,0xE41067F1L,0L}},{{(-1L),1L,(-4L)},{(-9L),(-9L),0L},{7L,1L,1L},{0L,0xE41067F1L,(-1L)}}};
                    int i, j, k;
                    l_843 = (((l_821 == (g_117[(g_86 + 1)] , (l_822 , l_823[7][6]))) ^ (((((g_824 != (g_826 = g_826)) == (safe_sub_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((l_837[0] = p_64), ((safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((((&g_115 != &l_113) , 3UL) <= l_842), (-1L))), p_62)) || g_117[(g_86 + 1)]))), g_2)) >= p_62), g_117[(g_86 + 1)]))) & g_106[2].f1) <= 1UL) == p_62)) & g_117[(g_86 + 1)]);
                    ++l_859;
                }
                return l_854;
            }
        }
        (*g_81) = (*p_60);
    }
    for (g_710 = 0; (g_710 <= 2); g_710 += 1)
    {
        int8_t l_862 = (-1L);
        int32_t l_863 = 0x5DFC6288L;
        int32_t l_864 = (-2L);
        int32_t l_865 = 0x737747D8L;
        int32_t l_866 = 0xE40E26DDL;
        int32_t l_867[6];
        int i;
        for (i = 0; i < 6; i++)
            l_867[i] = 6L;
        ++l_868[7][4];
        for (l_112 = 2; (l_112 >= 0); l_112 -= 1)
        {
            int64_t *l_871 = &g_491;
            uint64_t **l_873 = &l_107;
            uint64_t *l_875 = (void*)0;
            uint64_t **l_874[8] = {&l_875,&l_875,&l_875,&l_875,&l_875,&l_875,&l_875,&l_875};
            int32_t l_884 = 1L;
            uint16_t l_888 = 0UL;
            int i;
            if ((l_884 ^= ((((*l_871) = g_108) != ((((g_872 = (void*)0) == (g_877 = (l_876 = ((*l_873) = &g_108)))) > ((l_865 |= (safe_rshift_func_uint16_t_u_s(((++(*l_85)) ^ p_62), (g_754 , ((~(((-1L) == 0xC4AD2D50L) != (~((**p_60) | g_836[4][1][3])))) < l_867[3]))))) != 65532UL)) & p_64)) > p_64)))
            {
                union U0 *l_885 = &g_106[2];
                (**g_795) = (*p_60);
                for (l_111 = 2; (l_111 >= 0); l_111 -= 1)
                {
                    for (g_614 = 0; (g_614 <= 3); g_614 += 1)
                    {
                        (*g_81) = &l_867[4];
                    }
                    for (g_162 = 0; (g_162 <= 2); g_162 += 1)
                    {
                        union U0 **l_886 = &l_885;
                        (**g_795) = (*p_60);
                        (*l_886) = l_885;
                    }
                    return p_62;
                }
            }
            else
            {
                int16_t **l_887 = &l_121;
                int32_t *l_890 = &l_867[5];
                g_171 = l_887;
                if (l_888)
                    continue;
                (*p_61) = (safe_unary_minus_func_uint32_t_u(1UL));
                l_890 = (*p_60);
            }
            return g_836[0][6][1];
        }
    }
    l_895 ^= ((*p_61) |= ((safe_sub_func_int64_t_s_s(0xE98641152B4BC2B9LL, (*g_877))) != (safe_rshift_func_uint16_t_u_u((*g_485), 1))));
    return p_64;
}







static uint32_t func_65(int16_t p_66, const int16_t p_67)
{
    return p_66;
}







static int32_t *** func_76(int32_t ** p_77, uint32_t p_78, int32_t p_79, int32_t * p_80)
{
    uint16_t *l_152[9][9] = {{&g_86,&g_86,&g_86,(void*)0,(void*)0,&g_86,&g_86,&g_86,(void*)0},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,(void*)0,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,&g_86,&g_86,(void*)0,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,(void*)0,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,&g_86,&g_86,(void*)0,&g_86,(void*)0,&g_86},{&g_86,(void*)0,&g_86,&g_86,&g_86,(void*)0,&g_86,&g_86,(void*)0},{&g_86,(void*)0,&g_86,(void*)0,&g_86,(void*)0,&g_86,&g_86,&g_86}};
    const uint64_t *l_180 = &g_108;
    int32_t ***l_182[10][5] = {{&g_81,&g_81,&g_81,&g_81,&g_81},{&g_81,&g_81,&g_81,&g_81,(void*)0},{&g_81,&g_81,&g_81,&g_81,&g_81},{&g_81,&g_81,&g_81,&g_81,(void*)0},{&g_81,&g_81,&g_81,&g_81,&g_81},{&g_81,&g_81,&g_81,&g_81,(void*)0},{&g_81,&g_81,&g_81,&g_81,&g_81},{&g_81,&g_81,&g_81,&g_81,(void*)0},{&g_81,&g_81,&g_81,&g_81,&g_81},{&g_81,&g_81,&g_81,&g_81,(void*)0}};
    int32_t l_217[10][2][1] = {{{0xC157CCD4L},{0xDED90B57L}},{{0x66225F41L},{0xDED90B57L}},{{0xC157CCD4L},{0x66225F41L}},{{1L},{1L}},{{0x66225F41L},{0xC157CCD4L}},{{0xDED90B57L},{0x66225F41L}},{{0xDED90B57L},{0xC157CCD4L}},{{0x66225F41L},{1L}},{{1L},{0x66225F41L}},{{0xC157CCD4L},{0xDED90B57L}}};
    int16_t * const **l_244 = (void*)0;
    uint32_t l_322 = 0xD27F2484L;
    uint32_t *l_374 = (void*)0;
    uint32_t **l_373 = &l_374;
    uint32_t **l_375 = &l_374;
    uint32_t l_376 = 0x8E5519FDL;
    union U0 l_377 = {255UL};
    int8_t *l_382 = &g_115;
    const uint32_t l_435 = 0xCDBFB1D0L;
    int8_t l_489[5][1][5] = {{{0x3CL,0x7BL,0x23L,0x70L,0x83L}},{{0x0FL,1L,0xAEL,0x7BL,0xAEL}},{{0x83L,0x83L,1L,0x70L,0x23L}},{{0x0FL,0x23L,0x3CL,0x70L,0x70L}},{{0x70L,0x05L,0x70L,0x7BL,(-4L)}}};
    uint64_t l_586 = 0UL;
    uint8_t ***l_757 = &g_633;
    uint64_t l_811 = 0xECF644C6D5B6BCE7LL;
    uint64_t *l_812 = &g_117[1];
    uint64_t l_815 = 0x6E2EC432B6886210LL;
    int8_t l_816 = 0x92L;
    int i, j, k;
lbl_366:
    for (p_79 = 0; (p_79 >= 0); p_79 -= 1)
    {
        uint32_t l_122 = 0xDB56EC41L;
        uint16_t l_140 = 0UL;
        int16_t *l_175 = &g_70;
        union U0 l_236 = {0xFCL};
        int32_t l_239 = 0x13D7B970L;
        int32_t l_319 = 4L;
        int32_t l_338 = 0x0681AF4DL;
        uint64_t *l_350 = &g_108;
        int16_t ***l_354 = &g_171;
        uint32_t l_362 = 5UL;
        if (l_122)
            break;
        if (((*p_80) = (*p_80)))
        {
            uint32_t l_139 = 0x3285BF18L;
            int32_t l_141 = 0x70287503L;
            int16_t *l_176 = &g_70;
            int32_t l_181 = 0x0AAE426BL;
            int32_t *l_183 = &l_141;
            for (g_86 = 0; (g_86 <= 0); g_86 += 1)
            {
                int32_t l_132 = (-1L);
                int i, j;
                if ((g_106[1] , (safe_mod_func_uint16_t_u_u(((l_141 |= ((safe_lshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u((g_117[(g_86 + 1)] && ((l_132 |= ((*p_80) = (+p_79))) == (safe_mod_func_int32_t_s_s(g_117[(g_86 + 1)], (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(g_6, 1)), 0xD29F2DB0L)))))), (l_139 , l_122))) >= (0x523CF742L > 0xB973E414L)), l_140)), g_106[2].f0)) < g_2)) ^ p_79), g_2))))
                {
                    for (l_140 = 0; (l_140 <= 0); l_140 += 1)
                    {
                        uint16_t *l_151 = &l_140;
                        uint16_t **l_153 = &l_152[4][4];
                        int i, j;
                        (*p_80) = ((safe_mod_func_int8_t_s_s((((5L || ((safe_mul_func_uint8_t_u_u(1UL, 0x57L)) , (safe_unary_minus_func_int16_t_s(6L)))) | (safe_div_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((((l_151 == ((*l_153) = l_152[4][4])) | g_2) != ((safe_lshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((g_117[p_79] = p_79) <= (safe_mul_func_int16_t_s_s((0x0BEB1403L && l_140), 1L))), 6)), p_78)), 10)) != g_6)), 0xA4L)) && g_106[2].f0), p_79))) || p_79), g_115)) >= 0xF10FDB64DAF6BE20LL);
                        ++g_162;
                    }
                }
                else
                {
                    uint16_t l_166 = 0x7596L;
                    for (g_70 = 0; (g_70 <= 0); g_70 += 1)
                    {
                        int32_t *l_165[2][1];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_165[i][j] = &l_132;
                        }
                        l_166++;
                        l_181 ^= (safe_mul_func_int16_t_s_s(((g_171 == (void*)0) && 0x12A2L), ((safe_mul_func_uint16_t_u_u(((((g_115 >= (l_175 != ((*g_171) = l_176))) | (((*p_80) = ((safe_unary_minus_func_int16_t_s((p_78 <= ((safe_add_func_uint64_t_u_u(g_2, (l_180 == &g_117[3]))) , l_139)))) | 0xAE34B661L)) | l_141)) != 0x8EL) , p_79), p_79)) , 0UL)));
                        (*p_77) = g_82[(g_70 + 4)][g_70];
                    }
                    for (g_70 = 0; (g_70 <= 3); g_70 += 1)
                    {
                        return l_182[9][4];
                    }
                }
                (*p_80) &= 7L;
            }
            if (p_79)
                goto lbl_366;
            l_183 = (*p_77);
        }
        else
        {
            union U0 l_184 = {246UL};
            int16_t ***l_198 = &g_171;
            int16_t **l_199 = (void*)0;
            int32_t l_200 = 0x5BFC9525L;
            l_200 |= (l_184 , (l_140 < (p_78 , (safe_rshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((&g_172 != (((((1UL && (safe_div_func_uint64_t_u_u(l_184.f0, ((!(safe_rshift_func_int16_t_s_u((l_184.f1 , ((safe_sub_func_uint64_t_u_u((((safe_add_func_uint8_t_u_u((((((*l_198) = &g_172) != l_199) != p_78) >= 0x25L), 0x0BL)) != p_78) < p_78), g_106[2].f0)) || l_140)), 5))) & g_117[0])))) && l_184.f1) == l_184.f1) & g_86) , (void*)0)), 0x84L)) == (*p_80)), p_79)))));
        }
        (*p_80) = (((0xF6D0226CL >= ((safe_mod_func_int64_t_s_s(g_117[0], p_79)) < (safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(p_79, (g_6 <= (safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(p_79, (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((g_2 <= p_78), 6)) | ((g_106[2].f1 == 0xE204L) | 0x69AD26FAL)), 10)))), l_217[4][0][0]))))), 0)) < p_79), p_79)))) || g_106[2].f0) != 0xEDL);
        for (g_70 = 3; (g_70 >= 0); g_70 -= 1)
        {
            int32_t l_218[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_218[i] = 1L;
            l_218[0] = 0xA1D09630L;
            if ((*p_80))
                continue;
        }
        for (g_108 = 0; (g_108 <= 0); g_108 += 1)
        {
            uint16_t l_219 = 0xE423L;
            uint16_t *l_221 = &g_86;
            int32_t **l_255 = &g_82[2][0];
            union U0 l_335 = {0UL};
            int32_t ***l_339 = &g_81;
            int16_t ***l_340 = &g_171;
            int64_t *l_347[9][5] = {{&g_293,&g_293,&g_293,&g_293,&g_293},{&g_293,&g_293,(void*)0,(void*)0,&g_293},{(void*)0,&g_293,(void*)0,&g_293,(void*)0},{&g_293,(void*)0,(void*)0,&g_293,&g_293},{&g_293,&g_293,&g_293,&g_293,&g_293},{&g_293,&g_293,(void*)0,(void*)0,&g_293},{(void*)0,&g_293,(void*)0,&g_293,(void*)0},{&g_293,(void*)0,(void*)0,&g_293,&g_293},{&g_293,&g_293,&g_293,&g_293,&g_293}};
            int64_t l_351 = 2L;
            int32_t l_360 = 0L;
            int i, j;
            if ((l_219 & l_219))
            {
                int16_t * const **l_246 = (void*)0;
                int i, j;
                g_82[(g_108 + 2)][p_79] = g_82[(p_79 + 4)][g_108];
                if ((*p_80))
                    continue;
                if (l_219)
                {
                    for (l_140 = 0; (l_140 <= 3); l_140 += 1)
                    {
                        uint16_t **l_220[4][6][1] = {{{(void*)0},{&l_152[4][4]},{(void*)0},{&l_152[5][4]},{(void*)0},{&l_152[4][4]}},{{(void*)0},{&l_152[5][4]},{(void*)0},{&l_152[4][4]},{(void*)0},{&l_152[5][4]}},{{(void*)0},{&l_152[4][4]},{(void*)0},{&l_152[5][4]},{(void*)0},{&l_152[4][4]}},{{(void*)0},{&l_152[5][4]},{(void*)0},{&l_152[4][4]},{(void*)0},{&l_152[5][4]}}};
                        int i, j, k;
                        (*p_80) = ((&g_86 != (l_221 = &g_86)) & (p_79 != ((g_2 > ((l_219 , &g_82[0][0]) == &g_82[0][0])) < (l_140 && 6L))));
                        (*p_77) = (void*)0;
                    }
                }
                else
                {
                    for (g_86 = 0; g_86 < 5; g_86 += 1)
                    {
                        for (l_219 = 0; l_219 < 1; l_219 += 1)
                        {
                            g_82[g_86][l_219] = &g_2;
                        }
                    }
                    for (g_86 = 0; (g_86 <= 3); g_86 += 1)
                    {
                        (*p_80) = ((void*)0 == &p_77);
                    }
                }
                for (l_219 = 0; (l_219 <= 3); l_219 += 1)
                {
                    uint16_t *l_222 = &l_219;
                    uint16_t **l_223[2][9];
                    uint64_t l_226 = 3UL;
                    int32_t l_243 = 0xA480CB71L;
                    int16_t * const ***l_245[8] = {&l_244,&l_244,&l_244,&l_244,&l_244,&l_244,&l_244,&l_244};
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_223[i][j] = &l_152[3][5];
                    }
                    l_239 = ((((((&l_140 == (g_224[4][1] = l_222)) , (~(l_226 > (l_219 , (p_78 && 0xFC5EL))))) == p_79) || ((!(safe_rshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((++(*l_221)), (safe_mod_func_int8_t_s_s(((((l_236 , (safe_add_func_int64_t_s_s(((0x51E73E5AL | (*p_80)) > 8L), l_140))) <= g_106[2].f1) && (*p_80)) , l_236.f1), p_78)))) & 1L), 5))) , g_108)) != l_226) , l_219);
                    for (l_239 = 3; (l_239 >= 0); l_239 -= 1)
                    {
                        (*p_80) = (safe_mod_func_uint64_t_u_u(0xBFD2D81461A9E103LL, (0x0123A988937E8331LL && 4UL)));
                    }
                    for (l_122 = 0; (l_122 <= 3); l_122 += 1)
                    {
                        uint16_t l_242 = 1UL;
                        l_243 = (l_242 = (*p_80));
                        return &g_81;
                    }
                    (*p_80) ^= ((l_246 = l_244) == &g_171);
                }
            }
            else
            {
                int32_t l_263 = 0L;
                int32_t l_310 = 0xDCC1F51FL;
                if (((safe_sub_func_int64_t_s_s(p_78, 1UL)) == (safe_sub_func_uint64_t_u_u((0x270C91F9L & (((*l_221) = (p_79 > (safe_mul_func_uint8_t_u_u(1UL, 255UL)))) | (!(g_106[2] , (safe_unary_minus_func_int64_t_s(((g_81 = &g_82[1][0]) != l_255))))))), 18446744073709551606UL))))
                {
                    uint32_t l_262 = 4294967287UL;
                    l_239 = (((6UL && ((g_115 | ((safe_add_func_uint64_t_u_u((p_78 , (((safe_rshift_func_uint16_t_u_s((((*l_175) = 0x8E3BL) & p_78), p_79)) <= (((((4294967290UL < (0L == (((safe_rshift_func_uint16_t_u_u(l_239, 14)) , (void*)0) != (void*)0))) , l_262) > 0x7066A42E51A4AEA5LL) >= p_78) >= g_106[2].f0)) != l_140)), g_108)) ^ l_239)) | p_79)) , 0xCB08BCFCFEE400BELL) < 4UL);
                }
                else
                {
                    int32_t l_267 = (-1L);
                    int16_t ** const *l_284 = &g_171;
                    int64_t *l_292[7][1][2] = {{{&g_293,&g_293}},{{&g_293,&g_293}},{{&g_293,&g_293}},{{&g_293,&g_293}},{{&g_293,&g_293}},{{&g_293,&g_293}},{{&g_293,&g_293}}};
                    uint32_t *l_320[2];
                    int32_t l_321 = 0xDCA988B8L;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_320[i] = &l_122;
                    if ((l_263 = (*p_80)))
                    {
                        return l_182[3][1];
                    }
                    else
                    {
                        int8_t *l_268[1];
                        int32_t l_271 = 2L;
                        uint32_t *l_278 = &g_279;
                        int16_t ** const **l_285 = &l_284;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_268[i] = &g_115;
                        (*p_80) = (!(p_78 || 0L));
                        l_239 = (safe_mod_func_uint8_t_u_u(l_267, (g_115 = g_2)));
                        if ((*p_80))
                            break;
                        (*p_80) = ((safe_mul_func_int16_t_s_s((p_79 , l_236.f0), (l_271 = 0x0DB6L))) > ((safe_lshift_func_int16_t_s_u((1L != (((0UL | (p_78 != p_79)) ^ (safe_mul_func_uint16_t_u_u(((++(*l_278)) ^ g_117[1]), (safe_mod_func_int16_t_s_s((((*l_285) = l_284) != &g_171), 65535UL))))) , p_78)), p_79)) && p_79));
                    }
                    for (l_267 = 0; (l_267 <= 3); l_267 += 1)
                    {
                        (*l_255) = (*l_255);
                    }
                    l_322 |= (((safe_add_func_int8_t_s_s(0xE0L, p_79)) , p_78) < (((safe_mul_func_uint8_t_u_u((((l_263 = (safe_sub_func_int64_t_s_s(p_79, 0xEE815A87531F4ECELL))) <= (safe_sub_func_uint16_t_u_u((((((safe_mul_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s(g_6, (+(((l_267 = (((((((((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((!((((*p_80) ^ (safe_rshift_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(l_310, (safe_sub_func_uint8_t_u_u((((((safe_div_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((((0L > 0x8BL) | 9L) , g_293), g_106[2].f0)), 12)), 0x5B2CF9DCE10AC727LL)) ^ (*p_80)) == l_267) <= l_267) ^ 18446744073709551608UL), 4L)))) == l_319), 0))) >= g_6) , g_117[1])), 9L)), g_162)) , l_310) & p_78) & p_78) , g_106[2].f1) , p_78) , (void*)0) != (void*)0) ^ 0x5A386D9EL)) , g_106[2].f0) == 0xB26BEC3CB9F91B81LL)))) <= g_293) < g_106[2].f1) < 0xE1D0L), p_79)) || 0x734A936E5EAA200BLL) != 0xF158EB26L) , l_239) > l_321), p_78))) > g_106[2].f1), g_117[0])) < 0x0596460BL) || 5L));
                }
            }
            for (l_239 = 0; (l_239 <= 0); l_239 += 1)
            {
                uint32_t *l_328 = &l_322;
                uint32_t **l_327 = &l_328;
                uint32_t *l_336 = &g_337;
                int16_t ****l_341 = (void*)0;
                int16_t ****l_342 = &l_340;
                uint64_t *l_349 = &g_117[3];
                uint64_t **l_348 = &l_349;
                const uint32_t l_359 = 0x428C27BCL;
                int32_t l_361 = 0x6C47E8B2L;
                int32_t *l_365 = (void*)0;
                int i, j, k;
                if ((safe_div_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((l_217[(l_239 + 7)][l_239][l_239] & ((*l_336) ^= (g_162 | (((g_82[0][0] != ((*l_327) = (void*)0)) < 0x36L) != (safe_div_func_uint32_t_u_u((((g_293 , (((p_78 , (safe_sub_func_int8_t_s_s((g_106[2].f1 > (safe_mul_func_int8_t_s_s(g_279, 0x52L))), 255UL))) == l_219) == l_217[(l_239 + 7)][l_239][l_239])) , l_335) , 4294967289UL), g_279)))))), 1L)) , g_279), g_162)))
                {
                    l_338 = (*p_80);
                    return l_339;
                }
                else
                {
                    if (l_217[(l_239 + 7)][l_239][l_239])
                        break;
                }
                (*l_342) = l_340;
                (*p_80) = (safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((((void*)0 == l_347[7][2]) , ((*l_348) = &g_108)) != l_350), (l_351 ^ ((safe_sub_func_uint8_t_u_u(((((((l_354 != l_354) > (safe_add_func_int64_t_s_s(p_78, (safe_rshift_func_uint8_t_u_s(((&g_293 != &g_293) && g_6), 7))))) == p_79) < 0UL) >= (-9L)) , l_359), 0UL)) , (*p_80))))), 0));
                (**l_342) = (*l_354);
                for (l_335.f1 = 0; (l_335.f1 <= 3); l_335.f1 += 1)
                {
                    int i, j;
                    ++l_362;
                    if (l_236.f0)
                        continue;
                    (*g_81) = (l_365 = (*g_81));
                }
            }
        }
    }
    (*p_77) = (*g_81);
    if ((safe_lshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_s((4L & (((l_376 &= ((*p_80) = (&p_77 == ((safe_add_func_uint8_t_u_u((l_373 != (l_375 = (void*)0)), g_293)) , &p_77)))) || (l_377 , (((*l_382) = ((p_78 && (safe_sub_func_int16_t_s_s((9UL ^ p_78), p_79))) | 0UL)) , 0x3EE7A5ABL))) ^ g_293)), 4)) , &l_244) == (void*)0), 8)))
    {
        int32_t l_405 = (-1L);
        uint16_t **l_431 = &l_152[4][4];
        uint8_t *l_492[2];
        int32_t l_521[9] = {8L,8L,8L,8L,8L,8L,8L,8L,8L};
        uint32_t l_537 = 0x4BA660FAL;
        int16_t l_542[8][6];
        int32_t l_551[6][10][2] = {{{0x8AA653F8L,1L},{(-1L),(-1L)},{(-6L),0xEB4C1AEAL},{0xCEF091F0L,(-1L)},{0x5C3D7010L,0x9B8C5C63L},{0L,1L},{(-1L),0x5C3D7010L},{4L,0x03A4C179L},{(-2L),0x7245B78FL},{0L,(-1L)}},{{0x6CC65B58L,0x189BB981L},{(-3L),0x189BB981L},{0x6CC65B58L,(-1L)},{0L,0x7245B78FL},{(-2L),0x03A4C179L},{4L,0x5C3D7010L},{(-1L),1L},{0L,0x9B8C5C63L},{0x5C3D7010L,(-1L)},{0xCEF091F0L,0xEB4C1AEAL}},{{(-6L),(-1L)},{(-1L),1L},{0x8AA653F8L,1L},{(-7L),0xF7E17636L},{0xE857C9BEL,0x995FF18AL},{(-1L),0L},{1L,(-6L)},{0x7CDE952CL,0x9922345BL},{0xEB4C1AEAL,(-1L)},{3L,3L}},{{(-1L),1L},{0x9B8C5C63L,0L},{(-5L),0x7CDE952CL},{0L,(-5L)},{1L,0xCEF091F0L},{(-1L),(-1L)},{0x8AA653F8L,(-6L)},{(-1L),0x10715D05L},{1L,(-1L)},{1L,(-1L)}},{{(-1L),0x9922345BL},{1L,(-1L)},{(-6L),(-3L)},{(-7L),0xCEF091F0L},{0x7CDE952CL,0L},{0x03A4C179L,0x67429A30L},{4L,1L},{0x36E41FF9L,0x12B92A40L},{0x9922345BL,(-1L)},{(-3L),1L}},{{0x1C760AA9L,0L},{0L,1L},{0x5C3D7010L,(-1L)},{(-1L),0L},{0x189BB981L,0xEB4C1AEAL},{0L,0x6CC65B58L},{0xCEF091F0L,0xF7E17636L},{0L,3L},{5L,3L},{0L,0xF7E17636L}}};
        int64_t l_589 = 0x3DBB0F639AA4927ALL;
        uint64_t *l_646[3];
        uint64_t **l_645 = &l_646[1];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_492[i] = &g_433;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 6; j++)
                l_542[i][j] = 0x13D0L;
        }
        for (i = 0; i < 3; i++)
            l_646[i] = &l_586;
lbl_461:
        (*p_80) |= (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((p_79 >= (&g_86 != &g_86)))), 10));
        for (g_337 = (-10); (g_337 != 34); g_337++)
        {
            uint8_t l_404[7][3] = {{0x26L,1UL,1UL},{0x26L,1UL,1UL},{0x26L,1UL,1UL},{0x26L,1UL,1UL},{0x26L,1UL,1UL},{0x26L,1UL,1UL},{0x26L,1UL,1UL}};
            int64_t *l_406 = &g_293;
            int8_t l_416 = 0x10L;
            union U0 l_420 = {0xA3L};
            uint16_t **l_423 = (void*)0;
            int32_t l_443[1][6][10] = {{{0x556798BCL,1L,1L,0x556798BCL,1L,1L,0x556798BCL,1L,1L,0x556798BCL},{1L,0x556798BCL,1L,1L,0x556798BCL,1L,1L,0x556798BCL,1L,1L},{0x556798BCL,0x556798BCL,1L,0x556798BCL,0x556798BCL,1L,0x556798BCL,0x556798BCL,1L,0x556798BCL},{0x556798BCL,1L,1L,0x556798BCL,1L,1L,0x556798BCL,1L,1L,0x556798BCL},{1L,0x556798BCL,1L,1L,0x556798BCL,1L,1L,0x556798BCL,1L,1L},{0x556798BCL,0x556798BCL,1L,0x556798BCL,0x556798BCL,1L,0x556798BCL,0x556798BCL,1L,0x556798BCL}}};
            const uint16_t **l_486 = &g_485;
            int32_t l_550[2];
            const int16_t l_623[10][3][8] = {{{0L,0xEA0DL,0xB491L,0x7EF2L,(-1L),0xEA0DL,0x7EF2L,0x271FL},{1L,0L,0L,0x7EF2L,0L,(-1L),0L,0xFDD3L},{0x6BE8L,0L,0x8DC6L,0xB491L,0L,(-1L),0x8DC6L,0x7EF2L}},{{1L,0xEA0DL,0x271FL,0xFDD3L,(-1L),(-1L),0xFDD3L,0x271FL},{0L,0L,0L,0L,1L,(-1L),0xFDD3L,0L},{0x6BE8L,0L,0x271FL,0xB491L,0L,0xEA0DL,0x8DC6L,0L}},{{0L,0xEA0DL,0x8DC6L,0L,(-1L),0x6BE8L,0L,0x271FL},{0L,1L,0L,0xB491L,0xEA0DL,0L,0x271FL,0x271FL},{0xAE0BL,(-1L),0x3D7AL,0x3D7AL,(-1L),0xAE0BL,0L,0xB491L}},{{0x6BE8L,(-1L),0x3D7AL,0x271FL,0x6892L,(-1L),0x271FL,0xD652L},{(-1L),0xEA0DL,0x7EF2L,0x271FL,0x6BE8L,0L,0x8DC6L,0xB491L},{0xAE0BL,0x6BE8L,0L,0x3D7AL,0x6BE8L,0x6892L,0L,0x271FL}},{{(-1L),(-1L),0xD652L,0xB491L,0x6892L,0x6892L,0xB491L,0xD652L},{0x6BE8L,0x6BE8L,0x7EF2L,0x8DC6L,(-1L),0L,0xB491L,0x8DC6L},{0xAE0BL,0xEA0DL,0xD652L,0x3D7AL,0xEA0DL,(-1L),0L,0x8DC6L}},{{0xEA0DL,(-1L),0L,0x8DC6L,0x6892L,0xAE0BL,0x8DC6L,0xD652L},{0xEA0DL,(-1L),0x7EF2L,0xB491L,0xEA0DL,0L,0x271FL,0x271FL},{0xAE0BL,(-1L),0x3D7AL,0x3D7AL,(-1L),0xAE0BL,0L,0xB491L}},{{0x6BE8L,(-1L),0x3D7AL,0x271FL,0x6892L,(-1L),0x271FL,0xD652L},{(-1L),0xEA0DL,0x7EF2L,0x271FL,0x6BE8L,0L,0x8DC6L,0xB491L},{0xAE0BL,0x6BE8L,0L,0x3D7AL,0x6BE8L,0x6892L,0L,0x271FL}},{{(-1L),(-1L),0xD652L,0xB491L,0x6892L,0x6892L,0xB491L,0xD652L},{0x6BE8L,0x6BE8L,0x7EF2L,0x8DC6L,(-1L),0L,0xB491L,0x8DC6L},{0xAE0BL,0xEA0DL,0xD652L,0x3D7AL,0xEA0DL,(-1L),0L,0x8DC6L}},{{0xEA0DL,(-1L),0L,0x8DC6L,0x6892L,0xAE0BL,0x8DC6L,0xD652L},{0xEA0DL,(-1L),0x7EF2L,0xB491L,0xEA0DL,0L,0x271FL,0x271FL},{0xAE0BL,(-1L),0x3D7AL,0x3D7AL,(-1L),0xAE0BL,0L,0xB491L}},{{0x6BE8L,(-1L),0x3D7AL,0x271FL,0x6892L,(-1L),0x271FL,0xD652L},{(-1L),0xEA0DL,0x7EF2L,0x271FL,0x6BE8L,0L,0x8DC6L,0xB491L},{0xAE0BL,0x6BE8L,0L,0x3D7AL,0x6BE8L,0x6892L,0L,0x271FL}}};
            int32_t ***l_742[5];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_550[i] = 0xFA39DF22L;
            for (i = 0; i < 5; i++)
                l_742[i] = &g_81;
            if (((((*l_406) = ((p_78 != ((safe_div_func_uint32_t_u_u((((+(0x3C8DL == (((safe_add_func_uint64_t_u_u((!0x5BE4L), (safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((((*p_80) ^= ((p_78 , ((safe_mod_func_uint16_t_u_u((((*p_77) = (*p_77)) != (((void*)0 != &p_79) , (void*)0)), l_404[1][1])) , 1UL)) , l_405)) & 4L), p_79)) || p_79), p_78)) >= g_117[3]), p_79)), p_79)))) < l_404[1][0]) | g_70))) , 65530UL) == p_78), l_404[1][1])) , g_162)) != 0x5E60L)) >= g_108) || p_78))
            {
                uint32_t l_411[9][6];
                uint16_t ***l_424 = &l_423;
                uint32_t *l_429 = (void*)0;
                uint32_t *l_430 = &l_411[7][2];
                uint8_t *l_432 = &l_404[5][2];
                int32_t l_434 = 1L;
                int32_t l_519 = 6L;
                int32_t l_520 = (-6L);
                int32_t l_524 = 0x167D87B9L;
                int32_t l_529 = (-1L);
                int32_t l_530 = 0x32A50337L;
                int32_t l_531 = 0xCEAAAEFEL;
                int32_t l_532 = 8L;
                int32_t l_534 = 8L;
                int32_t l_535 = 0L;
                int32_t ***l_540 = &g_81;
                int32_t l_547 = (-1L);
                int32_t l_548 = (-9L);
                int32_t l_549 = 0xF2EAAF22L;
                int32_t l_552 = 2L;
                int32_t l_553 = 0xDCC72CF7L;
                int32_t l_554 = 0L;
                int32_t l_555 = 0xF04890F7L;
                int32_t l_556 = 0xD7436CE2L;
                int32_t l_557 = 0x1A338EF9L;
                int32_t l_558[7][1] = {{(-8L)},{(-4L)},{(-8L)},{(-4L)},{(-8L)},{(-4L)},{(-8L)}};
                uint32_t ** const l_576 = &l_374;
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_411[i][j] = 0x5469C6D3L;
                }
                if (((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((l_411[2][2] = 0L) , (safe_add_func_int32_t_s_s((((g_433 ^= ((&p_80 == ((((1L || (safe_div_func_uint32_t_u_u(l_416, (safe_unary_minus_func_int64_t_s(((safe_mul_func_uint8_t_u_u(246UL, (((*l_432) = (l_420 , ((safe_mod_func_uint8_t_u_u((((*l_424) = l_423) == (((*l_430) = (0UL <= ((((g_162 = (safe_rshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s((p_78 && p_78), l_411[2][2])) & g_106[2].f1), p_79))) <= 0x30L) & g_106[2].f0) ^ l_404[1][1]))) , l_431)), l_405)) < 2UL))) || p_79))) > 255UL)))))) ^ 0x95L) >= 0xFEE0FE5EFB6F7C99LL) , &p_80)) ^ p_79)) <= p_78) , (*p_80)), l_434))), p_79)), 255UL)) > 0xA629C30AL))
                {
                    int8_t l_442 = 1L;
                    int16_t l_450 = 4L;
                    uint64_t *l_454 = &g_117[2];
                    uint64_t **l_453 = &l_454;
                    int32_t l_516 = 0x9749A4BEL;
                    if (l_435)
                    {
                        int8_t l_436[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_436[i] = (-2L);
                        (*g_81) = (*g_81);
                        if (g_2)
                            goto lbl_366;
                        if (l_436[4])
                            continue;
                    }
                    else
                    {
                        int32_t *l_437[1][7] = {{&l_434,&g_6,&l_434,&g_2,&l_434,&g_2,&g_2}};
                        uint64_t ***l_455 = &l_453;
                        int i, j;
                        l_437[0][4] = (*p_77);
                        (*p_80) ^= (safe_mul_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(l_442, ((l_443[0][1][3] = l_420.f1) , ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((p_78 > (0xDBFA3BDAL > (((0x46DAF4CEDD7707F9LL ^ (-1L)) <= (safe_rshift_func_int8_t_s_u(((((*l_454) ^= ((((l_434 = ((((((l_450 ^ (safe_mul_func_int16_t_s_s(p_79, (((((*l_455) = l_453) != (void*)0) , l_443[0][1][3]) || p_78)))) == 0x3FAEL) || l_450) && l_411[2][4]) <= p_79) < p_79)) ^ l_450) > l_450) , 0xF1969B3169DF3D12LL)) & g_6) == 0xA426L), g_70))) != p_78))), l_411[5][2])), 5)) < l_442)))) ^ g_337), l_450));
                    }
                    for (p_78 = 0; (p_78 >= 49); p_78 = safe_add_func_uint16_t_u_u(p_78, 4))
                    {
                        uint16_t l_460 = 0xBF06L;
                        int32_t l_464 = (-10L);
                        int32_t l_472 = (-1L);
                        int64_t *l_490[9] = {&g_491,&g_491,&g_491,&g_491,&g_491,&g_491,&g_491,&g_491,&g_491};
                        int i;
                        (*g_81) = (*p_77);
                        (*p_80) = (safe_mod_func_int8_t_s_s(((*l_431) == (void*)0), l_460));
                        if (l_435)
                            goto lbl_461;
                        (*p_80) = (safe_add_func_int16_t_s_s((l_464 ^= l_450), ((((!(safe_mul_func_int8_t_s_s(((g_106[2].f1 |= ((safe_div_func_uint8_t_u_u(((void*)0 == g_82[2][0]), ((((safe_div_func_uint64_t_u_u(((++(*l_432)) == ((safe_mul_func_uint8_t_u_u(g_293, (safe_lshift_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_u((~((((p_79 && (&g_224[1][2] == (l_486 = g_484))) & (((safe_div_func_int64_t_s_s((l_443[0][1][3] &= ((0x4FB0L || (((l_489[3][0][0] , l_460) >= (*p_80)) ^ 0x53BEL)) & p_79)), p_78)) ^ 4L) == 4294967287UL)) > p_79) , p_78)), 2)) && p_78) > 0x803523CBE16C76ABLL) < g_70), 6)))) || p_79)), p_78)) , (void*)0) != (void*)0) && l_434))) > 1L)) <= l_405), p_78))) , p_78) , (void*)0) != l_492[0])));
                    }
                    l_516 = ((safe_mul_func_uint8_t_u_u((!0x7013C0B0L), ((p_78 < (safe_sub_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u(((0x44A76F0093FF0AD9LL & (safe_sub_func_uint64_t_u_u((5UL <= g_117[0]), (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(g_70, ((safe_rshift_func_uint16_t_u_s((l_443[0][1][3] = (((*l_430)++) >= 0x8BD0B0A7L)), 4)) == (safe_mod_func_int32_t_s_s(((*l_431) != (*g_484)), g_86))))) != p_79), l_450)), 3))))) | g_2), 7)) | 0xD3DB4103L), 0xCFA79D1801DB5BBALL)), (**g_484)))) ^ g_162))) , 0x8A85E2C5L);
                }
                else
                {
                    int32_t l_517 = (-9L);
                    int32_t l_518 = 3L;
                    int32_t l_522 = 0xE6A24BC5L;
                    int32_t l_523 = 1L;
                    int32_t l_525 = 0xB2965550L;
                    int32_t l_526 = (-9L);
                    int32_t l_527 = 0xF6EF63F7L;
                    int32_t l_528 = 0x048DD24EL;
                    int32_t l_533 = 0x11F4750AL;
                    int32_t l_536[4][5] = {{0xB26A0599L,0x613D8259L,0xB26A0599L,0x613D8259L,0xB26A0599L},{0x4EE3AA84L,0x4EE3AA84L,0x4EE3AA84L,0x4EE3AA84L,0x4EE3AA84L},{0xB26A0599L,0x613D8259L,0xB26A0599L,0x613D8259L,0xB26A0599L},{0x4EE3AA84L,0x4EE3AA84L,0x4EE3AA84L,0x4EE3AA84L,0x4EE3AA84L}};
                    int i, j;
                    --l_537;
                    return l_540;
                }
                for (g_491 = 5; (g_491 >= 0); g_491 -= 1)
                {
                    int32_t l_541 = 3L;
                    int32_t l_543 = 0xB3BBE403L;
                    int32_t l_544 = 0x8819F619L;
                    int32_t l_545 = 2L;
                    int32_t l_546[2];
                    int8_t l_559 = 0x02L;
                    uint64_t l_560 = 18446744073709551615UL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_546[i] = 6L;
                    for (l_377.f1 = 1; (l_377.f1 <= 8); l_377.f1 += 1)
                    {
                        if ((*p_80))
                            break;
                    }
                    --l_560;
                    for (l_541 = 0; (l_541 >= 0); l_541 -= 1)
                    {
                        int32_t l_568 = 0xBDFFE307L;
                        uint16_t * const **l_577 = (void*)0;
                        uint16_t * const **l_578 = (void*)0;
                        uint16_t * const l_581[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                        uint16_t * const *l_580 = &l_581[1][1];
                        uint16_t * const **l_579 = &l_580;
                        uint16_t * const *l_583 = &l_581[3][0];
                        uint16_t * const **l_582 = &l_583;
                        int32_t l_584 = 0x01E4D28AL;
                        int32_t l_585 = 0x3EEAE3F7L;
                        int i, j, k;
                        (*p_80) = (((safe_mod_func_uint64_t_u_u(0UL, (safe_unary_minus_func_uint16_t_u((&p_78 != &p_78))))) > ((g_106[2].f1 && ((*l_382) = (l_489[(l_541 + 4)][l_541][(l_541 + 3)] = g_117[0]))) | l_543)) ^ (safe_mul_func_uint8_t_u_u(((l_568 & (((!(((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(l_542[2][1], (**g_484))), p_78)) <= 0x86883DBAL) < 0x763E100BL)) , p_78) ^ l_568)) | g_106[2].f0), g_337)));
                        l_568 = (safe_lshift_func_uint8_t_u_s((((void*)0 != l_576) , (((p_78 , 4L) != ((*l_430) &= (((*l_579) = l_431) != ((*l_582) = l_423)))) , p_78)), l_542[2][1]));
                        if ((*p_80))
                            continue;
                        --l_586;
                    }
                }
                if (l_589)
                    continue;
            }
            else
            {
                uint32_t l_619 = 0x206B7548L;
                int32_t l_628 = 0x439960ADL;
                const int32_t l_631 = (-1L);
                uint32_t **l_640 = &l_374;
                int32_t l_680 = 1L;
                int32_t l_684 = 0x6B937522L;
                int32_t l_685 = 1L;
                int32_t l_686[3][8][1] = {{{(-1L)},{0L},{(-1L)},{0L},{(-1L)},{0L},{(-1L)},{0L}},{{(-1L)},{0L},{(-1L)},{0L},{(-1L)},{0L},{(-1L)},{0L}},{{(-1L)},{0L},{(-1L)},{0L},{(-1L)},{0L},{(-1L)},{0L}}};
                int32_t l_709 = 0xA701E7D0L;
                int i, j, k;
                for (l_420.f1 = 0; (l_420.f1 >= 25); l_420.f1 = safe_add_func_int32_t_s_s(l_420.f1, 9))
                {
                    int32_t l_594[5];
                    int16_t *l_595 = (void*)0;
                    int16_t *l_596[4];
                    int32_t l_601 = 0xCDB9D8B7L;
                    int8_t l_618[7];
                    uint8_t *l_622 = &g_433;
                    uint8_t ***l_635 = &g_633;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_594[i] = 0xB969A160L;
                    for (i = 0; i < 4; i++)
                        l_596[i] = &g_70;
                    for (i = 0; i < 7; i++)
                        l_618[i] = 0x22L;
                    (*p_80) = (safe_mul_func_int8_t_s_s((((g_70 = (l_594[4] , l_443[0][0][6])) ^ p_78) , ((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(0x1933L, l_601)), (safe_rshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((((safe_lshift_func_int16_t_s_u((((l_521[4] &= (safe_rshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(((*p_80) , g_2), (0xA5L == g_115))) && l_537), 5))) , 0xD211FA65427E7C23LL) || g_117[1]), (**g_484))) , p_78) >= g_106[2].f1) > p_79), 8L)), 5)))) >= g_491)), 2L));
                    for (l_405 = 0; (l_405 < 10); l_405 = safe_add_func_int32_t_s_s(l_405, 5))
                    {
                        uint64_t l_632 = 8UL;
                        g_614 = 0L;
                        l_521[5] &= ((*p_80) <= (safe_sub_func_uint8_t_u_u((+(0xEA18L <= ((((l_619--) , ((g_614 = g_117[3]) | (l_622 == &l_404[3][1]))) & (l_623[4][1][0] && (safe_mul_func_int16_t_s_s(((((((safe_sub_func_uint64_t_u_u(((l_628 = p_78) ^ (g_491 ^ (safe_lshift_func_uint8_t_u_u(6UL, g_106[2].f1)))), l_618[6])) ^ g_337) > 0xF9735630L) == l_631) & 0UL) != l_632), (-1L))))) || 0x670C03157A591F04LL))), g_108)));
                    }
                    (*l_635) = g_633;
                }
                if (((p_78 != (safe_add_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_s(0L, 2)) , l_640) != ((safe_div_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((**g_633), l_623[5][2][0])) && (l_645 != ((l_550[0] > (safe_div_func_uint8_t_u_u(p_78, (p_78 || l_631)))) , (void*)0))), 0xD8A3L)) , g_649)), 0x06AAFFC9L))) >= p_79))
                {
                    for (l_586 = 0; (l_586 > 43); ++l_586)
                    {
                        if (g_433)
                            goto lbl_461;
                    }
                }
                else
                {
                    int8_t l_676 = 0x04L;
                    int32_t l_677 = 0x561BA316L;
                    int32_t l_678 = 0xA7583E28L;
                    int32_t l_681 = 0x5C9537FCL;
                    int32_t l_683[3];
                    uint16_t l_687 = 0x35F4L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_683[i] = 0x90B91F65L;
                    for (l_586 = 0; (l_586 <= 43); l_586 = safe_add_func_int32_t_s_s(l_586, 6))
                    {
                        uint8_t l_664 = 0x03L;
                        int32_t l_675[3];
                        int32_t l_682 = 0x73888D58L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_675[i] = 0L;
                        (*p_77) = (*g_81);
                        l_521[4] = (((g_162 <= ((p_78 | (safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint16_t_u((((safe_lshift_func_int16_t_s_s(p_78, ((~((**g_633) = (safe_add_func_uint16_t_u_u(l_664, (g_337 < 0xF2L))))) , 0xB986L))) > 0xE8L) && ((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s((-9L), 6)) , 251UL), 5)), (-1L))), l_631)), 0x5DBBL)) || 0xC99BL)))), 3)) , l_664), 0x39DBA356L))) ^ p_79)) < 0x31L) >= g_117[0]);
                        (*p_77) = (*p_77);
                        l_687++;
                    }
                }
                if ((l_628 , (*p_80)))
                {
                    int16_t l_691 = 2L;
                    for (l_628 = 0; (l_628 <= 0); l_628 += 1)
                    {
                        int32_t *l_690 = &l_686[0][5][0];
                        (*g_81) = l_690;
                        return &g_81;
                    }
                    if (l_404[4][0])
                        break;
                    if (l_691)
                        break;
                    for (l_377.f1 = 0; (l_377.f1 <= 2); l_377.f1 += 1)
                    {
                        int i, j;
                        l_443[0][1][3] = (g_710 = ((((g_106[2] , g_106[2]) , &p_80) == &p_80) , (safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((!l_404[l_377.f1][l_377.f1]), 10)), ((((l_691 && ((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((((((((*p_80) &= 0xB5FBA024L) >= (safe_sub_func_int32_t_s_s(((safe_div_func_int64_t_s_s((((l_684 && l_404[0][1]) <= l_416) & g_279), 0x9819E421607EBD0ELL)) != p_79), 0x05138BEDL))) ^ g_433) <= l_405) && 9L) | p_79), p_78)) & g_117[3]), p_78)), l_709)) < l_684)) || 0xD0B74E70L) == 3UL) ^ 0L))), l_691))));
                        if (l_686[0][5][0])
                            break;
                    }
                }
                else
                {
                    uint64_t l_716 = 18446744073709551615UL;
                    uint32_t l_753 = 4294967291UL;
                    uint32_t l_758 = 0UL;
                    for (g_710 = 25; (g_710 < 1); --g_710)
                    {
                        uint16_t l_713 = 0xE607L;
                        --l_713;
                        (*p_77) = (*p_77);
                        if (l_713)
                            break;
                    }
                    if (((l_431 == (void*)0) != l_716))
                    {
                        int64_t *l_725 = &g_679;
                        int64_t *l_727[3];
                        int64_t **l_726 = &l_727[0];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_727[i] = &g_679;
                        l_443[0][3][5] |= 2L;
                        (*p_80) &= ((+(g_433 = ((+((*l_406) |= (p_78 > (((*l_640) = g_82[3][0]) == ((safe_lshift_func_uint8_t_u_s(((*g_634)++), 0)) , p_80))))) <= (l_725 == ((*l_726) = (void*)0))))) > (safe_lshift_func_int16_t_s_u(g_70, 15)));
                        (*p_80) &= ((void*)0 == (*g_171));
                        if (l_416)
                            break;
                    }
                    else
                    {
                        uint32_t *l_730 = (void*)0;
                        uint32_t *l_731 = (void*)0;
                        uint32_t *l_732 = &l_619;
                        int32_t l_735 = (-6L);
                        (*p_80) = ((((*l_732) = (p_79 , p_79)) ^ (((**g_633) = (0x13873AA4L == (safe_mul_func_int16_t_s_s(p_79, 0x6491L)))) || l_735)) >= (safe_mod_func_int32_t_s_s(((((safe_sub_func_uint8_t_u_u((p_78 <= (g_2 & (safe_rshift_func_int8_t_s_s((((*p_80) == l_716) == p_79), l_735)))), g_70)) , l_735) <= l_716) != p_78), (-8L))));
                        return l_742[2];
                    }
                    if ((*p_80))
                    {
                        int64_t l_748 = 2L;
                        (*p_80) |= (((*l_406) = l_716) , 0xBEEAAD92L);
                        if ((*p_80))
                            continue;
                        (*p_80) = ((((**g_633) | ((l_537 == (safe_mul_func_uint8_t_u_u((!(p_79 <= (safe_mod_func_int16_t_s_s((l_748 = l_551[0][6][1]), (g_6 | ((safe_rshift_func_uint8_t_u_u((((safe_sub_func_int64_t_s_s(((*p_80) | (((((l_753 , g_754) , (safe_rshift_func_int16_t_s_s((0L & l_753), 13))) | l_537) , l_757) != (void*)0)), 0UL)) & l_758) ^ l_551[4][6][0]), 0)) == l_521[4])))))), 0xD0L))) , p_78)) | p_78) <= g_70);
                    }
                    else
                    {
                        if ((*p_80))
                            break;
                    }
                }
                for (g_162 = 0; (g_162 > 50); g_162 = safe_add_func_uint8_t_u_u(g_162, 1))
                {
                    int16_t ***l_769 = &g_171;
                    int16_t ****l_768 = &l_769;
                    int32_t l_792 = 0L;
                    int16_t *l_793 = &g_70;
                    int32_t *l_794 = &l_443[0][4][4];
                    (*p_80) ^= l_542[2][1];
                    if ((l_684 |= (safe_add_func_int64_t_s_s(0x28F6BA11E1095026LL, (l_542[7][5] > (safe_div_func_uint32_t_u_u(((((safe_add_func_int64_t_s_s((+(((void*)0 == l_768) < (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u(((**g_633) != (safe_mod_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((g_614 = ((safe_rshift_func_int16_t_s_s((p_78 <= (l_521[1] = ((*l_793) |= (safe_mul_func_uint16_t_u_u((((g_614 , (((**g_633) || (((*p_80) = (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((l_792 = 1UL), 6)), p_79)), 255UL))) <= 0x0DBB128AL)) , 0x103045B23A8FFAA2LL)) || p_79) , p_79), 0xD172L))))), l_551[0][6][1])) | p_78)), 5UL)) , p_78), p_78))), l_551[5][4][1])) != 0L) && p_79), p_78)), 0x86A864FEL)), g_754.f0)))), p_78)) > 0xA23E9535B4D71C14LL) >= p_78) | 1L), l_686[0][2][0])))))))
                    {
                        l_794 = &l_709;
                        (*p_77) = (*g_81);
                    }
                    else
                    {
                        return g_795;
                    }
                }
            }
            (*p_80) &= (&g_679 == (p_78 , l_406));
        }
        return &g_81;
    }
    else
    {
        uint16_t l_796 = 1UL;
        --l_796;
    }
    (*p_80) = (((((safe_sub_func_int16_t_s_s(((void*)0 != &g_337), p_78)) || (safe_add_func_int8_t_s_s(((((6UL == (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((l_815 &= ((0xCD428318FD078F17LL <= l_811) && ((&g_279 == ((((*l_812) &= 0x2E9ACC326546FA78LL) < (safe_add_func_int32_t_s_s((-7L), 4294967289UL))) , &g_279)) <= p_79))) ^ l_816), 0UL)), 0xDE45L)), 0xB0L)), p_78))) != p_79) > 0xA2L) , p_79), (**g_633)))) ^ p_79) && g_293) | 1L);
    return l_182[7][2];
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
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_106[i].f0, "g_106[i].f0", print_hash_value);
        transparent_crc(g_106[i].f1, "g_106[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_117[i], "g_117[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_614, "g_614", print_hash_value);
    transparent_crc(g_679, "g_679", print_hash_value);
    transparent_crc(g_710, "g_710", print_hash_value);
    transparent_crc(g_754.f0, "g_754.f0", print_hash_value);
    transparent_crc(g_754.f1, "g_754.f1", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_836[i][j][k], "g_836[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_920, "g_920", print_hash_value);
    transparent_crc(g_934, "g_934", print_hash_value);
    transparent_crc(g_1197, "g_1197", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1238[i], "g_1238[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1275, "g_1275", print_hash_value);
    transparent_crc(g_1424, "g_1424", print_hash_value);
    transparent_crc(g_1434, "g_1434", print_hash_value);
    transparent_crc(g_1489, "g_1489", print_hash_value);
    transparent_crc(g_1490, "g_1490", print_hash_value);
    transparent_crc(g_1504, "g_1504", print_hash_value);
    transparent_crc(g_1512, "g_1512", print_hash_value);
    transparent_crc(g_1559, "g_1559", print_hash_value);
    transparent_crc(g_1838.f0, "g_1838.f0", print_hash_value);
    transparent_crc(g_1838.f1, "g_1838.f1", print_hash_value);
    transparent_crc(g_1867, "g_1867", print_hash_value);
    transparent_crc(g_1937, "g_1937", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1974[i][j][k], "g_1974[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1985, "g_1985", print_hash_value);
    transparent_crc(g_2159, "g_2159", print_hash_value);
    transparent_crc(g_2160, "g_2160", print_hash_value);
    transparent_crc(g_2161, "g_2161", print_hash_value);
    transparent_crc(g_2162, "g_2162", print_hash_value);
    transparent_crc(g_2163, "g_2163", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2164[i][j], "g_2164[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2165[i], "g_2165[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2166, "g_2166", print_hash_value);
    transparent_crc(g_2167, "g_2167", print_hash_value);
    transparent_crc(g_2168, "g_2168", print_hash_value);
    transparent_crc(g_2169, "g_2169", print_hash_value);
    transparent_crc(g_2170, "g_2170", print_hash_value);
    transparent_crc(g_2171, "g_2171", print_hash_value);
    transparent_crc(g_2172, "g_2172", print_hash_value);
    transparent_crc(g_2173, "g_2173", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
