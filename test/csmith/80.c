// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 161ED0EB
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
   const int8_t * f0;
   uint32_t f1;
   uint32_t f2;
};

union U1 {
   uint64_t f0;
   int8_t f1;
};

union U2 {
   uint8_t f0;
   signed f1 : 22;
   const int32_t f2;
};

union U3 {
   int16_t f0;
   int16_t f1;
   uint8_t f2;
   unsigned f3 : 22;
};


static int16_t g_2 = 1L;
static union U3 g_9 = {4L};
static int8_t g_11 = 0x93L;
static int8_t *g_10 = &g_11;
static int32_t g_16 = 0x8331C587L;
static union U2 g_47[2] = {{0xBEL},{0xBEL}};
static int32_t *g_83[10] = {&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16};
static uint64_t g_85 = 0x03168F1D39FA4EE4LL;
static int64_t g_88 = 1L;
static int8_t g_97 = (-5L);
static int32_t * const g_98 = &g_16;
static uint16_t g_99 = 65528UL;
static uint32_t g_100 = 0xC1773A67L;
static int32_t g_101 = 1L;
static union U1 g_104 = {0xFE16D896CD2A541ELL};
static union U1 * const g_103[6][5][6] = {{{&g_104,(void*)0,&g_104,&g_104,(void*)0,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,(void*)0,&g_104,&g_104,(void*)0,&g_104},{&g_104,(void*)0,&g_104,&g_104,(void*)0,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104}},{{&g_104,(void*)0,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104}},{{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104}},{{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104}},{{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104}},{{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104}}};
static uint64_t g_107[4][3] = {{7UL,7UL,7UL},{0xA29A6A910B13A75CLL,18446744073709551615UL,0xA29A6A910B13A75CLL},{7UL,7UL,7UL},{0xA29A6A910B13A75CLL,18446744073709551615UL,0xA29A6A910B13A75CLL}};
static union U1 *g_157 = (void*)0;
static union U1 **g_156 = &g_157;
static union U1 ***g_155[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int64_t *g_168 = (void*)0;
static int64_t ** const g_167 = &g_168;
static int16_t *g_183 = &g_9.f1;
static int64_t ***g_211 = (void*)0;
static int64_t ****g_237 = &g_211;
static uint32_t g_251 = 0xF2FB4231L;
static int32_t **g_258 = &g_83[6];
static int16_t **g_322 = &g_183;
static int16_t ***g_321 = &g_322;
static int16_t g_362 = 0x7914L;
static union U3 *g_374 = &g_9;
static union U3 **g_373 = &g_374;
static uint64_t *g_381[6] = {&g_107[1][0],&g_107[3][2],&g_107[3][2],&g_107[1][0],&g_107[3][2],&g_107[3][2]};
static union U0 g_389[8] = {{0},{0},{0},{0},{0},{0},{0},{0}};
static union U0 *g_388 = &g_389[7];
static uint8_t *g_438 = &g_9.f2;
static int8_t **g_487[6][7] = {{&g_10,&g_10,&g_10,&g_10,&g_10,&g_10,&g_10},{(void*)0,&g_10,(void*)0,&g_10,(void*)0,&g_10,&g_10},{(void*)0,&g_10,&g_10,&g_10,&g_10,(void*)0,&g_10},{&g_10,(void*)0,(void*)0,&g_10,&g_10,&g_10,(void*)0},{&g_10,&g_10,(void*)0,&g_10,(void*)0,&g_10,&g_10},{&g_10,(void*)0,&g_10,(void*)0,&g_10,&g_10,(void*)0}};
static int8_t ***g_486 = &g_487[2][4];
static int64_t g_510[5][2][2] = {{{(-1L),(-10L)},{(-1L),(-1L)}},{{(-1L),(-10L)},{(-1L),(-1L)}},{{(-1L),(-10L)},{(-1L),(-1L)}},{{(-1L),(-10L)},{(-1L),(-1L)}},{{(-1L),(-10L)},{(-1L),(-1L)}}};
static uint16_t g_514 = 1UL;
static uint8_t **g_661 = &g_438;
static uint8_t *** const g_660 = &g_661;
static const uint16_t *g_686 = &g_99;
static const uint16_t **g_685 = &g_686;
static const uint8_t **g_746 = (void*)0;
static const uint8_t ***g_745 = &g_746;
static int16_t g_866 = 0L;
static union U1 ****g_876 = &g_155[6];
static union U2 g_900 = {0x26L};
static uint8_t ***g_933 = &g_661;
static const uint64_t **g_934 = (void*)0;
static const uint64_t g_937 = 0x58F26A031948BDBBLL;
static union U2 **g_981 = (void*)0;
static union U3 g_1105 = {0x7503L};
static int8_t g_1133 = (-1L);
static uint16_t g_1210 = 5UL;
static uint64_t g_1404 = 0UL;
static uint16_t *g_1448 = &g_1210;
static uint16_t **g_1447 = &g_1448;
static const uint32_t *g_1459 = (void*)0;
static const uint32_t **g_1458 = &g_1459;
static int64_t g_1488 = 1L;
static const int8_t g_1494 = 0x26L;
static union U0 g_1654 = {0};
static int32_t *g_1655 = &g_16;
static uint8_t ****g_1677 = &g_933;
static int8_t *****g_1707 = (void*)0;
static uint8_t ** const *g_1714 = &g_661;
static uint8_t ** const **g_1713 = &g_1714;
static uint8_t ** const ***g_1712 = &g_1713;
static union U1 * const *g_1766[3] = {&g_103[0][0][0],&g_103[0][0][0],&g_103[0][0][0]};
static union U1 * const **g_1765 = &g_1766[0];
static uint32_t g_1789 = 0x5D9B5C39L;
static uint16_t ***g_1991 = &g_1447;
static uint16_t *** const *g_1990[9][3][9] = {{{(void*)0,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991},{&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,(void*)0,(void*)0,(void*)0,&g_1991},{(void*)0,&g_1991,&g_1991,&g_1991,&g_1991,(void*)0,&g_1991,&g_1991,&g_1991}},{{&g_1991,&g_1991,(void*)0,&g_1991,&g_1991,(void*)0,&g_1991,&g_1991,&g_1991},{&g_1991,&g_1991,(void*)0,(void*)0,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991},{&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991}},{{&g_1991,(void*)0,&g_1991,(void*)0,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991},{(void*)0,&g_1991,&g_1991,(void*)0,&g_1991,&g_1991,(void*)0,&g_1991,&g_1991},{&g_1991,&g_1991,(void*)0,&g_1991,&g_1991,(void*)0,(void*)0,&g_1991,&g_1991}},{{&g_1991,&g_1991,&g_1991,(void*)0,&g_1991,(void*)0,(void*)0,&g_1991,&g_1991},{&g_1991,&g_1991,&g_1991,&g_1991,(void*)0,&g_1991,&g_1991,&g_1991,&g_1991},{&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,(void*)0}},{{&g_1991,(void*)0,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991},{&g_1991,(void*)0,(void*)0,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991},{&g_1991,&g_1991,&g_1991,&g_1991,(void*)0,&g_1991,&g_1991,&g_1991,&g_1991}},{{&g_1991,&g_1991,(void*)0,&g_1991,(void*)0,&g_1991,(void*)0,(void*)0,&g_1991},{&g_1991,(void*)0,&g_1991,&g_1991,&g_1991,&g_1991,(void*)0,&g_1991,&g_1991},{&g_1991,&g_1991,(void*)0,(void*)0,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991}},{{&g_1991,&g_1991,&g_1991,(void*)0,(void*)0,&g_1991,&g_1991,&g_1991,(void*)0},{&g_1991,&g_1991,&g_1991,&g_1991,(void*)0,&g_1991,&g_1991,&g_1991,(void*)0},{&g_1991,&g_1991,(void*)0,(void*)0,&g_1991,(void*)0,&g_1991,&g_1991,&g_1991}},{{&g_1991,(void*)0,&g_1991,(void*)0,(void*)0,&g_1991,&g_1991,&g_1991,&g_1991},{(void*)0,&g_1991,&g_1991,&g_1991,(void*)0,&g_1991,&g_1991,(void*)0,&g_1991},{(void*)0,(void*)0,(void*)0,(void*)0,&g_1991,&g_1991,(void*)0,(void*)0,&g_1991}},{{(void*)0,&g_1991,(void*)0,&g_1991,&g_1991,&g_1991,&g_1991,&g_1991,(void*)0},{&g_1991,(void*)0,&g_1991,(void*)0,(void*)0,&g_1991,&g_1991,&g_1991,(void*)0},{&g_1991,&g_1991,&g_1991,&g_1991,(void*)0,(void*)0,(void*)0,&g_1991,&g_1991}}};
static uint16_t *** const **g_1989[2][1][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
static const int32_t g_2031[1] = {0L};
static uint16_t g_2059[7][6][6] = {{{0UL,0UL,0x94FAL,0x4314L,65530UL,65535UL},{0UL,0xF7F4L,65531UL,0xB705L,0xB373L,0x94FAL},{1UL,0UL,65531UL,65527UL,0UL,65535UL},{0xBC3CL,65527UL,0x94FAL,2UL,0x3740L,0xB373L},{2UL,0x3740L,0xB373L,0x22E6L,0xEC22L,0x5AC2L},{0xC216L,65535UL,65535UL,0xF7F4L,0x4DB6L,0UL}},{{0x4DB6L,0x24AEL,65527UL,0x08BEL,65535UL,0x08BEL},{1UL,0UL,1UL,0xE64DL,0UL,0x3740L},{0x08BEL,0x7169L,0xC216L,0UL,0xD265L,2UL},{0xC189L,0x0709L,65532UL,0UL,0x805BL,0xE64DL},{0x08BEL,0xD976L,0x0709L,0xE64DL,0x22E6L,0UL},{1UL,0x3740L,0x24AEL,65533UL,0UL,0xB373L}},{{0x5114L,0x0709L,0xEC22L,0xE64DL,65532UL,0x08BEL},{1UL,0x213DL,65530UL,0xE2E1L,0x4314L,0x4314L},{0x22E6L,65533UL,65533UL,0x22E6L,65535UL,1UL},{0x1149L,0xEC22L,65531UL,0x805BL,0x7169L,0xD976L},{0x213DL,65532UL,0xD53BL,0xD265L,0x7169L,0x94FAL},{0x24AEL,0xEC22L,65535UL,0UL,65535UL,0xF7F4L}},{{0x5AC2L,65533UL,0UL,65535UL,0x4314L,0xE64DL},{1UL,0x213DL,0x3740L,0x4DB6L,65532UL,65535UL},{2UL,0x0709L,0xE2E1L,0xEC22L,0UL,0x1149L},{0xE2E1L,0x3740L,0xC189L,0x3740L,0xE2E1L,0xAEEDL},{65532UL,0xB373L,0xE64DL,0UL,65531UL,65535UL},{0UL,0xBC3CL,0x213DL,0xB373L,0xEC22L,65535UL}},{{0xC189L,0xB705L,0xE64DL,65530UL,1UL,0xAEEDL},{0xEC22L,2UL,0xC189L,0x5114L,0xAEEDL,0x1149L},{0UL,0x08BEL,0xE2E1L,0xD976L,0x5114L,65535UL},{0x03F7L,0xAEEDL,0x3740L,0x1149L,0UL,0xE64DL},{0xF7F4L,0xD53BL,0UL,0UL,0xD53BL,0xF7F4L},{0x0709L,0x805BL,65535UL,0x7169L,0x5AC2L,0x94FAL}},{{0x08BEL,0x24AEL,0xD53BL,65531UL,0x03F7L,0xD976L},{0x08BEL,0xE64DL,65531UL,0x7169L,0xC189L,1UL},{0x0709L,0x5AC2L,65533UL,0UL,65535UL,0x4314L},{0xF7F4L,0x7169L,65530UL,0x1149L,0xB373L,0x08BEL},{0x03F7L,65530UL,0xEC22L,0xD976L,0xC216L,0xB373L},{0UL,1UL,0x24AEL,0x5114L,0x24AEL,1UL}},{{0xEC22L,0xC189L,0xBC3CL,65530UL,0xB705L,65532UL},{0xC189L,0xD265L,65535UL,0xB373L,0xF7F4L,0x22E6L},{0UL,0xD265L,1UL,0UL,0xB705L,0xD53BL},{65532UL,0xC189L,65527UL,0x3740L,0x24AEL,65533UL},{0xE2E1L,1UL,0x805BL,0xEC22L,0xC216L,2UL},{2UL,65530UL,0x94FAL,0x4DB6L,0xB373L,0x7169L}}};
static uint64_t **g_2125[7] = {&g_381[4],&g_381[0],&g_381[0],&g_381[4],&g_381[0],&g_381[0],&g_381[0]};
static uint64_t ***g_2124 = &g_2125[0];
static uint64_t ***g_2126 = (void*)0;
static union U1 * const ***g_2206 = &g_1765;
static union U1 * const ****g_2205 = &g_2206;
static int32_t *g_2264 = &g_101;
static uint32_t g_2265 = 0xF6C07740L;
static uint8_t *** const *g_2271[3] = {&g_660,&g_660,&g_660};
static uint8_t *** const **g_2270 = &g_2271[2];
static union U3 *** const g_2369 = (void*)0;
static union U3 *** const *g_2368 = &g_2369;
static union U3 *** const **g_2367 = &g_2368;
static const int32_t *g_2407 = (void*)0;
static uint32_t g_2430 = 0x7AF07C1DL;
static uint64_t ****g_2443 = &g_2126;
static uint64_t *****g_2442[6] = {(void*)0,&g_2443,(void*)0,(void*)0,&g_2443,(void*)0};
static union U2 g_2464 = {5UL};
static int8_t g_2498 = 0L;
static int32_t g_2514 = 8L;
static union U3 *g_2617 = (void*)0;
static int16_t g_2709 = 0L;
static int32_t g_2714 = (-6L);
static int8_t * const ****g_2760 = (void*)0;
static union U3 ***g_2772 = (void*)0;
static union U3 ****g_2771 = &g_2772;
static int32_t g_2806 = (-5L);
static uint16_t ****g_2874 = &g_1991;
static uint16_t *****g_2873[3] = {&g_2874,&g_2874,&g_2874};



static union U1 func_1(void);
static int8_t * func_5(int16_t p_6, union U0 p_7);
static int32_t func_21(int32_t * p_22, int8_t * p_23, int32_t p_24, union U2 p_25, uint16_t p_26);
static int8_t * func_27(int8_t * p_28, union U3 * p_29);
static int8_t * func_30(int32_t * p_31, int8_t p_32, int8_t * const p_33);
static int32_t * func_35(uint16_t p_36, int8_t p_37);
static uint16_t func_38(union U3 * p_39);
static union U3 * func_40(union U2 p_41, union U3 p_42, union U2 p_43, int8_t * p_44);
static const int16_t func_52(int16_t p_53);
static union U1 * const func_56(union U3 p_57, int64_t p_58, int8_t * p_59, uint16_t p_60);
# 168 "<stdin>"
static union U1 func_1(void)
{
    union U3 l_3 = {0xF76EL};
    union U3 *l_4 = &l_3;
    union U0 l_8 = {0};
    int32_t l_2715 = 0L;
    int32_t l_2722[5];
    int16_t *l_2737[10];
    int32_t *l_2738 = &g_2714;
    int32_t *l_2739 = &g_16;
    int32_t *l_2740 = (void*)0;
    int32_t *l_2741 = &g_2714;
    int32_t *l_2742[10];
    uint64_t l_2743[4][5] = {{0x259A592E7C06B581LL,1UL,18446744073709551615UL,0xDBFE411455A9D6C7LL,1UL},{9UL,18446744073709551615UL,18446744073709551615UL,9UL,0xDBFE411455A9D6C7LL},{0UL,9UL,2UL,1UL,1UL},{0x259A592E7C06B581LL,9UL,0x259A592E7C06B581LL,0xDBFE411455A9D6C7LL,9UL}};
    union U3 ****l_2777 = &g_2772;
    int16_t l_2778 = 0xFBF7L;
    union U1 l_2900 = {0UL};
    int i, j;
    for (i = 0; i < 5; i++)
        l_2722[i] = 0x67DBAE74L;
    for (i = 0; i < 10; i++)
        l_2737[i] = &g_866;
    for (i = 0; i < 10; i++)
        l_2742[i] = &g_16;
    l_2715 |= ((((*l_4) = (g_2 , l_3)) , (l_3.f1 , func_5(l_3.f0, l_8))) == (void*)0);
    (*l_2738) ^= ((safe_sub_func_uint64_t_u_u((l_3.f2 || (safe_div_func_int32_t_s_s(((safe_div_func_int16_t_s_s((**g_322), (l_2722[1] = 0x7BD2L))) >= (l_3.f0 >= (((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((*g_10), 7)), (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((*****g_1712), 7)), (safe_sub_func_int16_t_s_s((*g_183), (*g_1448))))))) > (safe_mul_func_uint16_t_u_u(((g_2709 = (*g_183)) & l_3.f1), (-1L)))) >= 0xB8L))), (-8L)))), l_2715)) , (*g_98));
    ++l_2743[1][0];
    for (g_2714 = 6; (g_2714 >= 0); g_2714 -= 1)
    {
        int8_t ****l_2755[2][6];
        int8_t *****l_2754[7][2][10] = {{{&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3]},{&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3]}},{{&l_2755[0][3],&l_2755[0][3],(void*)0,&l_2755[0][3],&l_2755[0][3],(void*)0,&l_2755[0][3],&l_2755[0][3],(void*)0,&l_2755[0][3]},{&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3]}},{{&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3]},{&l_2755[0][3],&l_2755[0][3],(void*)0,&l_2755[0][3],&l_2755[0][3],(void*)0,&l_2755[0][3],&l_2755[0][3],(void*)0,&l_2755[0][3]}},{{&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3]},{&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3]}},{{&l_2755[0][3],&l_2755[0][3],(void*)0,&l_2755[0][3],&l_2755[0][3],(void*)0,&l_2755[0][3],&l_2755[0][3],(void*)0,&l_2755[0][3]},{&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3]}},{{&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3]},{&l_2755[0][3],&l_2755[0][3],(void*)0,&l_2755[0][3],&l_2755[0][3],(void*)0,&l_2755[0][3],&l_2755[0][3],(void*)0,&l_2755[0][3]}},{{&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3]},{&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3],&l_2755[0][3]}}};
        int8_t * const *l_2759 = &g_10;
        int8_t * const **l_2758 = &l_2759;
        int8_t * const ***l_2757 = &l_2758;
        int8_t * const ****l_2756 = &l_2757;
        int32_t l_2781 = (-8L);
        int64_t l_2796 = 0xD8C7DC5022963D1DLL;
        int16_t **l_2805[3];
        int16_t l_2819[3][8] = {{0xBD3CL,0xBD3CL,7L,7L,0xBD3CL,0xBD3CL,7L,7L},{0xBD3CL,0xBD3CL,7L,7L,0xBD3CL,0xBD3CL,7L,7L},{0xBD3CL,0xBD3CL,7L,7L,0xBD3CL,0xBD3CL,7L,7L}};
        int32_t *l_2879 = (void*)0;
        union U2 l_2883 = {0x14L};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
                l_2755[i][j] = &g_486;
        }
        for (i = 0; i < 3; i++)
            l_2805[i] = (void*)0;
        for (g_104.f0 = 0; (g_104.f0 <= 7); g_104.f0 += 1)
        {
            union U3 *****l_2773 = (void*)0;
            union U3 *****l_2774 = &g_2771;
            union U3 ****l_2776 = (void*)0;
            union U3 *****l_2775 = &l_2776;
            int32_t l_2779 = (-6L);
            uint64_t l_2780 = 0x089144A91FB031F4LL;
            int32_t l_2782 = 7L;
            (*l_2739) = (((safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s((0x90L || (safe_mul_func_int16_t_s_s((**g_322), (((g_1707 = l_2754[5][1][8]) == (g_2760 = l_2756)) >= (safe_mod_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s((((g_362 ^= (safe_mul_func_int8_t_s_s((l_2782 |= ((safe_mul_func_uint8_t_u_u(((((((safe_rshift_func_uint16_t_u_u((((***g_660) ^ 0x66L) >= ((**g_322) >= (((l_2777 = ((*l_2775) = ((*l_2774) = g_2771))) != (*g_2367)) ^ l_2778))), l_2779)) , l_2779) < (*l_2739)) & 0xADL) != l_2780) && l_2780), l_2781)) , 0L)), (***g_933)))) , 65534UL) || 1UL), l_2781)) < l_2781) > 0xFF44478E86DB9511LL), 0x3BL)))))), (*g_98))), l_2781)), (*l_2741))) & l_2781) || l_2781);
            if (l_2781)
                break;
        }
        for (g_99 = 0; (g_99 <= 7); g_99 += 1)
        {
            int8_t l_2807 = 0xADL;
            int32_t l_2835[9][4][4] = {{{1L,(-7L),0x016A2208L,1L},{(-2L),0x6AF104AAL,0L,0x69022378L},{5L,1L,0x1FD6D2EAL,0xDC705D42L},{6L,3L,4L,0x1FD6D2EAL}},{{9L,0x5C6FCD4BL,0x5C6FCD4BL,9L},{6L,3L,0x0A146998L,(-7L)},{0x5C6FCD4BL,0x6AF104AAL,0x29CF21EEL,0x016A2208L},{1L,5L,1L,0x016A2208L}},{{6L,0x6AF104AAL,0x9E307FD0L,(-7L)},{(-4L),3L,0x1FD6D2EAL,9L},{0L,0x5C6FCD4BL,0x016A2208L,0x1FD6D2EAL},{3L,3L,0x29CF21EEL,0xDC705D42L}},{{6L,1L,(-2L),0x69022378L},{0x896C9E95L,0x6AF104AAL,0x896C9E95L,1L},{9L,(-7L),1L,4L},{0L,(-2L),0L,(-7L)}},{{(-7L),0L,0L,0xDC705D42L},{0L,6L,1L,0L},{9L,3L,0x896C9E95L,3L},{0x896C9E95L,3L,(-2L),(-4L)}},{{6L,(-2L),0x29CF21EEL,1L},{3L,0L,0x016A2208L,0x016A2208L},{0L,0L,0x1FD6D2EAL,0x69022378L},{(-4L),0L,0x9E307FD0L,3L}},{{6L,0x5C6FCD4BL,1L,0x9E307FD0L},{1L,0x5C6FCD4BL,0x29CF21EEL,3L},{0x5C6FCD4BL,0L,0x0A146998L,0x69022378L},{6L,0L,0x5C6FCD4BL,0x016A2208L}},{{9L,0L,4L,1L},{6L,(-2L),0x1FD6D2EAL,(-4L)},{5L,3L,0L,3L},{(-2L),3L,0x016A2208L,0L}},{{1L,6L,0x5C6FCD4BL,0xDC705D42L},{0x896C9E95L,0L,6L,(-7L)},{0x896C9E95L,(-2L),0x5C6FCD4BL,4L},{1L,(-7L),0x016A2208L,1L}}};
            int16_t l_2836 = (-1L);
            int16_t ** const *l_2861 = &l_2805[0];
            int16_t ** const **l_2860[5][9][5] = {{{&l_2861,(void*)0,&l_2861,(void*)0,(void*)0},{&l_2861,&l_2861,&l_2861,&l_2861,&l_2861},{&l_2861,&l_2861,(void*)0,&l_2861,&l_2861},{(void*)0,(void*)0,(void*)0,&l_2861,&l_2861},{(void*)0,&l_2861,&l_2861,&l_2861,&l_2861},{&l_2861,&l_2861,&l_2861,&l_2861,&l_2861},{(void*)0,&l_2861,&l_2861,(void*)0,&l_2861},{&l_2861,&l_2861,(void*)0,&l_2861,&l_2861},{(void*)0,&l_2861,&l_2861,&l_2861,(void*)0}},{{&l_2861,(void*)0,(void*)0,&l_2861,(void*)0},{&l_2861,&l_2861,&l_2861,&l_2861,&l_2861},{&l_2861,&l_2861,&l_2861,(void*)0,&l_2861},{&l_2861,&l_2861,&l_2861,(void*)0,&l_2861},{&l_2861,&l_2861,&l_2861,(void*)0,(void*)0},{(void*)0,(void*)0,&l_2861,&l_2861,(void*)0},{(void*)0,&l_2861,&l_2861,&l_2861,&l_2861},{&l_2861,(void*)0,&l_2861,&l_2861,&l_2861},{(void*)0,&l_2861,(void*)0,&l_2861,&l_2861}},{{(void*)0,(void*)0,&l_2861,&l_2861,&l_2861},{&l_2861,&l_2861,&l_2861,&l_2861,&l_2861},{&l_2861,&l_2861,&l_2861,&l_2861,&l_2861},{&l_2861,&l_2861,&l_2861,(void*)0,&l_2861},{(void*)0,(void*)0,&l_2861,&l_2861,&l_2861},{&l_2861,(void*)0,&l_2861,&l_2861,&l_2861},{&l_2861,(void*)0,&l_2861,&l_2861,&l_2861},{&l_2861,&l_2861,&l_2861,&l_2861,&l_2861},{&l_2861,&l_2861,(void*)0,&l_2861,&l_2861}},{{&l_2861,&l_2861,&l_2861,&l_2861,&l_2861},{(void*)0,(void*)0,&l_2861,&l_2861,(void*)0},{&l_2861,&l_2861,&l_2861,(void*)0,(void*)0},{&l_2861,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_2861,&l_2861,&l_2861,&l_2861},{&l_2861,(void*)0,&l_2861,&l_2861,&l_2861},{&l_2861,&l_2861,(void*)0,&l_2861,&l_2861},{&l_2861,&l_2861,&l_2861,&l_2861,(void*)0},{(void*)0,&l_2861,&l_2861,&l_2861,&l_2861}},{{&l_2861,&l_2861,(void*)0,&l_2861,&l_2861},{&l_2861,(void*)0,&l_2861,&l_2861,(void*)0},{(void*)0,&l_2861,&l_2861,&l_2861,(void*)0},{&l_2861,(void*)0,&l_2861,&l_2861,&l_2861},{&l_2861,(void*)0,&l_2861,(void*)0,&l_2861},{&l_2861,(void*)0,&l_2861,&l_2861,&l_2861},{&l_2861,(void*)0,&l_2861,(void*)0,(void*)0},{&l_2861,&l_2861,&l_2861,(void*)0,&l_2861},{(void*)0,(void*)0,&l_2861,&l_2861,&l_2861}}};
            uint16_t ****l_2872[2];
            uint16_t *****l_2871 = &l_2872[1];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_2872[i] = &g_1991;
            for (g_251 = 0; (g_251 <= 6); g_251 += 1)
            {
                uint8_t l_2786 = 0x18L;
                uint32_t l_2793 = 4294967295UL;
                int32_t l_2826 = 1L;
                int32_t l_2870[4];
                uint64_t *l_2875 = &l_2743[2][3];
                uint64_t *l_2878 = &g_1404;
                int i;
                for (i = 0; i < 4; i++)
                    l_2870[i] = 0xDD510D35L;
            }
            l_2879 = &l_2835[6][3][0];
        }
        for (l_2781 = 5; (l_2781 >= 0); l_2781 -= 1)
        {
            union U3 l_2882[4][9][4] = {{{{1L},{1L},{0L},{0x9C2CL}},{{1L},{0x393BL},{0xE09DL},{0L}},{{0x57B9L},{0x0CBAL},{-1L},{1L}},{{0x61F0L},{0x2849L},{1L},{0x0CBAL}},{{9L},{-1L},{-1L},{0x7A45L}},{{0xAD3DL},{1L},{-1L},{0xAD3DL}},{{0x2849L},{9L},{0xB33CL},{0x83C4L}},{{0x8425L},{0L},{1L},{0x0D4CL}},{{0x7225L},{0x03FFL},{0L},{-1L}}},{{{0xD5C0L},{0x83C4L},{0x9C2CL},{0x83C4L}},{{1L},{0xC3A8L},{6L},{0x61F0L}},{{1L},{1L},{1L},{0x4243L}},{{0x03FFL},{0x0D4CL},{1L},{0x0CBAL}},{{0x03FFL},{0x57B9L},{1L},{0xD5C0L}},{{1L},{0x0CBAL},{6L},{-1L}},{{1L},{-1L},{0x9C2CL},{9L}},{{0xD5C0L},{0xE09DL},{0L},{0L}},{{0x7225L},{0x8425L},{1L},{0xC3A8L}}},{{{0x8425L},{-1L},{0xB33CL},{0L}},{{0x2849L},{1L},{-1L},{0xD5C0L}},{{0xAD3DL},{0x2849L},{-1L},{1L}},{{9L},{0x0D4CL},{1L},{0x7A45L}},{{0x61F0L},{-1L},{-1L},{0x61F0L}},{{0x57B9L},{9L},{0xE09DL},{0L}},{{0x8425L},{0x83C4L},{1L},{0x0D4CL}},{{0L},{1L},{0L},{0x0D4CL}},{{1L},{0x83C4L},{0x7225L},{0L}}},{{{1L},{9L},{4L},{0x61F0L}},{{0x0CBAL},{-1L},{1L},{0x7A45L}},{{1L},{0x0D4CL},{0x4243L},{1L}},{{0x03FFL},{0x2849L},{1L},{0xD5C0L}},{{0x0CBAL},{1L},{6L},{0L}},{{0xFAA3L},{-1L},{0x7225L},{0xC3A8L}},{{0xD5C0L},{0x8425L},{0x382FL},{0L}},{{0L},{0xE09DL},{1L},{9L}},{{0xE09DL},{-1L},{0xE09DL},{-1L}}}};
            union U1 l_2893 = {0UL};
            uint8_t *l_2898 = &g_1105.f2;
            uint8_t *l_2899 = &g_47[0].f0;
            int i, j, k;
            (*l_2739) = (safe_mul_func_int8_t_s_s((((l_2882[2][5][3] , l_2883) , l_2882[2][5][3].f2) && (**g_322)), (safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s((+(safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((l_2883 , l_2893) , (safe_div_func_uint8_t_u_u(((*l_2899) = ((*l_2898) = (safe_rshift_func_int8_t_s_u((((**l_2759) = (((g_47[0] , l_2819[0][0]) || (l_2893 , 0xF456L)) || (**g_1447))) , 0L), (***g_660))))), 255UL))), (*l_2739))), 0L))), (-10L))), (***g_321)))));
        }
        (*g_98) &= (*l_2741);
    }
    return l_2900;
}







