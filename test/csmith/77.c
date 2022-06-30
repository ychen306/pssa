// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = A77B9CF0
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
   uint16_t f0;
   const uint32_t f1;
   uint64_t f2;
   int16_t f3;
   int16_t f4;
   const uint16_t f5;
   const uint16_t f6;
   int32_t f7;
   int32_t f8;
   uint16_t f9;
};

struct S1 {
   const int32_t f0;
   const signed f1 : 24;
   signed f2 : 20;
   unsigned f3 : 25;
   unsigned f4 : 8;
   const unsigned f5 : 24;
   unsigned f6 : 18;
   unsigned f7 : 6;
   unsigned f8 : 1;
   unsigned f9 : 13;
};


static uint16_t g_11[7][3][1] = {{{65535UL},{1UL},{0x96E6L}},{{0x96E6L},{1UL},{65535UL}},{{0x54E5L},{65535UL},{1UL}},{{0x96E6L},{0x96E6L},{1UL}},{{65535UL},{0x54E5L},{65535UL}},{{1UL},{0x96E6L},{0x96E6L}},{{1UL},{65535UL},{0x54E5L}}};
static uint16_t g_41 = 0x2E51L;
static int8_t g_44[8] = {(-5L),0xB3L,(-5L),(-5L),0xB3L,(-5L),(-5L),0xB3L};
static int32_t g_89[6][9][3] = {{{4L,1L,0x24A3AAF9L},{0L,0L,(-5L)},{0L,0xBD2E7792L,0xBD2E7792L},{0x508B3DEFL,6L,0x39AB163BL},{0x508B3DEFL,0x39AB163BL,(-5L)},{0L,(-1L),0x6360CCD1L},{6L,0x3930A17CL,0xFA0F5A0AL},{0xED293A85L,0xD8ED9CDEL,0x1B0F8279L},{1L,0x8E670434L,1L}},{{0xBD2E7792L,(-8L),1L},{(-5L),4L,0x1B0F8279L},{0L,1L,0xFA0F5A0AL},{(-1L),(-1L),0x6360CCD1L},{0L,0xA7B55804L,0xF4B0596EL},{(-5L),0L,0x8E670434L},{0xBD2E7792L,0L,4L},{1L,0xA7B55804L,0L},{0xED293A85L,(-1L),0xD9D6E25BL}},{{6L,1L,0L},{1L,4L,4L},{0xDC0328A1L,(-8L),0x8E670434L},{0xDC0328A1L,0x8E670434L,0xF4B0596EL},{1L,0xD8ED9CDEL,0x6360CCD1L},{6L,0x3930A17CL,0xFA0F5A0AL},{0xED293A85L,0xD8ED9CDEL,0x1B0F8279L},{1L,0x8E670434L,1L},{0xBD2E7792L,(-8L),1L}},{{(-5L),4L,0x1B0F8279L},{0L,1L,0xFA0F5A0AL},{(-1L),(-1L),0x6360CCD1L},{0L,0xA7B55804L,0xF4B0596EL},{(-5L),0L,0x8E670434L},{0xBD2E7792L,0L,4L},{1L,0xA7B55804L,0L},{0xED293A85L,(-1L),0xD9D6E25BL},{6L,1L,0L}},{{1L,4L,4L},{0xDC0328A1L,(-8L),0x8E670434L},{0xDC0328A1L,0x8E670434L,0xF4B0596EL},{1L,0xD8ED9CDEL,0x6360CCD1L},{6L,0x3930A17CL,0xFA0F5A0AL},{0xED293A85L,0xD8ED9CDEL,0x1B0F8279L},{1L,0x8E670434L,1L},{0xBD2E7792L,(-8L),1L},{(-5L),4L,0x1B0F8279L}},{{0L,1L,0xFA0F5A0AL},{(-1L),(-1L),0x6360CCD1L},{0L,0xA7B55804L,0xF4B0596EL},{(-5L),0L,0x8E670434L},{0xBD2E7792L,0L,4L},{1L,0xA7B55804L,0L},{0xED293A85L,(-1L),0xD9D6E25BL},{6L,1L,0L},{1L,4L,4L}}};
static int32_t *g_88 = &g_89[4][2][1];
static uint32_t g_160 = 0x75313E73L;
static int32_t g_163 = 1L;
static int8_t g_203 = 0x88L;
static int8_t *g_206 = (void*)0;
static int8_t * const *g_205 = &g_206;
static uint64_t g_239 = 0x7B5485DCA04AF344LL;
static uint16_t *g_246 = (void*)0;
static uint16_t **g_245 = &g_246;
static uint8_t g_261 = 255UL;
static int8_t **g_279[3][5] = {{&g_206,&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206,&g_206}};
static uint64_t g_300 = 0xE186B8F4CE7E8D0DLL;
static uint8_t g_304 = 7UL;
static uint8_t g_337 = 246UL;
static uint16_t g_355 = 65526UL;
static uint8_t g_376[5][7][2] = {{{0xF3L,0x38L},{0x3FL,0xF2L},{255UL,0xF3L},{0x7AL,0xFCL},{0xFCL,0x40L},{0xADL,0x3FL},{0xF8L,0xF8L}},{{254UL,255UL},{0UL,0xA5L},{0x5CL,251UL},{250UL,0x5CL},{0xFCL,255UL},{0xFCL,0x5CL},{250UL,251UL}},{{0x5CL,0xA5L},{0UL,0x3FL},{0xF3L,1UL},{1UL,0x20L},{0UL,255UL},{0xF8L,254UL},{0xFCL,0xA5L}},{{0x3FL,0xFCL},{0x20L,0x40L},{0xA5L,0x40L},{0x20L,0xFCL},{0x3FL,0xA5L},{0xFCL,254UL},{0xF8L,255UL}},{{0UL,0x20L},{1UL,1UL},{0xF3L,0x3FL},{251UL,0x38L},{0x7AL,0x5CL},{0x11L,0x7AL},{254UL,250UL}}};
static const struct S1 g_386 = {0xA34D16CBL,380,518,2931,3,2675,51,6,0,32};
static int32_t g_393[4] = {0x2432EC6BL,0x2432EC6BL,0x2432EC6BL,0x2432EC6BL};
static uint32_t *g_407 = &g_160;
static uint32_t **g_406 = &g_407;
static uint32_t ***g_462 = (void*)0;
static struct S0 g_491[10][10][2] = {{{{0UL,1UL,7UL,0xBC92L,0x69E8L,0UL,0xF5C1L,0L,0x1A870217L,65527UL},{1UL,0xE6EB331EL,0x6EE7526E58900ABFLL,0x5A4DL,-5L,8UL,0UL,0L,0xDBD2B3A4L,5UL}},{{0xD763L,2UL,0x0C0605DC5DAC9AC6LL,3L,0L,0xC7D8L,0x818AL,0x009383E2L,1L,0x8594L},{0x2708L,8UL,0UL,-8L,0xF2C3L,0x8853L,1UL,0x2AD98B8CL,8L,0x2077L}},{{0x6B68L,0x270C1EB8L,0x15C27296FC4BEBEBLL,0x2F89L,0xF58AL,0xB85CL,0x4573L,0xD0A5A858L,-6L,1UL},{65535UL,1UL,0UL,0L,0x3D59L,65531UL,65535UL,-1L,-2L,0UL}},{{0x3FBCL,0UL,18446744073709551613UL,3L,0xB411L,2UL,0x5EAEL,1L,-6L,0x33D6L},{9UL,8UL,0x76D81A028FADFAE7LL,0xF3FAL,-1L,0x99E1L,6UL,0L,-1L,0x6C64L}},{{65533UL,0x5FCB45B4L,18446744073709551615UL,0x5284L,8L,0UL,0x4EFBL,8L,-7L,0x6C63L},{0xA2E3L,4294967295UL,0x2A76763217198C87LL,0x34D0L,1L,0x9465L,0UL,1L,0x80FD5F57L,1UL}},{{2UL,4294967290UL,0x0CF8677C8B07D741LL,1L,0L,0xBB78L,65535UL,4L,0x243C58BEL,65535UL},{9UL,0xC7E40357L,18446744073709551615UL,0x9C6BL,-7L,0xE3C1L,0x13C2L,0xBD9F54E9L,2L,8UL}},{{0xD4E8L,4294967290UL,0x2A297BE1A576D51FLL,0L,0x114BL,0xF168L,65530UL,0xD7C0B786L,1L,0xF539L},{0x6B68L,0x270C1EB8L,0x15C27296FC4BEBEBLL,0x2F89L,0xF58AL,0xB85CL,0x4573L,0xD0A5A858L,-6L,1UL}},{{0x0BCEL,7UL,0xCB8C0EA4C4FE8095LL,-2L,0xFED7L,0x685EL,0UL,-5L,0x0D13245AL,0x2107L},{65535UL,0x6EF36737L,0UL,0xE60EL,0xFFDDL,65535UL,0xBC95L,-3L,0x6F6A3A3EL,0x8D41L}},{{0x878EL,1UL,0x210661155156C69FLL,1L,-3L,0xC76EL,0UL,-8L,-7L,65530UL},{0x9B18L,4294967292UL,0x9A4B044176F65CD3LL,-1L,-8L,8UL,1UL,0x79441EDEL,8L,6UL}},{{0xB0C3L,4294967289UL,0x12F0929CF4DBC1AELL,0x86D1L,0x59C1L,0x0815L,0xB700L,1L,1L,0xD890L},{0x9289L,0x26E90D78L,0xC09A7A6E2FD3C01DLL,-10L,0xF72FL,1UL,0xA0D3L,3L,0x3FFB2A15L,0x82AFL}}},{{{65535UL,0x6EF36737L,0UL,0xE60EL,0xFFDDL,65535UL,0xBC95L,-3L,0x6F6A3A3EL,0x8D41L},{65527UL,4294967295UL,0xAA00B94B8ED6298ELL,0L,-1L,65533UL,1UL,0L,0xD7D8E472L,65535UL}},{{5UL,0UL,5UL,-1L,0L,1UL,0x3955L,0L,-9L,0x9C91L},{0x7673L,0x37818DD9L,1UL,4L,-5L,0UL,65535UL,-1L,0xCA9E8F63L,0x866AL}},{{0x909EL,0x7E0A1EE4L,0x4B83E5F48342A8BBLL,0x4BCFL,-7L,65529UL,2UL,0x5A6D4D47L,-8L,65526UL},{0x7673L,0x37818DD9L,1UL,4L,-5L,0UL,65535UL,-1L,0xCA9E8F63L,0x866AL}},{{5UL,0UL,5UL,-1L,0L,1UL,0x3955L,0L,-9L,0x9C91L},{65527UL,4294967295UL,0xAA00B94B8ED6298ELL,0L,-1L,65533UL,1UL,0L,0xD7D8E472L,65535UL}},{{65535UL,0x6EF36737L,0UL,0xE60EL,0xFFDDL,65535UL,0xBC95L,-3L,0x6F6A3A3EL,0x8D41L},{0x9289L,0x26E90D78L,0xC09A7A6E2FD3C01DLL,-10L,0xF72FL,1UL,0xA0D3L,3L,0x3FFB2A15L,0x82AFL}},{{0xB0C3L,4294967289UL,0x12F0929CF4DBC1AELL,0x86D1L,0x59C1L,0x0815L,0xB700L,1L,1L,0xD890L},{0x9B18L,4294967292UL,0x9A4B044176F65CD3LL,-1L,-8L,8UL,1UL,0x79441EDEL,8L,6UL}},{{0x878EL,1UL,0x210661155156C69FLL,1L,-3L,0xC76EL,0UL,-8L,-7L,65530UL},{65535UL,0x6EF36737L,0UL,0xE60EL,0xFFDDL,65535UL,0xBC95L,-3L,0x6F6A3A3EL,0x8D41L}},{{0x0BCEL,7UL,0xCB8C0EA4C4FE8095LL,-2L,0xFED7L,0x685EL,0UL,-5L,0x0D13245AL,0x2107L},{0x6B68L,0x270C1EB8L,0x15C27296FC4BEBEBLL,0x2F89L,0xF58AL,0xB85CL,0x4573L,0xD0A5A858L,-6L,1UL}},{{0xD4E8L,4294967290UL,0x2A297BE1A576D51FLL,0L,0x114BL,0xF168L,65530UL,0xD7C0B786L,1L,0xF539L},{9UL,0xC7E40357L,18446744073709551615UL,0x9C6BL,-7L,0xE3C1L,0x13C2L,0xBD9F54E9L,2L,8UL}},{{2UL,4294967290UL,0x0CF8677C8B07D741LL,1L,0L,0xBB78L,65535UL,4L,0x243C58BEL,65535UL},{0xA2E3L,4294967295UL,0x2A76763217198C87LL,0x34D0L,1L,0x9465L,0UL,1L,0x80FD5F57L,1UL}}},{{{65533UL,0x5FCB45B4L,18446744073709551615UL,0x5284L,8L,0UL,0x4EFBL,8L,-7L,0x6C63L},{9UL,8UL,0x76D81A028FADFAE7LL,0xF3FAL,-1L,0x99E1L,6UL,0L,-1L,0x6C64L}},{{0x3FBCL,0UL,18446744073709551613UL,3L,0xB411L,2UL,0x5EAEL,1L,-6L,0x33D6L},{65535UL,1UL,0UL,0L,0x3D59L,65531UL,65535UL,-1L,-2L,0UL}},{{0x6B68L,0x270C1EB8L,0x15C27296FC4BEBEBLL,0x2F89L,0xF58AL,0xB85CL,0x4573L,0xD0A5A858L,-6L,1UL},{0x2708L,8UL,0UL,-8L,0xF2C3L,0x8853L,1UL,0x2AD98B8CL,8L,0x2077L}},{{0xD763L,2UL,0x0C0605DC5DAC9AC6LL,3L,0L,0xC7D8L,0x818AL,0x009383E2L,1L,0x8594L},{1UL,0xE6EB331EL,0x6EE7526E58900ABFLL,0x5A4DL,-5L,8UL,0UL,0L,0xDBD2B3A4L,5UL}},{{0UL,1UL,7UL,0xBC92L,0x69E8L,0UL,0xF5C1L,0L,0x1A870217L,65527UL},{0x1EE7L,0x7CC85580L,4UL,-4L,0L,0xB1BBL,0xA6D9L,0L,0x3D9F9330L,65530UL}},{{0xA2E3L,4294967295UL,0x2A76763217198C87LL,0x34D0L,1L,0x9465L,0UL,1L,0x80FD5F57L,1UL},{0xC7C8L,1UL,18446744073709551615UL,0x473FL,0x3E93L,1UL,0x1B97L,-6L,-9L,0x3A40L}},{{0xC1ADL,0x1767305CL,0x43292049506BAF2DLL,0x546BL,0xE65FL,0UL,0x85EBL,1L,0xD9E8A554L,0x6492L},{0UL,0xA0AC6CA9L,0xA775C6D023F95ADDLL,0x197DL,0x2F87L,0x92E1L,65535UL,0x8DE66AA1L,0x04849C4EL,65531UL}},{{0x800CL,0x181B1361L,1UL,0xF8F0L,0xD16CL,0x5EEDL,0x0A1BL,0xACD4FC5EL,1L,65530UL},{0xB0C3L,4294967289UL,0x12F0929CF4DBC1AELL,0x86D1L,0x59C1L,0x0815L,0xB700L,1L,1L,0xD890L}},{{8UL,0xAA1D832BL,0x3CCB2A3ED089FA56LL,8L,1L,0xFA11L,0xAC28L,0x9BC6B441L,0L,65531UL},{8UL,0xAA1D832BL,0x3CCB2A3ED089FA56LL,8L,1L,0xFA11L,0xAC28L,0x9BC6B441L,0L,65531UL}},{{65535UL,1UL,0UL,0L,0x3D59L,65531UL,65535UL,-1L,-2L,0UL},{0UL,0x49B50D3AL,4UL,0xE253L,4L,0xFE11L,0x3CC3L,0x0053DFE5L,0x4E3982B8L,65535UL}}},{{{0x2AD5L,3UL,0UL,0L,0x766DL,0x1272L,1UL,0L,0xC1502364L,0xDF6EL},{0x0BCEL,7UL,0xCB8C0EA4C4FE8095LL,-2L,0xFED7L,0x685EL,0UL,-5L,0x0D13245AL,0x2107L}},{{0x8EB5L,4294967295UL,0x8952AA9F293357CALL,0xED07L,1L,0xA403L,65533UL,0x13EA1E78L,0xD64670D8L,65527UL},{0x7E4EL,7UL,6UL,0x05D0L,-1L,0x1B18L,0x197EL,0x221B7494L,1L,5UL}},{{9UL,8UL,0x76D81A028FADFAE7LL,0xF3FAL,-1L,0x99E1L,6UL,0L,-1L,0x6C64L},{0x8EB5L,4294967295UL,0x8952AA9F293357CALL,0xED07L,1L,0xA403L,65533UL,0x13EA1E78L,0xD64670D8L,65527UL}},{{0x1EE7L,0x7CC85580L,4UL,-4L,0L,0xB1BBL,0xA6D9L,0L,0x3D9F9330L,65530UL},{0x878EL,1UL,0x210661155156C69FLL,1L,-3L,0xC76EL,0UL,-8L,-7L,65530UL}},{{0x1EE7L,0x7CC85580L,4UL,-4L,0L,0xB1BBL,0xA6D9L,0L,0x3D9F9330L,65530UL},{0x8EB5L,4294967295UL,0x8952AA9F293357CALL,0xED07L,1L,0xA403L,65533UL,0x13EA1E78L,0xD64670D8L,65527UL}},{{9UL,8UL,0x76D81A028FADFAE7LL,0xF3FAL,-1L,0x99E1L,6UL,0L,-1L,0x6C64L},{0x7E4EL,7UL,6UL,0x05D0L,-1L,0x1B18L,0x197EL,0x221B7494L,1L,5UL}},{{0x8EB5L,4294967295UL,0x8952AA9F293357CALL,0xED07L,1L,0xA403L,65533UL,0x13EA1E78L,0xD64670D8L,65527UL},{0x0BCEL,7UL,0xCB8C0EA4C4FE8095LL,-2L,0xFED7L,0x685EL,0UL,-5L,0x0D13245AL,0x2107L}},{{0x2AD5L,3UL,0UL,0L,0x766DL,0x1272L,1UL,0L,0xC1502364L,0xDF6EL},{0UL,0x49B50D3AL,4UL,0xE253L,4L,0xFE11L,0x3CC3L,0x0053DFE5L,0x4E3982B8L,65535UL}},{{65535UL,1UL,0UL,0L,0x3D59L,65531UL,65535UL,-1L,-2L,0UL},{8UL,0xAA1D832BL,0x3CCB2A3ED089FA56LL,8L,1L,0xFA11L,0xAC28L,0x9BC6B441L,0L,65531UL}},{{8UL,0xAA1D832BL,0x3CCB2A3ED089FA56LL,8L,1L,0xFA11L,0xAC28L,0x9BC6B441L,0L,65531UL},{0xB0C3L,4294967289UL,0x12F0929CF4DBC1AELL,0x86D1L,0x59C1L,0x0815L,0xB700L,1L,1L,0xD890L}}},{{{0x800CL,0x181B1361L,1UL,0xF8F0L,0xD16CL,0x5EEDL,0x0A1BL,0xACD4FC5EL,1L,65530UL},{0UL,0xA0AC6CA9L,0xA775C6D023F95ADDLL,0x197DL,0x2F87L,0x92E1L,65535UL,0x8DE66AA1L,0x04849C4EL,65531UL}},{{0xC1ADL,0x1767305CL,0x43292049506BAF2DLL,0x546BL,0xE65FL,0UL,0x85EBL,1L,0xD9E8A554L,0x6492L},{0xC7C8L,1UL,18446744073709551615UL,0x473FL,0x3E93L,1UL,0x1B97L,-6L,-9L,0x3A40L}},{{0xA2E3L,4294967295UL,0x2A76763217198C87LL,0x34D0L,1L,0x9465L,0UL,1L,0x80FD5F57L,1UL},{0x1EE7L,0x7CC85580L,4UL,-4L,0L,0xB1BBL,0xA6D9L,0L,0x3D9F9330L,65530UL}},{{0UL,1UL,7UL,0xBC92L,0x69E8L,0UL,0xF5C1L,0L,0x1A870217L,65527UL},{1UL,0xE6EB331EL,0x6EE7526E58900ABFLL,0x5A4DL,-5L,8UL,0UL,0L,0xDBD2B3A4L,5UL}},{{0xD763L,2UL,0x0C0605DC5DAC9AC6LL,3L,0L,0xC7D8L,0x818AL,0x009383E2L,1L,0x8594L},{0x2708L,8UL,0UL,-8L,0xF2C3L,0x8853L,1UL,0x2AD98B8CL,8L,0x2077L}},{{0x6B68L,0x270C1EB8L,0x15C27296FC4BEBEBLL,0x2F89L,0xF58AL,0xB85CL,0x4573L,0xD0A5A858L,-6L,1UL},{65535UL,1UL,0UL,0L,0x3D59L,65531UL,65535UL,-1L,-2L,0UL}},{{0x3FBCL,0UL,18446744073709551613UL,3L,0xB411L,2UL,0x5EAEL,1L,-6L,0x33D6L},{9UL,8UL,0x76D81A028FADFAE7LL,0xF3FAL,-1L,0x99E1L,6UL,0L,-1L,0x6C64L}},{{65533UL,0x5FCB45B4L,18446744073709551615UL,0x5284L,8L,0UL,0x4EFBL,8L,-7L,0x6C63L},{0xA2E3L,4294967295UL,0x2A76763217198C87LL,0x34D0L,1L,0x9465L,0UL,1L,0x80FD5F57L,1UL}},{{2UL,4294967290UL,0x0CF8677C8B07D741LL,1L,0L,0xBB78L,65535UL,4L,0x243C58BEL,65535UL},{9UL,0xC7E40357L,18446744073709551615UL,0x9C6BL,-7L,0xE3C1L,0x13C2L,0xBD9F54E9L,2L,8UL}},{{0xD4E8L,4294967290UL,0x2A297BE1A576D51FLL,0L,0x114BL,0xF168L,65530UL,0xD7C0B786L,1L,0xF539L},{0x6B68L,0x270C1EB8L,0x15C27296FC4BEBEBLL,0x2F89L,0xF58AL,0xB85CL,0x4573L,0xD0A5A858L,-6L,1UL}}},{{{0x0BCEL,7UL,0xCB8C0EA4C4FE8095LL,-2L,0xFED7L,0x685EL,0UL,-5L,0x0D13245AL,0x2107L},{65535UL,0x6EF36737L,0UL,0xE60EL,0xFFDDL,65535UL,0xBC95L,-3L,0x6F6A3A3EL,0x8D41L}},{{0x878EL,1UL,0x210661155156C69FLL,1L,-3L,0xC76EL,0UL,-8L,-7L,65530UL},{0x9B18L,4294967292UL,0x9A4B044176F65CD3LL,-1L,-8L,8UL,1UL,0x79441EDEL,8L,6UL}},{{0xB0C3L,4294967289UL,0x12F0929CF4DBC1AELL,0x86D1L,0x59C1L,0x0815L,0xB700L,1L,1L,0xD890L},{0x9289L,0x26E90D78L,0xC09A7A6E2FD3C01DLL,-10L,0xF72FL,1UL,0xA0D3L,3L,0x3FFB2A15L,0x82AFL}},{{65535UL,0x6EF36737L,0UL,0xE60EL,0xFFDDL,65535UL,0xBC95L,-3L,0x6F6A3A3EL,0x8D41L},{65527UL,4294967295UL,0xAA00B94B8ED6298ELL,0L,-1L,65533UL,1UL,0L,0xD7D8E472L,65535UL}},{{5UL,0UL,5UL,-1L,0L,1UL,0x3955L,0L,-9L,0x9C91L},{0x7673L,0x37818DD9L,1UL,4L,-5L,0UL,65535UL,-1L,0xCA9E8F63L,0x866AL}},{{0x909EL,0x7E0A1EE4L,0x4B83E5F48342A8BBLL,0x4BCFL,-7L,65529UL,2UL,0x5A6D4D47L,-8L,65526UL},{0x7673L,0x37818DD9L,1UL,4L,-5L,0UL,65535UL,-1L,0xCA9E8F63L,0x866AL}},{{5UL,0UL,5UL,-1L,0L,1UL,0x3955L,0L,-9L,0x9C91L},{65527UL,4294967295UL,0xAA00B94B8ED6298ELL,0L,-1L,65533UL,1UL,0L,0xD7D8E472L,65535UL}},{{65535UL,0x6EF36737L,0UL,0xE60EL,0xFFDDL,65535UL,0xBC95L,-3L,0x6F6A3A3EL,0x8D41L},{0x9289L,0x26E90D78L,0xC09A7A6E2FD3C01DLL,-10L,0xF72FL,1UL,0xA0D3L,3L,0x3FFB2A15L,0x82AFL}},{{0xB0C3L,4294967289UL,0x12F0929CF4DBC1AELL,0x86D1L,0x59C1L,0x0815L,0xB700L,1L,1L,0xD890L},{0x9B18L,4294967292UL,0x9A4B044176F65CD3LL,-1L,-8L,8UL,1UL,0x79441EDEL,8L,6UL}},{{0x878EL,1UL,0x210661155156C69FLL,1L,-3L,0xC76EL,0UL,-8L,-7L,65530UL},{65535UL,0x6EF36737L,0UL,0xE60EL,0xFFDDL,65535UL,0xBC95L,-3L,0x6F6A3A3EL,0x8D41L}}},{{{0x0BCEL,7UL,0xCB8C0EA4C4FE8095LL,-2L,0xFED7L,0x685EL,0UL,-5L,0x0D13245AL,0x2107L},{0x6B68L,0x270C1EB8L,0x15C27296FC4BEBEBLL,0x2F89L,0xF58AL,0xB85CL,0x4573L,0xD0A5A858L,-6L,1UL}},{{0xD4E8L,4294967290UL,0x2A297BE1A576D51FLL,0L,0x114BL,0xF168L,65530UL,0xD7C0B786L,1L,0xF539L},{9UL,0xC7E40357L,18446744073709551615UL,0x9C6BL,-7L,0xE3C1L,0x13C2L,0xBD9F54E9L,2L,8UL}},{{2UL,4294967290UL,0x0CF8677C8B07D741LL,1L,0L,0xBB78L,65535UL,4L,0x243C58BEL,65535UL},{0xA2E3L,4294967295UL,0x2A76763217198C87LL,0x34D0L,1L,0x9465L,0UL,1L,0x80FD5F57L,1UL}},{{65533UL,0x5FCB45B4L,18446744073709551615UL,0x5284L,8L,0UL,0x4EFBL,8L,-7L,0x6C63L},{9UL,8UL,0x76D81A028FADFAE7LL,0xF3FAL,-1L,0x99E1L,6UL,0L,-1L,0x6C64L}},{{0x3FBCL,0UL,18446744073709551613UL,3L,0xB411L,2UL,0x5EAEL,1L,-6L,0x33D6L},{65535UL,1UL,0UL,0L,0x3D59L,65531UL,65535UL,-1L,-2L,0UL}},{{0x6B68L,0x270C1EB8L,0x15C27296FC4BEBEBLL,0x2F89L,0xF58AL,0xB85CL,0x4573L,0xD0A5A858L,-6L,1UL},{0x2708L,8UL,0UL,-8L,0xF2C3L,0x8853L,1UL,0x2AD98B8CL,8L,0x2077L}},{{0xD763L,2UL,0x0C0605DC5DAC9AC6LL,3L,0L,0xC7D8L,0x818AL,0x009383E2L,1L,0x8594L},{1UL,0xE6EB331EL,0x6EE7526E58900ABFLL,0x5A4DL,-5L,8UL,0UL,0L,0xDBD2B3A4L,5UL}},{{0UL,1UL,7UL,0xBC92L,0x69E8L,0UL,0xF5C1L,0L,0x1A870217L,65527UL},{0x1EE7L,0x7CC85580L,4UL,-4L,0L,0xB1BBL,0xA6D9L,0L,0x3D9F9330L,65530UL}},{{0xA2E3L,4294967295UL,0x2A76763217198C87LL,0x34D0L,1L,0x9465L,0UL,1L,0x80FD5F57L,1UL},{0xC7C8L,1UL,18446744073709551615UL,0x473FL,0x3E93L,1UL,0x1B97L,-6L,-9L,0x3A40L}},{{0xC1ADL,0x1767305CL,0x43292049506BAF2DLL,0x546BL,0xE65FL,0UL,0x85EBL,1L,0xD9E8A554L,0x6492L},{0UL,0xA0AC6CA9L,0xA775C6D023F95ADDLL,0x197DL,0x2F87L,0x92E1L,65535UL,0x8DE66AA1L,0x04849C4EL,65531UL}}},{{{0x800CL,0x181B1361L,1UL,0xF8F0L,0xD16CL,0x5EEDL,0x0A1BL,0xACD4FC5EL,1L,65530UL},{0xB0C3L,4294967289UL,0x12F0929CF4DBC1AELL,0x86D1L,0x59C1L,0x0815L,0xB700L,1L,1L,0xD890L}},{{8UL,0xAA1D832BL,0x3CCB2A3ED089FA56LL,8L,1L,0xFA11L,0xAC28L,0x9BC6B441L,0L,65531UL},{8UL,0xAA1D832BL,0x3CCB2A3ED089FA56LL,8L,1L,0xFA11L,0xAC28L,0x9BC6B441L,0L,65531UL}},{{65535UL,1UL,0UL,0L,0x3D59L,65531UL,65535UL,-1L,-2L,0UL},{0UL,0x49B50D3AL,4UL,0xE253L,4L,0xFE11L,0x3CC3L,0x0053DFE5L,0x4E3982B8L,65535UL}},{{0x2AD5L,3UL,0UL,0L,0x766DL,0x1272L,1UL,0L,0xC1502364L,0xDF6EL},{65533UL,0x5FCB45B4L,18446744073709551615UL,0x5284L,8L,0UL,0x4EFBL,8L,-7L,0x6C63L}},{{9UL,8UL,0x76D81A028FADFAE7LL,0xF3FAL,-1L,0x99E1L,6UL,0L,-1L,0x6C64L},{0x878EL,1UL,0x210661155156C69FLL,1L,-3L,0xC76EL,0UL,-8L,-7L,65530UL}},{{0xB0C3L,4294967289UL,0x12F0929CF4DBC1AELL,0x86D1L,0x59C1L,0x0815L,0xB700L,1L,1L,0xD890L},{9UL,8UL,0x76D81A028FADFAE7LL,0xF3FAL,-1L,0x99E1L,6UL,0L,-1L,0x6C64L}},{{0xCDEEL,4294967295UL,0x2F86314CC8675C2FLL,0xD29BL,0x37E3L,65529UL,0xAA82L,0xB431EB5BL,1L,65527UL},{65526UL,0x5E603606L,0x0F2511ED6BA9AE6FLL,0L,0x793DL,0UL,0xB81DL,1L,0L,1UL}},{{0xCDEEL,4294967295UL,0x2F86314CC8675C2FLL,0xD29BL,0x37E3L,65529UL,0xAA82L,0xB431EB5BL,1L,65527UL},{9UL,8UL,0x76D81A028FADFAE7LL,0xF3FAL,-1L,0x99E1L,6UL,0L,-1L,0x6C64L}},{{0xB0C3L,4294967289UL,0x12F0929CF4DBC1AELL,0x86D1L,0x59C1L,0x0815L,0xB700L,1L,1L,0xD890L},{0x878EL,1UL,0x210661155156C69FLL,1L,-3L,0xC76EL,0UL,-8L,-7L,65530UL}},{{9UL,8UL,0x76D81A028FADFAE7LL,0xF3FAL,-1L,0x99E1L,6UL,0L,-1L,0x6C64L},{65533UL,0x5FCB45B4L,18446744073709551615UL,0x5284L,8L,0UL,0x4EFBL,8L,-7L,0x6C63L}}},{{{65535UL,0xA9F2E5F6L,1UL,0xCEE6L,0x1DD5L,0UL,0xC6F4L,9L,-1L,0x7F89L},{0xB6A1L,0xAF60E4E5L,9UL,-1L,0x2724L,0UL,0UL,1L,0x833B71D4L,0xA009L}},{{0x7673L,0x37818DD9L,1UL,4L,-5L,0UL,65535UL,-1L,0xCA9E8F63L,0x866AL},{0xC7C8L,1UL,18446744073709551615UL,0x473FL,0x3E93L,1UL,0x1B97L,-6L,-9L,0x3A40L}},{{0xC7C8L,1UL,18446744073709551615UL,0x473FL,0x3E93L,1UL,0x1B97L,-6L,-9L,0x3A40L},{1UL,0x5C58AA86L,3UL,-2L,-7L,0xE8F0L,0xC137L,0L,0x57372766L,0x81BFL}},{{2UL,4294967290UL,0x0CF8677C8B07D741LL,1L,0L,0xBB78L,65535UL,4L,0x243C58BEL,65535UL},{0x9AEBL,0UL,0UL,-5L,-1L,65535UL,0xCB30L,1L,-2L,0xDF6BL}},{{0x7E4EL,7UL,6UL,0x05D0L,-1L,0x1B18L,0x197EL,0x221B7494L,1L,5UL},{0x9289L,0x26E90D78L,0xC09A7A6E2FD3C01DLL,-10L,0xF72FL,1UL,0xA0D3L,3L,0x3FFB2A15L,0x82AFL}},{{0xD4E8L,4294967290UL,0x2A297BE1A576D51FLL,0L,0x114BL,0xF168L,65530UL,0xD7C0B786L,1L,0xF539L},{0xCDEEL,4294967295UL,0x2F86314CC8675C2FLL,0xD29BL,0x37E3L,65529UL,0xAA82L,0xB431EB5BL,1L,65527UL}},{{0x1EE7L,0x7CC85580L,4UL,-4L,0L,0xB1BBL,0xA6D9L,0L,0x3D9F9330L,65530UL},{9UL,0xC7E40357L,18446744073709551615UL,0x9C6BL,-7L,0xE3C1L,0x13C2L,0xBD9F54E9L,2L,8UL}},{{65535UL,1UL,0UL,0L,0x3D59L,65531UL,65535UL,-1L,-2L,0UL},{65535UL,0x6EF36737L,0UL,0xE60EL,0xFFDDL,65535UL,0xBC95L,-3L,0x6F6A3A3EL,0x8D41L}},{{0x800CL,0x181B1361L,1UL,0xF8F0L,0xD16CL,0x5EEDL,0x0A1BL,0xACD4FC5EL,1L,65530UL},{0x7673L,0x37818DD9L,1UL,4L,-5L,0UL,65535UL,-1L,0xCA9E8F63L,0x866AL}},{{0UL,4294967287UL,0xF6C0BA6CD8B05733LL,0xB4C9L,0xDDFDL,1UL,65535UL,0xEFF80438L,8L,65534UL},{0xB0C3L,4294967289UL,0x12F0929CF4DBC1AELL,0x86D1L,0x59C1L,0x0815L,0xB700L,1L,1L,0xD890L}}},{{{0x8EB5L,4294967295UL,0x8952AA9F293357CALL,0xED07L,1L,0xA403L,65533UL,0x13EA1E78L,0xD64670D8L,65527UL},{0xD4E8L,4294967290UL,0x2A297BE1A576D51FLL,0L,0x114BL,0xF168L,65530UL,0xD7C0B786L,1L,0xF539L}},{{65533UL,0x5AB2CF19L,1UL,0x99F9L,-10L,65533UL,65534UL,0x69CA1E07L,-1L,0x6B7BL},{0UL,0xA0AC6CA9L,0xA775C6D023F95ADDLL,0x197DL,0x2F87L,0x92E1L,65535UL,0x8DE66AA1L,0x04849C4EL,65531UL}},{{0UL,0x49B50D3AL,4UL,0xE253L,4L,0xFE11L,0x3CC3L,0x0053DFE5L,0x4E3982B8L,65535UL},{0x800CL,0x181B1361L,1UL,0xF8F0L,0xD16CL,0x5EEDL,0x0A1BL,0xACD4FC5EL,1L,65530UL}},{{65533UL,0x5FCB45B4L,18446744073709551615UL,0x5284L,8L,0UL,0x4EFBL,8L,-7L,0x6C63L},{0x909EL,0x7E0A1EE4L,0x4B83E5F48342A8BBLL,0x4BCFL,-7L,65529UL,2UL,0x5A6D4D47L,-8L,65526UL}},{{65526UL,0x5E603606L,0x0F2511ED6BA9AE6FLL,0L,0x793DL,0UL,0xB81DL,1L,0L,1UL},{0xD763L,2UL,0x0C0605DC5DAC9AC6LL,3L,0L,0xC7D8L,0x818AL,0x009383E2L,1L,0x8594L}},{{1UL,0x5C58AA86L,3UL,-2L,-7L,0xE8F0L,0xC137L,0L,0x57372766L,0x81BFL},{65527UL,4294967295UL,0xAA00B94B8ED6298ELL,0L,-1L,65533UL,1UL,0L,0xD7D8E472L,65535UL}},{{0x909EL,0x7E0A1EE4L,0x4B83E5F48342A8BBLL,0x4BCFL,-7L,65529UL,2UL,0x5A6D4D47L,-8L,65526UL},{0x0BCEL,7UL,0xCB8C0EA4C4FE8095LL,-2L,0xFED7L,0x685EL,0UL,-5L,0x0D13245AL,0x2107L}},{{0xA2E3L,4294967295UL,0x2A76763217198C87LL,0x34D0L,1L,0x9465L,0UL,1L,0x80FD5F57L,1UL},{0x2AD5L,3UL,0UL,0L,0x766DL,0x1272L,1UL,0L,0xC1502364L,0xDF6EL}},{{0x9B18L,4294967292UL,0x9A4B044176F65CD3LL,-1L,-8L,8UL,1UL,0x79441EDEL,8L,6UL},{0x2AD5L,3UL,0UL,0L,0x766DL,0x1272L,1UL,0L,0xC1502364L,0xDF6EL}},{{0xA2E3L,4294967295UL,0x2A76763217198C87LL,0x34D0L,1L,0x9465L,0UL,1L,0x80FD5F57L,1UL},{0x0BCEL,7UL,0xCB8C0EA4C4FE8095LL,-2L,0xFED7L,0x685EL,0UL,-5L,0x0D13245AL,0x2107L}}}};
static int32_t *g_495[2][7] = {{&g_393[3],&g_89[4][2][1],&g_393[3],&g_393[3],&g_89[4][2][1],&g_393[3],&g_393[3]},{&g_89[4][2][1],&g_89[4][2][1],&g_393[0],&g_89[4][2][1],&g_89[4][2][1],&g_393[0],&g_89[4][2][1]}};
static int64_t g_507 = 1L;
static int8_t ***g_538 = &g_279[1][0];
static int8_t ****g_537 = &g_538;
static int64_t *g_572 = &g_507;
static int64_t **g_571 = &g_572;
static int8_t ** const *g_648 = &g_279[2][4];
static int8_t ** const **g_647 = &g_648;
static uint32_t g_692[4] = {2UL,2UL,2UL,2UL};
static uint32_t *g_702 = (void*)0;
static uint32_t **g_701 = &g_702;
static int32_t g_728 = 0x4DBC42ECL;
static const int32_t g_756 = (-5L);
static const int32_t g_760[9][10] = {{0L,0x2D62274BL,0L,0L,0x128917FEL,0L,0x91D4B80DL,(-1L),(-1L),0x91D4B80DL},{0x128917FEL,0x41FB3DD3L,0L,0x9A3C0A05L,0x41FB3DD3L,0xB07BEC39L,0xC5A2BA88L,(-1L),4L,0x554057DAL},{0x2D62274BL,8L,0L,(-8L),(-1L),0x08EE40B0L,1L,8L,0L,0x128917FEL},{0L,0x9A3C0A05L,0x5E522EEDL,(-6L),(-8L),0xD4DB2AA9L,0xD4DB2AA9L,(-8L),(-6L),0x5E522EEDL},{0x128917FEL,0x128917FEL,0x9326F4A2L,0xC5A2BA88L,0xDD79C00CL,0L,0x2D62274BL,0xE85A0B26L,0x184AB2CAL,0x9A3C0A05L},{1L,0x08EE40B0L,(-1L),(-8L),0L,8L,0x2D62274BL,0xD4DB2AA9L,0x3C35461AL,0xB395513AL},{(-6L),0x128917FEL,0xEC03D27EL,0L,0x9A3C0A05L,0xEC03D27EL,0xD4DB2AA9L,0xC5A2BA88L,(-1L),0x3C35461AL},{0xE85A0B26L,0x9A3C0A05L,0xB07BEC39L,2L,1L,0x184AB2CAL,1L,2L,0xB07BEC39L,0x9A3C0A05L},{0x41FB3DD3L,8L,0xD4DB2AA9L,1L,0x5E522EEDL,0L,0xC5A2BA88L,(-6L),0L,0xDD79C00CL}};
static const int32_t *g_761 = &g_89[4][8][1];
static uint8_t *g_830 = &g_376[4][4][1];
static uint8_t **g_829[4] = {&g_830,&g_830,&g_830,&g_830};
static struct S0 g_911[5][8] = {{{0xEC5EL,0x1B313A98L,0UL,0x490BL,-1L,0x2802L,0xE1CAL,0xE6F4E23CL,0x2C656FBDL,0xA3D1L},{5UL,4294967295UL,0x02D207CCD70D06ECLL,0x78D5L,6L,1UL,65532UL,0x31A71889L,1L,0x1AC3L},{5UL,4294967295UL,0x02D207CCD70D06ECLL,0x78D5L,6L,1UL,65532UL,0x31A71889L,1L,0x1AC3L},{0xEC5EL,0x1B313A98L,0UL,0x490BL,-1L,0x2802L,0xE1CAL,0xE6F4E23CL,0x2C656FBDL,0xA3D1L},{3UL,0xF6566DF0L,0x9BB04B63833010C1LL,-5L,1L,7UL,0x61E7L,0xFC17AA3BL,0L,0xA5B6L},{0xEC5EL,0x1B313A98L,0UL,0x490BL,-1L,0x2802L,0xE1CAL,0xE6F4E23CL,0x2C656FBDL,0xA3D1L},{5UL,4294967295UL,0x02D207CCD70D06ECLL,0x78D5L,6L,1UL,65532UL,0x31A71889L,1L,0x1AC3L},{5UL,4294967295UL,0x02D207CCD70D06ECLL,0x78D5L,6L,1UL,65532UL,0x31A71889L,1L,0x1AC3L}},{{5UL,4294967295UL,0x02D207CCD70D06ECLL,0x78D5L,6L,1UL,65532UL,0x31A71889L,1L,0x1AC3L},{3UL,0xF6566DF0L,0x9BB04B63833010C1LL,-5L,1L,7UL,0x61E7L,0xFC17AA3BL,0L,0xA5B6L},{5UL,4294967295UL,0UL,-1L,0xA5FDL,0xC5C6L,8UL,-4L,-9L,0UL},{5UL,4294967295UL,0UL,-1L,0xA5FDL,0xC5C6L,8UL,-4L,-9L,0UL},{3UL,0xF6566DF0L,0x9BB04B63833010C1LL,-5L,1L,7UL,0x61E7L,0xFC17AA3BL,0L,0xA5B6L},{5UL,4294967295UL,0x02D207CCD70D06ECLL,0x78D5L,6L,1UL,65532UL,0x31A71889L,1L,0x1AC3L},{3UL,0xF6566DF0L,0x9BB04B63833010C1LL,-5L,1L,7UL,0x61E7L,0xFC17AA3BL,0L,0xA5B6L},{5UL,4294967295UL,0UL,-1L,0xA5FDL,0xC5C6L,8UL,-4L,-9L,0UL}},{{0xEC5EL,0x1B313A98L,0UL,0x490BL,-1L,0x2802L,0xE1CAL,0xE6F4E23CL,0x2C656FBDL,0xA3D1L},{3UL,0xF6566DF0L,0x9BB04B63833010C1LL,-5L,1L,7UL,0x61E7L,0xFC17AA3BL,0L,0xA5B6L},{0xEC5EL,0x1B313A98L,0UL,0x490BL,-1L,0x2802L,0xE1CAL,0xE6F4E23CL,0x2C656FBDL,0xA3D1L},{5UL,4294967295UL,0x02D207CCD70D06ECLL,0x78D5L,6L,1UL,65532UL,0x31A71889L,1L,0x1AC3L},{5UL,4294967295UL,0x02D207CCD70D06ECLL,0x78D5L,6L,1UL,65532UL,0x31A71889L,1L,0x1AC3L},{0xEC5EL,0x1B313A98L,0UL,0x490BL,-1L,0x2802L,0xE1CAL,0xE6F4E23CL,0x2C656FBDL,0xA3D1L},{3UL,0xF6566DF0L,0x9BB04B63833010C1LL,-5L,1L,7UL,0x61E7L,0xFC17AA3BL,0L,0xA5B6L},{0xEC5EL,0x1B313A98L,0UL,0x490BL,-1L,0x2802L,0xE1CAL,0xE6F4E23CL,0x2C656FBDL,0xA3D1L}},{{0x0DF0L,0UL,0x05F40BC40D00257FLL,0x04F8L,0x62A2L,65529UL,65534UL,0L,0x4D334631L,0xE416L},{5UL,4294967295UL,0x02D207CCD70D06ECLL,0x78D5L,6L,1UL,65532UL,0x31A71889L,1L,0x1AC3L},{3UL,0xF6566DF0L,0x9BB04B63833010C1LL,-5L,1L,7UL,0x61E7L,0xFC17AA3BL,0L,0xA5B6L},{0xEC5EL,0x1B313A98L,0UL,0x490BL,-1L,0x2802L,0xE1CAL,0xE6F4E23CL,0x2C656FBDL,0xA3D1L},{5UL,4294967295UL,0x02D207CCD70D06ECLL,0x78D5L,6L,1UL,65532UL,0x31A71889L,1L,0x1AC3L},{5UL,4294967295UL,0x02D207CCD70D06ECLL,0x78D5L,6L,1UL,65532UL,0x31A71889L,1L,0x1AC3L},{0xEC5EL,0x1B313A98L,0UL,0x490BL,-1L,0x2802L,0xE1CAL,0xE6F4E23CL,0x2C656FBDL,0xA3D1L},{3UL,0xF6566DF0L,0x9BB04B63833010C1LL,-5L,1L,7UL,0x61E7L,0xFC17AA3BL,0L,0xA5B6L}},{{5UL,4294967295UL,0x02D207CCD70D06ECLL,0x78D5L,6L,1UL,65532UL,0x31A71889L,1L,0x1AC3L},{5UL,4294967295UL,0x02D207CCD70D06ECLL,0x78D5L,6L,1UL,65532UL,0x31A71889L,1L,0x1AC3L},{0xEC5EL,0x1B313A98L,0UL,0x490BL,-1L,0x2802L,0xE1CAL,0xE6F4E23CL,0x2C656FBDL,0xA3D1L},{3UL,0xF6566DF0L,0x9BB04B63833010C1LL,-5L,1L,7UL,0x61E7L,0xFC17AA3BL,0L,0xA5B6L},{0xEC5EL,0x1B313A98L,0UL,0x490BL,-1L,0x2802L,0xE1CAL,0xE6F4E23CL,0x2C656FBDL,0xA3D1L},{5UL,4294967295UL,0x02D207CCD70D06ECLL,0x78D5L,6L,1UL,65532UL,0x31A71889L,1L,0x1AC3L},{5UL,4294967295UL,0x02D207CCD70D06ECLL,0x78D5L,6L,1UL,65532UL,0x31A71889L,1L,0x1AC3L},{0xEC5EL,0x1B313A98L,0UL,0x490BL,-1L,0x2802L,0xE1CAL,0xE6F4E23CL,0x2C656FBDL,0xA3D1L}}};
static struct S0 g_1001 = {0x1BB0L,0x39D67D21L,0x7EDBBF91C8736A1FLL,9L,0xD886L,0x44C5L,1UL,0L,-1L,65528UL};
static uint8_t g_1006 = 1UL;
static uint16_t **g_1065 = &g_246;
static int8_t g_1079 = 0x13L;
static uint16_t g_1086 = 0UL;
static int32_t g_1171 = 0x2A6B3398L;
static const struct S1 *g_1199 = &g_386;
static const struct S1 **g_1198 = &g_1199;
static uint64_t g_1282 = 1UL;
static int32_t g_1304[1] = {(-10L)};
static int32_t * const g_1303 = &g_1304[0];
static int32_t * const *g_1302 = &g_1303;
static const int32_t g_1317 = 0x7DFC3A50L;
static uint32_t g_1376 = 0x3938BD8BL;
static uint8_t * const *g_1420 = &g_830;
static uint8_t * const * const *g_1419 = &g_1420;
static uint8_t g_1424 = 0xF6L;
static struct S0 g_1458 = {65535UL,4294967291UL,0x92B976793EA4CBF7LL,0xE96DL,4L,0UL,0x6825L,-2L,0x4CC477B4L,0xEAB0L};
static struct S0 *g_1457 = &g_1458;
static uint32_t g_1513[1][5][2] = {{{0x93F9F275L,0UL},{0UL,0x93F9F275L},{0UL,0UL},{0x93F9F275L,0UL},{0UL,0x93F9F275L}}};
static uint32_t * const g_1512 = &g_1513[0][2][0];
static uint32_t * const * const g_1511 = &g_1512;
static uint32_t * const * const *g_1510 = &g_1511;
static uint32_t * const * const **g_1509 = &g_1510;
static struct S0 g_1601 = {0UL,0x60CFC118L,0x8F5AEAB9C951CC18LL,9L,0x17A5L,0UL,0x01A5L,0xA101C867L,9L,0UL};
static struct S1 g_1619 = {4L,2456,-726,4154,11,2812,21,4,0,46};
static struct S1 *g_1618 = &g_1619;
static const int32_t *g_1627 = &g_393[1];
static uint64_t **g_1652 = (void*)0;
static int16_t g_1708 = 0x664CL;
static int64_t g_1749 = 0x79B732404CEEDC33LL;
static uint64_t g_1796 = 0x0FFF93EFC75541F4LL;
static int8_t * const ***g_1840 = (void*)0;
static int8_t * const ****g_1839 = &g_1840;
static uint16_t g_1956 = 65531UL;
static struct S1 * const *g_1983 = &g_1618;
static struct S1 * const **g_1982 = &g_1983;
static int8_t g_2008 = 0x8AL;
static struct S1 **g_2078 = &g_1618;
static struct S1 ***g_2077 = &g_2078;
static struct S1 ****g_2076[4][3][5] = {{{&g_2077,&g_2077,&g_2077,&g_2077,&g_2077},{&g_2077,&g_2077,&g_2077,&g_2077,&g_2077},{&g_2077,&g_2077,&g_2077,&g_2077,&g_2077}},{{&g_2077,&g_2077,&g_2077,&g_2077,&g_2077},{&g_2077,&g_2077,&g_2077,&g_2077,&g_2077},{&g_2077,&g_2077,&g_2077,&g_2077,&g_2077}},{{&g_2077,&g_2077,&g_2077,&g_2077,&g_2077},{&g_2077,&g_2077,&g_2077,&g_2077,&g_2077},{&g_2077,&g_2077,&g_2077,&g_2077,&g_2077}},{{&g_2077,&g_2077,&g_2077,&g_2077,&g_2077},{&g_2077,&g_2077,&g_2077,&g_2077,&g_2077},{&g_2077,&g_2077,&g_2077,&g_2077,&g_2077}}};
static int64_t g_2091 = 0xEA5823CA98304DD8LL;
static int32_t *g_2100 = (void*)0;
static uint64_t *g_2104[9][7][4] = {{{&g_1282,(void*)0,(void*)0,(void*)0},{&g_1282,&g_1601.f2,(void*)0,(void*)0},{&g_1282,&g_300,&g_1001.f2,&g_1282},{&g_239,&g_1282,&g_1001.f2,(void*)0},{&g_1282,&g_1458.f2,&g_300,&g_239},{(void*)0,&g_239,&g_239,&g_1796},{&g_1796,&g_1458.f2,&g_1458.f2,&g_911[2][2].f2}},{{&g_491[1][0][1].f2,(void*)0,&g_300,&g_1601.f2},{&g_1458.f2,&g_491[1][0][1].f2,&g_491[1][0][1].f2,&g_1601.f2},{(void*)0,&g_239,&g_1282,&g_1001.f2},{&g_300,&g_239,&g_1282,(void*)0},{&g_491[1][0][1].f2,&g_1458.f2,&g_1796,&g_911[2][2].f2},{&g_239,(void*)0,(void*)0,&g_239},{(void*)0,&g_911[2][2].f2,&g_911[2][2].f2,&g_1458.f2}},{{(void*)0,&g_300,&g_1001.f2,&g_491[1][0][1].f2},{&g_1601.f2,&g_1458.f2,(void*)0,&g_491[1][0][1].f2},{(void*)0,&g_300,&g_1001.f2,&g_1458.f2},{&g_1001.f2,&g_911[2][2].f2,&g_300,&g_239},{&g_491[1][0][1].f2,(void*)0,(void*)0,&g_911[2][2].f2},{&g_1001.f2,&g_1458.f2,&g_1282,(void*)0},{&g_491[1][0][1].f2,&g_239,&g_1601.f2,&g_1001.f2}},{{(void*)0,&g_239,&g_491[1][0][1].f2,&g_1601.f2},{(void*)0,&g_491[1][0][1].f2,&g_1796,&g_1601.f2},{(void*)0,(void*)0,(void*)0,&g_911[2][2].f2},{&g_911[2][2].f2,&g_1458.f2,&g_239,&g_1796},{&g_1001.f2,&g_239,&g_239,&g_239},{&g_911[2][2].f2,&g_1458.f2,&g_300,&g_1001.f2},{&g_911[2][2].f2,&g_1458.f2,&g_300,&g_491[1][0][1].f2}},{{&g_1601.f2,&g_300,&g_1601.f2,(void*)0},{(void*)0,&g_491[1][0][1].f2,&g_1458.f2,&g_1458.f2},{&g_911[2][2].f2,&g_1001.f2,&g_1796,&g_1282},{&g_1796,&g_239,&g_300,(void*)0},{&g_300,&g_911[2][2].f2,&g_1796,&g_239},{&g_1458.f2,&g_491[1][0][1].f2,&g_491[1][0][1].f2,&g_911[2][2].f2},{&g_491[1][0][1].f2,(void*)0,(void*)0,(void*)0}},{{&g_1601.f2,&g_239,(void*)0,&g_491[1][0][1].f2},{&g_911[2][2].f2,&g_491[1][0][1].f2,&g_1796,(void*)0},{&g_1001.f2,&g_1282,&g_911[2][2].f2,(void*)0},{&g_1458.f2,(void*)0,&g_300,&g_1796},{(void*)0,&g_1282,(void*)0,&g_491[1][0][1].f2},{(void*)0,&g_239,(void*)0,&g_1001.f2},{&g_911[2][2].f2,(void*)0,&g_1001.f2,(void*)0}},{{(void*)0,(void*)0,&g_1001.f2,(void*)0},{&g_911[2][2].f2,&g_300,&g_1001.f2,&g_1458.f2},{&g_1001.f2,(void*)0,&g_1601.f2,&g_1601.f2},{&g_1282,&g_491[1][0][1].f2,(void*)0,&g_1601.f2},{&g_1282,(void*)0,&g_1601.f2,&g_1458.f2},{&g_1001.f2,&g_1601.f2,&g_1001.f2,&g_1282},{&g_911[2][2].f2,&g_1282,&g_1001.f2,&g_239}},{{(void*)0,&g_1282,&g_1001.f2,&g_239},{&g_911[2][2].f2,(void*)0,(void*)0,&g_1458.f2},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_300,&g_300,&g_300},{&g_1458.f2,&g_1796,&g_911[2][2].f2,(void*)0},{&g_1001.f2,&g_1001.f2,&g_1796,&g_239},{&g_911[2][2].f2,&g_239,(void*)0,&g_1001.f2}},{{&g_1601.f2,(void*)0,(void*)0,(void*)0},{&g_491[1][0][1].f2,(void*)0,&g_491[1][0][1].f2,(void*)0},{&g_1458.f2,(void*)0,&g_1796,&g_239},{&g_300,&g_1282,&g_300,&g_239},{&g_1796,&g_491[1][0][1].f2,&g_1796,&g_1282},{&g_911[2][2].f2,&g_1458.f2,&g_1458.f2,&g_491[1][0][1].f2},{(void*)0,(void*)0,&g_1601.f2,&g_491[1][0][1].f2}}};
static int8_t *** const * const g_2112 = &g_538;
static struct S0 g_2119 = {6UL,4294967291UL,8UL,0xD66CL,0L,0UL,0xCF77L,-4L,1L,0x9C48L};
static struct S0 g_2122 = {0xECEFL,1UL,18446744073709551606UL,1L,0x8628L,0x04ABL,2UL,-6L,1L,0x7F61L};
static uint16_t g_2142 = 0xFC89L;
static struct S0 **g_2200[7][9] = {{&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457},{&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457},{&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457},{&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457},{&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457},{&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457},{&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457,&g_1457}};
static struct S0 ***g_2199[8] = {&g_2200[0][5],&g_2200[0][5],&g_2200[0][5],&g_2200[0][5],&g_2200[0][5],&g_2200[0][5],&g_2200[0][5],&g_2200[0][5]};
static struct S1 g_2218 = {0L,-2881,70,2057,9,1062,466,5,0,10};
static uint32_t ***g_2222 = &g_701;
static uint32_t ****g_2221 = &g_2222;
static uint32_t ****g_2229 = (void*)0;
static uint16_t g_2274 = 65532UL;



