#include "newmacros.h"
#include "runtime.h"

#define v184	((void*)startLabel+22)
#define v185	((void*)startLabel+27)
#define CT_v187	((void*)startLabel+64)
#define FN_LAMBDA181	((void*)startLabel+100)
#define CT_v188	((void*)startLabel+120)
#define F0_LAMBDA181	((void*)startLabel+128)
extern Node FN_Prelude_46filter[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46not[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v187)
,};
Node FN_List_46nubBy[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v184: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v185: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(2,HEAP_CVAL_I3,HEAP_P1,0)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_I1,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_I1,HEAP_OFF_N1)
, bytes2word(5,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v187: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_List_46nubBy[] = {
  CAPTAG(useLabel(FN_List_46nubBy),2)
, CAPTAG(useLabel(FN_LAMBDA181),1)
, VAPTAG(useLabel(FN_Prelude_46filter))
, VAPTAG(useLabel(FN_List_46nubBy))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v188)
,	/* FN_LAMBDA181: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v188: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA181: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA181),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46not))
,};
