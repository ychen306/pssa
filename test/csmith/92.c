// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 31B4F986
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



static int32_t g_4 = 0x2971C1ECL;
static uint16_t g_35[1] = {0x6B5BL};
static int32_t g_54 = 0xA1B14898L;
static int32_t g_57 = (-10L);
static int32_t *g_67 = (void*)0;
static uint32_t g_78 = 4294967295UL;
static uint32_t g_149 = 0xC902CEC1L;
static int64_t g_154[1] = {0x66AF959E53F41FD3LL};
static int64_t g_173[7][2][9] = {{{(-1L),0x2D81C2D92C0DBAEELL,(-1L),0x2D81C2D92C0DBAEELL,(-1L),0L,0x11A83D060D73480DLL,0xFA46B62C38B1D141LL,0xFA46B62C38B1D141LL},{0x6A24AF2DFD280BCCLL,1L,(-7L),0x5DB3B990F7100B6ELL,(-7L),1L,0x6A24AF2DFD280BCCLL,0x472F8A427D2546FFLL,0xF011E324BC148092LL}},{{0xE9CF0C6C1D744135LL,(-1L),0x2D81C2D92C0DBAEELL,0L,0x1D9C254B315FCE81LL,0L,0x2D81C2D92C0DBAEELL,(-1L),0xE9CF0C6C1D744135LL},{(-10L),0x66546BCCE8995D89LL,2L,0x472F8A427D2546FFLL,3L,0x9D8590BC55D5BA14LL,3L,0x472F8A427D2546FFLL,2L}},{{0x11A83D060D73480DLL,0x11A83D060D73480DLL,(-4L),(-1L),(-1L),0xFA46B62C38B1D141LL,0xE9CF0C6C1D744135LL,0xFA46B62C38B1D141LL,(-1L)},{3L,0x5DB3B990F7100B6ELL,0xA5B7F6ABC8BB2A2BLL,0x1E77F117623E6EA0LL,5L,0x9D8590BC55D5BA14LL,0x6A24AF2DFD280BCCLL,0x00A2DC1931FA8CC7LL,0x6A24AF2DFD280BCCLL}},{{(-1L),(-4L),0x11A83D060D73480DLL,0x11A83D060D73480DLL,(-4L),(-1L),(-1L),0xFA46B62C38B1D141LL,0xE9CF0C6C1D744135LL},{9L,0x9D8590BC55D5BA14LL,0L,0x66546BCCE8995D89LL,5L,0x00A2DC1931FA8CC7LL,(-7L),0x0FA7CF2F2AFFB97BLL,(-10L)}},{{0xE9CF0C6C1D744135LL,0x11A83D060D73480DLL,0L,(-1L),(-1L),(-1L),(-1L),0L,0x11A83D060D73480DLL},{5L,0x0FA7CF2F2AFFB97BLL,2L,1L,0xA5B7F6ABC8BB2A2BLL,0L,0x6A24AF2DFD280BCCLL,0x5DB3B990F7100B6ELL,(-10L)}},{{0L,0x1D9C254B315FCE81LL,0L,0x2D81C2D92C0DBAEELL,(-1L),0xE9CF0C6C1D744135LL,(-1L),(-1L),0xE9CF0C6C1D744135LL},{2L,0x0FA7CF2F2AFFB97BLL,5L,0x0FA7CF2F2AFFB97BLL,2L,1L,0xA5B7F6ABC8BB2A2BLL,0L,0x6A24AF2DFD280BCCLL}},{{0L,0x11A83D060D73480DLL,0xE9CF0C6C1D744135LL,0x2D81C2D92C0DBAEELL,0xE9CF0C6C1D744135LL,0x11A83D060D73480DLL,0L,(-1L),(-1L)},{0L,0x9D8590BC55D5BA14LL,9L,1L,0xF011E324BC148092LL,1L,9L,0x9D8590BC55D5BA14LL,0L}}};
static int16_t *g_195 = (void*)0;
static uint8_t g_221 = 0xA3L;
static int32_t g_222[3] = {0L,0L,0L};
static uint8_t g_233 = 0x1CL;
static uint8_t *g_232 = &g_233;
static int32_t g_269 = 0L;
static uint64_t g_288 = 0xA4B3009E131B1487LL;
static uint8_t g_289 = 0x19L;
static int8_t g_296 = (-1L);
static int8_t g_298 = 1L;
static int32_t g_299 = (-5L);
static int16_t g_300 = (-2L);
static int8_t g_301 = 0xE5L;
static int32_t g_303[3][5] = {{0xB4755BD5L,(-8L),0xB4755BD5L,(-8L),0xB4755BD5L},{(-6L),(-6L),(-6L),(-6L),(-6L)},{0xB4755BD5L,(-8L),0xB4755BD5L,(-8L),0xB4755BD5L}};
static uint8_t g_305 = 9UL;
static uint64_t g_357[9][3] = {{0x299ABA915A7FF40ALL,0xB7896BA196C32E4BLL,0UL},{0x299ABA915A7FF40ALL,0x299ABA915A7FF40ALL,0xB7896BA196C32E4BLL},{18446744073709551607UL,0xB7896BA196C32E4BLL,0xB7896BA196C32E4BLL},{0xB7896BA196C32E4BLL,0x024ED4AC31B227EBLL,0UL},{18446744073709551607UL,0x024ED4AC31B227EBLL,18446744073709551607UL},{0x299ABA915A7FF40ALL,0xB7896BA196C32E4BLL,0UL},{0x299ABA915A7FF40ALL,0x299ABA915A7FF40ALL,0xB7896BA196C32E4BLL},{18446744073709551607UL,0xB7896BA196C32E4BLL,0xB7896BA196C32E4BLL},{0xB7896BA196C32E4BLL,0x024ED4AC31B227EBLL,0UL}};
static uint32_t g_392 = 0x2A70F420L;
static int32_t **g_434 = &g_67;
static int32_t ***g_433 = &g_434;
static int32_t ****g_432[5][2][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
static uint64_t g_506 = 18446744073709551606UL;
static int64_t *g_522 = (void*)0;
static int64_t ** const g_521 = &g_522;
static uint32_t g_658 = 4294967295UL;
static int32_t *****g_707 = &g_432[1][0][2];
static int16_t **g_746 = &g_195;
static int16_t ***g_745 = &g_746;
static uint16_t g_767 = 0xD22EL;
static int32_t g_799 = 0L;
static int64_t g_915 = 0L;
static uint32_t g_920 = 0x00F4CCD5L;
static int32_t g_1001 = 0L;
static uint16_t *g_1013 = &g_35[0];
static uint32_t **g_1061 = (void*)0;
static int64_t ***g_1179 = (void*)0;
static uint32_t g_1183[5] = {18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL};
static int32_t g_1204[4][4] = {{0xA1149624L,0xA1149624L,0xA1149624L,0xA1149624L},{0xA1149624L,0xA1149624L,0xA1149624L,0xA1149624L},{0xA1149624L,0xA1149624L,0xA1149624L,0xA1149624L},{0xA1149624L,0xA1149624L,0xA1149624L,0xA1149624L}};
static int8_t *g_1294[2][5] = {{&g_301,&g_301,&g_301,&g_301,&g_301},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static int8_t **g_1293 = &g_1294[0][0];
static uint32_t g_1317 = 18446744073709551610UL;
static int16_t **g_1343 = &g_195;
static int16_t *** const g_1342 = &g_1343;
static int16_t *** const *g_1341[7][3] = {{&g_1342,&g_1342,&g_1342},{&g_1342,&g_1342,&g_1342},{&g_1342,&g_1342,&g_1342},{&g_1342,&g_1342,&g_1342},{&g_1342,&g_1342,&g_1342},{&g_1342,&g_1342,&g_1342},{&g_1342,&g_1342,&g_1342}};
static const int16_t *g_1385 = (void*)0;
static const int16_t **g_1384 = &g_1385;
static const int16_t ***g_1383 = &g_1384;
static int8_t ***g_1391[6] = {&g_1293,&g_1293,&g_1293,&g_1293,&g_1293,&g_1293};
static uint16_t **g_1396 = &g_1013;
static uint16_t ***g_1395 = &g_1396;
static uint16_t ****g_1394 = &g_1395;
static uint32_t g_1466 = 0x7B8D8DC7L;
static int16_t g_1552 = 1L;
static uint32_t g_1626[2] = {0x04811CCAL,0x04811CCAL};
static uint64_t g_1659[9] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
static int16_t g_1674 = 0x4F7AL;
static uint32_t g_1678 = 0xAC1E7BF4L;
static uint32_t g_1713 = 8UL;
static int64_t g_1723 = 0x5C83FECB1BFA49FCLL;
static const uint32_t g_1868 = 3UL;
static int8_t g_1893 = 0xBBL;
static int32_t *g_1977 = &g_299;
static int32_t **g_1976 = &g_1977;
static uint16_t g_2036 = 0x6DE5L;
static const int8_t *g_2074 = (void*)0;
static const int8_t **g_2073 = &g_2074;
static const int8_t ***g_2072[10] = {&g_2073,&g_2073,&g_2073,&g_2073,&g_2073,&g_2073,&g_2073,&g_2073,&g_2073,&g_2073};
static const int8_t ****g_2071[2] = {&g_2072[1],&g_2072[1]};
static const int32_t g_2086 = 0x90766DC9L;
static int8_t g_2183 = 0x5DL;
static uint32_t **** const g_2245[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t g_2263 = (-1L);
static uint32_t g_2299 = 0UL;
static int32_t * const g_2319 = &g_2263;
static int16_t *** const **g_2414 = &g_1341[3][0];
static uint32_t g_2419 = 9UL;
static uint32_t g_2455[2] = {0x78202B69L,0x78202B69L};
static uint32_t *g_2520 = &g_2455[1];
static uint32_t **g_2519 = &g_2520;
static int64_t g_2593 = 3L;
static int32_t g_2729 = 0xCA0E8D6CL;
static int64_t g_2921 = 1L;
static int8_t g_2962 = 1L;
static uint32_t ****g_2990 = (void*)0;
static int32_t g_3053 = 0xD5D782D1L;
static uint32_t g_3102 = 18446744073709551614UL;
static int64_t g_3162 = 0L;
static int32_t g_3226[8] = {9L,9L,9L,9L,9L,9L,9L,9L};
static uint64_t *g_3229 = &g_506;
static uint64_t **g_3228[7][8] = {{&g_3229,&g_3229,&g_3229,(void*)0,&g_3229,&g_3229,&g_3229,(void*)0},{&g_3229,&g_3229,&g_3229,&g_3229,&g_3229,&g_3229,&g_3229,&g_3229},{&g_3229,&g_3229,&g_3229,&g_3229,&g_3229,&g_3229,&g_3229,&g_3229},{&g_3229,&g_3229,&g_3229,&g_3229,&g_3229,&g_3229,&g_3229,&g_3229},{&g_3229,(void*)0,&g_3229,&g_3229,&g_3229,(void*)0,&g_3229,&g_3229},{&g_3229,&g_3229,&g_3229,&g_3229,(void*)0,(void*)0,&g_3229,(void*)0},{(void*)0,(void*)0,&g_3229,(void*)0,(void*)0,&g_3229,&g_3229,&g_3229}};
static int32_t *****g_3273 = &g_432[3][0][0];
static uint32_t g_3325 = 0x60A4EEC4L;
static int32_t g_3406 = 0xDF7BFEA4L;
static int64_t ****g_3409[6][10][1] = {{{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179}},{{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179}},{{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179}},{{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179}},{{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179}},{{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{&g_1179},{(void*)0},{&g_1179},{(void*)0}}};
static int32_t g_3417 = 1L;
static int8_t * const g_3428 = &g_2962;
static int16_t g_3454 = (-1L);
static int16_t g_3506[3][9][7] = {{{8L,8L,0x3ABFL,0L,0x8FC3L,0xD9E3L,(-1L)},{0L,0xF474L,0L,8L,(-1L),5L,5L},{0x8FC3L,0xDD86L,0L,0xDD86L,0x8FC3L,8L,0L},{(-1L),0x3ABFL,0L,0x3C58L,0xDD86L,0L,0L},{0x3C58L,0x8B4BL,0L,0L,0L,0L,0x8B4BL},{(-1L),0x3C58L,0x3ABFL,0L,0xF474L,0L,8L},{0x8FC3L,0xD9E3L,(-1L),0L,2L,0L,2L},{0L,2L,2L,0L,5L,8L,0L},{8L,2L,0x8FC3L,0L,(-1L),5L,0xDD86L}},{{0L,0xD9E3L,8L,0x3C58L,8L,0xD9E3L,0L},{0xF474L,0x3C58L,0xD9E3L,0xDD86L,8L,0x8B4BL,2L},{0L,0x8B4BL,0L,8L,(-1L),(-1L),8L},{0xD9E3L,0x3ABFL,0xD9E3L,0L,5L,0L,0x8B4BL},{0xD9E3L,0xDD86L,8L,0x8B4BL,2L,0x3ABFL,0L},{0L,0xF474L,0x8FC3L,0x8FC3L,0xF474L,0L,0L},{0xF474L,8L,2L,0x8FC3L,0L,(-1L),5L},{0L,0L,(-1L),0x8B4BL,0xDD86L,0x8B4BL,(-1L)},{8L,8L,0x3ABFL,0L,0x8FC3L,0xD9E3L,(-1L)}},{{0L,0xF474L,0L,8L,(-1L),5L,5L},{0x8FC3L,0xDD86L,0L,0xDD86L,0x8FC3L,8L,0L},{(-1L),0x3ABFL,0L,0x3C58L,0xDD86L,0L,0L},{0x3C58L,0x8B4BL,0L,0L,0L,0L,0x8B4BL},{(-1L),0x3C58L,0x3ABFL,0L,0xF474L,0L,8L},{0x8FC3L,0xD9E3L,(-1L),0L,2L,0L,2L},{0L,2L,2L,0L,5L,0L,0x3C58L},{0L,(-1L),0xD9E3L,0x8FC3L,0L,0x3ABFL,8L},{0x3C58L,5L,0L,0L,0L,5L,0x3C58L}}};



static uint32_t func_1(void);
static int32_t func_9(const int32_t * p_10, int32_t * p_11, int32_t p_12, int32_t * const p_13, int32_t * p_14);
static int32_t * func_15(int32_t * p_16, const int16_t p_17, int32_t p_18);
static int32_t * func_19(int32_t * p_20, int32_t * const p_21, int32_t * p_22, int64_t p_23);
static int32_t * func_24(int32_t * p_25);
static int16_t func_29(int32_t p_30, int32_t * p_31);
static int32_t func_32(const uint8_t p_33, uint64_t p_34);
static int32_t * func_36(int32_t * p_37, int32_t p_38, int32_t p_39);
static int32_t * func_40(int32_t * p_41, int32_t p_42);
static int32_t * func_43(int32_t * const p_44, int32_t p_45);
# 144 "<stdin>"
static uint32_t func_1(void)
{
    uint16_t l_2 = 2UL;
    int32_t *l_3 = &g_4;
    uint32_t l_2634 = 4294967289UL;
    int32_t l_2699 = 0xD556F374L;
    int64_t l_2700 = (-1L);
    int32_t l_2716 = (-5L);
    int32_t l_2718 = 9L;
    int32_t l_2722 = 0xBE9DBF20L;
    int32_t l_2725 = 0xF75EAE98L;
    int32_t l_2726 = 0x54C03015L;
    int32_t l_2728[5][3][3] = {{{0x4D080039L,0x003F03D1L,0x7A51790DL},{0x72A53C6AL,1L,0xA50666E2L},{(-4L),5L,(-4L)}},{{1L,1L,0L},{(-4L),0x4D080039L,5L},{0x72A53C6AL,0L,0x4C09EF50L}},{{0x4D080039L,7L,7L},{0x52EC9C1FL,0x72A53C6AL,0x4C09EF50L},{0x7A51790DL,0x46284EC5L,5L}},{{0xA50666E2L,1L,0L},{(-4L),0xC34DF248L,(-4L)},{0L,1L,0xA50666E2L}},{{5L,0x46284EC5L,0x7A51790DL},{0x4C09EF50L,0x72A53C6AL,0x52EC9C1FL},{7L,7L,0x4D080039L}}};
    uint64_t l_2730 = 18446744073709551615UL;
    int8_t l_2754 = 0xE1L;
    const int16_t ****l_2784 = (void*)0;
    uint8_t l_2867 = 0x95L;
    int32_t l_2901 = 0L;
    uint8_t l_2904 = 1UL;
    uint32_t ***l_2937 = &g_2519;
    uint8_t l_2965 = 0UL;
    int32_t *l_3020 = &l_2726;
    uint32_t l_3024 = 18446744073709551608UL;
    uint16_t l_3050 = 0x75C2L;
    int16_t **l_3107 = &g_195;
    int64_t *l_3108 = &g_154[0];
    int64_t *l_3109[8] = {&g_2593,&g_2593,&g_173[2][0][6],&g_2593,&g_2593,&g_173[2][0][6],&g_2593,&g_2593};
    uint16_t l_3114[1];
    int16_t *l_3115[2];
    int32_t l_3116 = 3L;
    int32_t l_3127[2];
    uint32_t ***l_3133 = &g_1061;
    int16_t l_3150 = 0x29F2L;
    uint32_t l_3180 = 0xAFA68A00L;
    uint32_t * const *l_3191 = &g_2520;
    uint16_t ** const *l_3294 = &g_1396;
    uint16_t ** const **l_3293[2][2][3] = {{{&l_3294,&l_3294,&l_3294},{&l_3294,&l_3294,&l_3294}},{{&l_3294,&l_3294,&l_3294},{&l_3294,&l_3294,&l_3294}}};
    int64_t l_3338[4];
    int64_t l_3343 = (-9L);
    int8_t l_3387 = (-8L);
    int8_t * const *l_3396 = (void*)0;
    int64_t ***l_3424 = (void*)0;
    uint32_t l_3437[2][1];
    int32_t l_3438 = 0x4DD902D6L;
    int64_t l_3474 = (-10L);
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_3114[i] = 0x069BL;
    for (i = 0; i < 2; i++)
        l_3115[i] = &g_1552;
    for (i = 0; i < 2; i++)
        l_3127[i] = (-9L);
    for (i = 0; i < 4; i++)
        l_3338[i] = (-10L);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_3437[i][j] = 3UL;
    }
lbl_2641:
    (*l_3) ^= l_2;
    if (((safe_lshift_func_uint8_t_u_u(g_4, 3)) | g_4))
    {
        int16_t l_1718 = 0xE299L;
        int16_t ****l_1721 = (void*)0;
        const int32_t *l_2085[9] = {&g_2086,&g_2086,&g_2086,&g_2086,&g_2086,&g_2086,&g_2086,&g_2086,&g_2086};
        uint16_t l_2627 = 0x0D6EL;
        int32_t *****l_2628 = &g_432[0][1][5];
        int32_t l_2637 = 0x92C8465EL;
        int32_t l_2640 = 8L;
        uint64_t *l_2654 = (void*)0;
        const int16_t l_2672 = 3L;
        int i;
        for (g_4 = 0; (g_4 != 2); g_4++)
        {
            int32_t * const l_1711 = &g_4;
            int32_t *l_1712 = (void*)0;
            int64_t *l_1722[2][5] = {{&g_1723,&g_1723,&g_1723,&g_1723,&g_1723},{&g_1723,&g_1723,&g_1723,&g_1723,&g_1723}};
            const int32_t **l_2082 = (void*)0;
            const int32_t *l_2084 = (void*)0;
            const int32_t **l_2083[7];
            int64_t l_2622 = 0xBA9425BB4C828D8CLL;
            int32_t l_2639 = 0xB75DD5B5L;
            int i, j;
            for (i = 0; i < 7; i++)
                l_2083[i] = &l_2084;
        }
        for (g_1723 = 1; (g_1723 != (-1)); --g_1723)
        {
            uint64_t *l_2653 = &g_357[4][2];
            int32_t l_2668 = 0xBB62DFFBL;
            for (g_305 = (-11); (g_305 != 33); ++g_305)
            {
                uint64_t **l_2655 = (void*)0;
                uint64_t **l_2656 = &l_2654;
                int32_t l_2659 = (-6L);
                int8_t ** const l_2671 = &g_1294[0][0];
                (*g_2319) &= ((((safe_mod_func_int64_t_s_s((((safe_mod_func_uint64_t_u_u(((*l_2653) = ((!(1UL != (((safe_mod_func_uint16_t_u_u(((l_2653 != ((*l_2656) = l_2654)) < 0UL), (safe_sub_func_int64_t_s_s(l_2659, ((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((*g_232), 5)) && (l_2668 >= (0x1172DAD6L >= (safe_lshift_func_int16_t_s_s((((((void*)0 != l_2671) ^ (**g_1396)) | l_2668) >= l_2659), 15))))), (*g_232))), (***g_1395))) != 0xCD80AD7281909621LL))))) ^ l_2668) && 0xA1FEF0CCL))) ^ (*g_1013))), l_2672)) , (void*)0) != &g_1976), l_2668)) | l_2659) , (**g_1396)) , 0L);
            }
            for (g_1552 = 0; (g_1552 == (-16)); g_1552 = safe_sub_func_int64_t_s_s(g_1552, 9))
            {
                int64_t **l_2698 = &g_522;
                int64_t *** const l_2697 = &l_2698;
                for (l_2627 = 0; (l_2627 < 17); ++l_2627)
                {
                    (*l_3) &= l_2668;
                }
                for (g_289 = 0; (g_289 == 33); ++g_289)
                {
                    uint8_t l_2692 = 1UL;
                    for (g_4 = 0; (g_4 != (-6)); g_4 = safe_sub_func_uint64_t_u_u(g_4, 3))
                    {
                        uint32_t l_2683 = 0x07AC0DA6L;
                        int32_t *l_2701 = &l_2699;
                        l_2668 = ((*l_2701) = (((((safe_rshift_func_uint16_t_u_u(((((void*)0 != l_2654) , ((*l_3) ^ ((((*g_2319) = l_2683) > (safe_mul_func_int16_t_s_s((l_2700 = ((safe_div_func_int16_t_s_s((0UL == (safe_div_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(l_2692, l_2683)) != (safe_rshift_func_uint16_t_u_s(((((l_2668 || ((((((((safe_sub_func_uint16_t_u_u(((l_2697 == &g_521) && g_2593), 0xA4CCL)) & 0x07AA68DA5789E8A2LL) != l_2699) ^ g_1626[0]) & 255UL) , 0xF4FCL) == l_2668) < 0xE2EEE1C8L)) & 0x883698E118DF4F66LL) < l_2668) <= (*l_3)), 0))), 1UL))), (*l_3))) && l_2668)), (**g_1396)))) | l_2692))) == 0xB936L), 13)) , l_2668) > l_2683) ^ 1L) && (*l_3)));
                        (*g_434) = &l_2668;
                        (**g_433) = (void*)0;
                    }
                    if (l_2627)
                        goto lbl_2641;
                    (*g_434) = &l_2699;
                }
            }
        }
    }
    else
    {
lbl_2760:
        (*g_2319) = (*l_3);
    }
    for (g_1466 = 0; (g_1466 <= 5); g_1466 += 1)
    {
        int8_t ** const l_2704 = &g_1294[0][4];
        const int32_t l_2705 = 0x8C1493CAL;
        int32_t l_2715 = 1L;
        int32_t l_2717 = 0xEB9A2F08L;
        int32_t l_2719 = 0xE14CC09BL;
        int32_t l_2720 = 0xB9BCCC83L;
        int32_t l_2721 = (-7L);
        int32_t l_2723 = (-4L);
        int32_t l_2724[7];
        int32_t l_2727 = (-10L);
        int32_t l_2744 = 0x9DDFBE49L;
        uint32_t l_2748 = 4294967288UL;
        int16_t **l_2812 = &g_195;
        const uint8_t l_2818 = 0x81L;
        uint64_t *l_2834 = &l_2730;
        uint16_t *l_2859 = &g_2036;
        uint16_t l_2864 = 0xD354L;
        int32_t **l_2869[3][8];
        int32_t **l_2870 = &l_3;
        uint32_t *l_2886 = &g_1183[4];
        uint32_t **l_2885 = &l_2886;
        int32_t l_2919 = 1L;
        uint8_t l_2942 = 0UL;
        uint32_t l_2974 = 0x3BA4B4F5L;
        int32_t ****l_2992 = (void*)0;
        int64_t l_2999 = (-4L);
        uint32_t l_3010 = 1UL;
        uint64_t l_3044 = 0x3E2B48A80922EB35LL;
        int64_t l_3049 = 0x389651049066CDB6LL;
        uint16_t **l_3065 = &l_2859;
        uint64_t l_3089 = 0x9FC99F3BAE18DAA9LL;
        int16_t l_3095 = 0x66DDL;
        int i, j;
        for (i = 0; i < 7; i++)
            l_2724[i] = 0x60E761F9L;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 8; j++)
                l_2869[i][j] = &l_3;
        }
        if ((safe_rshift_func_uint8_t_u_u((l_2704 != (void*)0), (((&g_2519 != &g_2519) <= 0x00CFL) , (((0xDF7DL && l_2705) >= ((safe_sub_func_uint64_t_u_u(((((***g_1395) = (safe_div_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((((*g_232) & ((safe_mul_func_uint16_t_u_u((*l_3), (****g_1394))) > (*l_3))) < l_2705), 0x8BL)) ^ (*l_3)), (*l_3)))) >= 65532UL) , g_1183[4]), (*l_3))) , g_2263)) , 1UL)))))
        {
            int32_t *l_2714[2];
            int i;
            for (i = 0; i < 2; i++)
                l_2714[i] = &g_1204[3][1];
            ++l_2730;
        }
        else
        {
            const int32_t l_2734 = (-1L);
            int32_t l_2739 = 4L;
            int32_t l_2743[5][8] = {{0x26947600L,0x5285A3A2L,0L,(-3L),(-3L),0L,0x5285A3A2L,0x26947600L},{0x1A2EBA2DL,(-3L),4L,0x72378498L,0x4AE98D00L,0x1A2EBA2DL,0x72378498L,0x0773C793L},{0x4AE98D00L,0x1A2EBA2DL,0x72378498L,0x0773C793L,0x72378498L,0x1A2EBA2DL,0x4AE98D00L,0x72378498L},{0x26947600L,(-3L),0x28FD4CB0L,0x26947600L,0x5285A3A2L,0L,(-3L),(-3L)},{0x72378498L,0x5285A3A2L,4L,4L,0x5285A3A2L,0x72378498L,0x75F7C2E0L,0x0773C793L}};
            uint16_t l_2745[4][2] = {{65535UL,65535UL},{65535UL,65535UL},{65535UL,65535UL},{65535UL,65535UL}};
            const uint64_t l_2795 = 1UL;
            int32_t l_2816 = (-1L);
            int16_t l_2817 = 0x4561L;
            int16_t l_2841 = 0x0D62L;
            int16_t * const *l_2863 = &g_195;
            int16_t * const **l_2862 = &l_2863;
            uint64_t l_2865 = 18446744073709551613UL;
            int i, j;
            for (l_2716 = 0; (l_2716 <= 5); l_2716 += 1)
            {
                int32_t *l_2736 = (void*)0;
                int32_t *l_2737 = (void*)0;
                int32_t *l_2738 = &g_1204[3][0];
                int32_t *l_2740 = &g_1001;
                int32_t *l_2741 = &l_2724[3];
                int32_t *l_2742[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_2742[i] = (void*)0;
                for (g_2419 = 0; (g_2419 <= 5); g_2419 += 1)
                {
                    int32_t *l_2733 = (void*)0;
                    int32_t *l_2735[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2735[i] = &g_54;
                    (**g_433) = &l_2717;
                }
                l_2745[2][0]++;
                l_2748--;
            }
            for (g_506 = 0; (g_506 <= 5); g_506 += 1)
            {
                uint32_t l_2751[7] = {0x1EBA4C44L,0x1EBA4C44L,0x3175C0B0L,0x1EBA4C44L,0x1EBA4C44L,0x3175C0B0L,0x1EBA4C44L};
                int64_t *l_2757 = &g_173[1][1][6];
                int i;
                l_2751[5]++;
                if (l_2754)
                    break;
                for (g_799 = 0; (g_799 <= 5); g_799 += 1)
                {
                    uint32_t l_2759[6] = {0xED9E791FL,1UL,1UL,0xED9E791FL,1UL,1UL};
                    int i;
                    for (g_392 = 0; (g_392 <= 1); g_392 += 1)
                    {
                        int64_t *l_2758 = &g_915;
                        int i, j, k;
                        (*g_2319) = ((safe_rshift_func_uint16_t_u_s((g_173[(g_1466 + 1)][g_392][(g_799 + 1)] < (g_1659[(g_506 + 3)] ^ (((*g_521) = l_2757) == (((((*l_2758) |= (0x4F0F1AD99F770905LL ^ l_2719)) , (0x51L <= l_2721)) , (l_2739 ^= 5L)) , &g_173[(g_1466 + 1)][g_392][(g_799 + 1)])))), 5)) & l_2759[2]);
                        if (g_392)
                            goto lbl_2760;
                    }
                }
            }
            for (l_2722 = 0; (l_2722 <= 8); l_2722 += 1)
            {
                int64_t *l_2763 = &g_915;
                uint16_t *l_2779[3];
                uint16_t **l_2778 = &l_2779[0];
                uint32_t l_2780 = 7UL;
                int16_t l_2781 = 5L;
                int16_t l_2851 = 0L;
                int i;
                for (i = 0; i < 3; i++)
                    l_2779[i] = &l_2745[2][0];
            }
            (*l_3) = ((**l_2870) , (*l_3));
        }
        if ((**l_2870))
            break;
        for (l_2727 = 0; (l_2727 <= 5); l_2727 += 1)
        {
            int32_t l_2873 = 0x8A6D3A2FL;
            uint32_t *l_2884[3][4][10] = {{{&g_1183[0],&g_1466,&g_1466,&g_1183[3],&g_1466,&g_1466,&g_1183[0],&g_1466,&g_1466,&g_1317},{&g_1466,&g_1183[0],&g_1466,&g_1466,&g_1317,&g_1466,&g_1466,&g_1317,&g_1466,&g_1466},{&g_1183[0],&g_1183[0],&g_2419,&g_1183[3],&g_1317,&g_1626[1],&g_1183[0],&g_1317,(void*)0,&g_1317},{&g_1466,&g_2419,&g_1466,&g_1317,&g_1466,&g_2419,&g_1466,&g_1466,&g_1626[1],&g_1183[0]}},{{&g_2419,&g_1466,&g_1466,&g_1626[1],&g_1183[0],&g_2419,&g_2419,&g_1183[0],&g_1626[1],&g_1466},{&g_1466,&g_1466,&g_1183[1],&g_1317,&g_1183[0],&g_1317,&g_1466,&g_1183[0],&g_1466,&g_1183[0]},{&g_1466,&g_2419,&g_1466,&g_1317,&g_1466,&g_2419,&g_1466,&g_1466,&g_1626[1],&g_1183[0]},{&g_2419,&g_1466,&g_1466,&g_1626[1],&g_1183[0],&g_2419,&g_2419,&g_1183[0],&g_1626[1],&g_1466}},{{&g_1466,&g_1466,&g_1183[1],&g_1317,&g_1183[0],&g_1317,&g_1466,&g_1183[0],&g_1466,&g_1183[0]},{&g_1466,&g_2419,&g_1466,&g_1317,&g_1466,&g_2419,&g_1466,&g_1466,&g_1626[1],&g_1183[0]},{&g_2419,&g_1466,&g_1466,&g_1626[1],&g_1183[0],&g_2419,&g_2419,&g_1183[0],&g_1626[1],&g_1466},{&g_1466,&g_1466,&g_1183[1],&g_1317,&g_1183[0],&g_1317,&g_1466,&g_1183[0],&g_1466,&g_1183[0]}}};
            uint32_t **l_2883 = &l_2884[2][1][8];
            uint32_t l_2887 = 4294967293UL;
            const int16_t ***l_2896 = &g_1384;
            uint16_t *** const *l_2922[3];
            int32_t ***l_2940 = &l_2870;
            int32_t ****l_2991[8] = {(void*)0,&l_2940,&l_2940,(void*)0,&l_2940,&l_2940,(void*)0,&l_2940};
            int32_t *l_2998 = &l_2718;
            int32_t **l_3000 = &g_1977;
            uint32_t l_3016 = 7UL;
            int8_t l_3023 = 0x5EL;
            int32_t *l_3075[2];
            int32_t ****l_3097 = &g_433;
            const int16_t l_3099 = 0x114BL;
            uint32_t l_3100 = 0x971E3B31L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_2922[i] = &g_1395;
            for (i = 0; i < 2; i++)
                l_3075[i] = &l_2717;
        }
    }
    if ((((((((void*)0 != &g_1341[6][2]) ^ (-3L)) ^ (safe_rshift_func_uint8_t_u_u(((*g_1342) == ((*g_745) = l_3107)), (((*g_1013) = (**g_1396)) <= ((((*l_3020) = ((((*l_3) |= ((*l_3108) = (*l_3020))) == (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((((((-1L) == 0xECB9L) ^ l_3114[0]) && (*l_3020)) && g_799), 1)), 15))) <= (*g_232))) != l_3116) | (*g_232)))))) , 0xE2119FA90C624DD1LL) ^ g_2921) && (*l_3)))
    {
        return (*l_3);
    }
    else
    {
        int16_t l_3124[1][8] = {{1L,1L,0xC48DL,1L,1L,0xC48DL,1L,1L}};
        int32_t l_3126[10] = {0x150815EBL,0x150815EBL,0x150815EBL,0x150815EBL,0x150815EBL,0x150815EBL,0x150815EBL,0x150815EBL,0x150815EBL,0x150815EBL};
        uint32_t l_3128 = 18446744073709551615UL;
        int32_t l_3141 = 0xC0EA9733L;
        uint8_t *l_3158 = &l_2867;
        int32_t ***l_3173[4][5][9] = {{{&g_434,(void*)0,&g_434,&g_434,&g_434,(void*)0,&g_434,&g_434,&g_434},{&g_434,(void*)0,&g_434,&g_434,(void*)0,&g_434,&g_434,&g_434,&g_434},{(void*)0,(void*)0,(void*)0,&g_434,&g_434,(void*)0,&g_434,&g_434,(void*)0},{(void*)0,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434},{&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,(void*)0}},{{(void*)0,(void*)0,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434},{&g_434,&g_434,(void*)0,&g_434,&g_434,&g_434,(void*)0,&g_434,&g_434},{(void*)0,(void*)0,&g_434,&g_434,(void*)0,&g_434,&g_434,&g_434,&g_434},{(void*)0,&g_434,(void*)0,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434},{&g_434,(void*)0,&g_434,(void*)0,&g_434,&g_434,(void*)0,&g_434,&g_434}},{{&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,(void*)0,&g_434},{&g_434,&g_434,&g_434,&g_434,(void*)0,&g_434,&g_434,(void*)0,&g_434},{&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,(void*)0,&g_434},{&g_434,(void*)0,&g_434,&g_434,&g_434,&g_434,(void*)0,(void*)0,&g_434},{&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,(void*)0,&g_434}},{{(void*)0,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434},{&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,(void*)0,&g_434,&g_434},{&g_434,&g_434,&g_434,(void*)0,(void*)0,&g_434,&g_434,&g_434,&g_434},{&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434,&g_434},{&g_434,(void*)0,&g_434,(void*)0,&g_434,&g_434,(void*)0,&g_434,&g_434}}};
        int32_t l_3193 = 0L;
        uint32_t l_3197 = 9UL;
        int32_t l_3236 = 0L;
        uint32_t l_3243 = 0x3C70DD7BL;
        uint32_t l_3299[8] = {0x6CA62C8FL,0x6CA62C8FL,0x03D36B7FL,0x6CA62C8FL,0x6CA62C8FL,0x03D36B7FL,0x6CA62C8FL,0x6CA62C8FL};
        uint16_t ****l_3313 = &g_1395;
        uint8_t l_3314 = 255UL;
        uint32_t l_3375 = 4294967295UL;
        int64_t l_3377 = 0x08F1CAF02F2296B4LL;
        int32_t l_3380 = 0xFF749E0CL;
        uint64_t l_3403 = 1UL;
        int64_t ****l_3408 = &g_1179;
        int16_t ***l_3410 = (void*)0;
        uint8_t l_3433 = 0x6BL;
        int32_t ***** const l_3469 = (void*)0;
        int32_t l_3498 = (-5L);
        int i, j, k;
        for (g_767 = 11; (g_767 < 3); g_767--)
        {
            int64_t l_3119[3];
            int32_t l_3120 = 0xA1C54A34L;
            int32_t *l_3121 = (void*)0;
            int32_t *l_3122 = &l_2728[4][0][2];
            int32_t *l_3123[3][5] = {{&l_2901,&g_1204[0][0],&l_2901,&l_2901,&g_1204[0][0]},{&g_4,&g_54,&g_54,&g_4,&g_54},{&g_1204[0][0],&g_1204[0][0],&g_269,&g_1204[0][0],&g_1204[0][0]}};
            int8_t l_3125 = 0xA5L;
            uint8_t *l_3136 = &l_2867;
            int8_t *l_3147 = &g_296;
            uint32_t *****l_3148 = &g_2990;
            const int8_t *****l_3149 = &g_2071[1];
            int i, j;
            for (i = 0; i < 3; i++)
                l_3119[i] = (-1L);
            ++l_3128;
            (*g_2319) = (safe_add_func_uint32_t_u_u(0x5FBED003L, (((l_3133 != ((*l_3020) , l_3133)) ^ g_303[2][4]) , ((safe_add_func_uint8_t_u_u(((*l_3136) = ((*g_232) ^= (*l_3))), (g_299 , (l_3141 |= (g_299 ^ (safe_add_func_int64_t_s_s(((((safe_div_func_uint32_t_u_u(((*l_3020) == l_3126[9]), (**g_2519))) < (*l_3020)) <= 0xE8L) | 0x427CF171L), (*l_3020)))))))) & l_3128))));
            l_3126[4] = (0L || (safe_rshift_func_int8_t_s_u((~(safe_add_func_int8_t_s_s(((*l_3147) = 1L), ((*l_3136) = ((l_3141 = ((&l_2937 == ((*l_3148) = g_2990)) ^ 7UL)) != (((l_3124[0][5] , ((*l_3149) = &g_2072[1])) != ((((***l_2937) &= (l_3126[7] >= l_3150)) <= g_149) , &g_2072[1])) >= 0L)))))), 2)));
        }
        for (g_289 = 0; (g_289 <= 1); g_289 += 1)
        {
            uint16_t ** const *l_3161 = &g_1396;
            uint16_t ** const **l_3160[7][2] = {{&l_3161,&l_3161},{&l_3161,&l_3161},{&l_3161,&l_3161},{&l_3161,&l_3161},{&l_3161,&l_3161},{&l_3161,&l_3161},{&l_3161,&l_3161}};
            uint16_t ** const ***l_3159 = &l_3160[0][1];
            const int32_t l_3178 = 0x95A5BA4CL;
            int32_t **l_3190[2][8] = {{&g_67,(void*)0,(void*)0,&g_67,&l_3020,&g_67,(void*)0,(void*)0},{(void*)0,&l_3020,&l_3,&l_3,&l_3020,(void*)0,&l_3020,&l_3}};
            uint32_t l_3225 = 0x0BE2BE67L;
            uint32_t l_3237 = 0x09B82E9AL;
            uint32_t l_3249[10][9] = {{0x73239188L,0UL,0x73239188L,0x73239188L,0UL,0x73239188L,0x73239188L,0UL,0x73239188L},{0x237B13E3L,18446744073709551606UL,0x237B13E3L,0xEFAA1673L,18446744073709551613UL,0xEFAA1673L,0x237B13E3L,18446744073709551606UL,0x237B13E3L},{0x73239188L,0UL,0x73239188L,0x73239188L,0UL,0x73239188L,0x73239188L,0UL,0x73239188L},{0x237B13E3L,18446744073709551606UL,0x237B13E3L,0xEFAA1673L,18446744073709551613UL,5UL,0x92FDC1A6L,0xEFAA1673L,0x92FDC1A6L},{0xFA4BE567L,0x73239188L,0xFA4BE567L,0xFA4BE567L,0x73239188L,0xFA4BE567L,0xFA4BE567L,0x73239188L,0xFA4BE567L},{0x92FDC1A6L,0xEFAA1673L,0x92FDC1A6L,5UL,0x237B13E3L,5UL,0x92FDC1A6L,0xEFAA1673L,0x92FDC1A6L},{0xFA4BE567L,0x73239188L,0xFA4BE567L,0xFA4BE567L,0x73239188L,0xFA4BE567L,0xFA4BE567L,0x73239188L,0xFA4BE567L},{0x92FDC1A6L,0xEFAA1673L,0x92FDC1A6L,5UL,0x237B13E3L,5UL,0x92FDC1A6L,0xEFAA1673L,0x92FDC1A6L},{0xFA4BE567L,0x73239188L,0xFA4BE567L,0xFA4BE567L,0x73239188L,0xFA4BE567L,0xFA4BE567L,0x73239188L,0xFA4BE567L},{0x92FDC1A6L,0xEFAA1673L,0x92FDC1A6L,5UL,0x237B13E3L,5UL,0x92FDC1A6L,0xEFAA1673L,0x92FDC1A6L}};
            uint32_t ***l_3277 = (void*)0;
            int32_t l_3282 = 0x081CAFBEL;
            int16_t l_3425 = 7L;
            uint64_t **l_3426[1];
            uint64_t l_3450 = 0x2309AB9E5DC4B31ELL;
            int32_t *l_3473 = &g_4;
            int i, j;
            for (i = 0; i < 1; i++)
                l_3426[i] = &g_3229;
            (*l_3020) = ((*g_2319) = (*l_3020));
            for (g_2036 = 0; (g_2036 <= 1); g_2036 += 1)
            {
                int32_t **l_3151 = &l_3;
                uint32_t *l_3167 = &g_1626[1];
                int32_t l_3177 = 0x798C615BL;
                for (g_799 = 3; (g_799 >= 0); g_799 -= 1)
                {
                    const uint32_t *l_3171 = (void*)0;
                    const uint32_t **l_3170 = &l_3171;
                    uint64_t *l_3174 = (void*)0;
                    uint64_t *l_3175 = &g_506;
                    const uint8_t l_3176 = 246UL;
                    uint32_t l_3179 = 0UL;
                    int8_t *l_3183 = &g_1893;
                    int i, j;
                    for (l_3116 = 0; (l_3116 <= 1); l_3116 += 1)
                    {
                        int i, j;
                        g_3162 = (((((void*)0 == l_3151) , l_3151) == (void*)0) , (((safe_lshift_func_int8_t_s_s(g_1204[(g_2036 + 1)][l_3116], 1)) == ((safe_div_func_int8_t_s_s(((((**l_3151) = (((&g_1394 != ((safe_sub_func_uint32_t_u_u(0xD63969B9L, (((l_3158 == (void*)0) <= g_357[(l_3116 + 4)][l_3116]) & (**l_3151)))) , l_3159)) & (*l_3020)) , (**l_3151))) != (*g_2520)) != 0x2409L), (*g_232))) , g_1626[0])) && (-1L)));
                    }
                }
            }
            for (l_2901 = 0; (l_2901 <= 1); l_2901 += 1)
            {
                uint32_t **l_3192 = &g_2520;
                uint32_t *l_3200[6][5] = {{&l_3128,&g_1183[0],&l_3128,&l_3128,&g_1183[0]},{&g_1183[0],&g_1317,&l_3128,&g_1183[0],&l_3128},{&g_1626[0],&g_1183[0],(void*)0,&g_1183[0],&g_1626[0]},{&l_3128,&g_1183[0],&g_1317,&l_3128,&g_1183[0]},{&g_1626[0],&g_1317,&g_1317,&g_1626[0],&l_3128},{&g_1183[0],&g_1626[0],(void*)0,&g_1183[0],&g_1183[0]}};
                const uint64_t *l_3214 = &g_288;
                const uint64_t ** const l_3213 = &l_3214;
                int32_t l_3230[10][3][8] = {{{0xDBF9ED82L,0L,(-4L),0xAF1345D3L,0x7455484BL,(-9L),0L,0x7A8D442AL},{1L,(-7L),9L,0L,0L,(-6L),(-3L),0xEA0DA387L},{(-1L),5L,0x99A5EFCCL,0x906B1102L,0xE5CCBF81L,0x492788A2L,0x906B1102L,0xA9432BD2L}},{{0xD546B25BL,0xE6941BE8L,0L,7L,6L,0x0C07F2DBL,0L,(-9L)},{(-10L),9L,0x29A7B85DL,0xFBA39A62L,1L,0L,0x3E2F8B07L,0x7392CA8AL},{0L,1L,1L,(-10L),0x9CFCCFB3L,0x2C8F9893L,1L,0xA9432BD2L}},{{0x29A7B85DL,(-10L),8L,(-7L),(-1L),(-7L),8L,(-10L)},{0xFBA39A62L,7L,(-7L),0L,0xAF1345D3L,0L,(-1L),0xBBD99383L},{5L,0x9CFCCFB3L,0x8BE3E6E6L,(-3L),0xFBA39A62L,1L,(-1L),0xE6941BE8L}},{{0L,(-3L),(-7L),0L,0x3E2F8B07L,0xEE76585EL,8L,(-1L)},{0x3E2F8B07L,0xEE76585EL,8L,(-1L),(-4L),8L,1L,(-10L)},{(-9L),0xA9432BD2L,1L,0x7A8D442AL,0xE6941BE8L,0x2F552E98L,0x3E2F8B07L,0xFBA39A62L}},{{0L,6L,0x29A7B85DL,0xA12DAC5EL,0x7A8D442AL,(-4L),0L,1L},{0x29A7B85DL,5L,1L,(-10L),0xA95E43BDL,0x2F552E98L,0xA12DAC5EL,(-1L)},{1L,9L,(-9L),(-4L),0x7392CA8AL,0L,1L,9L}},{{0x53E036E2L,1L,0xA33FCC23L,1L,(-7L),0x2B6B8FE7L,1L,0xEA0DA387L},{4L,0xFC4A7E6DL,0x8BE3E6E6L,0xBBD99383L,8L,0x46E69290L,(-9L),0x2F552E98L},{0xEE76585EL,0L,1L,0xEA0DA387L,0x7392CA8AL,0xE5CCBF81L,5L,5L}},{{1L,4L,0x99A5EFCCL,0x99A5EFCCL,4L,1L,(-10L),0L},{0x29A7B85DL,0x46E69290L,0x6F30F812L,0x7392CA8AL,0x2C8F9893L,1L,0xEE76585EL,0xBAF5DB2CL},{0xD546B25BL,8L,0L,0x7392CA8AL,0x21F04B82L,0xD8F9C594L,(-7L),0L}},{{8L,0x21F04B82L,0x2B6B8FE7L,0x99A5EFCCL,0x5182B7CDL,0x43C44BC2L,1L,5L},{0x0C07F2DBL,1L,0x53E036E2L,0xEA0DA387L,0x2B6B8FE7L,(-10L),0x46F73F28L,0x2F552E98L},{0L,0xA12DAC5EL,0L,0xBBD99383L,0xB8112E61L,1L,0xD546B25BL,0xEA0DA387L}},{{1L,0L,(-1L),1L,1L,8L,0xBAF5DB2CL,9L},{0xB8112E61L,0xA33FCC23L,0x53E036E2L,(-4L),(-1L),1L,0L,(-1L)},{(-10L),0x0C07F2DBL,9L,(-10L),9L,0L,(-7L),1L}},{{0L,(-9L),0xFC4A7E6DL,0x43C44BC2L,0xEA0DA387L,1L,0x53E036E2L,0xB8112E61L},{0L,0L,0x6F30F812L,0xAF1345D3L,0x2F552E98L,0xBAF5DB2CL,0xDBF9ED82L,0x2B6B8FE7L},{0x21F04B82L,0x0C07F2DBL,0xA9432BD2L,0x5182B7CDL,5L,9L,5L,0x5182B7CDL}}};
                uint32_t *** const *l_3240 = (void*)0;
                uint32_t *** const **l_3239 = &l_3240;
                int32_t l_3276 = 5L;
                uint32_t ***l_3279 = (void*)0;
                uint32_t l_3307 = 4294967290UL;
                int32_t *l_3328 = &g_3226[1];
                int16_t l_3353 = 0x0E01L;
                int8_t l_3382 = 0x89L;
                int32_t l_3419 = 0xF25989C3L;
                int64_t l_3453[1][4][5] = {{{(-4L),(-4L),0L,0L,(-4L)},{(-9L),0x44EE7BCD4DB2AA9ALL,(-9L),0x44EE7BCD4DB2AA9ALL,(-9L)},{(-4L),0L,0L,(-4L),(-4L)},{0x274BEB79F5BEC75ELL,0x44EE7BCD4DB2AA9ALL,0x274BEB79F5BEC75ELL,0x44EE7BCD4DB2AA9ALL,0x274BEB79F5BEC75ELL}}};
                int8_t ***l_3470 = &g_1293;
                int32_t *** const *l_3486 = &l_3173[1][2][3];
                uint16_t l_3502 = 0xF529L;
                int64_t l_3505 = 0L;
                uint64_t l_3507 = 0xDC191935BC7BB914LL;
                uint64_t l_3510 = 8UL;
                int i, j, k;
                if ((((((g_173[0][1][2] = ((((**g_1396) = (((((g_1204[(g_289 + 1)][g_289] <= (0xB1CD94B0L < (safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((*g_1013) , ((*l_3158) = ((((((*l_3108) = ((((*g_1977) ^= (((***g_2414) == (void*)0) , (safe_add_func_int64_t_s_s(g_149, ((*l_3) ^ 65531UL))))) , l_3190[0][5]) != (void*)0)) == 0x903E000A83C58601LL) , l_3191) == l_3192) < 2L))), g_1204[(g_289 + 1)][g_289])), 0x92F1L)))) == (*l_3)) || (*l_3020)) <= (*l_3)) == 0L)) == g_1204[(g_289 + 1)][g_289]) <= (*l_3020))) || g_301) ^ l_3193) || 0x86D895D4DCE527E5LL) < g_1204[(g_289 + 1)][g_289]))
                {
                    int32_t l_3194 = 0L;
                    uint32_t *l_3199[2][8] = {{(void*)0,&g_1466,&g_1466,(void*)0,&g_1466,&g_1466,(void*)0,&g_1466},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int i, j;
                    for (g_149 = 0; (g_149 <= 1); g_149 += 1)
                    {
                        int32_t l_3198 = 1L;
                        l_3197 = ((l_3194 , (--(**l_3192))) > (*g_2319));
                        if (l_3198)
                            continue;
                    }
                    for (l_2699 = 0; (l_2699 <= 1); l_2699 += 1)
                    {
                        int16_t l_3201 = 6L;
                        const int8_t l_3206 = 0xB3L;
                        (*l_3020) ^= ((l_3199[1][3] != (l_3200[4][2] = (void*)0)) < 0L);
                        (*l_3020) |= l_3201;
                        (**g_433) = func_40(&l_2725, ((safe_lshift_func_int16_t_s_u((((*g_1013) = (****g_1394)) != (g_1204[(g_289 + 1)][g_289] , l_3194)), ((((*g_232) <= (((safe_mul_func_int16_t_s_s((*l_3), (g_1204[(g_289 + 1)][g_289] > 0x29B9B5EDL))) >= ((*l_3158) = 0x53L)) , l_3206)) | 0x47L) & 255UL))) || (****g_1394)));
                    }
                    for (g_1001 = 1; (g_1001 >= 0); g_1001 -= 1)
                    {
                        uint64_t l_3222 = 18446744073709551610UL;
                        uint8_t l_3227 = 0xD2L;
                        (*l_3020) &= (safe_rshift_func_uint16_t_u_s((18446744073709551615UL != 2UL), 8));
                        (*l_3020) ^= (safe_mod_func_int16_t_s_s((*l_3), ((safe_mul_func_int8_t_s_s(((g_222[1] < ((void*)0 == l_3213)) < 254UL), ((!((*g_2319) = (((safe_div_func_int64_t_s_s((!(l_3194 && (g_392 < ((safe_mod_func_uint64_t_u_u(((~(l_3222 , (safe_mod_func_uint16_t_u_u(((**g_1976) , 65535UL), l_3194)))) == (**g_2519)), l_3225)) , l_3222)))), g_303[2][4])) != g_3226[1]) , l_3227))) && l_3194))) | l_3194)));
                        (*l_3020) = (g_3228[3][0] != &g_3229);
                        if (l_3227)
                            break;
                    }
                }
                else
                {
                    uint32_t l_3231 = 0xDCA675D2L;
                    for (g_2299 = 0; (g_2299 <= 1); g_2299 += 1)
                    {
                        l_3231++;
                    }
                    for (l_2904 = 0; (l_2904 <= 1); l_2904 += 1)
                    {
                        return (**g_2519);
                    }
                }
                if ((safe_sub_func_int8_t_s_s((l_3236 , ((void*)0 == (**g_2414))), (((l_3237 = 0x2CE0L) == (*g_1013)) >= (&g_2990 != (((safe_unary_minus_func_uint8_t_u(((*g_232) = (*g_232)))) , l_3230[1][1][2]) , l_3239))))))
                {
                    uint32_t l_3246 = 8UL;
                    int16_t l_3259[5];
                    uint8_t l_3287 = 255UL;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_3259[i] = (-1L);
                    if (((*g_2319) = ((safe_div_func_int16_t_s_s(l_3230[2][0][0], l_3243)) && (safe_add_func_uint64_t_u_u((l_3246 , (safe_lshift_func_int16_t_s_u((((***g_1395) = 7UL) < (l_3249[7][2] , (safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(9L, (l_3230[2][0][0] || (+(((*g_2319) ^ ((*l_3) = (safe_lshift_func_uint16_t_u_u((g_2036 |= ((*g_232) < 0UL)), 6)))) <= 0UL))))), l_3230[2][1][0])), 0xCD42L)))), 1))), l_3259[2])))))
                    {
                        int64_t l_3268[3];
                        uint32_t ****l_3278 = (void*)0;
                        int32_t l_3283 = 0L;
                        uint32_t *l_3284 = (void*)0;
                        uint32_t *l_3285 = (void*)0;
                        uint32_t *l_3286 = &g_78;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_3268[i] = 1L;
                        (*g_2319) = (((safe_lshift_func_uint8_t_u_u((*g_232), ((safe_mod_func_uint16_t_u_u(((***g_1395) &= (l_3230[2][0][1] & ((safe_mod_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(l_3230[2][0][0], l_3268[1])) & (*g_2520)), (safe_sub_func_int16_t_s_s((*l_3020), (((safe_mul_func_uint8_t_u_u(((void*)0 == g_3273), (safe_add_func_int64_t_s_s(((*g_2520) || l_3276), 0xAC7EA805891D4D17LL)))) && (-1L)) & g_154[0]))))) == 5UL))), l_3259[1])) < (*l_3020)))) > (*g_2319)) , (-9L));
                        l_3279 = l_3277;
                        (*l_3020) |= ((*g_2520) | ((safe_div_func_int32_t_s_s((l_3230[2][0][0] = ((l_3283 = (l_3246 ^ l_3282)) && (*l_3))), ((l_3276 >= (((*l_3286) = ((void*)0 == &l_3128)) > 0x6D1B9171L)) | (*g_2520)))) < l_3287));
                    }
                    else
                    {
                        return (*l_3);
                    }
                    if ((((safe_unary_minus_func_int64_t_s((safe_rshift_func_int8_t_s_s((l_3276 < ((g_1626[l_2901] = (safe_mul_func_uint16_t_u_u(65531UL, ((void*)0 == l_3293[1][0][2])))) , (*l_3020))), ((safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(l_3299[3], (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((*g_3229) >= (safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_uint32_t_u(((((void*)0 != (**g_1342)) > (*g_232)) >= 0x99L))) | (*g_2520)), (**g_2519)))), l_3287)), l_3307)))), 0x807037DBL)) < 0x3AFE366C727DA4ACLL))))) > 4294967295UL) || (***g_1395)))
                    {
                        int8_t l_3312 = 0x70L;
                        int8_t *l_3326 = &g_296;
                        int8_t *l_3327[9] = {(void*)0,&g_298,(void*)0,(void*)0,&g_298,(void*)0,(void*)0,&g_298,(void*)0};
                        uint16_t l_3329 = 0UL;
                        int i;
                        (**g_433) = ((safe_div_func_uint64_t_u_u((l_3312 ^ ((l_3313 == (l_3314 , l_3313)) , ((safe_mod_func_int16_t_s_s(l_3287, ((safe_add_func_int32_t_s_s(g_1626[l_2901], (--(**l_3192)))) , ((*****l_3159) = (***g_1395))))) == (((((*l_3020) &= ((*l_3326) = (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((-1L), g_3325)), l_3312)))) , (void*)0) != g_2990) | 255UL)))), 18446744073709551608UL)) , l_3328);
                        ++l_3329;
                        (*l_3) &= (-1L);
                        return (**g_2519);
                    }
                    else
                    {
                        return l_3259[3];
                    }
                }
                else
                {
                    int8_t l_3342 = 0x1EL;
                    uint16_t l_3376 = 0x0C29L;
                    uint16_t l_3379[7];
                    int32_t l_3381 = 8L;
                    uint64_t *l_3386 = (void*)0;
                    int8_t *l_3407 = &g_2962;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_3379[i] = 0x53C2L;
                    if (((g_1204[(g_289 + 1)][g_289] &= (((safe_add_func_int64_t_s_s((-5L), (*l_3))) < (*l_3328)) <= (1UL && 0x80L))) >= (*g_1013)))
                    {
                        g_1976 = &g_1977;
                    }
                    else
                    {
                        uint32_t l_3339[1];
                        int32_t ***l_3354 = (void*)0;
                        const int64_t l_3364 = 0x021B4BC97AA42111LL;
                        uint8_t **l_3378[9] = {&l_3158,&l_3158,&l_3158,&l_3158,&l_3158,&l_3158,&l_3158,&l_3158,&l_3158};
                        uint64_t *l_3384[2];
                        uint64_t **l_3385[9][7][2] = {{{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]}},{{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]}},{{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]}},{{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]}},{{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]}},{{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]}},{{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]}},{{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]}},{{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]},{&l_3384[0],&l_3384[0]}}};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_3339[i] = 1UL;
                        for (i = 0; i < 2; i++)
                            l_3384[i] = (void*)0;
                        (*l_3020) = (safe_mod_func_uint32_t_u_u((safe_div_func_int64_t_s_s((((l_3338[0] = 8L) > (l_3339[0] == (safe_rshift_func_int8_t_s_s(l_3342, 6)))) , (-2L)), ((*g_3229) |= l_3343))), (safe_add_func_uint16_t_u_u((l_3339[0] || 0xA0L), (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint16_t_u_u((((*g_232) , ((safe_add_func_uint64_t_u_u((l_3342 == 0UL), g_3053)) , l_3342)) >= l_3342), (**g_1396))))), l_3353))))));
                        l_3381 |= (((((void*)0 == l_3354) <= ((*g_2520) ^= (safe_sub_func_int32_t_s_s(((0xD833L | (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((((*l_3328) && (((((((~(*l_3)) < ((safe_add_func_int16_t_s_s(l_3364, (safe_rshift_func_int16_t_s_u(((*l_3020) = ((&g_233 == (g_232 = ((((safe_mod_func_uint16_t_u_u(((+(~(((--(**g_1396)) > ((((safe_add_func_uint32_t_u_u(0x1F3BEBF4L, l_3375)) & (*l_3020)) & 0xE23EL) || l_3342)) >= l_3376))) ^ 0xF35432C3L), l_3377)) && 0L) < 1L) , &g_221))) <= (*l_3020))), 3)))) | (-1L))) > l_3342) , 2UL) , 0x14561FE3L) , l_3376) ^ 0UL)) , (*l_3)) == l_3379[0]) > 18446744073709551615UL), l_3380)), 3))) == (*l_3328)), (*g_2319))))) > 1UL) | (*g_2319));
                        (*g_434) = (l_3382 , ((!((l_3386 = l_3384[1]) == (void*)0)) , &l_2718));
                    }
                    if ((*l_3328))
                        continue;
                    if (((l_3387 , &l_3107) == (((g_3409[0][8][0] = ((safe_mul_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u(0xE8L, l_3379[0])) < ((safe_mul_func_uint16_t_u_u((((*l_3407) |= (safe_mod_func_int8_t_s_s((l_3396 != l_3396), (safe_div_func_int64_t_s_s(((*l_3108) = g_1317), ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(l_3403, (((((**l_3191) |= ((safe_rshift_func_uint16_t_u_s((((*g_3229) = (*g_3229)) && l_3376), 7)) & 0xCFL)) == (*l_3328)) , 1UL) <= l_3376))), g_3406)) | l_3376)))))) != 0x2BL), (*g_1013))) <= 0xA9A85B46829344FALL)), 0UL)) , l_3408)) == (void*)0) , l_3410)))
                    {
                        uint16_t l_3418 = 0x8F1BL;
                        int32_t l_3427 = 8L;
                        (*l_3020) &= ((safe_lshift_func_uint16_t_u_s(((*l_3) , (safe_mul_func_int16_t_s_s((*l_3328), ((***g_1395) = ((3UL || ((g_3417 || (((l_3418 ^ ((l_3419 , (l_3427 ^= ((((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((*g_2520) | (((((((void*)0 != l_3424) ^ 0xE5D0DE67L) , l_3425) & (*l_3)) && 7L) | (*l_3328))), (*l_3328))), l_3418)) , &g_3229) == l_3426[0]) > 0x743F6940L))) ^ (*g_232))) , &l_3382) != g_3428)) , 65535UL)) , (***g_1395)))))), 11)) , (*l_3328));
                    }
                    else
                    {
                        const int64_t l_3434 = 0L;
                        (*l_3) |= ((((safe_add_func_int16_t_s_s((*l_3020), (****g_1394))) & (**g_1396)) , l_3379[0]) && ((safe_lshift_func_int8_t_s_s(1L, ((((*l_3328) = ((*g_1977) = ((6L >= (l_3433 ^ ((l_3434 && (safe_rshift_func_int8_t_s_s(((((0xE5175941L && (*g_2319)) , l_3437[1][0]) , l_3434) ^ l_3381), 2))) | (*g_232)))) >= 0x36L))) , 0xFE1DL) & 0xBEAFL))) , l_3438));
                    }
                }
                g_3454 |= ((*l_3020) = ((*l_3328) |= (((safe_add_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((~((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((*l_3020), 7)), ((void*)0 == (*g_3273)))) == (*l_3))), (safe_lshift_func_int8_t_s_s(l_3450, 3)))), (safe_add_func_uint8_t_u_u(((*l_3020) & (*g_3229)), 251UL)))) == ((*g_2319) = ((*g_3229) != l_3453[0][1][1]))) , (*g_2319))));
            }
        }
    }
    return (*g_2520);
}







