// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = A24DFD3C
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



static int32_t g_8 = 1L;
static int64_t g_20 = 0x75A592C6EED1E12ALL;
static int64_t g_47 = 0L;
static int32_t g_87 = 0x2E206C16L;
static uint64_t g_104 = 18446744073709551612UL;
static int32_t *g_110[7] = {&g_87,&g_87,&g_87,&g_87,&g_87,&g_87,&g_87};
static int32_t **g_109 = &g_110[1];
static int8_t g_137[1] = {0x5DL};
static uint8_t g_140 = 0xE6L;
static uint64_t g_143 = 0x6EC4AE7C4FE17DD5LL;
static uint8_t *g_153 = (void*)0;
static const int64_t *g_168 = &g_47;
static const int64_t **g_167 = &g_168;
static int32_t * const g_200 = (void*)0;
static uint32_t g_207 = 4294967295UL;
static int64_t *g_226 = &g_47;
static int64_t **g_225 = &g_226;
static uint16_t g_244 = 0xFAA4L;
static int32_t g_253 = (-6L);
static int8_t g_276 = 5L;
static int32_t g_289 = 1L;
static int16_t g_302 = 0x802FL;
static uint16_t g_344[8][6] = {{0x5C89L,0UL,0UL,0x5C89L,3UL,0x608EL},{4UL,0UL,3UL,4UL,3UL,0UL},{0xC74AL,0UL,0x608EL,0xC74AL,3UL,3UL},{0x5C89L,0UL,0UL,0x5C89L,3UL,0x608EL},{4UL,0UL,3UL,4UL,3UL,0UL},{0xC74AL,0UL,0x608EL,0xC74AL,3UL,3UL},{0x5C89L,0UL,0x7509L,0UL,65534UL,0UL},{0x608EL,0x7509L,65534UL,0x608EL,65534UL,0x7509L}};
static int32_t g_383 = 0x81389A03L;
static uint8_t g_429 = 0x70L;
static int16_t *g_491 = &g_302;
static int16_t **g_490 = &g_491;
static uint64_t g_549 = 0x1D8D4A9802F6E727LL;
static int16_t g_557 = 2L;
static const uint16_t g_608 = 3UL;
static const uint16_t g_610 = 0x0C9EL;
static int32_t *g_656 = (void*)0;
static int32_t **g_655 = &g_656;
static const int32_t g_730[1][2] = {{0x3777CED2L,0x3777CED2L}};
static const uint8_t *g_734 = &g_140;
static int16_t g_753 = 1L;
static uint64_t **g_831[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static int64_t g_833 = 0xBA2CC6B9AF378B94LL;
static uint16_t g_924 = 0xD14EL;
static int32_t g_926 = 0x539209DCL;
static const int32_t *g_928[5][1][1] = {{{&g_926}},{{(void*)0}},{{&g_926}},{{(void*)0}},{{&g_926}}};
static int8_t g_980[9] = {0xEEL,0xEEL,(-1L),0xEEL,0xEEL,(-1L),0xEEL,0xEEL,(-1L)};
static const uint32_t g_1025 = 0xA6148A8CL;
static uint16_t *g_1114[9][6][4] = {{{&g_924,&g_344[4][0],(void*)0,(void*)0},{&g_344[4][0],&g_244,&g_244,&g_344[4][0]},{&g_344[7][3],&g_244,&g_244,&g_344[5][1]},{&g_344[4][0],(void*)0,(void*)0,&g_924},{&g_924,&g_244,&g_344[4][0],&g_924},{&g_344[7][3],(void*)0,&g_344[2][4],&g_344[5][1]}},{{(void*)0,&g_244,(void*)0,&g_344[4][0]},{(void*)0,&g_244,&g_344[2][4],(void*)0},{&g_344[7][3],&g_344[4][0],&g_344[4][0],&g_344[5][1]},{&g_924,&g_344[4][0],(void*)0,(void*)0},{&g_344[4][0],&g_244,&g_244,&g_344[4][0]},{&g_344[7][3],&g_244,&g_244,&g_344[5][1]}},{{&g_344[4][0],(void*)0,(void*)0,&g_924},{&g_924,&g_244,&g_344[4][0],&g_924},{&g_344[7][3],(void*)0,&g_344[2][4],&g_344[5][1]},{(void*)0,&g_244,(void*)0,&g_344[4][0]},{(void*)0,&g_244,&g_344[2][4],(void*)0},{&g_344[7][3],&g_344[4][0],&g_344[4][0],&g_344[5][1]}},{{&g_924,&g_344[4][0],(void*)0,(void*)0},{&g_344[4][0],&g_244,&g_244,&g_344[4][0]},{&g_344[7][3],&g_244,&g_244,&g_344[5][1]},{&g_344[4][0],(void*)0,(void*)0,&g_924},{&g_924,&g_244,&g_344[4][0],&g_924},{&g_344[7][3],(void*)0,&g_344[2][4],&g_344[5][1]}},{{(void*)0,&g_244,(void*)0,&g_344[4][0]},{(void*)0,&g_244,&g_344[2][4],(void*)0},{&g_344[7][3],&g_344[4][0],&g_344[4][0],&g_344[5][1]},{&g_924,&g_344[4][0],(void*)0,(void*)0},{&g_344[4][0],&g_244,&g_244,&g_344[4][0]},{&g_344[7][3],&g_244,&g_244,&g_344[5][1]}},{{&g_344[4][0],(void*)0,(void*)0,&g_924},{&g_924,&g_244,&g_344[4][0],&g_924},{&g_344[7][3],(void*)0,&g_344[2][4],&g_344[5][1]},{(void*)0,&g_244,(void*)0,&g_344[4][0]},{(void*)0,&g_244,&g_344[2][4],(void*)0},{&g_344[7][3],&g_344[4][0],&g_344[4][0],&g_344[5][1]}},{{&g_924,&g_344[4][0],(void*)0,(void*)0},{&g_344[4][0],&g_244,&g_244,&g_344[4][0]},{&g_344[7][3],&g_244,&g_244,&g_344[5][1]},{&g_344[4][0],(void*)0,(void*)0,&g_924},{&g_924,(void*)0,&g_344[4][0],&g_344[5][1]},{&g_344[6][2],&g_344[2][4],&g_344[4][0],&g_924}},{{&g_344[7][3],&g_344[4][0],&g_244,&g_344[0][5]},{&g_344[7][3],(void*)0,&g_344[4][0],&g_344[7][3]},{&g_344[6][2],&g_244,&g_344[4][0],&g_924},{&g_344[5][1],&g_244,&g_244,&g_344[7][3]},{&g_344[0][5],(void*)0,(void*)0,&g_344[0][5]},{&g_344[6][2],&g_344[4][0],(void*)0,&g_924}},{{&g_344[0][5],&g_344[2][4],&g_244,&g_344[5][1]},{&g_344[5][1],(void*)0,&g_344[4][0],&g_344[5][1]},{&g_344[6][2],&g_344[2][4],&g_344[4][0],&g_924},{&g_344[7][3],&g_344[4][0],&g_244,&g_344[0][5]},{&g_344[7][3],(void*)0,&g_344[4][0],&g_344[7][3]},{&g_344[6][2],&g_244,&g_344[4][0],&g_924}}};
static uint16_t **g_1113[4] = {&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[2][0][1]};
static uint16_t g_1139 = 65535UL;
static int64_t g_1147 = (-4L);
static int16_t ***g_1186 = &g_490;
static const int16_t ** const ***g_1229 = (void*)0;
static int16_t **** const g_1231 = &g_1186;
static int16_t **** const *g_1230 = &g_1231;
static int8_t g_1292 = 0x3DL;
static uint16_t g_1307 = 0x114FL;
static int16_t *** const g_1322 = (void*)0;
static int16_t *** const *g_1321 = &g_1322;
static int16_t *** const **g_1320 = &g_1321;
static uint8_t **g_1332[6] = {&g_153,(void*)0,(void*)0,&g_153,(void*)0,(void*)0};
static uint8_t ***g_1331 = &g_1332[3];
static uint32_t g_1335 = 1UL;
static int32_t ***g_1380 = &g_655;
static int32_t ***g_1381 = &g_655;
static const uint32_t g_1445 = 4294967291UL;
static uint8_t g_1467 = 1UL;
static uint64_t g_1501 = 5UL;
static uint16_t * const *g_1511[6][1][10] = {{{&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[2][2][0],&g_1114[2][0][1],&g_1114[0][4][2],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[7][3][0]}},{{&g_1114[2][0][1],&g_1114[0][4][2],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[7][3][0],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[0][4][2],&g_1114[2][0][1],&g_1114[2][2][0]}},{{&g_1114[2][0][1],&g_1114[0][4][2],&g_1114[1][4][3],&g_1114[2][0][1],&g_1114[7][3][0],&g_1114[2][5][3],&g_1114[0][4][2],&g_1114[0][4][2],&g_1114[2][5][3],&g_1114[7][3][0]}},{{&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[2][2][0],&g_1114[2][0][1],&g_1114[0][4][2],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[7][3][0]}},{{&g_1114[2][0][1],&g_1114[0][4][2],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[7][3][0],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[0][4][2],&g_1114[2][0][1],&g_1114[2][2][0]}},{{&g_1114[2][0][1],&g_1114[0][4][2],&g_1114[1][4][3],&g_1114[2][0][1],&g_1114[7][3][0],&g_1114[2][5][3],&g_1114[0][4][2],&g_1114[0][4][2],&g_1114[2][5][3],&g_1114[7][3][0]}}};
static uint16_t g_1523 = 65535UL;
static int16_t ****g_1526 = &g_1186;
static const uint64_t *g_1538 = &g_549;
static const uint64_t **g_1537 = &g_1538;
static const uint64_t ***g_1536[5][1][2] = {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}};
static const uint64_t ****g_1535[6] = {&g_1536[4][0][0],&g_1536[4][0][0],&g_1536[4][0][0],&g_1536[4][0][0],&g_1536[4][0][0],&g_1536[4][0][0]};
static uint64_t *g_1600 = &g_104;
static const uint32_t g_1705 = 0x60DAC399L;
static uint64_t * const *g_1743 = &g_1600;
static uint64_t * const **g_1742 = &g_1743;
static uint64_t ** const *g_1764 = &g_831[0];
static uint64_t ** const **g_1763 = &g_1764;
static uint64_t **g_1771 = &g_1600;
static int32_t g_1853[9][5][5] = {{{5L,5L,(-8L),0x6A756B5DL,1L},{0x3E911D24L,(-1L),1L,0x1C20DF19L,4L},{5L,0x1C20DF19L,2L,(-1L),(-1L)},{0x30D859FCL,1L,0x30D859FCL,0x81151720L,0x5B8DF35DL},{0x6D44121BL,(-8L),0x300095D7L,5L,(-1L)}},{{0x38CD2F57L,0x1C20DF19L,(-5L),0L,0x6D44121BL},{0x0437D4DAL,8L,0x300095D7L,(-1L),0x30D8277CL},{1L,(-1L),0x30D859FCL,8L,1L},{9L,1L,2L,0L,4L},{0x300095D7L,0x3E911D24L,1L,(-1L),0x300095D7L}},{{0x300095D7L,(-9L),0x52E0AF0DL,0x5B1365D3L,(-3L)},{0x300095D7L,0xEA76A922L,0x3E911D24L,0x0437D4DAL,0x81151720L},{3L,(-1L),(-5L),0x915B7158L,1L},{5L,0xAAFC4368L,0xAAFC4368L,5L,0x7D563490L},{4L,0x300095D7L,4L,0x30D859FCL,0x0437D4DAL}},{{(-3L),0x92FD5B9FL,(-5L),3L,0xEA76A922L},{(-1L),2L,(-3L),0x30D859FCL,2L},{0x81151720L,0x6A756B5DL,0x1C20DF19L,5L,4L},{0x11131204L,1L,(-9L),0x915B7158L,0xEA76A922L},{0x6A756B5DL,0x915B7158L,0L,0x0437D4DAL,(-2L)}},{{0x92FD5B9FL,0x94B99A5BL,0x5B8DF35DL,0x5B1365D3L,(-8L)},{2L,0x94B99A5BL,3L,(-1L),1L},{(-1L),0x915B7158L,(-2L),0x300095D7L,2L},{0x30D859FCL,1L,5L,1L,0x30D859FCL},{2L,0x6A756B5DL,0x11131204L,0x51601FFBL,0x300095D7L}},{{5L,2L,0L,0x300095D7L,(-5L)},{(-1L),0x92FD5B9FL,(-6L),0x6A756B5DL,0x300095D7L},{(-9L),0x300095D7L,0x52E0AF0DL,0L,0x30D859FCL},{0x300095D7L,0xAAFC4368L,(-3L),0x0437D4DAL,2L},{(-1L),(-1L),(-1L),0xAB1EDF08L,1L}},{{6L,0xEA76A922L,0xAAFC4368L,6L,(-8L)},{4L,(-9L),0xAAFC4368L,0x30D859FCL,(-2L)},{0x30D859FCL,0x92FD5B9FL,(-1L),(-1L),0xEA76A922L},{0x2CB19EABL,4L,(-3L),(-3L),4L},{0x81151720L,(-1L),0x52E0AF0DL,5L,2L}},{{0x92FD5B9FL,1L,(-6L),0xAB1EDF08L,0xEA76A922L},{(-1L),0xAB1EDF08L,0L,(-2L),0x0437D4DAL},{0x92FD5B9FL,0x52E0AF0DL,0x11131204L,0x5B1365D3L,0x7D563490L},{0x81151720L,0x94B99A5BL,5L,0x6A756B5DL,1L},{0x2CB19EABL,0xAB1EDF08L,(-2L),(-9L),0x81151720L}},{{0x30D859FCL,0x51601FFBL,3L,1L,(-3L)},{4L,0x6A756B5DL,0x5B8DF35DL,1L,0x300095D7L},{6L,4L,0L,(-9L),0L},{(-1L),0x11131204L,(-9L),0x6A756B5DL,(-9L)},{0x300095D7L,0x300095D7L,0x1C20DF19L,0x5B1365D3L,0x30D859FCL}}};
static int64_t g_2152 = 4L;
static int64_t g_2190[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
static int32_t ****g_2208 = &g_1381;
static int32_t *****g_2207 = &g_2208;
static int16_t *****g_2502 = &g_1526;
static uint32_t g_2654 = 0x4E303074L;
static int64_t g_2660 = 0x754D1B45FD1F3D3BLL;
static uint16_t *** const *g_2723[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint64_t *****g_2763 = (void*)0;
static uint32_t * const g_2871 = &g_2654;
static uint32_t * const *g_2870 = &g_2871;
static uint64_t g_2918 = 18446744073709551614UL;
static int32_t *g_2952 = &g_253;
static int8_t g_3152 = 0x16L;
static const int32_t ****g_3159 = (void*)0;
static const int32_t *****g_3158 = &g_3159;



static uint8_t func_1(void);
static int8_t func_10(int32_t * p_11, int32_t * p_12, int32_t p_13, int32_t * p_14, uint8_t p_15);
static uint64_t func_23(uint64_t p_24, uint16_t p_25, uint32_t p_26, int32_t * p_27);
static uint32_t func_29(int64_t p_30, uint32_t p_31, const uint64_t p_32);
static int8_t func_43(int64_t p_44, int64_t * p_45);
static uint16_t func_55(int64_t p_56, int32_t p_57, uint32_t p_58, uint16_t p_59);
static int64_t * func_60(int32_t * p_61, uint64_t p_62, int32_t * p_63);
static int32_t * func_65(int32_t * p_66, uint16_t p_67);
static int32_t * func_68(int64_t p_69, int32_t * p_70, int32_t * p_71);
static int32_t ** func_93(int32_t ** p_94);
# 133 "<stdin>"
static uint8_t func_1(void)
{
    uint8_t l_2 = 250UL;
    int32_t l_7[3];
    int32_t l_2730 = 3L;
    int32_t l_3145 = 1L;
    int32_t l_3166 = 0x83B5EB6DL;
    int i;
    for (i = 0; i < 3; i++)
        l_7[i] = 1L;
    l_2++;
    for (l_2 = 27; (l_2 != 33); l_2++)
    {
        int32_t *l_9 = &l_7[0];
        int64_t *l_19 = &g_20;
        int32_t *l_2731[6][9][4] = {{{&g_926,&g_8,&g_926,&g_926},{(void*)0,&g_8,&l_7[2],&g_926},{&g_8,(void*)0,&g_926,&g_926},{(void*)0,&g_8,&g_926,&g_926},{(void*)0,&g_8,&l_7[1],&g_926},{(void*)0,(void*)0,(void*)0,&g_926},{&g_926,&g_8,&g_926,&g_926},{&g_8,&g_8,&g_8,&g_926},{(void*)0,(void*)0,&g_926,&g_926}},{{&l_7[1],&g_8,(void*)0,&g_926},{&g_8,&g_8,&l_7[0],&g_926},{&g_8,(void*)0,&g_926,&g_926},{&g_926,&g_8,&g_926,&g_926},{(void*)0,&g_8,&l_7[2],&g_926},{&g_8,(void*)0,&g_926,&g_926},{(void*)0,&g_8,&g_926,&g_926},{(void*)0,&g_8,&l_7[1],&g_926},{(void*)0,(void*)0,(void*)0,&g_926}},{{&g_926,&g_8,&g_926,&g_926},{&g_8,&g_8,&g_8,&g_926},{(void*)0,(void*)0,&g_926,&g_926},{&l_7[1],&g_8,(void*)0,&g_926},{&g_8,&g_8,&l_7[0],&g_926},{&g_8,(void*)0,&g_926,&g_926},{&g_926,&g_8,&g_926,&g_926},{(void*)0,&g_8,&l_7[2],&g_926},{&g_8,(void*)0,&g_926,&g_926}},{{(void*)0,&g_8,&g_926,&g_926},{(void*)0,&g_8,&l_7[1],&g_926},{(void*)0,(void*)0,(void*)0,&g_926},{&g_926,&g_8,&g_926,&g_926},{&g_8,&g_8,&g_8,&g_926},{(void*)0,(void*)0,&g_926,&g_926},{&l_7[1],&g_8,(void*)0,&g_926},{&g_8,&g_8,&l_7[0],&g_926},{&g_8,(void*)0,&g_926,&g_926}},{{&g_926,&g_8,&g_926,&g_926},{(void*)0,&g_8,&l_7[2],&g_926},{&g_8,(void*)0,&g_926,&g_926},{(void*)0,&g_8,&g_926,&g_926},{(void*)0,&g_8,&l_7[1],&g_926},{(void*)0,(void*)0,(void*)0,&g_926},{&g_926,&g_8,&g_926,&g_926},{&g_8,&g_8,&g_8,&g_926},{(void*)0,(void*)0,&g_926,&g_926}},{{&l_7[1],&g_8,(void*)0,&g_926},{&g_8,&g_8,&l_7[0],&g_926},{&g_8,(void*)0,&g_926,&g_926},{(void*)0,(void*)0,&l_7[1],&l_7[0]},{&l_7[1],(void*)0,&g_8,&g_926},{&g_926,&g_926,&l_7[0],&g_926},{&g_926,(void*)0,&g_8,&l_7[1]},{&g_926,(void*)0,&g_926,&g_926},{&l_7[1],&g_926,&l_7[2],&g_926}}};
        int32_t l_3153 = 4L;
        uint16_t l_3165 = 0x7FF0L;
        int i, j, k;
        for (g_8 = 0; g_8 < 3; g_8 += 1)
        {
            l_7[g_8] = (-3L);
        }
        (*l_9) = (g_8 | l_2);
    }
    return l_7[1];
}







static int8_t func_10(int32_t * p_11, int32_t * p_12, int32_t p_13, int32_t * p_14, uint8_t p_15)
{
    uint8_t l_2743 = 247UL;
    int32_t ****l_2746 = &g_1380;
    int32_t l_2747 = 0x4CD76DDEL;
    uint64_t ***l_2752 = &g_831[2];
    uint64_t ****l_2751[4] = {&l_2752,&l_2752,&l_2752,&l_2752};
    uint64_t **** const *l_2750 = &l_2751[1];
    int32_t l_2753[7][7][2] = {{{4L,0x3FBEF064L},{0x8D4C02B3L,(-9L)},{0xB1684B80L,0L},{(-1L),4L},{0xEADA4A3CL,4L},{0xF97F731EL,0x00AA3002L},{4L,4L}},{{0x4BC5AE53L,(-3L)},{0xB1684B80L,2L},{0x62BFCDACL,0x3FBEF064L},{0x00AA3002L,0x62BFCDACL},{0x8E8513C7L,0L},{0x8E8513C7L,0x62BFCDACL},{0x00AA3002L,0x3FBEF064L}},{{0x62BFCDACL,2L},{0xB1684B80L,(-3L)},{0x4BC5AE53L,4L},{4L,0x00AA3002L},{0xF97F731EL,4L},{0xEADA4A3CL,4L},{(-1L),0L}},{{0xB1684B80L,(-9L)},{0x8D4C02B3L,0x3FBEF064L},{4L,0x8D4C02B3L},{0x8E8513C7L,0x3111722EL},{0xEA0FC77DL,0x62BFCDACL},{4L,0x3E904000L},{0x62BFCDACL,(-9L)}},{{0xEBCDC3CAL,(-3L)},{(-1L),0xEADA4A3CL},{4L,4L},{1L,4L},{4L,0xEADA4A3CL},{(-1L),(-3L)},{0xEBCDC3CAL,(-9L)}},{{0x62BFCDACL,0x3E904000L},{4L,0x62BFCDACL},{0xEA0FC77DL,0x3111722EL},{0x8E8513C7L,0x8D4C02B3L},{4L,0x3FBEF064L},{0x8D4C02B3L,(-9L)},{0xB1684B80L,0L}},{{(-1L),4L},{0xEADA4A3CL,4L},{0xF97F731EL,0x00AA3002L},{4L,4L},{0x4BC5AE53L,(-3L)},{0xB1684B80L,2L},{0x62BFCDACL,0x3FBEF064L}}};
    uint16_t * const *l_2762 = &g_1114[3][3][2];
    uint64_t *****l_2764 = &l_2751[0];
    uint8_t *l_2767 = (void*)0;
    uint8_t *l_2768 = &g_1467;
    uint32_t *l_2769 = &g_207;
    uint32_t *l_2770 = &g_2654;
    int32_t *l_2771[9][6] = {{(void*)0,(void*)0,&g_926,&g_8,&g_926,(void*)0},{&l_2753[1][5][0],(void*)0,&g_8,&l_2753[1][5][0],&g_8,&l_2753[1][5][0]},{&l_2753[1][5][0],&g_8,&l_2753[1][5][0],&g_8,(void*)0,&l_2753[1][5][0]},{(void*)0,&g_926,&g_8,&g_926,(void*)0,(void*)0},{&g_8,&g_8,&g_926,&g_926,&g_8,&g_8},{(void*)0,(void*)0,&g_926,&g_8,&g_926,(void*)0},{&l_2753[1][5][0],(void*)0,&g_8,&l_2753[1][5][0],&g_8,&l_2753[1][5][0]},{&l_2753[1][5][0],&g_8,&l_2753[1][5][0],&g_8,(void*)0,&l_2753[1][5][0]},{(void*)0,&g_926,&g_8,&g_926,(void*)0,(void*)0}};
    int16_t l_2772[6] = {0xFF31L,(-9L),0xFF31L,0xFF31L,(-9L),0xFF31L};
    uint64_t * const ***l_2831[10][1][3];
    int8_t l_2927 = 0L;
    uint16_t l_2966 = 0xE120L;
    int16_t *****l_2999 = &g_1526;
    int16_t l_3022 = 0L;
    int32_t l_3068 = 7L;
    int64_t l_3135 = 0L;
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_2831[i][j][k] = (void*)0;
        }
    }
    (*g_109) = (((safe_div_func_int64_t_s_s((safe_div_func_int64_t_s_s(((safe_unary_minus_func_int16_t_s((safe_mul_func_int16_t_s_s(((1L < (0xABD4L <= ((safe_sub_func_int64_t_s_s((l_2743 = (*g_168)), ((l_2747 = (safe_rshift_func_uint8_t_u_u(((void*)0 != l_2746), 0))) >= p_13))) != (safe_lshift_func_uint8_t_u_u((l_2750 != (void*)0), 6))))) == ((0xD7L ^ p_13) , l_2753[1][5][0])), l_2753[1][5][0])))) , 0x10967919B5D5DB5ELL), p_13)), l_2753[2][3][0])) > l_2753[1][5][0]) , (void*)0);
    l_2772[4] ^= (((*l_2770) &= ((*l_2769) |= (safe_mul_func_uint8_t_u_u((((void*)0 != (*g_1526)) , ((p_15 & ((*l_2768) = (+(!(safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(((p_15 , (l_2762 != ((((&l_2751[3] != (l_2764 = g_2763)) || ((((0x3DDA6935L | (safe_mod_func_int32_t_s_s(((*p_11) = (((l_2753[1][5][0] == l_2753[1][5][0]) != 0x19L) > 0xC0L)), g_1853[6][1][1]))) >= p_15) || (-8L)) , 4294967295UL)) < (-9L)) , l_2762))) & 0x55L), 0xFC82L)), p_13)))))) >= l_2753[1][5][0])), g_2190[7])))) , l_2753[1][5][0]);
    for (g_753 = 0; (g_753 == (-27)); --g_753)
    {
        uint32_t **l_2784 = &l_2770;
        int32_t l_2793 = 0x13FFE963L;
        uint16_t ***l_2823 = &g_1113[2];
        uint16_t ****l_2822 = &l_2823;
        int8_t l_2867 = 0xE2L;
        int64_t ***l_2869 = &g_225;
        const int16_t *l_2887 = &l_2772[4];
        int32_t l_2954 = 0x32A060CDL;
        int32_t l_2955 = (-1L);
        int32_t l_2959 = 0x71E1D253L;
        int32_t l_2961 = 0x1408BD76L;
        int32_t l_2964 = 0xD6B083A6L;
        int32_t l_2992 = 0x023B10CAL;
        int32_t *l_3025 = &l_2793;
        int16_t *** const ** const l_3098 = &g_1321;
        int16_t l_3116 = 0L;
    }
    (*p_11) ^= 0x1C30738EL;
    return g_244;
}







