// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = ACE5D858
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
   signed f0 : 31;
   signed f1 : 26;
   int32_t f2;
   signed f3 : 22;
   signed f4 : 5;
   signed f5 : 31;
};

struct S1 {
   struct S0 f0;
   int8_t f1;
};

struct S2 {
   int16_t f0;
   uint16_t f1;
   int16_t f2;
   struct S0 f3;
};


static int32_t g_3[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int32_t g_4 = 0x8AFC1DA7L;
static int32_t g_5 = 7L;
static int16_t g_15 = 0xEB38L;
static int16_t * const g_32 = (void*)0;
static struct S0 g_38[9] = {{23888,-6737,0xADF851F0L,808,-2,30154},{23888,-6737,0xADF851F0L,808,-2,30154},{23888,-6737,0xADF851F0L,808,-2,30154},{23888,-6737,0xADF851F0L,808,-2,30154},{23888,-6737,0xADF851F0L,808,-2,30154},{23888,-6737,0xADF851F0L,808,-2,30154},{23888,-6737,0xADF851F0L,808,-2,30154},{23888,-6737,0xADF851F0L,808,-2,30154},{23888,-6737,0xADF851F0L,808,-2,30154}};
static uint64_t g_93 = 0x5ACB962FAD3287B7LL;
static uint8_t g_101[9] = {0x88L,9UL,9UL,0x88L,9UL,9UL,0x88L,9UL,9UL};
static struct S0 g_103 = {6717,3167,0x771C77DDL,659,-0,-30606};
static uint32_t g_136 = 4294967295UL;
static uint16_t g_142 = 0x5888L;
static int16_t g_148 = 0x901EL;
static struct S1 g_162[5] = {{{-15819,5399,0x367B5E8CL,-624,0,-23094},0x62L},{{-15819,5399,0x367B5E8CL,-624,0,-23094},0x62L},{{-15819,5399,0x367B5E8CL,-624,0,-23094},0x62L},{{-15819,5399,0x367B5E8CL,-624,0,-23094},0x62L},{{-15819,5399,0x367B5E8CL,-624,0,-23094},0x62L}};
static struct S2 g_227[9][3] = {{{3L,0x166EL,5L,{-21561,-5802,0x0AD43505L,-1106,-4,-3725}},{4L,0xC305L,0xE478L,{-2727,-5952,0x87EBC9F0L,430,2,394}},{0xB98EL,0x5F7CL,0xAF0CL,{-46283,1518,7L,-755,-3,22238}}},{{0L,65535UL,0xCFA9L,{2066,-1460,-5L,1802,-2,25017}},{0L,65535UL,0xCFA9L,{2066,-1460,-5L,1802,-2,25017}},{0xCAB4L,1UL,-7L,{-4763,-3708,-9L,175,1,35024}}},{{8L,65535UL,-2L,{-25693,4476,1L,-1857,-2,5247}},{4L,0xC305L,0xE478L,{-2727,-5952,0x87EBC9F0L,430,2,394}},{4L,0xC305L,0xE478L,{-2727,-5952,0x87EBC9F0L,430,2,394}}},{{0xCAB4L,1UL,-7L,{-4763,-3708,-9L,175,1,35024}},{0x78D3L,65535UL,7L,{-14887,-5319,0x74EEE24FL,-1242,3,43454}},{5L,65530UL,0x1F52L,{18339,-3480,-1L,-1455,2,-1736}}},{{8L,65535UL,-2L,{-25693,4476,1L,-1857,-2,5247}},{0x977EL,0x16D6L,0x688AL,{42237,-5520,0x952BEEB1L,1760,3,35318}},{8L,65535UL,-2L,{-25693,4476,1L,-1857,-2,5247}}},{{0xCAB4L,1UL,-7L,{-4763,-3708,-9L,175,1,35024}},{-1L,5UL,0x2A31L,{7618,-7235,3L,-538,1,39776}},{0x78D3L,65535UL,7L,{-14887,-5319,0x74EEE24FL,-1242,3,43454}}},{{4L,0xC305L,0xE478L,{-2727,-5952,0x87EBC9F0L,430,2,394}},{4L,0xC305L,0xE478L,{-2727,-5952,0x87EBC9F0L,430,2,394}},{8L,65535UL,-2L,{-25693,4476,1L,-1857,-2,5247}}},{{5L,65530UL,0x1F52L,{18339,-3480,-1L,-1455,2,-1736}},{-1L,5UL,0x2A31L,{7618,-7235,3L,-538,1,39776}},{-1L,5UL,0x2A31L,{7618,-7235,3L,-538,1,39776}}},{{8L,65535UL,-2L,{-25693,4476,1L,-1857,-2,5247}},{3L,0x166EL,5L,{-21561,-5802,0x0AD43505L,-1106,-4,-3725}},{0x977EL,0x16D6L,0x688AL,{42237,-5520,0x952BEEB1L,1760,3,35318}}}};
static uint8_t *g_254 = &g_101[2];
static uint8_t **g_253 = &g_254;
static uint8_t g_274 = 0x4AL;
static struct S0 *g_280 = &g_103;
static struct S0 **g_279[2] = {&g_280,&g_280};
static int32_t g_284 = (-10L);
static uint64_t g_299 = 0x8DFC91880AF4A388LL;
static const int64_t g_323[7] = {0x4A82A2DD4F2908AALL,0x4A82A2DD4F2908AALL,0x4A82A2DD4F2908AALL,0x4A82A2DD4F2908AALL,0x4A82A2DD4F2908AALL,0x4A82A2DD4F2908AALL,0x4A82A2DD4F2908AALL};
static const int64_t *g_322[5] = {&g_323[0],&g_323[0],&g_323[0],&g_323[0],&g_323[0]};
static int32_t g_396[8] = {0xE005B330L,0xE005B330L,0xE005B330L,0xE005B330L,0xE005B330L,0xE005B330L,0xE005B330L,0xE005B330L};
static struct S1 g_400 = {{13050,5428,0xA302CC0FL,1793,-1,13640},0x8FL};
static int32_t **g_424 = (void*)0;
static int32_t ***g_423[6][6] = {{&g_424,&g_424,&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424,&g_424,&g_424}};
static const uint8_t ** const *g_457 = (void*)0;
static uint64_t g_495 = 18446744073709551615UL;
static int32_t *g_504[7][10][2] = {{{&g_5,&g_3[1]},{&g_400.f0.f2,&g_5},{&g_3[1],(void*)0},{(void*)0,&g_3[1]},{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_3[1]},{(void*)0,(void*)0},{&g_3[1],&g_5},{&g_400.f0.f2,&g_3[1]}},{{&g_5,(void*)0},{&g_5,&g_3[1]},{&g_400.f0.f2,&g_5},{&g_3[1],(void*)0},{(void*)0,&g_3[1]},{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_3[1]},{(void*)0,(void*)0},{&g_3[1],&g_5}},{{&g_400.f0.f2,&g_3[1]},{&g_5,(void*)0},{&g_5,&g_3[1]},{&g_400.f0.f2,&g_5},{&g_3[1],(void*)0},{(void*)0,&g_3[1]},{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_3[1]},{(void*)0,(void*)0}},{{&g_3[1],&g_5},{&g_400.f0.f2,&g_3[1]},{&g_5,(void*)0},{&g_5,&g_3[1]},{&g_400.f0.f2,&g_5},{&g_3[1],(void*)0},{(void*)0,&g_3[1]},{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_3[1]}},{{(void*)0,(void*)0},{&g_3[1],&g_5},{&g_400.f0.f2,&g_3[1]},{&g_5,(void*)0},{&g_5,&g_3[1]},{&g_400.f0.f2,&g_5},{&g_3[1],(void*)0},{(void*)0,&g_3[1]},{&g_5,&g_5},{&g_5,&g_5}},{{&g_5,&g_3[1]},{(void*)0,(void*)0},{&g_3[1],&g_5},{&g_400.f0.f2,&g_3[1]},{&g_5,(void*)0},{&g_5,&g_3[1]},{&g_400.f0.f2,&g_5},{&g_3[1],(void*)0},{(void*)0,&g_3[1]},{&g_5,&g_5}},{{&g_5,&g_396[4]},{&g_5,&g_5},{&g_5,&g_400.f0.f2},{(void*)0,&g_5},{(void*)0,(void*)0},{&g_3[1],&g_103.f2},{&g_3[1],(void*)0},{(void*)0,&g_5},{(void*)0,&g_400.f0.f2},{&g_5,&g_5}}};
static int64_t g_507 = 0xE7D2C9E07232B5D3LL;
static int32_t g_530 = 0x6CC590DAL;
static int8_t g_534 = (-1L);
static const int32_t ***g_540 = (void*)0;
static const int32_t ****g_539 = &g_540;
static const int32_t *****g_538 = &g_539;
static const uint16_t *g_565 = &g_142;
static const uint16_t ** const g_564[3] = {&g_565,&g_565,&g_565};
static const uint16_t ** const *g_563 = &g_564[0];
static uint16_t g_588 = 0UL;
static int16_t g_597 = 0L;
static int64_t g_664 = 0L;
static uint16_t *g_682 = &g_142;
static uint16_t **g_681[9][10] = {{&g_682,(void*)0,(void*)0,&g_682,&g_682,&g_682,&g_682,&g_682,&g_682,&g_682},{&g_682,&g_682,&g_682,&g_682,&g_682,&g_682,&g_682,&g_682,&g_682,&g_682},{&g_682,&g_682,&g_682,&g_682,&g_682,&g_682,&g_682,&g_682,&g_682,(void*)0},{&g_682,&g_682,&g_682,&g_682,(void*)0,(void*)0,&g_682,(void*)0,&g_682,&g_682},{&g_682,&g_682,&g_682,&g_682,(void*)0,&g_682,&g_682,&g_682,(void*)0,&g_682},{&g_682,&g_682,&g_682,&g_682,&g_682,&g_682,&g_682,&g_682,(void*)0,(void*)0},{&g_682,(void*)0,&g_682,(void*)0,&g_682,&g_682,(void*)0,&g_682,(void*)0,&g_682},{&g_682,&g_682,&g_682,&g_682,(void*)0,&g_682,&g_682,&g_682,&g_682,(void*)0},{&g_682,&g_682,&g_682,&g_682,(void*)0,&g_682,&g_682,(void*)0,&g_682,&g_682}};
static uint16_t *** const g_680 = &g_681[4][2];
static uint16_t *** const *g_679 = &g_680;
static int16_t g_734 = 0xFC2CL;
static int32_t g_735[9] = {0x0CC52DEAL,(-1L),0x0CC52DEAL,(-1L),0x0CC52DEAL,(-1L),0x0CC52DEAL,(-1L),0x0CC52DEAL};
static uint32_t *g_848 = (void*)0;
static uint32_t **g_847 = &g_848;
static struct S0 ***g_882 = &g_279[0];
static uint8_t ***g_907[6][1] = {{&g_253},{&g_253},{&g_253},{&g_253},{&g_253},{&g_253}};
static uint8_t ****g_906[7] = {&g_907[2][0],&g_907[2][0],&g_907[2][0],&g_907[2][0],&g_907[2][0],&g_907[2][0],&g_907[2][0]};
static struct S1 *g_936 = &g_162[3];
static int32_t ** const *g_993 = (void*)0;
static int32_t ** const **g_992 = &g_993;
static struct S0 * const * const g_1004 = &g_280;
static struct S0 * const * const *g_1003 = &g_1004;
static struct S0 * const * const **g_1002 = &g_1003;
static int64_t g_1270[5] = {0x2D60535DA3DB781FLL,0x2D60535DA3DB781FLL,0x2D60535DA3DB781FLL,0x2D60535DA3DB781FLL,0x2D60535DA3DB781FLL};
static int16_t g_1273 = 0x546AL;
static uint8_t g_1306 = 255UL;
static const struct S0 * const g_1322 = &g_38[8];
static const struct S0 * const *g_1321 = &g_1322;
static const struct S0 * const **g_1320 = &g_1321;
static const struct S0 * const ***g_1319 = &g_1320;
static const struct S0 * const ****g_1318 = &g_1319;
static struct S1 **g_1377 = (void*)0;
static struct S1 **g_1378 = &g_936;
static uint32_t **g_1399 = (void*)0;
static int32_t *****g_1406 = (void*)0;
static int32_t ****g_1491 = &g_423[3][3];
static int32_t *****g_1490[2] = {&g_1491,&g_1491};
static uint64_t *g_1506 = &g_93;
static uint64_t **g_1505[9] = {&g_1506,&g_1506,&g_1506,&g_1506,&g_1506,&g_1506,&g_1506,&g_1506,&g_1506};
static int64_t **g_1537 = (void*)0;
static int32_t g_1583 = 0xF2814515L;
static int64_t ***g_1595 = (void*)0;
static int64_t ****g_1594[5][10] = {{&g_1595,&g_1595,(void*)0,&g_1595,&g_1595,&g_1595,(void*)0,&g_1595,&g_1595,(void*)0},{&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,(void*)0,&g_1595,&g_1595,&g_1595},{&g_1595,&g_1595,&g_1595,&g_1595,(void*)0,(void*)0,&g_1595,&g_1595,&g_1595,&g_1595},{&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595},{&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595}};
static uint16_t g_1772 = 65535UL;
static const int32_t *g_1775 = (void*)0;
static struct S2 *g_1949[2][8][9] = {{{&g_227[6][1],&g_227[0][2],&g_227[6][1],&g_227[6][1],&g_227[6][1],&g_227[6][1],&g_227[6][1],&g_227[6][1],&g_227[0][2]},{&g_227[8][2],(void*)0,&g_227[1][2],&g_227[2][2],(void*)0,&g_227[6][1],&g_227[3][2],(void*)0,&g_227[4][2]},{&g_227[3][0],(void*)0,&g_227[6][1],(void*)0,(void*)0,&g_227[1][0],&g_227[6][1],&g_227[6][1],&g_227[1][0]},{&g_227[6][1],(void*)0,&g_227[6][1],&g_227[6][0],&g_227[1][2],&g_227[4][2],&g_227[6][1],&g_227[6][1],&g_227[6][1]},{&g_227[2][2],&g_227[0][2],&g_227[1][0],(void*)0,&g_227[1][0],&g_227[0][2],&g_227[2][2],(void*)0,&g_227[6][1]},{&g_227[6][1],(void*)0,(void*)0,&g_227[2][2],&g_227[6][1],&g_227[4][2],&g_227[6][0],(void*)0,&g_227[5][0]},{&g_227[6][1],&g_227[6][1],&g_227[6][1],&g_227[6][1],(void*)0,&g_227[1][0],&g_227[6][1],(void*)0,&g_227[6][1]},{&g_227[6][1],(void*)0,(void*)0,&g_227[8][2],(void*)0,&g_227[6][1],&g_227[6][1],&g_227[6][1],(void*)0}},{{&g_227[6][1],(void*)0,(void*)0,&g_227[6][1],&g_227[6][1],&g_227[6][1],(void*)0,&g_227[6][1],&g_227[6][1]},{&g_227[6][1],&g_227[4][2],(void*)0,&g_227[2][1],&g_227[4][2],&g_227[5][0],&g_227[6][1],(void*)0,&g_227[1][2]},{&g_227[2][2],&g_227[6][1],&g_227[6][1],&g_227[3][0],&g_227[6][1],&g_227[6][1],&g_227[6][1],&g_227[6][1],&g_227[6][1]},{&g_227[6][1],(void*)0,(void*)0,&g_227[6][1],(void*)0,(void*)0,&g_227[6][1],(void*)0,(void*)0},{&g_227[3][0],&g_227[6][1],&g_227[1][0],&g_227[7][0],(void*)0,&g_227[6][1],(void*)0,(void*)0,&g_227[6][1]},{&g_227[8][2],&g_227[6][1],&g_227[6][1],&g_227[3][2],&g_227[6][1],&g_227[1][2],&g_227[6][1],&g_227[5][0],&g_227[1][2]},{&g_227[6][1],&g_227[6][1],&g_227[6][1],&g_227[2][2],&g_227[1][0],&g_227[6][1],&g_227[6][1],&g_227[6][1],&g_227[6][1]},{&g_227[6][0],(void*)0,&g_227[1][2],&g_227[3][2],&g_227[1][2],(void*)0,&g_227[6][0],&g_227[6][1],(void*)0}}};
static const struct S1 g_2013 = {{26845,6462,7L,1246,-3,-37505},0L};
static int32_t g_2132[2][9][2] = {{{1L,0xE23460C9L},{1L,1L},{0xE23460C9L,1L},{1L,0xE23460C9L},{1L,1L},{0xE23460C9L,1L},{1L,0xE23460C9L},{1L,1L},{0xE23460C9L,1L}},{{1L,0xE23460C9L},{1L,1L},{0xE23460C9L,1L},{1L,0xE23460C9L},{1L,1L},{0xE23460C9L,1L},{1L,0xE23460C9L},{1L,1L},{0xE23460C9L,1L}}};
static int32_t *g_2166 = (void*)0;
static struct S1 ***g_2230 = &g_1378;
static int8_t g_2300 = 8L;
static uint16_t g_2432 = 65535UL;
static int16_t ***g_2439 = (void*)0;
static uint64_t **g_2470 = &g_1506;
static uint64_t g_2526 = 5UL;
static uint8_t *****g_2545 = &g_906[2];
static struct S0 ** const *g_2564[8][2] = {{&g_279[0],&g_279[1]},{&g_279[1],&g_279[1]},{&g_279[1],&g_279[1]},{&g_279[1],&g_279[1]},{&g_279[1],&g_279[1]},{&g_279[1],&g_279[1]},{&g_279[1],&g_279[1]},{&g_279[1],&g_279[1]}};
static struct S0 ** const **g_2563 = &g_2564[7][0];
static const struct S0 *g_2664 = (void*)0;
static const struct S0 *g_2665[8][7][4] = {{{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0}},{{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{(void*)0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{(void*)0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0}},{{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,(void*)0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0}},{{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{(void*)0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,(void*)0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{(void*)0,&g_2013.f0,&g_2013.f0,&g_2013.f0}},{{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,(void*)0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0}},{{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{(void*)0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0}},{{(void*)0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,(void*)0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,(void*)0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,(void*)0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0}},{{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0},{&g_2013.f0,&g_2013.f0,&g_2013.f0,&g_2013.f0}}};
static uint32_t g_2708 = 0xA1476BBCL;
static uint32_t *g_2707 = &g_2708;
static uint32_t *g_2713[6] = {&g_2708,&g_2708,&g_2708,&g_2708,&g_2708,&g_2708};
static const uint8_t * const g_2717[5] = {&g_1306,&g_1306,&g_1306,&g_1306,&g_1306};
static const uint8_t * const *g_2716 = &g_2717[1];
static uint32_t g_2729 = 0x5384712FL;
static uint32_t g_2758[7] = {0x23543647L,0x23543647L,0x23543647L,0x23543647L,0x23543647L,0x23543647L,0x23543647L};
static int32_t g_2823 = 1L;
static uint8_t g_2845 = 0x40L;
static uint32_t g_2849 = 0x948C26F6L;
static uint16_t g_2886[5] = {2UL,2UL,2UL,2UL,2UL};
static uint32_t ***g_2917[7] = {&g_847,&g_847,&g_847,&g_847,&g_847,&g_847,&g_847};
static struct S2 ***g_3115 = (void*)0;
static int8_t g_3134[10][9] = {{0x43L,(-1L),(-1L),0x43L,9L,0x05L,0L,9L,3L},{0xADL,9L,(-1L),1L,0x2AL,(-1L),0xCCL,(-8L),0x50L},{1L,0x2AL,3L,0xADL,9L,9L,0xCCL,9L,(-8L)},{5L,0x86L,0xD8L,0x8BL,9L,0x2AL,0L,0x50L,0x50L},{0x9BL,0x86L,0x50L,0xCCL,0x50L,0x86L,0x9BL,(-1L),3L},{0L,0x2AL,9L,0x8BL,0xD8L,0x86L,5L,0x05L,9L},{0xCCL,9L,9L,0xADL,3L,0x2AL,1L,(-1L),0x86L},{0xCCL,(-1L),0x2AL,1L,(-1L),9L,0xADL,0x50L,0x40L},{0L,0x05L,9L,0x43L,(-1L),(-1L),0x43L,9L,0x05L},{0x9BL,0x9AL,9L,5L,3L,0x05L,0xADL,(-8L),0x05L}};
static uint32_t ***g_3139 = &g_1399;
static uint32_t ****g_3138 = &g_3139;
static int64_t g_3410[9][1] = {{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}};
static uint16_t g_3445 = 0x2D8EL;
static int64_t * const g_3462[5] = {&g_1270[2],&g_1270[2],&g_1270[2],&g_1270[2],&g_1270[2]};
static int64_t * const *g_3461 = &g_3462[3];
static int64_t * const **g_3460 = &g_3461;
static uint32_t g_3564 = 18446744073709551612UL;
static uint16_t g_3600 = 65535UL;
static const int32_t ***** const g_3611 = &g_539;
static int32_t g_3627[1] = {0x07C3FACEL};
static int16_t g_3656 = 0x5DB1L;
static uint32_t g_3754 = 0x29321BC2L;
static uint64_t * const *g_3762 = &g_1506;
static uint64_t * const **g_3761 = &g_3762;
static const int32_t **g_3805 = &g_1775;
static const int32_t ***g_3804[5] = {&g_3805,&g_3805,&g_3805,&g_3805,&g_3805};
static int32_t g_3837 = 0xDA15D0CAL;



static const uint8_t func_1(void);
static uint16_t func_16(struct S0 p_17, int64_t p_18, int16_t * const p_19, int16_t p_20);
static int8_t func_26(int16_t * const p_27, int16_t * p_28, struct S2 p_29, uint64_t p_30, const uint64_t p_31);
static int16_t * func_33(int16_t p_34);
static struct S0 ** func_41(struct S0 p_42, uint64_t p_43, struct S0 ** p_44, uint32_t p_45, uint32_t p_46);
static struct S0 func_47(int16_t p_48, struct S0 ** p_49, uint32_t p_50, struct S1 p_51, int16_t p_52);
static struct S0 ** func_54(int8_t p_55, uint32_t p_56, struct S0 ** p_57, struct S0 ** p_58);
static uint64_t func_59(uint32_t p_60, struct S0 * p_61, struct S0 ** p_62);
static struct S0 * func_63(struct S0 p_64, struct S0 * p_65);
static uint32_t func_74(uint16_t p_75, int8_t p_76, struct S0 * p_77);
# 187 "<stdin>"
static const uint8_t func_1(void)
{
    uint16_t l_2[2][9] = {{0x2743L,1UL,0x2743L,1UL,0x2743L,1UL,0x2743L,1UL,0x2743L},{65533UL,65533UL,0xE4B2L,0xE4B2L,65533UL,65533UL,0xE4B2L,0xE4B2L,65533UL}};
    int32_t l_3431 = 0x8EC040ADL;
    struct S1 *l_3454 = &g_400;
    int32_t l_3476[2][6];
    uint32_t l_3483[5];
    const struct S0 *l_3486[8];
    struct S0 *l_3487 = &g_38[6];
    int32_t *l_3488 = (void*)0;
    int64_t *l_3512[1];
    int8_t *l_3523 = &g_3134[1][4];
    struct S2 **l_3551 = &g_1949[1][7][5];
    uint32_t **l_3558 = &g_2707;
    int8_t l_3639[9];
    uint64_t l_3640 = 18446744073709551607UL;
    struct S2 ** const *l_3660 = &l_3551;
    struct S2 ** const **l_3659 = &l_3660;
    uint8_t l_3672 = 6UL;
    uint8_t l_3674 = 255UL;
    int32_t l_3719 = 0x47FF712CL;
    int16_t **l_3736 = (void*)0;
    const uint64_t l_3813 = 18446744073709551607UL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
            l_3476[i][j] = 0L;
    }
    for (i = 0; i < 5; i++)
        l_3483[i] = 0UL;
    for (i = 0; i < 8; i++)
        l_3486[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_3512[i] = &g_3410[4][0];
    for (i = 0; i < 9; i++)
        l_3639[i] = 0xB6L;
    for (g_3[1] = 0; (g_3[1] <= 1); g_3[1] += 1)
    {
        uint32_t l_23 = 0x6B7BE2D3L;
        int32_t l_35 = (-1L);
        int32_t l_3443 = 0x0F0E4603L;
        const int32_t *l_3448 = &g_1583;
        int16_t ***l_3471 = (void*)0;
        int32_t l_3479 = 0L;
        int32_t l_3481 = 0x63C44DF1L;
        int32_t l_3482 = 0xD019BC38L;
        int32_t * const **l_3494 = (void*)0;
        int32_t * const ***l_3493[9][9][3] = {{{&l_3494,&l_3494,&l_3494},{&l_3494,(void*)0,&l_3494},{&l_3494,&l_3494,&l_3494},{&l_3494,&l_3494,(void*)0},{&l_3494,&l_3494,&l_3494},{(void*)0,&l_3494,(void*)0},{(void*)0,&l_3494,&l_3494},{(void*)0,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494}},{{&l_3494,(void*)0,&l_3494},{&l_3494,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494},{(void*)0,(void*)0,(void*)0},{&l_3494,&l_3494,(void*)0},{&l_3494,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494}},{{&l_3494,&l_3494,&l_3494},{&l_3494,&l_3494,(void*)0},{&l_3494,&l_3494,&l_3494},{(void*)0,(void*)0,(void*)0},{&l_3494,&l_3494,&l_3494},{(void*)0,(void*)0,&l_3494},{&l_3494,&l_3494,&l_3494},{&l_3494,(void*)0,&l_3494},{(void*)0,&l_3494,(void*)0}},{{&l_3494,(void*)0,(void*)0},{&l_3494,&l_3494,&l_3494},{&l_3494,(void*)0,&l_3494},{&l_3494,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494},{(void*)0,&l_3494,&l_3494},{&l_3494,&l_3494,(void*)0}},{{&l_3494,&l_3494,&l_3494},{(void*)0,(void*)0,(void*)0},{&l_3494,&l_3494,&l_3494},{(void*)0,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494},{&l_3494,(void*)0,&l_3494},{&l_3494,&l_3494,(void*)0},{&l_3494,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494}},{{&l_3494,&l_3494,(void*)0},{&l_3494,&l_3494,&l_3494},{(void*)0,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494},{&l_3494,(void*)0,&l_3494},{&l_3494,&l_3494,&l_3494},{&l_3494,(void*)0,(void*)0},{&l_3494,&l_3494,&l_3494},{(void*)0,(void*)0,&l_3494}},{{(void*)0,&l_3494,(void*)0},{(void*)0,(void*)0,&l_3494},{&l_3494,&l_3494,&l_3494},{&l_3494,(void*)0,&l_3494},{&l_3494,&l_3494,&l_3494},{&l_3494,&l_3494,(void*)0},{&l_3494,&l_3494,&l_3494},{(void*)0,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494}},{{(void*)0,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494},{&l_3494,(void*)0,&l_3494},{&l_3494,&l_3494,&l_3494},{&l_3494,&l_3494,(void*)0},{&l_3494,&l_3494,(void*)0},{(void*)0,(void*)0,&l_3494},{(void*)0,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494}},{{(void*)0,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494},{(void*)0,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494},{(void*)0,(void*)0,&l_3494},{&l_3494,&l_3494,&l_3494},{(void*)0,&l_3494,&l_3494},{&l_3494,&l_3494,&l_3494}}};
        int32_t * const ****l_3492 = &l_3493[1][3][2];
        uint64_t l_3527 = 4UL;
        uint8_t l_3532 = 0xE3L;
        int16_t l_3537 = 0xBD4CL;
        int32_t l_3544[10][3][8] = {{{1L,0xACD23B7AL,1L,0xE6F225C5L,0x93FD7183L,(-1L),(-1L),0xC9E621BCL},{(-4L),3L,1L,(-1L),1L,(-4L),0x93FD7183L,1L},{(-4L),(-9L),0x8D0C9FCBL,0x24E7C757L,0x93FD7183L,1L,(-1L),0xEB45DBBFL}},{{1L,0x8D0C9FCBL,0x9DCC768AL,(-1L),0x13E7CD24L,0L,0xE6F225C5L,0x67285B1AL},{(-1L),0x13E7CD24L,1L,1L,0x298BA024L,0xEB45DBBFL,(-9L),(-1L)},{0x15D9726FL,2L,(-1L),0xE6F225C5L,0x9DCC768AL,0L,0x6EDC128BL,0xDB11A415L}},{{0x481A3FB1L,(-1L),0L,0x93FD7183L,(-9L),(-9L),0x93FD7183L,0L},{8L,8L,(-1L),(-1L),0xEB45DBBFL,(-4L),(-4L),0xE6F225C5L},{(-1L),0x8D0C9FCBL,0L,0x15D9726FL,0xB4A4994DL,(-1L),0x67285B1AL,0xE6F225C5L}},{{0x8D0C9FCBL,(-1L),(-1L),(-1L),0x298BA024L,2L,(-1L),0L},{0L,0xC3333CD4L,0xC9E621BCL,0x93FD7183L,0x67285B1AL,(-1L),0x13E7CD24L,0xDB11A415L},{0L,0x85439F29L,(-1L),0xE6F225C5L,6L,0x481A3FB1L,2L,(-1L)}},{{(-4L),1L,(-1L),1L,3L,(-4L),6L,0x67285B1AL},{0xC9E621BCL,0xEB45DBBFL,0x8D0C9FCBL,(-1L),0x9A3D584DL,(-1L),0x8D0C9FCBL,0xEB45DBBFL},{0L,0x6EDC128BL,0x22D7B620L,0x24E7C757L,0x13E7CD24L,0xE6F225C5L,(-9L),1L}},{{0L,0x13E7CD24L,0L,0L,(-1L),0x22D7B620L,(-1L),(-1L)},{0x85439F29L,0L,(-1L),0x15D9726FL,2L,0x67285B1AL,(-1L),(-1L)},{2L,0x67285B1AL,(-1L),(-1L),(-1L),0x9DCC768AL,0xEB45DBBFL,(-1L)}},{{0x722E5B10L,0L,0L,0x24E7C757L,0x481A3FB1L,0L,1L,0x15D9726FL},{0xC9E621BCL,0x91E7BCBBL,0xC3333CD4L,0xACD23B7AL,(-4L),0L,(-4L),0x6EDC128BL},{(-1L),0x481A3FB1L,(-1L),(-1L),(-1L),(-1L),0x481A3FB1L,(-1L)}},{{0x67285B1AL,0L,0x298BA024L,0xDC5B3448L,0xE6F225C5L,2L,0L,(-1L)},{3L,0x93FD7183L,(-1L),0x6EDC128BL,0xDC5B3448L,2L,0L,1L},{(-1L),0L,0L,1L,0xBBCF0FE2L,(-1L),0xDC5B3448L,0L}},{{1L,0x481A3FB1L,0xACD23B7AL,2L,(-9L),0L,0x91E7BCBBL,0xB4A4994DL},{0x24E7C757L,0x91E7BCBBL,(-1L),0L,0L,0L,(-1L),0x722E5B10L},{0x67285B1AL,0L,(-9L),0L,3L,0x9DCC768AL,0x15D9726FL,0x298BA024L}},{{0x85439F29L,0x67285B1AL,0xC9E621BCL,0x6EDC128BL,0xC9E621BCL,0x67285B1AL,0x85439F29L,0xDC5B3448L},{(-1L),0L,(-1L),0x6E0A62F4L,0x481A3FB1L,0x22D7B620L,0xDC5B3448L,(-1L)},{0L,(-4L),0x13E7CD24L,0xC3333CD4L,0x481A3FB1L,0x15D9726FL,0L,0x6EDC128BL}}};
        uint32_t l_3599 = 4294967288UL;
        int32_t l_3606 = 0x36B1FBB2L;
        int16_t l_3615 = 0L;
        uint64_t l_3623 = 18446744073709551611UL;
        uint8_t l_3671[6] = {247UL,247UL,247UL,247UL,247UL,247UL};
        int32_t l_3679 = 1L;
        uint32_t l_3699 = 4UL;
        uint32_t l_3708 = 0x71DA96D9L;
        uint16_t l_3713 = 0x0C6DL;
        int32_t l_3750 = 0x06EA59AAL;
        uint64_t * const **l_3763 = &g_3762;
        uint16_t l_3830[6][1][2] = {{{65527UL,65527UL}},{{0UL,65527UL}},{{65527UL,0UL}},{{65527UL,65527UL}},{{0UL,65527UL}},{{65527UL,0UL}}};
        int i, j, k;
        for (g_4 = 1; (g_4 >= 0); g_4 -= 1)
        {
            int64_t l_2972 = 5L;
            uint32_t l_3413 = 1UL;
            int32_t *l_3415 = &g_5;
            for (g_5 = 1; (g_5 >= 0); g_5 -= 1)
            {
                int16_t *l_14 = &g_15;
                struct S2 l_2971 = {0x7ED3L,65534UL,0xDB24L,{3874,2088,5L,-1693,0,25135}};
                int64_t *l_3409 = &g_3410[4][0];
                int32_t *l_3414 = &g_530;
                int i, j;
            }
            (*l_3415) &= l_35;
        }
        for (g_495 = 0; (g_495 <= 7); g_495 += 1)
        {
            uint16_t ***l_3442 = &g_681[5][5];
            int32_t l_3444 = 0xA84EF40FL;
            int32_t *l_3447 = (void*)0;
            uint16_t l_3451[6] = {0x0692L,0x0692L,0x0692L,0x0692L,0x0692L,0x0692L};
            struct S2 *l_3455[5][4][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_227[0][0],&g_227[6][1]},{(void*)0,&g_227[2][2]}},{{&g_227[5][1],&g_227[6][2]},{&g_227[6][1],(void*)0},{(void*)0,(void*)0},{&g_227[6][1],&g_227[6][2]}},{{&g_227[5][1],&g_227[2][2]},{(void*)0,&g_227[6][1]},{&g_227[0][0],(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{&g_227[0][0],&g_227[6][1]},{(void*)0,&g_227[2][2]},{&g_227[5][1],&g_227[6][2]}},{{&g_227[6][1],(void*)0},{(void*)0,(void*)0},{&g_227[6][1],&g_227[6][2]},{&g_227[5][1],&g_227[2][2]}}};
            struct S2 **l_3456 = &l_3455[2][3][1];
            int64_t ***l_3459 = &g_1537;
            int64_t * const ***l_3463 = &g_3460;
            struct S2 l_3470[7] = {{0x9FA0L,0x8AB7L,0xA391L,{-46,-7545,0xD158DE2AL,-1770,4,23249}},{0x9FA0L,0x8AB7L,0xA391L,{-46,-7545,0xD158DE2AL,-1770,4,23249}},{0x9FA0L,0x8AB7L,0xA391L,{-46,-7545,0xD158DE2AL,-1770,4,23249}},{0x9FA0L,0x8AB7L,0xA391L,{-46,-7545,0xD158DE2AL,-1770,4,23249}},{0x9FA0L,0x8AB7L,0xA391L,{-46,-7545,0xD158DE2AL,-1770,4,23249}},{0x9FA0L,0x8AB7L,0xA391L,{-46,-7545,0xD158DE2AL,-1770,4,23249}},{0x9FA0L,0x8AB7L,0xA391L,{-46,-7545,0xD158DE2AL,-1770,4,23249}}};
            uint64_t l_3474 = 5UL;
            int16_t *l_3475[1][2][4];
            int32_t *l_3477[10] = {&g_38[6].f2,&g_3[1],&g_38[6].f2,&g_227[6][1].f3.f2,&g_38[6].f2,&g_227[6][1].f3.f2,&g_227[6][1].f3.f2,&g_38[6].f2,&g_227[6][1].f3.f2,&g_227[6][1].f3.f2};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_3475[i][j][k] = (void*)0;
                }
            }
            for (g_1583 = 1; (g_1583 <= 7); g_1583 += 1)
            {
                uint32_t *l_3446 = &g_2758[2];
                int32_t *l_3449 = &g_530;
                int32_t *l_3450[9][9][3] = {{{(void*)0,&g_396[g_495],(void*)0},{&l_3444,&g_396[4],&l_3431},{&g_4,&g_3[1],&g_396[(g_3[1] + 1)]},{&l_3443,&g_4,&g_396[5]},{&g_396[g_495],&g_396[1],&g_396[(g_3[1] + 1)]},{&g_396[(g_3[1] + 1)],&g_396[(g_3[1] + 1)],&l_3431},{&l_3444,(void*)0,(void*)0},{&g_3[1],(void*)0,&g_227[6][1].f3.f2},{&g_4,&g_3[1],&g_735[4]}},{{(void*)0,&g_3[1],&g_227[6][1].f3.f2},{&g_396[g_495],(void*)0,(void*)0},{&g_396[g_495],(void*)0,&l_3431},{&g_396[1],&l_3444,&g_396[(g_3[1] + 1)]},{&l_3444,(void*)0,&g_396[5]},{&l_3444,&g_4,&g_396[(g_3[1] + 1)]},{(void*)0,&g_735[6],&l_3431},{&g_396[2],&g_396[1],(void*)0},{(void*)0,&g_4,&g_227[6][1].f3.f2}},{{&l_3444,&l_3444,&g_735[4]},{&g_735[6],&g_396[4],&g_227[6][1].f3.f2},{&l_3444,&l_3444,(void*)0},{&l_3443,&g_3[1],&l_3431},{(void*)0,&l_3443,&g_396[(g_3[1] + 1)]},{&g_396[g_495],&g_4,&g_396[5]},{(void*)0,(void*)0,&g_396[(g_3[1] + 1)]},{&g_735[6],(void*)0,&l_3431},{&g_4,&g_4,(void*)0}},{{&g_396[4],&g_4,&g_227[6][1].f3.f2},{&g_396[2],&l_3443,&g_735[4]},{&g_396[(g_3[1] + 1)],(void*)0,&g_227[6][1].f3.f2},{(void*)0,&g_396[g_495],(void*)0},{&l_3444,&g_396[4],&l_3431},{&g_4,&g_3[1],&g_396[(g_3[1] + 1)]},{&l_3443,&g_4,&g_396[5]},{&g_396[g_495],&g_396[1],&g_396[(g_3[1] + 1)]},{&g_396[(g_3[1] + 1)],&g_396[(g_3[1] + 1)],&l_3431}},{{&l_3444,(void*)0,(void*)0},{&g_3[1],(void*)0,&g_227[6][1].f3.f2},{&g_4,&g_3[1],&g_735[4]},{(void*)0,&g_3[1],&g_227[6][1].f3.f2},{&g_396[g_495],(void*)0,(void*)0},{&g_396[g_495],(void*)0,&l_3431},{&g_396[1],&l_3444,&g_396[(g_3[1] + 1)]},{&l_3444,(void*)0,&g_396[5]},{&l_3444,&g_4,&g_396[(g_3[1] + 1)]}},{{(void*)0,&g_735[6],&l_3431},{&g_396[2],&g_396[1],(void*)0},{(void*)0,&g_4,&g_227[6][1].f3.f2},{&l_3444,&l_3444,&g_735[4]},{&g_735[6],&g_396[4],&g_227[6][1].f3.f2},{&l_3444,&l_3444,(void*)0},{&l_3443,&g_3[1],&l_3431},{(void*)0,&l_3443,&g_396[(g_3[1] + 1)]},{&g_396[g_495],&g_4,&g_396[5]}},{{(void*)0,(void*)0,&g_396[(g_3[1] + 1)]},{&g_735[6],(void*)0,&l_3431},{&g_4,&g_4,(void*)0},{&g_396[4],&g_4,&g_227[6][1].f3.f2},{&g_396[2],&l_3443,&g_735[4]},{&g_396[(g_3[1] + 1)],(void*)0,&g_227[6][1].f3.f2},{(void*)0,&g_396[g_495],(void*)0},{&g_38[6].f2,&g_227[6][1].f3.f2,&g_396[g_495]},{&g_530,&g_530,&g_3[1]}},{{&g_38[6].f2,&g_4,&g_400.f0.f2},{&g_400.f0.f2,&g_3[3],&g_3[1]},{(void*)0,(void*)0,&g_396[g_495]},{(void*)0,&g_5,&g_4},{&g_103.f2,&g_4,&g_4},{&g_38[6].f2,&g_530,&g_4},{&l_35,&g_103.f2,&g_4},{&g_400.f0.f2,&l_35,&g_4},{&g_735[2],&g_396[1],&g_396[g_495]}},{{&g_3[3],&l_3444,&g_3[1]},{&g_38[6].f2,&g_4,&g_400.f0.f2},{&l_35,&g_530,&g_3[1]},{&l_35,&g_103.f2,&g_396[g_495]},{&l_3431,&g_3[3],&g_4},{&g_396[1],&g_396[(g_3[1] + 1)],&g_4},{(void*)0,&l_3444,&g_4},{&g_103.f2,&g_227[6][1].f3.f2,&g_4},{&l_35,&l_35,&g_4}}};
                int i, j, k;
                for (g_136 = 0; (g_136 <= 8); g_136 += 1)
                {
                    int32_t **l_3416 = &g_504[0][1][0];
                    struct S2 *l_3417 = &g_227[5][0];
                    struct S2 **l_3418 = &l_3417;
                    (*l_3416) = &g_5;
                    (***g_2563) = (**g_1003);
                    (*l_3416) = &l_35;
                    (*l_3418) = l_3417;
                }
                g_396[g_495] = (safe_div_func_uint64_t_u_u(((((((safe_sub_func_uint32_t_u_u(((l_2[g_3[1]][g_495] == 0L) , ((*l_3446) = (g_3445 ^= (((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(0x2C92D990L, l_2[g_3[1]][g_495])), 5)) <= (safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((((-10L) & ((l_3431 ^= (**g_253)) > (safe_lshift_func_int16_t_s_s(l_2[g_3[1]][g_495], 10)))) , (safe_sub_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(((l_3431 >= ((((safe_mod_func_int8_t_s_s(((l_35 , (*g_679)) == l_3442), l_3443)) <= 0xE0C094CAL) | l_3443) <= 0x11L)) , 0x1CE386C36CA9CA22LL), l_3444)), l_3444)), l_2[1][7]))) >= (*g_1506)), 0x62L)), g_2526))) == l_3444)))), l_2[0][7])) & l_2[0][7]) , l_3447) != l_3448) & (-5L)) < 0x140F360EL), 0x502797743BC3D18FLL));
                ++l_3451[5];
                if (l_3431)
                    continue;
            }
            (**g_2230) = l_3454;
            (*l_3456) = l_3455[0][1][0];
            l_35 |= ((safe_mul_func_uint16_t_u_u(65528UL, (l_3476[0][5] ^= ((((l_3431 | (l_3459 == ((*l_3463) = g_3460))) , (+((safe_div_func_int8_t_s_s((g_2300 = (safe_mul_func_int8_t_s_s((~((((l_3470[5] , l_3471) == l_3471) , (safe_sub_func_uint32_t_u_u(4294967295UL, (3L > l_3431)))) < 0x2F7285C043A0D59ALL)), g_2708))), l_3474)) > 0x0D8F986DA66FAE35LL))) || l_2[1][7]) < l_3470[5].f3.f5)))) ^ l_3431);
        }
        for (l_23 = 0; (l_23 <= 1); l_23 += 1)
        {
            int32_t *l_3478[9][8][3] = {{{&l_35,&g_4,&g_5},{&g_735[2],&g_38[6].f2,&g_38[6].f2},{&g_103.f2,&g_4,(void*)0},{&g_396[2],&g_396[2],&g_400.f0.f2},{&g_103.f2,&l_35,&l_3431},{&g_735[2],&g_735[2],(void*)0},{&l_35,&l_3443,&g_162[3].f0.f2},{&g_162[3].f0.f2,&g_735[2],(void*)0}},{{&g_227[6][1].f3.f2,&l_3476[0][5],&l_3431},{&l_3443,&g_162[3].f0.f2,&g_400.f0.f2},{&g_396[2],&g_162[3].f0.f2,(void*)0},{&g_735[2],&g_162[3].f0.f2,&g_38[6].f2},{&g_4,&l_3476[0][5],&g_5},{&g_530,&g_735[2],(void*)0},{&l_3443,&l_3443,&l_3431},{&g_530,&g_735[2],&g_162[3].f0.f2}},{{&g_4,&l_35,(void*)0},{&g_735[2],&g_396[2],&g_400.f0.f2},{&g_396[2],&g_4,(void*)0},{&l_3443,&g_38[6].f2,&g_162[3].f0.f2},{&g_227[6][1].f3.f2,&g_4,&l_3431},{&g_162[3].f0.f2,&g_396[5],(void*)0},{&l_35,&g_4,&g_5},{&g_735[2],&g_38[6].f2,&g_38[6].f2}},{{&g_103.f2,&g_4,(void*)0},{&g_396[2],&g_396[2],&g_400.f0.f2},{&g_103.f2,&l_35,&l_3431},{&g_735[2],&g_735[2],(void*)0},{&l_35,&l_3443,&g_162[3].f0.f2},{&g_162[3].f0.f2,&g_735[2],(void*)0},{&g_227[6][1].f3.f2,&l_3476[0][5],&l_3431},{&l_3443,&g_162[3].f0.f2,&g_400.f0.f2}},{{&g_396[2],&g_162[3].f0.f2,(void*)0},{&g_735[2],&g_162[3].f0.f2,&g_38[6].f2},{&g_4,&l_3476[0][5],&g_5},{&g_530,&g_735[2],(void*)0},{&l_3443,&l_3443,&l_3431},{&g_530,&g_735[2],&g_162[3].f0.f2},{&g_4,&l_35,(void*)0},{&g_735[2],&g_396[2],&g_400.f0.f2}},{{&g_396[2],&g_4,(void*)0},{&l_3443,&g_38[6].f2,&g_162[3].f0.f2},{&g_227[6][1].f3.f2,&g_4,&l_3431},{&g_162[3].f0.f2,&g_396[5],&g_162[3].f0.f2},{&l_3443,(void*)0,&g_396[2]},{&g_396[5],&g_530,&g_162[3].f0.f2},{&g_735[3],&g_3[1],&g_4},{&g_103.f2,&g_103.f2,&g_396[2]}},{{&g_735[3],&l_3443,&g_162[3].f0.f2},{&g_396[5],(void*)0,&l_3443},{&l_3443,&g_4,(void*)0},{&g_227[6][1].f3.f2,&g_396[5],&l_3443},{&g_735[2],(void*)0,&g_162[3].f0.f2},{&g_3[3],(void*)0,&g_396[2]},{&g_735[8],&g_5,&g_4},{(void*)0,(void*)0,&g_162[3].f0.f2}},{{&g_3[1],(void*)0,&g_396[2]},{(void*)0,&g_396[5],&g_162[3].f0.f2},{&g_4,&g_4,&l_3443},{(void*)0,(void*)0,&g_396[5]},{&g_3[1],&l_3443,&g_227[6][1].f3.f2},{(void*)0,&g_103.f2,&g_3[1]},{&g_735[8],&g_3[1],&g_227[6][1].f3.f2},{&g_3[3],&g_530,&g_396[5]}},{{&g_735[2],(void*)0,&l_3443},{&g_227[6][1].f3.f2,&g_4,&g_162[3].f0.f2},{&l_3443,(void*)0,&g_396[2]},{&g_396[5],&g_530,&g_162[3].f0.f2},{&g_735[3],&g_3[1],&g_4},{&g_103.f2,&g_103.f2,&g_396[2]},{&g_735[3],&l_3443,&g_162[3].f0.f2},{&g_396[5],(void*)0,&l_3443}}};
            int32_t l_3480 = 0L;
            const int32_t l_3503 = 7L;
            int8_t l_3534 = 9L;
            int16_t l_3536 = 0x63C7L;
            uint64_t l_3596 = 0UL;
            uint32_t l_3608 = 0x02964BEEL;
            int32_t *****l_3612 = &g_1491;
            uint16_t l_3628[4][8] = {{65535UL,65533UL,0x1F9BL,0x1710L,0x1710L,0x1F9BL,65533UL,65535UL},{0xE784L,0x1710L,65534UL,0xA154L,0x1710L,0xA154L,65534UL,0x1710L},{65535UL,65534UL,0xE784L,65535UL,0xA154L,0xA154L,65535UL,0xE784L},{0x1710L,0x1710L,0x1F9BL,65533UL,65535UL,0x1F9BL,65535UL,65533UL}};
            int32_t l_3633 = 1L;
            struct S0 **l_3644 = &l_3487;
            struct S2 ****l_3673 = &g_3115;
            uint32_t l_3789 = 0xB441A62AL;
            uint32_t l_3834 = 1UL;
            uint8_t *l_3840[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_3840[i] = &l_3671[0];
            --l_3483[1];
        }
        for (l_23 = 0; (l_23 <= 1); l_23 += 1)
        {
            (*g_1378) = l_3454;
            if (l_3830[4][0][0])
                continue;
        }
    }
    return l_3639[7];
}







