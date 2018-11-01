#include "newmacros.h"
#include "runtime.h"

#define v267	((void*)startLabel+26)
#define v269	((void*)startLabel+36)
#define v270	((void*)startLabel+40)
#define v271	((void*)startLabel+46)
#define v273	((void*)startLabel+58)
#define v274	((void*)startLabel+63)
#define CT_v279	((void*)startLabel+100)
#define CT_v281	((void*)startLabel+152)
#define CT_v283	((void*)startLabel+208)
#define CT_v285	((void*)startLabel+264)
#define CT_v287	((void*)startLabel+320)
#define CT_v289	((void*)startLabel+376)
#define CT_v291	((void*)startLabel+432)
#define CT_v293	((void*)startLabel+504)
#define ST_v292	((void*)startLabel+548)
#define ST_v288	((void*)startLabel+576)
#define ST_v290	((void*)startLabel+606)
#define ST_v284	((void*)startLabel+637)
#define ST_v286	((void*)startLabel+667)
#define ST_v275	((void*)startLabel+698)
#define ST_v282	((void*)startLabel+734)
#define ST_v280	((void*)startLabel+766)
extern Node TM_System[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46System_46ExitCode[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node CF_Prelude_46Eq_46System_46ExitCode[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v279)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46compare[] = {
  useLabel(TM_System)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v267: (byte 2) */
  bytes2word(TOP(24),BOT(24),POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v269: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v270: (byte 4) */
  bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v271: (byte 2) */
  bytes2word(4,RETURN,UNPACK,1)
, bytes2word(PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v273: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v274: (byte 3) */
  bytes2word(HEAP_CVAL_N1,5,RETURN,UNPACK)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_I2)
, bytes2word(HEAP_I1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
, 70003
, useLabel(ST_v275)
,	/* CT_v279: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v281)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46min[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 60010
, useLabel(ST_v280)
,	/* CT_v281: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v283)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46max[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 60010
, useLabel(ST_v282)
,	/* CT_v283: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v285)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46_62[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 60010
, useLabel(ST_v284)
,	/* CT_v285: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v287)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46_62_61[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 60010
, useLabel(ST_v286)
,	/* CT_v287: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v289)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46_60[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 60010
, useLabel(ST_v288)
,	/* CT_v289: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v291)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46_60_61[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 60010
, useLabel(ST_v290)
,	/* CT_v291: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46_60_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,0,0)
, useLabel(CT_v293)
,};
Node FN_Prelude_46Ord_46System_46ExitCode[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 60010
, useLabel(ST_v292)
,	/* CT_v293: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46System_46ExitCode[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode))
, useLabel(CF_Prelude_46Eq_46System_46ExitCode)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46_60)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46_60_61)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46_62_61)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46_62)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46compare)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46min)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46max)
,	/* ST_v292: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,67)
,	/* ST_v288: (byte 4) */
  bytes2word(111,100,101,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,67)
, bytes2word(111,100,101,46)
,	/* ST_v290: (byte 2) */
  bytes2word(60,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,69,120,105)
, bytes2word(116,67,111,100)
, bytes2word(101,46,60,61)
,	/* ST_v284: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,83,121,115)
, bytes2word(116,101,109,46)
, bytes2word(69,120,105,116)
, bytes2word(67,111,100,101)
,	/* ST_v286: (byte 3) */
  bytes2word(46,62,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,83)
, bytes2word(121,115,116,101)
, bytes2word(109,46,69,120)
, bytes2word(105,116,67,111)
, bytes2word(100,101,46,62)
,	/* ST_v275: (byte 2) */
  bytes2word(61,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,69,120,105)
, bytes2word(116,67,111,100)
, bytes2word(101,46,99,111)
, bytes2word(109,112,97,114)
,	/* ST_v282: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,69,120,105)
, bytes2word(116,67,111,100)
, bytes2word(101,46,109,97)
,	/* ST_v280: (byte 2) */
  bytes2word(120,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,69,120,105)
, bytes2word(116,67,111,100)
, bytes2word(101,46,109,105)
, bytes2word(110,0,0,0)
,};
