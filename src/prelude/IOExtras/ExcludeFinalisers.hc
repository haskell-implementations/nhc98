#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46IOExtras_46unblockFinalisers_35	((void*)startLabel+8)
#define CT_v221	((void*)startLabel+24)
#define F0_NHC_46IOExtras_46unblockFinalisers_35	((void*)startLabel+32)
#define FN_NHC_46IOExtras_46unblockFinalisers	((void*)startLabel+44)
#define CT_v222	((void*)startLabel+56)
#define CF_NHC_46IOExtras_46unblockFinalisers	((void*)startLabel+64)
#define FN_NHC_46IOExtras_46blockFinalisers_35	((void*)startLabel+84)
#define CT_v223	((void*)startLabel+100)
#define F0_NHC_46IOExtras_46blockFinalisers_35	((void*)startLabel+108)
#define FN_NHC_46IOExtras_46blockFinalisers	((void*)startLabel+120)
#define CT_v224	((void*)startLabel+132)
#define CF_NHC_46IOExtras_46blockFinalisers	((void*)startLabel+140)
#define CT_v225	((void*)startLabel+180)
#define FN_LAMBDA219	((void*)startLabel+216)
#define CT_v226	((void*)startLabel+232)
#define F0_LAMBDA219	((void*)startLabel+240)
void FR_NHC_46IOExtras_46unblockFinalisers_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];
void FR_NHC_46IOExtras_46blockFinalisers_35(void);
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v221)
,	/* FN_NHC_46IOExtras_46unblockFinalisers_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46IOExtras_46unblockFinalisers_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v221: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46IOExtras_46unblockFinalisers_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46IOExtras_46unblockFinalisers_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v222)
,	/* FN_NHC_46IOExtras_46unblockFinalisers: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v222: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46IOExtras_46unblockFinalisers: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46IOExtras_46unblockFinalisers))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_NHC_46IOExtras_46unblockFinalisers_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v223)
,	/* FN_NHC_46IOExtras_46blockFinalisers_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46IOExtras_46blockFinalisers_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v223: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46IOExtras_46blockFinalisers_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46IOExtras_46blockFinalisers_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v224)
,	/* FN_NHC_46IOExtras_46blockFinalisers: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v224: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46IOExtras_46blockFinalisers: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46IOExtras_46blockFinalisers))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_NHC_46IOExtras_46blockFinalisers_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v225)
,};
Node FN_NHC_46IOExtras_46excludeFinalisers[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v225: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_NHC_46IOExtras_46excludeFinalisers[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46excludeFinalisers),1)
, CAPTAG(useLabel(FN_LAMBDA219),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, useLabel(CF_NHC_46IOExtras_46blockFinalisers)
, bytes2word(1,0,0,1)
, useLabel(CT_v226)
,	/* FN_LAMBDA219: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v226: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA219: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA219),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, useLabel(CF_NHC_46IOExtras_46unblockFinalisers)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "unblockFinalisers" NHC.IOExtras.unblockFinalisers# 1 :: Prelude.() -> 1 */
extern Node* unblockFinalisers(void);
#ifdef PROFILE
static SInfo pf_NHC_46IOExtras_46unblockFinalisers_35 = {"NHC.IOExtras","NHC.IOExtras.unblockFinalisers#","1"};
#endif
C_HEADER(FR_NHC_46IOExtras_46unblockFinalisers_35) {
  NodePtr nodeptr;
  Node* result;
  /* void arg1 */;

  result = unblockFinalisers();

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NHC_46IOExtras_46unblockFinalisers_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "blockFinalisers" NHC.IOExtras.blockFinalisers# 1 :: Prelude.() -> 1 */
extern Node* blockFinalisers(void);
#ifdef PROFILE
static SInfo pf_NHC_46IOExtras_46blockFinalisers_35 = {"NHC.IOExtras","NHC.IOExtras.blockFinalisers#","1"};
#endif
C_HEADER(FR_NHC_46IOExtras_46blockFinalisers_35) {
  NodePtr nodeptr;
  Node* result;
  /* void arg1 */;

  result = blockFinalisers();

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NHC_46IOExtras_46blockFinalisers_35);
  C_RETURN(nodeptr);
}
