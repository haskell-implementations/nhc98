#include "newmacros.h"
#include "runtime.h"

#define CT_v196	((void*)startLabel+36)
#define CT_v198	((void*)startLabel+84)
#define CT_v200	((void*)startLabel+144)
#define ST_v199	((void*)startLabel+164)
#define ST_v197	((void*)startLabel+188)
#define ST_v195	((void*)startLabel+215)
extern Node TM_Prelude[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v196)
,};
Node FN_Prelude_46Eq_46Prelude_46Char_46_61_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,EQ_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 40003
, useLabel(ST_v195)
,	/* CT_v196: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Char_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Char_46_61_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v198)
,};
Node FN_Prelude_46Eq_46Prelude_46Char_46_47_61[] = {
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
Node F0_Prelude_46Eq_46Prelude_46Char_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Char_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, bytes2word(0,0,0,0)
, useLabel(CT_v200)
,};
Node FN_Prelude_46Eq_46Prelude_46Char[] = {
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
Node CF_Prelude_46Eq_46Prelude_46Char[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Char))
, useLabel(F0_Prelude_46Eq_46Prelude_46Char_46_47_61)
, useLabel(F0_Prelude_46Eq_46Prelude_46Char_46_61_61)
,	/* ST_v199: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,67)
,	/* ST_v197: (byte 4) */
  bytes2word(104,97,114,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,67)
, bytes2word(104,97,114,46)
,	/* ST_v195: (byte 3) */
  bytes2word(47,61,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(113,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,67,104)
, bytes2word(97,114,46,61)
, bytes2word(61,0,0,0)
,};