static int32_t func_9(const int32_t * p_10, int32_t * p_11, int32_t p_12, int32_t * const p_13, int32_t * p_14)
{
    int32_t l_2101[5];
    int32_t * const ****l_2123 = (void*)0;
    uint16_t **l_2128[9][7][1] = {{{&g_1013},{&g_1013},{&g_1013},{(void*)0},{(void*)0},{(void*)0},{&g_1013}},{{&g_1013},{&g_1013},{&g_1013},{(void*)0},{(void*)0},{(void*)0},{&g_1013}},{{&g_1013},{&g_1013},{(void*)0},{&g_1013},{&g_1013},{&g_1013},{(void*)0}},{{(void*)0},{(void*)0},{&g_1013},{&g_1013},{&g_1013},{&g_1013},{(void*)0}},{{(void*)0},{(void*)0},{&g_1013},{&g_1013},{&g_1013},{(void*)0},{&g_1013}},{{&g_1013},{&g_1013},{(void*)0},{(void*)0},{(void*)0},{&g_1013},{&g_1013}},{{&g_1013},{&g_1013},{(void*)0},{(void*)0},{(void*)0},{&g_1013},{&g_1013}},{{&g_1013},{(void*)0},{&g_1013},{&g_1013},{&g_1013},{(void*)0},{(void*)0}},{{(void*)0},{&g_1013},{&g_1013},{&g_1013},{&g_1013},{(void*)0},{(void*)0}}};
    int8_t **l_2140 = &g_1294[0][3];
    int32_t l_2160[8];
    uint32_t ***l_2242 = (void*)0;
    int32_t l_2338 = 0xF47DDECEL;
    int16_t l_2340 = 0x3F89L;
    uint16_t l_2425 = 0x31ACL;
    uint16_t l_2459 = 0x599DL;
    uint16_t l_2464 = 0x3F8EL;
    int32_t l_2480[8][5][2] = {{{0xDAB279B5L,0x578D7559L},{(-4L),9L},{(-1L),4L},{0xC49715F7L,0xBCFB175DL},{0xBCFB175DL,0L}},{{0xD299ECA8L,0xAFC14AF0L},{(-9L),0xBCFB175DL},{1L,0x46C22C47L},{(-1L),0xDAB279B5L},{(-1L),0x578D7559L}},{{0xAFC14AF0L,(-1L)},{0x6380375AL,0x35E29509L},{(-7L),(-4L)},{0xAFC14AF0L,0x7970EF6AL},{(-4L),0xDAB279B5L}},{{(-1L),4L},{1L,(-9L)},{0xBCFB175DL,0xAFC14AF0L},{0x01BF60BBL,0xAFC14AF0L},{0xBCFB175DL,(-9L)}},{{1L,4L},{(-1L),0xDAB279B5L},{(-4L),0x7970EF6AL},{0xAFC14AF0L,(-4L)},{(-7L),0x35E29509L}},{{0x6380375AL,(-1L)},{0xAFC14AF0L,0x578D7559L},{(-1L),0xDAB279B5L},{(-1L),0x46C22C47L},{1L,0xBCFB175DL}},{{(-9L),0xAFC14AF0L},{0xD299ECA8L,0L},{0xBCFB175DL,0xBCFB175DL},{0xC49715F7L,4L},{(-1L),9L}},{{(-4L),0x578D7559L},{0L,(-4L)},{0x6380375AL,0x8F648F5DL},{0x6380375AL,(-4L)},{0L,0x578D7559L}}};
    uint32_t ** const *l_2508 = &g_1061;
    uint32_t l_2528[6][5][1] = {{{0x0A0A7D36L},{0x365FE046L},{0x365FE046L},{0x0A0A7D36L},{18446744073709551611UL}},{{0x6499F256L},{5UL},{18446744073709551612UL},{1UL},{18446744073709551612UL}},{{5UL},{0x6499F256L},{18446744073709551611UL},{0x0A0A7D36L},{0x365FE046L}},{{0x365FE046L},{0x0A0A7D36L},{18446744073709551611UL},{0x6499F256L},{5UL}},{{18446744073709551612UL},{1UL},{18446744073709551612UL},{5UL},{0x6499F256L}},{{18446744073709551611UL},{0x0A0A7D36L},{0x365FE046L},{0x365FE046L},{0x0A0A7D36L}}};
    uint32_t ** const l_2563 = (void*)0;
    int64_t **l_2616[3];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_2101[i] = 0x243C2112L;
    for (i = 0; i < 8; i++)
        l_2160[i] = (-4L);
    for (i = 0; i < 3; i++)
        l_2616[i] = &g_522;
    for (g_767 = 12; (g_767 == 16); ++g_767)
    {
        int32_t l_2096 = 8L;
        uint32_t ****l_2097 = (void*)0;
        int64_t ****l_2098 = &g_1179;
        uint16_t l_2122 = 65535UL;
        int32_t *****l_2124 = &g_432[3][0][0];
        int8_t ** const *l_2142 = (void*)0;
        int8_t ** const **l_2141 = &l_2142;
        int32_t l_2184 = (-7L);
        uint32_t l_2243 = 1UL;
        int32_t l_2333 = 0xC4D1B5C1L;
        int32_t l_2341 = 1L;
        int32_t l_2342 = 0x21167145L;
        int32_t l_2343 = 1L;
        int32_t l_2344 = 0L;
        int32_t l_2346 = 0xFA089A3AL;
        int32_t l_2348[10][5] = {{(-4L),(-10L),0xF682AE7AL,(-9L),0x202FF50BL},{9L,(-1L),1L,9L,(-4L)},{(-5L),(-9L),(-3L),(-3L),(-9L)},{(-4L),0xAAC538ACL,(-3L),1L,0xF682AE7AL},{(-1L),(-4L),1L,7L,1L},{0xE8ECA1A3L,9L,0xF682AE7AL,(-5L),(-9L)},{(-1L),(-5L),(-10L),(-9L),(-10L)},{(-4L),(-4L),0x59EA14A9L,(-9L),0x1D6676B1L},{(-5L),(-1L),0xAAC538ACL,(-5L),(-4L)},{9L,0xE8ECA1A3L,(-3L),7L,0xE8ECA1A3L}};
        uint64_t l_2374 = 18446744073709551615UL;
        uint16_t l_2407 = 0xED9CL;
        int16_t l_2450 = (-7L);
        uint32_t l_2451[5][10] = {{0xE05CF484L,0xDB8F82D9L,0xE05CF484L,0xDB8F82D9L,0xE05CF484L,0xDB8F82D9L,0xE05CF484L,0xDB8F82D9L,0xE05CF484L,0xDB8F82D9L},{18446744073709551614UL,0xDB8F82D9L,18446744073709551614UL,0xDB8F82D9L,18446744073709551614UL,0xDB8F82D9L,18446744073709551614UL,0xDB8F82D9L,18446744073709551614UL,0xDB8F82D9L},{0xE05CF484L,0xDB8F82D9L,0xE05CF484L,0xDB8F82D9L,0xE05CF484L,0xDB8F82D9L,0xE05CF484L,0xDB8F82D9L,0xE05CF484L,0xDB8F82D9L},{18446744073709551614UL,0xDB8F82D9L,18446744073709551614UL,0xDB8F82D9L,18446744073709551614UL,0xDB8F82D9L,18446744073709551614UL,0xDB8F82D9L,18446744073709551614UL,0xDB8F82D9L},{0xE05CF484L,0xDB8F82D9L,0xE05CF484L,0xDB8F82D9L,0xE05CF484L,0xDB8F82D9L,0xE05CF484L,0xDB8F82D9L,0xE05CF484L,0xDB8F82D9L}};
        int32_t *l_2457 = (void*)0;
        uint32_t *l_2518 = &g_920;
        uint32_t **l_2517[10] = {&l_2518,&l_2518,&l_2518,&l_2518,&l_2518,&l_2518,&l_2518,&l_2518,&l_2518,&l_2518};
        uint16_t l_2564 = 0UL;
        const int32_t l_2591[10][4] = {{0L,8L,0x90609CFFL,8L},{8L,0xF3BC31D8L,0x90609CFFL,0x90609CFFL},{0L,0L,8L,0x90609CFFL},{0xC230C415L,0xF3BC31D8L,0xC230C415L,8L},{0xC230C415L,8L,8L,0xC230C415L},{0L,8L,0x90609CFFL,8L},{8L,0xF3BC31D8L,0x90609CFFL,0x90609CFFL},{0L,0L,8L,0x90609CFFL},{0xC230C415L,0xF3BC31D8L,0xC230C415L,8L},{0xC230C415L,8L,8L,0xC230C415L}};
        int i, j;
        for (g_269 = 0; (g_269 != (-27)); --g_269)
        {
            const uint32_t l_2099 = 0x6EF174B2L;
            int32_t l_2100 = 0x9EEFEE3DL;
            if ((((~(safe_mul_func_uint8_t_u_u((*g_232), (*g_232)))) , (safe_rshift_func_uint8_t_u_u((l_2096 != (l_2097 == (void*)0)), 6))) ^ ((0xBAL == ((void*)0 != l_2098)) , l_2099)))
            {
                for (g_1552 = 1; (g_1552 >= 0); g_1552 -= 1)
                {
                    return p_12;
                }
                if (l_2099)
                    break;
                if (l_2100)
                    continue;
            }
            else
            {
                if (l_2101[4])
                    break;
                for (g_301 = 8; (g_301 > (-16)); --g_301)
                {
                    for (g_506 = (-4); (g_506 <= 58); g_506 = safe_add_func_uint16_t_u_u(g_506, 6))
                    {
                        return p_12;
                    }
                    return (**g_1976);
                }
            }
        }
        for (g_915 = 0; (g_915 == 11); ++g_915)
        {
            uint16_t l_2108 = 0xF3D2L;
            int32_t l_2109 = 1L;
            if ((l_2108 & p_12))
            {
                int32_t *l_2110 = (void*)0;
                int32_t *l_2111 = &g_799;
                int32_t *l_2112 = &l_2101[0];
                int32_t *l_2113 = &g_57;
                uint64_t l_2114[2];
                const int32_t *l_2117 = &l_2101[1];
                int64_t *l_2129 = &g_1723;
                int i;
                for (i = 0; i < 2; i++)
                    l_2114[i] = 0UL;
                l_2114[1]++;
                l_2117 = p_10;
                (*l_2112) &= ((((safe_lshift_func_int16_t_s_s((((((safe_div_func_int8_t_s_s(l_2122, ((l_2123 != l_2124) , ((safe_sub_func_int8_t_s_s(p_12, (((((*l_2129) = ((+0xAAL) >= (l_2128[5][2][0] == ((**g_1394) = (**g_1394))))) , (safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((--g_2036), (((void*)0 != (*g_433)) && 0x3BF1E64814A4EB08LL))) , (-10L)), l_2108)), 4294967295UL)), p_12))) , 1L) , l_2108))) || (*p_13))))) > 5L) , l_2140) != l_2140) < 65530UL), 3)) <= p_12) > p_12) >= (*l_2113));
                if (l_2101[4])
                    break;
            }
            else
            {
                return l_2109;
            }
            g_1061 = (void*)0;
            for (g_799 = 6; (g_799 >= 0); g_799 -= 1)
            {
                int8_t l_2146 = 0xE1L;
                int32_t l_2169 = 0x89D2E746L;
                int32_t l_2172 = 0xDB2A69E5L;
                for (g_1317 = 0; (g_1317 <= 0); g_1317 += 1)
                {
                    int32_t l_2170 = (-9L);
                    int64_t * const *l_2171 = &g_522;
                    int32_t l_2176 = 0x78B9D92EL;
                    int i, j;
                    for (g_57 = 9; (g_57 >= 0); g_57 -= 1)
                    {
                        int i;
                        if (g_1659[(g_1317 + 3)])
                            break;
                        if (g_1183[(g_1317 + 3)])
                            continue;
                        l_2141 = (void*)0;
                    }
                    for (g_2036 = 0; (g_2036 <= 9); g_2036 += 1)
                    {
                        uint64_t *l_2147 = &g_357[4][2];
                        int32_t *l_2150 = &g_1001;
                        int i;
                        (*l_2150) = (0x33L <= (safe_rshift_func_int8_t_s_u(2L, (!(g_154[g_1317] < (((g_1659[(g_1317 + 1)] = g_154[g_1317]) || l_2146) > (++(*l_2147))))))));
                    }
                    if ((l_2172 &= (0x7CL && (safe_rshift_func_uint16_t_u_u((((&g_1294[g_1317][(g_1317 + 1)] == (void*)0) != (safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((((((safe_sub_func_int32_t_s_s(((l_2160[4] , ((*p_13) , ((l_2170 = (0L >= (safe_rshift_func_int16_t_s_u(((((safe_lshift_func_uint16_t_u_s(l_2146, (safe_mod_func_int64_t_s_s((p_12 | ((safe_mul_func_uint8_t_u_u(1UL, 1L)) != l_2169)), p_12)))) , l_2108) <= 18446744073709551615UL) < 0L), 12)))) || l_2170))) > p_12), 0x971F6DC7L)) , l_2171) == &g_522) , l_2169) == p_12), 6)), (*g_232)))))) >= 3UL), p_12)))))
                    {
                        return l_2109;
                    }
                    else
                    {
                        uint8_t l_2173[2][8] = {{255UL,253UL,253UL,255UL,253UL,253UL,255UL,253UL},{255UL,255UL,0x5EL,255UL,255UL,0x5EL,255UL,255UL}};
                        int32_t *l_2175[1];
                        const int32_t **l_2177 = (void*)0;
                        const int32_t *l_2179 = &l_2160[4];
                        const int32_t **l_2178 = &l_2179;
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_2175[i] = (void*)0;
                        l_2109 |= (l_2173[1][2] & (!((*g_232) && 0L)));
                        l_2176 &= ((l_2170 = 18446744073709551615UL) , 0xEF2AB172L);
                        (*l_2178) = p_10;
                        return (**g_1976);
                    }
                }
            }
            l_2184 = (safe_div_func_int8_t_s_s(l_2108, (~g_2183)));
        }
        if ((safe_lshift_func_uint16_t_u_u(p_12, 2)))
        {
            uint32_t l_2187 = 18446744073709551615UL;
            int32_t l_2188 = (-5L);
            int32_t l_2195 = 0x26833D6DL;
            int8_t *l_2196 = (void*)0;
            int8_t *l_2197 = &g_301;
            int32_t l_2200 = 0x3CFF8036L;
            uint8_t l_2244 = 0x44L;
            uint32_t l_2272 = 4294967286UL;
            l_2188 = l_2187;
            if ((safe_rshift_func_uint8_t_u_s(0xFBL, (p_12 == ((safe_rshift_func_int8_t_s_s((0x0BE5C6C1A5C4FC7ELL | (l_2188 = l_2187)), p_12)) ^ (safe_mod_func_int32_t_s_s((((*l_2197) = (l_2195 = p_12)) & ((*g_232) = (safe_div_func_int8_t_s_s((l_2200 = (l_2101[4] = (-6L))), l_2187)))), ((p_12 <= p_12) & 9L))))))))
            {
                uint32_t l_2211 = 2UL;
                int32_t l_2239 = 0x7EB0CCB4L;
                int32_t l_2240 = 0x1B9B1258L;
                uint64_t *l_2241[5] = {&g_1659[6],&g_1659[6],&g_1659[6],&g_1659[6],&g_1659[6]};
                uint32_t *l_2246 = &g_78;
                uint32_t *l_2251 = &l_2243;
                int i;
                l_2188 |= (safe_lshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((g_288 &= ((safe_lshift_func_int16_t_s_s(l_2211, (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((~(safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((l_2211 == 0xDBL), ((((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s(l_2211, 12)) , ((((l_2184 = ((~((l_2240 &= (safe_rshift_func_uint8_t_u_u(0xA0L, (safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s((65532UL ^ ((safe_div_func_int8_t_s_s(((&g_1626[1] != (((+((l_2239 |= (safe_lshift_func_uint8_t_u_s(((g_2086 >= (l_2195 & l_2211)) <= l_2184), l_2211))) && p_12)) > 0xAAL) , (void*)0)) & (*g_232)), (*g_232))) < g_1552)), (*p_10))), p_12))))) <= p_12)) , p_12)) | p_12) >= l_2187) >= p_12)), 14)) <= g_221) , &g_1061) != l_2242))), p_12)), l_2243))) == p_12), 13)), l_2200)))) && p_12)) ^ l_2244) & (-5L)), 3)), (*g_232))) >= (-1L)), 0xC11BF2623427A375LL)), 1));
                l_2188 = ((g_2245[1] == &l_2242) ^ (((p_12 && p_12) ^ ((p_12 != ((*l_2246) = l_2240)) | (safe_add_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s(l_2244, 2)) == ((((*l_2251) = p_12) & (l_2240 ^ p_12)) && 1L)) != p_12), p_12)))) && l_2244));
            }
            else
            {
                uint64_t l_2255 = 0x305C69D7AD1BF97CLL;
                int32_t l_2257 = (-1L);
                uint16_t l_2273 = 0x8AE1L;
                if (((0xE4F91567L | 1L) <= (safe_add_func_int16_t_s_s(p_12, p_12))))
                {
                    uint32_t l_2254 = 18446744073709551615UL;
                    l_2254 = l_2122;
                }
                else
                {
                    int32_t *l_2256[4];
                    uint64_t *l_2274 = &l_2255;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2256[i] = &l_2184;
                    l_2257 = l_2255;
                    (*g_434) = func_43(l_2256[1], l_2243);
                    if ((l_2195 >= (l_2195 ^ (((*l_2274) |= ((safe_add_func_uint16_t_u_u(p_12, 0UL)) , (g_1626[0] & (safe_unary_minus_func_int16_t_s(((l_2272 = ((((safe_lshift_func_uint16_t_u_u((((g_2263 , ((safe_mul_func_int8_t_s_s(p_12, (safe_mul_func_int16_t_s_s(p_12, (safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s(((((((g_1204[0][3] , l_2243) | p_12) , l_2195) || p_12) , p_12) || l_2257), l_2200)), p_12)))))) , l_2187)) ^ g_2263) == p_12), 10)) , l_2257) != 0x9823EF2BL) <= 0x04L)) ^ l_2273)))))) == 18446744073709551612UL))))
                    {
                        uint32_t l_2287[7];
                        int32_t l_2288 = 0L;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_2287[i] = 18446744073709551608UL;
                        (**g_433) = p_14;
                        l_2288 = (safe_mul_func_int8_t_s_s((-10L), (g_2245[3] != g_2245[3])));
                        (*g_434) = &l_2195;
                    }
                    else
                    {
                        if ((**g_434))
                            break;
                    }
                }
                for (g_1317 = 0; (g_1317 == 17); g_1317 = safe_add_func_int32_t_s_s(g_1317, 1))
                {
                    int32_t *l_2297 = &g_2263;
                    (*l_2297) |= ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(l_2160[4], 6)), 7)) > p_12);
                }
            }
            return (*g_1977);
        }
        else
        {
            int32_t *l_2298[9] = {&g_54,&g_54,&g_54,&g_54,&g_54,&g_54,&g_54,&g_54,&g_54};
            int16_t l_2339 = 0L;
            uint32_t ***l_2368 = &g_1061;
            uint32_t ***l_2372 = &g_1061;
            uint32_t ***l_2373 = &g_1061;
            const int16_t l_2405 = 0x6773L;
            uint32_t l_2592 = 0UL;
            int32_t * const *l_2594 = &g_1977;
            int64_t **l_2618 = &g_522;
            uint32_t l_2621 = 1UL;
            int i;
            (*g_434) = l_2298[3];
            for (l_2122 = 0; (l_2122 <= 1); l_2122 += 1)
            {
                uint8_t l_2315 = 0x29L;
                const int32_t *l_2321 = (void*)0;
                int32_t l_2326 = 0x38A27B24L;
                int32_t l_2327 = (-10L);
                int32_t l_2330 = 0x18E01868L;
                int32_t l_2332 = 5L;
                int32_t l_2345[7] = {0x38D3CA3CL,4L,4L,0x38D3CA3CL,4L,4L,0x38D3CA3CL};
                int i;
                g_2299 |= (*g_67);
            }
            for (l_2407 = 0; (l_2407 <= 2); l_2407 += 1)
            {
                int16_t l_2458[5][8][3] = {{{0xB36AL,0xCDCFL,(-1L)},{(-7L),(-1L),(-7L)},{0xB36AL,0xE808L,(-1L)},{(-7L),0xA567L,0xE14AL},{0xB36AL,(-1L),0xB36AL},{(-7L),0xAAE4L,0xFA75L},{0xB36AL,0xCDCFL,(-1L)},{(-7L),(-1L),(-7L)}},{{0xB36AL,0xE808L,(-1L)},{(-7L),0xA567L,0xE14AL},{0xB36AL,(-1L),0xB36AL},{(-7L),0xAAE4L,0xFA75L},{0xB36AL,0xCDCFL,(-1L)},{(-7L),(-1L),(-7L)},{0xB36AL,0xE808L,(-1L)},{(-7L),0xA567L,0xE14AL}},{{0xB36AL,(-1L),0xB36AL},{(-7L),0xAAE4L,0xFA75L},{0xB36AL,0xCDCFL,(-1L)},{(-7L),(-1L),(-7L)},{0xB36AL,0xE808L,(-1L)},{(-7L),0xA567L,0xE14AL},{0xB36AL,(-1L),0xB36AL},{(-7L),0xAAE4L,0xFA75L}},{{0xB36AL,0xCDCFL,(-1L)},{(-7L),(-1L),(-7L)},{0xB36AL,0xE808L,(-1L)},{(-7L),0xA567L,0xE14AL},{0xB36AL,(-1L),0xBF85L},{(-5L),(-7L),(-2L)},{0xBF85L,(-1L),0x0A1BL},{(-5L),0xFA75L,(-5L)}},{{0xBF85L,0xB36AL,0x550CL},{(-5L),0xE14AL,9L},{0xBF85L,(-1L),0xBF85L},{(-5L),(-7L),(-2L)},{0xBF85L,(-1L),0x0A1BL},{(-5L),0xFA75L,(-5L)},{0xBF85L,0xB36AL,0x550CL},{(-5L),0xE14AL,9L}}};
                int32_t l_2462 = 1L;
                int32_t l_2463 = 0xC6C6CD64L;
                int32_t l_2472 = 0L;
                int64_t *l_2475 = &g_1723;
                const uint64_t *l_2493[8][4] = {{&g_1659[7],&g_1659[7],&g_1659[6],&g_1659[6]},{&g_1659[7],&g_1659[7],&g_1659[6],&g_1659[6]},{&g_1659[7],&g_1659[7],&g_1659[6],&g_1659[6]},{&g_1659[7],&g_1659[7],&g_1659[6],&g_1659[6]},{&g_1659[7],&g_1659[7],&g_1659[6],&g_1659[6]},{&g_1659[7],&g_1659[7],&g_1659[6],&g_1659[6]},{&g_1659[7],&g_1659[7],&g_1659[6],&g_1659[6]},{&g_1659[7],&g_1659[7],&g_1659[6],&g_1659[6]}};
                const uint64_t ** const l_2492 = &l_2493[7][0];
                uint32_t ***l_2499 = &g_1061;
                uint32_t **l_2522[4][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                int i, j, k;
                l_2459++;
                l_2464++;
            }
            for (l_2374 = (-22); (l_2374 < 24); ++l_2374)
            {
                uint64_t l_2532 = 9UL;
                int64_t l_2543 = 5L;
                int32_t l_2550[5];
                uint32_t *l_2562[5] = {&l_2528[0][1][0],&l_2528[0][1][0],&l_2528[0][1][0],&l_2528[0][1][0],&l_2528[0][1][0]};
                uint32_t **l_2561 = &l_2562[4];
                uint32_t ***l_2560 = &l_2561;
                int64_t ** const * const l_2589[2] = {&g_521,&g_521};
                int32_t l_2615 = (-1L);
                int i;
                for (i = 0; i < 5; i++)
                    l_2550[i] = 0x516BA491L;
                ++l_2532;
                (*g_67) = (((safe_rshift_func_int8_t_s_u(((((safe_lshift_func_int8_t_s_s(p_12, 3)) || (safe_sub_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u(g_154[0], p_12)) > (l_2543 < (safe_add_func_uint64_t_u_u((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s((l_2550[3] = p_12), ((0x364B43171930937FLL == g_299) && (~(safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((((*l_2560) = ((*l_2373) = ((((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((**g_434), (***g_433))), (*g_232))) > 1UL) , 0x34L) , (*l_2373)))) != l_2563), (*g_232))), 14)))))), g_173[2][0][8])), 18446744073709551615UL)))), l_2532))) && 0xE541F4F6CBA468E9LL) != p_12), 7)) , (void*)0) == (void*)0);
                for (l_2122 = 0; (l_2122 <= 4); l_2122 += 1)
                {
                    int16_t *l_2571[9][7] = {{&l_2450,(void*)0,&g_300,&l_2340,&g_1552,(void*)0,&l_2339},{&g_1552,&l_2340,&g_300,(void*)0,&l_2450,(void*)0,(void*)0},{&l_2450,&l_2340,(void*)0,&l_2340,&l_2450,&g_1552,&l_2339},{&l_2450,(void*)0,&g_300,&l_2340,&g_1552,(void*)0,&l_2339},{&g_1552,&l_2340,&g_300,(void*)0,&l_2450,(void*)0,(void*)0},{&l_2450,&l_2340,(void*)0,&l_2340,&l_2450,&g_1552,&l_2339},{&l_2450,(void*)0,&g_300,&l_2340,&g_1552,(void*)0,&l_2339},{&g_1552,&l_2340,&g_300,(void*)0,&l_2450,(void*)0,(void*)0},{&l_2450,&l_2340,(void*)0,&l_2340,&l_2450,&g_1552,&l_2339}};
                    int32_t ***l_2588 = &g_434;
                    int8_t *l_2590[9] = {&g_298,&g_298,&g_298,&g_298,&g_298,&g_298,&g_298,&g_298,&g_298};
                    int i, j;
                }
            }
        }
    }
    return (**g_1976);
}







