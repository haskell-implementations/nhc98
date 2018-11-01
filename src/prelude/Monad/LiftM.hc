#include "newmacros.h"
#include "runtime.h"

#define CT_v190	((void*)startLabel+24)
#define FN_LAMBDA186	((void*)startLabel+52)
#define CT_v191	((void*)startLabel+80)
#define F0_LAMBDA186	((void*)startLabel+88)
#define FN_LAMBDA185	((void*)startLabel+112)
#define CT_v192	((void*)startLabel+140)
#define F0_LAMBDA185	((void*)startLabel+148)
extern Node FN_Prelude_46_62_62_61[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46return[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v190)
,};
Node FN_Monad_46liftM[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v190: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Monad_46liftM[] = {
  CAPTAG(useLabel(FN_Monad_46liftM),2)
, CAPTAG(useLabel(FN_LAMBDA186),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v191)
,	/* FN_LAMBDA186: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_P1,0)
, bytes2word(PUSH_ARG_I3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v191: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA186: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA186),3)
, CAPTAG(useLabel(FN_LAMBDA185),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v192)
,	/* FN_LAMBDA185: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v192: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA185: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA185),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46return))
,};
