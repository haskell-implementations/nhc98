#include "newmacros.h"
#include "runtime.h"

#define CT_v175	((void*)startLabel+36)
#define ST_v174	((void*)startLabel+64)
#define PS_v173	((void*)startLabel+76)
extern Node PM_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v175)
,};
Node FN_Prelude_46_36[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,PUSH_ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v174)
,	/* CT_v175: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46_36[] = {
  CAPTAG(useLabel(FN_Prelude_46_36),2)
, useLabel(PS_v173)
, 0
, 0
, 0
,};
Node PP_Prelude_46_36[] = {
 };
Node PC_Prelude_46_36[] = {
 	/* ST_v174: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(36,0,0,0)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_36)
, useLabel(PC_Prelude_46_36)
,};