static int32_t * func_15(int32_t * p_16, const int16_t p_17, int32_t p_18)
{
    uint16_t l_1791 = 3UL;
    int32_t *l_1794 = &g_269;
    int32_t l_1823[3][9][7] = {{{0x76E1A274L,(-1L),1L,0x63DC6EB4L,1L,(-1L),0x76E1A274L},{(-7L),0x364F42E2L,0x22B98F70L,(-7L),0xB3F7248CL,0x22B98F70L,0x22B98F70L},{0xB1D4AF57L,0x63DC6EB4L,0x77AA595CL,0x63DC6EB4L,0xB1D4AF57L,0x10283E06L,0xB1D4AF57L},{0xB3F7248CL,(-7L),0x22B98F70L,0x364F42E2L,(-7L),(-7L),0x364F42E2L},{1L,0x63DC6EB4L,1L,(-1L),0x76E1A274L,(-1L),1L},{0xB3F7248CL,0x364F42E2L,0x364F42E2L,(-7L),(-7L),0x364F42E2L,0x22B98F70L},{0x733F93A0L,0x10283E06L,0x77AA595CL,(-1L),0x77AA595CL,0x10283E06L,0x733F93A0L},{(-1L),(-7L),0x256029CEL,0x256029CEL,(-7L),(-1L),0x256029CEL},{1L,(-1L),0x76E1A274L,(-1L),1L,0x63DC6EB4L,1L}},{{(-7L),0x256029CEL,0x256029CEL,(-7L),(-1L),0x256029CEL,0x22B98F70L},{0x77AA595CL,(-1L),0x77AA595CL,0x10283E06L,0x733F93A0L,0x10283E06L,0x77AA595CL},{(-7L),(-7L),0x364F42E2L,0x22B98F70L,(-7L),0xB3F7248CL,0x22B98F70L},{1L,0x10283E06L,0x5D89BD2BL,(-1L),0x5D89BD2BL,0x10283E06L,1L},{(-1L),0x22B98F70L,0x256029CEL,(-1L),(-7L),0x256029CEL,0x256029CEL},{0x733F93A0L,(-1L),0xB1D4AF57L,(-1L),0x733F93A0L,0x63DC6EB4L,0x733F93A0L},{(-7L),(-1L),0x256029CEL,0x22B98F70L,(-1L),(-1L),0x22B98F70L},{0x5D89BD2BL,(-1L),0x5D89BD2BL,0x10283E06L,1L,0x10283E06L,0x5D89BD2BL},{(-7L),0x22B98F70L,0x364F42E2L,(-7L),(-7L),0x364F42E2L,0x22B98F70L}},{{0x733F93A0L,0x10283E06L,0x77AA595CL,(-1L),0x77AA595CL,0x10283E06L,0x733F93A0L},{(-1L),(-7L),0x256029CEL,0x256029CEL,(-7L),(-1L),0x256029CEL},{1L,(-1L),0x76E1A274L,(-1L),1L,0x63DC6EB4L,1L},{(-7L),0x256029CEL,0x256029CEL,(-7L),(-1L),0x256029CEL,0x22B98F70L},{0x77AA595CL,(-1L),0x77AA595CL,0x10283E06L,0x733F93A0L,0x10283E06L,0x77AA595CL},{(-7L),(-7L),0x364F42E2L,0x22B98F70L,(-7L),0xB3F7248CL,0x22B98F70L},{1L,0x10283E06L,0x5D89BD2BL,(-1L),0x5D89BD2BL,0x10283E06L,1L},{(-1L),0x22B98F70L,0x256029CEL,(-1L),(-7L),0x256029CEL,0x256029CEL},{0x733F93A0L,(-1L),0xB1D4AF57L,(-1L),0x733F93A0L,0x63DC6EB4L,0x733F93A0L}}};
    uint8_t l_1829 = 0x80L;
    uint64_t l_1853 = 18446744073709551609UL;
    uint16_t *l_1861 = &g_35[0];
    int16_t * const *l_1865 = &g_195;
    int16_t * const **l_1864 = &l_1865;
    int8_t *l_1869[9][10] = {{&g_301,&g_301,&g_296,&g_301,&g_296,&g_298,&g_301,&g_301,&g_296,&g_296},{&g_301,&g_296,&g_298,&g_298,&g_298,&g_298,&g_296,&g_301,&g_301,&g_301},{&g_301,&g_296,(void*)0,&g_301,(void*)0,&g_298,&g_298,&g_301,&g_298,&g_298},{&g_296,(void*)0,(void*)0,(void*)0,&g_296,&g_301,&g_301,&g_301,&g_296,&g_296},{&g_301,&g_296,&g_296,(void*)0,&g_298,&g_296,&g_296,&g_298,(void*)0,&g_296},{(void*)0,(void*)0,&g_296,&g_296,(void*)0,&g_296,&g_298,&g_301,&g_301,&g_296},{&g_301,(void*)0,&g_298,&g_298,&g_301,&g_298,&g_298,(void*)0,&g_301,(void*)0},{&g_296,(void*)0,&g_301,(void*)0,&g_296,&g_298,&g_296,&g_301,&g_301,&g_296},{(void*)0,&g_296,(void*)0,(void*)0,&g_296,(void*)0,&g_301,&g_298,&g_301,&g_296}};
    uint8_t l_1872 = 248UL;
    int32_t *l_1873[2][10] = {{&g_299,&g_303[2][4],(void*)0,&g_303[2][4],&g_299,&g_299,&g_303[2][4],(void*)0,&g_303[2][4],&g_299},{&g_299,&g_303[2][4],(void*)0,&g_303[2][4],&g_299,&g_299,&g_303[2][4],(void*)0,&g_303[2][4],&g_299}};
    int32_t l_1874 = 5L;
    uint8_t *l_1875[5][4][7] = {{{&g_289,&g_305,&g_289,&g_305,&g_289,&g_289,&g_305},{(void*)0,&l_1872,(void*)0,&g_305,&g_305,(void*)0,&l_1872},{&g_305,&l_1872,&g_289,&g_289,&l_1872,&g_305,&l_1872},{(void*)0,&g_305,&g_305,(void*)0,&l_1872,(void*)0,&g_305}},{{&g_289,&g_289,&g_305,&g_289,&g_305,&g_289,&g_289},{&g_289,&g_305,&g_289,&g_305,&g_289,&g_289,&g_305},{(void*)0,&l_1872,(void*)0,&g_305,&g_305,(void*)0,&l_1872},{&g_305,&l_1872,&g_289,&g_289,&l_1872,&g_305,&l_1872}},{{(void*)0,&g_305,&g_305,(void*)0,&l_1872,(void*)0,&g_305},{&g_289,&g_289,&g_305,&g_289,&g_305,&g_289,&g_289},{&g_289,&g_305,&g_289,&g_305,&g_289,&g_289,&g_305},{(void*)0,&l_1872,(void*)0,&g_305,&g_305,(void*)0,&l_1872}},{{&g_305,&l_1872,&g_289,&g_289,&l_1872,&g_305,&l_1872},{(void*)0,&g_305,&g_305,(void*)0,&l_1872,(void*)0,&g_305},{&g_289,&g_289,&g_305,&g_289,&g_305,&g_289,&g_289},{&g_289,&g_305,&g_289,&g_305,&g_289,&g_289,&g_305}},{{(void*)0,&l_1872,(void*)0,&g_305,&g_305,(void*)0,&l_1872},{&g_305,&g_289,&l_1872,&l_1872,&g_289,(void*)0,&g_289},{&g_289,(void*)0,(void*)0,&g_289,&g_289,&g_289,(void*)0},{&g_305,&g_305,(void*)0,&l_1872,(void*)0,&g_305,&g_305}}};
    uint16_t l_1876 = 0xCECFL;
    uint32_t **l_1878[1][7];
    int64_t **l_1941 = &g_522;
    int64_t ***l_1940 = &l_1941;
    uint32_t l_1943 = 4294967295UL;
    int16_t l_1991 = 4L;
    uint16_t ****l_2081 = &g_1395;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_1878[i][j] = (void*)0;
    }
    for (g_1713 = 0; (g_1713 == 46); g_1713 = safe_add_func_uint32_t_u_u(g_1713, 8))
    {
        int32_t *l_1787 = (void*)0;
        int32_t *l_1788 = &g_1204[2][2];
        int32_t *l_1789 = &g_57;
        int32_t *l_1790[8];
        uint8_t l_1826[4][2];
        int16_t l_1852 = 0L;
        int i, j;
        for (i = 0; i < 8; i++)
            l_1790[i] = &g_269;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_1826[i][j] = 0x6AL;
        }
        l_1791--;
        l_1790[7] = (p_16 = l_1794);
        (*p_16) = (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(p_18, 7)) , (((void*)0 == &g_1713) || (safe_add_func_uint64_t_u_u(((((((safe_sub_func_int16_t_s_s((safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(p_18, (safe_div_func_uint32_t_u_u(4294967295UL, g_1713)))), (safe_lshift_func_int16_t_s_u((((safe_div_func_int8_t_s_s((0xCAL == (&l_1789 == (p_18 , (void*)0))), (*g_232))) , p_17) >= (*l_1789)), 4)))), g_4)), p_18)) , p_17) , g_506) , (*l_1794)) != p_18) >= 0xCE6EC742L), p_17)))), 4));
        for (g_289 = 28; (g_289 == 40); ++g_289)
        {
            int8_t l_1817 = (-1L);
            int32_t l_1818 = 0xA0284D84L;
            int32_t l_1819 = 0x0C5EFE8BL;
            int32_t l_1820 = 0x8A6C595AL;
            int32_t l_1821 = 0x894CC994L;
            int32_t l_1822 = 0x9A417871L;
            int32_t l_1824 = 1L;
            int32_t l_1825 = 0xACB7BF89L;
            int16_t *l_1834 = &g_1552;
            uint32_t *l_1847 = &g_149;
            uint8_t *l_1850 = &g_221;
            int8_t ****l_1851[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            l_1826[0][0]++;
            l_1829 &= ((*l_1794) = l_1817);
            l_1825 = (((g_506 = (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(p_17, 14)) == (((*l_1834) = l_1822) , (p_18 < ((l_1853 &= ((safe_unary_minus_func_int64_t_s(((*l_1788) , ((g_173[3][1][6] &= (*l_1794)) < (((0UL <= (!((safe_add_func_int8_t_s_s(p_18, (((((*l_1850) &= ((safe_lshift_func_uint8_t_u_s(((*g_232) |= (safe_div_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((-1L) ^ (--(*l_1847))), (l_1819 = ((-1L) && p_18)))) > p_17), p_18))), 5)) || (*g_232))) , &g_1391[2]) == l_1851[0]) , 1L))) <= l_1852))) != p_18) > g_78))))) | p_18)) && (*l_1794))))), 251UL))) != g_305) & p_17);
        }
    }
    if (((((((safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((--(*g_232)), ((g_305 = ((~((((*l_1861) ^= p_17) == (safe_lshift_func_int16_t_s_u((l_1864 == (void*)0), ((g_1868 , (((*g_1293) = l_1869[0][8]) != l_1869[6][1])) <= (((((l_1874 |= (safe_rshift_func_uint8_t_u_s(l_1872, 5))) , (g_289 = ((*l_1794) , ((void*)0 == (**g_1395))))) ^ 1L) >= (-1L)) >= 9UL))))) , (*l_1794))) , p_18)) != (*l_1794)))), 1L)) > l_1876) || 1UL) < (*l_1794)) >= 65535UL) , (*l_1794)))
    {
        int32_t *l_1877 = &l_1823[2][2][4];
        uint32_t ***l_1879 = (void*)0;
        uint32_t ***l_1880 = (void*)0;
        uint32_t ***l_1881 = (void*)0;
        uint32_t ***l_1882 = &l_1878[0][4];
        (**g_433) = l_1877;
        (*l_1882) = l_1878[0][6];
        (**g_434) = (***g_433);
    }
    else
    {
        uint32_t *l_1895 = (void*)0;
        uint32_t **l_1894[7] = {&l_1895,&l_1895,&l_1895,&l_1895,&l_1895,&l_1895,&l_1895};
        int32_t l_1896 = 0x0401452AL;
        uint64_t *l_1897 = (void*)0;
        uint64_t *l_1898 = &g_357[4][2];
        uint64_t *l_1899 = &g_1659[1];
        int64_t **l_1939 = &g_522;
        int64_t ***l_1938 = &l_1939;
        int32_t l_1942 = 0L;
        int32_t l_1944[2][8][4] = {{{(-1L),0xAC50632BL,0xAC50632BL,(-1L)},{(-1L),0xAC50632BL,0xAC50632BL,(-1L)},{(-1L),0xAC50632BL,0xAC50632BL,(-1L)},{(-1L),0xAC50632BL,0xAC50632BL,(-1L)},{(-1L),0xAC50632BL,0xAC50632BL,(-1L)},{(-1L),0xAC50632BL,0xAC50632BL,(-1L)},{(-1L),0xAC50632BL,0xAC50632BL,(-1L)},{(-1L),0xAC50632BL,0xAC50632BL,(-1L)}},{{(-1L),0xAC50632BL,0xAC50632BL,(-1L)},{(-1L),0xAC50632BL,0xAC50632BL,(-1L)},{(-1L),0xAC50632BL,0xAC50632BL,(-1L)},{(-1L),0xAC50632BL,0xAC50632BL,(-1L)},{(-1L),0xAC50632BL,0xAC50632BL,(-1L)},{(-1L),0xAC50632BL,0xAC50632BL,(-1L)},{(-1L),0xAC50632BL,0xAC50632BL,(-1L)},{(-1L),0xAC50632BL,0xAC50632BL,(-1L)}}};
        uint16_t **l_1974 = &g_1013;
        int16_t l_1992 = 0xD59AL;
        uint16_t l_2046 = 1UL;
        int i, j, k;
        if ((((safe_add_func_int64_t_s_s((((~0xD723B3521C360BFCLL) || 0x17L) && p_18), ((*l_1899) = (((g_173[3][1][5] = p_17) ^ ((*l_1898) ^= (((safe_mul_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((*l_1794), 0)) == 0x26D9060DL) <= (safe_add_func_int16_t_s_s((((((*l_1794) > (g_1893 = (~(*l_1794)))) , l_1894[6]) != g_1061) | 1L), (*l_1794)))), 0xD020L)) , l_1896) && l_1896))) == (-1L))))) , l_1896) , (*p_16)))
        {
            uint64_t l_1902 = 0x841E008CF09CACADLL;
            uint32_t ***l_1926 = &l_1894[5];
            uint32_t ****l_1925 = &l_1926;
            int32_t *l_1927 = &l_1823[1][5][0];
            int32_t **l_1945 = (void*)0;
            int32_t **l_1946 = &l_1873[0][5];
            int32_t *l_1948[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t **l_1947 = &l_1948[4];
            int i;
            for (g_1552 = 0; (g_1552 != 0); g_1552 = safe_add_func_uint8_t_u_u(g_1552, 9))
            {
                uint8_t l_1906 = 0xF0L;
                int16_t *l_1907 = &g_300;
                int32_t l_1916 = 0x0D603D9CL;
                int64_t *l_1917 = &g_173[2][0][8];
                uint16_t ** const l_1918 = &l_1861;
                uint32_t *l_1919 = &g_1678;
                int64_t *l_1920 = (void*)0;
                int64_t *l_1921 = &g_154[0];
                (*l_1794) |= l_1902;
            }
            (*l_1925) = &g_1061;
            (*l_1927) = ((((((*l_1947) = ((*l_1946) = &l_1874)) != &p_18) ^ p_17) <= (*g_232)) || 5UL);
            return p_16;
        }
        else
        {
            uint16_t l_1961 = 0x466AL;
            uint32_t *l_1966[6][10] = {{(void*)0,&g_1317,&g_1466,&g_1626[0],&g_1626[0],&g_1466,&g_1317,(void*)0,&g_1317,&g_1466},{&g_1183[0],&g_1183[1],&g_1626[0],&g_1183[1],&g_1183[0],&g_1466,&g_1466,&g_1183[0],&g_1183[1],&g_1626[0]},{(void*)0,(void*)0,&g_1626[0],&g_1183[0],&g_1626[0],&g_1183[0],&g_1626[0],(void*)0,(void*)0,&g_1626[0]},{&g_1183[1],&g_1183[0],&g_1466,&g_1466,&g_1183[0],&g_1183[1],&g_1626[0],&g_1183[1],&g_1183[0],&g_1466},{&g_1317,(void*)0,&g_1317,&g_1466,&g_1626[0],&g_1626[0],&g_1466,&g_1317,(void*)0,&g_1317},{&g_1317,&g_1183[1],(void*)0,&g_1183[0],(void*)0,&g_1183[1],&g_1317,&g_1317,&g_1183[1],(void*)0}};
            int32_t l_1973[9][7][4] = {{{3L,1L,0x8998982CL,(-10L)},{0L,0x8100BB7BL,0xC5E53948L,1L},{1L,0x3EB9FA12L,(-8L),1L},{0x514C1478L,0x8915264AL,0x473A0824L,0xC7B54920L},{1L,0L,0x6CE61C8FL,(-3L)},{1L,0xDA9C0529L,0xAE13CC82L,0x989B1FD0L},{5L,1L,1L,0xC7B54920L}},{{8L,1L,0x2352D3A3L,(-8L)},{0x9BB1261CL,5L,0x2F26E64CL,(-10L)},{0L,0x8998982CL,0x4899D49BL,1L},{0x473A0824L,0L,(-2L),0xDA9C0529L},{0x58244C1AL,0x3E45D68BL,(-3L),0x514C1478L},{0x05E8CAF8L,0L,0L,0x65DDF543L},{(-8L),(-6L),(-3L),(-1L)}},{{0x3EB9FA12L,0x97216161L,(-2L),0xD1930431L},{0x05E8CAF8L,(-1L),0xC5E53948L,0L},{7L,0xC7B54920L,(-2L),0L},{0xBD5F32B2L,0xE3FB39F5L,0x05E8CAF8L,0x756454C7L},{0L,3L,1L,1L},{0xD7BD2879L,0xD7BD2879L,0x2352D3A3L,7L},{3L,0x6CE61C8FL,0x4899D49BL,0x514C1478L}},{{2L,0xDA9C0529L,0xD23620A9L,0x4899D49BL},{(-10L),0xDA9C0529L,2L,0x514C1478L},{0xDA9C0529L,0x6CE61C8FL,(-2L),7L},{0x2F26E64CL,0xD7BD2879L,5L,1L},{0x3EB9FA12L,3L,0x5ABDCD78L,0x756454C7L},{(-1L),0xE3FB39F5L,2L,0L},{0xD23620A9L,0xC7B54920L,0x65DDF543L,0L}},{{0x473A0824L,(-1L),0x4C92F228L,0xD1930431L},{3L,0x97216161L,1L,(-1L)},{0x28728BCCL,(-6L),0x2F26E64CL,0x65DDF543L},{(-6L),0L,0x4C92F228L,0x514C1478L},{0x76A45FFDL,0x3E45D68BL,0x4FC75C29L,0xDA9C0529L},{0xD23620A9L,0L,0xC5E53948L,1L},{0xDA9C0529L,0x8998982CL,0x5ABDCD78L,(-10L)}},{{(-8L),5L,0x28728BCCL,(-8L)},{0x2F26E64CL,3L,0x911F29ABL,0x20B499C5L},{0L,(-1L),2L,1L},{0x58244C1AL,7L,0x65DDF543L,1L},{2L,0x3EB9FA12L,0x05E8CAF8L,0x20B499C5L},{(-6L),0x1C5B4686L,0x2352D3A3L,(-1L)},{(-6L),5L,0xE3FB39F5L,7L}},{{0L,5L,0x3E45D68BL,1L},{0x76A45FFDL,(-1L),(-2L),(-1L)},{(-10L),0x3E45D68BL,2L,3L},{0x05E8CAF8L,0x8998982CL,0x911F29ABL,0x65DDF543L},{(-1L),0xD7BD2879L,(-3L),0x3EB9FA12L},{(-1L),0x97216161L,0x911F29ABL,0x62CD08FBL},{0x05E8CAF8L,0x3EB9FA12L,2L,0L}},{{(-10L),0xC7181C00L,(-2L),1L},{0x76A45FFDL,0xE3FB39F5L,0x3E45D68BL,0xD1930431L},{0L,0x514C1478L,0xE3FB39F5L,1L},{(-6L),0x9BB1261CL,0x2352D3A3L,(-10L)},{(-6L),0x6CE61C8FL,0x05E8CAF8L,3L},{2L,(-1L),0x65DDF543L,0x4899D49BL},{0L,(-8L),3L,0xE3FB39F5L}},{{(-8L),2L,0x8915264AL,0L},{0x44266A49L,(-1L),1L,0x989B1FD0L},{(-8L),0xE3FB39F5L,0x58244C1AL,0L},{7L,(-3L),0x5ABDCD78L,0x3E45D68BL},{(-3L),0x93DAB319L,1L,0xBB339711L},{(-2L),(-8L),0xBEA9F479L,0L},{0x65DDF543L,0x2352D3A3L,0x44266A49L,(-8L)}}};
            uint64_t l_1983 = 2UL;
            int16_t *l_2080 = &l_1992;
            int i, j, k;
            for (g_1001 = 24; (g_1001 != 1); g_1001--)
            {
                int64_t l_1975 = 0x9F3AC5CA6BB36F6ELL;
                int32_t l_1985 = (-1L);
                int32_t l_1987 = 0L;
                int32_t l_1988 = 0L;
                int32_t l_1990[8][4][2] = {{{1L,(-1L)},{0x553CF948L,0x0B99780EL},{0xB06CBED1L,(-1L)},{(-1L),(-1L)}},{{0xB06CBED1L,0x0B99780EL},{0x553CF948L,(-1L)},{1L,(-1L)},{0x553CF948L,0x0B99780EL}},{{0xB06CBED1L,(-1L)},{(-1L),(-1L)},{0xB06CBED1L,0x0B99780EL},{0x553CF948L,(-1L)}},{{1L,(-1L)},{0x553CF948L,0x0B99780EL},{0xB06CBED1L,(-1L)},{(-1L),(-1L)}},{{0xB06CBED1L,0x0B99780EL},{0x553CF948L,(-1L)},{1L,(-1L)},{0x553CF948L,0x0B99780EL}},{{0xB06CBED1L,(-1L)},{(-1L),(-1L)},{0xB06CBED1L,0x0B99780EL},{0x553CF948L,(-1L)}},{{1L,(-1L)},{0x553CF948L,0x0B99780EL},{0xB06CBED1L,(-1L)},{(-1L),(-1L)}},{{0xB06CBED1L,0x0B99780EL},{0x553CF948L,(-1L)},{1L,(-1L)},{0x553CF948L,0x0B99780EL}}};
                int64_t l_1994 = 0x03DDDF84ED8EFAF1LL;
                int16_t *l_2068[1][3][3] = {{{&g_1552,&g_1552,&g_1552},{&g_1552,&g_1552,&g_1552},{&g_1552,&g_1552,&g_1552}}};
                int8_t ****l_2070 = &g_1391[2];
                int8_t *****l_2069[5][9] = {{&l_2070,(void*)0,&l_2070,&l_2070,&l_2070,&l_2070,&l_2070,&l_2070,&l_2070},{&l_2070,(void*)0,&l_2070,&l_2070,&l_2070,(void*)0,&l_2070,&l_2070,&l_2070},{&l_2070,&l_2070,&l_2070,&l_2070,&l_2070,(void*)0,&l_2070,&l_2070,&l_2070},{&l_2070,&l_2070,&l_2070,&l_2070,&l_2070,&l_2070,(void*)0,&l_2070,(void*)0},{&l_2070,&l_2070,&l_2070,&l_2070,&l_2070,&l_2070,&l_2070,&l_2070,&l_2070}};
                int i, j, k;
            }
            l_1973[6][4][0] = (+(((safe_sub_func_uint16_t_u_u(p_18, ((safe_mod_func_uint32_t_u_u(l_1973[8][0][2], 0x06489E3BL)) , ((*l_1794) = ((*l_2080) |= l_1944[0][7][0]))))) , l_2081) == l_2081));
            (*l_1794) ^= 0xD52B6C17L;
        }
        (*g_1394) = (*g_1394);
        l_1823[2][3][3] |= (l_1896 = (*l_1794));
    }
    return p_16;
}







