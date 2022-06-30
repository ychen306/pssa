// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = FE458C4F
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



static int32_t g_3 = (-2L);
static int32_t g_5 = (-1L);
static int32_t g_6 = 0L;
static uint16_t g_24 = 4UL;
static uint8_t g_66 = 255UL;
static int32_t g_87[10] = {0x06E2AFE5L,0x1A65742DL,0x06E2AFE5L,0x06E2AFE5L,0x1A65742DL,0x06E2AFE5L,0x06E2AFE5L,0x1A65742DL,0x06E2AFE5L,0x06E2AFE5L};
static int64_t g_114 = 0x616ADEA61E07D3A0LL;
static int8_t g_126 = 0xC0L;
static int64_t g_169[9][1] = {{0x7FB85FA97D6553E7LL},{0x7FB85FA97D6553E7LL},{0x7FB85FA97D6553E7LL},{0x7FB85FA97D6553E7LL},{0x7FB85FA97D6553E7LL},{0x7FB85FA97D6553E7LL},{0x7FB85FA97D6553E7LL},{0x7FB85FA97D6553E7LL},{0x7FB85FA97D6553E7LL}};
static uint32_t g_171 = 4294967289UL;
static int32_t g_215 = 4L;
static uint16_t *g_236 = &g_24;
static uint16_t **g_235 = &g_236;
static int8_t g_238[10][9][1] = {{{0x7FL},{0x36L},{0x7FL},{0x05L},{(-1L)},{0x6AL},{0x90L},{0x7FL},{0L}},{{1L},{0xD1L},{(-1L)},{0x6AL},{0x05L},{1L},{(-9L)},{0x59L},{0xD1L}},{{(-1L)},{(-1L)},{0xD1L},{0x59L},{(-9L)},{1L},{0x05L},{0x6AL},{(-1L)}},{{0x36L},{(-1L)},{5L},{0x90L},{0L},{(-5L)},{0xCCL},{0x1FL},{0x90L}},{{(-1L)},{0x90L},{0x1FL},{0xCCL},{(-5L)},{0L},{0x90L},{5L},{(-1L)}},{{0x36L},{0x81L},{(-5L)},{0x1FL},{(-1L)},{0x3DL},{0x05L},{0x36L},{0xCCL}},{{0xCCL},{0x36L},{0x05L},{0x3DL},{(-1L)},{0x1FL},{(-5L)},{0x81L},{0x36L}},{{(-1L)},{5L},{0x90L},{0L},{(-5L)},{0xCCL},{0x1FL},{0x90L},{(-1L)}},{{0x90L},{0x1FL},{0xCCL},{(-5L)},{0L},{0x90L},{5L},{(-1L)},{0x36L}},{{0x81L},{(-5L)},{0x1FL},{(-1L)},{0x3DL},{0x05L},{0x36L},{0xCCL},{0xCCL}}};
static int16_t g_314[7][3] = {{1L,0x9E9DL,1L},{(-6L),(-6L),(-6L)},{1L,0x9E9DL,1L},{(-6L),(-6L),(-6L)},{1L,0x9E9DL,1L},{(-6L),(-6L),(-6L)},{1L,0x9E9DL,1L}};
static int16_t *g_313 = &g_314[5][2];
static uint8_t g_320 = 0UL;
static int32_t *g_324 = &g_87[4];
static int16_t g_343 = 8L;
static const uint16_t g_350 = 5UL;
static const uint16_t g_352 = 0x993EL;
static int32_t **g_385[8] = {(void*)0,(void*)0,&g_324,(void*)0,(void*)0,&g_324,(void*)0,(void*)0};
static int32_t ***g_384[8][7][3] = {{{&g_385[1],(void*)0,(void*)0},{&g_385[1],&g_385[6],&g_385[1]},{&g_385[1],&g_385[7],(void*)0},{&g_385[6],&g_385[5],&g_385[3]},{&g_385[1],&g_385[0],&g_385[5]},{&g_385[1],&g_385[1],&g_385[1]},{&g_385[1],&g_385[1],(void*)0}},{{&g_385[6],&g_385[6],&g_385[1]},{&g_385[1],&g_385[1],(void*)0},{&g_385[1],&g_385[5],&g_385[1]},{&g_385[1],&g_385[5],&g_385[5]},{&g_385[6],&g_385[1],&g_385[6]},{&g_385[1],(void*)0,(void*)0},{&g_385[1],&g_385[6],&g_385[1]}},{{&g_385[1],&g_385[7],(void*)0},{&g_385[6],&g_385[5],&g_385[3]},{&g_385[1],&g_385[0],&g_385[5]},{&g_385[1],&g_385[1],&g_385[1]},{&g_385[1],&g_385[1],(void*)0},{&g_385[6],&g_385[6],&g_385[1]},{&g_385[1],&g_385[1],(void*)0}},{{&g_385[1],&g_385[5],&g_385[1]},{&g_385[1],&g_385[5],&g_385[5]},{&g_385[6],&g_385[1],&g_385[6]},{&g_385[1],(void*)0,(void*)0},{&g_385[1],&g_385[6],&g_385[1]},{&g_385[1],&g_385[7],(void*)0},{&g_385[6],&g_385[5],&g_385[3]}},{{&g_385[1],&g_385[0],&g_385[5]},{&g_385[1],&g_385[1],&g_385[1]},{&g_385[1],&g_385[1],(void*)0},{&g_385[6],&g_385[6],&g_385[1]},{&g_385[1],&g_385[1],(void*)0},{&g_385[0],(void*)0,(void*)0},{&g_385[1],&g_385[5],&g_385[2]}},{{&g_385[5],&g_385[1],&g_385[5]},{&g_385[1],&g_385[1],&g_385[1]},{&g_385[0],&g_385[1],&g_385[1]},{&g_385[1],(void*)0,&g_385[1]},{&g_385[5],(void*)0,&g_385[2]},{&g_385[1],(void*)0,&g_385[2]},{&g_385[0],&g_385[1],&g_385[0]}},{{&g_385[1],(void*)0,&g_385[1]},{&g_385[5],&g_385[1],(void*)0},{&g_385[1],&g_385[4],&g_385[1]},{&g_385[0],(void*)0,(void*)0},{&g_385[1],&g_385[5],&g_385[2]},{&g_385[5],&g_385[1],&g_385[5]},{&g_385[1],&g_385[1],&g_385[1]}},{{&g_385[0],&g_385[1],&g_385[1]},{&g_385[1],(void*)0,&g_385[1]},{&g_385[5],(void*)0,&g_385[2]},{&g_385[1],(void*)0,&g_385[2]},{&g_385[0],&g_385[1],&g_385[0]},{&g_385[1],(void*)0,&g_385[1]},{&g_385[5],&g_385[1],(void*)0}}};
static int8_t * const g_399 = &g_238[6][5][0];
static int8_t * const *g_398[7] = {&g_399,&g_399,&g_399,&g_399,&g_399,&g_399,&g_399};
static int64_t g_526 = 4L;
static uint32_t g_565 = 0x10B0F966L;
static uint8_t g_583 = 0x4DL;
static int8_t g_631 = 1L;
static uint32_t g_635 = 0x45BE5F99L;
static uint64_t g_676 = 0UL;
static uint64_t *g_675 = &g_676;
static uint64_t **g_674 = &g_675;
static int8_t *g_739 = &g_238[0][8][0];
static uint16_t g_782 = 65535UL;
static int32_t * const g_816[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t * const *g_815[6] = {&g_816[7],&g_816[7],&g_816[7],&g_816[7],&g_816[7],&g_816[7]};
static int32_t * const **g_814 = &g_815[0];
static int32_t * const ***g_813 = &g_814;
static uint32_t g_851 = 7UL;
static int64_t g_879 = 0x9D79F76128D7EA3CLL;
static uint32_t g_952 = 0xF1E4F3AEL;
static int8_t * const ** const *g_1117 = (void*)0;
static int16_t **g_1143 = &g_313;
static int16_t ***g_1142 = &g_1143;
static int16_t g_1157 = 0x8144L;
static uint64_t g_1176 = 0UL;
static uint64_t g_1193[8] = {0xA534B75BF375BE78LL,0xA534B75BF375BE78LL,0xA534B75BF375BE78LL,0xA534B75BF375BE78LL,0xA534B75BF375BE78LL,0xA534B75BF375BE78LL,0xA534B75BF375BE78LL,0xA534B75BF375BE78LL};
static int32_t g_1294[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static uint32_t g_1317 = 0UL;
static uint64_t g_1343 = 0x8801923A03C39252LL;
static int8_t *g_1379[10][10] = {{&g_631,&g_126,&g_126,&g_631,&g_631,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_631,&g_631,&g_631,&g_631,&g_631,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_631,&g_631,&g_126,&g_126,&g_631,&g_126,&g_631,&g_126},{&g_631,&g_631,&g_631,&g_126,&g_631,&g_631,&g_631,&g_631,&g_126,&g_126},{&g_631,&g_126,&g_126,&g_631,&g_631,&g_126,&g_126,&g_631,&g_126,&g_631},{&g_126,&g_126,&g_631,&g_126,&g_631,&g_126,&g_631,&g_126,&g_126,&g_631},{&g_631,&g_631,&g_631,&g_631,&g_126,&g_126,&g_631,&g_631,&g_631,&g_631},{&g_631,&g_126,&g_126,&g_631,&g_126,&g_631,&g_126,&g_631,&g_126,&g_126},{&g_631,&g_631,&g_631,&g_631,&g_126,&g_631,&g_631,&g_126,&g_631,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_631,&g_631,&g_631,&g_631,&g_631,&g_126}};
static int8_t **g_1378 = &g_1379[0][9];
static int8_t **g_1381 = &g_1379[0][9];
static uint16_t g_1385[4] = {65526UL,65526UL,65526UL,65526UL};
static int64_t g_1428 = 0x66A55E8B6385D747LL;
static int32_t ** const *g_1460 = &g_385[1];
static int64_t g_1500 = (-2L);
static int8_t g_1728 = 0x7EL;
static int32_t g_1730[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
static uint8_t g_1731 = 1UL;
static int32_t *g_1768 = &g_215;
static int32_t **g_1767 = &g_1768;
static int32_t ***g_1766[5][1][5] = {{{&g_1767,&g_1767,(void*)0,&g_1767,&g_1767}},{{&g_1767,&g_1767,&g_1767,&g_1767,&g_1767}},{{&g_1767,&g_1767,&g_1767,&g_1767,&g_1767}},{{&g_1767,&g_1767,&g_1767,(void*)0,(void*)0}},{{&g_1767,&g_1767,&g_1767,&g_1767,(void*)0}}};
static int16_t g_1792 = 0x3D11L;
static uint16_t ***g_1819 = &g_235;
static uint32_t g_1883 = 0xE7A74F05L;
static uint32_t *g_1917 = &g_1883;
static uint32_t **g_1916[2][9] = {{&g_1917,&g_1917,&g_1917,&g_1917,&g_1917,&g_1917,&g_1917,&g_1917,&g_1917},{&g_1917,&g_1917,&g_1917,&g_1917,&g_1917,&g_1917,&g_1917,&g_1917,&g_1917}};
static int16_t ****g_1962 = &g_1142;
static int16_t *****g_1961 = &g_1962;
static int32_t ****g_1964[2][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_384[0][3][0],&g_384[1][0][1],&g_384[0][3][0],&g_384[1][0][1],&g_384[0][3][0],&g_384[1][0][1],&g_384[0][3][0]}};
static int32_t *****g_1963[10][8][3] = {{{&g_1964[1][4],(void*)0,(void*)0},{&g_1964[1][4],&g_1964[1][4],&g_1964[1][4]},{&g_1964[1][4],&g_1964[0][3],&g_1964[1][5]},{&g_1964[1][4],&g_1964[1][4],&g_1964[0][1]},{&g_1964[1][4],&g_1964[1][4],&g_1964[0][4]},{&g_1964[1][4],&g_1964[1][4],&g_1964[1][4]},{&g_1964[1][4],&g_1964[1][4],(void*)0},{&g_1964[1][4],(void*)0,&g_1964[0][3]}},{{&g_1964[1][4],&g_1964[1][0],&g_1964[1][1]},{&g_1964[1][4],(void*)0,&g_1964[1][4]},{&g_1964[0][3],&g_1964[0][3],&g_1964[1][4]},{&g_1964[0][1],&g_1964[1][4],(void*)0},{(void*)0,&g_1964[1][4],&g_1964[1][4]},{&g_1964[0][4],&g_1964[0][3],&g_1964[1][1]},{&g_1964[0][6],(void*)0,&g_1964[1][4]},{&g_1964[1][4],&g_1964[1][4],(void*)0}},{{&g_1964[1][1],&g_1964[1][4],&g_1964[1][4]},{(void*)0,&g_1964[1][4],&g_1964[1][4]},{&g_1964[0][4],(void*)0,&g_1964[1][1]},{(void*)0,&g_1964[1][4],&g_1964[0][3]},{&g_1964[1][4],(void*)0,(void*)0},{&g_1964[1][1],&g_1964[1][4],&g_1964[1][4]},{&g_1964[1][4],&g_1964[1][4],&g_1964[0][4]},{&g_1964[1][4],&g_1964[1][4],&g_1964[0][1]}},{{(void*)0,&g_1964[1][4],&g_1964[1][5]},{&g_1964[0][6],(void*)0,&g_1964[1][4]},{&g_1964[1][1],&g_1964[1][4],(void*)0},{&g_1964[1][4],(void*)0,&g_1964[0][0]},{&g_1964[1][4],&g_1964[1][4],&g_1964[1][4]},{(void*)0,&g_1964[1][4],&g_1964[0][3]},{(void*)0,&g_1964[1][4],&g_1964[1][4]},{&g_1964[0][1],(void*)0,(void*)0}},{{&g_1964[1][4],&g_1964[0][3],&g_1964[0][0]},{&g_1964[0][1],&g_1964[1][4],&g_1964[1][4]},{(void*)0,&g_1964[1][4],&g_1964[1][4]},{&g_1964[1][4],&g_1964[0][6],&g_1964[1][4]},{(void*)0,&g_1964[1][4],&g_1964[1][1]},{&g_1964[1][4],&g_1964[1][4],&g_1964[1][4]},{&g_1964[1][4],(void*)0,&g_1964[1][5]},{&g_1964[1][4],&g_1964[1][4],(void*)0}},{{&g_1964[1][4],&g_1964[1][4],&g_1964[1][4]},{&g_1964[1][4],&g_1964[0][1],&g_1964[1][4]},{&g_1964[1][1],&g_1964[1][6],(void*)0},{&g_1964[1][4],(void*)0,&g_1964[1][5]},{&g_1964[1][4],&g_1964[1][1],&g_1964[1][4]},{&g_1964[1][4],&g_1964[1][4],&g_1964[1][1]},{&g_1964[1][5],&g_1964[1][4],&g_1964[1][4]},{&g_1964[1][4],&g_1964[1][6],&g_1964[1][4]}},{{&g_1964[1][4],&g_1964[1][4],&g_1964[1][4]},{(void*)0,&g_1964[0][4],&g_1964[0][3]},{&g_1964[1][4],&g_1964[1][4],&g_1964[1][4]},{&g_1964[1][5],&g_1964[0][4],&g_1964[1][4]},{&g_1964[1][4],&g_1964[1][4],&g_1964[1][4]},{&g_1964[0][3],&g_1964[1][6],(void*)0},{&g_1964[0][6],&g_1964[1][4],&g_1964[0][3]},{&g_1964[1][4],&g_1964[1][4],&g_1964[1][4]}},{{&g_1964[1][4],&g_1964[1][1],&g_1964[1][1]},{&g_1964[1][1],(void*)0,&g_1964[0][0]},{(void*)0,&g_1964[1][6],&g_1964[0][3]},{(void*)0,&g_1964[0][1],&g_1964[1][4]},{(void*)0,&g_1964[1][4],&g_1964[1][1]},{(void*)0,&g_1964[1][4],&g_1964[1][4]},{&g_1964[1][1],(void*)0,&g_1964[1][4]},{&g_1964[1][4],&g_1964[1][4],&g_1964[1][4]}},{{&g_1964[1][4],&g_1964[1][4],(void*)0},{&g_1964[0][6],&g_1964[0][6],&g_1964[1][1]},{&g_1964[0][3],&g_1964[1][1],&g_1964[1][4]},{&g_1964[1][4],&g_1964[0][3],&g_1964[1][4]},{&g_1964[1][5],(void*)0,&g_1964[1][4]},{&g_1964[1][4],&g_1964[1][4],&g_1964[1][4]},{(void*)0,&g_1964[1][4],&g_1964[1][4]},{&g_1964[1][4],&g_1964[0][4],&g_1964[1][1]}},{{&g_1964[1][4],&g_1964[1][4],(void*)0},{&g_1964[1][5],(void*)0,&g_1964[1][4]},{&g_1964[1][4],&g_1964[0][1],&g_1964[1][4]},{&g_1964[1][4],&g_1964[1][4],&g_1964[1][4]},{&g_1964[1][4],&g_1964[1][4],&g_1964[1][1]},{&g_1964[1][1],&g_1964[0][3],&g_1964[1][4]},{&g_1964[1][4],&g_1964[0][3],&g_1964[0][3]},{&g_1964[1][4],&g_1964[1][4],&g_1964[0][0]}}};
static uint8_t *g_1975[5][3] = {{&g_320,&g_320,&g_320},{(void*)0,(void*)0,(void*)0},{&g_320,&g_320,&g_320},{(void*)0,(void*)0,(void*)0},{&g_320,&g_320,&g_320}};
static uint8_t **g_1974 = &g_1975[4][2];
static uint8_t *g_1988 = &g_1731;
static int32_t * const g_2014 = &g_5;
static int32_t *g_2015 = &g_1730[3];
static const int32_t *g_2018 = &g_87[2];
static uint32_t g_2032 = 3UL;
static uint8_t g_2083 = 0x8AL;
static uint16_t g_2164 = 0x9A55L;
static uint8_t g_2429[10][9] = {{1UL,1UL,0x79L,0xACL,0x28L,0x9BL,0UL,0x0BL,0xACL},{0x5BL,1UL,1UL,0UL,0xFDL,0xFEL,1UL,0xFEL,0xFDL},{1UL,0x0BL,0x0BL,1UL,0xC6L,0xFEL,0UL,0x28L,0xB4L},{3UL,0UL,0xD3L,0xFDL,1UL,0x9BL,0x79L,0xD3L,0x0BL},{0x28L,0UL,251UL,9UL,0UL,1UL,0UL,1UL,0x54L},{0x28L,0x28L,1UL,1UL,0xB4L,0x0BL,0x79L,0x5BL,1UL},{9UL,0x9BL,0xD3L,0xB4L,1UL,0xC9L,0x9BL,251UL,0xFEL},{0xACL,0xFEL,1UL,0xD3L,1UL,0xD3L,1UL,0xFEL,0xACL},{0x79L,0xFEL,0x54L,0x5BL,0x28L,0xFDL,1UL,0x54L,1UL},{1UL,0x9BL,0xC6L,0UL,3UL,1UL,1UL,255UL,255UL}};
static const uint64_t *g_2466 = (void*)0;
static const uint64_t **g_2465 = &g_2466;
static const uint64_t ***g_2464[2][1] = {{&g_2465},{&g_2465}};
static const uint64_t ****g_2463 = &g_2464[0][0];
static int8_t * const ** const **g_2483 = &g_1117;
static int32_t *g_2556 = &g_1294[2];
static int32_t *** const * const g_2570 = &g_1766[2][0][3];
static int32_t *** const * const *g_2569 = &g_2570;
static uint8_t ***g_2610 = &g_1974;
static uint64_t g_2642 = 0xA696B79697005037LL;
static int8_t *****g_2716 = (void*)0;
static const int8_t *g_2787 = &g_631;
static const int8_t **g_2786[2] = {&g_2787,&g_2787};
static int8_t g_2806 = 0xD3L;
static uint32_t g_2807 = 0xD1E34C79L;
static int32_t g_2962 = (-9L);
static uint32_t g_2998 = 0x77C579B2L;
static int64_t g_3007[6][3][6] = {{{0x2715F8DFB6465B29LL,(-4L),0x00B966F48219A7E7LL,5L,1L,0L},{(-5L),0x1A28B42333C927B1LL,(-1L),0xD8A129CBE1E4D312LL,0x4BF30CF5E90A9FAALL,0xFB561D8546A6DF83LL},{1L,0L,5L,(-1L),0x3F3FF72E5469AB04LL,0xD95C94F6EE85357DLL}},{{(-2L),5L,(-1L),0L,(-4L),0L},{0L,0x3EB2B19E193CEC65LL,0L,1L,0L,0x8726A0042BA897BDLL},{0x3EB2B19E193CEC65LL,1L,1L,0xC27C826D2B050396LL,0xE3AB8C11DC6F7A2FLL,0L}},{{0x72038600D043EC30LL,5L,3L,0xC27C826D2B050396LL,(-2L),1L},{0x3EB2B19E193CEC65LL,0x65969C3419BBD049LL,0x62BE92F4A03B419BLL,1L,0L,0x00B966F48219A7E7LL},{0L,0x9360D0032A9EE2D5LL,0xD271C101741B2AFALL,0L,0x00B966F48219A7E7LL,0x32183D6047DEC28BLL}},{{(-2L),0x92C8A53C911C2E8ALL,0L,(-1L),(-3L),0x65885F2E4A146B3ELL},{1L,(-1L),0x9360D0032A9EE2D5LL,0xD8A129CBE1E4D312LL,(-1L),0x3052993452BE1D90LL},{(-5L),0xD271C101741B2AFALL,0xFB561D8546A6DF83LL,5L,(-1L),0xC27C826D2B050396LL}},{{0x2715F8DFB6465B29LL,0x3052993452BE1D90LL,(-1L),0x72038600D043EC30LL,0x72038600D043EC30LL,(-1L)},{0x8726A0042BA897BDLL,0x8726A0042BA897BDLL,0x3F3FF72E5469AB04LL,(-4L),2L,0x62BE92F4A03B419BLL},{0xC27C826D2B050396LL,0L,0x72038600D043EC30LL,0L,1L,0x3F3FF72E5469AB04LL}},{{0L,0xC27C826D2B050396LL,0x72038600D043EC30LL,(-1L),0x8726A0042BA897BDLL,0x62BE92F4A03B419BLL},{0x5ABFE93F6C5DAEEFLL,(-1L),0x3F3FF72E5469AB04LL,(-1L),(-3L),(-1L)},{(-1L),(-3L),(-1L),1L,0x1A28B42333C927B1LL,0xC27C826D2B050396LL}}};
static int16_t g_3015[5][8] = {{(-1L),0x241DL,0xE821L,0x241DL,(-1L),(-1L),0x241DL,0xE821L},{(-1L),(-1L),0x241DL,0xE821L,0x241DL,(-1L),(-1L),0x241DL},{0xE606L,0x241DL,0x241DL,0xE606L,0xB46FL,0xE606L,0x241DL,0x241DL},{0x241DL,0xB46FL,0xE821L,0xE821L,0xB46FL,0xE606L,(-1L),0xB46FL},{0xE821L,(-1L),0xE821L,0xE606L,0xE606L,0xE821L,(-1L),0xE821L}};
static uint64_t g_3066 = 0x0932282CD561D9CFLL;
static int32_t * const ****g_3071 = &g_813;
static int32_t * const ****g_3073 = (void*)0;
static uint32_t *g_3085 = (void*)0;
static uint32_t **g_3084 = &g_3085;
static int8_t g_3262 = (-1L);
static const uint8_t *g_3268 = &g_2083;
static const uint8_t **g_3267 = &g_3268;
static uint16_t g_3291 = 65532UL;
static int32_t *g_3314 = &g_1730[3];
static uint8_t g_3342 = 246UL;
static int32_t g_3485 = (-1L);
static uint64_t g_3498[2][6][9] = {{{18446744073709551615UL,0xE9646DE8BF481C2DLL,0x1A9A5A940221CCE6LL,0UL,1UL,18446744073709551615UL,0xC854D94BB2136C35LL,0x997D4DDDCAE036D9LL,18446744073709551615UL},{0x1A9A5A940221CCE6LL,0x997D4DDDCAE036D9LL,0x5609D0FD9C544161LL,0xC854D94BB2136C35LL,0UL,18446744073709551615UL,0x6CB758EF96C4DEFBLL,0UL,0x513D8D3DC6B6F56BLL},{0xF7120C5850040D9CLL,0x997D4DDDCAE036D9LL,18446744073709551615UL,0x513D8D3DC6B6F56BLL,0xE9646DE8BF481C2DLL,0xC3ED6FB7270A1387LL,0x346D9161C7FFF946LL,0x92F7E2392AD62FA4LL,18446744073709551606UL},{0x6CB758EF96C4DEFBLL,0xE9646DE8BF481C2DLL,18446744073709551606UL,0x6CB758EF96C4DEFBLL,18446744073709551615UL,18446744073709551615UL,0x5609D0FD9C544161LL,1UL,0xC1031152B94AC874LL},{0x6CB758EF96C4DEFBLL,0xA8F0ECE76CC37200LL,0x33CBC0388173A9B1LL,18446744073709551615UL,6UL,18446744073709551615UL,18446744073709551615UL,6UL,18446744073709551615UL},{0xF7120C5850040D9CLL,0x92F7E2392AD62FA4LL,0xF7120C5850040D9CLL,0x33CBC0388173A9B1LL,18446744073709551615UL,0x346D9161C7FFF946LL,0x513D8D3DC6B6F56BLL,1UL,18446744073709551615UL}},{{0x1A9A5A940221CCE6LL,0x802566E7ED37112CLL,0xC1031152B94AC874LL,0x5609D0FD9C544161LL,0xE9646DE8BF481C2DLL,0UL,18446744073709551606UL,0x511F0B477FE35FCELL,0xC1031152B94AC874LL},{18446744073709551615UL,0x88104DD844676782LL,0xC3ED6FB7270A1387LL,0x33CBC0388173A9B1LL,0UL,0xF7120C5850040D9CLL,0xC1031152B94AC874LL,0x511F0B477FE35FCELL,18446744073709551606UL},{0x346D9161C7FFF946LL,0xC30BD21896EE4FFCLL,0UL,18446744073709551615UL,1UL,18446744073709551612UL,18446744073709551615UL,1UL,0x513D8D3DC6B6F56BLL},{18446744073709551612UL,0UL,0xC3ED6FB7270A1387LL,0x6CB758EF96C4DEFBLL,0xA8F0ECE76CC37200LL,0x33CBC0388173A9B1LL,18446744073709551615UL,6UL,18446744073709551615UL},{0x5609D0FD9C544161LL,1UL,0xC1031152B94AC874LL,0x513D8D3DC6B6F56BLL,0x997D4DDDCAE036D9LL,0x513D8D3DC6B6F56BLL,0xC1031152B94AC874LL,1UL,0x5609D0FD9C544161LL},{0x9A4FE14AE95E99C1LL,0UL,0xF7120C5850040D9CLL,0xC854D94BB2136C35LL,0x88104DD844676782LL,0x513D8D3DC6B6F56BLL,18446744073709551606UL,0x92F7E2392AD62FA4LL,0x346D9161C7FFF946LL}}};
static int32_t g_3542 = 0x507CB8EDL;
static int32_t g_3545 = 0x7035D55DL;
static int32_t g_3546 = 0x71C0B28BL;
static int32_t g_3547[7][9][4] = {{{(-1L),0L,(-1L),0xE61AEAEDL},{0xDFBD4943L,(-3L),0xD9DBB69FL,0L},{4L,9L,0x23347C82L,0x08288E3EL},{0L,0xA0C671D3L,3L,0xC9DB04C5L},{0x08288E3EL,0x7FDAA055L,(-4L),0L},{0xB5213EAAL,1L,0xEBB841A9L,0xEBB841A9L},{0x4D071F3FL,0x4D071F3FL,2L,1L},{(-4L),0x93B470B2L,(-3L),0xCDDD4112L},{0L,9L,0x6A8B7343L,(-3L)}},{{0L,9L,1L,0xCDDD4112L},{9L,0x93B470B2L,0x2BD013ADL,1L},{1L,0x4D071F3FL,0x5947FEC9L,0xEBB841A9L},{0x9834E8B9L,1L,(-1L),0L},{(-5L),0x7FDAA055L,0x4D071F3FL,0xC9DB04C5L},{(-5L),0xA0C671D3L,(-5L),0x08288E3EL},{0x93B470B2L,9L,0x66CC35E2L,0L},{0L,(-3L),0xC2431106L,0xE61AEAEDL},{0x6D823B8CL,0L,1L,0xB18247F6L}},{{0xC2431106L,0x4709928FL,0x0A6DE525L,0x9834E8B9L},{0x3E22FCE7L,0L,0xDFBD4943L,0xA0C671D3L},{0xE61AEAEDL,(-3L),0xC9DB04C5L,1L},{(-4L),0x9834E8B9L,0L,(-1L)},{1L,0L,0xB18247F6L,0L},{0x6A8B7343L,0x3E22FCE7L,0x6E6D7A05L,0x3E22FCE7L},{0xE0BEB827L,0x2BD013ADL,0xE61AEAEDL,0xDFBD4943L},{0x9834E8B9L,0x6E6D7A05L,0x4D66A72DL,(-3L)},{(-1L),0x2109C1E7L,0xE8209197L,0x7FDAA055L}},{{(-1L),1L,0x4D66A72DL,0xCDDD4112L},{0x9834E8B9L,0x7FDAA055L,0xE61AEAEDL,0x7A204212L},{0xE0BEB827L,1L,0x6E6D7A05L,0xC986F91FL},{0x6A8B7343L,0x6D823B8CL,0xB18247F6L,0x0A6DE525L},{1L,(-1L),0L,1L},{(-4L),0xF44E9B42L,0xC9DB04C5L,0xFBB8EBFDL},{0xE61AEAEDL,1L,0xDFBD4943L,(-4L)},{0x3E22FCE7L,0x4D071F3FL,0x0A6DE525L,0x2109C1E7L},{0xC2431106L,0x23347C82L,1L,0L}},{{(-5L),0x0787E192L,8L,0x6E6D7A05L},{0x4D66A72DL,(-5L),2L,0xC7DDE8B0L},{0x9F7CF59BL,0xE0BEB827L,2L,0x90604992L},{0x08288E3EL,0x93B470B2L,0L,0x3871620EL},{2L,9L,0x90604992L,0xC9DB04C5L},{(-1L),0xCDDD4112L,0xCDDD4112L,(-1L)},{0L,(-5L),0x2109C1E7L,9L},{0xC986F91FL,0xE61AEAEDL,0xF44E9B42L,0xEF1B19EAL},{0x66CC35E2L,0xB5213EAAL,0x4709928FL,0xEF1B19EAL}},{{0xEBB841A9L,0xE61AEAEDL,0L,9L},{(-1L),(-5L),0x6A8B7343L,(-1L)},{0L,0xCDDD4112L,1L,0xC9DB04C5L},{0xC3D16882L,9L,(-1L),0x3871620EL},{(-1L),0x93B470B2L,0x4D071F3FL,0x90604992L},{0x5947FEC9L,0xE0BEB827L,1L,0xC7DDE8B0L},{1L,(-5L),0x6D823B8CL,0x6E6D7A05L},{0x3871620EL,0x0787E192L,3L,0L},{0L,0x23347C82L,9L,0x2109C1E7L}},{{1L,0x4D071F3FL,0xB5213EAAL,(-4L)},{0x0A6DE525L,1L,0L,0xFBB8EBFDL},{0x7A204212L,0xF44E9B42L,0x2BD013ADL,1L},{0x4709928FL,(-1L),1L,0x0A6DE525L},{0x938AF8E9L,0x6D823B8CL,(-1L),0xC986F91FL},{0xEF1B19EAL,1L,0xEF1B19EAL,0x7A204212L},{9L,0x7FDAA055L,0xEBB841A9L,0xCDDD4112L},{0xB18247F6L,1L,0x3E22FCE7L,0x7FDAA055L},{1L,0x2109C1E7L,0x3E22FCE7L,(-3L)}}};
static int32_t g_3548 = (-6L);
static int32_t g_3549 = 0x9D36F1FBL;
static int32_t g_3550 = 0L;
static int32_t g_3551 = (-10L);
static int32_t g_3552 = (-3L);
static int32_t g_3553[7][6][5] = {{{0x988650A3L,0xBB756CA9L,1L,0xE4AFE92FL,0xC9D0489FL},{0x7E5AE18AL,0x1F7DA729L,1L,0x67284FE1L,0L},{(-1L),0xF1EF7808L,(-10L),0x2E8E64B4L,0xDC3E3840L},{0x2F4A7652L,0x22D9C656L,0xC8AE3082L,0x5B10A96CL,0xC8AE3082L},{0xFCFD12CFL,(-5L),1L,(-1L),0x988650A3L},{0L,(-1L),0x1F7DA729L,0x85962659L,0x5B10A96CL}},{{(-5L),0xF910882BL,(-1L),1L,0x7C0130AFL},{0x22D9C656L,(-1L),1L,0x2F4A7652L,0x8BD693C5L},{0L,(-5L),(-1L),(-5L),0L},{0x67284FE1L,0x22D9C656L,(-3L),0L,0x050F2234L},{(-1L),0xF1EF7808L,0x295EE5ACL,0x480BDC6AL,(-1L)},{(-3L),(-3L),0x8854BAD4L,0x22D9C656L,0x050F2234L}},{{0x7C0130AFL,0x480BDC6AL,(-1L),1L,0L},{0x050F2234L,0L,0x050F2234L,0x67284FE1L,0x8BD693C5L},{0xBA91D73EL,0x3EE52FB4L,1L,0x2D930B62L,0x7C0130AFL},{0L,0x8BD693C5L,0x7E5AE18AL,(-3L),0x5B10A96CL},{0xC9D0489FL,0xE4AFE92FL,1L,0xBB756CA9L,0x988650A3L},{0L,0xC8AE3082L,0x050F2234L,0x050F2234L,0xC8AE3082L}},{{9L,0xC09072C3L,(-1L),7L,0xDC3E3840L},{(-3L),0x1F7DA729L,0x8854BAD4L,0L,1L},{1L,7L,0x295EE5ACL,0x0DD75A80L,0x4C9BACD4L},{(-3L),1L,(-3L),0L,0x22D9C656L},{9L,1L,(-1L),0xC36256D9L,(-1L)},{0L,(-3L),1L,(-3L),0x3225B5D9L}},{{0xC9D0489FL,0x2E8E64B4L,(-1L),(-3L),0xF6A42F4BL},{0L,0x8854BAD4L,0x1F7DA729L,(-3L),0L},{0xBA91D73EL,0x2D930B62L,1L,0xC36256D9L,1L},{0x050F2234L,0x050F2234L,0xC8AE3082L,0L,0x8854BAD4L},{0x7C0130AFL,(-3L),(-10L),0x0DD75A80L,9L},{(-3L),0x7E5AE18AL,0x8BD693C5L,0L,0L}},{{(-1L),(-3L),0x6A37B006L,7L,(-1L)},{0x67284FE1L,0x050F2234L,0L,0x050F2234L,0x67284FE1L},{0L,0x2D930B62L,(-5L),0xBB756CA9L,0xFCFD12CFL},{0x22D9C656L,0x8854BAD4L,(-3L),(-3L),0L},{(-5L),0x2E8E64B4L,0x988650A3L,0x2D930B62L,0xFCFD12CFL},{0L,(-3L),0x22D9C656L,0x67284FE1L,0x67284FE1L}},{{0xFCFD12CFL,1L,0xFCFD12CFL,1L,(-1L)},{0x2F4A7652L,1L,(-1L),0x22D9C656L,0L},{(-1L),7L,0x61F8B5B3L,0x480BDC6AL,9L},{0x85962659L,0x1F7DA729L,(-1L),0L,0x8854BAD4L},{0xC7787A92L,0xF910882BL,0xDC3E3840L,1L,0x61F8B5B3L},{0xCE5DDC01L,0x7E5AE18AL,0L,0x1F7DA729L,1L}}};
static int32_t g_3554 = 1L;
static int32_t g_3555[8] = {0L,0x42826020L,0L,0L,0x42826020L,0L,0L,0x42826020L};
static int32_t g_3556 = 0xA761A653L;
static int32_t g_3557[2][7][6] = {{{3L,0x838F5ED0L,(-5L),0xA2D62D68L,(-5L),0x838F5ED0L},{3L,0x838F5ED0L,(-5L),0xA2D62D68L,(-5L),0x838F5ED0L},{3L,0x838F5ED0L,(-5L),0xA2D62D68L,(-5L),0x838F5ED0L},{3L,0x838F5ED0L,(-5L),0xA2D62D68L,(-5L),0x838F5ED0L},{3L,0x838F5ED0L,(-5L),0xA2D62D68L,(-5L),0x838F5ED0L},{3L,0x838F5ED0L,(-5L),0xA2D62D68L,(-5L),0x838F5ED0L},{3L,0x838F5ED0L,(-5L),0xA2D62D68L,(-5L),0x838F5ED0L}},{{3L,0x838F5ED0L,(-5L),0xA2D62D68L,(-5L),0x838F5ED0L},{3L,0x838F5ED0L,(-5L),0xA2D62D68L,(-5L),0x838F5ED0L},{3L,0x838F5ED0L,(-5L),0xA2D62D68L,(-5L),0x838F5ED0L},{3L,0x838F5ED0L,(-5L),0xA2D62D68L,(-5L),0x838F5ED0L},{3L,0x838F5ED0L,(-5L),0xA2D62D68L,(-5L),0x838F5ED0L},{3L,0x838F5ED0L,(-5L),0xA2D62D68L,(-5L),0x838F5ED0L},{3L,0x838F5ED0L,(-5L),0xA2D62D68L,(-5L),0x838F5ED0L}}};
static int32_t g_3558 = 0L;
static int32_t g_3559 = 0L;
static int32_t g_3560 = (-6L);
static int32_t g_3561[3] = {(-8L),(-8L),(-8L)};
static int32_t g_3562 = 9L;
static int32_t g_3563 = 0x762AE6CFL;
static int32_t g_3564 = 0xCC9B24FFL;
static int32_t g_3565 = 0xB480F32AL;
static int32_t g_3566 = (-7L);
static int32_t g_3567 = 2L;
static int32_t g_3568 = 0x73B02F47L;
static int32_t g_3569 = (-9L);
static int32_t g_3570 = (-1L);
static int32_t * const g_3544[1][10][10] = {{{&g_3545,&g_3566,(void*)0,(void*)0,&g_3563,&g_3559,&g_3548,&g_3556,&g_3559,&g_3554},{&g_3550,&g_3564,&g_3547[2][7][2],&g_3550,&g_3545,&g_3562,&g_3570,&g_3548,&g_3570,&g_3562},{&g_3551,&g_3560,(void*)0,&g_3560,&g_3551,&g_3561[1],&g_3564,(void*)0,(void*)0,&g_3564},{&g_3548,(void*)0,&g_3550,(void*)0,(void*)0,&g_3556,&g_3554,&g_3547[2][7][2],&g_3559,&g_3564},{&g_3567,(void*)0,&g_3559,&g_3570,&g_3551,&g_3550,&g_3567,&g_3554,&g_3562,&g_3562},{&g_3560,&g_3553[4][0][0],&g_3565,&g_3545,&g_3545,&g_3565,&g_3553[4][0][0],&g_3560,&g_3561[1],&g_3554},{&g_3548,&g_3562,&g_3567,&g_3568,&g_3563,(void*)0,&g_3560,&g_3562,&g_3556,&g_3545},{&g_3559,(void*)0,&g_3567,&g_3563,&g_3553[4][0][0],&g_3562,&g_3563,&g_3560,&g_3550,&g_3559},{(void*)0,&g_3568,&g_3565,&g_3554,&g_3564,(void*)0,&g_3570,&g_3562,&g_3545,&g_3550},{(void*)0,&g_3549,&g_3565,&g_3550,(void*)0,&g_3552,&g_3567,(void*)0,&g_3558,&g_3556}}};
static int32_t * const *g_3543 = &g_3544[0][5][8];
static int8_t ** const *g_3680 = &g_1381;
static int8_t ** const **g_3679 = &g_3680;
static int8_t ** const ***g_3678[2][2] = {{&g_3679,&g_3679},{&g_3679,&g_3679}};
static int32_t *** const *g_3692 = &g_384[7][3][2];
static int32_t *** const **g_3691 = &g_3692;
static int16_t g_3757 = 0x88D2L;
static int16_t * const g_3756 = &g_3757;
static int16_t * const * const g_3755 = &g_3756;
static int16_t * const * const *g_3754 = &g_3755;
static int8_t g_3770 = 0xEDL;
static const uint8_t ***g_3829 = &g_3267;
static const uint8_t ****g_3828 = &g_3829;
static const uint8_t **** const *g_3827 = &g_3828;
static int32_t g_3846 = 0x42E6B2D8L;
static uint32_t g_3874 = 0x95AB8EB5L;
static uint16_t g_4023 = 1UL;
static uint32_t g_4095 = 18446744073709551615UL;
static int32_t *g_4124[7] = {&g_2962,&g_2962,&g_2962,&g_2962,&g_2962,&g_2962,&g_2962};
static int32_t ****g_4135 = &g_1766[1][0][4];
static int32_t *****g_4134 = &g_4135;
static uint16_t ****g_4243[6] = {&g_1819,&g_1819,&g_1819,&g_1819,&g_1819,&g_1819};
static uint16_t *****g_4242 = &g_4243[0];
static int16_t g_4424 = 0xCB17L;
static uint16_t g_4436 = 1UL;



static uint8_t func_1(void);
static uint16_t func_11(uint32_t p_12, int32_t * p_13);
static int32_t * func_15(uint32_t p_16, uint32_t p_17, int32_t * p_18);
static const int8_t func_25(uint64_t p_26, int8_t p_27, const int16_t p_28, uint32_t p_29);
static uint64_t func_30(int32_t p_31, uint64_t p_32);
static int16_t func_39(const uint16_t * p_40, int32_t * p_41, int32_t p_42, uint16_t p_43, uint16_t p_44);
static const uint16_t * func_45(uint16_t * p_46, uint16_t * p_47, uint64_t p_48);
static uint16_t * func_49(int32_t * p_50, uint16_t * p_51, uint32_t p_52, uint32_t p_53, const uint32_t p_54);
static int8_t func_58(int16_t p_59, uint64_t p_60, uint16_t * p_61, int32_t p_62);
static uint16_t ** func_68(const int32_t p_69, int32_t * p_70);
# 206 "<stdin>"
static uint8_t func_1(void)
{
    int32_t l_2[5][10][3] = {{{0L,1L,0xF3D4E677L},{0x9A4D91F0L,(-5L),0xA9A98436L},{0L,1L,0x72759951L},{0xDC86695CL,(-5L),3L},{0x2304B25BL,1L,0xBEB96916L},{0xE67E784BL,(-1L),0xF3D4E677L},{0L,1L,0x758B39D2L},{0L,1L,5L},{0xE67E784BL,0x72759951L,(-5L)},{0x2304B25BL,0L,(-10L)}},{{0xDC86695CL,0x8607F470L,0xF3D4E677L},{0L,5L,(-10L)},{0x9A4D91F0L,1L,(-5L)},{0L,3L,5L},{0x2304B25BL,0x03F0244CL,0x758B39D2L},{(-4L),0x03F0244CL,0xF3D4E677L},{0x3C86992FL,3L,0xBEB96916L},{6L,1L,3L},{0x257EA0D0L,5L,0x72759951L},{0x2304B25BL,0x8607F470L,0xA9A98436L}},{{0x257EA0D0L,0L,0xF3D4E677L},{6L,0x72759951L,1L},{0x3C86992FL,1L,1L},{(-4L),1L,1L},{0x2304B25BL,(-1L),1L},{0L,1L,0xF3D4E677L},{0x9A4D91F0L,(-5L),0xA9A98436L},{0L,1L,0x72759951L},{0xDC86695CL,(-5L),3L},{0x2304B25BL,1L,0xBEB96916L}},{{0xE67E784BL,(-1L),0xF3D4E677L},{0L,1L,0x758B39D2L},{0L,1L,5L},{0xE67E784BL,0x72759951L,(-5L)},{0x2304B25BL,0L,(-10L)},{0xDC86695CL,0x8607F470L,0xF3D4E677L},{0L,5L,(-10L)},{0x9A4D91F0L,1L,(-5L)},{0L,3L,5L},{0x2304B25BL,0x03F0244CL,0x758B39D2L}},{{(-4L),0x03F0244CL,0xF3D4E677L},{0x3C86992FL,3L,0xBEB96916L},{6L,1L,3L},{0x257EA0D0L,5L,0x72759951L},{0x2304B25BL,0x8607F470L,0xA9A98436L},{0x257EA0D0L,0L,0xF3D4E677L},{6L,0x72759951L,1L},{0x3C86992FL,1L,1L},{(-4L),1L,1L},{0x2304B25BL,(-1L),1L}}};
    const uint32_t l_1272[5] = {4UL,4UL,4UL,4UL,4UL};
    int32_t l_4314 = 1L;
    uint32_t *l_4373[2][10][9] = {{{&g_171,&g_2998,(void*)0,&g_2998,&g_1317,(void*)0,(void*)0,&g_1317,&g_2998},{&g_171,&g_1317,&g_171,&g_565,&g_952,&g_171,&g_565,&g_2998,(void*)0},{(void*)0,&g_565,&g_1317,&g_1317,&g_1317,&g_952,&g_1317,&g_1317,&g_1317},{(void*)0,&g_952,&g_952,&g_565,&g_565,&g_2998,&g_1317,&g_2998,&g_1317},{&g_952,&g_1317,&g_952,&g_2998,(void*)0,(void*)0,&g_2998,&g_952,&g_1317},{(void*)0,&g_2998,&g_952,&g_1317,&g_1317,&g_565,(void*)0,&g_2998,&g_952},{&g_1317,&g_952,&g_1317,&g_1317,&g_2998,&g_1317,&g_1317,&g_952,&g_1317},{&g_1317,&g_2998,&g_171,&g_565,(void*)0,&g_565,&g_1317,&g_1317,&g_2998},{&g_171,&g_1317,&g_2998,&g_952,&g_952,&g_2998,&g_1317,&g_171,&g_952},{&g_1317,&g_952,&g_1317,&g_565,&g_2998,&g_1317,&g_952,&g_565,&g_171}},{{&g_1317,&g_565,&g_2998,&g_171,&g_2998,&g_565,&g_1317,(void*)0,&g_952},{(void*)0,&g_1317,&g_565,&g_2998,&g_171,&g_2998,&g_2998,&g_952,&g_2998},{&g_952,&g_565,(void*)0,(void*)0,&g_565,&g_952,&g_952,(void*)0,&g_1317},{(void*)0,(void*)0,&g_565,&g_2998,(void*)0,&g_171,&g_171,&g_565,&g_952},{(void*)0,&g_2998,&g_1317,&g_2998,(void*)0,&g_2998,&g_952,&g_171,&g_1317},{&g_171,&g_565,(void*)0,&g_565,&g_1317,&g_1317,&g_2998,&g_1317,&g_1317},{&g_952,&g_1317,&g_1317,&g_952,(void*)0,&g_2998,&g_1317,&g_952,&g_1317},{(void*)0,&g_1317,&g_2998,&g_952,&g_1317,&g_171,&g_952,&g_2998,(void*)0},{&g_565,&g_171,&g_565,&g_2998,(void*)0,&g_952,&g_1317,&g_952,&g_2998},{&g_565,&g_2998,&g_1317,&g_2998,&g_1317,&g_2998,&g_1317,&g_2998,&g_1317}}};
    int32_t *****l_4374 = &g_4135;
    const uint16_t *l_4380 = &g_2164;
    const uint16_t **l_4379 = &l_4380;
    const uint16_t ***l_4378 = &l_4379;
    const uint16_t ****l_4377 = &l_4378;
    int32_t l_4393 = (-1L);
    uint32_t ***l_4405[1][3][4] = {{{&g_1916[0][3],&g_1916[0][3],&g_1916[0][3],&g_1916[0][3]},{&g_1916[0][3],&g_1916[0][3],&g_1916[0][3],&g_1916[0][3]},{&g_1916[0][3],&g_1916[0][3],&g_1916[0][3],&g_1916[0][3]}}};
    int32_t *l_4438[7][1][3];
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_4438[i][j][k] = &g_3;
        }
    }
    for (g_3 = 0; (g_3 <= 2); g_3 += 1)
    {
        int32_t *l_4 = &l_2[0][7][2];
        uint16_t *l_1271 = &g_24;
        uint32_t l_2808 = 2UL;
        int32_t l_4315 = 0x1B85FDC6L;
        int32_t l_4332 = (-4L);
        (*l_4) = l_2[4][0][2];
        for (g_5 = 0; (g_5 <= 2); g_5 += 1)
        {
            uint32_t l_14 = 0UL;
            uint16_t *l_55 = &g_24;
            int32_t *l_2615 = &g_3;
            int32_t l_4362 = 0xC8043FA1L;
            int32_t l_4363 = 0x019D96A4L;
            int16_t l_4366 = (-1L);
            for (g_6 = 0; (g_6 <= 2); g_6 += 1)
            {
                uint16_t *l_23 = &g_24;
                uint8_t *l_65 = &g_66;
                int32_t l_2816 = 0x67A771CAL;
                uint64_t *l_3497 = &g_3498[1][4][8];
                const int32_t l_4301 = 0x0B5DE0B4L;
                int8_t l_4302 = 8L;
                int64_t l_4303 = 0L;
                int i, j, k;
                if (l_2[g_3][(g_6 + 5)][g_3])
                    break;
            }
            for (g_2806 = 2; (g_2806 >= 0); g_2806 -= 1)
            {
                int i, j, k;
                return l_2[(g_3 + 2)][(g_3 + 1)][g_2806];
            }
            for (g_3846 = 0; (g_3846 <= 2); g_3846 += 1)
            {
                uint32_t *l_4319 = &g_565;
                int32_t l_4331 = (-1L);
                int32_t l_4367[1];
                uint16_t l_4368 = 0xF2CCL;
                int32_t *l_4371 = &g_1730[3];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_4367[i] = (-1L);
                l_4332 = (((*l_4) = (safe_lshift_func_int16_t_s_u((((++(*l_4319)) == ((safe_unary_minus_func_int16_t_s((***g_3754))) && (l_1272[4] == 0x2E5EL))) , (*l_4)), (safe_div_func_uint64_t_u_u((((safe_mod_func_uint16_t_u_u(l_2[2][9][1], (safe_lshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s(l_1272[2], (*g_313))) , (((l_4331 & ((*g_2015) |= (l_4331 & 4294967286UL))) | (*l_2615)) && g_3550)), 0)))) , 1UL) | 65532UL), l_4332))))) == 0x9E08L);
                (*l_4) |= 0xF56E5E30L;
                for (g_3552 = 28; (g_3552 > 7); g_3552 = safe_sub_func_int16_t_s_s(g_3552, 9))
                {
                    int32_t l_4360[10] = {0x4D782895L,0xE0355910L,0x1DBC6D31L,0x1DBC6D31L,0L,(-9L),0L,0xE0355910L,0xE0355910L,0L};
                    int32_t **l_4372 = &g_324;
                    int i;
                    for (g_3567 = 0; (g_3567 <= 2); g_3567 += 1)
                    {
                        int i, j, k;
                        return g_3007[(g_3567 + 3)][g_3567][(g_5 + 3)];
                    }
                    for (g_2807 = 0; (g_2807 > 32); ++g_2807)
                    {
                        int8_t l_4361 = (-1L);
                        int32_t l_4364 = 0x957B3524L;
                        int32_t *l_4365[1][2];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_4365[i][j] = (void*)0;
                        }
                        (*g_3314) = (safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u(0xB9D4476A29B00B31LL)), ((*g_739) = ((0UL >= (((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_div_func_int16_t_s_s((**g_1143), 65535UL)) & (safe_rshift_func_int8_t_s_u(((((***g_1142) < 0x5A91L) , (((safe_div_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(l_1272[1], 2)), l_2[0][1][2])), (((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((l_4314 , (*l_4)) || g_526), l_4360[3])) < 6UL), l_4361)) ^ 0L) ^ l_4360[3]))) , (void*)0) != (void*)0)) || l_4360[3]), 0))), g_2429[9][2])), 7UL)) >= 2L) , 0x8FL)) , l_4331)))), l_4361));
                        l_4368++;
                        (*l_4) = l_1272[3];
                    }
                    (*l_4372) = l_4371;
                }
            }
        }
    }
    if ((l_1272[2] , ((l_4314 <= ((g_565 = g_1731) , (l_4374 == l_4374))) & (safe_mul_func_uint8_t_u_u(l_1272[3], 0xECL)))))
    {
        const uint16_t *****l_4381 = &l_4377;
        uint16_t *** const *l_4382 = &g_1819;
        uint16_t *** const **l_4383 = &l_4382;
        const int32_t l_4384 = (-1L);
        uint32_t l_4387 = 1UL;
        uint32_t *l_4392 = &g_171;
        l_4393 |= (((((*l_4381) = l_4377) == ((*l_4383) = l_4382)) >= ((void*)0 == (*g_3071))) ^ ((((l_4384 > ((safe_rshift_func_uint8_t_u_u(0xA7L, l_1272[2])) != (l_4387 , (safe_div_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(g_4023, l_2[1][3][1])), l_4387))))) , l_4392) != (void*)0) , l_4314));
    }
    else
    {
        uint32_t l_4396 = 1UL;
        const int16_t l_4422 = 0x7730L;
        int8_t ***l_4430[3];
        int i;
        for (i = 0; i < 3; i++)
            l_4430[i] = &g_1378;
        if (((safe_div_func_uint32_t_u_u(0x70B228D4L, (g_2998 = l_4396))) & (l_4393 = (safe_div_func_uint16_t_u_u(((*g_236) = l_4396), l_4396)))))
        {
            uint32_t ***l_4403 = &g_1916[1][2];
            uint32_t ****l_4404 = &l_4403;
            uint32_t l_4412[10] = {0x65083462L,0x65083462L,0x65083462L,0x65083462L,0x65083462L,0x65083462L,0x65083462L,0x65083462L,0x65083462L,0x65083462L};
            int32_t l_4419[5];
            int64_t *l_4423[5][8][2] = {{{&g_169[3][0],&g_169[5][0]},{&g_3007[5][2][1],&g_169[5][0]},{&g_169[3][0],&g_526},{&g_526,&g_169[3][0]},{&g_169[5][0],&g_3007[5][2][1]},{&g_169[5][0],&g_169[3][0]},{&g_526,&g_526},{&g_169[3][0],&g_169[5][0]}},{{&g_3007[5][2][1],&g_169[5][0]},{&g_169[3][0],&g_526},{&g_526,&g_169[3][0]},{&g_169[5][0],&g_3007[5][2][1]},{&g_169[5][0],&g_169[3][0]},{&g_526,&g_526},{&g_169[3][0],&g_169[5][0]},{&g_3007[5][2][1],&g_169[5][0]}},{{&g_169[3][0],&g_526},{&g_526,&g_169[3][0]},{&g_169[5][0],&g_3007[5][2][1]},{&g_169[5][0],&g_169[3][0]},{&g_526,&g_526},{&g_169[3][0],&g_169[5][0]},{&g_3007[5][2][1],&g_169[5][0]},{&g_169[3][0],&g_526}},{{&g_526,&g_169[3][0]},{&g_169[5][0],&g_3007[5][2][1]},{&g_169[5][0],&g_169[3][0]},{&g_526,&g_526},{&g_169[3][0],&g_169[5][0]},{&g_3007[5][2][1],&g_169[5][0]},{&g_169[3][0],&g_526},{&g_526,&g_169[3][0]}},{{&g_169[5][0],&g_3007[5][2][1]},{&g_169[5][0],&g_169[3][0]},{&g_526,&g_526},{&g_169[3][0],&g_169[5][0]},{&g_3007[5][2][1],&g_169[5][0]},{&g_169[3][0],&g_526},{&g_526,&g_169[3][0]},{&g_169[5][0],&g_3007[5][2][1]}}};
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_4419[i] = 0xEF4468B2L;
            (*g_2014) ^= ((*g_3314) | ((safe_add_func_uint16_t_u_u(((((((*l_4404) = l_4403) != (l_4405[0][1][2] = (void*)0)) || (safe_add_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(l_4412[6], (((l_4393 = ((safe_div_func_int16_t_s_s((0x9F1200FA1EC1111FLL && (safe_mul_func_int16_t_s_s(((((safe_sub_func_uint64_t_u_u((l_4396 && l_4419[0]), (safe_mod_func_uint32_t_u_u(l_4396, (g_2998 = (((g_1500 = g_3563) & l_4422) , 2UL)))))) == (**g_674)) != l_4412[6]) == l_4419[0]), 0xF73BL))), l_4412[6])) != (***g_1819))) && (*g_675)) >= l_4419[4]))), 0x9AL)), 0L))) & 0x1536BB1C129C33CALL) , (***g_1819)), g_4424)) > l_4419[3]));
        }
        else
        {
            uint8_t l_4429[8][2] = {{9UL,0x3DL},{9UL,9UL},{9UL,0x3DL},{9UL,9UL},{9UL,0x3DL},{9UL,9UL},{9UL,0x3DL},{9UL,9UL}};
            int32_t *l_4437[9] = {&g_1730[3],&g_1730[3],&g_1730[3],&g_1730[3],&g_1730[3],&g_1730[3],&g_1730[3],&g_1730[3],&g_1730[3]};
            int i, j;
            (*g_3314) ^= (((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((***g_1819) = l_4429[3][1]), 13)), ((((void*)0 == l_4430[2]) || (safe_add_func_int8_t_s_s(((l_4429[3][1] != (0UL || (!(safe_mul_func_uint16_t_u_u(l_1272[2], ((g_4436 , (l_4396 ^ (((void*)0 != l_4380) & 0xBC09L))) >= 0x87L)))))) ^ l_4396), 0xCFL))) == 0x091913B5FB93EAB8LL))) , 0L) > l_4396);
            l_4438[4][0][0] = func_15(l_2[2][0][1], (*g_1917), &l_4393);
        }
    }
    return (*g_3268);
}







static uint16_t func_11(uint32_t p_12, int32_t * p_13)
{
    return (*****g_4242);
}







static int32_t * func_15(uint32_t p_16, uint32_t p_17, int32_t * p_18)
{
    int16_t **l_3499 = &g_313;
    int32_t l_3516 = (-4L);
    int32_t l_3571 = 0x345FFEE5L;
    int32_t l_3630 = 0L;
    int32_t l_3632 = (-1L);
    int32_t l_3636 = 0x8D87D2B3L;
    int32_t l_3639 = 3L;
    int32_t l_3642 = (-7L);
    int32_t l_3644[2];
    const int32_t *l_3671 = &l_3630;
    uint16_t ****l_3672 = &g_1819;
    int8_t ***l_3677 = &g_1381;
    int8_t ****l_3676 = &l_3677;
    int8_t *****l_3675 = &l_3676;
    int64_t * const l_3688 = &g_1500;
    int32_t *** const **l_3693 = (void*)0;
    uint8_t l_3738 = 3UL;
    int16_t * const * const l_3751 = &g_313;
    int16_t * const * const *l_3750 = &l_3751;
    uint32_t l_3758 = 0UL;
    uint32_t ***l_3816 = &g_1916[0][5];
    int32_t l_3842 = 0x537CDF96L;
    uint8_t l_3924 = 8UL;
    uint8_t ****l_3973 = &g_2610;
    int64_t l_4003[1];
    int32_t * const l_4059 = &l_3571;
    int16_t ***l_4093 = &l_3499;
    uint8_t l_4094 = 0xB6L;
    uint32_t l_4120 = 1UL;
    int32_t *****l_4136 = &g_4135;
    int32_t *****l_4138[8] = {&g_4135,&g_4135,&g_4135,&g_4135,&g_4135,&g_4135,&g_4135,&g_4135};
    int16_t l_4231 = 0x6BB7L;
    uint32_t **l_4272 = &g_3085;
    int i;
    for (i = 0; i < 2; i++)
        l_3644[i] = 0xFDECDAE4L;
    for (i = 0; i < 1; i++)
        l_4003[i] = 7L;
    for (g_1500 = 0; (g_1500 <= 2); g_1500 += 1)
    {
        int16_t **l_3500[10] = {&g_313,&g_313,&g_313,&g_313,&g_313,&g_313,&g_313,&g_313,&g_313,&g_313};
        uint64_t ***l_3501 = &g_674;
        const int16_t l_3513 = (-4L);
        int64_t l_3514 = (-5L);
        uint32_t *l_3515 = &g_171;
        int64_t *l_3517 = &g_169[6][0];
        uint16_t * const *l_3525 = &g_236;
        uint16_t * const **l_3524[3][3][10] = {{{(void*)0,&l_3525,(void*)0,&l_3525,&l_3525,&l_3525,(void*)0,(void*)0,&l_3525,&l_3525},{&l_3525,&l_3525,&l_3525,(void*)0,&l_3525,&l_3525,&l_3525,&l_3525,&l_3525,&l_3525},{&l_3525,&l_3525,(void*)0,&l_3525,(void*)0,&l_3525,&l_3525,&l_3525,(void*)0,&l_3525}},{{&l_3525,&l_3525,&l_3525,&l_3525,(void*)0,(void*)0,&l_3525,&l_3525,&l_3525,&l_3525},{&l_3525,&l_3525,(void*)0,&l_3525,(void*)0,&l_3525,&l_3525,&l_3525,(void*)0,&l_3525},{&l_3525,&l_3525,&l_3525,(void*)0,&l_3525,&l_3525,&l_3525,&l_3525,&l_3525,(void*)0}},{{(void*)0,&l_3525,&l_3525,&l_3525,&l_3525,&l_3525,(void*)0,&l_3525,&l_3525,(void*)0},{&l_3525,&l_3525,&l_3525,&l_3525,&l_3525,&l_3525,&l_3525,&l_3525,&l_3525,&l_3525},{&l_3525,&l_3525,&l_3525,(void*)0,(void*)0,&l_3525,&l_3525,&l_3525,(void*)0,&l_3525}}};
        uint16_t * const ***l_3523 = &l_3524[0][2][3];
        uint16_t * const ****l_3522 = &l_3523;
        uint32_t l_3530 = 8UL;
        int32_t l_3617 = (-2L);
        int32_t l_3629 = 0x7254824EL;
        int32_t l_3631 = (-2L);
        int32_t l_3634 = (-1L);
        int32_t l_3635 = 0xBA253FE4L;
        int32_t l_3638 = 5L;
        int32_t l_3640 = (-10L);
        int32_t l_3645 = 0xCBDEF7CFL;
        int32_t l_3646 = 0x578964C9L;
        int32_t l_3647 = 0L;
        int32_t l_3648 = (-3L);
        int32_t l_3650[6];
        int32_t *l_3654[5];
        int32_t ** const *l_3668 = &g_1767;
        int32_t ** const **l_3667 = &l_3668;
        int32_t ** const ** const *l_3666 = &l_3667;
        int32_t l_3810 = 0xC8B05301L;
        int64_t l_3908 = 5L;
        int8_t l_3955[8] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
        const uint64_t l_4002 = 18446744073709551613UL;
        int32_t l_4058 = 0L;
        int16_t l_4076 = 0x2F8FL;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_3650[i] = 0xAA119E81L;
        for (i = 0; i < 5; i++)
            l_3654[i] = (void*)0;
    }
    if ((((0x97L ^ 0xD3L) | ((((((safe_div_func_int16_t_s_s((((p_17 & (safe_mul_func_uint8_t_u_u((0x9019C1BF340AE9A5LL & 18446744073709551613UL), (((safe_mul_func_int8_t_s_s(0x27L, ((((((safe_mod_func_int16_t_s_s((*l_3671), ((****l_3672) = p_17))) , ((*l_4093) = ((safe_rshift_func_uint8_t_u_s((~((*l_4059) ^= (*l_3671))), 6)) , (void*)0))) != (void*)0) > 0xC8D45F3A393BE81CLL) , p_17) <= p_17))) >= (*l_3671)) || 0x1A36721F5C628DE5LL)))) ^ l_4094) | p_16), (*l_3671))) != (**g_3755)) < 2L) & (*p_18)) , 1UL) | (*l_3671))) >= (*l_3671)))
    {
        uint16_t l_4098 = 0x1FF4L;
        int32_t l_4111 = 0x6874CBA0L;
        int32_t l_4112 = 0x63C55462L;
        uint8_t *l_4113[1];
        int i;
        for (i = 0; i < 1; i++)
            l_4113[i] = &g_66;
        (*g_3314) &= (*p_18);
        g_4095--;
        (*p_18) ^= l_4098;
        if (((((safe_rshift_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((safe_div_func_int8_t_s_s(2L, (((*p_18) & ((((safe_lshift_func_uint16_t_u_u((((((safe_mod_func_int8_t_s_s(p_16, ((*l_4059) = (p_16 , (l_4112 = (l_4111 = ((*g_1988) = p_17))))))) != (safe_div_func_int16_t_s_s(p_17, p_17))) & (safe_sub_func_uint16_t_u_u(((0L != (safe_lshift_func_uint16_t_u_s(65535UL, p_16))) >= p_17), 0xE114L))) , (void*)0) != (void*)0), (*g_236))) , (**g_1961)) == (void*)0) >= (**g_3755))) , l_4112))) <= 9L), p_16)), p_17)) | 0x3A15L) , p_16), 15)) | l_4120) > (*p_18)) | l_4098))
        {
            int32_t *l_4123 = (void*)0;
            for (g_1728 = (-2); (g_1728 >= 3); g_1728 = safe_add_func_uint32_t_u_u(g_1728, 9))
            {
                return p_18;
            }
            return l_4123;
        }
        else
        {
            return g_4124[1];
        }
    }
    else
    {
        uint32_t l_4128 = 18446744073709551615UL;
        int16_t *****l_4131 = &g_1962;
        uint64_t ***l_4155 = &g_674;
        int32_t *l_4161 = (void*)0;
        uint16_t l_4179 = 65535UL;
        int8_t l_4204[9][9] = {{0L,(-6L),0x1BL,(-1L),(-1L),0x1BL,(-6L),0L,8L},{(-2L),(-7L),0x64L,0x2DL,0x00L,(-1L),8L,(-6L),1L},{0x70L,0x00L,0x46L,7L,(-1L),(-6L),1L,1L,8L},{(-1L),3L,0x77L,(-2L),1L,1L,(-2L),0x77L,3L},{(-1L),8L,1L,1L,(-6L),(-1L),7L,0x46L,0x00L},{0x70L,1L,(-6L),8L,(-1L),0x00L,0x2DL,0x64L,(-7L)},{(-2L),8L,0L,(-6L),0x1BL,(-1L),(-1L),0x1BL,(-6L)},{0L,3L,0L,(-1L),8L,0x22L,(-1L),1L,0x1BL},{0x70L,0x00L,(-6L),1L,(-1L),(-1L),0xCBL,1L,5L}};
        int32_t *l_4214[8];
        uint16_t * const **l_4266 = (void*)0;
        uint16_t * const ***l_4265 = &l_4266;
        uint16_t * const ****l_4264[1];
        int8_t *** const *l_4269 = (void*)0;
        int i, j;
        for (i = 0; i < 8; i++)
            l_4214[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_4264[i] = &l_4265;
        if (((*g_3314) &= (*p_18)))
        {
            uint64_t l_4139 = 0xCB2CB8CEA5D6C05BLL;
            int32_t l_4173 = 0L;
            uint32_t *l_4178[4] = {&g_851,&g_851,&g_851,&g_851};
            int32_t l_4218 = 0xF5FB1240L;
            int32_t l_4220 = 0L;
            int32_t l_4221 = (-1L);
            int32_t l_4223[4][3][6] = {{{0x14A35B98L,1L,(-6L),1L,0x14A35B98L,0x14A35B98L},{9L,1L,1L,9L,(-1L),9L},{9L,(-1L),9L,1L,1L,9L}},{{0x14A35B98L,0x14A35B98L,1L,(-6L),1L,0x14A35B98L},{1L,(-1L),(-6L),(-6L),(-1L),1L},{0x14A35B98L,1L,(-6L),1L,0x14A35B98L,0x14A35B98L}},{{9L,1L,1L,9L,(-1L),9L},{9L,(-1L),9L,1L,1L,9L},{0x14A35B98L,0x14A35B98L,1L,(-6L),1L,0x14A35B98L}},{{1L,(-1L),(-6L),(-6L),(-1L),9L},{1L,9L,(-1L),9L,1L,1L},{(-6L),9L,9L,(-6L),0x14A35B98L,(-6L)}}};
            uint32_t *l_4274[10][5] = {{&g_565,&g_952,&g_565,(void*)0,(void*)0},{&g_171,&g_952,&g_171,&g_565,&g_171},{&g_565,&g_952,&g_565,(void*)0,(void*)0},{&g_171,&g_952,&g_171,&g_565,&g_171},{&g_565,&g_952,&g_565,(void*)0,(void*)0},{&g_171,&g_952,&g_171,&g_565,&g_171},{&g_565,&g_952,&g_565,(void*)0,(void*)0},{&g_171,&g_952,&g_171,&g_565,&g_171},{&g_565,&g_952,&g_565,(void*)0,(void*)0},{&g_171,&g_952,&g_171,&g_565,&g_171}};
            int i, j, k;
            for (l_3571 = 26; (l_3571 >= 19); l_3571--)
            {
                int32_t *****l_4137[4] = {&g_4135,&g_4135,&g_4135,&g_4135};
                int32_t l_4140 = 0xE53D8DA8L;
                int i;
                if ((~((l_4128 == (safe_sub_func_int16_t_s_s(((((void*)0 == l_4131) & (safe_div_func_uint32_t_u_u(((*g_2018) | ((l_4136 = g_4134) != (l_4138[5] = l_4137[2]))), 0x31284077L))) && (*g_3268)), (((*p_18) != p_16) || l_4139)))) >= l_4140)))
                {
                    uint64_t ****l_4156 = (void*)0;
                    uint64_t ****l_4157 = &l_4155;
                    int32_t *l_4160 = (void*)0;
                    (*p_18) &= (safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(0x8C66F5A9C4C8D3C8LL, ((safe_lshift_func_int16_t_s_u(((0x8E17L == (l_4128 , (p_16 > (safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(0x0B96L, p_17)), 1))))) <= ((p_16 & ((((safe_mul_func_uint16_t_u_u(l_4128, ((((*l_4157) = l_4155) != (*g_2463)) ^ p_17))) && 0x39EEL) == l_4140) || 0L)) != p_17)), (**g_235))) && p_17))), p_17));
                    for (g_3874 = 20; (g_3874 >= 31); ++g_3874)
                    {
                        uint8_t l_4162[10][10] = {{1UL,0x47L,0x13L,252UL,0x60L,1UL,7UL,7UL,1UL,0x60L},{0xD7L,0x47L,0x47L,0xD7L,1UL,1UL,0x04L,0xDDL,0x50L,1UL},{0x13L,0x97L,0x50L,0x04L,0x47L,252UL,0x47L,0x04L,0x50L,0x97L},{0x60L,246UL,255UL,0xD7L,3UL,0x3AL,1UL,0x50L,1UL,1UL},{246UL,1UL,0x3AL,252UL,252UL,0x3AL,1UL,246UL,0xD7L,1UL},{0x60L,255UL,0x04L,246UL,7UL,252UL,0xDDL,1UL,0xDDL,252UL},{0x13L,7UL,0x04L,7UL,0x13L,1UL,0xD7L,246UL,1UL,0x3AL},{0xD7L,3UL,0x3AL,1UL,0x50L,1UL,1UL,0x50L,1UL,0x3AL},{1UL,1UL,255UL,0x3AL,0x13L,0x97L,0x50L,0x04L,0x47L,252UL},{0x04L,0xDDL,0x50L,1UL,7UL,1UL,0x50L,0xDDL,0x04L,1UL}};
                        int i, j;
                        l_4161 = l_4160;
                        if ((*g_2014))
                            break;
                        l_4162[5][8]++;
                    }
                    if (l_4139)
                        continue;
                }
                else
                {
                    p_18 = p_18;
                }
                return p_18;
            }
            for (g_3551 = 3; (g_3551 != 10); g_3551 = safe_add_func_uint32_t_u_u(g_3551, 7))
            {
                uint64_t *l_4172[2];
                uint32_t *l_4177 = &g_2998;
                int32_t l_4180 = 0x075F97E6L;
                int8_t l_4200 = 0x14L;
                int32_t l_4210 = 0x6FCCF6B0L;
                int32_t l_4224 = 0x205F7226L;
                int32_t l_4225 = (-1L);
                int32_t l_4226[8] = {0xC6209D16L,0xC6209D16L,0xC6209D16L,0xC6209D16L,0xC6209D16L,0xC6209D16L,0xC6209D16L,0xC6209D16L};
                uint32_t l_4235 = 0x197F755CL;
                int i;
                for (i = 0; i < 2; i++)
                    l_4172[i] = &g_3066;
                if ((safe_sub_func_uint64_t_u_u((**g_674), (safe_mul_func_uint16_t_u_u(((((**g_235) || (+(g_3498[1][4][6] >= (l_4173 |= ((*l_4059) = ((p_16 ^ l_4139) > (p_17 <= ((**g_674) == 4L)))))))) >= ((((((((((((*l_4177) = (((!(safe_div_func_int32_t_s_s((*p_18), p_16))) == p_17) || (*l_3671))) != p_17) >= p_16) | p_16) & p_16) | l_4139) || 1UL) < (*l_3671)) , p_17) , l_4178[0]) == &p_16)) ^ 1UL), p_17)))))
                {
                    l_4180 ^= l_4179;
                }
                else
                {
                    uint32_t ***l_4201 = &g_1916[0][2];
                    int32_t l_4202 = (-2L);
                    int8_t l_4207 = 0L;
                    int32_t l_4219 = (-3L);
                    int32_t l_4222 = (-5L);
                    int32_t l_4227 = 0xE4CF6FCFL;
                    int32_t l_4229[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_4229[i] = 3L;
                    for (l_3642 = (-28); (l_3642 == (-10)); l_3642 = safe_add_func_int16_t_s_s(l_3642, 7))
                    {
                        uint32_t l_4183 = 4294967295UL;
                        int32_t l_4203[6] = {0x17386F73L,0x05796D0AL,0x17386F73L,0x17386F73L,0x05796D0AL,0x17386F73L};
                        int32_t *l_4205 = (void*)0;
                        int32_t *l_4206 = &l_4173;
                        int32_t *l_4208 = &l_3632;
                        int32_t *l_4209[7] = {&l_3632,&l_3632,&l_3632,&l_3632,&l_3632,&l_3632,&l_3632};
                        uint8_t l_4211[10][3][8] = {{{0UL,0x32L,0x3DL,0x43L,0x3DL,0x32L,0UL,0x43L},{0UL,0x29L,0x3DL,255UL,0x3DL,0x29L,0UL,255UL},{0UL,0x32L,0x3DL,0x43L,0x3DL,0x32L,0UL,0x43L}},{{0UL,0x29L,0x3DL,255UL,0x3DL,0x29L,0UL,255UL},{0UL,0x32L,0x3DL,0x43L,0x3DL,0x32L,0UL,0x43L},{0UL,0x29L,0x3DL,255UL,0x3DL,0x29L,0UL,255UL}},{{0UL,0x32L,0x3DL,0x43L,0x3DL,0x32L,0UL,0x43L},{0UL,0x29L,0x3DL,255UL,0x3DL,0x29L,0UL,255UL},{0UL,0x32L,0x3DL,0x43L,0x3DL,0x32L,0UL,0x43L}},{{0UL,0x29L,0x3DL,255UL,0x3DL,0x29L,0UL,255UL},{0UL,0x32L,0x3DL,0x43L,0x3DL,0x32L,0UL,0x43L},{0UL,0x29L,0x3DL,255UL,0x3DL,0x29L,0UL,255UL}},{{0UL,0x32L,0x3DL,0x43L,0x3DL,0x32L,0UL,0x43L},{0UL,0x29L,0x3DL,255UL,0x3DL,0x29L,0UL,255UL},{0UL,0x32L,0x3DL,0x43L,0x3DL,0x32L,0UL,0x43L}},{{0UL,0x29L,0x3DL,255UL,0x3DL,0x29L,0UL,255UL},{0UL,0x32L,0x3DL,0x43L,0x3DL,0x32L,0UL,0x43L},{0UL,0x29L,0x3DL,255UL,0x3DL,0x29L,0UL,255UL}},{{0UL,0x32L,0x3DL,0x43L,0x3DL,0x32L,0UL,0x43L},{0UL,0x29L,0x3DL,255UL,0x3DL,0x29L,0UL,255UL},{0UL,0x32L,0x3DL,0x43L,0x3DL,0x32L,0UL,0x43L}},{{0UL,0x29L,0x3DL,255UL,0x3DL,0x29L,0UL,255UL},{0UL,0x32L,0x3DL,0x43L,0x3DL,0x32L,0UL,0x43L},{0UL,0x29L,0x3DL,255UL,0x3DL,0x29L,0UL,255UL}},{{0UL,0x32L,0x3DL,0x43L,0x3DL,0x32L,0UL,0x43L},{0UL,0x29L,0x3DL,255UL,0x3DL,0x29L,0UL,255UL},{0UL,0x32L,0x3DL,0x43L,0x3DL,0x32L,0UL,0x43L}},{{0UL,0x29L,0x3DL,255UL,0x3DL,0x29L,0UL,255UL},{0UL,0x32L,0x3DL,0x43L,0x3DL,0x32L,0UL,0x43L},{0UL,0x29L,0x3DL,255UL,0x3DL,0x29L,0UL,255UL}}};
                        int i, j, k;
                        l_4183--;
                        l_4203[5] = ((safe_div_func_int16_t_s_s((safe_add_func_uint64_t_u_u(0x2C1E9780CE5FA5B8LL, (safe_lshift_func_int16_t_s_u((((*l_3688) = ((g_635 <= ((*g_675) |= ((((safe_div_func_uint16_t_u_u(2UL, (safe_sub_func_uint8_t_u_u((0x55BD1B84L < ((((safe_rshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((l_4183 , ((&g_1962 == l_4131) , ((l_4200 & p_17) , p_17))) > p_16), p_16)), 4)) && 0x66EEL) == p_16) ^ 0x8655L)), 5L)))) <= g_343) , l_4201) == (void*)0))) & l_4202)) , p_17), 11)))), p_17)) | 0x05739219EC1828E3LL);
                        l_4211[5][2][6]--;
                    }
                    l_4161 = l_4214[2];
                    for (g_3550 = 23; (g_3550 <= 29); ++g_3550)
                    {
                        int64_t l_4217 = (-10L);
                        int32_t l_4228 = 0x9FF1EAABL;
                        int32_t l_4230 = 0x2BFFA37DL;
                        int32_t l_4232 = 1L;
                        int32_t l_4233 = (-3L);
                        int32_t l_4234 = 7L;
                        int32_t **l_4238 = &l_4161;
                        l_4235--;
                        p_18 = p_18;
                        (*l_4238) = p_18;
                    }
                }
            }
            for (g_3569 = 0; (g_3569 == (-14)); --g_3569)
            {
                int32_t ****l_4241[10][8][3] = {{{&g_384[0][3][0],&g_384[0][3][0],&g_384[0][3][0]},{&g_384[0][3][0],&g_384[0][3][0],&g_384[5][6][2]},{&g_384[5][1][2],&g_384[5][1][2],&g_384[0][3][0]},{(void*)0,&g_384[0][3][0],&g_384[0][3][0]},{(void*)0,&g_384[0][3][0],&g_384[0][3][0]},{&g_384[4][4][1],&g_384[7][6][0],&g_384[0][3][0]},{&g_384[0][3][0],(void*)0,&g_384[0][3][0]},{&g_384[5][6][2],&g_384[0][3][0],&g_384[0][3][0]}},{{&g_384[0][3][0],&g_384[0][6][2],&g_384[0][3][0]},{&g_384[5][5][1],(void*)0,&g_384[5][6][2]},{&g_384[0][3][0],(void*)0,&g_384[0][3][0]},{&g_384[1][3][0],(void*)0,&g_384[0][3][0]},{&g_384[0][3][0],&g_384[0][3][0],&g_384[6][0][0]},{&g_384[0][3][0],&g_384[0][3][0],&g_384[0][3][0]},{&g_384[4][4][1],(void*)0,&g_384[0][6][2]},{&g_384[0][3][0],(void*)0,&g_384[1][3][0]}},{{&g_384[4][1][0],(void*)0,&g_384[4][1][0]},{&g_384[1][6][2],&g_384[0][6][2],&g_384[0][3][0]},{&g_384[4][6][0],&g_384[0][3][0],&g_384[0][3][0]},{(void*)0,(void*)0,(void*)0},{&g_384[4][3][1],&g_384[7][6][0],(void*)0},{(void*)0,&g_384[0][3][0],&g_384[0][3][0]},{&g_384[4][6][0],&g_384[0][3][0],&g_384[7][6][0]},{&g_384[1][6][2],&g_384[5][1][2],&g_384[4][6][0]}},{{&g_384[4][1][0],&g_384[0][3][0],(void*)0},{&g_384[0][3][0],&g_384[0][3][0],&g_384[0][3][0]},{&g_384[4][4][1],&g_384[1][6][2],&g_384[5][5][1]},{&g_384[0][3][0],&g_384[0][3][0],&g_384[5][5][1]},{&g_384[0][3][0],&g_384[0][3][0],&g_384[0][3][0]},{&g_384[1][3][0],&g_384[0][3][0],(void*)0},{&g_384[0][3][0],&g_384[4][6][0],&g_384[4][6][0]},{&g_384[5][5][1],&g_384[5][6][2],&g_384[7][6][0]}},{{&g_384[0][3][0],&g_384[5][5][1],&g_384[0][3][0]},{&g_384[5][6][2],&g_384[3][6][1],(void*)0},{&g_384[0][3][0],(void*)0,(void*)0},{&g_384[4][4][1],&g_384[3][6][1],&g_384[0][3][0]},{(void*)0,&g_384[5][5][1],&g_384[0][3][0]},{(void*)0,&g_384[5][6][2],&g_384[4][1][0]},{&g_384[5][1][2],&g_384[4][6][0],&g_384[1][3][0]},{&g_384[0][3][0],&g_384[0][3][0],&g_384[0][6][2]}},{{&g_384[0][3][0],&g_384[0][3][0],&g_384[0][3][0]},{(void*)0,&g_384[0][3][0],&g_384[6][0][0]},{(void*)0,&g_384[1][6][2],&g_384[0][3][0]},{&g_384[0][3][0],&g_384[0][3][0],&g_384[0][3][0]},{&g_384[0][3][0],&g_384[0][3][0],&g_384[5][6][2]},{&g_384[5][1][2],&g_384[5][1][2],&g_384[0][3][0]},{(void*)0,&g_384[0][3][0],&g_384[0][3][0]},{(void*)0,&g_384[0][3][0],&g_384[0][3][0]}},{{&g_384[0][3][0],&g_384[0][3][0],(void*)0},{(void*)0,(void*)0,&g_384[0][3][0]},{&g_384[4][3][1],&g_384[3][6][1],(void*)0},{&g_384[1][2][1],&g_384[0][3][0],&g_384[4][4][1]},{&g_384[1][3][0],&g_384[0][3][0],&g_384[4][3][1]},{&g_384[0][3][0],&g_384[0][3][0],&g_384[1][6][2]},{(void*)0,&g_384[4][6][0],&g_384[0][3][0]},{&g_384[0][3][0],&g_384[0][3][0],&g_384[0][3][0]}},{{&g_384[1][6][2],&g_384[0][3][0],(void*)0},{&g_384[0][3][0],&g_384[4][6][0],&g_384[0][3][0]},{&g_384[0][3][0],&g_384[0][3][0],(void*)0},{&g_384[0][6][2],&g_384[0][3][0],&g_384[0][6][2]},{&g_384[7][6][0],&g_384[0][3][0],&g_384[0][3][0]},{&g_384[0][3][0],&g_384[3][6][1],&g_384[0][3][0]},{&g_384[4][6][0],(void*)0,&g_384[0][3][0]},{&g_384[0][3][0],&g_384[0][3][0],&g_384[0][3][0]}},{{&g_384[4][6][0],(void*)0,&g_384[0][3][0]},{&g_384[0][3][0],&g_384[0][3][0],&g_384[0][3][0]},{&g_384[7][6][0],&g_384[0][3][0],&g_384[0][3][0]},{&g_384[0][6][2],(void*)0,(void*)0},{&g_384[0][3][0],&g_384[0][3][0],&g_384[5][6][2]},{&g_384[0][3][0],&g_384[7][6][0],&g_384[1][3][0]},{&g_384[1][6][2],&g_384[5][6][2],&g_384[1][3][0]},{&g_384[0][3][0],(void*)0,&g_384[5][6][2]}},{{(void*)0,&g_384[4][1][0],(void*)0},{&g_384[0][3][0],&g_384[0][3][0],&g_384[0][3][0]},{&g_384[1][3][0],&g_384[4][3][1],&g_384[0][3][0]},{&g_384[1][2][1],&g_384[1][3][0],&g_384[0][3][0]},{&g_384[4][3][1],&g_384[5][5][1],&g_384[0][3][0]},{(void*)0,(void*)0,&g_384[0][3][0]},{&g_384[0][3][0],&g_384[5][5][1],&g_384[0][3][0]},{(void*)0,&g_384[1][3][0],&g_384[0][3][0]}}};
                int i, j, k;
                l_4220 = (*g_2014);
                (*p_18) = ((((void*)0 != l_4241[2][3][1]) | ((p_17 == (g_4242 == (l_4223[1][1][2] , &g_4243[1]))) <= ((safe_lshift_func_uint8_t_u_s(0x4CL, 3)) || (-9L)))) < ((((g_1428 &= (0xE0C7B68BL <= 0L)) ^ 0L) == p_16) <= (***g_1819)));
                (*g_2015) = (safe_div_func_int16_t_s_s((p_16 != ((((***l_3677) = (safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(0x1CL, 7)), (safe_mod_func_uint8_t_u_u(255UL, p_16))))) && (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u(((*g_236) = (safe_mul_func_int8_t_s_s(p_16, (((l_4139 , (safe_add_func_uint16_t_u_u((***g_1819), (((safe_div_func_uint32_t_u_u(4294967289UL, ((((**g_3267) , l_4264[0]) == &g_4243[5]) ^ p_16))) | (*p_18)) , p_17)))) != (-9L)) > l_4218)))), 5UL)) , l_4218), 4))) | 1L)), (**g_3755)));
            }
            (*g_3314) = ((((l_4218 = (((*p_18) || (l_4173 &= ((*l_3671) <= (safe_rshift_func_int8_t_s_u(((void*)0 != l_4269), 5))))) & (safe_add_func_int64_t_s_s(((((((*l_4059) || ((l_4221 ^ ((l_4272 != (((((+p_17) || (g_851 <= p_16)) , p_17) || p_17) , (void*)0)) != p_17)) , p_17)) , p_16) > p_16) | (*p_18)) | p_17), 0x840841C12841510BLL)))) , 0x53925E94L) , 0x92E3L) | 0xB48AL);
        }
        else
        {
            int32_t **l_4275 = &g_4124[1];
            (*l_4275) = p_18;
            for (l_3842 = 1; (l_3842 <= 5); l_3842 += 1)
            {
                uint32_t l_4277 = 4294967295UL;
                uint8_t l_4297 = 8UL;
                int32_t l_4298 = 0xF33F5BE0L;
                for (l_3642 = 5; (l_3642 >= 0); l_3642 -= 1)
                {
                    int8_t l_4296 = 0x03L;
                    (*l_4059) = 0x5E54CF3BL;
                    for (g_320 = 0; (g_320 <= 1); g_320 += 1)
                    {
                        int64_t l_4276[7] = {0xBD9387172B58A084LL,0xBD9387172B58A084LL,0xBD9387172B58A084LL,0xBD9387172B58A084LL,0xBD9387172B58A084LL,0xBD9387172B58A084LL,0xBD9387172B58A084LL};
                        int i, j;
                        (*l_4059) = (*p_18);
                        l_4277--;
                        l_4298 = ((((((((safe_sub_func_uint8_t_u_u(((p_17 || (((p_17 <= (++(***l_4155))) & ((**g_235) ^ (((((((safe_lshift_func_int8_t_s_s((**l_4275), 6)) && (((safe_sub_func_int64_t_s_s(((*l_3688) = (safe_mod_func_int16_t_s_s(((**l_4275) = ((g_3846 | (((**g_3755) = l_4277) && (safe_add_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((248UL & ((p_17 , ((((*g_399) &= ((g_3262 ^ p_16) ^ (*l_3671))) < (*g_2787)) > 0xF2E3D422F2D61EB4LL)) < (-1L))), 0x3907L)) > (*l_3671)), (***g_1819))) , (*l_4059)), l_4296)))) , 0x8D6DL)), l_4277))), p_17)) == (*g_313)) | p_17)) , 0xEAL) ^ p_16) , p_17) == p_16) ^ 0x0460979CL))) <= 4294967295UL)) , p_17), p_17)) != l_4296) , p_16) && g_1730[3]) ^ (**g_3267)) || l_4297) , p_16) != (*l_4059));
                        (*l_4059) = (-4L);
                    }
                }
            }
            (*l_4059) = ((((**g_674)--) || 0L) , ((**l_4275) = (*l_4059)));
        }
    }
    return p_18;
}







static const int8_t func_25(uint64_t p_26, int8_t p_27, const int16_t p_28, uint32_t p_29)
{
    uint32_t l_2823 = 0x59546AAFL;
    uint32_t *l_2824 = &l_2823;
    int32_t l_2829 = 1L;
    int32_t *l_2839[4];
    uint8_t *l_2880 = (void*)0;
    uint32_t l_2881 = 4294967291UL;
    int16_t ***l_2951 = (void*)0;
    int16_t l_2975 = 0xB14CL;
    int16_t ****l_3026 = &l_2951;
    uint8_t l_3064 = 1UL;
    uint8_t l_3106 = 0x79L;
    int32_t ***l_3193 = &g_1767;
    int64_t *l_3230[6][8] = {{(void*)0,&g_169[3][0],&g_1428,(void*)0,(void*)0,&g_1428,&g_169[3][0],(void*)0},{(void*)0,&g_1428,&g_169[6][0],&g_1428,&g_879,(void*)0,&g_169[6][0],&g_1428},{&g_1428,&g_3007[5][2][1],&g_879,(void*)0,&g_1428,(void*)0,&g_1428,(void*)0},{&g_169[3][0],&g_1428,&g_169[3][0],&g_169[6][0],(void*)0,&g_1428,&g_3007[5][2][1],(void*)0},{(void*)0,&g_169[3][0],&g_1428,&g_169[6][0],&g_1428,&g_526,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_1428,&g_1500}};
    uint16_t *l_3237 = (void*)0;
    uint16_t *l_3238 = (void*)0;
    uint16_t *l_3239 = &g_2164;
    uint16_t *l_3240 = &g_782;
    uint32_t l_3265 = 0x9C39F09AL;
    int32_t *****l_3369 = &g_1964[1][4];
    const int16_t l_3384 = (-5L);
    int32_t l_3400 = (-1L);
    uint32_t l_3457 = 0xEC6E9C16L;
    uint64_t ***l_3479 = &g_674;
    int16_t l_3488 = 0xCBC8L;
    int i, j;
    for (i = 0; i < 4; i++)
        l_2839[i] = &g_87[4];
    if ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(7L, (p_26 || (&p_26 == (void*)0)))), (((*l_2824) = l_2823) < (safe_div_func_uint64_t_u_u((7L ^ ((safe_mul_func_int8_t_s_s(l_2829, (safe_rshift_func_int8_t_s_u(((safe_div_func_int32_t_s_s((&g_1117 == ((((((safe_add_func_int8_t_s_s(l_2829, p_28)) , l_2829) , (-1L)) != p_29) != p_28) , (void*)0)), (-1L))) > 0x207EB65CA73701D4LL), 7)))) == p_27)), l_2829))))), 2)))
    {
        int32_t *l_2838 = &g_6;
        for (g_2164 = (-28); (g_2164 < 60); g_2164 = safe_add_func_int32_t_s_s(g_2164, 3))
        {
            int32_t *l_2840 = &g_1730[0];
            l_2839[1] = l_2838;
            l_2840 = &l_2829;
        }
        (*g_2015) &= (+((*g_1988) = p_27));
    }
    else
    {
        const uint8_t *l_2858 = &g_2083;
        const uint8_t **l_2857[4];
        const uint8_t ***l_2856 = &l_2857[1];
        const uint8_t ****l_2859 = &l_2856;
        uint16_t *l_2882[6][10] = {{&g_2164,&g_782,&g_2164,&g_1385[0],&g_1385[2],&g_2164,&g_1385[2],&g_1385[0],&g_2164,&g_782},{&g_2164,&g_1385[0],&g_1385[1],&g_2164,&g_1385[1],&g_782,(void*)0,&g_782,&g_782,&g_1385[0]},{&g_1385[1],&g_1385[0],&g_1385[3],&g_2164,&g_782,&g_782,(void*)0,&g_1385[1],(void*)0,&g_2164},{&g_2164,&g_1385[3],&g_782,&g_1385[1],&g_2164,&g_2164,&g_1385[1],&g_782,&g_1385[3],&g_2164},{&g_1385[1],&g_1385[2],&g_1385[3],&g_2164,(void*)0,(void*)0,&g_1385[2],&g_1385[2],&g_1385[1],&g_2164},{&g_782,(void*)0,(void*)0,&g_1385[2],(void*)0,&g_1385[1],&g_1385[0],&g_782,&g_1385[1],&g_1385[3]}};
        int32_t l_2883 = 0L;
        int i, j;
        for (i = 0; i < 4; i++)
            l_2857[i] = &l_2858;
        (*g_2015) = (((*l_2824) = (1L && p_29)) , (+(((***g_1819) = (((safe_rshift_func_uint16_t_u_u(((-1L) >= p_28), 2)) , (safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(p_26, (safe_add_func_int16_t_s_s(((*g_313) = (*g_313)), (0UL > (safe_sub_func_uint32_t_u_u(((!((*g_399) = (safe_div_func_int64_t_s_s(4L, p_28)))) <= p_27), p_29))))))) ^ 1L), 255UL))) == (*g_675))) == 0L)));
        (*g_2015) ^= (((*g_2556) = ((0x02B58AE2L && (&g_1974 == ((*l_2859) = l_2856))) , (((safe_add_func_uint32_t_u_u(g_1343, (((g_87[2] & (safe_mod_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u((~(safe_lshift_func_int16_t_s_s(0L, 9))), (g_1385[2] ^= ((***g_1819) = (safe_mul_func_uint16_t_u_u(((((+((**g_1381) = (safe_lshift_func_uint16_t_u_u(((p_27 ^ (safe_div_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_div_func_int32_t_s_s(p_28, 0x91C82CFBL)), (***g_1819))), 0x18DCL))) , (*g_236)), 12)))) == p_29) , (void*)0) == l_2880), l_2881)))))) > p_28), p_26))) > p_28) != l_2883))) , 0L) , p_27))) , l_2883);
        return l_2883;
    }
    for (g_2032 = 0; (g_2032 < 6); g_2032++)
    {
        uint64_t l_2886 = 0x1F84740178D318B0LL;
        --l_2886;
    }
    for (g_851 = 1; (g_851 <= 5); g_851 += 1)
    {
        uint32_t *l_2908 = &g_1317;
        int32_t l_2914 = 1L;
        int32_t l_2915 = (-7L);
        int32_t l_2917 = 8L;
        int32_t l_2923 = 0x9DA5DA52L;
        int32_t l_2924 = 0xEB78148EL;
        int32_t l_2926[8];
        uint16_t l_2928 = 65527UL;
        int32_t **l_2963 = (void*)0;
        int32_t *l_2979 = &l_2917;
        uint8_t ****l_2986 = &g_2610;
        int8_t l_3011 = 0x49L;
        uint16_t ***l_3091 = &g_235;
        int16_t **l_3104 = &g_313;
        const int32_t *** const l_3121 = (void*)0;
        uint64_t ** const * const *l_3122 = (void*)0;
        uint16_t l_3159 = 8UL;
        int8_t l_3190 = 0L;
        int32_t * const *l_3205 = &g_1768;
        int32_t * const **l_3204 = &l_3205;
        int32_t * const ***l_3203[5][9][5] = {{{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,(void*)0,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{(void*)0,(void*)0,(void*)0,&l_3204,&l_3204}},{{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,(void*)0,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,(void*)0},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{(void*)0,&l_3204,&l_3204,(void*)0,&l_3204}},{{&l_3204,&l_3204,&l_3204,&l_3204,(void*)0},{&l_3204,(void*)0,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,(void*)0,(void*)0,&l_3204,(void*)0},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,(void*)0,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,(void*)0},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{(void*)0,&l_3204,&l_3204,&l_3204,&l_3204}},{{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,(void*)0,&l_3204},{&l_3204,&l_3204,(void*)0,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,(void*)0,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204}},{{(void*)0,&l_3204,&l_3204,(void*)0,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{(void*)0,(void*)0,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{&l_3204,&l_3204,&l_3204,&l_3204,&l_3204},{(void*)0,&l_3204,(void*)0,&l_3204,&l_3204},{(void*)0,&l_3204,&l_3204,(void*)0,&l_3204},{&l_3204,(void*)0,(void*)0,&l_3204,&l_3204}}};
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_2926[i] = 0x7AB465A8L;
        for (p_27 = 0; (p_27 <= 9); p_27 += 1)
        {
            int16_t l_2893 = 2L;
            int64_t l_2910 = 0xC642AEF94E57BE72LL;
            int32_t l_2912 = 0xE54EF4B9L;
            int32_t l_2913 = (-4L);
            int32_t l_2919 = 0x76BD9B26L;
            int32_t l_2925 = 0x43D74D6EL;
            int32_t l_2927 = (-1L);
            int32_t l_3001 = 0xE223299BL;
            int32_t l_3002 = 0L;
            int32_t l_3005 = 0x29EB0F11L;
            int32_t l_3009 = 0x169B4070L;
            int32_t l_3010 = 0x8B13202BL;
            int32_t l_3012 = (-5L);
            int32_t l_3013 = (-2L);
            int32_t l_3014[4];
            uint16_t l_3016 = 1UL;
            int8_t ***l_3023 = (void*)0;
            int8_t ****l_3022[5][1][9] = {{{&l_3023,(void*)0,&l_3023,(void*)0,&l_3023,(void*)0,&l_3023,(void*)0,&l_3023}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_3023,(void*)0,&l_3023,(void*)0,&l_3023,(void*)0,&l_3023,(void*)0,&l_3023}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_3023,(void*)0,&l_3023,(void*)0,&l_3023,(void*)0,&l_3023,(void*)0,&l_3023}}};
            int16_t ****l_3027 = &l_2951;
            int32_t * const ****l_3072 = &g_813;
            uint64_t ** const *l_3081 = &g_674;
            uint64_t ** const **l_3080 = &l_3081;
            uint8_t **l_3112 = &g_1988;
            int16_t l_3137[3][9][5] = {{{0xF7ACL,0x0F4EL,0x2402L,(-1L),1L},{(-8L),0x2A44L,(-8L),(-9L),0L},{0xF7ACL,0L,0x2402L,1L,1L},{0xDA0EL,0x2A44L,0xDA0EL,(-9L),0xABA4L},{0xF7ACL,0x0F4EL,0x2402L,(-1L),1L},{(-8L),0x2A44L,(-8L),(-9L),0L},{0xF7ACL,0L,0x2402L,1L,1L},{0xDA0EL,0x2A44L,0xDA0EL,(-9L),0xABA4L},{0xF7ACL,0x0F4EL,0x2402L,(-1L),1L}},{{(-8L),0x2A44L,(-8L),(-9L),0L},{0xF7ACL,0L,0x2402L,1L,1L},{0xDA0EL,0x2A44L,0xDA0EL,(-9L),0xABA4L},{0xF7ACL,0x0F4EL,0x2402L,(-1L),1L},{(-8L),0x2A44L,(-8L),(-9L),0L},{0xF7ACL,0L,0x2402L,1L,1L},{0xDA0EL,0x2A44L,0xDA0EL,(-9L),0xABA4L},{0xF7ACL,0x0F4EL,0x2402L,(-1L),1L},{(-8L),0x2A44L,(-8L),(-9L),0L}},{{0xF7ACL,0x644BL,0xAC94L,0xF7ACL,0xF7ACL},{5L,0x24E9L,5L,1L,0xDA0EL},{1L,0x3DCEL,0xAC94L,0x2402L,0xF7ACL},{0x5AC2L,0x24E9L,0x5AC2L,1L,(-8L)},{1L,0x644BL,0xAC94L,0xF7ACL,0xF7ACL},{5L,0x24E9L,5L,1L,0xDA0EL},{1L,0x3DCEL,0xAC94L,0x2402L,0xF7ACL},{0x5AC2L,0x24E9L,0x5AC2L,1L,(-8L)},{1L,0x644BL,0xAC94L,0xF7ACL,0xF7ACL}}};
            uint16_t ***l_3158 = &g_235;
            int32_t ***l_3192 = &l_2963;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_3014[i] = 0xBBEAEAA1L;
        }
        for (g_320 = 0; (g_320 <= 0); g_320 += 1)
        {
            int64_t l_3224 = (-2L);
            for (g_1176 = 0; (g_1176 <= 9); g_1176 += 1)
            {
                int32_t l_3227 = 2L;
                int64_t *l_3228 = &g_3007[5][2][1];
                int i, j;
                (*g_2015) = (safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((4L && p_29) , (((safe_sub_func_int16_t_s_s(((((void*)0 != l_3203[1][8][0]) , (safe_rshift_func_int8_t_s_s(((+((*l_3228) = (safe_rshift_func_uint8_t_u_s((((**g_235) = (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s(p_28, (safe_mod_func_int8_t_s_s((((safe_sub_func_int32_t_s_s((0x8980L | ((safe_rshift_func_int8_t_s_u((~(0x78ADL != l_3224)), ((0xE7D2D61AL == 0UL) ^ l_3224))) && 0xA4008742L)), g_1157)) , 0xEC3DL) || l_3224), p_28)))), (*g_236))), l_3227))) <= p_27), 5)))) & l_3227), l_3224))) >= l_3224), l_3227)) < 3UL) || p_29)) , p_28), 6L)), 0x6AEFL));
                return (*g_399);
            }
        }
    }
    if (((safe_unary_minus_func_int64_t_s((g_879 = (-2L)))) != ((safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s((p_29 , (((*l_3240) = ((*l_3239) = (++(*g_236)))) < (g_1385[1] ^= (((**g_674) = (((safe_mul_func_int8_t_s_s(0L, (((**g_1961) = (*l_3026)) != (*l_3026)))) && 0x68EC7778L) == (((*g_1988)++) > p_26))) , p_29)))), 0xD632A0289AD3662ALL)), 0x65L)) < 0x5B82BB0FL)))
    {
        uint32_t l_3254[7][10] = {{0x1D79BCF0L,0x12A856B1L,0xC6BA2684L,0x1D79BCF0L,0xC6BA2684L,0x12A856B1L,0x1D79BCF0L,0UL,0UL,0x1D79BCF0L},{0UL,0x49BD93B9L,0xC6BA2684L,0xC6BA2684L,0x49BD93B9L,0UL,0x12A856B1L,0x49BD93B9L,0x12A856B1L,0UL},{0xC6D2C8B4L,0x49BD93B9L,9UL,0x49BD93B9L,0xC6D2C8B4L,9UL,0x1D79BCF0L,0x1D79BCF0L,9UL,0xC6D2C8B4L},{0xC6D2C8B4L,0x12A856B1L,0x12A856B1L,0xC6D2C8B4L,0xC6BA2684L,0UL,0xC6D2C8B4L,0UL,0xC6BA2684L,0xC6D2C8B4L},{0UL,0xC6D2C8B4L,0UL,0xC6BA2684L,0xC6D2C8B4L,0x12A856B1L,0x12A856B1L,0xC6D2C8B4L,0xC6BA2684L,0UL},{0x1D79BCF0L,0x1D79BCF0L,9UL,0xC6D2C8B4L,0x49BD93B9L,9UL,0x49BD93B9L,0xC6D2C8B4L,9UL,0x1D79BCF0L},{0x49BD93B9L,0x12A856B1L,0UL,0x49BD93B9L,0xC6BA2684L,0xC6BA2684L,0x49BD93B9L,0UL,0x12A856B1L,0x49BD93B9L}};
        int32_t *l_3271[1][9];
        uint64_t **l_3302[10][3] = {{&g_675,&g_675,&g_675},{&g_675,&g_675,&g_675},{&g_675,&g_675,&g_675},{&g_675,&g_675,&g_675},{&g_675,&g_675,&g_675},{&g_675,&g_675,&g_675},{&g_675,&g_675,&g_675},{&g_675,&g_675,&g_675},{&g_675,&g_675,&g_675},{&g_675,&g_675,&g_675}};
        uint64_t l_3334[9] = {0x4B6761A4BD3ABAD9LL,0x4B6761A4BD3ABAD9LL,0x4B6761A4BD3ABAD9LL,0x4B6761A4BD3ABAD9LL,0x4B6761A4BD3ABAD9LL,0x4B6761A4BD3ABAD9LL,0x4B6761A4BD3ABAD9LL,0x4B6761A4BD3ABAD9LL,0x4B6761A4BD3ABAD9LL};
        int16_t l_3343 = 1L;
        uint64_t l_3385 = 0x54365F3FA89CCC2BLL;
        int32_t l_3427 = 8L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 9; j++)
                l_3271[i][j] = &g_1730[1];
        }
        if ((1UL == (~(safe_rshift_func_int16_t_s_s((((&g_1962 != &g_1962) != (((*l_3239)--) > ((l_3265 = (((((((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((((l_3254[0][9] , ((**g_235) = 0x1EADL)) && (safe_mod_func_int32_t_s_s(l_3254[0][9], (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_s(p_26, 2)))), 7))))) | (((g_3262 ^ (safe_mod_func_int8_t_s_s((p_26 , l_3254[0][9]), p_28))) ^ 0xB57F0D4D9FFA59F0LL) <= 0x4DL)) <= 0UL), 0xFFL)) != 0x72B5L), 10)) > 0x6850931C9494A64FLL) && (-1L)) ^ 0x5F57L) > 1L) <= 7L) , p_26)) != l_3254[0][9]))) | 0x59C314D6L), 8)))))
        {
            uint8_t **l_3266 = &g_1988;
            const uint8_t ***l_3269 = &g_3267;
            int32_t l_3270 = 1L;
            uint16_t ** const ** const l_3274 = (void*)0;
            int32_t *l_3304 = &g_1294[2];
            int32_t *l_3313 = (void*)0;
lbl_3306:
            l_3270 = (l_3266 != ((*l_3269) = g_3267));
            l_3271[0][1] = &l_2829;
            for (p_27 = 0; (p_27 == (-26)); p_27--)
            {
                const uint64_t **l_3303 = &g_2466;
                int32_t *l_3308[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_3308[i] = &g_2962;
                if (p_29)
                {
                    uint16_t ** const *l_3277 = &g_235;
                    uint16_t ** const **l_3276 = &l_3277;
                    uint16_t ** const ***l_3275 = &l_3276;
                    (*l_3275) = l_3274;
                }
                else
                {
                    int32_t *l_3305 = (void*)0;
                    const int64_t l_3315 = 4L;
                    for (g_565 = (-30); (g_565 != 19); g_565 = safe_add_func_uint16_t_u_u(g_565, 1))
                    {
                        int32_t *l_3280 = &l_3270;
                        int32_t **l_3281 = &g_324;
                        (*l_3281) = l_3280;
                        (**l_3281) = p_28;
                    }
                    if (((*g_2015) = 6L))
                    {
                        if ((*g_2014))
                            break;
                        (*g_2015) ^= (safe_div_func_int16_t_s_s((~(-10L)), (safe_add_func_int8_t_s_s(p_29, ((((void*)0 == &g_3085) != ((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u(((*g_313) = g_3291), 12)) && (safe_rshift_func_uint16_t_u_u(((l_3270 , ((*g_739) |= 0xC2L)) && (safe_div_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(((p_26 , ((safe_lshift_func_int16_t_s_s((l_3302[9][0] == l_3303), 0)) , l_3304)) != l_3305), 0x56A89C7CL)), (*g_1988))) == p_27), p_28))), 4))), l_3270)) != p_26)) , p_27)))));
                        if (g_320)
                            goto lbl_3306;
                    }
                    else
                    {
                        int32_t **l_3307 = &g_2015;
                        if (p_29)
                            break;
                        if (p_27)
                            break;
                        (*l_3307) = l_3305;
                        (*l_3307) = l_3308[2];
                    }
                    for (g_171 = 0; (g_171 == 38); g_171++)
                    {
                        int32_t *l_3311 = &l_3270;
                        int32_t **l_3312[2][1][1];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_3312[i][j][k] = &l_2839[1];
                            }
                        }
                        l_3313 = l_3311;
                        (*l_3313) = 0L;
                        l_3308[2] = g_3314;
                        l_3271[0][1] = l_3271[0][3];
                    }
                    return l_3315;
                }
                if (p_28)
                    continue;
                for (g_2807 = 0; (g_2807 <= 3); g_2807 += 1)
                {
                    uint32_t l_3320[5] = {4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL};
                    int i;
                    for (l_3265 = 0; (l_3265 <= 3); l_3265 += 1)
                    {
                        (*g_3314) = (0x28E8254AL == (safe_add_func_uint64_t_u_u((**g_674), g_1428)));
                        (*g_2015) ^= ((safe_mul_func_uint16_t_u_u((**g_235), (*g_236))) , (*g_324));
                        return p_29;
                    }
                    l_3320[2]++;
                }
            }
        }
        else
        {
            int32_t *****l_3333 = &g_1964[1][4];
            uint32_t l_3364 = 0xEB4E3546L;
            int32_t *l_3386[10] = {&g_2962,(void*)0,(void*)0,&g_2962,(void*)0,(void*)0,&g_2962,(void*)0,(void*)0,&g_2962};
            int i;
            l_2839[1] = (((-1L) && (safe_mul_func_int16_t_s_s((((*g_1988) = (safe_mul_func_int8_t_s_s(0xE3L, (((++(*l_3239)) >= ((*g_313) = ((safe_div_func_int8_t_s_s((safe_sub_func_int32_t_s_s((&g_813 == l_3333), ((p_29 && (**g_3267)) | l_3334[4]))), (safe_mod_func_int64_t_s_s((((safe_mul_func_int16_t_s_s(p_29, (safe_mul_func_int16_t_s_s((!0xCC7CL), p_26)))) ^ g_3342) <= p_28), p_28)))) | 1UL))) < 1L)))) <= (*g_3268)), l_3343))) , (void*)0);
            for (g_215 = 0; (g_215 <= 6); g_215 += 1)
            {
                uint16_t l_3350[6];
                int32_t l_3351 = 0x2E6D89FCL;
                int32_t l_3387 = 1L;
                uint64_t l_3413 = 18446744073709551615UL;
                int32_t l_3429 = 0x55CA9494L;
                int32_t l_3430 = 0xA452B7ACL;
                int32_t l_3431 = 0xEFB038E2L;
                int32_t l_3433 = (-9L);
                int32_t l_3434 = 0xAF5BC9E6L;
                uint8_t l_3435[1];
                int i;
                for (i = 0; i < 6; i++)
                    l_3350[i] = 0UL;
                for (i = 0; i < 1; i++)
                    l_3435[i] = 3UL;
                for (g_3066 = 0; (g_3066 <= 2); g_3066 += 1)
                {
                    int i;
                    if (g_1385[g_3066])
                    {
                        uint8_t *l_3346[5][7][2] = {{{&g_583,&g_3342},{&g_3342,&g_583},{&g_3342,&l_3064},{&g_3342,&g_583},{&g_3342,&g_3342},{&g_583,&g_3342},{&l_3064,&g_3342}},{{&g_583,&g_3342},{&g_3342,&g_583},{&g_3342,&l_3064},{&g_3342,&g_583},{&g_3342,&l_3064},{&l_3064,&g_583},{&g_320,&g_583}},{{&l_3064,&l_3064},{&l_3064,&l_3064},{&g_583,&g_320},{&g_583,&l_3064},{&l_3064,&l_3064},{&l_3064,&g_583},{&g_320,&g_583}},{{&l_3064,&l_3064},{&l_3064,&l_3064},{&g_583,&g_320},{&g_583,&l_3064},{&l_3064,&l_3064},{&l_3064,&g_583},{&g_320,&g_583}},{{&l_3064,&l_3064},{&l_3064,&l_3064},{&g_583,&g_320},{&g_583,&l_3064},{&l_3064,&l_3064},{&l_3064,&g_583},{&g_320,&g_583}}};
                        int32_t l_3347 = (-1L);
                        uint64_t ***l_3358 = &g_674;
                        uint64_t ****l_3357 = &l_3358;
                        uint64_t *****l_3356[3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_3356[i] = &l_3357;
                        l_2839[g_3066] = ((safe_add_func_uint8_t_u_u((l_3347 = ((*g_1988) = g_1385[g_3066])), (((safe_sub_func_uint64_t_u_u(((&g_1385[(g_3066 + 1)] == (void*)0) == (l_3351 = l_3350[5])), (safe_sub_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(0x2A3A5F71L, ((((l_3356[1] == (void*)0) > (safe_div_func_int8_t_s_s(((((***g_1819) = (((*g_313) ^= 0x65C5L) > (&l_2839[(g_3066 + 1)] == &l_2839[(g_3066 + 1)]))) <= p_28) < p_26), 0xF3L))) == (**g_674)) <= 0x4DL))), p_26)))) , 0x9F689C7B231C61EBLL) != (*g_675)))) , &l_3347);
                        (*g_3314) |= (~(65527UL && (((safe_mod_func_int8_t_s_s(((*g_399) = (l_3364 , (0x56E8AC08L | (safe_rshift_func_int16_t_s_u((((*g_1988) = (((&g_1964[1][4] == l_3369) || ((safe_add_func_int32_t_s_s((((safe_mod_func_int16_t_s_s(0xF4E6L, (safe_sub_func_uint16_t_u_u(((*l_3239) = 0xEA4EL), (safe_div_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((((((safe_mul_func_int8_t_s_s(1L, ((safe_mul_func_uint8_t_u_u(p_28, (*g_3268))) != 0x2BD8L))) && p_26) == l_3384) <= (*g_1988)) | (-1L)), p_29)) != g_2083), p_29)))))) , l_3350[1]) ^ (*g_675)), p_27)) <= l_3385)) & p_27)) , 0x58BBL), 8))))), (-4L))) && (*g_675)) | (**g_3267))));
                    }
                    else
                    {
                        uint32_t l_3388[1];
                        int32_t *l_3391 = &l_2829;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_3388[i] = 0xD24120BFL;
                        l_3386[9] = l_3271[0][1];
                        l_3388[0]--;
                        l_2839[1] = l_3391;
                        (*g_3314) |= 0xC1AA503DL;
                    }
                    return p_27;
                }
                if ((*g_324))
                    continue;
                for (g_583 = 0; (g_583 <= 6); g_583 += 1)
                {
                    int64_t l_3394[9][8][3] = {{{(-10L),0x54DF203B457C0C8FLL,0x70E58DDBA12B6F05LL},{0x11F554643A4971DALL,4L,0x82AB2D1D60F1A90FLL},{(-10L),7L,(-10L)},{0x2803C85A14DC8768LL,0x11F554643A4971DALL,0x82AB2D1D60F1A90FLL},{0x10A979BBEDD8A960LL,(-5L),0x70E58DDBA12B6F05LL},{0x149D8E324AE7FA9ALL,0x11F554643A4971DALL,0x11F554643A4971DALL},{0x70E58DDBA12B6F05LL,7L,2L},{0x149D8E324AE7FA9ALL,4L,0x149D8E324AE7FA9ALL}},{{0x10A979BBEDD8A960LL,0x54DF203B457C0C8FLL,2L},{0x2803C85A14DC8768LL,0x2803C85A14DC8768LL,0x11F554643A4971DALL},{(-10L),0x54DF203B457C0C8FLL,0x70E58DDBA12B6F05LL},{0x11F554643A4971DALL,4L,0x82AB2D1D60F1A90FLL},{(-10L),7L,(-10L)},{0x2803C85A14DC8768LL,0x11F554643A4971DALL,0x82AB2D1D60F1A90FLL},{0x10A979BBEDD8A960LL,(-5L),0x70E58DDBA12B6F05LL},{0x149D8E324AE7FA9ALL,0x11F554643A4971DALL,0x11F554643A4971DALL}},{{0x70E58DDBA12B6F05LL,7L,2L},{0x149D8E324AE7FA9ALL,4L,0x149D8E324AE7FA9ALL},{0x10A979BBEDD8A960LL,0x54DF203B457C0C8FLL,2L},{0x2803C85A14DC8768LL,0x2803C85A14DC8768LL,0x11F554643A4971DALL},{(-10L),0x54DF203B457C0C8FLL,0x70E58DDBA12B6F05LL},{0x11F554643A4971DALL,4L,0x82AB2D1D60F1A90FLL},{(-10L),7L,(-10L)},{0x2803C85A14DC8768LL,0x11F554643A4971DALL,0x82AB2D1D60F1A90FLL}},{{0x10A979BBEDD8A960LL,(-5L),0x70E58DDBA12B6F05LL},{0x149D8E324AE7FA9ALL,0x11F554643A4971DALL,0x11F554643A4971DALL},{0x70E58DDBA12B6F05LL,7L,2L},{0x149D8E324AE7FA9ALL,4L,0x149D8E324AE7FA9ALL},{0x10A979BBEDD8A960LL,0x54DF203B457C0C8FLL,2L},{0x2803C85A14DC8768LL,0x2803C85A14DC8768LL,0x11F554643A4971DALL},{(-10L),0x54DF203B457C0C8FLL,0x70E58DDBA12B6F05LL},{0x11F554643A4971DALL,4L,0x82AB2D1D60F1A90FLL}},{{(-10L),7L,(-10L)},{0x2803C85A14DC8768LL,0x11F554643A4971DALL,0x82AB2D1D60F1A90FLL},{0x10A979BBEDD8A960LL,(-5L),0x70E58DDBA12B6F05LL},{0x149D8E324AE7FA9ALL,0x11F554643A4971DALL,0x11F554643A4971DALL},{0x70E58DDBA12B6F05LL,7L,2L},{0x149D8E324AE7FA9ALL,4L,0x149D8E324AE7FA9ALL},{0x10A979BBEDD8A960LL,0x54DF203B457C0C8FLL,2L},{0x2803C85A14DC8768LL,0x2803C85A14DC8768LL,0x11F554643A4971DALL}},{{(-10L),0x54DF203B457C0C8FLL,0x70E58DDBA12B6F05LL},{0x11F554643A4971DALL,4L,0x82AB2D1D60F1A90FLL},{(-10L),7L,(-10L)},{0x2803C85A14DC8768LL,0x11F554643A4971DALL,0x82AB2D1D60F1A90FLL},{0x10A979BBEDD8A960LL,(-5L),0x70E58DDBA12B6F05LL},{0x149D8E324AE7FA9ALL,0x11F554643A4971DALL,0x11F554643A4971DALL},{0x70E58DDBA12B6F05LL,7L,2L},{0x149D8E324AE7FA9ALL,4L,0x149D8E324AE7FA9ALL}},{{0x70E58DDBA12B6F05LL,0x2DC696680410C2E4LL,0x975D6FCF5B66BFA5LL},{0x11F554643A4971DALL,0x11F554643A4971DALL,0x149D8E324AE7FA9ALL},{2L,0x2DC696680410C2E4LL,(-10L)},{0x149D8E324AE7FA9ALL,0x2803C85A14DC8768LL,4L},{2L,(-5L),2L},{0x11F554643A4971DALL,0x149D8E324AE7FA9ALL,4L},{0x70E58DDBA12B6F05LL,0x54DF203B457C0C8FLL,(-10L)},{0x82AB2D1D60F1A90FLL,0x149D8E324AE7FA9ALL,0x149D8E324AE7FA9ALL}},{{(-10L),(-5L),0x975D6FCF5B66BFA5LL},{0x82AB2D1D60F1A90FLL,0x2803C85A14DC8768LL,0x82AB2D1D60F1A90FLL},{0x70E58DDBA12B6F05LL,0x2DC696680410C2E4LL,0x975D6FCF5B66BFA5LL},{0x11F554643A4971DALL,0x11F554643A4971DALL,0x149D8E324AE7FA9ALL},{2L,0x2DC696680410C2E4LL,(-10L)},{0x149D8E324AE7FA9ALL,0x2803C85A14DC8768LL,4L},{2L,(-5L),2L},{0x11F554643A4971DALL,0x149D8E324AE7FA9ALL,4L}},{{0x70E58DDBA12B6F05LL,0x54DF203B457C0C8FLL,(-10L)},{0x82AB2D1D60F1A90FLL,0x149D8E324AE7FA9ALL,0x149D8E324AE7FA9ALL},{(-10L),(-5L),0x975D6FCF5B66BFA5LL},{0x82AB2D1D60F1A90FLL,0x2803C85A14DC8768LL,0x82AB2D1D60F1A90FLL},{0x70E58DDBA12B6F05LL,0x2DC696680410C2E4LL,0x975D6FCF5B66BFA5LL},{0x11F554643A4971DALL,0x11F554643A4971DALL,0x149D8E324AE7FA9ALL},{2L,0x2DC696680410C2E4LL,(-10L)},{0x149D8E324AE7FA9ALL,0x2803C85A14DC8768LL,4L}}};
                    const int32_t l_3399[4][7][9] = {{{1L,0xBBA0EFA8L,0xCCA93FDDL,(-4L),0xD540C214L,(-1L),0xAE7C5C1AL,(-1L),(-10L)},{6L,0xCD884790L,0x6B5235C8L,(-1L),(-1L),0xCF93FA5AL,0xFB7E7B48L,0xAD8C77E6L,1L},{0x11F6C806L,(-1L),(-4L),0xC57CCF0BL,1L,0x54D8799EL,2L,0L,0x6BB1F6A0L},{0xBBA0EFA8L,0xCF93FA5AL,0L,0L,0L,1L,0xF9D9E4D6L,0L,0x554D3134L},{0xCF93FA5AL,0x22BE2E6DL,0xF3B3CECCL,0xAD8C77E6L,0xCB360D1DL,0x31E770FBL,(-4L),0xC57CCF0BL,6L},{0L,0xF3B3CECCL,(-1L),0xF9D9E4D6L,0x7326F1CCL,0x31E770FBL,0L,0L,0L},{0L,0xAD8C77E6L,0xF9D9E4D6L,0L,0x26B6F7D1L,1L,(-10L),0x0DE6D80DL,0x298B8BDDL}},{{0L,0xCB360D1DL,0x7326F1CCL,0x26B6F7D1L,0L,0x54D8799EL,1L,0x54D8799EL,0L},{1L,0x31E770FBL,0x31E770FBL,1L,0x54D8799EL,0xCF93FA5AL,(-1L),0xCB360D1DL,0xABC69239L},{0xF9D9E4D6L,(-4L),0L,(-10L),1L,(-1L),(-5L),0xAA73A3D1L,(-4L)},{0L,0xC57CCF0BL,0L,0x0DE6D80DL,0x54D8799EL,0xCB360D1DL,0xAA73A3D1L,1L,0xAE7C5C1AL},{0x554D3134L,6L,0L,0x298B8BDDL,0L,0xABC69239L,(-4L),0xAE7C5C1AL,0L},{0xE1BE5986L,0xF8360310L,0xCD884790L,0x22BE2E6DL,0x26B6F7D1L,0xAA73A3D1L,0x7326F1CCL,0x2792BC30L,0xFB7E7B48L},{0L,(-1L),0xF8360310L,0x7E3B9489L,(-4L),0x91779ED8L,0x7326F1CCL,0x34EC7A66L,1L}},{{0x3AA5D648L,0L,(-1L),0x7E3B9489L,1L,0x5C22E601L,0x1403BC98L,0x9C5576FDL,(-1L)},{0x34EC7A66L,0xF8360310L,0xABC69239L,0L,1L,0x54D8799EL,(-4L),(-10L),0x2792BC30L},{0x22BE2E6DL,0xF9D9E4D6L,(-5L),0x6BB1F6A0L,0x11F6C806L,0L,0x11F6C806L,0x6BB1F6A0L,(-5L)},{0x6BB1F6A0L,0x6BB1F6A0L,2L,0xF8C50BFAL,0xF9D9E4D6L,(-1L),0xAD8C77E6L,0L,0L},{(-1L),0x3AA5D648L,0x9C5576FDL,0L,0x7D9270CDL,0x437B130EL,0x97463B1AL,2L,0xAD8C77E6L},{(-4L),0x26B6F7D1L,2L,0xAA73A3D1L,6L,0x09ABB148L,0x554D3134L,0x54D8799EL,0xF8C50BFAL},{0L,0xEE42DD17L,(-5L),(-6L),0x3AA5D648L,0x298B8BDDL,0xCD884790L,1L,1L}},{{0x91779ED8L,0x47247CE3L,0xABC69239L,0L,0xCD9F931AL,0x6FDDCCBAL,0xAA73A3D1L,0xC57CCF0BL,(-4L)},{0xFB7E7B48L,1L,(-1L),0x02CEEDDDL,(-1L),0xF9D9E4D6L,(-1L),(-4L),0x298B8BDDL},{0x09ABB148L,1L,0xF8360310L,(-5L),0x97463B1AL,6L,0x5C22E601L,(-1L),0L},{(-1L),0x47247CE3L,(-1L),0x298B8BDDL,0x91779ED8L,2L,0x9C5576FDL,0x11F6C806L,0x09ABB148L},{0xCD884790L,0xEE42DD17L,0L,0x31E770FBL,0x437B130EL,0x31E770FBL,0L,0xEE42DD17L,0xCD884790L},{0xCF93FA5AL,0x26B6F7D1L,0x97463B1AL,0xE1BE5986L,0x6BB1F6A0L,0xABC69239L,1L,(-6L),1L},{1L,0x3AA5D648L,0xAE7C5C1AL,0L,0x2792BC30L,0xD540C214L,0L,(-4L),0x34EC7A66L}}};
                    int i, j, k;
                    for (g_1317 = 0; g_1317 < 8; g_1317 += 1)
                    {
                        for (g_3342 = 0; g_3342 < 7; g_3342 += 1)
                        {
                            for (g_631 = 0; g_631 < 3; g_631 += 1)
                            {
                                g_384[g_1317][g_3342][g_631] = (void*)0;
                            }
                        }
                    }
                    l_3386[9] = l_3271[0][1];
                    if ((safe_lshift_func_int16_t_s_u(p_26, (***g_1819))))
                    {
                        uint32_t l_3395 = 1UL;
                        int32_t **l_3398[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_3398[i] = &l_2839[1];
                        l_3395++;
                        l_3386[9] = l_3271[0][3];
                    }
                    else
                    {
                        return l_3399[0][1][6];
                    }
                    if (l_3400)
                        continue;
                }
                l_3387 = (safe_add_func_uint8_t_u_u((l_3350[3] && (safe_unary_minus_func_int32_t_s(p_27))), ((~((**g_674) || ((safe_sub_func_uint16_t_u_u((*g_236), 65532UL)) && ((l_3350[3] != 0xC4L) && (safe_rshift_func_uint8_t_u_s((*g_1988), 1)))))) || (safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((*g_1988), p_29)), l_3413)))));
                for (g_320 = 2; (g_320 <= 6); g_320 += 1)
                {
                    int16_t l_3416[10][9][2] = {{{0xC66FL,(-1L)},{(-2L),1L},{(-1L),0x4555L},{5L,5L},{0x602AL,3L},{0x1A4FL,0L},{0xD899L,0xDA7FL},{0x9898L,0xD899L},{(-1L),0x2F5AL}},{{(-1L),0xD899L},{0x9898L,0xDA7FL},{0xD899L,0L},{0x1A4FL,3L},{0x602AL,5L},{5L,0x4555L},{(-1L),1L},{(-2L),(-1L)},{0xC66FL,0x0C28L}},{{3L,0L},{0x4555L,0x0068L},{0x0C28L,0x0068L},{0x4555L,0L},{3L,0x0C28L},{0xC66FL,(-1L)},{(-2L),1L},{(-1L),0x4555L},{5L,5L}},{{0x602AL,3L},{0x1A4FL,0x0068L},{0xC66FL,0xD899L},{0x68ABL,0xC66FL},{0x602AL,0x9898L},{0x602AL,0xC66FL},{0x68ABL,0xD899L},{0xC66FL,0x0068L},{0xDA7FL,0x4555L}},{{0x0C28L,(-1L)},{(-1L),1L},{0x6B7CL,0x2F5AL},{5L,0x602AL},{(-1L),0L},{0x4555L,(-2L)},{1L,1L},{0L,1L},{1L,(-2L)}},{{0x4555L,0L},{(-1L),0x602AL},{5L,0x2F5AL},{0x6B7CL,1L},{(-1L),(-1L)},{0x0C28L,0x4555L},{0xDA7FL,0x0068L},{0xC66FL,0xD899L},{0x68ABL,0xC66FL}},{{0x602AL,0x9898L},{0x602AL,0xC66FL},{0x68ABL,0xD899L},{0xC66FL,0x0068L},{0xDA7FL,0x4555L},{0x0C28L,(-1L)},{(-1L),1L},{0x6B7CL,0x2F5AL},{5L,0x602AL}},{{(-1L),0L},{0x4555L,(-2L)},{1L,1L},{0L,1L},{1L,(-2L)},{0x4555L,0L},{(-1L),0x602AL},{5L,0x2F5AL},{0x6B7CL,1L}},{{(-1L),(-1L)},{0x0C28L,0x4555L},{0xDA7FL,0x0068L},{0xC66FL,0xD899L},{0x68ABL,0xC66FL},{0x602AL,0x9898L},{0x602AL,0xC66FL},{0x68ABL,0xD899L},{0xC66FL,0x0068L}},{{0xDA7FL,0x4555L},{0x0C28L,(-1L)},{(-1L),1L},{0x6B7CL,0x2F5AL},{5L,0x602AL},{(-1L),0L},{0x4555L,(-2L)},{1L,1L},{0L,1L}}};
                    int32_t *****l_3426 = &g_1964[1][3];
                    int32_t l_3428 = (-10L);
                    int32_t l_3432[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_3432[i] = 0x2701BC4AL;
                    l_3351 |= (((safe_mod_func_int32_t_s_s(0xF2D17B17L, ((l_3416[4][1][0] &= 0x84CEF04C94400E8DLL) | (g_3007[5][2][1] |= ((~(safe_mul_func_int8_t_s_s((((*l_3240) = ((safe_div_func_uint16_t_u_u((p_27 && (-2L)), ((**g_235) = (((void*)0 == (*g_3084)) | p_27)))) != (0x7F278F23L == (--l_3254[g_320][(g_215 + 1)])))) | 0xE244L), p_29))) < p_26))))) > p_26) , p_28);
                    (*l_3333) = (*l_3333);
                    (*g_2015) = (safe_div_func_uint16_t_u_u((((l_3426 != (void*)0) == 1UL) ^ 0x459DL), 0x25E0L));
                    l_3435[0]++;
                }
            }
        }
        return p_26;
    }
    else
    {
        uint32_t l_3443 = 3UL;
        int32_t l_3466 = 0x3A9B231FL;
        int32_t *l_3470 = &g_1730[3];
        int32_t l_3486 = 0x891351B5L;
        int32_t l_3487 = 1L;
        int32_t l_3489 = (-1L);
        int32_t l_3490 = 0xCDC9E74FL;
        int32_t l_3493 = 0x89584919L;
        for (g_2807 = 0; (g_2807 == 60); g_2807 = safe_add_func_int64_t_s_s(g_2807, 2))
        {
            int64_t l_3442 = 1L;
            int32_t l_3458 = 0x137FE65EL;
            int32_t l_3465[7][2][4] = {{{0x9ACC310AL,0xFAC29C23L,0L,0L},{(-1L),(-1L),0L,0x91E4C63AL}},{{0x9ACC310AL,(-1L),0x8B749370L,0xFAC29C23L},{0x6B53C63BL,0x8B749370L,0x91E4C63AL,0x8B749370L}},{{0x91E4C63AL,0x8B749370L,0x6B53C63BL,0xFAC29C23L},{0x8B749370L,(-1L),0x9ACC310AL,0x91E4C63AL}},{{0L,(-1L),(-1L),0L},{0L,0xFAC29C23L,0x9ACC310AL,(-6L)}},{{0x8B749370L,0L,0x6B53C63BL,0x3B40902DL},{0x91E4C63AL,4L,0x91E4C63AL,0x3B40902DL}},{{0x6B53C63BL,0L,0x8B749370L,(-6L)},{0x9ACC310AL,0xFAC29C23L,0L,0L}},{{(-1L),(-1L),0L,0x91E4C63AL},{0x9ACC310AL,(-1L),0x8B749370L,0xFAC29C23L}}};
            const int32_t **l_3478 = &g_2018;
            const int32_t ***l_3477 = &l_3478;
            uint32_t l_3482[4];
            uint32_t l_3494 = 0UL;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_3482[i] = 0xE9D42B77L;
            for (g_676 = 0; (g_676 <= 0); g_676 += 1)
            {
                int32_t l_3440 = 0x98BA2530L;
                int32_t l_3441[10] = {0x081C1A6BL,(-1L),0x081C1A6BL,(-1L),0x081C1A6BL,(-1L),0x081C1A6BL,(-1L),0x081C1A6BL,(-1L)};
                int i, j;
                if (g_169[(g_676 + 8)][g_676])
                    break;
                l_3443--;
                (*g_3314) = ((*g_1917) , (l_2880 != l_2880));
                for (l_2823 = 0; (l_2823 <= 0); l_2823 += 1)
                {
                    int32_t l_3450 = (-1L);
                    l_3458 |= (18446744073709551611UL && (safe_sub_func_int32_t_s_s(((((p_29 | (((safe_mod_func_uint8_t_u_u((*g_3268), (l_3450 = l_3442))) , &l_3443) == &p_29)) , 0xA9FBL) , ((((safe_add_func_uint64_t_u_u((l_3457 = (safe_sub_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(p_26, ((0xB1B4803694FE6DDALL && 0L) , p_26))), 0x02E5A302DFCFF1AELL))), p_29)) ^ 0x886356DEL) <= 0x7F9820D149CBD028LL) > (-1L))) != 0x56A50753E1F6DD99LL), p_26)));
                }
            }
            for (l_3443 = 0; (l_3443 <= 34); l_3443 = safe_add_func_uint64_t_u_u(l_3443, 2))
            {
                int32_t *l_3461 = &g_2962;
                l_3461 = (void*)0;
                for (g_851 = 0; (g_851 <= 6); g_851 += 1)
                {
                    const uint8_t l_3462 = 255UL;
                    return l_3462;
                }
            }
            for (l_3400 = 2; (l_3400 == (-14)); --l_3400)
            {
                uint32_t l_3467 = 0x5DF5D493L;
                int32_t l_3483 = 0x47280BE6L;
                int32_t l_3484 = 0xD281143DL;
                int32_t l_3491 = 0xCEBE4928L;
                int32_t l_3492[5][7][7] = {{{1L,(-8L),0x8F2F3E1BL,1L,(-1L),0x1A397D30L,(-1L)},{0x7AA4E981L,0L,0xB18B4F98L,0xB18B4F98L,0L,0x7AA4E981L,(-10L)},{(-1L),1L,(-8L),(-7L),0x2ADCB26DL,0xCB53C736L,0x3EAF9899L},{0x4AF65F5CL,0L,0xCB53C736L,0x7FE7E64DL,(-3L),0x6BAA37E6L,0xFFB869A9L},{1L,1L,8L,6L,0xEBC72F23L,0L,1L},{(-8L),0L,0xE4811B06L,0x1A397D30L,0x88ECDA3CL,0xFA7E1D05L,(-1L)},{0x367A86D4L,(-5L),0L,(-1L),(-5L),0x64CBA909L,0x9F4EA21FL}},{{(-5L),0xFA7E1D05L,1L,0xF0916BE6L,1L,0L,0x8F2F3E1BL},{0x8F2F3E1BL,0x47E48CD4L,(-7L),0xD011C846L,0x7C060893L,0x367A86D4L,(-4L)},{0xF0916BE6L,(-7L),0x479A5BE8L,0x7AA4E981L,1L,(-3L),1L},{0xF0916BE6L,8L,0x6BAA37E6L,0x47E48CD4L,(-1L),0x1DA498B3L,0x5CC5E906L},{0x8F2F3E1BL,0xC9C45AC9L,0x47E48CD4L,1L,(-5L),1L,0L},{(-5L),1L,0x5CC5E906L,0xCF2F4362L,0xE4811B06L,1L,1L},{0x367A86D4L,0x8F281AEFL,0xF20670CEL,0xE4811B06L,0xFAEDE8DEL,0L,0xFAEDE8DEL}},{{(-8L),1L,1L,(-8L),0x8F2F3E1BL,0x2BB6E817L,0x7C060893L},{1L,0x5CC5E906L,(-1L),1L,0x2BB6E817L,(-3L),3L},{0x4AF65F5CL,0L,0x8EDFDD6AL,0xFAEDE8DEL,(-1L),(-1L),0x7C060893L},{(-1L),0x6511D80EL,0x58606DC1L,0xF20670CEL,(-8L),0x7C060893L,0xFAEDE8DEL},{0x7AA4E981L,0x63793781L,1L,(-3L),0xF20670CEL,(-8L),1L},{0L,(-3L),0x1DA498B3L,0x3EAF9899L,(-1L),0x8EDFDD6AL,0L},{2L,0x9F4EA21FL,0x8F281AEFL,0L,0x60625074L,0xB18B4F98L,0x5CC5E906L}},{{0L,0x58606DC1L,(-1L),0xC514BFE3L,(-7L),0x8F281AEFL,1L},{0x5E1A2238L,0x8F2F3E1BL,0xCF2F4362L,(-5L),(-8L),0x8F281AEFL,(-4L)},{0xAC37E8E9L,(-1L),1L,7L,1L,0xB18B4F98L,0x8F2F3E1BL},{0xCB53C736L,0xFFB869A9L,1L,(-8L),0xF0916BE6L,0x8EDFDD6AL,0x9F4EA21FL},{0xE4811B06L,1L,0L,8L,0xFFB869A9L,(-8L),(-1L)},{1L,0x3BB97D04L,1L,0x7C060893L,0L,0x7C060893L,1L},{(-1L),(-1L),1L,0x8F2F3E1BL,0x2BB6E817L,0x7C060893L,0x7AA4E981L}},{{(-1L),1L,0xFFB869A9L,0L,1L,0L,0x8F281AEFL},{0x8EDFDD6AL,0L,0x479A5BE8L,(-1L),0x2BB6E817L,0x58606DC1L,0xD011C846L},{0x58606DC1L,0xAC37E8E9L,1L,0xBD0DA7A7L,0x5E1A2238L,0x64CBA909L,0x2BB6E817L},{1L,1L,0xFA7E1D05L,0L,0x7AA4E981L,7L,(-5L)},{0x1DA498B3L,3L,0x6BAA37E6L,(-1L),(-6L),0x9F4EA21FL,(-1L)},{0x8F281AEFL,0L,(-8L),0x2ADCB26DL,7L,(-1L),(-1L)},{(-1L),0x7FE7E64DL,0x1DA498B3L,0xD011C846L,0xB18B4F98L,(-1L),0x47E48CD4L}}};
                int i, j, k;
                l_3467--;
                l_3470 = (void*)0;
                (*g_2015) = (safe_mod_func_uint32_t_u_u(((((((g_3262 > l_3458) , (safe_div_func_int64_t_s_s((safe_div_func_int8_t_s_s((((p_28 > ((void*)0 == l_3477)) || (((l_3479 == (void*)0) < ((safe_add_func_int32_t_s_s(((p_29 , ((*g_1988) = (***l_3477))) & 1UL), (**l_3478))) , p_26)) & p_29)) || l_3482[2]), p_29)), 0xDAF62A47E25F191ELL))) == l_3467) && g_3015[3][0]) || 0x193BL) || p_27), (**l_3478)));
                l_3494++;
            }
        }
    }
    return (*g_2787);
}







static uint64_t func_30(int32_t p_31, uint64_t p_32)
{
    uint16_t ****l_2809 = &g_1819;
    uint16_t *****l_2810 = &l_2809;
    int32_t *l_2811 = &g_6;
    int32_t **l_2812 = &g_324;
    int32_t l_2815 = (-2L);
    (*l_2810) = l_2809;
    (*l_2812) = l_2811;
    l_2815 |= ((**l_2812) != (--(**g_674)));
    return (**g_674);
}







static int16_t func_39(const uint16_t * p_40, int32_t * p_41, int32_t p_42, uint16_t p_43, uint16_t p_44)
{
    uint16_t l_2630[5];
    int32_t l_2635 = (-1L);
    int64_t l_2636[1][3][3] = {{{0x486D65F02344725FLL,0x486D65F02344725FLL,0x486D65F02344725FLL},{5L,5L,5L},{0x486D65F02344725FLL,0x486D65F02344725FLL,0x486D65F02344725FLL}}};
    int32_t l_2640[8][8][4] = {{{(-1L),0x9486396FL,1L,(-1L)},{(-6L),0x9486396FL,0L,(-6L)},{0x9486396FL,0x3C1EF731L,(-1L),0xF387460AL},{0xC0814194L,1L,0xC0814194L,1L},{(-6L),0xF387460AL,1L,0x2276776EL},{1L,(-1L),(-1L),0xF387460AL},{0L,(-6L),(-1L),0x3C1EF731L},{1L,0x9486396FL,1L,0x4FD10662L}},{{(-6L),0xC0814194L,0xC0814194L,(-6L)},{0xC0814194L,(-6L),(-1L),0L},{0x9486396FL,1L,0L,0x2276776EL},{(-6L),0L,1L,0x2276776EL},{(-1L),1L,(-1L),0L},{0xF387460AL,(-6L),0xE7C46AA5L,(-6L)},{1L,0xC0814194L,1L,0x4FD10662L},{0x3C1EF731L,0x9486396FL,0xC0814194L,0x3C1EF731L}},{{0x9486396FL,(-6L),0x76B54B42L,0xF387460AL},{0x9486396FL,(-1L),0xC0814194L,0x2276776EL},{0x3C1EF731L,0xF387460AL,1L,1L},{1L,1L,0xE7C46AA5L,0xF387460AL},{0xF387460AL,0x3C1EF731L,(-1L),(-6L)},{(-1L),0x9486396FL,1L,(-1L)},{(-6L),0x9486396FL,0L,(-6L)},{0x9486396FL,0x3C1EF731L,(-1L),0xF387460AL}},{{0xC0814194L,1L,0xC0814194L,1L},{(-6L),0xF387460AL,1L,0x2276776EL},{1L,(-1L),(-1L),0xF387460AL},{0L,(-6L),(-1L),0x3C1EF731L},{1L,0x9486396FL,1L,0x4FD10662L},{(-6L),0xC0814194L,0xC0814194L,(-6L)},{0xC0814194L,(-6L),(-1L),0L},{0x9486396FL,1L,0L,0x2276776EL}},{{(-6L),1L,0xE7C46AA5L,(-1L)},{0xEC0D0018L,1L,0x76B54B42L,1L},{1L,0xC0814194L,1L,0xC0814194L},{1L,1L,0xE7C46AA5L,(-1L)},{0L,0L,1L,0L},{0L,0xC0814194L,(-10L),1L},{0L,0xEC0D0018L,1L,(-1L)},{0L,1L,0xE7C46AA5L,0xE7C46AA5L}},{{1L,1L,1L,1L},{1L,0L,0x76B54B42L,0xC0814194L},{0xEC0D0018L,0L,0xE7C46AA5L,0x76B54B42L},{0xC0814194L,0L,0xF387460AL,0xC0814194L},{0L,0L,0xEC0D0018L,1L},{1L,1L,1L,0xE7C46AA5L},{0xC0814194L,1L,0x4FD10662L,(-1L)},{1L,0xEC0D0018L,0x76B54B42L,1L}},{{1L,0xC0814194L,0x76B54B42L,0L},{1L,0L,0x4FD10662L,(-1L)},{0xC0814194L,1L,1L,0xC0814194L},{1L,0xC0814194L,0xEC0D0018L,1L},{0L,1L,0xF387460AL,(-1L)},{0xC0814194L,1L,0xE7C46AA5L,(-1L)},{0xEC0D0018L,1L,0x76B54B42L,1L},{1L,0xC0814194L,1L,0xC0814194L}},{{1L,1L,0xE7C46AA5L,(-1L)},{0L,0L,1L,0L},{0L,0xC0814194L,(-10L),1L},{0L,0xEC0D0018L,1L,(-1L)},{0L,1L,0xE7C46AA5L,0xE7C46AA5L},{1L,1L,1L,1L},{1L,0L,0x76B54B42L,0xC0814194L},{0xEC0D0018L,0L,0xE7C46AA5L,0x76B54B42L}}};
    int64_t l_2718 = 0x84B9C914B0DF85BELL;
    uint32_t *l_2721[5];
    uint16_t l_2754 = 1UL;
    int32_t ****l_2773[2];
    int8_t **l_2785 = &g_1379[0][9];
    uint64_t l_2791 = 0xA3E1932FB75589DALL;
    const uint64_t ** const * const l_2799[5][10][2] = {{{&g_2465,&g_2465},{&g_2465,&g_2465},{&g_2465,&g_2465},{&g_2465,&g_2465},{&g_2465,&g_2465},{(void*)0,&g_2465},{(void*)0,&g_2465},{&g_2465,&g_2465},{(void*)0,&g_2465},{&g_2465,&g_2465}},{{&g_2465,&g_2465},{&g_2465,&g_2465},{&g_2465,&g_2465},{&g_2465,&g_2465},{(void*)0,&g_2465},{&g_2465,&g_2465},{(void*)0,&g_2465},{(void*)0,&g_2465},{&g_2465,&g_2465},{&g_2465,&g_2465}},{{&g_2465,&g_2465},{&g_2465,&g_2465},{&g_2465,(void*)0},{&g_2465,&g_2465},{(void*)0,&g_2465},{&g_2465,&g_2465},{&g_2465,&g_2465},{(void*)0,&g_2465},{&g_2465,(void*)0},{&g_2465,&g_2465}},{{&g_2465,&g_2465},{&g_2465,&g_2465},{&g_2465,&g_2465},{&g_2465,&g_2465},{&g_2465,&g_2465},{&g_2465,(void*)0},{&g_2465,&g_2465},{&g_2465,&g_2465},{&g_2465,&g_2465},{&g_2465,&g_2465}},{{(void*)0,&g_2465},{&g_2465,&g_2465},{&g_2465,&g_2465},{&g_2465,&g_2465},{&g_2465,(void*)0},{&g_2465,&g_2465},{&g_2465,&g_2465},{&g_2465,&g_2465},{&g_2465,&g_2465},{&g_2465,&g_2465}}};
    uint64_t ***l_2801 = &g_674;
    uint64_t ****l_2800 = &l_2801;
    int32_t *l_2802 = &l_2640[1][6][1];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_2630[i] = 0UL;
    for (i = 0; i < 5; i++)
        l_2721[i] = &g_2032;
    for (i = 0; i < 2; i++)
        l_2773[i] = &g_384[5][2][0];
    if ((safe_div_func_int16_t_s_s((((safe_sub_func_int64_t_s_s(0x851962AFFA064B4ALL, (safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((p_44 < (((safe_lshift_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u(((***g_1819) = (safe_div_func_uint8_t_u_u(p_44, 2L))), l_2630[0])) , (((safe_mul_func_uint8_t_u_u(((((l_2630[0] || (safe_mul_func_int8_t_s_s((((l_2635 = 0xCBBC0675A4FC068CLL) ^ ((*g_675) = l_2630[0])) , (*g_399)), 0xCCL))) <= 0x30L) | 0x317ECAB1AF46A5CFLL) | p_43), 0xC4L)) , p_44) , l_2630[0])) >= 255UL), l_2636[0][2][1])) , g_2164) , p_42)), (*g_313))) > 6UL), 1UL)))) | g_1730[3]) > l_2636[0][1][2]), l_2630[2])))
    {
        int32_t *l_2639[8][9] = {{(void*)0,&g_6,&g_1730[3],&g_3,&g_3,&g_3,&g_3,&g_1730[3],&g_6},{&g_1730[3],&g_1730[5],&g_3,&g_1730[0],&g_6,&l_2635,&g_5,&g_1730[1],&g_3},{&g_6,&g_1730[1],&l_2635,&g_3,&g_1730[1],&g_5,&l_2635,&g_6,&g_1730[0]},{(void*)0,&g_1730[5],(void*)0,&g_6,&g_1730[3],&g_3,&g_3,&g_3,&g_3},{&g_1730[3],&g_6,(void*)0,&g_6,&g_1730[3],(void*)0,&g_1730[3],&g_1730[1],&g_1730[1]},{&g_1730[0],&g_1730[3],&l_2635,&g_3,&g_6,&g_6,(void*)0,&g_1730[3],&g_3},{&g_3,&g_3,&g_6,&g_1730[0],(void*)0,(void*)0,&g_6,(void*)0,(void*)0},{&l_2635,(void*)0,&g_1730[1],&g_3,(void*)0,&g_3,&g_1730[1],(void*)0,&l_2635}};
        int32_t l_2641[6] = {0x264D78E5L,0x264D78E5L,0x264D78E5L,0x264D78E5L,0x264D78E5L,0x264D78E5L};
        const int8_t *l_2767 = (void*)0;
        const int8_t **l_2766 = &l_2767;
        const int8_t ***l_2765 = &l_2766;
        int32_t l_2776 = 0x2763B8DEL;
        int8_t ***l_2781 = &g_1381;
        uint8_t l_2782[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_2782[i] = 0x90L;
        (*g_2015) |= (safe_add_func_uint8_t_u_u(l_2635, 4UL));
        g_2642--;
        for (g_2642 = (-1); (g_2642 != 21); ++g_2642)
        {
            int8_t **l_2661 = &g_1379[0][9];
            const int32_t l_2698 = 7L;
            int32_t l_2701 = 0xEA4BE6D2L;
            int16_t * const *l_2736 = &g_313;
            int16_t * const **l_2735 = &l_2736;
            int32_t l_2740 = 0L;
            int32_t l_2742 = 0x8C0D715AL;
            int32_t l_2744 = (-1L);
            int32_t l_2745 = 0x972FE867L;
            int32_t l_2750 = 0x2F36D312L;
            int32_t l_2751 = 0xA54AF640L;
            int32_t l_2752[1];
            const int8_t *l_2763[5][6][8] = {{{&g_126,&g_238[4][5][0],&g_126,&g_238[5][8][0],&g_126,&g_126,&g_1728,&g_631},{&g_238[4][5][0],&g_631,&g_1728,&g_126,&g_126,&g_126,&g_1728,&g_631},{&g_126,&g_1728,&g_126,(void*)0,&g_126,&g_238[3][4][0],&g_631,&g_126},{&g_1728,&g_126,&g_631,&g_1728,&g_126,&g_631,&g_631,(void*)0},{&g_631,&g_1728,&g_126,&g_238[3][4][0],&g_238[3][4][0],&g_126,&g_1728,&g_631},{&g_238[3][4][0],&g_126,&g_1728,&g_631,&g_631,(void*)0,&g_1728,&g_126}},{{&g_1728,&g_631,&g_126,&g_1728,&g_631,(void*)0,&g_126,&g_126},{(void*)0,&g_126,&g_1728,&g_126,&g_1728,&g_126,(void*)0,&g_126},{&g_126,&g_1728,&g_631,&g_238[4][5][0],&g_126,&g_631,&g_126,&g_631},{&g_238[5][8][0],&g_126,&g_238[4][5][0],&g_126,&g_126,&g_238[5][8][0],&g_631,&g_631},{&g_631,&g_631,&g_126,&g_126,&g_631,&g_631,&g_126,&g_631},{&g_126,&g_126,&g_631,&g_1728,&g_1728,&g_238[4][5][0],(void*)0,&g_126}},{{&g_238[3][4][0],&g_631,&g_126,&g_1728,&g_126,&g_631,&g_126,&g_631},{&g_238[5][8][0],&g_126,(void*)0,&g_126,&g_238[5][8][0],&g_1728,&g_1728,&g_631},{&g_1728,&g_631,&g_238[4][5][0],&g_126,&g_631,&g_126,&g_631,&g_126},{(void*)0,&g_126,&g_238[4][5][0],&g_631,&g_126,&g_1728,&g_1728,&g_126},{&g_631,(void*)0,(void*)0,&g_631,&g_1728,&g_126,&g_126,&g_631},{&g_631,&g_238[4][5][0],&g_126,(void*)0,&g_126,&g_631,(void*)0,&g_126}},{{&g_126,&g_238[4][5][0],&g_631,&g_1728,&g_126,&g_126,&g_126,&g_1728},{&g_126,(void*)0,&g_126,&g_238[5][8][0],&g_1728,&g_1728,&g_631,&g_126},{&g_1728,&g_126,&g_631,&g_238[3][4][0],(void*)0,&g_126,&g_1728,&g_238[4][5][0]},{&g_1728,&g_631,&g_126,&g_126,&g_1728,&g_1728,&g_126,&g_126},{&g_126,&g_126,&g_631,&g_631,&g_126,&g_631,&g_126,&g_126},{&g_126,&g_631,&g_1728,&g_631,&g_126,&g_238[4][5][0],(void*)0,&g_126}},{{&g_631,&g_126,&g_238[3][4][0],&g_631,&g_1728,&g_631,&g_238[3][4][0],&g_126},{&g_631,&g_631,&g_1728,&g_126,&g_126,&g_238[5][8][0],&g_126,&g_238[4][5][0]},{(void*)0,&g_1728,&g_126,&g_238[3][4][0],&g_631,(void*)0,&g_126,&g_126},{&g_1728,&g_238[3][4][0],&g_1728,&g_238[5][8][0],&g_238[5][8][0],&g_1728,&g_238[3][4][0],&g_1728},{&g_238[5][8][0],&g_1728,&g_238[3][4][0],&g_1728,&g_126,&g_126,(void*)0,&g_126},{&g_238[3][4][0],&g_126,&g_1728,(void*)0,&g_1728,&g_126,&g_126,&g_631}}};
            const int8_t **l_2762 = &l_2763[4][3][6];
            const int8_t ***l_2761 = &l_2762;
            const int8_t ****l_2764[10][3] = {{&l_2761,&l_2761,&l_2761},{&l_2761,(void*)0,(void*)0},{&l_2761,&l_2761,&l_2761},{&l_2761,(void*)0,(void*)0},{&l_2761,&l_2761,&l_2761},{&l_2761,(void*)0,(void*)0},{&l_2761,&l_2761,&l_2761},{&l_2761,(void*)0,(void*)0},{&l_2761,&l_2761,&l_2761},{(void*)0,(void*)0,(void*)0}};
            uint32_t **l_2777[1][9];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2752[i] = 0x327D160AL;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 9; j++)
                    l_2777[i][j] = &g_1917;
            }
            for (g_2083 = (-19); (g_2083 != (-1)); g_2083 = safe_add_func_uint32_t_u_u(g_2083, 6))
            {
                uint16_t l_2688[2][8][4] = {{{0UL,0x54A9L,0UL,1UL},{0UL,0UL,0x54A9L,0xE716L},{0xCC2CL,0xC3EBL,0x7787L,0UL},{0x6D34L,7UL,0x7787L,0xCC2CL},{0xCC2CL,0xE675L,0x54A9L,0xD9A1L},{0UL,0x2732L,0UL,0xD40DL},{0UL,0xD40DL,65535UL,0xE675L},{0UL,0x6D34L,65535UL,65535UL}},{{0x66E9L,0x66E9L,0xE716L,0x2732L},{0x54A9L,1UL,0UL,65535UL},{0x2732L,0xD9A1L,8UL,0UL},{0xE716L,0xD9A1L,7UL,65535UL},{0xD9A1L,1UL,0x6D34L,0x2732L},{0UL,0x66E9L,1UL,65535UL},{8UL,0x6D34L,9UL,0xE675L},{1UL,0xD40DL,0UL,0xD40DL}}};
                int32_t l_2689 = 0xA9FEF254L;
                int32_t *l_2706 = (void*)0;
                int8_t *****l_2715 = (void*)0;
                uint64_t l_2739[2];
                int32_t l_2746 = 0x0A2A6878L;
                int32_t l_2747 = 0x2A0090C1L;
                int32_t l_2748 = 9L;
                int32_t l_2749[3];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_2739[i] = 0x414E500940FA1FFCLL;
                for (i = 0; i < 3; i++)
                    l_2749[i] = 1L;
                if ((*p_41))
                {
                    uint16_t l_2656[6];
                    int8_t **l_2662 = &g_739;
                    int16_t *l_2663 = &g_1792;
                    int16_t **l_2664 = &g_313;
                    int32_t l_2665[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int i;
                    for (i = 0; i < 6; i++)
                        l_2656[i] = 65526UL;
                    for (g_526 = 0; (g_526 == 10); g_526 = safe_add_func_uint64_t_u_u(g_526, 4))
                    {
                        uint32_t *l_2655 = &g_952;
                        (*g_2015) ^= (((*l_2655) ^= (1L > (safe_unary_minus_func_int8_t_s((safe_lshift_func_uint8_t_u_u((+(-6L)), 2)))))) <= (g_215 & (p_44 < ((p_42 , (((p_42 , (((*g_313) = (p_44 < (0xA556L | (p_44 | p_44)))) ^ p_44)) && 4UL) >= l_2656[2])) || 0x53L))));
                    }
                    (*g_2015) = (l_2665[0] = (safe_lshift_func_int8_t_s_s(((safe_add_func_int64_t_s_s((l_2661 == l_2662), (((*l_2664) = l_2663) != (p_43 , p_40)))) == p_44), ((&l_2641[0] == &p_42) , 0x2EL))));
                    l_2689 ^= (((safe_div_func_uint32_t_u_u(((((safe_add_func_uint8_t_u_u(((*g_1988) = ((4294967286UL | ((*g_399) && (~(p_44 ^ ((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s((safe_sub_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u(p_43, 7)) >= l_2630[0]) <= ((0UL != ((!(safe_sub_func_uint64_t_u_u((**g_674), ((safe_lshift_func_int8_t_s_s((((*g_2015) = (*p_41)) , p_42), l_2636[0][2][1])) || l_2688[0][2][2])))) > p_43)) >= (*g_313))), l_2688[0][3][3])) != p_44), l_2688[0][2][2])), p_44)), 5)) == (*g_1988)), 2)) && g_350))))) || 7L)), p_44)) , (*p_41)) >= l_2688[0][5][2]) , 0x3504552BL), 1L)) , l_2636[0][2][1]) == 1L);
                }
                else
                {
                    int16_t l_2694 = 0L;
                    int64_t *l_2717 = &g_169[6][0];
                    int32_t *l_2738[1][8][5] = {{{&g_5,&g_87[8],&g_1730[5],&l_2635,&l_2635},{&g_87[8],(void*)0,&g_87[8],&g_3,&l_2640[0][4][0]},{&g_87[8],(void*)0,&g_3,(void*)0,&l_2641[1]},{&g_5,&g_1730[5],(void*)0,&g_6,&l_2635},{(void*)0,&l_2635,&g_3,&l_2641[1],&g_3},{(void*)0,(void*)0,&g_87[8],(void*)0,&g_3},{&g_3,&l_2640[0][4][0],&g_1730[5],&l_2640[0][4][0],&l_2635},{&g_6,&l_2640[0][4][0],(void*)0,&l_2635,&l_2641[1]}}};
                    int i, j, k;
                    for (g_320 = 0; g_320 < 8; g_320 += 1)
                    {
                        g_1193[g_320] = 4UL;
                    }
                    (*g_2015) = ((l_2701 = (((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((((l_2694 ^ (((~p_43) & (safe_div_func_uint16_t_u_u((***g_1819), (((**g_235) < ((*g_236) < (((l_2688[0][2][2] > l_2698) | ((safe_add_func_int16_t_s_s(p_44, (**g_235))) & l_2640[0][4][0])) && 0x6EF1L))) || (*g_236))))) , 0xDD82D9A2191D5CA5LL)) ^ 0UL) != 0x105E9B8EL) > p_43), l_2694)), (*g_1988))) <= 0x1A51269AL) , 0x0CC63B1D0EB130E4LL)) <= 0xC3BAB70BA5D45745LL);
                    (*g_2015) = (((((safe_mul_func_int8_t_s_s(0x1FL, p_43)) | p_42) ^ ((safe_add_func_uint32_t_u_u(p_43, 0x0D54192DL)) , p_44)) <= (18446744073709551608UL < (l_2639[0][5] != l_2706))) || (*p_41));
                    if (((*g_2015) = ((((l_2718 = (safe_add_func_uint8_t_u_u(((*g_1988) = ((l_2640[0][0][0] > ((((l_2689 = (-5L)) , 0xC0L) == p_42) | (-1L))) < ((g_879 = l_2694) >= 0xD3C2E2FE7EC77A8BLL))), (((safe_mul_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(0x3C599E92L, (safe_div_func_int64_t_s_s(((*l_2717) = (((g_2716 = l_2715) == l_2715) || (*p_41))), (**g_674))))) | 0x9FB8L) && l_2694), p_43)) , p_43) || l_2701)))) | (-1L)) > (*g_236)) <= p_43)))
                    {
                        int32_t *l_2722 = &l_2641[1];
                        int32_t **l_2723[10] = {&l_2639[6][6],&l_2639[0][5],&l_2639[6][8],&l_2639[0][5],&l_2639[6][6],&l_2639[6][6],&l_2639[0][5],&l_2639[6][8],&l_2639[0][5],&l_2639[6][6]};
                        int i;
                        p_41 = ((safe_mod_func_uint8_t_u_u((l_2721[4] == (void*)0), p_43)) , l_2722);
                        return p_42;
                    }
                    else
                    {
                        int8_t l_2737 = 0xF5L;
                        int32_t l_2741 = 0xC3BC4718L;
                        int32_t l_2743 = 0x3686F4DBL;
                        int32_t l_2753 = 0xE169FE13L;
                        (*g_2015) = (l_2694 , ((safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(0x8D4DL, ((***g_1819) &= ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(p_42, 3)), (safe_div_func_int8_t_s_s((+(((((l_2689 &= 1UL) > (p_44 , ((g_343 | ((void*)0 == l_2735)) | ((((p_43 >= l_2737) , l_2738[0][1][0]) != &p_42) || 18446744073709551607UL)))) , l_2739[1]) , p_43) >= l_2688[0][3][0])), p_44)))) > l_2701)))), l_2688[0][2][2])) , 0x0F7D419EL));
                        l_2754--;
                    }
                }
            }
            (*g_2015) = (safe_add_func_int32_t_s_s(((safe_add_func_int64_t_s_s(((l_2765 = l_2761) == (l_2781 = (g_1294[2] , ((safe_div_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(((safe_add_func_int8_t_s_s((((l_2773[1] != l_2773[1]) < ((safe_sub_func_int8_t_s_s(((**l_2661) = l_2776), (l_2777[0][3] == (p_43 , &l_2721[4])))) && (g_526 ^= (((safe_mod_func_uint32_t_u_u((!0L), (*p_41))) ^ 0UL) > 0x623C3157397E3861LL)))) >= 1UL), p_42)) < 0xCE9C59CAAB4391ECLL))), p_42)) , (void*)0)))), (-6L))) > l_2750), 0x8336A389L));
            l_2782[0]--;
        }
        (*g_2015) = (l_2785 == (p_42 , g_2786[0]));
    }
    else
    {
lbl_2803:
        (*g_2015) |= (8L ^ ((safe_sub_func_uint64_t_u_u(p_43, (g_879 = (!((*g_313) = (*g_313)))))) || l_2791));
    }
    l_2802 = ((p_44 , (safe_add_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((l_2721[3] != (((~(p_44 >= (p_43 == (((*p_41) ^ p_43) == (l_2799[0][3][1] == ((*l_2800) = &g_674)))))) != ((*g_1988) > (**g_1381))) , l_2721[3])), 0x3CL)) || g_1385[1]), (**g_1381)))) , (void*)0);
    if (g_631)
        goto lbl_2803;
    p_42 |= (((***g_1819) = (safe_div_func_int8_t_s_s((*g_2787), p_44))) < 65530UL);
    return p_43;
}







static const uint16_t * func_45(uint16_t * p_46, uint16_t * p_47, uint64_t p_48)
{
    uint32_t l_1359 = 0xFD77222FL;
    uint16_t *l_1364 = &g_782;
    int32_t l_1375 = 0xF3C977C0L;
    int8_t **l_1376 = (void*)0;
    int8_t ***l_1377[1];
    int8_t **l_1380 = &g_1379[0][9];
    int16_t l_1382 = 0x2316L;
    int32_t l_1383 = 2L;
    uint16_t *l_1384 = &g_1385[1];
    uint8_t l_1386[7];
    int32_t l_1387 = 0x940BC819L;
    uint32_t *l_1425 = &g_635;
    uint16_t l_1446 = 65532UL;
    int32_t *l_1476 = &l_1387;
    uint16_t l_1510 = 65528UL;
    uint32_t l_1513[4] = {0x3E3B9E75L,0x3E3B9E75L,0x3E3B9E75L,0x3E3B9E75L};
    int32_t *l_1535 = (void*)0;
    int32_t l_1559 = 0xF6C73382L;
    int32_t l_1561 = 0x1B8DC754L;
    int32_t l_1567 = (-3L);
    int32_t l_1569 = 0xFB5E742EL;
    int32_t l_1573 = (-1L);
    uint32_t l_1651[4][4][10] = {{{0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL},{0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL},{0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL},{0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL}},{{0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL},{0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL},{0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL},{0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL}},{{0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL},{0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL},{0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL},{0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL}},{{0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL},{0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL},{0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL},{0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL,0xF4A85E79L,18446744073709551607UL}}};
    int32_t **l_1669 = (void*)0;
    int32_t * const **l_1720 = &g_815[0];
    uint32_t l_1769 = 0x39608DD7L;
    uint16_t l_1809 = 65528UL;
    int32_t l_1810 = 0xB12A0DC3L;
    uint64_t **l_1843 = &g_675;
    int32_t l_1891 = (-1L);
    int32_t l_1900 = 0L;
    int32_t l_1902 = 1L;
    int16_t * const *l_1958 = &g_313;
    int16_t * const **l_1957[2][8][10] = {{{(void*)0,&l_1958,&l_1958,&l_1958,(void*)0,&l_1958,(void*)0,&l_1958,&l_1958,&l_1958},{(void*)0,&l_1958,&l_1958,&l_1958,(void*)0,&l_1958,(void*)0,&l_1958,&l_1958,&l_1958},{(void*)0,&l_1958,&l_1958,&l_1958,(void*)0,&l_1958,(void*)0,&l_1958,&l_1958,&l_1958},{(void*)0,&l_1958,&l_1958,&l_1958,(void*)0,&l_1958,(void*)0,&l_1958,&l_1958,&l_1958},{(void*)0,&l_1958,&l_1958,&l_1958,(void*)0,&l_1958,(void*)0,&l_1958,&l_1958,&l_1958},{(void*)0,&l_1958,&l_1958,&l_1958,(void*)0,&l_1958,(void*)0,&l_1958,&l_1958,&l_1958},{(void*)0,&l_1958,&l_1958,&l_1958,(void*)0,&l_1958,(void*)0,&l_1958,&l_1958,&l_1958},{(void*)0,&l_1958,&l_1958,&l_1958,(void*)0,&l_1958,(void*)0,&l_1958,&l_1958,&l_1958}},{{(void*)0,&l_1958,&l_1958,&l_1958,(void*)0,&l_1958,(void*)0,&l_1958,&l_1958,&l_1958},{(void*)0,&l_1958,(void*)0,&l_1958,(void*)0,&l_1958,(void*)0,&l_1958,(void*)0,(void*)0},{&l_1958,(void*)0,(void*)0,&l_1958,(void*)0,&l_1958,(void*)0,&l_1958,(void*)0,(void*)0},{&l_1958,(void*)0,(void*)0,&l_1958,(void*)0,&l_1958,(void*)0,&l_1958,(void*)0,(void*)0},{&l_1958,(void*)0,(void*)0,&l_1958,(void*)0,&l_1958,(void*)0,&l_1958,(void*)0,(void*)0},{&l_1958,(void*)0,(void*)0,&l_1958,(void*)0,&l_1958,(void*)0,&l_1958,(void*)0,(void*)0},{&l_1958,(void*)0,(void*)0,&l_1958,(void*)0,&l_1958,(void*)0,&l_1958,(void*)0,(void*)0},{&l_1958,(void*)0,(void*)0,&l_1958,(void*)0,&l_1958,(void*)0,&l_1958,(void*)0,(void*)0}}};
    int16_t * const ***l_1956 = &l_1957[0][6][2];
    int16_t * const *** const *l_1955 = &l_1956;
    int16_t ** const l_2053 = &g_313;
    const int8_t *l_2055 = (void*)0;
    const int8_t **l_2054 = &l_2055;
    uint8_t **l_2060 = &g_1988;
    uint8_t ***l_2061 = (void*)0;
    uint8_t ***l_2062[6][10][4] = {{{&l_2060,&l_2060,&l_2060,(void*)0},{&l_2060,&g_1974,&g_1974,&l_2060},{&g_1974,&l_2060,&l_2060,&l_2060},{&g_1974,&l_2060,&l_2060,&l_2060},{(void*)0,&g_1974,(void*)0,&l_2060},{&l_2060,&l_2060,(void*)0,&g_1974},{(void*)0,&l_2060,&g_1974,&g_1974},{&g_1974,(void*)0,(void*)0,&l_2060},{&l_2060,&l_2060,&l_2060,&g_1974},{&g_1974,(void*)0,&g_1974,(void*)0}},{{&l_2060,&l_2060,&l_2060,&l_2060},{&l_2060,(void*)0,&l_2060,(void*)0},{&l_2060,&g_1974,(void*)0,&l_2060},{&l_2060,&g_1974,&l_2060,&l_2060},{&g_1974,(void*)0,&g_1974,&g_1974},{&g_1974,&l_2060,&g_1974,&g_1974},{&g_1974,&g_1974,&l_2060,(void*)0},{&l_2060,&l_2060,&g_1974,&l_2060},{(void*)0,&l_2060,&g_1974,&g_1974},{&l_2060,&l_2060,&g_1974,&l_2060}},{{&l_2060,&l_2060,&g_1974,(void*)0},{(void*)0,&g_1974,&g_1974,&g_1974},{&g_1974,&l_2060,&l_2060,&g_1974},{&l_2060,(void*)0,&g_1974,&l_2060},{&g_1974,&g_1974,(void*)0,&l_2060},{&l_2060,&g_1974,&g_1974,(void*)0},{&g_1974,(void*)0,&g_1974,&l_2060},{&g_1974,&l_2060,&g_1974,(void*)0},{(void*)0,(void*)0,&l_2060,&g_1974},{&g_1974,&l_2060,&g_1974,&l_2060}},{{&g_1974,(void*)0,&g_1974,&g_1974},{(void*)0,&g_1974,(void*)0,(void*)0},{(void*)0,(void*)0,&g_1974,&g_1974},{&l_2060,&g_1974,&l_2060,&l_2060},{&g_1974,&l_2060,&g_1974,&g_1974},{&g_1974,(void*)0,&g_1974,&g_1974},{&l_2060,&l_2060,&g_1974,(void*)0},{&l_2060,&l_2060,&l_2060,&l_2060},{(void*)0,&g_1974,&g_1974,&g_1974},{&l_2060,(void*)0,&l_2060,&g_1974}},{{&g_1974,&g_1974,&l_2060,&g_1974},{&l_2060,&g_1974,&g_1974,&l_2060},{(void*)0,&g_1974,&l_2060,&l_2060},{&l_2060,&l_2060,&g_1974,&l_2060},{&l_2060,&g_1974,&g_1974,(void*)0},{&g_1974,&g_1974,&g_1974,&g_1974},{&g_1974,&l_2060,&l_2060,&l_2060},{&l_2060,&g_1974,&g_1974,(void*)0},{(void*)0,(void*)0,(void*)0,&l_2060},{(void*)0,(void*)0,&l_2060,&g_1974}},{{&g_1974,&l_2060,&l_2060,&l_2060},{&g_1974,(void*)0,&l_2060,(void*)0},{&g_1974,(void*)0,&g_1974,&l_2060},{(void*)0,&g_1974,&g_1974,&g_1974},{&l_2060,&l_2060,&l_2060,&l_2060},{(void*)0,&l_2060,(void*)0,&l_2060},{&l_2060,&g_1974,&l_2060,(void*)0},{&g_1974,&g_1974,&l_2060,(void*)0},{&g_1974,&g_1974,&g_1974,&g_1974},{&g_1974,&g_1974,&l_2060,&l_2060}}};
    int32_t ****l_2153 = &g_384[0][3][0];
    int32_t l_2162[2];
    int32_t ****l_2212 = (void*)0;
    int32_t ***l_2213 = &l_1669;
    const int8_t l_2235[6] = {0xF6L,0xF6L,0xF6L,0xF6L,0xF6L,0xF6L};
    uint32_t l_2288 = 1UL;
    const uint16_t ****l_2314 = (void*)0;
    int16_t l_2344 = 0x5270L;
    int32_t **l_2360[1];
    uint64_t ** const *l_2375 = &g_674;
    uint64_t ** const **l_2374 = &l_2375;
    int8_t l_2379 = (-4L);
    uint32_t l_2380 = 0UL;
    int32_t l_2385[10] = {0x1F1FEEA0L,0x1F1FEEA0L,(-1L),0x1F1FEEA0L,0x1F1FEEA0L,(-1L),0x1F1FEEA0L,0x1F1FEEA0L,(-1L),0x1F1FEEA0L};
    int32_t l_2507 = 0x85B56D45L;
    int32_t l_2526 = 0L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1377[i] = &l_1376;
    for (i = 0; i < 7; i++)
        l_1386[i] = 249UL;
    for (i = 0; i < 2; i++)
        l_2162[i] = 0x785583C6L;
    for (i = 0; i < 1; i++)
        l_2360[i] = &l_1476;
lbl_2180:
    if (((l_1387 = (safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((p_48 != ((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(l_1359, ((*l_1384) |= (((l_1383 |= (l_1375 = ((safe_lshift_func_uint16_t_u_s((((((*p_47) == (safe_add_func_uint16_t_u_u(((g_169[6][0] |= ((0xB40BL || ((*l_1364) &= (*g_236))) <= l_1359)) , ((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((((!((safe_mul_func_int8_t_s_s(((*g_739) ^= l_1375), ((((((g_1378 = l_1376) != (g_1381 = l_1380)) < (*p_46)) | l_1359) >= 250UL) && 0x9DC7L))) >= l_1359)) , (void*)0) == &g_583) , l_1359), l_1375)), 1L)))), p_48)) >= l_1359)), 0xD7F3L))) && l_1382) > l_1382) , (**g_235)), 8)) , 0x655DD91DL))) & 7UL) && l_1382)))) & p_48), (*g_236))), 5)) , g_169[0][0])), l_1386[2])) <= g_1193[6]), 0x7DL)), 0))) && (**g_235)))
    {
        int8_t *l_1405[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        const int32_t l_1408 = (-1L);
        uint64_t **l_1419 = &g_675;
        uint32_t *l_1442 = (void*)0;
        int32_t **l_1475[7][6] = {{(void*)0,(void*)0,&g_324,&g_324,&g_324,&g_324},{&g_324,&g_324,&g_324,&g_324,&g_324,&g_324},{(void*)0,&g_324,&g_324,&g_324,(void*)0,&g_324},{(void*)0,&g_324,&g_324,(void*)0,&g_324,(void*)0},{(void*)0,&g_324,(void*)0,&g_324,&g_324,(void*)0},{(void*)0,(void*)0,&g_324,&g_324,&g_324,&g_324},{&g_324,&g_324,&g_324,&g_324,&g_324,&g_324}};
        const int8_t *l_1481 = &g_631;
        const int8_t **l_1480 = &l_1481;
        uint8_t l_1545 = 0x6BL;
        int32_t * const l_1551 = &l_1383;
        int32_t l_1554 = (-7L);
        int32_t ****l_1592 = (void*)0;
        int32_t *****l_1591 = &l_1592;
        int32_t *l_1642 = (void*)0;
        int32_t **l_1641 = &l_1642;
        int i, j;
        for (g_526 = 0; (g_526 <= (-26)); g_526 = safe_sub_func_uint8_t_u_u(g_526, 6))
        {
            int8_t ****l_1392 = &l_1377[0];
            uint32_t *l_1406 = &g_171;
            int32_t l_1407 = (-1L);
            int8_t l_1409[9][4] = {{(-1L),0x51L,(-1L),0x51L},{(-1L),0x51L,(-1L),0x51L},{(-1L),0x51L,(-1L),0x51L},{(-1L),0x51L,(-1L),0x51L},{(-1L),0x51L,(-1L),0x51L},{(-1L),0x51L,(-1L),0x51L},{(-1L),0x51L,(-1L),0x51L},{(-1L),0x51L,(-1L),0x51L},{(-1L),0x51L,(-1L),0x51L}};
            int64_t l_1414 = 0x3CE263B127AC23C0LL;
            const uint16_t *l_1452 = (void*)0;
            int32_t ***l_1461 = &g_385[1];
            int i, j;
            if ((safe_rshift_func_int8_t_s_u((((*l_1392) = &g_1378) == ((((((safe_sub_func_int32_t_s_s(((0x0E5CEEAEL || ((((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(g_631, 0)), (*p_46))) , 0x9DC55E3BL) , (safe_div_func_uint8_t_u_u((l_1407 = ((((((safe_add_func_int8_t_s_s((((((*l_1406) = ((safe_mod_func_uint32_t_u_u((((*g_675) , l_1405[0]) == ((*g_1381) = (*g_1381))), ((p_48 || 0x54L) && l_1387))) , 0xB0A8958DL)) && 0x126DAF30L) >= p_48) && (-4L)), p_48)) == 0x8246L) ^ (*g_313)) & l_1387) < (*g_739)) == (*p_47))), l_1408))) , 0x14378F12L)) != 0UL), 4L)) , &g_236) == (void*)0) , l_1409[7][2]) , 0x7172A9504A69ADE8LL) , (void*)0)), 2)))
            {
                if ((*g_324))
                    break;
                g_1143 = &g_313;
            }
            else
            {
                uint64_t l_1424 = 0x358EF0353AFF4D18LL;
                int16_t *l_1426[1];
                int32_t l_1427 = 3L;
                const uint8_t l_1429 = 0x00L;
                uint32_t **l_1441 = &l_1425;
                int32_t *l_1447 = &l_1407;
                int8_t ****l_1459 = &l_1377[0];
                int i;
                for (i = 0; i < 1; i++)
                    l_1426[i] = &g_343;
                if (((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((l_1414 ^ p_48), p_48)), ((safe_mod_func_int32_t_s_s(((l_1427 = ((**g_1143) = ((safe_mul_func_int8_t_s_s((l_1407 &= (&g_675 != l_1419)), l_1387)) | (safe_lshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(((l_1375 = g_1343) < (l_1424 | ((l_1425 = &l_1359) != (void*)0))), (**g_674))), g_314[2][1]))))) > l_1424), 0xB494F9C2L)) != g_1428))) , p_48))
                {
                    if (l_1429)
                        break;
                }
                else
                {
                    int32_t **l_1430 = &g_324;
                    (*l_1430) = &l_1375;
                    return p_46;
                }
                (*l_1447) = ((((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(l_1409[7][2], p_48)), l_1414)) || ((safe_mul_func_int16_t_s_s((l_1446 = ((safe_add_func_uint32_t_u_u(((*l_1406) &= (((((**l_1419) = (((*l_1441) = &l_1359) == l_1442)) < (safe_sub_func_int32_t_s_s((-10L), p_48))) != (l_1427 = (+(&g_675 == (g_851 , (void*)0))))) <= p_48)), g_320)) != l_1414)), l_1408)) && p_48)), (*g_399))) && 0x4E09L) >= 18446744073709551615UL) | 0x06E2F71DF053AC36LL);
                for (g_215 = 0; (g_215 != 18); g_215 = safe_add_func_uint64_t_u_u(g_215, 9))
                {
                    uint32_t l_1473 = 0xCC721437L;
                    int32_t l_1474 = 1L;
                    for (g_1428 = 8; (g_1428 == (-8)); g_1428--)
                    {
                        return l_1452;
                    }
                    for (l_1407 = (-1); (l_1407 < (-20)); l_1407--)
                    {
                        int16_t ****l_1456 = &g_1142;
                        int16_t *****l_1455 = &l_1456;
                        int32_t **l_1457 = &l_1447;
                        g_398[3] = &l_1405[0];
                        (*l_1455) = &g_1142;
                        (*l_1457) = &l_1427;
                        if (p_48)
                            break;
                    }
                    l_1383 = (-5L);
                    (*l_1447) = ((((**g_1143) = ((((+((l_1474 |= ((((void*)0 != l_1459) > (((g_1460 != l_1461) && ((safe_lshift_func_int16_t_s_u(((+(((safe_rshift_func_uint16_t_u_u((0xC621L ^ ((safe_sub_func_uint32_t_u_u((4294967295UL >= 4294967295UL), ((((**g_235) , (safe_add_func_int16_t_s_s(((safe_div_func_int16_t_s_s((g_352 ^ 254UL), (*g_236))) , p_48), l_1375))) >= (*g_675)) == l_1473))) , 0x1D76L)), (*g_236))) > 0x290CL) || (*p_46))) <= l_1473), 14)) != 0x0D8EC63DL)) && p_48)) & 0xCB72L)) < p_48)) & 2L) || (*l_1447)) && 18446744073709551615UL)) , 1UL) & p_48);
                }
            }
        }
        l_1476 = &l_1383;
        if (((*l_1476) = p_48))
        {
            const int8_t *l_1478 = (void*)0;
            const int8_t **l_1477 = &l_1478;
            const int8_t ***l_1479[6];
            int i;
            for (i = 0; i < 6; i++)
                l_1479[i] = &l_1477;
            l_1480 = l_1477;
        }
        else
        {
            uint32_t l_1511 = 6UL;
            uint64_t l_1514 = 4UL;
            int32_t l_1525 = 0xDEE2289FL;
            int32_t l_1550 = 1L;
            int32_t l_1574[6][6] = {{0L,0x969719D9L,0L,0x969719D9L,0L,0x969719D9L},{0x18CA1B4FL,0x969719D9L,0x18CA1B4FL,0x969719D9L,0x18CA1B4FL,0x969719D9L},{0L,0x969719D9L,0L,0x969719D9L,0L,0x969719D9L},{0x18CA1B4FL,0x969719D9L,0x18CA1B4FL,0x969719D9L,0x18CA1B4FL,0x969719D9L},{0L,0x969719D9L,0L,0x969719D9L,0L,0x969719D9L},{0x18CA1B4FL,0x969719D9L,0x18CA1B4FL,0x969719D9L,0x18CA1B4FL,0x969719D9L}};
            const int32_t *l_1625[8][2];
            int16_t l_1635 = 0x1F4CL;
            int i, j;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1625[i][j] = &g_1294[1];
            }
            if (p_48)
            {
                const uint16_t l_1507 = 3UL;
                int16_t l_1512 = 0x98F1L;
                int32_t *l_1543 = &g_87[4];
                int32_t l_1553 = (-1L);
                int32_t l_1556 = 0x71C3606DL;
                int32_t l_1558 = 0x7CC9B94DL;
                int32_t l_1562 = (-1L);
                int32_t l_1563 = 0x098DF627L;
                int32_t l_1566 = 0x2AAE7B36L;
                int32_t l_1568 = 1L;
                int32_t l_1571 = (-10L);
                int32_t l_1572 = 1L;
                const uint16_t *l_1595 = &l_1446;
                const int32_t **l_1626 = &l_1625[4][0];
lbl_1620:
                if (((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_uint16_t_u_u(((*p_46)++), 15)) ^ (safe_sub_func_uint64_t_u_u((((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((((safe_unary_minus_func_uint8_t_u(((p_48 >= (safe_add_func_int8_t_s_s(0xC0L, g_1500))) != ((**g_1143) = (safe_sub_func_int8_t_s_s((*g_739), (safe_div_func_int32_t_s_s(8L, (safe_lshift_func_int8_t_s_u((((((void*)0 == &g_565) > l_1507) && ((safe_rshift_func_int8_t_s_s(((l_1442 == &g_952) == l_1510), p_48)) , l_1511)) || g_320), l_1512)))))))))) || l_1513[1]) == 0x7AF527D8C7F72EB8LL), l_1511)), 0xB646882CD78F9A65LL)), (*l_1476))), g_526)) <= (*l_1476)) > 0L) && p_48) != 6L), l_1512))))) , p_48))
                {
                    for (g_66 = 2; (g_66 <= 7); g_66 += 1)
                    {
                        if (p_48)
                            break;
                        if (p_48)
                            continue;
                        if (l_1514)
                            break;
                    }
                    return p_46;
                }
                else
                {
                    int32_t *l_1528 = (void*)0;
                    int32_t *l_1534 = &g_3;
                    for (g_1343 = 0; (g_1343 <= 3); g_1343 += 1)
                    {
                        int32_t l_1533 = (-1L);
                        uint32_t *l_1536[5][4] = {{&g_952,&g_952,&g_952,&g_952},{&g_952,&g_952,&g_952,&g_952},{&g_952,&g_952,&g_952,&g_952},{&g_952,&g_952,&g_952,&g_952},{&g_952,&g_952,&g_952,&g_952}};
                        uint16_t * const *l_1542 = (void*)0;
                        uint16_t * const **l_1541[3][2][8] = {{{&l_1542,(void*)0,&l_1542,&l_1542,&l_1542,&l_1542,(void*)0,&l_1542},{&l_1542,&l_1542,(void*)0,&l_1542,&l_1542,&l_1542,&l_1542,(void*)0}},{{&l_1542,&l_1542,&l_1542,(void*)0,&l_1542,&l_1542,&l_1542,&l_1542},{&l_1542,&l_1542,&l_1542,&l_1542,(void*)0,&l_1542,&l_1542,&l_1542}},{{&l_1542,(void*)0,(void*)0,(void*)0,(void*)0,&l_1542,(void*)0,(void*)0},{&l_1542,(void*)0,&l_1542,&l_1542,&l_1542,&l_1542,(void*)0,&l_1542}}};
                        int i, j, k;
                        l_1533 ^= (safe_add_func_int64_t_s_s((((**l_1419)++) >= (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(0x1BL, (l_1525 &= (g_87[(g_1343 + 5)] , ((*g_739) = l_1513[g_1343]))))), (safe_lshift_func_int16_t_s_s(((p_48 > ((void*)0 != l_1528)) >= (safe_rshift_func_uint8_t_u_s(g_87[(g_1343 + 5)], 4))), 0)))), 0xB42A909FL))), (safe_mod_func_int8_t_s_s(((((((g_87[(g_1343 + 5)] == g_1343) | g_87[(g_1343 + 5)]) , g_314[4][1]) >= (*l_1476)) != g_1193[6]) <= (*g_313)), 1L))));
                        l_1535 = l_1534;
                        l_1525 = ((((g_171--) | (((p_48 , (((*l_1543) = (safe_sub_func_int8_t_s_s((((g_87[(g_1343 + 5)] < ((void*)0 != l_1541[2][1][5])) & ((p_48 , ((void*)0 != l_1543)) , (safe_unary_minus_func_int16_t_s(p_48)))) > ((*l_1543) < p_48)), l_1511))) , 8UL)) , 5UL) != l_1525)) > p_48) < 4294967292UL);
                    }
                }
                for (g_320 = 3; (g_320 <= 9); g_320 += 1)
                {
                    int32_t l_1555[8][8] = {{0xE75153D6L,0x231CC171L,0xE75153D6L,0xFA384EBEL,(-4L),(-1L),1L,(-4L)},{0x96A97ED8L,1L,0xD29B7956L,0x96A97ED8L,0xFA384EBEL,0xFB36A1BAL,(-4L),0xE75153D6L},{0x96A97ED8L,0L,(-3L),(-1L),(-4L),0L,7L,7L},{0xE75153D6L,0L,0xB9577EE2L,0xB9577EE2L,0L,0xE75153D6L,0xD29B7956L,(-1L)},{0x343F1A5BL,1L,0xFA384EBEL,1L,0xB9577EE2L,0xD29B7956L,0x343F1A5BL,(-10L)},{0L,(-4L),(-3L),1L,7L,(-3L),0x96A97ED8L,(-1L)},{(-10L),7L,1L,0xB9577EE2L,0x343F1A5BL,0xB9577EE2L,1L,7L},{0L,0xD29B7956L,0L,0xFA384EBEL,0xEA29C8F9L,9L,0xFA384EBEL,0xD6A4B160L}};
                    int32_t l_1557[9][5][5] = {{{0xC46D381BL,0x6DB5AF19L,(-6L),0xAA0F9EEFL,0xAFC78B08L},{0L,1L,0x4CA5CE38L,1L,0L},{(-1L),0xC46D381BL,(-7L),4L,(-8L)},{0xAD2715A0L,2L,(-1L),(-1L),0x4CA5CE38L},{(-7L),2L,0x1E2E52AEL,0xC46D381BL,(-8L)}},{{0x843985E5L,(-1L),0xAD2715A0L,0L,0L},{(-8L),0xC1E66369L,(-8L),(-1L),0xAFC78B08L},{6L,(-3L),1L,0xAD2715A0L,0x843985E5L},{0xC1E66369L,0xAFC78B08L,(-7L),(-7L),4L},{(-10L),0x13740209L,1L,0x843985E5L,2L}},{{0xD7E5358BL,0L,(-8L),(-8L),0L},{(-3L),0xBC1F029DL,0xAD2715A0L,6L,0xDBE22B16L},{2L,0x1B35C83FL,0x1E2E52AEL,0xC1E66369L,1L},{1L,1L,(-1L),(-10L),9L},{2L,(-6L),(-7L),0xD7E5358BL,0xC46D381BL}},{{(-3L),0x4CA5CE38L,0x4CA5CE38L,(-3L),0xAD2715A0L},{0xD7E5358BL,(-7L),(-6L),2L,(-1L)},{(-10L),(-1L),1L,1L,8L},{0xC1E66369L,0x1E2E52AEL,0x1B35C83FL,2L,1L},{6L,0xAD2715A0L,0xBC1F029DL,(-3L),0xBC1F029DL}},{{(-8L),(-8L),0L,0xD7E5358BL,0x1E2E52AEL},{0x843985E5L,1L,0x13740209L,(-10L),(-3L)},{(-7L),(-7L),0xAFC78B08L,0xC1E66369L,4L},{0xAD2715A0L,1L,(-3L),6L,1L},{(-1L),(-8L),0xC1E66369L,(-8L),(-1L)}},{{0L,0xAD2715A0L,(-1L),0x843985E5L,1L},{0xC46D381BL,0x1E2E52AEL,2L,(-7L),0xC1E66369L},{(-1L),(-1L),2L,0xAD2715A0L,1L},{4L,(-7L),0xC46D381BL,(-1L),(-1L)},{1L,0x4CA5CE38L,1L,0L,1L}},{{0xAA0F9EEFL,(-6L),0x6DB5AF19L,0xC46D381BL,4L},{0x4CA5CE38L,1L,0x16DF08D3L,(-1L),(-3L)},{0xB16563A4L,0x1B35C83FL,0x6DB5AF19L,4L,0x1E2E52AEL},{0xDD1BCD89L,0xBC1F029DL,1L,1L,0xBC1F029DL},{4L,0L,0xC46D381BL,0xAA0F9EEFL,1L}},{{(-1L),0x13740209L,2L,0x4CA5CE38L,8L},{0x6DB5AF19L,0xAFC78B08L,2L,0xB16563A4L,4L},{0x843985E5L,1L,0L,1L,0x4CA5CE38L},{0x6ACE40BEL,(-9L),(-9L),0x6ACE40BEL,0xC1E66369L},{1L,0L,1L,0x843985E5L,(-3L)}},{{(-1L),4L,0L,(-6L),0xC46D381BL},{1L,0xDD1BCD89L,(-1L),0x843985E5L,8L},{0x1B35C83FL,0xC1E66369L,(-7L),0x6ACE40BEL,(-7L)},{0xDBE22B16L,0xDBE22B16L,0x16DF08D3L,1L,0xDD1BCD89L},{(-7L),(-6L),2L,(-1L),0x6ACE40BEL}}};
                    uint16_t l_1576 = 65529UL;
                    int i, j, k;
                    (*l_1543) = l_1545;
                    l_1550 &= ((*l_1543) ^= (4294967290UL <= ((safe_div_func_uint32_t_u_u((((((l_1525 <= 246UL) > ((((0x8ADAA8A4L & g_171) , l_1543) == ((safe_lshift_func_uint16_t_u_s((*g_236), ((((((l_1525 , &g_236) == &p_46) & l_1525) , p_48) > 0x0F10L) < p_48))) , (void*)0)) <= g_314[5][2])) && (*p_47)) || (**g_1143)) && 1UL), g_526)) , p_48)));
                    for (g_1343 = 0; (g_1343 <= 2); g_1343 += 1)
                    {
                        int32_t **l_1552 = &l_1543;
                        int32_t l_1560 = 4L;
                        int32_t l_1564 = (-2L);
                        int32_t l_1565 = 0x0B841F6CL;
                        int32_t l_1570 = (-8L);
                        int32_t l_1575 = 1L;
                        l_1535 = &l_1525;
                        (*l_1552) = l_1551;
                        l_1576++;
                        return p_46;
                    }
                }
                if ((!((safe_mod_func_uint32_t_u_u(1UL, (safe_lshift_func_int8_t_s_s(p_48, ((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(p_48, ((((safe_rshift_func_int8_t_s_u((((g_631 <= ((!(((void*)0 == l_1591) < (-9L))) , 0xF60DCC74351ADE19LL)) , p_46) == (*g_1143)), g_952)) ^ g_1176) == (-3L)) > p_48))), l_1574[2][2])) | l_1574[2][2]))))) != 0x0385D1DB8BA433D9LL)))
                {
                    int8_t l_1612 = 0x55L;
                    uint8_t *l_1613 = (void*)0;
                    uint8_t *l_1614[4];
                    int32_t l_1615 = 1L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1614[i] = &l_1545;
                    for (l_1383 = 0; (l_1383 <= (-2)); l_1383--)
                    {
                        return (*g_235);
                    }
                    if ((safe_mul_func_int16_t_s_s(p_48, ((++(*g_675)) , (safe_mul_func_int8_t_s_s(((g_320 = ((g_114 , (((((safe_rshift_func_uint16_t_u_s((&g_813 != &l_1592), 12)) != ((((safe_add_func_uint32_t_u_u(((((((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int64_t_s(((l_1615 = (safe_mod_func_int8_t_s_s((p_48 == (l_1525 && (p_48 | (+4294967293UL)))), ((((((l_1612 >= 8L) <= p_48) != (*g_313)) != p_48) != 0xF2C57883140C5FC9LL) , g_352)))) < p_48))), p_48)) <= 4294967295UL) || 0xFDF7C74F14C6A357LL) < (-9L)) , (void*)0) == (void*)0), 0xC9AFF627L)) ^ 0x67B905EE3381628ALL) , &l_1512) == &l_1382)) , 1L) , 0x38E471E0L) == p_48)) <= g_1294[2])) < 253UL), 0x03L))))))
                    {
                        (*l_1551) = (-1L);
                        return (*g_235);
                    }
                    else
                    {
                        int32_t *l_1616 = &l_1574[3][2];
                        uint32_t l_1617 = 0xDDBCD81EL;
                        l_1616 = (void*)0;
                        l_1617--;
                    }
                }
                else
                {
                    if (g_352)
                        goto lbl_1620;
                    (*l_1476) = p_48;
                }
                l_1635 &= ((safe_div_func_uint8_t_u_u(((1L == ((safe_mod_func_uint64_t_u_u(((((**g_1381) = 0x76L) , ((((1L & 1L) , &g_1294[2]) != ((*l_1626) = l_1625[4][0])) >= ((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(p_48, ((*g_739) = ((((safe_mul_func_uint16_t_u_u(l_1574[2][2], p_48)) & g_169[6][0]) < 65530UL) <= l_1550)))), p_48)) <= 0x67A02290L), (*l_1543))) || 0xABFFL))) < p_48), (*l_1543))) , 0L)) >= (*l_1551)), 0xD7L)) <= 0x2BFB9389L);
            }
            else
            {
                uint8_t l_1636 = 1UL;
                l_1636++;
            }
            for (l_1635 = 0; (l_1635 == (-19)); l_1635--)
            {
                (*l_1476) |= p_48;
                for (p_48 = 0; (p_48 <= 5); p_48 += 1)
                {
                    int32_t ***l_1643 = (void*)0;
                    int32_t ***l_1644 = (void*)0;
                    int32_t *l_1645 = (void*)0;
                    l_1641 = l_1641;
                    l_1645 = &l_1574[2][2];
                }
                for (l_1559 = 0; (l_1559 == 21); ++l_1559)
                {
                    uint32_t l_1648[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1648[i] = 1UL;
                    --l_1648[0];
                }
            }
        }
        l_1651[1][3][6]++;
    }
    else
    {
        uint32_t l_1655[4][6];
        int32_t ****l_1681[2];
        int32_t *****l_1680[2];
        uint32_t *l_1708 = &l_1655[3][0];
        uint32_t l_1725 = 0x0A8CD1DDL;
        int8_t l_1770 = 0xA6L;
        int32_t l_1797 = 0x23045CF6L;
        uint64_t ***l_1804 = &g_674;
        uint64_t l_1870 = 0x9950D3BAD38050D4LL;
        int32_t l_1871 = 0x4F666A07L;
        uint16_t l_1885 = 6UL;
        int32_t l_1904 = 0xA332C6E9L;
        uint16_t l_1905[4][5] = {{0UL,0UL,0x06A7L,0xE835L,0x0D5FL},{65533UL,0x0D5FL,65535UL,65535UL,0x0D5FL},{0x0D5FL,0x92FEL,65533UL,0x0D5FL,65535UL},{0xE835L,0x0D5FL,0x06A7L,0x0D5FL,0xE835L}};
        int32_t *l_1918 = &l_1900;
        uint8_t *l_1973 = &g_1731;
        uint8_t **l_1972 = &l_1973;
        uint16_t ***l_1998[9][5][5] = {{{&g_235,&g_235,&g_235,&g_235,&g_235},{&g_235,&g_235,&g_235,&g_235,&g_235},{&g_235,&g_235,(void*)0,&g_235,&g_235},{&g_235,&g_235,&g_235,&g_235,&g_235},{(void*)0,&g_235,&g_235,&g_235,&g_235}},{{(void*)0,&g_235,(void*)0,&g_235,&g_235},{&g_235,&g_235,&g_235,&g_235,&g_235},{&g_235,&g_235,&g_235,&g_235,&g_235},{&g_235,&g_235,(void*)0,&g_235,&g_235},{&g_235,&g_235,&g_235,&g_235,&g_235}},{{&g_235,&g_235,&g_235,&g_235,&g_235},{&g_235,&g_235,(void*)0,&g_235,&g_235},{&g_235,&g_235,&g_235,&g_235,&g_235},{(void*)0,&g_235,&g_235,&g_235,&g_235},{(void*)0,&g_235,(void*)0,&g_235,&g_235}},{{&g_235,&g_235,&g_235,&g_235,&g_235},{&g_235,&g_235,&g_235,&g_235,&g_235},{&g_235,&g_235,(void*)0,&g_235,&g_235},{&g_235,&g_235,&g_235,&g_235,&g_235},{&g_235,&g_235,&g_235,&g_235,&g_235}},{{&g_235,&g_235,(void*)0,&g_235,&g_235},{&g_235,&g_235,&g_235,&g_235,&g_235},{(void*)0,&g_235,&g_235,&g_235,&g_235},{(void*)0,&g_235,(void*)0,&g_235,&g_235},{&g_235,&g_235,&g_235,&g_235,&g_235}},{{&g_235,&g_235,&g_235,&g_235,&g_235},{(void*)0,&g_235,&g_235,&g_235,(void*)0},{(void*)0,&g_235,(void*)0,(void*)0,&g_235},{(void*)0,&g_235,(void*)0,&g_235,(void*)0},{&g_235,(void*)0,&g_235,&g_235,&g_235}},{{(void*)0,(void*)0,&g_235,(void*)0,(void*)0},{&g_235,&g_235,(void*)0,&g_235,(void*)0},{&g_235,&g_235,&g_235,&g_235,&g_235},{(void*)0,&g_235,(void*)0,(void*)0,&g_235},{&g_235,&g_235,&g_235,&g_235,(void*)0}},{{(void*)0,&g_235,&g_235,&g_235,(void*)0},{(void*)0,&g_235,(void*)0,(void*)0,&g_235},{(void*)0,&g_235,(void*)0,&g_235,(void*)0},{&g_235,(void*)0,&g_235,&g_235,&g_235},{(void*)0,(void*)0,&g_235,(void*)0,(void*)0}},{{&g_235,&g_235,(void*)0,&g_235,(void*)0},{&g_235,&g_235,&g_235,&g_235,&g_235},{(void*)0,&g_235,(void*)0,(void*)0,&g_235},{&g_235,&g_235,&g_235,&g_235,(void*)0},{(void*)0,&g_235,&g_235,&g_235,(void*)0}}};
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 6; j++)
                l_1655[i][j] = 0UL;
        }
        for (i = 0; i < 2; i++)
            l_1681[i] = &g_384[0][3][0];
        for (i = 0; i < 2; i++)
            l_1680[i] = &l_1681[1];
        for (l_1561 = 0; (l_1561 <= 3); l_1561 += 1)
        {
            uint8_t l_1665 = 255UL;
            int32_t l_1668[10];
            int32_t * const l_1671 = &g_1294[2];
            int32_t * const *l_1670 = &l_1671;
            int32_t l_1710[2];
            int32_t l_1712 = 8L;
            int64_t l_1727[7];
            const int32_t l_1745 = 0xA1255D8AL;
            int16_t ***l_1748 = &g_1143;
            uint32_t **l_1751 = &l_1708;
            int8_t l_1793 = 0L;
            int8_t **l_1796[2][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t *l_1801[10] = {&l_1668[1],&l_1668[1],&l_1668[1],&l_1668[1],&l_1668[1],&l_1668[1],&l_1668[1],&l_1668[1],&l_1668[1],&l_1668[1]};
            uint16_t *l_1806[4][7][8] = {{{&g_1385[1],&g_1385[3],&l_1510,&g_24,&g_782,&l_1510,&g_1385[3],&l_1446},{&l_1510,&g_1385[0],(void*)0,&g_782,&g_782,(void*)0,&l_1446,&l_1510},{&g_1385[1],&l_1510,(void*)0,&l_1446,&g_24,&g_1385[0],&l_1510,&g_1385[1]},{(void*)0,&g_24,&l_1510,&g_1385[0],(void*)0,&g_1385[0],&l_1510,&g_24},{&g_24,&l_1510,&g_1385[0],&l_1446,&g_1385[1],(void*)0,&g_24,&g_24},{&g_24,&g_1385[0],&g_782,&g_1385[3],&g_24,&l_1510,&g_24,&g_782},{&g_24,&g_1385[3],&g_1385[0],(void*)0,&l_1446,&l_1510,&l_1510,&g_1385[1]}},{{&l_1446,&l_1510,&l_1510,&g_1385[1],&l_1510,&g_782,&l_1510,&g_1385[1]},{(void*)0,&g_1385[1],(void*)0,(void*)0,&g_1385[3],&g_24,&l_1446,&g_782},{&g_782,(void*)0,&g_1385[1],&g_1385[1],&g_782,&g_1385[1],&g_1385[0],&g_782},{&g_24,&g_24,&l_1510,&l_1510,&g_1385[0],&g_1385[1],&l_1510,&l_1446},{&g_1385[3],&g_1385[3],(void*)0,&g_24,&l_1510,&g_1385[0],(void*)0,&g_1385[0]},{(void*)0,&g_1385[3],&l_1510,&g_1385[3],(void*)0,&g_1385[1],&g_24,&l_1446},{(void*)0,&g_24,(void*)0,&g_24,(void*)0,&g_1385[1],&g_24,&g_1385[3]}},{{(void*)0,&l_1510,(void*)0,&l_1510,&l_1510,&l_1446,&g_24,(void*)0},{(void*)0,&g_1385[0],&l_1510,&l_1446,&g_24,&g_24,(void*)0,&g_1385[1]},{&l_1510,&l_1510,(void*)0,&l_1446,(void*)0,&l_1510,&l_1510,(void*)0},{&l_1510,&g_1385[1],&l_1510,&l_1510,&l_1446,(void*)0,&g_1385[0],&g_1385[3]},{&g_782,&g_24,&g_1385[1],&g_24,&l_1446,(void*)0,&g_24,&l_1446},{&l_1510,&l_1446,&g_1385[3],&g_1385[3],(void*)0,&g_24,&l_1510,&g_1385[0]},{&l_1510,&l_1446,&g_782,&g_24,&g_24,&g_24,&g_782,&l_1446}},{{(void*)0,&l_1446,&l_1446,&l_1510,&l_1510,(void*)0,(void*)0,&g_782},{(void*)0,&g_24,&l_1446,&g_1385[1],(void*)0,(void*)0,(void*)0,&g_24},{(void*)0,&g_1385[1],&l_1446,(void*)0,(void*)0,&l_1510,&g_782,&l_1510},{(void*)0,&l_1510,&g_782,&l_1510,&l_1510,&g_24,&l_1510,&l_1510},{&g_1385[3],&g_1385[0],&g_1385[3],(void*)0,&g_1385[0],&l_1446,&g_24,&g_24},{&g_24,&l_1510,&g_1385[1],&g_1385[1],&g_782,&g_1385[1],&g_1385[0],&g_782},{&g_24,&g_24,&l_1510,&l_1510,&g_1385[0],&g_1385[1],&l_1510,&l_1446}}};
            int16_t **l_1888 = &g_313;
            int32_t l_1898 = 0x3EBFA821L;
            int32_t * const * const *l_1946 = &g_815[1];
            int32_t * const * const **l_1945 = &l_1946;
            int32_t * const * const ***l_1944[2][1][3] = {{{&l_1945,&l_1945,&l_1945}},{{&l_1945,&l_1945,&l_1945}}};
            int16_t ****l_1960 = &l_1748;
            int16_t *****l_1959 = &l_1960;
            int32_t ****l_2006 = &g_384[0][3][0];
            uint32_t *l_2020 = (void*)0;
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_1668[i] = 0x3C9AF0E4L;
            for (i = 0; i < 2; i++)
                l_1710[i] = (-1L);
            for (i = 0; i < 7; i++)
                l_1727[i] = 1L;
        }
    }
    if ((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u((&g_313 != l_2053), ((((((*l_2054) = (*g_1381)) == ((safe_mul_func_int16_t_s_s(0L, ((safe_mul_func_uint8_t_u_u(((((*g_2015) = (*g_324)) == (((*l_1476) = (p_48 & ((g_1974 = l_2060) == &g_1988))) , 0x2CF3D524L)) , (**g_1974)), (*g_1988))) & (-7L)))) , (*l_1380))) , (*l_1476)) > g_631) ^ g_2032))), p_48)), (*g_236))))
    {
        int32_t *l_2063 = (void*)0;
        int16_t * const **l_2070 = &l_1958;
        int32_t l_2072 = 1L;
        int32_t l_2080 = 0x517A3306L;
        int16_t l_2081 = 0x8F62L;
        int32_t l_2082[4] = {0x6F0E5801L,0x6F0E5801L,0x6F0E5801L,0x6F0E5801L};
        int8_t ***l_2089[4];
        uint32_t l_2097 = 0x74183C03L;
        uint64_t l_2105 = 0x29CE15B4D64979F9LL;
        int8_t l_2137 = (-10L);
        int i;
        for (i = 0; i < 4; i++)
            l_2089[i] = &l_1380;
lbl_2087:
        if (((***g_1819) < 0UL))
        {
            l_1535 = l_2063;
        }
        else
        {
            int32_t *l_2071 = &l_1567;
            int32_t *l_2073 = (void*)0;
            int32_t *l_2074 = &l_1567;
            int32_t *l_2075 = &l_1567;
            int32_t l_2076 = 0x2AA60C11L;
            int32_t *l_2077 = &l_1810;
            int32_t *l_2078 = &l_1902;
            int32_t *l_2079[9][6][4] = {{{&g_6,&l_1375,&l_1561,&l_1810},{&l_1810,&l_1902,&l_1561,&l_2072},{&g_6,&g_87[1],&l_2072,&l_1561},{&g_5,&l_1810,&l_1383,(void*)0},{&l_1383,(void*)0,&l_1375,&g_87[4]},{&g_87[1],&l_1375,&g_87[5],&l_2072}},{{(void*)0,&l_1573,&l_1387,&l_1387},{&g_6,&g_6,&l_1559,&g_5},{&l_1387,&g_87[1],&l_1561,&l_1383},{&l_2072,&g_87[4],&l_1561,&l_1561},{&l_1569,&g_87[4],&l_1573,&l_1383},{&g_87[4],&g_87[1],&l_1387,&g_5}},{{&l_1810,&l_1567,&g_87[4],&g_87[7]},{&g_87[5],&g_5,&l_1561,&l_1561},{&l_2072,&l_1569,&l_1559,&l_1387},{&l_2072,&l_1383,(void*)0,&l_1383},{&l_1569,&g_3,&g_87[7],(void*)0},{&l_1569,&l_1810,&g_87[4],&l_1810}},{{&g_6,&g_87[1],&l_2072,&l_1387},{&g_6,&l_1569,&g_87[4],&l_1561},{&l_1569,&l_1387,&g_87[7],&l_1561},{&l_1569,(void*)0,(void*)0,&g_5},{&l_2072,&l_1569,&l_1559,&l_1810},{&l_2072,&g_3,&l_1561,&l_1559}},{{&g_87[5],&g_87[4],&g_87[4],&g_87[5]},{&l_1810,&l_1383,&l_1387,&l_1387},{&g_87[4],(void*)0,&l_1573,&g_87[7]},{&l_1569,&l_2072,&l_1561,&g_87[7]},{&l_2072,(void*)0,&l_1561,&l_1387},{&l_1387,&l_1383,&l_1559,&g_87[5]}},{{&l_1567,&g_87[4],&g_87[7],&l_1559},{&l_1383,&g_3,&l_1573,&l_1810},{&l_1810,&l_1569,&l_1569,&g_5},{&g_6,(void*)0,&g_6,&l_1561},{&g_87[5],&l_1387,&l_1561,&l_1561},{&l_1567,&l_1569,(void*)0,&l_1387}},{{&l_1387,&g_87[1],(void*)0,&l_1810},{&l_1567,&l_1810,&l_1561,(void*)0},{&g_87[5],&g_3,&g_6,&l_1383},{&g_6,&l_1383,&l_1569,&l_1387},{&l_1810,&l_1569,&l_1573,&l_1561},{&l_1383,&g_5,&g_87[7],&g_87[7]}},{{&l_1567,&l_1567,&l_1559,&g_5},{&l_1387,&g_87[1],&l_1561,&l_1383},{&l_2072,&g_87[4],&l_1561,&l_1561},{&l_1569,&g_87[4],&l_1573,&l_1383},{&g_87[4],&g_87[1],&l_1387,&g_5},{&l_1810,&l_1567,&g_87[4],&g_87[7]}},{{&g_87[5],&g_5,&l_1561,&l_1561},{&l_2072,&l_1569,&l_1559,&l_1387},{&l_2072,&l_1383,(void*)0,&l_1383},{&l_1569,&g_3,&g_87[7],(void*)0},{&l_1569,&l_1810,&g_87[4],&l_1810},{&g_6,&g_87[1],&l_2072,&l_1387}}};
            int i, j, k;
            for (g_2032 = 6; (g_2032 <= 47); g_2032++)
            {
                for (g_66 = 29; (g_66 != 41); g_66 = safe_add_func_uint64_t_u_u(g_66, 6))
                {
                    int32_t *l_2068 = &g_1730[3];
                    int32_t **l_2069 = &g_324;
                    (*l_2069) = l_2068;
                }
                (*l_1476) = (((*g_1962) = (*g_1962)) == ((**l_1955) = l_2070));
            }
            ++g_2083;
        }
        if (p_48)
        {
            const uint16_t *l_2086 = &l_1510;
            for (g_879 = 0; g_879 < 10; g_879 += 1)
            {
                for (l_2081 = 0; l_2081 < 10; l_2081 += 1)
                {
                    g_1379[g_879][l_2081] = &g_631;
                }
            }
            return p_47;
        }
        else
        {
            int16_t *****l_2088 = &g_1962;
            int32_t l_2100 = 4L;
            int32_t l_2111 = 0xD79BDB31L;
            int32_t ****l_2152 = &g_384[4][4][0];
            int32_t ****l_2155[8][9] = {{&g_384[6][4][0],(void*)0,&g_384[6][4][2],(void*)0,&g_384[6][4][0],(void*)0,(void*)0,&g_384[0][0][0],&g_384[6][4][0]},{&g_384[0][3][0],&g_384[0][3][0],(void*)0,&g_384[0][3][0],&g_384[0][3][0],(void*)0,&g_384[0][3][0],&g_384[0][3][0],(void*)0},{(void*)0,&g_384[0][0][0],&g_384[6][4][0],&g_384[0][0][0],(void*)0,(void*)0,(void*)0,&g_384[0][0][0],&g_384[6][4][0]},{&g_384[0][3][0],&g_384[0][3][0],(void*)0,&g_384[0][3][0],&g_384[0][3][0],(void*)0,&g_384[0][3][0],&g_384[0][3][0],(void*)0},{(void*)0,&g_384[0][0][0],&g_384[6][4][0],&g_384[0][0][0],(void*)0,(void*)0,(void*)0,&g_384[0][0][0],&g_384[6][4][0]},{&g_384[0][3][0],&g_384[0][3][0],(void*)0,&g_384[0][3][0],&g_384[0][3][0],(void*)0,&g_384[0][3][0],&g_384[0][3][0],(void*)0},{(void*)0,&g_384[0][0][0],&g_384[6][4][0],&g_384[0][0][0],(void*)0,(void*)0,(void*)0,&g_384[0][0][0],&g_384[6][4][0]},{&g_384[0][3][0],&g_384[0][3][0],(void*)0,&g_384[0][3][0],&g_384[0][3][0],(void*)0,&g_384[0][3][0],&g_384[0][3][0],(void*)0}};
            int32_t l_2161 = 1L;
            int i, j;
            for (l_1810 = 2; (l_1810 >= 0); l_1810 -= 1)
            {
                uint32_t l_2112 = 18446744073709551615UL;
                uint16_t ***l_2138 = &g_235;
                int32_t l_2156 = 1L;
                int32_t l_2158[6][4][10] = {{{(-10L),(-1L),(-1L),(-10L),0xA2C7382BL,(-1L),0x73573116L,(-1L),0xB4B345CFL,0L},{9L,0x6F83FE67L,0xB4B345CFL,0x73573116L,(-1L),0x33BAA163L,(-1L),0x73573116L,0xB4B345CFL,0x6F83FE67L},{1L,3L,(-1L),(-10L),0x68DFDAA4L,0x1260F073L,(-1L),0xB4B345CFL,0xA2C7382BL,0xA2C7382BL},{3L,0L,0x1260F073L,0x33BAA163L,0x33BAA163L,0x1260F073L,0L,3L,(-10L),(-1L)}},{{1L,(-1L),0x73573116L,3L,0x47BCE5D9L,0x33BAA163L,(-1L),(-1L),(-1L),0x33BAA163L},{9L,0x47BCE5D9L,0x73573116L,0x47BCE5D9L,9L,(-1L),(-10L),3L,0L,0x1260F073L},{(-10L),0x68DFDAA4L,0x1260F073L,(-1L),0xB4B345CFL,0xA2C7382BL,0xA2C7382BL,0xB4B345CFL,(-1L),0x1260F073L},{(-1L),(-1L),(-1L),0x1260F073L,9L,0x6F83FE67L,0xB4B345CFL,0x73573116L,(-1L),0x33BAA163L}},{{0x73573116L,(-1L),0xB4B345CFL,0L,0x47BCE5D9L,0L,0xB4B345CFL,(-1L),0x73573116L,(-1L)},{0x68DFDAA4L,(-1L),(-1L),9L,0x33BAA163L,1L,0xA2C7382BL,0x47BCE5D9L,0x47BCE5D9L,0xA2C7382BL},{(-1L),0x68DFDAA4L,9L,9L,0x68DFDAA4L,(-1L),(-10L),1L,0x73573116L,0x6F83FE67L},{0x6F83FE67L,0x47BCE5D9L,(-1L),0L,(-1L),(-1L),(-1L),(-1L),(-1L),0L}},{{0x6F83FE67L,(-1L),0x6F83FE67L,0x1260F073L,(-1L),0x47BCE5D9L,(-1L),9L,0x73573116L,0x1260F073L},{0x47BCE5D9L,(-1L),9L,0x73573116L,0x1260F073L,0x1260F073L,0x73573116L,9L,(-1L),0x47BCE5D9L},{(-1L),(-10L),0xA2C7382BL,(-1L),0x73573116L,(-1L),0xB4B345CFL,0L,0x47BCE5D9L,0L},{3L,0xA2C7382BL,0x73573116L,(-10L),0x73573116L,0xA2C7382BL,3L,0x1260F073L,1L,0x47BCE5D9L}},{{0x73573116L,0xB4B345CFL,0x6F83FE67L,9L,0x1260F073L,(-1L),(-1L),(-1L),(-1L),0x1260F073L},{1L,0xB4B345CFL,0xB4B345CFL,1L,(-1L),0x73573116L,3L,0x47BCE5D9L,0x33BAA163L,(-1L)},{0x6F83FE67L,0xA2C7382BL,0x33BAA163L,3L,0xB4B345CFL,9L,0xB4B345CFL,3L,0x33BAA163L,0xA2C7382BL},{0x1260F073L,(-10L),0L,1L,(-1L),0x68DFDAA4L,0x73573116L,0x33BAA163L,(-1L),(-1L)}},{{(-10L),(-1L),0x68DFDAA4L,9L,9L,0x68DFDAA4L,(-1L),(-10L),1L,0x73573116L},{0x1260F073L,0L,3L,(-10L),(-1L),9L,0x47BCE5D9L,0x73573116L,0x47BCE5D9L,9L},{0x6F83FE67L,(-1L),3L,(-1L),0x6F83FE67L,0x73573116L,1L,(-10L),(-1L),0x68DFDAA4L},{1L,(-1L),0x68DFDAA4L,0x73573116L,0x33BAA163L,(-1L),(-1L),0x33BAA163L,0x73573116L,0x68DFDAA4L}}};
                int64_t l_2163 = 1L;
                int32_t l_2198 = 0x1B4040F8L;
                int i, j, k;
                for (l_2072 = 3; (l_2072 <= 9); l_2072 += 1)
                {
                    int64_t l_2099 = 0x35562A61B6C80D00LL;
                    int32_t l_2106 = 0x5984B4DFL;
                    int32_t l_2157 = 2L;
                    int32_t l_2159 = 0xE9A337A7L;
                    int32_t l_2160[4][3][2] = {{{1L,1L},{1L,0x13A3F01CL},{0x678D3139L,0x70B15BCFL}},{{0x13A3F01CL,0x70B15BCFL},{0x678D3139L,0x13A3F01CL},{1L,1L}},{{1L,0x13A3F01CL},{0x678D3139L,0x70B15BCFL},{0x13A3F01CL,0x70B15BCFL}},{{0x678D3139L,0x13A3F01CL},{1L,1L},{1L,0x13A3F01CL}}};
                    int i, j, k;
                    for (g_1731 = 0; (g_1731 <= 2); g_1731 += 1)
                    {
                        int i, j, k;
                        if (g_782)
                            goto lbl_2087;
                        l_2088 = &g_1962;
                        l_2063 = &l_2080;
                    }
                    if (p_48)
                    {
                        uint8_t l_2098 = 1UL;
                        (*l_1476) |= ((p_48 | (**g_1143)) <= 0x5CB9A2AC75BD4BCFLL);
                        if (p_48)
                            break;
                        l_2100 ^= ((((void*)0 != l_2089[1]) > p_48) < (safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_uint16_t_u(((*l_1364) ^= (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((((((**g_1143) ^= 0xAEC7L) >= ((p_48 && ((l_2097 &= p_48) & (0xE5894F65CB0FC7B9LL <= p_48))) , ((l_2098 , l_2099) , (***g_1819)))) == p_48) || 255UL), p_48)), 4))))) , (**g_1143)), l_2098)));
                        l_2106 |= (safe_lshift_func_uint8_t_u_s(p_48, ((*l_1476) = (safe_lshift_func_int16_t_s_s(l_2105, 12)))));
                    }
                    else
                    {
                        int32_t *l_2107 = &l_1559;
                        int32_t *l_2108 = &l_1902;
                        int32_t *l_2109 = &l_2106;
                        int32_t *l_2110[10] = {&l_1375,&l_1375,&l_1375,&l_1375,&l_1375,&l_1375,&l_1375,&l_1375,&l_1375,&l_1375};
                        int i;
                        ++l_2112;
                        return (*g_235);
                    }
                    for (p_48 = 0; (p_48 <= 9); p_48 += 1)
                    {
                        const int32_t l_2135 = 0L;
                        uint32_t *l_2136 = &g_952;
                        uint16_t ****l_2139 = &g_1819;
                        int32_t ****l_2144 = &g_384[0][3][0];
                        int32_t *****l_2154[4][4] = {{&l_2153,(void*)0,&l_2153,&g_1964[1][4]},{&l_2153,&l_2153,&l_2153,&l_2153},{(void*)0,&g_1964[1][4],&l_2153,&l_2153},{&l_2153,&l_2153,(void*)0,&g_1964[1][4]}};
                        int i, j, k;
                        (*g_2015) &= (safe_lshift_func_int16_t_s_u((((safe_sub_func_int16_t_s_s((((*l_2088) == (*g_1961)) > (safe_add_func_uint32_t_u_u(((*l_2136) = ((safe_lshift_func_uint8_t_u_u(l_2100, 4)) <= ((safe_lshift_func_uint16_t_u_s(((l_2111 <= (safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s(l_2100, p_48)), p_48)), (safe_sub_func_uint64_t_u_u(((**g_1381) != (safe_mul_func_int8_t_s_s(((0xBF684887L || p_48) ^ (*g_675)), l_2135))), l_2112))))) != p_48), p_48)) >= l_2135))), l_2099))), 0x4767L)) , p_48) == 7L), l_2137));
                        (*l_2139) = l_2138;
                        l_2157 &= (p_48 != (safe_div_func_int8_t_s_s(((((((void*)0 == l_2144) | (safe_mod_func_uint64_t_u_u(((p_48 != ((*l_2136) = ((((safe_rshift_func_uint8_t_u_u((l_2156 = ((+((*l_1384) |= ((safe_rshift_func_int16_t_s_u((0xFA82L != (l_2152 != (l_2155[3][5] = l_2153))), (((**l_2060) = (l_2106 = 0x0DL)) != p_48))) , (*p_47)))) , p_48)), 4)) < p_48) == g_2083) , p_48))) , (**g_674)), 1UL))) ^ p_48) != p_48) > p_48), l_2137)));
                        g_2164++;
                    }
                }
                for (l_2112 = 0; (l_2112 <= 1); l_2112 += 1)
                {
                    const uint64_t l_2175[10] = {0x7BE7B26419C07D7ELL,0x7BE7B26419C07D7ELL,0x71F8EF65497B4E03LL,18446744073709551612UL,0x71F8EF65497B4E03LL,0x7BE7B26419C07D7ELL,0x7BE7B26419C07D7ELL,0x71F8EF65497B4E03LL,18446744073709551612UL,0x71F8EF65497B4E03LL};
                    uint32_t *l_2183 = &g_565;
                    uint64_t ***l_2195 = (void*)0;
                    uint64_t ****l_2194 = &l_2195;
                    int32_t l_2199[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2199[i] = 0x1B69005BL;
                    (*l_1476) ^= (safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((p_48 , (safe_mod_func_int16_t_s_s((3UL || p_48), (--(***l_2138))))) >= (((void*)0 != &g_1974) ^ (l_2175[5] != (safe_add_func_int16_t_s_s(l_2163, ((((*g_399) = (l_2158[2][3][1] = p_48)) | (((safe_add_func_uint64_t_u_u(5UL, g_1157)) , p_48) , p_48)) > p_48)))))), 3)), 4));
                    for (l_1446 = 0; (l_1446 <= 1); l_1446 += 1)
                    {
                        if (g_66)
                            goto lbl_2180;
                    }
                    l_2199[0] = (safe_mod_func_int32_t_s_s(((((*g_739) = 4L) && ((*g_1988) = p_48)) == (--(*l_2183))), ((l_2198 = (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((**g_1381) >= (~0xBB64A647L)), 3)) , ((void*)0 == p_46)), (safe_unary_minus_func_uint16_t_u(((*l_1364) = (((*l_1476) = (safe_lshift_func_int16_t_s_s((((*l_2194) = &l_1843) == ((((**g_235) = ((((safe_mul_func_uint16_t_u_u(0UL, 0x3B5BL)) < g_1294[4]) >= (*g_2018)) > l_2175[1])) || (*p_46)) , &l_1843)), 2))) & p_48))))))) ^ g_114)));
                }
            }
        }
    }
    else
    {
        for (g_952 = (-17); (g_952 < 17); g_952++)
        {
            return (*g_235);
        }
    }
    if (((p_48 == (p_48 ^ (safe_lshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((**g_1143), (safe_add_func_int64_t_s_s(((g_1766[3][0][1] = (l_2213 = &l_1669)) == ((1UL != ((p_48 , (p_48 < (&g_1317 != &l_1769))) && (-6L))) , (void*)0)), 0x588F7E67C8840390LL)))), 0)) <= 0x6CD6BA42AF8549E2LL) , (*g_1988)) != 1UL), p_48)) | (-4L)), 4)))) , 0x5550253BL))
    {
        const uint16_t *l_2214 = &g_782;
        return l_2214;
    }
    else
    {
        int8_t l_2234[2];
        uint32_t *l_2289 = &g_565;
        uint8_t * const *l_2313 = &g_1975[3][2];
        int32_t l_2315 = 0x3BB3A51FL;
        int i;
        for (i = 0; i < 2; i++)
            l_2234[i] = 0xA6L;
        for (p_48 = 0; (p_48 <= 3); p_48 += 1)
        {
            uint16_t l_2252 = 2UL;
            int32_t l_2254 = (-8L);
            int32_t *l_2260 = &g_1730[3];
            int16_t *l_2273[1][5][1] = {{{&g_1157},{&g_314[5][2]},{&g_1157},{&g_314[5][2]},{&g_1157}}};
            int i, j, k;
            if (((*g_2015) ^= ((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0xE4L, 0x4BL)), (safe_add_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s((safe_div_func_int64_t_s_s((+(g_2164 , (p_48 , (((safe_mod_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((*l_1476), ((safe_lshift_func_int8_t_s_s(((**g_674) != (((*l_1380) != (void*)0) == ((((((safe_sub_func_int32_t_s_s(p_48, (*g_2014))) == (-1L)) ^ p_48) & p_48) && p_48) > p_48))), (*l_1476))) , 0x07L))) <= (*l_1476)), (*g_1988))) <= l_2234[1]) < 0x15L)))), g_1428)), 252UL)) < l_2235[5]) | 0xDF960A4947F635F3LL), (*l_1476))))) <= 0xE21D728B9A44FFBALL)))
            {
                int32_t *l_2259 = &l_1375;
                for (l_1446 = 0; (l_1446 <= 3); l_1446 += 1)
                {
                    int16_t *****l_2236[4][7][9] = {{{&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962},{&g_1962,&g_1962,&g_1962,(void*)0,(void*)0,&g_1962,(void*)0,&g_1962,&g_1962},{&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962},{&g_1962,&g_1962,&g_1962,(void*)0,(void*)0,&g_1962,&g_1962,&g_1962,(void*)0},{(void*)0,&g_1962,(void*)0,(void*)0,&g_1962,&g_1962,(void*)0,&g_1962,&g_1962},{(void*)0,&g_1962,(void*)0,&g_1962,&g_1962,&g_1962,(void*)0,&g_1962,&g_1962},{&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,(void*)0}},{{(void*)0,&g_1962,&g_1962,(void*)0,(void*)0,&g_1962,&g_1962,(void*)0,&g_1962},{&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,(void*)0,(void*)0,&g_1962},{&g_1962,&g_1962,(void*)0,&g_1962,&g_1962,(void*)0,&g_1962,&g_1962,&g_1962},{&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,(void*)0,(void*)0,&g_1962,&g_1962},{&g_1962,&g_1962,(void*)0,&g_1962,(void*)0,&g_1962,&g_1962,&g_1962,&g_1962},{(void*)0,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962},{&g_1962,(void*)0,&g_1962,&g_1962,(void*)0,&g_1962,&g_1962,&g_1962,(void*)0}},{{&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962},{&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962},{&g_1962,(void*)0,&g_1962,(void*)0,(void*)0,&g_1962,&g_1962,&g_1962,&g_1962},{(void*)0,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962},{&g_1962,&g_1962,&g_1962,&g_1962,(void*)0,(void*)0,&g_1962,&g_1962,(void*)0},{&g_1962,(void*)0,&g_1962,(void*)0,&g_1962,&g_1962,&g_1962,&g_1962,(void*)0},{&g_1962,&g_1962,&g_1962,(void*)0,(void*)0,&g_1962,&g_1962,&g_1962,(void*)0}},{{&g_1962,&g_1962,(void*)0,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962},{&g_1962,(void*)0,&g_1962,&g_1962,(void*)0,&g_1962,&g_1962,(void*)0,&g_1962},{&g_1962,&g_1962,(void*)0,&g_1962,&g_1962,&g_1962,(void*)0,&g_1962,&g_1962},{&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,(void*)0,&g_1962,&g_1962,(void*)0},{&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,(void*)0,(void*)0,&g_1962,&g_1962},{&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962,(void*)0,&g_1962,&g_1962},{&g_1962,(void*)0,(void*)0,(void*)0,&g_1962,&g_1962,&g_1962,&g_1962,&g_1962}}};
                    int16_t **l_2239 = &g_313;
                    int16_t **** const *l_2253 = &g_1962;
                    int i, j, k;
                    if (((l_2236[2][2][0] = &g_1962) != ((safe_div_func_int16_t_s_s(((l_2239 != (void*)0) ^ (safe_add_func_int8_t_s_s((7L != ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((**g_674), ((safe_add_func_int16_t_s_s((-6L), (((*g_1988) & (p_48 <= ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(0L, 6)), (**g_235))) >= (-1L)))) , 0x62A9L))) ^ p_48))), l_2252)) == (*g_399))), (*g_1988)))), (*g_236))) , l_2253)))
                    {
                        l_2254 = (*g_2015);
                    }
                    else
                    {
                        return p_46;
                    }
                    return (**g_1819);
                }
                for (g_215 = 0; (g_215 <= 3); g_215 += 1)
                {
                    int8_t l_2255 = (-1L);
                    for (l_2252 = 0; (l_2252 <= 3); l_2252 += 1)
                    {
                        uint16_t l_2256 = 0x7AF9L;
                        l_2256++;
                    }
                }
                l_2260 = l_2259;
                for (l_1567 = 0; (l_1567 <= 3); l_1567 += 1)
                {
                    uint16_t l_2261[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2261[i] = 65534UL;
                    if (l_2261[0])
                        break;
                }
            }
            else
            {
                int32_t **l_2264 = &g_324;
                (*l_2260) = (((p_48 && ((((safe_sub_func_uint32_t_u_u(((l_2264 == ((*l_1720) = (void*)0)) , ((+(safe_lshift_func_int8_t_s_s(0x07L, (safe_lshift_func_int8_t_s_s((((p_48 >= (-9L)) < ((*g_739) = p_48)) != (p_48 < (0L < 0xA1329794L))), 0))))) < (*g_1988))), p_48)) || 1UL) ^ (-10L)) , (*g_2018))) , p_48) != (*l_2260));
                (*l_1476) ^= ((*g_2015) = (safe_sub_func_int8_t_s_s(p_48, (~(l_2273[0][4][0] != l_2273[0][4][0])))));
                (*l_1476) ^= ((*g_2015) ^= 0x9E5E26C5L);
            }
        }
        if (((*l_1476) = ((*g_2015) |= ((((*l_2289) |= (safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(0UL, (safe_sub_func_int32_t_s_s(((0xA0L >= p_48) < 0x49088B53L), ((safe_mul_func_uint16_t_u_u(((0x12CF720AL != ((((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((l_2288 & (g_238[8][5][0] != (-2L))), (((0L > l_2234[0]) & 0L) > (*p_47)))) >= (*g_739)), (*l_1476))), l_2234[1])) && 0x64L) == p_48) , p_48)) > 18446744073709551606UL), (*p_46))) ^ p_48))))), 0x84L))) && g_879) , 5L))))
        {
            for (l_1375 = (-10); (l_1375 >= 28); ++l_1375)
            {
                (*l_1476) = l_2234[1];
            }
        }
        else
        {
            uint64_t l_2292 = 1UL;
            (**g_1961) = (l_2292 , (void*)0);
            (*g_2015) &= (safe_unary_minus_func_int8_t_s(((safe_rshift_func_uint16_t_u_s((255UL || (safe_mod_func_int16_t_s_s(l_2292, (*p_47)))), 11)) != 0L)));
        }
        (*g_2015) ^= (safe_add_func_int32_t_s_s(((l_2315 = ((p_48 & p_48) && (g_5 | (safe_lshift_func_int16_t_s_s((g_1157 = (safe_rshift_func_int16_t_s_u(p_48, ((*p_46) = ((*l_1384) &= (!((((**g_674)--) , ((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((((**g_1143) = (safe_lshift_func_int16_t_s_u((0xBB409C3CL != ((*l_1476) , (l_2313 == (void*)0))), 4))) , (&g_1819 == l_2314)), 0x41605789L)), l_2234[1])) , (void*)0)) != (void*)0))))))), (*l_1476)))))) != g_1317), l_2234[1]));
    }
    for (g_526 = 0; (g_526 > 15); g_526 = safe_add_func_uint64_t_u_u(g_526, 8))
    {
        uint32_t l_2327 = 18446744073709551608UL;
        int32_t *l_2332 = &l_1573;
        uint32_t *l_2345 = (void*)0;
        int32_t l_2346 = 0L;
        int32_t l_2434 = 1L;
        const int32_t ****l_2448 = (void*)0;
        const uint8_t l_2468 = 0x35L;
        int32_t l_2471 = 0xB4CFB21BL;
        int32_t l_2472 = 0x87EF0A5CL;
        uint8_t l_2473 = 3UL;
        const uint16_t *l_2476 = &l_1446;
        int32_t *l_2487 = (void*)0;
        int32_t *l_2488 = &l_2346;
        int8_t l_2498 = 0x13L;
        int32_t l_2499[10] = {0x88A1ECCEL,0x58C2C69EL,0x88A1ECCEL,0x88A1ECCEL,0x58C2C69EL,0x88A1ECCEL,0x88A1ECCEL,0x58C2C69EL,0x88A1ECCEL,0x88A1ECCEL};
        uint16_t l_2501 = 65535UL;
        int32_t l_2508 = 0xE25142B6L;
        int8_t l_2509 = 0xBCL;
        uint64_t l_2510 = 0xED643687EE1269B7LL;
        int i;
        if (((((*l_1476) < (safe_mul_func_int16_t_s_s((*g_313), (0xEEF2L | (*p_47))))) && (!(safe_div_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((0x2C981DF76934E6C7LL >= (safe_add_func_int32_t_s_s(l_2327, (-4L)))) < (-3L)), (safe_lshift_func_int16_t_s_u(((((*p_47) = ((*g_2014) | p_48)) , l_2327) <= g_238[0][1][0]), l_2327)))), l_2327)))) && l_2327))
        {
            if (p_48)
                break;
        }
        else
        {
            int16_t ***l_2330 = &g_1143;
            int16_t **l_2331 = &g_313;
            (*g_2015) = (((*l_2330) = (void*)0) == l_2331);
            l_1535 = l_2332;
        }
        if ((safe_rshift_func_int8_t_s_s((*l_1476), ((*g_739) = (safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint32_t_u(((((safe_rshift_func_uint16_t_u_s((((((**g_235) = ((2L > p_48) || (*l_2332))) , (*g_1988)) && (*g_399)) && (p_48 , (p_48 > ((*l_2332) = (((safe_mul_func_int16_t_s_s(((**l_1958) |= (safe_mul_func_int16_t_s_s(l_2344, (*l_2332)))), 0L)) , (*l_2332)) != (*p_47)))))), l_2346)) <= g_1428) == p_48) != 1UL))), 7))))))
        {
            uint64_t l_2350 = 0UL;
            uint64_t ***l_2377 = &g_674;
            uint64_t ****l_2376 = &l_2377;
            int32_t l_2383 = 0xC086913BL;
            int32_t l_2384 = 0x01BE7251L;
            int64_t l_2416 = 0x8A469053F4165A5BLL;
            int32_t l_2417 = 0x3393A02FL;
            int32_t *l_2470 = &l_1810;
            int32_t l_2506[3];
            int i;
            for (i = 0; i < 3; i++)
                l_2506[i] = 0x3465385CL;
            for (l_2288 = 0; (l_2288 <= 1); l_2288 += 1)
            {
                const int16_t *l_2348 = &l_2344;
                const int16_t **l_2347 = &l_2348;
                int32_t l_2349 = 0L;
                int32_t *l_2418 = (void*)0;
                (*g_2015) = p_48;
                l_2349 = ((void*)0 == l_2347);
                if ((((**l_2060) = (((*p_46) && (((*l_1476) ^= ((l_2350 ^= (g_1317 = 0x990D6E1AL)) & (*l_2332))) <= 0x3BBF1768L)) && ((**g_1767) , p_48))) & 1UL))
                {
                    (*g_2015) ^= 0x0DA8AEFEL;
                }
                else
                {
                    int32_t *l_2352 = &l_1902;
                    int32_t *l_2353 = (void*)0;
                    int32_t ****l_2378[10][6][4] = {{{(void*)0,(void*)0,&g_1766[2][0][1],&g_1766[1][0][4]},{(void*)0,&g_1766[1][0][4],&g_1766[1][0][1],(void*)0},{&g_1766[1][0][4],&g_1766[3][0][4],&g_1766[1][0][4],&l_2213},{(void*)0,&g_1766[1][0][4],&g_1766[1][0][4],&g_1766[1][0][4]},{&g_1766[1][0][4],&g_1766[1][0][4],&l_2213,&g_1766[0][0][4]},{&g_1766[3][0][1],&g_1766[1][0][4],&g_1766[1][0][4],&g_1766[3][0][4]}},{{(void*)0,&g_1766[0][0][3],&g_1766[1][0][4],&g_1766[1][0][4]},{&g_1766[1][0][4],&g_1766[3][0][3],&g_1766[1][0][1],(void*)0},{(void*)0,&g_1766[1][0][4],&g_1766[1][0][4],&g_1766[1][0][4]},{&g_1766[4][0][2],&l_2213,&g_1766[2][0][3],&g_1766[1][0][4]},{&g_1766[3][0][4],&g_1766[1][0][1],(void*)0,(void*)0},{(void*)0,&g_1766[1][0][4],&l_2213,(void*)0}},{{&g_1766[1][0][4],&g_1766[1][0][4],&g_1766[1][0][4],&g_1766[4][0][2]},{&g_1766[0][0][4],&g_1766[3][0][1],&g_1766[3][0][1],&g_1766[1][0][4]},{&g_1766[3][0][1],(void*)0,&g_1766[1][0][1],(void*)0},{(void*)0,&g_1766[4][0][2],&g_1766[1][0][4],(void*)0},{&g_1766[1][0][4],&l_2213,&l_2213,&g_1766[1][0][4]},{&g_1766[1][0][4],&g_1766[1][0][4],&g_1766[1][0][4],&g_1766[3][0][1]}},{{&l_2213,&l_2213,&g_1766[2][0][1],&l_2213},{(void*)0,&g_1766[1][0][4],&l_2213,&l_2213},{&g_1766[0][0][4],&l_2213,&l_2213,&g_1766[3][0][1]},{&g_1766[1][0][4],&g_1766[1][0][4],&g_1766[1][0][3],&g_1766[1][0][4]},{&g_1766[1][0][4],&l_2213,&l_2213,(void*)0},{&g_1766[1][0][4],&g_1766[4][0][2],(void*)0,(void*)0}},{{&g_1766[1][0][4],(void*)0,&g_1766[0][0][1],&g_1766[1][0][4]},{&g_1766[1][0][4],&g_1766[3][0][1],&g_1766[2][0][1],&g_1766[4][0][2]},{&g_1766[1][0][4],&g_1766[1][0][4],&l_2213,(void*)0},{&l_2213,&g_1766[1][0][4],(void*)0,(void*)0},{(void*)0,&g_1766[1][0][1],&g_1766[0][0][4],&g_1766[1][0][4]},{&g_1766[1][0][4],&l_2213,&g_1766[1][0][4],&g_1766[1][0][4]}},{{&g_1766[1][0][4],&g_1766[1][0][4],(void*)0,(void*)0},{&g_1766[1][0][4],&g_1766[3][0][3],&g_1766[3][0][1],&g_1766[1][0][4]},{(void*)0,&g_1766[3][0][1],&l_2213,(void*)0},{&g_1766[1][0][4],&g_1766[1][0][4],&g_1766[1][0][4],(void*)0},{&l_2213,&g_1766[1][0][2],&g_1766[1][0][4],&g_1766[1][0][1]},{&g_1766[1][0][4],&g_1766[1][0][4],&g_1766[1][0][4],&l_2213}},{{&g_1766[1][0][4],&g_1766[3][0][4],&g_1766[1][0][4],(void*)0},{&g_1766[3][0][1],&g_1766[1][0][4],&g_1766[1][0][4],&g_1766[1][0][3]},{&g_1766[1][0][4],(void*)0,&l_2213,(void*)0},{(void*)0,&g_1766[1][0][4],(void*)0,&g_1766[3][0][3]},{&g_1766[1][0][4],&g_1766[1][0][4],(void*)0,&l_2213},{&l_2213,&g_1766[1][0][4],&g_1766[1][0][4],&l_2213}},{{&l_2213,(void*)0,(void*)0,&g_1766[1][0][4]},{&g_1766[1][0][4],&g_1766[1][0][2],&g_1766[1][0][4],&g_1766[1][0][4]},{&g_1766[0][0][0],&g_1766[1][0][1],&g_1766[2][0][3],(void*)0},{&g_1766[1][0][4],(void*)0,&g_1766[1][0][4],(void*)0},{&g_1766[1][0][4],(void*)0,&g_1766[1][0][4],&l_2213},{&g_1766[1][0][4],&g_1766[1][0][3],(void*)0,(void*)0}},{{(void*)0,&g_1766[1][0][4],&g_1766[1][0][4],&l_2213},{(void*)0,&g_1766[1][0][3],(void*)0,&l_2213},{&g_1766[1][0][4],&l_2213,&g_1766[1][0][4],&l_2213},{&g_1766[1][0][4],&g_1766[1][0][4],&g_1766[1][0][4],(void*)0},{&g_1766[1][0][4],&g_1766[1][0][4],&g_1766[2][0][3],&g_1766[3][0][3]},{&g_1766[0][0][0],&g_1766[0][0][4],&g_1766[1][0][4],&g_1766[4][0][1]}},{{&g_1766[1][0][4],&g_1766[3][0][4],(void*)0,&g_1766[1][0][4]},{&l_2213,&g_1766[2][0][3],&g_1766[1][0][4],&l_2213},{&l_2213,&g_1766[1][0][3],(void*)0,(void*)0},{&g_1766[1][0][4],&g_1766[1][0][1],(void*)0,&g_1766[3][0][1]},{(void*)0,&g_1766[1][0][4],&l_2213,&g_1766[3][0][1]},{&g_1766[1][0][4],&g_1766[1][0][4],&g_1766[1][0][4],(void*)0}}};
                    int i, j, k;
                    for (l_2350 = 0; (l_2350 <= 1); l_2350 += 1)
                    {
                        int32_t *l_2351[4][8] = {{&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0]},{&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0]},{&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0]},{&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0],&l_2162[0]}};
                        int i, j;
                        l_2353 = (l_2352 = l_2351[1][2]);
                        return (*g_235);
                    }
                    (*g_2015) = ((safe_div_func_int64_t_s_s(((&g_1962 != &l_1956) || ((safe_sub_func_int64_t_s_s(((*l_2332) != (safe_lshift_func_uint16_t_u_u(((l_2360[0] != (p_48 , &l_2332)) & (safe_div_func_int8_t_s_s((-5L), ((*g_739) = (safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((*g_399) , (safe_mod_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((((+(safe_rshift_func_uint8_t_u_s(((((l_2374 == l_2376) | 4L) | p_48) , 0x8CL), p_48))) , l_2378[0][3][3]) == (void*)0), p_48)), p_48))), (*p_47))), 4)))))), 10))), (*g_675))) || (*l_2332))), l_2379)) >= 0x605C2336L);
                    for (g_126 = 0; (g_126 <= 1); g_126 += 1)
                    {
                        if ((*l_2352))
                            break;
                        --l_2380;
                    }
                    for (g_343 = 3; (g_343 >= 0); g_343 -= 1)
                    {
                        uint32_t l_2386 = 0x86F313ADL;
                        int64_t *l_2389 = &g_879;
                        int8_t l_2395 = 0x9FL;
                        int i, j, k;
                        ++l_2386;
                        (*l_2332) = (*l_1476);
                        (*l_2352) &= ((*l_2332) ^ (((((*l_2389) = (&l_2349 != (void*)0)) >= (((*g_236) = (0x7B935A7FEA728027LL ^ (*l_2332))) < (+(safe_div_func_uint8_t_u_u(((-6L) && ((*g_2014) ^ (safe_rshift_func_int8_t_s_u(l_2395, (~(!((((p_48 , l_2349) || (*g_313)) ^ (**g_674)) || 0UL))))))), 0xC9L))))) < p_48) | 1L));
                    }
                }
                for (g_66 = 0; (g_66 <= 1); g_66 += 1)
                {
                    int8_t ****l_2400 = &l_1377[0];
                    int32_t l_2403 = 0xD607CDC4L;
                    uint32_t * const l_2425 = &l_1769;
                    const uint16_t l_2426 = 1UL;
                    int i, j, k;
                    if ((((*l_2332) <= (((*g_1917) = p_48) , ((*g_236) , (safe_rshift_func_uint16_t_u_u(((((&g_398[1] == (l_2349 , ((*l_2400) = &g_1381))) > (l_2349 == (safe_mul_func_uint8_t_u_u(l_2349, (l_2349 , l_2403))))) || l_2403) == 0UL), (*g_236)))))) > (*l_1476)))
                    {
                        uint32_t *l_2404 = &g_171;
                        int64_t *l_2410[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t l_2415 = 0L;
                        int i, j, k;
                        l_2417 |= ((++(*l_2404)) , (safe_rshift_func_uint8_t_u_s((((*l_2332) == l_2403) ^ (g_565 | (~((((((l_2062[(g_66 + 4)][(l_2288 + 3)][l_2288] = l_2062[l_2288][(g_66 + 4)][(l_2288 + 2)]) != &g_1974) , (l_2384 ^= p_48)) <= ((((!((+((l_2383 = ((&p_46 == ((*g_1819) = ((safe_sub_func_uint16_t_u_u(0x4B5EL, ((void*)0 != g_1916[l_2288][(l_2288 + 3)]))) , (*g_1819)))) , l_2415)) >= l_2416)) != l_2403)) & p_48) == 65535UL) != (*p_47))) <= p_48) , (*g_399))))), 0)));
                        l_2418 = (void*)0;
                        l_2418 = l_2345;
                    }
                    else
                    {
                        int16_t l_2427 = 0x52F0L;
                        int32_t l_2428 = 0xF43F8A5EL;
                        l_2428 = ((safe_lshift_func_uint16_t_u_s(l_2403, 15)) | (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(((l_2418 != l_2425) > 9L), 1)), (p_48 >= (((l_2426 > ((4294967287UL >= l_2427) < ((*l_2425) |= g_169[1][0]))) , (**g_674)) >= g_350)))));
                    }
                    if (p_48)
                        continue;
                }
            }
            g_2429[2][4]++;
            for (l_1891 = 0; (l_1891 > 26); l_1891 = safe_add_func_int32_t_s_s(l_1891, 9))
            {
                uint16_t l_2435 = 1UL;
                uint64_t **** const l_2467[9][10][2] = {{{&l_2377,&l_2377},{&l_2377,&l_2377},{(void*)0,&l_2377},{&l_2377,(void*)0},{&l_2377,(void*)0},{&l_2377,&l_2377},{(void*)0,&l_2377},{&l_2377,&l_2377},{&l_2377,(void*)0},{&l_2377,&l_2377}},{{&l_2377,(void*)0},{(void*)0,(void*)0},{&l_2377,&l_2377},{&l_2377,(void*)0},{&l_2377,&l_2377},{&l_2377,&l_2377},{(void*)0,&l_2377},{&l_2377,(void*)0},{&l_2377,(void*)0},{&l_2377,&l_2377}},{{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,(void*)0},{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{(void*)0,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377}},{{&l_2377,&l_2377},{&l_2377,&l_2377},{(void*)0,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{(void*)0,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377}},{{(void*)0,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{(void*)0,&l_2377}},{{&l_2377,&l_2377},{&l_2377,&l_2377},{(void*)0,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{(void*)0,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377}},{{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{(void*)0,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,(void*)0},{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377}},{{(void*)0,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{(void*)0,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,(void*)0},{&l_2377,(void*)0},{&l_2377,&l_2377}},{{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{(void*)0,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{(void*)0,&l_2377},{&l_2377,&l_2377},{&l_2377,&l_2377},{&l_2377,(void*)0}}};
                int32_t *l_2469[10][10][2] = {{{&g_1730[8],&l_1561},{(void*)0,&l_1387},{&l_1561,&l_1561},{&l_2383,&g_1730[8]},{&l_2384,&l_1387},{&l_1387,&l_2384},{&g_1730[8],&l_2383},{&l_1561,&l_1561},{&l_1387,(void*)0},{&l_1561,&g_1730[8]}},{{&l_1383,&g_1730[8]},{&l_1561,(void*)0},{&l_1387,&l_1561},{&l_1561,&l_2383},{&g_1730[8],&l_2384},{&l_1387,&l_1387},{&l_2384,&g_1730[8]},{&l_2383,&l_1561},{&l_1561,&l_1387},{(void*)0,&l_1561}},{{&g_1730[8],&l_1383},{&g_1730[8],&l_1561},{(void*)0,&l_1387},{&l_1561,&l_1561},{&l_2383,&g_1730[8]},{&g_1730[5],&g_1730[3]},{&g_1730[3],&g_1730[5]},{&l_2384,&l_2385[1]},{&l_2417,&l_1383},{&g_1730[3],&g_1730[3]}},{{&l_1383,&l_2384},{&l_2383,&l_2384},{&l_1383,&g_1730[3]},{&g_1730[3],&l_1383},{&l_2417,&l_2385[1]},{&l_2384,&g_1730[5]},{&g_1730[3],&g_1730[3]},{&g_1730[5],&l_2384},{&l_2385[1],&l_2417},{&l_1383,&g_1730[3]}},{{&g_1730[3],&l_1383},{&l_2384,&l_2383},{&l_2384,&l_1383},{&g_1730[3],&g_1730[3]},{&l_1383,&l_2417},{&l_2385[1],&l_2384},{&g_1730[5],&g_1730[3]},{&g_1730[3],&g_1730[5]},{&l_2384,&l_2385[1]},{&l_2417,&l_1383}},{{&g_1730[3],&g_1730[3]},{&l_1383,&l_2384},{&l_2383,&l_2384},{&l_1383,&g_1730[3]},{&g_1730[3],&l_1383},{&l_2417,&l_2385[1]},{&l_2384,&g_1730[5]},{&g_1730[3],&g_1730[3]},{&g_1730[5],&l_2384},{&l_2385[1],&l_2417}},{{&l_1383,&g_1730[3]},{&g_1730[3],&l_1383},{&l_2384,&l_2383},{&l_2384,&l_1383},{&g_1730[3],&g_1730[3]},{&l_1383,&l_2417},{&l_2385[1],&l_2384},{&g_1730[5],&g_1730[3]},{&g_1730[3],&g_1730[5]},{&l_2384,&l_2385[1]}},{{&l_2417,&l_1383},{&g_1730[3],&g_1730[3]},{&l_1383,&l_2384},{&l_2383,&l_2384},{&l_1383,&g_1730[3]},{&g_1730[3],&l_1383},{&l_2417,&l_2385[1]},{&l_2384,&g_1730[5]},{&g_1730[3],&g_1730[3]},{&g_1730[5],&l_2384}},{{&l_2385[1],&l_2417},{&l_1383,&g_1730[3]},{&g_1730[3],&l_1383},{&l_2384,&l_2383},{&l_2384,&l_1383},{&g_1730[3],&g_1730[3]},{&l_1383,&l_2417},{&l_2385[1],&l_2384},{&g_1730[5],&g_1730[3]},{&g_1730[3],&g_1730[5]}},{{&l_2384,&l_2385[1]},{&l_2417,&l_1383},{&g_1730[3],&g_1730[3]},{&l_1383,&l_2384},{&l_2383,&l_2384},{&l_1383,&g_1730[3]},{&g_1730[3],&l_1383},{&l_2417,&l_2385[1]},{&l_2384,&g_1730[5]},{&g_1730[3],&g_1730[3]}}};
                int i, j, k;
                --l_2435;
            }
            ++l_2510;
        }
        else
        {
            uint32_t l_2521 = 0xB1E5A7C2L;
            int8_t l_2539 = 0xB8L;
            int32_t *****l_2548[1];
            uint32_t l_2549 = 0UL;
            int64_t l_2579 = (-1L);
            int32_t *****l_2604 = &l_2212;
            int i;
            for (i = 0; i < 1; i++)
                l_2548[i] = &g_1964[1][3];
            if (((((*l_1476) = ((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((*l_2332), 0L)), (safe_lshift_func_uint8_t_u_u(((**l_2060) = (safe_mod_func_uint32_t_u_u((l_2521--), g_215))), 3)))) , (((*l_2332) > (safe_mod_func_uint8_t_u_u((l_2526 || (+(l_2521 || ((!(((*l_2332) >= (((**g_1381) = p_48) >= ((safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(((*g_313) = (safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(p_48, 0x71L)), p_48))), l_2521)), p_48)) & (*l_2332)))) || 0x4DL)) & l_2539)))), 253UL))) , (*l_2332)))) , (-2L)) > 0xF03A08492B212808LL))
            {
                const uint16_t *l_2540[8] = {&g_1385[1],&l_2501,&g_1385[1],&l_2501,&g_1385[1],&l_2501,&g_1385[1],&l_2501};
                int i;
                if (l_2539)
                    break;
                return (**g_1819);
            }
            else
            {
                uint32_t *l_2566[2][4][2] = {{{&g_1317,&l_2288},{&g_1317,&g_1317},{&l_2288,&g_1317},{&g_1317,&l_2288}},{{&g_1317,&g_1317},{&l_2288,&g_1317},{&g_1317,&l_2288},{&g_1317,&g_1317}}};
                int32_t l_2567 = 0x867E601EL;
                int32_t l_2568 = 0xDFC673C5L;
                int32_t *** const * const * const l_2602 = &g_2570;
                int32_t *****l_2603 = &l_2212;
                int i, j, k;
                for (g_2032 = 0; g_2032 < 10; g_2032 += 1)
                {
                    l_2385[g_2032] = (-1L);
                }
                for (l_1383 = (-2); (l_1383 >= 9); l_1383 = safe_add_func_uint64_t_u_u(l_1383, 7))
                {
                    uint16_t l_2585[2];
                    int32_t l_2587 = 9L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2585[i] = 0x255AL;
                    for (l_2498 = 0; (l_2498 < (-21)); l_2498--)
                    {
                        uint16_t l_2545 = 65535UL;
                        int32_t l_2561 = 9L;
                        if (l_2521)
                            break;
                        (*l_2332) = l_2545;
                        g_2569 = ((((l_2548[0] == (l_2549 , &g_1964[1][3])) > ((g_1317 = (safe_add_func_int32_t_s_s(((safe_div_func_uint32_t_u_u(((((void*)0 != g_2556) < (l_2567 = ((safe_mul_func_uint16_t_u_u(((**g_235) = (safe_sub_func_int16_t_s_s(1L, ((l_2561 = p_48) >= (safe_lshift_func_int8_t_s_s(((((safe_mod_func_int64_t_s_s((l_2332 != l_2566[1][2][1]), 0x68F8804C8695750DLL)) || p_48) >= 0x67L) , 0L), 0)))))), 0xB7ECL)) > p_48))) & (**g_674)), l_2545)) , 0xC36D1E5FL), l_2568))) > 0x9D1D5172L)) || (-1L)) , g_2569);
                    }
                    if (p_48)
                        continue;
                    for (l_2549 = 0; (l_2549 == 50); l_2549++)
                    {
                        uint8_t ***l_2584 = &l_2060;
                        int32_t l_2586 = (-3L);
                        l_2587 = (safe_sub_func_int32_t_s_s(p_48, (l_2567 |= (p_48 > ((g_952 , (void*)0) != (((((**l_2053) = (safe_sub_func_int32_t_s_s((((*p_47) , ((((safe_div_func_int32_t_s_s(l_2579, (+(safe_lshift_func_uint16_t_u_u((((&l_2568 != ((safe_unary_minus_func_uint32_t_u(((((void*)0 != l_2584) | 0x03796D13B3C09FD7LL) && 0xB417EADFE59A755CLL))) , (void*)0)) , l_2568) || (-5L)), 9))))) , l_2585[1]) != l_2586) ^ 0x38L)) & (*p_46)), p_48))) >= (*g_236)) & p_48) , (*g_2483)))))));
                        l_2508 = (((p_48 & (((((((*l_1364) = ((*l_1384) = ((***g_1819) = ((safe_add_func_uint16_t_u_u((0x1EC4C40DL | (safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((l_2587 = (l_2585[1] ^ (safe_div_func_int16_t_s_s(((l_2586 > (((l_2585[1] && (*g_324)) >= p_48) , ((safe_sub_func_int32_t_s_s(((*l_2332) |= ((*g_2015) = p_48)), (g_952 = (0UL ^ p_48)))) >= p_48))) && l_2586), p_48)))) , p_48) , l_2568), l_2586)), p_48))), (*g_236))) ^ (*g_675))))) || 2L) & 0xD2L) , p_48) & p_48) == 0xCB1D23E2L)) , g_2164) || p_48);
                    }
                    (*l_2332) ^= (l_2602 != (l_2604 = l_2603));
                }
            }
        }
        if (p_48)
            continue;
        for (g_126 = 15; (g_126 != 9); g_126 = safe_sub_func_int8_t_s_s(g_126, 6))
        {
            uint32_t l_2607 = 0x859FEF41L;
            uint32_t *l_2611 = &g_952;
            int32_t *l_2614 = &l_2434;
            --l_2607;
            l_2614 = (((&g_1974 != (g_2610 = (void*)0)) >= ((*l_2611)++)) , l_2611);
        }
    }
    return p_47;
}







static uint16_t * func_49(int32_t * p_50, uint16_t * p_51, uint32_t p_52, uint32_t p_53, const uint32_t p_54)
{
    uint64_t l_1273[2][7][2] = {{{1UL,18446744073709551606UL},{18446744073709551615UL,18446744073709551606UL},{0xEA1AA4F3ADE95FE3LL,0xB52060F8CCC02CF6LL},{0xB52060F8CCC02CF6LL,0xB52060F8CCC02CF6LL},{0xEA1AA4F3ADE95FE3LL,18446744073709551606UL},{18446744073709551615UL,18446744073709551606UL},{1UL,0xEA1AA4F3ADE95FE3LL}},{{0x4768A2C964DD58AFLL,1UL},{0UL,0UL},{18446744073709551606UL,1UL},{18446744073709551615UL,0xB52060F8CCC02CF6LL},{1UL,0x4768A2C964DD58AFLL},{0UL,0xEA1AA4F3ADE95FE3LL},{0xB52060F8CCC02CF6LL,0UL}}};
    uint16_t *l_1287 = &g_24;
    int32_t **l_1290 = &g_324;
    int16_t *** const l_1314 = &g_1143;
    int32_t l_1324[6][8][3] = {{{0xF03A3EE5L,(-1L),0x40EAC7D5L},{1L,0xBFF03358L,0L},{(-3L),(-1L),0x43E02F1FL},{9L,0x2FB4304DL,1L},{0x4C7CD402L,0xA65BBF44L,0xF77A9471L},{0xFFEC60B7L,1L,0xFFEC60B7L},{(-10L),0xF03A3EE5L,0x79923016L},{0x5224759EL,0x6C2E4775L,(-1L)}},{{0L,0x40EAC7D5L,(-1L)},{0x6C2E4775L,0L,9L},{0L,0x43E02F1FL,(-7L)},{0x5224759EL,1L,1L},{(-10L),0xF77A9471L,(-3L)},{0xFFEC60B7L,0xFFEC60B7L,2L},{0x4C7CD402L,0x79923016L,(-9L)},{9L,(-1L),0xC4396335L}},{{(-3L),(-1L),0L},{1L,9L,0xC4396335L},{0xF03A3EE5L,(-7L),(-9L)},{6L,1L,2L},{1L,(-3L),(-3L)},{(-1L),2L,1L},{7L,(-9L),(-7L)},{1L,0xC4396335L,9L}},{{0x79923016L,0L,(-1L)},{1L,0xC4396335L,(-1L)},{0x40EAC7D5L,(-9L),0x79923016L},{0x25B244E0L,2L,0xFFEC60B7L},{0xF77A9471L,(-3L),0xF77A9471L},{1L,1L,1L},{0xEABCEFF8L,(-7L),0x43E02F1FL},{0x4CF9C43CL,9L,0L}},{{(-7L),(-1L),0x40EAC7D5L},{0x4CF9C43CL,(-1L),0x6C2E4775L},{0xEABCEFF8L,0x79923016L,0xF03A3EE5L},{1L,0xFFEC60B7L,1L},{0xF77A9471L,0xF77A9471L,0xA65BBF44L},{0x25B244E0L,1L,0x2FB4304DL},{0x40EAC7D5L,0x43E02F1FL,(-1L)},{1L,0L,0xBFF03358L}},{{0x79923016L,0x40EAC7D5L,(-1L)},{1L,0x6C2E4775L,0x2FB4304DL},{7L,0xF03A3EE5L,0xA65BBF44L},{(-1L),1L,1L},{1L,0xA65BBF44L,0xF03A3EE5L},{6L,0x2FB4304DL,0x6C2E4775L},{0xF03A3EE5L,(-1L),0x40EAC7D5L},{1L,0xBFF03358L,0L}}};
    uint64_t l_1326 = 0xD46BBC75A52E150ALL;
    int i, j, k;
    if ((*p_50))
    {
        int8_t l_1316 = 0L;
lbl_1285:
        l_1273[1][0][1] |= (*g_324);
        for (g_114 = 0; (g_114 <= 21); g_114 = safe_add_func_int64_t_s_s(g_114, 1))
        {
            int8_t l_1295 = 0xAEL;
            for (g_343 = 0; (g_343 == 9); g_343++)
            {
                const int32_t *l_1279 = &g_5;
                const int32_t **l_1278 = &l_1279;
                (*l_1278) = (void*)0;
                (*l_1278) = p_50;
            }
            for (g_782 = 0; (g_782 == 23); ++g_782)
            {
                int32_t *l_1282 = &g_87[6];
                l_1282 = (p_50 = p_50);
                for (g_631 = (-3); (g_631 <= (-10)); --g_631)
                {
                    int32_t **l_1286 = &g_324;
                    for (g_320 = 0; (g_320 <= 0); g_320 += 1)
                    {
                        if (g_631)
                            goto lbl_1285;
                    }
                    (*l_1286) = p_50;
                    return l_1287;
                }
                (*g_324) = (0x0288L | ((***g_1142) = (*g_313)));
            }
            for (g_851 = 1; (g_851 <= 6); g_851 += 1)
            {
                int8_t l_1315 = 0x18L;
                int32_t *l_1321[2][2];
                int32_t *l_1322 = &g_87[4];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1321[i][j] = &g_87[4];
                }
                if (((*g_324) |= 0x265DBB00L))
                {
                    uint32_t *l_1302 = &g_565;
                    int16_t *l_1303 = &g_1157;
                    int32_t l_1304 = 0L;
                    l_1304 |= ((safe_rshift_func_uint16_t_u_s(((void*)0 == l_1290), ((*l_1303) |= ((**l_1290) | (((safe_div_func_uint16_t_u_u((252UL < ((***g_1142) >= (~(g_1294[2] , (l_1295 >= (safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((l_1295 > ((*l_1302) = 0xA3BCAEB8L)) | (**g_235)), p_54)), (*p_51))), (*p_51)))))))), (*g_236))) , g_635) ^ 0x60C7A838L))))) != 0xD3953ED0L);
                }
                else
                {
                    for (g_215 = 0; (g_215 <= 6); g_215 += 1)
                    {
                        (**l_1290) = (*p_50);
                    }
                    for (g_343 = 4; (g_343 >= 0); g_343 -= 1)
                    {
                        int16_t ****l_1311 = (void*)0;
                        int16_t ****l_1312 = (void*)0;
                        int16_t ****l_1313 = &g_1142;
                        int32_t l_1318 = (-2L);
                        int64_t *l_1319 = (void*)0;
                        int64_t *l_1320 = &g_526;
                        int i;
                        (**l_1290) = ((l_1295 , (safe_sub_func_int64_t_s_s(((*l_1320) = (safe_lshift_func_uint8_t_u_u(l_1295, ((((safe_mod_func_uint64_t_u_u((((*l_1313) = (void*)0) == l_1314), (**g_674))) >= l_1315) > (((l_1316 || ((g_676 , ((g_635 < g_1317) <= l_1318)) <= 0x83L)) & l_1315) && l_1295)) > 0x561B3E74FE409186LL)))), 18446744073709551615UL))) <= g_238[0][1][0]);
                    }
                    l_1322 = (l_1321[1][0] = (*l_1290));
                    return l_1287;
                }
            }
        }
    }
    else
    {
        int32_t *l_1323[1];
        int8_t l_1325 = 0x5AL;
        int i;
        for (i = 0; i < 1; i++)
            l_1323[i] = &g_87[9];
        ++l_1326;
    }
    for (g_782 = 0; (g_782 > 2); g_782 = safe_add_func_int64_t_s_s(g_782, 1))
    {
        uint16_t l_1340 = 0x836FL;
        int32_t l_1344[9] = {0x1A8EB149L,0x1A8EB149L,(-4L),0x1A8EB149L,0x1A8EB149L,(-4L),0x1A8EB149L,0x1A8EB149L,(-4L)};
        int32_t *l_1345 = &l_1344[4];
        uint64_t l_1346[10] = {0xE602F39DA1187A93LL,0xE602F39DA1187A93LL,0xE602F39DA1187A93LL,0xE602F39DA1187A93LL,0xE602F39DA1187A93LL,0xE602F39DA1187A93LL,0xE602F39DA1187A93LL,0xE602F39DA1187A93LL,0xE602F39DA1187A93LL,0xE602F39DA1187A93LL};
        int i;
        (*l_1345) = (((((((*g_235) = (*g_235)) == (void*)0) && ((((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((((safe_sub_func_uint64_t_u_u((((**l_1290) |= p_52) < ((4L > ((l_1340 &= ((+((*g_313) |= ((safe_add_func_int64_t_s_s(g_631, p_52)) , (-1L)))) || 0x11L)) > ((safe_div_func_uint16_t_u_u((*p_51), p_53)) , (*g_236)))) >= p_53)), 18446744073709551615UL)) & p_52) > g_1343), 1)), p_53)) > (*g_399)) , (**l_1290)) , (*p_50)) <= (*p_50)) & p_52)) & 0x6BF6FBB05F747B2BLL) , (**l_1290)) ^ l_1344[4]);
        if (l_1346[7])
            break;
    }
    return (*g_235);
}







static int8_t func_58(int16_t p_59, uint64_t p_60, uint16_t * p_61, int32_t p_62)
{
    int32_t l_67[5] = {(-6L),(-6L),(-6L),(-6L),(-6L)};
    int32_t l_1091 = 0x53947690L;
    int32_t l_1092 = 9L;
    int32_t l_1096 = 0xCC5B704AL;
    int32_t l_1097 = 0x5E2C387DL;
    int32_t l_1098 = (-1L);
    int32_t l_1099 = 0x40B49B98L;
    int16_t l_1100 = (-3L);
    int32_t l_1101 = 4L;
    int32_t l_1102 = 0xA9D206FAL;
    int32_t l_1103 = 1L;
    int32_t l_1104 = 0xA82A60F0L;
    int32_t l_1105 = 0x63A8D4D7L;
    int32_t l_1108 = 7L;
    int32_t l_1109[4];
    int64_t l_1110 = 2L;
    int16_t l_1111[5] = {0x8BFBL,0x8BFBL,0x8BFBL,0x8BFBL,0x8BFBL};
    int8_t **l_1120[7][4][9] = {{{(void*)0,(void*)0,&g_739,(void*)0,&g_739,&g_739,&g_739,(void*)0,(void*)0},{(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0},{(void*)0,(void*)0,&g_739,&g_739,(void*)0,(void*)0,&g_739,&g_739,(void*)0},{(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0}},{{(void*)0,&g_739,&g_739,(void*)0,(void*)0,&g_739,&g_739,(void*)0,(void*)0},{(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0},{(void*)0,(void*)0,&g_739,&g_739,(void*)0,(void*)0,&g_739,&g_739,(void*)0},{(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0}},{{(void*)0,&g_739,&g_739,(void*)0,(void*)0,&g_739,&g_739,(void*)0,(void*)0},{(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0},{(void*)0,(void*)0,&g_739,&g_739,(void*)0,(void*)0,&g_739,&g_739,(void*)0},{(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0}},{{(void*)0,&g_739,&g_739,(void*)0,(void*)0,&g_739,&g_739,(void*)0,(void*)0},{(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0},{(void*)0,(void*)0,&g_739,&g_739,(void*)0,(void*)0,&g_739,&g_739,(void*)0},{(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0}},{{(void*)0,&g_739,&g_739,(void*)0,(void*)0,&g_739,&g_739,(void*)0,(void*)0},{(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0},{(void*)0,(void*)0,&g_739,&g_739,(void*)0,(void*)0,&g_739,&g_739,(void*)0},{(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0}},{{(void*)0,&g_739,&g_739,(void*)0,(void*)0,&g_739,&g_739,(void*)0,(void*)0},{(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0,(void*)0,&g_739,(void*)0},{&g_739,(void*)0,(void*)0,(void*)0,(void*)0,&g_739,(void*)0,&g_739,&g_739},{&g_739,(void*)0,&g_739,&g_739,(void*)0,&g_739,&g_739,(void*)0,&g_739}},{{&g_739,&g_739,(void*)0,&g_739,(void*)0,(void*)0,(void*)0,(void*)0,&g_739},{(void*)0,(void*)0,(void*)0,&g_739,(void*)0,&g_739,(void*)0,(void*)0,(void*)0},{&g_739,(void*)0,(void*)0,(void*)0,(void*)0,&g_739,(void*)0,&g_739,&g_739},{&g_739,(void*)0,&g_739,&g_739,(void*)0,&g_739,&g_739,(void*)0,&g_739}}};
    int8_t ***l_1119 = &l_1120[4][1][0];
    int8_t ****l_1118 = &l_1119;
    int16_t **l_1140[5];
    int16_t ** const *l_1139 = &l_1140[2];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1109[i] = 0x94830E20L;
    for (i = 0; i < 5; i++)
        l_1140[i] = &g_313;
    for (p_59 = 4; (p_59 >= 1); p_59 -= 1)
    {
        uint8_t l_77 = 255UL;
        uint32_t l_86 = 7UL;
        uint16_t ***l_1090 = &g_235;
        int32_t *l_1093 = &l_1091;
        int32_t *l_1094 = &l_1091;
        int32_t *l_1095[2][6] = {{&g_87[3],&g_87[3],&g_87[3],&g_87[3],&g_87[3],&g_87[3]},{&g_87[3],&g_87[3],&g_87[3],&g_87[3],&g_87[3],&g_87[3]}};
        int16_t l_1106 = 0x1F33L;
        int64_t l_1107 = (-5L);
        uint8_t l_1112 = 0xF6L;
        uint64_t **l_1233 = (void*)0;
        int i, j;
    }
    return l_1097;
}







static uint16_t ** func_68(const int32_t p_69, int32_t * p_70)
{
    int8_t l_124 = 1L;
    int32_t l_125 = 0x81597F86L;
    int32_t l_130 = (-9L);
    int32_t l_132 = 9L;
    uint64_t l_134 = 0UL;
    uint16_t *l_167[2][1][5] = {{{&g_24,&g_24,&g_24,&g_24,&g_24}},{{&g_24,&g_24,&g_24,&g_24,&g_24}}};
    uint16_t **l_166 = &l_167[1][0][2];
    int32_t l_339 = 0x976BACE5L;
    const uint16_t *l_351 = &g_352;
    int16_t l_430 = 0xB689L;
    uint8_t l_481 = 255UL;
    int64_t l_584 = 0x88ED9C10AE0B7F6ALL;
    int32_t l_600 = 0xE8CCA5A0L;
    int32_t l_601 = 9L;
    int32_t l_602 = 0x5F647245L;
    int32_t l_603 = 0xC4773D66L;
    int32_t l_604 = (-9L);
    int32_t l_605 = 0x0D606F1CL;
    int32_t l_606[8];
    uint16_t l_608 = 0xA2E8L;
    int32_t *l_622 = (void*)0;
    uint32_t l_673 = 1UL;
    int8_t *l_737 = &g_238[8][0][0];
    int32_t *l_771[1][2];
    uint8_t l_818[9];
    int32_t ****l_846 = &g_384[5][1][1];
    int32_t *****l_845[2];
    int8_t ** const l_907 = &g_739;
    int8_t ** const *l_906 = &l_907;
    uint32_t l_953[8][2][7] = {{{0x0FC2522DL,0xF8EB0712L,0xB5BE479DL,1UL,1UL,0xB5BE479DL,0xF8EB0712L},{0x0FC2522DL,0x455159C7L,0x77A1F170L,0x88F65773L,0xC2B2BCFAL,0x568AE70DL,0x88F65773L}},{{0x50BC1107L,0UL,0UL,0x568AE70DL,0xFCCDD36EL,0x455159C7L,0UL},{0xFCCDD36EL,0x0FC2522DL,0xB5BE479DL,0x88F65773L,0UL,4UL,1UL}},{{1UL,0UL,0xC2B2BCFAL,1UL,0xC2B2BCFAL,0UL,1UL},{0x77A1F170L,0x7304C8CCL,0UL,0xC2B2BCFAL,1UL,0xC3881088L,0UL}},{{0x7304C8CCL,1UL,4UL,0xFCCDD36EL,0x0FC2522DL,0xB5BE479DL,0x88F65773L},{0UL,0UL,0UL,0UL,0x568AE70DL,0x50BC1107L,0xF8EB0712L}},{{0x50BC1107L,0x0954B488L,0xC2B2BCFAL,0xC2B2BCFAL,0x0954B488L,0x50BC1107L,0x455159C7L},{0x88F65773L,0xFCCDD36EL,0xB5BE479DL,1UL,0x7304C8CCL,0xB5BE479DL,0UL}},{{0x0954B488L,0x455159C7L,0UL,0x0FC2522DL,0xC2B2BCFAL,0xC3881088L,0x0FC2522DL},{0x50BC1107L,0xFCCDD36EL,0x77A1F170L,0x568AE70DL,0xF8EB0712L,0UL,0UL}},{{0xF8EB0712L,0x0954B488L,0xB5BE479DL,0x0954B488L,0xF8EB0712L,4UL,0x7304C8CCL},{1UL,0UL,0x568AE70DL,0x7304C8CCL,0xC2B2BCFAL,0x455159C7L,1UL}},{{0x77A1F170L,1UL,0x455159C7L,0xC2B2BCFAL,0x7304C8CCL,0x568AE70DL,0UL},{1UL,0x7304C8CCL,4UL,0xF8EB0712L,0x0954B488L,0xB5BE479DL,0x0954B488L}}};
    const int16_t l_973 = 0x0795L;
    const int32_t l_1053[3][10] = {{0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL},{0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL},{0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL,0xE00E0F9AL}};
    uint16_t **l_1089 = &l_167[1][0][2];
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_606[i] = 0L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_771[i][j] = &l_125;
    }
    for (i = 0; i < 9; i++)
        l_818[i] = 4UL;
    for (i = 0; i < 2; i++)
        l_845[i] = &l_846;
lbl_913:
    for (g_66 = 3; (g_66 <= 9); g_66 += 1)
    {
        int64_t l_88 = 1L;
        int32_t l_96 = 0L;
        int32_t l_97 = (-1L);
        int32_t l_98 = 0x842DFAD4L;
        uint16_t l_99 = 1UL;
        int32_t l_129 = 0x47B71623L;
        int32_t l_131[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
        uint16_t **l_137 = (void*)0;
        int8_t l_477 = (-1L);
        int i;
        for (g_24 = 0; (g_24 <= 9); g_24 += 1)
        {
            int32_t *l_89 = &g_87[1];
            int32_t *l_90 = &g_87[g_24];
            int32_t *l_91 = &g_87[g_24];
            int32_t *l_92 = &g_87[1];
            int32_t *l_93 = &g_87[8];
            int32_t *l_94 = &g_87[4];
            int32_t *l_95[5][2][3] = {{{&g_87[7],&g_6,&g_87[7]},{&g_3,&g_87[5],&g_87[5]}},{{&g_87[g_24],&g_6,&g_87[g_24]},{&g_3,&g_3,&g_87[5]}},{{&g_87[7],&g_6,&g_87[7]},{&g_3,&g_87[5],&g_87[5]}},{{&g_87[g_24],&g_6,&g_87[g_24]},{&g_3,&g_3,&g_87[5]}},{{&g_87[7],&g_6,&g_87[7]},{&g_3,&g_87[5],&g_87[5]}}};
            int i, j, k;
            ++l_99;
            for (l_88 = 9; (l_88 >= 1); l_88 -= 1)
            {
                int64_t *l_113 = &g_114;
                int i;
                (*l_94) = ((g_87[g_66] | g_87[g_66]) | ((~(g_87[g_66] < (safe_div_func_uint8_t_u_u((g_66 <= (p_70 == ((safe_add_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(g_5, ((&l_99 != ((safe_mul_func_uint8_t_u_u(((g_3 < ((*l_113) = (g_3 >= g_87[4]))) <= p_69), 253UL)) , (void*)0)) < g_5))) , l_98), g_5)) , (void*)0))), 0x0EL)))) == p_69));
                if (g_87[g_66])
                    break;
            }
        }
        for (l_98 = 0; (l_98 <= 9); l_98 += 1)
        {
            int32_t l_128[9][1];
            int16_t l_140[4] = {1L,1L,1L,1L};
            uint8_t l_185 = 246UL;
            uint8_t *l_383 = &l_185;
            int8_t *l_397 = (void*)0;
            int8_t * const *l_396 = &l_397;
            uint16_t l_407[4];
            int32_t **l_414 = (void*)0;
            const int64_t *l_458 = &l_88;
            uint16_t **l_529 = &l_167[1][0][2];
            int i, j;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 1; j++)
                    l_128[i][j] = 0x7F94F023L;
            }
            for (i = 0; i < 4; i++)
                l_407[i] = 0UL;
            if (g_87[l_98])
            {
                int64_t l_127 = 0xA50812B24AB74881LL;
                int32_t l_133 = 0xD5D31C88L;
                for (g_114 = (-12); (g_114 > (-21)); --g_114)
                {
                    int32_t *l_117 = (void*)0;
                    int32_t *l_118 = &l_97;
                    int32_t *l_119 = (void*)0;
                    int32_t *l_120 = &l_96;
                    int32_t *l_121 = &l_97;
                    int32_t *l_122 = &g_87[l_98];
                    int32_t *l_123[4] = {&g_3,&g_3,&g_3,&g_3};
                    int i;
                    --l_134;
                }
            }
            else
            {
                return l_137;
            }
        }
    }
    if ((0x75L >= l_339))
    {
        int16_t l_536 = (-4L);
        int16_t **l_548 = &g_313;
        const int16_t *l_551 = &l_536;
        const int16_t **l_550 = &l_551;
        int32_t *l_585 = &l_132;
        int32_t l_587 = (-7L);
        int32_t l_590 = (-1L);
        int32_t l_591 = 0xADAB816EL;
        int32_t l_592 = 0x4A1BEA8EL;
        int32_t l_597[7][4][8] = {{{3L,0xB586FE88L,1L,0x604D0B67L,0x604D0B67L,1L,0xB586FE88L,3L},{0xF78266FCL,0x604D0B67L,0xDF997FAAL,0x8DD80B66L,0x604D0B67L,0x8DD80B66L,0xDF997FAAL,0x604D0B67L},{3L,0xDF997FAAL,0xF78266FCL,3L,0x8DD80B66L,0x8DD80B66L,3L,0xF78266FCL},{0x604D0B67L,0x604D0B67L,1L,0xB586FE88L,3L,1L,3L,0xB586FE88L}},{{0xF78266FCL,0xB586FE88L,0xF78266FCL,0x8DD80B66L,0xB586FE88L,0xDF997FAAL,0xDF997FAAL,0xB586FE88L},{0xB586FE88L,0xDF997FAAL,0xDF997FAAL,0xB586FE88L,0x8DD80B66L,0xF78266FCL,0xB586FE88L,0xF78266FCL},{0xB586FE88L,3L,1L,3L,0xB586FE88L,1L,0x604D0B67L,0x604D0B67L},{0xF78266FCL,3L,0x8DD80B66L,0x8DD80B66L,3L,0xF78266FCL,0xDF997FAAL,3L}},{{0x604D0B67L,0xDF997FAAL,0x8DD80B66L,0x604D0B67L,0x8DD80B66L,0xDF997FAAL,0x604D0B67L,0xF78266FCL},{3L,0xB586FE88L,1L,0x604D0B67L,0x604D0B67L,1L,0xB586FE88L,3L},{0xF78266FCL,0x604D0B67L,0xDF997FAAL,0x8DD80B66L,0x604D0B67L,0x8DD80B66L,0xDF997FAAL,0x604D0B67L},{3L,0xDF997FAAL,0xF78266FCL,3L,0x8DD80B66L,0x8DD80B66L,3L,0xF78266FCL}},{{0x604D0B67L,0x604D0B67L,1L,0xB586FE88L,3L,1L,3L,0xB586FE88L},{0xF78266FCL,0xB586FE88L,0xF78266FCL,0x8DD80B66L,0xB586FE88L,0xDF997FAAL,0xDF997FAAL,0xB586FE88L},{0xB586FE88L,0xDF997FAAL,0xDF997FAAL,0xDF997FAAL,(-6L),0x87798425L,0xDF997FAAL,0x87798425L},{0xDF997FAAL,0x8DD80B66L,0x604D0B67L,0x8DD80B66L,0xDF997FAAL,0x604D0B67L,0xF78266FCL,0xF78266FCL}},{{0x87798425L,0x8DD80B66L,(-6L),(-6L),0x8DD80B66L,0x87798425L,1L,0x8DD80B66L},{0xF78266FCL,1L,(-6L),0xF78266FCL,(-6L),1L,0xF78266FCL,0x87798425L},{0x8DD80B66L,0xDF997FAAL,0x604D0B67L,0xF78266FCL,0xF78266FCL,0x604D0B67L,0xDF997FAAL,0x8DD80B66L},{0x87798425L,0xF78266FCL,1L,(-6L),0xF78266FCL,(-6L),1L,0xF78266FCL}},{{0x8DD80B66L,1L,0x87798425L,0x8DD80B66L,(-6L),(-6L),0x8DD80B66L,0x87798425L},{0xF78266FCL,0xF78266FCL,0x604D0B67L,0xDF997FAAL,0x8DD80B66L,0x604D0B67L,0x8DD80B66L,0xDF997FAAL},{0x87798425L,0xDF997FAAL,0x87798425L,(-6L),0xDF997FAAL,1L,1L,0xDF997FAAL},{0xDF997FAAL,1L,1L,0xDF997FAAL,(-6L),0x87798425L,0xDF997FAAL,0x87798425L}},{{0xDF997FAAL,0x8DD80B66L,0x604D0B67L,0x8DD80B66L,0xDF997FAAL,0x604D0B67L,0xF78266FCL,0xF78266FCL},{0x87798425L,0x8DD80B66L,(-6L),(-6L),0x8DD80B66L,0x87798425L,1L,0x8DD80B66L},{0xF78266FCL,1L,(-6L),0xF78266FCL,(-6L),1L,0xF78266FCL,0x87798425L},{0x8DD80B66L,0xDF997FAAL,0x604D0B67L,0xF78266FCL,0xF78266FCL,0x604D0B67L,0xDF997FAAL,0x8DD80B66L}}};
        uint8_t l_629 = 8UL;
        uint32_t *l_705 = &g_565;
        int64_t l_836 = 2L;
        int i, j, k;
        (*g_324) = ((((0x59L ^ 0UL) != (safe_add_func_uint8_t_u_u(((void*)0 != (*g_235)), (safe_add_func_uint32_t_u_u(g_352, (((**g_235) >= (((0xB1B4A5D6L & ((safe_mul_func_uint8_t_u_u((((l_130 , &g_313) == (void*)0) && p_69), 0x24L)) , (*p_70))) , l_481) , 0x49EFL)) , g_126)))))) <= g_314[5][0]) > (-1L));
        if (l_536)
        {
            int64_t l_537 = (-1L);
            int16_t ***l_549 = &l_548;
            const int16_t ***l_552 = &l_550;
            uint16_t *l_554 = (void*)0;
            int64_t *l_561 = &l_537;
            int32_t l_562 = (-1L);
            uint32_t *l_563 = &g_171;
            uint32_t *l_564 = &g_565;
            int32_t l_593 = 0x29B4FE45L;
            int32_t l_594 = 4L;
            int32_t l_595 = 0x616DDCFAL;
            int32_t l_596 = (-1L);
            int32_t l_598[5][8][3] = {{{0xA0CDD81BL,1L,0L},{0xA0CDD81BL,1L,(-1L)},{0xA0CDD81BL,(-6L),0xA0CDD81BL},{0xA0CDD81BL,1L,0L},{0xA0CDD81BL,1L,(-1L)},{0xA0CDD81BL,(-6L),0xA0CDD81BL},{0xA0CDD81BL,1L,0L},{0xA0CDD81BL,1L,(-1L)}},{{0xA0CDD81BL,(-6L),0xA0CDD81BL},{0xA0CDD81BL,1L,0L},{0xA0CDD81BL,1L,(-1L)},{0xA0CDD81BL,(-6L),0xA0CDD81BL},{0xA0CDD81BL,1L,0L},{0xA0CDD81BL,1L,(-1L)},{0xA0CDD81BL,(-6L),0xA0CDD81BL},{0xA0CDD81BL,1L,0L}},{{0xA0CDD81BL,1L,(-1L)},{0xA0CDD81BL,(-6L),0xA0CDD81BL},{0xA0CDD81BL,1L,0L},{0xA0CDD81BL,1L,(-1L)},{0xA0CDD81BL,(-6L),0xA0CDD81BL},{0xA0CDD81BL,1L,0L},{0xA0CDD81BL,1L,(-1L)},{0xA0CDD81BL,(-6L),0xA0CDD81BL}},{{0xA0CDD81BL,1L,0L},{0xA0CDD81BL,1L,(-1L)},{0xA0CDD81BL,(-6L),0xA0CDD81BL},{0xA0CDD81BL,0xA0CDD81BL,0x450111DEL},{0L,(-1L),0xCB0F2803L},{0L,0L,0L},{0L,0xA0CDD81BL,0x450111DEL},{0L,(-1L),0xCB0F2803L}},{{0L,0L,0L},{0L,0xA0CDD81BL,0x450111DEL},{0L,(-1L),0xCB0F2803L},{0L,0L,0L},{0L,0xA0CDD81BL,0x450111DEL},{0L,(-1L),0xCB0F2803L},{0L,0L,0L},{0L,0xA0CDD81BL,0x450111DEL}}};
            int32_t l_599 = 0xB82901C6L;
            int i, j, k;
            if (((l_537 || 0x92FFL) , (safe_div_func_int64_t_s_s((safe_mod_func_int32_t_s_s((*g_324), (safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s((((*l_549) = l_548) != ((*l_552) = l_550)), ((*l_564) = ((*l_563) |= (!(((p_69 & ((l_554 != ((safe_sub_func_uint16_t_u_u(((**l_166) = ((safe_sub_func_int64_t_s_s(((*l_561) = (safe_sub_func_int16_t_s_s(p_69, 65535UL))), g_215)) >= l_481)), p_69)) , (*l_166))) == (-9L))) != g_169[6][0]) == l_562)))))), (-7L))) > 1UL), l_562)))), (-3L)))))
            {
                uint32_t l_580 = 0xC4AD845DL;
                uint8_t *l_581 = (void*)0;
                uint8_t *l_582 = &g_66;
                (*g_324) = 0x54643836L;
                (*g_324) ^= (g_314[2][1] , (0x6DL ^ (safe_sub_func_uint32_t_u_u(((p_69 , (((l_584 = (((**l_548) = (safe_div_func_uint64_t_u_u(((safe_add_func_int8_t_s_s((-1L), ((*l_582) = ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(l_134, 13)), (((((((safe_sub_func_int64_t_s_s(0L, ((safe_add_func_uint8_t_u_u((l_562 = ((0x58335E80L <= ((*g_313) | ((**g_235) > 4UL))) || l_580)), (-1L))) || 8L))) | p_69) , l_580) & l_537) , 0xF35BL) <= 1L) != 0UL))) & p_69)))) && l_580), 1L))) & g_583)) ^ l_580) | 7UL)) , 0xA059E880L), g_171))));
                l_585 = &l_132;
            }
            else
            {
                int32_t *l_586 = (void*)0;
                int32_t *l_588 = (void*)0;
                int32_t *l_589[10] = {&l_587,&l_587,&l_587,&l_587,&l_587,&l_587,&l_587,&l_587,&l_587,&l_587};
                int16_t l_607 = 0x436BL;
                int i;
                ++l_608;
            }
            for (l_591 = (-25); (l_591 <= 5); ++l_591)
            {
                uint32_t l_613 = 4294967295UL;
                int32_t *l_623 = &g_215;
                uint8_t *l_624 = &g_583;
                const uint32_t l_630 = 5UL;
                int32_t l_632 = (-1L);
                uint64_t *l_633 = (void*)0;
                uint64_t *l_634[2][3];
                uint16_t *l_667 = &l_608;
                int32_t l_685[8][5][6] = {{{2L,0xF1FD7BD9L,0L,0xF1FD7BD9L,2L,(-1L)},{(-7L),0x0FB86DCCL,0L,0xAC6E9351L,0xF1FD7BD9L,(-6L)},{(-6L),0xA5516544L,0x0FB86DCCL,0x0FB86DCCL,0xA5516544L,(-6L)},{0xAC6E9351L,(-6L),0L,2L,(-6L),(-1L)},{0xA5516544L,(-7L),0L,(-6L),0L,(-7L)}},{{0xA5516544L,(-1L),(-6L),2L,0L,(-6L)},{0xAC6E9351L,(-6L),0xA5516544L,0x0FB86DCCL,0x0FB86DCCL,0xA5516544L},{(-6L),(-6L),0xF1FD7BD9L,0xAC6E9351L,0L,0x0FB86DCCL},{(-7L),(-1L),2L,0xF1FD7BD9L,0L,0xF1FD7BD9L},{2L,(-7L),2L,(-6L),(-6L),0x0FB86DCCL}},{{(-9L),(-6L),0xF1FD7BD9L,0x9A11BDA3L,0xA5516544L,0xA5516544L},{0x9A11BDA3L,0xA5516544L,0xA5516544L,0x9A11BDA3L,0xF1FD7BD9L,(-6L)},{(-9L),0x0FB86DCCL,(-6L),(-6L),2L,(-7L)},{2L,0xF1FD7BD9L,0L,0xF1FD7BD9L,2L,(-1L)},{(-7L),0x0FB86DCCL,0L,0xAC6E9351L,0xF1FD7BD9L,(-6L)}},{{(-6L),0xA5516544L,0x0FB86DCCL,0x0FB86DCCL,0xA5516544L,(-6L)},{0xAC6E9351L,(-6L),0L,2L,(-6L),(-1L)},{0xA5516544L,(-7L),0L,(-6L),0L,(-7L)},{0xA5516544L,(-1L),(-6L),2L,0L,(-6L)},{0xAC6E9351L,(-6L),0xA5516544L,0x0FB86DCCL,0x0FB86DCCL,0xA5516544L}},{{(-6L),(-6L),0xF1FD7BD9L,0xAC6E9351L,0L,0x0FB86DCCL},{(-7L),(-1L),2L,0xF1FD7BD9L,0L,0xF1FD7BD9L},{2L,(-7L),2L,(-6L),(-6L),0x0FB86DCCL},{(-9L),(-6L),0xF1FD7BD9L,0x9A11BDA3L,0x9A11BDA3L,0x9A11BDA3L},{(-6L),0x9A11BDA3L,0x9A11BDA3L,(-6L),(-7L),(-1L)}},{{2L,0xA5516544L,0xF1FD7BD9L,(-1L),0x0FB86DCCL,0xAC6E9351L},{0x0FB86DCCL,(-7L),(-9L),(-7L),0x0FB86DCCL,0L},{0xAC6E9351L,0xA5516544L,0L,(-6L),(-7L),0xF1FD7BD9L},{0xF1FD7BD9L,0x9A11BDA3L,0xA5516544L,0xA5516544L,0x9A11BDA3L,0xF1FD7BD9L},{(-6L),(-1L),0L,0x0FB86DCCL,0xF1FD7BD9L,0L}},{{0x9A11BDA3L,0xAC6E9351L,(-9L),0xF1FD7BD9L,(-9L),0xAC6E9351L},{0x9A11BDA3L,0L,0xF1FD7BD9L,0x0FB86DCCL,0L,(-1L)},{(-6L),0xF1FD7BD9L,0x9A11BDA3L,0xA5516544L,0xA5516544L,0x9A11BDA3L},{0xF1FD7BD9L,0xF1FD7BD9L,(-7L),(-6L),0L,0xA5516544L},{0xAC6E9351L,0L,0x0FB86DCCL,(-7L),(-9L),(-7L)}},{{0x0FB86DCCL,0xAC6E9351L,0x0FB86DCCL,(-1L),0xF1FD7BD9L,0xA5516544L},{2L,(-1L),(-7L),(-6L),0x9A11BDA3L,0x9A11BDA3L},{(-6L),0x9A11BDA3L,0x9A11BDA3L,(-6L),(-7L),(-1L)},{2L,0xA5516544L,0xF1FD7BD9L,(-1L),0x0FB86DCCL,0xAC6E9351L},{0x0FB86DCCL,(-7L),(-9L),(-7L),0x0FB86DCCL,0L}}};
                uint16_t l_687 = 65534UL;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_634[i][j] = &l_134;
                }
                l_613++;
            }
        }
        else
        {
            uint32_t l_718 = 18446744073709551614UL;
            int32_t l_743 = (-2L);
            int32_t l_744 = 0L;
            int32_t l_747 = 0x63914B0FL;
            int32_t l_749 = 0x4A7000C2L;
            int32_t l_752 = 0x53E9934FL;
            uint16_t l_778 = 0xCD9CL;
            uint16_t **l_797[2];
            int32_t * const *l_812 = (void*)0;
            int32_t * const **l_811 = &l_812;
            int32_t * const ***l_810 = &l_811;
            int32_t *l_852 = &l_749;
            uint16_t l_873 = 1UL;
            uint8_t l_874 = 0x92L;
            int i;
            for (i = 0; i < 2; i++)
                l_797[i] = &l_167[0][0][1];
lbl_724:
            (*l_585) = ((g_343 < (*g_675)) >= (!p_69));
            if ((((**l_548) = (safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((((*g_324) = (*p_70)) , (safe_mod_func_int64_t_s_s((safe_sub_func_int8_t_s_s((g_126 , 0x58L), (&g_320 != &l_629))), p_69))), (safe_mod_func_uint64_t_u_u(((*g_675) ^= ((void*)0 == l_705)), l_584)))) || p_69), l_132)), p_69))) != 65530UL))
            {
                int64_t l_715 = 0xFB34E902B777E0E0LL;
                int32_t l_716 = 0xB1658F19L;
                int32_t l_717 = (-8L);
                int8_t *l_740 = &g_126;
                int32_t l_745 = (-1L);
                int32_t l_746 = 0L;
                int32_t l_750 = 0L;
                int32_t *** const * const l_770 = &g_384[5][5][1];
lbl_781:
                for (l_592 = 0; (l_592 > 8); l_592 = safe_add_func_int32_t_s_s(l_592, 6))
                {
                    int32_t *l_708 = &l_597[3][1][1];
                    int32_t *l_709 = &l_130;
                    int32_t *l_710 = (void*)0;
                    int32_t *l_711 = &g_87[1];
                    int32_t *l_712 = &l_602;
                    int32_t l_713[7] = {0xE4C57AE4L,0xE4C57AE4L,0xE4C57AE4L,0xE4C57AE4L,0xE4C57AE4L,0xE4C57AE4L,0xE4C57AE4L};
                    int32_t *l_714[6][6][5] = {{{(void*)0,(void*)0,&l_130,(void*)0,(void*)0},{&l_713[3],(void*)0,&g_3,(void*)0,&l_713[3]},{&l_130,&l_606[6],(void*)0,(void*)0,&l_606[6]},{&l_713[3],&g_6,&g_6,&l_713[3],&l_125},{(void*)0,&l_713[2],&l_606[6],&l_606[6],&l_606[6]},{(void*)0,&l_713[3],(void*)0,&l_125,&l_713[3]}},{{&l_606[6],(void*)0,(void*)0,&l_606[6],(void*)0},{(void*)0,(void*)0,&g_3,&l_713[3],(void*)0},{&l_130,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_6,(void*)0,(void*)0,&l_125},{&l_713[2],(void*)0,&l_606[6],(void*)0,&l_713[2]},{(void*)0,(void*)0,&g_6,&l_125,(void*)0}},{{&l_713[2],(void*)0,(void*)0,&l_713[2],(void*)0},{(void*)0,&l_713[3],&g_3,(void*)0,(void*)0},{&l_130,&l_713[2],&l_130,(void*)0,&l_713[2]},{(void*)0,&g_6,&l_125,(void*)0,&l_125},{&l_606[6],&l_606[6],&l_606[6],&l_713[2],(void*)0},{(void*)0,&l_125,&l_603,&l_603,&l_125}},{{(void*)0,&l_606[6],&l_597[0][2][2],(void*)0,&l_606[6]},{&g_6,&l_125,(void*)0,&l_125,&g_6},{&l_597[0][2][2],&l_130,&l_606[6],&l_606[6],&l_130},{&g_6,&g_3,&g_3,&g_6,&l_603},{(void*)0,(void*)0,&l_606[6],&l_130,&l_130},{(void*)0,&g_6,(void*)0,&l_603,&g_6}},{{&l_130,&l_606[6],&l_606[6],&l_130,&l_606[6]},{(void*)0,(void*)0,(void*)0,&g_6,&l_125},{&l_597[0][2][2],(void*)0,&l_606[6],&l_606[6],(void*)0},{&l_125,&g_3,(void*)0,&l_125,&l_603},{(void*)0,(void*)0,&l_606[6],(void*)0,(void*)0},{(void*)0,(void*)0,&g_3,&l_603,(void*)0}},{{(void*)0,&l_606[6],&l_606[6],(void*)0,&l_606[6]},{&l_125,&g_6,(void*)0,(void*)0,(void*)0},{&l_597[0][2][2],(void*)0,&l_597[0][2][2],&l_606[6],(void*)0},{(void*)0,&g_3,&l_603,(void*)0,&l_603},{&l_130,&l_130,&l_606[6],(void*)0,(void*)0},{(void*)0,&l_125,&l_603,&l_603,&l_125}}};
                    int i, j, k;
                    --l_718;
                    for (g_126 = 0; (g_126 <= (-11)); g_126 = safe_sub_func_uint16_t_u_u(g_126, 8))
                    {
                        uint16_t l_723 = 0xFDE4L;
                        if (l_723)
                            break;
                        if (g_24)
                            goto lbl_724;
                    }
                }
                for (g_24 = 24; (g_24 != 52); g_24 = safe_add_func_int16_t_s_s(g_24, 7))
                {
                    int8_t **l_738[10];
                    int32_t l_742 = 8L;
                    int32_t l_748 = 0x67A73BD8L;
                    int32_t l_751 = 5L;
                    uint64_t l_753 = 18446744073709551609UL;
                    int64_t l_772 = 0xEA897067C71F62BDLL;
                    int32_t l_775 = 0xE165E5C0L;
                    int32_t l_777 = 0xAA1F5644L;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_738[i] = &l_737;
                    if ((((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((*g_313), ((--(*l_705)) && (safe_mod_func_uint8_t_u_u(((0x84FA2EB5DB887EBDLL > (g_5 , ((((g_739 = l_737) == l_740) & g_314[2][2]) | (((0x45FCL >= (**g_235)) ^ ((**g_674) , 8L)) && 0x9F462C4874B93110LL)))) != l_606[6]), p_69))))), p_69)), 0UL)) <= (**g_674)) < (*p_70)))
                    {
                        int32_t *l_741[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_741[i] = &l_604;
                        l_753++;
                        (*g_324) &= (safe_lshift_func_uint16_t_u_u((((*l_740) &= ((((0x6BL & (safe_mul_func_uint8_t_u_u((l_742 != (safe_div_func_uint8_t_u_u((g_66 && ((*l_585) = (safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((g_676 > (safe_rshift_func_uint16_t_u_s(((safe_mod_func_int64_t_s_s(((((g_169[0][0] = (l_770 != (void*)0)) , (((*g_675) , &g_565) != (void*)0)) , 0x62CB018B97B95EA7LL) < 0xC43CF75F39ECE86BLL), 18446744073709551615UL)) < p_69), l_749))) , p_69), p_69)), l_339)))), 0xE4L))), (*g_739)))) <= p_69) , p_69) , (*g_739))) || 0x4DL), (*g_236)));
                        l_771[0][1] = &l_597[0][2][7];
                    }
                    else
                    {
                        int64_t l_773 = (-1L);
                        int32_t l_774 = 0x15E01A74L;
                        int32_t l_776[6][7] = {{6L,0x7C30561FL,0x7C30561FL,6L,6L,0x7C30561FL,0x7C30561FL},{(-1L),0x4CE93C46L,(-1L),0x4CE93C46L,(-1L),0x4CE93C46L,(-1L)},{6L,6L,0x7C30561FL,0x7C30561FL,6L,6L,0x7C30561FL},{0xE9828E17L,0x4CE93C46L,0xE9828E17L,0x4CE93C46L,0xE9828E17L,0x4CE93C46L,0xE9828E17L},{6L,0x7C30561FL,0x7C30561FL,6L,6L,0x7C30561FL,0x7C30561FL},{(-1L),0x4CE93C46L,(-1L),0x4CE93C46L,(-1L),0x4CE93C46L,(-1L)}};
                        int i, j;
                        l_778++;
                        if (l_608)
                            goto lbl_781;
                        if (l_772)
                            break;
                        if (g_782)
                            continue;
                    }
                    for (g_782 = 0; (g_782 >= 47); g_782++)
                    {
                        uint16_t **l_798 = &l_167[1][0][2];
                        uint16_t ***l_799 = &g_235;
                        int32_t ****l_809 = (void*)0;
                        int32_t *****l_808 = &l_809;
                        int64_t l_817 = (-2L);
                        (*l_585) &= (7UL || ((((safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s(0x93FB6E4555E0358ELL, (safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s(p_69, g_169[6][0])), (safe_lshift_func_int16_t_s_s(((l_797[0] == ((*l_799) = l_798)) , ((safe_div_func_int64_t_s_s((safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u(((((((*l_808) = (void*)0) != (g_813 = l_810)) | (((**g_674) = ((*l_798) == (void*)0)) >= l_777)) & 6UL) & l_817), 5)) || (*p_70)) ^ l_818[1]), p_69)) ^ g_314[5][2]), p_69)), p_69)) < p_69)), 12)))))), p_69)) <= 0L) <= (*g_739)), 6)) && g_66) < p_69) && (*g_236)));
                    }
                }
            }
            else
            {
                uint8_t l_823 = 3UL;
                uint16_t ***l_826 = &g_235;
                int32_t l_827 = 0x961DD22BL;
                uint16_t l_828 = 0x7FA1L;
                if ((safe_div_func_uint64_t_u_u((p_69 < ((safe_mul_func_int8_t_s_s(p_69, ((p_69 && g_5) < (((l_823 , &l_797[0]) == &l_166) != ((l_827 = (safe_sub_func_uint64_t_u_u(((*g_675) ^= (0x46FDL | (&g_235 != l_826))), p_69))) || 4294967294UL))))) , l_828)), 0x5F008A195C235BA3LL)))
                {
                    for (l_584 = 0; (l_584 == 10); l_584 = safe_add_func_uint8_t_u_u(l_584, 5))
                    {
                        int32_t l_831 = 0x29AF865FL;
                        l_592 ^= ((*l_585) &= l_831);
                        return &g_236;
                    }
                }
                else
                {
                    int32_t *****l_847 = &l_846;
                    uint32_t *l_850 = &g_171;
                    uint16_t **l_853 = &g_236;
                    uint64_t *l_865 = &l_134;
                    if ((((0xADL >= (safe_lshift_func_uint8_t_u_u(((((safe_add_func_uint32_t_u_u((g_565 = ((((*g_313) || l_836) != (**g_674)) <= (p_69 || (*g_324)))), ((((safe_add_func_int16_t_s_s((!(safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((((!(l_845[0] == l_847)) || (safe_mod_func_uint32_t_u_u(((*l_850) = (0L && (*g_236))), 1UL))) , 0xBA8FL), g_851)), p_69))), p_69)) < g_66) , (*l_585)) > l_828))) == g_215) & (*g_313)) ^ g_851), 3))) , (**g_235)) != l_828))
                    {
                        l_852 = p_70;
                        return l_853;
                    }
                    else
                    {
                        p_70 = p_70;
                    }
                    (*g_324) = (((((+((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((safe_sub_func_int64_t_s_s(g_169[1][0], (safe_rshift_func_uint8_t_u_u(((((*g_675) == ((*l_865)++)) & (safe_rshift_func_uint8_t_u_s(g_6, p_69))) == (((safe_div_func_uint16_t_u_u((**g_235), ((g_526 = (safe_unary_minus_func_uint16_t_u((p_69 != ((&l_836 == (g_66 , &g_114)) >= 0L))))) && g_3))) , p_69) >= g_851)), p_69)))), (*g_313))), p_69)), l_873)) | 1UL)) > g_3) <= 0x16BA866DL) < (*g_313)) & l_874);
                }
                (*l_852) &= ((*g_324) |= (safe_add_func_uint64_t_u_u(0x33E89028D261F19ELL, (safe_lshift_func_int16_t_s_s((8L | g_879), 8)))));
            }
        }
    }
    else
    {
        const uint32_t l_880 = 0x3F5A94A5L;
        int32_t *l_887 = &g_87[3];
        int8_t *l_933 = &l_124;
        uint64_t l_974 = 0x35AEF1A0CB82B126LL;
        uint16_t * const l_979 = (void*)0;
        int32_t l_980 = 0xC7AEE4EBL;
        int32_t l_1010 = 0x860E491CL;
        int32_t l_1043 = 0x6B3EC918L;
        int32_t l_1045 = 5L;
        int32_t l_1046[9] = {4L,0L,0L,4L,0L,0L,4L,0L,0L};
        uint32_t *l_1066 = (void*)0;
        uint32_t *l_1067 = &l_953[0][0][2];
        int i;
        if ((l_880 ^ ((void*)0 == (*g_814))))
        {
            int32_t * const * const *l_916 = &g_815[0];
            int32_t * const * const **l_915 = &l_916;
            int32_t l_967 = 0x6B95ABC3L;
            for (g_320 = 19; (g_320 != 19); g_320 = safe_add_func_int32_t_s_s(g_320, 7))
            {
                int8_t l_888 = 0L;
                int8_t ***l_911 = (void*)0;
                int8_t ****l_910[9][6][2] = {{{(void*)0,&l_911},{&l_911,(void*)0},{&l_911,&l_911},{&l_911,&l_911},{(void*)0,(void*)0},{&l_911,&l_911}},{{(void*)0,&l_911},{&l_911,(void*)0},{(void*)0,&l_911},{&l_911,&l_911},{&l_911,(void*)0},{&l_911,&l_911}},{{&l_911,&l_911},{(void*)0,&l_911},{&l_911,&l_911},{(void*)0,&l_911},{&l_911,&l_911},{&l_911,(void*)0}},{{&l_911,&l_911},{&l_911,&l_911},{(void*)0,(void*)0},{&l_911,&l_911},{(void*)0,&l_911},{&l_911,&l_911}},{{&l_911,&l_911},{&l_911,&l_911},{&l_911,&l_911},{(void*)0,(void*)0},{&l_911,&l_911},{&l_911,&l_911}},{{&l_911,(void*)0},{&l_911,&l_911},{&l_911,&l_911},{&l_911,(void*)0},{(void*)0,&l_911},{&l_911,&l_911}},{{&l_911,&l_911},{&l_911,&l_911},{&l_911,&l_911},{&l_911,&l_911},{&l_911,&l_911},{&l_911,&l_911}},{{&l_911,&l_911},{&l_911,&l_911},{&l_911,&l_911},{(void*)0,&l_911},{&l_911,&l_911},{&l_911,&l_911}},{{&l_911,&l_911},{(void*)0,&l_911},{&l_911,&l_911},{&l_911,&l_911},{&l_911,&l_911},{&l_911,&l_911}}};
                int32_t *l_914 = &g_87[8];
                int i, j, k;
                for (l_601 = 20; (l_601 > (-14)); l_601--)
                {
                    const int8_t l_889 = 0xF9L;
                    int8_t ** const **l_908 = (void*)0;
                    int8_t ** const **l_909 = &l_906;
                    int32_t * const * const **l_918[1][4][7] = {{{&l_916,&l_916,&l_916,&l_916,&l_916,&l_916,&l_916},{&l_916,&l_916,&l_916,&l_916,&l_916,&l_916,&l_916},{&l_916,&l_916,&l_916,&l_916,&l_916,&l_916,&l_916},{&l_916,&l_916,&l_916,&l_916,&l_916,&l_916,&l_916}}};
                    int i, j, k;
                    for (l_608 = 0; (l_608 <= 49); ++l_608)
                    {
                        int64_t l_894 = 0xC134BB4E95CCCFD3LL;
                        uint32_t *l_903 = &g_851;
                        uint16_t **l_904 = &l_167[0][0][0];
                        int32_t l_905 = 3L;
                        l_887 = p_70;
                        if (g_5)
                            goto lbl_977;
                        l_905 |= ((((l_888 > l_889) ^ ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(l_894, 2)), 3)) , (((0x61L != 1UL) > (safe_div_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s((*l_887), (*g_399))) & (safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((((((*l_903) = ((void*)0 == &g_814)) , l_904) != &g_236) && (*g_739)) != 0L) == g_5), l_889)), p_69))), g_87[4]))) == (-10L)))) , p_69) <= p_69);
                    }
                    (*l_909) = l_906;
                    (*g_324) = ((void*)0 != l_910[0][4][0]);
                    if ((~(*p_70)))
                    {
                        if (l_880)
                            goto lbl_913;
                    }
                    else
                    {
                        int32_t * const * const ***l_917[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_917[i] = &l_915;
                        l_914 = p_70;
                        p_70 = p_70;
                        l_918[0][3][5] = (l_915 = l_915);
                        p_70 = l_887;
                    }
                }
            }
lbl_977:
            for (g_782 = (-26); (g_782 <= 2); ++g_782)
            {
                int32_t ****l_930 = &g_384[0][3][0];
                int8_t **l_936 = (void*)0;
                int8_t ***l_935 = &l_936;
                uint16_t l_938 = 65534UL;
                int32_t l_957 = 0x86D5A36EL;
                for (g_583 = 0; (g_583 <= 0); g_583 += 1)
                {
                    int8_t l_934 = 0x44L;
                    int64_t *l_937 = &g_169[1][0];
                    int i, j;
                    if ((((*l_937) ^= (((safe_mod_func_uint8_t_u_u((((((((*p_70) || ((safe_mod_func_int16_t_s_s((*g_313), (((safe_sub_func_uint64_t_u_u((safe_div_func_int16_t_s_s(0x1B65L, (*g_313))), ((!((void*)0 == l_930)) ^ (safe_add_func_uint8_t_u_u(((((p_69 , ((void*)0 != l_933)) | (*g_675)) != 18446744073709551608UL) | (*l_887)), l_934))))) || 0xEEE1L) , (*g_236)))) != 0x8A5DL)) > (*g_313)) , (void*)0) != &g_674) & p_69) | p_69), (-1L))) , l_935) != &g_398[1])) , l_938))
                    {
                        int32_t *l_939 = &l_601;
                        l_939 = p_70;
                    }
                    else
                    {
                        uint8_t *l_954 = (void*)0;
                        uint8_t *l_955 = &l_818[1];
                        uint8_t *l_956 = &g_320;
                        int32_t l_958 = 0x8C0562E3L;
                        uint32_t *l_966[6];
                        int32_t l_975[8];
                        int32_t l_976 = (-3L);
                        int i;
                        for (i = 0; i < 6; i++)
                            l_966[i] = &l_953[0][0][2];
                        for (i = 0; i < 8; i++)
                            l_975[i] = 4L;
                        l_957 ^= ((g_851 > ((((*l_937) = p_69) == ((*l_887) != p_69)) > (((safe_rshift_func_uint8_t_u_u(((*l_956) &= ((*l_955) &= ((safe_div_func_uint32_t_u_u(((((*g_236) || (safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((p_69 || ((p_69 & (((((((**g_235)++) && (((safe_lshift_func_uint8_t_u_u(p_69, 5)) , g_952) == p_69)) , g_215) ^ l_953[0][0][2]) < p_69) , 1UL)) < p_69)), (*g_739))), p_69))) && (-1L)) , p_69), 1L)) == (-1L)))), p_69)) != p_69) == (-1L)))) > (*l_887));
                        if (l_958)
                            continue;
                        l_976 ^= ((*g_324) = (safe_mul_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((+p_69), ((p_69 | ((((g_314[0][2] || (l_975[6] = (((*g_399) , ((l_967 = g_3) < (l_958 = (((*l_956) = (safe_lshift_func_int8_t_s_u(((((*g_399) = 0xCCL) ^ p_69) , (((*g_313) = (((((~(((p_69 <= (safe_mod_func_uint16_t_u_u(((*g_236) = 65535UL), (*g_313)))) , (-3L)) ^ p_69)) >= g_343) & l_973) , l_974) , (*g_313))) , p_69)), 4))) & 7UL)))) == g_879))) , l_938) || 0xB8CF30C7L) < p_69)) >= g_5))), p_69)) ^ p_69) <= 1L), p_69)));
                    }
                    for (l_602 = 0; (l_602 >= 0); l_602 -= 1)
                    {
                        int i, j, k;
                        (*g_324) ^= g_238[(g_583 + 7)][(l_602 + 6)][l_602];
                    }
                }
            }
            l_980 = (safe_unary_minus_func_uint64_t_u((((*g_235) = (*g_235)) == l_979)));
        }
        else
        {
            int16_t *l_988 = &l_430;
            int32_t l_992 = 9L;
            int64_t *l_993[5] = {&g_169[0][0],&g_169[0][0],&g_169[0][0],&g_169[0][0],&g_169[0][0]};
            int32_t l_994 = 0x3697F98EL;
            uint32_t *l_995[4];
            int64_t l_1029 = 0x325F3AE1F37F1B27LL;
            int32_t l_1040[3][4][10] = {{{5L,7L,0x415F0C3BL,1L,0x0356A09CL,0x0356A09CL,1L,0x415F0C3BL,7L,5L},{7L,0L,(-3L),1L,0L,5L,0L,1L,(-3L),0L},{1L,0x415F0C3BL,5L,0L,0L,0x05EEA316L,0x05EEA316L,0L,0L,5L},{0L,0L,7L,1L,0x0356A09CL,0x05EEA316L,(-3L),0x05EEA316L,0x0356A09CL,1L}},{{1L,0xC3C74415L,1L,0x05EEA316L,1L,5L,(-3L),(-3L),5L,1L},{7L,0L,0L,7L,1L,0x0356A09CL,0x05EEA316L,(-3L),0x05EEA316L,0x0356A09CL},{5L,0x415F0C3BL,1L,0x415F0C3BL,5L,0L,0L,0x05EEA316L,0x05EEA316L,0L},{(-3L),0L,7L,7L,0L,(-3L),1L,0L,5L,0L}},{{0x415F0C3BL,7L,5L,0x05EEA316L,5L,7L,0x415F0C3BL,1L,0x0356A09CL,0x0356A09CL},{0x415F0C3BL,0x0356A09CL,(-3L),1L,1L,1L,5L,0xC3C74415L,7L,0x0356A09CL},{1L,5L,0xC3C74415L,7L,0x0356A09CL,7L,0xC3C74415L,5L,1L,0L},{(-3L),0L,0xC3C74415L,0x0356A09CL,5L,5L,0x0356A09CL,0xC3C74415L,0L,(-3L)}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_995[i] = &l_953[0][0][2];
            l_994 &= (safe_div_func_int64_t_s_s((g_526 ^= (safe_mod_func_uint8_t_u_u(((~(((safe_lshift_func_int16_t_s_s(0x0F54L, ((*g_313) = (*g_313)))) > ((&g_343 == l_988) >= (safe_add_func_uint64_t_u_u((((~(p_69 && (*l_887))) , ((*p_70) , (void*)0)) == (void*)0), p_69)))) , 0x5B39L)) < (*l_887)), l_992))), l_992));
            l_992 = (l_1010 = (l_980 = ((((*l_887) = ((((g_171--) && (p_69 <= (safe_div_func_uint32_t_u_u(0x09ECDB52L, (safe_sub_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((&g_384[6][4][2] == (void*)0), ((safe_add_func_int8_t_s_s(p_69, (g_635 ^ 5L))) ^ ((safe_div_func_uint32_t_u_u((p_69 >= ((*l_988) &= ((safe_mul_func_uint16_t_u_u((*g_236), l_994)) , (*g_313)))), p_69)) , (*g_739))))) <= 0x0C56E120L), 0x01091CB9L)))))) , (void*)0) == &g_813)) || p_69) == 0L)));
            for (l_604 = 0; (l_604 == (-6)); --l_604)
            {
                uint16_t *l_1023 = &g_24;
                int32_t *** const *l_1038 = &g_384[1][2][2];
                int32_t l_1041 = 0L;
                int32_t l_1042 = 1L;
                p_70 = p_70;
                for (l_601 = 16; (l_601 != 2); l_601 = safe_sub_func_uint32_t_u_u(l_601, 7))
                {
                    int64_t *l_1039 = &g_169[6][0];
                    int32_t l_1044 = (-7L);
                    int32_t l_1047 = 0xE737C8CAL;
                    for (g_676 = 16; (g_676 != 56); g_676++)
                    {
                        uint8_t *l_1024 = &l_481;
                        (*l_887) = (safe_lshift_func_int8_t_s_u(((***l_906) = (1L < ((*l_1024) = (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((*p_70) , (l_1023 == (*g_235))), ((*g_313) |= (&p_70 != (**g_813))))), (*g_236)))))), (g_350 | (safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u(65533UL, p_69)) < p_69), l_992)))));
                        if (l_1029)
                            continue;
                        if ((*p_70))
                            continue;
                        if (l_973)
                            goto lbl_913;
                    }
                    (*g_324) = (l_994 ^= ((((((safe_sub_func_int64_t_s_s(((((*l_988) ^= (0x6750FD09L | (safe_add_func_uint16_t_u_u(0UL, ((((((safe_sub_func_uint8_t_u_u((0x614AL & p_69), (*l_887))) != (safe_add_func_int32_t_s_s(((((0x3BFFL ^ 0xEE6DL) , p_69) < (*l_887)) , (*p_70)), p_69))) , &g_384[0][3][0]) == l_1038) , &g_169[8][0]) == l_1039))))) < 8L) < p_69), (*g_675))) , &l_933) != &g_739) , (*g_324)) > (*p_70)) ^ 255UL));
                    for (l_974 = 1; (l_974 <= 5); l_974 += 1)
                    {
                        uint32_t l_1048 = 0xDFFB7960L;
                        ++l_1048;
                    }
                    if (l_1040[0][2][7])
                        continue;
                }
            }
        }
        (*g_324) = (safe_rshift_func_int16_t_s_u(3L, (((l_1053[2][8] || ((((*l_1067) ^= (safe_div_func_int64_t_s_s(4L, (((((safe_sub_func_uint32_t_u_u(p_69, ((p_69 , p_69) && (safe_add_func_uint64_t_u_u((p_69 || ((safe_add_func_int64_t_s_s((((safe_mod_func_uint8_t_u_u(((p_69 , (safe_lshift_func_int8_t_s_s(((*l_737) = p_69), (*l_887)))) , g_87[8]), p_69)) , (void*)0) == (*g_813)), 0x6A16FB1BAA7ACABELL)) == 0x29L)), p_69))))) < p_69) < (*g_324)) == p_69) , 5L)))) && (*l_887)) != 0xAB0AL)) , &g_398[1]) != &g_398[3])));
        for (l_125 = 0; (l_125 > (-11)); l_125 = safe_sub_func_int8_t_s_s(l_125, 3))
        {
            int16_t l_1078 = (-1L);
            uint8_t *l_1084 = &g_583;
            uint8_t **l_1083 = &l_1084;
            uint16_t * const l_1085 = &g_782;
            int32_t l_1086 = 0x30EC3964L;
            l_1086 = (!((g_171 <= (safe_mul_func_int16_t_s_s(((*g_313) = (!((**g_235)--))), (safe_mul_func_uint8_t_u_u(l_1078, 0x69L))))) && (((safe_sub_func_uint16_t_u_u(((**g_674) , ((&l_818[7] != ((*l_1083) = ((safe_rshift_func_uint8_t_u_s(0x9EL, 5)) , &g_320))) || 0xF190FDAAFD3F0C07LL)), (l_979 == l_1085))) , &l_1078) != &l_430)));
        }
    }
    for (g_24 = 0; (g_24 == 5); g_24 = safe_add_func_uint8_t_u_u(g_24, 5))
    {
        return &g_236;
    }
    return &g_236;
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
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_87[i], "g_87[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_169[i][j], "g_169[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_238[i][j][k], "g_238[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_314[i][j], "g_314[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_526, "g_526", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_631, "g_631", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_676, "g_676", print_hash_value);
    transparent_crc(g_782, "g_782", print_hash_value);
    transparent_crc(g_851, "g_851", print_hash_value);
    transparent_crc(g_879, "g_879", print_hash_value);
    transparent_crc(g_952, "g_952", print_hash_value);
    transparent_crc(g_1157, "g_1157", print_hash_value);
    transparent_crc(g_1176, "g_1176", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1193[i], "g_1193[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1294[i], "g_1294[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1317, "g_1317", print_hash_value);
    transparent_crc(g_1343, "g_1343", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1385[i], "g_1385[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1428, "g_1428", print_hash_value);
    transparent_crc(g_1500, "g_1500", print_hash_value);
    transparent_crc(g_1728, "g_1728", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1730[i], "g_1730[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1731, "g_1731", print_hash_value);
    transparent_crc(g_1792, "g_1792", print_hash_value);
    transparent_crc(g_1883, "g_1883", print_hash_value);
    transparent_crc(g_2032, "g_2032", print_hash_value);
    transparent_crc(g_2083, "g_2083", print_hash_value);
    transparent_crc(g_2164, "g_2164", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_2429[i][j], "g_2429[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2642, "g_2642", print_hash_value);
    transparent_crc(g_2806, "g_2806", print_hash_value);
    transparent_crc(g_2807, "g_2807", print_hash_value);
    transparent_crc(g_2962, "g_2962", print_hash_value);
    transparent_crc(g_2998, "g_2998", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_3007[i][j][k], "g_3007[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_3015[i][j], "g_3015[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3066, "g_3066", print_hash_value);
    transparent_crc(g_3262, "g_3262", print_hash_value);
    transparent_crc(g_3291, "g_3291", print_hash_value);
    transparent_crc(g_3342, "g_3342", print_hash_value);
    transparent_crc(g_3485, "g_3485", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_3498[i][j][k], "g_3498[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_3542, "g_3542", print_hash_value);
    transparent_crc(g_3545, "g_3545", print_hash_value);
    transparent_crc(g_3546, "g_3546", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_3547[i][j][k], "g_3547[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_3548, "g_3548", print_hash_value);
    transparent_crc(g_3549, "g_3549", print_hash_value);
    transparent_crc(g_3550, "g_3550", print_hash_value);
    transparent_crc(g_3551, "g_3551", print_hash_value);
    transparent_crc(g_3552, "g_3552", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_3553[i][j][k], "g_3553[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_3554, "g_3554", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_3555[i], "g_3555[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3556, "g_3556", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_3557[i][j][k], "g_3557[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_3558, "g_3558", print_hash_value);
    transparent_crc(g_3559, "g_3559", print_hash_value);
    transparent_crc(g_3560, "g_3560", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_3561[i], "g_3561[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3562, "g_3562", print_hash_value);
    transparent_crc(g_3563, "g_3563", print_hash_value);
    transparent_crc(g_3564, "g_3564", print_hash_value);
    transparent_crc(g_3565, "g_3565", print_hash_value);
    transparent_crc(g_3566, "g_3566", print_hash_value);
    transparent_crc(g_3567, "g_3567", print_hash_value);
    transparent_crc(g_3568, "g_3568", print_hash_value);
    transparent_crc(g_3569, "g_3569", print_hash_value);
    transparent_crc(g_3570, "g_3570", print_hash_value);
    transparent_crc(g_3757, "g_3757", print_hash_value);
    transparent_crc(g_3770, "g_3770", print_hash_value);
    transparent_crc(g_3846, "g_3846", print_hash_value);
    transparent_crc(g_3874, "g_3874", print_hash_value);
    transparent_crc(g_4023, "g_4023", print_hash_value);
    transparent_crc(g_4095, "g_4095", print_hash_value);
    transparent_crc(g_4424, "g_4424", print_hash_value);
    transparent_crc(g_4436, "g_4436", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
