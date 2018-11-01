#include "newmacros.h"
#include "runtime.h"

#define CT_v170	((void*)startLabel+80)
#define FN_LAMBDA164	((void*)startLabel+124)
#define CT_v174	((void*)startLabel+168)
#define CF_LAMBDA164	((void*)startLabel+176)
#define ST_v173	((void*)startLabel+196)
#define ST_v167	((void*)startLabel+224)
#define PP_LAMBDA164	((void*)startLabel+241)
#define PC_LAMBDA164	((void*)startLabel+241)
#define ST_v172	((void*)startLabel+241)
#define PS_v169	((void*)startLabel+268)
#define PS_v166	((void*)startLabel+280)
#define PS_v168	((void*)startLabel+292)
#define PS_v171	((void*)startLabel+304)
extern Node FN_Prelude_46error[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v170)
,};
Node FN_Prelude_46_95zap_95arg[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v169)
, 0
, 0
, 0
, 0
, useLabel(PS_v168)
, 0
, 0
, 0
, 0
, 30001
, useLabel(ST_v167)
,	/* CT_v170: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46_95zap_95arg[] = {
  VAPTAG(useLabel(FN_Prelude_46_95zap_95arg))
, useLabel(PS_v166)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA164))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v174)
,	/* FN_LAMBDA164: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v173)
, 30018
, useLabel(ST_v172)
,	/* CT_v174: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA164: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA164))
, useLabel(PS_v171)
, 0
, 0
, 0
,	/* ST_v173: (byte 0) */
  bytes2word(69,118,97,108)
, bytes2word(117,97,116,105)
, bytes2word(110,103,32,122)
, bytes2word(97,112,112,101)
, bytes2word(100,32,97,114)
, bytes2word(103,117,109,101)
, bytes2word(110,116,0,0)
,};
Node PP_Prelude_46_95zap_95arg[] = {
 };
Node PC_Prelude_46_95zap_95arg[] = {
 	/* ST_v167: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,122,97,112)
, bytes2word(95,97,114,103)
,	/* PP_LAMBDA164: (byte 1) */
 	/* PC_LAMBDA164: (byte 1) */
 	/* ST_v172: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,95,122,97)
, bytes2word(112,95,97,114)
, bytes2word(103,58,51,58)
, bytes2word(49,56,45,51)
, bytes2word(58,52,53,0)
,	/* PS_v169: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95zap_95arg)
, useLabel(PC_Prelude_46error)
,	/* PS_v166: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95zap_95arg)
, useLabel(PC_Prelude_46_95zap_95arg)
,	/* PS_v168: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95zap_95arg)
, useLabel(PC_LAMBDA164)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA164)
, useLabel(PC_LAMBDA164)
,};
