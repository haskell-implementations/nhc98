#include "newmacros.h"
#include "runtime.h"

#define CT_v214	((void*)startLabel+24)
#define FN_LAMBDA208	((void*)startLabel+56)
#define CT_v215	((void*)startLabel+92)
#define F0_LAMBDA208	((void*)startLabel+100)
#define FN_LAMBDA207	((void*)startLabel+128)
#define CT_v216	((void*)startLabel+164)
#define F0_LAMBDA207	((void*)startLabel+172)
#define FN_LAMBDA206	((void*)startLabel+200)
#define CT_v217	((void*)startLabel+236)
#define F0_LAMBDA206	((void*)startLabel+244)
#define FN_LAMBDA205	((void*)startLabel+272)
#define CT_v218	((void*)startLabel+308)
#define F0_LAMBDA205	((void*)startLabel+316)
extern Node FN_Prelude_46_62_62_61[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46return[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v214)
,};
Node FN_Monad_46liftM3[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v214: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Monad_46liftM3[] = {
  CAPTAG(useLabel(FN_Monad_46liftM3),2)
, CAPTAG(useLabel(FN_LAMBDA208),3)
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v215)
,	/* FN_LAMBDA208: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(4,5,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_P1,0,PUSH_ARG_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG)
, bytes2word(4,ZAP_ARG,5,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v215: (byte 0) */
  HW(2,5)
, 0
,	/* F0_LAMBDA208: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA208),5)
, CAPTAG(useLabel(FN_LAMBDA207),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v216)
,	/* FN_LAMBDA207: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_ARG_ARG,5)
, bytes2word(4,PUSH_P1,0,PUSH_ARG_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG)
, bytes2word(4,ZAP_ARG,5,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v216: (byte 0) */
  HW(2,5)
, 0
,	/* F0_LAMBDA207: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA207),5)
, CAPTAG(useLabel(FN_LAMBDA206),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v217)
,	/* FN_LAMBDA206: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_ARG_ARG,5)
, bytes2word(4,PUSH_P1,0,PUSH_ARG_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG)
, bytes2word(4,ZAP_ARG,5,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v217: (byte 0) */
  HW(2,5)
, 0
,	/* F0_LAMBDA206: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA206),5)
, CAPTAG(useLabel(FN_LAMBDA205),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v218)
,	/* FN_LAMBDA205: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(4,2,HEAP_ARG_ARG,3)
, bytes2word(5,PUSH_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG,4)
, bytes2word(ZAP_ARG,5,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v218: (byte 0) */
  HW(2,5)
, 0
,	/* F0_LAMBDA205: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA205),5)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, VAPTAG(useLabel(FN_Prelude_46return))
,};
