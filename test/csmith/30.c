// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 80D3BAAB
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
   signed f0 : 29;
   signed f1 : 30;
   const signed f2 : 8;
   signed f3 : 20;
   signed f4 : 19;
   unsigned f5 : 30;
   signed f6 : 4;
   const unsigned f7 : 9;
};
#pragma pack(pop)

union U1 {
   uint32_t f0;
};

union U2 {
   uint32_t f0;
   unsigned f1 : 25;
};


static union U1 g_22 = {0x4F78D7CBL};
static uint32_t g_57 = 18446744073709551615UL;
static int8_t g_61 = 0x69L;
static uint8_t g_62 = 0x44L;
static int32_t g_67 = 0x565E139AL;
static int8_t g_82[10] = {(-10L),0xC2L,(-10L),(-10L),0xC2L,(-10L),(-10L),0xC2L,(-10L),(-10L)};
static struct S0 g_91 = {11858,-20065,-2,252,-84,13326,-2,15};
static uint32_t g_98 = 0x33AB1ADFL;
static int8_t * const * const g_101 = (void*)0;
static union U2 g_104 = {0x03F7513DL};
static int64_t g_106 = 0L;
static int32_t g_111 = (-9L);
static int32_t *g_154[6] = {&g_111,&g_111,&g_111,&g_111,&g_111,&g_111};
static uint8_t g_158 = 7UL;
static uint32_t g_162 = 4294967291UL;
static uint8_t *g_198 = &g_158;
static uint8_t **g_197 = &g_198;
static const int64_t *g_205 = &g_106;
static uint8_t g_210 = 255UL;
static int8_t *g_257 = &g_82[8];
static int8_t **g_256 = &g_257;
static int64_t g_275 = 0x9B93CA6D3C6D8B24LL;
static uint64_t g_319 = 18446744073709551611UL;
static int32_t * const *g_332[3] = {(void*)0,(void*)0,(void*)0};
static int32_t * const **g_331[9][1] = {{&g_332[0]},{&g_332[0]},{&g_332[0]},{&g_332[0]},{&g_332[0]},{&g_332[0]},{&g_332[0]},{&g_332[0]},{&g_332[0]}};
static int8_t g_351 = 1L;
static uint16_t g_354[2] = {65528UL,65528UL};
static uint16_t *g_353 = &g_354[0];
static uint16_t **g_352 = &g_353;
static uint64_t g_415 = 0UL;
static int32_t **g_428 = &g_154[5];
static int32_t ** const *g_427[8][1][3] = {{{&g_428,&g_428,&g_428}},{{&g_428,&g_428,&g_428}},{{&g_428,&g_428,&g_428}},{{&g_428,&g_428,&g_428}},{{(void*)0,&g_428,&g_428}},{{(void*)0,&g_428,&g_428}},{{&g_428,&g_428,&g_428}},{{&g_428,&g_428,&g_428}}};
static const uint32_t g_533[8] = {18446744073709551615UL,0xE4AD3AE1L,18446744073709551615UL,18446744073709551615UL,0xE4AD3AE1L,18446744073709551615UL,18446744073709551615UL,0xE4AD3AE1L};
static const int16_t g_601 = (-10L);
static int16_t g_604[3][4][9] = {{{0x570CL,1L,1L,0L,0x10F6L,0x8F62L,0x10F6L,0L,1L},{0x5CE6L,(-1L),(-4L),0x2259L,0x4A19L,0x3B2DL,(-7L),0x3B2DL,0x4A19L},{0x570CL,0x10F6L,0x10F6L,0x570CL,0x395CL,0x79D8L,0xEF27L,1L,0xEF27L},{(-7L),(-7L),(-4L),0x953DL,(-1L),0x4913L,0x3A24L,(-1L),0x3669L}},{{(-1L),0x79D8L,1L,0x395CL,0x395CL,1L,0x79D8L,(-1L),1L},{0x3669L,0x953DL,0L,(-2L),0x4A19L,0xF3A4L,0x3A24L,0x02E3L,(-4L)},{0x395CL,(-1L),0x8F62L,1L,0x10F6L,0xEF27L,0xEF27L,0x10F6L,1L},{1L,0xBB01L,1L,0x3B2DL,0x3A24L,0x7D08L,(-7L),0x4913L,0x3669L}},{{0x8F62L,(-1L),0x395CL,(-1L),0x8F62L,1L,0x10F6L,0xEF27L,0xEF27L},{0L,0x953DL,0x3669L,0x3B2DL,0x3669L,0x953DL,0L,(-2L),0x4A19L},{1L,0x79D8L,(-1L),1L,0L,1L,(-1L),0x79D8L,1L},{(-4L),(-7L),(-7L),(-2L),0x5CE6L,0x7D08L,0x5CE6L,(-2L),(-7L)}}};
static union U2 *g_660 = &g_104;
static uint16_t **g_701 = &g_353;
static uint16_t g_799 = 65534UL;
static uint32_t g_826[5][6][8] = {{{1UL,4UL,0x9A67F46CL,0xBA0A2D23L,0x07F78662L,2UL,0x4535528FL,1UL},{0x48E82E79L,0x6846C7DBL,1UL,0UL,0UL,0x62BAEE9AL,0UL,18446744073709551609UL},{0x6B0FF83FL,0x48E82E79L,0x418C7080L,0x146464FDL,0xC5DB4EE7L,0x50376E88L,0xCFAAC7BAL,4UL},{0x22E2ECDCL,1UL,0xB147F1ADL,1UL,18446744073709551607UL,0UL,1UL,0xC7FB8FE6L},{0xFF1D20F3L,0xC7FB8FE6L,18446744073709551610UL,0x08977415L,0x75BB9D8AL,0xB147F1ADL,0x9A67F46CL,1UL},{0x62BAEE9AL,2UL,18446744073709551615UL,0xFB185927L,9UL,0UL,0UL,9UL}},{{0x6846C7DBL,0x125BAC11L,0x125BAC11L,0x6846C7DBL,0x08977415L,0x418C7080L,18446744073709551610UL,0UL},{0xBA0A2D23L,0x6B0FF83FL,0x06607E2FL,0xC5DB4EE7L,0UL,0xCD6D7B66L,0x62BAEE9AL,18446744073709551609UL},{0UL,0x6B0FF83FL,0xEC408915L,0xBA0A2D23L,0xBF34750DL,0xFB185927L,0x62BAEE9AL,0x1F73798FL},{0xD11BED67L,0x3884FB99L,0xB147F1ADL,0UL,0x43A2754AL,2UL,0xC342005FL,0UL},{18446744073709551612UL,0x4535528FL,18446744073709551615UL,0x418C7080L,3UL,0x06607E2FL,0xB147F1ADL,0xB2D84205L},{0xC342005FL,0x62BAEE9AL,0xC7FB8FE6L,0x6B0FF83FL,0xCD6D7B66L,0xB2D84205L,1UL,0x146464FDL}},{{0UL,9UL,18446744073709551615UL,0UL,0x9A67F46CL,0UL,0x06607E2FL,0x6846C7DBL},{0xBF34750DL,0xA36CF6E1L,0UL,0x9A67F46CL,0xC7FB8FE6L,0x7D5A1720L,18446744073709551610UL,0x06607E2FL},{0x89471F25L,1UL,0xB2D84205L,0xBF34750DL,0x533B45F6L,0x4535528FL,0x533B45F6L,0xBF34750DL},{0x128B1D03L,0xB147F1ADL,0x128B1D03L,0xF87184BEL,0UL,0x125BAC11L,0xD11BED67L,18446744073709551610UL},{0UL,0x50376E88L,1UL,0xC13308F2L,0xDC5EC1F6L,0x9A67F46CL,0UL,0x418C7080L},{0UL,0x6B0FF83FL,4UL,0xFB185927L,0UL,18446744073709551615UL,1UL,2UL}},{{0x128B1D03L,1UL,1UL,0UL,0x533B45F6L,18446744073709551615UL,0xD8728389L,0xCFAAC7BAL},{0x89471F25L,0x6846C7DBL,0UL,0x50376E88L,0xC7FB8FE6L,0xA36CF6E1L,0xE5B93178L,0x4535528FL},{0xBF34750DL,0UL,0UL,0x6846C7DBL,0x9A67F46CL,0xEC408915L,0xBA0A2D23L,0x33613938L},{0UL,4UL,0x533B45F6L,0xBC62CB4DL,0xCD6D7B66L,0UL,0xBF34750DL,0xD11BED67L},{0xC342005FL,18446744073709551607UL,0x50376E88L,18446744073709551612UL,3UL,4UL,0x22E2ECDCL,0UL},{18446744073709551612UL,1UL,0x48E82E79L,4UL,0x43A2754AL,0x43A2754AL,4UL,0x48E82E79L}},{{0xD11BED67L,0xD11BED67L,0xD8728389L,0x06607E2FL,0xBF34750DL,0xC342005FL,9UL,0xCD6D7B66L},{4UL,0xDC5EC1F6L,0x89471F25L,0xFF1D20F3L,2UL,18446744073709551607UL,0x3884FB99L,0xCD6D7B66L},{0xDC5EC1F6L,3UL,0UL,0x06607E2FL,0UL,0x7CB21034L,18446744073709551615UL,0x48E82E79L},{1UL,2UL,0x418C7080L,4UL,0x50376E88L,0x3884FB99L,0x75BB9D8AL,0UL},{0x7D5A1720L,0xF87184BEL,0x1F73798FL,18446744073709551612UL,0xC5DB4EE7L,0x75BB9D8AL,0xC7FB8FE6L,0xD11BED67L},{18446744073709551609UL,0xFF1D20F3L,0xC5DB4EE7L,0xBC62CB4DL,0x48E82E79L,0xBF34750DL,0x125BAC11L,0x33613938L}}};
static uint8_t g_1016[5] = {0xC5L,0xC5L,0xC5L,0xC5L,0xC5L};
static uint8_t ****g_1110 = (void*)0;
static int8_t g_1115 = 0x76L;
static uint64_t g_1213 = 18446744073709551615UL;
static const uint16_t g_1227 = 0xEDC6L;
static struct S0 g_1239[2][10] = {{{-7671,-28814,3,-81,-539,24380,3,17},{-7671,-28814,3,-81,-539,24380,3,17},{-19564,12887,-10,931,450,31602,0,21},{-7671,-28814,3,-81,-539,24380,3,17},{-7671,-28814,3,-81,-539,24380,3,17},{-19564,12887,-10,931,450,31602,0,21},{-7671,-28814,3,-81,-539,24380,3,17},{-7671,-28814,3,-81,-539,24380,3,17},{-19564,12887,-10,931,450,31602,0,21},{-7671,-28814,3,-81,-539,24380,3,17}},{{-7671,-28814,3,-81,-539,24380,3,17},{-14140,-28287,2,-1000,365,22477,0,16},{-19564,12887,-10,931,450,31602,0,21},{-14140,-28287,2,-1000,365,22477,0,16},{-19564,12887,-10,931,450,31602,0,21},{-19564,12887,-10,931,450,31602,0,21},{-14140,-28287,2,-1000,365,22477,0,16},{-19564,12887,-10,931,450,31602,0,21},{-19564,12887,-10,931,450,31602,0,21},{-14140,-28287,2,-1000,365,22477,0,16}}};
static int64_t **g_1452 = (void*)0;
static uint32_t * const g_1492 = &g_22.f0;
static uint32_t * const *g_1491 = &g_1492;
static uint32_t *** const * const g_1573 = (void*)0;
static int32_t ***g_1580 = &g_428;
static int32_t ****g_1579 = &g_1580;
static int32_t *****g_1578 = &g_1579;



