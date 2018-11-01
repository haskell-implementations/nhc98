#include "newmacros.h"
#include "runtime.h"

#define CT_v309	((void*)startLabel+56)
#define CT_v311	((void*)startLabel+120)
#define FN_NHC_46FFI_46getErrNo_35	((void*)startLabel+148)
#define CT_v313	((void*)startLabel+176)
#define F0_NHC_46FFI_46getErrNo_35	((void*)startLabel+184)
#define CT_v315	((void*)startLabel+220)
#define ST_v314	((void*)startLabel+240)
#define ST_v312	((void*)startLabel+257)
#define ST_v308	((void*)startLabel+275)
#define ST_v310	((void*)startLabel+293)
extern Node TM_NHC_46FFI[];
extern Node FN_Prelude_46Enum_46NHC_46DErrNo_46ErrNo_46toEnum[];
extern Node FN_Prelude_46ioError[];
void FR_NHC_46FFI_46getErrNo_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v309)
,};
Node FN_NHC_46FFI_46mkIOError[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_OFF_N1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
, 140001
, useLabel(ST_v308)
,	/* CT_v309: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_NHC_46FFI_46mkIOError[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46mkIOError),4)
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46DErrNo_46ErrNo_46toEnum))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v311)
,};
Node FN_NHC_46FFI_46throwIOError[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 170001
, useLabel(ST_v310)
,	/* CT_v311: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_NHC_46FFI_46throwIOError[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46throwIOError),4)
, VAPTAG(useLabel(FN_NHC_46FFI_46mkIOError))
, VAPTAG(useLabel(FN_Prelude_46ioError))
, bytes2word(1,0,0,1)
, useLabel(CT_v313)
,	/* FN_NHC_46FFI_46getErrNo_35: (byte 0) */
  useLabel(TM_NHC_46FFI)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46getErrNo_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v312)
,	/* CT_v313: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46getErrNo_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46getErrNo_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v315)
,};
Node FN_NHC_46FFI_46getErrNo[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v314)
,	/* CT_v315: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46FFI_46getErrNo[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46getErrNo))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_NHC_46FFI_46getErrNo_35)
,	/* ST_v314: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(103,101,116,69)
, bytes2word(114,114,78,111)
,	/* ST_v312: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,103,101,116)
, bytes2word(69,114,114,78)
,	/* ST_v308: (byte 3) */
  bytes2word(111,35,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,109)
, bytes2word(107,73,79,69)
, bytes2word(114,114,111,114)
,	/* ST_v310: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,116,104,114)
, bytes2word(111,119,73,79)
, bytes2word(69,114,114,111)
, bytes2word(114,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "getErrNo" NHC.FFI.getErrNo# 1 :: Prelude.() -> Prelude.Int */
extern HsInt getErrNo(void);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46getErrNo_35 = {"NHC.FFI","NHC.FFI.getErrNo#","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46FFI_46getErrNo_35) {
  NodePtr nodeptr;
  HsInt result;
  /* void arg1 */;

  result = getErrNo();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46getErrNo_35);
  C_RETURN(nodeptr);
}
