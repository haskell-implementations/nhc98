#include "newmacros.h"
#include "runtime.h"

#define v328	((void*)startLabel+111)
#define CT_v335	((void*)startLabel+208)
#define CT_v337	((void*)startLabel+312)
#define CT_v339	((void*)startLabel+368)
#define CT_v341	((void*)startLabel+424)
#define CT_v343	((void*)startLabel+480)
#define CT_v345	((void*)startLabel+548)
#define ST_v344	((void*)startLabel+588)
#define ST_v338	((void*)startLabel+620)
#define ST_v336	((void*)startLabel+660)
#define ST_v332	((void*)startLabel+698)
#define ST_v340	((void*)startLabel+745)
#define ST_v342	((void*)startLabel+783)
extern Node TM_Prelude[];
extern Node FN_Prelude_46RealFloat_46Prelude_46Double_46decodeFloat[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46_42[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46RealFloat_46Prelude_46Double_46floatRadix[];
extern Node FN_Prelude_46_94[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46negate[];
extern Node CF_Prelude_46Num_46Prelude_46Integer[];
extern Node FN_Prelude_46Integral_46Prelude_46Integer_46quotRem[];
extern Node FN_Prelude_46RealFloat_46Prelude_46Double_46encodeFloat[];
extern Node FN_Prelude_46_95_46floor[];
extern Node CF_Prelude_46RealFrac_46Prelude_46Double[];
extern Node FN_Prelude_46_95_46ceiling[];
extern Node FN_Prelude_46_95_46round[];
extern Node FN_Prelude_46_95_46truncate[];
extern Node CF_Prelude_46Real_46Prelude_46Double[];
extern Node CF_Prelude_46Fractional_46Prelude_46Double[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v335)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Double_46properFraction[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,EVAL,UNPACK,2)
, bytes2word(PUSH_INT_P1,0,PUSH_P1,2)
, bytes2word(EVAL,NEEDHEAP_P1,42,GE_W)
, bytes2word(JUMPFALSE,78,0,HEAP_CVAL_I4)
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
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,5)
,	/* v328: (byte 3) */
  bytes2word(HEAP_CADR_N1,7,RETURN,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(13,HEAP_I1,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,15,HEAP_I1)
, bytes2word(HEAP_OFF_N1,7,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(1,EVAL,NEEDHEAP_I32,UNPACK)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,16,HEAP_I1)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(2,0)
, 0
, 0
, 0
, CONSTR(0,2,0)
, 40005
, useLabel(ST_v332)
,	/* CT_v335: (byte 0) */
  HW(14,2)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Double_46properFraction[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Double_46properFraction),2)
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46decodeFloat))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46floatRadix))
, VAPTAG(useLabel(FN_Prelude_46_94))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46negate))
, useLabel(CF_Prelude_46Num_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46quotRem))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46encodeFloat))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v337)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Double_46floor[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30011
, useLabel(ST_v336)
,	/* CT_v337: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Double_46floor[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Double_46floor),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46floor))
, useLabel(CF_Prelude_46RealFrac_46Prelude_46Double)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v339)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Double_46ceiling[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30011
, useLabel(ST_v338)
,	/* CT_v339: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Double_46ceiling[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Double_46ceiling),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46ceiling))
, useLabel(CF_Prelude_46RealFrac_46Prelude_46Double)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v341)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Double_46round[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30011
, useLabel(ST_v340)
,	/* CT_v341: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Double_46round[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Double_46round),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46round))
, useLabel(CF_Prelude_46RealFrac_46Prelude_46Double)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v343)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Double_46truncate[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30011
, useLabel(ST_v342)
,	/* CT_v343: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Double_46truncate[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Double_46truncate),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46truncate))
, useLabel(CF_Prelude_46RealFrac_46Prelude_46Double)
, bytes2word(0,0,0,0)
, useLabel(CT_v345)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Double[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,7,0)
, 30011
, useLabel(ST_v344)
,	/* CT_v345: (byte 0) */
  HW(7,0)
, 0
,};
Node CF_Prelude_46RealFrac_46Prelude_46Double[] = {
  VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Double))
, useLabel(CF_Prelude_46Real_46Prelude_46Double)
, useLabel(CF_Prelude_46Fractional_46Prelude_46Double)
, useLabel(F0_Prelude_46RealFrac_46Prelude_46Double_46round)
, useLabel(F0_Prelude_46RealFrac_46Prelude_46Double_46truncate)
, useLabel(F0_Prelude_46RealFrac_46Prelude_46Double_46ceiling)
, useLabel(F0_Prelude_46RealFrac_46Prelude_46Double_46properFraction)
, useLabel(F0_Prelude_46RealFrac_46Prelude_46Double_46floor)
,	/* ST_v344: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
,	/* ST_v338: (byte 4) */
  bytes2word(98,108,101,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
, bytes2word(98,108,101,46)
, bytes2word(99,101,105,108)
,	/* ST_v336: (byte 4) */
  bytes2word(105,110,103,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
, bytes2word(98,108,101,46)
, bytes2word(102,108,111,111)
,	/* ST_v332: (byte 2) */
  bytes2word(114,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,108,70,114)
, bytes2word(97,99,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,68)
, bytes2word(111,117,98,108)
, bytes2word(101,46,112,114)
, bytes2word(111,112,101,114)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
,	/* ST_v340: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(108,70,114,97)
, bytes2word(99,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,68,111)
, bytes2word(117,98,108,101)
, bytes2word(46,114,111,117)
,	/* ST_v342: (byte 3) */
  bytes2word(110,100,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,108,70)
, bytes2word(114,97,99,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(68,111,117,98)
, bytes2word(108,101,46,116)
, bytes2word(114,117,110,99)
, bytes2word(97,116,101,0)
,};
