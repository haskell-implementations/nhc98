#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hGetPosnC_35	((void*)startLabel+8)
#define CT_v250	((void*)startLabel+36)
#define F0_IO_46hGetPosnC_35	((void*)startLabel+44)
#define FN_IO_46hGetPosnC	((void*)startLabel+56)
#define CT_v252	((void*)startLabel+80)
#define CF_IO_46hGetPosnC	((void*)startLabel+88)
#define CT_v254	((void*)startLabel+144)
#define FN_LAMBDA247	((void*)startLabel+184)
#define v255	((void*)startLabel+210)
#define CT_v258	((void*)startLabel+248)
#define F0_LAMBDA247	((void*)startLabel+256)
#define FN_LAMBDA246	((void*)startLabel+308)
#define CT_v260	((void*)startLabel+344)
#define F0_LAMBDA246	((void*)startLabel+352)
#define FN_LAMBDA245	((void*)startLabel+372)
#define CT_v262	((void*)startLabel+416)
#define F0_LAMBDA245	((void*)startLabel+424)
#define FN_LAMBDA244	((void*)startLabel+444)
#define CT_v265	((void*)startLabel+476)
#define CF_LAMBDA244	((void*)startLabel+484)
#define ST_v253	((void*)startLabel+488)
#define ST_v257	((void*)startLabel+500)
#define ST_v261	((void*)startLabel+524)
#define ST_v263	((void*)startLabel+548)
#define ST_v259	((void*)startLabel+572)
#define ST_v251	((void*)startLabel+596)
#define ST_v249	((void*)startLabel+609)
#define ST_v264	((void*)startLabel+623)
extern Node TM_IO[];
void FR_IO_46hGetPosnC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_IO[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[];
extern Node CF_NHC_46FFI_46nullPtr[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_NHC_46FFI_46newForeignPtr[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node CF_NHC_46FFI_46finalizerFree[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v250)
,	/* FN_IO_46hGetPosnC_35: (byte 0) */
  useLabel(TM_IO)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46hGetPosnC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v249)
,	/* CT_v250: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46hGetPosnC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hGetPosnC_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v252)
,	/* FN_IO_46hGetPosnC: (byte 0) */
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v251)
,	/* CT_v252: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46hGetPosnC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46hGetPosnC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_IO_46hGetPosnC_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v254)
,};
Node FN_IO_46hGetPosn[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v253)
,	/* CT_v254: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_IO_46hGetPosn[] = {
  CAPTAG(useLabel(FN_IO_46hGetPosn),1)
, VAPTAG(useLabel(FN_IO_46hGetPosnC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA247),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v258)
,	/* FN_LAMBDA247: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,13,0,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_OFF_N1)
,	/* v255: (byte 2) */
  bytes2word(4,RETURN_EVAL,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,2)
, bytes2word(HEAP_CVAL_P1,10,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,11,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110010
, useLabel(ST_v257)
,	/* CT_v258: (byte 0) */
  HW(9,2)
, 0
,	/* F0_LAMBDA247: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA247),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61))
, useLabel(CF_NHC_46FFI_46nullPtr)
, CAPTAG(useLabel(FN_LAMBDA245),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_NHC_46FFI_46newForeignPtr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, useLabel(CF_NHC_46FFI_46finalizerFree)
, CAPTAG(useLabel(FN_LAMBDA246),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v260)
,	/* FN_LAMBDA246: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 160014
, useLabel(ST_v259)
,	/* CT_v260: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA246: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA246),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v262)
,	/* FN_LAMBDA245: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_IN3,HEAP_CVAL_N1)
, bytes2word(4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
, 130018
, useLabel(ST_v261)
,	/* CT_v262: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA245: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA245),2)
, VAPTAG(useLabel(FN_LAMBDA244))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v265)
,	/* FN_LAMBDA244: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v264)
, 140022
, useLabel(ST_v263)
,	/* CT_v265: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA244: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA244))
,	/* ST_v253: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(71,101,116,80)
,	/* ST_v257: (byte 4) */
  bytes2word(111,115,110,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,80)
, bytes2word(111,115,110,58)
, bytes2word(49,49,58,49)
, bytes2word(48,45,49,49)
,	/* ST_v261: (byte 4) */
  bytes2word(58,50,48,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,80)
, bytes2word(111,115,110,58)
, bytes2word(49,51,58,49)
, bytes2word(56,45,49,51)
,	/* ST_v263: (byte 4) */
  bytes2word(58,50,53,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,80)
, bytes2word(111,115,110,58)
, bytes2word(49,52,58,50)
, bytes2word(50,45,49,52)
,	/* ST_v259: (byte 4) */
  bytes2word(58,51,49,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,80)
, bytes2word(111,115,110,58)
, bytes2word(49,54,58,49)
, bytes2word(52,45,49,54)
,	/* ST_v251: (byte 4) */
  bytes2word(58,52,50,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,80)
, bytes2word(111,115,110,67)
,	/* ST_v249: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,71,101,116)
, bytes2word(80,111,115,110)
,	/* ST_v264: (byte 3) */
  bytes2word(67,35,0,104)
, bytes2word(71,101,116,80)
, bytes2word(111,115,110,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hGetPosnC" IO.hGetPosnC# 1 :: FFI.ForeignObj -> FFI.Ptr */
extern void* hGetPosnC(void*);
#ifdef PROFILE
static SInfo pf_IO_46hGetPosnC_35 = {"IO","IO.hGetPosnC#","FFI.Ptr"};
#endif
C_HEADER(FR_IO_46hGetPosnC_35) {
  NodePtr nodeptr;
  void* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hGetPosnC(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_IO_46hGetPosnC_35);
  C_RETURN(nodeptr);
}
