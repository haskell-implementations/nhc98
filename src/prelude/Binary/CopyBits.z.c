#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95sameBH	((void*)startLabel+12)
#define CT_v401	((void*)startLabel+44)
#define F0_NHC_46Binary_46hs_95sameBH	((void*)startLabel+52)
#define FN_NHC_46Binary_46sameBH	((void*)startLabel+68)
#define CT_v403	((void*)startLabel+96)
#define F0_NHC_46Binary_46sameBH	((void*)startLabel+104)
#define FN_NHC_46Binary_46rehearse	((void*)startLabel+124)
#define CT_v405	((void*)startLabel+156)
#define F0_NHC_46Binary_46rehearse	((void*)startLabel+164)
#define FN_LAMBDA388	((void*)startLabel+192)
#define v407	((void*)startLabel+206)
#define v408	((void*)startLabel+213)
#define CT_v411	((void*)startLabel+244)
#define F0_LAMBDA388	((void*)startLabel+252)
#define v412	((void*)startLabel+324)
#define CT_v415	((void*)startLabel+388)
#define FN_LAMBDA398	((void*)startLabel+440)
#define CT_v420	((void*)startLabel+508)
#define F0_LAMBDA398	((void*)startLabel+516)
#define FN_LAMBDA397	((void*)startLabel+568)
#define CT_v422	((void*)startLabel+604)
#define F0_LAMBDA397	((void*)startLabel+612)
#define FN_LAMBDA396	((void*)startLabel+636)
#define CT_v424	((void*)startLabel+660)
#define F0_LAMBDA396	((void*)startLabel+668)
#define FN_LAMBDA395	((void*)startLabel+680)
#define CT_v426	((void*)startLabel+704)
#define F0_LAMBDA395	((void*)startLabel+712)
#define FN_LAMBDA394	((void*)startLabel+732)
#define v427	((void*)startLabel+763)
#define CT_v430	((void*)startLabel+820)
#define F0_LAMBDA394	((void*)startLabel+828)
#define FN_LAMBDA393	((void*)startLabel+864)
#define CT_v435	((void*)startLabel+968)
#define F0_LAMBDA393	((void*)startLabel+976)
#define FN_LAMBDA392	((void*)startLabel+1052)
#define CT_v437	((void*)startLabel+1112)
#define F0_LAMBDA392	((void*)startLabel+1120)
#define FN_NHC_46Binary_46Prelude_46200_46pos	((void*)startLabel+1164)
#define v438	((void*)startLabel+1186)
#define CT_v441	((void*)startLabel+1216)
#define F0_NHC_46Binary_46Prelude_46200_46pos	((void*)startLabel+1224)
#define FN_LAMBDA391	((void*)startLabel+1236)
#define CT_v443	((void*)startLabel+1260)
#define F0_LAMBDA391	((void*)startLabel+1268)
#define FN_LAMBDA390	((void*)startLabel+1280)
#define CT_v445	((void*)startLabel+1304)
#define F0_LAMBDA390	((void*)startLabel+1312)
#define FN_LAMBDA389	((void*)startLabel+1332)
#define v446	((void*)startLabel+1363)
#define CT_v449	((void*)startLabel+1420)
#define F0_LAMBDA389	((void*)startLabel+1428)
#define ST_v414	((void*)startLabel+1444)
#define ST_v433	((void*)startLabel+1464)
#define ST_v444	((void*)startLabel+1495)
#define ST_v442	((void*)startLabel+1527)
#define ST_v448	((void*)startLabel+1559)
#define ST_v440	((void*)startLabel+1591)
#define ST_v436	((void*)startLabel+1623)
#define ST_v418	((void*)startLabel+1655)
#define ST_v425	((void*)startLabel+1686)
#define ST_v423	((void*)startLabel+1718)
#define ST_v429	((void*)startLabel+1750)
#define ST_v421	((void*)startLabel+1782)
#define ST_v400	((void*)startLabel+1814)
#define ST_v404	((void*)startLabel+1835)
#define ST_v409	((void*)startLabel+1855)
#define ST_v402	((void*)startLabel+1887)
extern Node TM_NHC_46Binary[];
void FR_NHC_46Binary_46hs_95sameBH(void);
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_NHC_46Binary[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_60[];
extern Node FN_NHC_46Binary_46seekBin[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node CF_Prelude_46Num_46Prelude_46Int[];
extern Node CF_Prelude_46Ord_46Prelude_46Int[];
extern Node FN_NHC_46Binary_46getBits[];
extern Node FN_NHC_46Binary_46putBits[];
extern Node FN_Prelude_46_60[];
extern Node FN_Prelude_46_45[];
extern Node FN_NHC_46Internal_46_95apply2[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v401)
,	/* FN_NHC_46Binary_46hs_95sameBH: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46Binary_46hs_95sameBH)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 510001
, useLabel(ST_v400)
,	/* CT_v401: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46Binary_46hs_95sameBH: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95sameBH),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v403)
,	/* FN_NHC_46Binary_46sameBH: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_P1,0)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 540001
, useLabel(ST_v402)
,	/* CT_v403: (byte 0) */
  HW(1,2)
, 0
,	/* F0_NHC_46Binary_46sameBH: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46sameBH),2)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95sameBH))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v405)
,	/* FN_NHC_46Binary_46rehearse: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 450001
, useLabel(ST_v404)
,	/* CT_v405: (byte 0) */
  HW(3,2)
, 0
,	/* F0_NHC_46Binary_46rehearse: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46rehearse),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA388),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v411)
,	/* FN_LAMBDA388: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v407: (byte 2) */
  bytes2word(TOP(11),BOT(11),POP_I1,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,2)
,	/* v408: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,HEAP_ARG,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 460016
, useLabel(ST_v409)
,	/* CT_v411: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA388: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA388),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_NHC_46Binary_46rehearse))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v415)
,};
Node FN_NHC_46Binary_46copyBits[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,3,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,31,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,2,4)
, bytes2word(HEAP_CVAL_IN3,HEAP_ARG,5,HEAP_INT_P1)
, bytes2word(32,HEAP_CVAL_I5,HEAP_P1,0)
, bytes2word(HEAP_ARG_ARG,5,2,HEAP_ARG_ARG)
, bytes2word(1,4,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
,	/* v412: (byte 4) */
  bytes2word(11,HEAP_OFF_N1,9,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_P1,7,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_IN3,HEAP_ARG,5,HEAP_INT_P1)
, bytes2word(32,HEAP_CVAL_P1,9,HEAP_ARG_ARG)
, bytes2word(1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(13,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 150001
, useLabel(ST_v414)
,	/* CT_v415: (byte 0) */
  HW(7,5)
, 0
,};
Node F0_NHC_46Binary_46copyBits[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46copyBits),5)
, VAPTAG(useLabel(FN_NHC_46Binary_46sameBH))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_60))
, CAPTAG(useLabel(FN_LAMBDA393),1)
, VAPTAG(useLabel(FN_NHC_46Binary_46rehearse))
, VAPTAG(useLabel(FN_NHC_46Binary_46seekBin))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, CAPTAG(useLabel(FN_LAMBDA398),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v420)
,	/* FN_LAMBDA398: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_I1,HEAP_I2,HEAP_P1,3)
, bytes2word(HEAP_P1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,8)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,1)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(2,HEAP_I1,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 350008
, useLabel(ST_v418)
,	/* CT_v420: (byte 0) */
  HW(8,3)
