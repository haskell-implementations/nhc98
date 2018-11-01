#include "newmacros.h"
#include "runtime.h"

#define v323	((void*)startLabel+26)
#define v325	((void*)startLabel+36)
#define v326	((void*)startLabel+40)
#define v327	((void*)startLabel+46)
#define v329	((void*)startLabel+58)
#define v330	((void*)startLabel+63)
#define CT_v335	((void*)startLabel+112)
#define CT_v337	((void*)startLabel+168)
#define CT_v339	((void*)startLabel+228)
#define CT_v341	((void*)startLabel+288)
#define CT_v343	((void*)startLabel+348)
#define CT_v345	((void*)startLabel+408)
#define CT_v347	((void*)startLabel+468)
#define CT_v349	((void*)startLabel+584)
#define ST_v348	((void*)startLabel+632)
#define ST_v344	((void*)startLabel+658)
#define ST_v346	((void*)startLabel+686)
#define ST_v340	((void*)startLabel+715)
#define ST_v342	((void*)startLabel+743)
#define ST_v331	((void*)startLabel+772)
#define ST_v338	((void*)startLabel+806)
#define ST_v336	((void*)startLabel+836)
extern Node TM_Prelude[];
extern Node FN_Prelude_46compare[];
extern Node FN_Prelude_46Ord_46Prelude_46Maybe[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_Prelude_46Eq_46Prelude_46Maybe[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v335)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46compare[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v323: (byte 2) */
  bytes2word(TOP(24),BOT(24),POP_I1,PUSH_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v325: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v326: (byte 4) */
  bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v327: (byte 2) */
  bytes2word(4,RETURN,UNPACK,1)
, bytes2word(PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v329: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v330: (byte 3) */
  bytes2word(HEAP_CVAL_N1,5,RETURN,UNPACK)
, bytes2word(1,PUSH_P1,0,PUSH_P1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
, 40003
, useLabel(ST_v331)
,	/* CT_v335: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46compare),3)
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v337)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46min[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 30019
, useLabel(ST_v336)
,	/* CT_v337: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46min),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v339)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46max[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 30019
, useLabel(ST_v338)
,	/* CT_v339: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46max),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v341)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46_62[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 30019
, useLabel(ST_v340)
,	/* CT_v341: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_62),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v343)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46_62_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 30019
, useLabel(ST_v342)
,	/* CT_v343: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_62_61),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v345)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46_60[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 30019
, useLabel(ST_v344)
,	/* CT_v345: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_60),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v347)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46_60_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 30019
, useLabel(ST_v346)
,	/* CT_v347: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_60_61),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v349)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_P1,36,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_P1,8,HEAP_P1)
, bytes2word(7,HEAP_P1,6,HEAP_P1)
, bytes2word(5,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 30019
, useLabel(ST_v348)
,	/* CT_v349: (byte 0) */
  HW(9,1)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe),1)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Maybe))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46max),2)
,	/* ST_v348: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
,	/* ST_v344: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,77,97)
, bytes2word(121,98,101,46)
,	/* ST_v346: (byte 2) */
  bytes2word(60,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,77,97)
, bytes2word(121,98,101,46)
,	/* ST_v340: (byte 3) */
  bytes2word(60,61,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,77)
, bytes2word(97,121,98,101)
,	/* ST_v342: (byte 3) */
  bytes2word(46,62,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,77)
, bytes2word(97,121,98,101)
,	/* ST_v331: (byte 4) */
  bytes2word(46,62,61,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,46,99,111)
, bytes2word(109,112,97,114)
,	/* ST_v338: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,77,97)
, bytes2word(121,98,101,46)
,	/* ST_v336: (byte 4) */
  bytes2word(109,97,120,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,46,109,105)
, bytes2word(110,0,0,0)
,};
