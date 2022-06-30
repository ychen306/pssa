// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 1EDFBCD3
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
   unsigned f0 : 27;
   signed f1 : 4;
   unsigned f2 : 22;
   unsigned f3 : 10;
};
#pragma pack(pop)

struct S1 {
   unsigned f0 : 11;
   struct S0 f1;
   int32_t f2;
};


static int64_t g_2 = 0xD1E814B733C63384LL;
static uint16_t g_3 = 0xEB6BL;
static int16_t g_18 = 0L;
static int32_t g_38 = 0L;
static int32_t g_85 = 0xA0E68526L;
static int32_t g_92 = (-1L);
static int8_t g_93[10] = {0xC1L,0x93L,0x42L,0x42L,0x93L,0xC1L,0x93L,0x42L,0x42L,0x93L};
static uint64_t g_101 = 0xBB371DABD3396AC6LL;
static uint16_t g_125 = 65535UL;
static int32_t *g_133[5] = {&g_85,&g_85,&g_85,&g_85,&g_85};
static int32_t **g_132 = &g_133[4];
static struct S1 g_154 = {25,{5171,-2,876,4},0L};
static const int16_t *g_173 = (void*)0;
static const int16_t **g_172 = &g_173;
static uint16_t g_174 = 65532UL;
static struct S0 *g_225 = &g_154.f1;
static uint8_t g_315 = 248UL;
static uint8_t g_319 = 0UL;
static uint32_t g_347 = 0xCA23B12CL;
static int64_t g_409 = 1L;
static uint32_t *g_427 = &g_347;
static int16_t g_430 = 7L;
static uint32_t g_443 = 0UL;
static int64_t *g_446 = &g_409;
static int64_t **g_445 = &g_446;
static int64_t ***g_444 = &g_445;
static uint32_t g_452 = 18446744073709551607UL;
static uint16_t *g_463 = &g_174;
static int16_t g_466 = 0xDFDCL;
static int16_t * const *g_570 = (void*)0;
static int16_t * const **g_569 = &g_570;
static struct S0 g_584 = {2956,3,1066,7};
static struct S0 g_586[1] = {{10705,2,1296,10}};
static const struct S0 g_596 = {9433,3,1881,23};
static const struct S0 g_598[10][6] = {{{2239,-1,1126,5},{2239,-1,1126,5},{10348,2,1768,18},{11025,1,1072,13},{1878,-2,1012,23},{1456,-2,1538,12}},{{8501,-1,1320,11},{10348,2,1768,18},{10737,-0,1638,21},{1456,-2,1538,12},{10737,-0,1638,21},{10348,2,1768,18}},{{11025,1,1072,13},{8501,-1,1320,11},{10737,-0,1638,21},{1335,-1,1149,25},{2239,-1,1126,5},{1456,-2,1538,12}},{{3307,3,1300,11},{1335,-1,1149,25},{10348,2,1768,18},{10348,2,1768,18},{1335,-1,1149,25},{3307,3,1300,11}},{{10348,2,1768,18},{1335,-1,1149,25},{3307,3,1300,11},{4234,0,124,26},{2239,-1,1126,5},{10737,-0,1638,21}},{{3307,3,1300,11},{9399,-2,96,21},{1335,-1,1149,25},{9399,-2,96,21},{3307,3,1300,11},{10348,2,1768,18}},{{3307,3,1300,11},{2239,-1,1126,5},{9399,-2,96,21},{1878,-2,1012,23},{10737,-0,1638,21},{10737,-0,1638,21}},{{2239,-1,1126,5},{1456,-2,1538,12},{1456,-2,1538,12},{2239,-1,1126,5},{1335,-1,1149,25},{10737,-0,1638,21}},{{11025,1,1072,13},{10737,-0,1638,21},{9399,-2,96,21},{10348,2,1768,18},{1878,-2,1012,23},{10348,2,1768,18}},{{1335,-1,1149,25},{4234,0,124,26},{1335,-1,1149,25},{8501,-1,1320,11},{1878,-2,1012,23},{3307,3,1300,11}}};
static const struct S0 *g_597 = &g_598[8][3];
static int8_t g_706[8][3][10] = {{{0x61L,0xB7L,0xF7L,5L,(-4L),1L,(-4L),6L,0x73L,(-4L)},{0x7CL,0L,0xEDL,(-4L),0L,0xD1L,0x68L,0x9EL,0x92L,0xADL},{0x9EL,0x2FL,0xB6L,0xD1L,5L,0x46L,0x4DL,0xD5L,0x4DL,0x46L}},{{0xE8L,6L,0x11L,6L,0xE8L,1L,1L,2L,1L,0xD4L},{0x7CL,0x46L,(-1L),0xCDL,0x63L,0x51L,0xB7L,0L,0x51L,0xD4L},{(-1L),0xCDL,0x07L,(-1L),0xE8L,0x90L,0xB6L,0x7CL,0L,0x46L}},{{0x68L,0xE8L,0xC0L,0xADL,5L,0x89L,0xCDL,0x17L,(-1L),0xADL},{1L,0x40L,0x46L,0x61L,0L,4L,5L,0x4DL,0x51L,(-4L)},{0xEDL,0xD5L,0x9EL,0x07L,(-4L),0x63L,0x63L,(-4L),0x07L,0x9EL}},{{0xA8L,0xA8L,(-9L),6L,0xADL,(-1L),2L,0x17L,0L,0x2FL},{0xD4L,0L,0x92L,0x7CL,(-1L),0L,2L,0xD1L,0x92L,5L},{0x4DL,0xA8L,0x07L,0xEDL,0x2FL,(-1L),0x63L,0xB7L,0x7FL,0xB6L}},{{6L,0xD5L,0L,5L,0x61L,0x11L,5L,2L,0xF7L,6L},{(-4L),0x40L,(-1L),2L,0x92L,0L,0xCDL,4L,0xD1L,0xB4L},{0x63L,0xE8L,0xB6L,0x40L,0xA8L,0x40L,0xB6L,0xE8L,0x63L,0x7FL}},{{0xA8L,0xCDL,0x4BL,0x2FL,0x61L,0L,0xB7L,6L,0x89L,0x17L},{(-4L),0L,1L,0x51L,1L,1L,0x4DL,0x11L,0x7BL,0xB6L},{0L,0x07L,0xA7L,0xF7L,0xEDL,(-1L),0x1DL,0x51L,0L,1L}},{{4L,0x51L,0xE8L,0xEDL,0x9EL,0xADL,4L,(-1L),0x7CL,0x7FL},{0x46L,(-1L),1L,0xB6L,0x1DL,0xA7L,(-1L),1L,1L,(-1L)},{0L,0L,0x11L,0x11L,0L,0L,0xF7L,0x7FL,0L,0xA7L}},{{0x7FL,0x51L,0x68L,(-1L),0xB6L,(-4L),0x90L,0xD1L,0x2FL,0x4DL},{0x7FL,1L,(-9L),0x07L,0x73L,0L,0x4DL,0x4BL,0xC0L,(-1L)},{0L,0x4DL,0x4BL,0xC0L,(-1L),0xA7L,(-1L),0L,0xA7L,0x7BL}}};
static int8_t g_730 = 0xE7L;
static int8_t g_753 = (-1L);
static struct S1 *g_840 = &g_154;
static const uint64_t *g_868 = &g_101;
static const uint64_t **g_867 = &g_868;
static struct S0 g_918 = {10662,-0,666,10};
static int32_t g_1081 = 0x113B5DDBL;
static uint8_t *g_1111 = &g_319;
static uint8_t **g_1110 = &g_1111;
static int8_t **g_1132 = (void*)0;
static uint16_t g_1159 = 0x901DL;
static int32_t ***g_1204[1] = {&g_132};
static uint32_t *g_1250 = &g_443;
static uint32_t **g_1249[9] = {&g_1250,&g_1250,&g_1250,&g_1250,&g_1250,&g_1250,&g_1250,&g_1250,&g_1250};
static uint32_t g_1267 = 0x95FDE881L;
static uint16_t **g_1319[6] = {&g_463,(void*)0,(void*)0,&g_463,(void*)0,(void*)0};
static int32_t g_1439 = (-1L);
static struct S0 **g_1482 = (void*)0;
static struct S0 ***g_1481 = &g_1482;
static int8_t g_1484 = 0L;
static struct S0 ****g_1495 = &g_1481;
static int32_t *g_1497 = &g_154.f2;
static int32_t *g_1550 = &g_38;
static uint32_t g_1790[6][9] = {{0x363D0495L,0x46CEFF9CL,18446744073709551615UL,0xCC8B9C52L,0xD0037065L,0xCC8B9C52L,18446744073709551615UL,0x46CEFF9CL,0x363D0495L},{0xE5A048C3L,0x46CEFF9CL,18446744073709551611UL,0x1BCA8FD5L,1UL,1UL,7UL,18446744073709551611UL,18446744073709551615UL},{18446744073709551615UL,0x36EEED31L,18446744073709551615UL,0x188889D9L,18446744073709551608UL,18446744073709551615UL,0xD0037065L,0x11601572L,0x11601572L},{0xE5A048C3L,1UL,7UL,0x11601572L,7UL,1UL,0xE5A048C3L,0x143986DFL,0x11601572L},{0x363D0495L,0xE3900246L,0xCC8B9C52L,0x46CEFF9CL,0x1BCA8FD5L,6UL,0xE3900246L,0x4A209A7BL,18446744073709551615UL},{6UL,0x1BCA8FD5L,0x46CEFF9CL,0xCC8B9C52L,0xE3900246L,0x363D0495L,0x143986DFL,0x143986DFL,0x363D0495L}};
static int16_t ** const g_1845 = (void*)0;
static int16_t ** const *g_1844 = &g_1845;
static int16_t ** const * const *g_1843 = &g_1844;
static int16_t ** const * const **g_1842[1][7] = {{&g_1843,&g_1843,&g_1843,&g_1843,&g_1843,&g_1843,&g_1843}};
static int64_t g_1853[2] = {0x61A4714830D461DDLL,0x61A4714830D461DDLL};
static uint16_t ***g_1855 = &g_1319[1];
static uint16_t ****g_1854 = &g_1855;
static int32_t g_1915 = 1L;
static const uint16_t *g_2020 = &g_1159;
static const uint16_t **g_2019[8][9][2] = {{{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,&g_2020},{(void*)0,&g_2020},{&g_2020,(void*)0}},{{&g_2020,&g_2020},{(void*)0,&g_2020},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,(void*)0},{(void*)0,&g_2020}},{{&g_2020,(void*)0},{&g_2020,(void*)0},{&g_2020,(void*)0},{&g_2020,&g_2020},{(void*)0,(void*)0},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,&g_2020}},{{&g_2020,(void*)0},{(void*)0,&g_2020},{&g_2020,(void*)0},{&g_2020,(void*)0},{&g_2020,(void*)0},{&g_2020,&g_2020},{(void*)0,(void*)0},{&g_2020,&g_2020},{&g_2020,&g_2020}},{{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,(void*)0},{(void*)0,&g_2020},{&g_2020,(void*)0},{&g_2020,(void*)0},{&g_2020,(void*)0},{&g_2020,&g_2020},{(void*)0,(void*)0}},{{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,(void*)0},{(void*)0,&g_2020},{&g_2020,(void*)0},{&g_2020,(void*)0},{&g_2020,(void*)0}},{{&g_2020,&g_2020},{(void*)0,(void*)0},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,(void*)0},{(void*)0,&g_2020},{&g_2020,(void*)0}},{{&g_2020,(void*)0},{&g_2020,(void*)0},{&g_2020,&g_2020},{(void*)0,(void*)0},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,&g_2020},{&g_2020,(void*)0}}};
static const uint16_t ***g_2018[1][1][7] = {{{&g_2019[7][5][0],&g_2019[7][5][0],&g_2019[7][5][0],&g_2019[7][5][0],&g_2019[7][5][0],&g_2019[7][5][0],&g_2019[7][5][0]}}};
static const uint16_t ****g_2017 = &g_2018[0][0][6];
static const uint16_t *****g_2016 = &g_2017;
static struct S1 **g_2112 = (void*)0;
static struct S1 ***g_2111[4][1] = {{(void*)0},{&g_2112},{(void*)0},{&g_2112}};
static struct S1 ****g_2110 = &g_2111[2][0];
static uint32_t *g_2147 = &g_452;
static int32_t * const * const g_2164 = (void*)0;
static int32_t * const * const *g_2163 = &g_2164;
static const int8_t g_2249[5] = {(-9L),(-9L),(-9L),(-9L),(-9L)};
static uint32_t g_2254 = 6UL;
static int64_t g_2327 = 0x8F38069C4C5D278BLL;
static uint16_t g_2443[8] = {65529UL,65529UL,65529UL,65529UL,65529UL,65529UL,65529UL,65529UL};
static uint16_t * const g_2442 = &g_2443[7];
static uint16_t * const *g_2441 = &g_2442;
static const uint8_t g_2555 = 0x3EL;
static const struct S0 **g_2562 = (void*)0;
static const struct S0 ***g_2561 = &g_2562;
static int32_t ****g_2609 = &g_1204[0];
static int32_t *****g_2608 = &g_2609;
static struct S0 g_2764 = {5078,-1,1275,6};
static uint16_t g_2799 = 0x15C9L;
static uint32_t g_2863 = 18446744073709551615UL;
static const int64_t *g_2880[8][9] = {{(void*)0,(void*)0,&g_409,(void*)0,&g_409,(void*)0,(void*)0,&g_1853[1],&g_1853[1]},{(void*)0,(void*)0,&g_409,(void*)0,&g_409,(void*)0,(void*)0,&g_1853[1],&g_1853[1]},{(void*)0,(void*)0,&g_409,(void*)0,&g_409,(void*)0,(void*)0,&g_1853[1],&g_1853[1]},{(void*)0,(void*)0,&g_409,(void*)0,&g_409,(void*)0,(void*)0,&g_1853[1],&g_1853[1]},{(void*)0,(void*)0,&g_409,(void*)0,&g_409,(void*)0,(void*)0,&g_1853[1],&g_1853[1]},{(void*)0,(void*)0,&g_409,(void*)0,&g_409,(void*)0,(void*)0,&g_1853[1],&g_1853[1]},{(void*)0,&g_2327,&g_2,&g_1853[1],&g_2,&g_2327,&g_1853[1],(void*)0,(void*)0},{&g_1853[1],&g_2327,&g_2,&g_1853[1],&g_2,&g_2327,&g_1853[1],(void*)0,(void*)0}};
static const int64_t **g_2879 = &g_2880[0][2];
static uint64_t g_2904[6][8] = {{1UL,18446744073709551610UL,1UL,18446744073709551610UL,1UL,18446744073709551610UL,1UL,18446744073709551610UL},{1UL,18446744073709551610UL,1UL,18446744073709551610UL,1UL,18446744073709551610UL,1UL,18446744073709551610UL},{1UL,18446744073709551610UL,1UL,18446744073709551610UL,1UL,18446744073709551610UL,1UL,18446744073709551610UL},{1UL,18446744073709551610UL,1UL,18446744073709551610UL,1UL,18446744073709551610UL,1UL,18446744073709551610UL},{1UL,18446744073709551610UL,1UL,18446744073709551610UL,1UL,18446744073709551610UL,1UL,18446744073709551610UL},{1UL,18446744073709551610UL,1UL,18446744073709551610UL,1UL,18446744073709551610UL,1UL,18446744073709551610UL}};
static uint32_t **g_2987 = (void*)0;
static const uint8_t *g_3091[8] = {&g_2555,(void*)0,(void*)0,&g_2555,(void*)0,(void*)0,&g_2555,(void*)0};
static const uint8_t **g_3090 = &g_3091[0];
static uint64_t *g_3099 = &g_2904[1][2];
static const int8_t **g_3195[4][7][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
static const int8_t ***g_3194 = &g_3195[1][1][1];
static const int8_t ****g_3193 = &g_3194;
static uint8_t ***g_3276 = &g_1110;
static uint8_t ****g_3275[5] = {&g_3276,&g_3276,&g_3276,&g_3276,&g_3276};
static uint8_t *****g_3274 = &g_3275[3];
static uint8_t g_3391[8][8][4] = {{{0x59L,255UL,1UL,1UL},{255UL,255UL,255UL,254UL},{255UL,0x18L,252UL,0x10L},{0x04L,0x2DL,255UL,0xDCL},{0xD8L,0x58L,0x05L,1UL},{0x59L,0xE2L,0xD9L,0xA5L},{247UL,254UL,1UL,254UL},{0xE2L,255UL,0xDCL,1UL}},{{255UL,0x04L,255UL,1UL},{253UL,0x18L,0x59L,7UL},{253UL,0xE2L,255UL,0x05L},{255UL,7UL,0xDCL,1UL},{0xE2L,0x09L,1UL,0x10L},{247UL,255UL,0xD9L,1UL},{0x59L,247UL,1UL,0x59L},{255UL,0xA5L,0xA5L,255UL}},{{7UL,253UL,249UL,0x05L},{0xA5L,0xDEL,0x58L,9UL},{255UL,1UL,1UL,9UL},{255UL,0xDEL,252UL,0x05L},{0xDCL,253UL,0x59L,255UL},{1UL,0xA5L,9UL,0x59L},{253UL,247UL,0x58L,255UL},{7UL,255UL,0xF8L,8UL}},{{0x10L,0xDEL,0x10L,1UL},{255UL,0x05L,1UL,1UL},{1UL,0xF8L,0x09L,0x05L},{0x05L,0x04L,0x09L,255UL},{1UL,7UL,1UL,0x09L},{255UL,247UL,0x10L,253UL},{0x10L,253UL,0xF8L,0xDCL},{7UL,0xF8L,0x58L,1UL}},{{253UL,0x0DL,9UL,9UL},{1UL,1UL,0x59L,8UL},{0xDCL,0x04L,252UL,253UL},{255UL,0xA5L,1UL,252UL},{255UL,0xA5L,0x58L,253UL},{0xA5L,0x04L,249UL,8UL},{7UL,1UL,0xA5L,9UL},{255UL,0x0DL,1UL,1UL}},{{255UL,0xF8L,0x59L,0xDCL},{1UL,253UL,0x09L,253UL},{0xF8L,247UL,9UL,0x09L},{255UL,7UL,0xA5L,255UL},{0x10L,0x04L,255UL,0x05L},{0x10L,0xF8L,0xA5L,1UL},{255UL,0x05L,9UL,1UL},{0xF8L,0xDEL,0x09L,8UL}},{{1UL,255UL,0x59L,255UL},{255UL,247UL,1UL,0x59L},{255UL,0xA5L,0xA5L,255UL},{7UL,253UL,249UL,0x05L},{0xA5L,0xDEL,0x58L,9UL},{255UL,1UL,1UL,9UL},{255UL,0xDEL,252UL,0x05L},{0xDCL,253UL,0x59L,255UL}},{{1UL,0xA5L,9UL,0x59L},{253UL,247UL,0x58L,255UL},{7UL,255UL,0xF8L,8UL},{0x10L,0xDEL,0x10L,1UL},{255UL,0x05L,1UL,1UL},{1UL,0xF8L,0x09L,0x05L},{1UL,7UL,0xDEL,247UL},{0xD8L,0x05L,252UL,0xDEL}}};
static const uint32_t * const g_3395 = (void*)0;
static int8_t g_3416 = 0xF1L;
static int8_t g_3552 = (-1L);
static uint64_t g_3560 = 0x6A2E39AEC623E699LL;



static uint64_t func_1(void);
static int8_t func_22(int16_t * p_23, int32_t * p_24);
static int32_t func_25(int32_t * p_26, uint32_t p_27, uint32_t p_28);
static int32_t * func_29(int16_t * p_30, uint8_t p_31);
static uint8_t func_43(const int8_t p_44, int32_t ** p_45, uint16_t p_46, int32_t p_47, int16_t p_48);
static int8_t func_51(int16_t * p_52, int32_t p_53);
static int16_t * func_54(int16_t * p_55, uint32_t p_56);
static int8_t func_62(uint16_t p_63, struct S1 p_64, int16_t * p_65, uint8_t p_66, uint32_t p_67);
static uint8_t func_75(int32_t ** p_76, int32_t ** p_77, struct S0 p_78);
static int32_t ** func_79(int32_t p_80, int32_t ** p_81);
# 166 "<stdin>"
static uint64_t func_1(void)
{
    int32_t l_10[2];
    int16_t *l_17[2][7] = {{&g_18,&g_18,&g_18,&g_18,&g_18,&g_18,&g_18},{&g_18,&g_18,&g_18,&g_18,&g_18,&g_18,&g_18}};
    int32_t l_19 = 0x609D70CAL;
    int32_t *l_21 = &l_10[1];
    uint64_t l_3296 = 0UL;
    const uint16_t l_3319 = 0x8247L;
    uint16_t l_3320[10][5][3] = {{{0xE030L,65535UL,0UL},{1UL,65534UL,65530UL},{0x75D5L,0xEF78L,0xBC69L},{1UL,65528UL,1UL},{1UL,0x59BDL,0xE030L}},{{7UL,2UL,0xBD73L},{65535UL,0x33D8L,0xD4A9L},{0x2D25L,1UL,65535UL},{0xD4A9L,0xD4A9L,65535UL},{0x70A7L,1UL,1UL}},{{0x0D52L,65526UL,0x0748L},{0x12A5L,0xE06DL,0x753DL},{1UL,0x0D52L,0x0748L},{0x6352L,0UL,1UL},{0x0515L,1UL,65535UL}},{{0xCFC6L,0x51F9L,65535UL},{65532UL,8UL,0xD4A9L},{0x8C4FL,0x47B6L,0xBD73L},{0xEF78L,65535UL,0xE030L},{65535UL,0x0075L,1UL}},{{0xBC69L,65535UL,0xBC69L},{0x753DL,0x2D25L,65530UL},{65535UL,0UL,0UL},{0UL,1UL,0x5E7EL},{65526UL,3UL,1UL}},{{0UL,1UL,0x0075L},{65535UL,0xBC69L,9UL},{0x753DL,1UL,65528UL},{0xBC69L,0x4D07L,0x33D8L},{65535UL,0x3918L,1UL}},{{0xEF78L,0x0515L,65526UL},{0x8C4FL,0xC998L,0x3918L},{65532UL,0x2C46L,0x2C46L},{0xCFC6L,1UL,0x8C4FL},{0x0515L,0UL,8UL}},{{0x6352L,7UL,0x2D25L},{1UL,65532UL,0x9AC4L},{0x12A5L,7UL,0x15C2L},{0x0D52L,0UL,0UL},{0x70A7L,1UL,1UL}},{{0xD4A9L,0x2C46L,0xEF78L},{0x2D25L,0xC998L,0x12A5L},{65535UL,0x0515L,0x3CFBL},{7UL,0x3918L,1UL},{1UL,0x4D07L,65531UL}},{{1UL,1UL,0x47B6L},{0x75D5L,0xBC69L,0UL},{1UL,1UL,0x6352L},{0xE030L,3UL,65531UL},{0x0A77L,1UL,0x6352L}}};
    int32_t l_3328[1];
    const struct S0 *l_3412 = (void*)0;
    uint8_t l_3413 = 1UL;
    uint16_t ****l_3414 = &g_1855;
    int16_t l_3415[3];
    uint32_t ** const * const l_3423 = &g_1249[6];
    int32_t l_3426 = 0x006844C8L;
    int8_t ***l_3429 = &g_1132;
    struct S0 *l_3484 = (void*)0;
    struct S0 *****l_3486 = &g_1495;
    uint8_t l_3487[2][4][9] = {{{0xE2L,0UL,0UL,0xE2L,0UL,0UL,0xE2L,0UL,0UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{255UL,247UL,247UL,255UL,247UL,247UL,255UL,247UL,247UL}},{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{255UL,247UL,247UL,255UL,247UL,247UL,255UL,247UL,247UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{255UL,247UL,247UL,255UL,247UL,247UL,255UL,247UL,247UL}}};
    uint64_t l_3513[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
    int8_t l_3519 = 0xEBL;
    uint64_t l_3550 = 0xED0B095BE4735F28LL;
    int32_t l_3554[8][8] = {{0xC60D2923L,0xAF821DE5L,(-1L),0xAF821DE5L,0xC60D2923L,0xA4EF968AL,0xF812684BL,0xC717BE88L},{0xB8651954L,0xF812684BL,7L,0xD120F049L,0x88D06E46L,1L,0L,0xAF821DE5L},{(-6L),0x2A04B9CDL,7L,0xB8651954L,0xAF821DE5L,0xE4F2FAC5L,0xF812684BL,0xF32BD3FBL},{0x88D06E46L,3L,(-1L),0xC717BE88L,7L,7L,0xC717BE88L,(-1L)},{0x495EE670L,0x495EE670L,0xF32BD3FBL,0xF812684BL,0xE4F2FAC5L,0xAF821DE5L,0xB8651954L,7L},{0xF32BD3FBL,0x530EB1FFL,0xAF821DE5L,0L,1L,0x88D06E46L,0xD120F049L,7L},{0x530EB1FFL,0x1512521DL,0xC717BE88L,0xF812684BL,0xA4EF968AL,0xC60D2923L,0xAF821DE5L,(-1L)},{0xDF731278L,(-1L),0xDBA2019AL,0xC717BE88L,0xDBA2019AL,(-1L),0xDF731278L,0xF32BD3FBL}};
    int8_t l_3613[7];
    uint8_t *****l_3621[4] = {&g_3275[3],&g_3275[3],&g_3275[3],&g_3275[3]};
    uint64_t l_3707 = 0x0D6E7D02414DF881LL;
    int32_t l_3719[6] = {1L,1L,1L,1L,1L,1L};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_10[i] = 0xA40F2FDAL;
    for (i = 0; i < 1; i++)
        l_3328[i] = 0x46FD74EAL;
    for (i = 0; i < 3; i++)
        l_3415[i] = (-1L);
    for (i = 0; i < 7; i++)
        l_3613[i] = 0x77L;
    g_3++;
    (*l_21) = ((1UL && (safe_mod_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_u((l_10[1] > (safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_2, ((-7L) == g_2))), (l_19 ^= (safe_add_func_uint32_t_u_u(g_2, g_2)))))), ((g_2 != (safe_unary_minus_func_uint8_t_u((g_3 , l_10[1])))) != g_18))) , 65528UL) <= l_10[0]), g_18))) > 0xAAL);
    return (**g_867);
}







