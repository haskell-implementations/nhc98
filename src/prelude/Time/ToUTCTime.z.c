#include "newmacros.h"
#include "runtime.h"

#define CT_v425	((void*)startLabel+36)
#define CT_v430	((void*)startLabel+192)
#define FN_LAMBDA422	((void*)startLabel+280)
#define CT_v432	((void*)startLabel+304)
#define F0_LAMBDA422	((void*)startLabel+312)
#define FN_LAMBDA421	((void*)startLabel+324)
#define CT_v434	((void*)startLabel+348)
#define F0_LAMBDA421	((void*)startLabel+356)
#define FN_LAMBDA420	((void*)startLabel+368)
#define CT_v436	((void*)startLabel+392)
#define F0_LAMBDA420	((void*)startLabel+400)
#define FN_LAMBDA419	((void*)startLabel+412)
#define CT_v438	((void*)startLabel+436)
#define F0_LAMBDA419	((void*)startLabel+444)
#define FN_LAMBDA418	((void*)startLabel+456)
#define CT_v440	((void*)startLabel+480)
#define F0_LAMBDA418	((void*)startLabel+488)
#define FN_LAMBDA417	((void*)startLabel+500)
#define CT_v442	((void*)startLabel+524)
#define F0_LAMBDA417	((void*)startLabel+532)
#define FN_LAMBDA416	((void*)startLabel+544)
#define CT_v444	((void*)startLabel+568)
#define F0_LAMBDA416	((void*)startLabel+576)
#define FN_LAMBDA415	((void*)startLabel+588)
#define CT_v446	((void*)startLabel+612)
#define F0_LAMBDA415	((void*)startLabel+620)
#define FN_LAMBDA414	((void*)startLabel+632)
#define CT_v448	((void*)startLabel+656)
#define F0_LAMBDA414	((void*)startLabel+664)
#define FN_LAMBDA413	((void*)startLabel+676)
#define CT_v450	((void*)startLabel+700)
#define F0_LAMBDA413	((void*)startLabel+708)
#define FN_LAMBDA412	((void*)startLabel+720)
#define CT_v452	((void*)startLabel+744)
#define F0_LAMBDA412	((void*)startLabel+752)
#define FN_LAMBDA411	((void*)startLabel+764)
#define CT_v454	((void*)startLabel+788)
#define F0_LAMBDA411	((void*)startLabel+796)
#define ST_v424	((void*)startLabel+800)
#define ST_v428	((void*)startLabel+818)
#define ST_v451	((void*)startLabel+833)
#define ST_v449	((void*)startLabel+860)
#define ST_v447	((void*)startLabel+887)
#define ST_v445	((void*)startLabel+914)
#define ST_v443	((void*)startLabel+941)
#define ST_v441	((void*)startLabel+968)
#define ST_v439	((void*)startLabel+995)
#define ST_v437	((void*)startLabel+1022)
#define ST_v435	((void*)startLabel+1049)
#define ST_v433	((void*)startLabel+1076)
#define ST_v431	((void*)startLabel+1103)
#define ST_v453	((void*)startLabel+1130)
extern Node TM_Time[];
void FR_Time_46hs_95toUTCTime(void);
extern Node FN_Prelude_46Enum_46Time_46Month_46toEnum[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46toInteger[];
extern Node FN_Prelude_46Enum_46Time_46Day_46toEnum[];
extern Node FN_CString_46fromCString[];
extern Node TMSUB_Time[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v425)
,};
Node FN_Time_46hs_95toUTCTime[] = {
  useLabel(TM_Time)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Time_46hs_95toUTCTime)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v424)
