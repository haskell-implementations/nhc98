#include "newmacros.h"
#include "runtime.h"

#define CT_v196	((void*)startLabel+60)
#define FN_IO_46hCloseC_35	((void*)startLabel+100)
#define CT_v199	((void*)startLabel+124)
#define F0_IO_46hCloseC_35	((void*)startLabel+132)
#define CT_v203	((void*)startLabel+212)
#define ST_v194	((void*)startLabel+248)
#define ST_v201	((void*)startLabel+260)
#define PP_IO_46hCloseC_35	((void*)startLabel+271)
#define PC_IO_46hCloseC_35	((void*)startLabel+271)
#define ST_v198	((void*)startLabel+271)
#define PS_v202	((void*)startLabel+284)
#define PS_v200	((void*)startLabel+296)
#define PS_v195	((void*)startLabel+308)
#define PS_v193	((void*)startLabel+320)
#define PS_v197	((void*)startLabel+332)
extern Node FN_NHC_46FFI_46freeForeignObj[];
void FR_IO_46hCloseC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node PM_IO[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];
extern Node PC_NHC_46FFI_46freeForeignObj[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v196)
,};
Node FN_IO_46hClose[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v194)
,	/* CT_v196: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46hClose[] = {
  CAPTAG(useLabel(FN_IO_46hClose),1)
, useLabel(PS_v193)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46FFI_46freeForeignObj))
, bytes2word(1,0,0,1)
, useLabel(CT_v199)
,	/* FN_IO_46hCloseC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46hCloseC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v198)
,	/* CT_v199: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46hCloseC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hCloseC_35),1)
, useLabel(PS_v197)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v203)
,};
Node FN_IO_46hCloseC[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v202)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v201)
,	/* CT_v203: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_IO_46hCloseC[] = {
  VAPTAG(useLabel(FN_IO_46hCloseC))
, useLabel(PS_v200)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_IO_46hCloseC_35)
,};
Node PP_IO_46hClose[] = {
 };
Node PC_IO_46hClose[] = {
 	/* ST_v194: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(67,108,111,115)
, bytes2word(101,0,0,0)
,};
Node PP_IO_46hCloseC[] = {
 };
Node PC_IO_46hCloseC[] = {
 	/* ST_v201: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(67,108,111,115)
,	/* PP_IO_46hCloseC_35: (byte 3) */
 	/* PC_IO_46hCloseC_35: (byte 3) */
 	/* ST_v198: (byte 3) */
  bytes2word(101,67,0,73)
, bytes2word(79,46,104,67)
, bytes2word(108,111,115,101)
, bytes2word(67,35,0,0)
,	/* PS_v202: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hCloseC)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v200: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hCloseC)
, useLabel(PC_IO_46hCloseC)
,	/* PS_v195: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hClose)
, useLabel(PC_NHC_46FFI_46freeForeignObj)
,	/* PS_v193: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hClose)
, useLabel(PC_IO_46hClose)
,	/* PS_v197: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hCloseC_35)
, useLabel(PC_IO_46hCloseC_35)
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
