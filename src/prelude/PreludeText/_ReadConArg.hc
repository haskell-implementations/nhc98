#include "newmacros.h"
#include "runtime.h"

#define CT_v223	((void*)startLabel+24)
#define FN_LAMBDA221	((void*)startLabel+52)
#define CT_v224	((void*)startLabel+84)
#define F0_LAMBDA221	((void*)startLabel+92)
#define FN_LAMBDA220	((void*)startLabel+120)
#define CT_v228	((void*)startLabel+156)
#define F0_LAMBDA220	((void*)startLabel+164)
#define FN_LAMBDA219	((void*)startLabel+196)
#define CT_v232	((void*)startLabel+236)
#define F0_LAMBDA219	((void*)startLabel+244)
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46readsPrec[];
extern Node FN_NHC_46Internal_46_95apply2[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v223)
,};
Node FN_Prelude_46_95readConArg[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v223: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46_95readConArg[] = {
  CAPTAG(useLabel(FN_Prelude_46_95readConArg),2)
, CAPTAG(useLabel(FN_LAMBDA221),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v224)
,	/* FN_LAMBDA221: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,2,3)
, bytes2word(HEAP_CVAL_N1,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v224: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA221: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA221),3)
, CAPTAG(useLabel(FN_LAMBDA220),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v228)
,	/* FN_LAMBDA220: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_INT_P1)
, bytes2word(10,HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(6,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v228: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA220: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA220),3)
, CAPTAG(useLabel(FN_LAMBDA219),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v232)
,	/* FN_LAMBDA219: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v232: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA219: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA219),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
,};
