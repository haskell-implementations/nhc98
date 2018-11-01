#include "newmacros.h"
#include "runtime.h"

#define CT_v190	((void*)startLabel+64)
#define CT_v194	((void*)startLabel+160)
#define CT_v198	((void*)startLabel+268)
#define ST_v196	((void*)startLabel+304)
#define ST_v188	((void*)startLabel+332)
#define ST_v192	((void*)startLabel+364)
#define PS_v193	((void*)startLabel+396)
#define PS_v191	((void*)startLabel+408)
#define PS_v189	((void*)startLabel+420)
#define PS_v187	((void*)startLabel+432)
#define PS_v195	((void*)startLabel+444)
#define PS_v197	((void*)startLabel+456)
extern Node FN_Prelude_46primIntegerNe[];
extern Node FN_Prelude_46primIntegerEq[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46primIntegerEq[];
extern Node PC_Prelude_46primIntegerNe[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v190)
,};
Node FN_Prelude_46Eq_46Prelude_46Integer_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v189)
, 0
, 0
, 0
, 0
, 80003
, useLabel(ST_v188)
,	/* CT_v190: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Integer_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer_46_47_61),2)
, useLabel(PS_v187)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerNe))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v194)
,};
Node FN_Prelude_46Eq_46Prelude_46Integer_46_61_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v193)
, 0
, 0
, 0
, 0
, 70003
, useLabel(ST_v192)
,	/* CT_v194: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Integer_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer_46_61_61),2)
, useLabel(PS_v191)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerEq))
, bytes2word(0,0,0,0)
, useLabel(CT_v198)
,};
Node FN_Prelude_46Eq_46Prelude_46Integer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 60010
, useLabel(ST_v196)
,	/* CT_v198: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer))
, useLabel(PS_v195)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Eq_46Prelude_46Integer_46_47_61)
, useLabel(F0_Prelude_46Eq_46Prelude_46Integer_46_61_61)
,};
Node PP_Prelude_46Eq_46Prelude_46Integer[] = {
 };
Node PC_Prelude_46Eq_46Prelude_46Integer[] = {
 	/* ST_v196: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,101,103)
, bytes2word(101,114,0,0)
,};
Node PP_Prelude_46Eq_46Prelude_46Integer_46_47_61[] = {
 };
Node PC_Prelude_46Eq_46Prelude_46Integer_46_47_61[] = {
 	/* ST_v188: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,101,103)
, bytes2word(101,114,46,47)
, bytes2word(61,0,0,0)
,};
Node PP_Prelude_46Eq_46Prelude_46Integer_46_61_61[] = {
 };
Node PC_Prelude_46Eq_46Prelude_46Integer_46_61_61[] = {
 	/* ST_v192: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,101,103)
, bytes2word(101,114,46,61)
, bytes2word(61,0,0,0)
,	/* PS_v193: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Integer_46_61_61)
, useLabel(PC_Prelude_46primIntegerEq)
,	/* PS_v191: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Integer_46_61_61)
, useLabel(PC_Prelude_46Eq_46Prelude_46Integer_46_61_61)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Integer_46_47_61)
, useLabel(PC_Prelude_46primIntegerNe)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Integer_46_47_61)
, useLabel(PC_Prelude_46Eq_46Prelude_46Integer_46_47_61)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Integer)
, useLabel(PC_Prelude_46Eq_46Prelude_46Integer)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Integer)
, useLabel(PC_Prelude_462)
,};
