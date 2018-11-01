#include "newmacros.h"
#include "runtime.h"

#define CT_v170	((void*)startLabel+24)
#define ST_v169	((void*)startLabel+52)
#define PS_v168	((void*)startLabel+64)
extern Node PM_Prelude[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v170)
,};
Node FN_Prelude_46id[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v169)
,	/* CT_v170: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46id[] = {
  CAPTAG(useLabel(FN_Prelude_46id),1)
, useLabel(PS_v168)
, 0
, 0
, 0
,};
Node PP_Prelude_46id[] = {
 };
Node PC_Prelude_46id[] = {
 	/* ST_v169: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(105,100,0,0)
,	/* PS_v168: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46id)
, useLabel(PC_Prelude_46id)
,};
