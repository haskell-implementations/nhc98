#include "newmacros.h"
#include "runtime.h"

#define FN_Time_46hs_95toCalendarTime_35	((void*)startLabel+8)
#define CT_v295	((void*)startLabel+32)
#define F0_Time_46hs_95toCalendarTime_35	((void*)startLabel+40)
#define CT_v299	((void*)startLabel+120)
#define CT_v309	((void*)startLabel+304)
#define FN_LAMBDA291	((void*)startLabel+356)
#define CT_v321	((void*)startLabel+596)
#define F0_LAMBDA291	((void*)startLabel+604)
#define ST_v297	((void*)startLabel+644)
#define PP_Time_46hs_95toCalendarTime_35	((void*)startLabel+667)
#define PC_Time_46hs_95toCalendarTime_35	((void*)startLabel+667)
#define ST_v294	((void*)startLabel+667)
#define ST_v303	((void*)startLabel+692)
#define PP_LAMBDA291	((void*)startLabel+712)
#define PC_LAMBDA291	((void*)startLabel+712)
#define ST_v313	((void*)startLabel+712)
#define PS_v298	((void*)startLabel+744)
#define PS_v296	((void*)startLabel+756)
#define PS_v306	((void*)startLabel+768)
#define PS_v305	((void*)startLabel+780)
#define PS_v302	((void*)startLabel+792)
#define PS_v308	((void*)startLabel+804)
#define PS_v307	((void*)startLabel+816)
#define PS_v293	((void*)startLabel+828)
#define PS_v318	((void*)startLabel+840)
#define PS_v319	((void*)startLabel+852)
#define PS_v320	((void*)startLabel+864)
#define PS_v315	((void*)startLabel+876)
#define PS_v316	((void*)startLabel+888)
#define PS_v317	((void*)startLabel+900)
#define PS_v312	((void*)startLabel+912)
void FR_Time_46hs_95toCalendarTime_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Enum_46Time_46Month_46toEnum[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46toInteger[];
extern Node FN_Prelude_46Enum_46Time_46Day_46toEnum[];
extern Node FN_CString_46fromCString[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PM_Time[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_CString_46fromCString[];
extern Node PC_Time_46CalendarTime[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PC_Prelude_46Enum_46Time_46Month_46toEnum[];
extern Node PC_Prelude_46Integral_46Prelude_46Int_46toInteger[];
extern Node PC_Prelude_46Enum_46Time_46Day_46toEnum[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v295)
,	/* FN_Time_46hs_95toCalendarTime_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Time_46hs_95toCalendarTime_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v294)
,	/* CT_v295: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Time_46hs_95toCalendarTime_35: (byte 0) */
  CAPTAG(useLabel(FN_Time_46hs_95toCalendarTime_35),1)
, useLabel(PS_v293)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v299)
,};
Node FN_Time_46hs_95toCalendarTime[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v298)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v297)
,	/* CT_v299: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Time_46hs_95toCalendarTime[] = {
  VAPTAG(useLabel(FN_Time_46hs_95toCalendarTime))
, useLabel(PS_v296)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Time_46hs_95toCalendarTime_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v309)
,};
Node FN_Time_46toCalendarTime[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,11,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v308)
, 0
, 0
, 0
, 0
, useLabel(PS_v307)
, 0
, 0
, 0
, 0
, useLabel(PS_v306)
, 0
, 0
, 0
, 0
, useLabel(PS_v305)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v303)
,	/* CT_v309: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Time_46toCalendarTime[] = {
  CAPTAG(useLabel(FN_Time_46toCalendarTime),1)
, useLabel(PS_v302)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Time_46hs_95toCalendarTime))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA291),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v321)
,	/* FN_LAMBDA291: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_P1)
, bytes2word(47,UNPACK,12,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_I1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,6)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(7,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_P1,9,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,0,HEAP_OFF_N1)
, bytes2word(30,HEAP_I2,HEAP_P1,3)
, bytes2word(HEAP_P1,4,HEAP_P1,5)
, bytes2word(HEAP_OFF_N1,29,HEAP_OFF_N1,24)
, bytes2word(HEAP_P1,8,HEAP_OFF_N1,20)
, bytes2word(HEAP_P1,10,HEAP_P1,11)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,22,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v320)
, 0
, 0
, 0
, 0
, useLabel(PS_v319)
, 0
, 0
, 0
, 0
, CONSTR(0,12,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v318)
, 0
, 0
, 0
, 0
, useLabel(PS_v317)
, 0
, 0
, 0
, 0
, useLabel(PS_v316)
, 0
, 0
, 0
, 0
, useLabel(PS_v315)
, 0
, 0
, 0
, 0
, 110074
, useLabel(ST_v313)
,	/* CT_v321: (byte 0) */
  HW(5,1)
, 0
,	/* F0_LAMBDA291: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA291),1)
, useLabel(PS_v312)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Enum_46Time_46Month_46toEnum))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46toInteger))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Time_46Day_46toEnum))
, VAPTAG(useLabel(FN_CString_46fromCString))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};
Node PP_Time_46hs_95toCalendarTime[] = {
 };
Node PC_Time_46hs_95toCalendarTime[] = {
 	/* ST_v297: (byte 0) */
  bytes2word(84,105,109,101)
, bytes2word(46,104,115,95)
, bytes2word(116,111,67,97)
, bytes2word(108,101,110,100)
, bytes2word(97,114,84,105)
,	/* PP_Time_46hs_95toCalendarTime_35: (byte 3) */
 	/* PC_Time_46hs_95toCalendarTime_35: (byte 3) */
 	/* ST_v294: (byte 3) */
  bytes2word(109,101,0,84)
, bytes2word(105,109,101,46)
, bytes2word(104,115,95,116)
, bytes2word(111,67,97,108)
, bytes2word(101,110,100,97)
, bytes2word(114,84,105,109)
, bytes2word(101,35,0,0)
,};
Node PP_Time_46toCalendarTime[] = {
 };
