#include "newmacros.h"
#include "runtime.h"

#define FN_Array_46primUpdateVectorC_35	((void*)startLabel+12)
#define CT_v224	((void*)startLabel+48)
#define F0_Array_46primUpdateVectorC_35	((void*)startLabel+56)
#define CT_v226	((void*)startLabel+92)
#define FN_Array_46primVectorIndexC_35	((void*)startLabel+124)
#define CT_v228	((void*)startLabel+156)
#define F0_Array_46primVectorIndexC_35	((void*)startLabel+164)
#define CT_v230	((void*)startLabel+200)
#define FN_Array_46primNewVectorC_35	((void*)startLabel+232)
#define CT_v232	((void*)startLabel+264)
#define F0_Array_46primNewVectorC_35	((void*)startLabel+272)
#define CT_v234	((void*)startLabel+308)
#define FN_Array_46primCopyVectorC_35	((void*)startLabel+336)
#define CT_v236	((void*)startLabel+364)
#define F0_Array_46primCopyVectorC_35	((void*)startLabel+372)
#define CT_v238	((void*)startLabel+408)
#define ST_v237	((void*)startLabel+428)
#define ST_v235	((void*)startLabel+450)
#define ST_v233	((void*)startLabel+473)
#define ST_v231	((void*)startLabel+494)
#define ST_v225	((void*)startLabel+516)
#define ST_v223	((void*)startLabel+540)
#define ST_v229	((void*)startLabel+565)
#define ST_v227	((void*)startLabel+588)
extern Node TM_Array[];
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
, useLabel(CT_v224)
,	/* FN_Array_46primUpdateVectorC_35: (byte 0) */
  useLabel(TM_Array)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_Array_46primUpdateVectorC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 140001
, useLabel(ST_v223)
,	/* CT_v224: (byte 0) */
  HW(0,3)
, 0
,	/* F0_Array_46primUpdateVectorC_35: (byte 0) */
  CAPTAG(useLabel(FN_Array_46primUpdateVectorC_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v226)
,};
Node FN_Array_46primUpdateVectorC[] = {
  useLabel(TM_Array)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 140001
, useLabel(ST_v225)
,	/* CT_v226: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Array_46primUpdateVectorC[] = {
  VAPTAG(useLabel(FN_Array_46primUpdateVectorC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_Array_46primUpdateVectorC_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v228)
,	/* FN_Array_46primVectorIndexC_35: (byte 0) */
  useLabel(TM_Array)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Array_46primVectorIndexC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 130001
, useLabel(ST_v227)
,	/* CT_v228: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Array_46primVectorIndexC_35: (byte 0) */
  CAPTAG(useLabel(FN_Array_46primVectorIndexC_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v230)
,};
Node FN_Array_46primVectorIndexC[] = {
  useLabel(TM_Array)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 130001
, useLabel(ST_v229)
,	/* CT_v230: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Array_46primVectorIndexC[] = {
  VAPTAG(useLabel(FN_Array_46primVectorIndexC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_Array_46primVectorIndexC_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v232)
,	/* FN_Array_46primNewVectorC_35: (byte 0) */
  useLabel(TM_Array)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Array_46primNewVectorC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 120001
, useLabel(ST_v231)
,	/* CT_v232: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Array_46primNewVectorC_35: (byte 0) */
  CAPTAG(useLabel(FN_Array_46primNewVectorC_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v234)
,};
Node FN_Array_46primNewVectorC[] = {
  useLabel(TM_Array)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 120001
, useLabel(ST_v233)
,	/* CT_v234: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Array_46primNewVectorC[] = {
  VAPTAG(useLabel(FN_Array_46primNewVectorC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_Array_46primNewVectorC_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v236)
,	/* FN_Array_46primCopyVectorC_35: (byte 0) */
  useLabel(TM_Array)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Array_46primCopyVectorC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v235)
,	/* CT_v236: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Array_46primCopyVectorC_35: (byte 0) */
  CAPTAG(useLabel(FN_Array_46primCopyVectorC_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v238)
,};
Node FN_Array_46primCopyVectorC[] = {
  useLabel(TM_Array)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v237)
,	/* CT_v238: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Array_46primCopyVectorC[] = {
  VAPTAG(useLabel(FN_Array_46primCopyVectorC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Array_46primCopyVectorC_35)
,	/* ST_v237: (byte 0) */
  bytes2word(65,114,114,97)
, bytes2word(121,46,112,114)
, bytes2word(105,109,67,111)
, bytes2word(112,121,86,101)
, bytes2word(99,116,111,114)
,	/* ST_v235: (byte 2) */
  bytes2word(67,0,65,114)
, bytes2word(114,97,121,46)
, bytes2word(112,114,105,109)
, bytes2word(67,111,112,121)
, bytes2word(86,101,99,116)
, bytes2word(111,114,67,35)
,	/* ST_v233: (byte 1) */
  bytes2word(0,65,114,114)
, bytes2word(97,121,46,112)
, bytes2word(114,105,109,78)
, bytes2word(101,119,86,101)
, bytes2word(99,116,111,114)
,	/* ST_v231: (byte 2) */
  bytes2word(67,0,65,114)
, bytes2word(114,97,121,46)
, bytes2word(112,114,105,109)
, bytes2word(78,101,119,86)
, bytes2word(101,99,116,111)
,	/* ST_v225: (byte 4) */
  bytes2word(114,67,35,0)
, bytes2word(65,114,114,97)
, bytes2word(121,46,112,114)
, bytes2word(105,109,85,112)
, bytes2word(100,97,116,101)
, bytes2word(86,101,99,116)
,	/* ST_v223: (byte 4) */
  bytes2word(111,114,67,0)
, bytes2word(65,114,114,97)
, bytes2word(121,46,112,114)
, bytes2word(105,109,85,112)
, bytes2word(100,97,116,101)
, bytes2word(86,101,99,116)
, bytes2word(111,114,67,35)
,	/* ST_v229: (byte 1) */
  bytes2word(0,65,114,114)
, bytes2word(97,121,46,112)
, bytes2word(114,105,109,86)
, bytes2word(101,99,116,111)
, bytes2word(114,73,110,100)
,	/* ST_v227: (byte 4) */
  bytes2word(101,120,67,0)
, bytes2word(65,114,114,97)
, bytes2word(121,46,112,114)
, bytes2word(105,109,86,101)
, bytes2word(99,116,111,114)
, bytes2word(73,110,100,101)
, bytes2word(120,67,35,0)
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
