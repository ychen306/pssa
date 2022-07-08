// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 65A7EFD4
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
   uint8_t f0;
   int32_t f1;
   int8_t f2;
};
#pragma pack(pop)

union U1 {
   int8_t * f0;
   const int32_t f1;
   int64_t f2;
};


static int16_t g_5 = 0x65E0L;
static int8_t g_10 = 0L;
static int32_t g_19 = 0x22BA7B7EL;
static int32_t *g_28 = (void*)0;
static int32_t g_68[7][8] = {{1L,0x5EBAE88BL,0x6DAE1DC6L,1L,0x6DAE1DC6L,0x5EBAE88BL,1L,0xB3F54C3DL},{0x6DAE1DC6L,0x5EBAE88BL,1L,0xB3F54C3DL,0L,0L,0xB3F54C3DL,1L},{1L,1L,0x5EBAE88BL,(-10L),0L,1L,0xE3C23917L,1L},{0x6DAE1DC6L,1L,(-10L),1L,0x6DAE1DC6L,0x7BA7DA82L,1L,1L},{1L,0L,0xE3C23917L,(-10L),(-10L),0xE3C23917L,0L,1L},{0x5EBAE88BL,0x7BA7DA82L,0xE3C23917L,0xB3F54C3DL,1L,0x6DAE1DC6L,1L,0L},{0x7BA7DA82L,0xB3F54C3DL,0x7BA7DA82L,1L,0L,0xE3C23917L,(-10L),(-10L)}};
static uint32_t g_76 = 2UL;
static union U1 g_82 = {0};
static int32_t g_112 = 0xD13A51B2L;
static struct S0 g_115 = {247UL,-5L,-1L};
static struct S0 *g_114 = &g_115;
static union U1 *g_118 = &g_82;
static union U1 **g_117 = &g_118;
static uint64_t g_127 = 18446744073709551607UL;
static int8_t *g_143[1][3] = {{&g_115.f2,&g_115.f2,&g_115.f2}};
static uint8_t g_148 = 0UL;
static int32_t *g_153[5][7] = {{&g_68[4][4],(void*)0,&g_68[4][4],(void*)0,&g_68[4][4],&g_68[4][4],(void*)0},{&g_68[4][4],&g_68[4][4],&g_68[4][4],(void*)0,&g_68[4][4],&g_68[4][4],&g_68[4][4]},{&g_68[4][4],(void*)0,(void*)0,&g_68[4][4],&g_68[4][4],&g_68[4][4],&g_68[4][4]},{&g_68[4][4],&g_68[4][4],&g_68[4][4],&g_68[4][4],&g_68[4][4],&g_68[4][4],(void*)0},{&g_68[4][4],&g_68[4][4],(void*)0,&g_68[4][4],&g_68[4][4],(void*)0,&g_68[4][4]}};
static uint64_t g_205 = 0x03BE8F8155B06E9FLL;
static int32_t g_229 = 0x7A41384DL;
static uint16_t g_230 = 65526UL;
static const int16_t *g_239 = &g_5;
static const int16_t **g_238 = &g_239;
static int64_t g_278 = 1L;
static int8_t *g_283 = (void*)0;
static const int32_t *g_314 = &g_68[4][4];
static const int32_t **g_313 = &g_314;
static int32_t * const *g_320 = &g_28;
static int32_t * const **g_319 = &g_320;
static struct S0 **g_327 = &g_114;
static struct S0 ***g_326 = &g_327;
static uint8_t *g_396 = &g_115.f0;
static struct S0 g_569 = {0x35L,0xDC7472D0L,9L};
static int16_t g_582 = 0L;
static uint32_t g_591 = 1UL;
static int32_t g_615 = 0L;
static const int16_t g_629 = 0xC585L;
static int32_t g_685 = 4L;
static int64_t *g_765 = &g_82.f2;
static uint32_t * const g_855 = &g_76;
static uint32_t * const *g_854[3] = {&g_855,&g_855,&g_855};
static const int64_t g_862 = 7L;
static const int64_t *g_861[8] = {&g_862,&g_862,&g_862,&g_862,&g_862,&g_862,&g_862,&g_862};
static union U1 *g_1093 = &g_82;
static union U1 **g_1092 = &g_1093;
static union U1 ***g_1091 = &g_1092;
static int64_t **g_1111 = &g_765;
static int64_t ***g_1110 = &g_1111;
static int16_t *g_1122 = &g_582;
static int16_t **g_1121[7] = {&g_1122,&g_1122,&g_1122,&g_1122,&g_1122,&g_1122,&g_1122};
static int16_t *** const g_1120 = &g_1121[4];
static int16_t *** const *g_1119[7][8][1] = {{{&g_1120},{&g_1120},{(void*)0},{&g_1120},{(void*)0},{&g_1120},{&g_1120},{(void*)0}},{{(void*)0},{(void*)0},{&g_1120},{&g_1120},{(void*)0},{&g_1120},{(void*)0},{&g_1120}},{{&g_1120},{(void*)0},{(void*)0},{(void*)0},{&g_1120},{&g_1120},{(void*)0},{&g_1120}},{{(void*)0},{&g_1120},{&g_1120},{(void*)0},{(void*)0},{(void*)0},{&g_1120},{&g_1120}},{{(void*)0},{&g_1120},{(void*)0},{&g_1120},{&g_1120},{(void*)0},{(void*)0},{(void*)0}},{{&g_1120},{&g_1120},{(void*)0},{&g_1120},{(void*)0},{&g_1120},{&g_1120},{(void*)0}},{{(void*)0},{(void*)0},{&g_1120},{&g_1120},{(void*)0},{&g_1120},{(void*)0},{&g_1120}}};
static struct S0 ****g_1126 = (void*)0;
static struct S0 *****g_1125 = &g_1126;
static uint16_t *g_1129 = &g_230;
static uint16_t **g_1128 = &g_1129;
static const int64_t g_1188 = 0xC07F2B4F5B44A163LL;
static int8_t g_1201 = 9L;
static uint16_t g_1226 = 0xE28AL;
static const uint32_t ****g_1276 = (void*)0;
static const struct S0 g_1280 = {0xB0L,0x72808E40L,-9L};
static const struct S0 *g_1279 = &g_1280;
static int16_t g_1407 = (-1L);
static uint32_t g_1446[1] = {0x8EE16A61L};
static int8_t g_1477[1] = {(-6L)};
static uint32_t g_1484 = 0xE11A83F6L;
static struct S0 * const *g_1536 = &g_114;
static int32_t *g_1675 = &g_115.f1;
static int32_t **g_1684 = (void*)0;
static uint16_t g_1705[3] = {0xEFF2L,0xEFF2L,0xEFF2L};
static int32_t g_1718 = 1L;
static int32_t g_1751[1] = {0x9F182DAFL};
static uint16_t g_1776 = 0xA5AEL;
static const uint32_t g_1802 = 18446744073709551615UL;
static int64_t g_1893 = (-1L);
static const uint8_t g_1898 = 0x89L;
static const uint8_t *g_1897 = &g_1898;
static uint32_t *g_1908 = &g_76;
static uint32_t **g_1907 = &g_1908;
static uint32_t ***g_1906 = &g_1907;
static const uint16_t *g_1929 = &g_1776;
static const uint16_t * const *g_1928 = &g_1929;
static uint16_t * const *g_1942 = (void*)0;
static uint16_t * const **g_1941[2] = {&g_1942,&g_1942};
static uint16_t * const *** const g_1940 = &g_1941[0];
static uint32_t g_1982 = 0xCE3F415DL;
static const int32_t *g_2094 = &g_68[4][4];
static uint16_t g_2131 = 0xFA03L;
static uint64_t g_2163 = 0x2E79B1B1AAA44D6ALL;
static int8_t g_2174 = (-1L);
static union U1 ****g_2215 = (void*)0;
static uint16_t g_2241 = 0xA3AAL;
static uint16_t g_2242[5] = {0xC42DL,0xC42DL,0xC42DL,0xC42DL,0xC42DL};
static uint16_t g_2243 = 0UL;
static uint16_t g_2244 = 0x4598L;
static uint16_t g_2245 = 65533UL;
static uint16_t g_2246 = 0x8EC1L;
static uint16_t g_2247 = 0x5B92L;
static uint16_t g_2248[9] = {65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL};
static uint16_t g_2249[7] = {0x8606L,0x8606L,0x8606L,0x8606L,0x8606L,0x8606L,0x8606L};
static uint16_t g_2250[6] = {0xEC08L,0xEC08L,0xEC08L,0xEC08L,0xEC08L,0xEC08L};
static uint16_t g_2251 = 65533UL;
static uint16_t g_2252 = 0x2AB6L;
static uint16_t g_2253 = 0x99BFL;
static uint16_t g_2254 = 0UL;
static uint16_t g_2255 = 0xF514L;
static uint16_t g_2256 = 0x4A85L;
static uint16_t g_2257 = 0x40B6L;
static uint16_t g_2258 = 0xDE73L;
static uint16_t g_2259 = 1UL;
static uint16_t g_2260 = 0UL;
static uint16_t g_2261[6] = {0x1A14L,0x1A14L,0x1A14L,0x1A14L,0x1A14L,0x1A14L};
static uint16_t g_2262 = 2UL;
static uint16_t g_2263 = 1UL;
static uint16_t g_2264[3] = {0xE9BBL,0xE9BBL,0xE9BBL};
static uint16_t g_2265 = 65526UL;
static uint16_t g_2266 = 0x67D2L;
static uint16_t g_2267[3] = {65534UL,65534UL,65534UL};
static uint16_t g_2268 = 65535UL;
static uint16_t g_2269 = 0x5CD4L;
static uint16_t g_2270 = 0x3E29L;
static uint16_t g_2271[6] = {0x8D44L,0x8D44L,0x8D44L,0x8D44L,0x8D44L,0x8D44L};
static uint16_t g_2272 = 0xEE26L;
static uint16_t g_2273 = 0x86C8L;
static uint16_t g_2274 = 0xD4F8L;
static uint16_t g_2275 = 65535UL;
static uint16_t g_2276 = 7UL;
static uint16_t g_2277 = 0xFB26L;
static uint16_t g_2278 = 0x2F5DL;
static uint16_t g_2279 = 0x5B22L;
static uint16_t g_2280 = 0UL;
static uint16_t g_2281[4][9][4] = {{{0x8EE0L,0x1F66L,0xDEA4L,0x022BL},{0xED14L,65535UL,65535UL,1UL},{0xCCF3L,0x7A29L,0x9F41L,1UL},{0x095CL,65535UL,0xCF91L,0x022BL},{1UL,0x7A03L,0x095CL,65535UL},{0x3F81L,65535UL,0x6AC1L,0x095CL},{0x7A03L,0x7A29L,0x86E7L,0xEE80L},{0x022BL,0xED14L,65527UL,1UL},{0x0A40L,0x71D3L,0x0A40L,0xCF91L}},{{65535UL,0x4620L,0xCF91L,0x1DE4L},{0x3F81L,65527UL,65535UL,0x4620L},{0x4620L,0x8EE0L,65535UL,0xEE80L},{0x3F81L,0x022BL,0xCF91L,65535UL},{65535UL,0x7A29L,0x0A40L,0x7A03L},{0x0A40L,0x7A03L,65527UL,1UL},{0x022BL,65527UL,0x86E7L,0xCF91L},{0x7A03L,0UL,0x6AC1L,0x6AC1L},{0x3F81L,0x3F81L,0x095CL,1UL}},{{1UL,0x8EE0L,0xDEA4L,0x7A03L},{0xFD21L,65535UL,0xCF91L,0xDEA4L},{0xED14L,65535UL,0x86E7L,0x7A03L},{65535UL,0x8EE0L,0UL,1UL},{0x022BL,0x3F81L,65535UL,0x6AC1L},{65535UL,0UL,0x1DE4L,0xCF91L},{0xFD21L,65527UL,0x095CL,1UL},{0x9F41L,0x7A03L,65535UL,0x7A03L},{65527UL,0x7A29L,0x6AC1L,65535UL}},{{0xED14L,0x022BL,65535UL,0xEE80L},{0x0A40L,0x8EE0L,0xFD21L,0x4620L},{0x0A40L,65527UL,65535UL,0x1DE4L},{0xED14L,0x4620L,0x6AC1L,0xCF91L},{65527UL,0x71D3L,65535UL,1UL},{0x9F41L,0xED14L,0x095CL,0xEE80L},{0xFD21L,0x7A29L,0x1DE4L,0x095CL},{65535UL,65535UL,65535UL,65535UL},{0x022BL,0x7A03L,0UL,0x4620L}}};
static uint16_t g_2282 = 1UL;
static uint16_t g_2283 = 65530UL;
static uint16_t g_2284[3][2] = {{65535UL,65535UL},{65535UL,65535UL},{65535UL,65535UL}};
static uint16_t g_2285[4] = {0UL,0UL,0UL,0UL};
static uint16_t g_2286 = 0xBF6FL;
static uint16_t g_2287 = 0xB387L;
static uint16_t g_2288 = 1UL;
static uint16_t g_2289 = 65535UL;
static uint16_t g_2290 = 0xF1ACL;
static uint16_t g_2291 = 0x52ABL;
static uint16_t g_2292 = 6UL;
static uint16_t g_2293 = 0x5793L;
static uint16_t g_2294[3] = {65535UL,65535UL,65535UL};
static uint16_t g_2295 = 1UL;
static uint16_t g_2296 = 0xAA1BL;
static uint16_t g_2297 = 0x924AL;
static uint16_t g_2298 = 0xED9FL;
static uint16_t g_2299 = 0x705FL;
static uint16_t g_2300 = 8UL;
static uint16_t g_2301 = 0xA484L;
static uint16_t g_2302 = 0x02F1L;
static uint16_t g_2303 = 0xE67BL;
static uint16_t g_2304 = 1UL;
static uint16_t g_2305[2][5] = {{0xAD6CL,0xAD6CL,0xAD6CL,0xAD6CL,0xAD6CL},{8UL,8UL,8UL,8UL,8UL}};
static uint64_t g_2313 = 1UL;
static uint32_t g_2337[7] = {1UL,1UL,0xA37ECCD1L,1UL,1UL,0xA37ECCD1L,1UL};
static int32_t g_2382 = 0x4061E384L;
static uint64_t g_2468 = 1UL;
static int32_t ***g_2515 = (void*)0;
static uint8_t g_2636 = 0x33L;
static int32_t g_2648 = 0xF89BD38CL;
static uint16_t g_2656 = 0x655DL;
static int8_t g_2665 = (-5L);
static int64_t * const **g_2684 = (void*)0;
static int64_t * const ***g_2683[3] = {&g_2684,&g_2684,&g_2684};
static const struct S0 * const *g_2712 = (void*)0;
static int32_t g_2768 = 0L;
static uint16_t g_2818 = 0xF441L;
static int32_t *g_2842 = &g_68[1][5];
static int64_t ****g_2844 = &g_1110;
static int64_t *****g_2843[8][5] = {{(void*)0,&g_2844,&g_2844,&g_2844,&g_2844},{&g_2844,(void*)0,&g_2844,&g_2844,&g_2844},{&g_2844,&g_2844,&g_2844,&g_2844,&g_2844},{(void*)0,&g_2844,&g_2844,&g_2844,&g_2844},{&g_2844,&g_2844,&g_2844,&g_2844,&g_2844},{&g_2844,&g_2844,&g_2844,&g_2844,&g_2844},{&g_2844,&g_2844,&g_2844,&g_2844,&g_2844},{&g_2844,&g_2844,&g_2844,&g_2844,&g_2844}};
static int64_t *****g_2845 = &g_2844;
static uint32_t g_2960[5] = {0xA7580B3CL,0xA7580B3CL,0xA7580B3CL,0xA7580B3CL,0xA7580B3CL};
static uint16_t g_3027[2][2][4] = {{{0xF324L,0xF324L,0UL,0UL},{0UL,0xB5F6L,0UL,0xB5F6L}},{{0xF324L,0UL,65535UL,0UL},{0xB5F6L,0UL,0UL,0xB5F6L}}};
static uint64_t g_3035 = 0xE53FD21F79FC48FBLL;
static uint32_t g_3108 = 0x69D53577L;



