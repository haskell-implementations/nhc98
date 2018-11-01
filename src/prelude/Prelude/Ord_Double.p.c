#include "newmacros.h"
#include "runtime.h"

#define CT_v261	((void*)startLabel+32)
#define CT_v264	((void*)startLabel+92)
#define CT_v267	((void*)startLabel+152)
#define CT_v270	((void*)startLabel+212)
#define CT_v274	((void*)startLabel+304)
#define CT_v278	((void*)startLabel+404)
#define CT_v282	((void*)startLabel+504)
#define CT_v286	((void*)startLabel+628)
#define ST_v284	((void*)startLabel+688)
#define ST_v269	((void*)startLabel+716)
#define ST_v266	((void*)startLabel+748)
#define ST_v260	((void*)startLabel+780)
#define ST_v263	((void*)startLabel+812)
#define ST_v280	((void*)startLabel+844)
#define ST_v276	((void*)startLabel+880)
#define ST_v272	((void*)startLabel+912)
#define PS_v268	((void*)startLabel+944)
#define PS_v265	((void*)startLabel+956)
#define PS_v262	((void*)startLabel+968)
#define PS_v259	((void*)startLabel+980)
#define PS_v281	((void*)startLabel+992)
#define PS_v279	((void*)startLabel+1004)
#define PS_v277	((void*)startLabel+1016)
#define PS_v275	((void*)startLabel+1028)
#define PS_v273	((void*)startLabel+1040)
#define PS_v271	((void*)startLabel+1052)
#define PS_v283	((void*)startLabel+1064)
#define PS_v285	((void*)startLabel+1076)
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46Prelude_46Double[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46compare[];
extern Node CF_Prelude_46Eq_46Prelude_46Double[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46_95_46compare[];
extern Node PC_Prelude_46_95_46max[];
extern Node PC_Prelude_46_95_46min[];
extern Node PC_Prelude_468[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v261)
,};
Node FN_Prelude_46Ord_46Prelude_46Double_46_62[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,GT_D,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 80003
, useLabel(ST_v260)
,	/* CT_v261: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Double_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Double_46_62),2)
, useLabel(PS_v259)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v264)
,};
Node FN_Prelude_46Ord_46Prelude_46Double_46_62_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,GE_D,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 70003
, useLabel(ST_v263)
,	/* CT_v264: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Double_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Double_46_62_61),2)
, useLabel(PS_v262)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v267)
,};
Node FN_Prelude_46Ord_46Prelude_46Double_46_60_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,LE_D,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 60003
, useLabel(ST_v266)
,	/* CT_v267: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Double_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Double_46_60_61),2)
, useLabel(PS_v265)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v270)
,};
Node FN_Prelude_46Ord_46Prelude_46Double_46_60[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,LT_D,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 50003
, useLabel(ST_v269)
,	/* CT_v270: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Double_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Double_46_60),2)
, useLabel(PS_v268)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v274)
,};
Node FN_Prelude_46Ord_46Prelude_46Double_46min[] = {
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
, 40010
, useLabel(ST_v272)
,	/* CT_v274: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Double_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Double_46min),2)
, useLabel(PS_v271)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46Prelude_46Double)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v278)
,};
Node FN_Prelude_46Ord_46Prelude_46Double_46max[] = {
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
, 40010
, useLabel(ST_v276)
,	/* CT_v278: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Double_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Double_46max),2)
, useLabel(PS_v275)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46Prelude_46Double)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v282)
,};
Node FN_Prelude_46Ord_46Prelude_46Double_46compare[] = {
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
, 40010
, useLabel(ST_v280)
,	/* CT_v282: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Double_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Double_46compare),2)
, useLabel(PS_v279)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46compare))
, useLabel(CF_Prelude_46Ord_46Prelude_46Double)
, bytes2word(0,0,0,0)
, useLabel(CT_v286)
,};
Node FN_Prelude_46Ord_46Prelude_46Double[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v285)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
, 0
, 0
, 0
, 0
, 40010
, useLabel(ST_v284)
,	/* CT_v286: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46Prelude_46Double[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Double))
, useLabel(PS_v283)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Eq_46Prelude_46Double)
, useLabel(F0_Prelude_46Ord_46Prelude_46Double_46_60)
, useLabel(F0_Prelude_46Ord_46Prelude_46Double_46_60_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Double_46_62_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Double_46_62)
, useLabel(F0_Prelude_46Ord_46Prelude_46Double_46compare)
, useLabel(F0_Prelude_46Ord_46Prelude_46Double_46min)
, useLabel(F0_Prelude_46Ord_46Prelude_46Double_46max)
,};
Node PP_Prelude_46Ord_46Prelude_46Double[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Double[] = {
 	/* ST_v284: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(68,111,117,98)
, bytes2word(108,101,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Double_46_60[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Double_46_60[] = {
 	/* ST_v269: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(68,111,117,98)
, bytes2word(108,101,46,60)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Double_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Double_46_60_61[] = {
 	/* ST_v266: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(68,111,117,98)
, bytes2word(108,101,46,60)
, bytes2word(61,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Double_46_62[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Double_46_62[] = {
 	/* ST_v260: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(68,111,117,98)
, bytes2word(108,101,46,62)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Double_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Double_46_62_61[] = {
 	/* ST_v263: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(68,111,117,98)
, bytes2word(108,101,46,62)
, bytes2word(61,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Double_46compare[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Double_46compare[] = {
 	/* ST_v280: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(68,111,117,98)
, bytes2word(108,101,46,99)
, bytes2word(111,109,112,97)
, bytes2word(114,101,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Double_46max[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Double_46max[] = {
 	/* ST_v276: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(68,111,117,98)
, bytes2word(108,101,46,109)
, bytes2word(97,120,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Double_46min[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Double_46min[] = {
 	/* ST_v272: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(68,111,117,98)
, bytes2word(108,101,46,109)
, bytes2word(105,110,0,0)
,	/* PS_v268: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Double_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_46Double_46_60)
,	/* PS_v265: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Double_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Double_46_60_61)
,	/* PS_v262: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Double_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Double_46_62_61)
,	/* PS_v259: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Double_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_46Double_46_62)
,	/* PS_v281: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Double_46compare)
, useLabel(PC_Prelude_46_95_46compare)
,	/* PS_v279: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Double_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_46Double_46compare)
,	/* PS_v277: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Double_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v275: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Double_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_46Double_46max)
,	/* PS_v273: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Double_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v271: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Double_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_46Double_46min)
,	/* PS_v283: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Double)
, useLabel(PC_Prelude_46Ord_46Prelude_46Double)
,	/* PS_v285: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Double)
, useLabel(PC_Prelude_468)
,};
