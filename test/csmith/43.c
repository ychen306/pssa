// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = EEEEDBF6
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
   uint32_t f0;
   uint64_t f1;
   int8_t f2;
   uint64_t f3;
   int8_t f4;
};
#pragma pack(pop)


static int32_t g_2 = 0xA2768935L;
static int32_t g_6 = 0xA73D2D67L;
static int8_t g_62[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static struct S0 g_65 = {4294967288UL,0UL,4L,0UL,0xA9L};
static struct S0 *g_64 = &g_65;
static int32_t g_69 = (-6L);
static int32_t *g_68 = &g_69;
static int64_t g_71 = (-9L);
static int64_t g_73 = 6L;
static struct S0 g_105 = {0xF3FAEFD0L,0xEA4B618F96B43B7ALL,0L,0x3FE56077E5926A32LL,0x4DL};
static uint16_t g_110 = 0x9AC4L;
static uint64_t g_111 = 0xA9519D3F86503DD1LL;
static int32_t g_115[7] = {0x8DA45BD7L,0x8DA45BD7L,0x8DA45BD7L,0x8DA45BD7L,0x8DA45BD7L,0x8DA45BD7L,0x8DA45BD7L};
static int16_t g_134 = 0xF27EL;
static uint8_t g_136 = 0xFAL;
static int8_t *g_156[2][1] = {{(void*)0},{(void*)0}};
static int8_t *g_157[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint32_t g_178 = 18446744073709551615UL;
static int8_t g_197 = 0x35L;
static int64_t g_202 = (-10L);
static uint32_t g_206 = 4294967286UL;
static int32_t g_211 = (-4L);
static struct S0 *g_218 = &g_105;
static const int32_t **g_225 = (void*)0;
static const int32_t ***g_224 = &g_225;
static uint8_t g_251 = 4UL;
static uint32_t g_318[2][9] = {{3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL}};
static int32_t g_364 = 1L;
static int64_t g_365 = 0x0BCC946377D892B7LL;
static int32_t g_366 = 0x1D4597B5L;
static int32_t g_367 = 0L;
static uint16_t g_368 = 7UL;
static const int32_t g_375 = 0xE877E8EFL;
static int8_t **g_389 = (void*)0;
static int8_t ***g_388 = &g_389;
static int32_t **g_472[9] = {&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68};
static int32_t ***g_471 = &g_472[1];
static int32_t ***g_475 = &g_472[6];
static int8_t *g_575 = &g_65.f2;
static struct S0 **g_678 = &g_218;
static struct S0 ***g_677 = &g_678;
static uint8_t *g_704 = &g_251;
static uint64_t *g_717 = &g_65.f1;
static uint32_t *g_771 = &g_105.f0;
static uint32_t **g_770 = &g_771;
static uint32_t ***g_769 = &g_770;
static uint32_t ****g_768 = &g_769;
static int64_t *g_823 = (void*)0;
static int64_t **g_822[9][5][5] = {{{&g_823,&g_823,&g_823,(void*)0,&g_823},{&g_823,&g_823,&g_823,&g_823,&g_823},{&g_823,&g_823,&g_823,&g_823,&g_823},{&g_823,&g_823,&g_823,&g_823,&g_823},{&g_823,(void*)0,(void*)0,&g_823,&g_823}},{{&g_823,(void*)0,&g_823,(void*)0,&g_823},{&g_823,&g_823,&g_823,&g_823,&g_823},{(void*)0,&g_823,&g_823,(void*)0,(void*)0},{(void*)0,&g_823,&g_823,&g_823,(void*)0},{&g_823,&g_823,&g_823,&g_823,&g_823}},{{&g_823,(void*)0,&g_823,&g_823,&g_823},{&g_823,(void*)0,(void*)0,&g_823,&g_823},{&g_823,&g_823,&g_823,(void*)0,&g_823},{&g_823,&g_823,&g_823,&g_823,&g_823},{(void*)0,&g_823,&g_823,&g_823,&g_823}},{{&g_823,&g_823,&g_823,&g_823,&g_823},{&g_823,(void*)0,&g_823,(void*)0,(void*)0},{&g_823,(void*)0,(void*)0,&g_823,&g_823},{&g_823,&g_823,(void*)0,&g_823,&g_823},{&g_823,&g_823,&g_823,&g_823,&g_823}},{{&g_823,&g_823,&g_823,(void*)0,&g_823},{&g_823,&g_823,(void*)0,&g_823,&g_823},{&g_823,(void*)0,&g_823,&g_823,&g_823},{&g_823,(void*)0,&g_823,(void*)0,&g_823},{&g_823,&g_823,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_823,&g_823,&g_823,&g_823},{&g_823,&g_823,&g_823,&g_823,&g_823},{&g_823,&g_823,&g_823,&g_823,&g_823},{&g_823,&g_823,&g_823,&g_823,&g_823},{&g_823,&g_823,&g_823,&g_823,&g_823}},{{&g_823,&g_823,&g_823,&g_823,&g_823},{&g_823,&g_823,(void*)0,&g_823,&g_823},{&g_823,(void*)0,&g_823,&g_823,(void*)0},{&g_823,&g_823,&g_823,&g_823,(void*)0},{&g_823,&g_823,(void*)0,&g_823,&g_823}},{{&g_823,&g_823,&g_823,&g_823,&g_823},{&g_823,&g_823,(void*)0,(void*)0,&g_823},{(void*)0,&g_823,&g_823,&g_823,(void*)0},{&g_823,&g_823,&g_823,&g_823,&g_823},{&g_823,&g_823,&g_823,&g_823,&g_823}},{{&g_823,(void*)0,&g_823,&g_823,&g_823},{&g_823,&g_823,&g_823,(void*)0,&g_823},{&g_823,&g_823,&g_823,(void*)0,(void*)0},{&g_823,&g_823,&g_823,&g_823,&g_823},{&g_823,&g_823,&g_823,&g_823,&g_823}}};
static const int16_t g_912 = 0L;
static uint8_t g_976 = 1UL;
static const int32_t g_988 = 1L;
static uint64_t **g_1009 = &g_717;
static uint64_t ***g_1008[7][6] = {{&g_1009,(void*)0,&g_1009,(void*)0,&g_1009,&g_1009},{&g_1009,&g_1009,&g_1009,&g_1009,(void*)0,&g_1009},{&g_1009,&g_1009,&g_1009,&g_1009,&g_1009,(void*)0},{&g_1009,&g_1009,(void*)0,(void*)0,&g_1009,&g_1009},{&g_1009,&g_1009,(void*)0,&g_1009,(void*)0,&g_1009},{(void*)0,&g_1009,(void*)0,&g_1009,&g_1009,(void*)0},{(void*)0,(void*)0,&g_1009,&g_1009,&g_1009,&g_1009}};
static uint16_t g_1028 = 0x45EFL;
static const int8_t g_1194[10][5] = {{0xCAL,1L,2L,0L,2L},{8L,8L,(-1L),8L,8L},{2L,0L,2L,1L,0xCAL},{8L,0L,0L,8L,0L},{0xCAL,0L,0xEFL,0L,0xCAL},{0L,8L,0L,0L,8L},{0xCAL,1L,2L,0L,2L},{8L,8L,(-1L),8L,8L},{2L,0L,2L,1L,0xCAL},{8L,0L,0L,8L,0L}};
static int8_t g_1198 = 3L;
static int32_t g_1202[10] = {(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)};
static const int32_t g_1427[1][5] = {{0x6CEB1456L,0x6CEB1456L,0x6CEB1456L,0x6CEB1456L,0x6CEB1456L}};
static const int32_t g_1429 = 7L;
static uint16_t *g_1445 = (void*)0;
static int8_t g_1476 = 0xE9L;
static struct S0 *****g_1592 = (void*)0;
static int16_t *g_1598 = &g_134;
static int16_t **g_1597 = &g_1598;
static uint8_t * const * const g_1625[5][7] = {{&g_704,&g_704,&g_704,&g_704,&g_704,&g_704,&g_704},{&g_704,&g_704,&g_704,&g_704,&g_704,&g_704,&g_704},{&g_704,&g_704,&g_704,(void*)0,&g_704,&g_704,&g_704},{&g_704,&g_704,&g_704,&g_704,&g_704,(void*)0,&g_704},{&g_704,&g_704,&g_704,(void*)0,&g_704,(void*)0,&g_704}};
static uint8_t * const * const *g_1624 = &g_1625[1][2];
static const int64_t *g_1660 = &g_73;
static const int64_t **g_1659 = &g_1660;
static uint64_t g_1712 = 7UL;
static int32_t g_1765 = 0L;
static int32_t g_1775 = 0L;
static int64_t g_1827 = (-9L);
static uint64_t g_1829 = 18446744073709551608UL;
static struct S0 g_1848 = {0UL,0x444EB865E3561475LL,0L,18446744073709551615UL,-9L};
static int16_t g_1876[1] = {0L};
static uint8_t **g_1893[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint8_t ** const *g_1892[5] = {&g_1893[0],&g_1893[0],&g_1893[0],&g_1893[0],&g_1893[0]};
static uint32_t g_2153 = 0x6BC27162L;
static int32_t ** const *g_2183 = &g_472[1];
static int32_t ** const **g_2182[5][5][6] = {{{&g_2183,&g_2183,&g_2183,&g_2183,&g_2183,&g_2183},{&g_2183,&g_2183,(void*)0,(void*)0,&g_2183,&g_2183},{&g_2183,&g_2183,(void*)0,&g_2183,(void*)0,&g_2183},{(void*)0,(void*)0,&g_2183,(void*)0,(void*)0,&g_2183},{&g_2183,&g_2183,(void*)0,(void*)0,&g_2183,&g_2183}},{{&g_2183,&g_2183,&g_2183,&g_2183,&g_2183,&g_2183},{(void*)0,(void*)0,(void*)0,&g_2183,(void*)0,&g_2183},{&g_2183,&g_2183,(void*)0,&g_2183,(void*)0,&g_2183},{&g_2183,&g_2183,&g_2183,(void*)0,&g_2183,(void*)0},{&g_2183,(void*)0,&g_2183,&g_2183,(void*)0,&g_2183}},{{&g_2183,(void*)0,&g_2183,&g_2183,&g_2183,&g_2183},{&g_2183,&g_2183,&g_2183,&g_2183,(void*)0,(void*)0},{&g_2183,&g_2183,&g_2183,(void*)0,(void*)0,&g_2183},{&g_2183,(void*)0,&g_2183,&g_2183,&g_2183,&g_2183},{&g_2183,&g_2183,(void*)0,&g_2183,&g_2183,&g_2183}},{{&g_2183,&g_2183,&g_2183,&g_2183,(void*)0,(void*)0},{&g_2183,(void*)0,&g_2183,&g_2183,(void*)0,&g_2183},{(void*)0,&g_2183,&g_2183,&g_2183,&g_2183,&g_2183},{&g_2183,&g_2183,&g_2183,&g_2183,&g_2183,&g_2183},{&g_2183,&g_2183,(void*)0,&g_2183,(void*)0,&g_2183}},{{&g_2183,&g_2183,(void*)0,&g_2183,&g_2183,&g_2183},{&g_2183,&g_2183,&g_2183,&g_2183,&g_2183,&g_2183},{&g_2183,&g_2183,&g_2183,&g_2183,&g_2183,&g_2183},{&g_2183,&g_2183,&g_2183,&g_2183,&g_2183,(void*)0},{&g_2183,&g_2183,&g_2183,&g_2183,&g_2183,&g_2183}}};
static int32_t ** const ***g_2181[2][6] = {{&g_2182[1][0][5],&g_2182[1][4][3],&g_2182[1][0][5],&g_2182[1][0][5],&g_2182[1][4][3],&g_2182[1][0][5]},{&g_2182[1][0][5],&g_2182[1][4][3],&g_2182[1][0][5],&g_2182[1][0][5],&g_2182[1][4][3],&g_2182[1][0][5]}};
static int8_t g_2244 = 0xCAL;
static int8_t g_2274 = 0x1EL;



static int16_t func_1(void);
static struct S0 func_8(uint32_t p_9, int32_t * p_10, int16_t p_11, const int32_t * p_12, struct S0 p_13);
static int8_t func_19(int32_t * p_20, int32_t * p_21);
static struct S0 * func_23(struct S0 * const p_24, struct S0 * p_25);
static uint32_t func_28(int32_t ** p_29, struct S0 p_30);
static int64_t func_31(int16_t p_32);
static int8_t func_35(const int32_t ** p_36);
static const int32_t ** func_37(int64_t p_38, int32_t p_39, uint64_t p_40, int32_t * p_41, int32_t * p_42);
static const int32_t func_44(struct S0 p_45, struct S0 * p_46, int64_t p_47);
static struct S0 * func_49(int8_t p_50, struct S0 * p_51, struct S0 p_52);
# 133 "<stdin>"
static int16_t func_1(void)
{
    int32_t l_17 = 0xBF0A0CD9L;
    int32_t l_1904 = 0xF1F073F1L;
    int32_t l_1911 = 0L;
    int32_t l_1912 = (-1L);
    int32_t l_1917 = (-1L);
    int32_t l_1925 = 0xA720CA45L;
    int8_t l_1928 = (-1L);
    int32_t l_1930[7] = {0x2729529BL,0x2729529BL,0x2729529BL,0x2729529BL,0x2729529BL,0x2729529BL,0x2729529BL};
    uint8_t *l_1941[8] = {&g_976,&g_976,&g_976,&g_976,&g_976,&g_976,&g_976,&g_976};
    uint8_t * const *l_1977 = &l_1941[3];
    struct S0 l_1981[1][8] = {{{0xD75BAD88L,3UL,0x0CL,0x22D45D05F3784E2DLL,3L},{0xD75BAD88L,3UL,0x0CL,0x22D45D05F3784E2DLL,3L},{0xD75BAD88L,3UL,0x0CL,0x22D45D05F3784E2DLL,3L},{0xD75BAD88L,3UL,0x0CL,0x22D45D05F3784E2DLL,3L},{0xD75BAD88L,3UL,0x0CL,0x22D45D05F3784E2DLL,3L},{0xD75BAD88L,3UL,0x0CL,0x22D45D05F3784E2DLL,3L},{0xD75BAD88L,3UL,0x0CL,0x22D45D05F3784E2DLL,3L},{0xD75BAD88L,3UL,0x0CL,0x22D45D05F3784E2DLL,3L}}};
    uint16_t l_2026 = 0x7603L;
    uint8_t l_2061 = 1UL;
    int32_t l_2090[10];
    uint32_t l_2108[4] = {18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL};
    uint16_t l_2215 = 0x59B6L;
    int32_t l_2216 = 1L;
    const int32_t ****l_2240 = &g_224;
    int16_t l_2272 = 5L;
    int32_t *l_2287 = &l_2090[1];
    int i, j;
    for (i = 0; i < 10; i++)
        l_2090[i] = 0xA1BE2514L;
    for (g_2 = 0; (g_2 > (-27)); g_2 = safe_sub_func_int8_t_s_s(g_2, 1))
    {
        int32_t *l_5 = &g_6;
        int32_t l_7[2][5][3] = {{{9L,(-1L),9L},{(-1L),0x0BC5021CL,5L},{(-5L),9L,9L},{5L,(-1L),0x6DDCD166L},{0x2D0DA0BDL,(-5L),0xCC2443ACL}},{{5L,5L,0x7B7F609BL},{(-5L),0x2D0DA0BDL,(-9L)},{(-1L),5L,(-1L)},{9L,(-5L),(-1L)},{0x0BC5021CL,(-1L),(-1L)}}};
        int32_t l_1923 = 1L;
        int i, j, k;
        (*l_5) = g_2;
        for (g_6 = 0; (g_6 <= 1); g_6 += 1)
        {
            int32_t * const l_18[1] = {&l_17};
            int32_t **l_22 = &l_5;
            int8_t *l_1842 = (void*)0;
            int8_t *l_1843 = &g_1476;
            int32_t *l_1845 = (void*)0;
            int32_t **l_1844 = &l_1845;
            int32_t *l_1847 = &g_364;
            int32_t **l_1846 = &l_1847;
            struct S0 l_1895 = {1UL,0x0B90B7B7449711BELL,1L,0x35973DC9FF839785LL,1L};
            int32_t l_1905 = 0x5E35B0A8L;
            int16_t l_1931 = (-10L);
            int i;
        }
    }
    if (l_1928)
    {
        return (**g_1597);
    }
    else
    {
        int32_t *l_1942 = &g_211;
        int32_t l_1943[10] = {7L,0xCBAFA2BCL,7L,0xCBAFA2BCL,7L,0xCBAFA2BCL,7L,0xCBAFA2BCL,7L,0xCBAFA2BCL};
        int32_t *l_1944 = (void*)0;
        int32_t l_1953 = 0x2291FBBEL;
        uint8_t l_1955 = 1UL;
        int8_t l_1982[3][4][1];
        struct S0 *l_1999 = (void*)0;
        int32_t l_2024 = 5L;
        struct S0 l_2028[3][2] = {{{0x67E6AA16L,0x4207647F1A969AC5LL,0xC9L,18446744073709551615UL,-6L},{0x67E6AA16L,0x4207647F1A969AC5LL,0xC9L,18446744073709551615UL,-6L}},{{0x67E6AA16L,0x4207647F1A969AC5LL,0xC9L,18446744073709551615UL,-6L},{0x67E6AA16L,0x4207647F1A969AC5LL,0xC9L,18446744073709551615UL,-6L}},{{0x67E6AA16L,0x4207647F1A969AC5LL,0xC9L,18446744073709551615UL,-6L},{0x67E6AA16L,0x4207647F1A969AC5LL,0xC9L,18446744073709551615UL,-6L}}};
        int8_t l_2107 = 0L;
        int8_t l_2128 = 0x5AL;
        uint64_t **l_2174 = &g_717;
        uint64_t **l_2177 = (void*)0;
        int32_t l_2243 = 0L;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1982[i][j][k] = 9L;
            }
        }
        (**g_475) = (void*)0;
        if ((((*l_1942) &= (safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((*g_575) = (l_1941[2] != (void*)0)), (-2L))), 4L))) , l_1943[1]))
        {
            struct S0 l_1949 = {0xF08D52DFL,0xF8DA81D5A2DC8F3ELL,0x66L,3UL,0x09L};
            l_1944 = (**g_475);
            for (g_134 = 0; (g_134 != (-21)); g_134 = safe_sub_func_uint8_t_u_u(g_134, 7))
            {
                int32_t l_1954 = (-2L);
                const int32_t *l_1958 = &g_1429;
                for (g_1848.f4 = (-28); (g_1848.f4 > (-29)); g_1848.f4--)
                {
                    int32_t *l_1950 = &l_1930[4];
                    int32_t *l_1951 = &l_1930[0];
                    int32_t *l_1952[9][3][3] = {{{&g_69,&g_364,&g_69},{&g_69,&l_1943[1],&g_69},{&l_1930[3],(void*)0,(void*)0}},{{&l_1912,&l_1943[1],&l_1930[1]},{&l_1912,&g_364,&l_1943[1]},{&l_1930[3],&l_1930[1],&l_1930[1]}},{{&g_69,&l_1930[1],(void*)0},{&g_69,&g_364,&g_69},{&g_69,&l_1943[1],&g_69}},{{&l_1930[3],(void*)0,(void*)0},{&l_1912,&l_1943[1],&l_1930[1]},{&l_1912,&g_364,&l_1943[1]}},{{&l_1930[3],&l_1930[1],&l_1930[1]},{&g_69,&l_1930[1],(void*)0},{&g_69,&g_364,&g_69}},{{&g_69,&l_1943[1],&g_69},{&l_1930[3],(void*)0,(void*)0},{&l_1912,&l_1943[1],&l_1930[1]}},{{&l_1912,&g_364,&l_1943[1]},{&l_1930[3],&l_1930[1],&l_1930[1]},{&g_69,&l_1930[1],(void*)0}},{{&g_69,&g_364,&g_69},{&g_69,&l_1943[1],&g_69},{&l_1930[3],(void*)0,(void*)0}},{{&l_1912,&l_1943[1],&l_1930[1]},{&l_1912,&g_364,&l_1943[1]},{&l_1930[3],&l_1930[1],&l_1930[1]}}};
                    int i, j, k;
                    (**g_678) = l_1949;
                    (**g_471) = l_1950;
                    l_1955--;
                }
                for (g_211 = 0; (g_211 <= 6); g_211 += 1)
                {
                    const int32_t **l_1959 = &l_1958;
                    for (g_111 = 1; (g_111 <= 6); g_111 += 1)
                    {
                        int i;
                        return g_1202[g_211];
                    }
                    (*l_1959) = l_1958;
                }
                return (**g_1597);
            }
            l_1943[1] ^= (safe_div_func_int8_t_s_s(l_1912, l_1930[1]));
            for (g_1028 = 0; (g_1028 <= 9); g_1028 += 1)
            {
                int32_t l_1964 = 0xDE881E5EL;
                int i;
                l_1964 &= (g_62[g_1028] | (&g_1660 == &g_823));
            }
        }
        else
        {
            const int16_t l_1980[5] = {3L,3L,3L,3L,3L};
            int32_t l_2025[7][7] = {{(-1L),0x4EEA2A3BL,(-10L),(-1L),(-1L),1L,0x4EEA2A3BL},{0x4B811476L,1L,3L,0x170CD509L,3L,1L,0x4B811476L},{1L,0x4EEA2A3BL,0L,3L,0x4B811476L,1L,3L},{(-1L),(-1L),1L,0x4EEA2A3BL,0x4EEA2A3BL,1L,(-1L)},{0x4EEA2A3BL,0xDB22124FL,0L,0x170CD509L,0xDB22124FL,3L,(-1L)},{0xA39ED080L,0x4EEA2A3BL,3L,0xA39ED080L,(-1L),0xA39ED080L,3L},{0x4B811476L,0x4B811476L,(-10L),0x170CD509L,0x4EEA2A3BL,0xE387FB0BL,0x4B811476L}};
            const int32_t *l_2027 = &l_17;
            int8_t *l_2041 = (void*)0;
            int16_t l_2132[4][7][2] = {{{9L,0x50F6L},{0x7C9CL,9L},{0x7C9CL,9L},{0x1E8FL,0x7C9CL},{0x50F6L,0x50F6L},{0x50F6L,0x7C9CL},{0x1E8FL,9L}},{{0x7C9CL,9L},{0x1E8FL,0x7C9CL},{0x50F6L,0x50F6L},{0x50F6L,0x7C9CL},{0x1E8FL,9L},{0x7C9CL,9L},{0x1E8FL,0x7C9CL}},{{0x50F6L,0x50F6L},{0x50F6L,0x7C9CL},{0x1E8FL,9L},{0x7C9CL,9L},{0x1E8FL,0x7C9CL},{0x50F6L,0x50F6L},{0x50F6L,0x7C9CL}},{{0x1E8FL,9L},{0x7C9CL,9L},{0x1E8FL,0x7C9CL},{0x50F6L,0x50F6L},{0x50F6L,0x7C9CL},{0x1E8FL,9L},{0x7C9CL,9L}}};
            uint64_t *l_2199 = &g_65.f3;
            int32_t l_2217 = 6L;
            int i, j, k;
            for (g_1198 = (-14); (g_1198 > (-27)); g_1198--)
            {
                (**g_475) = &l_1911;
            }
            if (((((safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((((void*)0 != l_1977) || ((safe_sub_func_int8_t_s_s(((l_1980[0] , ((***g_677) = (*g_64))) , 0xCAL), 1UL)) != l_1982[1][1][0])), 0xFB997B5EL)) & 0x5390L) == l_1980[0]), 0x99L)), l_17)) && 0x3CCEL), 1)), (**g_1659))) > l_1980[4]) | l_1980[4]) > 7L))
            {
                int32_t l_1988 = 0x212C1396L;
                int32_t *l_2002 = (void*)0;
                int32_t *l_2003 = (void*)0;
                int32_t *l_2004 = &l_1911;
                uint32_t *l_2021 = &g_178;
                uint32_t l_2047 = 1UL;
                for (g_2 = 20; (g_2 > 12); g_2 = safe_sub_func_uint16_t_u_u(g_2, 4))
                {
                    uint32_t l_1987 = 0x1B75C05CL;
                    int64_t *l_2000 = &g_73;
                    int32_t *l_2001 = &l_1930[0];
                    for (g_364 = 0; (g_364 < 7); g_364 = safe_add_func_int64_t_s_s(g_364, 9))
                    {
                        return l_1987;
                    }
                    if (l_1917)
                        continue;
                    (*l_2001) = (((l_1980[0] || 65528UL) | ((*l_2000) = (((l_1988 == ((+(safe_add_func_uint32_t_u_u((l_1981[0][2].f4 <= ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(g_1848.f3, (((((safe_div_func_uint8_t_u_u(l_1981[0][2].f2, ((!l_1980[0]) , ((l_1917 &= (**g_770)) ^ ((void*)0 != l_1999))))) > l_1987) , l_1980[0]) , l_1980[1]) , l_1980[3]))), l_1912)) == 0x0EB0L)), 8UL))) , l_1987)) <= 0x9A1D9D269DAB1015LL) < l_1912))) <= l_1980[2]);
                }
                if (((*l_2004) = l_1980[2]))
                {
                    int32_t *l_2005 = &l_1904;
                    const uint64_t l_2012 = 18446744073709551614UL;
                    uint32_t *l_2023[9][3] = {{&g_178,&g_178,&g_178},{&g_178,&g_178,(void*)0},{&g_178,(void*)0,(void*)0},{&g_178,&g_178,&g_178},{(void*)0,(void*)0,&g_178},{&g_178,&g_178,&g_178},{&g_178,&g_178,&g_178},{&g_178,(void*)0,(void*)0},{&g_178,&g_178,&g_178}};
                    uint32_t **l_2022 = &l_2023[5][1];
                    struct S0 l_2033 = {0x28D5FEAFL,9UL,0x5DL,0x2B058EFA97F51EF9LL,0x53L};
                    uint8_t ***l_2038 = &g_1893[0];
                    const int16_t l_2048[3][6] = {{0xA6F3L,0xA6F3L,1L,0xA6F3L,0xA6F3L,1L},{0xA6F3L,0xA6F3L,1L,0xA6F3L,0xA6F3L,1L},{0xA6F3L,0xA6F3L,1L,0xA6F3L,0xA6F3L,1L}};
                    int i, j;
                    l_2028[0][0] = func_8(((*g_218) , (*l_2004)), l_2005, (safe_mod_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((*l_2005), (l_2025[6][5] |= (((l_2012 == (((l_1980[1] <= ((safe_lshift_func_uint8_t_u_s((*l_2005), (((*g_704) ^= ((safe_div_func_int16_t_s_s(((safe_mod_func_int64_t_s_s(((l_1942 == ((*l_2022) = (l_2021 = &g_178))) > l_1982[1][1][0]), l_2024)) && l_1981[0][2].f0), (*g_1598))) & (**g_770))) ^ (*g_575)))) < 1L)) > 0xA879L) > (*l_2005))) , 0L) || 0L)))), (*l_2004))) ^ g_1775) == l_2026), (*l_2005))), l_2027, (**g_678));
                    for (g_1848.f2 = 19; (g_1848.f2 <= (-24)); g_1848.f2 = safe_sub_func_uint64_t_u_u(g_1848.f2, 4))
                    {
                        int8_t *l_2042 = &g_1848.f4;
                        l_2025[6][5] |= (safe_lshift_func_int16_t_s_u((l_2033 , (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((((((*g_704) = (*l_2005)) | (safe_unary_minus_func_uint64_t_u((l_2038 != &g_1893[0])))) > (((*l_2027) < (l_2041 == (l_2042 = l_2042))) || (safe_add_func_uint32_t_u_u((*l_2005), (safe_div_func_int32_t_s_s((*l_2005), (**g_770))))))) ^ l_2047))), l_2048[1][3]))), 7));
                        if (l_1917)
                            continue;
                    }
                }
                else
                {
                    int8_t l_2050 = (-4L);
                    int32_t l_2053[8] = {1L,0L,1L,0L,1L,0L,1L,0L};
                    int32_t l_2054 = (-6L);
                    uint32_t l_2055[6][10][1] = {{{0xFA81B22EL},{0xF80B5C32L},{0x7C870D18L},{4294967294UL},{0x7C870D18L},{0xF80B5C32L},{0xFA81B22EL},{4UL},{0x064457BBL},{0x064457BBL}},{{4UL},{0xFA81B22EL},{0xF80B5C32L},{0x7C870D18L},{4294967294UL},{0x7C870D18L},{0xF80B5C32L},{0xFA81B22EL},{4UL},{0x064457BBL}},{{0x064457BBL},{4UL},{0xFA81B22EL},{0xF80B5C32L},{0x7C870D18L},{4294967294UL},{0x7C870D18L},{0xF80B5C32L},{0xFA81B22EL},{4UL}},{{0x064457BBL},{0x064457BBL},{4UL},{0xFA81B22EL},{0xF80B5C32L},{0x7C870D18L},{4294967294UL},{0x7C870D18L},{0xF80B5C32L},{0xFA81B22EL}},{{4UL},{0x064457BBL},{0x064457BBL},{4UL},{0xFA81B22EL},{0xF80B5C32L},{0x7C870D18L},{4294967294UL},{0x7C870D18L},{0xF80B5C32L}},{{0xFA81B22EL},{4UL},{0x064457BBL},{0x064457BBL},{4UL},{0xFA81B22EL},{0xF80B5C32L},{0x7C870D18L},{4294967294UL},{0x7C870D18L}}};
                    struct S0 l_2089[3][10][7] = {{{{4294967295UL,18446744073709551608UL,-1L,9UL,-1L},{4294967295UL,0UL,0xECL,6UL,-1L},{0x8B1D1412L,0x0A2DC1931FA8CC7ALL,9L,8UL,-6L},{1UL,1UL,0xE1L,0x9599C243D1E10FD7LL,0x93L},{1UL,0x475CC96602D585D5LL,0x9AL,18446744073709551615UL,6L},{6UL,0xA18CC6211D863500LL,1L,0xCADDED1B2F9674B0LL,0x68L},{0x3F5684B0L,0xFAB60A8A208FD8E1LL,4L,0xD91146291C45913ELL,0x99L}},{{4294967286UL,3UL,0xD5L,0x046493B66AF959E5LL,-1L},{1UL,0xB53B9236ECDBE248LL,0x04L,0xBDB7657CA1C3D12ELL,1L},{5UL,0x3262D627FB3206E9LL,0L,18446744073709551610UL,-1L},{4294967286UL,3UL,0xD5L,0x046493B66AF959E5LL,-1L},{0x0C6C1D74L,0x13540FA7CF2F2AFFLL,0x97L,1UL,0x87L},{0x80D83C71L,0x25C6D075B9A50AF2LL,0L,0UL,-9L},{1UL,0xB53B9236ECDBE248LL,0x04L,0xBDB7657CA1C3D12ELL,1L}},{{1UL,0xB4968E5E82803A30LL,0xACL,1UL,1L},{4294967289UL,0x85391AC484671509LL,1L,1UL,-1L},{4294967295UL,18446744073709551608UL,-1L,9UL,-1L},{0x3480D378L,0xE0E50127869117D6LL,0x01L,0xFE24739697EC7B67LL,0xACL},{4294967295UL,18446744073709551608UL,-1L,9UL,-1L},{4294967289UL,0x85391AC484671509LL,1L,1UL,-1L},{1UL,0xB4968E5E82803A30LL,0xACL,1UL,1L}},{{0UL,0xCCDC5626D82A544FLL,0x93L,18446744073709551615UL,0xF3L},{1UL,0xB53B9236ECDBE248LL,0x04L,0xBDB7657CA1C3D12ELL,1L},{0x8345FCB0L,0xB1B028D9ABBA40B5LL,0L,0x199CE3922E0D3681LL,0xC3L},{9UL,0xB29D2F47574C5516LL,-1L,7UL,-2L},{9UL,0xB29D2F47574C5516LL,-1L,7UL,-2L},{5UL,0x3262D627FB3206E9LL,0L,18446744073709551610UL,-1L},{0x80D83C71L,0x25C6D075B9A50AF2LL,0L,0UL,-9L}},{{0x8B1D1412L,0x0A2DC1931FA8CC7ALL,9L,8UL,-6L},{4294967289UL,0x85391AC484671509LL,1L,1UL,-1L},{0x030DF63AL,0xE5F25790E88B3BFFLL,-8L,0xBFF4CCE49B202198LL,0x40L},{0x68FA652DL,0x7032A699B7D3352ELL,1L,0xA67DBE3FBEB0F359LL,0x74L},{0x4DAAF50BL,0x5E601DA3A345BD6ELL,0x93L,0xDD79A8471376D488LL,0xF0L},{0x3480D378L,0xE0E50127869117D6LL,0x01L,0xFE24739697EC7B67LL,0xACL},{2UL,0UL,0x14L,18446744073709551610UL,1L}},{{1UL,0UL,1L,0x0FBCE4B1711A83D0LL,0x0DL},{4294967287UL,0x25A790BE2FE8C5B5LL,0x7AL,0UL,-1L},{0x1989475BL,0x74B4BCE18E90175CLL,-1L,2UL,0x14L},{0x472F1F12L,1UL,0L,0x946632E42D4C9FC4LL,0x4EL},{4294967287UL,0x25A790BE2FE8C5B5LL,0x7AL,0UL,-1L},{0x80D83C71L,0x25C6D075B9A50AF2LL,0L,0UL,-9L},{0UL,0xCCDC5626D82A544FLL,0x93L,18446744073709551615UL,0xF3L}},{{0x26E17D3FL,1UL,0x67L,0x6DEFB240BFACF2A4LL,0x10L},{0x68FA652DL,0x7032A699B7D3352ELL,1L,0xA67DBE3FBEB0F359LL,0x74L},{0x2CEC10F2L,0xAE24E5D96F57F4CFLL,0xFEL,0xAEB3B6C1D071B3E1LL,0xF1L},{0xFD33E800L,0xDB170A64D15AFFB5LL,1L,1UL,0xD8L},{2UL,0UL,0x14L,18446744073709551610UL,1L},{0xFD33E800L,0xDB170A64D15AFFB5LL,1L,1UL,0xD8L},{0x2CEC10F2L,0xAE24E5D96F57F4CFLL,0xFEL,0xAEB3B6C1D071B3E1LL,0xF1L}},{{9UL,0xB29D2F47574C5516LL,-1L,7UL,-2L},{9UL,0xB29D2F47574C5516LL,-1L,7UL,-2L},{4294967286UL,3UL,0xD5L,0x046493B66AF959E5LL,-1L},{0x472F1F12L,1UL,0L,0x946632E42D4C9FC4LL,0x4EL},{1UL,0UL,1L,0x0FBCE4B1711A83D0LL,0x0DL},{1UL,0xB53B9236ECDBE248LL,0x04L,0xBDB7657CA1C3D12ELL,1L},{9UL,0xB29D2F47574C5516LL,-1L,7UL,-2L}},{{4294967295UL,18446744073709551608UL,-1L,9UL,-1L},{0x0DAF6FCEL,0x4049F96D3B482F0BLL,0x09L,18446744073709551615UL,0xA1L},{0x85B67D8BL,0x617F6069AB3D763ELL,0x6FL,18446744073709551614UL,0xF4L},{0x68FA652DL,0x7032A699B7D3352ELL,1L,0xA67DBE3FBEB0F359LL,0x74L},{0x2AA79D85L,0x0BC55D5BA149CD5CLL,0x55L,0x85DB3B990F7100B6LL,-2L},{2UL,0x4AB3051342B15AC1LL,0x7DL,18446744073709551615UL,0x02L},{0x4DAAF50BL,0x5E601DA3A345BD6ELL,0x93L,0xDD79A8471376D488LL,0xF0L}},{{0UL,0x7C6A24AF2DFD280BLL,6L,1UL,1L},{0UL,0xCCDC5626D82A544FLL,0x93L,18446744073709551615UL,0xF3L},{0UL,0x7C6A24AF2DFD280BLL,6L,1UL,1L},{0x80D83C71L,0x25C6D075B9A50AF2LL,0L,0UL,-9L},{1UL,0UL,1L,0x0FBCE4B1711A83D0LL,0x0DL},{0UL,0x7C6A24AF2DFD280BLL,6L,1UL,1L},{4294967287UL,0x25A790BE2FE8C5B5LL,0x7AL,0UL,-1L}}},{{{0x4DAAF50BL,0x5E601DA3A345BD6ELL,0x93L,0xDD79A8471376D488LL,0xF0L},{4294967289UL,0x85391AC484671509LL,1L,1UL,-1L},{1UL,0x475CC96602D585D5LL,0x9AL,18446744073709551615UL,6L},{1UL,18446744073709551615UL,0x6AL,0xAA068DC4A0E6F0F1LL,0x8FL},{2UL,0UL,0x14L,18446744073709551610UL,1L},{0x1BC9A48EL,0xC97493B5762987D0LL,0xCFL,1UL,-1L},{2UL,0UL,0x14L,18446744073709551610UL,1L}},{{0x8345FCB0L,0xB1B028D9ABBA40B5LL,0L,0x199CE3922E0D3681LL,0xC3L},{0x80D83C71L,0x25C6D075B9A50AF2LL,0L,0UL,-9L},{0x80D83C71L,0x25C6D075B9A50AF2LL,0L,0UL,-9L},{0x8345FCB0L,0xB1B028D9ABBA40B5LL,0L,0x199CE3922E0D3681LL,0xC3L},{4294967287UL,0x25A790BE2FE8C5B5LL,0x7AL,0UL,-1L},{0UL,0x7C6A24AF2DFD280BLL,6L,1UL,1L},{1UL,0UL,1L,0x0FBCE4B1711A83D0LL,0x0DL}},{{0x2AA79D85L,0x0BC55D5BA149CD5CLL,0x55L,0x85DB3B990F7100B6LL,-2L},{6UL,0xA18CC6211D863500LL,1L,0xCADDED1B2F9674B0LL,0x68L},{0x2CEC10F2L,0xAE24E5D96F57F4CFLL,0xFEL,0xAEB3B6C1D071B3E1LL,0xF1L},{0UL,1UL,-3L,0x5E730205D3DB0259LL,0L},{0x4DAAF50BL,0x5E601DA3A345BD6ELL,0x93L,0xDD79A8471376D488LL,0xF0L},{2UL,0x4AB3051342B15AC1LL,0x7DL,18446744073709551615UL,0x02L},{0x2AA79D85L,0x0BC55D5BA149CD5CLL,0x55L,0x85DB3B990F7100B6LL,-2L}},{{9UL,0xB29D2F47574C5516LL,-1L,7UL,-2L},{1UL,0UL,1L,0x0FBCE4B1711A83D0LL,0x0DL},{0x0C6C1D74L,0x13540FA7CF2F2AFFLL,0x97L,1UL,0x87L},{1UL,0UL,1L,0x0FBCE4B1711A83D0LL,0x0DL},{9UL,0xB29D2F47574C5516LL,-1L,7UL,-2L},{1UL,0xB53B9236ECDBE248LL,0x04L,0xBDB7657CA1C3D12ELL,1L},{1UL,0UL,1L,0x0FBCE4B1711A83D0LL,0x0DL}},{{0x8B1D1412L,0x0A2DC1931FA8CC7ALL,9L,8UL,-6L},{0x22D81C2DL,0x2C0DBAEEB66546BCLL,0xE8L,0x95D89284F4F27BABLL,1L},{0x26E17D3FL,1UL,0x67L,0x6DEFB240BFACF2A4LL,0x10L},{0x68FA652DL,0x7032A699B7D3352ELL,1L,0xA67DBE3FBEB0F359LL,0x74L},{0x2CEC10F2L,0xAE24E5D96F57F4CFLL,0xFEL,0xAEB3B6C1D071B3E1LL,0xF1L},{0xFD33E800L,0xDB170A64D15AFFB5LL,1L,1UL,0xD8L},{2UL,0UL,0x14L,18446744073709551610UL,1L}},{{0x80D83C71L,0x25C6D075B9A50AF2LL,0L,0UL,-9L},{0UL,0xCCDC5626D82A544FLL,0x93L,18446744073709551615UL,0xF3L},{0x1989475BL,0x74B4BCE18E90175CLL,-1L,2UL,0x14L},{0x1989475BL,0x74B4BCE18E90175CLL,-1L,2UL,0x14L},{0UL,0xCCDC5626D82A544FLL,0x93L,18446744073709551615UL,0xF3L},{0x80D83C71L,0x25C6D075B9A50AF2LL,0L,0UL,-9L},{4294967287UL,0x25A790BE2FE8C5B5LL,0x7AL,0UL,-1L}},{{0x8B1D1412L,0x0A2DC1931FA8CC7ALL,9L,8UL,-6L},{0x68FA652DL,0x7032A699B7D3352ELL,1L,0xA67DBE3FBEB0F359LL,0x74L},{4294967288UL,0xF5C8C88DF4805D29LL,0x36L,1UL,0x7EL},{1UL,1UL,0xE1L,0x9599C243D1E10FD7LL,0x93L},{2UL,0UL,0x14L,18446744073709551610UL,1L},{0x3480D378L,0xE0E50127869117D6LL,0x01L,0xFE24739697EC7B67LL,0xACL},{0x4DAAF50BL,0x5E601DA3A345BD6ELL,0x93L,0xDD79A8471376D488LL,0xF0L}},{{9UL,0xB29D2F47574C5516LL,-1L,7UL,-2L},{5UL,0x3262D627FB3206E9LL,0L,18446744073709551610UL,-1L},{0x80D83C71L,0x25C6D075B9A50AF2LL,0L,0UL,-9L},{0x472F1F12L,1UL,0L,0x946632E42D4C9FC4LL,0x4EL},{0x80D83C71L,0x25C6D075B9A50AF2LL,0L,0UL,-9L},{5UL,0x3262D627FB3206E9LL,0L,18446744073709551610UL,-1L},{9UL,0xB29D2F47574C5516LL,-1L,7UL,-2L}},{{0x2AA79D85L,0x0BC55D5BA149CD5CLL,0x55L,0x85DB3B990F7100B6LL,-2L},{0x68FA652DL,0x7032A699B7D3352ELL,1L,0xA67DBE3FBEB0F359LL,0x74L},{0x85B67D8BL,0x617F6069AB3D763ELL,0x6FL,18446744073709551614UL,0xF4L},{0x0DAF6FCEL,0x4049F96D3B482F0BLL,0x09L,18446744073709551615UL,0xA1L},{4294967295UL,18446744073709551608UL,-1L,9UL,-1L},{2UL,0x4AB3051342B15AC1LL,0x7DL,18446744073709551615UL,0x02L},{0x2CEC10F2L,0xAE24E5D96F57F4CFLL,0xFEL,0xAEB3B6C1D071B3E1LL,0xF1L}},{{0x8345FCB0L,0xB1B028D9ABBA40B5LL,0L,0x199CE3922E0D3681LL,0xC3L},{0UL,0xCCDC5626D82A544FLL,0x93L,18446744073709551615UL,0xF3L},{1UL,0x75912BC1F6797925LL,0xA5L,8UL,-10L},{1UL,0UL,1L,0x0FBCE4B1711A83D0LL,0x0DL},{1UL,0UL,1L,0x0FBCE4B1711A83D0LL,0x0DL},{1UL,0x75912BC1F6797925LL,0xA5L,8UL,-10L},{0UL,0xCCDC5626D82A544FLL,0x93L,18446744073709551615UL,0xF3L}}},{{{0x4DAAF50BL,0x5E601DA3A345BD6ELL,0x93L,0xDD79A8471376D488LL,0xF0L},{0x22D81C2DL,0x2C0DBAEEB66546BCLL,0xE8L,0x95D89284F4F27BABLL,1L},{0x85B67D8BL,0x617F6069AB3D763ELL,0x6FL,18446744073709551614UL,0xF4L},{1UL,18446744073709551615UL,0x6AL,0xAA068DC4A0E6F0F1LL,0x8FL},{0xEEC59925L,1UL,0xAAL,1UL,-5L},{0x0DAF6FCEL,0x4049F96D3B482F0BLL,0x09L,18446744073709551615UL,0xA1L},{2UL,0UL,0x14L,18446744073709551610UL,1L}},{{0UL,0x7C6A24AF2DFD280BLL,6L,1UL,1L},{1UL,0UL,1L,0x0FBCE4B1711A83D0LL,0x0DL},{0x80D83C71L,0x25C6D075B9A50AF2LL,0L,0UL,-9L},{0UL,0x7C6A24AF2DFD280BLL,6L,1UL,1L},{0UL,0xCCDC5626D82A544FLL,0x93L,18446744073709551615UL,0xF3L},{0UL,0x7C6A24AF2DFD280BLL,6L,1UL,1L},{0x80D83C71L,0x25C6D075B9A50AF2LL,0L,0UL,-9L}},{{4294967295UL,18446744073709551608UL,-1L,9UL,-1L},{6UL,0xA18CC6211D863500LL,1L,0xCADDED1B2F9674B0LL,0x68L},{4294967288UL,0xF5C8C88DF4805D29LL,0x36L,1UL,0x7EL},{1UL,18446744073709551615UL,0x6AL,0xAA068DC4A0E6F0F1LL,0x8FL},{0x4DAAF50BL,0x5E601DA3A345BD6ELL,0x93L,0xDD79A8471376D488LL,0xF0L},{0xE7B1BE5FL,0UL,2L,0x5D1B8DA6205CD23ELL,0L},{4294967295UL,18446744073709551608UL,-1L,9UL,-1L}},{{9UL,0xB29D2F47574C5516LL,-1L,7UL,-2L},{0x80D83C71L,0x25C6D075B9A50AF2LL,0L,0UL,-9L},{0x1989475BL,0x74B4BCE18E90175CLL,-1L,2UL,0x14L},{1UL,0UL,1L,0x0FBCE4B1711A83D0LL,0x0DL},{5UL,0x3262D627FB3206E9LL,0L,18446744073709551610UL,-1L},{5UL,0x3262D627FB3206E9LL,0L,18446744073709551610UL,-1L},{1UL,0UL,1L,0x0FBCE4B1711A83D0LL,0x0DL}},{{0x26E17D3FL,1UL,0x67L,0x6DEFB240BFACF2A4LL,0x10L},{4294967289UL,0x85391AC484671509LL,1L,1UL,-1L},{0x26E17D3FL,1UL,0x67L,0x6DEFB240BFACF2A4LL,0x10L},{0x0DAF6FCEL,0x4049F96D3B482F0BLL,0x09L,18446744073709551615UL,0xA1L},{0x4DAAF50BL,0x5E601DA3A345BD6ELL,0x93L,0xDD79A8471376D488LL,0xF0L},{0xFD33E800L,0xDB170A64D15AFFB5LL,1L,1UL,0xD8L},{0xEEC59925L,1UL,0xAAL,1UL,-5L}},{{1UL,0UL,1L,0x0FBCE4B1711A83D0LL,0x0DL},{0UL,0xCCDC5626D82A544FLL,0x93L,18446744073709551615UL,0xF3L},{0x0C6C1D74L,0x13540FA7CF2F2AFFLL,0x97L,1UL,0x87L},{0x472F1F12L,1UL,0L,0x946632E42D4C9FC4LL,0x4EL},{0UL,0xCCDC5626D82A544FLL,0x93L,18446744073709551615UL,0xF3L},{4294967286UL,3UL,0xD5L,0x046493B66AF959E5LL,-1L},{0UL,0xCCDC5626D82A544FLL,0x93L,18446744073709551615UL,0xF3L}},{{0x8B1D1412L,0x0A2DC1931FA8CC7ALL,9L,8UL,-6L},{0x0DAF6FCEL,0x4049F96D3B482F0BLL,0x09L,18446744073709551615UL,0xA1L},{0x2CEC10F2L,0xAE24E5D96F57F4CFLL,0xFEL,0xAEB3B6C1D071B3E1LL,0xF1L},{1UL,1UL,0xE1L,0x9599C243D1E10FD7LL,0x93L},{0xEEC59925L,1UL,0xAAL,1UL,-5L},{0xFD33E800L,0xDB170A64D15AFFB5LL,1L,1UL,0xD8L},{0x4DAAF50BL,0x5E601DA3A345BD6ELL,0x93L,0xDD79A8471376D488LL,0xF0L}},{{5UL,0x3262D627FB3206E9LL,0L,18446744073709551610UL,-1L},{9UL,0xB29D2F47574C5516LL,-1L,7UL,-2L},{0x80D83C71L,0x25C6D075B9A50AF2LL,0L,0UL,-9L},{0x1989475BL,0x74B4BCE18E90175CLL,-1L,2UL,0x14L},{1UL,0UL,1L,0x0FBCE4B1711A83D0LL,0x0DL},{5UL,0x3262D627FB3206E9LL,0L,18446744073709551610UL,-1L},{5UL,0x3262D627FB3206E9LL,0L,18446744073709551610UL,-1L}},{{4294967295UL,18446744073709551608UL,-1L,9UL,-1L},{0x68FA652DL,0x7032A699B7D3352ELL,1L,0xA67DBE3FBEB0F359LL,0x74L},{1UL,0x475CC96602D585D5LL,0x9AL,18446744073709551615UL,6L},{0x68FA652DL,0x7032A699B7D3352ELL,1L,0xA67DBE3FBEB0F359LL,0x74L},{4294967295UL,18446744073709551608UL,-1L,9UL,-1L},{0xE7B1BE5FL,0UL,2L,0x5D1B8DA6205CD23ELL,0L},{0x4DAAF50BL,0x5E601DA3A345BD6ELL,0x93L,0xDD79A8471376D488LL,0xF0L}},{{0x8345FCB0L,0xB1B028D9ABBA40B5LL,0L,0x199CE3922E0D3681LL,0xC3L},{4294967287UL,0x25A790BE2FE8C5B5LL,0x7AL,0UL,-1L},{0UL,0x7C6A24AF2DFD280BLL,6L,1UL,1L},{1UL,0UL,1L,0x0FBCE4B1711A83D0LL,0x0DL},{0x80D83C71L,0x25C6D075B9A50AF2LL,0L,0UL,-9L},{0UL,0x7C6A24AF2DFD280BLL,6L,1UL,1L},{0UL,0xCCDC5626D82A544FLL,0x93L,18446744073709551615UL,0xF3L}}}};
                    int i, j, k;
                    for (g_1198 = 0; (g_1198 >= 0); g_1198 -= 1)
                    {
                        int64_t l_2049 = 0xDCF28D0D4A498A59LL;
                        int32_t *l_2051 = (void*)0;
                        int32_t *l_2052[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_2052[i] = &g_6;
                        (***g_677) = l_1981[0][4];
                        if (l_2049)
                            break;
                        (*l_2004) = l_2050;
                        --l_2055[0][7][0];
                    }
                    if ((*l_2027))
                    {
                        uint32_t l_2060 = 0x75D104DDL;
                        int64_t *l_2066 = (void*)0;
                        int64_t *l_2067 = &g_71;
                        int32_t *l_2068 = &l_17;
                        l_2025[6][5] &= (((l_2060 = (safe_lshift_func_int8_t_s_u((&g_178 != (void*)0), 3))) == (0xA04EC100FABB65F0LL == (((*l_2067) = (l_2061 == ((*l_2004) == (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((*l_2027), 11)), (((((**g_678) = (*g_218)) , g_318[0][3]) , (*g_575)) != l_1930[1])))))) < 0xEB7B5DC454249152LL))) < 0x2EE889C39DB43F15LL);
                        l_2054 = l_2060;
                        (**g_475) = l_2068;
                    }
                    else
                    {
                        (**g_471) = (**g_471);
                    }
                    (*g_678) = (**g_677);
                    for (g_65.f4 = 1; (g_65.f4 <= 7); g_65.f4 += 1)
                    {
                        struct S0 *l_2081 = &g_1848;
                        int i;
                        l_2027 = &l_2053[g_65.f4];
                        (*l_2004) = (&g_178 == &g_178);
                        l_2090[2] ^= (safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(g_62[(g_65.f4 + 1)], ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(0xFC62L, (safe_mod_func_uint64_t_u_u((safe_div_func_int16_t_s_s(((l_2025[6][5] = 4L) , (**g_1597)), 7UL)), l_2026)))), (l_2081 == ((**g_677) = (**g_677))))) != (*l_2004)))) , 6UL), g_318[0][6]));
                        (*l_2004) = ((safe_rshift_func_int16_t_s_s((**g_1597), 13)) | l_2026);
                    }
                }
                for (g_365 = 0; (g_365 <= 20); ++g_365)
                {
                    int32_t *l_2095 = (void*)0;
                    int32_t *l_2096 = &l_1904;
                    int32_t *l_2097 = &l_1917;
                    int32_t *l_2098 = &l_1912;
                    int32_t *l_2099 = &l_1912;
                    int32_t *l_2100 = &l_1988;
                    int32_t *l_2101 = (void*)0;
                    int32_t *l_2102 = &g_6;
                    int32_t *l_2103 = &g_6;
                    int32_t *l_2104 = (void*)0;
                    int32_t l_2105 = 0L;
                    int32_t *l_2106[2];
                    int8_t *l_2111 = &l_1928;
                    int8_t **l_2126 = (void*)0;
                    int8_t **l_2127 = &g_156[0][0];
                    struct S0 l_2129 = {0x3F4301EDL,3UL,3L,0x6EC3DBD0510458D8LL,0x24L};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2106[i] = &l_2025[6][3];
                    ++l_2108[3];
                    l_2129 = ((((*g_575) | (((*l_2111) = (*l_2004)) >= (*g_575))) , (safe_div_func_uint64_t_u_u(((*l_2004) ^ (safe_sub_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(((safe_sub_func_uint64_t_u_u(((safe_div_func_int64_t_s_s((+(safe_rshift_func_int16_t_s_s((((*g_1598) | 0xF834L) , 0xCD83L), (safe_div_func_int16_t_s_s(((((**g_1009) = (((*l_2127) = (g_575 = l_2041)) == &l_1928)) < l_2128) >= l_1981[0][2].f0), 0x35BAL))))), l_2090[4])) < l_1925), l_1981[0][2].f4)) || (*g_717)))), 0L))), (*g_1660)))) , (*g_64));
                    for (g_1198 = 0; (g_1198 >= (-28)); --g_1198)
                    {
                        uint8_t l_2133 = 0xA8L;
                        --l_2133;
                        (*l_2100) |= 0x22B61524L;
                        l_1944 = &l_1930[0];
                        return l_1912;
                    }
                    return (**g_1597);
                }
            }
            else
            {
                return (*g_1598);
            }
            for (g_1765 = 0; (g_1765 != 20); g_1765 = safe_add_func_uint64_t_u_u(g_1765, 5))
            {
                uint32_t l_2144 = 4294967295UL;
                int32_t l_2147 = (-2L);
                int32_t l_2148 = 0x3FD7DE96L;
                int32_t l_2149[10][6][4] = {{{0x49FDA80FL,3L,0xDFCBD086L,0x13D7F1B8L},{(-1L),(-1L),0x49FDA80FL,0xD3B6ED61L},{0x6E62EBD1L,0L,1L,0xA724ABC3L},{0xD3B6ED61L,(-1L),0xA305A860L,(-1L)},{0L,(-9L),0x6B39FBA4L,(-6L)},{(-7L),0x6B39FBA4L,(-7L),0xDFCBD086L}},{{(-1L),0x4803B48DL,4L,0x00CF9A2BL},{(-9L),0x7604BF82L,9L,0x4803B48DL},{0xD4E70C97L,0xBBCF27EAL,9L,0L},{(-9L),(-7L),4L,0xA724ABC3L},{(-1L),0xEA64F363L,(-7L),(-1L)},{(-7L),(-1L),0x6B39FBA4L,0xD4E70C97L}},{{0L,(-9L),0xA305A860L,1L},{0xD3B6ED61L,0x4803B48DL,1L,0L},{0x6E62EBD1L,0x759F0075L,0x49FDA80FL,0x817D3629L},{0xD4E70C97L,0L,1L,(-9L)},{0x6B39FBA4L,(-2L),4L,0xA724ABC3L},{0xBBCF27EAL,0x13D7F1B8L,0x13D7F1B8L,0xBBCF27EAL}},{{(-2L),0x74130F57L,0x6B39FBA4L,6L},{0xA305A860L,0x6E62EBD1L,0xEA64F363L,4L},{(-9L),0x4803B48DL,0x00CF9A2BL,4L},{0x759F0075L,0x6E62EBD1L,0xA724ABC3L,6L},{0xD4E70C97L,0x74130F57L,0xF39A2927L,0xBBCF27EAL},{1L,0x13D7F1B8L,0x90C6BC6AL,0xA724ABC3L}},{{0L,(-2L),(-1L),(-9L)},{0x13D7F1B8L,0L,0x6B39FBA4L,0x817D3629L},{(-1L),0x759F0075L,(-2L),0L},{(-1L),0x4803B48DL,0xDFCBD086L,1L},{0x7604BF82L,(-9L),0xAC969B5CL,0xD4E70C97L},{0xD4E70C97L,(-1L),3L,(-1L)}},{{0x99465673L,0xEA64F363L,0L,0xA724ABC3L},{0x74130F57L,(-7L),0L,0L},{0xEA64F363L,0xBBCF27EAL,0x6B39FBA4L,0x4803B48DL},{0xEA64F363L,0x7604BF82L,0L,0x00CF9A2BL},{0x74130F57L,0x4803B48DL,0L,0xDFCBD086L},{0x99465673L,0x6B39FBA4L,3L,(-6L)}},{{0xD4E70C97L,(-9L),0xAC969B5CL,(-1L)},{0x7604BF82L,(-1L),0xDFCBD086L,0xA724ABC3L},{(-1L),0L,(-2L),0xD3B6ED61L},{(-1L),(-1L),0x6B39FBA4L,(-4L)},{0x13D7F1B8L,0x99465673L,(-1L),4L},{0L,0x4803B48DL,0x90C6BC6AL,0x90C6BC6AL}},{{1L,1L,0xF39A2927L,3L},{0xD4E70C97L,0xD3B6ED61L,0xA724ABC3L,0x74130F57L},{0x759F0075L,0xA305A860L,0x00CF9A2BL,0xA724ABC3L},{(-9L),0xA305A860L,0xEA64F363L,0x74130F57L},{0xA305A860L,0xD3B6ED61L,0x6B39FBA4L,3L},{(-2L),1L,0x13D7F1B8L,0x90C6BC6AL}},{{0xBBCF27EAL,0x4803B48DL,4L,4L},{6L,0xFE32209BL,1L,1L},{0L,0xA305A860L,0x6B39FBA4L,0x13D7F1B8L},{(-1L),0x4803B48DL,9L,0x7604BF82L},{0x13D7F1B8L,0xD4E70C97L,3L,0xA305A860L},{0x4803B48DL,0L,6L,0xDFCBD086L}},{{6L,6L,6L,1L},{0xA305A860L,4L,3L,0xAC969B5CL},{0xB2292007L,0x8BEC0A90L,0x759F0075L,4L},{0L,(-2L),0x759F0075L,(-1L)},{0xB2292007L,6L,3L,0x7604BF82L},{0xA305A860L,0x817D3629L,6L,0xEA64F363L}}};
                uint16_t l_2150 = 0xCF1CL;
                int32_t *l_2154 = &l_1904;
                uint8_t l_2168 = 254UL;
                int32_t ** const *l_2180 = &g_472[4];
                int32_t ** const **l_2179[7][6] = {{&l_2180,(void*)0,&l_2180,(void*)0,&l_2180,(void*)0},{&l_2180,(void*)0,&l_2180,(void*)0,&l_2180,(void*)0},{&l_2180,(void*)0,&l_2180,(void*)0,&l_2180,(void*)0},{&l_2180,(void*)0,&l_2180,(void*)0,&l_2180,(void*)0},{&l_2180,(void*)0,&l_2180,(void*)0,&l_2180,(void*)0},{&l_2180,(void*)0,&l_2180,(void*)0,&l_2180,(void*)0},{&l_2180,(void*)0,&l_2180,(void*)0,&l_2180,(void*)0}};
                int32_t ** const ***l_2178 = &l_2179[5][2];
                int64_t l_2184 = 8L;
                uint64_t l_2185 = 18446744073709551615UL;
                int i, j, k;
                for (g_105.f1 = 1; (g_105.f1 <= 5); g_105.f1 += 1)
                {
                    int32_t *l_2138 = &g_69;
                    int32_t *l_2139 = (void*)0;
                    int32_t *l_2140 = &l_2025[2][5];
                    int32_t *l_2141 = &l_1912;
                    int32_t *l_2142 = &g_2;
                    int32_t *l_2143[5] = {&l_1904,&l_1904,&l_1904,&l_1904,&l_1904};
                    int i;
                    l_2144++;
                    (*l_2140) |= l_2026;
                    l_2150--;
                }
                (*l_2154) = g_2153;
                for (g_136 = 0; (g_136 <= 1); g_136 += 1)
                {
                    uint8_t l_2159 = 2UL;
                    int32_t l_2163 = 0L;
                    int16_t *l_2173[9];
                    uint64_t ***l_2175 = &l_2174;
                    uint64_t ***l_2176 = &g_1009;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_2173[i] = &g_1876[0];
                    if (((safe_sub_func_uint32_t_u_u(7UL, l_1982[0][3][0])) , (l_2159 < ((**g_1659) < (0xF8A0L > 1L)))))
                    {
                        uint8_t l_2160 = 5UL;
                        l_2160++;
                        l_2163 = (*l_2154);
                        (*l_2154) &= (-1L);
                        if (l_1928)
                            break;
                    }
                    else
                    {
                        (**g_471) = &l_2090[1];
                        return (**g_1597);
                    }
                    (*l_2154) = (l_2026 ^ ((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(l_2061, ((g_62[(g_136 + 4)] |= l_2168) , (**g_1597)))), ((void*)0 == &l_2027))) == (0x31C4L <= (((l_2025[6][5] = (((((safe_rshift_func_int16_t_s_u((1L && (((((safe_mod_func_int16_t_s_s(0xF1EDL, (*g_1598))) <= l_2159) ^ l_2159) || 0xBB3DL) , (*l_2154))), 1)) , l_2159) , 0xB72AB68A4B1D58B0LL) >= (*l_2154)) <= 255UL)) || 0UL) < (****g_768)))));
                    l_1943[3] = (((((*l_2176) = ((*l_2175) = l_2174)) == l_2177) ^ 0x04DFL) || ((*g_717) , 0xD39AF5786877DDFALL));
                    g_2181[1][4] = l_2178;
                }
                l_2185--;
            }
            (**g_475) = ((safe_rshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((*g_1598), (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((**g_1009))), (**g_1597))), 6)))) ^ ((safe_add_func_uint16_t_u_u((((*l_2199)--) || ((safe_unary_minus_func_uint8_t_u(((((l_2217 ^= (safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(0x4CL, l_1981[0][2].f4)) != 0x57995A96L), ((((*g_575) = (((((safe_add_func_int16_t_s_s(((l_2025[6][5] = ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((((void*)0 == (*g_1624)) > ((*g_771) >= l_1981[0][2].f0)), l_1980[0])) , l_2215), l_1982[1][1][0])), 0xD45A3C42L)) ^ l_1981[0][2].f0)) > (**g_1597)), l_1980[2])) <= 0xCFCD1B16B52EB825LL) , l_1942) != l_1944) == (**g_1659))) == 0xB5L) || l_2216)))) < (****g_768)) || g_136) > (*g_717)))) && 2L)), g_1876[0])) > l_1930[0])), 7)) , &l_2025[6][6]);
        }
        l_1953 ^= (l_1943[1] &= ((((**g_769) != (void*)0) <= (-8L)) & ((safe_lshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((((safe_add_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(((**l_2174) = ((g_2244 = (safe_lshift_func_int16_t_s_s((((**g_770) |= ((safe_mul_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((-8L) < ((safe_lshift_func_uint16_t_u_s(l_1930[1], 7)) & (safe_mod_func_int32_t_s_s(((void*)0 == l_2240), l_2024)))), (safe_div_func_int16_t_s_s(1L, 0xAE06L)))), 4)) , l_1955) == l_2243) == l_2024), (**g_1597))) > 0x978AL)) != l_17), 12))) == 0xD6L)), l_1925)) | l_2215), g_1429)) , (*g_1598)) , 0xA0L), (*g_575))), l_2107)) ^ (**g_1597)), 0)) >= l_2028[0][0].f2)));
    }
    for (l_1912 = (-21); (l_1912 <= 24); l_1912 = safe_add_func_int32_t_s_s(l_1912, 2))
    {
        uint8_t l_2255[2][8] = {{4UL,252UL,252UL,4UL,251UL,4UL,252UL,252UL},{252UL,251UL,253UL,253UL,251UL,252UL,251UL,253UL}};
        uint16_t l_2260 = 0x48B7L;
        uint8_t l_2273 = 246UL;
        uint32_t **l_2281 = (void*)0;
        int32_t *l_2285[1][2];
        int32_t l_2286 = 0x4307668FL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_2285[i][j] = &g_1775;
        }
        for (g_71 = 0; (g_71 < 13); g_71++)
        {
            int64_t l_2269 = 0xB10C8D38D0A746F5LL;
            int64_t *l_2271 = &g_365;
            g_2274 = (safe_mod_func_int8_t_s_s(((((void*)0 != &g_2182[1][4][3]) >= (l_1917 != (safe_div_func_int64_t_s_s((((safe_add_func_int16_t_s_s((l_2255[1][5] >= (((safe_div_func_int8_t_s_s(((-5L) == (safe_unary_minus_func_int16_t_s(((**g_1597) = (((!l_2260) > (safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((((*l_2271) = (safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(l_2269, (**g_1009))), (!l_2260)))) >= l_2269), l_2272)) ^ l_2260), (*g_575)))) , 0x0A34L))))), (-1L))) ^ 0x02L) > l_2090[2])), l_2273)) <= 0x3AL) || (**g_770)), (**g_1009))))) | l_2260), l_2260));
        }
        for (l_2216 = (-3); (l_2216 > 23); l_2216 = safe_add_func_int16_t_s_s(l_2216, 1))
        {
            const int16_t l_2279 = 0x61BEL;
            int32_t l_2280 = 0x415F8F7BL;
            int32_t l_2284 = 0xEEB869F0L;
            l_2286 = ((safe_sub_func_uint32_t_u_u(((l_2279 > (l_2279 , 0xC7L)) < 0x21DAL), (0xA0L & (((l_2280 , l_2281) == (**g_768)) != (((safe_mod_func_uint32_t_u_u(((l_2284 |= ((*g_575) = ((8UL > 0xB5L) , (-9L)))) <= l_2255[1][3]), 4294967288UL)) , &g_366) == l_2285[0][1]))))) != 0UL);
        }
        if (l_2273)
            continue;
    }
    (*l_2287) ^= (l_1981[0][2].f1 | 0x3D1B74C6L);
    return (**g_1597);
}







