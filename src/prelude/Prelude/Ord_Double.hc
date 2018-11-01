#include "newmacros.h"
#include "runtime.h"

#define CT_v259	((void*)startLabel+24)
#define CT_v260	((void*)startLabel+60)
#define CT_v261	((void*)startLabel+96)
#define CT_v262	((void*)startLabel+132)
#define CT_v263	((void*)startLabel+168)
#define CT_v264	((void*)startLabel+212)
#define CT_v265	((void*)startLabel+256)
#define CT_v266	((void*)startLabel+316)
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46Prelude_46Double[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46compare[];
extern Node CF_Prelude_46Eq_46Prelude_46Double[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v259)
,};
Node FN_Prelude_46Ord_46Prelude_46Double_46_62[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,GT_D,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v259: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Double_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Double_46_62),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v260)
,};
Node FN_Prelude_46Ord_46Prelude_46Double_46_62_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,GE_D,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v260: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Double_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Double_46_62_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v261)
,};
Node FN_Prelude_46Ord_46Prelude_46Double_46_60_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,LE_D,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v261: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Double_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Double_46_60_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v262)
,};
Node FN_Prelude_46Ord_46Prelude_46Double_46_60[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,LT_D,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v262: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Double_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Double_46_60),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v263)
,};
Node FN_Prelude_46Ord_46Prelude_46Double_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v263: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Double_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Double_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46Prelude_46Double)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v264)
,};
Node FN_Prelude_46Ord_46Prelude_46Double_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v264: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Double_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Double_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46Prelude_46Double)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v265)
,};
Node FN_Prelude_46Ord_46Prelude_46Double_46compare[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v265: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Double_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Double_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46compare))
, useLabel(CF_Prelude_46Ord_46Prelude_46Double)
, bytes2word(0,0,0,0)
, useLabel(CT_v266)
,};
Node FN_Prelude_46Ord_46Prelude_46Double[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v266: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46Prelude_46Double[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Double))
, useLabel(CF_Prelude_46Eq_46Prelude_46Double)
, useLabel(F0_Prelude_46Ord_46Prelude_46Double_46_60)
, useLabel(F0_Prelude_46Ord_46Prelude_46Double_46_60_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Double_46_62_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Double_46_62)
, useLabel(F0_Prelude_46Ord_46Prelude_46Double_46compare)
, useLabel(F0_Prelude_46Ord_46Prelude_46Double_46min)
, useLabel(F0_Prelude_46Ord_46Prelude_46Double_46max)
,};
