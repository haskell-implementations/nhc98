#include "newmacros.h"
#include "runtime.h"

#define v233	((void*)startLabel+44)
#define v234	((void*)startLabel+53)
#define v240	((void*)startLabel+64)
#define v238	((void*)startLabel+68)
#define v235	((void*)startLabel+74)
#define v230	((void*)startLabel+79)
#define CT_v241	((void*)startLabel+100)
#define FN_LAMBDA228	((void*)startLabel+152)
#define CT_v243	((void*)startLabel+172)
#define CF_LAMBDA228	((void*)startLabel+180)
#define FN_LAMBDA227	((void*)startLabel+192)
#define CT_v245	((void*)startLabel+212)
#define CF_LAMBDA227	((void*)startLabel+220)
#define FN_LAMBDA226	((void*)startLabel+236)
#define CT_v249	((void*)startLabel+264)
#define F0_LAMBDA226	((void*)startLabel+272)
#define FN_LAMBDA225	((void*)startLabel+300)
#define v263	((void*)startLabel+314)
#define v257	((void*)startLabel+318)
#define v264	((void*)startLabel+328)
#define v261	((void*)startLabel+332)
#define v254	((void*)startLabel+340)
#define v250	((void*)startLabel+345)
#define CT_v265	((void*)startLabel+360)
#define F0_LAMBDA225	((void*)startLabel+368)
#define ST_v242	((void*)startLabel+372)
#define ST_v244	((void*)startLabel+404)
extern Node FN_Prelude_46reads[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46fail[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46lex[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v241)
,};
Node FN_Prelude_46readIO[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,ZAP_ARG_I1,ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v233: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(13),BOT(13))
, bytes2word(POP_I1,HEAP_CVAL_P1,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,2)
,	/* v234: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v240: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v238: (byte 4) */
  bytes2word(POP_I1,JUMP,8,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_P1,9)
,	/* v235: (byte 2) */
  bytes2word(HEAP_I1,RETURN_EVAL,POP_P1,2)
,	/* v230: (byte 3) */
  bytes2word(JUMP,2,0,HEAP_CVAL_P1)
, bytes2word(10,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v241: (byte 0) */
  HW(8,2)
, 0
,};
Node F0_Prelude_46readIO[] = {
  CAPTAG(useLabel(FN_Prelude_46readIO),2)
, CAPTAG(useLabel(FN_LAMBDA226),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, VAPTAG(useLabel(FN_LAMBDA227))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46fail))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_LAMBDA228))
, bytes2word(0,0,0,0)
, useLabel(CT_v243)
,	/* FN_LAMBDA228: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v242)
,	/* CT_v243: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA228: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA228))
, bytes2word(0,0,0,0)
, useLabel(CT_v245)
,	/* FN_LAMBDA227: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v244)
,	/* CT_v245: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA227: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA227))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v249)
,	/* FN_LAMBDA226: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v249: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA226: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA226),2)
, CAPTAG(useLabel(FN_LAMBDA225),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v265)
,	/* FN_LAMBDA225: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v263: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v257: (byte 2) */
  bytes2word(24,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v264: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v261: (byte 4) */
  bytes2word(POP_I1,JUMP,10,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v254: (byte 4) */
  bytes2word(HEAP_ARG_ARG,1,3,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v250: (byte 1) */
  bytes2word(0,PUSH_ARG_I3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v265: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA225: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA225),3)
,	/* ST_v242: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,97,100)
, bytes2word(73,79,58,32)
, bytes2word(97,109,98,105)
, bytes2word(103,117,111,117)
, bytes2word(115,32,112,97)
,	/* ST_v244: (byte 4) */
  bytes2word(114,115,101,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,97,100)
, bytes2word(73,79,58,32)
, bytes2word(110,111,32,112)
, bytes2word(97,114,115,101)
, bytes2word(0,0,0,0)
,};
