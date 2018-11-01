#include "newmacros.h"
#include "runtime.h"

#define CT_v174	((void*)startLabel+44)
#define ST_v173	((void*)startLabel+60)
extern Node TM_Numeric[];
extern Node FN_Numeric_46showGFloat[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v174)
,};
Node FN_Numeric_46showFloat[] = {
  useLabel(TM_Numeric)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 60001
, useLabel(ST_v173)
,	/* CT_v174: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Numeric_46showFloat[] = {
  CAPTAG(useLabel(FN_Numeric_46showFloat),1)
, CAPTAG(useLabel(FN_Numeric_46showGFloat),1)
,	/* ST_v173: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(115,104,111,119)
, bytes2word(70,108,111,97)
, bytes2word(116,0,0,0)
,};
