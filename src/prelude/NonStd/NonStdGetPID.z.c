#include "newmacros.h"
#include "runtime.h"

#define FN_NonStdGetPID_46getPID_35	((void*)startLabel+8)
#define CT_v184	((void*)startLabel+36)
#define F0_NonStdGetPID_46getPID_35	((void*)startLabel+44)
#define CT_v186	((void*)startLabel+80)
#define ST_v182	((void*)startLabel+100)
#define ST_v185	((void*)startLabel+113)
#define ST_v183	((void*)startLabel+133)
extern Node TM_NonStdGetPID[];
void FR_NonStdGetPID_46getPID_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v184)
,	/* FN_NonStdGetPID_46getPID_35: (byte 0) */
  useLabel(TM_NonStdGetPID)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NonStdGetPID_46getPID_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v183)
,	/* CT_v184: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NonStdGetPID_46getPID_35: (byte 0) */
  CAPTAG(useLabel(FN_NonStdGetPID_46getPID_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v186)
,};
Node FN_NonStdGetPID_46getPID[] = {
  useLabel(TM_NonStdGetPID)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v185)
,	/* CT_v186: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NonStdGetPID_46getPID[] = {
  VAPTAG(useLabel(FN_NonStdGetPID_46getPID))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_NonStdGetPID_46getPID_35)
,};
Node PM_NonStdGetPID[] = {
 	/* ST_v182: (byte 0) */
  bytes2word(78,111,110,83)
, bytes2word(116,100,71,101)
, bytes2word(116,80,73,68)
,	/* ST_v185: (byte 1) */
  bytes2word(0,78,111,110)
, bytes2word(83,116,100,71)
, bytes2word(101,116,80,73)
, bytes2word(68,46,103,101)
, bytes2word(116,80,73,68)
,	/* ST_v183: (byte 1) */
  bytes2word(0,78,111,110)
, bytes2word(83,116,100,71)
, bytes2word(101,116,80,73)
, bytes2word(68,46,103,101)
, bytes2word(116,80,73,68)
, bytes2word(35,0,0,0)
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