static int8_t func_22(int16_t * p_23, int32_t * p_24)
{
    int16_t *l_32 = &g_18;
    int32_t l_33[9] = {1L,0L,1L,0L,1L,0L,1L,0L,1L};
    uint32_t *l_2243 = (void*)0;
    uint32_t *l_2244 = &g_1267;
    const int8_t *l_2248[4][3] = {{&g_2249[1],&g_2249[1],&g_2249[1]},{&g_2249[1],&g_2249[1],&g_2249[1]},{&g_2249[1],&g_2249[1],&g_2249[1]},{&g_2249[1],&g_2249[1],&g_2249[1]}};
    const int8_t **l_2247 = &l_2248[2][1];
    const int8_t *l_2251 = &g_2249[2];
    const int8_t **l_2250 = &l_2251;
    int8_t *l_2252 = &g_93[4];
    uint32_t *l_2253 = &g_2254;
    int16_t **l_3118 = &l_32;
    int16_t ***l_3117 = &l_3118;
    int16_t ****l_3116[7] = {&l_3117,&l_3117,&l_3117,&l_3117,&l_3117,&l_3117,&l_3117};
    int16_t ****l_3123 = (void*)0;
    int32_t l_3144 = 0x4E236C26L;
    int32_t l_3149 = 0xB903CD5FL;
    int32_t *****l_3162 = &g_2609;
    struct S0 ****l_3164 = &g_1481;
    uint32_t **l_3165[9][10] = {{(void*)0,&g_1250,&g_1250,&g_2147,(void*)0,&g_1250,(void*)0,&g_1250,&g_1250,(void*)0},{(void*)0,&g_2147,(void*)0,(void*)0,&g_2147,(void*)0,&g_2147,(void*)0,&g_1250,&g_1250},{&g_2147,(void*)0,(void*)0,&g_2147,(void*)0,&g_1250,&g_1250,(void*)0,&g_1250,&g_1250},{&g_1250,&g_2147,&g_1250,&g_1250,&g_2147,&g_1250,&g_1250,&g_1250,&g_2147,&g_1250},{&g_1250,&g_1250,&g_1250,&g_2147,&g_1250,&g_1250,&g_2147,&g_1250,&g_2147,&g_1250},{(void*)0,&g_1250,&g_1250,&g_2147,(void*)0,(void*)0,&g_1250,&g_1250,&g_1250,&g_2147},{&g_1250,(void*)0,&g_1250,&g_1250,&g_2147,&g_2147,&g_1250,&g_1250,(void*)0,&g_1250},{&g_1250,(void*)0,&g_1250,&g_2147,&g_2147,&g_1250,&g_2147,(void*)0,&g_1250,&g_2147},{&g_1250,&g_1250,(void*)0,(void*)0,&g_2147,(void*)0,&g_2147,&g_1250,&g_2147,&g_1250}};
    struct S1 *l_3259 = (void*)0;
    int32_t *l_3261 = &g_38;
    int32_t *l_3262 = &g_85;
    int32_t *l_3263 = &g_154.f2;
    int32_t *l_3264[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t l_3265 = 0xC312E13EDA0328ABLL;
    int32_t l_3266 = (-1L);
    int16_t l_3267 = 1L;
    uint8_t l_3268 = 8UL;
    int i, j;
    if (func_25(func_29(l_32, l_33[8]), (*g_427), ((*l_2253) = (((0x233CL > ((((++(*l_2244)) >= ((((((*l_2250) = ((*l_2247) = &g_753)) == (l_33[8] , l_2252)) > l_33[8]) <= 0xACDBL) & 1UL)) <= l_33[4]) & l_33[8])) && l_33[8]) , 4294967295UL))))
    {
        int8_t l_3101 = 0xACL;
        int32_t *l_3102 = &l_33[8];
        int32_t *l_3103 = &l_33[8];
        int32_t *l_3104 = &g_38;
        int32_t *l_3105 = &g_1081;
        int32_t *l_3106 = &g_154.f2;
        int32_t l_3107 = 2L;
        int32_t *l_3108[10] = {&g_154.f2,(void*)0,&l_33[8],(void*)0,&g_154.f2,&g_154.f2,(void*)0,&l_33[8],(void*)0,&g_154.f2};
        uint32_t l_3109 = 1UL;
        int i;
        (*g_132) = p_24;
        l_3109++;
    }
    else
    {
        int16_t *****l_3119 = &l_3116[4];
        int16_t ****l_3121 = &l_3117;
        int16_t *****l_3120 = &l_3121;
        int16_t *****l_3122 = (void*)0;
        uint64_t *l_3124 = &g_2904[1][2];
        uint64_t **l_3125 = &g_3099;
        uint16_t * const **l_3130 = (void*)0;
        uint8_t * const *l_3132 = &g_1111;
        uint8_t * const **l_3131 = &l_3132;
        int32_t l_3140 = 0x061CDBBAL;
        int8_t l_3167 = 0x5BL;
        struct S0 l_3202 = {1317,0,22,9};
        uint8_t l_3239 = 9UL;
        uint8_t ***l_3241[2];
        uint8_t ****l_3240 = &l_3241[1];
        struct S1 l_3250[5] = {{37,{8658,0,549,14},0L},{37,{8658,0,549,14},0L},{37,{8658,0,549,14},0L},{37,{8658,0,549,14},0L},{37,{8658,0,549,14},0L}};
        int i;
        for (i = 0; i < 2; i++)
            l_3241[i] = &g_1110;
        if (((safe_mod_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(0x5251645C891D28D0LL, (((*p_24) = ((((*l_3119) = l_3116[4]) != (l_3123 = ((*l_3120) = &l_3117))) ^ (l_3124 == ((*l_3125) = &g_2904[1][2])))) != (((safe_mod_func_uint64_t_u_u(((*l_3124) = (*g_868)), (safe_lshift_func_int8_t_s_u((((void*)0 != l_3130) , (l_3131 == (void*)0)), l_33[1])))) | l_33[8]) || 5L)))), (*g_427))) <= (*g_446)))
        {
            uint32_t l_3135 = 0x5D0CA097L;
            struct S0 l_3141 = {7796,-0,1995,15};
            uint32_t l_3150 = 0xCC3F1FD6L;
            uint8_t *l_3161 = &g_315;
            struct S0 *****l_3163[6] = {&g_1495,&g_1495,&g_1495,&g_1495,&g_1495,&g_1495};
            struct S0 l_3235 = {7932,-2,1978,19};
            const struct S1 l_3238 = {8,{569,0,760,17},0xC03BCEDCL};
            int8_t l_3249[1];
            int i;
            for (i = 0; i < 1; i++)
                l_3249[i] = 0xC4L;
            if ((((safe_div_func_int64_t_s_s(l_3135, (safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_3140, 65535UL)), ((((((l_3141 , ((&g_1481 == (l_3164 = ((((*g_463) = l_33[2]) >= (((safe_add_func_int16_t_s_s((l_3144 |= 0x2A9BL), (safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(((((l_3150 &= (l_3149 = l_33[8])) == (safe_div_func_uint8_t_u_u(((*l_3161) &= (safe_mod_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_s(((safe_div_func_uint8_t_u_u(((((l_3141.f1 = ((((*g_1111) ^ 0x1AL) || 4UL) ^ (*g_427))) || l_3140) <= l_3140) == (*p_24)), l_3141.f2)) , l_33[8]), (*p_23))) >= (*p_23)), l_3141.f2)) | 0x7CL), 0x61B4L))), (*g_1111)))) , l_3162) == (void*)0), 2)), 0UL)))) != 0x96EDL) || l_3141.f2)) , (void*)0))) != (*g_427))) , 1L) && (*p_23)) , (void*)0) == (void*)0) ^ (*g_1550)))))) , l_3140) <= 1UL))
            {
                uint32_t **l_3166 = &g_1250;
                int32_t l_3191[7];
                int64_t * const ** const *l_3234 = (void*)0;
                int64_t * const ** const **l_3233 = &l_3234;
                int i;
                for (i = 0; i < 7; i++)
                    l_3191[i] = (-6L);
                l_3167 = ((*p_24) = ((l_3141.f3 , l_3165[4][1]) == l_3166));
                (*g_1497) &= (-3L);
                for (g_154.f2 = 0; (g_154.f2 > (-15)); g_154.f2 = safe_sub_func_int32_t_s_s(g_154.f2, 4))
                {
                    const int32_t l_3192 = 0xA0C46C72L;
                    uint8_t ****l_3243 = &l_3241[1];
                    uint8_t *****l_3242 = &l_3243;
                    if (((((safe_mod_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((((*l_2252) = (safe_lshift_func_int16_t_s_s((l_33[8] &= (safe_lshift_func_int8_t_s_u((0xADL || (safe_mod_func_uint8_t_u_u((((*g_569) != (void*)0) & (*g_427)), (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s(((18446744073709551611UL >= (***g_444)) == (((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(l_3141.f1, ((safe_add_func_uint32_t_u_u(0xDB3AFACBL, ((*g_463) < l_3191[2]))) != 0L))), 8)) || 0x1E093138L) | l_3140)), (*p_23))) , 65532UL), 10)), 10))))), 7))), 8))) || l_3150))), (*p_24))) != l_3141.f0) , l_3192) & l_3135))
                    {
                        const int8_t *****l_3196 = (void*)0;
                        const int8_t *****l_3197 = &g_3193;
                        (*l_3197) = g_3193;
                        (*g_1550) = l_3141.f0;
                        (*g_1550) = ((*p_24) = (*p_24));
                    }
                    else
                    {
                        return l_3192;
                    }
                    for (g_1484 = (-22); (g_1484 >= 6); g_1484 = safe_add_func_uint8_t_u_u(g_1484, 1))
                    {
                        int32_t l_3200[7];
                        int32_t *l_3201 = &g_1439;
                        const struct S1 l_3209 = {22,{9765,-1,1983,18},0x9DFE9EC7L};
                        uint16_t l_3224 = 65527UL;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_3200[i] = 0L;
                        (*g_225) = (((*l_3201) = l_3200[1]) , (l_3202 = (*g_597)));
                        (*p_24) &= (safe_mul_func_int16_t_s_s(((((safe_div_func_int32_t_s_s(((void*)0 != (*g_445)), ((safe_lshift_func_int8_t_s_u((l_3209 , (safe_rshift_func_int16_t_s_u((((*l_2244) = (safe_div_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((((*l_3124) = (((0xC78F2B2FL > (~(((safe_mod_func_int8_t_s_s(((safe_div_func_int16_t_s_s(l_3209.f1.f3, l_3209.f1.f3)) & (!(((((l_3202.f1 ^= 4UL) <= ((l_3224 , (**g_2016)) != (void*)0)) & l_3191[5]) , l_3209.f1.f0) >= 9UL))), 1L)) , 6UL) || l_3191[3]))) & (*g_3099)) , l_3192)) == (**g_867)), 0xD1L)) >= (-1L)), l_3191[2])) != (-1L)), (-5L)))) <= 4294967295UL), l_3141.f0))), l_3192)) & l_3192))) | l_3141.f3) & l_3141.f0) & 3L), 65535UL));
                        if ((*p_24))
                            break;
                    }
                    (*l_3242) = (l_3240 = ((((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_3192, ((l_3140 < (l_3233 != (l_3235 , &l_3234))) ^ ((safe_lshift_func_uint16_t_u_s(0UL, (((*l_3124) &= ((l_33[8] , (*p_23)) || ((*g_2442) &= (l_3238 , l_3192)))) , l_3192))) && l_3239)))), l_3191[2])), l_3202.f2)) , l_3191[2]) <= 0x7B2BL) , (void*)0));
                }
            }
            else
            {
                const struct S1 l_3248[9] = {{39,{3778,-2,1163,18},0L},{39,{3778,-2,1163,18},0L},{39,{3778,-2,1163,18},0L},{39,{3778,-2,1163,18},0L},{39,{3778,-2,1163,18},0L},{39,{3778,-2,1163,18},0L},{39,{3778,-2,1163,18},0L},{39,{3778,-2,1163,18},0L},{39,{3778,-2,1163,18},0L}};
                int i;
                for (g_125 = 0; (g_125 > 57); g_125++)
                {
                    for (g_92 = (-11); (g_92 == 29); g_92 = safe_add_func_uint16_t_u_u(g_92, 6))
                    {
                        (*g_1550) |= l_3167;
                        (*g_840) = l_3248[1];
                        if (l_3249[0])
                            continue;
                    }
                    (*g_1497) = 1L;
                }
                l_3250[1] = l_3238;
            }
            (****g_2608) = &l_3140;
        }
        else
        {
            int64_t l_3251 = 0x211CEDA4B553998ALL;
            uint16_t *l_3252 = &g_1159;
            struct S0 *l_3257 = &g_2764;
            struct S1 *l_3260[2][8][2] = {{{&g_154,(void*)0},{&l_3250[4],(void*)0},{&g_154,(void*)0},{&l_3250[4],(void*)0},{&g_154,(void*)0},{&l_3250[4],(void*)0},{&g_154,(void*)0},{&l_3250[4],(void*)0}},{{&g_154,(void*)0},{&l_3250[4],(void*)0},{&g_154,(void*)0},{&l_3250[4],(void*)0},{&g_154,(void*)0},{&l_3250[4],(void*)0},{&g_154,(void*)0},{&l_3250[4],(void*)0}}};
            int i, j, k;
            (*g_1550) ^= ((((l_3251 , l_32) != l_3252) != (&g_2111[2][0] == &g_2111[2][0])) , (safe_mul_func_uint8_t_u_u((((*g_1111) = l_3251) <= (safe_mod_func_uint16_t_u_u(l_3250[1].f1.f0, 0xDD1BL))), (0UL || 0UL))));
            (*p_24) &= 0x951B0C87L;
            for (g_1267 = 0; (g_1267 <= 1); g_1267 += 1)
            {
                struct S0 **l_3258 = &g_225;
                (*l_3258) = l_3257;
            }
            l_3260[0][1][1] = (l_3202 , l_3259);
        }
    }
    ++l_3268;
    return (*l_3263);
}







