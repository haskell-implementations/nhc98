#include "newmacros.h"
#include "runtime.h"

#define CT_v259	((void*)startLabel+32)
#define CT_v261	((void*)startLabel+104)
#define CT_v263	((void*)startLabel+164)
#define CT_v265	((void*)startLabel+216)
#define CT_v267	((void*)startLabel+264)
#define CT_v269	((void*)startLabel+320)
#define CT_v271	((void*)startLabel+376)
#define CT_v273	((void*)startLabel+448)
#define ST_v272	((void*)startLabel+496)
#define ST_v270	((void*)startLabel+525)
#define ST_v266	((void*)startLabel+558)
#define ST_v268	((void*)startLabel+594)
#define ST_v264	((void*)startLabel+627)
#define ST_v260	((void*)startLabel+661)
#define ST_v262	((void*)startLabel+698)
#define ST_v258	((void*)startLabel+731)
extern Node TM_Prelude[];
extern Node FN_Prelude_46primIntegerFromInt[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46quot[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46rem[];
extern Node FN_Prelude_46_95_46divMod[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node FN_Prelude_46_95_46mod[];
extern Node FN_Prelude_46_95_46div[];
extern Node CF_Prelude_46Real_46Prelude_46Int[];
extern Node CF_Prelude_46Enum_46Prelude_46Int[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v259)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46toInteger[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 100005
, useLabel(ST_v258)
,	/* CT_v259: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46toInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46toInteger),1)
, VAPTAG(useLabel(FN_Prelude_46primIntegerFromInt))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v261)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46quotRem[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 80005
, useLabel(ST_v260)
,	/* CT_v261: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46quotRem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46quotRem),2)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46quot))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46rem))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v263)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46rem[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,REM,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70005
, useLabel(ST_v262)
,	/* CT_v263: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46rem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46rem),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v265)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46quot[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,QUOT,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 60005
, useLabel(ST_v264)
,	/* CT_v265: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46quot[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46quot),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v267)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46divMod[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 50010
, useLabel(ST_v266)
,	/* CT_v267: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46divMod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46divMod),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46divMod))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v269)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46mod[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 50010
, useLabel(ST_v268)
,	/* CT_v269: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46mod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46mod),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46mod))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v271)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46div[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 50010
, useLabel(ST_v270)
,	/* CT_v271: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46div[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46div),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46div))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, bytes2word(0,0,0,0)
, useLabel(CT_v273)
,};
Node FN_Prelude_46Integral_46Prelude_46Int[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_P1,11,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
, 50010
, useLabel(ST_v272)
,	/* CT_v273: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_Prelude_46Integral_46Prelude_46Int[] = {
  VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int))
, useLabel(CF_Prelude_46Real_46Prelude_46Int)
, useLabel(CF_Prelude_46Enum_46Prelude_46Int)
, useLabel(F0_Prelude_46Integral_46Prelude_46Int_46divMod)
, useLabel(F0_Prelude_46Integral_46Prelude_46Int_46mod)
, useLabel(F0_Prelude_46Integral_46Prelude_46Int_46quotRem)
, useLabel(F0_Prelude_46Integral_46Prelude_46Int_46rem)
, useLabel(F0_Prelude_46Integral_46Prelude_46Int_46toInteger)
, useLabel(F0_Prelude_46Integral_46Prelude_46Int_46quot)
, useLabel(F0_Prelude_46Integral_46Prelude_46Int_46div)
,	/* ST_v272: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
,	/* ST_v270: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,114,97)
, bytes2word(108,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,46,100,105)
,	/* ST_v266: (byte 2) */
  bytes2word(118,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,114)
, bytes2word(97,108,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,46,100)
, bytes2word(105,118,77,111)
,	/* ST_v268: (byte 2) */
  bytes2word(100,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,114)
, bytes2word(97,108,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,46,109)
,	/* ST_v264: (byte 3) */
  bytes2word(111,100,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,101,103)
, bytes2word(114,97,108,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(113,117,111,116)
,	/* ST_v260: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,114,97)
, bytes2word(108,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,46,113,117)
, bytes2word(111,116,82,101)
,	/* ST_v262: (byte 2) */
  bytes2word(109,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,114)
, bytes2word(97,108,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,46,114)
,	/* ST_v258: (byte 3) */
  bytes2word(101,109,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,101,103)
, bytes2word(114,97,108,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(116,111,73,110)
, bytes2word(116,101,103,101)
, bytes2word(114,0,0,0)
,};
