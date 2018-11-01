#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hSetBufferingC_35	((void*)startLabel+12)
#define CT_v237	((void*)startLabel+44)
#define F0_IO_46hSetBufferingC_35	((void*)startLabel+52)
#define FN_IO_46hSetBufferingC	((void*)startLabel+64)
#define CT_v239	((void*)startLabel+88)
#define CF_IO_46hSetBufferingC	((void*)startLabel+96)
#define CT_v241	((void*)startLabel+160)
#define FN_LAMBDA234	((void*)startLabel+200)
#define v242	((void*)startLabel+224)
#define CT_v245	((void*)startLabel+252)
#define F0_LAMBDA234	((void*)startLabel+260)
#define FN_LAMBDA233	((void*)startLabel+292)
#define CT_v247	((void*)startLabel+344)
#define F0_LAMBDA233	((void*)startLabel+352)
#define FN_LAMBDA232	((void*)startLabel+380)
#define CT_v250	((void*)startLabel+412)
#define CF_LAMBDA232	((void*)startLabel+420)
#define ST_v240	((void*)startLabel+424)
#define ST_v244	((void*)startLabel+441)
#define ST_v246	((void*)startLabel+470)
#define ST_v248	((void*)startLabel+499)
#define ST_v238	((void*)startLabel+528)
#define ST_v236	((void*)startLabel+546)
#define ST_v249	((void*)startLabel+565)
extern Node TM_IO[];
void FR_IO_46hSetBufferingC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_IO[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Show_46IO_46BufferMode_46show[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v237)
,	/* FN_IO_46hSetBufferingC_35: (byte 0) */
  useLabel(TM_IO)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_IO_46hSetBufferingC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v236)
,	/* CT_v237: (byte 0) */
  HW(0,2)
, 0
,	/* F0_IO_46hSetBufferingC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hSetBufferingC_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v239)
,	/* FN_IO_46hSetBufferingC: (byte 0) */
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v238)
,	/* CT_v239: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46hSetBufferingC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46hSetBufferingC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_IO_46hSetBufferingC_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v241)
,};
Node FN_IO_46hSetBuffering[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG_ARG,2,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v240)
,	/* CT_v241: (byte 0) */
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
, useLabel(CT_v245)
,	/* FN_LAMBDA234: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,NE_W,JUMPFALSE)
, bytes2word(12,0,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
,	/* v242: (byte 4) */
  bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 120010
, useLabel(ST_v244)
,	/* CT_v245: (byte 0) */
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
, useLabel(CT_v247)
,	/* FN_LAMBDA233: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_IN3,HEAP_CVAL_N1)
, bytes2word(4,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_ARG,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
, 140018
, useLabel(ST_v246)
,	/* CT_v247: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA233: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA233),3)
, VAPTAG(useLabel(FN_LAMBDA232))
, VAPTAG(useLabel(FN_Prelude_46Show_46IO_46BufferMode_46show))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v250)
,	/* FN_LAMBDA232: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v249)
, 150023
, useLabel(ST_v248)
,	/* CT_v250: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA232: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA232))
,	/* ST_v240: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(83,101,116,66)
, bytes2word(117,102,102,101)
, bytes2word(114,105,110,103)
,	/* ST_v244: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,83,101,116)
, bytes2word(66,117,102,102)
, bytes2word(101,114,105,110)
, bytes2word(103,58,49,50)
, bytes2word(58,49,48,45)
, bytes2word(49,50,58,50)
,	/* ST_v246: (byte 2) */
  bytes2word(55,0,73,79)
, bytes2word(46,104,83,101)
, bytes2word(116,66,117,102)
, bytes2word(102,101,114,105)
, bytes2word(110,103,58,49)
, bytes2word(52,58,49,56)
, bytes2word(45,49,52,58)
,	/* ST_v248: (byte 3) */
  bytes2word(50,53,0,73)
, bytes2word(79,46,104,83)
, bytes2word(101,116,66,117)
, bytes2word(102,102,101,114)
, bytes2word(105,110,103,58)
, bytes2word(49,53,58,50)
, bytes2word(51,45,49,53)
,	/* ST_v238: (byte 4) */
  bytes2word(58,51,56,0)
, bytes2word(73,79,46,104)
, bytes2word(83,101,116,66)
, bytes2word(117,102,102,101)
, bytes2word(114,105,110,103)
,	/* ST_v236: (byte 2) */
  bytes2word(67,0,73,79)
, bytes2word(46,104,83,101)
, bytes2word(116,66,117,102)
, bytes2word(102,101,114,105)
, bytes2word(110,103,67,35)
,	/* ST_v249: (byte 1) */
  bytes2word(0,104,83,101)
, bytes2word(116,66,117,102)
, bytes2word(102,101,114,105)
, bytes2word(110,103,32,0)
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
