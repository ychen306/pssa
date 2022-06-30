// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 4AF9EEE2
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
   const uint32_t f0;
};

union U1 {
   uint32_t f0;
   unsigned f1 : 14;
   unsigned f2 : 14;
   int32_t f3;
};

union U2 {
   int8_t f0;
   int32_t f1;
   uint16_t f2;
   int8_t * f3;
};


static int64_t g_2[2] = {0x63F9E923E64F1479LL,0x63F9E923E64F1479LL};
static uint8_t g_4 = 0x8EL;
static int32_t g_50 = 5L;
static int32_t g_53 = 4L;
static int8_t g_60 = 0x18L;
static int8_t *g_59 = &g_60;
static int32_t g_75 = 9L;
static union U1 g_85[3] = {{0xC59AE0A1L},{0xC59AE0A1L},{0xC59AE0A1L}};
static int32_t g_113 = 0xE338FB5AL;
static int16_t g_114 = 0L;
static uint8_t g_115 = 0x0DL;
static int8_t g_146 = (-7L);
static int8_t *g_145 = &g_146;
static uint64_t g_167 = 0x6E07A68DE422643FLL;
static uint32_t g_174 = 0x87792124L;
static uint8_t g_177[6][2] = {{0x32L,0x32L},{0x32L,0x32L},{0x32L,0x32L},{0x32L,0x32L},{0x32L,0x32L},{0x32L,0x32L}};
static uint16_t g_188 = 0xEC83L;
static uint16_t *g_187[4][9] = {{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188}};
static uint64_t g_210[3][9] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
static uint32_t g_262 = 0x5E379BEFL;
static int32_t *g_271 = (void*)0;
static int32_t **g_270 = &g_271;
static int8_t **g_279 = &g_145;
static int8_t ***g_278 = &g_279;
static union U0 **g_315 = (void*)0;
static uint32_t **g_325 = (void*)0;
static union U0 g_333 = {0x13919C1DL};
static const int32_t g_338[7][5] = {{0xA92CA923L,1L,2L,1L,0xA92CA923L},{0x2BE24FA4L,0xF1FD500BL,0x409AEBDDL,0xA92CA923L,0xCD62B2E0L},{0x2BE24FA4L,0xCD62B2E0L,0xFBB5E838L,(-1L),(-1L)},{0xA92CA923L,0x09112D69L,0xA92CA923L,0xF1FD500BL,0xCD62B2E0L},{0xC616B5F8L,(-1L),0xCD62B2E0L,0xF1FD500BL,0xA92CA923L},{0xCD62B2E0L,0xFBB5E838L,(-1L),(-1L),0xFBB5E838L},{0xFBB5E838L,2L,0xCD62B2E0L,0xA92CA923L,0x409AEBDDL}};
static int16_t g_360[9][6] = {{3L,0x3422L,0x1DB8L,0L,0xC3CCL,1L},{(-1L),0L,0xBCABL,(-7L),0xBCABL,0L},{(-7L),0xBCABL,0L,(-1L),0xF8B5L,1L},{0L,0x1DB8L,0x3422L,3L,0xEA10L,0x3B02L},{0xEA10L,0x1DB8L,0L,0x3422L,0xF8B5L,(-10L)},{(-1L),0xBCABL,0xC3CCL,0xC3CCL,0xBCABL,(-1L)},{1L,0L,3L,(-10L),0xC3CCL,(-1L)},{(-9L),0x3422L,1L,1L,0L,0L},{(-9L),0L,1L,(-10L),0x1DB8L,0L}};
static uint32_t g_361 = 0UL;
static int16_t *g_403 = &g_114;
static int16_t **g_402 = &g_403;
static const int32_t *g_426 = &g_53;
static const int16_t g_477 = 0x4CD1L;
static union U2 g_478 = {0x2AL};
static uint8_t g_555 = 0x88L;
static uint16_t **g_642 = &g_187[3][4];
static uint16_t ***g_641 = &g_642;
static union U1 *g_668 = &g_85[2];
static union U1 ** const g_667[3][2][4] = {{{&g_668,&g_668,&g_668,&g_668},{&g_668,&g_668,(void*)0,&g_668}},{{(void*)0,&g_668,(void*)0,&g_668},{&g_668,&g_668,&g_668,&g_668}},{{&g_668,&g_668,(void*)0,&g_668},{(void*)0,&g_668,(void*)0,&g_668}}};
static int64_t g_686 = 0xC0F2F5F294660D6DLL;
static int32_t g_687 = (-8L);
static int32_t g_691 = 0xBD2CCAB8L;
static int8_t g_692 = 0xC7L;
static int64_t g_694 = (-5L);
static int8_t g_696 = 1L;
static int32_t g_698[2] = {0x500940FAL,0x500940FAL};
static uint32_t g_712 = 18446744073709551615UL;
static const union U0 *g_724 = (void*)0;
static const union U0 **g_723 = &g_724;
static const union U0 ***g_722 = &g_723;
static union U0 ***g_787 = &g_315;
static union U0 ****g_786 = &g_787;
static uint64_t g_794[8][8] = {{0x93160947BDF291EALL,0xE5CF1017E2D3E6CDLL,0x93160947BDF291EALL,0x93160947BDF291EALL,0xE5CF1017E2D3E6CDLL,0x93160947BDF291EALL,0x93160947BDF291EALL,0xE5CF1017E2D3E6CDLL},{0xE5CF1017E2D3E6CDLL,0x93160947BDF291EALL,0x93160947BDF291EALL,0xE5CF1017E2D3E6CDLL,0x93160947BDF291EALL,0x93160947BDF291EALL,0xE5CF1017E2D3E6CDLL,0x93160947BDF291EALL},{0xE5CF1017E2D3E6CDLL,0xE5CF1017E2D3E6CDLL,0x5C64266B1C54679BLL,0xE5CF1017E2D3E6CDLL,0xE5CF1017E2D3E6CDLL,0x5C64266B1C54679BLL,0xE5CF1017E2D3E6CDLL,0xE5CF1017E2D3E6CDLL},{0x93160947BDF291EALL,0xE5CF1017E2D3E6CDLL,0x93160947BDF291EALL,0x93160947BDF291EALL,0xE5CF1017E2D3E6CDLL,0x93160947BDF291EALL,0x93160947BDF291EALL,0xE5CF1017E2D3E6CDLL},{0xE5CF1017E2D3E6CDLL,0x93160947BDF291EALL,0x93160947BDF291EALL,0xE5CF1017E2D3E6CDLL,0x93160947BDF291EALL,0x93160947BDF291EALL,0xE5CF1017E2D3E6CDLL,0x93160947BDF291EALL},{0xE5CF1017E2D3E6CDLL,0xE5CF1017E2D3E6CDLL,0xE5CF1017E2D3E6CDLL,0x93160947BDF291EALL,0x93160947BDF291EALL,0xE5CF1017E2D3E6CDLL,0x93160947BDF291EALL,0x93160947BDF291EALL},{0x5C64266B1C54679BLL,0x93160947BDF291EALL,0x5C64266B1C54679BLL,0x5C64266B1C54679BLL,0x93160947BDF291EALL,0x5C64266B1C54679BLL,0x5C64266B1C54679BLL,0x93160947BDF291EALL},{0x93160947BDF291EALL,0x5C64266B1C54679BLL,0x5C64266B1C54679BLL,0x93160947BDF291EALL,0x5C64266B1C54679BLL,0x5C64266B1C54679BLL,0x93160947BDF291EALL,0x5C64266B1C54679BLL}};
static int16_t ***g_831 = &g_402;
static int16_t ****g_830 = &g_831;
static uint8_t *g_920[5][2] = {{&g_4,(void*)0},{&g_4,(void*)0},{&g_4,(void*)0},{&g_4,(void*)0},{&g_4,(void*)0}};
static uint16_t * const *g_1036 = &g_187[3][4];
static uint16_t * const **g_1035 = &g_1036;
static uint16_t g_1094[8][1] = {{0x55DFL},{0xDA01L},{0x55DFL},{0xDA01L},{0x55DFL},{0xDA01L},{0x55DFL},{0xDA01L}};
static uint32_t g_1119 = 0xC5DAEEF3L;
static uint8_t g_1134 = 0x7EL;
static const uint64_t g_1196[4][4] = {{0x39249E0E2F9CC3E5LL,0x39249E0E2F9CC3E5LL,0x6320CE3D0FF947C1LL,0x39249E0E2F9CC3E5LL},{0x39249E0E2F9CC3E5LL,0UL,0UL,0x39249E0E2F9CC3E5LL},{0UL,0x39249E0E2F9CC3E5LL,0UL,0UL},{0x39249E0E2F9CC3E5LL,0x39249E0E2F9CC3E5LL,0x6320CE3D0FF947C1LL,0x39249E0E2F9CC3E5LL}};
static union U1 **g_1209 = &g_668;
static union U1 ***g_1208[3] = {&g_1209,&g_1209,&g_1209};
static int32_t g_1226 = 0x6AE04E48L;
static uint32_t g_1295 = 0x7FAA864BL;
static const union U0 g_1376 = {0x4F24D4D1L};
static uint32_t ***g_1433 = &g_325;
static uint32_t *** const *g_1432 = &g_1433;
static uint16_t g_1532 = 1UL;
static int32_t g_1557 = 0x5E3C872AL;
static uint32_t g_1559 = 0x0782AB2DL;
static int64_t g_1592 = 0x88C98AF23081D890LL;
static const uint32_t *g_1613[2] = {&g_85[2].f0,&g_85[2].f0};
static uint64_t g_1659 = 0x9669630ACC0EE892LL;
static uint16_t g_1663 = 0UL;
static uint16_t g_1715 = 0x6BD2L;
static union U0 ** const **g_1742 = (void*)0;
static union U0 ** const ** const *g_1741 = &g_1742;
static union U0 *g_1751 = &g_333;
static int64_t g_1800 = (-8L);
static uint32_t g_1801 = 18446744073709551615UL;
static int8_t * const *g_1810 = &g_59;
static int8_t * const **g_1809 = &g_1810;
static int8_t * const ***g_1808 = &g_1809;
static int8_t g_1907 = (-1L);
static uint32_t g_1962 = 0x552398C8L;
static int64_t g_2036 = (-6L);
static uint32_t g_2038 = 2UL;
static uint16_t ****g_2089[6][3][10] = {{{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641},{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641},{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641}},{{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641},{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641},{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641}},{{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641},{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641},{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641}},{{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641},{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641},{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641}},{{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641},{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641},{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641}},{{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641},{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641},{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641}}};
static uint16_t *****g_2088 = &g_2089[3][1][8];
static uint8_t g_2116[8] = {0x42L,0x42L,0x42L,0x42L,0x42L,0x42L,0x42L,0x42L};
static int32_t g_2155 = 1L;
static int16_t g_2157 = 0L;
static int32_t g_2159 = (-5L);
static int32_t g_2186 = 0L;
static const union U1 g_2194 = {0x05DDA21DL};
static int32_t g_2240 = 1L;
static int8_t g_2241[7][4][8] = {{{(-1L),6L,0x92L,5L,0x9EL,(-3L),6L,6L},{6L,(-2L),6L,0x47L,0x58L,0L,6L,0x0EL},{(-2L),4L,0x92L,0x6EL,0x33L,0L,5L,0x28L},{4L,(-2L),0x9BL,(-1L),0x33L,(-3L),0x6EL,(-2L)}},{{(-2L),6L,0x0EL,(-1L),0x58L,0x33L,0x6BL,0x28L},{6L,(-1L),0x0EL,0x6EL,0x9EL,0x9EL,0x6EL,0x0EL},{(-1L),(-1L),0x9BL,0x47L,0xF5L,0x33L,5L,6L},{(-1L),6L,0x92L,5L,0x9EL,(-3L),6L,6L}},{{6L,(-2L),6L,0x47L,0x58L,0L,6L,0x0EL},{(-2L),4L,0x92L,0x6EL,0x33L,0L,5L,0x28L},{4L,(-2L),0x9BL,(-1L),0x33L,(-3L),0x6EL,(-2L)},{(-2L),6L,0x0EL,(-1L),0x58L,0x33L,0x6BL,0x28L}},{{6L,(-1L),0x0EL,0x6EL,0x9EL,0x9EL,0x6EL,0x0EL},{(-1L),(-1L),0x9BL,0x47L,0xF5L,0x33L,5L,6L},{(-1L),6L,0x92L,5L,0x9EL,(-3L),6L,6L},{6L,(-2L),6L,0x47L,0x58L,0L,6L,0x0EL}},{{(-2L),4L,0x92L,0x6EL,(-3L),0xFEL,0x6BL,0x0EL},{(-3L),6L,6L,6L,(-3L),0x9EL,5L,0x92L},{6L,4L,(-2L),6L,0xF5L,(-3L),0L,0x0EL},{4L,3L,(-2L),5L,0x58L,0x58L,5L,(-2L)}},{{3L,3L,6L,0x6EL,0L,(-3L),0x6BL,0x5AL},{3L,4L,0x9BL,0x6BL,0x58L,0x9EL,0x47L,0x5AL},{4L,6L,0x5AL,0x6EL,0xF5L,0xFEL,0x47L,(-2L)},{6L,(-3L),0x9BL,5L,(-3L),0xFEL,0x6BL,0x0EL}},{{(-3L),6L,6L,6L,(-3L),0x9EL,5L,0x92L},{6L,4L,(-2L),6L,0xF5L,(-3L),0L,0x0EL},{4L,3L,(-2L),5L,0x58L,0x58L,5L,(-2L)},{3L,3L,6L,0x6EL,0L,(-3L),0x6BL,0x5AL}}};
static uint32_t g_2242[3][1][3] = {{{1UL,1UL,1UL}},{{1UL,1UL,1UL}},{{1UL,1UL,1UL}}};
static uint32_t ** const *g_2249 = &g_325;
static uint32_t ** const **g_2248 = &g_2249;
static uint16_t g_2256 = 2UL;
static union U1 *** const *g_2291[3] = {&g_1208[2],&g_1208[2],&g_1208[2]};
static union U1 *** const ** const g_2290 = &g_2291[2];
static union U1 *** const **g_2292 = &g_2291[2];
static int8_t ****g_2305 = &g_278;
static int8_t *****g_2304 = &g_2305;
static uint32_t *g_2327 = &g_1295;
static union U1 ***g_2348 = &g_1209;
static union U1 **** const g_2347 = &g_2348;
static union U1 **** const *g_2346 = &g_2347;
static uint64_t g_2382 = 18446744073709551615UL;
static const union U2 *g_2388 = &g_478;
static int16_t g_2444[1] = {8L};
static int32_t g_2445 = 1L;
static uint16_t g_2446 = 0xC6B7L;
static uint64_t g_2451 = 0x1AFCC04E2530B7DALL;
static const uint32_t ***g_2456 = (void*)0;
static int32_t g_2479[2][4] = {{(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L)}};
static uint32_t ****g_2492 = &g_1433;
static uint32_t *****g_2491[9] = {&g_2492,&g_2492,&g_2492,&g_2492,&g_2492,&g_2492,&g_2492,&g_2492,&g_2492};
static uint16_t g_2496 = 0UL;
static uint8_t g_2501 = 0x16L;
static int32_t g_2509 = 0x3AA6B96DL;
static uint16_t g_2510 = 0x6D08L;
static int16_t ***g_2555 = &g_402;
static uint16_t g_2605[7][5] = {{0x2F63L,0x2F63L,0x2F63L,0x2F63L,0x2F63L},{0UL,0UL,0UL,0UL,0UL},{0x2F63L,0x2F63L,0x2F63L,0x2F63L,0x2F63L},{0UL,0UL,0UL,0UL,0UL},{0x2F63L,0x2F63L,0x2F63L,0x2F63L,0x2F63L},{0UL,0UL,0UL,0UL,0UL},{0x2F63L,0x2F63L,0x2F63L,0x2F63L,0x2F63L}};
static int64_t *g_2620[3] = {&g_1592,&g_1592,&g_1592};
static uint8_t **g_2624[8][7] = {{(void*)0,&g_920[3][1],(void*)0,(void*)0,&g_920[3][1],&g_920[3][1],(void*)0},{&g_920[1][1],&g_920[3][1],&g_920[1][1],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_920[3][1],(void*)0,(void*)0,&g_920[3][1],&g_920[3][1],(void*)0},{&g_920[1][1],&g_920[3][1],&g_920[1][1],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_920[3][1],(void*)0,&g_920[3][1],&g_920[3][1],&g_920[3][1],&g_920[3][1]},{&g_920[1][1],&g_920[0][0],&g_920[1][1],(void*)0,&g_920[3][1],&g_920[3][1],(void*)0},{(void*)0,&g_920[3][1],(void*)0,&g_920[3][1],&g_920[3][1],&g_920[3][1],&g_920[3][1]},{&g_920[1][1],&g_920[0][0],&g_920[1][1],(void*)0,&g_920[3][1],&g_920[3][1],(void*)0}};
static uint8_t ***g_2623 = &g_2624[1][1];



static int32_t func_1(void);
static int32_t func_7(int32_t p_8, int32_t p_9, union U0 p_10, int8_t * p_11);
static uint16_t func_20(union U1 p_21, int8_t * p_22);
static union U1 func_23(int16_t p_24);
static uint64_t func_25(int8_t * p_26, int8_t p_27, int8_t p_28, int8_t * p_29);
static int8_t * func_30(union U0 p_31);
static int16_t func_39(int8_t * p_40, const int8_t * const p_41);
static int8_t * func_42(int8_t * p_43, int8_t * p_44, int8_t * p_45, int8_t * p_46);
static int8_t * func_47(union U0 p_48);
static int32_t func_61(int32_t p_62, int8_t * const p_63, int16_t p_64);
# 188 "<stdin>"
static int32_t func_1(void)
{
    int16_t l_3[5] = {0x81CEL,0x81CEL,0x81CEL,0x81CEL,0x81CEL};
    union U0 l_32 = {0x00547507L};
    int16_t l_1046 = 0x2FC3L;
    int8_t *l_1906 = &g_1907;
    int32_t l_1909 = (-6L);
    const int32_t **l_2339 = (void*)0;
    union U1 ****l_2345 = &g_1208[0];
    union U1 **** const *l_2344[3];
    uint16_t l_2366 = 8UL;
    uint16_t l_2381 = 0x52C3L;
    int32_t l_2410 = 5L;
    int32_t l_2411[7];
    uint32_t *****l_2490 = (void*)0;
    const union U0 *l_2561 = (void*)0;
    int i;
    for (i = 0; i < 3; i++)
        l_2344[i] = &l_2345;
    for (i = 0; i < 7; i++)
        l_2411[i] = 0x6B5A11F4L;
    g_4--;
    return g_177[2][1];
}







