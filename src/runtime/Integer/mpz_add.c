/* mpz_add -- Add two integers.

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

#include "gmp.h"
#include "gmp-impl.h"


INTEGER2(primIntegerAdd,mpz_add,mpz_add_need)
INTEGER2_C(primIntegerAddC,mpz_add,mpz_add_need)

Int  mpz_add_need (MP_INT *u, MP_INT *v)
{
  mp_size usize = CONINFO_LARGESIZEU(u->sizeTag);
  mp_size vsize = CONINFO_LARGESIZEU(v->sizeTag);
  return 2+(usize>vsize?usize:vsize)+EXTRA;
}

#if PROFILE
static SInfo addProfInfo = { "Integer","Integer.add","Integer.add"};
#endif

NodePtr mpz_add (MP_INT *sum, MP_INT *u, MP_INT *v)
{
  mp_srcptr up, vp;
  mp_ptr sump;
  mp_size usize, vsize, sumsize;
  mp_size abs_usize;
  mp_size abs_vsize;

  abs_usize = CONINFO_LARGESIZES(u->sizeTag);
  abs_vsize = CONINFO_LARGESIZES(v->sizeTag);
  usize = CONINFO_LARGEEXTRA(u->sizeTag)?-abs_usize:abs_usize;
  vsize = CONINFO_LARGEEXTRA(v->sizeTag)?-abs_vsize:abs_vsize;

  if (abs_usize < abs_vsize)
    {
      /* Swap U and V. */
      {MP_INT *t = u; u = v; v = t;}
      {mp_size t = usize; usize = vsize; vsize = t;}
      {mp_size t = abs_usize; abs_usize = abs_vsize; abs_vsize = t;}
    }

  /* True: abs(USIZE) >= abs(VSIZE) */

  /* If not space for sum (and possible carry), increase space.  */
  sumsize = abs_usize + 1;
  /* GC CHECK */

  /* sump is never the same as u or v */
  up = u->d;
  vp = v->d;
  sump = sum->d;

  if (usize >= 0)
    {
      if (vsize >= 0)
	{
	  sumsize = _mpn_add (sump, up, abs_usize, vp, abs_vsize);
	  if (sumsize != 0)
	    sump[abs_usize] = 1;
	  sumsize = sumsize + abs_usize;
	}
      else
	{
	  /* The signs are different.  Need exact comparision to determine
	     which operand to subtract from which.  */
	  if (abs_usize == abs_vsize
	      && _mpn_cmp (up, abs_usize, vp, abs_usize) < 0)
	    sumsize = -(abs_usize
			+ _mpn_sub (sump, vp, abs_usize, up, abs_usize));
	  else
	    sumsize = (abs_usize
		       + _mpn_sub (sump, up, abs_usize, vp, abs_vsize));
	}
    }
  else
    {
      if (vsize >= 0)
	{
	  /* The signs are different.  Need exact comparision to determine
	     which operand to subtract from which.  */
	  if (abs_usize == abs_vsize
	      && _mpn_cmp (up, abs_usize, vp, abs_usize) < 0)
	    sumsize = (abs_usize
		       + _mpn_sub (sump, vp, abs_usize, up, abs_usize));
	  else
	    sumsize = -(abs_usize
			+ _mpn_sub (sump, up, abs_usize, vp, abs_vsize));
	}
      else
	{
	  sumsize = _mpn_add (sump, up, abs_usize, vp, abs_vsize);
	  if (sumsize != 0)
	    sump[abs_usize] = 1;
	  sumsize = -(sumsize + abs_usize);
	}
    }

  sum->sizeTag = CONSTRW(abs(sumsize),sumsize<0?1:0);
  INIT_PROFINFO(sum,&addProfInfo)
  return 1+ABS(sumsize)+EXTRA+(NodePtr)sum;
}
