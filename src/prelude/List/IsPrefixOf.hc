#include "newmacros.h"
#include "runtime.h"

#define v192	((void*)startLabel+22)
#define v193	((void*)startLabel+27)
#define v195	((void*)startLabel+38)
#define v196	((void*)startLabel+43)
#define CT_v199	((void*)startLabel+84)
extern Node FN_Prelude_46_61_61[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_38_38[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v199)
,};
Node FN_List_46isPrefixOf[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v192: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v193: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v195: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v196: (byte 3) */
  bytes2word(HEAP_CVAL_N1,2,RETURN,UNPACK)
, bytes2word(2,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_I2)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,HEAP_P1,3,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v199: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_List_46isPrefixOf[] = {
  CAPTAG(useLabel(FN_List_46isPrefixOf),3)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_List_46isPrefixOf))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
,};
