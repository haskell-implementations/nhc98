#include "newmacros.h"
#include "runtime.h"

#define CT_v250	((void*)startLabel+80)
#define CT_v254	((void*)startLabel+188)
#define CT_v258	((void*)startLabel+296)
#define CT_v262	((void*)startLabel+404)
#define CT_v266	((void*)startLabel+496)
#define CT_v270	((void*)startLabel+596)
#define CT_v274	((void*)startLabel+696)
#define CT_v278	((void*)startLabel+820)
#define ST_v276	((void*)startLabel+880)
#define ST_v260	((void*)startLabel+896)
#define ST_v256	((void*)startLabel+916)
#define ST_v248	((void*)startLabel+936)
#define ST_v252	((void*)startLabel+956)
#define ST_v272	((void*)startLabel+976)
#define ST_v268	((void*)startLabel+1000)
#define ST_v264	((void*)startLabel+1020)
#define PS_v261	((void*)startLabel+1040)
#define PS_v259	((void*)startLabel+1052)
#define PS_v257	((void*)startLabel+1064)
#define PS_v255	((void*)startLabel+1076)
#define PS_v253	((void*)startLabel+1088)
#define PS_v251	((void*)startLabel+1100)
#define PS_v249	((void*)startLabel+1112)
#define PS_v247	((void*)startLabel+1124)
#define PS_v273	((void*)startLabel+1136)
#define PS_v271	((void*)startLabel+1148)
#define PS_v269	((void*)startLabel+1160)
#define PS_v267	((void*)startLabel+1172)
#define PS_v265	((void*)startLabel+1184)
#define PS_v263	((void*)startLabel+1196)
#define PS_v275	((void*)startLabel+1208)
#define PS_v277	((void*)startLabel+1220)
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46_40_41[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46compare[];
extern Node CF_Prelude_46Eq_46_40_41[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46False[];
extern Node PC_Prelude_46True[];
extern Node PC_Prelude_46_95_46compare[];
extern Node PC_Prelude_46_95_46max[];
extern Node PC_Prelude_46_95_46min[];
extern Node PC_Prelude_468[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v250)
,};
Node FN_Prelude_46Ord_46_40_41_46_62[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v249)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 70003
, useLabel(ST_v248)
,	/* CT_v250: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46_62),2)
, useLabel(PS_v247)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v254)
,};
Node FN_Prelude_46Ord_46_40_41_46_62_61[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v253)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, 60003
, useLabel(ST_v252)
,	/* CT_v254: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46_62_61),2)
, useLabel(PS_v251)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v258)
,};
Node FN_Prelude_46Ord_46_40_41_46_60_61[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v257)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, 50003
, useLabel(ST_v256)
,	/* CT_v258: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46_60_61),2)
, useLabel(PS_v255)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v262)
,};
Node FN_Prelude_46Ord_46_40_41_46_60[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v261)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 40003
, useLabel(ST_v260)
,	/* CT_v262: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46_60),2)
, useLabel(PS_v259)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v266)
,};
Node FN_Prelude_46Ord_46_40_41_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v265)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v264)
,	/* CT_v266: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46min),2)
, useLabel(PS_v263)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46_40_41)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v270)
,};
Node FN_Prelude_46Ord_46_40_41_46max[] = {
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
Node F0_Prelude_46Ord_46_40_41_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46max),2)
, useLabel(PS_v267)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46_40_41)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v274)
,};
Node FN_Prelude_46Ord_46_40_41_46compare[] = {
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
Node F0_Prelude_46Ord_46_40_41_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46compare),2)
, useLabel(PS_v271)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46compare))
, useLabel(CF_Prelude_46Ord_46_40_41)
, bytes2word(0,0,0,0)
, useLabel(CT_v278)
,};
Node FN_Prelude_46Ord_46_40_41[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v277)
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
, useLabel(ST_v276)
,	/* CT_v278: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46_40_41[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46_40_41))
, useLabel(PS_v275)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Eq_46_40_41)
, useLabel(F0_Prelude_46Ord_46_40_41_46_60)
, useLabel(F0_Prelude_46Ord_46_40_41_46_60_61)
, useLabel(F0_Prelude_46Ord_46_40_41_46_62_61)
, useLabel(F0_Prelude_46Ord_46_40_41_46_62)
, useLabel(F0_Prelude_46Ord_46_40_41_46compare)
, useLabel(F0_Prelude_46Ord_46_40_41_46min)
, useLabel(F0_Prelude_46Ord_46_40_41_46max)
,};
Node PP_Prelude_46Ord_46_40_41[] = {
 };
Node PC_Prelude_46Ord_46_40_41[] = {
 	/* ST_v276: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(40,41,0,0)
,};
Node PP_Prelude_46Ord_46_40_41_46_60[] = {
 };
Node PC_Prelude_46Ord_46_40_41_46_60[] = {
 	/* ST_v260: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(40,41,46,60)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46_40_41_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46_40_41_46_60_61[] = {
 	/* ST_v256: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(40,41,46,60)
, bytes2word(61,0,0,0)
,};
Node PP_Prelude_46Ord_46_40_41_46_62[] = {
 };
Node PC_Prelude_46Ord_46_40_41_46_62[] = {
 	/* ST_v248: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(40,41,46,62)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46_40_41_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46_40_41_46_62_61[] = {
 	/* ST_v252: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(40,41,46,62)
, bytes2word(61,0,0,0)
,};
Node PP_Prelude_46Ord_46_40_41_46compare[] = {
 };
Node PC_Prelude_46Ord_46_40_41_46compare[] = {
 	/* ST_v272: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(40,41,46,99)
, bytes2word(111,109,112,97)
, bytes2word(114,101,0,0)
,};
Node PP_Prelude_46Ord_46_40_41_46max[] = {
 };
Node PC_Prelude_46Ord_46_40_41_46max[] = {
 	/* ST_v268: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(40,41,46,109)
, bytes2word(97,120,0,0)
,};
Node PP_Prelude_46Ord_46_40_41_46min[] = {
 };
Node PC_Prelude_46Ord_46_40_41_46min[] = {
 	/* ST_v264: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(40,41,46,109)
, bytes2word(105,110,0,0)
,	/* PS_v261: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46_40_41_46_60)
, useLabel(PC_Prelude_46False)
,	/* PS_v259: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46_40_41_46_60)
, useLabel(PC_Prelude_46Ord_46_40_41_46_60)
,	/* PS_v257: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46_40_41_46_60_61)
, useLabel(PC_Prelude_46True)
,	/* PS_v255: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46_40_41_46_60_61)
, useLabel(PC_Prelude_46Ord_46_40_41_46_60_61)
,	/* PS_v253: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46_40_41_46_62_61)
, useLabel(PC_Prelude_46True)
,	/* PS_v251: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46_40_41_46_62_61)
, useLabel(PC_Prelude_46Ord_46_40_41_46_62_61)
,	/* PS_v249: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46_40_41_46_62)
, useLabel(PC_Prelude_46False)
,	/* PS_v247: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46_40_41_46_62)
, useLabel(PC_Prelude_46Ord_46_40_41_46_62)
,	/* PS_v273: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46_40_41_46compare)
, useLabel(PC_Prelude_46_95_46compare)
,	/* PS_v271: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46_40_41_46compare)
, useLabel(PC_Prelude_46Ord_46_40_41_46compare)
,	/* PS_v269: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46_40_41_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v267: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46_40_41_46max)
, useLabel(PC_Prelude_46Ord_46_40_41_46max)
,	/* PS_v265: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46_40_41_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v263: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46_40_41_46min)
, useLabel(PC_Prelude_46Ord_46_40_41_46min)
,	/* PS_v275: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46_40_41)
, useLabel(PC_Prelude_46Ord_46_40_41)
,	/* PS_v277: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46_40_41)
, useLabel(PC_Prelude_468)
,};
