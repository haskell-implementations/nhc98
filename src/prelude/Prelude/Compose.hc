#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+24)
#define FN_LAMBDA176	((void*)startLabel+52)
#define CT_v180	((void*)startLabel+76)
#define F0_LAMBDA176	((void*)startLabel+84)
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v179)
,};
Node FN_Prelude_46_46[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v179: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46_46[] = {
  CAPTAG(useLabel(FN_Prelude_46_46),2)
, CAPTAG(useLabel(FN_LAMBDA176),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v180)
,	/* FN_LAMBDA176: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,3,PUSH_P1,0)
, bytes2word(PUSH_ARG_I2,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v180: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA176: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA176),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
,};