static uint16_t func_16(struct S0 p_17, int64_t p_18, int16_t * const p_19, int16_t p_20)
{
    int32_t *l_3411 = (void*)0;
    int32_t **l_3412 = &l_3411;
    (*l_3412) = l_3411;
    return p_17.f2;
}







static int8_t func_26(int16_t * const p_27, int16_t * p_28, struct S2 p_29, uint64_t p_30, const uint64_t p_31)
{
    int32_t l_2982 = (-8L);
    int32_t l_2984 = 0x8F8CE23CL;
    uint8_t l_3010[10];
    struct S1 l_3012[4][9] = {{{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L}},{{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L}},{{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L}},{{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L},{{41350,2768,0x27CBDA3BL,1020,0,22948},8L}}};
    struct S0 *l_3013 = &g_38[8];
    struct S1 ***l_3049 = &g_1377;
    struct S2 **l_3117 = (void*)0;
    struct S2 ***l_3116 = &l_3117;
    struct S0 ****l_3178 = &g_882;
    struct S0 *****l_3177 = &l_3178;
    uint32_t l_3209 = 0x18CFACF5L;
    int32_t l_3232 = 0x49A49795L;
    uint8_t l_3234 = 0x3DL;
    int64_t l_3244 = 0x3DBDC976A5561C5ELL;
    struct S2 *l_3286 = &g_227[6][1];
    uint64_t l_3287 = 0x134F1DFA48EFC422LL;
    int64_t *l_3314 = &g_507;
    int64_t * const *l_3313[9][9][3] = {{{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,(void*)0,(void*)0},{(void*)0,&l_3314,&l_3314},{&l_3314,(void*)0,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314}},{{&l_3314,&l_3314,(void*)0},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{(void*)0,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,(void*)0,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314}},{{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,(void*)0},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314}},{{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,(void*)0,&l_3314}},{{&l_3314,&l_3314,&l_3314},{(void*)0,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,(void*)0},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314}},{{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,(void*)0},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314}},{{(void*)0,&l_3314,&l_3314},{&l_3314,(void*)0,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{(void*)0,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314}},{{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,(void*)0}},{{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{(void*)0,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,(void*)0,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314},{&l_3314,&l_3314,&l_3314}}};
    const uint64_t *l_3327[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    const uint64_t **l_3326[9][1][10] = {{{&l_3327[4],&l_3327[4],&l_3327[4],&l_3327[4],&l_3327[0],&l_3327[4],(void*)0,(void*)0,&l_3327[4],&l_3327[4]}},{{&l_3327[4],&l_3327[4],&l_3327[4],&l_3327[4],&l_3327[1],&l_3327[4],(void*)0,&l_3327[4],&l_3327[4],&l_3327[4]}},{{&l_3327[0],&l_3327[4],&l_3327[0],&l_3327[4],&l_3327[4],(void*)0,&l_3327[1],&l_3327[0],&l_3327[4],&l_3327[0]}},{{&l_3327[0],&l_3327[4],(void*)0,&l_3327[4],(void*)0,&l_3327[4],&l_3327[0],&l_3327[0],&l_3327[4],(void*)0}},{{&l_3327[4],&l_3327[0],&l_3327[0],&l_3327[4],(void*)0,&l_3327[4],&l_3327[4],&l_3327[4],&l_3327[4],&l_3327[0]}},{{&l_3327[4],&l_3327[0],&l_3327[4],(void*)0,&l_3327[4],&l_3327[1],&l_3327[0],(void*)0,&l_3327[4],&l_3327[4]}},{{&l_3327[4],&l_3327[4],&l_3327[4],&l_3327[4],&l_3327[1],&l_3327[1],&l_3327[1],&l_3327[1],&l_3327[4],&l_3327[4]}},{{&l_3327[4],&l_3327[4],&l_3327[4],&l_3327[4],&l_3327[0],&l_3327[4],(void*)0,(void*)0,&l_3327[4],&l_3327[4]}},{{&l_3327[4],&l_3327[4],&l_3327[4],&l_3327[4],&l_3327[1],&l_3327[4],(void*)0,&l_3327[4],&l_3327[4],&l_3327[4]}}};
    int16_t l_3338[2][3] = {{0x7C09L,0x7C09L,0x7C09L},{0xDB0FL,0xDB0FL,0xDB0FL}};
    int32_t l_3354 = 1L;
    int32_t l_3355 = 6L;
    int32_t l_3356 = 0xD3930693L;
    int32_t l_3357 = 1L;
    int32_t l_3358[3];
    struct S2 l_3385 = {0L,7UL,0x1DABL,{13637,-3369,4L,-1422,4,-14478}};
    struct S1 l_3395 = {{-19876,8068,0L,1978,-4,32855},-1L};
    uint32_t **l_3398 = &g_848;
    int32_t **l_3401[1][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t *l_3402 = &g_735[6];
    uint32_t l_3403[6][9] = {{0xFD34E89EL,18446744073709551615UL,0UL,0x04FC31EDL,0x04FC31EDL,0UL,18446744073709551615UL,0xFD34E89EL,9UL},{0UL,0x42AE29BEL,0xFD34E89EL,0x04FC31EDL,2UL,9UL,0UL,0xD2E6F6EDL,0x3C8345D2L},{9UL,0xD6DE2AEDL,0x3C8345D2L,0UL,0UL,0UL,0x3C8345D2L,0xD6DE2AEDL,9UL},{0x21EAAB9DL,0UL,2UL,7UL,0UL,0UL,0x42AE29BEL,0UL,18446744073709551613UL},{0xD2E6F6EDL,0UL,7UL,18446744073709551612UL,2UL,2UL,18446744073709551612UL,7UL,0UL},{0x21EAAB9DL,0UL,0x42AE29BEL,0xFD34E89EL,0x04FC31EDL,2UL,9UL,0UL,0xD2E6F6EDL}};
    int32_t l_3404 = 0x1BA13891L;
    int16_t l_3405[7][1] = {{0x4A7DL},{0x779CL},{0x4A7DL},{0x779CL},{0x4A7DL},{0x779CL},{0x4A7DL}};
    uint16_t l_3406[4][1] = {{65535UL},{1UL},{65535UL},{1UL}};
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_3010[i] = 7UL;
    for (i = 0; i < 3; i++)
        l_3358[i] = 0L;
lbl_3292:
    for (g_284 = 0; (g_284 < 8); g_284 = safe_add_func_uint32_t_u_u(g_284, 3))
    {
        int32_t *l_2978 = (void*)0;
        int32_t **l_2979 = &g_2166;
        int32_t *l_2983[7][6] = {{(void*)0,(void*)0,&g_103.f2,&g_5,&g_103.f2,&g_396[0]},{&g_103.f2,(void*)0,&g_400.f0.f2,&g_5,(void*)0,&g_103.f2},{(void*)0,&g_103.f2,&g_400.f0.f2,&g_103.f2,(void*)0,&g_396[0]},{&g_103.f2,&g_103.f2,&g_103.f2,&g_103.f2,(void*)0,&g_103.f2},{&g_103.f2,(void*)0,&g_103.f2,&g_103.f2,&g_103.f2,&g_103.f2},{(void*)0,(void*)0,&g_103.f2,&g_5,&g_103.f2,&g_396[0]},{&g_103.f2,(void*)0,&g_400.f0.f2,&g_5,(void*)0,&g_103.f2}};
        int32_t *****l_2997 = &g_1491;
        uint32_t **l_3000 = &g_848;
        int64_t l_3017 = (-6L);
        struct S1 ***l_3047 = &g_1378;
        struct S2 *l_3054 = (void*)0;
        uint32_t ***l_3057 = &g_1399;
        int32_t l_3144 = (-7L);
        uint32_t l_3216[4] = {1UL,1UL,1UL,1UL};
        int i, j;
        (*l_2979) = l_2978;
        l_2984 &= (safe_rshift_func_uint16_t_u_s(l_2982, 7));
        if ((((**g_2470) |= 0xA1A3164F86A510A1LL) || (&g_539 == ((safe_mul_func_uint16_t_u_u(l_2984, ((safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((((l_2984 < (safe_div_func_int16_t_s_s(((*p_28) && p_29.f3.f1), (safe_sub_func_int64_t_s_s(p_29.f3.f5, (((((*g_565) >= ((safe_mod_func_uint64_t_u_u(((((0xD57B4871L & p_29.f3.f1) , (-8L)) < p_29.f0) < 0x1F9C17F5L), p_29.f2)) | 9L)) & 1L) ^ (*g_1506)) == p_31)))))) <= l_2984) < (*p_28)), 0x3D0E777CL)) <= p_29.f2), (*p_28))) < l_2984))) , l_2997))))
        {
            int8_t l_3005 = 5L;
            const struct S0 **l_3009 = &g_2665[5][1][0];
            const struct S0 ***l_3008 = &l_3009;
            struct S0 **l_3011 = (void*)0;
            p_29.f3.f3 = (safe_mul_func_uint16_t_u_u((((void*)0 == l_3000) , (safe_rshift_func_int16_t_s_u((((((((safe_mul_func_int16_t_s_s((*p_28), l_3005)) == (safe_mul_func_int8_t_s_s(g_38[6].f1, (((((*l_3008) = &g_2665[4][4][2]) == ((*g_882) = func_41((p_30 , func_47(l_3010[0], l_3011, p_30, l_3012[0][8], l_3005)), l_3012[0][8].f0.f3, (*g_882), g_103.f4, l_3005))) , p_29.f3.f0) & l_3012[0][8].f0.f0)))) && 0x7BL) || (*p_28)) , l_3005) <= p_29.f3.f0) , l_3005), l_3012[0][8].f0.f2))), l_3010[0]));
            (**l_3008) = l_3013;
        }
        else
        {
            uint32_t l_3016[9];
            int8_t l_3031[6][1];
            int32_t l_3035[7] = {0x0EAC7D58L,0x0EAC7D58L,0x0EAC7D58L,0x0EAC7D58L,0x0EAC7D58L,0x0EAC7D58L,0x0EAC7D58L};
            uint16_t l_3079[10][4] = {{0x3077L,1UL,1UL,0x3077L},{0x3077L,0x5D98L,1UL,1UL},{0x5458L,0x3077L,65535UL,0x1DD3L},{0x2A6FL,0x70C5L,0x2A6FL,0x1DD3L},{65535UL,0x3077L,0x5458L,1UL},{1UL,0x5D98L,0x3077L,0x3077L},{1UL,1UL,0x3077L,0x2A6FL},{1UL,65535UL,0x5458L,0x5D98L},{65535UL,0x5458L,0x2A6FL,0x5458L},{0x2A6FL,0x5458L,65535UL,0x5D98L}};
            uint32_t l_3086 = 0xECEE8CD3L;
            uint64_t l_3119 = 0x7A655DD91DB016A7LL;
            uint32_t * const *l_3125 = &g_2713[0];
            uint32_t ****l_3132 = &g_2917[3];
            uint16_t l_3164 = 0x8CF5L;
            uint32_t l_3165 = 0xD418AFF2L;
            uint64_t l_3185 = 18446744073709551613UL;
            const struct S1 l_3235 = {{-35649,-4575,0x44CBD6A4L,-1391,-2,-17863},-1L};
            int i, j;
            for (i = 0; i < 9; i++)
                l_3016[i] = 0xF185CE1DL;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 1; j++)
                    l_3031[i][j] = 0x03L;
            }
            if ((safe_div_func_uint16_t_u_u(l_3016[6], l_3017)))
            {
                int8_t l_3030 = 0x94L;
                int32_t l_3034[7] = {0xEFF81161L,0xEFF81161L,0x4C6C2E47L,0xEFF81161L,0xEFF81161L,0x4C6C2E47L,0xEFF81161L};
                struct S2 *l_3056 = (void*)0;
                int i;
                if (p_29.f3.f1)
                    break;
                p_29.f3.f0 = (safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((p_29.f3.f1 <= 0x7F654BC0L), p_29.f2)), (safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(p_29.f3.f3, (safe_sub_func_int32_t_s_s(((l_3016[5] , (l_3012[0][8].f0.f2 == 4294967294UL)) , ((safe_add_func_int32_t_s_s((l_3031[3][0] = (l_3030 = p_29.f3.f5)), (l_3035[3] |= (safe_add_func_uint8_t_u_u((l_3034[6] , p_29.f0), (-5L)))))) > 0UL)), p_31)))), (*p_28)))));
                for (g_530 = 0; (g_530 <= 22); g_530 = safe_add_func_uint32_t_u_u(g_530, 2))
                {
                    uint8_t *l_3044 = &g_101[5];
                    struct S1 ****l_3048[9] = {&g_2230,&g_2230,&g_2230,&g_2230,&g_2230,&g_2230,&g_2230,&g_2230,&g_2230};
                    int i;
                    if (((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s(0xAD16A879L, ((((*g_253) = l_3044) != (void*)0) > ((safe_lshift_func_int16_t_s_u(0L, 13)) != ((l_3049 = l_3047) != (g_2230 = &g_1377)))))), ((!0xE04BL) | (p_29.f1 == (p_29.f2 > (*p_28)))))) , l_3031[2][0]))
                    {
                        struct S2 *l_3053 = &g_227[0][1];
                        (*l_3053) = p_29;
                        return l_3030;
                    }
                    else
                    {
                        struct S2 **l_3055[9][4] = {{&l_3054,&g_1949[0][5][0],&l_3054,&l_3054},{(void*)0,&g_1949[1][7][5],&l_3054,&l_3054},{&g_1949[0][5][0],&g_1949[0][5][0],&l_3054,&g_1949[1][7][5]},{&g_1949[1][7][5],(void*)0,&l_3054,(void*)0},{&g_1949[0][5][0],&l_3054,&l_3054,&l_3054},{(void*)0,&l_3054,&l_3054,(void*)0},{&l_3054,(void*)0,&g_1949[0][5][0],&g_1949[1][7][5]},{&l_3054,&g_1949[0][5][0],&l_3054,&l_3054},{(void*)0,&g_1949[1][7][5],&l_3054,&l_3054}};
                        uint32_t ****l_3058 = &l_3057;
                        int i, j;
                        if (p_29.f3.f4)
                            break;
                        l_3056 = l_3054;
                        (*l_3058) = l_3057;
                        p_29.f3.f1 |= p_29.f3.f2;
                    }
                }
            }
            else
            {
                int32_t l_3087 = 0xF56199D2L;
                uint8_t *****l_3111 = &g_906[1];
                if ((p_29.f3.f1 &= l_3035[3]))
                {
                    if (l_3010[0])
                        break;
                }
                else
                {
                    int32_t *l_3059 = &g_735[2];
                    int16_t *l_3067[10] = {&g_227[6][1].f2,&g_227[6][1].f2,&g_227[6][1].f2,&g_227[6][1].f2,&g_227[6][1].f2,&g_227[6][1].f2,&g_227[6][1].f2,&g_227[6][1].f2,&g_227[6][1].f2,&g_227[6][1].f2};
                    int16_t **l_3066 = &l_3067[3];
                    struct S2 l_3096 = {0x0A1AL,0xFF72L,0x34B5L,{11879,-6776,0L,-811,-4,22543}};
                    int i;
                    l_3059 = &l_3035[3];
                    for (g_2432 = 0; (g_2432 < 51); g_2432 = safe_add_func_uint64_t_u_u(g_2432, 1))
                    {
                        int8_t *l_3078[4];
                        const int32_t l_3088 = 0x7E51B9A4L;
                        struct S0 ** const **l_3089[8][4] = {{&g_2564[7][0],&g_2564[7][0],&g_2564[2][0],(void*)0},{&g_2564[7][0],&g_2564[1][1],&g_2564[7][0],&g_2564[2][0]},{&g_2564[7][0],&g_2564[2][0],&g_2564[2][0],&g_2564[7][0]},{&g_2564[7][0],&g_2564[2][0],(void*)0,&g_2564[2][0]},{&g_2564[2][0],&g_2564[1][1],(void*)0,(void*)0},{&g_2564[7][0],&g_2564[7][0],&g_2564[2][0],(void*)0},{&g_2564[7][0],&g_2564[1][1],&g_2564[7][0],&g_2564[2][0]},{&g_2564[7][0],&g_2564[2][0],&g_2564[2][0],&g_2564[7][0]}};
                        uint16_t l_3112 = 65531UL;
                        struct S2 ****l_3118 = &l_3116;
                        int64_t *l_3120 = &g_664;
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_3078[i] = &g_2300;
                        (*l_3059) = ((safe_rshift_func_int16_t_s_u((((safe_sub_func_uint8_t_u_u(p_29.f1, ((void*)0 != l_3066))) >= (safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((((((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0x7BL, ((g_400.f1 &= (g_534 = (l_3079[2][2] = 0L))) || ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((*p_28) < (*p_28)), (safe_mod_func_int16_t_s_s(((l_3086 && 65526UL) , (*p_28)), l_3087)))), 3)) ^ (*l_3059))))), p_29.f3.f0)) == 0xA8EB149D523FC0E2LL) <= 18446744073709551609UL) & p_29.f0) | p_29.f3.f4), p_29.f1)), p_29.f3.f0)), (*****g_2545)))) | (*g_682)), l_3088)) != l_3035[3]);
                        p_29.f3.f1 = ((*g_1318) == l_3089[0][1]);
                        (*l_3059) = ((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((((*l_3120) = (l_3096 , ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((g_400.f1 |= ((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u(9UL, (safe_lshift_func_uint8_t_u_u(l_3088, 1)))) == ((((l_3111 == (void*)0) && ((l_3112 | p_29.f0) , (!(!(g_3115 != ((*l_3118) = l_3116)))))) ^ l_3012[0][8].f0.f0) , 0x7CL)), 0)) <= 0xB708DC34E4C1B435LL)), l_3016[6])), l_3119)), (**g_253))) >= 0UL))) == 0xDF85EE878AE418B2LL), (*l_3059))), 0x052AL)), p_29.f3.f2)) <= p_31);
                    }
                }
            }
            for (g_534 = 18; (g_534 < (-26)); g_534 = safe_sub_func_int8_t_s_s(g_534, 5))
            {
                uint32_t l_3135 = 0x4ADC524FL;
                struct S0 *** const *l_3180 = &g_882;
                struct S0 *** const **l_3179 = &l_3180;
                int32_t l_3186 = 3L;
                const struct S1 *l_3210 = (void*)0;
                for (g_400.f1 = 6; (g_400.f1 < 29); g_400.f1++)
                {
                    int32_t l_3133 = 0x75BB6B0AL;
                    struct S1 ***l_3163[3][9] = {{(void*)0,(void*)0,(void*)0,&g_1378,(void*)0,&g_1378,&g_1378,&g_1378,&g_1377},{(void*)0,&g_1377,&g_1377,(void*)0,&g_1378,&g_1377,&g_1378,&g_1378,&g_1378},{&g_1378,(void*)0,(void*)0,(void*)0,(void*)0,&g_1378,(void*)0,&g_1377,&g_1377}};
                    struct S2 l_3193 = {-8L,0x97C8L,1L,{-3558,-2632,8L,-598,0,-6668}};
                    int i, j;
                    for (g_530 = 4; (g_530 >= 0); g_530 -= 1)
                    {
                        uint64_t l_3131 = 0x50923846EA458F18LL;
                        uint32_t *****l_3140 = (void*)0;
                        uint32_t *****l_3141 = &g_3138;
                        int i;
                        l_3035[g_530] ^= (((l_3012[0][8].f0.f1 || ((&g_2707 != l_3125) || (*g_565))) & (safe_unary_minus_func_uint16_t_u(((safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((*g_254) = (((*g_682) && (((l_3131 & ((**g_253) , (-1L))) , l_3132) != (void*)0)) || 0x07L)), 0xFBL)), p_30)) <= 0xF5D0649449E1D871LL)))) || 0x05L);
                        l_3135--;
                        (*l_3141) = g_3138;
                    }
                    if (((p_29 , l_3012[0][8].f0.f2) > 255UL))
                    {
                        const uint16_t l_3166 = 0x8F27L;
                        int64_t *l_3167 = &g_664;
                        int32_t *l_3168 = &g_4;
                        if (l_2984)
                            break;
                        (*l_2979) = ((((safe_lshift_func_int8_t_s_u(g_507, l_3144)) >= ((safe_div_func_uint64_t_u_u((*g_1506), ((*l_3167) &= ((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((-2L), (safe_mul_func_uint8_t_u_u(((p_29.f3 , ((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(0xDCL, ((1L != ((((safe_lshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s((l_3163[2][3] == (((((l_3035[3] && 0x89A7E63CL) != l_3164) > l_3165) == p_29.f3.f5) , &g_1377)), p_29.f1)), p_29.f0)) || p_29.f3.f5) | 0xD468D9BEF89DB351LL) >= 65535UL)) , p_30))) && l_3166), l_3012[0][8].f0.f3)) >= p_30)) <= p_29.f3.f3), l_3010[0])))), (*g_565))), p_29.f3.f1)) || l_3164)))) & l_3035[3])) , (-1L)) , l_3168);
                        l_3186 |= (l_3035[3] ^= (((safe_mul_func_uint8_t_u_u((p_29.f3 , ((safe_add_func_uint8_t_u_u(((l_3165 | (safe_add_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(((void*)0 != (*l_3000)), ((*p_28) = (l_3177 != l_3179)))) == (safe_div_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u((l_3012[0][8].f0.f0 != ((void*)0 != p_27)), 0xB715FDD5L)) | p_29.f0) ^ 0UL), 4294967295UL))) && (**l_2979)), 65535UL))) , l_3185), g_1270[2])) , p_30)), p_29.f3.f1)) || 4294967288UL) >= p_29.f3.f4));
                        p_29.f3.f4 |= 0xA0A6108AL;
                    }
                    else
                    {
                        uint8_t *l_3202 = (void*)0;
                        const struct S1 **l_3211 = &l_3210;
                        l_3209 ^= (safe_rshift_func_int16_t_s_s(1L, (safe_sub_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((l_3193 , (((p_29.f1 = ((*g_682) = ((((p_29.f3.f0 = (p_29.f3.f1 &= (safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(3UL, (safe_lshift_func_int16_t_s_s(((void*)0 == l_3202), 5)))) , ((void*)0 != &g_396[5])), (safe_sub_func_int32_t_s_s((p_29.f3.f4 ^= (l_2984 | ((**g_2470)++))), (safe_lshift_func_uint8_t_u_u((((l_3133 || 0xE12AL) & l_3135) && 0xB4B5F2A97267AB43LL), 4)))))), (*g_254))))) >= p_29.f2) , p_29.f3.f4) & p_30))) , p_29.f0) , p_29.f3.f5)), 18446744073709551615UL)), l_3186))));
                        (*l_3211) = l_3210;
                        return p_29.f2;
                    }
                }
                return l_3010[0];
            }
            for (g_495 = (-28); (g_495 > 12); g_495 = safe_add_func_int64_t_s_s(g_495, 1))
            {
                int32_t l_3215 = 0L;
                int16_t *l_3223 = &g_734;
                int16_t *l_3224 = (void*)0;
                int16_t *l_3225[3][7] = {{&g_227[6][1].f0,&g_227[6][1].f0,&g_1273,&g_1273,&g_227[6][1].f0,&g_227[6][1].f0,&g_1273},{&g_227[6][1].f2,&g_227[6][1].f2,&g_227[6][1].f2,&g_227[6][1].f2,&g_227[6][1].f2,&g_227[6][1].f2,&g_227[6][1].f2},{&g_227[6][1].f0,&g_1273,&g_1273,&g_227[6][1].f0,&g_227[6][1].f0,&g_1273,&g_1273}};
                struct S1 l_3233 = {{-37569,1197,0xD98CC832L,2015,4,19753},0xE9L};
                int i, j;
                l_3035[3] = (((!l_3215) <= l_3216[2]) | (safe_rshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((0xF2L & (((safe_rshift_func_int16_t_s_u((g_148 = ((*p_28) = ((*l_3223) |= (*p_28)))), 12)) && (safe_sub_func_uint32_t_u_u((((((***g_1003) , func_47((p_29 , (safe_sub_func_uint8_t_u_u((((((func_47((((((*g_2470) = &l_3185) != &p_31) >= (safe_sub_func_int64_t_s_s(l_3232, l_3010[6]))) >= p_29.f3.f4), (*g_882), p_29.f0, l_3233, l_3234) , p_29) , 0xC5718CD949B7F2C3LL) , p_31) < 0UL) , 0xEEL), (-7L)))), (*g_882), l_3233.f0.f4, (*g_936), l_3165)) , l_3016[2]) , l_3235) , p_29.f0), 0x5F94F1CBL))) > p_29.f3.f2)) > l_3235.f0.f3), 0UL)) , 1L), 4)));
                (*l_2979) = &l_3232;
                return g_227[6][1].f3.f3;
            }
            return l_3232;
        }
    }
    for (g_2300 = (-6); (g_2300 <= 26); g_2300 = safe_add_func_uint16_t_u_u(g_2300, 7))
    {
        uint32_t l_3245 = 4294967295UL;
        uint64_t l_3246 = 18446744073709551611UL;
        uint32_t l_3260 = 4294967295UL;
        int32_t *l_3261 = (void*)0;
        int32_t *l_3262 = &l_3012[0][8].f0.f2;
        uint16_t ** const *l_3268 = &g_681[4][2];
        uint16_t ** const **l_3267[9] = {&l_3268,&l_3268,&l_3268,&l_3268,&l_3268,&l_3268,&l_3268,&l_3268,&l_3268};
        uint16_t ** const ***l_3266 = &l_3267[6];
        struct S1 * const *l_3302[9][3] = {{&g_936,&g_936,&g_936},{&g_936,&g_936,&g_936},{&g_936,&g_936,&g_936},{&g_936,&g_936,&g_936},{&g_936,&g_936,&g_936},{&g_936,&g_936,&g_936},{&g_936,&g_936,&g_936},{&g_936,&g_936,&g_936},{&g_936,&g_936,&g_936}};
        const struct S2 *l_3344 = &g_227[6][2];
        const struct S2 **l_3343 = &l_3344;
        const struct S2 ***l_3342 = &l_3343;
        const struct S2 ****l_3341 = &l_3342;
        int32_t l_3350 = 0x58066B9FL;
        int8_t l_3351[9][2] = {{0x9EL,0L},{0xEBL,0L},{0x9EL,0L},{0xEBL,0L},{0x9EL,0L},{0xEBL,0L},{0x9EL,0L},{0xEBL,0L},{0x9EL,0L}};
        int32_t l_3352[10][10][2] = {{{0xE104AD79L,0x4B652967L},{0x3A01D705L,0x34B1549FL},{0x44802A44L,0x148B5F21L},{0x54815E38L,1L},{0x34B1549FL,8L},{(-2L),0xFAD98C6EL},{0x4B652967L,0xFA27A3C2L},{0x8D377E0CL,1L},{1L,1L},{(-10L),1L}},{{0x9A60D4BEL,0x44802A44L},{1L,0L},{0xC48355CFL,1L},{1L,0xE104AD79L},{1L,1L},{0xC48355CFL,0L},{1L,0x44802A44L},{0x9A60D4BEL,1L},{(-10L),1L},{1L,1L}},{{0x8D377E0CL,0xFA27A3C2L},{0x4B652967L,0xFAD98C6EL},{(-2L),8L},{0x34B1549FL,1L},{0x54815E38L,0x148B5F21L},{0x44802A44L,0x34B1549FL},{0x3A01D705L,0x4B652967L},{0xE104AD79L,(-1L)},{0x89DAC069L,0L},{7L,1L}},{{0xFE4A1846L,4L},{0xE2B73863L,4L},{0x311D3547L,0x9A60D4BEL},{(-3L),0x54815E38L},{(-7L),0x89DAC069L},{0L,0x6D7A7D27L},{4L,0x7C92D433L},{1L,0x0DCC7435L},{0xFAD98C6EL,0x4ED00260L},{0xF9199A4FL,1L}},{{0L,(-3L)},{0x4B8A94BBL,0xB8B111EEL},{0xACB66418L,(-10L)},{1L,(-10L)},{0xACB66418L,0xB8B111EEL},{0x4B8A94BBL,(-3L)},{0L,1L},{0x7C92D433L,0x8D377E0CL},{0x9A60D4BEL,(-1L)},{(-2L),0xE104AD79L}},{{0xFE4A1846L,(-6L)},{0x54815E38L,0xA852FE35L},{0L,0L},{0x9384DB3DL,0x44802A44L},{0L,0xFE4A1846L},{(-2L),0xF9199A4FL},{0x3A01D705L,8L},{1L,0x85D1DB8BL},{0xA852FE35L,(-3L)},{(-7L),4L}},{{0x4ED00260L,0x89DAC069L},{0xADE19CBEL,0xFAD98C6EL},{0L,0x4B8A94BBL},{0x89DAC069L,0xC07E289EL},{0xDD499650L,0x9A60D4BEL},{4L,0x4B652967L},{1L,0x9223C3D5L},{1L,1L},{0xB8B111EEL,(-2L)},{0x44802A44L,0xADE19CBEL}},{{0x148B5F21L,0xE2B73863L},{7L,0x148B5F21L},{0xC48355CFL,(-7L)},{0xC48355CFL,0x148B5F21L},{7L,0xE2B73863L},{0x148B5F21L,0xADE19CBEL},{0x44802A44L,(-2L)},{0xB8B111EEL,1L},{1L,0x9223C3D5L},{1L,0x4B652967L}},{{4L,0x9A60D4BEL},{0xDD499650L,0xC07E289EL},{0x89DAC069L,0x4B8A94BBL},{0L,0xFAD98C6EL},{0xADE19CBEL,0x89DAC069L},{0x4ED00260L,4L},{(-7L),(-3L)},{0xA852FE35L,0x85D1DB8BL},{1L,8L},{0x3A01D705L,0xF9199A4FL}},{{(-2L),0xFE4A1846L},{0L,0x44802A44L},{0x9384DB3DL,0L},{0L,0xA852FE35L},{0x54815E38L,(-6L)},{0xFE4A1846L,0xE104AD79L},{(-2L),(-1L)},{0x9A60D4BEL,0x8D377E0CL},{0x7C92D433L,4L},{0x85D1DB8BL,0x9384DB3DL}}};
        int32_t l_3359 = 1L;
        uint32_t l_3361 = 6UL;
        uint32_t l_3394 = 0x483031F0L;
        int i, j, k;
        (*l_3262) = (safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(l_3244, l_3245)), (0xC7C47084A48F83EBLL & l_3246))), (safe_mul_func_int8_t_s_s((p_29.f0 == (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((!0x4FF1EC0FL), (l_3244 >= ((~(safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((+p_29.f3.f4), (***g_563))), g_323[0]))) > p_29.f3.f2)))), l_2984))), l_3260))));
        for (g_2708 = 0; (g_2708 <= 6); g_2708 += 1)
        {
            uint16_t l_3277[6][1];
            struct S2 *l_3284 = &g_227[6][1];
            uint16_t l_3288 = 0UL;
            int64_t *l_3291[10] = {(void*)0,&g_664,(void*)0,(void*)0,(void*)0,(void*)0,&g_664,(void*)0,(void*)0,(void*)0};
            int32_t l_3323 = (-1L);
            uint64_t * const *l_3331 = &g_1506;
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 1; j++)
                    l_3277[i][j] = 65535UL;
            }
            for (g_2729 = 0; (g_2729 <= 4); g_2729 += 1)
            {
                uint8_t *l_3280 = &g_1306;
                const uint32_t l_3283 = 0x3664A683L;
                struct S2 **l_3285[8][3][1] = {{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}}};
                int i, j, k;
                (****g_1002) = func_47((&p_29 == (l_3286 = (((*****g_2545) ^ (safe_div_func_uint8_t_u_u((p_29.f3 , (safe_unary_minus_func_uint16_t_u((((void*)0 != l_3266) >= ((0x81L | (((safe_add_func_int64_t_s_s(((-8L) >= ((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(l_3277[5][0], (safe_add_func_uint8_t_u_u(((((*l_3280)--) , p_31) == l_3012[0][8].f0.f4), (-8L))))) > g_3134[8][1]), p_29.f2)), 0)) ^ p_29.f3.f1)), (**g_2470))) , (*l_3262)) <= 0x2FB4BD0C5C36D497LL)) | l_3283))))), 255UL))) , l_3284))), (**l_3178), l_3287, (***g_2230), l_3012[0][8].f0.f1);
            }
            (*l_3262) ^= (l_3288 <= ((safe_add_func_uint64_t_u_u(((**g_2470) &= p_31), ((void*)0 == &g_396[1]))) , (((void*)0 != &g_3115) & (l_3012[0][8].f0.f1 = 1L))));
            for (g_2823 = 5; (g_2823 >= 0); g_2823 -= 1)
            {
                int16_t l_3297 = 0xBAA9L;
                uint8_t *l_3324 = (void*)0;
                uint8_t *l_3325 = &g_1306;
                const uint64_t ***l_3328 = &l_3326[2][0][7];
                int32_t * const l_3332 = &l_3012[0][8].f0.f2;
                int32_t **l_3333 = &g_504[0][1][0];
                if (p_29.f1)
                {
                    return g_530;
                }
                else
                {
                    (*g_936) = (***g_2230);
                }
                for (g_734 = 4; (g_734 >= 2); g_734 -= 1)
                {
                    struct S1 * const *l_3300 = &g_936;
                    struct S1 * const **l_3301 = &l_3300;
                    int8_t *l_3303 = &l_3012[0][8].f1;
                    uint16_t l_3310 = 0UL;
                    int i;
                    if (l_2984)
                        goto lbl_3292;
                    if (((((safe_mod_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(l_3297, (safe_add_func_uint32_t_u_u((((*l_3303) = (p_29 , (((*l_3301) = l_3300) == l_3302[6][1]))) , p_30), (safe_sub_func_int16_t_s_s(((*p_28) ^= (safe_add_func_int32_t_s_s(0x95C6EDC5L, (safe_mod_func_int8_t_s_s(0x7EL, l_3297))))), g_2300)))))) || 0x38CDL) && 255UL), g_1273)) ^ p_29.f1) <= l_3277[5][0]) , l_3310))
                    {
                        struct S2 ****l_3312 = &l_3116;
                        struct S2 *****l_3311 = &l_3312;
                        uint32_t l_3315 = 4294967294UL;
                        (*l_3311) = &g_3115;
                        (*l_3262) = (((((p_29.f3.f4 ^ l_3012[0][8].f0.f4) != ((p_29.f3.f3 , ((*p_28) &= ((((void*)0 != l_3313[8][8][2]) && 1UL) && p_29.f0))) == (p_29.f2 = (((((*l_3303) = p_29.f0) != l_3315) ^ 0x2E9BL) , l_3310)))) != (-1L)) ^ l_3310) && 65533UL);
                        (*l_3262) &= l_3297;
                    }
                    else
                    {
                        if (l_3310)
                            break;
                    }
                }
                (*l_3262) = ((((*l_3286) , (safe_div_func_uint8_t_u_u(((**g_253)++), (safe_unary_minus_func_int8_t_s(((g_530 , (safe_add_func_uint64_t_u_u(0x8DA95E10C1B227C5LL, (0L ^ ((*l_3325) = (l_3323 = l_3288)))))) , l_3297)))))) >= p_29.f3.f5) <= (((*l_3328) = l_3326[4][0][9]) == ((safe_rshift_func_uint16_t_u_s(p_29.f3.f5, g_2845)) , l_3331)));
                (*l_3333) = l_3332;
            }
            return g_103.f4;
        }
        if ((*l_3262))
        {
            int32_t l_3349 = 0x318CA1B4L;
            int32_t l_3353[5] = {0x3254E4ACL,0x3254E4ACL,0x3254E4ACL,0x3254E4ACL,0x3254E4ACL};
            int32_t l_3360 = 0xBCBE138EL;
            int i;
            if ((safe_sub_func_uint8_t_u_u((0UL & 255UL), ((func_47((*p_28), (***l_3177), l_3234, (*g_936), (safe_sub_func_uint8_t_u_u(l_3338[1][2], (safe_sub_func_int8_t_s_s(((void*)0 == l_3341), 0x2CL))))) , p_29.f3.f0) <= p_29.f3.f1))))
            {
                (*l_3262) = (p_29.f3.f0 < p_29.f3.f3);
            }
            else
            {
                int32_t *l_3345 = &g_735[2];
                int32_t *l_3346 = &g_735[2];
                int32_t *l_3347 = (void*)0;
                int32_t *l_3348[4][1];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_3348[i][j] = &g_227[6][1].f3.f2;
                }
                l_3361--;
                p_29.f3.f5 = (safe_mul_func_int8_t_s_s((l_3353[1] = g_2432), (((((p_29.f3.f4 && (safe_rshift_func_int8_t_s_u(g_162[3].f0.f4, (safe_mul_func_int8_t_s_s((((safe_sub_func_uint64_t_u_u(((safe_div_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((!(*p_28)), (*l_3262))), (safe_add_func_int16_t_s_s(0x1BA7L, (safe_mod_func_int8_t_s_s(((l_3360 = ((safe_mod_func_int8_t_s_s(((l_3385 , (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((*g_682) = 0UL), 6)) , ((safe_div_func_uint16_t_u_u(p_29.f3.f4, g_227[6][1].f0)) , (*l_3262))), g_38[6].f0))) & 0UL), 0x33L)) == 0xDB5C533C1A7629E3LL)) >= p_29.f3.f5), p_29.f1)))))), (*l_3346))) && 0xDBAB058CL), p_30)) ^ (**g_2470)) != (*l_3262)), p_31))))) || (*l_3262)) || 65528UL) && l_2984) && l_3234)));
            }
        }
        else
        {
            for (g_2526 = (-30); (g_2526 <= 45); ++g_2526)
            {
                return l_3394;
            }
        }
    }
    p_29.f3.f2 ^= ((l_3395 , (((-7L) & (l_3385.f3.f1 = ((l_3358[2] || 0L) > (-4L)))) < p_29.f3.f3)) != (((safe_add_func_int8_t_s_s(((((l_3398 == (void*)0) != (((*l_3286) = (((((p_29.f3.f4 = (safe_lshift_func_uint8_t_u_u(((l_3402 = (g_2166 = &g_5)) == (void*)0), l_3403[1][6]))) && p_29.f3.f5) & (*p_28)) || 1L) , (*l_3286))) , 1L)) <= p_29.f3.f1) != 0xA502L), p_31)) <= 0L) >= (***g_563)));
    l_3406[2][0]--;
    return p_29.f3.f2;
}







