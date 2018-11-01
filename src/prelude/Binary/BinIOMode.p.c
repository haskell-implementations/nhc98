#include "newmacros.h"
#include "runtime.h"

#define PS_NHC_46Binary_46RW	((void*)startLabel+20)
#define PS_NHC_46Binary_46WO	((void*)startLabel+48)
#define PS_NHC_46Binary_46RO	((void*)startLabel+76)
#define CT_v391	((void*)startLabel+212)
#define CT_v395	((void*)startLabel+304)
#define v404	((void*)startLabel+364)
#define v399	((void*)startLabel+368)
#define v400	((void*)startLabel+378)
#define v401	((void*)startLabel+388)
#define v396	((void*)startLabel+398)
#define CT_v410	((void*)startLabel+592)
#define FN_LAMBDA386	((void*)startLabel+636)
#define CT_v414	((void*)startLabel+680)
#define CF_LAMBDA386	((void*)startLabel+688)
#define CT_v417	((void*)startLabel+736)
#define CT_v421	((void*)startLabel+832)
#define CT_v425	((void*)startLabel+932)
#define CT_v429	((void*)startLabel+1028)
#define CT_v433	((void*)startLabel+1124)
#define CT_v438	((void*)startLabel+1260)
#define CT_v441	((void*)startLabel+1332)
#define CT_v445	((void*)startLabel+1424)
#define CT_v449	((void*)startLabel+1524)
#define CT_v453	((void*)startLabel+1624)
#define CT_v457	((void*)startLabel+1724)
#define CT_v461	((void*)startLabel+1824)
#define CT_v464	((void*)startLabel+1896)
#define CT_v468	((void*)startLabel+1988)
#define CT_v472	((void*)startLabel+2100)
#define CT_v476	((void*)startLabel+2224)
#define CT_v480	((void*)startLabel+2372)
#define ST_v413	((void*)startLabel+2432)
#define ST_v478	((void*)startLabel+2504)
#define ST_v393	((void*)startLabel+2540)
#define ST_v389	((void*)startLabel+2584)
#define ST_v419	((void*)startLabel+2632)
#define ST_v423	((void*)startLabel+2684)
#define ST_v416	((void*)startLabel+2732)
#define ST_v431	((void*)startLabel+2776)
#define ST_v427	((void*)startLabel+2816)
#define ST_v403	((void*)startLabel+2856)
#define PP_LAMBDA386	((void*)startLabel+2897)
#define PC_LAMBDA386	((void*)startLabel+2897)
#define ST_v412	((void*)startLabel+2897)
#define ST_v470	((void*)startLabel+2948)
#define ST_v466	((void*)startLabel+2980)
#define ST_v463	((void*)startLabel+3016)
#define ST_v474	((void*)startLabel+3052)
#define ST_v459	((void*)startLabel+3088)
#define ST_v440	((void*)startLabel+3124)
#define ST_v451	((void*)startLabel+3160)
#define ST_v455	((void*)startLabel+3196)
#define ST_v435	((void*)startLabel+3232)
#define ST_v447	((void*)startLabel+3276)
#define ST_v443	((void*)startLabel+3316)
#define PS_v462	((void*)startLabel+3356)
#define PS_v467	((void*)startLabel+3368)
#define PS_v465	((void*)startLabel+3380)
#define PS_v439	((void*)startLabel+3392)
#define PS_v436	((void*)startLabel+3404)
#define PS_v434	((void*)startLabel+3416)
#define PS_v437	((void*)startLabel+3428)
#define PS_v460	((void*)startLabel+3440)
#define PS_v458	((void*)startLabel+3452)
#define PS_v456	((void*)startLabel+3464)
#define PS_v454	((void*)startLabel+3476)
#define PS_v452	((void*)startLabel+3488)
#define PS_v450	((void*)startLabel+3500)
#define PS_v448	((void*)startLabel+3512)
#define PS_v446	((void*)startLabel+3524)
#define PS_v444	((void*)startLabel+3536)
#define PS_v442	((void*)startLabel+3548)
#define PS_v415	((void*)startLabel+3560)
#define PS_v409	((void*)startLabel+3572)
#define PS_v405	((void*)startLabel+3584)
#define PS_v406	((void*)startLabel+3596)
#define PS_v407	((void*)startLabel+3608)
#define PS_v402	((void*)startLabel+3620)
#define PS_v408	((void*)startLabel+3632)
#define PS_v394	((void*)startLabel+3644)
#define PS_v392	((void*)startLabel+3656)
#define PS_v390	((void*)startLabel+3668)
#define PS_v388	((void*)startLabel+3680)
#define PS_v432	((void*)startLabel+3692)
#define PS_v430	((void*)startLabel+3704)
#define PS_v428	((void*)startLabel+3716)
#define PS_v426	((void*)startLabel+3728)
#define PS_v424	((void*)startLabel+3740)
#define PS_v422	((void*)startLabel+3752)
#define PS_v420	((void*)startLabel+3764)
#define PS_v418	((void*)startLabel+3776)
#define PS_v477	((void*)startLabel+3788)
#define PS_v479	((void*)startLabel+3800)
#define PS_v473	((void*)startLabel+3812)
#define PS_v475	((void*)startLabel+3824)
#define PS_v469	((void*)startLabel+3836)
#define PS_v471	((void*)startLabel+3848)
#define PS_v411	((void*)startLabel+3860)
extern Node FN_Prelude_46_95enumFromThenTo[];
extern Node FN_Prelude_46_95enumFromTo[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
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
extern Node PM_NHC_46Binary[];
extern Node PC_Prelude_46_95_46_47_61[];
extern Node PC_Prelude_46_95fromEnum[];
extern Node PC_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node PC_Prelude_46_95_46_60[];
extern Node PC_Prelude_46_95_46_62_61[];
extern Node PC_Prelude_46_95_46_62[];
extern Node PC_Prelude_46_95_46max[];
extern Node PC_Prelude_46_95_46min[];
extern Node PC_NHC_46Internal_46_95patternMatchFail[];
extern Node PC_Prelude_46_95enumFromTo[];
extern Node PC_Prelude_46_95enumFromThenTo[];
extern Node PC_Prelude_46_95_46pred[];
extern Node PC_Prelude_46_95_46succ[];
extern Node PC_Prelude_46_95_46enumFromTo[];
extern Node PC_Prelude_46_95_46enumFromThenTo[];
extern Node PC_Prelude_468[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  42
,};
Node PP_NHC_46Binary_46RW[] = {
 };
Node PC_NHC_46Binary_46RW[] = {
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,82)
, bytes2word(87,0,0,0)
,	/* PS_NHC_46Binary_46RW: (byte 0) */
  useLabel(PP_NHC_46Binary_46RW)
, useLabel(PP_NHC_46Binary_46RW)
, useLabel(PC_NHC_46Binary_46RW)
,};
Node PP_NHC_46Binary_46WO[] = {
 };
