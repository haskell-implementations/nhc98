#include "newmacros.h"
#include "runtime.h"

#define CT_v207	((void*)startLabel+64)
#define FN_LAMBDA199	((void*)startLabel+108)
#define CT_v211	((void*)startLabel+152)
#define CF_LAMBDA199	((void*)startLabel+160)
#define v213	((void*)startLabel+206)
#define v214	((void*)startLabel+222)
#define v215	((void*)startLabel+238)
#define CT_v220	((void*)startLabel+292)
#define FN_LAMBDA202	((void*)startLabel+344)
#define CT_v224	((void*)startLabel+388)
#define CF_LAMBDA202	((void*)startLabel+396)
#define FN_LAMBDA201	((void*)startLabel+424)
#define CT_v228	((void*)startLabel+468)
#define CF_LAMBDA201	((void*)startLabel+476)
#define FN_LAMBDA200	((void*)startLabel+504)
#define CT_v232	((void*)startLabel+548)
#define CF_LAMBDA200	((void*)startLabel+556)
#define CT_v236	((void*)startLabel+636)
#define CT_v240	((void*)startLabel+732)
#define CT_v244	((void*)startLabel+848)
#define ST_v227	((void*)startLabel+892)
#define ST_v223	((void*)startLabel+895)
#define ST_v231	((void*)startLabel+898)
#define ST_v210	((void*)startLabel+901)
#define ST_v242	((void*)startLabel+912)
#define ST_v234	((void*)startLabel+944)
#define ST_v238	((void*)startLabel+980)
#define ST_v217	((void*)startLabel+1020)
#define PP_LAMBDA200	((void*)startLabel+1060)
#define PC_LAMBDA200	((void*)startLabel+1060)
#define ST_v230	((void*)startLabel+1060)
#define PP_LAMBDA201	((void*)startLabel+1110)
#define PC_LAMBDA201	((void*)startLabel+1110)
#define ST_v226	((void*)startLabel+1110)
#define PP_LAMBDA202	((void*)startLabel+1160)
#define PC_LAMBDA202	((void*)startLabel+1160)
#define ST_v222	((void*)startLabel+1160)
#define ST_v205	((void*)startLabel+1212)
#define PP_LAMBDA199	((void*)startLabel+1252)
#define PC_LAMBDA199	((void*)startLabel+1252)
#define ST_v209	((void*)startLabel+1252)
#define PS_v219	((void*)startLabel+1304)
#define PS_v216	((void*)startLabel+1316)
#define PS_v206	((void*)startLabel+1328)
#define PS_v204	((void*)startLabel+1340)
#define PS_v239	((void*)startLabel+1352)
#define PS_v237	((void*)startLabel+1364)
#define PS_v235	((void*)startLabel+1376)
#define PS_v233	((void*)startLabel+1388)
#define PS_v241	((void*)startLabel+1400)
#define PS_v243	((void*)startLabel+1412)
#define PS_v208	((void*)startLabel+1424)
#define PS_v229	((void*)startLabel+1436)
#define PS_v225	((void*)startLabel+1448)
#define PS_v221	((void*)startLabel+1460)
extern Node FN_Prelude_46showString[];
extern Node FN_Prelude_46_95_46show[];
extern Node CF_Prelude_46Show_46Prelude_46Ordering[];
extern Node FN_Prelude_46_95_46showList[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46showString[];
extern Node PC_Prelude_46_95_46showList[];
extern Node PC_Prelude_46_95_46show[];
extern Node PC_Prelude_464[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v207)
,};
Node FN_Prelude_46Show_46Prelude_46Ordering_46showsType[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_CVAL_P1,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v206)
, 0
, 0
, 0
, 0
, 80003
, useLabel(ST_v205)
,	/* CT_v207: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Ordering_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Ordering_46showsType),1)
, useLabel(PS_v204)
, 0
, 0
, 0
, useLabel(CF_LAMBDA199)
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(0,0,0,0)
, useLabel(CT_v211)
,	/* FN_LAMBDA199: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v210)
, 80028
, useLabel(ST_v209)
,	/* CT_v211: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA199: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA199))
, useLabel(PS_v208)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v220)
,};
Node FN_Prelude_46Show_46Prelude_46Ordering_46showsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(22),BOT(22))
,	/* v213: (byte 2) */
  bytes2word(TOP(38),BOT(38),POP_I1,PUSH_CVAL_P1)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,EVAL,NEEDHEAP_I32,APPLY)
,	/* v214: (byte 2) */
  bytes2word(1,RETURN_EVAL,POP_I1,PUSH_CVAL_P1)
, bytes2word(9,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,EVAL,NEEDHEAP_I32,APPLY)
,	/* v215: (byte 2) */
  bytes2word(1,RETURN_EVAL,POP_I1,PUSH_CVAL_P1)