static struct S0 func_8(uint32_t p_9, int32_t * p_10, int16_t p_11, const int32_t * p_12, struct S0 p_13)
{
    int32_t l_1853 = 1L;
    int32_t l_1854 = 1L;
    uint16_t *l_1869 = &g_110;
    struct S0 l_1872 = {1UL,0x273EB326300D0E5FLL,0L,6UL,0L};
    int16_t *l_1875 = &g_1876[0];
    uint8_t **l_1891 = (void*)0;
    uint8_t ** const *l_1890 = &l_1891;
    uint8_t ** const **l_1889 = &l_1890;
    uint8_t ** const **l_1894 = &g_1892[3];
    (*p_10) &= (safe_sub_func_int16_t_s_s((((safe_add_func_int64_t_s_s((l_1853 >= (0x6ECC6F81226CACDBLL && (l_1854 , (**g_1659)))), (((safe_mod_func_uint8_t_u_u(p_11, (((safe_rshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(p_13.f2, (((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((*l_1869) = (safe_sub_func_uint8_t_u_u(((void*)0 == (*g_769)), l_1853))), p_13.f2)), 5)), 6)) == l_1854) && l_1853))), 6)) , 0x6B067ADEL) ^ (*p_12)))) | (*g_575)) | l_1853))) != (*g_717)) , (*g_1598)), p_9));
    (*p_10) |= (((g_1592 != ((safe_mod_func_uint8_t_u_u((l_1872 , 255UL), 0x94L)) , (void*)0)) ^ (p_11 = (**g_1597))) ^ ((l_1854 = l_1872.f3) <= (safe_rshift_func_int16_t_s_u((l_1872.f3 == (((*l_1875) ^= (-8L)) == 0xA03EL)), p_13.f3))));
    (*p_10) = ((safe_add_func_uint64_t_u_u(((safe_div_func_uint8_t_u_u(0x46L, (~((0xBBBC27A9L | (((l_1872 , ((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((+(l_1854 , 0xB334CE2C04009A53LL)), ((*g_575) = (((l_1889 == (void*)0) | ((((*l_1894) = ((*l_1889) = g_1892[3])) == &g_1893[1]) || l_1872.f4)) < 0x6D98CC32L)))), 4)) <= 0x1402B1F5L) , 0x856BL) == (-6L))) >= l_1872.f3) , 0UL)) != (*p_12))))) , l_1872.f0), l_1872.f3)) <= 9UL);
    return p_13;
}







