#include "newmacros.h"
#include "runtime.h"

#define v233	((void*)startLabel+46)
#define v234	((void*)startLabel+55)
#define v241	((void*)startLabel+66)
#define v238	((void*)startLabel+70)
#define v235	((void*)startLabel+76)
#define v230	((void*)startLabel+81)
#define CT_v242	((void*)startLabel+112)
#define FN_LAMBDA228	((void*)startLabel+164)
#define CT_v245	((void*)startLabel+196)
#define CF_LAMBDA228	((void*)startLabel+204)
#define FN_LAMBDA227	((void*)startLabel+216)
#define CT_v248	((void*)startLabel+248)
#define CF_LAMBDA227	((void*)startLabel+256)
#define FN_LAMBDA226	((void*)startLabel+272)
#define CT_v253	((void*)startLabel+312)
#define F0_LAMBDA226	((void*)startLabel+320)
#define FN_LAMBDA225	((void*)startLabel+348)
#define v267	((void*)startLabel+366)
#define v261	((void*)startLabel+370)
#define v268	((void*)startLabel+380)
#define v265	((void*)startLabel+384)
#define v258	((void*)startLabel+391)
#define v254	((void*)startLabel+396)
#define CT_v269	((void*)startLabel+420)
#define F0_LAMBDA225	((void*)startLabel+428)
#define ST_v239	((void*)startLabel+432)
#define ST_v244	((void*)startLabel+447)
#define ST_v247	((void*)startLabel+479)
#define ST_v251	((void*)startLabel+504)
#define ST_v246	((void*)startLabel+529)
#define ST_v243	((void*)startLabel+554)
extern Node TM_Prelude[];
extern Node FN_Prelude_46reads[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46fail[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46lex[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v242)
,};
Node FN_Prelude_46readIO[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_IN3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v233: (byte 2) */
  bytes2word(TOP(13),BOT(13),POP_I1,HEAP_CVAL_P1)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_P1,8)
,	/* v234: (byte 3) */
  bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v241: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v238: (byte 2) */
  bytes2word(8,0,POP_I1,PUSH_HEAP)
,	/* v235: (byte 4) */
  bytes2word(HEAP_CVAL_P1,9,HEAP_I1,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v230: (byte 1) */
  bytes2word(0,HEAP_CVAL_P1,10,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v239)
,	/* CT_v242: (byte 0) */
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
, useLabel(CT_v245)
,	/* FN_LAMBDA228: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v244)
, 70027
, useLabel(ST_v243)
,	/* CT_v245: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA228: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA228))
, bytes2word(0,0,0,0)
, useLabel(CT_v248)
,	/* FN_LAMBDA227: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v247)
, 60027
, useLabel(ST_v246)
,	/* CT_v248: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA227: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA227))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v253)
,	/* FN_LAMBDA226: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40017
, useLabel(ST_v251)
,	/* CT_v253: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA226: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA226),2)
, CAPTAG(useLabel(FN_LAMBDA225),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v269)
,	/* FN_LAMBDA225: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v267: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v261: (byte 2) */
  bytes2word(23,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v268: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v265: (byte 4) */
  bytes2word(POP_I1,JUMP,9,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
,	/* v258: (byte 3) */
  bytes2word(1,3,RETURN,POP_P1)
,	/* v254: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 40017
, useLabel(ST_v251)
,	/* CT_v269: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA225: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA225),3)
,	/* ST_v239: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,97,100)
,	/* ST_v244: (byte 3) */
  bytes2word(73,79,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,114)
, bytes2word(101,97,100,73)
, bytes2word(79,58,32,97)
, bytes2word(109,98,105,103)
, bytes2word(117,111,117,115)
, bytes2word(32,112,97,114)
,	/* ST_v247: (byte 3) */
  bytes2word(115,101,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,114)
, bytes2word(101,97,100,73)
, bytes2word(79,58,32,110)
, bytes2word(111,32,112,97)
,	/* ST_v251: (byte 4) */
  bytes2word(114,115,101,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,97,100)
, bytes2word(73,79,58,52)
, bytes2word(58,49,55,45)
, bytes2word(52,58,53,54)
,	/* ST_v246: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,114,101,97)
, bytes2word(100,73,79,58)
, bytes2word(54,58,50,55)
, bytes2word(45,54,58,53)
,	/* ST_v243: (byte 2) */
  bytes2word(50,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,114,101)
, bytes2word(97,100,73,79)
, bytes2word(58,55,58,50)
, bytes2word(55,45,55,58)
, bytes2word(53,57,0,0)
,};