Node PC_NHC_46Binary_46WO[] = {
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,87)
, bytes2word(79,0,0,0)
,	/* PS_NHC_46Binary_46WO: (byte 0) */
  useLabel(PP_NHC_46Binary_46WO)
, useLabel(PP_NHC_46Binary_46WO)
, useLabel(PC_NHC_46Binary_46WO)
,};
Node PP_NHC_46Binary_46RO[] = {
 };
Node PC_NHC_46Binary_46RO[] = {
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,82)
, bytes2word(79,0,0,0)
,	/* PS_NHC_46Binary_46RO: (byte 0) */
  useLabel(PP_NHC_46Binary_46RO)
, useLabel(PP_NHC_46Binary_46RO)
, useLabel(PC_NHC_46Binary_46RO)
,};
Node C0_NHC_46Binary_46RW[] = {
  CONSTR(2,0,0)
, useLabel(PS_NHC_46Binary_46RW)
, 0
, 0
, 0
,};
Node C0_NHC_46Binary_46WO[] = {
  CONSTR(1,0,0)
, useLabel(PS_NHC_46Binary_46WO)
, 0
, 0
, 0
,};
Node C0_NHC_46Binary_46RO[] = {
  CONSTR(0,0,0)
, useLabel(PS_NHC_46Binary_46RO)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v391)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThen[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_INT_P1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v390)
, 0
, 0
, 0
, 0
, 50050
, useLabel(ST_v389)
,	/* CT_v391: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThen),2)
, useLabel(PS_v388)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95enumFromThenTo))
, bytes2word(1,0,0,1)
, useLabel(CT_v395)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFrom[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_INT_P1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v394)
, 0
, 0
, 0
, 0
, 50050
, useLabel(ST_v393)
,	/* CT_v395: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFrom),1)
, useLabel(PS_v392)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95enumFromTo))
, bytes2word(1,0,0,1)
, useLabel(CT_v410)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46toEnum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,3,TOP(0),BOT(0))
, bytes2word(TOP(18),BOT(18),TOP(1),BOT(1))
, bytes2word(TOP(28),BOT(28),TOP(2),BOT(2))
,	/* v404: (byte 4) */
  bytes2word(TOP(38),BOT(38),TOP(14),BOT(14))
