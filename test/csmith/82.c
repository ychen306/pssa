// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = EE8CC398
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
   uint16_t f0;
   uint32_t f1;
   int32_t f2;
   int8_t f3;
   const uint64_t f4;
   const uint16_t f5;
   signed f6 : 7;
   int32_t f7;
};
#pragma pack(pop)

struct S1 {
   signed f0 : 23;
   const uint64_t f1;
   const int32_t f2;
   uint16_t f3;
};

struct S2 {
   int16_t f0;
   struct S1 f1;
   uint16_t f2;
};

union U3 {
   const int32_t f0;
};

union U4 {
   int32_t f0;
   const uint16_t f1;
   const uint16_t f2;
};

union U5 {
   int16_t f0;
   const int32_t f1;
   const int8_t f2;
};

union U6 {
   uint32_t f0;
   unsigned f1 : 22;
   int8_t f2;
   int32_t f3;
   uint16_t f4;
};


static int32_t g_2 = 0x60CBEB96L;
static int32_t g_28[3][6] = {{0xAC8E4C12L,0x90200244L,0x90200244L,0xAC8E4C12L,0xAC8E4C12L,0x90200244L},{0xAC8E4C12L,0xAC8E4C12L,0x90200244L,0x90200244L,0xAC8E4C12L,0xAC8E4C12L},{0xAC8E4C12L,0x90200244L,0x90200244L,0xAC8E4C12L,0xAC8E4C12L,0x90200244L}};
static union U6 g_39 = {1UL};
static union U3 g_40 = {-1L};
static int32_t *g_41 = (void*)0;
static struct S1 g_64 = {222,0x74B80CDE216D7279LL,2L,0UL};
static const struct S2 g_72 = {0xDE38L,{788,0xD0E75FCAA6ABB25ALL,4L,0xEF04L},65534UL};
static int16_t g_99 = 0x6B81L;
static uint16_t *g_100 = &g_64.f3;
static uint32_t g_112 = 4294967295UL;
static int8_t g_128 = 0xA5L;
static struct S0 g_132 = {0UL,0xCAA49FFAL,0L,0xEDL,18446744073709551615UL,0UL,-6,0L};
static struct S0 *g_131 = &g_132;
static int32_t g_154 = 0xA61F905AL;
static uint16_t g_155 = 0x7499L;
static union U5 g_180 = {-1L};
static int64_t g_187 = 0xF8201C62F756BAA7LL;
static int8_t g_217 = 0x8AL;
static struct S1 **g_237 = (void*)0;
static int32_t g_252 = 0x3ECE4B44L;
static uint8_t g_253 = 252UL;
static uint64_t g_282 = 0x8316402E33435BB4LL;
static uint32_t g_284 = 18446744073709551615UL;
static const uint32_t g_294[2] = {0x58F53D3CL,0x58F53D3CL};
static uint32_t g_306[4][5] = {{0x6EB93942L,0x6EB93942L,0x6EB93942L,0x6EB93942L,0x6EB93942L},{0x312F68C6L,0UL,0x312F68C6L,0UL,0x312F68C6L},{0x6EB93942L,0x6EB93942L,0x6EB93942L,0x6EB93942L,0x6EB93942L},{0x312F68C6L,0UL,0x312F68C6L,0UL,0x312F68C6L}};
static int32_t g_338[5][3] = {{1L,1L,0xF4499494L},{1L,1L,0xF4499494L},{0x6B94E045L,0x6B94E045L,1L},{0x6B94E045L,0x6B94E045L,1L},{0x6B94E045L,0x6B94E045L,1L}};
static uint64_t *g_356 = &g_282;
static uint64_t **g_355[3] = {&g_356,&g_356,&g_356};
static int8_t g_360[3] = {7L,7L,7L};
static uint64_t **g_363 = (void*)0;
static uint64_t ***g_362 = &g_363;
static struct S1 g_408[9][6] = {{{-1019,0x16A318637C0EC754LL,7L,0x8901L},{-1914,5UL,-6L,1UL},{2588,18446744073709551615UL,1L,1UL},{-274,0x207361177807A14ALL,0x6C76AD62L,0xB2B4L},{-780,0x599ED79E98B80AD4LL,0x23FD8002L,65534UL},{2682,0UL,0L,65527UL}},{{-2833,0xF5D9433F045B80AELL,0L,5UL},{-274,0x207361177807A14ALL,0x6C76AD62L,0xB2B4L},{885,0x79A3B450E99EE5B1LL,0x405C3C7AL,0xB05DL},{885,0x79A3B450E99EE5B1LL,0x405C3C7AL,0xB05DL},{-274,0x207361177807A14ALL,0x6C76AD62L,0xB2B4L},{-2833,0xF5D9433F045B80AELL,0L,5UL}},{{885,0x79A3B450E99EE5B1LL,0x405C3C7AL,0xB05DL},{-274,0x207361177807A14ALL,0x6C76AD62L,0xB2B4L},{-2833,0xF5D9433F045B80AELL,0L,5UL},{-2351,0x1DD00A61A6B97501LL,0L,0UL},{-780,0x599ED79E98B80AD4LL,0x23FD8002L,65534UL},{2588,18446744073709551615UL,1L,1UL}},{{2588,18446744073709551615UL,1L,1UL},{-1914,5UL,-6L,1UL},{-1019,0x16A318637C0EC754LL,7L,0x8901L},{-1914,5UL,-6L,1UL},{2588,18446744073709551615UL,1L,1UL},{-274,0x207361177807A14ALL,0x6C76AD62L,0xB2B4L}},{{2588,18446744073709551615UL,1L,1UL},{885,0x79A3B450E99EE5B1LL,0x405C3C7AL,0xB05DL},{-1914,5UL,-6L,1UL},{-2351,0x1DD00A61A6B97501LL,0L,0UL},{1724,0x3469A72E95C9E9F9LL,0x2A23B5FDL,0xA456L},{1724,0x3469A72E95C9E9F9LL,0x2A23B5FDL,0xA456L}},{{885,0x79A3B450E99EE5B1LL,0x405C3C7AL,0xB05DL},{-780,0x599ED79E98B80AD4LL,0x23FD8002L,65534UL},{-780,0x599ED79E98B80AD4LL,0x23FD8002L,65534UL},{885,0x79A3B450E99EE5B1LL,0x405C3C7AL,0xB05DL},{-1019,0x16A318637C0EC754LL,7L,0x8901L},{1724,0x3469A72E95C9E9F9LL,0x2A23B5FDL,0xA456L}},{{-2833,0xF5D9433F045B80AELL,0L,5UL},{1724,0x3469A72E95C9E9F9LL,0x2A23B5FDL,0xA456L},{-1914,5UL,-6L,1UL},{-274,0x207361177807A14ALL,0x6C76AD62L,0xB2B4L},{-2351,0x1DD00A61A6B97501LL,0L,0UL},{-274,0x207361177807A14ALL,0x6C76AD62L,0xB2B4L}},{{-1019,0x16A318637C0EC754LL,7L,0x8901L},{59,0x4A5D6E7B4568F124LL,0x897ECA9CL,0x8DDAL},{-1019,0x16A318637C0EC754LL,7L,0x8901L},{2682,0UL,0L,65527UL},{-2351,0x1DD00A61A6B97501LL,0L,0UL},{2588,18446744073709551615UL,1L,1UL}},{{-1914,5UL,-6L,1UL},{1724,0x3469A72E95C9E9F9LL,0x2A23B5FDL,0xA456L},{-2833,0xF5D9433F045B80AELL,0L,5UL},{-1019,0x16A318637C0EC754LL,7L,0x8901L},{-1019,0x16A318637C0EC754LL,7L,0x8901L},{-2833,0xF5D9433F045B80AELL,0L,5UL}}};
static union U6 g_494 = {18446744073709551610UL};
static const uint32_t g_514 = 4294967291UL;
static int16_t g_531 = 0x6AD6L;
static uint8_t g_582 = 0xB2L;
static struct S2 g_591 = {0x3F89L,{-2320,1UL,0xBB0D3A99L,65535UL},6UL};
static struct S2 g_594 = {0L,{1457,18446744073709551607UL,0x5E637F94L,0xC624L},0x8A7CL};
static struct S2 *g_593 = &g_594;
static int64_t g_603 = 0x109EE7189A929906LL;
static uint16_t ***g_623 = (void*)0;
static int32_t g_629 = 0x623870C4L;
static union U4 g_636 = {-4L};
static union U6 *g_647[6][8][5] = {{{(void*)0,&g_494,&g_39,&g_39,(void*)0},{&g_39,&g_39,&g_39,&g_39,&g_39},{&g_39,&g_494,&g_494,(void*)0,&g_494},{&g_39,&g_494,&g_494,&g_39,&g_494},{&g_494,(void*)0,&g_39,&g_39,&g_39},{&g_39,&g_494,&g_39,&g_39,&g_494},{&g_39,&g_494,&g_39,&g_494,&g_494},{&g_39,&g_494,(void*)0,&g_39,(void*)0}},{{(void*)0,(void*)0,&g_39,&g_494,&g_494},{&g_494,&g_494,&g_494,&g_494,&g_39},{&g_39,&g_494,&g_494,(void*)0,&g_39},{&g_494,&g_494,&g_39,&g_39,&g_494},{&g_39,(void*)0,&g_494,&g_39,&g_39},{&g_494,&g_494,&g_39,(void*)0,(void*)0},{(void*)0,&g_494,(void*)0,&g_494,&g_494},{&g_39,&g_494,&g_39,(void*)0,&g_494}},{{&g_39,(void*)0,&g_494,&g_494,&g_39},{&g_39,&g_494,&g_39,&g_494,&g_39},{&g_39,&g_494,(void*)0,&g_39,&g_39},{&g_39,&g_39,&g_39,&g_494,&g_39},{&g_494,&g_494,&g_494,&g_494,(void*)0},{&g_494,&g_39,&g_39,&g_494,&g_39},{&g_494,(void*)0,&g_494,&g_39,&g_39},{&g_494,&g_494,&g_494,&g_494,&g_39}},{{&g_494,&g_39,(void*)0,&g_494,&g_39},{&g_494,&g_39,&g_39,&g_39,&g_39},{&g_494,&g_494,&g_39,&g_494,&g_494},{&g_494,&g_39,&g_39,&g_39,&g_494},{&g_39,&g_494,&g_494,&g_39,(void*)0},{(void*)0,&g_39,&g_39,&g_39,&g_494},{&g_39,&g_39,(void*)0,(void*)0,&g_494},{&g_494,&g_494,(void*)0,&g_39,&g_39}},{{&g_39,&g_39,&g_39,&g_39,&g_39},{&g_39,&g_494,&g_39,&g_39,&g_494},{&g_494,&g_39,&g_494,&g_39,&g_494},{&g_39,&g_39,&g_39,&g_494,&g_494},{&g_494,(void*)0,&g_39,&g_494,&g_494},{&g_39,&g_39,&g_494,(void*)0,&g_39},{&g_39,(void*)0,&g_39,&g_39,&g_39},{&g_494,&g_494,(void*)0,&g_494,(void*)0}},{{&g_39,(void*)0,(void*)0,&g_39,&g_494},{(void*)0,(void*)0,&g_494,&g_39,&g_39},{&g_39,(void*)0,&g_494,&g_494,&g_39},{&g_494,&g_494,&g_494,(void*)0,&g_39},{&g_494,(void*)0,&g_39,&g_494,&g_494},{&g_494,&g_39,&g_494,&g_494,&g_494},{&g_494,(void*)0,&g_494,&g_39,&g_494},{&g_39,&g_39,&g_39,&g_494,&g_39}}};
static union U6 **g_646 = &g_647[2][2][0];
static uint16_t ****g_654 = &g_623;
static int16_t *g_675 = &g_591.f0;
static int16_t *g_676 = (void*)0;
static union U5 g_677 = {0L};
static uint16_t g_708 = 65527UL;
static union U3 g_723 = {0x3FAA38F4L};
static int32_t *g_820[7][9][3] = {{{&g_338[0][2],&g_629,&g_338[0][2]},{&g_629,&g_132.f7,&g_629},{&g_2,&g_154,(void*)0},{&g_132.f7,(void*)0,&g_629},{&g_338[0][2],(void*)0,&g_629},{&g_132.f7,&g_338[0][2],(void*)0},{&g_2,(void*)0,(void*)0},{&g_629,&g_629,(void*)0},{&g_338[0][2],&g_338[0][2],&g_629}},{{(void*)0,&g_629,&g_338[3][2]},{(void*)0,&g_132.f7,(void*)0},{&g_154,&g_629,(void*)0},{&g_629,&g_338[0][2],&g_2},{&g_629,&g_629,&g_629},{(void*)0,(void*)0,&g_132.f7},{(void*)0,&g_338[0][2],&g_629},{&g_132.f7,(void*)0,&g_629},{(void*)0,(void*)0,&g_629}},{{&g_154,&g_154,&g_132.f7},{&g_629,&g_132.f7,&g_629},{(void*)0,&g_629,&g_2},{&g_629,&g_629,(void*)0},{&g_629,&g_629,(void*)0},{&g_629,(void*)0,&g_338[3][2]},{(void*)0,&g_629,&g_629},{&g_629,&g_629,&g_629},{&g_338[3][1],(void*)0,(void*)0}},{{&g_629,(void*)0,(void*)0},{&g_629,(void*)0,&g_132.f7},{&g_154,&g_629,(void*)0},{&g_2,(void*)0,&g_154},{&g_629,(void*)0,&g_629},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_629,&g_629},{&g_338[0][2],&g_629,&g_629},{&g_629,(void*)0,&g_629}},{{(void*)0,&g_338[0][2],&g_629},{&g_338[3][2],(void*)0,&g_629},{(void*)0,(void*)0,(void*)0},{&g_338[0][2],(void*)0,&g_629},{&g_338[0][2],&g_132.f7,&g_154},{(void*)0,&g_629,(void*)0},{(void*)0,&g_154,&g_132.f7},{(void*)0,(void*)0,(void*)0},{&g_338[0][2],(void*)0,(void*)0}},{{&g_338[0][2],(void*)0,&g_629},{(void*)0,(void*)0,&g_629},{&g_338[3][2],&g_629,&g_154},{(void*)0,(void*)0,(void*)0},{&g_629,&g_629,(void*)0},{&g_338[0][2],(void*)0,&g_338[0][2]},{(void*)0,(void*)0,&g_629},{(void*)0,(void*)0,&g_2},{&g_629,(void*)0,&g_132.f7}},{{&g_2,&g_154,&g_338[0][2]},{&g_154,&g_629,&g_132.f7},{&g_629,&g_132.f7,&g_2},{&g_629,(void*)0,&g_629},{&g_338[3][1],(void*)0,&g_338[0][2]},{&g_629,(void*)0,(void*)0},{(void*)0,&g_338[0][2],(void*)0},{(void*)0,(void*)0,&g_154},{(void*)0,&g_629,&g_629}}};
static uint16_t *** const *g_828 = (void*)0;
static int8_t g_837[3][10] = {{(-1L),0x42L,1L,1L,0x42L,(-1L),4L,(-1L),0x42L,1L},{0x3EL,0xBBL,0x3EL,1L,4L,4L,1L,0x3EL,0xBBL,0x3EL},{0x3EL,(-1L),0xBBL,0x42L,0xBBL,(-1L),0x3EL,0x3EL,(-1L),0xBBL}};
static int8_t *g_860 = &g_39.f2;
static int8_t **g_859 = &g_860;
static union U3 *g_869[3] = {&g_723,&g_723,&g_723};
static union U3 **g_868 = &g_869[0];
static int16_t g_888 = 0x3742L;
static struct S2 g_899[3] = {{0xF56DL,{2461,0x55EDA164009ECDB5LL,8L,65527UL},0UL},{0xF56DL,{2461,0x55EDA164009ECDB5LL,8L,65527UL},0UL},{0xF56DL,{2461,0x55EDA164009ECDB5LL,8L,65527UL},0UL}};
static struct S1 g_953[3] = {{1858,0x13D7EA8EFD78C33BLL,9L,65531UL},{1858,0x13D7EA8EFD78C33BLL,9L,65531UL},{1858,0x13D7EA8EFD78C33BLL,9L,65531UL}};
static uint16_t g_994[6] = {65527UL,65527UL,65527UL,65527UL,65527UL,65527UL};
static int32_t g_1054 = 1L;
static union U4 * const g_1106 = &g_636;
static union U4 * const *g_1105 = &g_1106;
static union U4 * const **g_1104 = &g_1105;
static const uint64_t g_1180 = 0UL;
static int64_t g_1299 = 0xC74809A057BC7C72LL;
static const int32_t *g_1429 = &g_132.f7;
static int32_t g_1441 = 0xE464226DL;
static union U6 g_1446[6][7][6] = {{{{18446744073709551611UL},{0xCF93101DL},{9UL},{0xDDBCD81EL},{0x91E1B04AL},{0xC6066ABFL}},{{2UL},{7UL},{4UL},{1UL},{0x651E25ADL},{18446744073709551607UL}},{{1UL},{0x2571C16AL},{1UL},{0UL},{0xE6D79AA9L},{0UL}},{{0x91E1B04AL},{1UL},{0UL},{0xD155688FL},{0UL},{0x2067FECAL}},{{4UL},{0xD9205836L},{0x3C668997L},{1UL},{1UL},{18446744073709551608UL}},{{18446744073709551610UL},{0xE2843561L},{9UL},{0xF88CA1B5L},{0xDDBCD81EL},{18446744073709551615UL}},{{7UL},{0x2067FECAL},{0x967A64F3L},{7UL},{18446744073709551609UL},{0xC6066ABFL}}},{{{0x2D877D48L},{9UL},{0UL},{0xDAE4159AL},{0xF84CB70CL},{1UL}},{{1UL},{0x967A64F3L},{0xF88CA1B5L},{0xE6D79AA9L},{0xF88CA1B5L},{0x967A64F3L}},{{18446744073709551615UL},{0x09F78658L},{0x934A5115L},{0x2067FECAL},{0x20E7AC07L},{0UL}},{{0x7D7E3891L},{0xA130119DL},{0xDDBCD81EL},{4UL},{2UL},{18446744073709551615UL}},{{0xE2843561L},{0xA130119DL},{0x651E25ADL},{1UL},{0x20E7AC07L},{0x7D7E3891L}},{{4UL},{0x09F78658L},{0x2571C16AL},{18446744073709551612UL},{0xF88CA1B5L},{5UL}},{{18446744073709551611UL},{0x967A64F3L},{1UL},{1UL},{0xF84CB70CL},{0xD9205836L}}},{{{0xF300C44DL},{9UL},{18446744073709551608UL},{0x2F32DF57L},{18446744073709551609UL},{0x2067FECAL}},{{0x2D9E19C1L},{0x2067FECAL},{18446744073709551611UL},{9UL},{0xDDBCD81EL},{0x3F7B3346L}},{{0x39306934L},{0xE2843561L},{1UL},{0xA130119DL},{0UL},{0xD155688FL}},{{0xC6066ABFL},{9UL},{4UL},{0xD9205836L},{18446744073709551612UL},{1UL}},{{18446744073709551609UL},{0UL},{0UL},{1UL},{0xA130119DL},{0xFCDE01D1L}},{{0xA299D71BL},{1UL},{7UL},{0x8BDEC154L},{0x2D877D48L},{0x009376B9L}},{{0UL},{0UL},{0xCF93101DL},{0x7097E337L},{7UL},{18446744073709551608UL}}},{{{0x67A02290L},{18446744073709551609UL},{18446744073709551612UL},{0xBB309872L},{0xBB309872L},{18446744073709551612UL}},{{1UL},{1UL},{18446744073709551615UL},{18446744073709551608UL},{1UL},{0xF88CA1B5L}},{{0xF84CB70CL},{0x3C668997L},{0x20E7AC07L},{7UL},{18446744073709551615UL},{18446744073709551615UL}},{{0xE6D79AA9L},{0xF84CB70CL},{0x20E7AC07L},{0xEE2D0B5AL},{1UL},{0xF88CA1B5L}},{{0UL},{0xEE2D0B5AL},{18446744073709551615UL},{0xCF93101DL},{0x3F7B3346L},{18446744073709551612UL}},{{0xCF93101DL},{0x3F7B3346L},{18446744073709551612UL},{0x967A64F3L},{0x009376B9L},{18446744073709551608UL}},{{0x2F32DF57L},{0UL},{0xCF93101DL},{5UL},{0xD155688FL},{0x009376B9L}}},{{{0xD155688FL},{0x2571C16AL},{7UL},{1UL},{1UL},{0xFCDE01D1L}},{{18446744073709551615UL},{18446744073709551615UL},{0UL},{18446744073709551609UL},{5UL},{1UL}},{{0UL},{18446744073709551612UL},{4UL},{0x2D877D48L},{0x2067FECAL},{0xD155688FL}},{{18446744073709551612UL},{18446744073709551607UL},{1UL},{0x67A02290L},{0UL},{0x3F7B3346L}},{{0UL},{0xD155688FL},{18446744073709551611UL},{0xAD3FF64EL},{18446744073709551607UL},{0x2067FECAL}},{{0x09F78658L},{0x39306934L},{18446744073709551608UL},{0UL},{0xC6066ABFL},{0xD9205836L}},{{0xAD3FF64EL},{7UL},{1UL},{5UL},{0UL},{5UL}}},{{{0x2571C16AL},{1UL},{0x2571C16AL},{0UL},{7UL},{0x7D7E3891L}},{{0UL},{18446744073709551615UL},{0x651E25ADL},{1UL},{18446744073709551610UL},{0x39306934L}},{{0x934A5115L},{0xA299D71BL},{0xFCDE01D1L},{0xBB309872L},{7UL},{18446744073709551615UL}},{{0x2571C16AL},{1UL},{0UL},{18446744073709551615UL},{9UL},{18446744073709551611UL}},{{1UL},{18446744073709551607UL},{18446744073709551612UL},{18446744073709551608UL},{0x2571C16AL},{0xDDBCD81EL}},{{0x3C668997L},{0x7D7E3891L},{1UL},{0x2571C16AL},{0xD2A704C0L},{0xA299D71BL}},{{0x67A02290L},{18446744073709551612UL},{18446744073709551611UL},{0x3C668997L},{18446744073709551609UL},{18446744073709551615UL}}}};
static int32_t ***g_1563 = (void*)0;
static struct S2 **g_1570 = (void*)0;
static struct S2 *** const g_1569 = &g_1570;
static uint64_t g_1641[1][3] = {{0x51A7E9375D9DE5BFLL,0x51A7E9375D9DE5BFLL,0x51A7E9375D9DE5BFLL}};
static int32_t g_1646 = (-5L);
static const struct S1 *g_1648 = (void*)0;
static int16_t g_1751 = 0L;
static union U5 g_1787 = {0x251BL};
static const union U5 *g_1786 = &g_1787;
static const int16_t g_1806 = 0x4038L;
static int16_t g_1854 = 0x00A4L;
static uint64_t ****g_1888 = &g_362;
static uint64_t *****g_1887[6][2][4] = {{{&g_1888,&g_1888,&g_1888,(void*)0},{&g_1888,(void*)0,&g_1888,&g_1888}},{{&g_1888,(void*)0,&g_1888,&g_1888},{&g_1888,&g_1888,&g_1888,(void*)0}},{{(void*)0,&g_1888,(void*)0,&g_1888},{(void*)0,&g_1888,&g_1888,(void*)0}},{{&g_1888,&g_1888,&g_1888,&g_1888},{&g_1888,&g_1888,(void*)0,(void*)0}},{{&g_1888,&g_1888,&g_1888,&g_1888},{&g_1888,(void*)0,&g_1888,&g_1888}},{{&g_1888,(void*)0,(void*)0,(void*)0},{&g_1888,&g_1888,(void*)0,&g_1888}}};
static const int16_t *g_1910 = &g_72.f0;
static const int16_t **g_1909 = &g_1910;
static uint32_t g_1911[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};



