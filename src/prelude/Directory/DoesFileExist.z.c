#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46hs_95doesFileExist_35	((void*)startLabel+8)
#define CT_v196	((void*)startLabel+36)
#define F0_Directory_46hs_95doesFileExist_35	((void*)startLabel+44)
#define FN_Directory_46hs_95doesFileExist	((void*)startLabel+56)
#define CT_v198	((void*)startLabel+80)
#define CF_Directory_46hs_95doesFileExist	((void*)startLabel+88)
#define CT_v200	((void*)startLabel+144)
#define ST_v199	((void*)startLabel+164)
#define ST_v197	((void*)startLabel+188)
#define ST_v195	((void*)startLabel+215)
extern Node TM_Directory[];
void FR_Directory_46hs_95doesFileExist_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_CString_46toCString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v196)
,	/* FN_Directory_46hs_95doesFileExist_35: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46hs_95doesFileExist_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v195)
,	/* CT_v196: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46hs_95doesFileExist_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95doesFileExist_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v198)
,	/* FN_Directory_46hs_95doesFileExist: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v197)
,	/* CT_v198: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95doesFileExist: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95doesFileExist))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46hs_95doesFileExist_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v200)
,};
Node FN_Directory_46doesFileExist[] = {
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,ZAP_ARG_I1,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v199)
,	/* CT_v200: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Directory_46doesFileExist[] = {
  CAPTAG(useLabel(FN_Directory_46doesFileExist),1)
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Directory_46hs_95doesFileExist))
,	/* ST_v199: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,100,111)
, bytes2word(101,115,70,105)
, bytes2word(108,101,69,120)
,	/* ST_v197: (byte 4) */
  bytes2word(105,115,116,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,104,115)
, bytes2word(95,100,111,101)
, bytes2word(115,70,105,108)
, bytes2word(101,69,120,105)
,	/* ST_v195: (byte 3) */
  bytes2word(115,116,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,104,115,95)
, bytes2word(100,111,101,115)
, bytes2word(70,105,108,101)
, bytes2word(69,120,105,115)
, bytes2word(116,35,0,0)
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
