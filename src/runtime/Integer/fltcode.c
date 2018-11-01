/*
** Implementation of encode/decode operations.
*/

#include <stdio.h>
#include <math.h>

#if defined(__arm) || defined(__hppa__)
#define FLT_MINEXP -128
#define FLT_DIGITS 24
#endif

#if defined(sequent) || defined(sun) || defined(mips) || defined(hp300) || defined(_IBMR2) || defined(linux) || defined(__386BSD__) || defined(bsdi) || defined(__alpha) || defined(__CYGWIN32__) || defined(__MINGW32__) || defined(__OpenBSD__)
#define IEEE
#endif

#include "gmp.h"
#include "gmp-impl.h"
#include "flt.h"

#ifdef HIGH_BYTE_FIRST
#define LL 1
#define HH 0
#else
#define LL 0
#define HH 1
#endif

#define BASE 4294967296.0

#if defined(__alpha)
#define DNBIGIT 1
#else
#define DNBIGIT 2
#endif
#define SNBIGIT 1

typedef union {
   float f;
   int   i;
 } conv;

/*
** Encode a mantissa (an Integer) and an exponent (an Int) as a floating point number.
** f = mant * 2^expo
** This operation is not as efficient as it could be, but it's portable.
*/

float sencode(MP_INT *man, int iexp)
{
  double r;
  double base = BASE;
  int i;
  int size = (int)CONINFO_LARGESIZEU(man->sizeTag);

  /* Convert bignum to a double */
  for(r = 0.0, i = abs(size)-1; i >= 0; i--)
    r = r * base + man->d[i];
  /* Load new exponent */
/*printf("dencode ldexp %g %d\n", r, iexp);*/
  if (r != 0.0)		/* bug in mips ldexp  */
    r = ldexp(r, iexp);
  if (CONINFO_LARGEEXTRA(man->sizeTag))
    r = -r;
  return (float)r;
}

#undef MINEXP
#undef HIGHBIT
#undef MSBBIT


/*
** Decode a floating point number into a mantissa an an exponent.
** This operation is tricky to do in a portable and efficient way!
** Current implementation is really bad!

      man = amp_alloc(SNBIGIT);

*/


#define MINEXP (FLT_MINEXP - FLT_DIGITS - 1)
#define HIGHBIT 0x00800000
#define MSBBIT  0x80000000

int sdecode(float f,MP_INT *man)
{
  /* Do some bit fiddling on IEEE */
  int high, iexp, sign;
  int size;
  conv c;
  c.f = f;
  high = c.i;

  if ((high & ~MSBBIT) == 0) {
    man->sizeTag = CONSTRW(0,0);
    man->d[0] = 0; /* !!! not necessary but better debuging */
    size = 0;
    iexp = 0;
  } else {
    size = SNBIGIT;
    iexp = ((high >> 23) & 0xff) + MINEXP;
    sign = high;
/* fprintf(stderr, "decode %g %08x %d\n", f, high, iexp); */
    high &= HIGHBIT-1;
    if (iexp != MINEXP)	/* don't add hidden bit to denorms */
      high |= HIGHBIT;
    else {
      iexp++;
      /* A denorm, normalize the mantissa */
      while (! (high & HIGHBIT)) {
	high <<= 1;
	iexp--;
      }
    }
    man->d[0] = high;
    if (sign < 0)
      man->sizeTag = CONSTRW((Int)size,1);
    else
      man->sizeTag = CONSTRW((Int)size,0);
  }
  return iexp;
}
