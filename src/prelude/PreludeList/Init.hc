#include "newmacros.h"
#include "runtime.h"

#define v177	((void*)startLabel+18)
#define v178	((void*)startLabel+25)
#define v184	((void*)startLabel+36)
#define v182	((void*)startLabel+40)
#define v179	((void*)startLabel+45)
#define CT_v185	((void*)startLabel+68)
#define FN_LAMBDA174	((void*)startLabel+100)
#define CT_v187	((void*)startLabel+120)
#define CF_LAMBDA174	((void*)startLabel+128)
#define ST_v186	((void*)startLabel+132)
extern Node FN_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v185)
,};
Node FN_Prelude_46init[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v177: (byte 2) */
  bytes2word(TOP(11),BOT(11),POP_I1,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
,	/* v178: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v184: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v182: (byte 4) */
  bytes2word(POP_I1,JUMP,7,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v179: (byte 1) */
  bytes2word(RETURN,HEAP_CVAL_I5,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_I1,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v185: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46init[] = {
  CAPTAG(useLabel(FN_Prelude_46init),1)
, VAPTAG(useLabel(FN_LAMBDA174))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_Prelude_46init))
, bytes2word(0,0,0,0)
, useLabel(CT_v187)
,	/* FN_LAMBDA174: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v186)
,	/* CT_v187: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA174: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA174))
,	/* ST_v186: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,76)
, bytes2word(105,115,116,46)
, bytes2word(105,110,105,116)
, bytes2word(58,32,101,109)
, bytes2word(112,116,121,32)
, bytes2word(108,105,115,116)
, bytes2word(0,0,0,0)
,};
