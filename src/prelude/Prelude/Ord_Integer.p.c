#include "newmacros.h"
#include "runtime.h"

#define CT_v254	((void*)startLabel+64)
#define CT_v258	((void*)startLabel+160)
#define CT_v262	((void*)startLabel+256)
#define CT_v266	((void*)startLabel+352)
#define CT_v270	((void*)startLabel+448)
#define CT_v274	((void*)startLabel+548)
#define CT_v278	((void*)startLabel+648)
#define CT_v282	((void*)startLabel+772)
#define ST_v280	((void*)startLabel+832)
#define ST_v264	((void*)startLabel+860)
#define ST_v260	((void*)startLabel+892)
#define ST_v252	((void*)startLabel+924)
#define ST_v256	((void*)startLabel+956)
#define ST_v276	((void*)startLabel+988)
#define ST_v272	((void*)startLabel+1024)
#define ST_v268	((void*)startLabel+1056)
#define PS_v265	((void*)startLabel+1088)
#define PS_v263	((void*)startLabel+1100)
#define PS_v261	((void*)startLabel+1112)
#define PS_v259	((void*)startLabel+1124)
#define PS_v257	((void*)startLabel+1136)
#define PS_v255	((void*)startLabel+1148)
#define PS_v253	((void*)startLabel+1160)
#define PS_v251	((void*)startLabel+1172)
#define PS_v277	((void*)startLabel+1184)
#define PS_v275	((void*)startLabel+1196)
#define PS_v273	((void*)startLabel+1208)
#define PS_v271	((void*)startLabel+1220)
#define PS_v269	((void*)startLabel+1232)
#define PS_v267	((void*)startLabel+1244)
#define PS_v279	((void*)startLabel+1256)
#define PS_v281	((void*)startLabel+1268)
extern Node FN_Prelude_46primIntegerGt[];
extern Node FN_Prelude_46primIntegerGe[];
extern Node FN_Prelude_46primIntegerLe[];
extern Node FN_Prelude_46primIntegerLt[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46Prelude_46Integer[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46compare[];
extern Node CF_Prelude_46Eq_46Prelude_46Integer[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46primIntegerLt[];
extern Node PC_Prelude_46primIntegerLe[];
extern Node PC_Prelude_46primIntegerGe[];
extern Node PC_Prelude_46primIntegerGt[];
extern Node PC_Prelude_46_95_46compare[];
extern Node PC_Prelude_46_95_46max[];
extern Node PC_Prelude_46_95_46min[];
extern Node PC_Prelude_468[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v254)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v253)
, 0
, 0
, 0
, 0
, 120003
, useLabel(ST_v252)
,	/* CT_v254: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_62),2)
, useLabel(PS_v251)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerGt))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v258)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v257)
, 0
, 0
, 0
, 0
, 110003
, useLabel(ST_v256)
,	/* CT_v258: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_62_61),2)
, useLabel(PS_v255)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerGe))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v262)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v261)
, 0
, 0
, 0
, 0
, 100003
, useLabel(ST_v260)
,	/* CT_v262: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_60_61),2)
, useLabel(PS_v259)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerLe))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v266)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v265)
, 0
, 0
, 0
, 0
, 90003
, useLabel(ST_v264)
,	/* CT_v266: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_60),2)
, useLabel(PS_v263)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerLt))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v270)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v269)
, 0
, 0
, 0
, 0
, 80010
, useLabel(ST_v268)
,	/* CT_v270: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46min),2)
, useLabel(PS_v267)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46Prelude_46Integer)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v274)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v273)
, 0
, 0
, 0
, 0
, 80010
, useLabel(ST_v272)
,	/* CT_v274: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46max),2)
, useLabel(PS_v271)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46Prelude_46Integer)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v278)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46compare[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v277)
, 0
, 0
, 0
, 0
, 80010
, useLabel(ST_v276)
,	/* CT_v278: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46compare),2)
, useLabel(PS_v275)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46compare))
, useLabel(CF_Prelude_46Ord_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v282)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v281)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
, 0
, 0
, 0
, 0
, 80010
, useLabel(ST_v280)
,	/* CT_v282: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer))
, useLabel(PS_v279)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Eq_46Prelude_46Integer)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46_60)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46_60_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46_62_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46_62)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46compare)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46min)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46max)
,};
Node PP_Prelude_46Ord_46Prelude_46Integer[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Integer[] = {
 	/* ST_v280: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Integer_46_60[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Integer_46_60[] = {
 	/* ST_v264: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(60,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Integer_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Integer_46_60_61[] = {
 	/* ST_v260: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(60,61,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Integer_46_62[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Integer_46_62[] = {
 	/* ST_v252: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(62,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Integer_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Integer_46_62_61[] = {
 	/* ST_v256: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(62,61,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Integer_46compare[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Integer_46compare[] = {
 	/* ST_v276: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(99,111,109,112)
, bytes2word(97,114,101,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Integer_46max[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Integer_46max[] = {
 	/* ST_v272: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(109,97,120,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Integer_46min[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Integer_46min[] = {
 	/* ST_v268: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(109,105,110,0)
,	/* PS_v265: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Integer_46_60)
, useLabel(PC_Prelude_46primIntegerLt)
,	/* PS_v263: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Integer_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_46Integer_46_60)
,	/* PS_v261: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Integer_46_60_61)
, useLabel(PC_Prelude_46primIntegerLe)
,	/* PS_v259: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Integer_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Integer_46_60_61)
,	/* PS_v257: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Integer_46_62_61)
, useLabel(PC_Prelude_46primIntegerGe)
,	/* PS_v255: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Integer_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Integer_46_62_61)
,	/* PS_v253: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Integer_46_62)
, useLabel(PC_Prelude_46primIntegerGt)
,	/* PS_v251: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Integer_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_46Integer_46_62)
,	/* PS_v277: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Integer_46compare)
, useLabel(PC_Prelude_46_95_46compare)
,	/* PS_v275: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Integer_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_46Integer_46compare)
,	/* PS_v273: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Integer_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v271: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Integer_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_46Integer_46max)
,	/* PS_v269: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Integer_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v267: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Integer_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_46Integer_46min)
,	/* PS_v279: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Integer)
, useLabel(PC_Prelude_46Ord_46Prelude_46Integer)
,	/* PS_v281: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Integer)
, useLabel(PC_Prelude_468)
,};
