// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = C5CA4874
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
   const signed f0 : 3;
   int32_t f1;
   int8_t f2;
};

union U1 {
   uint8_t f0;
   unsigned f1 : 22;
};


static int32_t g_12[7] = {(-10L),0L,(-10L),(-10L),0L,(-10L),(-10L)};
static int32_t g_23 = 0L;
static int32_t *g_22 = &g_23;
static uint16_t g_30[10][9] = {{0xEF87L,5UL,1UL,0xE220L,0xAF05L,0x0D47L,65535UL,0x0D47L,0xAF05L},{0xFAC0L,0x4E49L,0x4E49L,0xFAC0L,0x6C34L,65527UL,0x7004L,0x7E06L,0xABB7L},{0xEF87L,0xAF05L,65535UL,0x2F2BL,0x2F2BL,65535UL,0xAF05L,0xEF87L,0x61DEL},{0xB50BL,65535UL,0xABB7L,65535UL,0x6C34L,0x7E06L,0x7E06L,0x6C34L,65535UL},{0xE220L,65535UL,0xE220L,0x0D47L,65535UL,65535UL,0xE220L,0x8C3EL,0x8C3EL},{0xFAC0L,65535UL,0x7004L,0x6C34L,0x7004L,65535UL,0xFAC0L,0UL,0xA275L},{0xE220L,65535UL,65535UL,0x0D47L,0x2F2BL,0xEF87L,0x2F2BL,0x0D47L,65535UL},{0x6C34L,0x6C34L,0xB50BL,65527UL,0xA275L,0x4E49L,65535UL,0UL,65535UL},{65535UL,0x2A50L,65535UL,65535UL,0x2A50L,65535UL,5UL,0x8C3EL,0xAF05L},{0UL,0xAB71L,0xB50BL,0x7E06L,0xFAC0L,0xFAC0L,0x7E06L,0xB50BL,0xAB71L}};
static int32_t g_35 = 1L;
static union U0 g_63[8] = {{0x9FD84452L},{0x7DB13CF2L},{0x9FD84452L},{0x7DB13CF2L},{0x9FD84452L},{0x7DB13CF2L},{0x9FD84452L},{0x7DB13CF2L}};
static int32_t g_72 = (-5L);
static int16_t g_85 = 0x55D8L;
static int32_t g_115 = 1L;
static int32_t g_116[10] = {0x0559AC6BL,1L,0xEF5433B4L,0xEF5433B4L,1L,0x0559AC6BL,1L,0xEF5433B4L,0xEF5433B4L,1L};
static uint32_t g_143 = 0xE05431A1L;
static union U0 *g_173 = &g_63[4];
static union U0 **g_172[6] = {(void*)0,(void*)0,&g_173,(void*)0,(void*)0,&g_173};
static union U0 ***g_171 = &g_172[5];
static union U0 ****g_170 = &g_171;
static int64_t g_221 = 0L;
static int64_t g_298 = (-2L);
static int32_t *g_299 = &g_115;
static int32_t **g_332[4][2][3] = {{{&g_299,&g_22,&g_22},{&g_22,&g_22,&g_299}},{{&g_299,&g_22,&g_22},{&g_22,&g_22,&g_299}},{{&g_299,&g_22,&g_22},{&g_22,&g_22,&g_299}},{{&g_299,&g_22,&g_22},{&g_22,&g_22,&g_299}}};
static const int32_t ** const *g_338 = (void*)0;
static int32_t g_357 = 0xD82752A7L;
static uint32_t g_358 = 18446744073709551615UL;
static int32_t *g_365[1][5][1] = {{{&g_116[4]},{&g_116[4]},{&g_116[4]},{&g_116[4]},{&g_116[4]}}};
static int32_t *g_380 = (void*)0;
static union U1 g_454[2][8][6] = {{{{253UL},{0x0DL},{0xF4L},{247UL},{1UL},{0UL}},{{0UL},{3UL},{255UL},{3UL},{0UL},{0x0DL}},{{0UL},{253UL},{3UL},{247UL},{0x7AL},{0x7AL}},{{253UL},{1UL},{1UL},{253UL},{255UL},{0x7AL}},{{0xF4L},{0x7AL},{3UL},{0x0DL},{247UL},{0x0DL}},{{255UL},{0x35L},{255UL},{0UL},{247UL},{0UL}},{{3UL},{0x7AL},{0xF4L},{255UL},{255UL},{0xF4L}},{{1UL},{1UL},{253UL},{255UL},{0x7AL},{0UL}}},{{{3UL},{253UL},{0UL},{0UL},{0UL},{253UL}},{{255UL},{3UL},{0UL},{0x0DL},{1UL},{0UL}},{{0xF4L},{0x0DL},{253UL},{253UL},{0x0DL},{0xF4L}},{{253UL},{0x0DL},{0xF4L},{247UL},{1UL},{0UL}},{{0UL},{3UL},{255UL},{3UL},{0UL},{0x0DL}},{{0UL},{253UL},{3UL},{247UL},{0x7AL},{0x7AL}},{{253UL},{1UL},{1UL},{1UL},{0x0DL},{0UL}},{{255UL},{0UL},{0x35L},{253UL},{0x7AL},{253UL}}}};
static union U1 *g_453[5][2] = {{&g_454[0][5][5],&g_454[0][5][5]},{&g_454[0][5][5],&g_454[0][5][5]},{&g_454[0][5][5],&g_454[0][5][5]},{&g_454[0][5][5],&g_454[0][5][5]},{&g_454[0][5][5],&g_454[0][5][5]}};
static uint64_t g_494 = 0x6838FC12DB752CB0LL;
static int16_t *g_504 = &g_85;
static int16_t **g_503 = &g_504;
static uint64_t g_538 = 7UL;
static uint64_t * const g_553 = (void*)0;
static uint64_t * const *g_552 = &g_553;
static uint8_t g_580[10][1] = {{0UL},{252UL},{0UL},{252UL},{0UL},{252UL},{0UL},{252UL},{0UL},{252UL}};
static int64_t g_618 = 0L;
static uint32_t g_629 = 1UL;
static uint16_t *g_647 = (void*)0;
static uint16_t **g_646 = &g_647;
static uint16_t **g_648 = (void*)0;
static int16_t g_649 = 0xCE52L;
static const union U0 *g_659 = &g_63[4];
static const union U0 **g_658[3] = {&g_659,&g_659,&g_659};
static uint32_t *g_685 = &g_358;
static uint32_t **g_684 = &g_685;
static uint32_t **g_687 = &g_685;
static uint16_t g_693[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static union U0 g_705 = {0xBBB645F6L};
static uint64_t *g_729 = &g_494;
static uint64_t **g_728[4] = {&g_729,&g_729,&g_729,&g_729};
static uint16_t g_739[10][6] = {{65535UL,0x060AL,0x264AL,4UL,0x060AL,65534UL},{0x794FL,65535UL,0x264AL,65535UL,0x794FL,0x4263L},{0xA0CCL,65535UL,65534UL,0xA0CCL,0x060AL,65535UL},{0xA0CCL,0x060AL,65535UL,65535UL,65535UL,65535UL},{0x794FL,0x794FL,65534UL,4UL,65535UL,0x4263L},{65535UL,0x060AL,0x264AL,4UL,0x060AL,65534UL},{0x794FL,65535UL,0x264AL,65535UL,0x794FL,0x4263L},{0xA0CCL,65535UL,65534UL,0xA0CCL,0x060AL,65535UL},{0xA0CCL,0x060AL,65535UL,65535UL,65535UL,65535UL},{0x794FL,0x794FL,65534UL,4UL,65535UL,0x4263L}};
static int8_t g_776 = 0xD4L;
static int8_t *g_809[9][5][4] = {{{&g_776,&g_776,&g_776,&g_776},{&g_776,&g_776,&g_776,&g_776},{&g_776,&g_776,&g_776,&g_776},{&g_776,&g_776,&g_776,(void*)0},{&g_776,(void*)0,&g_776,&g_776}},{{&g_776,&g_776,&g_776,&g_776},{&g_776,(void*)0,&g_776,(void*)0},{(void*)0,&g_776,(void*)0,&g_776},{&g_776,&g_776,(void*)0,&g_776},{(void*)0,&g_776,&g_776,&g_776}},{{&g_776,&g_776,&g_776,&g_776},{&g_776,&g_776,&g_776,&g_776},{&g_776,&g_776,&g_776,&g_776},{&g_776,(void*)0,&g_776,&g_776},{&g_776,&g_776,&g_776,&g_776}},{{&g_776,&g_776,&g_776,(void*)0},{(void*)0,&g_776,(void*)0,&g_776},{&g_776,&g_776,(void*)0,&g_776},{(void*)0,&g_776,&g_776,&g_776},{&g_776,(void*)0,&g_776,&g_776}},{{&g_776,&g_776,&g_776,&g_776},{&g_776,&g_776,&g_776,&g_776},{&g_776,&g_776,&g_776,&g_776},{&g_776,(void*)0,&g_776,&g_776},{&g_776,(void*)0,&g_776,&g_776}},{{(void*)0,&g_776,&g_776,&g_776},{(void*)0,&g_776,&g_776,&g_776},{&g_776,&g_776,(void*)0,&g_776},{&g_776,&g_776,&g_776,&g_776},{(void*)0,&g_776,&g_776,&g_776}},{{&g_776,&g_776,&g_776,&g_776},{&g_776,&g_776,&g_776,&g_776},{&g_776,&g_776,&g_776,&g_776},{&g_776,(void*)0,&g_776,&g_776},{(void*)0,&g_776,&g_776,(void*)0}},{{&g_776,&g_776,&g_776,&g_776},{(void*)0,&g_776,&g_776,&g_776},{&g_776,&g_776,&g_776,&g_776},{&g_776,&g_776,&g_776,&g_776},{&g_776,&g_776,&g_776,(void*)0}},{{&g_776,&g_776,&g_776,&g_776},{(void*)0,(void*)0,&g_776,&g_776},{&g_776,&g_776,(void*)0,&g_776},{&g_776,&g_776,&g_776,&g_776},{(void*)0,&g_776,&g_776,&g_776}}};
static int8_t ** const g_808 = &g_809[4][4][3];
static uint32_t ***g_826 = &g_687;
static const uint32_t g_867 = 0UL;
static const uint32_t g_869 = 0UL;
static int32_t g_930 = 0xD4E65D52L;
static int16_t ***g_990 = (void*)0;
static int16_t ****g_989 = &g_990;
static uint8_t *g_999[9][1][7] = {{{&g_454[0][5][5].f0,&g_580[1][0],&g_580[9][0],&g_580[1][0],&g_454[0][5][5].f0,&g_580[9][0],&g_454[0][5][5].f0}},{{&g_454[0][5][5].f0,&g_580[9][0],&g_580[9][0],&g_454[0][5][5].f0,&g_580[9][0],&g_580[9][0],&g_454[0][5][5].f0}},{{(void*)0,&g_454[0][5][5].f0,&g_580[9][0],&g_580[9][0],&g_454[0][5][5].f0,&g_580[9][0],&g_580[9][0]}},{{&g_454[0][5][5].f0,&g_454[0][5][5].f0,&g_580[9][0],&g_454[0][5][5].f0,&g_580[1][0],&g_580[9][0],&g_580[1][0]}},{{&g_454[0][5][5].f0,&g_580[9][0],&g_580[9][0],&g_454[0][5][5].f0,&g_580[9][0],(void*)0,&g_454[0][5][5].f0}},{{(void*)0,&g_580[1][0],&g_580[9][0],&g_580[9][0],&g_580[1][0],(void*)0,&g_580[9][0]}},{{&g_580[1][0],&g_454[0][5][5].f0,&g_580[9][0],&g_454[0][5][5].f0,&g_454[0][5][5].f0,&g_580[9][0],&g_454[0][5][5].f0}},{{&g_580[1][0],&g_580[9][0],(void*)0,&g_580[1][0],&g_580[9][0],&g_580[9][0],&g_580[1][0]}},{{(void*)0,&g_454[0][5][5].f0,(void*)0,&g_580[9][0],&g_454[0][5][5].f0,&g_580[9][0],&g_580[9][0]}}};
static const union U1 *g_1003 = &g_454[0][5][5];
static const union U1 **g_1002 = &g_1003;
static const union U1 ***g_1001 = &g_1002;
static uint8_t **g_1035 = (void*)0;
static uint8_t g_1039 = 0UL;



static const int32_t func_1(void);
static int8_t func_3(uint8_t p_4);
static int64_t func_8(union U1 p_9);
static int32_t func_19(int32_t p_20, int32_t * p_21);
static uint64_t func_27(uint16_t p_28, uint32_t p_29);
static int16_t func_56(int32_t * p_57, uint16_t p_58);
static int32_t * func_59(int32_t * p_60, union U0 p_61, int32_t * p_62);
static int32_t * func_64(int32_t * p_65);
static int32_t * func_66(const int32_t p_67, uint16_t p_68, int8_t p_69, int16_t p_70);
static uint8_t func_90(union U0 p_91, uint32_t p_92, int32_t * p_93);
# 113 "<stdin>"
static const int32_t func_1(void)
{
    uint16_t l_2 = 0xCB8CL;
    union U0 l_1027 = {0x3625DD2FL};
    uint8_t *l_1029 = &g_580[6][0];
    int32_t *l_1030 = &g_705.f1;
    int32_t *l_1031 = &g_705.f1;
    int32_t *l_1032 = &g_705.f1;
    int32_t *l_1033[8] = {&g_705.f1,&g_705.f1,&g_357,&g_705.f1,&g_705.f1,&g_357,&g_705.f1,&g_705.f1};
    int64_t l_1034[5][8][6] = {{{0x8BB3E477AEBFA5DCLL,0xE2CC577EA93A1603LL,(-1L),0x1FD1DA85936F53B6LL,0x167F2B85E7603BD9LL,0x471AD5393D6E1303LL},{0x8BB3E477AEBFA5DCLL,0xF23A0AABCB6F8335LL,0x167F2B85E7603BD9LL,0xDB6D27CB3FA820A9LL,0x89075CDB164302A1LL,0xDB6D27CB3FA820A9LL},{(-1L),0xF23A0AABCB6F8335LL,(-1L),0x471AD5393D6E1303LL,0x167F2B85E7603BD9LL,0x1FD1DA85936F53B6LL},{5L,0xE2CC577EA93A1603LL,(-1L),0x20617DADD965A10DLL,0x8BB3E477AEBFA5DCLL,0xDB6D27CB3FA820A9LL},{3L,0x20617DADD965A10DLL,0x167F2B85E7603BD9LL,0xE2CC577EA93A1603LL,(-1L),0x1FD1DA85936F53B6LL},{(-1L),0x471AD5393D6E1303LL,0x167F2B85E7603BD9LL,0x1FD1DA85936F53B6LL,(-1L),0xE2CC577EA93A1603LL},{3L,0xE2CC577EA93A1603LL,0x89075CDB164302A1LL,0x471AD5393D6E1303LL,0x89075CDB164302A1LL,0xE2CC577EA93A1603LL},{0x89075CDB164302A1LL,0xDB6D27CB3FA820A9LL,0x167F2B85E7603BD9LL,0xF23A0AABCB6F8335LL,0x8BB3E477AEBFA5DCLL,0x1FD1DA85936F53B6LL}},{{0x89075CDB164302A1LL,0xC0DF4A27B6B5A973LL,0x8BB3E477AEBFA5DCLL,0x471AD5393D6E1303LL,5L,0x471AD5393D6E1303LL},{3L,0xC0DF4A27B6B5A973LL,3L,0x1FD1DA85936F53B6LL,0x8BB3E477AEBFA5DCLL,0xF23A0AABCB6F8335LL},{(-1L),0xDB6D27CB3FA820A9LL,3L,0xE2CC577EA93A1603LL,0x89075CDB164302A1LL,0x471AD5393D6E1303LL},{(-1L),0xE2CC577EA93A1603LL,0x8BB3E477AEBFA5DCLL,0xE2CC577EA93A1603LL,(-1L),0x1FD1DA85936F53B6LL},{(-1L),0x471AD5393D6E1303LL,0x167F2B85E7603BD9LL,0x1FD1DA85936F53B6LL,(-1L),0xE2CC577EA93A1603LL},{3L,0xE2CC577EA93A1603LL,0x89075CDB164302A1LL,0x471AD5393D6E1303LL,0x89075CDB164302A1LL,0xE2CC577EA93A1603LL},{0x89075CDB164302A1LL,0xDB6D27CB3FA820A9LL,0x167F2B85E7603BD9LL,0xF23A0AABCB6F8335LL,0x8BB3E477AEBFA5DCLL,0x1FD1DA85936F53B6LL},{0x89075CDB164302A1LL,0xC0DF4A27B6B5A973LL,0x8BB3E477AEBFA5DCLL,0x471AD5393D6E1303LL,5L,0x471AD5393D6E1303LL}},{{3L,0xC0DF4A27B6B5A973LL,3L,0x1FD1DA85936F53B6LL,0x8BB3E477AEBFA5DCLL,0xF23A0AABCB6F8335LL},{(-1L),0xDB6D27CB3FA820A9LL,3L,0xE2CC577EA93A1603LL,0x89075CDB164302A1LL,0x471AD5393D6E1303LL},{(-1L),0xE2CC577EA93A1603LL,0x8BB3E477AEBFA5DCLL,0xE2CC577EA93A1603LL,(-1L),0x1FD1DA85936F53B6LL},{(-1L),0x471AD5393D6E1303LL,0x167F2B85E7603BD9LL,0x1FD1DA85936F53B6LL,(-1L),0xE2CC577EA93A1603LL},{3L,0xE2CC577EA93A1603LL,0x89075CDB164302A1LL,0x471AD5393D6E1303LL,0x89075CDB164302A1LL,0xE2CC577EA93A1603LL},{0x89075CDB164302A1LL,0xDB6D27CB3FA820A9LL,0x167F2B85E7603BD9LL,0xF23A0AABCB6F8335LL,0x8BB3E477AEBFA5DCLL,0x1FD1DA85936F53B6LL},{0x89075CDB164302A1LL,0xC0DF4A27B6B5A973LL,0x8BB3E477AEBFA5DCLL,0x471AD5393D6E1303LL,5L,0x471AD5393D6E1303LL},{3L,0xC0DF4A27B6B5A973LL,3L,0x1FD1DA85936F53B6LL,0x8BB3E477AEBFA5DCLL,0xF23A0AABCB6F8335LL}},{{(-1L),0xDB6D27CB3FA820A9LL,3L,0xE2CC577EA93A1603LL,0x89075CDB164302A1LL,0x471AD5393D6E1303LL},{(-1L),0xE2CC577EA93A1603LL,0x8BB3E477AEBFA5DCLL,0xE2CC577EA93A1603LL,(-1L),0x1FD1DA85936F53B6LL},{(-1L),0x471AD5393D6E1303LL,0x167F2B85E7603BD9LL,0x1FD1DA85936F53B6LL,(-1L),0xE2CC577EA93A1603LL},{3L,0xE2CC577EA93A1603LL,0x89075CDB164302A1LL,0x471AD5393D6E1303LL,0x89075CDB164302A1LL,0xE2CC577EA93A1603LL},{0x89075CDB164302A1LL,0xDB6D27CB3FA820A9LL,0x167F2B85E7603BD9LL,0xF23A0AABCB6F8335LL,0x8BB3E477AEBFA5DCLL,0x1FD1DA85936F53B6LL},{0x89075CDB164302A1LL,0xC0DF4A27B6B5A973LL,0x8BB3E477AEBFA5DCLL,0x471AD5393D6E1303LL,5L,0x471AD5393D6E1303LL},{3L,0xC0DF4A27B6B5A973LL,3L,0x1FD1DA85936F53B6LL,0x8BB3E477AEBFA5DCLL,0xF23A0AABCB6F8335LL},{(-1L),0xDB6D27CB3FA820A9LL,3L,0xE2CC577EA93A1603LL,0x89075CDB164302A1LL,0x471AD5393D6E1303LL}},{{(-1L),0xE2CC577EA93A1603LL,0x8BB3E477AEBFA5DCLL,0xE2CC577EA93A1603LL,(-1L),0x1FD1DA85936F53B6LL},{(-1L),0x471AD5393D6E1303LL,0x167F2B85E7603BD9LL,0x1FD1DA85936F53B6LL,(-1L),0xE2CC577EA93A1603LL},{3L,0xE2CC577EA93A1603LL,0x89075CDB164302A1LL,0x471AD5393D6E1303LL,0x89075CDB164302A1LL,0xE2CC577EA93A1603LL},{0x89075CDB164302A1LL,0xDB6D27CB3FA820A9LL,0x167F2B85E7603BD9LL,0xF23A0AABCB6F8335LL,0x8BB3E477AEBFA5DCLL,0x1FD1DA85936F53B6LL},{0x89075CDB164302A1LL,0xC0DF4A27B6B5A973LL,0x89075CDB164302A1LL,0x1FD1DA85936F53B6LL,(-1L),0x1FD1DA85936F53B6LL},{(-1L),0x20617DADD965A10DLL,(-1L),0xF23A0AABCB6F8335LL,0x89075CDB164302A1LL,0xC0DF4A27B6B5A973LL},{3L,0x471AD5393D6E1303LL,(-1L),0xDB6D27CB3FA820A9LL,5L,0x1FD1DA85936F53B6LL},{0x167F2B85E7603BD9LL,0xDB6D27CB3FA820A9LL,0x89075CDB164302A1LL,0xDB6D27CB3FA820A9LL,0x167F2B85E7603BD9LL,0xF23A0AABCB6F8335LL}}};
    uint8_t * const l_1038 = &g_1039;
    uint8_t * const *l_1037 = &l_1038;
    uint8_t * const **l_1036 = &l_1037;
    int32_t l_1077 = 0x1D0A15F4L;
    const int64_t l_1088 = 0xA4F8AE2F7DE368EFLL;
    int i, j, k;
    l_1034[2][1][2] &= (((l_2 & (func_3(l_2) , (l_1027 , (((0x38L && (+((*l_1029) = (((*g_1002) == (void*)0) && l_1027.f0)))) || 7UL) < 0xADL)))) && 1L) >= 1L);
    (*g_22) |= ((g_1035 = &g_999[5][0][5]) != ((*l_1036) = &g_999[1][0][5]));
    for (g_221 = (-19); (g_221 == (-20)); g_221 = safe_sub_func_uint8_t_u_u(g_221, 8))
    {
        const uint32_t l_1042 = 0UL;
        uint32_t *l_1046 = (void*)0;
        int32_t l_1047 = 1L;
        uint32_t *l_1048 = (void*)0;
        uint32_t *l_1049 = &g_143;
        int64_t *l_1054 = &l_1034[3][1][1];
        const uint32_t l_1057 = 0x489FC0C0L;
        int32_t l_1072 = 0x30D6EF3FL;
        int32_t l_1080 = 0x2149C97BL;
        int32_t l_1083 = 0xDF7104AEL;
        uint64_t l_1085[7][5] = {{0x5DC928F6AD301DF9LL,18446744073709551606UL,0x5DC928F6AD301DF9LL,0x5DC928F6AD301DF9LL,18446744073709551606UL},{18446744073709551606UL,0x5DC928F6AD301DF9LL,0x5DC928F6AD301DF9LL,18446744073709551606UL,0x5DC928F6AD301DF9LL},{18446744073709551606UL,18446744073709551606UL,0x748823D3E651C062LL,18446744073709551606UL,18446744073709551606UL},{0x5DC928F6AD301DF9LL,18446744073709551606UL,0x5DC928F6AD301DF9LL,0x5DC928F6AD301DF9LL,18446744073709551606UL},{18446744073709551606UL,0x5DC928F6AD301DF9LL,0x5DC928F6AD301DF9LL,18446744073709551606UL,0x5DC928F6AD301DF9LL},{18446744073709551606UL,18446744073709551606UL,0x748823D3E651C062LL,18446744073709551606UL,18446744073709551606UL},{0x5DC928F6AD301DF9LL,18446744073709551606UL,0x5DC928F6AD301DF9LL,0x5DC928F6AD301DF9LL,18446744073709551606UL}};
        int i, j;
        if ((((*g_729) = (l_1042 & ((safe_mod_func_uint32_t_u_u((~(((((((*l_1049)--) || l_1047) != l_1042) <= (((l_1042 > ((safe_rshift_func_uint8_t_u_u(l_1042, 1)) & ((*l_1054) |= l_1042))) > l_1042) , l_1042)) & (safe_mod_func_uint8_t_u_u((&g_170 != (void*)0), l_1057))) < g_115)), 0xB77C1B30L)) != 8L))) , l_1047))
        {
            const int16_t l_1060 = 0L;
            int32_t l_1061 = 0x5AB9E06FL;
            for (g_85 = 0; (g_85 < 22); g_85++)
            {
                l_1061 &= l_1060;
            }
        }
        else
        {
            uint32_t l_1066 = 4294967295UL;
            int32_t l_1067 = 5L;
            int32_t l_1069 = 1L;
            int32_t l_1070[5];
            int i;
            for (i = 0; i < 5; i++)
                l_1070[i] = 0x48452919L;
            for (g_538 = (-15); (g_538 == 38); g_538 = safe_add_func_uint64_t_u_u(g_538, 1))
            {
                int32_t l_1068[2][5][10] = {{{0x7D67B7E6L,0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L},{0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L,9L},{0x7D67B7E6L,0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L},{0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L,9L},{0x7D67B7E6L,0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L}},{{0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L,9L},{0x7D67B7E6L,0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L},{0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L,9L},{0x7D67B7E6L,0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L},{0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L,9L,9L,0x7D67B7E6L,0x7D67B7E6L,9L}}};
                int32_t l_1071 = 0x8935D6F4L;
                int32_t l_1073 = 0x8FE6E2F4L;
                int32_t l_1074 = (-1L);
                int32_t l_1075 = 0xBFF543DBL;
                int32_t l_1076 = 0xE0E193BFL;
                int32_t l_1078 = 3L;
                int32_t l_1079 = 0xA64CCA18L;
                int32_t l_1081 = (-4L);
                int32_t l_1082 = 4L;
                int32_t l_1084 = 0xEE456AC5L;
                int i, j, k;
                for (g_35 = (-21); (g_35 < (-24)); g_35--)
                {
                    if (l_1066)
                        break;
                }
                l_1085[1][2]--;
                (*g_22) = 0x5DE5C50BL;
                (*l_1031) = l_1047;
            }
        }
    }
    return l_1088;
}







static int8_t func_3(uint8_t p_4)
{
    union U1 l_10 = {0x1AL};
    int32_t l_24 = (-1L);
    int32_t l_1005 = 0xA07C2925L;
    int32_t **l_1006 = (void*)0;
    int32_t **l_1007 = &g_380;
    union U0 l_1008 = {0x13F9C630L};
    int32_t l_1009 = 0xAB04A07AL;
    int32_t **l_1010 = (void*)0;
    int32_t **l_1011 = &g_365[0][2][0];
    uint32_t *l_1015[9] = {&g_143,&g_143,&g_143,&g_143,&g_143,&g_143,&g_143,&g_143,&g_143};
    const uint64_t l_1016[6] = {0xE21169AB7E378923LL,0xE21169AB7E378923LL,0xE21169AB7E378923LL,0xE21169AB7E378923LL,0xE21169AB7E378923LL,0xE21169AB7E378923LL};
    int8_t l_1023[5] = {(-10L),(-10L),(-10L),(-10L),(-10L)};
    uint32_t l_1026[7] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
    int i;
    l_1005 = (safe_add_func_uint32_t_u_u((+func_8(l_10)), (255UL | ((l_24 |= ((*g_22) = func_19(p_4, g_22))) && ((safe_rshift_func_int16_t_s_s((func_27((g_30[6][6] = g_23), ((g_23 , ((safe_mul_func_uint16_t_u_u(0x93F4L, 0x260EL)) , g_23)) , g_23)) | 0xF5A0E789426F907FLL), l_10.f0)) | p_4)))));
    if (g_23)
        goto lbl_1012;
lbl_1012:
    (*l_1011) = func_59(((*l_1007) = ((l_10 , l_24) , func_64(&l_1005))), l_1008, ((*l_1011) = func_59(&l_24, l_1008, ((*l_1011) = func_66(p_4, p_4, l_1009, p_4)))));
    (*g_22) &= (p_4 & ((((**l_1007) = 0x9E4DF440L) , (l_1016[1] | (((((*g_729) = ((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u((**l_1007), (&g_930 != &l_1009))) , ((p_4 , (l_1023[2] > (safe_lshift_func_int16_t_s_s(p_4, 8)))) | p_4)), 4294967291UL)), (*g_504))) < p_4)) >= g_30[6][6]) <= 4UL) > l_1026[0]))) == 0L));
    return p_4;
}







