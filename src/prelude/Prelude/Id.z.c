#include "newmacros.h"
#include "runtime.h"

#define CT_v169	((void*)startLabel+28)
#define ST_v168	((void*)startLabel+40)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v169)
,};
Node FN_Prelude_46id[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v168)
,	/* CT_v169: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46id[] = {
  CAPTAG(useLabel(FN_Prelude_46id),1)
,	/* ST_v168: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(105,100,0,0)
,};
