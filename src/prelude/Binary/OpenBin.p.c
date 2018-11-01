#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95openBin_35	((void*)startLabel+12)
#define CT_v253	((void*)startLabel+44)
#define F0_NHC_46Binary_46hs_95openBin_35	((void*)startLabel+52)
#define FN_NHC_46Binary_46hs_95openBin	((void*)startLabel+80)
#define CT_v257	((void*)startLabel+132)
#define CF_NHC_46Binary_46hs_95openBin	((void*)startLabel+140)
#define CT_v270	((void*)startLabel+492)
#define FN_LAMBDA249	((void*)startLabel+568)
#define CT_v274	((void*)startLabel+620)
#define F0_LAMBDA249	((void*)startLabel+628)
#define FN_LAMBDA248	((void*)startLabel+660)
#define CT_v277	((void*)startLabel+680)
#define F0_LAMBDA248	((void*)startLabel+688)
#define FN_LAMBDA247	((void*)startLabel+716)
#define CT_v280	((void*)startLabel+736)
#define F0_LAMBDA247	((void*)startLabel+744)
#define FN_LAMBDA246	((void*)startLabel+772)
#define CT_v283	((void*)startLabel+792)
#define F0_LAMBDA246	((void*)startLabel+800)
#define PP_NHC_46Binary_46hs_95openBin	((void*)startLabel+820)
#define PC_NHC_46Binary_46hs_95openBin	((void*)startLabel+820)
#define ST_v255	((void*)startLabel+820)
#define PP_NHC_46Binary_46hs_95openBin_35	((void*)startLabel+842)
#define PC_NHC_46Binary_46hs_95openBin_35	((void*)startLabel+842)
#define ST_v252	((void*)startLabel+842)
#define ST_v259	((void*)startLabel+868)
#define PP_LAMBDA246	((void*)startLabel+887)
#define PC_LAMBDA246	((void*)startLabel+887)
#define ST_v282	((void*)startLabel+887)
#define PP_LAMBDA247	((void*)startLabel+912)
#define PC_LAMBDA247	((void*)startLabel+912)
#define ST_v279	((void*)startLabel+912)
#define PP_LAMBDA248	((void*)startLabel+943)
#define PC_LAMBDA248	((void*)startLabel+943)
#define ST_v276	((void*)startLabel+943)
#define PP_LAMBDA249	((void*)startLabel+974)
#define PC_LAMBDA249	((void*)startLabel+974)
#define ST_v272	((void*)startLabel+974)
#define PS_v256	((void*)startLabel+1008)
#define PS_v254	((void*)startLabel+1020)
#define PS_v264	((void*)startLabel+1032)
#define PS_v260	((void*)startLabel+1044)
#define PS_v267	((void*)startLabel+1056)
#define PS_v266	((void*)startLabel+1068)
#define PS_v258	((void*)startLabel+1080)
#define PS_v265	((void*)startLabel+1092)
#define PS_v269	((void*)startLabel+1104)
#define PS_v261	((void*)startLabel+1116)
#define PS_v262	((void*)startLabel+1128)
#define PS_v263	((void*)startLabel+1140)
#define PS_v268	((void*)startLabel+1152)
#define PS_v251	((void*)startLabel+1164)
#define PS_v281	((void*)startLabel+1176)
#define PS_v278	((void*)startLabel+1188)
#define PS_v275	((void*)startLabel+1200)
#define PS_v273	((void*)startLabel+1212)
#define PS_v271	((void*)startLabel+1224)
void FR_NHC_46Binary_46hs_95openBin_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
extern Node FN_NHC_46Binary_46fromBinLocation[];
extern Node FN_CString_46toCString[];
extern Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PM_NHC_46Binary[];
extern Node PC_NHC_46Internal_46_95mkIOok3[];
extern Node PC_CString_46toCString[];
extern Node PC_NHC_46Binary_46fromBinLocation[];
extern Node PC_NHC_46Internal_46_95apply3[];
extern Node PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v253)
,	/* FN_NHC_46Binary_46hs_95openBin_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95openBin_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v252)
,	/* CT_v253: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46Binary_46hs_95openBin_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95openBin_35),3)
, useLabel(PS_v251)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v257)
,	/* FN_NHC_46Binary_46hs_95openBin: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v256)
, 0
, 0
, 0
, 0
, 110001
, useLabel(ST_v255)
,	/* CT_v257: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95openBin: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95openBin))
, useLabel(PS_v254)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46Binary_46hs_95openBin_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v270)
,};
Node FN_NHC_46Binary_46openBin[] = {
  bytes2word(NEEDHEAP_P1,69,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,17)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,23,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I2)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_N1,42,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(HEAP_P1,4,HEAP_I1,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,15,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,16,HEAP_CVAL_N1)
, bytes2word(52,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,19,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v269)
, 0
, 0
, 0
, 0
, useLabel(PS_v268)
, 0
, 0
, 0
, 0
, useLabel(PS_v267)
, 0
, 0
, 0
, 0
, useLabel(PS_v266)
, 0
, 0
, 0
, 0
, useLabel(PS_v265)
, 0
, 0
, 0
, 0
, useLabel(PS_v264)
, 0
, 0
, 0
, 0
, useLabel(PS_v263)
, 0
, 0
, 0
, 0
, useLabel(PS_v262)
, 0
, 0
, 0
, 0
, useLabel(PS_v261)
, 0
, 0
, 0
, 0
, useLabel(PS_v260)
, 0
, 0
, 0
, 0
, 140001
, useLabel(ST_v259)
,	/* CT_v270: (byte 0) */
  HW(10,1)
