/* mpz_mod(rem, dividend, divisor) -- Set REM to DIVIDEND mod DIVISOR.

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

#include <stdlib.h>
#include <stdio.h>
#include "gmp.h"
#include "gmp-impl.h"
#include "longlong.h"


INTEGER2(primIntegerRem,mpz_mod,mpz_mod_need)
INTEGER2_C(primIntegerRemC,mpz_mod,mpz_mod_need)

#if PROFILE
static SInfo nodeProfInfo = { "Integer","Integer.mod","Integer.mod"};
#endif

Int mpz_mod_need (MP_INT *num, MP_INT *den)
{
  Int nsize = CONINFO_LARGESIZEU(num->sizeTag);
  Int dsize = CONINFO_LARGESIZEU(den->sizeTag);
  Int rsize = nsize+1;
  Int qsize = nsize - dsize +1;
  if(qsize<=0)
     return 1+nsize+EXTRA;  /* Answer */
  else
     return 1+rsize+EXTRA   /* Answer */
            + qsize+EXTRA   /* Space for quotient */
            + dsize+EXTRA;  /* space for normalized denominator */
}

NodePtr mpz_mod (MP_INT *rem, MP_INT *num, MP_INT *den)
#undef COMPUTE_QUOTIENT
#include "mpz_dmincl.c"