static struct S0 func_1(void);
static int64_t func_16(union U1 p_17, uint8_t p_18, uint32_t p_19, int8_t p_20, int8_t p_21);
static int32_t func_23(int32_t p_24);
static int64_t func_27(const uint16_t p_28, uint32_t p_29, union U2 p_30, uint8_t p_31, int64_t p_32);
static uint64_t func_42(int16_t p_43);
static int8_t func_45(int32_t p_46, int8_t p_47, int32_t p_48, uint8_t p_49);
static int32_t func_54(uint32_t p_55, int64_t p_56);
static const int32_t func_68(struct S0 p_69, int32_t p_70, int64_t p_71);
static struct S0 func_72(int32_t * p_73);
static int32_t * func_74(int8_t * p_75, const int32_t p_76, int32_t p_77, int32_t p_78);
# 113 "<stdin>"
static struct S0 func_1(void)
{
    int32_t l_8[6] = {1L,1L,1L,1L,1L,1L};
    uint16_t l_1304[8][6] = {{4UL,0x4DCAL,4UL,0xF26EL,4UL,0x4DCAL},{2UL,0x4DCAL,8UL,0x4DCAL,2UL,0x4DCAL},{4UL,0xF26EL,4UL,0x4DCAL,4UL,0xF26EL},{2UL,0xF26EL,8UL,0xF26EL,2UL,0xF26EL},{4UL,0x4DCAL,4UL,0xF26EL,4UL,0x4DCAL},{2UL,0x4DCAL,8UL,0x4DCAL,2UL,0x4DCAL},{4UL,0xF26EL,4UL,0x4DCAL,4UL,0xF26EL},{2UL,0xF26EL,8UL,0xF26EL,2UL,0xF26EL}};
    int32_t l_1582 = 0x431922F6L;
    struct S0 l_1583 = {12776,-19499,13,455,450,21195,3,15};
    int i, j;
    l_1582 |= (safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((l_8[1] >= l_8[1]), (safe_unary_minus_func_uint8_t_u((safe_mod_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((18446744073709551609UL < func_16(g_22, l_8[1], g_22.f0, (func_23(g_22.f0) || ((*g_660) , l_8[1])), l_1304[5][2])) , l_1304[5][2]), (-1L))) <= l_8[1]), l_8[3])) & l_1304[7][1]) < l_1304[5][2]), l_1304[5][2])))))), l_1304[5][2])), 2L));
    (**g_1580) = (void*)0;
    return l_1583;
}







