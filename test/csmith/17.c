// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 2244AD1E
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



static int32_t g_2 = 0xAC204E2DL;
static int32_t g_36 = 1L;
static int32_t g_62 = (-1L);
static uint8_t g_65 = 0xC3L;
static uint32_t g_88[10][6] = {{4294967288UL,0xDC1DF722L,0xDC1DF722L,4294967288UL,8UL,0UL},{0UL,4294967288UL,1UL,4294967288UL,0UL,0xC75B897EL},{4294967288UL,0UL,0xC75B897EL,0xC75B897EL,0UL,4294967288UL},{0xDC1DF722L,4294967288UL,8UL,0UL,8UL,4294967288UL},{8UL,0xDC1DF722L,0xC75B897EL,1UL,1UL,0xC75B897EL},{8UL,8UL,1UL,0UL,7UL,0UL},{0xDC1DF722L,8UL,0xDC1DF722L,0xC75B897EL,1UL,1UL},{4294967288UL,0xDC1DF722L,0xDC1DF722L,4294967288UL,7UL,0xC75B897EL},{0xC75B897EL,0xDC1DF722L,8UL,0xDC1DF722L,0xC75B897EL,1UL},{0xDC1DF722L,0xC75B897EL,1UL,1UL,0xC75B897EL,0xDC1DF722L}};
static int32_t *g_99[9][9][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
static int32_t **g_98 = &g_99[2][0][0];
static uint16_t g_101 = 1UL;
static int32_t g_110 = 0xF19E1DE5L;
static int64_t g_113[5][10][1] = {{{9L},{0x0685852762AA9168LL},{0xA015B29D1CA74A03LL},{1L},{2L},{(-3L)},{2L},{1L},{0xA015B29D1CA74A03LL},{0x0685852762AA9168LL}},{{9L},{0x0C4036C84AEC7FB9LL},{0x0C4036C84AEC7FB9LL},{9L},{0x0685852762AA9168LL},{0xA015B29D1CA74A03LL},{1L},{2L},{(-3L)},{2L}},{{1L},{0xA015B29D1CA74A03LL},{0x0685852762AA9168LL},{9L},{0x0C4036C84AEC7FB9LL},{0x0C4036C84AEC7FB9LL},{9L},{0x0685852762AA9168LL},{0xA015B29D1CA74A03LL},{1L}},{{2L},{(-3L)},{2L},{1L},{0xA015B29D1CA74A03LL},{0x0685852762AA9168LL},{9L},{0x0C4036C84AEC7FB9LL},{0x0C4036C84AEC7FB9LL},{9L}},{{0x0685852762AA9168LL},{0xA015B29D1CA74A03LL},{1L},{2L},{(-3L)},{2L},{1L},{0xA015B29D1CA74A03LL},{0x0685852762AA9168LL},{9L}}};
static int32_t g_143 = (-4L);
static int64_t *g_169 = &g_113[4][0][0];
static int64_t **g_168 = &g_169;
static const uint32_t g_175 = 0x92424975L;
static int8_t g_177[10][3][4] = {{{0x29L,0x91L,(-8L),(-1L)},{1L,0xEBL,0x86L,7L},{(-1L),0xA1L,(-4L),7L}},{{(-8L),0xEBL,0x5FL,(-1L)},{0xFDL,0x91L,1L,0x5FL},{0xA1L,0xFBL,0xF2L,0xFBL}},{{1L,(-1L),(-9L),(-8L)},{0x12L,0xA1L,0x91L,0x86L},{0xCCL,0L,0x5FL,(-4L)}},{{0xCCL,(-1L),0x91L,0x5FL},{0x12L,(-4L),(-9L),1L},{1L,0x90L,0x90L,0x90L}},{{1L,1L,0xCCL,0xEBL},{0x86L,0x12L,7L,0xCDL},{0xF2L,0xCCL,0xFDL,7L}},{{(-1L),0xCCL,0x61L,0xCDL},{0xCCL,0x12L,0L,0xEBL},{0x91L,1L,0x5FL,0x90L}},{{7L,0xA1L,7L,0xCCL},{(-8L),0xFDL,(-8L),7L},{(-4L),(-8L),(-1L),0xFDL}},{{0xCCL,(-1L),(-1L),0x61L},{(-4L),1L,(-8L),0L},{(-8L),0x29L,7L,0x5FL}},{{7L,0x5FL,0x5FL,7L},{0x91L,0xCDL,0L,(-8L)},{0xCCL,(-1L),0x61L,(-1L)}},{{(-1L),1L,0xFDL,(-1L)},{0xF2L,(-1L),7L,(-8L)},{0x86L,0xCDL,0xCCL,7L}}};
static uint64_t g_179 = 0x2836864C590541D0LL;
static uint8_t g_181 = 0xB7L;
static int8_t g_182 = (-2L);
static int16_t g_184 = 0x4625L;
static const uint8_t *g_199[4] = {&g_181,&g_181,&g_181,&g_181};
static const uint8_t **g_198 = &g_199[3];
static const uint16_t g_226 = 65530UL;
static uint8_t g_286 = 3UL;
static int8_t g_307 = 4L;
static uint64_t *g_377 = &g_179;
static uint64_t **g_376 = &g_377;
static int64_t *** const g_395 = &g_168;
static int64_t *** const *g_394 = &g_395;
static int64_t *** const **g_393 = &g_394;
static uint16_t *g_415 = (void*)0;
static uint16_t **g_414 = &g_415;
static uint16_t ***g_413 = &g_414;
static uint8_t g_462[10] = {255UL,0UL,255UL,0UL,255UL,0UL,255UL,0UL,255UL,0UL};
static uint16_t ****g_507 = &g_413;
static uint16_t *****g_506[6] = {&g_507,&g_507,&g_507,&g_507,&g_507,&g_507};
static int16_t g_555[8][10] = {{0xFEBBL,0xFEBBL,0x8CF6L,0xFEBBL,0xFEBBL,0x8CF6L,0xFEBBL,0xFEBBL,0x8CF6L,0xFEBBL},{0xFEBBL,(-1L),(-1L),0xFEBBL,(-1L),(-1L),0xFEBBL,(-1L),(-1L),0xFEBBL},{(-1L),0xFEBBL,(-1L),(-1L),0xFEBBL,(-1L),(-1L),0xFEBBL,(-1L),(-1L)},{0xFEBBL,0xFEBBL,0x8CF6L,0xFEBBL,0xFEBBL,0x8CF6L,0xFEBBL,0xFEBBL,0x8CF6L,0xFEBBL},{0xFEBBL,(-1L),(-1L),0xFEBBL,(-1L),(-1L),0xFEBBL,(-1L),(-1L),0xFEBBL},{(-1L),0xFEBBL,(-1L),(-1L),0xFEBBL,(-1L),(-1L),0xFEBBL,(-1L),(-1L)},{0xFEBBL,0xFEBBL,0x8CF6L,0xFEBBL,0xFEBBL,0x8CF6L,0xFEBBL,0xFEBBL,0x8CF6L,0xFEBBL},{0xFEBBL,(-1L),(-1L),0xFEBBL,(-1L),(-1L),0xFEBBL,(-1L),(-1L),0xFEBBL}};
static int64_t g_669 = (-1L);
static uint8_t **g_692 = (void*)0;
static int8_t *g_699 = (void*)0;
static uint16_t g_774[7][9][4] = {{{1UL,65535UL,0x8D47L,65535UL},{1UL,65535UL,0xC9E9L,0x3B68L},{65535UL,0x76D1L,1UL,0x23F9L},{65532UL,0x4B74L,1UL,0x3445L},{1UL,0x76D1L,9UL,1UL},{0x743AL,1UL,65532UL,0xCB87L},{0x5C6FL,65530UL,0x3B68L,0x7C4BL},{65535UL,0x8D47L,0x4B74L,0x7F51L},{65535UL,65534UL,65535UL,0UL}},{{9UL,65535UL,0x0DCFL,0x76D1L},{0x66A7L,0x7C4BL,1UL,65535UL},{0x8D47L,0xC0A7L,1UL,0x3F5FL},{0x66A7L,1UL,0x0DCFL,65532UL},{9UL,65535UL,65535UL,65533UL},{65535UL,65533UL,0x4B74L,1UL},{65535UL,9UL,0x3B68L,65535UL},{0x5C6FL,0xCD3CL,65532UL,65535UL},{0x743AL,0x5C6FL,9UL,65534UL}},{{1UL,65535UL,65535UL,1UL},{0x3B68L,65535UL,0xCD3CL,9UL},{1UL,0x3F5FL,0x76D1L,65535UL},{65535UL,65535UL,0x3445L,65535UL},{0x3907L,0x3F5FL,0xB338L,9UL},{0xC9E9L,65535UL,0x743AL,1UL},{0x0DCFL,65535UL,0xC9E9L,65534UL},{65535UL,0x5C6FL,1UL,65535UL},{0x7F51L,0xCD3CL,0x5913L,65535UL}},{{0x3F5FL,9UL,65530UL,1UL},{65535UL,65533UL,65535UL,65533UL},{0xCB87L,65535UL,65533UL,65532UL},{65532UL,1UL,65534UL,0x3F5FL},{0x3445L,0xC0A7L,65535UL,65535UL},{0x3445L,0x7C4BL,65534UL,0x76D1L},{65532UL,65535UL,65533UL,0UL},{0xCB87L,65534UL,65535UL,0x7F51L},{65535UL,0x8D47L,65530UL,0x7C4BL}},{{0x3F5FL,65530UL,0x5913L,0xCB87L},{0x7F51L,1UL,1UL,1UL},{65535UL,0x76D1L,0xC9E9L,0xC9E9L},{0x0DCFL,0x0DCFL,0x743AL,65535UL},{0xC9E9L,0x66A7L,0xB338L,65535UL},{0x3907L,1UL,0x3445L,0xB338L},{65535UL,1UL,0x76D1L,65535UL},{1UL,0x66A7L,0xCD3CL,65535UL},{0x3B68L,0x0DCFL,65535UL,0xC9E9L}},{{1UL,0x76D1L,9UL,1UL},{0x743AL,1UL,65532UL,0xCB87L},{0x5C6FL,65530UL,0x3B68L,0x7C4BL},{65535UL,0x8D47L,0x4B74L,0x7F51L},{65535UL,65534UL,65535UL,0UL},{9UL,65535UL,0x0DCFL,0x76D1L},{0x66A7L,0x7C4BL,1UL,0x7F51L},{0x3445L,65533UL,0xCD3CL,0x8D47L},{65535UL,0x3907L,0x743AL,0x3B68L}},{{0UL,65535UL,1UL,0x7C4BL},{1UL,0x7C4BL,0x0DCFL,0xCD3CL},{0xD12BL,0UL,65535UL,65535UL},{0x4B74L,65533UL,0x3B68L,0xB338L},{0x23F9L,0x4B74L,0UL,9UL},{0x3907L,1UL,1UL,0x3907L},{65535UL,1UL,65533UL,0UL},{65535UL,0x8D47L,0x66A7L,65532UL},{1UL,1UL,0xC9E9L,65532UL}}};
static int16_t g_920 = 0xAFAFL;
static int16_t g_935 = 0x18D8L;
static uint64_t g_947 = 8UL;
static uint8_t g_1014 = 0xF9L;
static int32_t g_1061 = (-10L);
static int32_t g_1157[3][1][9] = {{{3L,0L,3L,3L,0L,3L,3L,0L,3L}},{{0L,1L,0L,0L,1L,0L,0L,1L,0L}},{{3L,0L,3L,3L,0L,3L,3L,0L,3L}}};
static int16_t g_1160 = 0x1550L;
static uint32_t g_1252 = 8UL;
static int64_t ***g_1260[4] = {&g_168,&g_168,&g_168,&g_168};
static int64_t ****g_1259 = &g_1260[1];
static int64_t *****g_1258 = &g_1259;
static uint8_t g_1349 = 0x11L;
static uint8_t ****g_1351 = (void*)0;
static int32_t *g_1436 = &g_1157[2][0][6];
static int32_t **g_1435[8] = {&g_1436,&g_1436,&g_1436,&g_1436,&g_1436,&g_1436,&g_1436,&g_1436};
static int32_t g_1550 = 8L;
static int32_t ***g_1690 = &g_1435[3];
static int32_t ****g_1689 = &g_1690;
static uint32_t g_1737 = 5UL;



static uint32_t func_1(void);
static uint32_t func_5(uint16_t p_6, int16_t p_7, int8_t p_8);
static int16_t func_14(int16_t p_15, uint8_t p_16, uint64_t p_17);
static int16_t func_19(int64_t p_20, uint16_t p_21, uint16_t p_22, int8_t p_23, uint8_t p_24);
static int32_t * func_40(const int32_t * p_41);
static int32_t * func_42(int32_t * p_43, const int8_t p_44, int32_t * p_45, uint64_t p_46);
static int32_t * func_47(int32_t * p_48, const uint8_t p_49, int64_t p_50);
static int16_t func_71(uint16_t p_72, int32_t p_73, uint64_t p_74, int32_t p_75, int8_t p_76);
static uint16_t func_77(int32_t p_78, const int32_t p_79, uint64_t p_80, int32_t ** p_81);
static int32_t func_107(int32_t p_108);
# 97 "<stdin>"
static uint32_t func_1(void)
{
    uint32_t l_9 = 0x1220985AL;
    int32_t l_918 = 0L;
    int32_t l_919[2][3][5] = {{{(-1L),0x2489E986L,(-1L),(-1L),0x2489E986L},{0L,1L,0xD2237516L,(-1L),0xD2237516L},{0x2489E986L,0x2489E986L,0x97A1D88BL,0x2489E986L,0x2489E986L}},{{0xD2237516L,(-1L),0xD2237516L,1L,0L},{0x2489E986L,(-1L),(-1L),0x2489E986L,(-1L)},{0L,(-1L),0xD7CE57FBL,(-1L),0L}}};
    uint16_t l_945 = 0UL;
    int16_t l_1015 = (-1L);
    int32_t l_1016 = (-1L);
    uint16_t **l_1028[6][6] = {{&g_415,&g_415,&g_415,&g_415,&g_415,&g_415},{&g_415,&g_415,(void*)0,&g_415,&g_415,&g_415},{(void*)0,(void*)0,&g_415,&g_415,&g_415,&g_415},{(void*)0,&g_415,(void*)0,(void*)0,&g_415,(void*)0},{&g_415,&g_415,(void*)0,&g_415,&g_415,&g_415},{&g_415,&g_415,(void*)0,&g_415,&g_415,(void*)0}};
    int8_t l_1035 = 1L;
    int32_t *l_1066 = &g_2;
    int32_t *l_1067 = &l_1016;
    int32_t *l_1068 = &g_143;
    int32_t *l_1069[3][2];
    uint32_t l_1070[1];
    int64_t **l_1114 = (void*)0;
    uint8_t ***l_1136 = &g_692;
    uint8_t **** const l_1135[9][8][3] = {{{&l_1136,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136}},{{&l_1136,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,(void*)0,&l_1136},{&l_1136,&l_1136,&l_1136}},{{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,(void*)0,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,(void*)0,&l_1136},{&l_1136,&l_1136,&l_1136}},{{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,(void*)0,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,(void*)0,&l_1136},{&l_1136,&l_1136,&l_1136}},{{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,(void*)0,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,(void*)0,&l_1136},{&l_1136,&l_1136,&l_1136}},{{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,(void*)0,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,(void*)0,&l_1136},{&l_1136,&l_1136,&l_1136}},{{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,(void*)0,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,(void*)0,&l_1136},{&l_1136,&l_1136,&l_1136}},{{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,(void*)0,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,(void*)0,&l_1136},{&l_1136,&l_1136,&l_1136}},{{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,(void*)0,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136},{(void*)0,(void*)0,&l_1136},{&l_1136,&l_1136,&l_1136}}};
    uint32_t *l_1142 = &l_1070[0];
    uint16_t ***l_1290 = &l_1028[5][0];
    uint32_t l_1304 = 2UL;
    uint64_t l_1382 = 0xD349D0DDE32129EELL;
    uint16_t l_1401 = 1UL;
    uint64_t l_1418 = 0UL;
    int32_t **l_1438 = &g_1436;
    uint32_t l_1549 = 1UL;
    uint32_t l_1596 = 0UL;
    const uint64_t **l_1597 = (void*)0;
    int32_t l_1713 = (-6L);
    uint32_t l_1793 = 0UL;
    int32_t *** const *l_1811 = &g_1690;
    uint8_t l_1843[6][5][5] = {{{0UL,0UL,0xB2L,255UL,251UL},{255UL,0xDAL,0UL,255UL,1UL},{0UL,0xFFL,1UL,1UL,0x35L},{246UL,7UL,1UL,0UL,0x14L},{0xE7L,0x9EL,255UL,3UL,0x67L}},{{0UL,0xE7L,1UL,250UL,249UL},{0UL,0xB6L,0x67L,0x6EL,255UL},{0xE7L,0xB2L,1UL,250UL,255UL},{1UL,0xB2L,250UL,3UL,0x9DL},{0UL,0xB6L,255UL,0UL,255UL}},{{0xB6L,0xE7L,255UL,255UL,255UL},{0x9EL,0x9EL,250UL,0xEBL,249UL},{0xB6L,7UL,1UL,0xEBL,0x67L},{0UL,0x35L,0x67L,255UL,0x14L},{1UL,7UL,1UL,0UL,0x14L}},{{0xE7L,0x9EL,255UL,3UL,0x67L},{0UL,0xE7L,1UL,250UL,249UL},{0UL,0xB6L,0x67L,0x6EL,255UL},{0xE7L,0xB2L,1UL,250UL,255UL},{1UL,0xB2L,250UL,3UL,0x9DL}},{{0UL,0xB6L,255UL,0UL,255UL},{0xB6L,0xE7L,255UL,255UL,255UL},{0x9EL,0x9EL,250UL,0xEBL,249UL},{0xB6L,7UL,1UL,0xEBL,0x67L},{0UL,0x35L,0x67L,255UL,0x14L}},{{1UL,7UL,1UL,0UL,0x14L},{0xE7L,0x9EL,255UL,3UL,0x67L},{0UL,0xE7L,1UL,250UL,249UL},{0UL,0xB6L,0x67L,0x6EL,255UL},{0xE7L,0xB2L,1UL,250UL,255UL}}};
    int8_t l_1847 = (-1L);
    uint32_t l_1866 = 0x6109B7A0L;
    int32_t * const l_1867 = &l_1016;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_1069[i][j] = &g_110;
    }
    for (i = 0; i < 1; i++)
        l_1070[i] = 0xD1022EFDL;
    for (g_2 = 11; (g_2 > 10); g_2--)
    {
        uint8_t l_25[9];
        int32_t *l_909 = (void*)0;
        const uint16_t *l_976 = &g_226;
        const uint16_t **l_975[3][8];
        int16_t *l_977 = (void*)0;
        int16_t *l_978 = &g_920;
        uint8_t l_979 = 0xE0L;
        uint16_t l_980 = 0x699DL;
        int32_t *l_981[8][9] = {{&g_62,(void*)0,&l_918,&g_36,(void*)0,(void*)0,&g_36,&l_918,(void*)0},{(void*)0,&g_36,&g_62,&g_143,(void*)0,&g_143,&g_62,&g_36,(void*)0},{(void*)0,&g_62,&l_918,&g_62,&g_62,&l_918,&g_62,(void*)0,&g_2},{(void*)0,&g_36,&l_919[0][1][0],&g_62,&l_919[0][1][0],&g_36,(void*)0,&g_62,(void*)0},{(void*)0,(void*)0,&g_62,&g_62,(void*)0,(void*)0,&l_918,&g_62,&g_2},{(void*)0,&g_36,&g_36,&g_36,(void*)0,&g_62,&g_36,&g_62,(void*)0},{&g_62,&g_36,&g_36,&g_62,&g_2,&g_62,&l_918,(void*)0,(void*)0},{&l_919[0][1][0],&g_62,&l_919[0][1][0],&g_36,(void*)0,&g_62,(void*)0,&g_36,&l_919[0][1][0]}};
        uint8_t *l_1004 = &l_25[8];
        uint16_t *l_1013 = &g_774[3][7][1];
        int32_t *l_1019 = &l_919[0][1][0];
        int32_t l_1037 = (-5L);
        uint16_t l_1040 = 0x26B9L;
        int64_t * const **l_1055 = (void*)0;
        int64_t * const ***l_1054 = &l_1055;
        int64_t * const ****l_1053 = &l_1054;
        int i, j;
        for (i = 0; i < 9; i++)
            l_25[i] = 0x88L;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 8; j++)
                l_975[i][j] = &l_976;
        }
    }
    l_1070[0]--;
    for (g_184 = 0; (g_184 <= 19); ++g_184)
    {
        int32_t l_1077 = (-1L);
        int64_t *l_1084 = &g_669;
        int16_t *l_1089 = (void*)0;
        int16_t *l_1090 = (void*)0;
        int16_t *l_1091 = &g_920;
        int32_t l_1107 = 0L;
        int32_t l_1127[3][7] = {{0xB2806415L,(-1L),0xB2806415L,4L,(-1L),6L,6L},{(-1L),0x478777CBL,0x6540860BL,0x478777CBL,(-1L),0x6540860BL,0L},{0L,6L,4L,0L,4L,6L,0L}};
        uint8_t l_1132 = 9UL;
        uint32_t *l_1143[3];
        int8_t l_1251 = 1L;
        uint32_t l_1279 = 0xEF2B7669L;
        uint32_t l_1326 = 4294967286UL;
        const uint8_t l_1327 = 255UL;
        uint16_t ****l_1335 = (void*)0;
        uint32_t l_1406 = 4294967295UL;
        int32_t l_1417 = 1L;
        int32_t *** const l_1444 = &g_98;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1143[i] = &l_1070[0];
        (*l_1067) &= (safe_mod_func_uint16_t_u_u((l_1077 < ((*l_1091) = (((((**g_395) == (void*)0) , ((safe_lshift_func_int8_t_s_u(((((safe_lshift_func_uint8_t_u_s((*l_1068), 6)) >= (((safe_lshift_func_int8_t_s_u((((&l_9 == &g_175) , l_1084) == (****g_393)), 5)) || (safe_rshift_func_int8_t_s_s((((((safe_add_func_uint32_t_u_u((*l_1066), 6L)) < 1UL) | g_307) || l_1077) < l_1077), 6))) && g_935)) >= (*l_1068)) ^ l_1077), (**g_198))) , (**g_376))) ^ 0xFA03A42A57E5BE69LL) ^ (-2L)))), (*l_1066)));
        if (((*l_1066) = ((((((*g_377) = (safe_sub_func_uint8_t_u_u((0x28C1L ^ ((safe_sub_func_uint32_t_u_u((((*l_1084) = ((*g_169) ^= 9L)) | 0xB4FA205B025438F9LL), (l_1077 , ((*l_1068) ^= ((void*)0 != (*g_98)))))) && (*g_377))), l_1077))) && ((**g_376) = (*l_1068))) & (*l_1067)) , (*g_377)) , 0xDAAAC7EBL)))
        {
            int8_t l_1106 = 0xF7L;
            int32_t l_1128 = (-1L);
            int32_t l_1129 = (-1L);
            int32_t l_1130[10][3][2] = {{{0L,0x11A6A214L},{0x11A6A214L,0x9143E574L},{0x4BA2D243L,(-1L)}},{{(-10L),0x4BA2D243L},{0x9A03672DL,0xB4AA5F21L},{1L,(-1L)}},{{(-10L),0x9A03672DL},{(-1L),0x9143E574L},{(-10L),1L}},{{0L,1L},{(-10L),0x9143E574L},{(-1L),0x9A03672DL}},{{(-10L),(-1L)},{1L,0xB4AA5F21L},{0x9A03672DL,0x4BA2D243L}},{{(-10L),(-1L)},{0x4BA2D243L,0x9143E574L},{0x11A6A214L,0x11A6A214L}},{{0L,(-10L)},{1L,0x9143E574L},{0x254DFE38L,1L}},{{(-10L),0x254DFE38L},{(-1L),0xB4AA5F21L},{(-1L),0x254DFE38L}},{{(-10L),1L},{0x254DFE38L,0x9143E574L},{1L,(-10L)}},{{0L,0x11A6A214L},{0x11A6A214L,0x9143E574L},{0x4BA2D243L,(-1L)}}};
            int8_t l_1131[10] = {6L,(-8L),6L,(-8L),6L,(-8L),6L,(-8L),6L,(-8L)};
            int i, j, k;
            (*l_1067) |= (-1L);
            (*l_1066) |= (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((0x96AD87D3870F5E12LL > (*****g_393)), (safe_add_func_int16_t_s_s((g_947 ^ ((safe_sub_func_uint64_t_u_u((*g_377), (((safe_sub_func_uint64_t_u_u((l_1077 &= (g_555[5][6] | ((void*)0 != l_1084))), ((**g_376) ^ l_1106))) > 0L) >= 0x9875271A16E6B857LL))) | (*g_377))), l_1107)))), l_1106));
            for (l_945 = 0; (l_945 > 41); l_945 = safe_add_func_int64_t_s_s(l_945, 2))
            {
                int32_t *l_1110 = &l_919[0][1][4];
                int32_t **l_1111 = (void*)0;
                int32_t **l_1112 = (void*)0;
                int32_t **l_1113 = &l_1067;
                uint32_t l_1121 = 0xE4301024L;
                uint16_t **l_1124 = &g_415;
                (*l_1067) = l_1107;
                (*l_1113) = ((*g_98) = l_1110);
                (*l_1110) |= (l_1114 == ((safe_sub_func_uint64_t_u_u(((0x8B5FL < l_1107) | ((safe_rshift_func_int16_t_s_s((l_1121 != 246UL), (((safe_mul_func_int8_t_s_s((l_1077 |= 0xC9L), ((void*)0 == l_1124))) <= (safe_rshift_func_int16_t_s_u((g_2 , 0x2488L), 12))) , 1L))) != 0xA2L)), 1L)) , (void*)0));
            }
            --l_1132;
        }
        else
        {
            uint8_t ****l_1137 = &l_1136;
            l_1137 = l_1135[4][2][1];
        }
        for (g_669 = 0; (g_669 > 22); ++g_669)
        {
            uint8_t l_1140 = 0xCCL;
            (*l_1067) ^= l_1077;
            if (l_1140)
                continue;
        }
        for (g_65 = 0; (g_65 <= 3); g_65 += 1)
        {
            int16_t l_1144[3][2][2] = {{{0x7781L,0x7781L},{0x7781L,0x7781L}},{{0x7781L,0x7781L},{0x7781L,0x7781L}},{{0x7781L,0x7781L},{0x7781L,0x7781L}}};
            int32_t *l_1158 = &g_2;
            int32_t *l_1164 = &g_1061;
            int32_t **l_1163 = &l_1164;
            int32_t l_1195 = 5L;
            int32_t l_1198 = 0x52B98AEDL;
            int32_t l_1199 = 0L;
            uint16_t l_1202 = 65535UL;
            uint64_t l_1293 = 0xB4FA83B833940B48LL;
            int64_t l_1302[6] = {0x7A2806EEF0592671LL,0x7A2806EEF0592671LL,0x7A2806EEF0592671LL,0x7A2806EEF0592671LL,0x7A2806EEF0592671LL,0x7A2806EEF0592671LL};
            int32_t l_1306 = 0x043AF54BL;
            int8_t l_1328 = 0x78L;
            uint8_t ***l_1340 = &g_692;
            uint64_t l_1350 = 18446744073709551614UL;
            const uint16_t l_1398[4] = {65526UL,65526UL,65526UL,65526UL};
            uint32_t l_1399 = 1UL;
            const int32_t l_1419 = 0x72243E2EL;
            int32_t l_1427 = 0x84A81ADCL;
            int32_t l_1428 = (-7L);
            int32_t l_1430 = (-8L);
            int32_t l_1431 = (-6L);
            uint32_t l_1432 = 4294967287UL;
            int32_t l_1483[9] = {0x78935A20L,1L,0x78935A20L,1L,0x78935A20L,1L,0x78935A20L,1L,0x78935A20L};
            int i, j, k;
            l_1127[2][5] = (+((g_1061 >= ((l_1028[2][1] != l_1028[5][0]) , (l_1127[2][5] , ((l_1142 = l_1142) == l_1143[2])))) , (l_1144[2][1][0] | l_1144[2][1][0])));
            if ((*l_1067))
            {
                uint16_t **l_1145 = &g_415;
                int32_t l_1154 = 0xD459FB34L;
                for (g_1061 = 3; (g_1061 >= 0); g_1061 -= 1)
                {
                    int32_t l_1155 = 0x7A46841EL;
                    uint16_t **l_1156 = &g_415;
                    int i;
                    g_1157[2][0][8] = (l_1145 == ((((safe_mod_func_int16_t_s_s(((*l_1091) = 0x7AB1L), g_36)) == l_1144[1][1][1]) & (safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((((((-1L) & (****g_394)) <= (**g_198)) == g_36) | (l_1077 > (*g_169))), l_1154)) != l_1155), l_1154)), g_36))) , l_1156));
                    (*l_1067) = (*l_1068);
                }
                (*g_98) = (l_1158 = (*g_98));
            }
            else
            {
                uint64_t l_1159 = 18446744073709551615UL;
                return l_1159;
            }
            if (((l_1144[2][1][0] > g_1160) , ((*l_1066) , (((void*)0 != &l_1114) > ((((safe_div_func_uint8_t_u_u((((*l_1163) = l_1069[2][1]) != &g_1061), ((safe_rshift_func_int16_t_s_u(0x0791L, 9)) , 255UL))) >= l_1107) | g_113[0][2][0]) != g_555[2][7])))))
            {
                uint32_t l_1185 = 0xD23FCCB0L;
                int32_t l_1186 = 0L;
                int32_t *l_1188 = &g_110;
                int32_t l_1253 = 0x3C4962D1L;
                int64_t *** const **l_1262 = &g_394;
                int32_t l_1305[2][5][1] = {{{0L},{0x033448D3L},{(-1L)},{0x033448D3L},{0L}},{{0L},{0x033448D3L},{(-1L)},{0x033448D3L},{0L}}};
                int32_t l_1307[3][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
                const uint16_t l_1316 = 0x721DL;
                int8_t l_1321 = 0x07L;
                uint8_t l_1366 = 0xFCL;
                int i, j, k;
                if ((safe_rshift_func_uint16_t_u_u(1UL, 10)))
                {
                    int16_t l_1173 = 1L;
                    int64_t ***l_1182 = &l_1114;
                    int64_t ****l_1181 = &l_1182;
                    int64_t ***l_1184 = &g_168;
                    int64_t ****l_1183 = &l_1184;
                    int32_t l_1196 = 0x66FE04C2L;
                    int32_t l_1197 = 7L;
                    int32_t l_1200 = 0xDB362C0EL;
                    int32_t l_1201[3][9] = {{1L,0xDFCCECCFL,0xDFCCECCFL,1L,0L,0xAF6BE713L,0L,1L,0xDFCCECCFL},{0L,0L,0xDD702C70L,0xAF6BE713L,0x54D6665FL,0xAF6BE713L,0xDD702C70L,0L,0L},{0xDFCCECCFL,1L,0L,0xAF6BE713L,0L,1L,0xDFCCECCFL,0xDFCCECCFL,1L}};
                    int32_t *l_1209 = &l_919[0][1][0];
                    int i, j;
                    (*l_1068) &= 6L;
                    (*l_1068) = (~(~((safe_sub_func_uint8_t_u_u(l_1173, (safe_mod_func_int8_t_s_s((~(safe_mod_func_int64_t_s_s(((***g_395) = (****g_394)), (((0x13309FD5EA800930LL != ((safe_mod_func_uint64_t_u_u((l_1185 |= ((((*l_1066) <= 0x3A392EBEL) && (((g_935 <= ((((*l_1181) = &g_168) != ((*l_1183) = &l_1114)) >= (l_1173 , g_177[4][0][2]))) < l_1077) <= l_1173)) >= (**g_376))), l_1186)) | 18446744073709551606UL)) ^ l_1186) , l_1173)))), 1L)))) < l_1186)));
                    l_1209 = func_42(((!l_1173) , func_42(l_1164, l_1132, l_1188, (safe_add_func_int32_t_s_s(((l_1067 == &g_1157[1][0][3]) && l_1127[0][2]), ((g_1160 && (safe_rshift_func_uint8_t_u_u((((*l_1066) = (safe_div_func_uint16_t_u_u((l_1202++), (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((**g_198), (-1L))), 0x5CL))))) <= 0xAD09CF88L), 3))) >= g_62))))), g_184, &l_919[0][1][0], (*l_1188));
                    if ((*l_1067))
                        continue;
                }
                else
                {
                    uint8_t l_1250[8][2] = {{246UL,0xBFL},{0x86L,0x0CL},{0x0CL,0x86L},{0xBFL,246UL},{0xBFL,0x86L},{0xD2L,0xD2L},{246UL,0x86L},{0UL,0x86L}};
                    int32_t l_1254 = 0xF8D5C8C2L;
                    int i, j;
                    (*l_1066) &= 0xF1F6C482L;
                    l_1254 ^= ((+((((((safe_lshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_s((((*l_1084) = (l_1127[1][1] = (((safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((g_88[(g_65 + 5)][(g_65 + 1)] = ((safe_sub_func_int32_t_s_s((((((((safe_add_func_int32_t_s_s((*l_1066), 4294967286UL)) ^ (*l_1188)) && ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((*l_1066), (((0x50328C63L ^ ((l_1132 , (safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((--(*g_377)) && (safe_lshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s((safe_unary_minus_func_int32_t_s(0x4F4805F9L)), (((((*l_1188) = (((safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((**g_168) |= (safe_add_func_uint64_t_u_u(((((*l_1188) < (((*l_1188) , 1UL) != 0x7EA7L)) , (*g_168)) != (*g_168)), 0x638A966494962F95LL))), (**g_376))), l_1250[6][0])) , (*l_1188)) | 2L)) >= g_1157[1][0][2]) ^ 0x5D59F9EEL) && (-4L)))), 12))) & l_1251), (*l_1067))), (**g_198)))) & l_1250[6][0])) == g_1252) , (*l_1068)))), 1L)), g_65)) >= 0x8EL)) >= (*l_1068)) | (*l_1066)) ^ l_1127[2][5]) == 255UL), 0xCB9FAEE2L)) , 1UL)), g_286)), l_1250[6][0])) || (-1L)), 4)) >= 0x1FDCL), (*l_1068))) | (*l_1068)) <= l_1127[1][3]))) | g_1252), 4)) & g_143) ^ g_177[6][0][1]), 5)) <= 0L) , 246UL) || l_1250[5][0]) | 0x0FL) == l_1253)) == 0xF93DCB67D667FAEFLL);
                    if ((*l_1188))
                    {
                        (*g_98) = (*g_98);
                    }
                    else
                    {
                        int64_t l_1257[3];
                        int64_t *****l_1261 = &g_1259;
                        int8_t *l_1303 = &g_177[4][1][1];
                        int16_t l_1308 = 0L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1257[i] = 0x5FD6614FD92EAB5DLL;
                        (*l_1067) = ((safe_add_func_int8_t_s_s(l_1257[1], ((l_1261 = g_1258) != (g_181 , l_1262)))) >= ((safe_unary_minus_func_uint16_t_u((*l_1067))) & (((safe_add_func_uint64_t_u_u(((((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((255UL ^ (+((safe_div_func_uint16_t_u_u((*l_1068), g_555[0][7])) , (((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(((((safe_mod_func_int32_t_s_s(l_1279, l_1257[1])) | (**g_376)) < g_65) , g_36), 1L)) >= l_1250[6][0]), 1)) & (*****g_393)) , 0xD7E23EDE77162C4DLL)))) , l_1257[2]), (*l_1188))), g_177[4][0][2])) > l_1127[2][5]) | g_88[(g_65 + 5)][(g_65 + 1)]) & g_88[(g_65 + 5)][(g_65 + 1)]), (*****g_393))) != l_1257[2]) , 4L)));
                        (*l_1188) = (safe_sub_func_int32_t_s_s((((((safe_sub_func_int64_t_s_s(((safe_sub_func_int16_t_s_s((((((**g_198) >= ((*l_1303) &= ((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((l_1290 == (*g_507)) , (safe_div_func_uint8_t_u_u((l_1293 , ((*l_1188) < (safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0xDBFECBDCL, ((safe_add_func_int16_t_s_s((g_179 <= ((*l_1067) || l_1302[2])), g_182)) && l_1195))), 0xBBL)), (-1L))))), (**g_198)))), l_1279)), g_935)) <= (**g_376)))) != l_1304) , 8UL) != 0x6B5DL), (*l_1188))) , l_1305[0][1][0]), (***g_395))) | l_1306) , (*l_1068)) , l_1307[1][0]) ^ l_1250[7][1]), l_1308));
                        if (l_1251)
                            continue;
                    }
                }
                (*g_98) = (*g_98);
                if (((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((&g_394 == &g_1259), (l_1328 = ((safe_unary_minus_func_int8_t_s(g_1014)) >= (safe_rshift_func_int16_t_s_s((l_1107 && (l_1316 | ((safe_rshift_func_uint8_t_u_s(((((safe_mul_func_uint8_t_u_u((l_1321 = 0UL), (0x65ED05DCB68A902DLL || (safe_mul_func_int8_t_s_s(0x96L, (((safe_rshift_func_uint16_t_u_u(l_1326, l_1132)) != (*l_1188)) <= (**g_198))))))) <= 5UL) , (void*)0) != (*g_414)), 0)) <= l_1327))), 4)))))), 8L)) || 0L))
                {
                    uint8_t *** const l_1357 = (void*)0;
                    int16_t l_1358 = 0xEFDDL;
                    for (l_1326 = 0; (l_1326 <= 3); l_1326 += 1)
                    {
                        (*l_1068) |= (0x5B70L <= ((void*)0 == (***g_507)));
                    }
                    for (g_947 = 0; (g_947 <= 3); g_947 += 1)
                    {
                        uint8_t * const *l_1342 = (void*)0;
                        uint8_t * const ** const l_1341[8] = {&l_1342,&l_1342,&l_1342,&l_1342,&l_1342,&l_1342,&l_1342,&l_1342};
                        uint8_t *****l_1352 = &g_1351;
                        int32_t l_1359 = (-1L);
                        int i;
                        (*g_98) = ((1L ^ ((safe_mul_func_int8_t_s_s((g_1061 && (((safe_mod_func_int32_t_s_s(((**g_376) & ((((void*)0 == l_1335) & ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((l_1340 = &g_692) == l_1341[0]), 3)), 3)) > ((g_555[5][2] < (safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((l_1127[0][6] ^= g_1349), 6)) && 1UL) != 0UL), 0L))) | 0L))) & l_1350)), 0x61047541L)) , (*l_1068)) || 255UL)), (**g_198))) >= g_177[5][1][2])) , (void*)0);
                        (*l_1352) = g_1351;
                        if ((*l_1188))
                            continue;
                        (*g_98) = func_42((*g_98), (safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((l_1357 == (l_1358 , (void*)0)), 65526UL)) < (g_1160 > ((*l_1188) = (l_1293 >= (*l_1188))))), (((g_1061 < (*l_1068)) && l_1359) == l_1132))), (*g_98), (*g_377));
                    }
                    for (g_179 = 0; (g_179 <= 3); g_179 += 1)
                    {
                        return g_935;
                    }
                }
                else
                {
                    uint32_t l_1367 = 1UL;
                    (*l_1066) = ((((safe_sub_func_int64_t_s_s(l_1107, ((*l_1084) = ((*****g_393) = 0x2EBD12A2DD296787LL)))) || ((((*l_1068) ^ (safe_mul_func_uint8_t_u_u((g_935 < 0x5F6D9192L), (((void*)0 == l_1084) != ((((0x86FFA545220D1340LL && (safe_mod_func_uint16_t_u_u(1UL, 0x57DDL))) || 0x90042C13L) || (*l_1188)) ^ 0x5093CBD3L))))) & l_1366) > l_1326)) , 0x41B9BA5DL) == g_181);
                    ++l_1367;
                }
            }
            else
            {
                uint16_t l_1383 = 0x9326L;
                int32_t *l_1400 = &g_143;
                int32_t l_1422 = (-4L);
                int32_t l_1423 = (-7L);
                (*g_98) = func_42(func_42(func_42(func_42(&l_919[0][1][0], (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(g_1157[2][0][4], (((safe_div_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u((+(~(l_1382 = l_1077))), l_1383)) <= (*****g_393)) < ((safe_mod_func_uint64_t_u_u(((**g_376) = (safe_rshift_func_int8_t_s_s((((safe_add_func_int64_t_s_s((((safe_div_func_int16_t_s_s(1L, l_1077)) <= (safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((g_143 || (((((safe_rshift_func_uint8_t_u_u(l_1127[2][5], (**g_198))) ^ 1L) , l_1383) , l_1107) ^ g_179)) , l_1383), (-1L))), l_1383))) != l_1326), 0xF7F4F7FCC3E692BELL)) || 0L) && 4294967295UL), l_1398[3]))), l_1132)) , l_1399)) >= l_1132), 246UL)) , l_1383) < g_65))) <= (-3L)), 8)), 8)), l_1400, l_1195), g_184, &l_1306, l_1401), l_1326, (*g_98), l_1279), (*l_1400), (*g_98), l_1327);
                if (((l_1328 && ((((***g_395) = 6L) > l_1279) | ((((safe_lshift_func_int8_t_s_s((((((*l_1142) |= ((l_1127[1][0] = ((safe_sub_func_int64_t_s_s(l_1406, (((safe_mod_func_uint64_t_u_u((((*l_1084) = (safe_mod_func_int16_t_s_s((g_555[0][7] = ((*g_377) ^ (safe_rshift_func_uint16_t_u_u(((*l_1400) = (((((*l_1400) || g_774[3][7][1]) ^ ((safe_add_func_int16_t_s_s(7L, (safe_div_func_int32_t_s_s(((*l_1066) ^= l_1132), g_62)))) >= (*l_1067))) , l_1327) > 0L)), 15)))), g_182))) & 0x1BEE071645FB8D22LL), (-4L))) && 0x62L) && l_1417))) , 0x82L)) ^ l_1326)) != l_1418) >= (*g_377)) && l_1419), 3)) < 0xFA9C9666L) >= l_1279) , 0UL))) , l_1132))
                {
                    int32_t l_1420[2];
                    int32_t l_1421[8] = {0x46D0C0B3L,(-2L),0x46D0C0B3L,0x46D0C0B3L,(-2L),0x46D0C0B3L,0x46D0C0B3L,(-2L)};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1420[i] = (-2L);
                    for (l_945 = 0; (l_945 <= 3); l_945 += 1)
                    {
                        int16_t l_1424 = 0xD7EEL;
                        int32_t l_1425 = 1L;
                        int32_t l_1426 = 0xEC4D38C1L;
                        int32_t l_1429[7][6][6] = {{{0L,0x13C5FDF2L,3L,1L,0L,0xB2707FE3L},{1L,0x13C5FDF2L,0xB3A7B9B7L,(-2L),0x2C75B2E9L,0xD200A916L},{(-7L),5L,0xD329AB92L,0x0267320DL,0x2C75B2E9L,0xA5A49B25L},{8L,0x13C5FDF2L,(-1L),8L,0L,0xBD74F969L},{0xFC84650EL,0x13C5FDF2L,0L,0xFC4F2A83L,0x2C75B2E9L,5L},{(-10L),5L,0x198A2710L,5L,0x2C75B2E9L,1L}},{{0x146EA849L,0x13C5FDF2L,0x7BB7D1FDL,0L,0L,0L},{0x0A3D8C52L,0x13C5FDF2L,0x2C75B2E9L,3L,0x2C75B2E9L,0x13C5FDF2L},{0x5E0F4FD8L,5L,9L,0x08C979D8L,0x2C75B2E9L,0x951AE12AL},{0L,0x13C5FDF2L,3L,1L,0L,0xB2707FE3L},{1L,0x13C5FDF2L,0xB3A7B9B7L,(-2L),0x2C75B2E9L,0xD200A916L},{(-7L),5L,0xD329AB92L,0x0267320DL,0x2C75B2E9L,0xA5A49B25L}},{{8L,0x13C5FDF2L,(-1L),8L,0L,0xBD74F969L},{0xFC84650EL,0x13C5FDF2L,0L,0xFC4F2A83L,0x2C75B2E9L,5L},{(-10L),5L,0x198A2710L,5L,0x2C75B2E9L,1L},{0x146EA849L,0x13C5FDF2L,0x7BB7D1FDL,0L,0L,0L},{0x0A3D8C52L,0x13C5FDF2L,0x2C75B2E9L,3L,0x2C75B2E9L,0x13C5FDF2L},{0x5E0F4FD8L,5L,9L,0x08C979D8L,0x2C75B2E9L,0x951AE12AL}},{{0L,0x13C5FDF2L,3L,1L,0L,0xB2707FE3L},{1L,0x13C5FDF2L,0xB3A7B9B7L,(-2L),0x2C75B2E9L,0xD200A916L},{(-7L),5L,0xD329AB92L,0x0267320DL,0x2C75B2E9L,0xA5A49B25L},{8L,0x13C5FDF2L,(-1L),8L,0L,0xBD74F969L},{0xFC84650EL,0x13C5FDF2L,0L,0xFC4F2A83L,0x2C75B2E9L,5L},{(-10L),5L,0x198A2710L,5L,0x2C75B2E9L,1L}},{{0x146EA849L,0x13C5FDF2L,0x7BB7D1FDL,0L,0L,0L},{0x0A3D8C52L,0x13C5FDF2L,0x2C75B2E9L,3L,0x2C75B2E9L,0x13C5FDF2L},{0x5E0F4FD8L,5L,9L,0x08C979D8L,0x2C75B2E9L,0x951AE12AL},{0L,0x13C5FDF2L,3L,1L,0L,0xB2707FE3L},{1L,9L,(-10L),0xB2707FE3L,4L,0x58E291F5L},{0L,0x6184115AL,0L,1L,4L,1L}},{{0x7BB7D1FDL,9L,0xA9C2162BL,0xD200A916L,0xBA6C061DL,0x1474B452L},{9L,9L,0xBA6C061DL,0L,4L,0x6184115AL},{0xB3A7B9B7L,0x6184115AL,0x63D2C403L,0xA5A49B25L,4L,9L},{(-1L),9L,0x624593C0L,0x13C5FDF2L,0xBA6C061DL,1L},{0x198A2710L,9L,4L,0xBD74F969L,4L,9L},{0x2C75B2E9L,0x6184115AL,0xD42D383CL,0x951AE12AL,4L,2L}},{{3L,9L,(-6L),5L,0xBA6C061DL,0xCA6ED906L},{0xD329AB92L,9L,(-10L),0xB2707FE3L,4L,0x58E291F5L},{0L,0x6184115AL,0L,1L,4L,1L},{0x7BB7D1FDL,9L,0xA9C2162BL,0xD200A916L,0xBA6C061DL,0x1474B452L},{9L,9L,0xBA6C061DL,0L,4L,0x6184115AL},{0xB3A7B9B7L,0x6184115AL,0x63D2C403L,0xA5A49B25L,4L,9L}}};
                        int i, j, k;
                        (*l_1067) = l_1420[1];
                        l_1432--;
                    }
                    for (l_1016 = 3; (l_1016 >= 0); l_1016 -= 1)
                    {
                        int32_t ***l_1437 = &l_1163;
                        uint8_t l_1439 = 0x0CL;
                        (*l_1066) = ((l_1438 = ((*l_1437) = g_1435[3])) != &l_1164);
                        ++l_1439;
                        (*l_1068) = (safe_rshift_func_int8_t_s_u(l_1439, 7));
                        (*g_98) = (*g_98);
                    }
                }
                else
                {
                    int8_t l_1453 = (-5L);
                    int32_t l_1457 = 0x8FA4326AL;
                    int32_t l_1458 = 0x08A0879FL;
                    uint32_t l_1459 = 0x36E11D51L;
                    uint8_t *** const *l_1462 = &l_1136;
                    (*l_1067) = (((void*)0 == l_1444) != ((l_1340 = (void*)0) != &g_692));
                    if ((*l_1400))
                        continue;
                    for (g_935 = 0; (g_935 <= 3); g_935 += 1)
                    {
                        uint32_t l_1449[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                        int8_t *l_1452 = (void*)0;
                        uint8_t *** const *l_1460 = &l_1136;
                        uint8_t *** const **l_1461[9];
                        uint64_t l_1465 = 18446744073709551609UL;
                        int32_t l_1477[2][6][8] = {{{0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL},{0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL},{0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL},{0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL},{0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL},{0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL}},{{0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL},{0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL},{0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL},{0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL},{0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL},{0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL,0xF17ADB99L,0xC2F7DDCCL}}};
                        uint64_t *l_1484[6][9] = {{&g_179,(void*)0,&l_1382,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_179},{&l_1382,&l_1293,&l_1465,&l_1382,&l_1382,&l_1465,&l_1293,&l_1382,&g_947},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1382,&l_1382,&l_1465,&l_1293,&l_1382,&g_947,&l_1293,&l_1293,&g_947},{(void*)0,(void*)0,&g_179,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_179},{&l_1382,&l_1293,&l_1465,&l_1382,&l_1382,&l_1465,&l_1293,&l_1382,&g_947}};
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                            l_1461[i] = &l_1460;
                        (*l_1067) = (((safe_div_func_uint32_t_u_u(8UL, (l_1458 |= ((safe_mul_func_uint16_t_u_u(l_1449[3], (*l_1066))) >= ((safe_mul_func_uint16_t_u_u(l_1398[3], ((l_1453 = (g_181 & ((void*)0 == l_1452))) || (safe_mod_func_uint32_t_u_u((~l_1449[5]), l_1449[3]))))) & l_1457))))) == l_1457) & 0x417DL);
                        if (l_1459)
                            break;
                        l_1462 = l_1460;
                        (*l_1068) = (safe_sub_func_int8_t_s_s((((**g_198) ^ l_1465) , ((safe_add_func_int16_t_s_s((((l_1458 = (safe_sub_func_int32_t_s_s(((-1L) < (+(((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((((void*)0 != &g_177[4][0][2]) & (l_1477[0][1][5] = (*g_377))) > (**g_198)), (+(l_1449[3] , ((l_1457 = (safe_sub_func_uint64_t_u_u((g_947 = (safe_sub_func_uint8_t_u_u((l_1483[6] || 0x7A9CF117L), l_1459))), 0L))) != l_1458))))), l_1458)) && 0UL) != l_1449[2]))), l_1430))) > (*l_1066)) | (**g_376)), l_1453)) & l_1453)), 247UL));
                    }
                }
            }
            if ((*l_1067))
                continue;
        }
    }
    for (l_918 = (-3); (l_918 != 6); l_918++)
    {
        int8_t l_1506 = 0x8DL;
        uint8_t l_1521 = 1UL;
        int32_t l_1522 = 0x303AD4FDL;
        int8_t *l_1523 = &g_182;
        int16_t *l_1524 = (void*)0;
        int16_t *l_1525[1];
        int64_t l_1526 = 1L;
        int64_t * const *l_1528 = &g_169;
        int64_t * const **l_1527[8] = {&l_1528,&l_1528,(void*)0,&l_1528,&l_1528,(void*)0,&l_1528,&l_1528};
        uint32_t l_1548 = 1UL;
        int32_t l_1555 = 4L;
        uint32_t l_1574 = 0x4AF45734L;
        uint32_t l_1575 = 0UL;
        int32_t l_1611[8] = {(-1L),3L,(-1L),3L,(-1L),3L,(-1L),3L};
        int8_t l_1642 = (-5L);
        uint8_t *l_1686 = &l_1521;
        uint8_t * const * const l_1685 = &l_1686;
        uint8_t * const * const *l_1684 = &l_1685;
        uint8_t * const * const **l_1683 = &l_1684;
        uint8_t * const * const ***l_1682 = &l_1683;
        int32_t ****l_1691 = (void*)0;
        int16_t l_1734 = (-1L);
        int32_t l_1770 = (-6L);
        uint16_t ****l_1861 = (void*)0;
        uint8_t *l_1864[2];
        int i;
        for (i = 0; i < 1; i++)
            l_1525[i] = &l_1015;
        for (i = 0; i < 2; i++)
            l_1864[i] = &g_181;
    }
    return g_88[1][1];
}







