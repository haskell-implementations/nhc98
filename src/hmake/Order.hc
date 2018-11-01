#include "newmacros.h"
#include "runtime.h"

#define FN_Order_46reprnode	((void*)startLabel+12)
#define CT_v423	((void*)startLabel+48)
#define F0_Order_46reprnode	((void*)startLabel+56)
#define FN_Order_46reconstruct	((void*)startLabel+88)
#define CT_v424	((void*)startLabel+108)
#define F0_Order_46reconstruct	((void*)startLabel+116)
#define FN_LAMBDA418	((void*)startLabel+140)
#define v431	((void*)startLabel+150)
#define v428	((void*)startLabel+154)
#define v425	((void*)startLabel+181)
#define CT_v433	((void*)startLabel+204)
#define F0_LAMBDA418	((void*)startLabel+212)
#define FN_LAMBDA417	((void*)startLabel+240)
#define CT_v435	((void*)startLabel+260)
#define CF_LAMBDA417	((void*)startLabel+268)
#define FN_Order_46collapse_95graph	((void*)startLabel+284)
#define CT_v436	((void*)startLabel+308)
#define F0_Order_46collapse_95graph	((void*)startLabel+316)
#define FN_Order_46collapse_95node	((void*)startLabel+348)
#define v443	((void*)startLabel+358)
#define v440	((void*)startLabel+362)
#define v437	((void*)startLabel+395)
#define CT_v445	((void*)startLabel+416)
#define F0_Order_46collapse_95node	((void*)startLabel+424)
#define FN_LAMBDA419	((void*)startLabel+464)
#define CT_v447	((void*)startLabel+484)
#define CF_LAMBDA419	((void*)startLabel+492)
#define FN_Order_46rmreflx	((void*)startLabel+508)
#define CT_v448	((void*)startLabel+524)
#define F0_Order_46rmreflx	((void*)startLabel+532)
#define FN_LAMBDA420	((void*)startLabel+556)
#define CT_v452	((void*)startLabel+596)
#define F0_LAMBDA420	((void*)startLabel+604)
#define CT_v453	((void*)startLabel+668)
#define FN_Order_46Prelude_46193_46isnode	((void*)startLabel+712)
#define CT_v454	((void*)startLabel+732)
#define F0_Order_46Prelude_46193_46isnode	((void*)startLabel+740)
#define CT_v455	((void*)startLabel+844)
#define CT_v456	((void*)startLabel+940)
#define FN_LAMBDA421	((void*)startLabel+976)
#define CT_v457	((void*)startLabel+1004)
#define F0_LAMBDA421	((void*)startLabel+1012)
#define ST_v446	((void*)startLabel+1020)
#define ST_v434	((void*)startLabel+1076)
extern Node FN_Prelude_46elem[];
extern Node FN_Prelude_46filter[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46head[];
extern Node FN_Prelude_46map[];
extern Node FN_Compat_46assocFail[];
extern Node F0_Prelude_46fst[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Utils_46pairwith[];
extern Node F0_Prelude_46map[];
extern Node FN_Utils_46apair[];
extern Node FN_Prelude_46concat[];
extern Node F0_Prelude_46snd[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46_47_61[];
extern Node FN_Prelude_46flip[];
extern Node FN_Utils_46asnd[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_Graph_46scceq[];
extern Node FN_Tsort_46ptsort[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v423)
,	/* FN_Order_46reprnode: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,5)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v423: (byte 0) */
  HW(4,3)
, 0
,	/* F0_Order_46reprnode: (byte 0) */
  CAPTAG(useLabel(FN_Order_46reprnode),3)
, VAPTAG(useLabel(FN_Prelude_46elem))
, CAPTAG(useLabel(FN_Prelude_46filter),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46head)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v424)
,	/* FN_Order_46reconstruct: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG_ARG,1,3)
, bytes2word(HEAP_OFF_N1,6,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v424: (byte 0) */
  HW(3,3)
, 0
,	/* F0_Order_46reconstruct: (byte 0) */
  CAPTAG(useLabel(FN_Order_46reconstruct),3)
, CAPTAG(useLabel(FN_LAMBDA418),1)
, VAPTAG(useLabel(FN_Prelude_46map))
, VAPTAG(useLabel(FN_Compat_46assocFail))
, bytes2word(1,0,0,1)
, useLabel(CT_v433)
,	/* FN_LAMBDA418: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v431: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v428: (byte 2) */
  bytes2word(29,0,UNPACK,2)
, bytes2word(PUSH_P1,0,ZAP_STACK_P1,1)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_P1,3)
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,0)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_I1,HEAP_OFF_N1,5)
,	/* v425: (byte 1) */
  bytes2word(RETURN,HEAP_CVAL_I5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(1,2,0)
,	/* CT_v433: (byte 0) */
  HW(4,1)
, 0
,	/* F0_LAMBDA418: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA418),1)
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_Prelude_46fst)
, VAPTAG(useLabel(FN_LAMBDA417))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v435)
,	/* FN_LAMBDA417: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v434)
,	/* CT_v435: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA417: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA417))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v436)
,	/* FN_Order_46collapse_95graph: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v436: (byte 0) */
  HW(5,2)
, 0
,	/* F0_Order_46collapse_95graph: (byte 0) */
  CAPTAG(useLabel(FN_Order_46collapse_95graph),2)
, CAPTAG(useLabel(FN_Order_46reprnode),1)
, VAPTAG(useLabel(FN_Utils_46pairwith))
, useLabel(F0_Prelude_46map)
, CAPTAG(useLabel(FN_Utils_46apair),1)
, CAPTAG(useLabel(FN_Prelude_46map),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v445)
,	/* FN_Order_46collapse_95node: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v443: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v440: (byte 2) */
  bytes2word(35,0,UNPACK,2)
, bytes2word(PUSH_P1,0,ZAP_STACK_P1,1)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_P1)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(7,HEAP_I1,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_I1)
,	/* v437: (byte 3) */
  bytes2word(HEAP_OFF_N1,5,RETURN,HEAP_CVAL_P1)
