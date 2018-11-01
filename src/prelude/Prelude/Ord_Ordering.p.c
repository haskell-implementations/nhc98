#include "newmacros.h"
#include "runtime.h"

#define v255	((void*)startLabel+24)
#define v273	((void*)startLabel+36)
#define v259	((void*)startLabel+40)
#define v256	((void*)startLabel+50)
#define v260	((void*)startLabel+59)
#define v262	((void*)startLabel+72)
#define v263	((void*)startLabel+82)
#define v264	((void*)startLabel+92)
#define v265	((void*)startLabel+102)
#define v278	((void*)startLabel+114)
#define v269	((void*)startLabel+118)
#define v252	((void*)startLabel+128)
#define CT_v281	((void*)startLabel+320)
#define FN_LAMBDA250	((void*)startLabel+364)
#define CT_v285	((void*)startLabel+408)
#define CF_LAMBDA250	((void*)startLabel+416)
#define CT_v289	((void*)startLabel+500)
#define CT_v293	((void*)startLabel+600)
#define CT_v297	((void*)startLabel+700)
#define CT_v301	((void*)startLabel+800)
#define CT_v305	((void*)startLabel+900)
#define CT_v309	((void*)startLabel+1000)
#define CT_v313	((void*)startLabel+1124)
#define ST_v311	((void*)startLabel+1184)
#define ST_v303	((void*)startLabel+1216)
#define ST_v307	((void*)startLabel+1248)
#define ST_v295	((void*)startLabel+1280)
#define ST_v299	((void*)startLabel+1312)
#define ST_v271	((void*)startLabel+1344)
#define PP_LAMBDA250	((void*)startLabel+1381)
#define PC_LAMBDA250	((void*)startLabel+1381)
#define ST_v283	((void*)startLabel+1381)
#define ST_v291	((void*)startLabel+1428)
#define ST_v287	((void*)startLabel+1464)
#define ST_v284	((void*)startLabel+1497)
#define PS_v280	((void*)startLabel+1572)
#define PS_v275	((void*)startLabel+1584)
#define PS_v274	((void*)startLabel+1596)
#define PS_v277	((void*)startLabel+1608)
#define PS_v270	((void*)startLabel+1620)
#define PS_v279	((void*)startLabel+1632)
#define PS_v308	((void*)startLabel+1644)
#define PS_v306	((void*)startLabel+1656)
#define PS_v304	((void*)startLabel+1668)
#define PS_v302	((void*)startLabel+1680)
#define PS_v300	((void*)startLabel+1692)
#define PS_v298	((void*)startLabel+1704)
#define PS_v296	((void*)startLabel+1716)
#define PS_v294	((void*)startLabel+1728)
#define PS_v292	((void*)startLabel+1740)
#define PS_v290	((void*)startLabel+1752)
#define PS_v288	((void*)startLabel+1764)
#define PS_v286	((void*)startLabel+1776)
#define PS_v310	((void*)startLabel+1788)
#define PS_v312	((void*)startLabel+1800)
#define PS_v282	((void*)startLabel+1812)
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46Prelude_46Ordering[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node CF_Prelude_46Eq_46Prelude_46Ordering[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95patternMatchFail[];
extern Node PC_Prelude_46LT[];
extern Node PC_Prelude_46EQ[];
extern Node PC_Prelude_46GT[];
extern Node PC_Prelude_46_95_46_60_61[];
extern Node PC_Prelude_46_95_46_60[];
extern Node PC_Prelude_46_95_46_62_61[];
extern Node PC_Prelude_46_95_46_62[];
extern Node PC_Prelude_46_95_46max[];
extern Node PC_Prelude_46_95_46min[];
extern Node PC_Prelude_468[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v281)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v255: (byte 4) */
  bytes2word(TOP(41),BOT(41),TOP(84),BOT(84))
, bytes2word(POP_I1,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(10),BOT(10))
,	/* v273: (byte 4) */
  bytes2word(TOP(6),BOT(6),TOP(6),BOT(6))
,	/* v259: (byte 4) */
  bytes2word(POP_I1,JUMP,12,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
,	/* v256: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
,	/* v260: (byte 3) */
  bytes2word(HEAP_SPACE,HEAP_SPACE,RETURN,POP_I1)
, bytes2word(PUSH_ARG_I2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v262: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(26),BOT(26))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
,	/* v263: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v264: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
,	/* v265: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(6),BOT(6))
,	/* v278: (byte 2) */
  bytes2word(TOP(10),BOT(10),POP_I1,JUMP)
,	/* v269: (byte 2) */
  bytes2word(12,0,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v252: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v280)
, 0
, 0
, 0
, 0
, useLabel(PS_v279)
, 0
, 0
, 0
, 0
, useLabel(PS_v277)
, 0
, 0
, 0
, 0
, CONSTR(2,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v275)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v274)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, 40003
, useLabel(ST_v271)
,	/* CT_v281: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46compare),2)
, useLabel(PS_v270)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA250))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v285)
,	/* FN_LAMBDA250: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v284)
, 40003
, useLabel(ST_v283)
,	/* CT_v285: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA250: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA250))
, useLabel(PS_v282)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v289)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v288)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v287)
,	/* CT_v289: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46min),2)
, useLabel(PS_v286)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v293)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v292)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v291)
,	/* CT_v293: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46max),2)
, useLabel(PS_v290)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v297)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v296)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v295)
,	/* CT_v297: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46_62),2)
, useLabel(PS_v294)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v301)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v300)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v299)
,	/* CT_v301: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46_62_61),2)
, useLabel(PS_v298)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v305)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v304)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v303)
,	/* CT_v305: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46_60),2)
, useLabel(PS_v302)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v309)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v308)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v307)
,	/* CT_v309: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46_60_61),2)
, useLabel(PS_v306)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,0,0)
, useLabel(CT_v313)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v312)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v311)
,	/* CT_v313: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46Prelude_46Ordering[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering))
, useLabel(PS_v310)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Eq_46Prelude_46Ordering)
, useLabel(F0_Prelude_46Ord_46Prelude_46Ordering_46_60)
, useLabel(F0_Prelude_46Ord_46Prelude_46Ordering_46_60_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Ordering_46_62_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Ordering_46_62)
, useLabel(F0_Prelude_46Ord_46Prelude_46Ordering_46compare)
, useLabel(F0_Prelude_46Ord_46Prelude_46Ordering_46min)
, useLabel(F0_Prelude_46Ord_46Prelude_46Ordering_46max)
,};
Node PP_Prelude_46Ord_46Prelude_46Ordering[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Ordering[] = {
 	/* ST_v311: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,101)
, bytes2word(114,105,110,103)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Ordering_46_60[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Ordering_46_60[] = {
 	/* ST_v303: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,101)
, bytes2word(114,105,110,103)
, bytes2word(46,60,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Ordering_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Ordering_46_60_61[] = {
 	/* ST_v307: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,101)
, bytes2word(114,105,110,103)
, bytes2word(46,60,61,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Ordering_46_62[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Ordering_46_62[] = {
 	/* ST_v295: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,101)
, bytes2word(114,105,110,103)
, bytes2word(46,62,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Ordering_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Ordering_46_62_61[] = {
 	/* ST_v299: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,101)
, bytes2word(114,105,110,103)
, bytes2word(46,62,61,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Ordering_46compare[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Ordering_46compare[] = {
 	/* ST_v271: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,101)
, bytes2word(114,105,110,103)
, bytes2word(46,99,111,109)
, bytes2word(112,97,114,101)
,	/* PP_LAMBDA250: (byte 1) */
 	/* PC_LAMBDA250: (byte 1) */
 	/* ST_v283: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,46,99,111)
, bytes2word(109,112,97,114)
, bytes2word(101,58,52,58)
, bytes2word(51,45,49,48)
, bytes2word(58,50,49,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Ordering_46max[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Ordering_46max[] = {
 	/* ST_v291: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,101)
, bytes2word(114,105,110,103)
, bytes2word(46,109,97,120)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Ordering_46min[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Ordering_46min[] = {
 	/* ST_v287: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,101)
, bytes2word(114,105,110,103)
, bytes2word(46,109,105,110)
,	/* ST_v284: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(58,46,47,79)
, bytes2word(114,100,95,79)
, bytes2word(114,100,101,114)
, bytes2word(105,110,103,46)
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
, bytes2word(32,52,58,51)
, bytes2word(45,49,48,58)
, bytes2word(50,49,46,0)
,	/* PS_v280: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46compare)
, useLabel(PC_NHC_46Internal_46_95patternMatchFail)
,	/* PS_v275: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46compare)
, useLabel(PC_Prelude_46LT)
,	/* PS_v274: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46compare)
, useLabel(PC_Prelude_46EQ)
,	/* PS_v277: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46compare)
, useLabel(PC_Prelude_46GT)
,	/* PS_v270: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_46Ordering_46compare)
,	/* PS_v279: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46compare)
, useLabel(PC_LAMBDA250)
,	/* PS_v308: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46_60_61)
, useLabel(PC_Prelude_46_95_46_60_61)
,	/* PS_v306: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Ordering_46_60_61)
,	/* PS_v304: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46_60)
, useLabel(PC_Prelude_46_95_46_60)
,	/* PS_v302: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_46Ordering_46_60)
,	/* PS_v300: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v298: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Ordering_46_62_61)
,	/* PS_v296: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v294: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_46Ordering_46_62)
,	/* PS_v292: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v290: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_46Ordering_46max)
,	/* PS_v288: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v286: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_46Ordering_46min)
,	/* PS_v310: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering)
, useLabel(PC_Prelude_46Ord_46Prelude_46Ordering)
,	/* PS_v312: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Ordering)
, useLabel(PC_Prelude_468)
,	/* PS_v282: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA250)
, useLabel(PC_LAMBDA250)
,};