static uint32_t func_1(void);
static int32_t func_2(int64_t p_3, struct S1 p_4, int16_t p_5);
static int64_t func_6(int64_t p_7, const uint32_t p_8, struct S0 p_9, struct S0 p_10);
static uint8_t func_15(int64_t p_16, const uint32_t p_17, int32_t p_18);
static int16_t func_19(int32_t p_20, int32_t p_21, int32_t p_22, int32_t p_23);
static int32_t func_47(uint32_t p_48, int64_t p_49, int8_t * p_50);
static int32_t func_51(int16_t p_52, uint8_t p_53, uint64_t p_54);
static uint32_t func_61(uint32_t p_62, const uint32_t p_63, struct S1 p_64);
static uint32_t func_65(int32_t p_66, uint16_t * const p_67, int32_t p_68, int8_t * p_69, uint32_t p_70);
static struct S0 func_71(uint16_t * p_72, uint32_t p_73, uint64_t p_74, int16_t p_75);
# 163 "<stdin>"
static uint32_t func_1(void)
{
    uint16_t l_14 = 3UL;
    uint16_t *l_40 = &g_41;
    int16_t l_42 = 0xC7DFL;
    int8_t *l_43 = &g_44[4];
    int32_t l_1296 = 1L;
    const uint32_t l_1468 = 0x49947978L;
    struct S0 l_1469 = {65535UL,0UL,0UL,0x7809L,0xEEDAL,0UL,0UL,7L,-3L,0x2425L};
    struct S1 **l_1859 = &g_1618;
    int8_t l_1864 = 0x13L;
    int64_t ****l_1870 = (void*)0;
    struct S1 l_1893 = {0x746A0FEEL,737,-554,4010,9,1526,471,5,0,62};
    int64_t l_1945[3];
    uint16_t l_1977 = 65535UL;
    int64_t l_2007 = 1L;
    int32_t l_2009 = 1L;
    int32_t l_2010[2][6] = {{(-6L),0x2A834D4BL,0xAE6537FAL,0x2A834D4BL,(-6L),(-6L)},{0xADCF6FB7L,0x2A834D4BL,0x2A834D4BL,0xADCF6FB7L,0xDB7F8A6EL,0xADCF6FB7L}};
    int8_t l_2023 = 5L;
    int8_t * const **l_2058 = &g_205;
    struct S1 ***l_2075 = &l_1859;
    struct S1 ****l_2074 = &l_2075;
    struct S0 **l_2087 = (void*)0;
    int16_t l_2092 = 1L;
    uint32_t l_2107 = 0xC2C449F4L;
    int16_t *l_2145 = &g_2119.f3;
    int16_t **l_2144 = &l_2145;
    uint32_t ** const ***l_2177 = (void*)0;
    uint32_t l_2181 = 0UL;
    struct S0 ** const *l_2197 = &l_2087;
    uint8_t **l_2203 = &g_830;
    int32_t *l_2233 = &g_393[3];
    uint8_t l_2303 = 0xEBL;
    uint64_t l_2321 = 0x8C6669AE39BA1684LL;
    int8_t l_2324 = 0L;
    struct S0 **l_2327 = &g_1457;
    uint64_t *l_2328[3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_1945[i] = (-1L);
    for (i = 0; i < 3; i++)
        l_2328[i] = &g_1458.f2;
    if (func_2(func_6((g_11[6][1][0] , ((safe_lshift_func_uint8_t_u_u(l_14, 1)) & (func_15((((g_11[6][0][0] != l_14) < 0x8821L) || ((func_19((safe_sub_func_int16_t_s_s((+((*l_43) ^= (safe_div_func_uint16_t_u_u((((safe_div_func_int16_t_s_s(((!((safe_div_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(g_11[2][1][0], ((safe_div_func_int64_t_s_s(0x9F4AEC701401CEA0LL, (l_14 & ((*l_40) = (safe_mod_func_int8_t_s_s(l_14, g_11[6][1][0])))))) ^ l_42))), 0x58D3B3E240190438LL)) <= 255UL)) < 1UL), g_11[3][0][0])) | l_14) | (-1L)), 65535UL)))), g_11[2][1][0])), l_42, g_11[3][2][0], g_11[4][1][0]) < g_491[1][0][1].f5) , l_42)), g_386.f1, l_1296) > l_1296))), l_1468, l_1469, g_1458), (*g_1199), g_911[2][2].f0))
    {
        int64_t l_1858[9][8][3] = {{{0L,(-1L),0L},{0x55901A7003B9FE29LL,0xFAF07207182B4746LL,1L},{0L,1L,6L},{1L,0xC42B61CF83548A6DLL,0x1C3D076C56D20A2ELL},{0x9D568D526D2E8588LL,1L,(-9L)},{0xA4B4404179B2C397LL,0xA9DADE661FBC9FA8LL,0xD11E8E103CA54356LL},{1L,0x897B8D43827A562FLL,8L},{0xA9DADE661FBC9FA8LL,0x997B9FFBDD2A48B7LL,(-6L)}},{{4L,(-1L),0x0D7006986D6DBC1CLL},{0xB3AE3556834504CDLL,(-1L),0xC02A3062A4B15D3ELL},{(-1L),0x997B9FFBDD2A48B7LL,0L},{1L,0x897B8D43827A562FLL,1L},{1L,0xA9DADE661FBC9FA8LL,1L},{0xD34D48C2DA8991F4LL,1L,0x973063D62A04F777LL},{0L,0xC42B61CF83548A6DLL,0x55901A7003B9FE29LL},{2L,1L,0x5702377D6446BD29LL}},{{0x9D73AE4C7BA3F300LL,0xFAF07207182B4746LL,0xC42B61CF83548A6DLL},{1L,(-1L),2L},{0x19B52D9B6EF5427ELL,0x0131B3B3333DB962LL,5L},{0x945D4475678D5680LL,1L,1L},{2L,0x6AA1DD5C0AECAA70LL,0x91260E2EFE8E60A2LL},{0xC50133ECB407CB0BLL,0x1D0EE3B00B7228D0LL,2L},{(-5L),(-5L),0x19B52D9B6EF5427ELL},{0x349C901F942517D7LL,1L,0x05D09EA983111738LL}},{{0xC02A3062A4B15D3ELL,1L,0L},{0xBF8C32619C85691FLL,0x55901A7003B9FE29LL,0x5315AA1D5C8F7832LL},{0x7C7747BB7AB61B58LL,0xC02A3062A4B15D3ELL,0L},{0x997B9FFBDD2A48B7LL,0L,0x05D09EA983111738LL},{0L,0L,0x19B52D9B6EF5427ELL},{6L,(-1L),2L},{4L,0L,0x91260E2EFE8E60A2LL},{1L,0L,1L}},{{6L,1L,5L},{0x05D09EA983111738LL,(-9L),2L},{0x0D7006986D6DBC1CLL,1L,0xC42B61CF83548A6DLL},{1L,1L,0x5702377D6446BD29LL},{0x897B8D43827A562FLL,0x5702377D6446BD29LL,0x55901A7003B9FE29LL},{(-9L),0x27E40A3FDFB55E69LL,0x973063D62A04F777LL},{0L,(-6L),1L},{0L,0x0D3F7BF48C443EB6LL,1L}},{{(-6L),1L,0L},{0x71BC7DCD66A07563LL,0xD11E8E103CA54356LL,0xC02A3062A4B15D3ELL},{0x53606DE713A473EBLL,0x945D4475678D5680LL,0x0D7006986D6DBC1CLL},{0x53606DE713A473EBLL,0xCFB64730E92F9E84LL,(-6L)},{0x71BC7DCD66A07563LL,0x571BE33BD0D8167ELL,8L},{(-6L),4L,0xD11E8E103CA54356LL},{0L,0x973063D62A04F777LL,(-9L)},{0L,0xBF8C32619C85691FLL,0x1C3D076C56D20A2ELL}},{{(-9L),6L,6L},{0x897B8D43827A562FLL,0xB9EFECF47A0CA4D2LL,1L},{1L,0x1A83ACDD711A53FDLL,0L},{0x897B8D43827A562FLL,0x19B52D9B6EF5427ELL,0x0131B3B3333DB962LL},{0xB9EFECF47A0CA4D2LL,1L,1L},{1L,0x6AA1DD5C0AECAA70LL,0x659CDE30ECA6D786LL},{2L,1L,0L},{0x0131B3B3333DB962LL,0x945D4475678D5680LL,0x945D4475678D5680LL}},{{0xF1637FDC83DA42B0LL,0x27E40A3FDFB55E69LL,(-1L)},{4L,(-1L),0x7C7747BB7AB61B58LL},{0L,0x659CDE30ECA6D786LL,5L},{0x27E40A3FDFB55E69LL,1L,0x53606DE713A473EBLL},{1L,0x659CDE30ECA6D786LL,0xCCC41425452E2CC7LL},{6L,(-1L),0xC02A3062A4B15D3ELL},{0x945D4475678D5680LL,0x27E40A3FDFB55E69LL,0xB3AE3556834504CDLL},{0L,0x945D4475678D5680LL,0x5315AA1D5C8F7832LL}},{{0x973063D62A04F777LL,1L,0xD34D48C2DA8991F4LL},{0x0D7006986D6DBC1CLL,0x6AA1DD5C0AECAA70LL,0x27E40A3FDFB55E69LL},{8L,1L,0L},{0x1C3D076C56D20A2ELL,0x19B52D9B6EF5427ELL,0x71BC7DCD66A07563LL},{0xCFB64730E92F9E84LL,0xB3AE3556834504CDLL,0L},{0xC42B61CF83548A6DLL,(-9L),0x007B4AD293D0AE44LL},{1L,0xF1637FDC83DA42B0LL,0x34AC0198AB79AE4FLL},{0L,1L,0xF1637FDC83DA42B0LL}}};
        uint8_t l_1865 = 0xA4L;
        int32_t l_1866 = 0x7732ACAFL;
        uint32_t l_1878 = 4294967291UL;
        uint64_t l_1931 = 0x9923EC1801899B7ELL;
        int32_t l_1953 = 0x71D0ACD3L;
        int32_t l_1954[10][6][4] = {{{0xD05A9BBAL,7L,(-1L),(-1L)},{7L,7L,0xD1488185L,0L},{7L,0xD05A9BBAL,(-1L),0L},{0xD05A9BBAL,7L,(-1L),(-1L)},{7L,7L,0xD1488185L,0L},{7L,0xD05A9BBAL,(-1L),0L}},{{0xD05A9BBAL,7L,(-1L),(-1L)},{7L,7L,0xD1488185L,0L},{7L,0xD05A9BBAL,(-1L),0L},{0xD05A9BBAL,7L,(-1L),(-1L)},{7L,7L,0xD1488185L,0L},{7L,0xD05A9BBAL,(-1L),0L}},{{0xD05A9BBAL,7L,(-1L),(-1L)},{7L,7L,0xD1488185L,0L},{7L,0xD05A9BBAL,(-1L),0L},{0xD05A9BBAL,7L,(-1L),(-1L)},{7L,7L,0xD1488185L,0L},{7L,0xD05A9BBAL,(-1L),0L}},{{0xD05A9BBAL,7L,(-1L),(-1L)},{7L,7L,0xD1488185L,0L},{7L,0xD05A9BBAL,(-1L),0L},{0xD05A9BBAL,7L,(-1L),(-1L)},{7L,7L,0xD1488185L,0L},{7L,0xD05A9BBAL,(-1L),0L}},{{0xD05A9BBAL,7L,(-1L),(-1L)},{7L,7L,0xD1488185L,0L},{7L,0xD05A9BBAL,(-1L),0L},{0xD05A9BBAL,7L,(-1L),(-1L)},{7L,7L,0xD1488185L,0L},{7L,0xD05A9BBAL,(-1L),0L}},{{0xD05A9BBAL,7L,(-1L),(-1L)},{7L,7L,0xD1488185L,(-1L)},{0xD05A9BBAL,0x690D2E26L,0xD1488185L,(-1L)},{0x690D2E26L,0xD05A9BBAL,0xD1488185L,0xD1488185L},{0xD05A9BBAL,0xD05A9BBAL,0L,(-1L)},{0xD05A9BBAL,0x690D2E26L,0xD1488185L,(-1L)}},{{0x690D2E26L,0xD05A9BBAL,0xD1488185L,0xD1488185L},{0xD05A9BBAL,0xD05A9BBAL,0L,(-1L)},{0xD05A9BBAL,0x690D2E26L,0xD1488185L,(-1L)},{0x690D2E26L,0xD05A9BBAL,0xD1488185L,0xD1488185L},{0xD05A9BBAL,0xD05A9BBAL,0L,(-1L)},{0xD05A9BBAL,0x690D2E26L,0xD1488185L,(-1L)}},{{0x690D2E26L,0xD05A9BBAL,0xD1488185L,0xD1488185L},{0xD05A9BBAL,0xD05A9BBAL,0L,(-1L)},{0xD05A9BBAL,0x690D2E26L,0xD1488185L,(-1L)},{0x690D2E26L,0xD05A9BBAL,0xD1488185L,0xD1488185L},{0xD05A9BBAL,0xD05A9BBAL,0L,(-1L)},{0xD05A9BBAL,0x690D2E26L,0xD1488185L,(-1L)}},{{0x690D2E26L,0xD05A9BBAL,0xD1488185L,0xD1488185L},{0xD05A9BBAL,0xD05A9BBAL,0L,(-1L)},{0xD05A9BBAL,0x690D2E26L,0xD1488185L,(-1L)},{0x690D2E26L,0xD05A9BBAL,0xD1488185L,0xD1488185L},{0xD05A9BBAL,0xD05A9BBAL,0L,(-1L)},{0xD05A9BBAL,0x690D2E26L,0xD1488185L,(-1L)}},{{0x690D2E26L,0xD05A9BBAL,0xD1488185L,0xD1488185L},{0xD05A9BBAL,0xD05A9BBAL,0L,(-1L)},{0xD05A9BBAL,0x690D2E26L,0xD1488185L,(-1L)},{0x690D2E26L,0xD05A9BBAL,0xD1488185L,0xD1488185L},{0xD05A9BBAL,0xD05A9BBAL,0L,(-1L)},{0xD05A9BBAL,0x690D2E26L,0xD1488185L,(-1L)}}};
        const int8_t *l_1965 = &g_1079;
        const int8_t **l_1964 = &l_1965;
        const int8_t ***l_1963 = &l_1964;
        const int8_t ****l_1962 = &l_1963;
        uint32_t * const *l_1969 = &g_702;
        uint32_t * const **l_1968 = &l_1969;
        uint32_t * const ***l_1967 = &l_1968;
        uint16_t * const *l_1975 = &g_246;
        int16_t l_1988 = 0x50C8L;
        int32_t l_2004 = 0L;
        int64_t l_2006 = 1L;
        uint16_t l_2055 = 0x5775L;
        struct S1 l_2071 = {1L,669,-87,4588,4,632,88,6,0,78};
        uint64_t *l_2103 = &g_491[1][0][1].f2;
        int32_t *l_2143 = &l_1953;
        int i, j, k;
lbl_1995:
        l_1866 &= (((**g_1420) != 6L) & ((((((*g_1303) = ((**g_1302) |= (l_1469.f2 , ((safe_add_func_uint8_t_u_u(l_1469.f2, (((65530UL | (l_1858[1][7][1] == ((l_1859 == l_1859) < (safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((l_1864 = 1UL), l_1858[1][7][1])) != (*g_1303)), g_1601.f9))))) & l_1865) | 0x2882L))) & l_1865)))) >= 1UL) & g_1601.f8) , (*g_1457)) , g_1001.f4));
        for (g_1458.f3 = 3; (g_1458.f3 >= 0); g_1458.f3 -= 1)
        {
            int32_t l_1869[6] = {2L,2L,2L,2L,2L,2L};
            const uint32_t *l_1877 = &g_692[1];
            const uint32_t **l_1876 = &l_1877;
            const uint32_t ***l_1875[2][6][6] = {{{&l_1876,&l_1876,&l_1876,(void*)0,&l_1876,(void*)0},{&l_1876,&l_1876,&l_1876,&l_1876,&l_1876,&l_1876},{(void*)0,(void*)0,&l_1876,(void*)0,&l_1876,(void*)0},{(void*)0,(void*)0,&l_1876,(void*)0,(void*)0,&l_1876},{(void*)0,(void*)0,&l_1876,&l_1876,(void*)0,(void*)0},{&l_1876,(void*)0,&l_1876,(void*)0,&l_1876,(void*)0}},{{&l_1876,(void*)0,&l_1876,&l_1876,&l_1876,&l_1876},{&l_1876,&l_1876,&l_1876,(void*)0,&l_1876,(void*)0},{&l_1876,&l_1876,&l_1876,&l_1876,&l_1876,&l_1876},{(void*)0,(void*)0,&l_1876,(void*)0,&l_1876,(void*)0},{(void*)0,(void*)0,&l_1876,(void*)0,(void*)0,&l_1876},{(void*)0,(void*)0,&l_1876,&l_1876,(void*)0,(void*)0}}};
            const int8_t *l_1891 = &g_1079;
            const int8_t **l_1890[10];
            uint64_t * const l_1898 = &g_1282;
            int32_t l_1909 = 0x65EE8129L;
            const int32_t l_1923 = (-9L);
            const uint8_t l_1928 = 255UL;
            int32_t l_1955[7] = {0x3B62A1B4L,6L,0x3B62A1B4L,0x3B62A1B4L,6L,0x3B62A1B4L,0x3B62A1B4L};
            int64_t l_1989 = 0x4DF0E4EAF2CDD3E7LL;
            int16_t l_1996 = 2L;
            uint8_t l_2013[3];
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_1890[i] = &l_1891;
            for (i = 0; i < 3; i++)
                l_2013[i] = 5UL;
            (*g_1303) |= (-5L);
            l_1866 |= 4L;
            if (((-1L) && l_1469.f6))
            {
                (**g_1302) = (l_1866 > ((l_1296 |= (safe_mod_func_int16_t_s_s((l_1869[0] && (l_1870 != (void*)0)), (safe_add_func_int64_t_s_s(0x267355DD176C5B50LL, ((0UL > (safe_add_func_int64_t_s_s(l_1869[0], (((void*)0 != l_1875[0][2][5]) <= l_1878)))) , (*g_572))))))) , 0xA03F7513L));
            }
            else
            {
                uint64_t l_1892 = 6UL;
                int32_t **l_1894 = &g_495[1][3];
                (*l_1894) = (((l_1858[1][7][1] <= ((safe_rshift_func_uint8_t_u_u((0x6F21L || (((safe_div_func_int32_t_s_s(((4UL && ((**g_1302) = 0x799F9A51L)) , (l_1866 <= l_1865)), (safe_lshift_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s((!((l_1869[4] && l_1869[5]) || (safe_mul_func_int8_t_s_s(((-2L) >= l_1469.f6), l_1869[4])))), 7)) , l_1890[6]) != (**g_647)), l_14)))) <= l_1869[1]) <= l_1858[0][2][0])), l_1892)) && 0x2294EC24AAD4D87CLL)) , l_1893) , (void*)0);
            }
            for (g_1458.f0 = 0; (g_1458.f0 <= 2); g_1458.f0 += 1)
            {
                uint64_t *l_1900 = &g_1458.f2;
                uint64_t **l_1899 = &l_1900;
                int32_t l_1907[5];
                int16_t *l_1908 = &g_491[1][0][1].f4;
                const uint32_t l_1944 = 1UL;
                const int8_t ***l_1960 = (void*)0;
                const int8_t ****l_1959[4] = {&l_1960,&l_1960,&l_1960,&l_1960};
                struct S1 * const *l_1980 = (void*)0;
                struct S1 * const **l_1979 = &l_1980;
                uint8_t l_2024 = 255UL;
                int i;
                for (i = 0; i < 5; i++)
                    l_1907[i] = 0x74D57D2DL;
                if ((((l_1296 , (l_1909 |= ((**g_1511) |= (safe_add_func_int32_t_s_s(((~((l_1898 != ((*l_1899) = &g_1796)) ^ l_1869[5])) || ((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s(((-10L) && l_1869[0]))) , 0x52A8L), ((((*l_1908) = (safe_mul_func_int16_t_s_s(((+(l_1907[0] > 0x191AL)) >= 3L), g_760[3][8]))) | l_1907[0]) == 18446744073709551615UL))) > (*g_88))), l_1865))))) >= 9UL) , l_1468))
                {
                    return (*g_1512);
                }
                else
                {
                    uint16_t l_1912 = 3UL;
                    uint8_t *l_1922 = &g_304;
                    int32_t *l_1924 = &l_1296;
                    if ((*g_88))
                        break;
                    (*l_1924) &= (((255UL == ((((**g_1420) && ((*l_1922) = (safe_sub_func_int16_t_s_s(((((*l_1908) = 7L) , l_1912) >= ((((**g_1420) = ((safe_sub_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(((**g_1511) = ((void*)0 == &g_406)), 3L)) , ((*l_40) = (safe_mod_func_int32_t_s_s((0xAE4ACFCA972D9DFCLL || (!((g_1001.f4 = (safe_div_func_int64_t_s_s(0L, (*g_572)))) <= l_1912))), l_1878)))) >= 65535UL), 6UL)) ^ (**g_1302))) != l_1869[0]) , l_1907[0])), l_1469.f5)))) && l_1912) , l_1923)) , (*g_1303)) & 1UL);
                }
                if (((!(0x4FE3L || (g_1601.f4 = g_1601.f1))) && (((safe_lshift_func_uint8_t_u_u(((l_1928 == ((safe_add_func_int32_t_s_s(l_1878, l_1931)) != ((safe_sub_func_int64_t_s_s((((safe_mul_func_uint8_t_u_u((**g_1420), ((((**g_1510) == ((*g_406) = (*g_406))) && (safe_sub_func_uint64_t_u_u((((safe_add_func_int8_t_s_s(((((--(*l_1898)) <= (safe_div_func_int16_t_s_s(0x547CL, g_491[1][0][1].f4))) || l_1907[0]) >= l_42), l_1878)) , 18446744073709551614UL) >= l_1893.f6), (-7L)))) < (***g_1419)))) != 0xCBC4L) , l_1893.f2), g_41)) && l_14))) <= l_1944), 0)) == l_1945[1]) & 65529UL)))
                {
                    int32_t *l_1946 = &g_393[0];
                    int32_t *l_1947 = &g_89[4][2][1];
                    int32_t *l_1948 = &g_89[2][2][0];
                    int32_t *l_1949 = &g_1304[0];
                    int32_t *l_1950 = &g_911[2][2].f7;
                    int32_t *l_1951 = &g_393[3];
                    int32_t *l_1952[2][5] = {{(void*)0,&l_1907[2],&l_1907[2],(void*)0,&l_1907[2]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int i, j;
                    ++g_1956;
                }
                else
                {
                    const int8_t *****l_1961[5] = {&l_1959[0],&l_1959[0],&l_1959[0],&l_1959[0],&l_1959[0]};
                    int32_t l_1966 = 0L;
                    const uint32_t *l_1973[7][9][4] = {{{&l_1468,&g_1376,&l_1468,&g_1376},{(void*)0,&g_1376,&g_1376,&l_1468},{&l_1468,&l_1468,&l_1468,&g_1376},{&l_1468,&g_1376,&g_1376,&l_1468},{&l_1468,&l_1468,&l_1468,&l_1468},{&l_1468,&l_1468,&g_1376,&l_1468},{(void*)0,&g_1376,&l_1468,&g_1376},{&l_1468,&l_1468,&l_1468,&l_1468},{&l_1468,&l_1468,&l_1468,&g_1376}},{{&l_1468,&g_1376,&l_1468,&l_1468},{&l_1468,&l_1468,&l_1468,&l_1468},{&l_1468,&l_1468,&l_1468,&l_1468},{&g_1376,&g_1376,&l_1468,&g_1376},{&l_1468,&l_1468,&l_1468,&l_1468},{&l_1468,&g_1376,&l_1468,&g_1376},{&l_1468,&g_1376,&l_1468,&g_1376},{&l_1468,&l_1468,&l_1468,&g_1376},{&l_1468,&g_1376,&l_1468,&g_1376}},{{(void*)0,&g_1376,&g_1376,&l_1468},{&l_1468,&l_1468,&l_1468,&g_1376},{&l_1468,&g_1376,&g_1376,&l_1468},{&l_1468,&l_1468,&l_1468,&l_1468},{&l_1468,&l_1468,&g_1376,&l_1468},{(void*)0,&g_1376,&l_1468,&g_1376},{&l_1468,&l_1468,&l_1468,&l_1468},{&l_1468,&l_1468,&l_1468,&g_1376},{&l_1468,&g_1376,&l_1468,&l_1468}},{{&l_1468,&l_1468,&l_1468,&l_1468},{&l_1468,&l_1468,&l_1468,&l_1468},{&g_1376,&g_1376,&l_1468,&g_1376},{&l_1468,&l_1468,&l_1468,&l_1468},{&l_1468,&g_1376,&l_1468,&g_1376},{&l_1468,&g_1376,&l_1468,&g_1376},{&l_1468,&l_1468,&l_1468,&g_1376},{&l_1468,&g_1376,&l_1468,&g_1376},{(void*)0,&g_1376,&g_1376,&l_1468}},{{&l_1468,&l_1468,&l_1468,&g_1376},{&l_1468,&g_1376,&g_1376,&l_1468},{&l_1468,&l_1468,&l_1468,&l_1468},{&l_1468,&l_1468,&g_1376,&l_1468},{(void*)0,&g_1376,&l_1468,&g_1376},{&l_1468,&g_1376,&g_1376,&g_1376},{&g_1376,&g_1376,&l_1468,&l_1468},{&g_1376,&g_1376,&g_1376,&l_1468},{&l_1468,&l_1468,&l_1468,&l_1468}},{{(void*)0,&l_1468,&l_1468,&l_1468},{&l_1468,&l_1468,&l_1468,&l_1468},{(void*)0,&l_1468,&l_1468,(void*)0},{&l_1468,&l_1468,&g_1376,&l_1468},{&g_1376,&l_1468,&l_1468,&l_1468},{&g_1376,&g_1376,&g_1376,&l_1468},{&l_1468,&l_1468,&g_1376,&l_1468},{&l_1468,&l_1468,&g_1376,(void*)0},{&l_1468,&l_1468,&l_1468,&l_1468}},{{&g_1376,&l_1468,&l_1468,&l_1468},{&g_1376,&l_1468,&l_1468,&l_1468},{&l_1468,&l_1468,&g_1376,&l_1468},{&l_1468,&g_1376,&g_1376,&l_1468},{&l_1468,&g_1376,&g_1376,&g_1376},{&g_1376,&g_1376,&l_1468,&l_1468},{&g_1376,&g_1376,&g_1376,&l_1468},{&l_1468,&l_1468,&l_1468,&l_1468},{(void*)0,&l_1468,&l_1468,&l_1468}}};
                    const uint32_t **l_1972 = &l_1973[6][4][3];
                    const uint32_t ***l_1971 = &l_1972;
                    const uint32_t ****l_1970 = &l_1971;
                    const uint32_t *****l_1974 = &l_1970;
                    uint16_t ***l_1976 = &g_1065;
                    int8_t l_1978 = 1L;
                    int32_t l_2005 = 0x45096FADL;
                    int32_t l_2011 = 3L;
                    int32_t l_2012 = (-1L);
                    uint8_t l_2016 = 251UL;
                    int i, j, k;
                    l_1962 = l_1959[0];
                    if ((((((l_1966 || (((0xB7E1L | l_1966) || (l_1955[5] && (l_1967 != ((*l_1974) = l_1970)))) == (l_1469.f7 = l_1907[1]))) != ((l_1975 != ((*l_1976) = &g_246)) , l_1955[6])) , 0x6EL) <= l_1977) , l_1978))
                    {
                        struct S1 * const ***l_1981[4];
                        int32_t l_1994 = (-3L);
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1981[i] = &l_1979;
                        g_1982 = l_1979;
                        if (l_1978)
                            break;
                        l_1994 = (safe_div_func_int64_t_s_s(0x7586884AE3615448LL, (safe_sub_func_int16_t_s_s(((*l_1908) = (l_1988 , 0xCD9DL)), (((((g_491[1][0][1].f3 = l_1954[8][1][2]) | 2UL) || (l_1989 |= g_491[1][0][1].f2)) && ((***g_1510)--)) && (safe_rshift_func_int16_t_s_u(0x0C01L, ((void*)0 == (*g_701)))))))));
                    }
                    else
                    {
                        (*g_1303) |= ((*g_88) = ((*g_701) != (void*)0));
                        (*g_88) &= ((*g_1303) & (g_386.f4 , l_1966));
                    }
                    if (l_1988)
                        goto lbl_1995;
                    for (g_1601.f3 = 3; (g_1601.f3 >= 0); g_1601.f3 -= 1)
                    {
                        int32_t *l_1997 = &l_1954[6][0][0];
                        int32_t *l_1998 = (void*)0;
                        int32_t *l_1999 = &l_1955[6];
                        int32_t *l_2000 = &l_1866;
                        int32_t *l_2001 = &g_1304[0];
                        int32_t *l_2002 = (void*)0;
                        int32_t *l_2003[6] = {&g_1601.f7,&g_1601.f7,&g_1601.f7,&g_1601.f7,&g_1601.f7,&g_1601.f7};
                        int i, j, k;
                        --l_2013[1];
                        l_2016--;
                        return l_1858[(g_1458.f3 + 1)][(g_1458.f0 + 2)][g_1458.f0];
                    }
                }
                for (g_337 = 0; (g_337 <= 2); g_337 += 1)
                {
                    int32_t *l_2019 = (void*)0;
                    int32_t *l_2020 = (void*)0;
                    int32_t *l_2021 = (void*)0;
                    int32_t *l_2022[4][1][2] = {{{&l_1909,&l_1909}},{{&l_1909,&l_1909}},{{&l_1909,&l_1909}},{{&l_1909,&l_1909}}};
                    int i, j, k;
                    ++l_2024;
                    if (g_337)
                        goto lbl_1995;
                }
            }
        }
        for (l_1469.f2 = (-15); (l_1469.f2 >= 44); l_1469.f2 = safe_add_func_uint16_t_u_u(l_1469.f2, 6))
        {
            int16_t l_2061 = (-2L);
            int32_t l_2080 = 0x2EBDD07AL;
            if (((*g_1303) = (((safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((***g_1419) , (safe_add_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u((++(*l_40)), 14)) , ((0x7825096BC7C0F988LL != (safe_lshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u((safe_add_func_int32_t_s_s(l_1953, (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((**g_537) = (*g_538)) != &l_43), (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((l_2006 <= (*g_572)), (func_71((*g_1065), l_1296, l_2055, l_2023) , 0xAAF3L))), l_2009)))), (***g_1419))))), 1UL)), 1))) , 0x459DAEE6FF539B98LL)) | (*g_572)), 0xCC0EL))), l_1866)), l_1893.f8)), g_386.f9)) , l_1469.f4) & l_1977)))
            {
                int32_t *l_2060 = &g_1001.f7;
                const struct S1 l_2084[3][4] = {{{0xD6F8AA3AL,3477,108,5038,5,3978,285,4,0,15},{0xD6F8AA3AL,3477,108,5038,5,3978,285,4,0,15},{0L,-954,759,4591,8,172,336,1,0,84},{0x5007F928L,-2279,374,3442,14,718,86,4,0,39}},{{3L,-661,684,5283,9,2406,18,3,0,87},{-6L,-3620,-179,1360,5,834,11,1,0,37},{3L,-661,684,5283,9,2406,18,3,0,87},{0L,-954,759,4591,8,172,336,1,0,84}},{{3L,-661,684,5283,9,2406,18,3,0,87},{0L,-954,759,4591,8,172,336,1,0,84},{0L,-954,759,4591,8,172,336,1,0,84},{3L,-661,684,5283,9,2406,18,3,0,87}}};
                struct S0 **l_2085 = (void*)0;
                struct S0 ***l_2086 = &l_2085;
                int32_t l_2089 = 0xBA093540L;
                int32_t l_2093[4] = {0x73BC8AFDL,0x73BC8AFDL,0x73BC8AFDL,0x73BC8AFDL};
                struct S0 *l_2121 = &g_2122;
                int i, j;
                for (g_1458.f4 = 9; (g_1458.f4 < (-24)); g_1458.f4 = safe_sub_func_uint32_t_u_u(g_1458.f4, 2))
                {
                    (**g_1302) = (*g_1303);
                }
                if ((l_1954[7][3][1] = ((l_2058 == (void*)0) , l_1858[1][7][1])))
                {
                    for (g_1001.f4 = 0; (g_1001.f4 <= 2); g_1001.f4 += 1)
                    {
                        int32_t **l_2059[10][2][1] = {{{(void*)0},{&g_88}},{{(void*)0},{&g_88}},{{(void*)0},{&g_88}},{{(void*)0},{&g_88}},{{(void*)0},{&g_88}},{{(void*)0},{&g_88}},{{(void*)0},{&g_88}},{{(void*)0},{&g_88}},{{(void*)0},{&g_88}},{{(void*)0},{&g_88}}};
                        int i, j, k;
                        l_2060 = &l_1954[3][1][1];
                        if ((*l_2060))
                            continue;
                    }
                    if ((*g_1303))
                        break;
                }
                else
                {
                    uint16_t *l_2072[6];
                    int32_t l_2073 = 0x7D211742L;
                    uint64_t *l_2079[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    for (i = 0; i < 6; i++)
                        l_2072[i] = &l_1469.f0;
                    l_2080 = (l_2061 || (safe_div_func_uint32_t_u_u(((((safe_mul_func_uint8_t_u_u(0x25L, 4L)) ^ (((+((0xCE3FL && (((((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u(l_2010[0][2], ((***g_1510) &= ((g_1458.f2 ^= ((((((18446744073709551615UL && 0xC724B2485EE6CBC5LL) && ((l_2071 , (((g_2076[0][0][1] = (func_71(l_2072[5], l_2073, l_1469.f8, g_911[2][2].f4) , l_2074)) == (void*)0) & 254UL)) & l_2073)) | l_1469.f1) && l_2061) , l_1945[1]) , (*l_2060))) ^ 0xB6AADC2F6E37E5EELL)))) != 1L), 5)) | l_2071.f7) == 0xD67D6742L) , l_2061) > 9L)) & 0x1C49L)) , (*g_88)) && (*g_88))) || (**g_571)) <= l_2061), l_2073)));
                    for (g_1796 = 0; (g_1796 <= 0); g_1796 += 1)
                    {
                        return (*l_2060);
                    }
                    for (l_1296 = 0; (l_1296 > (-2)); l_1296 = safe_sub_func_uint16_t_u_u(l_1296, 7))
                    {
                        int32_t **l_2083 = &g_495[1][3];
                        (*l_2083) = (*g_1302);
                    }
                    return l_1954[8][5][3];
                }
                l_2087 = (l_2084[1][1] , ((*l_2086) = l_2085));
                for (g_1001.f4 = 2; (g_1001.f4 >= 0); g_1001.f4 -= 1)
                {
                    int8_t l_2090 = 0xEBL;
                    int32_t l_2094[9][5][5] = {{{0xD2AC576EL,(-1L),0x83A858D1L,0xE791CA94L,1L},{0x15469C46L,0L,0x683366FFL,0x0234A3B4L,1L},{0xDAB0593DL,(-1L),1L,(-1L),1L},{0x0234A3B4L,0x0234A3B4L,4L,0x683366FFL,(-1L)},{1L,(-1L),(-1L),(-2L),0x9F25EF5DL}},{{0x05AB8EDBL,3L,1L,(-1L),9L},{(-1L),(-1L),(-1L),0x56DDDE73L,(-1L)},{0L,0x0234A3B4L,0xB730BE31L,(-1L),0xCFF5157DL},{(-1L),(-1L),1L,0xECA6EFA3L,1L},{9L,0xB730BE31L,0xDDBAFD6FL,0xDDBAFD6FL,0xB730BE31L}},{{1L,0x56DDDE73L,(-1L),0xEBD3525AL,(-1L)},{4L,0x0234A3B4L,0x05AB8EDBL,3L,1L},{(-1L),(-4L),0xD2AC576EL,0xAD91B2CFL,(-1L)},{4L,(-1L),4L,0L,4L},{1L,0xE807D02AL,0x4FEC54DAL,0x56DDDE73L,1L}},{{9L,3L,(-1L),0x05AB8EDBL,0x683366FFL},{0x83A858D1L,0xA743C6E1L,0x4FEC54DAL,0xA743C6E1L,0x83A858D1L},{0xB730BE31L,0x15469C46L,4L,0x0234A3B4L,0x05AB8EDBL},{0x9F25EF5DL,(-1L),0xD2AC576EL,0xECA6EFA3L,0x416E9E66L},{(-9L),4L,0x05AB8EDBL,0x15469C46L,0x05AB8EDBL}},{{0xDAB0593DL,0xECA6EFA3L,(-1L),0xBCA2F609L,0x83A858D1L},{0x05AB8EDBL,1L,0xDDBAFD6FL,(-1L),0x683366FFL},{0x4FEC54DAL,0xE791CA94L,0x416E9E66L,(-4L),1L},{(-10L),1L,1L,(-10L),4L},{(-1L),0xECA6EFA3L,1L,(-1L),(-1L)}},{{0xDDBAFD6FL,4L,0xCFF5157DL,(-9L),1L},{0L,(-1L),0x83A858D1L,(-1L),(-1L)},{0x683366FFL,0x15469C46L,(-1L),(-10L),0xB730BE31L},{(-1L),0xA743C6E1L,0xDAB0593DL,(-4L),1L},{0x15469C46L,3L,0L,(-1L),(-1L)}},{{(-1L),0xE807D02AL,(-1L),0xBCA2F609L,0x167F250EL},{0x683366FFL,(-1L),(-9L),0x15469C46L,0x0234A3B4L},{0L,(-4L),(-1L),0xECA6EFA3L,1L},{0xDDBAFD6FL,0x0234A3B4L,(-9L),0x0234A3B4L,0xDDBAFD6FL},{(-1L),0x56DDDE73L,(-1L),0xA743C6E1L,0xDAB0593DL}},{{(-10L),0xB730BE31L,0L,0x05AB8EDBL,0xCFF5157DL},{0x4FEC54DAL,(-1L),0xDAB0593DL,0x56DDDE73L,0xDAB0593DL},{0x05AB8EDBL,0x05AB8EDBL,(-1L),0L,0xDDBAFD6FL},{0xDAB0593DL,7L,0x83A858D1L,0xAD91B2CFL,1L},{(-9L),9L,0xCFF5157DL,3L,0x0234A3B4L}},{{0x9F25EF5DL,7L,1L,0xEBD3525AL,0x167F250EL},{0xB730BE31L,0x05AB8EDBL,1L,0xDDBAFD6FL,(-1L)},{0x83A858D1L,(-1L),0x416E9E66L,(-1L),1L},{9L,0xB730BE31L,0xDDBAFD6FL,0xDDBAFD6FL,0xB730BE31L},{1L,0x56DDDE73L,(-1L),0xEBD3525AL,(-1L)}}};
                    int32_t **l_2098 = (void*)0;
                    int32_t **l_2099[8][5][6] = {{{&l_2060,(void*)0,&g_495[0][2],(void*)0,&g_495[1][5],&g_495[0][2]},{(void*)0,&l_2060,&l_2060,&g_495[1][2],&g_495[1][5],&g_495[0][2]},{&g_495[1][5],&g_495[1][5],&l_2060,&g_495[1][5],(void*)0,&g_88},{&g_88,&g_495[1][5],&l_2060,(void*)0,&l_2060,&l_2060},{&g_495[0][6],&l_2060,(void*)0,&l_2060,&g_495[0][0],(void*)0}},{{&g_88,&g_495[1][5],&g_495[1][5],&g_495[0][2],&l_2060,&g_88},{&l_2060,(void*)0,&g_495[1][5],&g_495[0][0],&g_495[1][5],&g_495[1][5]},{&l_2060,(void*)0,&g_88,&g_495[1][5],(void*)0,&l_2060},{&g_495[0][5],(void*)0,&g_88,&g_495[1][5],&g_88,&g_495[1][5]},{(void*)0,&g_495[0][0],&g_495[1][1],&g_495[1][5],&g_495[1][5],(void*)0}},{{(void*)0,(void*)0,&l_2060,&g_495[1][5],&g_495[0][4],&l_2060},{&g_495[1][5],&g_495[1][5],&g_495[0][3],&g_495[1][6],&g_495[1][5],(void*)0},{&l_2060,&g_495[1][5],(void*)0,&l_2060,&g_495[1][5],&g_495[0][4]},{&g_495[1][5],&g_88,&g_495[0][5],&l_2060,&g_495[0][5],&g_88},{(void*)0,&g_495[1][5],&g_88,&g_495[1][3],(void*)0,&g_88}},{{&g_495[1][2],&g_495[0][2],(void*)0,&g_495[1][5],&l_2060,&l_2060},{&g_88,&g_495[0][2],&g_495[1][5],&g_495[0][5],(void*)0,&l_2060},{(void*)0,&g_495[1][5],(void*)0,&l_2060,&g_495[0][5],(void*)0},{&g_88,&g_88,(void*)0,(void*)0,&g_495[1][5],&l_2060},{(void*)0,&g_495[1][5],(void*)0,&g_495[1][2],&g_495[1][5],&g_495[1][5]}},{{&g_495[0][5],&g_495[1][5],&g_88,&g_88,&g_495[0][4],(void*)0},{&g_495[1][2],(void*)0,&g_495[0][1],&g_495[1][1],&g_495[1][5],&g_88},{&g_495[1][5],&g_495[0][0],&l_2060,&g_88,&g_88,&g_495[1][5]},{&l_2060,(void*)0,&g_495[0][4],(void*)0,(void*)0,&g_88},{&g_495[1][5],(void*)0,&g_495[1][5],(void*)0,&g_495[1][5],&g_495[0][5]}},{{&g_495[1][5],(void*)0,&g_495[1][5],&g_495[1][5],&l_2060,(void*)0},{&g_495[1][5],&g_495[1][5],&l_2060,&g_495[0][4],&g_495[0][0],&g_88},{(void*)0,&l_2060,&g_495[0][5],&l_2060,&l_2060,&g_88},{&l_2060,&g_495[1][5],&g_495[1][1],(void*)0,(void*)0,&g_495[1][5]},{&l_2060,&g_495[1][5],&g_495[1][5],&g_495[1][5],&g_495[1][5],&g_495[1][5]}},{{&g_495[1][5],&g_495[1][5],(void*)0,&g_495[0][1],(void*)0,(void*)0},{&l_2060,&g_88,&g_88,&g_88,&g_495[1][1],(void*)0},{&l_2060,&l_2060,&g_88,&l_2060,&g_495[1][5],(void*)0},{(void*)0,&l_2060,&g_495[1][5],&g_88,&l_2060,&g_88},{&g_88,&l_2060,&g_88,&l_2060,&l_2060,&g_495[0][4]}},{{(void*)0,&l_2060,&g_495[1][5],&g_495[1][1],&g_495[1][5],&g_495[0][2]},{&g_495[1][5],&g_495[1][5],&l_2060,&l_2060,&l_2060,&g_495[1][5]},{&g_88,&g_88,&g_495[1][5],&g_495[0][4],&l_2060,(void*)0},{&g_88,(void*)0,&g_495[1][5],(void*)0,&l_2060,&g_88},{&g_88,&g_495[0][5],&g_495[0][5],&g_495[1][2],&g_88,&l_2060}}};
                    struct S1 l_2120 = {0xD36B13F4L,789,835,872,1,1947,186,4,0,47};
                    int i, j, k;
                    for (g_1282 = 0; (g_1282 <= 2); g_1282 += 1)
                    {
                        int32_t *l_2088[4][9][3] = {{{&g_1304[0],&g_393[3],&g_1304[0]},{&g_393[3],&l_1866,&l_1469.f7},{&l_2004,&g_1304[0],&g_1304[0]},{&l_1469.f7,&g_728,&l_1954[3][1][1]},{(void*)0,&l_2004,&g_911[2][2].f7},{&l_1469.f7,&g_1601.f7,&g_393[2]},{&l_2004,(void*)0,&g_89[4][2][1]},{&g_393[3],&g_1601.f7,&g_393[3]},{&g_1304[0],&l_2004,&g_393[3]}},{{(void*)0,&g_728,&g_393[3]},{&g_393[3],&g_1304[0],&g_89[4][2][1]},{&g_393[3],&l_1866,&g_393[2]},{&g_393[3],&g_393[3],&g_911[2][2].f7},{(void*)0,&g_89[4][3][0],&l_1954[3][1][1]},{&g_1304[0],&g_393[3],&g_1304[0]},{&g_393[3],&l_1866,&l_1469.f7},{&l_2004,&g_1304[0],&g_1304[0]},{&l_1469.f7,&g_728,&l_1954[3][1][1]}},{{(void*)0,&l_2004,&g_911[2][2].f7},{&l_1469.f7,&g_1601.f7,&g_393[2]},{&l_2004,(void*)0,&g_89[4][2][1]},{&g_393[3],&g_1601.f7,&g_393[3]},{&g_1304[0],&l_2004,&g_393[3]},{(void*)0,&g_728,&g_393[3]},{&g_393[3],&g_1304[0],&g_89[4][2][1]},{&g_393[3],&l_1866,&g_393[2]},{&g_393[3],&g_393[3],&g_911[2][2].f7}},{{(void*)0,&g_89[4][3][0],&l_1954[3][1][1]},{&g_1304[0],&g_393[3],&g_1304[0]},{&g_393[3],&l_1866,&l_1469.f7},{&l_2004,&g_1304[0],&g_1304[0]},{&l_1469.f7,&g_728,&l_1954[3][1][1]},{(void*)0,&l_2004,&g_911[2][2].f7},{&l_1469.f7,&g_1601.f7,&g_393[2]},{&l_2004,(void*)0,&g_89[4][2][1]},{&g_393[3],&g_1601.f7,&g_393[3]}}};
                        uint64_t l_2095[9][4] = {{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}};
                        int i, j, k;
                        l_2095[7][3]++;
                    }
                    g_88 = (g_2100 = &g_1304[0]);
                    for (l_1931 = 0; (l_1931 <= 3); l_1931 += 1)
                    {
                        int8_t ****l_2113 = &g_538;
                        int32_t l_2117 = 1L;
                        struct S0 *l_2118 = &g_2119;
                        int i, j, k;
                        (*l_2060) = ((safe_rshift_func_int16_t_s_u((((g_2104[0][0][0] = l_2103) != (void*)0) & ((safe_sub_func_uint8_t_u_u(255UL, l_2107)) && (((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((g_2112 != (l_2113 = &g_538)), ((safe_lshift_func_int16_t_s_s(0x81E0L, 14)) ^ ((!(*g_572)) <= l_2117)))), l_2117)) , l_1296) == 0x2233517161496DCFLL))), 12)) <= g_2008);
                        (*g_1303) = ((l_2118 = &g_491[1][0][1]) != (l_2120 , (l_2121 = (void*)0)));
                        if (l_2006)
                            continue;
                        (*g_1303) = (safe_mul_func_int8_t_s_s(l_2061, 0x80L));
                    }
                }
            }
            else
            {
                int8_t ***l_2132 = (void*)0;
                int8_t ****l_2131 = &l_2132;
                int32_t l_2139 = 6L;
                struct S1 **l_2140 = &g_1618;
                const int64_t l_2141 = 1L;
                (*g_1303) |= ((safe_div_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u(0x13L, ((l_1953 , ((*g_830) != ((safe_mod_func_int8_t_s_s((l_1954[3][1][1] = (((*g_1457) , (((*g_2112) != ((*l_2131) = (*g_537))) > (safe_div_func_int64_t_s_s(((((((safe_sub_func_uint8_t_u_u(l_1469.f1, 253UL)) ^ (((((*l_40) |= (safe_sub_func_uint32_t_u_u(l_1893.f0, 0UL))) , 0xC97BL) == l_2139) && 0x4CB977AEL)) , l_1469.f0) , 0xAAL) , l_2140) == (void*)0), l_2141)))) >= l_2092)), (***g_1419))) == l_2080))) || g_2142))) && (***g_1419)), (**g_571))) >= 0x20L);
            }
            l_2143 = &l_2004;
        }
    }
    else
    {
        struct S0 ** const l_2156 = &g_1457;
        int32_t l_2159 = (-4L);
        struct S1 l_2176 = {-9L,-108,304,5326,0,3272,435,5,0,10};
        int64_t *l_2182 = &l_1945[2];
        int64_t *l_2183 = &g_2091;
        int32_t *l_2201[5];
        uint8_t **l_2206[3];
        int8_t **l_2207 = &g_206;
        uint32_t l_2226 = 18446744073709551609UL;
        uint8_t l_2232 = 0UL;
        uint8_t l_2295 = 0UL;
        uint32_t l_2302[10][4] = {{0x7CF85693L,0x7CF85693L,0x7CF85693L,0x7CF85693L},{0x7CF85693L,0x7CF85693L,0x7CF85693L,0x7CF85693L},{0x7CF85693L,0x7CF85693L,0x7CF85693L,0x7CF85693L},{0x7CF85693L,0x7CF85693L,0x7CF85693L,0x7CF85693L},{0x7CF85693L,0x7CF85693L,0x7CF85693L,0x7CF85693L},{0x7CF85693L,0x7CF85693L,0x7CF85693L,0x7CF85693L},{0x7CF85693L,0x7CF85693L,0x7CF85693L,0x7CF85693L},{0x7CF85693L,0x7CF85693L,0x7CF85693L,0x7CF85693L},{0x7CF85693L,0x7CF85693L,0x7CF85693L,0x7CF85693L},{0x7CF85693L,0x7CF85693L,0x7CF85693L,0x7CF85693L}};
        int16_t l_2304 = 0xDB14L;
        int i, j;
        for (i = 0; i < 5; i++)
            l_2201[i] = &g_1601.f7;
        for (i = 0; i < 3; i++)
            l_2206[i] = &g_830;
        (*g_1303) = ((l_2144 != (void*)0) <= (safe_add_func_int32_t_s_s(((safe_div_func_uint64_t_u_u((((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((**g_571) = (**g_571)) , (&g_1457 == l_2156)), (safe_add_func_int16_t_s_s(g_2119.f6, l_2159)))), (safe_mod_func_uint8_t_u_u(((***g_1419)++), ((0xEB3F9F7B6215978BLL && 0x5DA06DAF138A6AC4LL) ^ 0xEDL))))), (**g_1511))) && 0UL) != l_2159), l_2159)) || l_1469.f5), l_2159)));
        l_1296 = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((((*l_2183) |= ((*l_2182) = (((&g_911[2][2] == &g_491[1][0][1]) & (((safe_add_func_uint16_t_u_u(65535UL, (-1L))) > ((*g_572) = (safe_lshift_func_int8_t_s_s((((l_2176 , ((void*)0 != l_2177)) == (l_2176.f2 ^ (safe_mul_func_uint8_t_u_u((!((*g_1457) , g_491[1][0][1].f5)), 2UL)))) > (*g_1512)), l_2181)))) > l_2176.f3)) == 6UL))) , l_2176.f0) | 9L), l_2159)), 8)), 10));
        for (g_1001.f3 = 19; (g_1001.f3 < 2); g_1001.f3--)
        {
            uint64_t *l_2193 = &g_239;
            struct S0 l_2196 = {0xB3E4L,0x20E64BFAL,0xE0C69DDC86BAA5C3LL,6L,0x7361L,0x0EB7L,0x6EEEL,0x675E1828L,-7L,0x783FL};
        }
        for (g_2119.f9 = 0; (g_2119.f9 <= 1); g_2119.f9 += 1)
        {
            int32_t **l_2202 = &g_88;
            uint8_t ***l_2204 = &g_829[3];
            uint8_t ***l_2205 = &l_2203;
            struct S1 l_2212 = {-1L,-2587,-709,836,6,3062,302,0,0,62};
            int64_t l_2215 = 0x634478A6357C4981LL;
            int32_t l_2241[7] = {(-1L),1L,1L,(-1L),1L,1L,(-1L)};
            uint32_t l_2242 = 18446744073709551606UL;
            int i;
            (*l_2202) = ((0x61A2L < ((((*l_2145) = (-1L)) , 0x9AF3D454L) != l_2176.f3)) , (l_2201[4] = &l_2159));
            (*l_2202) = (((((*l_2205) = ((*l_2204) = l_2203)) == l_2206[0]) >= (**g_1420)) , &l_1296);
            (*g_1303) |= ((l_1977 || ((l_2176 , (((**g_2112) = (void*)0) != l_2207)) && (((safe_lshift_func_uint16_t_u_s(((l_1864 ^ 1UL) & l_1893.f3), ((safe_rshift_func_int8_t_s_u((l_2010[1][1] = (0x12A2L & (((((((l_2212 , 0x9B15962EL) , (**l_2202)) | (***g_1510)) >= (**l_2202)) || (*g_1512)) != (**g_1511)) || (***g_1419)))), 6)) > (**l_2202)))) < l_1469.f7) & 0xEDF20CDCL))) <= 65529UL);
            if (((((safe_sub_func_uint32_t_u_u((l_2007 >= (l_2215 , 9L)), (*g_1303))) , (l_1893.f8 > ((((*l_2145) |= (((*g_572) |= 0x9EC9ABC7C097FA97LL) , (0x65B7602C19BAF9F2LL || (g_1619.f1 == (251UL == (**l_2202)))))) , 5UL) , g_386.f5))) ^ 0UL) & (**l_2202)))
            {
                int64_t l_2219[2][9][4] = {{{0x3FD643438F63FCD7LL,8L,1L,0x560F9FA8FC2CB0CDLL},{(-8L),3L,(-2L),1L},{0xB1E129D2941051AALL,3L,0x74426DFF544AEDD7LL,0x560F9FA8FC2CB0CDLL},{3L,8L,0xABB51565F883C476LL,0xDE99173535C56880LL},{0x5522A0E662965D94LL,(-1L),0x3FD643438F63FCD7LL,(-1L)},{0x74426DFF544AEDD7LL,1L,(-4L),0xABB51565F883C476LL},{8L,0L,8L,(-1L)},{0xABB51565F883C476LL,(-4L),0xADDD29E5A147518CLL,0x3899F46419FEDB11LL},{(-2L),0xB1E129D2941051AALL,0x84E3A12DF7985524LL,(-4L)}},{{1L,0xADDD29E5A147518CLL,0x84E3A12DF7985524LL,0x3FD643438F63FCD7LL},{(-2L),0xDE99173535C56880LL,0xADDD29E5A147518CLL,0x45F286706623FBD5LL},{0xABB51565F883C476LL,0x7F1B7FD7344329D8LL,8L,(-2L)},{8L,(-2L),(-4L),(-8L)},{0x74426DFF544AEDD7LL,0x3FD643438F63FCD7LL,0x3FD643438F63FCD7LL,0x74426DFF544AEDD7LL},{0x5522A0E662965D94LL,0x560F9FA8FC2CB0CDLL,0xABB51565F883C476LL,(-9L)},{3L,(-4L),0x74426DFF544AEDD7LL,0x7F1B7FD7344329D8LL},{0xB1E129D2941051AALL,1L,(-2L),0x7F1B7FD7344329D8LL},{(-8L),(-4L),1L,(-9L)}}};
                struct S1 l_2220 = {0x14B13D8BL,2184,270,2086,10,3490,33,3,0,9};
                int32_t *l_2225[10][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                uint32_t ****l_2228 = &g_2222;
                uint32_t *****l_2227[9][5] = {{&l_2228,&g_2221,&l_2228,&l_2228,(void*)0},{&l_2228,&g_2221,&g_2221,&l_2228,(void*)0},{&l_2228,&g_2221,&g_2221,&l_2228,(void*)0},{&l_2228,&g_2221,&l_2228,&l_2228,(void*)0},{&l_2228,&g_2221,&g_2221,&l_2228,(void*)0},{&l_2228,&g_2221,&g_2221,&l_2228,(void*)0},{&l_2228,&g_2221,&l_2228,&l_2228,(void*)0},{&l_2228,&g_2221,&g_2221,&l_2228,(void*)0},{&l_2228,&g_2221,&g_2221,&l_2228,(void*)0}};
                int8_t *l_2230 = &l_1864;
                int i, j, k;
                (*g_1303) &= (safe_lshift_func_int8_t_s_s(((g_2218 , 8L) , (l_2219[1][4][2] && (g_1001.f3 ^= (l_2219[0][3][0] <= ((*l_2230) = ((l_2220 , g_2221) != (g_2229 = ((safe_mul_func_int16_t_s_s(((l_1977 || (((*l_43) = (**l_2202)) || ((l_2225[4][0] = &g_163) != &g_163))) || l_2226), (-10L))) , &g_2222)))))))), 2));
            }
            else
            {
                int32_t **l_2231 = &g_495[1][3];
                int32_t l_2237 = 0x0F2AA4A1L;
                int32_t l_2240 = 0x08F3CAAFL;
                (*l_2231) = (*g_1302);
                for (g_2119.f0 = 0; (g_2119.f0 <= 1); g_2119.f0 += 1)
                {
                    int32_t l_2236 = 0x143FA902L;
                    int32_t l_2238 = (-2L);
                    int32_t l_2239[7][2] = {{0xFCE7FC3DL,0x7960DF3AL},{1L,1L},{1L,0x7960DF3AL},{0xFCE7FC3DL,0x91898241L},{0x7960DF3AL,0x91898241L},{0xFCE7FC3DL,0x7960DF3AL},{1L,1L}};
                    int i, j;
                    for (g_1458.f8 = 3; (g_1458.f8 >= 0); g_1458.f8 -= 1)
                    {
                        if (l_2232)
                            break;
                    }
                    if ((**l_2231))
                        break;
                    for (l_2232 = 0; (l_2232 <= 1); l_2232 += 1)
                    {
                        int32_t l_2234 = 0x0D7531D8L;
                        int32_t l_2235[2][5][5] = {{{1L,0L,1L,0L,1L},{(-1L),0xB2B74D94L,0L,1L,1L},{0xB2B74D94L,0L,0L,0xC96DE90FL,0xC96DE90FL},{0x94A78406L,(-1L),0x94A78406L,7L,0L},{1L,0xC96DE90FL,0L,7L,0x94A78406L}},{{0L,0L,0xC96DE90FL,0xC96DE90FL,0L},{0L,0L,0L,0x94A78406L,1L},{(-1L),0L,0x94A78406L,0xF7468F40L,(-1L)},{1L,0L,0L,1L,0xF7468F40L},{(-1L),0xC96DE90FL,1L,0xB2B74D94L,0xF7468F40L}}};
                        int i, j, k;
                        g_495[g_2119.f0][(l_2232 + 4)] = l_2233;
                        if ((*l_2233))
                            break;
                        g_495[1][5] = (*g_1302);
                        l_2242++;
                    }
                }
                (*g_1303) = ((((safe_lshift_func_uint16_t_u_s(((safe_div_func_int64_t_s_s((&g_572 == &g_572), (safe_unary_minus_func_int16_t_s(((((safe_div_func_uint16_t_u_u((**l_2202), g_1601.f4)) & 18446744073709551615UL) ^ (**l_2202)) , g_1601.f4))))) | (safe_lshift_func_int16_t_s_s(((-1L) & (**l_2231)), 6))), 15)) & (***g_1510)) < 0x35034025L) > (**l_2202));
            }
            for (g_1458.f2 = 0; (g_1458.f2 <= 0); g_1458.f2 += 1)
            {
                uint16_t **l_2264 = &l_40;
                int32_t l_2267 = 0x7651C2A7L;
                int32_t *l_2272 = (void*)0;
                int32_t *l_2273 = &g_491[1][0][1].f8;
                int32_t l_2306[1][5][8] = {{{0xFC81ED2EL,0x8407C397L,(-5L),0x8407C397L,0xFC81ED2EL,0xFC81ED2EL,0x8407C397L,(-5L)},{0xFC81ED2EL,0xFC81ED2EL,0x8407C397L,(-5L),0x8407C397L,0xFC81ED2EL,0xFC81ED2EL,0x8407C397L},{0x23D84212L,0x8407C397L,0x8407C397L,0x23D84212L,0x54B1E7EFL,0x23D84212L,0x8407C397L,0x8407C397L},{0x8407C397L,0x54B1E7EFL,(-5L),(-5L),0x54B1E7EFL,0x8407C397L,0x54B1E7EFL,(-5L)},{0x23D84212L,0x54B1E7EFL,0x23D84212L,0x8407C397L,0x8407C397L,0x23D84212L,0x54B1E7EFL,0x23D84212L}}};
                int8_t l_2309 = 0x8FL;
                int i, j, k;
                (*g_1303) ^= ((*l_2233) = (safe_rshift_func_int8_t_s_s((**l_2202), 1)));
                (*g_1303) = ((safe_mod_func_int64_t_s_s(((**g_571) = (safe_lshift_func_int16_t_s_u((2L | (func_71((*g_245), ((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((((((*l_2264) = (*g_245)) == (*g_245)) , (((safe_sub_func_int8_t_s_s(l_2267, 0x1AL)) || ((**g_1302) && ((**g_1511) |= 0x228FE511L))) <= (((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(((((*l_2273) = l_2267) , (*l_2233)) < (*l_2233)), l_2267)), g_1458.f7)) != 0xFB3DFDEE746B6756LL) , (-8L)))) >= (**l_2202)) ^ 0xD37C88896546D521LL), (*l_2233))), 2)) > 0xEEL), (**l_2202), g_2008) , g_2274)), 2))), l_2267)) | (*l_2233));
                for (l_2226 = 0; (l_2226 <= 0); l_2226 += 1)
                {
                    int16_t l_2292 = 0x8B59L;
                    uint32_t l_2293 = 0UL;
                    int32_t *l_2294[7] = {&g_728,&g_728,&g_728,&g_728,&g_728,&g_728,&g_728};
                    uint64_t *l_2305 = &g_1601.f2;
                    int8_t l_2310[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2310[i] = 7L;
                }
            }
        }
    }
    (**g_1302) = ((safe_unary_minus_func_uint8_t_u(253UL)) == (safe_div_func_int64_t_s_s(((**g_571) ^= (safe_mul_func_uint8_t_u_u((*g_830), (((l_2321 &= (*l_2233)) && (((*l_2233) ^ (safe_lshift_func_uint8_t_u_u((l_2324 > (l_2010[1][1] ^= (((g_1458.f9 = (safe_mul_func_int8_t_s_s((((*l_2233) & 18446744073709551609UL) > (((*l_2327) = &l_1469) == &l_1469)), (*l_2233)))) && 65535UL) != 0x6FL))), (*l_2233)))) <= (*l_2233))) || (*l_2233))))), (*l_2233))));
    return (**g_1511);
}







