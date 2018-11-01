#include "newmacros.h"
#include "runtime.h"

#define v181	((void*)startLabel+22)
#define v182	((void*)startLabel+27)
#define CT_v184	((void*)startLabel+60)
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_124_124[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v184)
,};
Node FN_List_46elemBy[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v181: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v182: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(2,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_P1,0,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,9)
, bytes2word(HEAP_OFF_N1,6,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v184: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_List_46elemBy[] = {
  CAPTAG(useLabel(FN_List_46elemBy),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_List_46elemBy))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
,};
