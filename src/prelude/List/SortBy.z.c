#include "newmacros.h"
#include "runtime.h"

#define CT_v328	((void*)startLabel+40)
#define FN_List_46Prelude_46159_46sequences	((void*)startLabel+76)
#define v342	((void*)startLabel+90)
#define v332	((void*)startLabel+94)
#define v343	((void*)startLabel+106)
#define v336	((void*)startLabel+110)
#define v337	((void*)startLabel+146)
#define v339	((void*)startLabel+166)
#define v333	((void*)startLabel+171)
#define v329	((void*)startLabel+176)
#define CT_v344	((void*)startLabel+216)
#define F0_List_46Prelude_46159_46sequences	((void*)startLabel+224)
#define FN_List_46Prelude_46160_46descending	((void*)startLabel+268)
#define v352	((void*)startLabel+284)
#define v348	((void*)startLabel+288)
#define v349	((void*)startLabel+322)
#define v345	((void*)startLabel+327)
#define CT_v353	((void*)startLabel+372)
#define F0_List_46Prelude_46160_46descending	((void*)startLabel+380)
#define FN_List_46Prelude_46161_46ascending	((void*)startLabel+420)
#define v361	((void*)startLabel+436)
#define v357	((void*)startLabel+440)
#define v358	((void*)startLabel+474)
#define v354	((void*)startLabel+479)
#define CT_v362	((void*)startLabel+540)
#define F0_List_46Prelude_46161_46ascending	((void*)startLabel+548)
#define FN_LAMBDA324	((void*)startLabel+588)
#define CT_v364	((void*)startLabel+632)
#define F0_LAMBDA324	((void*)startLabel+640)
#define FN_LAMBDA323	((void*)startLabel+656)
#define CT_v366	((void*)startLabel+688)
#define F0_LAMBDA323	((void*)startLabel+696)
#define FN_List_46Prelude_46162_46mergeAll	((void*)startLabel+712)
#define v376	((void*)startLabel+726)
#define v370	((void*)startLabel+730)
#define v377	((void*)startLabel+742)
#define v374	((void*)startLabel+746)
#define v371	((void*)startLabel+750)
#define v367	((void*)startLabel+755)
#define CT_v378	((void*)startLabel+784)
#define F0_List_46Prelude_46162_46mergeAll	((void*)startLabel+792)
#define FN_List_46Prelude_46163_46mergePairs	((void*)startLabel+820)
#define v388	((void*)startLabel+834)
#define v382	((void*)startLabel+838)
#define v389	((void*)startLabel+850)
#define v386	((void*)startLabel+854)
#define v383	((void*)startLabel+880)
#define v379	((void*)startLabel+885)
#define CT_v390	((void*)startLabel+908)
#define F0_List_46Prelude_46163_46mergePairs	((void*)startLabel+916)
#define FN_List_46Prelude_46164_46merge	((void*)startLabel+948)
#define v394	((void*)startLabel+962)
#define v395	((void*)startLabel+965)
#define v410	((void*)startLabel+976)
#define v399	((void*)startLabel+980)
#define v400	((void*)startLabel+1016)
#define v402	((void*)startLabel+1041)
#define v396	((void*)startLabel+1046)
#define v391	((void*)startLabel+1051)
#define v411	((void*)startLabel+1058)
#define v407	((void*)startLabel+1062)
#define v404	((void*)startLabel+1065)
#define CT_v412	((void*)startLabel+1096)
#define F0_List_46Prelude_46164_46merge	((void*)startLabel+1104)
#define FN_LAMBDA322	((void*)startLabel+1140)
#define CT_v414	((void*)startLabel+1172)
#define CF_LAMBDA322	((void*)startLabel+1180)
#define ST_v327	((void*)startLabel+1184)
#define ST_v365	((void*)startLabel+1196)
#define ST_v351	((void*)startLabel+1214)
#define ST_v360	((void*)startLabel+1237)
#define ST_v363	((void*)startLabel+1260)
#define ST_v375	((void*)startLabel+1284)
#define ST_v387	((void*)startLabel+1307)
#define ST_v408	((void*)startLabel+1330)
#define ST_v341	((void*)startLabel+1353)
#define ST_v413	((void*)startLabel+1375)
extern Node TM_List[];
extern Node FN_Prelude_46_46[];
extern Node TMSUB_List[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61[];
extern Node CF_Prelude_46otherwise[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Eq_46Prelude_46Ordering_46_47_61[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v328)
,};
Node FN_List_46sortBy[] = {
  useLabel(TM_List)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v327)
,	/* CT_v328: (byte 0) */
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
, useLabel(CT_v344)
,	/* FN_List_46Prelude_46159_46sequences: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v342: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v332: (byte 2) */
  bytes2word(84,0,UNPACK,2)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v343: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v336: (byte 2) */
  bytes2word(63,0,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_I2)
, bytes2word(HEAP_P1,0,HEAP_CVAL_IN3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(3,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(18,0,HEAP_CVAL_N1,4)
, bytes2word(HEAP_CVAL_N1,5,HEAP_I2,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,HEAP_I1,HEAP_OFF_N1,6)
,	/* v337: (byte 2) */
  bytes2word(HEAP_I2,RETURN_EVAL,PUSH_CVAL_P1,6)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,15)
, bytes2word(0,HEAP_CVAL_P1,7,HEAP_I2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,HEAP_I1,HEAP_OFF_N1,5)
,	/* v339: (byte 2) */
  bytes2word(HEAP_I2,RETURN_EVAL,POP_P1,2)
,	/* v333: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v329: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(HEAP_CVAL_N1,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(5,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(2,0,0)
, 80005
, useLabel(ST_v341)
,	/* CT_v344: (byte 0) */
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
, useLabel(CT_v353)
,	/* FN_List_46Prelude_46160_46descending: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDSTACK_I16,PUSH_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v352: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v348: (byte 4) */
  bytes2word(POP_I1,JUMP,41,0)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,3,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,16,0)
, bytes2word(HEAP_CVAL_N1,4,HEAP_ARG_ARG,2)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,HEAP_I1,HEAP_OFF_N1,6)
,	/* v349: (byte 2) */
  bytes2word(HEAP_I2,RETURN_EVAL,POP_P1,2)
