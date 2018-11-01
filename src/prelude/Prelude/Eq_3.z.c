#include "newmacros.h"
#include "runtime.h"

#define CT_v264	((void*)startLabel+88)
#define CT_v266	((void*)startLabel+160)
#define CT_v268	((void*)startLabel+240)
#define ST_v267	((void*)startLabel+260)
#define ST_v265	((void*)startLabel+281)
#define ST_v261	((void*)startLabel+305)
extern Node TM_Prelude[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46Eq_46Prelude_463[];
extern Node FN_Prelude_46_95_46_47_61[];

static Node startLabel[] = {
  bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v264)
,};
Node FN_Prelude_46Eq_46Prelude_463_46_61_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,3,PUSH_ZAP_ARG,5)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,3)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,4,HEAP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,5,HEAP_I2)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(20,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40003
, useLabel(ST_v261)
,	/* CT_v264: (byte 0) */
  HW(3,5)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_463_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_463_46_61_61),5)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v266)
,};
Node FN_Prelude_46Eq_46Prelude_463_46_47_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
, 30031
, useLabel(ST_v265)
,	/* CT_v266: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_463_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_463_46_47_61),5)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v268)
,};
Node FN_Prelude_46Eq_46Prelude_463[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30031
, useLabel(ST_v267)
,	/* CT_v268: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_463[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_463),3)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_463_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_463_46_61_61),2)
,	/* ST_v267: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,51)
,	/* ST_v265: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(51,46,47,61)
,	/* ST_v261: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(51,46,61,61)
, bytes2word(0,0,0,0)
,};
