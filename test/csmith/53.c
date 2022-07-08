// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 4E270E43
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
   signed f0 : 25;
   uint32_t f1;
   uint32_t f2;
   int64_t f3;
   uint64_t f4;
};

union U1 {
   int32_t f0;
   uint32_t f1;
   uint16_t f2;
   int16_t f3;
   uint16_t f4;
};

union U2 {
   uint32_t f0;
   int8_t * const f1;
   uint8_t f2;
};

union U3 {
   const int32_t f0;
   int8_t f1;
   signed f2 : 8;
};


static int32_t g_4 = 1L;
static int64_t g_8 = 0xB372BA29F58382BDLL;
static int64_t g_9 = 0L;
static union U2 g_19 = {0x3B16AAC8L};
static int8_t g_51[2][7][8] = {{{4L,1L,(-1L),0xCBL,0x36L,0x7BL,0x53L,1L},{0x53L,0x16L,(-1L),5L,5L,(-1L),0x16L,0x53L},{0x36L,0x4FL,4L,0xEDL,8L,1L,5L,(-1L)},{4L,0xCBL,8L,7L,0xEDL,1L,0xEDL,7L},{0x16L,0x4FL,0x16L,4L,1L,(-1L),0xCBL,0x36L},{7L,0x16L,0xEDL,5L,4L,0x7BL,0xCBL,0xCBL},{0xEDL,0xCBL,4L,4L,0xCBL,0xEDL,(-1L),1L}},{{0x36L,5L,1L,(-1L),0x53L,0x4FL,5L,0x7BL},{1L,1L,0x4FL,(-1L),4L,(-1L),0x4FL,1L},{5L,4L,8L,4L,0x7BL,0x16L,1L,0xCBL},{4L,7L,1L,8L,5L,1L,1L,5L},{0x16L,8L,8L,0x16L,1L,0x7BL,0x4FL,0xEDL},{1L,0x7BL,0x4FL,0xEDL,(-1L),0x36L,5L,7L},{(-1L),0x7BL,1L,0x53L,1L,0x7BL,(-1L),4L}}};
static int64_t g_98 = 0x9657A47622B46159LL;
static int32_t g_101 = 0L;
static union U3 g_118 = {-1L};
static union U3 **g_123 = (void*)0;
static uint16_t g_127 = 65535UL;
static int32_t *g_130 = (void*)0;
static int32_t **g_129[5][9][5] = {{{(void*)0,&g_130,&g_130,&g_130,(void*)0},{&g_130,&g_130,(void*)0,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,(void*)0},{&g_130,&g_130,&g_130,&g_130,&g_130},{(void*)0,&g_130,&g_130,(void*)0,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{(void*)0,&g_130,&g_130,&g_130,&g_130}},{{(void*)0,&g_130,&g_130,&g_130,&g_130},{(void*)0,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,(void*)0},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,(void*)0}},{{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,(void*)0,&g_130,&g_130,&g_130},{&g_130,(void*)0,&g_130,&g_130,&g_130},{&g_130,&g_130,(void*)0,&g_130,&g_130},{&g_130,&g_130,&g_130,(void*)0,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{(void*)0,&g_130,&g_130,(void*)0,&g_130},{&g_130,&g_130,&g_130,(void*)0,&g_130}},{{(void*)0,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,(void*)0,&g_130,&g_130},{&g_130,&g_130,&g_130,(void*)0,&g_130},{&g_130,&g_130,&g_130,&g_130,(void*)0},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,(void*)0,&g_130,(void*)0},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130}},{{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,(void*)0,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{(void*)0,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,(void*)0,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130}}};
static int32_t **g_132 = &g_130;
static uint32_t g_172 = 1UL;
static uint8_t g_207 = 0x6CL;
static int32_t g_220 = 0x1E51D77EL;
static union U0 g_221[4] = {{1L},{1L},{1L},{1L}};
static union U0 g_225 = {0L};
static uint32_t g_256 = 0x12B7A87CL;
static int8_t *g_278 = &g_118.f1;
static int8_t **g_277 = &g_278;
static union U3 g_318 = {0L};
static union U3 *g_317[9] = {(void*)0,&g_118,(void*)0,&g_118,(void*)0,&g_118,(void*)0,&g_118,(void*)0};
static int32_t g_322[1] = {0xC5E3DBCBL};
static int64_t *g_325 = (void*)0;
static uint64_t g_331[6][9][4] = {{{18446744073709551615UL,0x288E19E708A6C820LL,0xCA3F76A0829CAD8DLL,0x5DE38B6359D4CD97LL},{0xC906127FC3194414LL,1UL,0xFC49E5D6AE529348LL,0x3E57C5767386948DLL},{18446744073709551608UL,0xB38EFC058D70E6E5LL,0x503FEBBA80519976LL,9UL},{0x8780C726BA6022C0LL,0xFF9F1366071BA42BLL,0x246F23CDF8C7CDE3LL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7D3CB665F2AC9A69LL},{0UL,0UL,0x11E67CD38FB024D1LL,0x85ED67904A97B9DALL},{5UL,4UL,18446744073709551612UL,0UL},{18446744073709551615UL,0x803D8013A0E75656LL,18446744073709551612UL,1UL},{5UL,18446744073709551608UL,0x11E67CD38FB024D1LL,18446744073709551614UL}},{{0UL,0xCA3F76A0829CAD8DLL,18446744073709551615UL,18446744073709551614UL},{18446744073709551615UL,18446744073709551614UL,0x246F23CDF8C7CDE3LL,0UL},{0x8780C726BA6022C0LL,0UL,0x503FEBBA80519976LL,18446744073709551607UL},{18446744073709551608UL,0x8780C726BA6022C0LL,0xFC49E5D6AE529348LL,18446744073709551609UL},{0xC906127FC3194414LL,0x0C20C84641AE8198LL,0xCA3F76A0829CAD8DLL,5UL},{18446744073709551615UL,0x36DB8EB0A9258507LL,0UL,18446744073709551615UL},{0xC7C49730C58B3503LL,0x11E67CD38FB024D1LL,0x03FF2FEEC0DB6353LL,0xA3651EB783A40949LL},{0x7760F8A779C40D8BLL,4UL,18446744073709551608UL,0UL},{1UL,0xE64E5E3198188E18LL,1UL,0UL}},{{0xB1262438F264237ALL,0x70DBCD7813B1EEC1LL,18446744073709551615UL,0UL},{1UL,0x3037DA373C3403F9LL,5UL,18446744073709551615UL},{18446744073709551615UL,0x70DBCD7813B1EEC1LL,0xFC49E5D6AE529348LL,0UL},{0x9804745923314959LL,0UL,9UL,0UL},{1UL,0x3489422A714BF167LL,0UL,0xC906127FC3194414LL},{5UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0x288E19E708A6C820LL,0xF92D749A86774CF1LL,0xFF9F1366071BA42BLL,18446744073709551615UL},{0x3489422A714BF167LL,0x246F23CDF8C7CDE3LL,1UL,0xEC21FAFC5D8A8222LL},{18446744073709551612UL,5UL,18446744073709551608UL,0x03FF2FEEC0DB6353LL}},{{0xE64E5E3198188E18LL,4UL,18446744073709551606UL,0xC7C49730C58B3503LL},{0x3B1EAC5E9F970DCFLL,0x5DE38B6359D4CD97LL,0UL,0xB47B965648990E4ELL},{0x503FEBBA80519976LL,4UL,0x7D3CB665F2AC9A69LL,0x7D3CB665F2AC9A69LL},{0xA3651EB783A40949LL,0xA3651EB783A40949LL,0x79C7C63CFC6834EALL,0UL},{0x70DBCD7813B1EEC1LL,0xC7C49730C58B3503LL,0UL,0x803D8013A0E75656LL},{9UL,0x61153BA3348672F2LL,18446744073709551615UL,0UL},{18446744073709551615UL,0x61153BA3348672F2LL,0x3037DA373C3403F9LL,0x803D8013A0E75656LL},{0x61153BA3348672F2LL,0xC7C49730C58B3503LL,4UL,0UL},{18446744073709551607UL,0xA3651EB783A40949LL,0xCA3F76A0829CAD8DLL,0x7D3CB665F2AC9A69LL}},{{18446744073709551612UL,4UL,18446744073709551615UL,0xB47B965648990E4ELL},{18446744073709551615UL,0x5DE38B6359D4CD97LL,18446744073709551610UL,0xC7C49730C58B3503LL},{0xEC21FAFC5D8A8222LL,4UL,0x3E57C5767386948DLL,0x03FF2FEEC0DB6353LL},{0x7D3CB665F2AC9A69LL,5UL,0x3B1EAC5E9F970DCFLL,0xEC21FAFC5D8A8222LL},{1UL,0x246F23CDF8C7CDE3LL,18446744073709551614UL,18446744073709551615UL},{18446744073709551607UL,0xF92D749A86774CF1LL,0xB38EFC058D70E6E5LL,18446744073709551615UL},{0UL,18446744073709551615UL,0x7760F8A779C40D8BLL,0xC906127FC3194414LL},{0xB38EFC058D70E6E5LL,0x3489422A714BF167LL,18446744073709551608UL,0UL},{18446744073709551615UL,0UL,0UL,0UL}},{{0xADC69FB1676A1479LL,0x70DBCD7813B1EEC1LL,0xFEDC7FF37F0EED4FLL,18446744073709551615UL},{0x283267B2CED66CE1LL,0x3037DA373C3403F9LL,0xB6C9B942FDE634C9LL,4UL},{0UL,0x258004DF9684B9FDLL,18446744073709551615UL,0UL},{18446744073709551615UL,0x85ED67904A97B9DALL,0xD4B8A7D517D0DB72LL,18446744073709551615UL},{18446744073709551606UL,18446744073709551608UL,18446744073709551615UL,0x3E57C5767386948DLL},{18446744073709551615UL,0UL,1UL,0xFF9F1366071BA42BLL},{0xFC49E5D6AE529348LL,1UL,0UL,0UL},{0x3E57C5767386948DLL,0x283267B2CED66CE1LL,18446744073709551606UL,18446744073709551615UL},{5UL,0x9F934DA77586BB25LL,0xADC69FB1676A1479LL,0xA3651EB783A40949LL}}};
static int64_t **g_346 = (void*)0;
static union U1 g_464 = {-1L};
static union U1 *g_484 = &g_464;
static union U2 g_531[7][8] = {{{4294967295UL},{0xFAA6AFB3L},{4294967295UL},{0UL},{0xFAA6AFB3L},{0UL},{0UL},{0xFAA6AFB3L}},{{0xFAA6AFB3L},{0UL},{0UL},{0xFAA6AFB3L},{0UL},{4294967295UL},{0xFAA6AFB3L},{4294967295UL}},{{0xFAA6AFB3L},{7UL},{0x11C32D83L},{7UL},{0xFAA6AFB3L},{0x11C32D83L},{8UL},{8UL}},{{4294967295UL},{7UL},{0UL},{0UL},{7UL},{4294967295UL},{0UL},{7UL}},{{8UL},{0UL},{0UL},{8UL},{0UL},{0UL},{8UL},{4294967295UL}},{{7UL},{0xFAA6AFB3L},{0x11C32D83L},{8UL},{8UL},{0x11C32D83L},{0xFAA6AFB3L},{7UL}},{{4294967295UL},{8UL},{0UL},{0xA35BEF29L},{4294967295UL},{0xA35BEF29L},{0x11C32D83L},{4294967295UL}}};
static uint8_t g_605 = 255UL;
static int64_t g_623 = 0xB53286E28239E544LL;
static uint16_t g_660 = 1UL;
static union U2 g_734 = {0x9220AC3EL};
static int64_t ***g_845[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int16_t * const g_902 = &g_464.f3;
static int16_t *g_903 = &g_464.f3;
static int16_t *g_905 = (void*)0;
static int8_t ***g_942 = &g_277;
static int8_t ****g_941 = &g_942;
static int16_t g_973 = (-1L);
static const union U3 g_987[6][5] = {{{-5L},{0xDB02C7F6L},{-5L},{0xDB02C7F6L},{-5L}},{{0x58C8A480L},{0x58C8A480L},{0x58C8A480L},{0x58C8A480L},{0x58C8A480L}},{{-5L},{0xDB02C7F6L},{-5L},{0xDB02C7F6L},{-5L}},{{0x58C8A480L},{0x58C8A480L},{0x58C8A480L},{0x58C8A480L},{0x58C8A480L}},{{-5L},{0xDB02C7F6L},{-5L},{0xDB02C7F6L},{-5L}},{{0x58C8A480L},{0x58C8A480L},{0x58C8A480L},{0x58C8A480L},{0x58C8A480L}}};
static const union U3 g_989 = {0x3E068F9AL};
static const union U3 *g_988 = &g_989;
static int32_t *g_1001 = &g_220;
static union U1 *g_1134 = &g_464;
static uint16_t g_1193 = 0x945DL;
static uint32_t g_1280 = 0xB86D4938L;
static int32_t *g_1498 = (void*)0;
static union U3 ***g_1553 = &g_123;
static union U3 ****g_1552 = &g_1553;
static union U3 *****g_1551 = &g_1552;
static int32_t g_1556[9][8][3] = {{{(-1L),0x48970100L,0xD402D8C1L},{0xE98C20A5L,0x9A9FB32CL,0x20C4B8AAL},{0x8FCAD6AFL,(-5L),0x055297D4L},{0xE98C20A5L,0x039D1005L,0x9A9FB32CL},{(-1L),0x055297D4L,(-1L)},{5L,0x79630FE8L,0x79630FE8L},{0xE470222BL,0L,(-1L)},{0x13AE8712L,(-7L),0x9A9FB32CL}},{{0L,2L,0x055297D4L},{0x7C15AF81L,0x7433AFB5L,0x20C4B8AAL},{0x82411BBAL,2L,0xD402D8C1L},{(-1L),(-7L),8L},{(-6L),0L,0L},{0x0FF3C29DL,0x79630FE8L,0x039D1005L},{(-6L),0x055297D4L,0L},{(-1L),0x039D1005L,(-3L)}},{{0x82411BBAL,(-5L),(-5L)},{0x7C15AF81L,0x9A9FB32CL,(-3L)},{0L,0x48970100L,0L},{0x13AE8712L,0L,0x039D1005L},{0xE470222BL,(-7L),0L},{5L,0L,8L},{(-1L),0x48970100L,0xD402D8C1L},{0xE98C20A5L,0x9A9FB32CL,0x20C4B8AAL}},{{0x8FCAD6AFL,(-5L),0x055297D4L},{0xE98C20A5L,0x039D1005L,0x9A9FB32CL},{(-1L),0x055297D4L,(-1L)},{5L,0x79630FE8L,0x79630FE8L},{0xE470222BL,0L,(-1L)},{0x13AE8712L,(-7L),0x9A9FB32CL},{0L,2L,0x055297D4L},{0x7C15AF81L,0x7433AFB5L,0x20C4B8AAL}},{{0x82411BBAL,2L,0xD402D8C1L},{(-1L),(-7L),8L},{(-6L),0L,0L},{0x0FF3C29DL,0x79630FE8L,0x039D1005L},{(-6L),0x055297D4L,0L},{(-1L),0x039D1005L,(-3L)},{0x82411BBAL,(-5L),(-5L)},{0x7C15AF81L,0x9A9FB32CL,(-3L)}},{{0L,0x48970100L,0L},{0x13AE8712L,0L,0x039D1005L},{0xE470222BL,(-7L),0L},{5L,0L,8L},{(-1L),0x48970100L,0xD402D8C1L},{0xE98C20A5L,0x9A9FB32CL,0x20C4B8AAL},{0x8FCAD6AFL,(-5L),0x055297D4L},{0xE98C20A5L,0x039D1005L,0x9A9FB32CL}},{{(-1L),0x055297D4L,(-1L)},{5L,0x79630FE8L,0x79630FE8L},{2L,7L,0L},{0x20C4B8AAL,(-1L),1L},{0L,0xBF54390AL,0x103F9AC2L},{0L,(-1L),(-6L)},{(-5L),0xBF54390AL,(-1L)},{0x7433AFB5L,(-1L),(-1L)}},{{0xD402D8C1L,7L,1L},{6L,0x79979B8CL,0xCB3C95ECL},{0xD402D8C1L,0x103F9AC2L,7L},{0x7433AFB5L,0xCB3C95ECL,0xB3B32498L},{(-5L),1L,1L},{0L,1L,0xB3B32498L},{0L,(-7L),7L},{0x20C4B8AAL,1L,0xCB3C95ECL}},{{2L,0L,1L},{0x79630FE8L,1L,(-1L)},{(-7L),(-7L),(-1L)},{8L,1L,(-6L)},{0xFBE4270BL,1L,0x103F9AC2L},{8L,0xCB3C95ECL,1L},{(-7L),0x103F9AC2L,0L},{0x79630FE8L,0x79979B8CL,0x79979B8CL}}};
static uint16_t g_1564[4][2][4] = {{{0UL,0xC1ABL,0xC1ABL,0UL},{0xC1ABL,0UL,0x6E0CL,65532UL}},{{0xC1ABL,0x6E0CL,0xC1ABL,0x1E06L},{0UL,65532UL,0x1E06L,0x1E06L}},{{0x6E0CL,0x6E0CL,0UL,65532UL},{65532UL,0UL,0UL,0UL}},{{0x6E0CL,0xC1ABL,0x1E06L,0UL},{0UL,0xC1ABL,0xC1ABL,0UL}}};
static uint8_t *g_1652[7][9][4] = {{{&g_605,&g_734.f2,&g_605,&g_531[0][3].f2},{&g_734.f2,&g_531[0][3].f2,&g_19.f2,(void*)0},{&g_207,&g_531[0][3].f2,&g_734.f2,&g_531[0][3].f2},{&g_207,&g_531[0][3].f2,&g_734.f2,&g_207},{&g_207,(void*)0,&g_19.f2,&g_734.f2},{&g_734.f2,&g_207,&g_605,&g_531[0][3].f2},{&g_605,&g_531[0][3].f2,&g_605,(void*)0},{(void*)0,&g_207,&g_531[0][3].f2,&g_605},{&g_605,&g_531[0][3].f2,&g_734.f2,&g_19.f2}},{{&g_734.f2,(void*)0,(void*)0,&g_207},{(void*)0,&g_605,&g_207,&g_207},{&g_734.f2,(void*)0,&g_207,&g_19.f2},{&g_531[0][3].f2,&g_531[0][3].f2,&g_734.f2,&g_605},{&g_207,&g_207,&g_605,(void*)0},{&g_19.f2,&g_531[0][3].f2,(void*)0,&g_531[0][3].f2},{&g_605,&g_207,&g_605,&g_734.f2},{&g_207,(void*)0,&g_734.f2,&g_207},{&g_207,&g_531[0][3].f2,&g_19.f2,&g_531[0][3].f2}},{{&g_207,&g_531[0][3].f2,&g_734.f2,(void*)0},{&g_207,&g_531[0][3].f2,&g_605,&g_531[0][3].f2},{&g_605,&g_734.f2,(void*)0,&g_19.f2},{&g_19.f2,&g_734.f2,&g_605,&g_605},{&g_207,&g_531[0][3].f2,&g_734.f2,(void*)0},{&g_531[0][3].f2,&g_531[0][3].f2,(void*)0,&g_734.f2},{&g_19.f2,&g_531[0][3].f2,&g_207,&g_605},{(void*)0,&g_531[0][3].f2,&g_605,&g_734.f2},{&g_734.f2,&g_531[0][3].f2,&g_734.f2,&g_531[0][3].f2}},{{&g_207,&g_19.f2,&g_207,&g_734.f2},{&g_605,&g_531[0][3].f2,&g_605,&g_605},{&g_605,&g_605,&g_605,&g_19.f2},{&g_734.f2,(void*)0,&g_734.f2,&g_207},{&g_207,&g_734.f2,&g_734.f2,(void*)0},{&g_605,&g_19.f2,&g_734.f2,(void*)0},{&g_207,&g_531[0][3].f2,&g_734.f2,&g_207},{&g_734.f2,&g_207,&g_605,&g_531[0][3].f2},{&g_605,&g_531[0][3].f2,&g_605,(void*)0}},{{&g_605,(void*)0,&g_207,(void*)0},{&g_207,&g_734.f2,&g_734.f2,&g_734.f2},{&g_734.f2,&g_605,&g_605,&g_207},{(void*)0,&g_531[0][3].f2,&g_207,&g_207},{&g_19.f2,&g_605,(void*)0,&g_734.f2},{&g_207,&g_734.f2,&g_19.f2,(void*)0},{&g_734.f2,(void*)0,&g_605,(void*)0},{&g_734.f2,&g_531[0][3].f2,&g_734.f2,&g_531[0][3].f2},{&g_531[0][3].f2,&g_207,&g_207,&g_207}},{{&g_531[0][3].f2,&g_531[0][3].f2,&g_19.f2,(void*)0},{(void*)0,&g_19.f2,&g_605,(void*)0},{(void*)0,&g_734.f2,&g_19.f2,&g_207},{&g_531[0][3].f2,(void*)0,&g_207,&g_19.f2},{&g_531[0][3].f2,&g_605,&g_734.f2,&g_605},{&g_734.f2,&g_531[0][3].f2,&g_605,&g_734.f2},{&g_734.f2,&g_19.f2,&g_19.f2,&g_531[0][3].f2},{&g_207,&g_531[0][3].f2,(void*)0,&g_734.f2},{&g_19.f2,&g_531[0][3].f2,&g_207,&g_605}},{{(void*)0,&g_531[0][3].f2,&g_605,&g_734.f2},{&g_734.f2,&g_531[0][3].f2,&g_734.f2,&g_531[0][3].f2},{&g_207,&g_19.f2,&g_207,&g_734.f2},{&g_605,&g_531[0][3].f2,&g_605,&g_605},{&g_605,&g_605,&g_605,&g_19.f2},{&g_734.f2,(void*)0,&g_734.f2,&g_207},{&g_207,&g_734.f2,&g_734.f2,(void*)0},{&g_605,&g_19.f2,&g_734.f2,(void*)0},{&g_207,&g_531[0][3].f2,&g_734.f2,&g_207}}};
static uint8_t **g_1651[3][3][5] = {{{(void*)0,&g_1652[5][2][3],&g_1652[5][8][3],&g_1652[5][7][3],&g_1652[5][8][3]},{&g_1652[5][7][3],&g_1652[5][7][3],&g_1652[5][7][3],&g_1652[5][7][3],&g_1652[5][7][3]},{(void*)0,&g_1652[5][2][3],&g_1652[5][8][3],&g_1652[5][7][3],&g_1652[5][8][3]}},{{&g_1652[5][7][3],&g_1652[5][7][3],&g_1652[5][7][3],&g_1652[5][7][3],&g_1652[5][7][3]},{(void*)0,&g_1652[5][2][3],&g_1652[5][8][3],&g_1652[5][7][3],&g_1652[5][8][3]},{&g_1652[5][7][3],&g_1652[5][7][3],&g_1652[5][7][3],&g_1652[5][7][3],&g_1652[5][7][3]}},{{(void*)0,&g_1652[5][1][3],&g_1652[5][7][3],&g_1652[5][7][3],&g_1652[5][7][3]},{&g_1652[5][7][3],&g_1652[5][7][3],&g_1652[5][7][3],&g_1652[5][7][3],&g_1652[5][7][3]},{&g_1652[5][8][3],&g_1652[5][1][3],&g_1652[5][7][3],&g_1652[5][7][3],&g_1652[5][7][3]}}};
static uint16_t g_1682 = 0UL;
static int8_t g_1736[3] = {0xD7L,0xD7L,0xD7L};
static uint64_t g_1756[9][10] = {{18446744073709551611UL,5UL,5UL,0x4BDCC37381E85631LL,0xAF9B3A2DBB62BFBBLL,0x8AB5B926CAEF40BELL,1UL,0xD1CDBBC35A6E2E00LL,0x8AB5B926CAEF40BELL,18446744073709551612UL},{0x42CAA334D1230215LL,0x3EF709FA49577FDBLL,18446744073709551615UL,0x42CAA334D1230215LL,1UL,0UL,1UL,18446744073709551615UL,0UL,0xAF9B3A2DBB62BFBBLL},{8UL,5UL,0x3EF709FA49577FDBLL,0UL,18446744073709551612UL,0UL,0x3EF709FA49577FDBLL,5UL,8UL,18446744073709551606UL},{0x42CAA334D1230215LL,0xD1CDBBC35A6E2E00LL,5UL,18446744073709551611UL,18446744073709551612UL,0x8AB5B926CAEF40BELL,0xD1CDBBC35A6E2E00LL,1UL,0x8AB5B926CAEF40BELL,0xAF9B3A2DBB62BFBBLL},{18446744073709551611UL,0x3EF709FA49577FDBLL,0UL,18446744073709551611UL,1UL,0UL,5UL,18446744073709551615UL,8UL,18446744073709551612UL},{8UL,1UL,0UL,0UL,0xAF9B3A2DBB62BFBBLL,8UL,0x3EF709FA49577FDBLL,1UL,0UL,18446744073709551606UL},{0x4BDCC37381E85631LL,1UL,5UL,0x42CAA334D1230215LL,0x430E050F4CA7050ALL,0x8AB5B926CAEF40BELL,5UL,5UL,0x8AB5B926CAEF40BELL,0x430E050F4CA7050ALL},{0x4BDCC37381E85631LL,0x3EF709FA49577FDBLL,0x3EF709FA49577FDBLL,0x4BDCC37381E85631LL,1UL,8UL,0xD1CDBBC35A6E2E00LL,18446744073709551615UL,0UL,0x430E050F4CA7050ALL},{8UL,0xD1CDBBC35A6E2E00LL,18446744073709551615UL,0UL,0x430E050F4CA7050ALL,0UL,0x3EF709FA49577FDBLL,0xD1CDBBC35A6E2E00LL,0UL,18446744073709551606UL}};
static uint64_t g_1866[5] = {0x0446AC2B080E6FD1LL,0x0446AC2B080E6FD1LL,0x0446AC2B080E6FD1LL,0x0446AC2B080E6FD1LL,0x0446AC2B080E6FD1LL};
static const int32_t g_1994[3] = {0L,0L,0L};
static union U2 *g_2035 = &g_531[5][7];
static union U2 **g_2034 = &g_2035;
static uint8_t g_2134 = 8UL;
static uint32_t *g_2264 = &g_1280;
static uint32_t **g_2263 = &g_2264;
static union U1 **g_2304 = &g_1134;
static union U1 ***g_2303 = &g_2304;
static union U0 *g_2311[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static uint64_t *g_2377[5][3][2] = {{{(void*)0,&g_1756[1][4]},{&g_331[2][1][0],&g_1866[2]},{(void*)0,&g_331[2][1][0]}},{{&g_1756[3][9],&g_331[0][5][0]},{&g_1756[3][9],&g_331[2][1][0]},{(void*)0,&g_1866[2]}},{{&g_331[2][1][0],&g_1756[1][4]},{(void*)0,&g_331[5][6][1]},{(void*)0,&g_1866[2]}},{{&g_1866[2],(void*)0},{&g_1756[4][3],(void*)0},{&g_1866[2],&g_1866[2]}},{{(void*)0,&g_331[5][6][1]},{(void*)0,&g_1756[1][4]},{&g_331[2][1][0],&g_1866[2]}}};
static uint64_t **g_2376[9] = {&g_2377[0][2][0],&g_2377[0][2][0],&g_2377[0][2][0],&g_2377[0][2][0],&g_2377[0][2][0],&g_2377[0][2][0],&g_2377[0][2][0],&g_2377[0][2][0],&g_2377[0][2][0]};
static uint64_t g_2449 = 18446744073709551607UL;
static uint64_t g_2508[9] = {0x2BBEA51605E5CB59LL,0x2BBEA51605E5CB59LL,0x2BBEA51605E5CB59LL,0x2BBEA51605E5CB59LL,0x2BBEA51605E5CB59LL,0x2BBEA51605E5CB59LL,0x2BBEA51605E5CB59LL,0x2BBEA51605E5CB59LL,0x2BBEA51605E5CB59LL};
static uint8_t g_2571 = 5UL;
static uint64_t g_2696 = 0x0FA83835FC430D4ALL;
static uint64_t g_2798 = 0xA24C22099167ED39LL;
static uint32_t ****g_2991 = (void*)0;
static int32_t g_3133 = 0xFDFF4E71L;
static const uint8_t *g_3157[7][1] = {{(void*)0},{(void*)0},{&g_2134},{(void*)0},{(void*)0},{&g_2134},{(void*)0}};
static const uint8_t **g_3156 = &g_3157[2][0];
static union U1 ** const *g_3222 = &g_2304;
static union U1 ** const **g_3221 = &g_3222;
static int16_t g_3231 = (-2L);
static const union U1 *g_3337 = (void*)0;
static const union U1 **g_3336 = &g_3337;
static int16_t **g_3421 = &g_903;
static int16_t ***g_3420 = &g_3421;
static int64_t g_3456[5][5] = {{0x05B0C8B4AE8CCCAFLL,0L,8L,0x05B0C8B4AE8CCCAFLL,8L},{0x05B0C8B4AE8CCCAFLL,0x05B0C8B4AE8CCCAFLL,0x335E2D6C520EC78ALL,(-5L),(-1L)},{0L,(-1L),8L,8L,(-1L)},{(-1L),0L,0xFF0AB3DD8E8CCBDCLL,8L,0x29A058800850145FLL},{0L,8L,0x05B0C8B4AE8CCCAFLL,8L,0L}};
static int16_t g_3656 = 0x0CCBL;



static const int16_t func_1(void);
static uint64_t func_17(union U2 p_18);
static int8_t func_24(int8_t * p_25, uint32_t p_26, int32_t p_27);
static int8_t * func_28(int32_t p_29, uint32_t p_30, int8_t * p_31, int8_t * p_32, uint32_t p_33);
static const uint64_t func_35(union U1 p_36, int16_t p_37, uint32_t p_38, uint16_t p_39);
static union U1 func_40(int64_t p_41);
static int64_t func_42(int32_t * p_43, int64_t p_44, const int16_t p_45);
static union U0 func_46(int8_t * const p_47, int8_t p_48, union U0 p_49);
static const union U2 func_61(union U2 p_62, int32_t p_63);
static uint16_t func_69(int16_t p_70, uint32_t p_71, int8_t ** p_72, int16_t p_73);
# 155 "<stdin>"
static const int16_t func_1(void)
{
    uint64_t l_2 = 0UL;
    int32_t *l_3 = &g_4;
    int32_t *l_5 = &g_4;
    int32_t *l_6 = &g_4;
    int32_t *l_7[3];
    uint16_t l_10 = 65528UL;
    int16_t l_14 = 0x99A5L;
    uint16_t *l_3492 = &l_10;
    int32_t l_3499[9][5] = {{(-1L),1L,0x34C3127CL,4L,4L},{1L,(-1L),0x34C3127CL,(-5L),0x34C3127CL},{1L,1L,0x58E0C1D2L,(-5L),4L},{(-1L),1L,0x34C3127CL,4L,4L},{1L,(-1L),0x34C3127CL,(-5L),0x34C3127CL},{1L,1L,0x58E0C1D2L,(-5L),4L},{(-1L),1L,0x34C3127CL,4L,4L},{1L,(-1L),0x34C3127CL,(-5L),0x34C3127CL},{1L,1L,0x58E0C1D2L,(-5L),4L}};
    uint32_t l_3501 = 4294967294UL;
    int64_t **l_3612 = &g_325;
    int i, j;
    for (i = 0; i < 3; i++)
        l_7[i] = &g_4;
    (*l_3) |= l_2;
    ++l_10;
    return (*l_3);
}







static uint64_t func_17(union U2 p_18)
{
    uint16_t l_34 = 0x589DL;
    int8_t * const l_50 = &g_51[0][4][4];
    union U0 l_52 = {0L};
    int8_t *l_1988 = (void*)0;
    uint8_t l_3475 = 0x28L;
    int32_t *l_3476 = &g_322[0];
    uint64_t *l_3481 = &g_1866[4];
    int8_t **l_3485 = &l_1988;
    int8_t **l_3486[6] = {&g_278,&g_278,&g_278,&g_278,&g_278,&g_278};
    int8_t **l_3487[6];
    int8_t **l_3488 = (void*)0;
    int8_t **l_3489 = &g_278;
    int32_t l_3490 = 0L;
    uint16_t *l_3491[3][1];
    int i, j;
    for (i = 0; i < 6; i++)
        l_3487[i] = &g_278;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_3491[i][j] = &g_464.f2;
    }
    (*l_3476) = (safe_add_func_int64_t_s_s((safe_add_func_int16_t_s_s((((func_24(func_28(((l_34 , g_19.f0) , (func_35(func_40(func_42(&g_4, ((l_34 == (func_46(l_50, l_34, l_52) , g_51[0][5][4])) , 2L), p_18.f0)), l_52.f0, p_18.f0, g_531[0][3].f0) | l_52.f0)), p_18.f0, l_1988, (***g_941), l_34), l_52.f0, l_34) , l_1988) != l_1988) <= l_52.f0), 0x5F51L)), l_3475));
    l_52.f0 = ((g_660 = (g_1564[3][1][1] = ((*l_3476) = (((((((((((l_52 , (*l_3476)) && 0xBFL) < 0x76L) | 0x9C87A67800AEABCDLL) & 0L) , 65535UL) == (*l_3476)) , 0x1E4AL) & 65535UL) > p_18.f2) || (*l_3476))))) <= 0x8853L);
    return (*l_3476);
}







static int8_t func_24(int8_t * p_25, uint32_t p_26, int32_t p_27)
{
    union U3 ****l_2251 = &g_1553;
    int32_t l_2268 = 0L;
    union U0 l_2294[2][9][9] = {{{{0x12F06A94L},{1L},{-1L},{0xF125F355L},{0xF125F355L},{-1L},{1L},{0x12F06A94L},{-3L}},{{0x7301CD9BL},{0x9E181D6DL},{0L},{0xAA7114D8L},{0x04469D86L},{0x9E181D6DL},{0xB944B3D6L},{-1L},{0xB944B3D6L}},{{-6L},{-6L},{2L},{1L},{0L},{0x12F06A94L},{-1L},{0x4B4AB137L},{-3L}},{{0xA3CEE7E9L},{0xB148E990L},{0x0A5E3A97L},{0x501B564FL},{0xA3CEE7E9L},{0xAA7114D8L},{-1L},{0xAA7114D8L},{0xA3CEE7E9L}},{{0x02BB132CL},{3L},{3L},{0x02BB132CL},{-3L},{0x4B4AB137L},{-1L},{0x12F06A94L},{0L}},{{0L},{0xAA7114D8L},{0x04469D86L},{0x9E181D6DL},{0xB944B3D6L},{-1L},{0xB944B3D6L},{0x9E181D6DL},{0x04469D86L}},{{-6L},{0L},{-1L},{-6L},{-3L},{0x12F06A94L},{1L},{-1L},{0xF125F355L}},{{0L},{0x39DE0584L},{-6L},{-7L},{0xA3CEE7E9L},{-7L},{-6L},{0x39DE0584L},{0L}},{{0xBAA1622AL},{1L},{-1L},{0x02BB132CL},{0L},{-1L},{3L},{-6L},{0x12F06A94L}}},{{{0x7301CD9BL},{0xC35591C7L},{0x04469D86L},{0xB148E990L},{0x04469D86L},{0xC35591C7L},{0x7301CD9BL},{0x501B564FL},{0xB944B3D6L}},{{0xBAA1622AL},{0L},{3L},{1L},{0xF125F355L},{-6L},{0x4B4AB137L},{0x4B4AB137L},{-6L}},{{0L},{-1L},{0x0A5E3A97L},{-1L},{0L},{0xB148E990L},{-1L},{0x501B564FL},{0L}},{{-6L},{3L},{2L},{0xF125F355L},{0x12F06A94L},{0x4B4AB137L},{-1L},{-6L},{0x02BB132CL}},{{0L},{0x501B564FL},{0L},{0x39DE0584L},{0xB944B3D6L},{0xB148E990L},{0x7301CD9BL},{0x39DE0584L},{0x04469D86L}},{{0x02BB132CL},{-6L},{-1L},{-6L},{-6L},{-6L},{-6L},{-1L},{-6L}},{{0xA3CEE7E9L},{-7L},{-6L},{0x39DE0584L},{0L},{0xC35591C7L},{-6L},{0x9E181D6DL},{0xA3CEE7E9L}},{{-6L},{1L},{-6L},{0xF125F355L},{0x02BB132CL},{-1L},{2L},{0x12F06A94L},{0xBAA1622AL}},{{0x7301CD9BL},{-7L},{0L},{-1L},{0x04469D86L},{-7L},{0xB944B3D6L},{0xAA7114D8L},{0xB944B3D6L}}}};
    uint32_t l_2316 = 18446744073709551606UL;
    union U1 ***l_2345[3];
    int32_t l_2352 = 0xDB022485L;
    int32_t l_2354 = 0L;
    int32_t l_2356 = 0L;
    union U2 *l_2366 = &g_734;
    union U3 ***l_2490 = &g_123;
    union U3 **** const l_2489 = &l_2490;
    union U3 **** const *l_2488 = &l_2489;
    int32_t **l_2494[8][5] = {{&g_130,&g_130,(void*)0,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,(void*)0,&g_130,&g_130,&g_130},{&g_130,(void*)0,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130,&g_130}};
    int8_t l_2506 = 4L;
    uint32_t l_2535 = 4294967293UL;
    uint32_t l_2545 = 4294967286UL;
    int8_t l_2562 = 3L;
    int32_t l_2575 = (-1L);
    uint32_t l_2651 = 0UL;
    int64_t l_2697 = (-7L);
    int32_t l_2721 = 0x5D68D17FL;
    int32_t l_2750[9] = {0xCD6142A1L,0xCD6142A1L,0xCD6142A1L,0xCD6142A1L,0xCD6142A1L,0xCD6142A1L,0xCD6142A1L,0xCD6142A1L,0xCD6142A1L};
    int8_t * const **l_2760 = (void*)0;
    int8_t * const ***l_2759 = &l_2760;
    const union U1 *l_2819 = &g_464;
    const union U1 **l_2818 = &l_2819;
    uint64_t **l_2825 = (void*)0;
    uint16_t l_2839 = 65531UL;
    int64_t l_2914[5];
    uint64_t l_2994 = 18446744073709551609UL;
    int32_t l_3005 = 0x3FFA0890L;
    int32_t l_3020[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
    int32_t l_3041[3];
    int32_t l_3042 = 9L;
    int64_t l_3043 = 0x2084E5516A0D7FE9LL;
    uint16_t l_3058 = 0x883CL;
    int32_t l_3099 = 0L;
    int16_t l_3164[6][9] = {{(-1L),0x9E2CL,0x0FAFL,0xF735L,0x3880L,0x361EL,0xF735L,(-1L),0x5741L},{0x9E2CL,(-1L),(-1L),0x3880L,0x3880L,(-1L),(-1L),0x9E2CL,0x0FAFL},{0x08DAL,(-4L),(-1L),0xF735L,(-4L),0L,0x3880L,0x08DAL,0x00FFL},{0x08DAL,(-1L),0x0FAFL,0x08DAL,0x9E2CL,0x00FFL,0x9E2CL,0x08DAL,0x0FAFL},{0x9E2CL,0x9E2CL,0x361EL,(-4L),(-2L),0x00FFL,0x3880L,0x9E2CL,0x5741L},{(-1L),0x08DAL,0x5741L,(-4L),0x9E2CL,0L,(-1L),(-1L),0L}};
    uint32_t ***l_3200 = &g_2263;
    uint32_t l_3205 = 4294967287UL;
    int32_t l_3345 = 0x096F8853L;
    int64_t *** const *l_3435 = &g_845[4];
    union U3 l_3460 = {0x314D97EFL};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2345[i] = &g_2304;
    for (i = 0; i < 5; i++)
        l_2914[i] = 1L;
    for (i = 0; i < 3; i++)
        l_3041[i] = (-1L);
lbl_3052:
    for (g_207 = 1; (g_207 <= 5); g_207 += 1)
    {
        union U3 ****l_2249 = (void*)0;
        int32_t l_2250[8] = {(-1L),(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L)};
        union U0 l_2260 = {0L};
        uint32_t **l_2265 = &g_2264;
        uint16_t *l_2269 = &g_1564[3][1][1];
        union U1 **l_2302 = &g_1134;
        union U1 ***l_2301 = &l_2302;
        uint32_t l_2357 = 4UL;
        int32_t l_2432 = (-3L);
        uint64_t l_2433 = 0x72231267E5E78A66LL;
        int32_t l_2434 = 0L;
        int16_t l_2437[4] = {1L,1L,1L,1L};
        uint32_t l_2472 = 2UL;
        int32_t ** const l_2493 = &g_130;
        int16_t l_2511[6][2][5] = {{{0x996EL,0xD9C8L,0xFCB2L,0xD9C8L,0x996EL},{0x7A90L,0xE3C8L,6L,(-6L),0xE3C8L}},{{0x996EL,9L,9L,0x996EL,0xB5C7L},{0L,0x8B26L,0x9E20L,0xE3C8L,0xE3C8L}},{{(-7L),0x996EL,(-7L),0xB5C7L,0x996EL},{0xE3C8L,6L,(-6L),0xE3C8L,(-6L)}},{{1L,1L,0xFCB2L,0x996EL,0xD9C8L},{0x7A90L,(-6L),(-7L),(-7L),(-6L)}},{{0xB5C7L,0xFCB2L,(-7L),0xB5C7L,0xDB73L},{6L,(-6L),0xE3C8L,(-6L),6L}},{{(-7L),(-7L),0xFCB2L,0xDB73L,(-7L)},{6L,0x9E20L,0x9E20L,6L,(-7L)}}};
        uint32_t l_2515 = 18446744073709551611UL;
        int8_t **l_2516[8] = {&g_278,&g_278,(void*)0,&g_278,&g_278,(void*)0,&g_278,&g_278};
        int32_t *l_2707 = (void*)0;
        int64_t *** const *l_2711 = &g_845[5];
        uint8_t *l_2782 = (void*)0;
        const union U3 l_2895 = {0x1E2E4409L};
        uint16_t l_2947 = 0xC831L;
        int8_t l_2949[5][7] = {{0L,2L,7L,7L,2L,0L,0x92L},{0x30L,7L,(-1L),0x92L,0x08L,0x08L,0x92L},{0x07L,0x72L,0x07L,1L,0x92L,0x30L,0L},{(-1L),7L,0x30L,1L,0x30L,7L,(-1L)},{7L,2L,0L,0x92L,0x0EL,0x30L,0x0EL}};
        uint32_t l_2962 = 0UL;
        int32_t *l_3004 = &l_2750[7];
        int i, j, k;
        p_27 = p_26;
    }
    l_3005 ^= (p_27 = p_27);
    for (g_225.f2 = 0; (g_225.f2 <= 4); g_225.f2 += 1)
    {
        int32_t l_3009[1][4][1] = {{{0L},{0xDAEEA893L},{0L},{0xDAEEA893L}}};
        int64_t **l_3019 = (void*)0;
        int32_t l_3044[2];
        int32_t *l_3050 = &l_3009[0][2][0];
        union U0 l_3061 = {0xE55B7DC8L};
        union U3 *l_3062[1][6][10] = {{{&g_318,&g_118,&g_318,&g_318,&g_118,&g_318,&g_318,&g_118,&g_318,&g_318},{&g_318,&g_118,&g_318,&g_118,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_118,&g_318,&g_118,&g_318,&g_318,&g_318},{&g_118,&g_318,&g_318,&g_118,&g_318,&g_318,&g_118,&g_318,&g_318,&g_118}}};
        uint32_t l_3071 = 0x86A14E66L;
        uint64_t *l_3072 = &l_2994;
        const union U1 *l_3088 = &g_464;
        int8_t ****l_3102[8];
        int8_t l_3111 = 0xBDL;
        uint64_t l_3135 = 0x1197874BF3A6E25CLL;
        const uint8_t **l_3159 = &g_3157[4][0];
        int32_t l_3188 = 0xE988858CL;
        int32_t *l_3203 = &g_322[0];
        uint32_t l_3238 = 0x674F1ACCL;
        uint16_t l_3346 = 0UL;
        uint32_t *****l_3413 = (void*)0;
        uint32_t l_3457 = 0xD54955BCL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_3044[i] = 0x9E794D1FL;
        for (i = 0; i < 8; i++)
            l_3102[i] = (void*)0;
        for (l_2352 = 0; (l_2352 <= 3); l_2352 += 1)
        {
            uint32_t *l_3008[4][6][4] = {{{&g_464.f1,(void*)0,&g_225.f1,&g_225.f1},{&g_464.f1,&l_2316,&g_1280,&g_225.f1},{(void*)0,&g_225.f1,(void*)0,(void*)0},{&l_2651,&l_2651,&g_225.f1,&g_1280},{&g_225.f1,&l_2651,&g_172,&l_2651},{&g_1280,&g_225.f1,&l_2651,&l_2316}},{{&g_225.f2,&l_2316,&g_172,&l_2651},{&l_2651,(void*)0,&g_225.f2,(void*)0},{&g_464.f1,(void*)0,(void*)0,&g_464.f1},{&g_225.f1,&g_172,(void*)0,(void*)0},{&g_172,&l_2316,&l_2316,&l_2316},{&g_225.f1,(void*)0,&g_225.f1,&l_2316}},{{&l_2651,&l_2316,&g_225.f2,(void*)0},{&l_2651,&g_172,(void*)0,&g_464.f1},{(void*)0,(void*)0,&g_225.f1,(void*)0},{&l_2316,&l_2316,&g_225.f1,&g_225.f1},{&g_225.f1,&g_172,(void*)0,(void*)0},{&g_464.f1,(void*)0,&g_225.f1,&g_225.f1}},{{&g_172,(void*)0,&l_2651,(void*)0},{&g_172,&g_464.f1,&g_172,&g_1280},{&g_1280,&g_225.f2,(void*)0,(void*)0},{&g_225.f1,&l_2651,&l_2651,&g_225.f2},{&g_225.f1,&l_2651,&l_2651,(void*)0},{&g_225.f1,&l_2316,(void*)0,&g_225.f1}}};
            const int32_t l_3017 = (-1L);
            int32_t l_3028 = 0xDF812282L;
            int32_t l_3029 = 0x824F7901L;
            int32_t l_3032 = 0xE32A7241L;
            int32_t l_3034 = 0L;
            int32_t l_3035[8][4][1] = {{{1L},{0x5058C943L},{0x5058C943L},{1L}},{{0x5058C943L},{0x5058C943L},{1L},{0x5058C943L}},{{0x5058C943L},{1L},{0x5058C943L},{0x5058C943L}},{{1L},{0x5058C943L},{0x5058C943L},{1L}},{{0x5058C943L},{0x5058C943L},{1L},{0x5058C943L}},{{0x5058C943L},{1L},{0x5058C943L},{0x5058C943L}},{{1L},{0x5058C943L},{0x5058C943L},{1L}},{{0x5058C943L},{0x5058C943L},{1L},{0x5058C943L}}};
            uint64_t l_3047 = 0x6AB0B1E74EED82FBLL;
            int i, j, k;
            if ((((safe_mod_func_int16_t_s_s((p_27 < 0L), (((((((p_26 & (((*g_2263) = (void*)0) != l_3008[3][1][1])) <= l_3009[0][3][0]) >= ((g_318.f1 > (safe_mul_func_int8_t_s_s((+0xEEF668A89CDBB015LL), ((safe_mod_func_int32_t_s_s((safe_div_func_int16_t_s_s(((((0xEAL >= l_3017) >= l_3009[0][2][0]) , 5UL) <= 0xAEL), g_973)), l_3009[0][1][0])) , 0UL)))) || 0x4A96L)) || l_3017) , p_27) <= 0x5D73L) , l_3009[0][0][0]))) && 0x7AL) , (-9L)))
            {
                const int32_t l_3018 = 0L;
                int32_t l_3022 = 0x640AB2DEL;
                int32_t l_3024 = (-8L);
                int32_t l_3027 = 0xFD3E3700L;
                int32_t l_3030 = 0xB7DD5200L;
                int32_t l_3033 = 0x547A8D38L;
                int32_t l_3037[3][8][2] = {{{1L,2L},{(-1L),0xCEC92F82L},{1L,1L},{0x03ED0999L,(-1L)},{(-1L),1L},{0x3B94DBB8L,1L},{(-1L),(-1L)},{0x03ED0999L,1L}},{{1L,0xCEC92F82L},{(-1L),2L},{1L,(-1L)},{0x984762F8L,0xD9BFCB28L},{0x984762F8L,(-1L)},{1L,2L},{(-1L),0xCEC92F82L},{1L,1L}},{{0x03ED0999L,(-1L)},{(-1L),1L},{0x3B94DBB8L,1L},{(-1L),(-1L)},{0x03ED0999L,1L},{1L,0xCEC92F82L},{(-1L),2L},{1L,(-1L)}}};
                uint8_t l_3038[8];
                int64_t l_3045 = 3L;
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_3038[i] = 0x79L;
                if (l_3018)
                    break;
                l_3019 = l_3019;
                for (g_2798 = 0; (g_2798 <= 2); g_2798 += 1)
                {
                    int32_t l_3021 = 1L;
                    int32_t l_3023 = 0xB8309BFAL;
                    int32_t l_3025 = 5L;
                    int32_t l_3026 = 0x517501A8L;
                    int32_t l_3031 = 0xD36CC956L;
                    int32_t l_3036 = 0L;
                    int32_t l_3046 = 0x1F53ED28L;
                    int i, j, k;
                    ++l_3038[7];
                    l_3047--;
                    l_3050 = &g_1556[(g_2798 + 6)][(g_225.f2 + 1)][g_2798];
                    (*g_132) = (void*)0;
                }
            }
            else
            {
                uint32_t l_3051 = 0x51107ED6L;
                return l_3051;
            }
        }
        if (p_26)
            goto lbl_3052;
        if (((+0L) , (safe_sub_func_int16_t_s_s((((*l_3072) = ((((safe_mul_func_uint8_t_u_u(0xDAL, 0xF3L)) && (l_3058 | (safe_mod_func_uint16_t_u_u(((l_3061 , l_3062[0][5][3]) != ((safe_div_func_int32_t_s_s(((((*l_3050) > ((((p_26 != ((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((0x4FDCL >= 65535UL) , p_26), p_26)), p_26)) < (*l_3050))) | p_27) != p_26) == l_3071)) & p_26) || (*l_3050)), 3L)) , l_3062[0][5][3])), g_987[5][3].f0)))) == 0xE1E7L) ^ 247UL)) <= p_27), 0x591CL))))
        {
            int32_t l_3085 = 0L;
            int32_t l_3107 = 1L;
            int32_t l_3114 = 0xBC6199C3L;
            int32_t l_3115 = 9L;
            int32_t l_3118 = 1L;
            int32_t l_3121 = 0xB0C501BFL;
            int32_t l_3126 = 0xF8A96134L;
            uint64_t l_3127[6] = {18446744073709551615UL,0x692F93293A5B0CCBLL,0x692F93293A5B0CCBLL,18446744073709551615UL,0x692F93293A5B0CCBLL,0x692F93293A5B0CCBLL};
            int32_t l_3130[3];
            int32_t l_3134 = 0x1FE08FFAL;
            uint8_t * const *l_3155 = &g_1652[5][7][3];
            uint32_t ***l_3173 = (void*)0;
            uint32_t ****l_3172 = &l_3173;
            uint8_t *l_3185 = &g_734.f2;
            uint8_t l_3202 = 1UL;
            int32_t *l_3204 = &l_3126;
            int i;
            for (i = 0; i < 3; i++)
                l_3130[i] = 0x2779E93EL;
            if ((((safe_div_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(p_27, (safe_mul_func_uint8_t_u_u((p_27 >= ((safe_sub_func_uint64_t_u_u(p_26, (safe_lshift_func_uint8_t_u_s(p_26, 6)))) | p_26)), (*l_3050))))), ((safe_mod_func_int64_t_s_s(l_3085, (safe_add_func_int64_t_s_s(((p_26 ^ ((((*l_3072) = 0UL) && 0xD6CBE6199CA5D849LL) , 1L)) | 0xF0L), l_3085)))) || 0x5B919E3E1BD19155LL))) , (void*)0) == l_3088))
            {
                int8_t l_3095 = 3L;
                int32_t l_3109 = 0x232B67B3L;
                int32_t l_3116 = 0L;
                int32_t l_3120[4] = {9L,9L,9L,9L};
                int16_t l_3132 = 0x9B1BL;
                int32_t l_3143 = 0xD362287CL;
                union U2 l_3160 = {0xB443BFE0L};
                int i;
                for (l_3043 = 4; (l_3043 >= 0); l_3043 -= 1)
                {
                    int32_t l_3103[2];
                    int32_t l_3110 = (-1L);
                    int32_t l_3113 = (-1L);
                    int32_t l_3117[5];
                    int8_t l_3131 = (-8L);
                    uint16_t l_3138 = 0xC413L;
                    uint8_t l_3147 = 0x58L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_3103[i] = 0x7064F952L;
                    for (i = 0; i < 5; i++)
                        l_3117[i] = 0L;
                    if (((safe_add_func_int32_t_s_s(l_3085, ((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(((l_3095 || p_26) > (((*l_3050) = (*g_902)) & ((~(safe_sub_func_uint64_t_u_u(((l_3099 <= (safe_sub_func_int8_t_s_s((l_3102[0] != (void*)0), ((**g_277) = (((-1L) & p_27) , l_3103[1]))))) ^ 1L), p_27))) > l_3095))), p_26)), 6)) ^ 0x32L))) < g_101))
                    {
                        return (****g_941);
                    }
                    else
                    {
                        int32_t l_3106[6][3] = {{(-1L),0x8E881267L,(-1L)},{(-1L),0x8E881267L,(-1L)},{(-1L),0x8E881267L,(-1L)},{(-1L),0x8E881267L,(-1L)},{(-1L),0x8E881267L,(-1L)},{(-1L),0x8E881267L,(-1L)}};
                        int32_t l_3108 = 0x677DA841L;
                        int32_t l_3112 = 0x74A36870L;
                        int32_t l_3119 = (-1L);
                        int32_t l_3122 = 1L;
                        int32_t l_3123 = 1L;
                        int32_t l_3124 = 0x072FAF51L;
                        int32_t l_3125[3];
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_3125[i] = 9L;
                        l_3106[0][2] ^= (0xB6L == (safe_mod_func_int32_t_s_s(((&l_2494[6][0] == (void*)0) > (*l_3050)), g_225.f0)));
                        l_3127[1]++;
                        l_3135++;
                        --l_3138;
                    }
                    for (l_2575 = 1; (l_2575 >= 0); l_2575 -= 1)
                    {
                        const uint16_t l_3141 = 0x10E1L;
                        int32_t l_3142[9];
                        uint8_t l_3144[2];
                        const uint8_t ***l_3158[2];
                        uint32_t * const *l_3163 = &g_2264;
                        uint32_t * const * const *l_3162[4];
                        uint32_t * const * const **l_3161 = &l_3162[2];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_3142[i] = 0x3A480D39L;
                        for (i = 0; i < 2; i++)
                            l_3144[i] = 0UL;
                        for (i = 0; i < 2; i++)
                            l_3158[i] = (void*)0;
                        for (i = 0; i < 4; i++)
                            l_3162[i] = &l_3163;
                        if (p_27)
                            break;
                        if (l_3141)
                            continue;
                        l_3144[1]--;
                        (*l_3050) &= (((*g_902) <= l_3147) < (safe_mod_func_uint16_t_u_u((l_3141 <= (safe_rshift_func_uint8_t_u_u((((+(((safe_add_func_uint16_t_u_u((&g_130 != l_2494[g_225.f2][g_225.f2]), ((l_3155 == (l_3159 = g_3156)) >= l_3120[3]))) , ((l_3160 , p_26) , g_2991)) != l_3161)) <= l_3143) , p_27), 5))), (-10L))));
                    }
                }
            }
            else
            {
                uint32_t ***l_3171 = &g_2263;
                uint32_t ****l_3170[5][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                uint32_t l_3182 = 6UL;
                const uint8_t *l_3186 = &g_19.f2;
                uint32_t *l_3195 = &g_734.f0;
                int16_t *l_3201 = &g_973;
                int i, j;
                for (l_3135 = 0; (l_3135 <= 7); l_3135 += 1)
                {
                    for (l_2356 = 5; (l_2356 >= 0); l_2356 -= 1)
                    {
                        int i, j;
                        (*l_3050) &= l_3164[3][2];
                        if (p_27)
                            continue;
                        (*g_132) = &l_3044[0];
                    }
                }
                for (l_3121 = 3; (l_3121 >= 0); l_3121 -= 1)
                {
                    uint8_t l_3165 = 0xFEL;
                    for (p_26 = 0; (p_26 <= 3); p_26 += 1)
                    {
                        if (l_3121)
                            goto lbl_3052;
                        return l_3165;
                    }
                    for (g_101 = 0; (g_101 <= 5); g_101 += 1)
                    {
                        int64_t l_3187 = 0x5740DB0220D40425LL;
                        int i, j;
                        (*l_2818) = (**g_2303);
                        if (l_3005)
                            goto lbl_3052;
                        l_3187 &= (safe_mod_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(((p_27 , l_3170[1][2]) != ((l_3127[0] || p_26) , l_3172)), (safe_rshift_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((((((safe_rshift_func_int8_t_s_s(l_3182, (*l_3050))) , ((safe_add_func_int8_t_s_s(p_27, (***g_942))) != p_26)) ^ (**g_277)) , l_3185) == l_3186), g_256)), g_1756[0][9])) >= l_3165) != (****g_941)), p_27)))) != 1L), 0x21584790L));
                    }
                }
                l_3202 ^= (((((l_3188 | ((safe_unary_minus_func_int16_t_s(0xCD56L)) && (0L != (*l_3050)))) || (safe_lshift_func_int16_t_s_s(((*l_3201) = ((safe_div_func_int64_t_s_s(((~((*l_3050) || (((**g_2304) , p_27) | ((*l_3195)--)))) == (g_1564[3][1][1] < ((safe_rshift_func_uint16_t_u_s((((*l_3172) = l_3200) == (void*)0), p_27)) != (*l_3050)))), (-2L))) , (*g_903))), 14))) == p_26) , 0L) != 0x0FL);
                if (p_27)
                    continue;
            }
            l_3204 = l_3203;
            if (p_27)
                break;
            l_3205--;
        }
        else
        {
            uint32_t l_3235 = 0UL;
            int32_t ***l_3249[6][9] = {{&l_2494[6][2],&l_2494[6][2],&l_2494[6][2],&l_2494[6][2],&g_132,&l_2494[6][2],&l_2494[6][2],&l_2494[6][2],&l_2494[6][2]},{(void*)0,&g_129[0][1][0],&l_2494[2][2],&g_129[0][1][0],(void*)0,(void*)0,&g_129[0][1][0],&l_2494[2][2],&g_129[0][1][0]},{&l_2494[6][2],&g_132,&l_2494[4][1],&l_2494[4][1],&g_132,&l_2494[6][2],&g_132,&l_2494[4][1],&l_2494[4][1]},{&g_129[0][1][0],&g_129[0][1][0],&g_129[1][2][3],(void*)0,&g_129[1][2][3],&g_129[0][1][0],&g_129[0][1][0],&g_129[1][2][3],(void*)0},{&l_2494[4][1],&g_132,&l_2494[4][1],&l_2494[6][2],&l_2494[6][2],&l_2494[4][1],&g_132,&l_2494[4][1],&l_2494[6][2]},{&l_2494[2][2],&g_129[1][2][3],&g_129[1][2][3],&l_2494[2][2],(void*)0,&l_2494[2][2],&g_129[1][2][3],&g_129[1][2][3],&l_2494[2][2]}};
            union U1 **l_3338 = &g_484;
            int32_t l_3386 = 0x85D815A9L;
            union U0 l_3407[1] = {{0x757A4EE9L}};
            int64_t *****l_3419 = (void*)0;
            union U3 l_3424 = {0x5F50D764L};
            uint8_t *l_3426 = &g_19.f2;
            int i, j;
            for (g_973 = 0; (g_973 <= 5); g_973 += 1)
            {
                union U1 ** const **l_3224 = (void*)0;
                union U0 l_3226 = {0x48253032L};
                uint8_t l_3230 = 251UL;
                int32_t *l_3242 = (void*)0;
                int32_t l_3344[10][7] = {{1L,(-9L),0x0A261C91L,0x4A6FBF73L,0L,0x4A6FBF73L,0x0A261C91L},{(-6L),(-6L),0x0A261C91L,0L,0x1A2CCE3EL,0x361E5B09L,0x34FDCBB5L},{(-6L),(-9L),0xF00401A8L,(-2L),(-1L),0x361E5B09L,0x0A261C91L},{1L,(-9L),0xEABB94B9L,(-2L),0x1A2CCE3EL,0x4A6FBF73L,0x625A5B1AL},{(-9L),(-9L),0xF00401A8L,0L,0L,(-2L),0x625A5B1AL},{1L,(-9L),0x0A261C91L,0x4A6FBF73L,0L,0x4A6FBF73L,0x0A261C91L},{(-6L),(-6L),0x0A261C91L,0L,0x1A2CCE3EL,0x361E5B09L,0x34FDCBB5L},{(-6L),(-9L),0xF00401A8L,(-2L),(-1L),0x361E5B09L,0x0A261C91L},{1L,(-9L),0xEABB94B9L,(-2L),0x1A2CCE3EL,0x4A6FBF73L,0x625A5B1AL},{(-9L),(-9L),0xF00401A8L,0L,0L,(-2L),0x625A5B1AL}};
                uint32_t *l_3358[7];
                uint32_t **l_3357 = &l_3358[1];
                int i, j;
                for (i = 0; i < 7; i++)
                    l_3358[i] = &g_256;
                if ((*l_3203))
                {
                    union U0 l_3227 = {-4L};
                    union U1 *** const *l_3228 = &g_2303;
                    int32_t l_3232 = 0xBCDCC076L;
                    int32_t l_3233 = 0x177F8FD8L;
                    int32_t l_3234 = 0x397B784EL;
                    int32_t *l_3241[7] = {&l_3009[0][3][0],&l_3009[0][3][0],&l_3009[0][3][0],&l_3009[0][3][0],&l_3009[0][3][0],&l_3009[0][3][0],&l_3009[0][3][0]};
                    int i;
                    for (g_2798 = 0; (g_2798 <= 5); g_2798 += 1)
                    {
                        int16_t *l_3215 = &g_973;
                        int32_t l_3220[3][10][2] = {{{0x76FBE001L,1L},{0x76FBE001L,0x12040575L},{0xC8B1EE64L,0x61B7D8ABL},{0x12040575L,0xC82FDBCDL},{0xAEA0198AL,0x12040575L},{1L,0x76FBE001L},{0x76FBE001L,6L},{0xAEA0198AL,0x61B7D8ABL},{6L,0x61B7D8ABL},{0xAEA0198AL,6L}},{{0x76FBE001L,0x76FBE001L},{1L,0x12040575L},{0xAEA0198AL,0xC82FDBCDL},{0x12040575L,0x61B7D8ABL},{0xC8B1EE64L,0x12040575L},{0x76FBE001L,1L},{0x76FBE001L,0x12040575L},{0xC8B1EE64L,0x61B7D8ABL},{0x12040575L,0xC82FDBCDL},{0xAEA0198AL,0x12040575L}},{{1L,0x76FBE001L},{0x76FBE001L,6L},{0xAEA0198AL,0x61B7D8ABL},{6L,0x61B7D8ABL},{0xAEA0198AL,6L},{0x76FBE001L,0x76FBE001L},{1L,0x12040575L},{0xAEA0198AL,0xC82FDBCDL},{0x12040575L,0x61B7D8ABL},{0xC8B1EE64L,0x12040575L}}};
                        union U1 ** const ***l_3223 = &g_3221;
                        int8_t * const l_3225 = (void*)0;
                        union U1 *** const **l_3229 = &l_3228;
                        int i, j, k;
                        (*g_132) = &p_27;
                        (*l_3050) ^= ((!(l_3232 ^= (safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_3215 != ((safe_rshift_func_uint16_t_u_s(((g_19.f0 |= ((((safe_sub_func_uint16_t_u_u((l_3220[2][2][0] ^ ((((l_3224 = ((*l_3223) = g_3221)) != (l_3227 , ((*l_3229) = l_3228))) , 0x37E8L) > 0x8E66L)), p_27)) , l_3230) != p_26) < (**g_277))) < p_26), (*g_903))) , (void*)0)), 8UL)), g_3231)) < 0xDC273454L) & 4294967289UL), p_27)))) == (*g_278));
                        l_3235++;
                        --l_3238;
                    }
                    l_3242 = l_3241[1];
                }
                else
                {
                    int32_t *l_3243 = &l_3044[0];
                    int32_t *l_3253[10][8][3] = {{{&l_3020[0],&l_3020[0],(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_322[0],&l_3044[0]},{(void*)0,&g_322[0],(void*)0},{&l_3020[0],(void*)0,&l_3044[0]},{&l_3020[0],&l_3020[0],(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_322[0],&l_3044[0]}},{{(void*)0,&l_3020[0],&l_3044[0]},{(void*)0,(void*)0,&g_322[0]},{(void*)0,(void*)0,(void*)0},{&l_3044[0],(void*)0,(void*)0},{(void*)0,&l_3020[0],&g_322[0]},{&l_3044[0],&l_3020[0],&l_3044[0]},{(void*)0,(void*)0,&g_322[0]},{(void*)0,(void*)0,(void*)0}},{{&l_3044[0],(void*)0,(void*)0},{(void*)0,&l_3020[0],&g_322[0]},{&l_3044[0],&l_3020[0],&l_3044[0]},{(void*)0,(void*)0,&g_322[0]},{(void*)0,(void*)0,(void*)0},{&l_3044[0],(void*)0,(void*)0},{(void*)0,&l_3020[0],&g_322[0]},{&l_3044[0],&l_3020[0],&l_3044[0]}},{{(void*)0,(void*)0,&g_322[0]},{(void*)0,(void*)0,(void*)0},{&l_3044[0],(void*)0,(void*)0},{(void*)0,&l_3020[0],&g_322[0]},{&l_3044[0],&l_3020[0],&l_3044[0]},{(void*)0,(void*)0,&g_322[0]},{(void*)0,(void*)0,(void*)0},{&l_3044[0],(void*)0,(void*)0}},{{(void*)0,&l_3020[0],&g_322[0]},{&l_3044[0],&l_3020[0],&l_3044[0]},{(void*)0,(void*)0,&g_322[0]},{(void*)0,(void*)0,(void*)0},{&l_3044[0],(void*)0,(void*)0},{(void*)0,&l_3020[0],&g_322[0]},{&l_3044[0],&l_3020[0],&l_3044[0]},{(void*)0,(void*)0,&g_322[0]}},{{(void*)0,(void*)0,(void*)0},{&l_3044[0],(void*)0,(void*)0},{(void*)0,&l_3020[0],&g_322[0]},{&l_3044[0],&l_3020[0],&l_3044[0]},{(void*)0,(void*)0,&g_322[0]},{(void*)0,(void*)0,(void*)0},{&l_3044[0],(void*)0,(void*)0},{(void*)0,&l_3020[0],&g_322[0]}},{{&l_3044[0],&l_3020[0],&l_3044[0]},{(void*)0,(void*)0,&g_322[0]},{(void*)0,(void*)0,(void*)0},{&l_3044[0],(void*)0,(void*)0},{(void*)0,&l_3020[0],&g_322[0]},{&l_3044[0],&l_3020[0],&l_3044[0]},{(void*)0,(void*)0,&g_322[0]},{(void*)0,(void*)0,(void*)0}},{{&l_3044[0],(void*)0,(void*)0},{(void*)0,&l_3020[0],&g_322[0]},{&l_3044[0],&l_3020[0],&l_3044[0]},{(void*)0,(void*)0,&g_322[0]},{(void*)0,(void*)0,(void*)0},{&l_3044[0],(void*)0,(void*)0},{(void*)0,&l_3020[0],&g_322[0]},{&l_3044[0],&l_3020[0],&l_3044[0]}},{{(void*)0,(void*)0,&g_322[0]},{(void*)0,(void*)0,(void*)0},{&l_3044[0],(void*)0,(void*)0},{(void*)0,&l_3020[0],&g_322[0]},{&l_3044[0],&l_3020[0],&l_3044[0]},{(void*)0,(void*)0,&g_322[0]},{(void*)0,(void*)0,(void*)0},{&l_3044[0],(void*)0,(void*)0}},{{&l_3044[0],(void*)0,&l_3020[0]},{&g_322[0],(void*)0,&g_322[0]},{(void*)0,&l_3044[0],&l_3020[0]},{(void*)0,(void*)0,&l_3044[0]},{&g_322[0],&l_3044[0],&l_3044[0]},{&l_3044[0],(void*)0,&l_3020[0]},{&g_322[0],(void*)0,&g_322[0]},{(void*)0,&l_3044[0],&l_3020[0]}}};
                    int32_t *l_3254 = &l_2268;
                    int32_t *l_3255 = (void*)0;
                    int32_t *l_3256 = &l_3020[7];
                    int32_t *l_3257[6] = {(void*)0,&g_1556[0][5][2],&g_1556[0][5][2],(void*)0,&g_1556[0][5][2],&g_1556[0][5][2]};
                    int32_t *l_3258 = &l_2268;
                    int32_t *l_3259 = &l_3020[5];
                    int32_t *l_3260 = &l_3020[5];
                    int32_t *l_3261 = &l_3009[0][2][0];
                    int32_t *l_3262[1];
                    int32_t *l_3263 = &g_322[0];
                    int32_t *l_3264 = &l_3020[8];
                    int32_t *l_3265 = &g_322[0];
                    int32_t *l_3266 = &l_3042;
                    int32_t *l_3267 = (void*)0;
                    int32_t *l_3268 = (void*)0;
                    int32_t *l_3269 = &l_3044[0];
                    int32_t *l_3270[7] = {&l_3009[0][3][0],&l_2750[2],&l_2750[2],&l_3009[0][3][0],&l_2750[2],&l_2750[2],&l_3009[0][3][0]};
                    int32_t *l_3271[3][3][6] = {{{&g_1556[4][2][1],(void*)0,&l_2721,&g_1556[4][2][1],&l_3009[0][3][0],&g_1556[4][2][1]},{&g_1556[4][2][1],&l_3009[0][3][0],&g_1556[4][2][1],&l_2721,(void*)0,&g_1556[4][2][1]},{&l_3042,(void*)0,&l_2721,&l_3009[0][1][0],(void*)0,&l_3042}},{{&l_2721,&l_3009[0][3][0],&l_3009[0][1][0],&l_3009[0][1][0],&l_3009[0][3][0],&l_2721},{&l_3042,(void*)0,&l_3009[0][1][0],&l_2721,(void*)0,&l_3042},{&g_1556[4][2][1],(void*)0,&l_2721,&g_1556[4][2][1],&l_3009[0][3][0],&g_1556[4][2][1]}},{{&g_1556[4][2][1],&l_3009[0][3][0],&g_1556[4][2][1],&l_2721,(void*)0,&g_1556[4][2][1]},{&l_3042,(void*)0,&l_2721,&l_3009[0][1][0],(void*)0,&l_3042},{&l_2721,&l_3009[0][3][0],&l_3009[0][1][0],&l_3009[0][1][0],&l_3009[0][3][0],&l_2721}}};
                    int32_t *l_3272 = &l_3042;
                    int32_t *l_3273 = &g_322[0];
                    int32_t *l_3274 = (void*)0;
                    int32_t *l_3275 = &g_322[0];
                    int32_t *l_3276 = &g_1556[4][2][1];
                    int32_t *l_3277 = (void*)0;
                    int32_t *l_3278 = &l_3099;
                    int32_t *l_3279[7][7] = {{&l_3042,(void*)0,(void*)0,&l_2352,(void*)0,&l_2354,(void*)0},{&l_2352,(void*)0,(void*)0,&l_3042,&g_4,&g_322[0],&g_322[0]},{(void*)0,&g_1556[4][2][1],&l_2352,&g_1556[4][2][1],(void*)0,&l_3009[0][3][0],&g_322[0]},{&l_3020[5],(void*)0,&l_2354,&l_3009[0][3][0],&g_322[0],(void*)0,(void*)0},{&l_2354,&l_3009[0][3][0],&l_3042,&l_3020[5],&l_3044[0],(void*)0,(void*)0},{&l_3020[5],&l_3009[0][3][0],&l_2354,(void*)0,&l_2354,&l_3009[0][3][0],&l_3020[5]},{(void*)0,&l_3009[0][3][0],&l_3009[0][1][0],&g_322[0],&g_1556[4][2][1],&l_3020[5],&l_2352}};
                    int32_t *l_3280 = (void*)0;
                    int32_t *l_3281 = &l_3020[3];
                    int32_t *l_3282[10][1] = {{&g_1556[4][2][1]},{&g_322[0]},{&g_1556[6][5][0]},{&g_1556[6][5][0]},{&g_322[0]},{&g_1556[4][2][1]},{&g_322[0]},{&g_1556[6][5][0]},{&g_1556[6][5][0]},{&g_322[0]}};
                    int32_t *l_3283 = &g_4;
                    int32_t *l_3284[5];
                    int32_t *l_3285 = (void*)0;
                    int32_t *l_3286 = &l_2268;
                    int32_t *l_3287[9];
                    int32_t *l_3288[7][8] = {{&l_2721,&g_1556[2][1][0],&l_3044[1],&l_2721,&l_3009[0][3][0],&l_3009[0][3][0],&l_2721,&l_3044[1]},{&l_3009[0][3][0],&l_3009[0][3][0],&g_322[0],&g_1556[2][0][1],&l_2721,&g_322[0],&l_2721,&g_1556[2][0][1]},{&l_3044[1],&g_1556[2][0][1],&l_3044[1],&l_3009[0][3][0],&g_1556[2][0][1],&g_1556[2][1][0],&g_1556[2][1][0],&g_1556[2][0][1]},{&g_1556[2][0][1],&g_1556[2][1][0],&g_1556[2][1][0],&g_1556[2][0][1],&l_3009[0][3][0],&l_3044[1],&g_1556[2][0][1],&l_3044[1]},{&g_1556[2][0][1],&l_2721,&g_322[0],&l_2721,&g_1556[2][0][1],&g_322[0],&l_3009[0][3][0],&l_3009[0][3][0]},{&l_3044[1],&l_3009[0][3][0],(void*)0,(void*)0,&l_3009[0][3][0],&l_3009[0][3][0],&g_322[0],&l_3009[0][3][0]},{&l_3044[1],&g_322[0],(void*)0,&l_3044[1],(void*)0,&g_322[0],&l_3044[1],&l_3009[0][3][0]}};
                    int32_t *l_3289 = (void*)0;
                    int32_t *l_3290 = &l_2356;
                    int32_t *l_3291 = &g_1556[4][2][1];
                    int32_t *l_3292 = &l_3020[6];
                    int32_t *l_3293 = (void*)0;
                    int32_t *l_3294 = &l_2721;
                    int32_t *l_3295 = &l_3044[1];
                    int32_t *l_3296[1][8][2] = {{{(void*)0,&l_3044[1]},{&l_2750[8],&l_3044[1]},{(void*)0,&l_3044[1]},{&l_2750[8],&l_3044[1]},{(void*)0,&l_3044[1]},{&l_2750[8],&l_3044[1]},{(void*)0,&l_3044[1]},{&l_2750[8],&l_3044[1]}}};
                    int32_t *l_3297[5];
                    int32_t *l_3298 = &g_1556[4][2][1];
                    int32_t *l_3299[9][3] = {{&l_3044[0],&l_3009[0][3][0],&l_3009[0][3][0]},{&g_1556[6][2][0],(void*)0,(void*)0},{&l_3044[0],&l_3009[0][1][0],&l_3044[0]},{&l_3042,&g_1556[6][2][0],(void*)0},{&l_3044[0],&l_3044[0],&l_3009[0][3][0]},{&l_3044[0],&g_1556[6][2][0],&g_1556[6][2][0]},{&l_3009[0][3][0],&l_3009[0][1][0],&l_2750[2]},{&l_3044[0],(void*)0,&l_3044[0]},{&l_3044[0],&l_3009[0][3][0],&l_2750[2]}};
                    int32_t *l_3300 = &l_3044[1];
                    int32_t *l_3301[5][9][5] = {{{&l_3099,&l_3009[0][3][0],&l_2721,&l_3099,&g_1556[4][2][1]},{&l_2721,&l_2750[2],&l_3009[0][1][0],&l_2750[2],&g_4},{&g_322[0],&g_3133,&l_3044[1],&g_322[0],&g_3133},{&l_2721,&l_2354,&l_3042,&l_2352,&g_1556[4][7][0]},{&l_3099,&g_3133,&l_2721,(void*)0,&g_3133},{&g_322[0],&l_2721,&l_3099,&l_2268,&g_4},{&g_3133,&l_3009[0][3][0],&g_1556[4][2][1],(void*)0,&g_1556[4][2][1]},{&l_2356,&l_2356,&l_3009[0][1][0],&l_2352,(void*)0},{&g_322[0],&l_3099,&g_1556[4][2][1],&g_322[0],&l_3044[0]}},{{&l_2750[2],&l_2354,&l_3099,&l_2750[2],&g_1556[4][7][0]},{&g_3133,&l_3099,&l_2721,&l_3099,&g_3133},{&g_322[0],&l_2356,&l_3042,&l_2268,(void*)0},{&g_3133,&l_3009[0][3][0],&l_3044[1],&l_2268,&g_1556[4][2][1]},{&l_2750[2],&l_2721,&l_3009[0][1][0],(void*)0,(void*)0},{&g_322[0],&g_3133,&l_2721,&g_322[0],&g_3133},{&l_2356,&l_2354,&g_1556[4][7][0],(void*)0,&g_1556[4][7][0]},{&g_3133,&g_3133,&l_2721,&l_2268,&l_3044[0]},{&g_322[0],&l_2750[2],&g_1556[4][7][0],&l_2268,(void*)0}},{{&l_3099,&l_3009[0][3][0],&l_2721,&l_3099,&g_1556[4][2][1]},{&l_2721,&l_2750[2],&l_3009[0][1][0],&l_2750[2],&g_4},{&g_322[0],&g_3133,&l_3044[1],&g_322[0],&g_3133},{&l_2721,&l_2354,&l_3042,&l_2352,&g_1556[4][7][0]},{&l_3099,&g_3133,&l_2721,(void*)0,&g_3133},{&g_322[0],&l_2721,&l_3099,&l_2268,&g_4},{&g_3133,&l_3009[0][3][0],&g_1556[4][2][1],(void*)0,&g_1556[4][2][1]},{&l_2356,&l_2356,&l_3009[0][1][0],&l_2352,(void*)0},{&g_322[0],&l_3099,&g_1556[4][2][1],&l_3020[5],&l_3020[5]}},{{&g_1556[4][7][0],&l_3009[0][1][0],&g_3133,&g_1556[7][6][1],&g_4},{&l_3044[1],&g_1556[4][2][1],&g_322[0],&l_2352,&l_3020[7]},{(void*)0,&l_3099,&g_3133,&g_1556[5][1][0],(void*)0},{&l_3044[1],&l_2721,&l_2354,&l_2750[3],&g_322[0]},{&g_1556[4][7][0],&l_3042,&g_1556[4][2][1],(void*)0,(void*)0},{&g_3133,&l_3044[1],&l_3009[0][3][0],&l_3020[5],&l_3020[7]},{&l_3099,&l_3009[0][1][0],&g_4,(void*)0,&g_4},{&l_2721,&l_2721,&g_322[0],&l_2750[3],&l_3020[5]},{(void*)0,&g_1556[4][7][0],&g_4,&g_1556[5][1][0],(void*)0}},{{&g_1556[4][2][1],&l_2721,&l_3009[0][3][0],&l_2352,&g_322[0]},{&l_3042,&g_1556[4][7][0],&g_1556[4][2][1],&g_1556[7][6][1],(void*)0},{&g_3133,&l_2721,&l_2354,&l_3020[5],&g_322[0]},{&l_3042,&l_3009[0][1][0],&g_3133,&g_3133,&g_4},{&g_1556[4][2][1],&l_3044[1],&g_322[0],&l_3042,&g_322[0]},{(void*)0,&l_3042,&g_3133,&g_1556[5][1][0],(void*)0},{&l_2721,&l_2721,&g_322[0],&l_3042,&g_322[0]},{&l_3099,&l_3099,&g_1556[4][2][1],&g_3133,(void*)0},{&g_3133,&g_1556[4][2][1],&g_322[0],&l_3020[5],&l_3020[5]}}};
                    int32_t *l_3302[4][6][7] = {{{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354}},{{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354}},{{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354}},{{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354,&l_2354}}};
                    int32_t *l_3303 = &l_2268;
                    int32_t *l_3304 = &l_3099;
                    int32_t *l_3305 = &l_3020[5];
                    int32_t *l_3306 = &g_1556[0][6][0];
                    int32_t *l_3307 = (void*)0;
                    int32_t *l_3308 = &g_1556[4][2][1];
                    int32_t *l_3309 = &g_322[0];
                    int32_t *l_3310 = &l_2750[2];
                    int32_t *l_3311 = &l_3044[0];
                    int32_t *l_3312 = (void*)0;
                    int32_t *l_3313 = &l_3009[0][2][0];
                    int32_t *l_3314 = &l_3044[0];
                    int32_t *l_3315 = (void*)0;
                    int32_t *l_3316[2];
                    int32_t *l_3317 = &l_3009[0][3][0];
                    int32_t *l_3318 = (void*)0;
                    int32_t *l_3319 = &l_2356;
                    int32_t *l_3320[2][8][4] = {{{(void*)0,&l_2750[1],&l_2356,(void*)0},{&l_2268,&g_322[0],&l_2750[1],&l_2268},{&g_322[0],&g_1556[0][3][2],(void*)0,&g_322[0]},{&g_322[0],&l_3042,&l_2750[1],(void*)0},{&l_2268,&g_322[0],&l_2356,&l_2356},{(void*)0,(void*)0,&l_2268,&g_322[0]},{&g_322[0],&l_2268,(void*)0,&g_1556[0][3][2]},{&l_3042,&g_322[0],&l_2356,(void*)0}},{{&g_1556[0][3][2],&g_322[0],&l_3042,&g_1556[0][3][2]},{&g_322[0],&l_2268,&l_3042,&g_322[0]},{&l_2750[1],(void*)0,&l_2750[1],&l_2356},{&g_1556[0][3][2],&g_322[0],&l_3044[0],(void*)0},{(void*)0,&l_3042,(void*)0,&g_322[0]},{&g_322[0],&g_1556[0][3][2],(void*)0,&l_2268},{(void*)0,&g_322[0],&l_3044[0],(void*)0},{&g_1556[0][3][2],&l_2750[1],&l_2750[1],&g_1556[0][3][2]}}};
                    int32_t *l_3321 = &l_2352;
                    int32_t *l_3322 = &l_3020[5];
                    int32_t *l_3323 = &l_2721;
                    int32_t *l_3324 = &g_4;
                    int32_t *l_3325[6][3][8] = {{{&g_322[0],&g_3133,&l_3009[0][2][0],&l_3009[0][0][0],&l_3009[0][2][0],&g_3133,&g_322[0],&g_322[0]},{&l_2750[8],&l_3009[0][0][0],&g_1556[7][6][2],&l_3020[5],&g_322[0],&g_3133,&l_3009[0][3][0],&g_3133},{&g_322[0],&g_3133,&l_3009[0][3][0],&g_3133,&g_322[0],&l_3020[5],&g_1556[7][6][2],&l_3009[0][0][0]}},{{&l_2750[8],&g_322[0],&g_322[0],&g_3133,&l_3009[0][2][0],&l_3009[0][0][0],&l_3009[0][2][0],&g_3133},{&g_322[0],&l_3044[0],&g_322[0],&l_3020[5],&l_3009[0][3][0],&l_3009[0][1][0],&g_1556[7][6][2],&g_322[0]},{&l_3009[0][2][0],&l_3044[0],&l_3009[0][3][0],&l_3009[0][0][0],&l_3020[5],&l_3009[0][0][0],&l_3009[0][3][0],&l_3044[0]}},{{&l_3009[0][2][0],&g_322[0],&g_1556[7][6][2],&l_3009[0][1][0],&l_3009[0][3][0],&l_3020[5],&g_322[0],&l_3044[0]},{&g_322[0],&g_322[0],&l_3020[5],&l_3020[5],&l_3020[5],&g_322[0],&g_322[0],&l_3009[0][0][0]},{&g_322[0],&l_3020[5],&l_3009[0][3][0],&l_3009[0][1][0],&g_1556[7][6][2],&g_322[0],&l_3009[0][2][0],&g_322[0]}},{{&g_1556[7][6][2],&g_322[0],&l_3009[0][2][0],&g_322[0],&g_1556[7][6][2],&l_3009[0][1][0],&l_3009[0][3][0],&l_3020[5]},{&g_322[0],&l_3009[0][0][0],&g_322[0],&g_322[0],&l_3020[5],&l_3020[5],&l_3020[5],&g_322[0]},{&g_322[0],&l_3044[0],&g_322[0],&l_3009[0][1][0],&l_3009[0][2][0],&l_3044[0],&l_3009[0][3][0],&l_3009[0][0][0]}},{{&l_3020[5],&l_3044[0],&l_3009[0][2][0],&l_3020[5],&l_2750[8],&l_3020[5],&l_3009[0][2][0],&l_3044[0]},{&l_3020[5],&l_3009[0][0][0],&l_3009[0][3][0],&l_3044[0],&l_3009[0][2][0],&l_3009[0][1][0],&g_322[0],&l_3044[0]},{&g_322[0],&g_322[0],&l_3020[5],&l_3020[5],&l_3020[5],&g_322[0],&g_322[0],&l_3009[0][0][0]}},{{&g_322[0],&l_3020[5],&l_3009[0][3][0],&l_3009[0][1][0],&g_1556[7][6][2],&g_322[0],&l_3009[0][2][0],&g_322[0]},{&g_1556[7][6][2],&g_322[0],&l_3009[0][2][0],&g_322[0],&g_1556[7][6][2],&l_3009[0][1][0],&l_3009[0][3][0],&l_3020[5]},{&g_322[0],&l_3009[0][0][0],&g_322[0],&g_322[0],&l_3020[5],&l_3020[5],&l_3020[5],&g_322[0]}}};
                    int32_t *l_3326 = &l_2750[2];
                    int32_t *l_3327[7][7] = {{&g_1556[4][2][1],&l_3009[0][3][0],&g_1556[4][2][1],&g_1556[4][2][1],&l_3009[0][3][0],&g_1556[4][2][1],&g_1556[4][2][1]},{&l_3042,&l_3042,&l_3044[0],&l_3042,&l_3042,&l_3044[0],&l_3042},{&l_3009[0][3][0],&g_1556[4][2][1],&g_1556[4][2][1],&l_3009[0][3][0],&g_1556[4][2][1],&g_1556[4][2][1],&l_3009[0][3][0]},{&l_2721,&l_3042,&l_2721,&l_2721,&l_3042,&l_2721,&l_2721},{&l_3009[0][3][0],&l_3009[0][3][0],&l_2268,&l_3009[0][3][0],&l_3009[0][3][0],&l_2268,&l_3009[0][3][0]},{&l_3042,&l_2721,&l_2721,&l_3042,&l_2721,&l_2721,&l_3042},{&g_1556[4][2][1],&l_3009[0][3][0],&g_1556[4][2][1],&g_1556[4][2][1],&l_3009[0][3][0],&g_1556[4][2][1],&g_1556[4][2][1]}};
                    int32_t *l_3328 = &g_1556[4][2][1];
                    int32_t *l_3329 = &l_2721;
                    int32_t *l_3330 = (void*)0;
                    int32_t *l_3331 = &l_3044[0];
                    int32_t *l_3332 = (void*)0;
                    int32_t *l_3333 = &l_2750[3];
                    int32_t *l_3334 = &g_4;
                    int32_t *l_3335 = &g_1556[6][3][0];
                    int32_t ** const l_3252[6][9][4] = {{{&l_3332,&l_3300,&l_3260,&l_3296[0][7][0]},{&l_3332,&l_3286,(void*)0,&l_3253[6][7][1]},{(void*)0,&l_3296[0][7][0],&l_3309,&l_3316[0]},{&l_3324,&l_3332,&l_3332,&l_3324},{&l_3316[0],&l_3309,&l_3296[0][7][0],(void*)0},{&l_3253[6][7][1],(void*)0,&l_3286,&l_3332},{&l_3296[0][7][0],&l_3260,&l_3300,&l_3332},{&l_3282[6][0],(void*)0,&l_3256,(void*)0},{&l_3294,&l_3309,&l_3320[1][0][2],&l_3324}},{{&l_3328,&l_3332,&l_3328,&l_3316[0]},{&l_3305,&l_3296[0][7][0],&l_3278,&l_3253[6][7][1]},{&l_3309,&l_3286,&l_3253[6][7][1],&l_3296[0][7][0]},{&l_3256,&l_3300,&l_3253[6][7][1],&l_3282[6][0]},{&l_3309,&l_3256,&l_3278,(void*)0},{&l_3328,&l_3260,(void*)0,(void*)0},{(void*)0,(void*)0,&l_3260,&l_3328},{(void*)0,&l_3300,&l_3278,&l_3332},{&l_3301[1][2][1],(void*)0,&l_3320[1][0][2],&l_3278}},{{&l_3316[0],(void*)0,&l_3305,&l_3332},{(void*)0,&l_3300,&l_3316[0],&l_3328},{&l_3256,(void*)0,&l_3271[0][2][2],(void*)0},{&l_3264,&l_3260,&l_3332,(void*)0},{&l_3296[0][7][0],&l_3278,&l_3253[6][7][1],&l_3301[1][2][1]},{&l_3271[0][2][2],&l_3320[1][0][2],&l_3282[6][0],&l_3316[0]},{&l_3271[0][2][2],&l_3305,&l_3253[6][7][1],(void*)0},{&l_3296[0][7][0],&l_3316[0],&l_3332,&l_3256},{&l_3264,&l_3271[0][2][2],&l_3271[0][2][2],&l_3264}},{{&l_3256,&l_3332,&l_3316[0],&l_3296[0][7][0]},{(void*)0,&l_3253[6][7][1],&l_3305,&l_3271[0][2][2]},{&l_3316[0],&l_3282[6][0],&l_3320[1][0][2],&l_3271[0][2][2]},{&l_3301[1][2][1],&l_3253[6][7][1],&l_3278,&l_3296[0][7][0]},{(void*)0,&l_3332,&l_3260,&l_3264},{(void*)0,&l_3271[0][2][2],(void*)0,&l_3256},{&l_3328,&l_3316[0],&l_3300,(void*)0},{&l_3332,&l_3305,(void*)0,&l_3316[0]},{&l_3278,&l_3320[1][0][2],(void*)0,&l_3301[1][2][1]}},{{&l_3332,&l_3278,&l_3300,(void*)0},{&l_3328,&l_3260,(void*)0,(void*)0},{(void*)0,(void*)0,&l_3260,&l_3328},{(void*)0,&l_3300,&l_3278,&l_3332},{&l_3301[1][2][1],(void*)0,&l_3320[1][0][2],&l_3278},{&l_3316[0],(void*)0,&l_3305,&l_3332},{(void*)0,&l_3300,&l_3316[0],&l_3328},{&l_3256,(void*)0,&l_3271[0][2][2],(void*)0},{&l_3264,&l_3260,&l_3332,(void*)0}},{{&l_3296[0][7][0],&l_3278,&l_3253[6][7][1],&l_3301[1][2][1]},{&l_3271[0][2][2],&l_3320[1][0][2],&l_3282[6][0],&l_3316[0]},{&l_3271[0][2][2],&l_3305,&l_3253[6][7][1],(void*)0},{&l_3296[0][7][0],&l_3316[0],&l_3332,&l_3256},{&l_3264,&l_3271[0][2][2],&l_3271[0][2][2],&l_3264},{&l_3256,&l_3332,&l_3316[0],&l_3296[0][7][0]},{(void*)0,&l_3253[6][7][1],&l_3305,&l_3271[0][2][2]},{&l_3316[0],&l_3282[6][0],&l_3320[1][0][2],&l_3271[0][2][2]},{&l_3301[1][2][1],&l_3253[6][7][1],&l_3278,&l_3296[0][7][0]}}};
                    int32_t ** const *l_3251[1];
                    int32_t ** const **l_3250 = &l_3251[0];
                    uint8_t *l_3339 = (void*)0;
                    uint8_t *l_3340 = &g_207;
                    uint16_t *l_3343 = &l_3058;
                    union U1 l_3379 = {0xB07B66F1L};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_3262[i] = &g_1556[4][2][1];
                    for (i = 0; i < 5; i++)
                        l_3284[i] = (void*)0;
                    for (i = 0; i < 9; i++)
                        l_3287[i] = &l_3042;
                    for (i = 0; i < 5; i++)
                        l_3297[i] = &l_3009[0][3][0];
                    for (i = 0; i < 2; i++)
                        l_3316[i] = &l_2354;
                    for (i = 0; i < 1; i++)
                        l_3251[i] = &l_3252[0][0][2];
                    l_3243 = &l_3009[0][0][0];
                    (*l_3273) = (+((*l_3343) = (safe_mod_func_uint32_t_u_u(((((p_26 , (safe_sub_func_int16_t_s_s(((*g_902) = ((0xF3L & 250UL) ^ l_3235)), (l_3249[3][4] == ((*l_3250) = (void*)0))))) , (l_2818 = g_3336)) == l_3338) ^ ((*l_3340)--)), (((**g_942) == (void*)0) | (*l_3050))))));
                    l_3346++;
                    (**g_1552) = ((safe_rshift_func_uint8_t_u_u((((**g_277) == ((l_2294[1][0][4] , ((**l_3357) = (safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((l_3357 == (void*)0), p_27)), ((*l_3340) = (((((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((p_27 <= ((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((((*g_988) , ((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(p_26, 5)), (safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((l_3379 , p_27), p_27)), 14)))) != g_1564[3][1][1])) , p_26) ^ 18446744073709551615UL) == g_987[5][3].f2), (-1L))), p_27)), g_464.f3)) != 0x2FDCL)) < g_51[0][4][4]), (*l_3203))), 0xBCL)), 1L)) | (-8L)) & 0UL) <= 0xC1035177B70FD9AELL) ^ p_26)))), 0xF6CA3C152AF281B0LL)))) & (*l_3050))) > 0x97L), 6)) , (void*)0);
                }
                (*g_2034) = (*g_2034);
                for (g_4 = 1; (g_4 <= 5); g_4 += 1)
                {
                    int8_t l_3384 = (-4L);
                    int32_t l_3385 = 0x17F0650CL;
                    int32_t l_3387 = 0xB8DC6D99L;
                    int32_t l_3390 = (-1L);
                    int32_t l_3392 = (-1L);
                    uint16_t l_3394 = 0x0C36L;
                    for (g_605 = 0; (g_605 <= 5); g_605 += 1)
                    {
                        int32_t l_3382 = 7L;
                        int32_t l_3383 = 0L;
                        int32_t l_3388 = (-1L);
                        int32_t l_3389 = 0x5873FA70L;
                        int32_t l_3391 = 0x52A6F1F9L;
                        int32_t l_3393[4][4] = {{0xF5D0931CL,0xF5D0931CL,6L,0xF5D0931CL},{0xF5D0931CL,9L,9L,0xF5D0931CL},{9L,0xF5D0931CL,9L,9L},{0xF5D0931CL,0xF5D0931CL,6L,0xF5D0931CL}};
                        int i, j;
                        p_27 = (safe_lshift_func_uint8_t_u_u((l_3382 &= p_27), 4));
                        l_3383 = (*l_3203);
                        ++l_3394;
                    }
                    if (p_27)
                        continue;
                    for (l_2268 = 0; (l_2268 <= 3); l_2268 += 1)
                    {
                        int32_t *l_3397[6][8] = {{(void*)0,&l_2721,&l_2750[2],&l_2721,(void*)0,(void*)0,&l_2721,&l_2750[2]},{(void*)0,(void*)0,&l_2721,&l_2750[2],&l_2721,&l_2721,&l_2721,&g_1556[4][2][1]},{&l_2750[2],&g_1556[4][2][1],&g_1556[4][2][1],&l_2750[2],(void*)0,&l_2750[2],&g_1556[4][2][1],&g_1556[4][2][1]},{&g_1556[4][2][1],(void*)0,&l_2268,&l_2268,(void*)0,&g_1556[4][2][1],(void*)0,&l_2268},{&l_2750[2],(void*)0,&l_2750[2],&g_1556[4][2][1],&g_1556[4][2][1],&l_2750[2],(void*)0,&l_2750[2]},{&l_2721,&g_1556[4][2][1],&l_2268,&g_1556[4][2][1],&l_2721,&l_2721,&g_1556[4][2][1],&l_2268}};
                        int i, j;
                        (*g_132) = l_3397[5][3];
                    }
                }
                for (l_3058 = 1; (l_3058 <= 4); l_3058 += 1)
                {
                    (*g_132) = &l_3344[7][4];
                }
            }
            for (l_3043 = 4; (l_3043 >= 0); l_3043 -= 1)
            {
                int32_t l_3400 = (-1L);
                int64_t ****l_3417 = &g_845[1];
                int64_t *****l_3416 = &l_3417;
                uint32_t l_3452[3];
                int32_t **l_3453 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_3452[i] = 5UL;
                p_27 = ((safe_add_func_uint32_t_u_u(p_27, l_3400)) ^ ((safe_mul_func_int8_t_s_s(0L, (g_1736[1] ^= (safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((-10L), (l_3400 , (((*l_3050) > ((****g_941) = (l_3407[0] , (3UL <= (p_27 || 0xC6L))))) , (*l_3203))))), (-5L)))))) < g_973));
                p_27 = p_26;
                if ((safe_lshift_func_int16_t_s_s((0x1314CE33L & p_27), 12)))
                {
                    const uint32_t *l_3411 = &g_256;
                    const uint32_t **l_3410 = &l_3411;
                    const uint32_t ***l_3412 = &l_3410;
                    uint32_t ***l_3415[7] = {&g_2263,&g_2263,&g_2263,&g_2263,&g_2263,&g_2263,&g_2263};
                    int64_t *****l_3418 = &l_3417;
                    int i, j;
                    (*l_3412) = l_3410;
                    for (l_2354 = 0; (l_2354 <= 4); l_2354 += 1)
                    {
                        uint32_t ***l_3414 = &g_2263;
                        l_3413 = &g_2991;
                        l_3415[2] = l_3414;
                    }
                    l_3419 = (l_3418 = l_3416);
                    (*l_3050) &= 8L;
                }
                else
                {
                    uint32_t l_3436 = 7UL;
                    int32_t l_3437 = 0xA7D68506L;
                    uint32_t *l_3444 = (void*)0;
                    uint32_t *l_3445 = &l_2545;
                    for (g_973 = 5; (g_973 >= 1); g_973 -= 1)
                    {
                        int16_t ****l_3422 = &g_3420;
                        int32_t l_3423 = 0L;
                        (*l_3050) = p_27;
                        (*l_3422) = g_3420;
                        if (l_3423)
                            break;
                        if (p_27)
                            break;
                    }
                    (*l_3050) ^= (l_3424 , (l_3437 = ((!(((*g_484) , g_1756[0][9]) | (((((p_26 , p_25) == (l_3426 = p_25)) ^ (((safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((((0xA1F7B759L > (safe_add_func_uint32_t_u_u(g_2134, (&g_845[2] == l_3435)))) < l_3436) , 0x5D2913E9L) , p_26), p_26)) > p_26), l_3400)), g_225.f2)) && (-3L)) || p_26)) >= p_26) <= (*l_3203)))) >= (**g_277))));
                    if ((((p_27 = ((*l_3050) = ((((((safe_div_func_uint32_t_u_u((((p_26 & 255UL) , l_3424) , (*l_3050)), ((*l_3203) = 0xFDDDA5EBL))) & (safe_add_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(((*l_3445) = g_3133), (l_3437 |= (safe_mod_func_uint8_t_u_u(((((safe_div_func_int8_t_s_s((**g_277), l_3400)) == (safe_sub_func_uint32_t_u_u(5UL, p_27))) && 1UL) , p_26), p_26))))) > l_3452[0]), p_26))) , 0x2659L) && 0xD9D9L) ^ l_3452[0]) > p_26))) == p_26) == 18446744073709551609UL))
                    {
                        int32_t ***l_3454[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t l_3455 = (-8L);
                        int i;
                        (*g_132) = &p_27;
                        l_3400 = ((l_3453 = l_3453) != (void*)0);
                        if (l_3455)
                            continue;
                        if ((*l_3203))
                            break;
                    }
                    else
                    {
                        return (*g_278);
                    }
                    for (g_464.f3 = 5; (g_464.f3 >= 0); g_464.f3 -= 1)
                    {
                        (*g_132) = &p_27;
                    }
                }
            }
            --l_3457;
        }
        for (g_464.f2 = 0; (g_464.f2 <= 3); g_464.f2 += 1)
        {
            uint64_t l_3466 = 18446744073709551615UL;
            int16_t l_3471 = 0L;
            int32_t l_3472 = (-1L);
            int32_t l_3473[6][8][3] = {{{0xEA995E8FL,7L,0x30C80A4FL},{0xCC848A8BL,0xF7C148C9L,0xCC848A8BL},{0x30C80A4FL,7L,0xEA995E8FL},{0xFB81944DL,(-1L),1L},{1L,0x002D1AF5L,0L},{1L,1L,1L},{1L,0x30C80A4FL,0x002D1AF5L},{0xFB81944DL,1L,6L}},{{0x30C80A4FL,0x4E3A403DL,0x4E3A403DL},{0xCC848A8BL,0xFB81944DL,6L},{0xEA995E8FL,0x9658E4D0L,0x002D1AF5L},{1L,0L,1L},{0L,0L,0L},{1L,0L,1L},{0x002D1AF5L,0x9658E4D0L,0xEA995E8FL},{6L,0xFB81944DL,0xCC848A8BL}},{{0x4E3A403DL,0x4E3A403DL,0x30C80A4FL},{6L,1L,0xFB81944DL},{0x002D1AF5L,0x30C80A4FL,1L},{1L,1L,1L},{0L,0x002D1AF5L,1L},{1L,(-1L),0xFB81944DL},{0xEA995E8FL,7L,0x30C80A4FL},{0xCC848A8BL,0xF7C148C9L,0xCC848A8BL}},{{0x30C80A4FL,7L,0xEA995E8FL},{0xFB81944DL,(-1L),1L},{1L,0x002D1AF5L,0L},{1L,1L,1L},{1L,0x30C80A4FL,0x002D1AF5L},{0xFB81944DL,1L,6L},{0x30C80A4FL,0x4E3A403DL,0x4E3A403DL},{0xCC848A8BL,0xFB81944DL,6L}},{{0xEA995E8FL,0x9658E4D0L,0x002D1AF5L},{1L,0L,1L},{0L,0L,0L},{1L,0L,1L},{0x002D1AF5L,0x9658E4D0L,0xEA995E8FL},{6L,0xFB81944DL,0xCC848A8BL},{0x4E3A403DL,0x4E3A403DL,0x30C80A4FL},{6L,1L,0xFB81944DL}},{{0x002D1AF5L,0x30C80A4FL,1L},{1L,1L,1L},{0L,0x002D1AF5L,1L},{1L,(-1L),0xFB81944DL},{0xEA995E8FL,7L,0x30C80A4FL},{0xCC848A8BL,0xF7C148C9L,0xCC848A8BL},{0x30C80A4FL,7L,0xEA995E8FL},{0xF7C148C9L,6L,0xCC848A8BL}}};
            uint8_t *l_3474[5][10] = {{&g_2134,&g_19.f2,&g_531[0][3].f2,&g_19.f2,&g_2134,(void*)0,(void*)0,&g_2134,&g_2134,(void*)0},{&g_531[0][3].f2,(void*)0,&g_19.f2,&g_19.f2,(void*)0,&g_531[0][3].f2,&g_2571,(void*)0,&g_2134,(void*)0},{&g_19.f2,&g_19.f2,&g_2134,&g_2134,&g_2134,&g_19.f2,&g_19.f2,&g_2571,&g_734.f2,&g_734.f2},{&g_19.f2,&g_734.f2,&g_531[0][3].f2,&g_531[0][3].f2,&g_531[0][3].f2,&g_531[0][3].f2,&g_734.f2,&g_19.f2,(void*)0,&g_2571},{&g_531[0][3].f2,&g_734.f2,&g_19.f2,(void*)0,&g_2571,(void*)0,&g_19.f2,&g_734.f2,&g_531[0][3].f2,&g_531[0][3].f2}};
            int i, j, k;
            l_3203 = &p_27;
            if (p_26)
                goto lbl_3052;
            l_3044[1] |= (p_27 | (l_3460 , ((*l_3050) > ((void*)0 == &g_3420))));
            l_3044[0] &= (((((safe_rshift_func_int8_t_s_s(((!((*l_3203) = ((l_3466 < ((*l_3203) ^ (((l_3473[2][6][1] = (((p_26 || (l_3472 = (safe_unary_minus_func_uint32_t_u((p_26 = (((**l_2251) != (**l_2251)) != ((*l_3050) , (((((*l_3050) , (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((p_27 | (((((*l_3072) ^= (((*l_3050) = ((1UL <= 0UL) < l_3466)) || l_3466)) < p_26) > 3L) > 0x457CL)))), 4))) ^ l_3471) , (****g_941)) > 0x4EL)))))))) != (-1L)) <= p_27)) == l_3466) | p_27))) < p_27))) , (**g_277)), l_3466)) , (*l_3050)) < 0xC4399611L) , (-1L)) | 0x11BDC218EBFE731CLL);
        }
    }
    return p_27;
}







