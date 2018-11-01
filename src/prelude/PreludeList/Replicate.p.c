#include "newmacros.h"
#include "runtime.h"

#define CT_v174	((void*)startLabel+88)
#define ST_v171	((void*)startLabel+124)
#define PS_v173	((void*)startLabel+144)
#define PS_v172	((void*)startLabel+156)
#define PS_v170	((void*)startLabel+168)
extern Node FN_Prelude_46repeat[];
extern Node FN_Prelude_46take[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46take[];
extern Node PC_Prelude_46repeat[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v174)
,};
Node FN_Prelude_46replicate[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v173)
, 0
, 0
, 0
, 0
, useLabel(PS_v172)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v171)
,	/* CT_v174: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46replicate[] = {
  CAPTAG(useLabel(FN_Prelude_46replicate),2)
, useLabel(PS_v170)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46repeat))
, VAPTAG(useLabel(FN_Prelude_46take))
,};
Node PP_Prelude_46replicate[] = {
 };
Node PC_Prelude_46replicate[] = {
 	/* ST_v171: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,112,108)
, bytes2word(105,99,97,116)
, bytes2word(101,0,0,0)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46replicate)
, useLabel(PC_Prelude_46take)
,	/* PS_v172: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46replicate)
, useLabel(PC_Prelude_46repeat)
,	/* PS_v170: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46replicate)
, useLabel(PC_Prelude_46replicate)
,};
