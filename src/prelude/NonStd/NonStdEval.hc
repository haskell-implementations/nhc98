#include "newmacros.h"
#include "runtime.h"

#define FN_NonStdEval_46cEvaluating	((void*)startLabel+12)
#define CT_v176	((void*)startLabel+28)
#define F0_NonStdEval_46cEvaluating	((void*)startLabel+36)
#define CT_v177	((void*)startLabel+72)
#define FN_NonStdEval_46cEvaluated	((void*)startLabel+96)
#define CT_v178	((void*)startLabel+112)
#define F0_NonStdEval_46cEvaluated	((void*)startLabel+120)
#define CT_v179	((void*)startLabel+156)
extern void *cEvaluating();
extern void *cEvaluated();

static Node startLabel[] = {
  42
, bytes2word(1,0,0,1)
, useLabel(CT_v176)
,	/* FN_NonStdEval_46cEvaluating: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(cEvaluating)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v176: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NonStdEval_46cEvaluating: (byte 0) */
  CAPTAG(useLabel(FN_NonStdEval_46cEvaluating),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v177)
,};
Node FN_NonStdEval_46evaluating[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v177: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NonStdEval_46evaluating[] = {
  CAPTAG(useLabel(FN_NonStdEval_46evaluating),1)
, VAPTAG(useLabel(FN_NonStdEval_46cEvaluating))
, bytes2word(1,0,0,1)
, useLabel(CT_v178)
,	/* FN_NonStdEval_46cEvaluated: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(cEvaluated)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v178: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NonStdEval_46cEvaluated: (byte 0) */
  CAPTAG(useLabel(FN_NonStdEval_46cEvaluated),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v179)
,};
Node FN_NonStdEval_46evaluated[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v179: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NonStdEval_46evaluated[] = {
  CAPTAG(useLabel(FN_NonStdEval_46evaluated),1)
, VAPTAG(useLabel(FN_NonStdEval_46cEvaluated))
,};
