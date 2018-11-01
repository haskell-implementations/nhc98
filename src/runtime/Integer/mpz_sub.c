/* mpz_sub -- Subtract two integers.

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


INTEGER2(primIntegerSub,mpz_sub,mpz_sub_need)
INTEGER2_C(primIntegerSubC,mpz_sub,mpz_sub_need)

Int  mpz_sub_need (MP_INT *u, MP_INT *v)
{
  mp_size usize = CONINFO_LARGESIZEU(u->sizeTag);
  mp_size vsize = CONINFO_LARGESIZEU(v->sizeTag);
  return 2+(usize>vsize?usize:vsize)+EXTRA;
}

#if PROFILE
static SInfo subProfInfo = { "Integer","Integer.sub","Integer.sub"};
#endif

NodePtr mpz_sub (MP_INT *w, MP_INT *u, MP_INT *v)
{
  mp_srcptr up, vp;
  mp_ptr wp;
  mp_size usize, vsize, wsize;
  mp_size abs_usize;
  mp_size abs_vsize;

  abs_usize = CONINFO_LARGESIZES(u->sizeTag);
  abs_vsize = CONINFO_LARGESIZES(v->sizeTag);
  usize = CONINFO_LARGEEXTRA(u->sizeTag)?-abs_usize:abs_usize;
  vsize = CONINFO_LARGEEXTRA(v->sizeTag)?abs_vsize:-abs_vsize; /* The "-" makes the difference from mpz_add */

  if (abs_usize < abs_vsize)
    {
      /* Swap U and V. */
      {MP_INT *t = u; u = v; v = t;}
      {mp_size t = usize; usize = vsize; vsize = t;}
      {mp_size t = abs_usize; abs_usize = abs_vsize; abs_vsize = t;}
    }

  /* True: abs(USIZE) >= abs(VSIZE) */

  /* If not space for sum (and possible carry), increase space.  */
  wsize = abs_usize + 1;
  /* GC CHECK */

  /* wp is never the same as u or v */
  up = u->d;
  vp = v->d;
  wp = w->d;

  if (usize >= 0)
    {
      if (vsize >= 0)
	{
	  wsize = _mpn_add (wp, up, abs_usize, vp, abs_vsize);
	  if (wsize != 0)
	    wp[abs_usize] = 1;
	  wsize = wsize + abs_usize;
	}
      else
	{
	  /* The signs are different.  Need exact comparision to determine
	     which operand to subtract from which.  */
	  if (abs_usize == abs_vsize
	      && _mpn_cmp (up, abs_usize, vp, abs_usize) < 0)
	    wsize = -(abs_usize + _mpn_sub (wp, vp, abs_usize, up, abs_usize));
	  else
	    wsize = abs_usize + _mpn_sub (wp, up, abs_usize, vp, abs_vsize);
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
	    wsize = abs_usize + _mpn_sub (wp, vp, abs_usize, up, abs_usize);
	  else
	    wsize = -(abs_usize + _mpn_sub (wp, up, abs_usize, vp, abs_vsize));
	}
      else
	{
	  wsize = _mpn_add (wp, up, abs_usize, vp, abs_vsize);
	  if (wsize != 0)
	    wp[abs_usize] = 1;
	  wsize = -(wsize + abs_usize);
	}
    }

  w->sizeTag = CONSTRW(abs(wsize),wsize<0?1:0);
  INIT_PROFINFO(w,&subProfInfo)
  return 1+ABS(wsize)+EXTRA+(NodePtr)w;
}
