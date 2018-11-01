#include "newmacros.h"
#include "runtime.h"

#define FN_System_46Cmd_46translate	((void*)startLabel+8)
#define CT_v235	((void*)startLabel+60)
#define F0_System_46Cmd_46translate	((void*)startLabel+68)
#define FN_LAMBDA233	((void*)startLabel+96)
#define CT_v237	((void*)startLabel+116)
#define CF_LAMBDA233	((void*)startLabel+124)
#define FN_System_46Cmd_46Prelude_46168_46escape	((void*)startLabel+140)
#define v252	((void*)startLabel+156)
#define v241	((void*)startLabel+160)
#define v244	((void*)startLabel+186)
#define v248	((void*)startLabel+202)
#define v249	((void*)startLabel+217)
#define v238	((void*)startLabel+238)
#define CT_v257	((void*)startLabel+280)
#define F0_System_46Cmd_46Prelude_46168_46escape	((void*)startLabel+288)
#define CT_v258	((void*)startLabel+336)
#define ST_v236	((void*)startLabel+364)
extern Node FN_Prelude_46foldr[];
extern Node FN_Prelude_46snd[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46unwords[];
extern Node FN_System_46system[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v235)
,	/* FN_System_46Cmd_46translate: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(3,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_CHAR_P1,34,HEAP_OFF_N1,4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(1,0,0)
,	/* CT_v235: (byte 0) */
  HW(4,1)
, 0
,	/* F0_System_46Cmd_46translate: (byte 0) */
  CAPTAG(useLabel(FN_System_46Cmd_46translate),1)
, CAPTAG(useLabel(FN_System_46Cmd_46Prelude_46168_46escape),2)
, VAPTAG(useLabel(FN_LAMBDA233))
, VAPTAG(useLabel(FN_Prelude_46foldr))
, VAPTAG(useLabel(FN_Prelude_46snd))
, bytes2word(0,0,0,0)
, useLabel(CT_v237)
,	/* FN_LAMBDA233: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v236)
,	/* CT_v237: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA233: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA233))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v257)
,	/* FN_System_46Cmd_46Prelude_46168_46escape: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,LOOKUPSWITCH)
, bytes2word(2,NOP,TOP(34),BOT(34))
, bytes2word(TOP(14),BOT(14),TOP(92),BOT(92))
,	/* v252: (byte 4) */
  bytes2word(TOP(40),BOT(40),TOP(10),BOT(10))
,	/* v241: (byte 4) */
  bytes2word(POP_I1,JUMP,80,0)
, bytes2word(POP_I1,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_CHAR_P1,34)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,2,HEAP_CHAR_P1)
, bytes2word(92,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v244: (byte 2) */
  bytes2word(5,RETURN,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,UNPACK,2,PUSH_P1)
, bytes2word(0,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v248: (byte 2) */
  bytes2word(TOP(19),BOT(19),POP_I1,HEAP_CVAL_N1)
, bytes2word(4,HEAP_CVAL_N1,2,HEAP_CHAR_P1)
, bytes2word(92,HEAP_I1,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
,	/* v249: (byte 1) */
  bytes2word(RETURN,POP_I1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_CHAR_P1,92)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,2,HEAP_CHAR_P1)
, bytes2word(92,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v238: (byte 2) */
  bytes2word(5,RETURN,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_N1)
, bytes2word(4,HEAP_CVAL_N1,2,HEAP_ARG)
, bytes2word(1,HEAP_I1,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
, CONSTR(1,2,0)
, CONSTR(1,0,0)
,	/* CT_v257: (byte 0) */
  HW(0,2)
, 0
,	/* F0_System_46Cmd_46Prelude_46168_46escape: (byte 0) */
  CAPTAG(useLabel(FN_System_46Cmd_46Prelude_46168_46escape),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v258)
,};
Node FN_System_46Cmd_46rawSystem[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v258: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_System_46Cmd_46rawSystem[] = {
  CAPTAG(useLabel(FN_System_46Cmd_46rawSystem),2)
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_System_46Cmd_46translate)
, VAPTAG(useLabel(FN_Prelude_46unwords))
, VAPTAG(useLabel(FN_System_46system))
,	/* ST_v236: (byte 0) */
  bytes2word(34,0,0,0)
,};
