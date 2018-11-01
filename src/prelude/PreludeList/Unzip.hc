#include "newmacros.h"
#include "runtime.h"

#define CT_v201	((void*)startLabel+40)
#define FN_LAMBDA199	((void*)startLabel+72)
#define CT_v205	((void*)startLabel+124)
#define F0_LAMBDA199	((void*)startLabel+132)
#define FN_LAMBDA198	((void*)startLabel+156)
#define CT_v206	((void*)startLabel+168)
#define F0_LAMBDA198	((void*)startLabel+176)
#define FN_LAMBDA197	((void*)startLabel+188)
#define CT_v207	((void*)startLabel+200)
#define F0_LAMBDA197	((void*)startLabel+208)
#define FN_LAMBDA196	((void*)startLabel+220)
#define CT_v211	((void*)startLabel+248)
#define F0_LAMBDA196	((void*)startLabel+256)
extern Node FN_Prelude_46foldr[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v201)
,};
Node FN_Prelude_46unzip[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
,	/* CT_v201: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46unzip[] = {
  VAPTAG(useLabel(FN_Prelude_46unzip))
, CAPTAG(useLabel(FN_LAMBDA199),2)
, CAPTAG(useLabel(FN_Prelude_46foldr),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v205)
,	/* FN_LAMBDA199: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,3,HEAP_P1,0)
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(1,2,0)
,	/* CT_v205: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA199: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA199),2)
, VAPTAG(useLabel(FN_LAMBDA196))
, VAPTAG(useLabel(FN_LAMBDA197))
, VAPTAG(useLabel(FN_LAMBDA198))
, bytes2word(1,0,0,1)
, useLabel(CT_v206)
,	/* FN_LAMBDA198: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v206: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA198: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA198),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v207)
,	/* FN_LAMBDA197: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v207: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA197: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA197),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v211)
,	/* FN_LAMBDA196: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v211: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA196: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA196),1)
,};
