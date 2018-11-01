/* mpz_mul -- Multiply two integers.

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


INTEGER2(primIntegerMul,mpz_mul,mpz_mul_need)
INTEGER2_C(primIntegerMulC,mpz_mul,mpz_mul_need)

Int mpz_mul_need (MP_INT *u, MP_INT *v)
{
  return 1+CONINFO_LARGESIZES(u->sizeTag) + CONINFO_LARGESIZES(v->sizeTag)+EXTRA;
}

#if PROFILE
static SInfo mulProfInfo = { "Integer","Integer.abs","Integer.abs"};
#endif


NodePtr mpz_mul (MP_INT *w, MP_INT *u, MP_INT *v)
{
  mp_size usize = CONINFO_LARGESIZES(u->sizeTag);
  mp_size vsize = CONINFO_LARGESIZES(v->sizeTag);
  mp_size wsize;
  mp_size sign_product;
  mp_ptr up, vp;
  mp_ptr wp;

  sign_product = CONINFO_LARGEEXTRA(u->sizeTag) ^ CONINFO_LARGEEXTRA(v->sizeTag);
  usize = ABS(usize);
  vsize = ABS(vsize);

  if (usize < vsize)
    {
      /* Swap U and V.  */
      {MP_INT *t = u; u = v; v = t;}
      {mp_size t = usize; usize = vsize; vsize = t;}
    }

  up = u->d;
  vp = v->d;
  wp = w->d;

  wsize = _mpn_mul (wp, up, usize, vp, vsize);
  w->sizeTag = CONSTRW(wsize, sign_product ? 1 : 0);
  INIT_PROFINFO(w,&mulProfInfo)
  return 1+wsize+(NodePtr)w+EXTRA;
}
