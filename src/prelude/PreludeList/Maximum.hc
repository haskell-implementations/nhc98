#include "newmacros.h"
#include "runtime.h"

#define v183	((void*)startLabel+22)
#define v182	((void*)startLabel+26)
#define v179	((void*)startLabel+33)
#define CT_v184	((void*)startLabel+52)
#define FN_LAMBDA177	((void*)startLabel+88)
#define CT_v186	((void*)startLabel+108)
#define CF_LAMBDA177	((void*)startLabel+116)
#define ST_v185	((void*)startLabel+120)
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46max[];
extern Node FN_Prelude_46foldl1[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v184)
,};
Node FN_Prelude_46maximum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v183: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v182: (byte 2) */
  bytes2word(9,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
,	/* v179: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v184: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46maximum[] = {
  CAPTAG(useLabel(FN_Prelude_46maximum),2)
, VAPTAG(useLabel(FN_LAMBDA177))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_Prelude_46max))
, VAPTAG(useLabel(FN_Prelude_46foldl1))
, bytes2word(0,0,0,0)
, useLabel(CT_v186)
,	/* FN_LAMBDA177: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v185)
,	/* CT_v186: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA177: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA177))
,	/* ST_v185: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,76)
, bytes2word(105,115,116,46)
, bytes2word(109,97,120,105)
, bytes2word(109,117,109,58)
, bytes2word(32,101,109,112)
, bytes2word(116,121,32,108)
, bytes2word(105,115,116,0)
,};
