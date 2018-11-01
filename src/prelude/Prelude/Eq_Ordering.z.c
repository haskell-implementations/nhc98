#include "newmacros.h"
#include "runtime.h"

#define CT_v196	((void*)startLabel+48)
#define CT_v198	((void*)startLabel+100)
#define CT_v200	((void*)startLabel+160)
#define ST_v199	((void*)startLabel+180)
#define ST_v197	((void*)startLabel+208)
#define ST_v195	((void*)startLabel+239)
extern Node TM_Prelude[];
extern Node FN_Prelude_46Enum_46Prelude_46Ordering_46fromEnum[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46Prelude_46Ordering[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v196)
,};
Node FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,EQ_W,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40003
, useLabel(ST_v195)
,	/* CT_v196: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Ordering_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61),2)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Ordering_46fromEnum))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v198)
,};
Node FN_Prelude_46Eq_46Prelude_46Ordering_46_47_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v197)
,	/* CT_v198: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Ordering_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46Prelude_46Ordering)
, bytes2word(0,0,0,0)
, useLabel(CT_v200)
,};
Node FN_Prelude_46Eq_46Prelude_46Ordering[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30010
, useLabel(ST_v199)
,	/* CT_v200: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Prelude_46Ordering[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering))
, useLabel(F0_Prelude_46Eq_46Prelude_46Ordering_46_47_61)
, useLabel(F0_Prelude_46Eq_46Prelude_46Ordering_46_61_61)
,	/* ST_v199: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,101,114)
,	/* ST_v197: (byte 4) */
  bytes2word(105,110,103,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,101,114)
, bytes2word(105,110,103,46)
,	/* ST_v195: (byte 3) */
  bytes2word(47,61,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(113,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,101,114,105)
, bytes2word(110,103,46,61)
, bytes2word(61,0,0,0)
,};
