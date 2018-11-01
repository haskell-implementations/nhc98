#include "newmacros.h"
#include "runtime.h"

#define FN_NonStdGetPID_46getPID_35	((void*)startLabel+8)
#define CT_v183	((void*)startLabel+24)
#define F0_NonStdGetPID_46getPID_35	((void*)startLabel+32)
#define CT_v184	((void*)startLabel+56)
void FR_NonStdGetPID_46getPID_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v183)
,	/* FN_NonStdGetPID_46getPID_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NonStdGetPID_46getPID_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v183: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NonStdGetPID_46getPID_35: (byte 0) */
  CAPTAG(useLabel(FN_NonStdGetPID_46getPID_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v184)
,};
Node FN_NonStdGetPID_46getPID[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v184: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NonStdGetPID_46getPID[] = {
  VAPTAG(useLabel(FN_NonStdGetPID_46getPID))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_NonStdGetPID_46getPID_35)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_getPID" NonStdGetPID.getPID# 1 :: Prelude.() -> Prelude.Int */
extern HsInt hs_getPID(void);
#ifdef PROFILE
static SInfo pf_NonStdGetPID_46getPID_35 = {"NonStdGetPID","NonStdGetPID.getPID#","Prelude.Int"};
#endif
C_HEADER(FR_NonStdGetPID_46getPID_35) {
  NodePtr nodeptr;
  HsInt result;
  /* void arg1 */;

  result = hs_getPID();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NonStdGetPID_46getPID_35);
  C_RETURN(nodeptr);
}
