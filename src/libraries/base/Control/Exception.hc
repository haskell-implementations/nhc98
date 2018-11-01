#include "newmacros.h"
#include "runtime.h"

#define FN_Control_46Exception_46catchesHandler	((void*)startLabel+16)
#define CT_v261	((void*)startLabel+44)
#define F0_Control_46Exception_46catchesHandler	((void*)startLabel+52)
#define FN_Control_46Exception_46Prelude_46214_46tryHandler	((void*)startLabel+88)
#define v265	((void*)startLabel+110)
#define v266	((void*)startLabel+113)
#define CT_v269	((void*)startLabel+136)
#define F0_Control_46Exception_46Prelude_46214_46tryHandler	((void*)startLabel+144)
#define CT_v270	((void*)startLabel+184)
extern Node FN_Control_46Exception_46Base_46throw[];
extern Node CF_Control_46Exception_46Base_46Exception_46Control_46Exception_46Base_46SomeException[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46foldr[];
extern Node FN_Control_46Exception_46Base_46fromException[];
extern Node FN_Control_46Exception_46Base_46catch[];

static Node startLabel[] = {
  42
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v261)
,	/* FN_Control_46Exception_46catchesHandler: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v261: (byte 0) */
  HW(5,2)
, 0
,	/* F0_Control_46Exception_46catchesHandler: (byte 0) */
  CAPTAG(useLabel(FN_Control_46Exception_46catchesHandler),2)
, CAPTAG(useLabel(FN_Control_46Exception_46Prelude_46214_46tryHandler),2)
, VAPTAG(useLabel(FN_Control_46Exception_46Base_46throw))
, useLabel(CF_Control_46Exception_46Base_46Exception_46Control_46Exception_46Base_46SomeException)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v269)
,	/* FN_Control_46Exception_46Prelude_46214_46tryHandler: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_ARG_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_I2,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v265: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I3)
,	/* v266: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,1,PUSH_P1)
, bytes2word(0,PUSH_P1,3,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,4,ZAP_STACK_P1,3)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v269: (byte 0) */
  HW(1,3)
, 0
,	/* F0_Control_46Exception_46Prelude_46214_46tryHandler: (byte 0) */
  CAPTAG(useLabel(FN_Control_46Exception_46Prelude_46214_46tryHandler),3)
, VAPTAG(useLabel(FN_Control_46Exception_46Base_46fromException))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v270)
,};
Node FN_Control_46Exception_46catches[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v270: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Control_46Exception_46catches[] = {
  CAPTAG(useLabel(FN_Control_46Exception_46catches),2)
, CAPTAG(useLabel(FN_Control_46Exception_46catchesHandler),1)
, VAPTAG(useLabel(FN_Control_46Exception_46Base_46catch))
, useLabel(CF_Control_46Exception_46Base_46Exception_46Control_46Exception_46Base_46SomeException)
,};
