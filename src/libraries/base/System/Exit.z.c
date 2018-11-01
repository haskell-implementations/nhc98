#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+40)
#define CT_v175	((void*)startLabel+100)
#define ST_v171	((void*)startLabel+116)
#define ST_v174	((void*)startLabel+128)
#define ST_v172	((void*)startLabel+152)
extern Node TM_System_46Exit[];
extern Node FN_System_46exitWith[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v173)
,};
Node FN_System_46Exit_46exitSuccess[] = {
  useLabel(TM_System_46Exit)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 910001
, useLabel(ST_v172)
,	/* CT_v173: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_System_46Exit_46exitSuccess[] = {
  VAPTAG(useLabel(FN_System_46Exit_46exitSuccess))
, VAPTAG(useLabel(FN_System_46exitWith))
, bytes2word(0,0,0,0)
, useLabel(CT_v175)
,};
Node FN_System_46Exit_46exitFailure[] = {
  useLabel(TM_System_46Exit)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_INT_P1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, 850001
, useLabel(ST_v174)
,	/* CT_v175: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_System_46Exit_46exitFailure[] = {
  VAPTAG(useLabel(FN_System_46Exit_46exitFailure))
, VAPTAG(useLabel(FN_System_46exitWith))
,};
Node PM_System_46Exit[] = {
 	/* ST_v171: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
,	/* ST_v174: (byte 4) */
  bytes2word(120,105,116,0)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,46)
, bytes2word(101,120,105,116)
, bytes2word(70,97,105,108)
,	/* ST_v172: (byte 4) */
  bytes2word(117,114,101,0)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,46)
, bytes2word(101,120,105,116)
, bytes2word(83,117,99,99)
, bytes2word(101,115,115,0)
,};