static int32_t * func_19(int32_t * p_20, int32_t * const p_21, int32_t * p_22, int64_t p_23)
{
    int8_t l_1732[3][3][1] = {{{1L},{1L},{0xF3L}},{{1L},{1L},{0xF3L}},{{1L},{1L},{0xF3L}}};
    uint64_t *l_1735 = &g_506;
    int16_t *l_1750 = &g_1674;
    int32_t l_1751 = 0x21059395L;
    int32_t l_1752 = 0x7D199709L;
    uint32_t *l_1753 = &g_78;
    int32_t *l_1754 = &g_54;
    uint32_t l_1781 = 18446744073709551609UL;
    int32_t ****l_1784 = (void*)0;
    int i, j, k;
    (*l_1754) = (safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(((l_1732[0][2][0] || (safe_div_func_int32_t_s_s(((++(*l_1735)) & 1UL), (safe_sub_func_int8_t_s_s((l_1732[0][2][0] & l_1732[0][2][0]), ((l_1732[1][0][0] | (safe_mod_func_uint32_t_u_u((0x770BAF77EE58E404LL != ((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_1751 |= ((*l_1750) |= ((safe_rshift_func_uint8_t_u_s(p_23, 6)) | 0UL))), (((*l_1753) = ((l_1732[0][2][0] >= p_23) , l_1752)) & p_23))), p_23)) != g_1723) < 1UL), 0x2BL)) ^ p_23)), 0xAC354530L))) > 0xA8L)))))) && 9UL), l_1732[0][2][0])), 1)) ^ 0xA2EEBADA2865E37CLL), l_1732[2][0][0])), l_1732[2][0][0]));
    for (g_1678 = 0; (g_1678 <= 45); g_1678++)
    {
        int32_t *l_1757 = &g_1204[3][3];
        const uint8_t l_1762 = 1UL;
        int32_t l_1765[6][5][1] = {{{0x0BC04C7DL},{0x0BC04C7DL},{0x69994792L},{0x63359DF3L},{0x4804E7F7L}},{{0x69994792L},{0x4804E7F7L},{0x63359DF3L},{0x69994792L},{0x0BC04C7DL}},{{0x0BC04C7DL},{0x69994792L},{0x63359DF3L},{0x4804E7F7L},{0x69994792L}},{{0x4804E7F7L},{0x63359DF3L},{0x69994792L},{0x0BC04C7DL},{0x0BC04C7DL}},{{0x69994792L},{0x63359DF3L},{0x4804E7F7L},{0x69994792L},{0x4804E7F7L}},{{0x63359DF3L},{0x69994792L},{0x0BC04C7DL},{0x0BC04C7DL},{0x69994792L}}};
        uint16_t *l_1766 = &g_35[0];
        uint8_t l_1780 = 1UL;
        int i, j, k;
        (*g_434) = l_1757;
        (*l_1754) ^= (safe_sub_func_int64_t_s_s(((safe_div_func_int8_t_s_s((((l_1762 && ((safe_add_func_uint16_t_u_u(0xF177L, (((*l_1766)--) >= ((safe_unary_minus_func_int64_t_s(((*g_707) == (void*)0))) >= (safe_rshift_func_int16_t_s_u((*l_1757), 5)))))) | (((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s(p_23, g_305)), (*l_1757))), 0x6D96L)), 1L)) , p_23) , (*l_1757)))) , 0xB7A0EEBBL) <= l_1780), (-1L))) , p_23), l_1781));
        (***g_433) = 0L;
    }
    (*l_1754) |= ((safe_add_func_int32_t_s_s((254UL >= (0x4AF5L | p_23)), (*p_20))) >= (l_1784 != (*g_707)));
    return p_20;
}







