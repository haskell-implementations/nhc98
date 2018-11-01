#include "newmacros.h"
#include "runtime.h"

#define CT_v205	((void*)startLabel+36)
#define FN_LAMBDA199	((void*)startLabel+64)
#define CT_v208	((void*)startLabel+96)
#define CF_LAMBDA199	((void*)startLabel+104)
#define v210	((void*)startLabel+138)
#define v211	((void*)startLabel+148)
#define v212	((void*)startLabel+158)
#define CT_v215	((void*)startLabel+184)
#define FN_LAMBDA202	((void*)startLabel+220)
#define CT_v218	((void*)startLabel+252)
#define CF_LAMBDA202	((void*)startLabel+260)
#define FN_LAMBDA201	((void*)startLabel+272)
#define CT_v221	((void*)startLabel+304)
#define CF_LAMBDA201	((void*)startLabel+312)
#define FN_LAMBDA200	((void*)startLabel+324)
#define CT_v224	((void*)startLabel+356)
#define CF_LAMBDA200	((void*)startLabel+364)
#define CT_v226	((void*)startLabel+400)
#define CT_v228	((void*)startLabel+452)
#define CT_v230	((void*)startLabel+516)
#define ST_v220	((void*)startLabel+544)
#define ST_v217	((void*)startLabel+547)
#define ST_v223	((void*)startLabel+550)
#define ST_v207	((void*)startLabel+553)
#define ST_v229	((void*)startLabel+562)
#define ST_v225	((void*)startLabel+592)
#define ST_v227	((void*)startLabel+627)
#define ST_v213	((void*)startLabel+666)
#define ST_v222	((void*)startLabel+706)
#define ST_v219	((void*)startLabel+756)
#define ST_v216	((void*)startLabel+806)
#define ST_v204	((void*)startLabel+856)
#define ST_v206	((void*)startLabel+896)
extern Node TM_Prelude[];
extern Node FN_Prelude_46showString[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46_95_46show[];
extern Node CF_Prelude_46Show_46Prelude_46Ordering[];
extern Node FN_Prelude_46_95_46showList[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v205)
,};
Node FN_Prelude_46Show_46Prelude_46Ordering_46showsType[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 80003
, useLabel(ST_v204)
,	/* CT_v205: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Ordering_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Ordering_46showsType),1)
, useLabel(CF_LAMBDA199)
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(0,0,0,0)
, useLabel(CT_v208)
,	/* FN_LAMBDA199: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v207)
, 80028
, useLabel(ST_v206)
,	/* CT_v208: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA199: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA199))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v215)
,};
Node FN_Prelude_46Show_46Prelude_46Ordering_46showsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(16),BOT(16))
,	/* v210: (byte 2) */
  bytes2word(TOP(26),BOT(26),POP_I1,PUSH_CVAL_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I4,EVAL)
,	/* v211: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(POP_I1,PUSH_CVAL_P1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,EVAL,NEEDHEAP_I32,APPLY)
,	/* v212: (byte 2) */
  bytes2word(1,RETURN_EVAL,POP_I1,PUSH_CVAL_P1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_I4,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40003
, useLabel(ST_v213)
,	/* CT_v215: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Ordering_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Ordering_46showsPrec),2)
, useLabel(CF_LAMBDA200)
, VAPTAG(useLabel(FN_Prelude_46showString))
, useLabel(CF_LAMBDA201)
, useLabel(CF_LAMBDA202)
, bytes2word(0,0,0,0)
, useLabel(CT_v218)
,	/* FN_LAMBDA202: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v217)
, 60031
, useLabel(ST_v216)
,	/* CT_v218: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA202: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA202))
, bytes2word(0,0,0,0)
, useLabel(CT_v221)
,	/* FN_LAMBDA201: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v220)
, 50031
, useLabel(ST_v219)
,	/* CT_v221: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA201: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA201))
, bytes2word(0,0,0,0)
, useLabel(CT_v224)
,	/* FN_LAMBDA200: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v223)
, 40031
, useLabel(ST_v222)
,	/* CT_v224: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA200: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA200))
, bytes2word(1,0,0,1)
, useLabel(CT_v226)
,};
Node FN_Prelude_46Show_46Prelude_46Ordering_46show[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v225)
,	/* CT_v226: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Ordering_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Ordering_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46Prelude_46Ordering)
, bytes2word(1,0,0,1)
, useLabel(CT_v228)
,};
Node FN_Prelude_46Show_46Prelude_46Ordering_46showList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v227)
,	/* CT_v228: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Ordering_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Ordering_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46Prelude_46Ordering)
, bytes2word(0,0,0,0)
, useLabel(CT_v230)
,};
Node FN_Prelude_46Show_46Prelude_46Ordering[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
, 30010
, useLabel(ST_v229)
,	/* CT_v230: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46Prelude_46Ordering[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Ordering))
, useLabel(F0_Prelude_46Show_46Prelude_46Ordering_46showsPrec)
, useLabel(F0_Prelude_46Show_46Prelude_46Ordering_46showsType)
, useLabel(F0_Prelude_46Show_46Prelude_46Ordering_46showList)
, useLabel(F0_Prelude_46Show_46Prelude_46Ordering_46show)
,	/* ST_v220: (byte 0) */
 	/* ST_v217: (byte 3) */
  bytes2word(69,81,0,71)
,	/* ST_v223: (byte 2) */
  bytes2word(84,0,76,84)
,	/* ST_v207: (byte 1) */
  bytes2word(0,79,114,100)
, bytes2word(101,114,105,110)
,	/* ST_v229: (byte 2) */
  bytes2word(103,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,101,114)
,	/* ST_v225: (byte 4) */
  bytes2word(105,110,103,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,46,115,104)
,	/* ST_v227: (byte 3) */
  bytes2word(111,119,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,101)
, bytes2word(114,105,110,103)
, bytes2word(46,115,104,111)
, bytes2word(119,76,105,115)
,	/* ST_v213: (byte 2) */
  bytes2word(116,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,101,114)
, bytes2word(105,110,103,46)
, bytes2word(115,104,111,119)
, bytes2word(115,80,114,101)
,	/* ST_v222: (byte 2) */
  bytes2word(99,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,101,114)
, bytes2word(105,110,103,46)
, bytes2word(115,104,111,119)
, bytes2word(115,80,114,101)
, bytes2word(99,58,52,58)
, bytes2word(51,49,45,52)
,	/* ST_v219: (byte 4) */
  bytes2word(58,51,52,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,46,115,104)
, bytes2word(111,119,115,80)
, bytes2word(114,101,99,58)
, bytes2word(53,58,51,49)
, bytes2word(45,53,58,51)
,	/* ST_v216: (byte 2) */
  bytes2word(52,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,101,114)
, bytes2word(105,110,103,46)
, bytes2word(115,104,111,119)
, bytes2word(115,80,114,101)
, bytes2word(99,58,54,58)
, bytes2word(51,49,45,54)
,	/* ST_v204: (byte 4) */
  bytes2word(58,51,52,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,46,115,104)
, bytes2word(111,119,115,84)
,	/* ST_v206: (byte 4) */
  bytes2word(121,112,101,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,46,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,58)
, bytes2word(56,58,50,56)
, bytes2word(45,56,58,51)
, bytes2word(55,0,0,0)
,};
