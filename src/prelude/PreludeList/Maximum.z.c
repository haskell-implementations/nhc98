#include "newmacros.h"
#include "runtime.h"

#define v184	((void*)startLabel+26)
#define v182	((void*)startLabel+30)
#define v179	((void*)startLabel+37)
#define CT_v185	((void*)startLabel+64)
#define FN_LAMBDA177	((void*)startLabel+100)
#define CT_v188	((void*)startLabel+132)
#define CF_LAMBDA177	((void*)startLabel+140)
#define ST_v183	((void*)startLabel+144)
#define ST_v186	((void*)startLabel+160)
#define ST_v187	((void*)startLabel+186)
extern Node TM_Prelude[];
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46max[];
extern Node FN_Prelude_46foldl1[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v185)
,};
Node FN_Prelude_46maximum[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v184: (byte 2) */
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
, 60001
, useLabel(ST_v183)
,	/* CT_v185: (byte 0) */
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
, useLabel(CT_v188)
,	/* FN_LAMBDA177: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v187)
, 60020
, useLabel(ST_v186)
,	/* CT_v188: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA177: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA177))
,	/* ST_v183: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(109,97,120,105)
,	/* ST_v186: (byte 4) */
  bytes2word(109,117,109,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(109,97,120,105)
, bytes2word(109,117,109,58)
, bytes2word(54,58,50,48)
, bytes2word(45,54,58,53)
,	/* ST_v187: (byte 2) */
  bytes2word(50,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,76,105,115)
, bytes2word(116,46,109,97)
, bytes2word(120,105,109,117)
, bytes2word(109,58,32,101)
, bytes2word(109,112,116,121)
, bytes2word(32,108,105,115)
, bytes2word(116,0,0,0)
,};
