#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46hs_95readdir_35	((void*)startLabel+12)
#define CT_v309	((void*)startLabel+28)
#define F0_Directory_46hs_95readdir_35	((void*)startLabel+36)
#define FN_Directory_46hs_95readdir	((void*)startLabel+48)
#define CT_v310	((void*)startLabel+60)
#define CF_Directory_46hs_95readdir	((void*)startLabel+68)
#define FN_Directory_46readdir	((void*)startLabel+88)
#define CT_v311	((void*)startLabel+112)
#define F0_Directory_46readdir	((void*)startLabel+120)
#define FN_LAMBDA300	((void*)startLabel+148)
#define CT_v315	((void*)startLabel+180)
#define F0_LAMBDA300	((void*)startLabel+188)
#define FN_Directory_46lazyDirContents	((void*)startLabel+208)
#define CT_v316	((void*)startLabel+244)
#define F0_Directory_46lazyDirContents	((void*)startLabel+252)
#define FN_LAMBDA304	((void*)startLabel+292)
#define CT_v317	((void*)startLabel+316)
#define F0_LAMBDA304	((void*)startLabel+324)
#define FN_LAMBDA303	((void*)startLabel+344)
#define CT_v318	((void*)startLabel+364)
#define F0_LAMBDA303	((void*)startLabel+372)
#define FN_LAMBDA302	((void*)startLabel+400)
#define CT_v319	((void*)startLabel+424)
#define F0_LAMBDA302	((void*)startLabel+432)
#define FN_LAMBDA301	((void*)startLabel+448)
#define CT_v321	((void*)startLabel+468)
#define CF_LAMBDA301	((void*)startLabel+476)
#define FN_Directory_46hs_95opendir_35	((void*)startLabel+488)
#define CT_v322	((void*)startLabel+504)
#define F0_Directory_46hs_95opendir_35	((void*)startLabel+512)
#define FN_Directory_46hs_95opendir	((void*)startLabel+524)
#define CT_v323	((void*)startLabel+536)
#define CF_Directory_46hs_95opendir	((void*)startLabel+544)
#define FN_Directory_46opendir	((void*)startLabel+564)
#define CT_v324	((void*)startLabel+592)
#define F0_Directory_46opendir	((void*)startLabel+600)
#define FN_LAMBDA305	((void*)startLabel+632)
#define CT_v328	((void*)startLabel+664)
#define F0_LAMBDA305	((void*)startLabel+672)
#define CT_v329	((void*)startLabel+712)
#define FN_LAMBDA307	((void*)startLabel+752)
#define CT_v330	((void*)startLabel+764)
#define F0_LAMBDA307	((void*)startLabel+772)
#define FN_LAMBDA306	((void*)startLabel+788)
#define CT_v332	((void*)startLabel+808)
#define CF_LAMBDA306	((void*)startLabel+816)
#define FN_Directory_46hs_95closedir_35	((void*)startLabel+828)
#define CT_v333	((void*)startLabel+844)
#define F0_Directory_46hs_95closedir_35	((void*)startLabel+852)
#define FN_Directory_46hs_95closedir	((void*)startLabel+864)
#define CT_v334	((void*)startLabel+876)
#define CF_Directory_46hs_95closedir	((void*)startLabel+884)
#define FN_Directory_46closedir	((void*)startLabel+904)
#define CT_v335	((void*)startLabel+920)
#define F0_Directory_46closedir	((void*)startLabel+928)
#define ST_v331	((void*)startLabel+936)
#define ST_v320	((void*)startLabel+957)
void FR_Directory_46hs_95readdir_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_CString_46fromCString[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Directory_46patchIOErrorVal[];
extern Node FN_Prelude_46catch[];
void FR_Directory_46hs_95opendir_35(void);
extern Node FN_CString_46toCString[];
extern Node FN_Directory_46patchIOErrorFVal[];
void FR_Directory_46hs_95closedir_35(void);

static Node startLabel[] = {
  42
, bytes2word(1,0,0,1)
, useLabel(CT_v309)
,	/* FN_Directory_46hs_95readdir_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46hs_95readdir_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v309: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46hs_95readdir_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95readdir_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v310)
,	/* FN_Directory_46hs_95readdir: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v310: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95readdir: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95readdir))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46hs_95readdir_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v311)
,	/* FN_Directory_46readdir: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v311: (byte 0) */
  HW(4,1)
, 0
,	/* F0_Directory_46readdir: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46readdir),1)
, VAPTAG(useLabel(FN_Directory_46hs_95readdir))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA300),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v315)
,	/* FN_LAMBDA300: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,0)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v315: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA300: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA300),1)
, VAPTAG(useLabel(FN_CString_46fromCString))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v316)
,	/* FN_Directory_46lazyDirContents: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,8,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v316: (byte 0) */
  HW(7,1)
, 0
,	/* F0_Directory_46lazyDirContents: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46lazyDirContents),1)
, VAPTAG(useLabel(FN_LAMBDA301))
, VAPTAG(useLabel(FN_Directory_46readdir))
, VAPTAG(useLabel(FN_Directory_46patchIOErrorVal))
, CAPTAG(useLabel(FN_LAMBDA303),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, CAPTAG(useLabel(FN_LAMBDA304),1)
, VAPTAG(useLabel(FN_Prelude_46catch))
, bytes2word(1,0,0,1)
, useLabel(CT_v317)
,	/* FN_LAMBDA304: (byte 0) */
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v317: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA304: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA304),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v318)
,	/* FN_LAMBDA303: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v318: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA303: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA303),2)
, VAPTAG(useLabel(FN_Directory_46lazyDirContents))
, CAPTAG(useLabel(FN_LAMBDA302),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v319)
,	/* FN_LAMBDA302: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v319: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA302: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA302),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v321)
,	/* FN_LAMBDA301: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v320)
,	/* CT_v321: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA301: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA301))
, bytes2word(1,0,0,1)
, useLabel(CT_v322)
,	/* FN_Directory_46hs_95opendir_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46hs_95opendir_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v322: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46hs_95opendir_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95opendir_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v323)
,	/* FN_Directory_46hs_95opendir: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v323: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95opendir: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95opendir))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46hs_95opendir_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v324)
,	/* FN_Directory_46opendir: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v324: (byte 0) */
  HW(5,1)
