#include "newmacros.h"
#include "runtime.h"

#define CT_v234	((void*)startLabel+64)
#define FN_LAMBDA230	((void*)startLabel+104)
#define CT_v239	((void*)startLabel+184)
#define F0_LAMBDA230	((void*)startLabel+192)
#define FN_LAMBDA229	((void*)startLabel+244)
#define CT_v241	((void*)startLabel+308)
#define F0_LAMBDA229	((void*)startLabel+316)
#define ST_v233	((void*)startLabel+340)
#define ST_v240	((void*)startLabel+356)
#define ST_v237	((void*)startLabel+384)
extern Node TM_Numeric[];
extern Node FN_Numeric_46nonnull[];
extern Node FN_Prelude_46_95foldr[];
extern Node TMSUB_Numeric[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromIntegral[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46foldl1[];
extern Node FN_Prelude_46_42[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_43[];

static Node startLabel[] = {
  bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v234)
,};
Node FN_Numeric_46readInt[] = {
  useLabel(TM_Numeric)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_ARG,4,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,3,5,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,9)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 90001
, useLabel(ST_v233)
,	/* CT_v234: (byte 0) */
  HW(3,5)
, 0
,};
Node F0_Numeric_46readInt[] = {
  CAPTAG(useLabel(FN_Numeric_46readInt),5)
, CAPTAG(useLabel(FN_LAMBDA230),2)
, VAPTAG(useLabel(FN_Numeric_46nonnull))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v239)
,	/* FN_LAMBDA230: (byte 0) */
  useLabel(TMSUB_Numeric)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,2,1,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(4,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,17,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_IN3,HEAP_OFF_N1,4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 100005
, useLabel(ST_v237)
,	/* CT_v239: (byte 0) */
  HW(8,5)
, 0
,	/* F0_LAMBDA230: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA230),5)
, CAPTAG(useLabel(FN_LAMBDA229),2)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Prelude_46map))
, VAPTAG(useLabel(FN_Prelude_46foldl1))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v241)
,	/* FN_LAMBDA229: (byte 0) */
  useLabel(TMSUB_Numeric)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_ARG_ARG)
, bytes2word(3,2,PUSH_ARG,4)
, bytes2word(PUSH_I1,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG)
, bytes2word(4,ZAP_STACK_P1,3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 100015
, useLabel(ST_v240)
,	/* CT_v241: (byte 0) */
  HW(5,4)
, 0
,	/* F0_LAMBDA229: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA229),4)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_43))
,	/* ST_v233: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(114,101,97,100)
,	/* ST_v240: (byte 4) */
  bytes2word(73,110,116,0)
, bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(114,101,97,100)
, bytes2word(73,110,116,58)
, bytes2word(49,48,58,49)
, bytes2word(53,45,49,48)
,	/* ST_v237: (byte 4) */
  bytes2word(58,51,53,0)
, bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(114,101,97,100)
, bytes2word(73,110,116,58)
, bytes2word(49,48,58,53)
, bytes2word(45,49,49,58)
, bytes2word(51,55,0,0)
,};
