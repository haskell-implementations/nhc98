#include "newmacros.h"
#include "runtime.h"

#define CT_v247	((void*)startLabel+32)
#define CT_v248	((void*)startLabel+76)
#define CT_v249	((void*)startLabel+120)
#define CT_v250	((void*)startLabel+164)
#define CT_v251	((void*)startLabel+200)
#define CT_v252	((void*)startLabel+244)
#define CT_v253	((void*)startLabel+288)
#define CT_v254	((void*)startLabel+348)
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46_40_41[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46compare[];
extern Node CF_Prelude_46Eq_46_40_41[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v247)
,};
Node FN_Prelude_46Ord_46_40_41_46_62[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v247: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46_62),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v248)
,};
Node FN_Prelude_46Ord_46_40_41_46_62_61[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
,	/* CT_v248: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46_62_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v249)
,};
Node FN_Prelude_46Ord_46_40_41_46_60_61[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
,	/* CT_v249: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46_60_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v250)
,};
Node FN_Prelude_46Ord_46_40_41_46_60[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v250: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46_60),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v251)
,};
Node FN_Prelude_46Ord_46_40_41_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v251: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46_40_41)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v252)
,};
Node FN_Prelude_46Ord_46_40_41_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v252: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46_40_41)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v253)
,};
Node FN_Prelude_46Ord_46_40_41_46compare[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v253: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46compare))
, useLabel(CF_Prelude_46Ord_46_40_41)
, bytes2word(0,0,0,0)
, useLabel(CT_v254)
,};
Node FN_Prelude_46Ord_46_40_41[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v254: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46_40_41[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46_40_41))
, useLabel(CF_Prelude_46Eq_46_40_41)
, useLabel(F0_Prelude_46Ord_46_40_41_46_60)
, useLabel(F0_Prelude_46Ord_46_40_41_46_60_61)
, useLabel(F0_Prelude_46Ord_46_40_41_46_62_61)
, useLabel(F0_Prelude_46Ord_46_40_41_46_62)
, useLabel(F0_Prelude_46Ord_46_40_41_46compare)
, useLabel(F0_Prelude_46Ord_46_40_41_46min)
, useLabel(F0_Prelude_46Ord_46_40_41_46max)
,};
