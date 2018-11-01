#include "newmacros.h"
#include "runtime.h"

#define v183	((void*)startLabel+22)
#define v184	((void*)startLabel+27)
#define v185	((void*)startLabel+52)
#define v187	((void*)startLabel+65)
#define v180	((void*)startLabel+70)
#define CT_v190	((void*)startLabel+92)
#define FN_LAMBDA178	((void*)startLabel+128)
#define CT_v192	((void*)startLabel+148)
#define CF_LAMBDA178	((void*)startLabel+156)
#define ST_v191	((void*)startLabel+160)
extern Node CF_Prelude_46otherwise[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v190)
,};
Node FN_Prelude_46filter[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v183: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v184: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(2,PUSH_P1,0,PUSH_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,13)
, bytes2word(0,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v185: (byte 4) */
  bytes2word(HEAP_I1,HEAP_OFF_N1,5,RETURN)
, bytes2word(PUSH_CVAL_P1,4,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,8,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_I2)
,	/* v187: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v180: (byte 2) */
  bytes2word(2,0,HEAP_CVAL_I5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v190: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46filter[] = {
  CAPTAG(useLabel(FN_Prelude_46filter),2)
, VAPTAG(useLabel(FN_Prelude_46filter))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_LAMBDA178))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v192)
,	/* FN_LAMBDA178: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v191)
,	/* CT_v192: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA178: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA178))
,	/* ST_v191: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,58)
, bytes2word(46,47,70,105)
, bytes2word(108,116,101,114)
, bytes2word(46,104,115,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,52,58)
, bytes2word(49,45,54,58)
, bytes2word(52,49,46,0)
,};