static int64_t func_1(void);
static int32_t func_5(int8_t p_6, union U6 p_7, const uint32_t p_8, int32_t p_9);
static uint64_t func_21(uint8_t p_22, uint32_t p_23, union U4 p_24, int64_t p_25, struct S1 p_26);
static uint32_t func_31(int8_t p_32, union U6 p_33, union U3 p_34, int32_t * p_35, int32_t * p_36);
static int64_t func_44(int32_t * p_45, int32_t * p_46, uint32_t p_47, int64_t p_48);
static int32_t * func_49(int32_t * p_50, union U3 p_51, int16_t p_52);
static int32_t * func_53(uint32_t p_54, union U4 p_55, struct S1 p_56, union U3 p_57, int32_t p_58);
static union U6 func_59(struct S1 p_60, int16_t p_61, int32_t * p_62, struct S2 p_63);
static struct S2 func_66(const struct S2 p_67, int32_t * p_68, int32_t * p_69, union U6 p_70, union U6 p_71);
static int32_t func_83(int32_t p_84);
# 176 "<stdin>"
static int64_t func_1(void)
{
    uint32_t l_12[10][9][2] = {{{1UL,0x2B4B5A9CL},{18446744073709551609UL,1UL},{0UL,0UL},{18446744073709551615UL,0xBB2C593CL},{18446744073709551609UL,8UL},{0xBB2C593CL,0x2B4B5A9CL},{18446744073709551615UL,0xBB2C593CL},{0UL,18446744073709551615UL},{0UL,0xBB2C593CL}},{{18446744073709551615UL,0x2B4B5A9CL},{0xBB2C593CL,8UL},{18446744073709551609UL,0xBB2C593CL},{18446744073709551615UL,0UL},{0UL,1UL},{18446744073709551609UL,0x2B4B5A9CL},{1UL,0x2B4B5A9CL},{18446744073709551609UL,1UL},{0UL,0UL}},{{18446744073709551615UL,0xBB2C593CL},{18446744073709551609UL,8UL},{0xBB2C593CL,0x2B4B5A9CL},{18446744073709551615UL,0xBB2C593CL},{0UL,18446744073709551615UL},{0UL,0xBB2C593CL},{18446744073709551615UL,0x2B4B5A9CL},{0xBB2C593CL,8UL},{18446744073709551609UL,0xBB2C593CL}},{{18446744073709551615UL,0UL},{0UL,1UL},{18446744073709551609UL,0x2B4B5A9CL},{1UL,0x2B4B5A9CL},{18446744073709551609UL,1UL},{0UL,0UL},{18446744073709551615UL,0xBB2C593CL},{18446744073709551609UL,8UL},{0xBB2C593CL,0x2B4B5A9CL}},{{18446744073709551615UL,0xBB2C593CL},{0UL,18446744073709551615UL},{0UL,0xBB2C593CL},{18446744073709551615UL,0x2B4B5A9CL},{0xBB2C593CL,8UL},{18446744073709551609UL,0xBB2C593CL},{18446744073709551615UL,0UL},{0UL,1UL},{18446744073709551609UL,0x2B4B5A9CL}},{{1UL,0x2B4B5A9CL},{18446744073709551609UL,1UL},{0UL,0UL},{18446744073709551615UL,0xBB2C593CL},{18446744073709551609UL,8UL},{18446744073709551615UL,18446744073709551615UL},{0x1ECA6C84L,18446744073709551615UL},{1UL,0xF12A83A0L},{1UL,18446744073709551615UL}},{{0x1ECA6C84L,18446744073709551615UL},{18446744073709551615UL,0UL},{18446744073709551608UL,18446744073709551615UL},{0xF12A83A0L,1UL},{1UL,0x6992F1E5L},{18446744073709551608UL,18446744073709551615UL},{0x6992F1E5L,18446744073709551615UL},{18446744073709551608UL,0x6992F1E5L},{1UL,1UL}},{{0xF12A83A0L,18446744073709551615UL},{18446744073709551608UL,0UL},{18446744073709551615UL,18446744073709551615UL},{0x1ECA6C84L,18446744073709551615UL},{1UL,0xF12A83A0L},{1UL,18446744073709551615UL},{0x1ECA6C84L,18446744073709551615UL},{18446744073709551615UL,0UL},{18446744073709551608UL,18446744073709551615UL}},{{0xF12A83A0L,1UL},{1UL,0x6992F1E5L},{18446744073709551608UL,18446744073709551615UL},{0x6992F1E5L,18446744073709551615UL},{18446744073709551608UL,0x6992F1E5L},{1UL,1UL},{0xF12A83A0L,18446744073709551615UL},{18446744073709551608UL,0UL},{18446744073709551615UL,18446744073709551615UL}},{{0x1ECA6C84L,18446744073709551615UL},{1UL,0xF12A83A0L},{1UL,18446744073709551615UL},{0x1ECA6C84L,18446744073709551615UL},{18446744073709551615UL,0UL},{18446744073709551608UL,18446744073709551615UL},{0xF12A83A0L,1UL},{1UL,0x6992F1E5L},{18446744073709551608UL,18446744073709551615UL}}};
    int32_t *l_42 = (void*)0;
    struct S1 *l_1649 = &g_591.f1;
    uint64_t ***l_1656 = (void*)0;
    uint32_t l_1659 = 4294967295UL;
    uint8_t l_1660 = 0xA7L;
    union U3 l_1674 = {0x0C94210EL};
    const union U6 l_1687 = {18446744073709551612UL};
    uint16_t ****l_1706 = &g_623;
    union U5 l_1768 = {0x0558L};
    const int8_t *l_1778 = &l_1768.f2;
    const int8_t **l_1777 = &l_1778;
    uint16_t l_1780 = 0x09D5L;
    int32_t l_1781[5][1] = {{0x2BE3DEB9L},{0x8462A285L},{0x2BE3DEB9L},{0x8462A285L},{0x2BE3DEB9L}};
    struct S0 * const l_1824 = (void*)0;
    struct S2 * const l_1851[9][5] = {{(void*)0,&g_594,&g_899[1],(void*)0,&g_594},{(void*)0,(void*)0,&g_899[1],(void*)0,(void*)0},{&g_899[1],(void*)0,&g_899[1],&g_899[1],(void*)0},{(void*)0,&g_594,&g_899[1],(void*)0,&g_594},{(void*)0,(void*)0,&g_899[1],(void*)0,(void*)0},{&g_899[1],(void*)0,&g_899[1],&g_899[1],(void*)0},{(void*)0,&g_594,&g_899[1],(void*)0,&g_594},{(void*)0,(void*)0,&g_899[1],(void*)0,(void*)0},{&g_899[1],(void*)0,&g_899[1],&g_899[1],(void*)0}};
    uint32_t l_1858 = 0xFBC1FD11L;
    struct S2 *l_1869[2];
    int16_t l_1925 = 0x1B1AL;
    uint8_t l_1926 = 253UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1869[i] = &g_899[1];
    for (g_2 = 0; (g_2 < (-29)); g_2 = safe_sub_func_int16_t_s_s(g_2, 3))
    {
        int32_t *l_27 = &g_28[1][5];
        union U4 l_1442 = {1L};
        struct S1 l_1443[2][7] = {{{1785,8UL,1L,1UL},{-2111,18446744073709551612UL,0x357B9F59L,65526UL},{-84,18446744073709551613UL,0xA7591EFDL,0x7C74L},{-84,18446744073709551613UL,0xA7591EFDL,0x7C74L},{-2111,18446744073709551612UL,0x357B9F59L,65526UL},{1785,8UL,1L,1UL},{-2111,18446744073709551612UL,0x357B9F59L,65526UL}},{{2055,0x7F6670A5756DBD6ALL,0xB775732CL,0x8EA6L},{1785,8UL,1L,1UL},{1785,8UL,1L,1UL},{2055,0x7F6670A5756DBD6ALL,0xB775732CL,0x8EA6L},{-2111,18446744073709551612UL,0x357B9F59L,65526UL},{2055,0x7F6670A5756DBD6ALL,0xB775732CL,0x8EA6L},{1785,8UL,1L,1UL}}};
        uint16_t l_1445[10][5] = {{0x371CL,65527UL,65529UL,0x8A3FL,8UL},{0x0F80L,0x371CL,7UL,8UL,65535UL},{0xD6B2L,65529UL,8UL,65527UL,8UL},{8UL,8UL,1UL,7UL,0x3EE7L},{8UL,0xD38EL,0x3EE7L,65529UL,0x005AL},{0xD6B2L,0x1BF4L,65535UL,0xFFE4L,0x8A3FL},{0x0F80L,0xD38EL,0xD38EL,0x0F80L,0x1D25L},{0x371CL,8UL,0xD38EL,0x3EE7L,65529UL},{0x3EE7L,65529UL,65535UL,0xD6B2L,0xD38EL},{0x1BF4L,0xD38EL,65529UL,65529UL,0xD38EL}};
        int32_t *l_1645 = &g_1646;
        int8_t l_1741[2][9] = {{0x04L,7L,0xBAL,0xBAL,7L,0x04L,0L,7L,0L},{0x04L,7L,0xBAL,0xBAL,7L,0x04L,0L,7L,0L}};
        struct S1 ***l_1759 = &g_237;
        struct S1 ****l_1758 = &l_1759;
        int16_t *l_1772[8];
        int32_t l_1795[8][7] = {{0xF052E3DBL,2L,0xDE36CAA8L,0xF052E3DBL,0x3CB455CCL,0xF052E3DBL,0xDE36CAA8L},{1L,1L,0x3A091CC7L,(-4L),2L,2L,1L},{1L,0xDE36CAA8L,0xD53042F6L,2L,0xEF033CFDL,0xEF033CFDL,2L},{0xF052E3DBL,0x3CB455CCL,0xF052E3DBL,0xDE36CAA8L,2L,0xF052E3DBL,0xBDA57F97L},{2L,0x3CB455CCL,(-9L),(-4L),0x3CB455CCL,0x3A091CC7L,0x3CB455CCL},{0xBD172EEEL,0xDE36CAA8L,0xDE36CAA8L,0xBD172EEEL,0xBDA57F97L,0xF052E3DBL,2L},{0xEF033CFDL,1L,0xDE36CAA8L,0xD53042F6L,2L,0xEF033CFDL,0xEF033CFDL},{1L,2L,(-9L),2L,1L,2L,2L}};
        uint8_t *l_1842 = &g_582;
        int32_t l_1857 = 0x10B186BEL;
        uint64_t l_1864 = 7UL;
        struct S2 * const l_1892 = &g_899[2];
        uint32_t l_1921 = 0x393C0807L;
        int32_t *l_1924[6][4] = {{&g_28[1][5],&g_629,&g_629,&g_28[1][5]},{&g_629,&g_28[1][5],&g_629,&g_629},{&g_28[1][5],&g_28[1][5],(void*)0,&g_28[1][5]},{&g_28[1][5],&g_629,&g_629,&g_28[1][5]},{&g_629,&g_28[1][5],&g_629,&g_629},{&g_28[1][5],&g_28[1][5],(void*)0,&g_28[1][5]}};
        int i, j;
        for (i = 0; i < 8; i++)
            l_1772[i] = &g_591.f0;
    }
    return g_1854;
}







