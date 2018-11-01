#include "newmacros.h"
#include "runtime.h"

#define CT_v221	((void*)startLabel+32)
#define FN_LAMBDA217	((void*)startLabel+60)
#define CT_v223	((void*)startLabel+80)
#define CF_LAMBDA217	((void*)startLabel+88)
#define CT_v224	((void*)startLabel+140)
#define CT_v225	((void*)startLabel+224)
#define CT_v226	((void*)startLabel+272)
#define CT_v227	((void*)startLabel+304)
#define CT_v228	((void*)startLabel+336)
#define CT_v229	((void*)startLabel+368)
#define ST_v222	((void*)startLabel+380)
extern Node FN_NHC_46Internal_46_95noMethodError[];
extern Node FN_Prelude_46recip[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Fractional_46Prelude_46Num[];
extern Node FN_Prelude_46_42[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_Prelude_46_47[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v221)
,};
Node FN_Prelude_46_95_46fromRational[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v221: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46fromRational[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46fromRational),2)
, VAPTAG(useLabel(FN_LAMBDA217))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v223)
,	/* FN_LAMBDA217: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v222)
,	/* CT_v223: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA217: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA217))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v224)
,};
Node FN_Prelude_46_95_46_47[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,3,PUSH_P1,0)
, bytes2word(PUSH_ARG_I2,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v224: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_Prelude_46_95_46_47[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46_47),3)
, VAPTAG(useLabel(FN_Prelude_46recip))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v225)
,};
Node FN_Prelude_46_95_46recip[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(2,PUSH_ARG_I2,PUSH_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v225: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46_95_46recip[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46recip),2)
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_47))
, bytes2word(1,0,0,1)
, useLabel(CT_v226)
,};
Node FN_Prelude_46Fractional_46Prelude_46Num[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v226: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Fractional_46Prelude_46Num[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Prelude_46Num),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v227)
,};
Node FN_Prelude_46_47[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v227: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46_47[] = {
  CAPTAG(useLabel(FN_Prelude_46_47),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v228)
,};
Node FN_Prelude_46fromRational[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v228: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46fromRational[] = {
  CAPTAG(useLabel(FN_Prelude_46fromRational),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v229)
,};
Node FN_Prelude_46recip[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v229: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46recip[] = {
  CAPTAG(useLabel(FN_Prelude_46recip),1)
,	/* ST_v222: (byte 0) */
  bytes2word(78,111,32,100)
, bytes2word(101,102,97,117)
, bytes2word(108,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(105,116,105,111)
, bytes2word(110,32,102,111)
, bytes2word(114,32,99,108)
, bytes2word(97,115,115,32)
, bytes2word(109,101,116,104)
, bytes2word(111,100,32,102)
, bytes2word(114,111,109,82)
, bytes2word(97,116,105,111)
, bytes2word(110,97,108,0)
,};
