#include "newmacros.h"
#include "runtime.h"

#define v172	((void*)startLabel+80)
#define CT_v179	((void*)startLabel+160)
#define ST_v175	((void*)startLabel+200)
#define PS_v177	((void*)startLabel+220)
#define PS_v176	((void*)startLabel+232)
#define PS_v178	((void*)startLabel+244)
#define PS_v174	((void*)startLabel+256)
extern Node FN_Prelude_46showChar[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46_46[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46showChar[];
extern Node PC_Prelude_46_46[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v179)
,};
Node FN_Prelude_46showParen[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_P1)
, bytes2word(38,JUMPFALSE,62,0)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(HEAP_CHAR_P1,40,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_CHAR_P1,41)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,13,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
,	/* v172: (byte 4) */
  bytes2word(31,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v178)
, 0
, 0
, 0
, 0
, useLabel(PS_v177)
, 0
, 0
, 0
, 0
, useLabel(PS_v176)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v175)
,	/* CT_v179: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46showParen[] = {
  CAPTAG(useLabel(FN_Prelude_46showParen),2)
, useLabel(PS_v174)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_46))
,};
Node PP_Prelude_46showParen[] = {
 };
Node PC_Prelude_46showParen[] = {
 	/* ST_v175: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,104,111,119)
, bytes2word(80,97,114,101)
, bytes2word(110,0,0,0)
,	/* PS_v177: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46showParen)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v176: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46showParen)
, useLabel(PC_Prelude_46showChar)
,	/* PS_v178: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46showParen)
, useLabel(PC_Prelude_46_46)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46showParen)
, useLabel(PC_Prelude_46showParen)
,};