static uint32_t func_5(uint16_t p_6, int16_t p_7, int8_t p_8)
{
    int32_t *l_35[7];
    uint8_t l_37 = 255UL;
    uint8_t l_833 = 0x05L;
    uint16_t * const *l_857 = &g_415;
    uint16_t * const **l_856 = &l_857;
    uint16_t * const ***l_855 = &l_856;
    uint8_t l_880 = 247UL;
    int16_t l_895 = 0x54B0L;
    int16_t l_896 = (-1L);
    uint16_t l_897 = 1UL;
    int i;
    for (i = 0; i < 7; i++)
        l_35[i] = &g_36;
lbl_866:
    l_37++;
    for (p_6 = 0; (p_6 <= 6); p_6 += 1)
    {
        int32_t l_816 = (-3L);
        uint32_t *l_834[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_843 = 0x3814CB81L;
        int32_t l_844 = 0xEB1E69FBL;
        int32_t l_845 = 0xDAB30C83L;
        int i;
        l_35[0] = ((((*g_98) = func_40(l_35[p_6])) != l_35[p_6]) , l_35[p_6]);
        l_816 &= 0xDEE65EC4L;
        l_845 = (l_844 = (l_843 = (((safe_sub_func_int32_t_s_s((l_816 |= (safe_div_func_int32_t_s_s((0x5AL ^ (safe_mod_func_uint64_t_u_u((*g_377), (safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s((0x08L ^ (safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((p_6 | ((g_88[6][1] ^= (safe_lshift_func_uint16_t_u_u(p_8, l_833))) , (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(g_555[4][8], (safe_lshift_func_uint8_t_u_s((g_36 <= (p_6 != g_182)), 1)))), 5)), p_7)))), 0xC8B9L)) & (**g_168)), p_8))), p_8)), 0x7F174C07L))))), 0x37849534L))), 0xFC5593CAL)) == p_7) ^ p_7)));
        for (l_833 = 1; (l_833 <= 7); l_833 += 1)
        {
            uint16_t ****l_858 = &g_413;
            int32_t l_865 = 0x7436DB56L;
            int i;
            (*g_98) = l_35[p_6];
            for (g_669 = 0; (g_669 <= 3); g_669 += 1)
            {
                uint8_t *l_854 = &g_181;
                uint16_t *****l_859 = (void*)0;
                uint16_t *****l_860 = &g_507;
                int i, j, k;
                (*g_98) = l_35[(g_669 + 2)];
                l_865 = ((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(g_774[g_669][(g_669 + 4)][g_669], 7)) != (safe_div_func_int32_t_s_s(((*g_198) == l_854), ((((void*)0 == l_855) && (((*l_860) = l_858) != (void*)0)) , (safe_sub_func_uint16_t_u_u(((g_555[(g_669 + 3)][(g_669 + 5)] = ((safe_mod_func_int8_t_s_s(0L, g_555[(g_669 + 2)][l_833])) ^ p_6)) <= g_182), p_8)))))) >= 7UL), (-10L))), 0x502CL)) | p_6);
                if (l_816)
                    goto lbl_866;
                l_843 ^= (safe_mul_func_int16_t_s_s(0L, (safe_unary_minus_func_uint8_t_u((((safe_sub_func_int16_t_s_s(g_65, 0x8DDBL)) < (p_6 >= ((*****g_393) = (((safe_sub_func_uint8_t_u_u((((0x03L & ((((--g_462[4]) < (((l_880 , (safe_mod_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((0x1507957BF77A3C08LL >= ((((safe_mod_func_int8_t_s_s((((safe_add_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((((p_6 != (p_7 , p_7)) , p_8) <= p_8), g_181)) || p_6), p_6)) | p_6) , p_8), p_8)) < p_6) < 0xD3L) <= p_6)) || p_7) || p_8), p_6)), p_8)) , &g_199[3]) == (void*)0), 1UL)) , 0x2839L) , p_6), p_7))) | g_113[0][1][0]) < 0xC3A1FCB4L)) , 0x2EA31F17L) , p_8)) & p_6) >= l_895), p_6)) == p_6) > 0x9A2EL)))) & p_8)))));
            }
        }
    }
    l_897--;
    return p_8;
}