static int64_t func_8(union U1 p_9)
{
    int32_t *l_11 = &g_12[1];
    int32_t *l_13[6] = {&g_12[3],&g_12[3],&g_12[3],&g_12[3],&g_12[3],&g_12[3]};
    int64_t l_14 = (-9L);
    int16_t l_15 = (-6L);
    uint16_t l_16 = 0xA5B0L;
    int i;
    (*l_11) = p_9.f0;
    ++l_16;
    return g_12[6];
}







static int32_t func_19(int32_t p_20, int32_t * p_21)
{
    return (*p_21);
}







static uint64_t func_27(uint16_t p_28, uint32_t p_29)
{
    uint64_t l_39 = 2UL;
    uint64_t l_710 = 0UL;
    int32_t *l_712 = &g_116[8];
    uint64_t **l_730 = &g_729;
    int32_t l_740 = 0L;
    union U0 *l_742 = &g_705;
    int64_t *l_752[6][6] = {{&g_221,&g_221,&g_221,&g_221,&g_221,&g_221},{&g_298,(void*)0,&g_298,&g_221,&g_298,(void*)0},{&g_221,(void*)0,&g_221,(void*)0,&g_221,(void*)0},{&g_298,&g_221,&g_298,(void*)0,&g_298,&g_221},{&g_221,&g_221,&g_221,&g_221,&g_221,&g_221},{&g_298,(void*)0,&g_298,&g_221,&g_298,(void*)0}};
    union U1 * const l_761 = &g_454[1][5][2];
    int8_t *l_775 = &g_776;
    uint32_t l_796 = 0x2CCE7804L;
    union U1 *l_801 = &g_454[0][5][5];
    uint32_t **l_849 = &g_685;
    const union U0 **l_863 = &g_659;
    const uint16_t l_890 = 0xC0FEL;
    int32_t l_959 = 0L;
    int32_t l_960 = 0xAA2B8F75L;
    int32_t l_965 = 0xF9CD8997L;
    int32_t l_966 = 0x13B9BACBL;
    int32_t l_969 = 0xAD23D9C9L;
    int32_t l_970 = 0x794E849AL;
    int8_t l_971 = (-1L);
    int32_t l_972[3];
    int16_t ****l_992 = &g_990;
    int i, j;
    for (i = 0; i < 3; i++)
        l_972[i] = (-4L);
    for (g_23 = 7; (g_23 >= 3); g_23 -= 1)
    {
        int32_t *l_33 = (void*)0;
        int32_t *l_34 = &g_35;
        int32_t *l_36 = &g_35;
        int32_t *l_37 = &g_35;
        int32_t *l_38 = &g_35;
        uint64_t *l_42 = &l_39;
        uint16_t *l_49 = &g_30[6][6];
        int64_t *l_711 = &g_618;
        int64_t l_741 = 0xA1A0E7492C71CB6ELL;
        int32_t *l_813 = &g_35;
        int32_t *l_853 = &l_740;
        const uint32_t *l_868 = &g_869;
        int16_t l_884 = 0x066DL;
        int32_t l_886 = 0L;
        uint64_t l_926 = 0xF38111821DF2633ALL;
        int8_t *l_931 = &g_776;
        int64_t l_941 = 6L;
        int32_t l_957[5] = {0x7DE28E03L,0x7DE28E03L,0x7DE28E03L,0x7DE28E03L,0x7DE28E03L};
        int i;
        ++l_39;
    }
    for (g_23 = 4; (g_23 >= 0); g_23 -= 1)
    {
        uint8_t *l_998 = &g_580[9][0];
        uint8_t **l_997[8][9][3] = {{{&l_998,&l_998,&l_998},{&l_998,&l_998,(void*)0},{&l_998,&l_998,&l_998},{&l_998,&l_998,&l_998},{&l_998,(void*)0,&l_998},{&l_998,&l_998,(void*)0},{&l_998,&l_998,&l_998},{(void*)0,&l_998,&l_998},{&l_998,&l_998,&l_998}},{{(void*)0,(void*)0,&l_998},{(void*)0,(void*)0,&l_998},{(void*)0,&l_998,&l_998},{&l_998,&l_998,&l_998},{(void*)0,&l_998,&l_998},{&l_998,&l_998,&l_998},{&l_998,(void*)0,&l_998},{&l_998,&l_998,&l_998},{&l_998,&l_998,&l_998}},{{&l_998,&l_998,&l_998},{&l_998,&l_998,&l_998},{&l_998,(void*)0,&l_998},{&l_998,&l_998,&l_998},{(void*)0,&l_998,&l_998},{&l_998,&l_998,&l_998},{(void*)0,&l_998,&l_998},{&l_998,&l_998,&l_998},{&l_998,&l_998,&l_998}},{{&l_998,&l_998,&l_998},{&l_998,&l_998,&l_998},{&l_998,&l_998,&l_998},{(void*)0,&l_998,&l_998},{&l_998,&l_998,(void*)0},{&l_998,(void*)0,(void*)0},{&l_998,&l_998,&l_998},{&l_998,&l_998,&l_998},{&l_998,&l_998,&l_998}},{{&l_998,&l_998,&l_998},{&l_998,(void*)0,&l_998},{(void*)0,&l_998,(void*)0},{&l_998,&l_998,&l_998},{(void*)0,&l_998,&l_998},{(void*)0,&l_998,&l_998},{&l_998,(void*)0,&l_998},{&l_998,(void*)0,&l_998},{(void*)0,&l_998,&l_998}},{{&l_998,&l_998,&l_998},{(void*)0,&l_998,(void*)0},{(void*)0,&l_998,&l_998},{&l_998,(void*)0,&l_998},{&l_998,&l_998,&l_998},{&l_998,&l_998,&l_998},{&l_998,&l_998,&l_998},{&l_998,&l_998,(void*)0},{&l_998,&l_998,&l_998}},{{&l_998,&l_998,&l_998},{(void*)0,(void*)0,(void*)0},{&l_998,&l_998,&l_998},{&l_998,(void*)0,&l_998},{&l_998,&l_998,&l_998},{&l_998,(void*)0,(void*)0},{&l_998,&l_998,&l_998},{&l_998,&l_998,&l_998},{&l_998,&l_998,(void*)0}},{{(void*)0,&l_998,(void*)0},{&l_998,&l_998,(void*)0},{&l_998,&l_998,&l_998},{&l_998,&l_998,&l_998},{&l_998,&l_998,&l_998},{&l_998,&l_998,(void*)0},{&l_998,&l_998,&l_998},{&l_998,&l_998,&l_998},{(void*)0,&l_998,&l_998}}};
        int32_t l_1000[6][4][2] = {{{0xE50783D5L,0x03012752L},{(-2L),0x8796F786L},{0x03012752L,0x8796F786L},{(-2L),0x03012752L}},{{0xE50783D5L,0xE50783D5L},{0xE5EDD694L,0x6058AFA6L},{(-2L),2L},{0x6058AFA6L,0x8796F786L}},{{0x2C8364F4L,0x6058AFA6L},{0xE50783D5L,0xE5EDD694L},{0xE50783D5L,0x6058AFA6L},{0x2C8364F4L,0x8796F786L}},{{0x6058AFA6L,2L},{(-2L),0x6058AFA6L},{0xE5EDD694L,0xE50783D5L},{0xE50783D5L,0x03012752L}},{{(-2L),0x8796F786L},{0x03012752L,0x8796F786L},{(-2L),0x03012752L},{0xE50783D5L,0xE50783D5L}},{{0xE5EDD694L,0x6058AFA6L},{(-2L),2L},{0x6058AFA6L,0x8796F786L},{0x2C8364F4L,0x6058AFA6L}}};
        const union U1 ***l_1004 = &g_1002;
        int i, j, k;
        l_1000[1][3][0] &= (((safe_add_func_int8_t_s_s(g_693[g_23], (safe_lshift_func_int16_t_s_u(((*g_504) &= g_693[(g_23 + 1)]), 0)))) , l_775) == (g_999[1][0][5] = l_775));
        if (g_693[(g_23 + 1)])
            break;
        l_1004 = g_1001;
        for (l_966 = 1; (l_966 <= 6); l_966 += 1)
        {
            l_712 = &l_969;
        }
    }
    l_712 = (void*)0;
    return p_29;
}