static int32_t func_7(int32_t p_8, int32_t p_9, union U0 p_10, int8_t * p_11)
{
    union U0 *l_1919 = (void*)0;
    int32_t l_1920 = 0xB4F33D53L;
    int16_t * const l_1942 = &g_360[1][4];
    int32_t l_1947 = 0xDBBFF11DL;
    int32_t l_1950 = (-4L);
    int32_t l_1951 = 1L;
    int32_t l_1958 = 0x96822DF6L;
    int32_t l_1960 = 0xED32C091L;
    const int8_t ****l_1997 = (void*)0;
    union U1 ** const *l_2003 = &g_667[1][0][3];
    union U2 l_2007[10][10][2] = {{{{0x35L},{6L}},{{6L},{6L}},{{0x35L},{0x69L}},{{-10L},{-9L}},{{0x5BL},{0x35L}},{{-6L},{0x5BL}},{{0L},{-1L}},{{0L},{0x5BL}},{{-6L},{0x35L}},{{0x5BL},{-9L}}},{{{-10L},{0x69L}},{{0x35L},{6L}},{{6L},{6L}},{{0x35L},{0x69L}},{{-10L},{-9L}},{{0x5BL},{0x35L}},{{-6L},{0x5BL}},{{0L},{-1L}},{{0L},{0x5BL}},{{-6L},{0x35L}}},{{{0x5BL},{-9L}},{{-10L},{0x69L}},{{0x35L},{6L}},{{6L},{6L}},{{0x35L},{0x69L}},{{-10L},{-9L}},{{0x5BL},{0x35L}},{{-6L},{0x5BL}},{{0L},{-1L}},{{0L},{0x5BL}}},{{{-6L},{0x35L}},{{0x5BL},{-9L}},{{-10L},{0x69L}},{{0x35L},{6L}},{{6L},{6L}},{{0x35L},{0x69L}},{{-10L},{-9L}},{{0x5BL},{0x35L}},{{-6L},{0x5BL}},{{0L},{-1L}}},{{{0L},{0x5BL}},{{-6L},{0x35L}},{{0x5BL},{-9L}},{{-10L},{0x69L}},{{0x35L},{6L}},{{6L},{6L}},{{0x35L},{0x69L}},{{-10L},{-9L}},{{0x5BL},{0x35L}},{{-6L},{0x5BL}}},{{{0L},{-1L}},{{0L},{0x5BL}},{{-6L},{0x35L}},{{0x5BL},{-9L}},{{-10L},{0x69L}},{{0x35L},{6L}},{{6L},{6L}},{{0x35L},{0x69L}},{{-10L},{-9L}},{{0x5BL},{0x35L}}},{{{-6L},{0x5BL}},{{0L},{-1L}},{{0L},{0x5BL}},{{-6L},{0x35L}},{{0x5BL},{-9L}},{{-10L},{0x69L}},{{0x35L},{6L}},{{6L},{6L}},{{0x35L},{0x69L}},{{-10L},{-9L}}},{{{0x5BL},{0x35L}},{{-6L},{0x5BL}},{{0L},{-1L}},{{0L},{0x5BL}},{{-6L},{0x35L}},{{0x5BL},{-9L}},{{-10L},{0x69L}},{{0x35L},{6L}},{{6L},{6L}},{{0x35L},{0x69L}}},{{{-10L},{-6L}},{{-1L},{6L}},{{-10L},{-1L}},{{0x69L},{0x5DL}},{{0x69L},{-1L}},{{-10L},{6L}},{{-1L},{-6L}},{{0L},{0x35L}},{{6L},{0x27L}},{{0x27L},{0x27L}}},{{{6L},{0x35L}},{{0L},{-6L}},{{-1L},{6L}},{{-10L},{-1L}},{{0x69L},{0x5DL}},{{0x69L},{-1L}},{{-10L},{6L}},{{-1L},{-6L}},{{0L},{0x35L}},{{6L},{0x27L}}}};
    uint16_t ****l_2029 = (void*)0;
    uint16_t *****l_2028 = &l_2029;
    int8_t l_2055 = (-4L);
    union U0 ****l_2076 = &g_787;
    uint64_t l_2098[6] = {0xCD988C27E35CEA5ALL,0xCD988C27E35CEA5ALL,1UL,0xCD988C27E35CEA5ALL,0xCD988C27E35CEA5ALL,1UL};
    uint32_t *l_2190 = &g_361;
    uint32_t **l_2189 = &l_2190;
    uint32_t ** const *l_2214 = &g_325;
    uint32_t ** const **l_2213 = &l_2214;
    uint32_t ** const ***l_2212[7][7][3] = {{{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213}},{{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213}},{{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213}},{{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213}},{{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213}},{{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213}},{{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,&l_2213,&l_2213},{&l_2213,(void*)0,&l_2213}}};
    const uint16_t *l_2254 = (void*)0;
    const uint16_t **l_2253 = &l_2254;
    const uint16_t ***l_2252 = &l_2253;
    int32_t l_2283 = 0L;
    int i, j, k;
    for (g_686 = 0; (g_686 < (-10)); g_686 = safe_sub_func_uint64_t_u_u(g_686, 9))
    {
        union U2 l_1916 = {-8L};
        union U1 l_1917[2][9] = {{{0xD63D1F58L},{0xD63D1F58L},{0xE2D6643FL},{0xD63D1F58L},{0xD63D1F58L},{0xE2D6643FL},{0xD63D1F58L},{0xD63D1F58L},{0xE2D6643FL}},{{6UL},{6UL},{18446744073709551612UL},{6UL},{6UL},{18446744073709551612UL},{6UL},{6UL},{18446744073709551612UL}}};
        int8_t ****l_1931 = (void*)0;
        int32_t l_1954 = (-9L);
        int32_t l_1955 = 0x8716807CL;
        int32_t l_1959 = (-2L);
        int32_t l_1961 = (-1L);
        uint16_t *****l_2030 = &l_2029;
        uint32_t *l_2059 = (void*)0;
        uint32_t *l_2060[6];
        uint64_t l_2077 = 18446744073709551610UL;
        uint32_t l_2078 = 4UL;
        union U0 l_2084[6] = {{0UL},{0UL},{0x20AA0460L},{0UL},{0UL},{0x20AA0460L}};
        int16_t l_2093 = 0xB0ADL;
        uint32_t l_2133[9] = {0xEF5215A7L,0xEF5215A7L,0xEF5215A7L,0xEF5215A7L,0xEF5215A7L,0xEF5215A7L,0xEF5215A7L,0xEF5215A7L,0xEF5215A7L};
        int i, j;
        for (i = 0; i < 6; i++)
            l_2060[i] = (void*)0;
        if ((((-4L) != (safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((((l_1916 , l_1917[1][3]) , l_1917[1][3].f3) & (~p_8)), (l_1919 != &p_10))) != l_1920), (***g_641)))) == (-4L)))
        {
            int8_t ****l_1932 = &g_278;
            uint8_t l_1935 = 0x94L;
            int32_t **l_1939[9] = {&g_271,&g_271,&g_271,&g_271,&g_271,&g_271,&g_271,&g_271,&g_271};
            int i;
            for (g_50 = (-6); (g_50 >= (-6)); g_50--)
            {
                uint32_t l_1925 = 18446744073709551615UL;
                const union U2 l_1926[6][8] = {{{0L},{0L},{-1L},{0x2DL},{1L},{0xB3L},{0x31L},{0L}},{{0x75L},{0L},{0x4BL},{2L},{0x31L},{0x4BL},{-10L},{0L}},{{0L},{5L},{0x75L},{0x2DL},{0x75L},{5L},{0L},{-10L}},{{3L},{0x2DL},{3L},{0x6BL},{0x2DL},{-1L},{0x31L},{3L}},{{8L},{3L},{2L},{5L},{0x2DL},{0x4BL},{0x4BL},{0x2DL}},{{3L},{-10L},{-10L},{3L},{0x75L},{8L},{0L},{5L}}};
                int32_t *l_1938 = (void*)0;
                int32_t ***l_1940 = &l_1939[1];
                int16_t *l_1941 = (void*)0;
                int32_t *l_1943 = &g_1226;
                int64_t *l_1944 = &g_1800;
                uint8_t *l_1945 = &g_115;
                uint32_t *l_1946 = &g_262;
                int32_t *l_1948[6] = {&l_1920,&l_1920,&l_1920,&l_1920,&l_1920,&l_1920};
                int i, j;
                l_1920 |= (safe_add_func_int32_t_s_s(l_1925, (((l_1926[3][5] , (((*l_1946) = (((*l_1945) = (safe_lshift_func_uint8_t_u_s(((((safe_rshift_func_uint16_t_u_s((l_1931 != l_1932), (((*l_1944) = ((safe_lshift_func_int16_t_s_u((l_1935 || ((*l_1943) &= ((((0x3F70L <= (((void*)0 != l_1938) <= ((((*l_1940) = l_1939[1]) != (void*)0) ^ 255UL))) > (*p_11)) , l_1941) == l_1942))), 14)) <= p_9)) && g_177[2][0]))) | 0x303EL) >= p_10.f0) > p_10.f0), (*g_59)))) ^ 0x0FL)) != l_1947)) || l_1917[1][3].f0) , p_9)));
            }
            for (l_1935 = 0; (l_1935 <= 1); l_1935 += 1)
            {
                int32_t l_1949[9][8] = {{0x39789108L,1L,0x39789108L,0xB8A2743AL,0xB8A2743AL,0x39789108L,1L,0x39789108L},{0x2E7B2667L,0xB8A2743AL,0xA6B34F4FL,0xB8A2743AL,0x2E7B2667L,0x2E7B2667L,0xB8A2743AL,0xA6B34F4FL},{0x2E7B2667L,0x2E7B2667L,0xB8A2743AL,0xA6B34F4FL,0xB8A2743AL,0x2E7B2667L,0x2E7B2667L,0xB8A2743AL},{0x39789108L,0xB8A2743AL,0xB8A2743AL,0x39789108L,1L,0x39789108L,0xB8A2743AL,0xB8A2743AL},{0xB8A2743AL,1L,0xA6B34F4FL,0xA6B34F4FL,1L,0xB8A2743AL,1L,0xA6B34F4FL},{0x39789108L,1L,0x39789108L,0xB8A2743AL,0xB8A2743AL,0x39789108L,1L,0x39789108L},{0x2E7B2667L,0xB8A2743AL,0xA6B34F4FL,0xB8A2743AL,0x2E7B2667L,0x2E7B2667L,0xB8A2743AL,0xA6B34F4FL},{0x2E7B2667L,0x2E7B2667L,0xB8A2743AL,0xA6B34F4FL,0xB8A2743AL,0x2E7B2667L,0x2E7B2667L,0xB8A2743AL},{0x39789108L,0xB8A2743AL,0xB8A2743AL,0x39789108L,1L,0x39789108L,0xB8A2743AL,0xB8A2743AL}};
                int32_t l_1952 = 0xA6671D5AL;
                int32_t l_1953 = 4L;
                int32_t l_1956 = 0x2BE3EBE2L;
                int32_t l_1957 = 0L;
                int i, j;
                g_1962++;
                for (g_1659 = 0; (g_1659 <= 1); g_1659 += 1)
                {
                    uint32_t l_1965[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                    int i;
                    l_1965[0]--;
                }
            }
        }
        else
        {
            uint8_t l_1991 = 0xFFL;
            int32_t *l_2032[8][8][2] = {{{&g_691,&l_1951},{&g_1226,(void*)0},{&l_1951,&g_691},{&l_1959,&g_691},{&g_53,&l_1950},{&l_1950,&l_1960},{&l_1960,&l_1958},{&l_1951,&g_53}},{{&l_1961,&l_1960},{&l_1958,&g_53},{&g_1226,&l_1951},{&l_1959,&l_1955},{&l_1961,&l_1958},{&g_687,&l_1955},{&l_1960,&l_1959},{(void*)0,&l_1958}},{{&l_1958,&l_1950},{&g_1226,&g_687},{&l_1950,&l_1961},{&l_1960,(void*)0},{&l_1951,&l_1955},{&l_1954,&l_1950},{&l_1958,(void*)0},{(void*)0,&g_53}},{{&g_1226,&g_53},{(void*)0,(void*)0},{&l_1958,&l_1950},{&l_1954,&l_1955},{&l_1951,(void*)0},{&l_1960,&l_1961},{&l_1950,&g_687},{&g_1226,&l_1950}},{{&l_1958,&l_1958},{(void*)0,&l_1959},{&l_1960,&l_1955},{&g_687,&l_1958},{&l_1961,&l_1955},{&l_1959,&l_1951},{&g_1226,&g_53},{&l_1958,&l_1960}},{{&l_1961,&g_75},{&g_53,&l_1955},{&g_53,&l_1958},{&l_1955,&l_1955},{&g_75,&l_1954},{&g_1226,&l_1960},{&l_1961,&l_1961},{&l_1955,&l_1961}},{{&l_1950,&l_1955},{&l_1950,&l_1961},{&l_1955,&l_1961},{&l_1961,&l_1960},{&g_1226,&l_1954},{&g_75,&l_1955},{&l_1955,&l_1958},{&g_53,&l_1955}},{{&g_53,&g_75},{&l_1961,&l_1960},{&l_1958,&g_53},{&g_1226,&l_1951},{&l_1959,&l_1955},{&l_1961,&l_1958},{&g_687,&l_1955},{&l_1960,&l_1959}}};
            union U1 l_2050 = {6UL};
            int i, j, k;
            for (g_691 = 3; (g_691 >= 0); g_691 -= 1)
            {
                uint8_t l_1978[5];
                union U1 l_1979 = {0x0365055EL};
                uint8_t *l_1986 = &g_177[2][0];
                int64_t *l_1992 = &g_1592;
                uint8_t *l_1993 = &l_1991;
                int64_t *l_1994 = &g_1800;
                int8_t l_2033 = 0xC7L;
                int32_t l_2034 = 0xA16143CAL;
                int32_t l_2037[4][5] = {{0x423FA68FL,0x8DC0D22AL,0x423FA68FL,0x8DC0D22AL,0x423FA68FL},{0x5058E93DL,0x5058E93DL,0L,0L,0x5058E93DL},{(-1L),0x8DC0D22AL,(-1L),0x8DC0D22AL,(-1L)},{0x5058E93DL,0L,0L,0x5058E93DL,0x5058E93DL}};
                uint64_t l_2041 = 0x45E47EB44755A539LL;
                int i, j;
                for (i = 0; i < 5; i++)
                    l_1978[i] = 0x9EL;
                if (((g_167 &= (((*l_1994) = (safe_add_func_int32_t_s_s((((*l_1993) = (safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(l_1917[1][3].f3, 5)), ((safe_lshift_func_uint16_t_u_s((p_10.f0 <= (l_1958 >= ((l_1978[3] > ((*g_403) ^= (l_1978[0] ^ (l_1979 , (safe_sub_func_int32_t_s_s(l_1954, ((((safe_add_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((*l_1986)--), (safe_add_func_int64_t_s_s(l_1959, (((*l_1992) = (l_1991 > l_1978[4])) && 0L))))), 0xFFFC11CDE045C111LL)) & p_10.f0) , l_1920) ^ 1UL))))))) , 0L))), p_9)) , p_8)))) , l_1979.f2), p_10.f0))) && p_10.f0)) | p_10.f0))
                {
                    for (g_1907 = 2; (g_1907 >= 0); g_1907 -= 1)
                    {
                        union U2 *l_1996 = &l_1916;
                        union U2 **l_1995 = &l_1996;
                        const int8_t *****l_1998 = &l_1997;
                        union U1 ** const **l_2004 = (void*)0;
                        union U1 ** const **l_2005 = &l_2003;
                        int32_t *l_2006[6][7] = {{&l_1960,&l_1960,&l_1960,&l_1920,&l_1954,&l_1960,&l_1954},{&l_1920,&g_75,&g_75,&l_1920,&l_1916.f1,&g_1226,&l_1920},{&g_1226,&l_1954,&l_1916.f1,&l_1916.f1,&l_1954,&g_1226,&g_75},{&l_1954,&l_1920,&l_1960,&l_1960,&l_1960,&l_1960,&l_1920},{&l_1954,&g_75,&g_1226,&l_1954,&l_1916.f1,&l_1916.f1,&l_1954},{&g_1226,&l_1920,&g_1226,&l_1916.f1,&l_1920,&g_75,&g_75}};
                        int i, j;
                        (*l_1995) = &g_478;
                        (*l_1998) = l_1997;
                        g_53 |= (p_9 = (~(safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s(((*p_11) != 0L))), l_1961))));
                        g_75 = (p_9 = (((*l_2005) = l_2003) != &g_1209));
                    }
                }
                else
                {
                    uint32_t *l_2026 = (void*)0;
                    uint32_t *l_2027 = &g_174;
                    int32_t l_2035[10][1];
                    int i, j;
                    for (i = 0; i < 10; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_2035[i][j] = 1L;
                    }
                    (*g_270) = &p_9;
                    if (((l_2007[9][4][1] , (((**g_1036) = (safe_rshift_func_int16_t_s_s(0x1B78L, 5))) > ((safe_lshift_func_uint16_t_u_u((1L > (safe_mod_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((l_1951 != (safe_mod_func_int32_t_s_s(l_1917[1][3].f3, 9L))), 1L)) , (safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((((p_8 || ((*l_1994) = (((*l_2027) &= (safe_lshift_func_int8_t_s_u((((safe_mod_func_uint64_t_u_u(((((0xD7EDA6FFE62ECBB0LL > 3UL) < 255UL) , l_1979.f2) <= 0x4957L), 0xCFFF9AD263C522E2LL)) & 0UL) ^ 5UL), 5))) , l_1991))) , (*p_11)) <= (*p_11)), 0x443F62EFFFD44468LL)), (*g_403)))), (**g_270)))), l_1979.f1)) && 0UL))) , l_1978[2]))
                    {
                        uint32_t l_2031 = 0x8A8DD19BL;
                        l_2030 = l_2028;
                        (**g_270) ^= l_2031;
                        l_2032[6][7][1] = (*g_270);
                    }
                    else
                    {
                        ++g_2038;
                        return l_2041;
                    }
                }
                if ((l_2037[3][4] = (0x488B4375L != (((void*)0 != &g_1208[1]) ^ (safe_div_func_uint8_t_u_u(0x2EL, ((*l_1986)--)))))))
                {
                    uint32_t l_2049 = 1UL;
                    p_9 &= (~(((*g_403) &= ((*l_1942) = p_10.f0)) , (((**g_279) < (safe_mod_func_uint32_t_u_u((9UL & l_2049), (l_2050 , (l_1979 , p_8))))) >= l_1917[1][3].f2)));
                    g_75 |= ((safe_div_func_uint8_t_u_u(l_2049, (safe_div_func_uint64_t_u_u(5UL, (-1L))))) || l_1960);
                }
                else
                {
                    uint8_t l_2056 = 250UL;
                    --l_2056;
                }
            }
            for (g_2036 = 0; g_2036 < 8; g_2036 += 1)
            {
                for (g_114 = 0; g_114 < 8; g_114 += 1)
                {
                    for (g_555 = 0; g_555 < 2; g_555 += 1)
                    {
                        l_2032[g_2036][g_114][g_555] = &l_1960;
                    }
                }
            }
        }
        l_2078 = ((g_338[6][1] && (((l_1955 = (g_361--)) < p_8) && ((((safe_lshift_func_uint16_t_u_s(((-5L) && ((**g_279) = ((*g_59) |= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((!l_1917[1][3].f0), l_1950)), ((safe_mod_func_int8_t_s_s((((void*)0 != &l_1931) || (((safe_mod_func_uint64_t_u_u(((((l_2076 != (((void*)0 != (*g_1809)) , (void*)0)) <= (*g_426)) != l_1951) , 18446744073709551615UL), g_1094[5][0])) , 0x6956L) || 0L)), l_2077)) == p_8))), 12))))), l_1917[1][3].f2)) <= p_10.f0) , (**g_642)) | (***g_1035)))) && (*g_403));
        for (l_1950 = 6; (l_1950 != 12); l_1950 = safe_add_func_int32_t_s_s(l_1950, 2))
        {
            return p_9;
        }
        if ((l_1960 == ((!((((safe_lshift_func_int16_t_s_s(((l_2084[1] , 0x21L) <= ((safe_unary_minus_func_int8_t_s((safe_add_func_uint64_t_u_u(((**g_1036) <= (&l_2029 == g_2088)), (~(l_2098[5] = (safe_lshift_func_int8_t_s_u((0UL == l_2093), (safe_sub_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((l_1917[1][3].f1 >= p_9) | (*p_11)), 0x291BL)), l_2093)))))))))) >= p_10.f0)), l_2055)) , l_1931) == l_1931) || 0x1208AE33L)) | (*p_11))))
        {
            for (g_692 = 4; (g_692 < 10); g_692 = safe_add_func_uint8_t_u_u(g_692, 1))
            {
                uint16_t l_2101 = 0UL;
                return l_2101;
            }
            (*g_270) = &p_9;
        }
        else
        {
            int16_t l_2132 = 0x969DL;
            int32_t l_2152 = (-6L);
            int32_t l_2158 = (-1L);
            int32_t l_2160 = 0x6780244CL;
            uint64_t *l_2185 = &g_794[5][0];
            union U2 *l_2188[2];
            union U2 **l_2187 = &l_2188[1];
            int32_t l_2238 = 0x84082F32L;
            int i;
            for (i = 0; i < 2; i++)
                l_2188[i] = &l_2007[9][2][0];
            for (l_2078 = 0; (l_2078 <= 2); l_2078 += 1)
            {
                uint32_t l_2124 = 0xE60DB03EL;
                int32_t l_2129 = 0x690947A5L;
                int32_t l_2130 = 0x94A42CEFL;
                int32_t l_2131 = (-1L);
                uint32_t **l_2191 = (void*)0;
                const union U1 *l_2193 = &g_2194;
                const union U1 **l_2192 = &l_2193;
                int64_t l_2198 = 0x8612F736329C64A2LL;
                uint32_t * const * const l_2211[9][4] = {{(void*)0,&l_2060[4],&l_2060[0],&l_2190},{&l_2060[2],&l_2060[0],&l_2059,&l_2190},{&l_2060[0],&l_2060[4],&l_2060[0],&l_2059},{&l_2190,(void*)0,&l_2059,&l_2190},{&l_2060[2],&l_2060[5],&l_2060[5],&l_2060[0]},{&l_2060[5],&l_2060[0],&l_2060[5],&l_2060[5]},{&l_2059,&l_2059,&l_2190,&l_2059},{&l_2060[0],&l_2059,&l_2060[0],&l_2060[0]},{&l_2060[0],&l_2060[0],&l_2060[5],&l_2060[0]}};
                uint32_t * const * const *l_2210 = &l_2211[0][3];
                uint32_t * const * const ** const l_2209 = &l_2210;
                uint32_t * const * const ** const *l_2208 = &l_2209;
                const int8_t *l_2218 = &g_478.f0;
                const int8_t **l_2217 = &l_2218;
                const int8_t ***l_2216[9][4][5] = {{{&l_2217,(void*)0,&l_2217,(void*)0,&l_2217},{&l_2217,(void*)0,&l_2217,&l_2217,(void*)0},{&l_2217,&l_2217,&l_2217,&l_2217,&l_2217},{&l_2217,&l_2217,&l_2217,(void*)0,(void*)0}},{{&l_2217,(void*)0,&l_2217,&l_2217,&l_2217},{&l_2217,&l_2217,&l_2217,&l_2217,&l_2217},{&l_2217,(void*)0,&l_2217,(void*)0,&l_2217},{(void*)0,(void*)0,&l_2217,&l_2217,&l_2217}},{{&l_2217,&l_2217,&l_2217,&l_2217,&l_2217},{&l_2217,&l_2217,&l_2217,&l_2217,(void*)0},{&l_2217,&l_2217,&l_2217,&l_2217,(void*)0},{&l_2217,(void*)0,&l_2217,&l_2217,&l_2217}},{{&l_2217,&l_2217,(void*)0,&l_2217,&l_2217},{&l_2217,&l_2217,&l_2217,&l_2217,(void*)0},{&l_2217,&l_2217,(void*)0,(void*)0,(void*)0},{&l_2217,&l_2217,&l_2217,&l_2217,(void*)0}},{{&l_2217,(void*)0,&l_2217,&l_2217,&l_2217},{&l_2217,&l_2217,&l_2217,(void*)0,&l_2217},{&l_2217,(void*)0,&l_2217,&l_2217,&l_2217},{&l_2217,&l_2217,&l_2217,&l_2217,&l_2217}},{{&l_2217,&l_2217,&l_2217,(void*)0,(void*)0},{&l_2217,&l_2217,&l_2217,&l_2217,(void*)0},{&l_2217,(void*)0,&l_2217,&l_2217,(void*)0},{&l_2217,&l_2217,&l_2217,&l_2217,&l_2217}},{{&l_2217,&l_2217,&l_2217,&l_2217,&l_2217},{&l_2217,&l_2217,&l_2217,&l_2217,(void*)0},{&l_2217,&l_2217,(void*)0,&l_2217,(void*)0},{&l_2217,&l_2217,(void*)0,&l_2217,&l_2217}},{{&l_2217,&l_2217,&l_2217,(void*)0,&l_2217},{&l_2217,&l_2217,&l_2217,&l_2217,&l_2217},{&l_2217,&l_2217,&l_2217,&l_2217,&l_2217},{&l_2217,&l_2217,&l_2217,&l_2217,&l_2217}},{{&l_2217,&l_2217,&l_2217,&l_2217,(void*)0},{&l_2217,&l_2217,&l_2217,&l_2217,&l_2217},{&l_2217,&l_2217,&l_2217,&l_2217,&l_2217},{(void*)0,&l_2217,(void*)0,&l_2217,&l_2217}}};
                const int8_t ****l_2215 = &l_2216[8][1][3];
                int i, j, k;
                for (l_1950 = 2; (l_1950 >= 0); l_1950 -= 1)
                {
                    uint32_t ***l_2108 = (void*)0;
                    uint64_t *l_2109 = &g_794[1][7];
                    int32_t l_2114 = (-1L);
                    uint8_t *l_2115[10][6][4] = {{{&g_177[2][0],&g_177[3][1],&g_1134,&g_177[4][0]},{&g_4,(void*)0,&g_115,(void*)0},{&g_115,(void*)0,&g_4,&g_1134},{&g_1134,&g_4,&g_1134,(void*)0},{&g_1134,&g_177[4][1],&g_177[4][0],&g_177[5][1]},{&g_555,&g_1134,&g_4,&g_177[0][0]}},{{&g_177[3][1],(void*)0,(void*)0,&g_177[3][1]},{&g_1134,&g_1134,&g_177[4][1],&g_4},{&g_1134,(void*)0,&g_177[1][1],&g_4},{(void*)0,&g_115,&g_4,&g_4},{(void*)0,(void*)0,&g_1134,&g_4},{(void*)0,&g_1134,&g_555,&g_177[3][1]}},{{&g_1134,(void*)0,(void*)0,&g_177[0][0]},{(void*)0,&g_1134,&g_177[3][1],&g_177[5][1]},{&g_555,&g_177[4][1],&g_177[2][0],(void*)0},{(void*)0,&g_4,(void*)0,&g_1134},{&g_4,(void*)0,&g_177[5][1],(void*)0},{(void*)0,(void*)0,(void*)0,&g_177[4][0]}},{{&g_177[4][0],&g_177[3][1],&g_177[0][0],(void*)0},{&g_4,&g_177[2][0],&g_1134,(void*)0},{&g_4,&g_4,&g_177[0][0],&g_177[1][1]},{&g_177[4][0],(void*)0,(void*)0,&g_1134},{(void*)0,&g_177[0][0],&g_177[5][1],&g_555},{&g_4,(void*)0,(void*)0,&g_4}},{{(void*)0,(void*)0,&g_177[2][0],(void*)0},{&g_555,&g_115,&g_177[3][1],&g_177[2][0]},{(void*)0,&g_177[1][1],(void*)0,(void*)0},{&g_1134,&g_1134,&g_555,&g_1134},{(void*)0,&g_177[2][0],&g_1134,&g_1134},{(void*)0,&g_1134,&g_4,&g_1134}},{{(void*)0,&g_1134,&g_177[1][1],&g_1134},{&g_1134,&g_177[2][0],&g_177[4][1],&g_1134},{&g_1134,&g_1134,(void*)0,(void*)0},{&g_177[3][1],&g_177[1][1],&g_4,&g_177[2][0]},{&g_555,&g_115,&g_177[4][0],(void*)0},{&g_1134,(void*)0,&g_1134,&g_4}},{{&g_1134,(void*)0,&g_4,&g_555},{&g_115,&g_177[0][0],&g_115,&g_1134},{&g_4,(void*)0,&g_1134,&g_177[1][1]},{&g_177[2][0],&g_4,&g_1134,(void*)0},{(void*)0,&g_177[2][0],&g_1134,(void*)0},{&g_177[2][0],&g_177[3][1],&g_1134,&g_177[4][0]}},{{&g_4,(void*)0,&g_115,(void*)0},{&g_115,(void*)0,&g_4,&g_1134},{&g_1134,&g_4,&g_1134,(void*)0},{&g_1134,&g_177[4][1],&g_1134,&g_1134},{&g_115,&g_4,&g_1134,&g_4},{(void*)0,&g_177[3][1],&g_177[3][1],(void*)0}},{{&g_1134,&g_1134,&g_177[1][0],&g_1134},{(void*)0,(void*)0,&g_177[2][0],&g_177[4][0]},{&g_177[3][1],&g_1134,(void*)0,&g_177[4][0]},{(void*)0,(void*)0,&g_4,&g_1134},{&g_177[1][1],&g_1134,&g_115,(void*)0},{&g_555,&g_177[3][1],&g_177[1][1],&g_4}},{{&g_177[5][1],&g_4,(void*)0,&g_1134},{(void*)0,&g_177[1][0],&g_177[2][0],&g_177[5][1]},{(void*)0,&g_1134,&g_115,&g_177[4][1]},{&g_177[4][0],&g_4,&g_1134,&g_4},{&g_177[2][0],&g_177[5][1],&g_4,&g_1134},{&g_1134,(void*)0,&g_4,(void*)0}}};
                    int i, j, k;
                    if ((safe_add_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(g_210[l_2078][l_1950], l_1920)) != (safe_mod_func_uint64_t_u_u(((*l_2109) = ((void*)0 == l_2108)), (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((*g_145), 5)) > l_1958), ((g_2116[6]--) | (safe_mul_func_int16_t_s_s(((void*)0 != &g_85[l_1950]), ((**g_1036) = g_85[l_1950].f3))))))))), p_9)))
                    {
                        int32_t *l_2121 = (void*)0;
                        int32_t *l_2122 = &g_478.f1;
                        int32_t *l_2123[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_2123[i] = &l_1959;
                        --l_2124;
                        p_9 ^= l_1959;
                    }
                    else
                    {
                        int32_t *l_2127 = &l_1951;
                        int32_t *l_2128[10][1][6] = {{{&g_113,&g_1226,(void*)0,&l_1958,&g_687,&l_1959}},{{&g_687,(void*)0,&g_113,(void*)0,&g_687,(void*)0}},{{&l_1959,&g_1226,&l_1961,&l_1959,(void*)0,(void*)0}},{{(void*)0,&l_1920,&g_1226,&g_1226,&l_1920,(void*)0}},{{&l_1959,&l_1958,&l_1961,&g_687,(void*)0,(void*)0}},{{&l_1920,&l_1959,&g_113,(void*)0,&g_113,&l_1959}},{{&l_1920,(void*)0,(void*)0,&g_687,&l_1961,&l_1958}},{{&l_1959,(void*)0,&l_1920,&g_1226,&g_1226,&l_1920}},{{(void*)0,(void*)0,(void*)0,&l_1959,&l_1961,&g_1226}},{{&l_1959,(void*)0,&g_687,(void*)0,&g_113,(void*)0}}};
                        int i, j, k;
                        l_2133[6]++;
                        (*l_2127) ^= (p_9 , l_2132);
                        (*l_2127) = (*g_426);
                    }
                    return l_2131;
                }
                (*g_270) = &p_9;
                for (p_8 = 1; (p_8 <= 5); p_8 += 1)
                {
                    const union U2 l_2146 = {0xB2L};
                    int32_t l_2154 = 0L;
                    uint8_t l_2161 = 0x00L;
                    int i, j;
                    for (g_1715 = 0; (g_1715 <= 2); g_1715 += 1)
                    {
                        int32_t *l_2137 = &g_687;
                        int32_t **l_2136 = &l_2137;
                        (*l_2136) = ((*g_270) = (*g_270));
                    }
                    if ((safe_rshift_func_int16_t_s_u((((safe_sub_func_int32_t_s_s((((safe_lshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u(6UL, g_210[l_2078][(p_8 + 2)])), (((l_2146 , (safe_sub_func_uint64_t_u_u(6UL, g_360[(p_8 + 1)][p_8]))) , (*g_1741)) == (g_786 = &g_787)))) < (l_2132 >= ((((+(safe_lshift_func_uint8_t_u_u((p_9 , l_2098[5]), 4))) , g_360[(p_8 + 1)][p_8]) ^ 0x8995L) && 0L))) != l_2078), l_2152)) || l_1950) , p_8), p_8)))
                    {
                        if (p_8)
                            break;
                        if (p_10.f0)
                            continue;
                        if (p_8)
                            continue;
                        (*g_270) = &p_9;
                    }
                    else
                    {
                        int32_t *l_2153[4][9] = {{&g_691,&g_691,&l_2131,&l_2131,&g_1226,&l_2131,&g_1226,&l_2131,&l_2131},{&l_2152,&l_2152,(void*)0,&l_1954,(void*)0,(void*)0,(void*)0,&l_1954,(void*)0},{&g_691,&g_691,&l_2131,&l_2131,&g_1226,&l_2131,&g_1226,&l_2131,&l_2131},{&l_2152,&l_2152,(void*)0,&l_1954,(void*)0,(void*)0,(void*)0,&l_1954,(void*)0}};
                        int32_t l_2156[2];
                        uint8_t *l_2175 = &g_555;
                        uint64_t *l_2176[3];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_2156[i] = 0xFD137F99L;
                        for (i = 0; i < 3; i++)
                            l_2176[i] = &g_210[l_2078][(p_8 + 2)];
                        ++l_2161;
                        (*g_270) = ((l_2160 &= ((safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(0xF1652AA8L, ((((*p_11) = ((*g_1751) , ((safe_unary_minus_func_uint32_t_u(p_9)) >= (((((safe_mod_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((((*l_2175) = p_9) | (g_113 ^ (l_2176[2] == ((((safe_mul_func_int8_t_s_s(((**g_279) ^= ((0UL || (((*g_59) , ((safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u(((l_1917[1][3].f3 ^ l_2129) ^ l_2055), 0x38L)), 7)) & g_1532)) != 9L)) >= p_8)), 1L)) , p_8) & p_8) , l_2185)))), p_9)), (-1L))), l_2132)) | g_2186) , 0x10L) , l_2187) != (void*)0)))) < l_1954) , p_8))), 0x54FAD0FC7ED5C001LL)) > l_2098[5])) , (*g_270));
                    }
                }
                if ((((*l_2192) = ((l_2189 != ((**g_1432) = l_2191)) , &l_1917[0][7])) != &l_1917[1][3]))
                {
                    int32_t *l_2219 = &l_1955;
                    if ((~(safe_div_func_uint32_t_u_u(((void*)0 != &g_1196[0][1]), l_2198))))
                    {
                        int64_t l_2203 = (-1L);
                        l_1955 |= l_2124;
                        (*g_270) = (*g_270);
                        l_2130 ^= (((p_8 == (safe_add_func_uint16_t_u_u(((((l_1951 = ((*g_271) |= l_2203)) || (safe_sub_func_int8_t_s_s(l_2093, ((safe_rshift_func_uint8_t_u_u(1UL, 3)) ^ l_1960)))) , (l_2208 != l_2212[6][4][2])) == (l_1954 = (l_2215 != &l_2216[8][1][3]))), 0xC65EL))) , p_8) ^ g_2155);
                    }
                    else
                    {
                        int32_t *l_2220 = &l_2158;
                        int32_t *l_2221[6][4] = {{(void*)0,(void*)0,&l_2131,&l_1960},{(void*)0,(void*)0,&g_1226,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1960,&g_1226,&l_2130},{(void*)0,(void*)0,&l_2131,(void*)0},{(void*)0,&l_1961,(void*)0,(void*)0}};
                        uint64_t l_2222 = 18446744073709551611UL;
                        int i, j;
                        (*g_270) = (l_2198 , l_2219);
                        l_2222--;
                    }
                    for (l_2198 = 1; (l_2198 <= 5); l_2198 += 1)
                    {
                        (*g_271) = (l_2158 > (safe_lshift_func_uint8_t_u_s(248UL, (*p_11))));
                        (*g_270) = &l_2130;
                        (*l_2219) = (safe_div_func_uint32_t_u_u((((*g_271) &= (*g_426)) > 0xC968AD28L), (*g_426)));
                    }
                }
                else
                {
                    int16_t l_2235 = (-10L);
                    int32_t l_2236 = 0L;
                    int32_t l_2237 = (-1L);
                    int32_t l_2239 = 0x0BCFE054L;
                    if ((safe_mod_func_int16_t_s_s(p_8, (l_1959 = (*****g_2088)))))
                    {
                        int32_t *l_2231 = &l_1955;
                        int32_t *l_2232 = &l_2152;
                        int32_t *l_2233 = &g_50;
                        int32_t *l_2234[1][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int i, j;
                        ++g_2242[0][0][2];
                        return p_10.f0;
                    }
                    else
                    {
                        l_1961 = 0L;
                    }
                    for (g_692 = 0; (g_692 > (-9)); --g_692)
                    {
                        union U1 *l_2247 = &g_85[0];
                        (*l_2187) = (*l_2187);
                        (*g_1209) = l_2247;
                    }
                }
            }
            return p_10.f0;
        }
    }
    for (g_50 = 2; (g_50 <= 7); g_50 += 1)
    {
        int8_t l_2284 = 4L;
        for (g_692 = 5; (g_692 >= 1); g_692 -= 1)
        {
            uint16_t ***l_2255 = &g_642;
            int32_t l_2285 = 0L;
            uint64_t *l_2286 = &l_2098[1];
            int32_t *l_2287 = &g_687;
            int i, j;
            for (g_1532 = 0; g_1532 < 7; g_1532 += 1)
            {
                for (l_1951 = 0; l_1951 < 7; l_1951 += 1)
                {
                    for (l_1958 = 0; l_1958 < 3; l_1958 += 1)
                    {
                        l_2212[g_1532][l_1951][l_1958] = &g_2248;
                    }
                }
            }
            (*l_2287) = (safe_rshift_func_uint8_t_u_s((l_2252 == l_2255), ((((g_2256 != 0xC5CD731DB7A6EB3CLL) <= ((safe_sub_func_uint16_t_u_u(((0xEE2D79750A034358LL == ((*l_2286) = (safe_rshift_func_uint16_t_u_u((0xAFL & (safe_sub_func_uint64_t_u_u(((g_794[g_692][g_50] |= ((((safe_rshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s((0x39L | ((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(p_8, (((((**g_1036) = ((safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(((((safe_div_func_int32_t_s_s(l_2283, l_2284)) , (-1L)) != p_10.f0) >= p_8), p_9)), g_696)), l_2285)), (**g_1036))) < (*g_403))) && l_2285) & 0UL) || p_10.f0))), 0x80L)), l_2283)) , 0x58L)), 9L)) ^ p_9), l_2098[1])) == l_1951) ^ 1L) || (***g_1035))) <= p_9), p_9))), 2)))) | 1UL), p_8)) , 1UL)) != g_53) , (*p_11))));
        }
        for (g_2186 = 0; (g_2186 > 28); g_2186 = safe_add_func_int32_t_s_s(g_2186, 3))
        {
            return l_1947;
        }
        (*g_270) = &p_9;
    }
    return p_10.f0;
}