static int8_t * func_28(int32_t p_29, uint32_t p_30, int8_t * p_31, int8_t * p_32, uint32_t p_33)
{
    union U3 l_1993 = {-10L};
    union U3 *** const l_1995 = &g_123;
    union U3 ***l_1996 = (void*)0;
    uint32_t l_1999 = 0x35313EEAL;
    int32_t l_2000 = 0xAB23F07EL;
    union U2 *l_2029 = (void*)0;
    union U2 **l_2028 = &l_2029;
    uint64_t *l_2042 = &g_1866[2];
    uint64_t l_2067[4] = {0xBB8B244587BEAB01LL,0xBB8B244587BEAB01LL,0xBB8B244587BEAB01LL,0xBB8B244587BEAB01LL};
    union U1 *l_2088 = &g_464;
    int32_t l_2115 = 0x52614BA3L;
    int32_t l_2116 = 0x4F933736L;
    int32_t l_2119 = 0x6D4ADA5AL;
    int32_t l_2120 = (-5L);
    int32_t l_2122 = 0xCC2DA3B9L;
    int32_t l_2123 = 8L;
    int32_t l_2125 = (-6L);
    int32_t l_2126 = (-7L);
    int32_t l_2127 = 0x68C52050L;
    int32_t l_2128 = 4L;
    int32_t l_2129 = 1L;
    int32_t l_2130 = 7L;
    int32_t l_2131[10][10] = {{(-1L),(-1L),(-1L),0xC5C3C3AEL,0L,(-1L),0L,0xC5C3C3AEL,(-1L),(-1L)},{4L,0xC5C3C3AEL,0x0127420EL,(-8L),4L,(-8L),0x0127420EL,0xC5C3C3AEL,4L,0xC5C3C3AEL},{0L,(-8L),(-1L),0x56A42623L,(-1L),(-8L),0L,0x56A42623L,0L,(-8L)},{4L,0x56A42623L,0xE7374489L,0x56A42623L,4L,(-1L),0xE7374489L,(-1L),4L,0x56A42623L},{(-1L),0x56A42623L,(-1L),(-8L),0L,0x56A42623L,0L,(-8L),(-1L),0x56A42623L},{4L,(-8L),0x0127420EL,0xC5C3C3AEL,4L,0xC5C3C3AEL,0x0127420EL,(-8L),4L,(-8L)},{0L,0xC5C3C3AEL,(-1L),(-1L),(-1L),0xC5C3C3AEL,0L,(-1L),0L,0xC5C3C3AEL},{4L,(-1L),0xE7374489L,(-1L),4L,0x56A42623L,0xE7374489L,0x56A42623L,4L,(-1L)},{(-1L),(-1L),(-1L),0xC5C3C3AEL,0L,(-1L),0L,0xC5C3C3AEL,(-1L),(-1L)},{4L,0xC5C3C3AEL,0x0127420EL,(-8L),4L,(-8L),0x0127420EL,0xC5C3C3AEL,4L,0xC5C3C3AEL}};
    int32_t l_2139 = 0L;
    int16_t *l_2140[7][6] = {{&g_464.f3,&g_464.f3,&g_973,&g_464.f3,&g_464.f3,&g_464.f3},{&g_464.f3,&g_464.f3,&g_464.f3,&g_464.f3,&g_464.f3,&g_464.f3},{(void*)0,&g_464.f3,&g_464.f3,&g_464.f3,&g_464.f3,&g_464.f3},{&g_464.f3,(void*)0,&g_464.f3,&g_973,&g_973,&g_464.f3},{&g_464.f3,&g_464.f3,&g_973,&g_464.f3,&g_973,&g_464.f3},{(void*)0,&g_464.f3,(void*)0,&g_464.f3,&g_464.f3,&g_464.f3},{(void*)0,&g_464.f3,&g_464.f3,(void*)0,&g_973,&g_464.f3}};
    uint32_t *l_2164 = &g_225.f1;
    uint32_t **l_2163 = &l_2164;
    int32_t l_2207 = 0xC8995CB6L;
    int16_t l_2208 = 3L;
    int i, j;
    return p_31;
}







