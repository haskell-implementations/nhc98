/* mpz_div -- divide two integers and produce a quotient.

Copyright (C) 1991 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

The GNU MP Library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with the GNU MP Library; see the file COPYING.  If not, write to
the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.  */

#include <stdio.h>

#include "gmp.h"
#include "gmp-impl.h"
#include "longlong.h"

INTEGER2(primIntegerQuot,mpz_div,mpz_div_need)
INTEGER2_C(primIntegerQuotC,mpz_div,mpz_div_need)

Int  mpz_div_need (MP_INT *num, MP_INT *den)
{
  return 2 + CONINFO_LARGESIZEU(num->sizeTag) + EXTRA - CONINFO_LARGESIZEU(den->sizeTag) /* Result */
           + CONINFO_LARGESIZEU(den->sizeTag) + EXTRA                    /* Normalized denominator */
           + CONINFO_LARGESIZEU(num->sizeTag) + EXTRA + 1;               /* Normalized remainder */
}

#if PROFILE
static SInfo divProfInfo = { "Integer","Integer.div","Integer.div"};
#endif

NodePtr mpz_div (MP_INT *quot, MP_INT *num, MP_INT *den)
{
  mp_srcptr np, dp;
  mp_ptr qp, rp;
  mp_size nsize = CONINFO_LARGESIZES(num->sizeTag);
  mp_size dsize = CONINFO_LARGESIZES(den->sizeTag);
  mp_size qsize, rsize;
  mp_size sign_quotient = CONINFO_LARGEEXTRA(num->sizeTag) ^ CONINFO_LARGEEXTRA(den->sizeTag);
  unsigned normalization_steps;

  /* Ensure space is enough for quotient. */

  qsize = nsize - dsize + 1;    /* qsize cannot be bigger than this.  */
  if (qsize <= 0)
    {
      quot->sizeTag = CONSTRW(0,0);
      INIT_PROFINFO(quot,&divProfInfo)
      return 1+EXTRA+(NodePtr)quot;
    }

  /* GC CHECK */

  qp = quot->d;
  np = num->d;
  dp = den->d;
#if 0
  rp = (mp_ptr) alloca ((size_t)((nsize + 1) * BYTES_PER_MP_LIMB));
#else
  rp = (mp_ptr)(qsize+1+EXTRA+(NodePtr)quot);  /* Remainder after quotient */
#endif

  count_leading_zeros (normalization_steps, dp[dsize - 1]);

  /* Normalize the denominator and the numerator.  */
  if (normalization_steps != 0)
    {
      mp_ptr tp;
      mp_limb ndigit;

      /* Shift up the denominator setting the most significant bit of
         the most significant word.  Use temporary storage not to clobber
         the original contents of the denominator.  */
#if 0
      tp = (mp_ptr) alloca ((size_t)(dsize * BYTES_PER_MP_LIMB));
#else
      tp = (mp_ptr) (nsize+1+(NodePtr)rp); /* Normalized denominator after remainder */
#endif
      (void) _mpn_lshift (tp, dp, dsize, normalization_steps);
      dp = tp;

      /* Shift up the numerator, possibly introducing a new most
         significant word.  Move the shifted numerator in the remainder
         meanwhile.  */
      ndigit = _mpn_lshift (rp, np, nsize, normalization_steps);
      if (ndigit != 0)
        {
          rp[nsize] = ndigit;
          rsize = nsize + 1;
        }
      else
        rsize = nsize;
    }
  else
    {
      /* The denominator is already normalized, as required.
         Copy it to temporary space if it overlaps with the quotient.  */
      if (dp == qp) {
          fprintf(stderr,"dp == qp in mpz_div!\n");
          exit(-1);
      }

      /* Move the numerator to the remainder.  */
      MPN_COPY (rp, np, nsize);
      rsize = nsize;
    }

  qsize = rsize - dsize + _mpn_div (qp, rp, rsize, dp, dsize);

  /* Normalize the quotient.  We may have at most one leading
     zero-word, so no loop is needed.  */
  if (qsize > 0)
    qsize -= (qp[qsize - 1] == 0);

  quot->sizeTag = CONSTRW(qsize, sign_quotient?1:0);
  INIT_PROFINFO(quot,&divProfInfo)
  return 1+qsize+EXTRA+(NodePtr)quot;

}