static int32_t func_5(int8_t p_6, union U6 p_7, const uint32_t p_8, int32_t p_9)
{
    int16_t l_1447 = 0x5A3BL;
    int32_t *l_1448 = &g_28[2][0];
    int32_t *l_1449 = &g_1054;
    int32_t l_1450 = 0x594E6FECL;
    int32_t l_1451[7];
    int32_t *l_1452[5];
    uint32_t l_1453 = 1UL;
    int32_t l_1456 = 6L;
    int16_t l_1457 = 0xBB9CL;
    uint8_t l_1458 = 0x25L;
    struct S0 l_1461 = {65535UL,0UL,0x326D3B57L,-9L,0x5F0A2DC6F547CEFDLL,1UL,-7,0L};
    const struct S2 l_1462 = {0L,{1248,0UL,0x5BC6C566L,0UL},5UL};
    union U6 l_1463[5][3] = {{{0x6713EC43L},{0x6713EC43L},{0x6713EC43L}},{{0x6713EC43L},{0x6713EC43L},{0x6713EC43L}},{{0x6713EC43L},{0x6713EC43L},{0x6713EC43L}},{{0x6713EC43L},{0x6713EC43L},{0x6713EC43L}},{{0x6713EC43L},{0x6713EC43L},{0x6713EC43L}}};
    int32_t l_1495 = 0x9F8F9431L;
    uint32_t l_1538 = 1UL;
    uint16_t *****l_1608 = &g_654;
    int i, j;
    for (i = 0; i < 7; i++)
        l_1451[i] = 0x4CC28AB5L;
    for (i = 0; i < 5; i++)
        l_1452[i] = &l_1451[5];
    l_1453--;
lbl_1541:
    ++l_1458;
    if ((l_1461 , (l_1462 , p_6)))
    {
        uint64_t l_1464 = 18446744073709551615UL;
        l_1464++;
    }
    else
    {
        int32_t *l_1467 = &l_1456;
        int32_t **l_1468[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1468[i] = &l_1448;
        (*g_646) = (l_1462 , (*g_646));
        g_41 = l_1467;
    }
    for (g_591.f1.f3 = 0; (g_591.f1.f3 > 13); g_591.f1.f3++)
    {
        int8_t l_1488[3];
        struct S1 l_1491 = {2585,0xFF44B3950E962E23LL,0xAF7DFAB7L,0xB65CL};
        uint16_t *l_1494 = &g_708;
        union U5 l_1500 = {-6L};
        const union U3 *l_1510 = &g_40;
        const union U3 **l_1509 = &l_1510;
        struct S0 l_1519 = {65535UL,0x9F2860CBL,-7L,0xBAL,0x26C6C645C13881DCLL,6UL,-2,-2L};
        union U4 l_1589[5][3] = {{{0x04E9726DL},{0x1AC22BF5L},{0x1AC22BF5L}},{{0xF21DCDE6L},{1L},{1L}},{{0x04E9726DL},{0x1AC22BF5L},{0x1AC22BF5L}},{{0xF21DCDE6L},{1L},{1L}},{{0x04E9726DL},{0x1AC22BF5L},{0x1AC22BF5L}}};
        const struct S0 *l_1629 = &l_1461;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1488[i] = (-1L);
        if ((((*l_1449) = (*g_675)) , ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((*g_100) = p_7.f1), 10)), (safe_rshift_func_uint16_t_u_u((g_180 , (l_1495 &= (((g_636.f0 && ((~0xB76AB5C6L) == p_8)) & (safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((safe_add_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_s((l_1488[2] && (safe_lshift_func_uint8_t_u_u((((*l_1494) |= ((((((l_1491 , (safe_lshift_func_int16_t_s_s(7L, 13))) <= p_7.f0) , 0x42L) , g_252) ^ 0xF1L) == p_7.f4)) > p_6), 0))), 5)) & 0xB0L) >= l_1491.f0), 0x40EB94FA464A087FLL)) , p_7.f1) > p_7.f4), p_6)), g_591.f1.f1))) < g_252))), 7)))) != p_7.f0)))
        {
            uint8_t l_1504 = 8UL;
            int16_t *l_1520 = &g_594.f0;
            struct S0 * const l_1521 = (void*)0;
            int32_t * const * const *l_1532 = (void*)0;
            int32_t l_1534 = 0xE22B2B79L;
            struct S0 *l_1555 = &l_1519;
            int32_t l_1591 = 0L;
            union U3 l_1610 = {0x40AD1A85L};
            if ((safe_div_func_uint16_t_u_u((((9UL != (safe_div_func_uint64_t_u_u(((l_1500 , (p_6 != (((*l_1448) = (g_953[1].f0 , ((((+((((safe_add_func_uint8_t_u_u((l_1504 | (safe_rshift_func_uint16_t_u_s(p_7.f4, 8))), (((safe_add_func_int16_t_s_s(((void*)0 != l_1509), ((*l_1520) ^= (((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((l_1491.f0 = (safe_div_func_int32_t_s_s((p_7.f1 != g_1441), l_1504))) || (*g_1429)) && (*g_100)), 6)), 0xD0L)), l_1491.f3)) , l_1519) , (*g_675))))) & p_7.f1) <= p_7.f2))) ^ l_1504) < p_7.f1) <= l_1504)) , (void*)0) == (*g_868)) != g_294[1]))) >= p_7.f4))) , (*g_356)), (*g_356)))) == p_7.f3) || 4294967295UL), p_7.f3)))
            {
                (*l_1449) &= 1L;
            }
            else
            {
                struct S0 **l_1522[5][9][5] = {{{&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,(void*)0,(void*)0,&g_131},{&g_131,&g_131,&g_131,&g_131,(void*)0},{&g_131,&g_131,&g_131,(void*)0,&g_131},{&g_131,&g_131,(void*)0,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131}},{{&g_131,(void*)0,(void*)0,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,(void*)0,&g_131,&g_131,&g_131},{(void*)0,&g_131,&g_131,&g_131,(void*)0},{&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,(void*)0,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131}},{{&g_131,(void*)0,&g_131,&g_131,(void*)0},{&g_131,&g_131,(void*)0,(void*)0,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,(void*)0,&g_131},{&g_131,(void*)0,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,(void*)0,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131}},{{&g_131,(void*)0,&g_131,&g_131,&g_131},{(void*)0,&g_131,&g_131,&g_131,(void*)0},{&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,(void*)0,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,(void*)0,&g_131,&g_131,(void*)0},{&g_131,&g_131,(void*)0,(void*)0,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131}},{{&g_131,&g_131,&g_131,(void*)0,&g_131},{&g_131,(void*)0,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,(void*)0,&g_131,&g_131},{&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,(void*)0,&g_131,&g_131,&g_131},{(void*)0,&g_131,&g_131,&g_131,(void*)0},{&g_131,&g_131,&g_131,&g_131,&g_131},{&g_131,&g_131,&g_131,(void*)0,&g_131}}};
                struct S0 **l_1523 = &g_131;
                int32_t l_1535 = 0x76BB88E8L;
                const int32_t **l_1565 = (void*)0;
                const int32_t ***l_1564[7][10][3] = {{{(void*)0,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565}},{{(void*)0,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,(void*)0},{&l_1565,&l_1565,&l_1565},{(void*)0,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,(void*)0},{&l_1565,&l_1565,(void*)0},{&l_1565,(void*)0,&l_1565}},{{&l_1565,(void*)0,(void*)0},{&l_1565,&l_1565,&l_1565},{(void*)0,&l_1565,(void*)0},{&l_1565,&l_1565,(void*)0},{&l_1565,(void*)0,&l_1565},{(void*)0,&l_1565,&l_1565},{&l_1565,(void*)0,&l_1565},{&l_1565,&l_1565,(void*)0},{&l_1565,&l_1565,&l_1565},{(void*)0,&l_1565,&l_1565}},{{&l_1565,&l_1565,&l_1565},{&l_1565,(void*)0,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,(void*)0,&l_1565},{&l_1565,&l_1565,(void*)0},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,(void*)0},{&l_1565,(void*)0,&l_1565},{&l_1565,(void*)0,&l_1565},{&l_1565,&l_1565,&l_1565}},{{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,(void*)0},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{(void*)0,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,(void*)0},{(void*)0,&l_1565,&l_1565}},{{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{(void*)0,&l_1565,&l_1565},{&l_1565,&l_1565,(void*)0},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,(void*)0},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{(void*)0,&l_1565,&l_1565}},{{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,(void*)0},{&l_1565,&l_1565,&l_1565},{(void*)0,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,(void*)0},{&l_1565,&l_1565,(void*)0},{&l_1565,(void*)0,&l_1565},{&l_1565,(void*)0,(void*)0}}};
                int32_t l_1566 = (-1L);
                struct S2 ** const l_1568 = (void*)0;
                struct S2 ** const *l_1567 = &l_1568;
                uint16_t l_1571 = 0xF44AL;
                int i, j, k;
                (*l_1523) = l_1521;
                if (p_9)
                {
                    uint32_t l_1542 = 0x67D57073L;
                    (*l_1448) |= (*g_1429);
                    if (p_7.f1)
                    {
                        uint8_t *l_1533 = &l_1458;
                        if (p_7.f3)
                            break;
                        (*l_1449) = (((p_8 != (safe_rshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(((**g_859) &= l_1491.f0), ((safe_lshift_func_int8_t_s_u((((void*)0 != &g_860) && (((*l_1533) &= (((void*)0 != l_1532) , 0x59L)) == (((((*l_1448) = (*l_1448)) == g_132.f7) != g_338[1][0]) && p_8))), 7)) ^ 0xEF04L))) >= l_1534), g_636.f1)), 7))) && 1UL) || (**g_859));
                    }
                    else
                    {
                        int16_t l_1536 = 0L;
                        int32_t l_1537 = 0xB8A3FB21L;
                        l_1538++;
                        if (l_1519.f1)
                            goto lbl_1541;
                        ++l_1542;
                        if (p_7.f0)
                            continue;
                    }
                }
                else
                {
                    int32_t *l_1546 = &g_338[0][2];
                    for (l_1450 = 0; (l_1450 <= 2); l_1450 += 1)
                    {
                        int32_t **l_1545[6][10] = {{(void*)0,&g_820[0][8][2],&g_820[0][8][2],(void*)0,&g_820[0][8][2],&l_1452[1],&g_820[0][8][2],&l_1452[1],&l_1452[1],&g_820[0][8][2]},{&l_1452[1],&g_820[0][8][2],&l_1452[1],&l_1452[1],&g_820[0][8][2],&l_1452[1],&l_1452[1],&g_820[0][8][2],&l_1452[1],&l_1452[1]},{&g_820[0][8][2],&g_820[0][8][2],(void*)0,&g_820[0][8][2],&g_820[0][8][2],(void*)0,&g_820[0][8][2],&g_820[0][8][2],(void*)0,&g_820[0][8][2]},{&g_820[0][8][2],&l_1452[1],&l_1452[1],&g_820[0][8][2],&l_1452[1],&l_1452[1],&g_820[0][8][2],&l_1452[1],&l_1452[1],&g_820[0][8][2]},{&l_1452[1],&g_820[0][8][2],&l_1452[1],&l_1452[1],&g_820[0][8][2],&l_1452[1],&l_1452[1],&g_820[0][8][2],&l_1452[1],&l_1452[1]},{&g_820[0][8][2],&g_820[0][8][2],(void*)0,&g_820[0][8][2],&g_820[0][8][2],(void*)0,&g_820[0][8][2],&g_820[0][8][2],(void*)0,&g_820[0][8][2]}};
                        uint32_t *l_1556 = &l_1538;
                        int i, j;
                        l_1546 = (void*)0;
                        (*l_1448) = (l_1566 = ((((safe_div_func_int32_t_s_s(((safe_div_func_int32_t_s_s(((void*)0 == (*g_868)), (l_1535 = (safe_mul_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u(((l_1555 = l_1555) != (void*)0), 1)) < (++(*l_1556))) , (((safe_mod_func_int64_t_s_s((((0x2CL && (4L == (g_64.f0 ^ ((p_7.f2 ^ (((safe_mul_func_uint8_t_u_u(0x0EL, p_6)) , g_1563) == l_1564[0][9][0])) & 0x9C26L)))) , (-10L)) , 0x3F7337374C45AE46LL), p_7.f4)) ^ g_408[8][1].f2) > 9L)), p_7.f1))))) & 253UL), p_7.f3)) < 1L) <= p_8) | p_8));
                        (*l_1449) = l_1491.f0;
                    }
                    l_1535 ^= 0xB3C91016L;
                }
                (*l_1448) = (l_1567 == g_1569);
                --l_1571;
            }
            for (l_1519.f3 = 0; (l_1519.f3 <= (-1)); l_1519.f3 = safe_sub_func_int32_t_s_s(l_1519.f3, 7))
            {
                int32_t l_1577 = 1L;
                uint64_t ****l_1623 = (void*)0;
                struct S1 *l_1634 = (void*)0;
                int8_t l_1638 = 6L;
                for (g_494.f2 = 0; (g_494.f2 <= 2); g_494.f2 += 1)
                {
                    uint64_t l_1578 = 18446744073709551608UL;
                    int32_t l_1592 = 0xF490E16AL;
                    uint32_t *l_1609 = &g_112;
                    const struct S0 *l_1627 = &l_1461;
                    int i, j;
                    for (g_253 = 0; (g_253 <= 5); g_253 += 1)
                    {
                        int32_t l_1576[7] = {0x807258BEL,0xAF3875E2L,0xAF3875E2L,0x807258BEL,0xAF3875E2L,0xAF3875E2L,0x807258BEL};
                        uint64_t l_1590[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
                        int i, j;
                        --l_1578;
                        l_1592 ^= ((((*g_675) &= ((safe_sub_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((g_837[g_494.f2][g_253] , g_338[(g_494.f2 + 1)][g_494.f2]) | ((*l_1449) = g_306[g_494.f2][(g_494.f2 + 1)])), (l_1577 ^ ((void*)0 == &g_582)))), l_1578)) , ((l_1462 , (((l_1589[2][2] , p_7.f1) != 1UL) < g_338[0][2])) <= l_1590[2])), 0xB5F4BBB0L)) , (*l_1448)), l_1591)) | p_7.f0)) <= 0xA8D8L) != (*l_1448));
                    }
                    if (g_837[g_494.f2][(g_494.f2 + 6)])
                        break;
                    if ((~(safe_lshift_func_uint8_t_u_u((p_7.f2 <= (((safe_sub_func_int32_t_s_s(((*g_675) > ((g_64 , (safe_sub_func_uint32_t_u_u(p_8, g_494.f2))) , ((*g_859) == (void*)0))), ((safe_sub_func_int8_t_s_s(((l_1577 = (((0xA32B58EE3E5CA9F6LL | (safe_sub_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(((*l_1520) |= ((((*l_1609) = (l_1608 != (void*)0)) & l_1577) >= 18446744073709551615UL)), 0UL)) | 0xAEDF1E43L) < p_7.f3), g_1446[3][5][1].f4))) , (void*)0) != (void*)0)) < p_7.f1), (*l_1449))) != p_7.f4))) & p_7.f4) && (-5L))), g_39.f2))))
                    {
                        uint64_t *l_1618 = &l_1578;
                        uint64_t ****l_1625 = &g_362;
                        uint64_t *****l_1624 = &l_1625;
                        uint8_t *l_1626 = &g_582;
                        const struct S0 *l_1628[2];
                        struct S1 **l_1630 = (void*)0;
                        struct S1 **l_1631 = (void*)0;
                        struct S1 *l_1633 = &g_408[8][4];
                        struct S1 **l_1632 = &l_1633;
                        int32_t l_1635[7] = {4L,4L,4L,4L,4L,4L,4L};
                        int32_t *l_1636[7][3][6] = {{{(void*)0,&g_154,(void*)0,&g_338[2][2],&l_1495,&g_1054},{(void*)0,&l_1591,&g_132.f7,&g_154,(void*)0,&g_1054},{&l_1591,&l_1461.f7,(void*)0,&l_1519.f7,(void*)0,&g_28[1][5]}},{{(void*)0,&l_1591,&g_28[2][1],&l_1519.f7,&l_1495,&l_1635[6]},{&l_1591,&g_154,&g_28[2][1],&g_154,&l_1591,&g_28[1][5]},{(void*)0,&g_154,(void*)0,&g_338[2][2],&l_1495,&g_1054}},{{(void*)0,&l_1591,&g_132.f7,&g_154,(void*)0,&g_1054},{&l_1591,&l_1461.f7,(void*)0,&l_1519.f7,(void*)0,&g_28[1][5]},{(void*)0,&l_1591,&g_28[2][1],&l_1519.f7,&l_1495,&l_1635[6]}},{{&l_1591,&g_154,&g_28[2][1],&g_154,&l_1591,&g_28[1][5]},{(void*)0,&g_154,(void*)0,&g_338[2][2],&l_1495,&g_1054},{(void*)0,&l_1591,&g_132.f7,&g_154,(void*)0,&g_1054}},{{&l_1591,&l_1461.f7,(void*)0,&l_1519.f7,(void*)0,&g_28[1][5]},{(void*)0,&l_1591,&g_28[2][1],&l_1519.f7,&l_1495,&l_1635[6]},{&l_1591,&g_154,&g_28[2][1],&g_154,&l_1591,&g_28[1][5]}},{{(void*)0,&g_154,(void*)0,&g_338[2][2],&l_1495,&g_1054},{(void*)0,&l_1591,&g_132.f7,&g_154,(void*)0,&g_1054},{&l_1591,&l_1461.f7,(void*)0,&l_1519.f7,(void*)0,&g_28[1][5]}},{{(void*)0,&l_1591,&g_28[2][1],&l_1519.f7,&l_1495,&l_1635[6]},{&l_1591,&g_154,&l_1495,(void*)0,&g_338[0][2],&g_154},{&l_1591,(void*)0,(void*)0,&l_1451[3],&g_629,&l_1519.f7}}};
                        union U6 l_1637 = {6UL};
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_1628[i] = (void*)0;
                        l_1634 = ((*l_1632) = ((p_7 , (l_1610 , g_591.f2)) , ((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((*l_1449) ^= ((safe_lshift_func_int16_t_s_s((((*g_356) &= (!g_594.f1.f0)) == (++(*l_1618))), 4)) >= (safe_rshift_func_uint8_t_u_u(((*l_1626) ^= (l_1623 != ((*l_1624) = &g_362))), 6)))), ((l_1628[1] = l_1627) != l_1629))), (0x31C92826L || g_1441))) , (void*)0)));
                        if (l_1635[5])
                            break;
                        l_1452[(g_494.f2 + 1)] = l_1636[1][0][2];
                        (*l_1449) |= (((*g_675) = 0L) >= (((((((l_1637 , l_1638) , ((((void*)0 != &l_1452[4]) & 0UL) , ((((safe_div_func_int8_t_s_s((((((*l_1618) &= ((g_837[g_494.f2][(g_494.f2 + 5)] = p_9) ^ (((*l_1609) = g_582) < 4294967295UL))) , l_1491.f1) , p_7.f1) != p_7.f3), 7UL)) > g_1641[0][0]) != l_1519.f0) | 1L))) == 0x289A738850EF1EA6LL) > p_7.f4) ^ g_72.f2) >= p_7.f4) <= 2L));
                    }
                    else
                    {
                        return l_1638;
                    }
                }
            }
            l_1519.f6 ^= 1L;
        }
        else
        {
            uint16_t l_1642 = 0x46A4L;
            for (g_128 = 2; (g_128 >= 0); g_128 -= 1)
            {
                union U4 *l_1644 = &l_1589[4][2];
                union U4 **l_1643 = &l_1644;
                int i;
                if (g_994[(g_128 + 1)])
                    break;
                l_1642 &= p_8;
                (*l_1643) = &l_1589[2][2];
            }
            if ((*l_1449))
                break;
        }
        (*l_1448) ^= (((*l_1629) , (((*g_860) , ((*g_675) && l_1519.f7)) != p_9)) >= g_594.f2);
    }
    return (*g_1429);
}







static uint64_t func_21(uint8_t p_22, uint32_t p_23, union U4 p_24, int64_t p_25, struct S1 p_26)
{
    uint8_t l_1444 = 0x7BL;
    return l_1444;
}







static uint32_t func_31(int8_t p_32, union U6 p_33, union U3 p_34, int32_t * p_35, int32_t * p_36)
{
    int32_t *l_43 = &g_2;
    int32_t l_65 = 9L;
    uint16_t *l_81 = &g_39.f4;
    union U6 l_82 = {0x1EAAC298L};
    union U6 l_822[10] = {{1UL},{0UL},{1UL},{0x95211374L},{0x95211374L},{1UL},{0UL},{1UL},{0x95211374L},{0x95211374L}};
    struct S1 l_823 = {927,18446744073709551606UL,-1L,0xA147L};
    int32_t l_1430 = (-1L);
    int32_t *l_1440 = &g_1441;
    int i;
    (*l_1440) ^= (l_43 != (func_44(func_49(func_53(((l_822[7] = ((p_33 = func_59(g_64, l_65, p_35, func_66(g_72, l_43, (p_33 , l_43), ((((safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((*l_81) = ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(g_72.f1.f1, (-1L))), (*l_43))) & g_64.f2)), 1L)), 0xB57BL)) , 0x58852677L) & g_72.f2) , l_82), l_82))) , p_33)) , 0xF4D3B7FBL), g_636, l_823, p_34, g_132.f4), (**g_868), g_408[8][1].f2), p_36, p_34.f0, l_1430) , p_36));
    return g_132.f5;
}







static int64_t func_44(int32_t * p_45, int32_t * p_46, uint32_t p_47, int64_t p_48)
{
    uint64_t l_1431 = 0x8C6EBA852FE354F9LL;
    int16_t *l_1437 = &g_180.f0;
    union U3 * const *l_1438 = &g_869[0];
    int32_t *l_1439 = &g_338[3][2];
    ++l_1431;
    (*l_1439) ^= (safe_add_func_int16_t_s_s(((*l_1437) = ((*g_675) = (!l_1431))), ((&g_869[2] == l_1438) , (0xE5L & g_132.f4))));
    return p_47;
}







