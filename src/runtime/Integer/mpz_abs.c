/* mpz_abs(MP_INT *dst, MP_INT *src) -- Assign the absolute value of SRC to DST.

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

INTEGER1(primIntegerAbs,mpz_abs) /* INTEGER1 check size */
INTEGER1_C(primIntegerAbsC,mpz_abs) /* INTEGER1 check size */

#if PROFILE
static SInfo absProfInfo = { "Integer","Integer.abs","Integer.abs"};
#endif

NodePtr mpz_abs (MP_INT *dst, MP_INT *src)
{
  mp_size src_size = CONINFO_LARGESIZEU(src->sizeTag);

  if (src != dst)
    {
      /* GC CHECK */

      MPN_COPY (dst->d, src->d, src_size);
    }

  dst->sizeTag = CONSTRW(src_size,0);
  INIT_PROFINFO(dst,&absProfInfo)
  return 1+src_size+EXTRA+(NodePtr)dst;
}