static uint16_t func_20(union U1 p_21, int8_t * p_22)
{
    uint32_t l_1908 = 1UL;
    return l_1908;
}







static union U1 func_23(int16_t p_24)
{
    int8_t * const *l_1054 = &g_59;
    int8_t * const **l_1053 = &l_1054;
    int32_t l_1085 = 1L;
    int32_t l_1096 = 8L;
    int32_t l_1128 = 0x72038600L;
    int32_t l_1129 = (-1L);
    int32_t l_1131[9][4][7] = {{{(-4L),0xCEFA4EB8L,0xDC3188AFL,0xC877B59BL,(-5L),0x188C7A71L,(-1L)},{0xA4CD3E74L,2L,0x333C927BL,0x68B4113AL,0xE6065EA1L,1L,0x210A4511L},{0xBC8C1F21L,0xCB9291F5L,(-6L),1L,(-6L),0xCB9291F5L,0xBC8C1F21L},{0xA4CD3E74L,6L,0x447CCED5L,0x47885DE6L,0xE6065EA1L,0x9B4070ABL,(-2L)}},{{0xA8B9308CL,0xCB9291F5L,(-2L),0L,(-1L),0xCB9291F5L,(-1L)},{4L,2L,0x447CCED5L,0x68B4113AL,0xE39217FFL,1L,(-2L)},{0xBC8C1F21L,0x188C7A71L,(-6L),0L,(-6L),0x188C7A71L,0xBC8C1F21L},{4L,6L,0x333C927BL,0x47885DE6L,0xE39217FFL,0x9B4070ABL,0x210A4511L}},{{0xA8B9308CL,0x188C7A71L,(-2L),1L,(-1L),0x188C7A71L,(-1L)},{0xA4CD3E74L,2L,0x333C927BL,0x68B4113AL,0xE6065EA1L,1L,0x210A4511L},{0xBC8C1F21L,0xCB9291F5L,(-6L),1L,(-6L),0xCB9291F5L,0xBC8C1F21L},{0xA4CD3E74L,6L,0x447CCED5L,0x47885DE6L,0xE6065EA1L,0x9B4070ABL,(-2L)}},{{0xA8B9308CL,0xCB9291F5L,(-2L),0L,(-1L),0xCB9291F5L,(-1L)},{4L,2L,0x447CCED5L,0x68B4113AL,0xE39217FFL,1L,(-2L)},{0xBC8C1F21L,0x188C7A71L,(-6L),0L,(-6L),0x188C7A71L,0xBC8C1F21L},{4L,6L,0x333C927BL,0x47885DE6L,0xE39217FFL,0x9B4070ABL,0x210A4511L}},{{0xA8B9308CL,0x188C7A71L,(-2L),1L,(-1L),0x188C7A71L,(-1L)},{0xA4CD3E74L,2L,0x333C927BL,0x68B4113AL,0xE6065EA1L,1L,0x210A4511L},{0xBC8C1F21L,0xCB9291F5L,(-6L),1L,(-6L),0xCB9291F5L,0xBC8C1F21L},{0xA4CD3E74L,6L,0x447CCED5L,0x47885DE6L,0xE6065EA1L,0x9B4070ABL,(-2L)}},{{0xA8B9308CL,0xCB9291F5L,(-2L),0L,(-1L),0xCB9291F5L,(-1L)},{4L,2L,0x447CCED5L,0x68B4113AL,0xE39217FFL,1L,(-2L)},{0xBC8C1F21L,0x188C7A71L,(-6L),0L,(-6L),0x188C7A71L,0xBC8C1F21L},{4L,6L,0x333C927BL,0x47885DE6L,0xE39217FFL,0x9B4070ABL,0x210A4511L}},{{0xA8B9308CL,0x188C7A71L,(-2L),1L,(-1L),0x188C7A71L,(-1L)},{0xA4CD3E74L,2L,0x333C927BL,0x68B4113AL,0xE6065EA1L,1L,0x210A4511L},{0xBC8C1F21L,0xCB9291F5L,(-6L),1L,(-6L),0xCB9291F5L,0xBC8C1F21L},{0xA4CD3E74L,6L,0x447CCED5L,0x47885DE6L,0xE6065EA1L,0x9B4070ABL,0x68B4113AL}},{{1L,1L,0x632F042AL,(-1L),0x591A28B4L,1L,0xDAE8BB5EL},{0x47885DE6L,4L,0L,0xB80F68BDL,(-1L),0xA4CD3E74L,0x68B4113AL},{(-5L),0xC877B59BL,3L,(-1L),3L,0xC877B59BL,(-5L)},{0x47885DE6L,(-2L),0x450818C1L,0xF4A03B41L,(-1L),0x210A4511L,(-1L)}},{{1L,0xC877B59BL,0x632F042AL,0L,0x591A28B4L,0xC877B59BL,0xDAE8BB5EL},{0x129CBE1EL,4L,0x450818C1L,0xB80F68BDL,0x0B4AE121L,0xA4CD3E74L,(-1L)},{(-5L),1L,3L,0L,3L,1L,(-5L)},{0x129CBE1EL,(-2L),0L,0xF4A03B41L,0x0B4AE121L,0x210A4511L,0x68B4113AL}}};
    union U0 ****l_1148 = &g_787;
    uint32_t l_1179 = 0xC2B4C562L;
    uint32_t *l_1180 = &g_361;
    int16_t ****l_1183 = &g_831;
    const union U1 *l_1203 = (void*)0;
    uint16_t l_1204 = 0x52C3L;
    union U0 *l_1220[5][2][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333}}};
    int8_t l_1246 = 0x13L;
    int32_t l_1274 = 0x3ADA6ECAL;
    const uint8_t l_1277 = 0x25L;
    const union U0 *l_1375 = &g_1376;
    const uint32_t l_1430 = 0x6B154FD0L;
    int8_t l_1438 = 6L;
    uint16_t ** const *l_1459[1][2][3] = {{{&g_642,&g_642,&g_642},{&g_642,&g_642,&g_642}}};
    uint16_t ** const * const *l_1458 = &l_1459[0][1][1];
    union U1 l_1465[2] = {{1UL},{1UL}};
    int16_t l_1499[9] = {0xB9FBL,0xBB78L,0xB9FBL,0xBB78L,0xB9FBL,0xBB78L,0xB9FBL,0xBB78L,0xB9FBL};
    int32_t l_1513 = 0xAB477654L;
    int64_t l_1524[4];
    uint8_t l_1545 = 0UL;
    uint32_t l_1585[9][10] = {{0x89F7326FL,0xDD7D86BBL,0xE7B4896BL,0x89F7326FL,0UL,4294967293UL,4294967295UL,4294967293UL,4294967295UL,4294967293UL},{0xCC385CF3L,0xCCF0B399L,0x31E770FBL,0xCCF0B399L,0xCC385CF3L,0xCD884790L,0xDD7D86BBL,0xDCCBA48EL,0x2E6016AAL,0xDD7D86BBL},{4294967293UL,0x8799E9FCL,0x89F7326FL,7UL,0x8799E9FCL,0UL,0xD3134F24L,0xE7B4896BL,0UL,0xDD7D86BBL},{0UL,7UL,0UL,4294967295UL,0xCC385CF3L,0x89F7326FL,0UL,0xD3134F24L,4294967293UL,4294967293UL},{0xCCF0B399L,0x92841B5CL,0x0EFA84D2L,0UL,0UL,0x0EFA84D2L,0x92841B5CL,1UL,7UL,4294967293UL},{3UL,4294967292UL,0xC847E3B9L,0x89F7326FL,0xD0411F6CL,0xCB360D1DL,1UL,4294967292UL,0x31E770FBL,0x8799E9FCL},{0x0EFA84D2L,0xE7B4896BL,0xC847E3B9L,0xD0411F6CL,0UL,4294967292UL,0xD0411F6CL,1UL,0xCD9F931AL,0x0EFA84D2L},{0xE7B4896BL,0x89F7326FL,0UL,4294967293UL,4294967295UL,4294967293UL,4294967295UL,4294967293UL,0UL,0x89F7326FL},{0x8799E9FCL,0xC847E3B9L,0x0EFA84D2L,0x89F7326FL,0x2E6016AAL,6UL,0UL,0x2E6016AAL,0xCB360D1DL,0UL}};
    int16_t l_1586 = 0x1B0CL;
    uint32_t l_1653 = 0x7B674143L;
    int8_t l_1657 = 0L;
    int16_t l_1697 = 0x1FF3L;
    int32_t ** const l_1900 = &g_271;
    uint32_t l_1905 = 0x3762AE6CL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1524[i] = 0xD0F6B73D72F10FC3LL;
    for (g_114 = 1; (g_114 >= 0); g_114 -= 1)
    {
        uint32_t ***l_1060[9][8] = {{&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325},{&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325},{&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325},{&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325},{&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325},{&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325},{&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325},{&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325},{&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325,&g_325}};
        uint32_t ****l_1059[1][7];
        int32_t *l_1098[3];
        int16_t **l_1186 = &g_403;
        union U1 ***l_1210 = (void*)0;
        uint32_t l_1211[7][9] = {{6UL,0x2025E453L,1UL,0x42009A98L,3UL,18446744073709551609UL,18446744073709551614UL,1UL,0xD3DB6CD1L},{18446744073709551615UL,6UL,1UL,1UL,1UL,1UL,6UL,18446744073709551615UL,18446744073709551615UL},{0x87A71238L,0xEA2DE1F4L,18446744073709551615UL,1UL,0x8E23DA57L,18446744073709551615UL,18446744073709551609UL,0x2025E453L,18446744073709551609UL},{18446744073709551615UL,1UL,18446744073709551609UL,0x42009A98L,0x87A71238L,0x42009A98L,18446744073709551609UL,1UL,18446744073709551615UL},{18446744073709551614UL,0x42009A98L,0x8E23DA57L,3UL,0x87A71238L,18446744073709551609UL,0xEA2DE1F4L,1UL,0xD3DB6CD1L},{0x2025E453L,1UL,3UL,0UL,0x8E23DA57L,0x8E23DA57L,0UL,3UL,1UL},{18446744073709551614UL,0x87A71238L,0xEA2DE1F4L,18446744073709551615UL,1UL,0x8E23DA57L,18446744073709551615UL,18446744073709551609UL,0x2025E453L}};
        union U1 ***l_1212[9] = {&g_1209,&g_1209,&g_1209,&g_1209,&g_1209,&g_1209,&g_1209,&g_1209,&g_1209};
        uint32_t l_1217 = 0x20AA385CL;
        uint64_t l_1273 = 0xAA62ADC11577BC61LL;
        uint16_t **l_1316 = &g_187[3][4];
        union U0 l_1327 = {0x490E1535L};
        int64_t l_1431 = 0x3F48850BFAEB53FCLL;
        int16_t l_1515 = 0L;
        uint32_t ***l_1550[1];
        uint64_t l_1646 = 0xAE666809FC6F4F8DLL;
        uint16_t l_1687 = 0x1038L;
        union U2 l_1792 = {0xE5L};
        int32_t l_1799 = 0x726703B6L;
        int32_t *l_1863[9][1] = {{&l_1085},{&l_1131[5][1][6]},{&l_1085},{&l_1131[5][1][6]},{&l_1085},{&l_1131[5][1][6]},{&l_1085},{&l_1131[5][1][6]},{&l_1085}};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_1059[i][j] = &l_1060[4][1];
        }
        for (i = 0; i < 3; i++)
            l_1098[i] = &g_50;
        for (i = 0; i < 1; i++)
            l_1550[i] = &g_325;
        if (g_2[g_114])
            break;
        for (g_692 = 2; (g_692 <= 7); g_692 += 1)
        {
            uint64_t l_1051 = 0x319E6CCA35E2B17ELL;
            int32_t l_1072 = 0x0E3EAA62L;
            union U1 **l_1116 = (void*)0;
            int16_t ****l_1181 = &g_831;
            int16_t ****l_1182 = &g_831;
            int16_t ***l_1188 = &l_1186;
            int16_t ****l_1187 = &l_1188;
            int32_t l_1224[9];
            uint32_t ***l_1275[2][7] = {{(void*)0,&g_325,&g_325,&g_325,(void*)0,(void*)0,&g_325},{&g_325,(void*)0,&g_325,&g_325,&g_325,&g_325,(void*)0}};
            int16_t l_1301[2];
            const union U0 ***l_1386 = &g_723;
            int i, j;
            for (i = 0; i < 9; i++)
                l_1224[i] = 0xB6579F4EL;
            for (i = 0; i < 2; i++)
                l_1301[i] = 1L;
        }
        for (l_1129 = 6; (l_1129 >= 0); l_1129 -= 1)
        {
            int32_t l_1398 = 0x72C67449L;
            int32_t l_1423 = 0x6FB6C972L;
            union U2 l_1426 = {0x23L};
            const int64_t l_1435 = 0x67BBA59ED18649ADLL;
            union U1 l_1443 = {0xBCDB77A3L};
            int64_t *l_1452 = &g_694;
            uint16_t *l_1463 = &g_188;
            uint16_t ** const l_1462 = &l_1463;
            uint16_t ** const * const l_1461 = &l_1462;
            uint16_t ** const * const *l_1460 = &l_1461;
            int i, j;
            for (l_1179 = 0; (l_1179 <= 7); l_1179 += 1)
            {
                int32_t l_1397 = 6L;
                const int16_t *l_1407 = &g_114;
                const int16_t **l_1406 = &l_1407;
                uint16_t l_1439 = 0x6C76L;
                l_1397 = 0x0AA07AF1L;
                for (l_1085 = 0; (l_1085 <= 2); l_1085 += 1)
                {
                    uint16_t l_1399 = 0xD843L;
                    int16_t **l_1410[3][9] = {{&g_403,&g_403,(void*)0,(void*)0,&g_403,&g_403,&g_403,(void*)0,(void*)0},{&g_403,&g_403,&g_403,&g_403,&g_403,&g_403,&g_403,&g_403,&g_403},{(void*)0,&g_403,(void*)0,&g_403,&g_403,(void*)0,&g_403,(void*)0,&g_403}};
                    int32_t l_1436[3][6];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_1436[i][j] = 0xB1988064L;
                    }
                    l_1399--;
                    if (g_794[(g_114 + 6)][l_1179])
                    {
                        const int16_t ***l_1408 = &l_1406;
                        const int16_t **l_1409 = &l_1407;
                        const int32_t l_1429 = (-1L);
                        uint16_t *l_1434 = &g_1094[5][0];
                        int i;
                        l_1436[2][3] = (safe_mod_func_uint32_t_u_u((l_1128 | ((safe_sub_func_uint32_t_u_u((((l_1409 = ((*l_1408) = l_1406)) == ((*g_831) = l_1410[2][7])) >= 0x62ADBE65L), ((safe_mod_func_uint8_t_u_u(((***g_1035) != ((*l_1434) = (safe_add_func_int16_t_s_s((((safe_div_func_uint16_t_u_u((l_1274 = (((safe_lshift_func_uint8_t_u_u((((safe_add_func_int8_t_s_s(((((safe_sub_func_int16_t_s_s((l_1423 = l_1398), 0x9B17L)) >= (safe_lshift_func_int16_t_s_u(((l_1426 = g_478) , (safe_mul_func_uint8_t_u_u(l_1429, p_24))), l_1430))) != p_24) , l_1431), 0x0CL)) && 0x68L) | 0x47L), 7)) <= l_1398) , (**g_642))), p_24)) , g_1432) == (void*)0), l_1204)))), 0xABL)) <= l_1435))) , g_794[(g_114 + 6)][l_1179])), l_1397));
                        if ((*g_426))
                            continue;
                    }
                    else
                    {
                        int64_t l_1437 = (-9L);
                        int32_t l_1442 = 0x9835286CL;
                        l_1439++;
                        l_1442 = (l_1423 = p_24);
                    }
                    return l_1443;
                }
            }
            if (g_794[l_1129][(g_114 + 3)])
                break;
            l_1128 = (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(l_1131[1][2][6], 7)), (((safe_mod_func_int64_t_s_s(((*l_1452) = ((**g_1036) | (p_24 = ((void*)0 != &g_920[4][0])))), (g_686 |= ((void*)0 != l_1186)))) == (l_1443.f1 == ((safe_unary_minus_func_uint32_t_u(((l_1430 || (safe_lshift_func_uint8_t_u_s(l_1435, 1))) && l_1179))) < l_1085))) , (-5L))));
            for (l_1273 = 0; (l_1273 <= 1); l_1273 += 1)
            {
                union U1 l_1464[1] = {{0UL}};
                int i;
                for (g_687 = 2; (g_687 >= 0); g_687 -= 1)
                {
                    int i, j;
                    l_1131[1][2][6] = (g_2[l_1273] & (g_794[l_1129][(g_114 + 6)] ^= (((safe_add_func_int8_t_s_s((&g_2[1] == (void*)0), ((((g_85[(l_1273 + 1)] , (void*)0) != (l_1460 = l_1458)) == ((l_1464[0] , g_698[g_114]) , ((g_2[l_1273] <= 9UL) <= p_24))) , (-1L)))) < 0x27L) | p_24)));
                    for (g_262 = 0; (g_262 <= 2); g_262 += 1)
                    {
                        if (l_1464[0].f2)
                            break;
                    }
                }
            }
        }
        for (g_174 = 0; (g_174 <= 7); g_174 += 1)
        {
            uint8_t l_1477[1];
            int32_t l_1498 = 5L;
            uint8_t l_1508 = 0xEAL;
            int32_t l_1520 = 0x16AF458AL;
            int16_t l_1521 = 3L;
            int32_t l_1522 = 1L;
            int32_t l_1530[3];
            uint16_t *l_1564 = &g_1094[3][0];
            uint16_t l_1570 = 0x5546L;
            int32_t **l_1580 = &l_1098[2];
            int32_t l_1584 = 0x6E144CCAL;
            union U0 l_1644[6][2] = {{{0UL},{0xB3059475L}},{{0xB3059475L},{0UL}},{{0xB3059475L},{0xB3059475L}},{{0UL},{0xB3059475L}},{{0xB3059475L},{0UL}},{{0xB3059475L},{0xB3059475L}}};
            int8_t l_1650 = 4L;
            int16_t l_1662[3][6][5] = {{{0x54EAL,0x0D2CL,0x3D35L,0x773DL,0x2277L},{0x0CBBL,0x6ED9L,(-4L),0x0CBBL,0x2DBEL},{(-1L),0xB0B8L,0x8761L,0x0D2CL,0x2277L},{0xA38EL,0x0CBBL,0x54EAL,0x2DBEL,(-1L)},{0x2277L,0x6ED9L,0x773DL,(-1L),0x773DL},{0x2277L,0x2277L,0xFE70L,0xB0B8L,0x28CDL}},{{0xA38EL,0xBB27L,0x78A9L,0x773DL,0xBB27L},{(-1L),(-4L),(-2L),0xBB27L,0x773DL},{0x0CBBL,0xBB27L,0x8761L,0x28CDL,0xB0B8L},{0x54EAL,0x2277L,0x6ED9L,0x773DL,(-1L)},{(-1L),0x6ED9L,0x6ED9L,(-1L),0x2DBEL},{0x28CDL,0x0CBBL,0x8761L,0x2277L,0x0D2CL}},{{0xA38EL,0xB0B8L,(-2L),0x2DBEL,0x0CBBL},{0x0D2CL,0x6ED9L,0x78A9L,0x2277L,0x773DL},{(-1L),0x0D2CL,0xFE70L,(-1L),(-1L)},{0xA38EL,(-1L),0x773DL,0x773DL,(-1L)},{0xBB27L,(-4L),0x54EAL,0x28CDL,0x773DL},{0xB0B8L,0x28CDL,0x8761L,0xBB27L,0x0CBBL}}};
            uint32_t l_1699 = 1UL;
            int64_t *l_1713 = (void*)0;
            int32_t l_1740[10];
            union U0 *l_1747 = &g_333;
            union U0 ** const l_1746 = &l_1747;
            union U0 ** const *l_1745[4][9][3] = {{{&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,(void*)0},{&l_1746,&l_1746,&l_1746},{(void*)0,(void*)0,(void*)0},{(void*)0,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746},{&l_1746,(void*)0,&l_1746},{&l_1746,&l_1746,&l_1746}},{{&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746},{(void*)0,&l_1746,&l_1746},{(void*)0,(void*)0,&l_1746},{&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746},{(void*)0,&l_1746,&l_1746},{&l_1746,(void*)0,&l_1746}},{{&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746},{(void*)0,(void*)0,&l_1746},{(void*)0,&l_1746,(void*)0},{(void*)0,&l_1746,(void*)0},{&l_1746,&l_1746,(void*)0},{&l_1746,&l_1746,(void*)0},{&l_1746,&l_1746,&l_1746},{(void*)0,&l_1746,&l_1746}},{{&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746},{(void*)0,&l_1746,&l_1746},{&l_1746,(void*)0,&l_1746},{&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746},{(void*)0,(void*)0,&l_1746},{(void*)0,&l_1746,(void*)0},{(void*)0,&l_1746,(void*)0}}};
            union U0 ** const ** const l_1744[1] = {&l_1745[0][0][2]};
            union U0 ** const ** const *l_1743[6][4][2] = {{{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]}},{{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]}},{{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]}},{{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]}},{{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]}},{{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]},{&l_1744[0],&l_1744[0]}}};
            int8_t l_1753 = (-5L);
            int32_t l_1762[1][4] = {{0x58AF4F9EL,0x58AF4F9EL,0x58AF4F9EL,0x58AF4F9EL}};
            uint32_t l_1798 = 1UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1477[i] = 0UL;
            for (i = 0; i < 3; i++)
                l_1530[i] = 0x11F7681EL;
            for (i = 0; i < 10; i++)
                l_1740[i] = 0x606E44A2L;
            for (g_696 = 0; (g_696 <= 7); g_696 += 1)
            {
                int8_t l_1475 = 0xA3L;
                int32_t l_1476 = 0xBD6E3511L;
                union U1 l_1488 = {18446744073709551611UL};
                int64_t l_1497 = 0x8E8254A029028BB0LL;
                int32_t l_1500 = (-1L);
                for (g_361 = 0; (g_361 <= 7); g_361 += 1)
                {
                    return l_1465[0];
                }
                l_1500 |= (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u(p_24, (**g_642))) ^ (*g_426)), ((safe_mul_func_int16_t_s_s((0x8CL <= (safe_div_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((++l_1477[0]))), p_24))), (safe_sub_func_int32_t_s_s(((((((safe_rshift_func_int8_t_s_s((*g_59), 5)) < (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((l_1476 = ((((l_1488 , (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0UL, 2)), (safe_sub_func_int32_t_s_s((((safe_add_func_int64_t_s_s(2L, l_1497)) < (**g_1036)) || p_24), l_1498))))) , &l_1060[6][1]) == (void*)0) && l_1499[5])), 3)), (**g_279)))) , l_1488.f2) , l_1497) < 1UL) | 0x7C93D3C0101AFB99LL), p_24)))) || p_24)));
            }
            if (((g_478.f1 = (!(((p_24 | 8UL) != 1L) >= (safe_add_func_int64_t_s_s((l_1274 < (safe_mul_func_int16_t_s_s((-1L), p_24))), (g_794[g_174][g_174] ^= 0xE8B485FDEBD1BCAALL)))))) & (p_24 , (safe_div_func_uint64_t_u_u((l_1274 ^ l_1438), l_1508)))))
            {
                uint8_t l_1509 = 0x35L;
                int32_t l_1519 = 4L;
                int32_t l_1527 = 0L;
                int32_t l_1531 = 0x9B4B2EA4L;
                int32_t l_1555 = 0x2FDF1803L;
                int32_t l_1558 = 0xF84E9CFDL;
                union U1 l_1621[3] = {{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}};
                uint64_t l_1674 = 0xB45FA9FB8F19E5F6LL;
                int i;
                if (l_1509)
                {
                    uint64_t l_1512 = 0x6F693B95D0C4815FLL;
                    int32_t l_1514[6] = {1L,1L,1L,1L,1L,1L};
                    int i, j;
                    l_1515 ^= (l_1514[2] = ((((g_794[(g_114 + 4)][(g_114 + 4)] = (((safe_sub_func_int32_t_s_s((((l_1509 != (l_1512 || 0xC179471794E521A1LL)) == l_1508) | 65527UL), ((void*)0 == &p_24))) < l_1277) <= (((l_1096 ^ p_24) | l_1512) || 0x82F94BAAD0CD05B0LL))) <= p_24) & p_24) < l_1513));
                    l_1498 |= p_24;
                    l_1498 = p_24;
                }
                else
                {
                    int32_t l_1523 = 1L;
                    uint8_t l_1549 = 0xB0L;
                    int32_t l_1552 = 0L;
                    int32_t l_1553[5][10][5] = {{{4L,0x69AFC9B3L,0xE7B0EBC3L,(-1L),(-4L)},{3L,9L,0x4A3E00D3L,0x4A3E00D3L,9L},{4L,0x69AFC9B3L,0xE7B0EBC3L,(-1L),(-4L)},{3L,9L,0x4A3E00D3L,0x4A3E00D3L,9L},{4L,0x69AFC9B3L,0xE7B0EBC3L,(-1L),(-4L)},{3L,9L,0x4A3E00D3L,0x4A3E00D3L,9L},{4L,0x69AFC9B3L,0xE7B0EBC3L,(-1L),(-4L)},{3L,9L,0x4A3E00D3L,0x4A3E00D3L,9L},{4L,0x69AFC9B3L,0xE7B0EBC3L,(-1L),(-4L)},{3L,9L,0x4A3E00D3L,0x4A3E00D3L,9L}},{{4L,0x69AFC9B3L,0xE7B0EBC3L,(-1L),(-4L)},{3L,9L,0x4A3E00D3L,0x4A3E00D3L,9L},{4L,0x69AFC9B3L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L},{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L},{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L},{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L}},{{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L},{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L},{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L},{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L},{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L}},{{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L},{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L},{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L},{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L},{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L}},{{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L},{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L},{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L},{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L},{0x5D24120BL,1L,(-4L),0x69AFC9B3L,0x66537E77L},{0xBE862FECL,0x1933CE69L,9L,9L,0x1933CE69L}}};
                    union U2 l_1581 = {2L};
                    const uint32_t *l_1615 = (void*)0;
                    union U1 l_1616 = {3UL};
                    int16_t l_1617 = (-3L);
                    int i, j, k;
                    for (p_24 = 10; (p_24 == (-2)); p_24 = safe_sub_func_int8_t_s_s(p_24, 8))
                    {
                        int64_t l_1518 = 0xBFE605CBD2FB8A0CLL;
                        int32_t l_1525 = 1L;
                        int32_t l_1526 = 0x19B79659L;
                        int32_t l_1528 = 0x3B8DE4F5L;
                        int32_t l_1529 = 0x18EED44EL;
                        --g_1532;
                    }
                    if ((((safe_mul_func_int16_t_s_s(0xE1C6L, (safe_mod_func_uint64_t_u_u(l_1277, (safe_sub_func_uint64_t_u_u(g_53, (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((l_1327 , (l_1545 = 0xD1L)), 2)), (+((l_1522 &= ((safe_add_func_uint8_t_u_u(l_1549, (0xB3EC56F71F6F3D99LL ^ (((l_1550[0] == (*g_1432)) == p_24) ^ p_24)))) , 0x24A58BB7L)) > 0xF493F559L)))))))))) != p_24) == 1L))
                    {
                        uint32_t l_1551 = 0xFD666F3BL;
                        int32_t l_1554 = 1L;
                        int32_t l_1556 = 0xDC8768EAL;
                        l_1551 = 0x1EC410BEL;
                        l_1527 ^= (-10L);
                        g_1559++;
                        l_1554 = (safe_sub_func_int16_t_s_s((((((**g_641) = (**g_641)) == l_1564) != 4294967294UL) , (g_478.f0 , (safe_rshift_func_uint8_t_u_u(((((**g_1036) = ((safe_unary_minus_func_int32_t_s((safe_div_func_uint32_t_u_u(l_1570, (safe_mul_func_uint16_t_u_u((0x680410C2L & ((((safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((-1L), (~l_1555))), (-1L))) || l_1513) >= l_1558) , l_1530[1])), l_1531)))))) == p_24)) , &g_694) == &l_1431), 0)))), p_24));
                    }
                    else
                    {
                        union U2 *l_1582 = &l_1581;
                        int32_t l_1583 = 1L;
                        (**l_1580) &= (((((**g_279) && ((((safe_add_func_int64_t_s_s((l_1580 == &g_426), (((*l_1582) = l_1581) , (l_1583 != g_360[6][5])))) < (l_1584 > l_1531)) ^ (l_1274 = (l_1585[8][8] |= l_1553[4][7][2]))) >= l_1586)) ^ 0UL) == p_24) ^ (*g_426));
                    }
                    for (l_1217 = (-4); (l_1217 == 12); l_1217++)
                    {
                        int64_t l_1589 = 8L;
                        int64_t *l_1590 = (void*)0;
                        int64_t *l_1591 = &l_1524[3];
                        uint32_t l_1607 = 8UL;
                        uint64_t *l_1610 = &g_167;
                        const uint32_t **l_1614[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        uint64_t *l_1618 = &l_1273;
                        int i;
                        (**l_1580) ^= ((l_1589 >= (((*l_1591) |= 0x7463B1AC58BEE42DLL) || g_1592)) <= (safe_rshift_func_int8_t_s_u(((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((-6L), l_1523)), ((safe_sub_func_int64_t_s_s(l_1527, (l_1553[1][7][4] , g_115))) || 3L))), 0xFFL)) > 9L), 4)));
                        l_1522 = ((**l_1580) = ((&g_177[2][0] == (void*)0) != ((p_24 <= (safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(l_1607, p_24)), (safe_rshift_func_uint8_t_u_s((((g_698[1] && ((*l_1618) = (((*l_1610)--) <= ((l_1615 = g_1613[1]) != ((l_1616 , l_1617) , (void*)0))))) & l_1549) ^ l_1607), 3))))) > 0L)));
                        (*l_1580) = l_1098[2];
                        (*l_1580) = (*l_1580);
                    }
                    for (g_1226 = 0; (g_1226 != 14); ++g_1226)
                    {
                        return l_1621[2];
                    }
                }
                for (l_1438 = 0; (l_1438 == (-14)); l_1438 = safe_sub_func_uint32_t_u_u(l_1438, 9))
                {
                    uint64_t l_1633 = 18446744073709551611UL;
                    uint32_t *l_1642 = &g_712;
                    uint64_t *l_1643 = &g_794[0][7];
                    int32_t l_1649 = 3L;
                    int32_t l_1658[7] = {0xA281630BL,0L,0xA281630BL,0xA281630BL,0L,0xA281630BL,0xA281630BL};
                    int i;
                    if ((((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(((***l_1053) = (***g_278)), ((safe_rshift_func_int16_t_s_s((~((*g_426) | (safe_mul_func_int8_t_s_s((-7L), l_1633)))), ((((safe_mul_func_int16_t_s_s((((*l_1564) = ((**g_1036) = (**g_1036))) > (l_1465[0].f3 , (safe_lshift_func_int16_t_s_s(l_1519, 10)))), (((*l_1643) = (safe_sub_func_uint16_t_u_u(0UL, (((safe_add_func_int8_t_s_s((((*l_1642) = ((1L <= p_24) ^ l_1438)) , 8L), (*g_145))) & 0x42E9L) <= 0UL)))) & g_696))) ^ p_24) , l_1644[3][1]) , 8L))) , (-5L)))) && l_1513), 5)) < 1L) > (**l_1580)))
                    {
                        int64_t l_1645[5][5][6] = {{{0L,0x931B56C938BE643FLL,(-1L),0x5B264A424E25A463LL,0x723E2574D70D44F2LL,2L},{0xA5F5BE155424F4BELL,0x5B264A424E25A463LL,0L,(-2L),0xC16F63DF46A13CE6LL,(-1L)},{(-2L),0xC16F63DF46A13CE6LL,(-1L),0x4EF55F40A1724A45LL,0xC973EDFA6D5C2120LL,0x4EF55F40A1724A45LL},{0x5D4FC5D22B113DB7LL,0xA5F5BE155424F4BELL,0x5D4FC5D22B113DB7LL,5L,0x55F484C3735E54F1LL,1L},{0x55F484C3735E54F1LL,0x4EF55F40A1724A45LL,0x8A6F569E6A193F82LL,0xC52A0650E8E88382LL,0xCF700440979CE939LL,1L}},{{0xC16F63DF46A13CE6LL,(-1L),0x856EFB29014CF1DELL,0xC52A0650E8E88382LL,1L,5L},{0x55F484C3735E54F1LL,0x2A926141B8881EF7LL,0x4EF55F40A1724A45LL,5L,0x252225A311AFA5AALL,0x8A6F569E6A193F82LL},{0x5D4FC5D22B113DB7LL,0x50CE5BA369455EC8LL,0x5B264A424E25A463LL,0x4EF55F40A1724A45LL,0L,0L},{(-2L),0x252225A311AFA5AALL,0x252225A311AFA5AALL,(-2L),(-1L),0xA5D0EF50E587FC02LL},{0xA5F5BE155424F4BELL,5L,0xCF700440979CE939LL,0x5B264A424E25A463LL,0x064D42CB761899DELL,0x55F484C3735E54F1LL}},{{0L,(-1L),(-2L),0L,0x064D42CB761899DELL,0x856EFB29014CF1DELL},{0x931B56C938BE643FLL,5L,0xC16F63DF46A13CE6LL,1L,(-1L),0x2A926141B8881EF7LL},{0x723E2574D70D44F2LL,0x252225A311AFA5AALL,0x24C20626AAC23FE6LL,0x856EFB29014CF1DELL,0L,1L},{0x252225A311AFA5AALL,0x50CE5BA369455EC8LL,1L,0x50CE5BA369455EC8LL,0x252225A311AFA5AALL,0x5D4FC5D22B113DB7LL},{1L,0x2A926141B8881EF7LL,0xA5F5BE155424F4BELL,0L,1L,0x252225A311AFA5AALL}},{{0x50CE5BA369455EC8LL,(-1L),0xC973EDFA6D5C2120LL,0x2A926141B8881EF7LL,0xCF700440979CE939LL,0x252225A311AFA5AALL},{0xC52A0650E8E88382LL,0x4EF55F40A1724A45LL,0xA5F5BE155424F4BELL,0x931B56C938BE643FLL,0x55F484C3735E54F1LL,0x5D4FC5D22B113DB7LL},{0xCF700440979CE939LL,0xA5F5BE155424F4BELL,1L,(-1L),0xC973EDFA6D5C2120LL,1L},{0x2A926141B8881EF7LL,0xC16F63DF46A13CE6LL,0x24C20626AAC23FE6LL,0x24C20626AAC23FE6LL,0xC16F63DF46A13CE6LL,0x2A926141B8881EF7LL},{1L,0x5B264A424E25A463LL,0xC16F63DF46A13CE6LL,0x064D42CB761899DELL,0x723E2574D70D44F2LL,0x856EFB29014CF1DELL}},{{1L,0x931B56C938BE643FLL,(-2L),0xCF700440979CE939LL,0x50CE5BA369455EC8LL,0x55F484C3735E54F1LL},{1L,2L,0xCF700440979CE939LL,0x064D42CB761899DELL,(-1L),0xA5D0EF50E587FC02LL},{1L,0x723E2574D70D44F2LL,0x252225A311AFA5AALL,0x24C20626AAC23FE6LL,0x856EFB29014CF1DELL,0L},{0x2A926141B8881EF7LL,0x8A6F569E6A193F82LL,0x5B264A424E25A463LL,(-1L),0x5B264A424E25A463LL,0x8A6F569E6A193F82LL},{0xCF700440979CE939LL,1L,0x4EF55F40A1724A45LL,0x931B56C938BE643FLL,0x2A926141B8881EF7LL,5L}}};
                        int i, j, k;
                        (**l_1580) = p_24;
                        l_1646++;
                    }
                    else
                    {
                        int8_t l_1651 = 0x60L;
                        int32_t l_1652 = 0x7EF51A98L;
                        int32_t l_1656[9][10] = {{(-1L),0x7E19ABAEL,0x956483F8L,0x0246C909L,(-1L),4L,0x7E19ABAEL,1L,0x232C8AA4L,0x232C8AA4L},{1L,9L,0x956483F8L,0L,0L,0x956483F8L,9L,1L,0L,(-1L)},{0xD364C82BL,0x6F95DDD5L,0x956483F8L,0x232C8AA4L,0L,(-1L),0x6F95DDD5L,1L,(-1L),0L},{4L,(-1L),0xB401F994L,4L,0xD364C82BL,8L,(-1L),8L,0xD364C82BL,4L},{0xB401F994L,(-1L),0xB401F994L,(-1L),1L,0x7FD8438FL,(-1L),8L,0x956483F8L,0xD364C82BL},{(-6L),0x90651794L,0xB401F994L,0xD364C82BL,(-1L),(-1L),0x90651794L,8L,1L,1L},{8L,0x8DB34CE1L,0xB401F994L,0x956483F8L,0x956483F8L,0xB401F994L,0x8DB34CE1L,8L,4L,(-1L)},{0x7FD8438FL,0x25E0CD51L,0xB401F994L,1L,4L,(-6L),0x25E0CD51L,8L,(-1L),0x956483F8L},{(-1L),(-1L),0xB401F994L,4L,0xD364C82BL,8L,(-1L),8L,0xD364C82BL,4L}};
                        int i, j;
                        --l_1653;
                        g_1659++;
                        if (p_24)
                            break;
                    }
                    (**l_1580) = (*g_426);
                    (*g_1209) = (void*)0;
                    g_1663++;
                }
                for (g_53 = 0; (g_53 > 22); g_53 = safe_add_func_int8_t_s_s(g_53, 9))
                {
                    int8_t l_1684 = (-2L);
                    int32_t l_1690 = 1L;
                    int32_t l_1698 = 0x041CDC2FL;
                    (**l_1580) &= (~((*g_426) , 0xCE4C7B0B66DD8BCELL));
                    (*g_270) = (void*)0;
                    if ((*g_426))
                        break;
                    for (l_1558 = (-17); (l_1558 != (-26)); l_1558 = safe_sub_func_uint8_t_u_u(l_1558, 9))
                    {
                        uint64_t *l_1673 = &l_1273;
                        uint8_t *l_1685[9][5][5] = {{{&g_4,&l_1477[0],(void*)0,&l_1508,&g_555},{&g_4,(void*)0,&l_1509,&l_1477[0],(void*)0},{(void*)0,&g_1134,(void*)0,&g_115,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_177[2][0]},{&l_1545,(void*)0,&g_4,(void*)0,&l_1509}},{{&l_1545,(void*)0,(void*)0,&g_177[2][0],&g_1134},{&g_555,(void*)0,&g_555,(void*)0,&g_115},{&l_1508,(void*)0,(void*)0,&l_1477[0],&g_4},{&g_115,&g_1134,&g_4,&l_1509,&g_1134},{(void*)0,(void*)0,(void*)0,&l_1545,&l_1477[0]}},{{&g_177[2][0],&l_1477[0],(void*)0,(void*)0,&l_1508},{&g_1134,&l_1477[0],&g_4,&g_177[2][0],&g_177[2][0]},{&l_1477[0],(void*)0,(void*)0,&l_1477[0],&l_1545},{&l_1477[0],(void*)0,&g_555,&l_1508,&g_4},{(void*)0,&l_1477[0],(void*)0,&g_177[0][0],&g_115}},{{&g_177[2][0],&g_4,&g_4,&l_1508,&g_1134},{&l_1545,&g_1134,(void*)0,&l_1477[0],&l_1509},{&g_115,&l_1545,(void*)0,&g_177[2][0],(void*)0},{(void*)0,&g_555,&l_1509,(void*)0,&g_1134},{&l_1477[0],&g_555,(void*)0,&l_1545,&g_1134}},{{(void*)0,&l_1509,(void*)0,&l_1509,(void*)0},{(void*)0,&l_1509,&l_1477[0],&l_1477[0],&l_1509},{&l_1509,&g_115,&l_1477[0],(void*)0,&g_1134},{&l_1477[0],(void*)0,&l_1509,&g_177[2][0],&g_115},{&l_1508,&g_177[0][0],&l_1545,(void*)0,&g_4}},{{&l_1477[0],&g_177[2][0],(void*)0,(void*)0,&l_1545},{&l_1509,&l_1509,(void*)0,&g_115,(void*)0},{&g_1134,&l_1508,(void*)0,&g_177[0][0],(void*)0},{&l_1509,&g_1134,&g_555,(void*)0,&g_115},{&g_115,&g_1134,&g_177[2][0],&g_177[2][0],&l_1545}},{{&g_177[2][0],&l_1508,(void*)0,&l_1477[0],&l_1477[0]},{&g_115,&l_1509,&g_115,&l_1477[0],(void*)0},{(void*)0,(void*)0,(void*)0,&g_177[1][1],&g_555},{(void*)0,(void*)0,&l_1545,&l_1477[0],&g_1134},{&l_1477[0],&g_1134,(void*)0,&g_555,(void*)0}},{{&g_177[0][0],&g_4,&g_115,(void*)0,&g_177[2][0]},{&g_555,&l_1508,(void*)0,&l_1545,&l_1477[0]},{&l_1508,&g_1134,&g_177[2][0],(void*)0,(void*)0},{&l_1477[0],&g_1134,&g_555,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_1545,&g_1134}},{{&g_4,(void*)0,(void*)0,(void*)0,&g_4},{(void*)0,&g_177[1][1],&g_177[2][0],&g_555,(void*)0},{(void*)0,&l_1477[0],&l_1509,&l_1477[0],(void*)0},{&l_1509,&g_4,&g_1134,&g_177[1][1],(void*)0},{(void*)0,&l_1477[0],&g_115,&l_1477[0],&g_4}}};
                        int32_t l_1686 = 0x49B833D1L;
                        int i, j, k;
                        l_1674 &= (p_24 != (((safe_mod_func_int8_t_s_s((***g_278), ((***l_1053) = 5L))) <= ((*l_1673) |= p_24)) != 0x8483L));
                        (**l_1580) = (safe_sub_func_uint32_t_u_u((l_1698 = (safe_lshift_func_uint16_t_u_s((+((*l_1673) &= 2UL)), ((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int16_t_s_u((+(((l_1684 != p_24) | (l_1684 ^ (((l_1690 ^= (l_1687++)) < (((safe_sub_func_uint64_t_u_u(l_1430, 0x3AD209EDBB277A2ALL)) == l_1096) | p_24)) , (safe_rshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s(((0x1B2DL > (**l_1580)) <= p_24), p_24)) , p_24), 2))))) >= 0x47E2L)), l_1697)))) & l_1686)))), p_24));
                        l_1686 ^= (*g_426);
                        if (l_1699)
                            continue;
                    }
                }
            }
            else
            {
                uint8_t l_1706 = 246UL;
                int32_t l_1714 = 0L;
                uint64_t *l_1719 = &g_794[g_174][g_174];
                uint64_t *l_1720 = (void*)0;
                uint64_t *l_1721 = &g_210[1][0];
                union U1 l_1732[5] = {{0x4DAC3CDCL},{0x4DAC3CDCL},{0x4DAC3CDCL},{0x4DAC3CDCL},{0x4DAC3CDCL}};
                int32_t l_1752 = 0x1A7717D6L;
                int32_t l_1754 = 0x19F4EA21L;
                int32_t l_1755 = 1L;
                int32_t l_1758 = 0x97D30F5CL;
                int i;
                if (((safe_mod_func_int64_t_s_s(g_174, (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((l_1706++), ((((l_1714 = ((*l_1180) = (safe_mod_func_int8_t_s_s(3L, (safe_mul_func_int16_t_s_s(l_1513, (l_1713 == (void*)0))))))) , (g_1715 , g_696)) && (l_1128 = g_1592)) >= ((*l_1721) = ((*l_1719) = ((((safe_lshift_func_uint16_t_u_s((+p_24), 3)) >= 0x70EEBF3A67A30D86LL) != (***g_641)) >= p_24)))))) <= p_24), 7L)))) < (*g_426)))
                {
                    union U0 *****l_1729 = &g_786;
                    int32_t l_1748 = 0xD7AA4E98L;
                    uint32_t l_1785 = 0x13346D91L;
                    (**l_1580) |= 1L;
                    (**l_1580) = (!(safe_lshift_func_uint8_t_u_u(p_24, (safe_rshift_func_int8_t_s_s((***g_278), (safe_div_func_int8_t_s_s((l_1748 = (((l_1729 != (l_1743[3][3][1] = (((safe_add_func_int16_t_s_s((l_1732[0] , ((safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(0xB041L, 0x0C62L)), (!(safe_div_func_int32_t_s_s((l_1714 = (l_1740[2] & p_24)), p_24))))) >= 1UL)), 65535UL)) , (**l_1580)) , g_1741))) <= g_694) , l_1748)), 255UL)))))));
                    for (l_1646 = 0; (l_1646 >= 44); l_1646 = safe_add_func_uint32_t_u_u(l_1646, 7))
                    {
                        int32_t l_1756 = 0x47E48CD4L;
                        int32_t l_1757 = 8L;
                        uint32_t l_1759 = 1UL;
                        (**g_722) = g_1751;
                        ++l_1759;
                        (**l_1580) = l_1762[0][1];
                        (**l_1580) &= (p_24 > l_1748);
                    }
                    for (l_1273 = 0; (l_1273 != 34); l_1273++)
                    {
                        const uint16_t l_1774 = 65532UL;
                        l_1785 = (p_24 <= (safe_div_func_int16_t_s_s((safe_div_func_uint16_t_u_u((~p_24), 0x8079L)), ((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_1774, (((void*)0 == (**g_830)) > (safe_mul_func_int8_t_s_s(((((0xA1L != ((***g_278) = ((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((~((safe_unary_minus_func_int8_t_s(((safe_mod_func_int64_t_s_s(((((**l_1580) |= (&l_1277 != &l_1706)) & (***g_278)) , p_24), 1UL)) <= (***g_278)))) | 6UL)) || l_1732[0].f0), 3)) == 0x36C351C3L), 3)) <= p_24))) , (void*)0) == &g_53) , p_24), (-3L)))))), 0x4355L)) & 1L))));
                        if (l_1714)
                            continue;
                    }
                }
                else
                {
                    uint16_t l_1788 = 0UL;
                    int32_t l_1797[9] = {(-1L),0x66E7ED37L,(-1L),(-1L),0x66E7ED37L,(-1L),(-1L),0x66E7ED37L,(-1L)};
                    int i;
                    if (((l_1788 | (l_1732[0].f0 <= (l_1797[4] |= ((!0UL) != (l_1788 < (safe_sub_func_uint16_t_u_u(((l_1792 , (((p_24 > ((**l_1580) = l_1754)) != (safe_add_func_int8_t_s_s(p_24, (safe_sub_func_uint8_t_u_u(((((**g_279) = 0xD9L) && p_24) , p_24), 1UL))))) || p_24)) < (-6L)), (***g_1035)))))))) ^ p_24))
                    {
                        (**l_1580) ^= 1L;
                        (*l_1580) = &l_1513;
                    }
                    else
                    {
                        (**l_1580) = l_1085;
                        (**l_1580) = (*g_426);
                        if (l_1513)
                            break;
                    }
                }
                (**l_1580) = l_1798;
                g_1801--;
            }
            for (g_696 = 0; (g_696 <= 0); g_696 += 1)
            {
                union U2 l_1805 = {3L};
                int8_t * const ***l_1806 = &l_1053;
                int8_t * const ****l_1807[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1807[i] = &l_1806;
                for (g_1532 = 0; (g_1532 <= 0); g_1532 += 1)
                {
                    union U1 l_1804 = {0x37E142DAL};
                    return l_1804;
                }
                if (l_1662[g_696][g_114][g_696])
                    continue;
                g_1808 = (l_1805 , l_1806);
            }
            if ((safe_add_func_uint32_t_u_u((g_478 , (**l_1580)), ((65535UL != ((*l_1564)++)) & ((**l_1458) == l_1316)))))
            {
                uint32_t l_1815[2][6] = {{0xBECC5E88L,4294967287UL,0xBECC5E88L,4294967287UL,0xBECC5E88L,4294967287UL},{0xBECC5E88L,4294967287UL,0xBECC5E88L,4294967287UL,0xBECC5E88L,4294967287UL}};
                uint32_t ***l_1846[10];
                uint64_t *l_1851 = &l_1273;
                int32_t *l_1862[1];
                int i, j;
                for (i = 0; i < 10; i++)
                    l_1846[i] = &g_325;
                for (i = 0; i < 1; i++)
                    l_1862[i] = (void*)0;
                if ((l_1657 > (**g_279)))
                {
                    for (g_75 = 1; (g_75 >= 0); g_75 -= 1)
                    {
                        int i;
                        return l_1465[g_114];
                    }
                    l_1815[0][2]++;
                    for (l_1521 = 0; (l_1521 > 12); l_1521++)
                    {
                        uint16_t l_1820 = 0x3A37L;
                        if (l_1820)
                            break;
                        if ((*g_426))
                            break;
                    }
                }
                else
                {
                    int16_t l_1840 = 0x478DL;
                    uint64_t *l_1841[4] = {&l_1273,&l_1273,&l_1273,&l_1273};
                    int i;
                    l_1522 &= ((((g_692 | (((**l_1580) && 0x3B82L) ^ (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(p_24, 0)), ((safe_mod_func_int32_t_s_s(((((0x35L != (+((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_24, 5)), (((l_1128 = l_1840) , (safe_rshift_func_int8_t_s_s(l_1545, 2))) || (**l_1580)))), p_24)), p_24)), l_1815[0][2])), 11)) == 0xB26A0C67L))) && (**l_1580)) ^ 0x827A55C3L) <= 6UL), l_1697)) ^ p_24))))) != p_24) < (****g_1808)) ^ p_24);
                }
                if ((((((***g_1809) || ((void*)0 == l_1846[2])) , (**l_1580)) && (safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(0x55CB5213L, (**l_1580))), (((((*l_1851) = 18446744073709551614UL) , ((safe_mod_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_s((1UL == ((safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((*l_1180) = p_24), p_24)), p_24)) & p_24)), 1)) == (**l_1580)) , p_24), l_1585[2][7])) , 0xA6DEL)) <= 1L) <= 0UL)))) ^ 0xFBD4L))
                {
                    (**l_1580) &= (-9L);
                    for (g_1557 = 0; (g_1557 == 23); g_1557++)
                    {
                        if ((*g_426))
                            break;
                        l_1863[7][0] = l_1862[0];
                        g_687 = p_24;
                    }
                }
                else
                {
                    l_1128 = ((**l_1580) = (p_24 < p_24));
                }
            }
            else
            {
                int32_t *l_1864 = &g_1226;
                (**l_1580) = (**l_1580);
                (*g_270) = (p_24 , l_1864);
                (*l_1580) = (*g_270);
                for (g_691 = 0; (g_691 == 2); ++g_691)
                {
                    uint8_t l_1867 = 0x78L;
                    uint16_t l_1877 = 8UL;
                    int32_t l_1892 = (-10L);
                    --l_1867;
                    for (g_361 = 0; (g_361 <= 1); ++g_361)
                    {
                        uint64_t l_1878[2];
                        uint8_t *l_1889 = &g_555;
                        int64_t *l_1890 = &g_686;
                        int64_t *l_1891 = &g_1800;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1878[i] = 18446744073709551608UL;
                        g_50 |= (*g_271);
                        (**g_270) = (safe_mod_func_uint64_t_u_u(g_114, ((g_1592 |= (+((safe_sub_func_uint64_t_u_u(g_167, ((**l_1580) != ((l_1877 | l_1878[1]) <= (l_1877 > (safe_rshift_func_int16_t_s_s((1L && (safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((((*l_1891) = (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((0x962659EB3118C159LL == ((*l_1890) |= (((*l_1889) = p_24) <= p_24))), p_24)), 5))) >= g_1532), l_1131[1][2][6])), (-10L)))), 1))))))) == l_1892))) , (**l_1580))));
                        if (l_1878[0])
                            continue;
                    }
                }
            }
        }
    }
    g_75 = (safe_mod_func_int32_t_s_s((l_1465[1] , (!(((*l_1375) , (p_24 != (safe_sub_func_uint16_t_u_u(l_1653, 2UL)))) > (l_1513 = ((**g_1036) ^= ((safe_add_func_uint32_t_u_u(p_24, (l_1900 == l_1900))) | ((safe_sub_func_uint8_t_u_u((l_1905 <= 0L), (**g_1810))) >= 0x480FL))))))), (*g_426)));
    return l_1465[0];
}