static int32_t * func_24(int32_t * p_25)
{
    uint64_t l_26 = 0UL;
    uint32_t l_1532 = 0x793E9536L;
    int32_t l_1545[1];
    uint16_t l_1563 = 65534UL;
    uint16_t l_1589 = 0x4B13L;
    int64_t **l_1601[8] = {&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522};
    int64_t *** const l_1600[3] = {&l_1601[3],&l_1601[3],&l_1601[3]};
    int16_t ****l_1667 = &g_745;
    int16_t ***** const l_1666[8][8][4] = {{{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667}},{{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667}},{{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667}},{{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667}},{{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667}},{{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667}},{{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667}},{{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667},{(void*)0,&l_1667,(void*)0,&l_1667}}};
    uint8_t l_1690 = 0UL;
    int32_t *l_1709 = &g_269;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1545[i] = 0xCC87BB9EL;
    if (l_26)
    {
        int32_t *l_1471 = &g_4;
        int16_t *l_1523 = &g_300;
        int8_t ***l_1527 = &g_1293;
        int8_t ****l_1526 = &l_1527;
        int8_t *l_1528 = &g_296;
        int32_t *l_1531 = &g_799;
        int32_t *l_1533 = &g_269;
        const uint64_t l_1548 = 0UL;
        uint32_t l_1581 = 0x9BF62433L;
        int64_t l_1587 = 0x2A5D458B0F500FBDLL;
        int32_t l_1673 = 0xE1BABBEFL;
        int32_t l_1676 = 0xCD26B066L;
        int32_t l_1677[2];
        const int8_t l_1703 = 0xC8L;
        int i;
        for (i = 0; i < 2; i++)
            l_1677[i] = 0x73028292L;
        (*l_1533) = (l_1532 = ((*l_1531) = (safe_div_func_uint8_t_u_u(((((*l_1523) = func_29(func_32(g_4, l_26), l_1471)) && ((safe_lshift_func_int8_t_s_s((*l_1471), 0)) | ((*l_1528) = ((g_1391[2] = (void*)0) != ((*l_1526) = &g_1293))))) & (safe_mul_func_int16_t_s_s((l_26 & (*l_1471)), 0xB44BL))), 0xB6L))));
        for (g_506 = 0; (g_506 <= 12); g_506 = safe_add_func_uint32_t_u_u(g_506, 4))
        {
            int16_t l_1553[2];
            int32_t l_1593 = 1L;
            uint32_t ***l_1599 = &g_1061;
            uint32_t l_1606[7][4][4] = {{{0x392DF3E0L,18446744073709551607UL,0x8D944EAAL,0x4B14F0C5L},{0x392DF3E0L,0xE3AA5785L,0x6A84BC66L,0x7F145BBBL},{1UL,0x4B14F0C5L,0x189ACF9CL,3UL},{0xE3AA5785L,0x6BACF264L,0xE4C2B7F6L,18446744073709551606UL}},{{0x0FC53808L,1UL,18446744073709551615UL,18446744073709551615UL},{0x8D944EAAL,1UL,0x7F145BBBL,18446744073709551615UL},{0xC6FC992BL,0x6A84BC66L,0x6A84BC66L,0xC6FC992BL},{18446744073709551613UL,0xB59164ABL,0x2EABBC37L,0x4B14F0C5L}},{{0x6A84BC66L,0x6BACF264L,0x439890E8L,0x189ACF9CL},{1UL,0x0FC53808L,3UL,0x189ACF9CL},{0x8D944EAAL,0x6BACF264L,3UL,0x4B14F0C5L},{0xEE6220CBL,0xB59164ABL,18446744073709551615UL,0xC6FC992BL}},{{18446744073709551611UL,0x6A84BC66L,0x189ACF9CL,18446744073709551615UL},{0xB59164ABL,1UL,0x439890E8L,18446744073709551615UL},{18446744073709551613UL,1UL,0xE3AA5785L,18446744073709551606UL},{0x392DF3E0L,0x6BACF264L,0x392DF3E0L,3UL}},{{0xC6FC992BL,0x4B14F0C5L,3UL,0x7F145BBBL},{18446744073709551611UL,0xE3AA5785L,0xE4C2B7F6L,0x4B14F0C5L},{0x4B14F0C5L,18446744073709551607UL,0xE4C2B7F6L,18446744073709551615UL},{18446744073709551611UL,18446744073709551613UL,3UL,0xE4C2B7F6L}},{{0xC6FC992BL,1UL,0x392DF3E0L,0xB59164ABL},{0x392DF3E0L,0xB59164ABL,0xE3AA5785L,0xEE6220CBL},{18446744073709551613UL,0xE3AA5785L,0x439890E8L,3UL},{0xB59164ABL,1UL,0x189ACF9CL,0x189ACF9CL}},{{18446744073709551611UL,18446744073709551611UL,18446744073709551615UL,18446744073709551606UL},{0xEE6220CBL,18446744073709551607UL,3UL,0xB59164ABL},{0x8D944EAAL,0x6A84BC66L,3UL,3UL},{1UL,0x6A84BC66L,0x439890E8L,0xB59164ABL}}};
            int32_t l_1675[1][5][2] = {{{0xB9F1AAD1L,9L},{0xB9F1AAD1L,9L},{0xB9F1AAD1L,9L},{0xB9F1AAD1L,9L},{0xB9F1AAD1L,9L}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1553[i] = (-3L);
            for (g_269 = 0; (g_269 >= 0); g_269 = safe_add_func_int16_t_s_s(g_269, 1))
            {
                int32_t l_1544 = 0x5562A094L;
                int32_t l_1580 = 0xE09955E1L;
                for (g_288 = 0; (g_288 == 38); g_288 = safe_add_func_uint16_t_u_u(g_288, 9))
                {
                    return l_1471;
                }
                for (g_658 = 0; (g_658 <= 1); g_658 += 1)
                {
                    int64_t l_1540 = 0x264A5393E836F3C3LL;
                    int32_t *l_1554 = &g_1204[2][2];
                    uint32_t **l_1555 = (void*)0;
                    uint32_t *l_1557[1][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    uint32_t **l_1556 = &l_1557[0][5];
                    int64_t *l_1562 = &g_173[1][1][8];
                    int64_t l_1564 = 0x0BD5FE701FA1E753LL;
                    int i, j;
                    if ((*p_25))
                    {
                        uint16_t *l_1549[1][8][3] = {{{&g_767,&g_767,&g_767},{&g_767,&g_767,&g_767},{&g_767,&g_767,&g_767},{&g_767,&g_767,&g_767},{&g_767,&g_767,&g_767},{&g_767,&g_767,&g_767},{&g_767,&g_767,&g_767},{&g_767,&g_767,&g_767}}};
                        int32_t l_1550 = (-1L);
                        int16_t *l_1551 = &g_1552;
                        int i, j, k;
                        (*l_1531) ^= (l_26 ^ (l_1540 != ((((~(((safe_mul_func_int16_t_s_s((l_1545[0] ^= l_1544), (0xA20AB5D9L != (*l_1471)))) , (((((((-2L) > ((*l_1551) &= ((*l_1523) |= (0L ^ (l_1550 = (l_1545[0] = ((safe_div_func_int64_t_s_s((18446744073709551615UL & (0x68L == 0x15L)), 0xA0D37E9F46101FC6LL)) ^ l_1548))))))) != l_1544) && 0L) > l_1540) == (*p_25)) == (*g_232))) < 4294967295UL)) & l_1553[1]) ^ (*p_25)) > l_1544)));
                        if (l_1540)
                            continue;
                        if ((*p_25))
                            break;
                        (**g_433) = p_25;
                    }
                    else
                    {
                        (*l_1531) = 0x0C6E7DA9L;
                        (*g_434) = l_1554;
                        (**g_433) = (void*)0;
                    }
                    (*l_1554) = ((l_1554 == ((*l_1556) = p_25)) , (l_1564 = ((*l_1531) = (((*l_1562) = ((safe_add_func_int16_t_s_s(1L, l_1553[1])) || (((*l_1528) |= 0xCDL) | (safe_mul_func_uint16_t_u_u(((*l_1531) , 0x6669L), l_1545[0]))))) & (((((((1L || 0x6FDEEBD0DF8681A2LL) , l_1544) == (-1L)) != l_1563) < (*l_1471)) || (*l_1554)) ^ 3UL)))));
                    for (g_296 = 0; g_296 < 4; g_296 += 1)
                    {
                        for (g_305 = 0; g_305 < 4; g_305 += 1)
                        {
                            g_1204[g_296][g_305] = 4L;
                        }
                    }
                    for (l_26 = 0; (l_26 <= 0); l_26 += 1)
                    {
                        int32_t l_1572[6] = {(-8L),1L,(-8L),(-8L),1L,(-8L)};
                        const int16_t *l_1579[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1579[i] = &g_1552;
                        (*l_1554) = (((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((g_35[l_26] , (safe_rshift_func_int8_t_s_s(g_35[l_26], (+((((l_1572[5] = 0xBDL) && ((safe_lshift_func_uint16_t_u_s(((((*l_1471) , (safe_mul_func_int16_t_s_s(g_35[l_26], (~((!(l_1579[0] == (*g_1343))) , ((*l_1554) , ((l_1580 = (((0xE493L >= 1UL) ^ 0x30DA395FL) > (*l_1531))) , (*l_1471)))))))) , (*l_1554)) ^ 1L), 8)) >= 0UL)) || 0xF0L) > g_35[l_26]))))), (*l_1554))), 4)) && 0x7CE77735L) , l_1553[1]);
                    }
                }
            }
            for (g_1001 = 1; (g_1001 >= 0); g_1001 -= 1)
            {
                uint64_t l_1584 = 0xF645C9396FB0B388LL;
                l_1581++;
                for (g_915 = 0; (g_915 >= 0); g_915 -= 1)
                {
                    uint64_t l_1588[3];
                    uint64_t *l_1590 = &l_26;
                    uint32_t l_1594 = 0x1175E343L;
                    uint32_t *l_1595 = &g_658;
                    uint32_t *l_1596[10][2] = {{&g_149,&g_149},{&g_149,(void*)0},{&g_392,&g_78},{&g_149,&g_392},{&g_78,(void*)0},{&g_78,&g_392},{&g_149,&g_78},{&g_392,(void*)0},{&g_149,&g_149},{&g_149,&g_149}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1588[i] = 0UL;
                    (*g_434) = func_43(p_25, (((l_1584 , ((((safe_mul_func_int16_t_s_s(1L, (((l_1587 != l_1588[0]) ^ (l_1545[0] = (((*l_1531) && ((*l_1595) = (l_1594 &= ((((*l_1590) = l_1589) | (l_1593 = ((*p_25) , ((safe_sub_func_int8_t_s_s((-4L), 0x0CL)) || l_1563)))) , g_1466)))) == l_1545[0]))) > 249UL))) && l_1593) > g_1183[0]) & (*l_1471))) > l_1589) , 0x81F46AAFL));
                }
            }
            for (g_392 = 28; (g_392 > 55); g_392 = safe_add_func_uint16_t_u_u(g_392, 1))
            {
                uint64_t l_1618 = 18446744073709551615UL;
                int32_t l_1624 = 1L;
                int32_t l_1625[9][8] = {{(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L},{(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L},{(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L},{(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L},{(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L},{(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L},{(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L},{(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L},{(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L,(-10L),0x7F82B905L}};
                int i, j;
                if (((((*l_1471) != l_1532) ^ ((void*)0 == l_1599)) || (l_1600[1] != &l_1601[6])))
                {
                    uint64_t *l_1619 = &g_357[4][2];
                    int32_t l_1623 = (-1L);
                    uint16_t *l_1633 = (void*)0;
                    uint16_t *l_1634 = (void*)0;
                    uint16_t *l_1635 = &g_35[0];
                    uint32_t ***l_1656[8] = {&g_1061,&g_1061,&g_1061,&g_1061,&g_1061,&g_1061,&g_1061,&g_1061};
                    uint32_t *l_1657 = (void*)0;
                    uint32_t *l_1658[7] = {&g_920,&g_920,&l_1532,&g_920,&g_920,&l_1532,&g_920};
                    uint8_t *l_1660[10] = {&g_305,&g_305,&g_305,&g_305,&g_305,&g_305,&g_305,&g_305,&g_305,&g_305};
                    int32_t l_1661 = 0x337AE6EBL;
                    int32_t l_1662[3][7] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0x008FA38AL,0x008FA38AL,0x008FA38AL,0x008FA38AL,0x008FA38AL,0x008FA38AL,0x008FA38AL},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                    int32_t *l_1663 = &l_1624;
                    int i, j;
                    (*l_1533) ^= (((safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((l_1625[2][5] = (l_1606[1][3][1] , (safe_mul_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(0x09866B4B34D5438FLL, l_1606[6][2][3])), (((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((((~(l_1618 < l_1618)) , l_1619) == &g_357[4][2]) || ((!(l_1624 = ((safe_add_func_int8_t_s_s((l_1593 = l_1623), (l_1618 <= 246UL))) != l_1624))) > 0xEB6A68F4L)), 0x4EADF490L)), l_1553[1])), (-3L))) ^ g_1183[3]) <= l_1618))))) >= 0x5C16L), 0x74L)), g_1626[0])) | l_1623) | l_1623);
                    (*l_1533) &= (safe_lshift_func_int8_t_s_u((*l_1471), (safe_lshift_func_int16_t_s_u((l_1618 >= (l_1623 , (*l_1471))), 0))));
                    (*l_1531) = ((safe_div_func_int64_t_s_s((-6L), 1UL)) >= (--(*l_1635)));
                    (*l_1663) ^= (safe_div_func_uint32_t_u_u((l_1662[0][2] ^= (safe_mul_func_uint8_t_u_u((*g_232), (((safe_rshift_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(((-1L) ^ (l_1661 |= ((safe_mul_func_int8_t_s_s((((l_1623 = (((safe_rshift_func_int8_t_s_u(((*l_1528) ^= (((safe_sub_func_uint8_t_u_u(0UL, ((*l_1533) = (((*g_521) = ((g_1659[6] = (safe_add_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(((g_1383 = (void*)0) != ((((((void*)0 == &g_1341[6][1]) && l_1593) == (&g_1061 == l_1656[1])) | 0x1B96038DEC7E4F20LL) , (void*)0)), (*l_1471))) > l_1618), (*g_232)))) , &l_1587)) == (void*)0)))) < 0x925EL) >= 0xE4E00DC252370E29LL)), l_1563)) | 0xDFAAL) >= (*l_1531))) && (*l_1531)) ^ g_1204[2][0]), l_1589)) ^ l_1606[1][3][1]))), 1L)) >= g_221), 0)) < 2UL) != l_1563)))), 4294967289UL));
                }
                else
                {
                    uint64_t l_1668[10] = {18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL};
                    int32_t *l_1669 = &g_269;
                    int32_t *l_1670 = &l_1625[2][5];
                    int32_t *l_1671 = &g_799;
                    int32_t *l_1672[1][1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1672[i][j] = &l_1624;
                    }
                    l_1668[7] = ((*l_1533) >= ((*l_1528) = (safe_lshift_func_int16_t_s_s((&g_1341[6][1] != l_1666[7][4][3]), 14))));
                    --g_1678;
                }
                for (g_1674 = 24; (g_1674 < (-3)); g_1674--)
                {
                    int32_t l_1687[3][8][2] = {{{0x73FA68BEL,5L},{3L,(-5L)},{(-1L),0x87665FADL},{(-5L),0xB44B2206L},{0x9520ECEEL,(-5L)},{5L,3L},{5L,(-5L)},{0x9520ECEEL,0xB44B2206L}},{{(-5L),0x87665FADL},{(-1L),(-5L)},{3L,5L},{5L,0x7DE03CAFL},{(-1L),0xB44B2206L},{0x7DE03CAFL,0xB44B2206L},{(-1L),0x7DE03CAFL},{5L,5L}},{{3L,(-5L)},{(-1L),0x87665FADL},{(-5L),0xB44B2206L},{0x9520ECEEL,(-5L)},{5L,3L},{5L,(-5L)},{0x9520ECEEL,0xB44B2206L},{(-5L),0x87665FADL}}};
                    int i, j, k;
                    (*l_1533) ^= ((safe_lshift_func_int8_t_s_s(l_1687[2][2][0], 2)) && 0UL);
                }
            }
        }
        l_1709 = func_43(&l_1545[0], (l_1545[0] = ((*l_1531) = ((safe_div_func_uint32_t_u_u(l_1690, (4UL | (((safe_mod_func_uint8_t_u_u((*g_232), ((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(((((((&g_1383 == &g_745) || ((safe_mul_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s(l_1703, 5)) != (+((safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((*l_1531), (*l_1531))), (*l_1471))) , 0x3792D093L))) > (*l_1531)), l_1532)) == g_222[0])) ^ 0x5AECL) < 7UL) | 3L) || (*l_1531)), l_1563)) <= 0x4E712D24L), 2)), 1L)) | (-1L)))) ^ l_1690) || l_26)))) || (*g_232)))));
    }
    else
    {
        uint64_t l_1710 = 18446744073709551606UL;
        (*l_1709) = (l_1710 = (*p_25));
    }
    return p_25;
}







static int16_t func_29(int32_t p_30, int32_t * p_31)
{
    int32_t l_1482 = 1L;
    int16_t *** const *l_1485 = &g_1342;
    int16_t ****l_1487[1][3][6] = {{{&g_745,(void*)0,&g_745,(void*)0,&g_745,(void*)0},{&g_745,(void*)0,&g_745,(void*)0,&g_745,(void*)0},{&g_745,(void*)0,&g_745,(void*)0,&g_745,(void*)0}}};
    int16_t *****l_1486 = &l_1487[0][0][1];
    uint32_t ***l_1488 = &g_1061;
    int32_t l_1514 = 0x3F2572C4L;
    uint32_t l_1515 = 18446744073709551615UL;
    int32_t l_1516 = (-1L);
    int32_t l_1518 = 1L;
    int32_t l_1519 = 0x37904D8FL;
    uint64_t *l_1520 = &g_357[4][2];
    int32_t l_1521 = 0x24C7F069L;
    int i, j, k;
    if ((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((((safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(0x780C64C7L, (safe_sub_func_uint16_t_u_u((((l_1482 >= l_1482) && p_30) < 0UL), l_1482)))), (&g_1061 != ((safe_lshift_func_int8_t_s_u((l_1485 != ((*l_1486) = &g_745)), p_30)) , l_1488)))) & l_1482) <= l_1482) == l_1482), (*g_232))), 7)))
    {
        int64_t ** const *l_1492[3];
        int64_t ** const **l_1491[5][9][3] = {{{&l_1492[1],&l_1492[0],&l_1492[0]},{&l_1492[2],&l_1492[2],(void*)0},{&l_1492[2],&l_1492[0],&l_1492[0]},{&l_1492[0],&l_1492[0],(void*)0},{(void*)0,&l_1492[0],&l_1492[0]},{&l_1492[2],&l_1492[2],(void*)0},{&l_1492[1],&l_1492[0],&l_1492[0]},{&l_1492[2],&l_1492[2],(void*)0},{&l_1492[2],&l_1492[0],&l_1492[0]}},{{&l_1492[0],&l_1492[0],(void*)0},{(void*)0,&l_1492[0],&l_1492[0]},{&l_1492[2],&l_1492[2],(void*)0},{&l_1492[1],&l_1492[0],&l_1492[0]},{&l_1492[2],&l_1492[2],(void*)0},{&l_1492[2],&l_1492[0],&l_1492[0]},{&l_1492[0],&l_1492[0],(void*)0},{(void*)0,&l_1492[0],&l_1492[0]},{&l_1492[2],&l_1492[2],(void*)0}},{{&l_1492[1],&l_1492[0],&l_1492[0]},{&l_1492[2],&l_1492[2],(void*)0},{&l_1492[2],&l_1492[0],&l_1492[0]},{&l_1492[0],&l_1492[0],(void*)0},{(void*)0,&l_1492[0],&l_1492[0]},{&l_1492[2],&l_1492[2],(void*)0},{&l_1492[1],&l_1492[0],&l_1492[0]},{&l_1492[2],&l_1492[2],(void*)0},{&l_1492[2],&l_1492[0],&l_1492[0]}},{{&l_1492[0],&l_1492[0],(void*)0},{(void*)0,&l_1492[0],&l_1492[0]},{&l_1492[2],&l_1492[2],(void*)0},{&l_1492[1],&l_1492[0],&l_1492[0]},{&l_1492[2],&l_1492[2],(void*)0},{&l_1492[2],&l_1492[0],&l_1492[0]},{&l_1492[0],&l_1492[0],(void*)0},{(void*)0,&l_1492[0],&l_1492[0]},{&l_1492[2],&l_1492[2],(void*)0}},{{&l_1492[1],&l_1492[0],&l_1492[0]},{&l_1492[2],&l_1492[2],(void*)0},{&l_1492[2],&l_1492[0],&l_1492[0]},{&l_1492[0],&l_1492[0],(void*)0},{(void*)0,&l_1492[0],&l_1492[0]},{&l_1492[2],&l_1492[2],(void*)0},{&l_1492[0],(void*)0,&l_1492[1]},{(void*)0,&l_1492[0],&l_1492[0]},{(void*)0,(void*)0,&l_1492[1]}}};
        int32_t *l_1493 = &g_57;
        uint64_t *l_1512 = &g_506;
        int16_t l_1513 = 0xEEEAL;
        uint16_t *l_1517 = &g_767;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1492[i] = &g_521;
        (*g_434) = &p_30;
        l_1521 |= ((((0xE9L <= ((safe_add_func_int64_t_s_s(((*g_67) <= ((*l_1493) ^= ((void*)0 != l_1491[4][1][1]))), ((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((l_1519 = ((l_1518 = (((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(0L, 1L)), ((safe_sub_func_uint16_t_u_u(((*l_1517) = (safe_mul_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(((l_1482 <= (l_1516 |= (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((l_1514 = (((((*l_1512) |= ((void*)0 == p_31)) > 0x45B7626FE455725ALL) , g_288) >= l_1513)) , p_30) && l_1515), p_30)), 0)) , l_1514) , p_30))) , 8UL), 1UL)) != 7UL), l_1515))), p_30)) , p_30))) || 7UL) || g_221)) == 0x0E710434L)), 15)), 0x16F8B5EE38BBB33ALL)) , l_1482))) > (-2L))) , l_1512) != l_1520) , 0x1DE3490FL);
    }
    else
    {
        uint16_t l_1522 = 7UL;
        return l_1522;
    }
    return l_1518;
}







