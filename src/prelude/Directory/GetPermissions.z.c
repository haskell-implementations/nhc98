#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46hs_95getperms_35	((void*)startLabel+8)
#define CT_v256	((void*)startLabel+36)
#define F0_Directory_46hs_95getperms_35	((void*)startLabel+44)
#define FN_Directory_46hs_95getperms	((void*)startLabel+56)
#define CT_v258	((void*)startLabel+80)
#define CF_Directory_46hs_95getperms	((void*)startLabel+88)
#define FN_Directory_46getperms	((void*)startLabel+108)
#define CT_v260	((void*)startLabel+148)
#define F0_Directory_46getperms	((void*)startLabel+156)
#define FN_LAMBDA252	((void*)startLabel+188)
#define CT_v268	((void*)startLabel+248)
#define F0_LAMBDA252	((void*)startLabel+256)
#define CT_v270	((void*)startLabel+304)
#define FN_LAMBDA253	((void*)startLabel+336)
#define CT_v273	((void*)startLabel+368)
#define CF_LAMBDA253	((void*)startLabel+376)
#define ST_v269	((void*)startLabel+380)
#define ST_v271	((void*)startLabel+405)
#define ST_v259	((void*)startLabel+442)
#define ST_v265	((void*)startLabel+461)
#define ST_v257	((void*)startLabel+492)
#define ST_v255	((void*)startLabel+514)
#define ST_v272	((void*)startLabel+537)
extern Node TM_Directory[];
void FR_Directory_46hs_95getperms_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_Directory[];
extern Node FN_Directory_46toPerm[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Directory_46patchIOErrorFVal[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v256)
,	/* FN_Directory_46hs_95getperms_35: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46hs_95getperms_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v255)
,	/* CT_v256: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46hs_95getperms_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95getperms_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v258)
,	/* FN_Directory_46hs_95getperms: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v257)
,	/* CT_v258: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95getperms: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95getperms))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46hs_95getperms_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v260)
,	/* FN_Directory_46getperms: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 120001
, useLabel(ST_v259)
,	/* CT_v260: (byte 0) */
  HW(5,1)
, 0
,	/* F0_Directory_46getperms: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46getperms),1)
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Directory_46hs_95getperms))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA252),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v268)
,	/* FN_LAMBDA252: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,4)
, bytes2word(HEAP_CVAL_IN3,HEAP_P1,0,HEAP_I1)
, bytes2word(HEAP_I2,HEAP_P1,3,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_N1,4)
, bytes2word(HEAP_P1,4,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(0,4,0)
, 140025
, useLabel(ST_v265)
,	/* CT_v268: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA252: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA252),1)
, VAPTAG(useLabel(FN_Directory_46toPerm))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v270)
,};
Node FN_Directory_46getPermissions[] = {
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 200001
, useLabel(ST_v269)
,	/* CT_v270: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Directory_46getPermissions[] = {
  CAPTAG(useLabel(FN_Directory_46getPermissions),1)
, VAPTAG(useLabel(FN_LAMBDA253))
, VAPTAG(useLabel(FN_Directory_46patchIOErrorFVal))
, useLabel(F0_Directory_46getperms)
, bytes2word(0,0,0,0)
, useLabel(CT_v273)
,	/* FN_LAMBDA253: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v272)
, 200038
, useLabel(ST_v271)
,	/* CT_v273: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA253: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA253))
,	/* ST_v269: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,103,101)
, bytes2word(116,80,101,114)
, bytes2word(109,105,115,115)
, bytes2word(105,111,110,115)
,	/* ST_v271: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,103)
, bytes2word(101,116,80,101)
, bytes2word(114,109,105,115)
, bytes2word(115,105,111,110)
, bytes2word(115,58,50,48)
, bytes2word(58,51,56,45)
, bytes2word(50,48,58,53)
,	/* ST_v259: (byte 2) */
  bytes2word(51,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(103,101,116,112)
, bytes2word(101,114,109,115)
,	/* ST_v265: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,103)
, bytes2word(101,116,112,101)
, bytes2word(114,109,115,58)
, bytes2word(49,52,58,50)
, bytes2word(53,45,49,52)
,	/* ST_v257: (byte 4) */
  bytes2word(58,51,56,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,104,115)
, bytes2word(95,103,101,116)
, bytes2word(112,101,114,109)
,	/* ST_v255: (byte 2) */
  bytes2word(115,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(104,115,95,103)
, bytes2word(101,116,112,101)
, bytes2word(114,109,115,35)
,	/* ST_v272: (byte 1) */
  bytes2word(0,103,101,116)
, bytes2word(80,101,114,109)
, bytes2word(105,115,115,105)
, bytes2word(111,110,115,0)
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
