#include "newmacros.h"
#include "runtime.h"

#define FN_System_46primGetEnv_35	((void*)startLabel+8)
#define CT_v230	((void*)startLabel+24)
#define F0_System_46primGetEnv_35	((void*)startLabel+32)
#define CT_v231	((void*)startLabel+56)
#define CT_v232	((void*)startLabel+100)
#define CT_v233	((void*)startLabel+148)
#define FN_LAMBDA228	((void*)startLabel+192)
#define v234	((void*)startLabel+214)
#define CT_v236	((void*)startLabel+236)
#define F0_LAMBDA228	((void*)startLabel+244)
#define FN_LAMBDA227	((void*)startLabel+292)
#define CT_v237	((void*)startLabel+336)
#define F0_LAMBDA227	((void*)startLabel+344)
#define FN_LAMBDA226	((void*)startLabel+372)
#define CT_v239	((void*)startLabel+392)
#define CF_LAMBDA226	((void*)startLabel+400)
#define FN_LAMBDA225	((void*)startLabel+412)
#define CT_v241	((void*)startLabel+432)
#define CF_LAMBDA225	((void*)startLabel+440)
#define ST_v238	((void*)startLabel+444)
#define ST_v240	((void*)startLabel+446)
void FR_System_46primGetEnv_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
void FR_System_46ptrToString(void);
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[];
extern Node CF_NHC_46FFI_46nullPtr[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_CString_46fromCString[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v230)
,	/* FN_System_46primGetEnv_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46primGetEnv_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v230: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46primGetEnv_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46primGetEnv_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v231)
,};
Node FN_System_46primGetEnv[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v231: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46primGetEnv[] = {
  VAPTAG(useLabel(FN_System_46primGetEnv))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46primGetEnv_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v232)
,};
Node FN_System_46ptrToString[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46ptrToString)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v232: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_System_46ptrToString[] = {
  CAPTAG(useLabel(FN_System_46ptrToString),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v233)
,};
Node FN_System_46getEnv[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v233: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_System_46getEnv[] = {
  CAPTAG(useLabel(FN_System_46getEnv),1)
, VAPTAG(useLabel(FN_System_46primGetEnv))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA228),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v236)
,	/* FN_LAMBDA228: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,13,0,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_OFF_N1)
,	/* v234: (byte 2) */
  bytes2word(4,RETURN_EVAL,HEAP_CVAL_P1,8)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v236: (byte 0) */
  HW(8,2)
, 0
,	/* F0_LAMBDA228: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA228),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61))
, useLabel(CF_NHC_46FFI_46nullPtr)
, CAPTAG(useLabel(FN_LAMBDA227),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_System_46ptrToString))
, VAPTAG(useLabel(FN_CString_46fromCString))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v237)
,	/* FN_LAMBDA227: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_N1,1,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v237: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA227: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA227),2)
, VAPTAG(useLabel(FN_LAMBDA225))
, VAPTAG(useLabel(FN_LAMBDA226))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v239)
,	/* FN_LAMBDA226: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v238)
,	/* CT_v239: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA226: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA226))
, bytes2word(0,0,0,0)
, useLabel(CT_v241)
,	/* FN_LAMBDA225: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v240)
,	/* CT_v241: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA225: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA225))
,	/* ST_v238: (byte 0) */
 	/* ST_v240: (byte 2) */
  bytes2word(34,0,103,101)
, bytes2word(116,69,110,118)
, bytes2word(32,34,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primGetEnv" System.primGetEnv# 1 :: PackedString.PackedString -> FFI.Ptr */
extern void* primGetEnv(char*);
#ifdef PROFILE
static SInfo pf_System_46primGetEnv_35 = {"System","System.primGetEnv#","FFI.Ptr"};
#endif
C_HEADER(FR_System_46primGetEnv_35) {
  NodePtr nodeptr;
  void* result;
  char* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);

  result = primGetEnv(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_System_46primGetEnv_35);
  C_RETURN(nodeptr);
}

/* foreign import cast "ptrToString" System.ptrToString 1 :: FFI.Ptr -> PackedString.PackedString */
#ifdef PROFILE
static SInfo pf_System_46ptrToString = {"System","System.ptrToString","PackedString.PackedString"};
#endif
C_HEADER(FR_System_46ptrToString) {
  NodePtr nodeptr;
  char* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = (char*)(arg1);

  nodeptr = nhc_mkString((char*)result);
  INIT_PROFINFO(nodeptr,&pf_System_46ptrToString);
  C_RETURN(nodeptr);
}