static int32_t func_32(const uint8_t p_33, uint64_t p_34)
{
    int32_t *l_1324 = (void*)0;
    int32_t l_1336 = (-3L);
    int16_t l_1337 = (-8L);
    int16_t ****l_1338 = &g_745;
    int64_t *l_1346 = &g_173[2][0][8];
    uint8_t *l_1377 = &g_289;
    const int16_t ***l_1387 = &g_1384;
    int32_t l_1400 = 0x1E658666L;
    const int8_t *l_1413 = &g_298;
    const int8_t **l_1412 = &l_1413;
    const int8_t ***l_1411[7][6] = {{&l_1412,&l_1412,&l_1412,(void*)0,&l_1412,&l_1412},{(void*)0,&l_1412,&l_1412,&l_1412,(void*)0,&l_1412},{(void*)0,&l_1412,&l_1412,(void*)0,&l_1412,&l_1412},{(void*)0,&l_1412,&l_1412,&l_1412,&l_1412,&l_1412},{(void*)0,(void*)0,&l_1412,(void*)0,&l_1412,&l_1412},{&l_1412,&l_1412,&l_1412,(void*)0,&l_1412,&l_1412},{(void*)0,&l_1412,&l_1412,&l_1412,(void*)0,&l_1412}};
    const int8_t ****l_1410 = &l_1411[1][0];
    uint32_t l_1441 = 18446744073709551615UL;
    int32_t l_1449 = 0L;
    int32_t l_1450[9] = {0x2DECF785L,0x2DECF785L,0x2DECF785L,0x2DECF785L,0x2DECF785L,0x2DECF785L,0x2DECF785L,0x2DECF785L,0x2DECF785L};
    uint32_t l_1461 = 0xFF42323CL;
    int i, j;
    for (p_34 = 0; (p_34 <= 0); p_34 += 1)
    {
        int32_t *l_46 = (void*)0;
        int32_t **l_47 = (void*)0;
        int32_t *l_49[7];
        int32_t **l_48 = &l_49[0];
        int32_t **l_55 = (void*)0;
        int32_t *l_56 = &g_57;
        int i;
        for (i = 0; i < 7; i++)
            l_49[i] = &g_4;
        (*l_48) = (l_1324 = func_36(func_40(func_43(&g_4, (g_35[p_34] == (l_46 == ((*l_48) = &g_4)))), ((((l_56 = (void*)0) == &g_4) >= p_33) , (g_4 | p_33))), p_33, p_34));
        l_1324 = l_1324;
        for (g_288 = 0; (g_288 <= 0); g_288 += 1)
        {
            int32_t l_1335 = 0x75D07979L;
            int i, j;
            (*l_1324) ^= 8L;
            l_1336 &= ((((safe_mul_func_int16_t_s_s(0L, 0xE65EL)) <= (((!g_154[p_34]) == ((safe_sub_func_int64_t_s_s(((((l_1335 |= (((g_357[(g_288 + 7)][(g_288 + 1)] = (safe_unary_minus_func_uint8_t_u(((*l_1324) == 65535UL)))) < ((safe_lshift_func_int8_t_s_u(1L, 1)) > p_34)) < (6L > p_34))) | p_34) & p_33) , (*l_1324)), 0x63D8D8A1572984FALL)) ^ (*l_1324))) >= 1UL)) , 65526UL) < p_33);
        }
        (*l_1324) = (*l_1324);
    }
    for (g_288 = 0; (g_288 <= 2); g_288 += 1)
    {
        int16_t *** const *l_1339 = &g_745;
        int64_t *l_1347 = &g_154[0];
        int32_t l_1355 = 0x1C890E58L;
        const uint32_t *l_1364 = &g_1317;
        int32_t l_1369 = 0x4485D206L;
        uint16_t *l_1370 = &g_35[0];
        int16_t ***l_1382 = &g_746;
        const int8_t ****l_1414 = &l_1411[1][0];
        int32_t l_1435[4][1][5] = {{{(-1L),(-1L),(-1L),(-1L),(-1L)}},{{0xD1702364L,0xD1702364L,0xD1702364L,0xD1702364L,0xD1702364L}},{{(-1L),(-1L),(-1L),(-1L),(-1L)}},{{0xD1702364L,0xD1702364L,0xD1702364L,0xD1702364L,0xD1702364L}}};
        int i, j, k;
        if ((p_33 <= (0xDFA0D9F8C381FC5CLL != p_33)))
        {
            return l_1337;
        }
        else
        {
            uint64_t l_1354 = 6UL;
            int32_t l_1356 = 1L;
            for (g_915 = 3; (g_915 >= 0); g_915 -= 1)
            {
                int16_t *** const **l_1340[9] = {&l_1339,&l_1339,&l_1339,&l_1339,&l_1339,&l_1339,&l_1339,&l_1339,&l_1339};
                int i, j;
                if (g_1204[g_288][g_915])
                    break;
                g_1204[g_288][g_915] = ((((l_1338 != (g_1341[6][1] = l_1339)) | (0x6F2D6122L == 0xE7B627BFL)) ^ ((safe_div_func_uint32_t_u_u((((l_1346 != l_1347) ^ (safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(g_303[g_288][g_915], (safe_div_func_uint32_t_u_u(((((g_357[(g_915 + 2)][g_288] >= (*g_232)) , p_33) , l_1354) , g_1183[4]), p_33)))), (-1L)))) != 0x1FD9L), l_1354)) > 0xE1F0L)) > l_1355);
            }
            l_1356 ^= 4L;
            for (p_34 = 0; (p_34 <= 2); p_34 += 1)
            {
                int i, j;
                return g_1204[(p_34 + 1)][(g_288 + 1)];
            }
        }
        l_1336 = (safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(((!(l_1355 = ((safe_add_func_int64_t_s_s((l_1324 != l_1364), ((safe_mul_func_int16_t_s_s(0xFB5DL, p_33)) < p_33))) != 0x6592L))) <= (safe_mul_func_uint16_t_u_u((l_1369 , ((*l_1370)--)), ((safe_add_func_int32_t_s_s(p_33, (safe_div_func_int16_t_s_s(((&g_305 != l_1377) <= g_658), p_33)))) & 0UL)))), 7)), p_34));
        for (g_149 = 0; (g_149 <= 2); g_149 += 1)
        {
            const int16_t ****l_1386 = (void*)0;
            uint32_t *l_1388 = &g_920;
            int8_t ***l_1390 = &g_1293;
            int8_t ****l_1389[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
            int64_t * const *l_1427 = &l_1347;
            int64_t * const **l_1426 = &l_1427;
            int64_t * const ***l_1425 = &l_1426;
            int64_t l_1428[6];
            int32_t l_1451 = 8L;
            int32_t l_1452 = 0x7B77CC0FL;
            uint32_t l_1453 = 0x1392DD2BL;
            int32_t l_1458 = 0x93E8EEC0L;
            int32_t l_1459 = 0xFFEFB310L;
            int32_t l_1460 = 0x9B3E4238L;
            int i, j;
            for (i = 0; i < 6; i++)
                l_1428[i] = (-7L);
            if ((safe_mod_func_uint8_t_u_u(((g_1204[(g_149 + 1)][(g_149 + 1)] != g_303[g_288][g_149]) , (safe_mul_func_int8_t_s_s((((((*l_1338) = l_1382) == (l_1387 = g_1383)) == g_357[g_288][g_149]) , (((((*l_1388) |= g_357[(g_288 + 3)][g_149]) < (((g_1391[2] = (void*)0) == (void*)0) ^ ((safe_sub_func_uint64_t_u_u(((g_357[(g_149 + 3)][g_288] != 5L) , g_296), p_34)) & p_33))) , (void*)0) == g_1394)), (-10L)))), 0xE5L)))
            {
                int32_t l_1399[1];
                int8_t *l_1407[10][1][9] = {{{&g_298,&g_298,&g_296,(void*)0,&g_298,&g_296,(void*)0,&g_296,&g_298}},{{&g_298,&g_298,&g_301,&g_296,&g_296,&g_298,&g_298,(void*)0,&g_298}},{{(void*)0,&g_296,&g_296,&g_296,&g_296,(void*)0,&g_296,&g_298,&g_301}},{{(void*)0,&g_298,&g_298,&g_298,&g_296,(void*)0,&g_301,&g_298,(void*)0}},{{&g_301,&g_296,(void*)0,&g_296,&g_298,&g_298,&g_296,(void*)0,&g_296}},{{&g_296,&g_298,&g_296,(void*)0,&g_301,(void*)0,&g_298,&g_298,(void*)0}},{{(void*)0,&g_296,(void*)0,&g_296,&g_296,&g_301,(void*)0,(void*)0,&g_301}},{{&g_296,&g_298,&g_296,&g_298,&g_296,(void*)0,&g_301,(void*)0,&g_298}},{{(void*)0,&g_296,&g_301,&g_296,&g_301,&g_296,(void*)0,&g_296,&g_298}},{{&g_298,&g_298,(void*)0,(void*)0,&g_301,(void*)0,(void*)0,&g_298,&g_296}}};
                uint64_t *l_1409 = &g_357[(g_149 + 3)][g_288];
                uint64_t **l_1408 = &l_1409;
                int32_t l_1415[5] = {0xFDE15A45L,0xFDE15A45L,0xFDE15A45L,0xFDE15A45L,0xFDE15A45L};
                int64_t ****l_1424 = &g_1179;
                int32_t l_1456 = 0xF787B428L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1399[i] = 0x4FD72896L;
                if ((safe_div_func_int64_t_s_s((&g_1293 == ((l_1399[0] < (g_305 |= ((l_1415[0] = (l_1355 = ((((l_1400 , (safe_rshift_func_int16_t_s_u(l_1369, ((((*l_1408) = ((safe_add_func_uint32_t_u_u((p_34 >= (((255UL < ((0x81352F4DL == ((l_1407[1][0][4] = (*g_1293)) != ((g_1183[0] = l_1369) , (void*)0))) == l_1399[0])) | p_33) > l_1399[0])), p_34)) , &p_34)) == &g_357[4][2]) || 0UL)))) > p_34) , l_1410) != l_1414))) == (*g_232)))) , (void*)0)), g_357[(g_288 + 3)][g_149])))
                {
                    int32_t l_1416 = 0x6C7A4732L;
                    for (l_1355 = 0; (l_1355 <= 2); l_1355 += 1)
                    {
                        const int32_t l_1418 = 0x32AF3FBEL;
                        int32_t l_1423[3][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
                        int16_t ****l_1433 = &l_1382;
                        int32_t *l_1434[9][2];
                        int i, j;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_1434[i][j] = &g_57;
                        }
                        l_1369 = (l_1416 && ((!(g_1204[l_1355][(g_288 + 1)] &= 0L)) > (((((p_34 , l_1418) < ((((safe_mul_func_int16_t_s_s(p_34, 0x62A8L)) , (((p_34 , (g_303[0][2] , (l_1423[2][0] |= (((safe_div_func_uint8_t_u_u(0xCEL, p_33)) | p_34) & l_1416)))) , l_1424) != l_1425)) & g_303[g_288][g_149]) && p_33)) , g_233) != 1UL) , l_1428[3])));
                        if (l_1355)
                            break;
                        l_1435[2][0][3] = (l_1369 = (safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(0x7AL, 1)), ((*l_1377) |= ((*g_232) = ((*l_1339) == ((*l_1433) = &g_1343)))))));
                        return p_34;
                    }
                }
                else
                {
                    int16_t l_1436 = 0L;
                    if (l_1436)
                        break;
                }
                for (l_1369 = 2; (l_1369 >= 0); l_1369 -= 1)
                {
                    int16_t l_1439 = (-9L);
                    int32_t l_1440 = 0x7D570897L;
                    int32_t *l_1444 = &g_1001;
                    int32_t *l_1445 = &g_57;
                    int32_t *l_1446 = &l_1399[0];
                    int32_t *l_1447 = (void*)0;
                    int32_t *l_1448[6] = {&l_1399[0],&l_1399[0],&l_1399[0],&l_1399[0],&l_1399[0],&l_1399[0]};
                    int8_t l_1457 = 0L;
                    int i;
                    for (g_767 = 1; (g_767 <= 4); g_767 += 1)
                    {
                        int32_t l_1437 = 0xFB8D2009L;
                        int32_t *l_1438[4][10] = {{&g_1204[(g_149 + 1)][(g_149 + 1)],&l_1336,&l_1400,&l_1437,&l_1415[l_1369],&g_1001,&g_1001,&l_1415[l_1369],&l_1437,&l_1400},{&g_1001,&g_1001,&l_1415[l_1369],&l_1437,&l_1400,&l_1336,&g_1204[(g_149 + 1)][(g_149 + 1)],&g_57,&g_1204[(g_149 + 1)][(g_149 + 1)],&l_1336},{&l_1437,&l_1415[l_1369],&g_799,&l_1415[l_1369],&l_1437,&l_1435[2][0][3],&g_1204[(g_149 + 1)][(g_149 + 1)],&g_1001,&g_4,&g_4},{&l_1437,&g_1001,&l_1435[2][0][3],&l_1336,&l_1336,&l_1435[2][0][3],&g_1001,&l_1437,&g_799,&g_4}};
                        int i, j;
                        l_1441++;
                    }
                    l_1453++;
                    ++l_1461;
                }
            }
            else
            {
                int32_t *l_1464 = &l_1435[1][0][1];
                int32_t *l_1465[6][4][1] = {{{&g_54},{&l_1336},{&g_54},{&l_1336}},{{&g_54},{&l_1336},{&g_54},{&l_1336}},{{&g_54},{&l_1336},{&g_54},{&l_1336}},{{&g_54},{&l_1336},{&g_54},{&l_1336}},{{&g_54},{&l_1336},{&g_54},{&l_1336}},{{&g_54},{&l_1336},{&g_54},{&l_1336}}};
                int i, j, k;
                --g_1466;
            }
            l_1452 &= (safe_rshift_func_uint16_t_u_s(p_34, ((void*)0 == g_1061)));
        }
    }
    return p_33;
}







static int32_t * func_36(int32_t * p_37, int32_t p_38, int32_t p_39)
{
    int32_t *l_66[7][3] = {{&g_54,&g_57,&g_54},{&g_57,&g_4,&g_57},{&g_54,&g_57,&g_54},{&g_57,&g_4,&g_57},{&g_54,&g_57,&g_54},{&g_57,&g_4,&g_57},{&g_54,&g_57,&g_54}};
    int8_t l_71 = 1L;
    uint32_t l_91 = 0x567DFB9DL;
    uint8_t l_125 = 0x12L;
    int32_t l_152 = (-2L);
    int16_t **l_309[5][2];
    int64_t *l_322 = &g_173[2][0][8];
    int16_t l_352 = 0xC18EL;
    int16_t l_409 = 0xB37DL;
    uint64_t l_455 = 0xD6F6295AF4F48F44LL;
    uint32_t l_467 = 0x6A35BAF0L;
    int64_t **l_484 = &l_322;
    int8_t l_487 = (-1L);
    int64_t l_488[2][5] = {{(-3L),(-3L),(-3L),(-3L),(-3L)},{(-1L),7L,(-1L),7L,(-1L)}};
    int32_t l_575 = 0xDBE4B196L;
    uint32_t l_594[1];
    uint32_t l_618 = 18446744073709551615UL;
    uint32_t l_661 = 3UL;
    int32_t l_684 = 0x46B38DEEL;
    int64_t l_810[6] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
    int32_t ***l_826 = &g_434;
    uint8_t l_868 = 0x71L;
    int16_t l_1038 = 0xA0BCL;
    int32_t * const **l_1057 = (void*)0;
    int16_t * const *l_1282 = &g_195;
    int16_t * const **l_1281 = &l_1282;
    int16_t * const ***l_1280 = &l_1281;
    int8_t l_1290 = (-1L);
    uint64_t l_1321 = 0xE4ADAA779F7E9DB6LL;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
            l_309[i][j] = &g_195;
    }
    for (i = 0; i < 1; i++)
        l_594[i] = 0x80650DBAL;