static int32_t * func_49(int32_t * p_50, union U3 p_51, int16_t p_52)
{
    int32_t *l_1108 = &g_338[4][0];
    int32_t *l_1109 = &g_1054;
    int32_t l_1110 = 0x5D9B4978L;
    int32_t *l_1111 = &l_1110;
    int32_t *l_1112 = (void*)0;
    int32_t *l_1113 = &l_1110;
    int32_t l_1114 = 3L;
    int32_t l_1115 = 1L;
    int32_t *l_1116 = &g_1054;
    int32_t l_1117 = 0xF0F0B09BL;
    int32_t *l_1118 = (void*)0;
    int32_t *l_1119 = &g_154;
    int32_t *l_1120 = (void*)0;
    int32_t *l_1121 = &l_1110;
    int32_t *l_1122 = &l_1114;
    int32_t *l_1123 = &g_154;
    int32_t l_1124 = 0x66665F35L;
    int32_t *l_1125 = &l_1115;
    int32_t *l_1126 = &l_1124;
    int32_t *l_1127 = &l_1114;
    int32_t *l_1128 = (void*)0;
    int32_t l_1129 = 0x0655AC2CL;
    int32_t *l_1130 = &l_1117;
    int32_t *l_1131 = &l_1110;
    int32_t *l_1132 = (void*)0;
    int32_t l_1133 = (-3L);
    int32_t *l_1134[8][1][4] = {{{&g_338[4][0],(void*)0,&g_338[4][0],(void*)0}},{{&g_338[4][0],(void*)0,&g_338[4][0],(void*)0}},{{&g_338[4][0],(void*)0,&g_338[4][0],(void*)0}},{{&g_338[4][0],(void*)0,&g_338[4][0],(void*)0}},{{&g_338[4][0],(void*)0,&g_338[4][0],(void*)0}},{{&g_338[4][0],(void*)0,&g_338[4][0],(void*)0}},{{&g_338[4][0],(void*)0,&g_338[4][0],(void*)0}},{{&g_338[4][0],(void*)0,&g_338[4][0],(void*)0}}};
    int64_t l_1135 = 0xFB13386FE14D2813LL;
    int16_t l_1136 = 0x8BBEL;
    uint64_t l_1137 = 0UL;
    union U6 l_1153 = {0UL};
    union U6 *l_1154 = (void*)0;
    union U6 *l_1155 = &l_1153;
    uint64_t ****l_1157[4][4][9] = {{{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362}},{{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362}},{{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362}},{{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,(void*)0,&g_362}}};
    struct S2 l_1209 = {0L,{984,0x692A6F5FB6300C8DLL,1L,65532UL},8UL};
    int32_t l_1255 = 0L;
    union U3 l_1256 = {0xE67ED829L};
    uint16_t ****l_1283 = (void*)0;
    uint32_t l_1296[5][9][1] = {{{0xC305DC1FL},{0x582AE3D0L},{0xDEE2289FL},{4294967295UL},{0xC305DC1FL},{4294967295UL},{0xDEE2289FL},{0x582AE3D0L},{0xC305DC1FL}},{{0x582AE3D0L},{0xDEE2289FL},{4294967295UL},{0xC305DC1FL},{4294967295UL},{0xDEE2289FL},{0x582AE3D0L},{0xC305DC1FL},{0x582AE3D0L}},{{0xDEE2289FL},{4294967295UL},{0xC305DC1FL},{4294967295UL},{0xDEE2289FL},{0x582AE3D0L},{0xC305DC1FL},{0x582AE3D0L},{0xDEE2289FL}},{{4294967295UL},{0xC305DC1FL},{4294967295UL},{0xDEE2289FL},{0x582AE3D0L},{0xC305DC1FL},{0x582AE3D0L},{0xDEE2289FL},{4294967295UL}},{{0xC305DC1FL},{4294967295UL},{0xDEE2289FL},{0x582AE3D0L},{0xC305DC1FL},{0x582AE3D0L},{0xDEE2289FL},{4294967295UL},{0xC305DC1FL}}};
    struct S0 l_1300[4][6] = {{{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL}},{{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL}},{{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL}},{{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL},{0xB95EL,18446744073709551612UL,-1L,0xDBL,0x158CAD1E93549E37LL,0x2918L,8,0x92CA3DCEL}}};
    uint32_t l_1399[2];
    union U4 l_1400 = {0x1B76A021L};
    const int32_t *l_1426 = &g_629;
    const int32_t **l_1427 = (void*)0;
    const int32_t **l_1428[1][3][3] = {{{&l_1426,&l_1426,&l_1426},{&l_1426,&l_1426,&l_1426},{&l_1426,&l_1426,&l_1426}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1399[i] = 0UL;
    l_1137--;
    for (g_180.f0 = 29; (g_180.f0 != 24); g_180.f0 = safe_sub_func_uint8_t_u_u(g_180.f0, 5))
    {
        int32_t *l_1142 = (void*)0;
        return l_1142;
    }
    if ((safe_lshift_func_uint8_t_u_s((((((p_52 , &g_132) == (void*)0) , (**g_1105)) , (safe_div_func_uint8_t_u_u(p_51.f0, ((**g_859) = (safe_mul_func_int16_t_s_s((((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s((p_52 <= ((((*l_1155) = l_1153) , (safe_unary_minus_func_uint16_t_u((l_1157[1][2][0] != (void*)0)))) >= 0x564AL)), 7)) , 0xC15B0DD727FC424CLL), (*g_356))) , (*p_50)) > 0x06BE78B2L), (*g_675))))))) >= 0L), 5)))
    {
        uint16_t l_1158 = 0UL;
        struct S1 l_1167 = {-1298,0xFF490D2D53E87788LL,0x1923A03CL,0x9252L};
        int32_t l_1238 = 3L;
        int64_t l_1239 = 1L;
        union U3 l_1240[7][9] = {{{-1L},{-1L},{0xAE58931CL},{-1L},{-1L},{0x9BEF89DBL},{-1L},{-1L},{0x9BEF89DBL}},{{0x144215ADL},{-1L},{0x402D418AL},{-1L},{0x144215ADL},{0L},{-1L},{0L},{0xAE58931CL}},{{-1L},{-1L},{0x402D418AL},{0L},{-1L},{0xAE58931CL},{-1L},{0L},{0x402D418AL}},{{0x144215ADL},{0x144215ADL},{0xAE58931CL},{0L},{-1L},{0L},{0x144215ADL},{-1L},{0x402D418AL}},{{-1L},{-1L},{0x9BEF89DBL},{-1L},{-1L},{0x9BEF89DBL},{-1L},{-1L},{0xAE58931CL}},{{-1L},{-1L},{0xAE58931CL},{-1L},{-1L},{0x9BEF89DBL},{-1L},{-1L},{0x9BEF89DBL}},{{0x144215ADL},{-1L},{0x402D418AL},{-1L},{0x144215ADL},{0L},{-1L},{0L},{0xAE58931CL}}};
        int64_t l_1257 = 0x500C1730686FB1BBLL;
        int32_t l_1262 = (-6L);
        struct S0 l_1357 = {65535UL,0xDF08D3ABL,0x6563A4CBL,-8L,0x24C092F75E1E2E52LL,8UL,4,0xBCD89F6EL};
        int i, j;
        l_1158--;
        for (g_594.f1.f3 = 0; (g_594.f1.f3 <= 2); g_594.f1.f3 += 1)
        {
            uint32_t l_1177 = 0UL;
            union U6 l_1181 = {9UL};
            int8_t ***l_1200[4][9] = {{(void*)0,&g_859,&g_859,&g_859,&g_859,(void*)0,&g_859,&g_859,&g_859},{(void*)0,(void*)0,(void*)0,&g_859,(void*)0,(void*)0,(void*)0,(void*)0,&g_859},{&g_859,&g_859,&g_859,(void*)0,(void*)0,&g_859,&g_859,&g_859,(void*)0},{&g_859,(void*)0,(void*)0,&g_859,&g_859,&g_859,(void*)0,(void*)0,&g_859}};
            struct S1 l_1204 = {-2615,18446744073709551615UL,0L,1UL};
            uint64_t l_1216 = 0x4041CACBF9A180F4LL;
            struct S1 ** const *l_1220 = &g_237;
            int64_t l_1225[2][5] = {{0x5C7A17A60B765B4ELL,0x5C7A17A60B765B4ELL,0x5C7A17A60B765B4ELL,0x5C7A17A60B765B4ELL,0x5C7A17A60B765B4ELL},{0x63B127AC23C00D18LL,0x63B127AC23C00D18LL,0x63B127AC23C00D18LL,0x63B127AC23C00D18LL,0x63B127AC23C00D18LL}};
            int16_t l_1241 = (-1L);
            int32_t **l_1242 = (void*)0;
            int32_t **l_1243 = &l_1128;
            const int32_t l_1323 = 0x3269ECBFL;
            union U4 *l_1339[5];
            int i, j;
            for (i = 0; i < 5; i++)
                l_1339[i] = &g_636;
            for (g_591.f1.f3 = 0; (g_591.f1.f3 <= 2); g_591.f1.f3 += 1)
            {
                int16_t *l_1176 = &g_180.f0;
                int16_t *l_1178 = (void*)0;
                int16_t *l_1179[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_1179[i] = &g_594.f0;
                if (((safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((safe_add_func_int8_t_s_s(0x06L, (l_1181 , g_899[1].f0))) & g_360[g_594.f1.f3]), p_52)), g_155)) != l_1177))
                {
                    uint32_t *l_1186 = &l_1177;
                    uint8_t *l_1191 = &g_253;
                    int32_t l_1192 = 1L;
                    int32_t *l_1193 = &g_636.f0;
                    (*l_1121) |= (p_51.f0 | (((((safe_add_func_uint64_t_u_u(((*g_356) = (((*g_675) , p_52) >= (((((*l_1193) &= (safe_div_func_uint32_t_u_u(4294967293UL, (((void*)0 == (*g_362)) , ((l_1192 = (((*l_1186) = p_51.f0) == (safe_unary_minus_func_uint32_t_u((~((*g_860) = ((((*l_1191) &= (safe_add_func_int8_t_s_s(0x81L, (**g_859)))) != l_1167.f0) | p_52))))))) || 1UL))))) , 0UL) > 1UL) == (*p_50)))), g_408[8][1].f0)) > 0x23L) > 1UL) && l_1192) <= p_52));
                }
                else
                {
                    uint32_t l_1196 = 18446744073709551615UL;
                    uint16_t **l_1211 = &g_100;
                    int32_t l_1213 = 0L;
                    int32_t l_1214 = 0xBF5D0649L;
                    for (g_132.f0 = 2; (g_132.f0 > 7); g_132.f0 = safe_add_func_uint64_t_u_u(g_132.f0, 5))
                    {
                        union U6 *l_1197 = &g_494;
                        int8_t ****l_1201 = &l_1200[1][4];
                        int64_t *l_1207 = &l_1135;
                        uint64_t l_1208 = 1UL;
                        uint8_t l_1210 = 1UL;
                        uint16_t ***l_1212 = &l_1211;
                        int32_t l_1215 = 0xBE5A4053L;
                        (*p_50) |= ((*l_1111) = ((18446744073709551615UL <= l_1196) , ((void*)0 != l_1197)));
                        (*l_1119) = ((0UL | (safe_sub_func_uint16_t_u_u((((*l_1201) = l_1200[0][6]) == (void*)0), (safe_add_func_int8_t_s_s((**g_859), ((p_51.f0 ^ (((l_1204 , (safe_sub_func_int64_t_s_s(((((*l_1207) = l_1167.f3) == l_1208) , (l_1209 , 0xEFBC06DA1514E593LL)), p_52))) > l_1208) <= (*p_50))) > l_1210)))))) , l_1196);
                        (*l_1212) = l_1211;
                        ++l_1216;
                    }
                    if ((+(l_1167.f3 , l_1216)))
                    {
                        l_1225[0][2] = ((*l_1116) = (((void*)0 == l_1220) <= (((**g_1105) , (safe_div_func_uint8_t_u_u(254UL, 0x17L))) <= (safe_div_func_uint32_t_u_u(p_52, ((*l_1121) ^= ((*l_1127) |= (*p_50))))))));
                        (*l_1111) ^= 0xFFC7AC80L;
                    }
                    else
                    {
                        uint8_t l_1228 = 1UL;
                        uint8_t *l_1229[3][8] = {{&g_582,&l_1228,&l_1228,&g_582,&l_1228,&l_1228,&g_582,&g_253},{&g_582,&l_1228,&g_253,&g_582,&g_582,&g_253,&l_1228,&g_582},{&g_253,&g_582,&l_1228,&l_1228,&g_582,&l_1228,&l_1228,&g_582}};
                        int i, j;
                        (*l_1108) = (safe_rshift_func_uint8_t_u_s((l_1204.f0 = ((&g_675 != ((((*g_654) = (void*)0) != (void*)0) , (void*)0)) & l_1228)), (((safe_sub_func_int64_t_s_s(5L, (safe_mod_func_uint64_t_u_u((safe_add_func_int8_t_s_s(((safe_div_func_int32_t_s_s(((void*)0 != &g_647[4][6][3]), (4294967295UL ^ 4L))) ^ p_51.f0), p_52)), 0x93B494F9C2044DCELL)))) & g_408[8][1].f3) >= 0x5D7479CA05E0FAECLL)));
                        if (l_1213)
                            continue;
                        l_1238 ^= 0x16A4C29BL;
                    }
                }
                (*l_1113) ^= (*l_1108);
            }
            (*l_1243) = func_53((l_1239 == 0x6EC76988DA752D57LL), (*g_1106), l_1167, l_1240[6][6], l_1241);
            if ((**l_1243))
            {
                int32_t l_1254 = 0x23E631D7L;
                for (l_1209.f0 = 0; (l_1209.f0 < (-17)); l_1209.f0--)
                {
                    int64_t l_1246[7] = {(-10L),9L,9L,(-10L),9L,9L,(-10L)};
                    uint8_t *l_1249 = (void*)0;
                    uint8_t *l_1250 = &g_582;
                    struct S1 l_1251[5][8] = {{{-2474,0x6A630DD5C459DCABLL,1L,65535UL},{2818,0xF06414EE58F659F3LL,0x5B7F1B5AL,0x1DB4L},{-2474,0x6A630DD5C459DCABLL,1L,65535UL},{813,0UL,-8L,2UL},{2716,0xF5B01B69B99BB102LL,0x5B24F646L,65533UL},{813,0UL,-8L,2UL},{-2474,0x6A630DD5C459DCABLL,1L,65535UL},{2818,0xF06414EE58F659F3LL,0x5B7F1B5AL,0x1DB4L}},{{2716,0xF5B01B69B99BB102LL,0x5B24F646L,65533UL},{813,0UL,-8L,2UL},{-2474,0x6A630DD5C459DCABLL,1L,65535UL},{2818,0xF06414EE58F659F3LL,0x5B7F1B5AL,0x1DB4L},{-2474,0x6A630DD5C459DCABLL,1L,65535UL},{813,0UL,-8L,2UL},{2716,0xF5B01B69B99BB102LL,0x5B24F646L,65533UL},{813,0UL,-8L,2UL}},{{2716,0xF5B01B69B99BB102LL,0x5B24F646L,65533UL},{2818,0xF06414EE58F659F3LL,0x5B7F1B5AL,0x1DB4L},{917,0x8B1E97E0DA9802E0LL,0x596BA832L,65532UL},{2818,0xF06414EE58F659F3LL,0x5B7F1B5AL,0x1DB4L},{2716,0xF5B01B69B99BB102LL,0x5B24F646L,65533UL},{582,0UL,-4L,1UL},{2716,0xF5B01B69B99BB102LL,0x5B24F646L,65533UL},{2818,0xF06414EE58F659F3LL,0x5B7F1B5AL,0x1DB4L}},{{-2474,0x6A630DD5C459DCABLL,1L,65535UL},{2818,0xF06414EE58F659F3LL,0x5B7F1B5AL,0x1DB4L},{-2474,0x6A630DD5C459DCABLL,1L,65535UL},{813,0UL,-8L,2UL},{2716,0xF5B01B69B99BB102LL,0x5B24F646L,65533UL},{813,0UL,-8L,2UL},{-2474,0x6A630DD5C459DCABLL,1L,65535UL},{2818,0xF06414EE58F659F3LL,0x5B7F1B5AL,0x1DB4L}},{{2716,0xF5B01B69B99BB102LL,0x5B24F646L,65533UL},{813,0UL,-8L,2UL},{-2474,0x6A630DD5C459DCABLL,1L,65535UL},{2818,0xF06414EE58F659F3LL,0x5B7F1B5AL,0x1DB4L},{-2474,0x6A630DD5C459DCABLL,1L,65535UL},{813,0UL,-8L,2UL},{2716,0xF5B01B69B99BB102LL,0x5B24F646L,65533UL},{813,0UL,-8L,2UL}}};
                    int i, j;
                    if (l_1246[4])
                        break;
                    (*l_1243) = ((safe_add_func_uint8_t_u_u(248UL, ((*l_1250) ^= g_132.f3))) , func_53(p_51.f0, (**g_1105), l_1251[0][5], ((((0x2FEDAAE3L & (((*g_675) & ((safe_lshift_func_int16_t_s_u(p_51.f0, (((*g_675) || (*g_675)) ^ l_1254))) <= (*l_1122))) || (-3L))) > l_1255) , (*p_50)) , l_1256), l_1167.f1));
                    if (l_1257)
                        break;
                }
            }
            else
            {
                int32_t l_1260[3];
                uint8_t l_1263[5] = {0x58L,0x58L,0x58L,0x58L,0x58L};
                uint16_t ****l_1282 = &g_623;
                int32_t l_1285 = 0x45CC03B7L;
                uint32_t l_1298 = 0UL;
                struct S2 l_1307 = {8L,{2065,0UL,7L,1UL},5UL};
                uint64_t l_1308 = 0xC2994514BD157913LL;
                uint32_t *l_1385 = &l_1177;
                union U6 l_1390[2] = {{0UL},{0UL}};
                int8_t l_1422 = 0x14L;
                int i;
                for (i = 0; i < 3; i++)
                    l_1260[i] = (-7L);
                (*l_1130) ^= (0xB3L && 7UL);
                if ((((1UL || (*p_50)) & (0x1D0DL || (safe_rshift_func_uint16_t_u_s(p_52, ((*g_675) |= l_1260[1]))))) , (*l_1119)))
                {
                    int32_t l_1261 = (-7L);
                    --l_1263[2];
                }
                else
                {
                    uint8_t *l_1272 = &l_1263[2];
                    union U3 **l_1277[1];
                    struct S2 l_1281 = {0x2FEAL,{953,2UL,0x4AABF97BL,0x6F08L},0xC005L};
                    uint8_t *l_1284[5] = {&g_582,&g_582,&g_582,&g_582,&g_582};
                    uint32_t l_1297 = 0UL;
                    union U6 l_1332 = {18446744073709551612UL};
                    union U4 **l_1367[9][8] = {{(void*)0,&l_1339[1],&l_1339[1],&l_1339[1],&l_1339[1],(void*)0,&l_1339[0],&l_1339[0]},{&l_1339[0],&l_1339[1],(void*)0,&l_1339[0],&l_1339[2],&l_1339[3],&l_1339[2],&l_1339[0]},{&l_1339[2],&l_1339[3],&l_1339[2],&l_1339[0],(void*)0,&l_1339[1],&l_1339[0],&l_1339[0]},{&l_1339[0],(void*)0,&l_1339[1],&l_1339[1],&l_1339[1],&l_1339[1],(void*)0,&l_1339[0]},{&l_1339[0],&l_1339[0],&l_1339[0],&l_1339[2],(void*)0,&l_1339[1],&l_1339[1],&l_1339[1]},{&l_1339[2],&l_1339[2],&l_1339[0],&l_1339[2],&l_1339[2],&l_1339[1],&l_1339[3],(void*)0},{&l_1339[0],&l_1339[0],&l_1339[2],(void*)0,&l_1339[1],&l_1339[1],(void*)0,&l_1339[2]},{(void*)0,(void*)0,&l_1339[2],&l_1339[0],&l_1339[0],&l_1339[1],&l_1339[3],&l_1339[0]},{&l_1339[1],&l_1339[3],&l_1339[0],(void*)0,&l_1339[0],&l_1339[3],&l_1339[1],&l_1339[0]}};
                    union U4 ***l_1366[6] = {&l_1367[6][6],&l_1367[6][6],&l_1367[6][6],&l_1367[6][6],&l_1367[6][6],&l_1367[6][6]};
                    union U4 ****l_1365[4][5] = {{&l_1366[4],&l_1366[4],&l_1366[4],&l_1366[4],&l_1366[4]},{(void*)0,(void*)0,&l_1366[4],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_1366[4],(void*)0},{&l_1366[4],&l_1366[4],(void*)0,&l_1366[4],&l_1366[4]}};
                    union U5 l_1369 = {0x7C7AL};
                    const uint64_t *l_1419[7][8][4] = {{{&l_1137,&l_1281.f1.f1,&l_1216,&g_591.f1.f1},{&l_1137,&l_1307.f1.f1,&l_1357.f4,(void*)0},{&l_1167.f1,&g_72.f1.f1,&l_1209.f1.f1,(void*)0},{&g_64.f1,&l_1209.f1.f1,&g_282,&l_1167.f1},{(void*)0,&l_1281.f1.f1,&l_1357.f4,(void*)0},{&l_1209.f1.f1,(void*)0,&l_1209.f1.f1,&l_1307.f1.f1},{&l_1216,&g_1180,&g_64.f1,(void*)0},{(void*)0,&l_1216,&l_1137,&l_1137}},{{&g_591.f1.f1,(void*)0,&l_1300[3][0].f4,&g_132.f4},{(void*)0,&g_132.f4,&l_1357.f4,&g_1180},{&l_1300[3][0].f4,&g_72.f1.f1,&g_132.f4,&l_1209.f1.f1},{&l_1357.f4,&l_1281.f1.f1,&l_1281.f1.f1,&l_1357.f4},{&g_591.f1.f1,&g_72.f1.f1,(void*)0,&l_1307.f1.f1},{&l_1216,&g_64.f1,&g_72.f1.f1,&l_1167.f1},{&l_1308,(void*)0,&l_1308,&l_1167.f1},{&l_1307.f1.f1,&g_64.f1,&g_1180,&l_1307.f1.f1}},{{&l_1137,&g_72.f1.f1,&g_282,&l_1357.f4},{&l_1357.f4,&l_1281.f1.f1,&l_1167.f1,&l_1209.f1.f1},{&g_591.f1.f1,&g_72.f1.f1,&l_1137,&g_1180},{&g_953[1].f1,&g_132.f4,&l_1281.f1.f1,&g_132.f4},{&g_953[1].f1,(void*)0,&l_1204.f1,&l_1137},{&g_594.f1.f1,&l_1216,&g_72.f1.f1,(void*)0},{&g_1180,&g_1180,&g_591.f1.f1,&l_1307.f1.f1},{&l_1307.f1.f1,(void*)0,&g_72.f1.f1,(void*)0}},{{&l_1204.f1,&l_1281.f1.f1,(void*)0,&l_1167.f1},{&l_1357.f4,&l_1209.f1.f1,&g_591.f1.f1,(void*)0},{&g_72.f1.f1,&g_72.f1.f1,&l_1167.f1,&g_408[8][1].f1},{&l_1308,&l_1357.f4,&g_408[8][1].f1,&l_1357.f4},{&g_64.f1,&g_72.f1.f1,&l_1357.f4,&l_1216},{&l_1167.f1,&l_1167.f1,&l_1167.f1,&g_72.f1.f1},{&g_72.f1.f1,&l_1216,&l_1307.f1.f1,&l_1281.f1.f1},{&l_1209.f1.f1,&l_1204.f1,(void*)0,&l_1216}},{{&l_1167.f1,(void*)0,(void*)0,&l_1307.f1.f1},{&l_1209.f1.f1,(void*)0,&l_1307.f1.f1,&g_282},{&g_72.f1.f1,&l_1167.f1,&l_1167.f1,(void*)0},{&l_1167.f1,(void*)0,&l_1357.f4,&g_591.f1.f1},{&g_64.f1,&l_1281.f1.f1,&g_408[8][1].f1,(void*)0},{&l_1308,&l_1307.f1.f1,&l_1167.f1,&l_1204.f1},{&g_72.f1.f1,&l_1307.f1.f1,&g_591.f1.f1,&g_953[1].f1},{&l_1357.f4,&g_591.f1.f1,(void*)0,&l_1307.f1.f1}},{{&l_1204.f1,&l_1308,&g_72.f1.f1,&l_1209.f1.f1},{&l_1307.f1.f1,&g_594.f1.f1,&g_591.f1.f1,&l_1300[3][0].f4},{&g_1180,&g_1180,&g_72.f1.f1,&l_1308},{&g_594.f1.f1,&l_1167.f1,&l_1204.f1,&g_953[1].f1},{&g_953[1].f1,&g_72.f1.f1,&l_1281.f1.f1,&g_64.f1},{&g_953[1].f1,&l_1308,&l_1137,&g_594.f1.f1},{&g_591.f1.f1,(void*)0,&l_1167.f1,&l_1167.f1},{&l_1357.f4,&l_1357.f4,&g_282,&l_1209.f1.f1}},{{&l_1137,&g_591.f1.f1,&g_1180,&g_72.f1.f1},{&l_1307.f1.f1,&l_1216,&l_1308,(void*)0},{&l_1137,&l_1209.f1.f1,&g_899[1].f1.f1,&l_1300[3][0].f4},{&l_1209.f1.f1,(void*)0,&g_408[8][1].f1,&g_72.f1.f1},{&l_1308,&g_594.f1.f1,&g_72.f1.f1,&l_1209.f1.f1},{&l_1307.f1.f1,&g_132.f4,&g_282,&g_953[1].f1},{&g_132.f4,&l_1209.f1.f1,&g_594.f1.f1,&l_1307.f1.f1},{&g_953[1].f1,&l_1216,&g_132.f4,&g_591.f1.f1}}};
                    const uint64_t **l_1418[5][10] = {{(void*)0,&l_1419[4][7][2],&l_1419[0][3][2],&l_1419[2][0][0],&l_1419[3][1][3],(void*)0,(void*)0,&l_1419[0][3][2],(void*)0,&l_1419[4][7][2]},{&l_1419[3][4][1],(void*)0,&l_1419[4][3][0],&l_1419[4][7][2],&l_1419[3][1][3],&l_1419[4][7][2],&l_1419[2][0][0],&l_1419[4][3][0],&l_1419[2][0][0],&l_1419[4][7][2]},{&l_1419[3][1][3],(void*)0,(void*)0,(void*)0,&l_1419[3][1][3],(void*)0,&l_1419[2][1][2],(void*)0,&l_1419[4][7][2],&l_1419[4][7][2]},{(void*)0,&l_1419[2][0][0],&l_1419[4][7][2],&l_1419[2][1][2],&l_1419[3][1][3],&l_1419[3][4][1],&l_1419[4][7][2],&l_1419[4][7][2],(void*)0,&l_1419[4][7][2]},{&l_1419[4][7][2],&l_1419[2][1][2],&l_1419[2][0][3],(void*)0,&l_1419[3][1][3],&l_1419[3][1][3],(void*)0,&l_1419[2][0][3],&l_1419[2][1][2],&l_1419[4][7][2]}};
                    const uint64_t ***l_1417[3][8] = {{&l_1418[0][1],&l_1418[0][1],&l_1418[0][1],&l_1418[0][1],&l_1418[0][1],&l_1418[0][1],&l_1418[0][1],&l_1418[0][1]},{&l_1418[0][1],&l_1418[0][1],&l_1418[0][1],&l_1418[0][1],&l_1418[0][1],&l_1418[0][1],&l_1418[0][1],&l_1418[0][1]},{&l_1418[0][1],&l_1418[0][1],&l_1418[0][1],&l_1418[0][1],&l_1418[0][1],&l_1418[0][1],&l_1418[0][1],&l_1418[0][1]}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1277[i] = &g_869[0];
                    if ((safe_mul_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(p_51.f0, (safe_div_func_uint64_t_u_u(((1L < (((*l_1272)++) & (l_1285 = (((g_154 , (p_51.f0 != (((((!(!((void*)0 == l_1277[0]))) != (safe_div_func_int32_t_s_s((+((l_1281 , l_1281.f1.f2) && (l_1282 != l_1283))), l_1281.f2))) , p_51.f0) ^ p_51.f0) >= (*g_100)))) | g_132.f3) <= 0x1DED1FD8L)))) < l_1238), p_52)))) ^ l_1281.f1.f3), 1L)))
                    {
                        uint32_t *l_1321[5] = {&l_1177,&l_1177,&l_1177,&l_1177,&l_1177};
                        int32_t l_1322 = 0xF695C770L;
                        int i;
                        (*l_1130) ^= (((*g_868) == (*g_868)) <= ((((((*l_1123) != (safe_rshift_func_int16_t_s_u(((((0x992AL >= (((*l_1121) ^= (l_1209.f1 , ((safe_lshift_func_uint8_t_u_s(p_52, (safe_add_func_uint64_t_u_u(((*g_356) = ((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((((((**g_1105) , (void*)0) != (void*)0) != 0xF0L) ^ p_51.f0), l_1296[2][5][0])) != g_953[1].f2), p_52)) == 0UL)), l_1297)))) > 0xFC144CBDL))) == l_1281.f1.f1)) , (-1L)) ^ 0L) , l_1298), 15))) >= g_1299) >= 5UL) , p_52) || g_39.f2));
                        (*l_1128) = (l_1300[3][0] , (safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((**g_859) = (safe_mul_func_uint8_t_u_u(7UL, ((l_1167 , (l_1307 , (l_1308 = (*g_675)))) & (safe_sub_func_uint64_t_u_u(0xB42A36C1C9311707LL, p_52)))))) & (l_1322 = (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(p_51.f0, ((*g_100) &= (safe_sub_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((g_112 = (g_494.f1 = ((l_1307.f2 ^ p_51.f0) < l_1281.f1.f2))), l_1262)) == l_1281.f1.f1), p_51.f0))))), 0x3A832C17L)), p_52)))), p_51.f0)), l_1323)));
                    }
                    else
                    {
                        (*l_1127) &= (*l_1130);
                    }
                    for (l_1238 = 0; (l_1238 == (-5)); l_1238 = safe_sub_func_int8_t_s_s(l_1238, 6))
                    {
                        uint32_t **l_1330 = (void*)0;
                        int32_t l_1331[1];
                        uint16_t l_1343 = 0x5551L;
                        uint32_t *l_1352 = (void*)0;
                        uint32_t *l_1353 = &l_1177;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1331[i] = 0L;
                        (*l_1127) = (p_51 , (safe_sub_func_uint32_t_u_u(p_51.f0, (safe_add_func_uint32_t_u_u(((((void*)0 != l_1330) && (g_360[1] &= ((**g_859) = l_1331[0]))) | l_1331[0]), ((l_1332 , ((l_1281.f1.f0 ^= (safe_mul_func_int8_t_s_s(((*g_675) , ((((safe_rshift_func_int8_t_s_u((((safe_sub_func_int8_t_s_s((((&g_820[3][7][1] != &g_820[0][8][1]) && 18446744073709551615UL) && 0x1D4B295FL), l_1307.f1.f0)) | p_52) || 0xDFL), 4)) & 1UL) , l_1339[0]) == (void*)0)), p_52))) & p_52)) < 0L))))));
                        (*p_50) = (safe_mul_func_int16_t_s_s((+l_1343), (safe_sub_func_int16_t_s_s(((*g_675) = ((((safe_div_func_int64_t_s_s((((l_1240[6][6].f0 & (((&l_1209 != &l_1307) == (&g_899[0] != &l_1307)) | (safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((-1L) | ((*l_1353) ^= (1L != (g_582 = 0x4AL)))), p_51.f0)), (**l_1243))))) & 252UL) ^ g_132.f3), p_51.f0)) < 0L) || 5L) < g_187)), 8L))));
                        if (l_1307.f0)
                            break;
                    }
                    for (g_132.f2 = 0; (g_132.f2 <= 2); g_132.f2 += 1)
                    {
                        return p_50;
                    }
                    if ((((((((+(safe_lshift_func_int16_t_s_u(0L, 1))) ^ ((*g_675) &= p_52)) & ((l_1357 , (*g_859)) != (void*)0)) || (255UL && p_51.f0)) || p_51.f0) <= ((((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((l_1285 = (!(safe_mod_func_int8_t_s_s(((**l_1243) , (-3L)), g_594.f2)))), p_52)), 0xE3L)) , l_1365[2][4]) != &g_1104) >= g_338[0][2])) | p_52))
                    {
                        (*p_50) ^= 0x972EF1F6L;
                        l_1357.f6 = (~((l_1369 , (safe_div_func_uint16_t_u_u((g_594.f1.f2 || (((+g_953[1].f3) , (safe_add_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((**g_859), p_51.f0)) ^ ((((safe_mod_func_int64_t_s_s(((((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((*p_50) = ((*l_1113) = (l_1281.f1.f0 = ((*g_675) , ((*p_50) | (&g_112 != l_1385)))))), l_1332.f2)), 0UL)) && (*g_100)) <= 0x966EL) , 8L), 0xD5802E505F3D7EF3LL)) >= l_1307.f1.f0) > 1L) <= 0xC17AA51D66BBF238LL)), 0xBF83L))) == p_51.f0)), p_51.f0))) & 0x91AFL));
                    }
                    else
                    {
                        int32_t **l_1386 = (void*)0;
                        int32_t **l_1387 = &l_1131;
                        struct S2 **l_1423 = &g_593;
                        (*l_1387) = ((*l_1243) = &g_154);
                        (*l_1243) = func_53((l_1298 > (safe_lshift_func_uint8_t_u_s(((l_1390[0] , ((safe_mod_func_int32_t_s_s((((void*)0 == l_1282) >= (p_51.f0 <= (l_1307.f1.f0 |= (safe_add_func_uint32_t_u_u(4294967288UL, ((safe_sub_func_uint8_t_u_u((((*g_100)++) >= l_1399[0]), (((9L == p_52) >= p_52) && g_306[0][2]))) > 0xB4L)))))), (*p_50))) < (-10L))) >= 4294967291UL), p_51.f0))), l_1400, g_408[8][1], p_51, g_514);
                        (*l_1130) |= (safe_rshift_func_int8_t_s_u((((((safe_sub_func_int32_t_s_s((*p_50), 0xE20589C0L)) >= (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((((void*)0 != l_1417[1][4]) <= l_1357.f6) && 0xEBE4D2226F169EB3LL) >= p_52), (**l_1243))), (safe_mul_func_int8_t_s_s((l_1157[0][3][0] == (void*)0), p_52)))) | 0L), 0xED002607L)), l_1422)) ^ 0x96L), 0x1DL)), (**l_1243)))) > 18446744073709551615UL) , (void*)0) == l_1423), p_51.f0));
                        (*l_1109) = (*p_50);
                    }
                }
            }
            (*l_1122) = (*p_50);
        }
        (*l_1109) |= (l_1167.f2 , 1L);
    }
    else
    {
        for (g_39.f2 = 0; (g_39.f2 == 13); g_39.f2++)
        {
            return p_50;
        }
    }
    g_1429 = l_1426;
    return &g_338[0][2];
}







