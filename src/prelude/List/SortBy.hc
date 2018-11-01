#include "newmacros.h"
#include "runtime.h"

#define CT_v327	((void*)startLabel+28)
#define FN_List_46Prelude_46159_46sequences	((void*)startLabel+64)
#define v340	((void*)startLabel+74)
#define v331	((void*)startLabel+78)
#define v341	((void*)startLabel+90)
#define v335	((void*)startLabel+94)
#define v336	((void*)startLabel+130)
#define v338	((void*)startLabel+150)
#define v332	((void*)startLabel+155)
#define v328	((void*)startLabel+160)
#define CT_v342	((void*)startLabel+192)
#define F0_List_46Prelude_46159_46sequences	((void*)startLabel+200)
#define FN_List_46Prelude_46160_46descending	((void*)startLabel+244)
#define v349	((void*)startLabel+256)
#define v346	((void*)startLabel+260)
#define v347	((void*)startLabel+295)
#define v343	((void*)startLabel+300)
#define CT_v350	((void*)startLabel+336)
#define F0_List_46Prelude_46160_46descending	((void*)startLabel+344)
#define FN_List_46Prelude_46161_46ascending	((void*)startLabel+384)
#define v357	((void*)startLabel+396)
#define v354	((void*)startLabel+400)
#define v355	((void*)startLabel+435)
#define v351	((void*)startLabel+440)
#define CT_v358	((void*)startLabel+492)
#define F0_List_46Prelude_46161_46ascending	((void*)startLabel+500)
#define FN_LAMBDA324	((void*)startLabel+540)
#define CT_v359	((void*)startLabel+576)
#define F0_LAMBDA324	((void*)startLabel+584)
#define FN_LAMBDA323	((void*)startLabel+600)
#define CT_v360	((void*)startLabel+624)
#define F0_LAMBDA323	((void*)startLabel+632)
#define FN_List_46Prelude_46162_46mergeAll	((void*)startLabel+648)
#define v369	((void*)startLabel+658)
#define v364	((void*)startLabel+662)
#define v370	((void*)startLabel+674)
#define v368	((void*)startLabel+678)
#define v365	((void*)startLabel+682)
#define v361	((void*)startLabel+687)
#define CT_v371	((void*)startLabel+708)
#define F0_List_46Prelude_46162_46mergeAll	((void*)startLabel+716)
#define FN_List_46Prelude_46163_46mergePairs	((void*)startLabel+744)
#define v380	((void*)startLabel+754)
#define v375	((void*)startLabel+758)
#define v381	((void*)startLabel+770)
#define v379	((void*)startLabel+774)
#define v376	((void*)startLabel+801)
#define v372	((void*)startLabel+806)
#define CT_v382	((void*)startLabel+824)
#define F0_List_46Prelude_46163_46mergePairs	((void*)startLabel+832)
#define FN_List_46Prelude_46164_46merge	((void*)startLabel+864)
#define v386	((void*)startLabel+874)
#define v387	((void*)startLabel+877)
#define v401	((void*)startLabel+888)
#define v391	((void*)startLabel+892)
#define v392	((void*)startLabel+929)
#define v394	((void*)startLabel+954)
#define v388	((void*)startLabel+959)
#define v383	((void*)startLabel+964)
#define v402	((void*)startLabel+972)
#define v399	((void*)startLabel+976)
#define v396	((void*)startLabel+979)
#define CT_v403	((void*)startLabel+1000)
#define F0_List_46Prelude_46164_46merge	((void*)startLabel+1008)
#define FN_LAMBDA322	((void*)startLabel+1044)
#define CT_v405	((void*)startLabel+1064)
#define CF_LAMBDA322	((void*)startLabel+1072)
#define ST_v404	((void*)startLabel+1076)
extern Node FN_Prelude_46_46[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61[];
extern Node CF_Prelude_46otherwise[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Eq_46Prelude_46Ordering_46_47_61[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v327)
,};
Node FN_List_46sortBy[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v327: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_List_46sortBy[] = {
  CAPTAG(useLabel(FN_List_46sortBy),1)
, CAPTAG(useLabel(FN_List_46Prelude_46162_46mergeAll),1)
, CAPTAG(useLabel(FN_List_46Prelude_46159_46sequences),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v342)
,	/* FN_List_46Prelude_46159_46sequences: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v340: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v331: (byte 2) */
  bytes2word(84,0,UNPACK,2)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v341: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v335: (byte 2) */
  bytes2word(63,0,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_I2)
, bytes2word(HEAP_P1,0,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,3,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,17,0,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CVAL_IN3,HEAP_I2,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,HEAP_I1,HEAP_OFF_N1,6)
,	/* v336: (byte 2) */
  bytes2word(HEAP_I2,RETURN_EVAL,PUSH_CVAL_P1,6)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,15)
, bytes2word(0,HEAP_CVAL_P1,7,HEAP_I2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,HEAP_I1,HEAP_OFF_N1,5)
,	/* v338: (byte 2) */
  bytes2word(HEAP_I2,RETURN_EVAL,POP_P1,2)
,	/* v332: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v328: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(HEAP_CVAL_N1,2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(2,0,0)
,	/* CT_v342: (byte 0) */
  HW(6,2)
, 0
,	/* F0_List_46Prelude_46159_46sequences: (byte 0) */
  CAPTAG(useLabel(FN_List_46Prelude_46159_46sequences),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61))
, VAPTAG(useLabel(FN_List_46Prelude_46160_46descending))
, useLabel(CF_Prelude_46otherwise)
, CAPTAG(useLabel(FN_LAMBDA323),1)
, VAPTAG(useLabel(FN_List_46Prelude_46161_46ascending))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v350)
,	/* FN_List_46Prelude_46160_46descending: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v349: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v346: (byte 4) */
  bytes2word(POP_I1,JUMP,42,0)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_N1,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,3)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,16)
