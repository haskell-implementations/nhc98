#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46hs_95setperms_35	((void*)startLabel+16)
#define CT_v259	((void*)startLabel+48)
#define F0_Directory_46hs_95setperms_35	((void*)startLabel+56)
#define FN_Directory_46hs_95setperms	((void*)startLabel+68)
#define CT_v260	((void*)startLabel+80)
#define CF_Directory_46hs_95setperms	((void*)startLabel+88)
#define FN_Directory_46setperms	((void*)startLabel+112)
#define CT_v261	((void*)startLabel+180)
#define F0_Directory_46setperms	((void*)startLabel+188)
#define FN_LAMBDA256	((void*)startLabel+228)
#define CT_v262	((void*)startLabel+240)
#define F0_LAMBDA256	((void*)startLabel+248)
#define FN_LAMBDA255	((void*)startLabel+260)
#define CT_v263	((void*)startLabel+272)
#define F0_LAMBDA255	((void*)startLabel+280)
#define FN_LAMBDA254	((void*)startLabel+292)
#define CT_v264	((void*)startLabel+304)
#define F0_LAMBDA254	((void*)startLabel+312)
#define FN_LAMBDA253	((void*)startLabel+324)
#define CT_v265	((void*)startLabel+336)
#define F0_LAMBDA253	((void*)startLabel+344)
#define CT_v266	((void*)startLabel+380)
#define FN_LAMBDA257	((void*)startLabel+412)
#define CT_v268	((void*)startLabel+432)
#define CF_LAMBDA257	((void*)startLabel+440)
#define ST_v267	((void*)startLabel+444)
void FR_Directory_46hs_95setperms_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok5[];
extern Node FN_Directory_46fromPerm[];
extern Node FN_CString_46toCString[];
extern Node FN_Directory_46patchIOErrorF[];

static Node startLabel[] = {
  bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v259)
,	/* FN_Directory_46hs_95setperms_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PUSH_ARG,4,EVAL)
, bytes2word(POP_I1,PUSH_ARG,5,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_Directory_46hs_95setperms_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v259: (byte 0) */
  HW(0,5)
, 0
,	/* F0_Directory_46hs_95setperms_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95setperms_35),5)
, bytes2word(0,0,0,0)
, useLabel(CT_v260)
,	/* FN_Directory_46hs_95setperms: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v260: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95setperms: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95setperms))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok5))
, useLabel(F0_Directory_46hs_95setperms_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v261)
,	/* FN_Directory_46setperms: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
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
,	/* CT_v261: (byte 0) */
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
, useLabel(CT_v262)
,	/* FN_LAMBDA256: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v262: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA256: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA256),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v263)
,	/* FN_LAMBDA255: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v263: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA255: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA255),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v264)
,	/* FN_LAMBDA254: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v264: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA254: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA254),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v265)
,	/* FN_LAMBDA253: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v265: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA253: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA253),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v266)
,};
Node FN_Directory_46setPermissions[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v266: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Directory_46setPermissions[] = {
  CAPTAG(useLabel(FN_Directory_46setPermissions),2)
, VAPTAG(useLabel(FN_LAMBDA257))
, CAPTAG(useLabel(FN_Directory_46setperms),1)
, VAPTAG(useLabel(FN_Directory_46patchIOErrorF))
, bytes2word(0,0,0,0)
, useLabel(CT_v268)
,	/* FN_LAMBDA257: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v267)
,	/* CT_v268: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA257: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA257))
,	/* ST_v267: (byte 0) */
  bytes2word(115,101,116,80)
, bytes2word(101,114,109,105)
, bytes2word(115,115,105,111)
, bytes2word(110,115,0,0)
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
