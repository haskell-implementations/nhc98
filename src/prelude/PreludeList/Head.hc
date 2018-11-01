#include "newmacros.h"
#include "runtime.h"

#define v171	((void*)startLabel+18)
#define v172	((void*)startLabel+25)
#define CT_v174	((void*)startLabel+36)
#define FN_LAMBDA168	((void*)startLabel+64)
#define CT_v176	((void*)startLabel+84)
#define CF_LAMBDA168	((void*)startLabel+92)
#define ST_v175	((void*)startLabel+96)
extern Node FN_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v174)
,};
Node FN_Prelude_46head[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v171: (byte 2) */
  bytes2word(TOP(11),BOT(11),POP_I1,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
,	/* v172: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v174: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46head[] = {
  CAPTAG(useLabel(FN_Prelude_46head),1)
, VAPTAG(useLabel(FN_LAMBDA168))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v176)
,	/* FN_LAMBDA168: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v175)
,	/* CT_v176: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA168: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA168))
,	/* ST_v175: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,76)
, bytes2word(105,115,116,46)
, bytes2word(104,101,97,100)
, bytes2word(58,32,101,109)
, bytes2word(112,116,121,32)
, bytes2word(108,105,115,116)
, bytes2word(0,0,0,0)
,};
