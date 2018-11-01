#include "newmacros.h"
#include "runtime.h"

#define CT_v195	((void*)startLabel+24)
#define CT_v196	((void*)startLabel+60)
#define CT_v197	((void*)startLabel+108)
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v195)
,};
Node FN_Prelude_46Eq_46Prelude_46Char_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,EQ_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v195: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Char_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Char_46_61_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v196)
,};
Node FN_Prelude_46Eq_46Prelude_46Char_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v196: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Char_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Char_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, bytes2word(0,0,0,0)
, useLabel(CT_v197)
,};
Node FN_Prelude_46Eq_46Prelude_46Char[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v197: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Prelude_46Char[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Char))
, useLabel(F0_Prelude_46Eq_46Prelude_46Char_46_47_61)
, useLabel(F0_Prelude_46Eq_46Prelude_46Char_46_61_61)
,};
