#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46primHFileSizeC_35	((void*)startLabel+8)
#define CT_v225	((void*)startLabel+24)
#define F0_IO_46primHFileSizeC_35	((void*)startLabel+32)
#define FN_IO_46primHFileSizeC	((void*)startLabel+44)
#define CT_v226	((void*)startLabel+56)
#define CF_IO_46primHFileSizeC	((void*)startLabel+64)
#define CT_v227	((void*)startLabel+108)
#define FN_LAMBDA223	((void*)startLabel+148)
#define v228	((void*)startLabel+170)
#define CT_v230	((void*)startLabel+192)
#define F0_LAMBDA223	((void*)startLabel+200)
#define FN_LAMBDA222	((void*)startLabel+236)
#define CT_v231	((void*)startLabel+268)
#define F0_LAMBDA222	((void*)startLabel+276)
#define FN_LAMBDA221	((void*)startLabel+296)
#define CT_v233	((void*)startLabel+316)
#define CF_LAMBDA221	((void*)startLabel+324)
#define ST_v232	((void*)startLabel+328)
void FR_IO_46primHFileSizeC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Integer_46_61_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v225)
,	/* FN_IO_46primHFileSizeC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46primHFileSizeC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v225: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46primHFileSizeC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46primHFileSizeC_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v226)
,	/* FN_IO_46primHFileSizeC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v226: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46primHFileSizeC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46primHFileSizeC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_IO_46primHFileSizeC_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v227)
,};
Node FN_IO_46hFileSize[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v227: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_IO_46hFileSize[] = {
  CAPTAG(useLabel(FN_IO_46hFileSize),1)
, VAPTAG(useLabel(FN_IO_46primHFileSizeC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA223),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v230)
,	/* FN_LAMBDA223: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CADR_N1,2,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,12,0)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_OFF_N1)
,	/* v228: (byte 2) */
  bytes2word(4,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,1)
, 1
,	/* CT_v230: (byte 0) */
  HW(5,2)
, 0
,	/* F0_LAMBDA223: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA223),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer_46_61_61))
, CAPTAG(useLabel(FN_LAMBDA222),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v231)
,	/* FN_LAMBDA222: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
,	/* CT_v231: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA222: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA222),2)
, VAPTAG(useLabel(FN_LAMBDA221))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v233)
,	/* FN_LAMBDA221: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v232)
,	/* CT_v233: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA221: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA221))
,	/* ST_v232: (byte 0) */
  bytes2word(104,70,105,108)
, bytes2word(101,83,105,122)
, bytes2word(101,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primHFileSizeC" IO.primHFileSizeC# 1 :: FFI.ForeignObj -> Prelude.Integer */
extern Node* primHFileSizeC(void*);
#ifdef PROFILE
static SInfo pf_IO_46primHFileSizeC_35 = {"IO","IO.primHFileSizeC#","Prelude.Integer"};
#endif
C_HEADER(FR_IO_46primHFileSizeC_35) {
  NodePtr nodeptr;
  Node* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = primHFileSizeC(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_IO_46primHFileSizeC_35);
  C_RETURN(nodeptr);
}