static uint64_t func_25(int8_t * p_26, int8_t p_27, int8_t p_28, int8_t * p_29)
{
    uint8_t *l_917 = &g_115;
    uint8_t *l_919 = &g_177[2][0];
    uint8_t **l_918 = &l_919;
    uint32_t ***l_931[2];
    uint32_t ****l_930 = &l_931[0];
    int32_t l_932 = 1L;
    int32_t *l_933 = &g_50;
    union U0 *l_942 = (void*)0;
    uint16_t ** const *l_975 = (void*)0;
    uint16_t *l_1005 = &g_478.f2;
    uint16_t *l_1006 = &g_478.f2;
    uint16_t *l_1007[3];
    int32_t l_1008 = 0L;
    int32_t l_1009 = 0xE32B0BD7L;
    int32_t l_1010 = 0xA32E4261L;
    int32_t l_1011 = 0x0C65E396L;
    int32_t l_1012 = 0x8CAF24F4L;
    int32_t l_1013 = 0x2B9EE5EFL;
    int32_t l_1014 = (-10L);
    int32_t l_1015 = 0xACE951F5L;
    int32_t l_1016 = 0xADDD7F08L;
    int32_t l_1017 = 0x77AA4C22L;
    int32_t l_1018 = 0x7648655AL;
    int32_t l_1019 = (-2L);
    int32_t l_1020 = 0xBF4C67A8L;
    int32_t l_1021 = 6L;
    int32_t l_1022 = 0x00A74EF7L;
    int32_t l_1023 = 1L;
    int32_t l_1024 = 0x9882621DL;
    int32_t l_1025 = (-1L);
    int32_t l_1026 = 0x6F1F77DFL;
    int32_t l_1027 = 0x6D13835FL;
    int32_t l_1028 = 1L;
    int32_t l_1029 = 0xE95DDFBEL;
    int32_t l_1030 = 0xCFDA3DB7L;
    int32_t l_1031 = 4L;
    uint64_t l_1032 = 0x3C6D51C11DEB3E1ALL;
    uint16_t * const ***l_1037[1][10] = {{(void*)0,(void*)0,&g_1035,(void*)0,(void*)0,&g_1035,(void*)0,(void*)0,&g_1035,(void*)0}};
    uint32_t **l_1042 = (void*)0;
    int32_t l_1043[7] = {0x837BAEA9L,0x837BAEA9L,0x837BAEA9L,0x837BAEA9L,0x837BAEA9L,0x837BAEA9L,0x837BAEA9L};
    const uint32_t l_1044 = 3UL;
    uint32_t l_1045[10] = {0xC70A293FL,0x06FB82F1L,0x7E9B1662L,0x7E9B1662L,0x06FB82F1L,0xC70A293FL,0x06FB82F1L,0x7E9B1662L,0x7E9B1662L,0x06FB82F1L};
    int i, j;
    for (i = 0; i < 2; i++)
        l_931[i] = &g_325;
    for (i = 0; i < 3; i++)
        l_1007[i] = &g_478.f2;
    (*l_933) = ((l_917 != (g_920[3][1] = ((*l_918) = (void*)0))) < ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u(g_692, ((((((g_478 , 255UL) > p_27) != (~0xFB6DL)) , l_930) != (void*)0) && g_698[0]))) , l_932), p_27)) || l_932), l_932)), 6)) || 0xB4F1D954L));
    for (g_146 = 21; (g_146 == (-22)); g_146--)
    {
        uint32_t l_951 = 1UL;
        uint16_t * const **l_966 = (void*)0;
        int16_t l_967 = 0x37E3L;
        int32_t l_989 = 0x06A05518L;
        uint32_t l_993 = 0xAFE76086L;
        if ((*l_933))
            break;
        for (g_50 = 1; (g_50 >= 0); g_50 -= 1)
        {
            uint32_t *l_937 = &g_262;
            uint32_t **l_936 = &l_937;
            union U0 **l_943 = &l_942;
            union U0 * const l_944 = &g_333;
            int32_t *l_945 = &g_691;
            uint32_t l_950 = 0x1C38375AL;
            int i, j;
            l_932 = ((1UL != (l_936 != (void*)0)) && (safe_mod_func_int64_t_s_s(((safe_sub_func_int32_t_s_s(((*l_945) = (((*l_943) = l_942) == l_944)), (safe_div_func_uint64_t_u_u((g_794[(g_50 + 4)][(g_50 + 5)] | (((0x63DAC43DL == ((((g_2[g_50] & (((-1L) | 0x5772B023C51D9A6ALL) < l_950)) >= p_28) && p_27) < 0x49D93FCE4DA61F89LL)) , p_27) | 65529UL)), p_27)))) != 0xDFL), l_951)));
            (*g_270) = l_937;
            (**g_270) ^= (*l_945);
        }
        (*l_933) = ((safe_add_func_uint16_t_u_u(((***g_641) = p_27), p_28)) && ((p_27 || (*g_403)) == (safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(l_951, 0xC018L)), (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((((safe_unary_minus_func_uint16_t_u((**g_642))) || (~0x7887169DA5DA521ELL)) , ((((((safe_sub_func_int64_t_s_s((((((void*)0 != l_966) >= p_27) | p_27) || 0x3BE74C97L), 0x43D74D6E0631DC00LL)) ^ l_951) && l_951) ^ l_951) == p_27) || p_27)), 12)), l_967))))));
        for (g_694 = 0; (g_694 > 18); ++g_694)
        {
            union U0 l_974 = {1UL};
            int32_t l_996 = 0x31B649B8L;
            if (((*l_933) = (p_28 > (*l_933))))
            {
                uint16_t l_984 = 0xD845L;
                for (g_50 = 0; (g_50 == 24); g_50++)
                {
                    int8_t l_982[6][8][4] = {{{5L,0x68L,0xC6L,(-6L)},{0x15L,0x9DL,9L,0xEFL},{0x29L,0xC3L,5L,5L},{(-4L),(-1L),0L,(-1L)},{2L,(-4L),0x15L,0x75L},{(-1L),0xC6L,0L,4L},{7L,0x0DL,0xF1L,(-5L)},{7L,0x41L,0L,0L}},{{(-1L),(-5L),0x15L,0xC6L},{2L,0xE9L,0L,0xF4L},{0L,4L,(-5L),(-6L)},{0L,0xE2L,0x15L,0x64L},{(-1L),(-1L),0x15L,(-10L)},{(-5L),0xF4L,(-6L),0x0DL},{5L,0L,0x9DL,0x68L},{0x40L,(-7L),(-7L),0x40L}},{{0x9DL,0x71L,7L,4L},{0x41L,0x29L,0xE2L,4L},{2L,0x15L,0xF4L,4L},{0x15L,0x29L,0L,4L},{0xEFL,0x71L,(-1L),0x40L},{0xCEL,(-7L),0x41L,0x68L},{0x29L,0L,0xC6L,0x0DL},{0x53L,0xF4L,0x35L,(-10L)}},{{0x92L,(-1L),4L,0x64L},{(-7L),0xE2L,0xF1L,(-6L)},{0x15L,4L,0xAEL,(-4L)},{(-4L),2L,(-4L),0x15L},{0x0DL,0xC3L,(-1L),(-1L)},{9L,0x68L,2L,0xC3L},{(-1L),0L,2L,(-1L)},{9L,7L,(-1L),(-7L)}},{{0x0DL,0L,(-4L),0xEFL},{(-4L),0xEFL,0xAEL,0x92L},{0x15L,0x40L,0xF1L,5L},{(-7L),0xF1L,4L,0x9DL},{0x92L,0x2AL,0x35L,7L},{0x53L,9L,0xC6L,0xE9L},{0x29L,(-6L),0x41L,0x41L},{0xCEL,0xCEL,(-1L),0xF1L}},{{0xEFL,0xEBL,0L,0x71L},{0x15L,0x41L,0xF4L,0L},{2L,0x41L,0xE2L,0x71L},{0x41L,0xEBL,7L,0xF1L},{0x9DL,0xCEL,(-7L),0x41L},{0x40L,(-6L),0x9DL,0xE9L},{5L,9L,(-6L),7L},{(-5L),0x2AL,0x15L,0x9DL}}};
                    int32_t l_991[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_991[i] = 0L;
                    for (g_60 = 19; (g_60 <= 28); g_60 = safe_add_func_int32_t_s_s(g_60, 9))
                    {
                        int64_t *l_976[5] = {&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]};
                        int32_t l_979[7] = {1L,1L,1L,1L,1L,1L,1L};
                        int32_t *l_983 = &g_691;
                        int i;
                        (*l_983) &= (((l_982[5][2][3] ^= ((((g_478 , (g_794[5][0] , (g_686 = ((l_974 , l_974.f0) != ((void*)0 != l_975))))) ^ (safe_div_func_int32_t_s_s(8L, l_979[0]))) >= (safe_lshift_func_int8_t_s_s((l_974.f0 , (*l_933)), (***g_278)))) >= p_28)) != l_967) ^ l_979[0]);
                        (*l_983) |= l_984;
                    }
                    for (g_687 = 14; (g_687 < 5); g_687 = safe_sub_func_int64_t_s_s(g_687, 7))
                    {
                        int32_t *l_987 = &g_53;
                        int32_t *l_988 = &g_691;
                        int32_t *l_990 = &l_989;
                        int32_t *l_992[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_992[i] = (void*)0;
                        --l_993;
                    }
                    if ((*g_426))
                        continue;
                }
            }
            else
            {
                return l_996;
            }
        }
    }
    l_1045[2] ^= (((*l_933) , ((&l_933 != (((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((((*l_933) < p_27) , ((**g_642) = p_27)), (((l_1032--) <= ((g_1035 = g_1035) != (void*)0)) || (((((safe_mul_func_int8_t_s_s((8UL > ((safe_mul_func_int16_t_s_s(p_27, (*l_933))) & (*l_933))), (***g_278))) , p_27) , l_1042) != l_1042) && p_27)))), p_28)), l_1043[1])) <= l_1044) , &g_426)) < (*g_145))) != p_28);
    return (*l_933);
}







