#include "newmacros.h"
#include "runtime.h"

#define CT_v213	((void*)startLabel+48)
#define FN_Prelude_46Prelude_46162_46mcons	((void*)startLabel+88)
#define CT_v214	((void*)startLabel+116)
#define F0_Prelude_46Prelude_46162_46mcons	((void*)startLabel+124)
#define FN_LAMBDA208	((void*)startLabel+148)
#define CT_v215	((void*)startLabel+176)
#define F0_LAMBDA208	((void*)startLabel+184)
#define FN_LAMBDA207	((void*)startLabel+208)
#define CT_v216	((void*)startLabel+244)
#define F0_LAMBDA207	((void*)startLabel+252)
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46return[];
extern Node FN_Prelude_46foldr[];
extern Node FN_Prelude_46_62_62_61[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v213)
,};
Node FN_Prelude_46sequence[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,4,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v213: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46sequence[] = {
  CAPTAG(useLabel(FN_Prelude_46sequence),1)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46162_46mcons),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46return))
, CAPTAG(useLabel(FN_Prelude_46foldr),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v214)
,	/* FN_Prelude_46Prelude_46162_46mcons: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(3,1,PUSH_P1,0)
, bytes2word(PUSH_ARG_I2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v214: (byte 0) */
  HW(2,3)
, 0
,	/* F0_Prelude_46Prelude_46162_46mcons: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46162_46mcons),3)
, CAPTAG(useLabel(FN_LAMBDA208),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v215)
,	/* FN_LAMBDA208: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_P1,0)
, bytes2word(PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v215: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA208: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA208),3)
, CAPTAG(useLabel(FN_LAMBDA207),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v216)
,	/* FN_LAMBDA207: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,2,3,PUSH_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v216: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA207: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA207),3)
, VAPTAG(useLabel(FN_Prelude_46return))
,};