static int64_t func_16(union U1 p_17, uint8_t p_18, uint32_t p_19, int8_t p_20, int8_t p_21)
{
    uint64_t l_1305 = 0x55D38AF4754032EBLL;
    int32_t l_1315 = 0x4D128D70L;
    int32_t l_1317 = 0x840BD120L;
    int32_t l_1319 = (-1L);
    int32_t l_1320 = 0xE95A164DL;
    int32_t l_1321 = 0L;
    int8_t l_1322 = 0L;
    int8_t l_1337 = 0xB1L;
    uint32_t l_1372 = 0x8C6616F9L;
    uint64_t l_1375 = 7UL;
    uint16_t *l_1402[2][2][8] = {{{(void*)0,(void*)0,&g_354[1],(void*)0,(void*)0,(void*)0,&g_354[1],(void*)0},{&g_799,&g_354[1],(void*)0,&g_799,(void*)0,(void*)0,&g_799,(void*)0}},{{(void*)0,(void*)0,&g_354[0],&g_354[0],&g_799,&g_354[0],&g_799,&g_354[0]},{(void*)0,&g_354[0],(void*)0,(void*)0,&g_354[0],&g_354[1],&g_354[1],&g_354[0]}}};
    int64_t *l_1451[5];
    int64_t **l_1450 = &l_1451[4];
    int32_t ***l_1497 = (void*)0;
    int32_t ****l_1496[3];
    union U2 *l_1500 = &g_104;
    struct S0 l_1515 = {-14012,-6116,-11,-393,-138,4487,-2,20};
    uint16_t l_1572[4];
    int8_t l_1581 = 0xF3L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1451[i] = &g_275;
    for (i = 0; i < 3; i++)
        l_1496[i] = &l_1497;
    for (i = 0; i < 4; i++)
        l_1572[i] = 0xA93EL;
    if (p_20)
    {
        uint32_t *l_1307[1];
        uint32_t **l_1306 = &l_1307[0];
        int32_t l_1310[1];
        uint64_t l_1323 = 18446744073709551615UL;
        union U1 *l_1329 = &g_22;
        const uint8_t l_1408 = 6UL;
        int64_t **l_1437 = (void*)0;
        int64_t ***l_1436 = &l_1437;
        union U2 l_1473 = {1UL};
        int32_t *l_1479 = (void*)0;
        int i;
        for (i = 0; i < 1; i++)
            l_1307[i] = &g_98;
        for (i = 0; i < 1; i++)
            l_1310[i] = 4L;
lbl_1353:
        (**g_428) |= l_1305;
        if (p_19)
        {
            uint32_t ***l_1308[8][4] = {{&l_1306,(void*)0,&l_1306,&l_1306},{&l_1306,(void*)0,(void*)0,&l_1306},{(void*)0,&l_1306,&l_1306,&l_1306},{(void*)0,&l_1306,(void*)0,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,(void*)0,&l_1306,&l_1306}};
            int32_t l_1309[3][4][8] = {{{0x966A343AL,0xCB9882A8L,3L,0x00A8097CL,0x6DF5BA98L,4L,0x77B8497CL,0x966A343AL},{0xE2AA2190L,0x6DF5BA98L,0L,0xBC88343BL,0xFFC4C6B5L,0xFFC4C6B5L,0xBC88343BL,0L},{0L,0L,1L,0x50D46927L,0x7ACC8FE4L,1L,0xFFC4C6B5L,0x6DF5BA98L},{1L,(-7L),0xBC88343BL,0x8E9E9A97L,6L,0x09C4BFBBL,(-7L),0x6DF5BA98L}},{{(-7L),1L,0L,0x50D46927L,0x77B8497CL,0x00A8097CL,0xCB9882A8L,0L},{0x966A343AL,0x46BEEC96L,0x09C4BFBBL,0xBC88343BL,4L,0x966A343AL,6L,0x966A343AL},{1L,0x00A8097CL,0x508BAF3CL,0x00A8097CL,1L,2L,0xBC88343BL,0x50D46927L},{(-3L),0xE2AA2190L,(-7L),0L,0x6DF5BA98L,1L,0L,0x00A8097CL}},{{3L,1L,4L,0x508BAF3CL,0L,0L,0x8E9E9A97L,4L},{1L,1L,0x77B8497CL,0xDB9812CAL,(-3L),0x09C4BFBBL,0L,0L},{(-6L),1L,0x508BAF3CL,1L,1L,0x508BAF3CL,1L,(-6L)},{4L,3L,0L,0x09C4BFBBL,0x7ACC8FE4L,(-7L),4L,0x46BEEC96L}}};
            uint16_t **l_1354 = &g_353;
            uint64_t l_1368 = 0x5C15D03ECBBA344FLL;
            union U1 *l_1404 = (void*)0;
            int64_t *l_1435 = (void*)0;
            int64_t **l_1434 = &l_1435;
            int64_t ** const *l_1433 = &l_1434;
            int32_t l_1445 = 4L;
            union U1 **l_1474 = &l_1404;
            int i, j, k;
            l_1306 = l_1306;
            for (p_19 = 0; (p_19 <= 0); p_19 += 1)
            {
                int16_t l_1312 = (-7L);
                int32_t l_1318 = 0xD2CABC24L;
                int32_t l_1365 = 0xF3FA949AL;
                int32_t l_1366 = (-1L);
                int32_t l_1367 = 0x91E45C72L;
                int64_t *l_1438 = &g_275;
                uint32_t *l_1453 = &g_826[3][4][6];
                int i;
                for (g_210 = 0; (g_210 <= 0); g_210 += 1)
                {
                    int32_t *l_1311 = &l_1310[0];
                    int32_t *l_1313 = &l_1309[1][0][0];
                    int32_t *l_1314 = &l_1310[0];
                    int32_t *l_1316[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1316[i] = (void*)0;
                    --l_1323;
                    if ((g_354[(p_19 + 1)] != g_354[p_19]))
                    {
                        return p_20;
                    }
                    else
                    {
                        int64_t l_1328 = 0xDC290C0BFE9DE6B4LL;
                        int64_t *l_1336[9][3] = {{&g_106,&g_106,&g_275},{&g_275,&g_275,&g_106},{&g_106,&g_106,&g_275},{&g_275,&g_275,&g_106},{&g_106,&g_106,&g_275},{&g_275,&g_275,&g_106},{&g_106,&g_106,&g_275},{&g_275,&g_275,&g_106},{&g_106,&g_106,&g_275}};
                        int i, j;
                        l_1337 = (((safe_add_func_int8_t_s_s(l_1328, (p_20 = (p_20 , (((void*)0 != l_1329) < ((*l_1314) ^= ((**g_428) & (safe_mul_func_uint16_t_u_u((((&g_1213 != (void*)0) != l_1309[2][2][4]) | ((((**g_256) = (safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((0xC40AL | 65535UL), 4)), g_354[1]))) > (-1L)) <= p_19)), 0x54C0L))))))))) < (**g_197)) , l_1310[0]);
                    }
                    if ((**g_428))
                        break;
                }
                if ((g_354[(p_19 + 1)] || (*g_353)))
                {
                    uint64_t l_1344 = 18446744073709551612UL;
                    int16_t *l_1350 = &g_604[1][1][0];
                    int8_t *l_1351[10];
                    int32_t l_1352 = 0xC70CD2AFL;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1351[i] = &g_61;
                    l_1352 &= (p_19 , ((**g_428) |= ((l_1323 < (safe_lshift_func_int16_t_s_s(p_19, 1))) ^ (safe_add_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(l_1344, (p_21 | 0x2358DB082D5579E0LL))) < ((safe_sub_func_int32_t_s_s(((l_1321 &= ((safe_unary_minus_func_uint32_t_u(((safe_add_func_int8_t_s_s((g_351 = ((*g_257) = (l_1323 , ((((*l_1350) = (p_19 < p_18)) >= (*g_353)) & l_1323)))), g_354[(p_19 + 1)])) > g_91.f4))) && (*g_205))) <= l_1323), p_17.f0)) , p_17.f0)), l_1320)))));
                }
                else
                {
                    if (g_91.f4)
                        goto lbl_1353;
                }
                if (((void*)0 == l_1354))
                {
                    int32_t *l_1355 = &l_1318;
                    int32_t *l_1356 = (void*)0;
                    int32_t *l_1357 = (void*)0;
                    int32_t *l_1358 = &l_1310[0];
                    int32_t *l_1359 = &l_1310[0];
                    int32_t *l_1360 = &l_1309[0][2][2];
                    int32_t *l_1361 = &l_1321;
                    int32_t *l_1362 = &g_111;
                    int32_t *l_1363 = &l_1310[0];
                    int32_t *l_1364[10][4][6] = {{{&l_1309[0][2][2],&l_1309[0][2][2],&l_1310[0],&l_1310[0],&l_1320,(void*)0},{&g_67,&l_1309[0][2][2],&l_1310[0],&l_1318,&l_1309[1][2][1],&l_1310[0]},{&l_1318,&g_67,&l_1310[0],&l_1321,&l_1309[0][2][2],(void*)0},{&l_1321,&l_1321,&l_1310[0],&l_1320,&l_1320,&l_1318}},{{&l_1320,&l_1320,&l_1318,&l_1310[0],(void*)0,&g_67},{&g_111,&l_1310[0],(void*)0,&l_1310[0],&l_1318,&g_67},{&l_1318,(void*)0,&l_1310[0],&l_1320,&l_1320,&l_1310[0]},{&l_1310[0],&l_1310[0],&l_1318,&l_1309[0][3][7],&l_1321,&g_111}},{{&l_1309[1][2][1],(void*)0,&l_1317,&l_1317,&l_1317,(void*)0},{&l_1315,&l_1321,(void*)0,&g_67,&l_1317,&l_1309[1][2][1]},{&l_1310[0],&g_111,&l_1319,&l_1309[0][2][2],&g_111,&l_1318},{&l_1318,&g_111,&l_1310[0],&l_1320,&l_1317,&l_1309[0][2][2]}},{{&l_1317,&l_1321,&l_1310[0],&l_1310[0],&l_1317,(void*)0},{&l_1309[0][2][2],(void*)0,&l_1310[0],&g_111,&l_1321,&l_1319},{(void*)0,&l_1310[0],&l_1309[0][2][2],&l_1309[0][2][2],&l_1320,(void*)0},{&g_111,(void*)0,(void*)0,&l_1319,&l_1318,&l_1317}},{{&l_1309[0][2][2],&l_1310[0],(void*)0,&g_111,(void*)0,&l_1320},{(void*)0,&l_1320,&l_1318,&l_1318,&l_1320,(void*)0},{&l_1317,&l_1321,&g_111,&g_111,&l_1309[0][2][2],&l_1310[0]},{&l_1319,&g_67,&l_1317,&l_1310[0],&l_1309[1][2][1],&l_1310[0]}},{{&l_1319,&l_1309[0][2][2],&l_1310[0],&g_111,&l_1320,&g_111},{&l_1317,&l_1309[0][2][2],&l_1309[0][3][7],&l_1318,&l_1310[0],&l_1310[0]},{(void*)0,&l_1310[0],&l_1317,(void*)0,&l_1309[1][2][1],&l_1309[0][3][7]},{&l_1317,&l_1320,&l_1318,&l_1318,&g_111,&l_1309[0][2][2]}},{{&l_1309[0][2][2],&l_1319,&l_1319,&l_1317,(void*)0,&l_1315},{&g_111,&g_111,(void*)0,&l_1309[0][2][2],&l_1317,&g_111},{&l_1319,&l_1318,&g_111,&l_1318,&l_1319,&l_1320},{&g_111,&l_1317,&l_1310[0],&g_111,&l_1309[0][2][2],&l_1320}},{{&l_1309[0][2][2],(void*)0,(void*)0,&l_1317,&l_1320,&l_1320},{&l_1310[0],&l_1318,&l_1310[0],&l_1310[0],&g_67,&l_1320},{&l_1320,&l_1315,&g_111,&l_1309[0][2][2],&l_1310[0],&g_111},{(void*)0,&l_1310[0],(void*)0,&l_1309[0][2][2],&g_111,&l_1315}},{{&l_1310[0],&l_1310[0],&l_1319,&l_1310[0],&l_1320,&l_1309[0][2][2]},{&l_1310[0],&g_67,&l_1318,(void*)0,&l_1310[0],&l_1309[0][3][7]},{&l_1318,&l_1310[0],&l_1317,&l_1310[0],(void*)0,(void*)0},{&l_1319,&l_1309[0][2][2],&l_1309[0][2][2],&l_1319,(void*)0,&l_1320}},{{&l_1310[0],&l_1309[0][2][2],&l_1310[0],&g_111,&l_1320,(void*)0},{&g_67,&l_1321,&l_1310[0],&l_1310[0],&l_1320,&g_67},{&l_1320,&l_1309[0][2][2],&l_1309[0][2][2],&l_1310[0],(void*)0,&l_1318},{&l_1317,&l_1309[0][2][2],&g_67,&l_1317,(void*)0,&l_1319}}};
                    int32_t l_1371 = 0x2656D4D7L;
                    int i, j, k;
                    --l_1368;
                    --l_1372;
                    if (l_1320)
                        continue;
                    l_1375++;
                }
                else
                {
                    uint16_t l_1378 = 0x385DL;
                    uint64_t *l_1389 = &g_319;
                    uint16_t *l_1392 = &g_799;
                    struct S0 *l_1397 = &g_1239[1][7];
                    struct S0 **l_1396 = &l_1397;
                    int i;
                    l_1365 = ((l_1378 || (safe_mul_func_int8_t_s_s((0L >= ((g_354[(p_19 + 1)] > ((*l_1392) ^= (((((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((p_18 > l_1310[0]), ((l_1378 && (((((*g_257) = (safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((0x30D99C1EFE7237F4LL == (g_415 , ((*l_1389)--))), g_1016[1])), g_111))) ^ p_20) > g_104.f0) & l_1368)) & (-4L)))), g_98)) != 0L) && 255UL) & (*g_205)) & p_20))) , g_1239[0][1].f5)), p_21))) && l_1310[0]);
                    if (p_17.f0)
                        continue;
                    if (g_354[(p_19 + 1)])
                    {
                        union U1 **l_1405[1];
                        uint64_t *l_1409 = &l_1323;
                        int32_t *l_1410 = &l_1366;
                        int8_t *l_1411[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1405[i] = &l_1404;
                        for (i = 0; i < 1; i++)
                            l_1411[i] = (void*)0;
                        (*l_1410) &= (safe_mul_func_uint16_t_u_u((~(((void*)0 != l_1396) < (safe_sub_func_int16_t_s_s((((*g_198) < (((*g_205) , l_1402[0][0][3]) == &l_1378)) && ((**g_428) = ((((*l_1409) = (((*l_1389) |= (+((l_1404 = l_1404) != ((safe_mul_func_uint16_t_u_u((0xFFD369BFL ^ p_21), 1L)) , &g_22)))) != l_1408)) > (*g_205)) ^ 0x88849680DEF7CAEBLL))), (-5L))))), p_20));
                        (*g_428) = func_74(l_1411[0], p_17.f0, p_20, p_21);
                    }
                    else
                    {
                        return (*g_205);
                    }
                }
                (**g_428) &= (((!(safe_div_func_int64_t_s_s((!((safe_mul_func_uint16_t_u_u((((**g_197)--) < l_1315), (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u((((((*g_257) = (safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s((~(((l_1433 != l_1436) > (((*l_1434) = l_1438) == &g_275)) != (((**l_1306) = ((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_s((p_21 | l_1445), ((safe_mul_func_int16_t_s_s((((*l_1453) = (((g_106 = (*g_205)) <= ((g_1452 = l_1450) != &g_205)) || (*g_205))) , (-1L)), l_1322)) >= 0xA8BDL))) || (*g_205)) , 1L) , (-1L)), 11)), (*g_257))) != 0xB2L)) != (-1L)))), 0)) || p_20), p_20))) ^ 0xB1L) , l_1309[1][3][2]) , 5UL), l_1310[0])) != 0x026391C653D850D2LL), 0)))) && l_1321)), p_19))) <= p_20) || g_354[(p_19 + 1)]);
            }
            (**g_428) = (safe_sub_func_int32_t_s_s(p_18, (((safe_lshift_func_uint8_t_u_u(((*g_198) = ((((l_1323 ^ (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((((*g_257) = ((safe_mul_func_uint8_t_u_u(((((((((((safe_lshift_func_uint8_t_u_s((((func_72(&l_1309[0][2][2]) , 1UL) > (safe_div_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((!(l_1310[0] == ((safe_lshift_func_uint8_t_u_u(((g_1016[4] >= g_91.f3) , (l_1473 , l_1445)), 5)) , p_17.f0))), l_1473.f0)), p_21))) || g_67), l_1368)) , p_20) >= p_19) || p_20) & l_1321) , l_1317) , g_82[8]) | g_1115) , l_1372) >= 0x5F617C88L), p_18)) | 0xC0L)) ^ l_1368) , l_1473.f0), l_1473.f0)), g_601))) <= g_91.f0) , p_18) <= l_1319)), g_826[0][4][2])) | p_18) && p_19)));
            (*l_1474) = ((g_22 , (l_1320 , (g_1239[0][9] , 0xAA89F112L))) , l_1404);
        }
        else
        {
            int32_t *l_1477 = &l_1321;
            int8_t l_1478[2][6][7] = {{{0xBFL,0x1CL,6L,(-1L),0x49L,0xA0L,(-2L)},{0xBFL,0x64L,(-9L),6L,(-9L),0x64L,0xBFL},{(-2L),0xA0L,0x49L,(-1L),6L,0x1CL,0xBFL},{6L,0xBFL,(-4L),(-4L),0xBFL,6L,(-2L)},{0x64L,(-4L),0x49L,(-2L),0x0DL,6L,6L},{(-1L),0x0DL,(-9L),0x0DL,(-1L),0x1CL,0x64L}},{{0x53L,(-4L),6L,0xA0L,(-1L),0x64L,(-1L)},{1L,0xBFL,0xBFL,1L,0x0DL,0xA0L,0x53L},{0x53L,0xA0L,0x0DL,1L,0xBFL,0xBFL,1L},{(-1L),0x64L,(-1L),0xA0L,6L,(-4L),0x53L},{0x64L,0x1CL,(-1L),0x0DL,(-9L),0x0DL,(-1L)},{6L,6L,0x0DL,(-2L),0x49L,(-4L),0x64L}}};
            int i, j, k;
            for (g_62 = 0; (g_62 < 49); g_62 = safe_add_func_uint8_t_u_u(g_62, 2))
            {
                (*g_428) = l_1477;
                (*g_428) = (l_1478[1][5][6] , (*g_428));
            }
            l_1479 = (void*)0;
            l_1321 = l_1317;
        }
    }
    else
    {
        int16_t l_1486 = 0x2963L;
        uint32_t *l_1494 = &g_98;
        uint32_t **l_1493[7] = {&l_1494,&l_1494,&l_1494,&l_1494,&l_1494,&l_1494,&l_1494};
        int32_t *l_1495[6];
        union U2 *l_1501[9][8][3] = {{{&g_104,(void*)0,&g_104},{&g_104,&g_104,&g_104},{(void*)0,&g_104,&g_104},{&g_104,&g_104,&g_104},{(void*)0,(void*)0,&g_104},{(void*)0,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104}},{{&g_104,&g_104,&g_104},{(void*)0,&g_104,&g_104},{(void*)0,&g_104,&g_104},{&g_104,(void*)0,&g_104},{(void*)0,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104}},{{(void*)0,(void*)0,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,(void*)0,&g_104},{&g_104,(void*)0,&g_104},{&g_104,&g_104,(void*)0},{&g_104,&g_104,&g_104},{(void*)0,(void*)0,&g_104}},{{&g_104,&g_104,(void*)0},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,(void*)0,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104}},{{(void*)0,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{(void*)0,(void*)0,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,(void*)0,&g_104}},{{&g_104,&g_104,(void*)0},{&g_104,(void*)0,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,(void*)0},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,(void*)0,&g_104},{&g_104,&g_104,&g_104}},{{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104}},{{(void*)0,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{(void*)0,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,(void*)0},{&g_104,&g_104,&g_104}},{{(void*)0,(void*)0,&g_104},{&g_104,&g_104,&g_104},{&g_104,(void*)0,(void*)0},{&g_104,&g_104,(void*)0},{&g_104,&g_104,&g_104},{(void*)0,&g_104,&g_104},{&g_104,(void*)0,&g_104},{(void*)0,&g_104,&g_104}}};
        int16_t *l_1520 = &g_604[2][0][4];
        uint32_t l_1521[10][9] = {{9UL,6UL,0x54267210L,0x41BB309AL,0x05296D53L,0x05296D53L,0x41BB309AL,0x54267210L,6UL},{1UL,9UL,18446744073709551615UL,6UL,0x33C29F44L,0x84113E99L,1UL,0x92BB0CF8L,18446744073709551613UL},{0x39BB35C4L,0x33C29F44L,0x0225FFADL,4UL,0xA7CAB724L,1UL,0x56124A83L,0x6DF11FC8L,0UL},{0x93759F30L,9UL,0x56124A83L,0xD650866EL,18446744073709551615UL,0xA079FA1FL,18446744073709551612UL,6UL,4UL},{1UL,6UL,0xA079FA1FL,0x05296D53L,18446744073709551612UL,18446744073709551615UL,18446744073709551612UL,0x05296D53L,0xA079FA1FL},{0x9DEBC422L,0x9DEBC422L,0UL,0x97AA8F2DL,18446744073709551615UL,0x92BB0CF8L,0x56124A83L,18446744073709551610UL,3UL},{0xBDE14B75L,0x97AA8F2DL,6UL,0x56124A83L,1UL,0x8B8C1FADL,1UL,0x41BB309AL,0x39BB35C4L},{6UL,3UL,0UL,0x33C29F44L,0xED0E8652L,0x9DEBC422L,0x41BB309AL,0x15816824L,0xD650866EL},{18446744073709551615UL,0UL,0xA079FA1FL,0x8B8C1FADL,0x15816824L,3UL,3UL,0x15816824L,0x8B8C1FADL},{0x56124A83L,0xA7CAB724L,0x56124A83L,0x84113E99L,6UL,1UL,6UL,0x41BB309AL,18446744073709551615UL}};
        union U1 *l_1536 = &g_22;
        union U1 **l_1535 = &l_1536;
        uint32_t l_1548 = 1UL;
        int32_t l_1552 = 0xB75A72AAL;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_1495[i] = &l_1321;
        l_1315 = ((safe_rshift_func_int8_t_s_s(((*g_660) , (safe_sub_func_uint64_t_u_u((p_18 > (l_1486 <= ((**g_428) = (safe_mod_func_uint64_t_u_u((p_21 >= ((*g_352) == (*g_701))), l_1322))))), (safe_mul_func_int16_t_s_s(0x2F6BL, (g_1491 != l_1493[0])))))), 5)) >= 5L);
        (**g_428) ^= (&g_331[8][0] != l_1496[0]);
        if ((((l_1521[6][8] &= ((safe_add_func_uint64_t_u_u(((l_1500 == l_1501[8][0][0]) != (safe_rshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(1L, ((((-1L) > (p_17.f0 , (~((safe_lshift_func_int16_t_s_u(((*l_1520) = (((safe_sub_func_uint16_t_u_u(((*g_353) = (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_1515 , (((safe_lshift_func_int8_t_s_s((-10L), (safe_sub_func_uint32_t_u_u(0x6DECB097L, 0x8ECC125BL)))) , 0xFE7A13D897DAE26ALL) <= (*g_205))), (**g_197))), (**g_701)))), g_275)) ^ g_533[3]) & 0x33L)), 11)) , p_19)))) == p_21) ^ p_17.f0))), 0))), g_826[4][3][6])) & p_20)) ^ g_826[0][4][2]) , p_19))
        {
            const int8_t l_1526 = 0x9EL;
            uint64_t *l_1532 = &l_1375;
            uint64_t *l_1537[2][4][7] = {{{(void*)0,&g_415,(void*)0,&g_1213,(void*)0,&g_415,(void*)0},{&g_1213,(void*)0,&g_1213,(void*)0,&g_1213,(void*)0,&g_1213},{(void*)0,&g_415,(void*)0,&g_1213,(void*)0,&g_415,(void*)0},{&g_1213,(void*)0,&g_1213,(void*)0,&g_1213,(void*)0,&g_1213}},{{(void*)0,&g_415,(void*)0,&g_1213,(void*)0,&g_415,(void*)0},{&g_1213,(void*)0,&g_1213,(void*)0,&g_1213,(void*)0,&g_1213},{(void*)0,&g_415,(void*)0,&g_1213,(void*)0,&g_415,(void*)0},{&g_1213,(void*)0,&g_1213,(void*)0,&g_1213,(void*)0,&g_1213}}};
            int32_t l_1538[9] = {(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L};
            int32_t l_1539[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1539[i] = 0xF6DA291EL;
            l_1539[1] = (safe_lshift_func_int8_t_s_s(((((*g_198) = (safe_div_func_int32_t_s_s(l_1526, ((**g_428) = (((safe_add_func_uint8_t_u_u(0xF2L, (safe_lshift_func_int16_t_s_u((((*g_205) >= ((*l_1532) = (+((**g_1491) || p_18)))) || (**g_1491)), 10)))) >= (safe_sub_func_uint64_t_u_u(((void*)0 == l_1535), (l_1538[2] = ((0xAF63FB4F44B3444ELL && (*g_205)) <= p_19))))) , 0xE791850DL))))) < p_20) && p_21), 3));
        }
        else
        {
            uint16_t l_1553[3][4] = {{1UL,0x5767L,1UL,1UL},{0UL,1UL,1UL,0UL},{0x0EB5L,1UL,0x5767L,1UL}};
            union U2 **l_1569 = &l_1501[8][0][0];
            int32_t l_1570 = 0xA7AF17FDL;
            int32_t l_1571[6][10] = {{2L,0x6F6CCD6FL,0x059E4AFCL,0L,0L,0x059E4AFCL,0x6F6CCD6FL,2L,(-9L),0xB8F908D0L},{0L,(-6L),(-9L),0x8DE13F50L,0xF03F17CBL,0L,0L,0x83806025L,7L,0L},{7L,0L,(-9L),0xF03F17CBL,0L,0x83806025L,0L,2L,0L,0x83806025L},{0x6F6CCD6FL,0xB8F908D0L,0x059E4AFCL,0xB8F908D0L,0x6F6CCD6FL,1L,0x8DE13F50L,0L,1L,(-7L)},{(-7L),(-6L),0L,(-7L),(-9L),0xD5621EF0L,0xC7D184FCL,7L,0xF03F17CBL,(-7L)},{7L,(-7L),0x83806025L,(-9L),0x6F6CCD6FL,(-6L),(-6L),0x6F6CCD6FL,(-9L),0x83806025L}};
            int i, j;
            (*g_428) = (void*)0;
            for (g_61 = 0; (g_61 != 21); g_61++)
            {
                uint32_t l_1544 = 0x7963C23EL;
                union U2 l_1560 = {0x013A46BDL};
                int32_t l_1566 = 0x61D70F81L;
                for (l_1337 = 0; (l_1337 <= 11); l_1337++)
                {
                    ++l_1544;
                }
                for (g_210 = 1; (g_210 <= 5); g_210 += 1)
                {
                    int32_t l_1547 = 0x25A6F99CL;
                    int i;
                    l_1548--;
                    if (l_1544)
                        continue;
                    for (g_98 = 0; (g_98 <= 1); g_98 += 1)
                    {
                        int32_t *l_1551 = &l_1320;
                        (*g_428) = l_1551;
                        (*g_428) = l_1551;
                        --l_1553[2][1];
                    }
                }
                for (l_1317 = 3; (l_1317 <= 8); l_1317 += 1)
                {
                    uint64_t *l_1563 = &g_415;
                    int i, j;
                    l_1572[1] |= (l_1571[2][2] = ((safe_mul_func_uint16_t_u_u((((((safe_div_func_int16_t_s_s(((l_1560 , ((((*l_1563) |= ((--(*g_198)) ^ 0x73L)) > ((safe_add_func_int8_t_s_s((l_1521[l_1317][l_1317] <= ((((l_1566 &= (**g_701)) == (l_1570 = ((p_17.f0 >= ((safe_sub_func_uint16_t_u_u(((249UL >= l_1560.f0) || p_17.f0), (l_1569 != &g_660))) >= 0x20F7L)) || g_104.f1))) > 0xA57948B39F703F7FLL) | 0UL)), p_18)) == g_104.f0)) && p_19)) || 4L), (**g_701))) == p_17.f0) != p_20) || l_1560.f0) != l_1560.f0), (**g_701))) == 1L));
                    for (l_1552 = 6; (l_1552 >= 0); l_1552 -= 1)
                    {
                        uint32_t *** const l_1576 = &l_1493[1];
                        uint32_t *** const *l_1575 = &l_1576;
                        uint32_t *** const **l_1574[10][4][6] = {{{&l_1575,&l_1575,(void*)0,&l_1575,(void*)0,(void*)0},{&l_1575,&l_1575,(void*)0,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,(void*)0,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,&l_1575}},{{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,&l_1575,(void*)0,(void*)0,&l_1575},{&l_1575,&l_1575,(void*)0,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,(void*)0,&l_1575,(void*)0,(void*)0}},{{&l_1575,&l_1575,(void*)0,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,(void*)0,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,&l_1575}},{{&l_1575,&l_1575,&l_1575,(void*)0,(void*)0,&l_1575},{&l_1575,&l_1575,(void*)0,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,(void*)0,&l_1575,(void*)0,(void*)0},{&l_1575,&l_1575,(void*)0,&l_1575,&l_1575,&l_1575}},{{&l_1575,&l_1575,(void*)0,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,&l_1575,(void*)0,(void*)0,&l_1575}},{{&l_1575,&l_1575,&l_1575,&l_1575,(void*)0,&l_1575},{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,(void*)0}},{{&l_1575,&l_1575,(void*)0,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,(void*)0,&l_1575,&l_1575,(void*)0},{&l_1575,&l_1575,&l_1575,&l_1575,(void*)0,&l_1575}},{{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,(void*)0},{&l_1575,&l_1575,(void*)0,&l_1575,&l_1575,&l_1575}},{{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,(void*)0,&l_1575,&l_1575,(void*)0},{&l_1575,&l_1575,&l_1575,&l_1575,(void*)0,&l_1575},{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,&l_1575}},{{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,(void*)0},{&l_1575,&l_1575,(void*)0,&l_1575,&l_1575,&l_1575},{&l_1575,&l_1575,&l_1575,&l_1575,&l_1575,&l_1575}}};
                        uint32_t *** const **l_1577 = &l_1575;
                        int i, j, k;
                        (*l_1577) = g_1573;
                        if (l_1566)
                            break;
                    }
                }
            }
            return l_1570;
        }
    }
    (**g_428) ^= p_18;
    g_1578 = &l_1496[0];
    l_1581 &= (***g_1580);
    return p_18;
}