static int8_t * func_30(union U0 p_31)
{
    union U0 l_49 = {0x0BB9A67BL};
    int8_t *l_878 = &g_146;
    int32_t *l_906 = (void*)0;
    int32_t *l_907 = &g_691;
    union U0 *** const l_908 = &g_315;
    uint32_t *** const l_912 = &g_325;
    uint32_t *** const *l_911 = &l_912;
    uint32_t *l_916 = (void*)0;
    uint32_t **l_915 = &l_916;
    (*l_907) = (safe_div_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(0UL, func_39(func_42(func_47(l_49), (*g_279), l_878, l_878), l_878))), l_49.f0)) == p_31.f0), g_210[2][2]));
    (*l_907) = (((l_49 , (*g_786)) == l_908) | ((safe_div_func_uint32_t_u_u(((l_911 != &l_912) == (safe_mul_func_int8_t_s_s((((void*)0 == (*g_830)) < p_31.f0), (p_31.f0 >= (**g_642))))), p_31.f0)) , 1L));
    (*l_907) &= (((*l_915) = l_906) != (p_31 , l_907));
    return l_878;
}







static int16_t func_39(int8_t * p_40, const int8_t * const p_41)
{
    int32_t *l_884 = &g_53;
    int32_t *l_885 = &g_113;
    int32_t *l_886 = &g_113;
    int32_t *l_887 = &g_50;
    int32_t *l_888 = &g_691;
    int32_t *l_889 = &g_478.f1;
    int32_t *l_890 = &g_691;
    int32_t *l_891[9] = {&g_113,&g_113,&g_687,&g_113,&g_113,&g_687,&g_113,&g_113,&g_687};
    uint32_t l_892[10] = {0xA7591C82L,0xA7591C82L,0xA84C218DL,0xA7591C82L,0xA7591C82L,0xA84C218DL,0xA7591C82L,0xA7591C82L,0xA84C218DL,0xA7591C82L};
    union U1 l_897 = {18446744073709551611UL};
    union U2 l_900 = {-9L};
    union U1 **l_904[5][1];
    union U1 ***l_903 = &l_904[4][0];
    uint8_t l_905 = 0xF2L;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_904[i][j] = (void*)0;
    }
    for (g_687 = 0; (g_687 <= 1); g_687 += 1)
    {
        return (*g_403);
    }
    ++l_892[3];
    (*l_887) |= (((safe_lshift_func_uint16_t_u_s(((l_897 , ((*l_884) || ((l_897 , &g_668) != (l_900 , ((*l_888) , ((*g_426) , ((*l_903) = ((safe_mul_func_uint8_t_u_u(0xE6L, g_115)) , (void*)0)))))))) , 0x80B8L), (**g_402))) || l_905) | (*p_40));
    return (*l_890);
}







