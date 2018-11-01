#include "newmacros.h"
#include "runtime.h"

#define CT_v234	((void*)startLabel+36)
#define CT_v235	((void*)startLabel+76)
#define CT_v236	((void*)startLabel+124)
#define FN_NHC_46FFI_46reallyFreeForeignObj	((void*)startLabel+148)
#define CT_v237	((void*)startLabel+164)
#define F0_NHC_46FFI_46reallyFreeForeignObj	((void*)startLabel+172)
#define CT_v238	((void*)startLabel+200)
#define FN_NHC_46FFI_46primForeignObjC_35	((void*)startLabel+232)
#define CT_v239	((void*)startLabel+252)
#define F0_NHC_46FFI_46primForeignObjC_35	((void*)startLabel+260)
#define FN_NHC_46FFI_46primForeignObjC	((void*)startLabel+272)
#define CT_v240	((void*)startLabel+284)
#define CF_NHC_46FFI_46primForeignObjC	((void*)startLabel+292)
#define CT_v241	((void*)startLabel+352)
#define CT_v242	((void*)startLabel+392)
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
void FR_NHC_46FFI_46foreignObjToAddr(void);
extern void *reallyFreeForeignObj();
extern Node FN_NHC_46Internal_46_95mkIOok1[];
void FR_NHC_46FFI_46primForeignObjC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_NHC_46Internal_46unsafePerformIO[];

static Node startLabel[] = {
  42
, bytes2word(1,0,0,1)
, useLabel(CT_v234)
,};
Node FN_NHC_46FFI_46touchForeignObj[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v234: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46FFI_46touchForeignObj[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46touchForeignObj),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v235)
,};
Node FN_NHC_46FFI_46foreignObjToAddr[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46foreignObjToAddr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v235: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46foreignObjToAddr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46foreignObjToAddr),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v236)
,};
Node FN_NHC_46FFI_46withForeignObj[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_P1,0,PUSH_ARG_I2)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v236: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46FFI_46withForeignObj[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46withForeignObj),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46foreignObjToAddr))
, bytes2word(1,0,0,1)
, useLabel(CT_v237)
,	/* FN_NHC_46FFI_46reallyFreeForeignObj: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(reallyFreeForeignObj)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v237: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46reallyFreeForeignObj: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46reallyFreeForeignObj),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v238)
,};
Node FN_NHC_46FFI_46freeForeignObj[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v238: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_NHC_46FFI_46freeForeignObj[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46freeForeignObj),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46FFI_46reallyFreeForeignObj)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v239)
,	/* FN_NHC_46FFI_46primForeignObjC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primForeignObjC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v239: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primForeignObjC_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primForeignObjC_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v240)
,	/* FN_NHC_46FFI_46primForeignObjC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v240: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46FFI_46primForeignObjC: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46FFI_46primForeignObjC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_NHC_46FFI_46primForeignObjC_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v241)
,};
Node FN_NHC_46FFI_46makeForeignObj[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
, bytes2word(3,PUSH_P1,0,PUSH_ARG_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v241: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46FFI_46makeForeignObj[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46makeForeignObj),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46unsafePerformIO))
, VAPTAG(useLabel(FN_NHC_46FFI_46primForeignObjC))
, bytes2word(0,0,0,0)
, useLabel(CT_v242)
,};
Node FN_NHC_46FFI_46newForeignObj[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v242: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46FFI_46newForeignObj[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46newForeignObj))
, useLabel(F0_NHC_46FFI_46makeForeignObj)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import cast "foreignObjToAddr" NHC.FFI.foreignObjToAddr 1 :: FFI.ForeignObj -> FFI.Addr */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46foreignObjToAddr = {"NHC.FFI","NHC.FFI.foreignObjToAddr","FFI.Addr"};
#endif
C_HEADER(FR_NHC_46FFI_46foreignObjToAddr) {
  NodePtr nodeptr;
  void* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = (void*)(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46foreignObjToAddr);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primForeignObjC" NHC.FFI.primForeignObjC# 2 :: FFI.Addr -> 1 -> FFI.ForeignObj */
extern void* primForeignObjC(void*,Node*);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primForeignObjC_35 = {"NHC.FFI","NHC.FFI.primForeignObjC#","FFI.ForeignObj"};
#endif
C_HEADER(FR_NHC_46FFI_46primForeignObjC_35) {
  NodePtr nodeptr;
  void* result;
  void* arg1;
  Node* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (Node*)nodeptr;

  result = primForeignObjC(arg1,arg2);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primForeignObjC_35);
  C_RETURN(nodeptr);
}
