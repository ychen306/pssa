// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = FBF4A8AC
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



static int32_t g_2 = 5L;
static uint16_t g_36 = 65528UL;
static uint16_t g_46 = 8UL;
static uint16_t *g_45 = &g_46;
static int32_t g_92[7] = {4L,4L,4L,4L,4L,4L,4L};
static int32_t g_95 = (-8L);
static int32_t *g_106[1] = {&g_92[6]};
static int32_t **g_105 = &g_106[0];
static int64_t g_120 = 0xF57E05BCBD5E972ELL;
static uint8_t g_123 = 255UL;
static int64_t g_129 = 0xECD0F842D82C3D2BLL;
static uint16_t g_134[10][2][7] = {{{0x3A25L,0xD931L,0xA113L,0x9615L,0xC8C0L,8UL,8UL},{65535UL,0xD368L,0x964AL,0xD368L,65535UL,65529UL,2UL}},{{0x2498L,0xD931L,8UL,0UL,0xFB0DL,0x3A25L,0xFB0DL},{0x457EL,5UL,1UL,0x22BFL,0xF822L,65528UL,65535UL}},{{0x2498L,0UL,0xC8C0L,0xF0CCL,0UL,0UL,0xF0CCL},{65535UL,1UL,65535UL,65529UL,0xF822L,5UL,65535UL}},{{0x9615L,0xA113L,0xD931L,0x3A25L,0x2498L,0x3A25L,0xD931L},{0xF822L,0xD368L,2UL,65528UL,0x964AL,5UL,0xD561L}},{{0UL,0xC8C0L,0xF0CCL,0UL,0UL,0xF0CCL,0xC8C0L},{0x457EL,65534UL,0xF822L,1UL,0x964AL,65529UL,0x8030L}},{{0xF0CCL,0x9615L,0x2498L,0xC8C0L,0x2498L,0x9615L,0xF0CCL},{0x8030L,65529UL,0x964AL,1UL,0xF822L,65534UL,0x457EL}},{{0xC8C0L,0xF0CCL,0UL,0UL,0xF0CCL,0xC8C0L,0UL},{0xD561L,5UL,0x964AL,65528UL,2UL,0xD368L,0xF822L}},{{0xD931L,0x3A25L,0x2498L,0x3A25L,0xD931L,0xA113L,0x9615L},{65535UL,5UL,0xF822L,65529UL,4UL,65535UL,4UL}},{{8UL,0xF0CCL,0xF0CCL,8UL,0x3A25L,0x864FL,0xFB0DL},{65535UL,65529UL,2UL,0x9A74L,0x457EL,0x22BFL,0UL}},{{0xD931L,0x9615L,0xD931L,0x864FL,0xC8C0L,0UL,0xFB0DL},{0xD561L,65534UL,4UL,1UL,65535UL,1UL,4UL}}};
static uint16_t g_142 = 0x77F1L;
static uint32_t g_146 = 18446744073709551612UL;
static uint16_t g_148 = 0x9A1BL;
static uint32_t g_155[7] = {9UL,9UL,9UL,9UL,9UL,9UL,9UL};
static uint32_t g_159 = 5UL;
static uint32_t g_161 = 0x0C718A76L;
static int16_t g_222 = 0L;
static int8_t g_247 = 0xC0L;
static uint64_t g_248 = 18446744073709551615UL;
static int8_t *g_308 = &g_247;
static int8_t * const *g_307 = &g_308;
static uint32_t * const g_389 = &g_155[0];
static int16_t g_391 = 0x8F84L;
static int64_t g_393 = 0x9CBDC005F595BD59LL;
static int16_t g_445 = 6L;
static uint8_t g_559[4][9][7] = {{{249UL,247UL,0x5EL,0xB6L,255UL,0x87L,255UL},{251UL,247UL,1UL,1UL,247UL,251UL,249UL},{0x5EL,255UL,1UL,9UL,0x0BL,0x6BL,247UL},{0x6BL,255UL,0x5EL,251UL,0xDAL,247UL,0xDAL},{0x0BL,255UL,255UL,0x0BL,247UL,9UL,0x87L},{0x0BL,247UL,7UL,255UL,0x16L,0xB6L,1UL},{0x6BL,247UL,0x87L,249UL,0x5EL,249UL,0x87L},{0x5EL,0x5EL,1UL,0x56L,0xB6L,249UL,0xDAL},{251UL,1UL,0xDAL,255UL,0x6BL,0xB6L,247UL}},{{249UL,9UL,0xB6L,0xDAL,0xB6L,9UL,249UL},{0x16L,249UL,0x0BL,0xDAL,0x5EL,247UL,255UL},{1UL,7UL,247UL,255UL,0x16L,0xF6L,0xF6L},{0x56L,255UL,1UL,255UL,0x56L,0xDAL,0x16L},{0x16L,255UL,247UL,7UL,1UL,249UL,9UL},{255UL,251UL,1UL,0x87L,1UL,1UL,0x87L},{0x16L,7UL,0x16L,1UL,255UL,251UL,0x87L},{0x56L,0xB6L,249UL,0xDAL,0x87L,0x16L,9UL},{0x0BL,0x16L,251UL,0xB6L,0xB6L,251UL,0x16L}},{{9UL,0x6BL,0x5EL,0x0BL,0xB6L,1UL,0xF6L},{7UL,0x56L,0x6BL,247UL,0x87L,249UL,0x5EL},{0xDAL,255UL,0x0BL,0x0BL,255UL,0xDAL,7UL},{0x6BL,0x5EL,0x0BL,0xB6L,1UL,0xF6L,255UL},{0xF6L,0x87L,0x6BL,0xDAL,1UL,255UL,1UL},{1UL,0x5EL,0x5EL,1UL,0x56L,0xB6L,249UL},{1UL,255UL,251UL,0x87L,9UL,247UL,0x0BL},{0xF6L,0x56L,249UL,7UL,0x6BL,7UL,249UL},{0x6BL,0x6BL,0x16L,255UL,247UL,7UL,1UL}},{{0xDAL,0x16L,1UL,0x5EL,0xF6L,247UL,255UL},{7UL,0xB6L,247UL,1UL,247UL,0xB6L,7UL},{9UL,7UL,1UL,1UL,0x6BL,255UL,0x5EL},{0x0BL,251UL,0x56L,0x5EL,9UL,0xF6L,0xF6L},{0x56L,255UL,1UL,255UL,0x56L,0xDAL,0x16L},{0x16L,255UL,247UL,7UL,1UL,249UL,9UL},{255UL,251UL,1UL,0x87L,1UL,1UL,0x87L},{0x16L,7UL,0x16L,1UL,255UL,251UL,0x87L},{0x56L,0xB6L,249UL,0xDAL,0x87L,0x16L,9UL}}};
static uint32_t g_569 = 0x5B01A2EAL;
static uint32_t g_629 = 7UL;
static int32_t g_635 = 0x1F4EF097L;
static int32_t *g_646 = (void*)0;
static int32_t **g_645 = &g_646;
static uint32_t **g_868 = (void*)0;
static uint32_t ***g_867 = &g_868;
static const uint64_t g_928 = 0x538C4CBD0545330BLL;
static const uint64_t *g_927 = &g_928;
static uint32_t *g_940 = (void*)0;
static uint32_t **g_939 = &g_940;
static int32_t *g_999 = &g_92[6];
static int8_t g_1093 = 0x18L;
static int64_t g_1106 = (-4L);
static const uint16_t g_1136 = 0x2565L;
static const uint16_t *g_1138 = &g_1136;
static const uint16_t **g_1137 = &g_1138;
static int32_t * const ***g_1222[1] = {(void*)0};
static int32_t ***g_1267[7] = {&g_105,&g_105,&g_105,&g_105,&g_105,&g_105,&g_105};
static int32_t ****g_1266[2] = {&g_1267[4],&g_1267[4]};
static const int8_t g_1304 = 1L;