static int32_t func_2(int64_t p_3, struct S1 p_4, int16_t p_5)
{
    uint64_t *l_1654 = &g_300;
    uint64_t **l_1653 = &l_1654;
    struct S1 l_1657 = {0xE8E1116FL,3507,-834,2957,14,1889,233,2,0,48};
    uint16_t *l_1709 = (void*)0;
    const int32_t **l_1746[2];
    int32_t l_1771 = 0x1956F80AL;
    int32_t l_1814 = 0x26F642C1L;
    int32_t l_1815 = 0xAD843844L;
    int32_t l_1816 = 0x87D22A7BL;
    int32_t l_1817 = 0xBCBEB494L;
    int32_t l_1818 = 0xFDFBBCBEL;
    int32_t l_1819 = 0x7EBF2CBCL;
    int32_t l_1820 = (-9L);
    int32_t l_1821 = 1L;
    int32_t l_1822 = 1L;
    int32_t l_1823[1];
    const uint16_t l_1838[3][4][4] = {{{0UL,0x8FB2L,0UL,0x8FB2L},{0UL,0x8FB2L,0UL,0x8FB2L},{0UL,0x8FB2L,0UL,0x8FB2L},{0UL,0x8FB2L,0UL,0x8FB2L}},{{0UL,0x8FB2L,0UL,0x8FB2L},{0UL,0x8FB2L,0UL,0x8FB2L},{0UL,0x8FB2L,0UL,0x8FB2L},{0UL,0x8FB2L,0UL,0x8FB2L}},{{0UL,0x8FB2L,0UL,0x8FB2L},{0UL,0x8FB2L,0UL,0x8FB2L},{0UL,0x8FB2L,0UL,0x8FB2L},{0UL,0x8FB2L,0UL,0x8FB2L}}};
    int8_t * const ****l_1841 = &g_1840;
    int8_t *****l_1842 = &g_537;
    uint16_t *l_1854 = &g_11[4][1][0];
    int64_t l_1855 = 0x506C09BA31D99A0BLL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1746[i] = &g_1627;
    for (i = 0; i < 1; i++)
        l_1823[i] = 0xDE67B6D7L;
    for (g_1001.f4 = 0; (g_1001.f4 > 8); g_1001.f4++)
    {
        uint64_t l_1632[4][4][8] = {{{1UL,0xD37BD53EACCFF801LL,0x2AF4972100706272LL,0xE0A83299C0F07DA0LL,18446744073709551607UL,2UL,0x9F9162F985D03EE2LL,0x7853B5B8A284249ELL},{0x271B7A98AC2A42ACLL,18446744073709551607UL,18446744073709551611UL,18446744073709551613UL,0UL,18446744073709551611UL,0UL,0x42C6200EACD00D6DLL},{0x42C6200EACD00D6DLL,18446744073709551615UL,0UL,1UL,0UL,0UL,8UL,0UL},{1UL,0x3FB76CA2C4DAAEDELL,0x624FD5A033F98A69LL,0x3FB76CA2C4DAAEDELL,1UL,0x27BE06917809F08BLL,0xD37BD53EACCFF801LL,18446744073709551607UL}},{{0x3998253D1AA29515LL,0xE0A83299C0F07DA0LL,0xE202070CDCD7E7C6LL,18446744073709551615UL,8UL,18446744073709551611UL,18446744073709551615UL,0x3FB76CA2C4DAAEDELL},{18446744073709551607UL,0UL,0xE202070CDCD7E7C6LL,0x42C6200EACD00D6DLL,0UL,18446744073709551613UL,0xD37BD53EACCFF801LL,0x3998253D1AA29515LL},{8UL,0xD37BD53EACCFF801LL,0x624FD5A033F98A69LL,18446744073709551607UL,0x7853B5B8A284249ELL,0x32C5C46F32FAB364LL,8UL,0x9F9162F985D03EE2LL},{18446744073709551615UL,18446744073709551611UL,0x624FD5A033F98A69LL,0x951EA7CA70E1C785LL,0UL,18446744073709551613UL,18446744073709551613UL,0UL}},{{0UL,1UL,1UL,0UL,0x32C5C46F32FAB364LL,0x27BE06917809F08BLL,18446744073709551615UL,18446744073709551613UL},{0x271B7A98AC2A42ACLL,0UL,0UL,0UL,0x3998253D1AA29515LL,0xD37BD53EACCFF801LL,18446744073709551613UL,0UL},{1UL,0UL,18446744073709551613UL,2UL,0x341B7BB0A47EEDBALL,0x27BE06917809F08BLL,0x951EA7CA70E1C785LL,18446744073709551615UL},{0xE202070CDCD7E7C6LL,1UL,0UL,18446744073709551611UL,1UL,18446744073709551613UL,18446744073709551615UL,0xE003A60EDD7D1B88LL}},{{18446744073709551615UL,18446744073709551611UL,0x3FB76CA2C4DAAEDELL,0UL,18446744073709551613UL,0x42C6200EACD00D6DLL,18446744073709551613UL,0UL},{2UL,0x271B7A98AC2A42ACLL,2UL,0x27BE06917809F08BLL,0xE202070CDCD7E7C6LL,0UL,0x2AF4972100706272LL,0x3998253D1AA29515LL},{18446744073709551615UL,18446744073709551613UL,1UL,18446744073709551611UL,0UL,1UL,0xE202070CDCD7E7C6LL,0x951EA7CA70E1C785LL},{18446744073709551615UL,0UL,0x7853B5B8A284249ELL,18446744073709551613UL,0xE202070CDCD7E7C6LL,5UL,18446744073709551615UL,0UL}}};
        struct S1 ** const l_1641 = &g_1618;
        uint64_t *l_1642 = &l_1632[1][1][5];
        int32_t l_1647 = 0xD16D9CFBL;
        uint64_t *l_1648[6];
        uint8_t l_1695 = 0x0BL;
        uint32_t l_1707 = 0x7474A265L;
        uint8_t l_1730 = 1UL;
        struct S0 **l_1733 = &g_1457;
        uint32_t ***l_1736 = (void*)0;
        uint16_t l_1737[9] = {0x8E7CL,0x8E7CL,0x8E7CL,0x8E7CL,0x8E7CL,0x8E7CL,0x8E7CL,0x8E7CL,0x8E7CL};
        int8_t *****l_1793 = (void*)0;
        uint32_t l_1799 = 0xFB30287FL;
        int32_t l_1824 = (-3L);
        int32_t l_1825 = (-1L);
        int32_t l_1826[3][9] = {{0L,(-2L),0L,0x4FE518B6L,(-2L),(-1L),(-1L),(-2L),0x4FE518B6L},{0L,(-2L),0L,0x4FE518B6L,(-2L),(-1L),(-1L),(-2L),0x4FE518B6L},{0L,(-2L),0L,0x4FE518B6L,(-2L),(-1L),(-1L),(-2L),0x4FE518B6L}};
        uint8_t l_1827 = 255UL;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_1648[i] = &g_911[2][2].f2;
        for (g_1171 = 0; (g_1171 < 3); g_1171 = safe_add_func_uint16_t_u_u(g_1171, 6))
        {
            (*g_1198) = &p_4;
            (*g_88) ^= l_1632[1][1][5];
            if (p_5)
                break;
        }
        (**g_1302) |= ((safe_div_func_int16_t_s_s((((safe_unary_minus_func_uint64_t_u((g_911[2][2].f2 = (l_1647 = (safe_rshift_func_int16_t_s_u((~(safe_div_func_uint64_t_u_u(((*l_1642) = ((void*)0 != l_1641)), p_4.f6))), (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((0xCCF8792DCC35E3A8LL != ((*g_572) | ((l_1647 & (p_4.f9 <= p_4.f0)) , p_3))) ^ p_4.f3), 14)) ^ p_5), 0xCBL)))))))) , (**g_571)) < p_3), p_4.f6)) < p_4.f4);
        for (g_300 = 24; (g_300 <= 27); g_300 = safe_add_func_uint16_t_u_u(g_300, 7))
        {
            int8_t *l_1660 = &g_44[4];
            const int32_t l_1663 = 0x9AAA169EL;
            uint16_t *l_1664 = (void*)0;
            uint16_t *l_1665 = &g_491[1][0][1].f9;
            int32_t l_1666 = 0xF2B36F34L;
            uint32_t ***l_1669 = (void*)0;
            uint32_t ****l_1670 = &l_1669;
            uint64_t l_1696 = 7UL;
            int8_t *** const *l_1776 = (void*)0;
            struct S0 l_1792[1][3][2] = {{{{0x09A4L,1UL,0x1037233296BD0A14LL,0x912EL,0x1347L,1UL,5UL,1L,0L,0UL},{0x09A4L,1UL,0x1037233296BD0A14LL,0x912EL,0x1347L,1UL,5UL,1L,0L,0UL}},{{0x09A4L,1UL,0x1037233296BD0A14LL,0x912EL,0x1347L,1UL,5UL,1L,0L,0UL},{0x09A4L,1UL,0x1037233296BD0A14LL,0x912EL,0x1347L,1UL,5UL,1L,0L,0UL}},{{0x09A4L,1UL,0x1037233296BD0A14LL,0x912EL,0x1347L,1UL,5UL,1L,0L,0UL},{0x09A4L,1UL,0x1037233296BD0A14LL,0x912EL,0x1347L,1UL,5UL,1L,0L,0UL}}}};
            int32_t *l_1800 = &l_1792[0][0][1].f7;
            int32_t *l_1801 = &g_1601.f7;
            int32_t *l_1802 = &g_1458.f7;
            int32_t *l_1803 = (void*)0;
            int32_t *l_1804 = &g_393[3];
            int32_t *l_1805 = &g_89[4][2][1];
            int32_t *l_1806 = &g_393[0];
            int32_t *l_1807 = &g_1458.f7;
            int32_t *l_1808 = &g_911[2][2].f7;
            int32_t *l_1809 = &l_1647;
            int32_t *l_1810 = &g_491[1][0][1].f7;
            int32_t *l_1811 = &g_89[2][8][0];
            int32_t *l_1812 = &g_1304[0];
            int32_t *l_1813[4][3] = {{&g_728,&g_1304[0],&g_728},{(void*)0,(void*)0,(void*)0},{&g_728,&g_1304[0],&g_728},{(void*)0,(void*)0,(void*)0}};
            int i, j, k;
            if (((safe_unary_minus_func_int64_t_s((g_1652 != l_1653))) & (((((safe_add_func_int16_t_s_s((l_1657 , 0x909FL), ((safe_mul_func_int16_t_s_s((((((*l_1660) ^= 0xBBL) != (safe_sub_func_uint16_t_u_u((l_1663 , ((*l_1665) = 0xBE2AL)), (((((**g_1511)--) , &g_701) != ((*l_1670) = l_1669)) <= p_4.f4)))) , g_246) != (void*)0), l_1657.f4)) | 4294967290UL))) & 0x02BCD2A1L) ^ p_4.f5) && p_5) > 0xEEL)))
            {
                uint32_t ***l_1729[4][9][5] = {{{(void*)0,&g_406,(void*)0,&g_406,&g_406},{&g_406,&g_406,(void*)0,&g_406,&g_406},{&g_406,(void*)0,&g_406,&g_406,&g_406},{&g_406,&g_406,&g_406,&g_406,(void*)0},{&g_406,&g_406,&g_406,&g_406,&g_406},{&g_406,(void*)0,&g_406,(void*)0,&g_406},{&g_406,&g_406,&g_406,&g_406,&g_406},{&g_406,&g_406,(void*)0,&g_406,(void*)0},{&g_406,&g_406,(void*)0,&g_406,&g_406}},{{&g_406,&g_406,(void*)0,&g_406,&g_406},{&g_406,&g_406,&g_406,(void*)0,(void*)0},{&g_406,&g_406,&g_406,&g_406,&g_406},{&g_406,&g_406,&g_406,&g_406,(void*)0},{&g_406,&g_406,&g_406,&g_406,&g_406},{(void*)0,(void*)0,&g_406,&g_406,&g_406},{&g_406,&g_406,&g_406,&g_406,&g_406},{&g_406,&g_406,&g_406,&g_406,&g_406},{(void*)0,(void*)0,&g_406,(void*)0,&g_406}},{{&g_406,&g_406,&g_406,&g_406,&g_406},{(void*)0,&g_406,&g_406,&g_406,&g_406},{&g_406,&g_406,&g_406,(void*)0,&g_406},{(void*)0,(void*)0,(void*)0,&g_406,&g_406},{&g_406,&g_406,&g_406,&g_406,&g_406},{&g_406,&g_406,&g_406,&g_406,&g_406},{&g_406,(void*)0,(void*)0,&g_406,&g_406},{&g_406,&g_406,&g_406,&g_406,(void*)0},{&g_406,&g_406,&g_406,&g_406,&g_406}},{{&g_406,&g_406,&g_406,&g_406,&g_406},{&g_406,&g_406,&g_406,&g_406,&g_406},{&g_406,&g_406,&g_406,&g_406,&g_406},{&g_406,&g_406,&g_406,&g_406,&g_406},{&g_406,&g_406,&g_406,&g_406,&g_406},{&g_406,&g_406,&g_406,(void*)0,&g_406},{&g_406,&g_406,&g_406,&g_406,&g_406},{&g_406,(void*)0,&g_406,&g_406,(void*)0},{&g_406,&g_406,&g_406,(void*)0,&g_406}}};
                int16_t *l_1741 = (void*)0;
                int32_t l_1772[10][8] = {{(-6L),0x8BD2B035L,1L,1L,0x8BD2B035L,(-6L),(-5L),1L},{(-6L),3L,(-9L),0x8BD2B035L,(-5L),0x8BD2B035L,(-9L),3L},{(-9L),(-9L),(-1L),0x8BD2B035L,1L,(-9L),(-9L),1L},{1L,1L,1L,1L,(-9L),3L,(-9L),(-6L)},{(-9L),1L,(-1L),(-9L),(-1L),1L,(-9L),(-5L)},{(-1L),1L,(-9L),(-5L),3L,3L,(-5L),(-9L)},{1L,1L,1L,(-9L),3L,(-9L),(-6L),(-9L)},{(-1L),(-9L),(-9L),(-9L),(-1L),0x8BD2B035L,1L,(-9L)},{(-9L),3L,(-6L),(-9L),(-9L),(-6L),3L,(-9L)},{1L,0x8BD2B035L,(-6L),3L,(-9L),(-6L),(-9L),3L}};
                int i, j, k;
                if (p_4.f8)
                    break;
                for (g_1001.f0 = (-26); (g_1001.f0 <= 21); ++g_1001.f0)
                {
                    struct S0 l_1677 = {0xC43BL,0x033AE508L,0x0D32A483C8A41E12LL,-2L,-6L,65535UL,1UL,0x02CDCDE3L,0x8EA66E6EL,0x2B1CL};
                    for (g_1601.f2 = 0; (g_1601.f2 != 41); g_1601.f2++)
                    {
                        uint32_t l_1679 = 0x4D08D52AL;
                        int32_t l_1694 = (-1L);
                        (*g_1303) = ((**g_1302) = (((safe_mod_func_int64_t_s_s((65527UL || (l_1677 , (l_1677 , (safe_unary_minus_func_uint64_t_u(((l_1647 = (((((l_1679 != (safe_sub_func_int8_t_s_s((((*l_1665) = (safe_mod_func_int64_t_s_s((-1L), (((l_1663 != (+(~((safe_sub_func_int64_t_s_s((l_1663 > ((safe_mul_func_int16_t_s_s(((l_1677.f3 , (((((*g_1512) &= (((l_1694 |= (((safe_mul_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u(0x6C79B6CFB1A75EEELL, g_386.f2)) , 0xFC15L), 0x439DL)) , l_1677.f9) == p_4.f1)) != l_1695) == l_1677.f5)) , (-4L)) && l_1679) != l_1657.f8)) && p_4.f5), l_1679)) != 0x0D0DL)), (-4L))) || 1UL)))) , 0x3445L) ^ l_1696)))) , l_1666), 0xE6L))) >= (-1L)) , g_760[3][8]) >= p_4.f8) , p_4.f5)) != g_911[2][2].f8)))))), l_1657.f4)) , p_4.f3) > 4294967295UL));
                    }
                }
                if (((**g_1302) |= (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(p_4.f1, 3)), ((safe_add_func_uint32_t_u_u((g_1708 &= ((safe_mul_func_uint16_t_u_u((((l_1696 > ((((safe_mod_func_uint32_t_u_u((l_1647 <= ((p_4.f8 , l_1666) , l_1647)), l_1707)) , &g_571) != (void*)0) & 0L)) || 0xAA6BD588L) ^ 5UL), g_386.f2)) | 0xC3L)), l_1632[1][1][5])) || l_1657.f4)))))
                {
                    const int16_t l_1723 = 0x9537L;
                    (*g_1303) |= (0xEE4F71F5L != ((func_71(l_1709, l_1696, (safe_sub_func_uint16_t_u_u((!((safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_mul_func_int16_t_s_s(0L, p_4.f4)), 0xA5C743498F2771BALL)), ((((**g_538) = ((((((safe_div_func_uint8_t_u_u((l_1723 || ((((((*l_1665) = (safe_mul_func_int16_t_s_s(l_1663, ((((!(safe_mul_func_int8_t_s_s(((((((((l_1657.f2 = p_4.f4) , l_1729[2][8][2]) == l_1729[3][4][2]) <= p_4.f5) || p_4.f6) == 0x2F70E0ABL) , l_1723) ^ p_4.f1), p_4.f6))) <= l_1730) , 0xA2CF77005F642A6BLL) <= p_4.f7)))) | 0x8530L) ^ 0x071104F84B29A299LL) ^ 0xC4L) <= 0x833C51A936CB8735LL)), 5UL)) , l_1723) , (*g_1457)) , (***g_1419)) | p_4.f5) , (***g_537))) == l_1660) > (-6L)))) == 0x68FF2EC30235A618LL), 7L)) >= 0UL)), 1UL)), g_1619.f4) , p_4.f9) != 0x530354B2L));
                    (*g_88) &= 0L;
                    for (g_1001.f7 = 0; (g_1001.f7 > (-26)); g_1001.f7 = safe_sub_func_uint64_t_u_u(g_1001.f7, 5))
                    {
                        return l_1723;
                    }
                }
                else
                {
                    uint8_t l_1738 = 5UL;
                    int16_t *l_1740[8][5][6] = {{{&g_1458.f3,&g_911[2][2].f4,&g_911[2][2].f4,&g_911[2][2].f4,&g_1458.f4,&g_1601.f3},{(void*)0,(void*)0,&g_491[1][0][1].f4,&g_911[2][2].f4,&g_1601.f4,&g_1601.f4},{&g_1458.f3,(void*)0,&g_491[1][0][1].f3,&g_1601.f4,&g_1458.f4,&g_1458.f4},{(void*)0,&g_911[2][2].f4,&g_1601.f4,&g_1001.f4,&g_491[1][0][1].f3,&g_491[1][0][1].f4},{&g_491[1][0][1].f3,&g_1458.f3,&g_911[2][2].f4,(void*)0,&g_1001.f4,&g_911[2][2].f4}},{{&g_1708,&g_1458.f3,&g_1458.f3,&g_911[2][2].f3,&g_1601.f3,&g_1601.f4},{&g_911[2][2].f4,(void*)0,&g_1001.f4,&g_911[2][2].f4,&g_491[1][0][1].f3,&g_1601.f4},{&g_1001.f4,&g_491[1][0][1].f4,&g_1001.f4,&g_1601.f3,&g_1458.f3,&g_1458.f4},{(void*)0,&g_1001.f3,&g_1601.f4,&g_911[2][2].f4,&g_1458.f3,&g_1458.f3},{&g_491[1][0][1].f3,&g_491[1][0][1].f4,&g_491[1][0][1].f4,&g_491[1][0][1].f3,&g_911[2][2].f3,(void*)0}},{{&g_1458.f3,&g_1601.f4,&g_1601.f4,&g_1001.f4,&g_911[2][2].f4,&g_911[2][2].f4},{&g_1601.f3,&g_1458.f4,&g_911[2][2].f4,&g_1708,&g_911[2][2].f4,&g_491[1][0][1].f3},{&g_911[2][2].f3,&g_1601.f4,&g_491[1][0][1].f3,&g_1458.f3,&g_911[2][2].f3,&g_1001.f4},{&g_911[2][2].f4,&g_491[1][0][1].f4,&g_911[2][2].f4,&g_1458.f4,&g_1458.f3,&g_1001.f4},{&g_911[2][2].f4,&g_1001.f3,&g_1458.f4,&g_1001.f4,&g_1458.f3,&g_911[2][2].f4}},{{(void*)0,&g_491[1][0][1].f4,(void*)0,&g_1458.f4,&g_491[1][0][1].f3,&g_911[2][2].f3},{&g_491[1][0][1].f4,(void*)0,&g_1601.f4,(void*)0,&g_1601.f3,(void*)0},{&g_911[2][2].f3,&g_1458.f3,&g_1708,&g_1458.f3,&g_1001.f4,&g_911[2][2].f4},{&g_1708,&g_1458.f3,&g_1458.f4,&g_1001.f4,&g_491[1][0][1].f3,&g_911[2][2].f4},{&g_1458.f4,&g_911[2][2].f4,&g_911[2][2].f3,&g_911[2][2].f4,&g_1458.f4,&g_911[2][2].f3}},{{&g_491[1][0][1].f4,(void*)0,&g_491[1][0][1].f3,(void*)0,&g_1601.f4,&g_1708},{&g_1601.f3,(void*)0,&g_911[2][2].f4,(void*)0,&g_1458.f4,&g_1708},{&g_1458.f3,&g_911[2][2].f4,&g_491[1][0][1].f3,&g_1601.f4,&g_491[1][0][1].f4,&g_911[2][2].f3},{&g_1458.f4,&g_911[2][2].f4,&g_911[2][2].f3,&g_911[2][2].f3,&g_491[1][0][1].f4,&g_911[2][2].f4},{&g_1708,&g_911[2][2].f3,&g_1458.f4,&g_491[1][0][1].f4,&g_1601.f4,&g_911[2][2].f4}},{{&g_1601.f4,&g_1601.f3,&g_1708,&g_911[2][2].f3,&g_1001.f3,(void*)0},{&g_1458.f4,&g_1601.f4,&g_1601.f4,&g_1001.f3,(void*)0,&g_911[2][2].f3},{&g_911[2][2].f3,&g_1601.f3,(void*)0,&g_911[2][2].f3,&g_1001.f4,&g_911[2][2].f4},{&g_911[2][2].f3,&g_911[2][2].f3,&g_1458.f4,&g_1708,&g_491[1][0][1].f3,&g_1001.f4},{&g_1001.f4,&g_1708,&g_911[2][2].f4,&g_911[2][2].f4,&g_1708,&g_1001.f4}},{{&g_911[2][2].f4,&g_1001.f4,&g_491[1][0][1].f3,&g_911[2][2].f4,&g_911[2][2].f4,&g_491[1][0][1].f3},{&g_1458.f4,&g_1601.f4,&g_1458.f3,&g_1708,&g_1001.f3,&g_1458.f3},{&g_1458.f4,(void*)0,&g_1708,&g_491[1][0][1].f4,&g_1708,&g_1708},{&g_1001.f4,&g_491[1][0][1].f4,&g_491[1][0][1].f3,&g_1708,&g_911[2][2].f3,&g_911[2][2].f4},{&g_911[2][2].f4,&g_1458.f4,&g_491[1][0][1].f3,&g_1001.f4,&g_1708,(void*)0}},{{&g_1708,&g_1458.f4,&g_1601.f4,&g_1458.f4,&g_1001.f3,&g_1708},{&g_1601.f3,&g_1458.f3,&g_911[2][2].f3,&g_911[2][2].f3,&g_1001.f4,&g_911[2][2].f3},{(void*)0,(void*)0,&g_1001.f4,&g_1708,&g_911[2][2].f3,&g_491[1][0][1].f4},{(void*)0,&g_1458.f4,&g_1458.f4,&g_911[2][2].f4,&g_911[2][2].f3,&g_1458.f4},{&g_1458.f3,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int16_t **l_1739 = &l_1740[6][3][2];
                    const int32_t ***l_1747 = &l_1746[0];
                    int64_t *l_1748[6][3][5] = {{{&g_1749,(void*)0,&g_1749,(void*)0,&g_1749},{&g_1749,(void*)0,&g_1749,&g_1749,&g_1749},{&g_1749,(void*)0,&g_1749,(void*)0,&g_1749}},{{&g_1749,(void*)0,&g_1749,&g_1749,&g_1749},{&g_1749,(void*)0,&g_1749,(void*)0,&g_1749},{&g_1749,(void*)0,&g_1749,&g_1749,&g_1749}},{{&g_1749,(void*)0,&g_1749,(void*)0,&g_1749},{&g_1749,(void*)0,&g_1749,&g_1749,&g_1749},{&g_1749,(void*)0,&g_1749,(void*)0,&g_1749}},{{&g_1749,(void*)0,&g_1749,&g_1749,&g_1749},{&g_1749,(void*)0,&g_1749,(void*)0,&g_1749},{&g_1749,(void*)0,&g_1749,&g_1749,&g_1749}},{{&g_1749,(void*)0,&g_1749,(void*)0,&g_1749},{&g_1749,(void*)0,&g_1749,&g_1749,&g_1749},{&g_1749,(void*)0,&g_1749,(void*)0,&g_1749}},{{&g_1749,(void*)0,&g_1749,&g_1749,&g_1749},{&g_1749,(void*)0,&g_1749,(void*)0,&g_1749},{&g_1749,(void*)0,&g_1749,&g_1749,&g_1749}}};
                    int32_t l_1750 = 0xE28B8B1EL;
                    int i, j, k;
                    if (((l_1733 == (((safe_add_func_int64_t_s_s(((**g_571) &= ((void*)0 == l_1736)), (g_911[2][2].f2 ^= ((*l_1642) |= (l_1738 = l_1737[2]))))) ^ (((&p_5 != (l_1741 = ((*l_1739) = &p_5))) <= (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((((*l_1747) = l_1746[0]) == &g_88) == ((l_1750 = 0xA5E0C18A41A52732LL) || p_4.f8)), 0x76D4300CL)), l_1695))) && l_1666)) , (void*)0)) && 18446744073709551612UL))
                    {
                        int32_t **l_1752[9][4] = {{(void*)0,(void*)0,(void*)0,&g_495[1][5]},{(void*)0,&g_495[1][5],&g_88,(void*)0},{(void*)0,&g_495[1][5],&g_495[1][5],&g_495[1][5]},{&g_495[1][5],(void*)0,&g_495[1][5],&g_88},{&g_88,(void*)0,&g_88,&g_495[1][5]},{(void*)0,(void*)0,&g_88,&g_495[1][5]},{(void*)0,&g_88,&g_88,(void*)0},{&g_88,&g_495[1][5],&g_495[1][5],&g_88},{&g_495[1][5],(void*)0,&g_495[1][5],&g_88}};
                        int32_t **l_1753 = &g_495[0][6];
                        int i, j;
                        p_4.f2 = (!8L);
                        (*l_1753) = (*g_1302);
                        return p_4.f0;
                    }
                    else
                    {
                        int32_t l_1758[10][6][4] = {{{(-1L),0L,0x660E1980L,2L},{0x9D3A1429L,(-1L),0x243F3E88L,(-6L)},{0xFBB96E34L,0x478508E1L,0L,0x45B5E862L},{0x9D3A1429L,(-1L),0x9D3A1429L,2L},{0x869EF97EL,(-1L),0xF358EBB2L,0xDC013BFBL},{1L,0x7747E001L,1L,(-1L)}},{{0xFBB96E34L,0xF5138258L,1L,0x660E1980L},{1L,0L,0xF358EBB2L,(-3L)},{0x869EF97EL,(-6L),0x9D3A1429L,(-1L)},{0x9D3A1429L,(-1L),0L,0L},{0xE69B60D1L,0x71A40420L,0x19CD7D31L,1L},{0x64A1693CL,1L,(-1L),1L}},{{(-3L),0x869EF97EL,(-2L),0xF5138258L},{0xB079DB56L,1L,0xDD668154L,2L},{0xB4D8EC8DL,(-1L),0xB1C9F9DFL,0x4185B037L},{0x09B0BF2FL,0x24ADBC1DL,0x4185B037L,(-10L)},{1L,2L,0xE69B60D1L,(-1L)},{(-1L),(-9L),0x7592A531L,0x9D3A1429L}},{{0L,0xDC013BFBL,0xF5138258L,0x8426AB9AL},{0xFBB4401CL,2L,0xE0C73EE7L,0x478508E1L},{0x24ADBC1DL,(-6L),0x9CD948C3L,1L},{0x44A6B43AL,(-1L),0xB079DB56L,0L},{0xF5138258L,(-1L),0x09B0BF2FL,1L},{(-1L),(-1L),0xDC013BFBL,0xF3B4C543L}},{{(-1L),0x243F3E88L,(-4L),0xD23EFD30L},{2L,0x4185B037L,2L,(-6L)},{0x5FAF2464L,1L,(-1L),0xDD668154L},{4L,0xD23EFD30L,0xD23EFD30L,4L},{1L,0xFBB4401CL,(-1L),0xB079DB56L},{(-1L),(-1L),2L,0L}},{{0x186EE94BL,(-3L),(-1L),0L},{(-9L),(-1L),(-6L),0xB079DB56L},{(-1L),0xFBB4401CL,0x16F68BFDL,4L},{0L,0xD23EFD30L,0x71A40420L,0xDD668154L},{(-1L),1L,1L,(-6L)},{(-1L),0x4185B037L,0xFBB96E34L,0xD23EFD30L}},{{0x45B5E862L,0x243F3E88L,0x478508E1L,0xF3B4C543L},{0xE0C73EE7L,(-1L),0x64A1693CL,1L},{(-4L),(-1L),0xF3B4C543L,0L},{0L,(-1L),0x57FC62A7L,1L},{0xF3B4C543L,(-6L),(-10L),0x478508E1L},{0xA0EFB06BL,2L,0x24ADBC1DL,0x8426AB9AL}},{{(-1L),0xDC013BFBL,(-2L),0x9D3A1429L},{1L,(-9L),0L,(-1L)},{0L,2L,1L,(-10L)},{1L,0x24ADBC1DL,1L,0x4185B037L},{6L,(-1L),0x186EE94BL,2L},{0x06DFC1EEL,1L,0L,0xF5138258L}},{{0xDC013BFBL,0x869EF97EL,(-10L),1L},{1L,1L,(-1L),1L},{0x4185B037L,1L,0xDD668154L,(-1L)},{0x869EF97EL,1L,(-1L),1L},{(-1L),(-5L),0L,1L},{0x186EE94BL,0x44A6B43AL,(-1L),(-1L)}},{{0xF3B4C543L,0L,(-9L),0x09B0BF2FL},{0xF3B4C543L,1L,(-1L),0xEDC4A7CEL},{0x186EE94BL,0x09B0BF2FL,0L,0L},{(-1L),6L,(-1L),(-9L)},{0x869EF97EL,2L,0xDD668154L,0x24ADBC1DL},{0x5FAF2464L,(-1L),(-3L),0x478508E1L}}};
                        int32_t **l_1773 = &g_495[1][5];
                        int8_t ** const ***l_1774 = &g_647;
                        int32_t **l_1775 = &g_495[1][5];
                        int i, j, k;
                        (*g_1303) &= (p_4.f3 , (((0x2562B1B89BE5952ALL == (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((*l_1665) = l_1758[4][3][0]), (p_4.f8 != ((((l_1666 , (safe_mul_func_uint16_t_u_u(65530UL, 0xB1C2L))) == ((*l_1642) = ((+1L) < (safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((***g_1419) = (safe_sub_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((((*g_88) = (~8UL)) != l_1771), p_4.f8)), 18446744073709551615UL))) <= l_1758[6][1][1]), 0xEBA5L)), 65535UL))))) && 253UL) ^ l_1772[7][4])))), l_1663))) > p_3) < 0x3DL));
                        (*l_1773) = (p_4 , (*g_1302));
                        (*l_1774) = &g_648;
                        (*l_1775) = (*g_1302);
                    }
                }
            }
            else
            {
                uint32_t ***l_1788 = &g_406;
                int32_t l_1794 = (-1L);
                uint32_t *l_1795 = &g_692[3];
                int64_t *l_1797 = (void*)0;
                int64_t *l_1798 = &g_1749;
                (*g_88) ^= ((void*)0 == l_1776);
                l_1794 = (safe_sub_func_int32_t_s_s(((((*g_1512) | (((*l_1660) = (safe_rshift_func_uint16_t_u_s(((((*l_1798) = (g_1796 = (((p_4.f0 && l_1666) || (((*l_1795) = ((p_4.f1 && l_1663) && (safe_mod_func_int64_t_s_s(((((*g_572) ^= p_5) , (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(0L, 5)), (((+(l_1788 != (((safe_sub_func_int32_t_s_s((~(((l_1792[0][0][1] , l_1793) != &l_1776) ^ (**g_571))), 0x6CEFCC60L)) ^ l_1794) , (void*)0))) , g_1619.f3) || g_393[3])))) == p_4.f0), 0xE9B0152DCD9D5BDDLL)))) & l_1792[0][0][1].f0)) || 8L))) ^ p_4.f6) > p_4.f3), l_1707))) & l_1799)) , l_1792[0][0][1].f3) , l_1695), l_1707));
            }
            l_1827--;
        }
        for (g_41 = 0; (g_41 >= 20); g_41 = safe_add_func_uint16_t_u_u(g_41, 8))
        {
            if (p_4.f8)
                break;
        }
    }
    (*g_88) = ((!(((l_1817 ^= (((*l_1854) = (((~255UL) == (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_1838[2][1][3], 6)), ((l_1841 = g_1839) != ((*g_1199) , l_1842))))) | (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((-8L), (~((((***l_1842) == ((safe_div_func_uint64_t_u_u(((safe_sub_func_uint64_t_u_u(p_5, (safe_rshift_func_int8_t_s_s(p_4.f1, p_4.f0)))) | p_4.f0), (-1L))) , (void*)0)) & p_4.f6) & p_4.f2)))), 1UL)))) , 0x0C3A9DF5L)) , l_1654) != (void*)0)) > p_5);
    return l_1855;
}







