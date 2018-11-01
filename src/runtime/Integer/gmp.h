/* gmp.h -- Definitions for GNU multiple precision functions.

Copyright (C) 1991 Free Software Foundation, Inc.

This file WAS part of the GNU MP Library.
          === It's now hacked to pieces so that it can be used in nhc.
       
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

#ifndef __GMP_H__
#define __GMP_H__

#ifndef __MP_H__
#define __need_size_t
#include <stddef.h>
#include <stdlib.h>
#endif

#define NO_CDATA
#include "node.h"
#include "haskell2c.h"

/* Structure for rational numbers.  Zero is represented as 0/any, i.e.
   the denominator is ignored.  Negative numbers have the sign in
   the numerator.  */
typedef struct
{
  MP_INT num;
  MP_INT den;
} MP_RAT;


/**************** Integer (i.e. Z) routines.  ****************/

#if 0
void mpz_init (MP_INT *);
void mpz_set (MP_INT *dest_integer, const MP_INT *src_integer);
void mpz_set_ui (MP_INT *integer, unsigned long int initial_value);
void mpz_set_si (MP_INT *integer, signed long int initial_value);
int mpz_set_str (MP_INT *integer, const char *initial_value, int base);
void mpz_init_set (MP_INT *dest_integer, const MP_INT *initial_value);
void mpz_init_set_ui (MP_INT *dest_integer, unsigned long int initial_value);
void mpz_init_set_si (MP_INT *dest_integer, signed long int initial_value);
int mpz_init_set_str (MP_INT *dest_integer, const char *initial_value,
		      int base);
unsigned long int mpz_get_ui (const MP_INT *src_integer);
signed long int mpz_get_si (MP_INT *src_integer);
char * mpz_get_str (char *string, int base, MP_INT *integer);
void mpz_clear (MP_INT *integer);
void * _mpz_realloc (MP_INT *integer, mp_size new_alloc);
void mpz_add (MP_INT *sum, MP_INT *addend1, MP_INT *addend2);
void mpz_add_ui (MP_INT *sum, MP_INT *addend1,
		 unsigned long int addend2);
void mpz_sub (MP_INT *difference, MP_INT *minuend,
	      MP_INT *subtrahend);
void mpz_sub_ui (MP_INT *difference,
		 MP_INT *minuend, unsigned long int subtrahend);
void mpz_mul (MP_INT *product,
	      MP_INT *multiplicator, MP_INT *multiplicand);
void mpz_mul_ui (MP_INT *product,
		 MP_INT *multiplicator,
		 unsigned long int multiplicand);
void mpz_div (MP_INT *quotient, MP_INT *dividend,
	      MP_INT *divisor);
void mpz_div_ui (MP_INT *quotient,
		 MP_INT *dividend, unsigned long int divisor);
void mpz_mod (MP_INT *remainder, MP_INT *divdend,
	      MP_INT *divisor);
void mpz_mod_ui (MP_INT *remainder,
		 MP_INT *divdend, unsigned long int divisor);
void mpz_divmod (MP_INT *quotient, MP_INT *remainder,
		 MP_INT *dividend, MP_INT *divisor);
void mpz_divmod_ui (MP_INT *quotient, MP_INT *remainder,
		    MP_INT *dividend, unsigned long int divisor);
void mpz_mdiv (MP_INT *quotient, MP_INT *dividend,
	       MP_INT *divisor);
void mpz_mdiv_ui (MP_INT *quotient,
		  MP_INT *dividend, unsigned long int divisor);
void mpz_mmod (MP_INT *remainder, MP_INT *divdend,
	       MP_INT *divisor);
unsigned long int mpz_mmod_ui (MP_INT *remainder, MP_INT *divdend,
			       unsigned long int divisor);
void mpz_mdivmod (MP_INT *quotient, MP_INT *remainder,
		  MP_INT *dividend, MP_INT *divisor);
unsigned long int mpz_mdivmod_ui (MP_INT *quotient, MP_INT *remainder,
				  MP_INT *dividend,
				  unsigned long int divisor);
void mpz_sqrt (MP_INT *root, MP_INT *operand);
void mpz_sqrtrem (MP_INT *root, MP_INT *remainder, MP_INT *operand);
int mpz_perfect_square_p (MP_INT *square);
int mpz_probab_prime_p (MP_INT *n, int reps);
void mpz_powm (MP_INT *res, MP_INT *base, MP_INT *exp,
	       MP_INT *mod);
void mpz_powm_ui (MP_INT *res, MP_INT *base, unsigned long int exp,
		  MP_INT *mod);
