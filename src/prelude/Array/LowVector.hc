#include "newmacros.h"
#include "runtime.h"

#define FN_Array_46primUpdateVectorC_35	((void*)startLabel+12)
#define CT_v223	((void*)startLabel+36)
#define F0_Array_46primUpdateVectorC_35	((void*)startLabel+44)
#define CT_v224	((void*)startLabel+68)
#define FN_Array_46primVectorIndexC_35	((void*)startLabel+100)
#define CT_v225	((void*)startLabel+120)
#define F0_Array_46primVectorIndexC_35	((void*)startLabel+128)
#define CT_v226	((void*)startLabel+152)
#define FN_Array_46primNewVectorC_35	((void*)startLabel+184)
#define CT_v227	((void*)startLabel+204)
#define F0_Array_46primNewVectorC_35	((void*)startLabel+212)
#define CT_v228	((void*)startLabel+236)
#define FN_Array_46primCopyVectorC_35	((void*)startLabel+264)
#define CT_v229	((void*)startLabel+280)
#define F0_Array_46primCopyVectorC_35	((void*)startLabel+288)
#define CT_v230	((void*)startLabel+312)
void FR_Array_46primUpdateVectorC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
void FR_Array_46primVectorIndexC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
void FR_Array_46primNewVectorC_35(void);
void FR_Array_46primCopyVectorC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v223)
,	/* FN_Array_46primUpdateVectorC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_Array_46primUpdateVectorC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v223: (byte 0) */
  HW(0,3)
, 0
,	/* F0_Array_46primUpdateVectorC_35: (byte 0) */
  CAPTAG(useLabel(FN_Array_46primUpdateVectorC_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v224)
,};
Node FN_Array_46primUpdateVectorC[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v224: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Array_46primUpdateVectorC[] = {
  VAPTAG(useLabel(FN_Array_46primUpdateVectorC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_Array_46primUpdateVectorC_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v225)
,	/* FN_Array_46primVectorIndexC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Array_46primVectorIndexC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v225: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Array_46primVectorIndexC_35: (byte 0) */
  CAPTAG(useLabel(FN_Array_46primVectorIndexC_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v226)
,};
Node FN_Array_46primVectorIndexC[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v226: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Array_46primVectorIndexC[] = {
  VAPTAG(useLabel(FN_Array_46primVectorIndexC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_Array_46primVectorIndexC_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v227)
,	/* FN_Array_46primNewVectorC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Array_46primNewVectorC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v227: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Array_46primNewVectorC_35: (byte 0) */
  CAPTAG(useLabel(FN_Array_46primNewVectorC_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v228)
,};
Node FN_Array_46primNewVectorC[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v228: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Array_46primNewVectorC[] = {
  VAPTAG(useLabel(FN_Array_46primNewVectorC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_Array_46primNewVectorC_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v229)
,	/* FN_Array_46primCopyVectorC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Array_46primCopyVectorC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v229: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Array_46primCopyVectorC_35: (byte 0) */
  CAPTAG(useLabel(FN_Array_46primCopyVectorC_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v230)
,};
Node FN_Array_46primCopyVectorC[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v230: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Array_46primCopyVectorC[] = {
  VAPTAG(useLabel(FN_Array_46primCopyVectorC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Array_46primCopyVectorC_35)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primUpdateVectorC" Array.primUpdateVectorC# 3 :: Prelude.Int -> Array._E -> Prelude.Vector -> Prelude.() */
extern void primUpdateVectorC(HsInt,Node*,Node*);
#ifdef PROFILE
static SInfo pf_Array_46primUpdateVectorC_35 = {"Array","Array.primUpdateVectorC#","Prelude.()"};
#endif
C_HEADER(FR_Array_46primUpdateVectorC_35) {
  NodePtr nodeptr;
  HsInt arg1;
  Node* arg2;
  Node* arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (Node*)nodeptr;
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (Node*)nodeptr;

  primUpdateVectorC(arg1,arg2,arg3);

  nodeptr = nhc_mkUnit();
  INIT_PROFINFO(nodeptr,&pf_Array_46primUpdateVectorC_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primVectorIndexC" Array.primVectorIndexC# 2 :: Prelude.Vector -> Prelude.Int -> 1 */
extern Node* primVectorIndexC(Node*,HsInt);
#ifdef PROFILE
static SInfo pf_Array_46primVectorIndexC_35 = {"Array","Array.primVectorIndexC#","1"};
#endif
C_HEADER(FR_Array_46primVectorIndexC_35) {
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
  INIT_PROFINFO(nodeptr,&pf_Array_46primVectorIndexC_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primNewVectorC" Array.primNewVectorC# 2 :: Prelude.Int -> Array._E -> Prelude.Vector */
extern Node* primNewVectorC(HsInt,Node*);
#ifdef PROFILE
static SInfo pf_Array_46primNewVectorC_35 = {"Array","Array.primNewVectorC#","Prelude.Vector"};
#endif
C_HEADER(FR_Array_46primNewVectorC_35) {
  NodePtr nodeptr;
  Node* result;
  HsInt arg1;
  Node* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (Node*)nodeptr;

  result = primNewVectorC(arg1,arg2);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_Array_46primNewVectorC_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primCopyVectorC" Array.primCopyVectorC# 1 :: Prelude.Vector -> Prelude.Vector */
extern Node* primCopyVectorC(Node*);
#ifdef PROFILE
static SInfo pf_Array_46primCopyVectorC_35 = {"Array","Array.primCopyVectorC#","Prelude.Vector"};
#endif
C_HEADER(FR_Array_46primCopyVectorC_35) {
  NodePtr nodeptr;
  Node* result;
  Node* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (Node*)nodeptr;

  result = primCopyVectorC(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_Array_46primCopyVectorC_35);
  C_RETURN(nodeptr);
}