static int64_t func_6(int64_t p_7, const uint32_t p_8, struct S0 p_9, struct S0 p_10)
{
    const int64_t l_1472 = 0x8D038531506AB2D8LL;
    struct S0 l_1477 = {0x641FL,0x7B0A94ADL,0x6F20D98ABF7D8057LL,0L,0x2AA6L,0x9A0CL,3UL,3L,0x817FE57EL,8UL};
    uint64_t l_1479 = 0x514A1EBCB45A0893LL;
    int32_t l_1488 = (-1L);
    int8_t *l_1498 = &g_44[4];
    int32_t *l_1524 = &g_491[1][0][1].f8;
    int32_t l_1554 = 0x68646750L;
    int32_t l_1558 = 0xF7DB50FCL;
    int16_t l_1559 = 8L;
    int32_t l_1560[9] = {8L,(-10L),(-10L),8L,(-10L),(-10L),8L,(-10L),(-10L)};
    int64_t l_1564 = 1L;
    int8_t l_1588[1];
    struct S1 *l_1616 = (void*)0;
    struct S1 * const l_1620 = (void*)0;
    int i;
    for (i = 0; i < 1; i++)
        l_1588[i] = 0x6EL;
    if ((!(((((((void*)0 != &g_245) & (safe_unary_minus_func_uint8_t_u(l_1472))) && (safe_mul_func_int8_t_s_s(0xD0L, ((safe_add_func_int32_t_s_s(l_1472, ((p_9.f8 , l_1477) , (safe_unary_minus_func_uint32_t_u(l_1479))))) ^ ((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s(0x9F4FL, p_10.f0)), (-1L))) == (-1L)))))) != 0L) == l_1477.f8) , 0L)))
    {
        int32_t *l_1484 = &g_89[4][2][1];
        int32_t *l_1485 = (void*)0;
        int32_t *l_1486 = (void*)0;
        int32_t *l_1487 = &g_89[1][7][1];
        uint16_t l_1489 = 0x6EC5L;
        uint32_t *l_1494 = &g_692[1];
        const struct S1 l_1497 = {0x4A91A43CL,-2489,855,1432,1,2130,155,7,0,76};
        int64_t ** const l_1501 = &g_572;
        uint32_t * const * const *l_1507[4];
        uint32_t * const * const **l_1506 = &l_1507[3];
        int32_t l_1555 = (-1L);
        int32_t l_1556 = (-8L);
        int32_t l_1557[6][7] = {{4L,0L,0L,4L,0L,0L,4L},{0xC1438492L,0xD5910785L,0xC1438492L,1L,7L,1L,0xC1438492L},{4L,4L,0xC627A6C0L,4L,4L,0xC627A6C0L,4L},{7L,1L,0xC1438492L,0xD5910785L,0xC1438492L,1L,7L},{0L,4L,0L,0L,4L,0L,0L},{7L,0xD5910785L,(-1L),0xD5910785L,7L,0x1BC32361L,7L}};
        uint32_t l_1561 = 4294967295UL;
        uint16_t l_1586[1][3];
        int32_t l_1587 = (-6L);
        struct S0 *l_1600[7][1] = {{&g_1601},{&g_911[3][5]},{&g_1601},{&g_1601},{&g_911[3][5]},{&g_1601},{&g_1601}};
        int i, j;
        for (i = 0; i < 4; i++)
            l_1507[i] = (void*)0;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1586[i][j] = 3UL;
        }
