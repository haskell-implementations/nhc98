#include "newmacros.h"
#include "runtime.h"

#define v183	((void*)startLabel+26)
#define v184	((void*)startLabel+30)
#define v185	((void*)startLabel+55)
#define v187	((void*)startLabel+68)
#define v180	((void*)startLabel+73)
#define CT_v191	((void*)startLabel+104)
#define FN_LAMBDA178	((void*)startLabel+140)
#define CT_v194	((void*)startLabel+172)
#define CF_LAMBDA178	((void*)startLabel+180)
#define ST_v189	((void*)startLabel+184)
#define ST_v192	((void*)startLabel+199)
#define ST_v193	((void*)startLabel+223)
extern Node TM_Prelude[];
extern Node CF_Prelude_46otherwise[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v191)
,};
Node FN_Prelude_46filter[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v183: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v184: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,2)
, bytes2word(PUSH_P1,0,PUSH_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,13,0)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_I1)
,	/* v185: (byte 3) */
  bytes2word(HEAP_OFF_N1,5,RETURN,PUSH_CVAL_P1)
, bytes2word(4,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(8,0,PUSH_HEAP,HEAP_CVAL_I3)
,	/* v187: (byte 4) */
  bytes2word(HEAP_ARG,1,HEAP_I2,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v180: (byte 1) */
  bytes2word(0,HEAP_CVAL_I5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v189)
,	/* CT_v191: (byte 0) */
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
, useLabel(CT_v194)
,	/* FN_LAMBDA178: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v193)
, 40001
, useLabel(ST_v192)
,	/* CT_v194: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA178: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA178))
,	/* ST_v189: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(102,105,108,116)
,	/* ST_v192: (byte 3) */
  bytes2word(101,114,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,102)
, bytes2word(105,108,116,101)
, bytes2word(114,58,52,58)
, bytes2word(49,45,54,58)
,	/* ST_v193: (byte 3) */
  bytes2word(52,49,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,58,46)
, bytes2word(47,70,105,108)
, bytes2word(116,101,114,46)
, bytes2word(104,115,58,32)
, bytes2word(80,97,116,116)
, bytes2word(101,114,110,32)
, bytes2word(109,97,116,99)
, bytes2word(104,32,102,97)
, bytes2word(105,108,117,114)
, bytes2word(101,32,105,110)
, bytes2word(32,102,117,110)
, bytes2word(99,116,105,111)
, bytes2word(110,32,97,116)
, bytes2word(32,52,58,49)
, bytes2word(45,54,58,52)
, bytes2word(49,46,0,0)
,};