static int16_t func_56(int32_t * p_57, uint16_t p_58)
{
    union U0 *l_702 = &g_63[0];
    union U0 **l_703[10][3] = {{(void*)0,(void*)0,(void*)0},{&g_173,&g_173,&g_173},{(void*)0,(void*)0,(void*)0},{&g_173,&g_173,&g_173},{(void*)0,(void*)0,(void*)0},{&g_173,&g_173,&g_173},{(void*)0,(void*)0,(void*)0},{&g_173,&g_173,&g_173},{(void*)0,(void*)0,(void*)0},{&g_173,&g_173,&g_173}};
    union U0 *l_704[1][8] = {{&g_63[6],&g_63[0],&g_63[0],&g_63[6],&g_63[0],&g_63[0],&g_63[6],&g_63[0]}};
    union U0 *l_706 = &g_63[6];
    int32_t l_709 = (-1L);
    int i, j;
    if ((safe_div_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((0x21L | 0xA6L), (safe_mul_func_int16_t_s_s(0xE887L, ((g_115 > g_23) ^ ((safe_lshift_func_int8_t_s_u((((((((l_704[0][7] = (g_115 , l_702)) == l_706) , (*l_702)) , 0x368DFE9484D92A6DLL) != (-6L)) , (-9L)) | p_58), 4)) && p_58)))))) & 0L), 1L)))
    {
        int32_t *l_707 = &g_115;
        int32_t **l_708 = &g_380;
        (*g_299) = (-1L);
        (*l_708) = l_707;
    }
    else
    {
        l_709 = 1L;
    }
    return p_58;
}







