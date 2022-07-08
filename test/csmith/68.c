// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 9E351455
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
   signed f0 : 16;
};
#pragma pack(pop)

union U1 {
   int32_t f0;
   int8_t * f1;
   const int16_t f2;
};


static int32_t g_2 = 0x5683C8FCL;
static int8_t g_14 = (-4L);
static int8_t g_24 = (-1L);
static uint8_t g_45 = 253UL;
static uint16_t g_75 = 0xDEBCL;
static int64_t g_83 = 0xD85683D52604697ELL;
static int64_t g_85 = 0x0FFBEBD5D228C8C4LL;
static int8_t g_90 = 0xE8L;
static uint8_t g_92 = 0x85L;
static uint32_t g_94 = 0xF21D6FFCL;
static int16_t g_97 = (-9L);
static uint8_t g_98 = 251UL;
static struct S0 g_104 = {109};
static union U1 g_113 = {0x098D2902L};
static int16_t g_121 = (-1L);
static uint64_t g_123 = 0xC8E810CDF1940C85LL;
static int32_t g_128 = 0L;
static int8_t *g_139 = &g_90;
static int8_t *g_140 = &g_90;
static uint16_t g_159 = 0x9C85L;
static uint16_t *g_170 = &g_75;
static int32_t g_172[8][10] = {{0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L},{0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L},{0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L},{0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L},{0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L},{0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L},{0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L},{0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L,0xE86B1698L}};
static int32_t g_181[1] = {1L};
static uint32_t g_211 = 0xB9D56F05L;
static uint16_t g_230 = 65527UL;
static struct S0 *g_240 = (void*)0;
static struct S0 **g_239[3] = {&g_240,&g_240,&g_240};
static struct S0 ***g_238 = &g_239[1];
static const int64_t g_271 = 0x7BA93E811AC5B17ALL;
static union U1 *g_284[8] = {&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113};
static union U1 **g_283 = &g_284[5];
static int32_t *g_300 = (void*)0;
static uint32_t g_308 = 0xA6A31B5FL;
static const int16_t g_366 = 0x1745L;
static int32_t g_444 = 0L;
static int16_t *g_502 = &g_121;
static int16_t **g_501 = &g_502;
static uint16_t g_575 = 0x0BF4L;
static uint16_t * const *g_636[4][6][2] = {{{&g_170,(void*)0},{&g_170,(void*)0},{&g_170,&g_170},{&g_170,(void*)0},{&g_170,&g_170},{(void*)0,&g_170}},{{(void*)0,(void*)0},{&g_170,&g_170},{&g_170,(void*)0},{(void*)0,&g_170},{(void*)0,&g_170},{&g_170,(void*)0}},{{&g_170,&g_170},{&g_170,(void*)0},{&g_170,(void*)0},{&g_170,&g_170},{&g_170,(void*)0},{&g_170,&g_170}},{{(void*)0,&g_170},{(void*)0,(void*)0},{&g_170,&g_170},{&g_170,(void*)0},{(void*)0,&g_170},{(void*)0,&g_170}}};
static uint16_t * const **g_635[2] = {&g_636[0][0][1],&g_636[0][0][1]};
static const int32_t g_682 = 0x1076FE6DL;
static int32_t **g_756 = &g_300;
static int8_t g_785 = (-1L);
static int32_t *g_830[7] = {&g_113.f0,&g_113.f0,&g_113.f0,&g_113.f0,&g_113.f0,&g_113.f0,&g_113.f0};
static int32_t **g_829 = &g_830[6];
static const int16_t g_862 = 0x897CL;
static const uint16_t *g_882 = &g_159;
static const uint16_t **g_881 = &g_882;
static const uint16_t ***g_880 = &g_881;
static uint32_t g_928 = 0UL;
static int32_t g_958 = 0xE3095A96L;
static int32_t ***g_1020 = &g_829;
static int32_t ****g_1019 = &g_1020;
static uint64_t **g_1028[6][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
static struct S0 **g_1127 = &g_240;
static struct S0 *** const g_1126 = &g_1127;
static struct S0 *** const *g_1125 = &g_1126;
static int64_t * const *g_1131 = (void*)0;
static int64_t * const **g_1130 = &g_1131;
static uint16_t g_1136 = 0x67BAL;
static int32_t ***g_1244[5] = {&g_756,&g_756,&g_756,&g_756,&g_756};
static int32_t *** const * const g_1243 = &g_1244[3];
static uint32_t g_1302 = 18446744073709551610UL;
static int32_t * const ***g_1359 = (void*)0;
static int32_t * const ****g_1358 = &g_1359;
static struct S0 ****g_1362 = &g_238;



static struct S0 func_1(void);
static int32_t func_5(const int8_t * p_6, const uint32_t p_7, int8_t * p_8, struct S0 p_9, uint32_t p_10);
static const int8_t * func_11(int8_t * p_12);
static int8_t * func_16(int16_t p_17, uint32_t p_18);
static uint64_t func_19(int8_t * p_20, uint16_t p_21, uint64_t p_22);
static int16_t func_38(uint8_t p_39);
static uint32_t func_40(const int8_t p_41, int8_t * p_42);
static int16_t func_49(int8_t * p_50, uint8_t * p_51);
static int8_t * func_52(int32_t p_53, const int8_t * p_54, union U1 p_55);
static int16_t func_57(int32_t p_58, uint32_t p_59, int8_t p_60, int16_t p_61);
# 117 "<stdin>"
static struct S0 func_1(void)
{
    int8_t *l_23[1][4][5];
    int32_t l_25 = 0xB19D88C8L;
    struct S0 l_944[9] = {{-176},{-176},{-176},{-176},{-176},{-176},{-176},{-176},{-176}};
    int16_t l_1203 = 0x7FCFL;
    int32_t l_1206 = (-1L);
    int32_t l_1207 = 0x9FAA4D70L;
    int32_t l_1208[3][1][10] = {{{0x8B99642AL,0x8B99642AL,0xEA646E96L,0x8B99642AL,0x8B99642AL,0xEA646E96L,0x8B99642AL,0x8B99642AL,0xEA646E96L,0x8B99642AL}},{{0x8B99642AL,(-1L),(-1L),0x8B99642AL,(-1L),(-1L),0x8B99642AL,(-1L),(-1L),0x8B99642AL}},{{(-1L),0x8B99642AL,(-1L),(-1L),0x8B99642AL,(-1L),(-1L),0x8B99642AL,(-1L),(-1L)}}};
    uint32_t l_1216 = 18446744073709551612UL;
    int32_t * const *l_1252 = &g_830[2];
    struct S0 **l_1278 = &g_240;
    union U1 l_1345 = {9L};
    int32_t * const ****l_1357 = (void*)0;
    uint32_t l_1392 = 18446744073709551614UL;
    struct S0 l_1405 = {-4};
    int32_t *l_1434 = &l_1208[0][0][0];
    int8_t l_1526 = (-1L);
    const uint32_t l_1527 = 0x2607EFF3L;
    int32_t l_1580 = 7L;
    uint32_t l_1593 = 0x89D167D6L;
    struct S0 *l_1633 = (void*)0;
    struct S0 *l_1634 = &l_944[7];
    struct S0 l_1635[9] = {{-6},{-6},{-6},{-6},{-6},{-6},{-6},{-6},{-6}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
                l_23[i][j][k] = &g_24;
        }
    }
    for (g_2 = (-29); (g_2 >= (-22)); ++g_2)
    {
        int8_t *l_13[3][5] = {{(void*)0,&g_14,(void*)0,&g_14,&g_14},{(void*)0,&g_14,(void*)0,&g_14,&g_14},{(void*)0,&g_14,(void*)0,&g_14,&g_14}};
        int32_t l_927 = 0L;
        uint8_t l_1182 = 0x13L;
        int32_t *l_1183 = &l_25;
        int32_t l_1204 = 0xA81E4308L;
        int32_t l_1205 = 0x3A798833L;
        int32_t l_1209 = 0L;
        int32_t l_1210 = 1L;
        uint32_t l_1211 = 18446744073709551615UL;
        int32_t ****l_1245[10] = {&g_1244[1],&g_1244[3],&g_1244[1],&g_1244[3],&g_1244[1],&g_1244[3],&g_1244[1],&g_1244[3],&g_1244[1],&g_1244[3]};
        struct S0 *l_1284 = &l_944[4];
        int32_t ***l_1313 = (void*)0;
        uint32_t l_1325 = 0x3DCDDA11L;
        int64_t l_1406 = 0xA1C9DB9C12077D24LL;
        uint32_t l_1500 = 0x1A72D477L;
        int16_t l_1543 = 1L;
        uint32_t l_1566 = 0x35AC24DCL;
        int32_t l_1575[3][2] = {{0xA295F1A3L,0x8787DCBDL},{0xA295F1A3L,0xA295F1A3L},{(-10L),0x8787DCBDL}};
        uint32_t l_1585 = 18446744073709551615UL;
        int i, j;
    }
    for (g_2 = (-18); (g_2 >= (-5)); ++g_2)
    {
        int32_t l_1592 = 0x52322282L;
        int32_t l_1595 = 1L;
        uint32_t l_1596[2][9] = {{8UL,8UL,1UL,0x88115A90L,1UL,8UL,8UL,1UL,0x88115A90L},{0xCCF77411L,0xC6FD4954L,0xCCF77411L,1UL,1UL,0xCCF77411L,0xC6FD4954L,0xCCF77411L,1UL}};
        struct S0 l_1599[9] = {{-21},{-244},{-21},{-244},{-21},{-244},{-21},{-244},{-21}};
        uint64_t *l_1600 = (void*)0;
        int32_t *l_1601[7] = {&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25};
        int32_t l_1615 = 0L;
        union U1 l_1618 = {0L};
        uint64_t l_1621 = 0x894E335158FEDCB1LL;
        int8_t l_1624[8][8][4] = {{{0L,0L,4L,1L},{7L,0x44L,(-3L),(-1L)},{0xA0L,4L,1L,0x63L},{0x8AL,0L,0L,(-10L)},{(-1L),0x53L,(-1L),0x53L},{0x79L,0L,4L,0xE2L},{0L,(-1L),(-1L),(-1L)},{0xADL,0x34L,(-1L),(-1L)}},{{0xADL,(-3L),(-1L),1L},{0L,(-1L),4L,0x30L},{0x79L,2L,(-1L),4L},{(-1L),0xCBL,0L,0xADL},{0x8AL,(-1L),1L,0L},{0xA0L,(-1L),(-3L),0xD2L},{7L,(-6L),4L,0xEEL},{0L,0L,1L,(-1L)}},{{1L,0x13L,(-6L),0x34L},{(-1L),(-1L),9L,0x46L},{(-1L),0x79L,0L,0x8AL},{9L,0x03L,0x03L,9L},{0x34L,0x7BL,1L,(-1L)},{0xEEL,(-1L),(-1L),0x61L},{(-1L),(-8L),0xD2L,0x61L},{0xDDL,(-1L),0xCBL,(-1L)}},{{4L,0x7BL,0x13L,9L},{0xE5L,0x03L,0L,0x8AL},{(-1L),0x79L,0L,0x46L},{0x13L,(-1L),0x53L,0x34L},{0x7CL,0x13L,0xCEL,(-1L)},{(-8L),0L,0xE2L,0xEEL},{0x63L,(-6L),0xA0L,0xD2L},{0xD2L,(-1L),0x44L,0L}},{{(-1L),(-1L),0x61L,0xADL},{0xCEL,0xCBL,0xADL,4L},{0x7BL,2L,0x7BL,0x30L},{0L,(-1L),(-8L),1L},{0x71L,(-3L),(-1L),(-1L)},{0xE2L,0x34L,(-1L),(-1L)},{0x71L,(-1L),0x8AL,(-1L)},{0x53L,9L,1L,(-8L)}},{{1L,(-8L),0xA0L,0x13L},{(-1L),(-1L),0x34L,0xEEL},{1L,0x7CL,0L,0x71L},{(-1L),0L,0xCEL,0x46L},{0xEEL,(-1L),(-1L),1L},{0x8AL,0x44L,(-1L),0xADL},{1L,0x79L,(-8L),0L},{0L,(-10L),(-1L),0L}},{{0x44L,(-1L),(-1L),(-1L)},{(-1L),(-1L),0L,(-1L)},{0x7CL,1L,0L,1L},{0x63L,0L,(-1L),0L},{0xDDL,0L,4L,1L},{0L,1L,(-6L),(-1L)},{(-3L),(-1L),0x02L,(-1L)},{0xE2L,(-1L),0x79L,0L}},{{4L,(-10L),0xE2L,0L},{0L,0x79L,0x4DL,0xADL},{0L,0x44L,0x61L,1L},{(-1L),(-1L),0xCBL,0x46L},{1L,0L,0L,0x71L},{0xCEL,0x7CL,0x46L,0xEEL},{(-1L),(-1L),0x53L,0x13L},{7L,(-8L),(-1L),(-8L)}}};
        uint32_t *l_1632 = &g_1302;
        int i, j, k;
        for (l_1206 = 0; (l_1206 >= 0); l_1206 -= 1)
        {
            int32_t *l_1594[7][5][4] = {{{&g_128,&g_958,&g_958,&g_172[4][8]},{&l_1580,&l_25,&g_128,&g_958},{(void*)0,&l_1208[0][0][6],&g_128,&l_1208[0][0][6]},{&l_1580,&l_25,&g_958,&l_1580},{&g_128,&g_2,&g_172[5][2],&l_1208[0][0][1]}},{{&g_172[5][2],&l_1208[0][0][1],&g_172[0][7],&g_128},{&g_128,&g_128,&l_1208[0][0][6],&g_2},{&l_1207,&g_172[0][5],&l_1580,&g_128},{&g_172[4][8],&l_1207,&g_128,&l_1208[1][0][0]},{&l_25,&l_1208[0][0][6],&l_1208[0][0][6],&l_25}},{{&l_1208[0][0][6],&l_1206,&g_172[0][5],&g_128},{&g_958,&l_1208[0][0][6],&g_172[4][8],(void*)0},{&l_1208[0][0][6],&g_172[5][2],&g_2,(void*)0},{&g_128,&l_1208[0][0][6],&l_1207,&g_128},{&l_1207,&l_1206,&g_172[4][8],&l_25}},{{&g_958,&l_1208[0][0][6],&l_1207,&l_1208[1][0][0]},{&g_2,&l_1207,&l_25,&g_128},{&g_172[4][8],&g_172[0][5],&l_1580,&g_2},{&l_1208[0][0][6],&g_128,&l_1206,&g_128},{(void*)0,&l_1208[0][0][1],&g_128,&l_1208[0][0][1]}},{{&l_1206,&g_2,&l_1208[0][0][1],&l_1580},{&l_1580,&l_25,&l_1208[1][0][0],&l_1208[0][0][6]},{&g_2,&l_1208[0][0][1],&g_128,&g_172[4][8]},{&l_1207,&l_1580,&g_128,&l_1580},{&l_1208[0][0][6],&g_172[4][8],&l_25,&l_1207}},{{&l_1208[0][0][6],&g_128,&l_1207,&l_1208[0][0][6]},{&l_1580,&g_2,&l_1208[0][0][6],&l_1580},{(void*)0,&l_1208[0][0][6],&g_172[4][8],&l_1208[0][0][6]},{&l_1208[0][0][6],&g_172[5][2],&g_128,&l_1208[0][0][6]},{&g_128,&l_1580,&g_172[4][8],&g_172[4][8]}},{{&g_172[4][8],&g_172[4][8],&g_172[4][8],&g_958},{&g_172[4][8],&g_2,(void*)0,&g_128},{&l_1206,&g_958,&l_1207,(void*)0},{&l_25,&g_958,&l_1580,&g_128},{&g_958,&g_2,&l_1580,&g_958}}};
            int i, j, k;
            (*l_1434) ^= (safe_rshift_func_uint16_t_u_u(g_181[l_1206], 11));
            (*l_1434) = (l_1592 >= (0x05L == (18446744073709551608UL > l_1593)));
            l_1596[1][3]--;
            return l_1599[2];
        }
        if (((**g_283) , (((void*)0 != l_1600) | 0x5D0CB448L)))
        {
            uint64_t l_1614 = 3UL;
            l_1601[0] = (***g_1243);
            l_1206 |= ((**g_501) | (((((l_1345 , (~(safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(0x920BL, (((safe_div_func_uint64_t_u_u((safe_unary_minus_func_uint16_t_u(0x0F3CL)), (safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s((*g_139), (*l_1434))), ((((***g_1125) = &l_1599[8]) != (void*)0) | ((((l_1614 != (*l_1434)) > g_94) , l_1614) == (*l_1434))))))) <= (-4L)) == 1L))) | g_181[0]), g_862)))) < l_1614) == (-1L)) > 1UL) & g_90));
            if (l_1615)
                break;
        }
        else
        {
            return l_1599[0];
        }
        (*l_1434) = (g_1028[5][0] == ((safe_lshift_func_int16_t_s_u((((*l_1632) = ((((***g_1125) = (**g_1126)) == (l_1618 , &l_1599[3])) | (safe_add_func_int32_t_s_s(l_1621, (safe_add_func_int64_t_s_s(l_1624[1][1][2], (&g_1126 != (((*l_1434) , (!(safe_lshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((*g_139), (*g_140))), 65532UL)) < (*g_140)), (*g_139))))) , (void*)0)))))))) , (*g_502)), 13)) , &l_1600));
        for (g_1302 = 0; (g_1302 <= 0); g_1302 += 1)
        {
            return l_1599[2];
        }
    }
    (*l_1634) = l_944[7];
    return l_1635[8];
}