static int32_t func_25(int32_t * p_26, uint32_t p_27, uint32_t p_28)
{
    uint8_t l_2256 = 0x69L;
    int16_t *l_2257 = &g_466;
    uint8_t *l_2260 = &g_319;
    uint8_t **l_2261 = &l_2260;
    int32_t l_2265 = (-6L);
    uint64_t *l_2266 = &g_101;
    int32_t *l_2267 = &g_1915;
    int32_t *l_2268[3][7] = {{(void*)0,(void*)0,&g_1081,(void*)0,(void*)0,&g_1081,(void*)0},{(void*)0,&g_85,&g_85,(void*)0,&g_85,&g_85,(void*)0},{&g_85,(void*)0,&g_85,&g_85,(void*)0,&g_85,&g_85}};
    int64_t l_2269 = 1L;
    uint8_t l_2270 = 1UL;
    uint64_t **l_2288[6] = {&l_2266,&l_2266,&l_2266,&l_2266,&l_2266,&l_2266};
    int32_t *l_2292 = (void*)0;
    int16_t * const * const *l_2368 = &g_570;
    int64_t l_2371 = 0xC5FE19E61F585939LL;
    struct S0 l_2420 = {915,-1,387,17};
    uint32_t l_2431 = 0x126B8FB7L;
    uint8_t *l_2436 = &g_315;
    int64_t l_2438 = (-2L);
    struct S1 l_2456 = {39,{5938,2,802,13},0xD708C38EL};
    int8_t l_2457 = 0x6EL;
    struct S0 **** const *l_2528 = &g_1495;
    int32_t l_2544 = (-1L);
    uint64_t l_2545 = 0xCEFAB4CC3E22D790LL;
    int8_t l_2549[9];
    uint32_t l_2577[5][1][5] = {{{1UL,1UL,9UL,0x649EB273L,0xC1E05FCBL}},{{0xC263C872L,0xC1E05FCBL,2UL,2UL,0xC1E05FCBL}},{{0xC1E05FCBL,0x9F162113L,0xC263C872L,0xC1E05FCBL,2UL}},{{0x649EB273L,0xC1E05FCBL,9UL,0xC1E05FCBL,0x649EB273L}},{{0xC263C872L,1UL,0x9F162113L,2UL,1UL}}};
    int32_t ****l_2605 = &g_1204[0];
    int32_t *****l_2604 = &l_2605;
    uint16_t l_2635 = 0x80A9L;
    uint32_t l_2665 = 0x1F99D9A9L;
    int16_t l_2678 = 0xDA8FL;
    uint16_t ***l_2710 = (void*)0;
    const int64_t l_2736[3] = {1L,1L,1L};
    struct S1 **l_2751 = (void*)0;
    uint32_t l_2798 = 4294967293UL;
    struct S1 l_2811 = {11,{7568,2,1854,30},1L};
    struct S0 ****l_2936 = &g_1481;
    uint64_t l_3026 = 18446744073709551615UL;
    const uint8_t **l_3083 = (void*)0;
    uint8_t l_3100 = 4UL;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_2549[i] = (-1L);
lbl_2331:
    (*g_132) = ((+l_2256) , func_29(l_2257, (safe_mod_func_uint16_t_u_u((((*g_1110) = (*g_1110)) == ((*l_2261) = l_2260)), (((void*)0 == &g_1481) | ((*l_2266) = ((l_2265 = (l_2256 , (((safe_sub_func_int64_t_s_s((p_27 | (~l_2256)), (-1L))) != l_2256) >= (*p_26)))) || 0x5EL)))))));
lbl_2289:
    l_2267 = &l_2265;
    l_2270--;
    if (((safe_lshift_func_uint16_t_u_s(p_28, (9L > (safe_mod_func_uint64_t_u_u((((((safe_sub_func_uint16_t_u_u((((*p_26) = ((-1L) && (safe_mod_func_uint16_t_u_u((*l_2267), (*l_2267))))) , ((safe_mul_func_uint8_t_u_u((--(**l_2261)), ((((+((-3L) || (*g_868))) == (p_28 < (((*l_2257) = p_27) < 0xE1E5L))) == (*g_427)) ^ p_27))) <= p_28)), 0L)) , &l_2266) != l_2288[2]) || p_28) == 0x6039L), (**g_867)))))) , 1L))
    {
        uint16_t l_2297[3];
        struct S1 l_2324 = {16,{11506,-3,534,27},0L};
        uint8_t l_2328[8][8] = {{0xC5L,0x6EL,255UL,0xE1L,0xC5L,255UL,255UL,0xC5L},{0x18L,0xA6L,0xA6L,0x18L,0xC5L,248UL,0x30L,255UL},{0xE1L,255UL,0x6EL,0xC5L,0xC6L,0xC5L,0x6EL,255UL},{0xA6L,255UL,255UL,0x6EL,1UL,248UL,0x11L,0x11L},{255UL,0xA6L,0UL,0UL,0xA6L,255UL,0x11L,0xC6L},{0x30L,0UL,255UL,248UL,0x6EL,0xE1L,0x6EL,248UL},{0x6EL,0xE1L,0x6EL,248UL,255UL,0UL,0x30L,0xC6L},{0x11L,255UL,0xA6L,0UL,0UL,0xA6L,255UL,0x11L}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_2297[i] = 65531UL;
        if (g_347)
            goto lbl_2289;
        for (g_430 = (-15); (g_430 == 1); ++g_430)
        {
            (*g_132) = l_2292;
            if ((*l_2267))
                continue;
        }
        for (g_2 = 11; (g_2 >= (-1)); g_2 = safe_sub_func_uint32_t_u_u(g_2, 8))
        {
            for (p_27 = 0; (p_27 <= 0); p_27 += 1)
            {
                int64_t ****l_2296 = &g_444;
                int64_t *****l_2295 = &l_2296;
                (*l_2295) = (void*)0;
                for (g_753 = 0; (g_753 <= 0); g_753 += 1)
                {
                    int i, j, k;
                    (*g_840) = (*g_840);
                    return g_706[(p_27 + 6)][(g_753 + 1)][(p_27 + 1)];
                }
                (*p_26) ^= (-1L);
                if (l_2297[1])
                    continue;
            }
            (*p_26) ^= ((*l_2267) = (safe_add_func_int64_t_s_s((***g_444), 0x8C765B70BB0A3FC1LL)));
        }
        (*l_2267) = (((**g_445) = (safe_sub_func_int16_t_s_s(p_27, ((safe_div_func_int16_t_s_s(0x7A13L, (safe_mul_func_int16_t_s_s(((void*)0 == &g_427), (safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((~(safe_add_func_uint8_t_u_u((+(safe_mod_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(((((~((*l_2257) ^= (!((*g_1110) != (*g_1110))))) && (safe_lshift_func_int16_t_s_u(l_2297[1], ((l_2324 , (((*l_2266) = (safe_mul_func_int16_t_s_s(0xE660L, 65535UL))) > p_28)) | 0x123FF138L)))) <= 0xDA7E193B18DAE7BCLL) , (**g_867)), (*l_2267))), 1L)) , g_2327), p_27))), g_38))) >= p_27) && 0x2C9FA72BA41123DALL), p_28)), p_27)))))) , l_2328[5][0])))) || (**g_867));
    }
    else
    {
        int16_t l_2354 = (-1L);
        struct S0 ***l_2360 = &g_1482;
        uint32_t *l_2398 = &g_1790[1][3];
        uint64_t l_2437 = 3UL;
        int32_t l_2473 = 0x56236AC3L;
        uint16_t ****l_2481 = &g_1855;
        int32_t l_2495 = 0x7948996FL;
        int32_t l_2500[8] = {0x125CF09FL,0L,0x125CF09FL,0x125CF09FL,0L,0x125CF09FL,0x125CF09FL,0L};
        struct S0 l_2517 = {5474,2,997,24};
        int32_t l_2518 = 0x6F55ADFDL;
        int32_t *****l_2606[5][1];
        struct S1 l_2690 = {6,{6231,1,123,14},0x52138A5CL};
        uint16_t l_2714 = 65526UL;
        int64_t *** const l_2852[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        struct S0 **l_2856 = &g_225;
        uint16_t l_2943 = 1UL;
        const struct S0 *l_2946 = &g_2764;
        int64_t *l_2996 = (void*)0;
        uint8_t * const *l_3012 = &l_2436;
        uint8_t * const **l_3011 = &l_3012;
        uint64_t l_3027 = 0x234721DFAC24F793LL;
        struct S1 *l_3032 = &l_2456;
        int32_t l_3063[10][2][1] = {{{0xBEE3DD86L},{0x042EE697L}},{{0x6BDBA061L},{0x042EE697L}},{{0xBEE3DD86L},{0x042EE697L}},{{0x6BDBA061L},{0x042EE697L}},{{0xBEE3DD86L},{0x042EE697L}},{{0x6BDBA061L},{0x042EE697L}},{{0xBEE3DD86L},{0x042EE697L}},{{0x6BDBA061L},{0x042EE697L}},{{0xBEE3DD86L},{0x042EE697L}},{{0x6BDBA061L},{0x042EE697L}}};
        uint16_t l_3073 = 8UL;
        const uint8_t ***l_3084 = (void*)0;
        const uint8_t ***l_3085 = (void*)0;
        const uint8_t ***l_3086 = (void*)0;
        const uint8_t *l_3088 = &g_2555;
        const uint8_t **l_3087[9] = {&l_3088,&l_3088,&l_3088,&l_3088,&l_3088,&l_3088,&l_3088,&l_3088,&l_3088};
        const uint8_t ***l_3089[8];
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_2606[i][j] = &l_2605;
        }
        for (i = 0; i < 8; i++)
            l_3089[i] = &l_3083;
        for (g_1915 = 0; (g_1915 <= (-24)); g_1915 = safe_sub_func_int32_t_s_s(g_1915, 2))
        {
            struct S0 l_2332 = {9600,-0,556,16};
            int32_t *l_2335 = &g_38;
            struct S0 **l_2375 = &g_225;
            if (l_2256)
                goto lbl_2331;
            (*g_225) = (l_2332 , (*g_597));
            for (g_452 = 0; (g_452 <= 4); g_452 += 1)
            {
                const struct S1 l_2333[4] = {{32,{5489,-3,828,10},0x30C74558L},{32,{5489,-3,828,10},0x30C74558L},{32,{5489,-3,828,10},0x30C74558L},{32,{5489,-3,828,10},0x30C74558L}};
                int64_t * const **l_2345 = (void*)0;
                int16_t **l_2370 = &l_2257;
                int16_t ***l_2369 = &l_2370;
                struct S0 **l_2376 = &g_225;
                int i;
                for (g_85 = 0; (g_85 <= 9); g_85 += 1)
                {
                    int32_t l_2334 = (-4L);
                    for (g_1267 = 0; (g_1267 <= 4); g_1267 += 1)
                    {
                        int i;
                        if (g_93[(g_1267 + 4)])
                            break;
                        (*l_2267) ^= (l_2333[2] , l_2334);
                        g_133[g_452] = l_2335;
                    }
                }
                (*l_2267) &= (*p_26);
                for (g_1159 = 0; (g_1159 <= 0); g_1159 += 1)
                {
                    uint8_t **l_2343 = &g_1111;
                    int64_t *** const l_2347 = &g_445;
                    if ((safe_unary_minus_func_uint64_t_u((0x46F08C4554F6FE8ELL | ((-1L) ^ ((safe_div_func_uint32_t_u_u((9L != (!0x5A7B4FA158D7D87FLL)), (*g_427))) >= 6UL))))))
                    {
                        int i, j;
                        l_2268[(g_1159 + 1)][(g_452 + 1)] = l_2268[g_1159][(g_452 + 1)];
                        return (*p_26);
                    }
                    else
                    {
                        uint8_t ***l_2340 = (void*)0;
                        uint8_t ***l_2341 = &g_1110;
                        uint8_t ***l_2342[8];
                        int64_t * const ***l_2346 = &l_2345;
                        uint16_t *l_2357 = &g_125;
                        int32_t **l_2361 = (void*)0;
                        int32_t **l_2362 = (void*)0;
                        int32_t **l_2363 = &l_2335;
                        int i, j;
                        for (i = 0; i < 8; i++)
                            l_2342[i] = &l_2261;
                        (*g_1497) ^= (&g_1111 == (l_2343 = ((*l_2341) = &l_2260)));
                        (**g_132) = ((safe_unary_minus_func_uint8_t_u(((**l_2343) |= (((*l_2346) = l_2345) == l_2347)))) | (p_28 != (((p_27 , (safe_add_func_int64_t_s_s(0x3B76497212622E38LL, (safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(((*g_463)++), 11)), (**g_445)))))) > (((*l_2357) = p_27) || (safe_sub_func_int64_t_s_s((7UL < ((void*)0 == l_2360)), (**g_867))))) , p_27)));
                        (*l_2363) = ((*g_132) = func_29(&l_2354, p_27));
                    }
                    (*g_132) = func_29(l_2257, ((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(l_2354, 0x2BL)), 1)) , (l_2368 == l_2369)));
                }
                if (l_2371)
                    break;
                for (l_2265 = 2; (l_2265 >= 0); l_2265 -= 1)
                {
                    int i, j;
                    (*g_1550) ^= l_2333[2].f0;
                    l_2268[l_2265][(g_452 + 2)] = p_26;
                    if ((+(l_2333[2].f1.f2 >= (((safe_div_func_uint64_t_u_u((((*l_2335) = ((*g_1250) = (((l_2376 = l_2375) == (*g_1481)) < l_2354))) , (*g_868)), (safe_mul_func_int16_t_s_s(((0xE89DF86A6F9EF707LL | (((*g_1111) = ((l_2333[2].f1.f2 > p_28) >= (safe_div_func_int8_t_s_s((&g_1111 != (void*)0), 0x95L)))) > 0xD2L)) || (*g_427)), p_28)))) , 0xB3L) < 0xC4L))))
                    {
                        (*g_1497) = (safe_mul_func_int16_t_s_s(l_2354, l_2333[2].f0));
                    }
                    else
                    {
                        int32_t l_2405[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_2405[i] = 0x889AAFE9L;
                        (*g_132) = ((safe_mod_func_int8_t_s_s(((~((((4294967295UL > ((*g_427)--)) && (safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s((((safe_div_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((((safe_add_func_int32_t_s_s(((void*)0 == l_2398), (safe_add_func_uint64_t_u_u((**g_867), 0x51B8BC6B3AAE569DLL)))) <= (safe_mod_func_uint8_t_u_u(((**l_2261)--), ((*l_2335) , 0xBDL)))) <= 0x51L), 0x34181A82L)) & 0x30L), 0x8FL)) != 0xB3879D9AL) && l_2405[1]), 65535UL)), p_27))) , 0xF332L) <= p_28)) == (*l_2335)), p_28)) , p_26);
                    }
                    (*g_1497) = 0x02E1E27FL;
                }
            }
            return l_2354;
        }
    }
    return (*p_26);
}







