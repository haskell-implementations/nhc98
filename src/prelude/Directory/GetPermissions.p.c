#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46hs_95getperms_35	((void*)startLabel+8)
#define CT_v257	((void*)startLabel+32)
#define F0_Directory_46hs_95getperms_35	((void*)startLabel+40)
#define FN_Directory_46hs_95getperms	((void*)startLabel+68)
#define CT_v261	((void*)startLabel+120)
#define CF_Directory_46hs_95getperms	((void*)startLabel+128)
#define FN_Directory_46getperms	((void*)startLabel+164)
#define CT_v269	((void*)startLabel+332)
#define F0_Directory_46getperms	((void*)startLabel+340)
#define FN_LAMBDA252	((void*)startLabel+388)
#define CT_v282	((void*)startLabel+580)
#define F0_LAMBDA252	((void*)startLabel+588)
#define CT_v287	((void*)startLabel+700)
#define FN_LAMBDA253	((void*)startLabel+748)
#define CT_v291	((void*)startLabel+792)
#define CF_LAMBDA253	((void*)startLabel+800)
#define ST_v284	((void*)startLabel+820)
#define PP_LAMBDA253	((void*)startLabel+845)
#define PC_LAMBDA253	((void*)startLabel+845)
#define ST_v289	((void*)startLabel+845)
#define PP_Directory_46getperms	((void*)startLabel+882)
#define PC_Directory_46getperms	((void*)startLabel+882)
#define ST_v263	((void*)startLabel+882)
#define PP_LAMBDA252	((void*)startLabel+901)
#define PC_LAMBDA252	((void*)startLabel+901)
#define ST_v275	((void*)startLabel+901)
#define PP_Directory_46hs_95getperms	((void*)startLabel+932)
#define PC_Directory_46hs_95getperms	((void*)startLabel+932)
#define ST_v259	((void*)startLabel+932)
#define PP_Directory_46hs_95getperms_35	((void*)startLabel+954)
#define PC_Directory_46hs_95getperms_35	((void*)startLabel+954)
#define ST_v256	((void*)startLabel+954)
#define ST_v290	((void*)startLabel+977)
#define PS_v260	((void*)startLabel+992)
#define PS_v258	((void*)startLabel+1004)
#define PS_v264	((void*)startLabel+1016)
#define PS_v266	((void*)startLabel+1028)
#define PS_v265	((void*)startLabel+1040)
#define PS_v262	((void*)startLabel+1052)
#define PS_v268	((void*)startLabel+1064)
#define PS_v267	((void*)startLabel+1076)
#define PS_v286	((void*)startLabel+1088)
#define PS_v283	((void*)startLabel+1100)
#define PS_v285	((void*)startLabel+1112)
#define PS_v255	((void*)startLabel+1124)
#define PS_v279	((void*)startLabel+1136)
#define PS_v278	((void*)startLabel+1148)
#define PS_v280	((void*)startLabel+1160)
#define PS_v281	((void*)startLabel+1172)
#define PS_v274	((void*)startLabel+1184)
#define PS_v288	((void*)startLabel+1196)
void FR_Directory_46hs_95getperms_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Directory_46toPerm[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Directory_46patchIOErrorFVal[];
extern Node PM_Directory[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];
extern Node PC_CString_46toCString[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_Directory_46patchIOErrorFVal[];
extern Node PC_Directory_46toPerm[];
extern Node PC_Prelude_464[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v257)
,	/* FN_Directory_46hs_95getperms_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46hs_95getperms_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v256)
,	/* CT_v257: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46hs_95getperms_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95getperms_35),1)
, useLabel(PS_v255)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v261)
,	/* FN_Directory_46hs_95getperms: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v260)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v259)
,	/* CT_v261: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95getperms: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95getperms))
, useLabel(PS_v258)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46hs_95getperms_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v269)
,	/* FN_Directory_46getperms: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,17,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
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
, 120001
, useLabel(ST_v263)
,	/* CT_v269: (byte 0) */
  HW(5,1)
, 0
,	/* F0_Directory_46getperms: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46getperms),1)
, useLabel(PS_v262)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Directory_46hs_95getperms))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA252),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v282)
,	/* FN_LAMBDA252: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,4)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(0,HEAP_I1,HEAP_I2,HEAP_P1)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,14,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,4,HEAP_OFF_N1)
, bytes2word(12,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v281)
, 0
, 0
, 0
, 0
, useLabel(PS_v280)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v279)
, 0
, 0
, 0
, 0
, useLabel(PS_v278)
, 0
, 0
, 0
, 0
, CONSTR(0,4,0)
, 0
, 0
, 0
, 0
, 140025
, useLabel(ST_v275)
,	/* CT_v282: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA252: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA252),1)
, useLabel(PS_v274)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Directory_46toPerm))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v287)
,};
Node FN_Directory_46getPermissions[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,9,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v286)
, 0
, 0
, 0
, 0
, useLabel(PS_v285)
, 0
, 0
, 0
, 0
, 200001
, useLabel(ST_v284)
,	/* CT_v287: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Directory_46getPermissions[] = {
  CAPTAG(useLabel(FN_Directory_46getPermissions),1)
, useLabel(PS_v283)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA253))
, VAPTAG(useLabel(FN_Directory_46patchIOErrorFVal))
, useLabel(F0_Directory_46getperms)
, bytes2word(0,0,0,0)
, useLabel(CT_v291)
,	/* FN_LAMBDA253: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v290)
, 200038
, useLabel(ST_v289)
,	/* CT_v291: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA253: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA253))
, useLabel(PS_v288)
, 0
, 0
, 0
,};
Node PP_Directory_46getPermissions[] = {
 };
Node PC_Directory_46getPermissions[] = {
 	/* ST_v284: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,103,101)
, bytes2word(116,80,101,114)
, bytes2word(109,105,115,115)
, bytes2word(105,111,110,115)
,	/* PP_LAMBDA253: (byte 1) */
 	/* PC_LAMBDA253: (byte 1) */
 	/* ST_v289: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,103)
, bytes2word(101,116,80,101)
, bytes2word(114,109,105,115)
, bytes2word(115,105,111,110)
, bytes2word(115,58,50,48)
, bytes2word(58,51,56,45)
, bytes2word(50,48,58,53)
,	/* PP_Directory_46getperms: (byte 2) */
 	/* PC_Directory_46getperms: (byte 2) */
 	/* ST_v263: (byte 2) */
  bytes2word(51,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(103,101,116,112)
, bytes2word(101,114,109,115)
,	/* PP_LAMBDA252: (byte 1) */
 	/* PC_LAMBDA252: (byte 1) */
 	/* ST_v275: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,103)
, bytes2word(101,116,112,101)
, bytes2word(114,109,115,58)
, bytes2word(49,52,58,50)
, bytes2word(53,45,49,52)
,	/* PP_Directory_46hs_95getperms: (byte 4) */
 	/* PC_Directory_46hs_95getperms: (byte 4) */
 	/* ST_v259: (byte 4) */
  bytes2word(58,51,56,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,104,115)
, bytes2word(95,103,101,116)
, bytes2word(112,101,114,109)
,	/* PP_Directory_46hs_95getperms_35: (byte 2) */
 	/* PC_Directory_46hs_95getperms_35: (byte 2) */
 	/* ST_v256: (byte 2) */
  bytes2word(115,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(104,115,95,103)
, bytes2word(101,116,112,101)
, bytes2word(114,109,115,35)
,	/* ST_v290: (byte 1) */
  bytes2word(0,103,101,116)
, bytes2word(80,101,114,109)
, bytes2word(105,115,115,105)
, bytes2word(111,110,115,0)
,	/* PS_v260: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46hs_95getperms)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v258: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46hs_95getperms)
, useLabel(PC_Directory_46hs_95getperms)
,	/* PS_v264: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getperms)
, useLabel(PC_CString_46toCString)
,	/* PS_v266: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getperms)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v265: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getperms)
, useLabel(PC_Directory_46hs_95getperms)
,	/* PS_v262: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getperms)
, useLabel(PC_Directory_46getperms)
,	/* PS_v268: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getperms)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v267: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getperms)
, useLabel(PC_LAMBDA252)
,	/* PS_v286: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getPermissions)
, useLabel(PC_Directory_46patchIOErrorFVal)
,	/* PS_v283: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getPermissions)
, useLabel(PC_Directory_46getPermissions)
,	/* PS_v285: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getPermissions)
, useLabel(PC_LAMBDA253)
,	/* PS_v255: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46hs_95getperms_35)
, useLabel(PC_Directory_46hs_95getperms_35)
,	/* PS_v279: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA252)
, useLabel(PC_Directory_46toPerm)
,	/* PS_v278: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA252)
, useLabel(PC_Prelude_464)
,	/* PS_v280: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA252)
, useLabel(PC_Prelude_462)
,	/* PS_v281: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA252)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v274: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA252)
, useLabel(PC_LAMBDA252)
,	/* PS_v288: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA253)
, useLabel(PC_LAMBDA253)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_getperms" Directory.hs_getperms# 1 :: PackedString.PackedString -> Prelude.2 */
extern Node* hs_getperms(char*);
#ifdef PROFILE
static SInfo pf_Directory_46hs_95getperms_35 = {"Directory","Directory.hs_getperms#","Prelude.2"};
#endif
C_HEADER(FR_Directory_46hs_95getperms_35) {
  NodePtr nodeptr;
  Node* result;
  char* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);

  result = hs_getperms(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_Directory_46hs_95getperms_35);
  C_RETURN(nodeptr);
}
