#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46hs_95setperms_35	((void*)startLabel+16)
#define CT_v261	((void*)startLabel+56)
#define F0_Directory_46hs_95setperms_35	((void*)startLabel+64)
#define FN_Directory_46hs_95setperms	((void*)startLabel+92)
#define CT_v265	((void*)startLabel+144)
#define CF_Directory_46hs_95setperms	((void*)startLabel+152)
#define FN_Directory_46setperms	((void*)startLabel+192)
#define CT_v275	((void*)startLabel+452)
#define F0_Directory_46setperms	((void*)startLabel+460)
#define FN_LAMBDA256	((void*)startLabel+516)
#define CT_v278	((void*)startLabel+536)
#define F0_LAMBDA256	((void*)startLabel+544)
#define FN_LAMBDA255	((void*)startLabel+572)
#define CT_v281	((void*)startLabel+592)
#define F0_LAMBDA255	((void*)startLabel+600)
#define FN_LAMBDA254	((void*)startLabel+628)
#define CT_v284	((void*)startLabel+648)
#define F0_LAMBDA254	((void*)startLabel+656)
#define FN_LAMBDA253	((void*)startLabel+684)
#define CT_v287	((void*)startLabel+704)
#define F0_LAMBDA253	((void*)startLabel+712)
#define CT_v293	((void*)startLabel+856)
#define FN_LAMBDA257	((void*)startLabel+904)
#define CT_v297	((void*)startLabel+948)
#define CF_LAMBDA257	((void*)startLabel+956)
#define PP_Directory_46hs_95setperms	((void*)startLabel+976)
#define PC_Directory_46hs_95setperms	((void*)startLabel+976)
#define ST_v263	((void*)startLabel+976)
#define PP_Directory_46hs_95setperms_35	((void*)startLabel+998)
#define PC_Directory_46hs_95setperms_35	((void*)startLabel+998)
#define ST_v260	((void*)startLabel+998)
#define ST_v289	((void*)startLabel+1024)
#define PP_LAMBDA257	((void*)startLabel+1049)
#define PC_LAMBDA257	((void*)startLabel+1049)
#define ST_v295	((void*)startLabel+1049)
#define PP_Directory_46setperms	((void*)startLabel+1086)
#define PC_Directory_46setperms	((void*)startLabel+1086)
#define ST_v267	((void*)startLabel+1086)
#define PP_LAMBDA253	((void*)startLabel+1105)
#define PC_LAMBDA253	((void*)startLabel+1105)
#define ST_v286	((void*)startLabel+1105)
#define PP_LAMBDA254	((void*)startLabel+1130)
#define PC_LAMBDA254	((void*)startLabel+1130)
#define ST_v283	((void*)startLabel+1130)
#define PP_LAMBDA255	((void*)startLabel+1155)
#define PC_LAMBDA255	((void*)startLabel+1155)
#define ST_v280	((void*)startLabel+1155)
#define PP_LAMBDA256	((void*)startLabel+1180)
#define PC_LAMBDA256	((void*)startLabel+1180)
#define ST_v277	((void*)startLabel+1180)
#define ST_v296	((void*)startLabel+1205)
#define PS_v264	((void*)startLabel+1220)
#define PS_v262	((void*)startLabel+1232)
#define PS_v273	((void*)startLabel+1244)
#define PS_v268	((void*)startLabel+1256)
#define PS_v274	((void*)startLabel+1268)
#define PS_v266	((void*)startLabel+1280)
#define PS_v269	((void*)startLabel+1292)
#define PS_v270	((void*)startLabel+1304)
#define PS_v271	((void*)startLabel+1316)
#define PS_v272	((void*)startLabel+1328)
#define PS_v292	((void*)startLabel+1340)
#define PS_v291	((void*)startLabel+1352)
#define PS_v288	((void*)startLabel+1364)
#define PS_v290	((void*)startLabel+1376)
#define PS_v259	((void*)startLabel+1388)
#define PS_v285	((void*)startLabel+1400)
#define PS_v282	((void*)startLabel+1412)
#define PS_v279	((void*)startLabel+1424)
#define PS_v276	((void*)startLabel+1436)
#define PS_v294	((void*)startLabel+1448)
void FR_Directory_46hs_95setperms_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok5[];
extern Node FN_Directory_46fromPerm[];
extern Node FN_CString_46toCString[];
extern Node FN_Directory_46patchIOErrorF[];
extern Node PM_Directory[];
extern Node PC_NHC_46Internal_46_95mkIOok5[];
extern Node PC_CString_46toCString[];
extern Node PC_Directory_46fromPerm[];
extern Node PC_Directory_46patchIOErrorF[];

static Node startLabel[] = {
  bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v261)
,	/* FN_Directory_46hs_95setperms_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PUSH_ARG,4,EVAL)
, bytes2word(POP_I1,PUSH_ARG,5,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_Directory_46hs_95setperms_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v260)
,	/* CT_v261: (byte 0) */
  HW(0,5)