,	/* v345: (byte 3) */
  bytes2word(JUMP,2,0,HEAP_CVAL_N1)
, bytes2word(4,HEAP_ARG_ARG,2,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(4,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(2,0,0)
, 130005
, useLabel(ST_v351)
,	/* CT_v353: (byte 0) */
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
, useLabel(CT_v362)
,	/* FN_List_46Prelude_46161_46ascending: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDSTACK_I16,PUSH_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v361: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v357: (byte 4) */
  bytes2word(POP_I1,JUMP,41,0)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,3,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,16,0)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG_ARG,2,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(1,HEAP_I1,HEAP_OFF_N1,6)
,	/* v358: (byte 2) */
  bytes2word(HEAP_I2,RETURN_EVAL,POP_P1,2)
,	/* v354: (byte 3) */
  bytes2word(JUMP,2,0,HEAP_CVAL_N1)
, bytes2word(4,HEAP_CVAL_N1,5,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,3,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,5,HEAP_OFF_N1,9)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(2,0,0)
, 170005
, useLabel(ST_v360)
,	/* CT_v362: (byte 0) */
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
, useLabel(CT_v364)
,	/* FN_LAMBDA324: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(1,3,PUSH_P1,0)
, bytes2word(PUSH_ARG_I2,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 180040
, useLabel(ST_v363)
,	/* CT_v364: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA324: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA324),3)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v366)
,	/* FN_LAMBDA323: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 100042
, useLabel(ST_v365)
,	/* CT_v366: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA323: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA323),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v378)
,	/* FN_List_46Prelude_46162_46mergeAll: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v376: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v370: (byte 2) */
  bytes2word(27,0,UNPACK,2)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(8),BOT(8))
,	/* v377: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v374: (byte 2) */
  bytes2word(6,0,POP_I1,PUSH_P1)
,	/* v371: (byte 2) */
  bytes2word(0,RETURN_EVAL,POP_P1,2)
