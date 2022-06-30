// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = C24BD682
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



static int32_t g_6 = 0L;
static int8_t g_21 = 1L;
static uint16_t g_29 = 0xF34FL;
static uint8_t g_44 = 0x88L;
static int32_t g_55 = 0L;
static uint16_t g_63 = 0x0AF3L;
static uint16_t * const g_62 = &g_63;
static uint64_t g_67 = 0UL;
static uint64_t *g_103[2][3][4] = {{{&g_67,(void*)0,&g_67,&g_67},{(void*)0,(void*)0,&g_67,&g_67},{&g_67,(void*)0,&g_67,&g_67}},{{&g_67,&g_67,&g_67,&g_67},{(void*)0,&g_67,&g_67,&g_67},{&g_67,(void*)0,&g_67,&g_67}}};
static int32_t g_126 = 0xBA3753CEL;
static int32_t g_129 = (-1L);
static int32_t g_131 = 0xED264C9DL;
static const uint16_t ** const g_145 = (void*)0;
static const uint16_t ** const *g_144 = &g_145;
static uint16_t **g_153 = (void*)0;
static int16_t g_156 = 0x2C11L;
static int8_t g_157 = 0xB3L;
static const int8_t g_158 = 0x4AL;
static int16_t g_159 = 0x53A5L;
static int32_t g_162 = (-1L);
static uint8_t g_194 = 0x42L;
static uint8_t g_195 = 255UL;
static int8_t g_200[2][2] = {{0xD5L,0xD5L},{0xD5L,0xD5L}};
static uint64_t g_205 = 0x9D88FCDEF65FC756LL;
static uint64_t ***g_325 = (void*)0;
static int32_t *g_345[10][3][4] = {{{&g_162,&g_129,&g_6,&g_129},{(void*)0,(void*)0,&g_6,&g_55},{(void*)0,(void*)0,&g_162,&g_162}},{{&g_6,&g_6,&g_55,(void*)0},{&g_55,&g_6,(void*)0,(void*)0},{&g_6,&g_55,&g_129,(void*)0}},{{&g_162,&g_55,(void*)0,(void*)0},{&g_55,&g_6,&g_129,&g_129},{(void*)0,(void*)0,&g_131,&g_162}},{{&g_6,(void*)0,&g_6,&g_129},{&g_55,&g_129,&g_129,&g_129},{&g_129,(void*)0,&g_162,&g_6}},{{&g_131,&g_55,&g_55,(void*)0},{&g_6,&g_6,&g_6,(void*)0},{(void*)0,&g_162,&g_6,&g_129}},{{&g_55,&g_129,(void*)0,&g_6},{&g_55,&g_6,&g_55,&g_55},{&g_162,&g_129,&g_129,&g_162}},{{(void*)0,(void*)0,&g_55,&g_129},{(void*)0,&g_6,&g_55,&g_55},{(void*)0,&g_6,&g_129,&g_55}},{{&g_162,&g_55,&g_55,&g_55},{&g_55,&g_55,(void*)0,(void*)0},{&g_55,&g_129,&g_6,&g_131}},{{(void*)0,&g_55,&g_6,(void*)0},{&g_6,&g_6,&g_55,&g_55},{&g_131,&g_129,&g_162,&g_162}},{{&g_129,&g_6,&g_129,&g_6},{&g_55,&g_55,&g_6,(void*)0},{&g_6,&g_131,&g_131,&g_6}}};
static int32_t *g_399[4][5] = {{&g_126,(void*)0,(void*)0,&g_126,&g_126},{&g_126,(void*)0,&g_126,(void*)0,(void*)0},{&g_126,&g_126,(void*)0,&g_126,(void*)0},{&g_126,&g_126,(void*)0,(void*)0,&g_126}};
static int32_t **g_398 = &g_399[0][0];
static int32_t ***g_428 = &g_398;
static int32_t *** const *g_427[9][2] = {{&g_428,&g_428},{&g_428,&g_428},{&g_428,&g_428},{&g_428,&g_428},{&g_428,&g_428},{&g_428,&g_428},{&g_428,&g_428},{&g_428,&g_428},{&g_428,&g_428}};
static uint32_t g_453[9][5][4] = {{{6UL,0x7E8EF5C1L,0x6BBF49C7L,18446744073709551615UL},{0x586FA0E8L,18446744073709551610UL,0x06665DCFL,5UL},{0UL,0x3A005A56L,0UL,0x581991CEL},{0x598CCE82L,0x5581D9E5L,18446744073709551614UL,0xCB75CA93L},{18446744073709551610UL,0x36F3B57BL,0xCB75CA93L,0x5581D9E5L}},{{0x6BBF49C7L,1UL,0xCB75CA93L,6UL},{18446744073709551610UL,0x6BBF49C7L,18446744073709551614UL,0x586FA0E8L},{0x598CCE82L,0x06665DCFL,0UL,0UL},{0UL,0UL,0x06665DCFL,0x598CCE82L},{0x586FA0E8L,18446744073709551614UL,0x6BBF49C7L,18446744073709551610UL}},{{6UL,0xCB75CA93L,1UL,0x6BBF49C7L},{0x5581D9E5L,0xCB75CA93L,0x36F3B57BL,18446744073709551610UL},{0xCB75CA93L,18446744073709551614UL,0x5581D9E5L,0UL},{0x6BBF49C7L,0xA19AA908L,18446744073709551612UL,0xA19AA908L},{0xE95BBEDBL,1UL,0x3A005A56L,0x7E8EF5C1L}},{{0x5581D9E5L,18446744073709551614UL,0xCB75CA93L,1UL},{18446744073709551612UL,0x06665DCFL,6UL,0x581991CEL},{18446744073709551612UL,0x598CCE82L,0xCB75CA93L,18446744073709551615UL},{0x5581D9E5L,0x581991CEL,0x3A005A56L,0x6BBF49C7L},{0xE95BBEDBL,18446744073709551612UL,18446744073709551612UL,0xE95BBEDBL}},{{0x6BBF49C7L,0x3A005A56L,0x581991CEL,0x5581D9E5L},{18446744073709551615UL,0xCB75CA93L,0x598CCE82L,18446744073709551612UL},{0x581991CEL,6UL,0x06665DCFL,18446744073709551612UL},{1UL,0xCB75CA93L,18446744073709551614UL,0x5581D9E5L},{0x7E8EF5C1L,0x3A005A56L,1UL,0xE95BBEDBL}},{{0xA19AA908L,18446744073709551612UL,0xA19AA908L,0x6BBF49C7L},{0UL,0x581991CEL,1UL,18446744073709551615UL},{0x3A005A56L,0x598CCE82L,18446744073709551615UL,0x581991CEL},{18446744073709551614UL,0x06665DCFL,18446744073709551615UL,1UL},{0x3A005A56L,18446744073709551614UL,1UL,0x7E8EF5C1L}},{{0UL,1UL,0xA19AA908L,0xA19AA908L},{0xA19AA908L,0xA19AA908L,1UL,0UL},{0x7E8EF5C1L,1UL,18446744073709551614UL,0x3A005A56L},{1UL,18446744073709551615UL,0x06665DCFL,18446744073709551614UL},{0x581991CEL,18446744073709551615UL,0x598CCE82L,0x3A005A56L}},{{18446744073709551615UL,1UL,0x581991CEL,0UL},{0x6BBF49C7L,0xA19AA908L,18446744073709551612UL,0xA19AA908L},{0xE95BBEDBL,1UL,0x3A005A56L,0x7E8EF5C1L},{0x5581D9E5L,18446744073709551614UL,0xCB75CA93L,1UL},{18446744073709551612UL,0x06665DCFL,6UL,0x581991CEL}},{{18446744073709551612UL,0x598CCE82L,0xCB75CA93L,18446744073709551615UL},{0x5581D9E5L,0x581991CEL,0x3A005A56L,0x6BBF49C7L},{0xE95BBEDBL,18446744073709551612UL,18446744073709551612UL,0xE95BBEDBL},{0x6BBF49C7L,0x3A005A56L,0x581991CEL,0x5581D9E5L},{18446744073709551615UL,0xCB75CA93L,0x598CCE82L,18446744073709551612UL}}};
static int64_t g_510[6][9] = {{7L,1L,0L,0L,1L,7L,0L,1L,7L},{0x101134B46BF95CEELL,0xA9CAB2A452AA7277LL,0x101134B46BF95CEELL,(-7L),0xAB70940D5D89427FLL,(-7L),0x101134B46BF95CEELL,0xA9CAB2A452AA7277LL,0x101134B46BF95CEELL},{7L,1L,0L,7L,1L,0L,0L,1L,7L},{0x7AE34F98D623E0CBLL,0xA9CAB2A452AA7277LL,0x7AE34F98D623E0CBLL,(-7L),(-2L),(-7L),0x7AE34F98D623E0CBLL,0xA9CAB2A452AA7277LL,0x7AE34F98D623E0CBLL},{7L,1L,0L,0L,1L,7L,0L,1L,7L},{0x101134B46BF95CEELL,0xA9CAB2A452AA7277LL,0x101134B46BF95CEELL,(-7L),0xAB70940D5D89427FLL,(-7L),0x101134B46BF95CEELL,0xA9CAB2A452AA7277LL,0x101134B46BF95CEELL}};
static uint64_t g_574 = 0x92DFC2FD3B3E4AB3LL;
static int64_t g_630[6][4][6] = {{{(-8L),0x41DDB16BD115495ELL,0x5B59ACA9D999341CLL,0x22A571AACF79F1CBLL,0xEB273EFB6EB90E44LL,0x30B4AD28C2E1D3AFLL},{0x392E632F07DBDFEALL,(-8L),0x96996DD4616DB7A3LL,0x2C070DCE3B90CAC0LL,0L,1L},{1L,0xEB273EFB6EB90E44LL,0x1B9DF73981DD312CLL,0xC8E9A5AF0ADDA811LL,0x96996DD4616DB7A3LL,0x93E3E8C6C349E889LL},{(-1L),1L,3L,0x22A571AACF79F1CBLL,1L,0xEB273EFB6EB90E44LL}},{{0x6C3DEDB839DA2A9ELL,2L,7L,0x392E632F07DBDFEALL,0xCFD23A21DF842DA3LL,0x22A571AACF79F1CBLL},{(-1L),(-3L),0xE06F598C61F3CC80LL,0L,0x6C3DEDB839DA2A9ELL,1L},{0xE06F598C61F3CC80LL,0x96996DD4616DB7A3LL,0x5BC0544956E5E368LL,0x6C3DEDB839DA2A9ELL,0L,0L},{5L,0x22A571AACF79F1CBLL,0x22A571AACF79F1CBLL,5L,0x0D26D759138A2DA8LL,0xCFD23A21DF842DA3LL}},{{0x1BD40AA14D8C8415LL,(-6L),0x8A2974C294E4D157LL,0x93E3E8C6C349E889LL,0x593DDB0A56FE63A0LL,0L},{0L,(-9L),1L,2L,0x593DDB0A56FE63A0LL,1L},{5L,(-6L),(-1L),0x96996DD4616DB7A3LL,0x0D26D759138A2DA8LL,0xCAC1E05FCBC99CC2LL},{0x5BC0544956E5E368LL,0x22A571AACF79F1CBLL,0L,(-1L),0L,5L}},{{0L,0x96996DD4616DB7A3LL,4L,1L,0x6C3DEDB839DA2A9ELL,0xC8E9A5AF0ADDA811LL},{0x593DDB0A56FE63A0LL,(-3L),0x5B59ACA9D999341CLL,0L,0xCFD23A21DF842DA3LL,0xEEE1171D5BAEA396LL},{(-8L),2L,0L,0x5B59ACA9D999341CLL,1L,9L},{0x22A571AACF79F1CBLL,1L,1L,0x1B9DF73981DD312CLL,0x96996DD4616DB7A3LL,0x1B9DF73981DD312CLL}},{{3L,0xEB273EFB6EB90E44LL,3L,(-1L),0L,0x5BC0544956E5E368LL},{0xEB273EFB6EB90E44LL,(-8L),0x6C3DEDB839DA2A9ELL,5L,1L,2L},{(-1L),0x52253277636DDB85LL,1L,5L,0x22A571AACF79F1CBLL,(-1L)},{0xEB273EFB6EB90E44LL,0x30B4AD28C2E1D3AFLL,(-1L),(-1L),7L,4L}},{{3L,(-5L),(-6L),0x1B9DF73981DD312CLL,4L,0xE06F598C61F3CC80LL},{0x22A571AACF79F1CBLL,0x41DDB16BD115495ELL,2L,0x5B59ACA9D999341CLL,3L,0x0D26D759138A2DA8LL},{(-8L),5L,(-5L),0L,0x93E3E8C6C349E889LL,0x2C070DCE3B90CAC0LL},{0x593DDB0A56FE63A0LL,(-6L),0xEEE1171D5BAEA396LL,1L,0x5B59ACA9D999341CLL,5L}}};
static int64_t g_636 = 0x6B05ADBA8DAEAA95LL;
static int16_t g_693 = 0L;
static uint8_t g_736 = 0x74L;
static int16_t g_749[9][5] = {{(-10L),(-4L),(-4L),(-10L),0x77D2L},{0xC1F2L,(-10L),(-1L),0x18ADL,0x8743L},{0xC1F2L,(-1L),0x77D2L,(-1L),0xC1F2L},{(-10L),1L,0xFC67L,0x18ADL,(-4L)},{0xFC67L,1L,(-10L),(-10L),1L},{0x77D2L,(-1L),0xC1F2L,1L,(-4L)},{(-1L),(-10L),0xC1F2L,0L,0xC1F2L},{(-4L),(-4L),(-10L),0x77D2L,0x8743L},{(-1L),0x8743L,0xFC67L,0x77D2L,0x77D2L}};
static uint8_t g_845 = 0xEEL;
static const int64_t g_861 = 0x02CF4CB04C68466ALL;
static uint32_t g_904 = 0UL;
static const int64_t g_923 = (-4L);
static uint8_t g_925[4][8][1] = {{{0x7AL},{0UL},{255UL},{6UL},{0x4CL},{252UL},{0x4CL},{6UL}},{{255UL},{0UL},{0UL},{0x4CL},{0x4CL},{0UL},{0UL},{252UL}},{{255UL},{1UL},{6UL},{1UL},{255UL},{252UL},{0UL},{0UL}},{{0x4CL},{0x4CL},{0UL},{0UL},{252UL},{255UL},{1UL},{6UL}}};
static int8_t *g_1011 = (void*)0;
static int8_t **g_1010 = &g_1011;
static int64_t g_1018 = (-1L);
static uint32_t g_1021 = 0xB5C0DB0CL;
static int64_t g_1036 = 0L;
static int8_t g_1051 = 0x29L;
static int16_t g_1099 = 7L;
static int64_t g_1111 = 0x2AD547C246F27C4FLL;
static const uint8_t **g_1142 = (void*)0;
static const uint8_t *g_1146[1] = {&g_736};
static const uint8_t **g_1145 = &g_1146[0];
static int32_t *g_1152 = (void*)0;
static uint32_t g_1164 = 0x3B11B1AFL;
static int32_t **g_1280 = &g_345[4][0][1];
static int32_t ***g_1279 = &g_1280;
static uint32_t g_1349 = 0x95D9C97CL;
static uint64_t g_1373 = 9UL;
static int32_t ****g_1374 = &g_1279;
static uint32_t g_1393[4][3][7] = {{{18446744073709551615UL,1UL,0xA081AFBFL,18446744073709551615UL,0x05DF4938L,18446744073709551615UL,0xA081AFBFL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x047E94E6L,0x59004BE7L,0x7DD990D0L,1UL},{0UL,3UL,18446744073709551613UL,6UL,0xA081AFBFL,0x034B47A3L,0x034B47A3L}},{{0x59004BE7L,0xA02F1672L,18446744073709551615UL,0xA02F1672L,0x59004BE7L,18446744073709551615UL,3UL},{5UL,18446744073709551611UL,18446744073709551615UL,0x3C73F312L,0x05DF4938L,0xC53A1AF5L,1UL},{0xA3BED9BCL,0xC310F123L,0x047E94E6L,0xC33DD676L,0xC33DD676L,0x047E94E6L,0xC310F123L}},{{5UL,0x3C73F312L,18446744073709551611UL,0UL,3UL,18446744073709551613UL,6UL},{0x59004BE7L,0x7DD990D0L,1UL,18446744073709551615UL,18446744073709551606UL,0xC33DD676L,18446744073709551606UL},{0UL,0x8482D665L,0x8482D665L,0UL,0x034B47A3L,6UL,18446744073709551615UL}},{{18446744073709551615UL,18446744073709551606UL,0x59004BE7L,0xC33DD676L,0x347B6BCFL,18446744073709551609UL,0xA02F1672L},{18446744073709551615UL,7UL,6UL,0x3C73F312L,6UL,7UL,18446744073709551615UL},{18446744073709551606UL,0xA3BED9BCL,0x7DD990D0L,0xA02F1672L,18446744073709551615UL,0xC310F123L,18446744073709551606UL}}};
static int8_t ****g_1443 = (void*)0;
static const uint8_t g_1576 = 0UL;
static int8_t * const *g_1583 = &g_1011;
static int8_t * const ** const g_1582 = &g_1583;
static int8_t * const ** const *g_1581 = &g_1582;
static int8_t g_1588 = 0x2FL;
static uint8_t g_1695 = 249UL;
static const int32_t *g_1912 = &g_131;
static const int32_t **g_1911 = &g_1912;
static const int32_t ***g_1910 = &g_1911;
static uint8_t * const g_1918[4] = {&g_195,&g_195,&g_195,&g_195};
static uint8_t * const *g_1917 = &g_1918[1];
static uint8_t * const **g_1916 = &g_1917;
static int8_t g_2093 = 0x47L;
static const uint32_t *g_2149 = &g_1393[1][1][6];
static const uint32_t **g_2148[6] = {&g_2149,&g_2149,&g_2149,&g_2149,&g_2149,&g_2149};
static uint64_t **g_2164 = &g_103[0][1][0];
static uint64_t ***g_2163 = &g_2164;
static uint16_t g_2207 = 65529UL;
static uint32_t *g_2261 = &g_453[3][1][0];
static uint32_t **g_2260[5][8][6] = {{{&g_2261,&g_2261,(void*)0,&g_2261,&g_2261,&g_2261},{&g_2261,&g_2261,(void*)0,&g_2261,&g_2261,&g_2261},{&g_2261,&g_2261,(void*)0,&g_2261,&g_2261,(void*)0},{&g_2261,&g_2261,&g_2261,&g_2261,&g_2261,&g_2261},{&g_2261,&g_2261,&g_2261,&g_2261,&g_2261,&g_2261},{&g_2261,&g_2261,(void*)0,&g_2261,&g_2261,(void*)0},{&g_2261,&g_2261,&g_2261,&g_2261,&g_2261,(void*)0},{&g_2261,&g_2261,&g_2261,&g_2261,&g_2261,&g_2261}},{{&g_2261,&g_2261,&g_2261,&g_2261,&g_2261,(void*)0},{(void*)0,&g_2261,&g_2261,(void*)0,&g_2261,(void*)0},{(void*)0,&g_2261,(void*)0,(void*)0,&g_2261,&g_2261},{(void*)0,&g_2261,&g_2261,&g_2261,&g_2261,&g_2261},{&g_2261,(void*)0,(void*)0,(void*)0,&g_2261,&g_2261},{(void*)0,&g_2261,&g_2261,&g_2261,(void*)0,&g_2261},{&g_2261,&g_2261,&g_2261,&g_2261,&g_2261,&g_2261},{&g_2261,&g_2261,&g_2261,&g_2261,&g_2261,&g_2261}},{{&g_2261,(void*)0,(void*)0,&g_2261,&g_2261,&g_2261},{&g_2261,&g_2261,&g_2261,&g_2261,(void*)0,&g_2261},{&g_2261,&g_2261,(void*)0,&g_2261,&g_2261,(void*)0},{&g_2261,&g_2261,&g_2261,&g_2261,(void*)0,&g_2261},{(void*)0,&g_2261,&g_2261,(void*)0,&g_2261,&g_2261},{&g_2261,(void*)0,&g_2261,&g_2261,&g_2261,&g_2261},{&g_2261,&g_2261,&g_2261,&g_2261,&g_2261,(void*)0},{&g_2261,&g_2261,(void*)0,&g_2261,(void*)0,&g_2261}},{{&g_2261,&g_2261,&g_2261,&g_2261,&g_2261,&g_2261},{&g_2261,(void*)0,(void*)0,(void*)0,&g_2261,&g_2261},{(void*)0,&g_2261,&g_2261,&g_2261,(void*)0,&g_2261},{&g_2261,&g_2261,&g_2261,&g_2261,&g_2261,&g_2261},{&g_2261,&g_2261,&g_2261,&g_2261,&g_2261,&g_2261},{&g_2261,(void*)0,(void*)0,&g_2261,&g_2261,&g_2261},{&g_2261,&g_2261,&g_2261,&g_2261,(void*)0,&g_2261},{&g_2261,&g_2261,(void*)0,&g_2261,&g_2261,(void*)0}},{{&g_2261,&g_2261,&g_2261,&g_2261,(void*)0,&g_2261},{(void*)0,&g_2261,&g_2261,(void*)0,&g_2261,&g_2261},{&g_2261,(void*)0,&g_2261,&g_2261,&g_2261,&g_2261},{&g_2261,&g_2261,&g_2261,&g_2261,&g_2261,(void*)0},{&g_2261,&g_2261,(void*)0,&g_2261,(void*)0,&g_2261},{&g_2261,&g_2261,&g_2261,&g_2261,&g_2261,&g_2261},{&g_2261,(void*)0,(void*)0,(void*)0,&g_2261,&g_2261},{(void*)0,&g_2261,&g_2261,&g_2261,(void*)0,&g_2261}}};
static const int32_t *g_2307 = &g_55;
static int8_t ***g_2408 = &g_1010;
static int32_t g_2503 = 0L;
static int32_t **g_2553 = &g_399[0][0];
static int64_t g_2568[7][10] = {{0x9E2AB228961EDC53LL,0x5D371033F3851746LL,0xB8C0274FC9ED8227LL,1L,1L,0xB8C0274FC9ED8227LL,0x5D371033F3851746LL,0x9E2AB228961EDC53LL,0x5D371033F3851746LL,0xB8C0274FC9ED8227LL},{0xC13270EE404CAEC7LL,0L,1L,0L,0xC13270EE404CAEC7LL,0xB8C0274FC9ED8227LL,0xB8C0274FC9ED8227LL,0xC13270EE404CAEC7LL,0L,1L},{0x9E2AB228961EDC53LL,0x9E2AB228961EDC53LL,1L,0xC13270EE404CAEC7LL,0L,0xB8C0274FC9ED8227LL,0x9E2AB228961EDC53LL,3L,3L,0x9E2AB228961EDC53LL},{0x5D371033F3851746LL,0xB8C0274FC9ED8227LL,1L,1L,0xB8C0274FC9ED8227LL,0x5D371033F3851746LL,0x9E2AB228961EDC53LL,0x5D371033F3851746LL,0xB8C0274FC9ED8227LL,1L},{0xC13270EE404CAEC7LL,3L,0xC13270EE404CAEC7LL,1L,0x9E2AB228961EDC53LL,0x9E2AB228961EDC53LL,1L,0xC13270EE404CAEC7LL,3L,0xC13270EE404CAEC7LL},{0xC13270EE404CAEC7LL,0x5D371033F3851746LL,3L,0xB8C0274FC9ED8227LL,3L,0x5D371033F3851746LL,0xC13270EE404CAEC7LL,0xC13270EE404CAEC7LL,0x5D371033F3851746LL,3L},{0x5D371033F3851746LL,0xC13270EE404CAEC7LL,0xC13270EE404CAEC7LL,0x5D371033F3851746LL,3L,0xB8C0274FC9ED8227LL,3L,0x5D371033F3851746LL,0xC13270EE404CAEC7LL,0xC13270EE404CAEC7LL}};
static int16_t g_2589 = 3L;
static uint8_t g_2691 = 0x6AL;
static uint64_t ****g_2700 = &g_325;
static uint64_t *****g_2699 = &g_2700;
static int32_t g_2714 = 0x65A3D22CL;
static uint64_t g_2731 = 0x8E6E1ED8D751FCBDLL;
static int16_t *g_2753 = &g_1099;
static int16_t **g_2752[5][9][5] = {{{&g_2753,&g_2753,&g_2753,&g_2753,&g_2753},{(void*)0,&g_2753,&g_2753,&g_2753,&g_2753},{(void*)0,(void*)0,&g_2753,(void*)0,&g_2753},{(void*)0,&g_2753,&g_2753,&g_2753,&g_2753},{&g_2753,&g_2753,(void*)0,&g_2753,(void*)0},{&g_2753,(void*)0,&g_2753,&g_2753,&g_2753},{(void*)0,(void*)0,&g_2753,&g_2753,(void*)0},{&g_2753,(void*)0,&g_2753,&g_2753,&g_2753},{&g_2753,&g_2753,&g_2753,&g_2753,&g_2753}},{{&g_2753,&g_2753,&g_2753,(void*)0,&g_2753},{&g_2753,(void*)0,&g_2753,&g_2753,&g_2753},{&g_2753,&g_2753,&g_2753,&g_2753,(void*)0},{(void*)0,&g_2753,&g_2753,(void*)0,(void*)0},{(void*)0,&g_2753,&g_2753,&g_2753,&g_2753},{(void*)0,&g_2753,&g_2753,&g_2753,&g_2753},{(void*)0,&g_2753,&g_2753,&g_2753,&g_2753},{&g_2753,(void*)0,(void*)0,(void*)0,&g_2753},{&g_2753,(void*)0,&g_2753,&g_2753,&g_2753}},{{&g_2753,(void*)0,&g_2753,&g_2753,(void*)0},{(void*)0,(void*)0,&g_2753,(void*)0,&g_2753},{(void*)0,&g_2753,&g_2753,&g_2753,&g_2753},{&g_2753,&g_2753,&g_2753,&g_2753,&g_2753},{&g_2753,&g_2753,&g_2753,&g_2753,&g_2753},{&g_2753,(void*)0,&g_2753,&g_2753,&g_2753},{&g_2753,(void*)0,(void*)0,&g_2753,(void*)0},{&g_2753,&g_2753,&g_2753,&g_2753,(void*)0},{(void*)0,&g_2753,&g_2753,(void*)0,&g_2753}},{{(void*)0,&g_2753,&g_2753,&g_2753,&g_2753},{&g_2753,&g_2753,(void*)0,&g_2753,(void*)0},{(void*)0,&g_2753,(void*)0,&g_2753,&g_2753},{&g_2753,&g_2753,&g_2753,&g_2753,(void*)0},{&g_2753,&g_2753,(void*)0,&g_2753,&g_2753},{&g_2753,(void*)0,&g_2753,(void*)0,(void*)0},{&g_2753,(void*)0,(void*)0,&g_2753,&g_2753},{&g_2753,&g_2753,&g_2753,&g_2753,&g_2753},{&g_2753,&g_2753,&g_2753,&g_2753,&g_2753}},{{(void*)0,&g_2753,&g_2753,&g_2753,&g_2753},{&g_2753,&g_2753,&g_2753,&g_2753,&g_2753},{&g_2753,&g_2753,&g_2753,(void*)0,(void*)0},{&g_2753,&g_2753,&g_2753,&g_2753,&g_2753},{&g_2753,(void*)0,&g_2753,&g_2753,(void*)0},{&g_2753,&g_2753,&g_2753,&g_2753,&g_2753},{(void*)0,&g_2753,(void*)0,(void*)0,&g_2753},{&g_2753,&g_2753,&g_2753,&g_2753,&g_2753},{(void*)0,&g_2753,&g_2753,&g_2753,&g_2753}}};
static uint32_t ** const **g_2878 = (void*)0;
static int32_t ***g_2903[10] = {&g_2553,(void*)0,&g_2553,(void*)0,&g_2553,(void*)0,&g_2553,(void*)0,&g_2553,(void*)0};
static uint16_t ***g_2908 = (void*)0;
static uint16_t ****g_2907 = &g_2908;
static uint16_t *****g_2906[4][10][4] = {{{(void*)0,&g_2907,&g_2907,&g_2907},{(void*)0,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907},{(void*)0,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907},{&g_2907,(void*)0,&g_2907,&g_2907},{&g_2907,(void*)0,&g_2907,&g_2907},{&g_2907,(void*)0,&g_2907,&g_2907},{(void*)0,(void*)0,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907}},{{(void*)0,&g_2907,&g_2907,&g_2907},{(void*)0,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907},{&g_2907,(void*)0,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907},{(void*)0,(void*)0,&g_2907,(void*)0},{&g_2907,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907}},{{(void*)0,&g_2907,&g_2907,&g_2907},{(void*)0,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907},{(void*)0,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907}},{{&g_2907,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,(void*)0,&g_2907},{&g_2907,(void*)0,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907},{(void*)0,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907},{&g_2907,&g_2907,&g_2907,&g_2907}}};
static int32_t g_2948[5] = {0x18A2BEE8L,0x18A2BEE8L,0x18A2BEE8L,0x18A2BEE8L,0x18A2BEE8L};
static uint8_t g_3056 = 255UL;
static int32_t g_3197 = 0x08456C09L;
static uint64_t ****g_3221 = &g_325;
static int32_t g_3251 = 1L;
static int32_t ***g_3471 = &g_398;
static uint32_t g_3573[3][2] = {{0x3A3735D3L,0x042CEFEBL},{0x042CEFEBL,0x3A3735D3L},{0x042CEFEBL,0x042CEFEBL}};
static const uint64_t g_3641 = 0xE831E5AC1E7BF460LL;
static int64_t *g_3765 = &g_2568[5][7];
static int64_t * const *g_3764 = &g_3765;
static uint32_t g_3931 = 4UL;
static int16_t g_3958 = 0xEFEEL;
static int32_t ** const **g_3975 = (void*)0;
static int32_t ** const ***g_3974 = &g_3975;
static int64_t **g_4078 = &g_3765;
static int16_t ** const *g_4119 = &g_2752[1][7][1];
static int16_t ** const **g_4118 = &g_4119;
static int16_t g_4126[10][7] = {{0x9A45L,0x0854L,1L,0L,1L,0x0854L,0x9A45L},{0x0854L,(-1L),(-1L),0x9659L,0L,1L,0L},{0x0854L,0L,0L,0x0854L,1L,0L,0L},{0x9A45L,0L,(-1L),1L,1L,(-1L),0L},{1L,0x9A45L,1L,(-1L),0L,0L,0L},{1L,0x9A45L,1L,0x9A45L,1L,(-1L),0L},{(-1L),0L,0x9A45L,(-1L),0x9659L,(-1L),0x9A45L},{0L,0L,0x0854L,1L,0L,0L,(-1L)},{(-1L),(-1L),0x0854L,0x0854L,(-1L),(-1L),0x9659L},{1L,0x0854L,0x9A45L,0x9659L,0L,0L,0x9659L}};
static uint64_t * const ***g_4301 = (void*)0;
static uint8_t * const ***g_4340 = &g_1916;
static uint8_t * const ****g_4339 = &g_4340;
static uint8_t g_4469 = 2UL;
static int32_t g_4525 = (-2L);
static int32_t ****g_4668 = &g_1279;
static int64_t *g_4850 = (void*)0;
static int64_t *g_4852 = &g_636;
static int8_t g_4889[3][2][4] = {{{1L,1L,0L,0x4DL},{1L,0x1CL,5L,1L}},{{0x2CL,0x4DL,0x2CL,5L},{0L,0x4DL,0L,1L}},{{0x4DL,0x1CL,0x1CL,0x4DL},{0x2CL,1L,0x1CL,5L}}};
static uint8_t **g_4987 = (void*)0;
static uint8_t ***g_4986[10][5][5] = {{{&g_4987,&g_4987,&g_4987,&g_4987,&g_4987},{(void*)0,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,&g_4987,(void*)0,&g_4987},{&g_4987,&g_4987,&g_4987,(void*)0,&g_4987},{(void*)0,&g_4987,&g_4987,&g_4987,&g_4987}},{{&g_4987,&g_4987,(void*)0,&g_4987,&g_4987},{&g_4987,(void*)0,&g_4987,&g_4987,(void*)0},{&g_4987,(void*)0,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,(void*)0,(void*)0,&g_4987},{&g_4987,&g_4987,&g_4987,(void*)0,&g_4987}},{{(void*)0,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,(void*)0,&g_4987,&g_4987,(void*)0},{(void*)0,&g_4987,&g_4987,&g_4987,(void*)0},{&g_4987,(void*)0,&g_4987,&g_4987,(void*)0},{&g_4987,&g_4987,&g_4987,&g_4987,(void*)0}},{{&g_4987,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,(void*)0,(void*)0,&g_4987},{&g_4987,&g_4987,(void*)0,&g_4987,&g_4987},{&g_4987,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,&g_4987,(void*)0,&g_4987}},{{&g_4987,&g_4987,(void*)0,&g_4987,&g_4987},{&g_4987,&g_4987,(void*)0,&g_4987,&g_4987},{&g_4987,&g_4987,&g_4987,&g_4987,(void*)0},{&g_4987,&g_4987,&g_4987,&g_4987,&g_4987},{(void*)0,&g_4987,&g_4987,&g_4987,(void*)0}},{{&g_4987,&g_4987,&g_4987,(void*)0,&g_4987},{&g_4987,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,(void*)0,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,&g_4987,&g_4987,(void*)0},{&g_4987,&g_4987,(void*)0,&g_4987,&g_4987}},{{(void*)0,&g_4987,&g_4987,&g_4987,(void*)0},{&g_4987,&g_4987,&g_4987,&g_4987,&g_4987},{(void*)0,(void*)0,(void*)0,(void*)0,&g_4987},{&g_4987,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,(void*)0,&g_4987,&g_4987}},{{(void*)0,&g_4987,&g_4987,&g_4987,&g_4987},{(void*)0,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,(void*)0,&g_4987,(void*)0,&g_4987},{(void*)0,&g_4987,(void*)0,(void*)0,(void*)0},{&g_4987,&g_4987,(void*)0,&g_4987,(void*)0}},{{(void*)0,&g_4987,&g_4987,(void*)0,(void*)0},{&g_4987,&g_4987,&g_4987,&g_4987,(void*)0},{&g_4987,(void*)0,&g_4987,(void*)0,&g_4987},{&g_4987,&g_4987,&g_4987,(void*)0,&g_4987},{&g_4987,&g_4987,&g_4987,&g_4987,&g_4987}},{{&g_4987,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,(void*)0,&g_4987,&g_4987},{(void*)0,(void*)0,&g_4987,&g_4987,(void*)0},{&g_4987,(void*)0,&g_4987,&g_4987,&g_4987},{(void*)0,(void*)0,(void*)0,&g_4987,&g_4987}}};



static int32_t func_1(void);
static int32_t func_2(uint16_t p_3, uint16_t p_4, int8_t p_5);
static int32_t func_7(int32_t p_8, int32_t p_9, uint16_t p_10);
static int32_t func_12(int8_t p_13, int8_t p_14, uint64_t p_15, int16_t p_16);
static const uint32_t func_36(int16_t p_37, uint8_t p_38, int32_t p_39, uint64_t p_40);
static int8_t func_45(uint16_t * p_46, uint16_t * p_47, const uint32_t p_48);
static const uint32_t func_49(int8_t p_50);
static int8_t func_64(uint64_t p_65);
static int16_t func_80(int32_t * const p_81);
static uint16_t * func_83(int32_t * p_84, int32_t p_85, int32_t * p_86, uint32_t p_87);
# 168 "<stdin>"
static int32_t func_1(void)
{
    uint8_t l_11 = 0xD2L;
    int32_t l_22[3][4][9] = {{{1L,0xBB24ADC9L,0L,0xF609B2B5L,0xD8EA5F34L,(-1L),(-2L),0xF79FACD4L,0xBB24ADC9L},{0xF609B2B5L,3L,1L,0xD94E8FE7L,6L,0xE34AAFBEL,0xD20B50F6L,0x753F3AC9L,0xD94E8FE7L},{1L,0xD8EA5F34L,(-2L),0L,1L,(-2L),0L,(-2L),0L},{(-1L),(-3L),0x842F88D9L,1L,1L,0x842F88D9L,(-3L),(-1L),(-2L)}},{{0xD3BED162L,0xF609B2B5L,0xE34AAFBEL,0x842F88D9L,6L,0xD3BED162L,1L,0xBB24ADC9L,0xF0A0CD95L},{(-1L),(-2L),0xF79FACD4L,0xBB24ADC9L,0xD8EA5F34L,0x34C266D8L,0x8B94BE3DL,0xD94E8FE7L,(-2L)},{0x8B94BE3DL,0L,1L,0x753F3AC9L,0x28ACE4B0L,0xF609B2B5L,0x65F5C9B8L,0L,0L},{1L,(-1L),0x8B94BE3DL,0x753F3AC9L,0x8B94BE3DL,(-1L),1L,(-2L),0xD94E8FE7L}},{{0xF0A0CD95L,3L,9L,0xBB24ADC9L,0xF609B2B5L,0x842F88D9L,0xD20B50F6L,0xF0A0CD95L,0xBB24ADC9L},{0x885EA6EDL,0x8B94BE3DL,(-2L),0x842F88D9L,0x65F5C9B8L,9L,0xE34AAFBEL,(-2L),(-1L)},{0xD8EA5F34L,(-2L),0L,1L,(-2L),0L,(-2L),0L,(-2L)},{0xBB24ADC9L,6L,0L,0L,6L,0xBB24ADC9L,0x65F5C9B8L,0xD94E8FE7L,0x753F3AC9L}}};
    int32_t *l_2323 = &g_126;
    int32_t l_4615 = 0xBB0068A6L;
    int32_t l_4638 = 0xECFB9E38L;
    const uint16_t l_4696[10][8] = {{0xDC37L,65529UL,0x566CL,0xA268L,65529UL,65535UL,0x2F67L,1UL},{0xDC37L,0x035CL,8UL,0UL,0x2F67L,65526UL,0xA2E8L,0x035CL},{0xEB63L,0xA2E8L,0x51E0L,65529UL,0x0051L,0x4EFCL,0x4EFCL,0x0051L},{0xA268L,1UL,1UL,0xA268L,0xEB63L,0xA661L,0xAF97L,65535UL},{0xA2E8L,0xA268L,65535UL,0xAF97L,6UL,0UL,0xA2E8L,0x2F67L},{0x51E0L,0xA268L,0x2B9EL,0xE99FL,0x035CL,0xA661L,0xE99FL,0xA2E8L},{0x0051L,0xAB24L,65529UL,65529UL,65535UL,8UL,0xEB63L,8UL},{65535UL,0xB762L,0UL,0xB762L,65535UL,0xA268L,0x4EFCL,0x2B9EL},{0UL,0x51E0L,65530UL,65526UL,65529UL,65530UL,65535UL,0xB762L},{1UL,0UL,65530UL,0xA661L,0xAB24L,65535UL,0x4EFCL,0x1010L}};
    uint16_t l_4708 = 1UL;
    int32_t ***l_4752 = &g_1280;
    const int8_t l_4787 = 7L;
    uint32_t l_4828 = 1UL;
    int32_t l_4838 = (-8L);
    int64_t l_4855 = 0L;
    int16_t l_4875 = (-1L);
    uint32_t l_4900 = 0x577EB664L;
    int8_t l_4903 = (-1L);
    int16_t ***l_4912 = (void*)0;
    int16_t ****l_4911 = &l_4912;
    int16_t l_4914 = 0xCB48L;
    int32_t l_4917 = 0x1D1FBACDL;
    int32_t l_4918[3][10][8] = {{{0x22F6BCF8L,(-1L),(-1L),(-9L),0x120CD20CL,0L,(-9L),0x82F6EB60L},{0xA4EB1677L,(-9L),9L,0L,(-1L),0xF93E5A6FL,1L,(-3L)},{(-1L),0xF93E5A6FL,1L,(-3L),(-6L),(-1L),0x7AD510D5L,0xE954433FL},{0x4051DA0BL,0x52C05BEDL,0xD43F96B4L,0xA35D0CE1L,0xC1E0AB1AL,0L,(-1L),0x82F6EB60L},{0xE0656D1AL,0L,0L,0xA4EB1677L,0x1A3C6611L,(-1L),(-1L),0x1A3C6611L},{0L,(-6L),(-6L),0L,(-1L),0xA4EB1677L,(-3L),0x4DB56B2DL},{0x4051DA0BL,2L,(-5L),(-1L),0x7AD510D5L,7L,0x22F6BCF8L,0x52C05BEDL},{0xB9AE81DBL,2L,0xE954433FL,0x25589F0CL,(-1L),0xA4EB1677L,0xE0656D1AL,(-10L)},{(-9L),(-6L),0xB9AE81DBL,0x82F6EB60L,0xE2E20857L,(-1L),2L,0x25589F0CL},{0x22F6BCF8L,0L,0xB3E313A4L,(-1L),0L,0L,0L,0x120CD20CL}},{{0xE2E20857L,0x52C05BEDL,0xE954433FL,0L,2L,(-1L),0x4DB56B2DL,(-9L)},{(-3L),0xF93E5A6FL,0xA4EB1677L,(-10L),0xA4EB1677L,0xF93E5A6FL,(-3L),0xE2E20857L},{0L,(-9L),0xE306BE6EL,(-1L),0x82F6EB60L,0L,0xC1E0AB1AL,2L},{0L,(-1L),0L,(-1L),0x82F6EB60L,0L,0xF91A50A1L,(-10L)},{0L,0L,0xF93E5A6FL,2L,0xA4EB1677L,0xF91A50A1L,0x7AD510D5L,9L},{(-3L),0x22F6BCF8L,0x75D9B696L,(-1L),2L,(-3L),0x1A3C6611L,0x22F6BCF8L},{0xE2E20857L,(-10L),9L,0xE0656D1AL,0L,0L,0xA4EB1677L,0x1A3C6611L},{0x22F6BCF8L,0xF91A50A1L,(-1L),(-9L),0xE2E20857L,0xE2E20857L,(-9L),(-1L)},{(-9L),(-9L),7L,0xA35D0CE1L,(-1L),0xD43F96B4L,0x1A3C6611L,(-3L)},{0xB9AE81DBL,0x4051DA0BL,1L,0xE954433FL,0x7AD510D5L,(-1L),(-6L),(-3L)}},{{(-1L),(-3L),0xF4856F17L,0L,7L,0x9F1AFFD0L,0x4DB56B2DL,0xB3E313A4L},{0xE2E20857L,(-6L),0L,0xE954433FL,(-1L),0x52C05BEDL,9L,(-1L)},{0L,1L,0x75D9B696L,0L,9L,0x0998C0F2L,1L,0x25589F0CL},{(-1L),(-5L),0x0998C0F2L,0x4DB56B2DL,0x75D9B696L,(-3L),0x25589F0CL,(-3L)},{0xF93E5A6FL,0xA4EB1677L,(-10L),0xA4EB1677L,0xF93E5A6FL,(-3L),0xE2E20857L,0xE0656D1AL},{0x0998C0F2L,1L,0xD43F96B4L,0xB3E313A4L,0L,7L,(-5L),0xA4EB1677L},{0x25589F0CL,0xE306BE6EL,0xD43F96B4L,0xF93E5A6FL,0xE306BE6EL,0x9F1AFFD0L,0xE2E20857L,0xE63CD95FL},{0L,0xF91A50A1L,(-10L),0xE0656D1AL,0xA4EB1677L,(-1L),0x25589F0CL,0xE954433FL},{1L,(-1L),0x0998C0F2L,(-5L),0xE954433FL,0xF4856F17L,1L,0L},{(-6L),0x0998C0F2L,0x75D9B696L,0xF93E5A6FL,0xB3E313A4L,0xE63CD95FL,9L,(-5L)}}};
    int32_t l_4920 = 1L;
    int32_t *l_4923 = &g_3251;
    int8_t l_4937[6];
    int32_t l_4949 = 0xFA2C1DC0L;
    int16_t l_5002 = 0xDFBFL;
    uint32_t l_5005 = 9UL;
    int32_t l_5008[4][2] = {{0xB8E39360L,0xB8E39360L},{0x74B1FEB2L,0xB8E39360L},{0xB8E39360L,0x74B1FEB2L},{0xB8E39360L,0xB8E39360L}};
    uint32_t l_5009 = 4294967289UL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_4937[i] = 0x7CL;
    if ((l_22[1][0][4] = func_2(g_6, (((func_7(l_11, ((*l_2323) = (func_12(l_11, ((safe_rshift_func_uint8_t_u_u((l_11 ^ ((l_22[1][0][4] = (safe_mul_func_int16_t_s_s(g_21, 1L))) , 0x21L)), 0)) , l_11), g_21, g_6) , l_11)), l_11) , l_22[1][0][4]) ^ 0xB2695C3ED888CF75LL) , l_11), l_11)))
    {
        int8_t l_4613 = (-1L);
        int32_t l_4614 = 0xE47745ECL;
        uint16_t ****l_4636 = &g_2908;
        const uint64_t *l_4648 = &g_67;
        const uint64_t **l_4647 = &l_4648;
        uint32_t *l_4703 = &g_1393[2][1][4];
        int32_t l_4745 = 0x34F85D48L;
        int16_t l_4762 = (-2L);
        uint32_t l_4766[8];
        int16_t **l_4780 = &g_2753;
        int64_t *l_4851 = &g_630[1][3][2];
        int16_t l_4865 = 0x51B4L;
        int32_t *l_4872 = &g_129;
        uint32_t l_4890 = 4294967295UL;
        int i;
        for (i = 0; i < 8; i++)
            l_4766[i] = 18446744073709551615UL;
        for (g_1373 = 0; (g_1373 <= 1); g_1373 += 1)
        {
            return l_11;
        }
        g_2752[0][3][2] = (*g_4119);
        for (g_63 = 0; (g_63 <= 6); g_63 += 1)
        {
            uint32_t l_4606 = 0x3142E51CL;
            uint64_t **l_4630 = &g_103[1][1][1];
            int32_t l_4635 = 8L;
            uint16_t ****l_4637 = &g_2908;
            int64_t l_4639[7][6][5] = {{{1L,0L,0x08E970538B28CCF5LL,0x7CF0EF51B813DAEFLL,0x50F0D1E644902D5BLL},{0xA8A75795A7F01DB3LL,0xA7DD806E89098684LL,1L,0xB0EFEB69883FE654LL,1L},{(-9L),(-9L),0x20A656EF3272268DLL,0x50F0D1E644902D5BLL,0x0043235ED36D9E5DLL},{0xA7DD806E89098684LL,0xA8A75795A7F01DB3LL,(-5L),0xA7DD806E89098684LL,5L},{0L,1L,0xD98BF08B0E00B532LL,1L,1L},{5L,0xA8A75795A7F01DB3LL,0x966CC5A38A5D5AACLL,0x641CC77B83FF36CCLL,0x641CC77B83FF36CCLL}},{{(-1L),(-9L),(-1L),0xD98BF08B0E00B532LL,(-1L)},{0xB0EFEB69883FE654LL,0xA7DD806E89098684LL,0xDBEBD35776B8F9CELL,1L,0x9BA2234B32C46F64LL},{0L,0L,1L,0x50F0D1E644902D5BLL,(-9L)},{1L,5L,0xDBEBD35776B8F9CELL,0x9BA2234B32C46F64LL,0xFC24DB1845A34860LL},{0L,(-1L),(-1L),0L,0L},{1L,0xB0EFEB69883FE654LL,0x966CC5A38A5D5AACLL,0xCD4F6D28CEE083C3LL,0xB0EFEB69883FE654LL}},{{0L,0L,0xD98BF08B0E00B532LL,0x08E970538B28CCF5LL,(-1L)},{0xA8A75795A7F01DB3LL,1L,(-5L),0xCD4F6D28CEE083C3LL,0xDBEBD35776B8F9CELL},{0x50F0D1E644902D5BLL,0L,0x20A656EF3272268DLL,0L,0x50F0D1E644902D5BLL},{(-5L),1L,1L,0x9BA2234B32C46F64LL,5L},{(-9L),0L,0x08E970538B28CCF5LL,0x50F0D1E644902D5BLL,0x92B613D06F5569EDLL},{1L,0xA8A75795A7F01DB3LL,0x486659E146B7E03ELL,1L,5L}},{{0x7CF0EF51B813DAEFLL,0x50F0D1E644902D5BLL,0xD98BF08B0E00B532LL,0xD98BF08B0E00B532LL,0x50F0D1E644902D5BLL},{5L,(-5L),1L,0x641CC77B83FF36CCLL,0xDBEBD35776B8F9CELL},{0L,(-9L),0x50F0D1E644902D5BLL,0x08E970538B28CCF5LL,0L},{0x966CC5A38A5D5AACLL,(-5L),0xF2C813C6E47968D2LL,0x486659E146B7E03ELL,1L},{1L,0L,(-1L),0xD98BF08B0E00B532LL,(-1L)},{3L,3L,5L,1L,0xA7DD806E89098684LL}},{{0L,1L,0L,0L,0x92B613D06F5569EDLL},{(-5L),0x966CC5A38A5D5AACLL,(-1L),0xDBEBD35776B8F9CELL,0x966CC5A38A5D5AACLL},{0x92B613D06F5569EDLL,1L,(-1L),0L,0L},{0L,3L,0L,(-1L),1L},{0xD98BF08B0E00B532LL,0L,1L,(-1L),0xA141E01653E0B923LL},{0x9BA2234B32C46F64LL,(-5L),0xFC24DB1845A34860LL,1L,3L}},{{(-1L),0x92B613D06F5569EDLL,1L,0xA141E01653E0B923LL,0x7CF0EF51B813DAEFLL},{(-5L),0L,0L,(-5L),0x50F8A0F2973927A2LL},{(-1L),0xD98BF08B0E00B532LL,(-1L),0x08E970538B28CCF5LL,0xD98BF08B0E00B532LL},{0x50F8A0F2973927A2LL,0x9BA2234B32C46F64LL,(-1L),0xF2C813C6E47968D2LL,1L},{1L,(-1L),0L,0x08E970538B28CCF5LL,1L},{1L,(-5L),5L,(-5L),1L}},{{0L,(-1L),(-1L),0xA141E01653E0B923LL,0x92B613D06F5569EDLL},{3L,0x50F8A0F2973927A2LL,0xF2C813C6E47968D2LL,1L,0x2DA3AC786D27715CLL},{(-1L),1L,0x50F0D1E644902D5BLL,(-1L),0x92B613D06F5569EDLL},{0x486659E146B7E03ELL,1L,(-1L),(-1L),1L},{0x92B613D06F5569EDLL,0L,0x20A656EF3272268DLL,0L,1L},{0x9BA2234B32C46F64LL,3L,0xB0EFEB69883FE654LL,0xDBEBD35776B8F9CELL,1L}}};
            int32_t l_4642 = (-1L);
            uint8_t *l_4656 = (void*)0;
            uint8_t *l_4657 = &g_736;
            uint16_t l_4669 = 0x431EL;
            uint64_t ****l_4680 = (void*)0;
            const uint64_t ***l_4682[9][5] = {{(void*)0,(void*)0,&l_4647,&l_4647,&l_4647},{&l_4647,&l_4647,&l_4647,&l_4647,&l_4647},{&l_4647,&l_4647,&l_4647,&l_4647,&l_4647},{&l_4647,&l_4647,(void*)0,&l_4647,&l_4647},{(void*)0,(void*)0,&l_4647,&l_4647,(void*)0},{&l_4647,&l_4647,&l_4647,&l_4647,&l_4647},{(void*)0,&l_4647,(void*)0,&l_4647,&l_4647},{&l_4647,&l_4647,&l_4647,(void*)0,(void*)0},{&l_4647,(void*)0,&l_4647,&l_4647,&l_4647}};
            const uint64_t ****l_4681 = &l_4682[7][1];
            uint32_t *l_4686 = (void*)0;
            uint32_t l_4688 = 0x64F99D82L;
            uint64_t l_4749 = 0x4C6B4509072BCEE4LL;
            int32_t ***l_4753[9][2][1] = {{{(void*)0},{&g_1280}},{{&g_1280},{&g_1280}},{{(void*)0},{&g_1280}},{{&g_1280},{&g_1280}},{{(void*)0},{&g_1280}},{{&g_1280},{&g_1280}},{{(void*)0},{&g_1280}},{{&g_1280},{&g_1280}},{{(void*)0},{&g_1280}}};
            int64_t l_4764 = 0xC0FDCAB1E477A838LL;
            uint32_t l_4769 = 0x3982B8EAL;
            int16_t * const *l_4781 = &g_2753;
            uint16_t *l_4784[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint16_t **l_4783 = &l_4784[2];
            int32_t *l_4795 = &g_55;
            uint32_t l_4798[5][9] = {{4294967295UL,0x7ACD4FC5L,0xD4052C2EL,0xD4052C2EL,0x7ACD4FC5L,4294967295UL,0x1D1E6F8FL,1UL,0x63EDA480L},{0UL,0xB59C50C4L,0xC3181B13L,0x63EDA480L,0x7ACD4FC5L,0x7ACD4FC5L,4294967295UL,0xA2472412L,4294967291UL},{0x63EDA480L,0x4E4DBC5EL,0xC3181B13L,0xD4052C2EL,1UL,4294967291UL,0xB59C50C4L,0xB59C50C4L,4294967291UL},{0xD4052C2EL,0xA2472412L,0UL,0xA2472412L,0xD4052C2EL,0x4E4DBC5EL,0x1D1E6F8FL,0xC3181B13L,4294967295UL},{0x1D1E6F8FL,0x4E4DBC5EL,0xD4052C2EL,0xA2472412L,0UL,0xA2472412L,0xD4052C2EL,0x4E4DBC5EL,0x1D1E6F8FL}};
            uint8_t * const **l_4812 = (void*)0;
            int8_t *****l_4825[3][2][9] = {{{(void*)0,&g_1443,&g_1443,(void*)0,&g_1443,&g_1443,&g_1443,&g_1443,&g_1443},{&g_1443,(void*)0,(void*)0,(void*)0,(void*)0,&g_1443,&g_1443,&g_1443,(void*)0}},{{&g_1443,&g_1443,&g_1443,&g_1443,&g_1443,&g_1443,&g_1443,&g_1443,(void*)0},{(void*)0,(void*)0,&g_1443,&g_1443,&g_1443,&g_1443,&g_1443,&g_1443,(void*)0}},{{&g_1443,&g_1443,(void*)0,(void*)0,&g_1443,&g_1443,&g_1443,&g_1443,(void*)0},{&g_1443,&g_1443,&g_1443,&g_1443,&g_1443,(void*)0,&g_1443,&g_1443,(void*)0}}};
            uint32_t l_4835 = 1UL;
            int64_t *l_4849 = (void*)0;
            int64_t **l_4848[4] = {&l_4849,&l_4849,&l_4849,&l_4849};
            int32_t l_4853[7][1] = {{(-2L)},{0x633EAD1DL},{0x633EAD1DL},{(-2L)},{0x633EAD1DL},{0x633EAD1DL},{(-2L)}};
            int8_t l_4854 = 0x9AL;
            uint8_t l_4892 = 0x32L;
            int i, j, k;
            for (g_1373 = 0; (g_1373 <= 6); g_1373 += 1)
            {
                uint16_t *l_4616 = &g_29;
                uint16_t *l_4625 = &g_2207;
                int32_t *l_4633 = (void*)0;
                int32_t *l_4634[1][6];
                uint8_t *l_4641[4];
                uint8_t **l_4640 = &l_4641[0];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_4634[i][j] = &g_131;
                }
                for (i = 0; i < 4; i++)
                    l_4641[i] = (void*)0;
                (*g_1911) = (void*)0;
                l_4606++;
                l_4642 ^= ((((safe_lshift_func_int16_t_s_s(((l_22[1][0][4] = 0x005CBBB91D3C02A9LL) ^ (safe_mul_func_int16_t_s_s(((--(*l_4616)) , (g_2568[g_63][(g_63 + 3)] , ((safe_sub_func_uint16_t_u_u(((l_11 < ((safe_mul_func_int16_t_s_s(((((((*l_4625) = (--(*l_4616))) && 9L) ^ l_4606) , (safe_add_func_int32_t_s_s((-5L), (((((safe_lshift_func_int8_t_s_u((l_4630 == (void*)0), 1)) , ((safe_mod_func_int32_t_s_s((l_4635 = (-7L)), g_3251)) , l_4613)) || 0xCCE8B3C0F6E4E3FFLL) , l_4636) != l_4637)))) || l_4638), 0xA88EL)) , 0L)) < l_4615), l_11)) || l_4606))), l_4614))), (*g_2753))) < l_4639[0][4][0]) , l_4640) != (void*)0);
            }
        }
    }
    else
    {
        int32_t * const l_4896 = (void*)0;
        int32_t l_4898 = 4L;
        int16_t ****l_4913 = &l_4912;
        int32_t l_4919 = (-7L);
        int32_t l_4944 = 0x12025DA2L;
        int32_t l_4945 = (-3L);
        int32_t l_4947 = 0x89C885DDL;
        int32_t l_4950 = 0x605E05F4L;
        int8_t **l_4971 = (void*)0;
        const uint32_t l_4973 = 4294967295UL;
        int32_t *** const *l_4974 = &g_1279;
        uint8_t ***l_4989 = &g_4987;
        int32_t *l_5003 = &l_4920;
        int32_t *l_5004[10] = {&l_4898,&l_4898,&g_131,&l_4898,&l_4898,&g_131,&l_4898,&l_4898,&g_131,&l_4898};
        int i;
        for (g_2731 = 21; (g_2731 > 2); --g_2731)
        {
            int32_t **l_4897 = &g_345[0][0][3];
            (*l_4897) = l_4896;
        }
        for (g_55 = 1; (g_55 >= 0); g_55 -= 1)
        {
            int32_t *l_4899[1][2];
            uint64_t *l_4904 = &g_205;
            int8_t *l_4907 = &g_157;
            int8_t *l_4908 = &g_200[0][1];
            uint8_t l_4915 = 255UL;
            int8_t *l_4916[7][7][4] = {{{&g_4889[1][0][3],&g_1588,&g_1588,&g_4889[1][1][3]},{(void*)0,&g_4889[1][0][3],(void*)0,&g_1588},{(void*)0,&g_1588,(void*)0,&g_1588},{&g_4889[2][0][2],&g_21,(void*)0,(void*)0},{(void*)0,&g_4889[1][1][3],&g_4889[1][1][3],&g_2093},{&g_1588,&g_1051,&g_4889[1][1][3],(void*)0},{&g_1051,(void*)0,&g_4889[2][0][2],&g_4889[2][0][2]}},{{&g_4889[1][1][3],&g_4889[1][1][3],&g_2093,&l_4903},{&g_4889[2][0][2],(void*)0,&g_1588,&l_4903},{&g_21,(void*)0,(void*)0,&g_1588},{&g_1051,(void*)0,&g_1051,&l_4903},{(void*)0,(void*)0,&g_21,&l_4903},{&g_21,&g_4889[1][1][3],&g_1588,&g_4889[2][0][2]},{&l_4903,(void*)0,&g_2093,(void*)0}},{{(void*)0,&g_1051,&g_1588,&g_2093},{&g_2093,&g_4889[1][1][3],(void*)0,(void*)0},{&g_21,&g_21,&l_4903,&g_1588},{(void*)0,&g_1588,&g_4889[1][0][3],&g_1588},{(void*)0,&g_4889[1][0][3],&g_4889[1][1][3],&g_4889[1][1][3]},{&g_1588,&g_1588,&g_1588,&g_4889[1][1][3]},{&l_4903,&g_4889[1][1][3],&g_1051,&g_2093}},{{&l_4903,&g_4889[1][1][1],&g_1051,&g_4889[1][1][3]},{&g_1051,&g_2093,&g_4889[2][0][2],&g_1051},{&g_4889[2][0][2],&l_4903,(void*)0,&g_21},{&g_4889[1][1][3],(void*)0,&g_1588,&g_4889[2][0][2]},{&g_21,&g_4889[1][1][3],&g_4889[2][0][2],(void*)0},{&g_21,&g_1588,(void*)0,&l_4903},{(void*)0,&g_1588,&g_21,&g_21}},{{(void*)0,&g_1051,&g_1051,(void*)0},{&g_4889[1][1][3],&g_1588,&g_21,&g_1588},{&g_21,(void*)0,&g_1588,(void*)0},{(void*)0,&g_1051,&g_1588,(void*)0},{&g_1588,(void*)0,&g_1051,&g_1588},{&l_4903,&g_1588,&g_21,(void*)0},{&g_2093,&g_1051,(void*)0,&g_21}},{{&g_1588,&g_1588,&g_4889[1][0][3],&l_4903},{&g_1051,&g_1588,&g_2093,(void*)0},{&l_4903,&g_4889[1][1][3],&g_4889[1][1][3],&g_4889[2][0][2]},{(void*)0,(void*)0,&g_21,&g_21},{&l_4903,&l_4903,&l_4903,&g_1051},{&g_1051,&g_2093,(void*)0,&g_4889[1][1][3]},{(void*)0,(void*)0,&g_4889[1][1][3],&g_2093}},{{&g_2093,&g_4889[2][0][2],&g_4889[1][1][3],&g_2093},{(void*)0,&g_4889[1][1][1],(void*)0,&g_4889[1][0][3]},{&g_1051,(void*)0,&l_4903,(void*)0},{&l_4903,(void*)0,&g_21,&g_1051},{(void*)0,&g_1588,&g_4889[1][1][3],&g_2093},{&l_4903,&g_4889[1][0][3],&g_2093,&g_21},{&g_1051,(void*)0,&g_4889[1][0][3],&g_4889[1][1][3]}}};
            int32_t l_4935 = 0x395EDD8FL;
            int32_t l_4936 = 0xAEA13B1FL;
            int64_t l_4972 = 0xF906E750E502A851LL;
            uint8_t ***l_4988[4][10][6] = {{{&g_4987,&g_4987,(void*)0,&g_4987,(void*)0,&g_4987},{&g_4987,&g_4987,&g_4987,&g_4987,(void*)0,&g_4987},{&g_4987,&g_4987,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,&g_4987,(void*)0,&g_4987,(void*)0},{&g_4987,&g_4987,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,(void*)0,(void*)0,&g_4987,(void*)0},{(void*)0,&g_4987,&g_4987,(void*)0,&g_4987,&g_4987},{&g_4987,&g_4987,&g_4987,&g_4987,&g_4987,&g_4987},{(void*)0,&g_4987,&g_4987,&g_4987,(void*)0,(void*)0},{&g_4987,(void*)0,&g_4987,&g_4987,&g_4987,&g_4987}},{{(void*)0,&g_4987,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,&g_4987,(void*)0,&g_4987,&g_4987},{(void*)0,&g_4987,&g_4987,&g_4987,(void*)0,&g_4987},{&g_4987,&g_4987,&g_4987,&g_4987,(void*)0,&g_4987},{(void*)0,&g_4987,(void*)0,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,(void*)0,&g_4987,&g_4987,(void*)0},{&g_4987,&g_4987,(void*)0,&g_4987,&g_4987,(void*)0},{&g_4987,&g_4987,&g_4987,&g_4987,(void*)0,(void*)0},{(void*)0,&g_4987,&g_4987,&g_4987,&g_4987,(void*)0},{&g_4987,&g_4987,(void*)0,&g_4987,&g_4987,(void*)0}},{{&g_4987,&g_4987,(void*)0,&g_4987,(void*)0,&g_4987},{(void*)0,&g_4987,(void*)0,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,(void*)0,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,&g_4987,&g_4987,(void*)0,(void*)0},{(void*)0,&g_4987,&g_4987,&g_4987,&g_4987,&g_4987},{(void*)0,(void*)0,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,(void*)0,&g_4987,(void*)0,(void*)0,&g_4987},{&g_4987,&g_4987,(void*)0,&g_4987,&g_4987,(void*)0}},{{&g_4987,&g_4987,&g_4987,&g_4987,(void*)0,&g_4987},{&g_4987,(void*)0,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,(void*)0,&g_4987,&g_4987,(void*)0,&g_4987},{&g_4987,&g_4987,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,(void*)0,&g_4987,(void*)0,&g_4987},{&g_4987,(void*)0,&g_4987,&g_4987,&g_4987,&g_4987},{&g_4987,&g_4987,&g_4987,(void*)0,&g_4987,(void*)0},{(void*)0,(void*)0,&g_4987,&g_4987,(void*)0,&g_4987},{&g_4987,&g_4987,&g_4987,(void*)0,&g_4987,&g_4987}}};
            uint8_t ***l_4991 = &g_4987;
            uint8_t ***l_4992 = (void*)0;
            int8_t l_4999 = (-8L);
            int16_t l_5001 = 0x5D6EL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_4899[i][j] = &g_129;
            }
            l_4900 = l_4898;
            if ((*g_2307))
                break;
            l_4920 |= (l_4919 |= (l_4615 &= ((((*l_4908) &= ((*l_4907) = ((safe_mod_func_uint64_t_u_u(l_4903, (((*l_4904)++) || l_4898))) == (l_4838 || l_22[1][0][4])))) & (l_4917 = ((l_4898 & ((safe_mod_func_int16_t_s_s(((l_4913 = l_4911) != (((g_4889[1][1][3] &= (l_4915 = l_4914)) && l_4898) , &g_4119)), l_4875)) || l_4898)) , 3L))) , l_4918[1][8][3])));
            (**g_1279) = l_4899[0][0];
            for (g_63 = 0; (g_63 <= 5); g_63 += 1)
            {
                int32_t **l_4924 = &g_345[2][2][0];
                int32_t **l_4925 = &l_4899[0][1];
                uint16_t l_4938[10] = {65530UL,65530UL,65530UL,65530UL,65530UL,65530UL,65530UL,65530UL,65530UL,65530UL};
                int32_t l_4943[9] = {2L,2L,0xA11DABF3L,2L,2L,0xA11DABF3L,2L,2L,0xA11DABF3L};
                uint64_t l_4952[5][1];
                uint8_t *l_4983 = &g_195;
                uint8_t **l_4982[6] = {&l_4983,&l_4983,&l_4983,&l_4983,&l_4983,&l_4983};
                uint8_t ***l_4981[1][2];
                uint16_t ***l_4993[3];
                uint16_t l_5000[8] = {0x78B8L,0x78B8L,0x78B8L,0x78B8L,0x78B8L,0x78B8L,0x78B8L,0x78B8L};
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_4952[i][j] = 0xCEB390E2DA55238DLL;
                }
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_4981[i][j] = &l_4982[1];
                }
                for (i = 0; i < 3; i++)
                    l_4993[i] = &g_153;
                if ((safe_add_func_int16_t_s_s(((**g_4078) , (g_399[(g_55 + 2)][(g_55 + 1)] != ((*l_4925) = l_4923))), ((((*l_4908) = (safe_div_func_int64_t_s_s((((safe_unary_minus_func_uint16_t_u((safe_div_func_int8_t_s_s((((((safe_rshift_func_uint8_t_u_s(l_4915, ((l_4936 = (safe_mul_func_uint16_t_u_u(l_4915, l_4935))) < (0x102F9BDCL & (*l_4923))))) <= (248UL > l_4937[2])) != l_4938[0]) | 0xA9432BD2L) && l_4936), 0xA2L)))) , (**g_4078)) != (*g_4852)), 0x8F8B02676A053D3ELL))) && (**g_1145)) || (*l_4923)))))
                {
                    int8_t l_4940 = 0xDEL;
                    int32_t l_4941 = 0x8AFAC0C1L;
                    int32_t l_4951 = 0xA805891DL;
                    (**l_4925) = (safe_unary_minus_func_uint16_t_u((0xD1CFDCA6L || ((void*)0 == (*l_4911)))));
                    for (l_4855 = 0; (l_4855 <= 5); l_4855 += 1)
                    {
                        int32_t l_4942 = 0L;
                        int32_t l_4946 = (-1L);
                        int32_t l_4948 = 0x384D2360L;
                        l_4952[4][0]--;
                    }
                    (**l_4925) = (l_4951 <= ((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((l_4941 || (l_4972 = (safe_div_func_uint8_t_u_u((l_4940 , 0xB9L), ((safe_sub_func_uint16_t_u_u(0x0E62L, (l_4947 |= ((*g_2753) |= (**l_4925))))) , ((safe_mod_func_int64_t_s_s((0x67E3L & (safe_rshift_func_uint8_t_u_u(0x1BL, 6))), ((safe_add_func_uint32_t_u_u((l_4971 != (*g_1582)), g_4126[4][4])) | (**g_1145)))) && (*l_4923))))))) && 0xE87F867BL), (**l_4925))), l_4973)), 0xABL)) && l_4944));
                }
                else
                {
                    for (g_6 = 1; (g_6 >= 0); g_6 -= 1)
                    {
                        l_4943[8] |= ((*l_4923) ^= ((void*)0 == l_4974));
                        return (**l_4925);
                    }
                }
                for (g_3197 = 1; (g_3197 <= 5); g_3197 += 1)
                {
                    uint8_t ****l_4984 = (void*)0;
                    uint8_t ****l_4985 = (void*)0;
                    uint8_t ****l_4990 = &l_4989;
                    int32_t l_4998 = 0x8CBC3440L;
                    l_5000[0] ^= (safe_add_func_int32_t_s_s(((((safe_sub_func_uint16_t_u_u((*g_62), ((safe_lshift_func_uint8_t_u_u(((g_4986[2][3][1] = l_4981[0][1]) == (l_4988[1][6][3] = &g_4987)), 1)) >= ((-1L) && ((((((*l_4923) ^ (((*l_4990) = l_4989) == (l_4992 = (l_4991 = &g_4987)))) < (((l_4993[0] == ((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((*l_4908) = l_4998), 1)), l_4998)) , (*g_2907))) , 65531UL) > (*l_4923))) & l_4998) | (*l_4923)) , l_4999))))) && 0x4DL) , 0x1C00L) | 3L), l_4998));
                    if (l_5001)
                        break;
                    if (l_4998)
                        break;
                }
                if ((*g_2307))
                    continue;
                (**l_4752) = &l_4936;
            }
        }
        ++l_5005;
        l_5009++;
    }
    return (*l_4923);
}







static int32_t func_2(uint16_t p_3, uint16_t p_4, int8_t p_5)
{
    uint32_t l_3268 = 0UL;
    uint8_t l_3272 = 0x0EL;
    int8_t *****l_3298 = (void*)0;
    int32_t l_3304[6] = {5L,5L,5L,5L,5L,5L};
    int32_t ***l_3307 = (void*)0;
    int32_t l_3316 = 0L;
    uint16_t l_3346 = 0x69ADL;
    int32_t l_3381 = 1L;
    int32_t *l_3392 = &l_3304[4];
    int32_t **l_3400 = &g_399[0][0];
    uint32_t ** const *l_3411 = &g_2260[4][7][4];
    uint32_t l_3418 = 4294967295UL;
    uint64_t *l_3434[5];
    uint8_t *l_3447 = &g_194;
    uint8_t **l_3446 = &l_3447;
    uint8_t ***l_3445 = &l_3446;
    uint8_t ****l_3444 = &l_3445;
    uint16_t * const *l_3451 = &g_62;
    uint16_t *l_3453 = &g_2207;
    uint16_t **l_3452[9] = {&l_3453,&l_3453,&l_3453,&l_3453,&l_3453,&l_3453,&l_3453,&l_3453,&l_3453};
    int32_t ***l_3468 = &g_1280;
    int16_t l_3474 = (-1L);
    uint64_t ***l_3475 = &g_2164;
    int32_t **l_3505 = &g_399[0][0];
    uint32_t l_3578 = 1UL;
    int32_t *l_3589 = &l_3316;
    int8_t l_3593[10][3] = {{0xBAL,(-10L),0xBAL},{1L,1L,1L},{0xBAL,(-10L),0xBAL},{1L,1L,1L},{0xBAL,(-10L),0xBAL},{1L,1L,1L},{0xBAL,(-10L),0xBAL},{1L,1L,1L},{0xBAL,(-10L),0xBAL},{1L,1L,1L}};
    int32_t l_3594 = (-1L);
    int32_t l_3595[9][9];
    uint64_t l_3667 = 18446744073709551613UL;
    uint32_t l_3680 = 0x7662A470L;
    uint16_t * const **l_3688[5][6] = {{&l_3451,&l_3451,&l_3451,&l_3451,&l_3451,&l_3451},{&l_3451,&l_3451,&l_3451,&l_3451,&l_3451,&l_3451},{&l_3451,&l_3451,&l_3451,&l_3451,&l_3451,&l_3451},{&l_3451,&l_3451,&l_3451,&l_3451,&l_3451,&l_3451},{&l_3451,&l_3451,&l_3451,&l_3451,&l_3451,&l_3451}};
    uint16_t * const ***l_3687 = &l_3688[4][2];
    uint16_t * const ****l_3686 = &l_3687;
    int16_t l_3697 = 0L;
    const int32_t *l_3707 = &g_2948[2];
    const int32_t **l_3706 = &l_3707;
    uint32_t l_3724 = 0x04E72C5BL;
    uint64_t **l_3763 = &g_103[0][1][0];
    int8_t l_3771[6][6][4] = {{{0xF6L,0xB3L,0x58L,(-5L)},{9L,0xCCL,6L,(-5L)},{0x92L,0xB3L,0xB1L,(-1L)},{0x03L,0x92L,0x03L,(-4L)},{6L,1L,0xE0L,0xB3L},{(-5L),0x03L,(-1L),1L}},{{(-1L),0x15L,(-1L),0xCCL},{(-5L),0xC4L,0xE0L,0xE0L},{6L,6L,0x03L,(-1L)},{0x03L,(-1L),0xB1L,0x92L},{0x92L,0xF6L,6L,0xB1L},{9L,0xF6L,0x58L,0x92L}},{{0xF6L,(-1L),(-4L),(-1L)},{0xE4L,6L,1L,0xE0L},{(-4L),0xC4L,0x15L,0xCCL},{0xE0L,0x15L,0xF6L,1L},{0xE0L,0x03L,0x15L,0xB3L},{(-4L),1L,1L,(-4L)}},{{0xE4L,0x92L,(-4L),(-1L)},{0xF6L,0xB3L,0x58L,(-5L)},{9L,0xCCL,6L,(-5L)},{0x92L,0xB3L,0xB1L,(-1L)},{0x03L,0x92L,0x03L,(-4L)},{6L,1L,0xE0L,0xB3L}},{{(-5L),0x03L,(-1L),1L},{(-1L),0x15L,(-1L),0xCCL},{(-5L),0xC4L,0xE0L,0xE0L},{6L,6L,0x03L,(-1L)},{0x03L,(-1L),0xF6L,0x15L},{0x15L,(-1L),9L,0xF6L}},{{0x45L,(-1L),0x92L,0x15L},{(-1L),1L,0x03L,1L},{0xB3L,9L,6L,(-4L)},{0x03L,0xCCL,(-5L),0x58L},{(-4L),(-5L),(-1L),6L},{(-4L),0xE4L,(-5L),0xB1L}}};
    int32_t *l_3797 = &g_3251;
    int32_t l_3857 = 0L;
    int32_t ****l_3933 = &g_2903[7];
    int32_t *****l_3932 = &l_3933;
    int16_t * const * const l_3942 = &g_2753;
    int16_t * const * const *l_3941 = &l_3942;
    int8_t l_3961 = (-2L);
    uint64_t ***l_4011 = (void*)0;
    int16_t l_4084 = (-9L);
    int32_t l_4099 = 0x413F1605L;
    uint64_t ** const **l_4159 = (void*)0;
    uint8_t l_4194 = 253UL;
    int64_t ***l_4221 = &g_4078;
    uint32_t l_4291 = 0x7CF91460L;
    int32_t l_4405 = (-1L);
    uint32_t l_4482[4][1];
    uint32_t l_4513 = 0x5329C41CL;
    uint8_t l_4515 = 5UL;
    int32_t **l_4602 = &l_3589;
    uint32_t *l_4603[1][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t *l_4604[1][7][4] = {{{&l_4405,&l_4405,&l_4405,&g_162},{&l_3594,&g_2714,&g_162,&g_162},{&l_4405,&l_4405,&g_162,&g_2714},{&g_2714,&l_3594,&g_162,&l_3594},{&l_4405,&l_4405,&g_162,&g_162},{&l_3594,&l_4405,&l_4405,&l_3594},{&l_4405,&l_3594,&l_4405,&g_2714}}};
    uint64_t l_4605 = 0x1F494AF368CADC77LL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_3434[i] = &g_67;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
            l_3595[i][j] = (-6L);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_4482[i][j] = 18446744073709551606UL;
    }
    for (g_1111 = 1; (g_1111 >= 0); g_1111 -= 1)
    {
        uint16_t l_3273[5];
        int32_t l_3276 = 4L;
        int32_t l_3277 = 0x9C287B60L;
        uint8_t l_3297 = 0x17L;
        int32_t *****l_3305[8] = {&g_1374,&g_1374,&g_1374,&g_1374,&g_1374,&g_1374,&g_1374,&g_1374};
        int32_t ***l_3306 = (void*)0;
        uint32_t l_3371 = 4294967287UL;
        int32_t **l_3401 = &g_399[3][4];
        int8_t l_3436[10] = {1L,0x84L,0x84L,1L,0L,1L,0x84L,0x84L,1L,0L};
        int64_t l_3437 = 0x24C296A1BAA38A37LL;
        uint64_t * const *l_3477 = &g_103[0][1][0];
        uint64_t * const **l_3476 = &l_3477;
        uint32_t l_3478 = 1UL;
        int16_t l_3506 = 4L;
        int16_t *l_3511 = &l_3506;
        int64_t *l_3534[7];
        const uint32_t l_3549 = 0x5A101C6FL;
        int16_t l_3592 = 1L;
        int32_t l_3607 = 0x3834D33CL;
        const uint64_t *l_3640 = &g_3641;
        const uint64_t **l_3639 = &l_3640;
        const uint64_t ***l_3638 = &l_3639;
        const uint64_t ****l_3637 = &l_3638;
        const uint64_t *****l_3636 = &l_3637;
        uint64_t l_3711 = 0x2D9B69D94DCB9762LL;
        int32_t ***l_3736 = &g_1280;
        uint8_t ****l_3781 = &l_3445;
        const uint16_t *** const **l_3860 = (void*)0;
        int32_t l_3863 = 0x346E7BAEL;
        const int8_t *l_3915[5] = {&g_158,&g_158,&g_158,&g_158,&g_158};
        const int8_t **l_3914 = &l_3915[2];
        const int8_t ***l_3913 = &l_3914;
        const int8_t ****l_3912 = &l_3913;
        uint16_t ***l_3980[5];
        uint16_t **** const l_3979 = &l_3980[4];
        uint16_t **** const *l_3978 = &l_3979;
        uint16_t *** const *l_3982 = (void*)0;
        uint16_t *** const **l_3981 = &l_3982;
        int32_t *****l_4010[10][10] = {{&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933},{&l_3933,&l_3933,(void*)0,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,(void*)0,(void*)0},{&l_3933,(void*)0,&l_3933,&l_3933,&l_3933,&l_3933,(void*)0,&l_3933,&l_3933,&l_3933},{&l_3933,(void*)0,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933},{&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,(void*)0,&l_3933},{&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,(void*)0,(void*)0,&l_3933,&l_3933,&l_3933},{&l_3933,&l_3933,(void*)0,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933},{&l_3933,&l_3933,&l_3933,(void*)0,&l_3933,(void*)0,&l_3933,&l_3933,&l_3933,&l_3933},{&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,(void*)0,&l_3933,&l_3933,(void*)0},{&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933,&l_3933}};
        int32_t l_4019 = (-1L);
        int32_t l_4042 = (-1L);
        uint16_t l_4043 = 1UL;
        uint64_t l_4059 = 0x7F2448687CD7BF6ELL;
        uint32_t l_4127[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
        uint64_t l_4130 = 1UL;
        uint16_t *l_4138 = &l_3273[3];
        int32_t l_4220 = 0x2B77DEECL;
        uint16_t l_4268[10][5] = {{65526UL,0x956DL,65526UL,0UL,65526UL},{0UL,0UL,65535UL,65532UL,0UL},{0xF541L,0UL,65535UL,0UL,0xF541L},{0UL,65532UL,65535UL,0UL,0UL},{65526UL,0UL,65526UL,0x956DL,65526UL},{0UL,0UL,65532UL,65532UL,0UL},{0xF541L,0x956DL,65535UL,0x956DL,0xF541L},{0UL,65532UL,65532UL,0UL,0UL},{65526UL,0x956DL,65526UL,0UL,65526UL},{0UL,0UL,65535UL,65532UL,0UL}};
        int64_t l_4288 = 6L;
        int32_t l_4324 = 5L;
        uint32_t l_4346 = 18446744073709551614UL;
        int64_t l_4351 = 0x8BB56B627C589AB2LL;
        int32_t *l_4361[1][3][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
        uint32_t **l_4365 = &g_2261;
        int8_t ** const *l_4368 = (void*)0;
        int8_t ** const **l_4367 = &l_4368;
        int64_t l_4407 = 0xB92927784A7724EELL;
        int16_t l_4410[10];
        uint16_t l_4431 = 65532UL;
        uint32_t l_4582 = 8UL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_3273[i] = 0x9786L;
        for (i = 0; i < 7; i++)
            l_3534[i] = &g_630[0][2][2];
        for (i = 0; i < 5; i++)
            l_3980[i] = &l_3452[7];
        for (i = 0; i < 10; i++)
            l_4410[i] = 0x889CL;
        for (g_6 = 0; (g_6 <= 0); g_6 += 1)
        {
            int32_t l_3265 = (-3L);
            int32_t l_3282 = 1L;
            uint8_t ** const *l_3314 = (void*)0;
            int64_t l_3349 = 8L;
            uint32_t ** const *l_3356[3];
            uint32_t ** const ** const l_3355 = &l_3356[2];
            int8_t *l_3374 = &g_200[0][1];
            int32_t l_3375 = 0xD9B8DCFAL;
            uint16_t * const *l_3409 = (void*)0;
            uint16_t * const **l_3408[9] = {&l_3409,&l_3409,&l_3409,&l_3409,&l_3409,&l_3409,&l_3409,&l_3409,&l_3409};
            uint16_t * const ***l_3407 = &l_3408[4];
            uint16_t * const ****l_3406[7][5] = {{&l_3407,&l_3407,&l_3407,&l_3407,&l_3407},{&l_3407,&l_3407,&l_3407,&l_3407,&l_3407},{&l_3407,&l_3407,&l_3407,&l_3407,&l_3407},{&l_3407,&l_3407,&l_3407,&l_3407,&l_3407},{&l_3407,&l_3407,&l_3407,&l_3407,&l_3407},{&l_3407,&l_3407,&l_3407,&l_3407,&l_3407},{&l_3407,&l_3407,&l_3407,&l_3407,&l_3407}};
            int32_t ** const l_3472 = &l_3392;
            uint32_t * const *l_3484 = &g_2261;
            int8_t ****l_3495 = (void*)0;
            int32_t l_3507 = 0xBB5BFAF0L;
            int i, j;
            for (i = 0; i < 3; i++)
                l_3356[i] = &g_2260[0][3][1];
            l_3265 = g_2948[(g_1111 + 3)];
            l_3277 = (safe_add_func_int8_t_s_s((((-10L) == l_3268) | (safe_rshift_func_uint16_t_u_u(p_4, (safe_unary_minus_func_int16_t_s(0L))))), (l_3272 <= ((l_3265 = ((((l_3273[3] && l_3265) ^ p_5) != (safe_add_func_int32_t_s_s((l_3276 = l_3272), 0x8A2498D3L))) && g_2948[(g_1111 + 3)])) & p_5))));
            for (g_156 = 0; (g_156 >= 0); g_156 -= 1)
            {
                int32_t *l_3279 = &l_3265;
                for (l_3277 = 3; (l_3277 >= 1); l_3277 -= 1)
                {
                    const int32_t *l_3278 = &g_55;
                    int32_t * const l_3281 = &g_3251;
                    (**g_1910) = l_3278;
                    for (g_195 = 0; (g_195 <= 4); g_195 += 1)
                    {
                        int32_t *l_3280 = &g_131;
                        int i, j, k;
                        if (g_925[(g_1111 + 1)][(g_195 + 2)][g_156])
                            break;
                        l_3279 = l_3279;
                        (*l_3280) &= (l_3265 = l_3273[l_3277]);
                    }
                    l_3282 = (&l_3276 != l_3281);
                    (*g_1911) = ((**g_1279) = (p_5 , &l_3265));
                }
            }
            if ((&g_1581 == ((((((safe_rshift_func_uint16_t_u_s((+(((((*g_62) = p_4) | ((safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((l_3276 = ((!((((l_3282 & (safe_mul_func_int16_t_s_s(l_3272, l_3265))) == 0xE9L) & (safe_add_func_int8_t_s_s(p_3, l_3277))) , (safe_rshift_func_uint16_t_u_u(l_3282, l_3265)))) < l_3273[3])), l_3282)), l_3265)) , l_3297)) >= 0L) | 0L)), 10)) > l_3272) , p_3) && 0x6EL) ^ (**g_1145)) , l_3298)))
            {
                uint32_t *l_3301[6][10][4] = {{{(void*)0,&g_1164,&g_1021,&g_1021},{&g_1164,&g_1164,&g_1021,&g_1349},{(void*)0,&g_1164,&g_1349,&g_1164},{&g_1349,&g_1349,&g_1349,&g_1349},{&g_1349,&g_1349,&g_1349,&g_1164},{&g_1349,&g_1164,(void*)0,&g_1349},{&g_1021,&g_1164,&g_1164,&g_1021},{&g_1021,&g_1164,(void*)0,&g_1349},{&g_1349,&g_1021,&g_1349,&g_1349},{&g_1349,&g_1021,&g_1349,&g_1349}},{{&g_1349,&g_1021,&g_1349,&g_1349},{(void*)0,&g_1164,&g_1021,&g_1021},{&g_1164,&g_1164,&g_1021,&g_1349},{(void*)0,&g_1164,&g_1349,&g_1164},{&g_1349,&g_1349,&g_1349,&g_1349},{&g_1349,&g_1349,&g_1349,&g_1164},{&g_1349,&g_1164,(void*)0,&g_1349},{&g_1021,&g_1164,&g_1164,&g_1021},{&g_1021,&g_1164,(void*)0,&g_1349},{&g_1349,&g_1021,&g_1349,&g_1349}},{{&g_1349,&g_1021,&g_1164,&g_1349},{(void*)0,&g_1164,&g_1021,&g_1164},{&g_1349,&g_1021,&g_1164,&g_1164},{&g_1349,&g_1349,&g_1164,&g_1164},{&g_1349,&g_1349,&g_1021,&g_1021},{(void*)0,&g_1021,&g_1164,&g_1021},{&g_1164,&g_1021,(void*)0,&g_1021},{&g_1021,&g_1349,&g_1349,&g_1164},{&g_1164,&g_1349,&g_1349,&g_1164},{&g_1164,&g_1021,&g_1349,&g_1164}},{{&g_1021,&g_1164,(void*)0,&g_1349},{&g_1164,&g_1349,&g_1164,&g_1349},{(void*)0,&g_1164,&g_1021,&g_1164},{&g_1349,&g_1021,&g_1164,&g_1164},{&g_1349,&g_1349,&g_1164,&g_1164},{&g_1349,&g_1349,&g_1021,&g_1021},{(void*)0,&g_1021,&g_1164,&g_1021},{&g_1164,&g_1021,(void*)0,&g_1021},{&g_1021,&g_1349,&g_1349,&g_1164},{&g_1164,&g_1349,&g_1349,&g_1164}},{{&g_1164,&g_1021,&g_1349,&g_1164},{&g_1021,&g_1164,(void*)0,&g_1349},{&g_1164,&g_1349,&g_1164,&g_1349},{(void*)0,&g_1164,&g_1021,&g_1164},{&g_1349,&g_1021,&g_1164,&g_1164},{&g_1349,&g_1349,&g_1164,&g_1164},{&g_1349,&g_1349,&g_1021,&g_1021},{(void*)0,&g_1021,&g_1164,&g_1021},{&g_1164,&g_1021,(void*)0,&g_1021},{&g_1021,&g_1349,&g_1349,&g_1164}},{{&g_1164,&g_1349,&g_1349,&g_1164},{&g_1164,&g_1021,&g_1349,&g_1164},{&g_1021,&g_1164,(void*)0,&g_1349},{&g_1164,&g_1349,&g_1164,&g_1349},{(void*)0,&g_1164,&g_1021,&g_1164},{&g_1349,&g_1021,&g_1164,&g_1164},{&g_1349,&g_1349,&g_1164,&g_1164},{&g_1349,&g_1349,&g_1021,&g_1021},{(void*)0,&g_1021,&g_1164,&g_1021},{&g_1164,&g_1021,(void*)0,&g_1021}}};
                int32_t ****l_3308 = (void*)0;
                int32_t ****l_3309 = &g_2903[7];
                int32_t l_3315 = 0x01549D57L;
                int i, j, k;
                if ((l_3316 &= (safe_add_func_int32_t_s_s(((l_3304[4] = (g_1164++)) != (((void*)0 != l_3305[5]) , ((((l_3306 != ((*l_3309) = l_3307)) , (((safe_add_func_int8_t_s_s(0xA5L, (((safe_unary_minus_func_uint32_t_u(g_2948[(g_1111 + 3)])) < ((!(p_3 && (((l_3314 != (void*)0) ^ p_4) == l_3315))) >= p_5)) != (-7L)))) | l_3268) , 255UL)) == p_4) > 0xC782718FL))), l_3272))))
                {
                    uint64_t l_3317 = 0UL;
                    --l_3317;
                    return l_3304[3];
                }
                else
                {
                    return p_4;
                }
            }
            else
            {
                int32_t l_3320 = 0x7C08A9BEL;
                uint16_t *l_3339 = &l_3273[4];
                uint16_t **l_3338 = &l_3339;
                uint32_t l_3345 = 0x72630266L;
                uint32_t ** const *l_3354 = &g_2260[2][3][3];
                uint32_t ** const **l_3353[10][7][3] = {{{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,(void*)0},{&l_3354,(void*)0,&l_3354},{&l_3354,&l_3354,&l_3354}},{{(void*)0,(void*)0,(void*)0},{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,(void*)0},{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,&l_3354}},{{&l_3354,&l_3354,&l_3354},{&l_3354,(void*)0,&l_3354},{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,&l_3354},{(void*)0,&l_3354,&l_3354},{&l_3354,(void*)0,&l_3354}},{{&l_3354,&l_3354,(void*)0},{&l_3354,(void*)0,&l_3354},{(void*)0,&l_3354,&l_3354},{&l_3354,&l_3354,&l_3354},{&l_3354,(void*)0,&l_3354},{&l_3354,(void*)0,&l_3354},{(void*)0,&l_3354,&l_3354}},{{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,(void*)0},{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,(void*)0}},{{&l_3354,&l_3354,&l_3354},{(void*)0,&l_3354,&l_3354},{&l_3354,(void*)0,&l_3354},{&l_3354,(void*)0,&l_3354},{&l_3354,&l_3354,&l_3354},{(void*)0,&l_3354,&l_3354},{(void*)0,(void*)0,&l_3354}},{{(void*)0,&l_3354,(void*)0},{&l_3354,(void*)0,&l_3354},{&l_3354,&l_3354,(void*)0},{(void*)0,&l_3354,(void*)0},{&l_3354,&l_3354,&l_3354},{(void*)0,&l_3354,(void*)0},{&l_3354,(void*)0,&l_3354}},{{(void*)0,&l_3354,&l_3354},{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,&l_3354},{(void*)0,&l_3354,(void*)0},{(void*)0,&l_3354,&l_3354},{(void*)0,&l_3354,&l_3354},{&l_3354,&l_3354,&l_3354}},{{&l_3354,(void*)0,&l_3354},{&l_3354,&l_3354,(void*)0},{(void*)0,&l_3354,(void*)0},{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,(void*)0},{&l_3354,&l_3354,&l_3354},{&l_3354,&l_3354,&l_3354}},{{&l_3354,&l_3354,(void*)0},{&l_3354,(void*)0,&l_3354},{&l_3354,(void*)0,(void*)0},{&l_3354,&l_3354,(void*)0},{(void*)0,&l_3354,&l_3354},{&l_3354,&l_3354,&l_3354},{&l_3354,(void*)0,&l_3354}}};
                int32_t l_3385 = (-6L);
                int32_t l_3386 = 0xDCF01CD5L;
                int i, j, k;
                l_3320 = 2L;
                if (p_3)
                    break;
                for (g_2093 = 0; (g_2093 <= 1); g_2093 += 1)
                {
                    for (g_29 = 0; (g_29 <= 0); g_29 += 1)
                    {
                        (**g_1910) = (void*)0;
                    }
                }
                if ((*g_2307))
                {
                    int32_t *l_3321 = &l_3276;
                    uint64_t **l_3342 = &g_103[0][1][0];
                    uint8_t *l_3368 = &g_1695;
                    int32_t l_3387 = 0x484869C1L;
                    if (p_5)
                    {
                        int32_t l_3322[6][9] = {{0x87A23436L,(-7L),0x1352F4D7L,0x6FCB811EL,(-7L),(-6L),0x87AEF9BAL,(-6L),(-7L)},{0x87A23436L,1L,1L,0x87A23436L,(-1L),(-1L),0x33AB64FBL,(-1L),0x6EF20AB3L},{0x33AB64FBL,0xB80CDC7AL,0xACA8B3A1L,0x1352F4D7L,1L,(-1L),(-1L),0xB80CDC7AL,0xB80CDC7AL},{(-7L),(-1L),0xB80CDC7AL,0x1352F4D7L,0xB80CDC7AL,(-1L),(-7L),0x6EF20AB3L,(-1L)},{0x1352F4D7L,(-1L),0xACA8B3A1L,1L,(-1L),4L,0x6FF4A633L,(-1L),(-1L)},{(-7L),0xB80CDC7AL,0x6EF20AB3L,0x6FF4A633L,0xACA8B3A1L,0xACA8B3A1L,0x6FF4A633L,0x6EF20AB3L,0xB80CDC7AL}};
                        uint64_t *l_3327 = &g_574;
                        uint16_t *l_3337 = (void*)0;
                        uint16_t **l_3336[4][3][6] = {{{&l_3337,&l_3337,&l_3337,&l_3337,&l_3337,&l_3337},{&l_3337,&l_3337,&l_3337,&l_3337,&l_3337,&l_3337},{&l_3337,&l_3337,&l_3337,&l_3337,&l_3337,&l_3337}},{{&l_3337,&l_3337,&l_3337,&l_3337,&l_3337,&l_3337},{&l_3337,&l_3337,&l_3337,&l_3337,&l_3337,&l_3337},{&l_3337,&l_3337,&l_3337,&l_3337,&l_3337,&l_3337}},{{&l_3337,&l_3337,&l_3337,&l_3337,&l_3337,&l_3337},{&l_3337,&l_3337,&l_3337,&l_3337,&l_3337,&l_3337},{&l_3337,&l_3337,&l_3337,&l_3337,&l_3337,&l_3337}},{{&l_3337,&l_3337,&l_3337,&l_3337,&l_3337,&l_3337},{&l_3337,&l_3337,&l_3337,&l_3337,&l_3337,&l_3337},{&l_3337,&l_3337,&l_3337,&l_3337,&l_3337,&l_3337}}};
                        int i, j, k;
                        (*g_1280) = l_3321;
                        l_3322[2][5] ^= p_3;
                        (*l_3321) = ((safe_lshift_func_uint16_t_u_s(p_4, 6)) || (safe_add_func_int8_t_s_s((((*l_3321) & (1L | (++(*l_3327)))) || (safe_sub_func_uint64_t_u_u((((p_4 , ((safe_add_func_int32_t_s_s(p_3, g_510[2][8])) > (safe_div_func_int32_t_s_s(((((*g_2753) = (p_5 & ((*l_3327) &= (l_3272 < (l_3336[1][1][0] != l_3338))))) & p_3) < (*g_2307)), 0x8D6359DBL)))) == 0UL) , l_3320), g_162))), 0UL)));
                        l_3265 ^= (safe_sub_func_uint8_t_u_u(((l_3282 , l_3342) != (void*)0), 0x7BL));
                    }
                    else
                    {
                        int32_t *l_3343[10] = {(void*)0,&l_3316,&l_3316,(void*)0,&l_3316,&l_3316,(void*)0,&l_3316,&l_3316,(void*)0};
                        int i;
                        l_3343[2] = l_3321;
                    }
                    for (p_4 = 0; (p_4 <= 0); p_4 += 1)
                    {
                        int32_t l_3344 = 6L;
                        int i, j, k;
                        if (g_925[(g_1111 + 1)][(g_1111 + 1)][p_4])
                            break;
                        l_3345 = (g_925[(g_1111 + 1)][g_6][g_6] , ((l_3344 ^= ((*l_3321) = l_3272)) || p_5));
                        --l_3346;
                    }
                    if ((((l_3349 ^ 0xC1L) || ((((*g_62) ^= (((*l_3339) = l_3282) && (((((safe_mul_func_uint8_t_u_u(((p_5 , (!g_21)) <= (l_3353[7][5][0] != l_3355)), ((safe_mul_func_int16_t_s_s(((~((((*l_3368) = (safe_lshift_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(p_3, ((safe_sub_func_uint8_t_u_u(l_3265, l_3320)) == 0x0EDCFB30L))), p_4)) <= (*l_3321)) & (*l_3321)) >= p_4), (*l_3321)))) != p_4) >= p_3)) , l_3320), 65528UL)) != 0xBDL))) <= 0UL) >= p_3) && (*g_2307)) && g_1393[1][1][6]))) , &g_1111) != &l_3349)) & p_5))
                    {
                        int32_t l_3382 = 0xAA9C570AL;
                        l_3304[4] &= ((safe_sub_func_uint8_t_u_u((((l_3282 = l_3371) | (((l_3375 ^= ((*l_3321) = (safe_mul_func_uint8_t_u_u((l_3265 = (**g_1145)), (l_3374 != l_3374))))) & (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint16_t_u(((**l_3338) = ((((*g_2753) & ((safe_div_func_int32_t_s_s(((0x2038A1162A48B6EALL | p_5) && (p_4 <= (((l_3381 || 0UL) ^ p_4) , 1UL))), g_158)) | 0x4E3EC7298301A454LL)) != p_4) , (*g_62))))), 1))) > 0xEDL)) ^ (-1L)), l_3382)) || l_3282);
                        (**g_1279) = &l_3304[4];
                        l_3265 = (safe_mod_func_uint64_t_u_u(0x08E381B3EA8E9807LL, g_636));
                        return p_4;
                    }
                    else
                    {
                        uint64_t l_3388[9][9] = {{0x66C333DEDA994F33LL,2UL,1UL,1UL,0x7BA8B624A4FF6A8BLL,3UL,0x3A008BD7293FF170LL,0x3A008BD7293FF170LL,3UL},{0x7BA8B624A4FF6A8BLL,18446744073709551615UL,3UL,18446744073709551615UL,0x7BA8B624A4FF6A8BLL,18446744073709551614UL,0x067FC6FB0230E49CLL,0x3D47AD222DD993E8LL,0x73840E565F582749LL},{3UL,0x1FFB6BD32413B3C1LL,18446744073709551614UL,0x493DD8DB92FFEFB3LL,0x3A008BD7293FF170LL,0x08448AD9B3E4238ELL,2UL,18446744073709551615UL,0x25BCD57BDA47A7BDLL},{18446744073709551615UL,0x067FC6FB0230E49CLL,0x7BA8B624A4FF6A8BLL,0xBF0F7B39340671FCLL,0x493DD8DB92FFEFB3LL,18446744073709551614UL,18446744073709551614UL,6UL,6UL},{18446744073709551614UL,3UL,0x1FFB6BD32413B3C1LL,0x3D47AD222DD993E8LL,0x1FFB6BD32413B3C1LL,3UL,18446744073709551614UL,0x08448AD9B3E4238ELL,0xD68883CED9EC66E7LL},{6UL,0x73840E565F582749LL,18446744073709551615UL,0xD68883CED9EC66E7LL,1UL,0xDE86A4E9B9E36C5FLL,2UL,0x493DD8DB92FFEFB3LL,0x7BA8B624A4FF6A8BLL},{18446744073709551608UL,0x25BCD57BDA47A7BDLL,0xBF0F7B39340671FCLL,0x66C333DEDA994F33LL,18446744073709551615UL,1UL,0x067FC6FB0230E49CLL,0x08448AD9B3E4238ELL,1UL},{1UL,6UL,0x3A008BD7293FF170LL,18446744073709551608UL,0xBF0F7B39340671FCLL,0x067FC6FB0230E49CLL,1UL,18446744073709551608UL,1UL},{0x66C333DEDA994F33LL,18446744073709551615UL,18446744073709551615UL,0xBF0F7B39340671FCLL,1UL,0x08448AD9B3E4238ELL,18446744073709551608UL,18446744073709551614UL,0x3D47AD222DD993E8LL}};
                        int i, j;
                        (*l_3321) = (-1L);
                        l_3388[6][1]--;
                    }
                }
                else
                {
                    if ((!g_157))
                    {
                        return (*g_2307);
                    }
                    else
                    {
                        return p_3;
                    }
                }
            }
            for (l_3268 = 0; (l_3268 <= 4); l_3268 += 1)
            {
                uint8_t l_3393 = 252UL;
                int32_t **l_3398[3];
                uint16_t *****l_3405 = &g_2907;
                int32_t l_3415 = 0x5D5A0923L;
                int32_t l_3417 = (-9L);
                uint16_t l_3435 = 0x38C8L;
                uint8_t *****l_3448 = &l_3444;
                int16_t *l_3473 = &g_156;
                int8_t *l_3479[3];
                uint32_t l_3504 = 0x6490C863L;
                int32_t l_3509 = 0xA84FC79BL;
                int i;
                for (i = 0; i < 3; i++)
                    l_3398[i] = &g_399[3][0];
                for (i = 0; i < 3; i++)
                    l_3479[i] = &g_2093;
                for (l_3282 = 4; (l_3282 >= 0); l_3282 -= 1)
                {
                    int i;
                    l_3392 = &l_3304[(g_6 + 3)];
                    if (l_3304[(g_1111 + 1)])
                        continue;
                    for (g_205 = 0; (g_205 <= 1); g_205 += 1)
                    {
                        int32_t ***l_3399[8] = {&g_2553,&g_2553,&g_2553,&g_2553,&g_2553,&g_2553,&g_2553,&g_2553};
                        int32_t **l_3402 = &g_399[0][0];
                        uint32_t ***l_3413[6] = {&g_2260[1][3][5],&g_2260[2][3][3],&g_2260[2][3][3],&g_2260[1][3][5],&g_2260[2][3][3],&g_2260[2][3][3]};
                        uint32_t ****l_3412 = &l_3413[1];
                        int64_t *l_3414[7] = {(void*)0,&g_510[2][8],&g_510[2][8],(void*)0,&g_510[2][8],&g_510[2][8],(void*)0};
                        int32_t l_3416[10][3][8] = {{{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L}},{{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L}},{{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L}},{{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L}},{{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L}},{{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L}},{{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L}},{{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L}},{{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L}},{{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L},{(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L,(-9L),0x00ADE3F0L}}};
                        int i, j, k;
                        ++l_3393;
                        (*l_3392) &= (safe_rshift_func_uint8_t_u_s((g_925[(g_6 + 2)][(l_3268 + 2)][g_6] < ((l_3398[0] = (l_3400 = l_3398[2])) == (l_3402 = l_3401))), p_4));
                        l_3415 ^= ((((1UL && (safe_mul_func_uint8_t_u_u((l_3405 == l_3406[5][1]), (l_3349 >= l_3304[(l_3282 + 1)])))) <= ((g_510[0][1] ^= (+(((*l_3355) = l_3411) != ((*l_3412) = &g_2260[2][3][3])))) ^ ((void*)0 == &g_1910))) & p_4) && 7UL);
                        --l_3418;
                    }
                }
            }
        }
    }
    l_4605 &= ((&g_427[1][0] != &g_427[5][1]) || (safe_div_func_uint32_t_u_u(((*l_3392) , p_5), (safe_mod_func_int64_t_s_s(((**g_3764) = (!((*l_3797) = ((*l_3589) && ((safe_lshift_func_uint8_t_u_u(p_3, (0UL && ((((*l_3468) = (*l_3468)) != l_4602) != 1UL)))) >= g_2207))))), (*l_3589))))));
    return p_3;
}







static int32_t func_7(int32_t p_8, int32_t p_9, uint16_t p_10)
{
    int32_t ***l_2341 = &g_1280;
    int32_t l_2343 = 1L;
    int32_t l_2396 = 5L;
    int32_t l_2431 = 0xFC938022L;
    uint32_t ***l_2530 = &g_2260[2][3][3];
    const int8_t *** const l_2539 = (void*)0;
    const int8_t *** const *l_2538 = &l_2539;
    const int8_t *** const **l_2537[7][10][3] = {{{&l_2538,&l_2538,&l_2538},{&l_2538,(void*)0,&l_2538},{(void*)0,&l_2538,&l_2538},{&l_2538,&l_2538,&l_2538},{&l_2538,&l_2538,(void*)0},{&l_2538,&l_2538,(void*)0},{&l_2538,(void*)0,&l_2538},{(void*)0,&l_2538,&l_2538},{&l_2538,&l_2538,&l_2538},{(void*)0,&l_2538,&l_2538}},{{(void*)0,(void*)0,&l_2538},{(void*)0,(void*)0,&l_2538},{&l_2538,(void*)0,&l_2538},{&l_2538,&l_2538,&l_2538},{&l_2538,&l_2538,&l_2538},{(void*)0,&l_2538,&l_2538},{(void*)0,(void*)0,(void*)0},{&l_2538,&l_2538,&l_2538},{&l_2538,&l_2538,&l_2538},{(void*)0,&l_2538,&l_2538}},{{&l_2538,&l_2538,&l_2538},{&l_2538,(void*)0,&l_2538},{&l_2538,&l_2538,&l_2538},{(void*)0,&l_2538,&l_2538},{&l_2538,&l_2538,&l_2538},{&l_2538,(void*)0,(void*)0},{&l_2538,&l_2538,&l_2538},{&l_2538,(void*)0,&l_2538},{(void*)0,&l_2538,&l_2538},{&l_2538,&l_2538,(void*)0}},{{(void*)0,&l_2538,&l_2538},{&l_2538,&l_2538,&l_2538},{&l_2538,&l_2538,&l_2538},{&l_2538,&l_2538,&l_2538},{(void*)0,&l_2538,&l_2538},{&l_2538,&l_2538,&l_2538},{&l_2538,&l_2538,&l_2538},{&l_2538,(void*)0,(void*)0},{(void*)0,&l_2538,(void*)0},{(void*)0,(void*)0,&l_2538}},{{&l_2538,&l_2538,&l_2538},{&l_2538,&l_2538,(void*)0},{&l_2538,&l_2538,&l_2538},{&l_2538,(void*)0,&l_2538},{&l_2538,&l_2538,&l_2538},{&l_2538,&l_2538,&l_2538},{&l_2538,&l_2538,&l_2538},{&l_2538,&l_2538,&l_2538},{&l_2538,&l_2538,&l_2538},{(void*)0,&l_2538,(void*)0}},{{(void*)0,(void*)0,&l_2538},{&l_2538,&l_2538,&l_2538},{&l_2538,&l_2538,&l_2538},{&l_2538,(void*)0,&l_2538},{&l_2538,&l_2538,(void*)0},{(void*)0,&l_2538,(void*)0},{&l_2538,&l_2538,&l_2538},{&l_2538,(void*)0,&l_2538},{&l_2538,(void*)0,(void*)0},{&l_2538,&l_2538,&l_2538}},{{&l_2538,&l_2538,(void*)0},{(void*)0,&l_2538,(void*)0},{&l_2538,(void*)0,&l_2538},{&l_2538,(void*)0,&l_2538},{&l_2538,&l_2538,&l_2538},{&l_2538,&l_2538,&l_2538},{&l_2538,&l_2538,&l_2538},{&l_2538,(void*)0,&l_2538},{(void*)0,&l_2538,&l_2538},{(void*)0,&l_2538,(void*)0}}};
    int16_t l_2565 = 0xBD1AL;
    uint8_t l_2573 = 0x72L;
    int32_t *l_2600 = &g_162;
    int32_t l_2662 = 0xB7C80D59L;
    uint64_t l_2668[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
    uint32_t **l_2681 = (void*)0;
    int32_t ** const *l_2709 = (void*)0;
    int32_t ** const * const *l_2708 = &l_2709;
    int16_t *l_2751[3];
    int16_t **l_2750 = &l_2751[1];
    int16_t l_2759 = 0xEECEL;
    uint16_t l_2788 = 7UL;
    uint32_t l_2877 = 0x72377C7BL;
    uint32_t ****l_2880[4][8][6] = {{{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,(void*)0,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,(void*)0,&l_2530,(void*)0},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530}},{{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,(void*)0,&l_2530,&l_2530},{&l_2530,&l_2530,(void*)0,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,(void*)0},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530}},{{(void*)0,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,(void*)0,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,(void*)0,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530}},{{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{(void*)0,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530},{&l_2530,&l_2530,&l_2530,&l_2530,&l_2530,&l_2530}}};
    uint8_t *l_2890 = &g_736;
    uint8_t **l_2889[4];
    uint8_t ***l_2888 = &l_2889[3];
    uint8_t **** const l_2887 = &l_2888;
    uint64_t **l_2909 = &g_103[0][1][3];
    uint64_t l_2974[5];
    uint16_t ***l_3002 = &g_153;
    uint16_t ** const *l_3006 = (void*)0;
    int32_t l_3054[5];
    int32_t l_3055 = 0L;
    const uint64_t *l_3074 = &l_2668[0];
    const int64_t l_3111[4][1][5] = {{{0x8E1FC18C32CF868ELL,0x8E1FC18C32CF868ELL,9L,0x8E1FC18C32CF868ELL,0x8E1FC18C32CF868ELL}},{{0L,0x046F9AF6D0E0ACC1LL,0L,0L,0x046F9AF6D0E0ACC1LL}},{{0x8E1FC18C32CF868ELL,1L,1L,0x8E1FC18C32CF868ELL,1L}},{{0x046F9AF6D0E0ACC1LL,0x046F9AF6D0E0ACC1LL,0x4C279264C8A8BF65LL,0x046F9AF6D0E0ACC1LL,0x046F9AF6D0E0ACC1LL}}};
    int32_t l_3115[10] = {(-7L),0L,(-1L),0L,(-7L),(-7L),0L,(-1L),0L,(-7L)};
    uint16_t l_3120 = 65534UL;
    uint64_t l_3152 = 1UL;
    int8_t l_3242[10];
    uint16_t l_3262 = 1UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2751[i] = &g_1099;
    for (i = 0; i < 4; i++)
        l_2889[i] = &l_2890;
    for (i = 0; i < 5; i++)
        l_2974[i] = 0x18125F95AC499B5ALL;
    for (i = 0; i < 5; i++)
        l_3054[i] = 0L;
    for (i = 0; i < 10; i++)
        l_3242[i] = 0x74L;
lbl_2977:
    for (g_44 = 0; (g_44 <= 2); g_44 += 1)
    {
        int64_t l_2350 = 7L;
        int32_t l_2351 = (-4L);
        int8_t *l_2365[7][6][2] = {{{&g_200[0][1],&g_2093},{&g_200[1][0],&g_2093},{&g_2093,&g_21},{&g_200[1][0],&g_2093},{&g_157,(void*)0},{&g_1051,&g_200[1][0]}},{{(void*)0,&g_1051},{&g_200[0][1],&g_200[0][1]},{&g_200[0][1],&g_200[0][1]},{(void*)0,&g_200[1][0]},{&g_200[0][1],(void*)0},{&g_200[0][1],&g_21}},{{&g_200[1][0],&g_2093},{&g_21,&g_2093},{&g_200[1][0],&g_21},{&g_200[0][1],(void*)0},{&g_200[0][1],&g_200[1][0]},{(void*)0,&g_200[0][1]}},{{&g_200[0][1],&g_200[0][1]},{&g_200[0][1],&g_1051},{(void*)0,&g_200[1][0]},{&g_1051,(void*)0},{&g_157,&g_2093},{&g_200[1][0],&g_21}},{{&g_2093,&g_2093},{&g_200[1][0],&g_2093},{&g_200[0][1],(void*)0},{&g_21,&g_21},{&g_157,&g_21},{&g_21,&g_200[0][1]}},{{&g_21,&g_21},{&g_157,&g_21},{&g_21,(void*)0},{&g_200[0][1],&g_200[1][0]},{&g_2093,&g_200[0][1]},{&g_200[0][1],&g_1588}},{{&g_21,&g_200[1][0]},{(void*)0,&g_1588},{&g_21,&g_2093},{&g_157,&g_21},{&g_2093,&g_2093},{&g_21,&g_157}}};
        uint8_t l_2386[1];
        int32_t l_2391 = 0x6B52EB82L;
        int32_t l_2395 = 0xFAADB967L;
        int32_t l_2397 = 0xB170083EL;
        int32_t l_2399 = 0x6F67B9C0L;
        int32_t l_2400 = 9L;
        int8_t ***l_2405 = &g_1010;
        int32_t l_2429 = 0x651FAF66L;
        uint16_t l_2433 = 0x8EF4L;
        const uint32_t * const l_2463[6][6][3] = {{{(void*)0,&g_453[4][1][1],&g_1393[1][1][6]},{&g_904,&g_453[4][1][1],&g_904},{(void*)0,&g_904,(void*)0},{&g_1393[1][1][6],(void*)0,&g_904},{&g_453[2][2][0],(void*)0,&g_453[2][2][0]},{(void*)0,&g_1393[1][0][2],&g_1393[1][1][6]}},{{&g_453[2][2][0],&g_453[7][4][0],&g_904},{&g_1393[1][1][6],&g_453[2][2][0],&g_1393[1][1][6]},{(void*)0,(void*)0,&g_904},{&g_904,&g_904,&g_904},{(void*)0,&g_1393[1][1][6],&g_1393[1][1][6]},{&g_904,&g_453[8][1][1],&g_904}},{{&g_1393[1][1][6],&g_453[5][2][3],&g_1393[1][1][6]},{&g_1393[1][1][6],(void*)0,&g_453[2][2][0]},{&g_453[2][2][0],&g_453[5][2][3],&g_904},{(void*)0,&g_453[8][1][1],(void*)0},{&g_1393[1][1][6],&g_1393[1][1][6],&g_904},{(void*)0,&g_904,&g_1393[1][1][6]}},{{(void*)0,(void*)0,(void*)0},{&g_1393[1][1][6],&g_453[2][2][0],&g_453[5][2][3]},{(void*)0,&g_453[7][4][0],&g_904},{&g_453[2][2][0],&g_1393[1][0][2],&g_904},{&g_1393[1][1][6],(void*)0,&g_904},{&g_1393[1][1][6],(void*)0,&g_453[5][2][3]}},{{&g_904,&g_904,(void*)0},{(void*)0,&g_453[4][1][1],&g_1393[1][1][6]},{&g_904,&g_453[4][1][1],&g_904},{(void*)0,&g_904,(void*)0},{&g_1393[1][1][6],(void*)0,&g_904},{&g_453[2][2][0],(void*)0,&g_453[2][2][0]}},{{(void*)0,&g_1393[1][0][2],&g_1393[1][1][6]},{&g_453[2][2][0],&g_453[7][4][0],&g_904},{&g_1393[1][1][6],&g_453[2][2][0],&g_1393[1][1][6]},{(void*)0,(void*)0,&g_904},{&g_904,&g_904,&g_904},{(void*)0,&g_1393[1][1][6],&g_1393[1][1][6]}}};
        int8_t l_2506 = 0xD5L;
        int64_t l_2520 = 0x260E34A0107A1075LL;
        int16_t **l_2550 = (void*)0;
        uint64_t **l_2596 = &g_103[0][1][0];
        uint8_t l_2601 = 248UL;
        int32_t * const *l_2641[8] = {&g_345[7][1][1],&g_1152,&g_345[7][1][1],&g_1152,&g_345[7][1][1],&g_1152,&g_345[7][1][1],&g_1152};
        int32_t * const **l_2640[9][2][8] = {{{&l_2641[2],&l_2641[4],&l_2641[2],&l_2641[2],&l_2641[4],&l_2641[2],&l_2641[2],&l_2641[4]},{&l_2641[4],&l_2641[2],&l_2641[2],&l_2641[4],&l_2641[2],&l_2641[2],&l_2641[4],&l_2641[2]}},{{&l_2641[4],&l_2641[4],&l_2641[4],&l_2641[4],&l_2641[4],&l_2641[4],&l_2641[4],&l_2641[4]},{&l_2641[2],&l_2641[4],&l_2641[2],&l_2641[2],&l_2641[4],&l_2641[2],&l_2641[2],&l_2641[4]}},{{&l_2641[4],&l_2641[2],&l_2641[2],&l_2641[4],&l_2641[2],&l_2641[2],&l_2641[4],&l_2641[2]},{&l_2641[4],&l_2641[4],&l_2641[4],&l_2641[2],&l_2641[2],&l_2641[4],&l_2641[2],&l_2641[2]}},{{&l_2641[4],&l_2641[2],&l_2641[4],&l_2641[4],&l_2641[2],&l_2641[4],&l_2641[4],&l_2641[2]},{&l_2641[2],&l_2641[4],&l_2641[4],&l_2641[2],&l_2641[4],&l_2641[4],&l_2641[2],&l_2641[4]}},{{&l_2641[2],&l_2641[2],&l_2641[4],&l_2641[2],&l_2641[2],&l_2641[4],&l_2641[2],&l_2641[2]},{&l_2641[4],&l_2641[2],&l_2641[4],&l_2641[4],&l_2641[2],&l_2641[4],&l_2641[4],&l_2641[2]}},{{&l_2641[2],&l_2641[4],&l_2641[4],&l_2641[2],&l_2641[4],&l_2641[4],&l_2641[2],&l_2641[4]},{&l_2641[2],&l_2641[2],&l_2641[4],&l_2641[2],&l_2641[2],&l_2641[4],&l_2641[2],&l_2641[2]}},{{&l_2641[4],&l_2641[2],&l_2641[4],&l_2641[4],&l_2641[2],&l_2641[4],&l_2641[4],&l_2641[2]},{&l_2641[2],&l_2641[4],&l_2641[4],&l_2641[2],&l_2641[4],&l_2641[4],&l_2641[2],&l_2641[4]}},{{&l_2641[2],&l_2641[2],&l_2641[4],&l_2641[2],&l_2641[2],&l_2641[4],&l_2641[2],&l_2641[2]},{&l_2641[4],&l_2641[2],&l_2641[4],&l_2641[4],&l_2641[2],&l_2641[4],&l_2641[4],&l_2641[2]}},{{&l_2641[2],&l_2641[4],&l_2641[4],&l_2641[2],&l_2641[4],&l_2641[4],&l_2641[2],&l_2641[4]},{&l_2641[2],&l_2641[2],&l_2641[4],&l_2641[2],&l_2641[2],&l_2641[4],&l_2641[2],&l_2641[2]}}};
        int32_t * const ***l_2639 = &l_2640[5][0][1];
        int32_t l_2657 = 0L;
        int32_t *l_2667 = &l_2399;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2386[i] = 0xABL;
        for (g_29 = 0; (g_29 <= 4); g_29 += 1)
        {
            int16_t l_2349[3][8][1] = {{{0xDEBAL},{0L},{0L},{0xDEBAL},{0L},{0L},{0xDEBAL},{0L}},{{0L},{0xDEBAL},{0L},{0L},{0xDEBAL},{0L},{0L},{0xDEBAL}},{{0L},{0L},{0xDEBAL},{0L},{0L},{0xDEBAL},{0L},{0L}}};
            uint8_t **l_2385 = (void*)0;
            uint8_t ***l_2384 = &l_2385;
            int32_t l_2393[10][7][3] = {{{0xA5CB412AL,1L,0xBE0AD6E4L},{4L,0xDA7D3966L,(-2L)},{0x7224F58BL,0L,(-2L)},{(-6L),0xDA7D3966L,(-6L)},{0xA5BFBA87L,1L,0x759589AFL},{0L,0x43479AC9L,(-6L)},{0x759589AFL,0x5DA8B97AL,(-2L)}},{{3L,0xD6896C1CL,(-2L)},{0x759589AFL,0x4EAE28C1L,0xBE0AD6E4L},{0L,9L,(-4L)},{0xA5BFBA87L,0x4EAE28C1L,0xA5BFBA87L},{(-6L),0xD6896C1CL,4L},{0x7224F58BL,0x5DA8B97AL,0xA5BFBA87L},{4L,0x43479AC9L,(-4L)}},{{0xA5CB412AL,1L,0xBE0AD6E4L},{4L,0xDA7D3966L,(-2L)},{0x7224F58BL,0L,(-2L)},{(-6L),0xDA7D3966L,(-6L)},{0xA5BFBA87L,1L,0x759589AFL},{0L,0x43479AC9L,(-6L)},{0x759589AFL,0x5DA8B97AL,(-2L)}},{{3L,0xD6896C1CL,(-2L)},{(-9L),0xC3D3FB05L,0xDEC39AD1L},{1L,(-4L),0L},{0x5CF77656L,0xC3D3FB05L,0x5CF77656L},{(-1L),(-6L),(-1L)},{(-1L),(-4L),0x5CF77656L},{(-1L),3L,0L}},{{1L,6L,0xDEC39AD1L},{(-1L),1L,0x1359E41FL},{(-1L),0L,(-4L)},{(-1L),1L,(-1L)},{0x5CF77656L,6L,(-9L)},{1L,3L,(-1L)},{(-9L),(-4L),(-4L)}},{{(-1L),(-6L),0x1359E41FL},{(-9L),0xC3D3FB05L,0xDEC39AD1L},{1L,(-4L),0L},{0x5CF77656L,0xC3D3FB05L,0x5CF77656L},{(-1L),(-6L),(-1L)},{(-1L),(-4L),0x5CF77656L},{(-1L),3L,0L}},{{1L,6L,0xDEC39AD1L},{(-1L),1L,0x1359E41FL},{(-1L),0L,(-4L)},{(-1L),1L,(-1L)},{0x5CF77656L,6L,(-9L)},{1L,3L,(-1L)},{(-9L),(-4L),(-4L)}},{{(-1L),(-6L),0x1359E41FL},{(-9L),0xC3D3FB05L,0xDEC39AD1L},{1L,(-4L),0L},{0x5CF77656L,0xC3D3FB05L,0x5CF77656L},{(-1L),(-6L),(-1L)},{(-1L),(-4L),0x5CF77656L},{(-1L),3L,0L}},{{1L,6L,0xDEC39AD1L},{(-1L),1L,0x1359E41FL},{(-1L),0L,(-4L)},{(-1L),1L,(-1L)},{0x5CF77656L,6L,(-9L)},{1L,3L,(-1L)},{(-9L),(-4L),(-4L)}},{{(-1L),(-6L),0x1359E41FL},{(-9L),0xC3D3FB05L,0xDEC39AD1L},{1L,(-4L),0L},{0x5CF77656L,0xC3D3FB05L,0x5CF77656L},{(-1L),(-6L),(-1L)},{(-1L),(-4L),0x5CF77656L},{(-1L),3L,0L}}};
            int32_t **** const l_2428 = &g_428;
            int i, j, k;
            if (p_8)
                break;
            for (g_1588 = 2; (g_1588 >= 0); g_1588 -= 1)
            {
                int16_t l_2325 = 0xB11EL;
                uint32_t *l_2326 = &g_1164;
                uint64_t ****l_2340 = &g_2163;
                uint64_t *****l_2339 = &l_2340;
                int8_t *l_2367 = &g_1588;
                int32_t l_2389 = (-1L);
                int32_t l_2392 = 0xE9BC3C44L;
                int32_t l_2394[1];
                int16_t l_2398 = (-1L);
                int32_t l_2401 = 1L;
                uint16_t ***l_2425[8] = {&g_153,&g_153,&g_153,&g_153,&g_153,&g_153,&g_153,&g_153};
                const int32_t * const l_2444 = &l_2429;
                const int32_t * const *l_2443 = &l_2444;
                uint32_t l_2464 = 0xA5248069L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_2394[i] = 0xA71E6CCEL;
                if (((((~((l_2325 , p_10) , ((g_1349 = (0x77B575E7L == ((*l_2326)++))) > p_8))) , ((p_9 ^ (((p_8 = (((safe_add_func_int32_t_s_s(p_9, p_9)) != ((safe_add_func_uint32_t_u_u((p_10 == (safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((((*l_2339) = &g_325) != &g_2163), 0x96L)), 1)), 0xD6146A2B3D1204B8LL))), 0UL)) || 0xB0L)) , 0xA99A04B6L)) || p_9) < 4L)) , (void*)0)) != (void*)0) ^ p_10))
                {
                    int32_t ****l_2342 = &g_1279;
                    int32_t l_2344 = 1L;
                    l_2344 &= (l_2343 = (((*l_2342) = l_2341) != (void*)0));
                    for (g_1099 = 3; (g_1099 >= 0); g_1099 -= 1)
                    {
                        return p_10;
                    }
                    for (l_2325 = 3; (l_2325 >= 0); l_2325 -= 1)
                    {
                        int32_t *l_2345 = &g_129;
                        int32_t *l_2346 = &l_2343;
                        int32_t *l_2347 = &l_2344;
                        int32_t *l_2348[3][9] = {{&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131}};
                        uint16_t l_2352 = 0x7252L;
                        int i, j;
                        p_8 |= 0x1BFC02F5L;
                        l_2352++;
                        if ((*g_2307))
                            continue;
                    }
                }
                else
                {
                    p_8 ^= l_2350;
                    if (l_2349[2][7][0])
                        break;
                }
                for (l_2351 = 1; (l_2351 >= 0); l_2351 -= 1)
                {
                    int8_t *l_2366 = &g_21;
                    int32_t *l_2376 = &g_55;
                    int16_t *l_2387[3];
                    int32_t *l_2388 = &g_129;
                    int32_t *l_2390[4][9] = {{&g_162,&g_162,(void*)0,&g_162,(void*)0,&g_162,&g_162,(void*)0,&g_162},{(void*)0,&g_129,(void*)0,(void*)0,(void*)0,&g_6,&l_2389,&g_6,(void*)0},{&g_162,&g_131,&g_131,&g_162,&g_162,&g_162,&g_131,&g_131,&g_162},{&g_129,(void*)0,&g_129,(void*)0,&g_129,&g_129,(void*)0,&g_129,(void*)0}};
                    uint64_t l_2402[2];
                    int32_t **l_2445 = &g_399[0][0];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_2387[i] = &g_156;
                    for (i = 0; i < 2; i++)
                        l_2402[i] = 0x9A58EB4B49BAC657LL;
                    p_8 = (safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(((g_1099 = (safe_lshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((g_630[g_29][(l_2351 + 1)][(g_29 + 1)] &= (safe_sub_func_uint32_t_u_u((g_200[l_2351][l_2351] , ((l_2366 = l_2365[1][4][1]) == (g_1393[(g_1588 + 1)][(l_2351 + 1)][g_29] , l_2367))), ((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((((*l_2376) |= (safe_rshift_func_uint16_t_u_s(g_510[(g_29 + 1)][(l_2351 + 3)], 14))) < ((((((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(l_2350, (safe_unary_minus_func_uint32_t_u(((((g_2093 = (safe_lshift_func_uint16_t_u_u((((void*)0 == l_2384) < p_10), 15))) >= 0x69L) == p_8) & p_10))))) != g_574), 65528UL)) != 3UL) && (**g_1145)) && 0xCB4BL) && p_10) && l_2350)), g_1111)) <= p_8), p_9)), l_2386[0])) , 0xF4CF5C3FL)))) , p_10), 3L)), p_9))) , (*l_2376)), p_10)), p_10));
                    l_2402[1]--;
                    if (l_2394[0])
                    {
                        int8_t ****l_2406 = (void*)0;
                        int8_t ****l_2407 = (void*)0;
                        (*g_1280) = &l_2351;
                        (*l_2388) = (((p_9 <= g_131) , (*g_1581)) == (g_2408 = l_2405));
                    }
                    else
                    {
                        uint32_t l_2409 = 0xFCD2D7ABL;
                        int32_t ****l_2413 = &g_428;
                        int32_t *****l_2412 = &l_2413;
                        int32_t l_2430[10][4] = {{(-3L),0L,0xC6838746L,(-1L)},{3L,(-10L),0x0E2166E6L,0x0E2166E6L},{3L,3L,0xC6838746L,0x424C73AFL},{(-3L),0x0E2166E6L,3L,0L},{(-10L),1L,(-8L),3L},{0L,1L,0L,0L},{1L,0x0E2166E6L,0xFCC0C62AL,0x424C73AFL},{0x424C73AFL,3L,(-10L),0x0E2166E6L},{(-1L),(-10L),(-10L),(-1L)},{0x424C73AFL,0L,0xFCC0C62AL,0L}};
                        int16_t l_2432[3][2][9] = {{{0xE0F9L,0x6F67L,1L,0x7BE4L,0x83EBL,0xE0F9L,0x7D30L,0x7DE9L,1L},{8L,0x38A2L,(-10L),0x7DE9L,0xE7D9L,3L,8L,0xE0F9L,0x7DE9L}},{{0xB8B1L,0x6F67L,0x69F6L,0L,0L,0x69F6L,0x6F67L,0xB8B1L,0xE7D9L},{0xB8B1L,(-10L),0xE7D9L,0x69F6L,0xF36CL,0x3A93L,(-1L),0L,0x6FBEL}},{{8L,0xE0F9L,1L,(-1L),0x38A2L,0x71C6L,0xE7D9L,1L,0xE7D9L},{0xE0F9L,1L,0x73B1L,0x73B1L,1L,0xE0F9L,0xF36CL,1L,0x7DE9L}}};
                        uint8_t *l_2438 = &g_194;
                        int i, j, k;
                        --l_2409;
                        l_2391 ^= (((*l_2412) = &g_428) != ((safe_mod_func_int32_t_s_s((+0xF04AL), (safe_mul_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(l_2409, l_2351)) && ((safe_rshift_func_uint8_t_u_s(l_2397, p_8)) && ((safe_mul_func_int8_t_s_s(((l_2425[1] != (void*)0) , (((safe_add_func_int16_t_s_s((p_9 <= 0xC9L), l_2349[1][0][0])) || (*g_62)) > l_2386[0])), l_2393[8][4][2])) , p_9))) ^ p_9), p_10)))) , l_2428));
                        ++l_2433;
                        p_8 = (l_2432[2][1][0] > (safe_mod_func_int32_t_s_s(((l_2430[2][3] = ((*l_2438) = 1UL)) , (p_9 & (65535UL == (safe_mul_func_int16_t_s_s((g_159 = (l_2443 != l_2445)), (safe_div_func_int32_t_s_s((((safe_mod_func_int32_t_s_s(((l_2430[9][1] = (safe_sub_func_uint8_t_u_u((l_2391 != (safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(0L, (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((~((void*)0 == l_2463[1][2][0])), 6)), g_845)), l_2349[1][0][0])))) != p_10), 0x0F71L))), 0xCEL))) && 18446744073709551610UL), g_200[1][0])) | 18446744073709551608UL) || p_9), p_9))))))), 0xB2D9FF47L)));
                    }
                    l_2464--;
                }
                l_2395 = (safe_lshift_func_uint16_t_u_u(((*g_62) > l_2391), 5));
            }
        }
        for (g_205 = 0; (g_205 <= 2); g_205 += 1)
        {
            uint8_t *l_2477 = &l_2386[0];
            int64_t l_2500 = 0xB7043153BD710D56LL;
            int32_t *l_2501 = &g_126;
            int32_t *l_2502 = &g_2503;
            uint16_t l_2504 = 65535UL;
            int16_t *l_2505[2];
            int32_t *l_2507 = &g_129;
            int32_t **l_2554[10][2] = {{&g_399[0][0],(void*)0},{&g_399[0][0],&l_2502},{(void*)0,(void*)0},{&g_399[0][0],(void*)0},{(void*)0,&l_2502},{&g_399[0][0],(void*)0},{&g_399[0][0],&g_399[0][0]},{(void*)0,&l_2502},{(void*)0,&g_399[0][0]},{&g_399[0][0],(void*)0}};
            uint32_t **l_2590 = &g_2261;
            uint32_t l_2642 = 18446744073709551609UL;
            int32_t l_2649[8][7] = {{0xB036F729L,0xB036F729L,3L,(-1L),0x89A46040L,(-1L),3L},{0x7C6A8590L,(-1L),0x1F352F30L,0L,1L,0L,0x1F352F30L},{0xB036F729L,0xB036F729L,3L,(-1L),0x89A46040L,(-1L),3L},{0x7C6A8590L,(-1L),0x1F352F30L,0L,1L,0L,0x1F352F30L},{0xB036F729L,0xB036F729L,3L,(-1L),0x89A46040L,(-1L),3L},{0x7C6A8590L,(-1L),0x1F352F30L,0L,1L,0L,0x1F352F30L},{0xB036F729L,0xB036F729L,3L,(-1L),0x89A46040L,(-1L),3L},{0x7C6A8590L,(-1L),0x1F352F30L,1L,(-5L),1L,0x7C6A8590L}};
            uint16_t l_2664 = 0x7F8AL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_2505[i] = &g_749[8][2];
            (*l_2507) &= (safe_add_func_uint64_t_u_u(l_2350, (safe_sub_func_uint8_t_u_u(p_8, (((((safe_sub_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_s(((*g_62) = p_10), (l_2343 = (((((*l_2477)--) < (safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((4294967295UL && (((l_2504 = ((safe_rshift_func_uint8_t_u_u(l_2400, (safe_add_func_uint32_t_u_u(((0xB1F84AD6L | (l_2399 ^= (safe_rshift_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((*l_2502) |= ((*l_2501) |= (((safe_mod_func_uint32_t_u_u(((((((safe_lshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((l_2500 < 0x2BA1C90C6EAC8E63LL), 1UL)), 4)) <= 4UL) , 1UL) & p_10) , p_9) < l_2429), l_2400)) > l_2391) == 3L))) , l_2500), p_10)), l_2391)) , p_10) >= p_8), l_2351)))) && l_2433), g_21)))) , p_9)) != g_1349) <= 0xBF27L)), 0xD9351550L)), p_9))) & p_8) ^ p_9)))) == p_10) | 6UL) >= 0xA3A6CAA6L), l_2506)) != 0x9DL) && 0xE0DF27A3E9AAB0E7LL) & 0x81L) != (*g_2307))))));
            if ((2UL <= ((safe_div_func_int64_t_s_s(((l_2397 != (((p_9 , (safe_mod_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((((*l_2507) = 0xD7E1E3E6L) | (safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(0x8516L, l_2386[0])), ((safe_mod_func_int16_t_s_s((&g_1581 != &g_1443), 0x5370L)) == 0x5190L)))), l_2520)) , (*g_62)), p_9))) , 0x0165L) , 0xE2L)) < 0x45E4L), g_925[0][5][0])) < p_8)))
            {
                uint32_t ***l_2521 = &g_2260[2][3][3];
                uint32_t ****l_2531 = (void*)0;
                uint32_t ****l_2532 = &l_2521;
                (*l_2521) = (void*)0;
                if ((*l_2507))
                    continue;
                (*l_2507) = (18446744073709551608UL < (((safe_div_func_int8_t_s_s((~(p_8 , ((safe_mul_func_int8_t_s_s((!((18446744073709551611UL & ((void*)0 != &g_1374)) | (safe_lshift_func_int8_t_s_u(((p_10 , &g_2148[3]) != ((*l_2532) = l_2530)), ((safe_rshift_func_int16_t_s_u(g_736, p_8)) < (*l_2507)))))), 2UL)) >= 0xA7BCL))), l_2520)) | 0x6390L) || g_200[0][1]));
            }
            else
            {
                uint16_t l_2566 = 0xE487L;
                if ((safe_add_func_int8_t_s_s(p_10, (l_2537[1][8][1] != &g_1443))))
                {
                    int16_t ***l_2551 = (void*)0;
                    int16_t ***l_2552 = &l_2550;
                    int32_t **l_2563 = &g_399[0][0];
                    int32_t ***l_2564 = &l_2563;
                    const int32_t l_2567 = 9L;
                    uint16_t *l_2569 = &l_2504;
                    const uint64_t **l_2594 = (void*)0;
                    const uint64_t ***l_2593 = &l_2594;
                    const uint64_t ****l_2592 = &l_2593;
                    const uint64_t *****l_2591[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int16_t l_2599 = 1L;
                    int i;
                    if ((p_10 ^ (((safe_div_func_uint32_t_u_u((~((safe_lshift_func_uint16_t_u_u(((*l_2507) , ((*l_2569) = ((safe_sub_func_uint64_t_u_u(((safe_add_func_int16_t_s_s(g_904, (((((!(((((*l_2552) = l_2550) == (void*)0) , (g_2553 == ((*g_428) = l_2554[0][0]))) > (safe_lshift_func_uint16_t_u_u(((*g_62) = (safe_mul_func_uint16_t_u_u((((0xD49AA1A5EEF77836LL & ((l_2431 &= (safe_mod_func_int8_t_s_s(((((safe_div_func_int8_t_s_s(((((l_2565 = ((*l_2507) = (((*l_2564) = l_2563) != (void*)0))) <= 0x7A0334D9L) <= l_2566) ^ p_9), 0x95L)) <= 0xEA8EEE3CL) < g_749[8][2]) < p_10), l_2567))) == p_9)) , g_131) < p_9), g_158))), 4)))) == p_8) | l_2386[0]) , g_2568[4][8]) == l_2567))) >= l_2351), p_8)) & 0x5C9D05ADL))), p_8)) == l_2567)), (*g_2307))) == l_2566) >= 3UL)))
                    {
                        const uint16_t *l_2572 = &g_63;
                        const uint16_t **l_2571 = &l_2572;
                        const uint16_t ***l_2570 = &l_2571;
                        (**l_2341) = (void*)0;
                        (*l_2570) = (*g_144);
                    }
                    else
                    {
                        uint32_t ** const l_2578 = &g_2261;
                        uint64_t *l_2583 = &g_67;
                        int32_t l_2588 = 8L;
                        int64_t *l_2595 = &g_636;
                        l_2573 |= p_10;
                        (*l_2507) = (safe_add_func_uint8_t_u_u((((*l_2595) = (safe_mul_func_int16_t_s_s((((l_2578 == (void*)0) , (void*)0) == (((((l_2569 == ((safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s((p_8 &= (6UL && ((((*l_2583) = (*l_2507)) , (safe_mod_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((((p_10 < l_2566) < p_9) < g_2093), l_2588)) >= g_1036), p_9))) , g_2568[4][8]))), g_510[2][4])), g_2589)) , (void*)0)) < g_2207) , l_2578) != l_2590) , l_2591[8])), (*g_62)))) <= p_9), p_10));
                        (**g_1910) = &p_8;
                        l_2599 |= ((l_2596 = l_2596) == ((safe_div_func_int16_t_s_s(g_510[2][8], g_1051)) , (void*)0));
                    }
                }
                else
                {
                    (*g_1911) = l_2600;
                    return p_9;
                }
                if (l_2601)
                    continue;
            }
            for (l_2506 = 0; (l_2506 <= 2); l_2506 += 1)
            {
                uint32_t l_2635 = 0x27B448E5L;
                int64_t *l_2636 = &l_2500;
                uint32_t *l_2637 = (void*)0;
                uint32_t *l_2638 = &l_2635;
                int32_t l_2648 = 0xD74D1745L;
                int32_t l_2650 = 0x743D2316L;
                int32_t l_2651 = (-1L);
                int32_t l_2653 = 0x4D0A0A61L;
                int32_t l_2656 = 0x74AE0FD2L;
                int32_t l_2659 = 0x2DCBBDF8L;
                int32_t l_2660 = 0x1EBEA409L;
                int32_t l_2663 = (-8L);
                int i, j, k;
                if ((((*l_2600) ^= (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((*g_62) = ((p_9 , ((&g_2260[(g_44 + 2)][(g_44 + 4)][(l_2506 + 2)] != &g_2260[(g_205 + 1)][(g_44 + 4)][(l_2506 + 2)]) , &g_1279)) == (((((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s((*l_2507), (((safe_div_func_int64_t_s_s(((safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(((((safe_mod_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((*l_2507), ((((((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((*l_2638) = ((((*l_2477) = (((*l_2636) = (safe_sub_func_uint32_t_u_u(((0x92B2L || g_126) , (safe_div_func_int32_t_s_s(l_2635, 2L))), g_1349))) , 1UL)) & 9UL) | 2L)), (*l_2507))), l_2520)) && g_63) , (*l_2507)) == 0x9E68A707459B70D9LL) <= p_9) || (*l_2507)))), 0x879577162EB88867LL)) , p_8) > (-7L)) == 65535UL))), p_9)), (-5L))) | p_10), l_2395)) , &g_427[5][1]) == (void*)0))) | (-1L)), p_8)) != p_10), (**g_1145))), 0x63E36257L)), 0xAAL)) , p_9) , p_10) , p_9) , l_2639))), l_2642)), p_10))) , 0L))
                {
                    int16_t l_2652 = 6L;
                    int32_t l_2654 = 1L;
                    int32_t l_2658 = 1L;
                    int32_t l_2661[1][1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_2661[i][j] = 0x064365FEL;
                    }
                    (*g_1280) = (void*)0;
                    for (g_2589 = 0; (g_2589 <= 1); g_2589 += 1)
                    {
                        uint32_t l_2643 = 0xDA0C3135L;
                        int32_t l_2646 = 0x6E60966BL;
                        int64_t l_2647 = 1L;
                        int32_t l_2655[5][1];
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_2655[i][j] = 0x07AA2659L;
                        }
                        (*l_2507) |= 1L;
                        l_2643++;
                        (*g_1911) = &p_8;
                        ++l_2664;
                    }
                }
                else
                {
                    uint16_t l_2673 = 65535UL;
                    int32_t l_2683 = 0x3EE1754EL;
                    int32_t l_2684 = 0x899FFC7EL;
                    int32_t l_2685 = 1L;
                    int32_t l_2687 = (-1L);
                    if (p_10)
                        break;
                    l_2667 = &p_8;
                    ++l_2668[2];
                    for (l_2648 = 0; (l_2648 <= 1); l_2648 += 1)
                    {
                        uint8_t l_2680 = 255UL;
                        uint64_t *l_2682 = &g_574;
                        int32_t l_2686 = (-5L);
                        uint32_t l_2688 = 0xA262CCC5L;
                        int i, j;
                        l_2649[1][0] &= ((g_200[l_2648][l_2648] < ((safe_sub_func_uint8_t_u_u(l_2673, (safe_mod_func_uint32_t_u_u(1UL, ((((safe_sub_func_int8_t_s_s(((safe_add_func_int8_t_s_s(l_2680, (((*l_2682) ^= (((*l_2600) && ((void*)0 != l_2681)) , 0x7FDD763FFCB41EF5LL)) ^ 1L))) == p_10), l_2673)) == p_8) || p_10) ^ (*l_2507)))))) > 0x6E661913L)) , 1L);
                        l_2688++;
                        return g_2691;
                    }
                }
            }
        }
    }
lbl_3199:
    if ((*l_2600))
    {
        int32_t *l_2695 = &g_129;
        int32_t ****l_2706 = &g_428;
        int32_t l_2716[5];
        int32_t l_2730[8][10] = {{0x8385A0BDL,0x95997D8CL,0x95997D8CL,0x8385A0BDL,0L,(-1L),1L,0x3DFC03CBL,0x81C0154FL,0x2D7102FEL},{0x8385A0BDL,0x81C0154FL,1L,0x95997D8CL,0x3DFC03CBL,0x3DFC03CBL,0x95997D8CL,1L,0x81C0154FL,0x8385A0BDL},{0L,0x2D7102FEL,(-1L),0x8385A0BDL,0x81C0154FL,1L,0x95997D8CL,0x3DFC03CBL,0x3DFC03CBL,0x95997D8CL},{0x3DFC03CBL,0x81C0154FL,0x2D7102FEL,0x2D7102FEL,0x81C0154FL,0x3DFC03CBL,1L,(-1L),0L,0x8385A0BDL},{0x81C0154FL,0x95997D8CL,0x2D7102FEL,0x8385A0BDL,0x3DFC03CBL,(-1L),(-1L),0x3DFC03CBL,0x8385A0BDL,0x2D7102FEL},{0x81C0154FL,0x81C0154FL,(-1L),0x95997D8CL,0L,0x3DFC03CBL,0x2D7102FEL,1L,0x8385A0BDL,0x8385A0BDL},{0x3DFC03CBL,0x2D7102FEL,1L,0x8385A0BDL,0x8385A0BDL,1L,0x2D7102FEL,0x3DFC03CBL,0L,0x95997D8CL},{0L,0x81C0154FL,0x95997D8CL,0x2D7102FEL,0x8385A0BDL,0x3DFC03CBL,(-1L),(-1L),0x3DFC03CBL,0x8385A0BDL}};
        int32_t *****l_2740 = &g_1374;
        int i, j;
        for (i = 0; i < 5; i++)
            l_2716[i] = 1L;
        if ((~p_8))
        {
            for (g_194 = 0; (g_194 >= 26); ++g_194)
            {
                const uint64_t l_2696 = 18446744073709551609UL;
                (*g_1911) = l_2695;
                if (l_2696)
                    continue;
            }
        }
        else
        {
            int64_t l_2710 = 0x89C6E10101422AC4LL;
            int32_t l_2713[10][7] = {{(-6L),0xB30EEBB3L,(-7L),1L,7L,7L,1L},{0x7613CE8DL,0xC5F43943L,0x7613CE8DL,4L,0x17C7AC72L,1L,0x14332D79L},{0x4FB7C6D1L,(-1L),1L,0xB30EEBB3L,0xB090693EL,1L,(-6L)},{1L,(-1L),0L,0L,(-1L),1L,(-5L)},{0x93E02C5FL,1L,0xB090693EL,0xB466E9E9L,(-7L),7L,2L},{(-1L),1L,0x3D397A98L,0x14332D79L,1L,0x14332D79L,0x3D397A98L},{1L,1L,1L,3L,0xB466E9E9L,0x4FB7C6D1L,0x61D46F43L},{(-5L),(-1L),4L,(-3L),0x3D397A98L,0x17C7AC72L,0x17C7AC72L},{0xB466E9E9L,(-1L),(-1L),(-1L),0xB466E9E9L,1L,0x3C5D50CDL},{0xF94912F5L,0xC5F43943L,(-1L),(-1L),1L,(-2L),1L}};
            uint32_t *l_2760 = &g_904;
            int i, j;
            if (((void*)0 != (*g_1917)))
            {
                uint64_t *****l_2701[5] = {&g_2700,&g_2700,&g_2700,&g_2700,&g_2700};
                int32_t *****l_2707 = &l_2706;
                int32_t l_2711 = 0L;
                int64_t *l_2712 = &g_510[2][1];
                int32_t l_2715 = 0xAD06A776L;
                int64_t l_2739 = 0L;
                int8_t *****l_2755 = &g_1443;
                int i;
                l_2715 |= (g_636 != (p_8 , ((safe_rshift_func_uint8_t_u_s((g_2699 == l_2701[1]), 1)) != (safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((((((*l_2707) = l_2706) == l_2708) < (l_2713[8][4] = (g_925[0][4][0] != ((((l_2710 , ((((*l_2712) = (((l_2711 , p_9) <= 1UL) > 4294967295UL)) & l_2710) , 0xCBDBL)) > l_2710) ^ 0UL) , g_510[3][1])))) == l_2711) < p_8), g_2714)), 1L)))));
                if ((p_8 |= l_2716[4]))
                {
                    int32_t *l_2721 = (void*)0;
                    int32_t *l_2722 = &l_2343;
                    int32_t *l_2723 = &l_2343;
                    int32_t *l_2724 = &l_2662;
                    int32_t *l_2725 = &l_2711;
                    int32_t *l_2726 = &g_55;
                    int32_t *l_2727 = &l_2396;
                    int32_t *l_2728 = &l_2431;
                    int32_t *l_2729[10] = {(void*)0,&g_2714,(void*)0,&g_2714,(void*)0,&g_2714,(void*)0,&g_2714,(void*)0,&g_2714};
                    int i;
                    for (l_2573 = (-15); (l_2573 > 52); ++l_2573)
                    {
                        return p_8;
                    }
                    (*l_2695) = 0xFC861703L;
                    for (g_2503 = 28; (g_2503 != (-27)); --g_2503)
                    {
                        (*l_2695) |= 0xA6EA1674L;
                        if (p_8)
                            continue;
                    }
                    g_2731--;
                }
                else
                {
                    int32_t *l_2734[7][1][4] = {{{(void*)0,(void*)0,&g_2714,&l_2713[8][4]}},{{&l_2713[8][4],&g_2714,&g_2714,&g_2714}},{{(void*)0,(void*)0,&g_6,&g_2714}},{{(void*)0,&l_2713[8][4],&l_2713[8][4],(void*)0}},{{&l_2713[8][4],(void*)0,&g_162,&g_6}},{{&l_2713[8][4],&g_162,&l_2713[8][4],&g_2714}},{{(void*)0,&g_6,&g_2714,&g_2714}}};
                    int64_t *l_2741 = &g_636;
                    int64_t *l_2742 = &g_2568[5][1];
                    int64_t l_2756 = 0x35D724F210B20CA5LL;
                    int i, j, k;
                    l_2734[0][0][0] = &l_2730[5][0];
                    if ((safe_sub_func_int64_t_s_s(0L, (g_630[0][2][2] = ((p_10 < l_2715) >= ((l_2715 , (p_10 != ((*l_2742) = ((*l_2741) = ((*l_2712) |= ((((safe_add_func_int32_t_s_s((&g_427[0][1] == &g_427[6][0]), (-1L))) && (((p_9 | 0x3254985D18ACE803LL) < 249UL) > l_2739)) , l_2740) != &g_1374)))))) & 0UL))))))
                    {
                        int16_t ***l_2754 = &g_2752[0][3][2];
                        uint8_t *l_2757 = &l_2573;
                        int32_t l_2758 = (-1L);
                        p_8 = ((safe_add_func_uint16_t_u_u((&g_1916 != (void*)0), ((void*)0 == &g_2260[3][2][3]))) < p_9);
                        (**g_1910) = &l_2711;
                        (*l_2695) = (((+((*l_2757) &= (((1UL <= (((*l_2600) &= ((safe_mul_func_int16_t_s_s((p_8 || (l_2750 == ((*l_2754) = g_2752[0][3][2]))), (0xF48AL != (l_2755 == (void*)0)))) , (p_10 == 0x19A85849L))) <= 5UL)) & (-6L)) ^ l_2756))) ^ l_2758) > l_2758);
                    }
                    else
                    {
                        return l_2759;
                    }
                }
            }
            else
            {
                int8_t l_2761[8][10][2] = {{{0L,0xE1L},{0x18L,(-5L)},{0x01L,(-5L)},{0x18L,0xE1L},{0L,0x09L},{0x18L,2L},{0x01L,2L},{0x18L,0x09L},{0L,0xE1L},{0x18L,(-5L)}},{{0x01L,(-5L)},{0x18L,0xE1L},{0L,0x09L},{0x18L,2L},{0x01L,2L},{0x18L,0x09L},{0L,0xE1L},{0x18L,(-5L)},{0x01L,(-5L)},{0x18L,0xE1L}},{{0L,0x09L},{0x18L,2L},{0x01L,2L},{0x18L,0x09L},{0L,0xE1L},{0x18L,(-5L)},{0x01L,(-5L)},{0x18L,0xE1L},{0L,0x09L},{0x18L,2L}},{{0x01L,2L},{0x18L,0x09L},{0L,0xE1L},{0x18L,(-5L)},{0x01L,(-5L)},{0x18L,0xE1L},{0L,0x09L},{0x18L,2L},{0x01L,2L},{0x18L,0x09L}},{{0L,0xE1L},{0x18L,(-5L)},{0x01L,(-5L)},{0x18L,0xE1L},{0L,0x09L},{0x18L,2L},{0x01L,2L},{0x18L,0x09L},{0L,0xE1L},{0x18L,(-5L)}},{{0x01L,(-5L)},{0x18L,0xE1L},{0L,0x09L},{0x18L,2L},{0x01L,2L},{0x18L,0x09L},{0L,0xE1L},{0x18L,(-5L)},{0x01L,(-5L)},{0x18L,0xE1L}},{{0L,0x09L},{0x18L,2L},{0x01L,2L},{0x18L,0x09L},{0L,0xE1L},{0x18L,(-5L)},{0x01L,(-5L)},{0x18L,0xE1L},{0L,0x09L},{0x18L,2L}},{{0x01L,2L},{0x18L,0x09L},{0L,0xE1L},{0x18L,(-5L)},{0x01L,(-5L)},{0x18L,0xE1L},{0L,0x09L},{0x18L,2L},{0x01L,2L},{0x18L,0x09L}}};
                int i, j, k;
                l_2761[5][9][1] ^= ((void*)0 == l_2760);
                (**g_1910) = &p_8;
            }
        }
        return p_8;
    }
    else
    {
        int32_t *** const l_2782 = &g_398;
        int32_t l_2786 = 0x63DB1E01L;
        int16_t l_2787 = 0xED1DL;
        int32_t l_2789 = 0L;
        int32_t *l_2790 = (void*)0;
        int32_t *l_2791 = &g_2714;
        int32_t *l_2792 = &l_2396;
        int32_t l_2854 = 0L;
        int32_t **l_2867 = &g_399[0][0];
        uint32_t *l_2902 = &g_1393[1][2][6];
        uint64_t ** const *l_2932 = &l_2909;
        uint64_t ** const * const *l_2931 = &l_2932;
        const int64_t *l_2989 = &g_630[3][3][3];
        int8_t *l_3035 = &g_200[0][0];
        int32_t l_3051 = 0xC39AB70BL;
        int32_t l_3053[2];
        uint16_t l_3077 = 0x88B4L;
        int i;
        for (i = 0; i < 2; i++)
            l_3053[i] = 0xE5B18B30L;
        (*l_2792) &= (safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(p_9, 1)) == 0xAFB3L), ((safe_add_func_int32_t_s_s(((*l_2791) |= (safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s((safe_sub_func_int8_t_s_s(1L, (0xEF914834L >= (safe_add_func_int16_t_s_s(((p_10 , l_2782) != ((safe_add_func_int8_t_s_s((((+(l_2786 , (p_8 , p_9))) | l_2787) ^ (*g_2307)), p_10)) , l_2782)), l_2788))))), l_2789)), (*l_2600))), p_10)), l_2787))), 4294967295UL)) , p_10))), 0xD88154DAL));
        (*l_2792) = 2L;
        if (p_8)
        {
            uint32_t l_2813 = 7UL;
            const int32_t * const l_2814[10][10] = {{&g_6,&g_129,&g_6,&g_2714,&g_162,&g_129,&g_162,&g_2714,&g_6,&g_129},{&l_2662,&g_2714,&l_2786,&g_2714,&l_2662,&g_2714,&l_2786,&g_2714,&l_2662,&g_2714},{&g_162,&g_2714,&g_6,(void*)0,&g_6,&g_2714,&g_162,(void*)0,&g_162,&g_2714},{&l_2662,(void*)0,&g_129,(void*)0,&l_2662,&g_129,&g_129,&g_129,&l_2662,(void*)0},{&g_6,(void*)0,&g_6,&g_2714,&g_162,(void*)0,&g_162,&g_2714,&g_6,(void*)0},{&l_2662,&g_2714,&l_2786,&g_2714,&l_2662,&g_2714,&l_2786,&g_2714,&l_2662,&g_2714},{&g_162,&g_2714,&g_6,&g_129,&g_6,&g_2714,&g_162,&g_129,&g_162,&g_2714},{&l_2662,&g_129,&g_129,&g_129,&l_2662,(void*)0,&g_129,(void*)0,&l_2662,&g_129},{&g_6,&g_129,&g_6,&g_2714,&g_162,&g_129,&g_162,&g_2714,&g_6,&g_129},{&l_2662,&g_2714,&l_2786,&g_2714,&l_2662,&g_2714,&l_2786,&g_2714,&l_2662,&g_2714}};
            int32_t l_2837 = (-1L);
            uint32_t ****l_2879 = (void*)0;
            int32_t l_2971[9][2] = {{0xA4D3C1C5L,1L},{0xE10F19C1L,1L},{0xA4D3C1C5L,1L},{0xE10F19C1L,1L},{0xA4D3C1C5L,1L},{0xE10F19C1L,1L},{0xA4D3C1C5L,1L},{0xE10F19C1L,1L},{0xA4D3C1C5L,1L}};
            uint16_t *l_2985 = &l_2788;
            uint16_t **l_2984 = &l_2985;
            uint32_t l_2997[1][10][10] = {{{0x282727D0L,0xF9142044L,0x960AC4F4L,0x58C335B8L,18446744073709551615UL,5UL,0x6DD4D771L,0x960AC4F4L,0x6DD4D771L,5UL},{18446744073709551615UL,0xDD58840AL,18446744073709551608UL,0xDD58840AL,18446744073709551615UL,0xB56A012EL,0x0E4F6F1DL,18446744073709551608UL,0x58C335B8L,5UL},{0xA81CA250L,0x6DD4D771L,6UL,0x0E4F6F1DL,18446744073709551615UL,0x282727D0L,0x58C335B8L,6UL,0xDD58840AL,5UL},{5UL,0x0E4F6F1DL,0xA9DFBED3L,0xF9142044L,18446744073709551615UL,18446744073709551615UL,0xF9142044L,0xA9DFBED3L,0x0E4F6F1DL,5UL},{0xB56A012EL,0x58C335B8L,0x19DD0C40L,0x6DD4D771L,18446744073709551615UL,0xA81CA250L,0xDD58840AL,0x19DD0C40L,0xF9142044L,5UL},{0x282727D0L,0xF9142044L,0x960AC4F4L,0x58C335B8L,18446744073709551615UL,5UL,0x6DD4D771L,0x960AC4F4L,0x6DD4D771L,5UL},{18446744073709551615UL,0xDD58840AL,18446744073709551608UL,0xDD58840AL,18446744073709551615UL,0xB56A012EL,0x0E4F6F1DL,18446744073709551608UL,0x58C335B8L,5UL},{0xA81CA250L,0x6DD4D771L,6UL,0x0E4F6F1DL,18446744073709551615UL,0x282727D0L,0x58C335B8L,6UL,0xDD58840AL,5UL},{5UL,0x0E4F6F1DL,0xA9DFBED3L,0xF9142044L,18446744073709551615UL,18446744073709551615UL,0xF9142044L,18446744073709551611UL,0x827B307CL,0xDD58840AL},{0x58C335B8L,0x198290BDL,0x0B196B7CL,0x49398016L,0xF9142044L,0x0E4F6F1DL,0UL,0x0B196B7CL,0x0E8840BEL,0xDD58840AL}}};
            int i, j, k;
lbl_3028:
            if ((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(((*g_2753) = (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(65535UL, 7)), ((!(((safe_lshift_func_int8_t_s_s((&l_2751[1] == &g_2753), (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((*g_62), (((safe_lshift_func_uint16_t_u_s((*l_2792), (safe_add_func_int64_t_s_s((((void*)0 != (*g_1279)) != ((safe_sub_func_int16_t_s_s((*l_2791), (((((*l_2600) ^ (*l_2600)) , (*l_2792)) <= l_2813) , (*l_2600)))) ^ p_10)), p_8)))) , p_8) > 4294967295UL))), p_9)))) , 0x623358249CC8F519LL) <= g_6)) | 0x62C28D2AFAB63282LL)))))), 0L)))
            {
                const int32_t **l_2815[2][2];
                const int32_t **l_2816 = &g_1912;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_2815[i][j] = &g_2307;
                }
                (*l_2816) = l_2814[0][3];
                (*l_2792) = (safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(((*g_2753) != ((p_8 > p_8) > ((safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((0x99D5L & ((safe_add_func_int32_t_s_s((!((safe_mul_func_uint16_t_u_u(p_8, (safe_div_func_int16_t_s_s((l_2837 = (safe_rshift_func_uint16_t_u_u((((!((0x977C1A6DL & p_10) , ((((*l_2600) ^= (1UL == g_925[3][7][0])) >= 0x0DL) & 0x59L))) != p_9) & 0xC7L), 10))), 65535UL)))) >= (*l_2792))), 0x4FD28F2BL)) < p_10)), 0)), (-5L))) & 0UL))), p_9)), p_9)) != 0xF3L), p_9));
            }
            else
            {
                int64_t l_2845 = 0x7DC4AF2365135BD2LL;
                uint8_t *l_2853 = (void*)0;
                uint16_t *l_2855 = &g_29;
                uint64_t l_2856 = 0xCF5ADF26314EC4F3LL;
                uint64_t *l_2870 = &g_1373;
                int32_t *l_2876[10][5][5] = {{{&l_2431,&l_2789,&l_2396,&g_55,&g_2714},{&g_6,(void*)0,&g_55,&l_2431,&g_55},{(void*)0,&g_55,(void*)0,&l_2662,&l_2854},{&g_55,&l_2431,&g_2714,&g_129,(void*)0},{&l_2431,&g_6,&g_2714,&g_55,&l_2854}},{{&g_2714,&l_2431,&l_2431,&g_2714,&l_2396},{(void*)0,&g_55,&g_129,&l_2396,(void*)0},{&g_2714,(void*)0,&g_131,&g_6,&l_2431},{&g_55,&l_2789,&l_2854,&l_2396,(void*)0},{(void*)0,&l_2431,&l_2343,&g_2714,&l_2789}},{{&g_131,&l_2854,(void*)0,&g_55,&g_129},{&l_2431,(void*)0,&g_6,&g_129,&g_129},{&g_131,&l_2786,&g_131,&l_2662,&l_2837},{(void*)0,&l_2343,&g_6,&l_2431,&l_2396},{&g_55,&g_55,(void*)0,&g_55,&g_131}},{{&g_2714,&l_2396,&g_6,&l_2396,&g_2714},{(void*)0,&g_2714,&g_131,&l_2854,(void*)0},{&g_2714,&l_2789,&g_6,&g_55,&g_131},{&l_2431,&g_129,(void*)0,&g_2714,(void*)0},{&g_55,&g_55,&l_2343,&g_6,&g_2714}},{{(void*)0,&g_55,&l_2854,&g_6,&g_131},{&g_6,&l_2786,&g_131,(void*)0,&l_2396},{&l_2431,&g_55,&g_129,(void*)0,&l_2837},{&l_2789,&g_55,&l_2431,&g_2714,&g_129},{&l_2854,&g_129,&g_2714,&l_2662,&g_129}},{{&l_2786,&l_2789,&g_2714,&g_2714,&l_2789},{&g_131,&g_2714,(void*)0,(void*)0,(void*)0},{(void*)0,&l_2396,&g_55,(void*)0,&l_2431},{&l_2343,&g_55,&l_2396,&g_6,(void*)0},{(void*)0,&l_2343,(void*)0,&g_6,&l_2396}},{{&g_131,&l_2786,&l_2431,&g_2714,&l_2854},{&l_2786,(void*)0,&g_129,&g_55,(void*)0},{&l_2854,&l_2854,&l_2431,&l_2854,&l_2854},{&l_2789,&l_2431,(void*)0,&l_2396,&g_55},{&l_2431,&l_2789,&l_2396,&g_55,&g_2714}},{{&g_6,(void*)0,&g_55,&g_2714,&g_6},{&l_2431,&l_2662,&g_55,&l_2789,&g_131},{&g_6,&g_131,(void*)0,&g_2714,&g_6},{&l_2343,&l_2854,(void*)0,&g_6,(void*)0},{(void*)0,&g_131,&g_131,(void*)0,&l_2343}},{{&g_129,&l_2662,&g_2714,&g_129,&l_2854},{(void*)0,&l_2396,&g_129,&l_2431,&g_131},{&l_2854,&g_55,&g_131,&g_129,&g_129},{&g_6,&g_2714,(void*)0,(void*)0,&l_2431},{&l_2837,&g_55,&l_2431,&g_6,&g_2714}},{{&g_2714,&l_2786,&l_2789,&g_2714,&g_2714},{&l_2837,&g_55,&l_2837,&l_2789,(void*)0},{&g_6,(void*)0,&l_2431,&g_2714,&g_55},{&l_2854,&g_6,&l_2854,&l_2662,&l_2396},{(void*)0,&g_55,&l_2431,&g_55,(void*)0}}};
                int i, j, k;
                l_2837 = (((safe_div_func_int8_t_s_s(1L, 0xD1L)) || ((*l_2855) ^= (safe_unary_minus_func_int64_t_s((((safe_mod_func_int32_t_s_s(p_9, ((safe_sub_func_int8_t_s_s(p_8, l_2845)) | (safe_mod_func_int64_t_s_s(((safe_mod_func_uint16_t_u_u((*g_62), (((safe_add_func_uint32_t_u_u((~(*l_2791)), (l_2853 != (void*)0))) , 1UL) , p_9))) == p_8), (*l_2791)))))) & l_2854) == (*g_2753)))))) <= l_2856);
                for (g_21 = 0; g_21 < 9; g_21 += 1)
                {
                    for (g_29 = 0; g_29 < 5; g_29 += 1)
                    {
                        for (g_2093 = 0; g_2093 < 4; g_2093 += 1)
                        {
                            g_453[g_21][g_29][g_2093] = 3UL;
                        }
                    }
                }
                l_2431 &= (l_2786 |= (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((((safe_add_func_uint64_t_u_u(p_9, ((safe_rshift_func_uint8_t_u_s(p_10, ((*l_2600) |= ((void*)0 == l_2867)))) , ((safe_mod_func_uint16_t_u_u(((((++(*l_2870)) && (g_195 && (p_8 != (safe_add_func_int32_t_s_s(p_10, (~(0L <= 5L))))))) == p_9) && 6UL), p_8)) | p_10)))) >= (*l_2792)) || 0xBDL), 18446744073709551615UL)) , (*l_2791)), 0x61L)), g_845)));
                (*l_2791) ^= (((((void*)0 != &l_2787) ^ 5L) | 0x4AL) == (-1L));
            }
            l_2877 |= (*l_2600);
            if ((g_2878 != (l_2880[2][7][1] = l_2879)))
            {
                uint32_t l_2881 = 4UL;
                return l_2881;
            }
            else
            {
                int64_t l_2886 = 1L;
                uint32_t **l_2901[6] = {&g_2261,&g_2261,&g_2261,&g_2261,&g_2261,&g_2261};
                uint64_t *l_2904[5];
                int32_t l_2905 = 0xEF8AAD1DL;
                uint32_t *l_2910[2];
                uint64_t ***l_2921 = &l_2909;
                uint64_t ****l_2922 = &g_2163;
                uint64_t ****l_2923 = &g_2163;
                uint64_t ****l_2924 = &l_2921;
                int32_t l_2933[1];
                int i;
                for (i = 0; i < 5; i++)
                    l_2904[i] = &g_67;
                for (i = 0; i < 2; i++)
                    l_2910[i] = &g_1164;
                for (i = 0; i < 1; i++)
                    l_2933[i] = 0xE16D5670L;
                (*l_2600) &= ((safe_sub_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(l_2886, ((((p_9 , l_2887) == (void*)0) != (g_1164 &= (safe_mul_func_int8_t_s_s(((((((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((l_2905 = (((((*l_2792) = ((safe_sub_func_int32_t_s_s((((*l_2530) = l_2901[4]) != (((l_2902 = &g_904) != l_2791) , l_2901[4])), (g_2903[7] == (*l_2708)))) <= p_8)) && l_2886) , &g_2753) != &g_2753)) > 0x3F85304248741771LL) < 0L), 0xB116L)), (*g_2753))), (-10L))) , (void*)0) == g_2906[1][4][3]) , &l_2904[2]) != l_2909) || (*g_2753)), l_2886)))) | 0x05E5L))) > l_2886), l_2886)) , 0xE3A9B163L);
                l_2933[0] |= ((((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(0xB3L, 5)) , (((((*g_2149) , ((safe_lshift_func_int16_t_s_u(8L, 3)) != ((p_10 != ((*g_2753) = (((p_9 != (p_10 , (safe_mod_func_uint16_t_u_u(((((*l_2924) = l_2921) == (((((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u((((void*)0 == l_2931) < 0x62L), g_200[0][1])), 13)), 0x64D375F3L)) >= (*l_2600)) >= p_10) < p_8) , (void*)0)) , 65535UL), 0xF300L)))) ^ 0x5EL) > p_9))) , p_9))) ^ p_8) != 4L) ^ p_10)), 0x9EL)) != l_2905) == (*l_2600)) , (*l_2791));
                for (l_2396 = 0; (l_2396 <= (-2)); l_2396 = safe_sub_func_int8_t_s_s(l_2396, 4))
                {
                    int8_t l_2947 = 0x05L;
                    int32_t l_2964 = 6L;
                    int32_t l_2972 = 0xAD82B782L;
                    int32_t l_2973 = 1L;
                    int8_t **l_2996[3];
                    uint16_t ****l_3003 = &l_3002;
                    uint16_t ***l_3005[3][10][4] = {{{&l_2984,&l_2984,&l_2984,&l_2984},{&l_2984,&l_2984,&g_153,(void*)0},{(void*)0,&l_2984,&l_2984,&g_153},{&l_2984,&l_2984,&l_2984,(void*)0},{&l_2984,&l_2984,&l_2984,&l_2984},{&g_153,&l_2984,&l_2984,&l_2984},{&l_2984,&g_153,(void*)0,(void*)0},{&l_2984,(void*)0,&l_2984,&l_2984},{&l_2984,&l_2984,(void*)0,&l_2984},{&l_2984,&l_2984,&l_2984,&l_2984}},{{&g_153,(void*)0,&l_2984,&g_153},{&l_2984,&l_2984,&l_2984,&g_153},{&l_2984,(void*)0,&l_2984,&g_153},{(void*)0,&l_2984,&g_153,&g_153},{&l_2984,(void*)0,&l_2984,&l_2984},{&l_2984,&l_2984,&l_2984,&l_2984},{&g_153,&l_2984,&g_153,&l_2984},{&l_2984,(void*)0,&g_153,(void*)0},{&g_153,&g_153,&l_2984,&l_2984},{&l_2984,&l_2984,&l_2984,&l_2984}},{{&l_2984,&l_2984,&g_153,(void*)0},{(void*)0,&l_2984,&l_2984,&g_153},{&l_2984,&l_2984,&l_2984,(void*)0},{&l_2984,&l_2984,&l_2984,&l_2984},{&g_153,&l_2984,&l_2984,&l_2984},{&l_2984,&g_153,(void*)0,(void*)0},{&l_2984,(void*)0,&l_2984,&l_2984},{&l_2984,&l_2984,(void*)0,&l_2984},{&l_2984,&l_2984,&l_2984,&l_2984},{&l_2984,(void*)0,&l_2984,&l_2984}}};
                    uint16_t ****l_3004 = &l_3005[1][1][1];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_2996[i] = &g_1011;
                    if ((0xB8EF551EL > (((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(p_10, 6)), ((((safe_mul_func_int8_t_s_s(0x36L, (((safe_mod_func_int16_t_s_s(p_8, ((((*l_2791) = ((p_10 || ((+((*l_2600) , p_10)) , 6UL)) > (((p_9 >= 0L) | p_9) , 0x325C4572L))) || 0xB0B18254L) , (*l_2600)))) < p_9) < p_10))) , p_8) > l_2947) , 0UL))) < 2UL) <= p_9)))
                    {
                        int32_t *l_2949 = &l_2786;
                        int32_t *l_2950 = &g_129;
                        int32_t *l_2951 = &l_2933[0];
                        int32_t *l_2952 = &l_2431;
                        int32_t *l_2953 = &g_131;
                        int32_t *l_2954 = &g_131;
                        int32_t *l_2955 = (void*)0;
                        int32_t *l_2956 = &g_55;
                        int32_t *l_2957 = &l_2905;
                        int32_t *l_2958 = &l_2662;
                        int32_t *l_2959 = &l_2343;
                        int32_t *l_2960 = &l_2837;
                        int32_t *l_2961 = &g_131;
                        int32_t *l_2962 = (void*)0;
                        int32_t *l_2963 = &l_2933[0];
                        int32_t *l_2965 = &l_2854;
                        int32_t *l_2966 = &l_2662;
                        int32_t *l_2967 = &l_2933[0];
                        int32_t *l_2968 = (void*)0;
                        int32_t *l_2969 = &g_162;
                        int32_t *l_2970[6][3][9] = {{{&g_162,&l_2789,&l_2396,(void*)0,&g_131,&l_2662,&g_6,&l_2343,&g_131},{&l_2933[0],&l_2854,&l_2905,&l_2789,(void*)0,&g_131,&l_2905,&l_2662,&g_129},{(void*)0,&l_2837,&g_55,&l_2933[0],(void*)0,&l_2933[0],&g_55,&l_2837,(void*)0}},{{&l_2933[0],&g_131,(void*)0,(void*)0,&g_6,&l_2905,&l_2905,&l_2905,&l_2786},{&l_2854,(void*)0,&l_2662,&g_55,&g_131,(void*)0,&g_6,&l_2837,(void*)0},{&l_2933[0],&g_6,&l_2905,&l_2854,&g_2714,&l_2786,&l_2837,&l_2933[0],&g_55}},{{(void*)0,&l_2662,&g_162,&l_2789,&l_2786,&l_2431,(void*)0,&l_2933[0],&l_2662},{&l_2933[0],(void*)0,&l_2933[0],&l_2854,&l_2933[0],&l_2789,&l_2343,&l_2933[0],&l_2905},{&g_162,&g_131,(void*)0,&g_6,&l_2933[0],&l_2837,&l_2343,&g_6,&l_2905}},{{&l_2786,&g_55,&g_2714,&l_2905,&l_2786,&g_162,&g_55,&l_2854,&l_2905},{&l_2786,&l_2396,&l_2964,&g_2714,&g_2714,&l_2964,&l_2396,&l_2786,&l_2662},{&l_2396,&l_2905,(void*)0,&l_2905,&g_131,&l_2933[0],&g_162,&l_2662,(void*)0}},{{&l_2662,&l_2837,&l_2854,&g_131,&g_6,&l_2933[0],&l_2933[0],(void*)0,&l_2662},{&l_2905,&l_2854,&l_2854,&l_2837,(void*)0,(void*)0,(void*)0,&g_2714,&l_2905},{&l_2789,(void*)0,&g_55,&l_2964,(void*)0,&g_6,&l_2854,&l_2789,&l_2905}},{{&l_2343,&l_2933[0],&l_2662,&l_2343,&g_131,&g_55,(void*)0,&g_162,&l_2905},{&g_6,&l_2933[0],&l_2343,&l_2343,(void*)0,(void*)0,&g_129,(void*)0,&l_2662},{(void*)0,&l_2905,&l_2786,&l_2964,(void*)0,&g_6,&g_6,&g_55,&g_55}}};
                        int i, j, k;
                        ++l_2974[2];
                    }
                    else
                    {
                        uint16_t *l_2983[2][10] = {{&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63},{&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63}};
                        uint16_t **l_2982 = &l_2983[1][3];
                        uint16_t ***l_2986 = &g_153;
                        int i, j;
                        if (g_1051)
                            goto lbl_2977;
                        p_8 &= (((safe_mod_func_int8_t_s_s((p_10 ^ (((safe_mul_func_int16_t_s_s(((l_2905 &= l_2947) | (l_2982 == ((*l_2986) = (l_2984 = (void*)0)))), (*l_2791))) , (safe_add_func_int32_t_s_s(((void*)0 == l_2989), (0x62D54EBDL && (p_10 < g_736))))) , (*l_2791))), 9UL)) || 0xFF84680EL) , l_2905);
                        if (l_2933[0])
                            continue;
                    }
                    if (p_10)
                        break;
                    for (l_2343 = 0; (l_2343 > 11); l_2343 = safe_add_func_int16_t_s_s(l_2343, 3))
                    {
                        p_8 |= (safe_sub_func_uint32_t_u_u(p_9, ((*l_2791) &= g_749[4][1])));
                    }
                    (*l_2600) = (((safe_sub_func_int16_t_s_s((-1L), (l_2996[0] == (void*)0))) && l_2997[0][7][5]) , (l_2933[0] < (((g_1018 | ((safe_div_func_int8_t_s_s(((*l_2791) = ((safe_add_func_int64_t_s_s((((((*l_3004) = ((*l_3003) = ((*g_2907) = l_3002))) == l_3006) ^ ((((++g_1021) < (0L | 0UL)) , p_10) , l_2905)) <= g_1588), p_10)) | 4294967286UL)), (*l_2792))) || p_8)) , l_2947) & p_9)));
                }
                for (g_194 = (-22); (g_194 > 17); ++g_194)
                {
                    if ((!((l_2971[2][1] = ((p_10 ^= p_9) , (safe_add_func_uint32_t_u_u((((safe_div_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(p_9)), (((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((((+(((*l_2600) < ((&l_2751[0] != (void*)0) | p_9)) == (p_10 || (safe_div_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s(((*l_2792) = (safe_add_func_int32_t_s_s(0L, 0x6F2017E7L))), l_2933[0])) != p_10), 18446744073709551615UL))))) , 4294967292UL) <= 9L), p_8)), l_2886)) | 0x368CL) & 8UL))) == p_10) , 0x5B390A83L), 0UL)))) | p_9)))
                    {
                        l_2933[0] |= p_9;
                        if (l_2886)
                            goto lbl_3028;
                    }
                    else
                    {
                        int16_t l_3029 = 0xC949L;
                        l_3029 |= p_8;
                    }
                }
            }
        }
        else
        {
            int8_t *l_3034 = &g_2093;
            int32_t l_3036 = 0xA9A06C60L;
            const int32_t *l_3043 = &l_2854;
            uint32_t * const *l_3044 = &g_2261;
            int32_t l_3045 = 2L;
            int32_t l_3048 = 1L;
            int32_t l_3049 = 0x34DE524EL;
            int32_t l_3050[8] = {0xFE931F38L,0xFE931F38L,(-6L),(-6L),0xFE931F38L,(-6L),(-6L),0xFE931F38L};
            int64_t l_3079 = 1L;
            int i;
            (*l_2600) = 0L;
            if ((safe_rshift_func_int8_t_s_u(((*l_3035) &= (safe_add_func_uint16_t_u_u(((*g_62) &= (l_3034 == (void*)0)), (l_3035 != l_3035)))), (l_3036 < (p_10 , ((safe_unary_minus_func_uint64_t_u(p_9)) ^ (safe_mod_func_int64_t_s_s((((l_3045 = (+((safe_lshift_func_int16_t_s_u((((((((&l_2786 != l_3043) & (*l_3043)) , &l_2902) != l_3044) | 255UL) > (*l_2792)) < p_10), 0)) || (-1L)))) >= p_10) >= 0x21E766C914D9A455LL), p_9))))))))
            {
                int32_t *l_3046 = (void*)0;
                int32_t *l_3047[8] = {&l_2431,&l_2431,&l_2431,&l_2431,&l_2431,&l_2431,&l_2431,&l_2431};
                int32_t l_3052 = 0xCBA548BEL;
                int i;
                --g_3056;
                (*g_1280) = (void*)0;
                p_8 = (*l_3043);
            }
            else
            {
                int8_t *l_3067[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int8_t **l_3068 = &l_3035;
                uint32_t *l_3075 = &g_1164;
                uint16_t *l_3076[2][4][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2207,&g_2207,&g_2207,&g_2207,&g_2207,&g_2207,&g_2207,&g_2207,&g_2207},{&g_29,(void*)0,&g_29,(void*)0,&g_29,(void*)0,&g_29,(void*)0,&g_29},{&g_2207,&g_2207,&g_2207,&g_2207,&g_2207,&g_2207,&g_2207,&g_2207,&g_2207}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2207,&g_2207,&g_2207,&g_2207,&g_2207,&g_2207,&g_2207,&g_2207,&g_2207},{&g_29,(void*)0,&g_29,(void*)0,&g_29,(void*)0,&g_29,(void*)0,&g_29},{&g_2207,&g_2207,&g_2207,&g_2207,&g_2207,&g_2207,&g_2207,&g_2207,&g_2207}}};
                int32_t l_3078 = 0xBA1FDFBBL;
                int64_t *l_3080 = &g_630[4][0][5];
                int i, j, k;
                (*l_2792) &= ((*l_2791) |= ((((*l_3080) = (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((l_3078 = (((*g_62) && (safe_mul_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(p_9, (*l_2600))) , (((l_3034 = l_3034) != ((*l_3068) = l_3067[0])) , p_8)), ((p_10 = (safe_unary_minus_func_uint64_t_u((((*g_62) = (((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((((*g_2164) = (*l_2909)) != l_3074), ((*l_3075) = (g_156 & 1L)))) | p_8), p_8)) != p_8) , p_9)) ^ (*g_2753))))) < l_3077)))) & 4L)), l_3079)) | 0x15F17E8E874EDBECLL), 11))) <= g_158) , 0x9CBE27C5L));
            }
            l_3049 ^= (l_2792 == ((safe_div_func_int32_t_s_s((((**g_1145) , 0x26L) && ((*l_3043) <= (((p_9 == (p_8 != 0x8AL)) < (safe_mul_func_int16_t_s_s((*g_2753), (1L || p_10)))) , p_9))), (*l_2600))) , l_2791));
            (*g_1911) = (void*)0;
        }
        for (g_2714 = 0; (g_2714 < (-11)); g_2714 = safe_sub_func_int64_t_s_s(g_2714, 1))
        {
            uint16_t *l_3113 = (void*)0;
            uint16_t **l_3112 = &l_3113;
            uint32_t *l_3114 = &g_1164;
            int32_t l_3116 = 1L;
            uint32_t *l_3117 = (void*)0;
            uint32_t *l_3118 = &g_1349;
            int32_t l_3119 = 0xD6740D44L;
            int32_t l_3121[7] = {0L,0L,(-10L),0L,0L,(-10L),0L};
            int i;
            l_3121[4] &= (safe_rshift_func_int8_t_s_s(0x2FL, (((safe_sub_func_uint64_t_u_u(p_9, ((safe_div_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((g_131 & (safe_rshift_func_int8_t_s_u(((~((*l_3118) |= ((~(((l_3116 = (((safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(0x91L, (safe_add_func_int16_t_s_s(((*g_2753) &= ((((safe_sub_func_int64_t_s_s(1L, (*l_2792))) | ((*g_62) ^= ((l_3111[2][0][3] || ((((*l_3114) = (((l_3112 != (void*)0) <= 0xD8L) != (-1L))) , p_8) >= (*l_2600))) , 0x1152L))) && l_3115[6]) < (*l_2600))), 0x401DL)))), 0x58L)), p_10)) < p_8) > 0xC8B6D735B66093C8LL)) ^ (*l_2792)) , 0xB4L)) , g_1021))) | p_10), l_3119))), l_3120)) == (-1L)), 65532UL)) ^ p_10))) > p_8) || p_9)));
            (*l_2600) &= l_3116;
        }
    }
    for (g_2714 = 0; (g_2714 < (-5)); g_2714 = safe_sub_func_int32_t_s_s(g_2714, 1))
    {
        uint32_t l_3124 = 0x9018820CL;
        const uint32_t **l_3135 = &g_2149;
        int32_t *l_3147 = &l_3115[6];
        int32_t *l_3148 = &l_2662;
        int32_t *l_3149 = &l_2431;
        int32_t *l_3150 = &l_3054[3];
        int32_t *l_3151[2][8][5] = {{{&g_55,&g_131,&l_2662,&l_2662,&g_131},{&g_55,(void*)0,&g_129,&l_3054[1],&g_162},{&g_55,&l_2431,&l_3054[3],&l_3115[6],&l_2343},{&g_55,&l_2343,&l_3115[6],&l_3054[3],&l_2431},{&g_55,&g_162,&l_3054[1],&g_129,(void*)0},{&g_55,&g_131,&l_2662,&l_2662,&g_131},{&g_55,(void*)0,&g_129,&l_3054[1],&g_162},{&g_55,&l_2431,&l_3054[3],&l_3115[6],&l_2343}},{{&g_55,&l_2343,&l_3115[6],&l_3054[3],&l_2431},{&g_55,&g_162,&l_3054[1],&g_129,(void*)0},{&g_55,&g_131,&l_2662,&l_2662,&g_131},{&g_55,(void*)0,&g_129,&l_3054[1],&g_162},{&g_55,&l_2431,&l_3054[3],&l_3115[6],&l_2343},{&g_55,&l_2343,&l_3115[6],&l_3054[3],&l_2431},{&g_55,&g_162,&l_3054[1],&g_129,(void*)0},{&g_55,&g_131,&l_2662,&l_2662,&g_131}}};
        int i, j, k;
        l_3124 = p_8;
        (*l_3147) &= (safe_add_func_int64_t_s_s(g_925[0][4][0], (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(p_8, (safe_div_func_int16_t_s_s(((l_3135 == ((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u((g_1021 ^= (safe_sub_func_uint8_t_u_u(((((*l_2600) , 4294967291UL) <= 0UL) , (p_8 == (0x2AD7A806L || ((*l_2600) ^= (l_3124 || p_8))))), p_9))), 0x976E8118L)), p_10)))), p_9)), 0)) , l_3135)) | 0xDFL), p_8)))), p_9)) , l_3124), p_9))));
        --l_3152;
    }
    for (g_44 = 23; (g_44 <= 47); g_44 = safe_add_func_int8_t_s_s(g_44, 4))
    {
        uint64_t l_3157 = 0x3497F898EC0AC84DLL;
        int32_t l_3162 = 0L;
        int32_t l_3163 = (-8L);
        int32_t l_3164 = 6L;
        const uint32_t **l_3191 = &g_2149;
        uint32_t *l_3215 = &g_1021;
        uint64_t *** const *l_3222 = &g_2163;
        int32_t l_3258 = 0x45E08CA0L;
        if (l_3157)
            break;
        if (l_3157)
            break;
        for (g_159 = 0; (g_159 > 3); ++g_159)
        {
            uint64_t *** const l_3175 = &l_2909;
            uint32_t l_3176 = 4294967295UL;
            uint32_t l_3177 = 18446744073709551612UL;
            uint64_t ****l_3220[5];
            int64_t l_3240 = 0x22A9F228991CF4FBLL;
            int16_t l_3241 = 0x902FL;
            int32_t l_3252 = (-8L);
            int32_t l_3254 = 7L;
            int32_t l_3255 = (-6L);
            int32_t l_3256 = 0xA425C432L;
            int32_t l_3261[6] = {(-1L),(-1L),0x3E73342EL,(-1L),(-1L),0x3E73342EL};
            int i;
            for (i = 0; i < 5; i++)
                l_3220[i] = &g_325;
            if (((safe_lshift_func_int8_t_s_u((0xC0L > ((l_3164 ^= (l_3163 |= l_3162)) , (safe_lshift_func_int8_t_s_u(((safe_div_func_int8_t_s_s((l_3163 = ((l_3164 |= (safe_mod_func_int8_t_s_s((p_8 , (1UL > ((safe_sub_func_int16_t_s_s(p_8, (p_9 ^ g_1588))) <= ((void*)0 != l_3175)))), (*l_2600)))) <= 65529UL)), l_3176)) & 0x97L), p_9)))), l_3177)) ^ p_10))
            {
                return p_10;
            }
            else
            {
                const int32_t l_3182 = 0x3D6D11AEL;
                uint32_t **l_3192 = &g_2261;
                int32_t l_3250[8][10][3] = {{{0x42A43B3AL,0x6E2457EEL,(-4L)},{0xC9860340L,0xC06D35C3L,(-8L)},{0x4AFAEBE1L,(-4L),0x37036A8EL},{6L,0x4AFAEBE1L,0x77B72420L},{0L,0xF084D431L,0x46343130L},{0x46E4EF30L,0x17D49777L,0x6CCB2F24L},{(-4L),(-1L),(-10L)},{0L,1L,(-1L)},{1L,0x46343130L,(-4L)},{0x72911E49L,0xD9FC24BFL,0x03750DD9L}},{{0x77B72420L,0xDC6FF360L,0x03750DD9L},{0x299B32FEL,0xB63785CDL,(-4L)},{0x51AAD5C3L,0x9E75C9A8L,(-1L)},{0x17D49777L,(-8L),(-10L)},{0x2261AF14L,0x42A43B3AL,0x6CCB2F24L},{0x46343130L,2L,0x46343130L},{5L,0L,0x77B72420L},{2L,0x299B32FEL,0x37036A8EL},{(-1L),6L,(-8L)},{(-3L),0L,(-6L)}},{{(-1L),(-4L),0x7AD43687L},{2L,0x51AAD5C3L,(-8L)},{5L,0x46E4EF30L,0x17D49777L},{0x46343130L,(-1L),5L},{0x2261AF14L,1L,0x46E4EF30L},{0x17D49777L,0L,0xB63785CDL},{0x51AAD5C3L,5L,0xC9860340L},{0x299B32FEL,0xC06D35C3L,(-1L)},{0x77B72420L,0xC06D35C3L,(-4L)},{0x72911E49L,5L,0xDC6FF360L}},{{1L,0L,0x9E75C9A8L},{0L,1L,0x4AFAEBE1L},{(-4L),(-1L),1L},{0x46E4EF30L,0x46E4EF30L,0x6E2457EEL},{0L,0x51AAD5C3L,1L},{6L,(-4L),(-3L)},{0x4AFAEBE1L,0L,(-1L)},{0x6CCB2F24L,6L,(-3L)},{0x7AD43687L,0x299B32FEL,1L},{0xF084D431L,0L,0x6E2457EEL}},{{0xD911F4DFL,2L,1L},{0xC06D35C3L,0x42A43B3AL,0x4AFAEBE1L},{(-1L),(-8L),0x9E75C9A8L},{0xC9860340L,0x9E75C9A8L,0xDC6FF360L},{0x37036A8EL,0xB63785CDL,(-4L)},{0xD5F2C513L,0xDC6FF360L,(-1L)},{0xD5F2C513L,0xD9FC24BFL,0xC9860340L},{0x37036A8EL,0x46343130L,0xB63785CDL},{0xC9860340L,1L,0x46E4EF30L},{(-1L),(-1L),5L}},{{0xC06D35C3L,0x17D49777L,0x17D49777L},{0xD911F4DFL,0xF084D431L,(-8L)},{0xF084D431L,0x4AFAEBE1L,0x7AD43687L},{0x7AD43687L,(-4L),(-6L)},{0x6CCB2F24L,0x8566BD91L,(-8L)},{0x4AFAEBE1L,(-4L),0x37036A8EL},{6L,0x4AFAEBE1L,0x77B72420L},{0L,0xF084D431L,0x46343130L},{0x46E4EF30L,0x17D49777L,0x6CCB2F24L},{(-4L),(-1L),(-10L)}},{{0L,1L,(-1L)},{1L,0x46343130L,(-4L)},{0x72911E49L,0xD9FC24BFL,0x03750DD9L},{0x77B72420L,0xDC6FF360L,0x03750DD9L},{0x299B32FEL,0xB63785CDL,(-4L)},{5L,0xDC6FF360L,(-8L)},{0x51AAD5C3L,0x4A691A6BL,0x299B32FEL},{0L,0x7AD43687L,1L},{0xF084D431L,0xD911F4DFL,0xF084D431L},{(-1L),0xC9860340L,(-4L)}},{{0xD911F4DFL,0x4AFAEBE1L,0x448BDEDFL},{0xB63785CDL,2L,0x4A691A6BL},{0L,0x03750DD9L,0x17D49777L},{0xB63785CDL,(-6L),1L},{0xD911F4DFL,5L,0x2261AF14L},{(-1L),1L,0x51AAD5C3L},{0xF084D431L,0xD5F2C513L,(-1L)},{0L,(-7L),1L},{0x51AAD5C3L,0L,(-1L)},{5L,(-1L),0x6CCB2F24L}}};
                int64_t l_3257[9] = {0x986A827FB49B2FB6LL,0x986A827FB49B2FB6LL,4L,0x986A827FB49B2FB6LL,0x986A827FB49B2FB6LL,4L,0x986A827FB49B2FB6LL,0x986A827FB49B2FB6LL,4L};
                int i, j, k;
                p_8 = ((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(l_3182, (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((**l_2750) = ((safe_lshift_func_uint16_t_u_u(p_8, (safe_sub_func_uint8_t_u_u((18446744073709551615UL <= l_3162), 8L)))) & ((*l_2909) == ((l_3191 != l_3192) , &l_3157)))), p_8)), 0xFEL)))), p_8)) <= 0x17A5L);
                for (g_205 = (-16); (g_205 > 23); g_205 = safe_add_func_uint8_t_u_u(g_205, 7))
                {
                    int16_t ***l_3204 = &g_2752[0][3][2];
                    int32_t l_3205 = 5L;
                    uint32_t *l_3226 = &g_1349;
                    int32_t l_3253 = 0x57DCDDCBL;
                    int32_t l_3259[5][7] = {{2L,2L,2L,2L,2L,2L,2L},{2L,0x3DB6DBB3L,0x3DB6DBB3L,2L,0x3DB6DBB3L,0x3DB6DBB3L,2L},{0x3DB6DBB3L,2L,0x3DB6DBB3L,0x3DB6DBB3L,2L,0x3DB6DBB3L,0x3DB6DBB3L},{2L,2L,2L,2L,2L,2L,2L},{2L,0x3DB6DBB3L,0x3DB6DBB3L,2L,0x3DB6DBB3L,0x3DB6DBB3L,2L}};
                    int32_t l_3260 = 0x89583CE0L;
                    int i, j;
                    if ((safe_add_func_uint16_t_u_u(p_8, g_3197)))
                    {
                        int64_t l_3198 = 0x3DF8A9AAE74C55FFLL;
                        l_3198 = 0x463AEAABL;
                    }
                    else
                    {
                        if (g_131)
                            goto lbl_3199;
                    }
                    (*l_2600) = (safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((void*)0 != l_3204), (l_3205 && ((safe_lshift_func_int8_t_s_s(0L, (((safe_unary_minus_func_int16_t_s(((((*g_62) ^= p_8) , (safe_div_func_uint8_t_u_u(((255UL | (((safe_mul_func_int8_t_s_s(p_8, (0xDB98397C60202093LL | (-2L)))) <= l_3176) & 0x6121CE3008BFB70ALL)) , l_3176), l_3182))) , (*g_2753)))) | 0xD0L) , p_10))) | 0xA0L)))), g_156));
                    for (l_3164 = 0; (l_3164 >= (-28)); l_3164--)
                    {
                        (*l_2600) ^= (l_3205 = ((void*)0 == l_3215));
                    }
                    if (((*l_2600) &= (safe_rshift_func_int16_t_s_u((safe_div_func_int64_t_s_s(((g_3221 = (l_3220[4] = ((*g_2699) = (void*)0))) != l_3222), (safe_mod_func_uint32_t_u_u((l_3182 != p_10), ((*l_3226) &= ((*l_3215) = (+((void*)0 != (*g_1581))))))))), (&l_2708 != &g_427[5][1])))))
                    {
                        l_3163 = (p_8 = ((*l_2600) = l_3157));
                        (*l_2600) = (safe_mul_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((~(0x3EAEA26EL && (((((safe_mod_func_uint8_t_u_u(((((****l_2887) = 0UL) < l_3182) & (((safe_lshift_func_uint16_t_u_s(((((l_3182 && (l_3182 == ((((void*)0 != &l_3192) || g_1018) > ((safe_sub_func_uint64_t_u_u((((l_3182 , l_3240) , l_3241) & p_8), 0xBEA7FDF9D48D93B5LL)) > (-1L))))) || p_9) || l_3242[5]) & 0xA9CADB07CE661627LL), l_3164)) || g_2691) < l_3182)), l_3157)) , g_510[2][8]) , 0UL) == p_10) == 1UL))), 0x5060688CBEF5DE84LL)) != l_3241), 3UL));
                    }
                    else
                    {
                        int32_t *l_3243 = &g_162;
                        int32_t *l_3244 = (void*)0;
                        int32_t *l_3245 = &l_3055;
                        int32_t *l_3246 = (void*)0;
                        int32_t *l_3247 = &g_162;
                        int32_t *l_3248[6] = {&g_129,&g_129,&g_129,&g_129,&g_129,&g_129};
                        int8_t l_3249 = 0x00L;
                        int i;
                        l_3262--;
                        p_8 = p_8;
                    }
                }
            }
        }
    }
    return (*l_2600);
}







static int32_t func_12(int8_t p_13, int8_t p_14, uint64_t p_15, int16_t p_16)
{
    uint16_t *l_28 = &g_29;
    int32_t l_33 = (-4L);
    uint8_t *l_43 = &g_44;
    int64_t l_1855 = 1L;
    int16_t *l_1982 = &g_749[8][2];
    uint64_t *l_1983 = &g_205;
    int32_t l_2006 = 0xC2F4FE10L;
    int32_t l_2012[9] = {5L,5L,5L,5L,5L,5L,5L,5L,5L};
    uint8_t l_2013 = 1UL;
    int8_t **l_2122 = (void*)0;
    uint64_t **l_2158 = &g_103[0][1][0];
    uint64_t ***l_2157 = &l_2158;
    uint32_t *l_2182 = &g_453[2][1][0];
    int32_t ****l_2268 = &g_1279;
    int32_t l_2270 = (-8L);
    int32_t *l_2314[10][4] = {{&g_162,&g_162,&l_2006,&l_2006},{(void*)0,(void*)0,&g_162,&l_2006},{&g_6,&g_162,&g_6,&g_162},{&g_6,&g_162,&g_162,&g_6},{(void*)0,&g_162,&l_2006,&g_162},{&g_162,&g_162,&l_2006,&l_2006},{(void*)0,(void*)0,&g_162,&l_2006},{&g_6,&g_162,&g_6,&g_162},{&g_6,&g_162,&g_162,&g_6},{(void*)0,&g_162,&l_2006,&g_162}};
    int32_t l_2322 = 0x2EEBEE6FL;
    int i, j;
    if ((!(safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((--(*l_28)), (((+l_33) ^ (((safe_mod_func_uint32_t_u_u(g_21, func_36((safe_div_func_int8_t_s_s((((*l_43) |= 0x19L) || func_45((l_33 , (void*)0), l_28, func_49(g_21))), 0x45L)), l_33, p_16, l_33))) , p_13) < l_33)) || p_13))), p_15))))
    {
        int32_t *l_1896 = &g_129;
        int32_t l_1928 = 0xD883A940L;
        int16_t *l_1943 = &g_749[3][3];
        for (g_845 = 17; (g_845 > 26); g_845 = safe_add_func_int16_t_s_s(g_845, 4))
        {
            int64_t l_1856 = 0xC1E4E801B375AA8CLL;
            int64_t l_1870 = 0x6E99AB80A23A43ABLL;
            int32_t l_1924 = 0L;
            const int32_t *l_1950 = &g_126;
            const int32_t **l_1949 = &l_1950;
            const int32_t ***l_1948[2][3][8] = {{{&l_1949,&l_1949,&l_1949,&l_1949,&l_1949,&l_1949,&l_1949,&l_1949},{(void*)0,&l_1949,(void*)0,&l_1949,&l_1949,&l_1949,(void*)0,&l_1949},{&l_1949,&l_1949,(void*)0,&l_1949,(void*)0,&l_1949,&l_1949,&l_1949}},{{&l_1949,&l_1949,&l_1949,&l_1949,&l_1949,&l_1949,&l_1949,&l_1949},{(void*)0,&l_1949,(void*)0,&l_1949,&l_1949,&l_1949,(void*)0,&l_1949},{&l_1949,&l_1949,(void*)0,&l_1949,(void*)0,&l_1949,&l_1949,&l_1949}}};
            const int32_t ****l_1947[3][6] = {{(void*)0,&l_1948[0][2][2],(void*)0,&l_1948[0][2][2],&l_1948[0][2][2],(void*)0},{&l_1948[1][1][0],&l_1948[1][1][0],&l_1948[0][2][2],&l_1948[0][2][2],&l_1948[0][2][2],&l_1948[1][1][0]},{&l_1948[0][2][2],&l_1948[0][2][2],&l_1948[0][2][2],&l_1948[0][2][2],&l_1948[0][2][2],&l_1948[0][2][2]}};
            const int32_t *****l_1946[9] = {&l_1947[1][1],(void*)0,&l_1947[1][1],(void*)0,&l_1947[1][1],(void*)0,&l_1947[1][1],(void*)0,&l_1947[1][1]};
            int8_t l_1960 = 0x01L;
            uint8_t l_1974 = 0x18L;
            uint32_t l_1975[4][5][1] = {{{0xB5457C0CL},{0xB5457C0CL},{0x91C4E30BL},{0xB5457C0CL},{0xB5457C0CL}},{{0x91C4E30BL},{0xB5457C0CL},{0xB5457C0CL},{0x91C4E30BL},{0xB5457C0CL}},{{0xB5457C0CL},{0x91C4E30BL},{0xB5457C0CL},{0xB5457C0CL},{0x91C4E30BL}},{{0xB5457C0CL},{0xB5457C0CL},{0x91C4E30BL},{0xB5457C0CL},{0xB5457C0CL}}};
            int i, j, k;
            (**g_1279) = &l_33;
            if (l_1855)
            {
                uint64_t l_1866 = 0xE230B9BE06061494LL;
                int8_t **l_1881 = &g_1011;
                int32_t **l_1887 = &g_399[2][0];
                uint8_t * const **l_1920 = &g_1917;
                uint64_t l_1921 = 1UL;
                int32_t l_1925 = 0x68B3E0A8L;
                if (l_1856)
                {
                    uint64_t l_1857[1];
                    int32_t l_1858 = 0x7BBE9FC4L;
                    int32_t *l_1859 = &g_129;
                    int32_t *l_1860 = &g_129;
                    int32_t *l_1861 = &l_33;
                    int32_t *l_1862 = &g_129;
                    int32_t *l_1863 = &l_33;
                    int32_t *l_1864 = &g_55;
                    int32_t *l_1865 = &l_33;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1857[i] = 0xC41028C0EBCE2B8ALL;
                    l_1857[0] |= p_13;
                    l_1866++;
                    if ((+(*l_1861)))
                    {
                        int16_t *l_1873 = (void*)0;
                        int16_t *l_1874 = &g_749[8][2];
                        int32_t l_1880 = 0xDCFFB46DL;
                        int8_t l_1886 = 3L;
                        int64_t *l_1888 = &g_630[0][3][0];
                        int32_t l_1889 = (-1L);
                        int16_t *l_1890 = &g_1099;
                        (*g_1280) = &g_129;
                        (**g_1279) = (void*)0;
                        if (l_1870)
                            break;
                        (*l_1862) = (safe_sub_func_int16_t_s_s(((*l_1874) = 0x2969L), (safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((p_16 != (+0x75F2808289953E6ALL)), l_1880)), (((void*)0 != l_1881) != ((*l_1890) ^= (((safe_mod_func_int8_t_s_s((((*l_1888) = ((safe_sub_func_int64_t_s_s(l_1886, (((void*)0 != l_1887) <= p_15))) || l_1886)) == l_1889), p_15)) || 0xC8L) != p_15)))))));
                    }
                    else
                    {
                        (*l_1859) &= l_1866;
                    }
                    for (l_1858 = 0; (l_1858 < (-24)); --l_1858)
                    {
                        return p_15;
                    }
                }
                else
                {
                    int32_t *l_1895 = &l_33;
                    int16_t l_1903 = 0L;
                    uint8_t **l_1915 = &l_43;
                    uint8_t ***l_1914[6][4][9] = {{{&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915},{&l_1915,(void*)0,(void*)0,&l_1915,&l_1915,&l_1915,(void*)0,&l_1915,&l_1915},{&l_1915,(void*)0,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915},{&l_1915,&l_1915,(void*)0,&l_1915,&l_1915,&l_1915,(void*)0,&l_1915,&l_1915}},{{&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915},{(void*)0,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,(void*)0,&l_1915,&l_1915},{&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,(void*)0},{(void*)0,&l_1915,&l_1915,(void*)0,(void*)0,&l_1915,&l_1915,(void*)0,(void*)0}},{{&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,(void*)0,&l_1915,&l_1915},{&l_1915,&l_1915,&l_1915,&l_1915,(void*)0,(void*)0,(void*)0,&l_1915,&l_1915},{(void*)0,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,(void*)0},{&l_1915,&l_1915,&l_1915,(void*)0,&l_1915,&l_1915,(void*)0,&l_1915,&l_1915}},{{&l_1915,&l_1915,(void*)0,&l_1915,(void*)0,(void*)0,&l_1915,(void*)0,&l_1915},{&l_1915,(void*)0,&l_1915,&l_1915,&l_1915,&l_1915,(void*)0,&l_1915,(void*)0},{&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915},{&l_1915,(void*)0,(void*)0,&l_1915,&l_1915,(void*)0,&l_1915,&l_1915,&l_1915}},{{&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915},{(void*)0,&l_1915,(void*)0,&l_1915,&l_1915,(void*)0,&l_1915,(void*)0,&l_1915},{&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,(void*)0,&l_1915,&l_1915,(void*)0},{&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,(void*)0,&l_1915,&l_1915,&l_1915}},{{&l_1915,&l_1915,(void*)0,&l_1915,&l_1915,(void*)0,&l_1915,(void*)0,&l_1915},{&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915},{&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915,&l_1915},{&l_1915,&l_1915,&l_1915,&l_1915,(void*)0,&l_1915,(void*)0,&l_1915,&l_1915}}};
                    int i, j, k;
                    for (g_636 = 0; (g_636 > 13); g_636 = safe_add_func_int16_t_s_s(g_636, 5))
                    {
                        int32_t l_1899 = 1L;
                        int32_t * const *l_1909[2][3] = {{&l_1895,&l_1895,&l_1895},{&l_1895,&l_1895,&l_1895}};
                        int32_t * const **l_1908 = &l_1909[0][2];
                        const int32_t ****l_1913 = &g_1910;
                        uint8_t * const ***l_1919[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i, j;
                        l_1896 = l_1895;
                        (*l_1896) = (((safe_mul_func_uint8_t_u_u(((void*)0 == &g_103[1][2][3]), ((g_1695 = 0x1FL) >= l_1899))) , ((safe_mod_func_int64_t_s_s(((l_1903 &= (+(0x978AL == 0xD401L))) == 0x8C015990A039491BLL), (g_1576 , ((safe_mul_func_int8_t_s_s((0xB189L <= 0xA954L), 0xB3L)) ^ l_1855)))) <= p_13)) , 0L);
                        l_1921 = ((***l_1908) &= (!(!(((l_1908 == ((*l_1913) = g_1910)) , l_1914[2][1][5]) == (l_1920 = (g_1916 = g_1916))))));
                    }
                    for (g_195 = 0; (g_195 == 36); g_195 = safe_add_func_int16_t_s_s(g_195, 1))
                    {
                        int32_t *l_1926 = (void*)0;
                        int32_t *l_1927 = (void*)0;
                        int32_t *l_1929 = &l_1924;
                        int32_t *l_1930 = &g_55;
                        int32_t *l_1931[3][4][4] = {{{&g_55,&g_6,&l_33,&g_129},{&g_55,&g_129,&g_55,&l_1928},{&g_55,&l_1928,&l_33,(void*)0},{&g_55,&l_1928,&g_162,&l_1928}},{{&l_33,&g_129,&g_162,&g_129},{&g_55,&g_6,&l_33,&g_129},{&g_55,&g_129,&g_55,&l_1928},{&g_55,&l_1928,&l_33,(void*)0}},{{&g_55,&l_1928,&g_162,&l_1928},{&l_33,&g_129,&g_162,&g_129},{&g_55,&g_6,&l_33,&g_129},{&g_55,&g_129,&g_55,&l_1928}}};
                        uint16_t l_1932 = 65535UL;
                        const uint16_t ** const **l_1936 = (void*)0;
                        const uint16_t ** const ***l_1935 = &l_1936;
                        int i, j, k;
                        ++l_1932;
                        (*l_1935) = &g_144;
                        return p_13;
                    }
                }
            }
            else
            {
                int64_t l_1953 = 0x7DD4B0CEA28A2A88LL;
                int8_t *l_1954 = (void*)0;
                int8_t *l_1955[2];
                uint64_t *l_1976 = (void*)0;
                int i;
                for (i = 0; i < 2; i++)
                    l_1955[i] = &g_21;
                l_1924 ^= ((p_14 = (((*l_1896) = 0L) ^ ((safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((((0x7B5E7AB65390A6C1LL > ((void*)0 == l_1943)) & (l_1870 <= (safe_add_func_int64_t_s_s(((void*)0 != l_1946[5]), ((0x3ED754EAA595D9D4LL | (safe_rshift_func_uint8_t_u_s((p_16 , 0UL), p_14))) , 5UL))))) & p_14), l_1953)), l_1856)) == 0UL))) , 0x03DCC2CDL);
                if (((((safe_add_func_int16_t_s_s((0xF03145D8L ^ ((safe_lshift_func_uint16_t_u_u(l_1960, (safe_unary_minus_func_int32_t_s(l_1953)))) | g_156)), (safe_sub_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_s((p_14 && (0x15DDL & ((((((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((((((((l_1974 |= (p_13 & (l_33 >= ((((safe_mul_func_uint16_t_u_u(p_13, g_1051)) ^ p_13) == p_14) & 0L)))) <= l_1855) <= p_16) != 0xF103B66AL) >= 1UL) | p_16) > l_1975[2][0][0]), l_1975[3][0][0])), 5)) <= 4L) > l_1953) || 0xE0L) > p_14) < 0x4ABA44B5L))), 6)) & 0xFFA6BAD3L) != 4UL) != p_15), p_16)))) , 0xC1L) , &p_15) != l_1976))
                {
                    if (p_16)
                        break;
                    (*l_1896) |= (*g_1912);
                }
                else
                {
                    for (g_1373 = (-30); (g_1373 < 44); ++g_1373)
                    {
                        (**g_1910) = &l_1928;
                    }
                }
            }
            if (p_14)
                continue;
        }
    }
    else
    {
        uint8_t l_1979 = 255UL;
        return l_1979;
    }
    if ((((((safe_rshift_func_int16_t_s_u(((*l_1982) = ((l_1855 < ((void*)0 == &l_43)) == p_13)), 5)) == (((l_33 = (((0L == (((l_1983 = &g_205) != (void*)0) == p_14)) || (safe_div_func_int64_t_s_s((((safe_mod_func_int32_t_s_s(p_15, g_1051)) , l_1855) , l_33), l_1855))) , p_13)) & (-1L)) == 0xE713E19F23E52509LL)) , l_1855) , p_16) & (-3L)))
    {
        uint16_t l_1988 = 0xAF86L;
        for (g_1164 = 0; (g_1164 <= 1); g_1164 += 1)
        {
            int32_t l_1989[8] = {0xE80C6548L,0xE80C6548L,0xE80C6548L,0xE80C6548L,0xE80C6548L,0xE80C6548L,0xE80C6548L,0xE80C6548L};
            int i;
            l_1989[2] &= l_1988;
            for (l_1988 = 0; (l_1988 <= 3); l_1988 += 1)
            {
                int i, j;
                return g_749[(l_1988 + 5)][(g_1164 + 1)];
            }
        }
    }
    else
    {
        int64_t l_1993 = 0x857617C0EC0DCEE0LL;
        int32_t l_2008 = 1L;
        int32_t l_2011 = 0x3F3734BDL;
        int8_t **l_2124 = &g_1011;
        uint64_t *l_2137[2][4][5] = {{{&g_67,&g_67,&g_205,&g_67,&g_67},{&g_205,&g_67,&g_67,&g_205,&g_1373},{&g_67,&g_574,&g_205,&g_67,&g_67},{(void*)0,&g_205,(void*)0,&g_1373,&g_205}},{{&g_67,&g_205,&g_67,&g_67,&g_67},{(void*)0,(void*)0,&g_67,&g_205,&g_67},{&g_67,&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,(void*)0,&g_67,&g_1373}}};
        uint8_t l_2140[6] = {0xF2L,0xF2L,0xF2L,0xF2L,0xF2L,0xF2L};
        int16_t l_2143 = (-1L);
        int32_t *l_2144 = &g_55;
        uint64_t **** const l_2223 = &l_2157;
        uint64_t ** const **l_2249 = (void*)0;
        uint64_t ** const ***l_2248[7] = {&l_2249,&l_2249,&l_2249,&l_2249,&l_2249,&l_2249,&l_2249};
        int16_t **l_2299 = &l_1982;
        uint32_t l_2305 = 4294967295UL;
        int i, j, k;
        for (g_67 = 0; (g_67 <= 31); g_67 = safe_add_func_uint32_t_u_u(g_67, 1))
        {
            int32_t *l_1992 = (void*)0;
            int32_t *l_1994 = &g_55;
            int32_t *l_1995 = &g_55;
            int32_t *l_1996 = &g_131;
            int32_t *l_1997 = &g_129;
            int32_t *l_1998 = &g_131;
            int32_t *l_1999 = &g_129;
            int32_t l_2000[4];
            int32_t *l_2001 = &g_55;
            int32_t *l_2002 = &g_131;
            int32_t *l_2003 = &l_33;
            int32_t *l_2004 = &l_2000[1];
            int32_t *l_2005 = &l_2000[2];
            int32_t *l_2007 = &l_2000[0];
            int32_t *l_2009 = &g_131;
            int32_t *l_2010[1];
            uint8_t **l_2028 = (void*)0;
            uint64_t *l_2032 = &g_205;
            int64_t l_2050 = 0xD718AB8759D8E95ALL;
            uint64_t l_2094 = 0x902CEC10F2CAE24ELL;
            uint16_t l_2097[2];
            int i;
            for (i = 0; i < 4; i++)
                l_2000[i] = 1L;
            for (i = 0; i < 1; i++)
                l_2010[i] = &l_2008;
            for (i = 0; i < 2; i++)
                l_2097[i] = 65535UL;
            l_2013++;
            (*l_2007) = (-1L);
            for (p_15 = 0; (p_15 <= 8); p_15 += 1)
            {
                uint8_t **l_2024 = &l_43;
                uint8_t ***l_2023 = &l_2024;
                uint8_t ****l_2022[8] = {&l_2023,&l_2023,&l_2023,&l_2023,&l_2023,&l_2023,&l_2023,&l_2023};
                int32_t l_2033 = 0x16D9CD53L;
                const int32_t ***l_2051 = (void*)0;
                uint16_t *l_2090 = &g_63;
                int32_t l_2092 = 0x7D0D88A7L;
                int i;
                for (l_2011 = 2; (l_2011 >= 0); l_2011 -= 1)
                {
                    uint32_t l_2030 = 0xDC182152L;
                    for (p_16 = 1; (p_16 <= 4); p_16 += 1)
                    {
                        uint8_t **l_2027[4][9][7] = {{{&l_43,&l_43,&l_43,&l_43,(void*)0,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0,&l_43,&l_43},{&l_43,&l_43,&l_43,&l_43,(void*)0,&l_43,&l_43},{&l_43,&l_43,&l_43,&l_43,&l_43,&l_43,&l_43},{(void*)0,(void*)0,&l_43,&l_43,&l_43,&l_43,&l_43},{&l_43,(void*)0,&l_43,&l_43,(void*)0,&l_43,(void*)0},{(void*)0,&l_43,&l_43,(void*)0,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,&l_43,&l_43,&l_43},{&l_43,(void*)0,&l_43,&l_43,(void*)0,&l_43,(void*)0}},{{&l_43,&l_43,&l_43,(void*)0,&l_43,(void*)0,&l_43},{&l_43,&l_43,&l_43,(void*)0,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,&l_43,(void*)0,&l_43},{&l_43,&l_43,&l_43,&l_43,&l_43,&l_43,&l_43},{(void*)0,&l_43,&l_43,(void*)0,&l_43,(void*)0,&l_43},{&l_43,&l_43,&l_43,&l_43,(void*)0,(void*)0,&l_43},{&l_43,&l_43,&l_43,&l_43,&l_43,&l_43,&l_43},{(void*)0,&l_43,&l_43,&l_43,&l_43,&l_43,&l_43},{&l_43,&l_43,(void*)0,&l_43,(void*)0,&l_43,&l_43}},{{&l_43,&l_43,&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,&l_43,&l_43,&l_43},{(void*)0,&l_43,&l_43,&l_43,(void*)0,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0,&l_43,&l_43},{&l_43,&l_43,(void*)0,(void*)0,&l_43,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0,&l_43,(void*)0},{&l_43,&l_43,&l_43,&l_43,(void*)0,&l_43,&l_43},{&l_43,&l_43,&l_43,&l_43,&l_43,&l_43,&l_43},{&l_43,&l_43,&l_43,&l_43,&l_43,&l_43,&l_43}},{{&l_43,&l_43,&l_43,&l_43,&l_43,&l_43,&l_43},{(void*)0,&l_43,&l_43,&l_43,&l_43,&l_43,&l_43},{&l_43,&l_43,&l_43,&l_43,&l_43,&l_43,&l_43},{&l_43,&l_43,&l_43,&l_43,&l_43,&l_43,(void*)0},{(void*)0,&l_43,&l_43,&l_43,&l_43,&l_43,&l_43},{&l_43,&l_43,&l_43,&l_43,&l_43,&l_43,&l_43},{&l_43,&l_43,&l_43,&l_43,&l_43,&l_43,(void*)0},{&l_43,(void*)0,&l_43,&l_43,&l_43,&l_43,&l_43},{(void*)0,&l_43,&l_43,&l_43,&l_43,&l_43,(void*)0}}};
                        int16_t *l_2031[5][10] = {{(void*)0,&g_156,&g_156,&g_1099,&g_1099,&g_156,&g_156,(void*)0,(void*)0,&g_156},{(void*)0,&g_1099,&g_156,&g_156,&g_1099,(void*)0,&g_156,&g_156,(void*)0,&g_1099},{&g_1099,&g_156,&g_156,&g_1099,(void*)0,&g_156,&g_156,(void*)0,&g_1099,&g_156},{&g_1099,&g_1099,&g_156,&g_156,(void*)0,(void*)0,&g_156,&g_156,&g_1099,&g_1099},{(void*)0,&g_156,&g_156,&g_1099,&g_1099,&g_156,&g_156,(void*)0,(void*)0,&g_156}};
                        int i, j, k;
                        (**g_1910) = (void*)0;
                        l_2012[(l_2011 + 6)] ^= g_749[(l_2011 + 6)][p_16];
                        (*l_2004) |= ((safe_add_func_int16_t_s_s(g_1393[(l_2011 + 1)][l_2011][(p_16 + 2)], (((l_2012[(l_2011 + 6)] = (safe_mod_func_int16_t_s_s((g_749[p_16][(l_2011 + 1)] = (*l_1999)), (safe_sub_func_uint32_t_u_u((((p_15 <= (l_2022[2] == (void*)0)) & (safe_mod_func_int32_t_s_s((l_2027[1][7][0] == l_2028), (~(0x61BBCB567DFB9DB6LL | l_2030))))) <= l_2011), p_14))))) , 0xB330CFEF66F2FC99LL) & g_453[2][2][0]))) & 7L);
                    }
                    if (((*l_1995) = (*l_2002)))
                    {
                        (**g_1910) = &l_2008;
                    }
                    else
                    {
                        uint16_t l_2048 = 0x65F0L;
                        int32_t l_2049 = 0L;
                        l_2049 ^= (((l_2032 == &p_15) < l_2033) , ((*l_2003) = ((*l_2007) = (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((65535UL & (safe_mul_func_uint8_t_u_u((+((-1L) ^ ((((safe_mul_func_uint8_t_u_u(((***l_2023) = (p_16 , ((safe_div_func_uint64_t_u_u((l_1993 > ((-7L) == (safe_div_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((p_14 == (*l_2004)))), 0x4A04L)))), l_2048)) , p_13))), p_16)) ^ 0xFA49BFE1L) , (void*)0) == (void*)0))), l_1993))), 13)), l_2048)))));
                        (*l_1995) = (l_2050 = p_13);
                        (*l_2001) = p_16;
                        (*l_2003) ^= ((void*)0 != l_2051);
                    }
                    (**g_1279) = &l_2006;
                }
                for (g_1695 = 0; (g_1695 >= 28); g_1695++)
                {
                    int32_t *l_2056[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
                    int i, j;
                    (*l_2005) ^= p_16;
                    for (g_1051 = 0; (g_1051 <= 7); g_1051++)
                    {
                        uint64_t l_2089 = 0xBBF6D4BD0D1FC1C1LL;
                        int64_t *l_2091[10][5] = {{&g_510[2][8],&g_510[2][8],&l_1993,&l_1993,&g_510[2][8]},{&l_1855,(void*)0,&l_1855,(void*)0,&l_1855},{&g_510[2][8],&l_1993,&l_1993,&g_510[2][8],&g_510[2][8]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_510[2][8],&g_510[2][8],&l_1993,&l_1993,&g_510[2][8]},{&l_1855,(void*)0,&l_1855,(void*)0,&l_1855},{&g_510[2][8],&l_1993,&l_1993,&g_510[2][8],&g_510[2][8]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_510[2][8],&g_510[2][8],&l_1993,&l_1993,&g_510[2][8]},{&l_1855,(void*)0,&l_1855,(void*)0,&l_1855}};
                        int i, j;
                        (**g_1910) = ((**g_1279) = (l_2056[0][3] = &l_2012[8]));
                        (*l_2001) = (0x87L <= ((l_2012[8] ^= (safe_div_func_uint32_t_u_u((0x3A31468BL < (((safe_mul_func_int8_t_s_s((p_13 = p_14), (safe_sub_func_int8_t_s_s((-5L), (safe_rshift_func_uint16_t_u_s((l_2092 = ((l_2033 ^= (safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u((p_15 , ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((7UL >= (*l_1997)), 0)), (safe_sub_func_int16_t_s_s(((safe_add_func_int8_t_s_s(p_16, (safe_add_func_int32_t_s_s((((((safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(((((((*l_2009) = l_2089) != 4294967295UL) , l_2090) != (void*)0) | l_2089), l_33)), l_2008)), (-1L))) , (void*)0) != (void*)0) != g_630[3][3][3]) ^ 0x8E5C9749L), p_15)))) >= l_1855), p_14)))), 6)), p_16)) < p_16)), p_16)), 4))) == p_15)), g_200[1][0])))))) < l_33) , 0UL)), 0x15AC177DL))) == p_14));
                    }
                    l_2094--;
                    (*l_1999) = ((((l_2097[1] , (safe_lshift_func_int8_t_s_s((l_2011 ^ p_16), 2))) ^ (+(safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_u(l_2006, ((**l_2024) = (safe_lshift_func_int8_t_s_u(((g_1588 && (safe_add_func_uint16_t_u_u(p_13, 0x93B6L))) != (p_14 , (p_16 ^ l_2013))), 2))))))))) != (*g_62)) , 0xFBA0E2E6L);
                }
            }
            for (g_29 = 0; (g_29 <= 36); ++g_29)
            {
                int8_t ***l_2123 = &g_1010;
                int32_t l_2125 = 0x0928FA46L;
                uint16_t l_2126 = 0xA637L;
                l_2126 &= (safe_mod_func_int16_t_s_s((((p_13 || (((safe_sub_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u(0xC1L, (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((&g_144 == (void*)0), p_15)), 0)), p_14)))) && (((*l_2123) = l_2122) == l_2124)) != (((((((*l_2001) = (p_16 <= 0xC86FL)) >= (*g_62)) & (-1L)) >= 0L) >= (-6L)) & 18446744073709551615UL)), p_13)) | g_574) , (*l_1996))) | l_2125) < (*l_2007)), l_2011));
            }
        }
        (*l_2144) &= ((safe_div_func_uint16_t_u_u((safe_add_func_int64_t_s_s(0x2F2AFFB97BFFB873LL, (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((l_1993 | l_2011), (((l_2137[1][0][1] == &p_15) && (((p_15 <= (((safe_add_func_int8_t_s_s((l_2140[0] ^= (&g_144 == (void*)0)), ((safe_sub_func_uint16_t_u_u((0x7556L <= l_2143), l_33)) && p_16))) , p_15) & l_2008)) && l_2012[8]) < l_1993)) != 0x83E0E501L))), 7)), l_2143)))), l_2012[8])) == 0x24739697L);
        if (((*l_2144) = (((p_16 , (p_13 , (-1L))) <= (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s((((void*)0 == g_2148[2]) , 0xF6FCE940L))), ((safe_rshift_func_int8_t_s_s((0UL == (((((g_1349 = l_1855) , (((*l_2144) & g_923) | l_1855)) || (*g_62)) == p_14) <= g_1695)), l_2012[8])) == (*l_2144))))) , 0xCADDED1BL)))
        {
            int32_t l_2181 = 0x5219DD48L;
            int32_t *l_2184 = &l_33;
            int32_t l_2202 = 0x4BD37719L;
            int32_t l_2204 = 0L;
            int32_t l_2205 = 4L;
            int32_t l_2206[9] = {0x2B9EF218L,0x2B9EF218L,0x2B9EF218L,0x2B9EF218L,0x2B9EF218L,0x2B9EF218L,0x2B9EF218L,0x2B9EF218L,0x2B9EF218L};
            int64_t *l_2229[5];
            uint32_t l_2230 = 5UL;
            uint64_t ****l_2269 = &l_2157;
            uint16_t *l_2292 = &g_2207;
            int32_t *** const l_2302 = &g_1280;
            int i;
            for (i = 0; i < 5; i++)
                l_2229[i] = &g_1111;
            for (g_1349 = 0; (g_1349 == 12); g_1349 = safe_add_func_uint32_t_u_u(g_1349, 8))
            {
                uint64_t ***l_2162 = &l_2158;
                int32_t l_2176 = 0xAC62AC5CL;
                int32_t l_2183[2];
                uint32_t *l_2188 = &g_904;
                uint8_t **l_2216 = (void*)0;
                uint8_t ***l_2215 = &l_2216;
                int32_t l_2227[3];
                int i;
                for (i = 0; i < 2; i++)
                    l_2183[i] = 1L;
                for (i = 0; i < 3; i++)
                    l_2227[i] = 1L;
                for (g_157 = 0; (g_157 <= 5); g_157 += 1)
                {
                    uint64_t ****l_2159[8][6] = {{&g_325,&l_2157,&g_325,&l_2157,&g_325,&l_2157},{&l_2157,&g_325,&l_2157,&l_2157,&g_325,&l_2157},{&l_2157,&g_325,&l_2157,&l_2157,&g_325,&l_2157},{&l_2157,&g_325,&l_2157,&l_2157,&g_325,&l_2157},{&l_2157,&g_325,&l_2157,&l_2157,&g_325,&l_2157},{&l_2157,&g_325,&l_2157,&l_2157,&g_325,&l_2157},{&l_2157,&g_325,&l_2157,&l_2157,&g_325,&l_2157},{&l_2157,&g_325,&l_2157,&l_2157,&g_325,&l_2157}};
                    uint8_t **l_2175 = &l_43;
                    int32_t *l_2192[4];
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_2192[i] = (void*)0;
                    if ((!(safe_add_func_uint16_t_u_u(((g_325 = l_2157) == (((*l_43) &= (safe_rshift_func_int16_t_s_u(g_510[g_157][(g_157 + 3)], 4))) , (g_2163 = l_2162))), (safe_mod_func_uint8_t_u_u((l_2012[8] ^= (p_13 | ((((safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((safe_div_func_int64_t_s_s(((safe_mod_func_int8_t_s_s((0xE601DA3A345BD6E3LL && (((l_2176 = ((void*)0 == l_2175)) | ((l_33 , ((safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((((l_2181 , (void*)0) != l_2182) != l_2183[0]), 2)) , (*l_2144)), l_2183[0])) , p_14)) ^ p_13)) == 0x3FAAL)), p_14)) >= 9UL), p_13)) <= 18446744073709551615UL), (*l_2144))), p_14)) , g_923) , 0xC4E8L) == (*l_2144)))), (-10L)))))))
                    {
                        uint32_t *l_2187 = &g_453[2][2][0];
                        int8_t ***l_2191 = (void*)0;
                        int8_t *** const *l_2190 = &l_2191;
                        int8_t *** const **l_2189[10] = {(void*)0,&l_2190,(void*)0,&l_2190,(void*)0,&l_2190,(void*)0,&l_2190,(void*)0,&l_2190};
                        int i;
                        (**g_1910) = l_2184;
                        (*l_2144) = (safe_sub_func_int8_t_s_s((l_2187 != l_2188), ((void*)0 == l_2189[0])));
                        (**g_1910) = l_2192[2];
                    }
                    else
                    {
                        int32_t l_2193 = (-1L);
                        (*l_2184) ^= 0x50C06EE1L;
                        (*l_2144) = l_2006;
                        (*g_1911) = &l_2183[1];
                        if (l_2193)
                            continue;
                    }
                    if (((((*l_2144) = (safe_mul_func_int8_t_s_s(((0xF1L < ((-1L) && l_2183[0])) || (*g_62)), (p_13 = l_33)))) , (((~((&g_2149 == &g_2149) == p_13)) , (!(safe_rshift_func_uint16_t_u_u(((safe_mul_func_int64_t_s_s(g_126, 0UL)) || 0xE319L), 1)))) | (-1L))) & g_159))
                    {
                        int32_t l_2203 = 1L;
                        --g_2207;
                    }
                    else
                    {
                        int64_t *l_2226 = &g_510[g_157][(g_157 + 3)];
                        int32_t l_2228 = (-10L);
                        l_2012[8] = (65535UL && (l_2176 , (((*l_2144) = ((safe_sub_func_int64_t_s_s(p_13, (safe_unary_minus_func_int32_t_s((((safe_rshift_func_uint8_t_u_s(((*l_43) ^= ((void*)0 != l_2215)), (((safe_sub_func_int64_t_s_s((((&l_1855 != ((((safe_div_func_uint8_t_u_u((l_2227[1] &= (((safe_div_func_int64_t_s_s((l_2223 != (void*)0), ((*l_2226) &= (safe_sub_func_int32_t_s_s(((p_13 > (*g_62)) & 0xD4L), p_13))))) & p_13) > p_15)), 0x1BL)) & l_2228) , (*l_2144)) , l_2229[4])) ^ p_13) <= (-10L)), 1UL)) != 0x92FD3435ECC137F1LL) , 0xA8L))) != p_14) | 0x2B61524DL))))) | l_2230)) ^ l_2013)));
                        return l_2183[0];
                    }
                    for (l_2143 = 0; (l_2143 < 10); l_2143 = safe_add_func_int64_t_s_s(l_2143, 7))
                    {
                        int32_t * const l_2233[4][4] = {{&l_2205,&l_2205,&l_2205,&l_2205},{&l_2205,&l_2205,&l_2205,&l_2205},{&l_2205,&l_2205,&l_2205,&l_2205},{&l_2205,&l_2205,&l_2205,&l_2205}};
                        int32_t **l_2234 = &g_345[8][1][3];
                        int i, j;
                        (*l_2234) = l_2233[2][0];
                        if (l_2183[0])
                            break;
                    }
                }
                l_2006 = (0xD224L && (p_16 <= ((*l_43) = p_13)));
            }
            if (l_2012[3])
            {
                uint64_t *l_2247 = (void*)0;
                uint64_t ** const l_2246 = &l_2247;
                uint64_t ** const *l_2245 = &l_2246;
                uint64_t ** const **l_2244 = &l_2245;
                uint64_t ** const ***l_2243 = &l_2244;
                uint32_t ***l_2262 = &g_2260[2][3][3];
                int32_t l_2271 = 0x24ABC332L;
                int32_t ***l_2285 = &g_398;
                int32_t * const *l_2287 = &g_399[0][0];
                int32_t * const **l_2286 = &l_2287;
                int32_t * const *l_2304 = &g_1152;
                int32_t * const **l_2303 = &l_2304;
                if ((((safe_lshift_func_uint16_t_u_s((--(*g_62)), 6)) > (!((safe_sub_func_int8_t_s_s(((!0xB5DBL) && (((((((l_2248[2] = (l_2243 = (void*)0)) == (void*)0) || (safe_add_func_uint32_t_u_u(0xDDE9F337L, (safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((*l_2262) = g_2260[2][3][3]) != (((*l_1983) = 0x65FA4DD6817D3629LL) , &g_2261)), (((p_13 ^= (safe_rshift_func_uint8_t_u_u((~(safe_rshift_func_int16_t_s_u(((*l_1982) &= ((void*)0 == l_2268)), 11))), p_15))) , l_2269) != (void*)0))), l_2270)), l_2271)), 15))))) != (-1L)) | p_15) , &l_2122) == (void*)0)), p_14)) , 0xA9L))) & (*l_2184)))
                {
                    (*l_2184) = (safe_add_func_int16_t_s_s((p_16 = p_16), p_13));
                }
                else
                {
                    int64_t l_2274 = 1L;
                    int32_t * const ***l_2288 = &l_2286;
                    int32_t l_2289 = 1L;
                    (*l_2144) = 0x2927434CL;
                    (*l_2184) = p_15;
                    (*l_2144) = l_2274;
                    (*l_2184) |= (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((void*)0 == &g_325) , ((g_845 | l_2271) ^ (((l_2289 ^= (safe_sub_func_int32_t_s_s(((0x2A489C87993F51D0LL <= (safe_sub_func_uint64_t_u_u((p_15 > (((safe_rshift_func_uint16_t_u_s(1UL, 12)) > ((((l_2285 == ((*l_2288) = l_2286)) >= p_15) == p_16) == l_2271)) , p_14)), p_15))) | (*l_2144)), p_16))) < p_14) || 0x331DL))), l_2274)), p_13));
                }
                (*l_2184) = (safe_add_func_uint32_t_u_u(((l_1982 != l_2292) ^ (&l_2230 != (void*)0)), (safe_add_func_uint8_t_u_u(((*l_43) = (safe_rshift_func_uint16_t_u_s(65532UL, ((((*l_2182) = (l_1855 >= ((safe_lshift_func_uint16_t_u_s(((*g_62) = (l_2299 != (((safe_mul_func_int16_t_s_s(((**l_2299) = p_14), p_14)) | p_16) , &l_1982))), 7)) > (*l_2184)))) , l_2302) != l_2303)))), l_2305))));
            }
            else
            {
                int32_t *l_2306 = &l_2205;
                (**g_1279) = l_2306;
            }
        }
        else
        {
            int64_t l_2311 = 0xB624E792C0A512BFLL;
            (*g_1911) = g_2307;
            (*l_2144) = (+((*l_43)--));
            return l_2311;
        }
        for (l_1993 = (-4); (l_1993 >= 15); l_1993 = safe_add_func_int16_t_s_s(l_1993, 5))
        {
            (**g_1910) = l_2314[2][3];
            if (p_15)
                break;
        }
    }
    for (g_63 = 0; (g_63 <= 7); g_63 = safe_add_func_uint64_t_u_u(g_63, 6))
    {
        int8_t l_2317 = 0L;
        int32_t l_2318[10] = {0xA713793DL,(-8L),0xA713793DL,(-8L),0xA713793DL,(-8L),0xA713793DL,(-8L),0xA713793DL,(-8L)};
        uint32_t l_2319 = 0x7551B625L;
        int i;
        l_2317 = 0x9098913CL;
        --l_2319;
    }
    return l_2322;
}







static const uint32_t func_36(int16_t p_37, uint8_t p_38, int32_t p_39, uint64_t p_40)
{
    return p_40;
}







static int8_t func_45(uint16_t * p_46, uint16_t * p_47, const uint32_t p_48)
{
    const int16_t l_1354 = (-5L);
    int32_t ****l_1363 = (void*)0;
    const int32_t *l_1368 = &g_126;
    const int32_t **l_1369 = &l_1368;
    int32_t ***l_1370 = &g_1280;
    int32_t ****l_1371 = &l_1370;
    uint16_t *l_1372 = (void*)0;
    int32_t l_1378[2][1][6];
    uint16_t ***l_1390 = &g_153;
    int8_t ****l_1441 = (void*)0;
    uint64_t l_1462 = 18446744073709551609UL;
    int16_t l_1594 = 0x3638L;
    int32_t l_1609 = 1L;
    uint32_t l_1614[8][7] = {{0x071C1762L,8UL,0x6DA44ECAL,1UL,4294967287UL,1UL,0x6DA44ECAL},{1UL,1UL,0UL,0x63A90954L,0UL,3UL,0x6497A76EL},{0x071C1762L,1UL,0xC6D689A0L,0xC6D689A0L,1UL,0x071C1762L,4294967287UL},{0xD42C3DA9L,0UL,0x7C8C9A59L,0UL,0UL,0UL,0UL},{0x0A4C41BBL,0x21B9D1D8L,0x0A4C41BBL,1UL,4294967287UL,1UL,0x071C1762L},{0x7C8C9A59L,0UL,0xD42C3DA9L,3UL,0xD42C3DA9L,0UL,0x7C8C9A59L},{0xC6D689A0L,1UL,0x071C1762L,4294967287UL,0x7915EAEFL,1UL,0x7915EAEFL},{0UL,1UL,1UL,0UL,0x63A90954L,0UL,3UL}};
    int32_t *****l_1667[8][6][5] = {{{&l_1371,&l_1371,&l_1371,&g_1374,&g_1374},{&l_1371,&l_1371,&g_1374,&g_1374,&l_1371},{&g_1374,&l_1371,&g_1374,(void*)0,&l_1371},{(void*)0,&g_1374,&g_1374,(void*)0,&l_1371},{&g_1374,&g_1374,&l_1371,&g_1374,&l_1371},{&l_1371,&l_1371,&g_1374,&g_1374,&l_1371}},{{&g_1374,(void*)0,&g_1374,&g_1374,(void*)0},{(void*)0,&g_1374,&g_1374,(void*)0,&g_1374},{&g_1374,&g_1374,&g_1374,(void*)0,&l_1371},{&l_1371,(void*)0,&l_1371,&g_1374,&l_1371},{(void*)0,&l_1371,&g_1374,&g_1374,&l_1371},{&l_1371,&l_1371,&g_1374,&g_1374,&g_1374}},{{(void*)0,&g_1374,(void*)0,&g_1374,&l_1371},{&l_1371,&l_1371,&l_1371,&g_1374,(void*)0},{(void*)0,&l_1371,(void*)0,&l_1371,&l_1371},{(void*)0,&g_1374,&l_1371,(void*)0,&l_1371},{&l_1371,&l_1371,(void*)0,&l_1371,&l_1371},{&g_1374,(void*)0,&g_1374,(void*)0,(void*)0}},{{&g_1374,&g_1374,(void*)0,&l_1371,&g_1374},{&g_1374,&l_1371,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1371,&l_1371,&g_1374,&l_1371},{(void*)0,(void*)0,&g_1374,&g_1374,&l_1371},{&l_1371,(void*)0,&g_1374,(void*)0,&l_1371},{&g_1374,&l_1371,&g_1374,&l_1371,(void*)0}},{{&g_1374,(void*)0,(void*)0,&g_1374,&l_1371},{&g_1374,(void*)0,&g_1374,&g_1374,&g_1374},{&g_1374,&l_1371,&l_1371,&l_1371,&l_1371},{(void*)0,&l_1371,&g_1374,&l_1371,(void*)0},{&l_1371,&g_1374,&g_1374,&l_1371,&g_1374},{&l_1371,(void*)0,&g_1374,&g_1374,(void*)0}},{{&l_1371,&l_1371,&g_1374,&g_1374,(void*)0},{&l_1371,&g_1374,(void*)0,&l_1371,(void*)0},{&g_1374,&l_1371,&l_1371,(void*)0,&g_1374},{&l_1371,&l_1371,&g_1374,&g_1374,&g_1374},{&l_1371,&g_1374,&l_1371,&g_1374,(void*)0},{&l_1371,&l_1371,&l_1371,(void*)0,(void*)0}},{{&l_1371,&l_1371,&g_1374,&l_1371,(void*)0},{(void*)0,&g_1374,&l_1371,(void*)0,&l_1371},{&g_1374,&l_1371,&l_1371,&l_1371,&g_1374},{&g_1374,&g_1374,&g_1374,(void*)0,(void*)0},{&g_1374,&g_1374,&l_1371,&l_1371,&l_1371},{&g_1374,&l_1371,(void*)0,&g_1374,(void*)0}},{{&l_1371,&l_1371,&g_1374,&g_1374,&g_1374},{(void*)0,&g_1374,&g_1374,&g_1374,&l_1371},{(void*)0,(void*)0,&g_1374,(void*)0,(void*)0},{&g_1374,&l_1371,&g_1374,&g_1374,(void*)0},{&g_1374,(void*)0,&l_1371,&g_1374,(void*)0},{&g_1374,&g_1374,&g_1374,&g_1374,&g_1374}}};
    int32_t *****l_1668[6][10][4] = {{{&g_1374,&g_1374,&l_1371,&g_1374},{&g_1374,&l_1371,(void*)0,&g_1374},{&g_1374,&g_1374,&l_1371,(void*)0},{(void*)0,&g_1374,&g_1374,&g_1374},{&g_1374,&l_1371,(void*)0,&l_1371},{&g_1374,&l_1371,&l_1371,&l_1371},{&g_1374,&l_1371,&l_1371,&g_1374},{&l_1371,&g_1374,&l_1371,&l_1371},{&g_1374,&g_1374,&l_1371,&g_1374},{&l_1371,&g_1374,&g_1374,&g_1374}},{{&l_1371,&l_1371,&l_1371,&g_1374},{&g_1374,&l_1371,&l_1371,&g_1374},{&g_1374,&l_1371,&g_1374,&l_1371},{&g_1374,&g_1374,&l_1371,&l_1371},{&l_1371,&l_1371,&g_1374,&l_1371},{&g_1374,&l_1371,&l_1371,&l_1371},{&l_1371,(void*)0,(void*)0,&l_1371},{&l_1371,(void*)0,&g_1374,&l_1371},{&l_1371,&g_1374,&g_1374,&l_1371},{&l_1371,&l_1371,&l_1371,&l_1371}},{{&g_1374,&g_1374,&g_1374,&l_1371},{&l_1371,&g_1374,&l_1371,&l_1371},{&l_1371,&g_1374,&l_1371,&g_1374},{&l_1371,&l_1371,&l_1371,&g_1374},{&l_1371,&g_1374,&g_1374,&l_1371},{&g_1374,&g_1374,&l_1371,(void*)0},{&l_1371,&g_1374,&g_1374,&l_1371},{&l_1371,&g_1374,&g_1374,&l_1371},{&l_1371,&l_1371,(void*)0,&g_1374},{&l_1371,&l_1371,&l_1371,&g_1374}},{{&g_1374,&l_1371,&g_1374,&l_1371},{&l_1371,&l_1371,&l_1371,&l_1371},{&g_1374,&g_1374,&g_1374,&g_1374},{&g_1374,&g_1374,&l_1371,&l_1371},{&g_1374,&g_1374,&l_1371,&g_1374},{&l_1371,&g_1374,&g_1374,&l_1371},{&l_1371,&l_1371,&l_1371,&l_1371},{&g_1374,&g_1374,&l_1371,&g_1374},{&l_1371,&l_1371,&l_1371,&l_1371},{&g_1374,&l_1371,&l_1371,&g_1374}},{{&g_1374,&g_1374,(void*)0,&g_1374},{&g_1374,&g_1374,&g_1374,&g_1374},{(void*)0,&g_1374,&l_1371,&g_1374},{&g_1374,&g_1374,(void*)0,&g_1374},{&g_1374,&g_1374,&g_1374,&g_1374},{&l_1371,&l_1371,&l_1371,&l_1371},{(void*)0,&l_1371,&l_1371,&g_1374},{&l_1371,&g_1374,&g_1374,&l_1371},{&l_1371,&l_1371,&g_1374,&g_1374},{&g_1374,&l_1371,&l_1371,&l_1371}},{{&l_1371,&g_1374,&g_1374,(void*)0},{(void*)0,&l_1371,&l_1371,&g_1374},{&g_1374,&g_1374,&l_1371,&l_1371},{&l_1371,&g_1374,&l_1371,&g_1374},{&g_1374,&g_1374,&g_1374,&g_1374},{&g_1374,&l_1371,&l_1371,&g_1374},{&l_1371,&g_1374,&l_1371,&g_1374},{&l_1371,&l_1371,&g_1374,&l_1371},{(void*)0,&l_1371,&l_1371,&l_1371},{&g_1374,&g_1374,&g_1374,&g_1374}}};
    uint8_t l_1669[5] = {0UL,0UL,0UL,0UL,0UL};
    uint8_t l_1691 = 9UL;
    uint64_t ** const l_1702 = &g_103[0][1][0];
    uint64_t ** const *l_1701 = &l_1702;
    uint64_t ** const **l_1700 = &l_1701;
    uint64_t ** const ***l_1699 = &l_1700;
    const int32_t *l_1714 = &l_1378[0][0][0];
    uint16_t l_1744 = 1UL;
    int16_t l_1754[4][7][7] = {{{0xF8D6L,(-1L),1L,1L,0x38E4L,(-1L),0xA5FBL},{(-10L),0x50E6L,3L,1L,0x7643L,(-1L),0L},{0xA5FBL,0x50E6L,1L,0x620FL,0L,(-1L),0L},{(-10L),(-1L),0x7643L,0x29E2L,0L,(-1L),0xA5FBL},{0xF8D6L,(-1L),0x7643L,0x620FL,0x7643L,(-1L),0xF8D6L},{0xF8D6L,(-1L),1L,1L,0x38E4L,(-1L),0xA5FBL},{(-10L),0x50E6L,3L,1L,0x7643L,(-1L),0L}},{{0xA5FBL,0x50E6L,1L,0x620FL,0L,(-1L),0L},{(-10L),(-1L),0x7643L,0x29E2L,0L,(-1L),0xA5FBL},{0xF8D6L,(-1L),0x7643L,0x620FL,0x7643L,(-1L),0xF8D6L},{0xF8D6L,(-1L),1L,1L,0x38E4L,(-1L),0xA5FBL},{(-10L),0x50E6L,3L,1L,0x7643L,(-1L),0L},{0xA5FBL,0x50E6L,1L,0x620FL,0L,(-1L),0L},{(-10L),(-1L),0x7643L,0x29E2L,0L,(-1L),0xA5FBL}},{{0xF8D6L,(-1L),0x7643L,0x620FL,0x7643L,(-1L),0xF8D6L},{0xF8D6L,(-1L),1L,1L,0x38E4L,(-1L),0xA5FBL},{(-10L),0x50E6L,3L,1L,0x7643L,(-1L),0L},{0xA5FBL,0x50E6L,1L,0x620FL,0L,(-1L),0L},{(-10L),(-1L),0x7643L,0x29E2L,0L,(-1L),0xA5FBL},{0xF8D6L,(-1L),0x7643L,0x620FL,0x7643L,(-1L),0xF8D6L},{0xF8D6L,(-10L),0x3ACDL,1L,0xF3E4L,0xA5FBL,0x29E2L}},{{0x620FL,0xF8D6L,(-5L),1L,1L,(-1L),(-1L)},{0x29E2L,0xF8D6L,0x3ACDL,0xFA50L,0xF6D9L,(-10L),(-1L)},{0x620FL,(-10L),1L,8L,0xF6D9L,(-1L),0x29E2L},{1L,0xA5FBL,1L,0xFA50L,1L,0xA5FBL,1L},{1L,(-10L),0x3ACDL,1L,0xF3E4L,0xA5FBL,0x29E2L},{0x620FL,0xF8D6L,(-5L),1L,1L,(-1L),(-1L)},{0x29E2L,0xF8D6L,0x3ACDL,0xFA50L,0xF6D9L,(-10L),(-1L)}}};
    int64_t l_1760 = 0x73FD3FF4E9803E3ELL;
    uint64_t l_1761 = 18446744073709551606UL;
    int8_t l_1810[2][2][5] = {{{0xABL,0xABL,0xABL,0xABL,0xABL},{0xD2L,0xD2L,0xD2L,0xD2L,0xD2L}},{{0xABL,0xABL,0xABL,0xABL,0xABL},{0xD2L,0xD2L,0xD2L,0xD2L,0xD2L}}};
    uint8_t l_1811 = 5UL;
    const uint8_t l_1851 = 247UL;
    uint64_t l_1852 = 0xD0A69FD06C9A5D42LL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
                l_1378[i][j][k] = 0xF6D2763BL;
        }
    }
    if ((((safe_add_func_uint8_t_u_u(l_1354, (p_48 < (((safe_rshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((l_1363 != l_1363), (safe_rshift_func_int8_t_s_s((g_749[8][2] >= (((*l_1369) = l_1368) != ((**g_428) = (**g_428)))), 7)))), (((*l_1371) = l_1370) == (void*)0))) ^ g_162), p_48)) , l_1372) != l_1372)))) | p_48) | g_1373))
    {
        int32_t ****l_1375 = &g_1279;
        int32_t *****l_1376 = &l_1375;
        int32_t *l_1377[9] = {&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162};
        uint16_t ***l_1389 = &g_153;
        int64_t l_1426 = 0xFD7E5285164114AALL;
        uint32_t l_1474 = 4294967287UL;
        uint64_t *** const l_1499[2] = {(void*)0,(void*)0};
        int32_t l_1521 = (-1L);
        int8_t ***l_1550 = &g_1010;
        int32_t ***l_1569[5][9] = {{(void*)0,&g_398,(void*)0,(void*)0,&g_398,(void*)0,(void*)0,&g_398,(void*)0},{(void*)0,&g_398,(void*)0,(void*)0,&g_398,(void*)0,(void*)0,&g_398,(void*)0},{(void*)0,&g_398,(void*)0,(void*)0,&g_398,(void*)0,(void*)0,&g_398,(void*)0},{(void*)0,&g_398,(void*)0,(void*)0,&g_398,(void*)0,(void*)0,&g_398,(void*)0},{(void*)0,&g_398,(void*)0,(void*)0,&g_398,(void*)0,(void*)0,&g_398,(void*)0}};
        uint32_t l_1610 = 0xF0BFFF6BL;
        int16_t *l_1640 = &g_159;
        int16_t ** const l_1639 = &l_1640;
        const int64_t l_1644 = 1L;
        int32_t l_1660[4] = {1L,1L,1L,1L};
        int16_t l_1674 = 1L;
        uint8_t *l_1684 = &l_1669[2];
        uint8_t *l_1685 = &g_195;
        const uint32_t l_1686 = 18446744073709551608UL;
        uint32_t l_1692 = 0x6E0C4257L;
        uint8_t *l_1693 = (void*)0;
        uint8_t *l_1694 = &g_925[0][4][0];
        int i, j;
        if ((l_1378[0][0][0] = ((g_1374 = &l_1370) != (p_48 , ((*l_1376) = l_1375)))))
        {
            const uint16_t ***l_1379 = (void*)0;
            const uint16_t ***l_1380 = (void*)0;
            const uint16_t *l_1383[2];
            const uint16_t **l_1382 = &l_1383[1];
            const uint16_t ***l_1381 = &l_1382;
            uint8_t *l_1385 = (void*)0;
            uint8_t *l_1386 = &g_44;
            int i;
            for (i = 0; i < 2; i++)
                l_1383[i] = &g_63;
            (*l_1381) = (*g_144);
            (*g_1280) = (((!g_67) ^ ((*l_1386) = p_48)) , (***g_1374));
        }
        else
        {
            (**g_1279) = (***l_1375);
        }
        for (g_159 = 17; (g_159 == (-1)); g_159--)
        {
            int32_t l_1391 = (-1L);
            int32_t l_1392 = 0xA913C479L;
            uint8_t *l_1397 = &g_845;
            uint8_t **l_1396 = &l_1397;
            int32_t **l_1422 = &g_345[2][1][1];
            int32_t l_1457 = 0x899C0E76L;
            int16_t l_1506 = (-10L);
            int32_t l_1527 = 0L;
            int32_t l_1529 = 9L;
            int32_t l_1530 = (-3L);
            int32_t l_1531 = 0xE0E56F11L;
            int32_t l_1532 = 0x6A53D7E3L;
            int8_t ***l_1548 = &g_1010;
            uint16_t * const *l_1553[4][3] = {{&l_1372,&l_1372,&l_1372},{(void*)0,(void*)0,(void*)0},{&l_1372,&l_1372,&l_1372},{(void*)0,(void*)0,(void*)0}};
            uint16_t * const **l_1552 = &l_1553[0][1];
            int8_t * const l_1587 = &g_1588;
            int8_t * const *l_1586 = &l_1587;
            int8_t * const ** const l_1585[2] = {&l_1586,&l_1586};
            int8_t * const ** const *l_1584 = &l_1585[1];
            uint32_t l_1635 = 8UL;
            int16_t ** const l_1641 = (void*)0;
            int8_t l_1662 = 0x60L;
            int8_t l_1663 = 0xE1L;
            uint8_t l_1664[3][6][3] = {{{2UL,0xC3L,255UL},{0UL,0UL,1UL},{1UL,0xC3L,0xC3L},{1UL,0x62L,6UL},{1UL,0xC6L,1UL},{0UL,1UL,6UL}},{{2UL,2UL,0xC3L},{0x0DL,1UL,1UL},{0xC3L,0xC6L,255UL},{0x0DL,0x62L,0x0DL},{2UL,0xC3L,255UL},{0UL,0UL,1UL}},{{1UL,0xC3L,0xC3L},{1UL,0x62L,0x62L},{255UL,2UL,255UL},{1UL,0x0DL,0x62L},{0xC3L,0xC3L,1UL},{6UL,0x0DL,0x0DL}}};
            int i, j, k;
            l_1390 = l_1389;
            g_1393[1][1][6]--;
        }
        l_1669[2] = (safe_lshift_func_uint16_t_u_u(((l_1667[4][4][0] = &l_1375) != (l_1668[5][0][1] = &g_1374)), 13));
        g_1695 = (safe_sub_func_uint16_t_u_u((((*l_1694) &= (((safe_sub_func_uint64_t_u_u((l_1674 ^ (+(((safe_add_func_uint32_t_u_u(((safe_div_func_int8_t_s_s(((((((((l_1691 = (safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(((((*l_1685) = (p_48 , ((*l_1684) = p_48))) , (g_1021 | l_1686)) , (g_749[8][2] < 0xC2B768100ADD6C70LL)), (safe_mod_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(p_48, (65535UL && (*g_62)))) > 4294967289UL), p_48)))), p_48))) , (*l_1376)) != (void*)0) , p_48) & 0x82FEA4CAL) || p_48) , (-1L)) < p_48), p_48)) & l_1692), p_48)) , p_48) != p_48))), g_923)) != 0x5C7BL) < 0xD6C0L)) >= p_48), g_453[2][0][3]));
    }
    else
    {
        uint64_t *****l_1698 = (void*)0;
        int32_t l_1703 = 5L;
        int32_t l_1704 = (-9L);
        int32_t l_1711 = 0L;
        const uint32_t *l_1731 = &g_453[2][2][0];
        uint32_t l_1742[4][5] = {{4294967295UL,4294967288UL,0x4C8425A7L,0x4C8425A7L,4294967288UL},{0x9C33E991L,4294967295UL,0x4C8425A7L,4294967293UL,4294967293UL},{4294967295UL,0x9C33E991L,4294967295UL,0x4C8425A7L,4294967293UL},{4294967288UL,4294967295UL,4294967293UL,4294967295UL,4294967288UL}};
        int32_t l_1748 = 0x1203407EL;
        int32_t l_1750 = (-3L);
        int32_t l_1752 = 0xB038E944L;
        int32_t l_1756 = (-1L);
        int32_t l_1759[5][2] = {{0xDC4EA8E5L,0xDC4EA8E5L},{0xDC4EA8E5L,0xDC4EA8E5L},{0xDC4EA8E5L,0xDC4EA8E5L},{0xDC4EA8E5L,0xDC4EA8E5L},{0xDC4EA8E5L,0xDC4EA8E5L}};
        int8_t l_1805 = 0x64L;
        uint8_t *l_1814[4][9] = {{&g_1695,&g_194,&g_925[0][4][0],&g_925[0][4][0],&g_194,&g_1695,&g_194,&g_194,&g_194},{&g_845,&l_1811,&l_1669[2],&l_1669[2],&l_1811,&g_845,&g_925[2][2][0],&l_1811,&g_925[2][2][0]},{&g_1695,&g_194,&g_925[0][4][0],&g_925[0][4][0],&g_194,&g_1695,&g_194,&g_194,&g_194},{&g_845,&l_1811,&l_1669[2],&l_1669[2],&l_1811,&g_845,&g_925[2][2][0],&l_1811,&g_925[2][2][0]}};
        int32_t l_1848 = 1L;
        uint64_t *l_1849 = &l_1462;
        int16_t l_1850 = 0x36F0L;
        int i, j;
        if (((0xE08CL && ((*g_62) = (((p_48 , ((safe_rshift_func_uint16_t_u_u(0UL, ((l_1704 = ((l_1698 != l_1699) , (l_1703 = p_48))) , (safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(l_1703, ((l_1704 , ((safe_mul_func_uint16_t_u_u(65535UL, g_6)) , g_925[0][2][0])) && p_48))), (**g_1145)))))) & (*g_62))) < p_48) < l_1711))) >= g_129))
        {
            const int32_t *l_1712 = &g_55;
            const int32_t **l_1713[2][2][10];
            int32_t l_1715 = 0x91C63EF4L;
            int32_t l_1745 = 1L;
            int32_t l_1746 = 0xFB96E5D9L;
            int32_t l_1747 = 6L;
            int32_t l_1749 = 0xC082AAAAL;
            int32_t l_1751 = 0xD37E9979L;
            int32_t l_1753 = 0x3FE0E73CL;
            int32_t l_1755 = (-3L);
            int32_t l_1757 = 0x9CEF502CL;
            int32_t l_1758[1][10][3] = {{{(-9L),(-1L),(-1L)},{(-9L),(-9L),(-1L)},{3L,(-1L),(-1L)},{(-1L),1L,(-1L)},{3L,1L,3L},{(-9L),(-1L),(-1L)},{(-9L),(-9L),(-1L)},{3L,(-1L),(-1L)},{(-1L),1L,(-1L)},{3L,1L,3L}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 10; k++)
                        l_1713[i][j][k] = &l_1712;
                }
            }
            l_1714 = l_1712;
            if ((l_1715 &= 3L))
            {
                (**l_1370) = (**g_1279);
            }
            else
            {
                uint32_t l_1723 = 1UL;
                const uint32_t **l_1732 = &l_1731;
                const uint32_t **l_1733 = (void*)0;
                const uint32_t **l_1734 = (void*)0;
                const uint32_t *l_1736 = (void*)0;
                const uint32_t **l_1735 = &l_1736;
                uint32_t l_1741 = 0x111CCCA0L;
                uint32_t *l_1743 = &g_1349;
                l_1744 = (((safe_sub_func_uint32_t_u_u(((*l_1743) &= ((safe_div_func_uint32_t_u_u((+(l_1704 = (safe_rshift_func_uint16_t_u_u((((l_1711 = l_1723) || (((safe_mul_func_uint16_t_u_u(((((+l_1703) , ((safe_div_func_int64_t_s_s(l_1703, l_1723)) , ((*l_1735) = ((safe_sub_func_int64_t_s_s(((void*)0 != &g_453[4][4][1]), 0xCF2F94AC0824E1F2LL)) , ((*l_1732) = l_1731))))) == ((safe_lshift_func_uint16_t_u_s(((*g_62) &= (safe_mod_func_uint8_t_u_u(l_1741, p_48))), 14)) , &p_48)) , 1UL), g_6)) <= l_1741) && l_1742[3][0])) != p_48), l_1704)))), g_21)) || l_1742[3][0])), (-8L))) ^ p_48) <= 7UL);
                return p_48;
            }
            l_1761++;
        }
        else
        {
            int32_t l_1766 = 0xBABE3CFAL;
            const uint16_t l_1794 = 0x3E94L;
            int32_t l_1798 = 0xBB93F54BL;
            int32_t l_1804 = 0x83978545L;
            int32_t l_1806 = 1L;
            int32_t l_1807 = 0xB0A85355L;
            int32_t l_1808[4] = {0x670B271BL,0x670B271BL,0x670B271BL,0x670B271BL};
            int16_t l_1809 = 0xB467L;
            int i;
            for (g_44 = (-12); (g_44 == 20); g_44 = safe_add_func_int16_t_s_s(g_44, 9))
            {
                int64_t l_1776 = 0xC081BF17A51D1DE8LL;
                int32_t l_1777 = 0x760EA029L;
                uint32_t *l_1786 = &l_1614[6][0];
                int16_t *l_1787 = (void*)0;
                int16_t *l_1788 = (void*)0;
                int16_t *l_1789 = &l_1754[3][1][3];
                uint16_t *l_1795 = &l_1744;
                int32_t *** const *l_1797 = &l_1370;
                int32_t *** const **l_1796 = &l_1797;
                (***g_1374) = &l_1704;
                l_1766 = (*l_1714);
                l_1798 ^= ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(0xC9241035L, (((~((((l_1759[3][0] = (l_1777 = l_1776)) <= (safe_add_func_int8_t_s_s((((1UL | (251UL && (p_48 ^ ((*l_1795) = ((safe_lshift_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u(((*l_1789) |= (safe_sub_func_uint32_t_u_u(((*l_1786) = l_1776), g_159))), ((safe_rshift_func_int16_t_s_s((l_1756 && (safe_lshift_func_uint8_t_u_s((((*g_62) = l_1776) == l_1766), 6))), p_48)) == p_48))) >= p_48) && l_1794), 5)) , 1UL))))) && 0UL) == (**g_1145)), p_48))) && (-1L)) , p_48)) , &g_1374) != l_1796))), 6)), 7)), p_48)) >= (-1L));
                return p_48;
            }
            if ((safe_mod_func_uint16_t_u_u(l_1748, g_925[2][1][0])))
            {
                uint32_t l_1801 = 0xEFEE6727L;
                ++l_1801;
            }
            else
            {
                return p_48;
            }
            l_1811++;
        }
        if ((((--g_1695) , g_63) > p_48))
        {
            int32_t l_1817[5][10] = {{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L}};
            int32_t l_1818 = 0x47DB7397L;
            int i, j;
            (***l_1371) = (***g_1374);
            l_1756 = ((l_1711 , l_1817[0][4]) < 8L);
            l_1818 = (l_1752 = p_48);
        }
        else
        {
            return p_48;
        }
        l_1703 |= (((safe_rshift_func_uint16_t_u_u(65535UL, (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((void*)0 == &l_1441), (&g_1349 != (void*)0))), (((safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(1UL, (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((((l_1759[1][1] , (safe_sub_func_int64_t_s_s(((((*l_1849) = ((p_48 , ((((+((((safe_add_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((p_48 , 65535UL), g_67)), 3UL)) == l_1756), p_48)) , p_48) && 0x7BC1L) != p_48)) < p_48) , l_1848) , p_48)) <= 0xA5L)) <= g_1036) , 0L), 7UL))) | l_1756) != (*l_1714)) & 0UL), p_48)), p_48)), (*g_62))), (**g_1145))))), l_1850)), (-9L))) , p_48) > 0x61L))))) , l_1851) | 1UL);
    }
    return l_1852;
}







static const uint32_t func_49(int8_t p_50)
{
    int32_t l_1056 = 6L;
    int32_t * const *l_1070 = &g_345[3][2][1];
    int32_t * const **l_1069 = &l_1070;
    int16_t l_1085[4][1][8] = {{{1L,0x6DD2L,0x6DD2L,1L,1L,0x6DD2L,0x6DD2L,1L}},{{1L,0x6DD2L,0x6DD2L,1L,1L,0x6DD2L,0x6DD2L,1L}},{{1L,0x6DD2L,0x6DD2L,1L,1L,0x6DD2L,0x6DD2L,1L}},{{1L,0x6DD2L,0x6DD2L,1L,1L,0x6DD2L,0x6DD2L,1L}}};
    const int32_t *l_1118 = &g_126;
    const int32_t **l_1117 = &l_1118;
    const int32_t ***l_1116 = &l_1117;
    const int32_t ****l_1115[1][9][4] = {{{&l_1116,&l_1116,&l_1116,&l_1116},{&l_1116,&l_1116,&l_1116,&l_1116},{&l_1116,&l_1116,&l_1116,&l_1116},{&l_1116,&l_1116,&l_1116,&l_1116},{&l_1116,&l_1116,&l_1116,&l_1116},{&l_1116,&l_1116,&l_1116,&l_1116},{&l_1116,&l_1116,&l_1116,&l_1116},{&l_1116,&l_1116,&l_1116,&l_1116},{&l_1116,&l_1116,&l_1116,&l_1116}}};
    uint16_t **l_1133 = (void*)0;
    int32_t l_1147 = 0xBB43F08DL;
    int32_t l_1158[3];
    uint32_t l_1161 = 0x6516E880L;
    uint64_t * const *l_1170 = (void*)0;
    uint64_t * const **l_1169 = &l_1170;
    uint64_t * const ***l_1168 = &l_1169;
    int32_t l_1174 = 8L;
    uint16_t * const ** const *l_1233 = (void*)0;
    uint16_t * const ** const **l_1232 = &l_1233;
    int16_t l_1262 = 0xB7EDL;
    uint64_t ****l_1307 = (void*)0;
    uint64_t *****l_1306 = &l_1307;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1158[i] = 0xE19104A4L;
    for (g_44 = (-3); (g_44 >= 54); g_44 = safe_add_func_uint16_t_u_u(g_44, 2))
    {
        uint64_t l_1047 = 0xE1D2EEA81EB609ECLL;
        const uint16_t *l_1135[10][3] = {{&g_63,&g_63,&g_63},{(void*)0,&g_63,(void*)0},{&g_63,&g_63,&g_63},{(void*)0,&g_63,(void*)0},{&g_63,&g_63,&g_63},{(void*)0,&g_63,(void*)0},{&g_63,&g_63,&g_63},{(void*)0,&g_63,(void*)0},{&g_63,&g_63,&g_63},{(void*)0,&g_63,(void*)0}};
        const uint16_t **l_1134[6][8] = {{&l_1135[4][2],&l_1135[4][2],(void*)0,&l_1135[4][2],&l_1135[4][2],(void*)0,&l_1135[4][2],&l_1135[4][2]},{&l_1135[4][2],(void*)0,&l_1135[4][2],&l_1135[4][2],&l_1135[3][1],&l_1135[4][2],&l_1135[6][1],(void*)0},{&l_1135[4][2],&l_1135[3][0],&l_1135[9][1],&l_1135[6][1],&l_1135[4][2],&l_1135[4][2],(void*)0,&l_1135[4][2]},{&l_1135[4][2],(void*)0,&l_1135[4][2],&l_1135[1][1],&l_1135[4][2],(void*)0,&l_1135[4][2],&l_1135[4][2]},{&l_1135[4][2],&l_1135[4][2],&l_1135[4][2],&l_1135[4][2],(void*)0,&l_1135[3][1],&l_1135[9][1],&l_1135[3][1]},{&l_1135[3][1],&l_1135[9][1],&l_1135[4][2],(void*)0,(void*)0,&l_1135[4][2],&l_1135[1][1],&l_1135[1][1]}};
        int32_t ** const *l_1141 = (void*)0;
        int32_t l_1155[1][3][1];
        uint16_t l_1175 = 0x8657L;
        int64_t l_1255 = (-1L);
        int16_t l_1316 = 0x0393L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1155[i][j][k] = (-1L);
            }
        }
        for (p_50 = 0; (p_50 != 11); ++p_50)
        {
            int64_t l_1048 = 0x000B0902B84A8BDDLL;
            int32_t **l_1049 = &g_399[0][3];
            for (g_55 = 0; (g_55 >= 26); ++g_55)
            {
                uint64_t *l_66[1];
                int8_t *l_1050[8] = {(void*)0,&g_1051,&g_1051,(void*)0,&g_1051,&g_1051,(void*)0,&g_1051};
                int32_t l_1052[5];
                int32_t *l_1055 = &g_131;
                int i;
                for (i = 0; i < 1; i++)
                    l_66[i] = &g_67;
                for (i = 0; i < 5; i++)
                    l_1052[i] = (-1L);
            }
        }
        if ((l_1056 = 0xF4AA07EAL))
        {
            uint16_t l_1102[2];
            int32_t ****l_1114[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_1128 = (-1L);
            int32_t l_1132 = 1L;
            int8_t l_1137[8][4] = {{4L,0x59L,0xF0L,0x59L},{4L,(-6L),6L,0x59L},{6L,0x59L,6L,(-6L)},{4L,0x59L,0xF0L,0x59L},{4L,(-6L),6L,0x59L},{6L,0x59L,6L,(-6L)},{4L,0x59L,0xF0L,0x59L},{4L,(-6L),6L,0x59L}};
            int32_t l_1157 = 0x6403DEC7L;
            int32_t l_1159 = 0x80D88442L;
            int32_t l_1160[5] = {7L,7L,7L,7L,7L};
            int32_t *l_1173[10][6] = {{&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1]},{&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1]},{&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1]},{&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1]},{&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1]},{&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1]},{&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1]},{&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1]},{&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1]},{&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1],&l_1158[1]}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_1102[i] = 0x9855L;
            for (g_126 = 0; (g_126 < (-24)); g_126 = safe_sub_func_int64_t_s_s(g_126, 1))
            {
                for (g_574 = 11; (g_574 >= 21); ++g_574)
                {
                    int32_t **l_1061 = &g_345[7][2][3];
                    (*l_1061) = &g_129;
                }
            }
            if (l_1047)
                break;
            if (p_50)
            {
                uint32_t l_1064 = 4294967287UL;
                int32_t * const *l_1068[7][3] = {{&g_345[3][2][1],&g_345[3][2][1],&g_345[3][2][1]},{&g_345[3][2][1],&g_345[9][0][3],&g_345[3][2][1]},{&g_345[3][2][1],&g_345[3][2][1],&g_345[3][2][1]},{&g_345[3][2][1],&g_345[9][0][3],&g_345[3][2][1]},{&g_345[3][2][1],&g_345[3][2][1],&g_345[3][2][1]},{&g_345[3][2][1],&g_345[9][0][3],&g_345[3][2][1]},{&g_345[3][2][1],&g_345[3][2][1],&g_345[3][2][1]}};
                int32_t * const **l_1067 = &l_1068[0][2];
                int i, j;
                for (g_67 = 0; (g_67 <= 1); g_67 += 1)
                {
                    for (g_1036 = 0; (g_1036 <= 3); g_1036 += 1)
                    {
                        int32_t **l_1062 = &g_345[3][2][1];
                        int32_t *l_1063[5][1] = {{&g_55},{&g_55},{&g_55},{&g_55},{&g_55}};
                        int i, j, k;
                        (*l_1062) = &g_131;
                        l_1064 |= g_453[(g_1036 + 3)][g_1036][g_1036];
                        if (p_50)
                            continue;
                    }
                }
                for (g_131 = 0; g_131 < 9; g_131 += 1)
                {
                    for (g_67 = 0; g_67 < 2; g_67 += 1)
                    {
                        g_427[g_131][g_67] = &g_428;
                    }
                }
                if (p_50)
                    break;
                for (g_574 = 16; (g_574 > 24); ++g_574)
                {
                    int8_t l_1096 = 0x9AL;
                    int32_t l_1101 = 0xFFBC4F83L;
                    l_1069 = l_1067;
                    for (g_845 = 0; (g_845 <= 4); g_845 += 1)
                    {
                        int8_t *l_1088 = &g_157;
                        int32_t l_1100[1][1][1];
                        int32_t l_1119[2][3] = {{8L,8L,8L},{(-1L),(-1L),(-1L)}};
                        int32_t l_1120 = 2L;
                        int16_t *l_1121 = (void*)0;
                        int16_t *l_1122 = &g_159;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_1100[i][j][k] = 0xA9373ECDL;
                            }
                        }
                        l_1102[0] = (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int8_t_s((((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((((safe_add_func_int8_t_s_s((((((~((safe_lshift_func_int8_t_s_s((p_50 || (safe_lshift_func_int8_t_s_u(l_1085[1][0][2], 1))), (safe_mul_func_uint16_t_u_u((((*l_1088) = p_50) == (((safe_div_func_uint16_t_u_u((((+(safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(g_630[3][3][3], ((l_1096 = 1L) >= 0xCCCB69C2L))), (-1L)))) , (((safe_add_func_int8_t_s_s((p_50 < (p_50 && g_1036)), g_925[3][4][0])) , g_200[1][0]) && (*g_62))) & 1L), g_1099)) <= p_50) != 0UL)), g_158)))) ^ l_1100[0][0][0])) && p_50) <= l_1101) >= p_50) || p_50), p_50)) == p_50) , g_1018), l_1101)), 10)) != p_50) ^ g_158))), g_1099));
                        if (p_50)
                            continue;
                        if (p_50)
                            break;
                        l_1100[0][0][0] = (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(g_129, (((((*l_1122) &= (safe_sub_func_uint8_t_u_u((p_50 | (((g_1111 | (l_1120 ^= (l_1119[1][2] |= ((g_636 == (((((l_1100[0][0][0] , (l_1114[0] != l_1115[0][4][3])) < (g_749[g_845][g_845] = (0x80D9C2F167E4BB05LL != 0x5438C5DA1C517587LL))) , 0x19L) < l_1047) == 0UL)) <= p_50)))) ^ p_50) | p_50)), 0x7BL))) | p_50) , 0x06L) , p_50))), 5)), 4UL));
                    }
                }
            }
            else
            {
                int32_t *l_1131 = (void*)0;
                int16_t *l_1136 = &g_1099;
                int8_t ***l_1138[3][4][7] = {{{&g_1010,&g_1010,&g_1010,&g_1010,&g_1010,(void*)0,&g_1010},{(void*)0,(void*)0,&g_1010,&g_1010,&g_1010,(void*)0,(void*)0},{&g_1010,&g_1010,&g_1010,&g_1010,&g_1010,&g_1010,&g_1010},{&g_1010,&g_1010,&g_1010,(void*)0,&g_1010,&g_1010,(void*)0}},{{&g_1010,&g_1010,&g_1010,&g_1010,&g_1010,&g_1010,&g_1010},{&g_1010,(void*)0,&g_1010,&g_1010,&g_1010,&g_1010,&g_1010},{&g_1010,&g_1010,&g_1010,&g_1010,&g_1010,&g_1010,(void*)0},{&g_1010,(void*)0,&g_1010,(void*)0,&g_1010,(void*)0,&g_1010}},{{&g_1010,&g_1010,(void*)0,&g_1010,&g_1010,(void*)0,&g_1010},{&g_1010,&g_1010,&g_1010,&g_1010,&g_1010,(void*)0,&g_1010},{&g_1010,&g_1010,&g_1010,(void*)0,&g_1010,&g_1010,&g_1010},{&g_1010,(void*)0,&g_1010,&g_1010,&g_1010,(void*)0,&g_1010}}};
                int8_t *** const l_1140 = (void*)0;
                int32_t l_1156[2][4][1];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1156[i][j][k] = 0L;
                    }
                }
                if ((((((safe_rshift_func_int8_t_s_s((&g_205 != (void*)0), 2)) , (p_50 == (!((l_1102[1] , ((l_1128 | (!((safe_unary_minus_func_int32_t_s((l_1132 = p_50))) && ((*l_1136) = (((p_50 , l_1133) == l_1134[5][7]) >= l_1132))))) > 0xDD1B40CA68F854D3LL)) & p_50)))) , g_44) | p_50) , l_1137[7][0]))
                {
                    int32_t *l_1153 = &l_1147;
                    int32_t *l_1154[1][10][4] = {{{(void*)0,&g_162,&g_129,&g_6},{&l_1132,&g_129,&g_129,&l_1132},{(void*)0,(void*)0,(void*)0,&l_1147},{&l_1147,&g_6,&l_1147,&g_131},{&l_1147,&g_131,&g_162,&g_131},{&g_129,&g_6,&g_162,&l_1147},{&l_1147,(void*)0,&g_131,&l_1132},{&g_162,&g_129,&g_6,&g_6},{&g_162,&g_131,&l_1147,(void*)0},{&l_1147,&g_129,&g_131,&g_6}}};
                    int i, j, k;
                    for (g_574 = 0; (g_574 <= 3); g_574 += 1)
                    {
                        int8_t ****l_1139 = &l_1138[0][1][2];
                        const uint8_t ***l_1143 = (void*)0;
                        const uint8_t ***l_1144[3];
                        int32_t **l_1148 = &g_345[0][2][0];
                        int32_t **l_1149 = (void*)0;
                        int32_t **l_1150 = (void*)0;
                        int32_t **l_1151[1][10] = {{&l_1131,&l_1131,&l_1131,&l_1131,&l_1131,&l_1131,&l_1131,&l_1131,&l_1131,&l_1131}};
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_1144[i] = (void*)0;
                        if (g_510[(g_574 + 2)][g_574])
                            break;
                        g_1152 = ((*l_1148) = (((4294967291UL && (((*l_1139) = l_1138[0][3][4]) == l_1140)) && (((g_159 <= ((p_50 , l_1141) != ((((g_1142 = g_1142) != g_1145) , (p_50 == l_1147)) , l_1141))) | g_510[(g_574 + 2)][g_574]) < 18446744073709551613UL)) , &g_55));
                    }
                    l_1161--;
                }
                else
                {
                    uint8_t *l_1165 = &g_845;
                    int32_t l_1171 = (-10L);
                    int32_t *l_1172 = &l_1147;
                    (*l_1172) |= ((((((((g_1164 , (g_749[5][0] != g_510[2][8])) >= 0x36AC357AL) > (((*l_1165) ^= 0x16L) > ((safe_add_func_int64_t_s_s(l_1155[0][0][0], (l_1168 != (p_50 , &g_325)))) || l_1171))) | p_50) || 0xC05FL) ^ g_630[0][3][0]) ^ p_50) || p_50);
                }
            }
            l_1175--;
        }
        else
        {
            int32_t l_1188 = 0x79982E5BL;
            uint64_t *l_1197 = &l_1047;
            int32_t l_1203 = 0xA26AB38DL;
            int32_t l_1214 = 0x3D6F3D66L;
            int32_t l_1215 = (-1L);
            int32_t l_1253 = (-2L);
            int32_t l_1254 = 0x133FCADEL;
            int32_t l_1256 = 6L;
            int32_t l_1257 = 0xBB5B1AB9L;
            int32_t l_1258 = 9L;
            int32_t l_1259 = (-1L);
            int32_t l_1261[1];
            int32_t **l_1278 = &g_345[3][2][1];
            int32_t ***l_1277 = &l_1278;
            uint64_t ****l_1305 = &g_325;
            uint64_t *****l_1304 = &l_1305;
            uint8_t l_1318 = 1UL;
            int i;
            for (i = 0; i < 1; i++)
                l_1261[i] = 5L;
            for (g_55 = (-18); (g_55 > (-13)); g_55 = safe_add_func_uint32_t_u_u(g_55, 2))
            {
                int8_t l_1184[3];
                int32_t *l_1185 = &l_1155[0][0][0];
                int i;
                for (i = 0; i < 3; i++)
                    l_1184[i] = (-1L);
                (*l_1185) = ((safe_lshift_func_uint16_t_u_u(((*g_62) = ((((1UL || (((0xB581E071L | p_50) != ((safe_add_func_uint8_t_u_u((&p_50 != (void*)0), (g_574 <= 7L))) ^ p_50)) < (l_1184[2] , g_200[0][1]))) , 7UL) != p_50) , l_1184[2])), p_50)) == g_904);
            }
            if (((safe_add_func_uint8_t_u_u((l_1188 <= p_50), (p_50 < ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((**g_1145), (((*g_62) , (safe_rshift_func_uint16_t_u_s((0x359BL | (((((safe_sub_func_uint8_t_u_u((((l_1155[0][0][0] >= ((*l_1197) = (((0xF5A21E1FFDEC3C2DLL | ((g_194 | p_50) , p_50)) < 0xBFF166C2CE2CF7D6LL) , l_1047))) , 0UL) && 0x2D001B7436603300LL), l_1188)) <= p_50) & p_50) , 0xB734612F084071DELL) && 0xC83AB89F41BC8C77LL)), 9))) > p_50))), 3UL)) <= 18446744073709551613UL)))) > l_1175))
            {
                int64_t l_1213 = 0x5DC5E7F36B475B5ALL;
                int32_t *l_1243 = &l_1214;
                int32_t *l_1244 = &g_131;
                int32_t *l_1245 = (void*)0;
                int32_t *l_1246 = &l_1215;
                int32_t *l_1247 = (void*)0;
                int32_t *l_1248 = &l_1158[2];
                int32_t *l_1249 = &l_1174;
                int32_t *l_1250 = &l_1203;
                int32_t *l_1251 = &l_1203;
                int32_t *l_1252[10] = {&l_1155[0][0][0],&g_131,(void*)0,&g_131,&l_1155[0][0][0],&l_1155[0][0][0],&g_131,(void*)0,&g_131,&l_1155[0][0][0]};
                int32_t l_1260 = 0x87A66A7BL;
                uint32_t l_1263[6] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
                int i;
                for (g_126 = 23; (g_126 >= (-10)); g_126--)
                {
                    uint16_t l_1216[5][4][8] = {{{0x70A7L,0xB8D7L,0UL,0xD185L,0UL,0xB8D7L,0x70A7L,65530UL},{0xB8D7L,0x385EL,65535UL,7UL,0xC96EL,0xD185L,0xD185L,0xC96EL},{0x259BL,0x70A7L,0x70A7L,0x259BL,0xC96EL,0xACB8L,65530UL,0xD185L},{0xB8D7L,0xDB73L,0x4173L,0xC96EL,0UL,0xC96EL,0x4173L,0xDB73L}},{{0x70A7L,0xDB73L,0xD185L,0x4173L,65535UL,0xACB8L,7UL,7UL},{0xD185L,0x70A7L,0x385EL,0x385EL,0x70A7L,0xD185L,7UL,0UL},{65530UL,0x385EL,0xD185L,0xACB8L,0x4173L,0xB8D7L,0x4173L,0xACB8L},{0x4173L,0xB8D7L,0x4173L,0xACB8L,0xD185L,0x385EL,65530UL,0UL}},{{7UL,0xD185L,0x70A7L,0x385EL,0x385EL,0x70A7L,0xD185L,7UL},{7UL,0xACB8L,65535UL,0x4173L,0xD185L,0xDB73L,0x70A7L,0xDB73L},{0x4173L,0xC96EL,0UL,0xC96EL,0x4173L,0xDB73L,0xB8D7L,0xD185L},{65530UL,0xACB8L,0xC96EL,0x259BL,0x70A7L,0x70A7L,0x259BL,0xC96EL}},{{0xD185L,0xD185L,0xC96EL,7UL,65535UL,0x385EL,0xB8D7L,65530UL},{0x70A7L,0xB8D7L,0UL,0xD185L,0UL,0xB8D7L,0x70A7L,65530UL},{0xB8D7L,0x385EL,65535UL,7UL,0xC96EL,0xD185L,0xD185L,0xC96EL},{0x259BL,0x70A7L,0x70A7L,0x259BL,0xC96EL,0xACB8L,65530UL,0xD185L}},{{0xB8D7L,0xDB73L,0x4173L,0xC96EL,0UL,0xC96EL,0x4173L,0xDB73L},{0x70A7L,0xDB73L,0xD185L,0x4173L,65535UL,0xACB8L,7UL,7UL},{0xD185L,0x70A7L,0x385EL,0x385EL,0x70A7L,0xD185L,7UL,0UL},{65530UL,0x385EL,0xD185L,0xACB8L,0x4173L,7UL,0x385EL,0xDB73L}}};
                    int i, j, k;
                    for (g_845 = 26; (g_845 != 6); g_845 = safe_sub_func_uint64_t_u_u(g_845, 1))
                    {
                        int32_t *l_1202 = &l_1174;
                        int32_t *l_1204 = &l_1147;
                        int32_t *l_1205 = &l_1203;
                        int32_t *l_1206 = (void*)0;
                        int32_t *l_1207 = (void*)0;
                        int32_t *l_1208 = &l_1155[0][0][0];
                        int32_t *l_1209 = &g_131;
                        int32_t *l_1210 = &l_1174;
                        int32_t *l_1211 = &l_1147;
                        int32_t *l_1212[8] = {(void*)0,&l_1203,&l_1203,(void*)0,&l_1203,&l_1203,(void*)0,&l_1203};
                        int i;
                        --l_1216[1][2][0];
                    }
                }
                for (p_50 = 0; (p_50 == (-17)); p_50 = safe_sub_func_int32_t_s_s(p_50, 7))
                {
                    int8_t l_1223 = 1L;
                    int8_t *l_1242 = &g_200[1][1];
                    for (g_63 = 0; (g_63 == 55); g_63++)
                    {
                        int32_t *l_1224 = &g_162;
                        (*l_1224) = l_1223;
                    }
                    l_1174 ^= ((((((safe_mul_func_int16_t_s_s((p_50 == ((9UL >= (p_50 != ((*g_62) = ((!((void*)0 == &g_1164)) >= g_510[2][8])))) <= ((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((void*)0 != l_1232), (safe_mul_func_int8_t_s_s((((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((*l_1242) = ((safe_mul_func_int8_t_s_s(0x4EL, (**g_1145))) & l_1188)), 7)), g_1036)) == l_1223) && l_1203), 2L)))), p_50)) <= 0xEFAFL))), g_453[2][2][0])) , g_162) , &g_162) != &g_162) > 4294967288UL) < p_50);
                }
                l_1263[5]++;
            }
            else
            {
                int32_t *l_1268 = &l_1158[1];
                uint32_t l_1319[5][5] = {{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL},{0x2E26B1C2L,0x9F3ED093L,0x2E26B1C2L,0x9F3ED093L,0x2E26B1C2L},{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL},{0x2E26B1C2L,0x9F3ED093L,0x2E26B1C2L,0x9F3ED093L,0x2E26B1C2L},{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL}};
                int32_t *l_1346 = &l_1253;
                int32_t *l_1347 = &l_1174;
                int32_t *l_1348[8] = {&l_1257,(void*)0,(void*)0,&l_1257,(void*)0,(void*)0,&l_1257,(void*)0};
                int i, j;
                for (l_1215 = (-29); (l_1215 != (-27)); ++l_1215)
                {
                    l_1174 ^= (p_50 , 0xD0CC00FDL);
                    l_1268 = l_1268;
                    if ((*l_1268))
                        continue;
                    if ((*l_1268))
                        continue;
                }
                for (g_1021 = 0; (g_1021 >= 11); ++g_1021)
                {
                    int32_t l_1283 = (-1L);
                    uint32_t l_1288 = 0x56AFD890L;
                    int64_t l_1289[8][7][4] = {{{(-8L),0xD4EA12969F0DCA3DLL,(-1L),0L},{0xE113882DF86C5C2BLL,0x7D50F1A471218D43LL,0xBE6486561FFF0D1FLL,(-10L)},{(-1L),0x3FED51B72C53B1EBLL,(-7L),3L},{(-1L),8L,0xBE6486561FFF0D1FLL,0xD052B12C64D5DB6DLL},{0xE113882DF86C5C2BLL,3L,(-1L),0x7D50F1A471218D43LL},{(-8L),1L,8L,8L},{0x1336A4630965F1ECLL,1L,0x1336A4630965F1ECLL,0x7D50F1A471218D43LL}},{{0L,3L,0x5A3E67FC6839F649LL,0xD052B12C64D5DB6DLL},{0x25CE7411B9EC4EBALL,8L,(-8L),3L},{0x38CAE620053296D0LL,0x3FED51B72C53B1EBLL,(-8L),(-10L)},{0x25CE7411B9EC4EBALL,0x7D50F1A471218D43LL,0x5A3E67FC6839F649LL,0L},{0L,0xD4EA12969F0DCA3DLL,0x1336A4630965F1ECLL,0x0DFE01859F54EDA0LL},{0x1336A4630965F1ECLL,0x0DFE01859F54EDA0LL,8L,0x0DFE01859F54EDA0LL},{(-8L),0xD4EA12969F0DCA3DLL,(-1L),0L}},{{0xE113882DF86C5C2BLL,0x7D50F1A471218D43LL,0xBE6486561FFF0D1FLL,(-10L)},{(-1L),0x3FED51B72C53B1EBLL,(-7L),3L},{(-1L),8L,0xBE6486561FFF0D1FLL,0xD052B12C64D5DB6DLL},{0xE113882DF86C5C2BLL,3L,(-1L),0x7D50F1A471218D43LL},{(-8L),1L,8L,8L},{0x1336A4630965F1ECLL,1L,0x1336A4630965F1ECLL,0x7D50F1A471218D43LL},{0L,3L,0x5A3E67FC6839F649LL,0xD052B12C64D5DB6DLL}},{{0x25CE7411B9EC4EBALL,8L,(-8L),3L},{0x38CAE620053296D0LL,0x3FED51B72C53B1EBLL,(-8L),(-10L)},{0x25CE7411B9EC4EBALL,0x7D50F1A471218D43LL,0x5A3E67FC6839F649LL,0L},{0L,0xD4EA12969F0DCA3DLL,0x1336A4630965F1ECLL,0x0DFE01859F54EDA0LL},{0x1336A4630965F1ECLL,0x0DFE01859F54EDA0LL,8L,0x0DFE01859F54EDA0LL},{(-8L),0xD4EA12969F0DCA3DLL,(-1L),0L},{0xE113882DF86C5C2BLL,0x7D50F1A471218D43LL,0xBE6486561FFF0D1FLL,(-10L)}},{{(-1L),0x3FED51B72C53B1EBLL,(-7L),3L},{(-1L),8L,0xBE6486561FFF0D1FLL,0xD052B12C64D5DB6DLL},{0xE113882DF86C5C2BLL,3L,(-1L),0x7D50F1A471218D43LL},{(-8L),1L,8L,8L},{0x1336A4630965F1ECLL,1L,0x1336A4630965F1ECLL,0x7D50F1A471218D43LL},{0L,3L,0x5A3E67FC6839F649LL,0xD052B12C64D5DB6DLL},{0x25CE7411B9EC4EBALL,8L,(-8L),3L}},{{0x38CAE620053296D0LL,0x3FED51B72C53B1EBLL,(-8L),(-10L)},{0x25CE7411B9EC4EBALL,0x7D50F1A471218D43LL,0x5A3E67FC6839F649LL,3L},{0x25CE7411B9EC4EBALL,0xCB25D62235F5D2EALL,(-7L),1L},{(-7L),1L,0xE113882DF86C5C2BLL,1L},{0x38CAE620053296D0LL,0xCB25D62235F5D2EALL,0xBE6486561FFF0D1FLL,3L},{0x1336A4630965F1ECLL,0xD4EA12969F0DCA3DLL,0L,8L},{0xBE6486561FFF0D1FLL,(-10L),(-8L),0x3FED51B72C53B1EBLL}},{{0xBE6486561FFF0D1FLL,0x0DFE01859F54EDA0LL,0L,0x7D50F1A471218D43LL},{0x1336A4630965F1ECLL,0x3FED51B72C53B1EBLL,0xBE6486561FFF0D1FLL,0xD4EA12969F0DCA3DLL},{0x38CAE620053296D0LL,0xD052B12C64D5DB6DLL,0xE113882DF86C5C2BLL,0x0DFE01859F54EDA0LL},{(-7L),0xD052B12C64D5DB6DLL,(-7L),0xD4EA12969F0DCA3DLL},{0x25CE7411B9EC4EBALL,0x3FED51B72C53B1EBLL,8L,0x7D50F1A471218D43LL},{1L,0x0DFE01859F54EDA0LL,0x38CAE620053296D0LL,0x3FED51B72C53B1EBLL},{(-1L),(-10L),0x38CAE620053296D0LL,8L}},{{1L,0xD4EA12969F0DCA3DLL,8L,3L},{0x25CE7411B9EC4EBALL,0xCB25D62235F5D2EALL,(-7L),1L},{(-7L),1L,0xE113882DF86C5C2BLL,1L},{0x38CAE620053296D0LL,0xCB25D62235F5D2EALL,0xBE6486561FFF0D1FLL,3L},{0x1336A4630965F1ECLL,0xD4EA12969F0DCA3DLL,0L,8L},{0xBE6486561FFF0D1FLL,(-10L),(-8L),0x3FED51B72C53B1EBLL},{0xBE6486561FFF0D1FLL,0x0DFE01859F54EDA0LL,0L,0x7D50F1A471218D43LL}}};
                    uint16_t l_1290[1][7][2] = {{{2UL,65535UL},{0xF46DL,0xF46DL},{65535UL,2UL},{65535UL,2UL},{65535UL,0xF46DL},{0xF46DL,65535UL},{2UL,65535UL}}};
                    int32_t l_1291[9][10][2] = {{{9L,0xE3715912L},{0x4A0D3EF1L,(-6L)},{0L,0xE8D66D3CL},{(-1L),0x687B7F46L},{(-1L),0xE8D66D3CL},{0L,(-6L)},{0x4A0D3EF1L,0xE3715912L},{9L,0x0512D532L},{0L,1L},{0x6B2E61A6L,0x3A62E170L}},{{0L,0x3987F8C4L},{0x6C6A464FL,0L},{4L,0L},{0x6C6A464FL,0x3987F8C4L},{0L,0x3A62E170L},{0x6B2E61A6L,1L},{0L,0x0512D532L},{9L,0xE3715912L},{0x4A0D3EF1L,(-6L)},{0L,0xE8D66D3CL}},{{(-1L),0x687B7F46L},{(-1L),0xE8D66D3CL},{0L,(-6L)},{0x4A0D3EF1L,0xE3715912L},{9L,0x0512D532L},{0L,1L},{0x6B2E61A6L,0x3A62E170L},{0L,0x3987F8C4L},{0x6C6A464FL,0L},{4L,0L}},{{0x6C6A464FL,0x3987F8C4L},{0L,0x3A62E170L},{0x6B2E61A6L,1L},{0L,0x0512D532L},{9L,0xE3715912L},{0x4A0D3EF1L,(-6L)},{0L,0xE8D66D3CL},{(-1L),0x687B7F46L},{(-1L),0xE8D66D3CL},{0L,(-6L)}},{{0x4A0D3EF1L,0xE3715912L},{9L,0x0512D532L},{0L,1L},{0x6B2E61A6L,0x3A62E170L},{0L,0x3987F8C4L},{0x6C6A464FL,0L},{4L,0L},{0x6C6A464FL,0x3987F8C4L},{0L,0x3A62E170L},{0x6B2E61A6L,1L}},{{(-9L),0x377317C7L},{0x74E39F75L,0L},{0xC98FE18FL,1L},{0x4A0D3EF1L,3L},{4L,(-6L)},{4L,3L},{0x4A0D3EF1L,1L},{0xC98FE18FL,0L},{0x74E39F75L,0x377317C7L},{(-9L),(-10L)}},{{(-1L),0x7C841A04L},{9L,0x3A62E170L},{0x04D6998CL,0x687B7F46L},{0L,0x687B7F46L},{0x04D6998CL,0x3A62E170L},{9L,0x7C841A04L},{(-1L),(-10L)},{(-9L),0x377317C7L},{0x74E39F75L,0L},{0xC98FE18FL,1L}},{{0x4A0D3EF1L,3L},{4L,(-6L)},{4L,3L},{0x4A0D3EF1L,1L},{0xC98FE18FL,0L},{0x74E39F75L,0x377317C7L},{(-9L),(-10L)},{(-1L),0x7C841A04L},{9L,0x3A62E170L},{0x04D6998CL,0x687B7F46L}},{{0L,0x687B7F46L},{0x04D6998CL,0x3A62E170L},{9L,0x7C841A04L},{(-1L),(-10L)},{(-9L),0x377317C7L},{0x74E39F75L,0L},{0xC98FE18FL,1L},{0x4A0D3EF1L,3L},{4L,(-6L)},{4L,3L}}};
                    uint32_t l_1320 = 0UL;
                    int i, j, k;
                }
                g_1349--;
                if ((*l_1268))
                    break;
            }
        }
    }
    return p_50;
}







static int8_t func_64(uint64_t p_65)
{
    int32_t * const l_82 = (void*)0;
    int32_t l_1029 = 3L;
    int16_t l_1035 = 0xCAAAL;
    int32_t *l_1037[8][2] = {{&g_6,&l_1029},{&g_6,&g_6},{&l_1029,&g_6},{&g_6,&l_1029},{&g_6,&g_6},{&l_1029,&g_6},{&g_6,&l_1029},{&g_6,&g_6}};
    int32_t l_1038 = 0xCE5DE93AL;
    int32_t **l_1039[2][1];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1039[i][j] = &g_345[3][2][1];
    }
    g_345[3][2][1] = ((l_1038 = (g_1036 = (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_65, (safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(g_55, ((safe_mul_func_uint16_t_u_u((func_80(l_82) , (safe_rshift_func_int16_t_s_u((l_1029 & ((((safe_rshift_func_uint8_t_u_u(p_65, 0)) <= (safe_lshift_func_uint8_t_u_u(((((!((void*)0 != l_82)) | 0x092020B8L) <= p_65) | p_65), p_65))) , g_636) || 65535UL)), p_65))), 65535UL)) & l_1035))), p_65)))), 0UL)))) , &l_1038);
    return p_65;
}







static int16_t func_80(int32_t * const p_81)
{
    uint16_t l_88[1];
    int32_t *l_95 = &g_6;
    int32_t **l_96 = (void*)0;
    int32_t **l_97 = (void*)0;
    int32_t **l_98 = &l_95;
    const int32_t l_99 = 0x68A7991AL;
    const uint64_t *l_100[7];
    uint64_t *l_102 = &g_67;
    uint64_t **l_101[8][4][3] = {{{&l_102,&l_102,&l_102},{(void*)0,&l_102,(void*)0},{&l_102,&l_102,&l_102},{&l_102,&l_102,(void*)0}},{{&l_102,&l_102,(void*)0},{&l_102,(void*)0,&l_102},{(void*)0,&l_102,(void*)0},{&l_102,&l_102,&l_102}},{{&l_102,(void*)0,&l_102},{&l_102,&l_102,&l_102},{&l_102,&l_102,(void*)0},{(void*)0,&l_102,&l_102}},{{&l_102,&l_102,&l_102},{&l_102,&l_102,(void*)0},{&l_102,&l_102,&l_102},{&l_102,&l_102,&l_102}},{{(void*)0,&l_102,(void*)0},{&l_102,&l_102,&l_102},{&l_102,&l_102,(void*)0},{&l_102,&l_102,(void*)0}},{{&l_102,(void*)0,&l_102},{(void*)0,&l_102,(void*)0},{&l_102,&l_102,&l_102},{&l_102,(void*)0,&l_102}},{{&l_102,&l_102,&l_102},{&l_102,&l_102,(void*)0},{(void*)0,&l_102,&l_102},{&l_102,&l_102,&l_102}},{{&l_102,&l_102,(void*)0},{&l_102,&l_102,&l_102},{&l_102,&l_102,&l_102},{(void*)0,&l_102,&l_102}}};
    const uint32_t l_104 = 1UL;
    uint32_t l_105 = 4294967295UL;
    uint16_t **l_141 = (void*)0;
    uint16_t *l_143 = &g_63;
    uint16_t **l_142 = &l_143;
    int8_t * const l_192 = &g_21;
    int32_t l_199 = 1L;
    int32_t l_201[4][4] = {{(-9L),0xB8B1DA9AL,(-9L),0x3D636BB8L},{(-9L),0x3D636BB8L,0x3D636BB8L,(-9L)},{0x31556D0BL,0x3D636BB8L,(-3L),0x3D636BB8L},{0x3D636BB8L,0xB8B1DA9AL,(-3L),(-3L)}};
    uint8_t l_251 = 0x6BL;
    int8_t l_338 = (-3L);
    uint64_t ****l_486 = &g_325;
    int32_t ****l_530[3][8] = {{&g_428,(void*)0,&g_428,(void*)0,&g_428,(void*)0,&g_428,(void*)0},{&g_428,(void*)0,&g_428,(void*)0,&g_428,(void*)0,&g_428,(void*)0},{&g_428,(void*)0,&g_428,(void*)0,&g_428,(void*)0,&g_428,(void*)0}};
    int32_t *****l_529 = &l_530[2][1];
    uint8_t l_540 = 255UL;
    int64_t l_544[2][1][7] = {{{0x8A51A105BE2C7D1ELL,0x8A51A105BE2C7D1ELL,0x8A51A105BE2C7D1ELL,0x8A51A105BE2C7D1ELL,0x8A51A105BE2C7D1ELL,0x8A51A105BE2C7D1ELL,0x8A51A105BE2C7D1ELL}},{{1L,1L,1L,1L,1L,1L,1L}}};
    uint16_t l_582 = 0x90C4L;
    int32_t l_637[1][4][5];
    int32_t l_639 = 0x32FFFAEEL;
    int8_t l_641 = 2L;
    uint32_t l_645 = 0UL;
    int64_t l_692 = 0x2D73A091E223716BLL;
    uint8_t *l_756 = (void*)0;
    uint8_t **l_755 = &l_756;
    uint64_t l_810 = 0x4EE7C90D99F87B02LL;
    uint32_t l_836 = 0x72B8BA28L;
    uint8_t l_858 = 0x6FL;
    int64_t l_899[4][1][1];
    int16_t l_907 = 0x3804L;
    int32_t l_982[7];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_88[i] = 0xF54DL;
    for (i = 0; i < 7; i++)
        l_100[i] = &g_67;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
                l_637[i][j][k] = 0L;
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_899[i][j][k] = (-1L);
        }
    }
    for (i = 0; i < 7; i++)
        l_982[i] = 0x4657F594L;
lbl_1015:
    if (((((*l_98) = (((((*l_142) = func_83((l_88[0] , ((safe_div_func_uint8_t_u_u(((((g_21 && l_88[0]) , &g_6) != ((((l_88[0] != (safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u((((*l_98) = l_95) != (((*g_62) = (l_99 || (l_100[5] == (g_103[0][1][0] = &g_67)))) , &g_6)), g_6)), 0x65L))) , (**l_98)) != l_104) , (void*)0)) > g_44), l_105)) , &g_6)), g_55, &g_55, g_6)) != g_62) , g_63) , (void*)0)) != &g_6) , 1L))
    {
        uint64_t l_189 = 0xB199FB15E95442C4LL;
        int32_t l_197 = 1L;
        uint16_t l_235 = 0UL;
        int16_t *l_250[8] = {&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159};
        int32_t *l_270 = &g_126;
        int32_t * const *l_319 = (void*)0;
        int32_t * const **l_318 = &l_319;
        int8_t l_328[6][3][6] = {{{0L,(-7L),0xD8L,0x5CL,0xD8L,(-7L)},{(-1L),(-1L),0xE3L,0xC1L,(-7L),0xE3L},{(-1L),0xD8L,(-7L),0x5CL,0x56L,1L}},{{0L,0xD8L,(-1L),0xBCL,(-7L),(-7L)},{(-1L),(-1L),(-1L),(-1L),0xD8L,1L},{0x5CL,(-7L),(-7L),(-1L),1L,0xE3L}},{{(-1L),1L,0xE3L,0xBCL,1L,(-7L)},{0L,(-7L),0xD8L,0x5CL,0xD8L,(-7L)},{(-1L),(-1L),0xE3L,0xC1L,(-7L),0xE3L}},{{(-1L),0xD8L,(-7L),0x5CL,0x56L,1L},{0L,0xD8L,(-1L),0xBCL,(-7L),(-7L)},{(-1L),(-1L),(-1L),(-1L),0xD8L,1L}},{{0x5CL,(-7L),(-7L),(-1L),1L,0xE3L},{(-1L),1L,0xE3L,0xBCL,1L,(-7L)},{0L,(-7L),0xD8L,0x5CL,0xD8L,(-7L)}},{{(-1L),(-1L),0xE3L,0xC1L,(-7L),0xE3L},{(-1L),0xD8L,(-7L),0x5CL,0x56L,1L},{0L,0xD8L,(-1L),0xBCL,(-7L),(-7L)}}};
        const int8_t l_455[5][2][2] = {{{0x46L,0x46L},{0x46L,0x46L}},{{0x46L,0x46L},{0x46L,0x46L}},{{0x46L,0x46L},{0x46L,0x46L}},{{0x46L,0x46L},{0x46L,0x46L}},{{0x46L,0x46L},{0x46L,0x46L}}};
        uint8_t l_473 = 1UL;
        uint16_t ***l_476 = &g_153;
        int32_t **l_483 = &g_345[0][1][0];
        int16_t l_508 = 0x2624L;
        uint64_t **l_519 = &l_102;
        int32_t l_548[9] = {0x1B70858FL,0x1B70858FL,0x1B70858FL,0x1B70858FL,0x1B70858FL,0x1B70858FL,0x1B70858FL,0x1B70858FL,0x1B70858FL};
        int32_t l_551 = 0x6D2CA097L;
        uint32_t l_581[4];
        int64_t l_585 = 0xC715CE0C4D525942LL;
        int32_t l_625[7][6] = {{0xC2661814L,(-1L),1L,(-1L),(-1L),1L},{(-1L),(-1L),1L,(-1L),0xC2661814L,1L},{(-1L),0xC2661814L,1L,0xC2661814L,(-1L),1L},{0xC2661814L,(-1L),1L,(-1L),(-1L),1L},{(-1L),(-1L),1L,(-1L),0xC2661814L,1L},{(-1L),0xC2661814L,1L,0xC2661814L,(-1L),1L},{0xC2661814L,(-1L),1L,(-1L),(-1L),1L}};
        int32_t l_632 = 0xF32EFA92L;
        uint8_t l_652[6][2];
        uint32_t *l_677 = &l_105;
        uint16_t l_694 = 0xCD2AL;
        uint8_t * const *l_799 = &l_756;
        uint8_t * const **l_798 = &l_799;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_581[i] = 0xF1ACEF21L;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 2; j++)
                l_652[i][j] = 255UL;
        }
lbl_322:
        for (g_129 = 0; (g_129 >= 0); g_129 -= 1)
        {
            const uint16_t ** const **l_146 = &g_144;
            int32_t *l_173 = &g_126;
            int32_t l_177 = 0x5D6DE25CL;
            int32_t l_196 = 0x24DCE975L;
            int32_t l_202 = 0x4F80C1E2L;
            int32_t l_203 = 5L;
            int32_t l_204 = 0x673AD305L;
            int32_t **l_208 = &l_95;
            (*l_146) = g_144;
            for (g_131 = 0; (g_131 >= 0); g_131 -= 1)
            {
                uint16_t l_152[4][9][4] = {{{0xA947L,0x3291L,0x2EA9L,0xEC92L},{0x2574L,0x78BCL,0xFB01L,0xEC92L},{8UL,0x3291L,0UL,0x78BCL},{0x7103L,0x2574L,65535UL,0x2574L},{0x3291L,0xB1C1L,0xFB01L,0x4261L},{1UL,0xA947L,0xB1C1L,1UL},{0xA947L,0x2574L,65535UL,0x7103L},{0xA947L,8UL,0xB1C1L,0xEC92L},{1UL,0x7103L,0xFB01L,0xFB01L}},{{0x3291L,0x3291L,65535UL,0x7103L},{0x7103L,1UL,0UL,0x2574L},{8UL,0xA947L,0xFB01L,0UL},{0x2574L,0xA947L,0x2EA9L,0x2574L},{0xA947L,1UL,8UL,0x7103L},{0xB1C1L,0x3291L,0xB1C1L,0xFB01L},{0x2574L,0x7103L,0x6933L,0xEC92L},{0x3291L,8UL,0UL,0x7103L},{0x78BCL,0x2574L,0UL,1UL}},{{0x3291L,0xA947L,0x6933L,0x4261L},{0x2574L,0xB1C1L,0xB1C1L,0x2574L},{0xB1C1L,0x2574L,8UL,0x78BCL},{0xA947L,0x3291L,0x2EA9L,0xEC92L},{0x2574L,0x78BCL,0xFB01L,0xEC92L},{8UL,0x3291L,0UL,0x78BCL},{0x7103L,0x2574L,65535UL,0x2574L},{0x3291L,0xB1C1L,0xFB01L,0x4261L},{1UL,0xA947L,0xB1C1L,1UL}},{{0xA947L,0x2574L,65535UL,0x7103L},{0xA947L,8UL,0xB1C1L,0xEC92L},{1UL,0x7103L,0xFB01L,0xFB01L},{0x3291L,0x3291L,65535UL,0x7103L},{0x7103L,1UL,0UL,0x2574L},{8UL,0xA947L,0xFB01L,0UL},{0x2574L,0xA947L,0x2EA9L,0x2574L},{0xA947L,1UL,0x060BL,0xFB01L},{0x1112L,0x3B5DL,0x1112L,65535UL}}};
                uint16_t ***l_154[2];
                uint16_t **l_155 = &l_143;
                int32_t *l_160 = (void*)0;
                int32_t *l_161 = &g_162;
                int32_t *l_198[6][6][2] = {{{&l_197,&g_6},{(void*)0,&g_55},{&l_177,&l_196},{(void*)0,&l_177},{&g_131,(void*)0},{(void*)0,&g_162}},{{&l_196,&g_55},{&l_197,&g_162},{&l_177,(void*)0},{&g_6,&l_196},{(void*)0,&l_196},{&g_162,&l_196}},{{(void*)0,&l_196},{&g_6,(void*)0},{&l_177,&g_162},{&l_197,&g_55},{&l_196,&g_162},{(void*)0,(void*)0}},{{&g_131,&l_177},{(void*)0,&l_196},{&l_177,&g_55},{(void*)0,&g_6},{&l_197,&l_177},{&g_6,&g_6}},{{(void*)0,(void*)0},{&l_177,&l_196},{&l_177,&g_162},{&l_177,&l_177},{&l_177,&g_131},{&l_177,&l_177}},{{&l_177,&g_162},{&l_177,&l_196},{&l_177,(void*)0},{(void*)0,&g_6},{&g_6,&l_177},{&l_197,&g_6}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_154[i] = &l_142;
                (*l_161) = ((safe_add_func_uint64_t_u_u(0xE983FE56077E5926LL, ((((0xC3FE914D0EF1DBD4LL | 0x37C8BC82935591E8LL) , (safe_mod_func_int32_t_s_s((g_157 = (((!0xEDFCD61A19B6E0F7LL) , l_152[2][1][3]) , (g_156 ^= (0x917A8246L & ((g_153 = g_153) == l_155))))), 4294967295UL))) != g_158) != 1L))) , g_159);
                for (g_126 = 0; (g_126 <= 0); g_126 += 1)
                {
                    int32_t *l_163 = (void*)0;
                    int32_t *l_164 = &g_162;
                    int32_t *l_165 = &g_162;
                    int32_t *l_166 = (void*)0;
                    int32_t *l_167[8] = {&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162};
                    uint64_t l_168 = 0xF46BED5E3ED10359LL;
                    int32_t **l_174 = &l_173;
                    int32_t *l_176 = (void*)0;
                    int32_t **l_175 = &l_176;
                    int8_t *l_185 = &g_157;
                    uint8_t *l_193 = &g_194;
                    int i;
                    ++l_168;
                    l_196 |= (safe_lshift_func_int8_t_s_s(((&g_126 != ((*l_175) = ((*l_174) = l_173))) == ((((l_177 | ((safe_mul_func_int8_t_s_s(g_162, (safe_mod_func_int32_t_s_s((~(safe_sub_func_uint16_t_u_u((((*l_185) = (0x03L < 0xC2L)) == (g_195 = ((*l_193) = ((0xD360L >= (((((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(l_189)), ((safe_lshift_func_int8_t_s_s((l_177 || l_177), g_129)) == l_177))) , (void*)0) == l_192) < 65531UL) , g_63)) & g_63)))), 7L))), 9UL)))) != l_177)) > 0x4BEAL) <= 255UL) & g_63)), g_162));
                }
                g_205++;
            }
            (*l_208) = p_81;
            for (g_131 = 0; (g_131 <= 0); g_131 += 1)
            {
                int32_t l_211 = 0x9B22A78FL;
                int32_t **l_239[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                for (l_202 = 0; (l_202 <= 0); l_202 += 1)
                {
                    int32_t l_236[10][4][3] = {{{7L,0xA70337B9L,(-1L)},{0xA70337B9L,7L,0xB01084FAL},{0x700D4B8CL,7L,(-9L)},{1L,0xA70337B9L,0L}},{{0x700D4B8CL,0x700D4B8CL,0L},{0xA70337B9L,1L,(-9L)},{7L,0x700D4B8CL,0xB01084FAL},{7L,0xA70337B9L,(-1L)}},{{0xA70337B9L,7L,0xB01084FAL},{0x700D4B8CL,7L,(-9L)},{1L,0xA70337B9L,0L},{0x700D4B8CL,0x700D4B8CL,0L}},{{0xA70337B9L,1L,(-9L)},{7L,0x700D4B8CL,0xB01084FAL},{7L,0xA70337B9L,(-1L)},{0xA70337B9L,7L,0xB01084FAL}},{{0x700D4B8CL,7L,(-9L)},{1L,0xA70337B9L,0L},{0x700D4B8CL,0x700D4B8CL,0L},{0xA70337B9L,1L,(-9L)}},{{7L,0x700D4B8CL,0xB01084FAL},{7L,0xA70337B9L,(-1L)},{0xA70337B9L,7L,0xB01084FAL},{0x700D4B8CL,7L,(-9L)}},{{1L,0xA70337B9L,0L},{0x700D4B8CL,0x700D4B8CL,0L},{0xA70337B9L,1L,(-9L)},{7L,0x700D4B8CL,0xB01084FAL}},{{7L,0xA70337B9L,(-1L)},{0xA70337B9L,7L,0xB01084FAL},{0x700D4B8CL,7L,(-9L)},{1L,0xA70337B9L,0x700D4B8CL}},{{0x6F8C7CC7L,0x6F8C7CC7L,0x700D4B8CL},{0L,0L,1L},{1L,0x6F8C7CC7L,1L},{1L,0L,(-3L)}},{{0L,1L,1L},{0x6F8C7CC7L,1L,1L},{0L,0L,0x700D4B8CL},{0x6F8C7CC7L,0x6F8C7CC7L,0x700D4B8CL}}};
                    uint8_t *l_238 = &g_194;
                    int i, j, k;
                    for (g_194 = 0; (g_194 <= 0); g_194 += 1)
                    {
                        int32_t *l_212[9] = {(void*)0,(void*)0,&l_197,(void*)0,(void*)0,&l_197,(void*)0,(void*)0,&l_197};
                        int8_t *l_221 = (void*)0;
                        int8_t *l_222 = (void*)0;
                        int8_t *l_223 = &g_157;
                        uint32_t l_237[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_237[i] = 0x38EFC9D0L;
                        l_196 &= ((((safe_rshift_func_int16_t_s_s(l_211, ((l_203 &= l_211) > (0xAEB59524D31E5914LL | (safe_div_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(((*l_223) = (-1L)), (safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(l_177, (safe_sub_func_int16_t_s_s(g_156, 7UL)))), 0x57L)))), (safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s((+(((((l_211 > l_235) , l_236[1][2][2]) == l_211) == 0x0B003D96624DC15FLL) != l_236[1][2][2])), 1L)), l_237[2])))) | l_211), l_236[9][3][2])), 0xF44CL)))))) ^ (*g_62)) ^ 255UL) < 0x22C6849BAEF5F9DBLL);
                        g_162 |= ((void*)0 != l_238);
                    }
                }
                (*l_208) = p_81;
            }
        }
        if (((safe_rshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u(0x38L, ((((l_189 || (-4L)) <= (~(&l_189 == (void*)0))) | l_189) & (g_156 |= (safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((*g_62), 12)) >= (safe_unary_minus_func_uint8_t_u((&l_100[1] == &l_102)))), g_158)))))) && 0x8DCB77C4L), g_200[0][1])) != l_235))
        {
            int16_t l_269 = 0L;
            int32_t l_290[5][6] = {{2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L}};
            uint64_t ***l_323[8];
            int32_t l_371 = (-10L);
            int32_t l_394[2][1];
            int32_t **l_450 = &l_270;
            uint16_t l_466 = 0x883AL;
            int32_t **l_485 = &g_345[3][2][1];
            int32_t * const ***l_499 = &l_318;
            int32_t l_526[6];
            int i, j;
            for (i = 0; i < 8; i++)
                l_323[i] = &l_101[6][3][0];
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_394[i][j] = 4L;
            }
            for (i = 0; i < 6; i++)
                l_526[i] = (-1L);
            for (g_159 = 1; (g_159 >= 0); g_159 -= 1)
            {
                int32_t *l_252 = &l_201[2][1];
                uint64_t ***l_373 = &l_101[6][3][0];
                int8_t *l_390 = &l_338;
                int32_t l_409 = 0x8B6F4C6EL;
                uint16_t ***l_477 = &l_141;
                int32_t * const ***l_497[8];
                int32_t l_547[6];
                uint16_t l_555 = 0x42E9L;
                int i;
                for (i = 0; i < 8; i++)
                    l_497[i] = &l_318;
                for (i = 0; i < 6; i++)
                    l_547[i] = 1L;
                if (((*l_252) = l_251))
                {
                    int32_t **l_254 = (void*)0;
                    int32_t *l_256 = &g_126;
                    int32_t **l_255 = &l_256;
                    int32_t **l_257 = (void*)0;
                    int32_t *l_259 = &g_126;
                    int32_t **l_258 = &l_259;
                    uint8_t *l_263 = &g_195;
                    int32_t l_271 = 0L;
                    uint64_t *l_340 = &g_205;
                    uint64_t *l_341 = &g_205;
                    if ((((((~(((((*l_102) = ((((*l_255) = &g_126) != ((*l_258) = &g_126)) <= (((safe_mul_func_int8_t_s_s(((1L && (safe_unary_minus_func_int16_t_s((g_156 = (((*l_263)++) < (safe_mod_func_uint64_t_u_u(((&g_21 != &g_200[1][0]) != ((+0UL) && (g_44 | ((l_269 , l_270) == (void*)0)))), g_6))))))) , 0L), (*l_252))) < l_235) > g_6))) , (*l_252)) & l_271) , l_271)) , l_269) > 0x19799441F9110C65LL) , l_269) || l_271))
                    {
                        const uint32_t l_278 = 0x0D9F0A52L;
                        uint64_t ***l_287 = &l_101[6][3][0];
                        int32_t l_291[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_291[i] = 0xE14EDE75L;
                        (*l_252) = l_271;
                        l_291[1] = ((1L > (((((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((l_278 || (((*l_102) = (safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_u(((*l_252) , (l_197 = (((*l_263) ^= ((*g_62) | (l_271 , (((*l_287) = &g_103[0][0][1]) == &g_103[0][0][0])))) , g_44))), 9)) > (safe_mul_func_uint8_t_u_u((l_290[1][0] | 0x802EC767E1A3AA63LL), 1L))) > l_235) > l_269), 1)), g_158)), l_278))) >= 18446744073709551608UL)) >= l_278), 255UL)), 0x23F3L)), 4)) , &l_251) != (void*)0) , &g_145) != &g_153)) | (-10L));
                        (*l_252) = (safe_sub_func_uint8_t_u_u(((((safe_div_func_uint16_t_u_u((((((safe_mod_func_uint64_t_u_u(((g_44 && (g_205 >= (safe_lshift_func_uint16_t_u_u(l_235, (0x451DL && (((safe_lshift_func_uint16_t_u_u(((*g_62) , ((((((*g_62) &= l_271) | (((((safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(l_235, (((safe_lshift_func_int8_t_s_s(((safe_div_func_int32_t_s_s(((void*)0 == &l_95), 8UL)) & (-1L)), 0)) == 255UL) < l_291[1]))) <= 0x01B2L), l_291[0])) < g_156) > g_195) || g_21) >= l_269)) > 0L) & 4294967295UL) >= 0x45B7954BL)), 3)) >= l_271) , l_290[3][1])))))) == l_189), g_131)) & g_162) || 0x54E4649DL) | 0xEB13L) >= 0UL), l_235)) || (*l_252)) , 0xE1E5L) | g_6), 0xEAL));
                    }
                    else
                    {
                        int32_t *l_310 = &l_199;
                        int32_t **l_311 = &l_310;
                        (*l_311) = ((*l_98) = l_310);
                        if (l_271)
                            continue;
                    }
                    if ((g_67 != (g_162 , ((*l_252) >= ((g_156 &= (*l_252)) > l_290[1][0])))))
                    {
                        int32_t ***l_317 = &l_258;
                        int32_t ****l_316[9][9][3] = {{{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{&l_317,&l_317,(void*)0},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317}},{{&l_317,&l_317,&l_317},{&l_317,(void*)0,&l_317},{&l_317,&l_317,&l_317},{&l_317,(void*)0,&l_317},{&l_317,&l_317,(void*)0},{&l_317,&l_317,(void*)0},{(void*)0,&l_317,&l_317},{&l_317,(void*)0,&l_317},{&l_317,(void*)0,&l_317}},{{&l_317,(void*)0,(void*)0},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{(void*)0,&l_317,&l_317},{(void*)0,&l_317,(void*)0},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{&l_317,(void*)0,&l_317}},{{&l_317,(void*)0,&l_317},{&l_317,(void*)0,&l_317},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{(void*)0,(void*)0,&l_317},{&l_317,&l_317,&l_317},{&l_317,(void*)0,&l_317},{(void*)0,&l_317,(void*)0}},{{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{(void*)0,&l_317,&l_317},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{&l_317,(void*)0,&l_317},{&l_317,&l_317,&l_317}},{{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{(void*)0,&l_317,(void*)0},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{(void*)0,(void*)0,&l_317},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317}},{{(void*)0,&l_317,&l_317},{&l_317,(void*)0,&l_317},{&l_317,(void*)0,&l_317},{(void*)0,&l_317,&l_317},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{&l_317,(void*)0,&l_317},{&l_317,&l_317,(void*)0},{&l_317,&l_317,&l_317}},{{&l_317,&l_317,&l_317},{&l_317,&l_317,(void*)0},{&l_317,(void*)0,(void*)0},{&l_317,&l_317,(void*)0},{(void*)0,&l_317,&l_317},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{(void*)0,&l_317,(void*)0},{&l_317,(void*)0,&l_317}},{{&l_317,&l_317,&l_317},{&l_317,(void*)0,&l_317},{(void*)0,&l_317,&l_317},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317},{(void*)0,&l_317,&l_317},{&l_317,&l_317,(void*)0},{&l_317,&l_317,&l_317},{&l_317,&l_317,&l_317}}};
                        int i, j, k;
                        (*l_252) = (safe_rshift_func_uint8_t_u_s((*l_252), 1));
                        l_318 = (void*)0;
                        (*l_252) = (safe_div_func_uint8_t_u_u(249UL, (-1L)));
                        if (g_126)
                            goto lbl_322;
                    }
                    else
                    {
                        uint64_t ****l_324 = (void*)0;
                        g_325 = l_323[6];
                    }
                    if ((((((((safe_sub_func_uint16_t_u_u((l_328[4][2][4] && g_162), (g_156 = ((-9L) || ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((!0xD27EL) != (safe_unary_minus_func_uint32_t_u((safe_sub_func_uint32_t_u_u(((((1UL || l_271) , (!0xD8733CB2L)) >= l_338) , 0xE47D957DL), g_195))))), 4)), l_197)) >= l_269))))) & l_290[1][0]) , 0x79L) < 252UL) & l_271) || (*l_252)) , 0xE5E681E8L))
                    {
                        uint64_t *l_339 = &l_189;
                        uint16_t *l_342 = &l_88[0];
                        int32_t *l_346 = &l_199;
                        int32_t *l_351 = &g_162;
                        (*l_351) &= (((l_340 = l_339) == l_341) || ((&l_235 != ((*l_142) = l_342)) | (safe_mod_func_int64_t_s_s(((l_346 = g_345[3][2][1]) != ((*l_98) = &l_271)), (safe_sub_func_int16_t_s_s((g_156 = l_271), (((*l_252) && (safe_mod_func_int64_t_s_s(g_158, g_6))) == g_129)))))));
                        l_371 = (safe_rshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((+(((safe_rshift_func_uint16_t_u_u(((g_67 ^ (((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(4UL, g_157)), (*l_252))) || ((((l_271 = (g_156 = ((safe_div_func_uint16_t_u_u(((*g_62) = (safe_rshift_func_int16_t_s_u(((g_6 <= l_290[2][1]) == ((((void*)0 != &g_345[3][2][1]) >= (safe_div_func_int64_t_s_s((+(safe_unary_minus_func_int16_t_s(g_205))), (*l_351)))) , 4UL)), 4))), 1UL)) & l_189))) != (*l_351)) > g_67) , 2UL)) && (*l_252))) , (*l_252)), (*l_252))) , l_328[4][2][4]) , l_271)), g_195)) && g_63), 11));
                    }
                    else
                    {
                        uint64_t ****l_372[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_372[i] = &l_323[6];
                        l_373 = (void*)0;
                        if ((*l_252))
                            break;
                    }
                }
                else
                {
                    int8_t l_395 = 0L;
                    int32_t **l_406 = &l_270;
                    int32_t **l_451 = &l_270;
                    uint8_t l_456[10];
                    int32_t l_471 = 0x52A23B5AL;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_456[i] = 0x76L;
                    if (g_205)
                        goto lbl_322;
                    if ((safe_div_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((l_269 , ((l_394[0][0] = (safe_mod_func_int32_t_s_s((((safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((*l_252) = (l_371 = (&g_200[0][1] != l_390))), (+1UL))), ((*l_390) = ((254UL || (safe_mod_func_int32_t_s_s(l_290[1][0], 0x009CEDE0L))) <= g_200[1][0])))), l_328[5][1][1])), 1UL)) & 0xEF79BD08L) | l_235), l_269))) > l_395)), l_290[2][2])) >= 0xC6L), 65527UL)), g_159)))
                    {
                        uint64_t l_410 = 0x45477DEFB562337DLL;
                        int8_t l_411 = 0L;
                        int32_t *l_412 = (void*)0;
                        int32_t *l_413 = &l_199;
                        uint16_t **l_424 = &l_143;
                        (*l_413) ^= (safe_sub_func_int16_t_s_s(((l_411 = ((g_398 == &g_399[1][3]) , (safe_add_func_int16_t_s_s(g_55, (safe_add_func_int16_t_s_s(((((safe_div_func_uint16_t_u_u(((l_409 ^= (((((l_406 == (g_398 = ((((*l_102) = 0UL) == l_269) , &g_399[0][0]))) , (safe_lshift_func_uint8_t_u_u((*l_252), 4))) , (((*l_252) < 0x31EFC900L) >= l_394[1][0])) , 1L) || 1L)) <= (*l_252)), 0x7A12L)) < l_395) < g_200[0][1]) < l_410), l_410)))))) , 1L), 0UL));
                        (*l_252) = (safe_add_func_int32_t_s_s((((((*l_252) || (l_290[3][2] >= 4L)) , ((safe_lshift_func_uint16_t_u_s((~((*l_390) = (safe_add_func_int8_t_s_s((+(safe_mul_func_int8_t_s_s(l_395, ((((void*)0 == l_424) > (safe_add_func_int16_t_s_s(((g_427[5][1] == (((**l_424)--) , (void*)0)) != l_395), (*l_252)))) == 0xB9E2L)))), g_162)))), l_395)) > 0L)) >= (-4L)) && g_131), (*l_252)));
                        if (l_395)
                            break;
                        (*l_413) ^= ((((void*)0 == l_406) ^ 0x123FL) ^ (l_371 = 0xA7E1L));
                    }
                    else
                    {
                        uint32_t *l_452 = &g_453[2][2][0];
                        int32_t l_454 = 0x7C7A1D85L;
                        uint16_t *l_472 = &l_466;
                        l_197 = (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((g_157 | ((-1L) != (((g_44 < ((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u(l_395, ((*l_390) = l_395))) && ((safe_div_func_int64_t_s_s(((~(((void*)0 == &g_325) < (safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u((((((*l_452) &= (l_395 , ((l_406 = l_450) != l_451))) , 0xC2A805C9L) >= l_395) > (*g_62)), 13)) > l_395) && g_21), 1UL)), 0L)))) != g_200[0][1]), l_454)) , g_156)), l_455[2][0][0])) & g_157)) | (-1L)) | g_205))), l_395)), 0)), l_456[8]));
                        (*l_98) = &l_394[1][0];
                        l_454 = (((safe_mul_func_uint8_t_u_u((((((*l_472) = (safe_sub_func_uint32_t_u_u(((-9L) <= (safe_add_func_int64_t_s_s(((((((*g_62) , l_456[8]) , (safe_sub_func_int8_t_s_s(l_454, (((+(-1L)) , 6UL) ^ (g_156 |= l_466))))) , (l_471 ^= (9L <= ((((*g_62) = (safe_sub_func_uint32_t_u_u(((((*l_95) |= (safe_lshift_func_uint8_t_u_s(g_195, 2))) ^ l_290[1][0]) >= 3L), l_454))) <= l_454) ^ l_454)))) , l_328[4][2][4]) || g_63), (-5L)))), l_456[8]))) , l_473) && l_466) & 0x929AFEC63DF845B0LL), l_290[2][2])) < l_290[4][2]) ^ g_6);
                    }
                    l_471 = l_197;
                    if ((*l_252))
                        continue;
                }
                for (l_371 = 1; (l_371 >= 0); l_371 -= 1)
                {
                    uint64_t l_474 = 18446744073709551615UL;
                    int32_t *l_475 = &l_394[0][0];
                    int32_t ***l_484 = &l_97;
                    int32_t l_487 = 0x2381BBB5L;
                    int32_t * const ***l_500 = (void*)0;
                    int32_t l_549 = 0x74AD7A4BL;
                    int32_t l_550 = 0xE2454B72L;
                    int32_t l_552 = 0L;
                    int32_t l_553 = 1L;
                    int32_t l_554 = (-8L);
                    if (l_474)
                        break;
                    for (l_269 = 1; (l_269 >= 0); l_269 -= 1)
                    {
                        l_475 = ((*l_98) = &g_131);
                        g_345[9][1][2] = &g_162;
                    }
                    if ((l_487 ^= ((g_156 = (((l_476 == l_477) , ((*g_62) = (~((l_269 > (*l_475)) | (*l_252))))) , 0L)) || (safe_mod_func_int32_t_s_s(((*l_252) = ((((*l_102) = (*l_475)) , (((**l_450) = ((safe_sub_func_uint32_t_u_u(((((*l_484) = l_483) != l_485) && 0x2F675BAFDDA01399LL), (*l_252))) | l_455[4][1][0])) , l_486)) == &g_325)), g_453[1][0][0])))))
                    {
                        int32_t * const ****l_498 = &l_497[7];
                        int32_t l_507 = (-8L);
                        int64_t *l_509 = &g_510[2][8];
                        uint64_t * const *l_536 = (void*)0;
                        int32_t *l_537 = &l_487;
                        int32_t *l_538 = (void*)0;
                        int32_t *l_539 = &g_162;
                        (*l_499) = (((~((*l_509) = (safe_mod_func_int16_t_s_s((4294967294UL != 3L), (((((safe_mul_func_uint8_t_u_u((((safe_div_func_uint64_t_u_u((*l_252), g_63)) > ((safe_rshift_func_int16_t_s_u((((*l_498) = l_497[2]) != (l_500 = l_499)), (safe_rshift_func_uint16_t_u_u((*g_62), 6)))) | (((safe_rshift_func_int8_t_s_s((((safe_add_func_uint64_t_u_u(((((*l_252) != l_507) == 0x6387L) >= l_508), 0x1586D9F055C84A11LL)) ^ l_507) <= (-9L)), l_507)) , g_6) , 1L))) , 0x48L), g_55)) , 0x3CC480CAD9B941ACLL) ^ l_507) & 5L) , l_507))))) < l_507) , (**l_498));
                        l_526[5] &= (((safe_div_func_uint16_t_u_u((((safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((g_158 ^ (((((*l_252) , g_194) >= g_200[1][0]) , l_519) != l_519)), (safe_mod_func_uint16_t_u_u(((*l_252) || ((((*l_509) = ((safe_rshift_func_int16_t_s_s(0L, 7)) && l_507)) < 1L) > 0x29L)), 65534UL)))), 0x3DL)), g_200[0][1])) <= (*l_475)) || g_44), 0x277AL)) > 0xD7E5C0EE97CBFD3ELL) > 0xD4B183A9L);
                        (*l_539) ^= ((*l_537) ^= ((!((+((*l_252) != ((&l_499 == l_529) ^ (safe_lshift_func_uint8_t_u_u(((((*l_509) = (0x5875L & (*g_62))) & (!((((safe_sub_func_int16_t_s_s(((l_519 == l_536) < g_55), (*l_252))) , l_507) >= (*l_475)) , (*l_252)))) == (*l_252)), (*l_252)))))) == l_466)) > l_507));
                        (*l_475) = l_540;
                    }
                    else
                    {
                        int32_t **l_541 = &l_95;
                        int32_t *l_542 = &l_526[0];
                        int32_t *l_543 = &l_526[5];
                        int32_t *l_545 = &l_409;
                        int32_t *l_546[10][8][3] = {{{&l_526[0],&l_487,&l_371},{&g_55,&g_162,(void*)0},{(void*)0,&l_526[0],(void*)0},{&g_131,&g_131,&g_162},{&l_394[1][0],&l_371,&l_197},{&g_162,&l_526[0],&g_129},{&l_199,&l_201[0][2],&l_526[2]},{&l_199,&g_162,&g_129}},{{&l_371,&l_199,&l_197},{&l_197,&l_199,&g_162},{(void*)0,&l_409,(void*)0},{&l_394[0][0],&l_197,(void*)0},{&l_199,(void*)0,&l_371},{&l_526[5],&l_199,(void*)0},{&l_394[1][0],&g_131,&g_131},{(void*)0,&g_162,&l_394[0][0]}},{{&l_409,&l_201[0][2],&l_394[0][0]},{&g_131,(void*)0,&g_131},{&l_197,(void*)0,&l_197},{&l_371,(void*)0,&g_162},{&g_131,&l_201[0][2],&l_199},{&l_394[0][0],&g_162,&l_371},{&l_371,&g_131,&l_197},{(void*)0,&l_199,&g_162}},{{&l_526[2],(void*)0,&l_526[2]},{&l_371,&l_199,&g_162},{&l_201[0][2],&l_201[0][2],&l_201[0][2]},{(void*)0,&l_371,&g_6},{&g_131,&l_371,&l_409},{&l_394[0][0],&l_197,&l_201[0][2]},{(void*)0,&l_199,&l_409},{&l_394[0][0],&l_409,&l_409}},{{&g_131,(void*)0,&l_394[0][0]},{(void*)0,&l_487,&l_197},{&l_201[0][2],&l_199,(void*)0},{&l_371,(void*)0,&l_197},{(void*)0,(void*)0,(void*)0},{&l_394[1][0],&l_371,&l_526[0]},{&l_487,&l_487,&l_526[2]},{&g_129,(void*)0,&l_201[0][2]}},{{&l_409,&l_201[0][2],&g_162},{&l_487,&l_526[5],&l_394[0][0]},{&g_131,&l_409,&g_162},{&l_487,(void*)0,&l_201[0][2]},{&l_197,&l_199,&l_526[2]},{&l_394[0][0],&l_409,&l_526[0]},{&l_371,&l_409,(void*)0},{(void*)0,&l_394[0][0],&l_197}},{{&l_371,&g_131,(void*)0},{&g_129,&l_197,&l_197},{(void*)0,(void*)0,&l_394[0][0]},{&l_394[0][0],&l_526[5],&l_409},{&l_487,(void*)0,&l_409},{&g_162,&l_394[1][0],&l_201[0][2]},{&l_201[0][2],(void*)0,&l_409},{&l_197,&l_526[5],&g_6}},{{&l_371,(void*)0,&l_201[0][2]},{&l_487,&l_197,&g_162},{&l_197,&g_131,&l_526[2]},{&l_394[0][0],&l_394[0][0],&g_55},{&l_199,&l_409,&l_394[0][0]},{&l_487,&l_409,&l_487},{&l_371,&l_199,&l_409},{&g_162,(void*)0,&l_197}},{{(void*)0,&l_409,&l_394[0][0]},{(void*)0,&l_526[5],&l_526[0]},{(void*)0,&l_201[0][2],&l_199},{&g_162,(void*)0,&g_162},{&l_371,&l_487,&l_409},{&l_487,&l_371,&l_394[0][0]},{&l_199,(void*)0,&g_162},{&l_394[0][0],(void*)0,&g_131}},{{&l_197,&l_199,&l_409},{&l_487,&l_487,&g_55},{&l_371,(void*)0,&l_394[0][0]},{&l_197,&l_409,&l_197},{&l_201[0][2],&l_199,(void*)0},{&g_162,&l_197,&l_197},{&l_487,&l_371,&l_394[0][0]},{&l_394[0][0],&l_371,&g_55}}};
                        int i, j, k;
                        if ((*l_252))
                            break;
                        (*l_541) = p_81;
                        --l_555;
                        if ((*l_252))
                            continue;
                    }
                    for (g_157 = 0; (g_157 <= 1); g_157 += 1)
                    {
                        if ((*l_252))
                            break;
                        (*l_485) = (*l_485);
                    }
                }
            }
        }
        else
        {
            uint64_t * const l_573 = &g_574;
            uint64_t * const *l_572 = &l_573;
            uint64_t * const **l_571 = &l_572;
            uint16_t ****l_575 = &l_476;
            uint16_t ** const **l_576 = (void*)0;
            uint16_t ** const ***l_577 = &l_576;
            int32_t l_580 = 0xA42C776DL;
            int8_t *l_583 = (void*)0;
            int8_t *l_584 = &l_328[2][0][3];
            const int32_t l_586[4][6][1] = {{{0xC487F7CAL},{0x5C2471F3L},{0xC487F7CAL},{0x5C2471F3L},{0xC487F7CAL},{0x5C2471F3L}},{{0xC487F7CAL},{0x5C2471F3L},{0xC487F7CAL},{0x5C2471F3L},{0xC487F7CAL},{0x5C2471F3L}},{{0xC487F7CAL},{0x5C2471F3L},{0xC487F7CAL},{0x5C2471F3L},{0xC487F7CAL},{0x5C2471F3L}},{{0xC487F7CAL},{0x5C2471F3L},{0xC487F7CAL},{0x5C2471F3L},{0xC487F7CAL},{0x5C2471F3L}}};
            int32_t l_587[5][2][7] = {{{0xD64B4F9EL,0x52117979L,4L,4L,0x52117979L,0xD64B4F9EL,3L},{(-7L),0xAFBCB5D2L,0x8DF4357AL,0x8DF4357AL,0xAFBCB5D2L,(-7L),(-1L)}},{{0xD64B4F9EL,0x52117979L,4L,4L,0x52117979L,0xD64B4F9EL,3L},{(-7L),0xAFBCB5D2L,0x8DF4357AL,0x8DF4357AL,0xAFBCB5D2L,(-7L),(-1L)}},{{0xD64B4F9EL,0x52117979L,4L,4L,0x52117979L,0xD64B4F9EL,3L},{(-7L),0xAFBCB5D2L,0x8DF4357AL,0x8DF4357AL,0xAFBCB5D2L,(-7L),(-1L)}},{{0xD64B4F9EL,0x52117979L,4L,4L,0x52117979L,0xD64B4F9EL,3L},{(-7L),0xAFBCB5D2L,0x8DF4357AL,0x8DF4357AL,0xAFBCB5D2L,(-7L),(-1L)}},{{0xD64B4F9EL,0x52117979L,4L,4L,0x52117979L,0xD64B4F9EL,3L},{(-7L),0xAFBCB5D2L,0x8DF4357AL,0x8DF4357AL,0xAFBCB5D2L,(-7L),(-1L)}}};
            int32_t l_640 = 7L;
            uint64_t *** const *l_698 = &g_325;
            int16_t *l_724 = &g_159;
            int i, j, k;
            l_548[5] ^= (((safe_lshift_func_uint8_t_u_s(((safe_div_func_uint16_t_u_u((((!(g_200[0][1] &= ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((((*l_571) = l_519) != l_519), 0)) | (l_575 == ((*l_577) = l_576))), (safe_mul_func_uint16_t_u_u(0xB4F7L, l_197)))), (((l_580 != (((l_455[2][0][0] != ((*l_584) = (l_581[0] || l_582))) <= 0xB1B8L) != g_156)) & l_580) & 0x45L))) || l_580))) && 0UL) != l_585), l_586[3][4][0])) > l_586[3][4][0]), l_587[2][0][6])) <= 0x91FFL) > l_235);
        }
    }
    else
    {
        int32_t l_819 = (-1L);
        uint16_t l_834[4];
        int i;
        for (i = 0; i < 4; i++)
            l_834[i] = 1UL;
        for (g_159 = 0; (g_159 < (-9)); g_159 = safe_sub_func_int8_t_s_s(g_159, 4))
        {
            uint64_t l_826 = 0x95B6C26E85146F56LL;
            int64_t *l_833 = &g_630[3][1][0];
            int32_t l_835[6][1];
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 1; j++)
                    l_835[i][j] = 0xEAF8EBFBL;
            }
            l_835[1][0] = (safe_div_func_uint32_t_u_u((((safe_div_func_int32_t_s_s(((l_819 | (safe_add_func_int32_t_s_s(1L, (safe_rshift_func_uint16_t_u_u(((void*)0 == &l_756), 11))))) , (safe_lshift_func_uint8_t_u_s(l_826, ((((*l_833) = (safe_mod_func_int32_t_s_s((((((safe_lshift_func_uint16_t_u_s(l_819, 5)) < 1UL) , ((safe_mod_func_uint32_t_u_u((((0x93E61B97C671A429LL > (l_819 & (-1L))) | l_819) < g_194), l_819)) <= g_63)) && l_819) >= l_819), l_826))) ^ l_819) >= 0UL)))), l_826)) , l_834[3]) , g_195), g_158));
            (*l_98) = &l_819;
            for (l_641 = 4; (l_641 >= 0); l_641 -= 1)
            {
                if (l_836)
                    break;
            }
            for (g_131 = 0; (g_131 == (-21)); g_131 = safe_sub_func_int64_t_s_s(g_131, 9))
            {
                int32_t *l_839[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                (*l_98) = l_839[1];
            }
        }
    }
    for (g_195 = 0; (g_195 <= 3); g_195 += 1)
    {
        const int8_t **l_840 = (void*)0;
        const int8_t *l_842 = &g_158;
        const int8_t **l_841 = &l_842;
        int32_t l_852[6] = {0x7F844F84L,0x7F844F84L,0x7F844F84L,0x7F844F84L,0x7F844F84L,0x7F844F84L};
        int32_t l_855 = (-1L);
        int32_t *l_856 = (void*)0;
        int32_t *l_857 = &l_639;
        uint32_t *l_873[5];
        uint16_t *l_903 = &l_582;
        const int32_t l_905 = 0L;
        int16_t *l_906 = &g_156;
        uint8_t l_908 = 1UL;
        uint16_t * const *l_952[2][6] = {{&g_62,&g_62,&g_62,&g_62,&g_62,&g_62},{&g_62,&g_62,&g_62,&g_62,&g_62,&g_62}};
        uint16_t * const **l_951 = &l_952[0][4];
        int i, j;
        for (i = 0; i < 5; i++)
            l_873[i] = &g_453[7][3][3];
        l_858 &= (((((((*l_841) = &g_200[0][0]) == ((safe_sub_func_uint32_t_u_u((++g_845), (((g_736 , (0x9DL <= ((((*l_857) = (safe_add_func_int32_t_s_s((g_453[2][2][0] < ((g_630[3][3][3] , g_630[2][1][3]) || (safe_mod_func_int8_t_s_s((l_852[2] = (l_852[2] >= (((safe_mod_func_uint64_t_u_u(l_852[5], (1UL | l_852[2]))) <= l_852[1]) ^ g_200[0][1]))), l_855)))), 9L))) | g_67) > l_836))) <= g_55) || 0xC0CFL))) , (void*)0)) < (-10L)) & l_855) > g_159) && g_6);
        (*l_98) = ((((safe_div_func_int16_t_s_s((g_861 > (*g_62)), g_861)) < ((((+(safe_unary_minus_func_uint32_t_u((safe_div_func_int8_t_s_s((safe_div_func_int16_t_s_s(g_44, (((((((safe_div_func_int64_t_s_s((!(g_55 && (safe_div_func_int64_t_s_s(((((g_453[4][0][3]--) , ((*l_906) = (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(((((safe_sub_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((((safe_add_func_uint32_t_u_u(g_453[8][0][1], (((*l_903) = (safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u((~(((*l_857) == (l_899[1][0][0] |= (-6L))) != (((~((((safe_mul_func_int16_t_s_s(0x690BL, 6UL)) , 0xD163850DE4B72AC5LL) != (-1L)) , g_156)) < g_194) <= g_200[0][1]))), (*l_857))), 9)) , (*l_857)), 9))) || g_736))) , (void*)0) == (void*)0), g_129)), 0UL)), (*l_857))) && g_904), l_905)) != (*l_857)) , (void*)0) != (void*)0), (*l_857))), 0)), 0x7FL)))) | 0x4228L) , g_636), 0x427DAF0E8F346A5FLL)))), l_907)) , (*l_857)) == l_908) , g_129) < 0UL) , 0x038FL) & g_55))), g_129))))) == 8UL) | (*l_857)) | g_63)) >= l_251) , &g_6);
        for (l_641 = 0; (l_641 <= 1); l_641 += 1)
        {
            int32_t l_909 = 1L;
            int32_t l_914 = 1L;
            int32_t l_926 = (-1L);
            uint16_t ***l_953 = (void*)0;
            int32_t ****l_1007 = &g_428;
            uint32_t l_1026 = 1UL;
            l_529 = &l_530[2][1];
            for (l_907 = 1; (l_907 >= 0); l_907 -= 1)
            {
                uint32_t *l_924 = (void*)0;
                uint16_t * const l_977 = (void*)0;
                int32_t l_981 = 0xD7766EE4L;
                int32_t l_988 = (-8L);
                int32_t l_1019 = 0x6CA07D05L;
                int32_t l_1020[8][5][3] = {{{(-1L),1L,0x35F6E01DL},{(-1L),0x2AF1DE71L,(-1L)},{0x6072E0EEL,(-1L),0L},{0x2410850DL,1L,(-1L)},{0L,0x6072E0EEL,0x35F6E01DL}},{{0L,(-1L),0x74658ABFL},{0L,0L,4L},{0x2410850DL,0x04C2129DL,0x32F027D0L},{0x6072E0EEL,0L,0x6072E0EEL},{(-1L),(-1L),0xF8C0398DL}},{{(-1L),0x6072E0EEL,0x6072E0EEL},{0xF8C0398DL,1L,0x32F027D0L},{1L,(-1L),4L},{0xF8C0398DL,0x2AF1DE71L,0x74658ABFL},{(-1L),1L,0x35F6E01DL}},{{(-1L),0x2AF1DE71L,(-1L)},{0x6072E0EEL,(-1L),0L},{0x2410850DL,1L,(-1L)},{0L,0x6072E0EEL,0x35F6E01DL},{0L,(-1L),0x74658ABFL}},{{0L,0L,4L},{0x2410850DL,0x04C2129DL,0x32F027D0L},{0x6072E0EEL,0L,0x6072E0EEL},{(-1L),(-1L),0xF8C0398DL},{(-1L),0x6072E0EEL,0x6072E0EEL}},{{0xF8C0398DL,1L,0x32F027D0L},{1L,(-1L),4L},{0xF8C0398DL,0x2AF1DE71L,0x74658ABFL},{(-1L),1L,0x35F6E01DL},{(-1L),0x2AF1DE71L,(-1L)}},{{0x6072E0EEL,(-1L),0L},{(-1L),0x04C2129DL,0L},{0xE7EB64F7L,1L,4L},{0x32F027D0L,1L,0xF8C0398DL},{0xE7EB64F7L,0xE7EB64F7L,0L}},{{(-1L),(-1L),0x74658ABFL},{1L,0xE7EB64F7L,1L},{0L,1L,5L},{0x6072E0EEL,1L,1L},{5L,0x04C2129DL,0x74658ABFL}}};
                int i, j, k;
                l_926 |= (((l_909 = g_630[(g_195 + 2)][g_195][(l_907 + 1)]) || g_630[(l_641 + 1)][(l_641 + 1)][(g_195 + 1)]) < (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((((((*l_102)++) & g_200[0][1]) || (g_630[(l_641 + 1)][(l_641 + 1)][(g_195 + 1)] , (g_925[0][4][0] = ((safe_mod_func_uint32_t_u_u(g_749[8][2], ((safe_mul_func_int8_t_s_s((((l_914 | (safe_mul_func_int8_t_s_s((g_749[4][2] <= ((*l_857) , l_914)), 0x9AL))) , g_630[(g_195 + 2)][g_195][(l_907 + 1)]) < g_923), (*l_857))) ^ g_6))) & g_630[(g_195 + 2)][g_195][(l_907 + 1)])))) != g_574), (-5L))), l_914)));
                for (l_251 = 1; (l_251 < 33); ++l_251)
                {
                    int64_t l_945[10] = {(-1L),1L,1L,(-1L),1L,(-1L),1L,1L,(-1L),1L};
                    int32_t l_980 = 2L;
                    int32_t l_984 = (-1L);
                    int32_t l_986[2];
                    int32_t l_989 = (-1L);
                    uint16_t **l_1013 = &l_903;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_986[i] = 0L;
                    for (l_926 = 0; (l_926 >= (-24)); --l_926)
                    {
                        uint64_t l_950 = 1UL;
                        (*l_98) = &g_129;
                        (*l_95) = (**l_98);
                        (*l_95) = (safe_add_func_uint32_t_u_u((!((safe_unary_minus_func_uint16_t_u((((safe_add_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((((((-1L) & ((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(l_945[8], 0xF9B1513EL)), (((safe_div_func_int64_t_s_s(g_693, l_945[4])) != (((0xD723L && (safe_lshift_func_int8_t_s_u(l_950, 4))) <= ((l_951 != l_953) | l_909)) & (*l_857))) <= g_925[0][2][0]))) < g_6)) & 0xAB6DEE4EL) && 18446744073709551606UL) || (-1L)), 0xEBL)), l_945[8])) >= (*l_857)) | 0x5F40A69E4FF9E979LL))) && 0L)), l_950));
                    }
                    for (g_162 = 0; (g_162 < 28); g_162++)
                    {
                        uint8_t l_978[10][4][5] = {{{249UL,0xFAL,0x17L,1UL,1UL},{249UL,254UL,249UL,0UL,0UL},{1UL,255UL,0xC3L,1UL,0xC3L},{2UL,0x31L,0xFCL,254UL,253UL}},{{0x74L,249UL,0xC3L,0xC3L,249UL},{253UL,8UL,249UL,0x6DL,0xA8L},{0xFAL,249UL,0x17L,249UL,0xFAL},{249UL,0x31L,0x34L,0UL,2UL}},{{0xFAL,255UL,255UL,0xFAL,0xC3L},{253UL,254UL,0xFCL,0x31L,2UL},{0x74L,0xFAL,0x74L,0xC3L,0xFAL},{2UL,8UL,0xA8L,0x31L,0xA8L}},{{1UL,1UL,0x17L,0xFAL,249UL},{249UL,0x6DL,0xA8L,0UL,253UL},{249UL,255UL,0x74L,249UL,0xC3L},{0UL,0x6DL,0xFCL,0x6DL,0UL}},{{0x74L,1UL,255UL,0xC3L,1UL},{0UL,8UL,0x34L,254UL,0xA8L},{249UL,0xFAL,0x17L,1UL,1UL},{249UL,254UL,249UL,0UL,0UL}},{{1UL,255UL,0xC3L,1UL,0xC3L},{2UL,0x31L,0xFCL,254UL,253UL},{0x74L,249UL,0xC3L,0xC3L,249UL},{253UL,8UL,249UL,0x6DL,0xA8L}},{{0xFAL,249UL,0x17L,249UL,0xFAL},{249UL,0x31L,0x34L,0UL,2UL},{0xFAL,255UL,255UL,0xFAL,0xC3L},{253UL,254UL,0xFCL,0x31L,2UL}},{{0x74L,0xFAL,0x74L,0xC3L,0xFAL},{2UL,8UL,0xA8L,0x31L,0xA8L},{1UL,1UL,0x17L,255UL,0xC3L},{0xEFL,0UL,0UL,1UL,0xA8L}},{{0xC3L,0x17L,5UL,0xC3L,255UL},{0x34L,0UL,2UL,0UL,0x34L},{5UL,0x74L,0x17L,255UL,0x74L},{0x34L,0UL,0xFCL,8UL,0UL}},{{0xC3L,255UL,1UL,0x74L,0x74L},{0xEFL,8UL,0xEFL,1UL,0x34L},{0x74L,0x17L,255UL,0x74L,255UL},{249UL,1UL,2UL,8UL,0xA8L}}};
                        int32_t *l_979[2][4][9] = {{{&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2]},{&l_926,&l_199,&l_926,&l_199,&l_926,&l_199,&l_926,&l_199,&l_926},{&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2]},{&l_926,&l_199,&l_926,&l_199,&l_926,&l_199,&l_926,&l_199,&l_926}},{{&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2]},{&l_926,&l_199,&l_926,&l_199,&l_926,&l_199,&l_926,&l_199,&l_926},{&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2],&l_201[0][2]},{&l_926,&l_199,&l_926,&l_199,&l_926,&l_199,&l_926,&l_199,&l_926}}};
                        uint32_t *l_983[2];
                        uint8_t l_985 = 249UL;
                        int8_t *l_987 = &g_200[0][1];
                        int64_t *l_1002 = (void*)0;
                        int64_t *l_1003 = (void*)0;
                        int64_t *l_1004[9][9] = {{&g_510[3][7],&g_630[(g_195 + 2)][g_195][(l_907 + 1)],&g_510[3][7],&g_510[3][7],&g_630[(g_195 + 2)][g_195][(l_907 + 1)],&g_510[3][7],&g_510[3][7],&g_630[(g_195 + 2)][g_195][(l_907 + 1)],&g_510[3][7]},{&l_544[0][0][6],&g_630[(l_641 + 1)][(l_641 + 1)][(g_195 + 1)],&l_544[0][0][6],(void*)0,(void*)0,(void*)0,&l_544[0][0][6],&g_630[(l_641 + 1)][(l_641 + 1)][(g_195 + 1)],&l_544[0][0][6]},{&g_510[3][7],&g_630[(g_195 + 2)][g_195][(l_907 + 1)],&g_510[3][7],&g_510[3][7],&g_630[(g_195 + 2)][g_195][(l_907 + 1)],&g_510[3][7],&g_510[3][7],&g_630[(g_195 + 2)][g_195][(l_907 + 1)],&g_510[3][7]},{&l_544[0][0][6],&g_630[(l_641 + 1)][(l_641 + 1)][(g_195 + 1)],&l_544[0][0][6],(void*)0,(void*)0,(void*)0,&l_544[0][0][6],&g_630[(l_641 + 1)][(l_641 + 1)][(g_195 + 1)],&l_544[0][0][6]},{&g_510[3][7],&g_630[(g_195 + 2)][g_195][(l_907 + 1)],&g_510[3][7],&g_510[3][7],&g_630[(g_195 + 2)][g_195][(l_907 + 1)],&g_510[3][7],&g_510[3][7],&g_630[(g_195 + 2)][g_195][(l_907 + 1)],&g_510[3][7]},{&l_544[0][0][6],&g_630[(l_641 + 1)][(l_641 + 1)][(g_195 + 1)],&l_544[0][0][6],(void*)0,(void*)0,(void*)0,&l_544[0][0][6],&g_630[(l_641 + 1)][(l_641 + 1)][(g_195 + 1)],&l_544[0][0][6]},{&g_510[3][7],&g_630[(g_195 + 2)][g_195][(l_907 + 1)],&g_510[3][7],&g_510[3][7],&g_630[(g_195 + 2)][g_195][(l_907 + 1)],&g_510[3][7],&g_510[3][7],&g_630[(g_195 + 2)][g_195][(l_907 + 1)],&g_510[3][7]},{&l_544[0][0][6],&g_630[(l_641 + 1)][(l_641 + 1)][(g_195 + 1)],&l_544[0][0][6],(void*)0,(void*)0,(void*)0,&l_544[0][0][6],&g_630[(l_641 + 1)][(l_641 + 1)][(g_195 + 1)],&l_544[0][0][6]},{&l_544[0][0][5],&g_510[3][7],&l_544[0][0][5],&l_544[0][0][5],&g_510[3][7],&l_544[0][0][5],&l_544[0][0][5],&g_510[3][7],&l_544[0][0][5]}};
                        int8_t ***l_1012 = &g_1010;
                        uint16_t **l_1014 = &l_143;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_983[i] = &l_836;
                        l_989 &= ((~(((safe_sub_func_int64_t_s_s(((l_988 = ((((safe_mul_func_int16_t_s_s((((0x7FL == ((*l_987) |= (safe_lshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((l_926 != (l_986[1] = ((((g_159 , g_630[(g_195 + 2)][g_195][(l_907 + 1)]) , g_194) , (((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((*l_906) = (((((safe_sub_func_uint32_t_u_u((l_984 |= ((((((((safe_sub_func_uint32_t_u_u(g_630[(l_641 + 1)][(l_641 + 1)][(g_195 + 1)], ((safe_mod_func_int32_t_s_s(((((((l_981 = (l_980 = ((((l_978[0][1][4] |= (((void*)0 == l_977) , ((*l_857) = ((*l_102) = (*l_857))))) , l_978[6][3][1]) >= 0xFCL) > (-8L)))) , g_574) >= g_749[1][0]) | (*g_62)) < l_945[8]) , l_909), g_630[(l_641 + 1)][(l_641 + 1)][(g_195 + 1)])) != l_982[4]))) == g_162) ^ 18446744073709551615UL) == l_909) < g_510[1][7]) != 0x98L) < l_909) & g_44)), l_985)) ^ g_630[(l_641 + 1)][(l_641 + 1)][(g_195 + 1)]) , g_630[(g_195 + 2)][g_195][(l_907 + 1)]) && g_630[(l_641 + 1)][(l_641 + 1)][(g_195 + 1)]) , l_945[0])) ^ g_157), 5)), 5)), g_157)) && (*l_857)) , (**l_98))) || 0x869EC177B0AF5E6ALL))), 5)) < l_914), (*l_95))))) != g_630[(l_641 + 1)][(l_641 + 1)][(g_195 + 1)]) != (-3L)), l_945[1])) ^ g_63) , 4294967286UL) <= g_126)) , l_909), 9UL)) < (*l_95)) <= g_453[2][2][0])) || l_909);
                        l_852[1] ^= (+((((safe_mod_func_uint8_t_u_u(((+(!0xFCL)) || (safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((!((safe_div_func_int32_t_s_s(((void*)0 != &g_925[0][4][0]), (((l_986[0] |= g_6) < (safe_rshift_func_uint8_t_u_u(((((*l_529) = l_1007) == &g_428) || ((((**l_98) < (((g_55 && ((((*l_1012) = g_1010) != &l_192) == l_909)) || l_909) , l_988)) == l_945[8]) || g_453[6][2][2])), 1))) , 0x4CDC856EL))) != (*g_62))), (*l_857))) != 0xB86738CCL), (*g_62)))), g_55)) >= (*l_95)) , l_1013) == l_1014));
                        (*l_857) |= l_914;
                    }
                    (*l_98) = &g_6;
                    if ((l_988 | g_736))
                    {
                        int32_t *l_1016 = &l_639;
                        int32_t *l_1017[4] = {&l_639,&l_639,&l_639,&l_639};
                        int i;
                        if (g_156)
                            goto lbl_1015;
                        g_1021--;
                        (*l_98) = &g_6;
                    }
                    else
                    {
                        if (g_636)
                            goto lbl_1015;
                        (*l_857) = l_926;
                    }
                }
                for (l_909 = (-18); (l_909 != 28); l_909++)
                {
                    if (l_981)
                        break;
                    g_345[6][2][0] = &g_6;
                    return l_1026;
                }
            }
        }
    }
    return g_510[2][8];
}







static uint16_t * func_83(int32_t * p_84, int32_t p_85, int32_t * p_86, uint32_t p_87)
{
    int32_t *l_114 = &g_6;
    int32_t **l_115 = &l_114;
    int32_t **l_116 = (void*)0;
    int32_t *l_118 = (void*)0;
    int32_t **l_117 = &l_118;
    int32_t l_121 = (-1L);
    uint16_t *l_122 = (void*)0;
    int32_t *l_125 = &g_126;
    uint64_t **l_127 = &g_103[1][2][1];
    int32_t *l_128 = &g_129;
    int32_t *l_130 = &g_131;
    int32_t *l_132 = (void*)0;
    int32_t *l_133 = (void*)0;
    int32_t *l_134 = &g_131;
    int32_t *l_135 = &g_131;
    int32_t l_136 = 0x08918639L;
    int32_t *l_137[1][2][7] = {{{(void*)0,&g_6,(void*)0,&g_6,(void*)0,&g_6,(void*)0},{&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131}}};
    uint64_t l_138[6] = {0x15057498DD06FED4LL,0xBF7BAE7F845CBE74LL,0x15057498DD06FED4LL,0x15057498DD06FED4LL,0xBF7BAE7F845CBE74LL,0x15057498DD06FED4LL};
    int i, j, k;
    (*l_130) |= ((*l_128) = (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(0x00DCL, ((((safe_rshift_func_int8_t_s_u(((((*l_115) = l_114) == ((*l_117) = &g_55)) || ((*l_114) && (*l_118))), 4)) != (safe_lshift_func_uint8_t_u_u((l_121 | (((&g_63 != l_122) < (safe_lshift_func_uint16_t_u_s(((((*l_125) ^= g_67) , l_127) != (void*)0), p_87))) >= 0xCA39L)), p_85))) | g_21) & p_85))), p_87)) ^ g_44), g_21)));
    --l_138[5];
    return &g_63;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_200[i][j], "g_200[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_205, "g_205", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_453[i][j][k], "g_453[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_510[i][j], "g_510[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_574, "g_574", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_630[i][j][k], "g_630[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_636, "g_636", print_hash_value);
    transparent_crc(g_693, "g_693", print_hash_value);
    transparent_crc(g_736, "g_736", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_749[i][j], "g_749[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_845, "g_845", print_hash_value);
    transparent_crc(g_861, "g_861", print_hash_value);
    transparent_crc(g_904, "g_904", print_hash_value);
    transparent_crc(g_923, "g_923", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_925[i][j][k], "g_925[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1018, "g_1018", print_hash_value);
    transparent_crc(g_1021, "g_1021", print_hash_value);
    transparent_crc(g_1036, "g_1036", print_hash_value);
    transparent_crc(g_1051, "g_1051", print_hash_value);
    transparent_crc(g_1099, "g_1099", print_hash_value);
    transparent_crc(g_1111, "g_1111", print_hash_value);
    transparent_crc(g_1164, "g_1164", print_hash_value);
    transparent_crc(g_1349, "g_1349", print_hash_value);
    transparent_crc(g_1373, "g_1373", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1393[i][j][k], "g_1393[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1576, "g_1576", print_hash_value);
    transparent_crc(g_1588, "g_1588", print_hash_value);
    transparent_crc(g_1695, "g_1695", print_hash_value);
    transparent_crc(g_2093, "g_2093", print_hash_value);
    transparent_crc(g_2207, "g_2207", print_hash_value);
    transparent_crc(g_2503, "g_2503", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_2568[i][j], "g_2568[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2589, "g_2589", print_hash_value);
    transparent_crc(g_2691, "g_2691", print_hash_value);
    transparent_crc(g_2714, "g_2714", print_hash_value);
    transparent_crc(g_2731, "g_2731", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2948[i], "g_2948[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3056, "g_3056", print_hash_value);
    transparent_crc(g_3197, "g_3197", print_hash_value);
    transparent_crc(g_3251, "g_3251", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_3573[i][j], "g_3573[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3641, "g_3641", print_hash_value);
    transparent_crc(g_3931, "g_3931", print_hash_value);
    transparent_crc(g_3958, "g_3958", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_4126[i][j], "g_4126[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_4469, "g_4469", print_hash_value);
    transparent_crc(g_4525, "g_4525", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_4889[i][j][k], "g_4889[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