static int32_t func_23(int32_t p_24)
{
    int16_t l_39 = (-4L);
    int32_t l_44 = 8L;
    int8_t **l_751[5][8][2] = {{{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257}},{{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257}},{{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257}},{{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257}},{{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257}}};
    uint16_t **l_758[9] = {&g_353,&g_353,&g_353,&g_353,&g_353,&g_353,&g_353,&g_353,&g_353};
    uint16_t ***l_757 = &l_758[2];
    uint8_t l_761 = 246UL;
    union U2 *l_924 = (void*)0;
    uint8_t l_968[3][1];
    int32_t l_1030 = 1L;
    int32_t l_1032 = 6L;
    int64_t l_1056 = (-1L);
    int32_t l_1073 = (-10L);
    int32_t l_1078 = (-1L);
    int32_t l_1079 = 1L;
    int32_t l_1081 = 0L;
    uint16_t l_1085 = 0x6882L;
    uint16_t l_1169[9][2] = {{0xAC29L,0xAEC2L},{0xAEC2L,0xAC29L},{0xAEC2L,0xAEC2L},{0xAC29L,0xAEC2L},{0xAEC2L,0xAC29L},{0xAEC2L,0xAEC2L},{0xAC29L,0xAEC2L},{0xAEC2L,0xAC29L},{0xAEC2L,0xAEC2L}};
    uint64_t l_1226[4] = {0x6935267A2E624D3FLL,0x6935267A2E624D3FLL,0x6935267A2E624D3FLL,0x6935267A2E624D3FLL};
    struct S0 *l_1238 = &g_1239[0][1];
    const union U2 * const l_1240 = (void*)0;
    int32_t l_1253 = 0x380D2930L;
    int32_t l_1256[6];
    uint8_t l_1287 = 0UL;
    int64_t l_1288 = 0xC6779D3B7BFA1673LL;
    int64_t l_1295 = 0x24BCA60DF1B47480LL;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_968[i][j] = 0x5BL;
    }
    for (i = 0; i < 6; i++)
        l_1256[i] = 0L;
    for (p_24 = 0; (p_24 == 22); p_24 = safe_add_func_int64_t_s_s(p_24, 3))
    {
        int8_t ***l_752 = &l_751[3][6][1];
        const int8_t *l_754 = &g_351;
        const int8_t ** const l_753 = &l_754;
        uint16_t **l_756[7] = {&g_353,&g_353,(void*)0,&g_353,&g_353,(void*)0,&g_353};
        uint16_t ***l_755[1];
        int32_t l_759 = (-3L);
        union U2 l_760 = {0x8407C397L};
        int32_t *l_882 = &g_111;
        uint32_t *l_891 = &g_162;
        int64_t *l_912 = &g_106;
        int32_t l_1026 = (-4L);
        int32_t l_1027 = 0xFDEAF76EL;
        int32_t l_1029 = 0L;
        int32_t l_1031 = (-9L);
        int32_t l_1033 = 0xAC625895L;
        int32_t l_1036 = 0x5F0E29E0L;
        union U2 **l_1040[4];
        union U1 l_1051 = {1UL};
        int32_t l_1071[1][3][2];
        int8_t l_1075 = 0x03L;
        int64_t ** const *l_1212 = (void*)0;
        uint8_t **l_1243 = &g_198;
        int32_t l_1259 = (-1L);
        int64_t l_1272[8] = {0x37FA920E51AECF05LL,0x37FA920E51AECF05LL,0x37FA920E51AECF05LL,0x37FA920E51AECF05LL,0x37FA920E51AECF05LL,0x37FA920E51AECF05LL,0x37FA920E51AECF05LL,0x37FA920E51AECF05LL};
        int32_t *l_1284 = &l_759;
        int16_t *l_1300 = &g_604[1][1][0];
        int64_t l_1303 = 0x52DE85955B4211CELL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_755[i] = &l_756[5];
        for (i = 0; i < 4; i++)
            l_1040[i] = (void*)0;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 2; k++)
                    l_1071[i][j][k] = 0x51CF469FL;
            }
        }
    }
    return l_1226[3];
}