static int32_t func_5(const int8_t * p_6, const uint32_t p_7, int8_t * p_8, struct S0 p_9, uint32_t p_10)
{
    int8_t l_947 = 0L;
    int32_t l_952 = 6L;
    int32_t l_954 = (-1L);
    int32_t l_955 = 0x227EDF5AL;
    int32_t l_959 = 1L;
    int64_t *l_971 = &g_85;
    int64_t **l_970 = &l_971;
    int64_t ***l_969 = &l_970;
    const uint32_t l_1022[7] = {0x6C8AFF58L,0x6C8AFF58L,0x6C8AFF58L,0x6C8AFF58L,0x6C8AFF58L,0x6C8AFF58L,0x6C8AFF58L};
    int8_t l_1042 = 0x5DL;
    int32_t l_1043[4][9] = {{(-10L),(-10L),0x8623579CL,(-10L),(-10L),0x8623579CL,(-10L),(-10L),0x8623579CL},{0L,0L,0x64181384L,0L,0L,0x64181384L,0L,0L,0x64181384L},{(-10L),(-10L),0x8623579CL,(-10L),(-10L),0x8623579CL,(-10L),(-10L),0x8623579CL},{0L,0L,0x64181384L,0L,0L,0x64181384L,0L,0L,0x64181384L}};
    int32_t l_1044 = 1L;
    uint8_t l_1053 = 250UL;
    int32_t *l_1057[9][6] = {{&g_172[4][8],&l_954,(void*)0,&l_1043[1][6],&l_1043[1][6],(void*)0},{&l_1043[1][6],&l_1043[1][6],(void*)0,&l_954,&g_172[4][8],&g_172[4][8]},{&l_1043[1][6],&l_954,&l_954,&l_1043[1][6],&g_172[4][8],(void*)0},{&g_172[4][8],&l_1043[1][6],&l_954,&l_954,&l_1043[1][6],&g_172[4][8]},{&g_172[4][8],&l_954,(void*)0,&l_1043[1][6],&l_1043[1][6],(void*)0},{&l_1043[1][6],&l_1043[1][6],(void*)0,&l_954,&g_172[4][8],&g_172[4][8]},{&l_1043[1][6],&l_954,&l_954,&l_1043[1][6],&g_172[4][8],(void*)0},{&g_172[4][8],&l_1043[1][6],&l_954,&l_954,&l_1043[1][6],&g_172[4][8]},{&g_172[4][8],&l_954,(void*)0,&l_1043[1][6],&l_1043[1][6],(void*)0}};
    uint32_t l_1096 = 1UL;
    union U1 **l_1155 = &g_284[0];
    struct S0 l_1157 = {-141};
    uint16_t *** const *l_1180 = (void*)0;
    int32_t **l_1181 = &l_1057[7][4];
    int i, j;
    for (g_83 = 1; (g_83 >= 0); g_83 -= 1)
    {
        int8_t l_946 = 1L;
        int32_t l_948 = (-3L);
        int32_t l_949 = (-1L);
        int32_t l_950 = 6L;
        int32_t l_951 = 0x23A0BB54L;
        int32_t l_953 = 4L;
        int32_t l_956 = (-7L);
        int32_t l_957 = 1L;
        int32_t l_960 = (-7L);
        uint8_t l_961 = 0x41L;
        int32_t *l_964 = (void*)0;
        int32_t *l_965 = &l_960;
        int32_t *l_966 = &l_953;
        int32_t l_1045 = 0xAC09A4BAL;
        int32_t l_1046 = 0xA430E99FL;
        int32_t l_1047 = 1L;
        int32_t l_1048 = 0x4A0A4A82L;
        int32_t l_1049 = 0xF17AB0CBL;
        int32_t l_1050 = 0xC092226CL;
        int32_t l_1051 = 1L;
        int32_t l_1052 = 0L;
        union U1 l_1067 = {-8L};
        struct S0 ****l_1140 = &g_238;
        struct S0 *****l_1139 = &l_1140;
        union U1 ** const l_1156 = &g_284[5];
        for (g_94 = 0; (g_94 <= 1); g_94 += 1)
        {
            int32_t *l_945[5][8][4] = {{{&g_2,&g_2,(void*)0,(void*)0},{&g_2,&g_2,&g_2,&g_128},{&g_172[5][0],(void*)0,&g_172[4][8],&g_2},{&g_2,(void*)0,(void*)0,&g_128},{(void*)0,&g_2,(void*)0,(void*)0},{&g_172[5][0],&g_2,(void*)0,&g_2},{(void*)0,&g_2,(void*)0,&g_172[2][5]},{&g_2,&g_2,&g_172[4][8],&g_172[2][5]}},{{&g_172[5][0],&g_2,&g_2,&g_2},{&g_2,&g_2,(void*)0,(void*)0},{&g_2,&g_2,&g_2,&g_172[4][8]},{&g_128,&g_2,&g_2,(void*)0},{&g_128,&g_2,&g_128,&g_172[4][8]},{&g_2,&g_128,(void*)0,(void*)0},{&g_128,&g_172[5][0],(void*)0,(void*)0},{&g_2,&g_128,&g_128,&g_2}},{{&g_128,&g_128,&g_2,&g_2},{&g_128,&g_128,(void*)0,(void*)0},{&g_172[5][0],&g_172[5][0],&g_128,(void*)0},{&g_172[5][0],&g_128,(void*)0,&g_172[4][8]},{&g_128,&g_2,&g_2,(void*)0},{&g_128,&g_2,&g_128,&g_172[4][8]},{&g_2,&g_128,(void*)0,(void*)0},{&g_128,&g_172[5][0],(void*)0,(void*)0}},{{&g_2,&g_128,&g_128,&g_2},{&g_128,&g_128,&g_2,&g_2},{&g_128,&g_128,(void*)0,(void*)0},{&g_172[5][0],&g_172[5][0],&g_128,(void*)0},{&g_172[5][0],&g_128,(void*)0,&g_172[4][8]},{&g_128,&g_2,&g_2,(void*)0},{&g_128,&g_2,&g_128,&g_172[4][8]},{&g_2,&g_128,(void*)0,(void*)0}},{{&g_128,&g_172[5][0],(void*)0,(void*)0},{&g_2,&g_128,&g_128,&g_2},{&g_128,&g_128,&g_2,&g_2},{&g_128,&g_128,(void*)0,(void*)0},{&g_172[5][0],&g_172[5][0],&g_128,(void*)0},{&g_172[5][0],&g_128,(void*)0,&g_172[4][8]},{&g_128,&g_2,&g_2,(void*)0},{&g_128,&g_2,&g_128,&g_172[4][8]}}};
            int i, j, k;
            --l_961;
            for (l_954 = 0; (l_954 <= 1); l_954 += 1)
            {
                return p_7;
            }
        }
        (*l_966) &= ((*l_965) = l_955);
        (*l_966) = ((g_575 , &g_123) != (void*)0);
        for (g_230 = 0; (g_230 <= 1); g_230 += 1)
        {
            int32_t * const l_967 = &l_950;
            int32_t l_979[4];
            int32_t l_1023 = 0L;
            int32_t *l_1037 = &l_955;
            int32_t *l_1038 = &l_979[2];
            int32_t *l_1039 = &l_979[1];
            int32_t *l_1040 = &l_955;
            int32_t *l_1041[3][7] = {{&l_959,&l_953,&l_953,&l_959,(void*)0,(void*)0,&l_959},{(void*)0,&g_958,(void*)0,(void*)0,&g_958,(void*)0,&l_953},{&g_958,&l_959,&l_955,&l_960,&l_960,&l_955,&l_959}};
            int64_t l_1094[7] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
            int32_t l_1095 = 0x726A3C45L;
            int32_t *l_1114 = &l_979[0];
            struct S0 *** const *l_1120 = &g_238;
            union U1 **l_1154 = (void*)0;
            int i, j;
            for (i = 0; i < 4; i++)
                l_979[i] = (-7L);
            for (g_785 = 0; (g_785 <= 1); g_785 += 1)
            {
                int64_t l_978 = (-6L);
                if (((*l_965) = l_955))
                {
                    int32_t **l_968 = &l_966;
                    int64_t ***l_972 = &l_970;
                    int64_t l_981 = 0x6A573811B4270185LL;
                    uint32_t l_992[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_992[i] = 18446744073709551610UL;
                    (*l_968) = l_967;
                    for (g_14 = 1; (g_14 >= 0); g_14 -= 1)
                    {
                        uint8_t *l_980 = &g_92;
                        int i;
                        (*l_968) = &l_950;
                        l_952 &= (((((void*)0 == g_635[g_230]) , (p_9 , l_969)) != l_972) < ((*l_980) = (((void*)0 == &p_10) || (g_958 = (l_955 &= (l_979[2] = ((((*g_502) |= (safe_div_func_uint8_t_u_u(((((((safe_mod_func_int32_t_s_s((l_948 &= ((p_9 , ((*l_965) = ((*l_967) = (+(((void*)0 == &g_502) != g_98))))) ^ 4294967291UL)), 0x3F63FC29L)) & g_75) && (*g_140)) >= 9UL) < p_7) ^ g_230), 5L))) , (*l_967)) , l_978)))))));
                        (*l_966) &= 0L;
                        (*l_968) = &l_952;
                    }
                    l_981 |= ((*l_967) |= p_10);
                    if ((*l_965))
                    {
                        int32_t *l_982 = &l_950;
                        int32_t *l_983 = &g_128;
                        int32_t *l_984 = &l_960;
                        int32_t *l_985 = &g_128;
                        int32_t *l_986 = &l_979[2];
                        int32_t *l_987 = (void*)0;
                        int32_t *l_988 = &l_953;
                        int32_t *l_989 = &l_954;
                        int32_t *l_990 = (void*)0;
                        int32_t *l_991[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_991[i] = &l_952;
                        l_992[2]--;
                        return p_7;
                    }
                    else
                    {
                        int32_t l_999[10][6] = {{0x8DF73E30L,0x8DF73E30L,0x367A2894L,0x9E9FA738L,0xAF139538L,0x91091319L},{0L,0xDDF01AC2L,(-1L),0x367A2894L,0xE778E28BL,0x367A2894L},{(-1L),0L,(-1L),(-9L),0x8DF73E30L,0x91091319L},{0x998186BDL,(-9L),0x367A2894L,0x5618A3D9L,0x29F669ADL,0x29F669ADL},{0x5618A3D9L,0x29F669ADL,0x29F669ADL,0x5618A3D9L,0x367A2894L,(-9L)},{0x998186BDL,0x91091319L,0x8DF73E30L,(-9L),(-1L),0L},{(-1L),0x367A2894L,0xE778E28BL,0x367A2894L,(-1L),0xDDF01AC2L},{0L,0x91091319L,0xAF139538L,0x9E9FA738L,0L,0x367A2894L},{0x367A2894L,0x5618A3D9L,0x29F669ADL,0x29F669ADL,0x5618A3D9L,0x367A2894L},{(-9L),0xDDF01AC2L,0xE778E28BL,0x91091319L,0x367A2894L,0xAF139538L}};
                        int i, j;
                        (*l_966) = (safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u((((*p_8) ^= (l_999[8][2] >= 0L)) == (p_9 , (safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((0x19L < ((safe_unary_minus_func_uint16_t_u((safe_mul_func_uint8_t_u_u(((**g_501) || (safe_mul_func_uint8_t_u_u(0xA0L, (safe_lshift_func_int8_t_s_s((*p_6), ((&l_979[0] == (p_10 , (*l_968))) >= l_947)))))), l_952)))) | (-1L))), g_172[2][5])), 1UL)))), 0x301779DFE2D3D729LL)) == p_7), (*g_882)));
                    }
                }
                else
                {
                    int8_t l_1021[8][10] = {{0x8BL,0x8BL,0L,9L,0xD1L,0x8BL,4L,0L,(-8L),0xD1L},{0x8BL,4L,0L,(-8L),0xD1L,4L,4L,0xD1L,(-8L),0L},{0x8BL,0x8BL,0L,9L,0xD1L,0x8BL,4L,0L,(-8L),0xD1L},{0x8BL,4L,0L,(-8L),0xD1L,4L,4L,0xD1L,(-8L),0L},{0x8BL,0x8BL,0L,9L,0xD1L,0x8BL,4L,0L,(-8L),0xD1L},{0x8BL,4L,0L,(-8L),0xD1L,4L,4L,0xD1L,(-8L),0L},{0x8BL,0x8BL,0L,9L,0xD1L,0x8BL,4L,0L,(-8L),0xD1L},{0x8BL,4L,0L,(-8L),0xD1L,4L,4L,0xD1L,(-8L),0L}};
                    int i, j;
                    if (p_10)
                        break;
                    for (g_14 = 1; (g_14 >= 0); g_14 -= 1)
                    {
                        int32_t **l_1011 = (void*)0;
                        uint32_t *l_1012 = &g_308;
                        uint64_t *l_1029 = &g_123;
                        uint8_t *l_1032 = &g_45;
                        l_954 |= 0x547E9D1DL;
                        l_966 = &l_949;
                        (*l_966) ^= (((((*l_1012) = 0x25435D05L) || ((-1L) <= ((safe_lshift_func_int8_t_s_s(1L, (safe_rshift_func_uint8_t_u_u(((((*g_139) | 0x0AL) , (((((((((p_9 , (l_952 = (safe_mul_func_uint8_t_u_u((g_1019 == (void*)0), l_1021[4][3])))) | l_1022[3]) != 0x55L) != (**g_501)) & g_113.f0) < p_9.f0) >= 0xC1190564L) >= p_10) <= g_366)) ^ l_1023), l_959)))) < g_366))) & p_10) < p_10);
                        (*l_965) = ((((safe_mul_func_int8_t_s_s((*p_8), ((p_7 , p_10) | ((*l_1029) = (g_1028[5][0] == ((p_10 <= 18446744073709551608UL) , (void*)0)))))) | (safe_lshift_func_uint8_t_u_u(((*l_1032)--), ((safe_sub_func_int16_t_s_s(p_9.f0, (**g_501))) | (*l_967))))) , 0xC57F9DC8B0DBB441LL) > 0x73731EF8B569E40BLL);
                    }
                }
            }
            if ((*l_967))
                break;
            ++l_1053;
            for (l_951 = 0; (l_951 <= 1); l_951 += 1)
            {
                int32_t **l_1056[3][2] = {{&l_1038,&l_1041[2][6]},{&l_1038,&l_1038},{&l_1041[2][6],&l_1038}};
                const uint64_t **l_1105 = (void*)0;
                struct S0 * const *l_1119 = (void*)0;
                struct S0 * const **l_1118[6][9][4] = {{{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,(void*)0,&l_1119},{&l_1119,(void*)0,&l_1119,(void*)0},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,(void*)0},{&l_1119,&l_1119,&l_1119,(void*)0},{&l_1119,&l_1119,&l_1119,(void*)0},{&l_1119,&l_1119,&l_1119,(void*)0},{&l_1119,&l_1119,&l_1119,&l_1119}},{{&l_1119,&l_1119,&l_1119,(void*)0},{&l_1119,(void*)0,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,(void*)0,&l_1119},{&l_1119,&l_1119,&l_1119,(void*)0},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119}},{{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,(void*)0},{&l_1119,&l_1119,&l_1119,(void*)0},{&l_1119,(void*)0,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,(void*)0,&l_1119},{&l_1119,&l_1119,(void*)0,(void*)0},{&l_1119,&l_1119,&l_1119,&l_1119}},{{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,(void*)0,(void*)0},{&l_1119,&l_1119,&l_1119,(void*)0},{&l_1119,&l_1119,(void*)0,&l_1119},{&l_1119,(void*)0,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119}},{{&l_1119,&l_1119,(void*)0,&l_1119},{(void*)0,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{(void*)0,&l_1119,&l_1119,&l_1119}},{{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,(void*)0,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,(void*)0,&l_1119},{&l_1119,&l_1119,(void*)0,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119},{&l_1119,&l_1119,&l_1119,&l_1119}}};
                struct S0 * const ***l_1117 = &l_1118[2][2][1];
                struct S0 **l_1124 = &g_240;
                struct S0 *** const l_1123 = &l_1124;
                struct S0 *** const *l_1122[6];
                const int64_t *l_1134 = &l_1094[3];
                const int64_t **l_1133[6] = {&l_1134,&l_1134,&l_1134,&l_1134,&l_1134,&l_1134};
                const int64_t ***l_1132 = &l_1133[5];
                uint64_t *l_1150[4][4] = {{&g_123,&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123,&g_123}};
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_1122[i] = &l_1123;
                l_1057[7][4] = &l_1050;
            }
        }
    }
    (*l_1181) = &g_958;
    return g_128;
}







