#include "newmacros.h"
#include "runtime.h"

#define v169	((void*)startLabel+18)
#define v170	((void*)startLabel+25)
#define CT_v172	((void*)startLabel+36)
#define FN_LAMBDA166	((void*)startLabel+64)
#define CT_v174	((void*)startLabel+84)
#define CF_LAMBDA166	((void*)startLabel+92)
#define ST_v173	((void*)startLabel+96)
extern Node FN_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v172)
,};
Node FN_Maybe_46fromJust[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v169: (byte 2) */
  bytes2word(TOP(11),BOT(11),POP_I1,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
,	/* v170: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,1,PUSH_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v172: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Maybe_46fromJust[] = {
  CAPTAG(useLabel(FN_Maybe_46fromJust),1)
, VAPTAG(useLabel(FN_LAMBDA166))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v174)
,	/* FN_LAMBDA166: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v173)
,	/* CT_v174: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA166: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA166))
,	/* ST_v173: (byte 0) */
  bytes2word(77,97,121,98)
, bytes2word(101,46,102,114)
, bytes2word(111,109,74,117)
, bytes2word(115,116,58,32)
, bytes2word(78,111,116,104)
, bytes2word(105,110,103,0)
,};
