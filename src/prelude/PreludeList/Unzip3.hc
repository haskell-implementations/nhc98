#include "newmacros.h"
#include "runtime.h"

#define CT_v223	((void*)startLabel+44)
#define FN_LAMBDA221	((void*)startLabel+76)
#define CT_v227	((void*)startLabel+140)
#define F0_LAMBDA221	((void*)startLabel+148)
#define FN_LAMBDA220	((void*)startLabel+176)
#define CT_v228	((void*)startLabel+188)
#define F0_LAMBDA220	((void*)startLabel+196)
#define FN_LAMBDA219	((void*)startLabel+208)
#define CT_v229	((void*)startLabel+220)
#define F0_LAMBDA219	((void*)startLabel+228)
#define FN_LAMBDA218	((void*)startLabel+240)
#define CT_v230	((void*)startLabel+252)
#define F0_LAMBDA218	((void*)startLabel+260)
#define FN_LAMBDA217	((void*)startLabel+272)
#define CT_v234	((void*)startLabel+300)
#define F0_LAMBDA217	((void*)startLabel+308)
extern Node FN_Prelude_46foldr[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v223)
,};
Node FN_Prelude_46unzip3[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,9)
, bytes2word(HEAP_OFF_N1,6,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,3,0)
, CONSTR(0,0,0)
,	/* CT_v223: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46unzip3[] = {
  VAPTAG(useLabel(FN_Prelude_46unzip3))
, CAPTAG(useLabel(FN_LAMBDA221),2)
, CAPTAG(useLabel(FN_Prelude_46foldr),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v227)
,	/* FN_LAMBDA221: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,3,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,7,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,4,HEAP_P1)
, bytes2word(0,HEAP_CVAL_N1,1,HEAP_P1)
, bytes2word(5,HEAP_I1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,6,HEAP_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,6)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,3,0)
, CONSTR(1,2,0)
,	/* CT_v227: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA221: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA221),2)
, VAPTAG(useLabel(FN_LAMBDA217))
, VAPTAG(useLabel(FN_LAMBDA218))
, VAPTAG(useLabel(FN_LAMBDA219))
, VAPTAG(useLabel(FN_LAMBDA220))
, bytes2word(1,0,0,1)
, useLabel(CT_v228)
,	/* FN_LAMBDA220: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v228: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA220: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA220),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v229)
,	/* FN_LAMBDA219: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v229: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA219: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA219),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v230)
,	/* FN_LAMBDA218: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v230: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA218: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA218),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v234)
,	/* FN_LAMBDA217: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,3,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
,	/* CT_v234: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA217: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA217),1)
,};
