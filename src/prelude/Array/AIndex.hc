#include "newmacros.h"
#include "runtime.h"

#define CT_v240	((void*)startLabel+32)
#define CT_v244	((void*)startLabel+84)
void FR_Array_46primIndex(void);
extern Node FN_Ix_46index[];
extern Node FN_NHC_46Internal_46_95apply2[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v240)
,};
Node FN_Array_46primIndex[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Array_46primIndex)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v240: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Array_46primIndex[] = {
  CAPTAG(useLabel(FN_Array_46primIndex),2)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v244)
,};
Node FN_Array_46_33[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,0,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_I2,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v244: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Array_46_33[] = {
  CAPTAG(useLabel(FN_Array_46_33),3)
, VAPTAG(useLabel(FN_Ix_46index))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Array_46primIndex))
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primVectorIndexC" Array.primIndex 2 :: Prelude.Vector -> Prelude.Int -> 1 */
extern Node* primVectorIndexC(Node*,HsInt);
#ifdef PROFILE
static SInfo pf_Array_46primIndex = {"Array","Array.primIndex","1"};
#endif
C_HEADER(FR_Array_46primIndex) {
  NodePtr nodeptr;
  Node* result;
  Node* arg1;
  HsInt arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (Node*)nodeptr;
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);

  result = primVectorIndexC(arg1,arg2);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_Array_46primIndex);
  C_RETURN(nodeptr);
}
