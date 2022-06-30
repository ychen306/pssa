// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 9E1FE777
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
   const signed f0 : 14;
};

union U1 {
   int64_t f0;
   uint32_t f1;
};


static int32_t g_3 = (-6L);
static int32_t *g_2 = &g_3;
static int32_t g_25 = (-1L);
static int32_t g_53 = 1L;
static uint16_t g_59 = 0xD230L;
static int16_t g_84 = 0xD9F0L;
static union U1 g_87 = {0x56F6324B7C80BFD7LL};
static int32_t *g_100 = &g_53;
static uint32_t g_110 = 1UL;
static uint32_t g_114 = 0UL;
static int8_t g_117 = 0L;
static uint64_t g_118 = 0UL;
static uint16_t g_131 = 65534UL;
static int16_t g_164 = 0xB385L;
static int64_t g_211 = (-7L);
static int32_t *g_212[9][2][8] = {{{&g_53,&g_25,&g_3,&g_3,&g_25,&g_53,&g_3,&g_53},{&g_53,&g_3,&g_3,&g_53,&g_53,&g_3,&g_25,&g_3}},{{&g_53,&g_53,&g_3,&g_53,&g_53,&g_3,&g_53,&g_53},{(void*)0,&g_53,&g_53,&g_3,&g_53,(void*)0,(void*)0,&g_53}},{{&g_53,&g_53,&g_53,&g_53,&g_3,&g_3,&g_53,&g_53},{&g_53,&g_25,&g_3,&g_53,&g_25,&g_3,(void*)0,&g_3}},{{&g_3,(void*)0,&g_3,&g_53,&g_3,&g_3,&g_3,&g_3},{&g_53,&g_53,(void*)0,&g_3,&g_3,&g_3,&g_3,(void*)0}},{{&g_53,&g_53,&g_53,&g_3,&g_3,&g_53,&g_53,&g_3},{&g_3,&g_3,&g_53,&g_3,(void*)0,&g_3,&g_53,&g_3}},{{&g_3,&g_3,(void*)0,&g_3,&g_3,&g_53,(void*)0,(void*)0},{&g_3,(void*)0,&g_53,&g_3,&g_3,&g_53,(void*)0,&g_3}},{{&g_3,&g_3,(void*)0,&g_53,&g_53,&g_3,&g_53,&g_3},{&g_53,&g_3,&g_53,&g_3,&g_53,&g_3,&g_53,&g_53}},{{&g_3,&g_3,&g_53,&g_3,(void*)0,&g_53,&g_3,&g_3},{&g_53,(void*)0,(void*)0,(void*)0,(void*)0,&g_53,&g_3,&g_3}},{{&g_3,&g_3,&g_3,&g_3,&g_53,&g_3,(void*)0,&g_3},{&g_53,&g_3,&g_25,&g_3,&g_53,&g_53,&g_3,&g_3}}};
static uint8_t *g_217 = (void*)0;
static union U0 g_226 = {0xFD3FBD4DL};
static int32_t **g_231 = (void*)0;
static int32_t ***g_230 = &g_231;
static int32_t g_333[6] = {9L,9L,9L,9L,9L,9L};
static uint8_t g_362[2][6][2] = {{{0xF3L,0x4DL},{0x0AL,0x65L},{0xEEL,0xF3L},{255UL,0xEEL},{3UL,0x4AL},{3UL,0xEEL}},{{255UL,0xF3L},{0xEEL,0x65L},{0x0AL,0x4DL},{0xF3L,0xA4L},{0xA4L,0xA4L},{0xF3L,0x4DL}}};
static uint8_t g_363 = 249UL;
static uint64_t g_368 = 0xE5E47515C299F0A3LL;
static int32_t g_394 = 0x96E4FF2EL;
static uint64_t *g_422 = &g_118;
static uint64_t **g_421 = &g_422;
static uint64_t ** const *g_420[8][9] = {{&g_421,&g_421,(void*)0,&g_421,&g_421,(void*)0,&g_421,&g_421,(void*)0},{&g_421,&g_421,&g_421,&g_421,&g_421,&g_421,&g_421,&g_421,&g_421},{&g_421,&g_421,&g_421,&g_421,&g_421,&g_421,&g_421,&g_421,&g_421},{&g_421,&g_421,&g_421,&g_421,&g_421,&g_421,&g_421,&g_421,(void*)0},{&g_421,&g_421,&g_421,(void*)0,&g_421,&g_421,(void*)0,&g_421,&g_421},{&g_421,&g_421,&g_421,(void*)0,&g_421,&g_421,&g_421,&g_421,&g_421},{(void*)0,&g_421,&g_421,&g_421,&g_421,(void*)0,&g_421,(void*)0,&g_421},{&g_421,&g_421,&g_421,&g_421,&g_421,&g_421,(void*)0,&g_421,&g_421}};
static uint64_t ***g_458 = (void*)0;
static uint64_t ****g_457 = &g_458;
static uint64_t *****g_456 = &g_457;
static const int32_t *g_482 = &g_394;
static uint32_t g_633 = 1UL;
static int64_t g_650 = 1L;
static int32_t **g_655 = (void*)0;
static int64_t *g_727 = (void*)0;
static int64_t **g_726 = &g_727;
static int32_t g_767 = 0xD75FC305L;
static int16_t g_770[7] = {(-9L),0L,(-9L),(-9L),0L,(-9L),(-9L)};
static uint8_t g_771 = 0xCAL;
static uint16_t *g_779 = &g_131;
static uint16_t **g_778 = &g_779;
static uint16_t ***g_777 = &g_778;
static uint32_t * const g_814 = &g_87.f1;
static uint32_t * const *g_813 = &g_814;
static union U0 **g_1027[3] = {(void*)0,(void*)0,(void*)0};
static uint8_t g_1028 = 1UL;
static const uint16_t g_1055 = 0x1F82L;
static const union U1 g_1064 = {0xCCC3BD18494A1231LL};
static const union U1 *g_1065[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int8_t g_1193 = (-1L);
static uint16_t g_1200[6] = {0x5EA3L,0xE45BL,0xE45BL,0x5EA3L,0xE45BL,0xE45BL};
static const uint8_t g_1235 = 0x35L;
static uint64_t g_1241 = 0UL;
static union U1 ***g_1259 = (void*)0;
static int16_t g_1313 = 0xBA24L;
static const uint16_t **g_1328 = (void*)0;
static const uint16_t ***g_1327 = &g_1328;
static const uint16_t ****g_1326 = &g_1327;
static int8_t *g_1367 = (void*)0;
static int16_t g_1485 = (-1L);
static int64_t g_1488 = (-5L);
static int64_t ***g_1621[8][9][3] = {{{&g_726,&g_726,&g_726},{(void*)0,&g_726,&g_726},{&g_726,&g_726,&g_726},{(void*)0,&g_726,&g_726},{(void*)0,&g_726,&g_726},{&g_726,&g_726,(void*)0},{&g_726,&g_726,&g_726},{&g_726,&g_726,(void*)0},{&g_726,&g_726,&g_726}},{{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{&g_726,&g_726,(void*)0},{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{(void*)0,&g_726,&g_726},{&g_726,&g_726,&g_726}},{{&g_726,&g_726,&g_726},{&g_726,&g_726,(void*)0},{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{(void*)0,&g_726,&g_726},{&g_726,&g_726,&g_726}},{{&g_726,&g_726,&g_726},{(void*)0,&g_726,&g_726},{&g_726,&g_726,&g_726},{(void*)0,&g_726,&g_726},{(void*)0,&g_726,&g_726},{&g_726,&g_726,(void*)0},{&g_726,&g_726,&g_726},{&g_726,&g_726,(void*)0},{&g_726,&g_726,&g_726}},{{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{&g_726,&g_726,(void*)0},{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{(void*)0,&g_726,&g_726},{&g_726,&g_726,&g_726}},{{&g_726,&g_726,&g_726},{&g_726,&g_726,(void*)0},{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{(void*)0,&g_726,&g_726},{(void*)0,(void*)0,&g_726}},{{&g_726,&g_726,&g_726},{&g_726,&g_726,(void*)0},{(void*)0,&g_726,&g_726},{&g_726,(void*)0,&g_726},{&g_726,&g_726,&g_726},{(void*)0,&g_726,&g_726},{&g_726,&g_726,(void*)0},{&g_726,&g_726,&g_726},{&g_726,(void*)0,(void*)0}},{{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{&g_726,(void*)0,&g_726},{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{&g_726,&g_726,&g_726},{&g_726,&g_726,(void*)0},{&g_726,(void*)0,&g_726}}};
static union U1 *g_1678 = &g_87;
static int16_t g_1717 = 0x1706L;
static uint64_t g_1775 = 4UL;
static uint16_t g_1780 = 0UL;
static uint32_t *g_1802 = &g_114;
static uint32_t g_1934 = 18446744073709551615UL;
static int8_t **g_1967 = &g_1367;
static uint32_t **g_2036 = (void*)0;
static uint32_t ***g_2125 = &g_2036;
static int32_t ***g_2229 = (void*)0;
static uint8_t ** const g_2304[4][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
static uint8_t ** const *g_2303 = &g_2304[3][0];
static uint32_t g_2385 = 0x5CCF2D51L;
static int32_t g_2475[1][7] = {{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)}};
static int64_t ****g_2527 = &g_1621[4][6][0];
static int64_t *****g_2526 = &g_2527;
static const int8_t g_2559[9] = {0x92L,0x92L,0x92L,0x92L,0x92L,0x92L,0x92L,0x92L,0x92L};
static int64_t g_2564 = 0L;
static uint32_t *** const *g_2761 = (void*)0;
static uint32_t *** const **g_2760 = &g_2761;
static int32_t *****g_2791 = (void*)0;
static uint8_t g_2802 = 0x33L;
static union U1 * const **g_2898 = (void*)0;
static union U1 * const ***g_2897[4] = {&g_2898,&g_2898,&g_2898,&g_2898};
static union U1 ****g_2903[2][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259}};
static uint16_t *g_3109 = (void*)0;
static uint16_t *g_3110 = &g_1200[1];
static uint16_t *g_3111 = (void*)0;
static uint16_t ** const g_3108[9] = {&g_3109,&g_3109,&g_3110,&g_3109,&g_3109,&g_3110,&g_3109,&g_3109,&g_3110};
static uint16_t ** const *g_3107 = &g_3108[7];
static uint16_t ** const **g_3106 = &g_3107;
static uint16_t ** const ***g_3105 = &g_3106;
static uint32_t g_3209 = 4294967295UL;
static union U0 g_3229 = {0xA9BD0B36L};
static union U0 g_3231 = {1L};
static int64_t g_3368 = 0x4832027EA68F9276LL;
static uint64_t g_3449 = 0UL;
static int32_t *g_3471 = (void*)0;
static int32_t **g_3470 = &g_3471;
static uint16_t g_3514[7] = {0x90ABL,0x90ABL,0x3DF9L,0x90ABL,0x90ABL,0x3DF9L,0x90ABL};



static uint32_t func_1(void);
static int32_t ** func_5(int32_t * p_6, uint64_t p_7, uint32_t p_8, int32_t * p_9, int32_t * p_10);
static uint16_t func_13(uint32_t p_14, int32_t p_15);
static int32_t ** func_17(uint64_t p_18, uint32_t p_19, const uint32_t p_20, uint8_t p_21);
static int8_t func_29(int8_t p_30);
static int32_t * func_35(uint32_t p_36, uint32_t p_37, uint16_t p_38, const uint32_t p_39);
static const int8_t func_45(int32_t * p_46, int32_t p_47, int32_t * p_48);
static int8_t func_64(int32_t * p_65);
static int32_t * func_66(union U0 p_67, int32_t * p_68, int16_t p_69, union U0 p_70);
static int32_t * func_72(int64_t p_73, uint32_t p_74, int16_t p_75, const int32_t ** p_76, int32_t p_77);
# 150 "<stdin>"
static uint32_t func_1(void)
{
    int32_t **l_4 = &g_2;
    union U0 l_16 = {0x0C4307E4L};
    int64_t *l_3271 = &g_211;
    int8_t l_3272 = 0x28L;
    union U1 *****l_3285 = &g_2903[0][6];
    int32_t l_3289 = 0x58143CDAL;
    int64_t l_3306 = 0x7069AC46359E3627LL;
    int32_t l_3328 = 0xAACAE63DL;
    int32_t l_3329[10][2] = {{(-9L),(-1L)},{0L,0L},{0x8D040810L,0L},{0L,(-1L)},{(-9L),(-4L)},{0x8D040810L,(-9L)},{(-4L),(-1L)},{(-4L),(-9L)},{0x8D040810L,(-4L)},{(-9L),(-1L)}};
    uint16_t l_3330[7][3] = {{0xDF4DL,0xDF4DL,65527UL},{0xBF40L,0UL,65527UL},{0UL,0xBF40L,65527UL},{0xDF4DL,0xDF4DL,65527UL},{0xBF40L,0UL,65527UL},{0UL,0xBF40L,65527UL},{0xDF4DL,0xDF4DL,65527UL}};
    int32_t l_3387 = 0x9DFD1BF8L;
    uint16_t l_3412 = 65528UL;
    int32_t *l_3467 = (void*)0;
    int32_t **l_3466 = &l_3467;
    int i, j;
    (*l_4) = g_2;
    (*g_230) = func_5(&g_3, ((safe_lshift_func_uint8_t_u_u(g_3, ((**l_4) ^ func_13((((l_16 , 0x0611BC383C67EE39LL) ^ ((((g_3 > ((void*)0 == l_4)) , func_17((0x28L > 1UL), g_3, g_3, (**l_4))) != (void*)0) <= 0UL)) < (**l_4)), (**l_4))))) == g_3209), (**l_4), (*l_4), (*l_4));
    if ((0x3F6D2B2EL >= (safe_mod_func_int16_t_s_s((l_3271 != ((*g_726) = (*g_726))), l_3272))))
    {
        int32_t *l_3273 = &g_25;
        (*l_4) = l_3273;
    }
    else
    {
        uint32_t l_3282[9] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        union U1 * const ****l_3284 = &g_2897[1];
        int32_t *l_3286 = &g_333[5];
        int8_t *l_3287[2][5][2] = {{{&g_117,&g_117},{&g_117,&g_117},{&g_117,&l_3272},{&g_117,&l_3272},{&g_117,&g_117}},{{&g_117,&g_117},{&g_117,&g_117},{&g_117,&l_3272},{&g_117,&l_3272},{&g_117,&g_117}}};
        uint8_t l_3288 = 0x3DL;
        int32_t l_3290 = 1L;
        uint32_t ***l_3305 = &g_2036;
        const int32_t **l_3313 = &g_482;
        int32_t *l_3314[3][5][9] = {{{&l_3289,(void*)0,&l_3289,&g_3,&g_3,(void*)0,&g_3,&g_3,&l_3289},{&l_3289,&l_3289,&g_25,&l_3289,&g_3,&l_3289,&g_25,&l_3289,&l_3289},{&l_3289,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_3289,(void*)0,&l_3289},{&l_3289,&g_3,&g_25,&g_3,&l_3289,(void*)0,(void*)0,&l_3289,&g_3},{&l_3289,&l_3290,&l_3289,&g_53,&g_3,&g_25,&l_3289,(void*)0,(void*)0}},{{&l_3289,(void*)0,(void*)0,&g_25,&g_25,(void*)0,(void*)0,&l_3289,(void*)0},{&l_3289,(void*)0,&l_3289,&g_53,&g_394,(void*)0,&g_3,(void*)0,&g_394},{&g_3,(void*)0,(void*)0,&g_3,&l_3289,&l_3289,&l_3289,&g_3,(void*)0},{(void*)0,&l_3290,&g_3,(void*)0,&l_3289,(void*)0,&g_3,&l_3290,(void*)0},{(void*)0,&g_3,&l_3289,&l_3289,&l_3289,&g_3,(void*)0,(void*)0,&g_3}},{{&g_394,(void*)0,&g_3,(void*)0,&g_394,&g_53,&l_3289,(void*)0,&l_3289},{(void*)0,&l_3289,(void*)0,(void*)0,&g_25,&g_25,(void*)0,(void*)0,&l_3289},{(void*)0,(void*)0,&l_3289,&g_25,&g_3,&g_53,&l_3289,&l_3290,&l_3289},{&g_3,&l_3289,(void*)0,(void*)0,&l_3289,&g_3,&g_25,&g_3,&l_3289},{&l_3289,(void*)0,&l_3289,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_3289}}};
        uint16_t l_3321 = 0UL;
        union U0 l_3350 = {0xD4EC2630L};
        uint8_t *l_3358 = &g_1028;
        uint64_t ***** const l_3371 = &g_457;
        int32_t l_3372 = 0x35E25172L;
        uint32_t l_3373 = 0x820F785AL;
        uint64_t l_3383 = 0x22EE8B9338E0DD39LL;
        int32_t l_3386 = 0x5F6AD61FL;
        int64_t l_3388[3][7][8] = {{{0xE2E4ECDD14D3C0ECLL,(-10L),7L,1L,1L,(-1L),(-1L),1L},{0x7A8086E9C556758ALL,1L,0xE48758E2CE6F4A89LL,0xF2B1921B8CC8C6E8LL,(-3L),0xCE3C1706F1EB5902LL,0L,0x7A8086E9C556758ALL},{1L,0xD7E73A90A7961FB3LL,0xE2E4ECDD14D3C0ECLL,0x00B48A6DB6EECC13LL,0xE2E4ECDD14D3C0ECLL,0xD7E73A90A7961FB3LL,1L,4L},{1L,(-1L),0x98940C98823C818BLL,0xCE3C1706F1EB5902LL,(-7L),0x12BDD25B5F4C8FA5LL,7L,0x758B37CFC62558D1LL},{0x81EB9473877191EBLL,0xB08CB39FB0546D3BLL,(-1L),0x208582502D502FD6LL,(-7L),0x1077DE22AA74F33BLL,0xCE3C1706F1EB5902LL,0x00B48A6DB6EECC13LL},{1L,(-1L),(-8L),0x758B37CFC62558D1LL,0xE2E4ECDD14D3C0ECLL,0x81EB9473877191EBLL,0L,0xB08CB39FB0546D3BLL},{1L,0L,4L,0xE48758E2CE6F4A89LL,(-3L),1L,0x1077DE22AA74F33BLL,0x6D15D8C63E0CADB2LL}},{{0x7A8086E9C556758ALL,0L,0x8B1580609AECA0E7LL,(-7L),1L,0x0327DE58ADC648D5LL,1L,0xDEC8C522C6BEA531LL},{0xE2E4ECDD14D3C0ECLL,0x00B48A6DB6EECC13LL,0x8B1580609AECA0E7LL,1L,1L,0x8B1580609AECA0E7LL,0x00B48A6DB6EECC13LL,0x9716E49BE8930C41LL},{0x00B48A6DB6EECC13LL,(-8L),0x9716E49BE8930C41LL,(-8L),1L,(-1L),1L,0xD3909358CEE51108LL},{1L,0x98940C98823C818BLL,(-3L),0x8B1580609AECA0E7LL,(-8L),(-1L),0xE2E4ECDD14D3C0ECLL,0L},{0xEDFAE50FBB69583BLL,(-8L),0x7A8086E9C556758ALL,0x6D15D8C63E0CADB2LL,0x98940C98823C818BLL,0x8B1580609AECA0E7LL,0xB5DD39121B2A9596LL,0x1077DE22AA74F33BLL},{0L,0x00B48A6DB6EECC13LL,0x81EB9473877191EBLL,1L,0x5BDDC79AC6D91FCCLL,0xCE3C1706F1EB5902LL,0x200824FB22D66EE9LL,(-8L)},{0x81EB9473877191EBLL,0x200824FB22D66EE9LL,0x00B48A6DB6EECC13LL,0xF2B1921B8CC8C6E8LL,(-10L),0x7A8086E9C556758ALL,1L,(-1L)}},{{0xFEFA9877F99C3573LL,0x5BDDC79AC6D91FCCLL,0L,0xEDFAE50FBB69583BLL,0x6A66F96176C4333FLL,0xEDFAE50FBB69583BLL,0L,0x5BDDC79AC6D91FCCLL},{0L,(-7L),0xF2B1921B8CC8C6E8LL,1L,0xE2E4ECDD14D3C0ECLL,7L,0x0327DE58ADC648D5LL,0L},{(-7L),0x6D15D8C63E0CADB2LL,0x9716E49BE8930C41LL,0x98940C98823C818BLL,0L,(-8L),0x0327DE58ADC648D5LL,1L},{(-8L),0x98940C98823C818BLL,0xF2B1921B8CC8C6E8LL,7L,0xEDFAE50FBB69583BLL,1L,0L,4L},{0xEDFAE50FBB69583BLL,1L,0L,4L,0xE48758E2CE6F4A89LL,(-3L),1L,0x1077DE22AA74F33BLL},{(-1L),(-1L),0x00B48A6DB6EECC13LL,1L,1L,0x98940C98823C818BLL,0x200824FB22D66EE9LL,1L},{1L,0L,0x81EB9473877191EBLL,0xB5DD39121B2A9596LL,0x7A8086E9C556758ALL,0x7A8086E9C556758ALL,0xB5DD39121B2A9596LL,0x81EB9473877191EBLL}}};
        uint32_t l_3491 = 18446744073709551615UL;
        int64_t l_3511[9] = {0x4205482A9D047CB8LL,0x4205482A9D047CB8LL,0x4205482A9D047CB8LL,0x4205482A9D047CB8LL,0x4205482A9D047CB8LL,0x4205482A9D047CB8LL,0x4205482A9D047CB8LL,0x4205482A9D047CB8LL,0x4205482A9D047CB8LL};
        uint8_t l_3515 = 1UL;
        int32_t *l_3529 = &g_394;
        uint32_t l_3536 = 0xEE8937CDL;
        int i, j, k;
        if ((l_3289 = (safe_mul_func_int8_t_s_s((((**g_813) = (*g_1802)) & (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((*g_3110) = (0x4331L != (safe_sub_func_int8_t_s_s((l_3282[7] , (safe_unary_minus_func_int16_t_s((((l_3282[6] && ((l_3284 = &g_2897[1]) == l_3285)) && 0UL) , ((((*l_3286) = l_3282[8]) , ((l_3288 ^= 0xD7L) | l_3282[0])) < (-1L)))))), l_3272)))), l_3282[7])), 65535UL))), g_3))))
        {
            uint32_t l_3297 = 3UL;
            union U1 *****l_3304 = &g_2903[0][4];
            int32_t l_3307[10][1] = {{0x0F6C5131L},{0x27F5510BL},{0x0F6C5131L},{0x27F5510BL},{0x0F6C5131L},{0x27F5510BL},{0x0F6C5131L},{0x27F5510BL},{0x0F6C5131L},{0x27F5510BL}};
            int8_t l_3312 = (-1L);
            int i, j;
            for (g_25 = 5; (g_25 >= 0); g_25 -= 1)
            {
                uint8_t l_3293 = 0x72L;
                int16_t *l_3309 = &g_1717;
                for (g_1780 = 0; (g_1780 <= 5); g_1780 += 1)
                {
                    int32_t *l_3291 = (void*)0;
                    int32_t *l_3292[2][2][6] = {{{&g_3,&g_3,&g_394,&g_3,&g_3,&g_394},{&g_3,&g_3,&g_394,&g_3,&g_3,&g_394}},{{&g_3,&g_3,&g_394,&g_3,&g_3,&g_394},{&g_3,&g_3,&g_394,&g_3,&g_3,&g_394}}};
                    int i, j, k;
                    --l_3293;
                    for (g_633 = 0; (g_633 <= 5); g_633 += 1)
                    {
                        int32_t *l_3296 = &g_394;
                        (*l_4) = l_3296;
                    }
                    if (g_770[(g_25 + 1)])
                        break;
                    l_3297 = g_333[g_1780];
                }
                (*l_3313) = func_72(((*l_3271) ^= ((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((l_3307[8][0] = (safe_sub_func_uint32_t_u_u(((l_3285 = l_3304) != (void*)0), (((void*)0 != l_3305) != l_3306)))) | ((*l_3309) = (~0xC446421CL))), l_3297)), (safe_sub_func_uint16_t_u_u((((l_3297 || (1UL && l_3282[7])) , l_3290) & l_3288), g_3209)))) & (-7L))), (**g_813), l_3312, l_3313, l_3293);
            }
            l_3314[1][4][6] = &l_3307[7][0];
            if (g_3209)
                goto lbl_3535;
        }
        else
        {
            uint32_t l_3318[4][1][10] = {{{0xECCEF743L,0xECCEF743L,0xC4B4D392L,0xD5647C7DL,0UL,0xC4B4D392L,0UL,0xD5647C7DL,0xC4B4D392L,0xECCEF743L}},{{0UL,0xD842FC58L,4294967295UL,0UL,0xF4827F0CL,0xF4827F0CL,0UL,4294967295UL,0xD842FC58L,0UL}},{{4294967295UL,0xECCEF743L,0xD842FC58L,0xF4827F0CL,0xECCEF743L,0xF4827F0CL,0xD842FC58L,0xECCEF743L,4294967295UL,4294967295UL}},{{0UL,0xD5647C7DL,0xC4B4D392L,0xECCEF743L,0xECCEF743L,0xC4B4D392L,0xD5647C7DL,0UL,0xC4B4D392L,0UL}}};
            int32_t l_3327[7][8] = {{1L,0x946F3BF1L,1L,0xEFEF9AA1L,(-1L),1L,0x0531645BL,0x946F3BF1L},{1L,0L,1L,1L,0L,0xEFEF9AA1L,0x0531645BL,0xEFEF9AA1L},{1L,1L,(-1L),1L,1L,9L,0L,0x946F3BF1L},{1L,9L,0L,0x946F3BF1L,0L,9L,1L,1L},{1L,1L,0L,0xEFEF9AA1L,0x0531645BL,0xEFEF9AA1L,0L,1L},{0L,0L,(-1L),0x946F3BF1L,0x0531645BL,1L,0x0531645BL,0x946F3BF1L},{1L,0L,1L,1L,0L,0xEFEF9AA1L,0x0531645BL,0xEFEF9AA1L}};
            int i, j, k;
            for (g_87.f1 = (-16); (g_87.f1 < 11); g_87.f1++)
            {
                int8_t l_3317 = 0x68L;
                const int32_t *l_3324[7][1][6] = {{{&g_333[5],&g_333[5],(void*)0,&g_333[5],&g_333[5],&g_333[5]}},{{&g_767,&g_333[5],&g_2475[0][2],&g_767,(void*)0,&g_333[4]}},{{&g_767,(void*)0,&g_333[4],&g_333[5],&g_333[5],&g_333[4]}},{{&g_333[5],&g_333[5],&g_2475[0][2],&g_767,&g_333[5],&g_333[5]}},{{&g_333[5],(void*)0,(void*)0,&g_767,(void*)0,&g_2475[0][2]}},{{&g_333[5],&g_333[5],(void*)0,&g_333[5],&g_333[5],&g_333[5]}},{{&g_767,&g_333[5],&g_2475[0][2],&g_767,(void*)0,&g_333[4]}}};
                const int32_t **l_3323 = &l_3324[1][0][1];
                const int32_t ***l_3322 = &l_3323;
                const int32_t ****l_3325 = (void*)0;
                const int32_t ****l_3326 = &l_3322;
                int i, j, k;
                l_3318[3][0][2]--;
                (*g_100) &= (l_3321 < (&g_655 == ((*l_3326) = l_3322)));
                --l_3330[6][0];
            }
            for (g_1775 = 0; (g_1775 <= 1); g_1775 += 1)
            {
                int16_t l_3333 = (-1L);
                int32_t l_3334 = 0x0EC16832L;
                int32_t l_3335 = 0x0CB1CF58L;
                int32_t l_3336 = 0xE00F2296L;
            }
        }
        (*g_100) = ((safe_add_func_int32_t_s_s((((*l_3358) &= ((-1L) ^ 0x33B50990L)) != (safe_add_func_int32_t_s_s((((**l_3313) >= (**l_3313)) == (safe_lshift_func_uint16_t_u_u(0x5999L, 4))), (l_3329[0][1] = ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((~((((((g_3368 | (safe_rshift_func_int8_t_s_u((l_3371 != (l_16.f0 , &g_457)), l_3372))) != l_3328) | 0xEAEEA540L) ^ l_3272) , (**l_3313)) ^ l_3373)) && 1L), 9L)), 5)) ^ g_633))))), (*g_100))) > l_3306);