static const int8_t * func_11(int8_t * p_12)
{
    int64_t l_15[9][7][4] = {{{0x7FD074DEFC72FA5DLL,0xAD3380EE91B76E1ELL,1L,0L},{1L,1L,1L,1L},{0L,1L,0L,(-8L)},{0x725D36729694D2B5LL,1L,8L,1L},{0xEE5A9864BA8B35EDLL,0L,8L,0xEF9A8551B32E2659LL},{0x725D36729694D2B5LL,0x980DB959C45C1D10LL,0L,(-1L)},{0L,0x932E3CA3691F6F49LL,1L,0x725D36729694D2B5LL}},{{1L,0x725D36729694D2B5LL,1L,1L},{0x7FD074DEFC72FA5DLL,0xEF9A8551B32E2659LL,0xEF9A8551B32E2659LL,0x7FD074DEFC72FA5DLL},{(-1L),0x1CE3CB5AF9F7C8B1LL,0L,0x720725FC1C57511ELL},{0xB16E2C9BF5E4D8D9LL,1L,0x7FD074DEFC72FA5DLL,1L},{0xAD3380EE91B76E1ELL,1L,0xEE5A9864BA8B35EDLL,1L},{0L,1L,0x7FD074DEFC72FA5DLL,(-1L)},{1L,9L,0L,1L}},{{0x720725FC1C57511ELL,1L,(-1L),0x980DB959C45C1D10LL},{0L,0xEE5A9864BA8B35EDLL,0x1CE3CB5AF9F7C8B1LL,0xEE5A9864BA8B35EDLL},{1L,1L,1L,0x932E3CA3691F6F49LL},{0xEF9A8551B32E2659LL,1L,0x932E3CA3691F6F49LL,1L},{0x980DB959C45C1D10LL,0L,1L,0xB16E2C9BF5E4D8D9LL},{0x980DB959C45C1D10LL,0xAD3380EE91B76E1ELL,0x932E3CA3691F6F49LL,0xEF9A8551B32E2659LL},{0xEF9A8551B32E2659LL,0xB16E2C9BF5E4D8D9LL,1L,0x720725FC1C57511ELL}},{{1L,0x7919ADB821342F3DLL,0x1CE3CB5AF9F7C8B1LL,8L},{0L,0x1CE3CB5AF9F7C8B1LL,(-1L),(-1L)},{0x720725FC1C57511ELL,0x720725FC1C57511ELL,0L,1L},{1L,1L,0x7FD074DEFC72FA5DLL,9L},{0L,0x23EDB39523DD972CLL,0xEE5A9864BA8B35EDLL,0x7FD074DEFC72FA5DLL},{0xAD3380EE91B76E1ELL,0x23EDB39523DD972CLL,1L,9L},{0x23EDB39523DD972CLL,1L,8L,1L}},{{(-8L),0x720725FC1C57511ELL,1L,(-1L)},{1L,0x1CE3CB5AF9F7C8B1LL,1L,8L},{1L,0x7919ADB821342F3DLL,1L,0x720725FC1C57511ELL},{8L,0xB16E2C9BF5E4D8D9LL,0L,0xEF9A8551B32E2659LL},{0xEE5A9864BA8B35EDLL,0xAD3380EE91B76E1ELL,0L,0xB16E2C9BF5E4D8D9LL},{0x1940C9BA5B042041LL,0L,0L,1L},{0xEE5A9864BA8B35EDLL,1L,0L,0x932E3CA3691F6F49LL}},{{8L,1L,1L,0xEE5A9864BA8B35EDLL},{1L,0xEE5A9864BA8B35EDLL,1L,0x980DB959C45C1D10LL},{1L,1L,1L,1L},{(-8L),9L,8L,(-1L)},{0x23EDB39523DD972CLL,1L,1L,1L},{0xAD3380EE91B76E1ELL,1L,0xEE5A9864BA8B35EDLL,1L},{0L,1L,0x7FD074DEFC72FA5DLL,(-1L)}},{{1L,9L,0L,1L},{0x720725FC1C57511ELL,1L,(-1L),0x980DB959C45C1D10LL},{0L,0xEE5A9864BA8B35EDLL,0x1CE3CB5AF9F7C8B1LL,0xEE5A9864BA8B35EDLL},{1L,1L,1L,0x932E3CA3691F6F49LL},{0xEF9A8551B32E2659LL,1L,0x932E3CA3691F6F49LL,1L},{0x980DB959C45C1D10LL,0L,1L,0xB16E2C9BF5E4D8D9LL},{0x980DB959C45C1D10LL,0xAD3380EE91B76E1ELL,0x932E3CA3691F6F49LL,0xEF9A8551B32E2659LL}},{{0xEF9A8551B32E2659LL,0xB16E2C9BF5E4D8D9LL,1L,0x720725FC1C57511ELL},{1L,0x7919ADB821342F3DLL,0x1CE3CB5AF9F7C8B1LL,8L},{0L,0x1CE3CB5AF9F7C8B1LL,(-1L),(-1L)},{0x720725FC1C57511ELL,0x720725FC1C57511ELL,0L,1L},{1L,1L,0x7FD074DEFC72FA5DLL,9L},{0L,0x23EDB39523DD972CLL,0xEE5A9864BA8B35EDLL,0x7FD074DEFC72FA5DLL},{0xAD3380EE91B76E1ELL,0x23EDB39523DD972CLL,1L,9L}},{{0x23EDB39523DD972CLL,1L,8L,1L},{(-8L),0x720725FC1C57511ELL,1L,(-1L)},{1L,0x1CE3CB5AF9F7C8B1LL,1L,0L},{0xB16E2C9BF5E4D8D9LL,(-1L),0xB16E2C9BF5E4D8D9LL,(-1L)},{0L,0x23EDB39523DD972CLL,8L,1L},{0x1940C9BA5B042041LL,0x1CE3CB5AF9F7C8B1LL,0x725D36729694D2B5LL,0x23EDB39523DD972CLL},{1L,8L,0x725D36729694D2B5LL,0x980DB959C45C1D10LL}}};
    int i, j, k;
    for (g_14 = 0; (g_14 <= 3); g_14 += 1)
    {
        return &g_14;
    }
    return &g_14;
}







static int8_t * func_16(int16_t p_17, uint32_t p_18)
{
    uint32_t l_936 = 0x5C190157L;
    int32_t *l_939 = &g_172[4][0];
    int32_t **l_941 = (void*)0;
    int32_t **l_942 = &l_939;
lbl_943:
    for (g_45 = 0; (g_45 != 7); g_45 = safe_add_func_int16_t_s_s(g_45, 7))
    {
        int32_t *l_931 = (void*)0;
        int32_t *l_932 = &g_172[4][8];
        int32_t l_933 = 0x829CD28BL;
        int32_t *l_934 = &l_933;
        int32_t *l_935[4][8];
        int32_t **l_940 = &l_935[3][6];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 8; j++)
                l_935[i][j] = &g_172[3][2];
        }
        l_936++;
        (*l_934) |= p_17;
        (*l_940) = l_939;
    }
    (*l_942) = (void*)0;
    if (g_45)
        goto lbl_943;
    return &g_90;
}







