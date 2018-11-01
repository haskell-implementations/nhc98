#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46hs_95doesDirectoryExist_35	((void*)startLabel+8)
#define CT_v199	((void*)startLabel+32)
#define F0_Directory_46hs_95doesDirectoryExist_35	((void*)startLabel+40)
#define FN_Directory_46hs_95doesDirectoryExist	((void*)startLabel+68)
#define CT_v203	((void*)startLabel+120)
#define CF_Directory_46hs_95doesDirectoryExist	((void*)startLabel+128)
#define CT_v208	((void*)startLabel+248)
#define ST_v205	((void*)startLabel+284)
#define PP_Directory_46hs_95doesDirectoryExist	((void*)startLabel+313)
#define PC_Directory_46hs_95doesDirectoryExist	((void*)startLabel+313)
#define ST_v201	((void*)startLabel+313)
#define PP_Directory_46hs_95doesDirectoryExist_35	((void*)startLabel+345)
#define PC_Directory_46hs_95doesDirectoryExist_35	((void*)startLabel+345)
#define ST_v198	((void*)startLabel+345)
#define PS_v202	((void*)startLabel+380)
#define PS_v200	((void*)startLabel+392)
#define PS_v206	((void*)startLabel+404)
#define PS_v207	((void*)startLabel+416)
#define PS_v204	((void*)startLabel+428)
#define PS_v197	((void*)startLabel+440)
void FR_Directory_46hs_95doesDirectoryExist_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_CString_46toCString[];
extern Node PM_Directory[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];
extern Node PC_CString_46toCString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v199)
,	/* FN_Directory_46hs_95doesDirectoryExist_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46hs_95doesDirectoryExist_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v198)
,	/* CT_v199: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46hs_95doesDirectoryExist_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95doesDirectoryExist_35),1)
, useLabel(PS_v197)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v203)
,	/* FN_Directory_46hs_95doesDirectoryExist: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v202)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v201)
,	/* CT_v203: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95doesDirectoryExist: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95doesDirectoryExist))
, useLabel(PS_v200)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46hs_95doesDirectoryExist_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v208)
,};
Node FN_Directory_46doesDirectoryExist[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,ZAP_ARG_I1,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v207)
, 0
, 0
, 0
, 0
, useLabel(PS_v206)
, 0
, 0
, 0
, 0
, 110001
, useLabel(ST_v205)
,	/* CT_v208: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Directory_46doesDirectoryExist[] = {
  CAPTAG(useLabel(FN_Directory_46doesDirectoryExist),1)
, useLabel(PS_v204)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Directory_46hs_95doesDirectoryExist))
,};
Node PP_Directory_46doesDirectoryExist[] = {
 };
Node PC_Directory_46doesDirectoryExist[] = {
 	/* ST_v205: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,100,111)
, bytes2word(101,115,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,69)
, bytes2word(120,105,115,116)
,	/* PP_Directory_46hs_95doesDirectoryExist: (byte 1) */
 	/* PC_Directory_46hs_95doesDirectoryExist: (byte 1) */
 	/* ST_v201: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,104)
, bytes2word(115,95,100,111)
, bytes2word(101,115,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,69)
, bytes2word(120,105,115,116)
,	/* PP_Directory_46hs_95doesDirectoryExist_35: (byte 1) */
 	/* PC_Directory_46hs_95doesDirectoryExist_35: (byte 1) */
 	/* ST_v198: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,104)
, bytes2word(115,95,100,111)
, bytes2word(101,115,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,69)
, bytes2word(120,105,115,116)
, bytes2word(35,0,0,0)
,	/* PS_v202: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46hs_95doesDirectoryExist)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v200: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46hs_95doesDirectoryExist)
, useLabel(PC_Directory_46hs_95doesDirectoryExist)
,	/* PS_v206: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46doesDirectoryExist)
, useLabel(PC_CString_46toCString)
,	/* PS_v207: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46doesDirectoryExist)
, useLabel(PC_Directory_46hs_95doesDirectoryExist)
,	/* PS_v204: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46doesDirectoryExist)
, useLabel(PC_Directory_46doesDirectoryExist)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46hs_95doesDirectoryExist_35)
, useLabel(PC_Directory_46hs_95doesDirectoryExist_35)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_doesDirectoryExist" Directory.hs_doesDirectoryExist# 1 :: PackedString.PackedString -> Prelude.Bool */
extern HsBool hs_doesDirectoryExist(char*);
#ifdef PROFILE
static SInfo pf_Directory_46hs_95doesDirectoryExist_35 = {"Directory","Directory.hs_doesDirectoryExist#","Prelude.Bool"};
#endif
C_HEADER(FR_Directory_46hs_95doesDirectoryExist_35) {
  NodePtr nodeptr;
  HsBool result;
  char* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);

  result = hs_doesDirectoryExist(arg1);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_Directory_46hs_95doesDirectoryExist_35);
  C_RETURN(nodeptr);
}