static int16_t func_14(int16_t p_15, uint8_t p_16, uint64_t p_17)
{
    uint16_t l_18 = 0x515FL;
    return l_18;
}







static int16_t func_19(int64_t p_20, uint16_t p_21, uint16_t p_22, int8_t p_23, uint8_t p_24)
{
    int32_t l_26 = 9L;
    uint32_t l_34 = 0UL;
    l_26 = g_2;
    for (p_20 = 0; (p_20 != 6); p_20 = safe_add_func_uint64_t_u_u(p_20, 6))
    {
        for (p_21 = 0; (p_21 < 41); p_21 = safe_add_func_int8_t_s_s(p_21, 9))
        {
            uint32_t l_31[4][7][4] = {{{5UL,0UL,0UL,0x4AB462A7L},{1UL,0UL,1UL,0xB221494FL},{4294967290UL,0x4AB462A7L,0x92079655L,1UL},{0UL,0UL,0x932384B6L,0x4AB462A7L},{0xA0BECC33L,4294967290UL,0x932384B6L,0UL},{0UL,5UL,0x92079655L,0xAC06E326L},{4294967290UL,1UL,1UL,4294967290UL}},{{1UL,4294967290UL,0UL,0xA0BECC33L},{5UL,0UL,4294967292UL,1UL},{4294967290UL,0xA0BECC33L,0xB221494FL,1UL},{0UL,0UL,0x932384B6L,0xA0BECC33L},{0x4AB462A7L,4294967290UL,0UL,4294967290UL},{0UL,1UL,0xB221494FL,0xAC06E326L},{0UL,5UL,1UL,0UL}},{{5UL,4294967290UL,0UL,0x4AB462A7L},{5UL,0UL,1UL,1UL},{0UL,0x4AB462A7L,0xB221494FL,0xB221494FL},{0UL,0UL,0UL,0x4AB462A7L},{0x4AB462A7L,0UL,0x932384B6L,4294967290UL},{0UL,5UL,0xB221494FL,0x932384B6L},{4294967290UL,5UL,4294967292UL,4294967290UL}},{{5UL,0UL,0UL,0x4AB462A7L},{1UL,0UL,1UL,0xB221494FL},{4294967290UL,0x4AB462A7L,0x92079655L,1UL},{0UL,0UL,0x932384B6L,0x4AB462A7L},{0xA0BECC33L,4294967290UL,0x932384B6L,0UL},{0UL,5UL,0x92079655L,0xAC06E326L},{4294967290UL,1UL,1UL,4294967290UL}}};
            int i, j, k;
            l_31[0][4][0]--;
        }
        return g_2;
    }
    return l_34;
}







