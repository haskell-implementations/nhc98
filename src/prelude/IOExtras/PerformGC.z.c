#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46IOExtras_46performGC_35	((void*)startLabel+8)
#define CT_v178	((void*)startLabel+36)
#define F0_NHC_46IOExtras_46performGC_35	((void*)startLabel+44)
#define CT_v180	((void*)startLabel+80)
#define ST_v179	((void*)startLabel+100)
#define ST_v177	((void*)startLabel+123)
extern Node TM_NHC_46IOExtras[];
void FR_NHC_46IOExtras_46performGC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v178)
,	/* FN_NHC_46IOExtras_46performGC_35: (byte 0) */
  useLabel(TM_NHC_46IOExtras)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46IOExtras_46performGC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v177)
,	/* CT_v178: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46IOExtras_46performGC_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46IOExtras_46performGC_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v180)
,};
Node FN_NHC_46IOExtras_46performGC[] = {
  useLabel(TM_NHC_46IOExtras)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v179)
,	/* CT_v180: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46IOExtras_46performGC[] = {
  VAPTAG(useLabel(FN_NHC_46IOExtras_46performGC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_NHC_46IOExtras_46performGC_35)
,	/* ST_v179: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,112,101,114)
, bytes2word(102,111,114,109)
,	/* ST_v177: (byte 3) */
  bytes2word(71,67,0,78)
, bytes2word(72,67,46,73)
, bytes2word(79,69,120,116)
, bytes2word(114,97,115,46)
, bytes2word(112,101,114,102)
, bytes2word(111,114,109,71)
, bytes2word(67,35,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "performGC" NHC.IOExtras.performGC# 1 :: Prelude.() -> Prelude.() */
extern void performGC(void);
#ifdef PROFILE
static SInfo pf_NHC_46IOExtras_46performGC_35 = {"NHC.IOExtras","NHC.IOExtras.performGC#","Prelude.()"};
#endif
C_HEADER(FR_NHC_46IOExtras_46performGC_35) {
  NodePtr nodeptr;
  /* void arg1 */;

  performGC();

  nodeptr = nhc_mkUnit();
  INIT_PROFINFO(nodeptr,&pf_NHC_46IOExtras_46performGC_35);
  C_RETURN(nodeptr);
}
