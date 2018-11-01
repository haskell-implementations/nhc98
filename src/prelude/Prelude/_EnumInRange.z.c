#include "newmacros.h"
#include "runtime.h"

#define CT_v192	((void*)startLabel+64)
#define ST_v190	((void*)startLabel+88)
extern Node TM_Prelude[];
extern Node FN_Prelude_46_95fromEnum[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_60_61[];
extern Node FN_Prelude_46_38_38[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v192)
,};
Node FN_Prelude_46_95enumInRange[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I3,HEAP_I1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v190)
,	/* CT_v192: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46_95enumInRange[] = {
  CAPTAG(useLabel(FN_Prelude_46_95enumInRange),2)
, VAPTAG(useLabel(FN_Prelude_46_95fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
,	/* ST_v190: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,101,110,117)
, bytes2word(109,73,110,82)
, bytes2word(97,110,103,101)
, bytes2word(0,0,0,0)
,};
