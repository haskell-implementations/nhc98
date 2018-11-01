#include "newmacros.h"
#include "runtime.h"

#define CT_v185	((void*)startLabel+24)
#define FN_LAMBDA183	((void*)startLabel+52)
#define v190	((void*)startLabel+70)
#define v189	((void*)startLabel+74)
#define v186	((void*)startLabel+94)
#define CT_v191	((void*)startLabel+104)
#define F0_LAMBDA183	((void*)startLabel+112)
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v185)
,};
Node FN_Prelude_46catch[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v185: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46catch[] = {
  CAPTAG(useLabel(FN_Prelude_46catch),2)
, CAPTAG(useLabel(FN_LAMBDA183),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v191)
,	/* FN_LAMBDA183: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,3,PUSH_P1,0)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(8),BOT(8))
,	/* v190: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v189: (byte 2) */
  bytes2word(22,0,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_I1,PUSH_ARG_I3,PUSH_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
,	/* v186: (byte 2) */
  bytes2word(1,RETURN_EVAL,PUSH_P1,0)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v191: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA183: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA183),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
,};
