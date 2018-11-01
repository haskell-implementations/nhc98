#include "newmacros.h"
#include "runtime.h"

#define CT_v251	((void*)startLabel+24)
#define CT_v252	((void*)startLabel+64)
#define CT_v253	((void*)startLabel+104)
#define CT_v254	((void*)startLabel+144)
#define CT_v255	((void*)startLabel+184)
#define CT_v256	((void*)startLabel+228)
#define CT_v257	((void*)startLabel+272)
#define CT_v258	((void*)startLabel+332)
extern Node FN_Prelude_46primIntegerGt[];
extern Node FN_Prelude_46primIntegerGe[];
extern Node FN_Prelude_46primIntegerLe[];
extern Node FN_Prelude_46primIntegerLt[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46Prelude_46Integer[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46compare[];
extern Node CF_Prelude_46Eq_46Prelude_46Integer[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v251)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v251: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerGt))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v252)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v252: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerGe))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v253)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v253: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_60_61),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerLe))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v254)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v254: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerLt))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v255)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v255: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46Prelude_46Integer)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v256)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v256: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46Prelude_46Integer)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v257)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46compare[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v257: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46compare))
, useLabel(CF_Prelude_46Ord_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v258)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v258: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer))
, useLabel(CF_Prelude_46Eq_46Prelude_46Integer)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46_60)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46_60_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46_62_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46_62)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46compare)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46min)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46max)
,};
