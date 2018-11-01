#ifndef _CINTERFACE_H
#define _CINTERFACE_H

#include "node.h"
/*#include "runtime.h"   -- already included in node.h */
/*#include "newmacros.h" -- already included in node.h */
#include "mutlib.h"

/*
   Very primitive interface to C.  The C-function is called with four
   arguments:
       a status int, 0 first time;
       a pointer to the redex (always a VAP - node);
       a pointer to the heap pointer;
       a pointer to the stack pointer.

   If the function returns non-zero, then it will be called again,
   after a garbage collection has been performed. The return value
   will be used in the status int.

   The function must push one value on the stack, and correctly update
   both the heap and the stack pointers, before returning.
*/

typedef void (*Primitive)(NodePtr);

#define C_HEADER(fun)  void fun(void)

#define _ivapptr   (Fp[2])

#define CALL_C(fun) \
    Hp = hp; Sp = sp; Fp = fp; Ip = ip; \
    (*fun)(vapptr); \
    hp = Hp; sp = Sp; fp = Fp; ip = Ip; vapptr = fp[2];

#define C_GETARG1(n)   (NodePtr)_ivapptr[n+EXTRA]

#define C_ZAPARG1(n)   _ivapptr[EXTRA + n] = (Node)ZAP_ARG_NODE

#define C_RETURN(x)    *--Sp = (x); return

#define C_ALLOC(n)     Hp; Hp += n

#define C_HP           Hp

#define C_ADDHP(n)     Hp += n

#define C_EVALTOS(x)   run(x);

#define C_PUSH(n)      *--Sp = (n)
#define C_POP()       (*Sp++)

#if defined(PROFILE) || defined(TPROF)
#define C_CHECK(c)   if((Hp+(c)+BUFFER>(NodePtr)Sp)||(Hp+(c)+BUFFER>profileHpLimit)){C_GC(c);} 
#define C_CHECK_STMT(c,stmt)   if((Hp+(c)+BUFFER>(NodePtr)Sp)||(Hp+(c)+BUFFER>profileHpLimit)){C_GC(c);stmt} 
#else
#define C_CHECK(c)   if(Hp+(c)+BUFFER>(NodePtr)Sp){C_GC(c);}
#define C_CHECK_STMT(c,stmt)   if(Hp+(c)+BUFFER>(NodePtr)Sp){C_GC(c);stmt}
#endif

#define C_GC(c) \
     *--Sp = (NodePtr)Fp; *--Sp=(NodePtr)C_CODE;Fp=Sp; \
     Hp = callGc((c),Hp,Sp,Fp);     \
     Sp++;Fp=(NodePtr*)*Sp++;IND_REMOVE(_ivapptr);

#endif

extern NodePtr evalExport(NodePtr arg);