static int16_t * func_33(int16_t p_34)
{
    struct S0 *l_67 = &g_38[3];
    const int32_t l_2891 = 0x16CC9D1DL;
    uint64_t l_2894 = 0x9DB338E6CCD94CB9LL;
    int32_t *l_2966[7][2] = {{&g_2132[1][3][1],&g_2132[1][3][1]},{(void*)0,&g_2132[1][3][1]},{&g_2132[1][3][1],(void*)0},{&g_2132[1][3][1],&g_2132[1][3][1]},{(void*)0,&g_2132[1][3][1]},{&g_2132[1][3][1],(void*)0},{&g_2132[1][3][1],&g_2132[1][3][1]}};
    int32_t **l_2965 = &l_2966[5][1];
    int i, j;
    for (p_34 = (-1); (p_34 >= 2); p_34 = safe_add_func_uint16_t_u_u(p_34, 1))
    {
        struct S0 *l_39 = &g_38[3];
        const int32_t l_40 = 0x64FE605AL;
        int32_t l_2893 = 0x714F12D8L;
        if ((((*l_39) = g_38[6]) , l_40))
        {
            uint32_t l_53 = 0x742E7FF2L;
            struct S0 l_66[4][4] = {{{26142,-3155,0x7D17319FL,-1797,-1,-16952},{-4840,-6306,0x2EE3B6EAL,1937,3,-30932},{26142,-3155,0x7D17319FL,-1797,-1,-16952},{26142,-3155,0x7D17319FL,-1797,-1,-16952}},{{-4840,-6306,0x2EE3B6EAL,1937,3,-30932},{-4840,-6306,0x2EE3B6EAL,1937,3,-30932},{-21797,1667,2L,-1610,4,40206},{-4840,-6306,0x2EE3B6EAL,1937,3,-30932}},{{-4840,-6306,0x2EE3B6EAL,1937,3,-30932},{26142,-3155,0x7D17319FL,-1797,-1,-16952},{26142,-3155,0x7D17319FL,-1797,-1,-16952},{-4840,-6306,0x2EE3B6EAL,1937,3,-30932}},{{26142,-3155,0x7D17319FL,-1797,-1,-16952},{-4840,-6306,0x2EE3B6EAL,1937,3,-30932},{26142,-3155,0x7D17319FL,-1797,-1,-16952},{26142,-3155,0x7D17319FL,-1797,-1,-16952}}};
            int32_t *l_2892 = &g_735[2];
            struct S0 **l_2895 = &l_67;
            struct S1 l_2898 = {{-23629,-5845,0x2386CB28L,121,-1,7591},0xA3L};
            int i, j;
            (*g_882) = func_41(func_47(l_53, func_54(((p_34 > (l_2893 = ((*l_2892) |= (func_59(l_40, func_63(l_66[1][1], l_67), (*g_882)) | (safe_sub_func_uint32_t_u_u(((l_2891 , (**g_2470)) || 0xC9D9DA2DA6E6BECFLL), l_2891)))))) > (-3L)), l_2894, (*g_882), l_2895), l_40, l_2898, p_34), p_34, (*g_882), l_2894, p_34);
        }
        else
        {
            int32_t *l_2964 = &g_1583;
            int32_t **l_2963 = &l_2964;
            int32_t ***l_2967 = &l_2965;
            const int32_t **l_2968[1][2];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_2968[i][j] = &g_1775;
            }
            l_2965 = l_2963;
            (*l_2967) = &l_2964;
            g_1775 = &l_2891;
        }
    }
    for (g_400.f1 = 0; (g_400.f1 <= 20); ++g_400.f1)
    {
        if (p_34)
            break;
        for (g_507 = 0; g_507 < 9; g_507 += 1)
        {
            g_101[g_507] = 0x22L;
        }
    }
    return &g_597;
}