static int64_t func_27(const uint16_t p_28, uint32_t p_29, union U2 p_30, uint8_t p_31, int64_t p_32)
{
    int64_t l_771 = (-2L);
    int32_t l_772 = (-9L);
    int32_t l_839 = 1L;
    int32_t l_860 = 0x9F0C001BL;
    int32_t l_861[1][9] = {{0x82526E63L,0x82526E63L,(-4L),0x82526E63L,0x82526E63L,(-4L),0x82526E63L,0x82526E63L,(-4L)}};
    const int32_t ***l_871 = (void*)0;
    struct S0 l_875 = {4018,31260,4,-633,262,5601,3,9};
    int32_t **l_880 = &g_154[1];
    int i, j;
    for (g_98 = 0; (g_98 != 12); g_98 = safe_add_func_uint8_t_u_u(g_98, 4))
    {
        int32_t ** const l_770[10] = {&g_154[5],&g_154[5],&g_154[0],&g_154[5],&g_154[5],&g_154[0],&g_154[5],&g_154[5],&g_154[0],&g_154[5]};
        union U2 l_793 = {0xE3ED3CABL};
        int8_t *l_801 = &g_351;
        uint16_t l_802 = 0xDC58L;
        uint32_t l_803 = 0xA2BD2301L;
        int8_t l_857 = 0xAFL;
        uint32_t l_862 = 0xB0825216L;
        const int32_t ****l_872 = &l_871;
        uint64_t *l_881 = &g_415;
        int i;
        if ((safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u((((safe_mod_func_uint64_t_u_u(((void*)0 != l_770[2]), (0x15992476015D54E4LL && g_91.f3))) && (((l_772 &= ((&g_332[0] != (void*)0) > l_771)) > (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((p_31 < 65533UL), 5)), 11))) , p_32)) > 3UL), p_30.f1)), g_162)))
        {
            uint32_t l_779 = 1UL;
            uint16_t *l_798 = &g_799;
            int8_t *l_800 = &g_82[8];
            int32_t l_804 = 1L;
            l_772 ^= (safe_rshift_func_int16_t_s_u(0xA369L, 14));
            ++l_779;
            l_804 = (l_772 = ((safe_mod_func_uint64_t_u_u(0x488D7BB21CC0BC2FLL, (((safe_mul_func_uint16_t_u_u((((((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_int8_t_s(((**g_256) = ((void*)0 == (*g_701))))), 1UL)) , (l_793 , ((((*l_798) &= ((safe_sub_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((l_771 , ((*g_205) | (*g_205))) & g_62), (**g_256))), (*g_353))) && 0x9BA16844L)) || 0x39E6L) && g_415))), p_31)), 3)) & p_31) | 0x4A92L) , l_800) == l_801), l_802)) < p_31) , g_104.f0))) & l_803));
        }
        else
        {
            int32_t *l_806 = &g_67;
            uint8_t ***l_853 = (void*)0;
            int32_t l_858 = 0xB7F41336L;
            int32_t l_859 = (-6L);
            l_772 &= p_30.f0;
            if (p_32)
            {
                int32_t *l_805 = &g_111;
                uint16_t ***l_829[7][1][8] = {{{&g_352,&g_701,(void*)0,&g_352,(void*)0,&g_701,&g_352,&g_701}},{{&g_352,&g_352,(void*)0,&g_352,&g_352,&g_352,&g_352,&g_352}},{{(void*)0,&g_352,(void*)0,&g_701,&g_352,&g_701,(void*)0,&g_352}},{{&g_352,&g_701,(void*)0,&g_352,(void*)0,&g_701,&g_352,&g_701}},{{&g_352,&g_352,(void*)0,&g_352,&g_352,&g_352,&g_352,&g_352}},{{(void*)0,&g_352,(void*)0,&g_701,&g_352,&g_701,(void*)0,&g_352}},{{&g_352,&g_701,(void*)0,&g_352,(void*)0,&g_701,&g_352,&g_701}}};
                const uint8_t **l_852 = (void*)0;
                const uint8_t ***l_851 = &l_852;
                int i, j, k;
                (*l_806) ^= ((*l_805) = (((l_805 != l_806) , 0xF9L) , (~0x75L)));
                for (l_802 = 29; (l_802 >= 26); l_802--)
                {
                    uint64_t l_840 = 1UL;
                    int32_t l_841 = 0xDE9BF27CL;
                    for (g_62 = 0; (g_62 > 26); g_62 = safe_add_func_int16_t_s_s(g_62, 1))
                    {
                        int64_t *l_816 = (void*)0;
                        int64_t *l_817 = &g_275;
                        uint64_t *l_824 = (void*)0;
                        uint64_t *l_825[8][1][10] = {{{&g_415,&g_415,(void*)0,&g_415,&g_415,&g_415,&g_415,&g_415,(void*)0,&g_415}},{{&g_415,&g_319,(void*)0,&g_415,(void*)0,&g_319,&g_415,&g_319,(void*)0,&g_415}},{{(void*)0,&g_415,(void*)0,&g_319,&g_415,&g_319,(void*)0,&g_415,(void*)0,&g_319}},{{&g_415,&g_415,(void*)0,&g_415,&g_415,&g_415,&g_415,&g_415,(void*)0,&g_415}},{{&g_415,&g_319,(void*)0,&g_415,(void*)0,&g_319,&g_415,&g_319,(void*)0,&g_415}},{{(void*)0,&g_415,(void*)0,&g_319,&g_415,&g_319,(void*)0,&g_415,(void*)0,&g_319}},{{&g_415,&g_415,&g_415,&g_319,(void*)0,&g_415,(void*)0,&g_319,&g_415,&g_319}},{{(void*)0,&g_415,(void*)0,&g_319,(void*)0,&g_415,(void*)0,&g_415,(void*)0,&g_319}}};
                        int i, j, k;
                        (*l_805) ^= (safe_mul_func_int16_t_s_s((g_91 , ((((safe_sub_func_int64_t_s_s(((*l_817) = p_30.f0), (safe_sub_func_int8_t_s_s((((*g_353)++) ^ (safe_sub_func_int32_t_s_s(p_30.f1, ((l_771 || (l_839 ^= ((g_415 = (g_826[0][4][2] = 0x849279E647B0AA1DLL)) && ((((safe_sub_func_int64_t_s_s((&g_352 != l_829[5][0][3]), l_772)) == ((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((((((*l_806) = ((safe_unary_minus_func_uint16_t_u((((safe_rshift_func_uint8_t_u_u((g_91 , l_771), 5)) , g_22.f0) > g_106))) || 0UL)) , (void*)0) == l_805) != p_30.f0), p_29)) , 8L), 7)), (-1L))) && l_771)) <= p_32) <= p_30.f1)))) >= 0x05B9D9DF8FDD1CDFLL)))), 0x7BL)))) | 0xE21E7BB3L) != (*g_257)) > 1UL)), p_29));
                    }
                    l_840 = (*l_806);
                    if ((l_771 <= 0UL))
                    {
                        uint64_t l_842 = 18446744073709551615UL;
                        --l_842;
                        (*l_805) = l_839;
                    }
                    else
                    {
                        const uint8_t *l_849 = &g_158;
                        const uint8_t **l_848 = &l_849;
                        const uint8_t ***l_847 = &l_848;
                        const uint8_t ****l_850[10];
                        int32_t * const l_856 = &g_67;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_850[i] = (void*)0;
                        (*l_805) &= (g_91.f4 , (safe_mul_func_int8_t_s_s(((l_851 = l_847) == l_853), (safe_rshift_func_int8_t_s_s((*g_257), (l_856 == l_805))))));
                    }
                    if (l_857)
                        break;
                }
            }
            else
            {
                uint32_t l_865 = 4294967295UL;
                l_862++;
                l_858 = ((*l_806) = 0x479AA4BBL);
                l_865--;
            }
            l_861[0][5] |= (0xC66F8F3FL == (*l_806));
            if (p_29)
                break;
        }
        l_875.f4 = (!((l_860 != (safe_mod_func_int16_t_s_s((g_91.f5 < ((((*l_872) = l_871) != ((((safe_rshift_func_uint8_t_u_s(((((((0xE1DA49A1E55E3E5CLL != (l_875 , (safe_mul_func_int16_t_s_s(g_67, (l_875.f6 , (safe_mod_func_uint64_t_u_u(((*l_881) ^= ((g_428 = l_880) != l_880)), g_106))))))) , (*g_198)) != p_28) > p_31) , p_32) && l_839), 4)) & 0xCF43L) ^ p_30.f0) , &l_880)) != p_28)), 0x4544L))) , g_826[4][4][2]));
    }
    return p_28;
}