static int32_t * func_29(int16_t * p_30, uint8_t p_31)
{
    uint16_t l_34 = 0UL;
    int32_t * const l_37[10][4] = {{&g_38,&g_38,(void*)0,(void*)0},{(void*)0,(void*)0,&g_38,&g_38},{&g_38,&g_38,&g_38,&g_38},{(void*)0,&g_38,(void*)0,&g_38},{&g_38,&g_38,&g_38,&g_38},{&g_38,&g_38,(void*)0,&g_38},{&g_38,(void*)0,&g_38,(void*)0},{&g_38,&g_38,(void*)0,(void*)0},{(void*)0,(void*)0,&g_38,&g_38},{&g_38,&g_38,&g_38,&g_38}};
    int32_t *l_40 = &g_38;
    int32_t **l_39 = &l_40;
    int16_t *l_57 = &g_18;
    uint32_t l_70 = 0x6ED9A830L;
    struct S0 l_329 = {3937,0,73,7};
    uint16_t *l_612 = (void*)0;
    uint16_t *l_613 = &l_34;
    struct S1 l_614[3][8] = {{{44,{9039,0,1163,1},3L},{22,{9014,-2,1176,18},3L},{22,{9014,-2,1176,18},3L},{44,{9039,0,1163,1},3L},{22,{9014,-2,1176,18},3L},{22,{9014,-2,1176,18},3L},{44,{9039,0,1163,1},3L},{22,{9014,-2,1176,18},3L}},{{44,{9039,0,1163,1},3L},{44,{9039,0,1163,1},3L},{12,{10842,1,1095,11},0L},{44,{9039,0,1163,1},3L},{44,{9039,0,1163,1},3L},{12,{10842,1,1095,11},0L},{44,{9039,0,1163,1},3L},{44,{9039,0,1163,1},3L}},{{22,{9014,-2,1176,18},3L},{44,{9039,0,1163,1},3L},{22,{9014,-2,1176,18},3L},{22,{9014,-2,1176,18},3L},{44,{9039,0,1163,1},3L},{22,{9014,-2,1176,18},3L},{22,{9014,-2,1176,18},3L},{44,{9039,0,1163,1},3L}}};
    int32_t l_688 = (-2L);
    int16_t *l_1209 = &g_18;
    int16_t l_1210[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
    int16_t ****l_1263 = (void*)0;
    int16_t *****l_1262 = &l_1263;
    int16_t l_1265 = 0xD02AL;
    const int32_t *l_1272 = &g_85;
    const int32_t **l_1271 = &l_1272;
    int8_t *l_1277 = &g_93[1];
    uint32_t **l_1286 = &g_427;
    int64_t l_1287 = 1L;
    int64_t * const l_1320[2] = {&g_409,&g_409};
    uint32_t l_1375 = 0UL;
    struct S0 ***l_1483 = &g_1482;
    uint16_t ***l_1521 = &g_1319[4];
    uint16_t ****l_1520 = &l_1521;
    int32_t *l_1530 = &g_1081;
    uint32_t l_1605 = 1UL;
    int8_t l_1648 = 0xD5L;
    int16_t l_1670[10][7];
    uint64_t ** const l_1689 = (void*)0;
    int32_t l_1728 = 1L;
    int16_t l_1729 = 0xA753L;
    int16_t l_1733[7][3][3] = {{{0x6E77L,0x6E77L,0x0DC6L},{0x2483L,(-1L),0x60D7L},{0x644EL,0x0DC6L,0xA476L}},{{0x3D5FL,0xCB2BL,0xCB2BL},{1L,0xE8BAL,0xA476L},{(-1L),0x2483L,0xCE3FL}},{{0xAFE6L,0x0DC6L,0x6E77L},{6L,0x8091L,6L},{0x6E77L,0x0DC6L,0xAFE6L}},{{0xCE3FL,0x2483L,(-1L)},{0xA476L,0xE8BAL,1L},{0xCB2BL,0xCB2BL,0x3D5FL}},{{0xA476L,0x6E77L,0xE8BAL},{0xCE3FL,0x3D5FL,0xDC82L},{0x6E77L,0xA748L,0xA748L}},{{6L,0xCE3FL,0xDC82L},{0xAFE6L,1L,0xE8BAL},{(-1L),(-1L),0x3D5FL}},{{1L,0xB3AFL,1L},{0x3D5FL,(-1L),(-1L)},{0xE8BAL,1L,0xAFE6L}}};
    int32_t l_1761 = (-9L);
    uint64_t l_1781 = 0x040D8E201BD7FA04LL;
    uint32_t ** const l_1826 = (void*)0;
    struct S1 l_1859 = {0,{7894,3,221,18},0L};
    uint16_t l_1876 = 0x06B9L;
    struct S0 *l_1900[2][4];
    uint32_t l_1952 = 1UL;
    uint16_t l_2001 = 0x67BBL;
    uint8_t l_2085 = 1UL;
    uint32_t *l_2146 = &g_1790[1][1];
    int64_t **l_2206 = &g_446;
    int64_t **l_2208 = (void*)0;
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
            l_1670[i][j] = (-8L);
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_1900[i][j] = &g_154.f1;
    }
    ++l_34;
    (*l_39) = l_37[1][3];
    return (*g_132);
}







