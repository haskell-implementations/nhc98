#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+24)
#define CT_v178	((void*)startLabel+60)
#define CT_v179	((void*)startLabel+96)
#define CT_v180	((void*)startLabel+132)
void FR_Prelude_46doubleToFloat(void);
void FR_Prelude_46floatToDouble(void);
void FR_Prelude_46dIsInf(void);
void FR_Prelude_46dIsNaN(void);

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v177)
,};
Node FN_Prelude_46doubleToFloat[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Prelude_46doubleToFloat)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v177: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46doubleToFloat[] = {
  CAPTAG(useLabel(FN_Prelude_46doubleToFloat),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v178)
,};
Node FN_Prelude_46floatToDouble[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Prelude_46floatToDouble)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v178: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46floatToDouble[] = {
  CAPTAG(useLabel(FN_Prelude_46floatToDouble),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v179)
,};
Node FN_Prelude_46dIsInf[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Prelude_46dIsInf)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v179: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46dIsInf[] = {
  CAPTAG(useLabel(FN_Prelude_46dIsInf),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v180)
,};
Node FN_Prelude_46dIsNaN[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Prelude_46dIsNaN)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v180: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46dIsNaN[] = {
  CAPTAG(useLabel(FN_Prelude_46dIsNaN),1)
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
