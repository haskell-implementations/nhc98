/* mpz_or -- Or two integers.

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


INTEGER2(primIntegerOr,mpz_or,mpz_or_need)
INTEGER2_C(primIntegerOrC,mpz_or,mpz_or_need)

/* mpz_or only works for positive numbers !!! */

Int  mpz_or_need (MP_INT *u, MP_INT *v)
{
  mp_size usize = CONINFO_LARGESIZEU(u->sizeTag);
  mp_size vsize = CONINFO_LARGESIZEU(v->sizeTag);
  return 1+(usize>vsize?usize:vsize)+EXTRA;
}

#if PROFILE
static SInfo orProfInfo = { "Integer","Integer.or","Integer.or"};
#endif

NodePtr mpz_or (MP_INT *sum, MP_INT *u, MP_INT *v)
{
  mp_srcptr up, vp;
  mp_ptr sump;
  mp_size usize, vsize;
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

  /* sump is never the same as u or v */
  up = u->d;
  vp = v->d;
  sump = sum->d;

  {
    Int j;                               /* +u +v */
    for(j = abs_vsize; j>0; j++) {
      *sump++ = *up++ | *vp++;
    }
    for(j = abs_usize-abs_vsize; j>0; j++) {
      *sump++ = *up++;
    }
  }

  sum->sizeTag = CONSTRW(usize,0);
  INIT_PROFINFO(sum,&orProfInfo)
  return 1+abs_usize+EXTRA+(NodePtr)sum;
}