lbl_1502:
        l_1489--;
        if ((((safe_mod_func_uint64_t_u_u((((0xF4L || 0x3CL) < ((*l_1494) ^= p_9.f0)) <= (((*g_88) , (safe_mul_func_uint8_t_u_u(((l_1497 , l_1498) != ((**g_538) = (**g_538))), (l_1477.f4 == (safe_add_func_int32_t_s_s(((*l_1484) = (l_1501 == (void*)0)), p_10.f7)))))) , l_1488)), p_9.f8)) , 0x511832B24A1FBA5DLL) , p_10.f5))
        {
            if (l_1477.f2)
                goto lbl_1502;
        }
        else
        {
            uint32_t * const * const ***l_1508[8][1][6] = {{{&l_1506,(void*)0,&l_1506,(void*)0,&l_1506,(void*)0}},{{&l_1506,(void*)0,&l_1506,(void*)0,&l_1506,(void*)0}},{{&l_1506,(void*)0,&l_1506,(void*)0,&l_1506,(void*)0}},{{&l_1506,(void*)0,&l_1506,(void*)0,&l_1506,(void*)0}},{{&l_1506,(void*)0,&l_1506,(void*)0,&l_1506,(void*)0}},{{&l_1506,(void*)0,&l_1506,(void*)0,&l_1506,(void*)0}},{{&l_1506,(void*)0,&l_1506,(void*)0,&l_1506,(void*)0}},{{&l_1506,(void*)0,&l_1506,(void*)0,&l_1506,(void*)0}}};
            uint16_t *l_1516[2][6][1] = {{{&g_911[2][2].f9},{&g_1458.f9},{&g_911[2][2].f9},{&g_1458.f9},{&g_911[2][2].f9},{&g_1458.f9}},{{&g_911[2][2].f9},{&g_1458.f9},{&g_911[2][2].f9},{&g_1458.f9},{&g_911[2][2].f9},{&g_1458.f9}}};
            int32_t l_1522 = 0x3D5D6BF4L;
            uint32_t *l_1523 = (void*)0;
            int32_t l_1552 = 0xD33D12D0L;
            int32_t l_1565 = 0x78BD8FE3L;
            int32_t l_1567 = 0xB62DA16EL;
            int32_t l_1568 = 1L;
            uint16_t l_1569 = 0x78BEL;
            int16_t l_1572[3];
            int32_t l_1573[1][8][10] = {{{0xDFE1CE14L,(-5L),(-2L),(-5L),0xDFE1CE14L,0x30AC83FCL,0xE5C98238L,(-1L),(-1L),0xE5C98238L},{0xC434947FL,0x30AC83FCL,(-1L),(-1L),0x30AC83FCL,0xC434947FL,1L,0xE5C98238L,0xDFE1CE14L,0xE5C98238L},{(-5L),(-1L),0xDFE1CE14L,(-1L),0xDFE1CE14L,(-1L),(-5L),1L,9L,9L},{(-5L),9L,0xC434947FL,(-2L),0x30AC83FCL,(-2L),0xDFE1CE14L,0xE9AA580DL,(-1L),9L},{(-2L),0xDFE1CE14L,0xE9AA580DL,(-1L),9L,(-1L),0xE9AA580DL,0xDFE1CE14L,(-2L),0x30AC83FCL},{0xC434947FL,0xE5C98238L,0xE9AA580DL,9L,0xDFE1CE14L,0xDFE1CE14L,9L,0xE9AA580DL,0xE5C98238L,0xC434947FL},{0xE5C98238L,(-1L),(-2L),9L,(-1L),0xC434947FL,(-1L),9L,(-2L),(-1L)},{0x30AC83FCL,0xE9AA580DL,0xC434947FL,(-1L),(-1L),(-5L),(-5L),(-1L),(-1L),0xC434947FL}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1572[i] = 0x7E14L;
            (*g_88) = (((l_1477.f7 = (((*g_830) = (!(safe_rshift_func_uint8_t_u_s(((l_1497 , p_10.f4) && ((*g_572) = ((g_1509 = l_1506) != &g_1510))), ((*l_1498) = (l_1522 = (p_10.f9 | (safe_lshift_func_uint16_t_u_u(((((g_1001.f0 ^= 1UL) , (l_1488 = ((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(((+(((**g_1511) = ((0UL > (l_1477.f3 != (l_1516[1][4][0] != (*g_1065)))) <= 0xAFL)) && 9UL)) == g_1001.f5), p_9.f0)) && p_10.f6), 0x331A6EF9L)) ^ l_1522))) , l_1522) >= 0x78L), 8))))))))) > p_10.f4)) , &g_163) == l_1524);
            if ((safe_lshift_func_uint8_t_u_u(0xD6L, 3)))
            {
                uint8_t ** const l_1548 = (void*)0;
                uint64_t *l_1549 = &g_491[1][0][1].f2;
                uint64_t *l_1550 = &g_239;
                uint64_t *l_1551[8] = {&l_1479,(void*)0,&l_1479,(void*)0,&l_1479,(void*)0,&l_1479,(void*)0};
                int32_t *l_1553[9] = {&g_728,&g_728,&g_1304[0],&g_728,&g_728,&g_1304[0],&g_728,&g_728,&g_1304[0]};
                int32_t l_1566 = 0x1E9C899EL;
                uint8_t l_1574 = 0x12L;
                int i;
                l_1552 &= (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(p_10.f6, ((l_1488 &= p_9.f1) < ((*l_1484) = (l_1522 , (safe_add_func_uint16_t_u_u(l_1477.f8, (~(safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u((~(safe_div_func_uint16_t_u_u(((***g_1419) | ((((p_10.f2 = ((g_1282 = ((((*l_1550) = ((*l_1549) = (((safe_lshift_func_int16_t_s_s((p_10.f9 != 0L), 9)) & (!(safe_div_func_uint64_t_u_u(((((p_10.f7 , l_1548) != l_1548) ^ p_9.f5) & p_7), l_1477.f7)))) >= (-5L)))) < p_9.f0) , (*l_1484))) > 0x6DCC478ADEC1AFF3LL)) < p_9.f7) | p_10.f6) ^ 0xFEBAA342FFA1B2FCLL)), p_9.f4))), p_9.f2)) | 9UL) || p_9.f7), l_1522)), l_1472)))))))))), 4));
                --l_1561;
                --l_1569;
                l_1574--;
            }
            else
            {
                uint32_t l_1585 = 0x1F8B4366L;
                int8_t *l_1589 = &g_1079;
                struct S0 **l_1599[8] = {&g_1457,&g_1457,(void*)0,&g_1457,&g_1457,(void*)0,&g_1457,&g_1457};
                int i;
                if ((safe_add_func_int16_t_s_s((((void*)0 == (*g_1419)) != (((safe_rshift_func_uint16_t_u_u((((*g_830) &= ((safe_div_func_int16_t_s_s(((*g_1303) != ((p_10.f3 | l_1477.f6) & ((*g_1303) <= ((safe_div_func_uint32_t_u_u(l_1585, p_9.f1)) , ((((0xF8F1L >= 1L) & l_1586[0][1]) != 0xF1E6L) & 1L))))), p_10.f2)) && (*g_1303))) < p_9.f5), 13)) && l_1587) & l_1588[0])), l_1477.f3)))
                {
                    uint64_t l_1592 = 0x130753045976CFA2LL;
                    int16_t *l_1595 = &g_911[2][2].f4;
                    (*g_1303) |= ((l_1589 == l_1589) | (safe_add_func_uint8_t_u_u((((l_1592++) || (*l_1484)) & ((*l_1595) = (0x7C4BE340L == 4L))), ((safe_rshift_func_int16_t_s_s(0x5515L, 1)) , (!p_10.f0)))));
                }
                else
                {
                    (*g_88) &= 0x5BF43D7BL;
                }
                l_1600[6][0] = &g_491[0][5][1];
            }
        }
    }
    else
    {
        uint64_t *l_1604[8] = {&g_1601.f2,&g_1458.f2,&g_1601.f2,&g_1601.f2,&g_1458.f2,&g_1601.f2,&g_1601.f2,&g_1458.f2};
        int32_t l_1606 = 0x0FFC2D9BL;
        struct S1 **l_1617 = &l_1616;
        uint16_t *l_1623 = &g_1001.f9;
        uint32_t *l_1624 = &g_1376;
        const int32_t **l_1625 = (void*)0;
        const int32_t **l_1626 = &g_761;
        int i;
        (*g_1303) = ((safe_sub_func_int32_t_s_s(((g_1458.f2 = p_10.f7) != (p_10.f6 != (((+(l_1606 < ((safe_mod_func_int32_t_s_s(((((*l_1624) &= ((safe_sub_func_uint32_t_u_u(((+(!(((safe_mod_func_int8_t_s_s((+((g_1618 = ((*l_1617) = l_1616)) == l_1620)), (safe_mod_func_uint16_t_u_u(((((*l_1623) = 0xF32CL) , (l_1606 | l_1588[0])) || l_1606), 0x7643L)))) > l_1560[4]) && l_1477.f6))) == 0x61CB5919L), (***g_1510))) < 1L)) , l_1623) == (void*)0), (*g_1512))) , l_1477.f2))) , l_1606) < l_1477.f8))), (-10L))) && 1UL);
        g_1627 = ((*l_1626) = &l_1558);
    }
    return (**g_571);
}