static int8_t func_19(int32_t * p_20, int32_t * p_21)
{
    uint8_t l_43[2];
    struct S0 l_48 = {0x7C3387DDL,0xD552B8909FF4C90ELL,0L,0UL,0xDBL};
    int8_t *l_60 = (void*)0;
    int8_t *l_61 = (void*)0;
    struct S0 *l_63 = &l_48;
    int32_t *l_114[10] = {&g_115[4],(void*)0,&g_115[4],&g_115[4],(void*)0,&g_115[4],&g_115[4],(void*)0,&g_115[4],&g_115[4]};
    int32_t l_116 = 0x9411D375L;
    const int32_t *l_374 = &g_375;
    const int32_t **l_373 = &l_374;
    int32_t l_1833 = 0x390B07A5L;
    int32_t *l_1834 = &l_1833;
    int32_t *l_1835 = &g_69;
    int32_t *l_1836 = (void*)0;
    int32_t l_1837 = 0x6F1D33C5L;
    int32_t *l_1838[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_1839 = 1UL;
    int i;
    for (i = 0; i < 2; i++)
        l_43[i] = 3UL;
    (**g_677) = func_23(((safe_add_func_uint32_t_u_u(func_28(((func_31((safe_mod_func_int8_t_s_s(func_35((l_373 = func_37(l_43[0], (l_116 = (func_44(l_48, func_49((g_62[2] = (((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((0UL != 0x0833L), (g_2 <= l_43[1]))), 10)) >= 0x4870E7C4L) , (safe_mod_func_int32_t_s_s((*p_21), ((+g_2) , 0x9E433C58L))))), l_63, (*l_63)), g_6) < g_105.f4)), l_48.f2, l_114[3], &g_6))), (*l_374)))) != 1L) , (void*)0), (*l_63)), (*p_20))) , &l_48), &l_48);
    l_1839--;
    return (*l_1835);
}







