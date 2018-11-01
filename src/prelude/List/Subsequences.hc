#include "newmacros.h"
#include "runtime.h"

#define v181	((void*)startLabel+18)
#define v182	((void*)startLabel+31)
#define CT_v184	((void*)startLabel+68)
#define FN_LAMBDA178	((void*)startLabel+108)
#define CT_v185	((void*)startLabel+132)
#define F0_LAMBDA178	((void*)startLabel+140)
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46_43_43[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v184)
,};
Node FN_List_46subsequences[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v181: (byte 2) */
  bytes2word(TOP(17),BOT(17),POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,3)
,	/* v182: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,UNPACK)
, bytes2word(2,HEAP_CVAL_I3,HEAP_I1,HEAP_CVAL_I4)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I3,HEAP_I1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v184: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_List_46subsequences[] = {
  CAPTAG(useLabel(FN_List_46subsequences),1)
, VAPTAG(useLabel(FN_List_46subsequences))
, CAPTAG(useLabel(FN_LAMBDA178),1)
, VAPTAG(useLabel(FN_Prelude_46map))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v185)
,	/* FN_LAMBDA178: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v185: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA178: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA178),2)
,};