static int32_t * func_40(const int32_t * p_41)
{
    int32_t *l_51 = &g_2;
    int32_t **l_82 = &l_51;
    int32_t l_756 = 0x0220AF05L;
    int32_t l_814 = 8L;
    uint64_t **l_815 = &g_377;
    (*l_82) = func_42(func_47(l_51, (safe_add_func_uint32_t_u_u(g_36, (safe_unary_minus_func_int8_t_s((&g_36 == &g_2))))), g_2), ((((func_19((((safe_div_func_int64_t_s_s((*l_51), g_2)) , func_14(func_71(func_77((l_82 != (void*)0), (**l_82), (*l_51), &l_51), g_286, (*l_51), (*l_51), l_756), (**l_82), (*l_51))) , (*l_51)), l_814, (**l_82), (**l_82), (**l_82)) , (*g_98)) != (void*)0) | 4UL) ^ 7L), (*l_82), (*l_51));
    (*l_82) = func_42((*l_82), g_110, (*l_82), (**g_376));
    l_815 = &g_377;
    return (*g_98);
}







static int32_t * func_42(int32_t * p_43, const int8_t p_44, int32_t * p_45, uint64_t p_46)
{
    return (*g_98);
}







static int32_t * func_47(int32_t * p_48, const uint8_t p_49, int64_t p_50)
{
    int32_t *l_56 = &g_2;
    int32_t **l_55 = &l_56;
    int32_t l_59[7] = {0L,0L,0L,0L,0L,0L,0L};
    int32_t *l_68 = (void*)0;
    int i;
    (*l_55) = (void*)0;
    for (g_36 = 0; (g_36 != (-21)); g_36 = safe_sub_func_int64_t_s_s(g_36, 7))
    {
        int32_t *l_60 = (void*)0;
        int32_t *l_61 = &g_62;
        int32_t l_63 = 0x19C7819AL;
        int32_t *l_64 = &l_59[4];
        (*l_61) = (l_59[4] = (*p_48));
        g_62 &= 0x53D0C964L;
        g_65++;
        (*l_61) = (*l_64);
    }
    return l_68;
}







