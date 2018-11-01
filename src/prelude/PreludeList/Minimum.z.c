#include "newmacros.h"
#include "runtime.h"

#define v179	((void*)startLabel+26)
#define v177	((void*)startLabel+30)
#define v174	((void*)startLabel+37)
#define CT_v180	((void*)startLabel+64)
#define FN_LAMBDA172	((void*)startLabel+100)
#define CT_v183	((void*)startLabel+132)
#define CF_LAMBDA172	((void*)startLabel+140)
#define ST_v178	((void*)startLabel+144)
#define ST_v181	((void*)startLabel+160)
#define ST_v182	((void*)startLabel+186)
extern Node TM_Prelude[];
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46min[];
extern Node FN_Prelude_46foldl1[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v180)
,};
Node FN_Prelude_46minimum[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v179: (byte 2) */
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
, 40001
, useLabel(ST_v178)
,	/* CT_v180: (byte 0) */
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
, useLabel(CT_v183)
,	/* FN_LAMBDA172: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v182)
, 40020
, useLabel(ST_v181)
,	/* CT_v183: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA172: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA172))
,	/* ST_v178: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(109,105,110,105)
,	/* ST_v181: (byte 4) */
  bytes2word(109,117,109,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(109,105,110,105)
, bytes2word(109,117,109,58)
, bytes2word(52,58,50,48)
, bytes2word(45,52,58,53)
,	/* ST_v182: (byte 2) */
  bytes2word(50,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,76,105,115)
, bytes2word(116,46,109,105)
, bytes2word(110,105,109,117)
, bytes2word(109,58,32,101)
, bytes2word(109,112,116,121)
, bytes2word(32,108,105,115)
, bytes2word(116,0,0,0)
,};
