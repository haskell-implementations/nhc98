#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+60)
#define ST_v174	((void*)startLabel+92)
#define PS_v175	((void*)startLabel+108)
#define PS_v173	((void*)startLabel+120)
extern Node FN_System_46primExitWith[];
extern Node PM_System[];
extern Node PC_System_46primExitWith[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v176)
,};
Node FN_System_46exitWith[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v175)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v174)
,	/* CT_v176: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_System_46exitWith[] = {
  CAPTAG(useLabel(FN_System_46exitWith),1)
, useLabel(PS_v173)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_System_46primExitWith))
,};
Node PP_System_46exitWith[] = {
 };
Node PC_System_46exitWith[] = {
 	/* ST_v174: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,101)
, bytes2word(120,105,116,87)
, bytes2word(105,116,104,0)
,	/* PS_v175: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46exitWith)
, useLabel(PC_System_46primExitWith)
,	/* PS_v173: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46exitWith)
, useLabel(PC_System_46exitWith)
,};