, 0
,};
Node F0_NHC_46Binary_46openBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46openBin),1)
, useLabel(PS_v258)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46fromBinLocation))
, VAPTAG(useLabel(FN_LAMBDA246))
, VAPTAG(useLabel(FN_LAMBDA247))
, VAPTAG(useLabel(FN_LAMBDA248))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum))
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95openBin))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, CAPTAG(useLabel(FN_LAMBDA249),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v274)
,	/* FN_LAMBDA249: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v273)
, 0
, 0
, 0
, 0
, 180012
, useLabel(ST_v272)
,	/* CT_v274: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA249: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA249),1)
, useLabel(PS_v271)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v277)
,	/* FN_LAMBDA248: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 150018
, useLabel(ST_v276)
,	/* CT_v277: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA248: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA248),1)
, useLabel(PS_v275)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v280)
,	/* FN_LAMBDA247: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 150013
, useLabel(ST_v279)
,	/* CT_v280: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA247: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA247),1)
, useLabel(PS_v278)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v283)
,	/* FN_LAMBDA246: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 150011
, useLabel(ST_v282)
,	/* CT_v283: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA246: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA246),1)
, useLabel(PS_v281)
, 0
, 0
, 0
,	/* PP_NHC_46Binary_46hs_95openBin: (byte 0) */
 	/* PC_NHC_46Binary_46hs_95openBin: (byte 0) */
 	/* ST_v255: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,104)
, bytes2word(115,95,111,112)
, bytes2word(101,110,66,105)
,	/* PP_NHC_46Binary_46hs_95openBin_35: (byte 2) */
 	/* PC_NHC_46Binary_46hs_95openBin_35: (byte 2) */
 	/* ST_v252: (byte 2) */
  bytes2word(110,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,104,115,95)
, bytes2word(111,112,101,110)
, bytes2word(66,105,110,35)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46Binary_46openBin[] = {
 };
Node PC_NHC_46Binary_46openBin[] = {
 	/* ST_v259: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,111)
, bytes2word(112,101,110,66)
,	/* PP_LAMBDA246: (byte 3) */
 	/* PC_LAMBDA246: (byte 3) */
 	/* ST_v282: (byte 3) */
  bytes2word(105,110,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,111,112)
, bytes2word(101,110,66,105)
, bytes2word(110,58,49,53)
,	/* PP_LAMBDA247: (byte 4) */
 	/* PC_LAMBDA247: (byte 4) */
 	/* ST_v279: (byte 4) */
  bytes2word(58,49,49,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,111)
, bytes2word(112,101,110,66)
, bytes2word(105,110,58,49)
, bytes2word(53,58,49,51)
, bytes2word(45,49,53,58)
,	/* PP_LAMBDA248: (byte 3) */
 	/* PC_LAMBDA248: (byte 3) */
 	/* ST_v276: (byte 3) */
  bytes2word(49,54,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,111,112)
, bytes2word(101,110,66,105)
, bytes2word(110,58,49,53)
, bytes2word(58,49,56,45)
, bytes2word(49,53,58,50)
,	/* PP_LAMBDA249: (byte 2) */
 	/* PC_LAMBDA249: (byte 2) */
 	/* ST_v272: (byte 2) */
  bytes2word(49,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,111,112,101)
, bytes2word(110,66,105,110)
, bytes2word(58,49,56,58)
, bytes2word(49,50,45,49)
, bytes2word(56,58,50,56)
, bytes2word(0,0,0,0)
,	/* PS_v256: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95openBin)
, useLabel(PC_NHC_46Internal_46_95mkIOok3)
,	/* PS_v254: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95openBin)
, useLabel(PC_NHC_46Binary_46hs_95openBin)
,	/* PS_v264: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46openBin)
, useLabel(PC_CString_46toCString)
,	/* PS_v260: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46openBin)
, useLabel(PC_NHC_46Binary_46fromBinLocation)
,	/* PS_v267: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46openBin)
, useLabel(PC_NHC_46Internal_46_95apply3)
,	/* PS_v266: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46openBin)
, useLabel(PC_NHC_46Binary_46hs_95openBin)
,	/* PS_v258: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46openBin)
, useLabel(PC_NHC_46Binary_46openBin)
,	/* PS_v265: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46openBin)
, useLabel(PC_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum)
,	/* PS_v269: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46openBin)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v261: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46openBin)
, useLabel(PC_LAMBDA246)
,	/* PS_v262: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46openBin)
, useLabel(PC_LAMBDA247)
,	/* PS_v263: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46openBin)
, useLabel(PC_LAMBDA248)
,	/* PS_v268: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46openBin)
, useLabel(PC_LAMBDA249)
,	/* PS_v251: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95openBin_35)
, useLabel(PC_NHC_46Binary_46hs_95openBin_35)
,	/* PS_v281: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA246)
, useLabel(PC_LAMBDA246)
,	/* PS_v278: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA247)
, useLabel(PC_LAMBDA247)
,	/* PS_v275: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA248)
, useLabel(PC_LAMBDA248)
,	/* PS_v273: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA249)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v271: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA249)
, useLabel(PC_LAMBDA249)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_openBin" NHC.Binary.hs_openBin# 3 :: Prelude.Bool -> PackedString.PackedString -> Prelude.Int -> FFI.ForeignObj */
extern void* hs_openBin(HsBool,char*,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95openBin_35 = {"NHC.Binary","NHC.Binary.hs_openBin#","FFI.ForeignObj"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95openBin_35) {
  NodePtr nodeptr;
  void* result;
  HsBool arg1;
  char* arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsBool)GET_BOOL_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (char*)nhc_getPackedString(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = hs_openBin(arg1,arg2,arg3);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95openBin_35);
  C_RETURN(nodeptr);
}