static uint64_t func_23(uint64_t p_24, uint16_t p_25, uint32_t p_26, int32_t * p_27)
{
    uint32_t *l_2366 = (void*)0;
    uint32_t **l_2365[9] = {&l_2366,&l_2366,&l_2366,&l_2366,&l_2366,&l_2366,&l_2366,&l_2366,&l_2366};
    int32_t l_2375 = 0x716B759BL;
    int32_t l_2378 = 0L;
    int32_t l_2380 = 0x73747093L;
    uint8_t l_2385[8][7][4] = {{{1UL,8UL,2UL,253UL},{0xA0L,0x44L,0xD4L,4UL},{0x03L,0x59L,0xA4L,255UL},{0xA4L,255UL,0xCCL,0x12L},{0x56L,0x28L,254UL,8UL},{0x12L,0xA4L,252UL,0x1AL},{0x44L,1UL,255UL,0x48L}},{{0xB1L,0xF4L,1UL,0xDFL},{0x8BL,254UL,0xD3L,8UL},{0UL,4UL,0xA1L,1UL},{1UL,8UL,8UL,1UL},{0xCCL,246UL,0x91L,0UL},{253UL,4UL,1UL,0xFDL},{255UL,0x62L,0x28L,0xFDL}},{{255UL,4UL,0xA0L,0UL},{0x59L,246UL,249UL,1UL},{0x1AL,8UL,255UL,1UL},{0x2AL,4UL,0x1AL,8UL},{1UL,254UL,255UL,0xDFL},{0UL,0xF4L,247UL,0x48L},{0x91L,1UL,4UL,0x1AL}},{{0UL,0xA4L,0xFDL,8UL},{8UL,0x28L,0xB0L,0x12L},{4UL,255UL,0x12L,255UL},{0x9CL,0x59L,0xD0L,4UL},{1UL,0x44L,0UL,253UL},{0xA1L,8UL,0x56L,0x8BL},{0xA1L,8UL,0UL,0xA5L}},{{1UL,0x8BL,0xD0L,0x56L},{0x9CL,1UL,0x12L,251UL},{4UL,0xD3L,0xB0L,0x91L},{8UL,0x03L,0xFDL,247UL},{0UL,0xFDL,4UL,0x15L},{0x91L,255UL,247UL,255UL},{0UL,0xCCL,255UL,0x28L}},{{1UL,0xD4L,0x1AL,0UL},{0x2AL,0x15L,255UL,255UL},{0x1AL,0x1AL,249UL,0xD4L},{0x59L,0xA1L,0xA0L,246UL},{255UL,253UL,0x28L,0xA0L},{255UL,253UL,1UL,246UL},{253UL,0xA1L,0x91L,0xD4L}},{{0xCCL,0x1AL,8UL,255UL},{1UL,0x15L,0xA1L,0UL},{0UL,0xD4L,0xD3L,0x28L},{0x8BL,0xCCL,1UL,255UL},{0xB1L,249UL,0xB1L,0xA0L},{0xA1L,255UL,255UL,0x56L},{0x91L,8UL,255UL,252UL}},{{0xD0L,0x28L,0xF5L,4UL},{0x59L,0x9CL,0x59L,0xD0L},{8UL,0xCCL,0xA4L,0UL},{0xD4L,0xA5L,8UL,0xCCL},{0x03L,247UL,8UL,1UL},{0xD4L,0xA1L,0xA4L,0xDFL},{8UL,0UL,0x59L,0xB1L}}};
    const int16_t **l_2394 = (void*)0;
    int32_t * const * const l_2420 = &g_656;
    int64_t ** const l_2498 = (void*)0;
    int32_t l_2542 = (-10L);
    int16_t ***l_2598 = (void*)0;
    uint8_t **l_2611 = &g_153;
    int32_t l_2657[5] = {0L,0L,0L,0L,0L};
    int32_t l_2659 = 0xC3DBBB63L;
    int32_t l_2661 = 0x1012C4BCL;
    uint16_t *** const l_2727 = &g_1113[3];
    uint16_t *** const *l_2726[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2726[i] = &l_2727;
    for (g_2152 = 3; (g_2152 >= 0); g_2152 -= 1)
    {
        int32_t *l_2376 = &g_253;
        uint32_t l_2377[6][5];
        int8_t *l_2379 = &g_980[7];
        int32_t *l_2381 = &l_2380;
        int32_t *l_2382 = &l_2380;
        int32_t *l_2383 = &g_87;
        int32_t *l_2384[9] = {&l_2375,&l_2375,&l_2375,&l_2375,&l_2375,&l_2375,&l_2375,&l_2375,&l_2375};
        int32_t *****l_2443 = &g_2208;
        int16_t ***l_2464 = (void*)0;
        uint16_t **l_2494[8][9] = {{&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[0][4][3],&g_1114[0][4][3],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[0][4][3]},{&g_1114[2][0][1],&g_1114[0][4][3],&g_1114[0][4][3],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[0][4][3],&g_1114[0][4][3],&g_1114[2][0][1]},{&g_1114[2][0][1],&g_1114[0][4][3],&g_1114[2][0][1],&g_1114[0][4][3],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[0][4][3],&g_1114[2][0][1],&g_1114[0][4][3]},{&g_1114[0][4][3],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[0][4][3],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[2][0][1]},{&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[0][4][3],&g_1114[2][0][1],&g_1114[0][4][3],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[0][4][3],&g_1114[2][0][1]},{&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[0][4][3],&g_1114[0][4][3],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[0][4][3]},{&g_1114[2][0][1],&g_1114[0][4][3],&g_1114[0][4][3],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[0][4][3],&g_1114[0][4][3],&g_1114[2][0][1]},{&g_1114[2][0][1],&g_1114[0][4][3],&g_1114[2][0][1],&g_1114[0][4][3],&g_1114[2][0][1],&g_1114[2][0][1],&g_1114[0][4][3],&g_1114[2][0][1],&g_1114[0][4][3]}};
        uint32_t l_2559[2][5][8] = {{{0x302B4F16L,0x302B4F16L,18446744073709551615UL,0x302B4F16L,0x302B4F16L,18446744073709551615UL,0x302B4F16L,0x302B4F16L},{0x17331A69L,0x302B4F16L,0x17331A69L,0x17331A69L,0x302B4F16L,0x17331A69L,0x17331A69L,0x302B4F16L},{0x302B4F16L,0x17331A69L,0x17331A69L,0x302B4F16L,0x17331A69L,0x17331A69L,0x302B4F16L,0x17331A69L},{0x302B4F16L,0x302B4F16L,18446744073709551615UL,0x302B4F16L,0x302B4F16L,18446744073709551615UL,0x302B4F16L,0x302B4F16L},{0x17331A69L,0x302B4F16L,0x17331A69L,0x17331A69L,0x302B4F16L,0x17331A69L,0x17331A69L,0x302B4F16L}},{{0x302B4F16L,0x17331A69L,0x17331A69L,0x302B4F16L,0x17331A69L,0x17331A69L,0x302B4F16L,0x17331A69L},{0x302B4F16L,0x302B4F16L,18446744073709551615UL,0x302B4F16L,0x302B4F16L,18446744073709551615UL,0x302B4F16L,0x302B4F16L},{0x17331A69L,0x302B4F16L,0x17331A69L,0x17331A69L,0x302B4F16L,0x17331A69L,0x17331A69L,0x302B4F16L},{0x302B4F16L,0x17331A69L,18446744073709551615UL,0x17331A69L,18446744073709551615UL,18446744073709551615UL,0x17331A69L,18446744073709551615UL},{0x17331A69L,0x17331A69L,0x302B4F16L,0x17331A69L,0x17331A69L,0x302B4F16L,0x17331A69L,0x17331A69L}}};
        int32_t ***l_2562 = &g_655;
        int32_t **** const l_2561[4] = {&l_2562,&l_2562,&l_2562,&l_2562};
        int32_t **** const *l_2560[10] = {&l_2561[2],&l_2561[2],&l_2561[2],&l_2561[2],&l_2561[2],&l_2561[2],&l_2561[2],&l_2561[2],&l_2561[2],&l_2561[2]};
        int64_t *l_2568 = &g_47;
        uint32_t l_2587 = 7UL;
        int32_t l_2655[6][8][5] = {{{1L,1L,0xCE6C4E45L,0xF315DDA5L,0x0972ECE0L},{0xF52A438EL,0xD36D19A1L,0xDF84C634L,5L,0xA9E8577FL},{0xF52A438EL,0x1A9960AFL,0xE533C787L,0x8C8B54D9L,0x3DB5F00AL},{1L,0xD36D19A1L,0xE533C787L,0L,0xCE6C4E45L},{0xD36D19A1L,1L,0xDF84C634L,0x8C8B54D9L,0xCE6C4E45L},{0x1A9960AFL,0xF52A438EL,0xCE6C4E45L,5L,0x3DB5F00AL},{0xD36D19A1L,0xF52A438EL,0xA9E8577FL,0xF315DDA5L,0xA9E8577FL},{1L,1L,0xCE6C4E45L,0xF315DDA5L,0x0972ECE0L}},{{0xF52A438EL,0xD36D19A1L,0xDF84C634L,5L,0xA9E8577FL},{0xF52A438EL,0x1A9960AFL,0xE533C787L,0x8C8B54D9L,0x3DB5F00AL},{1L,0xD36D19A1L,0xE533C787L,0L,0xCE6C4E45L},{0xD36D19A1L,1L,0xDF84C634L,0x8C8B54D9L,0xCE6C4E45L},{0x1A9960AFL,0xF52A438EL,0xCE6C4E45L,5L,0x3DB5F00AL},{0xD36D19A1L,0xF52A438EL,0xA9E8577FL,0xF315DDA5L,0xA9E8577FL},{1L,1L,0xCE6C4E45L,0xF315DDA5L,0x0972ECE0L},{0xF52A438EL,0xD36D19A1L,0xDF84C634L,5L,0xA9E8577FL}},{{0xF52A438EL,0x1A9960AFL,0xE533C787L,0x8C8B54D9L,0x3DB5F00AL},{1L,0xD36D19A1L,0xE533C787L,0L,0xCE6C4E45L},{0xD36D19A1L,1L,0xDF84C634L,0x8C8B54D9L,0xCE6C4E45L},{0x1A9960AFL,0xF52A438EL,0xCE6C4E45L,5L,0x3DB5F00AL},{0xD36D19A1L,0xF52A438EL,0xA9E8577FL,0xF315DDA5L,0xA9E8577FL},{1L,1L,0xCE6C4E45L,0xF315DDA5L,0x0972ECE0L},{0xF52A438EL,0xD36D19A1L,0xDF84C634L,5L,0xA9E8577FL},{0xF52A438EL,0x1A9960AFL,0xE533C787L,0x8C8B54D9L,0x3DB5F00AL}},{{1L,0xD36D19A1L,0xE533C787L,0L,0xCE6C4E45L},{0xD36D19A1L,1L,0xDF84C634L,0x8C8B54D9L,0xCE6C4E45L},{0x1A9960AFL,0xF52A438EL,0xCE6C4E45L,5L,0x3DB5F00AL},{0xD36D19A1L,0xF52A438EL,0xA9E8577FL,0xF315DDA5L,0xA9E8577FL},{1L,1L,0xCE6C4E45L,0xF315DDA5L,0x0972ECE0L},{0xF52A438EL,0xD36D19A1L,0xDF84C634L,5L,0xA9E8577FL},{0xF52A438EL,0x1A9960AFL,0xE533C787L,0x8C8B54D9L,0x3DB5F00AL},{1L,0xD36D19A1L,0xE533C787L,0L,0xCE6C4E45L}},{{0xD36D19A1L,1L,0xDF84C634L,0xD70D1694L,0x885B4344L},{0xE533C787L,0xDF84C634L,0x885B4344L,0x04576380L,0L},{0x3DB5F00AL,0xDF84C634L,(-1L),7L,(-1L)},{0x0972ECE0L,0x0972ECE0L,0x885B4344L,7L,0L},{0xDF84C634L,0x3DB5F00AL,0x230D1EB5L,0x04576380L,(-1L)},{0xDF84C634L,0xE533C787L,(-5L),0xD70D1694L,0L},{0x0972ECE0L,0x3DB5F00AL,(-5L),0xDA9BF69BL,0x885B4344L},{0x3DB5F00AL,0x0972ECE0L,0x230D1EB5L,0xD70D1694L,0x885B4344L}},{{0xE533C787L,0xDF84C634L,0x885B4344L,0x04576380L,0L},{0x3DB5F00AL,0xDF84C634L,(-1L),7L,(-1L)},{0x0972ECE0L,0x0972ECE0L,0x885B4344L,7L,0L},{0xDF84C634L,0x3DB5F00AL,0x230D1EB5L,0x04576380L,(-1L)},{0xDF84C634L,0xE533C787L,(-5L),0xD70D1694L,0L},{0x0972ECE0L,0x3DB5F00AL,(-5L),0xDA9BF69BL,0x885B4344L},{0x3DB5F00AL,0x0972ECE0L,0x230D1EB5L,0xD70D1694L,0x885B4344L},{0xE533C787L,0xDF84C634L,0x885B4344L,0x04576380L,0L}}};
        int32_t l_2658 = 0L;
        uint16_t ***l_2722 = &l_2494[6][0];
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 5; j++)
                l_2377[i][j] = 0x4D278318L;
        }
        l_2380 |= (2UL > ((safe_div_func_uint16_t_u_u((((((((((safe_rshift_func_int8_t_s_u(((*g_168) | 5UL), 5)) <= (((~((l_2365[6] == &l_2366) > (safe_add_func_uint32_t_u_u(((l_2378 |= ((safe_div_func_int16_t_s_s((0x0CBCL | p_26), (((((safe_rshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(l_2375, ((((*l_2376) = 0L) , 1UL) , l_2375))), 1)) && 4294967294UL) != p_26) != p_25) && l_2377[4][2]))) , (*g_226))) , 0xA7AA1348L), g_383)))) | 0xFFL) && 0x7ED872FFL)) >= l_2375) , &g_276) == l_2379) ^ p_25) | p_26) , 0x137DL) <= l_2375), 0xB106L)) < p_25));
        --l_2385[6][5][3];
    }
    (*g_109) = &l_2542;
    for (g_244 = 0; (g_244 == 40); ++g_244)
    {
        return l_2659;
    }
    return p_24;
}