static struct S0 * func_23(struct S0 * const p_24, struct S0 * p_25)
{
    int32_t l_1403 = 0xFA92AB05L;
    int32_t l_1404 = 0x0E795BDAL;
    const int32_t *l_1430 = &g_364;
    int32_t l_1474[4][1][10] = {{{1L,0L,(-5L),0xE55D2C5FL,0xE55D2C5FL,(-5L),0L,1L,0L,(-5L)}},{{(-1L),0x602F19F7L,0xE55D2C5FL,0x602F19F7L,(-1L),(-5L),(-5L),(-1L),0x602F19F7L,0xE55D2C5FL}},{{1L,1L,0xE55D2C5FL,(-1L),0x700B384EL,(-1L),0xE55D2C5FL,1L,1L,0xE55D2C5FL}},{{0x602F19F7L,(-1L),(-5L),(-5L),(-1L),0x602F19F7L,0xE55D2C5FL,0x602F19F7L,(-1L),(-5L)}}};
    uint8_t **l_1506 = &g_704;
    struct S0 l_1515 = {4294967290UL,0xDD9EE792522271E4LL,0xB0L,18446744073709551613UL,0xCFL};
    struct S0 * const *l_1608 = &g_218;
    struct S0 * const **l_1607 = &l_1608;
    uint16_t l_1673 = 0x4358L;
    uint32_t l_1724[9] = {4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL};
    int32_t *l_1726 = &l_1474[1][0][4];
    int8_t *l_1731[1];
    int32_t l_1734 = (-3L);
    int8_t ***l_1763 = &g_389;
    int32_t l_1782 = 2L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1731[i] = &g_65.f2;
lbl_1715:
    for (g_105.f0 = 0; (g_105.f0 <= 1); g_105.f0 += 1)
    {
        uint64_t l_1409 = 18446744073709551615UL;
        int32_t * const l_1412[2][1] = {{&g_69},{&g_69}};
        int8_t ** const l_1414 = (void*)0;
        const uint16_t * const l_1442 = &g_110;
        int16_t l_1448 = (-2L);
        struct S0 l_1469 = {1UL,18446744073709551615UL,3L,4UL,-1L};
        int32_t l_1499 = 5L;
        uint8_t **l_1505 = &g_704;
        uint64_t **l_1548 = &g_717;
        struct S0 ****l_1570[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t *l_1573 = &g_2;
        const int32_t l_1602 = 0xC55199F3L;
        uint32_t l_1612 = 0UL;
        int16_t l_1672 = 0x3FADL;
        int8_t l_1710 = 0x69L;
        int i, j;
        for (g_206 = 0; (g_206 <= 1); g_206 += 1)
        {
            int32_t *l_1405 = &g_364;
            int32_t *l_1406 = (void*)0;
            int32_t *l_1407 = &g_69;
            int32_t *l_1408[7] = {&g_69,&g_69,&g_69,&g_69,&g_69,&g_69,&g_69};
            int i, j;
            l_1403 = (g_318[g_206][(g_206 + 1)] < g_318[g_105.f0][(g_206 + 5)]);
            if (g_206)
                goto lbl_1715;
            ++l_1409;
        }
        for (g_365 = 8; (g_365 >= 0); g_365 -= 1)
        {
            int8_t **l_1415 = &g_156[1][0];
            int32_t l_1420 = 0x8BAD4E76L;
            const int32_t *l_1428 = &g_1429;
            for (g_368 = 0; (g_368 <= 8); g_368 += 1)
            {
                int32_t **l_1413 = &g_68;
                int64_t *l_1421 = (void*)0;
                int64_t *l_1422 = &g_71;
                int16_t l_1431 = 0L;
                struct S0 *l_1432[9][7] = {{&g_65,&g_105,&g_105,&g_105,&g_105,&g_65,&g_105},{&g_105,(void*)0,&g_65,&g_65,&g_65,&g_65,(void*)0},{&g_105,&g_105,&g_65,&g_105,&g_105,&g_105,&g_105},{&g_105,(void*)0,&g_105,&g_65,(void*)0,&g_105,&g_105},{&g_65,&g_105,&g_65,&g_105,&g_65,&g_65,&g_65},{&g_65,&g_105,&g_65,&g_65,&g_65,&g_105,&g_65},{&g_65,&g_65,&g_105,&g_105,&g_65,&g_105,&g_105},{&g_65,&g_65,&g_65,(void*)0,&g_105,&g_65,&g_105},{&g_65,&g_105,&g_105,&g_65,&g_105,&g_65,&g_65}};
                int i, j;
                (*l_1413) = l_1412[1][0];
                if ((((((*l_1422) = ((((-1L) != (((-1L) == 0x239EL) | g_62[(g_105.f0 + 1)])) , (((l_1414 != l_1415) & (safe_add_func_int64_t_s_s(0xECA6FE48816C0EA0LL, 0x8700819C6664EFF0LL))) , (((safe_lshift_func_uint8_t_u_u((l_1404 != 0x97929762BF6AAB82LL), l_1420)) | l_1420) == l_1420))) , 7L)) ^ 0UL) & l_1420) ^ (*g_771)))
                {
                    const uint8_t l_1423[7][6][4] = {{{0x11L,0x1AL,0x11L,0x11L},{0x1AL,0x1AL,255UL,0x1AL},{0x1AL,0x11L,0x11L,0x1AL},{0x11L,0x1AL,0x11L,0x11L},{0x1AL,0x1AL,255UL,0x1AL},{0x1AL,0x11L,0x11L,0x1AL}},{{0x11L,0x1AL,0x11L,0x11L},{0x1AL,0x1AL,255UL,0x1AL},{0x1AL,0x11L,0x11L,0x1AL},{0x11L,0x1AL,0x11L,0x11L},{0x1AL,0x1AL,255UL,0x1AL},{0x1AL,0x11L,0x11L,0x1AL}},{{0x11L,0x1AL,0x11L,0x11L},{0x1AL,0x1AL,255UL,0x1AL},{0x1AL,0x11L,0x11L,0x1AL},{0x11L,0x1AL,0x11L,0x11L},{0x1AL,0x1AL,255UL,0x1AL},{0x1AL,0x11L,0x11L,0x1AL}},{{0x11L,0x1AL,0x11L,0x11L},{0x1AL,0x1AL,255UL,0x1AL},{0x1AL,0x11L,0x11L,0x1AL},{0x11L,0x1AL,0x11L,0x11L},{0x1AL,0x1AL,255UL,0x1AL},{0x1AL,0x11L,0x11L,0x1AL}},{{0x11L,0x1AL,0x11L,0x11L},{0x1AL,0x1AL,255UL,0x1AL},{0x1AL,0x11L,0x11L,0x1AL},{0x11L,0x1AL,0x11L,0x11L},{0x1AL,0x1AL,255UL,0x1AL},{0x1AL,0x11L,0x11L,0x1AL}},{{0x11L,0x1AL,0x11L,0x11L},{0x1AL,0x1AL,255UL,0x11L},{0x11L,255UL,255UL,0x11L},{255UL,0x11L,255UL,255UL},{0x11L,0x11L,0x1AL,0x11L},{0x11L,255UL,255UL,0x11L}},{{255UL,0x11L,255UL,255UL},{0x11L,0x11L,0x1AL,0x11L},{0x11L,255UL,255UL,0x11L},{255UL,0x11L,255UL,255UL},{0x11L,0x11L,0x1AL,0x11L},{0x11L,255UL,255UL,0x11L}}};
                    int i, j, k;
                    for (g_65.f1 = 1; (g_65.f1 <= 9); g_65.f1 += 1)
                    {
                        (*l_1413) = &l_1420;
                    }
                    (***g_475) ^= l_1423[6][0][1];
                    return (*g_678);
                }
                else
                {
                    const int32_t *l_1424 = (void*)0;
                    const int32_t **l_1425 = &l_1424;
                    const int32_t *l_1426[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1426[i] = &g_1427[0][1];
                    l_1430 = (l_1428 = (l_1426[1] = ((*l_1425) = l_1424)));
                    for (g_105.f1 = 0; (g_105.f1 <= 4); g_105.f1 += 1)
                    {
                        int i;
                        (**l_1413) &= (-1L);
                    }
                    for (l_1403 = 1; (l_1403 >= 0); l_1403 -= 1)
                    {
                        (**l_1413) &= l_1431;
                    }
                    return l_1432[1][0];
                }
            }
        }
    }
    if (((*l_1726) = (safe_mul_func_uint8_t_u_u((*g_704), (((((safe_div_func_uint16_t_u_u((((((*l_1430) >= (&l_1608 != ((safe_rshift_func_int16_t_s_u((l_1724[7] || (+0xA086D478B66BC7D9LL)), (((***g_769) , (*l_1430)) && (*l_1430)))) , &l_1608))) <= (*l_1430)) , (void*)0) == (void*)0), (*l_1430))) , (*l_1430)) , &g_1445) != (void*)0) <= 0x6351714F1589972FLL)))))
    {
        (*p_25) = (*p_24);
    }
    else
    {
        int8_t l_1730 = (-1L);
        int32_t l_1753 = 1L;
        int32_t l_1776 = 0x3407ED19L;
        int32_t l_1778 = 0L;
        int32_t l_1779 = (-1L);
        int32_t l_1780 = 0x80EF3EB6L;
        int32_t l_1781[3][2];
        uint64_t **l_1821[3];
        int32_t l_1822 = 0xEE71DB69L;
        int32_t *l_1832[7][8] = {{&l_1781[1][0],&l_1474[1][0][4],&l_1781[1][0],(void*)0,(void*)0,&l_1781[1][0],&l_1474[1][0][4],&l_1781[1][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1781[1][0],(void*)0,(void*)0,&l_1781[1][0],&l_1474[1][0][4],&l_1781[1][0],(void*)0,(void*)0},{(void*)0,&l_1474[1][0][4],(void*)0,(void*)0,&l_1474[1][0][4],(void*)0,&l_1474[1][0][4],(void*)0},{&l_1781[1][0],&l_1474[1][0][4],&l_1781[1][0],(void*)0,(void*)0,&l_1781[1][0],&l_1474[1][0][4],&l_1781[1][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_1781[i][j] = 0xEECF55CEL;
        }
        for (i = 0; i < 3; i++)
            l_1821[i] = (void*)0;
        if ((safe_add_func_int64_t_s_s(((+((*l_1430) , (((*l_1726) = (l_1730 >= ((*g_704) = ((void*)0 == l_1731[0])))) || (0xDC00L || (*l_1726))))) < ((((!3UL) != ((*l_1430) >= (safe_unary_minus_func_int32_t_s((l_1734 = (l_1404 = (((*l_1506) != (void*)0) || 0x5149AB2D0FCB1ABALL))))))) != 0x01L) < l_1730)), 0x704F972C5DD24BCCLL)))
        {
            return (**g_677);
        }
        else
        {
            uint16_t l_1747 = 0x1FE2L;
            int16_t *l_1752 = &g_134;
            int32_t l_1754 = 0x18F944E9L;
            int32_t l_1766 = 1L;
            int32_t l_1777[3];
            uint8_t l_1824[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
            uint8_t ***l_1826 = (void*)0;
            int i;
            for (i = 0; i < 3; i++)
                l_1777[i] = 0xC14FAE2AL;
            for (g_136 = (-17); (g_136 < 41); g_136 = safe_add_func_int16_t_s_s(g_136, 2))
            {
                const int8_t *l_1762 = (void*)0;
                const int8_t **l_1761 = &l_1762;
                const int8_t ***l_1760 = &l_1761;
                int32_t l_1774[1][9][7] = {{{0xC950F675L,0x560D719BL,9L,(-1L),0x45FFCA09L,0xC950F675L,(-1L)},{2L,(-7L),0x3EBB0386L,0xE8467604L,0xE8467604L,0x3EBB0386L,(-7L)},{0x560D719BL,1L,9L,0x126C7DAAL,1L,(-1L),0x96E5D97CL},{0xA0E4AA96L,0xE8467604L,0x37850AD6L,0xA0E4AA96L,(-7L),0xA0E4AA96L,0x37850AD6L},{0x45FFCA09L,0x45FFCA09L,(-10L),0x126C7DAAL,0x560D719BL,0xB99BF117L,0x45FFCA09L},{0xAFB2F278L,0x37850AD6L,0x0026A8DFL,0xE8467604L,0L,0L,0xE8467604L},{(-1L),0x96E5D97CL,(-1L),(-1L),0x560D719BL,(-1L),1L},{0xE8467604L,(-7L),1L,7L,(-7L),0x28DA48B9L,(-7L)},{(-7L),(-1L),(-1L),(-7L),1L,(-1L),0x560D719BL}}};
                uint8_t l_1783[9];
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_1783[i] = 0x24L;
                for (g_71 = 0; (g_71 <= 8); g_71 += 1)
                {
                    uint8_t l_1759 = 0xD0L;
                    int32_t l_1764[9] = {1L,0x2611C6C0L,1L,0x2611C6C0L,1L,0x2611C6C0L,1L,0x2611C6C0L,1L};
                    int32_t *l_1767 = &l_1404;
                    int32_t *l_1768 = &l_1764[7];
                    int32_t *l_1769 = &l_1474[1][0][4];
                    int32_t *l_1770 = &l_1754;
                    int32_t *l_1771 = &l_1764[1];
                    int32_t *l_1772 = &l_1474[1][0][4];
                    int32_t *l_1773[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_1773[i] = &l_1766;
                    l_1766 &= ((((safe_add_func_uint64_t_u_u(l_1724[g_71], (safe_mod_func_uint16_t_u_u(l_1730, (safe_div_func_int16_t_s_s(((safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(((*l_1726) = l_1747), ((l_1764[1] ^= (((((safe_div_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u((((l_1754 = (((***g_769) = ((l_1752 != (void*)0) & 9UL)) | (l_1753 = (-1L)))) | (safe_sub_func_int8_t_s_s(((*p_25) , (safe_add_func_int8_t_s_s(1L, l_1724[g_71]))), l_1759))) , l_1753), 0x30L)) , l_1760) == l_1763), 0xA9L)) , l_1754) || 0x94ACL) & l_1759) ^ (*l_1430))) & l_1747))), 0x1A1385181973B233LL)) > l_1759), l_1747)))))) <= g_1765) | 0x92F5559B22578FD3LL) , l_1754);
                    l_1783[1]++;
                    (*l_1772) |= 0xD31EDAFAL;
                    l_1768 = &l_1474[0][0][4];
                }
            }
            for (g_197 = 0; (g_197 > 12); g_197 = safe_add_func_uint16_t_u_u(g_197, 9))
            {
                uint64_t l_1818[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1818[i] = 18446744073709551606UL;
                for (l_1776 = 0; (l_1776 >= 12); l_1776 = safe_add_func_int32_t_s_s(l_1776, 9))
                {
                    uint8_t l_1798 = 0xA3L;
                    int64_t l_1828[6][5] = {{(-1L),1L,0x72DA8CB9F6F38F42LL,1L,(-1L)},{1L,1L,7L,(-1L),7L},{7L,7L,0x72DA8CB9F6F38F42LL,(-1L),1L},{1L,(-1L),(-1L),1L,1L},{1L,(-7L),0x72DA8CB9F6F38F42LL,0x72DA8CB9F6F38F42LL,(-7L)},{1L,(-1L),0x72DA8CB9F6F38F42LL,7L,7L}};
                    int32_t l_1831 = 0xAEEA12D7L;
                    int i, j;
                    for (g_71 = (-23); (g_71 <= (-29)); g_71--)
                    {
                        uint16_t *l_1805 = &l_1673;
                        uint32_t *l_1808 = &g_206;
                        uint16_t *l_1823 = &l_1747;
                        int32_t l_1825 = 0x1B32FF9FL;
                        int32_t l_1830 = 0x1D084B58L;
                        l_1831 = (safe_unary_minus_func_int64_t_s((+(safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((((l_1798 && ((safe_mod_func_int64_t_s_s((((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((((*l_1805)++) || (((*l_1808) |= ((***g_769) &= l_1798)) <= (*l_1430))) > (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(((((*p_24) , ((safe_sub_func_uint16_t_u_u(((l_1825 = (+(((l_1798 , l_1818[2]) > l_1778) , ((((*l_1823) = (safe_sub_func_int8_t_s_s(((((*l_1726) |= (l_1821[2] != l_1821[2])) != l_1822) == (*l_1430)), (*l_1430)))) == 1L) >= l_1824[1])))) , l_1824[2]), 4L)) , 1L)) , l_1826) != (void*)0), (*g_704))) , l_1818[2]), 1UL)) | g_1827), 0xEEL))), 0x3802L)), l_1779)) & l_1730) || l_1828[1][1]), l_1818[0])) , (-1L))) == l_1781[0][0]) == 0xC7C76D0AF6ED201DLL) | l_1818[2]), g_1829)) < l_1828[1][1]), l_1830)))));
                        return (**g_677);
                    }
                    return p_25;
                }
                return p_25;
            }
            l_1776 &= (l_1778 && ((*l_1430) >= l_1753));
        }
        l_1832[4][7] = &l_1734;
    }
    (*l_1726) = (*l_1430);
    return p_25;
}







