#include "newmacros.h"
#include "runtime.h"

#define CT_v182	((void*)startLabel+36)
#define CT_v184	((void*)startLabel+88)
#define ST_v183	((void*)startLabel+104)
#define ST_v181	((void*)startLabel+123)
extern Node TM_Prelude[];
extern Node FN_Prelude_46primIntegerSub[];
extern Node FN_Prelude_46primIntegerLe[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v182)
,};
Node FN_Prelude_46_95subInteger[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v181)
,	/* CT_v182: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46_95subInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46_95subInteger),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerSub))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v184)
,};
Node FN_Prelude_46_95leInteger[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v183)
,	/* CT_v184: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46_95leInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46_95leInteger),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerLe))
,	/* ST_v183: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,108,101,73)
, bytes2word(110,116,101,103)
,	/* ST_v181: (byte 3) */
  bytes2word(101,114,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,95)
, bytes2word(115,117,98,73)
, bytes2word(110,116,101,103)
, bytes2word(101,114,0,0)
,};
