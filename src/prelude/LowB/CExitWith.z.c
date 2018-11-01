#include "newmacros.h"
#include "runtime.h"

#define CT_v161	((void*)startLabel+36)
#define ST_v160	((void*)startLabel+48)
extern Node TM_System[];
extern void *cExitWith();

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v161)
,};
Node FN_System_46cExitWith[] = {
  useLabel(TM_System)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(cExitWith)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v160)
,	/* CT_v161: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_System_46cExitWith[] = {
  CAPTAG(useLabel(FN_System_46cExitWith),1)
,	/* ST_v160: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,99)
, bytes2word(69,120,105,116)
, bytes2word(87,105,116,104)
, bytes2word(0,0,0,0)
,};