static uint16_t func_1(void);
static int64_t func_23(const uint8_t p_24, uint16_t p_25);
static int8_t func_31(uint16_t p_32, int8_t p_33, const uint32_t p_34);
static const int32_t func_43(uint16_t * p_44);
static int32_t * func_49(uint32_t p_50, int32_t * p_51, uint16_t * p_52, uint32_t p_53, int32_t * p_54);
static uint32_t func_58(uint64_t p_59, int32_t * p_60, int32_t * p_61, int32_t * p_62);
static uint16_t * func_70(int32_t * p_71, int8_t p_72, const int8_t p_73, const int8_t p_74);
static uint8_t func_77(const uint16_t * p_78);
static const uint16_t * func_79(int32_t * p_80, uint32_t p_81, uint8_t p_82, int32_t p_83);
static int32_t * func_84(int64_t p_85, int32_t * p_86);
# 87 "<stdin>"
static uint16_t func_1(void)
{
    uint8_t l_7[5];
    int32_t l_1202 = 0x0B6BCF2DL;
    int32_t l_1206 = 0x766BAB12L;
    int32_t l_1207 = 0xE7AB5C23L;
    int32_t l_1209[3][4] = {{6L,0x09E6308CL,6L,6L},{0x09E6308CL,0x09E6308CL,0L,0x09E6308CL},{0x09E6308CL,6L,0L,6L}};
    const int8_t l_1223 = 0x30L;
    int32_t l_1233 = 0x63FF1A3AL;
    uint64_t l_1238 = 2UL;
    uint32_t ** const *l_1252 = &g_939;
    uint32_t ** const **l_1251 = &l_1252;
    int16_t l_1271 = 0x7884L;
    int8_t l_1296 = (-2L);
    int32_t **l_1297 = &g_646;
    uint64_t *l_1298 = (void*)0;
    uint64_t *l_1299 = &g_248;
    int8_t *l_1300 = &g_1093;
    uint16_t **l_1303 = &g_45;
    uint16_t ***l_1302 = &l_1303;
    uint16_t ****l_1301 = &l_1302;
    int i, j;
    for (i = 0; i < 5; i++)
        l_7[i] = 2UL;
    for (g_2 = 0; (g_2 <= (-15)); g_2 = safe_sub_func_int16_t_s_s(g_2, 1))
    {
        uint8_t l_18 = 254UL;
        uint16_t *l_35[7];
        int32_t l_37 = 0x311C3FC0L;
        int32_t l_38 = 0xA42BBD4AL;
        int8_t l_1208 = 0L;
        int32_t l_1210 = 0xD8044F50L;
        int32_t ****l_1265 = (void*)0;
        uint16_t l_1269 = 3UL;
        uint16_t l_1272 = 0xAAA4L;
        int i;
        for (i = 0; i < 7; i++)
            l_35[i] = &g_36;
        if ((safe_mul_func_uint8_t_u_u(l_7[0], ((safe_div_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(l_7[0], 5UL)), (safe_div_func_uint16_t_u_u((!((l_1202 = (safe_unary_minus_func_int32_t_s((safe_div_func_uint32_t_u_u(l_18, ((-8L) & ((+(safe_unary_minus_func_uint32_t_u((safe_sub_func_int64_t_s_s(func_23((safe_mod_func_uint8_t_u_u(((-1L) & ((safe_unary_minus_func_int32_t_s((((safe_lshift_func_int8_t_s_u(func_31((--g_36), (safe_sub_func_int32_t_s_s(1L, func_43(g_45))), l_7[0]), 3)) , l_7[0]) ^ (*g_1138)))) && 0xBCC34ED2L)), (**g_307))), l_7[0]), (*g_927)))))) != l_7[0]))))))) & l_38)), g_629)))) != l_7[4]))))
        {
            int32_t *l_1203 = &l_37;
            int32_t *l_1204 = &l_37;
            int32_t *l_1205[3];
            uint32_t l_1211 = 0x3F020C1AL;
            uint8_t l_1214 = 0x14L;
            int i;
            for (i = 0; i < 3; i++)
                l_1205[i] = &l_38;
            ++l_1211;
            for (g_161 = 0; (g_161 <= 6); g_161 += 1)
            {
                uint8_t *l_1217 = (void*)0;
                uint32_t ***l_1227 = &g_939;
                uint32_t ****l_1226 = &l_1227;
                int32_t l_1230 = 0L;
                int64_t *l_1231 = &g_1106;
                uint64_t *l_1232[3][6];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_1232[i][j] = &g_248;
                }
                l_1214--;
                (*l_1204) = (((l_1217 != ((safe_rshift_func_int8_t_s_s(((l_1233 &= (safe_add_func_int64_t_s_s((g_1222[0] != (((*g_45) ^= l_1210) , (void*)0)), ((((*l_1231) &= ((((**g_307) , l_1223) , (g_155[2] , ((safe_sub_func_uint16_t_u_u(((((*l_1226) = (void*)0) != (((((((safe_mod_func_int16_t_s_s(0xC5A2L, g_129)) , l_1230) || l_18) | 0xF8L) | g_146) ^ (*g_308)) , (void*)0)) ^ 0xFDC4L), g_146)) , 0x5B6784ACL))) <= 0x499888F1L)) >= (*g_927)) && l_1230)))) | g_635), 3)) , &l_7[0])) <= l_1230) <= 0x53EBB4D1L);
            }
        }
        else
        {
            uint8_t *l_1243 = (void*)0;
            uint8_t *l_1244 = (void*)0;
            uint8_t *l_1245[1][1];
            int32_t l_1246[4] = {7L,7L,7L,7L};
            int32_t *****l_1268 = &g_1266[1];
            int8_t *l_1270[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1245[i][j] = &g_123;
            }
            l_1233 = (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((l_1238 , ((((safe_sub_func_int8_t_s_s(((**g_307) = (**g_307)), ((g_1093 = ((((safe_mul_func_uint8_t_u_u((++g_559[3][6][2]), (((((safe_sub_func_int64_t_s_s(((void*)0 != l_1251), (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s(g_148, 8)) >= ((((((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((g_123 = (((l_1238 >= l_38) == (~((l_1265 != ((*l_1268) = g_1266[1])) , l_1269))) < g_95)), 4)), l_1209[2][1])) < 0x59L) > (*g_389)) | 253UL) <= 0xFEE531CD5678D510LL) != l_1202)), 6)))), 4294967293UL)))) == g_445) ^ 0xF5L) >= 4294967294UL) || 0x9467543AE0DE3F22LL))) && l_7[0]) >= g_129) <= g_393)) <= g_928))) , (*g_927)) , l_1271) , (*g_45))) ^ 1L), 4)) & (*g_927)), g_134[2][1][3]));
            l_1209[0][0] = l_1272;
        }
    }
    (*g_105) = &l_1233;
    (*g_999) |= ((safe_mul_func_uint16_t_u_u((l_1209[2][1] ^= ((((l_1206 > (safe_rshift_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((0x5DB3E7FEL & (safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((*l_1300) ^= ((safe_rshift_func_uint8_t_u_u(l_1207, 2)) | (safe_sub_func_uint64_t_u_u(((*l_1299) = ((safe_sub_func_int8_t_s_s((*g_308), (((~g_155[2]) | (l_1233 ^= (safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(l_7[0], l_1296)), (l_1297 == l_1297))), 0x3415B370313CE897LL)))) || g_95))) <= 254UL)), (*g_927))))), g_142)), (*g_45)))), (*g_308))) && l_7[1]), 10))) , l_1301) != &l_1302) , l_1296)), l_1271)) > g_1304);
    return (*g_45);
}







static int64_t func_23(const uint8_t p_24, uint16_t p_25)
{
    (*g_999) = (*g_999);
    return p_25;
}







static int8_t func_31(uint16_t p_32, int8_t p_33, const uint32_t p_34)
{
    const uint16_t l_1145 = 65531UL;
    uint64_t *l_1148[9][7] = {{&g_248,&g_248,&g_248,&g_248,(void*)0,&g_248,&g_248},{&g_248,&g_248,&g_248,&g_248,&g_248,&g_248,&g_248},{&g_248,(void*)0,&g_248,&g_248,&g_248,&g_248,(void*)0},{&g_248,(void*)0,&g_248,&g_248,&g_248,&g_248,&g_248},{&g_248,&g_248,(void*)0,(void*)0,(void*)0,&g_248,&g_248},{&g_248,&g_248,&g_248,&g_248,&g_248,(void*)0,&g_248},{(void*)0,&g_248,&g_248,&g_248,&g_248,(void*)0,&g_248},{&g_248,&g_248,&g_248,&g_248,&g_248,&g_248,&g_248},{&g_248,&g_248,(void*)0,&g_248,&g_248,&g_248,&g_248}};
    uint8_t *l_1151 = (void*)0;
    uint8_t *l_1152 = &g_123;
    uint32_t ****l_1153[3];
    uint32_t *****l_1154 = (void*)0;
    uint32_t *****l_1155 = &l_1153[1];
    uint32_t *** const **l_1156 = (void*)0;
    uint32_t *l_1161[2];
    uint32_t **l_1160 = &l_1161[1];
    uint32_t *** const l_1159 = &l_1160;
    uint32_t *** const *l_1158[3];
    uint32_t *** const **l_1157 = &l_1158[2];
    int32_t l_1164 = (-2L);
    int32_t l_1191 = 0xC6068071L;
    int64_t *l_1193[5][7] = {{&g_393,&g_1106,&g_1106,&g_1106,&g_393,&g_129,&g_129},{(void*)0,&g_129,(void*)0,&g_129,(void*)0,&g_129,&g_129},{&g_393,&g_1106,&g_1106,&g_1106,&g_393,&g_129,&g_129},{(void*)0,&g_129,(void*)0,&g_129,(void*)0,&g_129,&g_129},{&g_393,&g_1106,&g_1106,&g_1106,&g_393,&g_129,&g_129}};
    int64_t **l_1192 = &l_1193[3][0];
    int32_t l_1194[10];
    int32_t l_1195 = (-1L);
    int32_t *l_1197[1];
    uint32_t l_1198[6][5] = {{0xC3684105L,0xC3684105L,0xC3684105L,0xC3684105L,0xC3684105L},{4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL},{0xC3684105L,0xC3684105L,0xC3684105L,0xC3684105L,0xC3684105L},{4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL},{0xC3684105L,0xC3684105L,0xC3684105L,0xC3684105L,0xC3684105L},{4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL}};
    int8_t l_1201 = 0x3BL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1153[i] = &g_867;
    for (i = 0; i < 2; i++)
        l_1161[i] = &g_146;
    for (i = 0; i < 3; i++)
        l_1158[i] = &l_1159;
    for (i = 0; i < 10; i++)
        l_1194[i] = 0x15EA82AFL;
    for (i = 0; i < 1; i++)
        l_1197[i] = &g_92[5];
    l_1164 = (((safe_rshift_func_int8_t_s_u(l_1145, 2)) & ((((*g_927) ^ (g_248 |= l_1145)) ^ (((*g_389) = (safe_lshift_func_uint8_t_u_s(((*l_1152) = 0xBDL), (((((*l_1155) = (l_1145 , l_1153[2])) != ((*l_1157) = &g_867)) ^ (((safe_div_func_int64_t_s_s(((((l_1145 >= 0x18L) >= p_34) , 0x9CL) < 247UL), (*g_927))) == p_33) && p_32)) , p_32)))) == 4294967295UL)) , (-2L))) && 1UL);
    if (l_1145)
        goto lbl_1196;
lbl_1196:
    (*g_999) = ((safe_add_func_int16_t_s_s((((*g_999) , (((l_1195 ^= (safe_lshift_func_int16_t_s_s(((((((safe_sub_func_int32_t_s_s(l_1164, (safe_sub_func_uint64_t_u_u(((((((((*g_939) != ((safe_rshift_func_uint8_t_u_s(g_142, (safe_mul_func_int8_t_s_s(p_33, ((((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint64_t_u_u((l_1191 = (0xCB8B9E65L != ((l_1145 < ((-5L) > (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((((safe_div_func_uint16_t_u_u(l_1164, l_1145)) ^ 0x5BL) || p_33) <= 0x3FF9A1CFL), l_1145)), 65535UL)), p_34)), (*g_389))))) & 0x12B41DE19D3060AELL))), p_34)) == (-3L)), g_391)) >= p_33) & p_32) , p_33))))) , l_1161[0])) > 0x3858L) >= 0x819169BDL) || (*g_1138)) <= 1UL) | p_34) != (*g_927)), (*g_927))))) , l_1145) , l_1192) != (void*)0) && l_1194[2]) ^ 253UL), 2))) >= (-6L)) || 0xC1AF1D64L)) == g_2), g_134[5][1][1])) || 0x48BEFB21L);
    l_1198[1][3]--;
    (*g_105) = &l_1191;
    return l_1201;
}







