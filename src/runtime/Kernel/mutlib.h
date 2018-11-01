#ifndef _MUTLIB_H
#define _MUTLIB_H

#include "runtime.h"

extern Node ints[];
extern Node chars[];

#define MK_CDATA1(r,i)   (r)[0] =(Node)CONSTRC(0,1,1) ; (r)[1+EXTRA] = (Node)(i)
#define MK_ENUM(r,i)     (r)[0] =(Node)CONSTR(i,0,0)
#define MK_INT(r,i)      (r)[0] = CONSTR_INT; (r)[1+EXTRA] = (Node)(i)
#define GET_INT(c)       (NodePtr)&ints[TABLE_SIZE_INT*(HEAPOFFSET(c)+10)]
#define GET_CHAR(c)      (NodePtr)&chars[TABLE_SIZE_INT*(HEAPOFFSET(c)+1)]
#define GET_BOOL(b)      (b?(NodePtr)CON_TRUE:(NodePtr)CON_FALSE)
#define MK_VAP1(r,f,a)   (r)[0] = ((UInt)f) | VAP_TAG; (r)[1+EXTRA] = (a)
#define MK_VAP2(r,f,a1,a2) (r)[0] = ((UInt)f) | VAP_TAG; (r)[1+EXTRA] = (a1); (r)[2+EXTRA] = (a2)
#define MK_CONS(r,f,a)   (r)[0] = CONSTR_CONS; (r)[1+EXTRA] = (f); (r)[2+EXTRA] = (a)
#define GET_NIL()        (NodePtr)CON_NIL
#define GET_ZAPSTK()     &CON0_Prelude___ZapStk
#define GET_ZAPARG()     &CON0_Prelude___ZapArg



#define CONSTR_CONS   ((Node)CONSTR(1,2,0))
#define CONSTR_INT    ((Node)CONSTRW(1,0))
#define CONSTR_FLOAT  CONSTR_INT
#define CONSTR_DOUBLE ((Node)CONSTRW(2,0))

#define MASKPTR (sizeof(void *)-1)
#define ALIGNPTR(x) ((MASKPTR+(Int)(x)) & ~MASKPTR)
#define ALIGNPTR2(x) ((1+(Int)(x)) & ~1)
#define ALIGNPTR4(x) ((3+(Int)(x)) & ~3)

#define HEAP_ALLOC(r,i) r=hp;hp+=i

#define PUSH_STATE *--sp = (NodePtr)fp; *--sp=(NodePtr)ip;fp=sp;
#define POP_STATEVP \
 sp=fp;ip=(CodePtr)*sp++;fp=(NodePtr*)*sp++; *sp=vapptr;vapptr=fp[2];IND_REMOVE(vapptr);constptr=VAP_CONST(vapptr);
#define POP_STATE(d) \
 sp+=d;ip=(CodePtr)*sp++;fp=(NodePtr*)*sp++;vapptr=fp[2];IND_REMOVE(vapptr);constptr=VAP_CONST(vapptr);

#define UPDATE_VAP(p) SAVE_PROFINFO(vapptr);FILL_AT(SIZE_IND,vapptr); *vapptr= BUILD_IND(p);vapptr= p

extern int pendingIdx;		/* deferred finalisers */
extern int excludeFinalisers;	/* lock for atomic access to shared state */

#define FORCE_GC(c)		\
 PUSH_STATE;			\
 hp = callGc((c),hp,sp,fp);	\
 POP_STATE(0);			\
 if (pendingIdx && !excludeFinalisers) {		\
   Sp=sp; Fp=fp; Ip=ip; Hp=hp;	\
   runDeferredGCs();		\
   sp=Sp; fp=Fp; ip=Ip; hp=Hp;	\
 }



#define BUFFER 100


#if defined(PROFILE) || defined(TPROF)
#define HEAP_CHECK_VAP(c) /* FORCE_GC(0) OC*/ ; if((hp+(c)+BUFFER>(NodePtr)sp)||(hp+(c)+BUFFER>profileHpLimit)){FORCE_GC(c);}
#define HEAP_CHECK_VAP_STMT(c,stmt) if((hp+(c)+BUFFER>(NodePtr)sp)||(hp+(c)+BUFFER>profileHpLimit)){FORCE_GC(c);stmt}
#define HEAP_CHECK_VAP_STMT2(c,stmt1,stmt2) if((hp+(c)+BUFFER>(NodePtr)sp)||(hp+(c)+BUFFER>profileHpLimit)){stmt1 FORCE_GC(c);stmt2}
#else
#define HEAP_CHECK_VAP(c) if(hp+(c)+BUFFER>(NodePtr)sp){FORCE_GC(c);}
#define HEAP_CHECK_VAP_STMT(c,stmt) if(hp+(c)+BUFFER>(NodePtr)sp){FORCE_GC(c);stmt}
#define HEAP_CHECK_VAP_STMT2(c,stmt1,stmt2) if(hp+(c)+BUFFER>(NodePtr)sp){stmt1 FORCE_GC(c);stmt2}
#endif



void mk_float(NodePtr p,float f);
float get_float_value(NodePtr p);
void mk_double(NodePtr p,double f);
double get_double_value(NodePtr p);

#endif
