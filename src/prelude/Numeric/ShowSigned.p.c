#include "newmacros.h"
#include "runtime.h"

#define v193	((void*)startLabel+176)
#define CT_v207	((void*)startLabel+428)
#define ST_v196	((void*)startLabel+496)
#define PS_v199	((void*)startLabel+516)
#define PS_v206	((void*)startLabel+528)
#define PS_v203	((void*)startLabel+540)
#define PS_v205	((void*)startLabel+552)
#define PS_v201	((void*)startLabel+564)
#define PS_v204	((void*)startLabel+576)
#define PS_v198	((void*)startLabel+588)
#define PS_v195	((void*)startLabel+600)
#define PS_v200	((void*)startLabel+612)
#define PS_v197	((void*)startLabel+624)
#define PS_v202	((void*)startLabel+636)
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Real_46Prelude_46Ord[];
extern Node FN_Prelude_46_60[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62[];
extern Node FN_Prelude_46showChar[];
extern Node FN_Prelude_46negate[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46showParen[];
extern Node PM_Numeric[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46showParen[];
extern Node PC_Prelude_46showChar[];
extern Node PC_Prelude_46_46[];
extern Node PC_Prelude_46_60[];
extern Node PC_Prelude_46negate[];
extern Node PC_Prelude_46fromInteger[];
extern Node PC_Prelude_46Real_46Prelude_46Ord[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46Ord_46Prelude_46Int_46_62[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v207)
,};
Node FN_Numeric_46showSigned[] = {
  bytes2word(NEEDHEAP_P1,35,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CADR_N1,22)
, bytes2word(PUSH_P1,0,PUSH_ARG,4)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,SLIDE_P1)
, bytes2word(1,EVAL,NEEDHEAP_P1,59)
, bytes2word(JUMPFALSE,95,0,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,3)
, bytes2word(HEAP_INT_P1,6,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_CHAR_P1,45)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,15,HEAP_CVAL_N1,52)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(38,HEAP_OFF_N1,13,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,16,HEAP_CVAL_N1,57)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
,	/* v193: (byte 4) */
  bytes2word(57,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(PUSH_ARG,4,PUSH_ARG_I2,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG,4)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v206)
, 0
, 0
, 0
, 0
, useLabel(PS_v205)
, 0
, 0
, 0
, 0
, useLabel(PS_v204)
, 0
, 0
, 0
, 0
, useLabel(PS_v203)
, 0
, 0
, 0
, 0
, useLabel(PS_v202)
, 0
, 0
, 0
, 0
, useLabel(PS_v201)
, 0
, 0
, 0
, 0
, useLabel(PS_v200)
, 0
, 0
, 0
, 0
, CONSTRW(0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v199)
, 0
, 0
, 0
, 0
, useLabel(PS_v198)
, 0
, 0
, 0
, 0
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v196)
,	/* CT_v207: (byte 0) */
  HW(10,4)
, 0
,};
Node F0_Numeric_46showSigned[] = {
  CAPTAG(useLabel(FN_Numeric_46showSigned),4)
, useLabel(PS_v195)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord))
, VAPTAG(useLabel(FN_Prelude_46_60))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62))
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_Prelude_46negate))
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Prelude_46showParen))
,};
Node PP_Numeric_46showSigned[] = {
 };
Node PC_Numeric_46showSigned[] = {
 	/* ST_v196: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(115,104,111,119)
, bytes2word(83,105,103,110)
, bytes2word(101,100,0,0)
,	/* PS_v199: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showSigned)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v206: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showSigned)
, useLabel(PC_Prelude_46showParen)
,	/* PS_v203: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showSigned)
, useLabel(PC_Prelude_46showChar)
,	/* PS_v205: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showSigned)
, useLabel(PC_Prelude_46_46)
,	/* PS_v201: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showSigned)
, useLabel(PC_Prelude_46_60)
,	/* PS_v204: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showSigned)
, useLabel(PC_Prelude_46negate)
,	/* PS_v198: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showSigned)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showSigned)
, useLabel(PC_Numeric_46showSigned)
,	/* PS_v200: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showSigned)
, useLabel(PC_Prelude_46Real_46Prelude_46Ord)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showSigned)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v202: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showSigned)
, useLabel(PC_Prelude_46Ord_46Prelude_46Int_46_62)
,};
