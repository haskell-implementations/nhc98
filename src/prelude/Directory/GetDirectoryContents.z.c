#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46hs_95readdir_35	((void*)startLabel+12)
#define CT_v310	((void*)startLabel+40)
#define F0_Directory_46hs_95readdir_35	((void*)startLabel+48)
#define FN_Directory_46hs_95readdir	((void*)startLabel+60)
#define CT_v312	((void*)startLabel+84)
#define CF_Directory_46hs_95readdir	((void*)startLabel+92)
#define FN_Directory_46readdir	((void*)startLabel+112)
#define CT_v314	((void*)startLabel+148)
#define F0_Directory_46readdir	((void*)startLabel+156)
#define FN_LAMBDA300	((void*)startLabel+184)
#define CT_v319	((void*)startLabel+228)
#define F0_LAMBDA300	((void*)startLabel+236)
#define FN_Directory_46lazyDirContents	((void*)startLabel+256)
#define CT_v321	((void*)startLabel+304)
#define F0_Directory_46lazyDirContents	((void*)startLabel+312)
#define FN_LAMBDA304	((void*)startLabel+352)
#define CT_v323	((void*)startLabel+388)
#define F0_LAMBDA304	((void*)startLabel+396)
#define FN_LAMBDA303	((void*)startLabel+416)
#define CT_v325	((void*)startLabel+448)
#define F0_LAMBDA303	((void*)startLabel+456)
#define FN_LAMBDA302	((void*)startLabel+484)
#define CT_v327	((void*)startLabel+520)
#define F0_LAMBDA302	((void*)startLabel+528)
#define FN_LAMBDA301	((void*)startLabel+544)
#define CT_v330	((void*)startLabel+576)
#define CF_LAMBDA301	((void*)startLabel+584)
#define FN_Directory_46hs_95opendir_35	((void*)startLabel+596)
#define CT_v332	((void*)startLabel+624)
#define F0_Directory_46hs_95opendir_35	((void*)startLabel+632)
#define FN_Directory_46hs_95opendir	((void*)startLabel+644)
#define CT_v334	((void*)startLabel+668)
#define CF_Directory_46hs_95opendir	((void*)startLabel+676)
#define FN_Directory_46opendir	((void*)startLabel+696)
#define CT_v336	((void*)startLabel+736)
#define F0_Directory_46opendir	((void*)startLabel+744)
#define FN_LAMBDA305	((void*)startLabel+776)
#define CT_v341	((void*)startLabel+816)
#define F0_LAMBDA305	((void*)startLabel+824)
#define CT_v343	((void*)startLabel+876)
#define FN_LAMBDA307	((void*)startLabel+916)
#define CT_v345	((void*)startLabel+940)
#define F0_LAMBDA307	((void*)startLabel+948)
#define FN_LAMBDA306	((void*)startLabel+964)
#define CT_v348	((void*)startLabel+996)
#define CF_LAMBDA306	((void*)startLabel+1004)
#define FN_Directory_46hs_95closedir_35	((void*)startLabel+1016)
#define CT_v350	((void*)startLabel+1044)
#define F0_Directory_46hs_95closedir_35	((void*)startLabel+1052)
#define FN_Directory_46hs_95closedir	((void*)startLabel+1064)
#define CT_v352	((void*)startLabel+1088)
#define CF_Directory_46hs_95closedir	((void*)startLabel+1096)
#define FN_Directory_46closedir	((void*)startLabel+1116)
#define CT_v354	((void*)startLabel+1144)
#define F0_Directory_46closedir	((void*)startLabel+1152)
#define ST_v353	((void*)startLabel+1160)
#define ST_v342	((void*)startLabel+1179)
#define ST_v346	((void*)startLabel+1210)
#define ST_v344	((void*)startLabel+1253)
#define ST_v351	((void*)startLabel+1295)
#define ST_v349	((void*)startLabel+1317)
#define ST_v333	((void*)startLabel+1340)
#define ST_v331	((void*)startLabel+1361)
#define ST_v311	((void*)startLabel+1383)
#define ST_v309	((void*)startLabel+1404)
#define ST_v320	((void*)startLabel+1426)
#define ST_v324	((void*)startLabel+1452)
#define ST_v328	((void*)startLabel+1490)
#define ST_v326	((void*)startLabel+1528)
#define ST_v322	((void*)startLabel+1566)
#define ST_v335	((void*)startLabel+1604)
#define ST_v339	((void*)startLabel+1622)
#define ST_v313	((void*)startLabel+1652)
#define ST_v317	((void*)startLabel+1670)
#define ST_v347	((void*)startLabel+1700)
#define ST_v329	((void*)startLabel+1721)
extern Node TM_Directory[];
void FR_Directory_46hs_95readdir_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_Directory[];
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
, useLabel(CT_v310)
,	/* FN_Directory_46hs_95readdir_35: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46hs_95readdir_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 270001
, useLabel(ST_v309)
,	/* CT_v310: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46hs_95readdir_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95readdir_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v312)
,	/* FN_Directory_46hs_95readdir: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 270001
, useLabel(ST_v311)
,	/* CT_v312: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95readdir: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95readdir))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46hs_95readdir_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v314)
,	/* FN_Directory_46readdir: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 300001
, useLabel(ST_v313)
,	/* CT_v314: (byte 0) */
  HW(4,1)
