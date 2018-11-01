#include "newmacros.h"
#include "runtime.h"

#define CT_v175	((void*)startLabel+72)
#define FN_LAMBDA170	((void*)startLabel+116)
#define CT_v179	((void*)startLabel+160)
#define CF_LAMBDA170	((void*)startLabel+168)
#define ST_v178	((void*)startLabel+188)
#define ST_v173	((void*)startLabel+192)
#define PP_LAMBDA170	((void*)startLabel+209)
#define PC_LAMBDA170	((void*)startLabel+209)
#define ST_v177	((void*)startLabel+209)
#define PS_v174	((void*)startLabel+236)
#define PS_v172	((void*)startLabel+248)
#define PS_v176	((void*)startLabel+260)
extern Node FN_Prelude_46showsType[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46showsType[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v175)
,};
Node FN_Prelude_46showType[] = {
  bytes2word(NEEDHEAP_I32,PUSH_CVAL_P1,7,PUSH_ARG_I2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v174)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v173)
,	/* CT_v175: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46showType[] = {
  CAPTAG(useLabel(FN_Prelude_46showType),2)
, useLabel(PS_v172)
, 0
, 0
, 0
, useLabel(CF_LAMBDA170)
, VAPTAG(useLabel(FN_Prelude_46showsType))
, bytes2word(0,0,0,0)
, useLabel(CT_v179)
,	/* FN_LAMBDA170: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v178)
, 40040
, useLabel(ST_v177)
,	/* CT_v179: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA170: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA170))
, useLabel(PS_v176)
, 0
, 0
, 0
,	/* ST_v178: (byte 0) */
  bytes2word(0,0,0,0)
,};
Node PP_Prelude_46showType[] = {
 };
Node PC_Prelude_46showType[] = {
 	/* ST_v173: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,104,111,119)
, bytes2word(84,121,112,101)
,	/* PP_LAMBDA170: (byte 1) */
 	/* PC_LAMBDA170: (byte 1) */
 	/* ST_v177: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,115,104,111)
, bytes2word(119,84,121,112)
, bytes2word(101,58,52,58)
, bytes2word(52,48,45,52)
, bytes2word(58,52,49,0)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46showType)
, useLabel(PC_Prelude_46showsType)
,	/* PS_v172: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46showType)
, useLabel(PC_Prelude_46showType)
,	/* PS_v176: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA170)
, useLabel(PC_LAMBDA170)
,};
