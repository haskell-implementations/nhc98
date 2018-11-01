#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46IOExtras_46unblockFinalisers_35	((void*)startLabel+8)
#define CT_v223	((void*)startLabel+32)
#define F0_NHC_46IOExtras_46unblockFinalisers_35	((void*)startLabel+40)
#define FN_NHC_46IOExtras_46unblockFinalisers	((void*)startLabel+68)
#define CT_v227	((void*)startLabel+120)
#define CF_NHC_46IOExtras_46unblockFinalisers	((void*)startLabel+128)
#define FN_NHC_46IOExtras_46blockFinalisers_35	((void*)startLabel+164)
#define CT_v230	((void*)startLabel+188)
#define F0_NHC_46IOExtras_46blockFinalisers_35	((void*)startLabel+196)
#define FN_NHC_46IOExtras_46blockFinalisers	((void*)startLabel+224)
#define CT_v234	((void*)startLabel+276)
#define CF_NHC_46IOExtras_46blockFinalisers	((void*)startLabel+284)
#define CT_v240	((void*)startLabel+432)
#define FN_LAMBDA219	((void*)startLabel+484)
#define CT_v245	((void*)startLabel+560)
#define F0_LAMBDA219	((void*)startLabel+568)
#define PP_NHC_46IOExtras_46blockFinalisers	((void*)startLabel+600)
#define PC_NHC_46IOExtras_46blockFinalisers	((void*)startLabel+600)
#define ST_v232	((void*)startLabel+600)
#define PP_NHC_46IOExtras_46blockFinalisers_35	((void*)startLabel+629)
#define PC_NHC_46IOExtras_46blockFinalisers_35	((void*)startLabel+629)
#define ST_v229	((void*)startLabel+629)
#define ST_v236	((void*)startLabel+660)
#define PP_LAMBDA219	((void*)startLabel+691)
#define PC_LAMBDA219	((void*)startLabel+691)
#define ST_v242	((void*)startLabel+691)
#define PP_NHC_46IOExtras_46unblockFinalisers	((void*)startLabel+732)
#define PC_NHC_46IOExtras_46unblockFinalisers	((void*)startLabel+732)
#define ST_v225	((void*)startLabel+732)
#define PP_NHC_46IOExtras_46unblockFinalisers_35	((void*)startLabel+763)
#define PC_NHC_46IOExtras_46unblockFinalisers_35	((void*)startLabel+763)
#define ST_v222	((void*)startLabel+763)
#define PS_v235	((void*)startLabel+796)
#define PS_v239	((void*)startLabel+808)
#define PS_v238	((void*)startLabel+820)
#define PS_v237	((void*)startLabel+832)
#define PS_v233	((void*)startLabel+844)
#define PS_v231	((void*)startLabel+856)
#define PS_v226	((void*)startLabel+868)
#define PS_v224	((void*)startLabel+880)
#define PS_v228	((void*)startLabel+892)
#define PS_v221	((void*)startLabel+904)
#define PS_v244	((void*)startLabel+916)
#define PS_v243	((void*)startLabel+928)
#define PS_v241	((void*)startLabel+940)
void FR_NHC_46IOExtras_46unblockFinalisers_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];
void FR_NHC_46IOExtras_46blockFinalisers_35(void);
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PM_NHC_46IOExtras[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46Internal_46_95mkIOok0[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v223)
,	/* FN_NHC_46IOExtras_46unblockFinalisers_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46IOExtras_46unblockFinalisers_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v222)
,	/* CT_v223: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46IOExtras_46unblockFinalisers_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46IOExtras_46unblockFinalisers_35),1)
, useLabel(PS_v221)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v227)
,	/* FN_NHC_46IOExtras_46unblockFinalisers: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v226)
, 0
, 0
, 0
, 0
, 110001
, useLabel(ST_v225)
,	/* CT_v227: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46IOExtras_46unblockFinalisers: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46IOExtras_46unblockFinalisers))
, useLabel(PS_v224)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_NHC_46IOExtras_46unblockFinalisers_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v230)
,	/* FN_NHC_46IOExtras_46blockFinalisers_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46IOExtras_46blockFinalisers_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v229)
,	/* CT_v230: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46IOExtras_46blockFinalisers_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46IOExtras_46blockFinalisers_35),1)
, useLabel(PS_v228)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v234)
,	/* FN_NHC_46IOExtras_46blockFinalisers: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v233)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v232)
,	/* CT_v234: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46IOExtras_46blockFinalisers: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46IOExtras_46blockFinalisers))
, useLabel(PS_v231)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_NHC_46IOExtras_46blockFinalisers_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v240)
,};
Node FN_NHC_46IOExtras_46excludeFinalisers[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v239)
, 0
, 0
, 0
, 0
, useLabel(PS_v238)
, 0
, 0
, 0
, 0
, useLabel(PS_v237)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v236)
,	/* CT_v240: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_NHC_46IOExtras_46excludeFinalisers[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46excludeFinalisers),1)
, useLabel(PS_v235)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA219),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, useLabel(CF_NHC_46IOExtras_46blockFinalisers)
, bytes2word(1,0,0,1)
, useLabel(CT_v245)
,	/* FN_LAMBDA219: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v244)
, 0
, 0
, 0
, 0
, useLabel(PS_v243)
, 0
, 0
, 0
, 0
, 60010
, useLabel(ST_v242)
,	/* CT_v245: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA219: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA219),1)
, useLabel(PS_v241)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, useLabel(CF_NHC_46IOExtras_46unblockFinalisers)
,	/* PP_NHC_46IOExtras_46blockFinalisers: (byte 0) */
 	/* PC_NHC_46IOExtras_46blockFinalisers: (byte 0) */
 	/* ST_v232: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,98,108,111)
, bytes2word(99,107,70,105)
, bytes2word(110,97,108,105)
, bytes2word(115,101,114,115)
,	/* PP_NHC_46IOExtras_46blockFinalisers_35: (byte 1) */
 	/* PC_NHC_46IOExtras_46blockFinalisers_35: (byte 1) */
 	/* ST_v229: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,73,79,69)
, bytes2word(120,116,114,97)
, bytes2word(115,46,98,108)
, bytes2word(111,99,107,70)
, bytes2word(105,110,97,108)
, bytes2word(105,115,101,114)
, bytes2word(115,35,0,0)
,};
Node PP_NHC_46IOExtras_46excludeFinalisers[] = {
 };
Node PC_NHC_46IOExtras_46excludeFinalisers[] = {
 	/* ST_v236: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,101,120,99)
, bytes2word(108,117,100,101)
, bytes2word(70,105,110,97)
, bytes2word(108,105,115,101)
,	/* PP_LAMBDA219: (byte 3) */
 	/* PC_LAMBDA219: (byte 3) */
 	/* ST_v242: (byte 3) */
  bytes2word(114,115,0,78)
, bytes2word(72,67,46,73)
, bytes2word(79,69,120,116)
, bytes2word(114,97,115,46)
, bytes2word(101,120,99,108)
, bytes2word(117,100,101,70)
, bytes2word(105,110,97,108)
, bytes2word(105,115,101,114)
, bytes2word(115,58,54,58)
, bytes2word(49,48,45,54)
,	/* PP_NHC_46IOExtras_46unblockFinalisers: (byte 4) */
 	/* PC_NHC_46IOExtras_46unblockFinalisers: (byte 4) */
 	/* ST_v225: (byte 4) */
  bytes2word(58,49,53,0)
, bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,117,110,98)
, bytes2word(108,111,99,107)
, bytes2word(70,105,110,97)
, bytes2word(108,105,115,101)
,	/* PP_NHC_46IOExtras_46unblockFinalisers_35: (byte 3) */
 	/* PC_NHC_46IOExtras_46unblockFinalisers_35: (byte 3) */
 	/* ST_v222: (byte 3) */
  bytes2word(114,115,0,78)
