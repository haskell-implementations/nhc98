#include "newmacros.h"
#include "runtime.h"

#define v195	((void*)startLabel+26)
#define v196	((void*)startLabel+30)
#define CT_v199	((void*)startLabel+92)
#define FN_LAMBDA192	((void*)startLabel+132)
#define CT_v201	((void*)startLabel+156)
#define F0_LAMBDA192	((void*)startLabel+164)
#define FN_LAMBDA191	((void*)startLabel+176)
#define CT_v203	((void*)startLabel+200)
#define F0_LAMBDA191	((void*)startLabel+208)
#define ST_v197	((void*)startLabel+212)
#define ST_v202	((void*)startLabel+225)
#define ST_v200	((void*)startLabel+248)
extern Node TM_List[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46span[];
extern Node TMSUB_List[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v199)
,};
Node FN_List_46groupBy[] = {
  useLabel(TM_List)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v195: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v196: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_I2,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,6,HEAP_CVAL_N1)
, bytes2word(4,HEAP_P1,3,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,1)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(4,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v197)
,	/* CT_v199: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_List_46groupBy[] = {
  CAPTAG(useLabel(FN_List_46groupBy),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46span))
, VAPTAG(useLabel(FN_LAMBDA191))
, VAPTAG(useLabel(FN_LAMBDA192))
, VAPTAG(useLabel(FN_List_46groupBy))
, bytes2word(1,0,0,1)
, useLabel(CT_v201)
,	/* FN_LAMBDA192: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 60038
, useLabel(ST_v200)
,	/* CT_v201: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA192: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA192),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v203)
,	/* FN_LAMBDA191: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 60035
, useLabel(ST_v202)
,	/* CT_v203: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA191: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA191),1)
,	/* ST_v197: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,103,114,111)
, bytes2word(117,112,66,121)
,	/* ST_v202: (byte 1) */
  bytes2word(0,76,105,115)
, bytes2word(116,46,103,114)
, bytes2word(111,117,112,66)
, bytes2word(121,58,54,58)
, bytes2word(51,53,45,54)
,	/* ST_v200: (byte 4) */
  bytes2word(58,51,54,0)
, bytes2word(76,105,115,116)
, bytes2word(46,103,114,111)
, bytes2word(117,112,66,121)
, bytes2word(58,54,58,51)
, bytes2word(56,45,54,58)
, bytes2word(51,57,0,0)
,};