static uint8_t func_43(const int8_t p_44, int32_t ** p_45, uint16_t p_46, int32_t p_47, int16_t p_48)
{
    struct S1 *l_839[7][6] = {{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154},{(void*)0,(void*)0,&g_154,&g_154,&g_154,(void*)0},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154},{(void*)0,&g_154,&g_154,&g_154,(void*)0,(void*)0},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154}};
    const struct S1 *l_842 = (void*)0;
    const struct S1 **l_841 = &l_842;
    const struct S0 *l_843 = &g_598[8][3];
    int32_t l_849 = (-1L);
    uint16_t *l_851 = &g_125;
    uint8_t *l_858 = &g_319;
    const int8_t ** const l_862 = (void*)0;
    int32_t l_913 = 0L;
    int32_t l_914 = 0x197B3ED8L;
    const int16_t **l_958 = &g_173;
    int32_t l_978 = 0x52AE6FF9L;
    int32_t l_981[8] = {0x314F51F2L,0xF435DBEFL,0xF435DBEFL,0x314F51F2L,0xF435DBEFL,0xF435DBEFL,0x314F51F2L,0xF435DBEFL};
    uint32_t l_993 = 3UL;
    uint32_t *l_1025 = &g_347;
    struct S0 l_1036 = {7945,3,1128,0};
    struct S0 l_1050 = {4055,-2,197,25};
    int32_t * const l_1080 = &g_1081;
    int32_t * const *l_1079 = &l_1080;
    int16_t *l_1095 = &g_466;
    int16_t **l_1094[1][3];
    int16_t ***l_1093[5] = {&l_1094[0][1],&l_1094[0][1],&l_1094[0][1],&l_1094[0][1],&l_1094[0][1]};
    int16_t ****l_1092 = &l_1093[4];
    int32_t l_1097[10][9][2] = {{{0x600BD89CL,3L},{0L,0x865BDFA5L},{0L,3L},{0x600BD89CL,(-1L)},{3L,0xCA793C78L},{0xAD9FAD15L,0x81F1B38EL},{(-6L),0x172A3D2AL},{0x172A3D2AL,0L},{(-1L),0x81F1B38EL}},{{0xB37E8660L,1L},{3L,(-6L)},{0xE914B3B5L,3L},{0x09D79595L,0x168817E1L},{0L,(-9L)},{0xE914B3B5L,(-1L)},{(-9L),1L},{0xAD9FAD15L,0x7993A5C8L},{(-1L),0x172A3D2AL}},{{0L,0x172A3D2AL},{(-1L),0x7993A5C8L},{0xAD9FAD15L,1L},{(-9L),(-1L)},{0xE914B3B5L,(-9L)},{0L,0x168817E1L},{0x09D79595L,3L},{0xE914B3B5L,(-6L)},{3L,1L}},{{0xB37E8660L,0x81F1B38EL},{(-1L),0L},{0x172A3D2AL,0x172A3D2AL},{(-6L),0x81F1B38EL},{0xAD9FAD15L,0xCA793C78L},{3L,(-1L)},{0x600BD89CL,3L},{0L,0x865BDFA5L},{0L,3L}},{{0x600BD89CL,(-1L)},{3L,0xCA793C78L},{0xAD9FAD15L,0x81F1B38EL},{(-6L),0x172A3D2AL},{0x172A3D2AL,(-4L)},{0L,(-6L)},{0xE43784A5L,0x600BD89CL},{0x865BDFA5L,(-1L)},{0xB37E8660L,0x865BDFA5L}},{{(-4L),0xB1715326L},{0x7993A5C8L,(-1L)},{0xB37E8660L,0L},{(-1L),0x600BD89CL},{0x09D79595L,0xFECFF484L},{0L,0xE7601776L},{(-4L),0xE7601776L},{0L,0xFECFF484L},{0x09D79595L,0x600BD89CL}},{{(-1L),0L},{0xB37E8660L,(-1L)},{0x7993A5C8L,0xB1715326L},{(-4L),0x865BDFA5L},{0xB37E8660L,(-1L)},{0x865BDFA5L,0x600BD89CL},{0xE43784A5L,(-6L)},{0L,(-4L)},{0xE7601776L,0xE7601776L}},{{(-1L),(-6L)},{0x09D79595L,0L},{0x865BDFA5L,0L},{0x31E9495AL,0x865BDFA5L},{0x7993A5C8L,0xCD713B87L},{0x7993A5C8L,0x865BDFA5L},{0x31E9495AL,0L},{0x865BDFA5L,0L},{0x09D79595L,(-6L)}},{{(-1L),0xE7601776L},{0xE7601776L,(-4L)},{0L,(-6L)},{0xE43784A5L,0x600BD89CL},{0x865BDFA5L,(-1L)},{0xB37E8660L,0x865BDFA5L},{(-4L),0xB1715326L},{0x7993A5C8L,(-1L)},{0xB37E8660L,0L}},{{(-1L),0x600BD89CL},{0x09D79595L,0xFECFF484L},{0L,0xE7601776L},{(-4L),0xE7601776L},{0L,0xFECFF484L},{0x09D79595L,0x600BD89CL},{(-1L),0L},{0xB37E8660L,(-1L)},{0x7993A5C8L,0xB1715326L}}};
    uint8_t l_1156 = 7UL;
    uint64_t l_1164 = 0x7B40665FEEC62CACLL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1094[i][j] = &l_1095;
    }
    if (((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(((((g_840 = l_839[5][3]) == ((*l_841) = (void*)0)) , &g_596) == l_843))), p_47)) | 3UL))
    {
        uint8_t *l_860[3];
        const uint64_t **l_869[2][3][4] = {{{&g_868,&g_868,&g_868,&g_868},{&g_868,&g_868,&g_868,&g_868},{&g_868,&g_868,&g_868,&g_868}},{{&g_868,&g_868,&g_868,&g_868},{&g_868,&g_868,&g_868,&g_868},{&g_868,&g_868,&g_868,&g_868}}};
        int32_t l_907 = 6L;
        int8_t l_908 = 0x74L;
        int32_t l_911 = 0x230A96D4L;
        uint64_t l_919[7] = {0x9543CFB5BFB2B675LL,0x30958DED062AFEC7LL,0x9543CFB5BFB2B675LL,0x9543CFB5BFB2B675LL,0x30958DED062AFEC7LL,0x9543CFB5BFB2B675LL,0x9543CFB5BFB2B675LL};
        int32_t l_932 = 0x8FFFFE91L;
        struct S1 **l_966[6];
        int32_t l_976 = (-1L);
        int32_t l_977[3];
        int64_t l_990 = 8L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_860[i] = &g_315;
        for (i = 0; i < 6; i++)
            l_966[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_977[i] = (-1L);
        for (g_92 = 7; (g_92 >= 0); g_92 -= 1)
        {
            struct S1 l_854 = {12,{8173,-0,503,27},0L};
            const int32_t *l_870 = &l_849;
            int16_t *l_894 = &g_430;
            int16_t **l_893 = &l_894;
            int16_t ***l_892[5];
            int16_t l_968 = 0x6724L;
            int32_t l_979 = 0x756001B7L;
            int32_t l_980 = 0x4AF720D5L;
            int32_t l_982 = 0x0762A247L;
            int i;
            for (i = 0; i < 5; i++)
                l_892[i] = &l_893;
            for (g_315 = 0; (g_315 <= 9); g_315 += 1)
            {
                uint8_t l_855 = 0xCCL;
                int32_t l_861 = 0x73D0F181L;
                const int32_t **l_871 = (void*)0;
                const int32_t **l_872 = &l_870;
                for (p_47 = 0; (p_47 >= 0); p_47 -= 1)
                {
                    int32_t *l_856 = &g_85;
                    int i;
                    (*l_856) = (~(((*g_446) = (safe_rshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u((((g_93[(p_47 + 3)] | (g_93[g_92] , (l_849 | ((!(-9L)) == (((l_851 != &p_46) > ((safe_sub_func_int16_t_s_s(((((l_854 , (((*g_463) = l_849) , ((g_93[(p_47 + 3)] <= 1L) || 6L))) , (*g_463)) || (-1L)) | p_46), g_93[(p_47 + 3)])) <= g_443)) <= p_48))))) > g_93[g_92]) , p_44), p_44)) > l_855), 10))) , g_93[5]));
                }
                for (l_854.f2 = 5; (l_854.f2 >= 0); l_854.f2 -= 1)
                {
                    const int8_t ***l_863 = (void*)0;
                    const int8_t *l_866 = (void*)0;
                    const int8_t **l_865 = &l_866;
                    const int8_t ***l_864 = &l_865;
                    for (g_430 = 0; (g_430 >= 0); g_430 -= 1)
                    {
                        uint8_t **l_859 = &l_858;
                        l_861 |= (+(g_586[0].f2 ^ (((*l_859) = l_858) == l_860[0])));
                    }
                    (*l_864) = l_862;
                    for (g_753 = 0; g_753 < 3; g_753 += 1)
                    {
                        l_860[g_753] = &g_315;
                    }
                }
                l_869[0][1][1] = g_867;
                (*l_872) = l_870;
            }
            for (g_409 = 0; (g_409 <= 5); g_409 += 1)
            {
                (*p_45) = (void*)0;
                for (g_466 = 0; (g_466 <= 5); g_466 += 1)
                {
                    return p_44;
                }
            }
            for (g_443 = 0; (g_443 <= 0); g_443 += 1)
            {
                struct S0 **l_873 = &g_225;
                int32_t l_910[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                uint64_t *l_933[7] = {&l_919[5],&l_919[5],&l_919[5],&l_919[5],&l_919[5],&l_919[5],&l_919[5]};
                int8_t *l_952 = &g_93[4];
                struct S1 ** const l_967 = &l_839[1][1];
                uint64_t l_983[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_983[i] = 18446744073709551615UL;
                for (g_3 = 0; (g_3 <= 4); g_3 += 1)
                {
                    struct S0 ***l_874 = &l_873;
                    int32_t l_906 = (-1L);
                    int32_t l_909 = 9L;
                    int32_t l_912[5][9] = {{(-1L),0x3DC2A87BL,0L,0x7D749FE4L,(-5L),(-6L),0L,1L,0L},{0L,0x323BB6CBL,0x6383C2ADL,0x6383C2ADL,0x323BB6CBL,0L,0xBA9268A1L,(-1L),0L},{1L,0x3A7507C5L,0x6383C2ADL,(-6L),(-1L),0xA42B0F0BL,(-5L),(-5L),0xA42B0F0BL},{0x6383C2ADL,(-5L),0L,(-5L),0x6383C2ADL,1L,0xBA9268A1L,0x7D749FE4L,(-10L)},{(-4L),(-5L),1L,(-10L),0x3A7507C5L,0x3DC2A87BL,0L,0x3DC2A87BL,0x3A7507C5L}};
                    int i, j;
                    g_586[g_443] = (*l_843);
                    (*l_874) = l_873;
                    if ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((((safe_mul_func_uint16_t_u_u(0x18A8L, (safe_rshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u((((safe_sub_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((*g_463), p_48)), (((9UL == p_47) > (safe_mod_func_uint64_t_u_u((~p_47), ((***g_444) | 0x5E40FC6F56ABA3C7LL)))) && (65535UL & p_44)))) > p_48) != p_47), (*g_868))), 1)))) , &g_570) != l_892[4]) < 0L), 0xED876081AB06CD32LL)), 0)))
                    {
                        int32_t *l_895 = (void*)0;
                        int32_t *l_896 = &l_854.f2;
                        int32_t *l_897 = (void*)0;
                        int32_t *l_898 = &l_849;
                        int32_t *l_899 = &l_854.f2;
                        int32_t *l_900 = &l_854.f2;
                        int32_t l_901 = 0L;
                        int32_t *l_902 = &l_849;
                        int32_t *l_903 = &g_154.f2;
                        int32_t *l_904 = &g_85;
                        int32_t *l_905[4][3] = {{&g_85,&g_85,&g_85},{&l_901,&l_901,&l_901},{&g_85,&g_85,&g_85},{&l_901,&l_901,&l_901}};
                        uint64_t l_915 = 18446744073709551612UL;
                        int i, j;
                        g_133[(g_443 + 4)] = g_133[g_3];
                        (*g_225) = (*g_225);
                        l_915--;
                        (*g_225) = g_918;
                    }
                    else
                    {
                        if (l_919[3])
                            break;
                        if (p_46)
                            break;
                    }
                }
                if ((l_854 , (((safe_lshift_func_int16_t_s_s(0xC7B2L, (((l_907 != g_730) , ((*l_858) |= p_46)) & ((+(safe_sub_func_uint8_t_u_u((((((*g_463) == (((l_911 |= (g_101 |= ((safe_rshift_func_uint16_t_u_s(6UL, 6)) < (safe_lshift_func_int16_t_s_s((~(((***g_444) , (((p_44 == p_44) || (*g_427)) >= l_919[3])) == 0xABE1B108L)), l_932))))) != 0UL) == (*l_870))) || (**g_867)) > (-6L)) > p_48), p_44))) , g_154.f1.f0)))) ^ g_584.f0) >= p_48)))
                {
                    return g_319;
                }
                else
                {
                    int32_t *l_934 = &l_911;
                    int32_t l_973 = 0x2C394650L;
                    int32_t l_974[6] = {0x8601CD42L,0x8601CD42L,0x8601CD42L,0x8601CD42L,0x8601CD42L,0x8601CD42L};
                    int64_t l_975[5];
                    const struct S1 l_986 = {40,{5950,3,1347,3},1L};
                    int32_t l_989 = 0x0244243DL;
                    int64_t l_992 = 0x2607CB182204A219LL;
                    uint64_t l_996 = 18446744073709551615UL;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_975[i] = 0x49EB8538F5785B4DLL;
                    (*l_934) = p_47;
                    for (l_913 = 0; (l_913 <= 1); l_913 += 1)
                    {
                        uint32_t l_953 = 0x36F10AFDL;
                        int32_t *l_965 = &l_932;
                        int32_t *l_969 = &l_910[1];
                        int32_t *l_970 = &l_914;
                        int32_t *l_971 = &g_38;
                        int32_t *l_972[5] = {&l_914,&l_914,&l_914,&l_914,&l_914};
                        int i, j, k;
                        (*l_934) = ((1UL <= (1L || (safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(1L, 2)), (((!(safe_rshift_func_uint8_t_u_s((p_47 , (((safe_mod_func_uint64_t_u_u(((((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((g_3 >= (((g_101 = 0x7A940CCB6E7B69CBLL) >= (g_347 <= 0x4FL)) >= (((l_854.f1.f1 = (&g_730 == l_952)) & 0L) != l_953))) != p_47), p_47)), (*l_870))) | p_46) , p_44) <= 0xB5C76F63579307F3LL), (***g_444))) , p_46) | p_47)), g_586[0].f2))) , 18446744073709551614UL) , l_953))), g_3)))) >= (*l_934));
                        (*l_934) ^= (((**l_893) = (safe_add_func_int32_t_s_s(((((p_48 = (safe_lshift_func_int8_t_s_u(((*l_952) = l_908), ((void*)0 == l_958)))) , g_586[0].f0) || (safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u(p_48, 5)) == (l_953 || (((*l_965) = p_44) , ((l_966[3] != (((*l_858) = 0xCFL) , l_967)) & (-4L))))) < l_910[1]), p_48)), 2L))) >= p_44), l_968))) <= 0x7180L);
                        l_983[2]--;
                        g_154 = l_986;
                    }
                    if (((void*)0 == l_873))
                    {
                        int32_t *l_987 = &l_977[2];
                        int32_t *l_988[2][6] = {{(void*)0,&l_849,(void*)0,(void*)0,&l_849,(void*)0},{(void*)0,&l_849,(void*)0,(void*)0,&l_849,(void*)0}};
                        int8_t l_991[2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_991[i] = (-1L);
                        l_993--;
                        l_996--;
                    }
                    else
                    {
                        (*l_934) ^= (((*g_444) == (*g_444)) && (safe_add_func_int32_t_s_s((3L && (((void*)0 != &g_840) || 0UL)), (((safe_sub_func_int64_t_s_s((safe_mod_func_int64_t_s_s((g_918.f2 | (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s(p_44, 10)) >= 3L), g_918.f3))), l_983[2])), 6L)) && 0xF1L) ^ (*g_868)))));
                    }
                    (*l_934) |= (safe_lshift_func_uint16_t_u_u(((-4L) == p_47), 5));
                }
            }
        }
    }
    else
    {
        int64_t l_1019 = 0x108A0461FDF1375DLL;
        uint32_t *l_1023 = &g_347;
        uint32_t **l_1024[3];
        int32_t *l_1037[2][5] = {{&l_849,&l_849,&l_849,&l_849,&l_849},{&g_85,&l_978,&g_85,&l_978,&g_85}};
        uint32_t l_1038[9][3][9] = {{{0UL,4294967295UL,0xC5E2A31CL,0x7A5AD1F8L,4294967295UL,4294967289UL,4294967290UL,0xC5E2A31CL,0x301B1E38L},{0UL,4294967293UL,0x75116FA7L,0UL,0x28592E60L,0UL,0x1072B276L,0x1D929C8EL,4294967295UL},{1UL,0xB1F23548L,0UL,1UL,4294967295UL,0xA971CBACL,0x8F0F218CL,4294967289UL,0x8F0F218CL}},{{0x6FC62DC2L,0x31634DECL,0x4D30F5EDL,0x4D30F5EDL,0x31634DECL,0x6FC62DC2L,0xFAF81193L,0x8CE281CDL,0x041C5F60L},{4294967295UL,0xF37E5417L,0x1D929C8EL,0x19AF2ECCL,0xC7E0AC92L,1UL,0x4ED999D8L,1UL,0UL},{0xE83132A2L,1UL,0x7AE30501L,0UL,0xD709910EL,0UL,0xFAF81193L,0xD1EF7735L,0x301B1E38L}},{{0xA10DCE46L,1UL,4294967293UL,4294967291UL,0xFAF81193L,0x7AE30501L,0x8F0F218CL,0xB1F23548L,0UL},{7UL,4294967295UL,0UL,7UL,0xE5A336BBL,1UL,0x1072B276L,0x6C338EAEL,0xD709910EL},{0x7A5AD1F8L,1UL,0x073E104DL,4294967292UL,0x31634DECL,0x75116FA7L,4294967290UL,0xE5F9DDD9L,0UL}},{{0xA971CBACL,1UL,0x301B1E38L,0x0B9B2C6FL,0UL,0xD3EE731FL,1UL,0UL,4294967289UL},{0x78702192L,0xFAF81193L,0xB8373B7EL,0x8DF28CB4L,0UL,0xD1EF7735L,0xB7845EDFL,1UL,0x8DF28CB4L},{0xA10DCE46L,1UL,1UL,0UL,0x972549A6L,0xD1EF7735L,0xC7E0AC92L,0xD709910EL,1UL}},{{6UL,0x8DF28CB4L,0UL,0x301B1E38L,0xCF7B332FL,0xD3EE731FL,1UL,0UL,8UL},{0UL,1UL,0x0B9B2C6FL,0UL,0x21655580L,0x75116FA7L,1UL,0xD1938778L,0x4D30F5EDL},{0x4ED999D8L,1UL,0x1072B276L,0x8234CEA8L,0x8F0F218CL,1UL,0x0680B24FL,1UL,0xE5F9DDD9L}},{{4294967287UL,0x94213ADEL,4294967292UL,0x75116FA7L,1UL,0x7AE30501L,1UL,0x7AE30501L,1UL},{0UL,1UL,4294967292UL,0x904F9684L,7UL,0x0B9B2C6FL,0xE83132A2L,0xA10DCE46L,0x6C338EAEL},{1UL,4294967291UL,0xB7845EDFL,0UL,4294967295UL,4294967295UL,1UL,0x94213ADEL,4294967295UL}},{{0xD1EF7735L,0x0680B24FL,0x21655580L,4294967295UL,7UL,0xA10DCE46L,0UL,0x972549A6L,0xB7845EDFL},{0x301B1E38L,1UL,0UL,1UL,1UL,0x1D929C8EL,4294967295UL,0x7E7ADED9L,4294967295UL},{0x54FFFCA7L,4294967288UL,0xD1938778L,0x7E7ADED9L,0UL,0x8CE281CDL,1UL,0x904F9684L,0x7AE30501L}},{{0x8CE281CDL,1UL,4294967292UL,0xE5F9DDD9L,0xF37E5417L,0x073E104DL,4294967287UL,1UL,4294967289UL},{0UL,0xB339C7FCL,0x5D1D42A3L,4294967292UL,0x75116FA7L,0xB1F23548L,4294967292UL,8UL,0xB8373B7EL},{0x78702192L,1UL,0x972549A6L,1UL,4294967288UL,1UL,0xD3EE731FL,0x972549A6L,0UL}},{{8UL,0xB1F23548L,0x78702192L,1UL,0UL,0x301B1E38L,4294967295UL,0xB339C7FCL,9UL},{0UL,6UL,0x073E104DL,4294967292UL,4294967287UL,0xFDB575F8L,0xE5A336BBL,0x4D30F5EDL,0UL},{0x4D30F5EDL,4294967295UL,1UL,0xE5F9DDD9L,0xD47FE7C0L,0x4D30F5EDL,4294967291UL,0xC5E2A31CL,4294967292UL}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1024[i] = &g_427;
        l_1038[8][0][2] &= (safe_lshift_func_uint16_t_u_u(65535UL, ((~((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((~(l_1019 & ((+((safe_mod_func_uint32_t_u_u(7UL, ((p_48 = (l_1023 != (p_48 , (l_1025 = &g_347)))) | (safe_add_func_uint64_t_u_u((l_1019 < ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_913 &= (safe_mul_func_int8_t_s_s((((safe_sub_func_int32_t_s_s((l_981[4] = (&g_92 == (((*g_225) = l_1036) , (void*)0))), 4294967295UL)) , g_596.f3) | p_46), 0x46L))), l_993)), 0x7D59L)) != p_46)), 0x3D14CF771D8823F8LL))))) , g_706[7][2][0])) != p_44))) ^ l_849), p_46)), g_154.f1.f0)) & 4294967290UL)) , l_1036.f2)));
    }
    for (g_730 = 0; (g_730 < 9); g_730 = safe_add_func_uint16_t_u_u(g_730, 9))
    {
        int32_t l_1062 = 1L;
        struct S1 l_1091[7][9][4] = {{{{26,{4,-2,1024,6},-1L},{5,{9782,-1,988,8},0x4A35AC5CL},{5,{3738,3,1103,31},0xF0B49E58L},{5,{9782,-1,988,8},0x4A35AC5CL}},{{32,{8318,-3,884,0},1L},{29,{4882,-3,1476,9},0x4E3984CBL},{26,{6882,2,150,6},0x78B3A0BBL},{4,{842,-3,436,17},9L}},{{15,{9360,-2,1994,17},0xEE5FF013L},{15,{8918,0,827,26},0x16DC5C6CL},{26,{4,-2,1024,6},-1L},{8,{4336,-3,1924,19},-1L}},{{37,{8579,-0,1934,31},0L},{9,{3696,0,1983,1},0xF00FAAE3L},{8,{4336,-3,1924,19},-1L},{15,{9360,-2,1994,17},0xEE5FF013L}},{{37,{8579,-0,1934,31},0L},{6,{5604,2,9,27},1L},{26,{4,-2,1024,6},-1L},{26,{4,-2,1024,6},-1L}},{{15,{9360,-2,1994,17},0xEE5FF013L},{15,{9360,-2,1994,17},0xEE5FF013L},{26,{6882,2,150,6},0x78B3A0BBL},{33,{7485,-0,737,25},0xEC81755FL}},{{32,{8318,-3,884,0},1L},{26,{6882,2,150,6},0x78B3A0BBL},{5,{3738,3,1103,31},0xF0B49E58L},{29,{4882,-3,1476,9},0x4E3984CBL}},{{26,{4,-2,1024,6},-1L},{11,{4000,0,686,5},0xE6137FF9L},{28,{3915,0,208,27},0x15AC8098L},{5,{3738,3,1103,31},0xF0B49E58L}},{{5,{3738,3,1103,31},0xF0B49E58L},{11,{4000,0,686,5},0xE6137FF9L},{15,{9360,-2,1994,17},0xEE5FF013L},{29,{4882,-3,1476,9},0x4E3984CBL}}},{{{11,{4000,0,686,5},0xE6137FF9L},{26,{6882,2,150,6},0x78B3A0BBL},{11,{4000,0,686,5},0xE6137FF9L},{33,{7485,-0,737,25},0xEC81755FL}},{{6,{5604,2,9,27},1L},{15,{9360,-2,1994,17},0xEE5FF013L},{15,{8918,0,827,26},0x16DC5C6CL},{26,{4,-2,1024,6},-1L}},{{4,{842,-3,436,17},9L},{6,{5604,2,9,27},1L},{33,{7485,-0,737,25},0xEC81755FL},{15,{9360,-2,1994,17},0xEE5FF013L}},{{29,{4882,-3,1476,9},0x4E3984CBL},{9,{3696,0,1983,1},0xF00FAAE3L},{33,{7485,-0,737,25},0xEC81755FL},{8,{4336,-3,1924,19},-1L}},{{4,{842,-3,436,17},9L},{15,{8918,0,827,26},0x16DC5C6CL},{15,{8918,0,827,26},0x16DC5C6CL},{4,{842,-3,436,17},9L}},{{6,{5604,2,9,27},1L},{29,{4882,-3,1476,9},0x4E3984CBL},{11,{4000,0,686,5},0xE6137FF9L},{5,{9782,-1,988,8},0x4A35AC5CL}},{{11,{4000,0,686,5},0xE6137FF9L},{5,{9782,-1,988,8},0x4A35AC5CL},{15,{9360,-2,1994,17},0xEE5FF013L},{9,{3696,0,1983,1},0xF00FAAE3L}},{{5,{3738,3,1103,31},0xF0B49E58L},{37,{8579,-0,1934,31},0L},{28,{3915,0,208,27},0x15AC8098L},{9,{3696,0,1983,1},0xF00FAAE3L}},{{26,{4,-2,1024,6},-1L},{5,{9782,-1,988,8},0x4A35AC5CL},{5,{3738,3,1103,31},0xF0B49E58L},{5,{9782,-1,988,8},0x4A35AC5CL}}},{{{32,{8318,-3,884,0},1L},{29,{4882,-3,1476,9},0x4E3984CBL},{26,{6882,2,150,6},0x78B3A0BBL},{4,{842,-3,436,17},9L}},{{15,{9360,-2,1994,17},0xEE5FF013L},{15,{8918,0,827,26},0x16DC5C6CL},{26,{4,-2,1024,6},-1L},{8,{4336,-3,1924,19},-1L}},{{37,{8579,-0,1934,31},0L},{9,{3696,0,1983,1},0xF00FAAE3L},{8,{4336,-3,1924,19},-1L},{15,{9360,-2,1994,17},0xEE5FF013L}},{{37,{8579,-0,1934,31},0L},{6,{5604,2,9,27},1L},{26,{4,-2,1024,6},-1L},{26,{4,-2,1024,6},-1L}},{{15,{9360,-2,1994,17},0xEE5FF013L},{15,{9360,-2,1994,17},0xEE5FF013L},{26,{6882,2,150,6},0x78B3A0BBL},{33,{7485,-0,737,25},0xEC81755FL}},{{32,{8318,-3,884,0},1L},{26,{6882,2,150,6},0x78B3A0BBL},{29,{4882,-3,1476,9},0x4E3984CBL},{4,{842,-3,436,17},9L}},{{11,{4000,0,686,5},0xE6137FF9L},{27,{381,-2,1523,16},-9L},{8,{4336,-3,1924,19},-1L},{29,{4882,-3,1476,9},0x4E3984CBL}},{{29,{4882,-3,1476,9},0x4E3984CBL},{27,{381,-2,1523,16},-9L},{5,{3738,3,1103,31},0xF0B49E58L},{4,{842,-3,436,17},9L}},{{27,{381,-2,1523,16},-9L},{9,{3696,0,1983,1},0xF00FAAE3L},{27,{381,-2,1523,16},-9L},{6,{5604,2,9,27},1L}}},{{{15,{8918,0,827,26},0x16DC5C6CL},{5,{3738,3,1103,31},0xF0B49E58L},{28,{3915,0,208,27},0x15AC8098L},{11,{4000,0,686,5},0xE6137FF9L}},{{32,{8318,-3,884,0},1L},{15,{8918,0,827,26},0x16DC5C6CL},{6,{5604,2,9,27},1L},{5,{3738,3,1103,31},0xF0B49E58L}},{{4,{842,-3,436,17},9L},{37,{8579,-0,1934,31},0L},{6,{5604,2,9,27},1L},{26,{4,-2,1024,6},-1L}},{{32,{8318,-3,884,0},1L},{28,{3915,0,208,27},0x15AC8098L},{28,{3915,0,208,27},0x15AC8098L},{32,{8318,-3,884,0},1L}},{{15,{8918,0,827,26},0x16DC5C6CL},{4,{842,-3,436,17},9L},{27,{381,-2,1523,16},-9L},{15,{9360,-2,1994,17},0xEE5FF013L}},{{27,{381,-2,1523,16},-9L},{15,{9360,-2,1994,17},0xEE5FF013L},{5,{3738,3,1103,31},0xF0B49E58L},{37,{8579,-0,1934,31},0L}},{{29,{4882,-3,1476,9},0x4E3984CBL},{5,{9782,-1,988,8},0x4A35AC5CL},{8,{4336,-3,1924,19},-1L},{37,{8579,-0,1934,31},0L}},{{11,{4000,0,686,5},0xE6137FF9L},{15,{9360,-2,1994,17},0xEE5FF013L},{29,{4882,-3,1476,9},0x4E3984CBL},{15,{9360,-2,1994,17},0xEE5FF013L}},{{33,{7485,-0,737,25},0xEC81755FL},{4,{842,-3,436,17},9L},{9,{3696,0,1983,1},0xF00FAAE3L},{32,{8318,-3,884,0},1L}}},{{{5,{3738,3,1103,31},0xF0B49E58L},{28,{3915,0,208,27},0x15AC8098L},{11,{4000,0,686,5},0xE6137FF9L},{26,{4,-2,1024,6},-1L}},{{5,{9782,-1,988,8},0x4A35AC5CL},{37,{8579,-0,1934,31},0L},{26,{4,-2,1024,6},-1L},{5,{3738,3,1103,31},0xF0B49E58L}},{{5,{9782,-1,988,8},0x4A35AC5CL},{15,{8918,0,827,26},0x16DC5C6CL},{11,{4000,0,686,5},0xE6137FF9L},{11,{4000,0,686,5},0xE6137FF9L}},{{5,{3738,3,1103,31},0xF0B49E58L},{5,{3738,3,1103,31},0xF0B49E58L},{9,{3696,0,1983,1},0xF00FAAE3L},{6,{5604,2,9,27},1L}},{{33,{7485,-0,737,25},0xEC81755FL},{9,{3696,0,1983,1},0xF00FAAE3L},{29,{4882,-3,1476,9},0x4E3984CBL},{4,{842,-3,436,17},9L}},{{11,{4000,0,686,5},0xE6137FF9L},{27,{381,-2,1523,16},-9L},{8,{4336,-3,1924,19},-1L},{29,{4882,-3,1476,9},0x4E3984CBL}},{{29,{4882,-3,1476,9},0x4E3984CBL},{27,{381,-2,1523,16},-9L},{5,{3738,3,1103,31},0xF0B49E58L},{4,{842,-3,436,17},9L}},{{27,{381,-2,1523,16},-9L},{9,{3696,0,1983,1},0xF00FAAE3L},{27,{381,-2,1523,16},-9L},{6,{5604,2,9,27},1L}},{{15,{8918,0,827,26},0x16DC5C6CL},{5,{3738,3,1103,31},0xF0B49E58L},{28,{3915,0,208,27},0x15AC8098L},{11,{4000,0,686,5},0xE6137FF9L}}},{{{32,{8318,-3,884,0},1L},{15,{8918,0,827,26},0x16DC5C6CL},{6,{5604,2,9,27},1L},{5,{3738,3,1103,31},0xF0B49E58L}},{{4,{842,-3,436,17},9L},{37,{8579,-0,1934,31},0L},{6,{5604,2,9,27},1L},{26,{4,-2,1024,6},-1L}},{{32,{8318,-3,884,0},1L},{28,{3915,0,208,27},0x15AC8098L},{28,{3915,0,208,27},0x15AC8098L},{32,{8318,-3,884,0},1L}},{{15,{8918,0,827,26},0x16DC5C6CL},{4,{842,-3,436,17},9L},{27,{381,-2,1523,16},-9L},{15,{9360,-2,1994,17},0xEE5FF013L}},{{27,{381,-2,1523,16},-9L},{15,{9360,-2,1994,17},0xEE5FF013L},{5,{3738,3,1103,31},0xF0B49E58L},{37,{8579,-0,1934,31},0L}},{{29,{4882,-3,1476,9},0x4E3984CBL},{5,{9782,-1,988,8},0x4A35AC5CL},{8,{4336,-3,1924,19},-1L},{37,{8579,-0,1934,31},0L}},{{11,{4000,0,686,5},0xE6137FF9L},{15,{9360,-2,1994,17},0xEE5FF013L},{29,{4882,-3,1476,9},0x4E3984CBL},{15,{9360,-2,1994,17},0xEE5FF013L}},{{33,{7485,-0,737,25},0xEC81755FL},{4,{842,-3,436,17},9L},{9,{3696,0,1983,1},0xF00FAAE3L},{32,{8318,-3,884,0},1L}},{{5,{3738,3,1103,31},0xF0B49E58L},{28,{3915,0,208,27},0x15AC8098L},{11,{4000,0,686,5},0xE6137FF9L},{26,{4,-2,1024,6},-1L}}},{{{5,{9782,-1,988,8},0x4A35AC5CL},{37,{8579,-0,1934,31},0L},{26,{4,-2,1024,6},-1L},{5,{3738,3,1103,31},0xF0B49E58L}},{{5,{9782,-1,988,8},0x4A35AC5CL},{15,{8918,0,827,26},0x16DC5C6CL},{11,{4000,0,686,5},0xE6137FF9L},{11,{4000,0,686,5},0xE6137FF9L}},{{5,{3738,3,1103,31},0xF0B49E58L},{5,{3738,3,1103,31},0xF0B49E58L},{9,{3696,0,1983,1},0xF00FAAE3L},{6,{5604,2,9,27},1L}},{{33,{7485,-0,737,25},0xEC81755FL},{9,{3696,0,1983,1},0xF00FAAE3L},{29,{4882,-3,1476,9},0x4E3984CBL},{4,{842,-3,436,17},9L}},{{11,{4000,0,686,5},0xE6137FF9L},{27,{381,-2,1523,16},-9L},{8,{4336,-3,1924,19},-1L},{29,{4882,-3,1476,9},0x4E3984CBL}},{{29,{4882,-3,1476,9},0x4E3984CBL},{27,{381,-2,1523,16},-9L},{5,{3738,3,1103,31},0xF0B49E58L},{4,{842,-3,436,17},9L}},{{27,{381,-2,1523,16},-9L},{9,{3696,0,1983,1},0xF00FAAE3L},{27,{381,-2,1523,16},-9L},{6,{5604,2,9,27},1L}},{{15,{8918,0,827,26},0x16DC5C6CL},{5,{3738,3,1103,31},0xF0B49E58L},{28,{3915,0,208,27},0x15AC8098L},{11,{4000,0,686,5},0xE6137FF9L}},{{32,{8318,-3,884,0},1L},{15,{8918,0,827,26},0x16DC5C6CL},{6,{5604,2,9,27},1L},{5,{3738,3,1103,31},0xF0B49E58L}}}};
        uint32_t **l_1119 = (void*)0;
        int i, j, k;
        if (l_993)
            break;
        for (g_443 = 0; (g_443 > 50); g_443++)
        {
            int64_t l_1049 = 0xF6BB0F5B7DFA7766LL;
            struct S1 *l_1074 = &g_154;
            int32_t l_1090[5][6][2];
            int16_t l_1120 = 0x6567L;
            int16_t **l_1142 = &l_1095;
            int32_t l_1152[8] = {0xC05D7C06L,0xC05D7C06L,0xE1B706E2L,0xC05D7C06L,0xC05D7C06L,0xE1B706E2L,0xC05D7C06L,0xC05D7C06L};
            int8_t l_1162[8][9][3] = {{{(-1L),0L,0L},{0xCCL,0x67L,0x06L},{0L,0xEEL,0xAFL},{(-6L),1L,1L},{6L,0L,0x7AL},{1L,1L,0x8FL},{0x64L,0xEEL,(-1L)},{0x67L,0x67L,1L},{0x7AL,0x7AL,(-1L)}},{{(-1L),0x93L,0xAEL},{(-1L),0x7DL,0xEEL},{0xEBL,(-1L),0xAEL},{0x85L,0L,(-1L)},{0xCCL,0x8FL,0xCCL},{0L,(-4L),0L},{1L,0xBFL,(-6L)},{(-4L),0xEEL,6L},{0x06L,(-6L),1L}},{{(-4L),0xAFL,0x64L},{1L,0x67L,0x67L},{0L,6L,0x7AL},{0xCCL,0x06L,(-3L)},{0x85L,(-1L),0x87L},{0xEBL,1L,0xBAL},{(-1L),(-1L),0x7DL},{(-1L),0x06L,1L},{6L,6L,(-1L)}},{{0xBAL,0x67L,0L},{0xEEL,0xAFL,(-7L)},{0L,(-6L),(-1L)},{0x00L,0xEEL,(-7L)},{1L,0xBFL,0L},{(-1L),(-4L),(-1L)},{(-4L),0x8FL,1L},{0L,0L,0x7DL},{0x8FL,(-1L),0xBAL}},{{0L,0x7DL,0x87L},{0x8FL,0x93L,(-3L)},{0L,0x7AL,0x7AL},{(-4L),0xBAL,0x67L},{(-1L),0L,0x64L},{1L,0xCCL,1L},{0x00L,0xF4L,6L},{0L,0xCCL,(-6L)},{0xEEL,0L,0L}},{{0xBAL,0xBAL,0xCCL},{6L,0x7AL,(-1L)},{(-1L),0x93L,0xAEL},{(-1L),0x7DL,0xEEL},{0xEBL,(-1L),0xAEL},{0x85L,0L,(-1L)},{0xCCL,0x8FL,0xCCL},{0L,(-4L),0L},{1L,0xBFL,(-6L)}},{{(-4L),0xEEL,6L},{0x06L,(-6L),1L},{(-4L),0xAFL,0x64L},{1L,0x67L,0x67L},{0L,6L,0x7AL},{0xCCL,0x06L,(-3L)},{0x85L,(-1L),0x87L},{0xEBL,1L,0xBAL},{(-1L),(-1L),0x7DL}},{{(-1L),0x06L,1L},{6L,6L,(-1L)},{0xBAL,0x67L,0L},{0xEEL,0xAFL,(-7L)},{0L,(-6L),(-1L)},{0x00L,0xEEL,(-7L)},{1L,0xBFL,0L},{(-1L),(-4L),(-1L)},{(-4L),0x8FL,1L}}};
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_1090[i][j][k] = 0L;
                }
            }
            for (p_46 = 0; (p_46 <= 4); p_46 += 1)
            {
                int32_t **l_1060 = &g_133[2];
                int32_t l_1061 = 0x7687A4B6L;
                int32_t l_1098 = 2L;
                struct S0 l_1116 = {5757,-1,1072,22};
                int16_t **l_1143 = &l_1095;
                int32_t l_1154 = (-8L);
                int32_t *l_1163 = &l_1152[5];
                uint32_t l_1167[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_1167[i] = 1UL;
                if ((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(l_978, (l_1049 > ((((g_430 = ((*g_427) & 0x3EC40964L)) > l_1049) > ((l_1050 , (((safe_add_func_uint8_t_u_u(0UL, (safe_lshift_func_uint16_t_u_u(((!(safe_rshift_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(((&g_133[2] != (l_1060 = &g_133[4])) && p_47), g_125)) >= l_1049) != 0x6D5A1CDEL), 13))) > 1UL), p_46)))) && (*g_427)) , l_1049)) != l_1061)) <= 0L)))), l_1062)) && p_48), p_44)))
                {
                    int32_t l_1063 = 0x2EA342F2L;
                    int32_t ** const l_1076 = (void*)0;
                    int16_t *****l_1096 = &l_1092;
                    uint8_t *l_1099 = &g_315;
                    for (l_1062 = 1; (l_1062 <= 4); l_1062 += 1)
                    {
                        int32_t *l_1075 = &g_154.f2;
                        int i;
                        (*l_1075) |= ((l_1063 <= (safe_sub_func_int16_t_s_s(p_48, (1UL || (((***g_444) |= (safe_mul_func_uint16_t_u_u((*g_463), (safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_u((-6L), 0)) , 0x8891L) < (l_1074 == l_1074)) != p_47), l_1049)) ^ (-1L)), p_46))))) ^ p_46))))) == p_46);
                        g_133[l_1062] = (*p_45);
                        (*l_1075) = (l_1076 != (((&l_843 != (void*)0) && ((**g_445) ^= (*l_1075))) , (void*)0));
                    }
                    if ((((p_47 <= (safe_div_func_int64_t_s_s(((*g_446) = 1L), ((&g_133[4] != (l_1079 = p_45)) & (safe_mul_func_uint8_t_u_u(((*l_1099) = ((safe_mod_func_uint64_t_u_u((((safe_mod_func_int8_t_s_s((-1L), g_347)) ^ ((safe_mul_func_uint8_t_u_u(((*l_858) = ((((l_1090[1][0][1] , (&g_569 != ((*l_1096) = ((l_1091[6][2][3] , g_584.f0) , l_1092)))) >= p_48) & p_46) , g_174)), 0x0FL)) < (-8L))) | 0x4334L), l_1097[5][7][0])) ^ l_1098)), l_1090[0][1][1])))))) != (-5L)) , l_1049))
                    {
                        (*l_1060) = (*g_132);
                    }
                    else
                    {
                        struct S1 l_1100 = {28,{7853,-0,1707,8},0xFA6CC79BL};
                        if (l_1091[6][2][3].f1.f1)
                            break;
                        l_1100 = l_1091[6][4][2];
                        if (l_1100.f0)
                            continue;
                        (*g_132) = (*g_132);
                    }
                    for (g_315 = (-12); (g_315 >= 30); ++g_315)
                    {
                        uint32_t l_1112 = 0x1F77C2A0L;
                        (*l_1080) = ((((0x47L == (+(((safe_div_func_int16_t_s_s((p_48 = (((safe_unary_minus_func_int16_t_s((l_1120 = (((****l_1092) ^= p_44) && (((+(g_1110 != (void*)0)) != ((**g_1110) |= l_1112)) , (((*g_427) = 0x358FE817L) >= (!(safe_sub_func_int8_t_s_s(((((**g_1110) = ((l_1116 , (l_1112 || (safe_add_func_int16_t_s_s((((void*)0 == l_1119) == l_1090[1][0][1]), p_47)))) > 0x2D6FL)) , p_46) || (*g_868)), (-9L)))))))))) ^ l_1090[3][0][0]) == g_93[7])), (*g_463))) && 0UL) >= (**g_867)))) , (*l_1080)) && 8UL) ^ p_46);
                    }
                }
                else
                {
                    (*l_1060) = (void*)0;
                    (*g_132) = (*l_1079);
                    for (g_92 = 14; (g_92 <= (-27)); g_92 = safe_sub_func_uint32_t_u_u(g_92, 5))
                    {
                        return p_46;
                    }
                }
                for (p_48 = 0; (p_48 <= 0); p_48 += 1)
                {
                    int8_t ***l_1133[8] = {&g_1132,(void*)0,&g_1132,(void*)0,&g_1132,(void*)0,&g_1132,(void*)0};
                    int32_t l_1148 = (-1L);
                    int64_t *l_1149 = &l_1049;
                    int64_t l_1150 = 0x220647E459F83D79LL;
                    int32_t l_1153 = (-1L);
                    int32_t l_1155 = 0x6FA6E6ECL;
                    int i, j;
                    (*l_1080) = (safe_sub_func_int64_t_s_s((1L || (+(p_46 >= (safe_mul_func_uint8_t_u_u((**g_1110), (**g_1110)))))), (safe_sub_func_int8_t_s_s(p_46, (safe_rshift_func_uint16_t_u_u(((g_1132 = g_1132) == (void*)0), 10))))));
                    if ((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((((((*l_1074) = g_154) , 4294967295UL) | ((*l_1080) >= ((***g_444) < ((*l_1149) = (safe_mul_func_int16_t_s_s(((((5L >= (safe_div_func_uint64_t_u_u(((l_1094[p_48][(p_48 + 1)] = l_1142) != l_1143), (l_1091[6][2][3].f1.f1 |= (((safe_add_func_uint32_t_u_u((&g_225 == (((safe_mod_func_int8_t_s_s(2L, p_48)) , (*g_446)) , &l_843)), l_1090[1][0][1])) > 0xAC9BL) > p_44))))) == 0L) , l_1120) < l_1148), l_1148)))))) , (*g_1111)) > p_48), 0x40L)), p_47)))
                    {
                        int32_t *l_1151[5] = {&g_85,&g_85,&g_85,&g_85,&g_85};
                        int i;
                        --l_1156;
                    }
                    else
                    {
                        if (g_1159)
                            break;
                    }
                    if (p_46)
                        break;
                    (*l_1080) = (safe_rshift_func_uint8_t_u_s(0x70L, (l_1090[1][0][1] = ((*g_463) | l_1162[0][2][0]))));
                }
                l_1164++;
                l_1167[4]++;
            }
            (*l_1080) = 0x2954C498L;
            (*l_1080) ^= (safe_mod_func_uint64_t_u_u((~((**l_1142) = p_46)), p_44));
        }
    }
    for (l_1156 = (-25); (l_1156 <= 3); l_1156 = safe_add_func_int16_t_s_s(l_1156, 2))
    {
        int32_t ***l_1175 = (void*)0;
        int32_t ***l_1176 = (void*)0;
        int32_t ***l_1177 = &g_132;
        uint32_t l_1191 = 0xE8D0272EL;
        (*l_1177) = p_45;
        for (g_1081 = 8; (g_1081 != 8); g_1081 = safe_add_func_uint64_t_u_u(g_1081, 7))
        {
            uint32_t l_1186 = 0x2334F331L;
            const uint64_t *l_1207 = &l_1164;
            int32_t l_1208 = 0x78A8DC98L;
            for (l_849 = 0; (l_849 >= (-21)); l_849 = safe_sub_func_int32_t_s_s(l_849, 3))
            {
                int32_t l_1182 = 0x7244FF65L;
                int32_t *l_1183 = &l_914;
                int32_t *l_1184 = &l_981[4];
                int32_t *l_1185[8];
                struct S1 l_1202 = {6,{1151,2,951,17},0xDE41CA66L};
                int32_t ****l_1203 = &l_1176;
                int i;
                for (i = 0; i < 8; i++)
                    l_1185[i] = &g_38;
                ++l_1186;
                p_47 = ((((safe_add_func_uint32_t_u_u(0UL, (l_1191 >= ((*l_1183) >= (+(p_47 , p_44)))))) , (((-1L) == (safe_mod_func_int32_t_s_s((p_46 > p_48), (safe_mul_func_uint16_t_u_u(p_44, p_47))))) != 0x72145FBBL)) , p_46) || p_44);
                l_1208 ^= ((*g_225) , (((+((((safe_mod_func_int16_t_s_s((p_48 &= (0L == (safe_lshift_func_int16_t_s_s(((l_1202 , ((*g_446) |= (((*l_1203) = &g_132) != (g_1204[0] = &p_45)))) < (((*l_1183) < l_1186) == (((*l_1184) ^= ((((*g_867) = l_1207) == l_1207) == 0x98F04F9CL)) <= 3UL))), l_1186)))), p_46)) , 0L) > p_47) > 0xABL)) >= 0L) , p_46));
            }
            return (*l_1080);
        }
    }
    return (**g_1110);
}







