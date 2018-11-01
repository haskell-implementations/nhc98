#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hSetBufferingC_35	((void*)startLabel+12)
#define CT_v236	((void*)startLabel+32)
#define F0_IO_46hSetBufferingC_35	((void*)startLabel+40)
#define FN_IO_46hSetBufferingC	((void*)startLabel+52)
#define CT_v237	((void*)startLabel+64)
#define CF_IO_46hSetBufferingC	((void*)startLabel+72)
#define CT_v238	((void*)startLabel+124)
#define FN_LAMBDA234	((void*)startLabel+164)
#define v239	((void*)startLabel+184)
#define CT_v241	((void*)startLabel+208)
#define F0_LAMBDA234	((void*)startLabel+216)
#define FN_LAMBDA233	((void*)startLabel+248)
#define CT_v242	((void*)startLabel+292)
#define F0_LAMBDA233	((void*)startLabel+300)
#define FN_LAMBDA232	((void*)startLabel+328)
#define CT_v244	((void*)startLabel+348)
#define CF_LAMBDA232	((void*)startLabel+356)
#define ST_v243	((void*)startLabel+360)
void FR_IO_46hSetBufferingC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Show_46IO_46BufferMode_46show[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v236)
,	/* FN_IO_46hSetBufferingC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_IO_46hSetBufferingC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v236: (byte 0) */
  HW(0,2)
, 0
,	/* F0_IO_46hSetBufferingC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hSetBufferingC_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v237)
,	/* FN_IO_46hSetBufferingC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v237: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46hSetBufferingC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46hSetBufferingC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_IO_46hSetBufferingC_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v238)
,};
Node FN_IO_46hSetBuffering[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG_ARG,2,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v238: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_IO_46hSetBuffering[] = {
  CAPTAG(useLabel(FN_IO_46hSetBuffering),2)
, VAPTAG(useLabel(FN_IO_46hSetBufferingC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA234),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v241)
,	/* FN_LAMBDA234: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,NE_W,JUMPFALSE)
, bytes2word(12,0,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
,	/* v239: (byte 4) */
  bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(HEAP_CVAL_N1,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v241: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA234: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA234),3)
, CAPTAG(useLabel(FN_LAMBDA233),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v242)
,	/* FN_LAMBDA233: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
,	/* CT_v242: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA233: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA233),3)
, VAPTAG(useLabel(FN_LAMBDA232))
, VAPTAG(useLabel(FN_Prelude_46Show_46IO_46BufferMode_46show))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v244)
,	/* FN_LAMBDA232: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v243)
,	/* CT_v244: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA232: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA232))
,	/* ST_v243: (byte 0) */
  bytes2word(104,83,101,116)
, bytes2word(66,117,102,102)
, bytes2word(101,114,105,110)
, bytes2word(103,32,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hSetBufferingC" IO.hSetBufferingC# 2 :: FFI.ForeignObj -> IO.BufferMode -> Prelude.Int */
extern HsInt hSetBufferingC(void*,Node*);
#ifdef PROFILE
static SInfo pf_IO_46hSetBufferingC_35 = {"IO","IO.hSetBufferingC#","Prelude.Int"};
#endif
C_HEADER(FR_IO_46hSetBufferingC_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  Node* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (Node*)nodeptr;

  result = hSetBufferingC(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_IO_46hSetBufferingC_35);
  C_RETURN(nodeptr);
}