static int32_t * func_59(int32_t * p_60, union U0 p_61, int32_t * p_62)
{
    return p_60;
}







static int32_t * func_64(int32_t * p_65)
{
    int64_t l_78 = 0x292229A36E4CB239LL;
    uint8_t l_83 = 0x2BL;
    int16_t *l_84[2][8][1] = {{{&g_85},{&g_85},{&g_85},{&g_85},{&g_85},{&g_85},{&g_85},{&g_85}},{{&g_85},{&g_85},{&g_85},{&g_85},{&g_85},{&g_85},{&g_85},{&g_85}}};
    int32_t l_86 = 1L;
    union U0 l_94 = {0xBFE599A2L};
    int8_t l_134 = 0L;
    union U0 *l_138[10][8][3] = {{{&g_63[4],(void*)0,(void*)0},{&l_94,&g_63[4],&l_94},{&g_63[4],&g_63[2],&g_63[2]},{&g_63[2],(void*)0,(void*)0},{&l_94,(void*)0,&g_63[2]},{&l_94,&l_94,&l_94},{&l_94,&l_94,(void*)0},{&g_63[2],&l_94,&g_63[5]}},{{(void*)0,&g_63[4],&l_94},{&l_94,&l_94,&l_94},{(void*)0,&l_94,&g_63[4]},{&g_63[4],&g_63[4],(void*)0},{&l_94,&g_63[4],&g_63[4]},{&l_94,&l_94,&l_94},{&l_94,&g_63[4],&l_94},{&g_63[4],&l_94,&g_63[5]}},{{&g_63[1],&g_63[4],&g_63[4]},{&l_94,&g_63[4],&l_94},{&g_63[1],&l_94,&l_94},{&g_63[4],&l_94,(void*)0},{&l_94,&g_63[4],&l_94},{&l_94,&g_63[4],&l_94},{&l_94,&g_63[4],&g_63[4]},{&g_63[4],&g_63[4],&g_63[5]}},{{(void*)0,&g_63[4],&l_94},{&l_94,&l_94,&l_94},{(void*)0,&l_94,&g_63[4]},{&g_63[4],&g_63[4],(void*)0},{&l_94,&g_63[4],&g_63[4]},{&l_94,&l_94,&l_94},{&l_94,&g_63[4],&l_94},{&g_63[4],&l_94,&g_63[5]}},{{&g_63[1],&g_63[4],&g_63[4]},{&l_94,&g_63[4],&l_94},{&g_63[1],&l_94,&l_94},{&g_63[4],&l_94,(void*)0},{&l_94,&g_63[4],&l_94},{&l_94,&g_63[4],&l_94},{&l_94,&g_63[4],&g_63[4]},{&g_63[4],&g_63[4],&g_63[5]}},{{(void*)0,&g_63[4],&l_94},{&l_94,&l_94,&l_94},{(void*)0,&l_94,&g_63[4]},{&g_63[4],&g_63[4],(void*)0},{&l_94,&g_63[4],&g_63[4]},{&l_94,&l_94,&l_94},{&l_94,&g_63[4],&l_94},{&g_63[4],&l_94,&g_63[5]}},{{&g_63[1],&g_63[4],&g_63[4]},{&l_94,&g_63[4],&l_94},{&g_63[1],&l_94,&l_94},{&g_63[4],&l_94,(void*)0},{&l_94,&g_63[4],&l_94},{&l_94,&g_63[4],&l_94},{&l_94,&g_63[4],&g_63[4]},{&g_63[4],&g_63[4],&g_63[5]}},{{(void*)0,&g_63[4],&l_94},{&l_94,&l_94,&l_94},{(void*)0,&l_94,&g_63[4]},{&g_63[4],&g_63[4],(void*)0},{&l_94,&g_63[4],&g_63[4]},{&l_94,&l_94,&l_94},{&l_94,&g_63[4],&l_94},{&g_63[4],&l_94,&g_63[5]}},{{&g_63[1],&g_63[4],&g_63[4]},{&l_94,&g_63[4],&l_94},{&g_63[1],&l_94,&l_94},{&g_63[4],&l_94,(void*)0},{&l_94,&g_63[4],&l_94},{&l_94,&g_63[4],&l_94},{&l_94,&g_63[4],&g_63[4]},{&g_63[4],&g_63[2],&g_63[4]}},{{&g_63[4],&g_63[4],&g_63[1]},{&l_94,(void*)0,&l_94},{&g_63[4],&g_63[0],&g_63[7]},{(void*)0,&g_63[6],&g_63[2]},{&g_63[4],&g_63[4],&g_63[7]},{&l_94,&g_63[4],&l_94},{&g_63[2],&g_63[7],&g_63[1]},{(void*)0,&g_63[4],&g_63[4]}}};
    union U0 **l_137 = &l_138[4][7][0];
    union U0 ***l_156 = (void*)0;
    int32_t **l_164 = (void*)0;
    int16_t *l_179[4] = {&g_85,&g_85,&g_85,&g_85};
    int32_t l_197[2];
    uint32_t l_223[1][3];
    union U1 l_232[8] = {{0xF7L},{0xF7L},{0xF7L},{0xF7L},{0xF7L},{0xF7L},{0xF7L},{0xF7L}};
    uint16_t l_278 = 65535UL;
    uint8_t l_368 = 254UL;
    int32_t l_375 = 0xBCD7CE3DL;
    const uint64_t *l_502 = (void*)0;
    const union U0 ***l_544 = (void*)0;
    const union U0 ****l_543[1];
    const union U0 *****l_542 = &l_543[0];
    int64_t l_619[10] = {(-4L),0xF7A818D60E21BDA6LL,0L,0L,0xF7A818D60E21BDA6LL,(-4L),0xF7A818D60E21BDA6LL,0L,0L,0xF7A818D60E21BDA6LL};
    const union U0 **l_660 = (void*)0;
    int8_t l_663 = 0x48L;
    int8_t *l_664 = &l_134;
    int32_t *l_665 = (void*)0;
    int32_t *l_666 = &l_375;
    union U1 **l_667 = &g_453[4][0];
    uint32_t *l_683 = &l_223[0][2];
    uint32_t **l_682[2][10];
    uint32_t ***l_686 = &l_682[0][1];
    int32_t *l_690 = (void*)0;
    uint16_t *l_691 = &l_278;
    uint8_t *l_692 = &l_83;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_197[i] = (-4L);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_223[i][j] = 7UL;
    }
    for (i = 0; i < 1; i++)
        l_543[i] = &l_544;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
            l_682[i][j] = &l_683;
    }
    if (((func_19(g_23, p_65) & (l_86 = func_19(l_78, func_66((g_23 || g_63[4].f0), g_23, (safe_add_func_int64_t_s_s(((safe_rshift_func_int16_t_s_s(l_78, 11)) || l_78), l_83)), g_72)))) && l_83))
    {
        uint16_t l_89[2];
        union U0 l_95 = {0x28BBEDE7L};
        int32_t l_106 = 0x9496DE4BL;
        int32_t *l_141 = &g_116[4];
        union U0 ***l_153 = &l_137;
        union U0 ****l_174[3];
        int32_t l_201[2];
        int32_t l_214 = 0L;
        uint8_t l_215[3];
        int32_t *l_218 = &l_95.f1;
        int32_t *l_219[5][10][5] = {{{&g_23,&l_86,&l_197[1],&g_116[6],&l_86},{&g_23,&l_86,&g_116[6],&l_197[1],&l_86},{&g_23,&g_115,(void*)0,&g_72,(void*)0},{&g_23,&l_201[1],(void*)0,(void*)0,&l_201[1]},{&g_23,(void*)0,&g_72,(void*)0,&g_115},{&g_23,&l_86,&l_197[1],&g_116[6],&l_86},{&g_23,&l_86,&g_116[6],&l_197[1],&l_86},{&g_23,&g_115,(void*)0,&g_72,(void*)0},{&g_23,&l_201[1],(void*)0,(void*)0,&l_201[1]},{&g_23,(void*)0,&g_72,(void*)0,&g_115}},{{&g_23,&l_86,&l_197[1],&g_116[6],&l_86},{&g_23,&l_86,&g_116[6],&l_197[1],&l_86},{&g_23,&g_115,(void*)0,&g_72,(void*)0},{&g_23,&l_201[1],(void*)0,(void*)0,&l_201[1]},{&g_23,(void*)0,&g_72,(void*)0,&g_115},{&g_23,&l_86,&l_197[1],&g_116[6],&l_86},{&g_23,&l_86,&g_116[6],&l_197[1],&l_86},{&g_23,&g_115,(void*)0,&g_72,(void*)0},{&g_23,&l_201[1],(void*)0,(void*)0,&l_201[1]},{&g_23,(void*)0,&g_72,(void*)0,&g_115}},{{&g_23,&l_86,&l_197[1],&g_116[6],&l_86},{&g_23,&l_86,&g_116[6],&l_197[1],&l_86},{&g_23,&g_115,(void*)0,&g_72,(void*)0},{&g_23,&l_201[1],(void*)0,(void*)0,&l_201[1]},{&g_23,(void*)0,&g_72,(void*)0,&g_115},{&g_23,&l_86,&l_197[1],&g_116[6],&l_86},{&g_23,&l_86,&g_116[6],&l_197[1],&l_86},{&g_23,&g_115,(void*)0,&g_72,(void*)0},{&g_23,&l_201[1],&l_201[1],&l_201[1],&l_86},{(void*)0,&g_116[8],&l_86,&l_86,&g_116[4]}},{{(void*)0,&l_197[0],&g_115,(void*)0,&g_116[4]},{(void*)0,&g_116[4],(void*)0,&g_115,&l_197[0]},{(void*)0,&g_116[4],&l_86,&l_86,&g_116[8]},{(void*)0,&l_86,&l_201[1],&l_201[1],&l_86},{(void*)0,&g_116[8],&l_86,&l_86,&g_116[4]},{(void*)0,&l_197[0],&g_115,(void*)0,&g_116[4]},{(void*)0,&g_116[4],(void*)0,&g_115,&l_197[0]},{(void*)0,&g_116[4],&l_86,&l_86,&g_116[8]},{(void*)0,&l_86,&l_201[1],&l_201[1],&l_86},{(void*)0,&g_116[8],&l_86,&l_86,&g_116[4]}},{{(void*)0,&l_197[0],&g_115,(void*)0,&g_116[4]},{(void*)0,&g_116[4],(void*)0,&g_115,&l_197[0]},{(void*)0,&g_116[4],&l_86,&l_86,&g_116[8]},{(void*)0,&l_86,&l_201[1],&l_201[1],&l_86},{(void*)0,&g_116[8],&l_86,&l_86,&g_116[4]},{(void*)0,&l_197[0],&g_115,(void*)0,&g_116[4]},{(void*)0,&g_116[4],(void*)0,&g_115,&l_197[0]},{(void*)0,&g_116[4],&l_86,&l_86,&g_116[8]},{(void*)0,&l_86,&l_201[1],&l_201[1],&l_86},{(void*)0,&g_116[8],&l_86,&l_86,&g_116[4]}}};
        int32_t l_220 = 0xC9CDC36BL;
        int16_t l_222 = 0x37AAL;
        int32_t l_256 = 0x42A0BCDFL;
        uint64_t l_261 = 0xA34F1C786D4D23EDLL;
        int64_t *l_326 = &g_298;
        uint32_t l_361[3][8] = {{0x3DAA7EFFL,0x3DAA7EFFL,18446744073709551608UL,0x3DAA7EFFL,0x3DAA7EFFL,18446744073709551608UL,0x3DAA7EFFL,0x3DAA7EFFL},{0xC1A2D604L,0x3DAA7EFFL,0xC1A2D604L,0xC1A2D604L,0x3DAA7EFFL,0xC1A2D604L,0xC1A2D604L,0x3DAA7EFFL},{0x3DAA7EFFL,0xC1A2D604L,0xC1A2D604L,0x3DAA7EFFL,0xC1A2D604L,0xC1A2D604L,0x3DAA7EFFL,0xC1A2D604L}};
        uint64_t l_376 = 0x1BDB93795F682A5FLL;
        uint32_t l_403 = 1UL;
        uint64_t l_406 = 0UL;
        uint16_t l_409 = 0x3055L;
        int32_t l_417 = (-5L);
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_89[i] = 5UL;
        for (i = 0; i < 3; i++)
            l_174[i] = &g_171;
        for (i = 0; i < 2; i++)
            l_201[i] = 0x879EB5DBL;
        for (i = 0; i < 3; i++)
            l_215[i] = 1UL;
        if ((safe_sub_func_uint8_t_u_u(l_89[1], func_90(((l_94 , 0x54B2775FL) , l_95), g_30[6][6], func_66((safe_add_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(l_95.f0, (safe_div_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((((((((l_106 &= (&g_85 == &g_85)) , ((l_89[1] , &g_30[6][6]) == (void*)0)) && g_23) < 0L) == 0L) <= (*g_22)) && g_30[9][1]), l_89[1])) >= l_89[0]) , 0x3071L), l_89[1])) , 0xCAB1L), (-4L))))) , (*g_22)), 0x5F3680C6L)), g_30[6][6], g_30[6][6], g_63[4].f0)))))
        {
            uint8_t l_117 = 0x84L;
            uint16_t *l_130 = &l_89[1];
            uint16_t **l_129 = &l_130;
            union U0 ***l_139 = &l_137;
            uint32_t *l_142 = &g_143;
            int32_t l_144 = 1L;
            for (g_72 = (-27); (g_72 >= (-17)); g_72 = safe_add_func_int32_t_s_s(g_72, 2))
            {
                int32_t *l_114[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_114[i] = (void*)0;
                l_117--;
                return &g_72;
            }
            (*l_141) = ((safe_rshift_func_int16_t_s_u(0xA702L, 2)) , ((((safe_rshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s((((!(safe_sub_func_uint8_t_u_u((l_84[0][6][0] != ((*l_129) = &l_89[0])), (safe_sub_func_int16_t_s_s((((+l_134) ^ 1UL) ^ ((l_117 && (safe_add_func_uint64_t_u_u(((4294967295UL > ((*l_142) &= (((*l_139) = l_137) != ((!(l_141 != (void*)0)) , &l_138[9][4][0])))) <= g_63[4].f0), 0xE059EF32C1878804LL))) ^ 0L)), l_117))))) , (void*)0) == p_65), 0xB58D0A97L)) <= (*l_141)), l_134)) & l_117) | l_144) , (*g_22)));
        }
        else
        {
            int16_t l_147 = 0xD5CAL;
            union U0 ****l_154 = (void*)0;
            union U0 ****l_155[2];
            union U0 l_159 = {-8L};
            uint16_t *l_176 = (void*)0;
            uint16_t **l_175 = &l_176;
            int32_t l_193 = 0x9ACBE982L;
            int32_t l_198 = (-1L);
            int32_t l_199 = 0L;
            int32_t l_200 = 0x5BCD32BEL;
            int32_t l_202 = 0L;
            int32_t l_203 = 7L;
            int32_t l_205 = 0xD6298BA1L;
            int32_t l_207 = 0xFED2C084L;
            int32_t l_208 = 0xC4D2F787L;
            int32_t l_209[1];
            int i;
            for (i = 0; i < 2; i++)
                l_155[i] = &l_153;
            for (i = 0; i < 1; i++)
                l_209[i] = 0xDE7840DFL;
            for (g_72 = 9; (g_72 >= 0); g_72 -= 1)
            {
                union U0 *l_145 = &g_63[4];
                const int32_t **l_151 = (void*)0;
                int32_t **l_152 = &l_141;
                int i;
                g_116[g_72] = 0x83916AA3L;
            }
            l_156 = l_153;
            for (l_147 = 0; (l_147 <= 1); l_147 += 1)
            {
                union U0 l_177 = {-1L};
                int8_t l_185 = (-6L);
                int32_t l_204 = (-7L);
                int16_t l_206[9][3] = {{0xF2B0L,0xF2B0L,0xF2B0L},{0L,0x2FB5L,0L},{0xF2B0L,0xF2B0L,0xF2B0L},{0L,0x2FB5L,0L},{0xF2B0L,0xF2B0L,0xF2B0L},{0L,0x2FB5L,0L},{0xF2B0L,0xF2B0L,0xF2B0L},{0L,0x2FB5L,0L},{0xF2B0L,0xF2B0L,0xF2B0L}};
                int32_t l_210 = 1L;
                int32_t l_211 = 7L;
                int32_t l_212[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_212[i] = 0L;
                for (l_95.f2 = 0; (l_95.f2 <= 1); l_95.f2 += 1)
                {
                    int32_t ***l_165 = &l_164;
                    union U0 ****l_168[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    union U0 *****l_169[9] = {&l_155[0],&l_154,&l_154,&l_155[0],&l_154,&l_154,&l_155[0],&l_154,&l_154};
                    int64_t *l_178 = &l_78;
                    int i;
                    (*l_141) = (safe_add_func_int8_t_s_s((l_159 , (safe_sub_func_int64_t_s_s(l_89[l_95.f2], ((*l_178) = (safe_mul_func_int8_t_s_s((((*l_165) = l_164) != (void*)0), (((((((l_174[0] = (g_170 = l_168[1])) != &g_171) | (((l_89[l_147] <= (l_175 == (void*)0)) , l_177) , g_63[4].f0)) <= 0L) ^ l_159.f0) > l_147) , l_147))))))), (*l_141)));
                }
                for (l_106 = 1; (l_106 >= 0); l_106 -= 1)
                {
                    int32_t l_182 = (-9L);
                    int i;
                    (*p_65) = ((0UL ^ ((l_179[3] == (void*)0) < l_89[l_147])) | (&l_89[1] != ((g_23 , (0x75A03A18L > ((safe_rshift_func_uint8_t_u_s(((l_182 | l_159.f0) && (*l_141)), 6)) <= l_147))) , &l_89[l_147])));
                    (*l_141) ^= (*p_65);
                    (*p_65) |= 0L;
                }
                for (l_78 = 0; (l_78 <= 1); l_78 += 1)
                {
                    uint32_t l_183 = 0xB070FD17L;
                    int32_t **l_184 = &l_141;
                    int32_t *l_190 = &l_159.f1;
                    int32_t *l_191 = &l_177.f1;
                    int32_t *l_192 = &l_94.f1;
                    int32_t *l_194 = &l_177.f1;
                    int32_t *l_195 = &g_116[4];
                    int32_t *l_196[10][2] = {{&l_177.f1,&l_177.f1},{&l_177.f1,&l_177.f1},{&l_177.f1,&l_177.f1},{&l_177.f1,&l_177.f1},{&l_177.f1,&l_177.f1},{&l_177.f1,&l_177.f1},{&l_177.f1,&l_177.f1},{&l_177.f1,&l_177.f1},{&l_177.f1,&l_177.f1},{&l_177.f1,&l_177.f1}};
                    int16_t l_213 = (-6L);
                    int i, j;
                    for (l_159.f1 = 1; (l_159.f1 >= 0); l_159.f1 -= 1)
                    {
                        (*l_141) = (*p_65);
                        l_183 ^= 1L;
                    }
                    (*l_184) = &g_116[4];
                    (*p_65) = (l_185 & (((l_159.f2 < g_143) , (safe_sub_func_uint8_t_u_u((&l_156 != &l_153), 0x63L))) , ((safe_lshift_func_uint8_t_u_s(g_30[6][6], (((((*l_141) && (&g_172[5] == &g_172[1])) > 0x66L) & l_185) <= l_147))) < 255UL)));
                    l_215[2]--;
                }
            }
        }
        --l_223[0][1];
        for (l_106 = 0; (l_106 >= 0); l_106 -= 1)
        {
            int8_t *l_230 = &l_95.f2;
            int32_t l_231 = 0x732C53F8L;
            int32_t l_264 = 0x6E186ED3L;
            int32_t l_287 = (-7L);
            int32_t l_306 = (-8L);
            int32_t l_314 = 0x71500FCAL;
            int32_t l_373 = (-1L);
            int32_t l_374[9][9] = {{0x24BDF455L,0x8A5B444AL,0xD57220ABL,1L,(-1L),0x6734A3A9L,1L,0x24BDF455L,0x3CA17C83L},{0x8A5B444AL,0x24BDF455L,1L,(-1L),(-1L),1L,0x24BDF455L,0x8A5B444AL,0xD57220ABL},{(-10L),0x52E0C031L,1L,1L,0x52E0C031L,1L,(-1L),(-10L),0xB4632856L},{(-10L),0x24BDF455L,0xD57220ABL,(-10L),0x8A5B444AL,0xB4632856L,0x8A5B444AL,(-10L),0xD57220ABL},{0x8A5B444AL,0x8A5B444AL,0x6734A3A9L,0x52E0C031L,0x62571E29L,0xB4632856L,(-1L),0x8A5B444AL,0x3CA17C83L},{0x24BDF455L,(-10L),0x3CA17C83L,0x52E0C031L,0x8A5B444AL,1L,0x24BDF455L,0x24BDF455L,1L},{0x52E0C031L,(-10L),0x6734A3A9L,(-10L),0x52E0C031L,1L,1L,0x52E0C031L,1L},{0x24BDF455L,0x8A5B444AL,0xD57220ABL,1L,(-1L),0x6734A3A9L,1L,0x24BDF455L,0x3CA17C83L},{0x8A5B444AL,0x24BDF455L,1L,(-1L),(-1L),1L,0x24BDF455L,0x8A5B444AL,0xD57220ABL}};
            union U1 l_402 = {0x59L};
            uint64_t l_450 = 0x522187A63C1D34A6LL;
            int i, j;
        }
    }
    else
    {
        uint8_t l_478 = 0x24L;
        uint32_t *l_560[7][1][6] = {{{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143}},{{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143}},{{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143}},{{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143}},{{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143}},{{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143}},{{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143}}};
        int32_t l_565 = (-8L);
        int32_t l_589 = 0x7E86F757L;
        const union U1 l_600 = {1UL};
        union U0 l_601 = {1L};
        uint8_t l_639 = 0x48L;
        int i, j, k;
        for (g_72 = 0; (g_72 != (-12)); g_72 = safe_sub_func_int32_t_s_s(g_72, 6))
        {
            int8_t l_465[5][6] = {{0x17L,5L,5L,0x17L,0x85L,0x17L},{0x17L,0x85L,0x17L,5L,5L,0x17L},{0x37L,0x37L,5L,(-10L),5L,0x37L},{5L,0x85L,(-10L),(-10L),0x85L,5L},{0x37L,5L,(-10L),5L,0x37L,0x37L}};
            int32_t l_477 = 0x4C582A98L;
            const int32_t l_485[1] = {0x49448662L};
            int32_t l_527[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int8_t l_539[9][9][2] = {{{(-10L),0x8BL},{(-10L),1L},{(-1L),8L},{1L,(-10L)},{0L,0x7DL},{(-1L),0xE9L},{0xE9L,(-1L)},{0xA8L,0xF2L},{0xFDL,0L}},{{(-1L),0x69L},{0xECL,(-6L)},{0x69L,(-1L)},{(-1L),0x0BL},{0xCEL,3L},{0xEAL,0x8BL},{(-10L),2L},{0L,0L},{(-8L),0x40L}},{{0x69L,6L},{(-7L),(-1L)},{(-10L),0xCEL},{0L,0x98L},{0xF2L,0x4EL},{0x40L,(-1L)},{0x98L,(-10L)},{0x69L,1L},{0xE9L,7L}},{{(-4L),7L},{0xE9L,1L},{0x69L,(-10L)},{0x98L,(-1L)},{0x40L,0x4EL},{0xF2L,0x98L},{0L,0xCEL},{(-10L),(-1L)},{(-7L),6L}},{{0x69L,0x40L},{(-8L),0L},{0L,2L},{(-10L),0x8BL},{0xEAL,3L},{(-4L),1L},{0xA8L,0xC0L},{(-1L),0x82L},{(-10L),1L}},{{0x4DL,0x30L},{(-1L),(-2L)},{0x8BL,0x69L},{(-5L),(-5L)},{0xC0L,0xECL},{0x4EL,0xE9L},{1L,(-10L)},{0xEBL,1L},{0L,0x7DL}},{{0L,1L},{0xEBL,(-10L)},{1L,0xE9L},{0x4EL,0xECL},{0xC0L,(-5L)},{(-5L),0x69L},{0x8BL,(-2L)},{(-1L),0x30L},{0x4DL,1L}},{{(-10L),0x82L},{(-1L),0xC0L},{0xA8L,1L},{(-4L),3L},{0xEAL,0x8BL},{(-10L),2L},{0L,0L},{(-8L),0x40L},{0x69L,6L}},{{(-7L),(-1L)},{(-10L),0xCEL},{0L,0x98L},{0xF2L,0x4EL},{0x40L,(-1L)},{0x98L,(-10L)},{0x69L,1L},{0xE9L,7L},{(-4L),7L}}};
            union U0 *****l_541 = &g_170;
            uint64_t *l_550 = &g_494;
            uint64_t **l_549 = &l_550;
            uint64_t l_573 = 0x3843A48D94DAF12BLL;
            int32_t *l_622 = &l_86;
            int i, j, k;
            for (l_83 = 5; (l_83 == 24); l_83 = safe_add_func_int64_t_s_s(l_83, 4))
            {
                int32_t *l_460 = &g_116[4];
                int32_t *l_461 = &l_197[0];
                int32_t *l_462 = (void*)0;
                int32_t *l_463 = &l_86;
                int32_t *l_464 = (void*)0;
                int32_t *l_466 = &g_116[1];
                int32_t *l_467 = (void*)0;
                int32_t *l_468 = &g_116[8];
                int32_t *l_469 = &l_94.f1;
                int32_t *l_470 = &l_86;
                int32_t *l_471 = &l_94.f1;
                int32_t *l_472 = (void*)0;
                int32_t *l_473 = &g_357;
                int32_t *l_474 = &g_357;
                int32_t *l_475 = &l_197[1];
                int32_t *l_476[1][6][2] = {{{&l_375,&g_116[4]},{&l_375,&l_375},{&g_116[4],&l_375},{&l_375,&g_116[4]},{&l_375,&l_375},{&g_116[4],&l_375}}};
                uint64_t *l_493 = &g_494;
                uint64_t **l_495 = &l_493;
                uint32_t *l_501[9];
                int16_t ***l_505 = (void*)0;
                union U1 l_526 = {0x08L};
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_501[i] = &l_223[0][1];
                --l_478;
                (*g_299) = ((safe_mul_func_int8_t_s_s(0x06L, (l_465[2][3] ^ (((safe_mod_func_int32_t_s_s((l_485[0] != (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((~(safe_add_func_int32_t_s_s((((((*l_495) = l_493) == ((g_358 = (+(safe_mul_func_uint8_t_u_u((l_485[0] || (safe_mul_func_int16_t_s_s(g_454[0][5][5].f0, (p_65 != (void*)0)))), 246UL)))) , l_502)) && l_478) , (*p_65)), 0UL))), l_478)), (*p_65)))), g_116[5])) , g_23) <= l_478)))) != (-10L));
                g_503 = g_503;
                for (g_298 = 0; (g_298 <= 2); ++g_298)
                {
                    int32_t l_528 = 0x66C010E8L;
                    int32_t l_529 = 7L;
                    int8_t *l_534 = &l_94.f2;
                    uint64_t *l_537 = &g_538;
                    l_529 = (safe_sub_func_int8_t_s_s((g_494 | (l_528 &= (((1UL ^ (((((safe_add_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((l_477 < ((safe_mul_func_uint16_t_u_u((*l_468), l_485[0])) >= (((safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u((l_232[0] , g_115), 12)) || ((l_527[7] = (safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((l_478 >= (l_526 , l_478)), g_63[4].f0)) && 253UL), l_485[0]))) >= g_454[0][5][5].f0)), 4294967295UL)), 6)) < 0x3E4B6A37L) | l_478))), 2L)) | (**g_503)), (*p_65))) , g_116[8]) > 0x7B95F03FL) == l_197[1]) >= 0x05L)) || 0xFAL) == g_30[6][6]))), l_465[4][3]));
                    if (((g_357 , (((((0x8483L ^ (safe_div_func_int16_t_s_s(1L, 0x7EDFL))) != g_454[0][5][5].f0) >= (((((*g_504) = (((safe_mul_func_uint8_t_u_u((((*l_534) = 0x1DL) || (safe_sub_func_uint64_t_u_u(((*l_537) |= ((((*l_493) = (l_528 < (((&l_502 != (void*)0) , 0xB17F939C290CC418LL) , 0xA7DDB5B4E1015C25LL))) , (void*)0) == (void*)0)), l_465[0][5]))), l_539[0][4][0])) , (-7L)) != 0UL)) > l_478) , 0L) & 4294967288UL)) < g_30[4][0]) < l_478)) == 1L))
                    {
                        (*l_470) ^= 1L;
                        (*l_470) &= 0x7D671D4BL;
                    }
                    else
                    {
                        const int16_t l_540 = 1L;
                        p_65 = p_65;
                        if (l_540)
                            continue;
                    }
                }
            }
            if ((l_541 == l_542))
            {
                union U0 l_551 = {0xFFE4556CL};
                uint32_t *l_555 = &l_223[0][1];
                uint32_t **l_554 = &l_555;
                uint16_t *l_563 = (void*)0;
                uint16_t *l_564[2][5][1] = {{{&g_30[3][2]},{&l_278},{&g_30[3][2]},{&l_278},{&g_30[3][2]}},{{&l_278},{&g_30[3][2]},{&l_278},{&g_30[3][2]},{&l_278}}};
                int32_t *l_579[1];
                int32_t l_620[8] = {2L,2L,2L,2L,2L,2L,2L,2L};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_579[i] = (void*)0;
                l_527[8] = (safe_div_func_int64_t_s_s((safe_add_func_uint8_t_u_u((l_549 == (l_551 , (g_552 = &l_550))), (((*l_554) = p_65) != p_65))), (((safe_mod_func_int32_t_s_s((*p_65), (safe_div_func_int16_t_s_s(((void*)0 == l_560[1][0][3]), (**g_503))))) , l_478) & g_221)));
                l_477 |= (g_143 && ((0xF176L != (l_539[0][4][0] , ((safe_div_func_uint8_t_u_u(g_30[6][6], 0xB1L)) || 0x2E56B421L))) || (((l_565 = l_527[7]) | 0x3FCBL) | (+g_143))));
                if ((l_589 ^= (safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((l_477 && (safe_div_func_int64_t_s_s(l_573, ((safe_add_func_uint8_t_u_u(l_565, (safe_unary_minus_func_uint32_t_u(((g_580[9][0] &= ((g_454[0][5][5].f0 || (-7L)) < (0xA948478EL & (0xC1CBL >= (safe_lshift_func_int16_t_s_s(l_478, 6)))))) , (safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(l_551.f0, 9)), l_551.f0)), (*g_504))), l_527[4]))))))) && (*p_65))))), g_116[4])), 0xD0ECL))))
                {
                    int8_t *l_598 = (void*)0;
                    int8_t *l_599 = &l_465[4][1];
                    int8_t *l_614 = &l_134;
                    int32_t l_615 = 7L;
                    int32_t l_616 = 0x165E126FL;
                    int8_t *l_617 = &l_94.f2;
                    int32_t l_621 = 0L;
                    if ((((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((g_143 = (safe_mod_func_uint32_t_u_u((g_63[4].f0 == (safe_add_func_uint16_t_u_u((((*l_599) = (-1L)) ^ (l_600 , (l_601 , (((((safe_div_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((g_618 = ((*l_617) = ((l_527[7] |= (safe_mul_func_uint16_t_u_u(l_600.f0, (((*g_299) = ((safe_mod_func_int8_t_s_s((l_615 |= ((*l_614) = (safe_add_func_int32_t_s_s((l_478 <= l_485[0]), ((safe_rshift_func_uint8_t_u_s((((l_551.f1 = (0x88F85B2DL | ((((**g_503) = (*g_504)) || 0x3A6DL) , 0xD7803B80L))) , &g_454[1][3][2]) == (void*)0), l_600.f0)) >= 0xB85DL))))), 0x2DL)) != l_616)) < l_600.f0)))) < l_565))), 0UL)) >= 1L), l_619[6])) , l_565) <= l_620[0]) <= l_616) , g_143)))), 0x5EE0L))), (*p_65)))), 0x7DF81154L)), l_621)) & 0xF60CD13DL) > 0x3106E5FDD9AB3C8DLL))
                    {
                        (*g_299) |= l_539[4][7][0];
                        return p_65;
                    }
                    else
                    {
                        int8_t l_628 = 0xF4L;
                        int64_t *l_630 = &l_619[8];
                        uint64_t *l_637 = &g_538;
                        int32_t **l_638 = &g_299;
                        (*g_299) = (safe_sub_func_uint32_t_u_u((18446744073709551614UL || (l_615 , ((*l_637) = ((safe_div_func_int64_t_s_s(((*l_630) = ((~l_628) | g_629)), (safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s(0x9DF50144L, (safe_rshift_func_int8_t_s_u((l_565 ^= ((((**g_552) &= (9UL != g_115)) , &g_221) != (void*)0)), 1)))), (*l_622))))) , l_616)))), 7UL));
                        (*l_638) = p_65;
                        if ((*p_65))
                            break;
                        --l_639;
                    }
                    if ((*p_65))
                        break;
                    if ((*p_65))
                        break;
                    if (((*g_552) == (*l_549)))
                    {
                        return p_65;
                    }
                    else
                    {
                        uint16_t ***l_642 = (void*)0;
                        uint16_t ***l_643 = (void*)0;
                        uint16_t **l_645 = &l_564[1][3][0];
                        uint16_t ***l_644[6] = {&l_645,&l_645,&l_645,&l_645,&l_645,&l_645};
                        int i;
                        g_648 = (g_646 = (void*)0);
                        if ((*p_65))
                            break;
                        return p_65;
                    }
                }
                else
                {
                    if ((*p_65))
                        break;
                    if (g_649)
                        break;
                }
            }
            else
            {
                return p_65;
            }
        }
    }
    (*g_299) &= (0xB9L & g_580[9][0]);
    (*l_666) &= (safe_sub_func_int64_t_s_s(((((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(g_116[5], ((*g_171) != (l_660 = g_658[1])))), 0xA5L)), l_83)) , &p_65) == &g_22) , (g_454[0][5][5].f0 || ((*l_664) ^= ((safe_rshift_func_int16_t_s_s(((*p_65) & 0x374CFCDAL), 8)) || l_663)))), l_197[0]));
    l_666 = func_66((((void*)0 != l_667) && (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((g_298 >= ((*l_664) = (safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((*l_692) = (((safe_mul_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(((*l_691) |= (((((((((*l_686) = (g_684 = l_682[0][1])) != (g_687 = &g_685)) , &g_143) == ((*g_659) , func_66(((*p_65) |= ((*l_666) ^ (safe_div_func_uint64_t_u_u((0x28FDL <= 0x3772L), (*l_666))))), (*l_666), g_618, (*g_504)))) && (*p_65)) == 0x97F0L) || (*l_666)) & (*l_666))), (*l_666))) , (-3L)), 0xB76707F3L)) , (*l_666)), 0xAAL)) , (*l_666)) , 0x7EL)), g_580[9][0])), (*l_666))))), 1)), (*l_666)))), g_693[1], g_693[5], (**g_503));
    return p_65;
}