static struct S0 ** func_41(struct S0 p_42, uint64_t p_43, struct S0 ** p_44, uint32_t p_45, uint32_t p_46)
{
    int32_t **** const *l_2923 = &g_1491;
    int32_t **** const l_2925 = (void*)0;
    int32_t **** const *l_2924 = &l_2925;
    int32_t l_2928 = 7L;
    uint32_t l_2929 = 6UL;
    int32_t *l_2938 = &g_400.f0.f2;
lbl_2962:
    (*l_2938) |= (safe_sub_func_uint8_t_u_u((((l_2924 = l_2923) != (((safe_mul_func_int16_t_s_s(l_2928, l_2928)) && l_2929) , &l_2925)) == (safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((1UL < l_2929), ((&g_1378 == &g_1378) <= (-9L)))), 4L)), 4)), p_42.f0))), l_2929));
    (*l_2938) = (-2L);
    for (g_274 = (-27); (g_274 > 19); ++g_274)
    {
        uint8_t l_2941 = 0x0CL;
        int16_t *l_2955 = &g_227[6][1].f2;
        int16_t *l_2956 = (void*)0;
        int16_t *l_2957 = (void*)0;
        int16_t *l_2958 = &g_1273;
        int8_t *l_2959 = (void*)0;
        int8_t *l_2960 = &g_2300;
        int32_t *l_2961 = &g_2823;
        if (l_2941)
            break;
        (*l_2961) ^= (0L & ((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(((*****g_2545) ^ 0x8DL), ((*l_2960) = (~((0x9126L | (*l_2938)) == (p_45 <= (safe_mul_func_uint16_t_u_u((*l_2938), ((*l_2958) = ((*l_2955) = ((+0x73C2AE14L) || (~(safe_rshift_func_int8_t_s_u(p_42.f0, 1)))))))))))))), p_42.f4)), p_42.f2)) & 6L));
        if (l_2929)
            goto lbl_2962;
    }
    return p_44;
}







