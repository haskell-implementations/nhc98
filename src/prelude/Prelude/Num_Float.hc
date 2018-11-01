#include "newmacros.h"
#include "runtime.h"

#define CT_v249	((void*)startLabel+20)
#define CT_v250	((void*)startLabel+56)
#define CT_v251	((void*)startLabel+88)
#define CT_v252	((void*)startLabel+120)
#define CT_v253	((void*)startLabel+160)
#define CT_v254	((void*)startLabel+200)
#define CT_v255	((void*)startLabel+240)
#define CT_v256	((void*)startLabel+296)
extern Node FN_Prelude_46primFloatFromInteger[];
extern Node CF_Prelude_46Eq_46Prelude_46Float[];
extern Node CF_Prelude_46Show_46Prelude_46Float[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v249)
,};
Node FN_Prelude_46Num_46Prelude_46Float_46fromInteger[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v249: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Float_46fromInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Float_46fromInteger),1)
, VAPTAG(useLabel(FN_Prelude_46primFloatFromInteger))
, bytes2word(1,0,0,1)
, useLabel(CT_v250)
,};
Node FN_Prelude_46Num_46Prelude_46Float_46signum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(SIGNUM_F,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v250: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Float_46signum[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Float_46signum),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v251)
,};
Node FN_Prelude_46Num_46Prelude_46Float_46abs[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(ABS_F,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v251: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Float_46abs[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Float_46abs),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v252)
,};
Node FN_Prelude_46Num_46Prelude_46Float_46negate[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(NEG_F,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v252: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Float_46negate[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Float_46negate),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v253)
,};
Node FN_Prelude_46Num_46Prelude_46Float_46_42[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,MUL_F,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v253: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Float_46_42[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Float_46_42),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v254)
,};
Node FN_Prelude_46Num_46Prelude_46Float_46_45[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,SUB_F,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v254: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Float_46_45[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Float_46_45),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v255)
,};
Node FN_Prelude_46Num_46Prelude_46Float_46_43[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,ADD_F,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v255: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Float_46_43[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Float_46_43),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v256)
,};
Node FN_Prelude_46Num_46Prelude_46Float[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
,	/* CT_v256: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_Prelude_46Num_46Prelude_46Float[] = {
  VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Float))
, useLabel(CF_Prelude_46Eq_46Prelude_46Float)
, useLabel(CF_Prelude_46Show_46Prelude_46Float)
, useLabel(F0_Prelude_46Num_46Prelude_46Float_46_42)
, useLabel(F0_Prelude_46Num_46Prelude_46Float_46_43)
, useLabel(F0_Prelude_46Num_46Prelude_46Float_46_45)
, useLabel(F0_Prelude_46Num_46Prelude_46Float_46negate)
, useLabel(F0_Prelude_46Num_46Prelude_46Float_46signum)
, useLabel(F0_Prelude_46Num_46Prelude_46Float_46fromInteger)
, useLabel(F0_Prelude_46Num_46Prelude_46Float_46abs)
,};