static const uint64_t func_35(union U1 p_36, int16_t p_37, uint32_t p_38, uint16_t p_39)
{
    int8_t **** const l_1715 = &g_942;
    int32_t l_1718 = 5L;
    union U3 l_1720 = {-1L};
    union U3 ***l_1731 = &g_123;
    int32_t l_1746 = 0x0FE7C3F9L;
    int32_t l_1747 = 0xF648E746L;
    int32_t l_1748 = (-10L);
    int32_t l_1753 = 9L;
    int32_t l_1755 = (-1L);
    union U0 l_1838 = {-1L};
    uint8_t l_1881 = 246UL;
    int32_t l_1938 = (-1L);
    int32_t *l_1969 = &l_1748;
    union U2 l_1982 = {4294967286UL};
    for (p_36.f4 = 0; (p_36.f4 < 55); p_36.f4 = safe_add_func_uint16_t_u_u(p_36.f4, 7))
    {
        int32_t *l_1703 = (void*)0;
        int32_t l_1713[3];
        const int8_t ***l_1717 = (void*)0;
        const int8_t ****l_1716 = &l_1717;
        union U3 ***l_1732 = &g_123;
        int16_t * const *l_1735[1];
        int32_t l_1737[7];
        int16_t l_1738 = 0x688AL;
        int16_t l_1798[7];
        union U1 l_1908 = {0x160F2860L};
        union U3 **l_1976 = &g_317[1];
        union U3 ***l_1977 = &l_1976;
        int i;
        for (i = 0; i < 3; i++)
            l_1713[i] = 1L;
        for (i = 0; i < 1; i++)
            l_1735[i] = (void*)0;
        for (i = 0; i < 7; i++)
            l_1737[i] = 0x3E869A26L;
        for (i = 0; i < 7; i++)
            l_1798[i] = 0x45F6L;
        l_1703 = (*g_132);
        for (g_464.f1 = 0; (g_464.f1 <= 5); g_464.f1 += 1)
        {
            int32_t * const *l_1708 = &g_1498;
            int32_t l_1714 = 0x615244E5L;
            int32_t *l_1719 = &g_322[0];
            int32_t l_1745 = 0xC633DF7FL;
            int32_t l_1749 = 0x5F74FDF1L;
            int32_t l_1750 = 5L;
            int32_t l_1751 = 0L;
            int32_t l_1752 = 0xFA732EE3L;
            int32_t l_1754 = 2L;
            uint16_t l_1802 = 1UL;
            uint32_t l_1805 = 0x3E5F6302L;
            uint32_t l_1826 = 1UL;
            int i;
            (*l_1719) ^= (safe_add_func_int16_t_s_s(((((**g_277) = p_36.f2) | ((g_331[2][1][0] , (safe_mul_func_uint8_t_u_u((((void*)0 != l_1708) , (safe_sub_func_int8_t_s_s(((safe_add_func_int16_t_s_s((-1L), (l_1713[0] & l_1714))) <= (p_36.f3 == (l_1715 != l_1716))), p_36.f4))), p_36.f3))) <= 0x96L)) != 1UL), l_1718));
            if (((((l_1720 , 0xC98CL) , ((safe_rshift_func_int16_t_s_s((*g_902), (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((safe_div_func_int32_t_s_s(((g_464.f2 == ((l_1732 = l_1731) == (*g_1552))) || p_39), (((((((((((safe_mod_func_uint64_t_u_u(((l_1735[0] == l_1735[0]) & g_1736[2]), l_1737[1])) , p_36.f3) & g_987[5][3].f2) & p_36.f3) == p_39) , p_39) , (***g_941)) != (void*)0) > 0UL) , (***g_942)) | l_1738))) || g_322[0]) != l_1720.f1), p_36.f3)), 0UL)))) && l_1720.f1)) , (*g_278)) , p_37))
            {
                int32_t *l_1739 = &l_1713[0];
                int32_t *l_1740 = &g_1556[4][2][1];
                int32_t *l_1741 = (void*)0;
                int32_t *l_1742 = &g_322[0];
                int32_t *l_1743 = (void*)0;
                int32_t *l_1744[5];
                union U2 l_1761 = {1UL};
                int i;
                for (i = 0; i < 5; i++)
                    l_1744[i] = &l_1737[1];
                g_1756[0][9]++;
                for (l_1747 = 0; (l_1747 <= 2); l_1747 += 1)
                {
                    union U2 l_1780 = {8UL};
                    int32_t l_1781 = 1L;
                    uint8_t *l_1792 = &g_531[0][3].f2;
                    uint16_t *l_1793 = &g_1193;
                    uint16_t *l_1794 = &g_1682;
                    int32_t l_1796 = 0xE8FCB84FL;
                    int32_t l_1799[8][1][8] = {{{0xEA06B346L,0xEA06B346L,0L,0x194219A3L,0xAE4A3579L,0x742049BDL,0x0169BC62L,0xDB5EF166L}},{{0x10A29182L,1L,0x2611BDFBL,0x742049BDL,(-2L),0x78EC391AL,0xFA120A47L,0xDB5EF166L}},{{1L,(-2L),0xC32003DFL,0x194219A3L,0x026C8195L,0x194219A3L,0xC32003DFL,(-2L)}},{{0x75B38442L,0L,0x026C8195L,(-8L),0x6A9FA155L,(-7L),(-2L),0x78EC391AL}},{{0xFA120A47L,0x2611BDFBL,0xDB5EF166L,0xC32003DFL,0x75B38442L,0x4C32C769L,(-2L),0xAE4A3579L}},{{4L,0xC32003DFL,0x026C8195L,(-7L),(-7L),0x026C8195L,0xC32003DFL,4L}},{{(-7L),0x026C8195L,0xC32003DFL,4L,0xEA06B346L,(-8L),0xFA120A47L,0x10A29182L}},{{0xC32003DFL,0xDB5EF166L,0x2611BDFBL,0xFA120A47L,4L,(-8L),0x0169BC62L,0x194219A3L}}};
                    int i, j, k;
                    (*l_1719) = (safe_rshift_func_uint8_t_u_u(g_1556[l_1747][(g_464.f1 + 2)][l_1747], (l_1761 , g_1756[(g_464.f1 + 2)][l_1747])));
                    for (l_1749 = 3; (l_1749 >= 0); l_1749 -= 1)
                    {
                        int i, j, k;
                        if (l_1746)
                            break;
                        if (p_36.f2)
                            break;
                        (*l_1739) ^= ((g_531[3][1] , ((p_36.f2 >= (l_1781 ^= (safe_lshift_func_uint8_t_u_s(((0x91C74C26L < (0UL == (((safe_mod_func_int64_t_s_s((safe_div_func_int8_t_s_s(l_1720.f2, (safe_div_func_int64_t_s_s((*l_1719), (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u((((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((((l_1780 , (*l_1732)) != (void*)0) , p_36.f4), (*l_1740))), 1L)) , 0xED59861FF7F9958ELL) >= p_38), p_37)), p_36.f4)), (*g_903))))))), g_1556[4][3][1])) || g_1756[(g_464.f1 + 2)][l_1747]) != p_39))) , l_1753), (***g_942))))) , (void*)0)) == (void*)0);
                    }
                    if ((g_331[2][1][0] && (((safe_mul_func_int8_t_s_s(0x65L, p_37)) , l_1718) <= (((l_1780.f2 , 1UL) == p_36.f2) < (safe_rshift_func_int16_t_s_s((((*l_1794) = ((*l_1793) &= ((safe_add_func_uint8_t_u_u(((*l_1792) = (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(p_37, (*l_1719))), g_1756[(g_464.f1 + 2)][l_1747]))), p_36.f3)) , p_36.f2))) >= 0xFC3BL), p_36.f3))))))
                    {
                        int64_t l_1795[9][2];
                        int32_t l_1797 = 1L;
                        int32_t l_1800 = 0L;
                        int32_t l_1801[3][1][5] = {{{0xCF55A9E1L,(-1L),(-1L),0xCF55A9E1L,0x3DDCE6F9L}},{{0xCF55A9E1L,2L,0xC525536DL,0xC525536DL,2L}},{{0x3DDCE6F9L,(-1L),0xC525536DL,1L,1L}}};
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_1795[i][j] = 0x48CB8B5E50199C3DLL;
                        }
                        ++l_1802;
                        l_1805++;
                    }
                    else
                    {
                        uint64_t l_1812 = 0x82D3C0673D6EFC57LL;
                        (*l_1740) = (((((0x7715L & ((-9L) || ((*l_1793) = 65535UL))) >= (&g_905 != (void*)0)) , (safe_lshift_func_int16_t_s_s(((void*)0 != &g_531[0][3]), 7))) == 0L) && ((((safe_rshift_func_int16_t_s_s((l_1812 = l_1713[1]), 6)) && (-1L)) && p_36.f4) <= 0xBC886EAEL));
                    }
                }
                for (l_1750 = 0; (l_1750 <= 0); l_1750 += 1)
                {
                    int32_t l_1816 = (-6L);
                    int32_t l_1819 = (-2L);
                    int32_t l_1820 = 0x3B362697L;
                    int32_t l_1821 = 0xB6D69719L;
                    int32_t l_1825[6];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_1825[i] = 0xF81B1033L;
                    for (g_127 = 0; (g_127 <= 2); g_127 += 1)
                    {
                        uint32_t l_1813 = 0x4180587CL;
                        int32_t l_1817 = 0x24E5C142L;
                        int32_t l_1818 = (-10L);
                        int32_t l_1822 = (-7L);
                        int32_t l_1823 = 0L;
                        int32_t l_1824 = 4L;
                        int i, j, k;
                        l_1813++;
                        l_1826--;
                        l_1825[0] ^= (-1L);
                        (*l_1719) = (safe_lshift_func_uint8_t_u_u(g_1556[(g_127 + 6)][(g_464.f1 + 1)][(l_1750 + 2)], 0));
                    }
                    l_1820 |= (0L ^ (safe_mod_func_uint32_t_u_u(g_1556[(l_1750 + 3)][(g_464.f1 + 2)][(l_1750 + 2)], 0x94513D4CL)));
                    if (p_39)
                        break;
                }
            }
            else
            {
                int32_t l_1845 = 0xBBACB808L;
                int32_t l_1865[5] = {0x59C5E4ABL,0x59C5E4ABL,0x59C5E4ABL,0x59C5E4ABL,0x59C5E4ABL};
                uint32_t l_1896[10] = {0xE165132DL,0UL,0xE165132DL,0xE165132DL,0UL,0xE165132DL,0xE165132DL,0UL,0xE165132DL,0xE165132DL};
                int32_t *l_1942 = (void*)0;
                int8_t l_1958 = 0L;
                int64_t *l_1959[7] = {(void*)0,(void*)0,&g_225.f3,(void*)0,(void*)0,&g_225.f3,(void*)0};
                int32_t *l_1960[1][9][4] = {{{&l_1750,&l_1754,&l_1754,&l_1750},{&l_1750,&l_1754,&l_1754,&l_1750},{&l_1750,&l_1754,&l_1754,&l_1750},{&l_1750,&l_1754,&l_1754,&l_1750},{&l_1750,&l_1754,&l_1754,&l_1750},{&l_1750,&l_1754,&l_1754,&l_1750},{&l_1750,&l_1754,&l_1754,&l_1750},{&l_1750,&l_1754,&l_1754,&l_1750},{&l_1750,&l_1754,&l_1754,&l_1750}}};
                int i, j, k;
                for (g_973 = 2; (g_973 >= 0); g_973 -= 1)
                {
                    int64_t ***l_1835 = (void*)0;
                    int32_t l_1846 = 0x0C132502L;
                    int32_t l_1863 = 5L;
                    int32_t l_1864[4];
                    int32_t *l_1883 = &l_1865[4];
                    int32_t *l_1884 = &l_1713[0];
                    int32_t *l_1885 = &l_1713[0];
                    int32_t *l_1886 = &l_1749;
                    int32_t *l_1887 = &g_322[0];
                    int32_t *l_1888 = &l_1753;
                    int32_t *l_1889 = &l_1747;
                    int32_t *l_1890 = &g_322[0];
                    int32_t *l_1891 = &l_1863;
                    int32_t *l_1892 = &l_1748;
                    int32_t *l_1893 = &l_1718;
                    int32_t *l_1894 = (void*)0;
                    int32_t *l_1895[10] = {(void*)0,&l_1751,&l_1737[4],&l_1751,(void*)0,(void*)0,&l_1751,&l_1737[4],&l_1751,(void*)0};
                    union U2 l_1925 = {0xCE490B3EL};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_1864[i] = 0L;
                    if ((safe_mod_func_int8_t_s_s(((g_1556[(g_464.f1 + 3)][(g_464.f1 + 2)][g_973] | ((void*)0 != l_1835)) , (safe_lshift_func_uint16_t_u_u((l_1838 , (safe_mod_func_int32_t_s_s(0x2E654F8FL, (l_1846 |= (safe_mul_func_uint8_t_u_u(p_36.f3, (func_40((safe_mul_func_int16_t_s_s((((**g_277) |= ((*g_903) , p_36.f2)) || p_36.f2), l_1845))) , g_1556[(g_464.f1 + 3)][(g_464.f1 + 2)][g_973]))))))), 8))), 0x4EL)))
                    {
                        int32_t *l_1847 = &l_1745;
                        int32_t l_1848 = 1L;
                        int32_t *l_1849 = &l_1753;
                        int32_t *l_1850 = &l_1713[1];
                        int32_t *l_1851 = &l_1754;
                        int32_t *l_1852 = &l_1737[2];
                        int32_t *l_1853 = (void*)0;
                        int32_t *l_1854 = &l_1746;
                        int32_t *l_1855 = &g_322[0];
                        int32_t *l_1856 = (void*)0;
                        int32_t *l_1857 = &l_1845;
                        int32_t *l_1858 = &l_1749;
                        int32_t *l_1859 = &l_1737[1];
                        int32_t *l_1860 = (void*)0;
                        int32_t *l_1861[5];
                        int16_t l_1862 = 0xB990L;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1861[i] = &l_1713[0];
                        g_1866[2]++;
                    }
                    else
                    {
                        uint64_t l_1875 = 0xFD0D95005C1EBA5BLL;
                        uint8_t *l_1880 = &g_531[0][3].f2;
                        uint16_t *l_1882 = &g_127;
                        l_1845 = (safe_rshift_func_uint16_t_u_u((((*l_1882) = (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint64_t_u_u(g_318.f0, (((((*l_1719) ^= (l_1865[2] == 0x88DDA2DFL)) <= (l_1875 < p_36.f4)) >= (safe_mul_func_int16_t_s_s((4UL < ((*l_1880) ^= (0xAC17L == (safe_sub_func_int32_t_s_s(l_1875, (-5L)))))), p_36.f2))) , l_1881))), 7))) <= g_1556[(g_464.f1 + 3)][(g_464.f1 + 2)][g_973]), 6));
                        (*g_132) = &l_1750;
                        (*l_1719) &= ((**g_132) &= (&g_172 != (void*)0));
                    }
                    l_1896[8]--;
                    (*l_1719) = (l_1747 = ((l_1755 = (~(l_1753 , (safe_add_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((*l_1719), (*l_1719))) == ((l_1908 = p_36) , ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((((p_39 == (((((~((safe_unary_minus_func_int8_t_s(((****g_941) = (~((safe_mod_func_uint32_t_u_u(4294967295UL, (~(safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(((((g_101 ^ (g_989.f0 ^ (safe_lshift_func_uint16_t_u_u(((l_1925 , p_36.f4) , 9UL), 7)))) , (*g_902)) && g_1556[6][7][0]) ^ (*l_1719)), 7)), (**g_277)))))) ^ p_39))))) || l_1713[0])) || p_38) || (-10L)) && p_36.f2) < p_39)) == p_36.f3) & p_38), p_37)), l_1713[0])) > 8L))), p_37)) != 0x1441L), 8UL))))) && 0x4DL));
                }
                for (g_623 = 0; (g_623 == (-6)); g_623--)
                {
                    int32_t *l_1935 = &l_1748;
                    int32_t *l_1936 = &l_1746;
                    int32_t *l_1937[8][10][2] = {{{(void*)0,&l_1748},{&g_1556[4][2][1],&l_1747},{&l_1845,&l_1753},{&l_1865[4],&l_1737[6]},{&l_1713[2],&l_1845},{(void*)0,(void*)0},{(void*)0,&l_1713[2]},{&l_1748,(void*)0},{&g_1556[4][2][1],(void*)0},{&l_1713[1],&g_1556[4][2][1]}},{{&l_1749,&l_1751},{&l_1749,&g_1556[4][2][1]},{&l_1713[1],(void*)0},{&g_1556[4][2][1],(void*)0},{&l_1748,&l_1713[2]},{(void*)0,(void*)0},{(void*)0,&l_1845},{&l_1713[2],(void*)0},{&l_1747,&g_1556[4][2][1]},{(void*)0,&l_1737[6]}},{{&l_1751,&l_1713[2]},{&g_322[0],&g_464.f0},{&l_1753,&l_1747},{&l_1749,&l_1713[1]},{&l_1713[1],(void*)0},{&l_1737[6],&l_1748},{(void*)0,&l_1748},{&l_1737[6],(void*)0},{&l_1713[1],&l_1713[1]},{&l_1749,&l_1747}},{{&l_1753,&g_464.f0},{&g_322[0],&l_1713[2]},{&l_1751,&l_1737[6]},{(void*)0,&g_1556[4][2][1]},{&l_1747,(void*)0},{&l_1845,(void*)0},{&l_1749,&l_1749},{&l_1754,(void*)0},{&l_1713[2],&l_1745},{&l_1751,&l_1865[4]}},{{&g_464.f0,&l_1751},{(void*)0,&l_1845},{(void*)0,&l_1751},{&g_464.f0,&l_1865[4]},{&l_1751,&l_1745},{&l_1713[2],(void*)0},{&l_1754,&l_1749},{&l_1749,(void*)0},{&l_1845,(void*)0},{&l_1747,&g_1556[4][2][1]}},{{(void*)0,&l_1737[6]},{&l_1751,&l_1713[2]},{&g_322[0],&g_464.f0},{&l_1753,&l_1747},{&l_1749,&l_1713[1]},{&l_1713[1],(void*)0},{&l_1737[6],&l_1748},{(void*)0,&l_1748},{&l_1737[6],(void*)0},{&l_1713[1],&l_1713[1]}},{{&l_1749,&l_1747},{&l_1753,&g_464.f0},{&g_322[0],&l_1713[2]},{&l_1751,&l_1737[6]},{(void*)0,&g_1556[4][2][1]},{&l_1747,(void*)0},{&l_1845,(void*)0},{&l_1749,&l_1749},{&l_1754,(void*)0},{&l_1713[2],&l_1745}},{{&l_1751,&l_1865[4]},{&g_464.f0,&l_1751},{(void*)0,&l_1845},{(void*)0,&l_1751},{&g_464.f0,&l_1865[4]},{&l_1751,&l_1745},{&l_1713[2],(void*)0},{&l_1754,&l_1749},{&l_1749,(void*)0},{&l_1845,(void*)0}}};
                    uint16_t l_1939 = 2UL;
                    int i, j, k;
                    if (p_38)
                        break;
                    (*l_1935) &= ((0UL < (((safe_mod_func_int16_t_s_s((p_36.f2 , (g_973 = (p_37 = (safe_div_func_int64_t_s_s(0x6B0099D373FBA0E6LL, (*l_1719)))))), 1L)) , (safe_rshift_func_uint8_t_u_s(p_36.f2, 3))) ^ (~0x31L))) > (*g_902));
                    --l_1939;
                }
                l_1942 = &l_1737[0];
                l_1746 &= ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((*l_1719), 4)), 2)) ^ (((l_1748 &= (((~((0xD2FC1B7FL & ((((void*)0 == &g_464) , l_1938) , ((void*)0 != &g_129[0][4][4]))) >= (safe_sub_func_uint16_t_u_u(((*l_1942) & ((safe_sub_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(g_1736[2], p_37)), 0x40A130120913E4B4LL)) != 0x16L)), l_1958)))) , 0x88L) < p_36.f4)) | (*l_1719)) == p_39));
            }
            for (p_38 = 0; (p_38 <= 6); p_38 += 1)
            {
                uint16_t *l_1965 = &l_1908.f2;
                int i;
                (*l_1731) = (*l_1732);
                (*l_1719) = (((l_1737[p_38] , 65528UL) ^ p_38) != (safe_lshift_func_int16_t_s_u(l_1737[p_38], (safe_lshift_func_uint16_t_u_u(((*l_1965) = (*l_1719)), (safe_div_func_uint64_t_u_u(p_37, (~((*g_902) ^ (&p_39 == &g_1564[3][1][1]))))))))));
                if (p_37)
                    continue;
                (*g_132) = l_1969;
            }
            return g_989.f0;
        }
        l_1713[0] = (p_36.f2 ^ (g_1280 && ((safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s(((*g_278) |= (0xF177L != ((*g_1553) == ((*l_1977) = l_1976)))), (*l_1969))), ((+(safe_sub_func_uint8_t_u_u((~((l_1982 , (safe_mul_func_uint8_t_u_u(0xC8L, ((~p_36.f3) && (*l_1969))))) && p_37)), (*l_1969)))) >= (*l_1969)))) > p_36.f4)));
    }
    l_1969 = &l_1753;
    for (g_118.f1 = 15; (g_118.f1 < 21); g_118.f1 = safe_add_func_uint8_t_u_u(g_118.f1, 7))
    {
        (*g_132) = &l_1718;
    }
    (*g_132) = &l_1938;
    return g_207;
}







