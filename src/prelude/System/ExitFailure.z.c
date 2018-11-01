#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+44)
#define ST_v175	((void*)startLabel+60)
extern Node TM_System[];
extern Node FN_System_46exitWith[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v176)
,};
Node FN_System_46exitFailure[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_INT_P1,255)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, 70001
, useLabel(ST_v175)
,	/* CT_v176: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_System_46exitFailure[] = {
  VAPTAG(useLabel(FN_System_46exitFailure))
, VAPTAG(useLabel(FN_System_46exitWith))
,	/* ST_v175: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,101)
, bytes2word(120,105,116,70)
, bytes2word(97,105,108,117)
, bytes2word(114,101,0,0)
,};