, bytes2word(10,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v219)
, 0
, 0
, 0
, 0
, 40003
, useLabel(ST_v217)
,	/* CT_v220: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Ordering_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Ordering_46showsPrec),2)
, useLabel(PS_v216)
, 0
, 0
, 0
, useLabel(CF_LAMBDA200)
, VAPTAG(useLabel(FN_Prelude_46showString))
, useLabel(CF_LAMBDA201)
, useLabel(CF_LAMBDA202)
, bytes2word(0,0,0,0)
, useLabel(CT_v224)
,	/* FN_LAMBDA202: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v223)
, 60031
, useLabel(ST_v222)
,	/* CT_v224: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA202: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA202))
, useLabel(PS_v221)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v228)
,	/* FN_LAMBDA201: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v227)
, 50031
, useLabel(ST_v226)
,	/* CT_v228: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA201: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA201))
, useLabel(PS_v225)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v232)
,	/* FN_LAMBDA200: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v231)
, 40031
, useLabel(ST_v230)
,	/* CT_v232: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA200: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA200))
, useLabel(PS_v229)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v236)
,};
Node FN_Prelude_46Show_46Prelude_46Ordering_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v235)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v234)
,	/* CT_v236: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Ordering_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Ordering_46show),1)
, useLabel(PS_v233)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46Prelude_46Ordering)
, bytes2word(1,0,0,1)
, useLabel(CT_v240)
,};
Node FN_Prelude_46Show_46Prelude_46Ordering_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v239)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v238)
,	/* CT_v240: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Ordering_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Ordering_46showList),1)
, useLabel(PS_v237)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46Prelude_46Ordering)
, bytes2word(0,0,0,0)
, useLabel(CT_v244)
,};
Node FN_Prelude_46Show_46Prelude_46Ordering[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v243)
, 0
, 0
, 0
, 0
, CONSTR(0,4,0)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v242)
,	/* CT_v244: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46Prelude_46Ordering[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Ordering))
, useLabel(PS_v241)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Show_46Prelude_46Ordering_46showsPrec)
, useLabel(F0_Prelude_46Show_46Prelude_46Ordering_46showsType)
, useLabel(F0_Prelude_46Show_46Prelude_46Ordering_46showList)
, useLabel(F0_Prelude_46Show_46Prelude_46Ordering_46show)
,	/* ST_v227: (byte 0) */
 	/* ST_v223: (byte 3) */
  bytes2word(69,81,0,71)
,	/* ST_v231: (byte 2) */
  bytes2word(84,0,76,84)
,	/* ST_v210: (byte 1) */
  bytes2word(0,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,0,0,0)
,};
Node PP_Prelude_46Show_46Prelude_46Ordering[] = {
 };
Node PC_Prelude_46Show_46Prelude_46Ordering[] = {
 	/* ST_v242: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,0,0,0)
,};
Node PP_Prelude_46Show_46Prelude_46Ordering_46show[] = {
 };
Node PC_Prelude_46Show_46Prelude_46Ordering_46show[] = {
 	/* ST_v234: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,46,115,104)
, bytes2word(111,119,0,0)
,};
Node PP_Prelude_46Show_46Prelude_46Ordering_46showList[] = {
 };
Node PC_Prelude_46Show_46Prelude_46Ordering_46showList[] = {
 	/* ST_v238: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,46,115,104)
, bytes2word(111,119,76,105)
, bytes2word(115,116,0,0)
,};
Node PP_Prelude_46Show_46Prelude_46Ordering_46showsPrec[] = {
 };
Node PC_Prelude_46Show_46Prelude_46Ordering_46showsPrec[] = {
 	/* ST_v217: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,46,115,104)
, bytes2word(111,119,115,80)
,	/* PP_LAMBDA200: (byte 4) */
 	/* PC_LAMBDA200: (byte 4) */
 	/* ST_v230: (byte 4) */
  bytes2word(114,101,99,0)
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
, bytes2word(52,58,51,49)
, bytes2word(45,52,58,51)
,	/* PP_LAMBDA201: (byte 2) */
 	/* PC_LAMBDA201: (byte 2) */
 	/* ST_v226: (byte 2) */
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
, bytes2word(99,58,53,58)
, bytes2word(51,49,45,53)
,	/* PP_LAMBDA202: (byte 4) */
 	/* PC_LAMBDA202: (byte 4) */
 	/* ST_v222: (byte 4) */
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
, bytes2word(54,58,51,49)
, bytes2word(45,54,58,51)
, bytes2word(52,0,0,0)
,};
Node PP_Prelude_46Show_46Prelude_46Ordering_46showsType[] = {
 };
Node PC_Prelude_46Show_46Prelude_46Ordering_46showsType[] = {
 	/* ST_v205: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,46,115,104)
, bytes2word(111,119,115,84)
,	/* PP_LAMBDA199: (byte 4) */
 	/* PC_LAMBDA199: (byte 4) */
 	/* ST_v209: (byte 4) */
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
,	/* PS_v219: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_46Ordering_46showsPrec)
, useLabel(PC_Prelude_46showString)
,	/* PS_v216: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_46Ordering_46showsPrec)
, useLabel(PC_Prelude_46Show_46Prelude_46Ordering_46showsPrec)
,	/* PS_v206: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_46Ordering_46showsType)
, useLabel(PC_Prelude_46showString)
,	/* PS_v204: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_46Ordering_46showsType)
, useLabel(PC_Prelude_46Show_46Prelude_46Ordering_46showsType)
,	/* PS_v239: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_46Ordering_46showList)
, useLabel(PC_Prelude_46_95_46showList)
,	/* PS_v237: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_46Ordering_46showList)
, useLabel(PC_Prelude_46Show_46Prelude_46Ordering_46showList)
,	/* PS_v235: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_46Ordering_46show)
, useLabel(PC_Prelude_46_95_46show)
,	/* PS_v233: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_46Ordering_46show)
, useLabel(PC_Prelude_46Show_46Prelude_46Ordering_46show)
,	/* PS_v241: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_46Ordering)
, useLabel(PC_Prelude_46Show_46Prelude_46Ordering)
,	/* PS_v243: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_46Ordering)
, useLabel(PC_Prelude_464)
,	/* PS_v208: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA199)
, useLabel(PC_LAMBDA199)
,	/* PS_v229: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA200)
, useLabel(PC_LAMBDA200)
,	/* PS_v225: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA201)
, useLabel(PC_LAMBDA201)
,	/* PS_v221: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA202)
, useLabel(PC_LAMBDA202)
,};
