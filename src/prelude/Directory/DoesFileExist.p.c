#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46hs_95doesFileExist_35	((void*)startLabel+8)
#define CT_v197	((void*)startLabel+32)
#define F0_Directory_46hs_95doesFileExist_35	((void*)startLabel+40)
#define FN_Directory_46hs_95doesFileExist	((void*)startLabel+68)
#define CT_v201	((void*)startLabel+120)
#define CF_Directory_46hs_95doesFileExist	((void*)startLabel+128)
#define CT_v206	((void*)startLabel+248)
#define ST_v203	((void*)startLabel+284)
#define PP_Directory_46hs_95doesFileExist	((void*)startLabel+308)
#define PC_Directory_46hs_95doesFileExist	((void*)startLabel+308)
#define ST_v199	((void*)startLabel+308)
#define PP_Directory_46hs_95doesFileExist_35	((void*)startLabel+335)
#define PC_Directory_46hs_95doesFileExist_35	((void*)startLabel+335)
#define ST_v196	((void*)startLabel+335)
#define PS_v200	((void*)startLabel+364)
#define PS_v198	((void*)startLabel+376)
#define PS_v204	((void*)startLabel+388)
#define PS_v205	((void*)startLabel+400)
#define PS_v202	((void*)startLabel+412)
#define PS_v195	((void*)startLabel+424)
void FR_Directory_46hs_95doesFileExist_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_CString_46toCString[];
extern Node PM_Directory[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];
extern Node PC_CString_46toCString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v197)
,	/* FN_Directory_46hs_95doesFileExist_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46hs_95doesFileExist_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v196)
,	/* CT_v197: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46hs_95doesFileExist_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95doesFileExist_35),1)
, useLabel(PS_v195)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v201)
,	/* FN_Directory_46hs_95doesFileExist: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v200)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v199)
,	/* CT_v201: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95doesFileExist: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95doesFileExist))
, useLabel(PS_v198)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46hs_95doesFileExist_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v206)
,};
Node FN_Directory_46doesFileExist[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,ZAP_ARG_I1,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v205)
, 0
, 0
, 0
, 0
, useLabel(PS_v204)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v203)
,	/* CT_v206: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Directory_46doesFileExist[] = {
  CAPTAG(useLabel(FN_Directory_46doesFileExist),1)
, useLabel(PS_v202)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Directory_46hs_95doesFileExist))
,};
Node PP_Directory_46doesFileExist[] = {
 };
Node PC_Directory_46doesFileExist[] = {
 	/* ST_v203: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,100,111)
, bytes2word(101,115,70,105)
, bytes2word(108,101,69,120)
,	/* PP_Directory_46hs_95doesFileExist: (byte 4) */
 	/* PC_Directory_46hs_95doesFileExist: (byte 4) */
 	/* ST_v199: (byte 4) */
  bytes2word(105,115,116,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,104,115)
, bytes2word(95,100,111,101)
, bytes2word(115,70,105,108)
, bytes2word(101,69,120,105)
,	/* PP_Directory_46hs_95doesFileExist_35: (byte 3) */
 	/* PC_Directory_46hs_95doesFileExist_35: (byte 3) */
 	/* ST_v196: (byte 3) */
  bytes2word(115,116,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,104,115,95)
, bytes2word(100,111,101,115)
, bytes2word(70,105,108,101)
, bytes2word(69,120,105,115)
, bytes2word(116,35,0,0)
,	/* PS_v200: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46hs_95doesFileExist)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v198: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46hs_95doesFileExist)
, useLabel(PC_Directory_46hs_95doesFileExist)
,	/* PS_v204: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46doesFileExist)
, useLabel(PC_CString_46toCString)
,	/* PS_v205: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46doesFileExist)
, useLabel(PC_Directory_46hs_95doesFileExist)
,	/* PS_v202: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46doesFileExist)
, useLabel(PC_Directory_46doesFileExist)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46hs_95doesFileExist_35)
, useLabel(PC_Directory_46hs_95doesFileExist_35)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_doesFileExist" Directory.hs_doesFileExist# 1 :: PackedString.PackedString -> Prelude.Bool */
extern HsBool hs_doesFileExist(char*);
#ifdef PROFILE
static SInfo pf_Directory_46hs_95doesFileExist_35 = {"Directory","Directory.hs_doesFileExist#","Prelude.Bool"};
#endif
C_HEADER(FR_Directory_46hs_95doesFileExist_35) {
  NodePtr nodeptr;
  HsBool result;
  char* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);

  result = hs_doesFileExist(arg1);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_Directory_46hs_95doesFileExist_35);
  C_RETURN(nodeptr);
}
