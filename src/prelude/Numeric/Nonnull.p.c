#include "newmacros.h"
#include "runtime.h"

#define CT_v200	((void*)startLabel+228)
#define FN_LAMBDA191	((void*)startLabel+280)
#define v212	((void*)startLabel+296)
#define v208	((void*)startLabel+300)
#define v205	((void*)startLabel+325)
#define v201	((void*)startLabel+330)
#define CT_v215	((void*)startLabel+428)
#define F0_LAMBDA191	((void*)startLabel+436)
#define ST_v194	((void*)startLabel+456)
#define PP_LAMBDA191	((void*)startLabel+472)
#define PC_LAMBDA191	((void*)startLabel+472)
#define ST_v210	((void*)startLabel+472)
#define PS_v196	((void*)startLabel+500)
#define PS_v199	((void*)startLabel+512)
#define PS_v197	((void*)startLabel+524)
#define PS_v198	((void*)startLabel+536)
#define PS_v193	((void*)startLabel+548)
#define PS_v195	((void*)startLabel+560)
#define PS_v213	((void*)startLabel+572)
#define PS_v214	((void*)startLabel+584)
#define PS_v209	((void*)startLabel+596)
extern Node FN_Prelude_46span[];
extern Node FN_Prelude_46_95foldr[];
extern Node PM_Numeric[];
extern Node PC_Prelude_46span[];
extern Node PC_Prelude_46_95foldr[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_58[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v200)
,};
Node FN_Numeric_46nonnull[] = {
  bytes2word(NEEDHEAP_P1,38,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,17,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,34,HEAP_OFF_N1,18)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
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
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v196)
, 0
, 0
, 0
, 0
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, 50001
, useLabel(ST_v194)
,	/* CT_v200: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Numeric_46nonnull[] = {
  CAPTAG(useLabel(FN_Numeric_46nonnull),2)
, useLabel(PS_v193)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA191),2)
, VAPTAG(useLabel(FN_Prelude_46span))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v215)
,	/* FN_LAMBDA191: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v212: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v208: (byte 4) */
  bytes2word(POP_I1,JUMP,27,0)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I2,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,HEAP_ARG,2)
,	/* v205: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v201: (byte 2) */
  bytes2word(2,0,PUSH_ARG_I2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v214)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v213)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 50028
, useLabel(ST_v210)
,	/* CT_v215: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA191: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA191),2)
, useLabel(PS_v209)
, 0
, 0
, 0
,};
Node PP_Numeric_46nonnull[] = {
 };
Node PC_Numeric_46nonnull[] = {
 	/* ST_v194: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(110,111,110,110)
,	/* PP_LAMBDA191: (byte 4) */
 	/* PC_LAMBDA191: (byte 4) */
 	/* ST_v210: (byte 4) */
  bytes2word(117,108,108,0)
, bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(110,111,110,110)
, bytes2word(117,108,108,58)
, bytes2word(53,58,50,56)
, bytes2word(45,53,58,54)
, bytes2word(52,0,0,0)
,	/* PS_v196: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46nonnull)
, useLabel(PC_Prelude_46span)
,	/* PS_v199: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46nonnull)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46nonnull)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v198: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46nonnull)
, useLabel(PC_Prelude_46_58)
,	/* PS_v193: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46nonnull)
, useLabel(PC_Numeric_46nonnull)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46nonnull)
, useLabel(PC_LAMBDA191)
,	/* PS_v213: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA191)
, useLabel(PC_Prelude_462)
,	/* PS_v214: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA191)
, useLabel(PC_Prelude_46_58)
,	/* PS_v209: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA191)
, useLabel(PC_LAMBDA191)
,};
