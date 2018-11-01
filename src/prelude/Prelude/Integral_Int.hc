#include "newmacros.h"
#include "runtime.h"

#define CT_v258	((void*)startLabel+20)
#define CT_v259	((void*)startLabel+80)
#define CT_v260	((void*)startLabel+128)
#define CT_v261	((void*)startLabel+168)
#define CT_v262	((void*)startLabel+204)
#define CT_v263	((void*)startLabel+248)
#define CT_v264	((void*)startLabel+292)
#define CT_v265	((void*)startLabel+356)
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
, useLabel(CT_v258)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46toInteger[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v258: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46toInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46toInteger),1)
, VAPTAG(useLabel(FN_Prelude_46primIntegerFromInt))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v259)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46quotRem[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v259: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46quotRem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46quotRem),2)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46quot))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46rem))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v260)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46rem[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,REM,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v260: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46rem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46rem),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v261)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46quot[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,QUOT,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v261: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46quot[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46quot),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v262)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46divMod[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v262: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46divMod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46divMod),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46divMod))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v263)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46mod[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v263: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46mod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46mod),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46mod))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v264)
,};
Node FN_Prelude_46Integral_46Prelude_46Int_46div[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v264: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46Prelude_46Int_46div[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46div),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46div))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, bytes2word(0,0,0,0)
, useLabel(CT_v265)
,};
Node FN_Prelude_46Integral_46Prelude_46Int[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
,	/* CT_v265: (byte 0) */
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
,};
