#include "newmacros.h"
#include "runtime.h"

#define FN_System_46Cmd_46translate	((void*)startLabel+8)
#define CT_v236	((void*)startLabel+72)
#define F0_System_46Cmd_46translate	((void*)startLabel+80)
#define FN_LAMBDA233	((void*)startLabel+108)
#define CT_v239	((void*)startLabel+140)
#define CF_LAMBDA233	((void*)startLabel+148)
#define FN_System_46Cmd_46Prelude_46168_46escape	((void*)startLabel+164)
#define v255	((void*)startLabel+184)
#define v243	((void*)startLabel+188)
#define v246	((void*)startLabel+214)
#define v250	((void*)startLabel+230)
#define v251	((void*)startLabel+246)
#define v240	((void*)startLabel+267)
#define CT_v260	((void*)startLabel+316)
#define F0_System_46Cmd_46Prelude_46168_46escape	((void*)startLabel+324)
#define CT_v262	((void*)startLabel+384)
#define ST_v238	((void*)startLabel+412)
#define ST_v234	((void*)startLabel+416)
#define ST_v261	((void*)startLabel+427)
#define ST_v235	((void*)startLabel+448)
#define ST_v237	((void*)startLabel+469)
#define ST_v254	((void*)startLabel+502)
extern Node TM_System_46Cmd[];
extern Node FN_Prelude_46foldr[];
extern Node FN_Prelude_46snd[];
extern Node TMSUB_System_46Cmd[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46unwords[];
extern Node FN_System_46system[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v236)
,	/* FN_System_46Cmd_46translate: (byte 0) */
  useLabel(TM_System_46Cmd)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_IN3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,3)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_N1,5)
, bytes2word(HEAP_CHAR_P1,34,HEAP_OFF_N1,4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(1,0,0)
, 350001
, useLabel(ST_v235)
,	/* CT_v236: (byte 0) */
  HW(4,1)
, 0
,	/* F0_System_46Cmd_46translate: (byte 0) */
  CAPTAG(useLabel(FN_System_46Cmd_46translate),1)
, CAPTAG(useLabel(FN_System_46Cmd_46Prelude_46168_46escape),2)
, VAPTAG(useLabel(FN_LAMBDA233))
, VAPTAG(useLabel(FN_Prelude_46foldr))
, VAPTAG(useLabel(FN_Prelude_46snd))
, bytes2word(0,0,0,0)
, useLabel(CT_v239)
,	/* FN_LAMBDA233: (byte 0) */
  useLabel(TMSUB_System_46Cmd)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v238)
, 350047
, useLabel(ST_v237)
,	/* CT_v239: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA233: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA233))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v260)
,	/* FN_System_46Cmd_46Prelude_46168_46escape: (byte 0) */
  useLabel(TMSUB_System_46Cmd)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,LOOKUPSWITCH)
, bytes2word(2,NOP,TOP(34),BOT(34))
, bytes2word(TOP(14),BOT(14),TOP(92),BOT(92))
,	/* v255: (byte 4) */
  bytes2word(TOP(40),BOT(40),TOP(10),BOT(10))
,	/* v243: (byte 4) */
  bytes2word(POP_I1,JUMP,81,0)
, bytes2word(POP_I1,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_IN3,HEAP_CVAL_N1)
, bytes2word(4,HEAP_CHAR_P1,34,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,4,HEAP_CHAR_P1,92)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v246: (byte 2) */
  bytes2word(5,RETURN,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,UNPACK,2,PUSH_P1)
, bytes2word(0,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v250: (byte 2) */
  bytes2word(TOP(20),BOT(20),POP_I1,HEAP_CVAL_N1)
, bytes2word(6,HEAP_CVAL_N1,4,HEAP_CHAR_P1)
, bytes2word(92,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_OFF_N1)
,	/* v251: (byte 2) */
  bytes2word(5,RETURN,POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_N1,4,HEAP_CHAR_P1,92)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,4,HEAP_CHAR_P1)
, bytes2word(92,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,5,HEAP_OFF_N1,8)
,	/* v240: (byte 3) */
  bytes2word(HEAP_OFF_N1,5,RETURN,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,2)
, bytes2word(HEAP_CVAL_N1,6,HEAP_CVAL_N1,4)
, bytes2word(HEAP_ARG,1,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
, CONSTR(1,2,0)
, CONSTR(1,0,0)
, 360009
, useLabel(ST_v254)
,	/* CT_v260: (byte 0) */
  HW(0,2)
, 0
,	/* F0_System_46Cmd_46Prelude_46168_46escape: (byte 0) */
  CAPTAG(useLabel(FN_System_46Cmd_46Prelude_46168_46escape),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v262)
,};
Node FN_System_46Cmd_46rawSystem[] = {
  useLabel(TM_System_46Cmd)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 310001
, useLabel(ST_v261)
,	/* CT_v262: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_System_46Cmd_46rawSystem[] = {
  CAPTAG(useLabel(FN_System_46Cmd_46rawSystem),2)
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_System_46Cmd_46translate)
, VAPTAG(useLabel(FN_Prelude_46unwords))
, VAPTAG(useLabel(FN_System_46system))
,	/* ST_v238: (byte 0) */
  bytes2word(34,0,0,0)
,};
Node PM_System_46Cmd[] = {
 	/* ST_v234: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,67)
,	/* ST_v261: (byte 3) */
  bytes2word(109,100,0,83)
, bytes2word(121,115,116,101)
, bytes2word(109,46,67,109)
, bytes2word(100,46,114,97)
, bytes2word(119,83,121,115)
,	/* ST_v235: (byte 4) */
  bytes2word(116,101,109,0)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,67)
, bytes2word(109,100,46,116)
, bytes2word(114,97,110,115)
, bytes2word(108,97,116,101)
,	/* ST_v237: (byte 1) */
  bytes2word(0,83,121,115)
, bytes2word(116,101,109,46)
, bytes2word(67,109,100,46)
, bytes2word(116,114,97,110)
, bytes2word(115,108,97,116)
, bytes2word(101,58,51,53)
, bytes2word(58,52,55,45)
, bytes2word(51,53,58,53)
,	/* ST_v254: (byte 2) */
  bytes2word(48,0,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,67,109,100)
, bytes2word(46,116,114,97)
, bytes2word(110,115,108,97)
, bytes2word(116,101,58,51)
, bytes2word(54,58,57,45)
, bytes2word(51,57,58,53)
, bytes2word(49,0,0,0)
,};
