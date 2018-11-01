#include <float.h>

float sencode(MP_INT *man, int iexp);
int sdecode(float f,MP_INT *man);
double dencode(MP_INT *man, int iexp);
int ddecode(double f,MP_INT *man);


#if defined(sequent) || defined(sun) || defined(mips) || defined(hp300) || defined(_IBMR2) || defined(linux) || defined(__386BSD__) || defined(__alpha) || defined(__NetBSD__) || defined(__FreeBSD__) || defined(bsdi) || defined(__CYGWIN32__) || defined(__MINGW32__) || defined(__OpenBSD__)

/* #define DBL_RADIX 2		-- defined in <float.h>	*/
/* #define DBL_DIGITS 53	-- use DBL_MANT_DIG	*/
/* #define DBL_MINEXP (-1021)	-- use DBL_MIN_EXP	*/
/* #define DBL_MAXEXP 1024	-- use DBL_MAX_EXP	*/

/* #define FLT_RADIX 2		-- defined in <float.h>	*/
/* #define FLT_DIGITS 24	-- use FLT_MANT_DIG	*/
/* #define FLT_MINEXP (-125)	-- use FLT_MIN_EXP	*/
/* #define FLT_MAXEXP 128	-- use FLT_MAX_EXP	*/
#endif

#if !defined(DBL_RADIX)
#define DBL_RADIX	FLT_RADIX
#endif
#define DBL_DIGITS	DBL_MANT_DIG
#define DBL_MINEXP	DBL_MIN_EXP
#define DBL_MAXEXP	DBL_MAX_EXP
#define FLT_DIGITS	FLT_MANT_DIG
#define FLT_MINEXP	FLT_MIN_EXP
#define FLT_MAXEXP	FLT_MAX_EXP
