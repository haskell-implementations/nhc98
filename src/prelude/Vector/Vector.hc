#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Vector_46primUpdateVectorC_35	((void*)startLabel+12)
#define CT_v262	((void*)startLabel+36)
#define F0_NHC_46Vector_46primUpdateVectorC_35	((void*)startLabel+44)
#define FN_NHC_46Vector_46primUpdateVectorC	((void*)startLabel+56)
#define CT_v263	((void*)startLabel+68)
#define CF_NHC_46Vector_46primUpdateVectorC	((void*)startLabel+76)
#define CT_v264	((void*)startLabel+136)
#define FN_NHC_46Vector_46primVectorIndexC_35	((void*)startLabel+164)
#define CT_v265	((void*)startLabel+184)
#define F0_NHC_46Vector_46primVectorIndexC_35	((void*)startLabel+192)
#define FN_NHC_46Vector_46primVectorIndexC	((void*)startLabel+204)
#define CT_v266	((void*)startLabel+216)
#define CF_NHC_46Vector_46primVectorIndexC	((void*)startLabel+224)
#define CT_v267	((void*)startLabel+256)
#define FN_NHC_46Vector_46primNewVectorC_35	((void*)startLabel+284)
#define CT_v268	((void*)startLabel+304)
#define F0_NHC_46Vector_46primNewVectorC_35	((void*)startLabel+312)
#define FN_NHC_46Vector_46primNewVectorC	((void*)startLabel+324)
#define CT_v269	((void*)startLabel+336)
#define CF_NHC_46Vector_46primNewVectorC	((void*)startLabel+344)
#define CT_v270	((void*)startLabel+404)
#define FN_NHC_46Vector_46primCopyVectorC_35	((void*)startLabel+428)
#define CT_v271	((void*)startLabel+444)
#define F0_NHC_46Vector_46primCopyVectorC_35	((void*)startLabel+452)
#define FN_NHC_46Vector_46primCopyVectorC	((void*)startLabel+464)
#define CT_v272	((void*)startLabel+476)
#define CF_NHC_46Vector_46primCopyVectorC	((void*)startLabel+484)
#define CT_v273	((void*)startLabel+516)
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
, useLabel(CT_v262)
,	/* FN_NHC_46Vector_46primUpdateVectorC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46Vector_46primUpdateVectorC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v262: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46Vector_46primUpdateVectorC_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Vector_46primUpdateVectorC_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v263)
,	/* FN_NHC_46Vector_46primUpdateVectorC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v263: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Vector_46primUpdateVectorC: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Vector_46primUpdateVectorC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46Vector_46primUpdateVectorC_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v264)
,};
Node FN_NHC_46Vector_46update[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,3,PUSH_ARG_I1,PUSH_I1)
, bytes2word(PUSH_ARG_I2,PUSH_HEAP,HEAP_CVAL_I3,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1,4)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v264: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_NHC_46Vector_46update[] = {
  CAPTAG(useLabel(FN_NHC_46Vector_46update),3)
, VAPTAG(useLabel(FN_NHC_46Vector_46primUpdateVectorC))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v265)
,	/* FN_NHC_46Vector_46primVectorIndexC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46Vector_46primVectorIndexC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v265: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46Vector_46primVectorIndexC_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Vector_46primVectorIndexC_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v266)
,	/* FN_NHC_46Vector_46primVectorIndexC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v266: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Vector_46primVectorIndexC: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Vector_46primVectorIndexC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_NHC_46Vector_46primVectorIndexC_35)
, bytes2word(0,0,0,0)
, useLabel(CT_v267)
,};
Node FN_NHC_46Vector_46_33[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v267: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46Vector_46_33[] = {
  VAPTAG(useLabel(FN_NHC_46Vector_46_33))
, useLabel(CF_NHC_46Vector_46primVectorIndexC)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v268)
,	/* FN_NHC_46Vector_46primNewVectorC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46Vector_46primNewVectorC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v268: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46Vector_46primNewVectorC_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Vector_46primNewVectorC_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v269)
,	/* FN_NHC_46Vector_46primNewVectorC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v269: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Vector_46primNewVectorC: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Vector_46primNewVectorC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_NHC_46Vector_46primNewVectorC_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v270)
,};
Node FN_NHC_46Vector_46new[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,2,PUSH_P1,0)
, bytes2word(PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I3,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_STACK_P1,3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v270: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46Vector_46new[] = {
  CAPTAG(useLabel(FN_NHC_46Vector_46new),2)
, VAPTAG(useLabel(FN_NHC_46Vector_46primNewVectorC))
, bytes2word(1,0,0,1)
, useLabel(CT_v271)
,	/* FN_NHC_46Vector_46primCopyVectorC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46Vector_46primCopyVectorC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v271: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Vector_46primCopyVectorC_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Vector_46primCopyVectorC_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v272)
,	/* FN_NHC_46Vector_46primCopyVectorC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v272: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Vector_46primCopyVectorC: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Vector_46primCopyVectorC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46Vector_46primCopyVectorC_35)
, bytes2word(0,0,0,0)
, useLabel(CT_v273)
,};
Node FN_NHC_46Vector_46copy[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v273: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46Vector_46copy[] = {
  VAPTAG(useLabel(FN_NHC_46Vector_46copy))
, useLabel(CF_NHC_46Vector_46primCopyVectorC)
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
