#include "newmacros.h"
#include "runtime.h"

#define v328	((void*)startLabel+108)
#define CT_v334	((void*)startLabel+188)
#define CT_v335	((void*)startLabel+280)
#define CT_v336	((void*)startLabel+324)
#define CT_v337	((void*)startLabel+368)
#define CT_v338	((void*)startLabel+412)
#define CT_v339	((void*)startLabel+472)
extern Node FN_Prelude_46RealFloat_46Prelude_46Float_46decodeFloat[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46_42[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46RealFloat_46Prelude_46Float_46floatRadix[];
extern Node FN_Prelude_46_94[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46negate[];
extern Node CF_Prelude_46Num_46Prelude_46Integer[];
extern Node FN_Prelude_46Integral_46Prelude_46Integer_46quotRem[];
extern Node FN_Prelude_46RealFloat_46Prelude_46Float_46encodeFloat[];
extern Node FN_Prelude_46_95_46floor[];
extern Node CF_Prelude_46RealFrac_46Prelude_46Float[];
extern Node FN_Prelude_46_95_46ceiling[];
extern Node FN_Prelude_46_95_46round[];
extern Node FN_Prelude_46_95_46truncate[];
extern Node CF_Prelude_46Real_46Prelude_46Float[];
extern Node CF_Prelude_46Fractional_46Prelude_46Float[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v334)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Float_46properFraction[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,EVAL,UNPACK,2)
, bytes2word(PUSH_INT_P1,0,PUSH_P1,2)
, bytes2word(EVAL,NEEDHEAP_P1,42,GE_W)
, bytes2word(JUMPFALSE,79,0,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,14,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,6,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,32)
, bytes2word(HEAP_OFF_N1,25,HEAP_OFF_N1,8)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
,	/* v328: (byte 4) */
  bytes2word(5,HEAP_CADR_N1,3,RETURN)
, bytes2word(HEAP_CVAL_P1,9,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,13,HEAP_I1,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,14,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,15)
, bytes2word(HEAP_I1,HEAP_OFF_N1,7,ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,16)
, bytes2word(HEAP_I1,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v334: (byte 0) */
  HW(14,2)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Float_46properFraction[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Float_46properFraction),2)
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Float_46decodeFloat))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Float_46floatRadix))
, VAPTAG(useLabel(FN_Prelude_46_94))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46negate))
, useLabel(CF_Prelude_46Num_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46quotRem))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Float_46encodeFloat))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v335)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Float_46floor[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v335: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Float_46floor[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Float_46floor),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46floor))
, useLabel(CF_Prelude_46RealFrac_46Prelude_46Float)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v336)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Float_46ceiling[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v336: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Float_46ceiling[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Float_46ceiling),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46ceiling))
, useLabel(CF_Prelude_46RealFrac_46Prelude_46Float)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v337)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Float_46round[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v337: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Float_46round[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Float_46round),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46round))
, useLabel(CF_Prelude_46RealFrac_46Prelude_46Float)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v338)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Float_46truncate[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v338: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Float_46truncate[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Float_46truncate),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46truncate))
, useLabel(CF_Prelude_46RealFrac_46Prelude_46Float)
, bytes2word(0,0,0,0)
, useLabel(CT_v339)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Float[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,7,0)
,	/* CT_v339: (byte 0) */
  HW(7,0)
, 0
,};
Node CF_Prelude_46RealFrac_46Prelude_46Float[] = {
  VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Float))
, useLabel(CF_Prelude_46Real_46Prelude_46Float)
, useLabel(CF_Prelude_46Fractional_46Prelude_46Float)
, useLabel(F0_Prelude_46RealFrac_46Prelude_46Float_46round)
, useLabel(F0_Prelude_46RealFrac_46Prelude_46Float_46truncate)
, useLabel(F0_Prelude_46RealFrac_46Prelude_46Float_46ceiling)
, useLabel(F0_Prelude_46RealFrac_46Prelude_46Float_46properFraction)
, useLabel(F0_Prelude_46RealFrac_46Prelude_46Float_46floor)
,};
