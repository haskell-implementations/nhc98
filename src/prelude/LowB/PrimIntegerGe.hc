#include "newmacros.h"
#include "runtime.h"

#define CT_v170	((void*)startLabel+24)
extern Node FN_Prelude_46primIntegerLe[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v170)
,};
Node FN_Prelude_46primIntegerGe[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(2,1,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v170: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46primIntegerGe[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerGe),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerLe))
,};
