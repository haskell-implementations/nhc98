/* mpz_dmincl.c -- include file for mpz_dm.c, mpz_mod.c, mdiv.c.

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

/* THIS CODE IS OBSOLETE.  IT WILL SOON BE REPLACED BY CLEANER CODE WITH
   LESS MEMORY ALLOCATION OVERHEAD.  */

/* If den == quot, den needs temporary storage.
   If den == rem, den needs temporary storage.
   If num == quot, num needs temporary storage.
   If den has temporary storage, it can be normalized while being copied,
     i.e no extra storage should be allocated.  */

/* This is the function body of mdiv, mpz_divmod, and mpz_mod.

   If COMPUTE_QUOTIENT is defined, the quotient is put in the MP_INT
   object quot, otherwise that variable is not referenced at all.

   The remainder is always computed, and the result is put in the MP_INT
   object rem.  */

{
  mp_ptr np, dp;
  mp_ptr qp, rp;
  mp_size nsize = CONINFO_LARGESIZES(num->sizeTag);
  mp_size dsize = CONINFO_LARGESIZES(den->sizeTag);
  mp_size qsize, rsize;
  mp_size sign_remainder = CONINFO_LARGEEXTRA(num->sizeTag);
#ifdef COMPUTE_QUOTIENT
  mp_size sign_quotient = sign_remainder ^ CONINFO_LARGEEXTRA(den->sizeTag);
#endif
  unsigned normalization_steps;

  /* Ensure space is enough for quotient and remainder. */

  /* We need space for an extra limb in the remainder, because it's
     up-shifted (normalized) below.  */
  rsize = nsize + 1;
  /* GC CHECK */

  qsize = nsize - dsize + 1;    /* qsize cannot be bigger than this.  */
  if (qsize <= 0)
    {
#ifdef COMPUTE_QUOTIENT
      quot->sizeTag = CONSTRW(0,0);
      INIT_PROFINFO(quot,&nodeProfInfo)
#endif
      if (num != rem)
        {
          rem->sizeTag = num->sizeTag;
          INIT_PROFINFO(rem,&nodeProfInfo)
          MPN_COPY (rem->d, num->d, nsize);
        }
      return 1+CONINFO_LARGESIZEU(rem->sizeTag)+EXTRA+(NodePtr)rem;
    }

#ifdef COMPUTE_QUOTIENT
  /* GC CHECK */
  qp = quot->d;
#else
#if 0
  qp = (mp_ptr) alloca ((size_t)(qsize * BYTES_PER_MP_LIMB));
#else
  qp = (mp_ptr)(rsize+1+EXTRA+(NodePtr)rem);  /* quotient after remainder */
#endif
#endif
  np = num->d;
  dp = den->d;
  rp = rem->d;

  /* Make sure quot and num are different.  Otherwise the numerator
     would be successively overwritten by the quotient digits.  */
  if (qp == np) {
      fprintf(stderr,"dmincl.c : qp == np\n");
      exit(-1);
    }

  count_leading_zeros (normalization_steps, dp[dsize - 1]);

  /* Normalize the denominator, i.e. make its most significant bit set by
     shifting it NORMALIZATION_STEPS bits to the left.  Also shift the
     numerator the same number of steps (to keep the quotient the same!).  */
  if (normalization_steps != 0) {
      mp_ptr tp;
      mp_limb ndigit;

      /* Shift up the denominator setting the most significant bit of
         the most significant word.  Use temporary storage not to clobber
         the original contents of the denominator.  */
#if 0       
      tp = (mp_ptr) alloca ((size_t)(dsize * BYTES_PER_MP_LIMB));
#else
      tp = (mp_ptr) (qsize+EXTRA+(NodePtr)qp);  /* Normalized denominat after quotient */
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
  } else {
#ifdef COMPUTE_QUOTIENT
      if (rem == den || quot == den)
#else
      if (rem == den)
#endif
        {
          fprintf(stderr,"rem == den\n");
          exit(-1);
        }

      /* Move the numerator to the remainder.  */
      if (rp != np)
        MPN_COPY (rp, np, nsize);

      rsize = nsize;
  }

  qsize = rsize - dsize + _mpn_div (qp, rp, rsize, dp, dsize);

  rsize = dsize;

  /* Normalize the remainder.  */
  while (rsize > 0)
    {
      if (rp[rsize - 1] != 0)
        break;
      rsize--;
    }

  if (normalization_steps != 0)
    rsize = _mpn_rshift (rp, rp, rsize, normalization_steps);

  rem->sizeTag = CONSTRW(rsize,sign_remainder ? 1:0);
  INIT_PROFINFO(rem,&nodeProfInfo)


#ifdef COMPUTE_QUOTIENT
  /* Normalize the quotient.  We may have at most one leading
     zero-word, so no loop is needed.  */
  if (qsize > 0)
    qsize -= (qp[qsize - 1] == 0);

  quot->sizeTag = CONSTRW(qsize,sign_quotient ? 1 : 0);
  INIT_PROFINFO(quot,&nodeProfInfo)
#endif
  return 1+rsize+EXTRA+(NodePtr)rem;
}
