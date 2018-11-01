#include "newmacros.h"
#include "runtime.h"

#define CT_v193	((void*)startLabel+52)
#define FN_LAMBDA191	((void*)startLabel+88)
#define v203	((void*)startLabel+104)
#define v201	((void*)startLabel+108)
#define v198	((void*)startLabel+123)
#define v194	((void*)startLabel+128)
#define CT_v204	((void*)startLabel+144)
#define F0_LAMBDA191	((void*)startLabel+152)
extern Node FN_Prelude_46span[];
extern Node FN_Prelude_46_95foldr[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v193)
,};
Node FN_Numeric_46nonnull[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v193: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Numeric_46nonnull[] = {
  CAPTAG(useLabel(FN_Numeric_46nonnull),2)
, CAPTAG(useLabel(FN_LAMBDA191),2)
, VAPTAG(useLabel(FN_Prelude_46span))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v204)
,	/* FN_LAMBDA191: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v203: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v201: (byte 4) */
  bytes2word(POP_I1,JUMP,17,0)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I2,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,4)
,	/* v198: (byte 3) */
  bytes2word(HEAP_ARG,2,RETURN,POP_P1)
,	/* v194: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v204: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA191: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA191),2)
,};
