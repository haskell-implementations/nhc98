#include "newmacros.h"
#include "runtime.h"

#define CT_v242	((void*)startLabel+40)
#define CT_v251	((void*)startLabel+200)
#define ST_v246	((void*)startLabel+240)
#define ST_v241	((void*)startLabel+248)
#define PS_v240	((void*)startLabel+264)
#define PS_v248	((void*)startLabel+276)
#define PS_v249	((void*)startLabel+288)
#define PS_v250	((void*)startLabel+300)
#define PS_v245	((void*)startLabel+312)
void FR_Array_46primIndex(void);
extern Node FN_Ix_46index[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node PM_Array[];
extern Node PC_Ix_46index[];
extern Node PC_NHC_46Internal_46_95apply2[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v242)
,};
Node FN_Array_46primIndex[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Array_46primIndex)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v241)
,	/* CT_v242: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Array_46primIndex[] = {
  CAPTAG(useLabel(FN_Array_46primIndex),2)
, useLabel(PS_v240)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v251)
,};
Node FN_Array_46_33[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,0,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I2,HEAP_OFF_N1,14,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v250)
, 0
, 0
, 0
, 0
, useLabel(PS_v249)
, 0
, 0
, 0
, 0
, useLabel(PS_v248)
, 0
, 0
, 0
, 0
, 140002
, useLabel(ST_v246)
,	/* CT_v251: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Array_46_33[] = {
  CAPTAG(useLabel(FN_Array_46_33),3)
, useLabel(PS_v245)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Ix_46index))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Array_46primIndex))
,};
Node PP_Array_46_33[] = {
 };
Node PC_Array_46_33[] = {
 	/* ST_v246: (byte 0) */
  bytes2word(65,114,114,97)
, bytes2word(121,46,33,0)
,};
Node PP_Array_46primIndex[] = {
 };
Node PC_Array_46primIndex[] = {
 	/* ST_v241: (byte 0) */
  bytes2word(65,114,114,97)
, bytes2word(121,46,112,114)
, bytes2word(105,109,73,110)
, bytes2word(100,101,120,0)
,	/* PS_v240: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46primIndex)
, useLabel(PC_Array_46primIndex)
,	/* PS_v248: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46_33)
, useLabel(PC_Ix_46index)
,	/* PS_v249: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46_33)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v250: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46_33)
, useLabel(PC_Array_46primIndex)
,	/* PS_v245: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46_33)
, useLabel(PC_Array_46_33)
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
