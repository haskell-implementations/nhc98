#include "newmacros.h"
#include "runtime.h"

#define CT_v172	((void*)startLabel+48)
#define FN_LAMBDA169	((void*)startLabel+84)
#define CT_v174	((void*)startLabel+116)
#define F0_LAMBDA169	((void*)startLabel+124)
#define ST_v171	((void*)startLabel+128)
#define ST_v173	((void*)startLabel+144)
extern Node TM_Prelude[];
extern Node FN_Prelude_46flip[];
extern Node FN_Prelude_46foldl[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v172)
,};
Node FN_Prelude_46reverse[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v171)
,	/* CT_v172: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Prelude_46reverse[] = {
  VAPTAG(useLabel(FN_Prelude_46reverse))
, CAPTAG(useLabel(FN_LAMBDA169),2)
, CAPTAG(useLabel(FN_Prelude_46flip),2)
, CAPTAG(useLabel(FN_Prelude_46foldl),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v174)
,	/* FN_LAMBDA169: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 40032
, useLabel(ST_v173)
,	/* CT_v174: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA169: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA169),2)
,	/* ST_v171: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,118,101)
,	/* ST_v173: (byte 4) */
  bytes2word(114,115,101,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,118,101)
, bytes2word(114,115,101,58)
, bytes2word(52,58,51,50)
, bytes2word(0,0,0,0)
,};
