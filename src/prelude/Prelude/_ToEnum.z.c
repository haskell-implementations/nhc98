#include "newmacros.h"
#include "runtime.h"

#define CT_v170	((void*)startLabel+32)
#define ST_v169	((void*)startLabel+44)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v170)
,};
Node FN_Prelude_46_95toEnum[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(CHR,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v169)
,	/* CT_v170: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46_95toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46_95toEnum),1)
,	/* ST_v169: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,116,111,69)
, bytes2word(110,117,109,0)
,};
