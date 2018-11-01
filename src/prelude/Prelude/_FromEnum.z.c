#include "newmacros.h"
#include "runtime.h"

#define CT_v170	((void*)startLabel+32)
#define ST_v169	((void*)startLabel+44)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v170)
,};
Node FN_Prelude_46_95fromEnum[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(ORD,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v169)
,	/* CT_v170: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46_95fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46_95fromEnum),1)
,	/* ST_v169: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,102,114,111)
, bytes2word(109,69,110,117)
, bytes2word(109,0,0,0)
,};
