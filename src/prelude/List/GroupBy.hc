#include "newmacros.h"
#include "runtime.h"

#define v195	((void*)startLabel+22)
#define v196	((void*)startLabel+27)
#define CT_v198	((void*)startLabel+80)
#define FN_LAMBDA192	((void*)startLabel+120)
#define CT_v199	((void*)startLabel+132)
#define F0_LAMBDA192	((void*)startLabel+140)
#define FN_LAMBDA191	((void*)startLabel+152)
#define CT_v200	((void*)startLabel+164)
#define F0_LAMBDA191	((void*)startLabel+172)
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46span[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v198)
,};
Node FN_List_46groupBy[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v195: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v196: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(2,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,4,HEAP_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,6)
, bytes2word(HEAP_CVAL_N1,2,HEAP_P1,3)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,7,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v198: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_List_46groupBy[] = {
  CAPTAG(useLabel(FN_List_46groupBy),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46span))
, VAPTAG(useLabel(FN_LAMBDA191))
, VAPTAG(useLabel(FN_LAMBDA192))
, VAPTAG(useLabel(FN_List_46groupBy))
, bytes2word(1,0,0,1)
, useLabel(CT_v199)
,	/* FN_LAMBDA192: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v199: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA192: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA192),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v200)
,	/* FN_LAMBDA191: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v200: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA191: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA191),1)
,};
