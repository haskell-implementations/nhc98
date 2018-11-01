#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+36)
#define ST_v178	((void*)startLabel+64)
#define PS_v177	((void*)startLabel+80)
extern Node PM_Prelude[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v179)
,};
Node FN_Prelude_46flip[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,PUSH_ARG_I3,PUSH_ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v178)
,	/* CT_v179: (byte 0) */
  HW(0,3)
, 0
,};
Node F0_Prelude_46flip[] = {
  CAPTAG(useLabel(FN_Prelude_46flip),3)
, useLabel(PS_v177)
, 0
, 0
, 0
,};
Node PP_Prelude_46flip[] = {
 };
Node PC_Prelude_46flip[] = {
 	/* ST_v178: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(102,108,105,112)
, bytes2word(0,0,0,0)
,	/* PS_v177: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46flip)
, useLabel(PC_Prelude_46flip)
,};