,	/* CT_v425: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Time_46hs_95toUTCTime[] = {
  CAPTAG(useLabel(FN_Time_46hs_95toUTCTime),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v430)
,};
Node FN_Time_46toUTCTime[] = {
  useLabel(TM_Time)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_P1)
, bytes2word(47,UNPACK,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,9)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,13,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,17)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(19,PUSH_HEAP,HEAP_CVAL_P1,13)
, bytes2word(HEAP_OFF_N1,21,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(14,HEAP_OFF_N1,23,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,15,HEAP_OFF_N1,25)
, bytes2word(HEAP_CVAL_P1,16,HEAP_P1,10)
, bytes2word(HEAP_CVAL_P1,17,HEAP_P1,5)
, bytes2word(HEAP_CVAL_P1,18,HEAP_P1,4)
, bytes2word(HEAP_CVAL_P1,19,HEAP_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_P1,12,HEAP_OFF_N1)
, bytes2word(10,HEAP_P1,10,HEAP_P1)
, bytes2word(9,HEAP_P1,8,HEAP_P1)
, bytes2word(7,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(12,HEAP_P1,4,HEAP_OFF_N1)
, bytes2word(12,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,12,0)
, 100001
, useLabel(ST_v428)
,	/* CT_v430: (byte 0) */
  HW(17,1)
, 0
,};
Node F0_Time_46toUTCTime[] = {
  CAPTAG(useLabel(FN_Time_46toUTCTime),1)
, VAPTAG(useLabel(FN_Time_46hs_95toUTCTime))
, VAPTAG(useLabel(FN_LAMBDA411))
, VAPTAG(useLabel(FN_LAMBDA412))
, VAPTAG(useLabel(FN_LAMBDA413))
, VAPTAG(useLabel(FN_LAMBDA414))
, VAPTAG(useLabel(FN_LAMBDA415))
, VAPTAG(useLabel(FN_LAMBDA416))
, VAPTAG(useLabel(FN_LAMBDA417))
, VAPTAG(useLabel(FN_LAMBDA418))
, VAPTAG(useLabel(FN_LAMBDA419))
, VAPTAG(useLabel(FN_LAMBDA420))
, VAPTAG(useLabel(FN_LAMBDA421))
, VAPTAG(useLabel(FN_LAMBDA422))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Time_46Month_46toEnum))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46toInteger))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Time_46Day_46toEnum))
, VAPTAG(useLabel(FN_CString_46fromCString))
, bytes2word(1,0,0,1)
, useLabel(CT_v432)
,	/* FN_LAMBDA422: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,12)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110065
, useLabel(ST_v431)
,	/* CT_v432: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA422: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA422),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v434)
,	/* FN_LAMBDA421: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,11)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110059
, useLabel(ST_v433)
,	/* CT_v434: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA421: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA421),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v436)
,	/* FN_LAMBDA420: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,10)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110053
, useLabel(ST_v435)
,	/* CT_v436: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA420: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA420),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v438)
,	/* FN_LAMBDA419: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,9)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110048
, useLabel(ST_v437)
,	/* CT_v438: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA419: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA419),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v440)
,	/* FN_LAMBDA418: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,8)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110043
, useLabel(ST_v439)
,	/* CT_v440: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA418: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA418),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v442)
,	/* FN_LAMBDA417: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,7)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110038
, useLabel(ST_v441)
,	/* CT_v442: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA417: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA417),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v444)
,	/* FN_LAMBDA416: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,6)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110033
, useLabel(ST_v443)
,	/* CT_v444: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA416: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA416),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v446)
,	/* FN_LAMBDA415: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,5)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110028
, useLabel(ST_v445)
,	/* CT_v446: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA415: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA415),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v448)
,	/* FN_LAMBDA414: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110023
, useLabel(ST_v447)
,	/* CT_v448: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA414: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA414),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v450)
,	/* FN_LAMBDA413: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110018
, useLabel(ST_v449)
,	/* CT_v450: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA413: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA413),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v452)
,	/* FN_LAMBDA412: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110013
, useLabel(ST_v451)
,	/* CT_v452: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA412: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA412),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v454)
,	/* FN_LAMBDA411: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110008
, useLabel(ST_v453)
,	/* CT_v454: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA411: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA411),1)
,	/* ST_v424: (byte 0) */
  bytes2word(84,105,109,101)
, bytes2word(46,104,115,95)
, bytes2word(116,111,85,84)
, bytes2word(67,84,105,109)
,	/* ST_v428: (byte 2) */
  bytes2word(101,0,84,105)
, bytes2word(109,101,46,116)
, bytes2word(111,85,84,67)
, bytes2word(84,105,109,101)
,	/* ST_v451: (byte 1) */
  bytes2word(0,84,105,109)