static const int32_t func_43(uint16_t * p_44)
{
    uint16_t l_55 = 8UL;
    int32_t *l_614 = &g_2;
    int32_t l_1034 = 0x99B3BEB8L;
    int32_t l_1035 = (-1L);
    int32_t l_1036[7] = {0xCA610295L,0xCA610295L,0xCA610295L,0xCA610295L,0xCA610295L,0xCA610295L,0xCA610295L};
    int32_t l_1037 = 1L;
    const uint32_t l_1072 = 1UL;
    int32_t * const *l_1083 = &g_106[0];
    int32_t * const **l_1082[3];
    uint32_t ***l_1088[7][8] = {{&g_939,&g_939,&g_939,&g_939,&g_939,&g_939,&g_939,&g_939},{&g_939,&g_939,&g_939,&g_939,&g_939,&g_939,&g_939,&g_939},{&g_939,&g_939,&g_939,&g_939,&g_939,&g_939,&g_939,&g_939},{&g_939,&g_939,&g_939,&g_939,&g_939,&g_939,&g_939,&g_939},{&g_939,&g_939,&g_939,&g_939,&g_939,(void*)0,&g_939,&g_939},{&g_939,&g_939,&g_939,(void*)0,&g_939,&g_939,&g_939,&g_939},{&g_939,&g_939,&g_939,&g_939,&g_939,&g_939,&g_939,&g_939}};
    uint64_t l_1132 = 0x35668AC6D9E45727LL;
    const uint16_t *l_1135 = &g_1136;
    const uint16_t **l_1134 = &l_1135;
    const uint16_t ***l_1133 = &l_1134;
    int32_t l_1139 = 1L;
    uint64_t *l_1140[4];
    uint16_t l_1141 = 0x8781L;
    uint16_t l_1142 = 1UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1082[i] = &l_1083;
    for (i = 0; i < 4; i++)
        l_1140[i] = &g_248;
    for (g_46 = 0; (g_46 == 24); g_46++)
    {
        uint16_t * const l_63 = &l_55;
        int32_t l_64 = (-1L);
        uint16_t **l_613[10][5] = {{&g_45,&g_45,&g_45,&g_45,&g_45},{&g_45,&g_45,(void*)0,&g_45,&g_45},{&g_45,&g_45,&g_45,&g_45,&g_45},{&g_45,&g_45,&g_45,&g_45,&g_45},{&g_45,&g_45,(void*)0,&g_45,&g_45},{&g_45,&g_45,&g_45,&g_45,&g_45},{&g_45,&g_45,(void*)0,&g_45,&g_45},{&g_45,&g_45,&g_45,&g_45,&g_45},{&g_45,&g_45,&g_45,&g_45,&g_45},{&g_45,&g_45,(void*)0,&g_45,&g_45}};
        int32_t *l_1027 = &g_92[3];
        int32_t *l_1028 = &g_92[6];
        int32_t *l_1029 = &g_92[6];
        int32_t *l_1030 = &l_64;
        int32_t *l_1031 = &g_92[6];
        int32_t *l_1032 = (void*)0;
        int32_t *l_1033[1];
        uint32_t l_1038 = 0x83CB3843L;
        uint32_t ***l_1090 = (void*)0;
        int16_t l_1094[5];
        int64_t l_1114[1][6][3] = {{{0x72F924975BE41D4BLL,0x59C31FBA936D655DLL,(-1L)},{0x72F924975BE41D4BLL,(-3L),0x72F924975BE41D4BLL},{0x72F924975BE41D4BLL,0L,1L},{0x72F924975BE41D4BLL,0x59C31FBA936D655DLL,(-1L)},{0x72F924975BE41D4BLL,(-3L),0x72F924975BE41D4BLL},{0x72F924975BE41D4BLL,0L,1L}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1033[i] = &g_95;
        for (i = 0; i < 5; i++)
            l_1094[i] = 4L;
    }
    l_1142 = (0x90L | (safe_div_func_uint16_t_u_u((((g_248 = (((*g_45)--) < ((((*l_614) == ((*g_999) = (*l_614))) > (safe_div_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(65526UL, ((safe_lshift_func_int8_t_s_s((*g_308), 5)) != (*l_614)))) != l_1132) < (((((g_1137 = ((*l_1133) = (void*)0)) != &g_45) == l_1139) , g_1106) || g_95)), (*g_1138)))) && (*l_614)))) > g_569) , l_1141), (*l_614))));
    return (*g_999);
}