static int8_t * func_5(int16_t p_6, union U0 p_7)
{
    int32_t l_20 = 0L;
    union U0 l_34 = {0};
    union U2 l_45 = {0xEAL};
    union U3 l_46 = {0x1EBCL};
    uint8_t l_108 = 0x27L;
    int8_t *l_109 = &g_104.f1;
    int8_t * const l_1132 = &g_1133;
    int32_t *l_2713 = &g_2714;
    if ((g_9 , ((void*)0 == g_10)))
    {
        int32_t l_14 = 0x7E80D68FL;
        int32_t *l_15 = &g_16;
        (*l_15) ^= (safe_mod_func_int16_t_s_s(l_14, p_6));
    }
    else
    {
        uint32_t l_17 = 0xB168F928L;
        int32_t *l_18[4][9] = {{&g_16,&g_16,(void*)0,&g_16,&g_16,(void*)0,&g_16,&g_16,(void*)0},{&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16},{&g_16,&g_16,(void*)0,&g_16,&g_16,(void*)0,&g_16,&g_16,(void*)0},{&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16}};
        int8_t l_19 = 0xB0L;
        int i, j;
        l_19 = l_17;
    }
    (*l_2713) = (l_45.f1 = (l_20 , ((*g_98) = func_21(&g_16, func_27(func_30((l_34 , func_35(func_38(func_40(l_45, l_46, g_47[0], ((p_6 == ((((safe_rshift_func_int8_t_s_s(((((g_107[3][0] ^= ((safe_lshift_func_int16_t_s_s(l_46.f0, func_52(l_45.f0))) == p_6)) >= g_47[0].f0) != 0x82D738A4L) > g_2), 6)) , p_6) | 0x5F02B52CL) , l_108)) , l_109))), l_46.f0)), p_6, l_1132), &l_46), l_20, l_45, p_6))));
    return l_109;
}







