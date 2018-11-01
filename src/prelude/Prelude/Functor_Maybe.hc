#include "newmacros.h"
#include "runtime.h"

#define v190	((void*)startLabel+22)
#define v191	((void*)startLabel+27)
#define CT_v193	((void*)startLabel+56)
#define CT_v194	((void*)startLabel+100)
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v193)
,};
Node FN_Prelude_46Functor_46Prelude_46Maybe_46fmap[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v190: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v191: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(1,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
,	/* CT_v193: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Functor_46Prelude_46Maybe_46fmap[] = {
  CAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46Maybe_46fmap),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,0,0)
, useLabel(CT_v194)
,};
Node FN_Prelude_46Functor_46Prelude_46Maybe[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v194: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Functor_46Prelude_46Maybe[] = {
  VAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46Maybe))
, useLabel(F0_Prelude_46Functor_46Prelude_46Maybe_46fmap)
,};