static int32_t * func_49(uint32_t p_50, int32_t * p_51, uint16_t * p_52, uint32_t p_53, int32_t * p_54)
{
    uint64_t *l_615 = &g_248;
    int64_t *l_619 = &g_120;
    int64_t **l_618 = &l_619;
    uint32_t *l_621 = (void*)0;
    const int32_t l_624 = 0L;
    int32_t *l_637 = &g_635;
    int32_t ** const l_647 = &g_646;
    int32_t l_679 = 9L;
    int32_t l_684 = 0x7F59D4F5L;
    int32_t l_691 = 0L;
    int32_t l_692 = 0L;
    int32_t l_693 = 5L;
    int32_t l_695 = 0x28F7C328L;
    int32_t l_696 = (-1L);
    int32_t l_697 = 0xBE6FDE4CL;
    int32_t l_699 = (-1L);
    int32_t l_700[1];
    int8_t *l_705 = &g_247;
    int32_t l_719 = 0L;
    uint32_t l_722 = 0xC9D0F47FL;
    uint32_t l_750 = 0xFE4EEB2FL;
    int32_t **l_756 = &g_106[0];
    uint64_t l_817 = 0x57828524636CF44ALL;
    uint32_t *l_830 = &g_161;
    uint32_t **l_829[5] = {&l_830,&l_830,&l_830,&l_830,&l_830};
    uint32_t l_941 = 0x609CE05AL;
    uint16_t **l_1022 = &g_45;
    uint16_t ***l_1021 = &l_1022;
    uint16_t ****l_1023 = &l_1021;
    uint32_t **** const l_1024 = &g_867;
    uint32_t ****l_1026 = (void*)0;
    uint32_t *****l_1025 = &l_1026;
    int i;
    for (i = 0; i < 1; i++)
        l_700[i] = (-1L);
    if ((((l_615 == (void*)0) && (safe_mod_func_int32_t_s_s(((((*l_618) = l_615) != (void*)0) , (g_222 <= (safe_unary_minus_func_int64_t_s((l_621 == ((p_53 = ((safe_lshift_func_int8_t_s_u(l_624, 2)) || l_624)) , ((((*p_52) <= 0xAA87L) < l_624) , (void*)0))))))), 4294967295UL))) ^ 5L))
    {
        return p_54;
    }
    else
    {
        uint32_t **l_625 = &l_621;
        uint32_t * const l_628 = &g_629;
        uint32_t * const *l_627[7] = {&l_628,&l_628,&l_628,&l_628,&l_628,&l_628,&l_628};
        uint32_t * const **l_626 = &l_627[1];
        int32_t *l_634 = &g_635;
        int32_t l_644 = 0xF14313F8L;
        int32_t l_689 = 0x71C9B510L;
        int32_t l_690[8][8] = {{(-4L),0x33DC561DL,4L,0x1487DEB3L,0xCCDD3856L,5L,(-4L),5L},{0x33DC561DL,0x1487DEB3L,(-1L),(-8L),0x1487DEB3L,5L,0x6F94FD00L,5L},{0x239B8C49L,0x33DC561DL,0xDF7D274CL,0x33DC561DL,0x239B8C49L,(-1L),(-8L),0x239B8C49L},{5L,5L,(-4L),5L,0xCCDD3856L,0x1487DEB3L,4L,0x33DC561DL},{5L,4L,(-4L),(-8L),(-1L),(-1L),(-8L),(-4L)},{0xCCDD3856L,0xCCDD3856L,0xDF7D274CL,0x239B8C49L,0x78488E48L,1L,0x6F94FD00L,0xCCDD3856L},{4L,5L,(-1L),(-1L),0x6F94FD00L,(-1L),(-4L),0xCCDD3856L},{5L,5L,4L,0x239B8C49L,4L,5L,5L,(-4L)}};
        int32_t l_694 = (-1L);
        int32_t l_698 = 0x4DF66A69L;
        int32_t l_701 = (-1L);
        const uint16_t * const l_834 = (void*)0;
        const uint16_t * const *l_833 = &l_834;
        uint16_t l_856 = 0xE6E3L;
        int32_t **l_888 = &g_106[0];
        uint64_t *l_926 = &g_248;
        uint32_t ** const *l_956 = (void*)0;
        uint16_t l_1010 = 0x50CAL;
        int i, j;
        if ((l_625 != ((*l_626) = &l_621)))
        {
            int32_t **l_636[2];
            int32_t l_648 = 0x5A1AF72AL;
            int8_t **l_669[1];
            int16_t *l_678[10] = {&g_222,&g_222,&g_445,&g_222,&g_222,&g_445,&g_222,&g_222,&g_445,&g_222};
            int32_t l_685[6] = {0L,(-6L),(-6L),0L,(-6L),(-6L)};
            uint8_t l_686 = 1UL;
            uint32_t l_702 = 0UL;
            int32_t *l_709[8][8][3] = {{{(void*)0,&g_92[3],&l_697},{&l_700[0],&l_693,&l_700[0]},{&l_690[3][2],&g_92[3],&l_690[3][2]},{&l_685[4],&l_690[6][3],&l_690[6][3]},{&l_685[4],&g_92[3],(void*)0},{&l_685[4],&l_693,&l_684},{&l_700[0],(void*)0,&l_691},{&l_689,&g_2,(void*)0}},{{(void*)0,(void*)0,(void*)0},{&l_693,&l_696,&g_2},{&l_690[3][2],(void*)0,(void*)0},{&l_690[3][2],&g_2,&l_696},{&l_697,(void*)0,&l_644},{&l_689,&l_696,(void*)0},{&l_690[3][2],(void*)0,&l_690[4][2]},{&l_693,&g_2,&g_2}},{{&l_696,(void*)0,(void*)0},{&l_690[3][2],&l_696,&l_696},{&l_700[0],(void*)0,&l_691},{&l_689,&g_2,(void*)0},{(void*)0,(void*)0,(void*)0},{&l_693,&l_696,&g_2},{&l_690[3][2],(void*)0,(void*)0},{&l_690[3][2],&g_2,&l_696}},{{&l_697,(void*)0,&l_644},{&l_689,&l_696,(void*)0},{&l_690[3][2],(void*)0,&l_690[4][2]},{&l_693,&g_2,&g_2},{&l_696,(void*)0,(void*)0},{&l_690[3][2],&l_696,&l_696},{&l_700[0],(void*)0,&l_691},{&l_689,&g_2,(void*)0}},{{(void*)0,(void*)0,(void*)0},{&l_693,&l_696,&g_2},{&l_690[3][2],(void*)0,(void*)0},{&l_690[3][2],&g_2,&l_696},{&l_697,(void*)0,&l_644},{&l_689,&l_696,(void*)0},{&l_690[3][2],(void*)0,&l_690[4][2]},{&l_693,&g_2,&g_2}},{{&l_696,(void*)0,(void*)0},{&l_690[3][2],&l_696,&l_696},{&l_700[0],(void*)0,&l_691},{&l_689,&g_2,(void*)0},{(void*)0,(void*)0,(void*)0},{&l_693,&l_696,&g_2},{&l_690[3][2],(void*)0,(void*)0},{&l_690[3][2],&g_2,&l_696}},{{&l_697,(void*)0,&l_644},{&l_689,&l_696,(void*)0},{&l_690[3][2],(void*)0,&l_690[4][2]},{&l_693,&g_2,&g_2},{&l_696,(void*)0,(void*)0},{&l_690[3][2],&l_696,&l_696},{&l_700[0],(void*)0,&l_691},{&l_689,&g_2,(void*)0}},{{(void*)0,(void*)0,(void*)0},{&l_693,&l_696,&g_2},{&l_690[3][2],(void*)0,(void*)0},{&l_690[3][2],&g_2,&l_696},{&l_697,(void*)0,&l_644},{&l_689,&l_696,(void*)0},{&l_690[3][2],(void*)0,&l_690[4][2]},{&l_693,&g_2,&g_2}}};
            uint32_t l_749 = 0xBDC5818FL;
            int32_t *l_769 = &l_648;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_636[i] = &l_634;
            for (i = 0; i < 1; i++)
                l_669[i] = &g_308;
            l_644 = (safe_sub_func_uint32_t_u_u(((g_148 > ((g_2 | (safe_add_func_uint16_t_u_u(((((void*)0 != (*g_307)) , l_621) == (l_637 = l_634)), ((g_95 , ((safe_lshift_func_uint8_t_u_s((((safe_rshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_u(g_222, 7)) & (((**g_105) & 0x2AEEE380L) , g_120)) && l_644), g_391)) , g_645) != l_647), l_648)) <= l_644)) < (*p_52))))) == p_50)) | 0x59C59CC176CA2731LL), (*p_54)));
            for (g_247 = (-2); (g_247 == (-8)); g_247 = safe_sub_func_int64_t_s_s(g_247, 8))
            {
                uint16_t *l_660 = (void*)0;
                int32_t l_665 = 0x536D5171L;
                int32_t *l_666 = &l_648;
                (*l_666) ^= (((+(safe_sub_func_uint64_t_u_u((+(safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(g_46, (((!((g_148--) <= ((g_92[6] || (((((safe_mul_func_uint16_t_u_u((((*p_54) , g_629) & 0xEECB2260DDE4B29CLL), (&g_248 != &g_248))) | (&g_161 != &p_50)) , l_665) <= p_50) && l_644)) >= 0x04L))) || l_624) >= (*g_308)))), l_624))), (-1L)))) , g_393) || 3UL);
            }
            if ((((safe_add_func_int64_t_s_s((l_669[0] != (void*)0), (-1L))) , 0xD114C783L) <= (safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((**g_307) | 0xC4L), g_159)), (safe_mod_func_int16_t_s_s((l_679 = (g_445 && (safe_rshift_func_uint16_t_u_s(((&g_106[0] == (void*)0) == l_624), 10)))), 65535UL))))))
            {
                int32_t *l_680 = &l_679;
                int32_t *l_681 = &g_92[6];
                int32_t *l_682 = &g_95;
                int32_t *l_683[5][6] = {{&g_2,&l_679,&l_679,&g_2,&l_679,&l_679},{&g_2,&l_679,&l_679,&g_2,&l_679,&l_679},{&g_2,&l_679,&l_679,&g_2,&l_679,&l_679},{&l_679,&l_679,&l_679,&l_679,&l_679,&l_679},{&l_679,&l_679,&l_679,&l_679,&l_679,&l_679}};
                int i, j;
                ++l_686;
                l_702--;
            }
            else
            {
                int64_t l_708 = 0L;
                (*p_54) ^= ((((l_705 != (void*)0) == ((**g_105) == l_685[4])) == ((((((*l_615)--) < g_92[6]) != 0x96L) | (((p_50 != l_708) == ((*g_389) = (((0x2CL <= l_708) , 0xAFL) ^ 2UL))) && (*g_308))) != 2UL)) && 4294967291UL);
                return p_54;
            }
            for (g_635 = 6; (g_635 >= 0); g_635 -= 1)
            {
                int32_t l_714[7];
                int32_t l_718[10][8][2] = {{{0xC0761A7DL,(-3L)},{0L,(-3L)},{0xC0761A7DL,0L},{(-9L),(-9L)},{(-9L),0L},{0xC0761A7DL,(-3L)},{0L,(-3L)},{0xC0761A7DL,0L}},{{(-9L),(-9L)},{(-9L),0L},{0xC0761A7DL,(-3L)},{0L,(-3L)},{0xC0761A7DL,0L},{(-9L),(-9L)},{(-9L),0L},{0xC0761A7DL,(-3L)}},{{0L,(-3L)},{0xC0761A7DL,0L},{(-9L),(-9L)},{(-9L),0L},{0xC0761A7DL,(-3L)},{0L,(-3L)},{0xC0761A7DL,0L},{(-9L),(-9L)}},{{(-9L),0L},{0xC0761A7DL,(-3L)},{0L,(-3L)},{0xC0761A7DL,0L},{(-9L),(-9L)},{(-9L),0L},{0xC0761A7DL,(-3L)},{0L,(-3L)}},{{0xC0761A7DL,0L},{(-9L),(-9L)},{(-9L),0L},{0xC0761A7DL,(-3L)},{0L,(-3L)},{0xC0761A7DL,0L},{(-9L),(-9L)},{(-9L),0L}},{{0xC0761A7DL,(-3L)},{0L,(-3L)},{0xC0761A7DL,0L},{(-9L),(-9L)},{(-9L),0L},{0xC0761A7DL,(-3L)},{0L,(-3L)},{0xC0761A7DL,0L}},{{(-9L),(-9L)},{(-9L),0L},{0xC0761A7DL,(-3L)},{0L,(-3L)},{0xC0761A7DL,0L},{(-9L),(-9L)},{(-9L),0L},{0xC0761A7DL,(-3L)}},{{0L,(-3L)},{0xC0761A7DL,0L},{(-9L),(-9L)},{(-9L),0L},{0xC0761A7DL,(-3L)},{0L,(-3L)},{0xC0761A7DL,0L},{(-9L),(-9L)}},{{(-9L),0L},{0xC0761A7DL,(-3L)},{0L,(-3L)},{0xC0761A7DL,0L},{(-9L),(-9L)},{(-9L),0L},{0xC0761A7DL,(-3L)},{0L,(-3L)}},{{0xC0761A7DL,0L},{(-9L),(-9L)},{(-9L),0L},{0xC0761A7DL,(-3L)},{0L,(-3L)},{0xC0761A7DL,0L},{(-9L),(-9L)},{(-9L),0L}}};
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_714[i] = 0x7072AB63L;
                if ((safe_div_func_int32_t_s_s(((*p_51) = (*p_54)), ((safe_add_func_int16_t_s_s(((g_105 = &p_54) != &g_106[0]), p_50)) && 0x117E17D80D737BE8LL))))
                {
                    return p_51;
                }
                else
                {
                    int8_t l_717[10][9] = {{(-8L),0x0FL,0L,(-1L),0L,0x0FL,(-8L),0x9FL,0xFCL},{0x5FL,0x5DL,0x2CL,0L,0x52L,0L,0xC6L,0xA8L,(-3L)},{(-3L),0x5DL,0x9EL,0xAFL,(-3L),0xB0L,(-4L),0x5FL,0x45L},{0x39L,0x51L,0L,0x87L,0x2CL,0L,0x2CL,0x87L,0L},{0x39L,0x39L,0xAFL,0L,0xDFL,0xC6L,0x9FL,0xB0L,0x52L},{(-3L),0x5FL,0xFCL,(-3L),0xA8L,0x51L,0x87L,0x39L,(-8L)},{(-8L),(-10L),0xAFL,0x45L,0xD7L,0xDFL,0x73L,0xFCL,0x73L},{(-3L),0xD7L,0L,0L,0xD7L,(-3L),0x66L,0x8FL,(-1L)},{0x8FL,0x73L,0x9EL,0x52L,0xA8L,0x0FL,0xAFL,(-3L),0x2CL},{0L,0xC6L,0xA8L,(-8L),0xDFL,(-4L),0x66L,0x51L,(-3L)}};
                    int32_t l_720[3];
                    int32_t l_721[7][7][5] = {{{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L}},{{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)}},{{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L}},{{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)}},{{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L}},{{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)}},{{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L}}};
                    uint16_t *l_751 = &g_134[5][0][1];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_720[i] = 0xD21FB5FEL;
                    for (l_692 = 0; (l_692 <= 9); l_692 += 1)
                    {
                        int64_t l_715 = 0xE4643A22BF49C96ELL;
                        int32_t l_716[6][3] = {{0xF0665A19L,0xF0665A19L,0xF0665A19L},{(-5L),0xEDA7554BL,(-5L)},{0xF0665A19L,0xF0665A19L,0xF0665A19L},{(-5L),0xEDA7554BL,(-5L)},{0xF0665A19L,0xF0665A19L,0xF0665A19L},{(-5L),0xEDA7554BL,(-5L)}};
                        int i, j;
                        ++l_722;
                    }
                    (*p_51) = ((*p_52) != ((*l_751) = (safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s((-1L), (l_714[4] > ((*g_389) = (safe_div_func_int32_t_s_s((((safe_sub_func_int64_t_s_s((l_718[7][6][0] = (p_53 & ((safe_lshift_func_uint16_t_u_s((((safe_add_func_uint64_t_u_u(g_155[6], (safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((safe_div_func_int64_t_s_s((((safe_mod_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u(l_718[7][6][0], l_684)) | ((l_720[2] = (*g_389)) == 0x3207F95CL)), 18446744073709551615UL)) ^ l_749) | 0L), p_53)), (*g_389))), 1)))) , l_718[8][5][1]) > p_50), g_134[5][1][6])) , p_53))), l_714[4])) >= l_750) > l_750), 0x3F4E77BEL)))))), 13)) & 0L), l_694))));
                    l_718[7][6][0] |= (safe_rshift_func_int8_t_s_s(((*g_308) ^= ((249UL >= (l_721[1][6][2] < ((((safe_mul_func_uint16_t_u_u((((void*)0 != l_756) <= ((**l_756) = (safe_sub_func_uint16_t_u_u((**l_756), ((safe_mul_func_uint8_t_u_u(0x08L, (safe_add_func_uint64_t_u_u((safe_add_func_int32_t_s_s(((*g_389) < (l_701 == ((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((*p_52), 2L)), (**l_756))) ^ g_142))), (*p_54))), 0L)))) && g_129))))), g_123)) <= 0x8D1AB620A524659BLL) | 0UL) & 255UL))) && g_92[6])), 1));
                    return p_51;
                }
            }
        }
        else
        {
            uint32_t ***l_782 = &l_625;
            int32_t l_815 = 6L;
            int32_t l_816[8][8][4] = {{{0L,0L,0x54A1C7AFL,0x2F70BE73L},{0L,0L,1L,0L},{0L,0x56EC7CD7L,0x54A1C7AFL,0x31B8D0EFL},{0L,0x3420377FL,0x31B8D0EFL,0x31B8D0EFL},{0x56EC7CD7L,0x56EC7CD7L,(-1L),0L},{0x3420377FL,0L,(-1L),0x2F70BE73L},{0x56EC7CD7L,0L,0x31B8D0EFL,(-1L)},{0L,0L,0x54A1C7AFL,0x2F70BE73L}},{{0L,0L,1L,0L},{0L,0x56EC7CD7L,0x54A1C7AFL,0x31B8D0EFL},{0L,0x3420377FL,0x31B8D0EFL,0x31B8D0EFL},{0x56EC7CD7L,0x56EC7CD7L,1L,0x31B8D0EFL},{1L,0L,1L,0x54A1C7AFL},{0x4A6F496CL,0x3420377FL,(-1L),1L},{0L,0x3420377FL,0L,0x54A1C7AFL},{0x3420377FL,0L,(-3L),0x31B8D0EFL}},{{0x3420377FL,0x4A6F496CL,0L,(-1L)},{0L,1L,(-1L),(-1L)},{0x4A6F496CL,0x4A6F496CL,1L,0x31B8D0EFL},{1L,0L,1L,0x54A1C7AFL},{0x4A6F496CL,0x3420377FL,(-1L),1L},{0L,0x3420377FL,0L,0x54A1C7AFL},{0x3420377FL,0L,(-3L),0x31B8D0EFL},{0x3420377FL,0x4A6F496CL,0L,(-1L)}},{{0L,1L,(-1L),(-1L)},{0x4A6F496CL,0x4A6F496CL,1L,0x31B8D0EFL},{1L,0L,1L,0x54A1C7AFL},{0x4A6F496CL,0x3420377FL,(-1L),1L},{0L,0x3420377FL,0L,0x54A1C7AFL},{0x3420377FL,0L,(-3L),0x31B8D0EFL},{0x3420377FL,0x4A6F496CL,0L,(-1L)},{0L,1L,(-1L),(-1L)}},{{0x4A6F496CL,0x4A6F496CL,1L,0x31B8D0EFL},{1L,0L,1L,0x54A1C7AFL},{0x4A6F496CL,0x3420377FL,(-1L),1L},{0L,0x3420377FL,0L,0x54A1C7AFL},{0x3420377FL,0L,(-3L),0x31B8D0EFL},{0x3420377FL,0x4A6F496CL,0L,(-1L)},{0L,1L,(-1L),(-1L)},{0x4A6F496CL,0x4A6F496CL,1L,0x31B8D0EFL}},{{1L,0L,1L,0x54A1C7AFL},{0x4A6F496CL,0x3420377FL,(-1L),1L},{0L,0x3420377FL,0L,0x54A1C7AFL},{0x3420377FL,0L,(-3L),0x31B8D0EFL},{0x3420377FL,0x4A6F496CL,0L,(-1L)},{0L,1L,(-1L),(-1L)},{0x4A6F496CL,0x4A6F496CL,1L,0x31B8D0EFL},{1L,0L,1L,0x54A1C7AFL}},{{0x4A6F496CL,0x3420377FL,(-1L),1L},{0L,0x3420377FL,0L,0x54A1C7AFL},{0x3420377FL,0L,(-3L),0x31B8D0EFL},{0x3420377FL,0x4A6F496CL,0L,(-1L)},{0L,1L,(-1L),(-1L)},{0x4A6F496CL,0x4A6F496CL,1L,0x31B8D0EFL},{1L,0L,1L,0x54A1C7AFL},{0x4A6F496CL,0x3420377FL,(-1L),1L}},{{0L,0x3420377FL,0L,0x54A1C7AFL},{0x3420377FL,0L,(-3L),0x31B8D0EFL},{0x3420377FL,0x4A6F496CL,0L,(-1L)},{0x3420377FL,0x4D2EF43AL,1L,1L},{0L,0L,(-3L),(-1L)},{0x4D2EF43AL,0x3420377FL,(-3L),0L},{0L,1L,1L,(-3L)},{0x3420377FL,1L,0x31B8D0EFL,0L}}};
            int32_t ***l_944[2][1];
            int32_t l_977 = 0x6DFA6D8CL;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_944[i][j] = &g_105;
            }
            for (g_129 = 23; (g_129 > (-20)); g_129 = safe_sub_func_int16_t_s_s(g_129, 8))
            {
                uint8_t *l_788 = &g_559[3][6][2];
                uint8_t *l_789[3][7] = {{&g_123,&g_123,&g_123,&g_123,&g_123,&g_123,&g_123},{&g_123,(void*)0,&g_123,(void*)0,&g_123,(void*)0,&g_123},{&g_123,&g_123,&g_123,&g_123,&g_123,&g_123,&g_123}};
                const int32_t l_790 = (-3L);
                int32_t *l_791 = &l_700[0];
                int32_t *l_792 = &l_692;
                int32_t *l_793 = (void*)0;
                int32_t *l_794 = &l_693;
                int32_t *l_795 = &l_701;
                int32_t *l_796 = &l_689;
                int32_t *l_797 = &l_679;
                int32_t *l_798 = &l_690[3][2];
                int32_t *l_799 = &l_690[3][2];
                int32_t *l_800 = &l_690[3][2];
                int32_t *l_801 = &l_684;
                int32_t l_802 = 9L;
                int32_t *l_803 = &l_679;
                int32_t *l_804 = &l_690[5][6];
                int32_t *l_805 = (void*)0;
                int32_t *l_806 = &l_690[3][2];
                int32_t *l_807 = (void*)0;
                int32_t *l_808 = (void*)0;
                int32_t l_809 = 0xCA7F3272L;
                int32_t *l_810 = &g_95;
                int32_t *l_811 = &l_691;
                int32_t *l_812 = &l_684;
                int32_t *l_813 = &l_690[3][2];
                int32_t *l_814[3][10][2] = {{{(void*)0,&l_690[3][2]},{&g_2,&l_693},{&l_701,&l_701},{&l_679,(void*)0},{&l_693,(void*)0},{&l_809,&l_692},{&l_684,&l_809},{&l_684,&l_697},{&l_684,&l_809},{&l_684,&l_692}},{{&l_809,(void*)0},{&l_693,(void*)0},{&l_679,&l_701},{&l_701,&l_693},{&g_2,&l_690[3][2]},{(void*)0,&g_95},{(void*)0,(void*)0},{&l_701,&l_809},{(void*)0,&l_700[0]},{(void*)0,(void*)0}},{{&g_95,&l_684},{&l_696,(void*)0},{&l_699,(void*)0},{&l_696,&l_684},{&g_95,(void*)0},{(void*)0,&l_700[0]},{(void*)0,&l_809},{&l_701,(void*)0},{(void*)0,&g_95},{(void*)0,&l_690[3][2]}}};
                int i, j, k;
                (*p_54) = (((g_391 > ((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((**g_105) != ((safe_div_func_int32_t_s_s(((l_782 == (void*)0) != (((*l_705) ^= (1L >= g_569)) >= (((!(safe_lshift_func_int8_t_s_u(l_690[3][2], (g_123 = ((*l_788) ^= ((((**g_105) || ((((safe_add_func_int8_t_s_s(p_50, 0xBBL)) != l_690[1][0]) == 0x86L) && 0x51L)) , p_53) && (*p_52))))))) | (**l_756)) , 252UL))), l_690[0][6])) <= 0xA0CAL)), (**l_756))) ^ l_790), 4)) , p_53)) , 0xD543L) >= l_790);
                ++l_817;
            }
            for (l_692 = 0; (l_692 == (-13)); l_692 = safe_sub_func_uint8_t_u_u(l_692, 7))
            {
                uint32_t *l_827[1][3][6] = {{{&g_161,&g_569,&g_161,&g_161,&g_569,&g_161},{&g_161,&g_569,&g_161,&g_161,&g_569,&g_161},{&g_161,&g_569,&g_161,&g_161,&g_569,&g_161}}};
                uint32_t **l_826 = &l_827[0][0][4];
                uint32_t ***l_828 = (void*)0;
                uint32_t **l_832 = &l_827[0][0][4];
                uint32_t ***l_831 = &l_832;
                const uint16_t * const **l_835 = &l_833;
                int8_t l_890 = 0x64L;
                int32_t l_922 = (-1L);
                uint32_t * const **l_923 = &l_627[1];
                int16_t *l_924 = &g_222;
                int8_t l_998 = 0x60L;
                int i, j, k;
                if ((*p_51))
                    break;
            }
            (*p_54) &= ((((void*)0 != p_54) , p_53) <= ((**l_756) = g_148));
        }
    }
    (*l_1023) = l_1021;
    (*l_1025) = l_1024;
    return p_54;
}







