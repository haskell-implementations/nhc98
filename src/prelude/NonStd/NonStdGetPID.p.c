#include "newmacros.h"
#include "runtime.h"

#define FN_NonStdGetPID_46getPID_35	((void*)startLabel+8)
#define CT_v185	((void*)startLabel+32)
#define F0_NonStdGetPID_46getPID_35	((void*)startLabel+40)
#define CT_v189	((void*)startLabel+120)
#define ST_v182	((void*)startLabel+156)
#define ST_v187	((void*)startLabel+172)
#define PP_NonStdGetPID_46getPID_35	((void*)startLabel+192)
#define PC_NonStdGetPID_46getPID_35	((void*)startLabel+192)
#define ST_v184	((void*)startLabel+192)
#define PS_v188	((void*)startLabel+216)
#define PS_v186	((void*)startLabel+228)
#define PS_v183	((void*)startLabel+240)
void FR_NonStdGetPID_46getPID_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];
extern Node PC_NHC_46Internal_46_95mkIOok0[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v185)
,	/* FN_NonStdGetPID_46getPID_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NonStdGetPID_46getPID_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v184)
,	/* CT_v185: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NonStdGetPID_46getPID_35: (byte 0) */
  CAPTAG(useLabel(FN_NonStdGetPID_46getPID_35),1)
, useLabel(PS_v183)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v189)
,};
Node FN_NonStdGetPID_46getPID[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v188)
, 0
, 0
, 0
, 0
, 50001
, useLabel(ST_v187)
,	/* CT_v189: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NonStdGetPID_46getPID[] = {
  VAPTAG(useLabel(FN_NonStdGetPID_46getPID))
, useLabel(PS_v186)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_NonStdGetPID_46getPID_35)
,};
Node PM_NonStdGetPID[] = {
 	/* ST_v182: (byte 0) */
  bytes2word(78,111,110,83)
, bytes2word(116,100,71,101)
, bytes2word(116,80,73,68)
, bytes2word(0,0,0,0)
,};
Node PP_NonStdGetPID_46getPID[] = {
 };
Node PC_NonStdGetPID_46getPID[] = {
 	/* ST_v187: (byte 0) */
  bytes2word(78,111,110,83)
, bytes2word(116,100,71,101)
, bytes2word(116,80,73,68)
, bytes2word(46,103,101,116)
,	/* PP_NonStdGetPID_46getPID_35: (byte 4) */
 	/* PC_NonStdGetPID_46getPID_35: (byte 4) */
 	/* ST_v184: (byte 4) */
  bytes2word(80,73,68,0)
, bytes2word(78,111,110,83)
, bytes2word(116,100,71,101)
, bytes2word(116,80,73,68)
, bytes2word(46,103,101,116)
, bytes2word(80,73,68,35)
, bytes2word(0,0,0,0)
,	/* PS_v188: (byte 0) */
  useLabel(PM_NonStdGetPID)
, useLabel(PP_NonStdGetPID_46getPID)
, useLabel(PC_NHC_46Internal_46_95mkIOok0)
,	/* PS_v186: (byte 0) */
  useLabel(PM_NonStdGetPID)
, useLabel(PP_NonStdGetPID_46getPID)
, useLabel(PC_NonStdGetPID_46getPID)
,	/* PS_v183: (byte 0) */
  useLabel(PM_NonStdGetPID)
, useLabel(PP_NonStdGetPID_46getPID_35)
, useLabel(PC_NonStdGetPID_46getPID_35)
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