static struct S0 func_47(int16_t p_48, struct S0 ** p_49, uint32_t p_50, struct S1 p_51, int16_t p_52)
{
    uint64_t * const *l_2904 = &g_1506;
    uint64_t * const **l_2903 = &l_2904;
    int32_t l_2910 = 0x812379E6L;
    const uint32_t *l_2913 = &g_2758[4];
    const uint32_t **l_2912[6][1][9] = {{{&l_2913,&l_2913,&l_2913,&l_2913,&l_2913,&l_2913,&l_2913,&l_2913,(void*)0}},{{&l_2913,&l_2913,(void*)0,&l_2913,&l_2913,&l_2913,&l_2913,&l_2913,&l_2913}},{{&l_2913,&l_2913,&l_2913,&l_2913,&l_2913,&l_2913,&l_2913,&l_2913,&l_2913}},{{&l_2913,(void*)0,&l_2913,&l_2913,&l_2913,&l_2913,&l_2913,&l_2913,&l_2913}},{{(void*)0,&l_2913,&l_2913,&l_2913,&l_2913,&l_2913,&l_2913,(void*)0,&l_2913}},{{&l_2913,&l_2913,&l_2913,&l_2913,&l_2913,&l_2913,&l_2913,&l_2913,(void*)0}}};
    const uint32_t ***l_2911 = &l_2912[2][0][2];
    uint32_t ***l_2914[6] = {&g_847,&g_847,(void*)0,&g_847,&g_847,(void*)0};
    uint32_t ****l_2915 = &l_2914[3];
    uint32_t ****l_2916[7];
    int16_t *l_2918[2];
    int32_t l_2919 = 4L;
    int32_t *l_2920 = &g_735[3];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_2916[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_2918[i] = &g_1273;
    l_2910 = ((*l_2920) = (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((l_2903 != (p_51 , &g_1505[6])), ((safe_mod_func_int16_t_s_s((l_2919 = ((safe_rshift_func_int16_t_s_u((0xE3B34FDFL | (((safe_unary_minus_func_uint16_t_u((((l_2910 || (l_2911 != (g_2917[3] = ((*l_2915) = l_2914[3])))) || ((*g_1506) = 1UL)) <= (p_51.f0.f2 == g_400.f1)))) , p_50) && 0xAEB4A825L)), l_2910)) & l_2910)), 0x829DL)) == l_2910))), p_51.f0.f0)));
    return (****g_2563);
}







