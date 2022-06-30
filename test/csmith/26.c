// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 4D84E59F
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
   const uint32_t f0;
   const uint32_t f1;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   signed f0 : 18;
   signed f1 : 3;
   signed f2 : 14;
   unsigned f3 : 23;
   signed f4 : 17;
   uint8_t f5;
   unsigned f6 : 4;
   unsigned f7 : 31;
   unsigned f8 : 14;
   const unsigned f9 : 23;
};
#pragma pack(pop)

union U2 {
   uint32_t f0;
   uint16_t f1;
   int8_t f2;
   struct S0 f3;
};


static int32_t g_3 = 0x53A34C86L;
static int32_t g_5 = 1L;
static int32_t *g_7 = &g_3;
static int32_t * const *g_6 = &g_7;
static uint32_t g_11 = 0x7D1649BCL;
static const int32_t *g_28[4] = {&g_5,&g_5,&g_5,&g_5};
static const int32_t **g_27 = &g_28[0];
static struct S1 g_34[5][6] = {{{90,0,-31,1130,336,0x77L,1,30173,24,1946},{2,1,-125,778,253,1UL,2,15772,34,2147},{90,0,-31,1130,336,0x77L,1,30173,24,1946},{-130,1,92,2176,-99,0x6AL,0,1697,77,830},{-409,-0,66,1845,-55,0xA9L,3,36737,38,19},{39,-0,-4,936,93,0x32L,2,44228,108,2514}},{{-414,0,62,1276,317,252UL,2,28025,67,1436},{33,-1,1,2347,-217,1UL,2,3473,73,1020},{428,1,-40,2417,140,4UL,1,27430,31,2069},{90,0,-31,1130,336,0x77L,1,30173,24,1946},{90,0,-31,1130,336,0x77L,1,30173,24,1946},{428,1,-40,2417,140,4UL,1,27430,31,2069}},{{-335,-0,92,1182,247,4UL,1,6603,20,219},{-335,-0,92,1182,247,4UL,1,6603,20,219},{-192,-0,-84,279,1,0xD5L,1,43035,27,936},{90,0,-31,1130,336,0x77L,1,30173,24,1946},{33,-1,1,2347,-217,1UL,2,3473,73,1020},{-130,1,92,2176,-99,0x6AL,0,1697,77,830}},{{-414,0,62,1276,317,252UL,2,28025,67,1436},{-192,-0,-84,279,1,0xD5L,1,43035,27,936},{39,-0,-4,936,93,0x32L,2,44228,108,2514},{-130,1,92,2176,-99,0x6AL,0,1697,77,830},{39,-0,-4,936,93,0x32L,2,44228,108,2514},{-192,-0,-84,279,1,0xD5L,1,43035,27,936}},{{90,0,-31,1130,336,0x77L,1,30173,24,1946},{-414,0,62,1276,317,252UL,2,28025,67,1436},{39,-0,-4,936,93,0x32L,2,44228,108,2514},{101,-1,-52,2574,146,0x46L,3,33349,47,273},{-335,-0,92,1182,247,4UL,1,6603,20,219},{-130,1,92,2176,-99,0x6AL,0,1697,77,830}}};
static uint32_t g_43 = 8UL;
static struct S0 g_61 = {0xEFF2B3A7L,4294967291UL};
static union U2 g_65[10] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
static union U2 *g_66 = (void*)0;
static uint64_t g_81 = 1UL;
static int64_t g_88 = 0x2A635BD15A5982EDLL;
static union U2 g_115[6] = {{4UL},{1UL},{0UL},{1UL},{0UL},{0UL}};
static uint32_t g_117 = 0UL;
static uint8_t g_129 = 251UL;
static int64_t g_138[7] = {0x3DC7C683C3F70368LL,0L,0L,0x3DC7C683C3F70368LL,0L,0L,0x3DC7C683C3F70368LL};
static int32_t g_139[9][1][6] = {{{0xBF1337B5L,0x8CCF7814L,0x5AE1FFECL,0x8CCF7814L,0xBF1337B5L,0x766FE7F9L}},{{0xBF1337B5L,(-10L),0x8CCF7814L,0x89AC8C39L,0xD4BA02FEL,0xD4BA02FEL}},{{(-10L),0L,0L,(-10L),0x5AE1FFECL,0xD4BA02FEL}},{{0xD34E5B83L,0xD4BA02FEL,0x8CCF7814L,0x766FE7F9L,0x89AC8C39L,0x766FE7F9L}},{{0x5AE1FFECL,0L,0x5AE1FFECL,0x060E7D70L,0x89AC8C39L,0xBF1337B5L}},{{0x8CCF7814L,0xD4BA02FEL,0xD34E5B83L,0x5AE1FFECL,0x5AE1FFECL,0xD34E5B83L}},{{0L,0L,(-10L),0x5AE1FFECL,0xD4BA02FEL,0x060E7D70L}},{{0x8CCF7814L,(-10L),0xBF1337B5L,0x060E7D70L,0xBF1337B5L,(-10L)}},{{0x5AE1FFECL,0x8CCF7814L,0xBF1337B5L,0x766FE7F9L,0L,0x060E7D70L}}};
static int16_t g_200 = 0xBB01L;
static uint16_t g_211 = 0x2457L;
static const int64_t g_220[10][6] = {{1L,(-1L),1L,0x336C0EE888F001C7LL,0x66B623827983931CLL,0x336C0EE888F001C7LL},{1L,(-1L),1L,0x336C0EE888F001C7LL,0x66B623827983931CLL,0x336C0EE888F001C7LL},{1L,(-1L),1L,0x336C0EE888F001C7LL,0x66B623827983931CLL,0x336C0EE888F001C7LL},{1L,(-1L),1L,0x336C0EE888F001C7LL,0x66B623827983931CLL,0x336C0EE888F001C7LL},{1L,(-1L),1L,0x336C0EE888F001C7LL,0x66B623827983931CLL,0x336C0EE888F001C7LL},{1L,(-1L),1L,0x336C0EE888F001C7LL,0x66B623827983931CLL,0x336C0EE888F001C7LL},{1L,(-1L),1L,0x336C0EE888F001C7LL,0x66B623827983931CLL,0x336C0EE888F001C7LL},{1L,(-1L),1L,0x336C0EE888F001C7LL,0x66B623827983931CLL,0x336C0EE888F001C7LL},{1L,(-1L),1L,0x336C0EE888F001C7LL,0x66B623827983931CLL,0x336C0EE888F001C7LL},{1L,(-1L),1L,0x336C0EE888F001C7LL,0x66B623827983931CLL,0x336C0EE888F001C7LL}};
static uint64_t g_243 = 18446744073709551615UL;
static uint32_t g_247 = 18446744073709551613UL;
static uint8_t *g_274 = &g_129;
static const uint8_t ***g_417 = (void*)0;
static uint8_t g_432 = 0x93L;
static uint64_t *g_481 = &g_243;
static uint32_t *g_485 = &g_247;
static uint32_t **g_484[3] = {&g_485,&g_485,&g_485};
static const uint64_t ***g_530[3] = {(void*)0,(void*)0,(void*)0};
static uint64_t g_566 = 1UL;
static uint8_t g_702 = 248UL;
static uint32_t g_710[10] = {0x6C4D0A21L,0x6E22DEE1L,0x6E22DEE1L,0x6C4D0A21L,0x428B1CEEL,0x6C4D0A21L,0x6E22DEE1L,0x6E22DEE1L,0x6C4D0A21L,0x428B1CEEL};
static uint64_t g_745 = 0x14499568D2972B2ALL;
static int64_t **g_955 = (void*)0;
static int64_t g_964 = (-1L);
static int8_t g_971 = 1L;
static struct S0 *g_1008 = (void*)0;
static struct S0 **g_1007 = &g_1008;
static struct S0 ***g_1006 = &g_1007;
static uint32_t ***g_1017 = (void*)0;
static uint32_t ****g_1016[4] = {&g_1017,&g_1017,&g_1017,&g_1017};
static union U2 g_1020[6][7][4] = {{{{0x7CF3F6BBL},{0xA02D9D2CL},{1UL},{1UL}},{{4294967292UL},{0xA02D9D2CL},{0x13BCDF5FL},{0xB508B48BL}},{{0xA02D9D2CL},{0x03759A3BL},{0x1114750AL},{9UL}},{{3UL},{0x68A2BB28L},{1UL},{0x089B9799L}},{{0x13BCDF5FL},{4UL},{0UL},{0x1114750AL}},{{0x03759A3BL},{1UL},{0x03759A3BL},{0x68A2BB28L}},{{0x1114750AL},{4294967295UL},{4294967295UL},{1UL}}},{{{1UL},{4294967292UL},{0UL},{4294967295UL}},{{2UL},{4294967295UL},{0UL},{1UL}},{{1UL},{9UL},{4294967295UL},{0x5BCFED3CL}},{{0x1114750AL},{4UL},{0x03759A3BL},{1UL}},{{0x03759A3BL},{1UL},{4294967295UL},{9UL}},{{0UL},{1UL},{1UL},{0UL}},{{1UL},{1UL},{0UL},{0x5BCFED3CL}}},{{{0x7CF3F6BBL},{4294967295UL},{0UL},{0x03759A3BL}},{{4UL},{0x68A2BB28L},{2UL},{0x03759A3BL}},{{4294967295UL},{4294967295UL},{0x13BCDF5FL},{0x5BCFED3CL}},{{1UL},{1UL},{4294967295UL},{0UL}},{{0x016C5227L},{1UL},{3UL},{9UL}},{{0x1114750AL},{2UL},{0xB508B48BL},{2UL}},{{1UL},{0x03759A3BL},{0x68A2BB28L},{4UL}}},{{{1UL},{4294967292UL},{4UL},{1UL}},{{9UL},{0x1114750AL},{0x03759A3BL},{0xA02D9D2CL}},{{9UL},{4UL},{4UL},{1UL}},{{1UL},{0xA02D9D2CL},{0x68A2BB28L},{0x016C5227L}},{{1UL},{0x089B9799L},{0xB508B48BL},{0UL}},{{0x1114750AL},{0xB508B48BL},{3UL},{3UL}},{{0x016C5227L},{0x016C5227L},{4294967295UL},{4294967292UL}}},{{{1UL},{4294967295UL},{0x13BCDF5FL},{1UL}},{{4294967295UL},{0x7CF3F6BBL},{2UL},{0x13BCDF5FL}},{{4UL},{0x7CF3F6BBL},{0UL},{1UL}},{{0x7CF3F6BBL},{4294967295UL},{0UL},{4294967292UL}},{{1UL},{0x016C5227L},{1UL},{3UL}},{{0UL},{0xB508B48BL},{4294967295UL},{0UL}},{{4294967295UL},{0x089B9799L},{4294967295UL},{0x016C5227L}}},{{{0UL},{0xA02D9D2CL},{0x1114750AL},{1UL}},{{2UL},{4UL},{0x49D0137AL},{0xA02D9D2CL}},{{1UL},{0x1114750AL},{0x49D0137AL},{1UL}},{{2UL},{4294967292UL},{0x1114750AL},{4UL}},{{0UL},{0x03759A3BL},{4294967295UL},{2UL}},{{4294967295UL},{2UL},{4294967295UL},{9UL}},{{0UL},{1UL},{1UL},{0UL}}}};
static union U2 *g_1019 = &g_1020[0][3][1];
static int32_t *g_1028 = (void*)0;
static struct S1 g_1139 = {-25,0,-124,1984,272,6UL,1,20545,100,1779};
static struct S1 *g_1138[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static const struct S0 **g_1218 = (void*)0;
static uint32_t g_1262 = 18446744073709551613UL;
static int32_t **g_1289 = &g_1028;
static int32_t *** const g_1288 = &g_1289;
static int32_t *** const *g_1287 = &g_1288;
static int32_t *** const **g_1286 = &g_1287;
static int32_t g_1379 = 0xF7273C1AL;
static int8_t g_1433 = (-1L);
static int64_t g_1469[7] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
static struct S1 g_1510 = {262,-0,-122,813,178,5UL,3,8842,11,1281};
static uint16_t g_1582 = 0xEA7AL;
static uint16_t **g_1614 = (void*)0;
static union U2 g_1630[3][7] = {{{1UL},{1UL},{0UL},{1UL},{1UL},{0UL},{1UL}},{{4294967294UL},{0x86D34AB1L},{0x86D34AB1L},{4294967294UL},{0x86D34AB1L},{0x86D34AB1L},{4294967294UL}},{{4294967289UL},{1UL},{4294967289UL},{4294967289UL},{1UL},{4294967289UL},{4294967289UL}}};
static uint32_t g_1635[6][6] = {{0x85BACC1DL,0xD9C0E084L,0xCDC49BDBL,0xD9C0E084L,0x85BACC1DL,0xCDC49BDBL},{0xD9C0E084L,0x85BACC1DL,0xCDC49BDBL,1UL,1UL,0xCDC49BDBL},{1UL,1UL,0xCDC49BDBL,0x85BACC1DL,0xD9C0E084L,0xCDC49BDBL},{0x85BACC1DL,0xD9C0E084L,0xCDC49BDBL,0xD9C0E084L,0x85BACC1DL,0xCDC49BDBL},{0xD9C0E084L,0x85BACC1DL,0xCDC49BDBL,1UL,1UL,0xCDC49BDBL},{1UL,1UL,0xCDC49BDBL,0x1728816BL,1UL,1UL}};
static uint16_t g_1648 = 0xCFA0L;
static struct S1 **g_1699 = &g_1138[3];
static uint8_t g_1729 = 0x3AL;
static int64_t g_1771 = 0xB3A8F1FF984866A9LL;
static int64_t ***g_1812 = &g_955;
static int64_t **** const g_1811 = &g_1812;
static int64_t **** const *g_1810[2] = {&g_1811,&g_1811};
static int16_t *g_1818[7] = {&g_200,&g_200,&g_200,&g_200,&g_200,&g_200,&g_200};
static int16_t **g_1817[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int16_t **g_1822 = &g_1818[6];



static const uint8_t func_1(void);
static int32_t func_14(int8_t p_15, union U2 p_16);
static union U2 func_18(uint32_t p_19, union U2 p_20);
static uint8_t func_23(const int32_t ** p_24, uint32_t p_25, int8_t p_26);
static uint32_t func_29(int32_t p_30, struct S1 p_31, int32_t p_32, int32_t ** p_33);
static int32_t func_35(struct S0 p_36);
static struct S0 func_37(int8_t p_38, const int32_t ** p_39, struct S0 p_40, uint32_t p_41);
static int32_t func_49(uint32_t * const p_50);
static uint32_t * const func_52(int32_t p_53, int8_t p_54, const int32_t ** p_55, uint32_t * p_56, uint32_t * p_57);
static int32_t func_58(int32_t ** p_59, struct S0 p_60);
# 138 "<stdin>"
static const uint8_t func_1(void)
{
    int64_t l_2[1];
    int32_t * const *l_8[4];
    struct S0 l_44 = {3UL,0UL};
    uint32_t l_1449 = 0xDBFD9BB2L;
    int16_t *l_1482 = &g_200;
    int16_t ** const l_1481 = &l_1482;
    int16_t **l_1484[2][6][7] = {{{(void*)0,&l_1482,(void*)0,(void*)0,(void*)0,(void*)0,&l_1482},{(void*)0,&l_1482,(void*)0,(void*)0,(void*)0,&l_1482,(void*)0},{(void*)0,(void*)0,&l_1482,&l_1482,(void*)0,(void*)0,&l_1482},{&l_1482,(void*)0,&l_1482,(void*)0,&l_1482,&l_1482,&l_1482},{(void*)0,&l_1482,&l_1482,(void*)0,(void*)0,&l_1482,&l_1482},{(void*)0,(void*)0,(void*)0,&l_1482,(void*)0,&l_1482,(void*)0}},{{(void*)0,(void*)0,(void*)0,&l_1482,(void*)0,&l_1482,&l_1482},{&l_1482,&l_1482,(void*)0,(void*)0,(void*)0,&l_1482,&l_1482},{(void*)0,&l_1482,&l_1482,(void*)0,(void*)0,&l_1482,&l_1482},{(void*)0,(void*)0,&l_1482,(void*)0,(void*)0,&l_1482,(void*)0},{(void*)0,(void*)0,&l_1482,&l_1482,(void*)0,(void*)0,&l_1482},{(void*)0,(void*)0,(void*)0,&l_1482,&l_1482,&l_1482,(void*)0}}};
    uint32_t l_1494 = 4294967295UL;
    struct S0 l_1498 = {0x5B73B4C0L,0xF1A5A6BEL};
    struct S1 l_1517[2] = {{-415,-1,124,297,36,0xE7L,1,20767,67,1150},{-415,-1,124,297,36,0xE7L,1,20767,67,1150}};
    uint64_t **l_1519 = &g_481;
    uint64_t ***l_1518[9];
    uint8_t l_1520[10];
    const uint32_t *l_1534 = (void*)0;
    const uint32_t **l_1533 = &l_1534;
    struct S0 **l_1543 = &g_1008;
    uint32_t l_1544 = 4294967291UL;
    uint32_t l_1575 = 18446744073709551610UL;
    union U2 l_1659 = {0x5B3CFD97L};
    uint32_t *l_1693 = &l_1449;
    uint64_t l_1694[6] = {0x3BB594790DF0C8E1LL,0x3BB594790DF0C8E1LL,0x3BB594790DF0C8E1LL,0x3BB594790DF0C8E1LL,0x3BB594790DF0C8E1LL,0x3BB594790DF0C8E1LL};
    uint16_t l_1710 = 9UL;
    int64_t ****l_1807 = (void*)0;
    const int16_t l_1824[6][9][3] = {{{0x1BA6L,0xD224L,0xC837L},{0x6145L,0L,(-5L)},{0x1BA6L,0xB246L,(-1L)},{1L,0x789FL,0x6145L},{0x378AL,0x6924L,0L},{1L,1L,6L},{0x1BA6L,0L,0x1BA6L},{0x6145L,0xECE7L,0xBB5AL},{0x1BA6L,0x591AL,0xE4D3L}},{{1L,0xA52FL,0x3442L},{0x378AL,3L,0x3411L},{1L,1L,(-5L)},{0x1BA6L,0x787BL,0x378AL},{0x6145L,0xB064L,0xEDF2L},{0x1BA6L,0x1807L,0xEA62L},{1L,0x8B11L,1L},{0x378AL,(-6L),0x6441L},{1L,1L,0x3079L}},{{0x1BA6L,0xD224L,0xC837L},{0x6145L,0L,(-5L)},{0x1BA6L,0xB246L,(-1L)},{1L,0x789FL,0x6145L},{0x378AL,0x6924L,0L},{1L,1L,6L},{0x1BA6L,0L,0x1BA6L},{0x6145L,0xECE7L,0xBB5AL},{0x41F6L,0xEA62L,5L}},{{0x27CBL,0xEDF2L,9L},{0x6C61L,0x378AL,(-1L)},{0x27CBL,(-5L),1L},{0x41F6L,0x3411L,0x6C61L},{0x9704L,0x3442L,1L},{0x41F6L,0xE4D3L,(-1L)},{0x27CBL,0xBB5AL,0x27CBL},{0x6C61L,0x1BA6L,0x63EAL},{0x27CBL,6L,0x8424L}},{{0x41F6L,0L,(-1L)},{0x9704L,0x6145L,0L},{0x41F6L,(-1L),0x2FD2L},{0x27CBL,(-5L),0x9704L},{0x6C61L,0xC837L,(-1L)},{0x27CBL,0x3079L,(-1L)},{0x41F6L,0x6441L,0x41F6L},{0x9704L,1L,0xDF4CL},{0x41F6L,0xEA62L,5L}},{{0x27CBL,0xEDF2L,9L},{0x6C61L,0x378AL,(-1L)},{0x27CBL,(-5L),1L},{0x41F6L,0x3411L,0x6C61L},{0x9704L,0x3442L,1L},{0x41F6L,0xE4D3L,(-1L)},{0x27CBL,0xBB5AL,0x27CBL},{0x6C61L,0x1BA6L,0x63EAL},{0x27CBL,6L,0x8424L}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2[i] = 0xA42B4837182ABBF9LL;
    for (i = 0; i < 4; i++)
        l_8[i] = &g_7;
    for (i = 0; i < 9; i++)
        l_1518[i] = &l_1519;
    for (i = 0; i < 10; i++)
        l_1520[i] = 0x3EL;
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    {
        int32_t l_9[3][3] = {{0x7E434392L,0x7E434392L,0x7E434392L},{0x0A6FF609L,0x0A6FF609L,0x0A6FF609L},{0x7E434392L,0x7E434392L,0x7E434392L}};
        int32_t l_45 = 0x2F310E27L;
        struct S1 l_1445[10] = {{187,0,27,2280,-178,253UL,0,20297,41,948},{187,0,27,2280,-178,253UL,0,20297,41,948},{187,0,27,2280,-178,253UL,0,20297,41,948},{187,0,27,2280,-178,253UL,0,20297,41,948},{187,0,27,2280,-178,253UL,0,20297,41,948},{187,0,27,2280,-178,253UL,0,20297,41,948},{187,0,27,2280,-178,253UL,0,20297,41,948},{187,0,27,2280,-178,253UL,0,20297,41,948},{187,0,27,2280,-178,253UL,0,20297,41,948},{187,0,27,2280,-178,253UL,0,20297,41,948}};
        uint16_t l_1497 = 5UL;
        struct S1 * const l_1509 = &g_1510;
        struct S1 * const *l_1508 = &l_1509;
        int32_t *l_1524 = &l_9[2][1];
        int32_t l_1565[7][8][4] = {{{(-1L),0xB30D69E7L,0x7714ABE4L,0xA9CD1953L},{0x7714ABE4L,0xA9CD1953L,1L,0x649C7A36L},{0x7714ABE4L,0x6F3FD7CDL,0x7714ABE4L,(-1L)},{(-1L),0x649C7A36L,0xEF8BD1F2L,(-1L)},{1L,0x6F3FD7CDL,(-1L),0x649C7A36L},{0xA189D82AL,0xA9CD1953L,(-1L),0xA9CD1953L},{1L,0xB30D69E7L,0xEF8BD1F2L,7L},{(-1L),0xB30D69E7L,0x7714ABE4L,0xA9CD1953L}},{{0x7714ABE4L,0xA9CD1953L,1L,0x649C7A36L},{0x7714ABE4L,0x6F3FD7CDL,0x7714ABE4L,(-1L)},{(-1L),0x649C7A36L,0xEF8BD1F2L,(-1L)},{1L,0x6F3FD7CDL,(-1L),0x649C7A36L},{0xA189D82AL,0xA9CD1953L,(-1L),0xA9CD1953L},{1L,0xB30D69E7L,0xEF8BD1F2L,7L},{(-1L),0xB30D69E7L,0x7714ABE4L,0xA9CD1953L},{0x7714ABE4L,0xA9CD1953L,1L,0x649C7A36L}},{{0x7714ABE4L,0x6F3FD7CDL,0x7714ABE4L,(-1L)},{(-1L),0x649C7A36L,0xEF8BD1F2L,(-1L)},{1L,0x6F3FD7CDL,(-1L),0x649C7A36L},{0xA189D82AL,0xA9CD1953L,(-1L),0xA9CD1953L},{1L,0xB30D69E7L,0xEF8BD1F2L,7L},{(-1L),0xB30D69E7L,0x7714ABE4L,0xA9CD1953L},{0xA189D82AL,0xB30D69E7L,(-1L),(-1L)},{0xA189D82AL,0L,0xA189D82AL,7L}},{{0x7714ABE4L,(-1L),(-1L),7L},{(-1L),0L,1L,(-1L)},{0xEF8BD1F2L,0xB30D69E7L,1L,0xB30D69E7L},{(-1L),0x649C7A36L,(-1L),0x6F3FD7CDL},{0x7714ABE4L,0x649C7A36L,0xA189D82AL,0xB30D69E7L},{0xA189D82AL,0xB30D69E7L,(-1L),(-1L)},{0xA189D82AL,0L,0xA189D82AL,7L},{0x7714ABE4L,(-1L),(-1L),7L}},{{(-1L),0L,1L,(-1L)},{0xEF8BD1F2L,0xB30D69E7L,1L,0xB30D69E7L},{(-1L),0x649C7A36L,(-1L),0x6F3FD7CDL},{0x7714ABE4L,0x649C7A36L,0xA189D82AL,0xB30D69E7L},{0xA189D82AL,0xB30D69E7L,(-1L),(-1L)},{0xA189D82AL,0L,0xA189D82AL,7L},{0x7714ABE4L,(-1L),(-1L),7L},{(-1L),0L,1L,(-1L)}},{{0xEF8BD1F2L,0xB30D69E7L,1L,0xB30D69E7L},{(-1L),0x649C7A36L,(-1L),0x6F3FD7CDL},{0x7714ABE4L,0x649C7A36L,0xA189D82AL,0xB30D69E7L},{0xA189D82AL,0xB30D69E7L,(-1L),(-1L)},{0xA189D82AL,0L,0xA189D82AL,7L},{0x7714ABE4L,(-1L),(-1L),7L},{(-1L),0L,1L,(-1L)},{0xEF8BD1F2L,0xB30D69E7L,1L,0xB30D69E7L}},{{(-1L),0x649C7A36L,(-1L),0x6F3FD7CDL},{0x7714ABE4L,0x649C7A36L,0xA189D82AL,0xB30D69E7L},{0xA189D82AL,0xB30D69E7L,(-1L),(-1L)},{0xA189D82AL,0L,0xA189D82AL,7L},{0x7714ABE4L,(-1L),(-1L),7L},{(-1L),0L,1L,(-1L)},{0xEF8BD1F2L,0xB30D69E7L,1L,0xB30D69E7L},{(-1L),0x649C7A36L,(-1L),0x6F3FD7CDL}}};
        uint8_t l_1566[6] = {5UL,0UL,5UL,5UL,0UL,5UL};
        struct S0 ****l_1613 = &g_1006;
        struct S0 *****l_1612 = &l_1613;
        uint16_t *l_1616 = &g_1582;
        uint16_t **l_1615 = &l_1616;
        int16_t l_1646 = 0x0D5AL;
        int64_t ***l_1658 = &g_955;
        uint32_t l_1666 = 4UL;
        int32_t l_1669 = 1L;
        union U2 *l_1674 = &g_1630[2][2];
        int8_t l_1681 = 0x32L;
        uint32_t *** const *l_1683 = &g_1017;
        union U2 l_1691[4][5] = {{{8UL},{4294967295UL},{4294967295UL},{4294967295UL},{8UL}},{{8UL},{4294967295UL},{4294967295UL},{4294967295UL},{8UL}},{{8UL},{4294967295UL},{4294967295UL},{4294967295UL},{8UL}},{{8UL},{4294967295UL},{4294967295UL},{4294967295UL},{8UL}}};
        uint16_t l_1704[7] = {0xA47FL,65529UL,65529UL,0xA47FL,65529UL,65529UL,0xA47FL};
        uint32_t l_1728 = 1UL;
        uint16_t l_1773 = 0x2DB1L;
        uint32_t *l_1799 = &l_1728;
        uint32_t **l_1798 = &l_1799;
        int64_t **** const *l_1813 = &l_1807;
        int i, j, k;
    }
    return l_1824[1][4][1];
}







static int32_t func_14(int8_t p_15, union U2 p_16)
{
    uint8_t l_1056 = 0x93L;
    int32_t l_1058 = 0L;
    int32_t l_1061 = 0xACA0B215L;
    int32_t l_1067 = 0x49FB4300L;
    int32_t l_1068 = 0x5011F635L;
    int32_t l_1069 = 0x9E206B3CL;
    int32_t l_1070 = (-1L);
    int8_t l_1071 = (-6L);
    int32_t *l_1085 = &l_1069;
    const uint32_t l_1088[9] = {3UL,0x71D25AB5L,3UL,3UL,0x71D25AB5L,3UL,3UL,0x71D25AB5L,3UL};
    struct S0 l_1091 = {4294967289UL,0xB0A1246AL};
    uint32_t *l_1094 = &g_247;
    struct S1 *l_1137 = &g_34[2][4];
    struct S0 ****l_1140 = &g_1006;
    const int64_t l_1156[8] = {0xB8C3C026704A0468LL,0xB8C3C026704A0468LL,0xB8C3C026704A0468LL,0xB8C3C026704A0468LL,0xB8C3C026704A0468LL,0xB8C3C026704A0468LL,0xB8C3C026704A0468LL,0xB8C3C026704A0468LL};
    int8_t l_1190[7] = {0x6AL,0x6AL,0x6AL,0x6AL,0x6AL,0x6AL,0x6AL};
    int64_t l_1258 = (-1L);
    uint32_t l_1397 = 18446744073709551607UL;
    int64_t l_1436[10][10][1] = {{{0xCBFCFCAED52B7BACLL},{(-1L)},{(-9L)},{0xEFB4C9BDC9DE1D8BLL},{(-7L)},{0L},{0L},{4L},{6L},{0x933E27E50F4BD379LL}},{{0x6C8943275EC720DELL},{(-1L)},{(-1L)},{6L},{0xDBAE99A5092FEBF8LL},{7L},{0L},{1L},{0x7102C93B449153F7LL},{1L}},{{0L},{7L},{0xDBAE99A5092FEBF8LL},{6L},{(-1L)},{(-1L)},{0x6C8943275EC720DELL},{0x933E27E50F4BD379LL},{6L},{4L}},{{0L},{0L},{(-7L)},{0xEFB4C9BDC9DE1D8BLL},{(-9L)},{(-1L)},{0xCBFCFCAED52B7BACLL},{0xCBFCFCAED52B7BACLL},{(-1L)},{(-9L)}},{{0xEFB4C9BDC9DE1D8BLL},{(-7L)},{0L},{0L},{4L},{6L},{0x933E27E50F4BD379LL},{0x6C8943275EC720DELL},{(-1L)},{(-1L)}},{{6L},{0xDBAE99A5092FEBF8LL},{7L},{0L},{1L},{0x7102C93B449153F7LL},{1L},{0L},{7L},{0xDBAE99A5092FEBF8LL}},{{6L},{(-1L)},{(-1L)},{0x6C8943275EC720DELL},{0x933E27E50F4BD379LL},{6L},{4L},{0L},{0L},{(-7L)}},{{0xEFB4C9BDC9DE1D8BLL},{(-9L)},{(-1L)},{0xCBFCFCAED52B7BACLL},{0xCBFCFCAED52B7BACLL},{(-1L)},{(-9L)},{0xEFB4C9BDC9DE1D8BLL},{(-7L)},{0L}},{{0L},{4L},{6L},{0x933E27E50F4BD379LL},{0x6C8943275EC720DELL},{(-1L)},{(-1L)},{6L},{0xDBAE99A5092FEBF8LL},{7L}},{{0L},{1L},{0x7102C93B449153F7LL},{1L},{0L},{7L},{0xDBAE99A5092FEBF8LL},{6L},{(-1L)},{(-1L)}}};
    uint16_t l_1437 = 0UL;
    int32_t l_1441[6];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1441[i] = 0L;
    for (p_16.f2 = 0; (p_16.f2 == 22); p_16.f2 = safe_add_func_uint8_t_u_u(p_16.f2, 3))
    {
        int32_t *l_1057 = &g_139[6][0][2];
        int32_t *l_1059 = (void*)0;
        int32_t *l_1060 = &g_139[6][0][1];
        int32_t *l_1062 = &l_1061;
        int32_t *l_1063 = &l_1061;
        int32_t *l_1064 = &l_1061;
        int32_t *l_1065 = &g_139[4][0][0];
        int32_t *l_1066[9][1] = {{&g_5},{&g_139[1][0][1]},{&g_5},{&g_139[1][0][1]},{&g_5},{&g_139[1][0][1]},{&g_5},{&g_139[1][0][1]},{&g_5}};
        uint32_t l_1072 = 5UL;
        int i, j;
        l_1056 = (**g_6);
        ++l_1072;
        for (g_243 = 0; (g_243 >= 45); g_243 = safe_add_func_int32_t_s_s(g_243, 3))
        {
            uint16_t l_1077 = 0x56FEL;
            l_1077++;
            for (l_1058 = 20; (l_1058 < (-1)); --l_1058)
            {
                for (l_1077 = 0; l_1077 < 7; l_1077 += 1)
                {
                    g_138[l_1077] = 0x2200726B37E86606LL;
                }
                for (g_702 = 0; (g_702 >= 41); ++g_702)
                {
                    if ((65535UL != 0x7F2AL))
                    {
                        (*l_1065) = ((void*)0 != g_530[0]);
                    }
                    else
                    {
                        return (**g_6);
                    }
                }
            }
        }
    }
    return p_16.f2;
}







static union U2 func_18(uint32_t p_19, union U2 p_20)
{
    int32_t * const l_574 = &g_139[4][0][2];
    union U2 l_581[3][8] = {{{0x9B2D8B8AL},{0x9B2D8B8AL},{2UL},{0x9B2D8B8AL},{0x9B2D8B8AL},{2UL},{0x9B2D8B8AL},{0x9B2D8B8AL}},{{0x1DA56B4FL},{0x9B2D8B8AL},{0x1DA56B4FL},{0x1DA56B4FL},{0x9B2D8B8AL},{0x1DA56B4FL},{0x1DA56B4FL},{0x9B2D8B8AL}},{{0x9B2D8B8AL},{0x1DA56B4FL},{0x1DA56B4FL},{0x9B2D8B8AL},{0x1DA56B4FL},{0x1DA56B4FL},{0x9B2D8B8AL},{0x1DA56B4FL}}};
    uint32_t l_600 = 0UL;
    int16_t *l_601 = &g_200;
    uint8_t *l_602[10] = {&g_34[2][4].f5,&g_34[2][4].f5,&g_34[2][4].f5,&g_34[2][4].f5,&g_34[2][4].f5,&g_34[2][4].f5,&g_34[2][4].f5,&g_34[2][4].f5,&g_34[2][4].f5,&g_34[2][4].f5};
    struct S0 l_603[6][2][10] = {{{{1UL,0x1EA73088L},{7UL,4294967295UL},{4294967295UL,5UL},{1UL,0x1EA73088L},{0xAF3CF900L,4294967294UL},{0xAF3CF900L,4294967294UL},{1UL,0x1EA73088L},{4294967295UL,5UL},{7UL,4294967295UL},{1UL,0x1EA73088L}},{{4294967295UL,5UL},{2UL,4294967295UL},{7UL,4294967295UL},{0xAF3CF900L,4294967294UL},{2UL,4294967295UL},{0xAF3CF900L,4294967294UL},{7UL,4294967295UL},{2UL,4294967295UL},{4294967295UL,5UL},{4294967295UL,5UL}}},{{{1UL,0x1EA73088L},{1UL,4294967292UL},{4294967295UL,0xD4DC3A93L},{2UL,4294967295UL},{2UL,4294967295UL},{4294967295UL,0xD4DC3A93L},{1UL,4294967292UL},{1UL,0x1EA73088L},{4294967295UL,0xD4DC3A93L},{1UL,0x1EA73088L}},{{2UL,4294967295UL},{7UL,4294967295UL},{0xAF3CF900L,4294967294UL},{2UL,4294967295UL},{0xAF3CF900L,4294967294UL},{7UL,4294967295UL},{2UL,4294967295UL},{4294967295UL,5UL},{4294967295UL,5UL},{2UL,4294967295UL}}},{{{4294967295UL,5UL},{1UL,0x1EA73088L},{0xAF3CF900L,4294967294UL},{0xAF3CF900L,4294967294UL},{1UL,0x1EA73088L},{4294967295UL,0x4B509D26L},{4294967295UL,0xD4DC3A93L},{0xAF3CF900L,4294967294UL},{4294967295UL,0xD4DC3A93L},{4294967295UL,0x4B509D26L}},{{7UL,4294967295UL},{0xAF3CF900L,4294967294UL},{2UL,4294967295UL},{0xAF3CF900L,4294967294UL},{7UL,4294967295UL},{2UL,4294967295UL},{4294967295UL,5UL},{4294967295UL,5UL},{2UL,4294967295UL},{7UL,4294967295UL}}},{{{7UL,4294967295UL},{4294967295UL,0xD4DC3A93L},{4294967295UL,0xD4DC3A93L},{7UL,4294967295UL},{4294967295UL,0x10C59D2DL},{4294967295UL,0x4B509D26L},{7UL,4294967295UL},{4294967295UL,0x4B509D26L},{4294967295UL,0x10C59D2DL},{7UL,4294967295UL}},{{4294967295UL,0x4B509D26L},{7UL,4294967295UL},{4294967295UL,0x4B509D26L},{4294967295UL,0x10C59D2DL},{7UL,4294967295UL},{4294967295UL,0xD4DC3A93L},{4294967295UL,0xD4DC3A93L},{7UL,4294967295UL},{4294967295UL,0x10C59D2DL},{4294967295UL,0x4B509D26L}}},{{{4294967295UL,5UL},{4294967295UL,5UL},{2UL,4294967295UL},{7UL,4294967295UL},{0xAF3CF900L,4294967294UL},{2UL,4294967295UL},{0xAF3CF900L,4294967294UL},{7UL,4294967295UL},{2UL,4294967295UL},{4294967295UL,5UL}},{{0xAF3CF900L,4294967294UL},{4294967295UL,0xD4DC3A93L},{4294967295UL,0x4B509D26L},{0xAF3CF900L,4294967294UL},{4294967295UL,0x10C59D2DL},{4294967295UL,0x10C59D2DL},{0xAF3CF900L,4294967294UL},{4294967295UL,0x4B509D26L},{4294967295UL,0xD4DC3A93L},{0xAF3CF900L,4294967294UL}}},{{{4294967295UL,0x4B509D26L},{4294967295UL,5UL},{4294967295UL,0xD4DC3A93L},{4294967295UL,0x10C59D2DL},{4294967295UL,5UL},{4294967295UL,0x10C59D2DL},{4294967295UL,0xD4DC3A93L},{4294967295UL,5UL},{4294967295UL,0x4B509D26L},{4294967295UL,0x4B509D26L}},{{0xAF3CF900L,4294967294UL},{7UL,4294967295UL},{2UL,4294967295UL},{4294967295UL,5UL},{4294967295UL,5UL},{2UL,4294967295UL},{7UL,4294967295UL},{0xAF3CF900L,4294967294UL},{2UL,4294967295UL},{0xAF3CF900L,4294967294UL}}}};
    int32_t l_604 = 0L;
    uint32_t l_667 = 0xF9BE5869L;
    int32_t l_668 = 1L;
    const int32_t **l_670 = (void*)0;
    uint64_t **l_671 = &g_481;
    uint8_t l_709 = 248UL;
    uint8_t **l_785 = &l_602[8];
    uint8_t ***l_784[7] = {&l_785,&l_785,&l_785,&l_785,&l_785,&l_785,&l_785};
    uint8_t ****l_783[8] = {&l_784[3],&l_784[4],&l_784[3],&l_784[3],&l_784[4],&l_784[3],&l_784[3],&l_784[4]};
    int64_t *l_800 = &g_138[6];
    uint8_t *l_852[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t l_883 = 0xF9F2L;
    int32_t l_886 = 0xEB1E7108L;
    int32_t l_887 = 0x89E4C204L;
    int32_t l_889 = (-1L);
    int8_t l_911 = 0x17L;
    int32_t l_972 = 8L;
    int32_t l_973[9][1] = {{1L},{0xDB82F874L},{0xDB82F874L},{1L},{0xDB82F874L},{0xDB82F874L},{1L},{0xDB82F874L},{0xDB82F874L}};
    uint8_t l_1045 = 0xECL;
    int i, j, k;
    if ((((*g_6) != l_574) <= (safe_sub_func_int16_t_s_s((safe_div_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s(0x95L, (((func_37((l_581[0][2] , (((g_432 = ((-1L) & (((((safe_lshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s(5L, (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((*l_601) = ((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((((safe_mul_func_uint8_t_u_u((p_20.f2 ^ ((*g_274) = (safe_div_func_int64_t_s_s((safe_div_func_int64_t_s_s(((-7L) == (((((*l_574) = ((*g_481) = l_600)) || (*l_574)) < 0x3C44C2D41EF6B8DDLL) , (*l_574))), p_20.f2)), 5UL)))), 0UL)) > g_115[4].f2) == 1L) || g_34[2][4].f2), 8)), g_61.f0)) || p_19)), 12)), 0x08A5L)))), p_20.f2)) <= p_20.f0) != 0x71F9L) , p_20.f1) ^ 0xA65DL))) || (*g_274)) || 0xC0C3L)), &g_28[0], l_603[0][0][8], p_19) , g_117) , 0x78E7F56782A20547LL) , 1L))) <= p_20.f1), l_604)), g_566))))
    {
        uint32_t l_616 = 18446744073709551615UL;
        const uint64_t *l_665 = (void*)0;
        const uint64_t **l_664 = &l_665;
        uint64_t **l_666 = (void*)0;
        int32_t *l_678 = &l_604;
        int32_t **l_706 = &g_7;
        int32_t ***l_705 = &l_706;
        union U2 *l_713 = &g_65[7];
        struct S1 l_722 = {310,1,95,1710,-274,0xDEL,1,16054,37,1017};
        int16_t l_770 = (-1L);
        uint8_t **l_782[6][7][3] = {{{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]}},{{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]}},{{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]}},{{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[7],&l_602[0]}},{{&l_602[0],&l_602[7],&l_602[0]},{&l_602[0],&l_602[0],&l_602[6]},{&l_602[6],&l_602[0],&l_602[6]},{&l_602[6],&l_602[0],&l_602[6]},{&l_602[6],&l_602[0],&l_602[6]},{&l_602[6],&l_602[0],&l_602[6]},{&l_602[6],&l_602[0],&l_602[6]}},{{&l_602[6],&l_602[0],&l_602[6]},{&l_602[6],&l_602[0],&l_602[6]},{&l_602[6],&l_602[0],&l_602[6]},{&l_602[6],&l_602[0],&l_602[6]},{&l_602[6],&l_602[0],&l_602[6]},{&l_602[6],&l_602[0],&l_602[6]},{&l_602[6],&l_602[0],&l_602[6]}}};
        uint8_t ***l_781 = &l_782[2][6][0];
        uint8_t ****l_780 = &l_781;
        uint32_t l_807 = 1UL;
        int i, j, k;
        (*l_574) &= p_19;
        for (g_11 = 0; (g_11 <= 2); g_11 += 1)
        {
            int32_t *l_605 = (void*)0;
            int32_t *l_606 = (void*)0;
            int32_t *l_607 = (void*)0;
            int32_t *l_608 = (void*)0;
            int32_t *l_609 = &l_604;
            int32_t *l_610 = &g_139[4][0][0];
            int32_t l_611 = 1L;
            int32_t *l_612 = &g_5;
            int32_t *l_613 = &g_139[4][0][0];
            int32_t *l_614 = &l_604;
            int32_t *l_615[7];
            union U2 l_628 = {1UL};
            const int32_t **l_669[7];
            uint32_t *l_676 = (void*)0;
            uint32_t *l_677 = &l_628.f0;
            uint16_t *l_707 = &l_628.f1;
            uint64_t *l_708[1];
            int64_t *l_711 = &g_88;
            uint8_t *l_725[5][8][6] = {{{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0}},{{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0}},{{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0}},{{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,&g_34[2][4].f5,(void*)0},{(void*)0,&g_34[2][4].f5,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int16_t **l_790 = &l_601;
            uint16_t l_838 = 9UL;
            uint64_t l_893 = 0xCD07AFC03740BD05LL;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_615[i] = &l_604;
            for (i = 0; i < 7; i++)
                l_669[i] = &g_28[0];
            for (i = 0; i < 1; i++)
                l_708[i] = &g_566;
            ++l_616;
        }
    }
    else
    {
        uint64_t **l_903 = &g_481;
        const int32_t l_904 = 1L;
        int32_t l_907 = 1L;
        int8_t l_908 = 0x2AL;
        const int32_t ***l_918 = &g_27;
        const int32_t ****l_917 = &l_918;
        int64_t l_963 = (-1L);
        int32_t l_967 = 1L;
        int32_t l_969 = 5L;
        int32_t l_975 = 0xCFF6B31AL;
        uint16_t l_977 = 6UL;
        int32_t l_997 = 0xBA451E57L;
        int32_t l_999[10][1][10] = {{{1L,1L,(-9L),1L,0x8702192EL,0x8702192EL,1L,(-9L),1L,1L}},{{0x332F6751L,1L,0x2E60DCF7L,(-1L),0x2E041C5FL,1L,(-10L),6L,4L,0x4043586EL}},{{0x2E60DCF7L,1L,0L,1L,0x2E041C5FL,1L,(-4L),1L,0x2E041C5FL,1L}},{{0x2E041C5FL,(-10L),0x2E041C5FL,0x332F6751L,0x8702192EL,(-1L),0x4043586EL,0L,(-1L),7L}},{{(-10L),0x8702192EL,(-4L),0x2E60DCF7L,0x4043586EL,0x1F235482L,(-9L),0L,0L,(-9L)}},{{4L,(-1L),0x2E041C5FL,0x2E041C5FL,(-1L),4L,0L,1L,(-1L),(-4L)}},{{1L,0L,0L,(-10L),1L,(-1L),0x1F235482L,6L,1L,0x2E60DCF7L}},{{1L,(-9L),0x2E60DCF7L,4L,1L,4L,0x2E60DCF7L,(-9L),1L,(-1L)}},{{4L,0x2E60DCF7L,(-9L),1L,(-1L),0x1F235482L,0x8702192EL,0x2E041C5FL,7L,6L}},{{(-10L),0L,0L,1L,7L,(-1L),(-1L),7L,1L,0L}}};
        int i, j, k;
        l_907 = (safe_div_func_uint16_t_u_u(((((safe_add_func_int32_t_s_s((l_903 != l_903), l_904)) <= (safe_sub_func_uint8_t_u_u(((*g_274)++), 248UL))) >= (g_34[2][4].f6 > g_65[8].f0)) > (((((p_20.f0 < ((*l_601) &= l_911)) && (&g_88 == l_800)) & p_20.f1) <= p_20.f2) && 0x3C123584897FE5F8LL)), p_20.f2));
        for (l_907 = 0; (l_907 > 27); ++l_907)
        {
            int32_t l_916[7][9][4] = {{{0x119DB7A8L,0x5C8AA0AEL,(-1L),(-6L)},{5L,1L,(-1L),0x9543CFB5L},{0x18CC7B28L,(-6L),(-1L),0x9A110A99L},{5L,0x51A2E583L,0xE148E099L,0x51A2E583L},{0x929B4E11L,1L,0x18CC7B28L,0x51A2E583L},{0x18CC7B28L,0x51A2E583L,7L,0x9A110A99L},{0x2645B4A7L,(-6L),0xE148E099L,0x9543CFB5L},{0x2645B4A7L,1L,7L,(-6L)},{0x18CC7B28L,0x9543CFB5L,0x18CC7B28L,0x9A110A99L}},{{0x929B4E11L,0x9543CFB5L,0xE148E099L,(-6L)},{5L,1L,(-1L),0x9543CFB5L},{0x18CC7B28L,(-6L),(-1L),0x9A110A99L},{5L,0x51A2E583L,0xE148E099L,0x51A2E583L},{0x929B4E11L,1L,0x18CC7B28L,0x51A2E583L},{0x18CC7B28L,0x51A2E583L,7L,0x9A110A99L},{0x2645B4A7L,(-6L),0xE148E099L,0x9543CFB5L},{0x2645B4A7L,1L,7L,(-6L)},{0x18CC7B28L,0x9543CFB5L,0x18CC7B28L,0x9A110A99L}},{{0x929B4E11L,0x9543CFB5L,0xE148E099L,(-6L)},{5L,1L,(-1L),0x9543CFB5L},{0x18CC7B28L,(-6L),(-1L),0x9A110A99L},{5L,0x51A2E583L,0xE148E099L,0x51A2E583L},{0x929B4E11L,1L,0x18CC7B28L,0x51A2E583L},{0x18CC7B28L,0x51A2E583L,7L,0x9A110A99L},{0x2645B4A7L,(-6L),0xE148E099L,0x9543CFB5L},{0x2645B4A7L,1L,7L,(-6L)},{0x18CC7B28L,0x9543CFB5L,0x18CC7B28L,0x9A110A99L}},{{0x929B4E11L,0x9543CFB5L,0xE148E099L,(-6L)},{5L,1L,(-1L),0x9543CFB5L},{0x18CC7B28L,(-6L),(-1L),0x9A110A99L},{5L,0x51A2E583L,0xE148E099L,0x51A2E583L},{0x929B4E11L,1L,0x18CC7B28L,0x51A2E583L},{0x18CC7B28L,0x51A2E583L,7L,0x9A110A99L},{0x2645B4A7L,(-6L),0xE148E099L,0x9543CFB5L},{0x2645B4A7L,1L,7L,(-6L)},{0x18CC7B28L,0x9543CFB5L,0x18CC7B28L,0x9A110A99L}},{{0x929B4E11L,0x9543CFB5L,0xE148E099L,(-6L)},{5L,1L,(-1L),0x9543CFB5L},{0x18CC7B28L,(-6L),(-1L),0x9A110A99L},{5L,0x51A2E583L,0xE148E099L,0x51A2E583L},{0x929B4E11L,1L,0x18CC7B28L,0x51A2E583L},{0x18CC7B28L,0x51A2E583L,7L,0x9A110A99L},{0x2645B4A7L,(-6L),0xE148E099L,0x9543CFB5L},{0x2645B4A7L,1L,7L,(-6L)},{0x18CC7B28L,0x9543CFB5L,0x18CC7B28L,0x9A110A99L}},{{0x929B4E11L,0x9543CFB5L,0xE148E099L,(-6L)},{5L,1L,(-1L),0x9543CFB5L},{0x18CC7B28L,(-6L),(-1L),0x9A110A99L},{5L,0x51A2E583L,0x2645B4A7L,0x9A110A99L},{7L,(-1L),0x119DB7A8L,0x9A110A99L},{0x119DB7A8L,0x9A110A99L,8L,0x5C8AA0AEL},{0x18CC7B28L,1L,0x2645B4A7L,1L},{0x18CC7B28L,(-1L),8L,1L},{0x119DB7A8L,1L,0x119DB7A8L,0x5C8AA0AEL}},{{7L,1L,0x2645B4A7L,1L},{(-1L),(-1L),0xE148E099L,1L},{0x119DB7A8L,1L,0xE148E099L,0x5C8AA0AEL},{(-1L),0x9A110A99L,0x2645B4A7L,0x9A110A99L},{7L,(-1L),0x119DB7A8L,0x9A110A99L},{0x119DB7A8L,0x9A110A99L,8L,0x5C8AA0AEL},{0x18CC7B28L,1L,0x2645B4A7L,1L},{0x18CC7B28L,(-1L),8L,1L},{0x119DB7A8L,1L,0x119DB7A8L,0x5C8AA0AEL}}};
            int64_t * const * const l_956 = &l_800;
            int32_t l_966 = 0x73BA1C14L;
            int32_t l_968 = (-8L);
            int32_t l_970[8][5][3] = {{{(-10L),(-10L),(-9L)},{0x8D84FCE9L,1L,0L},{0xE385B539L,(-10L),0xEEBE0EF2L},{0x952F7C59L,0x8D84FCE9L,(-9L)},{1L,0xE385B539L,0xEEBE0EF2L}},{{(-5L),0x952F7C59L,0L},{0xF9D534F5L,1L,(-9L)},{(-5L),(-5L),4L},{1L,0xF9D534F5L,(-4L)},{0x952F7C59L,(-5L),4L}},{{0xE385B539L,1L,0xAC81C10BL},{0x8D84FCE9L,0x952F7C59L,4L},{(-10L),0xE385B539L,(-4L)},{1L,0x8D84FCE9L,4L},{(-10L),(-10L),(-9L)}},{{0x8D84FCE9L,1L,0L},{0xE385B539L,(-10L),0xEEBE0EF2L},{0x952F7C59L,0x8D84FCE9L,(-9L)},{1L,0xE385B539L,0xEEBE0EF2L},{(-5L),0x952F7C59L,0L}},{{0xF9D534F5L,1L,(-9L)},{(-5L),(-5L),4L},{1L,0xF9D534F5L,(-4L)},{0x952F7C59L,(-5L),4L},{0xE385B539L,1L,0xAC81C10BL}},{{0x8D84FCE9L,0x952F7C59L,4L},{(-10L),0xE385B539L,(-4L)},{1L,0x8D84FCE9L,4L},{(-10L),(-10L),(-9L)},{0x8D84FCE9L,1L,0L}},{{0xE385B539L,(-10L),0xEEBE0EF2L},{0x952F7C59L,0x8D84FCE9L,(-9L)},{1L,0xE385B539L,0xEEBE0EF2L},{(-5L),0x952F7C59L,0L},{0xF9D534F5L,1L,(-9L)}},{{(-5L),(-5L),4L},{1L,0xF9D534F5L,(-4L)},{0x952F7C59L,(-5L),4L},{0xE385B539L,1L,0xAC81C10BL},{0x8D84FCE9L,0x952F7C59L,4L}}};
            int8_t l_996[1];
            uint32_t l_1001[9][10][2] = {{{18446744073709551607UL,0xE7C00C6EL},{0x876FC62DL,0x65E5F9DDL},{0xE7C00C6EL,0x65E5F9DDL},{0x876FC62DL,0xE7C00C6EL},{18446744073709551607UL,18446744073709551607UL},{18446744073709551607UL,0xE7C00C6EL},{0x876FC62DL,18446744073709551607UL},{0x876FC62DL,18446744073709551607UL},{18446744073709551612UL,0x876FC62DL},{0xE7C00C6EL,0xE7C00C6EL}},{{0xE7C00C6EL,0x876FC62DL},{18446744073709551612UL,18446744073709551607UL},{0x876FC62DL,18446744073709551607UL},{18446744073709551612UL,0x876FC62DL},{0xE7C00C6EL,0xE7C00C6EL},{0xE7C00C6EL,0x876FC62DL},{18446744073709551612UL,18446744073709551607UL},{0x876FC62DL,18446744073709551607UL},{18446744073709551612UL,0x876FC62DL},{0xE7C00C6EL,0xE7C00C6EL}},{{0xE7C00C6EL,0x876FC62DL},{18446744073709551612UL,18446744073709551607UL},{0x876FC62DL,18446744073709551607UL},{18446744073709551612UL,0x876FC62DL},{0xE7C00C6EL,0xE7C00C6EL},{0xE7C00C6EL,0x876FC62DL},{18446744073709551612UL,18446744073709551607UL},{0x876FC62DL,18446744073709551607UL},{18446744073709551612UL,0x876FC62DL},{0xE7C00C6EL,0xE7C00C6EL}},{{0xE7C00C6EL,0x876FC62DL},{18446744073709551612UL,18446744073709551607UL},{0x876FC62DL,18446744073709551607UL},{18446744073709551612UL,0x876FC62DL},{0xE7C00C6EL,0xE7C00C6EL},{0xE7C00C6EL,0x876FC62DL},{18446744073709551612UL,18446744073709551607UL},{0x876FC62DL,18446744073709551607UL},{18446744073709551612UL,0x876FC62DL},{0xE7C00C6EL,0xE7C00C6EL}},{{0xE7C00C6EL,0x876FC62DL},{18446744073709551612UL,18446744073709551607UL},{0x876FC62DL,18446744073709551607UL},{18446744073709551612UL,0x876FC62DL},{0xE7C00C6EL,0xE7C00C6EL},{0xE7C00C6EL,0x876FC62DL},{18446744073709551612UL,18446744073709551607UL},{0x876FC62DL,18446744073709551607UL},{18446744073709551612UL,0x876FC62DL},{0xE7C00C6EL,0xE7C00C6EL}},{{0xE7C00C6EL,0x876FC62DL},{18446744073709551612UL,18446744073709551607UL},{0x876FC62DL,18446744073709551607UL},{18446744073709551612UL,0x876FC62DL},{0xE7C00C6EL,0xE7C00C6EL},{0xE7C00C6EL,0x876FC62DL},{18446744073709551612UL,18446744073709551607UL},{0x876FC62DL,18446744073709551607UL},{18446744073709551612UL,0x876FC62DL},{0xE7C00C6EL,0xE7C00C6EL}},{{0xE7C00C6EL,0x876FC62DL},{18446744073709551612UL,18446744073709551607UL},{0x876FC62DL,18446744073709551607UL},{18446744073709551612UL,0x876FC62DL},{0xE7C00C6EL,0xE7C00C6EL},{0xE7C00C6EL,0x876FC62DL},{18446744073709551612UL,18446744073709551607UL},{0x876FC62DL,18446744073709551607UL},{18446744073709551612UL,0x876FC62DL},{0xE7C00C6EL,0xE7C00C6EL}},{{0xE7C00C6EL,0x876FC62DL},{18446744073709551612UL,18446744073709551607UL},{0x876FC62DL,18446744073709551607UL},{18446744073709551612UL,0x876FC62DL},{0xE7C00C6EL,0xE7C00C6EL},{0xE7C00C6EL,0x876FC62DL},{18446744073709551612UL,18446744073709551607UL},{0x876FC62DL,18446744073709551607UL},{18446744073709551612UL,0x876FC62DL},{0xE7C00C6EL,0xE7C00C6EL}},{{0xE7C00C6EL,0x876FC62DL},{18446744073709551612UL,18446744073709551607UL},{0x876FC62DL,18446744073709551607UL},{18446744073709551612UL,0x876FC62DL},{0xE7C00C6EL,0xE7C00C6EL},{0xE7C00C6EL,0x876FC62DL},{18446744073709551612UL,18446744073709551607UL},{0x876FC62DL,18446744073709551607UL},{18446744073709551612UL,0x876FC62DL},{0xE7C00C6EL,0xE7C00C6EL}}};
            uint32_t l_1013 = 0xAEF5D1D4L;
            struct S0 *l_1035[9][3];
            int32_t *l_1036 = &l_970[5][3][0];
            int32_t *l_1037 = &l_972;
            int32_t *l_1038 = &l_970[5][0][1];
            int32_t *l_1039 = &l_975;
            int32_t *l_1040 = &l_604;
            int32_t *l_1041 = &l_973[8][0];
            int32_t *l_1042 = &l_968;
            int32_t *l_1043 = &l_973[8][0];
            int32_t *l_1044[3][4][1] = {{{&l_966},{&l_973[8][0]},{&l_999[5][0][6]},{&l_973[8][0]}},{{&l_966},{&l_970[5][1][2]},{&l_966},{&l_973[8][0]}},{{&l_999[5][0][6]},{&l_973[8][0]},{&l_966},{&l_970[5][1][2]}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_996[i] = (-5L);
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1035[i][j] = &l_603[0][0][8];
            }
        }
        return p_20;
    }
    (*l_574) = ((safe_rshift_func_uint16_t_u_u(0x0511L, 11)) != (((*g_274) ^ (g_702 = (((*l_574) == ((*l_574) != ((*l_800) = (0x68B2D792L < (*l_574))))) < (*g_274)))) > (safe_add_func_int16_t_s_s(((((safe_sub_func_int16_t_s_s(((*l_601) &= g_115[4].f2), (&g_432 == &g_129))) , 0xE55E6137L) && (**g_6)) || 0L), 0UL))));
    return (*g_1019);
}







static uint8_t func_23(const int32_t ** p_24, uint32_t p_25, int8_t p_26)
{
    (*g_27) = (void*)0;
    return p_25;
}







static uint32_t func_29(int32_t p_30, struct S1 p_31, int32_t p_32, int32_t ** p_33)
{
    uint16_t l_554 = 0x5E11L;
    int32_t **l_564 = (void*)0;
    int32_t ***l_563 = &l_564;
    uint64_t *l_565 = &g_566;
    uint32_t *l_567[6];
    int32_t l_568[7];
    const int32_t **l_569 = (void*)0;
    int32_t *l_572 = &g_5;
    int i;
    for (i = 0; i < 6; i++)
        l_567[i] = &g_11;
    for (i = 0; i < 7; i++)
        l_568[i] = (-1L);
    (*g_27) = (*p_33);
    (*l_572) |= (safe_mod_func_uint8_t_u_u((g_139[2][0][1] & g_34[2][4].f7), p_31.f0));
    return (*l_572);
}







static int32_t func_35(struct S0 p_36)
{
    uint8_t *l_431 = &g_432;
    int32_t l_433 = 0L;
    uint8_t l_436 = 0UL;
    uint32_t l_439 = 0xF24CEA0EL;
    uint64_t *l_440[6][8][3] = {{{&g_81,&g_243,&g_243},{&g_243,&g_81,&g_81},{&g_243,&g_243,&g_81},{&g_243,&g_81,&g_243},{&g_81,&g_81,&g_243},{(void*)0,(void*)0,&g_243},{(void*)0,&g_243,&g_243},{&g_243,&g_243,&g_243}},{{(void*)0,&g_243,&g_81},{&g_81,(void*)0,&g_81},{(void*)0,&g_81,(void*)0},{&g_243,&g_81,&g_81},{(void*)0,&g_243,&g_81},{(void*)0,&g_81,&g_243},{&g_81,&g_81,&g_243},{(void*)0,(void*)0,&g_243}},{{(void*)0,&g_243,&g_243},{&g_243,&g_243,&g_243},{(void*)0,&g_243,&g_81},{&g_81,(void*)0,&g_81},{(void*)0,&g_81,(void*)0},{&g_243,&g_81,&g_81},{(void*)0,&g_243,&g_81},{(void*)0,&g_81,&g_243}},{{&g_81,&g_81,&g_243},{(void*)0,(void*)0,&g_243},{(void*)0,&g_243,&g_243},{&g_243,&g_243,&g_243},{(void*)0,&g_243,&g_81},{&g_81,(void*)0,&g_81},{(void*)0,&g_81,(void*)0},{&g_243,&g_81,&g_81}},{{(void*)0,&g_243,&g_81},{(void*)0,&g_81,&g_243},{&g_81,&g_81,&g_243},{(void*)0,(void*)0,&g_243},{(void*)0,&g_243,&g_243},{&g_243,&g_243,&g_243},{(void*)0,&g_243,&g_81},{&g_81,(void*)0,&g_81}},{{(void*)0,&g_81,(void*)0},{&g_243,&g_81,&g_81},{(void*)0,&g_243,&g_81},{(void*)0,&g_81,&g_243},{&g_81,&g_81,&g_243},{(void*)0,(void*)0,&g_243},{(void*)0,&g_243,&g_243},{&g_243,&g_243,&g_243}}};
    uint32_t *l_443 = &g_43;
    uint32_t *l_445 = &g_247;
    union U2 l_451 = {0x70BAADAAL};
    uint64_t **l_504 = (void*)0;
    uint64_t ***l_503 = &l_504;
    uint8_t **l_510 = &l_431;
    uint8_t ***l_509 = &l_510;
    int i, j, k;
lbl_535:
    if ((((**g_6) & (safe_sub_func_uint16_t_u_u((((((*l_431) |= (++(*g_274))) != 0L) == l_433) , ((g_243 = (((((0x4602FF90DFD8FBAFLL && ((p_36.f0 , ((safe_lshift_func_int16_t_s_u(((l_436 & (((((safe_rshift_func_uint8_t_u_u((*g_274), 3)) < l_436) < (**g_27)) > p_36.f0) > p_36.f0)) <= l_439), 15)) < 0xFFD99FF9564F7A1FLL)) || l_433)) <= 0x53L) && 0L) <= l_433) | 1UL)) , l_433)), (-4L)))) || 0xA5CA2923B0886CC4LL))
    {
        uint32_t **l_444[1];
        int32_t *l_446 = &l_433;
        int i;
        for (i = 0; i < 1; i++)
            l_444[i] = &l_443;
        (*l_446) |= ((0L > ((safe_rshift_func_uint8_t_u_s(p_36.f0, (p_36.f1 , 0xA9L))) && ((l_443 = l_443) == l_445))) & p_36.f0);
    }
    else
    {
        uint32_t *l_456 = (void*)0;
        uint32_t **l_455 = &l_456;
        uint32_t ** const *l_454 = &l_455;
        uint32_t ***l_460[4] = {&l_455,&l_455,&l_455,&l_455};
        uint64_t *l_461[9][5][5] = {{{&g_243,&g_243,&g_243,&g_243,&g_81},{&g_243,&g_243,&g_243,&g_243,&g_243},{&g_81,&g_243,(void*)0,&g_243,&g_81},{&g_243,&g_243,(void*)0,&g_81,(void*)0},{&g_81,&g_81,&g_243,&g_81,(void*)0}},{{&g_243,(void*)0,&g_243,&g_81,&g_81},{&g_81,&g_243,&g_81,&g_81,&g_243},{&g_243,(void*)0,&g_243,&g_243,&g_243},{&g_243,&g_81,&g_81,&g_243,&g_81},{(void*)0,&g_243,&g_243,&g_243,(void*)0}},{{(void*)0,&g_243,&g_81,&g_243,&g_243},{&g_81,&g_243,&g_81,(void*)0,&g_81},{&g_81,&g_243,&g_81,&g_81,&g_243},{&g_243,&g_243,&g_243,&g_243,&g_81},{&g_243,&g_81,&g_243,&g_243,&g_243}},{{&g_81,&g_81,&g_81,&g_243,(void*)0},{&g_243,(void*)0,&g_81,&g_243,&g_243},{&g_243,&g_243,&g_243,&g_243,(void*)0},{&g_81,(void*)0,&g_243,&g_243,(void*)0},{&g_81,&g_81,&g_81,&g_81,&g_243}},{{&g_243,&g_81,&g_243,(void*)0,(void*)0},{&g_243,&g_243,&g_243,&g_243,&g_243},{&g_81,&g_243,&g_81,(void*)0,&g_81},{&g_81,&g_243,&g_81,&g_81,&g_243},{&g_243,&g_243,&g_243,&g_243,&g_81}},{{&g_243,&g_81,&g_243,&g_243,&g_243},{&g_81,&g_81,&g_81,&g_243,(void*)0},{&g_243,(void*)0,&g_81,&g_243,&g_243},{&g_243,&g_243,&g_243,&g_243,(void*)0},{&g_81,(void*)0,&g_243,&g_243,(void*)0}},{{&g_81,&g_81,&g_81,&g_81,&g_243},{&g_243,&g_81,&g_243,(void*)0,(void*)0},{&g_243,&g_243,&g_243,&g_243,&g_243},{&g_81,&g_243,&g_81,(void*)0,&g_81},{&g_81,&g_243,&g_81,&g_81,&g_243}},{{&g_243,&g_243,&g_243,&g_243,&g_81},{&g_243,&g_81,&g_243,&g_243,&g_243},{&g_81,&g_81,&g_81,&g_243,(void*)0},{&g_243,(void*)0,&g_81,&g_243,&g_243},{&g_243,&g_243,&g_243,&g_243,(void*)0}},{{&g_81,(void*)0,&g_243,&g_243,(void*)0},{&g_81,&g_81,&g_81,&g_81,&g_243},{&g_243,&g_81,&g_243,(void*)0,(void*)0},{&g_243,&g_243,&g_243,&g_243,&g_243},{&g_81,&g_243,&g_81,(void*)0,&g_81}}};
        struct S1 l_465 = {-5,-0,-61,310,342,1UL,0,36390,77,819};
        uint32_t **l_470 = &l_456;
        uint8_t **l_508[5];
        uint8_t ***l_507 = &l_508[3];
        uint64_t l_511 = 18446744073709551615UL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_508[i] = &l_431;
        for (g_200 = 20; (g_200 == (-29)); g_200--)
        {
            uint32_t ** const **l_457 = &l_454;
            uint32_t ***l_458 = (void*)0;
            uint32_t ****l_459[1];
            const int32_t **l_471 = &g_28[0];
            uint32_t *l_472[1][6][8];
            int32_t l_493 = 0L;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_459[i] = (void*)0;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 8; k++)
                        l_472[i][j][k] = &g_247;
                }
            }
            if ((safe_mul_func_uint8_t_u_u(0x0EL, (l_451 , (((-1L) <= (((((p_36.f0 >= l_451.f0) | p_36.f1) == (safe_add_func_uint8_t_u_u((((*l_457) = l_454) != (l_460[0] = l_458)), ((void*)0 == l_461[8][3][3])))) && g_43) || 0x981E5381458D9F5DLL)) | g_88)))))
            {
                uint32_t l_462 = 18446744073709551615UL;
                const int32_t **l_473 = &g_28[3];
                uint32_t *l_474[6] = {&l_439,&g_11,&g_11,&l_439,&g_11,&g_11};
                int32_t *l_475 = &g_139[1][0][1];
                int i;
                (*l_475) |= (((((l_462 ^ (p_36.f1 == (safe_add_func_uint8_t_u_u(l_462, 255UL)))) < ((&g_11 == (g_34[2][4].f2 , l_474[5])) == p_36.f1)) < (-8L)) <= 0L) >= 254UL);
            }
            else
            {
                uint64_t **l_480 = &l_440[4][3][2];
                int32_t l_492 = 0xC5DFC977L;
                l_493 |= (safe_mul_func_int8_t_s_s(p_36.f0, (p_36.f1 , (1UL != (safe_mul_func_uint16_t_u_u((((l_465.f2 |= (((*l_480) = l_440[5][5][0]) == (g_481 = &g_81))) && (*g_481)) || ((safe_mod_func_int8_t_s_s(((g_61 , g_484[1]) != ((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(0x5C95L, (**l_471))) | (*g_274)), 0x7FL)), (**l_471))) , (void*)0)), g_88)) <= l_465.f5)), l_492))))));
                for (g_117 = 26; (g_117 != 31); g_117++)
                {
                    int32_t *l_496 = &l_433;
                    uint64_t ***l_497 = &l_480;
                    (*l_496) ^= 1L;
                    (*l_497) = &l_461[6][3][3];
                }
                return p_36.f0;
            }
            l_433 ^= (l_511 = (safe_lshift_func_int16_t_s_u((~(safe_sub_func_int32_t_s_s(((void*)0 == l_503), 4294967295UL))), (((*g_481) = (p_36.f0 < g_43)) & (l_465.f7 && (p_36.f0 && ((((++g_211) && ((((&g_81 != &g_81) , l_507) == l_509) != p_36.f1)) , 0xD89F834C3C5C7514LL) != p_36.f1)))))));
        }
    }
    for (l_433 = (-17); (l_433 < 29); l_433++)
    {
        uint32_t *l_514[4][6] = {{(void*)0,&l_451.f0,&l_451.f0,(void*)0,&l_451.f0,&l_451.f0},{(void*)0,&l_451.f0,&l_451.f0,(void*)0,&l_451.f0,&l_451.f0},{(void*)0,&l_451.f0,&g_115[4].f0,&l_451.f0,&g_115[4].f0,&g_115[4].f0},{&l_451.f0,&g_115[4].f0,&g_115[4].f0,&l_451.f0,&g_115[4].f0,&g_115[4].f0}};
        int32_t *l_515 = &g_5;
        int8_t l_522 = 0xFAL;
        int16_t **l_523 = (void*)0;
        uint8_t *** const l_533 = (void*)0;
        int16_t *l_534 = &g_200;
        int32_t **l_536 = &l_515;
        int i, j;
        (*l_515) &= (l_514[3][5] == &l_439);
        (*l_515) = (safe_mul_func_uint8_t_u_u(0xE6L, (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(l_522, ((*l_534) |= ((((void*)0 == l_523) != 1UL) | ((safe_lshift_func_int8_t_s_u((((safe_mul_func_uint16_t_u_u((((((251UL < p_36.f0) || (safe_div_func_uint64_t_u_u(((g_530[0] != (((safe_lshift_func_int16_t_s_u((p_36.f0 ^ 5L), (*l_515))) == (*g_481)) , g_530[0])) && g_61.f1), g_138[2]))) == l_433) , l_533) == g_417), p_36.f1)) , (void*)0) == &l_443), 2)) , p_36.f0))))), l_451.f0))));
        if (l_522)
            goto lbl_535;
        (*g_27) = ((*l_536) = &l_433);
    }
    return p_36.f0;
}