static int32_t func_1(void);
static int8_t * func_6(int8_t * p_7, uint64_t p_8);
static int8_t func_11(int8_t * p_12, const int32_t p_13, int32_t p_14, int8_t * p_15);
static int8_t * func_20(int32_t p_21, int32_t * p_22);
static uint64_t func_25(int32_t * p_26, uint16_t p_27);
static uint16_t func_29(int8_t p_30, uint16_t p_31, const uint8_t p_32, uint32_t p_33);
static int8_t func_40(struct S0 p_41, int8_t p_42, int32_t p_43, int8_t * p_44);
static struct S0 func_45(uint8_t p_46, int8_t * p_47, int32_t * p_48);
static int8_t * func_55(int32_t * p_56, int32_t * p_57, int8_t * p_58, int8_t * p_59, int32_t p_60);
static int32_t * func_61(uint16_t p_62, int32_t * p_63);
# 229 "<stdin>"
static int32_t func_1(void)
{
    int8_t *l_9 = &g_10;
    int8_t *l_16 = &g_10;
    const int32_t l_17 = 0L;
    int32_t *l_18 = &g_19;
    int8_t **l_1040 = &l_16;
    int32_t l_1048[6][10][4] = {{{0x1DE203D5L,(-1L),0x1DE203D5L,(-1L)},{(-1L),0L,1L,0x4A41892EL},{0x4A41892EL,1L,0L,0L},{(-1L),0xE11CB72CL,0L,(-1L)},{0x4A41892EL,0x1A6360CBL,1L,2L},{(-1L),1L,0x1DE203D5L,7L},{0x1DE203D5L,7L,(-1L),(-1L)},{0xE11CB72CL,3L,0x7F15126FL,2L},{1L,(-1L),(-1L),0xB1DC1D57L},{1L,0xE11CB72CL,0x13C98728L,0x13C98728L}},{{0L,0L,7L,0x4A41892EL},{1L,0x13C98728L,1L,0x1A6360CBL},{0L,(-1L),(-1L),1L},{2L,(-1L),0xD5846A37L,0x1A6360CBL},{(-1L),0x13C98728L,0x11F5C978L,0x4A41892EL},{0x2CCF4BA0L,0L,0L,0x13C98728L},{0xB1DC1D57L,0xE11CB72CL,0x1A8F1E26L,0xB1DC1D57L},{0x4A41892EL,(-1L),0x11F5C978L,2L},{0x1DB2C990L,3L,0x1DE203D5L,(-1L)},{2L,7L,(-8L),7L}},{{0xE11CB72CL,1L,1L,2L},{0x0EDE89D3L,0x1A6360CBL,(-1L),(-1L)},{0L,0xE11CB72CL,0x37B2E8B0L,0L},{0L,1L,(-1L),0x4A41892EL},{0x0EDE89D3L,0L,1L,(-1L)},{0xE11CB72CL,(-1L),(-8L),0L},{2L,0x1DB2C990L,0x1DE203D5L,0x1A6360CBL},{0x1DB2C990L,0L,0x11F5C978L,0x2CCF4BA0L},{0x4A41892EL,0L,0x1A8F1E26L,0L},{0xB1DC1D57L,0L,0L,0xB1DC1D57L}},{{0x2CCF4BA0L,0x1A6360CBL,0x11F5C978L,0x1DE203D5L},{(-1L),3L,0xD5846A37L,7L},{2L,(-1L),(-1L),7L},{0L,3L,1L,0x1DE203D5L},{1L,0x1A6360CBL,7L,0xB1DC1D57L},{0L,0L,0x13C98728L,0L},{1L,0L,(-1L),0x2CCF4BA0L},{1L,0L,0x7F15126FL,0x1A6360CBL},{0xE11CB72CL,0x1DB2C990L,(-1L),0L},{0x1DE203D5L,(-1L),0x1DE203D5L,(-1L)}},{{0x2CCF4BA0L,0L,1L,(-1L)},{(-1L),7L,(-6L),0L},{0x7F15126FL,(-1L),(-6L),0x7F15126FL},{(-1L),1L,1L,0x13C98728L},{0x2CCF4BA0L,1L,0x37B2E8B0L,0x1DB2C990L},{0x37B2E8B0L,0x1DB2C990L,0xD0F15FD0L,0xEBA65CE9L},{(-1L),0x11F5C978L,7L,0x13C98728L},{0x1DE203D5L,(-1L),0xEBA65CE9L,1L},{7L,(-1L),0x1A8F1E26L,0x1A8F1E26L},{(-1L),(-1L),(-1L),(-1L)}},{{0x1DE203D5L,0x1A8F1E26L,7L,1L},{(-6L),0x2CCF4BA0L,0xD0F15FD0L,7L},{0x13C98728L,0x2CCF4BA0L,0L,1L},{0x2CCF4BA0L,0x1A8F1E26L,(-8L),(-1L)},{0x2FA2013DL,(-1L),(-6L),0x1A8F1E26L},{1L,(-1L),0xB1DC1D57L,1L},{(-1L),(-1L),(-8L),0x13C98728L},{0x988692CBL,0x11F5C978L,0x37B2E8B0L,0xEBA65CE9L},{0x13C98728L,0x1DB2C990L,1L,0x1DB2C990L},{(-1L),1L,7L,0x13C98728L}}};
    int64_t l_1070 = 0xEEC605F0F1151CC4LL;
    union U1 *l_1086[8][8] = {{(void*)0,&g_82,&g_82,&g_82,(void*)0,&g_82,&g_82,&g_82},{(void*)0,&g_82,&g_82,&g_82,(void*)0,&g_82,&g_82,&g_82},{(void*)0,&g_82,&g_82,&g_82,(void*)0,&g_82,&g_82,&g_82},{(void*)0,&g_82,&g_82,&g_82,(void*)0,&g_82,&g_82,&g_82},{(void*)0,&g_82,&g_82,&g_82,(void*)0,&g_82,&g_82,&g_82},{(void*)0,&g_82,&g_82,&g_82,(void*)0,&g_82,&g_82,&g_82},{(void*)0,&g_82,&g_82,&g_82,(void*)0,&g_82,&g_82,&g_82},{(void*)0,&g_82,&g_82,&g_82,(void*)0,&g_82,&g_82,&g_82}};
    uint64_t l_1138 = 6UL;
    int16_t *** const *l_1234 = &g_1120;
    int16_t l_1246 = 0xD971L;
    uint16_t ***l_1247 = &g_1128;
    int8_t l_1273 = 0x25L;
    uint32_t l_1275[3][2] = {{0x92413213L,0x92413213L},{1UL,0x92413213L},{0x92413213L,1UL}};
    int8_t l_1384 = 0x7EL;
    int32_t *l_1450 = &g_68[4][4];
    struct S0 **** const l_1499[10][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint64_t l_1556 = 4UL;
    uint16_t l_1566 = 0x3475L;
    int64_t ** const l_1587 = &g_765;
    union U1 l_1687 = {0};
    uint32_t *l_1702 = &g_591;
    uint32_t **l_1701 = &l_1702;
    uint32_t l_1706 = 6UL;
    uint32_t l_1720[4];
    uint32_t l_1725 = 0xBBAB3A55L;
    int32_t l_1746 = 0xD2917014L;
    int8_t l_1794 = 0x00L;
    int32_t l_1841 = 0xEAE4DA02L;
    uint64_t l_1899[7] = {0xEB5B1C504B961B24LL,0xEB5B1C504B961B24LL,0xEB5B1C504B961B24LL,0xEB5B1C504B961B24LL,0xEB5B1C504B961B24LL,0xEB5B1C504B961B24LL,0xEB5B1C504B961B24LL};
    int8_t l_2019 = 6L;
    int64_t l_2051[8][6][5] = {{{0L,0x6C43EB2CC6DAEF91LL,0x6C43EB2CC6DAEF91LL,0L,1L},{1L,0xD808E9303E8D63BBLL,6L,(-8L),0x61BBA60F0402C705LL},{4L,1L,0x71DFC12A9F406D9DLL,0x6C43EB2CC6DAEF91LL,0x7448253FC78CE2F9LL},{0xD3DD9C89159887CDLL,0x28D912C1F4EA6003LL,(-6L),(-8L),0xD802A5D94380C496LL},{6L,0xD8FB07436F7DC645LL,(-1L),0L,1L},{0x9A22C35AA14A7472LL,(-8L),0x9A22C35AA14A7472LL,0xDD93F2F87990CD72LL,1L}},{{0x7448253FC78CE2F9LL,(-9L),0L,0xD8FB07436F7DC645LL,(-9L)},{0xD3DD9C89159887CDLL,0xD808E9303E8D63BBLL,0x4420E625BA85205ELL,0x73C3615385F30AE1LL,0xD3DD9C89159887CDLL},{(-9L),1L,0L,4L,0x7448253FC78CE2F9LL},{1L,5L,0x9A22C35AA14A7472LL,1L,0x9A22C35AA14A7472LL},{1L,1L,(-1L),1L,6L},{0xD802A5D94380C496LL,1L,(-6L),(-5L),0xD3DD9C89159887CDLL}},{{0x7448253FC78CE2F9LL,0L,0x71DFC12A9F406D9DLL,0L,4L},{0x61BBA60F0402C705LL,1L,6L,0x73C3615385F30AE1LL,1L},{1L,1L,0x6C43EB2CC6DAEF91LL,0L,0L},{0xD3DD9C89159887CDLL,5L,0x220AD2856BE2BC7ALL,0xD808E9303E8D63BBLL,0xD802A5D94380C496LL},{0L,1L,(-7L),0L,6L},{(-1L),0xD808E9303E8D63BBLL,0x9A22C35AA14A7472LL,0x28D912C1F4EA6003LL,0x61BBA60F0402C705LL}},{{0L,(-9L),0x71DFC12A9F406D9DLL,1L,0x93165480DB6A1CF2LL},{0xD3DD9C89159887CDLL,(-8L),(-7L),(-8L),0xD3DD9C89159887CDLL},{1L,0xD8FB07436F7DC645LL,0xD0AA062D3EC0D85BLL,4L,1L},{0x61BBA60F0402C705LL,0x28D912C1F4EA6003LL,0x9A22C35AA14A7472LL,0xD808E9303E8D63BBLL,(-1L)},{0x7448253FC78CE2F9LL,1L,0x9E0D44E33BEE6DFDLL,0xD8FB07436F7DC645LL,1L},{0xD802A5D94380C496LL,0xD808E9303E8D63BBLL,0x220AD2856BE2BC7ALL,5L,0xD3DD9C89159887CDLL}},{{1L,0x6C43EB2CC6DAEF91LL,0L,0L,0x93165480DB6A1CF2LL},{1L,0x73C3615385F30AE1LL,6L,1L,0x61BBA60F0402C705LL},{(-9L),1L,0xD0AA062D3EC0D85BLL,0x6C43EB2CC6DAEF91LL,6L},{0xD3DD9C89159887CDLL,(-5L),(-6L),1L,0xD802A5D94380C496LL},{0x7448253FC78CE2F9LL,0xD8FB07436F7DC645LL,1L,0L,0L},{0x9A22C35AA14A7472LL,1L,0x9A22C35AA14A7472LL,5L,1L}},{{6L,(-9L),0x6C43EB2CC6DAEF91LL,0xD8FB07436F7DC645LL,4L},{0xD3DD9C89159887CDLL,0x73C3615385F30AE1LL,0x4420E625BA85205ELL,0xD808E9303E8D63BBLL,0xD3DD9C89159887CDLL},{4L,1L,0x6C43EB2CC6DAEF91LL,4L,1L},{(-1L),0L,6L,0x28D912C1F4EA6003LL,6L},{4L,(-9L),5L,0x6C43EB2CC6DAEF91LL,0x93165480DB6A1CF2LL},{0x4F1C54887D4969DBLL,0x28D912C1F4EA6003LL,(-7L),(-7L),0xD802A5D94380C496LL}},{{1L,0x9E0D44E33BEE6DFDLL,(-1L),4L,0xEEAEA5869BC4EA0ELL},{0x9A22C35AA14A7472LL,0x28D912C1F4EA6003LL,0x61BBA60F0402C705LL,0xDD93F2F87990CD72LL,(-1L)},{0x3A5B851C4D952F2CLL,(-9L),0x9E0D44E33BEE6DFDLL,0x9E0D44E33BEE6DFDLL,(-9L)},{0xD802A5D94380C496LL,0L,0x4420E625BA85205ELL,5L,0x4F1C54887D4969DBLL},{(-9L),0x6C43EB2CC6DAEF91LL,0xD8FB07436F7DC645LL,4L,0x93165480DB6A1CF2LL},{0x512CCE46845E1B08LL,5L,6L,5L,0x9A22C35AA14A7472LL}},{{(-9L),0xEEAEA5869BC4EA0ELL,(-1L),0x6C43EB2CC6DAEF91LL,0xD318119A9FA64BDFLL},{0xD802A5D94380C496LL,(-5L),1L,(-5L),0xD802A5D94380C496LL},{0x3A5B851C4D952F2CLL,0L,1L,0xF5478F43B4E1F423LL,4L},{0x9A22C35AA14A7472LL,5L,6L,5L,0x512CCE46845E1B08LL},{1L,(-9L),1L,0L,4L},{0x4F1C54887D4969DBLL,5L,0x4420E625BA85205ELL,0L,0xD802A5D94380C496LL}}};
    int16_t l_2065 = 0x6507L;
    int32_t l_2070 = (-5L);
    uint32_t l_2071[6];
    uint32_t l_2100 = 1UL;
    int16_t l_2136 = (-6L);
    uint32_t l_2205[8] = {0x0FA1A8F1L,0x0FA1A8F1L,0x0FA1A8F1L,0x0FA1A8F1L,0x0FA1A8F1L,0x0FA1A8F1L,0x0FA1A8F1L,0x0FA1A8F1L};
    int16_t l_2232[6];
    int64_t ****l_2316 = &g_1110;
    int32_t l_2322 = 6L;
    int64_t l_2366 = 0x324F2782A31A9396LL;
    int8_t l_2426[1][5] = {{(-1L),(-1L),(-1L),(-1L),(-1L)}};
    struct S0 ***l_2435 = &g_327;
    int64_t l_2462[9];
    uint64_t l_2483[5][3][9] = {{{0x2E245ABC7B566013LL,0x2E245ABC7B566013LL,0x5D2404761DB477D5LL,9UL,18446744073709551615UL,0xB22A9D3D1F5A900BLL,2UL,0x7A126096A5C97E8FLL,9UL},{0x28030FAE5598EB75LL,3UL,1UL,2UL,18446744073709551611UL,0x74753AF24F6860CBLL,3UL,0xEEBAE75223C14E26LL,18446744073709551607UL},{18446744073709551608UL,0xC633B4A1280F7FE1LL,0x5D2404761DB477D5LL,2UL,18446744073709551615UL,2UL,0x5D2404761DB477D5LL,0xC633B4A1280F7FE1LL,18446744073709551608UL}},{{0xF079D2087A2C82EALL,18446744073709551607UL,0x94467B843FA7BD63LL,18446744073709551615UL,0x63AD6D122049A0B0LL,0x3C8FBD4BF0A53A96LL,0x5DCD1AAE636F438BLL,0x94467B843FA7BD63LL,18446744073709551611UL},{0x5D2404761DB477D5LL,0x894B2788A9712EF9LL,0UL,18446744073709551612UL,0x6AD8240C372297F2LL,0x5D2404761DB477D5LL,18446744073709551615UL,0xA6315E37E83E0FD2LL,0xA6315E37E83E0FD2LL},{0xF079D2087A2C82EALL,0x63AD6D122049A0B0LL,0x5DCD1AAE636F438BLL,0xE32F6B114E9ACD06LL,0x5DCD1AAE636F438BLL,0x63AD6D122049A0B0LL,0xF079D2087A2C82EALL,2UL,0xE32F6B114E9ACD06LL}},{{18446744073709551608UL,0x91E2DD5EF9FE435CLL,2UL,0xC633B4A1280F7FE1LL,0x7A126096A5C97E8FLL,0xBB78428333CB9D5CLL,0x91E2DD5EF9FE435CLL,0xB48DD4A2454156B1LL,0x5D2404761DB477D5LL},{0x28030FAE5598EB75LL,18446744073709551615UL,18446744073709551607UL,1UL,0x92E6D8D1ED096BB9LL,18446744073709551615UL,2UL,2UL,18446744073709551615UL},{0x2E245ABC7B566013LL,18446744073709551607UL,0xA6315E37E83E0FD2LL,18446744073709551607UL,0x2E245ABC7B566013LL,2UL,18446744073709551615UL,0xA6315E37E83E0FD2LL,0xC633B4A1280F7FE1LL}},{{18446744073709551611UL,18446744073709551607UL,0x55974BC6494F46FBLL,8UL,3UL,18446744073709551611UL,0x92E6D8D1ED096BB9LL,0x94467B843FA7BD63LL,18446744073709551611UL},{0xF6D3F18FEC0FA0C8LL,0x2E245ABC7B566013LL,0x7A126096A5C97E8FLL,18446744073709551615UL,0xC633B4A1280F7FE1LL,2UL,2UL,0xC633B4A1280F7FE1LL,18446744073709551615UL},{1UL,0xD1A09568BD40B221LL,8UL,0x28030FAE5598EB75LL,0xEEBAE75223C14E26LL,0x55974BC6494F46FBLL,0x63AD6D122049A0B0LL,0x94467B843FA7BD63LL,1UL}},{{0xA6315E37E83E0FD2LL,0xBB78428333CB9D5CLL,18446744073709551608UL,0UL,6UL,9UL,2UL,1UL,18446744073709551612UL},{0x5DCD1AAE636F438BLL,18446744073709551615UL,18446744073709551607UL,0x28030FAE5598EB75LL,18446744073709551611UL,18446744073709551611UL,0x28030FAE5598EB75LL,18446744073709551607UL,18446744073709551615UL},{0xBB78428333CB9D5CLL,2UL,0x6AD8240C372297F2LL,0x894B2788A9712EF9LL,0xB22A9D3D1F5A900BLL,0xBB78428333CB9D5CLL,6UL,0xDD26E86E7FB346AELL,0x91E2DD5EF9FE435CLL}}};
    uint16_t l_2564 = 65529UL;
    int64_t l_2609 = 0x09A0926D8CB65861LL;
    int8_t l_2610 = 0x79L;
    const int64_t l_2725 = 0x1F3E3C48ADDA430BLL;
    int8_t **l_2746 = (void*)0;
    union U1 ***l_2772 = (void*)0;
    uint8_t l_2800 = 0xEFL;
    uint32_t ****l_2817 = &g_1906;
    uint32_t *****l_2816 = &l_2817;
    int64_t *****l_2846 = &g_2844;
    int16_t l_2915 = 0xB943L;
    uint8_t l_2916 = 0xB7L;
    int32_t l_2934 = 5L;
    uint32_t l_2955 = 0UL;
    int64_t l_2974 = 0x48AA8278D2FFBFD5LL;
    uint8_t l_2995 = 0x61L;
    union U1 l_2996 = {0};
    union U1 ****l_3030 = &l_2772;
    union U1 *l_3054 = (void*)0;
    uint8_t l_3081 = 0xF9L;
    uint8_t ** const l_3087 = &g_396;
    uint32_t l_3131 = 0UL;
    int64_t **** const l_3187 = &g_1110;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1720[i] = 18446744073709551615UL;
    for (i = 0; i < 6; i++)
        l_2071[i] = 0x4FB858A0L;
    for (i = 0; i < 6; i++)
        l_2232[i] = 0x1F6FL;
    for (i = 0; i < 9; i++)
        l_2462[i] = 0x56BE708EF66F1917LL;
    return (*l_1450);
}







static int8_t * func_6(int8_t * p_7, uint64_t p_8)
{
    int32_t *l_1039 = &g_685;
    (*g_313) = l_1039;
    return &g_10;
}







static int8_t func_11(int8_t * p_12, const int32_t p_13, int32_t p_14, int8_t * p_15)
{
    const union U1 *l_950 = (void*)0;
    const union U1 **l_949[10][6][4] = {{{&l_950,&l_950,&l_950,&l_950},{(void*)0,&l_950,&l_950,(void*)0},{&l_950,(void*)0,&l_950,&l_950},{(void*)0,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,(void*)0,&l_950}},{{&l_950,&l_950,&l_950,(void*)0},{&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950},{&l_950,(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_950,&l_950,&l_950},{(void*)0,&l_950,&l_950,&l_950},{(void*)0,&l_950,&l_950,(void*)0},{(void*)0,&l_950,&l_950,&l_950},{(void*)0,(void*)0,&l_950,&l_950},{(void*)0,&l_950,(void*)0,&l_950}},{{&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950},{&l_950,(void*)0,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950},{&l_950,(void*)0,(void*)0,&l_950}},{{&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950},{(void*)0,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950},{(void*)0,(void*)0,&l_950,&l_950},{&l_950,&l_950,&l_950,(void*)0}},{{&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950},{(void*)0,&l_950,&l_950,(void*)0},{&l_950,(void*)0,&l_950,&l_950},{(void*)0,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950}},{{&l_950,&l_950,(void*)0,&l_950},{&l_950,&l_950,&l_950,(void*)0},{&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,(void*)0},{&l_950,&l_950,(void*)0,&l_950},{&l_950,&l_950,&l_950,&l_950}},{{(void*)0,&l_950,&l_950,&l_950},{(void*)0,(void*)0,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,(void*)0},{&l_950,&l_950,&l_950,&l_950},{&l_950,(void*)0,&l_950,&l_950}},{{(void*)0,&l_950,&l_950,&l_950},{(void*)0,&l_950,&l_950,&l_950},{&l_950,(void*)0,(void*)0,&l_950},{&l_950,&l_950,&l_950,(void*)0},{&l_950,(void*)0,&l_950,(void*)0},{&l_950,&l_950,&l_950,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{&l_950,&l_950,&l_950,&l_950},{&l_950,(void*)0,&l_950,&l_950},{(void*)0,&l_950,&l_950,&l_950},{&l_950,&l_950,&l_950,&l_950},{&l_950,(void*)0,&l_950,&l_950}}};
    int8_t l_954 = 5L;
    int32_t l_955[10][8] = {{(-1L),(-1L),0xDB9B2A24L,0xEA883FB2L,0xDB9B2A24L,(-1L),(-1L),0xDB9B2A24L},{(-1L),0xDB9B2A24L,0xDB9B2A24L,(-1L),0xED895A04L,(-1L),0xDB9B2A24L,0xDB9B2A24L},{0xDB9B2A24L,0xED895A04L,0xEA883FB2L,0xEA883FB2L,0xED895A04L,0xDB9B2A24L,0xED895A04L,0xEA883FB2L},{(-1L),0xED895A04L,(-1L),0xDB9B2A24L,0xDB9B2A24L,(-1L),0xED895A04L,(-1L)},{(-1L),0xDB9B2A24L,0xEA883FB2L,0xDB9B2A24L,(-1L),(-1L),0xDB9B2A24L,0xEA883FB2L},{(-1L),(-1L),0xDB9B2A24L,0xEA883FB2L,0xDB9B2A24L,(-1L),(-1L),0xDB9B2A24L},{(-1L),0xDB9B2A24L,0xDB9B2A24L,(-1L),0xED895A04L,(-1L),0xDB9B2A24L,0xDB9B2A24L},{0xDB9B2A24L,0xED895A04L,0xEA883FB2L,0xEA883FB2L,0xED895A04L,0xDB9B2A24L,0xED895A04L,0xEA883FB2L},{(-1L),0xED895A04L,(-1L),0xDB9B2A24L,0xDB9B2A24L,(-1L),0xED895A04L,(-1L)},{(-1L),0xDB9B2A24L,0xEA883FB2L,0xDB9B2A24L,(-1L),(-1L),0xDB9B2A24L,0xEA883FB2L}};
    int32_t *l_956[5][7] = {{(void*)0,&g_685,&g_685,(void*)0,&g_685,&g_685,(void*)0},{&g_685,(void*)0,&g_685,&g_685,(void*)0,&g_685,&g_685},{(void*)0,(void*)0,&g_68[2][2],(void*)0,(void*)0,&g_68[2][2],(void*)0},{(void*)0,&g_685,&g_685,(void*)0,&g_685,&g_685,(void*)0},{&g_68[2][2],&g_685,&g_68[2][2],&g_68[2][2],&g_685,&g_68[2][2],&g_68[2][2]}};
    struct S0 l_957 = {255UL,0x9094CE63L,0x03L};
    int64_t * const *l_980 = &g_765;
    int64_t * const **l_979 = &l_980;
    const uint32_t l_981[7][1] = {{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL}};
    uint8_t l_1000 = 0xD6L;
    int32_t **l_1004 = &g_153[0][1];
    int32_t ***l_1003 = &l_1004;
    const int32_t * const *l_1006 = (void*)0;
    const int32_t * const **l_1005[7][5] = {{&l_1006,&l_1006,&l_1006,&l_1006,(void*)0},{&l_1006,&l_1006,&l_1006,&l_1006,&l_1006},{&l_1006,&l_1006,&l_1006,(void*)0,&l_1006},{&l_1006,&l_1006,&l_1006,&l_1006,(void*)0},{&l_1006,&l_1006,&l_1006,&l_1006,&l_1006},{&l_1006,&l_1006,&l_1006,(void*)0,&l_1006},{&l_1006,&l_1006,(void*)0,&l_1006,(void*)0}};
    uint32_t l_1027 = 4294967295UL;
    int8_t l_1028 = (-1L);
    int32_t l_1029 = 3L;
    int i, j, k;
    l_957 = func_45(((+(0x38192430L ^ (0x854FL == p_13))) & (safe_div_func_int64_t_s_s(((*g_239) && ((l_955[1][5] = (safe_div_func_uint8_t_u_u(((l_949[3][3][0] != &l_950) < (safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(l_954)), 15))), 0x9DL))) <= p_13)), l_954))), &l_954, l_956[0][6]);
    if ((safe_sub_func_uint16_t_u_u((~(-5L)), (0x21L <= (safe_div_func_int8_t_s_s(0xACL, (~((p_13 ^ ((void*)0 != (*g_117))) <= (safe_mod_func_uint64_t_u_u((safe_div_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((*g_855), ((safe_add_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((((!(1UL < ((safe_add_func_uint64_t_u_u(((p_14 != 0xE42B15FEL) && (*p_12)), p_13)) != p_13))) , l_979) == (void*)0) > p_14), 2)), 0xEEL)) != g_629), 0xD30B0BC8L)) | p_14))) != (*g_239)), p_13)), l_981[3][0]))))))))))
    {
        int32_t l_982 = 0xC51584E9L;
        p_14 = p_14;
        if (g_205)
            goto lbl_1030;
        return l_982;
    }
    else
    {
        uint16_t l_985[7][1] = {{4UL},{65532UL},{4UL},{65532UL},{4UL},{65532UL},{4UL}};
        struct S0 *l_995 = &l_957;
        uint16_t *l_1007 = (void*)0;
        uint16_t *l_1008 = &l_985[4][0];
        uint16_t l_1009[3];
        uint8_t l_1010 = 0x7FL;
        int8_t l_1011[6];
        int32_t l_1012 = 0xD06C3A41L;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1009[i] = 65526UL;
        for (i = 0; i < 6; i++)
            l_1011[i] = 2L;
        for (l_957.f1 = 13; (l_957.f1 != 0); l_957.f1--)
        {
            --l_985[4][0];
            return (*p_15);
        }
        l_1012 = (l_1011[4] ^= (p_14 = (((g_115.f2 , ((*p_12) ^= (((*g_239) || (((((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0x0E40C212L, 0xF5235592L)), (((!(p_14 != (((l_995 != (void*)0) == ((safe_unary_minus_func_uint16_t_u((+(safe_lshift_func_int8_t_s_s(l_1000, 5))))) <= (safe_mod_func_uint16_t_u_u(((*l_1008) = ((l_1003 == l_1005[6][3]) , l_985[3][0])), l_1009[0])))) <= p_14))) , 1UL) == l_1009[0]))), 0)) > 255UL) , l_1009[0]) > l_1010) > 0x936EL)) || l_985[4][0]))) && 0xA6L) , p_13)));
    }