static union U1 func_40(int64_t p_41)
{
    int8_t l_1698 = 0x3CL;
    int32_t *l_1699 = &g_322[0];
    union U1 l_1700 = {-9L};
    (*l_1699) ^= l_1698;
    return l_1700;
}







static int64_t func_42(int32_t * p_43, int64_t p_44, const int16_t p_45)
{
    union U3 l_1382[1] = {{1L}};
    union U2 l_1392 = {0UL};
    int32_t l_1412 = (-1L);
    const int32_t *l_1448 = &g_322[0];
    union U3 **l_1509 = &g_317[2];
    int32_t l_1519 = (-1L);
    int32_t l_1520 = 0xAE523CC9L;
    int32_t l_1521 = 0x903FEA57L;
    int32_t l_1522 = (-7L);
    int32_t l_1523[8][10] = {{0x20371353L,0L,0x182144C2L,9L,0x52564568L,0x615A0DC8L,0x20371353L,1L,1L,9L},{0x182144C2L,(-10L),1L,0x615A0DC8L,(-7L),0x615A0DC8L,1L,(-10L),0x182144C2L,1L},{0x20371353L,(-7L),0x39A08F36L,(-10L),(-7L),3L,9L,9L,0x39A08F36L,9L},{(-7L),0L,0x52564568L,(-10L),0x52564568L,0L,(-7L),1L,0x182144C2L,(-10L)},{0x182144C2L,9L,0x52564568L,0x615A0DC8L,0x20371353L,1L,1L,9L,1L,1L},{9L,9L,0x39A08F36L,9L,9L,3L,(-7L),(-10L),0x39A08F36L,(-7L)},{9L,0L,1L,(-7L),0x52564568L,0xE395D1FBL,1L,0xE395D1FBL,0x69F247CCL,0L},{1L,0L,1L,0x2775D12CL,1L,3L,0x39A08F36L,0L,0x69F247CCL,0xE395D1FBL}};
    union U1 l_1580 = {0x9FACF9FEL};
    uint32_t l_1596 = 0x80A52D46L;
    int16_t **l_1625 = &g_905;
    int16_t *** const l_1624[7] = {&l_1625,&l_1625,&l_1625,&l_1625,&l_1625,&l_1625,&l_1625};
    int16_t ***l_1626 = &l_1625;
    union U0 *l_1629 = &g_221[2];
    uint32_t l_1669 = 18446744073709551606UL;
    const uint32_t l_1685 = 18446744073709551608UL;
    int i, j;
    for (g_464.f1 = 15; (g_464.f1 >= 9); g_464.f1 = safe_sub_func_int16_t_s_s(g_464.f1, 7))
    {
        int8_t **** const *l_1395[6][5][5] = {{{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,(void*)0,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,&g_941}},{{&g_941,&g_941,&g_941,&g_941,&g_941},{(void*)0,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,(void*)0,&g_941,&g_941,&g_941}},{{&g_941,&g_941,(void*)0,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,&g_941}},{{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,(void*)0,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,&g_941}},{{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,(void*)0,&g_941,&g_941}},{{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941,&g_941,(void*)0},{&g_941,&g_941,&g_941,&g_941,&g_941}}};
        uint32_t *l_1398 = &l_1392.f0;
        int32_t l_1399[2];
        uint64_t *l_1467[10][7] = {{&g_331[3][6][3],&g_331[1][4][0],&g_331[2][1][0],&g_331[2][4][2],&g_331[1][4][0],(void*)0,(void*)0},{(void*)0,&g_331[2][0][0],&g_331[2][1][0],&g_331[2][1][0],&g_331[2][0][0],(void*)0,&g_331[2][1][0]},{&g_331[3][6][3],&g_331[2][0][0],&g_331[2][1][0],&g_331[2][4][2],&g_331[2][0][0],&g_331[2][1][0],&g_331[2][1][0]},{&g_331[2][3][0],&g_331[2][1][0],&g_331[3][2][0],&g_331[2][1][0],&g_331[2][1][0],&g_331[2][1][0],&g_331[2][1][0]},{&g_331[2][1][0],&g_331[2][1][0],&g_331[3][2][0],&g_331[3][2][0],&g_331[2][1][0],&g_331[2][1][0],&g_331[0][0][3]},{&g_331[2][3][0],&g_331[2][1][0],(void*)0,&g_331[2][1][0],&g_331[2][1][0],&g_331[2][1][0],&g_331[2][1][0]},{&g_331[2][3][0],&g_331[2][1][0],&g_331[3][2][0],&g_331[2][1][0],&g_331[2][1][0],&g_331[2][1][0],&g_331[2][1][0]},{&g_331[2][1][0],&g_331[2][1][0],&g_331[3][2][0],&g_331[3][2][0],&g_331[2][1][0],&g_331[2][1][0],&g_331[0][0][3]},{&g_331[2][3][0],&g_331[2][1][0],(void*)0,&g_331[2][1][0],&g_331[2][1][0],&g_331[2][1][0],&g_331[2][1][0]},{&g_331[2][3][0],&g_331[2][1][0],&g_331[3][2][0],&g_331[2][1][0],&g_331[2][1][0],&g_331[2][1][0],&g_331[2][1][0]}};
        uint64_t **l_1466 = &l_1467[2][4];
        union U3 ***l_1507[10] = {&g_123,&g_123,&g_123,&g_123,&g_123,&g_123,&g_123,&g_123,&g_123,&g_123};
        union U3 ****l_1506 = &l_1507[4];
        union U3 ***** const l_1505 = &l_1506;
        int16_t l_1525 = 0L;
        int32_t *l_1555 = &l_1519;
        union U0 l_1586 = {-10L};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1399[i] = 0x9616FFCCL;
        if ((safe_mod_func_int16_t_s_s((l_1382[0] , (*g_902)), (((safe_sub_func_int16_t_s_s((*g_903), (safe_add_func_int64_t_s_s(((safe_mod_func_int64_t_s_s((0xF3A9AB0DL <= (+((safe_add_func_uint64_t_u_u((((*l_1398) = ((l_1392 , ((****g_941) = (safe_div_func_uint32_t_u_u((l_1395[2][4][0] != (void*)0), 4294967295UL)))) & (safe_div_func_uint64_t_u_u(0UL, p_44)))) == l_1399[0]), l_1399[1])) || l_1382[0].f2))), 18446744073709551615UL)) || l_1382[0].f2), l_1382[0].f1)))) & (*g_902)) && l_1382[0].f2))))
        {
            return p_45;
        }
        else
        {
            int8_t * const **l_1409 = (void*)0;
            int8_t * const ** const *l_1408 = &l_1409;
            int8_t * const ** const **l_1407 = &l_1408;
            int32_t l_1418 = 0xE8D8B402L;
            union U3 *** const l_1446 = &g_123;
            const int32_t *l_1447 = &g_322[0];
            int32_t l_1516[8] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
            union U1 **l_1585 = (void*)0;
            union U1 ***l_1584[8][4][8] = {{{&l_1585,&l_1585,(void*)0,&l_1585,&l_1585,(void*)0,&l_1585,&l_1585},{&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585},{&l_1585,&l_1585,(void*)0,&l_1585,&l_1585,(void*)0,&l_1585,&l_1585},{&l_1585,&l_1585,&l_1585,&l_1585,(void*)0,&l_1585,(void*)0,&l_1585}},{{&l_1585,&l_1585,&l_1585,(void*)0,&l_1585,&l_1585,&l_1585,&l_1585},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1585,&l_1585,&l_1585,&l_1585},{&l_1585,&l_1585,(void*)0,&l_1585,(void*)0,&l_1585,&l_1585,&l_1585},{&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,(void*)0}},{{&l_1585,(void*)0,(void*)0,&l_1585,&l_1585,&l_1585,(void*)0,&l_1585},{(void*)0,&l_1585,(void*)0,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585},{&l_1585,&l_1585,(void*)0,&l_1585,(void*)0,(void*)0,&l_1585,(void*)0},{&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585}},{{&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,(void*)0,&l_1585,&l_1585},{(void*)0,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585},{&l_1585,(void*)0,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585},{&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585}},{{&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,(void*)0,&l_1585,&l_1585},{&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,(void*)0},{&l_1585,(void*)0,&l_1585,&l_1585,(void*)0,&l_1585,&l_1585,(void*)0},{&l_1585,(void*)0,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,(void*)0}},{{&l_1585,&l_1585,(void*)0,&l_1585,&l_1585,&l_1585,(void*)0,&l_1585},{&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585},{&l_1585,&l_1585,(void*)0,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585},{&l_1585,&l_1585,&l_1585,(void*)0,&l_1585,&l_1585,&l_1585,(void*)0}},{{&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,(void*)0},{&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,(void*)0},{&l_1585,&l_1585,&l_1585,(void*)0,&l_1585,&l_1585,&l_1585,&l_1585},{&l_1585,&l_1585,(void*)0,(void*)0,&l_1585,&l_1585,&l_1585,&l_1585}},{{&l_1585,&l_1585,(void*)0,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585},{&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585,&l_1585},{&l_1585,&l_1585,&l_1585,(void*)0,&l_1585,(void*)0,(void*)0,&l_1585},{&l_1585,&l_1585,&l_1585,&l_1585,(void*)0,(void*)0,(void*)0,&l_1585}}};
            uint32_t *l_1606 = &l_1580.f1;
            uint32_t **l_1607 = (void*)0;
            uint32_t *l_1609 = &g_172;
            uint32_t **l_1608 = &l_1609;
            union U0 l_1650 = {0xC4632762L};
            int64_t *l_1660[6][3];
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1660[i][j] = &g_623;
            }
            for (g_605 = (-2); (g_605 == 54); ++g_605)
            {
                union U0 l_1404[5] = {{-5L},{-5L},{-5L},{-5L},{-5L}};
                int16_t *l_1413 = &g_973;
                const int64_t **l_1459 = (void*)0;
                const int64_t ***l_1458 = &l_1459;
                union U3 ** const l_1484 = (void*)0;
                uint32_t l_1485 = 0UL;
                int32_t l_1515 = 1L;
                int32_t l_1517 = 0L;
                int32_t l_1518[2];
                int16_t l_1526 = 4L;
                uint8_t *l_1548[1][9] = {{&g_207,&g_734.f2,&g_207,&g_734.f2,&g_207,&g_734.f2,&g_207,&g_734.f2,&g_207}};
                union U1 **l_1583 = &g_484;
                union U1 ***l_1582[10];
                int32_t *l_1587 = &l_1522;
                int32_t *l_1588 = &l_1519;
                int32_t *l_1589 = &l_1515;
                int32_t *l_1590 = (void*)0;
                int32_t *l_1591 = &l_1523[3][3];
                int32_t *l_1592 = &l_1399[0];
                int32_t *l_1593 = &g_4;
                int32_t *l_1594 = &l_1523[7][7];
                int32_t *l_1595[1][1];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1518[i] = (-5L);
                for (i = 0; i < 10; i++)
                    l_1582[i] = &l_1583;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1595[i][j] = &l_1518[1];
                }
            }
            (*p_43) = 3L;
            if ((l_1399[1] = ((*l_1555) = (safe_div_func_int16_t_s_s((((((((((safe_unary_minus_func_uint32_t_u((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((((l_1606 == ((*l_1608) = p_43)) > (safe_div_func_uint64_t_u_u((((*l_1447) >= ((((g_973 > (l_1523[5][1] = ((void*)0 == l_1448))) >= (g_1556[4][2][1] && (&p_44 == &p_44))) ^ (*p_43)) <= (*l_1448))) > 0x03F08960L), 0x5EEBB340CB3E8A40LL))) , p_45) < g_1556[4][2][1]), 0x60A1E707L)), (*l_1555))))) >= 1UL) | (*p_43)) && p_44) >= 0xFF14L) , 1L) <= (*l_1447)) & (*l_1448)) ^ 252UL), p_44)))))
            {
                const int16_t l_1617 = 0x662FL;
                (*p_43) = (safe_lshift_func_uint16_t_u_u(p_44, (safe_lshift_func_uint16_t_u_u(g_1564[3][1][1], 0))));
                for (l_1580.f4 = 0; (l_1580.f4 <= 4); l_1580.f4 += 1)
                {
                    const uint32_t l_1619 = 4294967295UL;
                    (*l_1555) &= (~((l_1580 , ((p_44 , (void*)0) == (void*)0)) || (*l_1448)));
                    if (l_1617)
                        continue;
                    for (g_660 = 0; (g_660 <= 4); g_660 += 1)
                    {
                        int32_t l_1618 = 1L;
                        int i, j, k;
                        (*p_43) = 0x1218D941L;
                        (*p_43) = ((p_44 && (l_1618 , l_1619)) ^ (p_44 , (safe_rshift_func_int16_t_s_s(((*l_1555) > ((g_660 < (((****g_941) = ((safe_add_func_uint32_t_u_u(((*l_1398) = ((*g_988) , (l_1624[4] != (l_1626 = (void*)0)))), 0x0DCD8D4CL)) >= 0xEB52BBD0472A82DDLL)) ^ 1UL)) != 7UL)), 11))));
                    }
                }
                if ((*l_1447))
                    continue;
            }
            else
            {
                union U0 *l_1628 = &g_221[0];
                union U0 **l_1627[3];
                int32_t l_1632[2][7] = {{0x8953681EL,0xEB95AD91L,0x8953681EL,0x8953681EL,0xEB95AD91L,0x8953681EL,0x8953681EL},{0xEB95AD91L,0xEB95AD91L,(-6L),0xEB95AD91L,0xEB95AD91L,(-6L),0xEB95AD91L}};
                union U2 l_1644[2] = {{0xA9B0503BL},{0xA9B0503BL}};
                int8_t l_1667 = 4L;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1627[i] = &l_1628;
                l_1629 = &g_221[1];
                for (l_1418 = 13; (l_1418 != 13); l_1418 = safe_add_func_int32_t_s_s(l_1418, 9))
                {
                    (*p_43) |= ((*l_1555) = l_1632[1][4]);
                }
                for (g_101 = 5; (g_101 <= 0); --g_101)
                {
                    uint32_t l_1636[7][3][6] = {{{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL},{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL},{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL}},{{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL},{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL},{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL}},{{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL},{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL},{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL}},{{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL},{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL},{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL}},{{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL},{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL},{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL}},{{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL},{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL},{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL}},{{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL},{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL},{0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL,0xF8C45DAFL}}};
                    int64_t ***l_1643[5] = {&g_346,&g_346,&g_346,&g_346,&g_346};
                    const union U3 l_1659 = {0L};
                    int32_t l_1663 = 2L;
                    int32_t l_1664 = (-5L);
                    int32_t l_1666[9] = {(-10L),0x6344AB92L,(-10L),(-10L),0x6344AB92L,(-10L),(-10L),0x6344AB92L,(-10L)};
                    int32_t l_1668 = 0xBCF1C1CCL;
                    int i, j, k;
                }
            }
            l_1418 = 0xC6C88DFEL;
        }
        for (l_1580.f3 = 0; (l_1580.f3 < (-18)); l_1580.f3 = safe_sub_func_uint8_t_u_u(l_1580.f3, 8))
        {
            uint32_t l_1677 = 0UL;
            int32_t l_1680 = 0x73A70047L;
            int32_t *l_1681[9][8] = {{&g_322[0],&l_1399[1],&l_1521,(void*)0,&l_1521,(void*)0,(void*)0,&g_322[0]},{&g_1556[2][7][1],(void*)0,&l_1521,&g_322[0],&g_322[0],&l_1680,&l_1399[1],&l_1519},{&l_1521,(void*)0,&g_4,&l_1519,&l_1521,&l_1521,&l_1519,&g_4},{(void*)0,(void*)0,&l_1519,&l_1399[1],&l_1680,&g_322[0],&g_322[0],&l_1521},{&l_1519,&l_1523[7][4],&g_322[0],(void*)0,(void*)0,&l_1521,(void*)0,&l_1521},{&l_1523[7][4],&g_464.f0,&l_1519,&l_1399[1],&l_1399[1],&g_464.f0,&g_322[0],&g_4},{&l_1523[7][7],&g_4,&l_1680,&l_1519,&l_1680,&g_4,&l_1523[7][7],&l_1519},{&l_1519,(void*)0,&g_464.f0,&g_322[0],&l_1523[7][4],&g_4,(void*)0,&g_322[0]},{&l_1680,&g_464.f0,&g_322[0],(void*)0,&l_1523[7][4],(void*)0,&g_4,&l_1519}};
            int i, j;
            (*g_132) = p_43;
            if ((*p_43))
                continue;
            for (g_973 = 0; (g_973 == (-9)); g_973 = safe_sub_func_int32_t_s_s(g_973, 9))
            {
                int32_t l_1676 = 0x314F89FAL;
                ++l_1677;
            }
            g_1682++;
        }
        if (l_1685)
            break;
    }
    for (g_8 = 0; (g_8 <= 8); g_8 += 1)
    {
        int32_t *l_1686 = &l_1519;
        int32_t *l_1687 = &l_1523[7][7];
        int32_t *l_1688 = &l_1580.f0;
        int32_t *l_1689 = &l_1521;
        int32_t *l_1690 = &g_464.f0;
        int32_t *l_1691[8][4][1] = {{{&g_322[0]},{&g_464.f0},{&l_1580.f0},{&g_4}},{{&g_322[0]},{&g_4},{&l_1523[2][7]},{&g_4}},{{&g_322[0]},{&l_1522},{&g_322[0]},{&g_4}},{{&l_1523[2][7]},{&g_4},{&g_322[0]},{&l_1522}},{{&g_322[0]},{&g_4},{&l_1523[2][7]},{&g_4}},{{&g_322[0]},{&l_1522},{&g_322[0]},{&g_4}},{{&l_1523[2][7]},{&g_4},{&g_322[0]},{&l_1522}},{{&g_322[0]},{&g_4},{&l_1523[2][7]},{&g_4}}};
        uint32_t l_1692[3][8] = {{0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L},{0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L},{0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L,0xBD22B3D1L}};
        union U1 **l_1695[5][8] = {{&g_484,&g_1134,&g_1134,&g_484,&g_1134,&g_1134,&g_484,&g_1134},{&g_484,&g_484,(void*)0,&g_484,&g_484,(void*)0,&g_484,&g_484},{&g_1134,&g_484,&g_1134,&g_1134,&g_484,&g_1134,&g_1134,&g_484},{&g_484,&g_1134,&g_1134,&g_484,&g_1134,&g_1134,&g_484,&g_1134},{&g_484,&g_484,(void*)0,&g_484,&g_484,(void*)0,&g_484,&g_484}};
        int i, j, k;
        --l_1692[0][0];
        g_484 = &g_464;
        (*l_1690) = (safe_rshift_func_uint16_t_u_u(g_1556[4][2][1], 6));
        for (g_225.f3 = 5; (g_225.f3 >= 0); g_225.f3 -= 1)
        {
            return p_45;
        }
    }
    return (*l_1448);
}