static uint64_t func_19(int8_t * p_20, uint16_t p_21, uint64_t p_22)
{
    uint32_t l_66 = 1UL;
    int8_t *l_354 = &g_24;
    int32_t l_571 = 0xCF0E0244L;
    uint16_t **l_589 = &g_170;
    struct S0 l_593 = {40};
    int32_t l_601[2];
    uint8_t l_645[5];
    int32_t **l_753[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_765 = 7UL;
    struct S0 **l_817[1][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint32_t l_835 = 0x13340D3CL;
    uint16_t l_864 = 0x9C68L;
    int32_t ***l_896[3];
    int32_t ****l_895 = &l_896[1];
    int32_t *****l_894 = &l_895;
    int64_t *l_914 = &g_83;
    int i, j;
    for (i = 0; i < 2; i++)
        l_601[i] = (-5L);
    for (i = 0; i < 5; i++)
        l_645[i] = 0UL;
    for (i = 0; i < 3; i++)
        l_896[i] = (void*)0;
    for (p_22 = 28; (p_22 == 24); p_22 = safe_sub_func_uint8_t_u_u(p_22, 1))
    {
        uint8_t *l_43 = (void*)0;
        uint8_t *l_44 = &g_45;
        int32_t l_56 = (-4L);
        uint8_t l_553 = 0x92L;
        int32_t **l_568 = &g_300;
        int32_t l_643 = 2L;
        int32_t l_644 = 4L;
        int32_t l_652 = 0x3E89616BL;
        int16_t **l_693 = &g_502;
        int32_t l_738 = 1L;
        int32_t l_739 = (-1L);
        int32_t l_740 = 0x9ABA664CL;
        uint8_t l_741 = 1UL;
        uint16_t *l_786 = (void*)0;
        struct S0 ***l_798 = &g_239[1];
        uint32_t l_803 = 0xDCFAEED3L;
        const int16_t *l_860 = (void*)0;
        if (((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((safe_rshift_func_int16_t_s_u(p_21, g_2)) , func_38((func_40(((((*l_44) = g_24) & (1L || ((safe_mod_func_uint16_t_u_u((~(func_49((p_20 = func_52((g_2 | (((l_56 , p_20) == (func_57(p_21, (((safe_mul_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(0x2D97B6EB5C50EC31LL, p_21)), 1UL)) , p_22) ^ 0xEB613644CAD70698LL), l_56, l_66) , (void*)0)) , l_66)), p_20, g_113)), &g_92) , 0xA1FC523A2674D38FLL)), p_22)) || p_21))) , (*g_139)), l_354) , 255UL))) != l_553), 0xE9E7A45AL)), p_21)) && g_2), p_22)), 0xA5BAL)) , p_21))
        {
            for (g_75 = 0; (g_75 <= 30); g_75++)
            {
                uint64_t *l_559 = &g_123;
                const int32_t *l_562[4][7] = {{&g_172[4][8],&g_172[0][7],&g_172[0][7],&g_172[4][8],&g_172[4][8],&g_172[0][7],&g_172[0][7]},{&l_56,&g_128,&l_56,&g_128,&l_56,&g_128,&l_56},{&g_172[4][8],&g_172[4][8],&g_172[0][7],&g_172[0][7],&g_172[4][8],&g_172[4][8],&g_172[0][7]},{&l_56,&g_128,&l_56,&g_128,&l_56,&g_128,&l_56}};
                int16_t *l_567 = &g_97;
                int32_t l_569 = 1L;
                const uint8_t l_570 = 0x25L;
                int i, j;
                l_571 = (g_128 = ((p_21 || (safe_mod_func_uint64_t_u_u(((*l_559) = (l_66 == (~(-1L)))), ((((safe_div_func_uint8_t_u_u((((void*)0 != l_562[1][4]) && (((((safe_add_func_int16_t_s_s((*g_502), (((safe_mod_func_uint64_t_u_u((l_569 = ((((&g_211 == &l_66) , ((*l_567) = (**g_501))) , l_568) != l_568)), 0xA238AC742ACE6FF0LL)) | 1L) <= p_21))) ^ l_570) ^ g_181[0]) | 0UL) , (-10L))), (-1L))) >= p_22) >= (*g_170)) && g_90)))) != p_21));
            }
        }
        else
        {
            uint64_t l_576 = 0x541C9C6DD9DCC366LL;
            if (p_22)
                break;
            for (g_444 = 0; (g_444 > (-24)); g_444 = safe_sub_func_int16_t_s_s(g_444, 7))
            {
                int32_t *l_574 = &l_571;
                (*l_574) |= (-8L);
                (*l_574) = p_21;
            }
            if (g_575)
                continue;
            ++l_576;
        }
        for (g_98 = 2; (g_98 <= 27); ++g_98)
        {
            uint32_t *l_583 = &g_308;
            uint32_t *l_586 = &g_94;
            uint8_t l_590 = 0xFAL;
            int32_t l_595 = 1L;
            int32_t l_599 = 0xA8E0AA27L;
            int32_t l_600 = 0x0576B422L;
            int32_t **l_619[4][10] = {{&g_300,&g_300,&g_300,&g_300,&g_300,&g_300,&g_300,&g_300,&g_300,&g_300},{&g_300,&g_300,&g_300,&g_300,&g_300,&g_300,&g_300,&g_300,&g_300,&g_300},{&g_300,&g_300,&g_300,&g_300,&g_300,&g_300,&g_300,&g_300,&g_300,&g_300},{&g_300,&g_300,&g_300,&g_300,&g_300,&g_300,&g_300,&g_300,&g_300,&g_300}};
            int i, j;
            (*l_568) = &l_571;
            if ((safe_rshift_func_int16_t_s_u(p_21, ((0xD42F064AL & ((*l_586) = (--(*l_583)))) > (safe_mul_func_uint16_t_u_u(0xF75BL, (((void*)0 != l_589) , l_590)))))))
            {
                union U1 *l_591 = &g_113;
                struct S0 l_592 = {-190};
                int32_t *l_608 = &g_444;
                int32_t ** const l_607[6] = {(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608};
                struct S0 **l_616 = &g_240;
                int i;
                for (g_85 = 0; (g_85 <= 7); g_85 += 1)
                {
                    uint32_t l_602 = 0UL;
                    int i, j;
                    (*g_283) = l_591;
                    if (((g_172[g_85][(g_85 + 1)] || (g_172[g_85][(g_85 + 2)] = l_571)) < (*g_170)))
                    {
                        l_593 = l_592;
                    }
                    else
                    {
                        struct S0 *l_594 = &l_592;
                        int32_t *l_596 = &l_595;
                        int32_t *l_597 = (void*)0;
                        int32_t *l_598[6][8][5] = {{{&l_56,&g_172[g_85][(g_85 + 1)],(void*)0,&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 2)]},{(void*)0,&l_571,&g_172[4][8],(void*)0,&l_56},{&g_128,&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 1)]},{&l_56,&l_595,&g_172[g_85][(g_85 + 1)],&l_571,(void*)0},{&l_571,&l_56,&g_172[4][8],(void*)0,&l_571},{&l_595,(void*)0,(void*)0,&g_128,&g_172[g_85][(g_85 + 1)]},{&l_571,&g_128,&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 1)]},{&l_56,&l_56,&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 1)],&l_571}},{{&g_128,&l_571,&l_595,&g_128,&l_56},{(void*)0,&l_595,&g_172[g_85][(g_85 + 1)],(void*)0,&l_595},{&l_56,&l_571,&g_128,&l_571,&l_571},{&l_595,&l_56,&l_595,&g_172[g_85][(g_85 + 1)],&l_571},{&g_172[g_85][(g_85 + 1)],&g_128,(void*)0,(void*)0,&l_595},{&l_571,(void*)0,&g_172[g_85][(g_85 + 2)],&g_172[g_85][(g_85 + 1)],&l_56},{&g_172[g_85][(g_85 + 1)],&l_56,(void*)0,&l_595,&l_571},{(void*)0,&l_595,&l_595,(void*)0,&g_172[g_85][(g_85 + 1)]}},{{&l_595,&g_172[g_85][(g_85 + 1)],&l_571,(void*)0,&g_172[g_85][(g_85 + 1)]},{&g_172[2][9],&l_595,&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 2)],&g_172[g_85][(g_85 + 1)]},{&l_595,&g_172[2][9],(void*)0,(void*)0,&g_172[g_85][(g_85 + 2)]},{&g_172[g_85][(g_85 + 1)],&l_595,&l_56,&l_595,&g_172[g_85][(g_85 + 1)]},{(void*)0,&l_595,&g_172[2][9],&g_128,&g_172[g_85][(g_85 + 2)]},{&g_172[g_85][(g_85 + 2)],&g_172[2][9],&g_172[g_85][(g_85 + 2)],&g_172[g_85][(g_85 + 1)],&g_2},{&l_595,&l_595,&g_172[g_85][(g_85 + 1)],&l_595,&g_172[g_85][(g_85 + 2)]},{&g_172[4][8],&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 1)]}},{{&g_172[g_85][(g_85 + 2)],(void*)0,&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 2)]},{&l_595,&g_172[g_85][(g_85 + 2)],&g_172[g_85][(g_85 + 1)],(void*)0,&g_172[g_85][(g_85 + 1)]},{&g_128,&l_595,&g_172[g_85][(g_85 + 2)],&g_172[4][8],&g_172[g_85][(g_85 + 1)]},{&l_595,&g_172[4][8],&g_172[2][9],&g_172[g_85][(g_85 + 1)],&g_172[2][9]},{&g_172[g_85][(g_85 + 2)],&g_172[g_85][(g_85 + 2)],&l_56,&g_172[g_85][(g_85 + 1)],&g_128},{&g_172[4][8],&l_595,(void*)0,&g_172[4][8],&g_172[g_85][(g_85 + 2)]},{&l_595,&g_128,&g_172[g_85][(g_85 + 1)],(void*)0,&g_128},{&g_172[g_85][(g_85 + 2)],&l_595,&l_571,&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 1)]}},{{(void*)0,&g_172[g_85][(g_85 + 2)],(void*)0,&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 1)]},{&g_172[g_85][(g_85 + 1)],&g_172[4][8],&g_172[g_85][(g_85 + 2)],&l_595,&g_128},{&l_595,&l_595,&l_571,&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 2)]},{&g_172[2][9],&g_172[g_85][(g_85 + 2)],&g_172[g_85][(g_85 + 2)],&g_128,&g_128},{&l_595,(void*)0,(void*)0,&l_595,&g_172[2][9]},{&l_595,&g_172[g_85][(g_85 + 1)],&l_571,(void*)0,&g_172[g_85][(g_85 + 1)]},{&g_172[2][9],&l_595,&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 2)],&g_172[g_85][(g_85 + 1)]},{&l_595,&g_172[2][9],(void*)0,(void*)0,&g_172[g_85][(g_85 + 2)]}},{{&g_172[g_85][(g_85 + 1)],&l_595,&l_56,&l_595,&g_172[g_85][(g_85 + 1)]},{(void*)0,&l_595,&g_172[2][9],&g_128,&g_172[g_85][(g_85 + 2)]},{&g_172[g_85][(g_85 + 2)],&g_172[2][9],&g_172[g_85][(g_85 + 2)],&g_172[g_85][(g_85 + 1)],&g_2},{&l_595,&l_595,&g_172[g_85][(g_85 + 1)],&l_595,&g_172[g_85][(g_85 + 2)]},{&g_172[4][8],&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 1)]},{&g_172[g_85][(g_85 + 2)],(void*)0,&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 1)],&g_172[g_85][(g_85 + 2)]},{&l_595,&g_172[g_85][(g_85 + 2)],&g_172[g_85][(g_85 + 1)],(void*)0,&g_172[g_85][(g_85 + 1)]},{&g_128,&l_595,&g_172[g_85][(g_85 + 2)],&g_172[4][8],&g_172[g_85][(g_85 + 1)]}}};
                        int i, j, k;
                        (**g_238) = l_594;
                        (**g_238) = &l_593;
                        ++l_602;
                        if ((*g_300))
                            continue;
                    }
                    for (l_571 = 0; (l_571 == (-21)); --l_571)
                    {
                        int32_t ***l_609 = (void*)0;
                        int32_t **l_611 = &l_608;
                        int32_t ***l_610 = &l_611;
                        if ((*g_300))
                            break;
                        if ((*g_300))
                            continue;
                        (*l_610) = l_607[0];
                    }
                }
                for (g_24 = 1; (g_24 >= 0); g_24 -= 1)
                {
                    int i;
                    if (l_601[g_24])
                        break;
                    for (g_90 = 1; (g_90 >= 0); g_90 -= 1)
                    {
                        uint16_t l_617 = 0xD4FAL;
                        int64_t *l_618 = &g_85;
                        int i;
                        (**l_568) = ((l_601[1] || (((*l_618) = ((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((((((void*)0 != l_616) <= (l_617 < (l_601[g_24] = p_21))) != p_21) != ((g_92 , &p_20) == (g_123 , &p_20))), 2L)) & l_617), p_21)) , g_181[0])) ^ l_592.f0)) , 0L);
                        (*g_300) ^= (((*l_589) = &g_159) != &p_21);
                        if (p_21)
                            continue;
                        if ((*g_300))
                            break;
                    }
                }
            }
            else
            {
                int32_t ***l_620 = &l_619[0][4];
                l_599 |= 4L;
                (*l_620) = l_619[2][5];
            }
        }
        for (g_83 = 0; (g_83 == (-12)); g_83--)
        {
            int32_t *l_623 = &g_172[4][8];
            int32_t *l_624 = &l_56;
            int32_t l_625 = 0L;
            int32_t *l_626 = &l_601[1];
            int32_t *l_627 = &g_128;
            int32_t *l_628 = &l_601[1];
            int32_t *l_629[4] = {&l_571,&l_571,&l_571,&l_571};
            uint64_t l_630 = 0UL;
            uint16_t * const **l_637 = &g_636[0][0][1];
            int64_t * const *l_648 = (void*)0;
            int i;
            l_630++;
            for (g_575 = 18; (g_575 == 1); g_575--)
            {
                int32_t l_638 = 0xE9667ECBL;
                int32_t l_641 = 0L;
                int32_t l_642 = 0x5AAEBE21L;
                for (g_97 = 3; (g_97 >= 0); g_97 -= 1)
                {
                    int32_t l_639 = 4L;
                    int32_t l_640 = 0L;
                    int64_t * const **l_649 = &l_648;
                    int i, j;
                    l_637 = g_635[1];
                    l_645[0]++;
                    (*l_627) = g_172[(g_97 + 3)][(g_97 + 2)];
                    (*l_649) = l_648;
                }
            }
        }
        if ((safe_sub_func_uint64_t_u_u(l_652, 0xFCD099631E407579LL)))
        {
            int8_t l_653 = 0x0AL;
            const int32_t l_665 = 0xF7661EF7L;
            union U1 l_691 = {-1L};
            int32_t l_724[6][9] = {{1L,0x0B7153E9L,1L,0x10FF13C1L,0x0B7153E9L,0x1C275536L,0x1C275536L,0x0B7153E9L,0x10FF13C1L},{0x84631524L,0x0F80429CL,0x84631524L,0xF4E7BBAAL,0x0F80429CL,1L,1L,0x0F80429CL,0xF4E7BBAAL},{1L,0x0B7153E9L,1L,0x10FF13C1L,0x0B7153E9L,0x1C275536L,0x1C275536L,0x0B7153E9L,0x10FF13C1L},{0xCB20290CL,1L,0xCB20290CL,(-6L),1L,0x55A6F5F9L,0x55A6F5F9L,1L,(-6L)},{0L,0x1C275536L,0L,(-1L),0x1C275536L,0xCC681DA1L,0xCC681DA1L,0x1C275536L,(-1L)},{0xCB20290CL,1L,0xCB20290CL,(-6L),1L,0x55A6F5F9L,0x55A6F5F9L,1L,(-6L)}};
            uint16_t *** const l_733 = &l_589;
            uint64_t l_746[4][2][6] = {{{0x0A99823E8A41308BLL,0x4A8950E54AE0C934LL,0x0A99823E8A41308BLL,0xDD167266CB8E8F1DLL,18446744073709551615UL,0x1FD4453C1CD8C921LL},{4UL,0xDD167266CB8E8F1DLL,18446744073709551609UL,1UL,0x7C8E6A600091ECBBLL,0x7C8E6A600091ECBBLL}},{{1UL,0x7C8E6A600091ECBBLL,0x7C8E6A600091ECBBLL,1UL,18446744073709551609UL,0xDD167266CB8E8F1DLL},{4UL,0x1FD4453C1CD8C921LL,18446744073709551615UL,0xDD167266CB8E8F1DLL,0x0A99823E8A41308BLL,0x4A8950E54AE0C934LL}},{{0x0A99823E8A41308BLL,18446744073709551609UL,1UL,18446744073709551609UL,0x0A99823E8A41308BLL,0UL},{0x4A8950E54AE0C934LL,0x1FD4453C1CD8C921LL,0xE807389CD0B57724LL,0UL,18446744073709551609UL,18446744073709551615UL}},{{18446744073709551615UL,0x7C8E6A600091ECBBLL,0x1FD4453C1CD8C921LL,0x1FD4453C1CD8C921LL,0x7C8E6A600091ECBBLL,18446744073709551615UL},{0UL,0xDD167266CB8E8F1DLL,0xE807389CD0B57724LL,0x0A99823E8A41308BLL,18446744073709551615UL,0UL}}};
            int i, j, k;
            l_593 = l_593;
            if (l_653)
            {
                int32_t *l_654 = &g_2;
                g_300 = l_654;
            }
            else
            {
                uint16_t l_664 = 65534UL;
                int64_t *l_669 = &g_83;
                int32_t l_723[1];
                union U1 l_748 = {0x4413FB21L};
                int i;
                for (i = 0; i < 1; i++)
                    l_723[i] = (-1L);
                if ((safe_add_func_int64_t_s_s((0x97L | 6L), (safe_lshift_func_int8_t_s_s(((*g_140) = 2L), (safe_rshift_func_uint8_t_u_s(((+(!(+((*l_669) ^= ((p_21 = (l_664 < l_665)) , (+(safe_lshift_func_uint16_t_u_u((((l_653 > p_21) & p_22) <= p_21), l_664)))))))) > 0x4BBAL), g_104.f0)))))))
                {
                    int32_t *l_677 = &l_652;
                    int32_t * const *l_676 = &l_677;
                    int32_t * const **l_675[4] = {&l_676,&l_676,&l_676,&l_676};
                    uint16_t **l_683 = &g_170;
                    int16_t **l_692 = &g_502;
                    int32_t l_694 = (-9L);
                    int i;
                    for (g_444 = 0; (g_444 <= 2); g_444 += 1)
                    {
                        union U1 l_672 = {0x3C4D1DA1L};
                        const int32_t *l_681 = &g_682;
                        const int32_t **l_680[3][10] = {{(void*)0,(void*)0,&l_681,(void*)0,(void*)0,&l_681,(void*)0,(void*)0,&l_681,(void*)0},{(void*)0,&l_681,&l_681,(void*)0,&l_681,&l_681,(void*)0,&l_681,&l_681,(void*)0},{&l_681,(void*)0,&l_681,&l_681,(void*)0,&l_681,&l_681,(void*)0,&l_681,&l_681}};
                        const int32_t ***l_679[5];
                        const int32_t ****l_678 = &l_679[2];
                        uint16_t ***l_684 = &l_589;
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_679[i] = &l_680[0][5];
                        (*l_568) = &g_172[4][2];
                        (*g_300) = (safe_mul_func_uint8_t_u_u(((((l_672 , ((safe_lshift_func_int8_t_s_s(((*g_140) = ((((((((*l_669) = ((l_675[1] != ((*l_678) = (void*)0)) <= (((*l_684) = l_683) != (void*)0))) <= ((safe_add_func_uint64_t_u_u((g_113.f2 , (safe_lshift_func_uint16_t_u_s((((safe_rshift_func_uint16_t_u_u((p_21 != (l_691 , (p_22 | l_664))), 4)) | l_672.f0) || p_21), p_21))), (-3L))) >= (**g_501))) >= (*g_300)) || (*g_300)) , g_128) , l_692) != l_693)), 0)) <= l_672.f0)) & l_672.f2) || p_22) == l_664), l_694));
                        (*g_300) = (*g_300);
                        (*l_568) = (void*)0;
                    }
                    for (l_694 = 23; (l_694 > 6); l_694 = safe_sub_func_uint8_t_u_u(l_694, 7))
                    {
                        uint32_t *l_708 = &g_308;
                        int32_t *l_721 = &g_172[2][2];
                        int32_t *l_722[9][3] = {{&l_644,&l_644,&l_644},{&g_128,&l_571,&g_128},{&l_644,&l_644,&l_644},{&g_128,&l_571,&g_128},{&l_644,&l_644,&l_644},{&g_128,&l_571,&g_128},{&l_644,&l_644,&l_644},{&g_128,&l_571,&g_128},{&l_644,&l_644,&l_644}};
                        uint32_t l_725[9] = {0x5F3F46ABL,0x5F3F46ABL,0UL,0x5F3F46ABL,0x5F3F46ABL,0UL,0x5F3F46ABL,0x5F3F46ABL,0UL};
                        int i, j;
                        (*l_721) &= (!(safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((safe_add_func_int8_t_s_s((*p_20), (safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_691.f0, ((((*l_708) = p_22) > (-1L)) , (((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((p_21 , p_21), (--(**l_589)))), ((l_593.f0 = ((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((*p_20), 0)), l_694)) , ((safe_mul_func_int16_t_s_s((p_22 > p_22), 6L)) || 0x4B6CC260BA5A23F0LL))) < 0x45L))) | l_694) ^ 0UL)))), 0x7E0BL)))) != 7UL) && (*g_140)), (-1L))), p_22)));
                        ++l_725[5];
                        if (l_691.f2)
                            break;
                    }
                }
                else
                {
                    int64_t l_732 = 0x0C419DD557CF894ELL;
                    uint16_t *** const l_734 = &l_589;
                    int32_t *l_735 = &l_601[1];
                    int32_t *l_736 = &l_724[2][4];
                    int32_t *l_737[9] = {&g_128,&g_128,&l_601[1],&g_128,&g_128,&l_601[1],&g_128,&g_128,&l_601[1]};
                    int i;
                    l_723[0] ^= (safe_sub_func_uint32_t_u_u(0x35E7A58BL, (safe_mul_func_uint16_t_u_u(((**l_589) = 0UL), (l_732 , (l_733 == l_734))))));
                    l_741++;
                    (*l_568) = &l_724[0][6];
                }
                if (p_22)
                {
                    int32_t *l_744 = &g_172[4][8];
                    (*l_568) = &l_723[0];
                    (*l_568) = l_744;
                }
                else
                {
                    int32_t *l_745 = (void*)0;
                    int32_t *l_747 = &g_172[4][8];
                    (*l_747) = (l_746[2][0][2] = p_22);
                    return p_22;
                }
                (*g_300) ^= (l_748 , l_653);
            }
            if ((*g_300))
                break;
        }
        else
        {
            int32_t ***l_754 = (void*)0;
            int32_t ***l_755[6][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,&l_753[1],&l_753[6]},{(void*)0,&l_753[1],(void*)0},{&l_753[1],(void*)0,&l_753[6]},{&l_753[1],&l_753[1],(void*)0},{(void*)0,(void*)0,(void*)0}};
            const struct S0 l_764 = {228};
            uint16_t l_805 = 0x6C6AL;
            int32_t **l_832 = &g_830[3];
            int32_t l_838 = 0x0FBA2D56L;
            int16_t *l_855 = &g_97;
            uint8_t *l_856 = &l_645[0];
            union U1 l_885 = {-2L};
            int i, j;
            if ((g_444 , ((safe_add_func_int8_t_s_s((*p_20), ((safe_div_func_uint16_t_u_u(p_22, p_21)) , 7UL))) , ((((g_756 = l_753[1]) == (((safe_add_func_uint32_t_u_u(0xA043FDFCL, 0L)) || p_21) , (void*)0)) | p_22) , l_741))))
            {
                int64_t l_766 = 0xF798F12045D35F74LL;
                int64_t *l_767 = &l_766;
                const int32_t l_768 = 0xB64F8AA2L;
                const int32_t *l_771[9] = {&l_601[1],&g_172[4][8],&l_601[1],&g_172[4][8],&l_601[1],&g_172[4][8],&l_601[1],&g_172[4][8],&l_601[1]};
                int32_t l_787 = 0L;
                struct S0 ***l_800 = &g_239[1];
                int32_t *l_804 = &g_172[3][6];
                uint32_t l_826 = 0UL;
                int i;
                for (g_94 = 0; (g_94 <= 9); g_94 += 1)
                {
                    int i;
                    g_104.f0 ^= 8L;
                    for (l_739 = 0; (l_739 <= 2); l_739 += 1)
                    {
                        return p_22;
                    }
                }
                if ((((safe_unary_minus_func_uint16_t_u(((safe_rshift_func_int16_t_s_u(0xDFE0L, (safe_mod_func_int64_t_s_s((((l_764 , 1L) && ((*l_44) = ((l_765 , g_45) , (l_739 | g_181[0])))) && 5UL), ((*l_767) = l_766))))) <= l_768))) == p_21) <= (*g_139)))
                {
                    const int32_t *l_769 = &l_740;
                    const int32_t **l_770[9] = {&l_769,&l_769,&l_769,&l_769,&l_769,&l_769,&l_769,&l_769,&l_769};
                    int i;
                    l_771[1] = l_769;
                    for (g_94 = 0; (g_94 <= 1); g_94 += 1)
                    {
                        const int8_t l_780 = 0L;
                        uint32_t l_783 = 0x5DA74634L;
                        int8_t *l_784 = &g_785;
                        uint32_t *l_788 = &l_783;
                        uint16_t **l_795[2][1];
                        struct S0 ****l_799 = &g_238;
                        uint16_t ***l_802[6][6][2] = {{{&l_589,&l_795[1][0]},{&l_589,&l_589},{(void*)0,&l_589},{&l_589,(void*)0},{&l_589,(void*)0},{&l_589,&l_589}},{{&l_795[1][0],&l_795[0][0]},{&l_795[1][0],&l_589},{&l_589,(void*)0},{&l_589,(void*)0},{&l_589,&l_589},{(void*)0,&l_589}},{{&l_589,&l_795[1][0]},{&l_795[1][0],(void*)0},{&l_795[0][0],&l_589},{&l_589,&l_589},{&l_795[0][0],(void*)0},{&l_795[1][0],&l_795[1][0]}},{{&l_589,&l_589},{(void*)0,&l_589},{&l_589,(void*)0},{&l_589,(void*)0},{&l_589,&l_589},{&l_795[1][0],&l_795[0][0]}},{{&l_795[1][0],&l_589},{&l_589,(void*)0},{&l_589,(void*)0},{&l_589,&l_589},{(void*)0,&l_589},{&l_589,&l_795[1][0]}},{{&l_795[1][0],(void*)0},{&l_795[0][0],&l_589},{&l_589,&l_589},{&l_795[0][0],(void*)0},{&l_795[1][0],&l_795[1][0]},{&l_589,&l_589}}};
                        uint16_t ****l_801 = &l_802[5][4][0];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_795[i][j] = &l_786;
                        }
                        l_787 = (safe_mul_func_int16_t_s_s(((-3L) | 0UL), ((8UL <= (safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((g_2 , (*p_20)), ((((g_2 || (safe_mul_func_int8_t_s_s(((*l_784) = (l_780 ^ ((safe_rshift_func_uint16_t_u_u((((0x62402C8D83E93957LL ^ (((*g_502) == p_21) , g_94)) && p_22) >= l_783), 9)) == 0x177F2807801C2F3CLL))), (*l_769)))) , (void*)0) == l_786) | 18446744073709551615UL))), p_21))) , 0x8D9DL)));
                        (*l_568) = (l_804 = (((((*l_788) |= g_682) , (safe_sub_func_uint64_t_u_u((((*l_801) = ((p_21 > (safe_mul_func_uint16_t_u_u(((l_783 , (safe_mul_func_int8_t_s_s((p_22 , (l_589 == l_795[1][0])), (*l_769)))) || (safe_mul_func_uint16_t_u_u((251UL != ((((*l_799) = l_798) != l_800) ^ 1UL)), (*g_502)))), 0xD627L))) , (void*)0)) != (void*)0), g_113.f2))) && l_803) , (void*)0));
                        return l_805;
                    }
                }
                else
                {
                    struct S0 ***l_816[7] = {(void*)0,(void*)0,&g_239[1],(void*)0,(void*)0,&g_239[1],(void*)0};
                    int32_t l_822 = 1L;
                    int32_t l_823 = 0x4D0EB9A4L;
                    int32_t l_824[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_824[i] = 0x18326390L;
                    if ((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((g_97 || g_444), p_21)), ((*l_804) = (250UL || g_104.f0)))))
                    {
                        const int32_t l_812 = 0x7AF60D7BL;
                        uint8_t *l_815 = &g_92;
                        union U1 l_818[6][6] = {{{-6L},{-9L},{0xFB998897L},{0x43326A07L},{0x43326A07L},{0xFB998897L}},{{-9L},{-9L},{0xCCFA8E7EL},{-6L},{0x963E2B57L},{0x43326A07L}},{{0x25F07D85L},{1L},{0x0994FA12L},{0xCCFA8E7EL},{0x518E9198L},{0xCCFA8E7EL}},{{0x0994FA12L},{0x25F07D85L},{0x0994FA12L},{-9L},{-9L},{0x43326A07L}},{{6L},{-9L},{0xCCFA8E7EL},{0L},{0xFB998897L},{0xFB998897L}},{{0L},{0xFB998897L},{0xFB998897L},{0L},{0xCCFA8E7EL},{-9L}}};
                        struct S0 **l_819 = &g_240;
                        int i, j;
                        (*l_804) |= (safe_lshift_func_uint8_t_u_s((g_98 = (((*l_354) = ((l_812 , ((safe_lshift_func_uint8_t_u_s(((*l_815) = ((*l_44) = 0x78L)), 2)) , l_816[2])) != l_800)) > (*g_140))), ((l_817[0][4] != (l_818[2][1] , l_819)) ^ (!g_94))));
                        if (g_271)
                            continue;
                    }
                    else
                    {
                        int16_t l_821 = 0xDC91L;
                        int32_t l_825 = 0x5BFF8577L;
                        l_826++;
                        if (p_22)
                            continue;
                    }
                    return p_22;
                }
                if (p_22)
                    break;
                (*l_568) = &l_787;
            }
            else
            {
                int32_t ***l_831[3][2] = {{&g_829,&g_829},{&g_829,&g_829},{&g_829,&g_829}};
                int i, j;
                l_832 = g_829;
                for (g_444 = 0; (g_444 <= 1); g_444 += 1)
                {
                    int32_t ****l_834[8][4];
                    int32_t *****l_833 = &l_834[3][2];
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_834[i][j] = &l_831[1][1];
                    }
                    l_835 ^= (&l_831[(g_444 + 1)][g_444] == ((*l_833) = (void*)0));
                    if (l_645[(g_444 + 2)])
                        continue;
                }
            }
            for (l_803 = 0; (l_803 <= 6); l_803 += 1)
            {
                const int16_t *l_861 = &g_862;
                int32_t l_863[9] = {0x05079ADDL,(-1L),(-1L),0x05079ADDL,(-1L),(-1L),0x05079ADDL,(-1L),(-1L)};
                union U1 l_879 = {-1L};
                const int32_t *l_892 = &l_739;
                const int32_t **l_891 = &l_892;
                const int32_t ***l_890[6][6] = {{&l_891,(void*)0,&l_891,&l_891,&l_891,&l_891},{(void*)0,(void*)0,&l_891,(void*)0,&l_891,(void*)0},{&l_891,(void*)0,(void*)0,(void*)0,(void*)0,&l_891},{(void*)0,&l_891,(void*)0,&l_891,(void*)0,(void*)0},{&l_891,&l_891,&l_891,&l_891,(void*)0,&l_891},{&l_891,(void*)0,&l_891,&l_891,&l_891,&l_891}};
                struct S0 l_901 = {169};
                int i, j;
                for (l_740 = 0; (l_740 <= 6); l_740 += 1)
                {
                    uint8_t l_848 = 0xB2L;
                    int32_t l_866 = 0xA44F04B3L;
                    uint16_t ***l_884 = (void*)0;
                    const uint32_t l_897 = 0xBAC0F9D7L;
                    struct S0 l_899 = {-115};
                    l_644 = ((g_45 & (safe_lshift_func_int8_t_s_u(0x51L, 5))) >= g_230);
                    if (((void*)0 == &g_271))
                    {
                        int64_t l_839 = 0x2C29953B99504E24LL;
                        const int16_t **l_857 = (void*)0;
                        const int16_t *l_859 = (void*)0;
                        const int16_t **l_858 = &l_859;
                        int32_t l_865 = 0xF570A606L;
                        if (p_21)
                            break;
                        g_128 |= ((l_838 < ((((l_839 = ((**g_501) = (**g_501))) | (l_866 &= ((*l_855) ^= ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((0x964C1093L == (safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((((l_848 >= g_172[4][8]) <= (((safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s(((*g_139) = (safe_mod_func_int8_t_s_s((l_855 != (l_861 = (l_860 = ((l_856 != p_20) , ((*l_858) = (*l_693)))))), l_863[8]))), g_230)), g_862)) > l_864) != g_85)) > l_865) < g_104.f0), 0x86E290DEL)), g_45))), l_863[8])), p_21)) <= 0x0DL)))) != p_22) != p_22)) & 0x74DBD673L);
                    }
                    else
                    {
                        const uint16_t ****l_883 = &g_880;
                        const int32_t ****l_893 = &l_890[3][5];
                        int8_t l_898 = 1L;
                        struct S0 l_900 = {50};
                        const struct S0 *l_906 = &g_104;
                        const struct S0 ** const l_905[1][5][1] = {{{&l_906},{&l_906},{&l_906},{&l_906},{&l_906}}};
                        uint16_t l_913 = 0x3E38L;
                        const int64_t *l_916[6][4] = {{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271}};
                        const int64_t **l_915 = &l_916[1][2];
                        int i, j, k;
                        l_900 = (((safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_866 = (safe_rshift_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((((((*l_883) = (l_879 , g_880)) == l_884) == (((l_885 , (l_863[5] |= (l_644 = (safe_rshift_func_int16_t_s_u((((safe_div_func_uint16_t_u_u(((((((p_22 , (void*)0) == ((((*l_893) = l_890[3][5]) != &l_891) , l_894)) , p_22) > p_22) , g_90) && g_85), l_897)) != (*g_140)) ^ (**l_891)), (*g_170)))))) && (-1L)) < 0UL)) || 0x60L) & (*g_502)), l_898)), 7)) , 3L) , p_22) , p_22), g_181[0]))), 0x8D80L)), 0xEEL)), p_21)) & p_21) , l_899);
                        l_900 = l_901;
                        l_644 = 0xF5E6F841L;
                        l_901.f0 = ((!0x887CL) && (safe_div_func_uint8_t_u_u(((void*)0 == l_905[0][2][0]), (safe_mod_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_643 ^= l_913), ((l_914 != ((*l_915) = (void*)0)) != (safe_mul_func_int16_t_s_s(((void*)0 == &g_2), ((p_21 < 9UL) != 0xBC84B528L)))))), p_22)) || g_211), 0x9802L)))));
                    }
                }
            }
            l_644 &= (safe_div_func_int16_t_s_s(0x9D21L, (*g_502)));
        }
    }
    return p_22;
}