lbl_1030:
    l_1029 |= (safe_rshift_func_int16_t_s_u(0x7BC2L, (p_13 == (safe_lshift_func_uint8_t_u_s((((safe_rshift_func_int16_t_s_u(((*g_314) != (p_13 <= ((-6L) <= (safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((((&l_957 == (void*)0) || (*p_15)) , (safe_div_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u(((l_957 , p_14) & p_13), 6)) , l_1027) == p_13), p_13))) & p_13), p_13)), 1L))))), p_14)) > l_1028) , p_14), (*p_15))))));
    for (g_615 = 0; (g_615 < (-17)); g_615 = safe_sub_func_uint16_t_u_u(g_615, 3))
    {
        int8_t l_1033 = (-9L);
        int32_t l_1034[3][10][8] = {{{0xFF9BA393L,0xB0D8B5A1L,0xE7BB50FDL,8L,0x29DC788DL,0x0D209041L,1L,(-1L)},{0xA0BB4CCEL,0x68CA47F0L,1L,0xCDC61983L,0L,0xAFE60A21L,0xB8E18CA3L,9L},{0x3DF61B08L,9L,1L,(-8L),0xF9624443L,(-1L),(-6L),0x49241774L},{0x73D6FCFFL,0x8638D897L,(-3L),(-1L),0xE7BB50FDL,0x17849461L,2L,0x590C1C29L},{1L,(-1L),(-1L),(-1L),0xB8E18CA3L,1L,1L,9L},{0xBBFC0E92L,3L,0xB8E18CA3L,0xBA2D8237L,6L,3L,0xE940D405L,0xBFE36BE3L},{2L,(-1L),0x8018B069L,0L,0L,0x8018B069L,(-1L),2L},{0xAA751315L,0x0D209041L,(-1L),0xF63E88F0L,0L,9L,0x8638D897L,0L},{(-8L),0x59D142A0L,0L,0xCDC61983L,0xF63E88F0L,9L,1L,0x73D6FCFFL},{6L,0x0D209041L,6L,0x88A95B6CL,0x3DF61B08L,0x8018B069L,0x93D58A33L,0x59D142A0L}},{{0x73D6FCFFL,(-1L),0xCC60F469L,0x76EA7F01L,(-1L),3L,3L,0xAD40AFCFL},{0x8638D897L,3L,(-7L),0x7148171FL,0x95E6F1CFL,1L,0x8018B069L,1L},{3L,(-1L),(-1L),0x49241774L,0L,0x17849461L,1L,0x29DC788DL},{0x836D68ACL,0x8638D897L,0x8018B069L,0xA9EA6ACDL,6L,(-1L),1L,0L},{0x60578449L,9L,0xBBFC0E92L,0x59D142A0L,0xBFE36BE3L,0xAFE60A21L,(-1L),0L},{0xB0D8B5A1L,0x68CA47F0L,0x7148171FL,1L,0xF9624443L,0x0D209041L,(-6L),0x76EA7F01L},{0x17849461L,0xB0D8B5A1L,0L,(-1L),0x3DF61B08L,0x7148171FL,0xCD184D15L,(-5L)},{(-1L),0x3DF61B08L,0x59D142A0L,0L,2L,(-6L),2L,0L},{3L,0L,3L,7L,0x29DC788DL,0xE7BB50FDL,0xB8E18CA3L,6L},{0x00653D6DL,0L,0x836D68ACL,0x8018B069L,0xB0D8B5A1L,0x93D58A33L,0x29DC788DL,0x00653D6DL}},{{0x00653D6DL,0x68CA47F0L,0x95E6F1CFL,(-1L),0x29DC788DL,(-1L),8L,0xDEB575C3L},{3L,0x60578449L,0xA2009479L,0xE8E3ADA2L,2L,(-1L),0x49241774L,0x59D142A0L},{(-1L),0x5A7D7642L,1L,1L,0x93D58A33L,0xFF9BA393L,0L,0x60578449L},{0xCDC61983L,0xCC60F469L,3L,9L,0L,0x5FD801FFL,(-6L),1L},{0xFF9BA393L,0x49241774L,6L,0xCC60F469L,0xA2009479L,(-6L),6L,(-1L)},{0x49241774L,0xADBAF057L,0L,0xCD184D15L,3L,0x29DC788DL,6L,(-1L)},{6L,6L,0x836D68ACL,0x7148171FL,0xA0BB4CCEL,0x5A7D7642L,0xBBFC0E92L,0L},{0L,0xF9624443L,0L,3L,6L,1L,3L,0xDEB575C3L},{8L,(-1L),0L,0xE05FA6DBL,4L,0L,0xBA2D8237L,0xBA2D8237L},{0xCC60F469L,0x93D58A33L,0x5FD801FFL,0x5FD801FFL,0x93D58A33L,0xCC60F469L,0x9D2CDF97L,1L}}};
        int32_t l_1035 = 0xB92189ECL;
        uint32_t l_1036[7][6] = {{0xB8207F38L,0xD746E267L,8UL,0xD34257ADL,18446744073709551615UL,8UL},{18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,0x5B21EDD9L,18446744073709551615UL,18446744073709551615UL},{0xD34257ADL,0xD746E267L,0x9C7E9ED3L,0x5B21EDD9L,0xD746E267L,18446744073709551615UL},{18446744073709551608UL,18446744073709551615UL,0x9C7E9ED3L,0xD34257ADL,18446744073709551615UL,18446744073709551615UL},{0xB8207F38L,18446744073709551615UL,18446744073709551615UL,0xB8207F38L,0xD746E267L,8UL},{0xB8207F38L,0xD746E267L,8UL,0xD34257ADL,18446744073709551615UL,8UL},{18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,0x5B21EDD9L,18446744073709551615UL,18446744073709551615UL}};
        int i, j, k;
        --l_1036[2][4];
    }
    return (*p_15);
}







