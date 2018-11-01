#include "newmacros.h"
#include "runtime.h"

#define v176	((void*)startLabel+22)
#define v174	((void*)startLabel+26)
#define v171	((void*)startLabel+33)
#define CT_v177	((void*)startLabel+56)
#define FN_LAMBDA169	((void*)startLabel+88)
#define CT_v180	((void*)startLabel+120)
#define CF_LAMBDA169	((void*)startLabel+128)
#define ST_v175	((void*)startLabel+132)
#define ST_v179	((void*)startLabel+146)
#define ST_v178	((void*)startLabel+172)
extern Node TM_Prelude[];
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46_43_43[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v177)
,};
Node FN_Prelude_46cycle[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v176: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v174: (byte 2) */
  bytes2word(9,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
,	/* v171: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,2,PUSH_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v175)
,	/* CT_v177: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46cycle[] = {
  CAPTAG(useLabel(FN_Prelude_46cycle),1)
, VAPTAG(useLabel(FN_LAMBDA169))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v180)
,	/* FN_LAMBDA169: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v179)
, 40025
, useLabel(ST_v178)
,	/* CT_v180: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA169: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA169))
,	/* ST_v175: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(99,121,99,108)
,	/* ST_v179: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,99,121)
, bytes2word(99,108,101,58)
, bytes2word(32,101,109,112)
, bytes2word(116,121,32,108)
,	/* ST_v178: (byte 4) */
  bytes2word(105,115,116,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(99,121,99,108)
, bytes2word(101,58,52,58)
, bytes2word(50,53,45,52)
, bytes2word(58,53,49,0)
,};