static struct S0 ** func_54(int8_t p_55, uint32_t p_56, struct S0 ** p_57, struct S0 ** p_58)
{
    int32_t *l_2896[8][8][1] = {{{&g_38[6].f2},{&g_3[3]},{(void*)0},{&g_400.f0.f2},{&g_400.f0.f2},{(void*)0},{&g_3[3]},{&g_38[6].f2}},{{&g_735[4]},{&g_103.f2},{&g_400.f0.f2},{&g_3[1]},{&g_103.f2},{&g_3[3]},{(void*)0},{&g_3[3]}},{{&g_103.f2},{&g_3[1]},{&g_400.f0.f2},{&g_103.f2},{&g_735[4]},{&g_38[6].f2},{&g_3[3]},{(void*)0}},{{&g_400.f0.f2},{&g_400.f0.f2},{(void*)0},{&g_3[3]},{&g_38[6].f2},{&g_735[4]},{&g_103.f2},{&g_400.f0.f2}},{{&g_3[1]},{&g_103.f2},{&g_3[3]},{(void*)0},{&g_3[3]},{&g_103.f2},{&g_3[1]},{&g_400.f0.f2}},{{&g_103.f2},{&g_735[4]},{&g_38[6].f2},{&g_3[3]},{(void*)0},{&g_400.f0.f2},{&g_400.f0.f2},{(void*)0}},{{&g_3[3]},{&g_38[6].f2},{&g_735[4]},{&g_103.f2},{&g_400.f0.f2},{&g_3[1]},{&g_103.f2},{&g_3[3]}},{{(void*)0},{&g_3[3]},{&g_103.f2},{&g_3[1]},{&g_400.f0.f2},{&g_103.f2},{&g_735[4]},{&g_38[6].f2}}};
    int32_t **l_2897 = &g_2166;
    int i, j, k;
    (*l_2897) = l_2896[4][1][0];
    return p_58;
}