static int16_t func_38(uint8_t p_39)
{
    int8_t l_540 = 1L;
    uint16_t **l_541[6];
    struct S0 l_546 = {-42};
    int32_t *l_549 = &g_172[4][8];
    int32_t *l_550 = (void*)0;
    int32_t *l_551 = &g_128;
    struct S0 *l_552 = &g_104;
    int i;
    for (i = 0; i < 6; i++)
        l_541[i] = (void*)0;
    (*l_551) = ((*l_549) |= (l_540 >= ((l_541[2] == ((safe_sub_func_int64_t_s_s(l_540, p_39)) , &g_170)) , (safe_add_func_uint16_t_u_u((l_546 , (((-1L) && (safe_mul_func_uint16_t_u_u(p_39, p_39))) == 65535UL)), 0x4F20L)))));
    (*l_552) = l_546;
    return p_39;
}







static uint32_t func_40(const int8_t p_41, int8_t * p_42)
{
    uint32_t l_355 = 0xEAC0E24BL;
    struct S0 l_356 = {-153};
    uint64_t l_382 = 0x50B2A8E6D828BD18LL;
    int32_t l_409 = 9L;
    int32_t l_411[6] = {0x51BEF540L,0x51BEF540L,0x51BEF540L,0x51BEF540L,0x51BEF540L,0x51BEF540L};
    struct S0 ***l_491 = &g_239[1];
    int i;
    if ((l_355 = p_41))
    {
        struct S0 l_357 = {-79};
        int32_t l_403 = 0L;
        int32_t l_404 = 0x3BA56D87L;
        int32_t l_410[4];
        const uint16_t * const l_472[2] = {&g_159,&g_159};
        const uint16_t * const *l_471 = &l_472[0];
        struct S0 **l_481 = &g_240;
        const int16_t *l_500 = &g_121;
        const int16_t **l_499[10] = {&l_500,&l_500,&l_500,&l_500,&l_500,&l_500,&l_500,&l_500,&l_500,&l_500};
        uint32_t l_536 = 0UL;
        int32_t *l_537 = &l_403;
        int i;
        for (i = 0; i < 4; i++)
            l_410[i] = 0x759D44FEL;
        l_357 = l_356;
        for (g_128 = 0; (g_128 <= 0); g_128 += 1)
        {
            int32_t l_367[3][9][8] = {{{0L,0L,0xBD81919BL,1L,(-1L),0L,0x5BAE596AL,0x85A9F623L},{1L,0x8A444AF9L,6L,1L,0xB61AD762L,0x45419E4FL,1L,0x85A9F623L},{0x8A444AF9L,0x5BAE596AL,0x39E9BDD9L,1L,0x3856E529L,0L,5L,0L},{6L,0x39E9BDD9L,(-1L),2L,0x0FEE8E4BL,2L,(-1L),0x39E9BDD9L},{1L,1L,2L,0x8A444AF9L,0L,0x5BAE596AL,0L,0xD65AB089L},{0xB61AD762L,0x3856E529L,0x0FEE8E4BL,0L,1L,1L,0L,0L},{0x45419E4FL,0L,2L,0x5BAE596AL,1L,5L,(-1L),0L},{1L,5L,(-1L),0L,0L,(-1L),5L,1L},{0x85A9F623L,0L,0x39E9BDD9L,0xD65AB089L,0L,0L,1L,1L}},{{0xBD81919BL,(-1L),6L,0xE1F56D0EL,0xD65AB089L,0L,0x5BAE596AL,0L},{0xE0469241L,0L,0xBD81919BL,6L,0x39E9BDD9L,(-1L),2L,0x0FEE8E4BL},{0L,5L,0L,(-1L),0L,5L,0L,0x3856E529L},{1L,0L,0xE0469241L,0xBD81919BL,0x85A9F623L,1L,0x45419E4FL,0xB61AD762L},{0x39E9BDD9L,0x3856E529L,0L,0x982A686BL,0x85A9F623L,0x5BAE596AL,0L,(-1L)},{1L,1L,0xE8A9F10AL,0xB61AD762L,0L,2L,0xE1F56D0EL,0xE1F56D0EL},{0L,0x39E9BDD9L,0x9DBE3394L,0x9DBE3394L,0x39E9BDD9L,0L,0xE8A9F10AL,0x45419E4FL},{0xE0469241L,0x5BAE596AL,1L,0L,0xD65AB089L,0x45419E4FL,1L,0x63233A5FL},{0xBD81919BL,0x8A444AF9L,0x3856E529L,0L,0L,0L,0x85A9F623L,0x45419E4FL}},{{0x85A9F623L,0L,1L,0x9DBE3394L,0L,0xE1F56D0EL,1L,0xE1F56D0EL},{1L,0xB61AD762L,1L,0xB61AD762L,1L,0xE8A9F10AL,0x63233A5FL,(-1L)},{0x45419E4FL,2L,5L,0x982A686BL,1L,1L,0xBD81919BL,0xB61AD762L},{0xB61AD762L,0x5BAE596AL,0x8A444AF9L,0L,0xB61AD762L,2L,0x0F8FDA9CL,0xE0469241L},{0x63233A5FL,6L,5L,0L,1L,0x45419E4FL,0x45419E4FL,1L},{1L,0L,0L,1L,0xE0469241L,0x0F8FDA9CL,2L,0xB61AD762L},{(-1L),1L,0xE0469241L,1L,0x39E9BDD9L,0L,5L,0x63233A5FL},{0x45419E4FL,1L,0x63233A5FL,0L,0L,0x0F8FDA9CL,0x982A686BL,0L},{5L,0L,0L,0x0FEE8E4BL,1L,0x45419E4FL,1L,0x0FEE8E4BL}}};
            uint32_t *l_376 = &g_94;
            int64_t *l_380[5][4][1] = {{{&g_83},{&g_83},{&g_83},{&g_85}},{{&g_83},{&g_83},{&g_83},{&g_83}},{{&g_83},{&g_83},{&g_85},{&g_83}},{{&g_83},{&g_83},{&g_83},{&g_83}},{{&g_83},{&g_85},{&g_83},{&g_83}}};
            struct S0 l_400 = {181};
            union U1 *l_443[5][7][5] = {{{&g_113,&g_113,&g_113,(void*)0,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,(void*)0,&g_113,&g_113,(void*)0},{&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,(void*)0,(void*)0,&g_113}},{{&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,(void*)0,(void*)0,&g_113,(void*)0},{&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,(void*)0,(void*)0,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113}},{{&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,(void*)0,(void*)0,&g_113,(void*)0},{&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,(void*)0,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113}},{{&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,(void*)0,&g_113,&g_113,(void*)0},{&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,(void*)0,(void*)0,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113},{(void*)0,(void*)0,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113}},{{&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113},{(void*)0,(void*)0,&g_113,&g_113,(void*)0},{&g_113,&g_113,&g_113,&g_113,&g_113},{(void*)0,(void*)0,&g_113,(void*)0,(void*)0},{&g_113,&g_113,&g_113,&g_113,&g_113},{(void*)0,&g_113,&g_113,(void*)0,&g_113}}};
            struct S0 **l_459 = &g_240;
            int16_t *l_479[4];
            int32_t *l_505[10][4] = {{&g_172[6][4],&g_2,&l_403,&g_2},{&g_172[6][4],&l_410[0],&g_172[5][9],&g_2},{&g_172[5][9],&g_2,&g_172[5][9],&l_410[0]},{&g_172[6][4],&g_2,&l_403,&g_2},{&g_172[6][4],&l_410[0],&g_172[5][9],&g_2},{&g_172[5][9],&g_2,&g_172[5][9],&l_410[0]},{&g_172[6][4],&g_2,&l_403,&g_2},{&g_172[6][4],&l_410[0],&g_172[5][9],&g_2},{&g_172[5][9],&g_2,&g_172[5][9],&l_410[0]},{&g_172[6][4],&g_2,&l_403,&g_2}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_479[i] = &g_121;
        }
        (*l_537) ^= (safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((((*g_170) ^= ((p_41 | ((safe_sub_func_uint64_t_u_u((+l_382), ((((-1L) ^ ((safe_mul_func_uint8_t_u_u(((((*g_502) ^= ((((l_382 != l_404) , (*g_139)) == 1L) != ((((safe_lshift_func_uint8_t_u_s(((+((safe_mod_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_u((p_41 >= (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((l_357 , 255UL), p_41)) > 0L), g_113.f0))), 3)) | 0xB8L) < p_41), 0x4E7DF0C6L)) || g_45)) < 0x81CBCF88593EF35DLL), 6)) <= 0x3D58L) , l_355) > l_357.f0))) <= p_41) <= 0x5F36B8CD1D795994LL), l_536)) != p_41)) || l_355) || l_410[0]))) < l_409)) == l_536)) == p_41), 15)) > p_41), 0)), l_357.f0)), 0UL)) , l_409) | 4L), l_411[1])), p_41)), g_104.f0));
    }
    else
    {
        union U1 **l_538 = &g_284[7];
        union U1 ***l_539 = &l_538;
        (*l_539) = l_538;
    }
    return g_90;
}







