#include "newmacros.h"
#include "runtime.h"

#define CT_v258	((void*)startLabel+64)
#define CT_v262	((void*)startLabel+160)
#define CT_v266	((void*)startLabel+260)
#define CT_v270	((void*)startLabel+360)
#define CT_v274	((void*)startLabel+460)
#define CT_v278	((void*)startLabel+560)
#define CT_v282	((void*)startLabel+660)
#define CT_v286	((void*)startLabel+784)
#define ST_v284	((void*)startLabel+844)
#define ST_v276	((void*)startLabel+888)
#define ST_v280	((void*)startLabel+932)
#define ST_v268	((void*)startLabel+980)
#define ST_v272	((void*)startLabel+1024)
#define ST_v256	((void*)startLabel+1072)
#define ST_v264	((void*)startLabel+1124)
#define ST_v260	((void*)startLabel+1172)
#define PS_v257	((void*)startLabel+1220)
#define PS_v255	((void*)startLabel+1232)
#define PS_v281	((void*)startLabel+1244)
#define PS_v279	((void*)startLabel+1256)
#define PS_v277	((void*)startLabel+1268)
#define PS_v275	((void*)startLabel+1280)
#define PS_v273	((void*)startLabel+1292)
#define PS_v271	((void*)startLabel+1304)
#define PS_v269	((void*)startLabel+1316)
#define PS_v267	((void*)startLabel+1328)
#define PS_v265	((void*)startLabel+1340)
#define PS_v263	((void*)startLabel+1352)
#define PS_v261	((void*)startLabel+1364)
#define PS_v259	((void*)startLabel+1376)
#define PS_v283	((void*)startLabel+1388)
#define PS_v285	((void*)startLabel+1400)
extern Node FN_NHC_46PackedString_46primComparePS[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46NHC_46PackedString_46PackedString[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node CF_Prelude_46Eq_46NHC_46PackedString_46PackedString[];
extern Node PM_NHC_46PackedString[];
extern Node PC_NHC_46PackedString_46primComparePS[];
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
, useLabel(CT_v258)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46compare[] = {
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
, 80005
, useLabel(ST_v256)
,	/* CT_v258: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46compare),2)
, useLabel(PS_v255)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46PackedString_46primComparePS))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v262)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v261)
, 0
, 0
, 0
, 0
, 70010
, useLabel(ST_v260)
,	/* CT_v262: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46min),2)
, useLabel(PS_v259)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v266)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46max[] = {
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
, 70010
, useLabel(ST_v264)
,	/* CT_v266: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46max),2)
, useLabel(PS_v263)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v270)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62[] = {
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
, 70010
, useLabel(ST_v268)
,	/* CT_v270: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62),2)
, useLabel(PS_v267)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v274)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62_61[] = {
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
, 70010
, useLabel(ST_v272)
,	/* CT_v274: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62_61),2)
, useLabel(PS_v271)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v278)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60[] = {
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
, 70010
, useLabel(ST_v276)
,	/* CT_v278: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60),2)
, useLabel(PS_v275)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v282)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60_61[] = {
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
, 70010
, useLabel(ST_v280)
,	/* CT_v282: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60_61),2)
, useLabel(PS_v279)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,0,0)
, useLabel(CT_v286)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString[] = {
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
, 70010
, useLabel(ST_v284)
,	/* CT_v286: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46NHC_46PackedString_46PackedString[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString))
, useLabel(PS_v283)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Eq_46NHC_46PackedString_46PackedString)
, useLabel(F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60)
, useLabel(F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60_61)
, useLabel(F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62_61)
, useLabel(F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62)
, useLabel(F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46compare)
, useLabel(F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46min)
, useLabel(F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46max)
,};
Node PP_Prelude_46Ord_46NHC_46PackedString_46PackedString[] = {
 };
Node PC_Prelude_46Ord_46NHC_46PackedString_46PackedString[] = {
 	/* ST_v284: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,0,0,0)
,};
Node PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60[] = {
 };
Node PC_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60[] = {
 	/* ST_v276: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,60,0)
,};
Node PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60_61[] = {
 	/* ST_v280: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,60,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62[] = {
 };
Node PC_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62[] = {
 	/* ST_v268: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,62,0)
,};
Node PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62_61[] = {
 	/* ST_v272: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,62,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46compare[] = {
 };
Node PC_Prelude_46Ord_46NHC_46PackedString_46PackedString_46compare[] = {
 	/* ST_v256: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,99,111)
, bytes2word(109,112,97,114)
, bytes2word(101,0,0,0)
,};
Node PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46max[] = {
 };
Node PC_Prelude_46Ord_46NHC_46PackedString_46PackedString_46max[] = {
 	/* ST_v264: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,109,97)
, bytes2word(120,0,0,0)
,};
Node PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46min[] = {
 };
Node PC_Prelude_46Ord_46NHC_46PackedString_46PackedString_46min[] = {
 	/* ST_v260: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,109,105)
, bytes2word(110,0,0,0)
,	/* PS_v257: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46compare)
, useLabel(PC_NHC_46PackedString_46primComparePS)
,	/* PS_v255: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46compare)
, useLabel(PC_Prelude_46Ord_46NHC_46PackedString_46PackedString_46compare)
,	/* PS_v281: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60_61)
, useLabel(PC_Prelude_46_95_46_60_61)
,	/* PS_v279: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60_61)
, useLabel(PC_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60_61)
,	/* PS_v277: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60)
, useLabel(PC_Prelude_46_95_46_60)
,	/* PS_v275: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60)
, useLabel(PC_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60)
,	/* PS_v273: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v271: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62_61)
, useLabel(PC_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62_61)
,	/* PS_v269: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v267: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62)
, useLabel(PC_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62)
,	/* PS_v265: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v263: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46max)
, useLabel(PC_Prelude_46Ord_46NHC_46PackedString_46PackedString_46max)
,	/* PS_v261: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v259: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_Prelude_46Ord_46NHC_46PackedString_46PackedString_46min)
, useLabel(PC_Prelude_46Ord_46NHC_46PackedString_46PackedString_46min)
,	/* PS_v283: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, useLabel(PC_Prelude_46Ord_46NHC_46PackedString_46PackedString)
,	/* PS_v285: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, useLabel(PC_Prelude_468)
,};
