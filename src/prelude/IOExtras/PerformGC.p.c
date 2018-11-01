#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46IOExtras_46performGC_35	((void*)startLabel+8)
#define CT_v179	((void*)startLabel+32)
#define F0_NHC_46IOExtras_46performGC_35	((void*)startLabel+40)
#define CT_v183	((void*)startLabel+120)
#define ST_v181	((void*)startLabel+156)
#define PP_NHC_46IOExtras_46performGC_35	((void*)startLabel+179)
#define PC_NHC_46IOExtras_46performGC_35	((void*)startLabel+179)
#define ST_v178	((void*)startLabel+179)
#define PS_v182	((void*)startLabel+204)
#define PS_v180	((void*)startLabel+216)
#define PS_v177	((void*)startLabel+228)
void FR_NHC_46IOExtras_46performGC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];
extern Node PM_NHC_46IOExtras[];
extern Node PC_NHC_46Internal_46_95mkIOok0[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v179)
,	/* FN_NHC_46IOExtras_46performGC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46IOExtras_46performGC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v178)
,	/* CT_v179: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46IOExtras_46performGC_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46IOExtras_46performGC_35),1)
, useLabel(PS_v177)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v183)
,};
Node FN_NHC_46IOExtras_46performGC[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v182)
, 0
, 0
, 0
, 0
, 50001
, useLabel(ST_v181)
,	/* CT_v183: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46IOExtras_46performGC[] = {
  VAPTAG(useLabel(FN_NHC_46IOExtras_46performGC))
, useLabel(PS_v180)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_NHC_46IOExtras_46performGC_35)
,};
Node PP_NHC_46IOExtras_46performGC[] = {
 };
Node PC_NHC_46IOExtras_46performGC[] = {
 	/* ST_v181: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,112,101,114)
, bytes2word(102,111,114,109)
,	/* PP_NHC_46IOExtras_46performGC_35: (byte 3) */
 	/* PC_NHC_46IOExtras_46performGC_35: (byte 3) */
 	/* ST_v178: (byte 3) */
  bytes2word(71,67,0,78)
, bytes2word(72,67,46,73)
, bytes2word(79,69,120,116)
, bytes2word(114,97,115,46)
, bytes2word(112,101,114,102)
, bytes2word(111,114,109,71)
, bytes2word(67,35,0,0)
,	/* PS_v182: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46performGC)
, useLabel(PC_NHC_46Internal_46_95mkIOok0)
,	/* PS_v180: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46performGC)
, useLabel(PC_NHC_46IOExtras_46performGC)
,	/* PS_v177: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46performGC_35)
, useLabel(PC_NHC_46IOExtras_46performGC_35)
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