, 0
,	/* F0_Directory_46hs_95setperms_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95setperms_35),5)
, useLabel(PS_v259)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v265)
,	/* FN_Directory_46hs_95setperms: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v264)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v263)
,	/* CT_v265: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95setperms: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95setperms))
, useLabel(PS_v262)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok5))
, useLabel(F0_Directory_46hs_95setperms_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v275)
,	/* FN_Directory_46setperms: (byte 0) */
  bytes2word(NEEDHEAP_P1,53,PUSH_HEAP,HEAP_CVAL_P1)
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
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,29)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,PUSH_P1,0)
, bytes2word(PUSH_P1,2,PUSH_P1,4)
, bytes2word(PUSH_P1,6,PUSH_P1,8)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1,11)
, bytes2word(ZAP_STACK_P1,10,ZAP_STACK_P1,9)
, bytes2word(ZAP_STACK_P1,8,ZAP_STACK_P1,7)
, bytes2word(ZAP_STACK_P1,6,EVAL,NEEDHEAP_P1)
, bytes2word(45,APPLY,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v274)
, 0
, 0
, 0
, 0
, useLabel(PS_v273)
, 0
, 0
, 0
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
, 110001
, useLabel(ST_v267)
,	/* CT_v275: (byte 0) */
  HW(7,2)
, 0
,	/* F0_Directory_46setperms: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46setperms),2)
, useLabel(PS_v266)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Directory_46fromPerm))
, VAPTAG(useLabel(FN_LAMBDA253))
, VAPTAG(useLabel(FN_LAMBDA254))
, VAPTAG(useLabel(FN_LAMBDA255))
, VAPTAG(useLabel(FN_LAMBDA256))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Directory_46hs_95setperms))
, bytes2word(1,0,0,1)
, useLabel(CT_v278)
,	/* FN_LAMBDA256: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 120017
, useLabel(ST_v277)
,	/* CT_v278: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA256: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA256),1)
, useLabel(PS_v276)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v281)
,	/* FN_LAMBDA255: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 120015
, useLabel(ST_v280)
,	/* CT_v281: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA255: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA255),1)
, useLabel(PS_v279)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v284)
,	/* FN_LAMBDA254: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 120013
, useLabel(ST_v283)
,	/* CT_v284: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA254: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA254),1)
, useLabel(PS_v282)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v287)
,	/* FN_LAMBDA253: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 120011
, useLabel(ST_v286)
,	/* CT_v287: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA253: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA253),1)
, useLabel(PS_v285)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v293)
,};
Node FN_Directory_46setPermissions[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,16,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v292)
, 0
, 0
, 0
, 0
, useLabel(PS_v291)
, 0
, 0
, 0
, 0
, useLabel(PS_v290)
, 0
, 0
, 0
, 0
, 190001
, useLabel(ST_v289)
,	/* CT_v293: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Directory_46setPermissions[] = {
  CAPTAG(useLabel(FN_Directory_46setPermissions),2)
, useLabel(PS_v288)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA257))
, CAPTAG(useLabel(FN_Directory_46setperms),1)
, VAPTAG(useLabel(FN_Directory_46patchIOErrorF))
, bytes2word(0,0,0,0)
, useLabel(CT_v297)
,	/* FN_LAMBDA257: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v296)
, 190038
, useLabel(ST_v295)
,	/* CT_v297: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA257: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA257))
, useLabel(PS_v294)
, 0
, 0
, 0
,	/* PP_Directory_46hs_95setperms: (byte 0) */
 	/* PC_Directory_46hs_95setperms: (byte 0) */
 	/* ST_v263: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,104,115)
, bytes2word(95,115,101,116)
, bytes2word(112,101,114,109)
,	/* PP_Directory_46hs_95setperms_35: (byte 2) */
 	/* PC_Directory_46hs_95setperms_35: (byte 2) */
 	/* ST_v260: (byte 2) */
  bytes2word(115,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(104,115,95,115)
, bytes2word(101,116,112,101)
, bytes2word(114,109,115,35)
, bytes2word(0,0,0,0)
,};
Node PP_Directory_46setPermissions[] = {
 };
