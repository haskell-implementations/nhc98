#include "newmacros.h"
#include "runtime.h"

#define CT_v313	((void*)startLabel+32)
#define FN_LAMBDA310	((void*)startLabel+60)
#define CT_v315	((void*)startLabel+100)
#define F0_LAMBDA310	((void*)startLabel+108)
#define FN_LAMBDA309	((void*)startLabel+124)
#define CT_v318	((void*)startLabel+156)
#define CF_LAMBDA309	((void*)startLabel+164)
#define CT_v320	((void*)startLabel+200)
#define FN_Prelude_46Prelude_46182_46primReturn	((void*)startLabel+228)
#define CT_v322	((void*)startLabel+260)
#define F0_Prelude_46Prelude_46182_46primReturn	((void*)startLabel+268)
#define CT_v324	((void*)startLabel+308)
#define FN_Prelude_46Prelude_46173_46primBind2	((void*)startLabel+336)
#define v326	((void*)startLabel+356)
#define v327	((void*)startLabel+362)
#define CT_v330	((void*)startLabel+396)
#define F0_Prelude_46Prelude_46173_46primBind2	((void*)startLabel+404)
#define CT_v332	((void*)startLabel+444)
#define FN_Prelude_46Prelude_46163_46primBind1	((void*)startLabel+472)
#define v334	((void*)startLabel+492)
#define v335	((void*)startLabel+498)
#define CT_v338	((void*)startLabel+540)
#define F0_Prelude_46Prelude_46163_46primBind1	((void*)startLabel+548)
#define CT_v340	((void*)startLabel+600)
#define ST_v339	((void*)startLabel+628)
#define ST_v323	((void*)startLabel+658)
#define ST_v328	((void*)startLabel+691)
#define ST_v331	((void*)startLabel+736)
#define ST_v336	((void*)startLabel+770)
#define ST_v312	((void*)startLabel+816)
#define ST_v314	((void*)startLabel+851)
#define ST_v316	((void*)startLabel+898)
#define ST_v319	((void*)startLabel+945)
#define ST_v321	((void*)startLabel+982)
#define ST_v317	((void*)startLabel+1031)
extern Node TM_Prelude[];
extern Node TMSUB_Prelude[];
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v313)
,};
Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46fail[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 260005
, useLabel(ST_v312)
,	/* CT_v313: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Monad_46NHC_46Internal_46IO_46fail[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46fail),1)
, CAPTAG(useLabel(FN_LAMBDA310),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v315)
,	/* FN_LAMBDA310: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,1,0)
, CONSTR(3,2,0)
, 260020
, useLabel(ST_v314)
,	/* CT_v315: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA310: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA310),2)
, VAPTAG(useLabel(FN_LAMBDA309))
, bytes2word(0,0,0,0)
, useLabel(CT_v318)
,	/* FN_LAMBDA309: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v317)
, 260042
, useLabel(ST_v316)
,	/* CT_v318: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA309: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA309))
, bytes2word(1,0,0,1)
, useLabel(CT_v320)
,};
Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 230005
, useLabel(ST_v319)
,	/* CT_v320: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Monad_46NHC_46Internal_46IO_46return[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return),1)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46182_46primReturn),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v322)
,	/* FN_Prelude_46Prelude_46182_46primReturn: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, 250018
, useLabel(ST_v321)
,	/* CT_v322: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Prelude_46Prelude_46182_46primReturn: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46182_46primReturn),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v324)
,};
Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 160005
, useLabel(ST_v323)
,	/* CT_v324: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62),2)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46173_46primBind2),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v330)
,	/* FN_Prelude_46Prelude_46173_46primBind2: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I3,PUSH_ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v326: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(10),BOT(10))
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_IN3)
,	/* v327: (byte 2) */
  bytes2word(HEAP_I1,RETURN,UNPACK,1)
, bytes2word(PUSH_ARG_I3,PUSH_ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 180017
, useLabel(ST_v328)
,	/* CT_v330: (byte 0) */
  HW(0,3)
, 0
,	/* F0_Prelude_46Prelude_46173_46primBind2: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46173_46primBind2),3)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v332)
,};
Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 90005
, useLabel(ST_v331)
,	/* CT_v332: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46163_46primBind1),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v338)
,	/* FN_Prelude_46Prelude_46163_46primBind1: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I3,PUSH_ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v334: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(10),BOT(10))
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_IN3)
,	/* v335: (byte 2) */
  bytes2word(HEAP_I1,RETURN,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_I1,PUSH_ARG_I3,PUSH_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 110017
, useLabel(ST_v336)
,	/* CT_v338: (byte 0) */
  HW(1,3)
, 0
,	/* F0_Prelude_46Prelude_46163_46primBind1: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46163_46primBind1),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,0,0)
, useLabel(CT_v340)
,};
Node FN_Prelude_46Monad_46NHC_46Internal_46IO[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
, 80010
, useLabel(ST_v339)
,	/* CT_v340: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Monad_46NHC_46Internal_46IO[] = {
  VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO))
, useLabel(F0_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
, useLabel(F0_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
, useLabel(F0_Prelude_46Monad_46NHC_46Internal_46IO_46fail)
, useLabel(F0_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* ST_v339: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,111,110,97)
, bytes2word(100,46,78,72)
, bytes2word(67,46,73,110)
, bytes2word(116,101,114,110)
, bytes2word(97,108,46,73)
,	/* ST_v323: (byte 2) */
  bytes2word(79,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,77,111)
, bytes2word(110,97,100,46)
, bytes2word(78,72,67,46)
, bytes2word(73,110,116,101)
, bytes2word(114,110,97,108)
, bytes2word(46,73,79,46)
,	/* ST_v328: (byte 3) */
  bytes2word(62,62,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,77)
, bytes2word(111,110,97,100)
, bytes2word(46,78,72,67)
, bytes2word(46,73,110,116)
, bytes2word(101,114,110,97)
, bytes2word(108,46,73,79)
, bytes2word(46,62,62,58)
, bytes2word(49,56,58,49)
, bytes2word(55,45,50,50)
,	/* ST_v331: (byte 4) */
  bytes2word(58,52,48,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,111,110,97)
, bytes2word(100,46,78,72)
, bytes2word(67,46,73,110)
, bytes2word(116,101,114,110)
, bytes2word(97,108,46,73)
, bytes2word(79,46,62,62)
,	/* ST_v336: (byte 2) */
  bytes2word(61,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,77,111)
, bytes2word(110,97,100,46)
, bytes2word(78,72,67,46)
, bytes2word(73,110,116,101)
, bytes2word(114,110,97,108)
, bytes2word(46,73,79,46)
, bytes2word(62,62,61,58)
, bytes2word(49,49,58,49)
, bytes2word(55,45,49,53)
,	/* ST_v312: (byte 4) */
  bytes2word(58,52,48,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,111,110,97)
, bytes2word(100,46,78,72)
, bytes2word(67,46,73,110)
, bytes2word(116,101,114,110)
, bytes2word(97,108,46,73)
, bytes2word(79,46,102,97)
,	/* ST_v314: (byte 3) */
  bytes2word(105,108,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,77)
, bytes2word(111,110,97,100)
, bytes2word(46,78,72,67)
, bytes2word(46,73,110,116)
, bytes2word(101,114,110,97)
, bytes2word(108,46,73,79)
, bytes2word(46,102,97,105)
, bytes2word(108,58,50,54)
, bytes2word(58,50,48,45)
, bytes2word(50,54,58,54)
,	/* ST_v316: (byte 2) */
  bytes2word(57,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,77,111)
, bytes2word(110,97,100,46)
, bytes2word(78,72,67,46)
, bytes2word(73,110,116,101)
, bytes2word(114,110,97,108)
, bytes2word(46,73,79,46)
, bytes2word(102,97,105,108)
, bytes2word(58,50,54,58)
, bytes2word(52,50,45,50)
, bytes2word(54,58,54,54)
,	/* ST_v319: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,77,111,110)
, bytes2word(97,100,46,78)
, bytes2word(72,67,46,73)
, bytes2word(110,116,101,114)
, bytes2word(110,97,108,46)
, bytes2word(73,79,46,114)
, bytes2word(101,116,117,114)
,	/* ST_v321: (byte 2) */
  bytes2word(110,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,77,111)
, bytes2word(110,97,100,46)
, bytes2word(78,72,67,46)
, bytes2word(73,110,116,101)
, bytes2word(114,110,97,108)
, bytes2word(46,73,79,46)
, bytes2word(114,101,116,117)
, bytes2word(114,110,58,50)
, bytes2word(53,58,49,56)
, bytes2word(45,50,53,58)
,	/* ST_v317: (byte 3) */
  bytes2word(52,49,0,99)
, bytes2word(97,108,108,32)
, bytes2word(116,111,32,102)
, bytes2word(117,110,99,116)
, bytes2word(105,111,110,32)
, bytes2word(96,102,97,105)
, bytes2word(108,39,0,0)
,};