static int8_t func_51(int16_t * p_52, int32_t p_53)
{
    int32_t *l_833 = &g_85;
    struct S0 *l_834 = &g_586[0];
    struct S0 **l_835[8][9][3] = {{{&l_834,(void*)0,&l_834},{&l_834,(void*)0,&l_834},{&g_225,&l_834,&l_834},{&g_225,&g_225,&g_225},{&g_225,&g_225,&g_225},{&l_834,(void*)0,(void*)0},{&g_225,&l_834,&g_225},{&g_225,&l_834,&g_225},{&g_225,(void*)0,&g_225}},{{&l_834,&l_834,&l_834},{&l_834,&l_834,&l_834},{&l_834,(void*)0,&l_834},{&g_225,&g_225,&l_834},{&l_834,&g_225,&l_834},{&g_225,&l_834,&g_225},{&g_225,(void*)0,&g_225},{&g_225,(void*)0,&g_225},{&l_834,&l_834,(void*)0}},{{&g_225,&g_225,&g_225},{&l_834,&l_834,&g_225},{&l_834,(void*)0,&l_834},{&l_834,(void*)0,&l_834},{&g_225,&l_834,&l_834},{&g_225,&g_225,&g_225},{&g_225,&g_225,&g_225},{&l_834,(void*)0,(void*)0},{&g_225,&l_834,&g_225}},{{&g_225,&l_834,&g_225},{&g_225,(void*)0,&g_225},{&l_834,&l_834,&l_834},{&l_834,&l_834,&l_834},{&l_834,(void*)0,&l_834},{&g_225,&g_225,&l_834},{&l_834,&g_225,&l_834},{&g_225,&l_834,&g_225},{&g_225,(void*)0,&g_225}},{{&g_225,(void*)0,&g_225},{&l_834,&l_834,(void*)0},{&g_225,&g_225,&g_225},{&l_834,&l_834,&g_225},{&l_834,(void*)0,&l_834},{&l_834,(void*)0,&l_834},{&g_225,&l_834,&l_834},{&g_225,&g_225,&g_225},{&g_225,&g_225,&g_225}},{{&l_834,(void*)0,(void*)0},{&g_225,&l_834,&g_225},{&g_225,&l_834,&g_225},{&g_225,(void*)0,&g_225},{&l_834,&l_834,&l_834},{&l_834,&l_834,&l_834},{&l_834,(void*)0,&l_834},{&g_225,&g_225,&l_834},{&l_834,&g_225,&l_834}},{{&g_225,&l_834,&g_225},{&g_225,(void*)0,&g_225},{&g_225,(void*)0,&g_225},{&l_834,&l_834,(void*)0},{&g_225,&g_225,&g_225},{&g_225,(void*)0,&l_834},{&g_225,(void*)0,(void*)0},{(void*)0,&g_225,(void*)0},{&l_834,&g_225,(void*)0}},{{&g_225,&l_834,&l_834},{&l_834,&g_225,&g_225},{&l_834,&g_225,&l_834},{&l_834,&g_225,&l_834},{&g_225,(void*)0,&l_834},{&l_834,&g_225,&g_225},{(void*)0,(void*)0,&l_834},{&g_225,&g_225,(void*)0},{&g_225,&g_225,&g_225}}};
    int i, j, k;
    (*l_833) = p_53;
    g_225 = l_834;
    return (*l_833);
}







