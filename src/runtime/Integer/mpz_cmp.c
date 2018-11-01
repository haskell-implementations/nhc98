/* mpz_cmp(u,v) -- Compare U, V.  Return postive, zero, or negative
   based on if U > V, U == V, or U < V.

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

#ifdef BERKELEY_MP
#include "mp.h"
#endif
#include "gmp.h"
#include "gmp-impl.h"

#include <stdio.h>

int mpz_cmp (MP_INT *u, MP_INT *v);

INTEGER2CMP(primIntegerEq,!mpz_cmp(a,b))
INTEGER2CMP(primIntegerLe,mpz_cmp(a,b)<=0)
INTEGER2CMP(primIntegerLt,mpz_cmp(a,b)<0)

INTEGER2CMP_C(primIntegerEqC,!mpz_cmp(a,b))
INTEGER2CMP_C(primIntegerLeC,mpz_cmp(a,b)<=0)
INTEGER2CMP_C(primIntegerLtC,mpz_cmp(a,b)<0)

#if 0
int mpz_eq(MP_INT *u, MP_INT *v)
{
  return !mpz_cmp(u,v);
}

int mpz_le(MP_INT *u, MP_INT *v)
{
  return mpz_cmp(u,v)<=0;
}
#endif


int mpz_cmp (MP_INT *u, MP_INT *v)
{
  mp_size usize = CONINFO_LARGESIZES(u->sizeTag);
  mp_size vsize = CONINFO_LARGESIZES(v->sizeTag);
  mp_size size;
  mp_size i;
  mp_limb a, b;
  mp_srcptr up, vp;

  usize = CONINFO_LARGEEXTRA(u->sizeTag)?-usize:usize;
  vsize = CONINFO_LARGEEXTRA(v->sizeTag)?-vsize:vsize;

  if (usize != vsize)
    return (int)(usize - vsize);

  if (usize == 0)
    return 0;

  size = ABS(usize);

  up = u->d;
  vp = v->d;

  i = size - 1;
  do
    {
      a = up[i];
      b = vp[i];
      i--;
      if (i < 0)
	break;
    }
  while (a == b);

  if (a == b)
    return 0;

  if ((a < b) == (usize < 0))
    return 1;
  else
    return -1;
}