static uint32_t func_28(int32_t ** p_29, struct S0 p_30)
{
    uint8_t l_1327 = 0x20L;
    struct S0 l_1338 = {0xF93BFA25L,0x8BE2D38E55A3E67FLL,-10L,0x9F649E4ECB8CD6ACLL,0x05L};
    int32_t l_1345[8];
    uint8_t **l_1357 = &g_704;
    uint16_t *l_1358 = &g_1028;
    uint64_t ***l_1367 = &g_1009;
    int32_t *l_1368 = &l_1345[3];
    const int64_t *l_1379[2];
    int64_t l_1388 = 0xEBA5EA97A5B9D769LL;
    int32_t l_1396 = 0xAF747803L;
    int i;
    for (i = 0; i < 8; i++)
        l_1345[i] = (-9L);
    for (i = 0; i < 2; i++)
        l_1379[i] = &g_71;
    for (g_251 = 0; (g_251 != 24); g_251 = safe_add_func_uint64_t_u_u(g_251, 4))
    {
        int32_t l_1329[5][1] = {{0x518E4753L},{0x63A6C6A5L},{0x518E4753L},{0x63A6C6A5L},{0x518E4753L}};
        uint64_t ***l_1335 = &g_1009;
        int32_t *l_1346[6] = {&g_6,&g_364,&g_364,&g_6,&g_364,&g_364};
        int8_t l_1347 = 0x3CL;
        uint16_t l_1348 = 1UL;
        int i, j;
        for (p_30.f1 = 4; (p_30.f1 >= 47); ++p_30.f1)
        {
            int64_t l_1321 = (-5L);
            uint8_t **l_1324 = &g_704;
            uint32_t ***l_1337 = &g_770;
            uint16_t *l_1344 = &g_110;
            for (g_368 = 0; (g_368 <= 12); ++g_368)
            {
                const uint8_t *l_1326[5] = {&g_976,&g_976,&g_976,&g_976,&g_976};
                const uint8_t **l_1325 = &l_1326[1];
                int32_t l_1328[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_1328[i] = 0x74D27C85L;
                for (g_71 = 22; (g_71 <= (-3)); g_71 = safe_sub_func_uint8_t_u_u(g_71, 3))
                {
                    for (g_365 = 6; (g_365 >= 2); g_365 -= 1)
                    {
                        uint8_t *l_1317 = (void*)0;
                        uint8_t *l_1318 = &g_976;
                        int i;
                        l_1328[4] = (~(safe_mul_func_int16_t_s_s((g_62[(g_365 + 2)] || (((((((*l_1318)--) , l_1321) & (p_30.f1 <= 0xA511L)) , (safe_mod_func_uint32_t_u_u((((((void*)0 == l_1324) > p_30.f0) && (l_1325 != (g_136 , &g_704))) , p_30.f3), 0x6C7EE110L))) >= (*g_717)) , l_1327)), p_30.f2)));
                        if (g_365)
                            goto lbl_1369;
                        (**g_475) = (void*)0;
                    }
                    if (l_1329[1][0])
                        break;
                }
                for (g_206 = 0; (g_206 < 10); g_206 = safe_add_func_uint32_t_u_u(g_206, 1))
                {
                    return p_30.f0;
                }
            }
            l_1345[3] &= (((~(safe_rshift_func_int16_t_s_u((p_30.f1 > p_30.f2), ((*l_1344) = ((l_1335 != ((+((l_1327 , (*g_768)) == l_1337)) , &g_1009)) != ((l_1338 , (safe_rshift_func_uint16_t_u_u((!(safe_add_func_int64_t_s_s(0xDA07179BD8CD1213LL, p_30.f2))), l_1338.f0))) , (*g_704))))))) >= l_1329[1][0]) == l_1329[1][0]);
        }
        l_1346[1] = &l_1345[3];
        if (l_1338.f0)
            continue;
        l_1348++;
    }
lbl_1369:
    (*l_1368) &= (safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(p_30.f0, ((p_29 == ((safe_sub_func_uint16_t_u_u(((*l_1358) &= ((void*)0 != l_1357)), ((((safe_lshift_func_uint16_t_u_u(((void*)0 != &g_823), (safe_lshift_func_uint8_t_u_u(l_1327, (safe_mul_func_uint16_t_u_u(((p_30.f3 , (safe_sub_func_int32_t_s_s((((void*)0 == l_1367) > p_30.f2), p_30.f0))) , g_65.f0), l_1338.f2)))))) < 0xADDFL) ^ g_111) || 7L))) , p_29)) , p_30.f4))) <= l_1338.f2), l_1338.f4));
    if ((l_1367 != ((!(*l_1368)) , &g_1009)))
    {
        uint16_t l_1372 = 0x1AB6L;
        int32_t ****l_1386[4][4][9] = {{{&g_471,(void*)0,&g_475,&g_475,&g_471,&g_471,&g_471,&g_471,&g_475},{&g_475,(void*)0,&g_471,(void*)0,&g_471,&g_475,&g_471,(void*)0,&g_471},{&g_471,&g_471,&g_471,&g_471,&g_471,&g_475,&g_475,&g_475,&g_475},{&g_471,&g_471,&g_471,&g_471,(void*)0,&g_475,&g_471,&g_475,&g_475}},{{&g_471,&g_475,&g_471,(void*)0,(void*)0,&g_471,&g_471,&g_471,&g_475},{&g_475,(void*)0,&g_471,&g_475,&g_475,&g_471,(void*)0,&g_475,&g_475},{(void*)0,&g_471,&g_475,&g_475,&g_471,&g_475,(void*)0,&g_475,&g_471},{(void*)0,&g_475,&g_475,(void*)0,(void*)0,&g_475,&g_475,(void*)0,(void*)0}},{{&g_471,&g_475,&g_475,&g_471,&g_471,(void*)0,(void*)0,(void*)0,(void*)0},{&g_475,(void*)0,&g_475,&g_471,(void*)0,(void*)0,&g_471,&g_471,&g_475},{(void*)0,&g_471,&g_471,(void*)0,&g_471,&g_471,&g_471,(void*)0,&g_471},{&g_475,&g_475,&g_471,&g_475,&g_475,&g_471,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_475,&g_475,(void*)0,(void*)0,&g_471,&g_471,&g_475},{(void*)0,&g_475,&g_475,&g_471,(void*)0,(void*)0,&g_471,&g_471,&g_475},{&g_471,(void*)0,&g_471,&g_471,&g_471,&g_475,&g_471,&g_475,&g_471},{&g_471,&g_471,(void*)0,&g_475,&g_471,&g_475,(void*)0,&g_475,&g_475}}};
        int64_t *l_1387 = &g_202;
        struct S0 l_1394[5] = {{4294967295UL,0x831626BBC687B7F4LL,6L,18446744073709551611UL,0xA9L},{4294967295UL,0x831626BBC687B7F4LL,6L,18446744073709551611UL,0xA9L},{4294967295UL,0x831626BBC687B7F4LL,6L,18446744073709551611UL,0xA9L},{4294967295UL,0x831626BBC687B7F4LL,6L,18446744073709551611UL,0xA9L},{4294967295UL,0x831626BBC687B7F4LL,6L,18446744073709551611UL,0xA9L}};
        uint32_t l_1395 = 0xA48104ADL;
        int i, j, k;
        if (g_111)
            goto lbl_1369;
        l_1372 = (~0x2C2AL);
        (*l_1368) = (safe_mul_func_uint8_t_u_u(((**l_1357) |= (safe_mod_func_uint16_t_u_u((((p_30.f2 & (((l_1388 = (((safe_lshift_func_uint8_t_u_s(((void*)0 == l_1379[0]), 7)) && ((safe_mul_func_int16_t_s_s(g_105.f3, (l_1372 & ((*l_1387) |= (((((safe_mod_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(p_30.f4, l_1372)), (((g_475 = &g_472[5]) == (g_471 = &p_29)) , p_30.f4))) ^ p_30.f3) || (**g_770)) || 0x0D148CD3L) , p_30.f2))))) , 4294967288UL)) || (*l_1368))) | p_30.f0) || 1UL)) && (*l_1368)) < (**g_770)), p_30.f1))), (*l_1368)));
        l_1396 &= ((((safe_mod_func_int32_t_s_s(((p_30.f1 | (safe_rshift_func_int16_t_s_s(((!((*g_388) != (((*g_64) = l_1394[4]) , (void*)0))) == ((((p_30.f2 | ((*g_704) = l_1395)) > ((*l_1368) & 18446744073709551615UL)) , ((*l_1368) = ((p_30.f4 < 0x0EL) , (*l_1368)))) > 4294967293UL)), 6))) == g_202), p_30.f1)) ^ g_2) & p_30.f0) != p_30.f1);
    }
    else
    {
        for (g_367 = 24; (g_367 >= 13); g_367--)
        {
            return p_30.f3;
        }
        for (l_1327 = 0; (l_1327 != 60); l_1327 = safe_add_func_int64_t_s_s(l_1327, 3))
        {
            for (g_105.f3 = 0; (g_105.f3 != 47); g_105.f3++)
            {
                (*g_64) = p_30;
                l_1368 = (**g_475);
            }
        }
    }
    (**g_475) = &l_1396;
    return (***g_769);
}







static int64_t func_31(int16_t p_32)
{
    uint32_t *****l_1284 = &g_768;
    const uint32_t *l_1297 = &g_318[0][3];
    const uint32_t **l_1296 = &l_1297;
    const uint32_t ***l_1295 = &l_1296;
    const uint32_t ****l_1294 = &l_1295;
    const uint32_t *****l_1293 = &l_1294;
    const int64_t *l_1298 = &g_73;
    int32_t l_1303 = 0x058EE393L;
    uint32_t l_1304 = 18446744073709551612UL;
    uint16_t *l_1305 = &g_110;
    l_1303 = (p_32 | ((*l_1305) ^= (((l_1284 = &g_768) == &g_768) > (((safe_mul_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(((((((safe_mul_func_int16_t_s_s((((((void*)0 == l_1293) != (l_1298 != l_1298)) , (safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(p_32, p_32)), 1))) , p_32), p_32)) , l_1303) <= 0x356AL) , (void*)0) == &g_366) >= l_1303), 0xC52478A406B85A0DLL)) , g_1202[9]), g_197)) && l_1304) == p_32))));
    return p_32;
}