static uint32_t func_29(int64_t p_30, uint32_t p_31, const uint64_t p_32)
{
    int64_t l_1797 = 0x7D297B3B78C5EB47LL;
    int32_t l_1800 = 0x0339CFC8L;
    int64_t l_1851 = 1L;
    int32_t l_1877 = 4L;
    int32_t l_1881 = 0x463C9529L;
    int32_t l_1882 = (-1L);
    int32_t l_1884 = 0x0CB81883L;
    int32_t l_1886 = (-4L);
    int32_t l_1887 = 0L;
    int32_t l_1891 = 0x281B0483L;
    int32_t l_1893[1];
    int32_t *l_1901[5][10][5] = {{{&g_289,&g_1853[7][1][2],&g_1853[1][4][1],(void*)0,&g_289},{&g_289,&g_1853[1][4][1],(void*)0,&g_1853[6][3][3],&g_1853[7][4][3]},{&g_289,&g_289,&g_289,&g_289,&g_1853[1][4][1]},{&g_289,&g_1853[7][0][1],&g_1853[0][0][1],&g_289,&g_1853[3][4][4]},{&g_1853[6][1][1],&g_383,&g_1853[6][3][3],&g_289,&g_1853[6][3][3]},{&g_1853[6][1][1],&g_1853[6][1][1],&g_1853[1][3][4],&g_289,&g_289},{&g_383,&g_1853[2][1][0],&g_383,&g_1853[6][3][3],&g_289},{&g_1853[1][3][4],&g_289,&g_289,(void*)0,(void*)0},{&g_1853[6][3][3],&g_1853[2][1][0],&g_1853[7][0][1],&g_289,&g_383},{&g_1853[7][4][3],&g_1853[6][1][1],&g_1853[6][1][1],&g_1853[4][3][0],(void*)0}},{{&g_1853[6][1][1],&g_383,&g_289,(void*)0,(void*)0},{&g_383,&g_1853[7][0][1],&g_383,&g_289,&g_383},{&g_1853[7][0][1],&g_289,&g_289,&g_1853[6][3][3],(void*)0},{&g_289,&g_1853[1][4][1],&g_1853[3][4][4],&g_1853[6][1][1],&g_289},{&g_289,&g_1853[7][1][2],&g_289,(void*)0,&g_289},{&g_1853[0][0][1],&g_289,&g_383,&g_289,&g_1853[6][3][3]},{&g_289,&g_289,&g_289,&g_1853[2][1][0],&g_1853[3][4][4]},{&g_289,&g_1853[6][1][1],&g_1853[6][1][1],&g_289,&g_1853[1][4][1]},{&g_1853[0][0][1],&g_1853[6][1][1],&g_1853[7][0][1],&g_1853[1][3][4],&g_1853[7][4][3]},{&g_289,&g_289,&g_289,&g_289,&g_289}},{{&g_289,&g_1853[6][1][1],&g_383,&g_1853[1][3][4],&g_1853[6][1][1]},{&g_1853[7][0][1],&g_1853[6][3][3],&g_1853[1][3][4],&g_289,&g_289},{&g_383,&g_289,&g_1853[6][3][3],(void*)0,&g_289},{&g_1853[7][1][2],&g_289,&g_383,&g_289,&g_1853[7][1][2]},{&g_1853[2][1][0],&g_1853[7][4][3],&g_1853[4][3][0],&g_1853[6][1][1],&g_1853[6][1][1]},{(void*)0,&g_289,&g_1853[3][4][4],&g_289,&g_1853[6][1][1]},{&g_1853[6][1][1],&g_289,&g_1853[7][0][1],&g_1853[7][4][3],&g_1853[6][1][1]},{&g_1853[1][3][4],&g_289,(void*)0,&g_1853[1][4][1],&g_1853[7][1][2]},{&g_1853[6][1][1],&g_1853[7][1][2],&g_1853[6][3][3],&g_1853[3][4][4],&g_289},{&g_289,&g_1853[4][3][0],&g_1853[6][3][3],&g_1853[6][3][3],&g_1853[4][3][0]}},{{&g_1853[6][2][3],&g_383,(void*)0,&g_289,&g_289},{&g_289,&g_1853[0][0][1],&g_1853[7][0][1],&g_289,&g_289},{&g_1853[4][3][0],&g_1853[7][0][1],&g_1853[3][4][4],(void*)0,&g_1853[2][1][0]},{&g_289,&g_1853[1][4][1],&g_1853[4][3][0],&g_383,&g_1853[7][0][1]},{&g_1853[6][2][3],&g_289,&g_383,(void*)0,&g_289},{&g_289,&g_289,&g_1853[7][4][3],(void*)0,&g_1853[7][4][3]},{&g_1853[6][1][1],&g_1853[6][1][1],&g_1853[6][1][1],&g_383,(void*)0},{&g_1853[1][3][4],(void*)0,&g_289,(void*)0,&g_1853[6][2][3]},{&g_1853[6][1][1],(void*)0,&g_1853[6][1][1],&g_289,&g_1853[6][1][1]},{(void*)0,(void*)0,&g_289,&g_289,&g_1853[1][3][4]}},{{&g_1853[2][1][0],&g_1853[6][1][1],&g_1853[7][1][2],&g_1853[6][3][3],&g_1853[3][4][4]},{&g_1853[7][1][2],&g_289,(void*)0,&g_1853[3][4][4],&g_1853[3][4][4]},{&g_1853[6][3][3],&g_289,&g_1853[6][3][3],&g_1853[1][4][1],&g_1853[1][3][4]},{&g_289,&g_1853[1][4][1],&g_1853[6][2][3],&g_1853[7][4][3],&g_1853[6][1][1]},{&g_289,&g_1853[7][0][1],&g_289,&g_289,&g_1853[6][2][3]},{&g_383,&g_1853[0][0][1],&g_1853[6][2][3],&g_1853[6][1][1],(void*)0},{&g_383,&g_383,&g_1853[6][3][3],&g_289,&g_1853[7][4][3]},{&g_1853[6][1][1],&g_1853[4][3][0],(void*)0,(void*)0,&g_289},{&g_1853[6][1][1],&g_1853[7][1][2],&g_1853[7][1][2],&g_1853[6][1][1],&g_1853[7][0][1]},{&g_383,&g_289,&g_289,&g_1853[6][1][1],&g_1853[2][1][0]}}};
    uint8_t **l_1974 = &g_153;
    uint8_t l_2007[10] = {6UL,0x5FL,6UL,6UL,0x5FL,6UL,6UL,0x5FL,6UL,6UL};
    uint8_t *l_2012 = &l_2007[6];
    uint32_t l_2040[10] = {4294967286UL,0x8A77E57BL,4294967286UL,0x8A77E57BL,4294967286UL,0x8A77E57BL,4294967286UL,0x8A77E57BL,4294967286UL,0x8A77E57BL};
    uint32_t *l_2091[1][5][1] = {{{&g_207},{&g_207},{&g_207},{&g_207},{&g_207}}};
    int32_t ****l_2102 = &g_1380;
    const uint32_t l_2109 = 0xE67BAD97L;
    int16_t ** const *l_2123 = &g_490;
    int16_t ** const * const *l_2122 = &l_2123;
    int16_t ** const * const **l_2121 = &l_2122;
    uint32_t l_2130 = 0UL;
    uint16_t **l_2149 = &g_1114[3][3][0];
    const uint64_t *l_2158[10];
    uint8_t l_2170 = 0x13L;
    uint32_t l_2322 = 5UL;
    uint32_t l_2343 = 0xAC4E1DB1L;
    int32_t *l_2352 = &l_1882;
    int32_t *l_2353 = (void*)0;
    int32_t *l_2354 = &l_1882;
    int32_t *l_2355[5][2][5] = {{{&l_1893[0],&l_1893[0],&l_1893[0],(void*)0,&l_1893[0]},{(void*)0,&g_87,&g_87,&l_1800,&g_87}},{{&l_1893[0],&l_1893[0],&l_1893[0],(void*)0,&l_1893[0]},{(void*)0,&g_87,&g_87,&l_1800,&g_87}},{{&l_1893[0],&l_1893[0],&l_1893[0],(void*)0,&l_1893[0]},{(void*)0,&g_87,&g_87,&l_1800,&l_1882}},{{&l_1893[0],&l_1893[0],(void*)0,&g_8,(void*)0},{&g_87,&g_253,&l_1882,&l_1887,&l_1882}},{{&l_1893[0],&l_1893[0],(void*)0,&g_8,(void*)0},{&g_87,&g_253,&l_1882,&l_1887,&l_1882}}};
    uint32_t l_2356 = 0xB60994A9L;
    uint32_t l_2359 = 0x834634F7L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1893[i] = 0xFDB4427EL;
    for (i = 0; i < 10; i++)
        l_2158[i] = &g_549;
    if (g_8)
    {
        uint64_t l_41 = 1UL;
        int64_t *l_46 = &g_47;
        uint64_t ***l_1805 = &g_831[3];
        uint64_t ****l_1804 = &l_1805;
        const int32_t *l_1810 = &g_87;
        uint32_t *l_1811 = &g_207;
        uint16_t *l_1812 = (void*)0;
        uint16_t *l_1813 = &g_244;
        int8_t *l_1814 = &g_276;
        int32_t l_1815[4][1][8] = {{{0xE39A2D2EL,0x318562C9L,(-10L),(-4L),0x318562C9L,(-4L),(-10L),0x318562C9L}},{{8L,(-10L),0xE39A2D2EL,8L,(-4L),(-4L),8L,0xE39A2D2EL}},{{0x318562C9L,0x318562C9L,0x57784E79L,0L,8L,0x57784E79L,8L,0L}},{{0xE39A2D2EL,0L,0xE39A2D2EL,(-4L),0L,(-10L),(-10L),0L}}};
        int16_t **l_1840 = (void*)0;
        int32_t l_1874[5][3] = {{(-4L),0xB0ADE618L,0x95484D62L},{0xB0ADE618L,(-4L),(-4L)},{0x95484D62L,(-4L),1L},{0xADEF246CL,0xB0ADE618L,0L},{0x95484D62L,0x95484D62L,0L}};
        int64_t l_1880 = (-3L);
        int32_t l_1883 = 9L;
        int32_t l_1894 = 0x530F7751L;
        int64_t l_1895 = 0x8AAEA49E1B172364LL;
        uint8_t ***l_1926 = &g_1332[4];
        int32_t l_1980 = 1L;
        uint64_t l_2068 = 18446744073709551609UL;
        int i, j, k;
        l_1800 ^= (safe_sub_func_int32_t_s_s((-1L), (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(g_8, (safe_lshift_func_uint8_t_u_u((l_41 <= (((!(func_43(g_8, l_46) && l_41)) | (l_1797 || (safe_div_func_int16_t_s_s((***g_1186), 0x09B5L)))) ^ 0x540EL)), 2)))), (*g_734)))));
    }
    else
    {
        uint16_t l_2081[4] = {65531UL,65531UL,65531UL,65531UL};
        int32_t l_2092 = 0x2B0F62A0L;
        int32_t ****l_2101[8][5][6] = {{{&g_1380,&g_1380,&g_1380,&g_1381,&g_1380,&g_1380},{&g_1381,(void*)0,&g_1380,&g_1380,&g_1380,&g_1380},{&g_1380,&g_1381,&g_1381,&g_1380,&g_1380,(void*)0},{(void*)0,(void*)0,&g_1380,(void*)0,&g_1380,&g_1381},{&g_1381,&g_1380,(void*)0,&g_1380,&g_1380,&g_1380}},{{&g_1380,(void*)0,&g_1380,&g_1380,&g_1380,&g_1380},{&g_1380,&g_1381,(void*)0,&g_1381,&g_1380,&g_1380},{(void*)0,(void*)0,&g_1380,&g_1380,&g_1380,(void*)0},{&g_1381,&g_1380,&g_1380,(void*)0,&g_1380,(void*)0},{&g_1380,&g_1380,&g_1380,&g_1380,(void*)0,&g_1380}},{{&g_1380,&g_1380,(void*)0,(void*)0,&g_1380,&g_1380},{&g_1380,(void*)0,&g_1380,&g_1380,&g_1380,&g_1380},{(void*)0,&g_1380,(void*)0,&g_1380,&g_1380,&g_1381},{(void*)0,&g_1380,&g_1380,&g_1380,(void*)0,(void*)0},{&g_1380,&g_1380,&g_1381,(void*)0,&g_1381,&g_1380}},{{&g_1380,&g_1380,&g_1380,&g_1380,(void*)0,&g_1380},{&g_1380,&g_1380,&g_1380,(void*)0,&g_1380,&g_1381},{&g_1381,&g_1380,(void*)0,&g_1380,(void*)0,(void*)0},{(void*)0,&g_1380,&g_1380,&g_1381,&g_1381,&g_1380},{&g_1380,&g_1380,&g_1380,&g_1380,(void*)0,&g_1381}},{{&g_1381,&g_1380,(void*)0,&g_1380,&g_1381,&g_1381},{&g_1380,&g_1381,(void*)0,(void*)0,&g_1380,&g_1381},{&g_1381,(void*)0,&g_1381,&g_1380,&g_1380,&g_1380},{&g_1380,&g_1380,&g_1380,&g_1381,(void*)0,&g_1381},{&g_1381,&g_1380,(void*)0,(void*)0,&g_1381,&g_1380}},{{&g_1381,&g_1381,&g_1380,(void*)0,&g_1380,&g_1381},{&g_1381,(void*)0,&g_1380,&g_1381,&g_1380,&g_1380},{&g_1380,&g_1380,&g_1380,&g_1380,&g_1380,&g_1380},{&g_1381,&g_1381,&g_1380,(void*)0,(void*)0,&g_1380},{&g_1380,&g_1380,(void*)0,&g_1380,(void*)0,(void*)0}},{{&g_1381,&g_1381,&g_1380,&g_1380,&g_1380,&g_1381},{&g_1380,&g_1380,&g_1380,&g_1380,&g_1380,(void*)0},{&g_1380,(void*)0,(void*)0,&g_1380,&g_1380,(void*)0},{&g_1380,&g_1381,&g_1380,(void*)0,&g_1381,(void*)0},{(void*)0,&g_1380,(void*)0,&g_1380,(void*)0,(void*)0}},{{&g_1381,&g_1380,&g_1380,&g_1380,&g_1380,&g_1381},{(void*)0,(void*)0,&g_1380,(void*)0,&g_1380,(void*)0},{(void*)0,&g_1381,(void*)0,&g_1380,&g_1381,&g_1380},{(void*)0,&g_1380,&g_1380,(void*)0,(void*)0,&g_1380},{(void*)0,&g_1380,&g_1380,&g_1380,&g_1380,&g_1380}}};
        int32_t *l_2168 = (void*)0;
        int16_t *****l_2200 = (void*)0;
        int32_t l_2225 = 0x99A3B523L;
        int32_t l_2226 = 0x1CC6F086L;
        int32_t l_2227 = (-1L);
        int32_t l_2229 = (-1L);
        int32_t l_2231 = 9L;
        int32_t l_2232 = 1L;
        int32_t l_2233[6] = {0xC92A8F9AL,0xC92A8F9AL,0xC92A8F9AL,0xC92A8F9AL,0xC92A8F9AL,0xC92A8F9AL};
        int8_t l_2260 = 0x73L;
        int32_t l_2320 = 0L;
        int i, j, k;
        for (g_140 = 0; (g_140 >= 41); g_140 = safe_add_func_int64_t_s_s(g_140, 1))
        {
            int32_t *l_2071 = (void*)0;
            int32_t **l_2072 = (void*)0;
            int32_t **l_2073 = &l_2071;
            int8_t *l_2080[1][7] = {{&g_137[0],&g_137[0],&g_137[0],&g_137[0],&g_137[0],&g_137[0],&g_137[0]}};
            uint32_t **l_2090[4];
            uint8_t **l_2186 = &g_153;
            int16_t *l_2187 = &g_557;
            uint64_t l_2191 = 0x5B96078F3B5A9033LL;
            int32_t l_2223 = 0x68E99F33L;
            int32_t l_2224[2];
            int64_t l_2228 = 1L;
            int16_t l_2234 = 9L;
            int16_t **l_2273 = &g_491;
            int16_t **l_2274[2];
            int32_t l_2278 = 0x874ECEA2L;
            int i, j;
            for (i = 0; i < 4; i++)
                l_2090[i] = (void*)0;
            for (i = 0; i < 2; i++)
                l_2224[i] = (-9L);
            for (i = 0; i < 2; i++)
                l_2274[i] = (void*)0;
            (*l_2073) = ((*g_109) = l_2071);
            if (((safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(l_1851, (safe_lshift_func_int8_t_s_u(((l_1884 ^= g_608) | (p_31 <= ((l_2092 |= ((l_2091[0][0][0] = func_68((((l_2081[2] ^ (*g_226)) || ((*l_2012) = ((safe_rshift_func_int16_t_s_u(7L, ((safe_rshift_func_int16_t_s_s((p_32 > ((safe_sub_func_uint32_t_u_u(g_610, 0UL)) <= p_32)), 8)) && g_1025))) <= (*g_734)))) , p_30), (*l_2073), (*l_2073))) != (void*)0)) || 0x266CE0E0L))), l_1877)))) , l_1893[0]), g_557)) & l_2081[3]))
            {
                uint8_t *l_2110 = &l_2007[0];
                const uint64_t ****l_2126 = &g_1536[4][0][1];
                int32_t l_2129 = 0xAB0C6CBCL;
                uint32_t l_2142 = 0UL;
                l_2092 = (safe_div_func_uint16_t_u_u((l_2081[2] >= ((safe_rshift_func_int8_t_s_s(g_1467, 7)) | (safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(p_31, 9)) != (((&g_1380 != (l_2102 = l_2101[4][3][4])) ^ ((((((+((-5L) <= l_2081[2])) , (4L & (safe_div_func_int8_t_s_s((((**g_225) = (~(p_31 , l_2109))) > p_31), l_1884)))) && 0UL) , (void*)0) != l_2110) == l_1882)) > 0x3FL)), p_32)))), 0xF6D0L));
                for (g_549 = (-16); (g_549 < 25); g_549++)
                {
                    int32_t *****l_2131 = &l_2101[4][3][4];
                    int32_t l_2148[6];
                    int16_t ** const **l_2156[10] = {&l_2123,&l_2123,&l_2123,&l_2123,&l_2123,&l_2123,&l_2123,&l_2123,&l_2123,&l_2123};
                    int16_t ** const ***l_2155[4][8] = {{&l_2156[1],&l_2156[1],&l_2156[1],&l_2156[1],&l_2156[1],&l_2156[1],&l_2156[1],&l_2156[1]},{&l_2156[1],&l_2156[1],&l_2156[1],&l_2156[1],&l_2156[2],&l_2156[1],&l_2156[2],&l_2156[1]},{&l_2156[1],&l_2156[2],&l_2156[1],&l_2156[1],&l_2156[1],&l_2156[1],&l_2156[1],&l_2156[1]},{&l_2156[2],&l_2156[2],&l_2156[1],&l_2156[1],&l_2156[1],&l_2156[1],&l_2156[1],&l_2156[2]}};
                    int32_t l_2157 = 0x8D0E8D6AL;
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_2148[i] = 0xC2AE1635L;
                    l_2130 &= (safe_add_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_s(p_31, ((safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((((void*)0 != l_2121) , 0x35L), 7)), 0x6072BDF295F505E5LL)) <= ((((safe_rshift_func_int8_t_s_s((l_2126 == l_2126), (g_276 = (safe_add_func_int64_t_s_s((((void*)0 != (*g_109)) <= 4294967292UL), 3UL))))) || l_1877) , p_30) != l_1797)))) || (-1L)), l_2129));
                    l_2129 = ((((*g_226) = (p_30 != (l_2102 == ((*l_2131) = l_2102)))) , (safe_rshift_func_int16_t_s_u(((-9L) || (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(p_32, 13)), (((safe_mul_func_int8_t_s_s((-1L), (g_557 , 1UL))) , (safe_lshift_func_uint8_t_u_s(((void*)0 != l_2110), 6))) ^ l_2142)))), 6))) < 4294967287UL);
                    if (p_31)
                        break;
                    for (g_87 = 6; (g_87 < (-17)); g_87--)
                    {
                        int16_t ****l_2145 = &g_1186;
                        int8_t l_2159 = 1L;
                        l_2159 = ((((void*)0 != l_2145) && (safe_add_func_int8_t_s_s(l_2148[2], ((p_30 , l_2149) == (((*l_2110) |= ((((((((l_2157 = ((safe_rshift_func_uint16_t_u_u(g_2152, (safe_rshift_func_uint8_t_u_u(0x63L, (l_2155[3][0] == ((**g_225) , &g_1526)))))) <= l_2081[2])) , l_2158[7]) == &p_32) , l_2148[2]) > l_1851) == 8L) == 0xEBL) && g_1335)) , &g_1114[2][0][1]))))) || p_30);
                    }
                }
                for (g_47 = 2; (g_47 >= (-30)); g_47--)
                {
                    int32_t ** const *l_2166[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2166[i] = &l_2072;
                    for (g_302 = 0; g_302 < 1; g_302 += 1)
                    {
                        for (g_1307 = 0; g_1307 < 7; g_1307 += 1)
                        {
                            l_2080[g_302][g_1307] = &g_980[7];
                        }
                    }
                    for (l_1797 = 7; (l_1797 >= 3); --l_1797)
                    {
                        if (p_30)
                            break;
                        l_2092 = (safe_sub_func_int32_t_s_s(l_1881, 0x5E814187L));
                    }
                    if (((void*)0 == l_2166[0]))
                    {
                        int32_t *l_2167 = (void*)0;
                        l_2168 = func_68(p_30, l_2167, &l_2129);
                        (*g_109) = (void*)0;
                        l_2129 = p_32;
                    }
                    else
                    {
                        int16_t l_2169[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_2169[i] = 0x42EDL;
                        l_2169[1] = 6L;
                    }
                }
            }
            else
            {
                return p_31;
            }
            if (l_2170)
                break;
            for (l_1877 = (-23); (l_1877 == 8); ++l_1877)
            {
                int16_t *l_2188 = &g_753;
                uint32_t l_2189 = 3UL;
                int32_t *****l_2209[5] = {&l_2101[3][2][1],&l_2101[3][2][1],&l_2101[3][2][1],&l_2101[3][2][1],&l_2101[3][2][1]};
                int16_t ****l_2214 = &g_1186;
                int32_t l_2220[4][2][1] = {{{1L},{0xAE031CD8L}},{{0xAE031CD8L},{1L}},{{0xAE031CD8L},{0xAE031CD8L}},{{1L},{0xAE031CD8L}}};
                int32_t l_2221 = (-3L);
                int16_t l_2230 = 0x0588L;
                int32_t *l_2308 = &l_2221;
                int8_t *l_2346 = &g_980[0];
                uint64_t l_2347 = 18446744073709551609UL;
                int i, j, k;
                if (((safe_mul_func_int16_t_s_s(((((safe_add_func_uint64_t_u_u(((g_2190[7] = (g_207 = (((-10L) > (g_87 | p_31)) <= (((safe_mod_func_uint8_t_u_u(1UL, ((safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u(0x57B1L, (safe_unary_minus_func_uint16_t_u((l_2186 != (*g_1331)))))) , l_2187) != l_2188), p_32)), l_2040[9])) , g_1501))) && l_2189) || l_2189)))) >= 1L), p_31)) , 65534UL) & 0x600FL) <= g_833), 0x514FL)) <= l_2191))
                {
                    int16_t l_2219 = 0x8EA7L;
                    int32_t *l_2222[3][6][2] = {{{(void*)0,(void*)0},{&g_8,&l_1893[0]},{&l_1886,&l_1893[0]},{&g_8,(void*)0},{&g_8,&l_1893[0]},{&l_1886,&l_1893[0]}},{{&g_8,(void*)0},{&g_8,&l_1893[0]},{&l_1886,&l_1893[0]},{&g_8,(void*)0},{&g_8,&l_1893[0]},{&l_1886,&l_1893[0]}},{{&g_8,(void*)0},{&g_8,&l_1893[0]},{&l_1886,&l_1893[0]},{&g_8,(void*)0},{&g_8,&l_1893[0]},{&l_1886,&l_1893[0]}}};
                    uint32_t l_2235 = 8UL;
                    int32_t ****l_2241 = &g_1380;
                    int i, j, k;
                    l_2221 |= (safe_rshift_func_uint8_t_u_s(p_31, (safe_mul_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((l_2220[2][1][0] &= ((safe_add_func_int32_t_s_s(((void*)0 == l_2200), (safe_rshift_func_uint8_t_u_s(((*l_2012) = (safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((l_2209[2] = g_2207) != &l_2102), 4)), p_30))), (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((void*)0 != l_2214) <= (safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s((l_2219 , p_32), p_32)), 0L))), 5L)), p_31)))))) != g_383)), 0x4DCDL)) ^ l_2189) | 2L), p_30))));
                    (*l_2073) = &l_1884;
                    l_2235++;
                    (*l_2073) = func_68((((g_383 = (safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s(p_30)) <= p_30), (g_276 = ((*l_2121) == (*l_2121)))))) , l_2241) == l_2102), (*l_2073), ((((0xD9A1A9977C867514LL <= (safe_lshift_func_uint16_t_u_s(p_30, 4))) >= p_30) >= l_1800) , (void*)0));
                }
                else
                {
                    const uint16_t * const l_2275[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_2276[3];
                    int32_t l_2301 = (-2L);
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2276[i] = 0xF6DB5412L;
                    for (g_383 = 0; (g_383 <= (-17)); g_383 = safe_sub_func_uint32_t_u_u(g_383, 1))
                    {
                        const uint32_t l_2259 = 0UL;
                        int32_t *l_2261 = &l_2232;
                        int16_t **l_2272[8];
                        const int16_t l_2277 = 0x73E0L;
                        int i;
                        for (i = 0; i < 8; i++)
                            l_2272[i] = &l_2187;
                        (*l_2261) = ((((safe_sub_func_int64_t_s_s(0xDCAE6E412C891581LL, (safe_mul_func_int16_t_s_s(7L, 0xBD3AL)))) , ((safe_sub_func_int16_t_s_s((-8L), p_32)) , (safe_mul_func_uint16_t_u_u((((*l_2012) = ((safe_mul_func_uint8_t_u_u((*g_734), 255UL)) & (!p_31))) == (l_1887 = p_30)), (-2L))))) || l_2259) & l_2260);
                        (*g_109) = func_68((**g_225), ((l_2189 , (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u(0x12L, (((((p_30 , ((safe_div_func_uint32_t_u_u((l_2220[2][1][0] ^ ((safe_lshift_func_int8_t_s_u((((**l_2214) == (l_2274[0] = (l_2273 = l_2272[2]))) ^ l_2220[0][0][0]), 5)) , p_32)), g_2152)) == p_30)) , 0x72E16BA47B32368CLL) , l_2188) == l_2275[4]) ^ l_2276[1]))) , 0x4CA3L), l_2220[2][1][0])), l_2277))) , l_2261), &l_2276[1]);
                        if (l_2278)
                            continue;
                    }
                    l_2301 ^= (safe_unary_minus_func_int8_t_s(((safe_rshift_func_uint8_t_u_s(0x74L, 1)) , ((safe_mul_func_int16_t_s_s(((safe_add_func_int8_t_s_s((l_1882 = ((+((void*)0 == &g_225)) >= (safe_rshift_func_uint8_t_u_s(((((p_31 & (safe_mod_func_int32_t_s_s((safe_div_func_int32_t_s_s(((l_2276[0] = l_2276[1]) <= 0xC1B2FF16L), ((safe_rshift_func_uint16_t_u_s(l_2220[1][1][0], ((*g_491) = (safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u((((((((p_31 | ((((**g_225) = ((1UL & 0x08ED8320268F4FE8LL) != p_32)) >= (*g_1600)) , 0x9BCDC6D2L)) && 0x4F5187AD356B2590LL) && l_2007[6]) | 5L) >= 0xE4L) || 0xA9L) || l_2230), p_32)), p_31))))) , p_30))), 4L))) , g_1853[6][1][1]) ^ 0UL) && p_30), p_31)))), (-1L))) != g_1523), 1UL)) , g_344[2][0]))));
                    for (g_302 = 0; (g_302 > 14); g_302++)
                    {
                        if (p_31)
                            break;
                    }
                }
                for (l_1881 = 8; (l_1881 >= 0); l_1881 -= 1)
                {
                    uint8_t l_2304[10] = {0xD0L,0xD0L,0xD0L,0xD0L,0xD0L,0xD0L,0xD0L,0xD0L,0xD0L,0xD0L};
                    int32_t l_2319 = 0L;
                    int32_t l_2321[6];
                    int8_t *l_2348 = &g_137[0];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_2321[i] = 5L;
                    --l_2304[2];
                    if ((l_1893[0] = l_2040[l_1881]))
                    {
                        int32_t *l_2307 = &l_2231;
                        int i;
                        l_2308 = func_68(l_2007[l_1881], &l_2226, ((*g_109) = l_2307));
                        return g_289;
                    }
                    else
                    {
                        int64_t l_2309 = (-1L);
                        int32_t l_2310 = 0x1A9DD9FFL;
                        int32_t *l_2311 = &l_2229;
                        int32_t *l_2312 = (void*)0;
                        int32_t *l_2313 = &l_2220[2][1][0];
                        int32_t *l_2314 = &l_2221;
                        int32_t *l_2315 = (void*)0;
                        int32_t *l_2316 = &g_87;
                        int32_t *l_2317 = &g_926;
                        int32_t *l_2318[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_2318[i] = &g_926;
                        ++l_2322;
                        (*l_2316) = (((***g_1742) = (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(l_2109, p_32)), 1))) && ((safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((****l_2122) = ((*l_2188) = ((safe_lshift_func_uint8_t_u_s(((~(!(((***g_1742) = (safe_lshift_func_int8_t_s_u((-8L), (safe_add_func_int32_t_s_s((0x10B6L ^ (safe_rshift_func_uint16_t_u_u(p_31, 12))), ((*l_2308) = ((((l_2321[1] = l_2343) ^ (safe_sub_func_uint64_t_u_u((((void*)0 == l_2346) != (((*l_2346) = p_32) || l_2347)), 18446744073709551613UL))) , l_2348) != &l_2260))))))) && p_32))) >= 255UL), l_2040[l_1881])) > 0x741BCB00L))), p_32)), l_2170)) && (**g_167)));
                        return p_30;
                    }
                }
            }
        }
        for (g_1139 = 0; (g_1139 > 19); g_1139++)
        {
            int32_t l_2351 = (-1L);
            return l_2351;
        }
        (*g_109) = &l_1893[0];
    }
    l_2356--;
    l_2359 = (((*l_2352) |= ((*g_655) == l_2091[0][0][0])) , (p_32 , 1L));
    (*g_109) = &l_1891;
    return p_32;
}







