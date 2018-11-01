#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Vector_46primUpdateVectorC_35	((void*)startLabel+12)
#define CT_v263	((void*)startLabel+48)
#define F0_NHC_46Vector_46primUpdateVectorC_35	((void*)startLabel+56)
#define FN_NHC_46Vector_46primUpdateVectorC	((void*)startLabel+68)
#define CT_v265	((void*)startLabel+92)
#define CF_NHC_46Vector_46primUpdateVectorC	((void*)startLabel+100)
#define CT_v267	((void*)startLabel+172)
#define FN_NHC_46Vector_46primVectorIndexC_35	((void*)startLabel+200)
#define CT_v269	((void*)startLabel+232)
#define F0_NHC_46Vector_46primVectorIndexC_35	((void*)startLabel+240)
#define FN_NHC_46Vector_46primVectorIndexC	((void*)startLabel+252)
#define CT_v271	((void*)startLabel+276)
#define CF_NHC_46Vector_46primVectorIndexC	((void*)startLabel+284)
#define CT_v273	((void*)startLabel+328)
#define FN_NHC_46Vector_46primNewVectorC_35	((void*)startLabel+356)
#define CT_v275	((void*)startLabel+388)
#define F0_NHC_46Vector_46primNewVectorC_35	((void*)startLabel+396)
#define FN_NHC_46Vector_46primNewVectorC	((void*)startLabel+408)
#define CT_v277	((void*)startLabel+432)
#define CF_NHC_46Vector_46primNewVectorC	((void*)startLabel+440)
#define CT_v279	((void*)startLabel+508)
#define FN_NHC_46Vector_46primCopyVectorC_35	((void*)startLabel+532)
#define CT_v281	((void*)startLabel+560)
#define F0_NHC_46Vector_46primCopyVectorC_35	((void*)startLabel+568)
#define FN_NHC_46Vector_46primCopyVectorC	((void*)startLabel+580)
#define CT_v283	((void*)startLabel+604)
#define CF_NHC_46Vector_46primCopyVectorC	((void*)startLabel+612)
#define CT_v285	((void*)startLabel+656)
#define ST_v261	((void*)startLabel+672)
#define ST_v272	((void*)startLabel+683)
#define ST_v284	((void*)startLabel+696)
#define ST_v278	((void*)startLabel+712)
#define ST_v282	((void*)startLabel+727)
#define ST_v280	((void*)startLabel+754)
#define ST_v276	((void*)startLabel+782)
#define ST_v274	((void*)startLabel+808)
#define ST_v264	((void*)startLabel+835)
#define ST_v262	((void*)startLabel+864)
#define ST_v270	((void*)startLabel+894)
#define ST_v268	((void*)startLabel+922)
#define ST_v266	((void*)startLabel+951)
extern Node TM_NHC_46Vector[];
void FR_NHC_46Vector_46primUpdateVectorC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
void FR_NHC_46Vector_46primVectorIndexC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
void FR_NHC_46Vector_46primNewVectorC_35(void);
void FR_NHC_46Vector_46primCopyVectorC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v263)
,	/* FN_NHC_46Vector_46primUpdateVectorC_35: (byte 0) */
  useLabel(TM_NHC_46Vector)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46Vector_46primUpdateVectorC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 150001
, useLabel(ST_v262)
,	/* CT_v263: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46Vector_46primUpdateVectorC_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Vector_46primUpdateVectorC_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v265)
,	/* FN_NHC_46Vector_46primUpdateVectorC: (byte 0) */
  useLabel(TM_NHC_46Vector)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 150001
, useLabel(ST_v264)
,	/* CT_v265: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Vector_46primUpdateVectorC: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Vector_46primUpdateVectorC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46Vector_46primUpdateVectorC_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v267)
,};
Node FN_NHC_46Vector_46update[] = {
  useLabel(TM_NHC_46Vector)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG)
, bytes2word(3,PUSH_ARG_I1,PUSH_I1,PUSH_ARG_I2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,4,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 280001
, useLabel(ST_v266)
,	/* CT_v267: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_NHC_46Vector_46update[] = {
  CAPTAG(useLabel(FN_NHC_46Vector_46update),3)
, VAPTAG(useLabel(FN_NHC_46Vector_46primUpdateVectorC))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v269)
,	/* FN_NHC_46Vector_46primVectorIndexC_35: (byte 0) */
  useLabel(TM_NHC_46Vector)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46Vector_46primVectorIndexC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 140001
