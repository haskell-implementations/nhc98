#include "newmacros.h"
#include "runtime.h"

#define CT_v181	((void*)startLabel+24)
#define CT_v182	((void*)startLabel+64)
extern Node FN_Prelude_46primIntegerSub[];
extern Node FN_Prelude_46primIntegerLe[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v181)
,};
Node FN_Prelude_46_95subInteger[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v181: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46_95subInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46_95subInteger),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerSub))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v182)
,};
Node FN_Prelude_46_95leInteger[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v182: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46_95leInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46_95leInteger),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerLe))
,};