static uint8_t func_15(int64_t p_16, const uint32_t p_17, int32_t p_18)
{
    int32_t * const *l_1301 = &g_88;
    int32_t **l_1306 = (void*)0;
    int32_t ***l_1305 = &l_1306;
    int8_t *l_1307 = &g_1079;
    uint64_t *l_1312 = &g_239;
    uint64_t *l_1313 = &g_911[2][2].f2;
    const int32_t *l_1316 = &g_1317;
    int8_t l_1320 = 0x0EL;
    int32_t l_1321 = 0x4EFEF9FBL;
    int32_t *l_1322 = &g_89[5][7][0];
    int32_t *l_1323 = &g_1304[0];
    int32_t l_1324 = (-1L);
    int32_t *l_1325 = &g_393[3];
    int32_t l_1326[9] = {(-1L),8L,8L,(-1L),8L,8L,(-1L),8L,8L};
    int32_t *l_1327[3][3];
    int32_t l_1328 = 0x78BD8D88L;
    int32_t l_1329 = 0x905C40C8L;
    uint16_t l_1330 = 65534UL;
    int32_t l_1341 = 1L;
    uint16_t l_1358 = 0UL;
    uint32_t l_1451 = 0xB5AF854CL;
    struct S0 l_1459 = {65533UL,1UL,0x6D19C7B6997BD1BBLL,0x9662L,0x9759L,0x3A43L,1UL,0L,-1L,4UL};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_1327[i][j] = &g_491[1][0][1].f7;
    }
    (*g_88) = ((safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((((*l_1307) = ((g_1302 = l_1301) != ((*l_1305) = &g_88))) && (((safe_rshift_func_int16_t_s_s((((safe_mod_func_uint64_t_u_u(((*l_1312) = g_11[1][1][0]), ((*l_1313)++))) && p_17) || ((l_1316 = (**l_1305)) == (g_495[0][0] = ((l_1320 &= (safe_add_func_uint8_t_u_u(((*g_572) || (**g_571)), 0xEEL))) , (**l_1305))))), (***l_1305))) == p_17) , (**l_1306))), 0xEF72L)) == 0xD9L), p_18)) < 255UL);
    --l_1330;
    for (g_1001.f8 = 19; (g_1001.f8 <= 21); g_1001.f8++)
    {
        int64_t l_1342 = 0L;
        int32_t l_1343[7] = {1L,0x622E5072L,0x622E5072L,1L,0x622E5072L,0x622E5072L,1L};
        const struct S0 *l_1346 = &g_491[8][3][0];
        uint16_t ***l_1430 = &g_1065;
        uint32_t l_1438 = 0x49869175L;
        struct S0 *l_1456 = &g_491[1][0][1];
        int16_t *l_1464 = &g_491[1][0][1].f3;
        int16_t *l_1465[1][7] = {{(void*)0,&g_491[1][0][1].f4,(void*)0,(void*)0,&g_491[1][0][1].f4,(void*)0,(void*)0}};
        uint32_t l_1466[7] = {4294967295UL,4294967295UL,0x1E5DFFF4L,4294967295UL,4294967295UL,0x1E5DFFF4L,4294967295UL};
        int8_t *** const *l_1467 = &g_538;
        int i, j;
        for (p_18 = 14; (p_18 > 25); p_18++)
        {
            uint64_t l_1359 = 0x24C1DD35C534FD50LL;
            int32_t *l_1360 = &l_1343[3];
            struct S0 l_1381 = {1UL,0UL,8UL,0L,0xB6A2L,1UL,0UL,-1L,0x1D07751CL,0x958EL};
            int16_t l_1435 = 0L;
        }
        (**l_1306) = (((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(p_18, 8)), ((l_1451 < (*g_88)) | (*g_830)))) != (safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((l_1343[0] = (((((l_1466[3] ^= ((p_17 , (&g_491[1][0][1] == (g_1457 = l_1456))) , ((*l_1464) &= (l_1459 , ((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(((0x4F28D78CL | p_16) != (*g_572)), p_17)) > p_18), p_18)) < l_1438))))) | (***l_1305)) || p_18) , l_1467) == (void*)0)) , 1L), p_17)), 4))) > l_1342);
        if (l_1466[6])
            continue;
    }
    return (**g_1420);
}







static int16_t func_19(int32_t p_20, int32_t p_21, int32_t p_22, int32_t p_23)
{
    int64_t l_121 = 0xBD2E68FD62B9E97ELL;
    struct S1 l_656 = {0x9B46F354L,-3827,-988,4730,11,2214,286,6,0,74};
    int32_t l_1158[7];
    uint32_t l_1202 = 0x91B0E686L;
    uint8_t **l_1270 = &g_830;
    uint32_t *** const * const l_1277 = (void*)0;
    uint8_t l_1278 = 0xA9L;
    int32_t l_1279 = 0xFE7BE451L;
    uint32_t * const *l_1286 = (void*)0;
    uint32_t * const **l_1285 = &l_1286;
    uint32_t ***l_1292 = &g_701;
    int i;
    for (i = 0; i < 7; i++)
        l_1158[i] = (-1L);
lbl_1293:
    for (p_23 = (-10); (p_23 <= (-25)); p_23 = safe_sub_func_uint32_t_u_u(p_23, 9))
    {
        uint32_t l_76 = 4294967290UL;
        const uint16_t *l_85 = &g_41;
        uint16_t * const l_122 = (void*)0;
        int8_t *l_845 = (void*)0;
        int32_t *l_1096 = &g_911[2][2].f7;
        int8_t **** const l_1099[8][9] = {{&g_538,&g_538,(void*)0,(void*)0,&g_538,&g_538,&g_538,(void*)0,(void*)0},{&g_538,&g_538,&g_538,(void*)0,&g_538,&g_538,&g_538,&g_538,(void*)0},{&g_538,&g_538,&g_538,&g_538,&g_538,&g_538,&g_538,&g_538,&g_538},{&g_538,&g_538,&g_538,&g_538,&g_538,&g_538,&g_538,&g_538,&g_538},{&g_538,&g_538,(void*)0,&g_538,&g_538,&g_538,&g_538,(void*)0,&g_538},{&g_538,&g_538,(void*)0,(void*)0,&g_538,&g_538,&g_538,(void*)0,(void*)0},{&g_538,&g_538,&g_538,(void*)0,&g_538,&g_538,&g_538,&g_538,(void*)0},{&g_538,&g_538,&g_538,&g_538,&g_538,&g_538,&g_538,&g_538,&g_538}};
        uint16_t **l_1106 = &g_246;
        const struct S0 *l_1230 = &g_491[1][0][1];
        struct S0 *l_1231[1];
        int8_t ****l_1237 = &g_538;
        int16_t *l_1249 = &g_491[1][0][1].f4;
        int32_t *l_1261 = &g_163;
        int64_t *l_1266[4] = {&l_121,&l_121,&l_121,&l_121};
        int32_t *l_1267 = &g_393[3];
        int i, j;
        for (i = 0; i < 1; i++)
            l_1231[i] = &g_1001;
    }
    if (((l_1158[6] = (((p_23 >= 0xE6B2L) > ((safe_rshift_func_uint8_t_u_s((((*g_761) , l_656.f8) == (l_1270 == &g_830)), 2)) & (((((((safe_add_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s((g_491[1][0][1].f8 , ((safe_sub_func_int8_t_s_s((&g_462 != ((((*g_406) = (g_911[2][6] , (void*)0)) == &l_1202) , l_1277)), l_121)) | l_1158[2])), l_1158[2])) <= l_1278) ^ 0xF1C598DCF7B2D7DDLL) & p_23), p_22)) , l_656.f1) , l_656.f9) == p_20) && l_1279) || (*g_88)) || l_656.f5))) | 0x08L)) && 0xCEL))
    {
        if (((*g_88) |= 0xF34AB275L))
        {
            return l_656.f0;
        }
        else
        {
            return p_20;
        }
    }
    else
    {
        int32_t *l_1280[8] = {&g_89[4][2][1],&g_1001.f7,&g_89[4][2][1],&g_89[4][2][1],&g_1001.f7,&g_393[3],&g_393[3],&g_89[4][2][1]};
        int8_t l_1281[2][8][9] = {{{0x61L,0x1BL,0xDAL,0x1BL,0x61L,0x19L,(-10L),0x5CL,0xEDL},{0x16L,3L,(-8L),0x05L,0x1BL,(-1L),0xDAL,(-1L),0xAFL},{0xAFL,0xA3L,0x41L,0x16L,5L,0x19L,(-1L),9L,0L},{0x48L,9L,0x5CL,0xA3L,(-1L),0xA3L,0x5CL,9L,0x48L},{1L,(-1L),9L,0xEDL,1L,0xFBL,0x61L,(-1L),(-1L)},{9L,(-8L),0xFBL,0xAFL,1L,(-1L),3L,0x5CL,0x1EL},{1L,1L,0x61L,0L,0xFBL,0x05L,0x1EL,0x05L,0xFBL},{0x48L,0x61L,0x61L,0x48L,(-8L),(-10L),1L,(-1L),(-1L)}},{{0xAFL,1L,0xFBL,(-1L),(-10L),0xDAL,5L,0xEDL,(-1L)},{0x16L,(-1L),9L,0x1EL,(-8L),(-1L),(-1L),(-1L),0x5CL},{0x61L,(-1L),0x5CL,0xFBL,0xFBL,0x5CL,(-1L),0x61L,(-1L)},{0xDAL,(-1L),0x41L,(-1L),1L,0x61L,5L,0x1BL,(-1L)},{(-1L),0x16L,(-8L),(-1L),1L,3L,1L,5L,(-1L)},{(-1L),0x41L,0xDAL,0x5CL,(-1L),0x1EL,0x1EL,(-1L),0x5CL},{0x19L,0x41L,0x19L,(-1L),5L,1L,3L,1L,(-1L)},{0x1EL,0x16L,0x48L,(-1L),0x1BL,5L,0x61L,1L,(-1L)}}};
        int i, j, k;
        g_1282++;
    }
    if (((*g_88) = (p_23 ^ (l_1285 == (void*)0))))
    {
        int32_t *l_1287[2];
        int64_t l_1288 = 0xCC61362FCB49EBD4LL;
        uint16_t l_1289 = 0xDBDBL;
        int i;
        for (i = 0; i < 2; i++)
            l_1287[i] = &g_89[1][2][2];
        --l_1289;
        (*g_88) = (&g_701 == l_1292);
    }
    else
    {
        int32_t *l_1294 = (void*)0;
        int32_t *l_1295 = (void*)0;
        if (l_656.f9)
            goto lbl_1293;
        l_1295 = (l_1294 = &l_1158[1]);
    }
    return l_1278;
}







static int32_t func_47(uint32_t p_48, int64_t p_49, int8_t * p_50)
{
    int32_t *l_846 = &g_728;
    int32_t *l_865[10][6] = {{&g_163,(void*)0,&g_163,&g_491[1][0][1].f8,(void*)0,(void*)0},{&g_163,(void*)0,&g_163,(void*)0,&g_163,(void*)0},{&g_163,(void*)0,(void*)0,&g_491[1][0][1].f8,&g_163,(void*)0},{&g_163,(void*)0,&g_163,&g_163,&g_163,&g_163},{(void*)0,(void*)0,&g_163,&g_163,&g_163,&g_163},{(void*)0,(void*)0,&g_491[1][0][1].f8,&g_163,&g_163,&g_163},{&g_491[1][0][1].f8,(void*)0,&g_491[1][0][1].f8,(void*)0,(void*)0,&g_163},{&g_491[1][0][1].f8,(void*)0,(void*)0,(void*)0,&g_491[1][0][1].f8,&g_491[1][0][1].f8},{(void*)0,&g_491[1][0][1].f8,&g_491[1][0][1].f8,(void*)0,(void*)0,(void*)0},{&g_491[1][0][1].f8,&g_163,&g_163,(void*)0,&g_163,&g_163}};
    int8_t ** const *l_866[9] = {&g_279[2][3],&g_279[0][2],&g_279[0][2],&g_279[2][3],&g_279[0][2],&g_279[0][2],&g_279[2][3],&g_279[0][2],&g_279[0][2]};
    int32_t l_867 = (-1L);
    const struct S0 *l_873 = &g_491[1][0][1];
    struct S1 l_874 = {0x8472E3AEL,407,-594,4683,11,1737,126,3,0,14};
    uint64_t *l_876 = &g_300;
    uint64_t **l_875 = &l_876;
    uint32_t l_912 = 0UL;
    uint8_t *l_964 = &g_376[4][2][0];
    int32_t l_976 = 0xE0D631B8L;
    int32_t l_980 = (-10L);
    int32_t l_981 = 0L;
    int32_t l_989 = 1L;
    int32_t l_992 = 0xBC4AA201L;
    int32_t l_1082[9][2][7] = {{{0x48406DB2L,0x85D637A2L,0L,(-1L),0x417CCC30L,1L,1L},{1L,(-1L),0xA495A55AL,0L,0xEB80D2A6L,1L,1L}},{{0xFA7EFA19L,0L,0x06178F46L,0L,0xFA7EFA19L,(-1L),1L},{(-1L),0x4662ED34L,1L,0xEB80D2A6L,0xA495A55AL,1L,3L}},{{0L,6L,(-8L),0xD96D8DD1L,0x923A28C2L,0x85D637A2L,0x417CCC30L},{(-1L),0xEB80D2A6L,0x3E51F300L,(-1L),3L,2L,0xEB80D2A6L}},{{0xFA7EFA19L,1L,0L,0xA7DCCDD2L,0L,1L,0xFA7EFA19L},{1L,0xEB80D2A6L,0L,0xA495A55AL,(-1L),1L,0xA495A55AL}},{{0x48406DB2L,6L,1L,0L,1L,0xD4984834L,0x923A28C2L},{0xEB80D2A6L,0x4662ED34L,0L,0x575D818FL,0x4662ED34L,0xA495A55AL,3L}},{{(-1L),0L,0L,1L,0x923A28C2L,1L,0L},{(-1L),(-1L),0x3E51F300L,0x575D818FL,0xEB80D2A6L,0L,(-1L)}},{{0xFA7EFA19L,0x85D637A2L,(-8L),0L,0xC6574A35L,1L,1L},{1L,3L,1L,0xA495A55AL,0xEB80D2A6L,1L,0x4662ED34L}},{{1L,6L,0x06178F46L,0xA7DCCDD2L,0x923A28C2L,1L,0x923A28C2L},{(-1L),0xA495A55AL,0xA495A55AL,(-1L),0x4662ED34L,1L,0xEB80D2A6L}},{{0xC6574A35L,0L,0L,0xD96D8DD1L,1L,1L,0xC6574A35L},{(-1L),0xEB80D2A6L,1L,0xEB80D2A6L,(-1L),0L,0xEB80D2A6L}}};
    int i, j, k;
    (*l_846) |= 0x42BD79CEL;
lbl_1004:
    l_867 = (safe_mod_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((((safe_mod_func_int32_t_s_s((((&g_572 != (((((**g_571) = (-10L)) && p_48) , (safe_rshift_func_int8_t_s_u((1L && ((-10L) <= (safe_mod_func_uint8_t_u_u(p_49, ((((*l_846) || ((safe_add_func_int64_t_s_s(((((*g_647) = (((*l_846) = ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((-1L), 5)), (*l_846))) ^ p_48)) , (void*)0)) != l_866[7]) > (*g_407)), p_49)) , 3UL)) >= l_867) , 0xDFL))))), (*g_830)))) , &g_572)) < p_49) | p_48), l_867)) , p_49) == p_49), p_48)) < 0x00L) > p_49), 1L));
    if ((((*l_846) = p_48) , ((safe_div_func_int64_t_s_s(((((*l_846) = ((*l_873) , (*l_846))) , g_355) > (**g_571)), p_49)) == p_49)))
    {
        int32_t **l_877 = &l_846;
        int32_t *l_878 = &l_867;
        l_878 = ((*l_877) = ((*l_846) , &g_89[4][2][1]));
    }
    else
    {
        uint32_t l_882 = 0x0B301A06L;
        int32_t l_886 = 0xFA4F608FL;
        int32_t l_888 = (-6L);
        int32_t l_889 = 0xE524D251L;
        int32_t l_890 = 0xD77C7F04L;
        uint8_t l_891 = 0xA3L;
        const struct S1 l_922 = {0x0B0A03A1L,2765,647,3424,2,528,178,2,0,58};
        uint16_t *l_942 = &g_355;
        int32_t l_962 = 1L;
        int32_t l_994 = 1L;
        int32_t l_995 = (-1L);
        uint32_t l_996 = 1UL;
        int16_t l_1005 = 0x81F9L;
        uint32_t ***l_1043 = &g_701;
        int64_t l_1080 = 0L;
        int32_t l_1085 = (-1L);
        int64_t l_1091 = 5L;
        int64_t **l_1095 = &g_572;
        (*g_647) = (*g_647);
        for (g_160 = (-7); (g_160 < 15); g_160 = safe_add_func_uint32_t_u_u(g_160, 3))
        {
            int32_t *l_881[3];
            int16_t l_887 = 0xF075L;
            int64_t ***l_907 = &g_571;
            struct S0 l_915 = {0xF396L,0x73962D24L,0xC90FD0DA24A0AFC8LL,9L,0L,8UL,65527UL,1L,0x66E45A89L,0x418CL};
            struct S0 *l_1000 = &g_1001;
            uint32_t **l_1009 = (void*)0;
            uint32_t **l_1028[10][5][4] = {{{&g_407,&g_407,&g_407,&g_407},{&g_407,&g_407,&g_407,&g_407},{&g_407,&g_407,&g_407,&g_407},{&g_407,(void*)0,(void*)0,&g_407},{&g_407,(void*)0,&g_407,(void*)0}},{{&g_407,(void*)0,&g_407,&g_407},{(void*)0,(void*)0,&g_407,&g_407},{(void*)0,&g_407,&g_407,&g_407},{&g_407,&g_407,&g_407,&g_407},{&g_407,&g_407,(void*)0,&g_407}},{{&g_407,&g_407,&g_407,&g_407},{&g_407,&g_407,&g_407,&g_407},{(void*)0,&g_407,&g_407,(void*)0},{&g_407,&g_407,&g_407,&g_407},{&g_407,(void*)0,(void*)0,&g_407}},{{&g_407,&g_407,&g_407,&g_407},{&g_407,(void*)0,(void*)0,&g_407},{&g_407,(void*)0,(void*)0,&g_407},{&g_407,&g_407,&g_407,(void*)0},{&g_407,&g_407,&g_407,&g_407}},{{&g_407,(void*)0,&g_407,&g_407},{(void*)0,&g_407,&g_407,&g_407},{(void*)0,(void*)0,&g_407,&g_407},{&g_407,&g_407,&g_407,&g_407},{&g_407,&g_407,&g_407,&g_407}},{{&g_407,&g_407,&g_407,(void*)0},{&g_407,&g_407,&g_407,&g_407},{&g_407,&g_407,&g_407,&g_407},{&g_407,&g_407,&g_407,(void*)0},{&g_407,&g_407,&g_407,&g_407}},{{&g_407,&g_407,&g_407,(void*)0},{(void*)0,&g_407,&g_407,&g_407},{(void*)0,&g_407,&g_407,(void*)0},{&g_407,&g_407,&g_407,&g_407},{&g_407,&g_407,&g_407,&g_407}},{{&g_407,&g_407,(void*)0,&g_407},{&g_407,(void*)0,(void*)0,(void*)0},{&g_407,&g_407,&g_407,&g_407},{&g_407,&g_407,(void*)0,&g_407},{&g_407,&g_407,&g_407,&g_407}},{{&g_407,&g_407,&g_407,&g_407},{(void*)0,&g_407,&g_407,(void*)0},{&g_407,&g_407,&g_407,&g_407},{&g_407,(void*)0,&g_407,&g_407},{&g_407,&g_407,&g_407,&g_407}},{{&g_407,(void*)0,(void*)0,&g_407},{&g_407,(void*)0,&g_407,&g_407},{&g_407,(void*)0,&g_407,(void*)0},{&g_407,&g_407,&g_407,(void*)0},{&g_407,(void*)0,&g_407,&g_407}}};
            uint32_t l_1039 = 0xB05D8B9FL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_881[i] = &l_867;
            ++l_882;
            for (g_41 = 0; (g_41 <= 1); g_41 += 1)
            {
                int32_t l_885[10] = {0L,0xD3B6FCBDL,0L,0xA92DC33DL,0xA92DC33DL,0L,0xD3B6FCBDL,0L,0xA92DC33DL,0xA92DC33DL};
                int64_t ***l_906 = &g_571;
                int16_t *l_908 = &g_491[1][0][1].f4;
                int i, j;
                ++l_891;
                l_886 = ((((safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s((l_912 = ((safe_mod_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(((*l_908) &= (g_507 < (safe_mul_func_int8_t_s_s(0x66L, (l_906 != l_907))))), (0xCCL & ((*l_846) | ((safe_mod_func_int32_t_s_s((l_885[6] = (*g_761)), ((g_911[2][2] , 8UL) ^ p_49))) != p_48))))) != (*l_846)) , g_911[2][2].f3), p_49)) <= 0xC053D9C1L)), g_376[2][2][1])) && p_49) != 0UL), p_49)) , (*g_572)) == (-1L)) < 0UL);
            }
            (*l_846) |= 0x9968C4FFL;
            if (((safe_add_func_uint32_t_u_u(((l_915 , ((*l_846) <= ((0x5DB1FB62L & (~(((*g_830) = (safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((p_49 != (safe_unary_minus_func_int16_t_s((l_874 , 0x490FL)))), 4)), ((((*l_876) = 0UL) > ((p_49 , (l_922 , g_911[2][2])) , (*g_572))) , p_49)))) , (*l_846)))) , 0x3B78L))) < l_922.f0), (-6L))) || 0UL))
            {
                uint32_t l_925 = 0xA75F3FB5L;
                int8_t l_928[5][7] = {{0x19L,0x03L,0x19L,0x03L,0x19L,0x03L,0x19L},{0xADL,0x4FL,0x4FL,0xADL,0xADL,0x4FL,0x4FL},{(-2L),0x03L,(-2L),0x03L,(-2L),0x03L,(-2L)},{0xADL,0xADL,0x4FL,0x4FL,0xADL,0xADL,0x4FL},{0x19L,0x03L,0x19L,0x03L,0x19L,0x03L,0x19L}};
                int i, j;
                for (g_728 = 0; (g_728 < 14); ++g_728)
                {
                    --l_925;
                    if (l_928[1][2])
                        break;
                    if (p_49)
                        break;
                    for (l_888 = 0; (l_888 >= (-4)); l_888--)
                    {
                        uint16_t l_931 = 0x1519L;
                        if (l_931)
                            break;
                        if (p_48)
                            continue;
                    }
                }
                if (p_48)
                    continue;
            }
            else
            {
                struct S0 l_940 = {0xA59CL,4294967295UL,7UL,0x79D7L,0x23ABL,65533UL,0x740FL,1L,0x45C62205L,0x88BEL};
                int32_t l_977 = 0x5F21C099L;
                int32_t l_978 = 0x4699329FL;
                int32_t l_979 = 0x49A8EBAAL;
                int32_t l_982 = 0xCF06EB67L;
                int32_t l_986 = 0xF6A2AE89L;
                int32_t l_990 = 0L;
                int32_t l_991 = (-1L);
                int32_t l_993[5];
                uint32_t **l_1029[9] = {(void*)0,(void*)0,&g_407,(void*)0,(void*)0,&g_407,(void*)0,(void*)0,&g_407};
                int8_t * const *l_1030[9][6][4] = {{{&g_206,&g_206,&g_206,&g_206},{(void*)0,&g_206,(void*)0,&g_206},{&g_206,&g_206,(void*)0,&g_206},{&g_206,&g_206,(void*)0,&g_206},{&g_206,&g_206,&g_206,(void*)0},{&g_206,&g_206,&g_206,&g_206}},{{&g_206,&g_206,&g_206,(void*)0},{&g_206,&g_206,(void*)0,&g_206},{&g_206,&g_206,(void*)0,&g_206},{&g_206,&g_206,(void*)0,&g_206},{(void*)0,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206}},{{&g_206,&g_206,&g_206,(void*)0},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,(void*)0},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206}},{{(void*)0,&g_206,(void*)0,&g_206},{&g_206,&g_206,(void*)0,&g_206},{&g_206,&g_206,(void*)0,&g_206},{&g_206,&g_206,&g_206,(void*)0},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,(void*)0}},{{&g_206,&g_206,(void*)0,&g_206},{&g_206,&g_206,(void*)0,&g_206},{&g_206,&g_206,(void*)0,&g_206},{(void*)0,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,(void*)0}},{{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,(void*)0},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{(void*)0,&g_206,(void*)0,&g_206}},{{&g_206,&g_206,(void*)0,&g_206},{&g_206,&g_206,(void*)0,&g_206},{&g_206,&g_206,&g_206,(void*)0},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,(void*)0},{&g_206,&g_206,(void*)0,&g_206}},{{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,(void*)0,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,(void*)0,&g_206},{&g_206,&g_206,&g_206,&g_206}},{{&g_206,&g_206,&g_206,(void*)0},{&g_206,&g_206,(void*)0,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,(void*)0,&g_206},{&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206}}};
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_993[i] = 0xC8DE94E1L;
                if ((l_865[1][4] == (void*)0))
                {
                    uint16_t *l_941 = &g_355;
                    int32_t l_943 = (-3L);
                    int8_t ***l_944 = (void*)0;
                    uint64_t *l_949 = (void*)0;
                    int32_t l_960 = 0xB71AE189L;
                    uint64_t l_970 = 0UL;
                    int32_t l_985 = 0L;
                    int32_t l_987 = 0x8E8D52C2L;
                    int32_t l_988[9][5][4] = {{{1L,(-1L),0xA74FF825L,0x33BD1343L},{(-1L),0xF7AD937BL,0L,(-1L)},{(-1L),0x3A46EB55L,0xA74FF825L,(-1L)},{1L,(-1L),0xBCA007F8L,0xFE3196A2L},{(-7L),0xC7BE8850L,(-1L),3L}},{{0x3665FC50L,(-7L),5L,0xC068F8ECL},{0x68715D38L,1L,0xDB97925AL,0x1945877CL},{7L,0x146D1934L,0x496B863BL,(-4L)},{0xBCA007F8L,0x68715D38L,0L,7L},{(-1L),(-1L),0xC068F8ECL,0xF7AD937BL}},{{8L,0xFE6A53EDL,(-1L),0xDB97925AL},{9L,3L,0x2ACA1475L,(-1L)},{0xA74FF825L,9L,0L,4L},{(-1L),(-7L),0x5C4F21B3L,0x723DB0D2L},{0x508A8522L,(-2L),(-1L),9L}},{{0x5C4F21B3L,0x3B39477AL,0x723DB0D2L,0x496B863BL},{1L,(-1L),(-1L),1L},{0x015A3E4DL,(-1L),0xF7AD937BL,0xC0223463L},{3L,0xBCA007F8L,0x146D1934L,1L},{0x763398F0L,0x9FD993F5L,1L,1L}},{{0x7841B2AAL,0xBCA007F8L,1L,0xC0223463L},{0x96DC80B4L,(-1L),0x3665FC50L,1L},{(-1L),(-1L),0xC7BE8850L,0x496B863BL},{0xC814B45DL,0x3B39477AL,0x96DC80B4L,9L},{0x6712317CL,(-2L),(-1L),0x723DB0D2L}},{{0x9FC7D528L,(-7L),0x3A46EB55L,4L},{0xF22C192FL,9L,(-7L),(-1L)},{9L,3L,0xDAF8D720L,0xDB97925AL},{0xDB97925AL,0xFE6A53EDL,0x3B39477AL,0xF7AD937BL},{0x3A46EB55L,(-1L),0x9FD993F5L,7L}},{{0xC068F8ECL,0x68715D38L,0x015A3E4DL,(-4L)},{0xFE3196A2L,0x146D1934L,0xCF3AB193L,0x1945877CL},{1L,1L,0x1945877CL,0xC068F8ECL},{0x0A560415L,(-7L),1L,3L},{1L,0xC7BE8850L,1L,0xFE3196A2L}},{{0x3B39477AL,0x59FF3A3BL,0xC7BE8850L,(-1L)},{0x33BD1343L,0x9FD993F5L,0xFE6A53EDL,0x59FF3A3BL},{(-1L),0x1945877CL,0xFE6A53EDL,1L},{0x33BD1343L,0xBCA007F8L,0xC7BE8850L,9L},{(-4L),0xF7AD937BL,0x3B39477AL,0xFE6A53EDL}},{{0x3B39477AL,0xFE6A53EDL,0xDB97925AL,0x763398F0L},{0xC0223463L,3L,(-1L),(-2L)},{1L,1L,0xF7AD937BL,0x9FD993F5L},{(-1L),1L,0x763398F0L,0xFE3196A2L},{0x91FB12B4L,0x763398F0L,0xC814B45DL,1L}}};
                    int i, j, k;
                    for (g_261 = (-25); (g_261 >= 26); g_261++)
                    {
                        int32_t *l_934 = &l_915.f7;
                        int32_t **l_935 = &g_88;
                        (*l_935) = l_934;
                    }
                    l_889 |= (safe_mul_func_uint8_t_u_u((((g_491[3][9][1] , l_944) != (void*)0) && 0xC569L), (*l_846)));
                    if (p_49)
                    {
                        uint8_t *l_950[3];
                        int16_t *l_959[10];
                        uint64_t l_961[5] = {1UL,1UL,1UL,1UL,1UL};
                        int32_t l_963 = 0x7C628991L;
                        int32_t l_965 = 0xA66357AAL;
                        uint32_t *l_975 = &g_692[1];
                        int32_t l_983 = 0xDD0C5B9EL;
                        int32_t l_984 = 0xA88FC5EDL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_950[i] = &l_891;
                        for (i = 0; i < 10; i++)
                            l_959[i] = &g_911[2][2].f3;
                        l_965 = ((*l_846) = ((p_50 == (((((l_963 = (safe_sub_func_uint64_t_u_u(((1L > (safe_add_func_uint8_t_u_u((l_889 = ((*g_830) &= ((void*)0 == l_949))), (((((*g_407) < (safe_sub_func_uint32_t_u_u((p_49 >= (safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u((((((((l_922.f9 || ((*l_941) = ((((l_943 = (safe_rshift_func_int16_t_s_u(0xCF22L, 8))) == 9L) <= p_48) <= l_960))) , &g_245) == &g_245) > l_922.f5) , l_961[0]) | 0x8CF5C175303FE5DBLL) || l_890), l_962)) ^ 0xFF26C49FBF15CAD6LL), 5))), l_961[3]))) >= p_49) != l_960) != l_960)))) ^ 0x308BE1EDL), 0xC1C03E977DF1A8CCLL))) , p_48) ^ 0x995109A2E2AE5930LL) & 0xE7L) , l_964)) <= l_922.f3));
                        l_960 ^= ((g_44[4] & (**g_571)) ^ (safe_rshift_func_int16_t_s_u(l_922.f0, ((safe_add_func_uint32_t_u_u((0x10FC82B1B95E8072LL > ((l_970 == 1L) , (safe_mod_func_int8_t_s_s((-1L), ((safe_mod_func_uint32_t_u_u(((*l_975) = (0x2FL & 249UL)), l_943)) & p_48))))), 0x7277ED6CL)) , g_386.f5))));
                        if (p_49)
                            break;
                        l_996--;
                    }
                    else
                    {
                        const struct S0 **l_999[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        l_1000 = (void*)0;
                        if (l_922.f8)
                            break;
                        if (p_49)
                            break;
                    }
                }
                else
                {
                    int32_t l_1021 = (-10L);
                    uint32_t *l_1022 = &l_882;
                    struct S1 l_1027 = {-8L,-3991,-828,1630,8,3636,337,2,0,34};
                    int32_t l_1074 = 0x5416ABCBL;
                    int32_t l_1075 = (-8L);
                    int32_t l_1078[4] = {0x8ECD0E59L,0x8ECD0E59L,0x8ECD0E59L,0x8ECD0E59L};
                    uint64_t l_1092 = 0x4BF2BD0686429966LL;
                    int i;
                    for (l_940.f3 = 0; (l_940.f3 <= 18); ++l_940.f3)
                    {
                        uint32_t ***l_1010 = &l_1009;
                        if (l_915.f3)
                            goto lbl_1004;
                        g_1006--;
                        if ((*g_761))
                            break;
                        (*l_1010) = l_1009;
                    }
                    if (((*l_846) &= (((*g_830) = p_49) , (-8L))))
                    {
                        return (*g_761);
                    }
                    else
                    {
                        uint32_t *l_1013 = &g_692[1];
                        (*l_846) = ((p_48 && (*g_830)) | ((((safe_add_func_uint32_t_u_u((l_1013 == ((*g_406) = (*g_406))), (((safe_rshift_func_uint8_t_u_s((p_48 || ((((p_49 && (safe_lshift_func_int8_t_s_s(p_49, ((safe_unary_minus_func_uint64_t_u((l_1021 || ((l_1022 == l_1022) > g_1001.f9)))) == l_1021)))) | p_48) ^ p_49) != p_49)), 2)) != (**g_571)) , 1UL))) == (*l_846)) < g_300) , (*l_846)));
                        (*l_846) |= (safe_rshift_func_int8_t_s_u(((void*)0 == &g_647), 2));
                        if ((*g_761))
                            break;
                        (*l_846) &= l_1021;
                    }
                    if ((safe_rshift_func_uint16_t_u_s((((g_491[1][0][1].f9 , l_1027) , (*g_830)) || (*g_830)), (l_1028[7][1][0] != l_1029[2]))))
                    {
                        uint32_t l_1042 = 0x6946CF62L;
                        uint16_t **l_1056 = &g_246;
                        uint16_t *l_1060 = &g_11[6][1][0];
                        int32_t l_1061 = 0xA4290061L;
                        uint16_t ***l_1064 = &g_245;
                        int64_t ****l_1070 = &l_907;
                        int16_t *l_1071 = &g_911[2][2].f3;
                        int8_t l_1072 = 0xBCL;
                        int32_t l_1073 = 3L;
                        int32_t l_1076[10] = {0x1DF96F49L,0xB6ECC779L,(-1L),0xB6ECC779L,0x1DF96F49L,0x1DF96F49L,0xB6ECC779L,(-1L),0xB6ECC779L,0x1DF96F49L};
                        int32_t l_1077 = 0xEE88659DL;
                        int32_t l_1081 = 0x52AF8BC0L;
                        int32_t l_1083 = 0xD157FB05L;
                        int32_t l_1084 = 0x9EED82A9L;
                        int i;
                        (*l_846) = (((void*)0 != l_1030[1][5][0]) == (safe_add_func_uint64_t_u_u((((safe_lshift_func_int16_t_s_u(g_304, (((safe_add_func_int8_t_s_s((0UL != l_979), (safe_mod_func_uint64_t_u_u((((l_1039 < (safe_add_func_int64_t_s_s(l_978, 0x340F37D1DD3E04BCLL))) <= (p_48 ^ (*g_572))) , p_49), l_1042)))) , 0x58DB3AADL) , 1UL))) , l_1043) == &g_701), l_922.f2)));
                        (*l_846) &= (safe_div_func_uint8_t_u_u((p_48 < ((**g_406) , 9L)), ((((l_1061 = ((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((((l_1056 == (void*)0) , ((*l_1060) = (l_1027.f0 & (((safe_unary_minus_func_int16_t_s(((((*l_942) = (safe_div_func_int64_t_s_s((*g_572), (p_48 && p_49)))) <= 0x2705L) >= p_48))) , p_48) <= g_11[3][0][0])))) > l_977), 4)), l_940.f2)), l_1042)), p_48)) <= 1UL), p_48)) , p_48)) != p_48) == 0xFFL) || 0x4C7912E3L)));
                        l_1021 |= (safe_div_func_int8_t_s_s(((g_1065 = ((*l_1064) = &l_1060)) != (void*)0), (((*l_1071) = (0x4C6EF86AL == (((safe_add_func_uint32_t_u_u(p_48, ((((*g_701) == (void*)0) ^ (safe_add_func_uint16_t_u_u((((*l_1070) = &g_571) != &g_571), 0x6449L))) >= g_386.f1))) , l_994) | l_922.f5))) , l_940.f9)));
                        g_1086--;
                    }
                    else
                    {
                        int8_t l_1089 = 0xFCL;
                        int32_t l_1090[6][2][9] = {{{0x0686A1EFL,0xF35CFBA6L,0x84D18E3CL,(-2L),(-1L),(-10L),(-1L),(-2L),0x84D18E3CL},{0x0686A1EFL,0x0686A1EFL,(-2L),(-10L),0xF600DF6AL,(-5L),0x2F99C3A8L,(-10L),(-8L)}},{{0xB3BC683DL,0x6B42F031L,8L,0x4110C914L,0x3BD78D54L,0xF35CFBA6L,(-2L),0x0686A1EFL,(-1L)},{(-10L),(-7L),(-2L),0x18167891L,1L,0xF600DF6AL,0x90231B1AL,8L,0x90231B1AL}},{{0x4110C914L,1L,0x84D18E3CL,0x84D18E3CL,1L,0x4110C914L,7L,0xB882DB53L,0x85A019E4L},{0xB882DB53L,0x90231B1AL,6L,(-8L),0x3BD78D54L,0xF7ED31BBL,(-2L),0xB3BC683DL,(-1L)}},{{(-10L),(-5L),0x3BD78D54L,(-1L),0xF600DF6AL,(-1L),7L,0xF35CFBA6L,0xB3BC683DL},{7L,0xB3BC683DL,(-7L),0x90231B1AL,(-1L),(-1L),0x90231B1AL,(-7L),0xB3BC683DL}},{{0x3BD78D54L,(-10L),0x90231B1AL,0x85A019E4L,0x4110C914L,0x2F99C3A8L,(-2L),(-1L),(-1L)},{(-2L),0xF600DF6AL,0x18167891L,(-1L),(-1L),(-2L),0x2F99C3A8L,0x4110C914L,0x85A019E4L}},{{0xF7ED31BBL,(-10L),7L,0xB3BC683DL,(-7L),0x90231B1AL,(-1L),(-1L),0x90231B1AL},{0xF35CFBA6L,0xB3BC683DL,0xF7ED31BBL,0xB3BC683DL,0xF35CFBA6L,7L,(-1L),0xF600DF6AL,(-1L)}}};
                        int i, j, k;
                        l_1092--;
                        l_979 &= (l_1095 == (void*)0);
                    }
                    if (p_49)
                        continue;
                }
                return p_49;
            }
        }
    }
    return p_48;
}







