#include "newmacros.h"
#include "runtime.h"

#define CT_v261	((void*)startLabel+60)
#define CT_v267	((void*)startLabel+232)
#define CT_v270	((void*)startLabel+304)
#define CT_v273	((void*)startLabel+368)
#define CT_v277	((void*)startLabel+460)
#define CT_v281	((void*)startLabel+560)
#define CT_v285	((void*)startLabel+660)
#define CT_v289	((void*)startLabel+788)
#define ST_v287	((void*)startLabel+852)
#define ST_v283	((void*)startLabel+884)
#define ST_v275	((void*)startLabel+920)
#define ST_v279	((void*)startLabel+956)
#define ST_v272	((void*)startLabel+992)
#define ST_v263	((void*)startLabel+1028)
#define ST_v269	((void*)startLabel+1068)
#define ST_v259	((void*)startLabel+1104)
#define PS_v271	((void*)startLabel+1144)
#define PS_v268	((void*)startLabel+1156)
#define PS_v266	((void*)startLabel+1168)
#define PS_v262	((void*)startLabel+1180)
#define PS_v264	((void*)startLabel+1192)
#define PS_v265	((void*)startLabel+1204)
#define PS_v260	((void*)startLabel+1216)
#define PS_v258	((void*)startLabel+1228)
#define PS_v284	((void*)startLabel+1240)
#define PS_v282	((void*)startLabel+1252)
#define PS_v280	((void*)startLabel+1264)
#define PS_v278	((void*)startLabel+1276)
#define PS_v276	((void*)startLabel+1288)
#define PS_v274	((void*)startLabel+1300)
#define PS_v286	((void*)startLabel+1312)
#define PS_v288	((void*)startLabel+1324)
extern Node FN_Prelude_46primIntegerFromInt[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46quot[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46rem[];
extern Node FN_Prelude_46_95_46divMod[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node FN_Prelude_46_95_46mod[];
extern Node FN_Prelude_46_95_46div[];
extern Node CF_Prelude_46Real_46Prelude_46Int[];
extern Node CF_Prelude_46Enum_46Prelude_46Int[];
extern Node PM_Prelude[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_46primIntegerFromInt[];
extern Node PC_Prelude_46_95_46div[];
extern Node PC_Prelude_46_95_46mod[];
extern Node PC_Prelude_46_95_46divMod[];
extern Node PC_Prelude_469[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v261)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46toInteger[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v260)
, 0
, 0
, 0
, 0
, 100005
, useLabel(ST_v259)
,	/* CT_v261: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46toInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46toInteger),1)
, useLabel(PS_v258)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerFromInt))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v267)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46quotRem[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,19,HEAP_OFF_N1)
, bytes2word(13,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v266)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v265)
, 0
, 0
, 0
, 0
, useLabel(PS_v264)
, 0
, 0
, 0
, 0
, 80005
, useLabel(ST_v263)
,	/* CT_v267: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46quotRem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46quotRem),2)
, useLabel(PS_v262)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46quot))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46rem))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v270)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46rem[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,REM,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70005
, useLabel(ST_v269)
,	/* CT_v270: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46rem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46rem),2)
, useLabel(PS_v268)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v273)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46quot[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,QUOT,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 60005
, useLabel(ST_v272)
,	/* CT_v273: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46quot[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46quot),2)
, useLabel(PS_v271)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v277)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46divMod[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v276)
, 0
, 0
, 0
, 0
, 50010
, useLabel(ST_v275)
,	/* CT_v277: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46divMod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46divMod),2)
, useLabel(PS_v274)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46divMod))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v281)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46mod[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v280)
, 0
, 0
, 0
, 0
, 50010
, useLabel(ST_v279)
,	/* CT_v281: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46mod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46mod),2)
, useLabel(PS_v278)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46mod))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v285)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46div[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v284)
, 0
, 0
, 0
, 0
, 50010
, useLabel(ST_v283)
,	/* CT_v285: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46div[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46div),2)
, useLabel(PS_v282)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46div))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, bytes2word(0,0,0,0)
, useLabel(CT_v289)
,};
Node FN_Prelude_46Integral_46Prelude_46Int[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_P1,15,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v288)
, 0
, 0
, 0
, 0
, CONSTR(0,9,0)
, 0
, 0
, 0
, 0
, 50010
, useLabel(ST_v287)
,	/* CT_v289: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_Prelude_46Integral_46Prelude_46Int[] = {
  VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int))
, useLabel(PS_v286)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Real_46Prelude_46Int)
, useLabel(CF_Prelude_46Enum_46Prelude_46Int)
, useLabel(F0_Prelude_46Integral_46Prelude_46Int_46divMod)
, useLabel(F0_Prelude_46Integral_46Prelude_46Int_46mod)
, useLabel(F0_Prelude_46Integral_46Prelude_46Int_46quotRem)
, useLabel(F0_Prelude_46Integral_46Prelude_46Int_46rem)
, useLabel(F0_Prelude_46Integral_46Prelude_46Int_46toInteger)
, useLabel(F0_Prelude_46Integral_46Prelude_46Int_46quot)
, useLabel(F0_Prelude_46Integral_46Prelude_46Int_46div)
,};
Node PP_Prelude_46Integral_46Prelude_46Int[] = {
 };
Node PC_Prelude_46Integral_46Prelude_46Int[] = {
 	/* ST_v287: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Integral_46Prelude_46Int_46div[] = {
 };
Node PC_Prelude_46Integral_46Prelude_46Int_46div[] = {
 	/* ST_v283: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(46,100,105,118)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Integral_46Prelude_46Int_46divMod[] = {
 };
Node PC_Prelude_46Integral_46Prelude_46Int_46divMod[] = {
 	/* ST_v275: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(46,100,105,118)
, bytes2word(77,111,100,0)
,};
Node PP_Prelude_46Integral_46Prelude_46Int_46mod[] = {
 };
Node PC_Prelude_46Integral_46Prelude_46Int_46mod[] = {
 	/* ST_v279: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(46,109,111,100)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Integral_46Prelude_46Int_46quot[] = {
 };
Node PC_Prelude_46Integral_46Prelude_46Int_46quot[] = {
 	/* ST_v272: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(46,113,117,111)
, bytes2word(116,0,0,0)
,};
Node PP_Prelude_46Integral_46Prelude_46Int_46quotRem[] = {
 };
Node PC_Prelude_46Integral_46Prelude_46Int_46quotRem[] = {
 	/* ST_v263: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(46,113,117,111)
, bytes2word(116,82,101,109)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Integral_46Prelude_46Int_46rem[] = {
 };
Node PC_Prelude_46Integral_46Prelude_46Int_46rem[] = {
 	/* ST_v269: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(46,114,101,109)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Integral_46Prelude_46Int_46toInteger[] = {
 };
Node PC_Prelude_46Integral_46Prelude_46Int_46toInteger[] = {
 	/* ST_v259: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(46,116,111,73)
, bytes2word(110,116,101,103)
, bytes2word(101,114,0,0)
,	/* PS_v271: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Int_46quot)
, useLabel(PC_Prelude_46Integral_46Prelude_46Int_46quot)
,	/* PS_v268: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Int_46rem)
, useLabel(PC_Prelude_46Integral_46Prelude_46Int_46rem)
,	/* PS_v266: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Int_46quotRem)
, useLabel(PC_Prelude_462)
,	/* PS_v262: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Int_46quotRem)
, useLabel(PC_Prelude_46Integral_46Prelude_46Int_46quotRem)
,	/* PS_v264: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Int_46quotRem)
, useLabel(PC_Prelude_46Integral_46Prelude_46Int_46quot)
,	/* PS_v265: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Int_46quotRem)
, useLabel(PC_Prelude_46Integral_46Prelude_46Int_46rem)
,	/* PS_v260: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Int_46toInteger)
, useLabel(PC_Prelude_46primIntegerFromInt)
,	/* PS_v258: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Int_46toInteger)
, useLabel(PC_Prelude_46Integral_46Prelude_46Int_46toInteger)
,	/* PS_v284: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Int_46div)
, useLabel(PC_Prelude_46_95_46div)
,	/* PS_v282: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Int_46div)
, useLabel(PC_Prelude_46Integral_46Prelude_46Int_46div)
,	/* PS_v280: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Int_46mod)
, useLabel(PC_Prelude_46_95_46mod)
,	/* PS_v278: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Int_46mod)
, useLabel(PC_Prelude_46Integral_46Prelude_46Int_46mod)
,	/* PS_v276: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Int_46divMod)
, useLabel(PC_Prelude_46_95_46divMod)
,	/* PS_v274: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Int_46divMod)
, useLabel(PC_Prelude_46Integral_46Prelude_46Int_46divMod)
,	/* PS_v286: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Int)
, useLabel(PC_Prelude_46Integral_46Prelude_46Int)
,	/* PS_v288: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Int)
, useLabel(PC_Prelude_469)
,};
