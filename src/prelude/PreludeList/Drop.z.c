#include "newmacros.h"
#include "runtime.h"

#define v189	((void*)startLabel+27)
#define v192	((void*)startLabel+36)
#define v193	((void*)startLabel+40)
#define CT_v196	((void*)startLabel+76)
#define ST_v194	((void*)startLabel+96)
extern Node TM_Prelude[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v196)
,};
Node FN_Prelude_46drop[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ARG_I1)
, bytes2word(EVAL,LE_W,JUMPFALSE,4)
,	/* v189: (byte 3) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v192: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v193: (byte 4) */
  bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_INT_P1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,4,HEAP_I2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v194)
,	/* CT_v196: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46drop[] = {
  CAPTAG(useLabel(FN_Prelude_46drop),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Prelude_46drop))
,	/* ST_v194: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(100,114,111,112)
, bytes2word(0,0,0,0)
,};
