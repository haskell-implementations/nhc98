#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hFlushC_35	((void*)startLabel+8)
#define CT_v223	((void*)startLabel+24)
#define F0_IO_46hFlushC_35	((void*)startLabel+32)
#define FN_IO_46hFlushC	((void*)startLabel+44)
#define CT_v224	((void*)startLabel+56)
#define CF_IO_46hFlushC	((void*)startLabel+64)
#define CT_v225	((void*)startLabel+108)
#define FN_LAMBDA221	((void*)startLabel+148)
#define v226	((void*)startLabel+167)
#define CT_v228	((void*)startLabel+188)
#define F0_LAMBDA221	((void*)startLabel+196)
#define FN_LAMBDA220	((void*)startLabel+228)
#define CT_v229	((void*)startLabel+260)
#define F0_LAMBDA220	((void*)startLabel+268)
#define FN_LAMBDA219	((void*)startLabel+288)
#define CT_v231	((void*)startLabel+308)
#define CF_LAMBDA219	((void*)startLabel+316)
#define ST_v230	((void*)startLabel+320)
void FR_IO_46hFlushC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v223)
,	/* FN_IO_46hFlushC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46hFlushC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v223: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46hFlushC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hFlushC_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v224)
,	/* FN_IO_46hFlushC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v224: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46hFlushC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46hFlushC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_IO_46hFlushC_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v225)
,};
Node FN_IO_46hFlush[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v225: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_IO_46hFlush[] = {
  CAPTAG(useLabel(FN_IO_46hFlush),1)
, VAPTAG(useLabel(FN_IO_46hFlushC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA221),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v228)
,	/* FN_LAMBDA221: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,NE_W,JUMPFALSE)
, bytes2word(11,0,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
,	/* v226: (byte 3) */
  bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v228: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA221: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA221),2)
, CAPTAG(useLabel(FN_LAMBDA220),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v229)
,	/* FN_LAMBDA220: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
,	/* CT_v229: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA220: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA220),2)
, VAPTAG(useLabel(FN_LAMBDA219))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v231)
,	/* FN_LAMBDA219: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v230)
,	/* CT_v231: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA219: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA219))
,	/* ST_v230: (byte 0) */
  bytes2word(104,70,108,117)
, bytes2word(115,104,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hFlushC" IO.hFlushC# 1 :: FFI.ForeignObj -> Prelude.Int */
extern HsInt hFlushC(void*);
#ifdef PROFILE
static SInfo pf_IO_46hFlushC_35 = {"IO","IO.hFlushC#","Prelude.Int"};
#endif
C_HEADER(FR_IO_46hFlushC_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hFlushC(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_IO_46hFlushC_35);
  C_RETURN(nodeptr);
}
