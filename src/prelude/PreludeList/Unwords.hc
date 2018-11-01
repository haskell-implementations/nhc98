#include "newmacros.h"
#include "runtime.h"

#define v177	((void*)startLabel+18)
#define v176	((void*)startLabel+22)
#define v173	((void*)startLabel+26)
#define CT_v178	((void*)startLabel+40)
#define FN_LAMBDA171	((void*)startLabel+76)
#define CT_v179	((void*)startLabel+104)
#define F0_LAMBDA171	((void*)startLabel+112)
#define FN_LAMBDA170	((void*)startLabel+128)
#define CT_v181	((void*)startLabel+148)
#define CF_LAMBDA170	((void*)startLabel+156)
#define ST_v180	((void*)startLabel+160)
extern Node FN_Prelude_46foldr1[];
extern Node FN_Prelude_46_43_43[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v178)
,};
Node FN_Prelude_46unwords[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v177: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v176: (byte 2) */
  bytes2word(6,0,POP_I1,PUSH_HEAP)
,	/* v173: (byte 2) */
  bytes2word(HEAP_CVAL_I3,RETURN_EVAL,HEAP_CVAL_I4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,2,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v178: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46unwords[] = {
  CAPTAG(useLabel(FN_Prelude_46unwords),1)
, VAPTAG(useLabel(FN_LAMBDA170))
, CAPTAG(useLabel(FN_LAMBDA171),2)
, VAPTAG(useLabel(FN_Prelude_46foldr1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v179)
,	/* FN_LAMBDA171: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CHAR_P1)
, bytes2word(32,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v179: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA171: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA171),2)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v181)
,	/* FN_LAMBDA170: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v180)
,	/* CT_v181: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA170: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA170))
,	/* ST_v180: (byte 0) */
  bytes2word(0,0,0,0)
,};
