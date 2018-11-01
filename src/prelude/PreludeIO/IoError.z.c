#include "newmacros.h"
#include "runtime.h"

#define CT_v170	((void*)startLabel+44)
#define ST_v169	((void*)startLabel+60)
extern Node TM_Prelude[];
extern Node FN_Prelude_46const[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v170)
,};
Node FN_Prelude_46ioError[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 60001
, useLabel(ST_v169)
,	/* CT_v170: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46ioError[] = {
  CAPTAG(useLabel(FN_Prelude_46ioError),1)
, CAPTAG(useLabel(FN_Prelude_46const),1)
,	/* ST_v169: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(105,111,69,114)
, bytes2word(114,111,114,0)
,};
