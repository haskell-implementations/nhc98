#include "newmacros.h"
#include "runtime.h"

#define CT_v191	((void*)startLabel+24)
#define CT_v192	((void*)startLabel+60)
#define CT_v193	((void*)startLabel+100)

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v191)
,};
Node FN_Prelude_46Eq_46Prelude_46Float_46_47_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NE_F,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v191: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Float_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Float_46_47_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v192)
,};
Node FN_Prelude_46Eq_46Prelude_46Float_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,EQ_F,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v192: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Float_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Float_46_61_61),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v193)
,};
Node FN_Prelude_46Eq_46Prelude_46Float[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v193: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Prelude_46Float[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Float))
, useLabel(F0_Prelude_46Eq_46Prelude_46Float_46_47_61)
, useLabel(F0_Prelude_46Eq_46Prelude_46Float_46_61_61)
,};
