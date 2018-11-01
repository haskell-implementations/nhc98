#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46IOExtras_46unblockFinalisers_35	((void*)startLabel+8)
#define CT_v222	((void*)startLabel+36)
#define F0_NHC_46IOExtras_46unblockFinalisers_35	((void*)startLabel+44)
#define FN_NHC_46IOExtras_46unblockFinalisers	((void*)startLabel+56)
#define CT_v224	((void*)startLabel+80)
#define CF_NHC_46IOExtras_46unblockFinalisers	((void*)startLabel+88)
#define FN_NHC_46IOExtras_46blockFinalisers_35	((void*)startLabel+108)
#define CT_v226	((void*)startLabel+136)
#define F0_NHC_46IOExtras_46blockFinalisers_35	((void*)startLabel+144)
#define FN_NHC_46IOExtras_46blockFinalisers	((void*)startLabel+156)
#define CT_v228	((void*)startLabel+180)
#define CF_NHC_46IOExtras_46blockFinalisers	((void*)startLabel+188)
#define CT_v230	((void*)startLabel+240)
#define FN_LAMBDA219	((void*)startLabel+276)
#define CT_v232	((void*)startLabel+304)
#define F0_LAMBDA219	((void*)startLabel+312)
#define ST_v227	((void*)startLabel+328)
#define ST_v225	((void*)startLabel+357)
#define ST_v229	((void*)startLabel+387)
#define ST_v231	((void*)startLabel+418)
#define ST_v223	((void*)startLabel+459)
#define ST_v221	((void*)startLabel+490)
extern Node TM_NHC_46IOExtras[];
void FR_NHC_46IOExtras_46unblockFinalisers_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];
void FR_NHC_46IOExtras_46blockFinalisers_35(void);
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node TMSUB_NHC_46IOExtras[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v222)
,	/* FN_NHC_46IOExtras_46unblockFinalisers_35: (byte 0) */
  useLabel(TM_NHC_46IOExtras)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46IOExtras_46unblockFinalisers_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v221)
,	/* CT_v222: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46IOExtras_46unblockFinalisers_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46IOExtras_46unblockFinalisers_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v224)
,	/* FN_NHC_46IOExtras_46unblockFinalisers: (byte 0) */
  useLabel(TM_NHC_46IOExtras)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v223)
,	/* CT_v224: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46IOExtras_46unblockFinalisers: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46IOExtras_46unblockFinalisers))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_NHC_46IOExtras_46unblockFinalisers_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v226)
,	/* FN_NHC_46IOExtras_46blockFinalisers_35: (byte 0) */
  useLabel(TM_NHC_46IOExtras)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46IOExtras_46blockFinalisers_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v225)
,	/* CT_v226: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46IOExtras_46blockFinalisers_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46IOExtras_46blockFinalisers_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v228)
,	/* FN_NHC_46IOExtras_46blockFinalisers: (byte 0) */
  useLabel(TM_NHC_46IOExtras)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v227)
,	/* CT_v228: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46IOExtras_46blockFinalisers: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46IOExtras_46blockFinalisers))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_NHC_46IOExtras_46blockFinalisers_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v230)
,};
Node FN_NHC_46IOExtras_46excludeFinalisers[] = {
  useLabel(TM_NHC_46IOExtras)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v229)
,	/* CT_v230: (byte 0) */
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
, useLabel(CT_v232)
,	/* FN_LAMBDA219: (byte 0) */
  useLabel(TMSUB_NHC_46IOExtras)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 60010
, useLabel(ST_v231)
,	/* CT_v232: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA219: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA219),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, useLabel(CF_NHC_46IOExtras_46unblockFinalisers)
,	/* ST_v227: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,98,108,111)
, bytes2word(99,107,70,105)
, bytes2word(110,97,108,105)
, bytes2word(115,101,114,115)
,	/* ST_v225: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,73,79,69)
, bytes2word(120,116,114,97)
, bytes2word(115,46,98,108)
, bytes2word(111,99,107,70)
, bytes2word(105,110,97,108)
, bytes2word(105,115,101,114)
,	/* ST_v229: (byte 3) */
  bytes2word(115,35,0,78)
, bytes2word(72,67,46,73)
, bytes2word(79,69,120,116)
, bytes2word(114,97,115,46)
, bytes2word(101,120,99,108)
, bytes2word(117,100,101,70)
, bytes2word(105,110,97,108)
, bytes2word(105,115,101,114)
,	/* ST_v231: (byte 2) */
  bytes2word(115,0,78,72)
, bytes2word(67,46,73,79)
, bytes2word(69,120,116,114)
, bytes2word(97,115,46,101)
, bytes2word(120,99,108,117)
, bytes2word(100,101,70,105)
, bytes2word(110,97,108,105)
, bytes2word(115,101,114,115)
, bytes2word(58,54,58,49)
, bytes2word(48,45,54,58)
,	/* ST_v223: (byte 3) */
  bytes2word(49,53,0,78)
, bytes2word(72,67,46,73)
, bytes2word(79,69,120,116)
, bytes2word(114,97,115,46)
, bytes2word(117,110,98,108)
, bytes2word(111,99,107,70)
, bytes2word(105,110,97,108)
, bytes2word(105,115,101,114)
,	/* ST_v221: (byte 2) */
  bytes2word(115,0,78,72)
, bytes2word(67,46,73,79)
, bytes2word(69,120,116,114)
, bytes2word(97,115,46,117)
, bytes2word(110,98,108,111)
, bytes2word(99,107,70,105)
, bytes2word(110,97,108,105)
, bytes2word(115,101,114,115)
, bytes2word(35,0,0,0)
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
