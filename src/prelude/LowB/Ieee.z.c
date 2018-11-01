#include "newmacros.h"
#include "runtime.h"

#define CT_v178	((void*)startLabel+36)
#define CT_v180	((void*)startLabel+84)
#define CT_v182	((void*)startLabel+132)
#define CT_v184	((void*)startLabel+180)
#define ST_v181	((void*)startLabel+192)
#define ST_v183	((void*)startLabel+207)
#define ST_v177	((void*)startLabel+222)
#define ST_v179	((void*)startLabel+244)
extern Node TM_Prelude[];
void FR_Prelude_46doubleToFloat(void);
void FR_Prelude_46floatToDouble(void);
void FR_Prelude_46dIsInf(void);
void FR_Prelude_46dIsNaN(void);

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v178)
,};
Node FN_Prelude_46doubleToFloat[] = {
  useLabel(TM_Prelude)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Prelude_46doubleToFloat)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v177)
,	/* CT_v178: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46doubleToFloat[] = {
  CAPTAG(useLabel(FN_Prelude_46doubleToFloat),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v180)
,};
Node FN_Prelude_46floatToDouble[] = {
  useLabel(TM_Prelude)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Prelude_46floatToDouble)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v179)
,	/* CT_v180: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46floatToDouble[] = {
  CAPTAG(useLabel(FN_Prelude_46floatToDouble),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v182)
,};
Node FN_Prelude_46dIsInf[] = {
  useLabel(TM_Prelude)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Prelude_46dIsInf)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v181)
,	/* CT_v182: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46dIsInf[] = {
  CAPTAG(useLabel(FN_Prelude_46dIsInf),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v184)
,};
Node FN_Prelude_46dIsNaN[] = {
  useLabel(TM_Prelude)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Prelude_46dIsNaN)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 30001
, useLabel(ST_v183)
,	/* CT_v184: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46dIsNaN[] = {
  CAPTAG(useLabel(FN_Prelude_46dIsNaN),1)
,	/* ST_v181: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(100,73,115,73)
,	/* ST_v183: (byte 3) */
  bytes2word(110,102,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,100)
, bytes2word(73,115,78,97)
,	/* ST_v177: (byte 2) */
  bytes2word(78,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,100,111)
, bytes2word(117,98,108,101)
, bytes2word(84,111,70,108)
,	/* ST_v179: (byte 4) */
  bytes2word(111,97,116,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(102,108,111,97)
, bytes2word(116,84,111,68)
, bytes2word(111,117,98,108)
, bytes2word(101,0,0,0)
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