,	/* v399: (byte 4) */
  bytes2word(POP_I1,JUMP,32,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
,	/* v400: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
,	/* v401: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
,	/* v396: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v409)
, 0
, 0
, 0
, 0
, useLabel(PS_v408)
, 0
, 0
, 0
, 0
, useLabel(PS_v407)
, 0
, 0
, 0
, 0
, CONSTR(2,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v406)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v405)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 50050
, useLabel(ST_v403)
,	/* CT_v410: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46toEnum),1)
, useLabel(PS_v402)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA386))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v414)
,	/* FN_LAMBDA386: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v413)
, 50050
, useLabel(ST_v412)
,	/* CT_v414: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA386: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA386))
, useLabel(PS_v411)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v417)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(ORD,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50050
, useLabel(ST_v416)
,	/* CT_v417: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum),1)
, useLabel(PS_v415)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v421)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v420)
, 0
, 0
, 0
, 0
, 50050
, useLabel(ST_v419)
,	/* CT_v421: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThenTo),3)
, useLabel(PS_v418)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46NHC_46Binary_46BinIOMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v425)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v424)
, 0
, 0
, 0
, 0
, 50050
, useLabel(ST_v423)
,	/* CT_v425: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromTo),2)
, useLabel(PS_v422)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46NHC_46Binary_46BinIOMode)
, bytes2word(1,0,0,1)
, useLabel(CT_v429)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46succ[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v428)
, 0
, 0
, 0
, 0
, 50050
, useLabel(ST_v427)
,	/* CT_v429: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46succ),1)
, useLabel(PS_v426)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46succ))
, useLabel(CF_Prelude_46Enum_46NHC_46Binary_46BinIOMode)
, bytes2word(1,0,0,1)
, useLabel(CT_v433)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46pred[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v432)
, 0
, 0
, 0
, 0
, 50050
, useLabel(ST_v431)
,	/* CT_v433: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46pred),1)
, useLabel(PS_v430)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46pred))
, useLabel(CF_Prelude_46Enum_46NHC_46Binary_46BinIOMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v438)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46compare[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v437)
, 0
, 0
, 0
, 0
, useLabel(PS_v436)
, 0
, 0
, 0
, 0
, 50045
, useLabel(ST_v435)
,	/* CT_v438: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46compare),2)
, useLabel(PS_v434)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v441)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(ORD,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(ORD,LE_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 50045
, useLabel(ST_v440)
,	/* CT_v441: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60_61),2)
, useLabel(PS_v439)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v445)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v444)
, 0
, 0
, 0
, 0
, 50045
, useLabel(ST_v443)
,	/* CT_v445: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46min),2)
, useLabel(PS_v442)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46NHC_46Binary_46BinIOMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v449)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v448)
, 0
, 0
, 0
, 0
, 50045
, useLabel(ST_v447)
,	/* CT_v449: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46max),2)
, useLabel(PS_v446)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46NHC_46Binary_46BinIOMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v453)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v452)
, 0
, 0
, 0
, 0
, 50045
, useLabel(ST_v451)
,	/* CT_v453: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62),2)
, useLabel(PS_v450)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46NHC_46Binary_46BinIOMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v457)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v456)
, 0
, 0
, 0
, 0
, 50045
, useLabel(ST_v455)
,	/* CT_v457: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62_61),2)
, useLabel(PS_v454)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46NHC_46Binary_46BinIOMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v461)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v460)
, 0
, 0
, 0
, 0
, 50045
, useLabel(ST_v459)
,	/* CT_v461: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60),2)
, useLabel(PS_v458)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46NHC_46Binary_46BinIOMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v464)
,};
Node FN_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(ORD,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(ORD,EQ_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 50041
, useLabel(ST_v463)
,	/* CT_v464: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_61_61),2)
, useLabel(PS_v462)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v468)
,};
Node FN_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v467)
, 0
, 0
, 0
, 0
, 50041
, useLabel(ST_v466)
,	/* CT_v468: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_47_61),2)
, useLabel(PS_v465)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46NHC_46Binary_46BinIOMode)
, bytes2word(0,0,0,0)
, useLabel(CT_v472)
,};
Node FN_Prelude_46Eq_46NHC_46Binary_46BinIOMode[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v471)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 50041
, useLabel(ST_v470)
,	/* CT_v472: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46NHC_46Binary_46BinIOMode[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46Binary_46BinIOMode))
, useLabel(PS_v469)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_47_61)
, useLabel(F0_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v476)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v475)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
, 0
, 0
, 0
, 0
, 50045
, useLabel(ST_v474)
,	/* CT_v476: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46NHC_46Binary_46BinIOMode[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinIOMode))
, useLabel(PS_v473)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Eq_46NHC_46Binary_46BinIOMode)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60_61)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62_61)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46compare)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46min)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46max)
, bytes2word(0,0,0,0)
, useLabel(CT_v480)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v479)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
, 0
, 0
, 0
, 0
, 50050
, useLabel(ST_v478)
,	/* CT_v480: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Enum_46NHC_46Binary_46BinIOMode[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode))
, useLabel(PS_v477)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46succ)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46pred)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFrom)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46toEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThenTo)
,	/* ST_v413: (byte 0) */
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
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode[] = {
 };
Node PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode[] = {
 	/* ST_v478: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(66,105,110,73)
, bytes2word(79,77,111,100)
, bytes2word(101,0,0,0)
,};
Node PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFrom[] = {
 };
Node PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFrom[] = {
 	/* ST_v393: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(66,105,110,73)
, bytes2word(79,77,111,100)
, bytes2word(101,46,101,110)
, bytes2word(117,109,70,114)
, bytes2word(111,109,0,0)
,};
Node PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThen[] = {
 };
Node PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThen[] = {
 	/* ST_v389: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(66,105,110,73)
, bytes2word(79,77,111,100)
, bytes2word(101,46,101,110)
, bytes2word(117,109,70,114)
, bytes2word(111,109,84,104)
, bytes2word(101,110,0,0)
,};
Node PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThenTo[] = {
 };
Node PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThenTo[] = {
 	/* ST_v419: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(66,105,110,73)
, bytes2word(79,77,111,100)
, bytes2word(101,46,101,110)
, bytes2word(117,109,70,114)
, bytes2word(111,109,84,104)
, bytes2word(101,110,84,111)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromTo[] = {
 };
Node PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromTo[] = {
 	/* ST_v423: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(66,105,110,73)
, bytes2word(79,77,111,100)
, bytes2word(101,46,101,110)
, bytes2word(117,109,70,114)
, bytes2word(111,109,84,111)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum[] = {
 };
Node PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum[] = {
 	/* ST_v416: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(66,105,110,73)
, bytes2word(79,77,111,100)
, bytes2word(101,46,102,114)
, bytes2word(111,109,69,110)
, bytes2word(117,109,0,0)
,};
Node PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46pred[] = {
 };
Node PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46pred[] = {
 	/* ST_v431: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(66,105,110,73)
, bytes2word(79,77,111,100)
, bytes2word(101,46,112,114)
, bytes2word(101,100,0,0)
,};
Node PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46succ[] = {
 };
Node PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46succ[] = {
 	/* ST_v427: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(66,105,110,73)
, bytes2word(79,77,111,100)
, bytes2word(101,46,115,117)
, bytes2word(99,99,0,0)
,};
Node PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46toEnum[] = {
 };
Node PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46toEnum[] = {
 	/* ST_v403: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(66,105,110,73)
, bytes2word(79,77,111,100)
, bytes2word(101,46,116,111)
, bytes2word(69,110,117,109)
,	/* PP_LAMBDA386: (byte 1) */
 	/* PC_LAMBDA386: (byte 1) */
 	/* ST_v412: (byte 1) */
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
, bytes2word(58,53,51,0)
,};
Node PP_Prelude_46Eq_46NHC_46Binary_46BinIOMode[] = {
 };
Node PC_Prelude_46Eq_46NHC_46Binary_46BinIOMode[] = {
 	/* ST_v470: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,66,105)
, bytes2word(110,73,79,77)
, bytes2word(111,100,101,0)
,};
Node PP_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_47_61[] = {
 };
Node PC_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_47_61[] = {
 	/* ST_v466: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,66,105)
, bytes2word(110,73,79,77)
, bytes2word(111,100,101,46)
, bytes2word(47,61,0,0)
,};
Node PP_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_61_61[] = {
 };
Node PC_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_61_61[] = {
 	/* ST_v463: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,66,105)
, bytes2word(110,73,79,77)
, bytes2word(111,100,101,46)
, bytes2word(61,61,0,0)
,};
Node PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode[] = {
 };
Node PC_Prelude_46Ord_46NHC_46Binary_46BinIOMode[] = {
 	/* ST_v474: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,66)
, bytes2word(105,110,73,79)
, bytes2word(77,111,100,101)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60[] = {
 };
Node PC_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60[] = {
 	/* ST_v459: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,66)
, bytes2word(105,110,73,79)
, bytes2word(77,111,100,101)
, bytes2word(46,60,0,0)
,};
Node PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60_61[] = {
 	/* ST_v440: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,66)
, bytes2word(105,110,73,79)
, bytes2word(77,111,100,101)
, bytes2word(46,60,61,0)
,};
Node PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62[] = {
 };
Node PC_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62[] = {
 	/* ST_v451: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,66)
, bytes2word(105,110,73,79)
, bytes2word(77,111,100,101)
, bytes2word(46,62,0,0)
,};
Node PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62_61[] = {
 	/* ST_v455: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,66)
, bytes2word(105,110,73,79)
, bytes2word(77,111,100,101)
, bytes2word(46,62,61,0)
,};
Node PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46compare[] = {
 };
Node PC_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46compare[] = {
 	/* ST_v435: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,66)
, bytes2word(105,110,73,79)
, bytes2word(77,111,100,101)
, bytes2word(46,99,111,109)
, bytes2word(112,97,114,101)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46max[] = {
 };
Node PC_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46max[] = {
 	/* ST_v447: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,66)
, bytes2word(105,110,73,79)
, bytes2word(77,111,100,101)
, bytes2word(46,109,97,120)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46min[] = {
 };
Node PC_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46min[] = {
 	/* ST_v443: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,66)
, bytes2word(105,110,73,79)
, bytes2word(77,111,100,101)
, bytes2word(46,109,105,110)
, bytes2word(0,0,0,0)
,	/* PS_v462: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_61_61)
, useLabel(PC_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_61_61)
,	/* PS_v467: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_47_61)
, useLabel(PC_Prelude_46_95_46_47_61)
,	/* PS_v465: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_47_61)
, useLabel(PC_Prelude_46Eq_46NHC_46Binary_46BinIOMode_46_47_61)
,	/* PS_v439: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60_61)
, useLabel(PC_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60_61)
,	/* PS_v436: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46compare)
, useLabel(PC_Prelude_46_95fromEnum)
,	/* PS_v434: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46compare)
, useLabel(PC_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46compare)
,	/* PS_v437: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_46Int_46compare)
,	/* PS_v460: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60)
, useLabel(PC_Prelude_46_95_46_60)
,	/* PS_v458: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60)
, useLabel(PC_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_60)
,	/* PS_v456: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v454: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62_61)
, useLabel(PC_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62_61)
,	/* PS_v452: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v450: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62)
, useLabel(PC_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46_62)
,	/* PS_v448: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v446: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46max)
, useLabel(PC_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46max)
,	/* PS_v444: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v442: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46min)
, useLabel(PC_Prelude_46Ord_46NHC_46Binary_46BinIOMode_46min)
,	/* PS_v415: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum)
, useLabel(PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum)
,	/* PS_v409: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46toEnum)
, useLabel(PC_NHC_46Internal_46_95patternMatchFail)
,	/* PS_v405: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46toEnum)
, useLabel(PC_NHC_46Binary_46RO)
,	/* PS_v406: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46toEnum)
, useLabel(PC_NHC_46Binary_46WO)
,	/* PS_v407: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46toEnum)
, useLabel(PC_NHC_46Binary_46RW)
,	/* PS_v402: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46toEnum)
, useLabel(PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46toEnum)
,	/* PS_v408: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46toEnum)
, useLabel(PC_LAMBDA386)
,	/* PS_v394: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFrom)
, useLabel(PC_Prelude_46_95enumFromTo)
,	/* PS_v392: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFrom)
, useLabel(PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFrom)
,	/* PS_v390: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThen)
, useLabel(PC_Prelude_46_95enumFromThenTo)
,	/* PS_v388: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThen)
, useLabel(PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThen)
,	/* PS_v432: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46pred)
, useLabel(PC_Prelude_46_95_46pred)
,	/* PS_v430: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46pred)
, useLabel(PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46pred)
,	/* PS_v428: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46succ)
, useLabel(PC_Prelude_46_95_46succ)
,	/* PS_v426: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46succ)
, useLabel(PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46succ)
,	/* PS_v424: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromTo)
, useLabel(PC_Prelude_46_95_46enumFromTo)
,	/* PS_v422: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromTo)
, useLabel(PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromTo)
,	/* PS_v420: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThenTo)
, useLabel(PC_Prelude_46_95_46enumFromThenTo)
,	/* PS_v418: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThenTo)
, useLabel(PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46enumFromThenTo)
,	/* PS_v477: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode)
, useLabel(PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode)
,	/* PS_v479: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Enum_46NHC_46Binary_46BinIOMode)
, useLabel(PC_Prelude_468)
,	/* PS_v473: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode)
, useLabel(PC_Prelude_46Ord_46NHC_46Binary_46BinIOMode)
,	/* PS_v475: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Ord_46NHC_46Binary_46BinIOMode)
, useLabel(PC_Prelude_468)
,	/* PS_v469: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Eq_46NHC_46Binary_46BinIOMode)
, useLabel(PC_Prelude_46Eq_46NHC_46Binary_46BinIOMode)
,	/* PS_v471: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_Prelude_46Eq_46NHC_46Binary_46BinIOMode)
, useLabel(PC_Prelude_462)
,	/* PS_v411: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA386)
, useLabel(PC_LAMBDA386)
,};
