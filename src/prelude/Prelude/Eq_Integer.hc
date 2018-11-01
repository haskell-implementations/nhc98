#include "newmacros.h"
#include "runtime.h"

#define CT_v187	((void*)startLabel+24)
#define CT_v188	((void*)startLabel+64)
#define CT_v189	((void*)startLabel+108)
extern Node FN_Prelude_46primIntegerNe[];
extern Node FN_Prelude_46primIntegerEq[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v187)
,};
Node FN_Prelude_46Eq_46Prelude_46Integer_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v187: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Integer_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerNe))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v188)
,};
Node FN_Prelude_46Eq_46Prelude_46Integer_46_61_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v188: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Integer_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer_46_61_61),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerEq))
, bytes2word(0,0,0,0)
, useLabel(CT_v189)
,};
Node FN_Prelude_46Eq_46Prelude_46Integer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v189: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer))
, useLabel(F0_Prelude_46Eq_46Prelude_46Integer_46_47_61)
, useLabel(F0_Prelude_46Eq_46Prelude_46Integer_46_61_61)
,};
