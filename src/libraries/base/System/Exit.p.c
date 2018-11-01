#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+104)
#define CT_v181	((void*)startLabel+244)
#define ST_v171	((void*)startLabel+276)
#define ST_v178	((void*)startLabel+288)
#define ST_v173	((void*)startLabel+312)
#define PS_v180	((void*)startLabel+336)
#define PS_v179	((void*)startLabel+348)
#define PS_v177	((void*)startLabel+360)
#define PS_v175	((void*)startLabel+372)
#define PS_v174	((void*)startLabel+384)
#define PS_v172	((void*)startLabel+396)
extern Node FN_System_46exitWith[];
extern Node PC_System_46exitWith[];
extern Node PC_System_46ExitFailure[];
extern Node PC_System_46ExitSuccess[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v176)
,};
Node FN_System_46Exit_46exitSuccess[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v175)
, 0
, 0
, 0
, 0
, useLabel(PS_v174)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 910001
, useLabel(ST_v173)
,	/* CT_v176: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_System_46Exit_46exitSuccess[] = {
  VAPTAG(useLabel(FN_System_46Exit_46exitSuccess))
, useLabel(PS_v172)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_System_46exitWith))
, bytes2word(0,0,0,0)
, useLabel(CT_v181)
,};
Node FN_System_46Exit_46exitFailure[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_INT_P1,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v180)
, 0
, 0
, 0
, 0
, useLabel(PS_v179)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, 850001
, useLabel(ST_v178)
,	/* CT_v181: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_System_46Exit_46exitFailure[] = {
  VAPTAG(useLabel(FN_System_46Exit_46exitFailure))
, useLabel(PS_v177)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_System_46exitWith))
,};
Node PM_System_46Exit[] = {
 	/* ST_v171: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,0)
,};
Node PP_System_46Exit_46exitFailure[] = {
 };
Node PC_System_46Exit_46exitFailure[] = {
 	/* ST_v178: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,46)
, bytes2word(101,120,105,116)
, bytes2word(70,97,105,108)
, bytes2word(117,114,101,0)
,};
Node PP_System_46Exit_46exitSuccess[] = {
 };
Node PC_System_46Exit_46exitSuccess[] = {
 	/* ST_v173: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,46)
, bytes2word(101,120,105,116)
, bytes2word(83,117,99,99)
, bytes2word(101,115,115,0)
,	/* PS_v180: (byte 0) */
  useLabel(PM_System_46Exit)
, useLabel(PP_System_46Exit_46exitFailure)
, useLabel(PC_System_46exitWith)
,	/* PS_v179: (byte 0) */
  useLabel(PM_System_46Exit)
, useLabel(PP_System_46Exit_46exitFailure)
, useLabel(PC_System_46ExitFailure)
,	/* PS_v177: (byte 0) */
  useLabel(PM_System_46Exit)
, useLabel(PP_System_46Exit_46exitFailure)
, useLabel(PC_System_46Exit_46exitFailure)
,	/* PS_v175: (byte 0) */
  useLabel(PM_System_46Exit)
, useLabel(PP_System_46Exit_46exitSuccess)
, useLabel(PC_System_46exitWith)
,	/* PS_v174: (byte 0) */
  useLabel(PM_System_46Exit)
, useLabel(PP_System_46Exit_46exitSuccess)
, useLabel(PC_System_46ExitSuccess)
,	/* PS_v172: (byte 0) */
  useLabel(PM_System_46Exit)
, useLabel(PP_System_46Exit_46exitSuccess)
, useLabel(PC_System_46Exit_46exitSuccess)
,};
