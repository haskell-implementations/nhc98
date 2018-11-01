#include "newmacros.h"
#include "runtime.h"

#define v267	((void*)startLabel+22)
#define v269	((void*)startLabel+32)
#define v270	((void*)startLabel+42)
#define v271	((void*)startLabel+53)
#define v273	((void*)startLabel+64)
#define v274	((void*)startLabel+74)
#define CT_v284	((void*)startLabel+244)
#define CT_v288	((void*)startLabel+340)
#define CT_v292	((void*)startLabel+440)
#define CT_v296	((void*)startLabel+540)
#define CT_v300	((void*)startLabel+640)
#define CT_v304	((void*)startLabel+740)
#define CT_v308	((void*)startLabel+840)
#define CT_v312	((void*)startLabel+964)
#define ST_v310	((void*)startLabel+1024)
#define ST_v302	((void*)startLabel+1052)
#define ST_v306	((void*)startLabel+1084)
#define ST_v294	((void*)startLabel+1116)
#define ST_v298	((void*)startLabel+1148)
#define ST_v276	((void*)startLabel+1180)
#define ST_v290	((void*)startLabel+1216)
#define ST_v286	((void*)startLabel+1248)
#define PS_v280	((void*)startLabel+1280)
#define PS_v279	((void*)startLabel+1292)
#define PS_v282	((void*)startLabel+1304)
#define PS_v275	((void*)startLabel+1316)
#define PS_v283	((void*)startLabel+1328)
#define PS_v307	((void*)startLabel+1340)
#define PS_v305	((void*)startLabel+1352)
#define PS_v303	((void*)startLabel+1364)
#define PS_v301	((void*)startLabel+1376)
#define PS_v299	((void*)startLabel+1388)
#define PS_v297	((void*)startLabel+1400)
#define PS_v295	((void*)startLabel+1412)
#define PS_v293	((void*)startLabel+1424)
#define PS_v291	((void*)startLabel+1436)
#define PS_v289	((void*)startLabel+1448)
#define PS_v287	((void*)startLabel+1460)
#define PS_v285	((void*)startLabel+1472)
#define PS_v309	((void*)startLabel+1484)
#define PS_v311	((void*)startLabel+1496)
extern Node FN_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46System_46ExitCode[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node CF_Prelude_46Eq_46System_46ExitCode[];
extern Node PM_System[];
extern Node PC_Prelude_46LT[];
extern Node PC_Prelude_46EQ[];
extern Node PC_Prelude_46GT[];
extern Node PC_Prelude_46Ord_46Prelude_46Int_46compare[];
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
, useLabel(CT_v284)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v267: (byte 2) */
  bytes2word(TOP(35),BOT(35),POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v269: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(14),BOT(14))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
,	/* v270: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
,	/* v271: (byte 1) */
  bytes2word(RETURN,UNPACK,1,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v273: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(14),BOT(14))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
,	/* v274: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I2,HEAP_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v283)
, 0
, 0
, 0
, 0
, useLabel(PS_v282)
, 0
, 0
, 0
, 0
, CONSTR(2,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v280)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v279)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, 70003
, useLabel(ST_v276)
,	/* CT_v284: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46compare),2)
, useLabel(PS_v275)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v288)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v287)
, 0
, 0
, 0
, 0
, 60010
, useLabel(ST_v286)
,	/* CT_v288: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46min),2)
, useLabel(PS_v285)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v292)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v291)
, 0
, 0
, 0
, 0
, 60010
, useLabel(ST_v290)
,	/* CT_v292: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46max),2)
, useLabel(PS_v289)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v296)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v295)
, 0
, 0
, 0
, 0
, 60010
, useLabel(ST_v294)
,	/* CT_v296: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46_62),2)
, useLabel(PS_v293)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v300)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v299)
, 0
, 0
, 0
, 0
, 60010
, useLabel(ST_v298)
,	/* CT_v300: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46_62_61),2)
, useLabel(PS_v297)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v304)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v303)
, 0
, 0
, 0
, 0
, 60010
, useLabel(ST_v302)
,	/* CT_v304: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46_60),2)
, useLabel(PS_v301)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v308)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v307)
, 0
, 0
, 0
, 0
, 60010
, useLabel(ST_v306)
,	/* CT_v308: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46_60_61),2)
, useLabel(PS_v305)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,0,0)
, useLabel(CT_v312)
,};
Node FN_Prelude_46Ord_46System_46ExitCode[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v311)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
, 0
, 0
, 0
, 0
, 60010
, useLabel(ST_v310)
,	/* CT_v312: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46System_46ExitCode[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode))
, useLabel(PS_v309)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Eq_46System_46ExitCode)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46_60)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46_60_61)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46_62_61)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46_62)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46compare)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46min)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46max)
,};
Node PP_Prelude_46Ord_46System_46ExitCode[] = {
 };
Node PC_Prelude_46Ord_46System_46ExitCode[] = {
 	/* ST_v310: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,67)
, bytes2word(111,100,101,0)
,};
Node PP_Prelude_46Ord_46System_46ExitCode_46_60[] = {
 };
Node PC_Prelude_46Ord_46System_46ExitCode_46_60[] = {
 	/* ST_v302: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,67)
, bytes2word(111,100,101,46)
, bytes2word(60,0,0,0)
,};
Node PP_Prelude_46Ord_46System_46ExitCode_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46System_46ExitCode_46_60_61[] = {
 	/* ST_v306: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,67)
, bytes2word(111,100,101,46)
, bytes2word(60,61,0,0)
,};
Node PP_Prelude_46Ord_46System_46ExitCode_46_62[] = {
 };
Node PC_Prelude_46Ord_46System_46ExitCode_46_62[] = {
 	/* ST_v294: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,67)
, bytes2word(111,100,101,46)
, bytes2word(62,0,0,0)
,};
Node PP_Prelude_46Ord_46System_46ExitCode_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46System_46ExitCode_46_62_61[] = {
 	/* ST_v298: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,67)
, bytes2word(111,100,101,46)
, bytes2word(62,61,0,0)
,};
Node PP_Prelude_46Ord_46System_46ExitCode_46compare[] = {
 };
Node PC_Prelude_46Ord_46System_46ExitCode_46compare[] = {
 	/* ST_v276: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,67)
, bytes2word(111,100,101,46)
, bytes2word(99,111,109,112)
, bytes2word(97,114,101,0)
,};
Node PP_Prelude_46Ord_46System_46ExitCode_46max[] = {
 };
Node PC_Prelude_46Ord_46System_46ExitCode_46max[] = {
 	/* ST_v290: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,67)
, bytes2word(111,100,101,46)
, bytes2word(109,97,120,0)
,};
Node PP_Prelude_46Ord_46System_46ExitCode_46min[] = {
 };
Node PC_Prelude_46Ord_46System_46ExitCode_46min[] = {
 	/* ST_v286: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,67)
, bytes2word(111,100,101,46)
, bytes2word(109,105,110,0)
,	/* PS_v280: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode_46compare)
, useLabel(PC_Prelude_46LT)
,	/* PS_v279: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode_46compare)
, useLabel(PC_Prelude_46EQ)
,	/* PS_v282: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode_46compare)
, useLabel(PC_Prelude_46GT)
,	/* PS_v275: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode_46compare)
, useLabel(PC_Prelude_46Ord_46System_46ExitCode_46compare)
,	/* PS_v283: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_46Int_46compare)
,	/* PS_v307: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode_46_60_61)
, useLabel(PC_Prelude_46_95_46_60_61)
,	/* PS_v305: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode_46_60_61)
, useLabel(PC_Prelude_46Ord_46System_46ExitCode_46_60_61)
,	/* PS_v303: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode_46_60)
, useLabel(PC_Prelude_46_95_46_60)
,	/* PS_v301: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode_46_60)
, useLabel(PC_Prelude_46Ord_46System_46ExitCode_46_60)
,	/* PS_v299: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v297: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode_46_62_61)
, useLabel(PC_Prelude_46Ord_46System_46ExitCode_46_62_61)
,	/* PS_v295: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v293: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode_46_62)
, useLabel(PC_Prelude_46Ord_46System_46ExitCode_46_62)
,	/* PS_v291: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v289: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode_46max)
, useLabel(PC_Prelude_46Ord_46System_46ExitCode_46max)
,	/* PS_v287: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v285: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode_46min)
, useLabel(PC_Prelude_46Ord_46System_46ExitCode_46min)
,	/* PS_v309: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode)
, useLabel(PC_Prelude_46Ord_46System_46ExitCode)
,	/* PS_v311: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_Prelude_46Ord_46System_46ExitCode)
, useLabel(PC_Prelude_468)
,};
