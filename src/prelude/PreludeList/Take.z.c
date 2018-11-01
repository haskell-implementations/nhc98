#include "newmacros.h"
#include "runtime.h"

#define v190	((void*)startLabel+29)
#define v193	((void*)startLabel+38)
#define v194	((void*)startLabel+42)
#define CT_v197	((void*)startLabel+84)
#define ST_v195	((void*)startLabel+104)
extern Node TM_Prelude[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v197)
,};
Node FN_Prelude_46take[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,LE_W,JUMPFALSE)
, bytes2word(5,0,PUSH_HEAP,HEAP_CVAL_IN3)
,	/* v190: (byte 1) */
  bytes2word(RETURN,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v193: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v194: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_INT_P1)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_I1,HEAP_OFF_N1,5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v195)
,	/* CT_v197: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46take[] = {
  CAPTAG(useLabel(FN_Prelude_46take),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Prelude_46take))
,	/* ST_v195: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(116,97,107,101)
, bytes2word(0,0,0,0)
,};
