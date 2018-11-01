#include "newmacros.h"
#include "runtime.h"

#define v199	((void*)startLabel+32)
#define v200	((void*)startLabel+54)
#define v201	((void*)startLabel+67)
#define CT_v204	((void*)startLabel+96)
#define CT_v206	((void*)startLabel+164)
#define ST_v205	((void*)startLabel+184)
#define ST_v202	((void*)startLabel+204)
extern Node TM_Prelude[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node FN_Prelude_46_95toEnum[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_Prelude_46_95fromEnum[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v204)
,};
Node FN_Prelude_46_95enumFromTo_39[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v199: (byte 4) */
  bytes2word(TOP(28),BOT(28),TOP(41),BOT(41))
, bytes2word(POP_I1,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,1,HEAP_INT_P1)
, bytes2word(1,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,9,HEAP_OFF_N1)
,	/* v200: (byte 2) */
  bytes2word(5,RETURN,POP_I1,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,4)
,	/* v201: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,2,0)
, 100001
, useLabel(ST_v202)
,	/* CT_v204: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46_95enumFromTo_39[] = {
  CAPTAG(useLabel(FN_Prelude_46_95enumFromTo_39),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, VAPTAG(useLabel(FN_Prelude_46_95toEnum))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Prelude_46_95enumFromTo_39))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v206)
,};
Node FN_Prelude_46_95enumFromTo[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v205)
,	/* CT_v206: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46_95enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95fromEnum))
, VAPTAG(useLabel(FN_Prelude_46_95enumFromTo_39))
,	/* ST_v205: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,101,110,117)
, bytes2word(109,70,114,111)
,	/* ST_v202: (byte 4) */
  bytes2word(109,84,111,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,101,110,117)
, bytes2word(109,70,114,111)
, bytes2word(109,84,111,39)
, bytes2word(0,0,0,0)
,};