static uint32_t func_58(uint64_t p_59, int32_t * p_60, int32_t * p_61, int32_t * p_62)
{
    return p_59;
}







static uint16_t * func_70(int32_t * p_71, int8_t p_72, const int8_t p_73, const int8_t p_74)
{
    const int64_t *l_609 = (void*)0;
    const int64_t *l_610 = &g_393;
    int32_t l_611 = 0L;
    uint16_t *l_612 = (void*)0;
    for (g_129 = 0; (g_129 == 20); ++g_129)
    {
        (*g_105) = (*g_105);
        return &g_46;
    }
    (**g_105) = (((l_609 = &g_129) != l_610) , (l_611 <= (*g_389)));
    return l_612;
}







static uint8_t func_77(const uint16_t * p_78)
{
    uint8_t l_91[8][5] = {{0xA9L,248UL,1UL,248UL,0xA9L},{246UL,255UL,0xC9L,255UL,246UL},{0xA9L,248UL,1UL,248UL,0xA9L},{246UL,255UL,0xC9L,255UL,246UL},{0xA9L,248UL,1UL,248UL,0xA9L},{246UL,255UL,0xC9L,255UL,246UL},{0xA9L,248UL,1UL,248UL,0xA9L},{246UL,255UL,0xC9L,255UL,246UL}};
    int32_t l_96[1][4][6] = {{{0xF031B10CL,0xF031B10CL,0x2ECD4426L,0xF031B10CL,0xF031B10CL,0x2ECD4426L},{0xF031B10CL,0xF031B10CL,0x2ECD4426L,0xF031B10CL,0xF031B10CL,0x2ECD4426L},{0xF031B10CL,0xF031B10CL,0x2ECD4426L,0xF031B10CL,0xF031B10CL,0x2ECD4426L},{0xF031B10CL,0xF031B10CL,0x2ECD4426L,0xF031B10CL,0xF031B10CL,0x2ECD4426L}}};
    int32_t l_97 = (-1L);
    uint16_t *l_100 = &g_46;
    uint16_t *l_102 = (void*)0;
    int32_t l_130 = (-1L);
    int32_t **l_143[7] = {&g_106[0],&g_106[0],&g_106[0],&g_106[0],&g_106[0],&g_106[0],&g_106[0]};
    int64_t *l_170 = &g_129;
    int32_t l_199 = 0x87B0A632L;
    uint32_t l_245[2][3] = {{0xE24B3D24L,0xE24B3D24L,0xE24B3D24L},{0x0E54F6E6L,0x0E54F6E6L,0x0E54F6E6L}};
    int8_t l_267[3];
    int32_t *l_276 = &g_92[2];
    uint8_t l_348 = 0x31L;
    uint16_t **l_413[3][1];
    uint16_t l_454 = 0x2065L;
    uint32_t l_516 = 18446744073709551615UL;
    int64_t l_533 = 0xD62DF29677E18804LL;
    uint32_t *l_602 = &g_155[2];
    uint32_t **l_601 = &l_602;
    uint16_t l_606 = 0x9B32L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_267[i] = 0L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_413[i][j] = &l_100;
    }
    for (g_92[6] = 3; (g_92[6] >= 1); g_92[6] -= 1)
    {
        uint64_t l_93 = 0x73CA56B74084DAEALL;
        int32_t *l_94[3][6] = {{&g_95,&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95,&g_95}};
        uint16_t *l_117 = (void*)0;
        uint8_t l_200 = 0x27L;
        uint16_t l_271[10] = {0xC4ADL,65530UL,65530UL,0xC4ADL,65530UL,65530UL,0xC4ADL,65530UL,65530UL,0xC4ADL};
        int32_t l_277 = (-2L);
        uint64_t l_281 = 0xD92E11645A4BC02BLL;
        int8_t *l_288[9][3][1] = {{{&l_267[0]},{&l_267[0]},{&g_247}},{{&g_247},{&l_267[0]},{&g_247}},{{&g_247},{&l_267[0]},{&l_267[0]}},{{(void*)0},{&l_267[0]},{&l_267[0]}},{{&g_247},{&g_247},{&l_267[0]}},{{&g_247},{&g_247},{&l_267[0]}},{{&l_267[0]},{(void*)0},{&l_267[0]}},{{&l_267[0]},{&g_247},{&g_247}},{{&l_267[0]},{&g_247},{&g_247}}};
        int i, j, k;
        l_97 ^= (l_96[0][3][0] = l_93);
    }