static int32_t * func_53(uint32_t p_54, union U4 p_55, struct S1 p_56, union U3 p_57, int32_t p_58)
{
    uint16_t *** const *l_827 = &g_623;
    int32_t l_832 = 0x1EEACEC1L;
    int32_t l_836[1];
    union U5 l_875 = {1L};
    uint8_t l_889 = 247UL;
    int16_t l_911 = 0xB97CL;
    struct S2 l_964[2] = {{0xB591L,{2735,0x1A06002BC48B835ELL,1L,0x7406L},0x4D8DL},{0xB591L,{2735,0x1A06002BC48B835ELL,1L,0x7406L},0x4D8DL}};
    uint32_t *l_966[2][9][8] = {{{&g_112,&g_112,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_112},{&g_112,(void*)0,&g_112,(void*)0,&g_112,&g_112,&g_112,(void*)0},{(void*)0,&g_112,(void*)0,&g_112,&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,&g_112,(void*)0,&g_112,(void*)0,&g_112,&g_112},{&g_112,&g_112,&g_112,&g_112,&g_112,(void*)0,(void*)0,&g_112},{(void*)0,(void*)0,(void*)0,(void*)0,&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,&g_112,&g_112,(void*)0,&g_112,(void*)0,&g_112},{&g_112,&g_112,(void*)0,&g_112,(void*)0,&g_112,&g_112,&g_112},{&g_112,(void*)0,&g_112,(void*)0,&g_112,(void*)0,(void*)0,&g_112}},{{&g_112,&g_112,&g_112,&g_112,&g_112,(void*)0,(void*)0,(void*)0},{(void*)0,&g_112,&g_112,(void*)0,(void*)0,&g_112,&g_112,&g_112},{(void*)0,&g_112,&g_112,&g_112,&g_112,(void*)0,&g_112,(void*)0},{&g_112,&g_112,&g_112,&g_112,&g_112,(void*)0,&g_112,&g_112},{&g_112,(void*)0,(void*)0,&g_112,&g_112,(void*)0,&g_112,(void*)0},{&g_112,&g_112,(void*)0,&g_112,(void*)0,&g_112,&g_112,&g_112},{&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,(void*)0},{(void*)0,(void*)0,&g_112,(void*)0,&g_112,(void*)0,&g_112,&g_112},{&g_112,(void*)0,&g_112,(void*)0,(void*)0,&g_112,(void*)0,&g_112}}};
    uint32_t **l_965 = &l_966[1][8][4];
    struct S1 **l_969 = (void*)0;
    uint8_t l_1052 = 0x9EL;
    int32_t *l_1057 = &l_832;
    uint32_t l_1075 = 0x2B4607FEL;
    int32_t *l_1094 = &g_338[0][2];
    int32_t *l_1095 = &g_132.f7;
    int32_t *l_1096[5] = {&g_132.f7,&g_132.f7,&g_132.f7,&g_132.f7,&g_132.f7};
    uint32_t l_1097 = 0x585CCA76L;
    union U4 * const *l_1102 = (void*)0;
    union U4 * const **l_1101 = &l_1102;
    union U4 * const ***l_1103[3];
    int32_t *l_1107 = &g_154;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_836[i] = 0x20E126EFL;
    for (i = 0; i < 3; i++)
        l_1103[i] = &l_1101;
    for (g_494.f4 = 0; (g_494.f4 <= 2); g_494.f4 += 1)
    {
        const int16_t l_824 = (-1L);
        int32_t l_833 = 0x7BB101F2L;
        int32_t l_834[1][3][3] = {{{(-1L),(-1L),(-1L)},{(-9L),(-9L),(-9L)},{(-1L),(-1L),(-1L)}}};
        uint64_t l_838 = 0UL;
        union U3 l_955 = {0xEFFFF730L};
        union U6 **l_959 = (void*)0;
        uint32_t **l_968 = &l_966[0][4][5];
        uint32_t ***l_967 = &l_968;
        int32_t *l_970 = &g_629;
        int32_t l_997[3][8][10] = {{{0xE466D196L,0xE466D196L,(-1L),0xF9D08B33L,0L,(-1L),0L,0xF9D08B33L,(-1L),0xE466D196L},{0L,1L,0L,0L,0xF1355CC1L,0xF1355CC1L,0L,0L,1L,0L},{0L,0xE466D196L,1L,0xF1355CC1L,0xE466D196L,0xF1355CC1L,1L,0xE466D196L,0L,0L},{0L,0xF9D08B33L,(-1L),0xE466D196L,0xE466D196L,(-1L),0xF9D08B33L,0L,(-1L),0L},{0xE466D196L,1L,0xF1355CC1L,0xE466D196L,0xF1355CC1L,1L,0xE466D196L,0L,0L,0xE466D196L},{0L,0L,0xF1355CC1L,0xF1355CC1L,0L,0L,1L,0L,1L,0L},{0xF9D08B33L,0L,(-1L),0L,0xF9D08B33L,(-1L),0xE466D196L,0xE466D196L,(-1L),0xF9D08B33L},{0xF9D08B33L,1L,1L,0xF9D08B33L,0xF1355CC1L,0L,0xF9D08B33L,0L,0xF1355CC1L,0xF9D08B33L}},{{0L,0xF9D08B33L,0L,0xF1355CC1L,0xF9D08B33L,1L,1L,0xF9D08B33L,0xF1355CC1L,0L},{0xE466D196L,0xE466D196L,(-1L),0xF9D08B33L,0L,(-1L),0L,0xF9D08B33L,(-1L),0xE466D196L},{0L,1L,0L,0L,0xF1355CC1L,0xF1355CC1L,0L,0L,1L,0L},{0L,0xE466D196L,1L,0xF1355CC1L,0xE466D196L,0xF1355CC1L,1L,0L,0x832C7391L,0x832C7391L},{0xF1355CC1L,1L,0xE466D196L,0L,0L,0xE466D196L,1L,0xF1355CC1L,0xE466D196L,0xF1355CC1L},{0L,(-1L),0xDE31ADEDL,0L,0xDE31ADEDL,(-1L),0L,0x832C7391L,0x832C7391L,0L},{0x832C7391L,0xF1355CC1L,0xDE31ADEDL,0xDE31ADEDL,0xF1355CC1L,0x832C7391L,(-1L),0xF1355CC1L,(-1L),0x832C7391L},{1L,0xF1355CC1L,0xE466D196L,0xF1355CC1L,1L,0xE466D196L,0L,0L,0xE466D196L,1L}},{{1L,(-1L),(-1L),1L,0xDE31ADEDL,0x832C7391L,1L,0x832C7391L,0xDE31ADEDL,1L},{0x832C7391L,1L,0x832C7391L,0xDE31ADEDL,1L,(-1L),(-1L),1L,0xDE31ADEDL,0x832C7391L},{0L,0L,0xE466D196L,1L,0xF1355CC1L,0xE466D196L,0xF1355CC1L,1L,0xE466D196L,0L},{0xF1355CC1L,(-1L),0x832C7391L,0xF1355CC1L,0xDE31ADEDL,0xDE31ADEDL,0xF1355CC1L,0x832C7391L,(-1L),0xF1355CC1L},{0x832C7391L,0L,(-1L),0xDE31ADEDL,0L,0xDE31ADEDL,(-1L),0L,0x832C7391L,0x832C7391L},{0xF1355CC1L,1L,0xE466D196L,0L,0L,0xE466D196L,1L,0xF1355CC1L,0xE466D196L,0xF1355CC1L},{0L,(-1L),0xDE31ADEDL,0L,0xDE31ADEDL,(-1L),0L,0x832C7391L,0x832C7391L,0L},{0x832C7391L,0xF1355CC1L,0xDE31ADEDL,0xDE31ADEDL,0xF1355CC1L,0x832C7391L,(-1L),0xF1355CC1L,(-1L),0x832C7391L}}};
        int i, j, k;
        for (g_132.f2 = 1; (g_132.f2 <= 4); g_132.f2 += 1)
        {
            uint16_t l_825[4] = {0xC444L,0xC444L,0xC444L,0xC444L};
            int32_t l_830 = 0L;
            int32_t l_831 = 0x35ACC180L;
            int32_t l_835[6][4] = {{0x8C26BBC6L,(-1L),(-1L),0x8C26BBC6L},{(-1L),0x8C26BBC6L,(-1L),(-1L)},{0x8C26BBC6L,0x8C26BBC6L,0xFDD26518L,0x8C26BBC6L},{0x8C26BBC6L,(-1L),(-1L),0x8C26BBC6L},{(-1L),0x8C26BBC6L,(-1L),(-1L)},{0x8C26BBC6L,0x8C26BBC6L,0xFDD26518L,0x8C26BBC6L}};
            uint32_t l_861 = 0UL;
            struct S2 **l_878 = (void*)0;
            const uint16_t ***l_887 = (void*)0;
            const uint16_t ****l_886[8] = {&l_887,&l_887,&l_887,&l_887,&l_887,&l_887,&l_887,&l_887};
            int16_t l_942 = 0x0940L;
            int8_t ***l_958 = (void*)0;
            int i, j;
            if (l_824)
            {
                int32_t *l_826 = &g_338[3][1];
                int32_t *l_829[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_829[i] = &g_132.f7;
                (*l_826) = l_825[1];
                g_828 = l_827;
                l_838--;
            }
            else
            {
                uint8_t l_851 = 1UL;
                uint8_t l_862 = 0UL;
                int32_t *l_863 = &l_831;
                int32_t **l_864 = &l_863;
                int i;
                (*l_863) = (l_832 |= (safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((g_360[g_494.f4] = g_132.f6), 0)), ((safe_sub_func_int64_t_s_s((g_132.f0 == (-10L)), (safe_sub_func_uint16_t_u_u(((g_180.f2 , (l_851 |= 0xC6L)) < ((l_834[0][1][0] = l_833) & (l_862 = (((safe_rshift_func_int16_t_s_s(((((safe_add_func_uint32_t_u_u(((l_836[0] > (!(safe_mul_func_int16_t_s_s(((void*)0 == g_859), l_833)))) || 0UL), 0x16607242L)) , (void*)0) == (void*)0) != p_55.f2), p_57.f0)) == l_861) < l_825[0])))), 65531UL)))) && p_54))), p_54)));
                (*l_864) = &g_338[0][2];
            }
            if (p_55.f2)
                break;
            for (g_284 = 0; (g_284 <= 4); g_284 += 1)
            {
                uint64_t l_865 = 0xC153E4F7755F00CELL;
                struct S2 **l_877 = &g_593;
                struct S2 ***l_876 = &l_877;
                int32_t l_883 = 9L;
                int32_t l_910[3][10] = {{(-10L),0x2F135FC3L,0L,1L,0xD0A099D6L,(-1L),0xF2C71832L,0xF2C71832L,(-1L),0xD0A099D6L},{0xE24E046AL,(-10L),(-10L),0xE24E046AL,(-8L),(-1L),1L,0L,0xD0A099D6L,0L},{(-10L),0x77F850D5L,0xFF80EE6DL,0L,0xFF80EE6DL,0x77F850D5L,(-10L),1L,0xD0A099D6L,0x2F135FC3L}};
                union U5 l_954 = {8L};
                int i, j;
                p_56.f0 = (((l_865 == (safe_sub_func_uint64_t_u_u(((void*)0 != g_868), (safe_mul_func_int16_t_s_s((g_72.f0 ^ ((18446744073709551606UL < (safe_lshift_func_int16_t_s_s((*g_675), 15))) & (l_830 >= (safe_unary_minus_func_uint8_t_u(((((((((p_54 <= p_56.f2) , l_875) , l_875.f2) <= (-1L)) >= (*g_356)) , 18446744073709551613UL) || 0x79C192D5017B96C5LL) == g_294[1])))))), (-2L)))))) ^ l_824) && 0UL);
                l_889 |= (((g_636 , (((((((*l_876) = &g_593) == l_878) <= (safe_sub_func_uint8_t_u_u((p_55.f1 , (1UL && (((p_56.f3 , (safe_sub_func_uint16_t_u_u(((l_883 = 1UL) < (safe_div_func_uint32_t_u_u(((65535UL ^ p_54) != g_40.f0), 0xF4BAD241L))), l_865))) , l_886[7]) == (void*)0))), p_57.f0))) || 0xA6DBF73DF8DEF140LL) && p_55.f1) , l_875.f0)) && g_888) && l_838);
                for (g_154 = 4; (g_154 >= 0); g_154 -= 1)
                {
                    union U4 *l_894 = (void*)0;
                    struct S2 *l_898 = &g_899[1];
                    int32_t l_900 = 0xFCB2A0C5L;
                    int32_t l_907 = 9L;
                    int32_t l_908[4] = {(-1L),(-1L),(-1L),(-1L)};
                    int32_t l_909 = (-1L);
                    struct S2 l_919 = {0xC8DAL,{-22,18446744073709551615UL,-1L,65535UL},0xB9B6L};
                    struct S1 * const l_952 = &g_953[1];
                    struct S1 * const *l_951[9][10][2] = {{{&l_952,&l_952},{(void*)0,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,(void*)0},{(void*)0,&l_952},{&l_952,&l_952},{&l_952,&l_952}},{{&l_952,&l_952},{(void*)0,(void*)0},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{(void*)0,&l_952},{&l_952,&l_952},{(void*)0,&l_952}},{{&l_952,(void*)0},{&l_952,&l_952},{&l_952,&l_952},{(void*)0,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952}},{{&l_952,(void*)0},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952}},{{&l_952,&l_952},{(void*)0,&l_952},{&l_952,&l_952},{(void*)0,&l_952},{&l_952,(void*)0},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,(void*)0}},{{&l_952,&l_952},{&l_952,(void*)0},{&l_952,&l_952},{(void*)0,&l_952},{(void*)0,&l_952},{&l_952,(void*)0},{&l_952,&l_952},{&l_952,(void*)0},{&l_952,&l_952},{&l_952,&l_952}},{{&l_952,&l_952},{&l_952,&l_952},{&l_952,(void*)0},{&l_952,&l_952},{(void*)0,&l_952},{&l_952,&l_952},{(void*)0,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952}},{{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,(void*)0},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952}},{{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{(void*)0,&l_952},{&l_952,&l_952},{&l_952,(void*)0},{&l_952,&l_952},{(void*)0,&l_952},{&l_952,&l_952}}};
                    struct S1 * const **l_950 = &l_951[2][4][1];
                    int i, j, k;
                    if (l_865)
                    {
                        union U4 **l_890 = (void*)0;
                        union U4 **l_891 = (void*)0;
                        union U4 *l_893 = (void*)0;
                        union U4 **l_892[9] = {&l_893,&l_893,&l_893,&l_893,&l_893,&l_893,&l_893,&l_893,&l_893};
                        struct S2 *l_897 = &g_591;
                        int i, j, k;
                        l_894 = ((l_875 , g_306[3][4]) , &g_636);
                        g_647[(g_132.f2 + 1)][g_494.f4][g_154] = g_647[(g_494.f4 + 2)][(g_494.f4 + 5)][g_132.f2];
                        l_831 &= (safe_add_func_uint32_t_u_u(0xCCE60E7CL, ((l_900 = ((0x66L <= 1UL) >= ((l_898 = l_897) != &g_72))) <= g_64.f0)));
                        if (p_56.f0)
                            break;
                    }
                    else
                    {
                        int32_t *l_901 = (void*)0;
                        int32_t *l_902 = &l_900;
                        int32_t *l_903 = (void*)0;
                        int32_t *l_904 = &l_830;
                        int32_t *l_905 = &l_836[0];
                        int32_t *l_906[2][4] = {{&l_834[0][2][1],&l_835[0][0],&l_835[0][0],&l_834[0][2][1]},{&l_835[0][0],&l_834[0][2][1],&l_835[0][0],&l_835[0][0]}};
                        uint32_t l_912 = 0x2B3EF5D0L;
                        uint32_t *l_935 = &g_112;
                        int64_t *l_943 = &g_603;
                        int i, j;
                        if (p_58)
                            break;
                        l_912--;
                        p_56.f0 = ((*l_902) = (((*l_943) ^= (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((((l_919 , (safe_lshift_func_int8_t_s_u(((*g_860) = ((0xABL == (safe_sub_func_uint16_t_u_u((++(*g_100)), (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(p_55.f2, 6)), (!(safe_mod_func_uint32_t_u_u(((*l_935) |= ((safe_add_func_int32_t_s_s(p_55.f2, 1UL)) == 1L)), (l_833 = (l_834[0][2][1] &= ((safe_div_func_int8_t_s_s(((g_899[1].f1.f2 && ((((((*l_905) ^= ((*l_904) |= (p_55.f2 < ((safe_mul_func_int8_t_s_s(l_942, 255UL)) & (*l_902))))) , (void*)0) != (void*)0) != 5UL) <= p_54)) < 0L), (-1L))) < (-1L)))))))))))) == (-5L))), l_910[1][2]))) , l_883) <= p_56.f0), 8)), l_825[0]))) < 0x4E79A7B6A0C5FFF8LL));
                    }
                    l_834[0][2][0] = ((safe_sub_func_uint32_t_u_u((l_838 && (safe_rshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(p_56.f1, (g_237 == ((*l_950) = g_237)))) >= ((l_954 , (0xBBL != ((l_955 , (safe_add_func_int8_t_s_s((((*g_675) = ((void*)0 != l_958)) , l_838), p_55.f2))) == p_54))) ^ l_865)), 4))), g_360[1])) || l_954.f2);
                }
            }
        }
        (*l_970) = ((((((&g_647[0][2][0] == l_959) != p_56.f0) <= ((safe_mod_func_uint64_t_u_u(((((((safe_lshift_func_int16_t_s_u(((l_964[0] , l_965) != ((*l_967) = (void*)0)), 15)) != ((0xBFA91CCAL | (l_832 = (g_237 == (g_636 , l_969)))) <= 65535UL)) > 8L) || 254UL) > g_708) < p_57.f0), g_252)) & g_338[4][0])) || 0x65L) != 1L) , p_55.f2);
        for (l_838 = 0; (l_838 == 56); ++l_838)
        {
            int32_t l_981 = 0xE115ED3CL;
            int32_t l_986 = 0x639755B9L;
            int32_t l_987 = 0x06ED5720L;
            int32_t l_989 = 0x1C8729C0L;
            int32_t l_990 = 0xF3A6DFACL;
            int16_t l_991 = 0L;
            int32_t l_992[7];
            int32_t l_993[10][7] = {{1L,(-4L),(-1L),3L,(-1L),3L,(-1L)},{0x1F2D66A6L,0x1F2D66A6L,1L,0xD3849CBBL,1L,0x1F2D66A6L,0x1F2D66A6L},{1L,(-4L),(-1L),(-4L),1L,0x4074D78BL,(-1L)},{0x16925413L,0x3E1032D0L,0x16925413L,1L,1L,0x16925413L,0x3E1032D0L},{(-1L),0xD1F8CEE0L,(-1L),0x88B8337EL,(-1L),(-4L),(-1L)},{0x16925413L,1L,1L,0x16925413L,0x3E1032D0L,0x16925413L,1L},{1L,0x4074D78BL,(-1L),0x88B8337EL,(-1L),0x4074D78BL,1L},{0x1F2D66A6L,1L,0xD3849CBBL,1L,0x1F2D66A6L,0x1F2D66A6L,1L},{1L,0xD1F8CEE0L,1L,(-4L),(-1L),3L,(-1L)},{1L,0x3E1032D0L,0xD3849CBBL,0xD3849CBBL,0x3E1032D0L,1L,0x3E1032D0L}};
            union U6 l_1012 = {0x0F142A7DL};
            int i, j;
            for (i = 0; i < 7; i++)
                l_992[i] = 0x407BBB92L;
            if ((p_54 > (safe_mod_func_uint32_t_u_u(p_58, 0xAD0AE9EBL))))
            {
                uint8_t l_977 = 0x4FL;
                int32_t l_988[7][3] = {{1L,0x040B49B9L,1L},{0xDDF0AC98L,0xDDF0AC98L,0xDDF0AC98L},{1L,0x040B49B9L,1L},{0xDDF0AC98L,0xDDF0AC98L,0xDDF0AC98L},{1L,0x040B49B9L,1L},{0xDDF0AC98L,0xDDF0AC98L,0xDDF0AC98L},{1L,0x040B49B9L,1L}};
                int i, j;
                for (g_39.f0 = (-17); (g_39.f0 >= 2); g_39.f0 = safe_add_func_int16_t_s_s(g_39.f0, 9))
                {
                    int32_t *l_984 = &l_834[0][1][0];
                    int32_t *l_985[5];
                    int16_t l_998 = 0xA408L;
                    uint64_t l_999 = 18446744073709551610UL;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_985[i] = &l_836[0];
                    for (g_252 = 4; (g_252 >= 0); g_252 -= 1)
                    {
                        uint64_t * const *l_983 = (void*)0;
                        uint64_t * const **l_982 = &l_983;
                        (*l_970) |= (((((l_977 || (+g_282)) <= (safe_lshift_func_int16_t_s_s(l_981, 7))) , (*g_362)) == ((*l_982) = (*g_362))) , p_54);
                        (*l_970) = (0xCEL && (-9L));
                    }
                    --g_994[4];
                    l_999--;
                }
                p_56.f0 |= (p_54 && ((safe_rshift_func_int8_t_s_u(p_55.f2, 2)) == g_953[1].f2));
            }
            else
            {
                union U6 l_1013 = {3UL};
                uint32_t *l_1027 = &g_112;
                int32_t l_1028 = 7L;
                for (g_217 = 28; (g_217 > 26); g_217--)
                {
                    int8_t l_1022 = 5L;
                    (*l_970) = (safe_rshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(((l_964[0].f1 , (l_1013 = l_1012)) , (safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(((safe_mod_func_int8_t_s_s((*g_860), ((safe_lshift_func_uint8_t_u_s((l_1022 ^ ((*g_356) = 0xED5EA160B8E9FAA3LL)), 1)) , (safe_mul_func_int8_t_s_s((l_1022 && g_282), (safe_lshift_func_uint8_t_u_u(((l_1027 = &g_112) != ((*l_965) = &g_112)), 4))))))) >= p_56.f3), g_408[8][1].f2)), 2))), l_875.f2)), 0xB6B4DD5F00A95559LL)), l_1028));
                }
                if ((*l_970))
                    continue;
            }
            if (l_986)
                continue;
            for (g_888 = 0; (g_888 <= 3); g_888 += 1)
            {
                int8_t *l_1053 = &g_128;
                int8_t l_1055 = 0x81L;
                int32_t *l_1056[6][6] = {{&l_836[0],&l_989,&l_989,&l_836[0],(void*)0,&l_992[4]},{&l_993[7][6],&l_836[0],(void*)0,&l_992[4],&l_992[0],&g_338[2][1]},{&l_992[0],(void*)0,&l_836[0],(void*)0,&l_992[0],&l_832},{&g_338[2][1],&l_836[0],&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_989,&l_836[0],&l_836[0],&l_989,(void*)0},{&l_832,&l_992[4],&l_832,&l_992[0],(void*)0,&l_832}};
                int i, j;
                l_992[4] ^= (((((((0x1B4343B4L && (g_1054 ^= (safe_mod_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s(g_306[g_888][g_494.f4], (safe_div_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(((-7L) <= (safe_lshift_func_int16_t_s_u((0xFD8C5FDFL | (g_112--)), ((((*l_1053) &= (((safe_div_func_uint8_t_u_u((0UL <= ((safe_mul_func_int8_t_s_s(g_306[g_494.f4][(g_888 + 1)], ((**g_859) = (((g_306[g_494.f4][(g_888 + 1)] & (safe_add_func_int32_t_s_s((l_834[0][2][2] |= (safe_add_func_uint16_t_u_u(((((((*g_100) ^= (p_56.f3 = (((*l_970) = (safe_mod_func_uint8_t_u_u(((((((p_56 , ((safe_unary_minus_func_uint32_t_u((p_56.f3 < (-7L)))) , (void*)0)) != (void*)0) < (-2L)) > (-7L)) || 0x3817L) , l_1052), p_55.f2))) | p_56.f2))) != 0x5A3DL) , p_56) , g_180) , 65532UL), 0x9CF3L))), 0x35551987L))) , l_990) && (-1L))))) < g_306[g_888][g_494.f4])), g_636.f2)) , 1UL) > p_57.f0)) | p_54) | l_836[0])))), 0xB8BCL)) & p_57.f0), 1L)))) && 1UL) >= g_132.f2), 0x555C6513L)))) < p_54) != l_1055) ^ p_54) != l_1055) & p_55.f0) < p_56.f2);
            }
            if (p_56.f2)
                goto lbl_1100;
            l_1057 = &l_836[0];
        }
    }
    if (p_56.f1)
    {
        int32_t l_1059 = 8L;
        uint64_t ****l_1077 = &g_362;
        int64_t l_1086[10][9] = {{0L,0L,0x2D7B60AD45CB7BB3LL,4L,(-1L),0L,0L,0x5BC0A50AA222B347LL,0x709E665D3A66A203LL},{(-1L),0L,(-3L),0x6C7ED1684C54C606LL,0xBD1BCCB66AF7FECCLL,0xEAA25AEC27F8D8FBLL,0x350C4CE3B8225F8BLL,0xEAA25AEC27F8D8FBLL,0xBD1BCCB66AF7FECCLL},{0x6C7ED1684C54C606LL,(-1L),(-1L),0x6C7ED1684C54C606LL,0x5A14A8F403D01CDDLL,0x2D7B60AD45CB7BB3LL,0x6FD452230A6A5FA1LL,0L,0L},{0x0FCC742B810BDE20LL,0xFEE6FC3B992BF7CCLL,0xBEAF2D5F1913EB97LL,4L,(-3L),(-5L),0x2D7B60AD45CB7BB3LL,0x6C7ED1684C54C606LL,0xEAA25AEC27F8D8FBLL},{1L,0x709E665D3A66A203LL,0x350C4CE3B8225F8BLL,0L,0x5A14A8F403D01CDDLL,0L,0x0FCC742B810BDE20LL,0xBD1BCCB66AF7FECCLL,0x0FCC742B810BDE20LL},{0L,0xBD1BCCB66AF7FECCLL,(-5L),(-5L),0xBD1BCCB66AF7FECCLL,0L,1L,1L,4L},{0L,0xFEE6FC3B992BF7CCLL,0x2D7B60AD45CB7BB3LL,0L,5L,0x6D7AA1BBCDFDA4C6LL,0x6C7ED1684C54C606LL,(-8L),(-3L)},{0L,1L,0x6C7ED1684C54C606LL,0x6FD452230A6A5FA1LL,(-1L),0x709E665D3A66A203LL,0L,4L,(-5L)},{4L,(-8L),1L,0L,0L,1L,(-8L),4L,0x709E665D3A66A203LL},{0xBEAF2D5F1913EB97LL,1L,0x350C4CE3B8225F8BLL,(-1L),(-3L),0x6FD452230A6A5FA1LL,0x709E665D3A66A203LL,(-8L),1L}};
        uint64_t l_1088 = 18446744073709551610UL;
        int i, j;
        (*l_1057) |= (!p_55.f0);
        l_1059 &= ((*l_1057) = 0xAB363F26L);
        for (g_494.f2 = 0; (g_494.f2 <= 2); g_494.f2 += 1)
        {
            union U6 l_1060[4] = {{0x28D71CBCL},{0x28D71CBCL},{0x28D71CBCL},{0x28D71CBCL}};
            struct S2 l_1064 = {0x0360L,{895,0xC6D2969CC07D30BCLL,0x9CC8E8D0L,0UL},0xDFFBL};
            int32_t l_1076 = 0x8CC4BA17L;
            int32_t *l_1092 = &g_338[1][2];
            int i;
            (*l_1057) = (((((l_1060[0] , g_360[g_494.f2]) | (l_1076 &= (safe_lshift_func_int8_t_s_s(((*g_860) = ((!(l_1064 , (safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((((g_636 , (safe_sub_func_uint8_t_u_u(((((((((0xED26L ^ (l_1064.f1.f0 = p_56.f0)) >= (safe_add_func_uint8_t_u_u((safe_div_func_int64_t_s_s((((*g_675) = (((void*)0 == &l_889) || (g_180 , (*l_1057)))) != (*l_1057)), p_55.f1)), l_1059))) , p_56) , 0x07L) >= 0x86L) && p_55.f1) <= (*l_1057)) != l_1075), p_54))) , (*g_356)) , p_56.f0) != 0xC2L), 249UL)), p_56.f2)))) ^ p_55.f2)), g_360[g_494.f2])))) , (*g_131)) , (*g_860)) != 0x5CL);
            if (p_54)
                continue;
            for (g_132.f3 = 0; (g_132.f3 <= 2); g_132.f3 += 1)
            {
                uint64_t *****l_1078 = &l_1077;
                uint32_t *l_1084 = &g_112;
                uint32_t *l_1085 = &g_112;
                int32_t l_1089 = 0x4C478189L;
                int32_t **l_1090 = &g_41;
                int32_t **l_1091[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1091[i] = &g_820[1][7][2];
                (*l_1078) = l_1077;
                l_1089 &= ((!g_837[g_494.f2][(g_494.f2 + 3)]) != (safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((l_1084 != l_1085) > 0x384CL), (l_1086[2][6] != g_253))), (+((*l_1057) = l_1088)))));
                l_1092 = ((*l_1090) = &l_836[0]);
            }
        }
    }
    else
    {
        int32_t **l_1093 = &g_820[0][8][2];
        (*l_1093) = &g_338[2][2];
    }
