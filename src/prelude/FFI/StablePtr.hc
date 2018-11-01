#include "newmacros.h"
#include "runtime.h"

#define CT_v384	((void*)startLabel+24)
#define CT_v385	((void*)startLabel+68)
#define CT_v386	((void*)startLabel+116)
#define CT_v387	((void*)startLabel+160)
#define FN_LAMBDA382	((void*)startLabel+196)
#define CT_v388	((void*)startLabel+212)
#define F0_LAMBDA382	((void*)startLabel+220)
#define CT_v389	((void*)startLabel+256)
#define CT_v390	((void*)startLabel+296)
#define CT_v391	((void*)startLabel+332)
#define CT_v392	((void*)startLabel+380)
#define CT_v393	((void*)startLabel+424)
#define CT_v394	((void*)startLabel+472)
#define CT_v395	((void*)startLabel+516)
#define FN_NHC_46FFI_46freeStablePtr_35	((void*)startLabel+544)
#define CT_v396	((void*)startLabel+560)
#define F0_NHC_46FFI_46freeStablePtr_35	((void*)startLabel+568)
#define CT_v397	((void*)startLabel+592)
#define FN_NHC_46FFI_46deRefStablePtr_35	((void*)startLabel+620)
#define CT_v398	((void*)startLabel+636)
#define F0_NHC_46FFI_46deRefStablePtr_35	((void*)startLabel+644)
#define CT_v399	((void*)startLabel+668)
#define FN_NHC_46FFI_46newStablePtr_35	((void*)startLabel+696)
#define CT_v400	((void*)startLabel+712)
#define F0_NHC_46FFI_46newStablePtr_35	((void*)startLabel+720)
#define CT_v401	((void*)startLabel+744)
#define CT_v402	((void*)startLabel+808)
void FR_NHC_46FFI_46castStablePtrToPtr(void);
extern Node FN_NHC_46FFI_46castPtr[];
extern Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46poke[];
void FR_NHC_46FFI_46castPtrToStablePtr(void);
extern Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46peek[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46const[];
extern Node FN_NHC_46FFI_46_95_46destruct[];
extern Node CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr[];
extern Node FN_NHC_46FFI_46_95_46pokeByteOff[];
extern Node FN_NHC_46FFI_46_95_46peekByteOff[];
extern Node FN_NHC_46FFI_46_95_46pokeElemOff[];
extern Node FN_NHC_46FFI_46_95_46peekElemOff[];
void FR_NHC_46FFI_46freeStablePtr_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
void FR_NHC_46FFI_46deRefStablePtr_35(void);
void FR_NHC_46FFI_46newStablePtr_35(void);

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v384)
,};
Node FN_NHC_46FFI_46castStablePtrToPtr[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46castStablePtrToPtr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v384: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46castStablePtrToPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46castStablePtrToPtr),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v385)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v385: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46castPtr))
, VAPTAG(useLabel(FN_NHC_46FFI_46castStablePtrToPtr))
, VAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46poke))
, bytes2word(1,0,0,1)
, useLabel(CT_v386)
,};
Node FN_NHC_46FFI_46castPtrToStablePtr[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46castPtrToStablePtr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v386: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46castPtrToStablePtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46castPtrToStablePtr),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v387)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v387: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46castPtr))
, VAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46peek))
, CAPTAG(useLabel(FN_LAMBDA382),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v388)
,	/* FN_LAMBDA382: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v388: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA382: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA382),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46castPtrToStablePtr))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v389)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46alignment[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_INT_P1)
, bytes2word(4,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v389: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46alignment[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46alignment),1)
, VAPTAG(useLabel(FN_Prelude_46const))
, bytes2word(1,0,0,1)
, useLabel(CT_v390)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46sizeOf[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_INT_P1)
, bytes2word(4,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v390: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46sizeOf[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46sizeOf),1)
, VAPTAG(useLabel(FN_Prelude_46const))
, bytes2word(1,0,0,1)
, useLabel(CT_v391)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46destruct[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v391: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46destruct[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46destruct),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46destruct))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v392)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeByteOff[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v392: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeByteOff[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeByteOff),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46pokeByteOff))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v393)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekByteOff[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v393: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekByteOff[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekByteOff),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46peekByteOff))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v394)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeElemOff[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v394: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeElemOff[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeElemOff),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46pokeElemOff))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v395)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekElemOff[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v395: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekElemOff[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekElemOff),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46peekElemOff))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
, bytes2word(1,0,0,1)
, useLabel(CT_v396)
,	/* FN_NHC_46FFI_46freeStablePtr_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46freeStablePtr_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v396: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46freeStablePtr_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46freeStablePtr_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v397)
,};
Node FN_NHC_46FFI_46freeStablePtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v397: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46FFI_46freeStablePtr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46freeStablePtr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46FFI_46freeStablePtr_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v398)
,	/* FN_NHC_46FFI_46deRefStablePtr_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46deRefStablePtr_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v398: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46deRefStablePtr_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46deRefStablePtr_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v399)
,};
Node FN_NHC_46FFI_46deRefStablePtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v399: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46FFI_46deRefStablePtr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46deRefStablePtr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46FFI_46deRefStablePtr_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v400)
,	/* FN_NHC_46FFI_46newStablePtr_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46newStablePtr_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v400: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46newStablePtr_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46newStablePtr_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v401)
,};
Node FN_NHC_46FFI_46newStablePtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v401: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46FFI_46newStablePtr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46newStablePtr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46FFI_46newStablePtr_35)
, bytes2word(0,0,0,0)
, useLabel(CT_v402)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
,	/* CT_v402: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr))
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46sizeOf)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeByteOff)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekByteOff)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeElemOff)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekElemOff)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46destruct)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46alignment)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import cast "castStablePtrToPtr" NHC.FFI.castStablePtrToPtr 1 :: FFI.StablePtr -> FFI.Ptr */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46castStablePtrToPtr = {"NHC.FFI","NHC.FFI.castStablePtrToPtr","FFI.Ptr"};
#endif
C_HEADER(FR_NHC_46FFI_46castStablePtrToPtr) {
  NodePtr nodeptr;
  void* result;
  StablePtr arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (StablePtr)GET_INT_VALUE(nodeptr);

  result = (void*)(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46castStablePtrToPtr);
  C_RETURN(nodeptr);
}

