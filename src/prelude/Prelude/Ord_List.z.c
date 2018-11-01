#include "newmacros.h"
#include "runtime.h"

#define v337	((void*)startLabel+26)
#define v339	((void*)startLabel+36)
#define v340	((void*)startLabel+40)
#define v341	((void*)startLabel+46)
#define v343	((void*)startLabel+58)
#define v344	((void*)startLabel+63)
#define v346	((void*)startLabel+90)
#define v347	((void*)startLabel+95)
#define v348	((void*)startLabel+104)
#define CT_v354	((void*)startLabel+140)
#define CT_v356	((void*)startLabel+200)
#define CT_v358	((void*)startLabel+260)
#define CT_v360	((void*)startLabel+320)
#define CT_v362	((void*)startLabel+380)
#define CT_v364	((void*)startLabel+440)
#define CT_v366	((void*)startLabel+500)
#define CT_v368	((void*)startLabel+616)
#define ST_v367	((void*)startLabel+664)
#define ST_v363	((void*)startLabel+687)
#define ST_v365	((void*)startLabel+712)
#define ST_v359	((void*)startLabel+738)
#define ST_v361	((void*)startLabel+763)
#define ST_v349	((void*)startLabel+789)
#define ST_v357	((void*)startLabel+820)
#define ST_v355	((void*)startLabel+847)
extern Node TM_Prelude[];
extern Node FN_Prelude_46compare[];
extern Node FN_Prelude_46Ord_46Prelude_46_91_93[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_Prelude_46Eq_46Prelude_46_91_93[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v354)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46compare[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v337: (byte 2) */
  bytes2word(TOP(24),BOT(24),POP_I1,PUSH_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v339: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v340: (byte 4) */
  bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v341: (byte 2) */
  bytes2word(4,RETURN,UNPACK,2)
, bytes2word(PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v343: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v344: (byte 3) */
  bytes2word(HEAP_CVAL_N1,5,RETURN,UNPACK)
, bytes2word(2,PUSH_P1,0,PUSH_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,ZAP_STACK_P1,5,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v346: (byte 2) */
  bytes2word(TOP(20),BOT(20),POP_I1,PUSH_HEAP)
,	/* v347: (byte 3) */
  bytes2word(HEAP_CVAL_N1,4,RETURN,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
,	/* v348: (byte 4) */
  bytes2word(HEAP_P1,4,HEAP_I2,RETURN_EVAL)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
, 40003
, useLabel(ST_v349)
,	/* CT_v354: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46compare),3)
, VAPTAG(useLabel(FN_Prelude_46compare))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46compare))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v356)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46min[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 30019
, useLabel(ST_v355)
,	/* CT_v356: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46min),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v358)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46max[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 30019
, useLabel(ST_v357)
,	/* CT_v358: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46max),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v360)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46_62[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 30019
, useLabel(ST_v359)
,	/* CT_v360: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_62),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v362)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46_62_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 30019
, useLabel(ST_v361)
,	/* CT_v362: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_62_61),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v364)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46_60[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 30019
, useLabel(ST_v363)
,	/* CT_v364: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_60),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v366)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46_60_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 30019
, useLabel(ST_v365)
,	/* CT_v366: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_60_61),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v368)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93[] = {
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
, useLabel(ST_v367)
,	/* CT_v368: (byte 0) */
  HW(9,1)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93),1)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46_91_93))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46max),2)
,	/* ST_v367: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* ST_v363: (byte 3) */
  bytes2word(91,93,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,91)
,	/* ST_v365: (byte 4) */
  bytes2word(93,46,60,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,46,60)
,	/* ST_v359: (byte 2) */
  bytes2word(61,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,91,93)
,	/* ST_v361: (byte 3) */
  bytes2word(46,62,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,91)
, bytes2word(93,46,62,61)
,	/* ST_v349: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,91,93,46)
, bytes2word(99,111,109,112)
,	/* ST_v357: (byte 4) */
  bytes2word(97,114,101,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,46,109)
,	/* ST_v355: (byte 3) */
  bytes2word(97,120,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,91)
, bytes2word(93,46,109,105)
, bytes2word(110,0,0,0)
,};