static int8_t * func_42(int8_t * p_43, int8_t * p_44, int8_t * p_45, int8_t * p_46)
{
    int32_t *l_879 = &g_75;
    for (g_53 = 2; (g_53 >= 0); g_53 -= 1)
    {
        uint16_t l_882 = 0UL;
        (*g_270) = l_879;
        (**g_270) = ((safe_lshift_func_int16_t_s_s((*l_879), 7)) <= 0xE4L);
        for (g_50 = 0; g_50 < 4; g_50 += 1)
        {
            for (g_361 = 0; g_361 < 9; g_361 += 1)
            {
                g_187[g_50][g_361] = &g_188;
            }
        }
        if (l_882)
            break;
        for (l_882 = 0; (l_882 <= 2); l_882 += 1)
        {
            int32_t **l_883 = &l_879;
            (**g_270) = ((l_883 = &g_271) == &g_426);
        }
    }
    return (**g_278);
}







static int8_t * func_47(union U0 p_48)
{
    int8_t * const l_65 = &g_60;
    int32_t l_87[3];
    union U2 l_142 = {0L};
    int8_t *l_143 = (void*)0;
    uint64_t *l_171 = &g_167;
    union U0 l_260 = {0x33FC4FF3L};
    int32_t **l_272[3];
    uint32_t l_276 = 18446744073709551607UL;
    int16_t *l_355 = &g_114;
    int16_t **l_354 = &l_355;
    const uint32_t l_379[1][2] = {{0x50483217L,0x50483217L}};
    int64_t l_397 = 0L;
    uint8_t l_418 = 0UL;
    union U1 *l_457 = &g_85[2];
    const int16_t *l_476 = &g_477;
    const int16_t **l_475 = &l_476;
    const int16_t ***l_474 = &l_475;
    uint32_t **l_499 = (void*)0;
    uint64_t l_589[8][10][3] = {{{1UL,9UL,0x9D664EF172472D19LL},{0xE7C46AA5BE53F387LL,18446744073709551615UL,0UL},{0x146C2BFC484FA863LL,0x11A9A1B33173A658LL,0UL},{0UL,18446744073709551615UL,2UL},{1UL,18446744073709551615UL,18446744073709551611UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{3UL,18446744073709551615UL,0UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551611UL,0UL,0x613D5D740A9F4EE3LL},{18446744073709551615UL,18446744073709551615UL,0UL}},{{0x15D1D5FDC4DD6A45LL,0UL,0x426C7D89A73C9113LL},{0UL,18446744073709551615UL,0xF9BE570D36463645LL},{0x73123194980476B5LL,18446744073709551615UL,1UL},{18446744073709551615UL,18446744073709551615UL,0x948A115CF2FA5532LL},{0x1FF90CE3C15ABD8DLL,18446744073709551615UL,0x25575E4686938188LL},{0UL,18446744073709551615UL,18446744073709551615UL},{0x73123194980476B5LL,0x11A9A1B33173A658LL,0x9D664EF172472D19LL},{18446744073709551614UL,0xBA6882967925FE94LL,2UL},{0x15D1D5FDC4DD6A45LL,1UL,0UL},{18446744073709551615UL,0UL,2UL}},{{18446744073709551611UL,18446744073709551615UL,0x9D664EF172472D19LL},{18446744073709551615UL,1UL,18446744073709551615UL},{3UL,0UL,0x25575E4686938188LL},{18446744073709551615UL,18446744073709551615UL,0x948A115CF2FA5532LL},{1UL,0UL,1UL},{18446744073709551614UL,1UL,0xF9BE570D36463645LL},{0x146C2BFC484FA863LL,1UL,0x426C7D89A73C9113LL},{18446744073709551615UL,0UL,0UL},{0x7AF3774E8F814F0DLL,18446744073709551615UL,0x613D5D740A9F4EE3LL},{18446744073709551615UL,0xBA6882967925FE94LL,18446744073709551615UL}},{{0x146C2BFC484FA863LL,1UL,0UL},{18446744073709551614UL,18446744073709551615UL,18446744073709551615UL},{1UL,1UL,18446744073709551611UL},{18446744073709551615UL,18446744073709551615UL,2UL},{3UL,1UL,0UL},{18446744073709551615UL,18446744073709551615UL,0xD78E579FE4CA5F5CLL},{18446744073709551611UL,0UL,0x613D5D740A9F4EE3LL},{18446744073709551615UL,18446744073709551615UL,0x948A115CF2FA5532LL},{0x15D1D5FDC4DD6A45LL,0UL,0x426C7D89A73C9113LL},{18446744073709551614UL,18446744073709551615UL,0xBA6882967925FE94LL}},{{0x73123194980476B5LL,1UL,1UL},{0UL,18446744073709551615UL,0UL},{0x1FF90CE3C15ABD8DLL,1UL,0x25575E4686938188LL},{18446744073709551615UL,18446744073709551615UL,0xD78E579FE4CA5F5CLL},{0x73123194980476B5LL,1UL,0x9D664EF172472D19LL},{0UL,0xBA6882967925FE94LL,18446744073709551615UL},{0x15D1D5FDC4DD6A45LL,18446744073709551615UL,0UL},{18446744073709551615UL,0UL,18446744073709551615UL},{18446744073709551611UL,1UL,0x9D664EF172472D19LL},{18446744073709551615UL,1UL,0xD78E579FE4CA5F5CLL}},{{3UL,0UL,0x25575E4686938188LL},{18446744073709551615UL,18446744073709551615UL,0UL},{1UL,0UL,1UL},{0UL,1UL,0xBA6882967925FE94LL},{0x146C2BFC484FA863LL,18446744073709551615UL,0x426C7D89A73C9113LL},{0UL,0UL,0x948A115CF2FA5532LL},{0x7AF3774E8F814F0DLL,1UL,0x613D5D740A9F4EE3LL},{0UL,0xBA6882967925FE94LL,0xD78E579FE4CA5F5CLL},{0x146C2BFC484FA863LL,0x11A9A1B33173A658LL,0UL},{0UL,18446744073709551615UL,2UL}},{{1UL,18446744073709551615UL,18446744073709551611UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{3UL,18446744073709551615UL,0UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551611UL,0UL,0x613D5D740A9F4EE3LL},{18446744073709551615UL,0x948A115CF2FA5532LL,0xD78E579FE4CA5F5CLL},{0x1FF90CE3C15ABD8DLL,9UL,18446744073709551612UL},{18446744073709551615UL,0UL,18446744073709551615UL},{1UL,1UL,0x7AF3774E8F814F0DLL},{1UL,18446744073709551615UL,18446744073709551615UL}},{{0UL,18446744073709551615UL,0UL},{2UL,1UL,0xBA6882967925FE94LL},{1UL,0xD7D53E6138972D18LL,0x613D5D740A9F4EE3LL},{18446744073709551615UL,18446744073709551606UL,18446744073709551613UL},{0x1FF90CE3C15ABD8DLL,1UL,0x1E7FC3886ECA447ELL},{0UL,18446744073709551615UL,18446744073709551613UL},{0x04CA0162EB62D4E1LL,1UL,0x613D5D740A9F4EE3LL},{7UL,18446744073709551615UL,0xBA6882967925FE94LL},{0x46B72D2131C486CELL,0x16312B625AD7D966LL,0UL},{18446744073709551614UL,7UL,18446744073709551615UL}}};
    uint16_t **l_639 = &g_187[2][0];
    uint16_t ***l_638 = &l_639;
    uint8_t l_753[3];
    union U0 *** const *l_789 = &g_787;
    uint32_t *l_797 = &g_85[2].f0;
    int16_t l_819 = 0xE833L;
    uint16_t l_834 = 0x1039L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_87[i] = 6L;
    for (i = 0; i < 3; i++)
        l_272[i] = &g_271;
    for (i = 0; i < 3; i++)
        l_753[i] = 0x59L;
    for (g_50 = (-9); (g_50 == 18); ++g_50)
    {
        uint16_t l_56 = 3UL;
        int32_t l_112[8][6][5] = {{{0xBCF58CCDL,0x19FB5638L,0xCE4C8D1EL,(-1L),0L},{0L,(-1L),0x3C84519AL,4L,0L},{0xBCF58CCDL,(-9L),(-1L),0x876F31F8L,(-10L)},{0L,0xD51CD1B9L,(-10L),0xD402E0EFL,1L},{0xBCF58CCDL,0xA51F8956L,0x8B7C26C7L,0x62AC5EDFL,0x2EF126EDL},{0L,(-1L),0x21C00E8DL,0x21C00E8DL,(-1L)}},{{0xBCF58CCDL,0x10173A06L,0L,(-1L),1L},{0L,1L,0xD402E0EFL,(-10L),0xD51CD1B9L},{0xBCF58CCDL,0L,0x02ECD410L,0x81C6DCE7L,(-1L)},{0L,0L,4L,0x3C84519AL,(-1L)},{0xBCF58CCDL,0x19FB5638L,0xCE4C8D1EL,(-1L),0L},{0L,(-1L),0x3C84519AL,4L,0L}},{{0xBCF58CCDL,(-9L),(-1L),0x876F31F8L,(-10L)},{0L,0xD51CD1B9L,(-10L),0xD402E0EFL,1L},{0xBCF58CCDL,0xA51F8956L,0x8B7C26C7L,0x62AC5EDFL,0x2EF126EDL},{0L,(-1L),0x21C00E8DL,0x21C00E8DL,(-1L)},{0xBCF58CCDL,0x10173A06L,0L,(-1L),1L},{0L,1L,0xD402E0EFL,(-10L),0xD51CD1B9L}},{{0xBCF58CCDL,0L,0x02ECD410L,0x81C6DCE7L,(-1L)},{0L,0L,4L,0x3C84519AL,(-1L)},{0xBCF58CCDL,0x19FB5638L,0xCE4C8D1EL,(-1L),0L},{0L,(-1L),0x3C84519AL,4L,0L},{0xBCF58CCDL,(-9L),(-1L),0x876F31F8L,(-10L)},{0L,0xD51CD1B9L,(-10L),0xD402E0EFL,1L}},{{0xBCF58CCDL,0xA51F8956L,0x8B7C26C7L,0x62AC5EDFL,0x2EF126EDL},{0L,(-1L),0x21C00E8DL,0x21C00E8DL,(-1L)},{0xBCF58CCDL,0x10173A06L,0L,(-1L),1L},{0L,1L,0xD402E0EFL,(-10L),0xD51CD1B9L},{0xBCF58CCDL,0L,0x02ECD410L,0x81C6DCE7L,(-1L)},{0L,0L,0xD51CD1B9L,1L,0x0483F316L}},{{0xF21D7ACAL,2L,0L,0x19FB5638L,0L},{0xFECAEFE6L,0x0483F316L,1L,0xD51CD1B9L,0L},{0xF21D7ACAL,(-1L),1L,0x10173A06L,0L},{0xFECAEFE6L,0x9FA619A7L,(-1L),0L,8L},{0xF21D7ACAL,0xD480AB10L,(-10L),(-9L),8L},{0xFECAEFE6L,0xA15E26FEL,(-1L),(-1L),0xA15E26FEL}},{{0xF21D7ACAL,0x377D1C13L,(-1L),0L,0x981DF769L},{0xFECAEFE6L,8L,0L,(-1L),0x9FA619A7L},{0xF21D7ACAL,0x51B9DC45L,0x2EF126EDL,0xA51F8956L,0x84261728L},{0xFECAEFE6L,0L,0xD51CD1B9L,1L,0x0483F316L},{0xF21D7ACAL,2L,0L,0x19FB5638L,0L},{0xFECAEFE6L,0x0483F316L,1L,0xD51CD1B9L,0L}},{{0xF21D7ACAL,(-1L),1L,0x10173A06L,0L},{0xFECAEFE6L,0x9FA619A7L,(-1L),0L,8L},{0xF21D7ACAL,0xD480AB10L,(-10L),(-9L),8L},{0xFECAEFE6L,0xA15E26FEL,(-1L),(-1L),0xA15E26FEL},{0xF21D7ACAL,0x377D1C13L,(-1L),0L,0x981DF769L},{0xFECAEFE6L,8L,0L,(-1L),0x9FA619A7L}}};
        uint8_t *l_129[8] = {&g_115,&g_115,&g_115,&g_115,&g_115,&g_115,&g_115,&g_115};
        int32_t l_172 = 0x527C6EF0L;
        int16_t l_218[4] = {1L,1L,1L,1L};
        uint8_t l_352 = 0xA5L;
        uint32_t ** const *l_376 = (void*)0;
        union U1 l_381 = {18446744073709551613UL};
        uint32_t l_382 = 0x92138E5EL;
        const uint32_t *l_384 = &g_174;
        const uint32_t **l_383 = &l_384;
        int16_t **l_405 = (void*)0;
        uint16_t l_465 = 0UL;
        const int16_t ***l_472 = (void*)0;
        uint32_t ***l_498 = &g_325;
        uint8_t l_503 = 8UL;
        int8_t l_504 = (-1L);
        const int64_t l_530 = 2L;
        int32_t l_531 = (-1L);
        union U1 *l_538 = &l_381;
        int8_t * const *l_554 = (void*)0;
        const int32_t *l_594 = (void*)0;
        uint16_t l_637 = 0UL;
        union U0 ***l_721 = &g_315;
        int8_t l_746 = 0L;
        int i, j, k;
    }
    for (g_696 = 0; (g_696 <= 27); g_696 = safe_add_func_int16_t_s_s(g_696, 8))
    {
        uint32_t *l_778[7][2][5] = {{{&g_174,(void*)0,&g_174,&g_361,&g_361},{&g_361,&g_262,&g_174,&g_262,&g_361}},{{&g_174,(void*)0,&g_361,&g_174,&g_361},{&g_262,&g_262,&g_174,&g_361,&g_174}},{{&g_262,&g_174,&g_174,(void*)0,&g_361},{&g_262,&g_361,(void*)0,(void*)0,&g_361}},{{&g_361,&g_174,&g_361,&g_262,&g_361},{&g_174,&g_262,&g_174,(void*)0,&g_174}},{{&g_174,(void*)0,&g_361,(void*)0,&g_174},{&g_174,&g_262,&g_262,&g_361,&g_262}},{{&g_361,(void*)0,&g_361,&g_174,&g_262},{&g_262,&g_174,&g_174,&g_262,&g_262}},{{&g_262,&g_174,&g_361,&g_361,&g_174},{&g_262,&g_174,(void*)0,&g_174,&g_174}}};
        int32_t l_781[3][1][1];
        union U0 *****l_788 = &g_786;
        union U0 *** const **l_790 = &l_789;
        int64_t *l_791 = &g_686;
        uint32_t l_811 = 0x549FC905L;
        int16_t ****l_832[3][2] = {{&g_831,&g_831},{&g_831,&g_831},{&g_831,&g_831}};
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_781[i][j][k] = (-1L);
            }
        }
        l_781[2][0][0] = (safe_mod_func_uint32_t_u_u((g_174 >= (l_778[3][0][3] == l_778[0][0][1])), ((((p_48.f0 , (safe_mod_func_int64_t_s_s((((((((l_781[2][0][0] & (-1L)) > ((((((safe_mod_func_uint16_t_u_u((+(((!((((*l_791) ^= ((((((*l_788) = g_786) == ((*l_790) = l_789)) & ((p_48.f0 , l_781[2][0][0]) != 0x876466C1L)) || p_48.f0) != p_48.f0)) , 0x97E2L) , (***g_278))) , (***g_641)) > (**g_642))), (**g_402))) , p_48.f0) >= p_48.f0) , l_781[2][0][0]) >= p_48.f0) == (**g_402))) , g_50) , l_778[4][1][0]) == l_778[6][1][0]) , (-8L)) , 0x0FBB0381AC4EF4AALL), p_48.f0))) || 4L) > 0xD021L) & 0x58BFB65DL)));
        for (g_75 = 0; (g_75 <= 2); g_75 += 1)
        {
            int32_t l_792 = 0xC0A971EFL;
            int32_t l_793[7][4][6] = {{{0xA826AFC5L,3L,0xFB4D7C0CL,0x0C6D8722L,0x0C6D8722L,0xFB4D7C0CL},{0x53FBADB7L,0x53FBADB7L,0xEEEB5E62L,0x5FE2000CL,0x0C6D8722L,0x1B1CCACDL},{0xFB4D7C0CL,0x1B1CCACDL,0L,0x843FF0E9L,(-3L),0x53FBADB7L},{0x53FBADB7L,0xFB4D7C0CL,0L,0x41FBC1BCL,1L,0x1B1CCACDL}},{{0xABB81B7FL,0x41FBC1BCL,0x53FBADB7L,0xA826AFC5L,0xF3AEC408L,0x0C6D8722L},{0xA826AFC5L,0xF3AEC408L,0x0C6D8722L,0x6D81A184L,0x5FE2000CL,0x6D81A184L},{(-1L),0xABB81B7FL,(-1L),0x7E25866DL,0xEEEB5E62L,(-1L)},{0xEEEB5E62L,0x6D81A184L,(-5L),(-8L),0x7D160AF2L,3L}},{{0xF3AEC408L,0L,0x25B0969CL,(-8L),(-1L),0x7E25866DL},{0xEEEB5E62L,(-7L),0x6D81A184L,0x7E25866DL,(-3L),(-5L)},{(-1L),(-3L),0x41FBC1BCL,0x6D81A184L,0x843FF0E9L,0x843FF0E9L},{0xA826AFC5L,(-3L),(-3L),0xA826AFC5L,0L,1L}},{{0xABB81B7FL,0x7E25866DL,0x7D160AF2L,0x41FBC1BCL,0x3E035409L,0xEEEB5E62L},{0x53FBADB7L,0x0C6D8722L,0xA826AFC5L,0x843FF0E9L,0x3E035409L,0x25B0969CL},{0xFB4D7C0CL,0x7E25866DL,0xF3AEC408L,(-1L),0L,(-7L)},{1L,(-3L),0xBEDCB6FBL,0x25B0969CL,0x843FF0E9L,(-1L)}},{{(-3L),(-3L),3L,(-3L),(-3L),(-1L)},{3L,(-7L),0xABB81B7FL,0x53FBADB7L,(-1L),(-3L)},{(-3L),0L,0x5FE2000CL,(-7L),0x7D160AF2L,(-3L)},{(-8L),0x6D81A184L,0xABB81B7FL,0xFB4D7C0CL,0xEEEB5E62L,(-1L)}},{{0x7D160AF2L,0xABB81B7FL,3L,0x0C6D8722L,0x5FE2000CL,(-1L)},{(-7L),0xF3AEC408L,0xBEDCB6FBL,0xBEDCB6FBL,0xF3AEC408L,(-7L)},{(-1L),0x41FBC1BCL,0xF3AEC408L,0x3E035409L,1L,0x25B0969CL},{(-1L),0xFB4D7C0CL,0xA826AFC5L,0x7D160AF2L,(-3L),0xEEEB5E62L}},{{(-1L),0x1B1CCACDL,0x7D160AF2L,0x3E035409L,0x0C6D8722L,1L},{(-1L),1L,(-3L),0xBEDCB6FBL,0x25B0969CL,0x843FF0E9L},{(-7L),(-5L),0x41FBC1BCL,0x0C6D8722L,0x41FBC1BCL,(-5L)},{0x7D160AF2L,(-1L),0x6D81A184L,0xFB4D7C0CL,(-7L),0x7E25866DL}}};
            int64_t l_800 = 2L;
            int32_t l_801 = 0x8106163CL;
            uint32_t l_822 = 0UL;
            union U2 l_844 = {0x0BL};
            int i, j, k;
            l_87[g_75] = ((void*)0 == g_187[(g_75 + 1)][(g_75 + 3)]);
        }
        for (g_687 = 0; (g_687 <= 1); g_687 += 1)
        {
            uint32_t *l_875 = &g_361;
            for (g_115 = 0; (g_115 <= 1); g_115 += 1)
            {
                uint32_t l_853 = 0x7323DBCDL;
                int32_t l_862[2];
                uint16_t l_876 = 1UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_862[i] = 0xE1C88A1CL;
                l_853 ^= (safe_unary_minus_func_uint8_t_u(0xBCL));
                if (p_48.f0)
                {
                    uint32_t l_856 = 1UL;
                    uint8_t *l_861[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_861[i] = (void*)0;
                    l_862[0] = (1L > ((safe_sub_func_int32_t_s_s((((0xDA0040BEFDB96F2ALL != 2UL) <= l_856) >= (g_478 , (((0x1FL < (-1L)) <= (safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((g_177[2][0] = ((**g_642) > 4L)), 0x0AL)) , (-1L)), l_853))) > l_853))), 0x5A3A7FDCL)) <= 0x6BD1D946L));
                    l_781[1][0][0] = (*g_426);
                }
                else
                {
                    int8_t *l_863 = (void*)0;
                    union U2 l_870 = {0x43L};
                    if ((p_48.f0 || p_48.f0))
                    {
                        return l_863;
                    }
                    else
                    {
                        int32_t l_877 = 8L;
                        int i, j;
                        g_113 = (safe_div_func_int32_t_s_s((0x7EL || (g_338[6][1] && ((safe_rshift_func_int16_t_s_u(((l_870 , ((safe_div_func_int16_t_s_s(((((((safe_lshift_func_uint16_t_u_u(0x5658L, 7)) , ((void*)0 != l_875)) | 0UL) | g_60) & (l_862[1] = ((*l_791) |= ((void*)0 != g_325)))) || l_876), l_877)) ^ p_48.f0)) <= p_48.f0), (**g_642))) == l_877))), l_781[2][0][0]));
                        (*g_270) = &l_781[0][0][0];
                        (**g_270) = l_870.f0;
                    }
                    if (l_811)
                        break;
                    (*g_270) = &l_862[0];
                }
            }
        }
    }
    return l_143;
}







