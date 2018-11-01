#include "newmacros.h"
#include "runtime.h"

#define CT_v256	((void*)startLabel+28)
#define v258	((void*)startLabel+70)
#define v259	((void*)startLabel+74)
#define v260	((void*)startLabel+78)
#define CT_v263	((void*)startLabel+120)
#define v264	((void*)startLabel+165)
#define CT_v267	((void*)startLabel+188)
#define CT_v269	((void*)startLabel+240)
#define CT_v271	((void*)startLabel+292)
#define CT_v273	((void*)startLabel+344)
#define CT_v275	((void*)startLabel+396)
#define CT_v277	((void*)startLabel+464)
#define ST_v276	((void*)startLabel+512)
#define ST_v270	((void*)startLabel+540)
#define ST_v274	((void*)startLabel+570)
#define ST_v272	((void*)startLabel+600)
#define ST_v266	((void*)startLabel+630)
#define ST_v255	((void*)startLabel+662)
#define ST_v268	((void*)startLabel+702)
#define ST_v261	((void*)startLabel+737)
extern Node TM_Prelude[];
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
, useLabel(CT_v256)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46fromInteger[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 190002
, useLabel(ST_v255)
,	/* CT_v256: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46fromInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46fromInteger),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v263)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46signum[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CADR_N1,3,ZAP_ARG_I1)
, bytes2word(EVAL,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(10),BOT(10))
,	/* v258: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_CADR_N1)
,	/* v259: (byte 2) */
  bytes2word(5,RETURN,POP_I1,PUSH_CADR_N1)
,	/* v260: (byte 2) */
  bytes2word(3,RETURN,POP_I1,PUSH_CADR_N1)
, bytes2word(7,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 1
, CONSTRW(1,1)
, 1
, CONSTRW(0,0)
, 150002
, useLabel(ST_v261)
,	/* CT_v263: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46signum[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46signum),1)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46compare))
, bytes2word(1,0,0,1)
, useLabel(CT_v267)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46abs[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CADR_N1,3,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,7,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
,	/* v264: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
, 140002
, useLabel(ST_v266)
,	/* CT_v267: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46abs[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46abs),1)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_60))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46negate))
, bytes2word(1,0,0,1)
, useLabel(CT_v269)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46negate[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 120002
, useLabel(ST_v268)
,	/* CT_v269: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46negate[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46negate),1)
, VAPTAG(useLabel(FN_Prelude_46primIntegerNeg))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v271)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46_42[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 110002
, useLabel(ST_v270)
,	/* CT_v271: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46_42[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerMul))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v273)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46_45[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 100002
, useLabel(ST_v272)
,	/* CT_v273: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46_45[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_45),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerSub))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v275)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46_43[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 90002
, useLabel(ST_v274)
,	/* CT_v275: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46_43[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_43),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerAdd))
, bytes2word(0,0,0,0)
, useLabel(CT_v277)
,};
Node FN_Prelude_46Num_46Prelude_46Integer[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_P1,11,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
, 80010
, useLabel(ST_v276)
,	/* CT_v277: (byte 0) */
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
,	/* ST_v276: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
,	/* ST_v270: (byte 4) */
  bytes2word(103,101,114,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
,	/* ST_v274: (byte 2) */
  bytes2word(42,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,78,117)
, bytes2word(109,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,101)
,	/* ST_v272: (byte 4) */
  bytes2word(114,46,43,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
,	/* ST_v266: (byte 2) */
  bytes2word(45,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,78,117)
, bytes2word(109,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,101)
, bytes2word(114,46,97,98)
,	/* ST_v255: (byte 2) */
  bytes2word(115,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,78,117)
, bytes2word(109,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,101)
, bytes2word(114,46,102,114)
, bytes2word(111,109,73,110)
, bytes2word(116,101,103,101)
,	/* ST_v268: (byte 2) */
  bytes2word(114,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,78,117)
, bytes2word(109,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,101)
, bytes2word(114,46,110,101)
, bytes2word(103,97,116,101)
,	/* ST_v261: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,78,117,109)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
, bytes2word(46,115,105,103)
, bytes2word(110,117,109,0)
,};
