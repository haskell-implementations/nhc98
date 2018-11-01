#include "newmacros.h"
#include "runtime.h"

#define FN_Array_46primUpdateVectorC_35	((void*)startLabel+12)
#define CT_v225	((void*)startLabel+44)
#define F0_Array_46primUpdateVectorC_35	((void*)startLabel+52)
#define CT_v229	((void*)startLabel+132)
#define FN_Array_46primVectorIndexC_35	((void*)startLabel+180)
#define CT_v232	((void*)startLabel+208)
#define F0_Array_46primVectorIndexC_35	((void*)startLabel+216)
#define CT_v236	((void*)startLabel+296)
#define FN_Array_46primNewVectorC_35	((void*)startLabel+344)
#define CT_v239	((void*)startLabel+372)
#define F0_Array_46primNewVectorC_35	((void*)startLabel+380)
#define CT_v243	((void*)startLabel+460)
#define FN_Array_46primCopyVectorC_35	((void*)startLabel+504)
#define CT_v246	((void*)startLabel+528)
#define F0_Array_46primCopyVectorC_35	((void*)startLabel+536)
#define CT_v250	((void*)startLabel+616)
#define ST_v248	((void*)startLabel+652)
#define PP_Array_46primCopyVectorC_35	((void*)startLabel+674)
#define PC_Array_46primCopyVectorC_35	((void*)startLabel+674)
#define ST_v245	((void*)startLabel+674)
#define ST_v241	((void*)startLabel+700)
#define PP_Array_46primNewVectorC_35	((void*)startLabel+721)
#define PC_Array_46primNewVectorC_35	((void*)startLabel+721)
#define ST_v238	((void*)startLabel+721)
#define ST_v227	((void*)startLabel+744)
#define PP_Array_46primUpdateVectorC_35	((void*)startLabel+768)
#define PC_Array_46primUpdateVectorC_35	((void*)startLabel+768)
#define ST_v224	((void*)startLabel+768)
#define ST_v234	((void*)startLabel+796)
#define PP_Array_46primVectorIndexC_35	((void*)startLabel+819)
#define PC_Array_46primVectorIndexC_35	((void*)startLabel+819)
#define ST_v231	((void*)startLabel+819)
#define PS_v249	((void*)startLabel+844)
#define PS_v247	((void*)startLabel+856)
#define PS_v242	((void*)startLabel+868)
#define PS_v240	((void*)startLabel+880)
#define PS_v235	((void*)startLabel+892)
#define PS_v233	((void*)startLabel+904)
#define PS_v228	((void*)startLabel+916)
#define PS_v226	((void*)startLabel+928)
#define PS_v244	((void*)startLabel+940)
#define PS_v237	((void*)startLabel+952)
#define PS_v230	((void*)startLabel+964)
#define PS_v223	((void*)startLabel+976)
void FR_Array_46primUpdateVectorC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
void FR_Array_46primVectorIndexC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
void FR_Array_46primNewVectorC_35(void);
void FR_Array_46primCopyVectorC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node PM_Array[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];
extern Node PC_NHC_46Internal_46_95mkIOok2[];
extern Node PC_NHC_46Internal_46_95mkIOok3[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v225)
,	/* FN_Array_46primUpdateVectorC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_Array_46primUpdateVectorC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 140001
, useLabel(ST_v224)
,	/* CT_v225: (byte 0) */
  HW(0,3)
, 0
,	/* F0_Array_46primUpdateVectorC_35: (byte 0) */
  CAPTAG(useLabel(FN_Array_46primUpdateVectorC_35),3)
, useLabel(PS_v223)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v229)
,};
Node FN_Array_46primUpdateVectorC[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v228)
, 0
, 0
, 0
, 0
, 140001
, useLabel(ST_v227)
,	/* CT_v229: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Array_46primUpdateVectorC[] = {
  VAPTAG(useLabel(FN_Array_46primUpdateVectorC))
, useLabel(PS_v226)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_Array_46primUpdateVectorC_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v232)
,	/* FN_Array_46primVectorIndexC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Array_46primVectorIndexC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 130001
, useLabel(ST_v231)
,	/* CT_v232: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Array_46primVectorIndexC_35: (byte 0) */
  CAPTAG(useLabel(FN_Array_46primVectorIndexC_35),2)
, useLabel(PS_v230)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v236)
,};
Node FN_Array_46primVectorIndexC[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v235)
, 0
, 0
, 0
, 0
, 130001
, useLabel(ST_v234)
,	/* CT_v236: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Array_46primVectorIndexC[] = {
  VAPTAG(useLabel(FN_Array_46primVectorIndexC))
, useLabel(PS_v233)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_Array_46primVectorIndexC_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v239)
,	/* FN_Array_46primNewVectorC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Array_46primNewVectorC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 120001
, useLabel(ST_v238)
,	/* CT_v239: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Array_46primNewVectorC_35: (byte 0) */
  CAPTAG(useLabel(FN_Array_46primNewVectorC_35),2)
, useLabel(PS_v237)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v243)
,};
Node FN_Array_46primNewVectorC[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v242)
, 0
, 0
, 0
, 0
, 120001
, useLabel(ST_v241)
,	/* CT_v243: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Array_46primNewVectorC[] = {
  VAPTAG(useLabel(FN_Array_46primNewVectorC))
, useLabel(PS_v240)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_Array_46primNewVectorC_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v246)
,	/* FN_Array_46primCopyVectorC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Array_46primCopyVectorC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v245)
,	/* CT_v246: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Array_46primCopyVectorC_35: (byte 0) */
  CAPTAG(useLabel(FN_Array_46primCopyVectorC_35),1)
