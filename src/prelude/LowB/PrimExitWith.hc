#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+20)
#define FN_LAMBDA174	((void*)startLabel+48)
#define CT_v177	((void*)startLabel+60)
#define F0_LAMBDA174	((void*)startLabel+68)
extern Node FN_System_46cExitWith[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v176)
,};
Node FN_System_46primExitWith[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v176: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_System_46primExitWith[] = {
  CAPTAG(useLabel(FN_System_46primExitWith),1)
, CAPTAG(useLabel(FN_LAMBDA174),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v177)
,	/* FN_LAMBDA174: (byte 0) */
  bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v177: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA174: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA174),2)
, VAPTAG(useLabel(FN_System_46cExitWith))
,};
