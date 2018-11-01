#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+32)
#define FN_LAMBDA174	((void*)startLabel+60)
#define CT_v179	((void*)startLabel+84)
#define F0_LAMBDA174	((void*)startLabel+92)
#define ST_v176	((void*)startLabel+100)
#define ST_v178	((void*)startLabel+120)
extern Node TM_System[];
extern Node TMSUB_System[];
extern Node FN_System_46cExitWith[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v177)
,};
Node FN_System_46primExitWith[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v176)
,	/* CT_v177: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_System_46primExitWith[] = {
  CAPTAG(useLabel(FN_System_46primExitWith),1)
, CAPTAG(useLabel(FN_LAMBDA174),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v179)
,	/* FN_LAMBDA174: (byte 0) */
  useLabel(TMSUB_System)
, bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 80008
, useLabel(ST_v178)
,	/* CT_v179: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA174: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA174),2)
, VAPTAG(useLabel(FN_System_46cExitWith))
,	/* ST_v176: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,112)
, bytes2word(114,105,109,69)
, bytes2word(120,105,116,87)
,	/* ST_v178: (byte 4) */
  bytes2word(105,116,104,0)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,112)
, bytes2word(114,105,109,69)
, bytes2word(120,105,116,87)
, bytes2word(105,116,104,58)
, bytes2word(56,58,56,45)
, bytes2word(56,58,51,50)
, bytes2word(0,0,0,0)
,};
