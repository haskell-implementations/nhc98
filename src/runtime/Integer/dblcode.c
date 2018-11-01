/*
** Implementation of encode/decode operations.
*/

#include <stdio.h>
#include <math.h>

#if defined(__arm) || defined(__hppa__)
#define DBL_MINEXP -1024
#define DBL_DIGITS 53
#endif

#if defined(sequent) || defined(sun) || defined(mips) || defined(hp300) || defined(_IBMR2) || defined(linux) || defined(__386BSD__) || defined(bsdi) || defined(__alpha) || defined(__CYGWIN32__) || defined(__MINGW32__) || defined(__OpenBSD__)
#define IEEE
#endif

#include "gmp.h"
#include "gmp-impl.h"
#include "flt.h"

#if defined(__alpha)
#define DNBIGIT 1
#else
#define DNBIGIT 2
#endif
#define SNBIGIT 1

#ifdef HIGH_BYTE_FIRST
#define LL 1
#define HH 0
#else
#define LL 0
#define HH 1
#endif

#define BASE 4294967296.0

#undef MINEXP
#undef HIGHBIT
#undef MSBBIT

/*
 * Encode a mantissa (an Integer) and an exponent (an Int) as a 
 * double-precision floating point number d, such that:
 *
 * 			d = mant * 2^expo
 */

double dencode(MP_INT *man, int iexp)
{
  double       r;
  double base = BASE;
  int i;
  int size = (int)CONINFO_LARGESIZEU(man->sizeTag);

  /* Convert bignum to a double */
  for(r = 0.0, i = size-1; i >= 0; i--)
    r = r * base + man->d[i];

  if (r != 0.0)			/* bug in mips ldexp    */
    r = ldexp(r, iexp);

  if (CONINFO_LARGEEXTRA(man->sizeTag))
    r = -r;

  return r;
}


/*
 * Decode a double-precision floating point number into an Integer mantissa 
 * and an Int exponent.
 */

#define MINEXP (DBL_MINEXP - DBL_DIGITS - 1)
#define HIGHBIT 0x00100000
#define MSBBIT  0x80000000

int ddecode(double f,MP_INT *man)
{
  unsigned     low;
  unsigned     high;
  int          iexp;
  int 	     sign;
  int size;
  union { double d; int i[2]; } u;
  u.d = f;

  /* Do some bit fiddling on IEEE double-precision */
  low  = u.i[LL];
  high = u.i[HH];

  if (low == 0 && (high & ~MSBBIT) == 0) {
    man->sizeTag = CONSTRW(0,0);
    man->d[0] = 0; /* !!! not necessary but better debuging */
    size = 0;
    iexp = 0;
  } else {
    size = DNBIGIT;
    iexp = ((high >> 20) & 0x7ff) + MINEXP;
    sign = high;
    high &= HIGHBIT-1;
    if (iexp != MINEXP)	/* don't add hidden bit to denorms */
      high |= HIGHBIT;
    else {
      iexp++;
      /* A denorm, normalize the mantissa */
      while (! (high & HIGHBIT)) {
	high <<= 1;
	if (low & MSBBIT)
	  high++;
	low <<= 1;
	iexp--;
      }
    }
#if DNBIGIT == 2
    man->d[0] = low;
    man->d[1] = high;
#else
#if DNBIGIT == 1
    man->d[0] = ((unsigned long)high) << 32 | (unsigned long)(unsigned)low;
#else
    Bad DNBIGIT !!
#endif
#endif
    if (sign < 0)
      man->sizeTag = CONSTRW((Int)size,1);
    else
      man->sizeTag = CONSTRW((Int)size,0);
  }
  return iexp;
}
