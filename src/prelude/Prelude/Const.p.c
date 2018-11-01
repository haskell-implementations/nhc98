#include "newmacros.h"
#include "runtime.h"

#define CT_v174	((void*)startLabel+32)
#define ST_v173	((void*)startLabel+60)
#define PS_v172	((void*)startLabel+76)
extern Node PM_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v174)
,};
Node FN_Prelude_46const[] = {
  bytes2word(ZAP_ARG_I2,NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v173)
,	/* CT_v174: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46const[] = {
  CAPTAG(useLabel(FN_Prelude_46const),2)
, useLabel(PS_v172)
, 0
, 0
, 0
,};
Node PP_Prelude_46const[] = {
 };
Node PC_Prelude_46const[] = {
 	/* ST_v173: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(99,111,110,115)
, bytes2word(116,0,0,0)
,	/* PS_v172: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46const)
, useLabel(PC_Prelude_46const)
,};