, useLabel(ST_v268)
,	/* CT_v269: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46Vector_46primVectorIndexC_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Vector_46primVectorIndexC_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v271)
,	/* FN_NHC_46Vector_46primVectorIndexC: (byte 0) */
  useLabel(TM_NHC_46Vector)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 140001
, useLabel(ST_v270)
,	/* CT_v271: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Vector_46primVectorIndexC: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Vector_46primVectorIndexC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_NHC_46Vector_46primVectorIndexC_35)
, bytes2word(0,0,0,0)
, useLabel(CT_v273)
,};
Node FN_NHC_46Vector_46_33[] = {
  useLabel(TM_NHC_46Vector)
, bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 250002
, useLabel(ST_v272)
,	/* CT_v273: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46Vector_46_33[] = {
  VAPTAG(useLabel(FN_NHC_46Vector_46_33))
, useLabel(CF_NHC_46Vector_46primVectorIndexC)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v275)
,	/* FN_NHC_46Vector_46primNewVectorC_35: (byte 0) */
  useLabel(TM_NHC_46Vector)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46Vector_46primNewVectorC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 130001
, useLabel(ST_v274)
,	/* CT_v275: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46Vector_46primNewVectorC_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Vector_46primNewVectorC_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v277)
,	/* FN_NHC_46Vector_46primNewVectorC: (byte 0) */
  useLabel(TM_NHC_46Vector)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 130001
, useLabel(ST_v276)
,	/* CT_v277: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Vector_46primNewVectorC: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Vector_46primNewVectorC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_NHC_46Vector_46primNewVectorC_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v279)
,};
Node FN_NHC_46Vector_46new[] = {
  useLabel(TM_NHC_46Vector)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG)
, bytes2word(2,PUSH_P1,0,PUSH_ARG_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 220001
, useLabel(ST_v278)
,	/* CT_v279: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46Vector_46new[] = {
  CAPTAG(useLabel(FN_NHC_46Vector_46new),2)
, VAPTAG(useLabel(FN_NHC_46Vector_46primNewVectorC))
, bytes2word(1,0,0,1)
, useLabel(CT_v281)
,	/* FN_NHC_46Vector_46primCopyVectorC_35: (byte 0) */
  useLabel(TM_NHC_46Vector)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46Vector_46primCopyVectorC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 120001
, useLabel(ST_v280)
,	/* CT_v281: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Vector_46primCopyVectorC_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Vector_46primCopyVectorC_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v283)
,	/* FN_NHC_46Vector_46primCopyVectorC: (byte 0) */
  useLabel(TM_NHC_46Vector)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 120001
, useLabel(ST_v282)
,	/* CT_v283: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Vector_46primCopyVectorC: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Vector_46primCopyVectorC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46Vector_46primCopyVectorC_35)
, bytes2word(0,0,0,0)
, useLabel(CT_v285)
,};
Node FN_NHC_46Vector_46copy[] = {
  useLabel(TM_NHC_46Vector)
, bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 190001
, useLabel(ST_v284)
,	/* CT_v285: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46Vector_46copy[] = {
  VAPTAG(useLabel(FN_NHC_46Vector_46copy))
, useLabel(CF_NHC_46Vector_46primCopyVectorC)
,};
Node PM_NHC_46Vector[] = {
 	/* ST_v261: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(86,101,99,116)
,	/* ST_v272: (byte 3) */
  bytes2word(111,114,0,78)
, bytes2word(72,67,46,86)
, bytes2word(101,99,116,111)
,	/* ST_v284: (byte 4) */
  bytes2word(114,46,33,0)
, bytes2word(78,72,67,46)
, bytes2word(86,101,99,116)
, bytes2word(111,114,46,99)
,	/* ST_v278: (byte 4) */
  bytes2word(111,112,121,0)
, bytes2word(78,72,67,46)
, bytes2word(86,101,99,116)
, bytes2word(111,114,46,110)
,	/* ST_v282: (byte 3) */
  bytes2word(101,119,0,78)
, bytes2word(72,67,46,86)
, bytes2word(101,99,116,111)
, bytes2word(114,46,112,114)
, bytes2word(105,109,67,111)
, bytes2word(112,121,86,101)
, bytes2word(99,116,111,114)
,	/* ST_v280: (byte 2) */
  bytes2word(67,0,78,72)
, bytes2word(67,46,86,101)
, bytes2word(99,116,111,114)
, bytes2word(46,112,114,105)
, bytes2word(109,67,111,112)
, bytes2word(121,86,101,99)
, bytes2word(116,111,114,67)
,	/* ST_v276: (byte 2) */
  bytes2word(35,0,78,72)
