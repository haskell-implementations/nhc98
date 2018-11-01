#include "newmacros.h"
#include "runtime.h"

#define CT_v184	((void*)startLabel+64)
#define CT_v188	((void*)startLabel+160)
#define ST_v186	((void*)startLabel+192)
#define ST_v182	((void*)startLabel+212)
#define PS_v187	((void*)startLabel+232)
#define PS_v185	((void*)startLabel+244)
#define PS_v183	((void*)startLabel+256)
#define PS_v181	((void*)startLabel+268)
extern Node FN_Prelude_46primIntegerSub[];
extern Node FN_Prelude_46primIntegerLe[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46primIntegerLe[];
extern Node PC_Prelude_46primIntegerSub[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v184)
,};
Node FN_Prelude_46_95subInteger[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v183)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v182)
,	/* CT_v184: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46_95subInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46_95subInteger),2)
, useLabel(PS_v181)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerSub))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v188)
,};
Node FN_Prelude_46_95leInteger[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v187)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v186)
,	/* CT_v188: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46_95leInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46_95leInteger),2)
, useLabel(PS_v185)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerLe))
,};
Node PP_Prelude_46_95leInteger[] = {
 };
Node PC_Prelude_46_95leInteger[] = {
 	/* ST_v186: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,108,101,73)
, bytes2word(110,116,101,103)
, bytes2word(101,114,0,0)
,};
Node PP_Prelude_46_95subInteger[] = {
 };
Node PC_Prelude_46_95subInteger[] = {
 	/* ST_v182: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,115,117,98)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,0)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95leInteger)
, useLabel(PC_Prelude_46primIntegerLe)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95leInteger)
, useLabel(PC_Prelude_46_95leInteger)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95subInteger)
, useLabel(PC_Prelude_46primIntegerSub)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95subInteger)
, useLabel(PC_Prelude_46_95subInteger)
,};