, bytes2word(72,67,46,73)
, bytes2word(79,69,120,116)
, bytes2word(114,97,115,46)
, bytes2word(117,110,98,108)
, bytes2word(111,99,107,70)
, bytes2word(105,110,97,108)
, bytes2word(105,115,101,114)
, bytes2word(115,35,0,0)
,	/* PS_v235: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46excludeFinalisers)
, useLabel(PC_NHC_46IOExtras_46excludeFinalisers)
,	/* PS_v239: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46excludeFinalisers)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,	/* PS_v238: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46excludeFinalisers)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v237: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46excludeFinalisers)
, useLabel(PC_LAMBDA219)
,	/* PS_v233: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46blockFinalisers)
, useLabel(PC_NHC_46Internal_46_95mkIOok0)
,	/* PS_v231: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46blockFinalisers)
, useLabel(PC_NHC_46IOExtras_46blockFinalisers)
,	/* PS_v226: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46unblockFinalisers)
, useLabel(PC_NHC_46Internal_46_95mkIOok0)
,	/* PS_v224: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46unblockFinalisers)
, useLabel(PC_NHC_46IOExtras_46unblockFinalisers)
,	/* PS_v228: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46blockFinalisers_35)
, useLabel(PC_NHC_46IOExtras_46blockFinalisers_35)
,	/* PS_v221: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46unblockFinalisers_35)
, useLabel(PC_NHC_46IOExtras_46unblockFinalisers_35)
,	/* PS_v244: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_LAMBDA219)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,	/* PS_v243: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_LAMBDA219)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v241: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_LAMBDA219)
, useLabel(PC_LAMBDA219)
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
