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

#define CONSTR(c,s,ws)  ( ((s)<<24) | (((s)-(ws))<<16) | ((c)<<4) | CON_DATA | CON_TAG)
#define CONSTRC(c,s,ws)  ( ((s)<<24) | (((s)-(ws))<<16) | ((c)<<4) | CON_CDATA | CON_TAG)
#define CONSTRW(s,e)  ( ((s)<<(4+LARGE_EXTRA)) | (((e)&((1<<LARGE_EXTRA)-1))<<4) | CON_WORDS | CON_TAG)
#define CONSTRP(s,e)  ( ((s)<<(4+LARGE_EXTRA)) | (((e)&((1<<LARGE_EXTRA)-1))<<4) | CON_PTRS | CON_TAG)

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

#ifdef __arm

#define CPU_KNOWN "arm"
#define LOW_BYTE_FIRST

#ifdef  STARTBYTECODE
   area byteCode,DATA
#endif

#define DB         dcb
#define DW         dcd
#define DD(x)      dcfd x
#define DF(x)      dcfs x
#define DS         dcb
#define AL         align
#define AL_D       align
#define EX         export
#define L(a)       a
#define DL(a)      a##:
#define WORDSHIFT  5

#define DIR_DEL '.'
#endif

#ifdef __sparc__

#define CPU_KNOWN "sparc"
/* #define HIGH_BYTE_FIRST */

#ifdef __svr4__
#ifdef STARTBYTECODE
   .section	".data",#alloc,#write
#endif
#define L(a)       a
#define DL(a)      a##:
#else
#ifdef STARTBYTECODE
   .data
#endif
#define L(a)       _##a
#define DL(a)      _##a##:
#endif

#define DB         .byte
#define DW         .word
#define DD(x)      .double 0r##x
#define DF(x)      .single 0r##x
#define DS         .ascii
#define AL         .align 4
#define AL_D       .align 8
#define EX         .global
#define WORDSHIFT  5

#endif


#ifdef __i386__

#undef HIGH_BYTE_FIRST

#define CPU_KNOWN "x86"
/* #define LOW_BYTE_FIRST */

#ifdef STARTBYTECODE
   .data
#endif

#define DB         .byte
#define DW         .long
#define DD(x)      .double 0d##x
#define DF(x)      .float 0d##x
#define DS         .ascii
#if defined(__linux) || defined(__CYGWIN32__) || defined(__MINGW32__)
#define AL         .align 4
#define AL_D       .align 8
#define EX         .globl
#else
#define AL         .align 2
#define AL_D       .align 3
#define EX         .globl
#endif
#ifdef __linux
#define L(a)       a
#define DL(a)      a##:
#else
#define L(a)       _##a
#define DL(a)      _##a##:
#endif
 
#define WORDSHIFT  5

#endif

#ifdef __hppa__

#define CPU_KNOWN "hppa"
/* #define HIGH_BYTE_FIRST */

#ifdef STARTBYTECODE
   .data
   .align 2
#endif

#define DB         .byte
#define DW         .long
#define DD(x)      .double x
#define DF(x)      .single x
#define DS         .ascii
#define AL         .align 2
#define AL_D       .align 3
#define EX         .globl
#define L(a)       _##a
#define DL(a)      _##a##:
#define WORDSHIFT  5

#endif

#ifdef __mc68000

#define CPU_KNOWN "68000 (Unix)"
/* #define HIGH_BYTE_FIRST */


#ifdef STARTBYTECODE
   .data
#endif

#define DB         .byte
#define DW         .word
#define DD(x)      .double x
#define DF(x)      .float x
#define DS         .ascii
#define AL         .align 4
#define AL_D       .align 8
#define EX         .global
#define L(a)       _##a
#define DL(a)      _##a##:
#define WORDSHIFT  5

#endif

#ifdef __mips

#define CPU_KNOWN "mips"

#ifdef __sgi
/* #define HIGH_BYTE_FIRST */
#else
/* #define LOW_BYTE_FIRST */
#endif

#ifdef STARTBYTECODE
   .data
#endif

#define DB         .byte
#define DW         .word
#define DD(x)      .double x
#define DF(x)      .float x
#define DS         .ascii
#define AL         .align 2
#define AL_D       .align 3
#define EX         .globl
#define L(a)       a
#define DL(a)      a:
#define WORDSHIFT  5

#endif

#ifdef __alpha

#define CPU_KNOWN "alpha"
/* #define LOW_BYTE_FIRST */

#ifdef STARTBYTECODE
  .data
#endif

#define DB      .byte
#define DW      .quad
#define DF(x)   .s_floating x
#define DD(x)   .t_floating x
#define DS      .ascii
#define AL      .align 3
#define AL_D    .align 3
#define FILL4toWORD 0,0,0,0,
#define EX      .globl
#define L(a)    a
#define DL(a)   a##:
#define WORDSHIFT  6

#define LARGE_EXTRA 3
#define LARGE_SIZE 57


#endif

#ifndef  CPU_KNOWN

Mips can not handle #error directives!
/* #error "Unknown cpu!" */

#endif

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
#define JT(h)            DB (((h)>>8)&0xff),((h)&0xff)
#define HW(b,a)          ((a) | ((b) << (4*NS)))
#define FSTHW(w)         ((w)>>(4*NS))
#define SNDHW(w)         ((w)&( (1<<(4*NS))-1))
#endif

#ifdef LOW_BYTE_FIRST
#define JT(h)            DB ((h)&0xff),(((h)>>8)&0xff)
#define HW(b,a)          ((b) | ((a) << (4*NS)))
#define FSTHW(w)         ((w)&( (1<<(4*NS))-1))
#define SNDHW(w)         ((w)>>(4*NS))
#endif

#define VAPTAG(fun)       L(fun) - (NS + 2) + VAP_TAG 
#define CAPTAG(fun,need)  L(fun) - (NS + 2 + (2 * need)) + VAP_TAG

#define C_VAPTAG(fun)       fun - (NS + 2) + VAP_TAG 
#define C_CAPTAG(fun,need)  fun - (NS + 2 + (2 * need)) + VAP_TAG


#ifndef DIR_DEL
#define DIR_DEL '/'
#endif
#endif

