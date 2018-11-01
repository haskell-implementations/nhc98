#include "newmacros.h"
#include "runtime.h"

#define CT_v162	((void*)startLabel+32)
#define ST_v161	((void*)startLabel+60)
#define PS_v160	((void*)startLabel+80)
extern void *cExitWith();
extern Node PM_System[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v162)
,};
Node FN_System_46cExitWith[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(cExitWith)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v161)
,	/* CT_v162: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_System_46cExitWith[] = {
  CAPTAG(useLabel(FN_System_46cExitWith),1)
, useLabel(PS_v160)
, 0
, 0
, 0
,};
Node PP_System_46cExitWith[] = {
 };
Node PC_System_46cExitWith[] = {
 	/* ST_v161: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,99)
, bytes2word(69,120,105,116)
, bytes2word(87,105,116,104)
, bytes2word(0,0,0,0)
,	/* PS_v160: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46cExitWith)
, useLabel(PC_System_46cExitWith)
,};