lbl_3535:
        if ((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(0xF8L, ((safe_add_func_uint32_t_u_u(((((((0x6BL >= ((l_16 , (l_3330[6][0] || 0x86L)) & (~((safe_add_func_uint16_t_u_u((l_3383 = (**l_3313)), (safe_mul_func_uint16_t_u_u(((void*)0 != &l_3287[0][0][0]), ((l_3386 ^ g_1780) ^ l_3328))))) , (**g_813))))) > g_1780) & l_3387) < 0xCB8C6095DC2ECD2CLL) , (**g_813)) >= (**l_3313)), (*g_482))) > l_3388[2][5][7]))), 0x00391489L)))
        {
            int8_t l_3396 = 0x80L;
            union U1 l_3430[6] = {{0xCCB28001C9A76592LL},{0xCCB28001C9A76592LL},{0xCCB28001C9A76592LL},{0xCCB28001C9A76592LL},{0xCCB28001C9A76592LL},{0xCCB28001C9A76592LL}};
            int8_t **l_3458 = &l_3287[1][3][0];
            int32_t l_3490 = 1L;
            int i;
            for (g_25 = 0; (g_25 >= (-15)); g_25 = safe_sub_func_uint8_t_u_u(g_25, 4))
            {
                const uint64_t *l_3393 = (void*)0;
                int32_t l_3401 = 4L;
                int8_t l_3431 = 0xC3L;
                uint64_t l_3432 = 0x4C3758C19F08BF1DLL;
                int32_t l_3447 = 0x669F49F9L;
                uint8_t l_3450 = 1UL;
                int64_t ** const l_3475 = &l_3271;
                (*g_100) &= ((((safe_mul_func_uint16_t_u_u(((l_16 , l_3393) == l_3271), (safe_div_func_int16_t_s_s(g_363, l_3396)))) > 0x8DCE3EC9F02134E4LL) != (++(*g_422))) > ((safe_mul_func_uint16_t_u_u((l_3401 & ((+(!(((safe_div_func_int64_t_s_s((safe_mod_func_int64_t_s_s((safe_sub_func_int32_t_s_s(1L, (((safe_add_func_uint64_t_u_u(1UL, 0xDC3ACAE872B571F1LL)) <= l_3330[6][0]) , 0x068E3951L))), l_3401)), l_3412)) ^ 9L) || (**g_813)))) , l_3401)), 0x96D0L)) && l_3396));
                if (l_3401)
                    break;
                for (g_1485 = 1; (g_1485 >= 14); g_1485++)
                {
                    int32_t ****l_3423 = &g_230;
                    int32_t *****l_3424 = &l_3423;
                    const int32_t ***l_3425 = &l_3313;
                    int16_t l_3448 = 1L;
                    uint16_t **l_3478[1][1][1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_3478[i][j][k] = (void*)0;
                        }
                    }
                    if ((safe_add_func_int32_t_s_s(((((safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s((l_3396 || ((((((*l_3424) = l_3423) != (((*l_3271) = (((*g_814) = ((((*l_3425) = (void*)0) == (void*)0) >= 0UL)) <= ((safe_div_func_int64_t_s_s(((safe_div_func_uint64_t_u_u(((*g_100) ^ ((*g_813) != (l_3430[4] , (*g_813)))), l_3401)) != 6UL), l_3431)) && 1UL))) , &g_230)) != l_3430[4].f0) && (*g_814)) , l_3431)), l_3432)), (*g_1802))), 7)) < 0xBAD4L) , 1UL) != l_3401), l_3430[4].f1)))
                    {
                        int64_t l_3435 = 0L;
                        l_3328 &= ((*g_100) = (safe_add_func_uint64_t_u_u((l_3435 <= (l_3401 == (safe_div_func_int64_t_s_s(l_3431, ((*g_422) |= (safe_sub_func_int64_t_s_s(l_3432, (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(1L, (g_3449 = (((((~((safe_sub_func_uint16_t_u_u((*g_3110), (l_3447 = 0x6134L))) && ((-1L) > 18446744073709551609UL))) <= (-4L)) != 0L) >= 0L) && l_3448)))), 0x54L))))))))), l_3450)));
                        (*g_100) = (1L || l_3450);
                    }
                    else
                    {
                        int32_t l_3457 = 0x1B5925A2L;
                        int8_t **l_3459 = &l_3287[0][2][1];
                        int32_t ***l_3468 = &g_655;
                        int32_t ***l_3469[4][8] = {{&g_655,&l_3466,&g_655,&l_3466,&g_655,&g_655,&g_655,&l_3466},{&g_655,&l_3466,&g_655,&g_655,&g_655,&g_655,&g_655,&l_3466},{&g_655,&g_655,&g_655,&l_3466,&g_655,&g_655,&g_655,&g_655},{&g_655,&l_3466,&g_655,&l_3466,&g_655,&g_655,&g_655,&l_3466}};
                        int32_t ***l_3485 = &g_231;
                        int i, j;
                        (*g_100) ^= ((((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_3431, 4)), (safe_mul_func_uint16_t_u_u(l_3457, ((l_3458 = (void*)0) == l_3459))))) < ((((l_3447 | ((((l_3350 , ((l_3447 >= (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((((((l_3466 == (g_3470 = &l_3467)) < l_3431) ^ l_3430[4].f1) ^ 0x8F70C44CL) < l_3272) | l_3432), 1)), 0))) >= l_3329[4][1])) >= l_3396) | l_3457) > (-1L))) < l_3447) , l_3450) , (**g_421))) , (void*)0) == (*g_421));
                        (*g_100) = (!(safe_sub_func_uint16_t_u_u(((void*)0 != l_3475), ((safe_add_func_int64_t_s_s(l_3457, (l_3447 , ((*l_3271) |= (l_3478[0][0][0] == (void*)0))))) >= l_3457))));
                        l_3491 ^= (((safe_sub_func_int32_t_s_s((*g_100), (*g_100))) >= ((*l_3358) |= (l_3432 ^ (safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s(((((void*)0 != l_3485) != l_3431) > l_3430[4].f1), ((safe_add_func_int8_t_s_s((((safe_sub_func_int64_t_s_s(l_3431, l_3457)) >= l_3401) == l_3432), l_3430[4].f0)) < (*g_1802)))), 0x72883AFAL))))) < l_3490);
                    }
                }
                if ((*g_482))
                    break;
            }
            l_3329[6][0] |= ((((safe_sub_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(((((*l_3286) = (+(&g_1327 == (void*)0))) , (((l_3350 , (g_117 = 2L)) && (safe_mul_func_uint8_t_u_u((l_16 , l_3430[4].f1), (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((g_1775 >= ((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((l_3511[8] != (safe_mul_func_int8_t_s_s(8L, l_3490))) & (*g_100)), l_3490)) == (*g_3110)), g_114)) > l_3430[4].f1)), g_3514[3])), (**g_813))) , 0xFC4DL), g_3))))) , 0L)) & l_3515), l_3328)), 18446744073709551615UL)), (**g_813))) != l_3430[4].f1) > 1UL) , 0xB1728434L);
        }
        else
        {
            const int32_t *l_3533 = &g_2475[0][4];
            const int32_t **l_3532 = &l_3533;
            for (l_3290 = 3; (l_3290 >= 0); l_3290 -= 1)
            {
                int32_t l_3520 = 0L;
                int16_t *l_3521 = (void*)0;
                int16_t *l_3522 = &g_770[3];
                union U1 l_3523 = {0L};
                uint64_t *****l_3524 = &g_457;
                int32_t l_3527 = (-4L);
                uint64_t l_3528 = 18446744073709551612UL;
                const int32_t ***l_3534 = &l_3532;
                (*g_100) = 0x6109B7A0L;
                l_3528 = (safe_sub_func_int32_t_s_s((g_1064.f1 >= (safe_lshift_func_uint8_t_u_s(((*l_3358) = (0x43F2L <= ((*l_3522) = l_3520))), (((*g_1678) = l_3523) , (g_1193 = l_3520))))), (((l_3524 == l_3524) , (safe_mod_func_int32_t_s_s((0xF16EL || l_3520), l_3527))) == 0L)));
                (*l_3313) = l_3529;
                (*g_100) = (safe_mul_func_int8_t_s_s((-5L), (((*l_3534) = l_3532) == (void*)0)));
            }
        }
        --l_3536;
    }
    return (**g_813);
}







static int32_t ** func_5(int32_t * p_6, uint64_t p_7, uint32_t p_8, int32_t * p_9, int32_t * p_10)
{
    uint32_t l_3210[1];
    int32_t l_3214 = (-10L);
    union U1 l_3215 = {1L};
    union U0 *l_3228 = &g_3229;
    union U0 *l_3230 = &g_3231;
    int32_t l_3245 = (-4L);
    int32_t l_3246[6];
    int32_t l_3249 = 0x1739EE3BL;
    int16_t l_3251[4][2][8] = {{{0xD31BL,0x5870L,0xD31BL,0x5870L,0xD31BL,0x5870L,0xD31BL,0x5870L},{0xD31BL,0x5870L,0xD31BL,0x5870L,0xD31BL,0x5870L,0xD31BL,0x5870L}},{{0xD31BL,0x5870L,0xD31BL,0x5870L,0xD31BL,0x5870L,0xD31BL,0x5870L},{0xD31BL,0x5870L,0xD31BL,0x5870L,0xD31BL,0x5870L,0xD31BL,0x5870L}},{{0xD31BL,0x5870L,0xD31BL,0x5870L,0xD31BL,0x5870L,0xD31BL,0x5870L},{0xD31BL,0x5870L,0xD31BL,0x5870L,0xD31BL,0x5870L,0xD31BL,0x5870L}},{{0xD31BL,0x5870L,0xD31BL,0x5870L,0xD31BL,0x5870L,0xD31BL,0x5870L},{0xD31BL,0x5870L,0xD31BL,0x5870L,0xD31BL,0x5870L,0xD31BL,0x5870L}}};
    uint16_t *l_3258[6];
    int16_t *l_3263 = (void*)0;
    int16_t **l_3262[3];
    int32_t l_3267 = (-1L);
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_3210[i] = 0x3452D4CFL;
    for (i = 0; i < 6; i++)
        l_3246[i] = 0L;
    for (i = 0; i < 6; i++)
        l_3258[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_3262[i] = &l_3263;
    if (l_3210[0])
    {
        p_9 = p_10;
        return (*g_230);
    }
    else
    {
        uint32_t l_3232 = 0x5BDBCA1EL;
        int32_t l_3237 = 0x4C4D42D3L;
        int32_t l_3247[7][5] = {{1L,0xB7B9657BL,0xC10BAE36L,0x933156A9L,(-10L)},{0xC10BAE36L,0xB7B9657BL,1L,1L,0xB7B9657BL},{0xC780A475L,(-1L),0x77D5EFB9L,0xB7B9657BL,(-10L)},{(-1L),1L,0x77D5EFB9L,1L,0x77D5EFB9L},{(-10L),(-10L),1L,0xC780A475L,0xC22FD5B7L},{(-1L),0xC22FD5B7L,0xC10BAE36L,0xC780A475L,0xC780A475L},{0xC780A475L,1L,0xC780A475L,1L,0x933156A9L}};
        int8_t l_3248[2];
        union U1 l_3255 = {-1L};
        int32_t l_3261 = 0L;
        int32_t **l_3268 = &g_100;
        int i, j;
        for (i = 0; i < 2; i++)
            l_3248[i] = 1L;
        if (((l_3214 |= ((l_3210[0] , (p_7 | (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(p_8)), 8)))) | ((*g_2303) != (*g_2303)))) , ((l_3215 , (4294967293UL != l_3215.f1)) & 0xA5DE806082CEF6CDLL)))
        {
            union U0 *l_3217 = &g_226;
            union U0 **l_3216 = &l_3217;
            int32_t **l_3219 = (void*)0;
            int32_t **l_3220 = (void*)0;
            int32_t **l_3221 = &g_2;
            l_3214 |= (*p_10);
            (*l_3216) = (void*)0;
            for (g_1241 = 0; (g_1241 <= 2); g_1241 += 1)
            {
                int32_t **l_3218 = &g_2;
                return l_3218;
            }
            (*l_3221) = &l_3214;
        }
        else
        {
            union U1 **l_3223 = &g_1678;
            union U1 ***l_3222 = &l_3223;
            union U1 ****l_3224 = (void*)0;
            union U1 ****l_3225 = &g_1259;
            union U0 *l_3226 = &g_226;
            union U0 **l_3227[4][2][5] = {{{(void*)0,&l_3226,&l_3226,&l_3226,&l_3226},{(void*)0,&l_3226,&l_3226,(void*)0,(void*)0}},{{&l_3226,(void*)0,&l_3226,&l_3226,(void*)0},{&l_3226,(void*)0,(void*)0,(void*)0,&l_3226}},{{&l_3226,(void*)0,(void*)0,&l_3226,(void*)0},{(void*)0,(void*)0,(void*)0,&l_3226,(void*)0}},{{(void*)0,&l_3226,&l_3226,(void*)0,(void*)0},{(void*)0,&l_3226,&l_3226,&l_3226,&l_3226}}};
            int i, j, k;
            (*l_3225) = l_3222;
            l_3230 = (l_3228 = l_3226);
            l_3232++;
            (*p_9) = (safe_lshift_func_uint8_t_u_u(p_7, l_3237));
        }
        for (g_114 = 10; (g_114 > 47); g_114++)
        {
            int32_t *l_3240 = (void*)0;
            int32_t *l_3241 = &l_3214;
            int32_t *l_3242 = (void*)0;
            int32_t *l_3243 = &g_25;
            int32_t *l_3244[4][4][4] = {{{&l_3214,&l_3237,&g_25,&l_3237},{&g_394,&l_3237,&l_3237,&g_394},{&l_3237,&g_394,&l_3214,(void*)0},{&l_3237,&l_3214,&l_3237,&g_25}},{{&g_394,(void*)0,&g_25,&g_25},{&l_3214,&l_3214,&l_3237,(void*)0},{(void*)0,&g_394,&l_3237,&g_394},{&l_3214,&l_3237,&g_25,&l_3237}},{{&g_394,&l_3237,&l_3237,&g_394},{&l_3237,&g_394,&l_3214,(void*)0},{&l_3237,&l_3214,&l_3237,&g_25},{&g_394,(void*)0,&g_25,&g_25}},{{&l_3214,&l_3214,&l_3237,(void*)0},{(void*)0,&g_394,&l_3237,&g_394},{&l_3214,&l_3237,&g_25,&l_3237},{&g_394,&l_3237,&l_3237,&g_394}}};
            int32_t l_3250[4] = {0x28502552L,0x28502552L,0x28502552L,0x28502552L};
            uint8_t l_3252[6][6][3] = {{{0x95L,1UL,0x95L},{255UL,1UL,254UL},{0x2FL,0x95L,0x95L},{254UL,255UL,255UL},{0x71L,0x2FL,0xC1L},{254UL,254UL,255UL}},{{0x2FL,0x71L,0UL},{255UL,254UL,255UL},{0x95L,0x2FL,1UL},{1UL,255UL,255UL},{1UL,0x95L,0UL},{0x86L,1UL,255UL}},{{1UL,1UL,0xC1L},{1UL,0x86L,255UL},{0x95L,0UL,0x71L},{0x86L,255UL,3UL},{0x95L,0x71L,0x71L},{3UL,0x86L,255UL}},{{0UL,0x95L,1UL},{3UL,3UL,254UL},{0x95L,0UL,0xC1L},{0x86L,3UL,0x86L},{0x71L,0x95L,0UL},{255UL,0x86L,0x86L}},{{0UL,0x71L,0xC1L},{255UL,255UL,254UL},{0UL,0UL,1UL},{255UL,255UL,255UL},{0x71L,0UL,0x71L},{0x86L,255UL,3UL}},{{0x95L,0x71L,0x71L},{3UL,0x86L,255UL},{0UL,0x95L,1UL},{3UL,3UL,254UL},{0x95L,0UL,0xC1L},{0x86L,3UL,0x86L}}};
            int16_t **l_3264 = &l_3263;
            int i, j, k;
            l_3252[1][2][2]++;
            (*p_9) = (((((*g_1678) = l_3255) , (safe_mul_func_int8_t_s_s((((*g_778) = (void*)0) != l_3258[3]), (safe_div_func_int64_t_s_s(l_3261, (((l_3262[2] != l_3264) <= (safe_lshift_func_uint16_t_u_u((0xE175F3FDB870C038LL <= (l_3214 = (**g_421))), l_3267))) , 0x1E8A2A1DF7EDD071LL)))))) && l_3267) | 0xB802D0511C65824DLL);
        }
        return l_3268;
    }
}