, useLabel(PS_v244)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v250)
,};
Node FN_Array_46primCopyVectorC[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v249)
, 0
, 0
, 0
, 0
, 110001
, useLabel(ST_v248)
,	/* CT_v250: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Array_46primCopyVectorC[] = {
  VAPTAG(useLabel(FN_Array_46primCopyVectorC))
, useLabel(PS_v247)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Array_46primCopyVectorC_35)
,};
Node PP_Array_46primCopyVectorC[] = {
 };
Node PC_Array_46primCopyVectorC[] = {
 	/* ST_v248: (byte 0) */
  bytes2word(65,114,114,97)
, bytes2word(121,46,112,114)
, bytes2word(105,109,67,111)
, bytes2word(112,121,86,101)
, bytes2word(99,116,111,114)
,	/* PP_Array_46primCopyVectorC_35: (byte 2) */
 	/* PC_Array_46primCopyVectorC_35: (byte 2) */
 	/* ST_v245: (byte 2) */
  bytes2word(67,0,65,114)
, bytes2word(114,97,121,46)
, bytes2word(112,114,105,109)
, bytes2word(67,111,112,121)
, bytes2word(86,101,99,116)
, bytes2word(111,114,67,35)
, bytes2word(0,0,0,0)
,};
Node PP_Array_46primNewVectorC[] = {
 };
Node PC_Array_46primNewVectorC[] = {
 	/* ST_v241: (byte 0) */
  bytes2word(65,114,114,97)
, bytes2word(121,46,112,114)
, bytes2word(105,109,78,101)
, bytes2word(119,86,101,99)
, bytes2word(116,111,114,67)
,	/* PP_Array_46primNewVectorC_35: (byte 1) */
 	/* PC_Array_46primNewVectorC_35: (byte 1) */
 	/* ST_v238: (byte 1) */
  bytes2word(0,65,114,114)
, bytes2word(97,121,46,112)
, bytes2word(114,105,109,78)
, bytes2word(101,119,86,101)
, bytes2word(99,116,111,114)
, bytes2word(67,35,0,0)
,};
Node PP_Array_46primUpdateVectorC[] = {
 };
Node PC_Array_46primUpdateVectorC[] = {
 	/* ST_v227: (byte 0) */
  bytes2word(65,114,114,97)
, bytes2word(121,46,112,114)
, bytes2word(105,109,85,112)
, bytes2word(100,97,116,101)
, bytes2word(86,101,99,116)
,	/* PP_Array_46primUpdateVectorC_35: (byte 4) */
 	/* PC_Array_46primUpdateVectorC_35: (byte 4) */
 	/* ST_v224: (byte 4) */
  bytes2word(111,114,67,0)
, bytes2word(65,114,114,97)
, bytes2word(121,46,112,114)
, bytes2word(105,109,85,112)
, bytes2word(100,97,116,101)
, bytes2word(86,101,99,116)
, bytes2word(111,114,67,35)
, bytes2word(0,0,0,0)
,};
Node PP_Array_46primVectorIndexC[] = {
 };
Node PC_Array_46primVectorIndexC[] = {
 	/* ST_v234: (byte 0) */
  bytes2word(65,114,114,97)
, bytes2word(121,46,112,114)
, bytes2word(105,109,86,101)
, bytes2word(99,116,111,114)
, bytes2word(73,110,100,101)
,	/* PP_Array_46primVectorIndexC_35: (byte 3) */
 	/* PC_Array_46primVectorIndexC_35: (byte 3) */
 	/* ST_v231: (byte 3) */
  bytes2word(120,67,0,65)
, bytes2word(114,114,97,121)
, bytes2word(46,112,114,105)
, bytes2word(109,86,101,99)
, bytes2word(116,111,114,73)
, bytes2word(110,100,101,120)
, bytes2word(67,35,0,0)
,	/* PS_v249: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46primCopyVectorC)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v247: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46primCopyVectorC)
, useLabel(PC_Array_46primCopyVectorC)
,	/* PS_v242: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46primNewVectorC)
, useLabel(PC_NHC_46Internal_46_95mkIOok2)
,	/* PS_v240: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46primNewVectorC)
, useLabel(PC_Array_46primNewVectorC)
,	/* PS_v235: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46primVectorIndexC)
, useLabel(PC_NHC_46Internal_46_95mkIOok2)
,	/* PS_v233: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46primVectorIndexC)
, useLabel(PC_Array_46primVectorIndexC)
,	/* PS_v228: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46primUpdateVectorC)
, useLabel(PC_NHC_46Internal_46_95mkIOok3)
,	/* PS_v226: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46primUpdateVectorC)
, useLabel(PC_Array_46primUpdateVectorC)
,	/* PS_v244: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46primCopyVectorC_35)
, useLabel(PC_Array_46primCopyVectorC_35)
,	/* PS_v237: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46primNewVectorC_35)
, useLabel(PC_Array_46primNewVectorC_35)
,	/* PS_v230: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46primVectorIndexC_35)
, useLabel(PC_Array_46primVectorIndexC_35)
,	/* PS_v223: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46primUpdateVectorC_35)
, useLabel(PC_Array_46primUpdateVectorC_35)
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