static int32_t * func_66(const int32_t p_67, uint16_t p_68, int8_t p_69, int16_t p_70)
{
    int32_t *l_71 = &g_72;
    int32_t l_73[3][1];
    int32_t *l_74[8] = {&g_23,&g_23,&g_23,&g_23,&g_23,&g_23,&g_23,&g_23};
    uint32_t l_75[9][8][3] = {{{1UL,0xECD3A2B2L,4294967291UL},{4294967295UL,4294967288UL,1UL},{0xE6CF93A1L,4294967291UL,4294967295UL},{0x5E220DBAL,4294967288UL,1UL},{1UL,1UL,5UL},{0x9855EAA6L,4294967291UL,2UL},{0xEA481B1FL,1UL,0x7375CE82L},{4294967295UL,6UL,0x6349BB04L}},{{0x3A523A5BL,4294967288UL,0x6349BB04L},{0x5E220DBAL,4294967295UL,0x7375CE82L},{2UL,1UL,2UL},{4294967294UL,0x5E220DBAL,5UL},{6UL,4294967294UL,1UL},{0x3A523A5BL,1UL,4294967291UL},{0xF1995C1DL,1UL,4294967295UL},{0x3A523A5BL,1UL,0UL}},{{6UL,0xF1995C1DL,0x7375CE82L},{4294967294UL,0xEA481B1FL,1UL},{2UL,0x5E220DBAL,4294967288UL},{0x5E220DBAL,4294967291UL,1UL},{0x3A523A5BL,4294967291UL,1UL},{4294967295UL,0x5E220DBAL,4294967295UL},{0xEA481B1FL,0xEA481B1FL,0x6349BB04L},{0x9855EAA6L,0xF1995C1DL,4294967291UL}},{{1UL,1UL,1UL},{2UL,1UL,0x3A523A5BL},{6UL,1UL,1UL},{0xEA481B1FL,4294967294UL,4294967291UL},{0x39B42ED1L,0x5E220DBAL,0x6349BB04L},{4294967288UL,1UL,4294967295UL},{0x9855EAA6L,4294967295UL,1UL},{4294967294UL,4294967288UL,1UL}},{{4294967294UL,6UL,4294967288UL},{0x9855EAA6L,1UL,1UL},{4294967288UL,4294967291UL,0x7375CE82L},{0x39B42ED1L,1UL,0UL},{0xEA481B1FL,4294967288UL,4294967295UL},{6UL,4294967295UL,4294967291UL},{2UL,4294967288UL,1UL},{1UL,1UL,5UL}},{{0x9855EAA6L,4294967291UL,2UL},{0xEA481B1FL,1UL,0x7375CE82L},{4294967295UL,6UL,0x6349BB04L},{0x3A523A5BL,4294967288UL,0x6349BB04L},{0x5E220DBAL,4294967295UL,0x7375CE82L},{2UL,1UL,2UL},{4294967294UL,0x5E220DBAL,5UL},{6UL,4294967294UL,1UL}},{{0x3A523A5BL,1UL,4294967291UL},{0xF1995C1DL,1UL,4294967295UL},{0x3A523A5BL,1UL,0UL},{6UL,0xF1995C1DL,0x7375CE82L},{4294967294UL,0xEA481B1FL,1UL},{2UL,0x5E220DBAL,4294967288UL},{0x5E220DBAL,4294967291UL,1UL},{0x3A523A5BL,4294967291UL,1UL}},{{4294967295UL,0x5E220DBAL,4294967295UL},{0xEA481B1FL,0xEA481B1FL,0x6349BB04L},{0x9855EAA6L,0xF1995C1DL,4294967291UL},{1UL,1UL,1UL},{2UL,1UL,0x3A523A5BL},{6UL,1UL,1UL},{0xEA481B1FL,4294967294UL,4294967291UL},{0x39B42ED1L,0x5E220DBAL,0x6349BB04L}},{{4294967288UL,1UL,4294967295UL},{0x9855EAA6L,4294967295UL,1UL},{4294967294UL,4294967288UL,1UL},{4294967294UL,1UL,4294967288UL},{1UL,0x39B42ED1L,0x39B42ED1L},{4294967288UL,4294967295UL,4294967295UL},{0x7375CE82L,4294967294UL,5UL},{3UL,4294967288UL,1UL}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_73[i][j] = (-1L);
    }
    l_75[7][3][1]++;
    return &g_72;
}







static uint8_t func_90(union U0 p_91, uint32_t p_92, int32_t * p_93)
{
    uint32_t l_111 = 0xB1B60A8CL;
    for (g_85 = 0; (g_85 >= 28); g_85++)
    {
        union U0 *l_109[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        union U0 **l_110 = &l_109[4];
        int i;
        (*l_110) = l_109[4];
    }
    return l_111;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_12[i], "g_12[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_23, "g_23", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_30[i][j], "g_30[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_35, "g_35", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_63[i].f0, "g_63[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_116[i], "g_116[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_454[i][j][k].f0, "g_454[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_580[i][j], "g_580[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_629, "g_629", print_hash_value);
    transparent_crc(g_649, "g_649", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_693[i], "g_693[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_705.f0, "g_705.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_739[i][j], "g_739[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_776, "g_776", print_hash_value);
    transparent_crc(g_867, "g_867", print_hash_value);
    transparent_crc(g_869, "g_869", print_hash_value);
    transparent_crc(g_930, "g_930", print_hash_value);
    transparent_crc(g_1039, "g_1039", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