static union U0 func_46(int8_t * const p_47, int8_t p_48, union U0 p_49)
{
    int32_t l_1200 = (-3L);
    int32_t l_1202 = 0x010023ABL;
    int64_t ****l_1217[7][1];
    uint64_t *l_1226 = &g_221[2].f4;
    uint32_t l_1268 = 0xCA9B0883L;
    uint64_t l_1311 = 0xFB2464662C53C027LL;
    int32_t l_1352[6][1][3] = {{{0L,0L,0L}},{{(-3L),0x959509ADL,(-3L)}},{{0L,0L,0L}},{{(-3L),0x959509ADL,(-3L)}},{{0L,0L,0L}},{{(-3L),0x959509ADL,(-3L)}}};
    union U3 *l_1359 = &g_318;
    union U1 l_1366 = {1L};
    uint32_t l_1375 = 4294967295UL;
    int32_t *l_1376[4];
    int16_t l_1377 = 1L;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_1217[i][j] = &g_845[2];
    }
    for (i = 0; i < 4; i++)
        l_1376[i] = &g_322[0];
    for (g_8 = 8; (g_8 >= (-22)); g_8 = safe_sub_func_int64_t_s_s(g_8, 6))
    {
        int32_t l_57 = 0x15E1B460L;
        int8_t *l_1195 = &g_51[0][4][4];
        uint32_t l_1235 = 0x052649CFL;
        union U1 l_1259 = {0x302C0FF1L};
        int32_t l_1302 = 0L;
        int32_t l_1307[3];
        int32_t *l_1343 = (void*)0;
        int32_t *l_1344 = (void*)0;
        int32_t *l_1345 = &g_464.f0;
        int32_t *l_1346 = &l_1202;
        int32_t *l_1347 = &l_1307[0];
        int32_t *l_1348 = &g_322[0];
        int32_t *l_1349 = (void*)0;
        int32_t *l_1350 = (void*)0;
        int32_t *l_1351[4][4] = {{&l_1307[2],&g_4,&g_322[0],&g_322[0]},{&l_1307[1],&l_1307[1],&l_1307[1],&g_4},{&g_4,&l_1307[2],&l_1307[1],&l_1307[2]},{&l_1307[1],&l_1259.f0,&g_322[0],&l_1307[1]}};
        int32_t l_1353 = 0L;
        uint32_t l_1354 = 0UL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1307[i] = (-9L);
        for (p_49.f3 = 4; (p_49.f3 <= 10); p_49.f3 = safe_add_func_int8_t_s_s(p_49.f3, 9))
        {
            int32_t *l_58 = &g_4;
            const int64_t *l_1221 = (void*)0;
            const int64_t **l_1220 = &l_1221;
            const int64_t ***l_1219[3][5];
            const int64_t ****l_1218 = &l_1219[1][0];
            int64_t ****l_1323[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int64_t *****l_1324 = &l_1323[9];
            int64_t l_1341 = 0x3DDCB22446838B27LL;
            int64_t *l_1342[4];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1219[i][j] = &l_1220;
            }
            for (i = 0; i < 4; i++)
                l_1342[i] = &g_623;
            (*l_58) &= l_57;
            for (g_4 = 1; (g_4 >= 0); g_4 -= 1)
            {
                int8_t *l_60 = &g_51[0][4][4];
                int8_t **l_59 = &l_60;
                union U2 l_64 = {0x6906E71EL};
                uint8_t *l_1201[3];
                const int8_t ***l_1205 = (void*)0;
                const int8_t ****l_1204 = &l_1205;
                const int8_t ***** const l_1203 = &l_1204;
                uint64_t *l_1222 = &g_331[2][3][3];
                union U3 **l_1228 = &g_317[1];
                int32_t l_1279 = (-8L);
                int16_t **l_1285 = (void*)0;
                uint64_t l_1286 = 1UL;
                int32_t l_1304 = 0x6ECAEF0CL;
                int32_t l_1305 = (-5L);
                int32_t l_1306[4];
                union U0 l_1314 = {-1L};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1201[i] = &l_64.f2;
                for (i = 0; i < 4; i++)
                    l_1306[i] = 3L;
            }
            l_1307[0] |= (safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(p_49.f1, (safe_sub_func_uint16_t_u_u(((((*l_1324) = l_1323[9]) != (l_1217[0][0] = l_1217[0][0])) | (safe_lshift_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((l_1202 = (p_49.f2 != ((*l_58) = (((safe_rshift_func_uint8_t_u_u((l_1235 & l_57), g_8)) | (safe_add_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((g_322[0] && (safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(1UL, l_1259.f4)), l_1341)), g_9))), (-5L))) | 0xFDL), l_1200))) , p_49.f1)))) && 0L), l_1200)) <= g_531[0][3].f2), p_49.f2))), 0xB4F0L)))), (*p_47))), p_48));
        }
        ++l_1354;
    }
    l_1377 &= (safe_sub_func_int16_t_s_s((((l_1359 != l_1359) < (safe_sub_func_int8_t_s_s(((safe_add_func_int64_t_s_s((l_1202 &= ((((safe_sub_func_int64_t_s_s((l_1366 , 0x627E8A2F9908DAFCLL), ((-4L) < (safe_sub_func_int64_t_s_s((((safe_sub_func_uint64_t_u_u(0UL, (0x0E44B3CBL || ((safe_lshift_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((*g_903), (((((p_49.f0 ^ l_1366.f2) == 0xE7F10C58F8913046LL) != p_48) <= p_48) == l_1352[5][0][1]))) == (*p_47)) & p_49.f0), g_220)) < (-4L))))) || 65535UL) , p_48), 0xC5471CBC85F6EE60LL))))) == 0xEF5D7058L) , g_8) == l_1375)), l_1352[0][0][2])) < p_48), p_48))) && g_734.f0), (*g_903)));
    return g_221[2];
}







