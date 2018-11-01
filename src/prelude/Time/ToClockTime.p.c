#include "newmacros.h"
#include "runtime.h"

#define CT_v282	((void*)startLabel+100)
#define CT_v295	((void*)startLabel+408)
#define FN_Time_46Prelude_46226_46pc	((void*)startLabel+476)
#define CT_v299	((void*)startLabel+532)
#define F0_Time_46Prelude_46226_46pc	((void*)startLabel+540)
#define ST_v281	((void*)startLabel+564)
#define ST_v286	((void*)startLabel+584)
#define PP_Time_46Prelude_46226_46pc	((void*)startLabel+601)
#define PC_Time_46Prelude_46226_46pc	((void*)startLabel+601)
#define ST_v297	((void*)startLabel+601)
#define PS_v280	((void*)startLabel+632)
#define PS_v290	((void*)startLabel+644)
#define PS_v294	((void*)startLabel+656)
#define PS_v292	((void*)startLabel+668)
#define PS_v293	((void*)startLabel+680)
#define PS_v285	((void*)startLabel+692)
#define PS_v291	((void*)startLabel+704)
#define PS_v288	((void*)startLabel+716)
#define PS_v289	((void*)startLabel+728)
#define PS_v298	((void*)startLabel+740)
#define PS_v296	((void*)startLabel+752)
void FR_Time_46hs_95toClockTime(void);
extern Node FN_Prelude_46Enum_46Time_46Month_46fromEnum[];
extern Node FN_Prelude_46Enum_46Time_46Day_46fromEnum[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node CF_Prelude_46Num_46Prelude_46Int[];
extern Node FN_Prelude_46fromInteger[];
extern Node PM_Time[];
extern Node PC_CString_46toCString[];
extern Node PC_Time_46CT[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46Enum_46Time_46Month_46fromEnum[];
extern Node PC_Prelude_46Enum_46Time_46Day_46fromEnum[];
extern Node PC_Prelude_46fromInteger[];

static Node startLabel[] = {
  bytes2word(0,0,12,0)
, bytes2word(11,1,10,2)
, bytes2word(9,3,8,4)
, bytes2word(7,5,6,6)
, bytes2word(5,7,4,8)
, bytes2word(3,9,2,10)
, bytes2word(1,11,0,12)
, useLabel(CT_v282)
,};
Node FN_Time_46hs_95toClockTime[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PUSH_ARG,4,EVAL)
, bytes2word(POP_I1,PUSH_ARG,5,EVAL)
, bytes2word(POP_I1,PUSH_ARG,6,EVAL)
, bytes2word(POP_I1,PUSH_ARG,7,EVAL)
, bytes2word(POP_I1,PUSH_ARG,8,EVAL)
, bytes2word(POP_I1,PUSH_ARG,9,EVAL)
, bytes2word(POP_I1,PUSH_ARG,10,EVAL)
, bytes2word(POP_I1,PUSH_ARG,11,EVAL)
, bytes2word(POP_I1,PUSH_ARG,12,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_Time_46hs_95toClockTime)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v281)
,	/* CT_v282: (byte 0) */
  HW(0,12)
, 0
,};
Node F0_Time_46hs_95toClockTime[] = {
  CAPTAG(useLabel(FN_Time_46hs_95toClockTime),12)
, useLabel(PS_v280)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v295)
,};
Node FN_Time_46toClockTime[] = {
  bytes2word(NEEDSTACK_P1,17,PUSH_ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_P1,54,UNPACK,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I2,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,9,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(12,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_P1,9,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(12,PUSH_HEAP,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_P1,6,HEAP_P1)
, bytes2word(7,HEAP_P1,8,HEAP_P1)
, bytes2word(9,HEAP_OFF_N1,18,HEAP_I2)
, bytes2word(HEAP_P1,12,HEAP_I1,HEAP_P1)
, bytes2word(14,HEAP_P1,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v294)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v293)
, 0
, 0
, 0
, 0
, useLabel(PS_v292)
, 0
, 0
, 0
, 0
, useLabel(PS_v291)
, 0
, 0
, 0
, 0
, useLabel(PS_v290)
, 0
, 0
, 0
, 0
, useLabel(PS_v289)
, 0
, 0
, 0
, 0
, useLabel(PS_v288)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v286)
,	/* CT_v295: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_Time_46toClockTime[] = {
  CAPTAG(useLabel(FN_Time_46toClockTime),1)
, useLabel(PS_v285)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Enum_46Time_46Month_46fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Time_46Day_46fromEnum))
, VAPTAG(useLabel(FN_CString_46toCString))
, CAPTAG(useLabel(FN_Time_46Prelude_46226_46pc),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, VAPTAG(useLabel(FN_Time_46hs_95toClockTime))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v299)
,	/* FN_Time_46Prelude_46226_46pc: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v298)
, 0
, 0
, 0
, 0
, 120007
, useLabel(ST_v297)
,	/* CT_v299: (byte 0) */
  HW(1,2)
, 0
,	/* F0_Time_46Prelude_46226_46pc: (byte 0) */
  CAPTAG(useLabel(FN_Time_46Prelude_46226_46pc),2)
, useLabel(PS_v296)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
,};
Node PP_Time_46hs_95toClockTime[] = {
 };
