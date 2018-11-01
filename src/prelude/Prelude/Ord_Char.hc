#include "newmacros.h"
#include "runtime.h"

#define CT_v266	((void*)startLabel+32)
#define CT_v267	((void*)startLabel+76)
#define CT_v268	((void*)startLabel+112)
#define CT_v269	((void*)startLabel+156)
#define CT_v270	((void*)startLabel+200)
#define CT_v271	((void*)startLabel+244)
#define CT_v272	((void*)startLabel+288)
#define CT_v273	((void*)startLabel+348)
extern Node FN_Prelude_46Enum_46Prelude_46Char_46fromEnum[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46Prelude_46Char[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v266)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46compare[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v266: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v267)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46_60_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,LE_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v267: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_60_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v268)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v268: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v269)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v269: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v270)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v270: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v271)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v271: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v272)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v272: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46Prelude_46Char)
, bytes2word(0,0,0,0)
, useLabel(CT_v273)
,};
Node FN_Prelude_46Ord_46Prelude_46Char[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v273: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46Prelude_46Char[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46_60)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46_60_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46_62_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46_62)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46compare)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46min)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46max)
,};
