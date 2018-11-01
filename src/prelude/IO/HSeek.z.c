#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hSeekC_35	((void*)startLabel+12)
#define CT_v250	((void*)startLabel+48)
#define F0_IO_46hSeekC_35	((void*)startLabel+56)
#define FN_IO_46hSeekC	((void*)startLabel+68)
#define CT_v252	((void*)startLabel+92)
#define CF_IO_46hSeekC	((void*)startLabel+100)
#define CT_v254	((void*)startLabel+172)
#define FN_LAMBDA247	((void*)startLabel+220)
#define v255	((void*)startLabel+247)
#define CT_v258	((void*)startLabel+276)
#define F0_LAMBDA247	((void*)startLabel+284)
#define FN_LAMBDA246	((void*)startLabel+320)
#define CT_v260	((void*)startLabel+392)
#define F0_LAMBDA246	((void*)startLabel+400)
#define FN_LAMBDA245	((void*)startLabel+436)
#define CT_v263	((void*)startLabel+468)
#define CF_LAMBDA245	((void*)startLabel+476)
#define FN_LAMBDA244	((void*)startLabel+488)
#define CT_v266	((void*)startLabel+520)
#define CF_LAMBDA244	((void*)startLabel+528)
#define ST_v262	((void*)startLabel+532)
#define ST_v253	((void*)startLabel+534)
#define ST_v257	((void*)startLabel+543)
#define ST_v259	((void*)startLabel+564)
#define ST_v264	((void*)startLabel+585)
#define ST_v261	((void*)startLabel+606)
#define ST_v251	((void*)startLabel+627)
#define ST_v249	((void*)startLabel+637)
#define ST_v265	((void*)startLabel+648)
extern Node TM_IO[];
void FR_IO_46hSeekC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
extern Node FN_Prelude_46Enum_46IO_46SeekMode_46fromEnum[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_IO[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Show_46IO_46SeekMode_46show[];
extern Node FN_Prelude_46Show_46Prelude_46Integer_46show[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v250)
,	/* FN_IO_46hSeekC_35: (byte 0) */
  useLabel(TM_IO)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_IO_46hSeekC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v249)
,	/* CT_v250: (byte 0) */
  HW(0,3)
, 0
,	/* F0_IO_46hSeekC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hSeekC_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v252)
,	/* FN_IO_46hSeekC: (byte 0) */
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v251)
,	/* CT_v252: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46hSeekC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46hSeekC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_IO_46hSeekC_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v254)
,};
Node FN_IO_46hSeek[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,5)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v253)
,	/* CT_v254: (byte 0) */
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
, useLabel(CT_v258)
,	/* FN_LAMBDA247: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ZAP_ARG)
, bytes2word(4,EVAL,NEEDHEAP_I32,NE_W)
, bytes2word(JUMPFALSE,14,0,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
,	/* v255: (byte 3) */
  bytes2word(HEAP_OFF_N1,6,RETURN_EVAL,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 120010
, useLabel(ST_v257)
,	/* CT_v258: (byte 0) */
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
, useLabel(CT_v260)
,	/* FN_LAMBDA246: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,9)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_IN3,HEAP_CVAL_N1,4,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_ARG,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
, 140018
, useLabel(ST_v259)
,	/* CT_v260: (byte 0) */
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
, useLabel(CT_v263)
,	/* FN_LAMBDA245: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v262)
, 150041
, useLabel(ST_v261)
,	/* CT_v263: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA245: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA245))
, bytes2word(0,0,0,0)
, useLabel(CT_v266)
,	/* FN_LAMBDA244: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v265)
, 150023
, useLabel(ST_v264)
,	/* CT_v266: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA244: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA244))
,	/* ST_v262: (byte 0) */
 	/* ST_v253: (byte 2) */
  bytes2word(32,0,73,79)
, bytes2word(46,104,83,101)
,	/* ST_v257: (byte 3) */
  bytes2word(101,107,0,73)
, bytes2word(79,46,104,83)
, bytes2word(101,101,107,58)
, bytes2word(49,50,58,49)
, bytes2word(48,45,49,50)
,	/* ST_v259: (byte 4) */
  bytes2word(58,51,50,0)
, bytes2word(73,79,46,104)
, bytes2word(83,101,101,107)
, bytes2word(58,49,52,58)
, bytes2word(49,56,45,49)
, bytes2word(52,58,50,53)
,	/* ST_v264: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,83,101,101)
, bytes2word(107,58,49,53)
, bytes2word(58,50,51,45)
, bytes2word(49,53,58,51)
,	/* ST_v261: (byte 2) */
  bytes2word(48,0,73,79)
, bytes2word(46,104,83,101)
, bytes2word(101,107,58,49)
, bytes2word(53,58,52,49)
, bytes2word(45,49,53,58)
,	/* ST_v251: (byte 3) */
  bytes2word(52,51,0,73)
, bytes2word(79,46,104,83)
, bytes2word(101,101,107,67)
,	/* ST_v249: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,83,101,101)
,	/* ST_v265: (byte 4) */
  bytes2word(107,67,35,0)
, bytes2word(104,83,101,101)
, bytes2word(107,32,0,0)
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