, bytes2word(67,46,86,101)
, bytes2word(99,116,111,114)
, bytes2word(46,112,114,105)
, bytes2word(109,78,101,119)
, bytes2word(86,101,99,116)
,	/* ST_v274: (byte 4) */
  bytes2word(111,114,67,0)
, bytes2word(78,72,67,46)
, bytes2word(86,101,99,116)
, bytes2word(111,114,46,112)
, bytes2word(114,105,109,78)
, bytes2word(101,119,86,101)
, bytes2word(99,116,111,114)
,	/* ST_v264: (byte 3) */
  bytes2word(67,35,0,78)
, bytes2word(72,67,46,86)
, bytes2word(101,99,116,111)
, bytes2word(114,46,112,114)
, bytes2word(105,109,85,112)
, bytes2word(100,97,116,101)
, bytes2word(86,101,99,116)
,	/* ST_v262: (byte 4) */
  bytes2word(111,114,67,0)
, bytes2word(78,72,67,46)
, bytes2word(86,101,99,116)
, bytes2word(111,114,46,112)
, bytes2word(114,105,109,85)
, bytes2word(112,100,97,116)
, bytes2word(101,86,101,99)
, bytes2word(116,111,114,67)
,	/* ST_v270: (byte 2) */
  bytes2word(35,0,78,72)
, bytes2word(67,46,86,101)
, bytes2word(99,116,111,114)
, bytes2word(46,112,114,105)
, bytes2word(109,86,101,99)
, bytes2word(116,111,114,73)
, bytes2word(110,100,101,120)
,	/* ST_v268: (byte 2) */
  bytes2word(67,0,78,72)
, bytes2word(67,46,86,101)
, bytes2word(99,116,111,114)
, bytes2word(46,112,114,105)
, bytes2word(109,86,101,99)
, bytes2word(116,111,114,73)
, bytes2word(110,100,101,120)
,	/* ST_v266: (byte 3) */
  bytes2word(67,35,0,78)
, bytes2word(72,67,46,86)
, bytes2word(101,99,116,111)
, bytes2word(114,46,117,112)
, bytes2word(100,97,116,101)
, bytes2word(0,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primUpdateVectorC" NHC.Vector.primUpdateVectorC# 3 :: Prelude.Int -> NHC.Vector._E -> Prelude.Vector -> Prelude.() */
extern void primUpdateVectorC(HsInt,Node*,Node*);
#ifdef PROFILE
static SInfo pf_NHC_46Vector_46primUpdateVectorC_35 = {"NHC.Vector","NHC.Vector.primUpdateVectorC#","Prelude.()"};
#endif
C_HEADER(FR_NHC_46Vector_46primUpdateVectorC_35) {
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
  INIT_PROFINFO(nodeptr,&pf_NHC_46Vector_46primUpdateVectorC_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primVectorIndexC" NHC.Vector.primVectorIndexC# 2 :: Prelude.Vector -> Prelude.Int -> 1 */
extern Node* primVectorIndexC(Node*,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46Vector_46primVectorIndexC_35 = {"NHC.Vector","NHC.Vector.primVectorIndexC#","1"};
#endif
C_HEADER(FR_NHC_46Vector_46primVectorIndexC_35) {
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
  INIT_PROFINFO(nodeptr,&pf_NHC_46Vector_46primVectorIndexC_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primNewVectorC" NHC.Vector.primNewVectorC# 2 :: Prelude.Int -> NHC.Vector._E -> Prelude.Vector */
extern Node* primNewVectorC(HsInt,Node*);
#ifdef PROFILE
static SInfo pf_NHC_46Vector_46primNewVectorC_35 = {"NHC.Vector","NHC.Vector.primNewVectorC#","Prelude.Vector"};
#endif
C_HEADER(FR_NHC_46Vector_46primNewVectorC_35) {
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
  INIT_PROFINFO(nodeptr,&pf_NHC_46Vector_46primNewVectorC_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primCopyVectorC" NHC.Vector.primCopyVectorC# 1 :: Prelude.Vector -> Prelude.Vector */
extern Node* primCopyVectorC(Node*);
#ifdef PROFILE
static SInfo pf_NHC_46Vector_46primCopyVectorC_35 = {"NHC.Vector","NHC.Vector.primCopyVectorC#","Prelude.Vector"};
#endif
C_HEADER(FR_NHC_46Vector_46primCopyVectorC_35) {
  NodePtr nodeptr;
  Node* result;
  Node* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (Node*)nodeptr;

  result = primCopyVectorC(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NHC_46Vector_46primCopyVectorC_35);
  C_RETURN(nodeptr);
}