static int8_t * func_20(int32_t p_21, int32_t * p_22)
{
    uint16_t l_940 = 0xB43AL;
    int32_t *l_943 = &g_68[5][4];
    --l_940;
    (*g_313) = l_943;
    return &g_10;
}







static uint64_t func_25(int32_t * p_26, uint16_t p_27)
{
    return g_115.f0;
}







static uint16_t func_29(int8_t p_30, uint16_t p_31, const uint8_t p_32, uint32_t p_33)
{
    int8_t *l_54 = &g_10;
    int32_t *l_66 = (void*)0;
    int8_t **l_282 = &g_143[0][0];
    int32_t *l_684 = &g_685;
    int32_t l_715 = 0x42BE87F0L;
    int32_t l_716 = 0xEA56D750L;
    int32_t l_717 = (-8L);
    int32_t l_719[2][7];
    uint64_t l_730 = 0xCD0D28004AF8196FLL;
    int32_t l_738[10] = {0xDC1B42DDL,0x38DAAFE1L,0L,0L,0x38DAAFE1L,0xDC1B42DDL,0x38DAAFE1L,0L,0L,0x38DAAFE1L};
    union U1 * const *l_758 = (void*)0;
    union U1 * const **l_757[9] = {&l_758,&l_758,&l_758,&l_758,&l_758,&l_758,&l_758,&l_758,&l_758};
    struct S0 l_792 = {1UL,0x90E9CB95L,0xA4L};
    uint8_t l_801 = 0x48L;
    int64_t l_904 = 0L;
    int32_t l_922 = 0xCD09C04BL;
    int32_t l_936 = 0x67B46F7AL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
            l_719[i][j] = 0x75E7712FL;
    }
    (*l_684) |= ((g_28 == (void*)0) | ((safe_rshift_func_int16_t_s_u(((safe_div_func_int8_t_s_s(func_40(func_45((!(safe_sub_func_uint16_t_u_u(0UL, (safe_rshift_func_uint16_t_u_s((l_54 == ((*l_282) = func_55(func_61((0xC5L > (l_66 == g_28)), l_66), l_66, &g_10, &g_10, p_33))), (*g_239)))))), g_283, g_28), p_32, g_148, g_396), p_32)) != (*g_239)), 2)) > g_148));
    for (g_278 = (-20); (g_278 != 0); g_278 = safe_add_func_uint16_t_u_u(g_278, 5))
    {
        uint64_t l_688 = 0x4A892288A7DABA83LL;
        int64_t *l_697 = &g_82.f2;
        int64_t *l_698 = &g_82.f2;
        int64_t *l_699 = &g_82.f2;
        int64_t *l_700[8][5][4] = {{{(void*)0,&g_278,&g_278,(void*)0},{&g_278,&g_278,&g_278,&g_278},{&g_278,(void*)0,&g_278,&g_278},{(void*)0,&g_278,&g_278,(void*)0},{(void*)0,&g_278,&g_278,(void*)0}},{{&g_278,&g_278,&g_278,(void*)0},{&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_278,(void*)0},{&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_278,&g_278}},{{&g_278,(void*)0,&g_278,&g_278},{&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_278,(void*)0},{&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_278,&g_278}},{{&g_278,(void*)0,&g_278,&g_278},{&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_278,(void*)0},{&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_278,&g_278}},{{&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_278,(void*)0},{&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_278,&g_278}},{{&g_278,(void*)0,&g_278,&g_278},{&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_278,(void*)0},{&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_278,&g_278}},{{&g_278,(void*)0,&g_278,&g_278},{&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_278,(void*)0},{&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_278,&g_278}},{{&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_278,(void*)0},{&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_278,&g_278}}};
        int32_t l_701 = 1L;
        uint64_t *l_703[8][6] = {{(void*)0,(void*)0,&g_205,&g_127,&g_205,&l_688},{&g_205,&g_127,&g_127,&g_127,&g_127,&g_205},{(void*)0,&g_205,&g_127,&g_205,(void*)0,&l_688},{&g_127,&g_205,&g_205,&g_127,&g_127,&l_688},{&g_127,&g_127,&l_688,&g_205,&g_205,&l_688},{(void*)0,(void*)0,&g_205,&g_127,&g_205,&l_688},{&g_205,&g_127,&g_127,&g_127,&g_127,&g_205},{(void*)0,&g_205,&g_127,&g_205,(void*)0,&l_688}};
        const int64_t l_712 = 0xD66F20512D48B639LL;
        int32_t l_714 = 0x527425FFL;
        int8_t l_718[6] = {6L,6L,0xC2L,6L,6L,0xC2L};
        int32_t l_720 = 6L;
        int32_t l_721 = 0xE6C872F3L;
        int32_t l_722 = 0x422ACDE0L;
        int32_t l_723 = 1L;
        int32_t l_724 = 8L;
        int32_t l_725 = 0x4839A828L;
        int32_t l_726 = 0xB82B2E35L;
        uint64_t l_727[2];
        int32_t l_741 = 0x34A224CBL;
        int32_t l_742 = 7L;
        int32_t l_743[1];
        uint64_t l_744[1];
        uint64_t l_780 = 0x5E70141EF85F04FDLL;
        uint64_t l_783 = 0xE779E2196E44C7DCLL;
        uint16_t l_843[10];
        uint8_t l_849 = 0x4FL;
        int16_t *l_921 = &g_582;
        int32_t *l_923 = &l_720;
        int32_t *l_924 = &l_922;
        int32_t *l_925 = &l_741;
        int32_t *l_926 = &l_722;
        int32_t *l_927 = &l_701;
        int32_t *l_928 = &l_742;
        int32_t *l_929 = &l_726;
        int32_t *l_930 = (void*)0;
        int32_t *l_931 = &l_722;
        int32_t *l_932 = (void*)0;
        int32_t *l_933 = &l_726;
        int32_t *l_934 = &l_724;
        int32_t *l_935[2][1][6];
        uint16_t l_937[8][3][5] = {{{1UL,6UL,6UL,65534UL,0x532DL},{0UL,65535UL,6UL,65535UL,1UL},{65535UL,0x1229L,0x43D9L,0x9B1BL,6UL}},{{0x0892L,0UL,65535UL,65535UL,0UL},{1UL,1UL,0UL,65534UL,0UL},{0x1229L,0xD3DBL,65535UL,65535UL,6UL}},{{1UL,65535UL,2UL,1UL,1UL},{0x1229L,0UL,0x1229L,2UL,0x532DL},{1UL,0UL,0x9B1BL,1UL,0xD3DBL}},{{0x0892L,65535UL,1UL,65535UL,1UL},{65535UL,0xD3DBL,0x9B1BL,0xD3DBL,65535UL},{0UL,1UL,0x1229L,0xD3DBL,65535UL}},{{65534UL,0UL,2UL,65535UL,0x43D9L},{0x9B1BL,0x1229L,65535UL,1UL,65535UL},{65535UL,65535UL,0UL,2UL,65535UL}},{{65535UL,6UL,65535UL,1UL,1UL},{0x9B1BL,0x0892L,0x43D9L,65535UL,0xD3DBL},{65534UL,6UL,6UL,65534UL,0x532DL}},{{0UL,65535UL,6UL,65535UL,1UL},{65535UL,0x1229L,0x43D9L,0x9B1BL,6UL},{0x0892L,0UL,65535UL,65535UL,0UL}},{{1UL,1UL,0UL,65534UL,0UL},{0x1229L,0xD3DBL,65535UL,65535UL,6UL},{1UL,65535UL,2UL,1UL,1UL}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_727[i] = 18446744073709551610UL;
        for (i = 0; i < 1; i++)
            l_743[i] = 0xB7F91AE3L;
        for (i = 0; i < 1; i++)
            l_744[i] = 18446744073709551615UL;
        for (i = 0; i < 10; i++)
            l_843[i] = 65534UL;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 6; k++)
                    l_935[i][j][k] = &l_719[1][1];
            }
        }
    }
    return p_31;
}