static int16_t func_49(int8_t * p_50, uint8_t * p_51)
{
    uint16_t l_353[6][2] = {{0x5D98L,9UL},{0x5D98L,9UL},{0x5D98L,9UL},{0x5D98L,9UL},{0x5D98L,9UL},{0x5D98L,9UL}};
    int i, j;
    return l_353[1][0];
}







static int8_t * func_52(int32_t p_53, const int8_t * p_54, union U1 p_55)
{
    int8_t **l_136 = (void*)0;
    int8_t *l_138 = &g_90;
    int8_t **l_137[8];
    const int32_t l_143 = 1L;
    uint32_t * const l_157[3][9][9] = {{{(void*)0,&g_94,(void*)0,&g_94,&g_94,(void*)0,&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,(void*)0,&g_94,&g_94},{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94,&g_94,(void*)0,(void*)0,(void*)0,(void*)0,&g_94},{&g_94,(void*)0,(void*)0,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,(void*)0},{(void*)0,&g_94,&g_94,(void*)0,&g_94,&g_94,&g_94,&g_94,&g_94}},{{&g_94,(void*)0,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94},{&g_94,&g_94,(void*)0,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94},{&g_94,(void*)0,&g_94,&g_94,&g_94,&g_94,(void*)0,&g_94,&g_94},{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94,&g_94,&g_94,(void*)0,&g_94,(void*)0,(void*)0},{&g_94,(void*)0,(void*)0,&g_94,(void*)0,(void*)0,&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,(void*)0},{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94}},{{&g_94,&g_94,&g_94,(void*)0,&g_94,&g_94,&g_94,(void*)0,&g_94},{&g_94,(void*)0,&g_94,(void*)0,(void*)0,&g_94,(void*)0,&g_94,&g_94},{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94,(void*)0,&g_94,(void*)0,&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94,&g_94,&g_94,(void*)0,&g_94,&g_94,&g_94},{&g_94,(void*)0,&g_94,(void*)0,&g_94,&g_94,&g_94,&g_94,&g_94},{&g_94,(void*)0,(void*)0,(void*)0,&g_94,&g_94,&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94,&g_94,(void*)0,&g_94,&g_94,(void*)0,&g_94},{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,(void*)0}}};
    int32_t l_180 = 5L;
    int32_t l_214[1];
    uint64_t l_218 = 0x01C7FA8C351D0449LL;
    struct S0 ***l_241[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    union U1 *l_272 = &g_113;
    int32_t l_294[2][9][4] = {{{0xE6417FA2L,0xFACB78F7L,1L,(-4L)},{0x1E9C2AB0L,1L,0xE6417FA2L,0xCE3DAEFCL},{(-5L),8L,0xE749ECA4L,0x564643FCL},{3L,0xA5CE4E5EL,0x76B6C0DDL,0x1EBCF204L},{0xDBB42A02L,1L,1L,1L},{0xA5CE4E5EL,0xE8CD0CBDL,0xCE3DAEFCL,1L},{0L,0x1E9C2AB0L,0xE6417FA2L,0xE8CD0CBDL},{(-4L),0x1E9C2AB0L,(-1L),0xE749ECA4L},{(-4L),(-1L),0x1EBCF204L,1L}},{{0xE6417FA2L,0xE749ECA4L,(-1L),(-9L)},{(-1L),(-7L),(-1L),(-10L)},{0x564643FCL,0xE6417FA2L,3L,0xE8CD0CBDL},{(-1L),0xDBB42A02L,1L,3L},{0xD4895563L,0x1EBCF204L,0x1EBCF204L,0xD4895563L},{0xCF7F315CL,0xFE2A1388L,0xD1ED40AFL,0xE749ECA4L},{0x1EBCF204L,(-7L),8L,(-1L)},{0xE6417FA2L,0x564643FCL,(-9L),(-1L)},{(-1L),(-7L),1L,0xE749ECA4L}}};
    uint16_t *l_311[7][3] = {{&g_159,&g_159,&g_230},{&g_230,&g_230,&g_75},{&g_159,&g_159,&g_230},{&g_230,&g_230,&g_75},{&g_159,&g_159,&g_230},{&g_230,&g_230,&g_75},{&g_159,&g_159,&g_230}};
    uint8_t l_320 = 255UL;
    int64_t l_343 = (-4L);
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_137[i] = &l_138;
    for (i = 0; i < 1; i++)
        l_214[i] = (-6L);
    if ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((!g_128), 6)) , (((void*)0 != p_54) ^ ((g_139 = &g_90) == (g_140 = &g_90)))), 1)), 0L)))
    {
        uint32_t l_146 = 2UL;
        int64_t *l_160[8] = {&g_83,&g_83,&g_85,&g_83,&g_83,&g_85,&g_83,&g_83};
        int i;
        if (((-2L) ^ ((*p_54) || (*g_140))))
        {
            for (g_121 = (-11); (g_121 != (-8)); g_121 = safe_add_func_uint16_t_u_u(g_121, 1))
            {
                if (l_143)
                    break;
            }
        }
        else
        {
            int32_t *l_144 = &g_128;
            int32_t *l_145[8][2][7] = {{{&g_128,(void*)0,&g_128,&g_128,(void*)0,&g_128,&g_128},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_128,&g_128,(void*)0,&g_128,&g_128,(void*)0},{&g_128,(void*)0,&g_128,&g_128,(void*)0,&g_128,&g_128}},{{(void*)0,(void*)0,&g_2,(void*)0,(void*)0,&g_2,(void*)0},{(void*)0,&g_128,&g_128,(void*)0,&g_128,&g_128,(void*)0}},{{&g_128,(void*)0,&g_128,&g_128,(void*)0,&g_128,&g_128},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_128,&g_128,(void*)0,&g_128,&g_128,(void*)0},{&g_128,(void*)0,&g_128,&g_128,(void*)0,&g_128,&g_128}},{{(void*)0,(void*)0,&g_2,(void*)0,(void*)0,&g_2,(void*)0},{(void*)0,&g_128,&g_128,(void*)0,&g_128,&g_128,(void*)0}},{{&g_128,(void*)0,&g_128,&g_128,(void*)0,&g_128,&g_128},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_128,&g_128,(void*)0,&g_128,&g_128,(void*)0},{&g_128,(void*)0,&g_128,&g_128,(void*)0,&g_128,&g_128}}};
            struct S0 *l_150 = &g_104;
            struct S0 **l_149 = &l_150;
            uint16_t *l_151 = &g_75;
            uint64_t *l_153[7][8][4] = {{{&g_123,&g_123,&g_123,&g_123},{&g_123,(void*)0,&g_123,&g_123},{&g_123,&g_123,(void*)0,&g_123},{&g_123,&g_123,(void*)0,&g_123},{&g_123,&g_123,(void*)0,&g_123},{&g_123,&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123,&g_123},{&g_123,(void*)0,&g_123,&g_123}},{{&g_123,&g_123,&g_123,&g_123},{(void*)0,&g_123,(void*)0,&g_123},{&g_123,&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123,&g_123},{(void*)0,&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123,&g_123},{&g_123,(void*)0,&g_123,&g_123}},{{(void*)0,&g_123,(void*)0,&g_123},{&g_123,&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123,&g_123},{(void*)0,&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123,&g_123},{&g_123,(void*)0,(void*)0,&g_123},{(void*)0,&g_123,&g_123,&g_123},{&g_123,(void*)0,&g_123,&g_123}},{{&g_123,&g_123,&g_123,(void*)0},{&g_123,&g_123,&g_123,&g_123},{(void*)0,&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123,&g_123},{&g_123,&g_123,(void*)0,(void*)0},{(void*)0,&g_123,&g_123,&g_123},{&g_123,(void*)0,&g_123,&g_123},{&g_123,&g_123,&g_123,&g_123}},{{&g_123,(void*)0,&g_123,&g_123},{&g_123,&g_123,(void*)0,&g_123},{&g_123,&g_123,(void*)0,&g_123},{&g_123,&g_123,(void*)0,&g_123},{&g_123,&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123,&g_123},{&g_123,(void*)0,&g_123,&g_123},{&g_123,&g_123,&g_123,&g_123}},{{(void*)0,&g_123,(void*)0,&g_123},{&g_123,&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123,&g_123},{(void*)0,&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123,&g_123},{&g_123,(void*)0,&g_123,&g_123},{(void*)0,&g_123,(void*)0,&g_123}},{{&g_123,&g_123,&g_123,&g_123},{&g_123,&g_123,(void*)0,&g_123},{&g_123,&g_123,(void*)0,&g_123},{&g_123,&g_123,&g_123,&g_123},{(void*)0,&g_123,&g_123,(void*)0},{&g_123,(void*)0,(void*)0,&g_123},{&g_123,&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123,&g_123}}};
            const int8_t **l_156[3][2];
            uint16_t *l_158 = &g_159;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_156[i][j] = (void*)0;
            }
            p_53 ^= p_55.f0;
            --l_146;
            (*l_149) = (void*)0;
            (*l_144) = (g_104.f0 |= ((((((p_53 > l_146) != (((*p_54) != l_143) > ((*l_151) ^= 0xB380L))) | g_113.f0) ^ (0xB5F7L | ((*l_158) = (((*l_144) || (!(++g_123))) != (((((((l_156[2][0] != &g_139) , g_92) , l_157[0][2][7]) != l_145[2][1][0]) <= p_55.f0) , 2UL) > 0L))))) , l_160[0]) != &g_83));
        }
    }
    else
    {
        uint16_t *l_167[1][2];
        int32_t l_173 = 0x7A79C0B2L;
        int64_t *l_178 = (void*)0;
        int32_t l_212 = 0xB7464917L;
        int32_t l_217 = 0x296F2049L;
        int32_t l_228 = (-1L);
        union U1 **l_296 = &g_284[5];
        const int8_t l_297 = 0xFFL;
        int32_t l_318[1][4];
        int64_t *l_348 = &g_83;
        struct S0 * const l_349 = &g_104;
        int32_t *l_350 = &l_318[0][2];
        int8_t *l_351[6];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_167[i][j] = &g_75;
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_318[i][j] = 0x76352186L;
        }
        for (i = 0; i < 6; i++)
            l_351[i] = &g_90;
