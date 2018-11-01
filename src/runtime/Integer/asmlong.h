#if defined (__a29k__) || defined (___AM29K__)
#define add_ssaaaa(sh, sl, ah, al, bh, bl) \
  __asm__ ("add %1,%4,%5\n"	\
"	addc %0,%2,%3"		\
	 : "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl)) \
	 : "%r" ((unsigned long int)(ah)), "rI" ((unsigned long int)(bh)), \
	   "%r" ((unsigned long int)(al)), "rI" ((unsigned long int)(bl)))
#define sub_ddmmss(sh, sl, ah, al, bh, bl) \
  __asm__ ("sub %1,%4,%5\n"	\
"	subc %0,%2,%3"		\
	 : "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl)) \
	 : "r" ((unsigned long int)(ah)), "rI" ((unsigned long int)(bh)), \
	   "r" ((unsigned long int)(al)), "rI" ((unsigned long int)(bl)))
#define umul_ppmm(xh, xl, m0, m1) \
  do {									\
    unsigned long int __m0 = (m0), __m1 = (m1);				\
    __asm__ ("multiplu %0,%1,%2" : "=r" ((unsigned long int)(xl))	\
	     : "r" (__m0), "r" (__m1));					\
    __asm__ ("multmu %0,%1,%2" : "=r" ((unsigned long int)(xh))		\
	     : "r" (__m0), "r" (__m1));					\
  } while (0)
#define udiv_qrnnd(q, r, n1, n0, d) \
  __asm__ ("dividu %0,%3,%4"						\
	: "=r" ((unsigned long int)(q)), "=q" ((unsigned long int)(r))	\
	: "1" ((unsigned long int)(n1)), "r" ((unsigned long int)(n0)),	\
	  "r" ((unsigned long int)(d)))
#define count_leading_zeros(count, x) \
    __asm__ ("clz %0,%1" : "=r" ((unsigned long int)(count))		\
	     : "r" ((unsigned long int)(x)))
#endif /* __a29k__ */

#if defined (__arm__)
#define add_ssaaaa(sh, sl, ah, al, bh, bl) \
  __asm__ ("adds %1,%4,%5\n"	\
"	adc %0,%2,%3"		\
	: "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl)) \
	: "%r" ((unsigned long int)(ah)), "rI" ((unsigned long int)(bh)), \
	  "%r" ((unsigned long int)(al)), "rI" ((unsigned long int)(bl)))
#define sub_ddmmss(sh, sl, ah, al, bh, bl) \
  __asm__ ("subs %1,%4,%5\n"	\
"	sbc %0,%2,%3"		\
	: "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl)) \
	: "r" ((unsigned long int)(ah)), "rI" ((unsigned long int)(bh)), \
	  "r" ((unsigned long int)(al)), "rI" ((unsigned long int)(bl)))
#endif /* __arm__ */

#if defined (__gmicro__)
#define add_ssaaaa(sh, sl, ah, al, bh, bl) \
  __asm__ ("add.w %5,%1\n"	\
"	addx %3,%0"		\
       : "=g" ((unsigned long int)(sh)), "=&g" ((unsigned long int)(sl))\
       : "%0" ((unsigned long int)(ah)), "g" ((unsigned long int)(bh)),	\
	 "%1" ((unsigned long int)(al)), "g" ((unsigned long int)(bl)))
#define sub_ddmmss(sh, sl, ah, al, bh, bl) \
  __asm__ ("sub.w %5,%1\n"	\
"	subx %3,%0"		\
       : "=g" ((unsigned long int)(sh)), "=&g" ((unsigned long int)(sl))\
       : "0" ((unsigned long int)(ah)), "g" ((unsigned long int)(bh)),	\
	 "1" ((unsigned long int)(al)), "g" ((unsigned long int)(bl)))
#define umul_ppmm(ph, pl, m0, m1) \
  __asm__ ("mulx %3,%0,%1"						\
	: "=g" ((unsigned long int)(ph)), "=r" ((unsigned long int)(pl))\
	: "%0" ((unsigned long int)(m0)), "g" ((unsigned long int)(m1)))
#define udiv_qrnnd(q, r, nh, nl, d) \
  __asm__ ("divx %4,%0,%1"						\
	: "=g" ((unsigned long int)(q)), "=r" ((unsigned long int)(r))	\
	: "1" ((unsigned long int)(nh)), "0" ((unsigned long int)(nl)),	\
	  "g" ((unsigned long int)(d)))
#define count_leading_zeros(count, x) \
  __asm__ ("bsch/1 %1,%0"						\
	: "=g" (count)							\
	: "g" ((unsigned long int)(x)), "0" (0UL))
#endif

#if defined (__hppa)
#define add_ssaaaa(sh, sl, ah, al, bh, bl) \
  __asm__ ("add %4,%5,%1\n"	\
"        addc %2,%3,%0"		\
	: "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl))\
	: "%r" ((unsigned long int)(ah)), "r" ((unsigned long int)(bh)),\
	  "%r" ((unsigned long int)(al)), "r" ((unsigned long int)(bl)))
#define sub_ddmmss(sh, sl, ah, al, bh, bl) \
  __asm__ ("sub %5,%4,%1\n"	\
"        subb %3,%2,%0"		\
	: "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl))\
	: "r" ((unsigned long int)(ah)), "r" ((unsigned long int)(bh)),	\
	  "r" ((unsigned long int)(al)), "r" ((unsigned long int)(bl)))
#endif

#if defined (__i386__) || defined (__i486__)
#define add_ssaaaa(sh, sl, ah, al, bh, bl) \
  __asm__ ("addl %5,%1\n"	\
"	adcl %3,%0"		\
       : "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl))\
       : "%0" ((unsigned long int)(ah)), "g" ((unsigned long int)(bh)),	\
	 "%1" ((unsigned long int)(al)), "g" ((unsigned long int)(bl)))
#define sub_ddmmss(sh, sl, ah, al, bh, bl) \
  __asm__ ("subl %5,%1\n"	\
"	sbbl %3,%0"		\
       : "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl))\
       : "0" ((unsigned long int)(ah)), "g" ((unsigned long int)(bh)),	\
	 "1" ((unsigned long int)(al)), "g" ((unsigned long int)(bl)))
#define umul_ppmm(w1, w0, u, v) \
  __asm__ ("mull %3"							\
	: "=a" ((unsigned long int)(w0)), "=d" ((unsigned long int)(w1))\
	: "%0" ((unsigned long int)(u)), "rm" ((unsigned long int)(v)))
#define udiv_qrnnd(q, r, n1, n0, d) \
  __asm__ ("divl %4"							\
	: "=a" ((unsigned long int)(q)), "=d" ((unsigned long int)(r))	\
	: "0" ((unsigned long int)(n0)), "1" ((unsigned long int)(n1)),	\
	  "rm" ((unsigned long int)(d)))
#if 0
#define count_leading_zeros(count, x) \
  do {									\
    unsigned long int __cbtmp;						\
    __asm__ ("bsrl %1,%0"						\
	     : "=r" (__cbtmp) : "rm" ((unsigned long int)(x)));		\
    (count) = __cbtmp ^ 31;						\
  } while (0)
#endif
#endif /* 80x86 */

#if defined (__i860__)
#if 0
/* Make sure these patterns really improve the code before
   switching them on.  */
#define add_ssaaaa(sh, sl, ah, al, bh, bl) \
  do {									\
    union								\
      {									\
	long long int ll;						\
	struct {unsigned long int l, h;} i;				\
      }  __a, __b, __s;							\
    __a.i.l = (al); __a.i.h = (ah);					\
    __b.i.l = (bl); __b.i.h = (bh);					\
    __asm__ ("fiadd.dd %1,%2,%0"					\
	     : "=f" (__s.ll)						\
	     : "%f" (__a.ll), "f" (__b.ll));				\
    (sh) = __s.i.h; (sl) = __s.i.l;					\
    } while (0)
#define sub_ddmmss(sh, sl, ah, al, bh, bl) \
  do {									\
    union								\
      {									\
	long long int ll;						\
	struct {unsigned long int l, h;} i;				\
      }  __a, __b, __s;							\
    __a.i.l = (al); __a.i.h = (ah);					\
    __b.i.l = (bl); __b.i.h = (bh);					\
    __asm__ ("fisub.dd %1,%2,%0"					\
	     : "=f" (__s.ll)						\
	     : "%f" (__a.ll), "f" (__b.ll));				\
    (sh) = __s.i.h; (sl) = __s.i.l;					\
    } while (0)
#endif
#endif /* __i860__ */

#if defined (___IBMR2__) /* IBM RS6000 */
#define add_ssaaaa(sh, sl, ah, al, bh, bl) \
  __asm__ ("a %1,%4,%5\n"	\
"	ae %0,%2,%3"		\
	: "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl))\
	: "%r" ((unsigned long int)(ah)), "r" ((unsigned long int)(bh)),\
	  "%r" ((unsigned long int)(al)), "r" ((unsigned long int)(bl)))
#define sub_ddmmss(sh, sl, ah, al, bh, bl) \
  __asm__ ("sf %1,%5,%4\n"	\
"	sfe %0,%3,%2"		\
	: "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl))\
	: "r" ((unsigned long int)(ah)), "r" ((unsigned long int)(bh)),	\
	  "r" ((unsigned long int)(al)), "r" ((unsigned long int)(bl)))
#define umul_ppmm(xh, xl, m0, m1) \
  do {									\
    unsigned long int __m0 = (m0), __m1 = (m1);				\
    __asm__ ("mul %0,%2,%3"						\
	: "=r" ((unsigned long int)(xh)), "=q" ((unsigned long int)(xl))\
	: "r" (__m0), "r" (__m1));					\
    (xh) += ((((signed long int) __m0 >> 31) & __m1)			\
	     + (((signed long int) __m1 >> 31) & __m0));		\
  } while (0)
#define UMUL_TIME 8
#define udiv_qrnnd(q, r, nh, nl, d) \
  do { /* Use the signed "div" insn, and adjust the result. */		\
    unsigned long int __q, __r, __nh, __nl, __d, __xh, __xl;		\
    __nh = 0;								\
    __nl = (((unsigned long int)(nh)) << 30) | ((unsigned long int)(nl) >> 2);\
    __nh = (unsigned long int)(nh) >> 2;				\
    __d = ((unsigned long int)(d) >> 1);				\
    __asm__ ("div %0,%2,%4"						\
	     : "=r" (__q), "=q" (__r)					\
	     : "r" (__nh), "1" (__nl), "r" (__d));			\
    __q <<= 1;								\
    __asm__ ("mul %0,%2,%3"						\
	     : "=r" (__xh), "=q" (__xl)					\
	     : "r" (__q), "r" ((unsigned long int)(d)));		\
    __xh += (((signed long int) __q >> 31) & (d)) + __q;		\
    if ((nh) < __xh || ((nh) == __xh && (nl) < __xl))			\
      {									\
	do								\
	  {								\
	    sub_ddmmss (__xh, __xl, __xh, __xl, 0, (d));		\
	    __q--;							\
	  }								\
	while ((nh) < __xh || ((nh) == __xh && (nl) < __xl));		\
	__xl = (nl) - __xl;						\
      }									\
    else								\
      {									\
	sub_ddmmss (__xh, __xl, (nh), (nl), __xh, __xl);		\
	if (__xh != 0)							\
	  {								\
	    do								\
	      {								\
		sub_ddmmss (__xh, __xl, __xh, __xl, 0, (d));		\
		__q++;							\
	      }								\
	    while (__xh != 0);						\
	  }								\
	if (__xl >= (d))						\
	  {								\
	    __xl -= (d);						\
	    __q++;							\
	  }								\
      }									\
    (q) = __q;								\
    (r) = __xl;								\
  } while (0)
#define UDIV_TIME 40
#define UDIV_NEEDS_NORMALIZATION 1
#define count_leading_zeros(count, x) \
  __asm__ ("cntlz %0,%1"						\
	: "=r" ((unsigned long int)(count)) : "r" ((unsigned long int)(x)))
#endif /* ___IBMR2__ */

#if defined (__mc68000__)
#define add_ssaaaa(sh, sl, ah, al, bh, bl) \
  __asm__ ("add%.l %5,%1\n\taddx%.l %3,%0"				\
	   : "=d" ((unsigned long int)(sh)),				\
	     "=&d" ((unsigned long int)(sl))				\
	   : "%0" ((unsigned long int)(ah)),				\
	     "d" ((unsigned long int)(bh)),				\
	     "%1" ((unsigned long int)(al)),				\
	     "g" ((unsigned long int)(bl)))
#define sub_ddmmss(sh, sl, ah, al, bh, bl) \
  __asm__ ("sub%.l %5,%1\n\tsubx%.l %3,%0"				\
	   : "=d" ((unsigned long int)(sh)),				\
	     "=&d" ((unsigned long int)(sl))				\
	   : "0" ((unsigned long int)(ah)),				\
	     "d" ((unsigned long int)(bh)),				\
	     "1" ((unsigned long int)(al)),				\
	     "g" ((unsigned long int)(bl)))
#if defined (__mc68020__) || defined (__NeXT__) || defined(mc68020)
#define umul_ppmm(w1, w0, u, v) \
  __asm__ ("mulu%.l %3,%1:%0"						\
	: "=d" ((unsigned long int)(w0)), "=d" ((unsigned long int)(w1))\
	: "%0" ((unsigned long int)(u)), "dmi" ((unsigned long int)(v)))
#define udiv_qrnnd(q, r, n1, n0, d) \
  __asm__ ("divu%.l %4,%1:%0"						\
	: "=d" ((unsigned long int)(q)), "=d" ((unsigned long int)(r))	\
	: "0" ((unsigned long int)(n0)), "1" ((unsigned long int)(n1)),	\
	  "dmi" ((unsigned long int)(d)))
#define count_leading_zeros(count, x) \
  __asm__ ("bfffo %1{%b2:%b2},%0"					\
	: "=d" ((unsigned long int)(count))				\
	: "od" ((unsigned long int)(x)), "n" (0))
#else /* not mc68020 */
#define umul_ppmm(xh, xl, a, b) \
  __asm__ ("| Inlined umul_ppmm\n"	\
"	movel	%2,d0\n"	\
"	movel	%3,d1\n"	\
"	movel	d0,d2\n"	\
"	swap	d0\n"		\
"	movel	d1,d3\n"	\
"	swap	d1\n"		\
"	movew	d2,d4\n"	\
"	mulu	d3,d4\n"	\
"	mulu	d1,d2\n"	\
"	mulu	d0,d3\n"	\
"	mulu	d0,d1\n"	\
"	movel	d4,d0\n"	\
"	eorw	d0,d0\n"	\
"	swap	d0\n"		\
"	addl	d0,d2\n"	\
"	addl	d3,d2\n"	\
"	jcc	1f\n"		\
"	addl	#65536,d1\n"	\
"1:	swap	d2\n"		\
"	moveq	#0,d0\n"	\
"	movew	d2,d0\n"	\
"	movew	d4,d2\n"	\
"	movel	d2,%1\n"	\
"	addl	d1,d0\n"	\
"	movel	d0,%0"		\
       : "=g" ((unsigned long int)(xh)), "=g" ((unsigned long int)(xl))	\
       :"g" ((unsigned long int)(a)), "g" ((unsigned long int)(b))	\
       : "d0", "d1", "d2", "d3", "d4")
#endif /* not mc68020 */
#endif /* mc68000 */

#if defined (__m88000__)
#define add_ssaaaa(sh, sl, ah, al, bh, bl) \
  __asm__ ("addu.co %1,%r4,%r5\n\taddu.ci %0,%r2,%r3"			\
	: "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl))\
	: "%rJ" ((unsigned long int)(ah)), "rJ" ((unsigned long int)(bh)),\
	  "%rJ" ((unsigned long int)(al)), "rJ" ((unsigned long int)(bl)))
#define sub_ddmmss(sh, sl, ah, al, bh, bl) \
  __asm__ ("subu.co %1,%r4,%r5\n\t subu.ci %0,%r2,%r3"			\
	: "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl))\
	: "rJ" ((unsigned long int)(ah)), "rJ" ((unsigned long int)(bh)),\
	  "rJ" ((unsigned long int)(al)), "rJ" ((unsigned long int)(bl)))
#define UMUL_TIME 17
#define UDIV_TIME 150
#define count_leading_zeros(count, x) \
  do {									\
    unsigned long int __cbtmp;						\
    __asm__ ("ff1 %0,%1"						\
	     : "=r" (__cbtmp) : "r" ((unsigned long int)(x)));		\
    (count) = __cbtmp ^ 31;						\
  } while (0)
#endif /* __m88000__ */

#if defined (__mips__)
#define umul_ppmm(w1, w0, u, v) \
  __asm__ ("multu %2,%3\n"	\
"	mflo %0\n"		\
"	mfhi %1"		\
	: "=r" ((unsigned long int)(w0)), "=r" ((unsigned long int)(w1))\
	: "r" ((unsigned long int)(u)), "r" ((unsigned long int)(v)))
#define UMUL_TIME 5
#define UDIV_TIME 100
#endif /* __mips__ */

#if defined (__ns32000__)
#define __umulsidi3(u, v) \
  ({long long int __w;							\
      __asm__ ("meid %2,%0" : "=g" (__w)				\
	: "%0" ((unsigned long int)(u)), "g" ((unsigned long int)(v)));	\
      __w; })
#define div_qrnnd(q, r, n1, n0, d) \
  __asm__ ("movd %2,r0\n"	\
"	movd %3,r1\n"	\
"	deid %4,r0\n"	\
"	movd r1,%0\n"	\
"	movd r0,%1"	\
	: "=g" ((unsigned long int)(q)), "=g" ((unsigned long int)(r))	\
	: "g" ((unsigned long int)(n0)), "g" ((unsigned long int)(n1)),	\
	  "g" ((unsigned long int)(d)) : "r0", "r1")
#endif /* __ns32000__ */

#if defined (__pyr__)
#define add_ssaaaa(sh, sl, ah, al, bh, bl) \
  __asm__ ("addw	%5,%1\n"	\
"	addwc	%3,%0"							\
	: "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl))\
	: "%0" ((unsigned long int)(ah)), "g" ((unsigned long int)(bh)),\
	  "%1" ((unsigned long int)(al)), "g" ((unsigned long int)(bl)))
#define sub_ddmmss(sh, sl, ah, al, bh, bl) \
  __asm__ ("subw	%5,%1\n"	\
"	subwb	%3,%0"							\
	: "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl))\
	: "0" ((unsigned long int)(ah)), "g" ((unsigned long int)(bh)),	\
	  "1" ((unsigned long int)(al)), "g" ((unsigned long int)(bl)))
/* This insn doesn't work on ancient pyramids.  */
#define umul_ppmm(w1, w0, u, v) \
  __asm__ ("movw %2,tr11\n"	\
"	uemul %3,tr10\n"	\
"	movw tr10,%0\n"		\
"	movw tr11,%1"							\
	: "=r" ((unsigned long int)(w1)), "=r" ((unsigned long int)(w0))\
	: "r" ((unsigned long int)(u)), "r" ((unsigned long int)(v))	\
	: "tr10", "tr11")
#endif /* __pyr__ */

#if defined (__ibm032__) /* RT/ROMP */
#define add_ssaaaa(sh, sl, ah, al, bh, bl) \
  __asm__ ("a %1,%5\n"	\
"	ae %0,%3"							\
	: "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl))\
	: "%0" ((unsigned long int)(ah)), "r" ((unsigned long int)(bh)),\
	  "%1" ((unsigned long int)(al)), "r" ((unsigned long int)(bl)))
#define sub_ddmmss(sh, sl, ah, al, bh, bl) \
  __asm__ ("s %1,%5\n"	\
"	se %0,%3"							\
	: "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl))\
	: "0" ((unsigned long int)(ah)), "r" ((unsigned long int)(bh)),	\
	  "1" ((unsigned long int)(al)), "r" ((unsigned long int)(bl)))
#define umul_ppmm(ph, pl, m0, m1) \
  do {									\
    unsigned long int __m0 = (m0), __m1 = (m1);				\
    __asm__ (								\
       "s	r2,r2\n"	\
"	mts	r10,%2\n"	\
"	m	r2,%3\n"	\
"	m	r2,%3\n"	\
"	m	r2,%3\n"	\
"	m	r2,%3\n"	\
"	m	r2,%3\n"	\
"	m	r2,%3\n"	\
"	m	r2,%3\n"	\
"	m	r2,%3\n"	\
"	m	r2,%3\n"	\
"	m	r2,%3\n"	\
"	m	r2,%3\n"	\
"	m	r2,%3\n"	\
"	m	r2,%3\n"	\
"	m	r2,%3\n"	\
"	m	r2,%3\n"	\
"	m	r2,%3\n"	\
"	cas	%0,r2,r0\n"	\
"	mfs	r10,%1"							\
       : "=r" ((unsigned long int)(ph)), "=r" ((unsigned long int)(pl))	\
       : "%r" (__m0), "r" (__m1)					\
       : "r2");								\
    (ph) += ((((signed long int) __m0 >> 31) & __m1)			\
	     + (((signed long int) __m1 >> 31) & __m0));		\
  } while (0)
#define count_leading_zeros(count, x) \
  do {									\
    if ((x) >= 0x10000)							\
      __asm__ ("clz	%0,%1"						\
	       : "=r" ((unsigned long int)(count))			\
	       : "r" ((unsigned long int)(x) >> 16));			\
    else								\
      {									\
	__asm__ ("clz	%0,%1"						\
		 : "=r" ((unsigned long int)(count))			\
		 : "r" ((unsigned long int)(x)));			\
	(count) += 16;							\
      }									\
  } while (0)
#endif

#if defined (__sparc__)
#define add_ssaaaa(sh, sl, ah, al, bh, bl) \
  __asm__ ("addcc %4,%5,%1\n"	\
"	addx %2,%3,%0"		\
	: "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl))\
	: "%r" ((unsigned long int)(ah)), "rI" ((unsigned long int)(bh)),\
	  "%r" ((unsigned long int)(al)), "rI" ((unsigned long int)(bl)))
#define sub_ddmmss(sh, sl, ah, al, bh, bl) \
  __asm__ ("subcc %4,%5,%1\n"	\
"	subx %2,%3,%0"		\
	: "=r" ((unsigned long int)(sh)), "=&r" ((unsigned long int)(sl))\
	: "r" ((unsigned long int)(ah)), "rI" ((unsigned long int)(bh)),\
	  "r" ((unsigned long int)(al)), "rI" ((unsigned long int)(bl)))
#if defined (__sparc8__)	/* How do we recog. version 8 SPARC?  */
#define umul_ppmm(w1, w0, u, v) \
  __asm__ ("umul %2,%3,%1;rd %%y,%0"					\
	: "=r" ((unsigned long int)(w1)), "=r" ((unsigned long int)(w0))\
	: "r" ((unsigned long int)(u)), "r" ((unsigned long int)(v)))
#define udiv_qrnnd(q, r, n1, n0, d) \
  __asm__ ("mov %2,%%y;nop;nop;nop;udiv %3,%4,%0;umul %0,%4,%1;sub %3,%1,%1"\
	: "=&r" ((unsigned long int)(q)), "=&r" ((unsigned long int)(r))\
	: "r" ((unsigned long int)(n1)), "r" ((unsigned long int)(n0)),	\
	  "r" ((unsigned long int)(d)))
#else
/* SPARC without integer multiplication and divide instructions.
   (i.e. at least Sun4/20,40,60,65,75,110,260,280,330,360,380,470,490) */
#define umul_ppmm(w1, w0, u, v) \
  __asm__ ("! Inlined umul_ppmm\n"	\
"	wr	%%g0,%2,%%y	! SPARC has 0-3 delay insn after a wr\n" \
"	sra	%3,31,%%g2	! Don't move this insn\n"	\
"	and	%2,%%g2,%%g2	! Don't move this insn\n"	\
"	andcc	%%g0,0,%%g1	! Don't move this insn\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,%3,%%g1\n"	\
"	mulscc	%%g1,0,%%g1\n"	\
"	add	%%g1,%%g2,%0\n"	\
"	rd	%%y,%1"							\
	: "=r" ((unsigned long int)(w1)), "=r" ((unsigned long int)(w0))\
	: "%rI" ((unsigned long int)(u)), "r" ((unsigned long int)(v))	\
       : "%g1", "%g2")
#define UMUL_TIME 39		/* 39 instructions */
/* It's quite necessary to add this much assembler for the sparc.
   The default udiv_qrnnd (in C) is more than 10 times slower!  */
#define udiv_qrnnd(q, r, n1, n0, d) \
  __asm__ ("! Inlined udiv_qrnnd\n"					\
"	mov	32,%%g1\n"						\
"	subcc	%1,%2,%%g0\n"						\
"1:	bcs	5f\n"							\
"	 addxcc %0,%0,%0	! shift n1n0 and a q-bit in lsb\n"	\
"	sub	%1,%2,%1	! this kills msb of n\n"		\
"	addx	%1,%1,%1	! so this can't give carry\n"		\
"	subcc	%%g1,1,%%g1\n"						\
"2:	bne	1b\n"							\
"	 subcc	%1,%2,%%g0\n"						\
"	bcs	3f\n"							\
"	 addxcc %0,%0,%0	! shift n1n0 and a q-bit in lsb\n"	\
"	b	3f\n"							\
"	 sub	%1,%2,%1	! this kills msb of n\n"		\
"4:	sub	%1,%2,%1\n"						\
"5:	addxcc	%1,%1,%1\n"						\
"	bcc	2b\n"							\
"	 subcc	%%g1,1,%%g1\n"						\
"! Got carry from n.  Subtract next step to cancel this carry.\n"	\
"	bne	4b\n"							\
"	 addcc	%0,%0,%0	! shift n1n0 and a 0-bit in lsb\n"	\
"	sub	%1,%2,%1\n"						\
"3:	xnor	%0,0,%0\n"						\
"	! End of inline udiv_qrnnd"					\
	: "=r&" ((unsigned long int)(q)), "=r&" ((unsigned long int)(r))\
	: "r" ((unsigned long int)(d)), "1" ((unsigned long int)(n1)),	\
	  "0" ((unsigned long int)(n0)) : "%g1")
#define UDIV_TIME (3+7*32)	/* 7 instructions/iteration. 32 iterations. */
#endif
#endif /* __sparc8__ */

#if defined (__vax__)
#define add_ssaaaa(sh, sl, ah, al, bh, bl) \
  __asm__ ("addl2 %5,%1\n"	\
"	adwc %3,%0"							\
	: "=g" ((unsigned long int)(sh)), "=&g" ((unsigned long int)(sl))\
	: "%0" ((unsigned long int)(ah)), "g" ((unsigned long int)(bh)),\
	  "%1" ((unsigned long int)(al)), "g" ((unsigned long int)(bl)))
#define sub_ddmmss(sh, sl, ah, al, bh, bl) \
  __asm__ ("subl2 %5,%1\n"	\
"	sbwc %3,%0"							\
	: "=g" ((unsigned long int)(sh)), "=&g" ((unsigned long int)(sl))\
	: "0" ((unsigned long int)(ah)), "g" ((unsigned long int)(bh)),	\
	  "1" ((unsigned long int)(al)), "g" ((unsigned long int)(bl)))
#define umul_ppmm(xh, xl, m0, m1) \
  do {									\
    union {long long int ll;struct {unsigned long int l, h;} i;} __xx;	\
    unsigned long int __m0 = (m0), __m1 = (m1);				\
    __asm__ ("emul %1,%2,$0,%0"						\
	 : "=r" (__xx.ll) : "g" (__m0), "g" (__m1));			\
    (xh) = __xx.i.h; (xl) = __xx.i.l;					\
    (xh) += ((((signed long int) __m0 >> 31) & __m1)			\
	     + (((signed long int) __m1 >> 31) & __m0));		\
  } while (0)
#endif /* __vax__ */