Node PC_Time_46toCalendarTime[] = {
 	/* ST_v303: (byte 0) */
  bytes2word(84,105,109,101)
, bytes2word(46,116,111,67)
, bytes2word(97,108,101,110)
, bytes2word(100,97,114,84)
,	/* PP_LAMBDA291: (byte 4) */
 	/* PC_LAMBDA291: (byte 4) */
 	/* ST_v313: (byte 4) */
  bytes2word(105,109,101,0)
, bytes2word(84,105,109,101)
, bytes2word(46,116,111,67)
, bytes2word(97,108,101,110)
, bytes2word(100,97,114,84)
, bytes2word(105,109,101,58)
, bytes2word(49,49,58,55)
, bytes2word(52,45,49,49)
, bytes2word(58,57,51,0)
,	/* PS_v298: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46hs_95toCalendarTime)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v296: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46hs_95toCalendarTime)
, useLabel(PC_Time_46hs_95toCalendarTime)
,	/* PS_v306: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toCalendarTime)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v305: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toCalendarTime)
, useLabel(PC_Time_46hs_95toCalendarTime)
,	/* PS_v302: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toCalendarTime)
, useLabel(PC_Time_46toCalendarTime)
,	/* PS_v308: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toCalendarTime)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v307: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toCalendarTime)
, useLabel(PC_LAMBDA291)
,	/* PS_v293: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46hs_95toCalendarTime_35)
, useLabel(PC_Time_46hs_95toCalendarTime_35)
,	/* PS_v318: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA291)
, useLabel(PC_CString_46fromCString)
,	/* PS_v319: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA291)
, useLabel(PC_Time_46CalendarTime)
,	/* PS_v320: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA291)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v315: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA291)
, useLabel(PC_Prelude_46Enum_46Time_46Month_46toEnum)
,	/* PS_v316: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA291)
, useLabel(PC_Prelude_46Integral_46Prelude_46Int_46toInteger)
,	/* PS_v317: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA291)
, useLabel(PC_Prelude_46Enum_46Time_46Day_46toEnum)
,	/* PS_v312: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA291)
, useLabel(PC_LAMBDA291)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_toCalendarTime" Time.hs_toCalendarTime# 1 :: Prelude.Int -> Prelude.12 */
extern Node* hs_toCalendarTime(HsInt);
#ifdef PROFILE
static SInfo pf_Time_46hs_95toCalendarTime_35 = {"Time","Time.hs_toCalendarTime#","Prelude.12"};
#endif
C_HEADER(FR_Time_46hs_95toCalendarTime_35) {
  NodePtr nodeptr;
  Node* result;
  HsInt arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);

  result = hs_toCalendarTime(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_Time_46hs_95toCalendarTime_35);
  C_RETURN(nodeptr);
}