static struct S0 func_37(int8_t p_38, const int32_t ** p_39, struct S0 p_40, uint32_t p_41)
{
    int16_t l_46 = 0x87A7L;
    int32_t **l_63[1];
    int32_t l_67 = 0L;
    uint32_t *l_202 = &g_43;
    uint8_t *l_271 = (void*)0;
    int32_t l_301 = (-8L);
    const int16_t l_363 = 0x3A79L;
    int32_t l_426 = 0L;
    int i;
    for (i = 0; i < 1; i++)
        l_63[i] = (void*)0;
    l_46 |= 8L;
    for (g_43 = (-17); (g_43 < 46); g_43 = safe_add_func_uint8_t_u_u(g_43, 4))
    {
        int8_t l_51 = 0x9CL;
        int32_t **l_62[5] = {&g_7,&g_7,&g_7,&g_7,&g_7};
        uint32_t *l_69[4][2][4] = {{{&g_43,&g_43,(void*)0,&g_43},{&g_43,&g_43,&g_43,&g_43}},{{&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,(void*)0,&g_43}},{{&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43}},{{&g_43,&g_43,(void*)0,&g_43},{&g_43,&g_43,&g_43,&g_43}}};
        struct S1 l_189[2] = {{-54,-0,-110,528,-286,250UL,2,6278,36,1341},{-54,-0,-110,528,-286,250UL,2,6278,36,1341}};
        const int32_t **l_201 = &g_28[1];
        int64_t l_209 = 0x4A1855612024B52CLL;
        int8_t l_210 = (-1L);
        int32_t ***l_234 = &l_63[0];
        uint64_t l_279[1];
        const struct S0 l_324 = {0x33625494L,0x68E305A3L};
        int16_t *l_329 = (void*)0;
        union U2 l_379 = {0x1BD2DCFCL};
        const uint32_t *l_424 = (void*)0;
        const uint32_t **l_423[8] = {(void*)0,&l_424,(void*)0,&l_424,(void*)0,&l_424,(void*)0,&l_424};
        const uint32_t ***l_425 = &l_423[3];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_279[i] = 0x2FCCFDA2B6227447LL;
    }
    g_139[2][0][5] = (l_426 && p_41);
    return p_40;
}