, 0
,	/* F0_Directory_46readdir: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46readdir),1)
, VAPTAG(useLabel(FN_Directory_46hs_95readdir))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA300),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v319)
,	/* FN_LAMBDA300: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_I1)
, bytes2word(HEAP_CVAL_IN3,HEAP_P1,0,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 310018
, useLabel(ST_v317)
,	/* CT_v319: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA300: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA300),1)
, VAPTAG(useLabel(FN_CString_46fromCString))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v321)
,	/* FN_Directory_46lazyDirContents: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,8,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 430001
, useLabel(ST_v320)
,	/* CT_v321: (byte 0) */
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
, useLabel(CT_v323)
,	/* FN_LAMBDA304: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_IN3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 470010
, useLabel(ST_v322)
,	/* CT_v323: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA304: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA304),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v325)
,	/* FN_LAMBDA303: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 440019
, useLabel(ST_v324)
,	/* CT_v325: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA303: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA303),2)
, VAPTAG(useLabel(FN_Directory_46lazyDirContents))
, CAPTAG(useLabel(FN_LAMBDA302),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v327)
,	/* FN_LAMBDA302: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 450019
, useLabel(ST_v326)
,	/* CT_v327: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA302: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA302),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v330)
,	/* FN_LAMBDA301: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v329)
, 440035
, useLabel(ST_v328)
,	/* CT_v330: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA301: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA301))
, bytes2word(1,0,0,1)
, useLabel(CT_v332)
,	/* FN_Directory_46hs_95opendir_35: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46hs_95opendir_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 170001
, useLabel(ST_v331)
,	/* CT_v332: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46hs_95opendir_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95opendir_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v334)
,	/* FN_Directory_46hs_95opendir: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 170001
, useLabel(ST_v333)
,	/* CT_v334: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95opendir: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95opendir))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46hs_95opendir_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v336)
,	/* FN_Directory_46opendir: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 200001
, useLabel(ST_v335)
,	/* CT_v336: (byte 0) */
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
, useLabel(CT_v341)
,	/* FN_LAMBDA305: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_IN3,HEAP_P1)
, bytes2word(0,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 220017
, useLabel(ST_v339)
,	/* CT_v341: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA305: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA305),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v343)
,};
Node FN_Directory_46getDirectoryContents[] = {
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 370001
, useLabel(ST_v342)
,	/* CT_v343: (byte 0) */
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
, useLabel(CT_v345)
,	/* FN_LAMBDA307: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 380008
, useLabel(ST_v344)
,	/* CT_v345: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA307: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA307),1)
, VAPTAG(useLabel(FN_Directory_46lazyDirContents))
, bytes2word(0,0,0,0)
, useLabel(CT_v348)
,	/* FN_LAMBDA306: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v347)
, 380025
, useLabel(ST_v346)
,	/* CT_v348: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA306: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA306))
, bytes2word(1,0,0,1)
, useLabel(CT_v350)
,	/* FN_Directory_46hs_95closedir_35: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46hs_95closedir_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v349)
,	/* CT_v350: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46hs_95closedir_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95closedir_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v352)
,	/* FN_Directory_46hs_95closedir: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v351)
,	/* CT_v352: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95closedir: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95closedir))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46hs_95closedir_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v354)
,	/* FN_Directory_46closedir: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 120001
, useLabel(ST_v353)
,	/* CT_v354: (byte 0) */
  HW(1,1)