static const union U2 func_61(union U2 p_62, int32_t p_63)
{
    int8_t l_75 = 0xF2L;
    int32_t l_814 = (-1L);
    int32_t l_815 = 0x2E1F5CD6L;
    int32_t l_824[6][9][4] = {{{(-4L),1L,0L,0x6135A936L},{0L,0x6135A936L,1L,1L},{(-1L),(-1L),2L,5L},{0L,0x417B1473L,0xE274AF2AL,0xBE791402L},{0L,5L,0x7023B376L,0xE274AF2AL},{0x6135A936L,5L,3L,0xBE791402L},{5L,0x417B1473L,(-3L),5L},{0xC06E851DL,(-1L),0x417B1473L,1L},{1L,0x6135A936L,3L,0x6135A936L}},{{0x35B2BDA5L,1L,0xC06E851DL,(-4L)},{0L,0x35B2BDA5L,0x796049F2L,1L},{0xBE791402L,0L,2L,0x9E58C8E1L},{0xBE791402L,0x417B1473L,0x796049F2L,(-1L)},{0L,0x9E58C8E1L,0xC06E851DL,0xFEB7337FL},{1L,(-3L),0xBE791402L,0xC06E851DL},{(-3L),0x03C292C4L,0x03C292C4L,(-3L)},{0x6B74CEA6L,0L,2L,(-1L)},{0x417B1473L,0xE274AF2AL,0xBE791402L,1L}},{{0x796049F2L,3L,(-7L),1L},{0x59798B19L,0xE274AF2AL,0xFEB7337FL,(-1L)},{0xC06E851DL,0L,0L,(-3L)},{0x7023B376L,0x03C292C4L,(-1L),0xC06E851DL},{0x59798B19L,(-3L),0x59798B19L,0xFEB7337FL},{0xE274AF2AL,1L,0xBE791402L,0x7023B376L},{1L,0x03C292C4L,3L,1L},{0x6B74CEA6L,0xC06E851DL,3L,(-1L)},{1L,1L,0xBE791402L,0xE274AF2AL}},{{0xE274AF2AL,3L,0x59798B19L,0x796049F2L},{0x59798B19L,0x796049F2L,(-1L),(-1L)},{0x7023B376L,0x7023B376L,0L,0x417B1473L},{0xC06E851DL,0x03C292C4L,0xFEB7337FL,0L},{0x59798B19L,0x417B1473L,(-7L),0xFEB7337FL},{0x796049F2L,0x417B1473L,0xBE791402L,0L},{0x417B1473L,0x03C292C4L,2L,0x417B1473L},{0x6B74CEA6L,0x7023B376L,0x03C292C4L,(-1L)},{(-3L),0x796049F2L,0xBE791402L,0x796049F2L}},{{1L,3L,0x6B74CEA6L,0xE274AF2AL},{0x59798B19L,1L,0xA8D6AF2DL,(-1L)},{0L,0xC06E851DL,0L,1L},{0L,0x03C292C4L,0xA8D6AF2DL,0x7023B376L},{0x59798B19L,1L,0x6B74CEA6L,0xFEB7337FL},{1L,(-3L),0xBE791402L,0xC06E851DL},{(-3L),0x03C292C4L,0x03C292C4L,(-3L)},{0x6B74CEA6L,0L,2L,(-1L)},{0x417B1473L,0xE274AF2AL,0xBE791402L,1L}},{{0x796049F2L,3L,(-7L),1L},{0x59798B19L,0xE274AF2AL,0xFEB7337FL,(-1L)},{0xC06E851DL,0L,0L,(-3L)},{0x7023B376L,0x03C292C4L,(-1L),0xC06E851DL},{0x59798B19L,(-3L),0x59798B19L,0xFEB7337FL},{0xE274AF2AL,1L,0xBE791402L,0x7023B376L},{1L,0x03C292C4L,3L,1L},{0x6B74CEA6L,0xC06E851DL,3L,(-1L)},{1L,1L,0xBE791402L,0xE274AF2AL}}};
    int32_t l_829 = 0x185CF272L;
    uint64_t l_854 = 1UL;
    uint8_t l_929 = 0x6FL;
    int64_t l_970[6][1][8] = {{{1L,0xF0E3EF5F9C5BC43ELL,(-2L),0xF0E3EF5F9C5BC43ELL,1L,0xF8C0A9B702665CD2LL,0x662817910F4771D0LL,(-3L)}},{{0xF0E3EF5F9C5BC43ELL,0xE7D1F54594559FD5LL,0xE2952A31D8A1CD30LL,(-2L),(-2L),0xE2952A31D8A1CD30LL,0xE7D1F54594559FD5LL,0xF0E3EF5F9C5BC43ELL}},{{(-8L),0xF8C0A9B702665CD2LL,0xE2952A31D8A1CD30LL,0xFE1117759DEF92EFLL,0x662817910F4771D0LL,1L,0x662817910F4771D0LL,0xFE1117759DEF92EFLL}},{{(-2L),(-8L),(-2L),(-3L),0xFE1117759DEF92EFLL,1L,(-2L),(-2L)}},{{(-2L),(-8L),0x662817910F4771D0LL,0x662817910F4771D0LL,(-8L),(-2L),0xE7D1F54594559FD5LL,(-3L)}},{{(-2L),1L,(-8L),(-8L),0xE7D1F54594559FD5LL,(-8L),(-8L),1L}}};
    int8_t * const *l_975 = (void*)0;
    int8_t * const **l_974[9][9][3] = {{{&l_975,&l_975,&l_975},{(void*)0,&l_975,&l_975},{&l_975,&l_975,&l_975},{&l_975,(void*)0,&l_975},{&l_975,&l_975,&l_975},{&l_975,&l_975,&l_975},{&l_975,&l_975,&l_975},{&l_975,&l_975,&l_975},{&l_975,&l_975,&l_975}},{{&l_975,(void*)0,&l_975},{&l_975,&l_975,(void*)0},{&l_975,&l_975,&l_975},{&l_975,&l_975,&l_975},{(void*)0,&l_975,(void*)0},{&l_975,&l_975,&l_975},{&l_975,&l_975,&l_975},{&l_975,&l_975,&l_975},{&l_975,&l_975,&l_975}},{{&l_975,&l_975,&l_975},{&l_975,(void*)0,&l_975},{&l_975,&l_975,&l_975},{(void*)0,&l_975,&l_975},{&l_975,(void*)0,&l_975},{(void*)0,&l_975,(void*)0},{&l_975,&l_975,&l_975},{&l_975,(void*)0,(void*)0},{&l_975,&l_975,&l_975}},{{&l_975,&l_975,&l_975},{&l_975,(void*)0,(void*)0},{&l_975,&l_975,&l_975},{&l_975,&l_975,&l_975},{(void*)0,(void*)0,&l_975},{&l_975,&l_975,&l_975},{&l_975,&l_975,(void*)0},{&l_975,&l_975,&l_975},{&l_975,&l_975,(void*)0}},{{(void*)0,&l_975,&l_975},{(void*)0,&l_975,&l_975},{&l_975,&l_975,&l_975},{&l_975,&l_975,&l_975},{&l_975,&l_975,&l_975},{(void*)0,(void*)0,&l_975},{&l_975,&l_975,&l_975},{(void*)0,&l_975,(void*)0},{&l_975,&l_975,&l_975}},{{&l_975,&l_975,&l_975},{&l_975,&l_975,&l_975},{(void*)0,(void*)0,&l_975},{&l_975,&l_975,&l_975},{&l_975,&l_975,&l_975},{&l_975,&l_975,&l_975},{(void*)0,&l_975,(void*)0},{&l_975,&l_975,&l_975},{(void*)0,&l_975,(void*)0}},{{&l_975,(void*)0,&l_975},{&l_975,&l_975,&l_975},{&l_975,&l_975,&l_975},{&l_975,&l_975,&l_975},{(void*)0,&l_975,(void*)0},{&l_975,(void*)0,(void*)0},{&l_975,&l_975,(void*)0},{&l_975,&l_975,(void*)0},{&l_975,&l_975,&l_975}},{{&l_975,&l_975,(void*)0},{&l_975,&l_975,(void*)0},{&l_975,&l_975,(void*)0},{(void*)0,(void*)0,&l_975},{&l_975,&l_975,(void*)0},{&l_975,&l_975,&l_975},{&l_975,&l_975,&l_975},{(void*)0,&l_975,(void*)0},{(void*)0,(void*)0,&l_975}},{{&l_975,&l_975,&l_975},{&l_975,&l_975,(void*)0},{&l_975,&l_975,&l_975},{(void*)0,&l_975,(void*)0},{&l_975,&l_975,&l_975},{(void*)0,(void*)0,&l_975},{&l_975,&l_975,&l_975},{(void*)0,(void*)0,&l_975},{&l_975,&l_975,&l_975}}};
    union U2 l_981 = {0UL};
    union U1 **l_992 = &g_484;
    uint16_t *l_1089 = &g_464.f2;
    union U0 l_1100 = {0xBCB70B9BL};
    int64_t ***l_1131[7][5] = {{&g_346,&g_346,&g_346,&g_346,&g_346},{&g_346,&g_346,&g_346,&g_346,(void*)0},{&g_346,&g_346,&g_346,&g_346,&g_346},{&g_346,&g_346,&g_346,&g_346,(void*)0},{&g_346,&g_346,&g_346,&g_346,&g_346},{&g_346,&g_346,&g_346,&g_346,(void*)0},{&g_346,&g_346,&g_346,&g_346,&g_346}};
    union U3 ***l_1181 = &g_123;
    union U3 ****l_1180 = &l_1181;
    union U3 *l_1190[4];
    int32_t l_1191 = 0x7A5BB2CDL;
    int32_t *l_1192 = &l_815;
    int32_t *l_1194 = &l_814;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1190[i] = (void*)0;
    for (g_9 = 8; (g_9 != (-29)); --g_9)
    {
        int32_t l_74 = 0x792F5726L;
        int8_t **l_76 = (void*)0;
        int8_t ***l_77 = &l_76;
        union U3 ***l_806 = &g_123;
        union U3 ****l_805 = &l_806;
        union U3 *****l_804 = &l_805;
        uint32_t l_809 = 0xDBF65D23L;
        uint8_t l_816 = 247UL;
        int32_t l_830 = 0xBFC91E29L;
        int32_t l_832[8][9] = {{0xB736C3CFL,9L,(-1L),0xB736C3CFL,0xB736C3CFL,(-1L),9L,0xB736C3CFL,(-1L)},{0x97247A26L,0x8D6BCCE6L,1L,0x8D6BCCE6L,0x97247A26L,1L,0x97247A26L,0x8D6BCCE6L,1L},{0xB736C3CFL,0xB736C3CFL,(-1L),9L,0xB736C3CFL,(-1L),9L,9L,(-1L)},{0x971726AAL,0x8D6BCCE6L,8L,0x8D6BCCE6L,0x971726AAL,1L,0x971726AAL,0x8D6BCCE6L,8L},{0xB736C3CFL,9L,(-1L),0xB736C3CFL,0xB736C3CFL,(-1L),9L,0xB736C3CFL,(-1L)},{0x97247A26L,0x8D6BCCE6L,1L,0x8D6BCCE6L,0x97247A26L,1L,0x97247A26L,0x8D6BCCE6L,1L},{0xB736C3CFL,0xB736C3CFL,(-1L),9L,0xB736C3CFL,(-1L),9L,9L,(-1L)},{0x971726AAL,0x8D6BCCE6L,8L,0x8D6BCCE6L,0x971726AAL,1L,0x971726AAL,0x8D6BCCE6L,8L}};
        union U0 *l_916[9][9] = {{&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2]},{&g_221[2],(void*)0,&g_225,(void*)0,(void*)0,(void*)0,(void*)0,&g_225,&g_221[2]},{&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2]},{(void*)0,&g_225,&g_221[2],&g_225,(void*)0,(void*)0,(void*)0,&g_225,&g_221[2]},{&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2]},{(void*)0,&g_225,&g_221[2],&g_225,(void*)0,(void*)0,(void*)0,&g_225,&g_221[2]},{&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2]},{(void*)0,&g_225,&g_221[2],&g_225,(void*)0,(void*)0,(void*)0,&g_225,&g_221[2]},{&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2],&g_221[2]}};
        int32_t l_932 = 1L;
        int64_t l_933 = 0xA43C74A0FB6EC537LL;
        uint64_t l_934 = 0x18C78E913736BE41LL;
        const union U2 l_937 = {0xD406D657L};
        int32_t *l_938 = &l_830;
        int32_t l_971[4];
        uint16_t *l_1088[10][6] = {{&g_464.f2,&g_660,&g_464.f2,&g_127,&g_464.f4,&g_127},{&g_127,&g_464.f2,&g_464.f2,&g_464.f2,&g_464.f2,&g_464.f2},{&g_464.f2,&g_464.f2,&g_464.f4,&g_127,&g_464.f4,&g_464.f2},{&g_660,&g_660,&g_127,&g_464.f4,&g_660,&g_464.f4},{&g_127,&g_660,&g_127,&g_127,&g_464.f2,&g_464.f2},{&g_464.f2,&g_127,&g_464.f4,&g_127,&g_464.f2,&g_464.f2},{&g_127,&g_464.f2,&g_464.f2,&g_127,&g_464.f4,&g_127},{&g_464.f2,&g_464.f2,&g_464.f2,&g_127,&g_127,&g_660},{&g_127,&g_464.f4,&g_660,&g_464.f4,&g_127,&g_660},{&g_660,&g_464.f2,&g_464.f4,&g_127,&g_464.f4,&g_464.f2}};
        int64_t l_1103 = 0xE20564D1703FADD3LL;
        int16_t l_1112[2];
        int16_t *l_1115 = &l_1112[1];
        int i, j;
        for (i = 0; i < 4; i++)
            l_971[i] = 0xC7D90431L;
        for (i = 0; i < 2; i++)
            l_1112[i] = (-1L);
    }
    (*l_1194) |= (((safe_add_func_uint8_t_u_u((+((void*)0 != l_1180)), (l_829 = ((((**g_277) = (safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((*l_1192) &= (safe_rshift_func_int8_t_s_s(((l_824[4][7][2] = p_62.f0) && (((void*)0 != l_1190[0]) && (((*l_1089) = ((&g_845[2] == (p_62.f2 , &g_845[4])) ^ (0xA1C10EF4A6E04ADBLL < g_464.f0))) ^ p_62.f0))), l_1191))) ^ p_63), p_63)), g_8)), g_1193))) | g_172) <= l_75)))) , (*l_1192)) , p_62.f2);
    return g_734;
}