lbl_314:
    (*g_105) = (*g_105);
    if ((**g_105))
    {
        uint32_t *l_292 = &g_146;
        uint32_t **l_293 = &l_292;
        uint32_t **l_294 = (void*)0;
        uint32_t **l_295 = (void*)0;
        uint32_t *l_297 = &g_146;
        uint32_t **l_296 = &l_297;
        int32_t l_298 = 0x19604CEFL;
        int8_t **l_309[3];
        int32_t l_343 = 0x589DB039L;
        int32_t *l_396 = &g_92[6];
        uint16_t l_405 = 2UL;
        uint64_t *l_426 = &g_248;
        int16_t *l_427 = &g_222;
        int32_t *l_428 = (void*)0;
        int32_t *l_429 = &l_199;
        uint8_t *l_430 = &g_123;
        int32_t *l_432 = &l_96[0][3][0];
        int32_t l_447 = (-2L);
        int32_t l_451 = (-1L);
        int32_t l_452 = 0L;
        int32_t l_453 = (-10L);
        uint32_t l_502 = 0x792C8E86L;
        int64_t l_564 = 0x8993FAABA9780310LL;
        int i;
        for (i = 0; i < 3; i++)
            l_309[i] = (void*)0;
        l_298 &= (((*l_296) = ((*l_293) = l_292)) != &g_146);
        if (((safe_rshift_func_int16_t_s_s((*l_276), (safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((**g_307) = (safe_add_func_int16_t_s_s(g_222, (((((void*)0 == g_307) < ((&g_308 != ((**g_307) , l_309[0])) != (safe_mul_func_int8_t_s_s(l_298, (l_298 & (*l_276)))))) < 0x9FE9F1FF2199AC41LL) & 0xA9F24DD0L)))), l_298)), 1)))) || l_298))
        {
            const uint16_t l_347 = 0x6673L;
            uint64_t l_355[5][5] = {{18446744073709551613UL,0xF815D71E60B38DC7LL,18446744073709551613UL,18446744073709551613UL,0xF815D71E60B38DC7LL},{0xF815D71E60B38DC7LL,18446744073709551613UL,18446744073709551613UL,0xF815D71E60B38DC7LL,18446744073709551613UL},{0xF815D71E60B38DC7LL,0xF815D71E60B38DC7LL,0x997638451A28089FLL,0xF815D71E60B38DC7LL,0xF815D71E60B38DC7LL},{18446744073709551613UL,0xF815D71E60B38DC7LL,18446744073709551613UL,18446744073709551613UL,0xF815D71E60B38DC7LL},{0xF815D71E60B38DC7LL,18446744073709551613UL,18446744073709551613UL,0xF815D71E60B38DC7LL,18446744073709551613UL}};
            uint64_t l_358 = 0x3622BCA56F5464C1LL;
            int i, j;
            for (g_120 = 14; (g_120 > (-1)); g_120--)
            {
                uint16_t *l_327 = &g_134[5][1][6];
                int32_t l_334 = 6L;
                uint8_t *l_341 = (void*)0;
                int32_t l_342 = 0x50F9B080L;
                uint8_t *l_344 = &g_123;
                uint16_t *l_356[2];
                int32_t **l_357 = (void*)0;
                int i;
                for (i = 0; i < 2; i++)
                    l_356[i] = &g_148;
                if (g_247)
                    goto lbl_314;
                if ((safe_mod_func_int8_t_s_s(9L, (((safe_mul_func_int8_t_s_s((l_358 |= (((safe_lshift_func_uint8_t_u_u(((l_298 || (safe_div_func_uint16_t_u_u((g_148 = (safe_mod_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(((*l_327)--), ((g_146 ^= (((**g_307) = ((safe_sub_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s((l_298 >= l_334), (((safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((--(*l_344)) , 0xFFL), (((g_142 = ((l_347 < l_348) == 0x27B9A7BDL)) , ((((safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(0xF67D07CCL, 0xB9BA9420L)), 9)), l_334)) ^ 1UL) < l_334) | (*l_276))) || g_247))), (*l_276))), (*l_276))) < (*g_45)) < g_155[2]))) , (-4L)), l_342)) , 1L)) != 3UL)) , 0x3599L))) ^ (**g_105)) < l_355[2][0]), 0xC7L))), 0x9A4AL))) , 0x66L), 7)) , l_357) == (void*)0)), g_222)) | (*g_45)) ^ g_92[6]))))
                {
                    int32_t ***l_359[2][2][3] = {{{&l_143[6],&l_357,&l_143[6]},{(void*)0,&l_357,&l_143[4]}},{{(void*)0,(void*)0,&l_357},{&l_143[6],&l_357,&l_357}}};
                    uint32_t *l_369 = &g_155[0];
                    uint32_t **l_368 = &l_369;
                    uint64_t *l_380[10][2][4] = {{{&l_358,(void*)0,&l_358,(void*)0},{(void*)0,(void*)0,&l_358,&l_358}},{{&l_358,&g_248,(void*)0,&l_358},{&g_248,(void*)0,&l_355[2][0],&l_358}},{{&g_248,&g_248,(void*)0,&l_355[2][0]},{&l_358,&l_358,&l_358,&l_358}},{{(void*)0,(void*)0,&l_358,&l_358},{&l_358,&l_358,&l_355[3][0],(void*)0}},{{&g_248,&g_248,&l_358,&l_355[3][0]},{(void*)0,&g_248,&l_355[4][4],(void*)0}},{{&g_248,&l_358,&g_248,&l_358},{(void*)0,(void*)0,(void*)0,&l_358}},{{(void*)0,&l_358,&l_358,&l_355[2][0]},{(void*)0,&g_248,&l_355[3][0],&l_358}},{{&l_355[1][3],(void*)0,&l_355[3][0],&l_358},{(void*)0,&g_248,&l_358,&l_358}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_248,&l_355[1][3]}},{{&g_248,(void*)0,&l_355[4][4],&l_355[2][0]},{(void*)0,&l_355[1][3],&l_358,&l_355[2][0]}}};
                    int16_t *l_387 = (void*)0;
                    int16_t *l_388 = &g_222;
                    int16_t *l_390 = &g_391;
                    int64_t *l_392 = &g_393;
                    int i, j, k;
                    l_357 = &l_276;
                    (*l_276) = ((safe_lshift_func_int16_t_s_u(((**g_105) < (safe_mod_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((*l_392) |= (((*l_390) = (safe_rshift_func_uint8_t_u_u((((*l_368) = l_292) == (((*l_170) = ((safe_rshift_func_uint16_t_u_s(((((safe_lshift_func_int8_t_s_u((((*l_276) >= ((safe_add_func_uint32_t_u_u(((**l_357) != g_146), (((0xA2CE0FBE80FF8076LL ^ (safe_add_func_int8_t_s_s(((((255UL >= g_247) != (((*l_388) = (((safe_div_func_uint64_t_u_u((g_248--), ((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s((l_347 > (*g_45)), 0x945D62464B9D06EDLL)), (**l_357))) , 0xF0BCF0CCA076E5CELL))) > l_343) <= (*g_45))) >= l_358)) <= (**g_307)) & l_355[2][3]), 7L))) , &l_298) == (*g_105)))) ^ (*g_308))) <= (**l_357)), 6)) & 0xED28E3C4L) && l_298) || g_123), 9)) , g_159)) , g_389)), 5))) == g_159)), (**l_357))), (**g_307)))), l_355[2][0])) && g_142);
                    if (l_347)
                        break;
                }
                else
                {
                    for (g_123 = (-8); (g_123 <= 52); g_123++)
                    {
                        l_396 = (*g_105);
                        l_343 |= (*l_396);
                        (*l_276) = (safe_lshift_func_uint8_t_u_u(g_148, 3));
                    }
                    return g_159;
                }
            }
            (**g_105) ^= l_355[3][4];
        }
        else
        {
            uint64_t l_403[7][8][4] = {{{0x0A1083C83D12AEA4LL,18446744073709551615UL,0x3111722E9D483E90LL,18446744073709551615UL},{18446744073709551615UL,0x46FB56C8CDFC5565LL,1UL,0x41B725C2D6B6B869LL},{0x1C28E8513C7C95A0LL,0xB600AA3002DCA901LL,0x1C28E8513C7C95A0LL,0UL},{8UL,18446744073709551615UL,0x6EADA4A3CD62BFCDLL,0x0A1083C83D12AEA4LL},{3UL,0UL,18446744073709551615UL,0x55D7A2844A8D60DALL},{0x3111722E9D483E90LL,0xB600AA3002DCA901LL,18446744073709551615UL,3UL},{3UL,0xCD08975AA25797B1LL,0x6EADA4A3CD62BFCDLL,0x41B725C2D6B6B869LL},{0x46FB56C8CDFC5565LL,18446744073709551615UL,0x5C334F7DB7DDD753LL,0UL}},{{0x5C334F7DB7DDD753LL,0UL,0x58771B8873C2F1C9LL,0xCD08975AA25797B1LL},{0x55D7A2844A8D60DALL,0x3111722E9D483E90LL,1UL,1UL},{6UL,6UL,0x0A1083C83D12AEA4LL,18446744073709551615UL},{0x6EADA4A3CD62BFCDLL,0x74CD76DDEF4633B9LL,0UL,0x58771B8873C2F1C9LL},{18446744073709551615UL,0x41B725C2D6B6B869LL,18446744073709551615UL,0UL},{0x0A1083C83D12AEA4LL,0x41B725C2D6B6B869LL,0xB600AA3002DCA901LL,0x58771B8873C2F1C9LL},{0x41B725C2D6B6B869LL,0x74CD76DDEF4633B9LL,0x3111722E9D483E90LL,18446744073709551615UL},{0x054D3185B386F97FLL,6UL,0xE533DFA4BC5AE53DLL,1UL}},{{18446744073709551615UL,0x3111722E9D483E90LL,18446744073709551615UL,0xCD08975AA25797B1LL},{0xE533DFA4BC5AE53DLL,0UL,0x46FB56C8CDFC5565LL,0UL},{0UL,18446744073709551615UL,0xCD08975AA25797B1LL,0x41B725C2D6B6B869LL},{0UL,0xCD08975AA25797B1LL,0x215E5C3FA607A89ELL,3UL},{0UL,0xB600AA3002DCA901LL,9UL,0x55D7A2844A8D60DALL},{0UL,0UL,0x215E5C3FA607A89ELL,0x0A1083C83D12AEA4LL},{0UL,0x55D7A2844A8D60DALL,0xCD08975AA25797B1LL,0x74CD76DDEF4633B9LL},{0UL,0x6EADA4A3CD62BFCDLL,0x46FB56C8CDFC5565LL,18446744073709551615UL}},{{0xE533DFA4BC5AE53DLL,0x215E5C3FA607A89ELL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0xE533DFA4BC5AE53DLL,0xE533DFA4BC5AE53DLL,18446744073709551615UL},{0x054D3185B386F97FLL,0x58771B8873C2F1C9LL,0x3111722E9D483E90LL,18446744073709551615UL},{0x41B725C2D6B6B869LL,8UL,0xB600AA3002DCA901LL,0x901EBCEAE7332D91LL},{0x0A1083C83D12AEA4LL,18446744073709551615UL,18446744073709551615UL,0x901EBCEAE7332D91LL},{18446744073709551615UL,8UL,0UL,18446744073709551615UL},{0x6EADA4A3CD62BFCDLL,0x58771B8873C2F1C9LL,0x0A1083C83D12AEA4LL,18446744073709551615UL},{6UL,0xE533DFA4BC5AE53DLL,1UL,18446744073709551615UL}},{{0x55D7A2844A8D60DALL,0x215E5C3FA607A89ELL,0x58771B8873C2F1C9LL,18446744073709551615UL},{0x5C334F7DB7DDD753LL,0x6EADA4A3CD62BFCDLL,0x5C334F7DB7DDD753LL,0x74CD76DDEF4633B9LL},{0x46FB56C8CDFC5565LL,0x55D7A2844A8D60DALL,0x6EADA4A3CD62BFCDLL,0x0A1083C83D12AEA4LL},{3UL,0UL,18446744073709551615UL,0x55D7A2844A8D60DALL},{0x3111722E9D483E90LL,0xB600AA3002DCA901LL,18446744073709551615UL,3UL},{3UL,0xCD08975AA25797B1LL,0x6EADA4A3CD62BFCDLL,0x41B725C2D6B6B869LL},{0x46FB56C8CDFC5565LL,18446744073709551615UL,0x5C334F7DB7DDD753LL,0UL},{0x5C334F7DB7DDD753LL,0UL,0x58771B8873C2F1C9LL,0xCD08975AA25797B1LL}},{{0x55D7A2844A8D60DALL,0x3111722E9D483E90LL,1UL,1UL},{6UL,6UL,0x0A1083C83D12AEA4LL,18446744073709551615UL},{0x6EADA4A3CD62BFCDLL,0x74CD76DDEF4633B9LL,0UL,0x58771B8873C2F1C9LL},{18446744073709551615UL,0x41B725C2D6B6B869LL,18446744073709551615UL,0UL},{0x0A1083C83D12AEA4LL,0x41B725C2D6B6B869LL,0xB600AA3002DCA901LL,0x58771B8873C2F1C9LL},{0x41B725C2D6B6B869LL,0x74CD76DDEF4633B9LL,0x3111722E9D483E90LL,18446744073709551615UL},{0x054D3185B386F97FLL,6UL,0xE533DFA4BC5AE53DLL,1UL},{18446744073709551615UL,0x3111722E9D483E90LL,18446744073709551615UL,0xCD08975AA25797B1LL}},{{0xE533DFA4BC5AE53DLL,0UL,0x46FB56C8CDFC5565LL,0UL},{0UL,18446744073709551615UL,0xCD08975AA25797B1LL,0x41B725C2D6B6B869LL},{0UL,0xCD08975AA25797B1LL,0x215E5C3FA607A89ELL,3UL},{0x3111722E9D483E90LL,0x6EADA4A3CD62BFCDLL,18446744073709551615UL,0UL},{0x3111722E9D483E90LL,0x74CD76DDEF4633B9LL,0x41B725C2D6B6B869LL,6UL},{0x0A1083C83D12AEA4LL,0UL,0x901EBCEAE7332D91LL,0xB600AA3002DCA901LL},{1UL,18446744073709551615UL,0x215E5C3FA607A89ELL,18446744073709551615UL},{8UL,0x41B725C2D6B6B869LL,18446744073709551615UL,9UL}}};
            int32_t l_406 = 0x10967919L;
            int i, j, k;
            l_298 |= ((((((safe_div_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(((p_78 != p_78) >= l_403[2][7][0]), l_403[3][6][2])) || 0xC77DC72003C8D4C0LL) , (((l_406 = (safe_unary_minus_func_int64_t_s((l_405 = l_403[5][0][2])))) | (safe_lshift_func_int16_t_s_s((((safe_div_func_int8_t_s_s(0xFBL, (*l_396))) | (((safe_mod_func_int32_t_s_s((-7L), 1L)) && 65532UL) , 0x068EL)) == (*l_396)), 6))) && l_403[0][7][3])), l_403[2][7][0])) & (*l_396)) , l_413[1][0]) != &p_78) | l_403[2][7][0]) , (*l_396));
            return (*l_276);
        }