static uint64_t func_42(int16_t p_43)
{
    int32_t l_50 = 0x7228D029L;
    int8_t **l_79 = (void*)0;
    int8_t *l_81 = &g_82[8];
    int8_t **l_80 = &l_81;
    int16_t l_96[5][2][6] = {{{0xC5EAL,0x0E26L,0xAE43L,0xEB90L,0xF4D9L,0x7603L},{0x4F1EL,0x7009L,0xA339L,0xA339L,0x7009L,0x4F1EL}},{{7L,0x14A4L,0xC5EAL,(-2L),0x38AAL,0x4EEAL},{0x355DL,0x4EEAL,0xEB90L,0L,0xA339L,0L}},{{0x355DL,0xF4D9L,0L,(-2L),0L,0x0E26L},{7L,0x38AAL,6L,0xA339L,0x7603L,(-7L)}},{{0x4F1EL,0xEB90L,0x7009L,0xEB90L,0x4F1EL,(-1L)},{0xC5EAL,0x03F4L,0x4F1EL,0x8A3AL,0x4EEAL,(-2L)}},{{0x7603L,0x4F1EL,0x0E26L,0x03F4L,0L,(-2L)},{0xEB90L,1L,0x4F1EL,(-7L),0x0E26L,(-1L)}}};
    uint32_t *l_97 = &g_98;
    int64_t *l_105[3];
    int32_t l_107 = (-9L);
    int32_t l_108 = 0x41A78517L;
    int32_t l_109 = 0x53ABC15DL;
    int32_t *l_110 = &g_111;
    uint32_t l_487[5];
    uint8_t l_744 = 0xBCL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_105[i] = &g_106;
    for (i = 0; i < 5; i++)
        l_487[i] = 0xAC1D18FEL;
    l_744 = (((**g_256) = func_45(l_50, (+(safe_mod_func_int32_t_s_s(func_54((g_57 = l_50), (!l_50)), func_68(func_72(func_74(((*l_80) = (void*)0), (((safe_div_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((((*l_110) = (0x27C80C7FL < (g_91 , (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((l_109 &= (l_108 = ((((*l_97)--) | ((g_101 != ((safe_sub_func_int64_t_s_s((l_107 = ((g_104 , g_91.f1) & p_43)), g_82[5])) , (void*)0)) <= p_43)) >= l_50))) || 1UL), 5)), 1UL))))) || p_43), 0L)) >= p_43) == l_96[1][0][1]), g_82[9])) > g_104.f0), 65535UL)) > 1UL) >= g_91.f1), p_43, p_43)), l_487[1], (*g_205))))), p_43, p_43)) || 0UL);
    for (g_62 = 20; (g_62 < 44); g_62 = safe_add_func_uint16_t_u_u(g_62, 1))
    {
        for (g_57 = 16; (g_57 < 51); ++g_57)
        {
            (*l_110) ^= p_43;
        }
    }
    return (*l_110);
}







static int8_t func_45(int32_t p_46, int8_t p_47, int32_t p_48, uint8_t p_49)
{
    int32_t *l_743[9][3] = {{&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67}};
    int i, j;
    p_48 ^= p_46;
    return p_49;
}







static int32_t func_54(uint32_t p_55, int64_t p_56)
{
    int8_t *l_60 = &g_61;
    const int32_t l_65 = 0L;
    int32_t *l_66 = &g_67;
    (*l_66) = ((0xDB9622CFB64730E9LL > (!(g_62 = ((*l_60) = p_55)))) , (safe_div_func_uint8_t_u_u(l_65, g_57)));
    return g_61;
}







