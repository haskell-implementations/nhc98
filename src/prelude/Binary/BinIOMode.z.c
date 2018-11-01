#include "newmacros.h"
#include "runtime.h"

#define CT_v389	((void*)startLabel+56)
#define CT_v391	((void*)startLabel+108)
#define v399	((void*)startLabel+156)
#define v395	((void*)startLabel+160)
#define v396	((void*)startLabel+164)
#define v397	((void*)startLabel+169)
#define v392	((void*)startLabel+174)
#define CT_v400	((void*)startLabel+212)
#define FN_LAMBDA386	((void*)startLabel+240)
#define CT_v403	((void*)startLabel+272)
#define CF_LAMBDA386	((void*)startLabel+280)
#define CT_v405	((void*)startLabel+316)
#define CT_v407	((void*)startLabel+368)
#define CT_v409	((void*)startLabel+424)
#define CT_v411	((void*)startLabel+476)
#define CT_v413	((void*)startLabel+528)
#define CT_v415	((void*)startLabel+592)
#define CT_v417	((void*)startLabel+652)
#define CT_v419	((void*)startLabel+700)
#define CT_v421	((void*)startLabel+756)
#define CT_v423	((void*)startLabel+812)
#define CT_v425	((void*)startLabel+868)
#define CT_v427	((void*)startLabel+924)
#define CT_v429	((void*)startLabel+984)
#define CT_v431	((void*)startLabel+1032)
#define CT_v433	((void*)startLabel+1092)
#define CT_v435	((void*)startLabel+1164)
#define CT_v437	((void*)startLabel+1260)
#define ST_v402	((void*)startLabel+1304)
#define ST_v436	((void*)startLabel+1373)
#define ST_v390	((void*)startLabel+1407)
#define ST_v388	((void*)startLabel+1450)
#define ST_v406	((void*)startLabel+1497)
#define ST_v408	((void*)startLabel+1546)
#define ST_v404	((void*)startLabel+1591)
#define ST_v412	((void*)startLabel+1634)
#define ST_v410	((void*)startLabel+1673)
#define ST_v398	((void*)startLabel+1712)
#define ST_v401	((void*)startLabel+1753)
#define ST_v432	((void*)startLabel+1804)
#define ST_v430	((void*)startLabel+1836)
#define ST_v428	((void*)startLabel+1871)
#define ST_v434	((void*)startLabel+1906)
#define ST_v426	((void*)startLabel+1939)
#define ST_v416	((void*)startLabel+1974)
#define ST_v422	((void*)startLabel+2010)
#define ST_v424	((void*)startLabel+2045)
#define ST_v414	((void*)startLabel+2081)
#define ST_v420	((void*)startLabel+2122)
#define ST_v418	((void*)startLabel+2159)
extern Node TM_NHC_46Binary[];
extern Node FN_Prelude_46_95enumFromThenTo[];
extern Node FN_Prelude_46_95enumFromTo[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node TMSUB_NHC_46Binary[];
extern Node FN_Prelude_46_95_46enumFromThenTo[];
extern Node CF_Prelude_46Enum_46NHC_46Binary_46BinIOMode[];
extern Node FN_Prelude_46_95_46enumFromTo[];
extern Node FN_Prelude_46_95_46succ[];
extern Node FN_Prelude_46_95_46pred[];
extern Node FN_Prelude_46_95fromEnum[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46NHC_46Binary_46BinIOMode[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46NHC_46Binary_46BinIOMode[];

static Node startLabel[] = {
  42
,};
Node C0_NHC_46Binary_46RW[] = {
  CONSTR(2,0,0)
,};
Node C0_NHC_46Binary_46WO[] = {
  CONSTR(1,0,0)
,};
Node C0_NHC_46Binary_46RO[] = {
  CONSTR(0,0,0)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v389)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThen[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_INT_P1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50050
, useLabel(ST_v388)
,	/* CT_v389: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThen),2)
, VAPTAG(useLabel(FN_Prelude_46_95enumFromThenTo))
, bytes2word(1,0,0,1)
, useLabel(CT_v391)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFrom[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_INT_P1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50050
, useLabel(ST_v390)
,	/* CT_v391: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFrom),1)
, VAPTAG(useLabel(FN_Prelude_46_95enumFromTo))
, bytes2word(1,0,0,1)
, useLabel(CT_v400)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46toEnum[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,3,TOP(0),BOT(0))
, bytes2word(TOP(18),BOT(18),TOP(1),BOT(1))
, bytes2word(TOP(22),BOT(22),TOP(2),BOT(2))
,	/* v399: (byte 4) */
  bytes2word(TOP(27),BOT(27),TOP(14),BOT(14))
,	/* v395: (byte 4) */
  bytes2word(POP_I1,JUMP,16,0)
,	/* v396: (byte 4) */
  bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,4)
,	/* v397: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v392: (byte 2) */
  bytes2word(5,RETURN,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,0,0)
, CONSTR(1,0,0)
, CONSTR(0,0,0)
, 50050
, useLabel(ST_v398)
,	/* CT_v400: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46toEnum),1)
, VAPTAG(useLabel(FN_LAMBDA386))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v403)
,	/* FN_LAMBDA386: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v402)
, 50050
, useLabel(ST_v401)
,	/* CT_v403: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA386: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA386))
, bytes2word(1,0,0,1)
, useLabel(CT_v405)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(ORD,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50050
, useLabel(ST_v404)
,	/* CT_v405: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v407)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThenTo[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50050
, useLabel(ST_v406)
,	/* CT_v407: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46NHC_46Binary_46BinIOMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v409)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromTo[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 50050
, useLabel(ST_v408)
,	/* CT_v409: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46NHC_46Binary_46BinIOMode)
, bytes2word(1,0,0,1)
, useLabel(CT_v411)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46succ[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 50050
, useLabel(ST_v410)
,	/* CT_v411: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46succ),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46succ))
, useLabel(CF_Prelude_46Enum_46NHC_46Binary_46BinIOMode)
, bytes2word(1,0,0,1)
, useLabel(CT_v413)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46pred[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 50050
, useLabel(ST_v412)
,	/* CT_v413: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46pred),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46pred))
, useLabel(CF_Prelude_46Enum_46NHC_46Binary_46BinIOMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v415)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46compare[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50045
, useLabel(ST_v414)
,	/* CT_v415: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46_95fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v417)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60_61[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(ORD,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(ORD,LE_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 50045
, useLabel(ST_v416)
,	/* CT_v417: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v419)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46min[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 50045
, useLabel(ST_v418)
,	/* CT_v419: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46NHC_46Binary_46BinIOMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v421)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46max[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 50045
, useLabel(ST_v420)
,	/* CT_v421: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46NHC_46Binary_46BinIOMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v423)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 50045
, useLabel(ST_v422)
,	/* CT_v423: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46NHC_46Binary_46BinIOMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v425)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62_61[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 50045
, useLabel(ST_v424)
,	/* CT_v425: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46NHC_46Binary_46BinIOMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v427)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 50045
, useLabel(ST_v426)
,	/* CT_v427: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46NHC_46Binary_46BinIOMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v429)
,};
Node FN_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_61_61[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(ORD,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(ORD,EQ_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 50041
, useLabel(ST_v428)
,	/* CT_v429: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_61_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v431)
,};
Node FN_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_47_61[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 50041
, useLabel(ST_v430)
,	/* CT_v431: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46NHC_46Binary_46BinIOMode)
, bytes2word(0,0,0,0)
, useLabel(CT_v433)
,};
Node FN_Prelude_46Eq_46NHC_46Binary_46BinIOMode[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 50041
, useLabel(ST_v432)
,	/* CT_v433: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46NHC_46Binary_46BinIOMode[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46Binary_46BinIOMode))
, useLabel(F0_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_47_61)
, useLabel(F0_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v435)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 50045
, useLabel(ST_v434)
,	/* CT_v435: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46NHC_46Binary_46BinIOMode[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode))
, useLabel(CF_Prelude_46Eq_46NHC_46Binary_46BinIOMode)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60_61)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62_61)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46compare)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46min)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46max)
, bytes2word(0,0,0,0)
, useLabel(CT_v437)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 50050
, useLabel(ST_v436)
,	/* CT_v437: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Enum_46NHC_46Binary_46BinIOMode[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode))
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46succ)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46pred)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFrom)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46toEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThenTo)
,	/* ST_v402: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,58,32)
, bytes2word(78,111,32,109)
, bytes2word(97,116,99,104)
, bytes2word(105,110,103,32)
, bytes2word(97,108,116,101)
, bytes2word(114,110,97,116)
, bytes2word(105,118,101,32)
, bytes2word(105,110,32,99)
, bytes2word(97,115,101,32)
, bytes2word(101,120,112,114)
, bytes2word(101,115,115,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,53,58)
, bytes2word(53,48,45,53)
, bytes2word(58,53,51,46)
,	/* ST_v436: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,110,117)
, bytes2word(109,46,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,66,105,110)
, bytes2word(73,79,77,111)
,	/* ST_v390: (byte 3) */
  bytes2word(100,101,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(110,117,109,46)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,66)
, bytes2word(105,110,73,79)
, bytes2word(77,111,100,101)
, bytes2word(46,101,110,117)
, bytes2word(109,70,114,111)
,	/* ST_v388: (byte 2) */
  bytes2word(109,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,110)
, bytes2word(117,109,46,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,66,105)
, bytes2word(110,73,79,77)
, bytes2word(111,100,101,46)
, bytes2word(101,110,117,109)
, bytes2word(70,114,111,109)
, bytes2word(84,104,101,110)
,	/* ST_v406: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,110,117)
, bytes2word(109,46,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,66,105,110)
, bytes2word(73,79,77,111)
, bytes2word(100,101,46,101)
, bytes2word(110,117,109,70)
, bytes2word(114,111,109,84)
, bytes2word(104,101,110,84)
,	/* ST_v408: (byte 2) */
  bytes2word(111,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,110)
, bytes2word(117,109,46,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,66,105)
, bytes2word(110,73,79,77)
, bytes2word(111,100,101,46)
, bytes2word(101,110,117,109)
, bytes2word(70,114,111,109)
,	/* ST_v404: (byte 3) */
  bytes2word(84,111,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(110,117,109,46)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,66)
, bytes2word(105,110,73,79)
, bytes2word(77,111,100,101)
, bytes2word(46,102,114,111)
, bytes2word(109,69,110,117)
,	/* ST_v412: (byte 2) */
  bytes2word(109,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,110)
, bytes2word(117,109,46,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,66,105)
, bytes2word(110,73,79,77)
, bytes2word(111,100,101,46)
, bytes2word(112,114,101,100)
,	/* ST_v410: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,110,117)
, bytes2word(109,46,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,66,105,110)
, bytes2word(73,79,77,111)
, bytes2word(100,101,46,115)
,	/* ST_v398: (byte 4) */
  bytes2word(117,99,99,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(66,105,110,73)
, bytes2word(79,77,111,100)
, bytes2word(101,46,116,111)
, bytes2word(69,110,117,109)
,	/* ST_v401: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,110,117)
, bytes2word(109,46,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,66,105,110)
, bytes2word(73,79,77,111)
, bytes2word(100,101,46,116)
, bytes2word(111,69,110,117)
, bytes2word(109,58,53,58)
, bytes2word(53,48,45,53)
,	/* ST_v432: (byte 4) */
  bytes2word(58,53,51,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,66,105)
, bytes2word(110,73,79,77)
,	/* ST_v430: (byte 4) */
  bytes2word(111,100,101,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,66,105)
, bytes2word(110,73,79,77)
, bytes2word(111,100,101,46)
,	/* ST_v428: (byte 3) */
  bytes2word(47,61,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(113,46,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,66,105,110)
, bytes2word(73,79,77,111)
, bytes2word(100,101,46,61)
,	/* ST_v434: (byte 2) */
  bytes2word(61,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,66,105,110)
, bytes2word(73,79,77,111)
,	/* ST_v426: (byte 3) */
  bytes2word(100,101,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,66,105)
, bytes2word(110,73,79,77)
, bytes2word(111,100,101,46)
,	/* ST_v416: (byte 2) */
  bytes2word(60,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,66,105,110)
, bytes2word(73,79,77,111)
, bytes2word(100,101,46,60)
,	/* ST_v422: (byte 2) */
  bytes2word(61,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,66,105,110)
, bytes2word(73,79,77,111)
, bytes2word(100,101,46,62)
,	/* ST_v424: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(66,105,110,73)
, bytes2word(79,77,111,100)
, bytes2word(101,46,62,61)
,	/* ST_v414: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(66,105,110,73)
, bytes2word(79,77,111,100)
, bytes2word(101,46,99,111)
, bytes2word(109,112,97,114)
,	/* ST_v420: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,66,105,110)
, bytes2word(73,79,77,111)
, bytes2word(100,101,46,109)
,	/* ST_v418: (byte 3) */
  bytes2word(97,120,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,66,105)
, bytes2word(110,73,79,77)
, bytes2word(111,100,101,46)
, bytes2word(109,105,110,0)
,};