lbl_477:
        if (((((*l_396) , (g_92[2] , ((0x3DDA6935L >= ((((*l_430) ^= (((safe_sub_func_int16_t_s_s((*l_396), (safe_div_func_int16_t_s_s(((((65535UL <= ((((*l_396) || ((((*l_429) = (safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((*l_427) = (((g_95 < ((((*l_426) = ((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((((*g_45) || (&l_276 == (void*)0)) >= (*l_396)), (*l_396))) ^ 0x96F3A13FBFF31416LL), (*l_396))) && (*l_396))) | g_393) < 0x1C21L)) , g_159) < (*l_396))), 5)), 0xCB2ACAD6CB5AC1FFLL))) , &l_245[0][2]) != &g_155[2])) , g_161) , (*l_276))) < g_129) , l_276) == &g_146), (*l_396))))) ^ (*l_396)) <= (*l_276))) && (*g_308)) || (*l_396))) ^ (*g_308)))) | 0x01931441L) != (-2L)))
        {
            const uint8_t l_431 = 5UL;
            (**g_105) = l_431;
            l_396 = l_432;
            (**g_105) = ((*l_396) , 1L);
        }
        else
        {
            int32_t l_433 = 1L;
            int64_t * const l_440 = &g_120;
            int32_t l_444 = (-1L);
            int32_t l_448 = (-1L);
            int32_t l_449 = 0L;
            uint16_t l_462 = 0xB95EL;
            uint32_t **l_470 = (void*)0;
            if (l_433)
            {
                int16_t *l_441 = (void*)0;
                int16_t *l_442 = &g_391;
                int32_t l_443[3][1][10] = {{{0x6F265DF6L,7L,7L,0x6F265DF6L,7L,7L,0x6F265DF6L,7L,7L,0x6F265DF6L}},{{7L,0x6F265DF6L,7L,7L,0x6F265DF6L,7L,7L,0x6F265DF6L,7L,7L}},{{0x6F265DF6L,0x6F265DF6L,0x342DC285L,0x6F265DF6L,0x6F265DF6L,0x342DC285L,0x6F265DF6L,0x6F265DF6L,0x342DC285L,0x6F265DF6L}}};
                uint32_t ***l_469 = &l_295;
                int i, j, k;
                if ((**g_105))
                {
                    int16_t l_434 = 0L;
                    if ((g_146 ^ g_146))
                    {
                        int64_t *l_437[6][10] = {{&g_129,&g_129,&g_129,&g_120,(void*)0,&g_120,&g_129,&g_129,&g_129,&g_120},{&g_393,&g_129,&g_393,&g_129,&g_393,&g_129,&g_129,&g_129,(void*)0,(void*)0},{&g_120,&g_129,(void*)0,&g_120,&g_120,(void*)0,&g_129,&g_120,&g_393,(void*)0},{&g_129,&g_120,&g_129,&g_129,&g_393,&g_129,&g_393,&g_129,&g_129,&g_120},{(void*)0,&g_129,&g_129,&g_393,(void*)0,&g_129,&g_120,&g_120,&g_129,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_129,&g_129,&g_129,&g_129,(void*)0,&g_129}};
                        int64_t **l_438 = (void*)0;
                        int64_t **l_439 = &l_437[4][5];
                        int32_t l_446 = 0xDF9D0D41L;
                        int32_t l_450 = 0x1EA5127BL;
                        int i, j;
                        (*l_432) |= (((*l_430) = ((((g_142 , ((l_434 && (safe_mul_func_uint16_t_u_u((*g_45), (*l_276)))) ^ ((0xE107FE76L && 0x5EF47BC0L) >= (((*l_439) = l_437[4][5]) == l_440)))) > (((l_441 = ((*g_45) , &l_434)) != l_442) & l_433)) >= (-2L)) , 4UL)) > g_142);
                        --l_454;
                        (*l_432) = l_450;
                    }
                    else
                    {
                        (**g_105) ^= l_434;
                    }
                }
                else
                {
                    uint8_t l_459[6][7] = {{0xD9L,8UL,8UL,0xD9L,8UL,8UL,0xD9L},{255UL,0UL,255UL,255UL,0UL,255UL,255UL},{0xD9L,0xD9L,0x1EL,0xD9L,0xD9L,0x1EL,0xD9L},{0UL,255UL,255UL,0UL,255UL,255UL,0UL},{8UL,0xD9L,8UL,8UL,0xD9L,8UL,8UL},{0UL,0UL,255UL,0UL,0UL,255UL,0UL}};
                    int i, j;
                    if ((*l_276))
                    {
                        int16_t l_457 = 7L;
                        return l_457;
                    }
                    else
                    {
                        int16_t l_458[4][2][4] = {{{0xB342L,0x9A5AL,0x9A5AL,0xB342L},{0x9A5AL,0xB342L,0x9A5AL,0x9A5AL}},{{0xB342L,0xB342L,0L,0xB342L},{0xB342L,0x9A5AL,0x9A5AL,0xB342L}},{{0x9A5AL,0xB342L,0x9A5AL,0x9A5AL},{0xB342L,0xB342L,0L,0xB342L}},{{0xB342L,0x9A5AL,0x9A5AL,0xB342L},{0x9A5AL,0xB342L,0x9A5AL,0x9A5AL}}};
                        int i, j, k;
                        l_459[4][0]++;
                    }
                }
                l_462 &= (**g_105);
                (**g_105) = ((*l_432) ^= (((*g_389) |= ((((((safe_rshift_func_int8_t_s_s((*l_276), ((g_134[7][1][1]++) , l_448))) < ((safe_mul_func_int8_t_s_s((-4L), (g_123 ^= ((*g_308) < ((*l_276) != ((((((*l_469) = (void*)0) != l_470) > 0xADC2E902AA4E3212LL) == 0xA835L) <= g_2)))))) | (*l_276))) & l_448) > 1UL) & g_129) == (*l_276))) > 0xDF391A87L));
                return g_161;
            }
            else
            {
                (*l_432) ^= (0x2BL != (g_123--));
                for (l_449 = (-2); (l_449 > 23); l_449 = safe_add_func_int8_t_s_s(l_449, 2))
                {
                    for (g_95 = 16; (g_95 == 24); g_95++)
                    {
                        (*l_396) = 0x436443A6L;
                    }
                }
                if (g_248)
                    goto lbl_477;
            }
            return (*l_396);
        }
        for (g_120 = 6; (g_120 >= 1); g_120 -= 1)
        {
            int16_t l_478 = 0x75A1L;
            int32_t l_501 = 0x43A39201L;
            int32_t l_508 = 0x80D062E3L;
            int16_t l_509 = 0x3CB8L;
            int32_t l_511 = 0x46E9829BL;
            int32_t l_512 = 0L;
            int32_t *l_548[5][1][10] = {{{&l_199,&l_199,(void*)0,&l_199,&l_199,(void*)0,&l_199,(void*)0,&l_199,&l_199}},{{&l_199,&l_199,(void*)0,&l_199,&l_199,&l_199,(void*)0,&l_199,&l_199,(void*)0}},{{(void*)0,&l_199,(void*)0,&l_199,&l_199,&l_199,&l_199,(void*)0,&l_199,(void*)0}},{{&l_199,&l_199,&l_199,&l_199,&l_199,(void*)0,&l_199,&l_199,&l_199,&l_199}},{{(void*)0,(void*)0,(void*)0,&l_199,&l_199,&l_199,&l_199,&l_199,&l_199,(void*)0}}};
            int i, j, k;
        }
    }
    else
    {
        uint64_t *l_598 = &g_248;
        int32_t l_603 = (-1L);
        int32_t l_604 = 0xE90AB6A9L;
        int32_t l_605 = 0x2D0FC036L;
        l_605 ^= ((*l_276) , (((safe_mod_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((&g_248 == (void*)0), ((safe_sub_func_int32_t_s_s(((*g_389) & ((void*)0 == &l_170)), (!((*g_308) = ((safe_lshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u((!((*l_598) = 18446744073709551615UL)), (*g_308))) ^ ((l_603 = (((safe_add_func_uint32_t_u_u(((void*)0 == l_601), 9UL)) & 0x75B1L) || g_159)) >= 0xD4B7L)), g_120)) || g_569))))) | 0xF47AL))), l_604)) != 0x828967D1L), 6UL)) != (*g_389)) != g_393));
    }
    (*l_276) = l_606;
    return (*l_276);
}







static const uint16_t * func_79(int32_t * p_80, uint32_t p_81, uint8_t p_82, int32_t p_83)
{
    const uint16_t *l_90 = (void*)0;
    return l_90;
}







static int32_t * func_84(int64_t p_85, int32_t * p_86)
{
    uint64_t l_87 = 18446744073709551615UL;
    int32_t *l_89 = (void*)0;
    int32_t **l_88[1][4][1];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_88[i][j][k] = &l_89;
        }
    }
    p_86 = (l_87 , p_86);
    p_86 = &g_2;
    return &g_2;
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
    transparent_crc(g_46, "g_46", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_92[i], "g_92[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_134[i][j][k], "g_134[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_155[i], "g_155[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_559[i][j][k], "g_559[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_569, "g_569", print_hash_value);
    transparent_crc(g_629, "g_629", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_928, "g_928", print_hash_value);
    transparent_crc(g_1093, "g_1093", print_hash_value);
    transparent_crc(g_1106, "g_1106", print_hash_value);
    transparent_crc(g_1136, "g_1136", print_hash_value);
    transparent_crc(g_1304, "g_1304", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
