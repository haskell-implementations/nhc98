#include "newmacros.h"
#include "runtime.h"

#define v178	((void*)startLabel+22)
#define v177	((void*)startLabel+26)
#define v174	((void*)startLabel+33)
#define CT_v179	((void*)startLabel+52)
#define FN_LAMBDA172	((void*)startLabel+88)
#define CT_v181	((void*)startLabel+108)
#define CF_LAMBDA172	((void*)startLabel+116)
#define ST_v180	((void*)startLabel+120)
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46min[];
extern Node FN_Prelude_46foldl1[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v179)
,};
Node FN_Prelude_46minimum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v178: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v177: (byte 2) */
  bytes2word(9,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
,	/* v174: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v179: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46minimum[] = {
  CAPTAG(useLabel(FN_Prelude_46minimum),2)
, VAPTAG(useLabel(FN_LAMBDA172))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_Prelude_46min))
, VAPTAG(useLabel(FN_Prelude_46foldl1))
, bytes2word(0,0,0,0)
, useLabel(CT_v181)
,	/* FN_LAMBDA172: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v180)
,	/* CT_v181: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA172: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA172))
,	/* ST_v180: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,76)
, bytes2word(105,115,116,46)
, bytes2word(109,105,110,105)
, bytes2word(109,117,109,58)
, bytes2word(32,101,109,112)
, bytes2word(116,121,32,108)
, bytes2word(105,115,116,0)
,};