, 0
,	/* F0_Directory_46opendir: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46opendir),1)
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Directory_46hs_95opendir))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA305),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v328)
,	/* FN_LAMBDA305: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v328: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA305: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA305),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v329)
,};
Node FN_Directory_46getDirectoryContents[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v329: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_Directory_46getDirectoryContents[] = {
  CAPTAG(useLabel(FN_Directory_46getDirectoryContents),1)
, VAPTAG(useLabel(FN_LAMBDA306))
, VAPTAG(useLabel(FN_Directory_46patchIOErrorFVal))
, useLabel(F0_Directory_46opendir)
, CAPTAG(useLabel(FN_LAMBDA307),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v330)
,	/* FN_LAMBDA307: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v330: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA307: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA307),1)
, VAPTAG(useLabel(FN_Directory_46lazyDirContents))
, bytes2word(0,0,0,0)
, useLabel(CT_v332)
,	/* FN_LAMBDA306: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v331)
,	/* CT_v332: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA306: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA306))
, bytes2word(1,0,0,1)
, useLabel(CT_v333)
,	/* FN_Directory_46hs_95closedir_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46hs_95closedir_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v333: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46hs_95closedir_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95closedir_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v334)
,	/* FN_Directory_46hs_95closedir: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v334: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95closedir: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95closedir))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46hs_95closedir_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v335)
,	/* FN_Directory_46closedir: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v335: (byte 0) */
  HW(1,1)
, 0
,	/* F0_Directory_46closedir: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46closedir),1)
, VAPTAG(useLabel(FN_Directory_46hs_95closedir))
,	/* ST_v331: (byte 0) */
  bytes2word(103,101,116,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(67,111,110,116)
, bytes2word(101,110,116,115)
,	/* ST_v320: (byte 1) */
  bytes2word(0,114,101,97)
, bytes2word(100,68,105,114)
, bytes2word(0,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_readdir" Directory.hs_readdir# 1 :: FFI.ForeignObj -> Prelude.2 */
extern Node* hs_readdir(void*);
#ifdef PROFILE
static SInfo pf_Directory_46hs_95readdir_35 = {"Directory","Directory.hs_readdir#","Prelude.2"};
#endif
C_HEADER(FR_Directory_46hs_95readdir_35) {
  NodePtr nodeptr;
  Node* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hs_readdir(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_Directory_46hs_95readdir_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "hs_opendir" Directory.hs_opendir# 1 :: PackedString.PackedString -> Prelude.2 */
extern Node* hs_opendir(char*);
#ifdef PROFILE
static SInfo pf_Directory_46hs_95opendir_35 = {"Directory","Directory.hs_opendir#","Prelude.2"};
#endif
C_HEADER(FR_Directory_46hs_95opendir_35) {
  NodePtr nodeptr;
  Node* result;
  char* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);

  result = hs_opendir(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_Directory_46hs_95opendir_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "hs_closedir" Directory.hs_closedir# 1 :: FFI.ForeignObj -> Prelude.Int */
extern HsInt hs_closedir(void*);
#ifdef PROFILE
static SInfo pf_Directory_46hs_95closedir_35 = {"Directory","Directory.hs_closedir#","Prelude.Int"};
#endif
C_HEADER(FR_Directory_46hs_95closedir_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hs_closedir(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_Directory_46hs_95closedir_35);
  C_RETURN(nodeptr);
}
