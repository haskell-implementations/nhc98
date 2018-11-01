#include "newmacros.h"
#include "runtime.h"

#define CT_v214	((void*)startLabel+84)
#define CT_v216	((void*)startLabel+168)
#define ST_v215	((void*)startLabel+192)
#define ST_v212	((void*)startLabel+220)
extern Node TM_Prelude[];
extern Node FN_Prelude_46RealFloat_46Prelude_46Double_46floatRadix[];
extern Node FN_Prelude_46RealFloat_46Prelude_46Double_46decodeFloat[];
extern Node FN_Ratio_46_37[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node FN_Prelude_46Fractional_46Ratio_46Ratio[];
extern Node FN_Prelude_46_94_94[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio_46_42[];
extern Node CF_Prelude_46Num_46Prelude_46Double[];
extern Node CF_Prelude_46Ord_46Prelude_46Double[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v214)
,};
Node FN_Prelude_46Real_46Prelude_46Double_46toRational[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_P1,0,HEAP_CADR_N1)
, bytes2word(4,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_I2,HEAP_CADR_N1,4,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,7,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,7,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,17,HEAP_OFF_N1)
, bytes2word(8,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
, 60005
, useLabel(ST_v212)
,	/* CT_v214: (byte 0) */
  HW(8,1)
, 0
,};
Node F0_Prelude_46Real_46Prelude_46Double_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Double_46toRational),1)
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46floatRadix))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46decodeFloat))
, VAPTAG(useLabel(FN_Ratio_46_37))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_94_94))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_42))
, bytes2word(0,0,0,0)
, useLabel(CT_v216)
,};
Node FN_Prelude_46Real_46Prelude_46Double[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
, 50011
, useLabel(ST_v215)
,	/* CT_v216: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Prelude_46Real_46Prelude_46Double[] = {
  VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Double))
, useLabel(CF_Prelude_46Num_46Prelude_46Double)
, useLabel(CF_Prelude_46Ord_46Prelude_46Double)
, useLabel(F0_Prelude_46Real_46Prelude_46Double_46toRational)
,	/* ST_v215: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
,	/* ST_v212: (byte 4) */
  bytes2word(98,108,101,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
, bytes2word(98,108,101,46)
, bytes2word(116,111,82,97)
, bytes2word(116,105,111,110)
, bytes2word(97,108,0,0)
,};
