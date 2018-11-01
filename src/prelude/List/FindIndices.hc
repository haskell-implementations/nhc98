#include "newmacros.h"
#include "runtime.h"

#define CT_v201	((void*)startLabel+56)
#define FN_LAMBDA199	((void*)startLabel+100)
#define CT_v205	((void*)startLabel+128)
#define F0_LAMBDA199	((void*)startLabel+136)
#define FN_LAMBDA198	((void*)startLabel+164)
#define CT_v206	((void*)startLabel+188)
#define F0_LAMBDA198	((void*)startLabel+196)
extern Node FN_Prelude_46zip[];
extern Node FN_Prelude_46Enum_46Prelude_46Int_46enumFrom[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46_95filter[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v201)
,};
Node FN_List_46findIndices[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_INT_P1,0)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_N1,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v201: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_List_46findIndices[] = {
  CAPTAG(useLabel(FN_List_46findIndices),2)
, CAPTAG(useLabel(FN_LAMBDA199),2)
, VAPTAG(useLabel(FN_Prelude_46zip))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Int_46enumFrom))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v205)
,	/* FN_LAMBDA199: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v205: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA199: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA199),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA198),1)
, VAPTAG(useLabel(FN_Prelude_46_95filter))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v206)
,	/* FN_LAMBDA198: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v206: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA198: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA198),2)
,};
