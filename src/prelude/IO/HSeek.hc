#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hSeekC_35	((void*)startLabel+12)
#define CT_v249	((void*)startLabel+36)
#define F0_IO_46hSeekC_35	((void*)startLabel+44)
#define FN_IO_46hSeekC	((void*)startLabel+56)
#define CT_v250	((void*)startLabel+68)
#define CF_IO_46hSeekC	((void*)startLabel+76)
#define CT_v251	((void*)startLabel+136)
#define FN_LAMBDA247	((void*)startLabel+184)
#define v252	((void*)startLabel+207)
#define CT_v254	((void*)startLabel+228)
#define F0_LAMBDA247	((void*)startLabel+236)
#define FN_LAMBDA246	((void*)startLabel+272)
#define CT_v255	((void*)startLabel+332)
#define F0_LAMBDA246	((void*)startLabel+340)
#define FN_LAMBDA245	((void*)startLabel+376)
#define CT_v257	((void*)startLabel+396)
#define CF_LAMBDA245	((void*)startLabel+404)
#define FN_LAMBDA244	((void*)startLabel+416)
#define CT_v259	((void*)startLabel+436)
#define CF_LAMBDA244	((void*)startLabel+444)
#define ST_v256	((void*)startLabel+448)
#define ST_v258	((void*)startLabel+450)
void FR_IO_46hSeekC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
extern Node FN_Prelude_46Enum_46IO_46SeekMode_46fromEnum[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Show_46IO_46SeekMode_46show[];
extern Node FN_Prelude_46Show_46Prelude_46Integer_46show[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v249)
,	/* FN_IO_46hSeekC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_IO_46hSeekC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v249: (byte 0) */
  HW(0,3)
, 0
,	/* F0_IO_46hSeekC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hSeekC_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v250)
,	/* FN_IO_46hSeekC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v250: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46hSeekC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46hSeekC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_IO_46hSeekC_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v251)
,};
Node FN_IO_46hSeek[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,5)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v251: (byte 0) */
  HW(5,3)
, 0
,};
Node F0_IO_46hSeek[] = {
  CAPTAG(useLabel(FN_IO_46hSeek),3)
, VAPTAG(useLabel(FN_IO_46hSeekC))
, VAPTAG(useLabel(FN_Prelude_46Enum_46IO_46SeekMode_46fromEnum))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, CAPTAG(useLabel(FN_LAMBDA247),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v254)
,	/* FN_LAMBDA247: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ZAP_ARG)
, bytes2word(4,EVAL,NEEDHEAP_I32,NE_W)
, bytes2word(JUMPFALSE,14,0,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
,	/* v252: (byte 3) */
  bytes2word(HEAP_OFF_N1,6,RETURN_EVAL,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v254: (byte 0) */
  HW(4,4)
, 0
,	/* F0_LAMBDA247: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA247),4)
, CAPTAG(useLabel(FN_LAMBDA246),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v255)
,	/* FN_LAMBDA246: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,9)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_N1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
,	/* CT_v255: (byte 0) */
  HW(6,4)
, 0
,	/* F0_LAMBDA246: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA246),4)
, VAPTAG(useLabel(FN_LAMBDA244))
, VAPTAG(useLabel(FN_Prelude_46Show_46IO_46SeekMode_46show))
, VAPTAG(useLabel(FN_LAMBDA245))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Integer_46show))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v257)
,	/* FN_LAMBDA245: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v256)
,	/* CT_v257: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA245: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA245))
, bytes2word(0,0,0,0)
, useLabel(CT_v259)
,	/* FN_LAMBDA244: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v258)
,	/* CT_v259: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA244: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA244))
,	/* ST_v256: (byte 0) */
 	/* ST_v258: (byte 2) */
  bytes2word(32,0,104,83)
, bytes2word(101,101,107,32)
, bytes2word(0,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hSeekC" IO.hSeekC# 3 :: FFI.ForeignObj -> Prelude.Int -> Prelude.Integer -> Prelude.Int */
extern HsInt hSeekC(void*,HsInt,Node*);
#ifdef PROFILE
static SInfo pf_IO_46hSeekC_35 = {"IO","IO.hSeekC#","Prelude.Int"};
#endif
C_HEADER(FR_IO_46hSeekC_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  HsInt arg2;
  Node* arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (Node*)nodeptr;

  result = hSeekC(arg1,arg2,arg3);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_IO_46hSeekC_35);
  C_RETURN(nodeptr);
}