static int32_t func_49(uint32_t * const p_50)
{
    int8_t *l_148 = &g_65[8].f2;
    int32_t l_151 = (-9L);
    int32_t *l_156 = &g_5;
    int32_t *l_157 = &g_139[4][0][0];
    int32_t *l_158 = &g_139[4][0][0];
    int32_t l_159 = 0xAEE02A26L;
    int32_t *l_160 = (void*)0;
    int32_t *l_161 = &g_139[1][0][2];
    int32_t *l_162 = &g_5;
    int32_t *l_163 = &g_5;
    int32_t *l_164 = &g_139[4][0][0];
    int32_t *l_165[9][6][4] = {{{&l_151,&l_159,&g_5,&l_151},{&l_159,&l_151,&l_159,&l_151},{&l_159,(void*)0,&g_139[4][0][0],&l_151},{&l_159,&g_5,&g_5,&l_159},{&l_151,&g_5,&l_159,&l_151},{&g_139[4][0][2],(void*)0,&l_159,&l_151}},{{&l_151,&g_139[2][0][4],(void*)0,&g_139[2][0][4]},{&g_5,&l_151,&g_139[4][0][0],&l_151},{(void*)0,&l_151,&l_151,&g_139[4][0][0]},{(void*)0,&g_5,&g_5,&g_139[4][0][0]},{(void*)0,&g_139[4][0][0],&l_151,&l_151},{(void*)0,&g_139[4][0][0],&g_139[4][0][0],&g_5}},{{&g_5,&l_159,(void*)0,(void*)0},{&l_151,&g_139[4][0][2],&l_159,&l_151},{&g_139[4][0][2],&g_139[4][0][0],&l_159,&l_159},{&l_151,(void*)0,&g_5,&g_139[4][0][0]},{&l_159,&g_139[4][0][0],&g_139[4][0][0],&l_159},{&l_159,&l_151,&l_159,&l_159}},{{&l_159,(void*)0,&g_5,&g_139[2][0][4]},{&l_151,&l_151,&l_159,&g_139[2][0][4]},{&g_139[4][0][0],(void*)0,&g_139[4][0][0],&l_159},{&g_139[4][0][0],&l_151,&g_5,&l_159},{(void*)0,&g_139[4][0][0],&l_151,&g_139[4][0][0]},{&g_139[4][0][0],(void*)0,&l_151,&l_159}},{{&g_139[4][0][0],&g_139[4][0][0],&g_5,&l_151},{&g_5,&g_139[4][0][2],&l_159,(void*)0},{&l_159,&l_159,&l_159,&g_5},{&l_159,&g_139[4][0][0],&g_5,&l_151},{&l_151,&g_139[4][0][0],&g_139[4][0][0],&g_139[4][0][0]},{&g_139[4][0][0],&g_5,&g_139[4][0][0],&g_139[4][0][0]}},{{&l_151,&l_151,&g_5,&l_151},{&l_159,&l_151,&l_159,&g_139[2][0][4]},{&l_159,&g_139[2][0][4],&l_159,&l_151},{&g_5,(void*)0,&g_139[2][0][4],&l_151},{&l_159,&l_159,&l_159,&g_139[4][0][0]},{&g_5,&g_139[4][0][0],&g_5,&g_5}},{{&l_151,&l_151,&l_159,&g_5},{&l_159,&g_5,&g_5,&l_151},{&l_159,&l_159,&g_5,&g_5},{&l_151,&l_159,&g_139[4][0][0],&l_151},{&l_159,&g_5,(void*)0,&g_5},{&g_5,&l_151,&l_159,&g_5}},{{&g_139[4][0][0],&g_139[4][0][0],&l_159,&g_139[4][0][0]},{&g_5,&l_159,(void*)0,&l_151},{&g_5,&l_159,&g_5,&l_159},{&l_151,&g_139[4][0][2],&g_139[4][0][0],&g_139[4][0][2]},{&g_139[4][0][0],&g_5,&g_5,&l_151},{&g_5,&l_151,&l_159,&g_5}},{{&l_151,&g_139[4][0][0],&g_5,&g_139[4][0][0]},{&l_151,&g_5,&l_159,&g_5},{&g_5,&g_139[4][0][0],&g_5,&l_159},{&g_139[4][0][0],&l_159,&g_139[4][0][0],&l_151},{&l_151,&g_5,&g_5,&l_151},{&g_5,&g_139[4][0][0],(void*)0,&g_5}}};
    int32_t l_166 = 0L;
    uint64_t l_167 = 0xD684D458F628736ELL;
    int16_t l_170 = 0x0654L;
    int i, j, k;
    for (g_5 = 0; (g_5 <= 3); g_5 += 1)
    {
        return (**g_27);
    }
    (*l_156) &= (safe_sub_func_uint8_t_u_u((((l_148 == (((safe_mod_func_uint64_t_u_u(l_151, ((l_151 <= l_151) , g_138[6]))) != (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(255UL, 1)), 0x972B2CC4L))) , (void*)0)) != l_151) , 0x3CL), l_151));
    ++l_167;
    return l_170;
}







