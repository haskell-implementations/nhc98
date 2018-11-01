#include "newmacros.h"
#include "runtime.h"

#define CT_v172	((void*)startLabel+32)
#define FN_LAMBDA169	((void*)startLabel+64)
#define CT_v174	((void*)startLabel+96)
#define F0_LAMBDA169	((void*)startLabel+104)
#define ST_v171	((void*)startLabel+108)
#define ST_v173	((void*)startLabel+120)
extern Node TM_Prelude[];
extern Node FN_Prelude_46zipWith[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v172)
,};
Node FN_Prelude_46zip[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v171)
,	/* CT_v172: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46zip[] = {
  VAPTAG(useLabel(FN_Prelude_46zip))
, CAPTAG(useLabel(FN_LAMBDA169),2)
, CAPTAG(useLabel(FN_Prelude_46zipWith),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v174)
,	/* FN_LAMBDA169: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 40019
, useLabel(ST_v173)
,	/* CT_v174: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA169: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA169),2)
,	/* ST_v171: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* ST_v173: (byte 4) */
  bytes2word(122,105,112,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(122,105,112,58)
, bytes2word(52,58,49,57)
, bytes2word(45,52,58,50)
, bytes2word(49,0,0,0)
,};
