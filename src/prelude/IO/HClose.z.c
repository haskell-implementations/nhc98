#include "newmacros.h"
#include "runtime.h"

#define CT_v194	((void*)startLabel+32)
#define FN_IO_46hCloseC_35	((void*)startLabel+56)
#define CT_v196	((void*)startLabel+84)
#define F0_IO_46hCloseC_35	((void*)startLabel+92)
#define CT_v198	((void*)startLabel+128)
#define ST_v193	((void*)startLabel+148)
#define ST_v197	((void*)startLabel+158)
#define ST_v195	((void*)startLabel+169)
extern Node TM_IO[];
extern Node FN_NHC_46FFI_46freeForeignObj[];
void FR_IO_46hCloseC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v194)
,};
Node FN_IO_46hClose[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v193)
,	/* CT_v194: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46hClose[] = {
  CAPTAG(useLabel(FN_IO_46hClose),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46freeForeignObj))
, bytes2word(1,0,0,1)
, useLabel(CT_v196)
,	/* FN_IO_46hCloseC_35: (byte 0) */
  useLabel(TM_IO)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46hCloseC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v195)
,	/* CT_v196: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46hCloseC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hCloseC_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v198)
,};
Node FN_IO_46hCloseC[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v197)
,	/* CT_v198: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_IO_46hCloseC[] = {
  VAPTAG(useLabel(FN_IO_46hCloseC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_IO_46hCloseC_35)
,	/* ST_v193: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(67,108,111,115)
,	/* ST_v197: (byte 2) */
  bytes2word(101,0,73,79)
, bytes2word(46,104,67,108)
, bytes2word(111,115,101,67)
,	/* ST_v195: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,67,108,111)
, bytes2word(115,101,67,35)
, bytes2word(0,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hCloseC" IO.hCloseC# 1 :: FFI.ForeignObj -> Prelude.() */
extern void hCloseC(void*);
#ifdef PROFILE
static SInfo pf_IO_46hCloseC_35 = {"IO","IO.hCloseC#","Prelude.()"};
#endif
C_HEADER(FR_IO_46hCloseC_35) {
  NodePtr nodeptr;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  hCloseC(arg1);

  nodeptr = nhc_mkUnit();
  INIT_PROFINFO(nodeptr,&pf_IO_46hCloseC_35);
  C_RETURN(nodeptr);
}