static uint32_t * const func_52(int32_t p_53, int8_t p_54, const int32_t ** p_55, uint32_t * p_56, uint32_t * p_57)
{
    uint64_t *l_79 = (void*)0;
    uint64_t *l_80 = &g_81;
    int32_t l_86 = 1L;
    int64_t *l_87 = &g_88;
    int32_t *l_93 = &g_5;
    struct S1 l_103 = {-142,0,-58,98,-74,0x7EL,0,8592,109,699};
    uint16_t *l_106 = (void*)0;
    uint16_t *l_107 = &g_65[8].f1;
    union U2 *l_114 = &g_115[4];
    uint32_t *l_116 = &g_117;
    int32_t *l_118 = &l_86;
    int32_t l_119 = 0x4B6A6B6AL;
    uint32_t l_140 = 0x8532EA63L;
    (*l_93) &= (safe_rshift_func_uint8_t_u_s((((safe_add_func_int32_t_s_s((+g_3), (safe_rshift_func_uint16_t_u_s((((safe_mod_func_uint8_t_u_u((((++(*l_80)) < ((safe_sub_func_int64_t_s_s(((*l_87) = l_86), ((safe_sub_func_uint64_t_u_u(0x4B48400EC8613E18LL, l_86)) > p_54))) <= ((void*)0 != p_57))) , 249UL), (safe_mul_func_uint16_t_u_u((0x099732ED884ACF1ALL != g_34[2][4].f3), p_54)))) ^ 1UL) > (*g_7)), l_86)))) , g_34[2][4].f7) | p_54), 0));
    l_119 ^= ((*l_118) = (safe_mul_func_int16_t_s_s(((*l_93) = ((safe_add_func_int16_t_s_s((0xDBL && p_54), 0xBB17L)) != (((*l_116) &= ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((p_54 , g_34[2][4].f1) == ((+(l_103 , ((safe_mod_func_int16_t_s_s((*l_93), ((*l_107)--))) <= (safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((0x6167B9C7346DDCF8LL != (l_114 != l_114)), (-1L))), 0x889C386FL))))) != (**p_55))), (*l_93))), 0UL)) >= (*l_93))) , 0x35B49D7A73C59DB3LL))), p_53)));
    for (l_103.f5 = 0; (l_103.f5 != 17); ++l_103.f5)
    {
        uint16_t l_122[4][3] = {{5UL,5UL,0xA7A3L},{5UL,5UL,0xA7A3L},{5UL,5UL,0xA7A3L},{5UL,5UL,0xA7A3L}};
        uint8_t *l_123 = (void*)0;
        union U2 *l_124 = &g_115[4];
        int8_t *l_125 = &g_115[4].f2;
        uint8_t *l_128 = &g_129;
        int32_t l_130 = 0L;
        int32_t *l_131 = &l_130;
        int32_t *l_132 = &g_5;
        int32_t *l_133 = &l_130;
        int32_t *l_134 = &l_86;
        int32_t *l_135 = &l_86;
        int32_t *l_136 = (void*)0;
        int32_t *l_137[6];
        uint16_t l_143[9][5] = {{0xAAA1L,65534UL,65532UL,0UL,1UL},{5UL,0x6D99L,0xAD99L,0xCC57L,0x352AL},{0UL,65531UL,65532UL,1UL,65532UL},{65535UL,65535UL,0xAAA1L,65534UL,65532UL},{0UL,0x7D80L,0x6D99L,0x2114L,0x352AL},{65534UL,0x2114L,65535UL,0x88FFL,1UL},{0x88FFL,0x7D80L,5UL,5UL,0x7D80L},{0x352AL,65535UL,0xCC57L,5UL,65531UL},{0xAD99L,65531UL,1UL,0x88FFL,0x2114L}};
        int i, j;
        for (i = 0; i < 6; i++)
            l_137[i] = &g_5;
        (*l_93) = (((*l_118) = (((*g_66) , (*l_93)) , l_122[2][2])) < ((*l_128) = (((*l_125) |= (&g_65[6] != l_124)) != (g_3 == 0UL))));
        l_140++;
        if ((**p_55))
            break;
        ++l_143[1][1];
    }
    return &g_117;
}







