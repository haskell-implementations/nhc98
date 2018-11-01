#include "newmacros.h"
#include "runtime.h"

#define CT_v188	((void*)startLabel+36)
#define CT_v190	((void*)startLabel+88)
#define CT_v192	((void*)startLabel+144)
#define ST_v191	((void*)startLabel+164)
#define ST_v187	((void*)startLabel+191)
#define ST_v189	((void*)startLabel+221)
extern Node TM_Prelude[];
extern Node FN_Prelude_46primIntegerNe[];
extern Node FN_Prelude_46primIntegerEq[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v188)
,};
Node FN_Prelude_46Eq_46Prelude_46Integer_46_47_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 80003
, useLabel(ST_v187)
,	/* CT_v188: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Integer_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerNe))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v190)
,};
Node FN_Prelude_46Eq_46Prelude_46Integer_46_61_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70003
, useLabel(ST_v189)
,	/* CT_v190: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Integer_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer_46_61_61),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerEq))
, bytes2word(0,0,0,0)
, useLabel(CT_v192)
,};
Node FN_Prelude_46Eq_46Prelude_46Integer[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 60010
, useLabel(ST_v191)
,	/* CT_v192: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer))
, useLabel(F0_Prelude_46Eq_46Prelude_46Integer_46_47_61)
, useLabel(F0_Prelude_46Eq_46Prelude_46Integer_46_61_61)
,	/* ST_v191: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,101,103)
,	/* ST_v187: (byte 3) */
  bytes2word(101,114,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(113,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,101)
, bytes2word(114,46,47,61)
,	/* ST_v189: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(61,61,0,0)
,};