,	/* v367: (byte 3) */
  bytes2word(JUMP,2,0,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 210005
, useLabel(ST_v375)
,	/* CT_v378: (byte 0) */
  HW(3,2)
, 0
,	/* F0_List_46Prelude_46162_46mergeAll: (byte 0) */
  CAPTAG(useLabel(FN_List_46Prelude_46162_46mergeAll),2)
, CAPTAG(useLabel(FN_List_46Prelude_46163_46mergePairs),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_List_46Prelude_46162_46mergeAll))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v390)
,	/* FN_List_46Prelude_46163_46mergePairs: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v388: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v382: (byte 2) */
  bytes2word(49,0,UNPACK,2)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v389: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v386: (byte 2) */
  bytes2word(28,0,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_I2,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1)
,	/* v383: (byte 4) */
  bytes2word(10,HEAP_OFF_N1,5,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v379: (byte 1) */
  bytes2word(0,PUSH_ARG_I2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 240005
, useLabel(ST_v387)
,	/* CT_v390: (byte 0) */
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
, useLabel(CT_v412)
,	/* FN_List_46Prelude_46164_46merge: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v394: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I3)
,	/* v395: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v410: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v399: (byte 4) */
  bytes2word(POP_I1,JUMP,68,0)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_I2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,3,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,18,0)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,2)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,4)
,	/* v400: (byte 4) */
  bytes2word(HEAP_I1,HEAP_OFF_N1,6,RETURN)
, bytes2word(PUSH_CVAL_P1,6,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,20,0,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_P1,3,HEAP_OFF_N1,6)
,	/* v402: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v396: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v391: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG_I3)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v411: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v407: (byte 2) */
  bytes2word(5,0,POP_I1,PUSH_ARG_I2)
,	/* v404: (byte 1) */
  bytes2word(RETURN,HEAP_CVAL_P1,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(2,0,0)
, 270005
, useLabel(ST_v408)
,	/* CT_v412: (byte 0) */
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
, useLabel(CT_v414)
,	/* FN_LAMBDA322: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v413)
, 270005
, useLabel(ST_v408)
,	/* CT_v414: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA322: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA322))
,	/* ST_v327: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,115,111,114)
,	/* ST_v365: (byte 4) */
  bytes2word(116,66,121,0)
, bytes2word(76,105,115,116)
, bytes2word(46,115,111,114)
, bytes2word(116,66,121,58)
, bytes2word(49,48,58,52)
,	/* ST_v351: (byte 2) */
  bytes2word(50,0,76,105)
, bytes2word(115,116,46,115)
, bytes2word(111,114,116,66)
, bytes2word(121,58,49,51)
, bytes2word(58,53,45,49)
, bytes2word(53,58,52,54)
,	/* ST_v360: (byte 1) */
  bytes2word(0,76,105,115)
, bytes2word(116,46,115,111)
, bytes2word(114,116,66,121)
, bytes2word(58,49,55,58)
, bytes2word(53,45,49,57)
,	/* ST_v363: (byte 4) */
  bytes2word(58,52,54,0)
, bytes2word(76,105,115,116)
, bytes2word(46,115,111,114)
, bytes2word(116,66,121,58)
, bytes2word(49,56,58,52)
, bytes2word(48,45,49,56)
,	/* ST_v375: (byte 4) */
  bytes2word(58,53,53,0)
, bytes2word(76,105,115,116)
, bytes2word(46,115,111,114)
, bytes2word(116,66,121,58)
, bytes2word(50,49,58,53)
, bytes2word(45,50,50,58)
,	/* ST_v387: (byte 3) */
  bytes2word(52,51,0,76)
, bytes2word(105,115,116,46)
, bytes2word(115,111,114,116)
, bytes2word(66,121,58,50)
, bytes2word(52,58,53,45)
, bytes2word(50,53,58,50)
,	/* ST_v408: (byte 2) */
  bytes2word(56,0,76,105)
, bytes2word(115,116,46,115)
, bytes2word(111,114,116,66)
, bytes2word(121,58,50,55)
, bytes2word(58,53,45,51)
, bytes2word(49,58,50,56)
,	/* ST_v341: (byte 1) */
  bytes2word(0,76,105,115)
, bytes2word(116,46,115,111)
, bytes2word(114,116,66,121)
, bytes2word(58,56,58,53)
, bytes2word(45,49,49,58)
,	/* ST_v413: (byte 3) */
  bytes2word(50,51,0,76)
, bytes2word(105,115,116,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,50,55)
, bytes2word(58,53,45,51)
, bytes2word(49,58,50,56)
, bytes2word(46,0,0,0)
,};