, 0
,	/* F0_LAMBDA398: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA398),3)
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, useLabel(CF_Prelude_46Ord_46Prelude_46Int)
, VAPTAG(useLabel(FN_LAMBDA394))
, VAPTAG(useLabel(FN_LAMBDA395))
, VAPTAG(useLabel(FN_LAMBDA396))
, VAPTAG(useLabel(FN_NHC_46Binary_46getBits))
, CAPTAG(useLabel(FN_LAMBDA397),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v422)
,	/* FN_LAMBDA397: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,4,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 390030
, useLabel(ST_v421)
,	/* CT_v422: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA397: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA397),4)
, VAPTAG(useLabel(FN_NHC_46Binary_46putBits))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(1,0,0,1)
, useLabel(CT_v424)
,	/* FN_LAMBDA396: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 360019
, useLabel(ST_v423)
,	/* CT_v424: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA396: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA396),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v426)
,	/* FN_LAMBDA395: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 360014
, useLabel(ST_v425)
,	/* CT_v426: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA395: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA395),1)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v430)
,	/* FN_LAMBDA394: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_ARG,4,PUSH_ARG_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(11,0,HEAP_CVAL_IN3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,HEAP_ARG,3)
,	/* v427: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,5)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_N1,5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(4,HEAP_ARG,4,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
, 360031
, useLabel(ST_v429)
,	/* CT_v430: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA394: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA394),4)
, VAPTAG(useLabel(FN_Prelude_46_60))
, VAPTAG(useLabel(FN_Prelude_46_45))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v435)
,	/* FN_LAMBDA393: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(NEEDHEAP_P1,39,UNPACK,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_I1,HEAP_I2)
, bytes2word(HEAP_P1,3,HEAP_P1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,8,HEAP_CVAL_P1,8)
, bytes2word(HEAP_ARG,1,HEAP_I1,HEAP_ARG)
, bytes2word(2,HEAP_P1,5,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,6,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,10,HEAP_ARG)
, bytes2word(4,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(11,HEAP_ARG,4,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,13)
, bytes2word(HEAP_ARG_ARG,5,1,HEAP_ARG)
, bytes2word(2,HEAP_P1,5,HEAP_ARG)
, bytes2word(6,HEAP_I1,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,14,HEAP_OFF_N1)
, bytes2word(12,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 200008
, useLabel(ST_v433)
,	/* CT_v435: (byte 0) */
  HW(12,7)