static const int32_t func_68(struct S0 p_69, int32_t p_70, int64_t p_71)
{
    int32_t l_490 = 0xAB93912BL;
    int32_t l_522 = 1L;
    union U2 l_543 = {0xCAD40BC0L};
    int16_t l_545 = (-1L);
    uint32_t l_603 = 0xFD10F9ADL;
    int32_t l_605 = 0L;
    uint8_t l_606 = 1UL;
    int32_t ***l_653 = &g_428;
    uint16_t ***l_686[5][3] = {{&g_352,(void*)0,&g_352},{&g_352,&g_352,&g_352},{&g_352,(void*)0,&g_352},{&g_352,&g_352,&g_352},{&g_352,(void*)0,&g_352}};
    union U1 l_710[5] = {{0x365C5E32L},{0x365C5E32L},{0x365C5E32L},{0x365C5E32L},{0x365C5E32L}};
    int8_t l_713[6][3][10] = {{{0x0EL,1L,(-1L),0xA9L,0x33L,9L,1L,0x33L,1L,0xFBL},{(-8L),(-1L),(-1L),0x33L,0x25L,0x33L,(-1L),(-1L),(-8L),(-1L)},{0xA9L,0x0EL,0x41L,1L,0x0EL,0L,0xFBL,0xA9L,1L,1L}},{{5L,(-8L),0xDFL,1L,(-1L),(-1L),1L,0xDFL,(-8L),5L},{0xDFL,0xA9L,(-8L),0x33L,(-1L),1L,0xDFL,5L,1L,(-8L)},{0xA9L,5L,4L,0xA9L,(-1L),1L,(-1L),0xA9L,4L,5L}},{{(-1L),0xDFL,9L,0xFBL,(-1L),9L,0x33L,0xBBL,1L,(-1L)},{0x41L,0xDFL,0xB3L,4L,9L,(-2L),(-2L),9L,4L,0xB3L},{0x86L,0x86L,(-1L),9L,1L,1L,(-8L),0x86L,0x25L,(-8L)}},{{0xDFL,0x41L,(-2L),(-1L),0x41L,4L,(-8L),4L,0x41L,(-1L)},{1L,0x86L,1L,(-2L),(-8L),0xB3L,(-2L),0x33L,0xBBL,1L},{0x33L,0xDFL,0x25L,9L,0x86L,5L,0x33L,0x33L,5L,0x86L}},{{0xDFL,1L,1L,0xDFL,0xBBL,0x41L,0x86L,4L,1L,0x33L},{0xBBL,0x33L,(-2L),0xB3L,(-8L),(-2L),1L,0x86L,1L,(-2L)},{9L,0xDFL,(-1L),0xDFL,9L,0xFBL,(-1L),9L,5L,(-8L)}},{{0x86L,0xBBL,0xB3L,9L,0L,0x41L,(-8L),0xBBL,0xBBL,(-8L)},{4L,9L,(-2L),(-2L),9L,4L,0xB3L,0xDFL,0x41L,(-2L)},{0x33L,0x86L,0x0EL,(-1L),(-8L),(-1L),(-1L),0x33L,0x25L,0x33L}}};
    uint32_t l_736 = 0x675931ADL;
    int i, j, k;
    for (g_106 = 0; (g_106 <= 9); g_106 += 1)
    {
        uint16_t ***l_500 = &g_352;
        int32_t l_501 = 1L;
        struct S0 l_609 = {-11949,27682,-15,-253,301,30964,0,5};
        int8_t *l_640 = &g_82[0];
        uint8_t **l_685 = &g_198;
        const int32_t l_688 = 1L;
        for (g_319 = 0; (g_319 <= 9); g_319 += 1)
        {
            int16_t l_499[6] = {3L,3L,3L,3L,3L,3L};
            int32_t l_534 = 0L;
            uint64_t l_599 = 0x9303A34FAE5EB64FLL;
            const uint8_t *l_683 = (void*)0;
            const uint8_t **l_682[4][3][9] = {{{&l_683,&l_683,&l_683,&l_683,&l_683,&l_683,&l_683,&l_683,&l_683},{&l_683,(void*)0,&l_683,&l_683,(void*)0,&l_683,&l_683,&l_683,(void*)0},{&l_683,&l_683,&l_683,&l_683,(void*)0,&l_683,&l_683,&l_683,&l_683}},{{&l_683,&l_683,(void*)0,&l_683,&l_683,&l_683,(void*)0,&l_683,(void*)0},{&l_683,(void*)0,&l_683,&l_683,(void*)0,&l_683,(void*)0,&l_683,&l_683},{&l_683,&l_683,(void*)0,&l_683,(void*)0,&l_683,&l_683,&l_683,(void*)0}},{{&l_683,(void*)0,&l_683,&l_683,&l_683,&l_683,(void*)0,&l_683,&l_683},{&l_683,&l_683,(void*)0,&l_683,&l_683,&l_683,(void*)0,&l_683,(void*)0},{&l_683,&l_683,(void*)0,&l_683,&l_683,&l_683,&l_683,(void*)0,&l_683}},{{&l_683,&l_683,&l_683,(void*)0,&l_683,&l_683,&l_683,(void*)0,&l_683},{&l_683,&l_683,&l_683,(void*)0,&l_683,&l_683,&l_683,&l_683,(void*)0},{(void*)0,&l_683,(void*)0,&l_683,&l_683,&l_683,&l_683,&l_683,&l_683}}};
            uint16_t **l_699 = &g_353;
            int64_t *l_712 = &g_275;
            int64_t **l_711 = &l_712;
            int i, j, k;
            for (g_111 = 0; (g_111 >= 0); g_111 -= 1)
            {
                uint32_t l_497[9] = {18446744073709551610UL,0x96D3643DL,0x96D3643DL,18446744073709551610UL,0x96D3643DL,0x96D3643DL,18446744073709551610UL,0x96D3643DL,0x96D3643DL};
                int64_t *l_513[4][7] = {{&g_275,&g_106,&g_106,&g_275,&g_106,&g_106,&g_275},{&g_106,&g_275,&g_106,&g_106,&g_275,&g_106,&g_106},{&g_275,&g_275,(void*)0,&g_275,&g_275,(void*)0,&g_275},{&g_275,&g_106,&g_106,&g_275,&g_106,&g_106,&g_275}};
                int64_t **l_514 = &l_513[1][3];
                int16_t *l_521[1];
                int32_t l_630 = 0x70699439L;
                union U1 l_661 = {0xB15E293CL};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_521[i] = (void*)0;
                for (g_98 = 0; (g_98 <= 9); g_98 += 1)
                {
                    int32_t l_495 = 6L;
                    for (p_71 = 0; (p_71 <= 9); p_71 += 1)
                    {
                        int32_t *l_498[7][6][5] = {{{&g_111,&l_495,&g_111,&g_111,&g_111},{(void*)0,&l_495,(void*)0,&l_495,&l_495},{&l_495,&g_111,(void*)0,&l_495,&l_495},{(void*)0,&l_495,(void*)0,&l_495,(void*)0},{&g_111,&g_111,&l_495,(void*)0,&l_495},{&l_495,&l_495,&g_111,&l_495,&g_111}},{{&g_111,&g_111,&g_111,&g_111,&l_495},{(void*)0,&l_495,&l_495,(void*)0,(void*)0},{&l_495,&g_111,&g_111,&g_111,&l_495},{&l_495,(void*)0,&l_495,&l_495,&l_495},{&g_111,&g_111,&g_111,&g_111,&g_111},{&l_495,&l_495,&l_495,(void*)0,&l_495}},{{&g_111,&l_495,&g_111,&g_111,(void*)0},{&g_111,&l_495,(void*)0,&l_495,&l_495},{&g_111,&g_111,&g_111,(void*)0,&g_111},{&l_495,&l_495,&l_495,&l_495,&l_495},{&l_495,&l_495,&g_111,&l_495,&g_111},{&g_111,&l_495,&l_495,&l_495,&g_111}},{{&g_111,&l_495,&g_111,&g_111,&l_495},{&l_495,&l_495,&l_495,&g_111,&l_495},{&g_111,&g_111,&g_111,&g_111,&l_495},{&l_495,&l_495,&g_111,&l_495,(void*)0},{&g_111,&l_495,&l_495,&l_495,&g_111},{&l_495,&l_495,&l_495,&g_111,&g_111}},{{(void*)0,&g_111,&g_111,&l_495,&l_495},{&l_495,&l_495,&l_495,&l_495,&g_111},{&g_111,&l_495,&l_495,&g_111,&l_495},{&g_111,&l_495,(void*)0,&l_495,&l_495},{&g_111,&l_495,&g_111,&g_111,&g_111},{(void*)0,&l_495,&l_495,&l_495,&l_495}},{{&g_111,&g_111,&g_111,&g_111,&l_495},{&l_495,&l_495,(void*)0,&l_495,&g_111},{&l_495,&g_111,&l_495,&l_495,&g_111},{&l_495,&l_495,(void*)0,&g_111,(void*)0},{&g_111,&g_111,&g_111,&g_111,&g_111},{&l_495,&l_495,&l_495,(void*)0,&l_495}},{{&l_495,&g_111,&g_111,(void*)0,&g_111},{&g_111,&l_495,(void*)0,(void*)0,&l_495},{&g_111,&g_111,&l_495,&l_495,&g_111},{&l_495,&l_495,&l_495,&g_111,(void*)0},{&g_111,&g_111,&g_111,&g_111,&g_111},{&l_495,&l_495,&l_495,&l_495,&l_495}}};
                        int i, j, k;
                        l_499[0] = (safe_add_func_int8_t_s_s(((0xE4302D5DL | g_82[g_106]) , (l_490 |= p_69.f7)), (((safe_sub_func_uint32_t_u_u(((**g_352) != g_354[0]), (((g_91.f0 < (safe_mul_func_uint8_t_u_u((l_495 == (+((l_497[5] | (((g_98 , (*g_198)) >= l_497[5]) > (*g_198))) || 6UL))), p_69.f0))) , g_22) , g_91.f3))) , p_69.f5) == 0xD9L)));
                        l_501 = ((l_500 != (void*)0) >= l_497[5]);
                    }
                    l_501 |= (safe_rshift_func_int8_t_s_s(l_495, 6));
                }
                if (((safe_unary_minus_func_int16_t_s((g_22 , (l_522 &= ((((safe_lshift_func_int16_t_s_s(g_158, 14)) >= 0x50046D7AL) <= (safe_lshift_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((((*l_514) = (g_22 , l_513[3][0])) != (void*)0), (safe_mod_func_int64_t_s_s((p_69.f7 | ((((safe_div_func_int16_t_s_s((0xFDL == (((safe_mul_func_int16_t_s_s((-1L), 0UL)) >= l_499[0]) < 4L)), l_501)) , (void*)0) == (void*)0) > 0L)), 0x2CD02E7B6411244DLL)))), (-4L))) <= p_69.f0) | (-6L)), 5))) ^ p_70))))) && 252UL))
                {
                    l_501 |= l_497[5];
                    for (l_522 = (-18); (l_522 > 23); ++l_522)
                    {
                        const uint8_t l_525 = 0x74L;
                        return l_525;
                    }
                }
                else
                {
                    const uint8_t ** const *l_530 = (void*)0;
                    int32_t l_535 = 0xC145E126L;
                    uint32_t *l_540 = (void*)0;
                    uint32_t *l_541 = &g_162;
                    int32_t *l_542 = &l_522;
                    (*l_542) ^= (safe_mod_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((l_530 == (p_69.f2 , (((*l_541) = ((safe_mod_func_int16_t_s_s((l_501 = ((1UL && ((l_534 &= (g_533[3] >= p_71)) < l_535)) >= (6UL == l_535))), (safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((p_70 , p_69.f7), 0UL)), p_69.f4)))) >= p_69.f1)) , &g_197))), p_69.f4)), 8L));
                }
            }
            (**l_653) = &l_534;
            for (g_98 = 0; (g_98 <= 9); g_98 += 1)
            {
                union U2 l_684 = {1UL};
                int8_t *l_687 = (void*)0;
                int32_t *l_690 = &l_605;
                int32_t *l_691 = &l_501;
                int32_t *l_692 = &l_534;
                int32_t *l_693[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint32_t l_694[9] = {0x3F52BA17L,0x3F52BA17L,0x3F52BA17L,0x3F52BA17L,0x3F52BA17L,0x3F52BA17L,0x3F52BA17L,0x3F52BA17L,0x3F52BA17L};
                uint16_t **l_700 = &g_353;
                int8_t l_741 = 0x6FL;
                int i;
                for (p_70 = 0; (p_70 <= 0); p_70 += 1)
                {
                    uint8_t **l_689[5] = {&g_198,&g_198,&g_198,&g_198,&g_198};
                    int i, j, k;
                    if (((safe_mul_func_int8_t_s_s(0xFEL, (safe_rshift_func_uint16_t_u_u(g_82[g_319], ((((safe_rshift_func_int16_t_s_s(g_354[p_70], (((((safe_rshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u(g_354[p_70], (((((safe_add_func_int32_t_s_s(p_69.f4, (safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s(p_69.f6, (l_682[2][1][3] != (l_684 , l_685)))), 0x9146L)) <= 0x13L), 255UL)), 8)))) && p_69.f7) , (***l_653)) || (***l_653)) , p_69.f7))), 4)) || l_499[3]) | g_604[1][1][0]) , (void*)0) == l_686[0][1]))) || 0xC47196F941157BF9LL) > 0xFF151640L) >= g_354[1]))))) > 5UL))
                    {
                        (***l_653) &= p_71;
                    }
                    else
                    {
                        (**l_653) = &l_534;
                        return l_684.f0;
                    }
                    l_690 = func_74(l_687, l_688, (&g_198 != l_689[2]), l_684.f1);
                }
                l_694[3]++;
                if ((((*g_257) = (((safe_rshift_func_uint16_t_u_s(((g_352 = l_699) == (g_701 = l_700)), (g_82[g_106] >= ((safe_lshift_func_uint8_t_u_s((((safe_mul_func_int16_t_s_s((((-1L) & g_91.f3) <= (((*g_257) & (l_710[3] , ((l_711 != &g_205) != 1L))) != 3L)), 65526UL)) || p_69.f0) | 255UL), 2)) == g_158)))) , 0xC42960D6F37145CFLL) , (*g_257))) , l_713[0][0][3]))
                {
                    uint32_t l_734 = 4294967295UL;
                    int16_t *l_735 = &g_604[1][1][0];
                    if (p_71)
                        break;
                    p_69.f1 |= ((((safe_sub_func_uint64_t_u_u((safe_div_func_uint32_t_u_u(((*g_205) , 0xE8F0B9F7L), (safe_add_func_int64_t_s_s(((&g_352 != (((safe_mod_func_uint32_t_u_u(((&g_275 != ((*l_711) = &g_106)) ^ (safe_lshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((*l_692) , ((*l_735) = ((safe_div_func_uint64_t_u_u(g_104.f0, p_70)) > (safe_mul_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((safe_add_func_int32_t_s_s(l_734, l_609.f7)), p_69.f6)) <= p_69.f4), g_82[8]))))), 0x7FB6L)) > p_69.f5), g_351))), 4294967295UL)) != (*g_257)) , (void*)0)) >= g_533[3]), 0x74C387488A5B82F4LL)))), (*g_205))) < p_69.f6) && (***l_653)) ^ p_71);
                    ++l_736;
                }
                else
                {
                    const int64_t l_742[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int i;
                    (**g_428) = (safe_add_func_uint8_t_u_u((l_609.f3 == ((0xCFE688B3L ^ (***l_653)) , l_741)), 255UL));
                    return l_742[1];
                }
                return p_69.f2;
            }
            return p_69.f5;
        }
    }
    return (***l_653);
}