static int8_t func_35(const int32_t ** p_36)
{
    uint8_t l_396 = 1UL;
    int32_t l_402 = 0xACC03EEEL;
    int8_t l_431 = 0L;
    int8_t l_451 = (-4L);
    int32_t *l_468[2];
    int32_t ****l_488 = &g_475;
    struct S0 l_494 = {0x5B7EA9CCL,18446744073709551610UL,0L,0xAA2FA70523B75675LL,0x8DL};
    uint8_t l_530 = 0UL;
    uint32_t l_569 = 0UL;
    uint16_t l_723 = 1UL;
    uint32_t l_866[1];
    uint8_t l_939 = 0x32L;
    struct S0 *l_960[3][5] = {{&g_105,&g_105,&g_105,&g_105,&g_105},{&g_105,&g_105,&g_105,&g_105,&g_105},{&g_105,&g_105,&g_105,&g_105,&g_105}};
    uint64_t l_969 = 0xAF3E98BCA40E645CLL;
    const int32_t * const l_987 = &g_988;
    const int32_t * const *l_986 = &l_987;
    const int32_t * const **l_985[8][5] = {{(void*)0,(void*)0,&l_986,(void*)0,(void*)0},{&l_986,&l_986,(void*)0,&l_986,(void*)0},{&l_986,&l_986,&l_986,(void*)0,&l_986},{&l_986,&l_986,&l_986,&l_986,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_986,&l_986,(void*)0,(void*)0},{&l_986,&l_986,&l_986,(void*)0,&l_986},{&l_986,&l_986,(void*)0,&l_986,&l_986}};
    int8_t **l_1031 = (void*)0;
    uint16_t *l_1068 = &g_368;
    int32_t l_1075[7] = {0xC72607BFL,0xC72607BFL,8L,0xC72607BFL,0xC72607BFL,8L,0xC72607BFL};
    const uint32_t l_1083 = 4294967291UL;
    uint64_t **l_1125 = &g_717;
    uint64_t l_1126 = 0xAF96790C8B27FD8CLL;
    struct S0 ***l_1162 = &g_678;
    int64_t l_1221[6][8][5] = {{{0L,0x4FFC6169E9E64CE2LL,1L,(-1L),0L},{0L,0x38DFC77159E480FDLL,(-7L),0x3D6E4D1851421ACBLL,0x2A92A20DDB801D3DLL},{0x47D90AD9385E8676LL,1L,1L,0xDC64158D0F146C95LL,(-1L)},{0xAD832A11E11002A8LL,1L,0L,1L,0xAD832A11E11002A8LL},{0x52082D989544DFFBLL,0L,(-1L),7L,1L},{1L,(-4L),0xAB38D4F1C20AC3E6LL,0x39FD20A2D05A343BLL,0x47D90AD9385E8676LL},{(-1L),(-1L),0x8981E237C47B78E2LL,0L,1L},{(-5L),0x39FD20A2D05A343BLL,(-2L),0L,0xAD832A11E11002A8LL}},{{1L,(-6L),(-1L),0x8981E237C47B78E2LL,(-1L)},{0L,6L,(-1L),(-6L),0x2A92A20DDB801D3DLL},{0x39FD20A2D05A343BLL,0x52082D989544DFFBLL,0x47D90AD9385E8676LL,0L,0L},{(-1L),0xF36B475B5A368BB6LL,0x3D6E4D1851421ACBLL,0L,(-1L)},{0xDC64158D0F146C95LL,0x29E746130335E2BFLL,0x38DFC77159E480FDLL,(-6L),0x59A49DDBCCA79A12LL},{1L,0x1E79AC496352259BLL,0xABC9EF0FFBFA21DFLL,0x8981E237C47B78E2LL,0x8981E237C47B78E2LL},{0x29E746130335E2BFLL,(-5L),0x29E746130335E2BFLL,0L,(-1L)},{0x59A49DDBCCA79A12LL,0xABC9EF0FFBFA21DFLL,1L,0L,7L}},{{0xABC9EF0FFBFA21DFLL,0x2C96E562BDB73B09LL,0L,0x39FD20A2D05A343BLL,0x5437E8B65C49B460LL},{0L,0xAD832A11E11002A8LL,1L,7L,0xAFA9AE94B97253A1LL},{(-6L),0x59A49DDBCCA79A12LL,0x29E746130335E2BFLL,1L,0x52082D989544DFFBLL},{0x4FFC6169E9E64CE2LL,(-2L),0xABC9EF0FFBFA21DFLL,0xDC64158D0F146C95LL,0x8914708F893ED3FCLL},{(-6L),(-6L),0x38DFC77159E480FDLL,0x3D6E4D1851421ACBLL,(-1L)},{7L,0x8914708F893ED3FCLL,0x3D6E4D1851421ACBLL,(-1L),(-4L)},{(-1L),0x8914708F893ED3FCLL,0x47D90AD9385E8676LL,1L,0xDC64158D0F146C95LL},{0L,(-6L),(-1L),(-1L),(-1L)}},{{(-1L),(-2L),(-1L),(-1L),(-2L)},{0x5437E8B65C49B460LL,0x59A49DDBCCA79A12LL,(-2L),0x1E79AC496352259BLL,0x9DE0917DCE342F5FLL},{(-1L),0xAD832A11E11002A8LL,0x8981E237C47B78E2LL,0x38DFC77159E480FDLL,0L},{0x8981E237C47B78E2LL,0x2C96E562BDB73B09LL,0xAB38D4F1C20AC3E6LL,(-1L),0x39FD20A2D05A343BLL},{(-5L),1L,(-7L),0x29E746130335E2BFLL,0L},{(-2L),0x5437E8B65C49B460LL,(-1L),0xAD832A11E11002A8LL,0x29E746130335E2BFLL},{1L,1L,0x9DE0917DCE342F5FLL,0x3D6E4D1851421ACBLL,0L},{(-1L),0x59A49DDBCCA79A12LL,0L,0x9DE0917DCE342F5FLL,0x5437E8B65C49B460LL}},{{0x8981E237C47B78E2LL,0x2A92A20DDB801D3DLL,(-1L),1L,0x5437E8B65C49B460LL},{0x4FFC6169E9E64CE2LL,0xAFA9AE94B97253A1LL,0x2A92A20DDB801D3DLL,(-1L),0L},{0x39FD20A2D05A343BLL,(-1L),0L,(-1L),0x29E746130335E2BFLL},{0x4FC977852BB809A1LL,0x39FD20A2D05A343BLL,0x39FD20A2D05A343BLL,0x4FC977852BB809A1LL,0L},{0x2C96E562BDB73B09LL,0x52082D989544DFFBLL,0x29E746130335E2BFLL,7L,0x39FD20A2D05A343BLL},{0x38DFC77159E480FDLL,(-5L),(-1L),1L,(-2L)},{1L,(-7L),3L,7L,0xAD832A11E11002A8LL},{0xDC64158D0F146C95LL,0x47D90AD9385E8676LL,(-4L),0x4FC977852BB809A1LL,1L}},{{0x59A49DDBCCA79A12LL,(-1L),0xAFA9AE94B97253A1LL,(-1L),6L},{0xB89F41BC8C77A9C8LL,0x29E746130335E2BFLL,6L,(-1L),3L},{3L,1L,0xAB38D4F1C20AC3E6LL,1L,(-7L)},{(-7L),0x4FC977852BB809A1LL,0xAB38D4F1C20AC3E6LL,0x9DE0917DCE342F5FLL,0xF36B475B5A368BB6LL},{0x52082D989544DFFBLL,0xF36B475B5A368BB6LL,6L,0x3D6E4D1851421ACBLL,(-1L)},{(-2L),6L,0xAFA9AE94B97253A1LL,0xAD832A11E11002A8LL,0xAFA9AE94B97253A1LL},{0x9DE0917DCE342F5FLL,0x9DE0917DCE342F5FLL,(-4L),0x29E746130335E2BFLL,(-1L)},{0x5437E8B65C49B460LL,0xABC9EF0FFBFA21DFLL,3L,(-5L),(-2L)}}};
    int16_t l_1232 = 3L;
    uint32_t l_1278 = 1UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_468[i] = &l_402;
    for (i = 0; i < 1; i++)
        l_866[i] = 0x46FC9D54L;
    for (g_71 = 2; (g_71 <= 6); g_71 += 1)
    {
        int32_t l_397[3];
        struct S0 **l_399 = &g_218;
        struct S0 ***l_398[10] = {&l_399,&l_399,&l_399,&l_399,&l_399,&l_399,&l_399,&l_399,&l_399,&l_399};
        int64_t *l_408 = &g_71;
        int32_t l_409 = (-2L);
        int32_t l_464 = 4L;
        int32_t *l_486 = &l_397[1];
        const uint8_t l_487[5] = {251UL,251UL,251UL,251UL,251UL};
        int16_t *l_512 = (void*)0;
        const int8_t *l_534 = &l_494.f2;
        const int8_t **l_533 = &l_534;
        int32_t *l_558 = &g_367;
        int32_t **l_557[10][3][2] = {{{&l_558,&l_558},{&l_558,&l_558},{&l_558,(void*)0}},{{&l_558,(void*)0},{(void*)0,&l_558},{&l_558,&l_558}},{{(void*)0,(void*)0},{&l_558,(void*)0},{&l_558,&l_558}},{{&l_558,&l_558},{&l_558,&l_558},{&l_558,&l_558}},{{&l_558,&l_558},{&l_558,&l_558},{&l_558,&l_558}},{{&l_558,(void*)0},{&l_558,(void*)0},{(void*)0,&l_558}},{{&l_558,&l_558},{(void*)0,(void*)0},{&l_558,(void*)0}},{{&l_558,&l_558},{&l_558,&l_558},{&l_558,&l_558}},{{&l_558,&l_558},{&l_558,&l_558},{&l_558,&l_558}},{{&l_558,&l_558},{&l_558,(void*)0},{&l_558,(void*)0}}};
        const uint32_t *l_582 = &l_569;
        const uint32_t **l_581 = &l_582;
        const int32_t l_597 = 0x9F7EB885L;
        int32_t **l_619 = &l_558;
        uint64_t l_786 = 1UL;
        uint64_t **l_799 = (void*)0;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_397[i] = (-1L);
        for (g_111 = 0; (g_111 <= 9); g_111 += 1)
        {
            uint64_t *l_406 = &g_105.f1;
            int32_t l_411 = 0x070EBD95L;
            int16_t l_423 = 1L;
            struct S0 l_440[2][4] = {{{4294967286UL,0x28A214FB84C77609LL,0x96L,0xC17BD7970D75DFE7LL,0x52L},{4294967286UL,0x28A214FB84C77609LL,0x96L,0xC17BD7970D75DFE7LL,0x52L},{4294967286UL,0x28A214FB84C77609LL,0x96L,0xC17BD7970D75DFE7LL,0x52L},{4294967286UL,0x28A214FB84C77609LL,0x96L,0xC17BD7970D75DFE7LL,0x52L}},{{4294967286UL,0x28A214FB84C77609LL,0x96L,0xC17BD7970D75DFE7LL,0x52L},{4294967286UL,0x28A214FB84C77609LL,0x96L,0xC17BD7970D75DFE7LL,0x52L},{4294967286UL,0x28A214FB84C77609LL,0x96L,0xC17BD7970D75DFE7LL,0x52L},{4294967286UL,0x28A214FB84C77609LL,0x96L,0xC17BD7970D75DFE7LL,0x52L}}};
            uint64_t **l_466 = &l_406;
            int64_t l_514 = 1L;
            int32_t l_517[6][9][4] = {{{(-1L),(-1L),0x8218CC2EL,0x2EF5E45DL},{1L,0x43521D20L,0x97306432L,1L},{(-1L),(-1L),0x8218CC2EL,0L},{(-9L),(-1L),0x2EF5E45DL,1L},{(-1L),0x8E5EC7C1L,0x1956D2CAL,0x22720485L},{(-6L),1L,(-6L),6L},{0xCCDBCE99L,(-8L),0x3ECA7CFCL,0x111CA660L},{(-1L),0L,0xFED7B9C6L,0x307CCA20L},{(-6L),0L,0L,0x1956D2CAL}},{{1L,1L,(-9L),(-1L)},{(-1L),0x1956D2CAL,(-1L),0x97306432L},{1L,1L,(-6L),1L},{0x97306432L,1L,2L,(-1L)},{(-1L),0xFED7B9C6L,(-1L),1L},{0x1956D2CAL,1L,0x8218CC2EL,(-6L)},{0x307CCA20L,0x0DCECA9FL,(-9L),(-1L)},{0x111CA660L,(-1L),0xEB70D557L,0xCCDBCE99L},{6L,1L,6L,(-6L)}},{{0x22720485L,(-9L),0x86AD7AAAL,(-1L)},{1L,(-1L),8L,(-9L)},{0L,0L,8L,(-1L)},{1L,0x43521D20L,0x86AD7AAAL,0x111CA660L},{0x22720485L,0xEB70D557L,6L,1L},{6L,1L,0xEB70D557L,1L},{0x111CA660L,0L,(-9L),1L},{0x307CCA20L,8L,0x8218CC2EL,0x43521D20L},{0x1956D2CAL,(-1L),(-1L),(-1L)}},{{(-1L),0L,2L,0x22720485L},{0x97306432L,6L,(-6L),1L},{1L,(-8L),(-1L),0x0D191247L},{(-1L),0x43521D20L,(-9L),0x307CCA20L},{1L,0x8218CC2EL,0L,(-9L)},{(-6L),1L,0xFED7B9C6L,8L},{(-1L),(-9L),0x3ECA7CFCL,0x97306432L},{0xCCDBCE99L,(-6L),(-6L),0xCCDBCE99L},{(-6L),1L,0x1956D2CAL,0x2AD86E68L}},{{(-1L),0x0DCECA9FL,0x2EF5E45DL,1L},{(-9L),0L,0x8218CC2EL,1L},{(-1L),0x0DCECA9FL,0L,0x2AD86E68L},{0x111CA660L,1L,(-1L),0xCCDBCE99L},{1L,(-6L),6L,0x97306432L},{1L,(-9L),0x8E5EC7C1L,8L},{1L,1L,0x1A056805L,(-9L)},{0x43521D20L,0x8218CC2EL,8L,0x307CCA20L},{(-1L),0x43521D20L,0x8E5EC7C1L,0x0D191247L}},{{0x22720485L,(-8L),(-1L),1L},{1L,6L,0xEB70D557L,0x22720485L},{0x0D191247L,0L,0L,(-1L)},{0x307CCA20L,(-1L),6L,0x43521D20L},{(-9L),8L,(-1L),(-6L)},{0L,0x8218CC2EL,0x55902905L,(-1L)},{0L,0x258A06F3L,(-4L),0x258A06F3L},{(-1L),0x49232F92L,(-10L),0xFED7B9C6L},{2L,0x8E5EC7C1L,0x1A056805L,0x88B243DFL}}};
            uint32_t l_563 = 0xEC6AE309L;
            uint16_t l_600 = 0x9708L;
            uint32_t *l_623 = (void*)0;
            uint32_t **l_622 = &l_623;
            uint8_t l_647 = 0x7DL;
            int64_t l_682 = 0x8A5BAF2EF90687FBLL;
            uint8_t l_686[3][5] = {{1UL,1UL,1UL,1UL,1UL},{0x06L,0xEEL,0x06L,0xEEL,0x06L},{1UL,1UL,1UL,1UL,1UL}};
            uint32_t ****l_773 = &g_769;
            uint16_t l_797 = 65535UL;
            int32_t l_819 = (-1L);
            int i, j, k;
        }
        l_464 |= (safe_lshift_func_int8_t_s_s((*l_486), 1));
        for (g_178 = 0; (g_178 <= 1); g_178 += 1)
        {
            uint16_t l_824 = 65527UL;
            (*l_486) = (l_824 = ((void*)0 == g_822[6][1][1]));
        }
    }
    if (((*g_717) >= (*g_717)))
    {
        const int32_t *l_825 = &g_2;
        struct S0 l_830 = {0x5FD78B5AL,0xC0D2C0ACC4FB5A66LL,0x53L,0xB9A683BA06BE5007LL,0xB8L};
        int16_t l_837 = 0x3A09L;
        uint64_t l_840 = 0x9C73733B6298ADEFLL;
        int8_t *l_853 = &l_830.f4;
        int32_t l_860 = 0xFF44FDAAL;
        uint32_t l_861 = 18446744073709551609UL;
        int32_t l_869 = 0x4C33F9E2L;
        int32_t l_870 = 0x0830550CL;
        int64_t l_871 = 2L;
        int32_t l_872 = 0x2E2EE5C9L;
        int32_t l_873 = (-1L);
        int32_t l_874 = 0xD0C9ACF8L;
        int32_t l_880 = (-9L);
        int32_t l_881 = 0x4FDA731CL;
        int32_t l_882 = (-10L);
        int32_t l_885 = 0x7852BA25L;
        int32_t l_887 = 0L;
        int32_t l_888[9][10][2] = {{{1L,0xD426C92DL},{0x433D8B05L,0xD6D1BA92L},{0x44DE4E53L,0x39E7D68DL},{0x023125AAL,0xF4B7DCAEL},{3L,(-1L)},{(-1L),0x8BE81C1BL},{1L,5L},{(-1L),6L},{(-1L),0x22EAADA6L},{0L,0x433D8B05L}},{{(-1L),(-7L)},{0x4263D007L,0xA7E905CDL},{0xC452FAF9L,0xA7E905CDL},{0x4263D007L,(-7L)},{(-1L),0x433D8B05L},{0L,0x22EAADA6L},{(-1L),6L},{(-1L),5L},{1L,0x8BE81C1BL},{(-1L),(-1L)}},{{3L,0xF4B7DCAEL},{0x023125AAL,0x39E7D68DL},{0x44DE4E53L,0xD6D1BA92L},{0x433D8B05L,0xD426C92DL},{1L,(-7L)},{0x28AC94F3L,0x45D35A58L},{0x70ED7E1CL,0x0A764027L},{0xD6D1BA92L,5L},{0xCEAEAF34L,0x7831E596L},{0x6FC1F79DL,(-7L)}},{{0x7009F26CL,0xF29173FAL},{1L,1L},{0xAB7CC43EL,0x59355533L},{(-2L),(-4L)},{0x3CAF271CL,0xCEAEAF34L},{(-3L),(-1L)},{0x9FBB6AE9L,1L},{0xF4B7DCAEL,0xAB7CC43EL},{0xF29173FAL,(-3L)},{5L,0xB23D944BL}},{{0x22EAADA6L,0xC3E48288L},{0xA86A7BCDL,1L},{0x59355533L,0x28AC94F3L},{(-8L),(-8L)},{(-1L),(-2L)},{1L,1L},{(-1L),3L},{1L,(-1L)},{0x019A51D0L,0x5047AF91L},{0x019A51D0L,(-1L)}},{{1L,3L},{(-1L),1L},{1L,(-2L)},{(-1L),(-8L)},{(-8L),0x28AC94F3L},{0x59355533L,1L},{0xA86A7BCDL,0xC3E48288L},{0x22EAADA6L,0xB23D944BL},{5L,(-3L)},{0xF29173FAL,0xAB7CC43EL}},{{0xF4B7DCAEL,1L},{0x9FBB6AE9L,(-1L)},{(-3L),0xCEAEAF34L},{0x3CAF271CL,(-4L)},{(-2L),0x59355533L},{0xAB7CC43EL,1L},{1L,0xF29173FAL},{0x7009F26CL,(-7L)},{0x6FC1F79DL,0x7831E596L},{0xCEAEAF34L,5L}},{{0xD6D1BA92L,0x0A764027L},{0x70ED7E1CL,0x45D35A58L},{0x28AC94F3L,(-7L)},{1L,0xD426C92DL},{0x433D8B05L,0xD6D1BA92L},{0x44DE4E53L,0x39E7D68DL},{0x023125AAL,0xF4B7DCAEL},{3L,(-1L)},{(-1L),0x8BE81C1BL},{0xD426C92DL,3L}},{{(-4L),0x22EAADA6L},{0x023125AAL,0x3CAF271CL},{0x4263D007L,2L},{1L,1L},{(-4L),(-1L)},{0x9FBB6AE9L,(-1L)},{(-4L),1L},{1L,2L},{0x4263D007L,0x3CAF271CL},{0x023125AAL,0x22EAADA6L}}};
        uint32_t l_890 = 0x660B9C12L;
        int i, j, k;
        l_825 = l_825;
        for (l_530 = 20; (l_530 == 36); l_530 = safe_add_func_int8_t_s_s(l_530, 3))
        {
            uint32_t l_831 = 0x486FECDBL;
            int64_t *l_839 = &g_73;
            int32_t l_862 = 0x0C05365DL;
            int32_t l_865 = 0x55ADF84BL;
            int32_t l_878 = (-1L);
            int32_t l_883 = 0x46F395B2L;
            int32_t l_884 = 0x773D4DC8L;
            int32_t l_886 = 0x340A64F9L;
            int32_t l_889 = (-1L);
            l_840 ^= (safe_mul_func_int16_t_s_s(((l_830 , l_831) == (safe_lshift_func_int16_t_s_s(((****l_488) | l_831), g_65.f3))), (l_831 > ((*l_839) &= ((safe_unary_minus_func_uint32_t_u(((***g_769) = ((0xF148L || l_837) && (!(((&l_831 == &l_569) , l_831) | g_2)))))) > l_831)))));
            if ((g_73 , (safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((65527UL & (*l_825)) > (****l_488)), (l_831 ^ ((*l_825) < (safe_add_func_uint32_t_u_u((safe_add_func_int64_t_s_s(((*l_839) = (safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((((((void*)0 == l_853) && ((*g_717)--)) , (safe_add_func_uint8_t_u_u(((((safe_add_func_int32_t_s_s((l_860 = ((*l_825) > 0x3429780AL)), (***g_471))) | (****l_488)) < 0xB6B593C1L) <= 1UL), l_831))) > (*g_68)) || 247UL), 0x1756L)), l_831))), 0L)), (**g_770))))))), l_861))))
            {
                int8_t l_863 = (-5L);
                int32_t l_864[8] = {3L,0xFD49154DL,3L,0xFD49154DL,3L,0xFD49154DL,3L,0xFD49154DL};
                int32_t l_875 = 0xC895A2A4L;
                int32_t l_876 = 0xC654E895L;
                int32_t l_877 = 0xC3E589A7L;
                int32_t l_879[4][10][6] = {{{1L,8L,(-1L),0xB26479AEL,0L,0xB26479AEL},{0x606A1BB2L,0x6113F8F4L,0x606A1BB2L,(-1L),0x75B2DA19L,(-1L)},{0x279E012FL,0L,(-1L),0x71487A6BL,(-4L),1L},{0x173430A9L,0L,(-1L),0x71487A6BL,0x65D9BAF8L,(-1L)},{0x279E012FL,0x3CCF7AC1L,6L,(-1L),0xA2A4D933L,0x606A1BB2L},{0x606A1BB2L,0L,0x279E012FL,0xB26479AEL,0L,6L},{1L,0x98B8A26CL,0x279E012FL,0x173430A9L,0x3CCF7AC1L,0x606A1BB2L},{0x2F092EDBL,0x170E7F37L,6L,0xA980C8EFL,0x9C4F72BBL,(-1L)},{0xA980C8EFL,0x9C4F72BBL,(-1L),0x279E012FL,(-1L),1L},{(-1L),0x9C4F72BBL,(-1L),(-1L),0x9C4F72BBL,(-1L)}},{{0x06548EADL,0x170E7F37L,0x606A1BB2L,(-5L),0x3CCF7AC1L,0xB26479AEL},{(-1L),0x98B8A26CL,(-1L),1L,0L,0x71487A6BL},{(-1L),0L,1L,(-5L),0xA2A4D933L,0x279E012FL},{0x06548EADL,0x3CCF7AC1L,0x69BFDCB9L,(-1L),0x65D9BAF8L,0x2F092EDBL},{(-1L),0L,0x71487A6BL,0x279E012FL,(-4L),0x2F092EDBL},{0xA980C8EFL,0L,0x69BFDCB9L,0xA980C8EFL,0x75B2DA19L,0x279E012FL},{0x2F092EDBL,0x6113F8F4L,1L,0x173430A9L,0L,0x71487A6BL},{1L,8L,(-1L),0xB26479AEL,0L,0xB26479AEL},{0x606A1BB2L,0x6113F8F4L,0x606A1BB2L,(-1L),0x75B2DA19L,(-1L)},{0x279E012FL,0L,(-1L),0x71487A6BL,(-4L),1L}},{{0x173430A9L,0L,(-1L),0x71487A6BL,0x65D9BAF8L,(-1L)},{0x279E012FL,0x3CCF7AC1L,6L,(-1L),0xA2A4D933L,0x606A1BB2L},{0x606A1BB2L,0L,0x279E012FL,0xB26479AEL,0L,6L},{1L,0x98B8A26CL,0x279E012FL,0x173430A9L,0x3CCF7AC1L,0x606A1BB2L},{0x2F092EDBL,0x170E7F37L,6L,0xA980C8EFL,0x9C4F72BBL,(-1L)},{0xA980C8EFL,0x9C4F72BBL,(-1L),0x279E012FL,(-1L),1L},{(-1L),0x9C4F72BBL,(-1L),(-1L),0x69BFDCB9L,1L},{0xF15431CDL,0xA980C8EFL,(-5L),0L,1L,0x0C2C2281L},{0x0B80A605L,1L,0xD4A37A26L,8L,(-1L),1L},{0x0B80A605L,0x279E012FL,8L,0L,0x606A1BB2L,0x79A49415L}},{{0xF15431CDL,1L,0xD5048A1FL,0x0B80A605L,(-1L),(-9L)},{1L,(-1L),1L,0x79A49415L,(-1L),(-9L)},{0x16DB8766L,(-1L),0xD5048A1FL,0x16DB8766L,6L,0x79A49415L},{(-9L),0xB26479AEL,8L,(-2L),0x279E012FL,1L},{8L,(-5L),0xD4A37A26L,0x0C2C2281L,0x279E012FL,0x0C2C2281L},{(-5L),0xB26479AEL,(-5L),4L,6L,1L},{0x79A49415L,(-1L),0x0B80A605L,1L,(-1L),(-1L)},{(-2L),(-1L),4L,1L,(-1L),4L},{0x79A49415L,1L,0xEF60F93CL,4L,0x606A1BB2L,(-5L)},{(-5L),0x279E012FL,0x79A49415L,0x0C2C2281L,(-1L),0xEF60F93CL}}};
                struct S0 l_893 = {0UL,0UL,1L,0xF71C0C93DA219B5ELL,0x60L};
                int i, j, k;
                ++l_866[0];
                ++l_890;
                (***g_677) = l_893;
            }
            else
            {
                return (*l_825);
            }
        }
    }
    else
    {
        uint64_t l_896 = 18446744073709551609UL;
        int32_t l_897 = 0x9B36B6BFL;
        int32_t l_898 = (-1L);
        int16_t *l_913 = (void*)0;
        int64_t *l_921[2][8] = {{&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202},{&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202}};
        struct S0 l_926 = {0xACFFD71DL,0x9F37E05B53621C3CLL,0x99L,0xC2375F5863E346D1LL,-1L};
        uint32_t ***l_992 = &g_770;
        int64_t l_1001 = (-3L);
        uint32_t l_1024 = 18446744073709551615UL;
        int32_t l_1051 = 0L;
        int32_t l_1058 = 0x4F2A9B79L;
        int32_t l_1059[7][10][3] = {{{(-2L),0x683AAE07L,0xF868E9A7L},{0xE4C0A613L,0L,0x1B4C4639L},{0xDFAF20C0L,0xD9532695L,(-6L)},{0L,(-8L),0L},{0x6BA7CC3FL,0x67BF0920L,(-7L)},{5L,(-6L),0xFD6FA07BL},{(-10L),0xF868E9A7L,(-8L)},{0xF868E9A7L,0xFF655E91L,0xDECDD392L},{9L,0x279559DEL,0x366759E4L},{0xEE94E78EL,0xB2D6C8A0L,0x1E9D40F0L}},{{0x8594C550L,0xC0CA3329L,0xFF655E91L},{0x8594C550L,(-1L),9L},{0xEE94E78EL,0x0A3FB903L,0x91E4ED93L},{9L,3L,1L},{0xF868E9A7L,0x91E4ED93L,0xB9E2E725L},{(-10L),0L,(-1L)},{5L,(-5L),0x0A3FB903L},{0x6BA7CC3FL,8L,0L},{0L,0L,4L},{0xDFAF20C0L,0xFD6FA07BL,0x279559DEL}},{{0xE4C0A613L,0xEE94E78EL,9L},{(-2L),1L,(-1L)},{0x0A3FB903L,0xE4C0A613L,9L},{0xB9E2E725L,(-2L),0x279559DEL},{(-3L),(-1L),4L},{(-1L),(-1L),0L},{0xD9532695L,0xB9E2E725L,0x0A3FB903L},{0x9399FCB3L,(-5L),(-1L)},{0x1B4C4639L,0x8594C550L,0xB9E2E725L},{(-3L),8L,1L}},{{1L,(-1L),0x91E4ED93L},{0L,4L,0x5178F1A2L},{0L,0x38D4BF9AL,0L},{(-6L),0x38D4BF9AL,(-5L)},{0xEB5C0DB0L,0xE4C0A613L,4L},{0x1B4C4639L,0xFF655E91L,(-1L)},{0x38D4BF9AL,(-1L),0x1B4C4639L},{9L,9L,0xEE94E78EL},{6L,(-5L),0xDECDD392L},{4L,0xB2D6C8A0L,(-2L)}},{{(-1L),(-5L),(-1L)},{(-1L),9L,0xF868E9A7L},{0xFD6FA07BL,0x279559DEL,(-1L)},{3L,(-8L),0L},{(-5L),8L,(-3L)},{3L,(-2L),0x91E4ED93L},{0xFD6FA07BL,0xEE94E78EL,(-1L)},{(-1L),5L,(-10L)},{(-1L),6L,9L},{4L,3L,(-7L)}},{{6L,8L,(-5L)},{9L,0xFD6FA07BL,(-2L)},{0x38D4BF9AL,(-6L),1L},{0x1B4C4639L,0xD9532695L,(-1L)},{0xEB5C0DB0L,0x817E540AL,0x683AAE07L},{(-6L),0x2507B1F1L,0x683AAE07L},{0L,1L,(-1L)},{8L,0L,1L},{8L,0L,(-2L)},{(-3L),(-1L),(-5L)}},{{0xF868E9A7L,(-1L),(-7L)},{1L,0L,9L},{0xA182681AL,(-10L),(-10L)},{0x1E9D40F0L,0xA182681AL,(-1L)},{0xB9E2E725L,0x366759E4L,0x91E4ED93L},{0xB2D6C8A0L,0xDFAF20C0L,(-3L)},{0xD9532695L,0x9399FCB3L,0L},{0xC0CA3329L,0xDFAF20C0L,(-1L)},{(-8L),0x366759E4L,0xF868E9A7L},{(-8L),0xA182681AL,(-1L)}}};
        uint32_t *l_1069[4] = {&g_178,&g_178,&g_178,&g_178};
        struct S0 l_1096[2] = {{0x55B2BE78L,0x2E7827C85EE904FBLL,0L,0x3BF406673C396F72LL,0x9AL},{0x55B2BE78L,0x2E7827C85EE904FBLL,0L,0x3BF406673C396F72LL,0x9AL}};
        uint32_t l_1120 = 0x1695CFCAL;
        const int32_t ****l_1141 = (void*)0;
        int8_t **l_1179[5];
        int64_t l_1236 = 0x95A9551C4228E3A9LL;
        int32_t l_1251 = 0x702A957BL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1179[i] = &g_157[8];
        for (g_136 = (-15); (g_136 != 46); g_136++)
        {
            int64_t *l_904 = &g_365;
            const int16_t *l_911 = &g_912;
            int32_t l_914 = 0x897E959EL;
            int32_t l_924 = 0x074EAD94L;
            int32_t l_940 = 3L;
            if ((l_898 = (l_897 = (l_896 &= (***g_471)))))
            {
                uint32_t l_899 = 5UL;
                int16_t *l_907 = (void*)0;
                int16_t *l_908 = &g_134;
                const int16_t *l_910[10];
                const int16_t **l_909[9][7] = {{(void*)0,(void*)0,&l_910[5],&l_910[2],&l_910[5],(void*)0,(void*)0},{(void*)0,&l_910[1],&l_910[5],&l_910[1],(void*)0,(void*)0,&l_910[1]},{(void*)0,&l_910[9],(void*)0,&l_910[5],&l_910[5],(void*)0,&l_910[9]},{&l_910[1],&l_910[7],&l_910[5],&l_910[5],&l_910[7],&l_910[1],&l_910[7]},{(void*)0,&l_910[5],&l_910[5],(void*)0,&l_910[9],(void*)0,&l_910[5]},{(void*)0,(void*)0,&l_910[1],&l_910[5],&l_910[1],(void*)0,(void*)0},{(void*)0,&l_910[5],&l_910[2],&l_910[5],(void*)0,(void*)0,&l_910[5]},{&l_910[5],&l_910[7],&l_910[5],&l_910[1],&l_910[1],&l_910[5],&l_910[7]},{&l_910[5],&l_910[9],&l_910[2],&l_910[2],&l_910[9],&l_910[5],&l_910[9]}};
                int i, j;
                for (i = 0; i < 10; i++)
                    l_910[i] = (void*)0;
                l_897 ^= l_899;
                l_914 = ((0x538AC267L && (l_898 == (((((0x6928L <= ((safe_lshift_func_uint16_t_u_s((((*l_908) = (safe_div_func_uint32_t_u_u((l_898 ^ ((void*)0 == l_904)), (l_897 | (safe_lshift_func_uint8_t_u_u((*g_704), 3)))))) , ((l_911 = (void*)0) != l_913)), 9)) || (-2L))) , l_899) > l_914) & l_899) >= 18446744073709551607UL))) < 0xCFA032AD9215C520LL);
            }
            else
            {
                int64_t l_915 = 0x758C1B02D9445BDBLL;
                uint32_t *l_918 = &g_178;
                int64_t **l_922 = &l_904;
                int64_t **l_923 = &g_823;
                const int32_t l_938 = 1L;
                uint16_t *l_944[1][10][9] = {{{&g_368,(void*)0,&g_110,&g_368,&l_723,&g_368,&l_723,&l_723,(void*)0},{&g_368,(void*)0,&g_368,&l_723,(void*)0,(void*)0,&l_723,&g_368,(void*)0},{&g_368,(void*)0,&l_723,(void*)0,(void*)0,&g_368,&l_723,&g_110,&l_723},{&g_368,&l_723,(void*)0,(void*)0,&l_723,&l_723,&g_368,&g_368,(void*)0},{&l_723,(void*)0,&g_110,(void*)0,&g_110,&l_723,&l_723,&g_110,(void*)0},{&g_110,(void*)0,&g_110,&g_368,(void*)0,&g_110,&l_723,&g_110,&g_110},{&g_368,&l_723,(void*)0,&g_110,&g_368,&g_368,&l_723,(void*)0,&g_368},{&g_368,(void*)0,&l_723,&g_368,&g_368,&g_368,&g_368,&g_368,&g_368},{&g_368,(void*)0,&g_368,(void*)0,&g_368,&g_368,&g_368,&l_723,&g_110},{&l_723,&g_110,&g_110,(void*)0,&g_368,&g_368,(void*)0,(void*)0,&g_368}}};
                int i, j, k;
                if (((l_914 = (l_915 > ((g_65.f0 , ((0x57L & ((((*l_918) = (safe_rshift_func_uint8_t_u_s(l_898, 7))) , ((l_915 ^ (safe_mod_func_uint8_t_u_u((((*l_922) = l_921[1][1]) == ((*l_923) = l_921[1][1])), ((&g_717 != (void*)0) || l_898)))) > l_914)) < 0x481E1AA7CDF57105LL)) >= 6L)) <= l_914))) & l_924))
                {
                    int32_t l_925 = 0xAE7CFBC1L;
                    int32_t l_937 = 4L;
                    for (g_65.f0 = 0; (g_65.f0 <= 6); g_65.f0 += 1)
                    {
                        uint64_t l_927 = 0xAE0DFF2CE19CF3C6LL;
                        l_925 = (l_898 = l_897);
                        l_940 |= (l_939 &= ((l_926 , l_927) && (safe_rshift_func_uint16_t_u_u(((l_925 || 0x12F2CC44L) < (((safe_add_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(((((*g_704) ^ l_924) || ((((l_927 || (safe_unary_minus_func_uint16_t_u(((l_937 ^= l_914) & ((*g_704) = (*g_704)))))) || l_926.f3) <= (*g_823)) <= 1L)) >= (**g_770)), (***g_471))), l_927)), l_915)) > (*g_771)) , l_938)), g_211))));
                        return l_915;
                    }
                }
                else
                {
                    uint32_t l_941 = 1UL;
                    if (l_941)
                        break;
                    if ((*g_68))
                        break;
                    for (l_494.f3 = (-17); (l_494.f3 < 15); l_494.f3++)
                    {
                        uint64_t l_945 = 0x02F9FF821B38402FLL;
                        l_898 = (((void*)0 != l_944[0][4][6]) < (l_945 ^ l_915));
                    }
                }
            }
        }
        for (l_396 = (-16); (l_396 < 55); ++l_396)
        {
            uint8_t l_952[1];
            uint32_t l_953 = 7UL;
            struct S0 *l_961 = &g_65;
            int32_t l_964 = 0xE9F682D5L;
            int32_t l_967 = (-1L);
            uint32_t l_968[6];
            uint8_t l_970[5][4][7] = {{{4UL,254UL,1UL,0x56L,0x85L,0xD2L,0x03L},{1UL,1UL,247UL,247UL,1UL,1UL,0x27L},{0xB7L,1UL,0x85L,0x85L,255UL,0xBBL,255UL},{250UL,1UL,0xDEL,0x8AL,0x8CL,0x8AL,0xDEL}},{{1UL,1UL,0xD2L,0x90L,0x85L,4UL,0xCAL},{0x27L,1UL,0xE3L,0xEEL,0xDEL,255UL,255UL},{0x85L,254UL,7UL,254UL,0x85L,1UL,0xC3L},{0xACL,0x60L,250UL,252UL,0x8CL,0xCBL,1UL}},{{0xE4L,0x56L,0x90L,255UL,255UL,0x90L,0x56L},{0xACL,252UL,0x60L,0x27L,1UL,0xE3L,0xEEL},{0x85L,4UL,0xCAL,7UL,0x85L,255UL,0x85L},{0x27L,0xC3L,0xC3L,0x27L,255UL,0xEEL,250UL}},{{1UL,0x85L,0x85L,255UL,0xBBL,255UL,254UL},{250UL,0x62L,0xEEL,252UL,0xEEL,0x62L,250UL},{0xB7L,0xE4L,4UL,254UL,1UL,0x56L,0x85L},{1UL,0x8AL,247UL,250UL,0xE3L,0xE3L,250UL}},{{255UL,0x56L,255UL,0xB7L,0xD2L,254UL,0x03L},{255UL,0xEEL,250UL,1UL,0xDEL,0x8AL,0x8CL},{254UL,0x85L,4UL,4UL,0x85L,254UL,0xBBL},{0xC3L,250UL,0xDEL,0x62L,247UL,0xE3L,0x60L}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_952[i] = 1UL;
            for (i = 0; i < 6; i++)
                l_968[i] = 0xB3D41561L;
            l_897 ^= (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((((l_896 , (*g_717)) && (l_952[0] <= (***g_769))) == l_953), ((*g_575) = (safe_lshift_func_uint8_t_u_s((++(*g_704)), (l_926.f1 > g_65.f4)))))), 1));
            l_969 &= (((&l_953 == &l_953) , (safe_rshift_func_uint8_t_u_u(((((l_960[1][0] = (void*)0) == ((**g_677) = l_961)) , 0x12L) || ((l_967 = ((((l_964 = (safe_sub_func_int16_t_s_s(g_211, (l_926.f4 , g_366)))) || (safe_div_func_uint32_t_u_u(0x82B86DF5L, (***g_475)))) != l_897) < (*g_704))) || 0x9AL)), 6))) > l_968[3]);
            l_897 = l_970[3][1][3];
        }
        for (g_65.f0 = 1; (g_65.f0 <= 8); g_65.f0 += 1)
        {
            uint64_t l_973[6][7][6] = {{{18446744073709551615UL,0xFD86BFED3D3EC1ABLL,0UL,6UL,18446744073709551615UL,0x58E2CCF32278F933LL},{0UL,18446744073709551615UL,6UL,18446744073709551615UL,4UL,0UL},{0x0E4422E5B31267CELL,0UL,18446744073709551606UL,18446744073709551612UL,18446744073709551612UL,18446744073709551606UL},{0xD02B885132E480F1LL,0xD02B885132E480F1LL,6UL,18446744073709551615UL,18446744073709551606UL,18446744073709551615UL},{0x27DAF0E8F346A5FFLL,18446744073709551615UL,18446744073709551611UL,0x1BBB322004F8FF8FLL,18446744073709551615UL,6UL},{6UL,0x27DAF0E8F346A5FFLL,18446744073709551611UL,4UL,0xD02B885132E480F1LL,18446744073709551615UL},{0x0222DA19BA443B33LL,4UL,6UL,0xCFC67614E574309ALL,8UL,18446744073709551606UL}},{{0xCFC67614E574309ALL,8UL,18446744073709551606UL,0UL,18446744073709551615UL,0UL},{6UL,0x0222DA19BA443B33LL,6UL,0xFE137A18038FA003LL,0x3B71E1D3CE7DBA61LL,0x58E2CCF32278F933LL},{0x3B71E1D3CE7DBA61LL,0UL,0UL,0x7D0665E6CFB8AFBDLL,1UL,0UL},{8UL,18446744073709551611UL,18446744073709551612UL,0x7D0665E6CFB8AFBDLL,0x58E2CCF32278F933LL,0xFE137A18038FA003LL},{0x3B71E1D3CE7DBA61LL,18446744073709551615UL,0UL,0xFE137A18038FA003LL,0x0E4422E5B31267CELL,0UL},{6UL,18446744073709551615UL,4UL,0UL,0x1BBB322004F8FF8FLL,0x1BBB322004F8FF8FLL},{0xCFC67614E574309ALL,0x0E4422E5B31267CELL,0x0E4422E5B31267CELL,0xCFC67614E574309ALL,18446744073709551611UL,0UL}},{{0x0222DA19BA443B33LL,0xFE137A18038FA003LL,1UL,4UL,1UL,0x3B71E1D3CE7DBA61LL},{6UL,18446744073709551606UL,0xCFC67614E574309ALL,0x1BBB322004F8FF8FLL,1UL,18446744073709551612UL},{0x27DAF0E8F346A5FFLL,0xFE137A18038FA003LL,8UL,18446744073709551615UL,18446744073709551611UL,18446744073709551615UL},{0xD02B885132E480F1LL,0x0E4422E5B31267CELL,0x1988C4156C996FE8LL,18446744073709551612UL,0x1BBB322004F8FF8FLL,18446744073709551615UL},{0x0E4422E5B31267CELL,18446744073709551615UL,0UL,18446744073709551615UL,0x0E4422E5B31267CELL,6UL},{0UL,18446744073709551615UL,0x0222DA19BA443B33LL,6UL,0x58E2CCF32278F933LL,0x0E4422E5B31267CELL},{18446744073709551615UL,18446744073709551611UL,18446744073709551615UL,18446744073709551615UL,1UL,0x0E4422E5B31267CELL}},{{0x7D0665E6CFB8AFBDLL,0UL,0x0222DA19BA443B33LL,0x27DAF0E8F346A5FFLL,0x3B71E1D3CE7DBA61LL,6UL},{1UL,0x0222DA19BA443B33LL,0UL,18446744073709551606UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,8UL,0x1988C4156C996FE8LL,0x1988C4156C996FE8LL,8UL,18446744073709551615UL},{0x58E2CCF32278F933LL,4UL,8UL,1UL,0xD02B885132E480F1LL,18446744073709551612UL},{18446744073709551615UL,0x27DAF0E8F346A5FFLL,0xCFC67614E574309ALL,1UL,18446744073709551615UL,0x3B71E1D3CE7DBA61LL},{18446744073709551615UL,18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551612UL,0xFD86BFED3D3EC1ABLL},{0UL,18446744073709551615UL,18446744073709551615UL,4UL,18446744073709551615UL,1UL}},{{18446744073709551615UL,0x27DAF0E8F346A5FFLL,0x58E2CCF32278F933LL,18446744073709551612UL,0x58E2CCF32278F933LL,0x27DAF0E8F346A5FFLL},{0UL,0x3B71E1D3CE7DBA61LL,0x1BBB322004F8FF8FLL,18446744073709551606UL,18446744073709551615UL,18446744073709551611UL},{1UL,0xFE137A18038FA003LL,18446744073709551615UL,18446744073709551615UL,0xFD86BFED3D3EC1ABLL,0UL},{8UL,0xFE137A18038FA003LL,0x27DAF0E8F346A5FFLL,0xD02B885132E480F1LL,18446744073709551615UL,0UL},{0UL,0x3B71E1D3CE7DBA61LL,0x7D0665E6CFB8AFBDLL,8UL,0x58E2CCF32278F933LL,0x1BBB322004F8FF8FLL},{18446744073709551615UL,0x27DAF0E8F346A5FFLL,18446744073709551612UL,18446744073709551615UL,18446744073709551615UL,18446744073709551612UL},{18446744073709551615UL,18446744073709551615UL,0xD02B885132E480F1LL,0x3B71E1D3CE7DBA61LL,18446744073709551612UL,0UL}},{{18446744073709551606UL,0UL,0x0222DA19BA443B33LL,1UL,8UL,0xD02B885132E480F1LL},{0xD02B885132E480F1LL,18446744073709551606UL,0x0222DA19BA443B33LL,0x58E2CCF32278F933LL,18446744073709551615UL,0UL},{0xCFC67614E574309ALL,0x58E2CCF32278F933LL,0xD02B885132E480F1LL,0x0E4422E5B31267CELL,0x1988C4156C996FE8LL,18446744073709551612UL},{0x0E4422E5B31267CELL,0x1988C4156C996FE8LL,18446744073709551612UL,0x1BBB322004F8FF8FLL,18446744073709551615UL,0x1BBB322004F8FF8FLL},{0x7D0665E6CFB8AFBDLL,0xCFC67614E574309ALL,0x7D0665E6CFB8AFBDLL,18446744073709551611UL,6UL,0UL},{6UL,0x1BBB322004F8FF8FLL,0x27DAF0E8F346A5FFLL,1UL,0UL,0UL},{0x1988C4156C996FE8LL,0x0222DA19BA443B33LL,18446744073709551615UL,1UL,0UL,18446744073709551611UL}}};
            const int16_t l_977 = 0x3658L;
            int32_t *l_980 = (void*)0;
            const int32_t * const l_983 = &l_898;
            const int32_t * const *l_982 = &l_983;
            const int32_t * const **l_981 = &l_982;
            uint32_t ***l_991 = &g_770;
            int32_t l_1002 = (-6L);
            int32_t l_1049[5];
            int64_t l_1060 = 0x6A7CE5DE93AEDFCCLL;
            int8_t l_1061 = 5L;
            uint16_t l_1119 = 0x2963L;
            const int32_t l_1122 = 0x6287A87DL;
            struct S0 l_1124 = {0UL,1UL,0L,0x11E74AE1C0BB2AA6LL,0xCFL};
            int32_t l_1178 = 8L;
            int32_t l_1204 = 0L;
            struct S0 l_1214 = {0xF8CAF525L,8UL,0x9BL,0xB0FDF4FC02BC3E88LL,-1L};
            int32_t l_1226 = (-1L);
            const int64_t l_1247 = 8L;
            int64_t l_1277 = 0xBFC768799E780C00LL;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1049[i] = 0x0E49DC54L;
        }
    }
    return (****l_488);
}