static int32_t func_21(int32_t * p_22, int8_t * p_23, int32_t p_24, union U2 p_25, uint16_t p_26)
{
    return (*g_98);
}







static int8_t * func_27(int8_t * p_28, union U3 * p_29)
{
    int32_t l_1156 = 0L;
    int16_t l_1179 = 0x9929L;
    union U0 l_1187 = {0};
    int8_t *l_1236 = &g_11;
    union U1 *l_1243 = &g_104;
    uint64_t **l_1248 = &g_381[1];
    int32_t l_1308 = 0L;
    int32_t l_1309[3];
    const uint8_t *l_1346 = &g_47[0].f0;
    const uint8_t **l_1345[8][5][6] = {{{&l_1346,(void*)0,&l_1346,&l_1346,&l_1346,(void*)0},{&l_1346,(void*)0,&l_1346,(void*)0,(void*)0,(void*)0},{&l_1346,&l_1346,&l_1346,(void*)0,&l_1346,&l_1346},{(void*)0,(void*)0,&l_1346,&l_1346,&l_1346,&l_1346},{(void*)0,&l_1346,&l_1346,(void*)0,&l_1346,&l_1346}},{{&l_1346,&l_1346,&l_1346,&l_1346,&l_1346,&l_1346},{&l_1346,&l_1346,&l_1346,&l_1346,&l_1346,(void*)0},{(void*)0,&l_1346,(void*)0,(void*)0,&l_1346,&l_1346},{(void*)0,(void*)0,(void*)0,&l_1346,&l_1346,(void*)0},{(void*)0,&l_1346,&l_1346,(void*)0,(void*)0,&l_1346}},{{(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346},{(void*)0,&l_1346,&l_1346,&l_1346,(void*)0,&l_1346},{(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346},{(void*)0,&l_1346,(void*)0,&l_1346,(void*)0,&l_1346},{&l_1346,(void*)0,(void*)0,&l_1346,(void*)0,&l_1346}},{{&l_1346,&l_1346,(void*)0,(void*)0,&l_1346,&l_1346},{(void*)0,(void*)0,&l_1346,&l_1346,&l_1346,&l_1346},{(void*)0,&l_1346,&l_1346,(void*)0,&l_1346,&l_1346},{&l_1346,&l_1346,&l_1346,&l_1346,&l_1346,&l_1346},{&l_1346,&l_1346,&l_1346,&l_1346,&l_1346,(void*)0}},{{(void*)0,&l_1346,(void*)0,(void*)0,&l_1346,&l_1346},{(void*)0,(void*)0,(void*)0,&l_1346,&l_1346,(void*)0},{(void*)0,&l_1346,&l_1346,(void*)0,(void*)0,&l_1346},{(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346},{(void*)0,&l_1346,&l_1346,&l_1346,(void*)0,&l_1346}},{{(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346},{(void*)0,&l_1346,(void*)0,&l_1346,(void*)0,&l_1346},{&l_1346,(void*)0,(void*)0,&l_1346,(void*)0,&l_1346},{&l_1346,&l_1346,(void*)0,(void*)0,&l_1346,&l_1346},{(void*)0,(void*)0,&l_1346,&l_1346,&l_1346,&l_1346}},{{(void*)0,&l_1346,&l_1346,(void*)0,&l_1346,&l_1346},{&l_1346,&l_1346,&l_1346,&l_1346,&l_1346,&l_1346},{&l_1346,&l_1346,&l_1346,&l_1346,&l_1346,(void*)0},{(void*)0,&l_1346,(void*)0,(void*)0,&l_1346,&l_1346},{(void*)0,(void*)0,(void*)0,&l_1346,&l_1346,(void*)0}},{{&l_1346,&l_1346,(void*)0,&l_1346,(void*)0,(void*)0},{&l_1346,(void*)0,(void*)0,&l_1346,(void*)0,&l_1346},{&l_1346,&l_1346,(void*)0,&l_1346,&l_1346,&l_1346},{&l_1346,(void*)0,(void*)0,(void*)0,&l_1346,&l_1346},{&l_1346,&l_1346,&l_1346,&l_1346,(void*)0,(void*)0}}};
    int16_t **l_1390 = &g_183;
    uint8_t l_1426 = 0UL;
    uint32_t *l_1457[2];
    uint32_t **l_1456 = &l_1457[1];
    int8_t l_1466 = 0L;
    int16_t l_1483 = 0x554FL;
    int16_t l_1502[10][10] = {{0x1147L,0xC5C7L,1L,0x47BAL,0x47BAL,1L,0xC5C7L,0x1147L,1L,0x1147L},{0x47BAL,0xD407L,0xB640L,0x47BAL,0xB640L,0xD407L,0x47BAL,(-7L),(-7L),0x47BAL},{(-7L),0x1147L,0xB640L,0xB640L,0x1147L,(-7L),0xD407L,0x1147L,0xD407L,(-7L)},{0xC5C7L,0x1147L,1L,0x1147L,0xC5C7L,1L,0x47BAL,0x47BAL,1L,0xC5C7L},{0xC5C7L,0xD407L,0xD407L,0xC5C7L,0xB640L,(-7L),0xC5C7L,(-7L),0xB640L,0xC5C7L},{(-7L),0xC5C7L,(-7L),0xB640L,0xC5C7L,0xD407L,0xD407L,0xC5C7L,0xB640L,(-7L)},{0x47BAL,0x47BAL,1L,0xC5C7L,0x1147L,1L,0x1147L,0xC5C7L,1L,0x47BAL},{0x1147L,0xD407L,(-7L),0x1147L,0xB640L,0xB640L,0x1147L,(-7L),0xD407L,0x1147L},{(-7L),0x47BAL,0xD407L,0xB640L,0x47BAL,0xB640L,0xD407L,0x47BAL,(-7L),(-7L)},{0x1147L,0xC5C7L,1L,0x47BAL,0x47BAL,1L,0xC5C7L,0x1147L,1L,0x1147L}};
    int64_t **l_1515 = &g_168;
    int64_t *** const l_1514[9][6] = {{&l_1515,&l_1515,&l_1515,&l_1515,&l_1515,&l_1515},{&l_1515,&l_1515,&l_1515,&l_1515,&l_1515,&l_1515},{&l_1515,&l_1515,&l_1515,&l_1515,&l_1515,&l_1515},{&l_1515,&l_1515,&l_1515,&l_1515,&l_1515,&l_1515},{&l_1515,&l_1515,&l_1515,&l_1515,&l_1515,&l_1515},{&l_1515,&l_1515,&l_1515,&l_1515,&l_1515,&l_1515},{&l_1515,&l_1515,&l_1515,&l_1515,&l_1515,&l_1515},{&l_1515,&l_1515,&l_1515,&l_1515,&l_1515,&l_1515},{&l_1515,&l_1515,&l_1515,&l_1515,&l_1515,&l_1515}};
    int64_t l_1532[10][7] = {{(-2L),(-1L),0xE71B2017A73C85E9LL,(-1L),0xBFC35AEF03492611LL,0L,0L},{0xE71B2017A73C85E9LL,(-2L),0xD2AC70D1AE74DD7DLL,0L,(-10L),0L,0xD2AC70D1AE74DD7DLL},{0L,0L,0x1EF847E6433F3C52LL,0x274D0E6F5E758A67LL,(-2L),(-1L),0xE71B2017A73C85E9LL},{0xE71B2017A73C85E9LL,0L,0x1EF847E6433F3C52LL,0x1EF847E6433F3C52LL,0L,0xE71B2017A73C85E9LL,(-10L)},{0xBFC35AEF03492611LL,0x1EF847E6433F3C52LL,0xD2AC70D1AE74DD7DLL,(-10L),(-2L),(-2L),(-10L)},{0x274D0E6F5E758A67LL,0x7DAA52693A8818BELL,0x274D0E6F5E758A67LL,(-1L),(-10L),0xBFC35AEF03492611LL,0xE71B2017A73C85E9LL},{0xD2AC70D1AE74DD7DLL,0x1EF847E6433F3C52LL,0xBFC35AEF03492611LL,(-1L),0xBFC35AEF03492611LL,0x1EF847E6433F3C52LL,0xD2AC70D1AE74DD7DLL},{0x1EF847E6433F3C52LL,0L,0xE71B2017A73C85E9LL,(-10L),0L,0xBFC35AEF03492611LL,0L},{0x1EF847E6433F3C52LL,0L,0L,0x1EF847E6433F3C52LL,0x274D0E6F5E758A67LL,(-2L),(-1L)},{0xD2AC70D1AE74DD7DLL,(-2L),0xE71B2017A73C85E9LL,0x274D0E6F5E758A67LL,0x274D0E6F5E758A67LL,0xE71B2017A73C85E9LL,(-2L)}};
    int16_t ****l_1533 = (void*)0;
    uint8_t l_1566 = 0x4DL;
    const uint8_t l_1573[2][5][7] = {{{0UL,0x8CL,247UL,255UL,1UL,255UL,247UL},{0xB7L,0xB7L,0xABL,251UL,255UL,0x29L,255UL},{0xE2L,254UL,1UL,255UL,247UL,0xBCL,0xBCL},{255UL,255UL,0x5DL,255UL,255UL,0xB7L,0x07L},{255UL,5UL,0UL,0x7EL,1UL,9UL,0x8CL}},{{247UL,0x64L,251UL,0x69L,0x69L,251UL,0x64L},{255UL,0x7EL,5UL,0xE2L,254UL,1UL,255UL},{255UL,0x29L,255UL,0x5DL,0x96L,0x69L,0x96L},{0xE2L,0x4EL,0x4EL,0xE2L,0xBCL,255UL,0UL},{0xB7L,0x96L,255UL,0x69L,0xACL,6UL,255UL}}};
    uint16_t l_1591 = 0xE766L;
    int64_t l_1651[6] = {0L,0L,(-1L),0L,0L,(-1L)};
    int8_t ****l_1705 = &g_486;
    int8_t *****l_1704 = &l_1705;
    uint16_t l_1725 = 1UL;
    union U2 l_1734 = {0UL};
    uint32_t l_1743[5][9] = {{0UL,4294967295UL,0x7B85CC50L,0x7B85CC50L,4294967295UL,0UL,4294967295UL,0x7B85CC50L,0x7B85CC50L},{0x16AEFC6EL,0x16AEFC6EL,0UL,0x7B85CC50L,0UL,0x16AEFC6EL,0x16AEFC6EL,0UL,0x7B85CC50L},{0xD79FFEB5L,4294967295UL,0xD79FFEB5L,0UL,0UL,0xD79FFEB5L,4294967295UL,0xD79FFEB5L,0UL},{0xD79FFEB5L,0UL,0UL,0xD79FFEB5L,4294967295UL,0xD79FFEB5L,0UL,0UL,0xD79FFEB5L},{0x16AEFC6EL,0UL,0x7B85CC50L,0UL,0x16AEFC6EL,0x16AEFC6EL,0UL,0x7B85CC50L,0UL}};
    union U0 l_1751 = {0};
    int64_t l_1752 = 1L;
    uint8_t ****l_1762[7][6] = {{(void*)0,&g_933,&g_933,&g_933,(void*)0,&g_933},{(void*)0,&g_933,&g_933,&g_933,(void*)0,(void*)0},{&g_933,&g_933,&g_933,&g_933,(void*)0,&g_933},{&g_933,(void*)0,&g_933,&g_933,&g_933,&g_933},{(void*)0,(void*)0,&g_933,&g_933,&g_933,(void*)0},{&g_933,(void*)0,&g_933,&g_933,(void*)0,&g_933},{(void*)0,&g_933,&g_933,&g_933,(void*)0,(void*)0}};
    union U1 * const **l_1770[3];
    union U1 ***l_1771[1][9] = {{&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156}};
    union U3 l_1785[4][6][10] = {{{{-10L},{-1L},{-9L},{0L},{0xA669L},{4L},{0xA669L},{0L},{-9L},{-1L}},{{0x9424L},{-1L},{3L},{0x41EFL},{0x4CA6L},{0x599BL},{0x7EE9L},{0x1521L},{0x7EE9L},{0x599BL}},{{0xDE16L},{0L},{0L},{0L},{0xDE16L},{0x599BL},{8L},{4L},{-10L},{0x41EFL}},{{0x9424L},{0x1521L},{0x4CA6L},{4L},{6L},{4L},{0x4CA6L},{0x1521L},{0x9424L},{0x41EFL}},{{-10L},{4L},{8L},{0x599BL},{0xDE16L},{0L},{0L},{0L},{0xDE16L},{0x599BL}},{{0x7EE9L},{0x1521L},{0x7EE9L},{0x599BL},{0x4CA6L},{0x41EFL},{3L},{-1L},{0x9424L},{-1L}}},{{{-9L},{0L},{0xA669L},{4L},{0xA669L},{0L},{-9L},{-1L},{-10L},{0x1521L}},{{-1L},{-1L},{0x7EE9L},{0L},{0x9424L},{4L},{0x9424L},{0L},{0x7EE9L},{-1L}},{{0xA669L},{-1L},{8L},{0x41EFL},{0L},{0x599BL},{-9L},{0x1521L},{-9L},{0x599BL}},{{-1L},{0L},{0x4CA6L},{0L},{-1L},{0x599BL},{3L},{4L},{-1L},{0x41EFL}},{{0xA669L},{0x1521L},{0L},{4L},{-1L},{4L},{0L},{0x1521L},{0xA669L},{0x41EFL}},{{-1L},{4L},{3L},{0x599BL},{-1L},{0L},{0x4CA6L},{0L},{-1L},{0x599BL}}},{{{-9L},{0x1521L},{-9L},{0x599BL},{0L},{0x41EFL},{8L},{-1L},{0xA669L},{-1L}},{{0x7EE9L},{0L},{0x9424L},{4L},{0x9424L},{0L},{0x7EE9L},{-1L},{-1L},{0x1521L}},{{-10L},{-1L},{-9L},{-1L},{-1L},{0x599BL},{-1L},{-1L},{0xDE16L},{4L}},{{6L},{4L},{0x4CA6L},{0x1521L},{0x9424L},{0x41EFL},{-1L},{0L},{-1L},{0x41EFL}},{{8L},{-1L},{0xA669L},{-1L},{8L},{0x41EFL},{0L},{0x599BL},{-9L},{0x1521L}},{{6L},{0L},{0x9424L},{0x599BL},{-1L},{0x599BL},{0x9424L},{0L},{6L},{0x1521L}}},{{{-9L},{0x599BL},{0L},{0x41EFL},{8L},{-1L},{0xA669L},{-1L},{8L},{0x41EFL}},{{-1L},{0L},{-1L},{0x41EFL},{0x9424L},{0x1521L},{0x4CA6L},{4L},{6L},{4L}},{{0xDE16L},{-1L},{-1L},{0x599BL},{-1L},{-1L},{0xDE16L},{4L},{-9L},{0L}},{{0x7EE9L},{4L},{-1L},{-1L},{6L},{0x599BL},{6L},{-1L},{-1L},{4L}},{{-1L},{4L},{0L},{0x1521L},{0xA669L},{0x41EFL},{0xDE16L},{0L},{0xDE16L},{0x41EFL}},{{3L},{-1L},{0x9424L},{-1L},{3L},{0x41EFL},{0x4CA6L},{0x599BL},{0x7EE9L},{0x1521L}}}};
    uint64_t l_1790 = 18446744073709551609UL;
    int16_t *l_1855[9];
    int64_t ***l_1916 = &l_1515;
    union U1 l_1933 = {2UL};
    int32_t l_2001 = 0x04ED109DL;
    union U0 **l_2162 = &g_388;
    union U0 ***l_2161 = &l_2162;
    union U2 *l_2164 = &g_47[0];
    const union U1 *l_2204 = (void*)0;
    const union U1 **l_2203 = &l_2204;
    const union U1 ***l_2202 = &l_2203;
    const union U1 ****l_2201 = &l_2202;
    const union U1 *****l_2200 = &l_2201;
    int32_t l_2235 = (-1L);
    int8_t l_2237 = (-1L);
    uint8_t *** const **l_2272[1];
    const int16_t l_2294 = 9L;
    int16_t l_2363 = 0x064EL;
    uint32_t l_2364 = 18446744073709551613UL;
    union U3 *** const **l_2370 = (void*)0;
    uint16_t l_2378 = 0x4EE9L;
    uint16_t l_2417 = 0x0A60L;
    uint64_t l_2472[6][3] = {{0xE435C927A8550386LL,0xE435C927A8550386LL,18446744073709551615UL},{0UL,0UL,0UL},{0xE435C927A8550386LL,0xE435C927A8550386LL,18446744073709551615UL},{0UL,0UL,0UL},{0xE435C927A8550386LL,0xE435C927A8550386LL,18446744073709551615UL},{0UL,0UL,0UL}};
    uint16_t **l_2483 = &g_1448;
    const uint8_t ***l_2492[3][6] = {{&g_746,&g_746,(void*)0,&g_746,&l_1345[1][4][4],(void*)0},{&g_746,&l_1345[1][4][4],(void*)0,&l_1345[1][4][4],&g_746,(void*)0},{&l_1345[1][4][4],&g_746,(void*)0,&g_746,&g_746,(void*)0}};
    int32_t **l_2494[7][3][7] = {{{(void*)0,&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,(void*)0},{&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,(void*)0,(void*)0},{&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,&g_2264}},{{&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,&g_2264},{&g_2264,&g_2264,(void*)0,&g_2264,&g_2264,&g_2264,&g_2264},{&g_2264,(void*)0,&g_2264,(void*)0,&g_2264,&g_2264,&g_2264}},{{&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,(void*)0},{(void*)0,&g_2264,&g_2264,&g_2264,&g_2264,(void*)0,(void*)0},{(void*)0,&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,&g_2264}},{{&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,(void*)0,&g_2264},{(void*)0,&g_2264,&g_2264,(void*)0,&g_2264,&g_2264,&g_2264},{&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,(void*)0}},{{&g_2264,&g_2264,(void*)0,(void*)0,&g_2264,&g_2264,&g_2264},{&g_2264,&g_2264,(void*)0,&g_2264,(void*)0,&g_2264,&g_2264},{&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,&g_2264}},{{(void*)0,&g_2264,&g_2264,&g_2264,(void*)0,(void*)0,&g_2264},{(void*)0,&g_2264,&g_2264,&g_2264,(void*)0,&g_2264,(void*)0},{&g_2264,&g_2264,(void*)0,&g_2264,&g_2264,&g_2264,&g_2264}},{{&g_2264,&g_2264,(void*)0,&g_2264,&g_2264,&g_2264,(void*)0},{&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,&g_2264},{&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,&g_2264,&g_2264}}};
    union U1 l_2495 = {0xFC65EB01260AC639LL};
    uint16_t l_2496 = 65534UL;
    uint32_t l_2540 = 0UL;
    uint16_t l_2585 = 0xFF2AL;
    const int32_t l_2589 = 0xBEC49CCFL;
    int8_t l_2654 = 0x8DL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1309[i] = 0x2341E1F6L;
    for (i = 0; i < 2; i++)
        l_1457[i] = &g_100;
    for (i = 0; i < 3; i++)
        l_1770[i] = &g_1766[0];
    for (i = 0; i < 9; i++)
        l_1855[i] = &g_2;
    for (i = 0; i < 1; i++)
        l_2272[i] = &g_2271[2];
    return p_28;
}







static int8_t * func_30(int32_t * p_31, int8_t p_32, int8_t * const p_33)
{
    uint16_t l_1134[1];
    int16_t *l_1135 = &g_362;
    uint32_t *l_1136 = (void*)0;
    uint32_t *l_1137 = (void*)0;
    uint32_t *l_1138[6][6] = {{&g_100,&g_100,&g_100,&g_100,&g_100,&g_100},{&g_100,&g_100,&g_100,&g_100,&g_100,&g_100},{&g_100,&g_100,&g_100,&g_100,&g_100,&g_100},{&g_100,&g_100,&g_100,&g_100,&g_100,&g_100},{&g_100,&g_100,&g_100,&g_100,&g_100,&g_100},{&g_100,&g_100,&g_100,&g_100,&g_100,&g_100}};
    int32_t l_1139 = (-1L);
    int32_t l_1140[1][4][7] = {{{(-1L),5L,0L,6L,6L,0L,5L},{6L,(-1L),2L,(-3L),7L,0xBB8A8B1DL,0xBB8A8B1DL},{2L,(-1L),6L,(-1L),2L,(-3L),7L},{0L,5L,(-1L),(-3L),0x29B373E1L,(-3L),(-1L)}}};
    uint8_t l_1152[6] = {0x1CL,0x2BL,0x2BL,0x1CL,0x2BL,0x2BL};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1134[i] = 0x4A64L;
    if ((((l_1134[0] || (g_1105.f3 = (l_1140[0][0][5] &= (0L <= (l_1139 = (((*l_1135) = (**g_322)) , ((***g_933) , p_32))))))) >= (g_101 , (p_32 >= (65534UL || (((safe_sub_func_int32_t_s_s(((+(l_1134[0] != l_1134[0])) >= 0x3825E4D8L), l_1134[0])) && l_1134[0]) & 0xD29341D2L))))) == l_1134[0]))
    {
        uint64_t **l_1144 = (void*)0;
        int8_t *l_1148 = &g_97;
        (*p_31) |= (-7L);
        if (((l_1140[0][1][6] |= (l_1144 == (void*)0)) , (*g_98)))
        {
            for (g_104.f0 = 1; (g_104.f0 <= 5); g_104.f0 += 1)
            {
                uint64_t l_1145 = 0x67590EB2E91D1CA1LL;
                l_1145++;
            }
            return l_1148;
        }
        else
        {
            return l_1148;
        }
    }
    else
    {
        int32_t *l_1151[7] = {&g_16,&l_1140[0][0][5],&l_1140[0][0][5],&g_16,&l_1140[0][0][5],&l_1140[0][0][5],&g_16};
        int8_t *l_1155[4][5] = {{&g_97,&g_97,&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97,&g_97,&g_97}};
        int i, j;
        (*p_31) = (safe_mul_func_uint16_t_u_u((**g_685), (**g_685)));
        --l_1152[1];
        return l_1155[2][3];
    }
}







static int32_t * func_35(uint16_t p_36, int8_t p_37)
{
    uint8_t l_1096 = 3UL;
    int8_t l_1106 = 0x6FL;
    int32_t l_1107[7] = {0xCC7952C6L,0x15FAE711L,0x15FAE711L,0xCC7952C6L,0x15FAE711L,0x709B8E60L,0x15FAE711L};
    int32_t *l_1108 = &l_1107[1];
    int32_t *l_1109 = &l_1107[0];
    int32_t *l_1110 = &g_16;
    int32_t *l_1111 = &l_1107[4];
    int32_t *l_1112 = &l_1107[6];
    int32_t *l_1113 = (void*)0;
    int32_t *l_1114 = &l_1107[4];
    int32_t *l_1115 = &g_16;
    int32_t *l_1116 = (void*)0;
    int32_t *l_1117 = (void*)0;
    int32_t *l_1118 = &g_16;
    int32_t *l_1119 = (void*)0;
    int32_t *l_1120 = &l_1107[4];
    int32_t *l_1121[9][8] = {{&l_1107[1],&l_1107[1],(void*)0,&l_1107[4],&l_1107[4],&l_1107[4],(void*)0,&l_1107[1]},{&l_1107[1],(void*)0,&g_16,(void*)0,(void*)0,&g_16,(void*)0,&l_1107[1]},{(void*)0,&l_1107[4],&l_1107[1],&l_1107[4],&l_1107[1],&l_1107[4],(void*)0,(void*)0},{&l_1107[4],&l_1107[4],&g_16,&g_16,&l_1107[4],&l_1107[4],(void*)0,&l_1107[4]},{&l_1107[4],&l_1107[4],(void*)0,&l_1107[4],&l_1107[4],&g_16,&g_16,&l_1107[4]},{&l_1107[4],(void*)0,(void*)0,&l_1107[4],&l_1107[1],&l_1107[4],&l_1107[1],&l_1107[4]},{(void*)0,&l_1107[1],(void*)0,&g_16,(void*)0,(void*)0,&g_16,(void*)0},{&l_1107[1],&l_1107[1],(void*)0,&l_1107[4],&l_1107[4],&l_1107[4],(void*)0,&l_1107[1]},{&l_1107[1],(void*)0,&g_16,(void*)0,(void*)0,&g_16,(void*)0,&l_1107[1]}};
    uint8_t l_1122 = 0x91L;
    int32_t *l_1131 = &g_16;
    int i, j;
    l_1107[4] &= ((!(safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(0x007CL, l_1096)) >= (5UL != l_1096)), (((safe_mul_func_int16_t_s_s(((*g_388) , ((***g_321) = p_36)), (safe_add_func_int16_t_s_s(l_1096, (((safe_lshift_func_int16_t_s_u(((((*g_10) = (safe_mul_func_uint8_t_u_u((g_1105 , (p_36 ^ p_37)), p_37))) && p_37) < (*g_686)), 11)) > 0x4AL) < p_36))))) ^ l_1106) <= p_37)))) || 0x56BA5B9FL);
    l_1122--;
    for (l_1122 = 0; (l_1122 < 19); l_1122++)
    {
        int32_t *l_1130 = &l_1107[4];
        for (g_1105.f2 = 0; (g_1105.f2 == 7); g_1105.f2 = safe_add_func_int8_t_s_s(g_1105.f2, 9))
        {
            int32_t *l_1129[8][10][3] = {{{&g_16,&l_1107[4],&l_1107[2]},{&l_1107[4],&l_1107[4],&l_1107[4]},{&g_16,&l_1107[5],&g_16},{&g_16,(void*)0,&g_16},{&g_16,&l_1107[3],(void*)0},{&l_1107[4],&l_1107[4],&l_1107[5]},{&g_16,&l_1107[0],&l_1107[2]},{&g_16,&l_1107[4],&l_1107[3]},{&g_16,&l_1107[0],&g_16},{&l_1107[4],(void*)0,&l_1107[4]}},{{&g_16,&g_16,(void*)0},{&g_16,&l_1107[4],&g_16},{&g_16,&l_1107[4],&l_1107[2]},{&l_1107[4],&l_1107[4],&l_1107[4]},{&g_16,&l_1107[5],&g_16},{&g_16,(void*)0,&g_16},{&g_16,&l_1107[3],(void*)0},{&l_1107[4],&l_1107[4],&l_1107[5]},{&g_16,&l_1107[0],&l_1107[2]},{&g_16,&l_1107[4],&l_1107[3]}},{{&g_16,&l_1107[0],&g_16},{&l_1107[4],(void*)0,&l_1107[4]},{&g_16,&g_16,(void*)0},{&g_16,&l_1107[4],&g_16},{&g_16,&l_1107[4],&l_1107[2]},{&l_1107[4],&l_1107[4],&l_1107[4]},{&g_16,&l_1107[5],&g_16},{&g_16,(void*)0,&g_16},{&g_16,&l_1107[3],(void*)0},{&l_1107[4],&l_1107[4],&l_1107[5]}},{{&g_16,&l_1107[0],&l_1107[2]},{&g_16,&l_1107[4],&l_1107[3]},{&g_16,&l_1107[0],&g_16},{&l_1107[4],(void*)0,&l_1107[4]},{&g_16,&g_16,(void*)0},{&g_16,&l_1107[4],&g_16},{&g_16,&l_1107[4],&l_1107[2]},{&l_1107[4],&l_1107[4],&l_1107[4]},{&g_16,&l_1107[5],&g_16},{&l_1107[5],&l_1107[4],&l_1107[5]}},{{&l_1107[4],&g_16,&g_16},{&g_16,&l_1107[4],&l_1107[4]},{&l_1107[4],(void*)0,(void*)0},{&l_1107[5],(void*)0,&g_16},{&l_1107[4],&l_1107[4],(void*)0},{&g_16,&l_1107[4],&g_16},{&l_1107[4],&l_1107[2],&g_16},{&l_1107[5],&l_1107[4],&g_16},{&l_1107[4],(void*)0,(void*)0},{&g_16,(void*)0,&l_1107[4]}},{{&l_1107[4],&g_16,(void*)0},{&l_1107[5],&l_1107[4],&l_1107[5]},{&l_1107[4],&g_16,&g_16},{&g_16,&l_1107[4],&l_1107[4]},{&l_1107[4],(void*)0,(void*)0},{&l_1107[5],(void*)0,&g_16},{&l_1107[4],&l_1107[4],(void*)0},{&g_16,&l_1107[4],&g_16},{&l_1107[4],&l_1107[2],&g_16},{&l_1107[5],&l_1107[4],&g_16}},{{&l_1107[4],(void*)0,(void*)0},{&g_16,(void*)0,&l_1107[4]},{&l_1107[4],&g_16,(void*)0},{&l_1107[5],&l_1107[4],&l_1107[5]},{&l_1107[4],&g_16,&g_16},{&g_16,&l_1107[4],&l_1107[4]},{&l_1107[4],(void*)0,(void*)0},{&l_1107[5],(void*)0,&g_16},{&l_1107[4],&l_1107[4],(void*)0},{&g_16,&l_1107[4],&g_16}},{{&l_1107[4],&l_1107[2],&g_16},{&l_1107[5],&l_1107[4],&g_16},{&l_1107[4],(void*)0,(void*)0},{&g_16,(void*)0,&l_1107[4]},{&l_1107[4],&g_16,(void*)0},{&l_1107[5],&l_1107[4],&l_1107[5]},{&l_1107[4],&g_16,&g_16},{&g_16,&l_1107[4],&l_1107[4]},{&l_1107[4],(void*)0,(void*)0},{&l_1107[5],(void*)0,&g_16}}};
            int i, j, k;
            return &g_16;
        }
        return &g_16;
    }
    (*g_258) = &l_1107[4];
    return l_1131;
}







static uint16_t func_38(union U3 * p_39)
{
    uint32_t l_797 = 0x2805DDBBL;
    int32_t l_802 = 0L;
    uint64_t *l_803 = (void*)0;
    uint64_t *l_804 = &g_107[3][0];
    uint8_t ***l_816 = &g_661;
    uint8_t ****l_815[3];
    int32_t l_817[8];
    int32_t *l_836 = &g_16;
    union U1 **l_843 = &g_157;
    int8_t l_879 = (-1L);
    int32_t l_888[10][5][2] = {{{0xFC97C8A7L,9L},{(-10L),(-9L)},{0x7BFCA061L,0x7BFCA061L},{0x7BFCA061L,(-9L)},{(-10L),9L}},{{0xFC97C8A7L,2L},{(-10L),0xFC97C8A7L},{0x7BFCA061L,0x770D3975L},{0x7BFCA061L,0xFC97C8A7L},{(-10L),2L}},{{0xFC97C8A7L,9L},{(-10L),(-9L)},{0x7BFCA061L,0x7BFCA061L},{0x7BFCA061L,(-9L)},{(-10L),9L}},{{0xFC97C8A7L,2L},{(-10L),0xFC97C8A7L},{0x7BFCA061L,0x770D3975L},{0x7BFCA061L,0xFC97C8A7L},{(-10L),2L}},{{0xFC97C8A7L,9L},{(-10L),(-9L)},{0x7BFCA061L,0x7BFCA061L},{0x7BFCA061L,(-9L)},{(-10L),9L}},{{0xFC97C8A7L,2L},{(-10L),0xFC97C8A7L},{0x7BFCA061L,0x770D3975L},{0x7BFCA061L,0xFC97C8A7L},{(-10L),2L}},{{0xFC97C8A7L,9L},{(-10L),(-9L)},{0x7BFCA061L,0x7BFCA061L},{0x7BFCA061L,0L},{0xDD0474D6L,0x7BFCA061L}},{{(-10L),0x770D3975L},{0xDD0474D6L,(-10L)},{0xFC97C8A7L,(-9L)},{0xFC97C8A7L,(-10L)},{0xDD0474D6L,0x770D3975L}},{{(-10L),0x7BFCA061L},{0xDD0474D6L,0L},{0xFC97C8A7L,0xFC97C8A7L},{0xFC97C8A7L,0L},{0xDD0474D6L,0x7BFCA061L}},{{(-10L),0x770D3975L},{0xDD0474D6L,(-10L)},{0xFC97C8A7L,(-9L)},{0xFC97C8A7L,(-10L)},{0xDD0474D6L,0x770D3975L}}};
    int32_t l_890 = 0L;
    int8_t l_901 = 0x94L;
    const union U0 l_980 = {0};
    int8_t *l_1025 = (void*)0;
    union U3 **l_1042 = &g_374;
    uint16_t l_1053[8] = {6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_815[i] = &l_816;
    for (i = 0; i < 8; i++)
        l_817[i] = 1L;
    if (((((safe_sub_func_uint64_t_u_u((l_797 & l_797), ((*l_804) = (safe_add_func_uint8_t_u_u(0x3EL, (l_797 == (safe_add_func_int16_t_s_s(1L, (l_802 = l_797))))))))) == (safe_sub_func_int32_t_s_s(((((safe_add_func_uint8_t_u_u(1UL, (l_817[4] = (((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(6UL, ((safe_mod_func_uint64_t_u_u((((l_815[2] != &l_816) || 7L) != l_797), l_797)) <= l_797))), (***g_321))) | 5UL) >= l_797)))) & (-2L)) ^ l_797) | 0L), l_797))) | l_797) ^ 0x76L))
    {
        uint32_t l_831 = 8UL;
        const int32_t *l_834 = &l_817[3];
        int32_t l_865 = 1L;
        uint32_t l_867 = 0xE7D1F7B0L;
        int32_t *l_877 = &l_802;
        int32_t l_878 = 0L;
        int32_t l_880 = 0x0ECB9679L;
        int32_t l_881[5][9][2] = {{{8L,0L},{1L,0L},{8L,1L},{(-1L),(-1L)},{(-1L),1L},{8L,0L},{1L,0L},{8L,1L},{(-1L),(-1L)}},{{(-1L),1L},{8L,0L},{1L,0L},{8L,1L},{(-1L),(-1L)},{(-1L),1L},{8L,0L},{1L,0L},{8L,1L}},{{(-1L),(-1L)},{(-1L),1L},{8L,0L},{1L,0L},{8L,1L},{(-1L),(-1L)},{(-1L),1L},{8L,0L},{1L,0L}},{{8L,1L},{(-1L),(-1L)},{(-1L),1L},{8L,0L},{1L,0L},{8L,1L},{(-1L),(-1L)},{(-1L),1L},{8L,0L}},{{1L,0L},{8L,1L},{(-1L),(-1L)},{(-1L),1L},{8L,0L},{1L,0L},{8L,1L},{(-1L),(-1L)},{(-1L),1L}}};
        int32_t l_884 = 0x79C694B2L;
        int32_t l_902 = 0x808C4798L;
        int i, j, k;
lbl_870:
        for (g_100 = (-15); (g_100 < 38); g_100 = safe_add_func_uint8_t_u_u(g_100, 5))
        {
            uint8_t l_824 = 254UL;
            const int32_t **l_835 = &l_834;
            int32_t l_853 = 0xE8E10942L;
            (*g_98) ^= ((safe_mul_func_int8_t_s_s(((((safe_add_func_uint16_t_u_u(l_824, (l_824 , 4L))) == (safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((***g_660), ((((safe_mul_func_uint8_t_u_u((((((*g_388) , g_107[3][1]) ^ l_831) | ((safe_div_func_uint64_t_u_u((((((*l_835) = l_834) == (l_836 = (*g_258))) | l_817[4]) , (*l_834)), l_831)) , (**l_835))) ^ l_802), 255UL)) != g_2) | 65535UL) > l_802))), l_817[7]))) | l_831) | (**g_685)), l_831)) , (*l_834));
            for (g_9.f2 = 0; (g_9.f2 < 50); g_9.f2++)
            {
                int8_t l_852 = 0x6CL;
                int32_t *l_854 = (void*)0;
                int32_t *l_855 = &l_802;
            }
        }
        for (g_104.f0 = 9; (g_104.f0 == 6); g_104.f0--)
        {
            int32_t l_860 = 1L;
            int32_t *l_861 = &l_817[4];
            int32_t *l_862 = &g_16;
            int32_t *l_863 = (void*)0;
            int32_t *l_864[8] = {&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16};
            union U1 ****l_873 = &g_155[7];
            uint32_t l_904[10][2] = {{0x641C507BL,0x641C507BL},{0x641C507BL,0x641C507BL},{0x641C507BL,0x641C507BL},{0x641C507BL,0x641C507BL},{0x641C507BL,0x641C507BL},{0x641C507BL,0x641C507BL},{0x641C507BL,0x641C507BL},{0x641C507BL,0x641C507BL},{0x641C507BL,0x641C507BL},{0x641C507BL,0x641C507BL}};
            int i, j;
            l_867++;
            for (g_97 = 0; (g_97 <= 2); g_97 += 1)
            {
                int i, j;
                if (g_104.f0)
                    goto lbl_870;
                if (g_107[g_97][g_97])
                    break;
            }
            for (g_16 = 0; (g_16 < (-17)); --g_16)
            {
                union U1 *****l_874 = (void*)0;
                union U1 *****l_875[6][7] = {{&l_873,&l_873,&l_873,&l_873,&l_873,&l_873,&l_873},{&l_873,&l_873,&l_873,&l_873,&l_873,&l_873,&l_873},{&l_873,&l_873,&l_873,&l_873,&l_873,&l_873,&l_873},{&l_873,&l_873,&l_873,&l_873,&l_873,&l_873,&l_873},{&l_873,&l_873,&l_873,&l_873,&l_873,&l_873,&l_873},{&l_873,&l_873,&l_873,&l_873,&l_873,&l_873,&l_873}};
                int32_t l_882[10];
                int32_t l_893 = 0x57EF90C4L;
                uint64_t l_894[2];
                union U2 *l_899[1][6][4] = {{{&g_900,&g_900,&g_47[1],&g_900},{&g_900,&g_47[1],&g_47[1],&g_900},{&g_47[1],&g_900,&g_47[1],&g_47[1]},{&g_900,&g_900,&g_47[1],&g_900},{&g_900,&g_47[1],&g_47[1],&g_900},{&g_47[1],&g_900,&g_47[1],&g_47[1]}}};
                int i, j, k;
                for (i = 0; i < 10; i++)
                    l_882[i] = 0x93F9349CL;
                for (i = 0; i < 2; i++)
                    l_894[i] = 3UL;
                if (((g_876 = l_873) != (void*)0))
                {
                    int32_t l_883 = 0xBC0D5DDDL;
                    int32_t l_885 = 0L;
                    int32_t l_886 = (-7L);
                    int32_t l_887 = 1L;
                    int32_t l_889 = 1L;
                    int32_t l_891 = (-5L);
                    int32_t l_892 = 0x8F2338DAL;
                    union U2 *l_897 = (void*)0;
                    union U2 **l_898[1][4];
                    int32_t l_903 = (-1L);
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_898[i][j] = &l_897;
                    }
                    (*g_258) = l_877;
                    l_894[1]--;
                    l_899[0][2][0] = l_897;
                    ++l_904[1][0];
                }
                else
                {
                    uint32_t l_907 = 4UL;
                    if (l_907)
                        break;
                    return l_907;
                }
            }
        }
        for (g_85 = 0; (g_85 >= 21); ++g_85)
        {
            return (**g_685);
        }
    }
    else
    {
        uint64_t l_916[3];
        union U1 l_925 = {0x4A86BF4C2CF8AE62LL};
        uint8_t ***l_932 = &g_661;
        int32_t l_941[1][1];
        uint32_t l_957[3][10] = {{0xD2C8F89FL,0xD2C8F89FL,0UL,0xD2C8F89FL,0xD2C8F89FL,0UL,0xD2C8F89FL,0xD2C8F89FL,0UL,0xD2C8F89FL},{0xD2C8F89FL,2UL,2UL,0xD2C8F89FL,2UL,2UL,0xD2C8F89FL,2UL,2UL,0xD2C8F89FL},{2UL,0xD2C8F89FL,2UL,2UL,0xD2C8F89FL,2UL,2UL,0xD2C8F89FL,2UL,2UL}};
        int32_t l_984 = 1L;
        int i, j;
        for (i = 0; i < 3; i++)
            l_916[i] = 0x2BF4E05D3843BCAALL;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_941[i][j] = 0xE7F98C1FL;
        }
        for (l_879 = (-5); (l_879 == (-6)); --l_879)
        {
            uint16_t *l_917 = &g_514;
            int32_t **l_930 = (void*)0;
            int32_t l_931 = 0L;
            l_931 |= (safe_div_func_uint8_t_u_u((***g_660), ((*g_10) = (safe_mod_func_uint16_t_u_u((l_916[1] && ((*l_917)++)), (safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((*g_686), (3L > (+g_11)))), (l_925 , (((((*l_836) = ((safe_mod_func_uint64_t_u_u(1UL, (safe_sub_func_int32_t_s_s(0x8847F5C2L, (&g_83[0] != l_930))))) ^ 0xDBCCDE27L)) > 0xFFL) , 1UL) <= 7UL)))))))));
            (*g_258) = (*g_258);
            if ((*g_98))
                continue;
        }
        for (g_362 = 1; (g_362 >= 0); g_362 -= 1)
        {
            int32_t l_940 = 0L;
            int32_t l_944 = 0x31573D2EL;
            int32_t l_945 = 0xEF825FFCL;
            int32_t l_946 = 0x72B8614DL;
            int32_t l_947 = 0xED24139CL;
            int32_t l_948 = 0x0F91EECEL;
            int32_t l_949 = 4L;
            int32_t l_950 = 0x6D42CFB7L;
            int32_t l_951 = 0x09390EFAL;
            int32_t l_952 = 0L;
            int32_t l_953 = (-4L);
            int32_t l_954 = 0xF1199B2FL;
            int32_t l_955 = 2L;
            int32_t l_956 = 0xDAD3BC3EL;
            uint64_t *l_961[1][3];
            uint64_t l_979 = 1UL;
            const union U3 ***l_1021 = (void*)0;
            int8_t *l_1023 = &g_11;
            int8_t *l_1026 = &g_97;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_961[i][j] = &g_107[0][1];
            }
            if ((&g_661 != (g_933 = l_932)))
            {
                const uint64_t *l_936 = &g_937;
                const uint64_t **l_935[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                g_934 = (l_935[4] = g_934);
            }
            else
            {
                int i;
                return l_916[(g_362 + 1)];
            }
            l_941[0][0] &= (safe_lshift_func_int16_t_s_u(l_940, 5));
            if ((*g_98))
            {
                int32_t *l_942 = &g_16;
                int32_t *l_943[7] = {&l_941[0][0],&l_941[0][0],&l_941[0][0],&l_941[0][0],&l_941[0][0],&l_941[0][0],&l_941[0][0]};
                int32_t l_967 = 0x4E35B557L;
                int i;
                l_957[2][9]--;
                if ((+0xA8DE1ECBL))
                {
                    if (((void*)0 != l_961[0][2]))
                    {
                        return (*l_836);
                    }
                    else
                    {
                        const uint16_t ***l_963 = &g_685;
                        const uint16_t ****l_962 = &l_963;
                        (*l_836) = 0L;
                        (*l_962) = &g_685;
                        if ((*g_98))
                            continue;
                    }
                    for (l_950 = 2; (l_950 >= 0); l_950 -= 1)
                    {
                        uint16_t l_964 = 0x1716L;
                        ++l_964;
                    }
                    return (*g_686);
                }
                else
                {
                    uint8_t l_968 = 0UL;
                    for (l_890 = 2; (l_890 >= 0); l_890 -= 1)
                    {
                        int i;
                        g_83[g_362] = l_943[(l_890 + 4)];
                    }
                    ++l_968;
                }
                if ((safe_add_func_uint16_t_u_u(((l_925.f0 == (*g_98)) <= ((*l_942) <= (l_956 = (safe_div_func_int16_t_s_s(((((safe_mod_func_uint32_t_u_u(g_101, (safe_div_func_uint16_t_u_u((g_47[0] , 0x8081L), l_979)))) || (l_945 = ((l_980 , g_981) == (void*)0))) >= l_916[1]) ^ 0xC2L), l_941[0][0]))))), (*l_836))))
                {
                    l_984 = (safe_rshift_func_int16_t_s_s(0L, 5));
                }
                else
                {
                    if ((*l_836))
                        break;
                }
                (*l_836) = (safe_lshift_func_int16_t_s_s((-1L), (g_97 && 4294967288UL)));
            }
            else
            {
                return (*g_686);
            }
            for (l_956 = 1; (l_956 >= 0); l_956 -= 1)
            {
                uint8_t l_989 = 6UL;
                int32_t l_990 = 6L;
                union U3 ***l_1020 = &g_373;
                int64_t *l_1022[10] = {&g_88,&g_510[1][1][1],&g_510[1][1][1],&g_88,&g_510[1][1][1],&g_510[1][1][1],&g_88,&g_510[1][1][1],&g_510[1][1][1],&g_88};
                int8_t **l_1024[6] = {(void*)0,&g_10,(void*)0,(void*)0,&g_10,(void*)0};
                const union U2 l_1043 = {0UL};
                uint32_t l_1044 = 18446744073709551615UL;
                int32_t l_1052[10][4] = {{(-9L),0x478E7EBEL,(-9L),0x20E73548L},{0x353AA30EL,0x478E7EBEL,1L,4L},{0x478E7EBEL,0xA903ADC3L,0xA903ADC3L,0x478E7EBEL},{(-9L),4L,0xA903ADC3L,0x20E73548L},{0x478E7EBEL,0x353AA30EL,1L,0x353AA30EL},{0x353AA30EL,0xA903ADC3L,(-9L),0x353AA30EL},{(-9L),0x353AA30EL,0x20E73548L,0x20E73548L},{4L,4L,1L,0x478E7EBEL},{4L,0xA903ADC3L,0x20E73548L,4L},{(-9L),0x478E7EBEL,(-9L),0x20E73548L}};
                int i, j;
            }
        }
    }
    return (**g_685);
}







