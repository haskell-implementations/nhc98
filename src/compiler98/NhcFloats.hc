#include "newmacros.h"
#include "runtime.h"

#define FN_NhcFloats_46hs_95doubleToInts	((void*)startLabel+8)
#define CT_v202	((void*)startLabel+24)
#define F0_NhcFloats_46hs_95doubleToInts	((void*)startLabel+32)
#define CT_v203	((void*)startLabel+76)
#define FN_LAMBDA200	((void*)startLabel+108)
#define CT_v204	((void*)startLabel+120)
#define F0_LAMBDA200	((void*)startLabel+128)
#define FN_LAMBDA199	((void*)startLabel+140)
#define CT_v205	((void*)startLabel+152)
#define F0_LAMBDA199	((void*)startLabel+160)
#define CT_v206	((void*)startLabel+188)
void FR_NhcFloats_46hs_95doubleToInts(void);
void FR_NhcFloats_46floatToInt(void);

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v202)
,	/* FN_NhcFloats_46hs_95doubleToInts: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NhcFloats_46hs_95doubleToInts)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v202: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NhcFloats_46hs_95doubleToInts: (byte 0) */
  CAPTAG(useLabel(FN_NhcFloats_46hs_95doubleToInts),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v203)
,};
Node FN_NhcFloats_46doubleToInts[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v203: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_NhcFloats_46doubleToInts[] = {
  CAPTAG(useLabel(FN_NhcFloats_46doubleToInts),1)
, VAPTAG(useLabel(FN_NhcFloats_46hs_95doubleToInts))
, VAPTAG(useLabel(FN_LAMBDA199))
, VAPTAG(useLabel(FN_LAMBDA200))
, bytes2word(1,0,0,1)
, useLabel(CT_v204)
,	/* FN_LAMBDA200: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v204: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA200: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA200),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v205)
,	/* FN_LAMBDA199: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v205: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA199: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA199),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v206)
,};
Node FN_NhcFloats_46floatToInt[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NhcFloats_46floatToInt)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v206: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NhcFloats_46floatToInt[] = {
  CAPTAG(useLabel(FN_NhcFloats_46floatToInt),1)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_doubleToInts" NhcFloats.hs_doubleToInts 1 :: Prelude.Double -> Prelude.2 */
extern Node* hs_doubleToInts(double);
#ifdef PROFILE
static SInfo pf_NhcFloats_46hs_95doubleToInts = {"NhcFloats","NhcFloats.hs_doubleToInts","Prelude.2"};
#endif
C_HEADER(FR_NhcFloats_46hs_95doubleToInts) {
  NodePtr nodeptr;
  Node* result;
  double arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (double)get_double_value(nodeptr);

  result = hs_doubleToInts(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NhcFloats_46hs_95doubleToInts);
  C_RETURN(nodeptr);
}

/* foreign import ccall "hs_floatToInt" NhcFloats.floatToInt 1 :: Prelude.Float -> Prelude.Int */
extern HsInt hs_floatToInt(float);
#ifdef PROFILE
static SInfo pf_NhcFloats_46floatToInt = {"NhcFloats","NhcFloats.floatToInt","Prelude.Int"};
#endif
C_HEADER(FR_NhcFloats_46floatToInt) {
  NodePtr nodeptr;
  HsInt result;
  float arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (float)get_float_value(nodeptr);

  result = hs_floatToInt(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NhcFloats_46floatToInt);
  C_RETURN(nodeptr);
}