static const int32_t ** func_37(int64_t p_38, int32_t p_39, uint64_t p_40, int32_t * p_41, int32_t * p_42)
{
    uint64_t l_119 = 0xC1911BFE60E44A52LL;
    struct S0 *l_125 = &g_105;
    int32_t l_131 = 1L;
    struct S0 *l_139 = (void*)0;
    int32_t l_140 = 0xBE421836L;
    uint32_t l_158[5][8] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x2E483408L,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0x26375353L,18446744073709551615UL,18446744073709551615UL,0x26375353L,18446744073709551615UL,0x26375353L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,0x2E483408L,0x2E483408L,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x2E483408L},{0x26375353L,18446744073709551615UL,0x26375353L,18446744073709551615UL,18446744073709551615UL,0x26375353L,18446744073709551615UL,0x26375353L},{18446744073709551615UL,18446744073709551615UL,0x2E483408L,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x2E483408L}};
    uint32_t l_161 = 0x344D1492L;
    uint64_t l_169 = 18446744073709551609UL;
    struct S0 **l_257[8] = {&l_125,&l_125,&g_218,&l_125,&l_125,&g_218,&l_125,&l_125};
    int64_t l_361 = 0xD46AB9110B2A4984LL;
    int32_t l_362 = 0x7EAE3068L;
    int64_t l_363[10][6][4] = {{{2L,(-1L),0x7224AA46725184AELL,0xAAF16EB986918B72LL},{0xA1835EFA3F52DB4BLL,0x7224AA46725184AELL,0x123DACC10B504CD6LL,0x407592093B7A13DALL},{(-1L),(-1L),0x3CF96D0341DB6063LL,0xB331EFC90063F520LL},{1L,5L,(-1L),(-8L)},{1L,0x4085D790C8D82269LL,0L,2L},{3L,2L,0x4085D790C8D82269LL,0x9CAC54E8BCB9031BLL}},{{0xD06EA870815F8AACLL,0x89046EE43BC70346LL,(-1L),1L},{(-1L),0x7A8FFE5B919CC3F2LL,1L,0x2FFCCE804813111CLL},{0x7224AA46725184AELL,0x06D5091F22C57D97LL,0x17EB9657CA74A0EELL,0x4085D790C8D82269LL},{0xA3FC121777A6A502LL,0xB331EFC90063F520LL,0x332D84DC9F9C56E4LL,0x94BB3C66BCCF5C31LL},{0xE47E352C9FA72BA4LL,(-1L),(-1L),(-1L)},{0x123DACC10B504CD6LL,0x123DACC10B504CD6LL,5L,0x3635948C765B70BBLL}},{{0x407592093B7A13DALL,3L,4L,0x89046EE43BC70346LL},{2L,0x7224AA46725184AELL,(-1L),4L},{0x06D5091F22C57D97LL,0x7224AA46725184AELL,0xE47E352C9FA72BA4LL,0x89046EE43BC70346LL},{0x7224AA46725184AELL,3L,(-2L),0x8ECFAE09BDCE8783LL},{0L,1L,1L,0x80E14417E8B6F4C6LL},{(-8L),0x35F0EF499A69BFDALL,0x69416652E78C9CE5LL,0xB29B03E1D9BA4709LL}},{{0x6B43B590AB407981LL,5L,0x80C52110F49C646ELL,0L},{(-1L),0xB331EFC90063F520LL,0L,0x17EB9657CA74A0EELL},{0x3635948C765B70BBLL,0L,(-1L),0xA3FC121777A6A502LL},{0xF897E8EEB48997CBLL,0x9CAC54E8BCB9031BLL,2L,(-9L)},{(-2L),0x1388ADDA7E193B18LL,0x37D7B04C0DBBB141LL,0xEFD9751F804454F9LL},{(-1L),0L,0x3CF96D0341DB6063LL,2L}},{{1L,0xD06EA870815F8AACLL,0x6B37A122B65A340ALL,5L},{0L,0xA98AAB4A7388A2AFLL,2L,(-1L)},{(-8L),2L,0x848965B400E7F460LL,0x8069C4C5D278B574LL},{0x94BB3C66BCCF5C31LL,0x123DACC10B504CD6LL,0L,0x35F0EF499A69BFDALL},{2L,0xD1CBF5D3B38D3C8CLL,(-1L),1L},{4L,0x80E14417E8B6F4C6LL,0x95F0F2FF5A33AD60LL,0x1388ADDA7E193B18LL}},{{0L,(-7L),0x35F0EF499A69BFDALL,(-1L)},{0xEEBCE1E51FCC5D80LL,0x37D7B04C0DBBB141LL,0xA1835EFA3F52DB4BLL,0x37D7B04C0DBBB141LL},{1L,0xA96E957D3D4BE4A7LL,0x7224AA46725184AELL,(-8L)},{5L,0L,0x6779688306B9E29ALL,0x332D84DC9F9C56E4LL},{0L,0xA1835EFA3F52DB4BLL,0x3635948C765B70BBLL,0x94BB3C66BCCF5C31LL},{0L,0xEEBCE1E51FCC5D80LL,0x6779688306B9E29ALL,0xF897E8EEB48997CBLL}},{{5L,0x94BB3C66BCCF5C31LL,0x7224AA46725184AELL,0x6B37A122B65A340ALL},{1L,(-1L),0xA1835EFA3F52DB4BLL,0x848965B400E7F460LL},{0xEEBCE1E51FCC5D80LL,0x2048E4329E963DA1LL,0x35F0EF499A69BFDALL,(-1L)},{0L,0x8ECFAE09BDCE8783LL,0x95F0F2FF5A33AD60LL,2L},{4L,4L,(-1L),0xEEBCE1E51FCC5D80LL},{2L,(-8L),0L,0x2048E4329E963DA1LL}},{{0x94BB3C66BCCF5C31LL,4L,0x848965B400E7F460LL,0L},{(-8L),0x06D5091F22C57D97LL,2L,0x7A8FFE5B919CC3F2LL},{0L,0x4085D790C8D82269LL,0x6B37A122B65A340ALL,0xB331EFC90063F520LL},{1L,0x3635948C765B70BBLL,0x3CF96D0341DB6063LL,0xA96E957D3D4BE4A7LL},{(-1L),0x848965B400E7F460LL,0x37D7B04C0DBBB141LL,0x32B34B194B4027C6LL},{(-2L),(-1L),2L,(-1L)}},{{0xF897E8EEB48997CBLL,0x2FFCCE804813111CLL,(-1L),0L},{0x3635948C765B70BBLL,0xCE660075FB35C9D7LL,0L,0xAF896339FD3CEC8FLL},{(-1L),0L,0x80C52110F49C646ELL,(-7L)},{0x6B43B590AB407981LL,0xAAF16EB986918B72LL,0x69416652E78C9CE5LL,0xCE660075FB35C9D7LL},{(-8L),1L,1L,(-8L)},{0L,0x89046EE43BC70346LL,(-2L),0xA1835EFA3F52DB4BLL}},{{0x7224AA46725184AELL,0xEFD9751F804454F9LL,0xE47E352C9FA72BA4LL,0x80C52110F49C646ELL},{0x06D5091F22C57D97LL,1L,(-1L),0x80C52110F49C646ELL},{2L,0xEFD9751F804454F9LL,4L,0xA1835EFA3F52DB4BLL},{(-1L),0x89046EE43BC70346LL,0xD06EA870815F8AACLL,(-8L)},{1L,1L,0x80E14417E8B6F4C6LL,0xCE660075FB35C9D7LL},{(-1L),0xAAF16EB986918B72LL,0x06D5091F22C57D97LL,0x6B37A122B65A340ALL}}};
    const int32_t *l_372 = &l_362;
    const int32_t **l_371 = &l_372;
    int i, j, k;
    for (p_39 = 0; (p_39 < 26); p_39 = safe_add_func_uint16_t_u_u(p_39, 1))
    {
        uint32_t l_122 = 18446744073709551613UL;
        struct S0 l_126 = {0UL,0UL,-5L,0UL,0x89L};
        uint8_t *l_135 = &g_136;
        if ((*g_68))
            break;
        --l_119;
        l_140 ^= (((l_122 && (safe_add_func_int64_t_s_s(((*p_42) , (p_40 , ((void*)0 == l_125))), ((l_126 , func_49((((safe_sub_func_uint64_t_u_u((((((safe_div_func_uint16_t_u_u(((l_131 = ((void*)0 != &l_125)) ^ (safe_mul_func_uint8_t_u_u(((*l_135)++), l_119))), l_119)) , p_39) , &g_68) == (void*)0) <= g_115[4]), 0x86D5588B0772C01CLL)) , 0L) , g_2), l_139, (*g_64))) == l_139)))) & g_105.f4) >= l_119);
        if ((*g_68))
            continue;
    }
    for (g_71 = 9; (g_71 >= 2); g_71 -= 1)
    {
        int8_t *l_153 = &g_62[2];
        int32_t l_160 = 0x7C750F7EL;
        struct S0 *l_192 = (void*)0;
        int32_t **l_227 = &g_68;
        int32_t ***l_226 = &l_227;
        int8_t **l_279 = &g_157[8];
        const int32_t *l_285[4][8] = {{&g_69,&g_2,&g_69,&g_69,&g_2,&g_69,&g_69,&g_2},{&g_2,&g_69,&g_69,&g_2,&g_69,&g_69,&g_2,&g_69},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2},{&g_69,&g_2,&g_69,&g_69,&g_2,&g_69,&g_69,&g_2}};
        const int32_t **l_284 = &l_285[0][1];
        int i, j;
        for (p_40 = 0; (p_40 <= 9); p_40 += 1)
        {
            struct S0 l_143[10][1] = {{{0xBA490677L,0xA029B2269D596B0ALL,2L,0x5CF57BC30D89702ELL,-4L}},{{0xBA490677L,0xA029B2269D596B0ALL,2L,0x5CF57BC30D89702ELL,-4L}},{{0xBA490677L,0xA029B2269D596B0ALL,2L,0x5CF57BC30D89702ELL,-4L}},{{0xBA490677L,0xA029B2269D596B0ALL,2L,0x5CF57BC30D89702ELL,-4L}},{{0xBA490677L,0xA029B2269D596B0ALL,2L,0x5CF57BC30D89702ELL,-4L}},{{0xBA490677L,0xA029B2269D596B0ALL,2L,0x5CF57BC30D89702ELL,-4L}},{{0xBA490677L,0xA029B2269D596B0ALL,2L,0x5CF57BC30D89702ELL,-4L}},{{0xBA490677L,0xA029B2269D596B0ALL,2L,0x5CF57BC30D89702ELL,-4L}},{{0xBA490677L,0xA029B2269D596B0ALL,2L,0x5CF57BC30D89702ELL,-4L}},{{0xBA490677L,0xA029B2269D596B0ALL,2L,0x5CF57BC30D89702ELL,-4L}}};
            int8_t **l_154 = (void*)0;
            int8_t **l_155[8];
            int32_t *l_159 = &g_115[3];
            const int64_t *l_190 = &g_73;
            int32_t **l_222 = &g_68;
            int32_t l_261 = 7L;
            uint16_t l_262 = 0x7963L;
            const int32_t *l_283 = (void*)0;
            const int32_t **l_282 = &l_283;
            uint8_t l_292[8] = {3UL,1UL,3UL,3UL,1UL,3UL,3UL,1UL};
            int i, j;
            for (i = 0; i < 8; i++)
                l_155[i] = &l_153;
            g_69 = ((((*l_159) = (((&p_38 != (void*)0) != g_62[p_40]) | (g_62[p_40] | (safe_mod_func_uint8_t_u_u(((p_39 , l_143[5][0]) , (safe_mod_func_int16_t_s_s(((((+0x03L) , (safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((g_156[0][0] = l_153) == (g_157[8] = &g_62[2])), 8)), p_38)), 5))) <= 1L) , l_158[0][5]), l_143[5][0].f4))), p_40))))) , l_160) >= g_62[2]);
            --l_161;
        }
        l_362 = g_62[g_71];
        (*g_218) = (*l_125);
    }
    return (*g_224);
}