static int16_t func_71(uint16_t p_72, int32_t p_73, uint64_t p_74, int32_t p_75, int8_t p_76)
{
    const int8_t l_759 = 0x0EL;
    uint16_t *l_772 = &g_101;
    uint16_t *l_773 = &g_774[3][7][1];
    const int32_t *l_781[1];
    const int32_t **l_780[6][4] = {{&l_781[0],&l_781[0],&l_781[0],(void*)0},{&l_781[0],&l_781[0],&l_781[0],(void*)0},{&l_781[0],(void*)0,(void*)0,(void*)0},{&l_781[0],&l_781[0],&l_781[0],(void*)0},{(void*)0,&l_781[0],&l_781[0],&l_781[0]},{&l_781[0],&l_781[0],(void*)0,&l_781[0]}};
    int16_t *l_782 = &g_184;
    int32_t *l_783 = (void*)0;
    int32_t *l_784 = (void*)0;
    int32_t *l_785 = &g_110;
    int32_t l_798 = 1L;
    int32_t l_799 = 0x2051DA93L;
    int32_t l_800 = (-1L);
    int32_t l_801 = 0x5149DB42L;
    int32_t l_802 = 0x5C365D5FL;
    int32_t l_805 = 0L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_781[i] = (void*)0;
    (*l_785) = (safe_lshift_func_int16_t_s_u(0xFEE5L, (l_759 ^ ((!((*l_782) = (safe_lshift_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u((safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((*l_772) = l_759), (--(*l_773)))), (p_72 , (~((safe_lshift_func_uint8_t_u_u(0xFBL, 2)) >= ((void*)0 != &p_72)))))), ((((void*)0 == l_780[4][2]) , g_555[7][1]) || 0x7DD7L))), 0x83F6L)))) , g_113[0][2][0]), p_76)))) && p_76))));
    for (p_72 = 0; (p_72 < 7); p_72 = safe_add_func_int8_t_s_s(p_72, 4))
    {
        int64_t l_803 = 0x9E6155635D7D9B8FLL;
        int32_t l_804 = 0xEE930CD5L;
        int32_t l_806 = 0x6EFF60DCL;
        uint32_t l_807 = 0UL;
        for (g_110 = 14; (g_110 <= 27); ++g_110)
        {
            (*g_98) = (*g_98);
        }
        for (g_286 = (-11); (g_286 > 1); g_286 = safe_add_func_uint64_t_u_u(g_286, 1))
        {
            int32_t *l_792 = (void*)0;
            int32_t *l_793 = &g_143;
            int32_t *l_794 = (void*)0;
            int32_t *l_795 = &g_110;
            int32_t *l_796 = &g_143;
            int32_t *l_797[8][2][7] = {{{(void*)0,&g_110,&g_2,&g_2,&g_143,&g_110,&g_2},{&g_143,&g_143,&g_110,&g_143,&g_2,&g_2,&g_143}},{{&g_143,(void*)0,&g_143,&g_110,&g_2,&g_110,(void*)0},{&g_110,&g_143,&g_143,&g_2,&g_143,&g_143,&g_110}},{{&g_2,&g_110,(void*)0,&g_110,&g_110,&g_110,&g_110},{&g_143,&g_2,&g_2,&g_143,(void*)0,&g_2,&g_2}},{{&g_110,&g_2,(void*)0,&g_143,&g_143,&g_110,&g_2},{(void*)0,&g_110,&g_143,&g_143,&g_2,&g_2,&g_2}},{{&g_110,&g_143,&g_143,&g_143,&g_110,&g_110,&g_110},{&g_143,&g_2,&g_110,&g_143,&g_143,&g_143,&g_110}},{{&g_110,&g_2,&g_2,&g_143,&g_2,&g_110,(void*)0},{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143,&g_143}},{{&g_110,&g_2,&g_110,&g_110,&g_2,&g_2,&g_2},{(void*)0,&g_2,(void*)0,&g_2,&g_143,&g_143,&g_143}},{{&g_110,&g_2,&g_110,&g_110,&g_110,&g_2,&g_110},{&g_143,&g_143,&g_143,&g_143,&g_2,&g_143,&g_2}}};
            int i, j, k;
            --l_807;
            if (p_76)
                break;
        }
    }
    (*l_785) ^= (safe_sub_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(p_73, (*g_169))), p_72));
    return g_307;
}