lbl_352:
        for (g_128 = 0; (g_128 != 17); ++g_128)
        {
            const int16_t l_179 = 1L;
            int32_t l_203 = (-1L);
            int16_t l_209 = 0L;
            int32_t l_213 = 0x22300B12L;
            struct S0 l_233[3] = {{214},{214},{214}};
            int32_t l_242[6] = {6L,6L,6L,6L,6L,6L};
            struct S0 ***l_252 = &g_239[1];
            int16_t l_307 = 0x12CEL;
            int i;
            for (g_94 = (-30); (g_94 > 1); g_94 = safe_add_func_int32_t_s_s(g_94, 1))
            {
                uint16_t **l_168 = (void*)0;
                uint16_t **l_169[9] = {(void*)0,&l_167[0][1],(void*)0,(void*)0,&l_167[0][1],(void*)0,(void*)0,&l_167[0][1],(void*)0};
                int32_t l_171 = 1L;
                struct S0 *l_184 = &g_104;
                int32_t l_215 = 1L;
                int32_t l_227 = 9L;
                int32_t l_229 = 0x29C00FFBL;
                union U1 *l_234[4];
                uint8_t *l_305 = &g_98;
                int32_t l_317 = 0L;
                int32_t l_319 = 0L;
                int i;
                for (i = 0; i < 4; i++)
                    l_234[i] = (void*)0;
                if ((((((safe_rshift_func_int8_t_s_s(((g_170 = l_167[0][1]) == &g_159), ((l_180 = (((l_171 ^ ((((g_172[4][8] = 4294967291UL) || g_104.f0) , l_173) > ((((((safe_mod_func_uint32_t_u_u(((((((((g_113.f0 , (safe_rshift_func_uint16_t_u_u(l_171, 5))) , g_159) , (void*)0) != &g_24) , 0UL) > g_128) == l_173) != 0x09919FE5L), 4294967287UL)) > g_75) , &g_85) != l_178) , 4L) >= l_179))) != g_90) < g_98)) , l_143))) || (*p_54)) >= p_55.f0) || p_53) >= g_181[0]))
                {
                    struct S0 l_185 = {140};
                    int32_t l_216[7][3][6] = {{{0xC4373212L,0x11358170L,0x297C0A96L,0x75472284L,0x297C0A96L,0x11358170L},{(-1L),0x0B996A79L,0xAF94333AL,0x64F51604L,0x8F83BE11L,0x275D2521L},{0x297C0A96L,3L,0x02941B66L,0x75472284L,8L,0x75472284L}},{{2L,3L,2L,0x275D2521L,0x8F83BE11L,0x64F51604L},{0x5D6DC47BL,0x0B996A79L,0xC4373212L,0x11358170L,0x297C0A96L,0x75472284L},{0xA3EDBD55L,0x11358170L,0x8F83BE11L,0x11358170L,0xA3EDBD55L,0x275D2521L}},{{0x5D6DC47BL,0x75472284L,0x1FBD920CL,0x275D2521L,0xFDB1AD61L,0x11358170L},{2L,0x11358170L,(-1L),0x75472284L,(-1L),0x11358170L},{0x297C0A96L,0x0B996A79L,0x1FBD920CL,0x64F51604L,0x02941B66L,0x275D2521L}},{{(-1L),3L,0x8F83BE11L,0x75472284L,1L,0x75472284L},{0xC4373212L,3L,0xC4373212L,0x275D2521L,0x02941B66L,0x64F51604L},{0L,0x0B996A79L,2L,0x11358170L,(-1L),0x75472284L}},{{0xFDB1AD61L,0x11358170L,0x02941B66L,0x11358170L,0xFDB1AD61L,0x275D2521L},{0L,0x75472284L,0xAF94333AL,0x275D2521L,0xA3EDBD55L,0x11358170L},{0xC4373212L,0x11358170L,0x297C0A96L,0x75472284L,0x297C0A96L,0x11358170L}},{{(-1L),0x0B996A79L,0xAF94333AL,0x64F51604L,0x8F83BE11L,0x275D2521L},{0x297C0A96L,3L,0x02941B66L,0x75472284L,8L,0x75472284L},{2L,3L,2L,0x275D2521L,0x8F83BE11L,0x64F51604L}},{{0x5D6DC47BL,0x0B996A79L,0xC4373212L,0x11358170L,0x297C0A96L,0x75472284L},{0xA3EDBD55L,0x11358170L,0x8F83BE11L,0x11358170L,0xA3EDBD55L,0x275D2521L},{0x5D6DC47BL,0x75472284L,0x1FBD920CL,0x275D2521L,0xFDB1AD61L,0x11358170L}}};
                    uint64_t *l_253 = &g_123;
                    uint64_t **l_254 = &l_253;
                    int32_t *l_301[3][8] = {{&l_213,&l_203,&l_213,&l_203,&l_213,&l_203,&l_213,&l_203},{&l_213,&l_203,&l_213,&l_203,&l_213,&l_203,&l_213,&l_203},{&l_213,&l_203,&l_213,&l_203,&l_213,&l_203,&l_213,&l_203}};
                    int i, j, k;
                    if (((safe_mod_func_int16_t_s_s(((l_184 == (l_185 , &g_104)) ^ 0x715622FD341E3A30LL), ((p_55.f0 | (1UL && (((safe_rshift_func_uint16_t_u_s(0UL, ((*l_184) , ((safe_mul_func_uint8_t_u_u(p_55.f2, (-1L))) & (-1L))))) != 0x81DAL) ^ l_180))) , p_55.f0))) > 1UL))
                    {
                        int32_t *l_202[4] = {&g_172[3][0],&g_172[3][0],&g_172[3][0],&g_172[3][0]};
                        uint32_t *l_210 = &g_211;
                        int i;
                        l_185.f0 |= ((safe_mul_func_int16_t_s_s((((((l_212 &= ((safe_sub_func_int16_t_s_s((safe_mul_func_uint32_t_u_u((p_53 == (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((p_55.f0 <= (l_203 |= (safe_sub_func_int32_t_s_s((l_171 = 1L), g_83)))), 0)), (!p_53)))), (p_53 <= ((safe_add_func_int8_t_s_s(0L, (((*l_210) = ((((((safe_div_func_uint8_t_u_u(l_173, 0xF8L)) < 0x4978L) , g_128) > p_55.f2) ^ l_209) , l_173)) , g_159))) == p_55.f2)))), g_123)) , p_55.f0)) < p_55.f0) && 6L) | (*g_170)) == p_55.f2), 0x118CL)) != g_128);
                        --l_218;
                        p_53 |= l_214[0];
                        if (g_104.f0)
                            break;
                    }
                    else
                    {
                        int32_t *l_221 = (void*)0;
                        int32_t *l_222 = &l_203;
                        int32_t *l_223 = &g_172[2][8];
                        int32_t *l_224 = &g_172[4][8];
                        int32_t *l_225 = &l_180;
                        int32_t *l_226[2][2][2] = {{{&l_214[0],&l_214[0]},{&l_214[0],&l_214[0]}},{{&l_214[0],&l_214[0]},{&l_214[0],&l_214[0]}}};
                        union U1 **l_235 = &l_234[1];
                        int i, j, k;
                        --g_230;
                        (*l_184) = l_233[1];
                        if (p_55.f2)
                            continue;
                        (*l_235) = l_234[1];
                    }
                    for (g_123 = 2; (g_123 != 42); g_123 = safe_add_func_int32_t_s_s(g_123, 8))
                    {
                        if (p_55.f2)
                            break;
                        l_241[7] = g_238;
                        if (l_242[1])
                            continue;
                    }
                    if ((safe_rshift_func_int8_t_s_s((((*g_170) > ((!g_97) >= (safe_lshift_func_uint16_t_u_u(l_216[4][2][3], (safe_sub_func_int8_t_s_s(((((safe_sub_func_int32_t_s_s(1L, (l_252 != (void*)0))) > l_185.f0) , (((*l_254) = l_253) != (void*)0)) , 1L), p_55.f0)))))) > g_172[6][9]), 2)))
                    {
                        struct S0 l_255 = {-206};
                        uint8_t *l_260[10][1] = {{&g_92},{&g_92},{&g_98},{&g_92},{&g_98},{&g_92},{&g_92},{&g_98},{&g_92},{&g_98}};
                        int16_t *l_261 = (void*)0;
                        int16_t *l_268[2][8] = {{&g_97,&l_209,&g_97,(void*)0,&g_97,&g_97,(void*)0,&g_97},{&l_209,&l_209,&g_97,(void*)0,&l_209,(void*)0,&g_97,&l_209}};
                        const int64_t *l_270 = &g_271;
                        const int64_t **l_269 = &l_270;
                        int i, j;
                        l_255 = (*l_184);
                        if (g_75)
                            continue;
                        g_104.f0 ^= (safe_mul_func_int8_t_s_s((l_185 , (l_173 ^= ((safe_lshift_func_uint16_t_u_u(((l_229 |= 0xF9L) || (p_55.f2 | (-1L))), l_179)) , (((*l_138) = ((((((((*l_269) = (((l_261 == (void*)0) <= ((safe_mul_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(65533UL, (l_255.f0 ^= (-5L)))), l_180)) , 0x48L), (*g_139))) == 3UL)) , (void*)0)) == (void*)0) & 0xB2L) , 9L) , p_53) == (-8L)) , l_209)) , 0x8BL)))), l_171));
                    }
                    else
                    {
                        union U1 **l_273 = &l_234[3];
                        int16_t *l_289[5] = {&l_209,&l_209,&l_209,&l_209,&l_209};
                        int32_t l_295 = (-2L);
                        int32_t *l_298 = &l_213;
                        int32_t **l_299[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_299[i] = &l_298;
                        (*l_273) = l_272;
                        (*l_298) = (p_55.f0 && ((((safe_sub_func_int64_t_s_s((-1L), (safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(0xB3L)), (safe_mul_func_int16_t_s_s((g_283 == ((safe_mul_func_uint16_t_u_u((l_216[0][1][5] |= (safe_div_func_uint64_t_u_u((g_181[0] > (g_159 > ((l_228 = 0L) >= ((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_294[0][4][2], l_295)), (-1L))) ^ 0xBFFB300FBA2EC1DALL)))), g_104.f0))), g_230)) , l_296)), l_297)))), l_242[3])))) | l_215) | p_55.f2) != l_229));
                        g_300 = &l_216[0][1][5];
                    }
                    l_173 = (l_216[3][2][2] , (l_229 || (l_214[0] ^= (*p_54))));
                }
                else
                {
                    uint8_t *l_304 = &g_98;
                    struct S0 l_312 = {-56};
                    for (l_215 = 0; (l_215 >= 0); l_215 = safe_add_func_int8_t_s_s(l_215, 2))
                    {
                        int32_t *l_306[6] = {&l_180,&l_180,&l_203,&l_180,&l_180,&l_203};
                        int i;
                        l_217 |= ((l_304 != l_305) > 0x34L);
                        g_308++;
                    }
                    p_53 = (l_311[0][0] != (void*)0);
                    (*l_184) = l_312;
                    for (g_123 = (-7); (g_123 == 30); g_123 = safe_add_func_int32_t_s_s(g_123, 7))
                    {
                        int32_t *l_315 = &l_173;
                        int32_t *l_316[5];
                        int32_t **l_323[8][8] = {{(void*)0,&l_316[0],&l_316[4],(void*)0,&l_316[1],&l_315,&l_315,&l_316[1]},{(void*)0,&l_316[0],&l_316[0],(void*)0,&l_315,&l_315,&g_300,&l_316[1]},{(void*)0,&l_316[0],&l_316[4],(void*)0,&l_316[1],&l_315,&l_315,&l_316[1]},{(void*)0,&l_316[0],&l_316[0],(void*)0,&l_315,&l_315,&g_300,&l_316[1]},{(void*)0,&l_316[0],&l_316[4],(void*)0,&l_316[1],&l_315,&l_315,&l_316[1]},{(void*)0,&l_316[0],&l_316[0],(void*)0,&l_315,&l_315,&g_300,&l_316[1]},{(void*)0,&l_316[0],&l_316[4],(void*)0,&l_316[1],&l_315,&l_315,&l_316[1]},{(void*)0,&l_316[0],&l_316[0],(void*)0,&l_315,&l_315,&g_300,&l_316[1]}};
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_316[i] = (void*)0;
                        ++l_320;
                        if (l_233[1].f0)
                            continue;
                        (*l_315) = ((**g_238) != &l_312);
                        g_300 = &l_214[0];
                    }
                }
            }
            for (l_320 = (-4); (l_320 < 29); ++l_320)
            {
                (*g_283) = (*l_296);
            }
            if (p_55.f2)
                continue;
            p_53 ^= 9L;
        }
        if (((safe_sub_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((+(((*l_350) = (l_214[0] = ((safe_rshift_func_uint16_t_u_u((p_55.f2 <= ((safe_div_func_uint16_t_u_u(((l_318[0][2] >= (l_173 , (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((((((safe_mod_func_uint8_t_u_u(l_343, ((l_311[3][0] != ((g_181[0] &= l_214[0]) , (l_143 , l_167[0][1]))) && ((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(((*l_348) |= (l_217 , 6L)), l_343)) || l_180), 10)) , (*g_139))))) & 0xBBEFL) >= 0x80L) , l_349) == (**g_238)), 6)), 6)))) <= p_55.f2), p_53)) > (-8L))), 6)) && g_159))) , g_128)), p_55.f0)), 0xDC6FD7BD41EC2257LL)), 0xE18FL)) == 0x4AL))
        {
            return l_351[3];
        }
        else
        {
            if (g_104.f0)
                goto lbl_352;
        }
    }
    return &g_90;
}







