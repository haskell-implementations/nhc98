#include "newmacros.h"
#include "runtime.h"

#define CT_v160	((void*)startLabel+24)
extern void *cExitWith();

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v160)
,};
Node FN_System_46cExitWith[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(cExitWith)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v160: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_System_46cExitWith[] = {
  CAPTAG(useLabel(FN_System_46cExitWith),1)
,};