static union U3 * func_40(union U2 p_41, union U3 p_42, union U2 p_43, int8_t * p_44)
{
    int32_t *l_110 = (void*)0;
    int32_t *l_111 = &g_16;
    int32_t *l_112 = &g_16;
    int32_t *l_113 = &g_16;
    int32_t *l_114 = &g_16;
    int32_t *l_115 = &g_16;
    int32_t *l_116 = &g_16;
    int32_t *l_117 = &g_16;
    int32_t *l_118 = &g_16;
    int32_t *l_119 = &g_16;
    int32_t *l_120[4] = {&g_16,&g_16,&g_16,&g_16};
    int8_t l_121 = 0L;
    uint8_t l_122 = 4UL;
    union U1 *l_153 = &g_104;
    union U1 **l_152 = &l_153;
    union U1 ***l_151[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t **l_259 = &g_183;
    int16_t l_329 = 0x9079L;
    uint8_t l_345 = 0x7CL;
    int8_t l_466 = 0xDBL;
    const int64_t *l_567 = (void*)0;
    const int64_t **l_566[8];
    uint64_t **l_588[7][2] = {{&g_381[0],&g_381[1]},{&g_381[3],&g_381[3]},{&g_381[1],&g_381[0]},{(void*)0,&g_381[0]},{&g_381[1],&g_381[3]},{&g_381[3],&g_381[1]},{&g_381[0],(void*)0}};
    int8_t ****l_601 = (void*)0;
    union U3 ** const l_768 = &g_374;
    int32_t l_772 = (-8L);
    uint64_t l_791 = 1UL;
    int i, j;
    for (i = 0; i < 8; i++)
        l_566[i] = &l_567;
    l_122--;
    return (*g_373);
}







static const int16_t func_52(int16_t p_53)
{
    const int32_t l_71 = (-9L);
    int8_t *l_72 = &g_11;
    union U3 *l_73 = &g_9;
    union U1 *l_106 = &g_104;
    union U1 **l_105 = &l_106;
    for (g_9.f0 = (-13); (g_9.f0 != (-25)); g_9.f0 = safe_sub_func_uint16_t_u_u(g_9.f0, 6))
    {
        if (p_53)
            break;
    }
    (*l_105) = func_56(g_9, (safe_lshift_func_int8_t_s_s((g_47[0] , (((safe_lshift_func_int8_t_s_u((((safe_add_func_uint16_t_u_u(p_53, p_53)) < (65535UL && (safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((((0xDCDCBD5F5AB95DFELL > (l_71 , (((void*)0 == l_72) & l_71))) , l_73) == l_73) != l_71), 4)) != 0xC28784865E5AB8BFLL), (*g_10))))) == p_53), 4)) , g_9.f1) , (*g_10))), (*g_10))), &g_11, p_53);
    return p_53;
}