lbl_308:
    g_67 = func_40(l_66[5][1], g_35[0]);
    for (g_54 = 0; (g_54 == 12); ++g_54)
    {
        int32_t l_70 = 0L;
        if (l_70)
            break;
    }
    for (p_38 = 0; (p_38 >= 0); p_38 -= 1)
    {
        uint64_t l_72 = 0xBB5C02AC6AA04D97LL;
        int8_t *l_77[1][3][8] = {{{&l_71,(void*)0,&l_71,(void*)0,&l_71,&l_71,&l_71,&l_71},{(void*)0,(void*)0,(void*)0,(void*)0,&l_71,&l_71,&l_71,(void*)0},{(void*)0,&l_71,(void*)0,&l_71,&l_71,&l_71,&l_71,(void*)0}}};
        uint8_t l_92[7];
        uint32_t *l_93 = &l_91;
        int32_t ** const l_94 = &l_66[5][1];
        const uint32_t l_148[4] = {18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL};
        uint32_t l_151 = 1UL;
        int32_t l_188 = 0xF2A4E10FL;
        int32_t l_244 = (-10L);
        uint16_t l_271 = 1UL;
        int16_t l_304 = 0xD6DFL;
        int16_t ***l_310 = &l_309[1][1];
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_92[i] = 0xBDL;
        l_72++;
        if ((1UL < ((safe_mul_func_uint8_t_u_u(g_57, ((((g_78 = 0x1AL) != (&g_57 == p_37)) ^ (((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((g_35[p_38] = ((((((*l_93) = (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_54, (p_38 & (-3L)))), (safe_div_func_uint32_t_u_u((((8L ^ l_91) == g_4) & l_92[2]), 0xBC40293EL))))) , l_94) != &p_37) == 0x73E8932AL) >= 0xA103L)), (**l_94))), 0xA78915CEL)) , 5UL), g_57)) < 1UL) && 0x7C03L)) , 0x5DL))) >= 0x3289L)))
        {
            uint32_t l_101 = 0x402BB9F8L;
            int32_t l_104 = 0x0DE344E3L;
            int16_t l_113 = 1L;
            int32_t **l_118 = &g_67;
            uint16_t l_236[5];
            int i;
            for (i = 0; i < 5; i++)
                l_236[i] = 0xD2C0L;
            for (g_78 = 0; (g_78 <= 0); g_78 += 1)
            {
                uint8_t *l_102[7][7] = {{&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2]},{&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2]},{&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2]},{&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2]},{&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2]},{&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2]},{&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2],&l_92[2]}};
                int32_t l_103[7] = {1L,0x49BDA14EL,1L,1L,0x49BDA14EL,1L,1L};
                int16_t l_105 = 0x5D93L;
                uint32_t l_133 = 0x91146291L;
                int16_t *l_197 = &l_113;
                int64_t l_223 = 0L;
                int32_t l_252[7];
                uint64_t l_293 = 0xDD7BFDBE93F33EA3LL;
                int i, j;
                for (i = 0; i < 7; i++)
                    l_252[i] = 4L;
                if ((((safe_mul_func_int8_t_s_s((((((&p_37 == (((safe_lshift_func_int16_t_s_u((l_101 = ((*p_37) > (safe_mul_func_int16_t_s_s(p_38, (0x72037C87L == ((void*)0 == &l_71)))))), 11)) , (l_104 = (l_103[3] = g_57))) , &p_37)) == (p_38 ^ 9UL)) , 9L) == 1UL) | l_105), g_35[0])) <= g_4) >= g_4))
                {
                    int16_t l_112 = 0x6DB5L;
                    (*g_67) = (((l_104 ^= ((((p_39 & g_57) > 8L) > 0UL) <= (0L > (**l_94)))) < (safe_div_func_int16_t_s_s((-1L), g_78))) < ((((safe_mul_func_uint16_t_u_u(g_57, 0x45A4L)) <= 0xC8AC7727L) <= l_112) > 0x549EL));
                }
                else
                {
                    int32_t ***l_119 = &l_118;
                    uint32_t *l_120 = (void*)0;
                    uint32_t *l_121 = &l_101;
                    int16_t *l_124 = &l_105;
                    if ((*g_67))
                    {
                        return &g_54;
                    }
                    else
                    {
                        if (l_113)
                            break;
                    }
                    (*g_67) = ((!((((+4294967293UL) < g_78) , (safe_lshift_func_uint8_t_u_s((p_38 <= ((*l_124) &= ((((*l_119) = l_118) != ((l_103[5] ^= (((g_4 ^ ((*l_121) = ((&g_57 == (void*)0) | 0xD3579F7DL))) < (((safe_mod_func_int64_t_s_s((((*g_67) || (*g_67)) < 0xCBL), p_38)) < g_78) && 0xAF453539CAC12287LL)) < 0UL)) , &l_66[2][0])) , g_4))), g_78))) > 0x0DL)) > (*g_67));
                    if ((*g_67))
                        break;
                }
                ++l_125;
                for (l_125 = 0; (l_125 <= 0); l_125 += 1)
                {
                    int32_t ***l_159 = (void*)0;
                    int64_t *l_172 = &g_173[2][0][8];
                    int16_t *l_180[5];
                    uint32_t *l_181 = (void*)0;
                    uint32_t *l_182 = &l_101;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_180[i] = &l_113;
                    for (l_101 = 0; (l_101 <= 0); l_101 += 1)
                    {
                        int32_t ***l_147 = &l_118;
                        int8_t *l_150 = &l_71;
                        int64_t *l_153 = &g_154[0];
                        int32_t ****l_160 = &l_147;
                        int i;
                        (*g_67) = (safe_div_func_int64_t_s_s(((**l_94) ^ ((safe_unary_minus_func_uint8_t_u(((safe_sub_func_int8_t_s_s((g_78 , 0L), (l_133 || ((*l_153) = (((safe_sub_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((g_35[p_38] &= (safe_rshift_func_int8_t_s_s((p_38 >= (((safe_rshift_func_int16_t_s_u((+(((((((safe_div_func_uint64_t_u_u((!(g_149 = ((((safe_unary_minus_func_int8_t_s((-1L))) , &p_37) == ((*l_147) = &p_37)) == ((l_148[1] < p_38) <= 248UL)))), g_4)) , 0x24E5D96FL) , g_4) & p_39) , l_77[0][2][6]) != l_150) , l_151)), l_133)) != p_39) >= 0xE0L)), g_57))) && l_152), p_39)), p_39)) > g_4) & g_4))))) != (-1L)))) || (*g_67))), (-1L)));
                        (*p_37) &= (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((6UL > (((*l_160) = l_159) == (void*)0)), 0)), (safe_unary_minus_func_uint64_t_u(p_39))));
                    }
                    for (l_133 = 0; (l_133 <= 0); l_133 += 1)
                    {
                        int i;
                        (*l_118) = &l_103[(p_38 + 1)];
                        if (g_154[l_125])
                            break;
                    }
                }
                return &g_57;
            }
        }
        else
        {
            int32_t l_294 = 0x68387671L;
            int32_t l_295 = 0x43094950L;
            int32_t l_297 = 0L;
            int32_t l_302[3][3][7] = {{{(-1L),0xFDC1EA57L,0xFDC1EA57L,(-1L),0L,0x5591ADE6L,0x8CBD1670L},{0xC738FB73L,0xDDE9F337L,0x8CBD1670L,0xFDC1EA57L,0xB46385D5L,0x3C4A1115L,4L},{1L,0L,(-1L),0x7D1725C1L,0x7F253EEFL,1L,0x8CBD1670L}},{{(-1L),0x5591ADE6L,0L,1L,0xC9C8E147L,8L,8L},{0x13443893L,1L,0x658A4AC1L,1L,0x13443893L,0L,0xDDE9F337L},{0xFDC1EA57L,0L,4L,0x7D1725C1L,(-7L),0xB46385D5L,1L}},{{1L,0x13443893L,(-6L),0xFDC1EA57L,0L,0x7F253EEFL,(-7L)},{0xFDC1EA57L,0x7D1725C1L,(-1L),(-1L),0x658A4AC1L,0xC9C8E147L,(-1L)},{0x13443893L,0x658A4AC1L,0x3C4A1115L,0x3C4A1115L,0x658A4AC1L,0x13443893L,0x7F253EEFL}}};
            int i, j, k;
            g_305++;
            if (g_57)
                goto lbl_308;
            return &g_57;
        }
        (*l_310) = l_309[2][0];
    }
    if (((*g_67) = (~((safe_mod_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((void*)0 == &g_300), 15)), 0x7D9BL)) < p_39), ((*g_232) ^= ((safe_mod_func_uint16_t_u_u((18446744073709551607UL <= g_269), (((g_221 ^ (safe_lshift_func_uint16_t_u_u((((g_296 < ((((l_322 = &g_154[0]) == &g_154[0]) > g_221) == p_38)) > p_38) == p_39), g_269))) | 6L) , p_38))) , 0UL)))) != 0xDA78BEC0A9045112LL))))
    {
        int64_t *l_371 = (void*)0;
        uint32_t *l_383 = (void*)0;
        int32_t l_385 = (-1L);
        int32_t l_386 = 0x204DF620L;
        int32_t l_387 = 0xF5786877L;
        int32_t l_391 = (-6L);
        int32_t **l_431 = &g_67;
        int32_t ***l_430 = &l_431;
        int32_t ****l_429[8] = {&l_430,&l_430,&l_430,&l_430,&l_430,&l_430,&l_430,&l_430};
        uint16_t l_550[3];
        const uint16_t l_576 = 65535UL;
        const int32_t l_578 = 0xF60C8B65L;
        int64_t ***l_597 = (void*)0;
        int16_t l_664[6] = {9L,0x41EFL,9L,9L,0x41EFL,9L};
        int8_t l_682 = 0xB2L;
        int64_t l_683 = 0xFDC1D4A5D54F3722LL;
        int8_t l_701 = 3L;
        uint64_t l_704[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
        int64_t ** const l_723[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int64_t ** const *l_722 = &l_723[1];
        uint64_t l_841 = 0x10600B5BDD75EA8ALL;
        const int16_t *l_843 = &l_664[0];
        const int16_t ** const l_842 = &l_843;
        int16_t **l_853 = &g_195;
        int16_t **l_854[5][9] = {{&g_195,(void*)0,&g_195,(void*)0,&g_195,&g_195,&g_195,&g_195,&g_195},{(void*)0,&g_195,(void*)0,&g_195,&g_195,&g_195,&g_195,&g_195,&g_195},{(void*)0,&g_195,&g_195,(void*)0,&g_195,&g_195,&g_195,&g_195,&g_195},{&g_195,&g_195,&g_195,&g_195,&g_195,&g_195,&g_195,&g_195,&g_195},{&g_195,(void*)0,(void*)0,(void*)0,&g_195,&g_195,&g_195,&g_195,&g_195}};
        int64_t l_917 = 9L;
        const int64_t l_1067 = 0L;
        int8_t l_1074 = 0xF9L;
        int8_t l_1097 = 0x9EL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_550[i] = 0xA475L;
        if (((+(safe_rshift_func_int16_t_s_s(((void*)0 == l_66[4][2]), 13))) || ((*g_232)++)))
        {
            int32_t *l_328[10][8] = {{&g_54,(void*)0,&g_4,&g_269,(void*)0,&g_57,(void*)0,&g_4},{&g_4,(void*)0,(void*)0,&g_54,&g_54,(void*)0,(void*)0,&g_4},{&g_54,&g_54,&g_4,&g_57,&g_4,&g_54,&g_57,&g_269},{&g_4,&g_54,&g_57,&g_269,&g_57,&g_54,&g_4,&g_57},{&g_4,&g_54,&g_269,&g_4,(void*)0,(void*)0,&g_54,&g_54},{&g_57,(void*)0,&g_4,&g_57,&g_54,(void*)0,&l_152,(void*)0},{&g_4,&l_152,&g_54,&g_4,(void*)0,&g_54,&g_54,&g_54},{&g_57,&g_4,(void*)0,&g_4,&g_57,&g_54,&g_4,(void*)0},{&g_269,&g_57,(void*)0,&g_57,&g_4,&g_269,&g_269,&g_4},{&g_4,(void*)0,(void*)0,&g_4,&l_152,&g_54,&g_4,(void*)0}};
            int32_t **l_329 = &g_67;
            int32_t l_412 = 3L;
            int32_t l_464[2];
            int i, j;
            for (i = 0; i < 2; i++)
                l_464[i] = (-1L);
            (*l_329) = l_328[8][5];
            for (g_78 = 0; (g_78 >= 2); ++g_78)
            {
                uint16_t *l_350 = &g_35[0];
                int32_t l_351 = 7L;
                int16_t **l_356 = &g_195;
                int16_t *l_407 = &l_352;
                int32_t l_461 = 0L;
                int32_t l_462 = 0xFBF150C9L;
                int32_t l_463 = 0x0628D2FFL;
                int32_t l_465 = 9L;
                int32_t l_466[8][3] = {{0x7EC73036L,0x5FB8BDD0L,0xB25B12C8L},{(-6L),(-6L),0xB25B12C8L},{1L,(-6L),(-7L)},{(-1L),(-1L),0x7EC73036L},{1L,0x7EC73036L,(-6L)},{(-6L),0x7EC73036L,1L},{0x7EC73036L,(-1L),(-1L)},{(-7L),(-6L),1L}};
                int i, j;
            }
            (*l_329) = p_37;
        }
        else
        {
            uint16_t l_472 = 0x5917L;
            (**l_430) = (**g_433);
            for (g_301 = 0; (g_301 != (-12)); g_301 = safe_sub_func_int32_t_s_s(g_301, 6))
            {
                (*p_37) ^= ((p_38 && (&p_37 != &p_37)) <= 18446744073709551615UL);
                l_472--;
            }
        }
        (*p_37) = (0L | (safe_lshift_func_uint16_t_u_s(g_57, 1)));
        if ((safe_mod_func_int64_t_s_s(g_288, (safe_rshift_func_int16_t_s_s((***l_430), ((&g_288 != (void*)0) != (+g_173[2][0][8])))))))
        {
            int64_t **l_483[10] = {&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371};
            int64_t ***l_482[5][4][9] = {{{&l_483[2],&l_483[2],&l_483[5],&l_483[2],&l_483[2],&l_483[2],(void*)0,&l_483[2],(void*)0},{&l_483[2],&l_483[0],&l_483[8],&l_483[8],&l_483[0],&l_483[2],&l_483[8],(void*)0,(void*)0},{&l_483[2],(void*)0,&l_483[2],&l_483[2],(void*)0,&l_483[2],&l_483[2],&l_483[2],&l_483[2]},{&l_483[8],&l_483[2],&l_483[2],&l_483[9],&l_483[2],&l_483[2],&l_483[8],&l_483[8],(void*)0}},{{&l_483[2],&l_483[2],&l_483[2],(void*)0,&l_483[5],&l_483[5],(void*)0,&l_483[2],&l_483[2]},{&l_483[8],&l_483[2],(void*)0,&l_483[2],&l_483[2],(void*)0,&l_483[2],&l_483[8],(void*)0},{&l_483[2],&l_483[7],&l_483[2],&l_483[2],&l_483[2],&l_483[4],(void*)0,&l_483[2],&l_483[5]},{(void*)0,(void*)0,&l_483[7],&l_483[8],(void*)0,&l_483[8],&l_483[7],(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_483[2],&l_483[5],&l_483[2],(void*)0,&l_483[7],&l_483[2],&l_483[2]},{&l_483[9],(void*)0,&l_483[9],&l_483[7],&l_483[4],&l_483[4],&l_483[7],&l_483[9],(void*)0},{(void*)0,&l_483[2],&l_483[7],&l_483[2],&l_483[2],&l_483[2],&l_483[4],(void*)0,&l_483[2]},{(void*)0,&l_483[7],(void*)0,&l_483[2],&l_483[9],&l_483[0],&l_483[9],&l_483[2],(void*)0}},{{&l_483[2],&l_483[2],&l_483[2],&l_483[2],&l_483[2],(void*)0,&l_483[5],&l_483[5],(void*)0},{&l_483[8],(void*)0,&l_483[9],(void*)0,&l_483[2],&l_483[3],&l_483[3],&l_483[2],(void*)0},{(void*)0,&l_483[2],(void*)0,&l_483[2],&l_483[2],&l_483[2],&l_483[5],&l_483[2],&l_483[2]},{(void*)0,&l_483[9],(void*)0,(void*)0,&l_483[7],&l_483[8],(void*)0,&l_483[8],&l_483[7]}},{{&l_483[2],&l_483[2],&l_483[2],&l_483[2],&l_483[2],&l_483[2],(void*)0,&l_483[5],&l_483[5]},{&l_483[9],&l_483[4],&l_483[8],(void*)0,&l_483[3],(void*)0,&l_483[7],&l_483[7],(void*)0},{&l_483[2],&l_483[7],&l_483[2],&l_483[7],&l_483[2],&l_483[5],(void*)0,&l_483[2],&l_483[2]},{&l_483[9],&l_483[2],&l_483[8],&l_483[9],&l_483[7],&l_483[4],&l_483[2],&l_483[2],&l_483[2]}}};
            int32_t l_485 = 0xAB1EB8AEL;
            int32_t l_486[2];
            int16_t l_489 = 1L;
            uint8_t l_490 = 0UL;
            int32_t l_503 = 0x4F51CFE5L;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_486[i] = 0L;
            l_484 = &l_371;
            --l_490;
            (**l_430) = p_37;
            p_37 = func_40(p_37, (l_486[1] |= (65527UL || ((((*l_322) = g_35[0]) , (safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((p_38 <= (safe_rshift_func_int16_t_s_s(p_39, (safe_mod_func_int8_t_s_s(((l_503 != ((safe_lshift_func_int16_t_s_u(g_506, 10)) , (~((~(((((l_485 ^= (0x0D33F4DE438EBB2ELL <= (**l_431))) & (*g_232)) && 1L) || 5UL) >= l_489)) ^ 6L)))) <= (-1L)), p_38))))), g_221)) | 0L), l_503)), 0x54CFL))) != 0x241AL))));
        }
        else
        {
            int16_t l_516 = 4L;
            int32_t l_525 = (-3L);
            int32_t l_527 = 0xD222846DL;
            int32_t l_531 = 0xF3FEC6A3L;
            int32_t l_532 = 0xF9F3DD97L;
            int32_t l_533[5];
            uint16_t l_554 = 0xDE11L;
            int32_t ** const l_606 = &g_67;
            int64_t * const *l_725 = &l_322;
            int64_t * const **l_724 = &l_725;
            int32_t l_737 = 0xF7551C0AL;
            uint32_t l_768 = 0x0C3C8C5FL;
            const int16_t *l_772[5][2] = {{&l_516,&l_516},{&l_516,&l_516},{&l_516,&l_516},{&l_516,&l_516},{&l_516,&l_516}};
            const int16_t **l_771 = &l_772[0][1];
            const int16_t ***l_770 = &l_771;
            const int16_t ****l_769 = &l_770;
            int32_t * const l_798 = &g_799;
            int32_t * const *l_797 = &l_798;
            int32_t * const **l_796 = &l_797;
            int32_t * const ***l_795[4][4][7] = {{{&l_796,&l_796,&l_796,&l_796,&l_796,&l_796,(void*)0},{&l_796,&l_796,&l_796,&l_796,&l_796,&l_796,&l_796},{&l_796,&l_796,&l_796,&l_796,&l_796,&l_796,(void*)0},{&l_796,&l_796,&l_796,&l_796,&l_796,&l_796,&l_796}},{{&l_796,&l_796,(void*)0,&l_796,&l_796,(void*)0,&l_796},{&l_796,&l_796,&l_796,&l_796,&l_796,&l_796,&l_796},{&l_796,&l_796,(void*)0,&l_796,&l_796,&l_796,&l_796},{&l_796,&l_796,&l_796,&l_796,&l_796,&l_796,&l_796}},{{&l_796,&l_796,&l_796,&l_796,&l_796,&l_796,&l_796},{&l_796,&l_796,&l_796,&l_796,&l_796,&l_796,&l_796},{&l_796,&l_796,&l_796,&l_796,&l_796,&l_796,&l_796},{&l_796,&l_796,&l_796,&l_796,&l_796,&l_796,&l_796}},{{&l_796,&l_796,&l_796,&l_796,&l_796,(void*)0,&l_796},{&l_796,&l_796,&l_796,&l_796,&l_796,&l_796,&l_796},{&l_796,&l_796,&l_796,&l_796,&l_796,&l_796,&l_796},{&l_796,&l_796,&l_796,&l_796,&l_796,&l_796,&l_796}}};
            int32_t * const ****l_794 = &l_795[2][1][2];
            int32_t *** const l_827[3][7] = {{&l_431,&g_434,&l_431,&l_431,&g_434,&l_431,&g_434},{&l_431,&l_431,&g_434,&g_434,&l_431,&l_431,(void*)0},{&l_431,&l_431,&g_434,&g_434,&l_431,&l_431,(void*)0}};
            uint32_t l_859 = 0xFF346BD1L;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_533[i] = (-10L);
            for (g_78 = (-7); (g_78 != 56); g_78 = safe_add_func_uint32_t_u_u(g_78, 7))
            {
                uint32_t l_511 = 18446744073709551615UL;
                ++l_511;
            }
            if (((((g_289 >= (((g_300 = (&l_467 != p_37)) , 4294967295UL) == (((*g_232) = 0x0BL) & 0xC2L))) <= ((0UL && ((safe_mod_func_int8_t_s_s(((0UL | (g_221 >= g_299)) > l_516), (-1L))) && 0L)) < p_38)) || 0x42B5L) , (*g_67)))
            {
                int16_t l_528 = (-1L);
                int32_t l_529 = 5L;
                int32_t l_530 = 0x501400FBL;
                int32_t l_535[10] = {0xB9A6EAC7L,0xB9A6EAC7L,0xB9A6EAC7L,0xB9A6EAC7L,0xB9A6EAC7L,0xB9A6EAC7L,0xB9A6EAC7L,0xB9A6EAC7L,0xB9A6EAC7L,0xB9A6EAC7L};
                int16_t l_553 = 0x79FBL;
                int8_t *l_569[3][7][10] = {{{&l_71,(void*)0,&l_487,&g_301,(void*)0,&g_301,&l_487,&l_487,(void*)0,(void*)0},{&g_296,(void*)0,&g_296,&g_301,&l_71,&l_487,&g_296,(void*)0,(void*)0,&l_487},{&l_487,(void*)0,&l_487,&g_301,&g_301,&g_296,&g_296,(void*)0,(void*)0,&g_296},{(void*)0,&l_487,&g_298,&g_301,&g_298,&g_301,&g_298,&l_487,(void*)0,&l_487},{&l_71,&l_487,&g_296,&g_301,&l_71,&g_301,&l_487,(void*)0,(void*)0,&g_301},{&l_71,(void*)0,&l_487,&g_301,(void*)0,&g_301,&l_487,&l_487,(void*)0,(void*)0},{&g_296,(void*)0,&g_296,&g_301,&l_71,&l_487,&g_296,(void*)0,(void*)0,&l_487}},{{&l_487,(void*)0,&l_487,&g_301,&g_301,&g_296,&g_296,(void*)0,(void*)0,&g_296},{(void*)0,&l_487,&g_298,&g_301,&g_298,&g_301,&g_298,&l_487,(void*)0,&l_487},{&l_71,&l_487,&g_296,&g_301,&l_71,&g_301,&l_487,(void*)0,(void*)0,&g_301},{&l_71,(void*)0,&l_487,&g_301,(void*)0,&g_301,&l_487,&l_487,(void*)0,(void*)0},{&g_296,(void*)0,&g_296,&g_301,&l_71,&l_487,&g_296,(void*)0,(void*)0,&l_487},{&l_487,(void*)0,&l_487,&g_301,&g_301,&g_296,&g_296,(void*)0,(void*)0,&g_296},{(void*)0,&l_487,&g_298,&g_301,&g_298,&g_301,&g_298,&l_487,(void*)0,&l_487}},{{&l_71,&l_487,&g_296,&g_301,&l_71,&g_301,&l_487,(void*)0,(void*)0,&g_301},{&l_71,(void*)0,&l_487,&g_301,(void*)0,&g_301,&l_487,&l_487,(void*)0,(void*)0},{&g_296,(void*)0,&g_296,&g_301,&l_71,&l_487,&g_296,&g_296,(void*)0,&l_71},{&g_301,&g_296,(void*)0,(void*)0,&l_71,&l_71,&g_296,&g_301,(void*)0,&g_296},{(void*)0,&l_487,&l_71,(void*)0,&l_71,(void*)0,&l_71,&l_487,(void*)0,&l_487},{&g_298,&g_301,&l_487,(void*)0,&g_298,&g_298,&l_71,&g_301,(void*)0,&g_296},{&l_487,&g_301,&l_71,(void*)0,(void*)0,(void*)0,(void*)0,&g_301,(void*)0,&g_301}}};
                const int16_t *l_574 = &l_528;
                const int16_t **l_573 = &l_574;
                const int16_t ***l_572 = &l_573;
                uint32_t l_617 = 0x19DB2DD7L;
                uint32_t *l_632 = &g_149;
                int i, j, k;
lbl_621:
                if ((~(safe_sub_func_int8_t_s_s((-9L), (+((g_521 == &l_322) <= (g_296 &= ((void*)0 != &g_289))))))))
                {
                    int32_t l_526 = 0L;
                    int32_t l_534 = 0xCA60C2E2L;
                    int32_t l_536[8] = {0xF70BEC53L,(-1L),0xF70BEC53L,(-1L),0xF70BEC53L,(-1L),0xF70BEC53L,(-1L)};
                    uint64_t l_537 = 18446744073709551615UL;
                    int i;
                    for (l_91 = 0; (l_91 != 32); l_91 = safe_add_func_int8_t_s_s(l_91, 4))
                    {
                        uint16_t *l_540[9] = {&g_35[0],&g_35[0],&g_35[0],&g_35[0],&g_35[0],&g_35[0],&g_35[0],&g_35[0],&g_35[0]};
                        int8_t *l_549[10][5][4] = {{{&g_301,&g_301,&g_298,&g_301},{&l_71,&l_71,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_487},{&g_298,&g_296,&g_298,&g_296},{&l_71,&g_301,&g_298,(void*)0}},{{&g_296,(void*)0,(void*)0,&l_487},{&g_298,&g_301,&g_296,&l_487},{&g_296,&l_487,&g_298,&g_298},{&l_487,&l_71,&g_298,&g_298},{&g_298,&g_298,&l_71,(void*)0}},{{(void*)0,(void*)0,&g_298,(void*)0},{&g_298,&g_301,(void*)0,&g_298},{&g_298,&g_301,(void*)0,(void*)0},{&g_301,(void*)0,(void*)0,(void*)0},{&l_71,&g_298,(void*)0,&g_298}},{{&g_301,&l_71,(void*)0,&g_298},{(void*)0,&l_487,(void*)0,&l_487},{&l_487,&g_301,(void*)0,&l_487},{&l_71,(void*)0,&l_71,(void*)0},{&g_301,&g_301,(void*)0,&g_296}},{{&g_298,&g_296,(void*)0,&l_487},{&l_71,(void*)0,&g_298,(void*)0},{(void*)0,&l_71,(void*)0,&g_301},{(void*)0,&g_301,&g_298,&g_298},{&g_296,&g_296,&l_487,&g_298}},{{&g_296,&l_71,&g_298,&l_71},{(void*)0,&g_298,(void*)0,(void*)0},{(void*)0,&l_71,&g_298,(void*)0},{&l_71,(void*)0,(void*)0,&g_298},{&g_298,&g_301,(void*)0,&l_71}},{{&g_301,&l_71,&l_71,(void*)0},{&l_71,(void*)0,(void*)0,&l_71},{&l_487,&l_71,(void*)0,&g_298},{&l_487,&l_487,&l_71,&g_298},{&g_296,&g_298,&g_298,&g_296}},{{&g_298,&l_487,&l_71,(void*)0},{&g_298,(void*)0,&g_298,&l_487},{&l_71,&g_296,&l_487,&l_487},{&l_71,(void*)0,&g_296,(void*)0},{(void*)0,&l_487,&g_296,&g_296}},{{&g_298,&g_298,&l_71,&g_298},{&g_296,&l_487,&g_296,&g_298},{&g_301,(void*)0,&g_301,(void*)0},{&g_298,&g_298,&g_296,&l_71},{(void*)0,&l_487,&g_296,&g_296}},{{(void*)0,&g_298,&l_487,&l_71},{&l_71,&l_71,&g_298,&l_487},{&l_71,&l_487,&l_71,&g_301},{(void*)0,&g_298,&l_487,(void*)0},{&g_296,&g_298,&g_301,&g_298}}};
                        int i, j, k;
                        --l_537;
                        (***l_430) |= ((g_35[0] ^= p_39) ^ ((((*l_322) = (safe_mul_func_int16_t_s_s(g_288, ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(g_154[0], ((void*)0 != l_540[4]))), 0L)), 6)) , (((p_39 <= p_38) <= (((void*)0 == l_549[1][1][0]) ^ g_222[0])) >= p_38))))) < p_38) & g_149));
                        ++l_550[0];
                    }
                    ++l_554;
                }
                else
                {
                    for (g_288 = 0; (g_288 <= 2); g_288 += 1)
                    {
                        if ((**l_431))
                            break;
                        return p_37;
                    }
                    for (g_57 = 1; (g_57 >= 0); g_57 -= 1)
                    {
                        int i;
                        l_66[3][1] = (g_222[(g_57 + 1)] , (void*)0);
                    }
                }
                if (((*g_67) ^= ((safe_lshift_func_int8_t_s_u((((((~(safe_rshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u(((void*)0 == p_37), (g_221 > (safe_add_func_uint16_t_u_u((!((safe_mod_func_uint8_t_u_u(p_39, (l_529 = p_38))) & (*g_232))), (safe_rshift_func_int16_t_s_u(((*g_232) , (l_572 == (void*)0)), l_575))))))) ^ l_527), p_38))) <= 0L) < p_39) | g_173[3][1][7]) <= l_576), 2)) , 0x925CC9C2L)))
                {
                    uint32_t *l_577 = &l_467;
                    int64_t ***l_595 = (void*)0;
                    int32_t l_599 = (-1L);
                    int16_t ** const *l_616 = &l_309[2][0];
                    if ((0xED5A8BE2L | ((*l_577) = 0x09A4EDE9L)))
                    {
                        l_535[9] ^= (*p_37);
                    }
                    else
                    {
                        int16_t l_581 = 0L;
                        int64_t ****l_596 = &l_595;
                        int32_t l_598[5][3] = {{1L,0xC4FDE97FL,1L},{1L,0xC4FDE97FL,1L},{1L,0xC4FDE97FL,1L},{1L,0xC4FDE97FL,1L},{1L,0xC4FDE97FL,1L}};
                        int32_t l_600 = (-1L);
                        uint64_t *l_603 = &l_455;
                        int i, j;
                        (*p_37) = l_578;
                        l_533[4] ^= (l_600 = ((*p_37) = (safe_add_func_int16_t_s_s((l_581 &= 0x8239L), ((!(safe_sub_func_int64_t_s_s(((safe_add_func_int32_t_s_s(((p_39 , ((~((((l_599 = ((l_598[4][1] = ((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((0xE672D9D1L & g_233), 7)) ^ (safe_mul_func_int8_t_s_s((g_296 ^= (((l_594[0] ^ 0xC352L) | 8L) , ((*g_67) != ((((*l_596) = l_595) == l_597) , (**l_431))))), 5UL))), (-1L))) != l_530)) == p_38)) , (-1L)) , p_39) & 0L)) > g_298)) <= p_39), (*g_67))) , g_506), l_535[7]))) < 0xA7AED6EEL)))));
                        (*p_37) = (safe_sub_func_int8_t_s_s((((*l_603) = 0UL) != (safe_sub_func_uint32_t_u_u(p_38, ((g_299 && p_38) || ((void*)0 != l_606))))), (18446744073709551606UL > p_38)));
                    }
                    for (l_409 = (-18); (l_409 >= (-16)); ++l_409)
                    {
                        int16_t l_615 = (-2L);
                        (**g_433) = (p_37 = func_43(p_37, ((safe_add_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((((0UL >= ((((*g_232) = (safe_rshift_func_uint8_t_u_u((((((l_615 > (l_616 == (void*)0)) , (**l_431)) == ((((*g_232) || (g_301 = p_38)) , (((**l_484) &= ((**l_606) , 0L)) >= l_617)) == 0x17L)) , p_38) & p_38), 7))) == 0xF1L) , (*g_232))) > 0x2E5E096BL) , p_39), l_618)), 0x6A0846ABL)) , (*g_67))));
                        if ((*p_37))
                            continue;
                        if (l_553)
                            break;
                        return p_37;
                    }
                    l_530 = (*p_37);
                }
                else
                {
                    for (l_531 = 0; (l_531 > 22); l_531 = safe_add_func_uint32_t_u_u(l_531, 4))
                    {
                        if (p_39)
                            goto lbl_621;
                    }
                    for (l_387 = 0; (l_387 == 27); l_387 = safe_add_func_int8_t_s_s(l_387, 1))
                    {
                        return p_37;
                    }
                }
                l_532 |= (safe_add_func_uint64_t_u_u(((g_299 == (0xD366L | g_296)) != p_38), (safe_mul_func_uint16_t_u_u(((g_300 &= (p_39 & ((**l_606) | (safe_add_func_int8_t_s_s((g_298 |= (safe_add_func_uint32_t_u_u((((*p_37) | 4294967286UL) , ((*l_632) &= p_38)), p_39))), (**l_606)))))) > g_221), (***l_430)))));
            }
            else
            {
                uint64_t *l_657[9][1];
                int32_t l_659 = (-1L);
                int32_t l_660 = 0x874A9FF5L;
                int8_t l_665 = 0x61L;
                int32_t l_667 = 0x8D53462FL;
                int32_t l_669 = 0L;
                int32_t l_671 = 1L;
                int32_t l_673 = (-3L);
                int32_t l_674 = 0x5A4C7E76L;
                int32_t l_675 = 0xAEE76299L;
                int32_t l_676 = 1L;
                int32_t l_678 = 0x04BEB36CL;
                int32_t l_679 = 0xFC27957CL;
                int32_t l_680 = 0x132536EBL;
                int32_t l_681[4];
                int16_t **l_699 = &g_195;
                int64_t ** const **l_721 = (void*)0;
                uint32_t *l_726 = &g_392;
                int16_t * const ** const *l_773 = (void*)0;
                int32_t * const ***l_793 = (void*)0;
                int32_t * const ****l_792[7][9][2] = {{{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,(void*)0},{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,(void*)0},{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,(void*)0}},{{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,(void*)0},{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,(void*)0},{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,(void*)0}},{{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,(void*)0},{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,(void*)0},{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,(void*)0}},{{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,(void*)0},{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,(void*)0},{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,(void*)0}},{{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,(void*)0},{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,(void*)0},{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,(void*)0}},{{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,(void*)0},{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,(void*)0},{&l_793,(void*)0},{(void*)0,&l_793},{(void*)0,&l_793}},{{&l_793,&l_793},{&l_793,&l_793},{&l_793,&l_793},{&l_793,&l_793},{&l_793,&l_793},{&l_793,&l_793},{&l_793,&l_793},{&l_793,&l_793},{&l_793,&l_793}}};
                int64_t l_828 = 5L;
                int i, j, k;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_657[i][j] = &g_288;
                }
                for (i = 0; i < 4; i++)
                    l_681[i] = 0x26D0516DL;
                for (g_392 = 29; (g_392 <= 38); g_392++)
                {
                    uint64_t l_637[3][4][8] = {{{0x0AADA7C75178C532LL,0UL,0xBA53C01A20D9958DLL,0xC8F307288E2C7616LL,0xBA53C01A20D9958DLL,0UL,0x0AADA7C75178C532LL,0x0A61FD382A02EFBALL},{0UL,18446744073709551608UL,18446744073709551615UL,0x4D43D9B215BA257FLL,18446744073709551614UL,0xC774D1C4B744C019LL,18446744073709551615UL,0x3AC74AE0FD203CC9LL},{0xA1060E76F8E8EABALL,18446744073709551615UL,0x4D43D9B215BA257FLL,0UL,18446744073709551614UL,0xA6394C18462BAA30LL,0xC8F307288E2C7616LL,0xC8F307288E2C7616LL},{0UL,0xBA53C01A20D9958DLL,0x3AC74AE0FD203CC9LL,0x3AC74AE0FD203CC9LL,0xBA53C01A20D9958DLL,0UL,1UL,0xA1060E76F8E8EABALL}},{{0x0AADA7C75178C532LL,18446744073709551615UL,0xA1060E76F8E8EABALL,0UL,3UL,0xB5EE11520CFEC373LL,0xC774D1C4B744C019LL,0UL},{18446744073709551608UL,0x4D43D9B215BA257FLL,1UL,0UL,0x3AC74AE0FD203CC9LL,0xA1060E76F8E8EABALL,0xB1B51D8E311F2FCBLL,0xA1060E76F8E8EABALL},{0xA6394C18462BAA30LL,0x3AC74AE0FD203CC9LL,0xE2F21E255EBC0A6ELL,0x3AC74AE0FD203CC9LL,0xA6394C18462BAA30LL,18446744073709551615UL,3UL,0xC8F307288E2C7616LL},{3UL,0xA1060E76F8E8EABALL,0xB5EE11520CFEC373LL,0UL,0xC8F307288E2C7616LL,18446744073709551615UL,0UL,0x3AC74AE0FD203CC9LL}},{{0xE2F21E255EBC0A6ELL,1UL,0xB5EE11520CFEC373LL,0x4D43D9B215BA257FLL,0x0A61FD382A02EFBALL,3UL,3UL,0x0A61FD382A02EFBALL},{0xC8F307288E2C7616LL,0xE2F21E255EBC0A6ELL,0xE2F21E255EBC0A6ELL,0xC8F307288E2C7616LL,0UL,0UL,0xB1B51D8E311F2FCBLL,0UL},{0x4D43D9B215BA257FLL,0xB5EE11520CFEC373LL,1UL,0xE2F21E255EBC0A6ELL,0UL,0xBA53C01A20D9958DLL,0xC774D1C4B744C019LL,0UL},{0UL,0xB5EE11520CFEC373LL,0xA1060E76F8E8EABALL,3UL,1UL,0UL,1UL,3UL}}};
                    int32_t l_638 = 0L;
                    uint32_t *l_639 = &l_467;
                    int32_t l_672[2][4][2] = {{{0x3CB0AE59L,(-1L)},{(-1L),0x3CB0AE59L},{(-1L),(-1L)},{0x3CB0AE59L,(-1L)}},{{(-1L),0x3CB0AE59L},{(-1L),(-1L)},{0x3CB0AE59L,(-1L)},{(-1L),0x3CB0AE59L}}};
                    int32_t l_703 = 0L;
                    int i, j, k;
                    l_659 = (safe_sub_func_uint32_t_u_u(((*l_639) ^= ((l_637[2][2][7] &= 0x1699B2DEL) ^ l_638)), (g_4 != (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((((l_638 == ((safe_add_func_int32_t_s_s((p_38 < (safe_add_func_int32_t_s_s((1UL != ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((p_38 || 0xFDACL), 3)), 4)) != (g_149 = (&g_506 == l_657[5][0])))), g_173[2][0][8]))), 4294967289UL)) != p_39)) && p_39) == p_39), 0xECL)), p_39)))), g_658)))));
                    l_661--;
                    if ((***g_433))
                    {
                        int32_t l_666 = 8L;
                        int32_t l_668 = 0xE779E162L;
                        int32_t l_670[5][9][3] = {{{0x2A7AB228L,0x463D9F51L,3L},{0xE22995FAL,0xE22995FAL,0x55E80177L},{0x2A7AB228L,0x463D9F51L,3L},{0xE22995FAL,0xE22995FAL,0x55E80177L},{0x2A7AB228L,0x463D9F51L,3L},{0xE22995FAL,0xE22995FAL,0x55E80177L},{0x2A7AB228L,0x463D9F51L,3L},{0xE22995FAL,0xE22995FAL,0x55E80177L},{0x2A7AB228L,0x463D9F51L,3L}},{{0xE22995FAL,0xE22995FAL,0x55E80177L},{0x2A7AB228L,0x463D9F51L,3L},{0xE22995FAL,0xE22995FAL,0x55E80177L},{0x2A7AB228L,0x463D9F51L,3L},{0xE22995FAL,0xE22995FAL,0x55E80177L},{0x2A7AB228L,0x463D9F51L,3L},{0xE22995FAL,0xE22995FAL,0x55E80177L},{0x2A7AB228L,0x463D9F51L,3L},{0xE22995FAL,0xE22995FAL,0x55E80177L}},{{0x2A7AB228L,0x463D9F51L,3L},{0xE22995FAL,0xE22995FAL,0xE22995FAL},{0xD9A45676L,0x48A48C7EL,0x2A7AB228L},{0x135EABB7L,0x135EABB7L,0xE22995FAL},{0xD9A45676L,0x48A48C7EL,0x2A7AB228L},{0x135EABB7L,0x135EABB7L,0xE22995FAL},{0xD9A45676L,0x48A48C7EL,0x2A7AB228L},{0x135EABB7L,0x135EABB7L,0xE22995FAL},{0xD9A45676L,0x48A48C7EL,0x2A7AB228L}},{{0x135EABB7L,0x135EABB7L,0xE22995FAL},{0xD9A45676L,0x48A48C7EL,0x2A7AB228L},{0x135EABB7L,0x135EABB7L,0xE22995FAL},{0xD9A45676L,0x48A48C7EL,0x2A7AB228L},{0x135EABB7L,0x135EABB7L,0xE22995FAL},{0xD9A45676L,0x48A48C7EL,0x2A7AB228L},{0x135EABB7L,0x135EABB7L,0xE22995FAL},{0xD9A45676L,0x48A48C7EL,0x2A7AB228L},{0x135EABB7L,0x135EABB7L,0xE22995FAL}},{{0xD9A45676L,0x48A48C7EL,0x2A7AB228L},{0x135EABB7L,0x135EABB7L,0xE22995FAL},{0xD9A45676L,0x48A48C7EL,0x2A7AB228L},{0x135EABB7L,0x135EABB7L,0xE22995FAL},{0xD9A45676L,0x48A48C7EL,0x2A7AB228L},{0x135EABB7L,0x135EABB7L,0xE22995FAL},{0xD9A45676L,0x48A48C7EL,0x2A7AB228L},{0x135EABB7L,0x135EABB7L,0xE22995FAL},{0xD9A45676L,0x48A48C7EL,0x2A7AB228L}}};
                        int64_t l_677 = 0x6302F01519CBF16DLL;
                        uint64_t l_685 = 0x2AC723CC68474454LL;
                        int i, j, k;
                        l_685--;
                    }
                    else
                    {
                        int8_t *l_700[2][6][10] = {{{&g_301,&l_665,&g_296,&l_487,&g_296,&l_665,&g_301,&l_682,(void*)0,(void*)0},{&g_296,&g_301,(void*)0,&l_682,&g_298,&g_296,&l_682,(void*)0,(void*)0,&l_682},{(void*)0,&g_301,&l_682,&l_682,&g_301,(void*)0,&g_301,(void*)0,&l_682,&g_296},{(void*)0,&l_665,(void*)0,(void*)0,&l_682,(void*)0,&g_298,(void*)0,&g_298,(void*)0},{(void*)0,(void*)0,&g_296,(void*)0,(void*)0,(void*)0,(void*)0,&l_487,(void*)0,(void*)0},{(void*)0,(void*)0,&l_487,(void*)0,(void*)0,&g_296,&g_301,&g_301,&g_296,(void*)0}},{{&g_296,(void*)0,(void*)0,&g_296,(void*)0,&l_665,(void*)0,(void*)0,&l_682,(void*)0},{&g_301,(void*)0,&l_682,&g_296,&l_682,(void*)0,(void*)0,(void*)0,&l_682,&g_296},{(void*)0,&g_301,(void*)0,&g_296,&g_301,(void*)0,&l_682,&g_298,&g_296,&l_682},{&l_682,(void*)0,(void*)0,(void*)0,&g_298,(void*)0,(void*)0,&g_298,(void*)0,(void*)0},{&l_682,&l_682,(void*)0,(void*)0,&g_296,&g_301,&l_487,(void*)0,&g_298,&l_665},{(void*)0,&l_682,&l_682,(void*)0,&l_487,&l_682,&l_682,&l_487,(void*)0,(void*)0}}};
                        int32_t l_702 = (-2L);
                        int i, j, k;
                        l_702 = (l_669 ^= (safe_rshift_func_int8_t_s_u((6L || ((**l_431) = (safe_lshift_func_uint8_t_u_s((~(((((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((l_681[0] = ((l_681[0] , ((g_149 , &g_357[4][2]) == (void*)0)) , (g_57 && (l_699 != (void*)0)))), 6)) & p_38), 65529UL)) || l_701) , 0UL) , 4294967292UL) && l_659)), (**l_606))))), p_39)));
                        (**l_431) &= (p_37 != l_383);
                    }
                    if ((***g_433))
                    {
                        (**g_434) = (**g_434);
                        --l_704[4];
                        g_707 = &g_432[0][0][0];
                    }
                    else
                    {
                        uint64_t l_708 = 0x1FBCDBAA360C4AD0LL;
                        (**g_433) = p_37;
                        --l_708;
                    }
                }
                if ((safe_div_func_int16_t_s_s(((*p_37) , (0x51L > (safe_rshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((p_39 || (((((p_38 < (((*l_726) = ((l_722 = ((&g_521 == (void*)0) , &l_484)) == l_724)) || ((void*)0 != &g_521))) < g_289) <= p_39) , (-7L)) && 0xD4B6416B600E8EAELL)), g_301)), (*g_232))) ^ 18446744073709551615UL), l_680)))), (***l_430))))
                {
                    uint8_t l_731 = 0UL;
                    int32_t l_742[9] = {6L,6L,6L,6L,6L,6L,6L,6L,6L};
                    int16_t * const *l_748 = &g_195;
                    int16_t * const **l_747 = &l_748;
                    int16_t * const ***l_749 = &l_747;
                    uint16_t *l_750 = &l_554;
                    int32_t **l_757 = &g_67;
                    int64_t *l_815 = &l_810[2];
                    int i;
                    for (g_305 = 0; (g_305 == 53); g_305 = safe_add_func_uint16_t_u_u(g_305, 4))
                    {
                        int64_t **l_734 = &g_522;
                        l_742[1] |= (0x69L >= (safe_lshift_func_uint16_t_u_u((l_731 != 0xEAF69D0BL), ((((*p_37) & ((&l_322 != l_734) < (safe_rshift_func_int16_t_s_s(((l_737 != (safe_mod_func_int64_t_s_s(((((((safe_rshift_func_int8_t_s_s(1L, 7)) , (&g_35[0] == (void*)0)) < g_658) & 0UL) < g_288) || p_39), 1UL))) | 255UL), l_659)))) , (***l_430)) ^ 0xADBE76D1DCCB7517LL))));
                        return (**g_433);
                    }
                    if ((safe_sub_func_int64_t_s_s((((((g_745 == ((*l_749) = l_747)) >= (((*l_750)++) >= (((safe_add_func_uint64_t_u_u((0xD2CE971A8FC5FAB0LL != ((p_38 || (((*g_433) = l_757) != &p_37)) != ((safe_add_func_uint32_t_u_u(g_173[1][0][4], (5L & ((safe_mod_func_uint8_t_u_u(((!(safe_lshift_func_int16_t_s_u((g_767 < 0x97L), g_303[2][0]))) == 0xD0446CA0L), 255UL)) != l_768)))) <= 0x98DFL))), (**l_606))) , l_769) == l_773))) == p_39) || l_679) , p_39), 18446744073709551607UL)))
                    {
                        (*l_431) = (*g_434);
                    }
                    else
                    {
                        uint64_t l_781 = 0x1DE6527D949D2C06LL;
                        int32_t l_802 = 0L;
                        l_66[4][0] = func_40((*l_757), ((((safe_add_func_uint64_t_u_u((((+(safe_lshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u(((l_781 , ((*l_726) = (((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(0x3532L, (l_802 = (p_39 & (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((void*)0 != l_750), ((l_794 = l_792[5][4][1]) == (void*)0))), (safe_mod_func_int32_t_s_s((p_39 == g_35[0]), (*l_798))))))))) & 0x87L), 1L)), (***l_430))) , 0xDC4AL) , g_149))) < (*p_37)), 0xEFL)) , 0x3AL), 3))) , g_300) < g_221), 1L)) && p_38) >= 5UL) , (*p_37)));
                        return p_37;
                    }
                    for (g_300 = 0; g_300 < 5; g_300 += 1)
                    {
                        for (l_391 = 0; l_391 < 2; l_391 += 1)
                        {
                            l_772[g_300][l_391] = (void*)0;
                        }
                    }
                    for (g_506 = 0; (g_506 != 11); g_506 = safe_add_func_uint32_t_u_u(g_506, 1))
                    {
                        int8_t *l_809 = &g_296;
                        uint32_t *l_811 = &l_467;
                        int32_t l_812 = 0x57857B3EL;
                        (*l_798) = (((((**g_745) = (*l_699)) != &l_664[0]) | ((((((**l_431) , (g_221 ^ ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(250UL, ((*l_809) = g_269))), l_810[5])) , ((*l_811) = ((*l_726) = 0x774F4906L))))) || (((0xCF41L ^ g_392) & 0xB4L) && g_357[0][2])) != l_812) < g_233) , 0xAFCDF1E0BD94375FLL)) >= 255UL);
                        if ((**l_757))
                            continue;
                        (**l_797) = (safe_mul_func_int16_t_s_s((p_39 , (g_300 = p_38)), (l_812 &= (0UL & (&p_37 == &p_37)))));
                        (***l_796) &= (((3UL <= (((*l_484) = (*g_521)) == l_815)) | (!(((l_812 ^ ((g_392 = ((p_38 ^ (((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((p_39 | (safe_unary_minus_func_int16_t_s((safe_add_func_uint8_t_u_u((((p_38 ^ (safe_mul_func_uint16_t_u_u((l_826 != l_827[2][6]), l_812))) & p_38) && p_39), g_303[2][3]))))), l_812)) != p_39), 0xF1CDL)) , (void*)0) != l_809)) , 0x35D22876L)) , (**l_431))) | p_38) & 0x9E472377L))) <= p_39);
                    }
                }
                else
                {
                    uint8_t l_829 = 0x38L;
                    l_829--;
                    (**l_797) &= (safe_lshift_func_int8_t_s_u((((*l_726) = (safe_mul_func_uint16_t_u_u(((p_39 , (safe_mod_func_uint32_t_u_u(((~p_39) < (safe_mul_func_uint16_t_u_u(l_841, (((l_842 == l_309[2][0]) , 0x12FAL) >= p_39)))), g_392))) , ((g_149 ^ (*p_37)) > 0UL)), p_38))) & 0xE50A437FL), (*g_232)));
                    (*l_798) |= (!((safe_rshift_func_int8_t_s_u(g_222[2], ((safe_mod_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((g_300 = (((((*g_745) = l_853) != l_854[1][3]) || (safe_sub_func_int8_t_s_s(0x45L, (((***g_433) |= 0x9150B35BL) , p_39)))) , (p_39 == (safe_lshift_func_uint16_t_u_s(((p_39 != (**l_431)) == (*g_232)), 2))))), g_222[0])), 9)) ^ g_233) || l_829), p_39)) , (***l_826)))) ^ p_38));
                }
                --l_859;
            }
        }
        for (l_682 = 0; (l_682 != 19); l_682 = safe_add_func_int32_t_s_s(l_682, 1))
        {
            int16_t l_889 = 0xD455L;
            int32_t l_890[3][4] = {{0xB664D375L,1L,0x2967420AL,1L},{1L,(-4L),0x2967420AL,0x2967420AL},{0xB664D375L,0xB664D375L,1L,0x2967420AL}};
            int32_t l_891 = (-1L);
            uint8_t l_948 = 0x4DL;
            uint16_t *l_962 = &l_550[1];
            int32_t l_1000 = 0L;
            int32_t *l_1014[4];
            const int8_t *l_1068 = &g_298;
            int16_t ***l_1086 = &l_854[0][6];
            int i, j;
            for (i = 0; i < 4; i++)
                l_1014[i] = &g_54;
            if ((*p_37))
            {
                int8_t l_871 = 0x37L;
                int32_t l_888 = (-8L);
                int32_t l_918 = 7L;
                int32_t l_919 = 0xF26D9FC8L;
                const int16_t **l_966 = &l_843;
                const int16_t ***l_965 = &l_966;
                uint16_t l_999 = 65534UL;
                l_891 |= (safe_add_func_uint16_t_u_u(0x8E6EL, ((!(+((***l_430) ^= l_868))) & (l_890[2][2] = (((safe_mod_func_uint8_t_u_u((l_871 | (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s((((((((safe_mul_func_uint8_t_u_u((((1L || ((l_871 ^ ((safe_lshift_func_uint16_t_u_s(g_357[4][2], 11)) && (safe_div_func_uint8_t_u_u(255UL, p_39)))) || (safe_rshift_func_uint8_t_u_u((l_888 = 0xD8L), p_38)))) , p_38) >= 0x64F6ECFF0EA2CEE9LL), 0xFEL)) || 0L) , l_871) > p_39) > p_39) < (-8L)) < 1UL), 0x50A996C8CF938C30LL)), l_889)), g_799))), l_871)) , g_658) < l_871)))));
                for (l_891 = 0; (l_891 > (-21)); --l_891)
                {
                    uint32_t *l_914 = &l_91;
                    int32_t l_916 = 1L;
                    int16_t *l_926 = &l_889;
                    uint32_t *l_940 = &g_149;
                    uint64_t *l_946 = &g_357[8][1];
                    uint32_t *l_947[4][8][5] = {{{&g_920,(void*)0,&l_661,&l_661,(void*)0},{&l_661,&l_661,&l_661,&g_78,&g_78},{&l_661,&l_661,&l_661,&l_661,&g_78},{(void*)0,&g_920,&g_78,&g_920,(void*)0},{&l_661,&g_920,&l_661,(void*)0,&l_661},{&l_661,&l_661,&g_78,(void*)0,(void*)0},{&g_920,&l_661,&l_661,&g_920,&l_661},{&g_920,(void*)0,&l_661,&l_661,(void*)0}},{{&l_661,&l_661,&l_661,&g_78,&g_78},{&l_661,&l_661,&l_661,&l_661,&g_78},{(void*)0,&g_920,&g_78,&g_920,(void*)0},{&l_661,&g_920,&l_661,(void*)0,&l_661},{&l_661,&l_661,&g_78,(void*)0,(void*)0},{&g_920,&l_661,&l_661,&g_920,&l_661},{&g_920,(void*)0,&l_661,&l_661,(void*)0},{&l_661,&l_661,&l_661,&g_78,&g_78}},{{&l_661,&l_661,&l_661,&l_661,&g_78},{(void*)0,&g_920,&g_78,&g_920,(void*)0},{&l_661,&g_920,&l_661,(void*)0,&l_661},{&l_661,&l_661,&g_78,(void*)0,(void*)0},{&g_920,&l_661,&l_661,&g_920,&l_661},{&g_920,(void*)0,&l_661,&l_661,(void*)0},{&l_661,&l_661,&l_661,&g_78,&g_78},{&l_661,&l_661,&l_661,&l_661,&g_78}},{{(void*)0,&g_920,&g_78,&g_920,(void*)0},{&l_661,&g_920,&l_661,(void*)0,&l_661},{&l_661,&l_661,&g_78,(void*)0,(void*)0},{&g_920,&l_661,&l_661,&g_920,&l_661},{&g_920,(void*)0,&l_661,&l_661,(void*)0},{&l_661,&l_661,&l_661,&g_78,&g_78},{&l_661,&l_661,&l_661,&l_661,&g_78},{(void*)0,&g_920,&g_78,&g_920,(void*)0}}};
                    int32_t l_961 = 0x45DEF579L;
                    int32_t l_997 = 7L;
                    uint32_t l_1002 = 0xD1EE7484L;
                    uint16_t **l_1011 = (void*)0;
                    uint16_t **l_1012[3][3][2] = {{{&l_962,(void*)0},{&l_962,(void*)0},{&l_962,(void*)0}},{{&l_962,(void*)0},{&l_962,(void*)0},{&l_962,(void*)0}},{{&l_962,(void*)0},{&l_962,(void*)0},{&l_962,(void*)0}}};
                    int i, j, k;
                    if ((safe_add_func_uint32_t_u_u((p_39 & ((*p_37) | (-1L))), (((*l_914) = ((+((safe_sub_func_int32_t_s_s((*p_37), (safe_mod_func_int8_t_s_s((((p_39 == (((g_299 | (safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(g_233, ((safe_rshift_func_uint16_t_u_u((0x27L ^ (+(safe_rshift_func_int16_t_s_s((g_289 , p_39), 1)))), g_506)) , g_269))) <= (*p_37)), (*g_232))), (***l_826)))) != 0x2EFC00B8841CA71ALL) < 65535UL)) >= 1UL) , g_78), p_39)))) > 0UL)) , l_888)) , 1UL))))
                    {
                        if (g_915)
                            break;
                    }
                    else
                    {
                        int8_t *l_928[8] = {&g_301,&l_71,&l_71,&g_301,&l_71,&l_71,&g_301,&l_71};
                        int8_t **l_927 = &l_928[3];
                        int64_t l_935 = (-9L);
                        uint32_t *l_936 = (void*)0;
                        uint32_t *l_937 = &g_658;
                        int i;
                        ++g_920;
                        (***g_433) = (safe_sub_func_uint64_t_u_u(((((((p_38 > (!0x2BL)) , l_926) == (**g_745)) >= ((((*l_927) = (void*)0) == &g_298) | (((safe_add_func_uint64_t_u_u(g_506, (l_890[2][2] &= ((((*l_937) ^= ((((((safe_rshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((((void*)0 != &l_125) || g_289) , p_39), l_935)), 6)) != 0L) ^ (***l_826)) <= g_303[2][4]) >= p_38) <= 0L)) != (**g_434)) , (***l_430))))) || l_935) > 0UL))) > 0xA7L) , p_38), g_35[0]));
                        if ((**g_434))
                            continue;
                        return l_937;
                    }
                    if ((((*g_232) = (safe_mul_func_uint16_t_u_u((((*l_940) = 0UL) == (7L == ((*l_926) = ((0x76L | ((g_78 = ((**l_431) & ((safe_sub_func_int8_t_s_s(l_916, (0x7FE06332177EF8EDLL && ((*l_946) |= ((g_506 , (*g_232)) & ((~(safe_mul_func_int8_t_s_s((g_222[0] , p_39), l_889))) < 65535UL)))))) , (*g_67)))) , l_948)) && (***l_826))))), 0x22C3L))) | p_39))
                    {
                        int8_t l_960[3][1][6];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 6; k++)
                                    l_960[i][j][k] = 1L;
                            }
                        }
                        l_961 ^= (p_38 & ((safe_lshift_func_int8_t_s_u(((((+(0xA492B540L != (p_39 , ((safe_mod_func_int64_t_s_s((((**l_431) = ((((l_888 = 1UL) > (0x2846BB14L & (((((safe_add_func_int64_t_s_s((safe_div_func_int64_t_s_s(((((((*l_940) = (**l_431)) ^ (safe_rshift_func_uint8_t_u_u((&l_309[4][1] == (void*)0), (*g_232)))) , 0xB0A852FA194BEDDBLL) | p_39) != 1L), p_38)), 0x88B364B9C335103ELL)) == p_39) ^ l_916) , g_289) , 0x90FDD85BL))) >= l_960[2][0][1]) , l_960[2][0][1])) <= 5UL), p_39)) || 18446744073709551606UL)))) , &l_430) == (void*)0) && 0x847C97700D717B39LL), l_891)) <= p_39));
                    }
                    else
                    {
                        l_888 = ((***l_430) = 0xAF15B60BL);
                        (***g_433) = ((void*)0 == l_962);
                    }
                    for (l_91 = 0; (l_91 <= 6); l_91++)
                    {
                        const int16_t l_998 = 0xF226L;
                        (***g_433) = (((((void*)0 != p_37) , l_965) == &g_746) <= ((*l_962) = 65535UL));
                        if ((***g_433))
                            break;
                        l_918 = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((0x6C98L && ((l_1000 ^= (safe_mod_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u((((*g_67) = 0x2FDDBB7FL) || (safe_lshift_func_int8_t_s_u((((*l_926) ^= (safe_sub_func_uint16_t_u_u(((((safe_div_func_int8_t_s_s((l_999 = (safe_unary_minus_func_uint8_t_u((((((***l_430) , ((((+((g_221 > (**g_434)) , ((safe_mod_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((((((*l_940) = (((safe_add_func_int8_t_s_s(0x6FL, ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((*p_37), (18446744073709551614UL == (p_38 ^ 0x44L)))), l_871)), p_39)) < 0x1AL))) || g_506) == l_961)) == g_4) != p_39) == 0UL), p_38)) < (-4L)), l_890[2][2])) >= p_39))) <= g_300) <= 0xA782763EL) , l_997)) , (*g_232)) , (*g_232)) ^ l_998)))), 4L)) != l_916) , 7L) ^ (*p_37)), g_305))) & p_39), 4))), l_997)) <= p_38), 65535UL))) & p_38)), l_891)), 12));
                        ++l_1002;
                    }
                    l_1014[0] = func_40(&l_888, (((l_871 && ((***l_826) & ((safe_div_func_uint16_t_u_u(((l_919 = (g_767 >= (safe_add_func_uint32_t_u_u((((((p_38 ^ (l_871 ^ 0x99779E52170B1315LL)) < ((safe_mod_func_uint64_t_u_u((l_926 == (g_1013 = (void*)0)), g_222[2])) || g_392)) <= 0xC294L) >= 0L) == 0UL), g_54)))) , l_1000), g_1001)) < g_233))) ^ (***l_826)) | 0x8BCF432FL));
                }
            }
            else
            {
                uint32_t l_1019 = 4UL;
                int32_t l_1022[4] = {2L,2L,2L,2L};
                uint64_t *l_1025 = (void*)0;
                uint64_t *l_1026 = &g_506;
                int8_t l_1033[1][7] = {{0x74L,0x02L,0x02L,0x74L,0x02L,0x02L,0x74L}};
                uint16_t **l_1036 = &l_962;
                uint16_t ***l_1035 = &l_1036;
                uint16_t ****l_1034 = &l_1035;
                int i, j;
                if ((((safe_add_func_int16_t_s_s((g_300 = (((safe_add_func_uint16_t_u_u(l_1019, ((p_37 != ((**l_826) = p_37)) == p_39))) || ((safe_lshift_func_uint16_t_u_u(((void*)0 != &g_357[4][2]), ((*l_962) = 65535UL))) == p_38)) , (l_1022[0] = p_38))), 0x464DL)) , &l_889) != (*g_746)))
                {
                    int32_t *l_1023 = &l_385;
                    (*g_434) = l_1023;
                    (*p_37) = ((***l_430) = 0x2239577BL);
                }
                else
                {
                    return p_37;
                }
                (*l_1034) = ((((*p_37) | ((!((0x98803401CE08A8F8LL | ((*l_1026) &= (***l_430))) && (safe_lshift_func_int16_t_s_u((4294967290UL | p_38), 0)))) != ((((p_39 | (safe_mul_func_int16_t_s_s(p_39, (safe_add_func_uint16_t_u_u(65535UL, p_38))))) == l_1022[0]) != l_1033[0][2]) == g_222[0]))) & 0x7CB61C5FB4FDA84CLL) , (void*)0);
            }
            for (l_618 = 0; (l_618 <= 5); l_618 += 1)
            {
                int16_t **** const l_1053 = &g_745;
                int32_t ***l_1056 = &l_431;
                int8_t l_1073 = 0x4DL;
                uint32_t l_1075 = 9UL;
                int64_t l_1095 = 0L;
                int32_t *l_1099 = &l_386;
                for (l_684 = 0; (l_684 <= 1); l_684 += 1)
                {
                    for (g_392 = 0; (g_392 <= 1); g_392 += 1)
                    {
                        int64_t l_1037 = 0x30F36ABE52FE6B41LL;
                        if (l_1037)
                            break;
                    }
                    if ((***g_433))
                        break;
                    p_37 = func_40(&l_890[1][2], l_1038);
                }
                (***g_433) = ((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0UL, p_39)), g_288)) | ((((g_154[0] = ((((safe_lshift_func_uint16_t_u_s(((p_38 > (!((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((safe_div_func_int64_t_s_s((((safe_rshift_func_int16_t_s_s(((void*)0 != l_1053), (((((safe_add_func_int64_t_s_s((l_1056 != ((0x99CE090DF21D57DELL <= (**l_431)) , l_1057)), 1UL)) ^ 0x7EBB5CED5502A877LL) , p_39) ^ g_658) ^ (***l_1056)))) ^ p_39) >= (***g_433)), g_303[1][3])) , g_303[2][4]))), (*g_232))) & p_39))) ^ (-10L)), p_39)) , &l_948) == (void*)0) , (**l_431))) && (***l_826)) < p_39) && 1L));
                (*l_431) = func_43(((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(g_57)), p_39)) , (**g_433)), (*p_37));
                for (g_915 = 5; (g_915 >= 0); g_915 -= 1)
                {
                    uint32_t ***l_1062[5] = {&g_1061,&g_1061,&g_1061,&g_1061,&g_1061};
                    int i;
                    g_1061 = g_1061;
                }
                for (g_799 = 0; (g_799 <= 2); g_799 += 1)
                {
                    int32_t l_1078[8][6][1] = {{{0xB8A19981L},{(-3L)},{0xB8A19981L},{(-3L)},{0xB8A19981L},{(-3L)}},{{0xB8A19981L},{(-3L)},{0xB8A19981L},{(-3L)},{0xB8A19981L},{(-3L)}},{{0xB8A19981L},{(-3L)},{0xB8A19981L},{(-3L)},{0xB8A19981L},{(-3L)}},{{0xB8A19981L},{(-3L)},{0xB8A19981L},{(-3L)},{0xB8A19981L},{(-3L)}},{{0xB8A19981L},{(-3L)},{0xB8A19981L},{(-3L)},{0xB8A19981L},{(-3L)}},{{0xB8A19981L},{(-3L)},{0xB8A19981L},{(-3L)},{0xB8A19981L},{(-3L)}},{{0xB8A19981L},{(-3L)},{0xB8A19981L},{(-3L)},{0xB8A19981L},{(-3L)}},{{0xB8A19981L},{(-3L)},{0xB8A19981L},{(-3L)},{0xB8A19981L},{(-3L)}}};
                    const int8_t **l_1093 = (void*)0;
                    int i, j, k;
                    if (((g_915 <= (p_37 == ((safe_sub_func_int64_t_s_s((((safe_sub_func_int16_t_s_s(l_1067, ((((((&l_701 != l_1068) < p_39) , (safe_add_func_int32_t_s_s((((safe_mul_func_int16_t_s_s(p_39, 9UL)) || (((0x36C8520AL | (*p_37)) , 6L) , p_39)) > 0x1737L), (*g_67)))) && l_1073) , l_1074) , g_57))) || 0x1769L) , p_38), (***l_1056))) , (void*)0))) && 1L))
                    {
                        int i, j;
                        ++l_1075;
                        if ((***l_1056))
                            break;
                    }
                    else
                    {
                        int16_t l_1094 = 2L;
                        uint16_t *l_1096[10];
                        int32_t l_1098 = 0xF448B63BL;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_1096[i] = &g_35[0];
                        (***l_430) ^= 0L;
                        (***l_826) &= l_1078[5][1][0];
                        l_1098 ^= (safe_lshift_func_int8_t_s_u(((safe_div_func_uint16_t_u_u(((g_35[0] = (g_767 = (((safe_mod_func_int32_t_s_s((((~((p_38 | (((l_1086 != &g_746) < (safe_add_func_uint16_t_u_u((**l_431), ((*l_962) &= (p_39 || ((g_658 = ((safe_mod_func_uint8_t_u_u(((*g_232) = (safe_div_func_uint16_t_u_u((((p_39 | (4L <= 7L)) <= ((void*)0 != l_1093)) < 0x5F86C185L), (***l_1056)))), l_1094)) || (*p_37))) == p_39)))))) < g_920)) == l_1094)) <= 0x9BL) != 0UL), (**g_434))) ^ g_173[2][0][8]) == l_1095))) < l_1078[0][3][0]), l_1097)) , p_39), 6));
                    }
                    for (l_455 = 1; (l_455 <= 5); l_455 += 1)
                    {
                        return p_37;
                    }
                }
            }
        }
    }
    else
    {
        uint16_t l_1106 = 65527UL;
        int32_t *** const **l_1112 = (void*)0;
        uint16_t **l_1119 = &g_1013;
        int8_t *l_1120 = &g_301;
        uint32_t l_1142 = 0xA78275D2L;
        int64_t ** const l_1145 = &g_522;
        int32_t l_1146 = (-1L);
        int16_t l_1235 = 3L;
        int16_t l_1236[6] = {0x9787L,0x9787L,0x9787L,0x9787L,0x9787L,0x9787L};
        int32_t l_1239 = 0xF4604B31L;
        int32_t l_1242 = 0xD30AD332L;
        int32_t l_1243 = (-4L);
        int32_t l_1244 = (-3L);
        uint64_t l_1246 = 18446744073709551608UL;
        int32_t l_1292 = 1L;
        int i;
        (*p_37) = 0x72591501L;
    }
    return p_37;
}