static uint16_t func_13(uint32_t p_14, int32_t p_15)
{
    int32_t *l_49 = &g_3;
    int16_t l_50 = (-1L);
    int32_t **l_1975 = &g_212[1][0][6];
    uint8_t ** const l_2803 = (void*)0;
    uint16_t ** const *l_2816 = &g_778;
    int64_t * const ****l_2832 = (void*)0;
    int32_t l_2846 = 0x2EA31F17L;
    int32_t l_2848 = 6L;
    int32_t l_2849 = (-7L);
    int32_t l_2857 = 0x275A732CL;
    int32_t l_2858 = 7L;
    int32_t l_2860 = 1L;
    int32_t l_2861 = 0xA9198D57L;
    int32_t l_2862 = 0x276894CDL;
    int32_t l_2864 = 0x2BA96BB4L;
    int32_t l_2869 = 4L;
    int32_t l_2871 = 0x2294A9F8L;
    int32_t l_2872 = 0x9887B0A0L;
    int32_t l_2873 = 0L;
    int32_t l_2874[1][2];
    union U1 ****l_2902[4][10][6] = {{{&g_1259,&g_1259,&g_1259,(void*)0,(void*)0,&g_1259},{&g_1259,&g_1259,(void*)0,&g_1259,(void*)0,&g_1259},{&g_1259,&g_1259,(void*)0,(void*)0,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,(void*)0,(void*)0,&g_1259},{&g_1259,&g_1259,(void*)0,&g_1259,(void*)0,&g_1259},{&g_1259,&g_1259,(void*)0,(void*)0,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,(void*)0,(void*)0,&g_1259},{&g_1259,&g_1259,(void*)0,&g_1259,(void*)0,&g_1259}},{{&g_1259,&g_1259,(void*)0,(void*)0,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,(void*)0,(void*)0,&g_1259},{&g_1259,&g_1259,(void*)0,&g_1259,(void*)0,&g_1259},{&g_1259,&g_1259,(void*)0,(void*)0,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,(void*)0,(void*)0,&g_1259},{&g_1259,&g_1259,(void*)0,&g_1259,(void*)0,&g_1259},{&g_1259,&g_1259,(void*)0,(void*)0,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259}},{{&g_1259,&g_1259,&g_1259,(void*)0,(void*)0,&g_1259},{(void*)0,(void*)0,&g_1259,(void*)0,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,(void*)0,&g_1259,(void*)0,&g_1259,&g_1259},{(void*)0,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{(void*)0,(void*)0,&g_1259,(void*)0,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,(void*)0,&g_1259,(void*)0,&g_1259,&g_1259},{(void*)0,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{(void*)0,(void*)0,&g_1259,(void*)0,&g_1259,&g_1259}},{{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,(void*)0,&g_1259,(void*)0,&g_1259,&g_1259},{(void*)0,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{(void*)0,(void*)0,&g_1259,(void*)0,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,(void*)0,&g_1259,(void*)0,&g_1259,&g_1259},{(void*)0,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{(void*)0,(void*)0,&g_1259,(void*)0,&g_1259,&g_1259},{&g_1259,&g_1259,&g_1259,&g_1259,&g_1259,&g_1259},{&g_1259,(void*)0,&g_1259,(void*)0,&g_1259,&g_1259}}};
    union U0 l_2911 = {5L};
    const uint32_t *l_2966 = &g_633;
    const uint32_t ** const l_2965 = &l_2966;
    uint16_t l_2972 = 0x69C5L;
    uint64_t * const *l_2977 = &g_422;
    int32_t l_3022 = 0xFF294EEAL;
    uint16_t l_3026 = 0x416AL;
    uint32_t l_3139 = 1UL;
    uint32_t l_3164 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_2874[i][j] = 0xFA499A9AL;
    }
    if (((safe_sub_func_int8_t_s_s(((-2L) >= ((~(&g_2 != &g_2)) , g_25)), func_29((((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(p_15, (g_3 == (((((*l_1975) = func_35((((((safe_unary_minus_func_uint16_t_u((p_15 | ((*g_100) ^= (safe_mod_func_uint16_t_u_u((((safe_add_func_int16_t_s_s(g_25, (func_45(l_49, l_50, l_49) || 0x41L))) <= 0xE6L) | g_1235), (*l_49))))))) , p_15) , &p_15) != l_49) == (*l_49)), g_131, (*l_49), p_15)) != (void*)0) > p_14) != 1UL)))), p_14)) == (*l_49)) < 9L)))) < (*l_49)))
    {
        const int32_t **l_2795 = &g_482;
        const int32_t ***l_2794 = &l_2795;
        const int32_t ****l_2793 = &l_2794;
        const int32_t *****l_2792 = &l_2793;
        uint32_t *l_2800[3];
        const uint16_t l_2801 = 4UL;
        int32_t l_2804 = 0x9AB83C4BL;
        uint8_t l_2813 = 0x99L;
        uint16_t ***l_2817 = &g_778;
        int32_t l_2852 = 0xDC90D80EL;
        int32_t l_2863 = (-7L);
        int32_t l_2865 = 0xFFF41453L;
        int32_t l_2868 = (-7L);
        int32_t l_2870[3][9][4] = {{{0xE77886E1L,0x77518389L,3L,(-10L)},{0x9D223751L,0x77518389L,0x8CF7992DL,0xB1719ECDL},{0x77518389L,0xE77886E1L,3L,0xB1719ECDL},{(-1L),0x77518389L,(-10L),(-10L)},{0x77518389L,0x77518389L,(-1L),0xB1719ECDL},{0x9D223751L,0xE77886E1L,(-10L),0xB1719ECDL},{0xE77886E1L,0x77518389L,3L,(-10L)},{0x9D223751L,0x77518389L,0x8CF7992DL,0xB1719ECDL},{0x77518389L,0xE77886E1L,3L,0xB1719ECDL}},{{(-1L),0x77518389L,(-10L),(-10L)},{0x77518389L,0x77518389L,(-1L),0xB1719ECDL},{0x9D223751L,0xE77886E1L,(-10L),0xB1719ECDL},{0xE77886E1L,0x77518389L,3L,(-10L)},{0x9D223751L,0x77518389L,0x8CF7992DL,0xB1719ECDL},{0x77518389L,0xE77886E1L,3L,0xB1719ECDL},{(-1L),0x77518389L,(-10L),(-10L)},{0x77518389L,0x77518389L,(-1L),0xB1719ECDL},{0x9D223751L,0xE77886E1L,(-10L),0xB1719ECDL}},{{0xE77886E1L,0x77518389L,3L,(-10L)},{(-1L),0xE77886E1L,0xB1719ECDL,(-10L)},{0xE77886E1L,(-4L),(-1L),(-10L)},{0x2388BA8BL,0xE77886E1L,0x8CF7992DL,0x8CF7992DL},{0xE77886E1L,0xE77886E1L,1L,(-10L)},{(-1L),(-4L),0x8CF7992DL,(-10L)},{(-4L),0xE77886E1L,(-1L),0x8CF7992DL},{(-1L),0xE77886E1L,0xB1719ECDL,(-10L)},{0xE77886E1L,(-4L),(-1L),(-10L)}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_2800[i] = &g_110;
        l_2804 = (safe_add_func_int32_t_s_s(((((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(p_14, ((g_2802 = (safe_rshift_func_uint8_t_u_u((1L && (safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((g_2791 != l_2792), p_15)), ((safe_lshift_func_uint16_t_u_u(((*g_779) = ((**g_778) | (safe_mod_func_int8_t_s_s(((l_2800[0] == l_49) && ((p_15 >= (**g_813)) , (-9L))), (**l_2795))))), l_2801)) > 0x58A7L)))), p_15))) , p_15))), 0x92L)) , p_14) , (*g_2303)) != l_2803), 0x870872DDL));
        for (g_87.f1 = 0; (g_87.f1 < 11); g_87.f1 = safe_add_func_uint8_t_u_u(g_87.f1, 1))
        {
            int64_t l_2843 = (-9L);
            int32_t l_2850 = 0xB5A2CD17L;
            int32_t l_2853 = 0x65F75F37L;
            int32_t l_2855[3];
            int i;
            for (i = 0; i < 3; i++)
                l_2855[i] = (-1L);
            for (g_114 = 5; (g_114 <= 18); g_114 = safe_add_func_int32_t_s_s(g_114, 7))
            {
                int64_t *****l_2831[2][7] = {{&g_2527,&g_2527,&g_2527,&g_2527,&g_2527,&g_2527,&g_2527},{(void*)0,&g_2527,(void*)0,&g_2527,(void*)0,&g_2527,(void*)0}};
                uint8_t *l_2844[3];
                int32_t l_2845 = 0xF80E48CEL;
                int32_t l_2847 = 1L;
                int32_t l_2851 = 0xA84C8432L;
                int32_t l_2854 = 0xD200F3EAL;
                int32_t l_2856 = 0xD7502912L;
                int32_t l_2859 = 6L;
                int32_t l_2866 = 0xECD9C8ECL;
                int32_t l_2867[2];
                uint32_t l_2875 = 0xABCDBDCBL;
                int32_t l_2906 = (-7L);
                int i, j;
                for (i = 0; i < 3; i++)
                    l_2844[i] = &g_771;
                for (i = 0; i < 2; i++)
                    l_2867[i] = 0L;
                (*g_100) &= ((safe_mul_func_int8_t_s_s(((l_2813 , p_14) == (((safe_mul_func_int16_t_s_s((&g_84 == (void*)0), p_15)) , l_2816) == l_2817)), 1UL)) == ((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(p_14, 0x9AL)), 2UL)) > 0L));
                (*g_100) = (safe_lshift_func_uint8_t_u_u((l_2866 = ((!((((safe_rshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u(0UL, ((safe_mul_func_uint8_t_u_u(((l_2831[1][3] == l_2832) , (((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((((safe_mod_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((--l_2875), ((**l_2795) || (l_2851 , (l_2856 != ((p_15 = (((*g_1802) && (*g_814)) , ((safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(0x14L, 5UL)), g_25)) || l_2855[0]))) && (*l_49))))))) , p_15), 0x8644L)) != g_1488) < l_2867[1]), (****l_2793))) & p_14), 0x65L)), (*l_49))) >= 0xB5L) == p_14)), p_14)) , 3L))), (*****l_2792))) <= p_14) || (*****l_2792)) == p_14)) ^ 0x2FL)), l_2855[0]));
                for (l_2851 = 0; (l_2851 <= 6); l_2851 += 1)
                {
                    uint32_t **l_2894 = &g_1802;
                    uint32_t *l_2896 = &g_114;
                    uint32_t **l_2895 = &l_2896;
                    union U1 * const ****l_2899 = (void*)0;
                    union U1 * const ****l_2900 = (void*)0;
                    union U1 * const ****l_2901 = &g_2897[1];
                    int32_t l_2904 = 0x816DF510L;
                    int16_t *l_2905[3][4] = {{&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_1717,&g_164}};
                    int i, j;
                    l_2850 = (safe_mod_func_uint64_t_u_u(((l_2859 = (safe_div_func_int64_t_s_s(p_14, (safe_rshift_func_int8_t_s_u(l_2850, (l_2904 = (safe_div_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(1UL, ((((p_15 < ((((l_2867[0] = p_14) <= (safe_add_func_int64_t_s_s(((((*l_2894) = l_2800[0]) != ((*l_2895) = &g_110)) <= (((*l_2901) = g_2897[1]) != (g_2903[1][0] = l_2902[1][5][0]))), p_14))) <= p_15) != p_15)) && 0xDE06L) >= p_14) > p_14))) & 0L), p_14)))))))) >= l_2850), l_2851));
                }
                if (l_2906)
                    continue;
            }
        }
        return (*l_49);
    }
    else
    {
        uint32_t l_2913 = 1UL;
        int32_t * const l_2914[2] = {(void*)0,(void*)0};
        int32_t l_2916 = 0xA4B10876L;
        int64_t l_2923[4];
        int32_t l_2929 = 0L;
        int32_t l_2930 = 0x5C272704L;
        int32_t l_2932 = 0x4FC4E4C2L;
        int32_t l_2933 = 0L;
        int32_t l_2935 = 0L;
        int32_t l_2937 = 0x99523C1CL;
        uint32_t l_2939 = 0x4B2E50D2L;
        uint32_t l_2945 = 1UL;
        const uint64_t l_2957[2] = {18446744073709551613UL,18446744073709551613UL};
        int32_t l_2997 = 0x32573C77L;
        int32_t l_2998 = 0x6C03298BL;
        int32_t l_3001 = (-4L);
        int32_t l_3002 = (-6L);
        int32_t l_3009 = (-4L);
        int8_t l_3010 = 8L;
        int32_t l_3011[4][6] = {{0x5ADC5C91L,4L,4L,0x5ADC5C91L,0x5ADC5C91L,4L},{0x5ADC5C91L,0x5ADC5C91L,4L,4L,0x5ADC5C91L,0x5ADC5C91L},{0x5ADC5C91L,4L,4L,0x5ADC5C91L,0x5ADC5C91L,4L},{0x5ADC5C91L,0x5ADC5C91L,4L,4L,0x5ADC5C91L,0x5ADC5C91L}};
        int16_t l_3013 = 7L;
        uint8_t **l_3067[1][1][4];
        uint8_t ***l_3066 = &l_3067[0][0][1];
        int64_t ** const l_3080 = &g_727;
        int8_t l_3140 = 0x38L;
        uint32_t *l_3144 = &g_633;
        uint32_t * const *l_3143 = &l_3144;
        int16_t l_3192 = 0x220DL;
        union U0 l_3193 = {0xD7B51BC2L};
        uint16_t ***l_3198 = &g_778;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_2923[i] = 0x4B6D4FE925D447FELL;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 4; k++)
                    l_3067[i][j][k] = &g_217;
            }
        }
        (*l_1975) = &p_15;
        for (l_2848 = 6; (l_2848 >= 0); l_2848 -= 1)
        {
            uint8_t l_2907 = 0x60L;
            union U1 l_2910 = {2L};
            uint64_t *****l_2912 = &g_457;
            int32_t * const l_2915 = (void*)0;
            int32_t *l_2917 = &l_2869;
            int32_t l_2922 = 0xAB71BF69L;
            int32_t l_2924 = (-1L);
            int32_t l_2925 = 1L;
            int32_t l_2926 = 0xE8A6645CL;
            int32_t l_2927 = 0xBD6E14ECL;
            int32_t l_2928 = 0x8927972AL;
            int32_t l_2934 = 6L;
            int32_t l_2936 = 1L;
            int32_t l_2938 = 0x5C5BC8A3L;
            int i;
            if (l_2907)
                break;
            p_15 = ((*l_2917) = ((*g_100) = (safe_lshift_func_int16_t_s_u(((l_2910 , (l_2916 = ((l_2911 , (l_2912 != l_2912)) > ((***g_777) ^= ((((l_2913 ^ (l_2914[1] == l_2915)) != 0x0DL) | (((p_14 >= l_2913) < (*l_49)) >= 0x2DL)) <= p_15))))) >= p_15), p_14))));
            for (g_59 = 2; (g_59 <= 6); g_59 += 1)
            {
                int32_t *l_2918 = &l_2874[0][0];
                int32_t *l_2919 = &l_2864;
                int32_t *l_2920 = &g_53;
                int32_t *l_2921[1][6];
                int64_t l_2931 = 0xB94ABEFC174463A5LL;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_2921[i][j] = &l_2916;
                }
                --l_2939;
                (*g_100) &= l_2932;
                for (l_2932 = 6; (l_2932 >= 0); l_2932 -= 1)
                {
                    (*l_1975) = l_2919;
                    (*l_2917) ^= p_14;
                }
            }
        }
        for (g_211 = 0; (g_211 <= 1); g_211 += 1)
        {
            int32_t l_2942[9];
            int32_t *l_2943 = &l_2916;
            int32_t *l_2944[6][6][7] = {{{(void*)0,&g_53,&l_2937,&l_2874[0][1],&l_2874[0][0],&l_2935,&l_2848},{&g_394,(void*)0,&g_3,&l_2862,&l_2874[0][1],&l_2874[0][0],&l_2937},{&l_2848,&l_2874[0][0],&l_2874[0][0],(void*)0,&l_2864,&l_2864,&l_2935},{&g_394,(void*)0,&g_394,&g_3,&l_2864,&l_2874[0][0],&l_2874[0][0]},{&l_2874[0][1],&g_3,&g_3,&g_3,&l_2874[0][1],(void*)0,&l_2869},{&l_2874[0][0],&l_2864,&g_394,&l_2872,&l_2874[0][0],&l_2933,&l_2846}},{{&l_2874[0][0],&l_2857,&l_2935,&l_2858,&l_2872,&l_2862,&g_394},{&l_2874[0][0],&l_2872,&l_2937,&l_2848,&l_2874[0][0],&l_2874[0][0],(void*)0},{&l_2874[0][1],&l_2874[0][0],&l_2937,&l_2872,&l_2933,&l_2942[8],&l_2874[0][0]},{&g_394,&l_2937,&g_394,&l_2872,&g_3,&l_2857,&g_3},{&l_2848,(void*)0,(void*)0,&l_2848,&l_2937,&l_2935,&l_2874[0][0]},{&g_394,&l_2848,(void*)0,&l_2858,&l_2935,&l_2872,&g_53}},{{(void*)0,&l_2935,&l_2874[0][0],&l_2872,&l_2864,(void*)0,&l_2874[0][0]},{&l_2874[0][0],&l_2872,&g_53,&g_3,&l_2942[8],&l_2935,&g_3},{&l_2872,&g_394,&l_2848,&g_3,&l_2933,&g_53,&l_2874[0][0]},{&l_2858,&g_53,&l_2848,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2935,&l_2874[0][0],&l_2935,&g_394,&l_2874[0][0],&l_2848,&l_2874[0][1]},{(void*)0,&l_2874[0][0],&l_2864,&g_394,(void*)0,&l_2933,(void*)0}},{{&l_2874[0][0],&l_2846,&l_2874[0][0],&l_2864,&l_2937,&l_2848,(void*)0},{&l_2872,&l_2937,&l_2848,&l_2874[0][0],&l_2874[0][0],(void*)0,&l_2864},{&l_2848,&l_2862,&l_2872,&g_3,&l_2874[0][0],&l_2858,(void*)0},{&l_2874[0][0],&l_2862,&l_2848,(void*)0,&l_2848,(void*)0,&l_2848},{&l_2937,&l_2937,&l_2933,&l_2848,&g_3,(void*)0,&g_53},{&l_2872,&l_2846,(void*)0,&g_53,&l_2935,&l_2935,&l_2874[0][0]}},{{&l_2937,&l_2874[0][0],&l_2874[0][1],&l_2862,&g_3,(void*)0,&g_394},{&l_2857,&l_2874[0][0],&g_394,&l_2858,&l_2848,&g_3,&l_2933},{&l_2933,&g_53,&g_394,&l_2857,&l_2874[0][0],&l_2864,&g_53},{&l_2933,&l_2942[8],&l_2862,&l_2874[0][0],&l_2874[0][0],&l_2862,&l_2942[8]},{&l_2857,&g_3,&l_2872,&g_394,&l_2937,&g_394,&l_2874[0][0]},{&l_2937,(void*)0,&l_2874[0][0],&l_2874[0][1],(void*)0,&l_2933,&l_2848}},{{&l_2872,&l_2848,&l_2937,&g_394,&l_2874[0][0],&l_2848,&l_2848},{&l_2937,&l_2848,&l_2874[0][0],&l_2874[0][0],(void*)0,&l_2864,&l_2864},{&l_2874[0][0],&l_2848,(void*)0,&l_2857,&l_2933,&l_2937,&l_2864},{&l_2848,&l_2937,&l_2864,&l_2858,&l_2864,&l_2937,&l_2848},{&l_2872,&l_2935,&l_2869,&l_2862,&l_2937,&l_2857,&l_2848},{&l_2874[0][0],&g_3,&l_2935,&g_53,&l_2857,&l_2869,&l_2874[0][0]}}};
            uint8_t l_2962[1][9] = {{248UL,248UL,248UL,248UL,248UL,248UL,248UL,248UL,248UL}};
            uint64_t **l_2976 = (void*)0;
            union U0 ***l_2980 = &g_1027[1];
            uint32_t l_3014 = 1UL;
            int8_t l_3083 = (-1L);
            uint8_t l_3091 = 0x7DL;
            int8_t l_3138 = 0xAFL;
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_2942[i] = 0xCCFC4522L;
            l_2945--;
            if ((l_2935 , 0x0F7865AFL))
            {
                uint32_t *l_2949 = (void*)0;
                int32_t l_2967 = 5L;
                int16_t l_2968 = 0x668FL;
                int32_t l_2973 = 4L;
                union U0 ***l_2982 = (void*)0;
                int32_t l_2993 = 0x8A26B9B6L;
                int32_t l_2994 = (-1L);
                int32_t l_2995 = 0L;
                int32_t l_2996 = 0x9EF34258L;
                int32_t l_3000 = 0x0677F650L;
                int32_t l_3003 = 0x823937F9L;
                int32_t l_3008[3][10][8] = {{{0x02432344L,0xA5C11C1BL,1L,0xA9A52B26L,(-6L),0x318B5F50L,0x525F563AL,0xEBFF7CE8L},{0x525F563AL,0x5773AE8CL,1L,0x2D76C0B0L,0x2D76C0B0L,1L,0x5773AE8CL,0x525F563AL},{(-6L),0xDCA5D067L,0x02432344L,0xD88A6399L,(-5L),0xA5C11C1BL,0xC5B4E430L,1L},{0x58429912L,0xA9A52B26L,(-5L),0x1B26FAB5L,0xD88A6399L,0xA5C11C1BL,0xD88A6399L,0x1B26FAB5L},{0x5773AE8CL,0xDCA5D067L,0x5773AE8CL,0x5773AE8CL,0xA9A52B26L,0x1B26FAB5L,1L,0x2D76C0B0L},{0xD88A6399L,(-6L),0x525F563AL,(-5L),0x99F8285DL,0xB1EB080AL,0xA9A52B26L,0xA9A52B26L},{0xD88A6399L,0xA9A52B26L,0x02432344L,0x02432344L,0xA9A52B26L,0xD88A6399L,1L,0xEBFF7CE8L},{(-6L),0xC5B4E430L,0xB1EB080AL,1L,0x525F563AL,0xDCA5D067L,0x2D76C0B0L,0x318B5F50L},{0x99F8285DL,0xEBFF7CE8L,0xDCA5D067L,1L,0x58429912L,1L,0xDCA5D067L,0xEBFF7CE8L},{0x2D76C0B0L,0x58429912L,(-5L),0x02432344L,0x318B5F50L,0x5773AE8CL,0x99F8285DL,0xA9A52B26L}},{{0x02432344L,0x1B26FAB5L,0xEBFF7CE8L,(-5L),0x2D76C0B0L,0x99F8285DL,0x99F8285DL,0x2D76C0B0L},{0x5773AE8CL,(-5L),(-5L),0x5773AE8CL,0xEBFF7CE8L,0x318B5F50L,0xDCA5D067L,0xD88A6399L},{0xEBFF7CE8L,0x318B5F50L,0xDCA5D067L,0xD88A6399L,1L,(-6L),0x2D76C0B0L,0x1B26FAB5L},{1L,0x318B5F50L,0xB1EB080AL,0x525F563AL,0xB1EB080AL,0x318B5F50L,1L,0x02432344L},{0x58429912L,(-5L),0x02432344L,0x318B5F50L,0x5773AE8CL,0x99F8285DL,0xA9A52B26L,0xC5B4E430L},{0xC5B4E430L,0x1B26FAB5L,0x525F563AL,1L,0x5773AE8CL,0x5773AE8CL,1L,0x525F563AL},{0x58429912L,0x58429912L,(-6L),0xC5B4E430L,0xB1EB080AL,1L,0x525F563AL,0xDCA5D067L},{1L,0xEBFF7CE8L,0x58429912L,0xB1EB080AL,1L,0xDCA5D067L,(-5L),0xDCA5D067L},{0xEBFF7CE8L,0xC5B4E430L,0x5773AE8CL,0xC5B4E430L,0xEBFF7CE8L,0xD88A6399L,(-6L),0x525F563AL},{0x5773AE8CL,0xA9A52B26L,0x1B26FAB5L,1L,0x2D76C0B0L,0xB1EB080AL,0x02432344L,0xC5B4E430L}},{{0x02432344L,(-6L),0x1B26FAB5L,0x318B5F50L,0x318B5F50L,0x1B26FAB5L,(-6L),0x02432344L},{0x2D76C0B0L,1L,0x5773AE8CL,0x525F563AL,0x58429912L,0xA9A52B26L,(-5L),0x1B26FAB5L},{0x99F8285DL,1L,0x58429912L,0xD88A6399L,0x525F563AL,0xA9A52B26L,0x525F563AL,0xD88A6399L},{(-6L),1L,(-6L),0x5773AE8CL,0xA9A52B26L,0x1B26FAB5L,1L,0x2D76C0B0L},{0xD88A6399L,(-6L),0x525F563AL,(-5L),0x99F8285DL,0xB1EB080AL,0xA9A52B26L,0xA9A52B26L},{0xD88A6399L,0xA9A52B26L,0x02432344L,0x02432344L,0xA9A52B26L,0xD88A6399L,1L,0xEBFF7CE8L},{(-6L),0xC5B4E430L,0xB1EB080AL,1L,0x525F563AL,0xDCA5D067L,0x2D76C0B0L,0x318B5F50L},{0x99F8285DL,0xEBFF7CE8L,0xDCA5D067L,1L,0x58429912L,1L,0xDCA5D067L,0xEBFF7CE8L},{0x2D76C0B0L,0x99F8285DL,0x58429912L,0x5773AE8CL,0xB1EB080AL,(-6L),0xA5C11C1BL,1L},{0x5773AE8CL,0xD88A6399L,0xC5B4E430L,0x58429912L,0x318B5F50L,0xA5C11C1BL,0xA5C11C1BL,0x318B5F50L}}};
                int32_t l_3012[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i, j, k;
                l_2943 = &p_15;
                for (g_633 = 0; (g_633 <= 5); g_633 += 1)
                {
                    uint16_t l_2948[1];
                    int32_t l_2950 = (-2L);
                    uint32_t *l_2964 = &l_2913;
                    uint32_t **l_2963 = &l_2964;
                    int32_t l_3004 = 0x9B076F31L;
                    int32_t l_3006 = 0xAF4F7BE0L;
                    int32_t l_3007[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2948[i] = 65527UL;
                    for (i = 0; i < 1; i++)
                        l_3007[i] = (-1L);
                    l_2948[0] &= (-1L);
                    (*g_456) = (void*)0;
                    if (g_1200[g_633])
                    {
                        (*l_2943) &= ((void*)0 == l_2949);
                        if ((*g_482))
                            break;
                        l_2950 &= 0xC4B4478CL;
                    }
                    else
                    {
                        int32_t l_2969 = 0x3AB27FE5L;
                        int16_t *l_2970 = &l_50;
                        uint64_t *l_2971 = &g_1241;
                        l_2973 = ((*g_100) = (((((((*l_2971) = (safe_lshift_func_int16_t_s_s(((p_14 > (safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((1UL & (p_15 = (-9L))) || g_767), l_2957[1])), (safe_lshift_func_uint16_t_u_u(((((*l_2970) = (g_164 = (0xDA871633765AAF8BLL && (((((255UL ^ 0x23L) || (l_2967 &= (((**g_421) ^= (safe_lshift_func_uint16_t_u_u(((((l_2962[0][3] , l_2963) != l_2965) , p_14) | 0x04601BC17381F1DFLL), (*g_779)))) >= p_14))) <= l_2968) <= p_14) , l_2969)))) , g_368) & 0xFE05L), p_14))))) < l_2968), p_14))) , l_2972) && 0xB6740A05L) || l_2967) < p_14) , 0x651C54EFL));
                    }
                    for (g_117 = 0; (g_117 <= 1); g_117 += 1)
                    {
                        uint16_t l_2975 = 0x34D3L;
                        union U0 ***l_2981[9][9] = {{&g_1027[1],&g_1027[1],&g_1027[1],&g_1027[1],&g_1027[1],&g_1027[1],&g_1027[1],&g_1027[1],&g_1027[1]},{(void*)0,&g_1027[1],&g_1027[2],&g_1027[1],(void*)0,&g_1027[1],&g_1027[1],(void*)0,&g_1027[2]},{&g_1027[1],&g_1027[1],&g_1027[1],(void*)0,&g_1027[0],&g_1027[0],(void*)0,&g_1027[1],&g_1027[1]},{&g_1027[1],&g_1027[1],&g_1027[1],&g_1027[1],&g_1027[2],&g_1027[1],&g_1027[1],&g_1027[1],&g_1027[1]},{&g_1027[1],&g_1027[1],(void*)0,(void*)0,&g_1027[1],&g_1027[1],&g_1027[0],&g_1027[1],&g_1027[1]},{&g_1027[2],&g_1027[1],&g_1027[1],&g_1027[1],&g_1027[1],(void*)0,&g_1027[1],&g_1027[1],&g_1027[1]},{&g_1027[1],&g_1027[1],&g_1027[0],&g_1027[1],(void*)0,&g_1027[1],&g_1027[0],&g_1027[1],&g_1027[1]},{&g_1027[1],&g_1027[1],&g_1027[1],(void*)0,&g_1027[1],&g_1027[1],&g_1027[1],&g_1027[1],&g_1027[2]},{&g_1027[1],&g_1027[1],&g_1027[0],&g_1027[1],&g_1027[1],(void*)0,(void*)0,&g_1027[1],&g_1027[1]}};
                        int32_t l_2999 = 0x47081DEAL;
                        int32_t l_3005[6];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_3005[i] = 0x6D717B91L;
                        l_2967 &= (((l_2975 = (+0xED42379CDC4189A3LL)) , ((((((*g_422) ^= 0xD7AAA2AE2D8FFC9DLL) > (g_362[g_117][g_633][g_211] ^ g_362[g_117][(g_117 + 1)][g_211])) , l_2976) == l_2977) < ((*l_2943) &= (safe_add_func_int8_t_s_s(g_633, p_14))))) <= ((l_2981[2][6] = l_2980) == l_2982));
                        if (p_14)
                            continue;
                        (*g_100) |= (((*g_422) &= ((l_2968 > 0x17CFL) , ((safe_mul_func_uint8_t_u_u((*l_49), (*l_2943))) < l_2950))) , (safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s((l_2975 && ((p_15 == p_15) >= ((*l_2963) != &l_2913))), (**g_421))), 0)), 0x59F0L)));
                        l_3014++;
                    }
                }
            }
            else
            {
                uint8_t l_3023 = 0UL;
                union U1 *l_3031 = &g_87;
                int16_t *l_3044 = (void*)0;
                uint64_t l_3045 = 18446744073709551612UL;
                uint8_t ***l_3068[8][9] = {{&l_3067[0][0][3],&l_3067[0][0][3],&l_3067[0][0][1],&l_3067[0][0][3],&l_3067[0][0][3],&l_3067[0][0][1],&l_3067[0][0][1],&l_3067[0][0][0],&l_3067[0][0][1]},{&l_3067[0][0][1],(void*)0,&l_3067[0][0][1],(void*)0,&l_3067[0][0][1],&l_3067[0][0][1],&l_3067[0][0][1],&l_3067[0][0][1],&l_3067[0][0][1]},{&l_3067[0][0][3],&l_3067[0][0][3],&l_3067[0][0][1],&l_3067[0][0][3],&l_3067[0][0][3],&l_3067[0][0][1],&l_3067[0][0][1],&l_3067[0][0][0],&l_3067[0][0][1]},{&l_3067[0][0][1],(void*)0,&l_3067[0][0][1],(void*)0,&l_3067[0][0][1],&l_3067[0][0][1],&l_3067[0][0][1],&l_3067[0][0][1],&l_3067[0][0][1]},{&l_3067[0][0][3],&l_3067[0][0][3],&l_3067[0][0][1],&l_3067[0][0][3],&l_3067[0][0][3],&l_3067[0][0][1],&l_3067[0][0][1],&l_3067[0][0][0],&l_3067[0][0][1]},{&l_3067[0][0][1],(void*)0,&l_3067[0][0][1],(void*)0,&l_3067[0][0][1],&l_3067[0][0][1],&l_3067[0][0][1],&l_3067[0][0][1],&l_3067[0][0][1]},{&l_3067[0][0][3],&l_3067[0][0][3],&l_3067[0][0][1],&l_3067[0][0][3],&l_3067[0][0][3],&l_3067[0][0][1],&l_3067[0][0][1],&l_3067[0][0][0],&l_3067[0][0][1]},{&l_3067[0][0][1],(void*)0,&l_3067[0][0][1],(void*)0,&l_3067[0][0][1],&l_3067[0][0][1],&l_3067[0][0][1],&l_3067[0][0][1],&l_3067[0][0][1]}};
                int32_t l_3070 = 0x2E5E3E5AL;
                int i, j;
                for (l_2871 = 2; (l_2871 >= 0); l_2871 -= 1)
                {
                    int64_t l_3019 = 0xA3AEBF03D2EE0708LL;
                    int32_t l_3021[3][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
                    int i, j;
                    (*l_1975) = &p_15;
                    for (l_3013 = 0; (l_3013 <= 0); l_3013 += 1)
                    {
                        int i, j, k;
                        (*l_1975) = &p_15;
                        return g_362[g_211][(l_3013 + 3)][l_3013];
                    }
                    for (g_87.f0 = 1; (g_87.f0 >= 0); g_87.f0 -= 1)
                    {
                        int32_t l_3020 = 0x79C75280L;
                        int i, j, k;
                        (*l_2943) = (safe_sub_func_int16_t_s_s(g_362[g_87.f0][(g_211 + 3)][g_211], ((*g_779) |= (*l_49))));
                        --l_3023;
                        if ((*g_482))
                            break;
                    }
                }
                l_3026++;
                (*l_2943) = ((safe_mul_func_uint8_t_u_u((l_2911 , ((void*)0 == l_3031)), (safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(l_2913, p_15)), (safe_rshift_func_int16_t_s_s(p_15, 15)))))) | ((((safe_rshift_func_int8_t_s_u((0x048A5D652E80E778LL && (((safe_rshift_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((((g_164 ^= (((-1L) | p_14) || 0x4ADACA5437D10A4ALL)) && g_53) || l_3045), p_14)) | 1L), p_15)) != 255UL) >= p_15)), 2)) , p_15) , p_14) && p_15));
                for (l_2929 = 0; (l_2929 <= 1); l_2929 += 1)
                {
                    uint32_t *l_3060 = &g_633;
                    uint32_t *l_3061 = &g_633;
                    int16_t *l_3069[9];
                    int32_t l_3071 = (-9L);
                    uint64_t *l_3072 = &g_1775;
                    uint16_t l_3090[4] = {5UL,5UL,5UL,5UL};
                    int i;
                    for (i = 0; i < 9; i++)
                        l_3069[i] = &g_770[2];
                    (*g_100) &= (safe_rshift_func_uint16_t_u_u((~((((safe_add_func_uint16_t_u_u((p_15 >= (safe_add_func_uint64_t_u_u(0x66A132D5F2333E4FLL, ((*l_3072) = (((((safe_mod_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(0x2EE0L)), 14)) ^ ((*g_814) = (p_15 == ((0x13B2L & ((((*g_1802) &= (safe_mul_func_int16_t_s_s((l_3060 != (l_3061 = l_49)), (l_3071 ^= (g_1717 = ((((((**g_421)--) && ((safe_rshift_func_int16_t_s_u((l_3070 = ((l_3066 == l_3068[3][0]) != (*l_2943))), p_14)) && 3UL)) , p_15) , 0x9FA06DDDL) | 0L)))))) != p_14) , l_2998)) | p_15)))), 1L)) ^ p_14) ^ p_15) > g_2475[0][3]) && (*l_2943)))))), 0xD212L)) <= p_15) >= p_14) ^ l_2997)), 10));
                    for (l_2972 = 0; (l_2972 <= 1); l_2972 += 1)
                    {
                        int i, j, k;
                        (*g_100) &= (!((safe_lshift_func_int16_t_s_s((safe_div_func_int64_t_s_s((g_362[g_211][(l_2929 + 4)][l_2972] != (safe_mod_func_int8_t_s_s(((void*)0 != l_3080), 0x14L))), (safe_sub_func_uint16_t_u_u(g_362[l_2972][(g_211 + 3)][l_2972], (l_3083 = 0xB944L))))), 12)) | (g_362[g_211][(g_211 + 2)][g_211] > (safe_div_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((p_15 <= ((safe_div_func_int32_t_s_s(0x151B76C7L, 0x1C0A5DF9L)) >= 0xD5C5L)) != l_3023), 4L)), l_3090[0])))));
                    }
                }
            }
            l_3091++;
            for (l_2945 = 0; (l_2945 <= 6); l_2945 += 1)
            {
                union U0 l_3094 = {0x3A3D5378L};
                int64_t *l_3095 = &g_2564;
                int64_t *l_3096 = &g_1488;
                uint16_t ** const **l_3104 = &l_2816;
                uint16_t ** const ***l_3103 = &l_3104;
                int32_t l_3112 = 0xC0F69794L;
                uint16_t l_3113[9] = {0x3D3AL,0UL,0x3D3AL,0UL,0x3D3AL,0UL,0x3D3AL,0UL,0x3D3AL};
                union U1 l_3133 = {0xCC953613C67FDDDDLL};
                int16_t l_3151 = 7L;
                int32_t l_3159 = (-4L);
                int32_t l_3160 = 5L;
                int32_t l_3163[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_3163[i] = (-6L);
                l_3113[0] = ((((l_2911 , (g_770[l_2945] , ((*l_3096) = ((*l_3095) = (l_3094 , (-1L)))))) | (safe_mul_func_int8_t_s_s(0x5CL, ((g_770[(g_211 + 2)] , ((safe_add_func_uint64_t_u_u((g_770[(g_211 + 4)] | (p_15 || ((safe_add_func_int64_t_s_s((l_3112 |= ((g_3105 = l_3103) == &g_1326)), (**g_421))) , (*l_49)))), (*l_49))) , g_2802)) ^ 1L)))) < p_15) == 0xCB67D667L);
                if (l_3011[2][3])
                    continue;
                (*l_2943) &= (safe_rshift_func_int16_t_s_s(0x07A1L, 1));
                for (l_2937 = 6; (l_2937 >= 1); l_2937 -= 1)
                {
                    int32_t l_3126 = 0x4D31E326L;
                    int32_t l_3152 = 0x15043AF5L;
                    int32_t l_3153 = 0L;
                    int32_t l_3157 = 0x44EC96ECL;
                    int32_t l_3162 = 0x94636126L;
                    int16_t *l_3191 = &g_164;
                    int16_t **l_3190[7][8] = {{&l_3191,(void*)0,(void*)0,&l_3191,(void*)0,&l_3191,&l_3191,&l_3191},{&l_3191,&l_3191,&l_3191,&l_3191,&l_3191,&l_3191,(void*)0,(void*)0},{&l_3191,&l_3191,(void*)0,(void*)0,&l_3191,&l_3191,(void*)0,&l_3191},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_3191},{&l_3191,&l_3191,&l_3191,(void*)0,(void*)0,&l_3191,&l_3191,&l_3191},{&l_3191,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_3191,(void*)0,&l_3191,&l_3191,(void*)0,(void*)0,&l_3191,&l_3191}};
                    int i, j, k;
                    if ((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((((safe_mul_func_uint16_t_u_u(((l_3112 = (safe_add_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((((((-1L) == p_15) | (l_3126 || (safe_sub_func_uint16_t_u_u(((***l_2816) = (p_15 != (safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((((l_3133 , ((((l_3126 , ((*g_1678) = l_3133)) , (g_362[g_211][(g_211 + 4)][g_211] = (safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u(7UL, (((0x1C7BD95FL != (*l_2943)) == 0xBFB91DCDL) | p_14))) != l_3138), l_3001)))) != p_15) >= (-4L))) | p_14) != 0x6BDCC446L), p_15)), p_14)))), p_14)))) | 0x7B35L) == p_14) ^ (*g_422)), 65535UL)), p_14))) < (*l_49)), 5L)) != p_14) == l_3139) != l_3113[4]), (*l_49))), l_3140)))
                    {
                        int32_t l_3154 = 1L;
                        int32_t l_3155 = 0x87131721L;
                        int32_t l_3156 = 0x3994DAB1L;
                        int32_t l_3158 = (-7L);
                        int32_t l_3161[4] = {0xF80DA5CFL,0xF80DA5CFL,0xF80DA5CFL,0xF80DA5CFL};
                        int i;
                        (*g_100) ^= (safe_mul_func_int8_t_s_s(0x0BL, ((l_3143 != (void*)0) ^ (safe_mod_func_uint16_t_u_u(p_15, (safe_div_func_uint64_t_u_u(((**g_421)--), (-1L))))))));
                        --l_3164;
                        (*l_1975) = &p_15;
                    }
                    else
                    {
                        uint32_t l_3167 = 0x567F0F47L;
                        uint32_t * const **l_3180 = (void*)0;
                        uint32_t * const ***l_3179 = &l_3180;
                        if (l_3167)
                            break;
                        l_3159 |= (((safe_add_func_uint16_t_u_u((p_15 <= ((((*g_814) = 0xF4EE7B1EL) > (-1L)) ^ (0L & p_14))), (250UL > (*l_2943)))) , p_14) <= (safe_mod_func_uint32_t_u_u(p_14, p_15)));
                        (*g_100) = (((((((safe_div_func_uint8_t_u_u((~(safe_rshift_func_uint8_t_u_s(((void*)0 == l_3179), l_3163[2]))), l_3133.f0)) & (safe_mod_func_int32_t_s_s(((~(safe_rshift_func_uint16_t_u_s((((**g_813) |= ((safe_div_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(3UL, (l_3153 , (((((p_14 , (void*)0) == l_3190[5][6]) || l_3192) == 0x0DL) < p_14)))) > 65535UL), p_15)) && (*g_779))) & (-1L)), l_3167))) || l_3162), p_14))) ^ g_770[l_2945]) , (*g_482)) == p_14) || l_2923[0]) <= 0L);
                    }
                    (*l_1975) = func_66(l_3193, &l_3152, ((-10L) <= p_15), l_3193);
                    (*l_1975) = (void*)0;
                }
            }
            for (g_114 = 0; (g_114 <= 1); g_114 += 1)
            {
                uint32_t l_3199 = 0x415E59DFL;
                int32_t l_3202 = 3L;
                int32_t l_3203 = 0xFCC3E692L;
                int32_t l_3204 = 0x55A8032BL;
                int32_t l_3205[4];
                uint32_t l_3206[5][7][7] = {{{1UL,1UL,4294967286UL,0xF244B8BFL,0x645FB8D2L,0x8AFEB262L,7UL},{0xCC97568BL,4294967291UL,4294967290UL,0xB24801E0L,0xB94A369FL,9UL,0x031A9605L},{0x13B73F62L,0x645FB8D2L,1UL,0x2243E2EFL,4294967294UL,4294967291UL,4294967295UL},{0UL,0x1DA582A8L,4UL,4UL,0x1DA582A8L,0UL,0x58E5FA00L},{0x7C5991D0L,0x9FF23213L,3UL,4294967295UL,0x39BC5442L,0x8E8FC60DL,4294967288UL},{1UL,4294967290UL,0xBDE7880EL,0xD5B29447L,0x47FC0FF3L,4294967295UL,0xB24801E0L},{4294967295UL,0x9FF23213L,0x13B73F62L,0xD78F751EL,4294967295UL,4294967295UL,0x39BC5442L}},{{1UL,0x1DA582A8L,7UL,9UL,0xA91BEE07L,0xD5B29447L,4294967295UL},{1UL,0x645FB8D2L,4294967295UL,0UL,0x13B73F62L,8UL,3UL},{0xB96E65A4L,4294967291UL,0x63AC10BEL,0x1DA582A8L,0x1B1D67CCL,4294967290UL,0x1B1D67CCL},{0xDC473463L,1UL,1UL,0xDC473463L,4294967295UL,0x548F8D7AL,0x7C5991D0L},{0xA39BBCFCL,4294967286UL,0x9848CE83L,0xA397AD72L,4294967291UL,6UL,0x09C7CD9DL},{0x548F8D7AL,4294967286UL,4294967295UL,4294967291UL,1UL,3UL,0x7C5991D0L},{0UL,4294967294UL,1UL,0x58E5FA00L,0xACEB4976L,0x26A87DC8L,0x1B1D67CCL}},{{0x2325BE48L,0UL,4294967289UL,0x7C5991D0L,0UL,4294967295UL,3UL},{0xFF051CC2L,1UL,0xA91BEE07L,0xA39BBCFCL,0xE3FF7B6DL,4294967294UL,4294967295UL},{0UL,0xDC473463L,0x39BC5442L,0x1FBCE679L,0x8048FD6FL,0x1FBCE679L,0x39BC5442L},{0x031A9605L,0x031A9605L,0xA397AD72L,0x63AC10BEL,2UL,0xE3FF7B6DL,0xB24801E0L},{0UL,0xF244B8BFL,4294967295UL,0xDC473463L,0x2243E2EFL,0x2325BE48L,1UL},{0xFF051CC2L,0xCC97568BL,0x031A9605L,0xB94A369FL,0xA91BEE07L,4294967291UL,0x39D0F395L},{4294967295UL,4294967295UL,0x8AFEB262L,4294967295UL,4294967293UL,0UL,0UL}},{{0x26A87DC8L,4294967290UL,7UL,2UL,4UL,1UL,6UL},{0x7C5991D0L,0x8E8FC60DL,3UL,4294967289UL,0x645FB8D2L,0UL,1UL},{0xD5B29447L,0xB94A369FL,0x7F6F30AAL,4294967294UL,0x7F6F30AAL,0xB94A369FL,0xD5B29447L},{0x645FB8D2L,0UL,4294967289UL,0UL,5UL,0x8AFEB262L,5UL},{0xA91BEE07L,0x031A9605L,0x58E5FA00L,1UL,0x47FC0FF3L,0xBDE7880EL,0xA39BBCFCL},{0xF244B8BFL,4294967293UL,4294967289UL,4294967294UL,0UL,0UL,4294967295UL},{4294967294UL,0x39D0F395L,0x7F6F30AAL,0UL,1UL,9UL,0x09C7CD9DL}},{{0x2325BE48L,0x9C65B706L,3UL,0UL,4294967288UL,0x548F8D7AL,0UL},{0x1B1D67CCL,1UL,7UL,1UL,0xFF051CC2L,0x7F6F30AAL,0x7F6F30AAL},{4294967293UL,0x2243E2EFL,0x8AFEB262L,0x2243E2EFL,4294967293UL,0x9FF23213L,0x2325BE48L},{0x39D0F395L,0x09C7CD9DL,0x031A9605L,9UL,0xB94A369FL,0xB24801E0L,4294967290UL},{0x8AFEB262L,1UL,4294967295UL,4294967295UL,0x9FF23213L,0x13B73F62L,0xD78F751EL},{0x39D0F395L,9UL,0xA39BBCFCL,1UL,7UL,0x63AC10BEL,1UL},{4294967293UL,0UL,0x9FF23213L,0UL,1UL,1UL,4294967294UL}}};
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_3205[i] = (-1L);
                if ((((safe_lshift_func_uint8_t_u_u(255UL, 1)) ^ (((p_14++) <= (*g_814)) || (-2L))) && 4294967295UL))
                {
                    (*l_2943) |= ((void*)0 != l_3198);
                    --l_3199;
                    for (l_3139 = 0; (l_3139 <= 1); l_3139 += 1)
                    {
                        return (**g_778);
                    }
                    for (g_2802 = 0; (g_2802 <= 1); g_2802 += 1)
                    {
                        (*l_2943) = p_14;
                        p_15 ^= (6UL != (*l_49));
                        (*g_100) = 0x4989473AL;
                    }
                }
                else
                {
                    return p_14;
                }
                l_3206[2][5][6]--;
                for (l_2857 = 1; (l_2857 >= 0); l_2857 -= 1)
                {
                    (*l_2943) &= (*g_100);
                }
            }
        }
    }
    return p_15;
}