static int16_t * func_54(int16_t * p_55, uint32_t p_56)
{
    uint64_t l_699 = 1UL;
    uint16_t l_752 = 65535UL;
    int32_t l_790 = 0xE6A13A70L;
    struct S1 *l_791 = &g_154;
    int32_t l_811 = 0x3C380BC0L;
    int32_t l_818 = 0x9387D8C9L;
    int32_t l_819 = 1L;
    int32_t l_820 = 0x3E465E76L;
    int32_t l_821 = 0x7C4861B6L;
    int32_t l_822 = 0x29569BE4L;
    int32_t l_823 = 0xCCC60D01L;
    int32_t l_824 = 1L;
    int32_t l_825[1];
    int16_t l_826 = (-9L);
    uint32_t l_829 = 0x45621E17L;
    int32_t *l_832 = &l_823;
    int i;
    for (i = 0; i < 1; i++)
        l_825[i] = 5L;
    for (p_56 = 27; (p_56 != 43); ++p_56)
    {
        const uint16_t *l_708 = &g_3;
        const uint16_t **l_707 = &l_708;
        int32_t l_728 = 0x6D71A8ADL;
        uint32_t l_732 = 0UL;
        int16_t *l_738 = &g_18;
        int16_t **l_737 = &l_738;
        int16_t ***l_736[3];
        int16_t ****l_735 = &l_736[1];
        uint8_t *l_751 = &g_315;
        int8_t *l_754 = &g_93[4];
        struct S0 *l_757 = &g_154.f1;
        uint32_t *l_764[8][5] = {{&g_452,&g_452,&g_452,&g_452,&g_452},{&g_452,&g_452,&g_452,&g_452,&g_452},{&g_452,&g_452,&g_452,&g_452,&g_452},{&g_452,&g_452,&g_452,&g_452,&g_452},{&g_452,&g_452,&g_452,&g_452,&g_452},{&g_452,&g_452,&g_452,&g_452,&g_452},{&g_452,&g_452,&g_452,&g_452,&g_452},{&g_452,&g_452,&g_452,&g_452,&g_452}};
        uint8_t l_798[7][8][2] = {{{0UL,0x12L},{0x05L,0x17L},{0x12L,1UL},{0x98L,1UL},{0x38L,5UL},{5UL,0x36L},{7UL,0UL},{0x12L,0xBEL}},{{255UL,0UL},{0x6DL,5UL},{0x57L,249UL},{250UL,254UL},{0x12L,254UL},{250UL,249UL},{0x57L,5UL},{0x6DL,0UL}},{{255UL,0xBEL},{0x12L,0UL},{7UL,0x36L},{5UL,5UL},{0x38L,1UL},{0x98L,1UL},{0x12L,0x17L},{0x05L,0x12L}},{{0UL,5UL},{0UL,0x12L},{0x05L,0x17L},{0x12L,1UL},{0x98L,1UL},{0x38L,5UL},{5UL,0x36L},{7UL,0UL}},{{0x12L,0xBEL},{255UL,0UL},{0x6DL,5UL},{0x57L,249UL},{250UL,254UL},{0x12L,254UL},{250UL,249UL},{0x57L,5UL}},{{0x6DL,0UL},{255UL,0xBEL},{0x12L,0UL},{7UL,0x36L},{5UL,5UL},{0x38L,1UL},{0x98L,1UL},{0x12L,0x17L}},{{0x05L,0x12L},{0UL,5UL},{0UL,0x12L},{0x05L,0x17L},{0x12L,1UL},{0x98L,1UL},{0x38L,5UL},{5UL,0x36L}}};
        uint64_t *l_801[10];
        int32_t *l_810[3][4] = {{(void*)0,&l_728,(void*)0,&l_728},{(void*)0,&l_728,&l_728,(void*)0},{&g_154.f2,&l_728,&l_728,&l_728}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_736[i] = &l_737;
        for (i = 0; i < 10; i++)
            l_801[i] = &l_699;
        for (g_443 = 0; (g_443 < 43); g_443 = safe_add_func_uint32_t_u_u(g_443, 8))
        {
            uint64_t *l_700 = &g_101;
            int8_t *l_703 = (void*)0;
            int8_t *l_704 = &g_93[4];
            int8_t *l_705 = &g_706[7][2][0];
            int8_t *l_729 = &g_730;
            uint32_t l_731 = 0UL;
            (*g_132) = (((safe_mul_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(l_699, (((*l_705) = ((*l_704) |= (l_699 && ((*l_700)++)))) <= g_125))), (((*l_729) ^= ((l_707 != (void*)0) , (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(0xFAF82DDCL, (safe_div_func_int64_t_s_s((((*g_427)++) || (+(((*g_463) < ((safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s((***g_444), ((safe_div_func_int32_t_s_s((((safe_lshift_func_int8_t_s_s(0x55L, 7)) | p_56) , 0xDB7AB9E1L), 0xE22DEE1AL)) , p_56))), l_699)) & l_699)) ^ 0xF285E3CCFB8D6590LL))), l_728)))), 6)), 6)))) > p_56))) , l_731) < g_154.f1.f0), (*g_463))) >= l_732) , (*g_132));
        }
        if ((safe_mod_func_uint8_t_u_u(((l_735 != &g_569) >= ((*l_754) |= (safe_add_func_int32_t_s_s(((-1L) >= (l_728 < ((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_56, (p_56 || (safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((void*)0 == l_751), ((*g_463) & l_752))) <= g_753), 0x4409L))))), 0x9CL)) || l_732))), 1L)))), p_56)))
        {
            int32_t *l_761 = &g_154.f2;
            if (p_56)
                break;
            for (g_409 = (-11); (g_409 >= 10); ++g_409)
            {
                int32_t l_760 = 0xFD8B0F2CL;
                if (((&g_570 != (void*)0) ^ ((void*)0 == l_757)))
                {
                    (*g_132) = (*g_132);
                }
                else
                {
                    uint32_t *l_766 = (void*)0;
                    uint32_t **l_765 = &l_766;
                    uint8_t *l_788 = (void*)0;
                    int32_t *l_789 = &l_728;
                    for (g_85 = (-18); (g_85 < (-10)); g_85 = safe_add_func_int32_t_s_s(g_85, 5))
                    {
                        l_760 = l_752;
                    }
                    (*g_132) = l_761;
                    (*l_789) = (safe_lshift_func_int8_t_s_s(((l_764[4][1] == ((*l_765) = &p_56)) ^ (safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((((1UL >= (((((safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(0xFEL, (safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(0x32FEL, ((safe_mul_func_uint64_t_u_u(p_56, (l_732 > (l_752 & ((*l_761) = ((safe_unary_minus_func_uint8_t_u(((void*)0 != l_788))) && p_56)))))) <= l_728))) > (*p_55)), l_760)))), p_56)), 0xF6937980L)), 0x40L)) > p_56) | 0x058FE3216126D340LL) & 8UL) >= 251UL)) >= l_732) | 0xBFL), 0x224AB2FCL)) >= l_728), (*g_463))) > 0xA725F49680F4B95CLL), 4))), 4));
                }
            }
        }
        else
        {
            struct S1 *l_793 = &g_154;
            l_790 = (-10L);
            for (g_753 = 1; (g_753 <= 4); g_753 += 1)
            {
                struct S1 **l_792[6] = {&l_791,&l_791,&l_791,&l_791,&l_791,&l_791};
                int i, j;
                l_793 = l_791;
                g_133[g_753] = l_764[(g_753 + 2)][g_753];
            }
        }
        l_811 &= ((*g_446) , (((safe_mul_func_uint8_t_u_u((((((safe_div_func_int32_t_s_s(l_798[2][6][0], (l_752 || (safe_div_func_int32_t_s_s((&l_699 == (l_801[0] = &g_101)), (safe_mod_func_int32_t_s_s((l_790 &= l_752), (safe_add_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((p_56 && (safe_sub_func_uint64_t_u_u(p_56, p_56))), p_56)) , 0x40L), p_56))))))))) != 1UL) || l_790) >= l_699) && g_586[0].f1), l_699)) && g_452) && l_752));
    }
    for (g_430 = 0; (g_430 == 3); ++g_430)
    {
        int32_t *l_814 = &l_790;
        int32_t *l_815 = &l_790;
        int32_t *l_816 = &g_154.f2;
        int32_t *l_817[8];
        int32_t l_827 = 3L;
        int32_t l_828 = 0xBA295C02L;
        int i;
        for (i = 0; i < 8; i++)
            l_817[i] = &g_154.f2;
        ++l_829;
    }
    l_832 = (*g_132);
    return p_55;
}







static int8_t func_62(uint16_t p_63, struct S1 p_64, int16_t * p_65, uint8_t p_66, uint32_t p_67)
{
    uint16_t l_640[7] = {0x6F6BL,0x6F6BL,0x6F6BL,0x6F6BL,0x6F6BL,0x6F6BL,0x6F6BL};
    uint16_t l_641 = 0x1123L;
    int32_t l_643 = 0x952EE47EL;
    int32_t l_646 = 0xBB70AFDBL;
    int32_t l_647[9][7] = {{0x82765A04L,0x894FC4B5L,0xD278E7F5L,0x2749B3E4L,0x82D4DC3AL,0xC9FCD6B9L,0xC9FCD6B9L},{0xBFD8D1D5L,0x32B41EA4L,0x82765A04L,0x32B41EA4L,0xBFD8D1D5L,0x7D1C3543L,0xC9FCD6B9L},{1L,(-1L),(-1L),0x572B0AE1L,0xC9FCD6B9L,0xD278E7F5L,(-1L)},{(-1L),0x7D1C3543L,0x2749B3E4L,(-5L),0L,0xBFD8D1D5L,0x4D6FE1EAL},{1L,0x572B0AE1L,0xC14B810CL,0x4D6FE1EAL,0xC14B810CL,0x572B0AE1L,1L},{0xBFD8D1D5L,0x572B0AE1L,0x0C3E298AL,0xC9FCD6B9L,0x32B41EA4L,1L,0x82765A04L},{0x82765A04L,0x7D1C3543L,0x9D2DFAF3L,0x0C3E298AL,0x4D6FE1EAL,(-1L),(-1L)},{0x2749B3E4L,(-1L),0x0C3E298AL,0x9D26CB09L,0x572B0AE1L,0x9D26CB09L,0x0C3E298AL},{0x32B41EA4L,0x32B41EA4L,0xC14B810CL,0x9D26CB09L,0x894FC4B5L,(-1L),0L}};
    int32_t *l_653 = &g_154.f2;
    int16_t * const l_667 = &g_18;
    int i, j;
    for (g_430 = 12; (g_430 < (-15)); g_430 = safe_sub_func_int32_t_s_s(g_430, 7))
    {
        int32_t l_627 = 0x670D08E9L;
        struct S0 l_634 = {8970,0,1656,8};
        int32_t **l_642 = &g_133[4];
        uint32_t l_680 = 0x3F0DA5D7L;
        if ((safe_div_func_uint8_t_u_u(0x5AL, (safe_sub_func_int8_t_s_s((((safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((0x1C89E5F5L ^ (5UL | (safe_sub_func_uint64_t_u_u(l_627, g_154.f1.f2)))), g_125)) >= (safe_lshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((g_598[8][3].f0 && (l_634 , (+((((safe_sub_func_int32_t_s_s((((((((safe_sub_func_int8_t_s_s(g_154.f2, 0x20L)) <= p_64.f1.f2) > p_67) >= l_640[4]) < 4294967295UL) & l_641) ^ l_627), (*g_427))) , (***g_444)) , (void*)0) != l_642)))), l_640[4])), l_641)) , l_634.f2), (*p_65)))), l_640[4])) == l_641) > p_66), 0x67L)))))
        {
            int32_t *l_644 = &g_85;
            int32_t *l_645[10][10][2] = {{{&g_85,(void*)0},{&l_643,&l_643},{&l_643,&g_38},{&g_154.f2,&g_85},{&l_643,(void*)0},{(void*)0,&g_85},{&g_154.f2,&g_154.f2},{&l_643,&g_154.f2},{&g_154.f2,&g_85},{(void*)0,(void*)0}},{{&l_643,&g_85},{&g_154.f2,&g_38},{&l_643,&l_643},{&l_643,(void*)0},{&g_85,&g_154.f2},{&g_85,&g_85},{&g_85,&g_154.f2},{&g_85,&l_643},{&g_85,(void*)0},{(void*)0,&g_85}},{{&g_85,&g_85},{&l_643,&g_154.f2},{&g_154.f2,&g_154.f2},{&g_85,(void*)0},{&g_154.f2,&g_38},{&l_643,&g_154.f2},{&l_643,&l_643},{&g_85,&g_85},{(void*)0,(void*)0},{&g_154.f2,&g_38}},{{&g_38,&g_154.f2},{&g_154.f2,&g_85},{&g_154.f2,&g_154.f2},{&g_85,&g_85},{&g_85,&g_154.f2},{&g_154.f2,&g_85},{&g_154.f2,&g_154.f2},{&g_38,&g_38},{&g_154.f2,(void*)0},{(void*)0,&g_85}},{{&g_85,&l_643},{&l_643,&g_154.f2},{&l_643,&g_38},{&g_154.f2,(void*)0},{&g_85,&g_154.f2},{&g_154.f2,&g_154.f2},{&l_643,&g_85},{&g_85,&g_85},{(void*)0,(void*)0},{&g_85,&l_643}},{{&g_85,&g_154.f2},{&g_85,&l_643},{&g_38,&g_85},{(void*)0,&l_643},{&g_38,&l_643},{&l_643,&g_85},{&g_154.f2,&g_154.f2},{&l_643,&g_154.f2},{&g_38,&g_85},{(void*)0,&l_643}},{{&g_154.f2,&l_643},{(void*)0,&g_85},{&g_38,&g_154.f2},{&l_643,&g_154.f2},{&g_154.f2,&g_85},{&l_643,&l_643},{&g_38,&l_643},{(void*)0,&g_85},{&g_38,&l_643},{&g_85,&g_154.f2}},{{&g_85,&g_38},{&g_85,(void*)0},{&g_154.f2,&g_85},{&g_38,&g_38},{&l_643,&g_154.f2},{&g_85,(void*)0},{&g_154.f2,&g_85},{&g_85,&l_643},{(void*)0,(void*)0},{&l_643,(void*)0}},{{&g_85,&g_85},{(void*)0,(void*)0},{(void*)0,&g_154.f2},{&g_85,(void*)0},{&l_643,(void*)0},{(void*)0,&l_643},{&g_154.f2,&g_38},{&g_154.f2,&l_643},{(void*)0,(void*)0},{&l_643,(void*)0}},{{&g_85,&g_154.f2},{(void*)0,(void*)0},{(void*)0,&g_85},{&g_85,(void*)0},{&l_643,(void*)0},{(void*)0,&l_643},{&g_85,&g_85},{&g_154.f2,(void*)0},{&g_85,&g_154.f2},{&l_643,&g_38}}};
            uint64_t l_648 = 0x64D24D545EEC07B1LL;
            int i, j, k;
            ++l_648;
        }
        else
        {
            const uint32_t l_668 = 0UL;
            int32_t l_671 = 0xC029ABEBL;
            uint64_t *l_677 = &g_101;
            int32_t l_682 = 6L;
            int32_t l_684 = 0x848FCE1AL;
            for (p_63 = 8; (p_63 > 31); ++p_63)
            {
                int32_t *l_654 = &l_647[8][0];
                int16_t *l_666 = &g_18;
                int32_t l_670 = 0x7B83644AL;
                if (((((*g_132) = (l_634 , (*g_132))) != (l_653 = &g_38)) & ((*l_654) = l_646)))
                {
                    uint64_t *l_663[5][2][5] = {{{&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101}},{{&g_101,&g_101,(void*)0,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101}},{{&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101}},{{&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101}},{{&g_101,&g_101,(void*)0,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101}}};
                    int i, j, k;
                    (*l_654) = (safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_int32_t_s((((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(p_64.f1.f0, 1)), 7)) || (-5L)) == (((!(p_64.f1.f2 < (&g_154 != (((((*l_653) = 0x6D562344016E2ADFLL) >= 1L) > (*g_427)) , &g_154)))) , (((safe_add_func_uint16_t_u_u(((*g_463) = (l_666 != l_667)), (*p_65))) >= (-1L)) & (*l_654))) | l_668)) , (-7L)) , l_668))) > 0L), 10));
                }
                else
                {
                    uint32_t l_672 = 4294967287UL;
                    int32_t l_683[6][7][1] = {{{0xE7C2266FL},{9L},{(-4L)},{0x39112BDCL},{(-10L)},{1L},{1L}},{{1L},{(-10L)},{0x39112BDCL},{(-4L)},{9L},{0xE7C2266FL},{0x97B61E48L}},{{0xE7C2266FL},{9L},{(-4L)},{0x39112BDCL},{(-10L)},{1L},{1L}},{{1L},{(-10L)},{0x39112BDCL},{(-4L)},{9L},{0xE7C2266FL},{0x97B61E48L}},{{0xE7C2266FL},{9L},{(-4L)},{0x39112BDCL},{(-10L)},{1L},{1L}},{{1L},{(-10L)},{0x39112BDCL},{(-4L)},{9L},{0xE7C2266FL},{0x97B61E48L}}};
                    int i, j, k;
                    for (g_85 = 6; (g_85 >= 0); g_85 -= 1)
                    {
                        int32_t *l_669[7] = {(void*)0,(void*)0,(void*)0,&l_643,(void*)0,(void*)0,&l_643};
                        int i;
                        --l_672;
                    }
                    for (p_66 = 25; (p_66 != 35); p_66++)
                    {
                        (*l_654) ^= (((((*l_653) = l_634.f1) , 5UL) , l_677) != l_677);
                    }
                    for (g_38 = (-12); (g_38 > (-16)); --g_38)
                    {
                        int32_t *l_681[1];
                        uint8_t l_685[6][6] = {{255UL,0xAFL,0xAFL,255UL,0x70L,0x02L},{0x02L,255UL,1UL,255UL,0x02L,0x7DL},{255UL,0x02L,0x7DL,0x7DL,0x02L,255UL},{0xAFL,255UL,0x70L,0x02L,0x70L,255UL},{0x70L,0xAFL,0x7DL,1UL,1UL,0x7DL},{0x70L,0x70L,1UL,0x02L,0x0FL,0x02L}};
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_681[i] = &l_647[5][2];
                        p_64.f2 = l_680;
                        l_685[1][1]++;
                        if (p_64.f1.f0)
                            continue;
                    }
                }
            }
            for (g_3 = 0; (g_3 <= 0); g_3 += 1)
            {
                return (*l_653);
            }
        }
    }
    return p_66;
}