static int32_t * func_40(int32_t * p_41, int32_t p_42)
{
    int32_t *l_58 = &g_54;
    int32_t *l_59 = &g_54;
    int32_t *l_60 = &g_57;
    int32_t *l_61 = &g_54;
    int32_t *l_62[4];
    uint8_t l_63 = 0x4AL;
    int i;
    for (i = 0; i < 4; i++)
        l_62[i] = (void*)0;
    ++l_63;
    return l_59;
}







static int32_t * func_43(int32_t * const p_44, int32_t p_45)
{
    int64_t l_52 = 0xC3E1B8D8131DDA87LL;
    int32_t *l_53 = &g_54;
    (*l_53) = (safe_add_func_uint64_t_u_u(p_45, (l_52 < l_52)));
    return l_53;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_35[i], "g_35[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_154[i], "g_154[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_173[i][j][k], "g_173[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_221, "g_221", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_222[i], "g_222[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_303[i][j], "g_303[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_305, "g_305", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_357[i][j], "g_357[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_767, "g_767", print_hash_value);
    transparent_crc(g_799, "g_799", print_hash_value);
    transparent_crc(g_915, "g_915", print_hash_value);
    transparent_crc(g_920, "g_920", print_hash_value);
    transparent_crc(g_1001, "g_1001", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1183[i], "g_1183[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1204[i][j], "g_1204[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1317, "g_1317", print_hash_value);
    transparent_crc(g_1466, "g_1466", print_hash_value);
    transparent_crc(g_1552, "g_1552", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1626[i], "g_1626[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1659[i], "g_1659[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1674, "g_1674", print_hash_value);
    transparent_crc(g_1678, "g_1678", print_hash_value);
    transparent_crc(g_1713, "g_1713", print_hash_value);
    transparent_crc(g_1723, "g_1723", print_hash_value);
    transparent_crc(g_1868, "g_1868", print_hash_value);
    transparent_crc(g_1893, "g_1893", print_hash_value);
    transparent_crc(g_2036, "g_2036", print_hash_value);
    transparent_crc(g_2086, "g_2086", print_hash_value);
    transparent_crc(g_2183, "g_2183", print_hash_value);
    transparent_crc(g_2263, "g_2263", print_hash_value);
    transparent_crc(g_2299, "g_2299", print_hash_value);
    transparent_crc(g_2419, "g_2419", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2455[i], "g_2455[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2593, "g_2593", print_hash_value);
    transparent_crc(g_2729, "g_2729", print_hash_value);
    transparent_crc(g_2921, "g_2921", print_hash_value);
    transparent_crc(g_2962, "g_2962", print_hash_value);
    transparent_crc(g_3053, "g_3053", print_hash_value);
    transparent_crc(g_3102, "g_3102", print_hash_value);
    transparent_crc(g_3162, "g_3162", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_3226[i], "g_3226[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3325, "g_3325", print_hash_value);
    transparent_crc(g_3406, "g_3406", print_hash_value);
    transparent_crc(g_3417, "g_3417", print_hash_value);
    transparent_crc(g_3454, "g_3454", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_3506[i][j][k], "g_3506[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