static int32_t ** func_17(uint64_t p_18, uint32_t p_19, const uint32_t p_20, uint8_t p_21)
{
    int32_t *l_23 = (void*)0;
    int32_t **l_22 = &l_23;
    int32_t *l_24 = &g_25;
    l_24 = ((*l_22) = (void*)0);
    return &g_2;
}







static int8_t func_29(int8_t p_30)
{
    uint8_t l_1976 = 0xBEL;
    union U1 l_1979[3][1] = {{{-1L}},{{-1L}},{{-1L}}};
    const union U0 l_1982 = {0x73172649L};
    int8_t ***l_1983[1];
    uint32_t l_1988 = 4UL;
    uint16_t l_1991 = 0x70DBL;
    int32_t l_1992 = 0x75FDF553L;
    uint64_t l_1993 = 6UL;
    int32_t l_2006 = 0L;
    int32_t l_2008[2][8] = {{0x5713728BL,0x5713728BL,0x5713728BL,0x5713728BL,0x5713728BL,0x5713728BL,0x5713728BL,0x5713728BL},{0x5713728BL,0x5713728BL,0x5713728BL,0x5713728BL,0x5713728BL,0x5713728BL,0x5713728BL,0x5713728BL}};
    uint16_t l_2034 = 0x04ADL;
    int32_t l_2043[6][8] = {{0xF186654FL,0x4B3E861DL,(-1L),1L,8L,1L,(-1L),0x4B3E861DL},{(-4L),0x87EE6DA2L,0xE1ECEB5AL,0L,0xD5B4CEEFL,0x20B98E79L,(-1L),(-1L)},{0x4B3E861DL,1L,0x266B91F1L,(-1L),(-4L),(-4L),(-1L),0x266B91F1L},{(-1L),(-1L),0xE1ECEB5AL,0x20B98E79L,0xA875C252L,0x8B46EB9FL,(-1L),0xF186654FL},{0xA875C252L,0x8B46EB9FL,(-1L),0xF186654FL,0x2BFEFBA0L,0x266B91F1L,0x2BFEFBA0L,0xF186654FL},{0x8B46EB9FL,0xE1ECEB5AL,0x8B46EB9FL,0x20B98E79L,(-2L),0x4B3E861DL,1L,0x266B91F1L}};
    int64_t *l_2100 = &g_1488;
    uint32_t ***l_2123 = &g_2036;
    uint64_t **l_2132 = &g_422;
    int64_t ****l_2134 = &g_1621[5][2][1];
    uint16_t ****l_2138 = &g_777;
    uint16_t *****l_2137 = &l_2138;
    union U1 *l_2162 = &l_1979[2][0];
    union U1 **l_2161 = &l_2162;
    int32_t *l_2202[2];
    uint32_t l_2210 = 4294967291UL;
    int32_t ***l_2220 = &g_655;
    int32_t ****l_2219 = &l_2220;
    int16_t l_2287 = 0xF3C0L;
    int32_t l_2292 = 0x8726DD10L;
    int32_t l_2358 = 0x74DE6321L;
    int32_t ***l_2378 = &g_231;
    int16_t l_2408[6];
    int16_t l_2468 = 0x50B0L;
    int64_t l_2472 = 0x12A1C68D558BEE2BLL;
    union U0 *l_2553 = (void*)0;
    union U0 **l_2552 = &l_2553;
    int8_t l_2586 = 0xFBL;
    int32_t l_2662 = 1L;
    int32_t l_2687 = 0L;
    int64_t *****l_2694 = (void*)0;
    union U0 l_2745 = {0x09C19153L};
    int i, j;
    for (i = 0; i < 1; i++)
        l_1983[i] = &g_1967;
    for (i = 0; i < 2; i++)
        l_2202[i] = &l_2006;
    for (i = 0; i < 6; i++)
        l_2408[i] = 0L;
lbl_2669:
    --l_1976;
    if ((0xC4A134483DCF104BLL != (((l_1979[2][0] , ((safe_add_func_uint64_t_u_u(((**g_421) = l_1976), ((l_1982 , l_1979[2][0].f0) , (l_1992 = ((((l_1983[0] != ((safe_sub_func_uint32_t_u_u((((((safe_add_func_int32_t_s_s(((p_30 <= (l_1988 <= (((safe_sub_func_int32_t_s_s((l_1988 ^ l_1991), 0xB231296AL)) >= 255UL) && l_1992))) == 0x292C3BC7C0704716LL), 0x21A9D234L)) <= g_394) < l_1988) , l_1982.f0) , l_1976), p_30)) , &g_1967)) ^ p_30) ^ p_30) , l_1991))))) , l_1979[2][0].f0)) <= 0x992AE99977447FC9LL) | l_1993)))
    {
        int32_t l_2005 = 0x7E7DC54FL;
        int32_t l_2007 = 0xBB6489DEL;
        int32_t l_2009 = 0xEAFFAC62L;
        int32_t l_2010 = 4L;
        uint8_t **l_2015 = &g_217;
        uint8_t *** const l_2014[10] = {&l_2015,&l_2015,&l_2015,&l_2015,&l_2015,&l_2015,&l_2015,&l_2015,&l_2015,&l_2015};
        uint64_t ***l_2026 = &g_421;
        union U0 *l_2035 = (void*)0;
        uint32_t *l_2038 = &l_1988;
        uint32_t **l_2037[4][5] = {{&l_2038,&l_2038,&l_2038,&l_2038,&l_2038},{&l_2038,&l_2038,&l_2038,&l_2038,&l_2038},{&l_2038,&l_2038,&l_2038,&l_2038,&l_2038},{&l_2038,&l_2038,&l_2038,&l_2038,&l_2038}};
        int32_t *l_2057 = &g_394;
        int16_t l_2068 = 0x5CB3L;
        int64_t **l_2089[7] = {&g_727,&g_727,&g_727,&g_727,&g_727,&g_727,&g_727};
        int64_t * const l_2099 = &g_650;
        int16_t *l_2109 = &l_2068;
        uint32_t ****l_2124[4] = {&l_2123,&l_2123,&l_2123,&l_2123};
        union U1 l_2131 = {3L};
        int32_t l_2133[7] = {0x8319B20EL,0x8319B20EL,0x8319B20EL,0x8319B20EL,0x8319B20EL,0x8319B20EL,0x8319B20EL};
        uint32_t l_2145 = 0UL;
        int64_t l_2148 = (-1L);
        int32_t *l_2149 = (void*)0;
        int32_t *l_2150 = &g_394;
        int32_t *l_2151 = &l_2007;
        int32_t *l_2152 = (void*)0;
        uint16_t l_2153[7][10] = {{1UL,65535UL,65535UL,0UL,0xAF31L,65535UL,0xA124L,65535UL,0xAF31L,0UL},{65535UL,0xA124L,65535UL,0xAF31L,0UL,65535UL,65535UL,1UL,0xAF31L,0xAF31L},{1UL,0xA124L,65531UL,0UL,0UL,65531UL,0xA124L,1UL,8UL,0UL},{1UL,65535UL,65535UL,0UL,0xAF31L,65535UL,0xA124L,65535UL,0xAF31L,0UL},{65535UL,0xA124L,65535UL,0xAF31L,0UL,65535UL,65535UL,1UL,0xAF31L,0xAF31L},{1UL,0xA124L,65531UL,0UL,0UL,65531UL,0xA124L,1UL,8UL,0UL},{1UL,65535UL,65535UL,0UL,0xAF31L,65535UL,0xA124L,65535UL,0xAF31L,0UL}};
        uint32_t l_2199[9] = {0x93A17D06L,0x93A17D06L,0x93A17D06L,0x93A17D06L,0x93A17D06L,0x93A17D06L,0x93A17D06L,0x93A17D06L,0x93A17D06L};
        uint32_t l_2234 = 18446744073709551609UL;
        int32_t l_2263 = 2L;
        int32_t l_2266[7][8] = {{4L,0L,0L,(-1L),(-1L),0L,0L,4L},{0L,(-1L),4L,(-4L),4L,(-1L),0L,0L},{(-1L),(-4L),0L,0L,(-4L),(-1L),(-1L),(-1L)},{(-4L),(-1L),(-1L),(-1L),(-4L),0L,0L,(-4L)},{(-1L),0L,0L,(-1L),4L,(-4L),4L,(-1L)},{0L,4L,0L,0L,(-1L),(-1L),0L,0L},{4L,4L,(-1L),(-4L),(-7L),(-4L),(-1L),4L}};
        int64_t ** const *l_2280 = &g_726;
        int64_t ** const **l_2279 = &l_2280;
        int64_t ** const *** const l_2278 = &l_2279;
        union U1 ****l_2313[9] = {(void*)0,&g_1259,&g_1259,(void*)0,&g_1259,&g_1259,(void*)0,&g_1259,&g_1259};
        int32_t l_2389 = 0xA41C3F26L;
        uint32_t l_2393 = 0xBB98BBFAL;
        union U0 l_2413[8] = {{9L},{9L},{9L},{9L},{9L},{9L},{9L},{9L}};
        uint8_t l_2433 = 249UL;
        int8_t l_2473 = 0xA7L;
        int64_t *****l_2525[10] = {&l_2134,&l_2134,&l_2134,&l_2134,&l_2134,&l_2134,&l_2134,&l_2134,&l_2134,&l_2134};
        uint8_t l_2563[5][3][4] = {{{0x94L,0x5DL,0x5DL,0x94L},{0x5DL,0x94L,0x5DL,0x5DL},{0x94L,0x94L,8UL,0x94L}},{{0x94L,0x5DL,0x5DL,0x94L},{0x5DL,0x94L,0x5DL,0x5DL},{0x94L,0x94L,8UL,0x94L}},{{0x94L,0x5DL,0x5DL,0x94L},{0x5DL,0x94L,0x5DL,0x5DL},{0x94L,0x94L,8UL,0x94L}},{{0x94L,0x5DL,0x5DL,0x94L},{0x5DL,0x94L,0x5DL,0x5DL},{0x94L,0x94L,8UL,0x94L}},{{0x94L,0x5DL,0x5DL,0x94L},{0x5DL,0x94L,0x5DL,0x5DL},{0x94L,0x94L,8UL,0x94L}}};
        int32_t ***l_2583 = &g_231;
        const uint16_t ** const * const l_2602 = (void*)0;
        const uint16_t ** const * const *l_2601 = &l_2602;
        int i, j, k;
        for (g_87.f0 = 0; (g_87.f0 != 18); ++g_87.f0)
        {
            int32_t *l_1996 = &l_1992;
            int32_t *l_1997 = &g_394;
            int32_t *l_1998 = &g_53;
            int32_t *l_1999 = &l_1992;
            int32_t *l_2000 = &g_53;
            int32_t *l_2001 = &l_1992;
            int32_t *l_2002 = &l_1992;
            int32_t *l_2003 = &g_53;
            int32_t *l_2004[3];
            uint32_t l_2011[7] = {0UL,0x4D9551ACL,0x4D9551ACL,0UL,0x4D9551ACL,0x4D9551ACL,0UL};
            int32_t ** const *l_2021 = &g_655;
            int32_t ** const **l_2020[2][3] = {{&l_2021,&l_2021,&l_2021},{&l_2021,&l_2021,&l_2021}};
            int64_t *l_2022[5];
            uint64_t ***l_2025[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint64_t ****l_2024 = &l_2025[1];
            int16_t *l_2027 = &g_164;
            union U0 l_2077 = {0x5B765BFCL};
            int i, j;
            for (i = 0; i < 3; i++)
                l_2004[i] = &l_1992;
            for (i = 0; i < 5; i++)
                l_2022[i] = &g_650;
            for (g_1775 = 0; (g_1775 <= 2); g_1775 += 1)
            {
                int i;
                (*g_100) ^= g_333[(g_1775 + 2)];
            }
            l_2011[1]++;
            if ((l_2014[4] == ((((safe_mul_func_uint16_t_u_u((l_2005 , (*l_2003)), ((*l_1996) >= (l_2009 = (safe_sub_func_int8_t_s_s((l_2020[1][2] == &l_2021), 0x8AL)))))) <= (l_1992 <= (~((*l_2027) |= ((p_30 = (((((*l_2024) = ((*g_457) = ((l_1982 , l_1992) , (void*)0))) != l_2026) == l_2007) & p_30)) , g_131))))) != 0x37AA4920L) , &l_2015)))
            {
                uint32_t ***l_2039 = (void*)0;
                uint32_t ***l_2040 = &l_2037[2][2];
                l_2035 = (((safe_div_func_int64_t_s_s((((1UL | (0x53A92EFC3E163722LL <= (safe_div_func_uint32_t_u_u(((((*g_456) = (*g_456)) == (p_30 , &l_2025[1])) >= (safe_add_func_uint16_t_u_u((0x692E08C5C58F2C94LL | p_30), (0L <= (((**g_813) || p_30) , l_1991))))), p_30)))) != (*l_2000)) <= p_30), l_2034)) < l_1979[2][0].f0) , l_2035);
                (*l_2001) = (g_2036 != ((*l_2040) = l_2037[2][0]));
            }
            else
            {
                uint32_t l_2055 = 0xBB5FF4BFL;
                int16_t *l_2108 = &g_1717;
                int32_t l_2115 = 0x6173948BL;
                for (g_118 = (-7); (g_118 < 58); g_118 = safe_add_func_uint16_t_u_u(g_118, 7))
                {
                    const union U0 l_2052 = {-1L};
                    int32_t l_2056[1];
                    int16_t *l_2084[6][1] = {{&g_84},{&g_1717},{&g_84},{&g_1717},{&g_84},{&g_1717}};
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_2056[i] = (-1L);
                    l_2057 = func_35((*g_1802), (g_368 < l_2034), ((l_2043[3][4] != ((-4L) > ((**g_778) = ((l_2010 = (safe_lshift_func_uint8_t_u_s(((l_2056[0] = (((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((*l_2003) |= ((l_2052 , (l_2010 , (safe_lshift_func_uint8_t_u_u(((*g_814) , ((l_2009 &= p_30) && 0xBF9D132A50843326LL)), l_2055)))) != 3UL)), p_30)), (-10L))) < p_30) , 7L)) > 3UL), p_30))) != 0x53CB3DD6FB8CF873LL)))) & 1UL), l_2052.f0);
                    l_2057 = func_72((((safe_mul_func_uint16_t_u_u(l_2055, ((p_30 , p_30) , (safe_mul_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(l_2055, (l_2055 ^ (safe_mod_func_int8_t_s_s(p_30, 0x97L))))) == (safe_rshift_func_uint16_t_u_s(((***g_777) |= l_2056[0]), p_30))) ^ 0x36336C5FA4ACE7F0LL), p_30))))) == 5UL) | l_2068), (**g_813), l_2055, &g_482, p_30);
                    if (g_1775)
                        goto lbl_2141;
                    (*l_1998) ^= p_30;
                    (*l_2000) &= ((safe_add_func_uint16_t_u_u(((*g_482) && (safe_lshift_func_int16_t_s_u((l_2055 == ((safe_lshift_func_uint8_t_u_u(((l_2056[0] = p_30) , 0UL), 1)) , ((safe_mod_func_uint64_t_u_u(((l_2077 , p_30) < (((safe_rshift_func_uint16_t_u_u((g_1028 , ((safe_sub_func_uint64_t_u_u(((g_770[4] = ((*l_2027) = (safe_rshift_func_uint16_t_u_s(p_30, g_394)))) | (**g_778)), (*l_2002))) || p_30)), p_30)) & p_30) , 247UL)), (*l_2001))) || l_2055))), p_30))), p_30)) , p_30);
                }
                for (l_2010 = 2; (l_2010 < (-14)); l_2010--)
                {
                    int64_t **l_2090 = &g_727;
                    int8_t l_2101 = 0xCAL;
                    for (l_2068 = 0; (l_2068 >= (-27)); l_2068 = safe_sub_func_int64_t_s_s(l_2068, 1))
                    {
                        return p_30;
                    }
                    if (p_30)
                        break;
                    if ((l_2089[0] == l_2090))
                    {
                        return p_30;
                    }
                    else
                    {
                        union U0 l_2098 = {4L};
                        int32_t **l_2102 = &l_2000;
                        int16_t **l_2105 = (void*)0;
                        int16_t **l_2106 = (void*)0;
                        int16_t **l_2107 = (void*)0;
                        (*l_2102) = func_72((((*l_2027) = ((&g_1621[6][4][0] != &g_1621[4][2][1]) > ((safe_lshift_func_uint8_t_u_u(0xEDL, (safe_mul_func_int8_t_s_s((l_2101 = (safe_add_func_uint64_t_u_u((&g_84 == (void*)0), (!((l_2098 , ((((l_2099 != ((*l_2090) = l_2100)) >= p_30) <= 0x3A61L) > 1L)) >= p_30))))), l_2055)))) <= g_53))) != p_30), (*g_814), g_770[4], &g_482, p_30);
                        if ((*l_2057))
                            break;
                        (*l_1996) &= (((*g_814) != p_30) || (safe_div_func_int16_t_s_s(((((l_2109 = (l_2108 = &g_770[4])) == &l_2068) > ((*g_1802) |= ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((**g_456) = (*l_2024)) != (void*)0), p_30)), (l_2115 = ((safe_unary_minus_func_uint64_t_u((((**l_2102) != (0xEEL || 0xAFL)) >= 4294967295UL))) , 0xAAL)))) >= (**l_2102)))) || l_2115), 0xEA38L)));
                        if (p_30)
                            break;
                    }
                }
                (*g_100) = (250UL < (((((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((p_30 = 0xEBL), (*l_2000))), 13)) ^ l_2008[1][1]) | (l_2006 || (l_1979[2][0].f0 != l_2115))) >= (*l_2001)) | (((65531UL | 65535UL) ^ (*l_1998)) && l_1991)));
                (*l_2003) = ((*l_1996) |= (-9L));
                if (l_2115)
                    goto lbl_2142;
            }
        }
        (*g_100) ^= (((((!(l_1982 , (((0x5DB5A26CDEE94CCBLL > (((g_2125 = l_2123) == ((safe_unary_minus_func_uint32_t_u((safe_add_func_uint64_t_u_u((((((p_30 == (((((safe_div_func_uint8_t_u_u((p_30 | ((l_2131 , (l_2132 = &g_422)) != (void*)0)), (-1L))) <= (*l_2057)) > (***g_777)) & p_30) , p_30)) | (*l_2057)) | p_30) ^ g_1028) , p_30), l_1976)))) , &g_2036)) != (*l_2057))) == p_30) > p_30))) >= (-3L)) <= (***g_777)) , 0xD2L) , l_2133[2]);
        if (((((p_30 = ((*g_779) || (((((l_2134 != &g_1621[4][6][0]) , (p_30 > ((**g_813) , (safe_add_func_int64_t_s_s(p_30, (l_2131 , (((((l_2137 != ((1L < p_30) , (void*)0)) & p_30) | 0xA780915D2BB399D6LL) && p_30) & (*l_2057)))))))) > (*g_814)) == p_30) , p_30))) ^ 0xDDL) > (*l_2057)) , (*g_482)))
        {
lbl_2141:
            for (g_363 = 0; (g_363 >= 52); g_363++)
            {
                (*g_100) ^= (0x90L >= 0xA9L);
            }
lbl_2142:
            (*g_100) = (*g_100);
            (*g_100) ^= (safe_add_func_int16_t_s_s(0L, (l_2145 || ((safe_add_func_uint8_t_u_u(l_2043[3][4], (l_2006 |= (p_30 | l_2008[0][3])))) , (p_30 , (*l_2057))))));
            l_2153[1][1]--;
        }
        else
        {
            union U0 l_2159 = {-7L};
            union U1 ***l_2160 = (void*)0;
            uint64_t l_2227 = 0UL;
            uint8_t * const l_2228 = &g_1028;
            uint64_t *****l_2233 = (void*)0;
            int32_t l_2248 = 0xB4FC89CDL;
            int32_t l_2254 = 0x4A55CD80L;
            int32_t l_2265 = (-1L);
            int32_t l_2267[9] = {0x7758C231L,0x7758C231L,0x7758C231L,0x7758C231L,0x7758C231L,0x7758C231L,0x7758C231L,0x7758C231L,0x7758C231L};
            int32_t *l_2294[1][10][7] = {{{&l_2263,&l_1992,(void*)0,&l_2263,&l_2266[0][5],&g_394,(void*)0},{&l_2265,&l_2006,&l_1992,&g_394,(void*)0,&g_394,&l_1992},{(void*)0,(void*)0,&l_2265,&l_2043[3][6],&l_2006,(void*)0,&l_2043[3][4]},{&l_2043[3][4],&g_394,&l_2008[1][4],(void*)0,&g_394,&l_2265,(void*)0},{&l_2266[0][5],(void*)0,&l_1992,&l_2008[0][3],&l_2006,&l_2043[5][5],&l_2008[0][3]},{&l_2043[3][6],&l_2265,&g_25,&l_2007,(void*)0,&g_25,&l_2043[3][4]},{&l_2263,&l_2008[1][4],&l_2266[0][5],&l_2007,&l_2266[0][5],&l_2008[1][4],&l_2263},{&l_2008[1][4],(void*)0,&l_2265,&l_2008[0][3],(void*)0,&l_2266[0][5],&l_2043[3][4]},{(void*)0,(void*)0,&l_2265,(void*)0,&l_2043[3][6],(void*)0,&l_2007},{&l_2263,&l_2043[5][5],&l_2265,&l_2043[3][6],(void*)0,&l_2265,&l_2006}}};
            int16_t *l_2310[7][9][4] = {{{&g_1313,(void*)0,&g_770[4],(void*)0},{&l_2068,&g_1717,&g_1485,&g_770[4]},{&g_164,&l_2287,(void*)0,&l_2068},{&g_1313,&g_770[4],&g_1313,&g_1717},{&g_770[4],&g_1717,&g_1717,&g_164},{&g_1717,&g_84,&g_770[4],&g_1717},{&g_164,(void*)0,&g_770[4],&g_1485},{&g_1717,(void*)0,&g_1717,&g_770[4]},{&g_770[4],&g_770[4],&g_164,&g_84}},{{&g_164,&g_84,&g_1485,&g_1485},{&g_164,&g_164,&l_2068,&l_2287},{(void*)0,&g_84,&g_1717,&g_1313},{&g_164,&l_2287,&g_1717,&g_1717},{&g_84,&l_2287,&g_1717,&g_1313},{&l_2287,&g_84,&g_1485,&l_2287},{&g_164,&g_164,&g_84,&g_1485},{&g_84,&g_84,&g_1717,&g_84},{(void*)0,&g_770[4],&g_164,&g_770[4]}},{{&g_164,(void*)0,&g_770[4],&g_1485},{&g_1313,(void*)0,&l_2068,&g_1717},{&g_1313,&g_84,&g_770[4],&g_164},{&g_164,&g_1717,&g_164,&g_1717},{(void*)0,&g_84,&g_1717,(void*)0},{&g_84,&g_84,&g_84,&g_84},{&g_164,&g_1313,&g_1485,&g_1485},{&l_2287,&g_770[4],&g_1717,(void*)0},{&g_84,&g_770[4],&g_1717,(void*)0}},{{&g_164,&g_770[4],&g_1717,&g_1485},{(void*)0,&g_1313,&l_2068,&g_84},{&g_164,&g_84,&g_1485,(void*)0},{&g_164,&g_84,&g_164,&g_1717},{&g_770[4],&g_1717,&g_1717,&g_164},{&g_1717,&g_84,&g_770[4],&g_1717},{&g_164,(void*)0,&g_770[4],&g_1485},{&g_1717,(void*)0,&g_1717,&g_770[4]},{&g_770[4],&g_770[4],&g_164,&g_84}},{{&g_164,&g_84,&g_1485,&g_1485},{&g_164,&g_164,&l_2068,&l_2287},{(void*)0,&g_84,&g_1717,&g_1313},{&g_164,&l_2287,&g_1717,&g_1717},{&g_84,&l_2287,&g_1717,&g_1313},{&l_2287,&g_84,&g_1485,&l_2287},{&g_164,&g_164,&g_84,&g_1485},{&g_84,&g_84,&g_1717,&g_84},{(void*)0,&g_770[4],&g_164,&g_770[4]}},{{&g_164,(void*)0,&g_770[4],&g_1485},{&g_1313,(void*)0,&l_2068,&g_1717},{&g_1313,&g_84,&g_770[4],&g_164},{&g_164,&g_1717,&g_164,&g_1717},{(void*)0,&g_84,&g_1717,(void*)0},{&g_84,&g_84,&g_84,&g_84},{&g_164,&g_1313,&l_2068,&g_770[4]},{&g_84,&g_1717,&g_1313,&g_1485},{&g_770[4],&g_1717,(void*)0,&g_1485}},{{&l_2287,&g_1717,&l_2287,&g_770[4]},{&g_164,&g_164,(void*)0,&g_1485},{&g_1717,&g_164,&g_770[4],&g_164},{&l_2287,&g_1485,&l_2287,&l_2287},{&g_1717,&g_770[4],&g_1313,&g_1717},{&g_770[4],&g_164,&g_1717,&g_770[4]},{(void*)0,&g_164,&g_1717,&g_770[4]},{&g_770[4],&g_1485,&g_1313,&g_1717},{&g_1717,&g_1717,&l_2287,&g_770[4]}}};
            int32_t *l_2337[2][9][1] = {{{&l_2133[2]},{&g_333[5]},{&l_2133[0]},{&g_333[5]},{&l_2133[2]},{&l_2133[1]},{&l_2133[1]},{&l_2133[2]},{&g_333[5]}},{{&l_2133[0]},{&g_333[5]},{&l_2133[2]},{&l_2133[1]},{&l_2133[1]},{&l_2133[2]},{&g_333[5]},{&l_2133[0]},{&g_333[5]}}};
            int32_t **l_2336 = &l_2337[0][4][0];
            const int64_t *l_2342 = (void*)0;
            const int16_t l_2344 = 9L;
            int i, j, k;
            if (((*l_2150) = (((safe_lshift_func_int16_t_s_s(p_30, 4)) < 0xEA72L) || ((((~g_118) > (((((p_30 , l_2159) , ((((*g_1678) = l_1979[0][0]) , &g_1065[4]) != (l_2161 = &g_1678))) < (4294967292UL == (*g_100))) | p_30) & p_30)) == l_2159.f0) != 0x15D2C3574787CBDBLL))))
            {
                int32_t ***l_2183 = &g_655;
                int32_t ****l_2182[10][1][10] = {{{&l_2183,&l_2183,&l_2183,&l_2183,(void*)0,&l_2183,&l_2183,(void*)0,&l_2183,&l_2183}},{{&l_2183,&l_2183,&l_2183,&l_2183,(void*)0,&l_2183,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_2183,&l_2183,&l_2183,&l_2183,&l_2183,&l_2183,&l_2183,(void*)0,(void*)0}},{{&l_2183,(void*)0,&l_2183,&l_2183,(void*)0,&l_2183,&l_2183,(void*)0,&l_2183,&l_2183}},{{&l_2183,&l_2183,&l_2183,&l_2183,&l_2183,&l_2183,(void*)0,&l_2183,&l_2183,(void*)0}},{{(void*)0,&l_2183,&l_2183,&l_2183,&l_2183,&l_2183,&l_2183,&l_2183,&l_2183,&l_2183}},{{&l_2183,&l_2183,&l_2183,&l_2183,&l_2183,&l_2183,&l_2183,(void*)0,(void*)0,(void*)0}},{{&l_2183,(void*)0,&l_2183,&l_2183,&l_2183,&l_2183,(void*)0,&l_2183,(void*)0,(void*)0}},{{(void*)0,&l_2183,&l_2183,&l_2183,&l_2183,&l_2183,&l_2183,(void*)0,&l_2183,&l_2183}},{{&l_2183,(void*)0,&l_2183,&l_2183,(void*)0,(void*)0,&l_2183,&l_2183,(void*)0,&l_2183}}};
                int32_t l_2184[7] = {0xF8EF8B48L,0xF8EF8B48L,0xF8EF8B48L,0xF8EF8B48L,0xF8EF8B48L,0xF8EF8B48L,0xF8EF8B48L};
                int32_t l_2208 = (-4L);
                uint64_t **** const *l_2232 = &g_457;
                int32_t l_2247 = (-1L);
                int32_t *l_2251[1];
                int64_t l_2270 = 0x04CC2ADA193FA8DCLL;
                int32_t l_2271 = 0xF2476AF6L;
                union U0 l_2275 = {-8L};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_2251[i] = (void*)0;
                if (((*l_2151) = ((safe_mod_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((void*)0 != l_2132), 12)), 1UL)) == (l_2159.f0 & (safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(g_394, 4)), (safe_sub_func_uint64_t_u_u((!(l_1976 && (safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(p_30, l_2006)), ((2L >= 0x47384F12L) ^ 0x5E9D0F7BL))))), p_30)))))), 5L)) , l_2182[5][0][3]) == (void*)0), (-6L))) != l_2184[0])))
                {
                    int32_t l_2195 = 0x762AA916L;
                    uint32_t *l_2196 = &l_2131.f1;
                    for (g_363 = 0; (g_363 <= 1); g_363 += 1)
                    {
                        if (p_30)
                            break;
                        l_1992 = (((safe_div_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((++g_362[0][2][0]), p_30)), (safe_div_func_uint16_t_u_u(l_2195, ((p_30 || ((((l_1982 , (((((l_2196 == ((safe_mod_func_uint16_t_u_u(((l_2199[5] == 0xD3L) < 0x1AE7L), (safe_div_func_uint16_t_u_u(9UL, 0x2642L)))) , l_2150)) || 0x81CAAAA3L) > p_30) , 0x7134L) | 0xC122L)) , p_30) || (*g_100)) , (*l_2150))) ^ 0x04F0D90DL))))) || l_2159.f0), 0xCF30L)) , p_30) | 0x7F40A761L);
                        l_2202[0] = l_2196;
                    }
                    g_212[1][0][6] = &l_2008[1][3];
                }
                else
                {
                    int32_t **l_2203 = &l_2202[0];
                    int32_t l_2209 = 0x0D8D5C70L;
                    const union U0 l_2217 = {0x92FD70E6L};
                    int32_t ****l_2218 = &l_2183;
                    (*l_2203) = (void*)0;
                    for (g_117 = 0; (g_117 >= (-19)); --g_117)
                    {
                        int64_t l_2206 = 0L;
                        int32_t l_2207[8][1][3] = {{{(-1L),(-1L),1L}},{{1L,0x80BBF118L,1L}},{{(-1L),1L,1L}},{{0xC8486E1DL,0x80BBF118L,0xC8486E1DL}},{{(-1L),(-1L),1L}},{{1L,0x80BBF118L,1L}},{{(-1L),1L,1L}},{{0xC8486E1DL,0x80BBF118L,0xC8486E1DL}}};
                        int i, j, k;
                        l_2210++;
                        (*g_100) ^= (safe_mod_func_uint8_t_u_u((((*l_2228) = ((((safe_sub_func_int16_t_s_s((l_2217 , ((((l_2219 = l_2218) != ((safe_mod_func_int32_t_s_s(0xC6608544L, (0x1D41L && (safe_rshift_func_uint16_t_u_s(((*g_779) = 0x7659L), 6))))) , (void*)0)) < (p_30 | (safe_div_func_int16_t_s_s((l_2227 || ((void*)0 == l_2228)), l_2207[3][0][0])))) <= (**g_813))), 0L)) >= l_2208) <= 0x69L) , p_30)) , 0x93L), 0x91L));
                        g_2229 = &g_655;
                    }
                }
                l_2248 = ((*g_422) == ((*l_2150) = (safe_rshift_func_int8_t_s_s(((((*g_1678) , l_2232) == l_2233) <= l_2234), (g_1193 ^= (safe_mod_func_uint16_t_u_u((**g_778), (safe_sub_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u((--(*l_2228)), 7L)) | (g_362[1][1][0] = (+((*g_100) = (+(l_2247 = (safe_mul_func_uint8_t_u_u(0x81L, ((((*l_2109) = g_1241) <= l_2227) < l_2159.f0))))))))), p_30)))))))));
                for (g_1241 = 0; g_1241 < 10; g_1241 += 1)
                {
                    for (l_2005 = 0; l_2005 < 1; l_2005 += 1)
                    {
                        for (l_2247 = 0; l_2247 < 10; l_2247 += 1)
                        {
                            l_2182[g_1241][l_2005][l_2247] = &g_2229;
                        }
                    }
                }
                for (l_1976 = 1; (l_1976 <= 5); l_1976 += 1)
                {
                    int32_t **l_2249 = &l_2151;
                    int32_t **l_2250 = &l_2152;
                    int32_t l_2252 = 0x89311055L;
                    int32_t l_2253 = 0x376BEBF0L;
                    int64_t l_2255 = (-4L);
                    int32_t l_2256 = 1L;
                    int32_t l_2257 = 0xF644599FL;
                    int32_t l_2258 = 0L;
                    int32_t l_2259 = 0L;
                    int32_t l_2260 = 0xC8BCB830L;
                    int32_t l_2261 = (-1L);
                    int32_t l_2262 = 0x6F09C54EL;
                    int32_t l_2264 = 1L;
                    int32_t l_2268 = 0xB62AB164L;
                    int32_t l_2269[7][5][6] = {{{4L,(-4L),0xD0BEC7A0L,5L,0L,(-6L)},{0L,0xD0BEC7A0L,(-9L),0xE4E2A6A9L,(-2L),1L},{0x2A488D4BL,0x42388C2AL,1L,8L,0xE170AE4FL,4L},{5L,0xC3E58A12L,(-1L),3L,(-1L),0xC3E58A12L},{(-1L),0xE170AE4FL,0x432ADD22L,(-6L),3L,5L}},{{0x805ACFE1L,0x9F5B1E06L,1L,0x4051932FL,4L,1L},{1L,0x9F5B1E06L,0x2A488D4BL,0xD63BD277L,3L,8L},{1L,0xE170AE4FL,0x42388C2AL,(-9L),(-1L),0x4FAFFE66L},{(-1L),0xC3E58A12L,(-1L),(-8L),0xE170AE4FL,0xCBCBF523L},{0x4FAFFE66L,0x42388C2AL,1L,8L,(-2L),0xD0BEC7A0L}},{{(-8L),0xD0BEC7A0L,(-1L),0xCBCBF523L,0L,3L},{0x4051932FL,(-4L),0xC3E58A12L,0x2A97DC5EL,0xD0B19FE6L,0x13487D1EL},{0x1B8ECEDBL,0xE4E2A6A9L,0L,0L,0xE4E2A6A9L,0x1B8ECEDBL},{(-1L),0x6667762DL,(-8L),0xF3AA05D0L,8L,(-1L)},{0xCBCBF523L,9L,7L,0x805ACFE1L,5L,5L}},{{0xCBCBF523L,(-1L),0x805ACFE1L,0xF3AA05D0L,0xC1E0AABEL,0x9F5B1E06L},{(-1L),8L,8L,0L,0xFBB7CE84L,0x1852D112L},{0x1B8ECEDBL,(-6L),8L,0x2A97DC5EL,(-1L),1L},{0x4051932FL,(-1L),4L,0xCBCBF523L,0x6667762DL,8L},{(-8L),0x13487D1EL,(-1L),8L,(-4L),(-2L)}},{{0x4FAFFE66L,1L,(-4L),(-8L),0xC3E58A12L,0x6667762DL},{(-1L),(-9L),0x4FAFFE66L,(-9L),(-1L),(-1L)},{1L,0x4051932FL,0x66E47F6DL,0xD63BD277L,8L,(-1L)},{1L,0x2A97DC5EL,5L,0x4051932FL,(-1L),(-1L)},{0x805ACFE1L,0x0AC8E96BL,0x66E47F6DL,(-6L),0L,(-1L)}},{{(-1L),(-2L),0x4FAFFE66L,3L,0x66E47F6DL,0x6667762DL},{5L,7L,(-4L),8L,0xFCB4D802L,(-2L)},{0x2A488D4BL,1L,(-1L),0xE4E2A6A9L,0x9F5B1E06L,8L},{0L,0xD0B19FE6L,4L,5L,0x2A488D4BL,1L},{4L,0x66E47F6DL,8L,0x2A488D4BL,0x1852D112L,0x1852D112L}},{{0x13487D1EL,8L,8L,0x13487D1EL,1L,0x9F5B1E06L},{0x2A488D4BL,8L,0x66E47F6DL,4L,0x13487D1EL,0xC3E58A12L},{(-6L),0x6667762DL,0x1852D112L,(-9L),0x13487D1EL,0x0AC8E96BL},{(-2L),8L,1L,0x42388C2AL,0x4FAFFE66L,(-9L)},{3L,0x4051932FL,(-6L),1L,0xD0B19FE6L,0xC691B77CL}}};
                    uint16_t l_2272 = 0xC564L;
                    int i, j, k;
                    l_2251[0] = ((*l_2250) = (l_2159 , ((*l_2249) = &l_2208)));
                    --l_2272;
                    if ((*g_100))
                        continue;
                    for (l_2253 = 1; (l_2253 >= 0); l_2253 -= 1)
                    {
                        union U0 l_2293 = {2L};
                        const uint8_t **l_2299 = (void*)0;
                        int i, j;
                        l_2294[0][1][6] = func_66(l_2275, func_35(l_2008[l_2253][(l_2253 + 5)], ((*l_2150) = 18446744073709551607UL), (((safe_add_func_int64_t_s_s(((l_2278 != (void*)0) < (safe_mul_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((safe_div_func_int32_t_s_s(((l_2287 , p_30) >= (safe_mod_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((1L <= 255UL), g_767)), 9L))), (**l_2249))), 0xEE242F2EF0FFA9F0LL)) & 0L), 0UL))), p_30)) >= (**l_2249)) | 0xC7D5AC8CL), p_30), l_2292, l_2293);
                        l_2008[l_2253][l_1976] |= (safe_mod_func_int32_t_s_s((safe_div_func_int64_t_s_s((&l_2228 != l_2299), 1UL)), (*g_482)));
                        (*l_2152) &= (safe_lshift_func_uint8_t_u_s(0x3AL, (!(-7L))));
                        (*l_2152) &= ((void*)0 == g_2303);
                    }
                }
            }
            else
            {
                int16_t *l_2312 = (void*)0;
                uint8_t l_2316[3][8][4] = {{{250UL,0x08L,0x47L,0UL},{0xC3L,0UL,0xC3L,0x47L},{0UL,0x7DL,0UL,0UL},{250UL,0x47L,0xFDL,0x7DL},{0x47L,0UL,0xFDL,0xFDL},{250UL,250UL,0UL,0UL},{0UL,0x1DL,0xC3L,0x7DL},{0xC3L,0x7DL,0x47L,0xC3L}},{{250UL,0x7DL,0x27L,0x7DL},{0x7DL,0x1DL,0xFDL,0UL},{0x08L,250UL,0x47L,0xFDL},{0UL,0UL,0x09L,0x7DL},{0UL,0x47L,0x47L,0UL},{0x08L,0x7DL,0xFDL,0x47L},{0x7DL,0UL,0x27L,0UL},{250UL,0x08L,0x47L,0UL}},{{0xC3L,0UL,0xC3L,0x47L},{0UL,0x7DL,0UL,0UL},{250UL,0x47L,0xFDL,0x7DL},{0x47L,0UL,0xFDL,0xFDL},{250UL,250UL,0UL,0UL},{0UL,0x1DL,0xC3L,0x7DL},{0xC3L,0x7DL,0x47L,0xC3L},{250UL,0x7DL,0x27L,0x7DL}}};
                int32_t *l_2335 = (void*)0;
                int32_t **l_2334 = &l_2335;
                const int64_t **l_2343 = &l_2342;
                int i, j, k;
                for (g_1028 = (-11); (g_1028 > 39); g_1028 = safe_add_func_uint16_t_u_u(g_1028, 4))
                {
                    int32_t *l_2315 = &g_394;
                    for (l_2006 = 5; (l_2006 >= 1); l_2006 -= 1)
                    {
                        union U0 l_2309 = {0xA13E250AL};
                        int16_t **l_2311 = &l_2109;
                        int32_t **l_2314[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i, j;
                        (*l_2151) = ((l_2043[l_2006][(l_2006 + 1)] = (safe_add_func_uint32_t_u_u(l_2043[l_2006][(l_2006 + 1)], ((l_2309 , (((*l_2162) , &g_1259) == ((((*l_2311) = l_2310[1][3][0]) != l_2312) , l_2313[0]))) <= ((0x6326L > (*g_779)) < 0x49C6AE55L))))) <= (**g_421));
                        l_2315 = &l_2263;
                        return p_30;
                    }
                    --l_2316[2][2][0];
                }
                (*l_2150) = (*g_482);
                (*g_100) = ((*l_2151) ^= (p_30 > ((p_30 , (***g_777)) >= (((*l_2100) = (safe_mul_func_int8_t_s_s(((((((*l_2228)--) > (((safe_unary_minus_func_int64_t_s((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s((*g_482), (*g_814))), l_2316[0][5][2])))) == ((safe_add_func_int8_t_s_s((l_2334 == ((*l_2220) = l_2336)), (safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((((*l_2343) = l_2342) == (****l_2278)), p_30)), 12)))) & 0UL)) , 0x71L)) < 0x46F2L) == l_2316[2][2][0]) <= l_2316[1][5][3]), p_30))) > l_2344))));
            }
            (*l_2150) = (((*l_2336) = &l_2133[2]) == &l_2133[2]);
            l_2294[0][1][6] = &l_2008[1][3];
        }
        for (l_2131.f1 = 0; (l_2131.f1 < 42); l_2131.f1++)
        {
            uint8_t **l_2347 = &g_217;
            int32_t l_2351 = 0x0B71DFB4L;
            int32_t l_2359[7] = {0x224FDA9CL,0x224FDA9CL,0x224FDA9CL,0x224FDA9CL,0x224FDA9CL,0x224FDA9CL,0x224FDA9CL};
            uint16_t l_2369 = 0x8084L;
            int8_t l_2370[3];
            union U1 l_2377 = {0L};
            int32_t *l_2422 = (void*)0;
            union U0 l_2431 = {1L};
            uint32_t l_2455 = 18446744073709551610UL;
            int64_t l_2474 = 0x3CDD0013A84C916BLL;
            uint16_t l_2476 = 65533UL;
            int64_t l_2547 = 0xC5CE13CD559CC15FLL;
            const uint16_t ** const * const **l_2603 = &l_2601;
            const uint16_t ** const * const **l_2604 = (void*)0;
            const uint16_t ** const * const *l_2606 = &l_2602;
            const uint16_t ** const * const **l_2605 = &l_2606;
            const uint16_t ** const * const **l_2607 = (void*)0;
            const uint16_t ** const * const *l_2609 = &l_2602;
            const uint16_t ** const * const **l_2608 = &l_2609;
            int i;
            for (i = 0; i < 3; i++)
                l_2370[i] = 0xF7L;
            if ((p_30 <= ((l_2347 == (*g_2303)) <= ((safe_mul_func_int8_t_s_s((((0x826D02A296EA8E69LL == (p_30 > ((~l_2351) && ((safe_mod_func_uint8_t_u_u(p_30, (l_2351 |= ((safe_rshift_func_uint16_t_u_u((l_2358 = ((((((*g_100) = (((*l_2150) |= (((*l_2100) = (safe_unary_minus_func_int16_t_s((!(-6L))))) , p_30)) || (-1L))) & (*g_1802)) && (**g_421)) , 0L) >= p_30)), p_30)) , 0xBEL)))) >= l_2359[4])))) && p_30) && 0x4809A2B2D58D190FLL), 0x75L)) , p_30))))
            {
                int32_t ****l_2365 = &g_230;
                int32_t *****l_2364 = &l_2365;
                int32_t l_2381[3];
                uint8_t l_2390 = 0UL;
                union U1 **** const l_2412[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint32_t l_2418 = 18446744073709551607UL;
                uint64_t l_2458[8][10][3] = {{{0x6D28C9C47F10029BLL,0x5629886859177D30LL,0xF691283DDD84540ALL},{18446744073709551615UL,1UL,0UL},{0xB7F981A2EC8B162ALL,1UL,0xF3CAF016A9C37930LL},{0UL,0xC29CCD04E46CC1EDLL,0UL},{0xDC66742B0F3C143BLL,0x241F9B2126B3C9C4LL,0xF1FE2502ABF76A82LL},{0xC29CCD04E46CC1EDLL,1UL,18446744073709551607UL},{1UL,0x9525CB8E06CC97E8LL,0x8345C61370819C7DLL},{6UL,0xE99D50DF8BCD272BLL,0x01D3E487BE48B410LL},{1UL,0x99D5E3954026DE08LL,0x12C0FDCC1D0C884FLL},{0xC29CCD04E46CC1EDLL,0x9EAC183AFC6DB580LL,1UL}},{{0xDC66742B0F3C143BLL,18446744073709551615UL,18446744073709551610UL},{0UL,0xC9D77EB23A9E8F89LL,18446744073709551614UL},{0xB7F981A2EC8B162ALL,0UL,18446744073709551615UL},{18446744073709551615UL,0x788378F62D697D9FLL,0x20B5A90BA6CF9D44LL},{0x6D28C9C47F10029BLL,0xDC66742B0F3C143BLL,0xF3A014E16D47EBBBLL},{1UL,18446744073709551615UL,0xBC4D93B9819FAE3FLL},{2UL,2UL,1UL},{18446744073709551615UL,0x35606793D22F0553LL,0x52A82C0D27F52E2FLL},{0xF1FE2502ABF76A82LL,18446744073709551606UL,0UL},{0UL,0xEFB73BEA6F1BE8DCLL,1UL}},{{1UL,7UL,0xF1FE2502ABF76A82LL},{18446744073709551612UL,18446744073709551612UL,0xCD8DBFD380D2B9B9LL},{18446744073709551606UL,0xDC66742B0F3C143BLL,7UL},{0xC29CCD04E46CC1EDLL,0x01D3E487BE48B410LL,0x788378F62D697D9FLL},{18446744073709551615UL,18446744073709551608UL,1UL},{0UL,0xC29CCD04E46CC1EDLL,0x788378F62D697D9FLL},{18446744073709551611UL,1UL,7UL},{18446744073709551607UL,1UL,0xCD8DBFD380D2B9B9LL},{1UL,0UL,0xF1FE2502ABF76A82LL},{18446744073709551615UL,18446744073709551615UL,1UL}},{{1UL,1UL,0UL},{0xEC4F5BB740180F1CLL,1UL,0x52A82C0D27F52E2FLL},{0x51C5A2FEA3223EADLL,0xCE8F5B15C7737430LL,1UL},{6UL,0x52A82C0D27F52E2FLL,0xBC4D93B9819FAE3FLL},{0xA362CAB29C44F058LL,0x9525CB8E06CC97E8LL,0xF3CAF016A9C37930LL},{0UL,1UL,0xC9D77EB23A9E8F89LL},{0xF3CAF016A9C37930LL,7UL,0x9B6320923F44C6D3LL},{1UL,1UL,0x35606793D22F0553LL},{2UL,0x6D28C9C47F10029BLL,0x6D28C9C47F10029BLL},{0xB93D66BEC812A10FLL,18446744073709551607UL,0xF1A5C17C091CF57CLL}},{{0x892A76D5D337562CLL,18446744073709551615UL,18446744073709551611UL},{18446744073709551611UL,0x6784784100FC00DBLL,18446744073709551615UL},{0UL,0x241F9B2126B3C9C4LL,1UL},{1UL,0x6784784100FC00DBLL,0UL},{1UL,18446744073709551615UL,2UL},{0xE99D50DF8BCD272BLL,18446744073709551607UL,1UL},{0x9B6320923F44C6D3LL,0x6D28C9C47F10029BLL,0UL},{0x01D3E487BE48B410LL,1UL,1UL},{0xE57EAD49E10849B5LL,7UL,0x8345C61370819C7DLL},{0UL,1UL,0x422B1043792A235DLL}},{{0UL,0x9525CB8E06CC97E8LL,18446744073709551607UL},{0xD32078E28AAB4918LL,0x52A82C0D27F52E2FLL,0x81121B054E2E740DLL},{1UL,0xCE8F5B15C7737430LL,1UL},{18446744073709551614UL,1UL,1UL},{0x6D28C9C47F10029BLL,1UL,18446744073709551615UL},{0x6710AEF6A1A9C6E4LL,18446744073709551615UL,0UL},{6UL,0UL,6UL},{0x35606793D22F0553LL,1UL,0xD32078E28AAB4918LL},{0UL,1UL,0x51C5A2FEA3223EADLL},{0x20B5A90BA6CF9D44LL,0xC29CCD04E46CC1EDLL,0x438944EB55DE1E9BLL}},{{18446744073709551609UL,18446744073709551608UL,18446744073709551610UL},{0x20B5A90BA6CF9D44LL,0x01D3E487BE48B410LL,18446744073709551611UL},{0UL,0xDC66742B0F3C143BLL,0xB7F981A2EC8B162ALL},{0x35606793D22F0553LL,18446744073709551612UL,0x9EAC183AFC6DB580LL},{6UL,7UL,18446744073709551612UL},{0x6710AEF6A1A9C6E4LL,0xEFB73BEA6F1BE8DCLL,18446744073709551612UL},{0x6D28C9C47F10029BLL,18446744073709551606UL,0xCE8F5B15C7737430LL},{18446744073709551614UL,0x35606793D22F0553LL,0xEC4F5BB740180F1CLL},{1UL,2UL,7UL},{0xD32078E28AAB4918LL,18446744073709551615UL,0x01D3E487BE48B410LL}},{{0UL,18446744073709551612UL,0xB68F0C3E78EBC6D4LL},{0UL,0xE99D50DF8BCD272BLL,1UL},{0xE57EAD49E10849B5LL,0xFB32D9CD3963641DLL,18446744073709551615UL},{0x01D3E487BE48B410LL,0xBC4D93B9819FAE3FLL,0UL},{0x9B6320923F44C6D3LL,0x9B6320923F44C6D3LL,0x914E43B0452F2C55LL},{0xE99D50DF8BCD272BLL,18446744073709551614UL,0UL},{1UL,1UL,18446744073709551609UL},{1UL,0x2FA1644DFB60CB4CLL,1UL},{0UL,1UL,18446744073709551606UL},{0UL,1UL,1UL}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_2381[i] = 0xE2175B5EL;
                if ((&l_2138 != &g_1326))
                {
                    int16_t l_2366 = 0x2341L;
                    int32_t l_2368 = 0x914ABDAEL;
                    int32_t l_2380 = 0x88AB914DL;
                    int32_t l_2382 = (-1L);
                    int32_t l_2383 = 0L;
                    int32_t l_2384[8] = {0x9DCE7A24L,0x030B60BAL,0x9DCE7A24L,0x9DCE7A24L,0x030B60BAL,0x9DCE7A24L,0x9DCE7A24L,0x030B60BAL};
                    int64_t l_2388 = (-4L);
                    int64_t **l_2400 = (void*)0;
                    uint32_t ***l_2416 = &g_2036;
                    int i;
                    if ((safe_add_func_uint32_t_u_u((*g_1802), ((safe_lshift_func_uint16_t_u_u((((void*)0 != l_2364) != (l_2366 = p_30)), 9)) != 0xD0L))))
                    {
                        int32_t l_2367[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_2367[i] = (-9L);
                        l_2368 |= l_2367[0];
                        l_2369 ^= p_30;
                        return l_2370[2];
                    }
                    else
                    {
                        int8_t l_2379 = 0x3BL;
                        l_2368 = p_30;
                        l_2380 = (safe_add_func_uint16_t_u_u(((l_2368 = (safe_mul_func_int8_t_s_s(0x30L, (((((safe_sub_func_int8_t_s_s(((((l_2377 , ((void*)0 != l_2378)) != (l_2377 , ((0xC904608AL | (*g_482)) == ((**g_778) || ((**g_778) &= p_30))))) , g_767) > p_30), 0xEFL)) >= (*g_1802)) , 0x443A1357D6EC1892LL) != l_2379) , 0xB0L)))) & 0x1EL), p_30));
                    }
                    ++g_2385;
                    l_2390--;
                    if (l_2393)
                    {
                        return p_30;
                    }
                    else
                    {
                        int64_t l_2411 = (-1L);
                        int32_t l_2417[10][1][6] = {{{0x26649314L,0x1C04C94CL,0x6B699F29L,0x26649314L,0x6B699F29L,0x1C04C94CL}},{{0x860CED98L,0x1C04C94CL,0xDC4F0FA5L,0x860CED98L,0x6B699F29L,0x6B699F29L}},{{0x6D0D46C5L,0x1C04C94CL,0x1C04C94CL,0x6D0D46C5L,0x6B699F29L,0xDC4F0FA5L}},{{0x26649314L,0x1C04C94CL,0x6B699F29L,0x26649314L,0x6B699F29L,0x1C04C94CL}},{{0x860CED98L,0x1C04C94CL,0xDC4F0FA5L,0x860CED98L,0x6B699F29L,0x6B699F29L}},{{0x6D0D46C5L,0x1C04C94CL,0x1C04C94CL,0x6D0D46C5L,0x6B699F29L,0xDC4F0FA5L}},{{0x26649314L,0x1C04C94CL,0x6B699F29L,0x26649314L,0x6B699F29L,0x1C04C94CL}},{{0x860CED98L,0x1C04C94CL,0xDC4F0FA5L,0x860CED98L,0x6B699F29L,0x6B699F29L}},{{0x6D0D46C5L,0x1C04C94CL,0x1C04C94CL,0x6D0D46C5L,0x6B699F29L,0xDC4F0FA5L}},{{0x26649314L,0x1C04C94CL,0x6B699F29L,0x26649314L,0x6B699F29L,0x1C04C94CL}}};
                        uint8_t l_2421 = 0x3AL;
                        int i, j, k;
                        (*g_100) |= ((((l_2368 = (safe_rshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(8L, (((safe_div_func_int64_t_s_s((l_2400 == (void*)0), (((((((((((*g_1678) = (*g_1678)) , (safe_mul_func_int16_t_s_s((~((l_2359[0] = (safe_mul_func_uint16_t_u_u((((g_1193 = (((p_30 , ((((*l_2109) &= ((safe_unary_minus_func_uint64_t_u(p_30)) , (((((safe_unary_minus_func_int64_t_s(l_2408[0])) && ((safe_lshift_func_uint8_t_u_s((*l_2150), p_30)) || 0xC07C795AL)) , 0x0651530BL) | 8L) , g_87.f1))) & (***g_777)) ^ p_30)) & 0xB616CD6730E5EC8ELL) | 4UL)) & p_30) != 0xC437C3F7L), g_1485))) && l_2411)), 0UL))) , &g_1259) != l_2412[0]) || 0x0BF9F11CL) , (*l_2162)) , 0xB3AD6472F117D059LL) & (**g_421)) , l_2413[1]) , 1UL))) ^ l_2366) == (*g_1802)))), l_2377.f0))) || 18446744073709551614UL) >= l_2370[2]) <= 0L);
                        (*l_2150) = (safe_rshift_func_int16_t_s_s((((**g_813) ^ ((0x59L >= (&g_2036 != ((*g_1678) , l_2416))) || 0UL)) ^ p_30), 15));
                        --l_2418;
                        if (l_2421)
                            continue;
                    }
                }
                else
                {
                    uint32_t l_2425 = 1UL;
                    const int32_t **l_2451 = (void*)0;
                    uint32_t *l_2452 = &l_2234;
                    if ((*g_482))
                        break;
                    l_2422 = (void*)0;
                    for (l_2210 = 0; (l_2210 == 49); ++l_2210)
                    {
                        uint16_t **l_2428 = &g_779;
                        uint16_t **l_2430 = &g_779;
                        uint16_t ***l_2429 = &l_2430;
                        union U1 **l_2449[5];
                        const int32_t l_2450 = 8L;
                        int32_t l_2453[9][1][8] = {{{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L}}};
                        int32_t l_2454[6] = {0x24A36AD4L,0x24A36AD4L,0x24A36AD4L,0x24A36AD4L,0x24A36AD4L,0x24A36AD4L};
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_2449[i] = &g_1678;
                        l_2425--;
                        (*g_100) = (((((**l_2138) = l_2428) != ((*l_2429) = l_2428)) && (l_2454[5] = (l_2453[0][0][2] = (l_2431 , ((((void*)0 != &g_655) | (+((l_2452 = func_72(l_2433, ((**g_813) = (+(safe_div_func_uint64_t_u_u(((+p_30) > (((**g_778) &= (((safe_unary_minus_func_int64_t_s((safe_div_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u((((7L || (safe_sub_func_int16_t_s_s(((*l_2109) = ((safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s((*g_2), 0x6164D809L)), 8UL)) >= 0x1032L)), l_2425))) , l_2449[1]) != (void*)0), p_30)) & (**g_813)) < p_30), l_2450)))) ^ p_30) < g_362[1][1][1])) <= p_30)), p_30)))), g_333[5], l_2451, p_30)) != (void*)0))) & 0UL))))) ^ 0x0C0EBA14AB6AAE44LL);
                        if (p_30)
                            continue;
                    }
                    return l_2455;
                }
                for (l_2455 = 3; (l_2455 <= 12); l_2455 = safe_add_func_int32_t_s_s(l_2455, 8))
                {
                    int32_t l_2461 = 0xDF2E8595L;
                    int32_t l_2462 = 0x6C91F04BL;
                    int32_t l_2463 = 0x1950E634L;
                    int32_t l_2464 = 0x927388E6L;
                    int32_t l_2465 = 0x7B2D922DL;
                    int32_t l_2466 = 0xE9382FCDL;
                    int32_t l_2467 = 0x8CDEC45DL;
                    int32_t l_2469 = 1L;
                    int32_t l_2470[10] = {(-6L),0x1DC52E88L,0x0AB90168L,0x1DC52E88L,(-6L),(-6L),0x1DC52E88L,0x0AB90168L,0x1DC52E88L,(-6L)};
                    int64_t l_2471 = 0x24FB471DD6E1F38DLL;
                    int32_t **l_2479 = &g_212[4][0][7];
                    int i;
                    l_2458[6][6][1]--;
                    l_2476--;
                    (*l_2479) = func_35((*g_1802), p_30, (*g_779), p_30);
                }
            }
            else
            {
                int32_t l_2504 = 0x89B96E27L;
                uint8_t **l_2530 = &g_217;
                int32_t *** const *l_2542 = &l_2378;
                uint32_t *l_2546 = &l_2234;
                union U0 l_2558[8][3][6] = {{{{0x67AEE8F7L},{0x44E9C6B4L},{0x67AEE8F7L},{0xA557052AL},{0xBABA6922L},{0xA557052AL}},{{1L},{0x44E9C6B4L},{1L},{0xA557052AL},{0L},{0xA557052AL}},{{0x67AEE8F7L},{0x44E9C6B4L},{0x67AEE8F7L},{0xA557052AL},{0xBABA6922L},{0xA557052AL}}},{{{1L},{0x44E9C6B4L},{1L},{0xA557052AL},{0L},{0xA557052AL}},{{0x67AEE8F7L},{0x44E9C6B4L},{0x67AEE8F7L},{0xA557052AL},{0xBABA6922L},{0xA557052AL}},{{1L},{0xA557052AL},{0x8480AFDFL},{0xEFA5CCBBL},{1L},{0xEFA5CCBBL}}},{{{-1L},{0xA557052AL},{-1L},{0xEFA5CCBBL},{0x67AEE8F7L},{0xEFA5CCBBL}},{{0x8480AFDFL},{0xA557052AL},{0x8480AFDFL},{0xEFA5CCBBL},{1L},{0xEFA5CCBBL}},{{-1L},{0xA557052AL},{-1L},{0xEFA5CCBBL},{0x67AEE8F7L},{0xEFA5CCBBL}}},{{{0x8480AFDFL},{0xA557052AL},{0x8480AFDFL},{0xEFA5CCBBL},{1L},{0xEFA5CCBBL}},{{-1L},{0xA557052AL},{-1L},{0xEFA5CCBBL},{0x67AEE8F7L},{0xEFA5CCBBL}},{{0x8480AFDFL},{0xA557052AL},{0x8480AFDFL},{0xEFA5CCBBL},{1L},{0xEFA5CCBBL}}},{{{-1L},{0xA557052AL},{-1L},{0xEFA5CCBBL},{0x67AEE8F7L},{0xEFA5CCBBL}},{{0x8480AFDFL},{0xA557052AL},{0x8480AFDFL},{0xEFA5CCBBL},{1L},{0xEFA5CCBBL}},{{-1L},{0xA557052AL},{-1L},{0xEFA5CCBBL},{0x67AEE8F7L},{0xEFA5CCBBL}}},{{{0x8480AFDFL},{0xA557052AL},{0x8480AFDFL},{0xEFA5CCBBL},{1L},{0xEFA5CCBBL}},{{-1L},{0xA557052AL},{-1L},{0xEFA5CCBBL},{0x67AEE8F7L},{0xEFA5CCBBL}},{{0x8480AFDFL},{0xA557052AL},{0x8480AFDFL},{0xEFA5CCBBL},{1L},{0xEFA5CCBBL}}},{{{-1L},{0xA557052AL},{-1L},{0xEFA5CCBBL},{0x67AEE8F7L},{0xEFA5CCBBL}},{{0x8480AFDFL},{0xA557052AL},{0x8480AFDFL},{0xEFA5CCBBL},{1L},{0xEFA5CCBBL}},{{-1L},{0xA557052AL},{-1L},{0xEFA5CCBBL},{0x67AEE8F7L},{0xEFA5CCBBL}}},{{{0x8480AFDFL},{0xA557052AL},{0x8480AFDFL},{0xEFA5CCBBL},{1L},{0xEFA5CCBBL}},{{-1L},{0xA557052AL},{-1L},{0xEFA5CCBBL},{0x67AEE8F7L},{0xEFA5CCBBL}},{{0x8480AFDFL},{0xA557052AL},{0x8480AFDFL},{0xEFA5CCBBL},{1L},{0xEFA5CCBBL}}}};
                int64_t l_2587 = 0x9CDBB1812B8707A5LL;
                int i, j, k;
                for (g_1934 = 0; (g_1934 != 33); g_1934++)
                {
                    uint16_t l_2537 = 0UL;
                    uint16_t l_2545 = 0x0759L;
                    if (((((((void*)0 == (*g_1326)) , (--(***l_2026))) || (safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s(0L, (safe_rshift_func_int8_t_s_u(0x88L, (safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0x3EL, (((*l_2150) = (safe_sub_func_int8_t_s_s(l_2504, (p_30 >= ((safe_lshift_func_uint8_t_u_s(p_30, ((g_110 | (-2L)) ^ p_30))) , 0UL))))) == p_30))), 0xB9CFL)) == p_30), p_30)), 0L)), p_30)))))), 2UL))) , 0x58432C98L) != 0L))
                    {
                        int64_t l_2518 = 0x2F65CA3C2CDC849ALL;
                        if ((*g_100))
                            break;
                        (*l_2150) = ((safe_unary_minus_func_uint16_t_u(((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((**g_813), (safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s(l_2518, ((0UL ^ p_30) != (safe_mul_func_uint8_t_u_u(((*g_422) ^ (((((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(p_30, 10)), p_30)) , (g_2526 = l_2525[1])) == ((safe_mul_func_int8_t_s_s((((void*)0 == l_2530) > g_53), g_3)) , (void*)0)) >= 18446744073709551613UL) ^ p_30)), 1L))))) && 0L), 0x06L)))), p_30)) , (**g_778)))) | p_30);
                        (*g_100) = (((-8L) || (safe_mul_func_uint8_t_u_u(((((safe_mul_func_int16_t_s_s(0xB955L, ((safe_rshift_func_int16_t_s_u((l_2537 ^ (**g_778)), ((((*l_2109) &= (p_30 || g_164)) == (l_2542 != &l_2378)) && ((safe_mul_func_int8_t_s_s((0x9AL <= p_30), p_30)) != l_2545)))) , g_1200[4]))) == 18446744073709551606UL) , (void*)0) == l_2546), 246UL))) != p_30);
                        l_2547 = p_30;
                    }
                    else
                    {
                        uint64_t l_2560 = 18446744073709551615UL;
                        union U0 ***l_2561 = (void*)0;
                        union U0 ***l_2562 = &g_1027[1];
                        (*g_100) = (((safe_add_func_uint64_t_u_u(((**g_421) ^ ((l_2563[1][2][1] = (((safe_mul_func_uint16_t_u_u(p_30, 0x8F8AL)) & l_2545) < (l_2552 == ((*l_2562) = (((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_30, 11)), ((((p_30 , l_2558[1][2][4]) , ((p_30 && p_30) , g_2559[8])) < p_30) , l_2560))) , 0xA084572BL) , (void*)0))))) >= 0xB7L)), 0L)) < p_30) >= 0xBD276DE7151FACFCLL);
                    }
                }
                if (g_2564)
                    break;
                if ((safe_add_func_int16_t_s_s(p_30, (safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(p_30, (safe_mod_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u((0x8EA1L > (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((&g_2304[3][0] != ((safe_lshift_func_int8_t_s_s((((safe_sub_func_int64_t_s_s(((((l_2583 == (void*)0) , ((g_1780 < (safe_add_func_uint16_t_u_u(((***g_777) = p_30), 0xC8D5L))) , p_30)) > 7UL) && p_30), p_30)) ^ l_2586) && (*g_100)), l_2587)) , &g_2304[3][0])), g_117)), 0x63D9L))), g_633)) , 0xCF43D469L), 4294967294UL)))) && p_30), 251UL)))))
                {
                    uint8_t l_2590 = 0x3AL;
                    for (g_110 = 0; (g_110 >= 44); g_110 = safe_add_func_int8_t_s_s(g_110, 8))
                    {
                        return l_2590;
                    }
                }
                else
                {
                    int32_t *l_2591[4] = {&l_2263,&l_2263,&l_2263,&l_2263};
                    int i;
                    l_2591[1] = &l_2351;
                }
            }
            (*g_100) &= (safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((***g_777) = ((p_30 || (((*g_2125) != (void*)0) , 0x5CB2CEA5ECCAC686LL)) ^ (((safe_lshift_func_int8_t_s_u(g_2475[0][4], 1)) , ((((*l_2109) = ((!((-1L) ^ (((*l_2608) = ((*l_2605) = ((*l_2603) = l_2601))) == ((l_2377 , (0x223F059AL & 0xFF2BA59AL)) , (*l_2137))))) < (*g_814))) , (*l_2150)) < p_30)) & l_2369))), 3)), 1UL)), 7));
        }
    }
    else
    {
        int16_t *l_2621 = &g_1313;
        int32_t l_2625 = 0x4CD7B97EL;
        int16_t *l_2636 = &g_770[4];
        uint8_t *l_2637[1][4][10] = {{{&g_363,&g_363,&g_362[0][2][0],&g_363,&g_363,&g_362[0][2][0],&g_363,&g_363,&g_362[0][2][0],&g_363},{&g_363,&g_362[0][0][1],&g_362[0][0][1],&g_363,&g_362[0][0][1],&g_362[0][0][1],&g_363,&g_362[0][0][1],&g_362[0][0][1],&g_363},{&g_362[0][0][1],&g_363,&g_362[0][0][1],&g_362[0][0][1],&g_363,&g_362[0][0][1],&g_362[0][0][1],&g_363,&g_362[0][0][1],&g_362[0][0][1]},{&g_363,&g_363,&g_362[0][2][0],&g_363,&g_363,&g_362[0][2][0],&g_363,&g_363,&g_362[0][2][0],&g_363}}};
        int32_t l_2638 = (-1L);
        uint32_t l_2639 = 18446744073709551615UL;
        int32_t l_2661 = 0xF509C8C2L;
        int32_t l_2663[5][6][7] = {{{(-4L),0xD4528F3DL,0xD4528F3DL,(-4L),0xD4528F3DL,0xD4528F3DL,(-4L)},{(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L)},{(-4L),(-4L),1L,(-4L),(-4L),1L,(-4L)},{0L,(-1L),(-1L),0L,(-1L),(-1L),0L},{0xD4528F3DL,(-4L),0xD4528F3DL,0xD4528F3DL,(-4L),0xD4528F3DL,1L},{(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)}},{{0xD4528F3DL,1L,1L,0xD4528F3DL,1L,1L,0xD4528F3DL},{0x60C86D2FL,(-1L),0x60C86D2FL,0x60C86D2FL,(-1L),0x60C86D2FL,0x60C86D2FL},{0xD4528F3DL,0xD4528F3DL,(-4L),0xD4528F3DL,0xD4528F3DL,(-4L),0xD4528F3DL},{(-1L),0x60C86D2FL,0x60C86D2FL,(-1L),0x60C86D2FL,0x60C86D2FL,(-1L)},{1L,0xD4528F3DL,1L,1L,0xD4528F3DL,1L,1L},{(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)}},{{0xD4528F3DL,1L,1L,0xD4528F3DL,1L,1L,0xD4528F3DL},{0x60C86D2FL,(-1L),0x60C86D2FL,0x60C86D2FL,(-1L),0x60C86D2FL,0x60C86D2FL},{0xD4528F3DL,0xD4528F3DL,(-4L),0xD4528F3DL,0xD4528F3DL,(-4L),0xD4528F3DL},{(-1L),0x60C86D2FL,0x60C86D2FL,(-1L),0x60C86D2FL,0x60C86D2FL,(-1L)},{1L,0xD4528F3DL,1L,1L,0xD4528F3DL,1L,1L},{(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)}},{{0xD4528F3DL,1L,1L,0xD4528F3DL,1L,1L,0xD4528F3DL},{0x60C86D2FL,(-1L),0x60C86D2FL,0x60C86D2FL,(-1L),0x60C86D2FL,0x60C86D2FL},{0xD4528F3DL,0xD4528F3DL,(-4L),0xD4528F3DL,0xD4528F3DL,(-4L),0xD4528F3DL},{(-1L),0x60C86D2FL,0x60C86D2FL,(-1L),0x60C86D2FL,0x60C86D2FL,(-1L)},{1L,0xD4528F3DL,1L,1L,0xD4528F3DL,1L,1L},{(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)}},{{0xD4528F3DL,1L,1L,0xD4528F3DL,1L,1L,0xD4528F3DL},{0x60C86D2FL,(-1L),0x60C86D2FL,0x60C86D2FL,(-1L),0x60C86D2FL,0x60C86D2FL},{0xD4528F3DL,0xD4528F3DL,(-4L),0xD4528F3DL,0xD4528F3DL,(-4L),0xD4528F3DL},{(-1L),0x60C86D2FL,0x60C86D2FL,(-1L),0x60C86D2FL,0x60C86D2FL,(-1L)},{1L,0xD4528F3DL,1L,1L,0xD4528F3DL,1L,1L},{(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)}}};
        uint32_t l_2707 = 0xC9172DF1L;
        union U0 *l_2721 = &g_226;
        int i, j, k;
        if ((((((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((*l_2621) = 0L), (4L & ((safe_unary_minus_func_int64_t_s(l_2625)) | (((*g_777) = (*g_777)) != (**g_1326)))))), ((l_2638 = (safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((0x187ABCA4214F9C89LL <= l_2625), ((*l_2636) = (safe_rshift_func_int16_t_s_s((0x98L && ((-1L) | p_30)), 8))))) > 5L), p_30)), 0x69E7L)), 0xAA3230E9L))) & l_2625))))), 0x4677L)), p_30)) , l_2639), 1)) | 0x584F81B7L) , 0L) , p_30) , 5L))
        {
            int32_t l_2640 = 0x1CBD5F96L;
            int32_t l_2650 = 0x53198625L;
            int32_t l_2652[6][4][7] = {{{6L,0x09829D8FL,0x09829D8FL,6L,1L,3L,0x15EDAAB1L},{0xC49F0538L,(-1L),0x8D4F37FFL,0x519482D3L,0x56BA4E65L,0x8D4F37FFL,(-1L)},{(-5L),1L,0xB39914D0L,0xC38CB946L,(-6L),9L,0xD46D24C7L},{0x8D4F37FFL,1L,0L,0xF0405055L,(-7L),(-6L),(-8L)}},{{(-2L),0L,0L,0xD22020A0L,3L,0xD22020A0L,0L},{(-8L),(-8L),9L,0xDC54A914L,1L,9L,0x519482D3L},{1L,0xD22020A0L,0L,0x09829D8FL,0xD22020A0L,(-2L),3L},{(-7L),(-8L),1L,(-1L),1L,9L,(-1L)}},{{(-5L),7L,0xD382E0DCL,0xD46D24C7L,3L,0xB39914D0L,1L},{0xF0405055L,0x7D75679BL,(-7L),0xC49F0538L,(-7L),0x7D75679BL,0xF0405055L},{0L,0xC38CB946L,(-2L),0xBFFF0CC3L,(-6L),(-1L),(-5L)},{(-8L),(-8L),0x6EE7E2D8L,(-8L),0xDC54A914L,0x8A27D53CL,0xC49F0538L}},{{1L,0x64BC4031L,(-2L),(-5L),1L,(-2L),0L},{0L,0xF0405055L,(-7L),(-6L),(-8L),0L,0L},{(-4L),1L,0xD382E0DCL,1L,(-4L),6L,(-6L)},{0x519482D3L,9L,1L,0xA6F6F1EBL,(-1L),(-6L),0xF0405055L}},{{(-5L),(-6L),0L,1L,0L,0x44F3A5A6L,(-2L)},{0x519482D3L,0xA6F6F1EBL,9L,(-8L),0xA6F6F1EBL,0x56BA4E65L,(-1L)},{(-4L),0L,0L,3L,0x64BC4031L,0x64BC4031L,3L},{0L,0x6500C4B2L,0L,0L,(-1L),(-7L),7L}},{{1L,0x09829D8FL,0xB39914D0L,0xD46D24C7L,(-4L),0xB856F085L,1L},{(-8L),(-6L),7L,(-1L),0xA8AE0CD3L,(-7L),(-8L)},{0L,(-6L),(-5L),0L,(-5L),0x64BC4031L,0x44F3A5A6L},{0xF0405055L,1L,0x56BA4E65L,0xDC54A914L,0xDC54A914L,0x56BA4E65L,1L}}};
            uint8_t l_2653[7][4][2] = {{{8UL,0x13L},{1UL,0x58L},{0x13L,4UL},{0x90L,255UL}},{{0x58L,0xA9L},{0xA9L,0xA9L},{0x58L,255UL},{0x90L,4UL}},{{0x13L,0x58L},{1UL,0x13L},{8UL,0xB7L},{8UL,0x13L}},{{1UL,0x58L},{0x13L,4UL},{0x90L,255UL},{0x58L,0xA9L}},{{0xA9L,0xA9L},{0x58L,255UL},{0x90L,1UL},{0xB7L,0xA9L}},{{0x90L,0xB7L},{255UL,0xFEL},{255UL,0xB7L},{0x90L,0xA9L}},{{0xB7L,1UL},{8UL,0x58L},{0xA9L,0x25L},{0x25L,0x25L}}};
            int32_t **l_2674 = &g_212[6][0][3];
            uint32_t l_2691 = 18446744073709551612UL;
            int i, j, k;
            if (((*g_100) = l_2640))
            {
                const int64_t l_2641 = 0L;
                int32_t l_2651 = 0x5343C7AAL;
                int16_t l_2660 = (-2L);
                uint32_t l_2664 = 0xCDB9954DL;
                l_2652[1][0][3] |= (l_2641 < ((((*g_100) = (-1L)) , (safe_lshift_func_int8_t_s_s(((((**g_778) = (safe_mod_func_int32_t_s_s((-1L), p_30))) , (l_2660 |= ((-1L) >= (safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((((l_2653[0][0][1]--) || (safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((*l_2134) == (*l_2134)), ((*l_2162) , l_2651))), l_2641))) ^ p_30) , 0xEF18C37AL) , l_2625), 0x65DFL)), 5))))) != (*g_482)), p_30))) || p_30));
                l_2664--;
            }
            else
            {
                for (l_2287 = (-21); (l_2287 != (-15)); l_2287 = safe_add_func_int16_t_s_s(l_2287, 1))
                {
                    int8_t l_2670 = 6L;
                    if (l_1992)
                        goto lbl_2669;
                    for (g_368 = 0; (g_368 <= 0); g_368 += 1)
                    {
                        uint64_t l_2671 = 0xC066D4582A04B245LL;
                        if (l_2670)
                            break;
                        --l_2671;
                    }
                }
                (*g_100) ^= 0x41F716EBL;
            }
            (*l_2674) = &l_2663[2][5][5];
            for (g_164 = 0; (g_164 >= 0); g_164 -= 1)
            {
                uint64_t l_2680 = 0xBEDAE0BF50B58322LL;
                int32_t l_2688 = 4L;
                int32_t *l_2690[7] = {&l_2043[3][4],&l_2043[3][4],&g_394,&l_2043[3][4],&l_2043[3][4],&g_394,&l_2043[3][4]};
                int16_t l_2711 = (-9L);
                int i;
                for (g_1485 = 0; (g_1485 >= 0); g_1485 -= 1)
                {
                    uint32_t *l_2675 = &l_2639;
                    const int32_t l_2689 = 0xB10FA54AL;
                    l_2690[2] = func_35(p_30, (++(*l_2675)), ((safe_div_func_int32_t_s_s((p_30 && ((0xD9L & (l_2680--)) & (safe_rshift_func_int16_t_s_s(p_30, 13)))), (safe_mul_func_int8_t_s_s(0x90L, ((l_2688 = (p_30 && (l_2687 & l_2663[2][0][5]))) != 0x01CB007025563FC7LL))))) == 1L), l_2689);
                    for (g_2385 = 0; (g_2385 <= 5); g_2385 += 1)
                    {
                        return p_30;
                    }
                }
                --l_2691;
                (*g_100) = ((((((&g_2527 == (l_2694 = (((*g_1967) != &p_30) , &l_2134))) , (((safe_sub_func_int16_t_s_s(((((*l_2636) = 0xB2D6L) >= ((p_30 || ((safe_rshift_func_uint16_t_u_s(p_30, 11)) <= p_30)) , ((((**g_421) = ((*g_422) >= 0x311E1DDE743ADBFFLL)) && p_30) != 1UL))) == p_30), 1L)) || 9L) , (-1L))) && 0x7ED6L) , (void*)0) == (*g_1967)) || 0xF1A99DDD5743445DLL);
                l_2638 &= ((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((p_30 & (((safe_sub_func_int8_t_s_s(((l_2625 ^= ((l_2707--) <= (!((l_2711 < (safe_lshift_func_uint16_t_u_s((**g_778), 9))) | (safe_sub_func_int32_t_s_s((~(p_30 | 0xC8503171L)), ((safe_lshift_func_int16_t_s_u(p_30, 5)) | ((((*l_2552) = l_2721) == (void*)0) >= ((((((safe_mul_func_int8_t_s_s(p_30, l_2661)) >= p_30) != 0xC6D58484L) < l_2663[2][0][5]) , 0UL) & g_363))))))))) , 0x39L), p_30)) && 0x4693B7F9L) <= (*g_422))), (-2L))), p_30)) <= 0UL);
            }
        }
        else
        {
            union U0 l_2744 = {0x13E9E615L};
            int16_t l_2747 = (-1L);
            int32_t * const l_2755 = &g_3;
            int32_t l_2764[1][7] = {{(-1L),0x8C5A9B08L,0x8C5A9B08L,(-1L),0x8C5A9B08L,0x8C5A9B08L,(-1L)}};
            uint32_t l_2772[6] = {1UL,0x1F44860BL,1UL,1UL,0x1F44860BL,1UL};
            int i, j;
            if (g_164)
                goto lbl_2669;
            for (g_767 = 17; (g_767 == (-28)); g_767 = safe_sub_func_int32_t_s_s(g_767, 1))
            {
                uint16_t l_2726 = 0x0CD8L;
                const int32_t l_2731 = 1L;
                const int32_t **l_2746 = &g_482;
                int32_t l_2748 = 4L;
                int32_t * const **l_2750 = (void*)0;
                int32_t * const ***l_2749 = &l_2750;
                uint32_t *** const **l_2762 = &g_2761;
                int32_t l_2763 = (-6L);
                int32_t l_2765 = (-6L);
                int32_t l_2768 = 0L;
                int32_t l_2769 = 0xB04D4A77L;
                int32_t l_2771 = 8L;
                if ((l_2726 >= (((0x593191FFL && ((safe_mod_func_uint64_t_u_u(((**l_2132) = (*g_422)), ((((safe_add_func_int32_t_s_s((((l_2731 != (safe_add_func_int64_t_s_s(((((((l_2625 |= ((safe_sub_func_int8_t_s_s((~((*l_2100) = ((safe_add_func_int16_t_s_s((((0xB9L ^ (safe_mod_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((!((((g_1485 >= (((l_2731 == (&l_2661 != ((*l_2746) = func_66(l_2744, &g_25, p_30, l_2745)))) & 0x80L) <= l_2747)) <= p_30) , p_30) < 0x3CF4EF0E95ED15FBLL)), p_30)) != (*g_1802)), (**g_778)))) , (-5L)) || 1L), p_30)) | p_30))), p_30)) && 65535UL)) < 1L) >= p_30) && p_30) ^ g_771) < p_30), p_30))) >= (-7L)) & p_30), (*g_1802))) | l_2639) < l_2663[2][2][3]) & p_30))) , 4294967294UL)) & p_30) | 0xC6L)))
                {
                    l_2748 = p_30;
                    return p_30;
                }
                else
                {
                    (*g_100) = ((void*)0 != l_2749);
                }
                for (l_2358 = 0; (l_2358 <= 27); l_2358 = safe_add_func_uint16_t_u_u(l_2358, 1))
                {
                    const int16_t l_2759 = 0L;
                    int32_t l_2766 = 0xFC866F91L;
                    int32_t l_2767 = 0xDAD9BD6DL;
                    int32_t l_2770 = (-10L);
                    for (g_118 = 0; (g_118 != 6); g_118 = safe_add_func_int8_t_s_s(g_118, 3))
                    {
                        int32_t **l_2756 = &l_2202[0];
                        (*l_2756) = (p_30 , l_2755);
                        if (p_30)
                            continue;
                    }
                    for (g_53 = (-25); (g_53 > (-23)); g_53++)
                    {
                        if (l_2759)
                            break;
                    }
                    l_2762 = g_2760;
                    --l_2772[2];
                }
                if ((*g_100))
                    continue;
            }
            (*g_100) = (0xEFB99C13ACAB7F29LL >= (safe_mod_func_uint8_t_u_u((p_30 || 0x4BE46202L), (safe_rshift_func_uint8_t_u_u(4UL, (*l_2755))))));
        }
    }
    return g_1055;
}