static uint64_t func_59(uint32_t p_60, struct S0 * p_61, struct S0 ** p_62)
{
    int8_t *l_2862 = &g_162[3].f1;
    int32_t l_2866[7][10][3] = {{{0xAAC4B83CL,(-1L),0L},{1L,(-1L),1L},{0x4943ABB9L,(-1L),(-1L)},{4L,(-1L),0L},{0x1FBC1DD2L,(-1L),7L},{1L,(-1L),(-2L)},{0x9DFBEBC8L,(-1L),0x6C7ED168L},{(-9L),0x07FE6BD4L,0xA17E96ECL},{(-8L),0x07FE6BD4L,(-1L)},{0L,(-1L),(-1L)}},{{0x4A30408BL,(-1L),1L},{0x3B8225F8L,(-1L),0L},{0xC657F25BL,(-1L),0xB347F6C7L},{0xF54087E5L,(-1L),0x1BBCDFDAL},{0L,(-1L),(-10L)},{0xE935E7F2L,(-1L),(-2L)},{0x5288A3FFL,0x07FE6BD4L,0xB2EECFA8L},{1L,0x07FE6BD4L,0x07FE6BD4L},{0x92BF7CCBL,(-1L),0L},{0L,(-1L),0x8B126C24L}},{{0x3074A86AL,(-1L),0x9718067FL},{9L,(-1L),0xDF3BB5CAL},{0xC54C606FL,(-1L),0x16BD7CEEL},{0xCC742B81L,(-1L),(-10L)},{0xDBC9C625L,(-1L),0xE756D237L},{0x09E665D3L,0x07FE6BD4L,0xFEE6FC3BL},{0xC06F1681L,0x07FE6BD4L,(-1L)},{0xAAC4B83CL,0x391E7350L,0xF74167A0L},{0L,0x66A20305L,0xBDE20CFDL},{0L,1L,0x391E7350L}},{{0x16BD7CEEL,0x391E7350L,0xC3D3A1BFL},{0xE756D237L,1L,6L},{0x07FE6BD4L,0x66A20305L,0xB8144F80L},{1L,0x391E7350L,0L},{0L,6L,0x567A8CC4L},{(-10L),6L,1L},{0xA17E96ECL,0x391E7350L,1L},{(-1L),0x66A20305L,0xBD298182L},{(-1L),1L,0x30799396L},{0x1BBCDFDAL,0x391E7350L,0x0A50AA22L}},{{(-2L),1L,0x3AE66D7AL},{(-1L),0x66A20305L,1L},{0x8B126C24L,0x391E7350L,1L},{0xDF3BB5CAL,6L,0x07BE6B2DL},{(-10L),6L,6L},{0xFEE6FC3BL,0x391E7350L,1L},{0L,0x66A20305L,(-1L)},{0x9718067FL,1L,0x315D0EE7L},{7L,0x391E7350L,4L},{0x6C7ED168L,1L,0xE0BC4B53L}},{{(-1L),0x66A20305L,0xE16D1F3CL},{1L,0x391E7350L,(-4L)},{0xB347F6C7L,6L,0x90D595C8L},{(-2L),6L,0x66A20305L},{0xB2EECFA8L,0x391E7350L,0xF74167A0L},{0L,0x66A20305L,0xBDE20CFDL},{0L,1L,0x391E7350L},{0x16BD7CEEL,0x391E7350L,0xC3D3A1BFL},{0xE756D237L,1L,6L},{0x07FE6BD4L,0x66A20305L,0xB8144F80L}},{{1L,0x391E7350L,0L},{0L,6L,0x567A8CC4L},{(-10L),6L,1L},{0xA17E96ECL,0x391E7350L,1L},{(-1L),0x66A20305L,0xBD298182L},{(-1L),1L,0x30799396L},{0x1BBCDFDAL,0x391E7350L,0x0A50AA22L},{(-2L),1L,0x3AE66D7AL},{(-1L),0x66A20305L,1L},{0x8B126C24L,0x391E7350L,1L}}};
    uint64_t *l_2867 = &g_495;
    uint64_t l_2870[2][9] = {{18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL},{8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL}};
    int8_t l_2871[2][1][5] = {{{0xE6L,0x19L,0x19L,0xE6L,0x19L}},{{0xE6L,0xE6L,0xD5L,0xE6L,0xE6L}}};
    int32_t *l_2872 = &g_2823;
    struct S0 ***l_2877[4][2][5] = {{{&g_279[1],&g_279[0],&g_279[1],&g_279[1],&g_279[1]},{&g_279[1],(void*)0,&g_279[1],&g_279[1],(void*)0}},{{(void*)0,&g_279[1],&g_279[1],&g_279[1],&g_279[1]},{&g_279[0],&g_279[1],&g_279[1],&g_279[1],&g_279[0]}},{{&g_279[1],&g_279[1],&g_279[1],&g_279[0],&g_279[1]},{&g_279[0],&g_279[1],&g_279[1],&g_279[1],&g_279[0]}},{{(void*)0,&g_279[1],&g_279[1],&g_279[1],&g_279[1]},{&g_279[1],(void*)0,&g_279[1],&g_279[1],(void*)0}}};
    uint16_t l_2883 = 0xC794L;
    int16_t l_2884[4][4][6] = {{{0x6506L,0x6506L,0xBF22L,0L,1L,0x061AL},{0x3C5EL,0x911EL,(-1L),(-1L),1L,0xBF22L},{0xE695L,0x3C5EL,(-1L),0x9D0BL,0x6506L,0x061AL},{1L,0x9D0BL,0xBF22L,0L,0x911EL,0L}},{{0L,0x911EL,0L,1L,0x3C5EL,0L},{0xE695L,0L,0xBF22L,2L,0x9D0BL,0x061AL},{0x9D0BL,1L,(-1L),0L,0x911EL,0xBF22L},{0L,1L,(-1L),1L,0L,0x061AL}},{{0x7240L,0x3C5EL,0xBF22L,1L,1L,0L},{1L,1L,0L,0x3C5EL,1L,0L},{0L,0xE695L,0xBF22L,(-1L),0x3C5EL,0x061AL},{1L,1L,(-1L),2L,1L,0xBF22L}},{{0x6506L,0x9D0BL,(-1L),0x3C5EL,0xE695L,0x061AL},{0L,1L,0xBF22L,0x7240L,1L,0L},{0x7240L,1L,0L,0x9D0BL,0x9D0BL,0L},{0x6506L,0x6506L,0xBF22L,0L,1L,0x061AL}}};
    int16_t ****l_2888 = &g_2439;
    int i, j, k;
    (*l_2872) ^= (safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((p_60 ^ ((((safe_lshift_func_int8_t_s_u(g_103.f2, ((p_60 >= (safe_mul_func_int8_t_s_s(((*l_2862) = 0x2AL), (safe_mul_func_uint8_t_u_u((((**g_2470) != (safe_unary_minus_func_uint64_t_u(((*l_2867) &= l_2866[0][9][2])))) >= l_2866[1][0][1]), p_60))))) & ((safe_div_func_int8_t_s_s(g_227[6][1].f3.f2, 3L)) >= l_2870[0][7])))) && l_2866[0][6][1]) & 18446744073709551615UL) > p_60)), 13)), l_2870[0][7])) | l_2871[1][0][1]), 0x7CE7L));
    for (g_299 = 0; (g_299 >= 57); ++g_299)
    {
        uint32_t l_2882[6][4] = {{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL}};
        int32_t l_2885 = (-2L);
        struct S0 l_2887 = {35902,-6246,0L,-609,-1,7386};
        int i, j;
        l_2887 = ((****g_2563) = ((g_2886[2] |= (l_2885 = ((**g_2716) , ((((*g_1319) == l_2877[3][1][3]) < (p_60 != (safe_mod_func_int16_t_s_s((p_60 <= ((safe_div_func_uint8_t_u_u((l_2882[2][2] && (0UL ^ (1UL != (0L < l_2883)))), l_2884[2][0][2])) ^ p_60)), p_60)))) , l_2882[1][0])))) , (**p_62)));
    }
    (*l_2888) = g_2439;
    return (**g_2470);
}