Node PC_Time_46hs_95toClockTime[] = {
 	/* ST_v281: (byte 0) */
  bytes2word(84,105,109,101)
, bytes2word(46,104,115,95)
, bytes2word(116,111,67,108)
, bytes2word(111,99,107,84)
, bytes2word(105,109,101,0)
,};
Node PP_Time_46toClockTime[] = {
 };
Node PC_Time_46toClockTime[] = {
 	/* ST_v286: (byte 0) */
  bytes2word(84,105,109,101)
, bytes2word(46,116,111,67)
, bytes2word(108,111,99,107)
, bytes2word(84,105,109,101)
,	/* PP_Time_46Prelude_46226_46pc: (byte 1) */
 	/* PC_Time_46Prelude_46226_46pc: (byte 1) */
 	/* ST_v297: (byte 1) */
  bytes2word(0,84,105,109)
, bytes2word(101,46,116,111)
, bytes2word(67,108,111,99)
, bytes2word(107,84,105,109)
, bytes2word(101,58,49,50)
, bytes2word(58,55,45,49)
, bytes2word(50,58,50,55)
, bytes2word(0,0,0,0)
,	/* PS_v280: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46hs_95toClockTime)
, useLabel(PC_Time_46hs_95toClockTime)
,	/* PS_v290: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toClockTime)
, useLabel(PC_CString_46toCString)
,	/* PS_v294: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toClockTime)
, useLabel(PC_Time_46CT)
,	/* PS_v292: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toClockTime)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v293: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toClockTime)
, useLabel(PC_Time_46hs_95toClockTime)
,	/* PS_v285: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toClockTime)
, useLabel(PC_Time_46toClockTime)
,	/* PS_v291: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toClockTime)
, useLabel(PC_Time_46Prelude_46226_46pc)
,	/* PS_v288: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toClockTime)
, useLabel(PC_Prelude_46Enum_46Time_46Month_46fromEnum)
,	/* PS_v289: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toClockTime)
, useLabel(PC_Prelude_46Enum_46Time_46Day_46fromEnum)
,	/* PS_v298: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46Prelude_46226_46pc)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v296: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46Prelude_46226_46pc)
, useLabel(PC_Time_46Prelude_46226_46pc)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_toClockTime" Time.hs_toClockTime 12 :: Prelude.Int -> Prelude.Int -> Prelude.Int -> Prelude.Int -> Prelude.Int -> Prelude.Int -> Prelude.Int -> Prelude.Int -> Prelude.Int -> PackedString.PackedString -> Prelude.Int -> Prelude.Bool -> Prelude.Int */
extern HsInt hs_toClockTime(HsInt,HsInt,HsInt,HsInt,HsInt,HsInt,HsInt,HsInt,HsInt,char*,HsInt,HsBool);
#ifdef PROFILE
static SInfo pf_Time_46hs_95toClockTime = {"Time","Time.hs_toClockTime","Prelude.Int"};
#endif
C_HEADER(FR_Time_46hs_95toClockTime) {
  NodePtr nodeptr;
  HsInt result;
  HsInt arg1;
  HsInt arg2;
  HsInt arg3;
  HsInt arg4;
  HsInt arg5;
  HsInt arg6;
  HsInt arg7;
  HsInt arg8;
  HsInt arg9;
  char* arg10;
  HsInt arg11;
  HsBool arg12;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(4);
  IND_REMOVE(nodeptr);
  arg4 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(5);
  IND_REMOVE(nodeptr);
  arg5 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(6);
  IND_REMOVE(nodeptr);
  arg6 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(7);
  IND_REMOVE(nodeptr);
  arg7 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(8);
  IND_REMOVE(nodeptr);
  arg8 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(9);
  IND_REMOVE(nodeptr);
  arg9 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(10);
  IND_REMOVE(nodeptr);
  arg10 = (char*)nhc_getPackedString(nodeptr);
  nodeptr = C_GETARG1(11);
  IND_REMOVE(nodeptr);
  arg11 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(12);
  IND_REMOVE(nodeptr);
  arg12 = (HsBool)GET_BOOL_VALUE(nodeptr);

  result = hs_toClockTime(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_Time_46hs_95toClockTime);
  C_RETURN(nodeptr);
}
