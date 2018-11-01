
/* node.h */

#ifndef _NODE_H
#define _NODE_H

#include "runtime.h"
#include "newmacros.h"

/*

              -------------
      INDIR   | *node   00|
              -------------

              ---------------------------
      VAP/CAP | info    x1| args ...    |
              ---------------------------

              ---------------------------
      CONSTR  | conInfo 10| args ...    |
              ---------------------------


             | arity |     0 |     It's a VAP node if info[0] == 0
             |  ...  |  ...  |
      info   |  need |  size |
             |  ...  |  ...  |
             |     0 | arity |
             |        constptr         |
             | code
             | ....

               | ...
               | CONSTR/WCONSTR/I32/FLOAT/STRING etc
               | *function name       This line only if profiling
      constptr | size << 16 | arity:16
               | link field
               | CAF_fun              This line only if arity == 0
               | CAF/VAP/CAP etc
               | ...


      coninfo | size:8,  psize:8,  number:12, 00:2,  tag:2             Must be same as in (new)macros.h
                         size   = Size of node
                         psize  = Number of pointers
                         number = Constructor number


      coninfo | size:LARGE_SIZE,  xx:LARGE_EXTRA  01:2,  tag:2             Must be same as in (new)macros.h
                         size   = Size of node, all words are pointers

      coninfo | size:LARGE_SIZE,  xx:LARGE_EXTRA  11:2,  tag:2             Must be same as in (new)macros.h
                         size   = Size of node, all words are integers


      cinfo  | need, size ,words ,0
                          need  = Number of argument needed (>0)
                          size  = Number of arguments availible
                          words = Number of arguments that aren't pointers
             | *fInfo

*/

#define ABS(a) ((a)<0?-(a):a)

#define EXT_LARGETAG(x)          ( (MASK_CON|MASK_WTAG) & (UInt)(x))
#define GET_LARGETAG(p)          EXT_LARGETAG(*(p))
#define EXT_TAG(x)               ( MASK_WTAG & (UInt)(x))
#define GET_TAG(p)               EXT_TAG(*(p))

#define ZAPPED(p)       (ZAP_BIT & (UInt)*(p))
#define ZAP(p)          (*(UInt*)(p) |= ZAP_BIT )
#define EXT_WADDRESS(x) ((NodePtr)(~MASK_WTAG & ~ZAP_BIT & (UInt)(x)))
#define EXT_HADDRESS(x) ((NodePtr)(~MASK_HTAG & ~ZAP_BIT & (UInt)(x)))

#define EXT_IND_ADDRESS(x) EXT_WADDRESS(x)
#define GET_IND_ADDRESS(p) EXT_IND_ADDRESS(*(p))

#define BUILD_IND(p)  ((Node) (IND_TAG | (UInt)(p)))

#define GET_HOLE_INFO    ((Node) (CON_TAG | (UInt)&cinfo_Dummy_hole))

#define EXT_FINFO(p)    (Finfo)EXT_HADDRESS(p)
#define GET_FINFO(p)    EXT_FINFO(*(p))

#ifdef TPROF
#define FINFO_ENTERPTR(p) (NS+2+(CodePtr)p)	/*PH*/
#define FINFO_CODE(p)     (NS+NS+2+(CodePtr)p)	/*PH*/
#else
/*#define FINFO_NATIVECODE(p)   (NS+2+(CodePtr)p)	   DAVID */
#define FINFO_CODE(p)   (NS/*+NS*/+2+(CodePtr)p)	/* DAVID */
#endif

#define FINFO_ARITY(p)  (((UChar *)(p))[1])
#define FINFO_CAF(p)    (FINFO_CONST(p)[2])
#define FINFO_CONST(p)  (*((NodePtr **)(2+(CodePtr)p)))
#define VAP_CONST(p)    FINFO_CONST(GET_FINFO(p))
#define VAP_CODE(p)     FINFO_CODE(GET_FINFO(p))


#define EXT_CINFO(p)    EXT_FINFO(p)
#define GET_CINFO(p)    EXT_CINFO(*(p))
#define CINFO_NEED(p)   (((UChar *)(p))[0])
#define CINFO_SIZE(p)   (((UChar *)(p))[1])
#define CINFO_FINFO(p)  ((Finfo)((UInt)p+(UInt)2*CINFO_NEED(p)))
#define CINFO_CODE(p)   FINFO_CODE(CINFO_FINFO(p))

#define EXT_CONINFO(p)    (Coninfo)(~MASK_WTAG & (UInt)p)
#define GET_CONINFO(p)    EXT_CONINFO(*(p))
#define CONINFO_SIZE(p)   (((p)>>24)&0xff)
#define CONINFO_PSIZE(p)  (((p)>>16)&0xff)
#define CONINFO_NUMBER(p) (((p)>>4)&0xfff)
#define CONINFO_LARGESIZES(p) (((Int)p)>>(4+LARGE_EXTRA))
#define CONINFO_LARGESIZEU(p) (ABS(((Int)p)>>(4+LARGE_EXTRA)))
#define CONINFO_LARGEEXTRA(p) (((p)>>4)&((1<<LARGE_EXTRA)-1))

#define GET_POINTER_ARG1(p,i) (NodePtr)((p)[HEAPOFFSET(EXTRA+(i))])
#define GET_VALUE_ARG1(p,i)   (Node)((p)[HEAPOFFSET(EXTRA+(i))])

#define GET_APPLY_FUN(p)     GET_POINTER_ARG1(p,1)
#define GET_APPLY_ARG(p)     GET_POINTER_ARG1(p,2)

#define GET_INT_ARG1(p,i)     (Int)((p)[HEAPOFFSET(EXTRA+(i))])
#define GET_INT_VALUE(p)     GET_INT_ARG1(p,1)

#define GET_CONSTR(p)        CONINFO_NUMBER(GET_CONINFO(p))
#define GET_CHAR_VALUE(p)    (char)GET_INT_VALUE(p)
#define GET_8BIT_VALUE(p)    (unsigned char)GET_INT_VALUE(p)
#define GET_16BIT_VALUE(p)   (unsigned short)GET_INT_VALUE(p)
#define GET_32BIT_VALUE(p)   (unsigned long)GET_INT_VALUE(p)

#define GET_BOOL_VALUE(p)    CONINFO_NUMBER(GET_CONINFO(p))

#endif