static const int32_t func_44(struct S0 p_45, struct S0 * p_46, int64_t p_47)
{
    int32_t *l_66[10][10][2];
    int32_t **l_88 = (void*)0;
    int32_t ***l_87 = &l_88;
    int32_t l_102 = (-6L);
    struct S0 *l_106[5][1][1] = {{{&g_65}},{{&g_65}},{{&g_65}},{{&g_65}},{{&g_65}}};
    struct S0 **l_107[7][3][7] = {{{&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0]},{&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0]},{&g_64,&l_106[3][0][0],&g_64,&l_106[3][0][0],&g_64,&l_106[3][0][0],&g_64}},{{&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0]},{&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0]},{&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0]}},{{&g_64,&l_106[3][0][0],&g_64,&l_106[3][0][0],&g_64,&l_106[3][0][0],&g_64},{&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0]},{&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0]}},{{&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0]},{&g_64,&l_106[3][0][0],&g_64,&l_106[3][0][0],&g_64,&l_106[3][0][0],&g_64},{&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0]}},{{&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0]},{&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0]},{&g_64,&l_106[3][0][0],&g_64,&l_106[3][0][0],&g_64,&l_106[3][0][0],&g_64}},{{&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0]},{&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0]},{&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0]}},{{&g_64,&l_106[3][0][0],&g_64,&l_106[3][0][0],&g_64,&l_106[3][0][0],&g_64},{&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0],&l_106[3][0][0]},{&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0],&l_106[3][0][0],&l_106[1][0][0]}}};
    int32_t l_108 = (-3L);
    uint32_t l_109 = 0xE7FF35BAL;
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
                l_66[i][j][k] = &g_2;
        }
    }
    for (p_45.f0 = 2; (p_45.f0 <= 9); p_45.f0 += 1)
    {
        int32_t **l_67[5][10][3] = {{{&l_66[0][0][0],&l_66[9][5][1],&l_66[8][4][0]},{&l_66[5][7][1],&l_66[8][6][1],&l_66[9][5][1]},{&l_66[9][5][1],&l_66[9][5][1],&l_66[6][9][0]},{&l_66[8][6][1],&l_66[5][6][1],&l_66[2][4][1]},{&l_66[9][1][0],&l_66[5][6][1],&l_66[8][5][1]},{&l_66[9][6][1],&l_66[9][5][1],&l_66[5][2][1]},{&l_66[0][3][1],&l_66[8][6][1],&l_66[9][4][1]},{&l_66[7][3][1],&l_66[9][5][1],&l_66[6][8][1]},{(void*)0,&l_66[0][0][0],&l_66[9][5][1]},{&l_66[9][5][1],&l_66[9][5][1],&l_66[9][5][1]}},{{&l_66[2][9][1],(void*)0,&l_66[9][1][1]},{(void*)0,&l_66[9][5][1],&l_66[9][5][1]},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_66[9][5][1]},{&l_66[6][4][0],&l_66[7][3][1],&l_66[2][5][0]},{&l_66[7][7][0],&l_66[9][5][1],&l_66[9][5][1]},{&l_66[9][5][1],&l_66[6][4][0],&l_66[2][5][0]},{&l_66[9][5][1],&l_66[9][5][1],&l_66[9][5][1]},{&l_66[9][5][1],(void*)0,(void*)0},{&l_66[8][6][0],(void*)0,&l_66[9][5][1]}},{{&l_66[9][5][1],&l_66[7][7][0],&l_66[9][1][1]},{&l_66[9][5][1],&l_66[8][1][0],&l_66[9][5][1]},{&l_66[6][2][0],(void*)0,&l_66[9][5][1]},{&l_66[5][1][1],&l_66[2][5][0],&l_66[6][8][1]},{&l_66[6][1][1],&l_66[5][1][1],&l_66[9][4][1]},{&l_66[6][9][0],&l_66[8][4][0],&l_66[5][2][1]},{&l_66[9][5][1],&l_66[9][5][1],&l_66[8][5][1]},{(void*)0,&l_66[8][0][0],&l_66[2][4][1]},{(void*)0,&l_66[9][5][1],&l_66[6][9][0]},{&l_66[9][5][1],(void*)0,&l_66[9][5][1]}},{{&l_66[6][9][0],&l_66[8][7][0],&l_66[8][4][0]},{&l_66[6][1][1],&l_66[8][6][0],&l_66[2][9][1]},{&l_66[5][1][1],&l_66[9][5][1],&l_66[9][1][0]},{&l_66[6][2][0],&l_66[4][8][0],&l_66[9][5][1]},{&l_66[9][5][1],&l_66[9][5][1],&l_66[9][5][1]},{&l_66[9][5][1],&l_66[4][1][0],&l_66[4][1][0]},{&l_66[8][6][0],(void*)0,&l_66[7][3][1]},{&l_66[9][5][1],&l_66[6][1][1],(void*)0},{&l_66[9][5][1],&l_66[9][6][1],&l_66[9][5][1]},{&l_66[9][5][1],&l_66[5][2][1],&l_66[9][5][1]}},{{&l_66[7][7][0],&l_66[9][6][1],&l_66[0][3][1]},{&l_66[6][4][0],&l_66[6][1][1],&l_66[9][5][1]},{(void*)0,(void*)0,&l_66[9][6][1]},{(void*)0,&l_66[4][1][0],(void*)0},{(void*)0,&l_66[9][5][1],&l_66[9][5][1]},{&l_66[2][9][1],&l_66[4][8][0],(void*)0},{&l_66[9][5][1],&l_66[9][5][1],(void*)0},{(void*)0,&l_66[8][6][0],&l_66[9][6][1]},{&l_66[7][3][1],&l_66[8][7][0],&l_66[3][2][1]},{&l_66[0][3][1],(void*)0,&l_66[9][7][0]}}};
        int64_t *l_70 = &g_71;
        int64_t *l_72 = &g_73;
        int8_t *l_80 = &g_65.f4;
        int i, j, k;
        g_69 = (g_62[p_45.f0] < ((((g_68 = l_66[9][5][1]) != l_66[4][4][1]) == ((*l_80) |= (((((*l_70) = p_45.f4) & ((*l_72) = g_62[8])) || (safe_div_func_uint8_t_u_u(((g_73 || (((0xD4L & (safe_mod_func_int64_t_s_s((safe_div_func_uint8_t_u_u((g_2 <= p_45.f2), g_65.f2)), p_45.f1))) == p_45.f0) <= g_65.f1)) < p_45.f2), g_2))) < p_45.f0))) < 1L));
    }
    g_110 ^= (((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((((safe_add_func_uint64_t_u_u(((&g_68 != ((*l_87) = &g_68)) <= (p_45.f2 <= (safe_mod_func_int8_t_s_s(g_65.f2, g_65.f0)))), (((safe_unary_minus_func_uint64_t_u(((safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(l_102, p_45.f1)), (safe_mul_func_int16_t_s_s(((g_105 , ((p_46 = func_49((((*p_46) , 18446744073709551611UL) , 0L), l_106[3][0][0], (*p_46))) != &p_45)) || 0x5DB32916L), g_105.f1)))) , p_45.f4), g_62[2])) <= l_108), g_105.f3)) , g_65.f3), p_45.f3)) != 1L))) , 0xE917A824L) == (*g_68)))) , 1UL) > l_109) | g_69) || p_45.f3), g_105.f3)), g_65.f2)) & p_45.f2) & p_47);
    g_111--;
    return (*g_68);
}







static struct S0 * func_49(int8_t p_50, struct S0 * p_51, struct S0 p_52)
{
    return g_64;
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
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_65.f0, "g_65.f0", print_hash_value);
    transparent_crc(g_65.f1, "g_65.f1", print_hash_value);
    transparent_crc(g_65.f2, "g_65.f2", print_hash_value);
    transparent_crc(g_65.f3, "g_65.f3", print_hash_value);
    transparent_crc(g_65.f4, "g_65.f4", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_105.f0, "g_105.f0", print_hash_value);
    transparent_crc(g_105.f1, "g_105.f1", print_hash_value);
    transparent_crc(g_105.f2, "g_105.f2", print_hash_value);
    transparent_crc(g_105.f3, "g_105.f3", print_hash_value);
    transparent_crc(g_105.f4, "g_105.f4", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_115[i], "g_115[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_318[i][j], "g_318[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_912, "g_912", print_hash_value);
    transparent_crc(g_976, "g_976", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_1028, "g_1028", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1194[i][j], "g_1194[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1198, "g_1198", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1202[i], "g_1202[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1427[i][j], "g_1427[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1429, "g_1429", print_hash_value);
    transparent_crc(g_1476, "g_1476", print_hash_value);
    transparent_crc(g_1712, "g_1712", print_hash_value);
    transparent_crc(g_1765, "g_1765", print_hash_value);
    transparent_crc(g_1775, "g_1775", print_hash_value);
    transparent_crc(g_1827, "g_1827", print_hash_value);
    transparent_crc(g_1829, "g_1829", print_hash_value);
    transparent_crc(g_1848.f0, "g_1848.f0", print_hash_value);
    transparent_crc(g_1848.f1, "g_1848.f1", print_hash_value);
    transparent_crc(g_1848.f2, "g_1848.f2", print_hash_value);
    transparent_crc(g_1848.f3, "g_1848.f3", print_hash_value);
    transparent_crc(g_1848.f4, "g_1848.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1876[i], "g_1876[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2153, "g_2153", print_hash_value);
    transparent_crc(g_2244, "g_2244", print_hash_value);
    transparent_crc(g_2274, "g_2274", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