, 0
,	/* F0_LAMBDA393: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA393),7)
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, useLabel(CF_Prelude_46Ord_46Prelude_46Int)
, VAPTAG(useLabel(FN_LAMBDA389))
, VAPTAG(useLabel(FN_LAMBDA390))
, VAPTAG(useLabel(FN_LAMBDA391))
, CAPTAG(useLabel(FN_NHC_46Binary_46Prelude_46200_46pos),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Binary_46seekBin))
, VAPTAG(useLabel(FN_NHC_46Binary_46getBits))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, CAPTAG(useLabel(FN_LAMBDA392),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v437)
,	/* FN_LAMBDA392: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(6,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,6,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_ARG,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(8,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 260030
, useLabel(ST_v436)
,	/* CT_v437: (byte 0) */
  HW(6,8)
, 0
,	/* F0_LAMBDA392: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA392),8)
, CAPTAG(useLabel(FN_NHC_46Binary_46Prelude_46200_46pos),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Binary_46seekBin))
, VAPTAG(useLabel(FN_NHC_46Binary_46putBits))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v441)
,	/* FN_NHC_46Binary_46Prelude_46200_46pos: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,JUMPFALSE)
, bytes2word(14,0,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(PUSH_ARG,4,EVAL,PUSH_ARG)
, bytes2word(5,EVAL,NEEDHEAP_I32,ADD_W)
,	/* v438: (byte 2) */
  bytes2word(SUB_W,RETURN,PUSH_ARG,4)
, bytes2word(ZAP_ARG_I2,ZAP_ARG,4,EVAL)
, bytes2word(PUSH_ZAP_ARG_I3,EVAL,PUSH_ZAP_ARG,5)
, bytes2word(EVAL,NEEDHEAP_I32,ADD_W,SUB_W)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 230013
, useLabel(ST_v440)
,	/* CT_v441: (byte 0) */
  HW(0,5)
, 0
,	/* F0_NHC_46Binary_46Prelude_46200_46pos: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46Prelude_46200_46pos),5)
, bytes2word(1,0,0,1)
, useLabel(CT_v443)
,	/* FN_LAMBDA391: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 210019
, useLabel(ST_v442)
,	/* CT_v443: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA391: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA391),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v445)
,	/* FN_LAMBDA390: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 210014
, useLabel(ST_v444)
,	/* CT_v445: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA390: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA390),1)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v449)
,	/* FN_LAMBDA389: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_ARG,4,PUSH_ARG_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(11,0,HEAP_CVAL_IN3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,HEAP_ARG,3)
,	/* v446: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,5)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_N1,5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(4,HEAP_ARG,4,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
, 210031
, useLabel(ST_v448)
,	/* CT_v449: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA389: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA389),4)
, VAPTAG(useLabel(FN_Prelude_46_60))
, VAPTAG(useLabel(FN_Prelude_46_45))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
,	/* ST_v414: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,99)
, bytes2word(111,112,121,66)
,	/* ST_v433: (byte 4) */
  bytes2word(105,116,115,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,99)