static int32_t func_51(int16_t p_52, uint8_t p_53, uint64_t p_54)
{
    struct S0 l_802 = {0x0553L,0xA6F0B75EL,0UL,0x80C4L,-5L,0x66AFL,65532UL,4L,0x6D334704L,0x92F4L};
    int32_t *l_805 = (void*)0;
    int32_t **l_806 = &l_805;
    int32_t l_815 = 0xD969A0D8L;
    uint32_t l_816 = 1UL;
    int8_t l_817 = 0xF5L;
    int32_t *l_818 = &g_89[4][2][1];
    uint16_t ***l_825 = &g_245;
    uint32_t *l_826 = &l_816;
    uint8_t *l_828 = (void*)0;
    uint8_t **l_827 = &l_828;
    uint8_t ***l_831[5][4][3] = {{{(void*)0,&g_829[1],&l_827},{&g_829[1],&g_829[3],&l_827},{&l_827,&g_829[3],&l_827},{&g_829[1],&g_829[1],&l_827}},{{(void*)0,&g_829[3],&l_827},{&g_829[3],(void*)0,&g_829[0]},{&l_827,&g_829[1],&l_827},{&g_829[3],&g_829[0],&g_829[0]}},{{&l_827,&g_829[3],&l_827},{&l_827,&g_829[3],&g_829[1]},{&l_827,&g_829[3],(void*)0},{&g_829[3],&l_827,&l_827}},{{&l_827,&g_829[3],&l_827},{&g_829[0],&g_829[3],(void*)0},{&l_827,&g_829[3],&l_827},{(void*)0,&g_829[0],&l_827}},{{&l_827,&g_829[1],(void*)0},{(void*)0,(void*)0,&g_829[1]},{&l_827,&g_829[3],&l_827},{&g_829[0],(void*)0,&g_829[0]}}};
    uint8_t **l_832 = &g_830;
    struct S1 l_840 = {-8L,2359,751,3060,14,375,387,0,0,36};
    int8_t **l_841 = &g_206;
    int8_t **l_842 = &g_206;
    int8_t *l_843 = &g_44[4];
    const uint8_t l_844 = 1UL;
    int i, j, k;
    (*l_818) |= (p_53 , (safe_add_func_int16_t_s_s((0x02L ^ (0x95150844L == (65535UL != (safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_s((l_802 , (safe_add_func_uint8_t_u_u((((((*l_806) = l_805) == (void*)0) ^ (~((0x08AB9B540E42D561LL | (safe_add_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(((*g_572) = (safe_unary_minus_func_uint8_t_u((safe_mod_func_int32_t_s_s((g_386 , 0xB7CC7147L), 0x9DCD8D25L))))), g_491[1][0][1].f6)), l_815))) || l_816))) < g_491[1][0][1].f0), 0x77L))), p_52))))))), l_817)));
    (*l_818) = ((safe_lshift_func_uint16_t_u_u(p_53, ((safe_add_func_uint64_t_u_u(((((*l_843) = (((((l_841 = ((safe_mod_func_uint64_t_u_u(((&g_245 != l_825) <= (((**g_406) = ((((*l_826) = 0x5E47493EL) , l_827) != (l_832 = g_829[3]))) >= (l_802 , 4294967288UL))), 0x5F9367D30BCC1E2BLL)) , (*g_538))) != l_842) >= 4UL) == g_44[4]) <= p_54)) > l_844) ^ (*l_818)), g_491[1][0][1].f7)) != p_54))) ^ p_52);
    return g_163;
}







static uint32_t func_61(uint32_t p_62, const uint32_t p_63, struct S1 p_64)
{
    const int64_t l_657 = 0x208AD7034AFB18ACLL;
    int32_t *l_669 = (void*)0;
    int32_t *l_670 = (void*)0;
    int32_t *l_671 = &g_393[3];
    int32_t **l_672 = &l_671;
    struct S1 l_675 = {0xD6D1198CL,1692,-588,1846,1,3088,187,1,0,5};
    uint64_t *l_677[6][8][2] = {{{&g_491[1][0][1].f2,&g_300},{&g_491[1][0][1].f2,(void*)0},{&g_239,&g_491[1][0][1].f2},{(void*)0,&g_300},{&g_300,&g_300},{&g_239,&g_300},{&g_300,&g_300},{(void*)0,&g_491[1][0][1].f2}},{{&g_239,(void*)0},{&g_491[1][0][1].f2,&g_300},{&g_491[1][0][1].f2,(void*)0},{&g_239,&g_491[1][0][1].f2},{(void*)0,&g_300},{&g_300,&g_300},{&g_239,&g_300},{&g_300,&g_300}},{{(void*)0,&g_491[1][0][1].f2},{&g_239,(void*)0},{&g_491[1][0][1].f2,&g_300},{&g_491[1][0][1].f2,(void*)0},{&g_239,&g_491[1][0][1].f2},{(void*)0,&g_300},{&g_300,&g_300},{&g_239,&g_300}},{{&g_300,&g_300},{(void*)0,&g_491[1][0][1].f2},{&g_239,(void*)0},{&g_491[1][0][1].f2,&g_300},{&g_491[1][0][1].f2,(void*)0},{&g_239,&g_491[1][0][1].f2},{(void*)0,&g_300},{&g_300,&g_300}},{{&g_239,&g_300},{&g_300,&g_300},{(void*)0,&g_491[1][0][1].f2},{&g_239,(void*)0},{&g_491[1][0][1].f2,&g_300},{&g_491[1][0][1].f2,(void*)0},{&g_239,&g_491[1][0][1].f2},{(void*)0,&g_300}},{{&g_300,&g_300},{&g_239,&g_300},{&g_300,&g_300},{(void*)0,&g_491[1][0][1].f2},{&g_239,(void*)0},{&g_491[1][0][1].f2,&g_300},{&g_491[1][0][1].f2,(void*)0},{&g_239,&g_491[1][0][1].f2}}};
    uint64_t **l_676 = &l_677[3][3][0];
    struct S0 l_720 = {0x4B56L,4294967295UL,0x3C09388C2BFF2E29LL,0x9C47L,9L,4UL,0x264FL,0x1C040C68L,0L,0xEBDFL};
    uint16_t *l_727 = &g_491[1][0][1].f9;
    uint32_t **l_739 = (void*)0;
    uint8_t l_764 = 0x7BL;
    int8_t l_793 = 0xF9L;
    int i, j, k;
    return (**g_406);
}