static int16_t func_57(int32_t p_58, uint32_t p_59, int8_t p_60, int16_t p_61)
{
    int32_t **l_67 = (void*)0;
    int32_t *l_69 = &g_2;
    int32_t **l_68 = &l_69;
    uint16_t l_70[9][9] = {{65535UL,0UL,65529UL,0xD72DL,65527UL,0x7010L,0xE86CL,0UL,65535UL},{65535UL,1UL,0xD78FL,65535UL,0x4EE8L,65532UL,0x0A93L,0xD7B9L,6UL},{65530UL,0xD7B9L,0xB4C0L,1UL,0xAB13L,1UL,0xB4C0L,0xD7B9L,65530UL},{0x0A5FL,65529UL,0xD7B9L,65535UL,0xBB77L,0x961FL,0xD1FAL,0UL,0x0A93L},{0xD7B9L,65529UL,0x961FL,65535UL,0x0A5FL,65535UL,0UL,0xB4C0L,0x90D9L},{0x0A5FL,0xBB77L,0xD1FAL,6UL,0x961FL,0xD72DL,0x90D9L,0xD72DL,0x961FL},{65530UL,0xD1FAL,0xD1FAL,65530UL,65529UL,0x1F5FL,0x0A5FL,0x0A93L,0x7010L},{65535UL,0x98C7L,0x961FL,0x0A93L,0x1F5FL,0xE86CL,0x4EE8L,65535UL,65529UL},{0xB4C0L,65529UL,6UL,0x4EE8L,0xD78FL,65527UL,65535UL,0x0A5FL,0x961FL}};
    uint32_t l_118[4];
    int i, j;
    for (i = 0; i < 4; i++)
        l_118[i] = 0x92CDF469L;
    (*l_68) = &p_58;
    for (p_59 = 0; (p_59 <= 8); p_59 += 1)
    {
        uint16_t *l_73 = &l_70[3][4];
        uint16_t *l_74 = &g_75;
        int64_t *l_82 = &g_83;
        int64_t *l_84 = &g_85;
        uint8_t *l_91 = &g_92;
        int32_t l_93 = (-9L);
        int16_t *l_95 = (void*)0;
        int16_t *l_96[5][5][3] = {{{(void*)0,&g_97,&g_97},{&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97},{(void*)0,&g_97,(void*)0},{&g_97,&g_97,&g_97}},{{&g_97,&g_97,(void*)0},{&g_97,&g_97,&g_97},{&g_97,(void*)0,(void*)0},{&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97}},{{&g_97,&g_97,&g_97},{(void*)0,&g_97,&g_97},{&g_97,(void*)0,&g_97},{&g_97,(void*)0,&g_97},{(void*)0,&g_97,&g_97}},{{&g_97,&g_97,&g_97},{&g_97,(void*)0,&g_97},{&g_97,&g_97,(void*)0},{&g_97,&g_97,&g_97},{&g_97,&g_97,(void*)0}},{{&g_97,(void*)0,&g_97},{&g_97,&g_97,(void*)0},{&g_97,&g_97,&g_97},{(void*)0,(void*)0,&g_97},{&g_97,(void*)0,&g_97}}};
        const struct S0 l_119[3][3][7] = {{{{-167},{-61},{7},{173},{173},{7},{-61}},{{49},{-104},{106},{-104},{49},{-104},{106}},{{173},{173},{7},{-61},{-167},{-167},{-61}}},{{{-61},{-154},{-61},{-104},{-61},{-154},{-61}},{{173},{-61},{-61},{173},{-167},{7},{7}},{{49},{-154},{106},{-154},{49},{-154},{106}}},{{{-167},{173},{-61},{-61},{173},{-167},{7}},{{-61},{-104},{-61},{-154},{-61},{-104},{-61}},{{-167},{-61},{7},{173},{173},{7},{-61}}}};
        int32_t l_124 = (-1L);
        int16_t l_125 = (-6L);
        int i, j, k;
        if ((((safe_lshift_func_uint16_t_u_s(((*l_74) = ((*l_73) = p_59)), (g_98 = (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((((*l_84) &= ((*l_82) = g_24)) != ((((safe_lshift_func_int8_t_s_s(p_58, (safe_add_func_uint16_t_u_u((g_90 ^ g_24), (g_97 ^= ((l_91 != &g_92) && (g_94 |= ((l_93 == p_60) != g_2)))))))) && 8UL) >= g_2) & 0UL)) > p_59), 4)), 0x8827L))))) , 0x80CEF6D7L) , 0xCACAAAB2L))
        {
            uint32_t l_120 = 0x2B7690A4L;
            uint64_t *l_122[5][1];
            uint32_t *l_126 = &g_94;
            int32_t *l_127 = &g_128;
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_122[i][j] = &g_123;
            }
            (**l_68) = p_58;
            (*l_68) = &p_58;
            (*l_127) = ((((*l_126) = ((~((safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s((7L < (g_104 , (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u((l_124 = (safe_rshift_func_int16_t_s_u((g_92 && (safe_add_func_int32_t_s_s((((*l_69) &= ((((p_61 & (l_93 = ((g_121 = (g_113 , (((safe_mul_func_uint16_t_u_u(((5UL | (safe_sub_func_uint32_t_u_u((((l_118[3] , (l_119[1][1][2] , l_73)) != (void*)0) >= 0x0A908536L), g_24))) == g_2), l_120)) , (void*)0) == &g_75))) , l_120))) && p_61) >= g_97) <= g_75)) , 0x0493B4F4L), 0x2087D55BL))), 4))), 0xFFL)) < l_125), p_60)))), p_59)), l_125)) < 1L)) ^ 1L)) && l_124) >= g_123);
        }
        else
        {
            if (p_58)
                break;
            return p_61;
        }
        return g_94;
    }
    return g_98;
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
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_113.f0, "g_113.f0", print_hash_value);
    transparent_crc(g_113.f2, "g_113.f2", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_172[i][j], "g_172[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_181[i], "g_181[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_682, "g_682", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_928, "g_928", print_hash_value);
    transparent_crc(g_958, "g_958", print_hash_value);
    transparent_crc(g_1136, "g_1136", print_hash_value);
    transparent_crc(g_1302, "g_1302", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
