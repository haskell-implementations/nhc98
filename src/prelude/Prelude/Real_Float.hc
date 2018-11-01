#include "newmacros.h"
#include "runtime.h"

#define CT_v213	((void*)startLabel+72)
#define CT_v214	((void*)startLabel+148)
extern Node FN_Prelude_46RealFloat_46Prelude_46Float_46floatRadix[];
extern Node FN_Prelude_46RealFloat_46Prelude_46Float_46decodeFloat[];
extern Node FN_Ratio_46_37[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node FN_Prelude_46Fractional_46Ratio_46Ratio[];
extern Node FN_Prelude_46_94_94[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio_46_42[];
extern Node CF_Prelude_46Num_46Prelude_46Float[];
extern Node CF_Prelude_46Ord_46Prelude_46Float[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v213)
,};
Node FN_Prelude_46Real_46Prelude_46Float_46toRational[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_P1,0,HEAP_CADR_N1)
, bytes2word(2,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_I2,HEAP_CADR_N1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,7,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,7,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,17,HEAP_OFF_N1)
, bytes2word(8,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v213: (byte 0) */
  HW(8,1)
, 0
,};
Node F0_Prelude_46Real_46Prelude_46Float_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Float_46toRational),1)
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Float_46floatRadix))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Float_46decodeFloat))
, VAPTAG(useLabel(FN_Ratio_46_37))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_94_94))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_42))
, bytes2word(0,0,0,0)
, useLabel(CT_v214)
,};
Node FN_Prelude_46Real_46Prelude_46Float[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
,	/* CT_v214: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Prelude_46Real_46Prelude_46Float[] = {
  VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Float))
, useLabel(CF_Prelude_46Num_46Prelude_46Float)
, useLabel(CF_Prelude_46Ord_46Prelude_46Float)
, useLabel(F0_Prelude_46Real_46Prelude_46Float_46toRational)
,};
