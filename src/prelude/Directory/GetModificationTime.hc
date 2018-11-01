#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46hs_95primGetModTime_35	((void*)startLabel+8)
#define CT_v226	((void*)startLabel+24)
#define F0_Directory_46hs_95primGetModTime_35	((void*)startLabel+32)
#define FN_Directory_46hs_95primGetModTime	((void*)startLabel+44)
#define CT_v227	((void*)startLabel+56)
#define CF_Directory_46hs_95primGetModTime	((void*)startLabel+64)
#define FN_Directory_46primGetModTime	((void*)startLabel+84)
#define CT_v228	((void*)startLabel+112)
#define F0_Directory_46primGetModTime	((void*)startLabel+120)
#define FN_LAMBDA223	((void*)startLabel+152)
#define CT_v232	((void*)startLabel+188)
#define F0_LAMBDA223	((void*)startLabel+196)
#define CT_v233	((void*)startLabel+228)
#define FN_LAMBDA224	((void*)startLabel+260)
#define CT_v235	((void*)startLabel+280)
#define CF_LAMBDA224	((void*)startLabel+288)
#define ST_v234	((void*)startLabel+292)
void FR_Directory_46hs_95primGetModTime_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Directory_46patchIOErrorFVal[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v226)
,	/* FN_Directory_46hs_95primGetModTime_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46hs_95primGetModTime_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v226: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46hs_95primGetModTime_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95primGetModTime_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v227)
,	/* FN_Directory_46hs_95primGetModTime: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v227: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95primGetModTime: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95primGetModTime))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46hs_95primGetModTime_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v228)
,	/* FN_Directory_46primGetModTime: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v228: (byte 0) */
  HW(5,1)
, 0
,	/* F0_Directory_46primGetModTime: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46primGetModTime),1)
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Directory_46hs_95primGetModTime))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA223),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v232)
,	/* FN_LAMBDA223: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,2,HEAP_P1)
, bytes2word(0,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(0,1,0)
,	/* CT_v232: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA223: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA223),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v233)
,};
Node FN_Directory_46getModificationTime[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v233: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Directory_46getModificationTime[] = {
  CAPTAG(useLabel(FN_Directory_46getModificationTime),1)
, VAPTAG(useLabel(FN_LAMBDA224))
, VAPTAG(useLabel(FN_Directory_46patchIOErrorFVal))
, useLabel(F0_Directory_46primGetModTime)
, bytes2word(0,0,0,0)
, useLabel(CT_v235)
,	/* FN_LAMBDA224: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v234)
,	/* CT_v235: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA224: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA224))
,	/* ST_v234: (byte 0) */
  bytes2word(103,101,116,77)
, bytes2word(111,100,105,102)
, bytes2word(105,99,97,116)
, bytes2word(105,111,110,84)
, bytes2word(105,109,101,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_primGetModTime" Directory.hs_primGetModTime# 1 :: PackedString.PackedString -> Prelude.2 */
extern Node* hs_primGetModTime(char*);
#ifdef PROFILE
static SInfo pf_Directory_46hs_95primGetModTime_35 = {"Directory","Directory.hs_primGetModTime#","Prelude.2"};
#endif
C_HEADER(FR_Directory_46hs_95primGetModTime_35) {
  NodePtr nodeptr;
  Node* result;
  char* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);

  result = hs_primGetModTime(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_Directory_46hs_95primGetModTime_35);
  C_RETURN(nodeptr);
}