, bytes2word(101,46,116,111)
, bytes2word(85,84,67,84)
, bytes2word(105,109,101,58)
, bytes2word(49,49,58,49)
, bytes2word(51,45,49,49)
,	/* ST_v449: (byte 4) */
  bytes2word(58,49,54,0)
, bytes2word(84,105,109,101)
, bytes2word(46,116,111,85)
, bytes2word(84,67,84,105)
, bytes2word(109,101,58,49)
, bytes2word(49,58,49,56)
, bytes2word(45,49,49,58)
,	/* ST_v447: (byte 3) */
  bytes2word(50,49,0,84)
, bytes2word(105,109,101,46)
, bytes2word(116,111,85,84)
, bytes2word(67,84,105,109)
, bytes2word(101,58,49,49)
, bytes2word(58,50,51,45)
, bytes2word(49,49,58,50)
,	/* ST_v445: (byte 2) */
  bytes2word(54,0,84,105)
, bytes2word(109,101,46,116)
, bytes2word(111,85,84,67)
, bytes2word(84,105,109,101)
, bytes2word(58,49,49,58)
, bytes2word(50,56,45,49)
, bytes2word(49,58,51,49)
,	/* ST_v443: (byte 1) */
  bytes2word(0,84,105,109)
, bytes2word(101,46,116,111)
, bytes2word(85,84,67,84)
, bytes2word(105,109,101,58)
, bytes2word(49,49,58,51)
, bytes2word(51,45,49,49)
,	/* ST_v441: (byte 4) */
  bytes2word(58,51,54,0)
, bytes2word(84,105,109,101)
, bytes2word(46,116,111,85)
, bytes2word(84,67,84,105)
, bytes2word(109,101,58,49)
, bytes2word(49,58,51,56)
, bytes2word(45,49,49,58)
,	/* ST_v439: (byte 3) */
  bytes2word(52,49,0,84)
, bytes2word(105,109,101,46)
, bytes2word(116,111,85,84)
, bytes2word(67,84,105,109)
, bytes2word(101,58,49,49)
, bytes2word(58,52,51,45)
, bytes2word(49,49,58,52)
,	/* ST_v437: (byte 2) */
  bytes2word(54,0,84,105)
, bytes2word(109,101,46,116)
, bytes2word(111,85,84,67)
, bytes2word(84,105,109,101)
, bytes2word(58,49,49,58)
, bytes2word(52,56,45,49)
, bytes2word(49,58,53,49)
,	/* ST_v435: (byte 1) */
  bytes2word(0,84,105,109)
, bytes2word(101,46,116,111)
, bytes2word(85,84,67,84)
, bytes2word(105,109,101,58)
, bytes2word(49,49,58,53)
, bytes2word(51,45,49,49)
,	/* ST_v433: (byte 4) */
  bytes2word(58,53,55,0)
, bytes2word(84,105,109,101)
, bytes2word(46,116,111,85)
, bytes2word(84,67,84,105)
, bytes2word(109,101,58,49)
, bytes2word(49,58,53,57)
, bytes2word(45,49,49,58)
,	/* ST_v431: (byte 3) */
  bytes2word(54,51,0,84)
, bytes2word(105,109,101,46)
, bytes2word(116,111,85,84)
, bytes2word(67,84,105,109)
, bytes2word(101,58,49,49)
, bytes2word(58,54,53,45)
, bytes2word(49,49,58,54)
,	/* ST_v453: (byte 2) */
  bytes2word(57,0,84,105)
, bytes2word(109,101,46,116)
, bytes2word(111,85,84,67)
, bytes2word(84,105,109,101)
, bytes2word(58,49,49,58)
, bytes2word(56,45,49,49)
, bytes2word(58,49,49,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_toUTCTime" Time.hs_toUTCTime 1 :: Prelude.Int -> Prelude.12 */
extern Node* hs_toUTCTime(HsInt);
#ifdef PROFILE
static SInfo pf_Time_46hs_95toUTCTime = {"Time","Time.hs_toUTCTime","Prelude.12"};
#endif
C_HEADER(FR_Time_46hs_95toUTCTime) {
  NodePtr nodeptr;
  Node* result;
  HsInt arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);

  result = hs_toUTCTime(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_Time_46hs_95toUTCTime);
  C_RETURN(nodeptr);
}