lbl_1100:
    ++l_1097;
    g_1104 = l_1101;
    return l_1107;
}







static union U6 func_59(struct S1 p_60, int16_t p_61, int32_t * p_62, struct S2 p_63)
{
    struct S1 *l_570 = &g_408[2][4];
    struct S1 **l_569 = &l_570;
    struct S1 ** const l_571 = &l_570;
    struct S2 *l_590[4] = {&g_591,&g_591,&g_591,&g_591};
    int32_t l_604 = 0xF09D56D5L;
    union U6 **l_611[2];
    uint16_t ***l_622 = (void*)0;
    int32_t l_683 = 0x3C75C63BL;
    union U3 l_703 = {0xC5E1D038L};
    int32_t *l_709 = &g_338[0][2];
    int32_t *l_710 = &g_154;
    int32_t *l_711 = &g_154;
    int32_t *l_712 = &l_604;
    int32_t *l_713 = &g_338[4][0];
    int32_t *l_714[4] = {&g_338[3][2],&g_338[3][2],&g_338[3][2],&g_338[3][2]};
    int32_t l_715 = 3L;
    uint32_t l_716 = 0xDBF30CDFL;
    union U3 *l_722[3];
    uint64_t ***l_732 = &g_355[2];
    uint32_t *l_781[3];
    uint32_t **l_780 = &l_781[0];
    union U6 l_821[4][7][8] = {{{{6UL},{18446744073709551609UL},{0x5C1A4265L},{1UL},{0UL},{0xA3C486DBL},{18446744073709551609UL},{0UL}},{{0x866DF81DL},{18446744073709551609UL},{18446744073709551612UL},{0xD3C9140BL},{0x5AE7CC3CL},{1UL},{0x5AE7CC3CL},{0xD3C9140BL}},{{0x2651BC47L},{0x866DF81DL},{0x2651BC47L},{18446744073709551614UL},{0xB4EF5EA3L},{0x61F19E74L},{0x4953AEBFL},{0UL}},{{0x3F5A94A5L},{18446744073709551606UL},{18446744073709551615UL},{0UL},{6UL},{18446744073709551610UL},{0xB4EF5EA3L},{2UL}},{{0x3F5A94A5L},{1UL},{18446744073709551611UL},{0x5C1A4265L},{0xB4EF5EA3L},{0xF93D82B8L},{0xF19F60BBL},{0xA3C486DBL}},{{0x2651BC47L},{0xD79F7612L},{18446744073709551606UL},{18446744073709551614UL},{0x5AE7CC3CL},{0UL},{18446744073709551615UL},{0xF93D82B8L}},{{0x866DF81DL},{0x5C1A4265L},{0x9B7BBA54L},{1UL},{0UL},{18446744073709551609UL},{0x2651BC47L},{0x2651BC47L}}},{{{6UL},{0x61F19E74L},{0xF19F60BBL},{0xF19F60BBL},{0x61F19E74L},{6UL},{7UL},{18446744073709551609UL}},{{1UL},{0xD3C9140BL},{2UL},{0UL},{18446744073709551609UL},{18446744073709551615UL},{0UL},{0x01DC2F55L}},{{18446744073709551610UL},{18446744073709551606UL},{6UL},{0UL},{18446744073709551611UL},{0x5C1A4265L},{0x563625CFL},{18446744073709551609UL}},{{18446744073709551609UL},{18446744073709551611UL},{18446744073709551614UL},{0xF19F60BBL},{18446744073709551615UL},{0x4953AEBFL},{18446744073709551611UL},{0x2651BC47L}},{{0xB4EF5EA3L},{18446744073709551610UL},{0xD79F7612L},{1UL},{18446744073709551614UL},{18446744073709551615UL},{18446744073709551610UL},{0xF93D82B8L}},{{18446744073709551615UL},{0xA3C486DBL},{0UL},{18446744073709551614UL},{0xF93D82B8L},{18446744073709551614UL},{0UL},{0xA3C486DBL}},{{0xD3C9140BL},{0x3F5A94A5L},{7UL},{0x5C1A4265L},{1UL},{18446744073709551614UL},{18446744073709551615UL},{2UL}}},{{{0UL},{7UL},{18446744073709551610UL},{0UL},{0xD3C9140BL},{18446744073709551615UL},{18446744073709551615UL},{0UL}},{{18446744073709551614UL},{0UL},{7UL},{18446744073709551614UL},{18446744073709551612UL},{0xB4EF5EA3L},{0UL},{0xD3C9140BL}},{{18446744073709551612UL},{0xB4EF5EA3L},{0UL},{0xD3C9140BL},{0x563625CFL},{0x866DF81DL},{18446744073709551610UL},{0UL}},{{0x3A33E890L},{0xF93D82B8L},{0xD79F7612L},{1UL},{0xF19F60BBL},{18446744073709551611UL},{18446744073709551611UL},{0xF19F60BBL}},{{18446744073709551612UL},{0x4953AEBFL},{0x4953AEBFL},{18446744073709551612UL},{0x5C1A4265L},{18446744073709551610UL},{0x01DC2F55L},{18446744073709551611UL}},{{0xA3C486DBL},{18446744073709551614UL},{18446744073709551611UL},{0xD3C9140BL},{18446744073709551609UL},{18446744073709551615UL},{0x9B7BBA54L},{18446744073709551615UL}},{{18446744073709551614UL},{18446744073709551614UL},{6UL},{1UL},{18446744073709551615UL},{18446744073709551610UL},{1UL},{0x2651BC47L}}},{{{18446744073709551609UL},{0x4953AEBFL},{18446744073709551606UL},{0xF93D82B8L},{0UL},{18446744073709551614UL},{0UL},{18446744073709551612UL}},{{18446744073709551610UL},{0xD79F7612L},{1UL},{18446744073709551614UL},{18446744073709551615UL},{18446744073709551610UL},{0xF93D82B8L},{0x5C1A4265L}},{{18446744073709551606UL},{0x2651BC47L},{0xA3C486DBL},{18446744073709551615UL},{0xA3C486DBL},{0x2651BC47L},{18446744073709551606UL},{1UL}},{{18446744073709551615UL},{0x3A33E890L},{18446744073709551614UL},{18446744073709551611UL},{6UL},{0x5C1A4265L},{0x2651BC47L},{0x61F19E74L}},{{0UL},{1UL},{0x5C1A4265L},{18446744073709551609UL},{6UL},{18446744073709551615UL},{0UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{0UL},{0x61F19E74L},{0xA3C486DBL},{0x4953AEBFL},{18446744073709551611UL},{0x3A33E890L}},{{18446744073709551606UL},{18446744073709551614UL},{0x5AE7CC3CL},{0UL},{18446744073709551615UL},{0xF93D82B8L},{7UL},{0xD3C9140BL}}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_611[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_722[i] = &g_723;
    for (i = 0; i < 3; i++)
        l_781[i] = (void*)0;
    for (g_132.f3 = 0; (g_132.f3 < (-14)); --g_132.f3)
    {
        int16_t l_556 = 0xB926L;
        uint8_t *l_557 = &g_253;
        uint8_t l_576 = 0xE5L;
        int32_t l_577 = 0xCC71C9F8L;
        int16_t *l_578 = &g_180.f0;
        struct S2 *l_592 = (void*)0;
        uint64_t *l_601 = &g_282;
        const uint16_t *l_615 = &g_72.f1.f3;
        const uint16_t **l_614 = &l_615;
        const uint16_t ***l_613 = &l_614;
        const uint32_t l_631 = 4294967293UL;
        union U6 l_640 = {0xC6AD54E3L};
        int32_t l_678[6] = {0x00C27812L,0x00C27812L,0x00C27812L,0x00C27812L,0x00C27812L,0x00C27812L};
        int i;
        if ((~((safe_add_func_int8_t_s_s(((((*l_557) = ((*g_100) | l_556)) > (safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((l_556 <= 0x0160L), ((*l_578) ^= (!(safe_mul_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(((l_577 = (safe_add_func_uint32_t_u_u((l_569 != l_571), ((safe_div_func_int8_t_s_s((l_576 == (l_576 != ((l_576 >= 0x08L) | 1UL))), p_61)) , g_217)))) || g_187), 0x29B6D16EL)) , p_63.f1.f2) , g_494.f2), (-1L))))))), 1))) <= l_556), 0xF1L)) >= p_63.f0)))
        {
            int32_t **l_579 = &g_41;
            int32_t l_580[9] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
            int32_t *l_581 = &l_580[5];
            int i;
            (*l_579) = &g_2;
            --g_582;
        }
        else
        {
            int64_t *l_595 = &g_187;
            union U3 l_600 = {-1L};
            int64_t *l_602 = &g_603;
            int32_t *l_605 = (void*)0;
            int32_t *l_606 = &g_338[4][2];
            union U5 l_612 = {5L};
            int32_t *l_624 = &g_132.f7;
            (*l_606) &= (safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((safe_sub_func_int64_t_s_s((l_577 = ((*l_595) |= ((((*g_100) = (*g_100)) > ((p_60 , l_590[1]) != (g_593 = l_592))) ^ (-1L)))), g_591.f2)))), (safe_mul_func_int8_t_s_s(((((*l_602) = ((((((l_600 , l_600.f0) > (l_601 == l_601)) == p_63.f1.f3) & 65531UL) ^ l_576) <= 0x2CL)) != l_604) , g_180.f0), g_132.f6))));
            (*l_606) = (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(p_63.f1.f1, (l_611[1] != (((l_612 , ((-6L) || ((*l_624) |= (((l_613 = (void*)0) != (void*)0) && (safe_mod_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(0x981AL, (0xACL >= ((g_132.f1 , l_622) != g_623)))), (*l_606))) >= 0x85L), 0xDF1DL)))))) < p_60.f0) , (void*)0)))), 0L));
            for (g_99 = 0; (g_99 < (-17)); g_99 = safe_sub_func_uint32_t_u_u(g_99, 2))
            {
                int32_t l_639 = 0xDC8159E9L;
                uint16_t **l_655 = &g_100;
                union U4 l_671 = {1L};
                int16_t *l_672 = &g_531;
                (*l_624) &= (g_187 | ((p_60.f3 ^= (((p_61 && ((safe_rshift_func_int8_t_s_u(0x97L, 0)) , g_629)) > g_591.f0) & (~3L))) , ((l_631 >= (((*l_602) ^= (safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((g_636 , (safe_div_func_uint16_t_u_u((65531UL == l_639), l_639))), g_494.f0)), 0x4450L))) & 0x9E287C57FE70DA60LL)) <= (*g_356))));
                if (l_639)
                {
                    return l_640;
                }
                else
                {
                    uint8_t l_643 = 1UL;
                    int64_t l_658 = 0x9F4EEF3B29737907LL;
                    if (((g_39.f2 |= ((safe_mul_func_int16_t_s_s(l_643, l_639)) | (((*l_606) , (g_40 , (((((*l_578) = (&p_60 == (*l_569))) >= 0L) >= (((void*)0 == g_646) <= l_639)) < 0xE816L))) || g_2))) <= 0xB5L))
                    {
                        struct S2 **l_649[5] = {&l_590[0],&l_590[0],&l_590[0],&l_590[0],&l_590[0]};
                        struct S2 ***l_648 = &l_649[1];
                        struct S2 **l_651 = &g_593;
                        struct S2 ***l_650 = &l_651;
                        uint16_t ****l_653 = &l_622;
                        uint16_t *****l_652[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_652[i] = &l_653;
                        (*l_650) = ((*l_648) = (g_636 , &g_593));
                        g_654 = &g_623;
                    }
                    else
                    {
                        uint16_t ***l_656 = (void*)0;
                        uint16_t ***l_657 = &l_655;
                        (*l_624) |= g_360[1];
                        (*l_657) = l_655;
                    }
                    (*l_606) = 0x9F462C48L;
                    (*l_606) = l_658;
                }
                for (g_112 = 0; (g_112 <= 3); g_112 += 1)
                {
                    int8_t l_661 = 0x7EL;
                    int16_t *l_674 = (void*)0;
                    int i, j;
                    (*l_606) = g_306[g_112][g_112];
                    l_661 = ((g_306[g_112][g_112] , ((safe_sub_func_uint16_t_u_u(1UL, p_61)) < g_306[g_112][g_112])) , g_72.f2);
                    for (l_661 = 0; (l_661 <= 3); l_661 += 1)
                    {
                        int16_t **l_673[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_673[i] = &l_578;
                        (*l_606) = (((*l_606) == ((safe_rshift_func_uint16_t_u_u((((safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((g_132.f1 , ((((g_40 , l_640.f4) & (l_661 < 65526UL)) ^ (~(l_671 , ((*l_624) &= (l_672 != (g_676 = (g_675 = (l_674 = &g_531)))))))) | p_63.f1.f0)), (-1L))), g_531)) < 0x11E864443D68CE56LL) && (-1L)), l_604)) >= l_604)) != 1UL);
                    }
                    (*l_606) ^= g_40.f0;
                }
            }
        }
        l_683 = (g_677 , (l_678[2] && (safe_div_func_int16_t_s_s((l_604 = (safe_sub_func_int32_t_s_s(0L, (((l_640.f3 <= 4294967294UL) ^ l_640.f3) && l_640.f4)))), 0xE544L))));
        for (g_594.f0 = 2; (g_594.f0 >= 0); g_594.f0 -= 1)
        {
            int32_t **l_684 = &g_41;
            int32_t *l_685 = &g_338[(g_594.f0 + 2)][g_594.f0];
            int32_t *l_686 = &l_678[2];
            int32_t *l_687[9][9] = {{(void*)0,(void*)0,&l_604,&l_604,(void*)0,(void*)0,(void*)0,&l_604,&l_604},{&g_2,&l_683,&l_683,&g_338[1][2],&l_683,&l_683,&g_2,&g_338[(g_594.f0 + 2)][g_594.f0],(void*)0},{&g_338[0][2],(void*)0,&g_338[0][2],(void*)0,(void*)0,&g_338[0][2],(void*)0,&g_338[0][2],(void*)0},{&g_338[4][0],&g_338[(g_594.f0 + 2)][g_594.f0],&l_683,(void*)0,&g_338[0][2],(void*)0,&l_683,&g_338[(g_594.f0 + 2)][g_594.f0],&g_338[4][0]},{&l_683,(void*)0,&l_604,(void*)0,&l_683,&l_683,(void*)0,&l_604,(void*)0},{&l_683,&g_338[1][2],(void*)0,&g_338[1][2],&g_338[0][2],&g_338[(g_594.f0 + 2)][g_594.f0],&g_338[0][2],&g_338[1][2],(void*)0},{&l_683,&l_683,(void*)0,&l_604,(void*)0,&l_683,&l_683,(void*)0,&l_604},{&g_338[4][0],&g_338[1][2],&g_338[4][0],&g_338[(g_594.f0 + 2)][g_594.f0],&l_683,(void*)0,&g_338[0][2],(void*)0,&l_683},{&g_338[0][2],(void*)0,(void*)0,&g_338[0][2],(void*)0,&g_338[0][2],(void*)0,(void*)0,&g_338[0][2]}};
            uint16_t l_688[6][10][2] = {{{0UL,65532UL},{0xCC57L,0x8F77L},{0UL,0x973AL},{0x2E4FL,0xF39EL},{0UL,0xBB6EL},{0UL,0xCC57L},{0x973AL,65531UL},{8UL,0xF39EL},{0UL,65527UL},{0xAB8EL,0UL}},{{0xD0B7L,0UL},{0x8F77L,8UL},{0xCC57L,1UL},{0x18B9L,0UL},{0x859FL,0x859FL},{0UL,9UL},{0UL,0x8F77L},{0xD920L,65535UL},{0xBB6EL,0xD920L},{65531UL,65535UL}},{{65531UL,0xD920L},{0xBB6EL,65535UL},{0xD920L,0x8F77L},{0UL,9UL},{0UL,0x859FL},{0x859FL,0UL},{0x18B9L,1UL},{0xCC57L,8UL},{0x8F77L,0UL},{0xD0B7L,0UL}},{{0xAB8EL,65527UL},{0UL,0xF39EL},{8UL,65531UL},{0x973AL,0xCC57L},{0UL,0xCC57L},{0x973AL,65531UL},{8UL,0xF39EL},{0UL,65527UL},{0xAB8EL,0UL},{0xD0B7L,0UL}},{{0x8F77L,8UL},{0xCC57L,1UL},{0x18B9L,0UL},{0x859FL,0x859FL},{0UL,9UL},{0UL,0x8F77L},{0xD920L,65535UL},{0xBB6EL,0xD920L},{65531UL,65535UL},{65531UL,0xD920L}},{{0xBB6EL,65535UL},{0xD920L,0x8F77L},{0UL,9UL},{0UL,0x859FL},{0x859FL,0UL},{0x18B9L,1UL},{0xCC57L,8UL},{0x8F77L,0UL},{0xD0B7L,0UL},{0xAB8EL,65527UL}}};
            int i, j, k;
            (*l_684) = &g_338[(g_594.f0 + 2)][g_594.f0];
            --l_688[0][7][0];
        }
        if (p_63.f1.f1)
            break;
    }
    (*l_709) = ((safe_mod_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((&g_675 == ((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((safe_lshift_func_int8_t_s_u(0x89L, 5)) , l_683) <= ((((l_703 , ((safe_lshift_func_uint8_t_u_u(l_683, 1)) , (safe_mod_func_uint32_t_u_u(g_591.f1.f1, l_604)))) <= l_604) <= ((0x869AAEF2L >= p_60.f2) > p_63.f1.f0)) < g_708)), p_63.f0)), (-7L))) , (void*)0)), l_683)), p_63.f1.f3)) && l_604);
    --l_716;
    for (g_64.f3 = (-4); (g_64.f3 >= 8); g_64.f3 = safe_add_func_int16_t_s_s(g_64.f3, 8))
    {
        union U3 *l_721 = &l_703;
        union U3 **l_724 = &l_721;
        int32_t l_735 = 0x024A97C6L;
        int64_t l_754 = 0x4E76D32132F5954DLL;
        int8_t **l_758 = (void*)0;
        struct S0 *l_774 = &g_132;
        uint32_t ***l_786 = &l_780;
        uint8_t *l_789[3];
        union U5 l_807 = {-1L};
        union U3 l_812 = {0L};
        int32_t **l_818 = (void*)0;
        int32_t *** const l_817 = &l_818;
        int32_t **l_819[4] = {&l_713,&l_713,&l_713,&l_713};
        int i;
        for (i = 0; i < 3; i++)
            l_789[i] = &g_582;
        (*l_724) = (l_722[0] = l_721);
        for (g_154 = 9; (g_154 == (-3)); g_154--)
        {
            const union U6 l_731[3][8][8] = {{{{0x0F32B31EL},{0UL},{0x354CA40CL},{0UL},{0x0F32B31EL},{0x354CA40CL},{18446744073709551613UL},{18446744073709551613UL}},{{0x77FBA968L},{0UL},{5UL},{5UL},{0UL},{0x77FBA968L},{18446744073709551611UL},{0UL}},{{18446744073709551613UL},{18446744073709551611UL},{5UL},{18446744073709551613UL},{5UL},{18446744073709551611UL},{18446744073709551613UL},{0x77FBA968L}},{{0UL},{0x0F32B31EL},{0x354CA40CL},{18446744073709551613UL},{18446744073709551613UL},{0x354CA40CL},{0x0F32B31EL},{0UL}},{{0x77FBA968L},{18446744073709551613UL},{18446744073709551611UL},{5UL},{18446744073709551613UL},{5UL},{18446744073709551611UL},{18446744073709551613UL}},{{0UL},{18446744073709551611UL},{0x77FBA968L},{0UL},{5UL},{5UL},{0UL},{0x77FBA968L}},{{18446744073709551613UL},{18446744073709551613UL},{0x354CA40CL},{0x0F32B31EL},{0UL},{0x354CA40CL},{0UL},{0x0F32B31EL}},{{0x77FBA968L},{0x0F32B31EL},{0x77FBA968L},{5UL},{0x0F32B31EL},{18446744073709551611UL},{18446744073709551611UL},{0x0F32B31EL}}},{{{0x0F32B31EL},{18446744073709551611UL},{18446744073709551611UL},{0x0F32B31EL},{5UL},{0x77FBA968L},{0x0F32B31EL},{0x77FBA968L}},{{0x0F32B31EL},{0UL},{0x354CA40CL},{0UL},{18446744073709551611UL},{18446744073709551613UL},{0x77FBA968L},{0x77FBA968L}},{{0x0C8C7ECDL},{5UL},{0x0BEAA045L},{0x0BEAA045L},{5UL},{0x0C8C7ECDL},{0x354CA40CL},{5UL}},{{0x77FBA968L},{0x354CA40CL},{0x0BEAA045L},{0x77FBA968L},{0x0BEAA045L},{0x354CA40CL},{0x77FBA968L},{0x0C8C7ECDL}},{{5UL},{18446744073709551611UL},{18446744073709551613UL},{0x77FBA968L},{0x77FBA968L},{18446744073709551613UL},{18446744073709551611UL},{5UL}},{{0x0C8C7ECDL},{0x77FBA968L},{0x354CA40CL},{0x0BEAA045L},{0x77FBA968L},{0x0BEAA045L},{0x354CA40CL},{0x77FBA968L}},{{5UL},{0x354CA40CL},{0x0C8C7ECDL},{5UL},{0x0BEAA045L},{0x0BEAA045L},{5UL},{0x0C8C7ECDL}},{{0x77FBA968L},{0x77FBA968L},{18446744073709551613UL},{18446744073709551611UL},{5UL},{18446744073709551613UL},{5UL},{18446744073709551611UL}}},{{{0x0C8C7ECDL},{18446744073709551611UL},{0x0C8C7ECDL},{0x0BEAA045L},{18446744073709551611UL},{0x354CA40CL},{0x354CA40CL},{18446744073709551611UL}},{{18446744073709551611UL},{0x354CA40CL},{0x354CA40CL},{18446744073709551611UL},{0x0BEAA045L},{0x0C8C7ECDL},{18446744073709551611UL},{0x0C8C7ECDL}},{{18446744073709551611UL},{5UL},{18446744073709551613UL},{5UL},{18446744073709551611UL},{18446744073709551613UL},{0x77FBA968L},{0x77FBA968L}},{{0x0C8C7ECDL},{5UL},{0x0BEAA045L},{0x0BEAA045L},{5UL},{0x0C8C7ECDL},{0x354CA40CL},{5UL}},{{0x77FBA968L},{0x354CA40CL},{0x0BEAA045L},{0x77FBA968L},{0x0BEAA045L},{0x354CA40CL},{0x77FBA968L},{0x0C8C7ECDL}},{{5UL},{18446744073709551611UL},{18446744073709551613UL},{0x77FBA968L},{0x77FBA968L},{18446744073709551613UL},{18446744073709551611UL},{5UL}},{{0x0C8C7ECDL},{0x77FBA968L},{0x354CA40CL},{0x0BEAA045L},{0x77FBA968L},{0x0BEAA045L},{0x354CA40CL},{0x77FBA968L}},{{5UL},{0x354CA40CL},{0x0C8C7ECDL},{5UL},{0x0BEAA045L},{0x0BEAA045L},{5UL},{0x0C8C7ECDL}}}};
            union U5 l_741 = {0x9F82L};
            uint8_t *l_742 = &g_253;
            int i, j, k;
            if ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((*g_675) = (*g_675)), ((l_731[1][3][0] , l_732) != l_732))), (-3L))))
            {
                uint8_t **l_743 = (void*)0;
                uint8_t *l_745 = &g_582;
                uint8_t **l_744 = &l_745;
                for (g_39.f0 = (-9); (g_39.f0 < 33); g_39.f0++)
                {
                    uint32_t l_736 = 4294967293UL;
                    l_736--;
                }
                (*l_712) = ((safe_div_func_uint16_t_u_u((*g_100), ((g_636 , l_741) , 0x5906L))) | ((((*g_131) , (l_735 > ((l_742 != ((*l_744) = &g_582)) >= (safe_lshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((p_60 , (*g_675)), 11)) > l_754), l_731[1][3][0].f4)), p_60.f3)), 15))))) || (-1L)) != 1UL));
            }
            else
            {
                union U6 l_755 = {0x2B94C48FL};
                return l_755;
            }
            for (g_594.f0 = 13; (g_594.f0 != 5); g_594.f0 = safe_sub_func_uint8_t_u_u(g_594.f0, 4))
            {
                union U3 *l_769 = &g_40;
                int32_t l_783 = 0L;
                union U6 l_784 = {0x94852975L};
                if (l_754)
                {
                    for (g_39.f4 = 0; (g_39.f4 <= 3); g_39.f4 += 1)
                    {
                        int8_t ***l_759 = (void*)0;
                        int8_t *l_761 = &g_128;
                        int8_t **l_760[8][9] = {{&l_761,&l_761,&l_761,&l_761,(void*)0,&l_761,&l_761,&l_761,&l_761},{&l_761,(void*)0,&l_761,(void*)0,&l_761,&l_761,(void*)0,&l_761,&l_761},{&l_761,(void*)0,&l_761,&l_761,(void*)0,&l_761,(void*)0,&l_761,&l_761},{&l_761,&l_761,&l_761,&l_761,(void*)0,&l_761,&l_761,(void*)0,&l_761},{&l_761,(void*)0,&l_761,&l_761,&l_761,&l_761,(void*)0,&l_761,&l_761},{&l_761,(void*)0,&l_761,&l_761,&l_761,(void*)0,(void*)0,(void*)0,(void*)0},{&l_761,&l_761,&l_761,&l_761,&l_761,&l_761,&l_761,&l_761,&l_761},{(void*)0,&l_761,&l_761,&l_761,&l_761,&l_761,&l_761,&l_761,&l_761}};
                        int i, j;
                        l_760[7][6] = l_758;
                    }
                }
                else
                {
                    union U3 *l_768 = (void*)0;
                    uint8_t ** const l_775 = &l_742;
                    uint32_t ***l_782 = &l_780;
                    for (g_99 = (-20); (g_99 > 5); ++g_99)
                    {
                        (*l_709) = l_731[1][3][0].f0;
                    }
                    (*l_713) = (safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((l_768 != l_769), (((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((((((void*)0 == l_774) || ((void*)0 != l_775)) || 0x4EL) <= (((((safe_div_func_int16_t_s_s((safe_mod_func_int8_t_s_s(l_735, 0x33L)), (-6L))) , p_63.f2) , (void*)0) != &g_237) && p_63.f2)), (*g_100))), p_61)) & g_39.f0) || 1UL))), (-2L)));
                    (*l_782) = l_780;
                    if (l_783)
                        break;
                }
                return l_784;
            }
        }
        (*l_711) = (6UL == (safe_unary_minus_func_int16_t_s((l_786 == (void*)0))));
        g_820[0][8][2] = (g_41 = ((safe_mod_func_uint8_t_u_u(((g_582 = (&l_703 != ((*l_724) = (*l_724)))) < (safe_lshift_func_uint8_t_u_s((++g_253), 5))), (safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((((+(p_60.f0 | (safe_mul_func_uint16_t_u_u(((p_60.f0 <= p_60.f1) < (safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((l_807 , (safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u((l_812 , (safe_add_func_int64_t_s_s((((safe_sub_func_uint64_t_u_u(((g_594 , l_817) == (void*)0), p_60.f3)) , (*l_710)) == p_61), p_60.f2))), (*g_356))), p_63.f1.f0))), 5)), 251UL))), p_63.f1.f0)))) || p_63.f1.f2) , (*l_713)), p_63.f1.f2)), (*l_710))), 3)))) , p_62));
    }
    return l_821[3][0][4];
}