static int32_t * func_35(uint32_t p_36, uint32_t p_37, uint16_t p_38, const uint32_t p_39)
{
    int32_t *l_1974[5][7] = {{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_53,&g_3,&g_3,&g_53,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_53,&g_3,&g_53,&g_53,&g_3,&g_53,&g_53},{&g_3,&g_3,&g_25,&g_3,&g_3,&g_25,&g_3}};
    int i, j;
    return l_1974[0][4];
}







static const int8_t func_45(int32_t * p_46, int32_t p_47, int32_t * p_48)
{
    int64_t l_51 = 0xCF58A4122E7DFE98LL;
    int32_t *l_52 = &g_53;
    int32_t *l_54 = &g_53;
    int32_t *l_55 = &g_53;
    int32_t *l_56 = &g_53;
    int32_t *l_57 = &g_53;
    int32_t *l_58[4] = {&g_53,&g_53,&g_53,&g_53};
    union U0 l_71 = {0xDEC7E1EFL};
    union U1 l_82 = {0xEAD942A26B13122ELL};
    int16_t *l_83 = &g_84;
    const int32_t *l_86 = (void*)0;
    const int32_t **l_85[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t ***l_1462 = &g_778;
    int32_t l_1502 = 0xC26DD6DBL;
    uint8_t l_1521 = 0x2BL;
    uint8_t **l_1568 = &g_217;
    int32_t l_1581 = 0x8F6C81E3L;
    uint16_t l_1698 = 0xAD97L;
    uint16_t l_1718 = 65534UL;
    union U0 *l_1749 = &g_226;
    union U0 **l_1748 = &l_1749;
    uint16_t ** const *l_1768 = &g_778;
    uint32_t l_1782 = 4294967286UL;
    int16_t l_1804 = 0xA259L;
    const uint8_t l_1809 = 5UL;
    const int8_t l_1837 = 0L;
    int64_t **l_1868[5][3] = {{&g_727,&g_727,&g_727},{&g_727,&g_727,&g_727},{&g_727,&g_727,&g_727},{&g_727,&g_727,&g_727},{&g_727,&g_727,&g_727}};
    const int16_t l_1871 = (-1L);
    int64_t l_1925 = 0x2C2D63F70F8734EDLL;
    int64_t l_1968 = 1L;
    int16_t l_1969 = 0x9E3CL;
    int32_t l_1970 = 0x75508199L;
    uint32_t l_1971 = 0x25016EF5L;
    int i, j;
    ++g_59;
    return p_47;
}







static int8_t func_64(int32_t * p_65)
{
    uint16_t l_1319 = 0x6A59L;
    int8_t *l_1320 = &g_1193;
    union U0 l_1321 = {0xA7DF5A80L};
    uint16_t **** const l_1322[9] = {&g_777,&g_777,&g_777,&g_777,&g_777,&g_777,&g_777,&g_777,&g_777};
    const uint16_t **l_1325 = (void*)0;
    const uint16_t ***l_1324 = &l_1325;
    const uint16_t ****l_1323 = &l_1324;
    int32_t **** const l_1329 = &g_230;
    int32_t l_1338 = 0L;
    int32_t *l_1339 = (void*)0;
    int32_t *l_1340 = &l_1338;
    int32_t *l_1341[8] = {&g_394,&g_394,&g_394,&g_394,&g_394,&g_394,&g_394,&g_394};
    int64_t l_1342 = 1L;
    int32_t l_1343 = 0x3F32D5D5L;
    uint64_t l_1344 = 1UL;
    uint16_t **** const l_1348 = (void*)0;
    uint16_t **** const *l_1347 = &l_1348;
    int16_t l_1349[5][8] = {{0x8E90L,(-9L),(-9L),0x8E90L,0x558CL,(-8L),1L,5L},{0L,3L,(-8L),0xA852L,(-9L),(-5L),5L,(-5L)},{0x03AAL,3L,1L,3L,0x03AAL,(-8L),0x8E90L,0xF678L},{(-8L),(-9L),0x03AAL,0L,0x7C14L,0x558CL,3L,3L},{5L,0xD223L,0x03AAL,0x03AAL,0xD223L,5L,0x8E90L,0x7C14L}};
    int i, j;
    (*g_100) ^= (safe_mod_func_int64_t_s_s((((*l_1320) ^= (0xDC6379F9L <= l_1319)) && ((l_1321 , l_1322[2]) != (g_1326 = l_1323))), (((((l_1329 != &g_230) , ((*g_779) = (***g_777))) <= (safe_mod_func_uint16_t_u_u((l_1338 = (((**g_421) |= (((**g_813) = (safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((0x0DEAC90199451910LL | l_1319) & l_1321.f0), 0UL)), g_770[5])), 0))) , 0xBB130F6F03360341LL)) > l_1319)), 0xE95DL))) , 0x3329L) || 1UL)));
    l_1344--;
    l_1347 = &l_1322[5];
    return l_1349[3][1];
}