static int32_t func_58(int32_t ** p_59, struct S0 p_60)
{
    union U2 *l_64 = &g_65[8];
    g_66 = l_64;
    return (**p_59);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_34[i][j].f0, "g_34[i][j].f0", print_hash_value);
            transparent_crc(g_34[i][j].f1, "g_34[i][j].f1", print_hash_value);
            transparent_crc(g_34[i][j].f2, "g_34[i][j].f2", print_hash_value);
            transparent_crc(g_34[i][j].f3, "g_34[i][j].f3", print_hash_value);
            transparent_crc(g_34[i][j].f4, "g_34[i][j].f4", print_hash_value);
            transparent_crc(g_34[i][j].f5, "g_34[i][j].f5", print_hash_value);
            transparent_crc(g_34[i][j].f6, "g_34[i][j].f6", print_hash_value);
            transparent_crc(g_34[i][j].f7, "g_34[i][j].f7", print_hash_value);
            transparent_crc(g_34[i][j].f8, "g_34[i][j].f8", print_hash_value);
            transparent_crc(g_34[i][j].f9, "g_34[i][j].f9", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_61.f0, "g_61.f0", print_hash_value);
    transparent_crc(g_61.f1, "g_61.f1", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_65[i].f0, "g_65[i].f0", print_hash_value);
        transparent_crc(g_65[i].f1, "g_65[i].f1", print_hash_value);
        transparent_crc(g_65[i].f2, "g_65[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_115[i].f0, "g_115[i].f0", print_hash_value);
        transparent_crc(g_115[i].f1, "g_115[i].f1", print_hash_value);
        transparent_crc(g_115[i].f2, "g_115[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_138[i], "g_138[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_139[i][j][k], "g_139[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_220[i][j], "g_220[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_710[i], "g_710[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_745, "g_745", print_hash_value);
    transparent_crc(g_964, "g_964", print_hash_value);
    transparent_crc(g_971, "g_971", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1020[i][j][k].f0, "g_1020[i][j][k].f0", print_hash_value);
                transparent_crc(g_1020[i][j][k].f1, "g_1020[i][j][k].f1", print_hash_value);
                transparent_crc(g_1020[i][j][k].f2, "g_1020[i][j][k].f2", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1139.f0, "g_1139.f0", print_hash_value);
    transparent_crc(g_1139.f1, "g_1139.f1", print_hash_value);
    transparent_crc(g_1139.f2, "g_1139.f2", print_hash_value);
    transparent_crc(g_1139.f3, "g_1139.f3", print_hash_value);
    transparent_crc(g_1139.f4, "g_1139.f4", print_hash_value);
    transparent_crc(g_1139.f5, "g_1139.f5", print_hash_value);
    transparent_crc(g_1139.f6, "g_1139.f6", print_hash_value);
    transparent_crc(g_1139.f7, "g_1139.f7", print_hash_value);
    transparent_crc(g_1139.f8, "g_1139.f8", print_hash_value);
    transparent_crc(g_1139.f9, "g_1139.f9", print_hash_value);
    transparent_crc(g_1262, "g_1262", print_hash_value);
    transparent_crc(g_1379, "g_1379", print_hash_value);
    transparent_crc(g_1433, "g_1433", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1469[i], "g_1469[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1510.f0, "g_1510.f0", print_hash_value);
    transparent_crc(g_1510.f1, "g_1510.f1", print_hash_value);
    transparent_crc(g_1510.f2, "g_1510.f2", print_hash_value);
    transparent_crc(g_1510.f3, "g_1510.f3", print_hash_value);
    transparent_crc(g_1510.f4, "g_1510.f4", print_hash_value);
    transparent_crc(g_1510.f5, "g_1510.f5", print_hash_value);
    transparent_crc(g_1510.f6, "g_1510.f6", print_hash_value);
    transparent_crc(g_1510.f7, "g_1510.f7", print_hash_value);
    transparent_crc(g_1510.f8, "g_1510.f8", print_hash_value);
    transparent_crc(g_1510.f9, "g_1510.f9", print_hash_value);
    transparent_crc(g_1582, "g_1582", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1630[i][j].f0, "g_1630[i][j].f0", print_hash_value);
            transparent_crc(g_1630[i][j].f1, "g_1630[i][j].f1", print_hash_value);
            transparent_crc(g_1630[i][j].f2, "g_1630[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1635[i][j], "g_1635[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1648, "g_1648", print_hash_value);
    transparent_crc(g_1729, "g_1729", print_hash_value);
    transparent_crc(g_1771, "g_1771", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
