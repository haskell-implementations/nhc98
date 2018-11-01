#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46hs_95doesDirectoryExist_35	((void*)startLabel+8)
#define CT_v197	((void*)startLabel+24)
#define F0_Directory_46hs_95doesDirectoryExist_35	((void*)startLabel+32)
#define FN_Directory_46hs_95doesDirectoryExist	((void*)startLabel+44)
#define CT_v198	((void*)startLabel+56)
#define CF_Directory_46hs_95doesDirectoryExist	((void*)startLabel+64)
#define CT_v199	((void*)startLabel+108)
void FR_Directory_46hs_95doesDirectoryExist_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_CString_46toCString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v197)
,	/* FN_Directory_46hs_95doesDirectoryExist_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46hs_95doesDirectoryExist_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v197: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46hs_95doesDirectoryExist_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95doesDirectoryExist_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v198)
,	/* FN_Directory_46hs_95doesDirectoryExist: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v198: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95doesDirectoryExist: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95doesDirectoryExist))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46hs_95doesDirectoryExist_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v199)
,};
Node FN_Directory_46doesDirectoryExist[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,ZAP_ARG_I1,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v199: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Directory_46doesDirectoryExist[] = {
  CAPTAG(useLabel(FN_Directory_46doesDirectoryExist),1)
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Directory_46hs_95doesDirectoryExist))
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