static uint32_t func_65(int32_t p_66, uint16_t * const p_67, int32_t p_68, int8_t * p_69, uint32_t p_70)
{
    int32_t * const *l_125[3];
    int64_t l_161 = (-1L);
    uint64_t *l_238 = &g_239;
    int8_t l_241 = (-3L);
    int32_t *l_244[2];
    int64_t l_251[5] = {0x6802A82EBA1052F1LL,0x6802A82EBA1052F1LL,0x6802A82EBA1052F1LL,0x6802A82EBA1052F1LL,0x6802A82EBA1052F1LL};
    uint32_t l_367 = 1UL;
    int64_t l_435 = 0x4963C7D126F2204DLL;
    uint32_t l_471 = 0xA541A3FEL;
    uint32_t l_492 = 0UL;
    int8_t ****l_550 = &g_538;
    int64_t **l_575 = (void*)0;
    int32_t **l_655[10] = {&g_495[1][5],&g_495[1][5],&g_495[1][5],&g_495[1][5],&g_495[1][5],&g_495[1][5],&g_495[1][5],&g_495[1][5],&g_495[1][5],&g_495[1][5]};
    int i;
    for (i = 0; i < 3; i++)
        l_125[i] = &g_88;
    for (i = 0; i < 2; i++)
        l_244[i] = &g_89[4][2][1];
    for (p_70 = 0; (p_70 <= 2); p_70 += 1)
    {
        int32_t **l_123[7][10][3] = {{{&g_88,&g_88,(void*)0},{&g_88,(void*)0,&g_88},{&g_88,&g_88,(void*)0},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,(void*)0,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88}},{{&g_88,&g_88,(void*)0},{&g_88,(void*)0,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{(void*)0,&g_88,&g_88},{&g_88,&g_88,(void*)0},{(void*)0,&g_88,(void*)0},{&g_88,&g_88,(void*)0},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88}},{{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{(void*)0,&g_88,&g_88},{&g_88,&g_88,(void*)0},{(void*)0,&g_88,(void*)0},{&g_88,&g_88,(void*)0},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88}},{{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{(void*)0,&g_88,&g_88},{&g_88,&g_88,(void*)0},{(void*)0,&g_88,(void*)0},{&g_88,&g_88,(void*)0},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88}},{{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{(void*)0,&g_88,&g_88},{&g_88,&g_88,(void*)0},{(void*)0,&g_88,(void*)0},{&g_88,&g_88,(void*)0},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88}},{{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{(void*)0,&g_88,&g_88},{&g_88,&g_88,(void*)0},{(void*)0,&g_88,(void*)0},{&g_88,&g_88,(void*)0},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88}},{{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{(void*)0,&g_88,&g_88},{&g_88,&g_88,(void*)0},{(void*)0,&g_88,(void*)0},{&g_88,&g_88,(void*)0},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88}}};
        uint16_t *l_127[2];
        uint16_t **l_126[3][1][3] = {{{(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_127[1],(void*)0}},{{(void*)0,(void*)0,(void*)0}}};
        uint64_t l_158 = 0x2DE0BA1BEB000830LL;
        int8_t * const *l_207[2];
        uint32_t l_218[2][4][1] = {{{6UL},{4294967295UL},{6UL},{4294967295UL}},{{6UL},{4294967295UL},{6UL},{4294967295UL}}};
        int32_t l_247 = (-1L);
        struct S0 l_267 = {0xFD36L,4294967289UL,18446744073709551611UL,-1L,-1L,0xC9CDL,0x9512L,-1L,0xA972FD26L,1UL};
        uint32_t l_370 = 18446744073709551611UL;
        struct S1 l_453 = {-4L,1976,-574,134,4,3749,44,4,0,86};
        int32_t l_498 = 6L;
        int64_t l_508 = (-1L);
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_127[i] = &g_11[3][0][0];
        for (i = 0; i < 2; i++)
            l_207[i] = (void*)0;
        g_88 = &p_68;
        if ((*g_88))
        {
            int32_t *l_124 = (void*)0;
            int32_t l_135 = 0xF3CC42DBL;
            int32_t l_136[5][1];
            int32_t l_217[2];
            uint64_t *l_237[5][7][4] = {{{&l_158,(void*)0,(void*)0,&l_158},{&l_158,(void*)0,(void*)0,(void*)0},{(void*)0,&l_158,(void*)0,&l_158},{&l_158,&l_158,(void*)0,&l_158},{&l_158,&l_158,&l_158,(void*)0},{&l_158,(void*)0,(void*)0,&l_158},{&l_158,(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_158,(void*)0,&l_158},{&l_158,&l_158,(void*)0,&l_158},{&l_158,&l_158,&l_158,(void*)0},{&l_158,(void*)0,(void*)0,&l_158},{&l_158,(void*)0,(void*)0,(void*)0},{(void*)0,&l_158,(void*)0,&l_158},{&l_158,&l_158,(void*)0,&l_158}},{{&l_158,&l_158,&l_158,(void*)0},{&l_158,(void*)0,(void*)0,&l_158},{&l_158,(void*)0,(void*)0,(void*)0},{(void*)0,&l_158,(void*)0,&l_158},{&l_158,&l_158,(void*)0,&l_158},{&l_158,&l_158,&l_158,(void*)0},{&l_158,(void*)0,(void*)0,&l_158}},{{&l_158,(void*)0,(void*)0,(void*)0},{(void*)0,&l_158,(void*)0,&l_158},{&l_158,&l_158,(void*)0,&l_158},{&l_158,&l_158,&l_158,(void*)0},{&l_158,(void*)0,(void*)0,&l_158},{&l_158,(void*)0,(void*)0,(void*)0},{(void*)0,&l_158,(void*)0,&l_158}},{{&l_158,&l_158,(void*)0,&l_158},{&l_158,&l_158,&l_158,(void*)0},{&l_158,(void*)0,(void*)0,&l_158},{&l_158,(void*)0,(void*)0,(void*)0},{(void*)0,&l_158,(void*)0,&l_158},{&l_158,&l_158,(void*)0,&l_158},{&l_158,&l_158,&l_158,(void*)0}}};
            uint32_t ** const l_360 = (void*)0;
            int8_t ***l_467 = (void*)0;
            int8_t * const **l_485 = &g_205;
            int8_t * const ***l_484[8][4][1];
            uint32_t l_487 = 18446744073709551608UL;
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_136[i][j] = 0x238DAD2CL;
            }
            for (i = 0; i < 2; i++)
                l_217[i] = (-1L);
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_484[i][j][k] = &l_485;
                }
            }
            l_124 = (void*)0;
            (*g_88) = (&g_88 == l_125[1]);
            for (p_66 = 0; (p_66 <= 2); p_66 += 1)
            {
                uint16_t **l_129[4];
                int32_t l_132 = 0x1286CDD3L;
                int32_t l_133 = 0L;
                int32_t l_134 = 0xEE6FD24EL;
                int32_t l_139[5][4][2] = {{{0x4E4574D6L,0x5B7CE160L},{0x5B7CE160L,0x2B7FD2DEL},{(-10L),0x6FDDE1F1L},{0x4E4574D6L,(-10L)}},{{0x6FDDE1F1L,0x2B7FD2DEL},{0x6FDDE1F1L,(-10L)},{0x4E4574D6L,0x6FDDE1F1L},{(-10L),0x2B7FD2DEL}},{{0x5B7CE160L,0x5B7CE160L},{0x4E4574D6L,0x5B7CE160L},{0x5B7CE160L,0x2B7FD2DEL},{(-10L),0x6FDDE1F1L}},{{0x4E4574D6L,(-10L)},{0x6FDDE1F1L,0x2B7FD2DEL},{0x6FDDE1F1L,(-10L)},{0x4E4574D6L,0x6FDDE1F1L}},{{(-10L),0x2B7FD2DEL},{0x5B7CE160L,0x5B7CE160L},{0x4E4574D6L,0x5B7CE160L},{0x5B7CE160L,0x2B7FD2DEL}}};
                uint32_t *l_159[8][1][7] = {{{&g_160,(void*)0,(void*)0,(void*)0,&g_160,(void*)0,&g_160}},{{&g_160,&g_160,&g_160,&g_160,&g_160,&g_160,&g_160}},{{&g_160,&g_160,(void*)0,&g_160,&g_160,&g_160,(void*)0}},{{&g_160,&g_160,&g_160,&g_160,&g_160,&g_160,&g_160}},{{(void*)0,(void*)0,(void*)0,(void*)0,&g_160,&g_160,(void*)0}},{{&g_160,&g_160,&g_160,&g_160,&g_160,&g_160,&g_160}},{{&g_160,(void*)0,&g_160,&g_160,&g_160,&g_160,(void*)0}},{{&g_160,&g_160,&g_160,&g_160,&g_160,&g_160,&g_160}}};
                uint64_t *l_162[6];
                int32_t *l_164[10];
                int64_t l_171 = 6L;
                uint64_t **l_240[3];
                uint32_t l_350 = 0x56423308L;
                int32_t l_368 = (-5L);
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_129[i] = (void*)0;
                for (i = 0; i < 6; i++)
                    l_162[i] = &l_158;
                for (i = 0; i < 10; i++)
                    l_164[i] = (void*)0;
                for (i = 0; i < 3; i++)
                    l_240[i] = &l_162[3];
                for (p_68 = 2; (p_68 >= 0); p_68 -= 1)
                {
                    uint16_t ***l_128[7][2][7] = {{{&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2],(void*)0,&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2]},{&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2],(void*)0,&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2]}},{{&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2],(void*)0,&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2]},{&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2],(void*)0,&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2]}},{{&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2],(void*)0,&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2]},{&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2],(void*)0,&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2]}},{{&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2],(void*)0,&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2]},{&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2],(void*)0,&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2]}},{{&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2],(void*)0,&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2]},{&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2],(void*)0,&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2]}},{{&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2],(void*)0,&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2]},{&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2],(void*)0,&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2]}},{{&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2],(void*)0,&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2]},{&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2],(void*)0,&l_126[1][0][2],&l_126[1][0][1],&l_126[1][0][2]}}};
                    int32_t l_130 = 0x656B1269L;
                    int32_t l_140 = (-3L);
                    int32_t l_141 = (-4L);
                    int32_t l_142 = 0xCD150227L;
                    int i, j, k;
                    l_129[1] = l_126[1][0][2];
                    for (g_41 = 0; (g_41 <= 1); g_41 += 1)
                    {
                        int32_t l_131 = 2L;
                        int32_t l_137 = 3L;
                        int32_t l_138[1];
                        uint32_t l_143 = 18446744073709551607UL;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_138[i] = 0L;
                        l_143--;
                    }
                }
                if ((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((0x7CF922F5L <= (0x0BL > p_66)) <= ((g_163 = (((*g_88) = (*g_88)) < (safe_lshift_func_int8_t_s_s(((safe_add_func_int64_t_s_s(p_70, ((((((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u((((g_44[4] && (p_66 != (l_161 = l_158))) , 0x6318243B38C434FALL) & g_11[6][1][0]), g_89[4][2][1])), (*p_69))) != 4L) | p_66) , p_66) && p_66) , 0xEEC47D6E0D3A3AF2LL))) >= 0L), g_89[4][2][1])))) , p_66)), g_11[6][1][0])), (*p_69))))
                {
                    l_164[2] = &l_139[1][3][0];
                    (*g_88) ^= (p_70 ^ (safe_add_func_int16_t_s_s(6L, (safe_rshift_func_uint16_t_u_s(0x038CL, 15)))));
                }
                else
                {
                    uint64_t *l_174 = &l_158;
                    int8_t *l_202[10] = {&g_203,&g_203,&g_203,&g_203,&g_203,&g_203,&g_203,&g_203,&g_203,&g_203};
                    int32_t l_204 = 0xD14520FFL;
                    int32_t l_216[3];
                    uint32_t **l_221[8][9] = {{&l_159[5][0][5],(void*)0,(void*)0,&l_159[5][0][5],&l_159[5][0][5],&l_159[5][0][5],&l_159[5][0][5],&l_159[5][0][5],(void*)0},{&l_159[5][0][5],&l_159[5][0][5],&l_159[1][0][6],&l_159[5][0][5],(void*)0,&l_159[5][0][5],&l_159[1][0][6],&l_159[5][0][5],&l_159[5][0][5]},{(void*)0,&l_159[5][0][5],&l_159[5][0][5],&l_159[5][0][5],&l_159[5][0][5],&l_159[5][0][5],(void*)0,(void*)0,&l_159[5][0][5]},{&l_159[5][0][5],&l_159[5][0][5],&l_159[1][0][6],&l_159[5][0][5],&l_159[5][0][5],&l_159[6][0][3],&l_159[6][0][3],&l_159[5][0][5],&l_159[5][0][5]},{(void*)0,(void*)0,&l_159[5][0][5],&l_159[1][0][6],&l_159[5][0][5],&l_159[5][0][5],&l_159[1][0][6],&l_159[5][0][5],(void*)0},{(void*)0,&l_159[5][0][5],&l_159[1][0][6],&l_159[5][0][5],&l_159[5][0][5],&l_159[1][0][6],&l_159[5][0][5],(void*)0,&l_159[5][0][5]},{(void*)0,&l_159[6][0][3],&l_159[1][0][6],&l_159[1][0][6],&l_159[6][0][3],(void*)0,&l_159[5][0][5],(void*)0,&l_159[6][0][3]},{(void*)0,&l_159[5][0][5],&l_159[5][0][5],(void*)0,(void*)0,&l_159[6][0][3],(void*)0,(void*)0,&l_159[5][0][5]}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_216[i] = 1L;
                    if ((safe_sub_func_uint16_t_u_u(l_171, (((g_11[3][1][0] && (safe_sub_func_uint8_t_u_u((l_174 == &l_158), (safe_add_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s(((((((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((((safe_div_func_int16_t_s_s(((((*p_69) = (-9L)) && p_66) < (g_160 = ((+(((((+(~(safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((g_163 < ((safe_sub_func_int8_t_s_s(g_89[0][6][0], ((safe_mod_func_uint32_t_u_u(((g_203 = (safe_mul_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(p_70, 9L)) , g_11[6][1][0]), 0x3BL))) == 0x4FL), g_11[1][2][0])) && g_89[4][2][1]))) == 2L)), 0L)) < g_11[6][1][0]), 0xA1FCL)) != g_160), g_89[3][7][0])))) , g_89[4][2][1]) , 0xF0L) < l_204) , 7L)) , g_160))), g_11[1][1][0])) , l_204) , 1UL), p_66)), p_68)) != 0x9D3A4715L) , l_204) | p_68) , 7UL) == p_68), 0xA8L)) >= p_66) < 0UL), g_89[5][1][1]))))) , 0x8C19A545L) , (-1L)))))
                    {
                        l_207[0] = g_205;
                    }
                    else
                    {
                        (*g_88) = (*g_88);
                    }
                    if (((((void*)0 != p_67) && ((*l_174)++)) , (*g_88)))
                    {
                        uint32_t l_210 = 0UL;
                        l_210++;
                    }
                    else
                    {
                        uint64_t l_213 = 1UL;
                        uint32_t ***l_222 = &l_221[1][3];
                        l_213++;
                        ++l_218[0][0][0];
                        g_88 = &p_68;
                        (*l_222) = l_221[6][3];
                    }
                }
                if ((((((safe_rshift_func_int8_t_s_u((((safe_sub_func_uint32_t_u_u((g_160 = (((safe_mod_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(0xCF51B75F4EF1C2ACLL, 0x45477F4ADE73CA45LL)), ((safe_sub_func_int64_t_s_s(((l_241 = ((g_89[4][3][1] , l_237[4][0][2]) == (l_238 = l_238))) != (safe_div_func_uint8_t_u_u(g_44[4], (g_203 &= (*p_69))))), p_68)) ^ ((void*)0 != l_244[0])))), g_239)) && (*g_88)), p_66)) , g_245) == &p_67)), g_163)) | (*g_88)) | p_66), p_70)) == g_41) , l_247) >= g_239) & p_68))
                {
                    uint32_t l_248[3];
                    int32_t *l_249 = (void*)0;
                    struct S1 l_259 = {5L,-385,527,3726,2,2443,203,6,0,16};
                    uint8_t l_265 = 1UL;
                    int8_t **l_281 = (void*)0;
                    int8_t ***l_280 = &l_281;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_248[i] = 0x5F7CFA7BL;
                    if (l_248[2])
                    {
                        uint32_t *l_250 = &l_248[1];
                        uint8_t *l_260 = &g_261;
                        int32_t l_264 = 2L;
                        (*g_88) = 0x0045B9DDL;
                        (*g_88) = (*g_88);
                        l_265 |= (l_249 != (((((*l_250) = 18446744073709551608UL) , l_251[1]) , (((0UL >= ((g_44[5] || p_66) > (safe_sub_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u(((+(safe_lshift_func_int16_t_s_s((l_259 , (((*l_260) = p_68) || (--(*l_260)))), 12))) & ((((*g_88) & 4294967286UL) , l_264) <= 0xEA6511E1L)), p_66)) || p_68) | 0x28183C4DL), (-1L))))) , g_44[1]) & 0x70AD77E3L)) , &g_89[2][2][2]));
                    }
                    else
                    {
                        int16_t l_269 = (-5L);
                        int32_t l_270 = 0x6F2A4D9EL;
                        uint16_t l_271 = 0x8F57L;
                        p_68 = ((+(l_267 , (~g_11[6][1][0]))) == g_160);
                        --l_271;
                    }
                    (*l_280) = ((safe_sub_func_uint8_t_u_u((!(safe_div_func_uint32_t_u_u(1UL, 1UL))), (*p_69))) , (g_279[2][4] = &g_206));
                    for (l_133 = 0; (l_133 <= 2); l_133 += 1)
                    {
                        int32_t ***l_282 = &l_123[5][5][2];
                        (*l_282) = &g_88;
                    }
                }
                else
                {
                    int64_t l_312 = 0xB72610C518717FDFLL;
                    int32_t l_351 = 0x72211FA1L;
                    int32_t l_352 = 0L;
                    int32_t l_353 = (-9L);
                    int32_t l_354 = 0L;
                    uint32_t **l_361 = &l_159[3][0][3];
                    uint32_t ***l_362 = &l_361;
                    int32_t l_369[2][2][5];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 5; k++)
                                l_369[i][j][k] = 0x0423EBE9L;
                        }
                    }
                    for (p_68 = 0; (p_68 <= 2); p_68 += 1)
                    {
                        const int32_t l_305 = 1L;
                        int32_t l_306 = 0L;
                        int i, j, k;
                        l_306 = ((p_66 & (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(((((safe_sub_func_uint64_t_u_u((+((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((((g_160 = ((g_89[p_66][p_68][p_66] &= ((*p_69) <= (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((void*)0 != &g_239) > (((g_300 &= g_160) , ((safe_sub_func_int32_t_s_s(((!(g_41 |= p_66)) != (p_68 || 0xDF271113L)), (*g_88))) < 0L)) <= g_11[6][1][0])), 3)), 0xB3L)))) < 1UL)) , (*p_69)) , p_70), p_68)) <= g_304), 4)) | l_305)), 0x190CC3448BB72D57LL)) >= l_217[1]) <= p_68) < 0x2E94565B5372B352LL), (*p_69))), p_68))) != g_304);
                        return g_44[1];
                    }
                    if (((~(p_66 >= ((p_70 <= 0L) , (safe_add_func_uint8_t_u_u(((void*)0 == &p_69), (g_304 = ((safe_mul_func_uint16_t_u_u(l_312, ((void*)0 == &p_67))) != ((+g_44[5]) && 0x7AL)))))))) != l_312))
                    {
                        int32_t l_318 = (-5L);
                        uint16_t l_336[8];
                        int64_t l_338 = (-1L);
                        int i;
                        for (i = 0; i < 8; i++)
                            l_336[i] = 0x1810L;
                        (*g_88) = (*g_88);
                        (*g_88) = (safe_rshift_func_uint16_t_u_u((1L || (safe_sub_func_int16_t_s_s(0xD00BL, (g_41 = (((l_318 <= (!g_203)) & (p_70 , p_68)) >= (safe_rshift_func_uint8_t_u_u((((g_300++) <= (safe_add_func_uint64_t_u_u((g_160 > 1UL), ((safe_add_func_int64_t_s_s((safe_add_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s((safe_mod_func_int64_t_s_s(((((safe_lshift_func_int8_t_s_u((*p_69), 0)) && l_318) && l_336[0]) || 0x9AE9L), 0xB9916F114F86CB50LL)), p_68)) , 7UL), g_44[7])), g_239)) <= g_337)))) == 0xEF88L), 0))))))), p_70));
                        l_338 &= (*g_88);
                    }
                    else
                    {
                        int8_t l_341 = 0xF6L;
                        l_351 ^= ((((4294967286UL < (safe_lshift_func_int16_t_s_s(l_341, 5))) , 0L) ^ ((1L <= p_66) | (safe_mod_func_int64_t_s_s(((((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((&g_160 == &g_160), 0)), ((((l_341 , 0x85DDD064L) <= l_350) || 0xAB4369E4L) , (*p_69)))), 0xE8A9228AL)) , (*g_88)) != (*g_88)) >= 0xD3L), g_44[2])))) < 0xFAL);
                        if ((*g_88))
                            continue;
                        if ((*g_88))
                            break;
                        g_355++;
                    }
                    (*g_88) = ((((*p_69) = (safe_mod_func_uint64_t_u_u((((l_369[1][0][2] ^= ((((l_360 != ((*l_362) = l_361)) != (l_368 = (((safe_lshift_func_int8_t_s_s(0x94L, 4)) >= (((l_352 , p_68) < ((p_68 || (8L ^ l_367)) >= (g_41 >= 0x450EE63D07BD23E6LL))) <= g_11[5][0][0])) ^ l_352))) && p_66) || l_351)) & 0x75FF6982L) == g_41), l_370))) || p_70) > 1L);
                }
                return p_66;
            }
            for (l_267.f2 = 0; (l_267.f2 <= 3); l_267.f2 += 1)
            {
                int32_t l_371 = 0L;
                int32_t l_372 = 0xE1FB8ACFL;
                int32_t l_373 = 1L;
                int32_t l_374 = 0xC055AC6CL;
                int32_t l_375[1];
                uint32_t *l_383 = &l_367;
                uint8_t *l_422 = &g_261;
                uint8_t l_443 = 0xE3L;
                int32_t ***l_486 = &l_123[6][8][0];
                int i;
                for (i = 0; i < 1; i++)
                    l_375[i] = 0x0E4AE98DL;
                if (p_70)
                    break;
                g_376[2][2][1]++;
                g_89[4][2][1] |= (safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((((*l_383) = 0xCB143FF0L) , ((g_41 &= 0x49F4L) == p_68)) && (g_393[3] = (l_374 >= ((safe_div_func_uint64_t_u_u((((g_386 , (safe_sub_func_int32_t_s_s((safe_mod_func_int64_t_s_s(((void*)0 != &l_136[4][0]), p_66)), (safe_sub_func_uint16_t_u_u((&g_89[2][3][1] != (void*)0), p_68))))) >= 0x319FL) && p_68), g_11[6][1][0])) >= p_68)))), g_386.f2)), g_300));
                if (((safe_sub_func_int8_t_s_s(0L, (safe_sub_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_add_func_int32_t_s_s(((safe_mod_func_int64_t_s_s((((*l_422) = ((g_406 == &g_407) ^ (safe_rshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((((safe_add_func_int32_t_s_s((((*p_69) | (p_66 || ((safe_mul_func_uint16_t_u_u(g_386.f3, (safe_add_func_uint32_t_u_u((((g_393[3] >= (safe_mul_func_uint8_t_u_u(g_355, (*p_69)))) | 0x83B95BE7L) | 248UL), l_374)))) > (**g_406)))) , l_372), (*g_88))) , l_373) | g_11[6][1][0]), (*g_407))), g_386.f9)), 3)))) , p_70), p_66)) | 18446744073709551613UL), l_375[0])), 1UL)), g_355)) > g_386.f3) ^ 0x2B15L), (*g_88))))) && 0UL))
                {
                    int32_t l_423 = 0x6DCCC2DDL;
                    int32_t l_424 = 0xFF78F456L;
                    int32_t l_425 = 0xB149ED41L;
                    int32_t l_430 = (-1L);
                    int32_t l_432 = 0xECA27DCEL;
                    int32_t l_433 = 0xF1308D63L;
                    int32_t l_437 = 0x89420FA2L;
                    int32_t l_438 = 0x71490678L;
                    int32_t l_439 = 0xF1230A89L;
                    int32_t l_440[6][8][4] = {{{(-3L),0x05064405L,0L,(-1L)},{0x73DBD5D5L,7L,0L,7L},{(-3L),(-1L),1L,0x795A7F01L},{(-1L),(-1L),0x65436B7AL,7L},{0x65436B7AL,7L,(-3L),(-1L)},{0x65436B7AL,0x05064405L,0x65436B7AL,4L},{(-1L),(-1L),1L,4L},{(-3L),0x05064405L,0L,(-1L)}},{{0x73DBD5D5L,7L,0L,7L},{(-3L),(-1L),1L,0x795A7F01L},{(-1L),(-1L),0x65436B7AL,7L},{0x65436B7AL,7L,(-3L),(-1L)},{0x65436B7AL,0x05064405L,0x65436B7AL,4L},{(-1L),(-1L),1L,4L},{(-3L),0x05064405L,0L,(-1L)},{0x73DBD5D5L,7L,0L,7L}},{{(-3L),(-1L),1L,0x795A7F01L},{(-1L),(-1L),0x65436B7AL,7L},{0x65436B7AL,7L,(-3L),(-1L)},{0x65436B7AL,0x05064405L,0x65436B7AL,4L},{(-1L),(-1L),1L,4L},{(-3L),0x05064405L,0L,(-1L)},{0x73DBD5D5L,7L,0L,7L},{(-3L),(-1L),1L,0x795A7F01L}},{{(-1L),(-1L),0x65436B7AL,7L},{0x65436B7AL,7L,(-3L),(-1L)},{0x65436B7AL,0x05064405L,0x65436B7AL,4L},{(-1L),(-1L),1L,4L},{(-3L),0x05064405L,0L,(-1L)},{0x73DBD5D5L,7L,0L,7L},{(-3L),(-1L),1L,0x795A7F01L},{(-1L),(-1L),0x65436B7AL,7L}},{{0x65436B7AL,7L,(-3L),(-1L)},{0x65436B7AL,0x05064405L,0x65436B7AL,4L},{(-1L),(-1L),1L,4L},{(-3L),0x05064405L,0L,(-1L)},{0x73DBD5D5L,7L,0L,7L},{(-3L),(-1L),1L,0x795A7F01L},{(-1L),(-1L),0x65436B7AL,(-1L)},{0x73DBD5D5L,(-1L),0L,4L}},{{0x73DBD5D5L,(-1L),0x73DBD5D5L,0x795A7F01L},{0x65436B7AL,4L,0L,0x795A7F01L},{0L,(-1L),(-3L),4L},{1L,(-1L),(-3L),(-1L)},{0L,(-1L),0L,0x05064405L},{0x65436B7AL,(-1L),0x73DBD5D5L,(-1L)},{0x73DBD5D5L,(-1L),0L,4L},{0x73DBD5D5L,(-1L),0x73DBD5D5L,0x795A7F01L}}};
                    int i, j, k;
                    l_423 ^= (*g_88);
                    for (g_160 = 0; (g_160 <= 3); g_160 += 1)
                    {
                        uint64_t l_426 = 18446744073709551615UL;
                        int32_t l_429 = 0xAC56BDEBL;
                        int32_t l_431 = 0x692BACF9L;
                        int32_t l_434 = 3L;
                        int32_t l_436 = 0xCD79463AL;
                        int32_t l_441 = 0xB4506EF2L;
                        int32_t l_442 = 0x9EE0F6D9L;
                        --l_426;
                        l_443--;
                        g_89[1][1][1] ^= (safe_mul_func_int8_t_s_s((0xBDF965B165BED232LL == ((0x8CL | (*p_69)) >= ((safe_add_func_uint32_t_u_u((l_443 == (((*l_422) = (safe_unary_minus_func_uint16_t_u(l_440[3][5][1]))) || (l_375[0] |= l_425))), (((safe_mul_func_int8_t_s_s((l_453 , ((((safe_lshift_func_int8_t_s_u((l_436 ^= (l_434 |= (safe_sub_func_uint8_t_u_u((l_371 ^ ((safe_rshift_func_uint16_t_u_u((0x8C479AD8L <= p_68), 1)) | (-10L))), g_393[0])))), 5)) >= 0xEE772A8FL) && 0x17DAC6D3L) & 0L)), 0x5FL)) == g_376[1][4][1]) >= p_68))) > g_239))), (*p_69)));
                    }
                }
                else
                {
                    int8_t ***l_465[10][7] = {{&g_279[1][3],&g_279[2][4],&g_279[1][3],&g_279[2][1],&g_279[1][3],&g_279[2][1],&g_279[1][3]},{&g_279[1][3],&g_279[1][0],&g_279[0][3],&g_279[2][4],&g_279[0][2],&g_279[0][2],&g_279[2][4]},{&g_279[2][2],&g_279[2][4],&g_279[2][2],&g_279[2][1],(void*)0,&g_279[2][4],(void*)0},{&g_279[1][0],&g_279[2][4],&g_279[2][4],&g_279[1][3],&g_279[0][2],&g_279[2][4],&g_279[2][4]},{&g_279[1][3],&g_279[2][4],&g_279[2][3],&g_279[2][4],&g_279[1][3],&g_279[2][4],&g_279[2][3]},{&g_279[2][4],&g_279[1][0],&g_279[2][4],&g_279[2][4],&g_279[1][3],&g_279[0][2],&g_279[2][4]},{(void*)0,&g_279[2][1],&g_279[2][2],&g_279[2][4],&g_279[2][2],&g_279[2][1],(void*)0},{&g_279[2][4],&g_279[2][4],&g_279[2][4],&g_279[1][3],&g_279[1][0],&g_279[0][3],&g_279[2][4]},{&g_279[1][3],&g_279[2][1],&g_279[1][3],&g_279[2][4],&g_279[1][3],&g_279[2][4],&g_279[1][3]},{&g_279[1][0],&g_279[1][0],&g_279[2][4],&g_279[2][4],&g_279[2][4],&g_279[0][2],&g_279[2][4]}};
                    int8_t ****l_466 = &l_465[0][4];
                    int8_t ****l_468 = &l_467;
                    int16_t *l_469 = &l_267.f4;
                    int32_t l_470[10] = {0x238CE6CAL,0x238CE6CAL,0x238CE6CAL,0x238CE6CAL,0x238CE6CAL,0x238CE6CAL,0x238CE6CAL,0x238CE6CAL,0x238CE6CAL,0x238CE6CAL};
                    int32_t *l_472 = (void*)0;
                    int i, j;
                    l_471 &= (((!(!(((&g_406 == g_462) , l_443) , (((*p_69) = 0x37L) & (safe_rshift_func_int16_t_s_s(((*l_469) = (((*l_466) = l_465[5][2]) == ((*l_468) = l_467))), ((l_470[8] ^= (*g_88)) ^ (*g_88)))))))) == (p_67 != (void*)0)) >= 0xEC93AEE8L);
                    for (g_355 = 0; (g_355 <= 1); g_355 += 1)
                    {
                        l_472 = &g_89[0][1][1];
                    }
                    for (l_373 = 0; (l_373 <= 6); l_373 += 1)
                    {
                        int i;
                        l_124 = (l_472 = &l_136[2][0]);
                        (*l_472) ^= 0x3E425D3FL;
                        return l_251[p_70];
                    }
                }
                for (l_241 = 3; (l_241 >= 0); l_241 -= 1)
                {
                    int64_t *l_476 = (void*)0;
                    uint8_t **l_479 = &l_422;
                    int32_t l_480[7][8] = {{0x285E5839L,(-9L),0x911F9931L,0x362C5EDAL,1L,0xC1A53482L,0L,5L},{(-2L),1L,0x757CEE99L,0x362C5EDAL,0x519D1A3FL,0x911F9931L,0x62F67A07L,0x911F9931L},{0L,0x519D1A3FL,0x7AC22FD7L,0x519D1A3FL,0L,0x0941A651L,1L,0xABCAA661L},{1L,0x911F9931L,0xC1A53482L,0xF55BD0DEL,0xABCAA661L,(-9L),(-1L),0x519D1A3FL},{0x7AC22FD7L,0x757CEE99L,0xC1A53482L,1L,(-7L),1L,1L,(-7L)},{0xABCAA661L,0x7AC22FD7L,0x7AC22FD7L,0xABCAA661L,0x362C5EDAL,5L,0x62F67A07L,(-1L)},{1L,0xC1A53482L,0x757CEE99L,0x7AC22FD7L,5L,0x35CFAB24L,0L,0xF55BD0DEL}};
                    int8_t * const **l_482[7][6][5] = {{{(void*)0,&g_205,(void*)0,&g_205,&l_207[1]},{&l_207[0],&l_207[0],(void*)0,&l_207[0],&l_207[0]},{(void*)0,&l_207[0],&g_205,&l_207[0],&g_205},{&g_205,&g_205,(void*)0,&l_207[0],&l_207[0]},{(void*)0,&l_207[0],&l_207[0],(void*)0,(void*)0},{(void*)0,&l_207[0],(void*)0,(void*)0,&l_207[0]}},{{(void*)0,&l_207[0],&l_207[1],&g_205,&g_205},{&l_207[0],&l_207[1],&l_207[0],(void*)0,&g_205},{&g_205,(void*)0,&g_205,(void*)0,&g_205},{&l_207[0],(void*)0,&l_207[1],&l_207[0],&l_207[1]},{(void*)0,(void*)0,&g_205,&g_205,&l_207[0]},{(void*)0,&l_207[0],&l_207[0],(void*)0,&l_207[1]}},{{(void*)0,&g_205,&l_207[1],&l_207[1],&g_205},{&l_207[1],&l_207[0],(void*)0,&g_205,&g_205},{&l_207[0],(void*)0,&l_207[0],&l_207[1],&g_205},{&l_207[0],(void*)0,&g_205,(void*)0,&l_207[0]},{&l_207[0],(void*)0,(void*)0,&g_205,(void*)0},{&l_207[1],&l_207[1],&g_205,&l_207[0],&l_207[0]}},{{(void*)0,&l_207[0],&l_207[0],(void*)0,(void*)0},{(void*)0,&l_207[0],(void*)0,(void*)0,&l_207[0]},{(void*)0,&l_207[0],&l_207[1],&g_205,&g_205},{&l_207[0],&l_207[1],&l_207[0],(void*)0,&g_205},{&g_205,(void*)0,&g_205,(void*)0,&g_205},{&l_207[0],(void*)0,&l_207[1],&l_207[0],&l_207[1]}},{{(void*)0,(void*)0,&g_205,&g_205,&l_207[0]},{(void*)0,&l_207[0],&l_207[0],(void*)0,&l_207[1]},{(void*)0,&g_205,&l_207[1],&l_207[1],&g_205},{&l_207[1],&l_207[0],(void*)0,&g_205,&g_205},{&l_207[0],(void*)0,&l_207[0],&l_207[1],&g_205},{&l_207[0],(void*)0,&g_205,(void*)0,&l_207[0]}},{{&l_207[0],(void*)0,(void*)0,&g_205,(void*)0},{&l_207[1],&l_207[1],&g_205,&l_207[0],&l_207[0]},{(void*)0,&l_207[0],&l_207[0],(void*)0,(void*)0},{(void*)0,&l_207[0],(void*)0,(void*)0,&l_207[0]},{(void*)0,&l_207[0],&l_207[1],&g_205,&g_205},{&l_207[0],&l_207[1],&l_207[0],(void*)0,&g_205}},{{&g_205,(void*)0,&g_205,(void*)0,&g_205},{&l_207[0],(void*)0,&l_207[1],&l_207[0],&l_207[1]},{(void*)0,(void*)0,&g_205,&g_205,&l_207[0]},{(void*)0,&l_207[0],&l_207[0],(void*)0,&l_207[1]},{(void*)0,&g_205,&l_207[1],&l_207[1],&g_205},{&l_207[1],&l_207[0],(void*)0,&l_207[1],&l_207[1]}}};
                    int8_t * const ***l_481 = &l_482[2][2][3];
                    int8_t * const ****l_483[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_483[i] = (void*)0;
                    (*g_88) = (safe_sub_func_int32_t_s_s((!(l_375[0] = (-4L))), (safe_sub_func_uint32_t_u_u((((-6L) & 0UL) != ((((&g_376[2][2][1] != ((*l_479) = &g_376[3][3][1])) , (l_480[5][3] , (void*)0)) != (l_484[2][1][0] = l_481)) < ((void*)0 == l_486))), p_68))));
                    l_487++;
                    for (g_163 = 0; (g_163 <= 3); g_163 += 1)
                    {
                        struct S0 *l_490 = &g_491[1][0][1];
                        l_490 = (void*)0;
                        l_492++;
                        g_495[1][5] = &l_136[4][0];
                        l_136[3][0] &= (safe_rshift_func_uint8_t_u_u(((((*l_238) = l_498) && (g_239 &= (safe_sub_func_int8_t_s_s(((((0xDBL & l_480[5][3]) , &l_207[0]) == &l_207[0]) ^ (safe_rshift_func_uint16_t_u_s(((*p_69) || ((safe_rshift_func_uint8_t_u_s((p_66 < (*g_407)), 0)) , ((safe_div_func_uint64_t_u_u((g_300 &= p_68), 18446744073709551608UL)) != 1L))), g_376[4][4][0]))), p_66)))) , p_70), p_68));
                    }
                }
            }
        }
        else
        {
            int32_t l_509 = 1L;
            int32_t l_510 = 0x5FC55A36L;
            int32_t l_511 = 0x7D1E15A6L;
            int32_t l_512 = 6L;
            int32_t l_513 = 0x3406B934L;
            uint8_t l_514 = 1UL;
            l_514++;
        }
        return p_68;
    }
    for (g_300 = 0; (g_300 < 53); g_300++)
    {
        uint8_t *l_528[5][4][4] = {{{&g_304,(void*)0,&g_261,(void*)0},{(void*)0,&g_376[2][2][1],&g_304,(void*)0},{&g_304,(void*)0,&g_376[2][2][1],&g_376[2][2][1]},{&g_376[2][2][1],&g_376[2][2][1],&g_261,&g_304}},{{&g_376[2][2][1],&g_376[2][2][1],&g_376[2][2][1],&g_376[2][2][1]},{&g_304,&g_304,&g_304,&g_376[2][2][1]},{(void*)0,&g_304,&g_261,&g_376[2][2][1]},{&g_304,&g_376[2][2][1],&g_376[2][2][1],&g_304}},{{&g_304,&g_376[2][2][1],&g_376[2][2][1],&g_376[2][2][1]},{&g_304,(void*)0,&g_261,(void*)0},{(void*)0,&g_376[2][2][1],&g_304,(void*)0},{&g_304,(void*)0,&g_376[2][2][1],&g_376[2][2][1]}},{{&g_376[2][2][1],&g_376[2][2][1],&g_261,&g_304},{&g_376[2][2][1],&g_376[2][2][1],&g_376[2][2][1],&g_376[2][2][1]},{&g_304,&g_304,&g_304,&g_376[2][2][1]},{(void*)0,&g_304,&g_261,&g_376[2][2][1]}},{{&g_304,&g_376[2][2][1],&g_376[2][2][1],&g_304},{&g_304,&g_376[2][2][1],&g_376[2][2][1],&g_376[2][2][1]},{&g_304,(void*)0,&g_261,(void*)0},{(void*)0,&g_376[2][2][1],&g_304,(void*)0}}};
        int32_t l_529 = 0L;
        int8_t ***l_531 = &g_279[2][1];
        int8_t ****l_530 = &l_531;
        int32_t l_536 = 1L;
        uint16_t *l_539 = &g_355;
        int8_t l_612 = 0x79L;
        int32_t * const *l_642[9][9][2] = {{{&g_88,&g_88},{&g_88,&l_244[0]},{&l_244[0],&g_495[1][0]},{&g_495[1][0],&l_244[0]},{&g_88,(void*)0},{&l_244[0],&g_495[1][5]},{(void*)0,&g_88},{&g_495[0][4],&g_88},{(void*)0,(void*)0}},{{&g_495[0][3],&l_244[0]},{&g_495[1][5],(void*)0},{&g_88,&g_88},{&g_495[0][3],&g_88},{&g_495[1][5],&l_244[0]},{&g_495[0][6],&l_244[0]},{&g_495[1][5],&g_88},{&g_495[0][3],&g_88},{&g_88,(void*)0}},{{&g_495[1][5],&l_244[0]},{&g_495[0][3],(void*)0},{(void*)0,&g_88},{&g_495[0][4],&g_88},{(void*)0,&g_495[1][5]},{&l_244[0],(void*)0},{&g_88,&l_244[0]},{&g_495[1][0],&g_495[1][0]},{&l_244[0],&l_244[0]}},{{&g_88,&g_88},{&g_88,&g_495[0][4]},{(void*)0,&g_88},{&g_495[1][3],&g_495[0][6]},{&g_88,&g_495[1][3]},{&g_88,&l_244[0]},{&g_88,&g_495[1][3]},{&g_88,&g_495[0][6]},{&g_495[1][3],&g_88}},{{(void*)0,&g_495[0][4]},{&g_88,&g_88},{&g_88,&l_244[0]},{&l_244[0],&g_495[1][0]},{&g_495[1][0],&l_244[0]},{&g_88,(void*)0},{&l_244[0],&g_495[1][5]},{(void*)0,&g_88},{&g_495[0][4],&g_88}},{{(void*)0,(void*)0},{&g_495[0][3],&l_244[0]},{&g_495[1][5],(void*)0},{&g_88,&g_88},{&g_495[0][3],&g_88},{&g_495[1][5],&l_244[0]},{&g_495[0][6],&l_244[0]},{&g_495[1][5],&g_88},{&g_495[0][3],&g_88}},{{&g_88,&g_495[0][3]},{&g_88,&l_244[0]},{&l_244[0],&g_88},{&g_495[0][3],&l_244[0]},{&g_495[1][5],&l_244[0]},{&g_495[1][5],&g_88},{&l_244[0],&g_88},{&l_244[0],&g_495[0][4]},{(void*)0,&g_495[1][3]}},{{&g_495[1][5],&g_88},{&g_495[1][0],&g_495[1][0]},{&g_495[0][6],&g_495[1][5]},{&g_88,(void*)0},{&l_244[0],&g_88},{(void*)0,&l_244[0]},{(void*)0,&g_495[1][5]},{(void*)0,&l_244[0]},{(void*)0,&g_88}},{{&l_244[0],(void*)0},{&g_88,&g_495[1][5]},{&g_495[0][6],&g_495[1][0]},{&g_495[1][0],&g_88},{&g_495[1][5],&g_495[1][3]},{(void*)0,&g_495[0][4]},{&l_244[0],&g_88},{&l_244[0],&g_88},{&g_495[1][5],&l_244[0]}}};
        int8_t ** const ***l_649[6][8][5] = {{{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647}},{{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647}},{{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647}},{{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647}},{{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647}},{{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647}}};
        int8_t ** const **l_650[2];
        int8_t *****l_651 = &l_550;
        uint32_t *l_654 = &g_160;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_650[i] = (void*)0;
    }
    g_495[1][5] = (g_88 = (void*)0);
    return p_70;
}







static struct S0 func_71(uint16_t * p_72, uint32_t p_73, uint64_t p_74, int16_t p_75)
{
    int32_t **l_90 = &g_88;
    int32_t l_93 = 0x731AC79CL;
    int32_t l_94 = 0x45F50B00L;
    int32_t l_107[9];
    int16_t l_112 = 0x8111L;
    int32_t l_114[1];
    int64_t l_115 = 0L;
    int64_t l_116 = 0x567E67BAFF3CA177LL;
    struct S0 l_120 = {65535UL,0xFE138955L,4UL,0L,0L,0x8BC7L,65528UL,0x3D79CAFDL,2L,65535UL};
    int i;
    for (i = 0; i < 9; i++)
        l_107[i] = (-1L);
    for (i = 0; i < 1; i++)
        l_114[i] = 1L;
    (*l_90) = g_88;
    (**l_90) = (-6L);
    for (p_73 = 0; (p_73 < 20); ++p_73)
    {
        int32_t *l_95 = &g_89[4][2][1];
        int32_t l_96 = 0L;
        int32_t *l_97 = &l_93;
        int32_t *l_98 = &l_94;
        int32_t *l_99 = &g_89[5][8][1];
        int32_t *l_100 = &g_89[4][2][1];
        int32_t *l_101 = &g_89[5][4][1];
        int32_t *l_102 = &l_93;
        int32_t *l_103 = &g_89[2][6][1];
        int32_t *l_104 = &g_89[4][2][1];
        int32_t *l_105 = &g_89[4][2][1];
        int32_t *l_106 = &l_93;
        int32_t *l_108 = &g_89[4][2][1];
        int32_t *l_109 = &g_89[3][7][2];
        int32_t *l_110 = &l_94;
        int32_t *l_111[5] = {&l_94,&l_94,&l_94,&l_94,&l_94};
        int32_t l_113 = 0x07E90836L;
        uint64_t l_117 = 18446744073709551615UL;
        int i;
        l_117++;
    }
    (*g_88) = (g_41 < g_89[3][5][2]);
    return l_120;
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
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_11[i][j][k], "g_11[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_41, "g_41", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_44[i], "g_44[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_89[i][j][k], "g_89[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_376[i][j][k], "g_376[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_386.f0, "g_386.f0", print_hash_value);
    transparent_crc(g_386.f1, "g_386.f1", print_hash_value);
    transparent_crc(g_386.f2, "g_386.f2", print_hash_value);
    transparent_crc(g_386.f3, "g_386.f3", print_hash_value);
    transparent_crc(g_386.f4, "g_386.f4", print_hash_value);
    transparent_crc(g_386.f5, "g_386.f5", print_hash_value);
    transparent_crc(g_386.f6, "g_386.f6", print_hash_value);
    transparent_crc(g_386.f7, "g_386.f7", print_hash_value);
    transparent_crc(g_386.f8, "g_386.f8", print_hash_value);
    transparent_crc(g_386.f9, "g_386.f9", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_393[i], "g_393[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_491[i][j][k].f0, "g_491[i][j][k].f0", print_hash_value);
                transparent_crc(g_491[i][j][k].f1, "g_491[i][j][k].f1", print_hash_value);
                transparent_crc(g_491[i][j][k].f2, "g_491[i][j][k].f2", print_hash_value);
                transparent_crc(g_491[i][j][k].f3, "g_491[i][j][k].f3", print_hash_value);
                transparent_crc(g_491[i][j][k].f4, "g_491[i][j][k].f4", print_hash_value);
                transparent_crc(g_491[i][j][k].f5, "g_491[i][j][k].f5", print_hash_value);
                transparent_crc(g_491[i][j][k].f6, "g_491[i][j][k].f6", print_hash_value);
                transparent_crc(g_491[i][j][k].f7, "g_491[i][j][k].f7", print_hash_value);
                transparent_crc(g_491[i][j][k].f8, "g_491[i][j][k].f8", print_hash_value);
                transparent_crc(g_491[i][j][k].f9, "g_491[i][j][k].f9", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_507, "g_507", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_692[i], "g_692[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_728, "g_728", print_hash_value);
    transparent_crc(g_756, "g_756", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_760[i][j], "g_760[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_911[i][j].f0, "g_911[i][j].f0", print_hash_value);
            transparent_crc(g_911[i][j].f1, "g_911[i][j].f1", print_hash_value);
            transparent_crc(g_911[i][j].f2, "g_911[i][j].f2", print_hash_value);
            transparent_crc(g_911[i][j].f3, "g_911[i][j].f3", print_hash_value);
            transparent_crc(g_911[i][j].f4, "g_911[i][j].f4", print_hash_value);
            transparent_crc(g_911[i][j].f5, "g_911[i][j].f5", print_hash_value);
            transparent_crc(g_911[i][j].f6, "g_911[i][j].f6", print_hash_value);
            transparent_crc(g_911[i][j].f7, "g_911[i][j].f7", print_hash_value);
            transparent_crc(g_911[i][j].f8, "g_911[i][j].f8", print_hash_value);
            transparent_crc(g_911[i][j].f9, "g_911[i][j].f9", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1001.f0, "g_1001.f0", print_hash_value);
    transparent_crc(g_1001.f1, "g_1001.f1", print_hash_value);
    transparent_crc(g_1001.f2, "g_1001.f2", print_hash_value);
    transparent_crc(g_1001.f3, "g_1001.f3", print_hash_value);
    transparent_crc(g_1001.f4, "g_1001.f4", print_hash_value);
    transparent_crc(g_1001.f5, "g_1001.f5", print_hash_value);
    transparent_crc(g_1001.f6, "g_1001.f6", print_hash_value);
    transparent_crc(g_1001.f7, "g_1001.f7", print_hash_value);
    transparent_crc(g_1001.f8, "g_1001.f8", print_hash_value);
    transparent_crc(g_1001.f9, "g_1001.f9", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    transparent_crc(g_1079, "g_1079", print_hash_value);
    transparent_crc(g_1086, "g_1086", print_hash_value);
    transparent_crc(g_1171, "g_1171", print_hash_value);
    transparent_crc(g_1282, "g_1282", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1304[i], "g_1304[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1317, "g_1317", print_hash_value);
    transparent_crc(g_1376, "g_1376", print_hash_value);
    transparent_crc(g_1424, "g_1424", print_hash_value);
    transparent_crc(g_1458.f0, "g_1458.f0", print_hash_value);
    transparent_crc(g_1458.f1, "g_1458.f1", print_hash_value);
    transparent_crc(g_1458.f2, "g_1458.f2", print_hash_value);
    transparent_crc(g_1458.f3, "g_1458.f3", print_hash_value);
    transparent_crc(g_1458.f4, "g_1458.f4", print_hash_value);
    transparent_crc(g_1458.f5, "g_1458.f5", print_hash_value);
    transparent_crc(g_1458.f6, "g_1458.f6", print_hash_value);
    transparent_crc(g_1458.f7, "g_1458.f7", print_hash_value);
    transparent_crc(g_1458.f8, "g_1458.f8", print_hash_value);
    transparent_crc(g_1458.f9, "g_1458.f9", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1513[i][j][k], "g_1513[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1601.f0, "g_1601.f0", print_hash_value);
    transparent_crc(g_1601.f1, "g_1601.f1", print_hash_value);
    transparent_crc(g_1601.f2, "g_1601.f2", print_hash_value);
    transparent_crc(g_1601.f3, "g_1601.f3", print_hash_value);
    transparent_crc(g_1601.f4, "g_1601.f4", print_hash_value);
    transparent_crc(g_1601.f5, "g_1601.f5", print_hash_value);
    transparent_crc(g_1601.f6, "g_1601.f6", print_hash_value);
    transparent_crc(g_1601.f7, "g_1601.f7", print_hash_value);
    transparent_crc(g_1601.f8, "g_1601.f8", print_hash_value);
    transparent_crc(g_1601.f9, "g_1601.f9", print_hash_value);
    transparent_crc(g_1619.f0, "g_1619.f0", print_hash_value);
    transparent_crc(g_1619.f1, "g_1619.f1", print_hash_value);
    transparent_crc(g_1619.f2, "g_1619.f2", print_hash_value);
    transparent_crc(g_1619.f3, "g_1619.f3", print_hash_value);
    transparent_crc(g_1619.f4, "g_1619.f4", print_hash_value);
    transparent_crc(g_1619.f5, "g_1619.f5", print_hash_value);
    transparent_crc(g_1619.f6, "g_1619.f6", print_hash_value);
    transparent_crc(g_1619.f7, "g_1619.f7", print_hash_value);
    transparent_crc(g_1619.f8, "g_1619.f8", print_hash_value);
    transparent_crc(g_1619.f9, "g_1619.f9", print_hash_value);
    transparent_crc(g_1708, "g_1708", print_hash_value);
    transparent_crc(g_1749, "g_1749", print_hash_value);
    transparent_crc(g_1796, "g_1796", print_hash_value);
    transparent_crc(g_1956, "g_1956", print_hash_value);
    transparent_crc(g_2008, "g_2008", print_hash_value);
    transparent_crc(g_2091, "g_2091", print_hash_value);
    transparent_crc(g_2119.f0, "g_2119.f0", print_hash_value);
    transparent_crc(g_2119.f1, "g_2119.f1", print_hash_value);
    transparent_crc(g_2119.f2, "g_2119.f2", print_hash_value);
    transparent_crc(g_2119.f3, "g_2119.f3", print_hash_value);
    transparent_crc(g_2119.f4, "g_2119.f4", print_hash_value);
    transparent_crc(g_2119.f5, "g_2119.f5", print_hash_value);
    transparent_crc(g_2119.f6, "g_2119.f6", print_hash_value);
    transparent_crc(g_2119.f7, "g_2119.f7", print_hash_value);
    transparent_crc(g_2119.f8, "g_2119.f8", print_hash_value);
    transparent_crc(g_2119.f9, "g_2119.f9", print_hash_value);
    transparent_crc(g_2122.f0, "g_2122.f0", print_hash_value);
    transparent_crc(g_2122.f1, "g_2122.f1", print_hash_value);
    transparent_crc(g_2122.f2, "g_2122.f2", print_hash_value);
    transparent_crc(g_2122.f3, "g_2122.f3", print_hash_value);
    transparent_crc(g_2122.f4, "g_2122.f4", print_hash_value);
    transparent_crc(g_2122.f5, "g_2122.f5", print_hash_value);
    transparent_crc(g_2122.f6, "g_2122.f6", print_hash_value);
    transparent_crc(g_2122.f7, "g_2122.f7", print_hash_value);
    transparent_crc(g_2122.f8, "g_2122.f8", print_hash_value);
    transparent_crc(g_2122.f9, "g_2122.f9", print_hash_value);
    transparent_crc(g_2142, "g_2142", print_hash_value);
    transparent_crc(g_2218.f0, "g_2218.f0", print_hash_value);
    transparent_crc(g_2218.f1, "g_2218.f1", print_hash_value);
    transparent_crc(g_2218.f2, "g_2218.f2", print_hash_value);
    transparent_crc(g_2218.f3, "g_2218.f3", print_hash_value);
    transparent_crc(g_2218.f4, "g_2218.f4", print_hash_value);
    transparent_crc(g_2218.f5, "g_2218.f5", print_hash_value);
    transparent_crc(g_2218.f6, "g_2218.f6", print_hash_value);
    transparent_crc(g_2218.f7, "g_2218.f7", print_hash_value);
    transparent_crc(g_2218.f8, "g_2218.f8", print_hash_value);
    transparent_crc(g_2218.f9, "g_2218.f9", print_hash_value);
    transparent_crc(g_2274, "g_2274", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
