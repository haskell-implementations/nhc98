#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46hs_95setperms_35	((void*)startLabel+16)
#define CT_v260	((void*)startLabel+60)
#define F0_Directory_46hs_95setperms_35	((void*)startLabel+68)
#define FN_Directory_46hs_95setperms	((void*)startLabel+80)
#define CT_v262	((void*)startLabel+104)
#define CF_Directory_46hs_95setperms	((void*)startLabel+112)
#define FN_Directory_46setperms	((void*)startLabel+136)
#define CT_v264	((void*)startLabel+216)
#define F0_Directory_46setperms	((void*)startLabel+224)
#define FN_LAMBDA256	((void*)startLabel+264)
#define CT_v266	((void*)startLabel+288)
#define F0_LAMBDA256	((void*)startLabel+296)
#define FN_LAMBDA255	((void*)startLabel+308)
#define CT_v268	((void*)startLabel+332)
#define F0_LAMBDA255	((void*)startLabel+340)
#define FN_LAMBDA254	((void*)startLabel+352)
#define CT_v270	((void*)startLabel+376)
#define F0_LAMBDA254	((void*)startLabel+384)
#define FN_LAMBDA253	((void*)startLabel+396)
#define CT_v272	((void*)startLabel+420)
#define F0_LAMBDA253	((void*)startLabel+428)
#define CT_v274	((void*)startLabel+476)
#define FN_LAMBDA257	((void*)startLabel+508)
#define CT_v277	((void*)startLabel+540)
#define CF_LAMBDA257	((void*)startLabel+548)
#define ST_v261	((void*)startLabel+552)
#define ST_v259	((void*)startLabel+574)
#define ST_v273	((void*)startLabel+597)
#define ST_v275	((void*)startLabel+622)
#define ST_v263	((void*)startLabel+659)
#define ST_v271	((void*)startLabel+678)
#define ST_v269	((void*)startLabel+703)
#define ST_v267	((void*)startLabel+728)
#define ST_v265	((void*)startLabel+753)
#define ST_v276	((void*)startLabel+778)
extern Node TM_Directory[];
void FR_Directory_46hs_95setperms_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok5[];
extern Node FN_Directory_46fromPerm[];
extern Node FN_CString_46toCString[];
extern Node TMSUB_Directory[];
extern Node FN_Directory_46patchIOErrorF[];

static Node startLabel[] = {
  bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v260)
,	/* FN_Directory_46hs_95setperms_35: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PUSH_ARG,4,EVAL)
, bytes2word(POP_I1,PUSH_ARG,5,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_Directory_46hs_95setperms_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v259)
,	/* CT_v260: (byte 0) */
  HW(0,5)
, 0
,	/* F0_Directory_46hs_95setperms_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95setperms_35),5)
, bytes2word(0,0,0,0)
, useLabel(CT_v262)
,	/* FN_Directory_46hs_95setperms: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v261)
,	/* CT_v262: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95setperms: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95setperms))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok5))
, useLabel(F0_Directory_46hs_95setperms_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v264)
,	/* FN_Directory_46setperms: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,9,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,2)
, bytes2word(PUSH_P1,0,PUSH_P1,2)
, bytes2word(PUSH_P1,4,PUSH_P1,6)
, bytes2word(PUSH_P1,8,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(11,ZAP_STACK_P1,10,ZAP_STACK_P1)
, bytes2word(9,ZAP_STACK_P1,8,ZAP_STACK_P1)
, bytes2word(7,ZAP_STACK_P1,6,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v263)
,	/* CT_v264: (byte 0) */
  HW(7,2)
, 0
,	/* F0_Directory_46setperms: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46setperms),2)
, VAPTAG(useLabel(FN_Directory_46fromPerm))
, VAPTAG(useLabel(FN_LAMBDA253))
, VAPTAG(useLabel(FN_LAMBDA254))
, VAPTAG(useLabel(FN_LAMBDA255))
, VAPTAG(useLabel(FN_LAMBDA256))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Directory_46hs_95setperms))
, bytes2word(1,0,0,1)
, useLabel(CT_v266)
,	/* FN_LAMBDA256: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 120017
, useLabel(ST_v265)
,	/* CT_v266: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA256: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA256),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v268)
,	/* FN_LAMBDA255: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 120015
, useLabel(ST_v267)
,	/* CT_v268: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA255: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA255),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v270)
,	/* FN_LAMBDA254: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 120013
, useLabel(ST_v269)
,	/* CT_v270: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA254: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA254),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v272)
,	/* FN_LAMBDA253: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 120011
, useLabel(ST_v271)
,	/* CT_v272: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA253: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA253),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v274)
,};
Node FN_Directory_46setPermissions[] = {
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 190001
, useLabel(ST_v273)
,	/* CT_v274: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Directory_46setPermissions[] = {
  CAPTAG(useLabel(FN_Directory_46setPermissions),2)
, VAPTAG(useLabel(FN_LAMBDA257))
, CAPTAG(useLabel(FN_Directory_46setperms),1)
, VAPTAG(useLabel(FN_Directory_46patchIOErrorF))
, bytes2word(0,0,0,0)
, useLabel(CT_v277)
,	/* FN_LAMBDA257: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v276)
, 190038
, useLabel(ST_v275)
,	/* CT_v277: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA257: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA257))
,	/* ST_v261: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,104,115)
, bytes2word(95,115,101,116)
, bytes2word(112,101,114,109)
,	/* ST_v259: (byte 2) */
  bytes2word(115,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(104,115,95,115)
, bytes2word(101,116,112,101)
, bytes2word(114,109,115,35)
,	/* ST_v273: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,115)
, bytes2word(101,116,80,101)
, bytes2word(114,109,105,115)
, bytes2word(115,105,111,110)
,	/* ST_v275: (byte 2) */
  bytes2word(115,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(115,101,116,80)
, bytes2word(101,114,109,105)
, bytes2word(115,115,105,111)
, bytes2word(110,115,58,49)
, bytes2word(57,58,51,56)
, bytes2word(45,49,57,58)
,	/* ST_v263: (byte 3) */
  bytes2word(53,51,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,115,101,116)
, bytes2word(112,101,114,109)
,	/* ST_v271: (byte 2) */
  bytes2word(115,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(115,101,116,112)
, bytes2word(101,114,109,115)
, bytes2word(58,49,50,58)
,	/* ST_v269: (byte 3) */
  bytes2word(49,49,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,115,101,116)
, bytes2word(112,101,114,109)
, bytes2word(115,58,49,50)
,	/* ST_v267: (byte 4) */
  bytes2word(58,49,51,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,115,101)
, bytes2word(116,112,101,114)
, bytes2word(109,115,58,49)
, bytes2word(50,58,49,53)
,	/* ST_v265: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,115)
, bytes2word(101,116,112,101)
, bytes2word(114,109,115,58)
, bytes2word(49,50,58,49)
,	/* ST_v276: (byte 2) */
  bytes2word(55,0,115,101)
, bytes2word(116,80,101,114)
, bytes2word(109,105,115,115)
, bytes2word(105,111,110,115)
, bytes2word(0,0,0,0)
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