static int8_t func_40(struct S0 p_41, int8_t p_42, int32_t p_43, int8_t * p_44)
{
    int64_t *l_678 = (void*)0;
    int64_t **l_677 = &l_678;
    int64_t ***l_679 = &l_677;
    int64_t **l_681 = &l_678;
    int64_t ***l_680 = &l_681;
    int32_t *l_682 = (void*)0;
    int32_t *l_683 = &g_68[4][4];
    (*l_683) &= (((*l_679) = l_677) != ((*l_680) = &l_678));
    return (*p_44);
}







static struct S0 func_45(uint8_t p_46, int8_t * p_47, int32_t * p_48)
{
    int32_t l_291[4];
    struct S0 *** const l_303 = (void*)0;
    const int32_t **l_315 = &g_314;
    int32_t **l_322 = (void*)0;
    int32_t ***l_321 = &l_322;
    uint8_t l_324 = 0xE3L;
    struct S0 l_332[7][2] = {{{0x3EL,0x9EFEEB15L,0x68L},{0x3EL,0x9EFEEB15L,0x68L}},{{0x3EL,0x9EFEEB15L,0x68L},{0x3EL,0x9EFEEB15L,0x68L}},{{0x3EL,0x9EFEEB15L,0x68L},{0x3EL,0x9EFEEB15L,0x68L}},{{0x3EL,0x9EFEEB15L,0x68L},{0x3EL,0x9EFEEB15L,0x68L}},{{0x3EL,0x9EFEEB15L,0x68L},{0x3EL,0x9EFEEB15L,0x68L}},{{0x3EL,0x9EFEEB15L,0x68L},{0x3EL,0x9EFEEB15L,0x68L}},{{0x3EL,0x9EFEEB15L,0x68L},{0x3EL,0x9EFEEB15L,0x68L}}};
    const int64_t *l_375[3];
    uint16_t l_417 = 0x8FC3L;
    int32_t l_458 = 0x854440CDL;
    uint32_t l_459 = 18446744073709551607UL;
    union U1 **l_464[8];
    uint16_t *l_626 = &g_230;
    uint8_t *l_644[9][1] = {{&g_569.f0},{&g_569.f0},{&g_569.f0},{&g_569.f0},{&g_569.f0},{&g_569.f0},{&g_569.f0},{&g_569.f0},{&g_569.f0}};
    int8_t l_645 = (-10L);
    int32_t l_646 = 0x79C12CCDL;
    uint16_t l_647 = 0x222FL;
    int32_t l_671 = 0L;
    int i, j;
    for (i = 0; i < 4; i++)
        l_291[i] = 0x91B6409FL;
    for (i = 0; i < 3; i++)
        l_375[i] = &g_278;
    for (i = 0; i < 8; i++)
        l_464[i] = &g_118;
lbl_648:
    for (g_115.f2 = 0; (g_115.f2 >= 2); g_115.f2 = safe_add_func_int16_t_s_s(g_115.f2, 5))
    {
        uint32_t *l_296 = &g_76;
        uint32_t l_308 = 4294967293UL;
        int32_t **l_316 = &g_153[0][1];
        struct S0 *l_317 = (void*)0;
        struct S0 **l_318 = &g_114;
        uint8_t *l_323 = &g_148;
        int64_t *l_325 = &g_278;
        int32_t *l_420[4] = {&l_291[1],&l_291[1],&l_291[1],&l_291[1]};
        const int16_t **l_545 = &g_239;
        const int32_t l_547 = 0L;
        struct S0 * const *l_585 = &l_317;
        struct S0 * const **l_584 = &l_585;
        struct S0 * const ***l_583 = &l_584;
        int i;
    }
    (**g_326) = (*g_327);
    if (((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((*g_396), 5)) > (~((((((safe_lshift_func_uint16_t_u_s(((((safe_mul_func_uint16_t_u_u(((**l_315) != p_46), (((((((*l_626)++) >= p_46) == (g_629 && ((safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((0L >= (((safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((g_115.f1 , (**l_315)), ((safe_div_func_int64_t_s_s(((((safe_mul_func_uint8_t_u_u((l_645 ^= (safe_div_func_int16_t_s_s((*g_239), 0x0392L))), p_46)) >= (*g_396)) , 0xFEL) == (**l_315)), g_278)) != (**l_315)))) != 1L), p_46)) | 65526UL) & 65527UL)), (*g_314))), g_205)) <= p_46))) < p_46) || p_46) | l_646))) == g_591) && 0UL) < g_112), (*g_239))) <= (-1L)) , &g_238) != &g_238) , 0x43L) && p_46))), g_615)) ^ l_647))
    {
        uint32_t l_665[10];
        int32_t *l_666[9];
        int i;
        for (i = 0; i < 10; i++)
            l_665[i] = 0x894630CBL;
        for (i = 0; i < 9; i++)
            l_666[i] = (void*)0;
        if (l_646)
            goto lbl_648;
        l_291[3] = (((safe_rshift_func_uint16_t_u_s(((*g_118) , (safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s(((-1L) ^ ((safe_rshift_func_uint16_t_u_u(p_46, 0)) ^ (**l_315))), ((-2L) & ((safe_div_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((**g_238), 2)) < p_46), g_591)) != (safe_mod_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u((l_665[6] , 65531UL), p_46)) >= l_665[6]) || l_665[6]), 0x46027166L)))))), 1))), 10)) , l_665[4]) == l_665[9]);
        for (l_646 = 0; (l_646 != 4); l_646++)
        {
            l_291[1] |= p_46;
            for (l_324 = 0; (l_324 >= 7); l_324 = safe_add_func_int16_t_s_s(l_324, 4))
            {
                uint32_t l_672 = 1UL;
                l_672--;
                return (*g_114);
            }
            (*g_313) = (*g_313);
        }
        for (g_10 = 0; (g_10 == (-1)); g_10 = safe_sub_func_int8_t_s_s(g_10, 5))
        {
            for (g_127 = 0; g_127 < 5; g_127 += 1)
            {
                for (g_615 = 0; g_615 < 7; g_615 += 1)
                {
                    g_153[g_127][g_615] = &g_68[4][4];
                }
            }
        }
    }
    else
    {
        return (**g_327);
    }
    return (***g_326);
}







