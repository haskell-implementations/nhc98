#include "newmacros.h"
#include "runtime.h"

#define CT_v221	((void*)startLabel+256)
#define CT_v225	((void*)startLabel+396)
#define ST_v223	((void*)startLabel+436)
#define ST_v213	((void*)startLabel+464)
#define PS_v217	((void*)startLabel+504)
#define PS_v219	((void*)startLabel+516)
#define PS_v212	((void*)startLabel+528)
#define PS_v215	((void*)startLabel+540)
#define PS_v220	((void*)startLabel+552)
#define PS_v218	((void*)startLabel+564)
#define PS_v214	((void*)startLabel+576)
#define PS_v222	((void*)startLabel+588)
#define PS_v224	((void*)startLabel+600)
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
extern Node PM_Prelude[];
extern Node PC_Ratio_46_37[];
extern Node PC_Prelude_46_94_94[];
extern Node PC_Prelude_46RealFloat_46Prelude_46Float_46decodeFloat[];
extern Node PC_Prelude_46Num_46Ratio_46Ratio_46_42[];
extern Node PC_Prelude_46Fractional_46Ratio_46Ratio[];
extern Node PC_Prelude_46RealFloat_46Prelude_46Float_46floatRadix[];
extern Node PC_Prelude_463[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v221)
,};
Node FN_Prelude_46Real_46Prelude_46Float_46toRational[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,EVAL,NEEDHEAP_P1)
, bytes2word(39,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,10)
, bytes2word(HEAP_P1,0,HEAP_CADR_N1,23)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,28)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,10,HEAP_I2,HEAP_CADR_N1)
, bytes2word(23,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(33,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,19,HEAP_CVAL_P1,13)
, bytes2word(HEAP_OFF_N1,15,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_N1,38)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,37,HEAP_OFF_N1)
, bytes2word(16,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v220)
, 0
, 0
, 0
, 0
, useLabel(PS_v219)
, 0
, 0
, 0
, 0
, useLabel(PS_v218)
, 0
, 0
, 0
, 0
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 1
, useLabel(PS_v217)
, 0
, 0
, 0
, 0
, useLabel(PS_v215)
, 0
, 0
, 0
, 0
, useLabel(PS_v214)
, 0
, 0
, 0
, 0
, 60005
, useLabel(ST_v213)
,	/* CT_v221: (byte 0) */
  HW(8,1)
, 0
,};
Node F0_Prelude_46Real_46Prelude_46Float_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Float_46toRational),1)
, useLabel(PS_v212)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Float_46floatRadix))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Float_46decodeFloat))
, VAPTAG(useLabel(FN_Ratio_46_37))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_94_94))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_42))
, bytes2word(0,0,0,0)
, useLabel(CT_v225)
,};
Node FN_Prelude_46Real_46Prelude_46Float[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v224)
, 0
, 0
, 0
, 0
, CONSTR(0,3,0)
, 0
, 0
, 0
, 0
, 50011
, useLabel(ST_v223)
,	/* CT_v225: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Prelude_46Real_46Prelude_46Float[] = {
  VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Float))
, useLabel(PS_v222)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Num_46Prelude_46Float)
, useLabel(CF_Prelude_46Ord_46Prelude_46Float)
, useLabel(F0_Prelude_46Real_46Prelude_46Float_46toRational)
,};
Node PP_Prelude_46Real_46Prelude_46Float[] = {
 };
Node PC_Prelude_46Real_46Prelude_46Float[] = {
 	/* ST_v223: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,70,108,111)
, bytes2word(97,116,0,0)
,};
Node PP_Prelude_46Real_46Prelude_46Float_46toRational[] = {
 };
Node PC_Prelude_46Real_46Prelude_46Float_46toRational[] = {
 	/* ST_v213: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,70,108,111)
, bytes2word(97,116,46,116)
, bytes2word(111,82,97,116)
, bytes2word(105,111,110,97)
, bytes2word(108,0,0,0)
,	/* PS_v217: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Real_46Prelude_46Float_46toRational)
, useLabel(PC_Ratio_46_37)
,	/* PS_v219: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Real_46Prelude_46Float_46toRational)
, useLabel(PC_Prelude_46_94_94)
,	/* PS_v212: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Real_46Prelude_46Float_46toRational)
, useLabel(PC_Prelude_46Real_46Prelude_46Float_46toRational)
,	/* PS_v215: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Real_46Prelude_46Float_46toRational)
, useLabel(PC_Prelude_46RealFloat_46Prelude_46Float_46decodeFloat)
,	/* PS_v220: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Real_46Prelude_46Float_46toRational)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46_42)
,	/* PS_v218: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Real_46Prelude_46Float_46toRational)
, useLabel(PC_Prelude_46Fractional_46Ratio_46Ratio)
,	/* PS_v214: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Real_46Prelude_46Float_46toRational)
, useLabel(PC_Prelude_46RealFloat_46Prelude_46Float_46floatRadix)
,	/* PS_v222: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Real_46Prelude_46Float)
, useLabel(PC_Prelude_46Real_46Prelude_46Float)
,	/* PS_v224: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Real_46Prelude_46Float)
, useLabel(PC_Prelude_463)
,};
