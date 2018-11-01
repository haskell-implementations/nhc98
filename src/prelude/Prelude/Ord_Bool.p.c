#include "newmacros.h"
#include "runtime.h"

#define v250	((void*)startLabel+22)
#define v252	((void*)startLabel+32)
#define v253	((void*)startLabel+42)
#define v254	((void*)startLabel+52)
#define v256	((void*)startLabel+62)
#define v257	((void*)startLabel+72)
#define CT_v266	((void*)startLabel+216)
#define CT_v270	((void*)startLabel+308)
#define CT_v274	((void*)startLabel+408)
#define CT_v278	((void*)startLabel+508)
#define CT_v282	((void*)startLabel+608)
#define CT_v286	((void*)startLabel+708)
#define CT_v290	((void*)startLabel+808)
#define CT_v294	((void*)startLabel+932)
#define ST_v292	((void*)startLabel+992)
#define ST_v284	((void*)startLabel+1020)
#define ST_v288	((void*)startLabel+1048)
#define ST_v276	((void*)startLabel+1076)
#define ST_v280	((void*)startLabel+1104)
#define ST_v259	((void*)startLabel+1132)
#define ST_v272	((void*)startLabel+1168)
#define ST_v268	((void*)startLabel+1200)
#define PS_v263	((void*)startLabel+1232)
#define PS_v262	((void*)startLabel+1244)
#define PS_v265	((void*)startLabel+1256)
#define PS_v258	((void*)startLabel+1268)
#define PS_v289	((void*)startLabel+1280)
#define PS_v287	((void*)startLabel+1292)
#define PS_v285	((void*)startLabel+1304)
#define PS_v283	((void*)startLabel+1316)
#define PS_v281	((void*)startLabel+1328)
#define PS_v279	((void*)startLabel+1340)
#define PS_v277	((void*)startLabel+1352)
#define PS_v275	((void*)startLabel+1364)
#define PS_v273	((void*)startLabel+1376)
#define PS_v271	((void*)startLabel+1388)
#define PS_v269	((void*)startLabel+1400)
#define PS_v267	((void*)startLabel+1412)
#define PS_v291	((void*)startLabel+1424)
#define PS_v293	((void*)startLabel+1436)
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46Prelude_46Bool[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node CF_Prelude_46Eq_46Prelude_46Bool[];
extern Node PM_Prelude[];
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
, useLabel(CT_v266)
,};
Node FN_Prelude_46Ord_46Prelude_46Bool_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v250: (byte 2) */
  bytes2word(TOP(34),BOT(34),POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v252: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(14),BOT(14))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
,	/* v253: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
,	/* v254: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v256: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CVAL_N1,32)
,	/* v257: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v265)
, 0
, 0
, 0
, 0
, CONSTR(2,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v263)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v262)
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
, useLabel(ST_v259)
,	/* CT_v266: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Bool_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Bool_46compare),2)
, useLabel(PS_v258)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v270)
,};
Node FN_Prelude_46Ord_46Prelude_46Bool_46min[] = {
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
, 30010
, useLabel(ST_v268)
,	/* CT_v270: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Bool_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Bool_46min),2)
, useLabel(PS_v267)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46Prelude_46Bool)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v274)
,};
Node FN_Prelude_46Ord_46Prelude_46Bool_46max[] = {
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
, 30010
, useLabel(ST_v272)
,	/* CT_v274: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Bool_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Bool_46max),2)
, useLabel(PS_v271)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46Prelude_46Bool)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v278)
,};
Node FN_Prelude_46Ord_46Prelude_46Bool_46_62[] = {
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
, 30010
, useLabel(ST_v276)
,	/* CT_v278: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Bool_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Bool_46_62),2)
, useLabel(PS_v275)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46Prelude_46Bool)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v282)
,};
Node FN_Prelude_46Ord_46Prelude_46Bool_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v281)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v280)
,	/* CT_v282: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Bool_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Bool_46_62_61),2)
, useLabel(PS_v279)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46Prelude_46Bool)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v286)
,};
Node FN_Prelude_46Ord_46Prelude_46Bool_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v285)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v284)
,	/* CT_v286: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Bool_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Bool_46_60),2)
, useLabel(PS_v283)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46Prelude_46Bool)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v290)
,};
Node FN_Prelude_46Ord_46Prelude_46Bool_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v289)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v288)
,	/* CT_v290: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Bool_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Bool_46_60_61),2)
, useLabel(PS_v287)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, useLabel(CF_Prelude_46Ord_46Prelude_46Bool)
, bytes2word(0,0,0,0)
, useLabel(CT_v294)
,};
Node FN_Prelude_46Ord_46Prelude_46Bool[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v293)
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
, useLabel(ST_v292)
,	/* CT_v294: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46Prelude_46Bool[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Bool))
, useLabel(PS_v291)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Eq_46Prelude_46Bool)
, useLabel(F0_Prelude_46Ord_46Prelude_46Bool_46_60)
, useLabel(F0_Prelude_46Ord_46Prelude_46Bool_46_60_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Bool_46_62_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Bool_46_62)
, useLabel(F0_Prelude_46Ord_46Prelude_46Bool_46compare)
, useLabel(F0_Prelude_46Ord_46Prelude_46Bool_46min)
, useLabel(F0_Prelude_46Ord_46Prelude_46Bool_46max)
,};
Node PP_Prelude_46Ord_46Prelude_46Bool[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Bool[] = {
 	/* ST_v292: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,111,108)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Bool_46_60[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Bool_46_60[] = {
 	/* ST_v284: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,111,108)
, bytes2word(46,60,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Bool_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Bool_46_60_61[] = {
 	/* ST_v288: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,111,108)
, bytes2word(46,60,61,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Bool_46_62[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Bool_46_62[] = {
 	/* ST_v276: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,111,108)
, bytes2word(46,62,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Bool_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Bool_46_62_61[] = {
 	/* ST_v280: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,111,108)
, bytes2word(46,62,61,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Bool_46compare[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Bool_46compare[] = {
 	/* ST_v259: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,111,108)
, bytes2word(46,99,111,109)
, bytes2word(112,97,114,101)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Bool_46max[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Bool_46max[] = {
 	/* ST_v272: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,111,108)
, bytes2word(46,109,97,120)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Bool_46min[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Bool_46min[] = {
 	/* ST_v268: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,111,108)
, bytes2word(46,109,105,110)
, bytes2word(0,0,0,0)
,	/* PS_v263: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool_46compare)
, useLabel(PC_Prelude_46LT)
,	/* PS_v262: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool_46compare)
, useLabel(PC_Prelude_46EQ)
,	/* PS_v265: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool_46compare)
, useLabel(PC_Prelude_46GT)
,	/* PS_v258: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_46Bool_46compare)
,	/* PS_v289: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool_46_60_61)
, useLabel(PC_Prelude_46_95_46_60_61)
,	/* PS_v287: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Bool_46_60_61)
,	/* PS_v285: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool_46_60)
, useLabel(PC_Prelude_46_95_46_60)
,	/* PS_v283: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_46Bool_46_60)
,	/* PS_v281: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v279: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Bool_46_62_61)
,	/* PS_v277: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v275: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_46Bool_46_62)
,	/* PS_v273: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v271: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_46Bool_46max)
,	/* PS_v269: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v267: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_46Bool_46min)
,	/* PS_v291: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool)
, useLabel(PC_Prelude_46Ord_46Prelude_46Bool)
,	/* PS_v293: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Bool)
, useLabel(PC_Prelude_468)
,};