static uint16_t func_69(int16_t p_70, uint32_t p_71, int8_t ** p_72, int16_t p_73)
{
    int8_t * const l_95 = &g_51[0][4][4];
    int32_t l_96 = 0x0043BD3AL;
    int64_t *l_97 = &g_98;
    int32_t *l_99 = (void*)0;
    int32_t *l_100[5][2][1] = {{{&g_4},{&l_96}},{{&l_96},{&l_96}},{{&l_96},{&g_4}},{{&l_96},{&l_96}},{{&l_96},{&l_96}}};
    union U1 l_102 = {0x23672E3EL};
    int8_t *l_107[2];
    int8_t **l_106 = &l_107[0];
    int8_t ***l_105 = &l_106;
    int64_t l_108 = 1L;
    const union U3 *l_125[2];
    const union U3 **l_124 = &l_125[1];
    uint16_t l_133 = 1UL;
    uint16_t l_208 = 65535UL;
    int64_t l_210 = 0L;
    int8_t l_286 = 0L;
    union U0 l_332 = {0x839E66F8L};
    int32_t l_335 = 0xF9C50F6EL;
    int16_t l_529 = 1L;
    uint32_t l_611 = 18446744073709551611UL;
    int32_t ***l_618 = &g_129[1][2][3];
    uint32_t l_659 = 0x275F31EEL;
    uint32_t l_661 = 0UL;
    int32_t l_723 = 1L;
    int16_t l_728 = 0x0AFBL;
    uint32_t l_775[1];
    int64_t * const l_784 = (void*)0;
    int64_t * const *l_783 = &l_784;
    union U3 ***l_789 = &g_123;
    union U3 ****l_788 = &l_789;
    int32_t l_790 = 0x21DFC4E9L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_107[i] = &g_51[0][4][4];
    for (i = 0; i < 2; i++)
        l_125[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_775[i] = 4294967288UL;
    if ((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint64_t_u_u((safe_div_func_int64_t_s_s((((l_95 == (g_19 , &g_51[1][3][5])) , ((*l_97) = l_96)) || ((p_73 >= (g_101 = 0x2CC25678L)) <= ((l_102 , (safe_mod_func_int32_t_s_s(((void*)0 != l_105), 0x01231047L))) ^ 0xE7L))), g_19.f0)), g_9)) != 0xC2B5L), l_108)))
    {
        uint32_t l_111 = 0x1D1A269FL;
        int32_t **l_128 = &l_100[3][0][0];
        uint32_t l_155[10][6] = {{0x3471AF26L,4UL,0x10D93E54L,4UL,0x3471AF26L,4UL},{1UL,0xC0BE236CL,1UL,4UL,1UL,0xC0BE236CL},{0x3471AF26L,0xC0BE236CL,0x10D93E54L,0xC0BE236CL,0x3471AF26L,0xC0BE236CL},{1UL,4UL,1UL,0xC0BE236CL,1UL,4UL},{0x3471AF26L,4UL,0x10D93E54L,4UL,0x3471AF26L,4UL},{1UL,0xC0BE236CL,1UL,4UL,1UL,0xC0BE236CL},{0x3471AF26L,0xC0BE236CL,0x10D93E54L,0xC0BE236CL,0x3471AF26L,0xC0BE236CL},{1UL,4UL,1UL,0xC0BE236CL,1UL,4UL},{0x3471AF26L,4UL,0x10D93E54L,4UL,0x3471AF26L,4UL},{1UL,0xC0BE236CL,1UL,4UL,1UL,0xC0BE236CL}};
        int16_t l_156 = (-3L);
        union U3 l_188 = {7L};
        int16_t l_190 = 0xB29CL;
        union U2 l_252[2][6][3] = {{{{0x3910730FL},{0xCBF4508DL},{0x3FCDF06EL}},{{0xCD4DE32BL},{0xD6639746L},{0xD6639746L}},{{0x3910730FL},{0xCBF4508DL},{0x3FCDF06EL}},{{0xCD4DE32BL},{0xD6639746L},{0xD6639746L}},{{0x3910730FL},{0xCBF4508DL},{0x3FCDF06EL}},{{0xCD4DE32BL},{0xD6639746L},{0xD6639746L}}},{{{0x3910730FL},{0xCBF4508DL},{0x3FCDF06EL}},{{0xCD4DE32BL},{0xD6639746L},{0xD6639746L}},{{0x3910730FL},{0xCBF4508DL},{0x3FCDF06EL}},{{0xCD4DE32BL},{0xD6639746L},{0xD6639746L}},{{0x3910730FL},{0xCBF4508DL},{0x3FCDF06EL}},{{0xCD4DE32BL},{0xD6639746L},{0xD6639746L}}}};
        int32_t l_261 = 3L;
        int32_t l_264[3][7] = {{(-6L),8L,(-6L),8L,(-6L),8L,(-6L)},{0x33254543L,0x33254543L,1L,1L,0x33254543L,0x33254543L,1L},{8L,8L,8L,8L,8L,8L,8L}};
        int16_t l_284 = 0xD869L;
        union U3 ***l_359 = &g_123;
        uint16_t *l_370 = &l_133;
        union U1 l_373 = {-1L};
        union U0 l_389 = {0xD72D1C52L};
        uint64_t l_390 = 0xA4A2C857AA1ADEC1LL;
        uint64_t l_449 = 0UL;
        int64_t *l_525 = &g_9;
        union U3 l_538 = {-8L};
        uint8_t l_555 = 0x10L;
        uint32_t l_606 = 0x3475F9A2L;
        int i, j, k;
lbl_338:
        for (l_102.f2 = 0; (l_102.f2 > 37); l_102.f2 = safe_add_func_int16_t_s_s(l_102.f2, 1))
        {
            uint32_t l_114[3];
            int32_t *l_115 = &l_96;
            int32_t **l_116 = &l_100[0][0][0];
            union U3 *l_117[8][2][8] = {{{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,(void*)0,&g_118,&g_118,(void*)0,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118}},{{&g_118,&g_118,(void*)0,&g_118,&g_118,(void*)0,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,(void*)0,&g_118,&g_118,(void*)0,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118}},{{&g_118,&g_118,(void*)0,&g_118,&g_118,(void*)0,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,(void*)0,&g_118,&g_118,(void*)0,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,(void*)0}}};
            union U1 l_144[6][2] = {{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}}};
            const int8_t *l_169[8][6] = {{(void*)0,&g_51[0][4][4],&g_118.f1,&g_118.f1,&g_118.f1,&g_118.f1},{(void*)0,(void*)0,&g_118.f1,(void*)0,&g_51[0][5][5],(void*)0},{&g_51[0][4][4],(void*)0,&g_51[0][4][4],&g_118.f1,&g_118.f1,&g_118.f1},{&g_51[0][4][4],&g_51[0][4][4],&g_51[0][4][4],&g_51[0][4][4],(void*)0,(void*)0},{(void*)0,&g_51[0][4][4],&g_118.f1,&g_51[0][4][4],(void*)0,&g_118.f1},{&g_51[0][4][4],(void*)0,&g_118.f1,&g_118.f1,(void*)0,&g_51[0][4][4]},{&g_51[0][4][4],&g_51[0][4][4],(void*)0,(void*)0,(void*)0,&g_51[0][4][4]},{(void*)0,&g_51[0][4][4],&g_118.f1,&g_118.f1,&g_118.f1,&g_118.f1}};
            uint32_t l_185 = 9UL;
            union U0 l_250 = {0L};
            int32_t l_262 = (-3L);
            int32_t l_263 = 0L;
            int32_t l_265 = 0x30D3ADD6L;
            int32_t l_266 = 0x9161BFE2L;
            int64_t l_267 = (-8L);
            int32_t l_269 = 0x7B183819L;
            int32_t l_270 = 0L;
            int32_t l_271 = 0xA929C1EEL;
            int32_t l_272 = 1L;
            uint16_t l_274[7] = {0x0393L,0x0393L,1UL,0x0393L,0x0393L,1UL,0x0393L};
            uint32_t l_289[4] = {0UL,0UL,0UL,0UL};
            const union U3 * const *l_311[6] = {&l_125[1],&l_125[1],&l_125[1],&l_125[1],&l_125[1],&l_125[1]};
            const uint64_t *l_330[7];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_114[i] = 18446744073709551615UL;
            for (i = 0; i < 7; i++)
                l_330[i] = &g_331[2][1][0];
            --l_111;
            if (l_114[1])
                continue;
            (*l_116) = l_115;
        }
        if ((l_252[1][4][1] , p_73))
        {
            int64_t l_339 = 0xC226989A22D1FF88LL;
            int32_t l_340 = 1L;
            int32_t l_341 = 0x728BE11BL;
            union U0 *l_466 = &g_221[2];
            const union U3 l_475[9] = {{5L},{0x63726A26L},{5L},{5L},{0x63726A26L},{5L},{5L},{0x63726A26L},{5L}};
            uint16_t l_527 = 0UL;
            int32_t l_550 = (-1L);
            int32_t l_551 = 0L;
            union U3 ****l_558 = &l_359;
            uint8_t *l_576 = &g_19.f2;
            uint16_t l_580 = 0xF872L;
            uint64_t *l_590 = (void*)0;
            uint64_t *l_591 = (void*)0;
            uint64_t *l_592 = &g_225.f4;
            uint64_t *l_593 = &g_221[2].f4;
            uint64_t *l_594 = &l_389.f4;
            int i;
            if ((l_332 , 0L))
            {
                uint8_t l_342[5][8] = {{0xA4L,248UL,0xA4L,0xA4L,248UL,0xA4L,0xA4L,248UL},{248UL,0xA4L,0xA4L,248UL,0xA4L,0xA4L,248UL,0xA4L},{248UL,248UL,1UL,248UL,248UL,1UL,248UL,248UL},{0xA4L,248UL,0xA4L,0xA4L,248UL,0xA4L,0xA4L,248UL},{248UL,0xA4L,0xA4L,248UL,0xA4L,0xA4L,248UL,0xA4L}};
                int64_t ***l_345 = (void*)0;
                int32_t *l_360[3][7][7] = {{{&g_220,&g_101,&l_335,&l_335,&g_101,&g_220,(void*)0},{&g_101,&g_101,&g_220,&l_335,&g_220,&l_335,&g_220},{&g_101,&g_101,&g_220,&g_101,&l_335,&g_220,&g_220},{&g_101,&g_220,&l_335,&l_335,&g_220,&g_220,&g_220},{&l_335,&l_335,(void*)0,&l_335,&l_335,&g_101,(void*)0},{&l_335,&g_220,&g_101,&g_220,&g_220,&g_220,&g_101},{&l_335,&l_335,&g_101,&g_101,&g_101,&g_101,&l_335}},{{&l_335,&g_220,&g_220,&g_101,&g_220,&l_335,&l_335},{&l_335,&g_220,&g_220,(void*)0,&l_335,&g_101,&l_335},{&l_335,&g_220,&g_220,&l_335,&g_220,&g_101,&g_220},{(void*)0,&g_220,&g_220,&l_335,&g_101,&g_220,&g_101},{&g_220,&g_220,&g_101,&g_101,&g_101,&g_220,&g_220},{&l_335,(void*)0,(void*)0,&g_101,(void*)0,&l_335,&g_220},{&g_220,&g_101,&g_101,&g_101,&l_335,&l_335,&g_101}},{{(void*)0,&l_335,(void*)0,&g_220,&g_220,&l_335,&l_335},{&g_220,&l_335,&g_101,&g_101,&g_220,&l_335,&g_220},{&l_335,&l_335,&g_220,&g_220,&l_335,&l_335,&g_220},{&g_101,&g_101,&g_220,(void*)0,&g_101,&l_335,&g_220},{&l_335,&l_335,&g_101,&l_335,&g_101,&l_335,&g_101},{&g_101,&g_101,&l_335,&g_220,(void*)0,&g_220,&g_220},{&g_220,&l_335,&g_220,(void*)0,&g_101,&g_220,&g_220}}};
                uint32_t l_376[7][8] = {{0UL,1UL,0UL,1UL,0UL,1UL,0UL,1UL},{0UL,1UL,0UL,1UL,0UL,1UL,0UL,1UL},{0UL,1UL,0UL,1UL,0UL,1UL,0UL,1UL},{0UL,1UL,0UL,1UL,0UL,1UL,0UL,1UL},{0UL,1UL,0UL,1UL,0UL,1UL,0UL,1UL},{0UL,1UL,0UL,1UL,0UL,1UL,0UL,1UL},{0UL,1UL,0UL,1UL,0UL,1UL,0UL,1UL}};
                int32_t l_409[3];
                int32_t l_412 = 0L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_409[i] = 0xA4D99D21L;
                for (p_70 = 0; (p_70 == (-17)); --p_70)
                {
                    if (l_335)
                        break;
                    for (g_98 = (-16); (g_98 >= (-19)); g_98 = safe_sub_func_uint64_t_u_u(g_98, 1))
                    {
                        if (p_73)
                            goto lbl_338;
                        return g_256;
                    }
                }
                ++l_342[0][6];
                if ((l_342[0][6] <= (((g_346 = &l_97) != ((safe_lshift_func_int8_t_s_s((((((safe_lshift_func_uint16_t_u_s((!(+((l_340 = (safe_sub_func_uint16_t_u_u(((0x0377L || (safe_add_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((p_73 || g_19.f0), p_71)), ((((0x031CL ^ g_207) , l_359) == &g_123) < (-10L))))) >= p_73), p_73))) , g_331[2][1][0]))), l_341)) > g_220) | (**l_128)) > p_73) || 1UL), 7)) , (void*)0)) >= 0xD0L)))
                {
                    int32_t l_363[8] = {8L,0x6022DEE7L,8L,0x6022DEE7L,8L,0x6022DEE7L,8L,0x6022DEE7L};
                    int i;
                    for (l_340 = (-16); (l_340 < 6); l_340++)
                    {
                        uint32_t l_377 = 0xA4E36446L;
                        uint8_t *l_378 = &g_207;
                        int16_t *l_379 = &l_190;
                        int32_t l_380 = 0L;
                        l_363[4] = (-2L);
                        l_380 &= ((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u((((*l_370) = (p_73 <= (p_73 , (((void*)0 == l_370) >= ((*l_379) ^= (((p_70 , (safe_lshift_func_uint8_t_u_s((l_373 , ((*l_378) = (safe_lshift_func_uint16_t_u_s(p_71, ((((l_341 | (g_51[0][4][4] , l_376[4][1])) | p_71) | l_377) > p_70))))), 5))) , g_220) ^ 65535UL)))))) || 0x8F9DL), p_70)) | 4294967289UL), g_318.f1)), l_377)) != p_73);
                    }
                    l_363[4] = (**l_128);
                    if ((l_373.f0 = (safe_div_func_uint16_t_u_u((g_127++), (l_390 = ((**l_128) | (safe_mul_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u((((((*l_97) = ((l_389 , 0x6A3EB751L) == (p_73 > l_363[5]))) , (**g_346)) , &g_220) != &g_220), (-1L))) && p_73) >= (**l_128)), 0xD1L))))))))
                    {
                        const int32_t *l_391 = &l_340;
                        const int32_t **l_392 = &l_391;
                        int64_t l_398 = (-1L);
                        int16_t *l_407 = &l_284;
                        uint64_t *l_408 = &l_390;
                        int16_t *l_410 = &l_190;
                        uint64_t *l_411 = &l_389.f4;
                        (*l_392) = l_391;
                        l_412 &= ((safe_mod_func_uint64_t_u_u(((+(((**l_106) &= (**g_277)) >= (**g_277))) ^ (l_363[4] && ((*l_411) = (((*l_410) = (((safe_mod_func_uint64_t_u_u(p_70, (l_398 , (0x40EC637F8712B363LL | (safe_rshift_func_int16_t_s_s((((safe_mod_func_int64_t_s_s((((safe_mul_func_uint8_t_u_u(((0x4680L | ((((((*l_408) ^= (safe_sub_func_uint16_t_u_u(p_71, ((*l_407) = g_118.f2)))) > 3L) , 0x1B36272F28C824CFLL) ^ (-2L)) == 5UL)) > p_73), 1UL)) , l_342[0][6]) && (**l_128)), l_409[0])) == p_71) >= p_70), p_70)))))) != l_376[4][1]) < (-6L))) < p_70)))), 0x3E8A27CD1FFB2436LL)) ^ (**g_346));
                    }
                    else
                    {
                        (*g_132) = &l_96;
                    }
                }
                else
                {
                    for (l_390 = 0; (l_390 <= 1); l_390 += 1)
                    {
                        uint32_t l_413 = 2UL;
                        l_413 = p_73;
                        l_373.f0 |= 0xFEFB2363L;
                        if ((**l_128))
                            continue;
                        l_340 ^= (**l_128);
                    }
                }
            }
            else
            {
                int32_t l_414 = 0xE8D9A100L;
                int32_t l_434 = (-7L);
                union U3 * const *l_447 = &g_317[1];
                int32_t l_453[1];
                uint64_t l_491 = 1UL;
                int i;
                for (i = 0; i < 1; i++)
                    l_453[i] = 0x620D3A23L;
                if (p_71)
                {
                    uint32_t *l_422 = &g_19.f0;
                    uint32_t **l_421 = &l_422;
                    int16_t *l_423 = (void*)0;
                    int16_t *l_424 = &l_156;
                    uint64_t *l_433 = &g_331[2][3][2];
                    union U0 l_435 = {0xE633D2ADL};
                    union U3 l_459[8][5] = {{{-6L},{0xD914CC25L},{0xA6F49467L},{8L},{0x5633289BL}},{{0x1D17EFD4L},{0x6E15D458L},{0x6E15D458L},{0x1D17EFD4L},{8L}},{{0x4E4CDB2EL},{9L},{0x6E15D458L},{7L},{0x58592B78L}},{{7L},{-4L},{0xA6F49467L},{-6L},{0x6E15D458L}},{{0xD914CC25L},{0x4E4CDB2EL},{7L},{7L},{0x4E4CDB2EL}},{{0x1BCCC5FFL},{0xEED25461L},{0x4BAD4861L},{0x1D17EFD4L},{0x4E4CDB2EL}},{{-4L},{0x5633289BL},{9L},{8L},{0x6E15D458L}},{{0xEED25461L},{8L},{0x6B791054L},{0x58592B78L},{0x58592B78L}}};
                    int i, j;
                    l_414 |= p_70;
                    if ((safe_rshift_func_int16_t_s_u((((*l_424) &= (safe_sub_func_uint8_t_u_u(g_127, ((((*l_421) = &l_111) == &p_71) != (l_341 > ((**l_106) = (*g_278))))))) < ((((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((*l_370) = ((((safe_rshift_func_int8_t_s_s((0x9AL && 0xE8L), (0x5D3E0173L < ((((*l_433) = (safe_sub_func_int64_t_s_s(((l_339 >= 0xBC72L) , 0L), g_172))) >= l_434) > 1UL)))) || 4294967287UL) && 0x2050L) == 0x6F48L)) & 0xF939L), l_339)), p_70)) == 0xAEL) <= 0x38AE137F4344409FLL) || (**l_128))), 6)))
                    {
                        uint32_t *l_439 = &l_252[1][4][1].f0;
                        union U2 l_440[5] = {{0xA4607751L},{0xA4607751L},{0xA4607751L},{0xA4607751L},{0xA4607751L}};
                        union U1 l_443[4] = {{0L},{0L},{0L},{0L}};
                        union U1 *l_444 = &l_443[2];
                        union U1 *l_445[10] = {&l_102,&l_373,(void*)0,&l_373,&l_102,&l_102,&l_373,(void*)0,&l_373,&l_102};
                        union U0 *l_446[3];
                        uint8_t *l_448 = &l_440[1].f2;
                        const uint64_t * const l_452 = &l_390;
                        union U3 *** const l_456 = &g_123;
                        const uint64_t l_465 = 18446744073709551607UL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_446[i] = &g_221[2];
                        l_264[0][2] ^= (l_435 , ((!(((*l_439) |= (--(**l_421))) | ((((((void*)0 != &l_96) | (l_440[1] , ((*l_448) = (1L && (safe_lshift_func_uint16_t_u_s((((((g_19.f0 &= (((g_221[3] = ((l_373 = ((*l_444) = l_443[2])) , g_221[2])) , l_447) != (void*)0)) == 0UL) == 1UL) != p_70) == g_331[5][4][1]), 15)))))) <= l_435.f0) , 0x96264A47L) && p_70))) <= l_449));
                        l_443[2].f0 = (safe_div_func_uint32_t_u_u(((((((void*)0 != l_452) ^ (l_453[0] = l_339)) < (safe_sub_func_uint8_t_u_u(((g_225 , l_456) == l_359), ((safe_mul_func_uint8_t_u_u(((l_459[5][1] , ((safe_div_func_uint64_t_u_u((g_331[4][5][2] ^ ((safe_add_func_int32_t_s_s((g_464 , 0x1F3151DCL), 0UL)) > l_465)), (**l_128))) > 0xE41A30C3L)) || g_322[0]), (**l_128))) <= p_73)))) < 0x23L) ^ g_318.f2), 1L));
                    }
                    else
                    {
                        const union U0 l_481 = {0xA7F587BEL};
                        union U1 *l_483 = &l_102;
                        union U1 **l_482[10][3][5] = {{{&l_483,&l_483,&l_483,&l_483,&l_483},{&l_483,&l_483,(void*)0,&l_483,&l_483},{&l_483,(void*)0,(void*)0,&l_483,&l_483}},{{&l_483,&l_483,(void*)0,&l_483,&l_483},{&l_483,(void*)0,&l_483,(void*)0,&l_483},{&l_483,&l_483,&l_483,&l_483,(void*)0}},{{&l_483,&l_483,&l_483,&l_483,&l_483},{&l_483,(void*)0,&l_483,&l_483,(void*)0},{(void*)0,&l_483,&l_483,&l_483,&l_483}},{{(void*)0,(void*)0,&l_483,&l_483,&l_483},{(void*)0,&l_483,&l_483,&l_483,&l_483},{&l_483,&l_483,&l_483,&l_483,&l_483}},{{&l_483,&l_483,(void*)0,&l_483,&l_483},{&l_483,(void*)0,(void*)0,&l_483,&l_483},{&l_483,&l_483,(void*)0,&l_483,&l_483}},{{&l_483,(void*)0,&l_483,(void*)0,&l_483},{&l_483,&l_483,&l_483,&l_483,(void*)0},{&l_483,&l_483,&l_483,&l_483,&l_483}},{{&l_483,(void*)0,&l_483,&l_483,(void*)0},{(void*)0,&l_483,&l_483,&l_483,&l_483},{(void*)0,(void*)0,&l_483,&l_483,&l_483}},{{(void*)0,&l_483,&l_483,&l_483,&l_483},{&l_483,&l_483,&l_483,&l_483,&l_483},{&l_483,&l_483,(void*)0,&l_483,&l_483}},{{&l_483,(void*)0,(void*)0,&l_483,&l_483},{&l_483,&l_483,(void*)0,&l_483,&l_483},{&l_483,(void*)0,&l_483,(void*)0,&l_483}},{{&l_483,&l_483,&l_483,&l_483,(void*)0},{&l_483,&l_483,&l_483,&l_483,&l_483},{&l_483,(void*)0,&l_483,&l_483,(void*)0}}};
                        int i, j, k;
                        l_466 = &g_221[2];
                        (*g_132) = (*l_128);
                        l_435.f0 = ((safe_unary_minus_func_uint32_t_u((safe_rshift_func_int8_t_s_u(((void*)0 != &g_464), 2)))) , (((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((((~((l_475[0] , ((safe_mul_func_uint16_t_u_u(g_118.f2, 1UL)) ^ (+((safe_add_func_uint16_t_u_u((p_71 | (&l_373 == (g_484 = (l_481 , &g_464)))), p_73)) != l_481.f0)))) && l_435.f0)) || 0x51184ACFL) < (-8L)), 12)), p_71)) , l_373) , p_73));
                    }
                    if (((safe_unary_minus_func_uint32_t_u(0x31FCB660L)) , l_453[0]))
                    {
                        uint32_t l_486 = 18446744073709551615UL;
                        l_486++;
                        l_459[5][1].f2 &= (l_453[0] == p_73);
                    }
                    else
                    {
                        const uint64_t l_489 = 0xCE436DB7D6BE693ELL;
                        int32_t l_490 = 5L;
lbl_494:
                        l_490 &= (((((*l_105) = &g_278) != (l_332 , p_72)) ^ ((((l_373 , (-1L)) , 0x20L) , (g_207 && p_71)) , ((void*)0 != &l_335))) , l_489);
                        --l_491;
                        if (l_340)
                            goto lbl_494;
                    }
                    (*l_359) = &g_317[1];
                }
                else
                {
                    return g_322[0];
                }
            }
            for (l_389.f4 = (-19); (l_389.f4 <= 7); l_389.f4 = safe_add_func_uint16_t_u_u(l_389.f4, 7))
            {
                uint64_t l_524 = 0UL;
                int64_t *l_526 = &g_9;
                int32_t l_528 = 0L;
                union U3 l_546 = {0xA90B66AAL};
                uint8_t **l_578[8] = {&l_576,&l_576,&l_576,&l_576,&l_576,&l_576,&l_576,&l_576};
                int i;
                for (g_225.f1 = 0; (g_225.f1 >= 40); g_225.f1 = safe_add_func_int64_t_s_s(g_225.f1, 8))
                {
                    union U2 *l_530 = &g_531[0][3];
                    for (l_156 = (-4); (l_156 <= 22); l_156 = safe_add_func_uint16_t_u_u(l_156, 7))
                    {
                        return p_70;
                    }
                    for (l_102.f4 = 0; (l_102.f4 >= 11); l_102.f4++)
                    {
                        uint8_t l_509 = 6UL;
                        l_528 |= (((safe_mul_func_uint16_t_u_u(p_70, (safe_add_func_uint64_t_u_u(((p_70 | ((safe_mod_func_uint8_t_u_u((((l_509 || p_73) < (safe_rshift_func_uint8_t_u_s(l_339, ((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int16_t_s((safe_unary_minus_func_int16_t_s((~(safe_mul_func_uint64_t_u_u(g_225.f0, (((((*l_97) &= ((safe_mod_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((((**g_277) = ((*g_278) > ((((!g_464.f2) || 1UL) & (**g_277)) ^ (-9L)))) || l_524), 0xB0C6L)) < p_71), 0x7FL)) & p_71)) != g_225.f2) , l_525) != l_526)))))))), 9)) && 0L)))) & l_527), l_524)) == g_464.f3)) , 18446744073709551606UL), 0UL)))) | p_71) != 0xA82B0D99L);
                        if (l_524)
                            break;
                        l_341 = ((l_340 ^= ((p_71 <= g_118.f1) , g_331[2][1][0])) > l_529);
                    }
                    l_530 = &g_19;
                }
                (*l_128) = &l_528;
                for (l_373.f3 = (-6); (l_373.f3 >= (-21)); l_373.f3 = safe_sub_func_uint32_t_u_u(l_373.f3, 9))
                {
                    uint32_t l_545 = 5UL;
                    int32_t l_552 = 6L;
                    int32_t l_554 = 0x2746C545L;
                    int8_t l_577[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int i;
                }
            }
            --l_580;
            if ((p_73 , (safe_unary_minus_func_uint64_t_u((l_341 == (safe_lshift_func_int16_t_s_s(((p_73 < (l_475[0] , ((l_264[2][2] = 9L) , (safe_add_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(((*l_594) &= ((*l_592) = g_464.f4)), g_318.f2)), p_73))))) < (*g_278)), g_531[0][3].f0)))))))
            {
                return p_73;
            }
            else
            {
                int16_t l_595[5][6] = {{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}};
                int i, j;
                return l_595[3][2];
            }
        }
        else
        {
            uint32_t l_608[1][9] = {{0xBF37E12FL,0xBF37E12FL,0xBF37E12FL,0xBF37E12FL,0xBF37E12FL,0xBF37E12FL,0xBF37E12FL,0xBF37E12FL,0xBF37E12FL}};
            int i, j;
            for (g_220 = 0; (g_220 < 7); g_220 = safe_add_func_uint16_t_u_u(g_220, 8))
            {
                int16_t l_598 = 0x7DDDL;
                l_389.f0 = (l_611 = ((l_598 <= ((safe_lshift_func_int16_t_s_u((g_464.f3 = l_598), g_127)) <= ((safe_add_func_uint16_t_u_u((g_605 = g_118.f1), l_606)) > (g_225 , (safe_unary_minus_func_int8_t_s(l_608[0][4])))))) , ((safe_mod_func_uint32_t_u_u(l_598, l_608[0][4])) <= (**l_128))));
            }
        }
        (*g_132) = &l_96;
        return p_70;
    }
    else
    {
        int32_t ***l_619 = &g_129[1][2][3];
        uint16_t *l_620 = &l_102.f2;
        uint16_t *l_621 = &l_133;
        int16_t *l_622[2];
        int32_t l_664[4];
        int32_t l_665 = (-4L);
        union U3 l_668 = {-1L};
        int8_t * const *l_690 = &l_107[0];
        int8_t * const **l_689 = &l_690;
        int32_t l_725[9][4][4] = {{{0xC413AFB0L,0x07682B87L,0xC413AFB0L,1L},{0L,0x07682B87L,0x892BA2E9L,(-9L)},{(-5L),9L,(-5L),0x07682B87L},{0xC413AFB0L,(-9L),(-5L),1L}},{{(-5L),0x24F0F74AL,0x892BA2E9L,0x24F0F74AL},{0L,9L,0xC413AFB0L,0x24F0F74AL},{0xC413AFB0L,0x24F0F74AL,5L,1L},{7L,(-9L),0x892BA2E9L,0x07682B87L}},{{7L,9L,5L,(-9L)},{0xC413AFB0L,0x07682B87L,0xC413AFB0L,1L},{0L,0x07682B87L,0x892BA2E9L,(-9L)},{(-5L),9L,(-5L),0x07682B87L}},{{0xC413AFB0L,(-9L),(-5L),1L},{(-5L),0x24F0F74AL,0x892BA2E9L,0x24F0F74AL},{0L,9L,0xC413AFB0L,0x24F0F74AL},{0xC413AFB0L,0x24F0F74AL,5L,1L}},{{7L,(-9L),0x892BA2E9L,0x07682B87L},{7L,9L,5L,(-9L)},{0xC413AFB0L,0x07682B87L,0xC413AFB0L,1L},{0L,0x07682B87L,0x892BA2E9L,(-9L)}},{{(-5L),9L,(-5L),0x07682B87L},{0xC413AFB0L,(-9L),(-5L),1L},{(-5L),0x24F0F74AL,0x892BA2E9L,0x24F0F74AL},{0L,9L,0xC413AFB0L,0x24F0F74AL}},{{0xC413AFB0L,0x24F0F74AL,5L,1L},{7L,(-9L),0x892BA2E9L,0x07682B87L},{7L,9L,5L,(-9L)},{0xC413AFB0L,0x07682B87L,0xC413AFB0L,1L}},{{0L,0x07682B87L,0x892BA2E9L,(-9L)},{(-5L),9L,(-5L),0x07682B87L},{0xC413AFB0L,(-9L),(-5L),1L},{(-5L),0x24F0F74AL,0x892BA2E9L,0x24F0F74AL}},{{0L,9L,0xC413AFB0L,0x24F0F74AL},{0xC413AFB0L,0x24F0F74AL,5L,1L},{7L,(-9L),0x892BA2E9L,0x07682B87L},{7L,9L,5L,(-9L)}}};
        int32_t l_726[10][1][6] = {{{(-10L),0xBB90A146L,(-10L),(-1L),0xBB90A146L,0x4E0A0ED5L}},{{(-10L),(-5L),(-1L),(-1L),(-5L),(-10L)}},{{(-10L),1L,0x4E0A0ED5L,(-1L),1L,(-1L)}},{{1L,0x4E0A0ED5L,1L,(-1L),0x4E0A0ED5L,0xDCE8CF06L}},{{1L,(-1L),(-1L),(-1L),(-1L),1L}},{{1L,(-10L),0xDCE8CF06L,(-1L),(-10L),(-1L)}},{{1L,0x4E0A0ED5L,1L,(-1L),0x4E0A0ED5L,0xDCE8CF06L}},{{1L,(-1L),(-1L),(-1L),(-1L),1L}},{{1L,(-10L),0xDCE8CF06L,(-1L),(-10L),(-1L)}},{{1L,0x4E0A0ED5L,1L,(-1L),0x4E0A0ED5L,0xDCE8CF06L}}};
        uint64_t l_739 = 0x4D4DD25DA4B30E23LL;
        union U2 l_760 = {0x165AEC3AL};
        const int32_t *l_780 = &l_723;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_622[i] = &l_529;
        for (i = 0; i < 4; i++)
            l_664[i] = 0L;
        if ((1L == (safe_mul_func_uint8_t_u_u(0xDEL, (safe_div_func_uint32_t_u_u((g_464.f4 != (p_73 == ((g_623 = (safe_mul_func_uint16_t_u_u((((*l_97) = p_73) , ((*l_620) = (l_618 == l_619))), ((*l_621) ^= ((void*)0 != &g_127))))) || g_318.f2))), g_331[2][1][0]))))))
        {
            uint64_t l_624 = 18446744073709551614UL;
            uint8_t *l_655 = (void*)0;
            uint8_t *l_656[4][3][2] = {{{(void*)0,&g_605},{&g_531[0][3].f2,&g_207},{&g_531[0][3].f2,&g_605}},{{(void*)0,(void*)0},{&g_605,&g_531[0][3].f2},{&g_207,&g_531[0][3].f2}},{{&g_605,(void*)0},{(void*)0,&g_605},{&g_531[0][3].f2,&g_207}},{{&g_531[0][3].f2,&g_605},{(void*)0,(void*)0},{&g_605,&g_531[0][3].f2}}};
            int32_t l_657 = 0L;
            int32_t l_658 = (-1L);
            union U2 *l_732 = &g_531[0][3];
            int i, j, k;
            l_661 = ((l_624 | ((*l_97) = (!(safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(((((((g_172 && (safe_sub_func_uint16_t_u_u(((((safe_add_func_int8_t_s_s(6L, (p_70 || ((((*l_621) = (1L == ((safe_div_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((!((((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((++g_19.f2), g_623)) && g_98), 0L)) < (safe_mul_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((l_658 = ((l_657 |= (safe_mod_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((0xAD8C0ED7L >= p_71), (*g_278))), 0x067FB4A5L)) && 2L), p_70))) , 0x2DL)), p_70)) ^ p_71) > 65527UL), p_71))) & 0xA802L) & g_331[0][3][0])), 5)) > g_221[2].f0), 1L)) || 4294967288UL))) <= g_331[2][1][0]) ^ g_464.f4)))) <= 0x398FL) <= g_4) <= p_70), 0xE1BFL))) < 0x877CDA95L) <= 250UL) <= 0x1FA0L) <= l_624) > l_659), g_256)) , g_98), g_660))))) == p_70);
            for (p_71 = 0; (p_71 <= 1); p_71 += 1)
            {
                l_665 |= ((safe_mul_func_uint8_t_u_u((l_664[2] = (1L && g_531[0][3].f2)), g_51[1][1][4])) > l_624);
            }
            for (g_127 = (-11); (g_127 <= 59); g_127++)
            {
                uint32_t l_673 = 1UL;
                int8_t * const ***l_691 = &l_689;
                int32_t l_727 = 0x84BB7868L;
                for (l_210 = 0; (l_210 <= 1); l_210 += 1)
                {
                    int64_t ***l_672 = &g_346;
                    int64_t ****l_671 = &l_672;
                    uint64_t *l_684 = (void*)0;
                    uint64_t *l_685[6] = {&l_332.f4,&l_624,&l_332.f4,&l_332.f4,&l_624,&l_332.f4};
                    int32_t l_686 = (-1L);
                    int i;
                    l_686 &= (l_668 , (0x65L <= (safe_lshift_func_uint8_t_u_s(((((((((*l_671) = &g_346) != (((g_256 |= (l_673 | (safe_sub_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((-10L), (g_531[4][7] , (safe_unary_minus_func_int64_t_s((safe_lshift_func_uint16_t_u_s(p_71, (+(l_658 = (g_225.f4 = ((((g_225 , (safe_lshift_func_int8_t_s_u((*g_278), g_318.f1))) , (void*)0) == (void*)0) , 0x18EE44D32C556EC9LL))))))))))) & 1UL), (-1L))))) < p_73) , &g_346)) >= l_657) && 0xF9FFL) <= l_657) && g_172) , 1UL), l_624))));
                    for (g_225.f4 = 0; (g_225.f4 <= 1); g_225.f4 += 1)
                    {
                        (*g_132) = &l_658;
                    }
                }
            }
        }
        else
        {
            int32_t ***l_754 = &g_129[1][2][3];
            int8_t l_769 = 0x12L;
            int32_t l_770 = 0x36072CC9L;
            int32_t l_771 = 2L;
            int32_t l_772 = 0x9638E3DDL;
            int32_t l_774 = 0xE6D8AA93L;
            int64_t * const **l_781 = (void*)0;
            int64_t * const **l_782 = (void*)0;
            int64_t **l_785 = &l_97;
            if (p_73)
            {
                const int8_t l_753[9] = {0xCDL,0L,0xCDL,0xCDL,0L,0xCDL,0xCDL,0L,0xCDL};
                int32_t *l_756 = (void*)0;
                int32_t l_757 = 0x018FF0D9L;
                int32_t l_773[9] = {0x6B2F269CL,0x6B2F269CL,0x6B2F269CL,0x6B2F269CL,0x6B2F269CL,0x6B2F269CL,0x6B2F269CL,0x6B2F269CL,0x6B2F269CL};
                int i;
                (*g_132) = ((g_322[0] != (p_70 != (safe_rshift_func_uint8_t_u_s((l_668 , ((((safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(((*g_484) , (p_71 ^ l_753[6])), 12)), (((((void*)0 != l_754) || (!0xC1ADL)) <= 0L) <= 1UL))), 11)) && g_322[0]) <= p_73) == l_725[0][0][0])), l_753[6])))) , l_756);
                l_757 = 0x5EDA237AL;
                l_725[2][0][0] = (((((0x563C64C44F9F792CLL || (safe_rshift_func_uint16_t_u_u((l_760 , (safe_add_func_int64_t_s_s((g_318.f2 & (((safe_sub_func_uint16_t_u_u(p_71, g_4)) , ((*g_278) == (l_771 = (l_770 &= ((safe_sub_func_int8_t_s_s(((((**l_106) |= (safe_div_func_uint32_t_u_u(4294967295UL, g_101))) || (p_73 & g_660)) > (**g_277)), (**g_277))) , l_769))))) < 0x073F07C4DBFE395FLL)), p_71))), 9))) != 0xF2F7L) && g_207) , (-1L)) <= g_19.f0);
                l_775[0]++;
            }
            else
            {
                const int32_t *l_778 = &l_725[8][2][2];
                const int32_t **l_779[7] = {&l_778,&l_778,&l_778,&l_778,&l_778,&l_778,&l_778};
                int i;
                l_780 = l_778;
            }
            l_770 &= ((l_783 = &g_325) != l_785);
        }
    }
    l_790 = (safe_sub_func_uint16_t_u_u(0UL, (l_788 == &l_789)));
    return p_73;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_19.f2, "g_19.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_51[i][j][k], "g_51[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_118.f0, "g_118.f0", print_hash_value);
    transparent_crc(g_118.f1, "g_118.f1", print_hash_value);
    transparent_crc(g_118.f2, "g_118.f2", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_221[i].f0, "g_221[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_225.f0, "g_225.f0", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_318.f0, "g_318.f0", print_hash_value);
    transparent_crc(g_318.f1, "g_318.f1", print_hash_value);
    transparent_crc(g_318.f2, "g_318.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_322[i], "g_322[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_331[i][j][k], "g_331[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_464.f0, "g_464.f0", print_hash_value);
    transparent_crc(g_464.f1, "g_464.f1", print_hash_value);
    transparent_crc(g_464.f2, "g_464.f2", print_hash_value);
    transparent_crc(g_464.f3, "g_464.f3", print_hash_value);
    transparent_crc(g_464.f4, "g_464.f4", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_531[i][j].f0, "g_531[i][j].f0", print_hash_value);
            transparent_crc(g_531[i][j].f2, "g_531[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_605, "g_605", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_660, "g_660", print_hash_value);
    transparent_crc(g_734.f0, "g_734.f0", print_hash_value);
    transparent_crc(g_734.f2, "g_734.f2", print_hash_value);
    transparent_crc(g_973, "g_973", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_987[i][j].f0, "g_987[i][j].f0", print_hash_value);
            transparent_crc(g_987[i][j].f1, "g_987[i][j].f1", print_hash_value);
            transparent_crc(g_987[i][j].f2, "g_987[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_989.f0, "g_989.f0", print_hash_value);
    transparent_crc(g_989.f1, "g_989.f1", print_hash_value);
    transparent_crc(g_989.f2, "g_989.f2", print_hash_value);
    transparent_crc(g_1193, "g_1193", print_hash_value);
    transparent_crc(g_1280, "g_1280", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1556[i][j][k], "g_1556[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1564[i][j][k], "g_1564[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1682, "g_1682", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1736[i], "g_1736[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1756[i][j], "g_1756[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1866[i], "g_1866[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1994[i], "g_1994[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2134, "g_2134", print_hash_value);
    transparent_crc(g_2449, "g_2449", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_2508[i], "g_2508[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2571, "g_2571", print_hash_value);
    transparent_crc(g_2696, "g_2696", print_hash_value);
    transparent_crc(g_2798, "g_2798", print_hash_value);
    transparent_crc(g_3133, "g_3133", print_hash_value);
    transparent_crc(g_3231, "g_3231", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_3456[i][j], "g_3456[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3656, "g_3656", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
