#include "newmacros.h"
#include "runtime.h"

#define CT_v183	((void*)startLabel+44)
#define ST_v181	((void*)startLabel+64)
extern Node TM_Prelude[];
extern Node FN_Prelude_46_95fromEnum[];
extern Node FN_Prelude_46_95enumFromTo_39[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v183)
,};
Node FN_Prelude_46_95enumRange[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I3,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v181)
,	/* CT_v183: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46_95enumRange[] = {
  CAPTAG(useLabel(FN_Prelude_46_95enumRange),1)
, VAPTAG(useLabel(FN_Prelude_46_95fromEnum))
, VAPTAG(useLabel(FN_Prelude_46_95enumFromTo_39))
,	/* ST_v181: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,101,110,117)
, bytes2word(109,82,97,110)
, bytes2word(103,101,0,0)
,};
