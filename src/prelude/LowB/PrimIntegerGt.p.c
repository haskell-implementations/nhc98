#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+64)
#define ST_v171	((void*)startLabel+96)
#define PS_v172	((void*)startLabel+120)
#define PS_v170	((void*)startLabel+132)
extern Node FN_Prelude_46primIntegerLt[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46primIntegerLt[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v173)
,};
Node FN_Prelude_46primIntegerGt[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,2,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v172)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v171)
,	/* CT_v173: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46primIntegerGt[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerGt),2)
, useLabel(PS_v170)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerLt))
,};
Node PP_Prelude_46primIntegerGt[] = {
 };
Node PC_Prelude_46primIntegerGt[] = {
 	/* ST_v171: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,71)
, bytes2word(116,0,0,0)
,	/* PS_v172: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46primIntegerGt)
, useLabel(PC_Prelude_46primIntegerLt)
,	/* PS_v170: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46primIntegerGt)
, useLabel(PC_Prelude_46primIntegerGt)
,};