static int8_t func_43(int64_t p_44, int64_t * p_45)
{
    int32_t *l_64 = &g_8;
    int32_t l_1126[10][5][1] = {{{0L},{(-1L)},{0x51660F32L},{2L},{2L}},{{0x51660F32L},{(-1L)},{0L},{0x51660F32L},{0L}},{{(-1L)},{0x51660F32L},{2L},{2L},{0x51660F32L}},{{(-1L)},{0L},{0x51660F32L},{0L},{(-1L)}},{{0x51660F32L},{2L},{2L},{0x51660F32L},{(-1L)}},{{0L},{0x51660F32L},{0L},{(-1L)},{0x51660F32L}},{{2L},{2L},{0x51660F32L},{(-1L)},{0L}},{{0x51660F32L},{0L},{(-1L)},{0x51660F32L},{2L}},{{2L},{0x51660F32L},{(-1L)},{0L},{0x51660F32L}},{{0L},{(-1L)},{0x51660F32L},{2L},{2L}}};
    int16_t l_1142 = 0L;
    const uint16_t *l_1237[4];
    int16_t *****l_1317 = (void*)0;
    int16_t *** const *l_1319[6][10][3] = {{{(void*)0,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{(void*)0,(void*)0,&g_1186},{&g_1186,(void*)0,&g_1186},{&g_1186,(void*)0,&g_1186},{&g_1186,&g_1186,(void*)0},{&g_1186,&g_1186,&g_1186},{(void*)0,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{(void*)0,(void*)0,&g_1186}},{{&g_1186,(void*)0,&g_1186},{&g_1186,(void*)0,&g_1186},{&g_1186,&g_1186,(void*)0},{&g_1186,&g_1186,&g_1186},{(void*)0,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{(void*)0,(void*)0,&g_1186},{&g_1186,(void*)0,&g_1186},{&g_1186,(void*)0,&g_1186},{&g_1186,&g_1186,(void*)0}},{{&g_1186,&g_1186,&g_1186},{(void*)0,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{(void*)0,(void*)0,&g_1186},{&g_1186,(void*)0,&g_1186},{&g_1186,(void*)0,&g_1186},{&g_1186,&g_1186,(void*)0},{&g_1186,&g_1186,&g_1186},{(void*)0,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186}},{{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186}},{{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186}},{{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186},{&g_1186,&g_1186,&g_1186}}};
    int16_t *** const **l_1318 = &l_1319[5][7][2];
    int32_t * const * const l_1353 = &g_656;
    int32_t * const * const *l_1352[2];
    uint64_t * const l_1366 = &g_143;
    int32_t ***l_1462 = &g_109;
    int64_t ***l_1474 = &g_225;
    int64_t l_1552 = (-1L);
    int64_t l_1605[9];
    int16_t l_1683 = 0xD40FL;
    uint32_t l_1704 = 0x5CECA8C0L;
    uint8_t l_1727 = 0x5AL;
    uint64_t **l_1770 = &g_1600;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1237[i] = &g_1139;
    for (i = 0; i < 2; i++)
        l_1352[i] = &l_1353;
    for (i = 0; i < 9; i++)
        l_1605[i] = 0x5F0D31FEC9BED8A8LL;
lbl_1664:
    for (p_44 = 0; (p_44 != (-23)); p_44 = safe_sub_func_uint16_t_u_u(p_44, 1))
    {
        int32_t *l_54 = &g_8;
        int8_t *l_1124 = (void*)0;
        int8_t *l_1125 = &g_137[0];
        int32_t l_1138 = 7L;
        uint8_t l_1149 = 1UL;
        const int32_t *l_1176[1];
        const int32_t **l_1175 = &l_1176[0];
        const int32_t ***l_1174[5] = {&l_1175,&l_1175,&l_1175,&l_1175,&l_1175};
        int16_t ***l_1185[10][8][3] = {{{&g_490,&g_490,&g_490},{(void*)0,(void*)0,&g_490},{&g_490,&g_490,&g_490},{(void*)0,(void*)0,(void*)0},{&g_490,&g_490,&g_490},{&g_490,(void*)0,(void*)0},{&g_490,&g_490,&g_490},{(void*)0,&g_490,&g_490}},{{&g_490,&g_490,&g_490},{&g_490,(void*)0,&g_490},{&g_490,&g_490,&g_490},{(void*)0,&g_490,(void*)0},{&g_490,&g_490,&g_490},{(void*)0,(void*)0,&g_490},{&g_490,&g_490,&g_490},{(void*)0,(void*)0,&g_490}},{{&g_490,&g_490,&g_490},{(void*)0,(void*)0,(void*)0},{&g_490,&g_490,&g_490},{&g_490,(void*)0,(void*)0},{&g_490,&g_490,&g_490},{(void*)0,&g_490,&g_490},{&g_490,&g_490,&g_490},{&g_490,(void*)0,&g_490}},{{&g_490,&g_490,&g_490},{(void*)0,&g_490,(void*)0},{&g_490,&g_490,&g_490},{(void*)0,(void*)0,&g_490},{&g_490,&g_490,&g_490},{(void*)0,(void*)0,&g_490},{&g_490,&g_490,&g_490},{(void*)0,&g_490,(void*)0}},{{&g_490,&g_490,&g_490},{(void*)0,(void*)0,(void*)0},{&g_490,&g_490,&g_490},{&g_490,(void*)0,(void*)0},{&g_490,&g_490,&g_490},{(void*)0,&g_490,&g_490},{&g_490,&g_490,&g_490},{(void*)0,(void*)0,&g_490}},{{&g_490,&g_490,&g_490},{&g_490,(void*)0,&g_490},{&g_490,&g_490,&g_490},{&g_490,&g_490,(void*)0},{&g_490,&g_490,&g_490},{(void*)0,&g_490,(void*)0},{&g_490,&g_490,&g_490},{(void*)0,(void*)0,(void*)0}},{{&g_490,&g_490,&g_490},{&g_490,(void*)0,(void*)0},{&g_490,&g_490,&g_490},{(void*)0,&g_490,&g_490},{&g_490,&g_490,&g_490},{(void*)0,(void*)0,&g_490},{&g_490,&g_490,&g_490},{&g_490,(void*)0,&g_490}},{{&g_490,&g_490,&g_490},{&g_490,&g_490,(void*)0},{&g_490,&g_490,&g_490},{(void*)0,&g_490,(void*)0},{&g_490,&g_490,&g_490},{(void*)0,(void*)0,(void*)0},{&g_490,&g_490,&g_490},{&g_490,(void*)0,(void*)0}},{{&g_490,&g_490,&g_490},{(void*)0,&g_490,&g_490},{&g_490,&g_490,&g_490},{(void*)0,(void*)0,&g_490},{&g_490,&g_490,&g_490},{&g_490,(void*)0,&g_490},{&g_490,&g_490,&g_490},{&g_490,&g_490,(void*)0}},{{&g_490,&g_490,&g_490},{(void*)0,&g_490,(void*)0},{&g_490,&g_490,&g_490},{(void*)0,(void*)0,(void*)0},{&g_490,&g_490,&g_490},{&g_490,(void*)0,(void*)0},{&g_490,&g_490,&g_490},{(void*)0,&g_490,&g_490}}};
        int32_t l_1189[3];
        uint32_t l_1294 = 0UL;
        const uint64_t *l_1312 = &g_104;
        const uint64_t **l_1311[5][8][6] = {{{&l_1312,&l_1312,&l_1312,&l_1312,&l_1312,&l_1312},{&l_1312,&l_1312,&l_1312,&l_1312,&l_1312,(void*)0},{(void*)0,(void*)0,&l_1312,&l_1312,&l_1312,&l_1312},{&l_1312,&l_1312,&l_1312,&l_1312,&l_1312,&l_1312},{&l_1312,(void*)0,&l_1312,&l_1312,&l_1312,&l_1312},{&l_1312,&l_1312,&l_1312,&l_1312,&l_1312,&l_1312},{&l_1312,&l_1312,&l_1312,&l_1312,&l_1312,&l_1312},{&l_1312,(void*)0,&l_1312,&l_1312,&l_1312,&l_1312}},{{&l_1312,&l_1312,&l_1312,&l_1312,(void*)0,&l_1312},{&l_1312,&l_1312,&l_1312,(void*)0,&l_1312,&l_1312},{&l_1312,&l_1312,&l_1312,&l_1312,&l_1312,(void*)0},{(void*)0,&l_1312,(void*)0,&l_1312,(void*)0,&l_1312},{&l_1312,&l_1312,&l_1312,&l_1312,&l_1312,&l_1312},{&l_1312,(void*)0,&l_1312,&l_1312,(void*)0,&l_1312},{(void*)0,(void*)0,&l_1312,&l_1312,&l_1312,&l_1312},{(void*)0,&l_1312,&l_1312,(void*)0,(void*)0,&l_1312}},{{&l_1312,&l_1312,&l_1312,&l_1312,&l_1312,&l_1312},{&l_1312,&l_1312,&l_1312,&l_1312,&l_1312,&l_1312},{&l_1312,&l_1312,&l_1312,&l_1312,(void*)0,&l_1312},{&l_1312,&l_1312,&l_1312,&l_1312,&l_1312,&l_1312},{&l_1312,(void*)0,&l_1312,&l_1312,(void*)0,&l_1312},{&l_1312,(void*)0,&l_1312,&l_1312,&l_1312,&l_1312},{&l_1312,&l_1312,&l_1312,&l_1312,(void*)0,&l_1312},{&l_1312,&l_1312,&l_1312,&l_1312,&l_1312,&l_1312}},{{(void*)0,&l_1312,&l_1312,&l_1312,&l_1312,&l_1312},{&l_1312,&l_1312,(void*)0,&l_1312,(void*)0,(void*)0},{&l_1312,&l_1312,&l_1312,&l_1312,&l_1312,&l_1312},{&l_1312,(void*)0,&l_1312,&l_1312,(void*)0,&l_1312},{&l_1312,(void*)0,&l_1312,&l_1312,&l_1312,&l_1312},{&l_1312,&l_1312,&l_1312,&l_1312,(void*)0,&l_1312},{&l_1312,&l_1312,&l_1312,(void*)0,&l_1312,&l_1312},{&l_1312,&l_1312,&l_1312,&l_1312,&l_1312,(void*)0}},{{(void*)0,&l_1312,(void*)0,&l_1312,(void*)0,&l_1312},{&l_1312,&l_1312,&l_1312,&l_1312,&l_1312,&l_1312},{&l_1312,(void*)0,&l_1312,&l_1312,(void*)0,&l_1312},{(void*)0,(void*)0,&l_1312,&l_1312,&l_1312,&l_1312},{(void*)0,&l_1312,&l_1312,(void*)0,(void*)0,&l_1312},{&l_1312,&l_1312,&l_1312,&l_1312,&l_1312,&l_1312},{&l_1312,&l_1312,&l_1312,&l_1312,&l_1312,(void*)0},{&l_1312,(void*)0,&l_1312,&l_1312,&l_1312,&l_1312}}};
        const uint64_t *** const l_1310[10][1][5] = {{{&l_1311[1][0][0],&l_1311[1][0][0],&l_1311[1][0][0],&l_1311[1][0][0],(void*)0}},{{(void*)0,&l_1311[1][4][2],&l_1311[1][0][0],&l_1311[1][4][2],(void*)0}},{{(void*)0,&l_1311[1][0][0],&l_1311[1][0][0],&l_1311[1][0][0],&l_1311[1][0][0]}},{{&l_1311[1][0][0],(void*)0,&l_1311[4][2][3],&l_1311[1][4][2],&l_1311[4][2][3]}},{{&l_1311[1][0][0],&l_1311[1][5][3],&l_1311[3][3][3],&l_1311[1][0][0],&l_1311[1][0][0]}},{{&l_1311[3][2][2],&l_1311[1][4][2],&l_1311[3][2][2],(void*)0,(void*)0}},{{&l_1311[1][0][0],(void*)0,&l_1311[1][0][0],&l_1311[1][5][3],(void*)0}},{{&l_1311[1][0][0],&l_1311[1][4][2],&l_1311[0][5][1],&l_1311[1][4][2],&l_1311[1][0][0]}},{{(void*)0,&l_1311[1][5][3],&l_1311[1][0][0],(void*)0,&l_1311[1][0][0]}},{{(void*)0,(void*)0,&l_1311[3][2][2],&l_1311[1][4][2],&l_1311[3][2][2]}}};
        const uint64_t *** const *l_1309 = &l_1310[2][0][1];
        int32_t l_1391 = (-1L);
        int32_t **l_1411[4];
        int32_t *** const l_1410 = &l_1411[3];
        int32_t *** const *l_1409 = &l_1410;
        uint8_t *l_1441 = &g_140;
        const uint32_t *l_1444 = &g_1445;
        uint16_t * const l_1460 = &g_344[3][3];
        int8_t l_1515 = 0x27L;
        int32_t *l_1585[7][3][6] = {{{&l_1189[0],&g_87,&l_1126[4][4][0],&l_1189[0],&g_253,(void*)0},{(void*)0,&l_1126[4][4][0],&l_1189[0],&l_1189[0],&l_1189[0],&l_1189[0]},{&l_1189[0],&l_1126[9][0][0],&l_1126[9][0][0],&l_1189[0],&g_926,&l_1189[0]}},{{&l_1189[0],(void*)0,(void*)0,(void*)0,&l_1189[0],&l_1189[0]},{&g_253,&l_1189[0],&g_926,&l_1138,&l_1189[0],&g_87},{&g_926,(void*)0,&l_1189[0],(void*)0,&g_926,&l_1138}},{{&g_926,&l_1126[9][0][0],(void*)0,&l_1189[0],&l_1189[0],&g_253},{(void*)0,&l_1126[4][4][0],&g_926,&l_1126[9][0][0],&g_253,&g_253},{&l_1138,&g_87,(void*)0,(void*)0,&g_87,&l_1138}},{{&g_253,(void*)0,&l_1189[0],&l_1189[0],&g_926,&g_87},{(void*)0,&g_926,&g_926,(void*)0,&l_1189[0],&l_1189[0]},{(void*)0,&l_1189[0],(void*)0,&l_1189[0],(void*)0,&l_1189[0]}},{{&g_253,&g_926,&l_1126[9][0][0],(void*)0,&l_1189[0],&l_1189[0]},{&l_1138,&l_1189[0],&l_1189[0],&l_1126[9][0][0],&g_253,(void*)0},{(void*)0,&l_1189[0],&l_1126[4][4][0],&l_1189[0],&l_1189[0],&l_1126[4][4][0]}},{{&g_926,&g_926,&l_1189[0],(void*)0,(void*)0,(void*)0},{&g_926,&l_1189[0],&l_1189[0],&l_1138,&l_1189[0],&l_1189[0]},{&g_253,&g_926,&l_1189[0],(void*)0,&g_926,(void*)0}},{{&l_1189[0],(void*)0,&l_1189[0],&l_1189[0],&g_87,&l_1126[4][4][0]},{&l_1189[0],&g_87,&l_1126[4][4][0],&l_1189[0],&g_253,(void*)0},{(void*)0,&l_1126[4][4][0],&l_1189[0],&l_1189[0],&l_1189[0],&l_1189[0]}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1176[i] = &g_383;
        for (i = 0; i < 3; i++)
            l_1189[i] = 0x9C51EF7FL;
        for (i = 0; i < 4; i++)
            l_1411[i] = &g_656;
    }
    for (g_1523 = 0; (g_1523 < 52); ++g_1523)
    {
        int16_t ** const *l_1611 = &g_490;
        int16_t ** const **l_1610[3];
        int32_t l_1612 = (-1L);
        int32_t l_1622 = 0xB1B64413L;
        int32_t l_1624 = 0L;
        int32_t l_1627 = 1L;
        int32_t l_1628 = 0xFD93BDA9L;
        int8_t l_1728 = (-1L);
        int8_t l_1767 = 0xC7L;
        int i;
        for (i = 0; i < 3; i++)
            l_1610[i] = &l_1611;
    }
    if (p_44)
        goto lbl_1664;
    return p_44;
}







static uint16_t func_55(int64_t p_56, int32_t p_57, uint32_t p_58, uint16_t p_59)
{
    int32_t *l_894 = &g_253;
    const uint8_t *l_920 = &g_429;
    int32_t l_947[1];
    uint8_t l_968 = 2UL;
    uint64_t ***l_971[7][5][7] = {{{&g_831[3],(void*)0,&g_831[3],&g_831[1],&g_831[3],&g_831[2],(void*)0},{&g_831[1],&g_831[3],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_831[0],&g_831[0],(void*)0,&g_831[2],(void*)0,&g_831[2],&g_831[2]},{&g_831[0],(void*)0,&g_831[3],(void*)0,&g_831[0],(void*)0,&g_831[3]},{&g_831[0],&g_831[0],(void*)0,&g_831[3],&g_831[1],&g_831[3],&g_831[2]}},{{(void*)0,&g_831[2],&g_831[0],&g_831[2],&g_831[2],&g_831[1],&g_831[0]},{&g_831[0],&g_831[3],&g_831[0],(void*)0,&g_831[0],&g_831[1],(void*)0},{&g_831[0],&g_831[2],&g_831[3],&g_831[0],&g_831[1],&g_831[0],&g_831[0]},{&g_831[0],(void*)0,&g_831[2],&g_831[1],&g_831[0],&g_831[0],&g_831[3]},{(void*)0,&g_831[0],&g_831[1],&g_831[3],&g_831[3],&g_831[1],&g_831[0]}},{{(void*)0,&g_831[0],&g_831[2],(void*)0,(void*)0,&g_831[1],&g_831[0]},{&g_831[0],(void*)0,(void*)0,(void*)0,&g_831[0],&g_831[3],&g_831[3]},{&g_831[0],&g_831[0],&g_831[0],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_831[3],&g_831[2],&g_831[3],&g_831[1],&g_831[2],&g_831[3]},{&g_831[0],&g_831[2],&g_831[3],&g_831[1],&g_831[3],(void*)0,&g_831[0]}},{{&g_831[3],&g_831[2],&g_831[3],&g_831[0],&g_831[0],&g_831[0],&g_831[0]},{(void*)0,&g_831[3],&g_831[3],(void*)0,(void*)0,&g_831[0],(void*)0},{&g_831[0],&g_831[0],&g_831[1],&g_831[2],(void*)0,&g_831[0],&g_831[2]},{&g_831[0],(void*)0,&g_831[3],&g_831[3],(void*)0,(void*)0,(void*)0},{(void*)0,&g_831[0],&g_831[0],(void*)0,&g_831[1],(void*)0,&g_831[0]}},{{(void*)0,&g_831[0],&g_831[2],&g_831[2],&g_831[0],&g_831[3],&g_831[0]},{(void*)0,(void*)0,&g_831[0],(void*)0,&g_831[0],&g_831[1],&g_831[3]},{(void*)0,&g_831[2],&g_831[1],&g_831[0],&g_831[1],&g_831[2],(void*)0},{&g_831[0],&g_831[3],&g_831[0],&g_831[1],(void*)0,&g_831[1],&g_831[3]},{&g_831[0],&g_831[2],&g_831[1],(void*)0,(void*)0,&g_831[1],&g_831[0]}},{{(void*)0,&g_831[0],&g_831[0],&g_831[0],(void*)0,(void*)0,&g_831[0]},{&g_831[0],(void*)0,&g_831[1],(void*)0,&g_831[0],&g_831[0],&g_831[3]},{&g_831[0],&g_831[0],&g_831[0],&g_831[0],&g_831[3],(void*)0,&g_831[0]},{&g_831[0],&g_831[3],&g_831[2],(void*)0,(void*)0,(void*)0,(void*)0},{&g_831[3],&g_831[2],&g_831[3],&g_831[0],&g_831[3],&g_831[3],(void*)0}},{{&g_831[3],&g_831[1],&g_831[2],(void*)0,&g_831[2],&g_831[0],&g_831[0]},{&g_831[2],&g_831[1],&g_831[0],&g_831[2],&g_831[3],&g_831[3],&g_831[0]},{&g_831[1],(void*)0,&g_831[1],&g_831[3],&g_831[0],(void*)0,&g_831[0]},{(void*)0,&g_831[0],&g_831[2],&g_831[3],&g_831[1],&g_831[3],(void*)0},{&g_831[0],(void*)0,&g_831[3],&g_831[3],&g_831[0],&g_831[3],&g_831[2]}}};
    int64_t l_981 = (-1L);
    int32_t l_1024 = 0x293F15C7L;
    int16_t *l_1031 = &g_557;
    const int16_t *l_1091 = &g_302;
    const int16_t **l_1090 = &l_1091;
    const int16_t ***l_1089[8][1][5] = {{{&l_1090,&l_1090,&l_1090,&l_1090,&l_1090}},{{&l_1090,&l_1090,&l_1090,&l_1090,&l_1090}},{{&l_1090,&l_1090,&l_1090,&l_1090,&l_1090}},{{&l_1090,&l_1090,&l_1090,&l_1090,&l_1090}},{{&l_1090,&l_1090,&l_1090,&l_1090,&l_1090}},{{&l_1090,&l_1090,(void*)0,&l_1090,&l_1090}},{{&l_1090,&l_1090,&l_1090,&l_1090,&l_1090}},{{&l_1090,&l_1090,&l_1090,&l_1090,&l_1090}}};
    const int16_t ****l_1088 = &l_1089[1][0][0];
    int32_t l_1093 = 0x41716C2DL;
    int32_t **l_1115 = &g_656;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_947[i] = 0x849E26D5L;
    l_894 = ((*g_109) = l_894);
    for (g_140 = 2; (g_140 <= 40); g_140 = safe_add_func_int32_t_s_s(g_140, 6))
    {
        int32_t l_914 = (-1L);
        int32_t l_949 = 0x658E02CBL;
        int32_t l_950 = 0xE42C29AEL;
        int32_t l_952 = 0xC4F633D6L;
        int32_t l_953 = (-3L);
        int32_t l_954 = 0L;
        int32_t l_957 = 0x2DB4FF31L;
        int32_t l_960[2];
        int8_t l_967 = 0x85L;
        uint32_t l_982 = 4294967287UL;
        int32_t **l_997[7] = {&g_110[2],&g_110[2],&l_894,&g_110[2],&g_110[2],&l_894,&g_110[2]};
        int32_t l_1033 = 0L;
        uint8_t *l_1077 = &g_140;
        int16_t l_1079 = (-1L);
        const int16_t *****l_1092 = &l_1088;
        int16_t l_1094 = (-1L);
        int8_t *l_1095 = &g_980[7];
        int32_t * const *l_1116 = &g_656;
        int i;
        for (i = 0; i < 2; i++)
            l_960[i] = (-6L);
        for (g_289 = 0; (g_289 >= (-30)); g_289--)
        {
            uint8_t l_907 = 0x30L;
            const int32_t *l_927[4][4] = {{&g_253,&g_926,&g_926,&g_253},{&g_253,&g_926,&g_926,&g_253},{&g_253,&g_926,&g_926,&g_253},{&g_253,&g_926,&g_926,&g_253}};
            int32_t l_938 = 0xE4BEA779L;
            int32_t l_955 = 0xE15D010FL;
            int32_t l_956 = 0xE225EC84L;
            int32_t l_958 = 7L;
            int32_t l_959 = 0x6F8A54BBL;
            int8_t l_961 = 0x1CL;
            int32_t l_962 = 0xDF940BBBL;
            int32_t l_963 = (-3L);
            int32_t l_966 = (-1L);
            int32_t l_1023 = 0L;
            int32_t l_1034 = (-5L);
            int32_t l_1035 = 0x2C36DD9EL;
            int i, j;
            for (g_87 = 0; (g_87 == 16); g_87++)
            {
                int32_t *l_901 = (void*)0;
                int32_t *l_902 = &g_253;
                int32_t *l_903 = (void*)0;
                int32_t *l_904 = &g_253;
                int32_t *l_905 = &g_253;
                int32_t *l_906 = &g_253;
                const uint8_t * const *l_932 = &g_734;
                int32_t l_948[10] = {0x97DEFACEL,(-2L),0x97DEFACEL,0x97DEFACEL,(-2L),0x97DEFACEL,0x97DEFACEL,(-2L),0x97DEFACEL,0x97DEFACEL};
                int16_t l_964 = 0x70CDL;
                int32_t l_965[8][9] = {{8L,1L,0x7A0DE5F1L,0L,1L,1L,1L,0L,0x7A0DE5F1L},{0x7D185BFBL,0x7D185BFBL,0xA269E0F1L,0x234E18AEL,8L,1L,0x7A0DE5F1L,0L,1L},{(-8L),5L,1L,0x7D185BFBL,0x53633011L,0x53633011L,0x7D185BFBL,1L,5L},{0x53633011L,0x06C5008BL,0xA269E0F1L,(-10L),0x2BFEF529L,0x234E18AEL,0x7D185BFBL,0x7A0DE5F1L,0L},{0L,(-8L),0x7A0DE5F1L,5L,0x47151673L,5L,0x7A0DE5F1L,(-8L),0L},{0x2BFEF529L,0x06C5008BL,1L,0x47151673L,0x7D185BFBL,5L,1L,0xA269E0F1L,(-8L)},{0x06C5008BL,5L,0x234E18AEL,1L,1L,0x234E18AEL,5L,0x06C5008BL,(-10L)},{0x2BFEF529L,0x7D185BFBL,1L,8L,1L,0x53633011L,0L,0x47151673L,0x7D185BFBL}};
                uint64_t ***l_973 = (void*)0;
                uint8_t l_1036 = 255UL;
                int64_t ***l_1071 = &g_225;
                int i, j;
                ++l_907;
                for (g_244 = 1; (g_244 <= 5); g_244 += 1)
                {
                    uint8_t *l_922[2];
                    const uint8_t * const **l_933 = &l_932;
                    uint64_t *l_939 = &g_104;
                    int32_t l_945[9][5] = {{0xDF1FA876L,0xDF1FA876L,0xDF1FA876L,0xDF1FA876L,0xDF1FA876L},{(-6L),1L,(-6L),1L,(-6L)},{0xDF1FA876L,0xDF1FA876L,0xDF1FA876L,0xDF1FA876L,0xDF1FA876L},{(-6L),1L,(-6L),1L,(-6L)},{0xDF1FA876L,0xDF1FA876L,0xDF1FA876L,0xDF1FA876L,0xDF1FA876L},{(-6L),1L,(-6L),1L,(-6L)},{0xDF1FA876L,0xDF1FA876L,0xDF1FA876L,0xDF1FA876L,0xDF1FA876L},{(-6L),1L,(-6L),1L,(-6L)},{0xDF1FA876L,0xDF1FA876L,0xDF1FA876L,0xDF1FA876L,0xDF1FA876L}};
                    int8_t l_951 = 0x8AL;
                    int32_t *l_974 = (void*)0;
                    int32_t *l_975 = &l_949;
                    int32_t *l_976 = &l_938;
                    int32_t *l_977 = &l_950;
                    int32_t *l_978 = &l_960[1];
                    int32_t *l_979[1];
                    int32_t l_1032 = 0xE1C63D47L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_922[i] = &l_907;
                    for (i = 0; i < 1; i++)
                        l_979[i] = &l_947[0];
                    for (g_302 = 1; (g_302 <= 5); g_302 += 1)
                    {
                        const uint8_t **l_921 = &l_920;
                        uint16_t *l_923 = &g_924;
                        int32_t *l_925 = &g_926;
                        int i, j;
                        if (g_344[(g_244 + 1)][g_302])
                            break;
                    }
                    if ((p_59 || (p_57 == ((safe_rshift_func_uint8_t_u_u(p_56, ((!((((*l_933) = l_932) == (((safe_sub_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(((*l_939) = (l_938 = p_58)), (0xCE260CAB295CDD38LL && ((p_58 < (safe_div_func_int64_t_s_s(p_57, ((0L & g_253) , (*l_894))))) == (*g_734))))), (*l_894))) <= 1L) , (void*)0)) > p_56)) | l_914))) ^ p_58))))
                    {
                        int32_t *l_942 = &g_253;
                        int32_t *l_943 = &g_253;
                        int32_t *l_944 = (void*)0;
                        int32_t *l_946[1][8] = {{&l_945[6][4],&l_945[6][4],&l_945[6][4],&l_945[6][4],&l_945[6][4],&l_945[6][4],&l_945[6][4],&l_945[6][4]}};
                        uint64_t ****l_972[8] = {&l_971[0][0][2],&l_971[0][0][2],&l_971[0][0][2],&l_971[0][0][2],&l_971[0][0][2],&l_971[0][0][2],&l_971[0][0][2],&l_971[0][0][2]};
                        int i, j;
                        --l_968;
                        l_973 = l_971[0][0][2];
                    }
                    else
                    {
                        (*g_109) = &l_945[3][2];
                    }
                    l_982++;
                }
            }
            l_1023 ^= (&g_656 != (void*)0);
            return g_140;
        }
        if (((*l_894) < (safe_add_func_int8_t_s_s((((safe_sub_func_uint64_t_u_u((l_1077 != (void*)0), (((!l_1079) == ((l_1031 == (*g_490)) && (*g_734))) && ((*l_1095) = (safe_div_func_uint64_t_u_u((l_1094 = (((l_1093 |= (l_947[0] = (safe_mod_func_int32_t_s_s((l_1024 ^= ((safe_lshift_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_u(0x9EL, 0)) != (((*l_1092) = l_1088) != &l_1089[1][0][0])) , (*l_894)) == 1UL), (*l_894))) , 0L)), g_87)))) != (-1L)) >= (*g_734))), (*l_894))))))) > (*l_894)) , p_59), p_56))))
        {
            uint16_t l_1096 = 0x5D92L;
            int32_t * const **l_1117 = &l_1116;
            uint32_t *l_1118[1];
            int32_t l_1119 = (-1L);
            int32_t l_1120 = 8L;
            int i;
            for (i = 0; i < 1; i++)
                l_1118[i] = &g_207;
            l_1096 &= (*l_894);
            l_1093 = ((*l_894) = (247UL || ((safe_rshift_func_uint8_t_u_s(0x20L, 7)) , p_58)));
            l_1119 ^= ((safe_mul_func_uint16_t_u_u((p_59 = ((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((*g_734), (((g_207 |= ((safe_sub_func_int32_t_s_s(p_57, (safe_mod_func_uint32_t_u_u((p_58 = ((safe_mod_func_uint64_t_u_u(((**g_225) != ((((safe_mul_func_uint16_t_u_u((g_1113[2] != &g_1114[2][0][1]), ((*l_1031) = ((**g_490) = l_1096)))) >= (*l_894)) | (l_1115 == ((*l_1117) = l_1116))) ^ 18446744073709551612UL)), 4UL)) && 0L)), g_730[0][0])))) , 0xF9EFCA43L)) > 0x966CF724L) && (*g_226)))), 13)) ^ p_56)), (*l_894))) == (-6L));
            l_1120 ^= l_1119;
        }
        else
        {
            uint32_t l_1123 = 0UL;
            l_1123 = ((*l_894) = (((safe_div_func_uint8_t_u_u(p_56, (*g_734))) , &l_1077) != &l_1077));
        }
    }
    return p_57;
}