void mpz_pow_ui (MP_INT *res, MP_INT *base, unsigned long int exp);
void mpz_fac_ui (MP_INT *res, unsigned long int exp);
void mpz_gcd (MP_INT *res, MP_INT *operand1, MP_INT *operand2);
void mpz_gcdext (MP_INT *g, MP_INT *s, MP_INT *t,
		 MP_INT *a, MP_INT *b);
void mpz_neg (MP_INT *negated_operand, MP_INT *operand);
void mpz_abs (MP_INT *positive_operand, MP_INT *signed_operand);
int mpz_cmp (MP_INT *operand1, MP_INT *operand2);
int mpz_cmp_ui (MP_INT *operand1, unsigned long int operand2);
int mpz_cmp_si (MP_INT *operand1, signed long int operand2);
void mpz_mul_2exp (MP_INT *product, MP_INT *multiplicator,
		   unsigned long int exponent_of_2);
void mpz_div_2exp (MP_INT *quotient,
		   MP_INT *dividend, unsigned long int exponent_of_2);
void mpz_mod_2exp (MP_INT *remainder,
		   MP_INT *dividend, unsigned long int exponent_of_2);
void mpz_and (MP_INT *conjunction, MP_INT *operand1,
	      MP_INT *operand2);
void mpz_ior (MP_INT *disjunction, MP_INT *operand1,
	      MP_INT *operand2);
void mpz_xor (MP_INT *disjunction, MP_INT *operand1,
	      MP_INT *operand2);
void mpz_not (MP_INT *complemented_operand, MP_INT *operand);

#ifdef FILE
void mpz_inp_raw (MP_INT *integer, FILE *stream);
void mpz_inp_str (MP_INT *integer, FILE *stream, int base);
void mpz_out_raw (FILE *stream, MP_INT *integer);
void mpz_out_str (FILE *stream, int base, MP_INT *integer);
#endif

void mpz_array_init (MP_INT integer_array[],
		     size_t array_size, mp_size fixed_num_limbs);
void mpz_random (MP_INT *random_integer, mp_size max_size);
void mpz_random2 (MP_INT *random_integer, mp_size max_size);
size_t mpz_size (MP_INT *integer);
size_t mpz_sizeinbase (MP_INT *integer, int base);

/**************** Rational (i.e. Q) routines.  ****************/

void mpq_init (MP_RAT *);
void mpq_clear (MP_RAT *);
void mpq_set (MP_RAT *dest_rational, MP_RAT *src_rational);
void mpq_set_ui (MP_RAT *rational_number,
		 unsigned long int numerator, unsigned long int denominator);
void mpq_set_si (MP_RAT *rational_number,
		 signed long int numerator, unsigned long int denominator);
void mpq_add (MP_RAT *sum, MP_RAT *addend1, MP_RAT *addend2);
void mpq_sub (MP_RAT *difference, MP_RAT *minuend,
	      MP_RAT *subtrahend);
void mpq_mul (MP_RAT *product,
	      MP_RAT *multiplicator, MP_RAT *multiplicand);
void mpq_div (MP_RAT *quotient, MP_RAT *dividend,
	      MP_RAT *divisor);
void mpq_neg (MP_RAT *negated_number, MP_RAT *number);
int mpq_cmp (MP_RAT *operand1, MP_RAT *operand2);
void mpq_inv (MP_RAT *inverted_number, MP_RAT *number);
void mpq_set_num (MP_RAT *rational_number, MP_INT *numerator);
void mpq_set_den (MP_RAT *rational_number, MP_INT *denominator);
void mpq_get_num (MP_INT *numerator, MP_RAT *rational_number);
void mpq_get_den (MP_INT *denominator, MP_RAT *rational_number);

/************ Low level positive-integer (i.e. N) routines.  ************/

mp_size _mpn_add (mp_ptr, mp_srcptr, mp_size, mp_srcptr, mp_size);
mp_size _mpn_sub (mp_ptr, mp_srcptr, mp_size, mp_srcptr, mp_size);
mp_size _mpn_mul (mp_ptr, mp_srcptr, mp_size, mp_srcptr, mp_size);
mp_size _mpn_div (mp_ptr, mp_ptr, mp_size, mp_srcptr, mp_size);
mp_limb _mpn_lshift (mp_ptr, mp_srcptr, mp_size, unsigned long int);
mp_size _mpn_rshift (mp_ptr, mp_srcptr, mp_size, unsigned long int);
mp_size _mpn_rshiftci (mp_ptr, mp_srcptr, mp_size,unsigned long int,mp_limb);
int _mpn_cmp (mp_srcptr, mp_size, mp_srcptr, mp_size);
#endif

#endif /* __GMP_H__ */
