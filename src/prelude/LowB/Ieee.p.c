#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+32)
#define CT_v182	((void*)startLabel+92)
#define CT_v185	((void*)startLabel+152)
#define CT_v188	((void*)startLabel+212)
#define ST_v184	((void*)startLabel+240)
#define ST_v187	((void*)startLabel+256)
#define ST_v178	((void*)startLabel+272)
#define ST_v181	((void*)startLabel+296)
#define PS_v186	((void*)startLabel+320)
#define PS_v183	((void*)startLabel+332)
#define PS_v180	((void*)startLabel+344)
#define PS_v177	((void*)startLabel+356)
void FR_Prelude_46doubleToFloat(void);
void FR_Prelude_46floatToDouble(void);
void FR_Prelude_46dIsInf(void);
void FR_Prelude_46dIsNaN(void);
extern Node PM_Prelude[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v179)
,};
Node FN_Prelude_46doubleToFloat[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Prelude_46doubleToFloat)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v178)
,	/* CT_v179: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46doubleToFloat[] = {
  CAPTAG(useLabel(FN_Prelude_46doubleToFloat),1)
, useLabel(PS_v177)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v182)
,};
Node FN_Prelude_46floatToDouble[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Prelude_46floatToDouble)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v181)
,	/* CT_v182: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46floatToDouble[] = {
  CAPTAG(useLabel(FN_Prelude_46floatToDouble),1)
, useLabel(PS_v180)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v185)
,};
Node FN_Prelude_46dIsInf[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Prelude_46dIsInf)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v184)
,	/* CT_v185: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46dIsInf[] = {
  CAPTAG(useLabel(FN_Prelude_46dIsInf),1)
, useLabel(PS_v183)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v188)
,};
Node FN_Prelude_46dIsNaN[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Prelude_46dIsNaN)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 30001
, useLabel(ST_v187)
,	/* CT_v188: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46dIsNaN[] = {
  CAPTAG(useLabel(FN_Prelude_46dIsNaN),1)
, useLabel(PS_v186)
, 0
, 0
, 0
,};
Node PP_Prelude_46dIsInf[] = {
 };
Node PC_Prelude_46dIsInf[] = {
 	/* ST_v184: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(100,73,115,73)
, bytes2word(110,102,0,0)
,};
Node PP_Prelude_46dIsNaN[] = {
 };
Node PC_Prelude_46dIsNaN[] = {
 	/* ST_v187: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(100,73,115,78)
, bytes2word(97,78,0,0)
,};
Node PP_Prelude_46doubleToFloat[] = {
 };
Node PC_Prelude_46doubleToFloat[] = {
 	/* ST_v178: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(100,111,117,98)
, bytes2word(108,101,84,111)
, bytes2word(70,108,111,97)
, bytes2word(116,0,0,0)
,};
Node PP_Prelude_46floatToDouble[] = {
 };
Node PC_Prelude_46floatToDouble[] = {
 	/* ST_v181: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(102,108,111,97)
, bytes2word(116,84,111,68)
, bytes2word(111,117,98,108)
, bytes2word(101,0,0,0)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46dIsNaN)
, useLabel(PC_Prelude_46dIsNaN)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46dIsInf)
, useLabel(PC_Prelude_46dIsInf)
,	/* PS_v180: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46floatToDouble)
, useLabel(PC_Prelude_46floatToDouble)
,	/* PS_v177: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46doubleToFloat)
, useLabel(PC_Prelude_46doubleToFloat)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import cast "doubleToFloat" Prelude.doubleToFloat 1 :: Prelude.Double -> Prelude.Float */
#ifdef PROFILE
static SInfo pf_Prelude_46doubleToFloat = {"Prelude","Prelude.doubleToFloat","Prelude.Float"};
#endif
C_HEADER(FR_Prelude_46doubleToFloat) {
  NodePtr nodeptr;
  float result;
  double arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (double)get_double_value(nodeptr);

  result = (float)(arg1);

  nodeptr = nhc_mkFloat(result);
  INIT_PROFINFO(nodeptr,&pf_Prelude_46doubleToFloat);
  C_RETURN(nodeptr);
}

/* foreign import cast "floatToDouble" Prelude.floatToDouble 1 :: Prelude.Float -> Prelude.Double */
#ifdef PROFILE
static SInfo pf_Prelude_46floatToDouble = {"Prelude","Prelude.floatToDouble","Prelude.Double"};
#endif
C_HEADER(FR_Prelude_46floatToDouble) {
  NodePtr nodeptr;
  double result;
  float arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (float)get_float_value(nodeptr);

  result = (double)(arg1);

  nodeptr = nhc_mkDouble(result);
  INIT_PROFINFO(nodeptr,&pf_Prelude_46floatToDouble);
  C_RETURN(nodeptr);
}

/* foreign import ccall "isinf" Prelude.dIsInf 1 :: Prelude.Double -> Prelude.Bool */
extern HsBool isinf(double);
#ifdef PROFILE
static SInfo pf_Prelude_46dIsInf = {"Prelude","Prelude.dIsInf","Prelude.Bool"};
#endif
C_HEADER(FR_Prelude_46dIsInf) {
  NodePtr nodeptr;
  HsBool result;
  double arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (double)get_double_value(nodeptr);

  result = isinf(arg1);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_Prelude_46dIsInf);
  C_RETURN(nodeptr);
}

/* foreign import ccall "isnan" Prelude.dIsNaN 1 :: Prelude.Double -> Prelude.Bool */
extern HsBool isnan(double);
#ifdef PROFILE
static SInfo pf_Prelude_46dIsNaN = {"Prelude","Prelude.dIsNaN","Prelude.Bool"};
#endif
C_HEADER(FR_Prelude_46dIsNaN) {
  NodePtr nodeptr;
  HsBool result;
  double arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (double)get_double_value(nodeptr);

  result = isnan(arg1);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_Prelude_46dIsNaN);
  C_RETURN(nodeptr);
}
