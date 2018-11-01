#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hSetPosnC_35	((void*)startLabel+12)
#define CT_v231	((void*)startLabel+32)
#define F0_IO_46hSetPosnC_35	((void*)startLabel+40)
#define FN_IO_46hSetPosnC	((void*)startLabel+52)
#define CT_v232	((void*)startLabel+64)
#define CF_IO_46hSetPosnC	((void*)startLabel+72)
#define CT_v236	((void*)startLabel+124)
#define FN_LAMBDA229	((void*)startLabel+164)
#define v237	((void*)startLabel+183)
#define CT_v239	((void*)startLabel+204)
#define F0_LAMBDA229	((void*)startLabel+212)
#define FN_LAMBDA228	((void*)startLabel+244)
#define CT_v240	((void*)startLabel+276)
#define F0_LAMBDA228	((void*)startLabel+284)
#define FN_LAMBDA227	((void*)startLabel+304)
#define CT_v242	((void*)startLabel+324)
#define CF_LAMBDA227	((void*)startLabel+332)
#define ST_v241	((void*)startLabel+336)
void FR_IO_46hSetPosnC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v231)
,	/* FN_IO_46hSetPosnC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_IO_46hSetPosnC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v231: (byte 0) */
  HW(0,2)
, 0
,	/* F0_IO_46hSetPosnC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hSetPosnC_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v232)
,	/* FN_IO_46hSetPosnC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v232: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46hSetPosnC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46hSetPosnC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_IO_46hSetPosnC_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v236)
,};
Node FN_IO_46hSetPosn[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_P1,0)
, bytes2word(HEAP_I1,HEAP_CVAL_I5,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v236: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_IO_46hSetPosn[] = {
  CAPTAG(useLabel(FN_IO_46hSetPosn),1)
, VAPTAG(useLabel(FN_IO_46hSetPosnC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA229),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v239)
,	/* FN_LAMBDA229: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,NE_W,JUMPFALSE)
, bytes2word(11,0,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
,	/* v237: (byte 3) */
  bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v239: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA229: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA229),2)
, CAPTAG(useLabel(FN_LAMBDA228),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v240)
,	/* FN_LAMBDA228: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
,	/* CT_v240: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA228: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA228),2)
, VAPTAG(useLabel(FN_LAMBDA227))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v242)
,	/* FN_LAMBDA227: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v241)
,	/* CT_v242: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA227: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA227))
,	/* ST_v241: (byte 0) */
  bytes2word(104,83,101,116)
, bytes2word(80,111,115,110)
, bytes2word(0,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hSetPosnC" IO.hSetPosnC# 2 :: FFI.ForeignObj -> FFI.ForeignPtr -> Prelude.Int */
extern HsInt hSetPosnC(void*,void*);
#ifdef PROFILE
static SInfo pf_IO_46hSetPosnC_35 = {"IO","IO.hSetPosnC#","Prelude.Int"};
#endif
C_HEADER(FR_IO_46hSetPosnC_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  void* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hSetPosnC(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_IO_46hSetPosnC_35);
  C_RETURN(nodeptr);
}
