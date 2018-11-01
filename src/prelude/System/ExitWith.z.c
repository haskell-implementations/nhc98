#include "newmacros.h"
#include "runtime.h"

#define CT_v174	((void*)startLabel+32)
#define ST_v173	((void*)startLabel+48)
extern Node TM_System[];
extern Node FN_System_46primExitWith[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v174)
,};
Node FN_System_46exitWith[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v173)
,	/* CT_v174: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_System_46exitWith[] = {
  CAPTAG(useLabel(FN_System_46exitWith),1)
, VAPTAG(useLabel(FN_System_46primExitWith))
,	/* ST_v173: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,101)
, bytes2word(120,105,116,87)
, bytes2word(105,116,104,0)
,};
