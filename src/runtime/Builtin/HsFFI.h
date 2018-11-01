#ifndef HSFFI_H
#define HSFFI_H

#ifdef __cplusplus
extern "C" {
#endif

/* extremely poor autoconf replacement, probably needs some update... */
#if defined(__sun__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(_AIX)
#define HAVE_INTTYPES_H
#else
#define HAVE_STDINT_H
#endif
/* end of poor autoconf replacement */

/* get limits for integral types */
#ifdef HAVE_STDINT_H
/* ISO C 99 says:
 * "C++ implementations should define these macros only when
 * __STDC_LIMIT_MACROS is defined before <stdint.h> is included."
 */
#define __STDC_LIMIT_MACROS
#include <stdint.h>
#elif defined(HAVE_INTTYPES_H)
#include <inttypes.h>
#else
/* second best guess (e.g. on Solaris) */
#include <limits.h>
#endif

#ifdef INT8_MIN
#define __INT8_MIN  		INT8_MIN
#define __INT16_MIN 		INT16_MIN
#define __INT32_MIN 		INT32_MIN
#define __INT64_MIN 		INT64_MIN
#define __INT8_MAX  		INT8_MAX
#define __INT16_MAX 		INT16_MAX
#define __INT32_MAX 		INT32_MAX
#define __INT64_MAX 		INT64_MAX
#define __UINT8_MAX 		UINT8_MAX
#define __UINT16_MAX		UINT16_MAX
#define __UINT32_MAX		UINT32_MAX
#define __UINT64_MAX		UINT64_MAX
#else
/* if we had no luck, let's do it for ourselves (assuming 64bit long longs) */
#define __INT8_MIN		(-128)
#define __INT16_MIN		(-32767-1)
#define __INT32_MIN		(-2147483647-1)
#define __INT64_MIN		(-9223372036854775807LL-1)
#define __INT8_MAX		(127)
#define __INT16_MAX		(32767)
#define __INT32_MAX		(2147483647)
#define __INT64_MAX		(9223372036854775807LL)
#define __UINT8_MAX		(255U)
#define __UINT16_MAX		(65535U)
#define __UINT32_MAX		(4294967295U)
#define __UINT64_MAX		(18446744073709551615ULL)
#endif

/* get limits for floating point types */
#include <float.h>

typedef char		 	HsChar;
typedef int		 	HsInt;
typedef int8_t		 	HsInt8;
typedef int16_t		 	HsInt16;
typedef int32_t		 	HsInt32;
typedef int64_t		 	HsInt64;
typedef uint8_t		 	HsWord8;
typedef uint16_t	 	HsWord16;
typedef uint32_t	 	HsWord32;
typedef uint64_t	 	HsWord64;
typedef float		 	HsFloat;
typedef double		 	HsDouble;
typedef int		 	HsBool;
typedef void*			HsPtr;
typedef void			(*HsFunPtr)(void);
typedef void*			HsForeignPtr;
typedef void*			HsStablePtr;
typedef void*			HsAddr;         /* DEPRECATED */
typedef void*			HsForeignObj;   /* DEPRECATED */

/* ToDo: is HS_CHAR_MAX really 0xff??? No Unicode support??? */
#define HS_CHAR_MIN	0
#define HS_CHAR_MAX	0xff

/* is it true or not?  */
#define HS_BOOL_FALSE           0
#define HS_BOOL_TRUE            1

#define HS_BOOL_MIN             HS_BOOL_FALSE
#define HS_BOOL_MAX             HS_BOOL_TRUE

#define HS_INT_MIN		HS_INT32_MIN
#define HS_INT_MAX		HS_INT32_MAX

#define HS_INT8_MIN		__INT8_MIN
#define HS_INT8_MAX		__INT8_MAX
#define HS_INT16_MIN		__INT16_MIN
#define HS_INT16_MAX		__INT16_MAX
#define HS_INT32_MIN		__INT32_MIN
#define HS_INT32_MAX		__INT32_MAX
#define HS_INT64_MIN		__INT64_MIN
#define HS_INT64_MAX		__INT64_MAX
#define HS_WORD8_MAX		__UINT8_MAX
#define HS_WORD16_MAX		__UINT16_MAX
#define HS_WORD32_MAX		__UINT32_MAX
#define HS_WORD64_MAX		__UINT64_MAX

#define HS_FLOAT_RADIX		FLT_RADIX
#define HS_FLOAT_ROUNDS		FLT_ROUNDS
#define HS_FLOAT_EPSILON	FLT_EPSILON
#define HS_FLOAT_DIG		FLT_DIG
#define HS_FLOAT_MANT_DIG	FLT_MANT_DIG
#define HS_FLOAT_MIN		FLT_MIN
#define HS_FLOAT_MIN_EXP	FLT_MIN_EXP
#define HS_FLOAT_MIN_10_EXP	FLT_MIN_10_EXP
#define HS_FLOAT_MAX		FLT_MAX
#define HS_FLOAT_MAX_EXP	FLT_MAX_EXP
#define HS_FLOAT_MAX_10_EXP	FLT_MAX_10_EXP

#define HS_DOUBLE_RADIX		DBL_RADIX
#define HS_DOUBLE_ROUNDS	DBL_ROUNDS
#define HS_DOUBLE_EPSILON	DBL_EPSILON
#define HS_DOUBLE_DIG		DBL_DIG
#define HS_DOUBLE_MANT_DIG	DBL_MANT_DIG
#define HS_DOUBLE_MIN		DBL_MIN
#define HS_DOUBLE_MIN_EXP	DBL_MIN_EXP
#define HS_DOUBLE_MIN_10_EXP	DBL_MIN_10_EXP
#define HS_DOUBLE_MAX		DBL_MAX
#define HS_DOUBLE_MAX_EXP	DBL_MAX_EXP
#define HS_DOUBLE_MAX_10_EXP	DBL_MAX_10_EXP

/* ToDo: Missing...
extern void hs_init     (int *argc, char **argv[]);
extern void hs_exit     (void);
extern void hs_set_argv (int argc, char *argv[]);
extern void hs_add_root (void (*init_root)(void));

extern void hs_perform_gc (void);

extern void hs_free_stable_ptr (HsStablePtr sp);
extern void hs_free_fun_ptr    (HsFunPtr fp);
*/

/* -------------------------------------------------------------------------- */

#ifdef __cplusplus
}
#endif

#endif /* HSFFI_H */
