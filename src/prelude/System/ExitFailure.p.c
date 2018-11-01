#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+108)
#define ST_v176	((void*)startLabel+140)
#define PS_v178	((void*)startLabel+160)
#define PS_v177	((void*)startLabel+172)
#define PS_v175	((void*)startLabel+184)
extern Node FN_System_46exitWith[];
extern Node PM_System[];
extern Node PC_System_46exitWith[];
extern Node PC_System_46ExitFailure[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v179)
,};
Node FN_System_46exitFailure[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_INT_P1,255,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v178)
, 0
, 0
, 0
, 0
, useLabel(PS_v177)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v176)
,	/* CT_v179: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_System_46exitFailure[] = {
  VAPTAG(useLabel(FN_System_46exitFailure))
, useLabel(PS_v175)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_System_46exitWith))
,};
Node PP_System_46exitFailure[] = {
 };
Node PC_System_46exitFailure[] = {
 	/* ST_v176: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,101)
, bytes2word(120,105,116,70)
, bytes2word(97,105,108,117)
, bytes2word(114,101,0,0)
,	/* PS_v178: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46exitFailure)
, useLabel(PC_System_46exitWith)
,	/* PS_v177: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46exitFailure)
, useLabel(PC_System_46ExitFailure)
,	/* PS_v175: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46exitFailure)
, useLabel(PC_System_46exitFailure)
,};