static int8_t * func_55(int32_t * p_56, int32_t * p_57, int8_t * p_58, int8_t * p_59, int32_t p_60)
{
    int32_t *l_67 = &g_68[4][4];
    int32_t *l_69 = &g_68[4][7];
    int32_t *l_70 = &g_68[6][7];
    int32_t *l_71 = &g_68[4][4];
    int32_t *l_72 = (void*)0;
    int32_t *l_73[10][5][5] = {{{&g_68[4][7],&g_68[5][2],&g_68[4][4],(void*)0,&g_68[3][4]},{&g_68[4][4],(void*)0,&g_68[1][3],&g_68[5][1],&g_68[3][7]},{&g_68[4][7],&g_68[5][6],&g_68[5][1],&g_68[4][4],&g_68[6][3]},{&g_68[4][4],&g_68[1][3],&g_68[4][4],&g_68[3][4],&g_68[5][6]},{&g_68[5][2],&g_68[1][4],&g_68[0][5],&g_68[4][4],&g_68[4][4]}},{{&g_68[0][0],&g_68[4][4],(void*)0,&g_68[4][4],&g_68[5][2]},{&g_68[5][2],&g_68[4][4],&g_68[5][6],&g_68[4][4],&g_68[6][0]},{&g_68[4][4],&g_68[1][4],&g_68[4][4],&g_68[4][7],&g_68[4][7]},{&g_68[3][4],&g_68[1][3],&g_68[3][4],&g_68[5][0],&g_68[0][0]},{&g_68[4][4],&g_68[4][4],(void*)0,(void*)0,&g_68[4][4]}},{{&g_68[5][0],(void*)0,&g_68[6][1],&g_68[4][4],(void*)0},{&g_68[5][2],&g_68[1][4],(void*)0,&g_68[4][4],&g_68[5][0]},{(void*)0,&g_68[4][6],&g_68[4][4],&g_68[4][4],&g_68[5][6]},{&g_68[4][4],&g_68[4][4],&g_68[4][4],&g_68[1][3],&g_68[5][2]},{&g_68[4][4],(void*)0,(void*)0,&g_68[5][5],&g_68[5][6]}},{{&g_68[4][4],(void*)0,&g_68[4][4],&g_68[5][5],&g_68[5][1]},{&g_68[5][2],&g_68[5][6],&g_68[5][0],&g_68[1][3],&g_68[6][0]},{&g_68[4][6],&g_68[4][4],&g_68[1][3],&g_68[4][4],&g_68[4][6]},{&g_68[4][4],(void*)0,&g_68[0][5],&g_68[4][4],&g_68[4][4]},{&g_68[5][6],&g_68[4][6],&g_68[4][4],&g_68[4][4],&g_68[4][4]}},{{&g_68[4][4],&g_68[4][7],(void*)0,(void*)0,&g_68[4][4]},{&g_68[2][2],&g_68[4][4],&g_68[4][4],&g_68[5][2],&g_68[4][6]},{&g_68[4][4],&g_68[4][4],&g_68[4][7],&g_68[4][6],&g_68[6][0]},{(void*)0,&g_68[4][4],&g_68[6][0],&g_68[2][4],&g_68[5][1]},{&g_68[6][7],&g_68[3][2],&g_68[5][2],&g_68[4][4],&g_68[5][6]}},{{&g_68[6][7],&g_68[3][4],&g_68[4][4],(void*)0,&g_68[5][2]},{(void*)0,&g_68[4][4],&g_68[5][6],&g_68[4][4],&g_68[5][6]},{&g_68[4][4],&g_68[4][4],&g_68[6][3],&g_68[6][0],&g_68[5][0]},{&g_68[2][2],&g_68[0][5],&g_68[3][7],&g_68[6][3],(void*)0},{&g_68[4][4],(void*)0,&g_68[3][4],&g_68[5][1],&g_68[4][4]}},{{&g_68[5][6],&g_68[0][5],(void*)0,&g_68[4][4],&g_68[0][0]},{&g_68[4][4],&g_68[4][4],&g_68[4][4],&g_68[4][7],&g_68[4][6]},{&g_68[4][6],&g_68[4][4],&g_68[6][7],&g_68[4][4],&g_68[6][1]},{&g_68[5][2],&g_68[3][4],&g_68[4][4],&g_68[2][2],&g_68[4][4]},{&g_68[4][4],&g_68[3][2],&g_68[4][4],&g_68[0][5],&g_68[4][4]}},{{&g_68[4][4],&g_68[4][4],&g_68[6][7],&g_68[4][4],&g_68[4][4]},{&g_68[4][4],&g_68[4][4],&g_68[4][4],&g_68[4][4],&g_68[2][2]},{(void*)0,&g_68[4][4],(void*)0,&g_68[1][3],&g_68[6][7]},{&g_68[5][2],&g_68[4][7],&g_68[3][4],(void*)0,&g_68[4][4]},{&g_68[5][0],&g_68[4][6],&g_68[3][7],&g_68[1][3],(void*)0}},{{&g_68[4][4],(void*)0,&g_68[6][3],&g_68[4][4],&g_68[4][4]},{&g_68[4][4],&g_68[4][4],&g_68[5][6],&g_68[4][4],&g_68[4][4]},{&g_68[2][4],&g_68[5][6],&g_68[4][4],&g_68[0][5],&g_68[4][7]},{&g_68[4][4],(void*)0,&g_68[5][2],&g_68[2][2],&g_68[4][7]},{&g_68[4][4],(void*)0,&g_68[6][0],&g_68[4][4],&g_68[4][4]}},{{&g_68[1][4],&g_68[4][4],&g_68[4][7],&g_68[4][7],&g_68[4][4]},{(void*)0,&g_68[4][6],&g_68[4][4],&g_68[4][4],(void*)0},{&g_68[4][6],&g_68[4][4],&g_68[4][4],&g_68[6][3],&g_68[4][6]},{&g_68[5][6],&g_68[4][4],(void*)0,&g_68[2][2],&g_68[4][4]},{&g_68[4][6],&g_68[4][4],&g_68[5][0],&g_68[6][1],&g_68[5][1]}}};
    int64_t l_74[2];
    int32_t l_75 = 6L;
    uint32_t l_79[9];
    struct S0 l_90 = {1UL,0x739EBEB9L,0L};
    struct S0 l_101[5][8] = {{{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L}},{{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L}},{{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L}},{{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L}},{{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L},{0x2DL,3L,1L}}};
    uint8_t l_105 = 0x34L;
    union U1 *l_111 = (void*)0;
    struct S0 **l_241[6][9] = {{&g_114,(void*)0,&g_114,&g_114,(void*)0,&g_114,(void*)0,&g_114,&g_114},{&g_114,&g_114,&g_114,&g_114,&g_114,&g_114,&g_114,&g_114,&g_114},{&g_114,(void*)0,&g_114,&g_114,&g_114,&g_114,(void*)0,&g_114,&g_114},{&g_114,&g_114,&g_114,&g_114,(void*)0,&g_114,&g_114,&g_114,&g_114},{&g_114,&g_114,&g_114,&g_114,&g_114,&g_114,&g_114,&g_114,&g_114},{&g_114,(void*)0,&g_114,&g_114,(void*)0,&g_114,(void*)0,&g_114,&g_114}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_74[i] = 0x12536DE7EBAC3F40LL;
    for (i = 0; i < 9; i++)
        l_79[i] = 0x59BB015CL;
    --g_76;
    if ((l_79[3] > (safe_sub_func_uint16_t_u_u((((g_82 , ((safe_rshift_func_int8_t_s_u((0xD77AE26BL != p_60), 4)) ^ (((!g_76) == ((void*)0 != &l_75)) , (safe_sub_func_uint32_t_u_u(((l_90 , 18446744073709551612UL) >= p_60), g_5))))) <= p_60) <= (*l_67)), 0x5E97L))))
    {
        uint32_t l_91 = 0x55718CB2L;
        union U1 l_94 = {0};
        int32_t l_106 = 0xBC482750L;
        int8_t l_149 = 0x5EL;
        int32_t l_179[7][7][5] = {{{0x35C5DC2CL,1L,(-1L),(-1L),0xE930141AL},{(-9L),0x898BEAC2L,0xD9957389L,0xE27A70E2L,(-2L)},{1L,0xDE07D20DL,0L,0xE9C7F93EL,0x55F22959L},{1L,(-5L),0x164ED751L,0x6AC369FCL,1L},{0xDE07D20DL,0xEDE11C7FL,0x6AC369FCL,0x586A6676L,(-5L)},{0x69F7C8D7L,0x55F22959L,0x6AC369FCL,0xDE07D20DL,1L},{0x60F279C4L,2L,0x164ED751L,(-2L),(-6L)}},{{(-1L),(-2L),0L,0x37C9878CL,(-1L)},{(-1L),(-1L),0xD9957389L,0xD9957389L,(-1L)},{(-1L),(-2L),(-1L),(-2L),0x70625BB5L},{0x159CCD5EL,0L,0x37C9878CL,1L,0x35C5DC2CL},{0xAE68F206L,0xD3A580E2L,2L,(-5L),0x5B1F0BCFL},{0x159CCD5EL,(-2L),(-5L),0xBA8943D2L,0x61D12E86L},{(-1L),(-5L),0xDE07D20DL,0x61D12E86L,2L}},{{(-1L),0L,(-1L),(-7L),0xD9957389L},{(-1L),0x6AC369FCL,1L,(-6L),0xB3E451ECL},{0x60F279C4L,9L,1L,0xE9C7F93EL,9L},{1L,0x70625BB5L,0x6AC369FCL,0xE9C7F93EL,0x35C5DC2CL},{1L,1L,1L,0x37C9878CL,0x6AC369FCL},{0xEDE11C7FL,4L,0x898BEAC2L,0L,0x37E1BAF4L},{(-2L),(-1L),0xAE68F206L,4L,0xAE68F206L}},{{0xE9C7F93EL,0xE9C7F93EL,0xC8FD093CL,0x60F279C4L,(-7L)},{1L,1L,0xE9C7F93EL,0xE27A70E2L,0x898BEAC2L},{0xDE07D20DL,0x159CCD5EL,(-6L),(-2L),2L},{(-5L),1L,0x37E1BAF4L,0xAE68F206L,(-1L)},{0x164ED751L,0xE9C7F93EL,(-1L),(-1L),0x159CCD5EL},{(-5L),(-1L),(-9L),(-2L),(-1L)},{(-9L),4L,0xB3E451ECL,0x55F22959L,0L}},{{0L,1L,0x37C9878CL,1L,0xD9957389L},{9L,0x70625BB5L,0L,(-9L),0xD9957389L},{0xB3E451ECL,0xD9957389L,0L,(-1L),0L},{0xAE68F206L,(-1L),0xE27A70E2L,0xC8FD093CL,(-1L)},{(-6L),0L,0xC61511DFL,0x159CCD5EL,0x159CCD5EL},{9L,0x164ED751L,9L,(-5L),(-1L)},{0x37C9878CL,0xAE68F206L,1L,(-1L),2L}},{{0x55F22959L,9L,2L,0xE930141AL,0x898BEAC2L},{0xE930141AL,(-2L),1L,2L,(-7L)},{0xC8FD093CL,1L,9L,0xBA8943D2L,0xAE68F206L},{0x5B1F0BCFL,(-1L),0xC61511DFL,0x164ED751L,0x37E1BAF4L},{0x37E1BAF4L,(-5L),0xE27A70E2L,9L,0x6AC369FCL},{1L,9L,0L,(-5L),0x35C5DC2CL},{0x586A6676L,1L,0L,(-1L),9L}},{{0x586A6676L,0xD3A580E2L,0x37C9878CL,(-7L),0xDE07D20DL},{1L,0xE27A70E2L,0xB3E451ECL,0x69F7C8D7L,(-1L)},{0x37E1BAF4L,1L,(-9L),0xF5C22262L,9L},{0x5B1F0BCFL,(-1L),(-1L),0x5B1F0BCFL,4L},{0xC8FD093CL,0xE930141AL,0x37E1BAF4L,0L,0x61D12E86L},{0xE930141AL,0xC61511DFL,(-6L),1L,1L},{0x55F22959L,(-1L),0xE9C7F93EL,0L,1L}}};
        uint32_t l_180 = 4294967295UL;
        uint8_t l_188 = 2UL;
        uint16_t l_195 = 0x7354L;
        int i, j, k;
        l_91--;
        if ((l_94 , (*l_70)))
        {
            uint32_t l_104 = 0UL;
            union U1 *l_109 = (void*)0;
            struct S0 l_119 = {0x0AL,0xD097A5E0L,7L};
            int16_t l_135 = 8L;
            int32_t l_178[6][5][6] = {{{0x595372CDL,(-1L),(-1L),0x595372CDL,(-1L),0x34F4D14CL},{0xC8D5ACD4L,(-1L),(-1L),2L,(-1L),(-10L)},{0L,(-10L),0L,(-1L),(-1L),0x6200834EL},{4L,(-1L),1L,4L,(-1L),(-1L)},{(-7L),(-1L),(-1L),0xC8D5ACD4L,(-3L),0x087AE741L}},{{(-1L),1L,1L,(-1L),(-3L),0x4BD295D9L},{(-10L),0x087AE741L,1L,(-10L),0x4BD295D9L,0x7677040BL},{(-1L),0x087AE741L,0L,0L,(-3L),1L},{(-1L),1L,0xE45A5366L,0x6200834EL,(-3L),(-3L)},{1L,0x087AE741L,0x087AE741L,1L,0x4BD295D9L,1L}},{{0x34F4D14CL,0x087AE741L,0x4BD295D9L,(-1L),(-3L),1L},{0x6200834EL,1L,0x7677040BL,(-1L),(-3L),0L},{(-1L),0x087AE741L,1L,(-1L),0x4BD295D9L,0xE45A5366L},{0L,0x087AE741L,(-3L),0x34F4D14CL,(-3L),0x087AE741L},{(-1L),1L,1L,(-1L),(-3L),0x4BD295D9L}},{{(-10L),0x087AE741L,1L,(-10L),0x4BD295D9L,0x7677040BL},{(-1L),0x087AE741L,0L,0L,(-3L),1L},{(-1L),1L,0xE45A5366L,0x6200834EL,(-3L),(-3L)},{1L,0x087AE741L,0x087AE741L,1L,0x4BD295D9L,1L},{0x34F4D14CL,0x087AE741L,0x4BD295D9L,(-1L),(-3L),1L}},{{0x6200834EL,1L,0x7677040BL,(-1L),(-3L),0L},{(-1L),0x087AE741L,1L,(-1L),0x4BD295D9L,0xE45A5366L},{0L,0x087AE741L,(-3L),0x34F4D14CL,(-3L),0x087AE741L},{(-1L),1L,1L,(-1L),(-3L),0x4BD295D9L},{(-10L),0x087AE741L,1L,(-10L),0x4BD295D9L,0x7677040BL}},{{(-1L),0x087AE741L,0L,0L,(-3L),1L},{(-1L),1L,0xE45A5366L,0x6200834EL,(-3L),(-3L)},{1L,0x087AE741L,0x087AE741L,1L,0x4BD295D9L,1L},{0x34F4D14CL,0x087AE741L,0x4BD295D9L,(-1L),(-3L),1L},{0x6200834EL,1L,0x7677040BL,(-1L),(-3L),0L}}};
            uint8_t l_183 = 0UL;
            int i, j, k;
            (*l_70) = (l_106 = (((safe_div_func_int8_t_s_s(((*p_58) &= ((0x3E8CBBEE733D09B3LL != ((safe_lshift_func_uint16_t_u_u((~((l_91 <= (((+(((&g_10 != &g_10) == (l_101[2][1] , (((safe_add_func_uint16_t_u_u((l_94 , 9UL), g_68[6][2])) ^ (l_104 && l_104)) , 0L))) == l_104)) | g_68[4][4]) , p_60)) >= p_60)), 8)) == l_105)) & 0x86372135L)), 0x79L)) , l_91) > 9UL));
            for (l_75 = (-19); (l_75 > 27); l_75++)
            {
                struct S0 l_113[1] = {{246UL,-3L,-1L}};
                struct S0 *l_116 = &l_101[2][1];
                uint32_t l_174 = 0UL;
                int32_t l_175[6][5] = {{0x49551247L,0x19B726C3L,0x19B726C3L,0x49551247L,0x49551247L},{(-7L),3L,(-7L),3L,(-7L)},{0x49551247L,0x49551247L,0x19B726C3L,0x19B726C3L,0x49551247L},{0x41F251F0L,3L,0x41F251F0L,3L,0x41F251F0L},{0x49551247L,0x19B726C3L,0x19B726C3L,0x49551247L,0x49551247L},{(-7L),3L,(-7L),3L,(-7L)}};
                int16_t *l_176 = (void*)0;
                int16_t *l_177[9][7][4] = {{{&l_135,&l_135,&g_5,&g_5},{&l_135,&l_135,&l_135,&l_135},{&g_5,&l_135,&l_135,&g_5},{&l_135,&g_5,&l_135,&l_135},{&l_135,&g_5,&l_135,&g_5},{&g_5,&l_135,&g_5,&l_135},{&l_135,&l_135,&l_135,&g_5}},{{&g_5,&l_135,&g_5,&g_5},{&g_5,&l_135,&l_135,&g_5},{&l_135,&g_5,&g_5,&l_135},{&g_5,&l_135,&l_135,&l_135},{&l_135,&l_135,&l_135,&l_135},{&l_135,&l_135,&l_135,&l_135},{&g_5,&g_5,(void*)0,&g_5}},{{&l_135,&l_135,&g_5,&g_5},{&l_135,&l_135,&g_5,&g_5},{&l_135,&l_135,(void*)0,&l_135},{&g_5,&l_135,&l_135,&g_5},{&l_135,&g_5,&l_135,&l_135},{&l_135,&g_5,&l_135,&g_5},{&g_5,&l_135,&g_5,&l_135}},{{&l_135,&l_135,&l_135,&g_5},{&g_5,&l_135,&g_5,&g_5},{&g_5,&l_135,&l_135,&g_5},{&l_135,&g_5,&g_5,&l_135},{&g_5,&l_135,&l_135,&l_135},{&l_135,&l_135,&l_135,&l_135},{&l_135,&l_135,&l_135,&l_135}},{{&g_5,&g_5,(void*)0,&g_5},{&l_135,&l_135,&g_5,&g_5},{&l_135,&l_135,&g_5,&g_5},{&l_135,&l_135,(void*)0,&l_135},{&g_5,&l_135,&l_135,&g_5},{&l_135,&g_5,&l_135,&l_135},{&l_135,&g_5,&l_135,&g_5}},{{&g_5,&l_135,&g_5,&l_135},{&l_135,&l_135,&l_135,&g_5},{&g_5,&l_135,&g_5,&g_5},{&g_5,&l_135,&l_135,&g_5},{&l_135,&g_5,&g_5,&l_135},{&g_5,&l_135,&l_135,&l_135},{&l_135,&l_135,&l_135,&l_135}},{{&l_135,&l_135,&l_135,&l_135},{&g_5,&g_5,(void*)0,&g_5},{&l_135,&l_135,&g_5,&g_5},{&l_135,&l_135,&g_5,&g_5},{&l_135,&l_135,(void*)0,&l_135},{&g_5,&l_135,&l_135,&g_5},{&l_135,&g_5,&l_135,&l_135}},{{&l_135,&g_5,&l_135,&l_135},{&l_135,&l_135,&l_135,&l_135},{(void*)0,&l_135,&g_5,&l_135},{&g_5,&l_135,&l_135,&l_135},{&g_5,&g_5,&g_5,&g_5},{(void*)0,&l_135,&l_135,&g_5},{&l_135,&l_135,&l_135,&l_135}},{{&l_135,(void*)0,&g_5,&l_135},{&l_135,&l_135,&l_135,&g_5},{&g_5,&l_135,&g_5,&g_5},{&l_135,&g_5,&l_135,&l_135},{&g_5,&l_135,&l_135,&l_135},{&l_135,&l_135,&g_5,&l_135},{&g_5,&l_135,&l_135,&l_135}}};
                int i, j, k;
                for (p_60 = 4; (p_60 >= 1); p_60 -= 1)
                {
                    union U1 **l_110 = (void*)0;
                    int i, j;
                    l_111 = l_109;
                    for (l_104 = 0; (l_104 <= 6); l_104 += 1)
                    {
                        int i, j;
                        g_112 |= ((*l_69) = g_68[l_104][(p_60 + 1)]);
                    }
                    l_113[0] = l_101[p_60][(p_60 + 3)];
                    l_116 = g_114;
                }
            }
            l_180++;
            l_183--;
        }
        else
        {
            int32_t *l_186 = &l_75;
            int32_t **l_187[7];
            int i;
            for (i = 0; i < 7; i++)
                l_187[i] = &l_70;
            g_153[0][1] = l_186;
        }
        l_188--;
        for (l_91 = 0; (l_91 == 17); l_91++)
        {
            int64_t l_193 = 0x3B3EB5E6DA35753ELL;
            int32_t l_194 = 7L;
            --l_195;
            if (l_193)
                break;
        }
    }
    else
    {
        int32_t l_233 = 0x1ACB9F7CL;
        int32_t l_236 = 0x0DB183B7L;
        const union U1 l_237 = {0};
        uint32_t l_251 = 18446744073709551615UL;
        int32_t l_276 = 9L;
        int32_t l_277 = (-4L);
        for (l_90.f1 = 4; (l_90.f1 >= 0); l_90.f1 -= 1)
        {
            int32_t **l_199 = (void*)0;
            int32_t **l_200 = &l_70;
            int8_t *l_201 = &g_115.f2;
            uint8_t l_245[7][6][2] = {{{0UL,0UL},{0UL,0UL},{0x18L,4UL},{0UL,0x18L},{4UL,0UL},{4UL,0x18L}},{{0UL,4UL},{0x18L,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0x18L,4UL}},{{0UL,0x18L},{4UL,0UL},{4UL,0x18L},{0UL,4UL},{0x18L,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL},{0x18L,4UL},{0UL,0x18L},{4UL,0UL},{4UL,0x18L}},{{0UL,4UL},{0x18L,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0x18L,4UL}},{{0UL,0x18L},{4UL,0UL},{4UL,0x18L},{0UL,4UL},{0x18L,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL},{0x18L,4UL},{0UL,0x18L},{4UL,0UL},{4UL,0x18L}}};
            int32_t l_250[9] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
            union U1 **l_268 = &l_111;
            struct S0 *l_271 = (void*)0;
            int i, j, k;
            (*l_71) = (+1L);
            (*l_200) = &g_68[1][6];
            for (p_60 = 0; (p_60 <= 4); p_60 += 1)
            {
                int32_t l_235 = 0x53132326L;
                union U1 l_243 = {0};
                int32_t l_247 = 1L;
                int32_t l_249 = 0L;
                int16_t *l_264[4][10][3] = {{{&g_5,&g_5,&g_5},{&g_5,&g_5,(void*)0},{&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5},{(void*)0,&g_5,&g_5},{&g_5,&g_5,(void*)0},{&g_5,(void*)0,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,(void*)0}},{{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,(void*)0},{&g_5,&g_5,&g_5},{&g_5,&g_5,(void*)0},{&g_5,(void*)0,&g_5},{&g_5,&g_5,(void*)0},{&g_5,&g_5,&g_5}},{{&g_5,&g_5,&g_5},{&g_5,(void*)0,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,(void*)0},{&g_5,&g_5,&g_5},{(void*)0,&g_5,(void*)0},{&g_5,&g_5,&g_5},{&g_5,&g_5,(void*)0},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5}},{{&g_5,&g_5,&g_5},{&g_5,(void*)0,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{&g_5,(void*)0,&g_5},{&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5},{(void*)0,(void*)0,&g_5},{&g_5,&g_5,&g_5}}};
                int i, j, k;
                for (l_90.f2 = 0; (l_90.f2 <= 6); l_90.f2 += 1)
                {
                    return l_201;
                }
                g_153[p_60][(l_90.f1 + 1)] = (*l_200);
                (*l_200) = (void*)0;
                for (g_127 = 1; (g_127 <= 4); g_127 += 1)
                {
                    int16_t l_202 = (-1L);
                    uint64_t *l_204 = &g_205;
                    uint64_t l_224[4][2];
                    int32_t * const **l_225 = (void*)0;
                    int32_t * const l_228 = &g_229;
                    int32_t * const *l_227 = &l_228;
                    int32_t * const **l_226 = &l_227;
                    uint8_t *l_234[10] = {&l_105,&g_148,&l_105,&g_148,&l_105,&g_148,&l_105,&g_148,&l_105,&g_148};
                    int32_t l_248[3][6][7] = {{{(-1L),0xF6B8C41CL,(-4L),(-1L),0x4D7EAAA6L,(-1L),(-1L)},{0x342A22D0L,(-9L),0xA4B7BF04L,0xD65F5B50L,0xCEDBFFA5L,0xA78D98D9L,0xF6B8C41CL},{0xA4B7BF04L,0L,0x3ACF49B5L,1L,0L,(-9L),0xA78D98D9L},{(-1L),0L,0x317F358CL,1L,0L,0x8C8A57AAL,0xF7625086L},{0L,0x3ACF49B5L,4L,1L,0L,4L,0xB7860BB8L},{0L,(-1L),0xD61086BCL,1L,0L,1L,0xD61086BCL}},{{(-1L),(-1L),2L,0xD65F5B50L,1L,0L,(-1L)},{0xF7625086L,0x60548AB6L,0x9143F4B0L,(-1L),0xD61086BCL,0xCEDBFFA5L,0xB7860BB8L},{(-3L),0L,0L,0x33524667L,1L,0x3ACF49B5L,1L},{0x4D7EAAA6L,(-7L),6L,0xF350D279L,0L,(-4L),(-1L)},{0xF350D279L,1L,0x9143F4B0L,0x6DF07101L,0L,0x9143F4B0L,0xF6B8C41CL},{4L,0xF350D279L,(-9L),1L,0L,0x9143F4B0L,0x3ACF49B5L}},{{1L,0x342A22D0L,9L,9L,0L,(-4L),0L},{0xF7625086L,4L,4L,0xF7625086L,0xCEDBFFA5L,0x3ACF49B5L,9L},{0x3ACF49B5L,0L,(-3L),0L,0x4D7EAAA6L,0xCEDBFFA5L,(-10L)},{0x6C08D800L,0xCEDBFFA5L,9L,1L,0L,0xB7860BB8L,0x6C08D800L},{4L,6L,0x5E760D36L,0x3ACF49B5L,6L,0x8C8A57AAL,0xD61086BCL},{5L,0xA78D98D9L,0x317F358CL,6L,0x9143F4B0L,(-4L),6L}}};
                    uint32_t l_279 = 4294967295UL;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_224[i][j] = 0x15ADF492D8EAC32ELL;
                    }
                    if (((l_202 == (safe_unary_minus_func_uint8_t_u((((((*l_204) |= 18446744073709551612UL) , (safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(0x1EL, ((((l_236 = (safe_sub_func_int64_t_s_s(0x32685E0CE5C9CA6BLL, ((safe_lshift_func_uint8_t_u_s((l_235 = (safe_add_func_int32_t_s_s(((*l_67) = (safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s((g_230 = ((l_224[1][0] , ((*l_226) = &g_28)) != &g_153[0][1])), ((safe_mod_func_uint8_t_u_u(g_115.f1, (*l_228))) < p_60))), 9UL))), l_233))), 6)) , g_205)))) | p_60) || (-1L)) != g_229))) <= p_60), g_112)), p_60)), 1UL))) , l_237) , p_60)))) , 0x4E92A9D9L))
                    {
                        const int16_t ***l_240 = &g_238;
                        struct S0 ***l_242 = &l_241[5][7];
                        int32_t *l_244 = (void*)0;
                        int i, j, k;
                        (*l_240) = g_238;
                        (*l_242) = l_241[5][7];
                        l_73[(g_127 + 2)][l_90.f1][p_60] = (l_243 , l_244);
                        if (l_245[0][0][0])
                            continue;
                    }
                    else
                    {
                        int32_t l_246 = (-1L);
                        int8_t *l_254 = &l_101[2][1].f2;
                        int i, j, k;
                        ++l_251;
                        return p_59;
                    }
                    if (l_233)
                    {
                        uint64_t *l_255 = &l_224[3][1];
                        int32_t l_267[2][1][3];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 3; k++)
                                    l_267[i][j][k] = 0x3D0BC41BL;
                            }
                        }
                        (*l_200) = ((l_255 == ((safe_lshift_func_int8_t_s_u((*p_58), p_60)) , ((safe_rshift_func_int8_t_s_s((((safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((l_264[1][9][1] != (l_243 , ((p_60 >= (l_267[0][0][0] = (safe_rshift_func_int16_t_s_u(((*l_67) = p_60), 6)))) , ((l_268 != ((safe_mod_func_uint32_t_u_u(0xBB20481DL, l_267[0][0][1])) , (void*)0)) , (*g_238))))) > 18446744073709551615UL), 0x49L)), p_60)) | (*g_239)) | (**g_238)), l_236)) , &g_127))) , &p_60);
                        (*l_228) = ((*l_69) = ((-1L) && (((p_60 , (((l_271 != (void*)0) >= ((safe_sub_func_int32_t_s_s(((*p_58) , l_267[0][0][0]), (safe_unary_minus_func_uint16_t_u((((+((**g_117) , 0x1AF41BFAL)) == (((*g_117) == (*l_268)) != 65530UL)) | l_233))))) || l_267[1][0][2])) | p_60)) >= p_60) | l_267[1][0][0])));
                    }
                    else
                    {
                        (*l_228) |= (*l_67);
                    }
                    (*l_71) = p_60;
                    for (l_75 = 0; (l_75 <= 2); l_75 += 1)
                    {
                        ++l_279;
                    }
                }
            }
        }
    }
    return &g_10;
}