Node PC_Directory_46setPermissions[] = {
 	/* ST_v289: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,115,101)
, bytes2word(116,80,101,114)
, bytes2word(109,105,115,115)
, bytes2word(105,111,110,115)
,	/* PP_LAMBDA257: (byte 1) */
 	/* PC_LAMBDA257: (byte 1) */
 	/* ST_v295: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,115)
, bytes2word(101,116,80,101)
, bytes2word(114,109,105,115)
, bytes2word(115,105,111,110)
, bytes2word(115,58,49,57)
, bytes2word(58,51,56,45)
, bytes2word(49,57,58,53)
,	/* PP_Directory_46setperms: (byte 2) */
 	/* PC_Directory_46setperms: (byte 2) */
 	/* ST_v267: (byte 2) */
  bytes2word(51,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(115,101,116,112)
, bytes2word(101,114,109,115)
,	/* PP_LAMBDA253: (byte 1) */
 	/* PC_LAMBDA253: (byte 1) */
 	/* ST_v286: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,115)
, bytes2word(101,116,112,101)
, bytes2word(114,109,115,58)
, bytes2word(49,50,58,49)
,	/* PP_LAMBDA254: (byte 2) */
 	/* PC_LAMBDA254: (byte 2) */
 	/* ST_v283: (byte 2) */
  bytes2word(49,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(115,101,116,112)
, bytes2word(101,114,109,115)
, bytes2word(58,49,50,58)
,	/* PP_LAMBDA255: (byte 3) */
 	/* PC_LAMBDA255: (byte 3) */
 	/* ST_v280: (byte 3) */
  bytes2word(49,51,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,115,101,116)
, bytes2word(112,101,114,109)
, bytes2word(115,58,49,50)
,	/* PP_LAMBDA256: (byte 4) */
 	/* PC_LAMBDA256: (byte 4) */
 	/* ST_v277: (byte 4) */
  bytes2word(58,49,53,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,115,101)
, bytes2word(116,112,101,114)
, bytes2word(109,115,58,49)
, bytes2word(50,58,49,55)
,	/* ST_v296: (byte 1) */
  bytes2word(0,115,101,116)
, bytes2word(80,101,114,109)
, bytes2word(105,115,115,105)
, bytes2word(111,110,115,0)
,	/* PS_v264: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46hs_95setperms)
, useLabel(PC_NHC_46Internal_46_95mkIOok5)
,	/* PS_v262: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46hs_95setperms)
, useLabel(PC_Directory_46hs_95setperms)
,	/* PS_v273: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setperms)
, useLabel(PC_CString_46toCString)
,	/* PS_v268: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setperms)
, useLabel(PC_Directory_46fromPerm)
,	/* PS_v274: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setperms)
, useLabel(PC_Directory_46hs_95setperms)
,	/* PS_v266: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setperms)
, useLabel(PC_Directory_46setperms)
,	/* PS_v269: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setperms)
, useLabel(PC_LAMBDA253)
,	/* PS_v270: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setperms)
, useLabel(PC_LAMBDA254)
,	/* PS_v271: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setperms)
, useLabel(PC_LAMBDA255)
,	/* PS_v272: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setperms)
, useLabel(PC_LAMBDA256)
,	/* PS_v292: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setPermissions)
, useLabel(PC_Directory_46patchIOErrorF)
,	/* PS_v291: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setPermissions)
, useLabel(PC_Directory_46setperms)
,	/* PS_v288: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setPermissions)
, useLabel(PC_Directory_46setPermissions)
,	/* PS_v290: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setPermissions)
, useLabel(PC_LAMBDA257)
,	/* PS_v259: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46hs_95setperms_35)
, useLabel(PC_Directory_46hs_95setperms_35)
,	/* PS_v285: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA253)
, useLabel(PC_LAMBDA253)
,	/* PS_v282: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA254)
, useLabel(PC_LAMBDA254)
,	/* PS_v279: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA255)
, useLabel(PC_LAMBDA255)
,	/* PS_v276: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA256)
, useLabel(PC_LAMBDA256)
,	/* PS_v294: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA257)
, useLabel(PC_LAMBDA257)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_setperms" Directory.hs_setperms# 5 :: Prelude.Bool -> Prelude.Bool -> Prelude.Bool -> Prelude.Bool -> PackedString.PackedString -> Prelude.Int */
extern HsInt hs_setperms(HsBool,HsBool,HsBool,HsBool,char*);
#ifdef PROFILE
static SInfo pf_Directory_46hs_95setperms_35 = {"Directory","Directory.hs_setperms#","Prelude.Int"};
#endif
C_HEADER(FR_Directory_46hs_95setperms_35) {
  NodePtr nodeptr;
  HsInt result;
  HsBool arg1;
  HsBool arg2;
  HsBool arg3;
  HsBool arg4;
  char* arg5;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsBool)GET_BOOL_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsBool)GET_BOOL_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsBool)GET_BOOL_VALUE(nodeptr);
  nodeptr = C_GETARG1(4);
  IND_REMOVE(nodeptr);
  arg4 = (HsBool)GET_BOOL_VALUE(nodeptr);
  nodeptr = C_GETARG1(5);
  IND_REMOVE(nodeptr);
  arg5 = (char*)nhc_getPackedString(nodeptr);

  result = hs_setperms(arg1,arg2,arg3,arg4,arg5);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_Directory_46hs_95setperms_35);
  C_RETURN(nodeptr);
}
