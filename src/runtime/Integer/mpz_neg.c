/* mpz_neg(MP_INT *dst, MP_INT *src) -- Assign the negated value of SRC to DST.

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

INTEGER1(primIntegerNeg,mpz_neg)   /* INTEGER1 check size */
INTEGER1_C(primIntegerNegC,mpz_neg)   /* INTEGER1 check size */

#if PROFILE
static SInfo negProfInfo = { "Integer","Integer.neg","Integer.neg"};
#endif


NodePtr mpz_neg (MP_INT *dst, MP_INT *src)
{
  mp_size src_size = CONINFO_LARGESIZES(src->sizeTag);
  mp_size abs_src_size = ABS(src_size);

  MPN_COPY (dst->d, src->d, abs_src_size);

  dst->sizeTag = CONSTRW(src_size,CONINFO_LARGEEXTRA(src->sizeTag)?0:1);
  INIT_PROFINFO(dst,&negProfInfo)
  return 1+abs_src_size+EXTRA+(NodePtr)dst;
}