static int32_t func_61(int32_t p_62, int8_t * const p_63, int16_t p_64)
{
    uint16_t l_79 = 0xBBA6L;
    union U1 *l_86 = &g_85[2];
    for (g_60 = (-5); (g_60 < (-21)); --g_60)
    {
        int32_t *l_74 = &g_75;
        int32_t *l_76 = &g_75;
        int32_t *l_77 = &g_75;
        int32_t *l_78[4][8][8] = {{{(void*)0,&g_50,&g_53,&g_53,(void*)0,&g_75,(void*)0,&g_53},{(void*)0,(void*)0,(void*)0,&g_53,(void*)0,&g_53,(void*)0,&g_75},{(void*)0,&g_53,&g_50,&g_75,(void*)0,&g_50,(void*)0,&g_75},{(void*)0,&g_53,(void*)0,&g_53,(void*)0,&g_50,&g_75,&g_75},{(void*)0,(void*)0,&g_53,(void*)0,(void*)0,&g_53,(void*)0,(void*)0},{(void*)0,&g_50,(void*)0,&g_75,(void*)0,&g_75,(void*)0,&g_53},{(void*)0,&g_75,&g_50,&g_53,(void*)0,(void*)0,(void*)0,&g_53},{(void*)0,&g_75,(void*)0,&g_75,(void*)0,(void*)0,&g_75,&g_53}},{{(void*)0,&g_50,&g_53,&g_53,(void*)0,&g_75,(void*)0,&g_53},{(void*)0,(void*)0,(void*)0,&g_53,(void*)0,&g_53,(void*)0,&g_75},{(void*)0,&g_53,&g_50,&g_75,(void*)0,&g_50,(void*)0,&g_75},{(void*)0,&g_53,(void*)0,&g_53,(void*)0,&g_50,&g_75,&g_75},{(void*)0,(void*)0,&g_53,(void*)0,(void*)0,&g_53,(void*)0,(void*)0},{(void*)0,&g_50,(void*)0,&g_75,(void*)0,&g_75,(void*)0,&g_53},{(void*)0,&g_75,&g_50,&g_53,(void*)0,(void*)0,(void*)0,&g_53},{(void*)0,&g_75,(void*)0,&g_75,(void*)0,(void*)0,&g_75,&g_53}},{{(void*)0,&g_50,&g_53,&g_53,(void*)0,&g_75,(void*)0,&g_53},{(void*)0,(void*)0,(void*)0,&g_53,(void*)0,&g_53,(void*)0,&g_75},{(void*)0,&g_53,&g_50,&g_75,(void*)0,&g_50,(void*)0,&g_75},{(void*)0,&g_53,(void*)0,&g_53,(void*)0,&g_50,&g_75,&g_75},{(void*)0,(void*)0,&g_53,(void*)0,(void*)0,&g_53,(void*)0,(void*)0},{(void*)0,&g_50,(void*)0,&g_75,(void*)0,&g_75,(void*)0,&g_53},{(void*)0,&g_75,&g_50,&g_53,(void*)0,(void*)0,(void*)0,&g_53},{(void*)0,&g_75,(void*)0,&g_75,(void*)0,(void*)0,&g_75,&g_53}},{{(void*)0,&g_50,&g_53,&g_53,(void*)0,&g_75,(void*)0,&g_53},{(void*)0,(void*)0,(void*)0,&g_53,(void*)0,&g_53,(void*)0,&g_75},{(void*)0,&g_53,&g_50,&g_75,(void*)0,&g_50,(void*)0,&g_75},{(void*)0,&g_53,(void*)0,&g_53,(void*)0,&g_50,&g_75,&g_75},{(void*)0,(void*)0,&g_53,(void*)0,(void*)0,&g_53,(void*)0,(void*)0},{(void*)0,&g_50,(void*)0,&g_75,(void*)0,&g_75,(void*)0,&g_53},{(void*)0,&g_75,&g_50,&g_53,(void*)0,(void*)0,(void*)0,&g_53},{(void*)0,&g_75,(void*)0,&g_75,(void*)0,(void*)0,&g_75,&g_53}}};
        int i, j, k;
        l_79--;
    }
    for (p_64 = (-26); (p_64 == (-27)); p_64 = safe_sub_func_int8_t_s_s(p_64, 7))
    {
        union U1 * const l_84 = &g_85[2];
        l_86 = l_84;
    }
    return g_85[2].f3;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_85[i].f0, "g_85[i].f0", print_hash_value);
        transparent_crc(g_85[i].f1, "g_85[i].f1", print_hash_value);
        transparent_crc(g_85[i].f2, "g_85[i].f2", print_hash_value);
        transparent_crc(g_85[i].f3, "g_85[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_177[i][j], "g_177[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_188, "g_188", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_210[i][j], "g_210[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_333.f0, "g_333.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_338[i][j], "g_338[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_360[i][j], "g_360[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_478.f0, "g_478.f0", print_hash_value);
    transparent_crc(g_555, "g_555", print_hash_value);
    transparent_crc(g_686, "g_686", print_hash_value);
    transparent_crc(g_687, "g_687", print_hash_value);
    transparent_crc(g_691, "g_691", print_hash_value);
    transparent_crc(g_692, "g_692", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_696, "g_696", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_698[i], "g_698[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_712, "g_712", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_794[i][j], "g_794[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1094[i][j], "g_1094[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1119, "g_1119", print_hash_value);
    transparent_crc(g_1134, "g_1134", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1196[i][j], "g_1196[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1226, "g_1226", print_hash_value);
    transparent_crc(g_1295, "g_1295", print_hash_value);
    transparent_crc(g_1376.f0, "g_1376.f0", print_hash_value);
    transparent_crc(g_1532, "g_1532", print_hash_value);
    transparent_crc(g_1557, "g_1557", print_hash_value);
    transparent_crc(g_1559, "g_1559", print_hash_value);
    transparent_crc(g_1592, "g_1592", print_hash_value);
    transparent_crc(g_1659, "g_1659", print_hash_value);
    transparent_crc(g_1663, "g_1663", print_hash_value);
    transparent_crc(g_1715, "g_1715", print_hash_value);
    transparent_crc(g_1800, "g_1800", print_hash_value);
    transparent_crc(g_1801, "g_1801", print_hash_value);
    transparent_crc(g_1907, "g_1907", print_hash_value);
    transparent_crc(g_1962, "g_1962", print_hash_value);
    transparent_crc(g_2036, "g_2036", print_hash_value);
    transparent_crc(g_2038, "g_2038", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_2116[i], "g_2116[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2155, "g_2155", print_hash_value);
    transparent_crc(g_2157, "g_2157", print_hash_value);
    transparent_crc(g_2159, "g_2159", print_hash_value);
    transparent_crc(g_2186, "g_2186", print_hash_value);
    transparent_crc(g_2194.f0, "g_2194.f0", print_hash_value);
    transparent_crc(g_2194.f1, "g_2194.f1", print_hash_value);
    transparent_crc(g_2194.f2, "g_2194.f2", print_hash_value);
    transparent_crc(g_2194.f3, "g_2194.f3", print_hash_value);
    transparent_crc(g_2240, "g_2240", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_2241[i][j][k], "g_2241[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_2242[i][j][k], "g_2242[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2256, "g_2256", print_hash_value);
    transparent_crc(g_2382, "g_2382", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2444[i], "g_2444[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2445, "g_2445", print_hash_value);
    transparent_crc(g_2446, "g_2446", print_hash_value);
    transparent_crc(g_2451, "g_2451", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2479[i][j], "g_2479[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2496, "g_2496", print_hash_value);
    transparent_crc(g_2501, "g_2501", print_hash_value);
    transparent_crc(g_2509, "g_2509", print_hash_value);
    transparent_crc(g_2510, "g_2510", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2605[i][j], "g_2605[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
