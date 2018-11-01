#include "newmacros.h"
#include "runtime.h"

#define v187	((void*)startLabel+32)
#define v188	((void*)startLabel+54)
#define v189	((void*)startLabel+67)
#define CT_v192	((void*)startLabel+96)
#define ST_v190	((void*)startLabel+124)
extern Node TM_Prelude[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node FN_Prelude_46_95toEnum[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v192)
,};
Node FN_Prelude_46_95enumFromToInc[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v187: (byte 4) */
  bytes2word(TOP(28),BOT(28),TOP(41),BOT(41))
, bytes2word(POP_I1,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG_ARG,2,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,10,HEAP_OFF_N1)
,	/* v188: (byte 2) */
  bytes2word(6,RETURN,POP_I1,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,4)
,	/* v189: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,2,0)
, 60001
, useLabel(ST_v190)
,	/* CT_v192: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_Prelude_46_95enumFromToInc[] = {
  CAPTAG(useLabel(FN_Prelude_46_95enumFromToInc),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, VAPTAG(useLabel(FN_Prelude_46_95toEnum))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Prelude_46_95enumFromToInc))
,	/* ST_v190: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,101,110,117)
, bytes2word(109,70,114,111)
, bytes2word(109,84,111,73)
, bytes2word(110,99,0,0)
,};
