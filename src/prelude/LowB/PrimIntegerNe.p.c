#include "newmacros.h"
#include "runtime.h"

#define CT_v175	((void*)startLabel+88)
#define ST_v172	((void*)startLabel+124)
#define PS_v173	((void*)startLabel+148)
#define PS_v174	((void*)startLabel+160)
#define PS_v171	((void*)startLabel+172)
extern Node FN_Prelude_46primIntegerEq[];
extern Node FN_Prelude_46not[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46primIntegerEq[];
extern Node PC_Prelude_46not[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v175)
,};
Node FN_Prelude_46primIntegerNe[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v174)
, 0
, 0
, 0
, 0
, useLabel(PS_v173)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v172)
,	/* CT_v175: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46primIntegerNe[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerNe),2)
, useLabel(PS_v171)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerEq))
, VAPTAG(useLabel(FN_Prelude_46not))
,};
Node PP_Prelude_46primIntegerNe[] = {
 };
Node PC_Prelude_46primIntegerNe[] = {
 	/* ST_v172: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,78)
, bytes2word(101,0,0,0)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46primIntegerNe)
, useLabel(PC_Prelude_46primIntegerEq)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46primIntegerNe)
, useLabel(PC_Prelude_46not)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46primIntegerNe)
, useLabel(PC_Prelude_46primIntegerNe)
,};
