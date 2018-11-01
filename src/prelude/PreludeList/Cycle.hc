#include "newmacros.h"
#include "runtime.h"

#define v175	((void*)startLabel+18)
#define v174	((void*)startLabel+22)
#define v171	((void*)startLabel+29)
#define CT_v176	((void*)startLabel+44)
#define FN_LAMBDA169	((void*)startLabel+76)
#define CT_v178	((void*)startLabel+96)
#define CF_LAMBDA169	((void*)startLabel+104)
#define ST_v177	((void*)startLabel+108)
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46_43_43[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v176)
,};
Node FN_Prelude_46cycle[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v175: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v174: (byte 2) */
  bytes2word(9,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
,	/* v171: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,2,PUSH_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v176: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46cycle[] = {
  CAPTAG(useLabel(FN_Prelude_46cycle),1)
, VAPTAG(useLabel(FN_LAMBDA169))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v178)
,	/* FN_LAMBDA169: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v177)
,	/* CT_v178: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA169: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA169))
,	/* ST_v177: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(99,121,99,108)
, bytes2word(101,58,32,101)
, bytes2word(109,112,116,121)
, bytes2word(32,108,105,115)
, bytes2word(116,0,0,0)
,};