/* foreign import cast "castPtrToStablePtr" NHC.FFI.castPtrToStablePtr 1 :: FFI.Ptr -> FFI.StablePtr */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46castPtrToStablePtr = {"NHC.FFI","NHC.FFI.castPtrToStablePtr","FFI.StablePtr"};
#endif
C_HEADER(FR_NHC_46FFI_46castPtrToStablePtr) {
  NodePtr nodeptr;
  StablePtr result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = (StablePtr)(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46castPtrToStablePtr);
  C_RETURN(nodeptr);
}

/* foreign import ccall "freeStablePtr" NHC.FFI.freeStablePtr# 1 :: FFI.StablePtr -> Prelude.() */
extern void freeStablePtr(StablePtr);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46freeStablePtr_35 = {"NHC.FFI","NHC.FFI.freeStablePtr#","Prelude.()"};
#endif
C_HEADER(FR_NHC_46FFI_46freeStablePtr_35) {
  NodePtr nodeptr;
  StablePtr arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (StablePtr)GET_INT_VALUE(nodeptr);

  freeStablePtr(arg1);

  nodeptr = nhc_mkUnit();
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46freeStablePtr_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "derefStablePtr" NHC.FFI.deRefStablePtr# 1 :: FFI.StablePtr -> 1 */
extern Node* derefStablePtr(StablePtr);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46deRefStablePtr_35 = {"NHC.FFI","NHC.FFI.deRefStablePtr#","1"};
#endif
C_HEADER(FR_NHC_46FFI_46deRefStablePtr_35) {
  NodePtr nodeptr;
  Node* result;
  StablePtr arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (StablePtr)GET_INT_VALUE(nodeptr);

  result = derefStablePtr(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46deRefStablePtr_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "makeStablePtr" NHC.FFI.newStablePtr# 1 :: 1 -> FFI.StablePtr */
extern StablePtr makeStablePtr(Node*);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46newStablePtr_35 = {"NHC.FFI","NHC.FFI.newStablePtr#","FFI.StablePtr"};
#endif
C_HEADER(FR_NHC_46FFI_46newStablePtr_35) {
  NodePtr nodeptr;
  StablePtr result;
  Node* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (Node*)nodeptr;

  result = makeStablePtr(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46newStablePtr_35);
  C_RETURN(nodeptr);
}
