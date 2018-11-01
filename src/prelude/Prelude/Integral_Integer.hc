#include "newmacros.h"
#include "runtime.h"

#define CT_v255	((void*)startLabel+16)
#define CT_v256	((void*)startLabel+52)
#define CT_v257	((void*)startLabel+96)
#define CT_v258	((void*)startLabel+144)
#define CT_v259	((void*)startLabel+188)
#define CT_v260	((void*)startLabel+228)
#define CT_v261	((void*)startLabel+268)
#define CT_v262	((void*)startLabel+332)
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
, useLabel(CT_v255)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46toInteger[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v255: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46toInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46toInteger),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v256)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46quotRem[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v256: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46quotRem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46quotRem),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerQuotRem))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v257)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46mod[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v257: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46mod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46mod),2)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46divMod))
, VAPTAG(useLabel(FN_Prelude_46snd))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v258)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46div[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v258: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46div[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46div),2)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46divMod))
, VAPTAG(useLabel(FN_Prelude_46fst))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v259)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46rem[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v259: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46rem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46rem),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerRem))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v260)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46quot[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v260: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46quot[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46quot),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerQuot))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v261)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer_46divMod[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v261: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Integer_46divMod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46divMod),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46divMod))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v262)
,};
Node FN_Prelude_46Integral_46Prelude_46Integer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
,	/* CT_v262: (byte 0) */
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
,};
