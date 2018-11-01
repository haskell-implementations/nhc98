#include "newmacros.h"
#include "runtime.h"

#define CT_v256	((void*)startLabel+28)
#define CT_v258	((void*)startLabel+76)
#define CT_v260	((void*)startLabel+132)
#define CT_v262	((void*)startLabel+192)
#define CT_v264	((void*)startLabel+248)
#define CT_v266	((void*)startLabel+300)
#define CT_v268	((void*)startLabel+352)
#define CT_v270	((void*)startLabel+424)
#define ST_v269	((void*)startLabel+472)
#define ST_v261	((void*)startLabel+505)
#define ST_v267	((void*)startLabel+542)
#define ST_v259	((void*)startLabel+582)
#define ST_v265	((void*)startLabel+619)
#define ST_v257	((void*)startLabel+657)
#define ST_v263	((void*)startLabel+698)
#define ST_v255	((void*)startLabel+735)
extern Node TM_Prelude[];
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

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v256)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46toInteger[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 130005
, useLabel(ST_v255)
,	/* CT_v256: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46toInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46toInteger),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v258)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46quotRem[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 110005
, useLabel(ST_v257)
,	/* CT_v258: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46quotRem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46quotRem),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerQuotRem))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v260)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46mod[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 90005
, useLabel(ST_v259)
,	/* CT_v260: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46mod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46mod),2)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46divMod))
, VAPTAG(useLabel(FN_Prelude_46snd))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v262)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46div[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 80005
, useLabel(ST_v261)
,	/* CT_v262: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46div[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46div),2)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46divMod))
, VAPTAG(useLabel(FN_Prelude_46fst))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v264)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46rem[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70005
, useLabel(ST_v263)
,	/* CT_v264: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46rem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46rem),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerRem))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v266)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46quot[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 60005
, useLabel(ST_v265)
,	/* CT_v266: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46quot[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46quot),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerQuot))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v268)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46divMod[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 50010
, useLabel(ST_v267)
,	/* CT_v268: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46divMod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46divMod),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46divMod))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v270)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer[] = {
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
, useLabel(ST_v269)
,	/* CT_v270: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_Prelude_46Integral_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer))
, useLabel(CF_Prelude_46Real_46Prelude_46Integer)
, useLabel(CF_Prelude_46Enum_46Prelude_46Integer)
, useLabel(F0_Prelude_46Integral_46Prelude_46Integer_46divMod)
, useLabel(F0_Prelude_46Integral_46Prelude_46Integer_46mod)
, useLabel(F0_Prelude_46Integral_46Prelude_46Integer_46quotRem)
, useLabel(F0_Prelude_46Integral_46Prelude_46Integer_46rem)
, useLabel(F0_Prelude_46Integral_46Prelude_46Integer_46toInteger)
, useLabel(F0_Prelude_46Integral_46Prelude_46Integer_46quot)
, useLabel(F0_Prelude_46Integral_46Prelude_46Integer_46div)
,	/* ST_v269: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
,	/* ST_v261: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,114,97)
, bytes2word(108,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,101)
, bytes2word(114,46,100,105)
,	/* ST_v267: (byte 2) */
  bytes2word(118,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,114)
, bytes2word(97,108,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,101,103)
, bytes2word(101,114,46,100)
, bytes2word(105,118,77,111)
,	/* ST_v259: (byte 2) */
  bytes2word(100,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,114)
, bytes2word(97,108,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,101,103)
, bytes2word(101,114,46,109)
,	/* ST_v265: (byte 3) */
  bytes2word(111,100,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,101,103)
, bytes2word(114,97,108,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(113,117,111,116)
,	/* ST_v257: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,114,97)
, bytes2word(108,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,101)
, bytes2word(114,46,113,117)
, bytes2word(111,116,82,101)
,	/* ST_v263: (byte 2) */
  bytes2word(109,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,114)
, bytes2word(97,108,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,101,103)
, bytes2word(101,114,46,114)
,	/* ST_v255: (byte 3) */
  bytes2word(101,109,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,101,103)
, bytes2word(114,97,108,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(116,111,73,110)
, bytes2word(116,101,103,101)
, bytes2word(114,0,0,0)
,};