static int32_t * func_66(union U0 p_67, int32_t * p_68, int16_t p_69, union U0 p_70)
{
    int32_t l_1304 = 0x48C0BB11L;
    int32_t l_1305 = 0xB813CDB5L;
    int32_t *l_1306 = &g_394;
    int32_t *l_1307 = &g_394;
    int32_t *l_1308 = &g_394;
    int32_t *l_1309 = &g_394;
    int32_t *l_1310 = &g_53;
    int32_t *l_1311 = &g_53;
    int32_t *l_1312[10][9][2] = {{{&l_1305,&g_53},{&l_1305,&l_1305},{&g_3,&l_1305},{&l_1305,(void*)0},{&l_1305,&l_1305},{&g_3,&l_1305},{&l_1305,&g_53},{&l_1305,&g_3},{&g_394,(void*)0}},{{(void*)0,&l_1305},{&g_25,&g_394},{(void*)0,&g_394},{&g_3,&g_394},{(void*)0,&g_394},{&g_25,&l_1305},{(void*)0,(void*)0},{&g_394,&g_3},{&l_1305,&g_53}},{{&g_25,(void*)0},{&l_1305,&g_25},{&g_3,&l_1305},{&g_3,&g_25},{&l_1305,(void*)0},{&g_25,&g_394},{&g_25,&g_25},{&l_1305,&l_1305},{&l_1305,&g_25}},{{&l_1305,&l_1305},{&l_1305,(void*)0},{&g_25,(void*)0},{&l_1305,&l_1305},{&l_1305,&g_25},{&l_1305,&l_1305},{&l_1305,&g_25},{&g_25,&g_394},{&g_25,(void*)0}},{{&l_1305,&g_25},{&g_3,&l_1305},{&g_3,&g_25},{&l_1305,(void*)0},{&g_25,&g_394},{&g_25,&g_25},{&l_1305,&l_1305},{&l_1305,&g_25},{&l_1305,&l_1305}},{{&l_1305,(void*)0},{&g_25,(void*)0},{&l_1305,&l_1305},{&l_1305,&g_25},{&l_1305,&l_1305},{&l_1305,&g_25},{&g_25,&g_394},{&g_25,(void*)0},{&l_1305,&g_25}},{{&g_3,&l_1305},{&g_3,&g_25},{&l_1305,(void*)0},{&g_25,&g_394},{&g_25,&g_25},{&l_1305,&l_1305},{&l_1305,&g_25},{&l_1305,&l_1305},{&l_1305,(void*)0}},{{&g_25,(void*)0},{&l_1305,&l_1305},{&l_1305,&g_25},{&l_1305,&l_1305},{&l_1305,&g_25},{&g_25,&g_394},{&g_25,(void*)0},{&l_1305,&g_25},{&g_3,&l_1305}},{{&g_3,&g_25},{&l_1305,(void*)0},{&g_25,&g_394},{&g_25,&g_25},{&l_1305,&l_1305},{&l_1305,&g_25},{&l_1305,&l_1305},{&l_1305,(void*)0},{&g_25,(void*)0}},{{&l_1305,&l_1305},{&l_1305,&g_25},{&l_1305,&l_1305},{&l_1305,&g_25},{&g_25,&g_394},{&g_25,(void*)0},{&l_1305,&g_25},{&g_3,&l_1305},{&g_3,&g_25}}};
    uint32_t l_1314[5][4] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
    int i, j, k;
    ++l_1314[0][1];
    return p_68;
}







