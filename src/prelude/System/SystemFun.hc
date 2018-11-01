#include "newmacros.h"
#include "runtime.h"

#define FN_System_46primSystem_35	((void*)startLabel+8)
#define CT_v244	((void*)startLabel+24)
#define F0_System_46primSystem_35	((void*)startLabel+32)
#define CT_v245	((void*)startLabel+56)
#define CT_v246	((void*)startLabel+112)
#define FN_LAMBDA242	((void*)startLabel+156)
#define v247	((void*)startLabel+189)
#define v249	((void*)startLabel+207)
#define CT_v251	((void*)startLabel+232)
#define F0_LAMBDA242	((void*)startLabel+240)
#define FN_LAMBDA241	((void*)startLabel+280)
#define CT_v252	((void*)startLabel+324)
#define F0_LAMBDA241	((void*)startLabel+332)
#define FN_LAMBDA240	((void*)startLabel+360)
#define CT_v254	((void*)startLabel+380)
#define CF_LAMBDA240	((void*)startLabel+388)
#define FN_LAMBDA239	((void*)startLabel+400)
#define CT_v256	((void*)startLabel+420)
#define CF_LAMBDA239	((void*)startLabel+428)
#define ST_v253	((void*)startLabel+432)
#define ST_v255	((void*)startLabel+434)
void FR_System_46primSystem_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Int_46_61_61[];
extern Node FN_Prelude_46_124_124[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v244)
,	/* FN_System_46primSystem_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46primSystem_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v244: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46primSystem_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46primSystem_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v245)
,};
Node FN_System_46primSystem[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v245: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46primSystem[] = {
  VAPTAG(useLabel(FN_System_46primSystem))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46primSystem_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v246)
,};
Node FN_System_46system[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v246: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_System_46system[] = {
  CAPTAG(useLabel(FN_System_46system),1)
, VAPTAG(useLabel(FN_System_46primSystem))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA242),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v251)
,	/* FN_LAMBDA242: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_INT_N1,1,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_INT_P1,127,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(13,0,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,4)
,	/* v247: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_INT_P1,0,PUSH_ARG_I2)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,EQ_W)
, bytes2word(JUMPFALSE,10,0,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,8)
,	/* v249: (byte 3) */
  bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,HEAP_CVAL_N1)
, bytes2word(2,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
,	/* CT_v251: (byte 0) */
  HW(6,2)
, 0
,	/* F0_LAMBDA242: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA242),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Int_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
, CAPTAG(useLabel(FN_LAMBDA241),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v252)
,	/* FN_LAMBDA241: (byte 0) */
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
,	/* CT_v252: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA241: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA241),2)
, VAPTAG(useLabel(FN_LAMBDA239))
, VAPTAG(useLabel(FN_LAMBDA240))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v254)
,	/* FN_LAMBDA240: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v253)
,	/* CT_v254: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA240: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA240))
, bytes2word(0,0,0,0)
, useLabel(CT_v256)
,	/* FN_LAMBDA239: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v255)
,	/* CT_v256: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA239: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA239))
,	/* ST_v253: (byte 0) */
 	/* ST_v255: (byte 2) */
  bytes2word(34,0,115,121)
, bytes2word(115,116,101,109)
, bytes2word(32,34,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "system" System.primSystem# 1 :: PackedString.PackedString -> Prelude.Int */
extern HsInt system(char*);
#ifdef PROFILE
static SInfo pf_System_46primSystem_35 = {"System","System.primSystem#","Prelude.Int"};
#endif
C_HEADER(FR_System_46primSystem_35) {
  NodePtr nodeptr;
  HsInt result;
  char* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);

  result = system(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46primSystem_35);
  C_RETURN(nodeptr);
}