static uint8_t func_75(int32_t ** p_76, int32_t ** p_77, struct S0 p_78)
{
    struct S0 **l_330 = &g_225;
    int32_t l_345 = 1L;
    uint32_t *l_346 = &g_347;
    int32_t **l_361[10] = {&g_133[4],&g_133[4],&g_133[4],&g_133[4],&g_133[4],&g_133[4],&g_133[4],&g_133[4],&g_133[4],&g_133[4]};
    uint16_t *l_368 = &g_174;
    uint8_t * const l_436 = &g_319;
    uint64_t l_468 = 0xFB2A024681C11425LL;
    uint8_t * const l_504 = &g_315;
    const int16_t ***l_538 = &g_172;
    struct S0 *l_585 = &g_586[0];
    int i;
    if (((((void*)0 != l_330) != (safe_sub_func_int8_t_s_s(0x1DL, ((safe_mod_func_int32_t_s_s(((&g_225 == ((safe_div_func_uint32_t_u_u(((*l_346) ^= (safe_add_func_uint64_t_u_u(18446744073709551615UL, (18446744073709551612UL == (safe_add_func_int64_t_s_s(((((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(p_78.f1, 5)), l_345)) , g_85) == 0x26BBF8BFL) >= l_345), 0xF1D7F9B802A2F379LL)))))), p_78.f0)) , &g_225)) == p_78.f2), l_345)) || g_18)))) <= g_18))
    {
        int32_t l_348[7][6][4] = {{{0xEAB7B603L,0xEFC6FAC0L,0xEFC6FAC0L,0xEAB7B603L},{0xE6EB0B7FL,(-7L),0xADD9A662L,0x5B2D6D7EL},{0xFE0421E2L,0L,1L,0x5894CC47L},{(-9L),(-2L),0x5DB10620L,0x5894CC47L},{0x5F176E20L,0L,1L,0x5B2D6D7EL},{0x9ED45C23L,(-7L),0xF09360FBL,0xEAB7B603L}},{{0x98EF1BACL,0xEFC6FAC0L,0xF0E5C5ABL,0xF2155C72L},{0xA88972A5L,0xC3C1A84BL,0x46745A51L,0x8FF6EEE8L},{0x5DB10620L,0x5B2D6D7EL,0xEAB7B603L,0L},{0xF0E5C5ABL,2L,0L,1L},{0x3D71F271L,0x36AA9CF4L,(-5L),(-2L)},{0x1B261428L,0x3D71F271L,0x400329A4L,0xC3C1A84BL}},{{0xC3C1A84BL,1L,0x05693F35L,(-1L)},{1L,0x24430BABL,(-7L),(-5L)},{(-2L),0x67F6B025L,0x36AA9CF4L,0x934A37A2L},{0x8A783AEDL,1L,(-3L),0x24430BABL},{0x5894CC47L,(-8L),0x5F176E20L,0L},{8L,0x8A783AEDL,0L,(-1L)}},{{0xEE0CA48AL,(-7L),0x934A37A2L,0x98EF1BACL},{0xA41FB5AAL,0x5F176E20L,(-10L),(-9L)},{0x1872BC79L,5L,0x1872BC79L,0xC108B415L},{7L,0x05693F35L,(-9L),0x36AA9CF4L},{(-5L),0L,1L,0x05693F35L},{0L,0L,1L,1L}},{{(-5L),0xF09360FBL,(-9L),(-8L)},{7L,8L,0x1872BC79L,(-2L)},{0x1872BC79L,(-2L),(-10L),0x28DF3650L},{0xA41FB5AAL,0x5894CC47L,0x934A37A2L,0L},{0xEE0CA48AL,0xA88972A5L,0L,0x5DB10620L},{8L,0xADD9A662L,0x5F176E20L,0xBCD6CC34L}},{{0x5894CC47L,(-1L),(-3L),(-10L)},{0x8A783AEDL,0x988E6EC5L,0x36AA9CF4L,0L},{(-2L),0x3C048AFAL,(-7L),2L},{1L,0xF6A90D4DL,0x05693F35L,0L},{0xC3C1A84BL,0xC108B415L,0x400329A4L,(-5L)},{0x98EF1BACL,0xE6EB0B7FL,0x5DB10620L,0x1B261428L}},{{0x3C048AFAL,0x36AA9CF4L,(-7L),0x98EF1BACL},{0xEE0CA48AL,0xEA8B326DL,0xC3C1A84BL,0x70156E42L},{3L,0x6D8CFDACL,0xF09360FBL,0x45715C26L},{0x46745A51L,0x5F176E20L,0xEE0CA48AL,0xEE0CA48AL},{0xC108B415L,0xC108B415L,(-3L),0x988E6EC5L},{1L,0xEFC6FAC0L,0xA41FB5AAL,0L}}};
        uint16_t *l_370 = &g_125;
        int32_t l_372 = 0x792CEEDBL;
        int i, j, k;
        l_348[2][0][3] &= p_78.f3;
        for (g_174 = (-21); (g_174 <= 25); g_174 = safe_add_func_int64_t_s_s(g_174, 8))
        {
            uint16_t *l_367 = &g_3;
            uint16_t **l_366 = &l_367;
            uint16_t **l_369[9][1] = {{&l_368},{&l_368},{&l_368},{&l_368},{&l_368},{&l_368},{&l_368},{&l_368},{&l_368}};
            int32_t l_371 = 0x40780A0FL;
            int i, j;
            l_372 = (safe_div_func_int16_t_s_s(0L, ((((safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((p_76 != l_361[1]), (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((p_78.f1 || ((((*l_366) = &g_3) == (l_370 = l_368)) || ((void*)0 == &l_368))), 7)) != ((p_78.f1 && g_93[4]) , p_78.f3)), l_371)))), l_348[2][0][3])) , g_154.f1.f1), 7UL)), l_348[4][4][3])) , g_92) <= g_125) && p_78.f1)));
            if (l_371)
                break;
            return l_348[2][0][3];
        }
    }
    else
    {
        uint8_t l_381 = 0UL;
        int32_t l_392 = 0x663FB575L;
        uint64_t l_411 = 0xDD11BBCE7E7F6808LL;
        uint32_t *l_428 = &g_347;
        int32_t l_449 = 0xD6C11575L;
        int32_t l_450[5][6] = {{(-9L),0x5D67E793L,0x3C972DA9L,0x5D67E793L,(-9L),0x6B870DFCL},{0x5D67E793L,(-9L),0x6B870DFCL,0x6B870DFCL,(-9L),0x5D67E793L},{0x1CF8D9BAL,0x5D67E793L,(-1L),(-9L),(-1L),0x5D67E793L},{(-1L),0x1CF8D9BAL,0x6B870DFCL,0x3C972DA9L,0x3C972DA9L,0x6B870DFCL},{(-1L),(-1L),0x3C972DA9L,(-9L),0L,(-9L)}};
        int16_t l_522 = 0x2C27L;
        struct S0 l_555 = {5227,3,284,8};
        int32_t l_556 = 0x20E62C31L;
        int16_t *l_568 = (void*)0;
        int16_t **l_567 = &l_568;
        int16_t ***l_566[6];
        int i, j;
        for (i = 0; i < 6; i++)
            l_566[i] = &l_567;
        if ((p_78.f0 < ((*g_225) , ((safe_add_func_uint64_t_u_u((l_330 != &g_225), (p_78.f2 <= ((safe_mod_func_int64_t_s_s((safe_add_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(l_381, (safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((((safe_mul_func_uint16_t_u_u(0x99EAL, ((*g_225) , (((l_392 |= (-1L)) != l_381) & g_154.f1.f0)))) , 4294967293UL) > 4L) , g_154.f2), l_381)), 0UL)) != g_18) , p_78.f2), 1L)), 0xF85E873ECC432D9BLL)))) && p_78.f1), p_78.f0)), g_174)) >= 1L)))) & 0UL))))
        {
            uint32_t *l_426 = &g_347;
            const int32_t l_431 = 0xFA67C542L;
            uint16_t *l_462 = (void*)0;
            int32_t l_487 = 0L;
            uint8_t * const l_505 = &g_315;
            int64_t ** const l_517 = &g_446;
            uint32_t l_519 = 1UL;
            int32_t l_548 = 0x5E95191EL;
            uint8_t l_550 = 0x3EL;
            uint32_t l_557 = 1UL;
            for (g_125 = 0; (g_125 <= 9); g_125 += 1)
            {
                struct S1 l_405 = {17,{10738,0,665,30},0xB19911D7L};
                uint16_t l_406 = 4UL;
                int64_t *l_408[4][7][9] = {{{&g_409,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_409,&g_2},{&g_2,(void*)0,&g_2,&g_2,&g_2,&g_2,(void*)0,(void*)0,&g_409},{&g_2,&g_2,&g_2,&g_2,&g_2,(void*)0,&g_2,&g_2,&g_2},{&g_2,&g_409,(void*)0,&g_2,&g_2,&g_2,&g_2,&g_2,(void*)0},{&g_2,&g_409,&g_2,&g_409,&g_2,&g_409,&g_409,&g_2,&g_409},{&g_2,&g_409,&g_409,(void*)0,(void*)0,&g_2,&g_2,&g_2,&g_2},{&g_409,&g_2,&g_2,&g_2,&g_2,&g_409,&g_2,&g_2,&g_409}},{{&g_409,(void*)0,(void*)0,(void*)0,&g_409,&g_409,&g_2,&g_2,&g_2},{&g_2,&g_2,&g_2,&g_409,&g_2,&g_2,&g_2,&g_409,&g_409},{(void*)0,&g_409,&g_2,&g_2,(void*)0,&g_409,(void*)0,(void*)0,&g_2},{&g_409,&g_2,&g_2,&g_2,&g_2,&g_409,&g_2,&g_2,&g_2},{&g_409,(void*)0,&g_2,&g_2,&g_2,&g_2,&g_2,(void*)0,&g_2},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_409,&g_2,&g_409,&g_2},{(void*)0,&g_409,&g_2,&g_2,&g_2,&g_2,&g_409,&g_409,&g_2}},{{&g_409,&g_409,&g_2,&g_2,(void*)0,&g_2,&g_409,&g_2,&g_2},{(void*)0,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_409},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,(void*)0,&g_409},{(void*)0,&g_2,&g_2,&g_2,(void*)0,(void*)0,&g_409,&g_409,&g_2},{(void*)0,&g_2,&g_2,&g_2,&g_2,&g_409,&g_409,&g_2,&g_2},{&g_409,&g_409,&g_409,&g_409,&g_2,(void*)0,&g_409,&g_2,&g_2},{&g_2,&g_409,&g_2,(void*)0,(void*)0,&g_2,&g_409,&g_2,&g_409}},{{&g_409,&g_2,&g_2,&g_2,&g_409,&g_2,&g_409,&g_2,&g_409},{&g_409,(void*)0,&g_2,&g_2,&g_409,&g_2,&g_2,&g_2,&g_409},{&g_2,&g_2,&g_2,&g_409,&g_2,&g_2,&g_2,&g_409,&g_2},{&g_409,&g_409,&g_2,&g_2,(void*)0,&g_2,&g_409,(void*)0,&g_2},{&g_409,&g_2,&g_409,&g_2,&g_409,&g_2,&g_409,&g_2,&g_2},{&g_2,(void*)0,&g_2,(void*)0,&g_2,&g_409,&g_2,&g_2,&g_409},{&g_409,&g_2,&g_2,&g_2,&g_409,(void*)0,&g_2,&g_409,&g_409}}};
                uint64_t *l_410 = (void*)0;
                uint32_t l_412 = 0x9AE37447L;
                int64_t *** const l_447 = &g_445;
                int32_t l_451 = 0x93915F31L;
                struct S0 **l_477 = &g_225;
                const int16_t ***l_535 = &g_172;
                int i, j, k;
            }
            l_557--;
        }
        else
        {
            int16_t * const ***l_571 = &g_569;
            int32_t *l_574[4] = {&l_556,&l_556,&l_556,&l_556};
            int8_t *l_581[4] = {&g_93[4],&g_93[4],&g_93[4],&g_93[4]};
            uint64_t l_582 = 9UL;
            int32_t l_583 = 0xAE91A89FL;
            int i;
            l_450[1][2] = (g_85 = ((((safe_mul_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(g_409, (((*g_463) = (*g_463)) , (g_93[4] = ((safe_add_func_uint32_t_u_u((l_566[4] == ((*l_571) = g_569)), p_78.f1)) > (safe_add_func_int16_t_s_s(((((*g_132) = (*p_76)) == l_574[1]) & ((p_78.f1 > (safe_mul_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(1UL, 0xA9L)), p_78.f3)) ^ 1UL) == l_555.f0), 0xE52AL))) != (*g_427))), (*g_463)))))))) || l_392) , 0x07L), g_3)) || l_556) >= l_582) , l_583));
        }
    }
    for (g_101 = 0; (g_101 <= 9); g_101 += 1)
    {
        int i;
        return g_93[g_101];
    }
    (*l_585) = (g_584 = ((*g_225) = p_78));
    for (g_154.f2 = 0; (g_154.f2 != (-27)); g_154.f2 = safe_sub_func_int16_t_s_s(g_154.f2, 3))
    {
        int16_t l_589 = 1L;
        const struct S0 *l_595 = &g_596;
        const struct S0 **l_594[5];
        int8_t *l_601 = &g_93[4];
        int32_t l_611 = 0x892A1AFEL;
        int i;
        for (i = 0; i < 5; i++)
            l_594[i] = &l_595;
        if (l_589)
            break;
        if (l_589)
            continue;
        p_78.f1 = (-1L);
        l_611 ^= (safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(0x4E6AL, (((g_597 = &p_78) == &p_78) , ((safe_mod_func_int8_t_s_s(((*l_601) ^= p_78.f0), (safe_lshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((**g_445) > (+0L)), p_78.f1)), p_78.f3)), ((l_589 & l_589) , p_78.f3))) || 0xDC27L), 2)))) && l_589)))), p_78.f1));
    }
    return g_93[4];
}







static int32_t ** func_79(int32_t p_80, int32_t ** p_81)
{
    int32_t l_89 = 4L;
    int32_t l_91 = 0x1CA98231L;
    int32_t l_94 = (-1L);
    int32_t l_95 = 0xF7D461CFL;
    int32_t l_96 = 0L;
    int32_t l_97 = 0x93BB3FD4L;
    int32_t l_98 = (-7L);
    int32_t l_99 = 0xD5BC3FA0L;
    int32_t l_100 = 0x43419109L;
    int16_t *l_117 = &g_18;
    uint16_t *l_124 = &g_125;
    struct S1 l_147 = {23,{3488,3,245,2},0L};
    uint64_t l_250[10][4][1] = {{{1UL},{0xF62F70D8E6E7CD2DLL},{0xAAAA20C1789064FALL},{0xAAAA20C1789064FALL}},{{0xF62F70D8E6E7CD2DLL},{1UL},{18446744073709551615UL},{0xA4F332C697FA2FD7LL}},{{0xC57563AC0A0C228BLL},{0xA4F332C697FA2FD7LL},{18446744073709551615UL},{1UL}},{{0xF62F70D8E6E7CD2DLL},{0xAAAA20C1789064FALL},{0xAAAA20C1789064FALL},{0xF62F70D8E6E7CD2DLL}},{{1UL},{18446744073709551615UL},{0xA4F332C697FA2FD7LL},{0xC57563AC0A0C228BLL}},{{0xA4F332C697FA2FD7LL},{18446744073709551615UL},{1UL},{0xF62F70D8E6E7CD2DLL}},{{0xAAAA20C1789064FALL},{0xAAAA20C1789064FALL},{0xF62F70D8E6E7CD2DLL},{1UL}},{{18446744073709551615UL},{0xA4F332C697FA2FD7LL},{0xC57563AC0A0C228BLL},{0xA4F332C697FA2FD7LL}},{{18446744073709551615UL},{1UL},{0xF62F70D8E6E7CD2DLL},{0xAAAA20C1789064FALL}},{{0xAAAA20C1789064FALL},{0xF62F70D8E6E7CD2DLL},{1UL},{18446744073709551615UL}}};
    int64_t l_311 = 0x014F1156D1DA9DB1LL;
    struct S1 *l_328 = &l_147;
    int i, j, k;
    for (g_38 = (-2); (g_38 == (-10)); g_38--)
    {
        int32_t *l_84 = &g_85;
        int32_t *l_86 = &g_85;
        int32_t *l_87 = &g_85;
        int32_t *l_88 = &g_85;
        int32_t *l_90[8];
        int i;
        for (i = 0; i < 8; i++)
            l_90[i] = &g_85;
        g_101--;
    }
    if ((safe_sub_func_int16_t_s_s((!((*l_124) &= ((((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(p_80, (safe_mul_func_int16_t_s_s(((void*)0 == l_117), (safe_rshift_func_int8_t_s_u(0x5FL, 1)))))), (g_18 && (((0x1A7339E942A635BDLL == g_85) >= g_93[4]) < (safe_mod_func_int64_t_s_s(((safe_div_func_int16_t_s_s(l_89, p_80)) , g_3), g_93[4])))))), 65535UL)), g_18)) == l_94) ^ (-8L)) || l_89))), l_97)))
    {
        int32_t *l_131 = &l_98;
        int32_t **l_130 = &l_131;
        int32_t l_187 = 0x676B47F3L;
        int32_t l_191 = 0L;
        int32_t l_205 = (-8L);
        int32_t l_207 = 1L;
        int32_t l_208 = 1L;
        struct S0 *l_224 = (void*)0;
        uint16_t l_241 = 0xA6F7L;
        struct S1 l_272 = {38,{2440,-1,1201,22},0x2457B24AL};
        int16_t **l_274 = &l_117;
        int16_t ***l_273 = &l_274;
        int64_t l_288 = 0x420E3F7F697AC61ELL;
        for (g_38 = 2; (g_38 <= 9); g_38 += 1)
        {
            int16_t **l_126 = &l_117;
            int32_t *l_128 = &g_85;
            int32_t **l_127 = &l_128;
            int32_t l_152 = (-1L);
            int32_t l_183 = 0x0FD98BFEL;
            int32_t l_184[5];
            uint32_t l_197 = 0xA0D92CAEL;
            int16_t l_206 = 0x520FL;
            struct S0 l_216 = {5652,-0,908,24};
            uint64_t l_242 = 18446744073709551615UL;
            int32_t *l_275 = &l_187;
            uint32_t l_284 = 4294967286UL;
            int i;
            for (i = 0; i < 5; i++)
                l_184[i] = 0xDB1A9972L;
            (*p_81) = &g_85;
            (**p_81) ^= ((void*)0 != l_117);
        }
    }
    else
    {
        (*g_132) = (*p_81);
        for (l_97 = 0; (l_97 > 9); l_97 = safe_add_func_int16_t_s_s(l_97, 3))
        {
            (*g_132) = (void*)0;
        }
    }
    (*l_328) = g_154;
    return &g_133[4];
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
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_93[i], "g_93[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_154.f0, "g_154.f0", print_hash_value);
    transparent_crc(g_154.f1.f0, "g_154.f1.f0", print_hash_value);
    transparent_crc(g_154.f1.f1, "g_154.f1.f1", print_hash_value);
    transparent_crc(g_154.f1.f2, "g_154.f1.f2", print_hash_value);
    transparent_crc(g_154.f1.f3, "g_154.f1.f3", print_hash_value);
    transparent_crc(g_154.f2, "g_154.f2", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_409, "g_409", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_584.f0, "g_584.f0", print_hash_value);
    transparent_crc(g_584.f1, "g_584.f1", print_hash_value);
    transparent_crc(g_584.f2, "g_584.f2", print_hash_value);
    transparent_crc(g_584.f3, "g_584.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_586[i].f0, "g_586[i].f0", print_hash_value);
        transparent_crc(g_586[i].f1, "g_586[i].f1", print_hash_value);
        transparent_crc(g_586[i].f2, "g_586[i].f2", print_hash_value);
        transparent_crc(g_586[i].f3, "g_586[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_596.f0, "g_596.f0", print_hash_value);
    transparent_crc(g_596.f1, "g_596.f1", print_hash_value);
    transparent_crc(g_596.f2, "g_596.f2", print_hash_value);
    transparent_crc(g_596.f3, "g_596.f3", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_598[i][j].f0, "g_598[i][j].f0", print_hash_value);
            transparent_crc(g_598[i][j].f1, "g_598[i][j].f1", print_hash_value);
            transparent_crc(g_598[i][j].f2, "g_598[i][j].f2", print_hash_value);
            transparent_crc(g_598[i][j].f3, "g_598[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_706[i][j][k], "g_706[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_730, "g_730", print_hash_value);
    transparent_crc(g_753, "g_753", print_hash_value);
    transparent_crc(g_918.f0, "g_918.f0", print_hash_value);
    transparent_crc(g_918.f1, "g_918.f1", print_hash_value);
    transparent_crc(g_918.f2, "g_918.f2", print_hash_value);
    transparent_crc(g_918.f3, "g_918.f3", print_hash_value);
    transparent_crc(g_1081, "g_1081", print_hash_value);
    transparent_crc(g_1159, "g_1159", print_hash_value);
    transparent_crc(g_1267, "g_1267", print_hash_value);
    transparent_crc(g_1439, "g_1439", print_hash_value);
    transparent_crc(g_1484, "g_1484", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_1790[i][j], "g_1790[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1853[i], "g_1853[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1915, "g_1915", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2249[i], "g_2249[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2254, "g_2254", print_hash_value);
    transparent_crc(g_2327, "g_2327", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_2443[i], "g_2443[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2555, "g_2555", print_hash_value);
    transparent_crc(g_2764.f0, "g_2764.f0", print_hash_value);
    transparent_crc(g_2764.f1, "g_2764.f1", print_hash_value);
    transparent_crc(g_2764.f2, "g_2764.f2", print_hash_value);
    transparent_crc(g_2764.f3, "g_2764.f3", print_hash_value);
    transparent_crc(g_2799, "g_2799", print_hash_value);
    transparent_crc(g_2863, "g_2863", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_2904[i][j], "g_2904[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_3391[i][j][k], "g_3391[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_3416, "g_3416", print_hash_value);
    transparent_crc(g_3552, "g_3552", print_hash_value);
    transparent_crc(g_3560, "g_3560", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