static struct S2 func_66(const struct S2 p_67, int32_t * p_68, int32_t * p_69, union U6 p_70, union U6 p_71)
{
    uint16_t l_87[7];
    uint16_t *l_94 = &l_87[1];
    struct S1 l_97 = {1120,0xCCA842DFAD406D4ELL,0x3E5EB5CEL,65532UL};
    int16_t *l_98 = &g_99;
    uint16_t *l_102 = &g_39.f4;
    uint16_t **l_101 = &l_102;
    int32_t *l_550 = &g_132.f7;
    int i;
    for (i = 0; i < 7; i++)
        l_87[i] = 1UL;
    (*l_550) = func_83((safe_rshift_func_int16_t_s_u((l_87[1] && (safe_div_func_int64_t_s_s(((safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(((*l_94) |= 65535UL), 2)), (safe_div_func_uint32_t_u_u(g_72.f1.f0, 1L)))) != ((l_97 , ((*l_98) = g_39.f4)) & (g_100 == ((*l_101) = l_98)))), p_70.f0))), l_97.f0)));
    return g_72;
}







static int32_t func_83(int32_t p_84)
{
    uint8_t l_108 = 2UL;
    int32_t l_114[6][3] = {{7L,7L,0x8E7D4845L},{0x391AF2E2L,0x391AF2E2L,7L},{0x391AF2E2L,0x391AF2E2L,7L},{0x391AF2E2L,0x391AF2E2L,7L},{0x391AF2E2L,0x391AF2E2L,7L},{0x391AF2E2L,0x391AF2E2L,7L}};
    struct S0 *l_135[2];
    union U4 l_152 = {0L};
    uint32_t * const l_158 = &g_112;
    int8_t *l_214 = &g_128;
    int8_t *l_215 = (void*)0;
    uint64_t l_232 = 0xA6BD1659E81E94F0LL;
    struct S1 *l_236 = &g_64;
    struct S1 **l_235 = &l_236;
    uint16_t l_336 = 0x4BF7L;
    uint32_t l_404 = 0xD5959697L;
    union U6 l_427 = {0x3644F2DEL};
    int64_t l_440 = 0x0B7F6A0D4CFEDF92LL;
    uint32_t l_484 = 2UL;
    int16_t l_530 = 0x26D7L;
    int16_t l_532 = 0x7D67L;
    const uint16_t **l_540 = (void*)0;
    struct S1 l_543 = {347,0x206B796BEC2E1412LL,0xC2887185L,0UL};
    const struct S2 *l_549[3];
    const struct S2 **l_548 = &l_549[0];
    int i, j;
    for (i = 0; i < 2; i++)
        l_135[i] = &g_132;
    for (i = 0; i < 3; i++)
        l_549[i] = &g_72;
lbl_522:
    for (g_39.f0 = 0; (g_39.f0 <= 15); ++g_39.f0)
    {
        uint32_t l_120 = 4294967295UL;
        struct S2 l_123 = {-4L,{-2652,18446744073709551615UL,-1L,1UL},65534UL};
        uint16_t *l_124 = &g_39.f4;
        int32_t l_129 = 2L;
        const struct S0 *l_133 = (void*)0;
        struct S0 *l_134 = &g_132;
        union U5 l_174 = {0x80F0L};
        int32_t l_248 = 0x1B2FE3C2L;
        int8_t l_341 = 1L;
        uint64_t ***l_364 = &g_363;
        struct S1 *l_389[6];
        int64_t l_392[1][9] = {{(-5L),0x269C1217C967F03ELL,(-5L),0x269C1217C967F03ELL,(-5L),0x269C1217C967F03ELL,(-5L),0x269C1217C967F03ELL,(-5L)}};
        int32_t l_394 = 0xAA431C95L;
        int32_t l_395 = (-7L);
        int32_t l_398 = 0x325F45BFL;
        int32_t l_400 = 0x503DEE2EL;
        int32_t l_401 = 0xFBFECCAFL;
        int32_t l_402 = 0xD1E7459AL;
        int32_t l_403[9];
        uint32_t l_433 = 18446744073709551609UL;
        uint8_t l_441 = 248UL;
        union U4 l_445[1] = {{1L}};
        union U6 *l_471[6][1][1];
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_389[i] = &g_64;
        for (i = 0; i < 9; i++)
            l_403[i] = 0x1C60D8EEL;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_471[i][j][k] = &g_39;
            }
        }
    }
    for (l_440 = (-10); (l_440 <= 27); l_440 = safe_add_func_uint16_t_u_u(l_440, 7))
    {
        int32_t *l_523 = &g_338[4][2];
        int32_t *l_524 = &l_114[2][0];
        int32_t *l_525[1];
        int8_t l_526 = (-4L);
        uint16_t l_527 = 1UL;
        uint32_t l_533 = 0x97CD431FL;
        const uint16_t ***l_541 = &l_540;
        int i;
        for (i = 0; i < 1; i++)
            l_525[i] = &g_338[0][1];
        for (g_494.f0 = 0; (g_494.f0 < 14); g_494.f0++)
        {
            if (g_39.f0)
                goto lbl_522;
        }
        l_527++;
        l_533++;
        (*l_524) = ((safe_add_func_uint32_t_u_u(6UL, (18446744073709551615UL && (safe_rshift_func_uint8_t_u_u((((*l_541) = l_540) != &g_100), (((!(g_72 , (l_543 , (&g_112 != &g_514)))) & ((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((-2L), p_84)), (*l_524))) <= l_232)) < 4L)))))) & p_84);
    }
    (*l_548) = &g_72;
    return p_84;
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
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_28[i][j], "g_28[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_39.f0, "g_39.f0", print_hash_value);
    transparent_crc(g_39.f1, "g_39.f1", print_hash_value);
    transparent_crc(g_39.f2, "g_39.f2", print_hash_value);
    transparent_crc(g_39.f3, "g_39.f3", print_hash_value);
    transparent_crc(g_39.f4, "g_39.f4", print_hash_value);
    transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_64.f1, "g_64.f1", print_hash_value);
    transparent_crc(g_64.f2, "g_64.f2", print_hash_value);
    transparent_crc(g_64.f3, "g_64.f3", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    transparent_crc(g_72.f1.f0, "g_72.f1.f0", print_hash_value);
    transparent_crc(g_72.f1.f1, "g_72.f1.f1", print_hash_value);
    transparent_crc(g_72.f1.f2, "g_72.f1.f2", print_hash_value);
    transparent_crc(g_72.f1.f3, "g_72.f1.f3", print_hash_value);
    transparent_crc(g_72.f2, "g_72.f2", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_132.f0, "g_132.f0", print_hash_value);
    transparent_crc(g_132.f1, "g_132.f1", print_hash_value);
    transparent_crc(g_132.f2, "g_132.f2", print_hash_value);
    transparent_crc(g_132.f3, "g_132.f3", print_hash_value);
    transparent_crc(g_132.f4, "g_132.f4", print_hash_value);
    transparent_crc(g_132.f5, "g_132.f5", print_hash_value);
    transparent_crc(g_132.f6, "g_132.f6", print_hash_value);
    transparent_crc(g_132.f7, "g_132.f7", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_180.f0, "g_180.f0", print_hash_value);
    transparent_crc(g_180.f2, "g_180.f2", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_294[i], "g_294[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_306[i][j], "g_306[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_338[i][j], "g_338[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_360[i], "g_360[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_408[i][j].f0, "g_408[i][j].f0", print_hash_value);
            transparent_crc(g_408[i][j].f1, "g_408[i][j].f1", print_hash_value);
            transparent_crc(g_408[i][j].f2, "g_408[i][j].f2", print_hash_value);
            transparent_crc(g_408[i][j].f3, "g_408[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_494.f0, "g_494.f0", print_hash_value);
    transparent_crc(g_494.f1, "g_494.f1", print_hash_value);
    transparent_crc(g_494.f2, "g_494.f2", print_hash_value);
    transparent_crc(g_494.f3, "g_494.f3", print_hash_value);
    transparent_crc(g_494.f4, "g_494.f4", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    transparent_crc(g_591.f0, "g_591.f0", print_hash_value);
    transparent_crc(g_591.f1.f0, "g_591.f1.f0", print_hash_value);
    transparent_crc(g_591.f1.f1, "g_591.f1.f1", print_hash_value);
    transparent_crc(g_591.f1.f2, "g_591.f1.f2", print_hash_value);
    transparent_crc(g_591.f1.f3, "g_591.f1.f3", print_hash_value);
    transparent_crc(g_591.f2, "g_591.f2", print_hash_value);
    transparent_crc(g_594.f0, "g_594.f0", print_hash_value);
    transparent_crc(g_594.f1.f0, "g_594.f1.f0", print_hash_value);
    transparent_crc(g_594.f1.f1, "g_594.f1.f1", print_hash_value);
    transparent_crc(g_594.f1.f2, "g_594.f1.f2", print_hash_value);
    transparent_crc(g_594.f1.f3, "g_594.f1.f3", print_hash_value);
    transparent_crc(g_594.f2, "g_594.f2", print_hash_value);
    transparent_crc(g_603, "g_603", print_hash_value);
    transparent_crc(g_629, "g_629", print_hash_value);
    transparent_crc(g_636.f0, "g_636.f0", print_hash_value);
    transparent_crc(g_636.f1, "g_636.f1", print_hash_value);
    transparent_crc(g_636.f2, "g_636.f2", print_hash_value);
    transparent_crc(g_677.f0, "g_677.f0", print_hash_value);
    transparent_crc(g_677.f2, "g_677.f2", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    transparent_crc(g_723.f0, "g_723.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_837[i][j], "g_837[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_888, "g_888", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_899[i].f0, "g_899[i].f0", print_hash_value);
        transparent_crc(g_899[i].f1.f0, "g_899[i].f1.f0", print_hash_value);
        transparent_crc(g_899[i].f1.f1, "g_899[i].f1.f1", print_hash_value);
        transparent_crc(g_899[i].f1.f2, "g_899[i].f1.f2", print_hash_value);
        transparent_crc(g_899[i].f1.f3, "g_899[i].f1.f3", print_hash_value);
        transparent_crc(g_899[i].f2, "g_899[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_953[i].f0, "g_953[i].f0", print_hash_value);
        transparent_crc(g_953[i].f1, "g_953[i].f1", print_hash_value);
        transparent_crc(g_953[i].f2, "g_953[i].f2", print_hash_value);
        transparent_crc(g_953[i].f3, "g_953[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_994[i], "g_994[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1054, "g_1054", print_hash_value);
    transparent_crc(g_1180, "g_1180", print_hash_value);
    transparent_crc(g_1299, "g_1299", print_hash_value);
    transparent_crc(g_1441, "g_1441", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1446[i][j][k].f0, "g_1446[i][j][k].f0", print_hash_value);
                transparent_crc(g_1446[i][j][k].f1, "g_1446[i][j][k].f1", print_hash_value);
                transparent_crc(g_1446[i][j][k].f2, "g_1446[i][j][k].f2", print_hash_value);
                transparent_crc(g_1446[i][j][k].f3, "g_1446[i][j][k].f3", print_hash_value);
                transparent_crc(g_1446[i][j][k].f4, "g_1446[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1641[i][j], "g_1641[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1646, "g_1646", print_hash_value);
    transparent_crc(g_1751, "g_1751", print_hash_value);
    transparent_crc(g_1787.f0, "g_1787.f0", print_hash_value);
    transparent_crc(g_1787.f2, "g_1787.f2", print_hash_value);
    transparent_crc(g_1806, "g_1806", print_hash_value);
    transparent_crc(g_1854, "g_1854", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1911[i], "g_1911[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
