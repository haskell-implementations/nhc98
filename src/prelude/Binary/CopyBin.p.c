#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95copyBinAux_35	((void*)startLabel+12)
#define CT_v252	((void*)startLabel+44)
#define F0_NHC_46Binary_46hs_95copyBinAux_35	((void*)startLabel+52)
#define FN_NHC_46Binary_46hs_95copyBinAux	((void*)startLabel+80)
#define CT_v256	((void*)startLabel+132)
#define CF_NHC_46Binary_46hs_95copyBinAux	((void*)startLabel+140)
#define FN_NHC_46Binary_46copyBinAux	((void*)startLabel+180)
#define CT_v263	((void*)startLabel+316)
#define F0_NHC_46Binary_46copyBinAux	((void*)startLabel+324)
#define FN_LAMBDA246	((void*)startLabel+368)
#define CT_v267	((void*)startLabel+420)
#define F0_LAMBDA246	((void*)startLabel+428)
#define CT_v273	((void*)startLabel+576)
#define FN_LAMBDA248	((void*)startLabel+628)
#define CT_v279	((void*)startLabel+740)
#define F0_LAMBDA248	((void*)startLabel+748)
#define FN_LAMBDA247	((void*)startLabel+792)
#define CT_v285	((void*)startLabel+904)
#define F0_LAMBDA247	((void*)startLabel+912)
#define ST_v269	((void*)startLabel+944)
#define PP_LAMBDA248	((void*)startLabel+963)
#define PC_LAMBDA248	((void*)startLabel+963)
#define ST_v275	((void*)startLabel+963)
#define PP_LAMBDA247	((void*)startLabel+994)
#define PC_LAMBDA247	((void*)startLabel+994)
#define ST_v281	((void*)startLabel+994)
#define PP_NHC_46Binary_46copyBinAux	((void*)startLabel+1025)
#define PC_NHC_46Binary_46copyBinAux	((void*)startLabel+1025)
#define ST_v258	((void*)startLabel+1025)
#define PP_LAMBDA246	((void*)startLabel+1047)
#define PC_LAMBDA246	((void*)startLabel+1047)
#define ST_v265	((void*)startLabel+1047)
#define PP_NHC_46Binary_46hs_95copyBinAux	((void*)startLabel+1081)
#define PC_NHC_46Binary_46hs_95copyBinAux	((void*)startLabel+1081)
#define ST_v254	((void*)startLabel+1081)
#define PP_NHC_46Binary_46hs_95copyBinAux_35	((void*)startLabel+1106)
#define PC_NHC_46Binary_46hs_95copyBinAux_35	((void*)startLabel+1106)
#define ST_v251	((void*)startLabel+1106)
#define PS_v270	((void*)startLabel+1132)
#define PS_v268	((void*)startLabel+1144)
#define PS_v272	((void*)startLabel+1156)
#define PS_v271	((void*)startLabel+1168)
#define PS_v255	((void*)startLabel+1180)
#define PS_v253	((void*)startLabel+1192)
#define PS_v260	((void*)startLabel+1204)
#define PS_v259	((void*)startLabel+1216)
#define PS_v257	((void*)startLabel+1228)
#define PS_v262	((void*)startLabel+1240)
#define PS_v261	((void*)startLabel+1252)
#define PS_v250	((void*)startLabel+1264)
#define PS_v266	((void*)startLabel+1276)
#define PS_v264	((void*)startLabel+1288)
#define PS_v282	((void*)startLabel+1300)
#define PS_v283	((void*)startLabel+1312)
#define PS_v284	((void*)startLabel+1324)
#define PS_v280	((void*)startLabel+1336)
#define PS_v276	((void*)startLabel+1348)
#define PS_v278	((void*)startLabel+1360)
#define PS_v277	((void*)startLabel+1372)
#define PS_v274	((void*)startLabel+1384)
void FR_NHC_46Binary_46hs_95copyBinAux_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NHC_46Binary_46openBin[];
extern Node FN_NHC_46Binary_46sizeBin[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node PM_NHC_46Binary[];
extern Node PC_NHC_46Binary_46openBin[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46Internal_46_95mkIOok3[];
extern Node PC_NHC_46Internal_46_95apply3[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node PC_NHC_46Binary_46sizeBin[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v252)
,	/* FN_NHC_46Binary_46hs_95copyBinAux_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95copyBinAux_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 200001
, useLabel(ST_v251)
,	/* CT_v252: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46Binary_46hs_95copyBinAux_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95copyBinAux_35),3)
, useLabel(PS_v250)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v256)
,	/* FN_NHC_46Binary_46hs_95copyBinAux: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v255)
, 0
, 0
, 0
, 0
, 200001
, useLabel(ST_v254)
,	/* CT_v256: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95copyBinAux: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95copyBinAux))
, useLabel(PS_v253)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46Binary_46hs_95copyBinAux_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v263)
,	/* FN_NHC_46Binary_46copyBinAux: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,19,HEAP_OFF_N1)
, bytes2word(11,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
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
, useLabel(PS_v259)
, 0
, 0
, 0
, 0
, 230001
, useLabel(ST_v258)
,	/* CT_v263: (byte 0) */
  HW(4,3)
, 0
,	/* F0_NHC_46Binary_46copyBinAux: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46copyBinAux),3)
, useLabel(PS_v257)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95copyBinAux))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, CAPTAG(useLabel(FN_LAMBDA246),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v267)
,	/* FN_LAMBDA246: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v266)
, 0
, 0
, 0
, 0
, 240014
, useLabel(ST_v265)
,	/* CT_v267: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA246: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA246),1)
, useLabel(PS_v264)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v273)
,};
Node FN_NHC_46Binary_46copyBin[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v272)
, 0
, 0
, 0
, 0
, useLabel(PS_v271)
, 0
, 0
, 0
, 0
, useLabel(PS_v270)
, 0
, 0
, 0
, 0
, 140001
, useLabel(ST_v269)
,	/* CT_v273: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46Binary_46copyBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46copyBin),2)
, useLabel(PS_v268)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46openBin))
, CAPTAG(useLabel(FN_LAMBDA248),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v279)
,	/* FN_LAMBDA248: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,13)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v278)
, 0
, 0
, 0
, 0
, useLabel(PS_v277)
, 0
, 0
, 0
, 0
, useLabel(PS_v276)
, 0
, 0
, 0
, 0
, 150019
, useLabel(ST_v275)
,	/* CT_v279: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA248: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA248),2)
, useLabel(PS_v274)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46sizeBin))
, CAPTAG(useLabel(FN_LAMBDA247),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v285)
,	/* FN_LAMBDA247: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v284)
, 0
, 0
, 0
, 0
, useLabel(PS_v283)
, 0
, 0
, 0
, 0
, useLabel(PS_v282)
, 0
, 0
, 0
, 0
, 160019
, useLabel(ST_v281)
,	/* CT_v285: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA247: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA247),3)
, useLabel(PS_v280)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46copyBinAux))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,};
Node PP_NHC_46Binary_46copyBin[] = {
 };
Node PC_NHC_46Binary_46copyBin[] = {
 	/* ST_v269: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,99)
, bytes2word(111,112,121,66)
,	/* PP_LAMBDA248: (byte 3) */
 	/* PC_LAMBDA248: (byte 3) */
 	/* ST_v275: (byte 3) */
  bytes2word(105,110,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,99,111)
, bytes2word(112,121,66,105)
, bytes2word(110,58,49,53)
, bytes2word(58,49,57,45)
, bytes2word(49,56,58,49)
,	/* PP_LAMBDA247: (byte 2) */
 	/* PC_LAMBDA247: (byte 2) */
 	/* ST_v281: (byte 2) */
  bytes2word(50,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,99,111,112)
, bytes2word(121,66,105,110)
, bytes2word(58,49,54,58)
, bytes2word(49,57,45,49)
, bytes2word(56,58,49,50)
,	/* PP_NHC_46Binary_46copyBinAux: (byte 1) */
 	/* PC_NHC_46Binary_46copyBinAux: (byte 1) */
 	/* ST_v258: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(99,111,112,121)
, bytes2word(66,105,110,65)
,	/* PP_LAMBDA246: (byte 3) */
 	/* PC_LAMBDA246: (byte 3) */
 	/* ST_v265: (byte 3) */
  bytes2word(117,120,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,99,111)
, bytes2word(112,121,66,105)
, bytes2word(110,65,117,120)
, bytes2word(58,50,52,58)
, bytes2word(49,52,45,50)
, bytes2word(52,58,52,48)
,	/* PP_NHC_46Binary_46hs_95copyBinAux: (byte 1) */
 	/* PC_NHC_46Binary_46hs_95copyBinAux: (byte 1) */
 	/* ST_v254: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(104,115,95,99)
, bytes2word(111,112,121,66)
, bytes2word(105,110,65,117)
,	/* PP_NHC_46Binary_46hs_95copyBinAux_35: (byte 2) */
 	/* PC_NHC_46Binary_46hs_95copyBinAux_35: (byte 2) */
 	/* ST_v251: (byte 2) */
  bytes2word(120,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,104,115,95)
, bytes2word(99,111,112,121)
, bytes2word(66,105,110,65)
, bytes2word(117,120,35,0)
,	/* PS_v270: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46copyBin)
, useLabel(PC_NHC_46Binary_46openBin)
,	/* PS_v268: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46copyBin)
, useLabel(PC_NHC_46Binary_46copyBin)
,	/* PS_v272: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46copyBin)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v271: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46copyBin)
, useLabel(PC_LAMBDA248)
,	/* PS_v255: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95copyBinAux)
, useLabel(PC_NHC_46Internal_46_95mkIOok3)
,	/* PS_v253: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95copyBinAux)
, useLabel(PC_NHC_46Binary_46hs_95copyBinAux)
,	/* PS_v260: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46copyBinAux)
, useLabel(PC_NHC_46Internal_46_95apply3)
,	/* PS_v259: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46copyBinAux)
, useLabel(PC_NHC_46Binary_46hs_95copyBinAux)
,	/* PS_v257: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46copyBinAux)
, useLabel(PC_NHC_46Binary_46copyBinAux)
,	/* PS_v262: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46copyBinAux)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v261: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46copyBinAux)
, useLabel(PC_LAMBDA246)
,	/* PS_v250: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95copyBinAux_35)
, useLabel(PC_NHC_46Binary_46hs_95copyBinAux_35)
,	/* PS_v266: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA246)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v264: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA246)
, useLabel(PC_LAMBDA246)
,	/* PS_v282: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA247)
, useLabel(PC_NHC_46Binary_46copyBinAux)
,	/* PS_v283: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA247)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v284: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA247)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,	/* PS_v280: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA247)
, useLabel(PC_LAMBDA247)
,	/* PS_v276: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA248)
, useLabel(PC_NHC_46Binary_46sizeBin)
,	/* PS_v278: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA248)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v277: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA248)
, useLabel(PC_LAMBDA247)
,	/* PS_v274: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA248)
, useLabel(PC_LAMBDA248)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_copyBinAux" NHC.Binary.hs_copyBinAux# 3 :: FFI.ForeignObj -> FFI.ForeignObj -> Prelude.Int -> Prelude.() */
extern void hs_copyBinAux(void*,void*,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95copyBinAux_35 = {"NHC.Binary","NHC.Binary.hs_copyBinAux#","Prelude.()"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95copyBinAux_35) {
  NodePtr nodeptr;
  void* arg1;
  void* arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  hs_copyBinAux(arg1,arg2,arg3);

  nodeptr = nhc_mkUnit();
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95copyBinAux_35);
  C_RETURN(nodeptr);
}
