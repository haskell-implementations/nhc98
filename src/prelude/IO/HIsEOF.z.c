#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hIsEOFC_35	((void*)startLabel+8)
#define CT_v191	((void*)startLabel+36)
#define F0_IO_46hIsEOFC_35	((void*)startLabel+44)
#define FN_IO_46hIsEOFC	((void*)startLabel+56)
#define CT_v193	((void*)startLabel+80)
#define CF_IO_46hIsEOFC	((void*)startLabel+88)
#define CT_v195	((void*)startLabel+136)
#define ST_v194	((void*)startLabel+152)
#define ST_v192	((void*)startLabel+162)
#define ST_v190	((void*)startLabel+173)
extern Node TM_IO[];
void FR_IO_46hIsEOFC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v191)
,	/* FN_IO_46hIsEOFC_35: (byte 0) */
  useLabel(TM_IO)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46hIsEOFC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v190)
,	/* CT_v191: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46hIsEOFC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hIsEOFC_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v193)
,	/* FN_IO_46hIsEOFC: (byte 0) */
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v192)
,	/* CT_v193: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46hIsEOFC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46hIsEOFC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_IO_46hIsEOFC_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v195)
,};
Node FN_IO_46hIsEOF[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v194)
,	/* CT_v195: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46hIsEOF[] = {
  CAPTAG(useLabel(FN_IO_46hIsEOF),1)
, VAPTAG(useLabel(FN_IO_46hIsEOFC))
,	/* ST_v194: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(73,115,69,79)
,	/* ST_v192: (byte 2) */
  bytes2word(70,0,73,79)
, bytes2word(46,104,73,115)
, bytes2word(69,79,70,67)
,	/* ST_v190: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,73,115,69)
, bytes2word(79,70,67,35)
, bytes2word(0,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hIsEOF" IO.hIsEOFC# 1 :: FFI.ForeignObj -> Prelude.Bool */
extern HsBool hIsEOF(void*);
#ifdef PROFILE
static SInfo pf_IO_46hIsEOFC_35 = {"IO","IO.hIsEOFC#","Prelude.Bool"};
#endif
C_HEADER(FR_IO_46hIsEOFC_35) {
  NodePtr nodeptr;
  HsBool result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hIsEOF(arg1);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_IO_46hIsEOFC_35);
  C_RETURN(nodeptr);
}