static struct S0 * func_63(struct S0 p_64, struct S0 * p_65)
{
    int32_t l_68 = 2L;
    uint64_t *l_92 = &g_93;
    int32_t *l_97 = &g_38[6].f2;
    uint8_t *l_98 = (void*)0;
    uint8_t *l_99 = (void*)0;
    uint8_t *l_100 = &g_101[2];
    struct S0 *l_102 = &g_103;
    uint16_t *l_141 = &g_142;
    uint16_t **l_140 = &l_141;
    int32_t l_172 = 0L;
    int32_t l_265 = 0xB4A44A83L;
    int32_t l_268 = 0x2D0D2D7DL;
    int32_t l_272 = 0x36119D7EL;
    uint16_t ***l_305 = &l_140;
    struct S1 *l_353 = (void*)0;
    int64_t l_394[10] = {0x64172BA1CCBC5A4ELL,0x64172BA1CCBC5A4ELL,0x64172BA1CCBC5A4ELL,0x64172BA1CCBC5A4ELL,0x64172BA1CCBC5A4ELL,0x64172BA1CCBC5A4ELL,0x64172BA1CCBC5A4ELL,0x64172BA1CCBC5A4ELL,0x64172BA1CCBC5A4ELL,0x64172BA1CCBC5A4ELL};
    int32_t ** const *l_425 = (void*)0;
    uint32_t l_635 = 0UL;
    int32_t l_691 = 5L;
    struct S0 *l_697 = &g_227[6][1].f3;
    uint32_t l_725 = 4294967295UL;
    int32_t l_736 = 1L;
    int32_t l_737[7][7][4] = {{{0xD710058FL,(-1L),0x414EE073L,0x32F7B4C5L},{0L,0xD63AE329L,0L,0x414EE073L},{0xFB865F08L,0x79716F33L,0x69EF03F8L,0xFB865F08L},{0xD710058FL,0x414EE073L,0xCEAA265BL,0x79716F33L},{0x414EE073L,0xD63AE329L,0xCEAA265BL,0xCEAA265BL},{0xD710058FL,0xD710058FL,0x69EF03F8L,0x32F7B4C5L},{0xFB865F08L,0xD2FBE061L,0L,0x79716F33L}},{{0L,0x79716F33L,0x414EE073L,0L},{0xD710058FL,0x79716F33L,0x1B449090L,0x79716F33L},{0x79716F33L,0xD2FBE061L,0xCEAA265BL,0x32F7B4C5L},{(-1L),0xD710058FL,0x414EE073L,0xCEAA265BL},{0xFB865F08L,0xD63AE329L,0xA9C79AA2L,0x79716F33L},{0xFB865F08L,0x414EE073L,0x414EE073L,0xFB865F08L},{(-1L),0x79716F33L,0xCEAA265BL,0xA9C79AA2L}},{{0L,(-1L),0xD63AE329L,0xD2FBE061L},{0x414EE073L,0x69EF03F8L,0xA9C79AA2L,0xD2FBE061L},{0x1B449090L,(-1L),0x1B449090L,0xA9C79AA2L},{0xCEAA265BL,0L,0xFB865F08L,0xCEAA265BL},{0x414EE073L,0xA9C79AA2L,5L,0L},{0xA9C79AA2L,(-1L),5L,5L},{0x414EE073L,0x414EE073L,0xFB865F08L,0xD2FBE061L}},{{0xCEAA265BL,0x539AD46BL,0x1B449090L,0L},{0x1B449090L,0L,0xA9C79AA2L,0x1B449090L},{0x414EE073L,0L,0xD63AE329L,0L},{0L,0x539AD46BL,5L,0xD2FBE061L},{0x69EF03F8L,0x414EE073L,0xA9C79AA2L,5L},{0xCEAA265BL,(-1L),0x32F7B4C5L,0L},{0xCEAA265BL,0xA9C79AA2L,0xA9C79AA2L,0xCEAA265BL}},{{0x69EF03F8L,0L,5L,0xA9C79AA2L},{0L,(-1L),0xD63AE329L,0xD2FBE061L},{0x414EE073L,0x69EF03F8L,0xA9C79AA2L,0xD2FBE061L},{0x1B449090L,(-1L),0x1B449090L,0xA9C79AA2L},{0xCEAA265BL,0L,0xFB865F08L,0xCEAA265BL},{0x414EE073L,0xA9C79AA2L,5L,0L},{0xA9C79AA2L,(-1L),5L,5L}},{{0x414EE073L,0x414EE073L,0xFB865F08L,0xD2FBE061L},{0xCEAA265BL,0x539AD46BL,0x1B449090L,0L},{0x1B449090L,0L,0xA9C79AA2L,0x1B449090L},{0x414EE073L,0L,0xD63AE329L,0L},{0L,0x539AD46BL,5L,0xD2FBE061L},{0x69EF03F8L,0x414EE073L,0xA9C79AA2L,5L},{0xCEAA265BL,(-1L),0x32F7B4C5L,0L}},{{0xCEAA265BL,0xA9C79AA2L,0xA9C79AA2L,0xCEAA265BL},{0x69EF03F8L,0L,5L,0xA9C79AA2L},{0L,(-1L),0xD63AE329L,0xD2FBE061L},{0x414EE073L,0x69EF03F8L,0xA9C79AA2L,0xD2FBE061L},{0x1B449090L,(-1L),0x1B449090L,0xA9C79AA2L},{0xCEAA265BL,0L,0xFB865F08L,0xCEAA265BL},{0x414EE073L,0xA9C79AA2L,5L,0L}}};
    uint32_t l_738 = 0xDCD1034CL;
    uint32_t l_800[1][10][7] = {{{1UL,0x756DCBFFL,0x893560E0L,0x893560E0L,0x756DCBFFL,1UL,0x756DCBFFL},{4294967292UL,4294967288UL,0xE2831270L,0UL,0xBEB01DBCL,0UL,0xE2831270L},{0x4F22EC50L,0x4F22EC50L,1UL,0x893560E0L,1UL,0x4F22EC50L,0x4F22EC50L},{1UL,4294967288UL,3UL,4294967288UL,1UL,0x266C06A2L,0xE2831270L},{0x693FBDE2L,0x756DCBFFL,0x693FBDE2L,1UL,1UL,0x693FBDE2L,0x756DCBFFL},{0xE2831270L,0xB6107E31L,3UL,1UL,0xBEB01DBCL,4294967288UL,0xBEB01DBCL},{0x693FBDE2L,1UL,1UL,0x693FBDE2L,0x756DCBFFL,0x693FBDE2L,1UL},{1UL,4294967288UL,4294967292UL,0xB6107E31L,4294967292UL,4294967288UL,0xE2831270L},{1UL,0x693FBDE2L,0x756DCBFFL,0x693FBDE2L,1UL,1UL,0x693FBDE2L},{3UL,0x266C06A2L,3UL,0UL,4294967292UL,1UL,1UL}}};
    struct S0 ***l_880[8][6] = {{&g_279[1],&g_279[1],&g_279[1],&g_279[1],&g_279[1],&g_279[1]},{&g_279[1],&g_279[1],&g_279[1],&g_279[1],&g_279[1],&g_279[1]},{&g_279[1],&g_279[1],&g_279[1],&g_279[1],&g_279[1],&g_279[1]},{&g_279[1],&g_279[1],&g_279[1],&g_279[1],&g_279[1],&g_279[1]},{&g_279[1],&g_279[1],&g_279[1],&g_279[1],&g_279[1],&g_279[1]},{&g_279[1],&g_279[1],&g_279[1],&g_279[1],&g_279[1],&g_279[1]},{&g_279[1],&g_279[1],&g_279[1],&g_279[1],&g_279[1],&g_279[1]},{&g_279[1],&g_279[1],&g_279[1],&g_279[1],&g_279[1],&g_279[1]}};
    struct S2 l_914 = {-2L,65535UL,0x2A25L,{42392,4889,-1L,-208,-3,-33747}};
    uint16_t * const *l_920 = &g_682;
    uint16_t * const **l_919 = &l_920;
    struct S1 **l_1031 = (void*)0;
    int32_t l_1050 = 1L;
    int64_t l_1051 = 0x7DE773B73B5682C3LL;
    int32_t **l_1056 = &l_97;
    int8_t *l_1063 = &g_534;
    uint16_t ****l_1072 = (void*)0;
    uint16_t *****l_1071 = &l_1072;
    uint32_t l_1084 = 1UL;
    uint32_t l_1193 = 0xE3049652L;
    int32_t l_1200 = 0xB54D881BL;
    uint8_t *****l_1220[6] = {&g_906[1],&g_906[1],&g_906[1],&g_906[1],&g_906[1],&g_906[1]};
    uint16_t l_1257 = 0x86F0L;
    int64_t *l_1284 = &g_1270[4];
    int64_t **l_1283[7] = {&l_1284,&l_1284,&l_1284,&l_1284,&l_1284,&l_1284,&l_1284};
    int16_t l_1409 = 0x177FL;
    uint64_t l_1521 = 1UL;
    uint64_t l_1548 = 0xCFE0A7017A424837LL;
    struct S0 ****l_1574 = &l_880[1][1];
    struct S0 *****l_1573 = &l_1574;
    uint32_t l_1771[2];
    int32_t l_1810 = 0L;
    int8_t l_1847[5];
    int64_t l_1891 = 0L;
    int32_t *l_2064 = &g_284;
    int32_t **l_2063[5];
    const int32_t *l_2104 = &g_735[5];
    int64_t l_2173[10][1][7] = {{{1L,0x2D5E7B768CD56C25LL,0xE03A9D77DEF9FA0ALL,(-10L),(-10L),0xE03A9D77DEF9FA0ALL,0x2D5E7B768CD56C25LL}},{{0xF92868C946F7589BLL,1L,0x143DF592409014B2LL,0x640D8B7E62A801E8LL,0xF9C3A904A074EB9CLL,0xE03A9D77DEF9FA0ALL,0x92D855E7E663B1B9LL}},{{5L,0x43F2AAD057FE0C21LL,0xB74F71ED02848F1ELL,0xEC680869E2DF591ALL,0xABF9FFA7629048F6LL,(-10L),0xABF9FFA7629048F6LL}},{{0x640D8B7E62A801E8LL,0xABF9FFA7629048F6LL,0xABF9FFA7629048F6LL,0x640D8B7E62A801E8LL,0x7B920C38ADFB77FFLL,0x92D855E7E663B1B9LL,0xEC680869E2DF591ALL}},{{0x92D855E7E663B1B9LL,0xABF9FFA7629048F6LL,5L,(-10L),0xF92868C946F7589BLL,0x7B920C38ADFB77FFLL,4L}},{{0xEC680869E2DF591ALL,0x43F2AAD057FE0C21LL,0x92D855E7E663B1B9LL,1L,0x92D855E7E663B1B9LL,0x43F2AAD057FE0C21LL,0xEC680869E2DF591ALL}},{{0xF9C3A904A074EB9CLL,1L,0x43F2AAD057FE0C21LL,4L,0x92D855E7E663B1B9LL,0x2D5E7B768CD56C25LL,0xABF9FFA7629048F6LL}},{{0L,0x2D5E7B768CD56C25LL,(-10L),0x92D855E7E663B1B9LL,0xF92868C946F7589BLL,0xF92868C946F7589BLL,0x92D855E7E663B1B9LL}},{{0x43F2AAD057FE0C21LL,0x143DF592409014B2LL,0x43F2AAD057FE0C21LL,0xE03A9D77DEF9FA0ALL,0x7B920C38ADFB77FFLL,0L,0x2D5E7B768CD56C25LL}},{{0x43F2AAD057FE0C21LL,4L,0x92D855E7E663B1B9LL,0x2D5E7B768CD56C25LL,0xABF9FFA7629048F6LL,0x143DF592409014B2LL,0L}}};
    const int16_t *l_2194 = &g_148;
    const int16_t **l_2193 = &l_2194;
    uint32_t l_2272[6];
    int32_t ***l_2296 = (void*)0;
    int32_t l_2395 = 0xB103985EL;
    int64_t l_2495 = 0L;
    const uint8_t * const ****l_2544 = (void*)0;
    int64_t ***l_2639 = &l_1283[6];
    int64_t l_2644 = 1L;
    uint32_t l_2645 = 0x1508EF5EL;
    uint32_t l_2715[2][1][1];
    struct S2 **l_2748 = &g_1949[1][1][6];
    struct S2 ***l_2747 = &l_2748;
    int32_t *l_2764 = &g_38[6].f2;
    uint16_t l_2814 = 0x6AFCL;
    int32_t *l_2850 = (void*)0;
    int32_t *l_2851 = &l_914.f3.f2;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1771[i] = 7UL;
    for (i = 0; i < 5; i++)
        l_1847[i] = 0L;
    for (i = 0; i < 5; i++)
        l_2063[i] = &l_2064;
    for (i = 0; i < 6; i++)
        l_2272[i] = 1UL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_2715[i][j][k] = 0x8E5DE075L;
        }
    }
    return (**g_882);
}







static uint32_t func_74(uint16_t p_75, int8_t p_76, struct S0 * p_77)
{
    return p_75;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_38[i].f0, "g_38[i].f0", print_hash_value);
        transparent_crc(g_38[i].f1, "g_38[i].f1", print_hash_value);
        transparent_crc(g_38[i].f2, "g_38[i].f2", print_hash_value);
        transparent_crc(g_38[i].f3, "g_38[i].f3", print_hash_value);
        transparent_crc(g_38[i].f4, "g_38[i].f4", print_hash_value);
        transparent_crc(g_38[i].f5, "g_38[i].f5", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_93, "g_93", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_101[i], "g_101[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f1, "g_103.f1", print_hash_value);
    transparent_crc(g_103.f2, "g_103.f2", print_hash_value);
    transparent_crc(g_103.f3, "g_103.f3", print_hash_value);
    transparent_crc(g_103.f4, "g_103.f4", print_hash_value);
    transparent_crc(g_103.f5, "g_103.f5", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_162[i].f0.f0, "g_162[i].f0.f0", print_hash_value);
        transparent_crc(g_162[i].f0.f1, "g_162[i].f0.f1", print_hash_value);
        transparent_crc(g_162[i].f0.f2, "g_162[i].f0.f2", print_hash_value);
        transparent_crc(g_162[i].f0.f3, "g_162[i].f0.f3", print_hash_value);
        transparent_crc(g_162[i].f0.f4, "g_162[i].f0.f4", print_hash_value);
        transparent_crc(g_162[i].f0.f5, "g_162[i].f0.f5", print_hash_value);
        transparent_crc(g_162[i].f1, "g_162[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_227[i][j].f0, "g_227[i][j].f0", print_hash_value);
            transparent_crc(g_227[i][j].f1, "g_227[i][j].f1", print_hash_value);
            transparent_crc(g_227[i][j].f2, "g_227[i][j].f2", print_hash_value);
            transparent_crc(g_227[i][j].f3.f0, "g_227[i][j].f3.f0", print_hash_value);
            transparent_crc(g_227[i][j].f3.f1, "g_227[i][j].f3.f1", print_hash_value);
            transparent_crc(g_227[i][j].f3.f2, "g_227[i][j].f3.f2", print_hash_value);
            transparent_crc(g_227[i][j].f3.f3, "g_227[i][j].f3.f3", print_hash_value);
            transparent_crc(g_227[i][j].f3.f4, "g_227[i][j].f3.f4", print_hash_value);
            transparent_crc(g_227[i][j].f3.f5, "g_227[i][j].f3.f5", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_323[i], "g_323[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_396[i], "g_396[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_400.f0.f0, "g_400.f0.f0", print_hash_value);
    transparent_crc(g_400.f0.f1, "g_400.f0.f1", print_hash_value);
    transparent_crc(g_400.f0.f2, "g_400.f0.f2", print_hash_value);
    transparent_crc(g_400.f0.f3, "g_400.f0.f3", print_hash_value);
    transparent_crc(g_400.f0.f4, "g_400.f0.f4", print_hash_value);
    transparent_crc(g_400.f0.f5, "g_400.f0.f5", print_hash_value);
    transparent_crc(g_400.f1, "g_400.f1", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_530, "g_530", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_588, "g_588", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    transparent_crc(g_734, "g_734", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_735[i], "g_735[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1270[i], "g_1270[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1273, "g_1273", print_hash_value);
    transparent_crc(g_1306, "g_1306", print_hash_value);
    transparent_crc(g_1583, "g_1583", print_hash_value);
    transparent_crc(g_1772, "g_1772", print_hash_value);
    transparent_crc(g_2013.f0.f0, "g_2013.f0.f0", print_hash_value);
    transparent_crc(g_2013.f0.f1, "g_2013.f0.f1", print_hash_value);
    transparent_crc(g_2013.f0.f2, "g_2013.f0.f2", print_hash_value);
    transparent_crc(g_2013.f0.f3, "g_2013.f0.f3", print_hash_value);
    transparent_crc(g_2013.f0.f4, "g_2013.f0.f4", print_hash_value);
    transparent_crc(g_2013.f0.f5, "g_2013.f0.f5", print_hash_value);
    transparent_crc(g_2013.f1, "g_2013.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_2132[i][j][k], "g_2132[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2300, "g_2300", print_hash_value);
    transparent_crc(g_2432, "g_2432", print_hash_value);
    transparent_crc(g_2526, "g_2526", print_hash_value);
    transparent_crc(g_2708, "g_2708", print_hash_value);
    transparent_crc(g_2729, "g_2729", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2758[i], "g_2758[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2823, "g_2823", print_hash_value);
    transparent_crc(g_2845, "g_2845", print_hash_value);
    transparent_crc(g_2849, "g_2849", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2886[i], "g_2886[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_3134[i][j], "g_3134[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_3410[i][j], "g_3410[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3445, "g_3445", print_hash_value);
    transparent_crc(g_3564, "g_3564", print_hash_value);
    transparent_crc(g_3600, "g_3600", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_3627[i], "g_3627[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3656, "g_3656", print_hash_value);
    transparent_crc(g_3754, "g_3754", print_hash_value);
    transparent_crc(g_3837, "g_3837", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
