#include "newmacros.h"
#include "runtime.h"

#define CT_v338	((void*)startLabel+88)
#define FN_LAMBDA326	((void*)startLabel+148)
#define CT_v339	((void*)startLabel+176)
#define F0_LAMBDA326	((void*)startLabel+184)
#define FN_LAMBDA325	((void*)startLabel+196)
#define CT_v340	((void*)startLabel+208)
#define F0_LAMBDA325	((void*)startLabel+216)
#define FN_LAMBDA324	((void*)startLabel+228)
#define CT_v341	((void*)startLabel+240)
#define F0_LAMBDA324	((void*)startLabel+248)
#define CT_v342	((void*)startLabel+280)
#define CT_v343	((void*)startLabel+328)
#define CT_v344	((void*)startLabel+376)
#define CT_v345	((void*)startLabel+424)
#define CT_v346	((void*)startLabel+516)
extern Node FN_Prelude_46quotRem[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromIntegral[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46RealFrac_46Ratio_46Ratio[];
extern Node FN_Prelude_46_95_46floor[];
extern Node FN_Prelude_46_95_46ceiling[];
extern Node FN_Prelude_46_95_46round[];
extern Node FN_Prelude_46_95_46truncate[];
extern Node FN_Prelude_46Real_46Ratio_46Ratio[];
extern Node FN_Prelude_46Fractional_46Ratio_46Ratio[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v338)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_I2,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,7)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,4,HEAP_I1,HEAP_CVAL_P1)
, bytes2word(11,HEAP_P1,0,HEAP_P1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v338: (byte 0) */
  HW(9,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction),3)
, VAPTAG(useLabel(FN_Prelude_46quotRem))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_LAMBDA324))
, VAPTAG(useLabel(FN_LAMBDA325))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA326))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v339)
,	/* FN_LAMBDA326: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,POP_I1)
, bytes2word(PUSH_ARG_I2,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v339: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA326: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA326),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v340)
,	/* FN_LAMBDA325: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v340: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA325: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA325),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v341)
,	/* FN_LAMBDA324: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v341: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA324: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA324),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v342)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46floor[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v342: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio_46floor[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46floor),3)
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46floor))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v343)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v343: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling),3)
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46ceiling))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v344)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46round[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v344: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio_46round[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46round),3)
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46round))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v345)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46truncate[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v345: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio_46truncate[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46truncate),3)
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46truncate))
, bytes2word(1,0,0,1)
, useLabel(CT_v346)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,7,HEAP_P1,6)
, bytes2word(HEAP_P1,5,HEAP_P1,4)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,7,0)
,	/* CT_v346: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio),1)
, VAPTAG(useLabel(FN_Prelude_46Real_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio))
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46round),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46truncate),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46floor),2)
,};