static int64_t * func_60(int32_t * p_61, uint64_t p_62, int32_t * p_63)
{
    int32_t *l_893 = &g_253;
    (*l_893) &= (*p_61);
    return (*g_225);
}







static int32_t * func_65(int32_t * p_66, uint16_t p_67)
{
    int64_t *l_102 = &g_47;
    uint64_t *l_103 = &g_104;
    uint8_t l_107 = 3UL;
    int32_t l_108 = 0xDECA365BL;
    int32_t ***l_890 = (void*)0;
    int32_t ***l_891 = &g_109;
    int32_t **l_892 = (void*)0;
    for (p_67 = (-19); (p_67 <= 3); p_67 = safe_add_func_uint16_t_u_u(p_67, 5))
    {
        return &g_8;
    }
    l_892 = ((*l_891) = func_93((((safe_unary_minus_func_int16_t_s(g_87)) != ((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s(0x105CL, (safe_add_func_int32_t_s_s((-7L), g_87)))), (((((((l_102 != &g_47) ^ ((--(*l_103)) < g_87)) | p_67) < ((((((((&g_47 == l_103) , g_8) || 6L) != l_107) && p_67) , g_47) <= 0xFAEF9AD35785F4F6LL) , l_108)) >= 18446744073709551612UL) < l_107) , 1L))) | g_47)) , g_109)));
    return (*g_109);
}







