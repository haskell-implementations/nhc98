#include "newmacros.h"
#include "runtime.h"

#define CT_v266	((void*)startLabel+44)
#define FN_Numeric_46Prelude_46162_46read_39	((void*)startLabel+80)
#define CT_v267	((void*)startLabel+128)
#define F0_Numeric_46Prelude_46162_46read_39	((void*)startLabel+136)
#define FN_LAMBDA264	((void*)startLabel+180)
#define v285	((void*)startLabel+194)
#define v275	((void*)startLabel+198)
#define v286	((void*)startLabel+212)
#define v279	((void*)startLabel+216)
#define v287	((void*)startLabel+226)
#define v283	((void*)startLabel+230)
#define v276	((void*)startLabel+252)
#define v272	((void*)startLabel+257)
#define v268	((void*)startLabel+262)
#define CT_v288	((void*)startLabel+272)
#define F0_LAMBDA264	((void*)startLabel+280)
#define FN_LAMBDA263	((void*)startLabel+312)
#define CT_v292	((void*)startLabel+352)
#define F0_LAMBDA263	((void*)startLabel+360)
#define FN_Numeric_46Prelude_46163_46read_39_39	((void*)startLabel+384)
#define CT_v293	((void*)startLabel+416)
#define F0_Numeric_46Prelude_46163_46read_39_39	((void*)startLabel+424)
#define FN_LAMBDA262	((void*)startLabel+452)
#define CT_v297	((void*)startLabel+480)
#define F0_LAMBDA262	((void*)startLabel+488)
#define FN_LAMBDA261	((void*)startLabel+516)
#define v307	((void*)startLabel+530)
#define v305	((void*)startLabel+534)
#define v302	((void*)startLabel+549)
#define v298	((void*)startLabel+554)
#define CT_v308	((void*)startLabel+572)
#define F0_LAMBDA261	((void*)startLabel+580)
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46readParen[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46negate[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v266)
,};
Node FN_Numeric_46readSigned[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,1,HEAP_CVAL_I4)
, bytes2word(HEAP_P1,0,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v266: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Numeric_46readSigned[] = {
  CAPTAG(useLabel(FN_Numeric_46readSigned),2)
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, CAPTAG(useLabel(FN_Numeric_46Prelude_46162_46read_39),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v267)
,	/* FN_Numeric_46Prelude_46162_46read_39: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_I5,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_N1,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,14)
, bytes2word(HEAP_OFF_N1,6,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v267: (byte 0) */
  HW(6,3)
, 0
,	/* F0_Numeric_46Prelude_46162_46read_39: (byte 0) */
  CAPTAG(useLabel(FN_Numeric_46Prelude_46162_46read_39),3)
, CAPTAG(useLabel(FN_Numeric_46Prelude_46163_46read_39_39),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA264),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v288)
,	/* FN_LAMBDA264: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v285: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v275: (byte 2) */
  bytes2word(61,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(45),BOT(45))
,	/* v286: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v279: (byte 4) */
  bytes2word(POP_I1,JUMP,38,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v287: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v283: (byte 2) */
  bytes2word(24,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v276: (byte 4) */
  bytes2word(5,HEAP_ARG,4,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v272: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v268: (byte 2) */
  bytes2word(2,0,PUSH_ARG,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v288: (byte 0) */
  HW(4,4)
, 0
,	/* F0_LAMBDA264: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA264),4)
, CAPTAG(useLabel(FN_LAMBDA263),2)
, CAPTAG(useLabel(FN_Numeric_46Prelude_46163_46read_39_39),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v292)
,	/* FN_LAMBDA263: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,0,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,3,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v292: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA263: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA263),3)
, VAPTAG(useLabel(FN_Prelude_46negate))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v293)
,	/* FN_Numeric_46Prelude_46163_46read_39_39: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v293: (byte 0) */
  HW(3,2)
, 0
,	/* F0_Numeric_46Prelude_46163_46read_39_39: (byte 0) */
  CAPTAG(useLabel(FN_Numeric_46Prelude_46163_46read_39_39),2)
, CAPTAG(useLabel(FN_LAMBDA262),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v297)
,	/* FN_LAMBDA262: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_I1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v297: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA262: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA262),3)
, CAPTAG(useLabel(FN_LAMBDA261),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v308)
,	/* FN_LAMBDA261: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v307: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v305: (byte 2) */
  bytes2word(17,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,0,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
,	/* v302: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v298: (byte 2) */
  bytes2word(2,0,PUSH_ARG_I3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v308: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA261: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA261),3)
,};