static int32_t * func_61(uint16_t p_62, int32_t * p_63)
{
    return p_63;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_68[i][j], "g_68[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_115.f0, "g_115.f0", print_hash_value);
    transparent_crc(g_115.f1, "g_115.f1", print_hash_value);
    transparent_crc(g_115.f2, "g_115.f2", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_569.f0, "g_569.f0", print_hash_value);
    transparent_crc(g_569.f1, "g_569.f1", print_hash_value);
    transparent_crc(g_569.f2, "g_569.f2", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_615, "g_615", print_hash_value);
    transparent_crc(g_629, "g_629", print_hash_value);
    transparent_crc(g_685, "g_685", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_1188, "g_1188", print_hash_value);
    transparent_crc(g_1201, "g_1201", print_hash_value);
    transparent_crc(g_1226, "g_1226", print_hash_value);
    transparent_crc(g_1280.f0, "g_1280.f0", print_hash_value);
    transparent_crc(g_1280.f1, "g_1280.f1", print_hash_value);
    transparent_crc(g_1280.f2, "g_1280.f2", print_hash_value);
    transparent_crc(g_1407, "g_1407", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1446[i], "g_1446[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1477[i], "g_1477[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1484, "g_1484", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1705[i], "g_1705[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1718, "g_1718", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1751[i], "g_1751[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1776, "g_1776", print_hash_value);
    transparent_crc(g_1802, "g_1802", print_hash_value);
    transparent_crc(g_1893, "g_1893", print_hash_value);
    transparent_crc(g_1898, "g_1898", print_hash_value);
    transparent_crc(g_1982, "g_1982", print_hash_value);
    transparent_crc(g_2131, "g_2131", print_hash_value);
    transparent_crc(g_2163, "g_2163", print_hash_value);
    transparent_crc(g_2174, "g_2174", print_hash_value);
    transparent_crc(g_2241, "g_2241", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2242[i], "g_2242[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2243, "g_2243", print_hash_value);
    transparent_crc(g_2244, "g_2244", print_hash_value);
    transparent_crc(g_2245, "g_2245", print_hash_value);
    transparent_crc(g_2246, "g_2246", print_hash_value);
    transparent_crc(g_2247, "g_2247", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_2248[i], "g_2248[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2249[i], "g_2249[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2250[i], "g_2250[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2251, "g_2251", print_hash_value);
    transparent_crc(g_2252, "g_2252", print_hash_value);
    transparent_crc(g_2253, "g_2253", print_hash_value);
    transparent_crc(g_2254, "g_2254", print_hash_value);
    transparent_crc(g_2255, "g_2255", print_hash_value);
    transparent_crc(g_2256, "g_2256", print_hash_value);
    transparent_crc(g_2257, "g_2257", print_hash_value);
    transparent_crc(g_2258, "g_2258", print_hash_value);
    transparent_crc(g_2259, "g_2259", print_hash_value);
    transparent_crc(g_2260, "g_2260", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2261[i], "g_2261[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2262, "g_2262", print_hash_value);
    transparent_crc(g_2263, "g_2263", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2264[i], "g_2264[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2265, "g_2265", print_hash_value);
    transparent_crc(g_2266, "g_2266", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2267[i], "g_2267[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2268, "g_2268", print_hash_value);
    transparent_crc(g_2269, "g_2269", print_hash_value);
    transparent_crc(g_2270, "g_2270", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2271[i], "g_2271[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2272, "g_2272", print_hash_value);
    transparent_crc(g_2273, "g_2273", print_hash_value);
    transparent_crc(g_2274, "g_2274", print_hash_value);
    transparent_crc(g_2275, "g_2275", print_hash_value);
    transparent_crc(g_2276, "g_2276", print_hash_value);
    transparent_crc(g_2277, "g_2277", print_hash_value);
    transparent_crc(g_2278, "g_2278", print_hash_value);
    transparent_crc(g_2279, "g_2279", print_hash_value);
    transparent_crc(g_2280, "g_2280", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_2281[i][j][k], "g_2281[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2282, "g_2282", print_hash_value);
    transparent_crc(g_2283, "g_2283", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2284[i][j], "g_2284[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2285[i], "g_2285[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2286, "g_2286", print_hash_value);
    transparent_crc(g_2287, "g_2287", print_hash_value);
    transparent_crc(g_2288, "g_2288", print_hash_value);
    transparent_crc(g_2289, "g_2289", print_hash_value);
    transparent_crc(g_2290, "g_2290", print_hash_value);
    transparent_crc(g_2291, "g_2291", print_hash_value);
    transparent_crc(g_2292, "g_2292", print_hash_value);
    transparent_crc(g_2293, "g_2293", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2294[i], "g_2294[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2295, "g_2295", print_hash_value);
    transparent_crc(g_2296, "g_2296", print_hash_value);
    transparent_crc(g_2297, "g_2297", print_hash_value);
    transparent_crc(g_2298, "g_2298", print_hash_value);
    transparent_crc(g_2299, "g_2299", print_hash_value);
    transparent_crc(g_2300, "g_2300", print_hash_value);
    transparent_crc(g_2301, "g_2301", print_hash_value);
    transparent_crc(g_2302, "g_2302", print_hash_value);
    transparent_crc(g_2303, "g_2303", print_hash_value);
    transparent_crc(g_2304, "g_2304", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2305[i][j], "g_2305[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2313, "g_2313", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2337[i], "g_2337[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2382, "g_2382", print_hash_value);
    transparent_crc(g_2468, "g_2468", print_hash_value);
    transparent_crc(g_2636, "g_2636", print_hash_value);
    transparent_crc(g_2648, "g_2648", print_hash_value);
    transparent_crc(g_2656, "g_2656", print_hash_value);
    transparent_crc(g_2665, "g_2665", print_hash_value);
    transparent_crc(g_2768, "g_2768", print_hash_value);
    transparent_crc(g_2818, "g_2818", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2960[i], "g_2960[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_3027[i][j][k], "g_3027[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_3035, "g_3035", print_hash_value);
    transparent_crc(g_3108, "g_3108", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
