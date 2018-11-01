#include "newmacros.h"
#include "runtime.h"

#define CT_v424	((void*)startLabel+24)
#define CT_v428	((void*)startLabel+168)
#define FN_LAMBDA422	((void*)startLabel+256)
#define CT_v429	((void*)startLabel+268)
#define F0_LAMBDA422	((void*)startLabel+276)
#define FN_LAMBDA421	((void*)startLabel+288)
#define CT_v430	((void*)startLabel+300)
#define F0_LAMBDA421	((void*)startLabel+308)
#define FN_LAMBDA420	((void*)startLabel+320)
#define CT_v431	((void*)startLabel+332)
#define F0_LAMBDA420	((void*)startLabel+340)
#define FN_LAMBDA419	((void*)startLabel+352)
#define CT_v432	((void*)startLabel+364)
#define F0_LAMBDA419	((void*)startLabel+372)
#define FN_LAMBDA418	((void*)startLabel+384)
#define CT_v433	((void*)startLabel+396)
#define F0_LAMBDA418	((void*)startLabel+404)
#define FN_LAMBDA417	((void*)startLabel+416)
#define CT_v434	((void*)startLabel+428)
#define F0_LAMBDA417	((void*)startLabel+436)
#define FN_LAMBDA416	((void*)startLabel+448)
#define CT_v435	((void*)startLabel+460)
#define F0_LAMBDA416	((void*)startLabel+468)
#define FN_LAMBDA415	((void*)startLabel+480)
#define CT_v436	((void*)startLabel+492)
#define F0_LAMBDA415	((void*)startLabel+500)
#define FN_LAMBDA414	((void*)startLabel+512)
#define CT_v437	((void*)startLabel+524)
#define F0_LAMBDA414	((void*)startLabel+532)
#define FN_LAMBDA413	((void*)startLabel+544)
#define CT_v438	((void*)startLabel+556)
#define F0_LAMBDA413	((void*)startLabel+564)
#define FN_LAMBDA412	((void*)startLabel+576)
#define CT_v439	((void*)startLabel+588)
#define F0_LAMBDA412	((void*)startLabel+596)
#define FN_LAMBDA411	((void*)startLabel+608)
#define CT_v440	((void*)startLabel+620)
#define F0_LAMBDA411	((void*)startLabel+628)
void FR_Time_46hs_95toUTCTime(void);
extern Node FN_Prelude_46Enum_46Time_46Month_46toEnum[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46toInteger[];
extern Node FN_Prelude_46Enum_46Time_46Day_46toEnum[];
extern Node FN_CString_46fromCString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v424)
,};
Node FN_Time_46hs_95toUTCTime[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Time_46hs_95toUTCTime)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v424: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Time_46hs_95toUTCTime[] = {
  CAPTAG(useLabel(FN_Time_46hs_95toUTCTime),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v428)
,};
Node FN_Time_46toUTCTime[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_P1)
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
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,12)
, bytes2word(HEAP_OFF_N1,10,HEAP_P1,10)
, bytes2word(HEAP_P1,9,HEAP_P1,8)
, bytes2word(HEAP_P1,7,HEAP_OFF_N1,13)
, bytes2word(HEAP_OFF_N1,12,HEAP_P1,4)
, bytes2word(HEAP_OFF_N1,12,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,12,0)
,	/* CT_v428: (byte 0) */
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
, useLabel(CT_v429)
,	/* FN_LAMBDA422: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,12)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v429: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA422: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA422),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v430)
,	/* FN_LAMBDA421: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,11)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v430: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA421: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA421),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v431)
,	/* FN_LAMBDA420: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,10)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v431: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA420: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA420),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v432)
,	/* FN_LAMBDA419: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,9)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v432: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA419: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA419),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v433)
,	/* FN_LAMBDA418: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,8)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v433: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA418: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA418),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v434)
,	/* FN_LAMBDA417: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,7)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v434: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA417: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA417),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v435)
,	/* FN_LAMBDA416: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,6)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v435: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA416: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA416),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v436)
,	/* FN_LAMBDA415: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,5)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v436: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA415: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA415),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v437)
,	/* FN_LAMBDA414: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v437: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA414: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA414),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v438)
,	/* FN_LAMBDA413: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v438: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA413: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA413),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v439)
,	/* FN_LAMBDA412: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v439: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA412: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA412),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v440)
,	/* FN_LAMBDA411: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v440: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA411: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA411),1)
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
