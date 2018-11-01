#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+60)
#define FN_LAMBDA174	((void*)startLabel+104)
#define CT_v183	((void*)startLabel+156)
#define F0_LAMBDA174	((void*)startLabel+164)
#define ST_v177	((void*)startLabel+188)
#define PP_LAMBDA174	((void*)startLabel+208)
#define PC_LAMBDA174	((void*)startLabel+208)
#define ST_v181	((void*)startLabel+208)
#define PS_v176	((void*)startLabel+240)
#define PS_v178	((void*)startLabel+252)
#define PS_v182	((void*)startLabel+264)
#define PS_v180	((void*)startLabel+276)
extern Node FN_System_46cExitWith[];
extern Node PM_System[];
extern Node PC_System_46cExitWith[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v179)
,};
Node FN_System_46primExitWith[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v178)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v177)
,	/* CT_v179: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_System_46primExitWith[] = {
  CAPTAG(useLabel(FN_System_46primExitWith),1)
, useLabel(PS_v176)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA174),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v183)
,	/* FN_LAMBDA174: (byte 0) */
  bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v182)
, 0
, 0
, 0
, 0
, 80008
, useLabel(ST_v181)
,	/* CT_v183: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA174: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA174),2)
, useLabel(PS_v180)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_System_46cExitWith))
,};
Node PP_System_46primExitWith[] = {
 };
Node PC_System_46primExitWith[] = {
 	/* ST_v177: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,112)
, bytes2word(114,105,109,69)
, bytes2word(120,105,116,87)
,	/* PP_LAMBDA174: (byte 4) */
 	/* PC_LAMBDA174: (byte 4) */
 	/* ST_v181: (byte 4) */
  bytes2word(105,116,104,0)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,112)
, bytes2word(114,105,109,69)
, bytes2word(120,105,116,87)
, bytes2word(105,116,104,58)
, bytes2word(56,58,56,45)
, bytes2word(56,58,51,50)
, bytes2word(0,0,0,0)
,	/* PS_v176: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46primExitWith)
, useLabel(PC_System_46primExitWith)
,	/* PS_v178: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46primExitWith)
, useLabel(PC_LAMBDA174)
,	/* PS_v182: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA174)
, useLabel(PC_System_46cExitWith)
,	/* PS_v180: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA174)
, useLabel(PC_LAMBDA174)
,};