, bytes2word(0,HEAP_CVAL_N1,2,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_I1,HEAP_OFF_N1)
,	/* v347: (byte 3) */
  bytes2word(6,HEAP_I2,RETURN_EVAL,POP_P1)
,	/* v343: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(HEAP_CVAL_N1,2,HEAP_ARG_ARG,2)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,9)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(2,0,0)
,	/* CT_v350: (byte 0) */
  HW(5,4)
, 0
,	/* F0_List_46Prelude_46160_46descending: (byte 0) */
  CAPTAG(useLabel(FN_List_46Prelude_46160_46descending),4)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61))
, VAPTAG(useLabel(FN_List_46Prelude_46160_46descending))
, CAPTAG(useLabel(FN_List_46Prelude_46159_46sequences),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v358)
,	/* FN_List_46Prelude_46161_46ascending: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v357: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v354: (byte 4) */
  bytes2word(POP_I1,JUMP,42,0)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_N1,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,3)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,16)
, bytes2word(0,HEAP_CVAL_I5,HEAP_ARG_ARG,2)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,HEAP_I1,HEAP_OFF_N1)
,	/* v355: (byte 3) */
  bytes2word(6,HEAP_I2,RETURN_EVAL,POP_P1)
,	/* v351: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(HEAP_CVAL_N1,2,HEAP_CVAL_IN3,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,3,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(2,0,0)
,	/* CT_v358: (byte 0) */
  HW(6,4)
, 0
,	/* F0_List_46Prelude_46161_46ascending: (byte 0) */
  CAPTAG(useLabel(FN_List_46Prelude_46161_46ascending),4)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_47_61))
, CAPTAG(useLabel(FN_LAMBDA324),1)
, VAPTAG(useLabel(FN_List_46Prelude_46161_46ascending))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_List_46Prelude_46159_46sequences),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v359)
,	/* FN_LAMBDA324: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,3,PUSH_P1)
, bytes2word(0,PUSH_ARG_I2,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,2,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v359: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA324: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA324),3)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v360)
,	/* FN_LAMBDA323: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v360: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA323: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA323),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v371)
,	/* FN_List_46Prelude_46162_46mergeAll: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v369: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v364: (byte 2) */
  bytes2word(27,0,UNPACK,2)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(8),BOT(8))
,	/* v370: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v368: (byte 2) */
  bytes2word(6,0,POP_I1,PUSH_P1)
,	/* v365: (byte 2) */
  bytes2word(0,RETURN_EVAL,POP_P1,2)
,	/* v361: (byte 3) */
  bytes2word(JUMP,2,0,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v371: (byte 0) */
  HW(3,2)
, 0
,	/* F0_List_46Prelude_46162_46mergeAll: (byte 0) */
  CAPTAG(useLabel(FN_List_46Prelude_46162_46mergeAll),2)
, CAPTAG(useLabel(FN_List_46Prelude_46163_46mergePairs),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_List_46Prelude_46162_46mergeAll))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v382)
,	/* FN_List_46Prelude_46163_46mergePairs: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v380: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v375: (byte 2) */
  bytes2word(50,0,UNPACK,2)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v381: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v379: (byte 2) */
  bytes2word(29,0,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_I2,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,5)
,	/* v376: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v372: (byte 2) */
  bytes2word(2,0,PUSH_ARG_I2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v382: (byte 0) */
  HW(4,2)
, 0
,	/* F0_List_46Prelude_46163_46mergePairs: (byte 0) */
  CAPTAG(useLabel(FN_List_46Prelude_46163_46mergePairs),2)
, CAPTAG(useLabel(FN_List_46Prelude_46164_46merge),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_List_46Prelude_46163_46mergePairs),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v403)
,	/* FN_List_46Prelude_46164_46merge: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v386: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I3)
,	/* v387: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v401: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v391: (byte 4) */
  bytes2word(POP_I1,JUMP,69,0)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_I2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_N1,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,3)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,18)
, bytes2word(0,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_I1,HEAP_OFF_N1,6)
,	/* v392: (byte 1) */
  bytes2word(RETURN,PUSH_CVAL_P1,6,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,20,0)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_P1,3,HEAP_OFF_N1)
,	/* v394: (byte 2) */
  bytes2word(6,RETURN,POP_P1,2)
,	/* v388: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v383: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I3,TABLESWITCH,2,NOP)
,	/* v402: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v399: (byte 4) */
  bytes2word(POP_I1,JUMP,5,0)
,	/* v396: (byte 3) */
  bytes2word(POP_I1,PUSH_ARG_I2,RETURN,HEAP_CVAL_P1)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(2,0,0)
,	/* CT_v403: (byte 0) */
  HW(6,3)
, 0
,	/* F0_List_46Prelude_46164_46merge: (byte 0) */
  CAPTAG(useLabel(FN_List_46Prelude_46164_46merge),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61))
, CAPTAG(useLabel(FN_List_46Prelude_46164_46merge),2)
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_LAMBDA322))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v405)
,	/* FN_LAMBDA322: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v404)
,	/* CT_v405: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA322: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA322))
,	/* ST_v404: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(58,32,80,97)
, bytes2word(116,116,101,114)
, bytes2word(110,32,109,97)
, bytes2word(116,99,104,32)
, bytes2word(102,97,105,108)
, bytes2word(117,114,101,32)
, bytes2word(105,110,32,102)
, bytes2word(117,110,99,116)
, bytes2word(105,111,110,32)
, bytes2word(97,116,32,50)
, bytes2word(55,58,53,45)
, bytes2word(51,49,58,50)
, bytes2word(56,46,0,0)
,};
