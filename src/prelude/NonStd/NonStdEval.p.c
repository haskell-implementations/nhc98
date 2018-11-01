#include "newmacros.h"
#include "runtime.h"

#define PS_NonStdEval_46E	((void*)startLabel+20)
#define FN_NonStdEval_46cEvaluating	((void*)startLabel+40)
#define CT_v178	((void*)startLabel+64)
#define F0_NonStdEval_46cEvaluating	((void*)startLabel+72)
#define CT_v183	((void*)startLabel+200)
#define FN_NonStdEval_46cEvaluated	((void*)startLabel+240)
#define CT_v186	((void*)startLabel+264)
#define F0_NonStdEval_46cEvaluated	((void*)startLabel+272)
#define CT_v191	((void*)startLabel+400)
#define ST_v175	((void*)startLabel+432)
#define PP_NonStdEval_46cEvaluated	((void*)startLabel+443)
#define PC_NonStdEval_46cEvaluated	((void*)startLabel+443)
#define ST_v185	((void*)startLabel+443)
#define PP_NonStdEval_46cEvaluating	((void*)startLabel+465)
#define PC_NonStdEval_46cEvaluating	((void*)startLabel+465)
#define ST_v177	((void*)startLabel+465)
#define ST_v188	((void*)startLabel+488)
#define ST_v180	((void*)startLabel+512)
#define PS_v184	((void*)startLabel+536)
#define PS_v176	((void*)startLabel+548)
#define PS_v190	((void*)startLabel+560)
#define PS_v189	((void*)startLabel+572)
#define PS_v187	((void*)startLabel+584)
#define PS_v182	((void*)startLabel+596)
#define PS_v181	((void*)startLabel+608)
#define PS_v179	((void*)startLabel+620)
extern void *cEvaluating();
extern void *cEvaluated();

static Node startLabel[] = {
  42
,};
Node PP_NonStdEval_46E[] = {
 };
Node PC_NonStdEval_46E[] = {
  bytes2word(78,111,110,83)
, bytes2word(116,100,69,118)
, bytes2word(97,108,46,69)
, bytes2word(0,0,0,0)
,	/* PS_NonStdEval_46E: (byte 0) */
  useLabel(PP_NonStdEval_46E)
, useLabel(PP_NonStdEval_46E)
, useLabel(PC_NonStdEval_46E)
, bytes2word(1,0,0,1)
, useLabel(CT_v178)
,	/* FN_NonStdEval_46cEvaluating: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(cEvaluating)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v177)
,	/* CT_v178: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NonStdEval_46cEvaluating: (byte 0) */
  CAPTAG(useLabel(FN_NonStdEval_46cEvaluating),1)
, useLabel(PS_v176)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v183)
,};
Node FN_NonStdEval_46evaluating[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v182)
, 0
, 0
, 0
, 0
, useLabel(PS_v181)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v180)
,	/* CT_v183: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NonStdEval_46evaluating[] = {
  CAPTAG(useLabel(FN_NonStdEval_46evaluating),1)
, useLabel(PS_v179)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NonStdEval_46cEvaluating))
, bytes2word(1,0,0,1)
, useLabel(CT_v186)
,	/* FN_NonStdEval_46cEvaluated: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(cEvaluated)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 30001
, useLabel(ST_v185)
,	/* CT_v186: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NonStdEval_46cEvaluated: (byte 0) */
  CAPTAG(useLabel(FN_NonStdEval_46cEvaluated),1)
, useLabel(PS_v184)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v191)
,};
Node FN_NonStdEval_46evaluated[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v190)
, 0
, 0
, 0
, 0
, useLabel(PS_v189)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v188)
,	/* CT_v191: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NonStdEval_46evaluated[] = {
  CAPTAG(useLabel(FN_NonStdEval_46evaluated),1)
, useLabel(PS_v187)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NonStdEval_46cEvaluated))
,};
Node PM_NonStdEval[] = {
 	/* ST_v175: (byte 0) */
  bytes2word(78,111,110,83)
, bytes2word(116,100,69,118)
,	/* PP_NonStdEval_46cEvaluated: (byte 3) */
 	/* PC_NonStdEval_46cEvaluated: (byte 3) */
 	/* ST_v185: (byte 3) */
  bytes2word(97,108,0,78)
, bytes2word(111,110,83,116)
, bytes2word(100,69,118,97)
, bytes2word(108,46,99,69)
, bytes2word(118,97,108,117)
, bytes2word(97,116,101,100)
,	/* PP_NonStdEval_46cEvaluating: (byte 1) */
 	/* PC_NonStdEval_46cEvaluating: (byte 1) */
 	/* ST_v177: (byte 1) */
  bytes2word(0,78,111,110)
, bytes2word(83,116,100,69)
, bytes2word(118,97,108,46)
, bytes2word(99,69,118,97)
, bytes2word(108,117,97,116)
, bytes2word(105,110,103,0)
,};
Node PP_NonStdEval_46evaluated[] = {
 };
Node PC_NonStdEval_46evaluated[] = {
 	/* ST_v188: (byte 0) */
  bytes2word(78,111,110,83)
, bytes2word(116,100,69,118)
, bytes2word(97,108,46,101)
, bytes2word(118,97,108,117)
, bytes2word(97,116,101,100)
, bytes2word(0,0,0,0)
,};
Node PP_NonStdEval_46evaluating[] = {
 };
Node PC_NonStdEval_46evaluating[] = {
 	/* ST_v180: (byte 0) */
  bytes2word(78,111,110,83)
, bytes2word(116,100,69,118)
, bytes2word(97,108,46,101)
, bytes2word(118,97,108,117)
, bytes2word(97,116,105,110)
, bytes2word(103,0,0,0)
,	/* PS_v184: (byte 0) */
  useLabel(PM_NonStdEval)
, useLabel(PP_NonStdEval_46cEvaluated)
, useLabel(PC_NonStdEval_46cEvaluated)
,	/* PS_v176: (byte 0) */
  useLabel(PM_NonStdEval)
, useLabel(PP_NonStdEval_46cEvaluating)
, useLabel(PC_NonStdEval_46cEvaluating)
,	/* PS_v190: (byte 0) */
  useLabel(PM_NonStdEval)
, useLabel(PP_NonStdEval_46evaluated)
, useLabel(PC_NonStdEval_46cEvaluated)
,	/* PS_v189: (byte 0) */
  useLabel(PM_NonStdEval)
, useLabel(PP_NonStdEval_46evaluated)
, useLabel(PC_NonStdEval_46E)
,	/* PS_v187: (byte 0) */
  useLabel(PM_NonStdEval)
, useLabel(PP_NonStdEval_46evaluated)
, useLabel(PC_NonStdEval_46evaluated)
,	/* PS_v182: (byte 0) */
  useLabel(PM_NonStdEval)
, useLabel(PP_NonStdEval_46evaluating)
, useLabel(PC_NonStdEval_46cEvaluating)
,	/* PS_v181: (byte 0) */
  useLabel(PM_NonStdEval)
, useLabel(PP_NonStdEval_46evaluating)
, useLabel(PC_NonStdEval_46E)
,	/* PS_v179: (byte 0) */
  useLabel(PM_NonStdEval)
, useLabel(PP_NonStdEval_46evaluating)
, useLabel(PC_NonStdEval_46evaluating)
,};