, 0
,	/* F0_Directory_46closedir: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46closedir),1)
, VAPTAG(useLabel(FN_Directory_46hs_95closedir))
,	/* ST_v353: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,99,108)
, bytes2word(111,115,101,100)
,	/* ST_v342: (byte 3) */
  bytes2word(105,114,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,103,101,116)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,67,111,110)
, bytes2word(116,101,110,116)
,	/* ST_v346: (byte 2) */
  bytes2word(115,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(103,101,116,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(67,111,110,116)
, bytes2word(101,110,116,115)
, bytes2word(58,51,56,58)
, bytes2word(50,53,45,51)
, bytes2word(56,58,52,54)
,	/* ST_v344: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,103)
, bytes2word(101,116,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,67)
, bytes2word(111,110,116,101)
, bytes2word(110,116,115,58)
, bytes2word(51,56,58,56)
, bytes2word(45,51,56,58)
,	/* ST_v351: (byte 3) */
  bytes2word(53,55,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,104,115,95)
, bytes2word(99,108,111,115)
, bytes2word(101,100,105,114)
,	/* ST_v349: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,104)
, bytes2word(115,95,99,108)
, bytes2word(111,115,101,100)
,	/* ST_v333: (byte 4) */
  bytes2word(105,114,35,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,104,115)
, bytes2word(95,111,112,101)
, bytes2word(110,100,105,114)
,	/* ST_v331: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,104)
, bytes2word(115,95,111,112)
, bytes2word(101,110,100,105)
,	/* ST_v311: (byte 3) */
  bytes2word(114,35,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,104,115,95)
, bytes2word(114,101,97,100)
,	/* ST_v309: (byte 4) */
  bytes2word(100,105,114,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,104,115)
, bytes2word(95,114,101,97)
, bytes2word(100,100,105,114)
,	/* ST_v320: (byte 2) */
  bytes2word(35,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(108,97,122,121)
, bytes2word(68,105,114,67)
, bytes2word(111,110,116,101)
,	/* ST_v324: (byte 4) */
  bytes2word(110,116,115,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,108,97)
, bytes2word(122,121,68,105)
, bytes2word(114,67,111,110)
, bytes2word(116,101,110,116)
, bytes2word(115,58,52,52)
, bytes2word(58,49,57,45)
, bytes2word(52,52,58,53)
,	/* ST_v328: (byte 2) */
  bytes2word(53,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(108,97,122,121)
, bytes2word(68,105,114,67)
, bytes2word(111,110,116,101)
, bytes2word(110,116,115,58)
, bytes2word(52,52,58,51)
, bytes2word(53,45,52,52)
,	/* ST_v326: (byte 4) */
  bytes2word(58,52,51,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,108,97)
, bytes2word(122,121,68,105)
, bytes2word(114,67,111,110)
, bytes2word(116,101,110,116)
, bytes2word(115,58,52,53)
, bytes2word(58,49,57,45)
, bytes2word(52,53,58,51)
,	/* ST_v322: (byte 2) */
  bytes2word(53,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(108,97,122,121)
, bytes2word(68,105,114,67)
, bytes2word(111,110,116,101)
, bytes2word(110,116,115,58)
, bytes2word(52,55,58,49)
, bytes2word(48,45,52,56)
,	/* ST_v335: (byte 4) */
  bytes2word(58,50,54,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,111,112)
, bytes2word(101,110,100,105)
,	/* ST_v339: (byte 2) */
  bytes2word(114,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(111,112,101,110)
, bytes2word(100,105,114,58)
, bytes2word(50,50,58,49)
, bytes2word(55,45,50,50)
,	/* ST_v313: (byte 4) */
  bytes2word(58,50,57,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,114,101)
, bytes2word(97,100,100,105)
,	/* ST_v317: (byte 2) */
  bytes2word(114,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(114,101,97,100)
, bytes2word(100,105,114,58)
, bytes2word(51,49,58,49)
, bytes2word(56,45,51,49)
,	/* ST_v347: (byte 4) */
  bytes2word(58,50,57,0)
, bytes2word(103,101,116,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(67,111,110,116)
, bytes2word(101,110,116,115)
,	/* ST_v329: (byte 1) */
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
