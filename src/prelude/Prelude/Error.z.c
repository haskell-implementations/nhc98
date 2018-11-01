#include "newmacros.h"
#include "runtime.h"

#define CT_v170	((void*)startLabel+32)
#define ST_v169	((void*)startLabel+48)
extern Node TM_Prelude[];
extern Node FN_Prelude_46primError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v170)
,};
Node FN_Prelude_46error[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v169)
,	/* CT_v170: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46error[] = {
  CAPTAG(useLabel(FN_Prelude_46error),1)
, VAPTAG(useLabel(FN_Prelude_46primError))
,	/* ST_v169: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(101,114,114,111)
, bytes2word(114,0,0,0)
,};
