#include "newmacros.h"
#include "runtime.h"

#define CT_v379	((void*)startLabel+28)
#define FN_LAMBDA376	((void*)startLabel+56)
#define CT_v381	((void*)startLabel+76)
#define CF_LAMBDA376	((void*)startLabel+84)
#define CT_v385	((void*)startLabel+160)
#define FN_LAMBDA377	((void*)startLabel+212)
#define CT_v387	((void*)startLabel+232)
#define CF_LAMBDA377	((void*)startLabel+240)
#define CT_v388	((void*)startLabel+264)
#define CT_v389	((void*)startLabel+304)
#define CT_v396	((void*)startLabel+356)
#define CT_v403	((void*)startLabel+412)
#define CT_v404	((void*)startLabel+448)
#define CT_v405	((void*)startLabel+492)
#define CT_v406	((void*)startLabel+536)
#define CT_v407	((void*)startLabel+580)
#define CT_v408	((void*)startLabel+624)
#define CT_v415	((void*)startLabel+684)
#define CT_v416	((void*)startLabel+720)
#define CT_v417	((void*)startLabel+768)
#define CT_v418	((void*)startLabel+828)
#define CT_v419	((void*)startLabel+904)
#define ST_v386	((void*)startLabel+932)
#define ST_v380	((void*)startLabel+935)
extern Node FN_Prelude_46showString[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_60[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46showChar[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46Show_46Prelude_46Int_46showsPrec[];
extern Node FN_Prelude_46showParen[];
extern Node FN_Prelude_46_95_46show[];
extern Node CF_Prelude_46Show_46Time_46ClockTime[];
extern Node FN_Prelude_46_95_46showList[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46Time_46ClockTime[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46Time_46ClockTime[];

static Node startLabel[] = {
  42
, bytes2word(1,0,0,1)
, useLabel(CT_v379)
,};
Node FN_Prelude_46Show_46Time_46ClockTime_46showsType[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v379: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Time_46ClockTime_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Time_46ClockTime_46showsType),1)
, useLabel(CF_LAMBDA376)
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(0,0,0,0)
, useLabel(CT_v381)
,	/* FN_LAMBDA376: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v380)
,	/* CT_v381: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA376: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA376))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v385)
,};
Node FN_Prelude_46Show_46Time_46ClockTime_46showsPrec[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,1,HEAP_CVAL_I3,HEAP_INT_P1)
, bytes2word(9,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(2,HEAP_CHAR_P1,32,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,9,HEAP_INT_P1)
, bytes2word(10,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,22,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v385: (byte 0) */
  HW(8,2)
, 0
,};
Node F0_Prelude_46Show_46Time_46ClockTime_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Time_46ClockTime_46showsPrec),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_60))
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA377))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Int_46showsPrec))
, VAPTAG(useLabel(FN_Prelude_46showParen))
, bytes2word(0,0,0,0)
, useLabel(CT_v387)
,	/* FN_LAMBDA377: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v386)
,	/* CT_v387: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA377: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA377))
, bytes2word(1,0,0,1)
, useLabel(CT_v388)
,};
Node FN_Prelude_46Show_46Time_46ClockTime_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v388: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Time_46ClockTime_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Time_46ClockTime_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46Time_46ClockTime)
, bytes2word(1,0,0,1)
, useLabel(CT_v389)
,};
Node FN_Prelude_46Show_46Time_46ClockTime_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v389: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Time_46ClockTime_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Time_46ClockTime_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46Time_46ClockTime)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v396)
,};
Node FN_Prelude_46Ord_46Time_46ClockTime_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(1,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v396: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46Time_46ClockTime_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Time_46ClockTime_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v403)
,};
Node FN_Prelude_46Ord_46Time_46ClockTime_46_60_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(1,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(1,PUSH_P1,0,ZAP_STACK_P1)
, bytes2word(1,EVAL,PUSH_P1,2)
, bytes2word(ZAP_STACK_P1,3,EVAL,LE_W)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v403: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46Time_46ClockTime_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Time_46ClockTime_46_60_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v404)
,};
Node FN_Prelude_46Ord_46Time_46ClockTime_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v404: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Time_46ClockTime_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Time_46ClockTime_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46Time_46ClockTime)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v405)
,};
Node FN_Prelude_46Ord_46Time_46ClockTime_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v405: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Time_46ClockTime_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Time_46ClockTime_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46Time_46ClockTime)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v406)
,};
Node FN_Prelude_46Ord_46Time_46ClockTime_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v406: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Time_46ClockTime_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Time_46ClockTime_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46Time_46ClockTime)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v407)
,};
Node FN_Prelude_46Ord_46Time_46ClockTime_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v407: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Time_46ClockTime_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Time_46ClockTime_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46Time_46ClockTime)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v408)
,};
Node FN_Prelude_46Ord_46Time_46ClockTime_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v408: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Time_46ClockTime_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Time_46ClockTime_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46Time_46ClockTime)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v415)
,};
Node FN_Prelude_46Eq_46Time_46ClockTime_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(1,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(1,PUSH_P1,0,ZAP_STACK_P1)
, bytes2word(1,EVAL,PUSH_P1,2)
, bytes2word(ZAP_STACK_P1,3,EVAL,EQ_W)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v415: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46Time_46ClockTime_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Time_46ClockTime_46_61_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v416)
,};
Node FN_Prelude_46Eq_46Time_46ClockTime_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v416: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46Time_46ClockTime_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Time_46ClockTime_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46Time_46ClockTime)
, bytes2word(0,0,0,0)
, useLabel(CT_v417)
,};
Node FN_Prelude_46Eq_46Time_46ClockTime[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v417: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Time_46ClockTime[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Time_46ClockTime))
, useLabel(F0_Prelude_46Eq_46Time_46ClockTime_46_47_61)
, useLabel(F0_Prelude_46Eq_46Time_46ClockTime_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v418)
,};
Node FN_Prelude_46Ord_46Time_46ClockTime[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v418: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46Time_46ClockTime[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46Time_46ClockTime))
, useLabel(CF_Prelude_46Eq_46Time_46ClockTime)
, useLabel(F0_Prelude_46Ord_46Time_46ClockTime_46_60)
, useLabel(F0_Prelude_46Ord_46Time_46ClockTime_46_60_61)
, useLabel(F0_Prelude_46Ord_46Time_46ClockTime_46_62_61)
, useLabel(F0_Prelude_46Ord_46Time_46ClockTime_46_62)
, useLabel(F0_Prelude_46Ord_46Time_46ClockTime_46compare)
, useLabel(F0_Prelude_46Ord_46Time_46ClockTime_46min)
, useLabel(F0_Prelude_46Ord_46Time_46ClockTime_46max)
, bytes2word(0,0,0,0)
, useLabel(CT_v419)
,};
Node FN_Prelude_46Show_46Time_46ClockTime[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v419: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46Time_46ClockTime[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46Time_46ClockTime))
, useLabel(F0_Prelude_46Show_46Time_46ClockTime_46showsPrec)
, useLabel(F0_Prelude_46Show_46Time_46ClockTime_46showsType)
, useLabel(F0_Prelude_46Show_46Time_46ClockTime_46showList)
, useLabel(F0_Prelude_46Show_46Time_46ClockTime_46show)
,	/* ST_v386: (byte 0) */
 	/* ST_v380: (byte 3) */
  bytes2word(67,84,0,67)
, bytes2word(108,111,99,107)
, bytes2word(84,105,109,101)
, bytes2word(0,0,0,0)
,};
