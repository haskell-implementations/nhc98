#include "newmacros.h"
#include "runtime.h"

#define CT_v255	((void*)startLabel+16)
#define v257	((void*)startLabel+54)
#define v258	((void*)startLabel+58)
#define v259	((void*)startLabel+62)
#define CT_v261	((void*)startLabel+96)
#define v262	((void*)startLabel+137)
#define CT_v264	((void*)startLabel+152)
#define CT_v265	((void*)startLabel+192)
#define CT_v266	((void*)startLabel+232)
#define CT_v267	((void*)startLabel+272)
#define CT_v268	((void*)startLabel+312)
#define CT_v269	((void*)startLabel+372)
extern Node FN_Prelude_46Ord_46Prelude_46Integer_46compare[];
extern Node FN_Prelude_46Ord_46Prelude_46Integer_46_60[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46negate[];
extern Node FN_Prelude_46primIntegerNeg[];
extern Node FN_Prelude_46primIntegerMul[];
extern Node FN_Prelude_46primIntegerSub[];
extern Node FN_Prelude_46primIntegerAdd[];
extern Node CF_Prelude_46Eq_46Prelude_46Integer[];
extern Node CF_Prelude_46Show_46Prelude_46Integer[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v255)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46fromInteger[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v255: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46fromInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46fromInteger),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v261)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46signum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CADR_N1,1,ZAP_ARG_I1)
, bytes2word(EVAL,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(10),BOT(10))
,	/* v257: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_CADR_N1)
,	/* v258: (byte 2) */
  bytes2word(3,RETURN,POP_I1,PUSH_CADR_N1)
,	/* v259: (byte 2) */
  bytes2word(1,RETURN,POP_I1,PUSH_CADR_N1)
, bytes2word(5,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 1
, CONSTRW(1,1)
, 1
, CONSTRW(0,0)
,	/* CT_v261: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46signum[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46signum),1)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46compare))
, bytes2word(1,0,0,1)
, useLabel(CT_v264)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46abs[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CADR_N1,1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,7,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
,	/* v262: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v264: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46abs[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46abs),1)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_60))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46negate))
, bytes2word(1,0,0,1)
, useLabel(CT_v265)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46negate[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v265: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46negate[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46negate),1)
, VAPTAG(useLabel(FN_Prelude_46primIntegerNeg))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v266)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46_42[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v266: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46_42[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerMul))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v267)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46_45[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v267: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46_45[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_45),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerSub))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v268)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46_43[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v268: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46_43[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_43),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerAdd))
, bytes2word(0,0,0,0)
, useLabel(CT_v269)
,};
Node FN_Prelude_46Num_46Prelude_46Integer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
,	/* CT_v269: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_Prelude_46Num_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer))
, useLabel(CF_Prelude_46Eq_46Prelude_46Integer)
, useLabel(CF_Prelude_46Show_46Prelude_46Integer)
, useLabel(F0_Prelude_46Num_46Prelude_46Integer_46_42)
, useLabel(F0_Prelude_46Num_46Prelude_46Integer_46_43)
, useLabel(F0_Prelude_46Num_46Prelude_46Integer_46_45)
, useLabel(F0_Prelude_46Num_46Prelude_46Integer_46negate)
, useLabel(F0_Prelude_46Num_46Prelude_46Integer_46signum)
, useLabel(F0_Prelude_46Num_46Prelude_46Integer_46fromInteger)
, useLabel(F0_Prelude_46Num_46Prelude_46Integer_46abs)
,};
