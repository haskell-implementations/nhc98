#include "newmacros.h"
#include "runtime.h"

#define CT_v257	((void*)startLabel+24)
#define CT_v261	((void*)startLabel+116)
#define CT_v266	((void*)startLabel+236)
#define CT_v271	((void*)startLabel+360)
#define CT_v275	((void*)startLabel+460)
#define CT_v279	((void*)startLabel+556)
#define CT_v283	((void*)startLabel+652)
#define CT_v287	((void*)startLabel+780)
#define ST_v285	((void*)startLabel+844)
#define ST_v268	((void*)startLabel+880)
#define ST_v281	((void*)startLabel+920)
#define ST_v263	((void*)startLabel+960)
#define ST_v277	((void*)startLabel+1000)
#define ST_v259	((void*)startLabel+1040)
#define ST_v273	((void*)startLabel+1084)
#define ST_v256	((void*)startLabel+1124)
#define PS_v278	((void*)startLabel+1168)
#define PS_v276	((void*)startLabel+1180)
#define PS_v274	((void*)startLabel+1192)
#define PS_v272	((void*)startLabel+1204)
#define PS_v270	((void*)startLabel+1216)
#define PS_v267	((void*)startLabel+1228)
#define PS_v269	((void*)startLabel+1240)
#define PS_v265	((void*)startLabel+1252)
#define PS_v262	((void*)startLabel+1264)
#define PS_v264	((void*)startLabel+1276)
#define PS_v260	((void*)startLabel+1288)
#define PS_v258	((void*)startLabel+1300)
#define PS_v255	((void*)startLabel+1312)
#define PS_v282	((void*)startLabel+1324)
#define PS_v280	((void*)startLabel+1336)
#define PS_v284	((void*)startLabel+1348)
#define PS_v286	((void*)startLabel+1360)
extern Node FN_Prelude_46primIntegerQuotRem[];
extern Node FN_Prelude_46Integral_46Prelude_46Integer_46divMod[];
extern Node FN_Prelude_46snd[];
extern Node FN_Prelude_46fst[];
extern Node FN_Prelude_46primIntegerRem[];
extern Node FN_Prelude_46primIntegerQuot[];
extern Node FN_Prelude_46_95_46divMod[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node CF_Prelude_46Real_46Prelude_46Integer[];
extern Node CF_Prelude_46Enum_46Prelude_46Integer[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46primIntegerQuot[];
extern Node PC_Prelude_46primIntegerRem[];
extern Node PC_Prelude_46fst[];
extern Node PC_Prelude_46snd[];
extern Node PC_Prelude_46primIntegerQuotRem[];
extern Node PC_Prelude_46_95_46divMod[];
extern Node PC_Prelude_469[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v257)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46toInteger[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 130005
, useLabel(ST_v256)
,	/* CT_v257: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46toInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46toInteger),1)
, useLabel(PS_v255)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v261)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46quotRem[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v260)
, 0
, 0
, 0
, 0
, 110005
, useLabel(ST_v259)
,	/* CT_v261: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46quotRem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46quotRem),2)
, useLabel(PS_v258)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerQuotRem))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v266)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46mod[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
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
, 90005
, useLabel(ST_v263)
,	/* CT_v266: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46mod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46mod),2)
, useLabel(PS_v262)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46divMod))
, VAPTAG(useLabel(FN_Prelude_46snd))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v271)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46div[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v270)
, 0
, 0
, 0
, 0
, useLabel(PS_v269)
, 0
, 0
, 0
, 0
, 80005
, useLabel(ST_v268)
,	/* CT_v271: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46div[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46div),2)
, useLabel(PS_v267)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46divMod))
, VAPTAG(useLabel(FN_Prelude_46fst))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v275)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46rem[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v274)
, 0
, 0
, 0
, 0
, 70005
, useLabel(ST_v273)
,	/* CT_v275: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46rem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46rem),2)
, useLabel(PS_v272)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerRem))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v279)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46quot[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v278)
, 0
, 0
, 0
, 0
, 60005
, useLabel(ST_v277)
,	/* CT_v279: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46quot[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46quot),2)
, useLabel(PS_v276)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerQuot))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v283)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46divMod[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v282)
, 0
, 0
, 0
, 0
, 50010
, useLabel(ST_v281)
,	/* CT_v283: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46divMod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46divMod),2)
, useLabel(PS_v280)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46divMod))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v287)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_P1,15,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v286)
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
, useLabel(ST_v285)
,	/* CT_v287: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_Prelude_46Integral_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer))
, useLabel(PS_v284)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Real_46Prelude_46Integer)
, useLabel(CF_Prelude_46Enum_46Prelude_46Integer)
, useLabel(F0_Prelude_46Integral_46Prelude_46Integer_46divMod)
, useLabel(F0_Prelude_46Integral_46Prelude_46Integer_46mod)
, useLabel(F0_Prelude_46Integral_46Prelude_46Integer_46quotRem)
, useLabel(F0_Prelude_46Integral_46Prelude_46Integer_46rem)
, useLabel(F0_Prelude_46Integral_46Prelude_46Integer_46toInteger)
, useLabel(F0_Prelude_46Integral_46Prelude_46Integer_46quot)
, useLabel(F0_Prelude_46Integral_46Prelude_46Integer_46div)
,};
Node PP_Prelude_46Integral_46Prelude_46Integer[] = {
 };
Node PC_Prelude_46Integral_46Prelude_46Integer[] = {
 	/* ST_v285: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Integral_46Prelude_46Integer_46div[] = {
 };
Node PC_Prelude_46Integral_46Prelude_46Integer_46div[] = {
 	/* ST_v268: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
, bytes2word(46,100,105,118)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Integral_46Prelude_46Integer_46divMod[] = {
 };
Node PC_Prelude_46Integral_46Prelude_46Integer_46divMod[] = {
 	/* ST_v281: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
, bytes2word(46,100,105,118)
, bytes2word(77,111,100,0)
,};
Node PP_Prelude_46Integral_46Prelude_46Integer_46mod[] = {
 };
Node PC_Prelude_46Integral_46Prelude_46Integer_46mod[] = {
 	/* ST_v263: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
, bytes2word(46,109,111,100)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Integral_46Prelude_46Integer_46quot[] = {
 };
Node PC_Prelude_46Integral_46Prelude_46Integer_46quot[] = {
 	/* ST_v277: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
, bytes2word(46,113,117,111)
, bytes2word(116,0,0,0)
,};
Node PP_Prelude_46Integral_46Prelude_46Integer_46quotRem[] = {
 };
Node PC_Prelude_46Integral_46Prelude_46Integer_46quotRem[] = {
 	/* ST_v259: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
, bytes2word(46,113,117,111)
, bytes2word(116,82,101,109)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Integral_46Prelude_46Integer_46rem[] = {
 };
Node PC_Prelude_46Integral_46Prelude_46Integer_46rem[] = {
 	/* ST_v273: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
, bytes2word(46,114,101,109)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Integral_46Prelude_46Integer_46toInteger[] = {
 };
Node PC_Prelude_46Integral_46Prelude_46Integer_46toInteger[] = {
 	/* ST_v256: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
, bytes2word(46,116,111,73)
, bytes2word(110,116,101,103)
, bytes2word(101,114,0,0)
,	/* PS_v278: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Integer_46quot)
, useLabel(PC_Prelude_46primIntegerQuot)
,	/* PS_v276: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Integer_46quot)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46quot)
,	/* PS_v274: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Integer_46rem)
, useLabel(PC_Prelude_46primIntegerRem)
,	/* PS_v272: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Integer_46rem)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46rem)
,	/* PS_v270: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Integer_46div)
, useLabel(PC_Prelude_46fst)
,	/* PS_v267: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Integer_46div)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46div)
,	/* PS_v269: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Integer_46div)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46divMod)
,	/* PS_v265: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Integer_46mod)
, useLabel(PC_Prelude_46snd)
,	/* PS_v262: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Integer_46mod)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46mod)
,	/* PS_v264: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Integer_46mod)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46divMod)
,	/* PS_v260: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Integer_46quotRem)
, useLabel(PC_Prelude_46primIntegerQuotRem)
,	/* PS_v258: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Integer_46quotRem)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46quotRem)
,	/* PS_v255: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Integer_46toInteger)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46toInteger)
,	/* PS_v282: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Integer_46divMod)
, useLabel(PC_Prelude_46_95_46divMod)
,	/* PS_v280: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Integer_46divMod)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46divMod)
,	/* PS_v284: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Integer)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer)
,	/* PS_v286: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Integral_46Prelude_46Integer)
, useLabel(PC_Prelude_469)
,};