static uint16_t func_77(int32_t p_78, const int32_t p_79, uint64_t p_80, int32_t ** p_81)
{
    int32_t *l_85[10][3] = {{&g_2,&g_2,(void*)0},{&g_2,&g_2,&g_2},{&g_2,&g_2,&g_2},{(void*)0,&g_2,&g_2},{&g_2,&g_2,&g_2},{(void*)0,&g_2,(void*)0},{&g_2,&g_2,&g_2},{&g_2,&g_2,&g_2},{&g_2,&g_2,(void*)0},{&g_2,&g_2,&g_2}};
    uint32_t l_111 = 0x36713F97L;
    uint16_t l_151 = 1UL;
    int64_t ***l_187 = &g_168;
    int64_t **** const l_186 = &l_187;
    const uint16_t *l_227 = (void*)0;
    int32_t ***l_344 = &g_98;
    uint64_t l_349 = 18446744073709551614UL;
    int16_t l_488 = 0x00FCL;
    int32_t l_489 = 0xB15C7737L;
    uint32_t l_611 = 0x4A2C1D7FL;
    uint8_t *l_619 = &g_462[2];
    uint8_t **l_618[9] = {&l_619,(void*)0,(void*)0,&l_619,(void*)0,(void*)0,&l_619,(void*)0,(void*)0};
    uint16_t ****l_635[10][1] = {{&g_413},{&g_413},{&g_413},{&g_413},{&g_413},{&g_413},{&g_413},{&g_413},{&g_413},{&g_413}};
    uint32_t l_643 = 0xBE9DEF90L;
    int i, j;
lbl_195:
    for (p_78 = 5; (p_78 < (-25)); p_78 = safe_sub_func_int8_t_s_s(p_78, 9))
    {
        l_85[5][1] = (*p_81);
        return p_79;
    }
    if ((g_88[1][1] = (safe_mod_func_uint64_t_u_u(g_2, (g_2 | 2L)))))
    {
        uint32_t l_104[10][1][4] = {{{18446744073709551606UL,0x082F4DE9L,0xAD42751BL,0xAD42751BL}},{{18446744073709551606UL,18446744073709551606UL,0x082F4DE9L,18446744073709551606UL}},{{18446744073709551606UL,0xAD42751BL,0xAD42751BL,18446744073709551606UL}},{{0xAD42751BL,18446744073709551606UL,0xAD42751BL,0xAD42751BL}},{{18446744073709551606UL,18446744073709551606UL,0x082F4DE9L,18446744073709551606UL}},{{18446744073709551606UL,0xAD42751BL,0xAD42751BL,18446744073709551606UL}},{{0xAD42751BL,18446744073709551606UL,0xAD42751BL,0xAD42751BL}},{{18446744073709551606UL,18446744073709551606UL,0x082F4DE9L,18446744073709551606UL}},{{18446744073709551606UL,0xAD42751BL,0xAD42751BL,18446744073709551606UL}},{{0xAD42751BL,18446744073709551606UL,0xAD42751BL,0xAD42751BL}}};
        uint32_t l_136 = 4294967295UL;
        int32_t l_146 = (-1L);
        int32_t l_149 = 1L;
        int32_t l_159 = (-1L);
        uint16_t *l_165[8] = {&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101};
        uint16_t **l_164[5] = {&l_165[3],&l_165[3],&l_165[3],&l_165[3],&l_165[3]};
        int32_t l_209 = (-1L);
        int32_t l_212 = 1L;
        int32_t l_213 = (-2L);
        int32_t l_214 = 0xDEBC2B7CL;
        int32_t l_216 = (-1L);
        uint8_t ***l_259 = (void*)0;
        int8_t l_304 = 0x12L;
        uint64_t **l_378 = &g_377;
        int32_t ***l_478 = &g_98;
        int32_t l_495 = 0x08464344L;
        int64_t l_520[7][4][1] = {{{0x4F05E829D64EF089LL},{0xC45DC5DE7A881CBFLL},{0x4AC8E01E37F74225LL},{0L}},{{0xC45DC5DE7A881CBFLL},{0L},{0x4AC8E01E37F74225LL},{0xC45DC5DE7A881CBFLL}},{{0x4F05E829D64EF089LL},{0x4F05E829D64EF089LL},{0xC45DC5DE7A881CBFLL},{0x4AC8E01E37F74225LL}},{{0L},{0xC45DC5DE7A881CBFLL},{0L},{0x4AC8E01E37F74225LL}},{{0xC45DC5DE7A881CBFLL},{0x4F05E829D64EF089LL},{0x4F05E829D64EF089LL},{0xC45DC5DE7A881CBFLL}},{{0x4AC8E01E37F74225LL},{0L},{0xC45DC5DE7A881CBFLL},{0L}},{{0x4AC8E01E37F74225LL},{0xC45DC5DE7A881CBFLL},{0x4F05E829D64EF089LL},{0x4F05E829D64EF089LL}}};
        uint8_t *l_589 = (void*)0;
        const int32_t l_595 = 0x3A1C7B38L;
        int32_t l_598 = 0x0E09743AL;
        int8_t *l_612 = &g_177[9][0][1];
        int32_t l_613 = 0xA8A2A7B4L;
        int32_t l_642 = 0xB4ECACB5L;
        uint16_t l_662 = 1UL;
        int64_t ** const *l_684 = &g_168;
        int64_t ** const **l_683 = &l_684;
        int i, j, k;
        for (p_78 = 28; (p_78 < 9); p_78 = safe_sub_func_uint16_t_u_u(p_78, 1))
        {
            int32_t **l_93 = &l_85[5][1];
            uint16_t *l_100 = &g_101;
            int64_t *l_112 = &g_113[0][2][0];
            int32_t l_147 = 0L;
            int32_t l_148 = 0xEB9B2B9BL;
            int32_t l_155[5][3][1] = {{{0x137C7680L},{0xCA2756FDL},{1L}},{{0xCA2756FDL},{0x137C7680L},{0x137C7680L}},{{0xCA2756FDL},{1L},{0xCA2756FDL}},{{0x137C7680L},{0x137C7680L},{0xCA2756FDL}},{{1L},{0xCA2756FDL},{0x137C7680L}}};
            int8_t l_185 = 0x28L;
            uint32_t l_284 = 0x15279882L;
            int64_t *l_338 = &g_113[0][2][0];
            int64_t ****l_380 = &l_187;
            int64_t *****l_379 = &l_380;
            uint16_t ****l_480[1][4][10] = {{{(void*)0,(void*)0,&g_413,&g_413,(void*)0,(void*)0,&g_413,(void*)0,&g_413,(void*)0},{(void*)0,(void*)0,&g_413,(void*)0,(void*)0,&g_413,(void*)0,(void*)0,&g_413,(void*)0},{(void*)0,&g_413,&g_413,(void*)0,&g_413,(void*)0,(void*)0,(void*)0,&g_413,(void*)0},{(void*)0,(void*)0,(void*)0,&g_413,(void*)0,&g_413,&g_413,(void*)0,&g_413,(void*)0}}};
            int64_t l_491 = 2L;
            int32_t l_594 = 0x950FC94FL;
            int i, j, k;
        }
lbl_715:
        for (l_212 = 0; (l_212 != 0); l_212 = safe_add_func_int16_t_s_s(l_212, 9))
        {
            uint16_t l_599[2][1];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_599[i][j] = 65531UL;
            }
            l_599[1][0]--;
            (*g_98) = (*g_98);
        }
        l_495 = (g_286 | ((((0xBD5A4CA25BED2078LL ^ (*g_377)) | (safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s((+(((((safe_div_func_int16_t_s_s(0x2C0FL, (((void*)0 == &p_81) || (0xF2EC2920L != (((p_78 ^ ((*l_612) ^= ((safe_sub_func_uint64_t_u_u(p_79, l_611)) > p_80))) == 0xE1L) , (-1L)))))) , 0xF8234F8BL) <= 0x84A5A7E6L) & (*****g_393)) & (****g_394))), l_613)), p_78))) , (*p_81)) != (**l_344)));
        for (l_611 = 0; (l_611 <= 0); l_611 += 1)
        {
            const int32_t l_631 = 3L;
            int16_t *l_632 = &g_184;
            int32_t l_633 = 0x7792473DL;
            uint16_t ****l_634 = &g_413;
            uint8_t ***l_663 = &l_618[5];
            int64_t l_664 = (-5L);
            int32_t l_665 = 0xCC1818D4L;
            int32_t l_667 = 0xE9E4422DL;
            int32_t l_670 = 0L;
            int32_t l_671[2];
            uint32_t l_674 = 5UL;
            int i;
            for (i = 0; i < 2; i++)
                l_671[i] = (-3L);
            if ((((safe_add_func_uint16_t_u_u((l_633 = (safe_add_func_int64_t_s_s(0x671D19DCCB74ACC9LL, ((l_618[8] == (void*)0) | (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((((**p_81) , (((**p_81) , (safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(((void*)0 != &g_99[2][0][0]), (p_79 , ((*l_632) = (+(((((p_78 , (*g_414)) != (void*)0) ^ (****g_394)) , l_631) || 1L)))))), p_79))) >= p_80)) <= l_631), 2)), 18446744073709551615UL)), g_175)))))), p_78)) == (**p_81)) || (**g_198)))
            {
                uint16_t *****l_636 = (void*)0;
                uint16_t *****l_637 = &g_507;
                int32_t l_638 = 0x631815A7L;
                l_638 = (l_634 == ((*l_637) = l_635[9][0]));
                l_633 = (**p_81);
            }
            else
            {
                uint64_t l_639[6][9] = {{0x70B4CDAFDDBD5D48LL,0x70B4CDAFDDBD5D48LL,0x10695A8B77FE2768LL,0x70B4CDAFDDBD5D48LL,0x70B4CDAFDDBD5D48LL,0x10695A8B77FE2768LL,0x70B4CDAFDDBD5D48LL,0x70B4CDAFDDBD5D48LL,0x10695A8B77FE2768LL},{18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL},{0x70B4CDAFDDBD5D48LL,0x70B4CDAFDDBD5D48LL,0x10695A8B77FE2768LL,0x70B4CDAFDDBD5D48LL,0x70B4CDAFDDBD5D48LL,0x10695A8B77FE2768LL,0x70B4CDAFDDBD5D48LL,0x70B4CDAFDDBD5D48LL,0x10695A8B77FE2768LL},{18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL},{0x70B4CDAFDDBD5D48LL,0x70B4CDAFDDBD5D48LL,0x10695A8B77FE2768LL,0x70B4CDAFDDBD5D48LL,0x70B4CDAFDDBD5D48LL,0x10695A8B77FE2768LL,0x70B4CDAFDDBD5D48LL,0x70B4CDAFDDBD5D48LL,0x10695A8B77FE2768LL},{18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL}};
                int i, j;
                l_639[2][7]++;
                l_212 = ((l_633 = ((*g_169) = (l_642 &= 0xCCD0722B9CF85240LL))) ^ 1L);
            }
            if ((**p_81))
            {
                --l_643;
                if (l_631)
                    break;
            }
            else
            {
                return l_633;
            }
            for (l_212 = 0; (l_212 >= 0); l_212 -= 1)
            {
                int32_t l_652 = 0x615B9E3BL;
                int32_t *l_661 = &l_598;
                int32_t l_668[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_668[i] = 0xC302105FL;
                if ((safe_sub_func_uint32_t_u_u(((((g_143 == (0x2BL < ((((l_216 ^= ((((safe_sub_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s(((*l_612) = (1UL || (((((((3L && l_652) & ((**p_81) != (safe_div_func_int32_t_s_s((p_79 >= (-10L)), (((*l_661) = ((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((-9L) ^ 0x78L), 6)), (**p_81))), 0UL)) , p_79)) , 0xE3E51C44L))))) != (**g_198)) & l_652) , &l_611) != (void*)0) > l_304))), p_79)) == 0xC7L) ^ (*g_377)) || l_662), g_555[0][7])) , (**g_376)) >= p_79) >= (-1L))) , 0x1A018A91F534B221LL) , p_79) , (**g_198)))) , l_259) == l_663) , l_642), l_664)))
                {
                    int32_t l_666 = (-1L);
                    int32_t l_672 = 0x85ABD95CL;
                    int32_t l_673 = 0xAAA15CB2L;
                    ++l_674;
                }
                else
                {
                    int64_t l_679[2][9] = {{0x340EA0FBCFB63F22LL,0x340EA0FBCFB63F22LL,0x340EA0FBCFB63F22LL,0x340EA0FBCFB63F22LL,0x340EA0FBCFB63F22LL,0x340EA0FBCFB63F22LL,0x340EA0FBCFB63F22LL,0x340EA0FBCFB63F22LL,0x340EA0FBCFB63F22LL},{0x82FF2BA59A79C186LL,1L,0x82FF2BA59A79C186LL,1L,0x82FF2BA59A79C186LL,1L,0x82FF2BA59A79C186LL,1L,0x82FF2BA59A79C186LL}};
                    int i, j;
                    for (l_214 = 2; (l_214 >= 0); l_214 -= 1)
                    {
                        int i, j, k;
                        if (g_113[l_214][(l_212 + 6)][l_212])
                            break;
                    }
                    if (l_633)
                    {
                        int64_t ** const ***l_685 = &l_683;
                        l_667 = (safe_div_func_uint8_t_u_u((5UL < ((l_671[0] == ((l_679[0][7] >= (safe_unary_minus_func_int8_t_s((safe_lshift_func_uint16_t_u_s((((*g_393) == ((*l_685) = l_683)) && ((((++(*g_377)) & 8UL) < p_80) == (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((&l_619 == ((*l_663) = g_692)), p_78)), l_679[0][1])))), 1))))) && 0xD2B68554L)) , l_652)), 9UL));
                        (**l_344) = (**l_344);
                    }
                    else
                    {
                        uint8_t ***l_706 = &l_618[5];
                        int32_t l_707 = 1L;
                        uint16_t **l_708[8][7] = {{(void*)0,(void*)0,&l_165[6],&l_165[3],&l_165[0],&l_165[0],&l_165[3]},{&g_415,&l_165[3],&g_415,&g_415,&g_415,&l_165[3],&g_415},{(void*)0,&l_165[3],&l_165[3],(void*)0,&l_165[0],&l_165[6],&l_165[6]},{&l_165[7],&l_165[3],&l_165[5],&l_165[3],&l_165[7],&l_165[3],&l_165[5]},{&l_165[0],(void*)0,&l_165[3],&l_165[3],(void*)0,&l_165[0],&l_165[6]},{&g_415,&g_415,&g_415,&l_165[3],&g_415,&g_415,&g_415},{&l_165[0],&l_165[3],&l_165[6],(void*)0,(void*)0,&l_165[6],&l_165[3]},{&l_165[7],&g_415,&l_165[5],&g_415,&l_165[7],&g_415,&l_165[5]}};
                        int i, j;
                        l_667 = (safe_sub_func_uint16_t_u_u((0xB30BB021L > (l_495 = (safe_mul_func_int16_t_s_s((((safe_mod_func_int8_t_s_s(g_179, ((*l_619) = ((((g_699 = (void*)0) != (l_679[0][7] , l_619)) > 0x38L) & ((safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((((((safe_mul_func_uint16_t_u_u((((((void*)0 != l_706) < l_707) , l_708[0][0]) == (**l_634)), 0xB392L)) || 0x67205729L) ^ l_707) && p_78) || (-1L)), p_80)) & (**p_81)), g_2)) , g_181))))) || 4UL) && 255UL), 1UL)))), l_668[1]));
                        return l_668[2];
                    }
                }
                l_668[2] ^= (**p_81);
                for (l_216 = 0; (l_216 >= 0); l_216 -= 1)
                {
                    int i;
                    l_671[(l_216 + 1)] &= 0x2F9D5CDEL;
                }
                for (l_670 = 0; (l_670 <= 0); l_670 += 1)
                {
                    int i, j, k;
                    for (g_143 = 0; (g_143 <= 0); g_143 += 1)
                    {
                        l_652 = 4L;
                        (**l_344) = (**l_344);
                    }
                    return g_113[l_212][l_670][l_611];
                }
                for (l_488 = 0; (l_488 <= 0); l_488 += 1)
                {
                    uint32_t l_709 = 1UL;
                    int i, j, k;
                    l_709--;
                    if (l_104[l_488][l_212][(l_212 + 3)])
                    {
                        if (l_652)
                            goto lbl_195;
                    }
                    else
                    {
                        uint8_t l_712 = 0xFFL;
                        --l_712;
                    }
                    if (l_613)
                        goto lbl_715;
                    if (g_177[l_611][(l_212 + 1)][l_212])
                        break;
                }
            }
        }
    }
    else
    {
        int32_t *l_731[9][1] = {{(void*)0},{&g_143},{&g_143},{(void*)0},{&g_143},{&g_143},{(void*)0},{&g_143},{&g_143}};
        const int16_t l_755 = 0x76A2L;
        int i, j;
        for (g_307 = 0; (g_307 < (-15)); g_307 = safe_sub_func_uint64_t_u_u(g_307, 8))
        {
            uint8_t l_724 = 0xAAL;
            int32_t l_728 = (-1L);
            int32_t l_732 = 0L;
            int32_t l_735 = 0xBCA0A443L;
            int32_t l_736 = 1L;
            for (g_179 = 0; (g_179 >= 18); g_179 = safe_add_func_uint32_t_u_u(g_179, 9))
            {
                int8_t l_734 = 0x8EL;
                int32_t l_737 = 0xC856F4A8L;
                int32_t l_738[7] = {0x0F2082A3L,0x0F2082A3L,0x0F2082A3L,0x0F2082A3L,0x0F2082A3L,0x0F2082A3L,0x0F2082A3L};
                int i;
                for (g_184 = 11; (g_184 >= 7); g_184 = safe_sub_func_uint8_t_u_u(g_184, 2))
                {
                    int64_t **l_727 = (void*)0;
                    int32_t l_733[4][8][1] = {{{6L},{0x21A9312DL},{6L},{0x21A9312DL},{6L},{0x21A9312DL},{6L},{0x21A9312DL}},{{6L},{0x21A9312DL},{6L},{0x21A9312DL},{6L},{0x21A9312DL},{6L},{0x21A9312DL}},{{6L},{0x21A9312DL},{6L},{0x21A9312DL},{6L},{0x21A9312DL},{6L},{0x21A9312DL}},{{6L},{0x21A9312DL},{6L},{0x21A9312DL},{6L},{0x21A9312DL},{6L},{0x21A9312DL}}};
                    uint32_t l_739 = 0x9954D85DL;
                    int32_t l_750 = 5L;
                    int i, j, k;
                    (*g_98) = (*g_98);
                    for (l_643 = 0; (l_643 == 38); l_643 = safe_add_func_int8_t_s_s(l_643, 6))
                    {
                        --l_724;
                        if (g_286)
                            goto lbl_195;
                        if ((**p_81))
                            break;
                    }
                    l_728 = ((*g_395) != l_727);
                    for (p_80 = 0; (p_80 <= 49); p_80 = safe_add_func_int32_t_s_s(p_80, 2))
                    {
                        int16_t *l_742 = &l_488;
                        int16_t *l_747 = (void*)0;
                        int16_t *l_748 = &g_555[0][7];
                        int32_t l_751 = (-1L);
                        int8_t *l_752 = &g_177[4][0][2];
                        (*g_98) = l_731[6][0];
                        --l_739;
                        l_738[3] &= (((((*l_752) = ((((((*l_742) = l_728) , (void*)0) != (void*)0) ^ ((((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u(((*l_748) = p_80), 5)) && p_80), (+(-9L)))) && (l_737 = l_750)) < ((p_80 , 1L) <= (**g_376))) || 0x742BL)) , l_751)) , 0xD25FC596L) , p_78) && 1UL);
                    }
                }
            }
            for (g_182 = (-22); (g_182 == (-25)); --g_182)
            {
                (*g_98) = l_731[3][0];
                l_736 ^= l_755;
            }
            l_728 = 0x32FD9422L;
        }
    }
    return p_79;
}







static int32_t func_107(int32_t p_108)
{
    uint16_t l_109 = 0UL;
    (*g_98) = &p_108;
    return l_109;
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
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_88[i][j], "g_88[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_113[i][j][k], "g_113[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_177[i][j][k], "g_177[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_462[i], "g_462[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_555[i][j], "g_555[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_669, "g_669", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_774[i][j][k], "g_774[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_920, "g_920", print_hash_value);
    transparent_crc(g_935, "g_935", print_hash_value);
    transparent_crc(g_947, "g_947", print_hash_value);
    transparent_crc(g_1014, "g_1014", print_hash_value);
    transparent_crc(g_1061, "g_1061", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_1157[i][j][k], "g_1157[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1160, "g_1160", print_hash_value);
    transparent_crc(g_1252, "g_1252", print_hash_value);
    transparent_crc(g_1349, "g_1349", print_hash_value);
    transparent_crc(g_1550, "g_1550", print_hash_value);
    transparent_crc(g_1737, "g_1737", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