static struct S0 func_72(int32_t * p_73)
{
    int32_t l_131[6] = {0L,0L,0L,0L,0L,0L};
    int32_t *l_152 = &g_111;
    int8_t * const l_166 = &g_82[2];
    uint8_t *l_196 = &g_158;
    uint8_t **l_195 = &l_196;
    int32_t l_223[4] = {9L,9L,9L,9L};
    const int8_t * const l_260 = &g_82[8];
    const int8_t * const *l_259[10];
    struct S0 l_282 = {-14868,-18884,-14,-893,-415,11759,-3,19};
    uint8_t l_283 = 0x62L;
    int64_t l_284 = (-1L);
    uint64_t *l_320 = &g_319;
    uint32_t l_337 = 0xB5429116L;
    uint64_t l_382 = 18446744073709551614UL;
    int32_t l_404[8] = {0x7B7729D4L,0x7B7729D4L,0x7B7729D4L,0x7B7729D4L,0x7B7729D4L,0x7B7729D4L,0x7B7729D4L,0x7B7729D4L};
    union U2 l_472 = {18446744073709551615UL};
    uint8_t *l_485[9][8] = {{(void*)0,&l_283,&g_210,(void*)0,&g_210,&l_283,(void*)0,&l_283},{&g_210,&l_283,(void*)0,&l_283,&g_210,&g_210,&l_283,(void*)0},{&g_210,&g_210,&l_283,&g_210,&g_210,(void*)0,&l_283,(void*)0},{&g_210,(void*)0,&g_210,(void*)0,&g_210,(void*)0,&g_210,(void*)0},{(void*)0,&g_210,&l_283,&g_210,&g_210,&l_283,&g_210,(void*)0},{&l_283,(void*)0,&l_283,&l_283,&g_210,&g_210,&g_210,&l_283},{&g_210,&l_283,&g_210,(void*)0,&l_283,&g_210,&g_210,&g_210},{&g_210,&l_283,&g_210,&g_210,&l_283,&g_210,&g_210,(void*)0},{&g_210,&g_210,&l_283,&l_283,&g_210,&l_283,&l_283,&g_210}};
    int32_t l_486 = 0x9D23C243L;
    int i, j;
    for (i = 0; i < 10; i++)
        l_259[i] = &l_260;
    for (g_104.f0 = 0; (g_104.f0 > 54); ++g_104.f0)
    {
        uint32_t *l_122 = &g_98;
        uint32_t *l_136 = &g_22.f0;
        int32_t l_137[3][6][9] = {{{0xC266863EL,(-1L),(-3L),(-1L),0xA02802FDL,0x7949DEFBL,0x2A09A2E5L,(-1L),0x4752A806L},{0x15A3DCCCL,(-3L),0xC266863EL,(-1L),0x59DC1C7BL,0x90CC9F78L,0x1A0FB345L,0x90CC9F78L,0x59DC1C7BL},{(-1L),0x65EE8129L,0x65EE8129L,(-1L),0x1A0FB345L,0x4752A806L,0x61CED510L,0xB50370D8L,0x15A3DCCCL},{4L,0xB8435965L,0x4752A806L,0x0674D57DL,0x7949DEFBL,0xDDE48D45L,0xCA465FDEL,0xDA01CD82L,0x3E15E87FL},{(-1L),0xDA01CD82L,(-3L),(-3L),0x1A0FB345L,0xB50370D8L,1L,0x1A7DDF25L,0x61CED510L},{0x9E4102AFL,0xBC6B2ED0L,0x20E0461AL,0x2A09A2E5L,0x59DC1C7BL,4L,(-3L),0xCA465FDEL,7L}},{{(-1L),0L,0xBC6B2ED0L,1L,0xA02802FDL,4L,0xDA01CD82L,0x9E4102AFL,0xDA01CD82L},{0xB50370D8L,0x2A09A2E5L,(-1L),(-1L),0x2A09A2E5L,0xB50370D8L,0x7949DEFBL,0x20E0461AL,0x90CC9F78L},{0x1A0FB345L,(-3L),(-1L),0x380BAD39L,0xD520E291L,0xDDE48D45L,5L,0x7949DEFBL,1L},{(-1L),0xB50370D8L,0x6BB0F612L,0xBC6B2ED0L,0x1A7DDF25L,0x4752A806L,0x7949DEFBL,(-1L),4L},{7L,0x7949DEFBL,0x3E15E87FL,(-1L),0x0674D57DL,0x90CC9F78L,0xDA01CD82L,0L,(-1L)},{0x20E0461AL,1L,(-1L),0x8128C20BL,4L,0x7949DEFBL,(-3L),0L,0x380BAD39L}},{{(-1L),1L,0x8128C20BL,0xB8435965L,0xB8435965L,0x8128C20BL,1L,(-1L),0x0674D57DL},{0x61CED510L,0x0674D57DL,0L,(-1L),0x20E0461AL,1L,0xCA465FDEL,0x7949DEFBL,0x1A0FB345L},{0x4752A806L,(-1L),0xD520E291L,0x90CC9F78L,0xE7BC92A3L,(-4L),0x61CED510L,0x20E0461AL,0x0674D57DL},{0xD520E291L,0x4752A806L,(-1L),7L,0xDA01CD82L,0xC266863EL,0x1A0FB345L,0x9E4102AFL,0x380BAD39L},{0xDDE48D45L,0xF9D8AEACL,5L,0x1A0FB345L,0x15A3DCCCL,(-2L),0x2A09A2E5L,0xCA465FDEL,(-1L)},{0xDDE48D45L,4L,0x1A7DDF25L,(-2L),(-3L),(-3L),(-2L),0x1A7DDF25L,4L}}};
        int32_t **l_153 = (void*)0;
        uint8_t *l_157 = &g_158;
        int64_t *l_159 = &g_106;
        uint32_t *l_160 = (void*)0;
        uint32_t *l_161 = &g_162;
        uint16_t l_244 = 0UL;
        int8_t **l_258 = &g_257;
        uint16_t l_273 = 65531UL;
        union U1 l_278 = {0xFB237102L};
        uint16_t **l_356[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_356[i] = &g_353;
        (*p_73) |= ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((l_122 == (g_91.f1 , &g_98)), (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((g_91.f2 ^ ((safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(g_91.f0, (l_131[3] , (safe_add_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(((l_131[4] != (4294967291UL && (l_136 == &g_98))) > l_137[1][3][8]), l_137[1][3][8])), l_131[3]))))), 6)) ^ g_104.f0)) >= g_22.f0), 3)) ^ l_137[1][3][8]), l_131[5])))) == 0UL), 6)) < 0x8A92L);
        for (g_98 = 24; (g_98 <= 13); --g_98)
        {
            int32_t *l_141 = &l_137[1][3][8];
            int32_t **l_140 = &l_141;
            (*l_140) = p_73;
        }
    }
    (*p_73) = 0xF40F00F4L;
    for (g_158 = 0; (g_158 >= 28); g_158 = safe_add_func_uint8_t_u_u(g_158, 1))
    {
        struct S0 l_456 = {22532,10549,15,-829,-563,32029,-3,0};
        uint8_t **l_459 = (void*)0;
        uint8_t ***l_460 = (void*)0;
        uint8_t ***l_461[2][9] = {{&l_195,&l_195,&l_459,&l_195,&l_195,&l_459,&l_195,&l_195,&l_459},{&l_195,&l_195,&l_195,&l_195,&l_195,&l_195,&l_195,&l_195,&l_195}};
        int i, j;
        l_282.f1 = ((*p_73) = ((&p_73 == &l_152) == ((*l_152) & (safe_lshift_func_int8_t_s_s((l_456 , (safe_mul_func_uint16_t_u_u(0UL, ((g_197 = (l_456.f2 , l_459)) != (g_91 , (l_195 = &l_196)))))), (**g_256))))));
    }
    l_152 = func_74(l_196, ((((*g_257) || (safe_lshift_func_int8_t_s_u((*g_257), (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s(g_91.f5, 1)) , (safe_rshift_func_int16_t_s_s(((l_472 , (safe_lshift_func_int16_t_s_s((0UL && (*l_152)), (safe_div_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_s((g_210 = ((*l_196) = (safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u(((void*)0 == &l_196), (*p_73))) > (**g_256)), 3)), (*l_152))))), (*l_152))) | 0xFEC6L) , l_486) > (*l_152)), (*l_152)))))) | (*l_152)), 15))), 2)), (*g_257)))))) , 0UL) < (*g_205)), g_275, (*p_73));
    return l_282;
}







static int32_t * func_74(int8_t * p_75, const int32_t p_76, int32_t p_77, int32_t p_78)
{
    int32_t *l_115 = &g_111;
    int32_t **l_114 = &l_115;
    for (g_104.f0 = 0; (g_104.f0 > 60); g_104.f0 = safe_add_func_uint8_t_u_u(g_104.f0, 2))
    {
        return &g_111;
    }
    (*l_114) = &g_111;
    return &g_111;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_82[i], "g_82[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_91.f1, "g_91.f1", print_hash_value);
    transparent_crc(g_91.f2, "g_91.f2", print_hash_value);
    transparent_crc(g_91.f3, "g_91.f3", print_hash_value);
    transparent_crc(g_91.f4, "g_91.f4", print_hash_value);
    transparent_crc(g_91.f5, "g_91.f5", print_hash_value);
    transparent_crc(g_91.f6, "g_91.f6", print_hash_value);
    transparent_crc(g_91.f7, "g_91.f7", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_104.f1, "g_104.f1", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_354[i], "g_354[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_415, "g_415", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_533[i], "g_533[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_601, "g_601", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_604[i][j][k], "g_604[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_799, "g_799", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_826[i][j][k], "g_826[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1016[i], "g_1016[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1115, "g_1115", print_hash_value);
    transparent_crc(g_1213, "g_1213", print_hash_value);
    transparent_crc(g_1227, "g_1227", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1239[i][j].f0, "g_1239[i][j].f0", print_hash_value);
            transparent_crc(g_1239[i][j].f1, "g_1239[i][j].f1", print_hash_value);
            transparent_crc(g_1239[i][j].f2, "g_1239[i][j].f2", print_hash_value);
            transparent_crc(g_1239[i][j].f3, "g_1239[i][j].f3", print_hash_value);
            transparent_crc(g_1239[i][j].f4, "g_1239[i][j].f4", print_hash_value);
            transparent_crc(g_1239[i][j].f5, "g_1239[i][j].f5", print_hash_value);
            transparent_crc(g_1239[i][j].f6, "g_1239[i][j].f6", print_hash_value);
            transparent_crc(g_1239[i][j].f7, "g_1239[i][j].f7", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
