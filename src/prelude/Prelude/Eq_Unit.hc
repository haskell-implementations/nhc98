#include "newmacros.h"
#include "runtime.h"

#define CT_v185	((void*)startLabel+32)
#define CT_v186	((void*)startLabel+76)
#define CT_v187	((void*)startLabel+116)

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v185)
,};
Node FN_Prelude_46Eq_46_40_41_46_47_61[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v185: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46_40_41_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46_40_41_46_47_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v186)
,};
Node FN_Prelude_46Eq_46_40_41_46_61_61[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
,	/* CT_v186: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46_40_41_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46_40_41_46_61_61),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v187)
,};
Node FN_Prelude_46Eq_46_40_41[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v187: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46_40_41[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46_40_41))
, useLabel(F0_Prelude_46Eq_46_40_41_46_47_61)
, useLabel(F0_Prelude_46Eq_46_40_41_46_61_61)
,};
