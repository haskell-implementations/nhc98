#ifndef _MACROS_H
#define _MACROS_H
 
#ifdef __arm
#define NEW_CPP
#endif
 
#ifdef __ANSI__
#define NEW_CPP
#endif
 
#ifdef __STRICT_ANSI__
#define NEW_CPP
#endif
 
#ifdef __GNUC__
#define NEW_CPP
#endif
 
#ifdef __STDC__
#define NEW_CPP
#endif

#undef STARTBYTECODE
#include "bytecode.h"

#if defined(LOW_BYTE_FIRST) && defined(HIGH_BYTE_FIRST)
#error "Can't do -bigEnd and -littleEnd together!"
#endif

#if !defined(LOW_BYTE_FIRST) && !defined(HIGH_BYTE_FIRST)
#if defined(__sparc__) || defined(__hppa__) || defined(__mc68000) || \
    defined(__sgi) || defined(__alpha) || defined(__PPC__) || defined(_POWER)
#define HIGH_BYTE_FIRST
#elif defined(__arm) || defined(__i386__) || defined(__mips)
#define LOW_BYTE_FIRST
#else
#error "Can't find default endian-ness for this machine."
#endif
#endif

#define IND_TAG 0
 
#define VAP_TAG  1
#define VAP_TAG0 1
#define VAP_TAG1 3
 
#define CON_TAG 2
 
#define MASK_WTAG 3
#define MASK_HTAG 1
 
#define CON_DATA  0x00   /* Must NOT contain CON_PTRS */
#define CON_PTRS  0x04   /* Must     contain CON_PTRS */
#define CON_CDATA 0x08   /* Must NOT contain CON_PTRS */
#define CON_WORDS 0x0c   /* Must     contain CON_PTRS */
 
#define MASK_CON  0x0c
 
/* Must be same as in node.h and nhccomp/Lift.hs */
 
#define CONSTR(c,s,ws)   ( ((s)<<24) | (((s)-(ws))<<16) | ((c)<<4) | CON_DATA | CON_TAG)
#define CONSTRC(c,s,ws)  ( ((s)<<24) | (((s)-(ws))<<16) | ((c)<<4) | CON_CDATA | CON_TAG)
#define CONSTRW(s,e)   ( ((s)<<(4+LARGE_EXTRA)) | (((e)&((1<<LARGE_EXTRA)-1))<<4) | CON_WORDS | CON_TAG)
#define CONSTRP(s,e)   ( ((s)<<(4+LARGE_EXTRA)) | (((e)&((1<<LARGE_EXTRA)-1))<<4) | CON_PTRS | CON_TAG)

/* DB         Define Byte            */
/* DW         Define Word   == Nodes */
/* DD(x)      Define Double          */
/* DF(x)      Define Float           */
/* DS         Define String          */
/* AL         Align to nodesize      */
/* AL_D       Align to doublesize    */
/* EX         EXport                 */
/* L(a)       use Label              */
/* DL(a)      Define Label           */
/* WORDSHIFT  log2 of WORDSIZE       */
/* WORDSIZE   NodeSize in bits       (derived from WORDSHIFT) */
/* WORDMASK   a mask for the WORDSHIFT lowes bits (derived from WORDSHIFT) */
/* NS         NodeSize in bytes      (derived from WORDSIZE)  */
/* ZAP_BIT    Highest bit, used to ZAP nodes */

#define WORDSHIFT  5
 
#define WORDSIZE   (1<<WORDSHIFT)
#define WORDMASK   (WORDSIZE-1)
#define NS         (WORDSIZE>>3)
#define ZAP_BIT    (1L<<(WORDSIZE-1))
 
#ifndef FILL4toWORD
#define FILL4toWORD
#endif
 
#ifndef LARGE_EXTRA
#define LARGE_EXTRA 2
#define LARGE_SIZE 26
#endif

 
#ifdef HIGH_BYTE_FIRST
#define TOP(h)		(((h)>>8)&0xff)
#define BOT(h)		((h)&0xff)
#define HW(b,a)          ((a) | ((b) << (4*NS)))
#define FSTHW(w)         ((w)>>(4*NS))
#define SNDHW(w)         ((w)&( (1<<(4*NS))-1))
#define bytes2word(a,b,c,d)	(unsigned)(((a&0xff)<<24) + \
					   ((b&0xff)<<16) + \
					   ((c&0xff)<<8)  + \
					    (d&0xff))
#endif
 
#ifdef LOW_BYTE_FIRST
#define TOP(h)		((h)&0xff)
#define BOT(h)		(((h)>>8)&0xff)
#define HW(b,a)          ((b) | ((a) << (4*NS)))
#define FSTHW(w)         ((w)&( (1<<(4*NS))-1))
#define SNDHW(w)         ((w)>>(4*NS))
#define bytes2word(a,b,c,d)	(unsigned)(((d&0xff)<<24) + \
					   ((c&0xff)<<16) + \
					   ((b&0xff)<<8)  + \
					    (a&0xff))
#endif

#define VAPTAG(fun)       useLabel(fun) - (NS + 2) + VAP_TAG
#define CAPTAG(fun,need)  useLabel(fun) - (NS + 2 + (2 * need)) + VAP_TAG
 
#define C_VAPTAG(fun)       fun - (NS + 2) + VAP_TAG
#define C_CAPTAG(fun,need)  fun - (NS + 2 + (2 * need)) + VAP_TAG
 
#define useLabel(name)		((unsigned)name)

 
#ifndef DIR_DEL
#define DIR_DEL '/'
#endif
#endif

