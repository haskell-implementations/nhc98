#include "newmacros.h"
#include "runtime.h"

#define CT_v184	((void*)startLabel+44)
#define ST_v183	((void*)startLabel+60)
extern Node TM_Prelude[];
extern Node FN_Prelude_46_62_62_61[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v184)
,};
Node FN_Prelude_46_61_60_60[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_ARG_I2,PUSH_ARG_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v183)
,	/* CT_v184: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46_61_60_60[] = {
  CAPTAG(useLabel(FN_Prelude_46_61_60_60),3)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
,	/* ST_v183: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(61,60,60,0)
,};
