#include "newmacros.h"
#include "runtime.h"

#define CT_v202	((void*)startLabel+24)
#define FN_LAMBDA197	((void*)startLabel+56)
#define CT_v203	((void*)startLabel+88)
#define F0_LAMBDA197	((void*)startLabel+96)
#define FN_LAMBDA196	((void*)startLabel+124)
#define CT_v204	((void*)startLabel+156)
#define F0_LAMBDA196	((void*)startLabel+164)
#define FN_LAMBDA195	((void*)startLabel+192)
#define CT_v205	((void*)startLabel+224)
#define F0_LAMBDA195	((void*)startLabel+232)
extern Node FN_Prelude_46_62_62_61[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46return[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v202)
,};
Node FN_Monad_46liftM2[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v202: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Monad_46liftM2[] = {
  CAPTAG(useLabel(FN_Monad_46liftM2),2)
, CAPTAG(useLabel(FN_LAMBDA197),2)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v203)
,	/* FN_LAMBDA197: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(4,1,HEAP_ARG,2)
, bytes2word(PUSH_P1,0,PUSH_ARG_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v203: (byte 0) */
  HW(2,4)
, 0
,	/* F0_LAMBDA197: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA197),4)
, CAPTAG(useLabel(FN_LAMBDA196),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v204)
,	/* FN_LAMBDA196: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,4,HEAP_ARG,3)
, bytes2word(PUSH_P1,0,PUSH_ARG_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v204: (byte 0) */
  HW(2,4)
, 0
,	/* F0_LAMBDA196: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA196),4)
, CAPTAG(useLabel(FN_LAMBDA195),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v205)
,	/* FN_LAMBDA195: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(3,2,HEAP_ARG,4)
, bytes2word(PUSH_P1,0,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_ARG,4,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v205: (byte 0) */
  HW(2,4)
, 0
,	/* F0_LAMBDA195: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA195),4)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46return))
,};
