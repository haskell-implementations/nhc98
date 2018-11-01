#include "newmacros.h"
#include "runtime.h"

#define CT_v305	((void*)startLabel+28)
#define CT_v306	((void*)startLabel+68)
#define CT_v307	((void*)startLabel+108)
#define CT_v308	((void*)startLabel+148)
#define CT_v309	((void*)startLabel+188)
#define CT_v310	((void*)startLabel+224)
#define CT_v311	((void*)startLabel+260)
#define CT_v312	((void*)startLabel+324)
#define CT_v313	((void*)startLabel+356)
#define CT_v314	((void*)startLabel+396)
#define CT_v315	((void*)startLabel+432)
#define CT_v316	((void*)startLabel+476)
#define CT_v317	((void*)startLabel+516)
#define CT_v318	((void*)startLabel+556)
#define CT_v319	((void*)startLabel+632)
extern Node FN_Prelude_46primEncodeDouble[];
extern Node FN_Prelude_46primDecodeDouble[];
extern Node FN_Prelude_46_95_46atan2[];
extern Node CF_Prelude_46RealFloat_46Prelude_46Double[];
extern Node FN_Prelude_46_95_46scaleFloat[];
extern Node FN_Prelude_46_95_46significand[];
extern Node FN_Prelude_46_95_46exponent[];
extern Node CF_Prelude_46RealFrac_46Prelude_46Double[];
extern Node CF_Prelude_46Floating_46Prelude_46Double[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v305)
,};
Node FN_Prelude_46RealFloat_46Prelude_46Double_46isIEEE[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v305: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46RealFloat_46Prelude_46Double_46isIEEE[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46isIEEE),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v306)
,};
Node FN_Prelude_46RealFloat_46Prelude_46Double_46isNegativeZero[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v306: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46RealFloat_46Prelude_46Double_46isNegativeZero[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46isNegativeZero),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v307)
,};
Node FN_Prelude_46RealFloat_46Prelude_46Double_46isDenormalized[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v307: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46RealFloat_46Prelude_46Double_46isDenormalized[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46isDenormalized),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v308)
,};
Node FN_Prelude_46RealFloat_46Prelude_46Double_46isInfinite[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v308: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46RealFloat_46Prelude_46Double_46isInfinite[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46isInfinite),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v309)
,};
Node FN_Prelude_46RealFloat_46Prelude_46Double_46isNaN[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v309: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46RealFloat_46Prelude_46Double_46isNaN[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46isNaN),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v310)
,};
Node FN_Prelude_46RealFloat_46Prelude_46Double_46encodeFloat[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v310: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46RealFloat_46Prelude_46Double_46encodeFloat[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46encodeFloat),2)
, VAPTAG(useLabel(FN_Prelude_46primEncodeDouble))
, bytes2word(1,0,0,1)
, useLabel(CT_v311)
,};
Node FN_Prelude_46RealFloat_46Prelude_46Double_46decodeFloat[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v311: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46RealFloat_46Prelude_46Double_46decodeFloat[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46decodeFloat),1)
, VAPTAG(useLabel(FN_Prelude_46primDecodeDouble))
, bytes2word(1,0,0,1)
, useLabel(CT_v312)
,};
Node FN_Prelude_46RealFloat_46Prelude_46Double_46floatRange[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CADR_N1,3,HEAP_CADR_N1)
, bytes2word(5,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 1024
, CONSTRW(1,0)
, -1073
, CONSTR(0,2,0)
,	/* CT_v312: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46RealFloat_46Prelude_46Double_46floatRange[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46floatRange),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v313)
,};
Node FN_Prelude_46RealFloat_46Prelude_46Double_46floatDigits[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_INT_P1,53)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v313: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46RealFloat_46Prelude_46Double_46floatDigits[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46floatDigits),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v314)
,};
Node FN_Prelude_46RealFloat_46Prelude_46Double_46floatRadix[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_CADR_N1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 2
,	/* CT_v314: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46RealFloat_46Prelude_46Double_46floatRadix[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46floatRadix),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v315)
,};
Node FN_Prelude_46RealFloat_46Prelude_46Double_46atan2[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v315: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46RealFloat_46Prelude_46Double_46atan2[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46atan2),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46atan2))
, useLabel(CF_Prelude_46RealFloat_46Prelude_46Double)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v316)
,};
Node FN_Prelude_46RealFloat_46Prelude_46Double_46scaleFloat[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v316: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46RealFloat_46Prelude_46Double_46scaleFloat[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46scaleFloat),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46scaleFloat))
, useLabel(CF_Prelude_46RealFloat_46Prelude_46Double)
, bytes2word(1,0,0,1)
, useLabel(CT_v317)
,};
Node FN_Prelude_46RealFloat_46Prelude_46Double_46significand[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v317: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46RealFloat_46Prelude_46Double_46significand[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46significand),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46significand))
, useLabel(CF_Prelude_46RealFloat_46Prelude_46Double)
, bytes2word(1,0,0,1)
, useLabel(CT_v318)
,};
Node FN_Prelude_46RealFloat_46Prelude_46Double_46exponent[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v318: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46RealFloat_46Prelude_46Double_46exponent[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46exponent),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46exponent))
, useLabel(CF_Prelude_46RealFloat_46Prelude_46Double)
, bytes2word(0,0,0,0)
, useLabel(CT_v319)
,};
Node FN_Prelude_46RealFloat_46Prelude_46Double[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_P1,15,HEAP_CVAL_P1)
, bytes2word(16,HEAP_CVAL_P1,17,HEAP_CVAL_P1)
, bytes2word(18,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,16,0)
,	/* CT_v319: (byte 0) */
  HW(16,0)
, 0
,};
Node CF_Prelude_46RealFloat_46Prelude_46Double[] = {
  VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double))
, useLabel(CF_Prelude_46RealFrac_46Prelude_46Double)
, useLabel(CF_Prelude_46Floating_46Prelude_46Double)
, useLabel(F0_Prelude_46RealFloat_46Prelude_46Double_46atan2)
, useLabel(F0_Prelude_46RealFloat_46Prelude_46Double_46isIEEE)
, useLabel(F0_Prelude_46RealFloat_46Prelude_46Double_46isNaN)
, useLabel(F0_Prelude_46RealFloat_46Prelude_46Double_46isDenormalized)
, useLabel(F0_Prelude_46RealFloat_46Prelude_46Double_46significand)
, useLabel(F0_Prelude_46RealFloat_46Prelude_46Double_46floatRange)
, useLabel(F0_Prelude_46RealFloat_46Prelude_46Double_46isInfinite)
, useLabel(F0_Prelude_46RealFloat_46Prelude_46Double_46isNegativeZero)
, useLabel(F0_Prelude_46RealFloat_46Prelude_46Double_46floatDigits)
, useLabel(F0_Prelude_46RealFloat_46Prelude_46Double_46decodeFloat)
, useLabel(F0_Prelude_46RealFloat_46Prelude_46Double_46encodeFloat)
, useLabel(F0_Prelude_46RealFloat_46Prelude_46Double_46scaleFloat)
, useLabel(F0_Prelude_46RealFloat_46Prelude_46Double_46exponent)
, useLabel(F0_Prelude_46RealFloat_46Prelude_46Double_46floatRadix)
,};