, bytes2word(8,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v445: (byte 0) */
  HW(7,1)
, 0
,	/* F0_Order_46collapse_95node: (byte 0) */
  CAPTAG(useLabel(FN_Order_46collapse_95node),1)
, VAPTAG(useLabel(FN_Prelude_46concat))
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_Prelude_46snd)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_LAMBDA419))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v447)
,	/* FN_LAMBDA419: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v446)
,	/* CT_v447: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA419: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA419))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v448)
,	/* FN_Order_46rmreflx: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v448: (byte 0) */
  HW(2,2)
, 0
,	/* F0_Order_46rmreflx: (byte 0) */
  CAPTAG(useLabel(FN_Order_46rmreflx),2)
, CAPTAG(useLabel(FN_LAMBDA420),1)
, VAPTAG(useLabel(FN_Prelude_46map))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v452)
,	/* FN_LAMBDA420: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I1,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v452: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA420: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA420),2)
, VAPTAG(useLabel(FN_Prelude_46_47_61))
, CAPTAG(useLabel(FN_Prelude_46flip),1)
, VAPTAG(useLabel(FN_Prelude_46filter))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v453)
,};
Node FN_Order_46closegraph[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_P1,0)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v453: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Order_46closegraph[] = {
  CAPTAG(useLabel(FN_Order_46closegraph),2)
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_Prelude_46fst)
, CAPTAG(useLabel(FN_Order_46Prelude_46193_46isnode),1)
, CAPTAG(useLabel(FN_Prelude_46filter),1)
, CAPTAG(useLabel(FN_Utils_46asnd),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v454)
,	/* FN_Order_46Prelude_46193_46isnode: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,3,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v454: (byte 0) */
  HW(1,3)
, 0
,	/* F0_Order_46Prelude_46193_46isnode: (byte 0) */
  CAPTAG(useLabel(FN_Order_46Prelude_46193_46isnode),3)
, VAPTAG(useLabel(FN_Prelude_46elem))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v455)
,};
Node FN_Order_46scctsort[] = {
  bytes2word(NEEDHEAP_P1,43,PUSH_HEAP,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_I2,PUSH_HEAP,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,9,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,10,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,11,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,12,HEAP_P1,0)
, bytes2word(HEAP_I2,HEAP_CVAL_P1,13,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(13,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,13,HEAP_OFF_N1)
, bytes2word(16,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,14,HEAP_OFF_N1,4)
, bytes2word(HEAP_I2,PUSH_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v455: (byte 0) */
  HW(12,2)
, 0
,};
Node F0_Order_46scctsort[] = {
  CAPTAG(useLabel(FN_Order_46scctsort),2)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Graph_46scceq))
, CAPTAG(useLabel(FN_Prelude_46map),1)
, useLabel(F0_Prelude_46fst)
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_Order_46collapse_95node)
, CAPTAG(useLabel(FN_Tsort_46ptsort),1)
, CAPTAG(useLabel(FN_Order_46rmreflx),1)
, CAPTAG(useLabel(FN_Order_46closegraph),1)
, VAPTAG(useLabel(FN_Order_46collapse_95graph))
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v456)
,};
Node FN_Order_46decorate[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v456: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Order_46decorate[] = {
  CAPTAG(useLabel(FN_Order_46decorate),2)
, CAPTAG(useLabel(FN_LAMBDA421),1)
, CAPTAG(useLabel(FN_Prelude_46map),1)
, CAPTAG(useLabel(FN_Utils_46asnd),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v457)
,	/* FN_LAMBDA421: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_ARG,3)
, bytes2word(HEAP_OFF_N1,6,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v457: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA421: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA421),3)
, VAPTAG(useLabel(FN_Compat_46assocFail))
,	/* ST_v446: (byte 0) */
  bytes2word(79,114,100,101)
, bytes2word(114,58,32,80)
, bytes2word(97,116,116,101)
, bytes2word(114,110,32,109)
, bytes2word(97,116,99,104)
, bytes2word(32,102,97,105)
, bytes2word(108,117,114,101)
, bytes2word(32,105,110,32)
, bytes2word(102,117,110,99)
, bytes2word(116,105,111,110)
, bytes2word(32,97,116,32)
, bytes2word(52,51,58,49)
, bytes2word(45,52,51,58)
,	/* ST_v434: (byte 4) */
  bytes2word(54,49,46,0)
, bytes2word(79,114,100,101)
, bytes2word(114,58,32,80)
, bytes2word(97,116,116,101)
, bytes2word(114,110,32,109)
, bytes2word(97,116,99,104)
, bytes2word(32,102,97,105)
, bytes2word(108,117,114,101)
, bytes2word(32,105,110,32)
, bytes2word(108,97,109,98)
, bytes2word(100,97,32,97)
, bytes2word(116,32,52,56)
, bytes2word(58,50,51,45)
, bytes2word(52,56,58,54)
, bytes2word(50,46,0,0)
,};