, bytes2word(111,112,121,66)
, bytes2word(105,116,115,58)
, bytes2word(50,48,58,56)
, bytes2word(45,50,57,58)
,	/* ST_v444: (byte 3) */
  bytes2word(50,51,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,99,111)
, bytes2word(112,121,66,105)
, bytes2word(116,115,58,50)
, bytes2word(49,58,49,52)
, bytes2word(45,50,49,58)
,	/* ST_v442: (byte 3) */
  bytes2word(49,55,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,99,111)
, bytes2word(112,121,66,105)
, bytes2word(116,115,58,50)
, bytes2word(49,58,49,57)
, bytes2word(45,50,49,58)
,	/* ST_v448: (byte 3) */
  bytes2word(50,54,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,99,111)
, bytes2word(112,121,66,105)
, bytes2word(116,115,58,50)
, bytes2word(49,58,51,49)
, bytes2word(45,50,50,58)
,	/* ST_v440: (byte 3) */
  bytes2word(53,55,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,99,111)
, bytes2word(112,121,66,105)
, bytes2word(116,115,58,50)
, bytes2word(51,58,49,51)
, bytes2word(45,50,51,58)
,	/* ST_v436: (byte 3) */
  bytes2word(54,53,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,99,111)
, bytes2word(112,121,66,105)
, bytes2word(116,115,58,50)
, bytes2word(54,58,51,48)
, bytes2word(45,50,57,58)
,	/* ST_v418: (byte 3) */
  bytes2word(50,51,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,99,111)
, bytes2word(112,121,66,105)
, bytes2word(116,115,58,51)
, bytes2word(53,58,56,45)
, bytes2word(52,49,58,50)
,	/* ST_v425: (byte 2) */
  bytes2word(51,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,99,111,112)
, bytes2word(121,66,105,116)
, bytes2word(115,58,51,54)
, bytes2word(58,49,52,45)
, bytes2word(51,54,58,49)
,	/* ST_v423: (byte 2) */
  bytes2word(55,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,99,111,112)
, bytes2word(121,66,105,116)
, bytes2word(115,58,51,54)
, bytes2word(58,49,57,45)
, bytes2word(51,54,58,50)
,	/* ST_v429: (byte 2) */
  bytes2word(54,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,99,111,112)
, bytes2word(121,66,105,116)
, bytes2word(115,58,51,54)
, bytes2word(58,51,49,45)
, bytes2word(51,55,58,53)
,	/* ST_v421: (byte 2) */
  bytes2word(55,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,99,111,112)
, bytes2word(121,66,105,116)
, bytes2word(115,58,51,57)
, bytes2word(58,51,48,45)
, bytes2word(52,49,58,50)
,	/* ST_v400: (byte 2) */
  bytes2word(51,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,104,115,95)
, bytes2word(115,97,109,101)
,	/* ST_v404: (byte 3) */
  bytes2word(66,72,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,114,101)
, bytes2word(104,101,97,114)
,	/* ST_v409: (byte 3) */
  bytes2word(115,101,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,114,101)
, bytes2word(104,101,97,114)
, bytes2word(115,101,58,52)
, bytes2word(54,58,49,54)
, bytes2word(45,52,57,58)
,	/* ST_v402: (byte 3) */
  bytes2word(51,49,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,115,97)
, bytes2word(109,101,66,72)
, bytes2word(0,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_sameBH" NHC.Binary.hs_sameBH 2 :: FFI.ForeignObj -> FFI.ForeignObj -> Prelude.Bool */
extern HsBool hs_sameBH(void*,void*);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95sameBH = {"NHC.Binary","NHC.Binary.hs_sameBH","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95sameBH) {
  NodePtr nodeptr;
  HsBool result;
  void* arg1;
  void* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hs_sameBH(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95sameBH);
  C_RETURN(nodeptr);
}
