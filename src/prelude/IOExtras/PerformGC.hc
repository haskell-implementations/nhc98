#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46IOExtras_46performGC_35	((void*)startLabel+8)
#define CT_v177	((void*)startLabel+24)
#define F0_NHC_46IOExtras_46performGC_35	((void*)startLabel+32)
#define CT_v178	((void*)startLabel+56)
void FR_NHC_46IOExtras_46performGC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v177)
,	/* FN_NHC_46IOExtras_46performGC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46IOExtras_46performGC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v177: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46IOExtras_46performGC_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46IOExtras_46performGC_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v178)
,};
Node FN_NHC_46IOExtras_46performGC[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v178: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46IOExtras_46performGC[] = {
  VAPTAG(useLabel(FN_NHC_46IOExtras_46performGC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_NHC_46IOExtras_46performGC_35)
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