static int32_t * func_72(int64_t p_73, uint32_t p_74, int16_t p_75, const int32_t ** p_76, int32_t p_77)
{
    uint8_t l_96 = 0x0EL;
    int32_t **l_97 = (void*)0;
    int32_t *l_99 = &g_3;
    int32_t **l_98[7][6][6] = {{{&g_2,&l_99,&l_99,(void*)0,&g_2,&g_2},{&g_2,&l_99,&g_2,&g_2,&g_2,&g_2},{&l_99,&l_99,&l_99,&l_99,&l_99,&g_2},{&l_99,&l_99,&l_99,&l_99,&l_99,&l_99},{&l_99,&l_99,&l_99,&l_99,(void*)0,(void*)0},{&l_99,&l_99,&l_99,&l_99,&l_99,&l_99}},{{&l_99,&l_99,&l_99,&l_99,&l_99,&g_2},{&l_99,&l_99,&g_2,&g_2,&l_99,&l_99},{&l_99,&l_99,&l_99,&g_2,&l_99,&l_99},{&l_99,&l_99,(void*)0,(void*)0,&l_99,&l_99},{&g_2,&l_99,&g_2,&l_99,(void*)0,&l_99},{&g_2,&g_2,&l_99,(void*)0,&g_2,&l_99}},{{&g_2,&l_99,(void*)0,&l_99,&l_99,&g_2},{&g_2,(void*)0,&l_99,(void*)0,&g_2,&l_99},{&l_99,&g_2,&l_99,&g_2,(void*)0,&l_99},{&l_99,&l_99,(void*)0,&g_2,&l_99,&l_99},{&l_99,(void*)0,&l_99,&l_99,&l_99,&l_99},{&l_99,&l_99,&l_99,&l_99,&l_99,&g_2}},{{&l_99,&l_99,(void*)0,&l_99,&l_99,&l_99},{&g_2,(void*)0,&l_99,&l_99,&l_99,&l_99},{&g_2,&l_99,&g_2,&l_99,&l_99,&l_99},{(void*)0,&l_99,(void*)0,&g_2,&l_99,&l_99},{&l_99,(void*)0,&l_99,&g_2,&l_99,&l_99},{(void*)0,&l_99,&g_2,&g_2,(void*)0,&g_2}},{{&l_99,&g_2,&l_99,&g_2,&g_2,&l_99},{(void*)0,(void*)0,&l_99,&l_99,&l_99,(void*)0},{&g_2,&l_99,&l_99,&l_99,&g_2,&l_99},{&g_2,&g_2,&l_99,&l_99,(void*)0,(void*)0},{&l_99,&l_99,&l_99,&l_99,&l_99,&l_99},{&l_99,&l_99,&l_99,&l_99,&l_99,&g_2}},{{&l_99,&l_99,&g_2,&g_2,&l_99,&l_99},{&l_99,&l_99,&l_99,&g_2,&l_99,&l_99},{&l_99,&l_99,(void*)0,(void*)0,&l_99,&l_99},{&g_2,&l_99,&g_2,&l_99,(void*)0,&l_99},{&g_2,&g_2,&l_99,(void*)0,&g_2,&l_99},{&g_2,&l_99,(void*)0,&l_99,&l_99,&g_2}},{{&g_2,(void*)0,(void*)0,&l_99,(void*)0,&l_99},{(void*)0,&g_2,&l_99,&l_99,&l_99,&l_99},{(void*)0,&l_99,&g_2,&g_2,&l_99,&l_99},{&l_99,&l_99,&l_99,&l_99,&l_99,&l_99},{&l_99,(void*)0,(void*)0,&l_99,&l_99,&l_99},{&l_99,&l_99,&l_99,&l_99,&g_2,&g_2}}};
    uint32_t *l_109 = &g_110;
    uint32_t *l_113[1];
    int16_t *l_115 = &g_84;
    int8_t *l_116 = &g_117;
    uint8_t *l_119 = &l_96;
    int32_t l_180[10][6][4] = {{{0x3BC25720L,1L,4L,0xD88E7D84L},{0x420A7EECL,(-10L),0xDE1560B6L,0x36A80461L},{(-10L),0x5696D624L,0x3BC25720L,0L},{0xF59071E4L,1L,1L,0xC493F273L},{0x6573C08DL,(-7L),0xAD0A0F2BL,(-1L)},{6L,0x36A63138L,0xD88E7D84L,(-7L)}},{{0xC837B64FL,0x420A7EECL,(-3L),(-7L)},{1L,0xEA39184EL,0xAD0A0F2BL,0x79D62275L},{0x420A7EECL,1L,1L,0x420A7EECL},{0xF59071E4L,0x6573C08DL,0x36A63138L,0L},{0xEA39184EL,1L,0xDE1560B6L,(-1L)},{0x36A80461L,0x1A0BB31FL,(-1L),(-1L)}},{{0x3BC25720L,1L,0xD88E7D84L,0L},{(-7L),0x6573C08DL,0L,0x420A7EECL},{6L,1L,0xC493F273L,0x79D62275L},{(-6L),0xEA39184EL,0xF59071E4L,(-7L)},{(-10L),0x420A7EECL,0x0AFF555BL,(-7L)},{0xEA39184EL,0x36A63138L,1L,(-1L)}},{{(-6L),(-7L),4L,0xC493F273L},{0x3B904D00L,1L,0L,0L},{0L,0x5696D624L,(-3L),0x36A80461L},{0x3BC25720L,(-10L),0xC493F273L,0xD88E7D84L},{0x6573C08DL,1L,0xDE1560B6L,0x420A7EECL},{1L,0x5696D624L,3L,(-7L)}},{{0xF59071E4L,0x3B904D00L,0xF59071E4L,0xC493F273L},{0x36A80461L,(-1L),0xAD0A0F2BL,0x9FCAAD6EL},{0x3B904D00L,0x36A63138L,0L,(-1L)},{0xC837B64FL,0x6573C08DL,0L,(-7L)},{0x3B904D00L,(-10L),0xAD0A0F2BL,(-4L)},{0x36A80461L,1L,0xF59071E4L,0x36A80461L}},{{0xF59071E4L,0x36A80461L,3L,0L},{1L,6L,0xDE1560B6L,(-1L)},{0x6573C08DL,0x1A0BB31FL,0xC493F273L,0x9FCAAD6EL},{0x3BC25720L,0x3B904D00L,(-3L),0L},{0L,0x420A7EECL,0L,0x6573C08DL},{0x3B904D00L,1L,4L,0x55624925L}},{{(-6L),1L,1L,(-7L)},{0xEA39184EL,0x36A80461L,0x0AFF555BL,0L},{(-10L),0x36A63138L,0xF59071E4L,(-1L)},{0L,0xC493F273L,0x42A17331L,0x42A17331L},{0x7F16177BL,0x7F16177BL,6L,4L},{(-1L),0xDE1560B6L,1L,0xF59071E4L}},{{0xA15E8653L,0x1A0BB31FL,(-2L),1L},{1L,0x1A0BB31FL,(-7L),0xF59071E4L},{0x1A0BB31FL,0xDE1560B6L,0x1AF41016L,4L},{(-1L),0x7F16177BL,0xA7EA209BL,0x42A17331L},{1L,0xC493F273L,0x79D62275L,0xD88E7D84L},{0x8104EED9L,0x1AF41016L,1L,0xC493F273L}},{{(-1L),1L,1L,0xDEB179A8L},{0x7F16177BL,0xC837B64FL,0x79D62275L,0x36A63138L},{0xF59071E4L,0xA7EA209BL,(-1L),0xF59071E4L},{(-1L),1L,0xA15E8653L,0xABB1F743L},{0L,0x8ABCB019L,(-7L),(-3L)},{1L,0xAD0A0F2BL,0L,0L}},{{0xA15E8653L,0x7F16177BL,0x0AFF555BL,0xABB1F743L},{4L,1L,6L,1L},{0x8104EED9L,0xA7EA209BL,(-2L),3L},{0L,0L,(-1L),0xDEB179A8L},{0xC837B64FL,0xF59071E4L,0x63E7769FL,4L},{0xC837B64FL,0x1AF41016L,(-1L),(-3L)}}};
    uint32_t l_183 = 1UL;
    int32_t l_260 = 0x5B81C32DL;
    int64_t l_281[5] = {0x7EF71F425CC5604ELL,0x7EF71F425CC5604ELL,0x7EF71F425CC5604ELL,0x7EF71F425CC5604ELL,0x7EF71F425CC5604ELL};
    int16_t l_283 = 1L;
    union U0 l_339 = {0x092F00DDL};
    int32_t *l_344 = (void*)0;
    uint64_t *****l_491 = (void*)0;
    int32_t l_492[3][9][9] = {{{8L,0x02156A16L,(-4L),1L,0x7A7EC0E9L,0L,9L,0xEAF6CE8CL,0xEAF6CE8CL},{0xF941CD03L,0xD68A6137L,(-1L),0x39AEC78EL,(-1L),0xD68A6137L,0xF941CD03L,(-1L),1L},{0xC25C0CCEL,0x02156A16L,0xD29130FEL,8L,0xB2770CD4L,(-1L),9L,0L,3L},{0x4162B7BDL,0xC971E435L,(-1L),0x4162B7BDL,3L,0xFC92375FL,0x54E828D1L,(-1L),0x4BE89624L},{0xEA1CE980L,0L,(-4L),8L,0x649131DFL,0xE763667AL,8L,0xEAF6CE8CL,3L},{0x54E828D1L,0x2B6A29DAL,0xBB628FA6L,0x39AEC78EL,3L,0xC971E435L,1L,1L,1L},{0xEA1CE980L,0xE763667AL,0xB2770CD4L,1L,0xB2770CD4L,0xE763667AL,0xEA1CE980L,3L,0xEAF6CE8CL},{0x4162B7BDL,0x2B6A29DAL,0L,0x54E828D1L,(-1L),0xFC92375FL,1L,0x4BE89624L,(-1L)},{0xC25C0CCEL,0L,0xB2770CD4L,0xC25C0CCEL,0x7A7EC0E9L,(-1L),8L,3L,0L}},{{0xF941CD03L,0xC971E435L,0xBB628FA6L,0x54E828D1L,1L,0xD68A6137L,0x54E828D1L,1L,(-1L)},{8L,0x02156A16L,(-4L),1L,0x7A7EC0E9L,0L,9L,0xEAF6CE8CL,0xEAF6CE8CL},{0xF941CD03L,0xD68A6137L,(-1L),0x88C6A88DL,(-5L),0x3F6B1774L,(-1L),0L,5L},{0xEAF6CE8CL,1L,9L,0L,0x9336402DL,1L,0xE52BF2B7L,1L,1L},{1L,0x58F56111L,(-5L),1L,0x2E5B7DD7L,4L,0x4BE89624L,0L,1L},{3L,0xBC6A34EAL,(-9L),0L,0x885F8196L,0x4DA013A0L,0L,4L,1L},{0x4BE89624L,6L,0xD77E2F42L,0x88C6A88DL,0x2E5B7DD7L,0x58F56111L,(-1L),5L,5L},{3L,0x4DA013A0L,0x9336402DL,0x44EB7B80L,0x9336402DL,0x4DA013A0L,3L,1L,4L},{1L,6L,0x60FA85D3L,0x4BE89624L,(-5L),4L,(-1L),1L,0L}},{{0xEAF6CE8CL,0xBC6A34EAL,0x9336402DL,0xEAF6CE8CL,0x4445486CL,1L,0L,1L,1L},{(-1L),0x58F56111L,0xD77E2F42L,0x4BE89624L,0x631D18E0L,0x3F6B1774L,0x4BE89624L,5L,0L},{0L,1L,(-9L),0x44EB7B80L,0x4445486CL,0xBC6A34EAL,0xE52BF2B7L,4L,4L},{(-1L),0x3F6B1774L,(-5L),0x88C6A88DL,(-5L),0x3F6B1774L,(-1L),0L,5L},{0xEAF6CE8CL,1L,9L,0L,0x9336402DL,1L,0xE52BF2B7L,1L,1L},{1L,0x58F56111L,(-5L),1L,0x2E5B7DD7L,4L,0x4BE89624L,0L,1L},{3L,0xBC6A34EAL,(-9L),0L,0x885F8196L,0x4DA013A0L,0L,4L,1L},{0x4BE89624L,6L,0xD77E2F42L,0x88C6A88DL,0x2E5B7DD7L,0x58F56111L,(-1L),5L,5L},{3L,0x4DA013A0L,0x9336402DL,0x44EB7B80L,0x9336402DL,0x4DA013A0L,3L,1L,4L}}};
    int32_t l_493 = (-5L);
    uint64_t l_564 = 7UL;
    int32_t l_631 = 0x0AFB7A65L;
    int8_t l_632 = 0x3CL;
    int8_t l_651 = 0L;
    uint32_t l_652[10] = {0x09B8167DL,0x09B8167DL,0x09B8167DL,0x09B8167DL,0x09B8167DL,0x09B8167DL,0x09B8167DL,0x09B8167DL,0x09B8167DL,0x09B8167DL};
    uint16_t l_667 = 0UL;
    int32_t **l_670 = (void*)0;
    const int32_t l_677 = 0xFED736DEL;
    const int16_t l_745 = 0L;
    const uint64_t l_768[8][8][4] = {{{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL}},{{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL}},{{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL}},{{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL}},{{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL}},{{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL}},{{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL}},{{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL}}};
    int64_t **l_797 = (void*)0;
    union U1 l_800 = {0x24E6A5C14A78F61ELL};
    const int16_t l_821[9] = {(-1L),(-1L),0xA7EEL,(-1L),(-1L),0xA7EEL,(-1L),(-1L),0xA7EEL};
    uint64_t l_834 = 0xA4D2097F3887AEFALL;
    int8_t l_941 = 1L;
    union U0 *l_953 = &l_339;
    union U0 **l_952 = &l_953;
    uint64_t l_1022[5] = {6UL,6UL,6UL,6UL,6UL};
    int32_t ****l_1118 = &g_230;
    int16_t l_1239 = 6L;
    int32_t *l_1240 = &l_631;
    union U1 **l_1255 = (void*)0;
    uint64_t l_1298 = 6UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_113[i] = &g_114;
    return &g_3;
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
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_87.f1, "g_87.f1", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_226.f0, "g_226.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_333[i], "g_333[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_362[i][j][k], "g_362[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_633, "g_633", print_hash_value);
    transparent_crc(g_650, "g_650", print_hash_value);
    transparent_crc(g_767, "g_767", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_770[i], "g_770[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_771, "g_771", print_hash_value);
    transparent_crc(g_1028, "g_1028", print_hash_value);
    transparent_crc(g_1055, "g_1055", print_hash_value);
    transparent_crc(g_1064.f0, "g_1064.f0", print_hash_value);
    transparent_crc(g_1064.f1, "g_1064.f1", print_hash_value);
    transparent_crc(g_1193, "g_1193", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1200[i], "g_1200[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1235, "g_1235", print_hash_value);
    transparent_crc(g_1241, "g_1241", print_hash_value);
    transparent_crc(g_1313, "g_1313", print_hash_value);
    transparent_crc(g_1485, "g_1485", print_hash_value);
    transparent_crc(g_1488, "g_1488", print_hash_value);
    transparent_crc(g_1717, "g_1717", print_hash_value);
    transparent_crc(g_1775, "g_1775", print_hash_value);
    transparent_crc(g_1780, "g_1780", print_hash_value);
    transparent_crc(g_1934, "g_1934", print_hash_value);
    transparent_crc(g_2385, "g_2385", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_2475[i][j], "g_2475[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_2559[i], "g_2559[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2564, "g_2564", print_hash_value);
    transparent_crc(g_2802, "g_2802", print_hash_value);
    transparent_crc(g_3209, "g_3209", print_hash_value);
    transparent_crc(g_3229.f0, "g_3229.f0", print_hash_value);
    transparent_crc(g_3231.f0, "g_3231.f0", print_hash_value);
    transparent_crc(g_3368, "g_3368", print_hash_value);
    transparent_crc(g_3449, "g_3449", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_3514[i], "g_3514[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
