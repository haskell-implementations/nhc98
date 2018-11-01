#include "newmacros.h"
#include "runtime.h"

#define FN_NonStdEval_46cEvaluating	((void*)startLabel+12)
#define CT_v177	((void*)startLabel+40)
#define F0_NonStdEval_46cEvaluating	((void*)startLabel+48)
#define CT_v179	((void*)startLabel+96)
#define FN_NonStdEval_46cEvaluated	((void*)startLabel+120)
#define CT_v181	((void*)startLabel+148)
#define F0_NonStdEval_46cEvaluated	((void*)startLabel+156)
#define CT_v183	((void*)startLabel+204)
#define ST_v175	((void*)startLabel+220)
#define ST_v180	((void*)startLabel+231)
#define ST_v176	((void*)startLabel+253)
#define ST_v182	((void*)startLabel+276)
#define ST_v178	((void*)startLabel+297)
extern Node TM_NonStdEval[];
extern void *cEvaluating();
extern void *cEvaluated();

static Node startLabel[] = {
  42
, bytes2word(1,0,0,1)
, useLabel(CT_v177)
,	/* FN_NonStdEval_46cEvaluating: (byte 0) */
  useLabel(TM_NonStdEval)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(cEvaluating)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v176)
,	/* CT_v177: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NonStdEval_46cEvaluating: (byte 0) */
  CAPTAG(useLabel(FN_NonStdEval_46cEvaluating),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v179)
,};
Node FN_NonStdEval_46evaluating[] = {
  useLabel(TM_NonStdEval)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 100001
, useLabel(ST_v178)
,	/* CT_v179: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NonStdEval_46evaluating[] = {
  CAPTAG(useLabel(FN_NonStdEval_46evaluating),1)
, VAPTAG(useLabel(FN_NonStdEval_46cEvaluating))
, bytes2word(1,0,0,1)
, useLabel(CT_v181)
,	/* FN_NonStdEval_46cEvaluated: (byte 0) */
  useLabel(TM_NonStdEval)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(cEvaluated)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 30001
, useLabel(ST_v180)
,	/* CT_v181: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NonStdEval_46cEvaluated: (byte 0) */
  CAPTAG(useLabel(FN_NonStdEval_46cEvaluated),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v183)
,};
Node FN_NonStdEval_46evaluated[] = {
  useLabel(TM_NonStdEval)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 90001
, useLabel(ST_v182)
,	/* CT_v183: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NonStdEval_46evaluated[] = {
  CAPTAG(useLabel(FN_NonStdEval_46evaluated),1)
, VAPTAG(useLabel(FN_NonStdEval_46cEvaluated))
,};
Node PM_NonStdEval[] = {
 	/* ST_v175: (byte 0) */
  bytes2word(78,111,110,83)
, bytes2word(116,100,69,118)
,	/* ST_v180: (byte 3) */
  bytes2word(97,108,0,78)
, bytes2word(111,110,83,116)
, bytes2word(100,69,118,97)
, bytes2word(108,46,99,69)
, bytes2word(118,97,108,117)
, bytes2word(97,116,101,100)
,	/* ST_v176: (byte 1) */
  bytes2word(0,78,111,110)
, bytes2word(83,116,100,69)
, bytes2word(118,97,108,46)
, bytes2word(99,69,118,97)
, bytes2word(108,117,97,116)
,	/* ST_v182: (byte 4) */
  bytes2word(105,110,103,0)
, bytes2word(78,111,110,83)
, bytes2word(116,100,69,118)
, bytes2word(97,108,46,101)
, bytes2word(118,97,108,117)
, bytes2word(97,116,101,100)
,	/* ST_v178: (byte 1) */
  bytes2word(0,78,111,110)
, bytes2word(83,116,100,69)
, bytes2word(118,97,108,46)
, bytes2word(101,118,97,108)
, bytes2word(117,97,116,105)
, bytes2word(110,103,0,0)
,};