static union U1 * const func_56(union U3 p_57, int64_t p_58, int8_t * p_59, uint16_t p_60)
{
    int32_t *l_80 = &g_16;
    int32_t **l_81[5][5] = {{&l_80,&l_80,&l_80,&l_80,&l_80},{&l_80,&l_80,&l_80,&l_80,&l_80},{&l_80,&l_80,&l_80,&l_80,&l_80},{&l_80,&l_80,&l_80,&l_80,&l_80},{&l_80,&l_80,&l_80,&l_80,&l_80}};
    int32_t *l_82 = &g_16;
    uint64_t *l_84 = &g_85;
    union U0 l_86[1][3][10] = {{{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}}};
    int64_t *l_87 = &g_88;
    int64_t *l_94 = (void*)0;
    int64_t **l_93 = &l_94;
    int8_t *l_95 = (void*)0;
    int8_t *l_96 = &g_97;
    uint32_t l_102[6][1][7] = {{{0xF203748AL,0xF203748AL,18446744073709551615UL,18446744073709551615UL,0xF203748AL,0xF203748AL,18446744073709551615UL}},{{0x132C5A17L,0UL,0x132C5A17L,0UL,0x132C5A17L,0UL,0x132C5A17L}},{{0xF203748AL,18446744073709551615UL,18446744073709551615UL,0xF203748AL,0xF203748AL,18446744073709551615UL,18446744073709551615UL}},{{0x74323298L,0UL,0x74323298L,0UL,0x74323298L,0UL,0x74323298L}},{{0xF203748AL,0xF203748AL,18446744073709551615UL,18446744073709551615UL,0xF203748AL,0xF203748AL,18446744073709551615UL}},{{0x132C5A17L,0UL,0x132C5A17L,0UL,0x132C5A17L,0UL,0x132C5A17L}}};
    int i, j, k;
    (*l_80) = ((safe_sub_func_uint8_t_u_u((((safe_div_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(((*l_84) &= ((l_82 = l_80) == (g_83[0] = &g_16))), ((p_57 , l_86[0][2][8]) , ((*l_87) ^= (*l_80))))), (safe_lshift_func_int8_t_s_s((*p_59), (g_101 &= ((safe_mod_func_uint16_t_u_u(((((*l_93) = (void*)0) != ((((((g_100 = (((*l_96) = (*g_10)) , (g_99 |= (((void*)0 != g_98) , 0x5B9AADFEL)))) , p_60) ^ p_60) < 0x8EL) >= 7L) , &p_58)) > 1UL), 65535UL)) > 65527UL)))))) , 0x63D90BC214255FA7LL) <= l_102[0][0][5]), 2L)) ^ 4294967295UL);
    return g_103[2][4][1];
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
    transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
    transparent_crc(g_9.f1, "g_9.f1", print_hash_value);
    transparent_crc(g_9.f2, "g_9.f2", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_47[i].f0, "g_47[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_104.f1, "g_104.f1", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_107[i][j], "g_107[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_510[i][j][k], "g_510[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_866, "g_866", print_hash_value);
    transparent_crc(g_900.f0, "g_900.f0", print_hash_value);
    transparent_crc(g_937, "g_937", print_hash_value);
    transparent_crc(g_1133, "g_1133", print_hash_value);
    transparent_crc(g_1210, "g_1210", print_hash_value);
    transparent_crc(g_1404, "g_1404", print_hash_value);
    transparent_crc(g_1488, "g_1488", print_hash_value);
    transparent_crc(g_1494, "g_1494", print_hash_value);
    transparent_crc(g_1789, "g_1789", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2031[i], "g_2031[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_2059[i][j][k], "g_2059[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2265, "g_2265", print_hash_value);
    transparent_crc(g_2430, "g_2430", print_hash_value);
    transparent_crc(g_2464.f0, "g_2464.f0", print_hash_value);
    transparent_crc(g_2498, "g_2498", print_hash_value);
    transparent_crc(g_2514, "g_2514", print_hash_value);
    transparent_crc(g_2709, "g_2709", print_hash_value);
    transparent_crc(g_2714, "g_2714", print_hash_value);
    transparent_crc(g_2806, "g_2806", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