static int32_t * func_68(int64_t p_69, int32_t * p_70, int32_t * p_71)
{
    int32_t l_80 = 0xB996340CL;
    int32_t *l_81 = &l_80;
    int32_t l_82 = 1L;
    int32_t *l_83 = (void*)0;
    int32_t *l_84 = &l_80;
    int32_t *l_85 = &l_82;
    int32_t *l_86[3];
    uint8_t l_88[9][9] = {{0x87L,0xF6L,0x05L,7UL,0x05L,0xF6L,0x87L,0xF6L,0x05L},{0xC6L,0x76L,0x76L,0xC6L,6UL,0x76L,0xE5L,6UL,6UL},{0x22L,0xF6L,8UL,7UL,8UL,0xF6L,0x22L,0xF6L,8UL},{0xC6L,6UL,0x76L,0xE5L,6UL,6UL,0xE5L,0x76L,6UL},{0x87L,0xF6L,0x05L,7UL,0x05L,0xF6L,0x87L,0xF6L,0x05L},{0xC6L,0x76L,0x76L,0xC6L,6UL,0x76L,0xE5L,6UL,6UL},{0x22L,0xF6L,8UL,7UL,8UL,0xF6L,0x22L,0xF6L,8UL},{0xC6L,6UL,0x76L,0xE5L,6UL,6UL,0xE5L,0x76L,6UL},{0x87L,0xF6L,0x05L,7UL,0x05L,0xF6L,0x87L,0xF6L,0x05L}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_86[i] = &l_82;
    --l_88[7][0];
    l_84 = (void*)0;
    return &g_8;
}







static int32_t ** func_93(int32_t ** p_94)
{
    int64_t l_129[7] = {0L,0L,0L,0L,0L,0L,0L};
    int32_t **l_141 = &g_110[1];
    uint8_t *l_150[8] = {&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140};
    int64_t *l_172 = &l_129[2];
    int64_t **l_171 = &l_172;
    const uint8_t **l_265[5][2][10];
    int8_t l_266[9][8][3] = {{{(-4L),0x9CL,(-1L)},{0xB2L,0x93L,0xC5L},{0L,9L,(-6L)},{0x36L,0xC5L,(-1L)},{5L,0x26L,0xEEL},{0x36L,0x32L,(-10L)},{0L,1L,0x9CL},{0xB2L,(-1L),0x1FL}},{{(-4L),0x62L,1L},{0x74L,1L,0L},{0xABL,(-1L),1L},{0xE0L,0xE4L,0xE4L},{0xEEL,0xAFL,0x1BL},{0x33L,0L,0xF0L},{0x40L,0x7EL,1L},{0x93L,(-1L),1L}},{{0x62L,0x7EL,(-2L)},{1L,0L,0x72L},{9L,0xAFL,9L},{(-10L),0xE4L,0L},{(-1L),9L,1L},{(-1L),1L,0x58L},{(-1L),0L,(-3L)},{(-10L),0x25L,0L}},{{9L,1L,0L},{1L,0x8FL,0x25L},{0x62L,0xB7L,0x50L},{0x93L,0x72L,0x25L},{0x40L,0L,0L},{0x33L,0x13L,0L},{0xEEL,0x1BL,(-3L)},{0xE0L,0x6DL,0x58L}},{{1L,0L,1L},{0x32L,0x6DL,0L},{0xBAL,0x1BL,9L},{0x1FL,0x13L,0x72L},{(-6L),0L,(-2L)},{0xC5L,0x72L,1L},{(-1L),0xB7L,1L},{0xC5L,0x8FL,0xF0L}},{{(-6L),1L,0x1BL},{0x1FL,0x25L,0xE4L},{0xBAL,0L,1L},{0x32L,1L,(-2L)},{1L,9L,1L},{0xE0L,0xE4L,0xE4L},{0xEEL,0xAFL,0x1BL},{0x33L,0L,0xF0L}},{{0x40L,0x7EL,1L},{0x93L,(-1L),1L},{0x62L,0x7EL,(-2L)},{1L,0L,0x72L},{9L,0xAFL,9L},{(-10L),0xE4L,0L},{(-1L),9L,1L},{(-1L),1L,0x58L}},{{(-1L),0L,(-3L)},{(-10L),0x25L,0L},{9L,1L,0L},{1L,0x8FL,0x25L},{0x62L,0xB7L,0x50L},{0x93L,0x72L,0x25L},{0x40L,0L,0L},{0x33L,0x13L,0L}},{{0xEEL,0x1BL,(-3L)},{0xE0L,0x6DL,0x58L},{1L,0L,1L},{0x32L,0x6DL,0L},{0xBAL,0x1BL,9L},{0x1FL,0x13L,0x72L},{(-6L),0L,(-2L)},{0xC5L,0x72L,1L}}};
    int32_t l_277 = (-1L);
    uint8_t l_341 = 0xC3L;
    int64_t l_346 = (-6L);
    uint32_t l_379 = 0x50204655L;
    int16_t *l_380 = &g_302;
    int32_t *l_399 = &g_289;
    int64_t l_443[4][4][5] = {{{1L,0xF4B4AB1370501B56LL,0x6A57F744903F125FLL,(-1L),0x6A57F744903F125FLL},{0L,0L,0L,(-1L),(-1L)},{0xBB8548AEAB73C04DLL,0xF4B4AB1370501B56LL,0xBB8548AEAB73C04DLL,0xD56425BDD8DF834BLL,0x6A57F744903F125FLL},{(-1L),0L,0L,(-1L),0L}},{{0x6A57F744903F125FLL,0xF4B4AB1370501B56LL,1L,0xF4B4AB1370501B56LL,0x6A57F744903F125FLL},{0L,(-1L),0L,0L,(-1L)},{0x6A57F744903F125FLL,0xD56425BDD8DF834BLL,0xBB8548AEAB73C04DLL,0xF4B4AB1370501B56LL,0xBB8548AEAB73C04DLL},{(-1L),(-1L),0L,(-1L),(-1L)}},{{0xBB8548AEAB73C04DLL,0xF4B4AB1370501B56LL,0xBB8548AEAB73C04DLL,0xD56425BDD8DF834BLL,0x6A57F744903F125FLL},{(-1L),0L,0L,(-1L),0L},{0x6A57F744903F125FLL,0xF4B4AB1370501B56LL,1L,0xF4B4AB1370501B56LL,0x6A57F744903F125FLL},{0L,(-1L),0L,0L,(-1L)}},{{0x6A57F744903F125FLL,0xD56425BDD8DF834BLL,0xBB8548AEAB73C04DLL,0xF4B4AB1370501B56LL,0xBB8548AEAB73C04DLL},{(-1L),(-1L),0L,(-1L),(-1L)},{0xBB8548AEAB73C04DLL,0xF4B4AB1370501B56LL,0xBB8548AEAB73C04DLL,0xD56425BDD8DF834BLL,0x6A57F744903F125FLL},{(-1L),0L,0L,(-1L),0L}}};
    uint32_t l_494 = 9UL;
    uint32_t l_510[4][7][3] = {{{4294967295UL,0UL,0UL},{0xD14A2290L,0UL,0x4807318AL},{1UL,4294967295UL,4294967295UL},{0xD14A2290L,0xD14A2290L,4294967295UL},{4294967295UL,1UL,0x4807318AL},{0UL,0xD14A2290L,0UL},{0UL,4294967295UL,0xD14A2290L}},{{4294967295UL,0UL,0UL},{0xD14A2290L,0UL,0x4807318AL},{1UL,4294967295UL,4294967295UL},{0xD14A2290L,0xD14A2290L,4294967295UL},{4294967295UL,1UL,0x4807318AL},{0UL,0xD14A2290L,0UL},{0UL,4294967295UL,0xD14A2290L}},{{4294967295UL,0UL,0UL},{0xD14A2290L,0UL,0x4807318AL},{1UL,4294967295UL,4294967295UL},{0xD14A2290L,0xD14A2290L,4294967295UL},{4294967295UL,1UL,0x4807318AL},{0UL,0xD14A2290L,0UL},{0UL,4294967295UL,0xD14A2290L}},{{4294967295UL,0UL,0UL},{0xD14A2290L,0UL,0x4807318AL},{1UL,4294967295UL,4294967295UL},{0xD14A2290L,0xD14A2290L,4294967295UL},{4294967295UL,1UL,0x4807318AL},{0UL,0xD14A2290L,0UL},{0UL,4294967295UL,0xD14A2290L}}};
    uint32_t l_530 = 0UL;
    const uint16_t *l_609 = &g_610;
    int32_t l_616 = (-1L);
    const uint32_t l_779[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
    int32_t l_787 = (-1L);
    int32_t l_788 = 9L;
    int32_t l_789[6];
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
                l_265[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 6; i++)
        l_789[i] = (-4L);
    for (g_104 = (-20); (g_104 <= 34); g_104 = safe_add_func_int32_t_s_s(g_104, 3))
    {
        const uint64_t l_138[10] = {0x821FDCAA3977A87ELL,0x821FDCAA3977A87ELL,0x821FDCAA3977A87ELL,0x821FDCAA3977A87ELL,0x821FDCAA3977A87ELL,0x821FDCAA3977A87ELL,0x821FDCAA3977A87ELL,0x821FDCAA3977A87ELL,0x821FDCAA3977A87ELL,0x821FDCAA3977A87ELL};
        uint8_t **l_198 = (void*)0;
        int32_t l_210 = 0L;
        int64_t ** const l_220 = (void*)0;
        int64_t ** const *l_219[4];
        int32_t l_254[2];
        const uint32_t l_273 = 0x19D5E563L;
        int16_t *l_349 = &g_302;
        int32_t *l_408 = (void*)0;
        int64_t l_451 = 1L;
        uint8_t *l_554 = &g_140;
        int32_t l_558 = (-1L);
        uint32_t l_584 = 0xC15BFF42L;
        int32_t l_605[4][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
        uint16_t l_618 = 0x38A2L;
        uint32_t *l_643 = (void*)0;
        uint32_t *l_644 = &l_530;
        uint64_t *l_645 = &g_549;
        int8_t l_686 = 0xAAL;
        uint32_t l_692 = 0x80A275DAL;
        uint8_t **l_758 = &l_150[6];
        uint32_t l_790 = 18446744073709551611UL;
        int16_t l_794 = 1L;
        int i, j;
        for (i = 0; i < 4; i++)
            l_219[i] = &l_220;
        for (i = 0; i < 2; i++)
            l_254[i] = 0xE25F498FL;
        for (g_87 = (-21); (g_87 > (-19)); g_87++)
        {
            int64_t l_123 = 0xC054819E5EE4ADB8LL;
            int64_t *l_131 = &l_129[1];
            int64_t **l_130 = &l_131;
            int8_t *l_136 = &g_137[0];
            uint8_t *l_139 = &g_140;
            uint64_t *l_142[3];
            int32_t l_144[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
            uint32_t l_145 = 1UL;
            uint16_t l_165 = 0UL;
            int32_t **l_201 = &g_110[5];
            int i;
            for (i = 0; i < 3; i++)
                l_142[i] = &g_143;
        }
        for (g_87 = 0; (g_87 > 9); g_87 = safe_add_func_uint64_t_u_u(g_87, 1))
        {
            int64_t l_206 = 8L;
            int64_t ***l_217[10];
            int8_t *l_218 = &g_137[0];
            uint64_t *l_236[1][7][4] = {{{&g_104,&g_104,(void*)0,(void*)0},{&g_104,&g_104,(void*)0,(void*)0},{&g_104,&g_104,(void*)0,(void*)0},{&g_104,&g_104,(void*)0,(void*)0},{&g_104,&g_104,(void*)0,(void*)0},{&g_104,&g_104,(void*)0,(void*)0},{&g_104,&g_104,(void*)0,(void*)0}}};
            int32_t l_251 = 9L;
            int32_t l_282 = 0x59119C35L;
            uint32_t l_287[8][5] = {{18446744073709551615UL,0x774277A1L,0x82C05EC3L,0x82C05EC3L,0x774277A1L},{0x2F168FF3L,6UL,18446744073709551615UL,0UL,0x774277A1L},{0UL,0x1DE2C0B9L,18446744073709551615UL,18446744073709551615UL,0x445BDC18L},{6UL,18446744073709551615UL,1UL,0xC82AA6F4L,0xC82AA6F4L},{0UL,18446744073709551615UL,0UL,1UL,7UL},{0x2F168FF3L,18446744073709551615UL,0x071142A2L,6UL,0x1DE2C0B9L},{18446744073709551615UL,18446744073709551615UL,0xC82AA6F4L,18446744073709551615UL,0x2F168FF3L},{0x82C05EC3L,0x1DE2C0B9L,0x071142A2L,0x1DE2C0B9L,0x82C05EC3L}};
            uint64_t l_345 = 1UL;
            uint16_t *l_382 = &g_244;
            uint8_t l_391 = 0x25L;
            uint8_t l_423 = 0UL;
            int32_t l_430[7];
            int32_t l_497 = 0L;
            int16_t l_531 = 0L;
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_217[i] = &l_171;
            for (i = 0; i < 7; i++)
                l_430[i] = 0xA6FDFDF9L;
        }
        for (l_210 = 0; (l_210 > (-25)); l_210--)
        {
            uint8_t l_541 = 0xE1L;
            uint64_t l_548 = 1UL;
            int32_t *l_555 = &l_254[0];
            int16_t *l_556 = &g_557;
            const uint16_t *l_607[7] = {&g_608,&g_608,&g_608,&g_608,&g_608,&g_608,&g_608};
            const uint16_t **l_606[10][4] = {{&l_607[4],(void*)0,&l_607[4],(void*)0},{&l_607[4],(void*)0,&l_607[4],(void*)0},{&l_607[4],(void*)0,&l_607[4],(void*)0},{&l_607[4],(void*)0,&l_607[4],(void*)0},{&l_607[4],(void*)0,&l_607[4],(void*)0},{&l_607[4],(void*)0,&l_607[4],(void*)0},{&l_607[4],(void*)0,&l_607[4],(void*)0},{&l_607[4],(void*)0,&l_607[4],(void*)0},{&l_607[4],(void*)0,&l_607[4],(void*)0},{&l_607[4],(void*)0,&l_607[4],(void*)0}};
            int32_t l_617 = 0x8E52504DL;
            int i, j;
            if ((((**l_141) && (!(l_558 = (safe_mod_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(l_541, 0x83L)) <= (((((((*l_556) = ((safe_mod_func_int16_t_s_s(((*l_349) = (-1L)), (safe_mod_func_int32_t_s_s(((*l_555) |= (safe_mul_func_int16_t_s_s(l_541, ((l_548 |= g_429) == (g_549 < ((safe_lshift_func_uint8_t_u_s((1L | (safe_div_func_uint8_t_u_u(((((**l_141) , 0x51BAE55CL) , l_554) != &l_541), 0xAFL))), (**l_141))) , (**l_141))))))), l_541)))) <= (-2L))) & 0x1912L) ^ g_8) , (*l_555)) && (**l_141)) & g_143)), (**l_141)))))) > g_289))
            {
                uint16_t l_559 = 65529UL;
                l_559--;
                if ((**p_94))
                    continue;
            }
            else
            {
                uint64_t *l_603 = &l_548;
                uint64_t **l_602 = &l_603;
                int32_t l_604 = 0x3965B6BDL;
                for (g_557 = 0; (g_557 < (-15)); g_557 = safe_sub_func_int8_t_s_s(g_557, 5))
                {
                    uint64_t l_568 = 2UL;
                    int32_t l_575 = 0x058CCB2FL;
                    if ((safe_unary_minus_func_int8_t_s(l_558)))
                    {
                        int32_t *l_583[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_583[i] = &g_383;
                        (*l_555) = (((safe_lshift_func_int16_t_s_u((g_140 >= g_253), 13)) , ((0UL | (((!((void*)0 == &l_554)) < 0x2CL) == g_549)) < g_140)) , (g_429 , (**p_94)));
                        (*l_555) = ((l_568 &= 0x68667795B5A58DA1LL) <= (safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((**l_141), (((((safe_lshift_func_uint8_t_u_u(255UL, (l_575 , ((*l_554) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((~(safe_mul_func_int8_t_s_s((((((*g_167) != (*g_167)) , ((l_583[0] == (void*)0) || (*l_555))) || 0x8A87D936L) ^ l_575), 0UL))) < 0x3B1009D2D93F7C3BLL), l_584)), l_575)))))) > (**g_225)) || l_575) , g_207) , 0xCFL))), l_584)));
                        if ((**p_94))
                            continue;
                        return p_94;
                    }
                    else
                    {
                        uint16_t l_591 = 2UL;
                        int8_t *l_599[8][2][8] = {{{&g_137[0],&g_276,&l_266[6][2][1],(void*)0,&g_137[0],&l_266[5][2][2],&l_266[3][4][2],&g_276},{(void*)0,&l_266[3][4][2],(void*)0,&l_266[6][2][1],&l_266[3][4][2],&g_137[0],&g_276,&g_137[0]}},{{&g_276,&l_266[4][0][2],(void*)0,&g_276,&g_137[0],&g_276,&g_276,&g_276},{&g_137[0],&g_137[0],&l_266[6][2][1],&g_137[0],(void*)0,&g_137[0],&l_266[6][2][1],&g_137[0]}},{{&g_276,&g_137[0],(void*)0,&l_266[6][2][1],&g_137[0],&g_137[0],&g_137[0],&l_266[3][4][2]},{&l_266[6][2][1],&l_266[6][2][1],&l_266[1][5][2],(void*)0,&g_276,&g_276,&g_137[0],&g_276}},{{&g_137[0],(void*)0,(void*)0,&g_137[0],&g_137[0],&g_137[0],&l_266[6][2][1],(void*)0},{&g_137[0],&g_137[0],&l_266[6][2][1],(void*)0,&g_137[0],&l_266[1][2][0],&g_276,&g_137[0]}},{{&g_276,&g_276,(void*)0,&g_137[0],&g_137[0],&g_137[0],&g_276,&l_266[6][2][1]},{&g_137[0],(void*)0,(void*)0,&g_137[0],&l_266[0][6][0],&g_137[0],&l_266[3][4][2],(void*)0}},{{(void*)0,&g_137[0],&g_276,&l_266[6][2][1],(void*)0,(void*)0,&l_266[6][2][1],&g_276},{&g_137[0],&g_137[0],&g_276,(void*)0,&g_137[0],&l_266[6][2][1],(void*)0,&g_137[0]}},{{(void*)0,(void*)0,&g_276,&l_266[1][5][2],&l_266[6][2][1],&l_266[6][2][1],(void*)0,&g_137[0]},{(void*)0,&g_137[0],(void*)0,(void*)0,&g_137[0],&g_137[0],&l_266[6][2][1],&g_276}},{{&l_266[1][2][0],&g_137[0],(void*)0,&l_266[6][2][1],&g_137[0],&g_137[0],&g_137[0],(void*)0},{&l_266[2][4][1],&l_266[6][2][1],&g_137[0],(void*)0,&l_266[5][2][2],&g_137[0],(void*)0,&g_137[0]}}};
                        uint64_t *l_601 = &g_143;
                        uint64_t **l_600[2][6][10] = {{{&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601},{&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601},{&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601},{&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601},{&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601},{&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601}},{{&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601},{&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601},{&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601},{&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601},{&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601},{&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601}}};
                        int i, j, k;
                        (*p_94) = func_68((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(l_591, (((g_143 ^= ((safe_mod_func_int8_t_s_s(((((((~(((((g_302 , (**l_141)) <= (safe_mul_func_int16_t_s_s((((l_591 , (safe_lshift_func_int8_t_s_s((((*g_168) | l_568) && (((l_602 = (((*l_555) = l_591) , l_600[1][2][5])) == &l_601) & l_604)), 1))) ^ l_604) ^ (**l_141)), g_104))) < l_591) > (**l_141)) <= (-1L))) || l_591) >= (**l_141)) , g_429) , 0x69573B8F1B8B2D22LL) && l_605[0][0]), l_575)) && l_604)) < l_591) == 0xB106C3EFL))), 0xF4L)), (**l_141))), &l_575, &l_604);
                    }
                }
            }
            if ((**p_94))
                continue;
            if ((&g_491 == ((((((*l_171) == (*l_171)) < ((*l_555) = (**p_94))) , &g_344[2][5]) != (l_609 = &g_244)) , &l_556)))
            {
                uint32_t l_611 = 0xD9FDEA11L;
                int32_t l_614 = (-4L);
                int32_t *l_615[8][1] = {{&l_605[0][0]},{&l_605[1][0]},{&l_605[0][0]},{&l_605[1][0]},{&l_605[0][0]},{&l_605[1][0]},{&l_605[0][0]},{&l_605[1][0]}};
                int i, j;
                (*l_555) = (&g_344[4][3] != l_349);
                l_611++;
                l_618++;
            }
            else
            {
                return p_94;
            }
            (*l_141) = (*p_94);
        }
        if (((+(((safe_add_func_int8_t_s_s((!g_137[0]), (l_558 = ((safe_rshift_func_uint8_t_u_u((l_605[0][0] = ((safe_sub_func_uint16_t_u_u(0x3C7CL, (l_254[0] = l_254[0]))) != ((*l_645) = ((safe_mod_func_uint32_t_u_u(((*l_644) = (safe_sub_func_int32_t_s_s(0x0971A9CFL, ((((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((**l_141), 0)) <= (((((**g_490) < (&l_150[6] == (((safe_rshift_func_uint8_t_u_s((**l_141), ((safe_sub_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((((2UL <= 0x23948133653A6F66LL) > 0x54L) < g_140) , 7UL), 1UL)) <= l_605[3][1]), g_104)) == (**g_109)))) , g_104) , &l_554))) != (**l_141)) , g_344[7][0]) <= g_253)), (**l_141))) , g_289) , l_210) ^ (**l_141))))), l_210)) > l_605[0][0])))), 4)) == l_138[5])))) != (**l_141)) ^ (**l_141))) && l_605[1][0]))
        {
            uint32_t l_659 = 6UL;
            int32_t *l_660 = &l_210;
            (*l_660) = (((((safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((**g_490), (((!(safe_div_func_int32_t_s_s((p_94 != &g_200), (**p_94)))) > ((**l_141) | (safe_rshift_func_int8_t_s_u(((void*)0 == g_655), 7)))) & ((((*l_645) = (l_254[1] = (((safe_rshift_func_uint8_t_u_s((**l_141), (0xD905ACEAL | (**p_94)))) != l_659) & l_618))) , (**g_225)) , 0x089EL)))) >= l_273), (**l_141))) , 3UL) ^ (**p_94)) == l_659) >= g_137[0]);
            if ((**g_109))
                continue;
        }
        else
        {
            int8_t l_685 = 0x60L;
            int8_t *l_687 = &g_276;
            int8_t *l_688[1][1];
            const int32_t l_689 = 0x3D4F77B1L;
            int32_t l_740[3][1][8] = {{{(-1L),(-1L),0xFBA0FF1FL,(-1L),(-1L),0xFBA0FF1FL,(-1L),(-1L)}},{{(-2L),(-1L),(-2L),(-2L),(-1L),(-2L),0xFBA0FF1FL,(-2L)}},{{(-2L),0xFBA0FF1FL,0xFBA0FF1FL,(-2L),0xFBA0FF1FL,0xFBA0FF1FL,(-2L),0xFBA0FF1FL}}};
            int16_t *l_752 = &g_753;
            uint8_t l_795 = 246UL;
            int32_t l_832 = 0x8A06E6DFL;
            const uint8_t **l_859 = &g_734;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_688[i][j] = &l_266[6][2][1];
            }
            for (g_383 = 0; (g_383 < (-21)); --g_383)
            {
                uint32_t l_665[2];
                int32_t l_673 = 0xD1329FDFL;
                int i;
                for (i = 0; i < 2; i++)
                    l_665[i] = 7UL;
                for (g_549 = 0; (g_549 < 30); g_549 = safe_add_func_int64_t_s_s(g_549, 7))
                {
                    int8_t l_672 = 0x79L;
                    int32_t **l_674 = (void*)0;
                    int32_t ***l_675 = &g_109;
                    --l_665[0];
                    l_673 ^= (safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(g_140, 4)), l_672));
                    (*l_675) = l_674;
                    if ((**p_94))
                        break;
                }
                return &g_110[1];
            }
            if (((((safe_div_func_int64_t_s_s((&l_408 != &l_399), ((**l_171) = (**l_141)))) , (void*)0) == (((((g_137[0] = ((*l_687) ^= (65526UL && ((((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(0x4058L, ((+((l_685 >= (**l_141)) != ((**p_94) , (**l_141)))) < 0L))), 1)), 14)) || l_686) < 4L) >= 0xDEF0L)))) , 0xBA4605DFL) , g_244) , 0xB42C9955L) , (void*)0)) > l_689))
            {
                const int32_t *l_690 = &l_689;
                const int32_t **l_691 = &l_690;
                int32_t l_700 = 0xAEDD278AL;
                uint64_t l_726 = 0UL;
                int32_t l_727 = 7L;
                l_692 |= (((*l_691) = l_690) == &l_689);
                for (l_584 = 0; (l_584 <= 7); l_584 += 1)
                {
                    int64_t l_718 = 0xE19A43D3EC3060F4LL;
                    for (l_277 = 7; (l_277 >= 2); l_277 -= 1)
                    {
                        int16_t l_725 = 0xCF97L;
                        l_727 &= ((safe_mul_func_uint16_t_u_u((((~((safe_mod_func_int16_t_s_s((((safe_mod_func_int64_t_s_s(((**l_141) , l_700), ((safe_mod_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((((((safe_add_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(0x495EL, (safe_add_func_uint32_t_u_u(((((safe_mod_func_uint8_t_u_u(((&l_380 != &l_349) < l_138[1]), (((safe_mod_func_uint64_t_u_u((safe_unary_minus_func_int8_t_s(((((safe_lshift_func_int8_t_s_s(l_718, 1)) >= (((((*l_644) |= (safe_mul_func_int16_t_s_s((*g_491), (safe_mod_func_int8_t_s_s(((((safe_add_func_int16_t_s_s(0x0EA0L, l_718)) , 0x3DF84ACC2E609E4DLL) ^ l_718) , 1L), l_692))))) <= g_276) , l_618) <= 1UL)) , 0UL) , g_47))), l_725)) , g_137[0]) && l_725))) != l_689) == 65529UL) | 6L), (**p_94))))) == (*g_168)), l_726)) | 0xAAB6L) != l_685) , (void*)0) != (void*)0), l_685)) || 0x8CL), g_610)) || l_685))) , l_718) > 0xFC39L), l_254[1])) , 0x9CBE9C67E829E378LL)) > l_725) , (**l_141)), 0x3EBFL)) , (**p_94));
                        (*p_94) = (*p_94);
                        if ((**p_94))
                            continue;
                        if (l_725)
                            continue;
                    }
                }
            }
            else
            {
                const int32_t *l_729 = &g_730[0][0];
                const int32_t **l_728 = &l_729;
                const int32_t **l_731 = (void*)0;
                const int32_t *l_733 = &l_558;
                const int32_t **l_732 = &l_733;
                int32_t l_739[9][2][1] = {{{0L},{0L}},{{(-8L)},{0xD70E8C39L}},{{(-8L)},{(-8L)}},{{(-8L)},{0xD70E8C39L}},{{(-8L)},{0L}},{{0L},{(-8L)}},{{0xD70E8C39L},{(-8L)}},{{(-8L)},{(-8L)}},{{0xD70E8C39L},{(-8L)}}};
                int16_t *l_754[3][2] = {{&g_753,&g_753},{&g_753,&g_753},{&g_753,&g_753}};
                int16_t *l_755 = &g_753;
                int32_t *l_759 = &l_210;
                int i, j, k;
                (*l_732) = ((*l_728) = (*p_94));
                if ((**p_94))
                    continue;
                for (l_451 = 1; (l_451 >= 0); l_451 -= 1)
                {
                    int32_t *l_735 = &l_254[l_451];
                    int32_t *l_736 = (void*)0;
                    int32_t *l_737 = (void*)0;
                    int32_t *l_738[9] = {&l_605[l_451][l_451],&g_253,&l_605[l_451][l_451],&g_253,&l_605[l_451][l_451],&g_253,&l_605[l_451][l_451],&g_253,&l_605[l_451][l_451]};
                    uint32_t l_741 = 0UL;
                    int16_t *l_748[7][1][9] = {{{&g_557,&g_557,&g_557,&g_557,&g_557,&g_557,&g_557,&g_557,&g_557}},{{&g_557,&g_557,&g_557,&g_557,&g_557,&g_557,&g_557,&g_557,&g_557}},{{&g_557,(void*)0,&g_557,(void*)0,(void*)0,&g_557,(void*)0,&g_557,&g_557}},{{&g_557,&g_557,&g_557,&g_557,&g_557,&g_557,&g_557,&g_557,&g_557}},{{&g_557,&g_557,&g_557,&g_557,&g_557,&g_557,&g_557,&g_557,&g_557}},{{&g_557,(void*)0,&g_557,(void*)0,(void*)0,&g_557,(void*)0,&g_557,&g_557}},{{&g_557,&g_557,&g_557,&g_557,&g_557,&g_557,&g_557,&g_557,&g_557}}};
                    uint64_t *l_749 = &g_143;
                    int16_t **l_756 = (void*)0;
                    int16_t **l_757 = &l_380;
                    int i, j, k;
                    for (l_494 = 0; l_494 < 5; l_494 += 1)
                    {
                        for (g_549 = 0; g_549 < 2; g_549 += 1)
                        {
                            for (l_618 = 0; l_618 < 10; l_618 += 1)
                            {
                                l_265[l_494][g_549][l_618] = &g_734;
                            }
                        }
                    }
                    l_741--;
                    l_277 = (((((l_605[(l_451 + 1)][l_451] == (safe_lshift_func_int16_t_s_u((g_557 = (l_254[1] = ((**g_490) = 0L))), 7))) != l_685) , g_549) < (((**p_94) < ((++(*l_749)) > ((l_754[2][1] = l_752) == (l_349 = ((*l_757) = (l_755 = (void*)0)))))) >= ((&g_734 == l_758) < 0x3F547D04L))) != l_689);
                }
                (*l_759) = (**p_94);
            }
            for (g_549 = 0; (g_549 == 53); ++g_549)
            {
                uint64_t l_764 = 18446744073709551615UL;
                int32_t *l_770 = &g_383;
                const uint16_t **l_771 = &l_609;
                int32_t l_780 = 0x93F71312L;
                int32_t l_781 = 0xCDA98A19L;
                int32_t l_782[9] = {0xE460E97DL,1L,0xE460E97DL,1L,0xE460E97DL,1L,0xE460E97DL,1L,0xE460E97DL};
                uint64_t **l_830[6][6][7] = {{{&l_645,&l_645,&l_645,(void*)0,(void*)0,&l_645,&l_645},{&l_645,&l_645,(void*)0,(void*)0,&l_645,&l_645,(void*)0},{&l_645,(void*)0,&l_645,&l_645,&l_645,&l_645,&l_645},{(void*)0,(void*)0,(void*)0,(void*)0,&l_645,&l_645,(void*)0},{(void*)0,&l_645,&l_645,(void*)0,&l_645,&l_645,(void*)0},{&l_645,(void*)0,&l_645,&l_645,&l_645,&l_645,&l_645}},{{(void*)0,&l_645,&l_645,(void*)0,&l_645,&l_645,&l_645},{&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645},{&l_645,(void*)0,&l_645,&l_645,(void*)0,&l_645,&l_645},{(void*)0,&l_645,&l_645,&l_645,(void*)0,&l_645,&l_645},{&l_645,&l_645,&l_645,(void*)0,&l_645,&l_645,&l_645},{&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645}},{{&l_645,&l_645,&l_645,&l_645,&l_645,(void*)0,&l_645},{&l_645,(void*)0,&l_645,&l_645,&l_645,(void*)0,&l_645},{&l_645,&l_645,(void*)0,&l_645,&l_645,&l_645,&l_645},{(void*)0,&l_645,(void*)0,&l_645,&l_645,(void*)0,&l_645},{&l_645,&l_645,(void*)0,&l_645,&l_645,&l_645,&l_645},{&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645}},{{&l_645,&l_645,&l_645,&l_645,&l_645,(void*)0,&l_645},{&l_645,&l_645,&l_645,&l_645,(void*)0,(void*)0,&l_645},{&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645},{&l_645,&l_645,(void*)0,&l_645,&l_645,&l_645,&l_645},{&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645},{(void*)0,&l_645,&l_645,&l_645,&l_645,(void*)0,(void*)0}},{{&l_645,&l_645,&l_645,&l_645,&l_645,(void*)0,&l_645},{(void*)0,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645},{&l_645,&l_645,(void*)0,(void*)0,&l_645,&l_645,&l_645},{(void*)0,&l_645,&l_645,(void*)0,&l_645,(void*)0,&l_645},{&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645},{(void*)0,&l_645,&l_645,&l_645,&l_645,(void*)0,&l_645}},{{&l_645,&l_645,(void*)0,&l_645,&l_645,(void*)0,&l_645},{&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645},{&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645},{&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645},{&l_645,&l_645,(void*)0,&l_645,&l_645,&l_645,&l_645},{&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645}}};
                uint8_t **l_858 = &l_150[5];
                int32_t *l_877 = &g_8;
                int i, j, k;
                if ((((((safe_div_func_int16_t_s_s(1L, (((((((l_764 & (~((safe_add_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(0x7BB6L, (**l_141))) , l_770) == (l_408 = l_770)), ((*l_752) = (((void*)0 != l_771) | (safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((**g_490) < l_740[1][0][6]), 0x2AC250F4L)), 65535UL)))))) == l_764))) , (*g_491)) < l_740[2][0][2]) >= g_383) || l_210) | 4294967295UL) , (*g_491)))) != (-1L)) ^ 0x4D1C0B6F4E3C8FFCLL) , l_605[0][1]) & 0xE9C3L))
                {
                    int32_t *l_776[1];
                    uint64_t *l_816 = &l_764;
                    int16_t **l_817 = &g_491;
                    int32_t **l_820 = (void*)0;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_776[i] = &l_277;
                    l_616 = (**p_94);
                    for (g_244 = 0; (g_244 > 9); g_244++)
                    {
                        int32_t l_783 = 0x4A9CD06AL;
                        int32_t l_784 = 0L;
                        int32_t l_785 = 0xCB587300L;
                        int32_t l_786[4] = {9L,9L,9L,9L};
                        int64_t l_793 = 0L;
                        int32_t **l_807 = &l_776[0];
                        uint16_t *l_810 = (void*)0;
                        uint16_t *l_811 = &g_344[4][0];
                        int i;
                        l_616 = (l_779[0] | (&p_94 == (g_730[0][0] , &g_109)));
                        ++l_790;
                        ++l_795;
                        (**l_807) |= (safe_rshift_func_uint16_t_u_u(((((((*l_554)++) && (safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(0L, (!(&l_776[0] != l_807)))), l_764))) < l_780) >= (safe_add_func_int64_t_s_s((*g_168), l_618))) , g_8), ((*l_811)--)));
                    }
                    l_782[2] = ((safe_add_func_int64_t_s_s((((*l_816) = 4UL) >= 0x3B2C689F353B80B1LL), (g_833 = (((l_817 == l_817) || (l_740[1][0][3] == (((safe_sub_func_int32_t_s_s((&g_656 != l_820), ((((safe_add_func_uint16_t_u_u(((!1L) && (safe_mul_func_int8_t_s_s((l_832 |= ((((((((*l_172) = (safe_mul_func_int8_t_s_s((((safe_mul_func_int8_t_s_s(g_104, 0L)) != 0x9B388B909BB94EF9LL) , (**l_141)), l_605[0][0]))) | 0xFD25B76F890A2411LL) && 0x94L) , l_689) , (**p_94)) , l_830[1][4][4]) == g_831[0])), 0x0FL))), 0x155FL)) > (-3L)) , 0x3FDDL) , 0xB5369158L))) || l_795) || l_782[0]))) , l_740[1][0][6])))) || l_605[2][0]);
                }
                else
                {
                    int32_t *l_836 = &l_558;
                    uint16_t *l_857 = &l_618;
                    uint16_t l_873 = 65535UL;
                    (*l_836) &= (safe_lshift_func_int8_t_s_s((-6L), 1));
                    for (g_833 = 0; (g_833 != 29); ++g_833)
                    {
                        uint8_t l_843 = 255UL;
                        uint16_t *l_844 = (void*)0;
                        uint16_t *l_845 = &l_618;
                        int32_t *l_855 = (void*)0;
                        int32_t *l_856 = &l_789[3];
                        (*l_856) &= (((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(l_843, 12)), 0x65A78786B0F65478LL)) >= (((*l_836) = (*l_836)) , (*g_168))) >= ((((*l_845) = g_730[0][0]) , ((safe_unary_minus_func_int64_t_s((l_781 == 0xC735977FL))) != (safe_add_func_uint64_t_u_u(((safe_div_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(g_253, ((((safe_lshift_func_uint8_t_u_s(l_843, l_843)) && (**p_94)) != l_843) , l_843))) < l_740[0][0][2]), l_843)) , 0xE50DF66DE99F1DB8LL), (**g_225))))) < g_47));
                    }
                    if ((((*l_857) = 0xB4A5L) | (l_858 == l_859)))
                    {
                        (*p_94) = (*p_94);
                        (*l_836) = (-2L);
                    }
                    else
                    {
                        uint64_t *l_865 = &g_104;
                        int32_t l_876 = (-9L);
                        (*g_109) = func_68(l_689, ((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u(((l_865 == (void*)0) <= (safe_sub_func_int32_t_s_s((((((**g_490) = ((1UL >= l_605[0][0]) , (safe_sub_func_uint16_t_u_u((((+(safe_sub_func_int64_t_s_s(((l_873 = 0UL) && ((**p_94) != g_344[4][5])), (l_210 = (safe_mod_func_int32_t_s_s((**p_94), l_692)))))) , (*l_836)) ^ l_876), 0xFB26L)))) || 0xE4D3L) , l_740[2][0][2]) & (**p_94)), (*l_836)))))), (**l_141))), l_876)) , &l_254[1]), l_877);
                    }
                }
            }
        }
    }
    for (g_383 = (-15); (g_383 <= (-20)); g_383 = safe_sub_func_uint8_t_u_u(g_383, 6))
    {
        int32_t *l_880[10][1][7];
        uint64_t l_881 = 0x00D86BC9A2D1634BLL;
        int i, j, k;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 7; k++)
                    l_880[i][j][k] = &l_787;
            }
        }
        l_881--;
        for (l_881 = 0; (l_881 == 29); l_881 = safe_add_func_uint64_t_u_u(l_881, 8))
        {
            for (l_277 = 24; (l_277 != 16); l_277 = safe_sub_func_int8_t_s_s(l_277, 4))
            {
                if ((**g_109))
                    break;
            }
        }
        for (g_140 = 0; (g_140 == 35); g_140 = safe_add_func_uint16_t_u_u(g_140, 3))
        {
            if ((**p_94))
                break;
        }
        return &g_110[1];
    }
    return l_141;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_137[i], "g_137[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_344[i][j], "g_344[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_429, "g_429", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_557, "g_557", print_hash_value);
    transparent_crc(g_608, "g_608", print_hash_value);
    transparent_crc(g_610, "g_610", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_730[i][j], "g_730[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_753, "g_753", print_hash_value);
    transparent_crc(g_833, "g_833", print_hash_value);
    transparent_crc(g_924, "g_924", print_hash_value);
    transparent_crc(g_926, "g_926", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_980[i], "g_980[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1025, "g_1025", print_hash_value);
    transparent_crc(g_1139, "g_1139", print_hash_value);
    transparent_crc(g_1147, "g_1147", print_hash_value);
    transparent_crc(g_1292, "g_1292", print_hash_value);
    transparent_crc(g_1307, "g_1307", print_hash_value);
    transparent_crc(g_1335, "g_1335", print_hash_value);
    transparent_crc(g_1445, "g_1445", print_hash_value);
    transparent_crc(g_1467, "g_1467", print_hash_value);
    transparent_crc(g_1501, "g_1501", print_hash_value);
    transparent_crc(g_1523, "g_1523", print_hash_value);
    transparent_crc(g_1705, "g_1705", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1853[i][j][k], "g_1853[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2152, "g_2152", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2190[i], "g_2190[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2654, "g_2654", print_hash_value);
    transparent_crc(g_2660, "g_2660", print_hash_value);
    transparent_crc(g_2918, "g_2918", print_hash_value);
    transparent_crc(g_3152, "g_3152", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
