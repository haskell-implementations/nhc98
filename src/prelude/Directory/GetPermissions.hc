#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46hs_95getperms_35	((void*)startLabel+8)
#define CT_v255	((void*)startLabel+24)
#define F0_Directory_46hs_95getperms_35	((void*)startLabel+32)
#define FN_Directory_46hs_95getperms	((void*)startLabel+44)
#define CT_v256	((void*)startLabel+56)
#define CF_Directory_46hs_95getperms	((void*)startLabel+64)
#define FN_Directory_46getperms	((void*)startLabel+84)
#define CT_v257	((void*)startLabel+112)
#define F0_Directory_46getperms	((void*)startLabel+120)
#define FN_LAMBDA252	((void*)startLabel+152)
#define CT_v264	((void*)startLabel+200)
#define F0_LAMBDA252	((void*)startLabel+208)
#define CT_v265	((void*)startLabel+244)
#define FN_LAMBDA253	((void*)startLabel+276)
#define CT_v267	((void*)startLabel+296)
#define CF_LAMBDA253	((void*)startLabel+304)
#define ST_v266	((void*)startLabel+308)
void FR_Directory_46hs_95getperms_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Directory_46toPerm[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Directory_46patchIOErrorFVal[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v255)
,	/* FN_Directory_46hs_95getperms_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46hs_95getperms_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v255: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46hs_95getperms_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95getperms_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v256)
,	/* FN_Directory_46hs_95getperms: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v256: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95getperms: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95getperms))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46hs_95getperms_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v257)
,	/* FN_Directory_46getperms: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v257: (byte 0) */
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
, useLabel(CT_v264)
,	/* FN_LAMBDA252: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,4)
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,0)
, bytes2word(HEAP_I1,HEAP_I2,HEAP_P1,3)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,6,HEAP_CVAL_N1)
, bytes2word(2,HEAP_P1,4,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(0,4,0)
,	/* CT_v264: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA252: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA252),1)
, VAPTAG(useLabel(FN_Directory_46toPerm))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v265)
,};
Node FN_Directory_46getPermissions[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v265: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Directory_46getPermissions[] = {
  CAPTAG(useLabel(FN_Directory_46getPermissions),1)
, VAPTAG(useLabel(FN_LAMBDA253))
, VAPTAG(useLabel(FN_Directory_46patchIOErrorFVal))
, useLabel(F0_Directory_46getperms)
, bytes2word(0,0,0,0)
, useLabel(CT_v267)
,	/* FN_LAMBDA253: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v266)
,	/* CT_v267: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA253: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA253))
,	/* ST_v266: (byte 0) */
  bytes2word(103,101,116,80)
, bytes2word(101,114,109,105)
, bytes2word(115,115,105,111)
, bytes2word(110,115,0,0)
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
