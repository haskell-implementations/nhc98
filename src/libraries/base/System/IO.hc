#include "newmacros.h"
#include "runtime.h"

#define FN_System_46IO_46c_95getpid_35	((void*)startLabel+8)
#define CT_v519	((void*)startLabel+24)
#define F0_System_46IO_46c_95getpid_35	((void*)startLabel+32)
#define FN_System_46IO_46c_95getpid	((void*)startLabel+44)
#define CT_v520	((void*)startLabel+56)
#define CF_System_46IO_46c_95getpid	((void*)startLabel+64)
#define FN_System_46IO_46pathSeparator	((void*)startLabel+84)
#define CT_v521	((void*)startLabel+96)
#define CF_System_46IO_46pathSeparator	((void*)startLabel+104)
#define FN_System_46IO_46openTempFile_39	((void*)startLabel+124)
#define CT_v522	((void*)startLabel+164)
#define F0_System_46IO_46openTempFile_39	((void*)startLabel+172)
#define FN_LAMBDA513	((void*)startLabel+216)
#define CT_v523	((void*)startLabel+236)
#define F0_LAMBDA513	((void*)startLabel+244)
#define FN_System_46IO_46Prelude_46327_46findTempName	((void*)startLabel+272)
#define CT_v524	((void*)startLabel+340)
#define F0_System_46IO_46Prelude_46327_46findTempName	((void*)startLabel+348)
#define FN_LAMBDA512	((void*)startLabel+396)
#define CT_v525	((void*)startLabel+420)
#define F0_LAMBDA512	((void*)startLabel+428)
#define FN_System_46IO_46Prelude_46334_46combine	((void*)startLabel+448)
#define v526	((void*)startLabel+460)
#define v528	((void*)startLabel+470)
#define v530	((void*)startLabel+490)
#define v532	((void*)startLabel+518)
#define CT_v534	((void*)startLabel+540)
#define F0_System_46IO_46Prelude_46334_46combine	((void*)startLabel+548)
#define FN_LAMBDA511	((void*)startLabel+588)
#define CT_v536	((void*)startLabel+608)
#define CF_LAMBDA511	((void*)startLabel+616)
#define FN_LAMBDA510	((void*)startLabel+628)
#define CT_v537	((void*)startLabel+640)
#define F0_LAMBDA510	((void*)startLabel+648)
#define FN_LAMBDA509	((void*)startLabel+660)
#define CT_v538	((void*)startLabel+672)
#define F0_LAMBDA509	((void*)startLabel+680)
#define FN_LAMBDA508	((void*)startLabel+692)
#define v546	((void*)startLabel+728)
#define v547	((void*)startLabel+747)
#define v554	((void*)startLabel+762)
#define v551	((void*)startLabel+766)
#define v548	((void*)startLabel+795)
#define v543	((void*)startLabel+800)
#define v539	((void*)startLabel+805)
#define CT_v555	((void*)startLabel+828)
#define F0_LAMBDA508	((void*)startLabel+836)
#define FN_LAMBDA507	((void*)startLabel+884)
#define CT_v557	((void*)startLabel+904)
#define CF_LAMBDA507	((void*)startLabel+912)
#define FN_LAMBDA506	((void*)startLabel+924)
#define CT_v559	((void*)startLabel+944)
#define CF_LAMBDA506	((void*)startLabel+952)
#define CT_v560	((void*)startLabel+1008)
#define FN_LAMBDA514	((void*)startLabel+1036)
#define CT_v562	((void*)startLabel+1056)
#define CF_LAMBDA514	((void*)startLabel+1064)
#define CT_v563	((void*)startLabel+1120)
#define FN_LAMBDA515	((void*)startLabel+1148)
#define CT_v564	((void*)startLabel+1168)
#define CF_LAMBDA515	((void*)startLabel+1176)
#define CT_v565	((void*)startLabel+1232)
#define FN_LAMBDA516	((void*)startLabel+1260)
#define CT_v566	((void*)startLabel+1280)
#define CF_LAMBDA516	((void*)startLabel+1288)
#define CT_v567	((void*)startLabel+1344)
#define FN_LAMBDA517	((void*)startLabel+1372)
#define CT_v569	((void*)startLabel+1392)
#define CF_LAMBDA517	((void*)startLabel+1400)
#define CT_v570	((void*)startLabel+1436)
#define CT_v571	((void*)startLabel+1476)
#define CT_v572	((void*)startLabel+1524)
#define CT_v573	((void*)startLabel+1580)
#define ST_v558	((void*)startLabel+1604)
#define ST_v535	((void*)startLabel+1605)
#define ST_v556	((void*)startLabel+1667)
#define ST_v561	((void*)startLabel+1697)
#define ST_v568	((void*)startLabel+1716)
void FR_System_46IO_46c_95getpid_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_Prelude_46Show_46Prelude_46Int[];
extern Node FN_Prelude_46show[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_IO_46openFile[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46null[];
extern Node FN_Prelude_46last[];
extern Node CF_Prelude_46otherwise[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Prelude_46flip[];
extern Node F0_Prelude_46Eq_46Prelude_46Char_46_61_61[];
extern Node FN_Prelude_46break[];
extern Node FN_Prelude_46reverse[];
extern Node FN_Prelude_46_36[];
extern Node FN_Prelude_46error[];
extern Node C0__40_41[];
extern Node FN_Prelude_46return[];
extern Node F0_IO_46openFile[];
extern Node FN_IO_46bracket[];
extern Node F0_IO_46hClose[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v519)
,	/* FN_System_46IO_46c_95getpid_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46IO_46c_95getpid_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v519: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46IO_46c_95getpid_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46IO_46c_95getpid_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v520)
,	/* FN_System_46IO_46c_95getpid: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v520: (byte 0) */
  HW(2,0)
, 0
,	/* CF_System_46IO_46c_95getpid: (byte 0) */
  VAPTAG(useLabel(FN_System_46IO_46c_95getpid))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_System_46IO_46c_95getpid_35)
, bytes2word(0,0,0,0)
, useLabel(CT_v521)
,	/* FN_System_46IO_46pathSeparator: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_CHAR_P1,47,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v521: (byte 0) */
  HW(0,0)
, 0
,	/* CF_System_46IO_46pathSeparator: (byte 0) */
  VAPTAG(useLabel(FN_System_46IO_46pathSeparator))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v522)
,	/* FN_System_46IO_46openTempFile_39: (byte 0) */
  bytes2word(ZAP_ARG_I1,ZAP_ARG,4,ZAP_ARG)
, bytes2word(5,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_I1,HEAP_P1,0,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v522: (byte 0) */
  HW(6,5)
, 0
,	/* F0_System_46IO_46openTempFile_39: (byte 0) */
  CAPTAG(useLabel(FN_System_46IO_46openTempFile_39),5)
, VAPTAG(useLabel(FN_LAMBDA508))
, VAPTAG(useLabel(FN_LAMBDA509))
, VAPTAG(useLabel(FN_LAMBDA510))
, CAPTAG(useLabel(FN_LAMBDA513),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_System_46IO_46c_95getpid)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v523)
,	/* FN_LAMBDA513: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v523: (byte 0) */
  HW(2,4)
, 0
,	/* F0_LAMBDA513: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA513),4)
, VAPTAG(useLabel(FN_System_46IO_46Prelude_46327_46findTempName))
, useLabel(CF_Prelude_46Show_46Prelude_46Int)
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v524)
,	/* FN_System_46IO_46Prelude_46327_46findTempName: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_ARG,4)
, bytes2word(HEAP_CVAL_I3,HEAP_P1,0,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,3)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_P1,0,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,9,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(3,0,0)
,	/* CT_v524: (byte 0) */
  HW(8,5)
, 0
,	/* F0_System_46IO_46Prelude_46327_46findTempName: (byte 0) */
  CAPTAG(useLabel(FN_System_46IO_46Prelude_46327_46findTempName),5)
, VAPTAG(useLabel(FN_Prelude_46show))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, CAPTAG(useLabel(FN_System_46IO_46Prelude_46334_46combine),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_IO_46openFile))
, CAPTAG(useLabel(FN_LAMBDA512),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v525)
,	/* FN_LAMBDA512: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v525: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA512: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA512),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v534)
,	/* FN_System_46IO_46Prelude_46334_46combine: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,EVAL,NEEDHEAP_I32,JUMPFALSE)
,	/* v526: (byte 4) */
  bytes2word(4,0,PUSH_ARG_I1,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(EVAL,JUMPFALSE,4,0)
,	/* v528: (byte 2) */
  bytes2word(PUSH_ARG_I2,RETURN_EVAL,PUSH_CVAL_P1,4)
, bytes2word(EVAL,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,EVAL,NEEDHEAP_I32)
, bytes2word(EQ_W,JUMPFALSE,8,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_ARG_ARG_RET_EVAL)
,	/* v530: (byte 2) */
  bytes2word(1,2,PUSH_CVAL_P1,7)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,23)
, bytes2word(0,HEAP_CVAL_N1,1,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,HEAP_OFF_N1)
,	/* v532: (byte 2) */
  bytes2word(5,RETURN_EVAL,HEAP_CVAL_P1,8)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v534: (byte 0) */
  HW(7,2)
, 0
,	/* F0_System_46IO_46Prelude_46334_46combine: (byte 0) */
  CAPTAG(useLabel(FN_System_46IO_46Prelude_46334_46combine),2)
, VAPTAG(useLabel(FN_Prelude_46null))
, useLabel(CF_System_46IO_46pathSeparator)
, VAPTAG(useLabel(FN_Prelude_46last))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_LAMBDA511))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v536)
,	/* FN_LAMBDA511: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v535)
,	/* CT_v536: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA511: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA511))
, bytes2word(1,0,0,1)
, useLabel(CT_v537)
,	/* FN_LAMBDA510: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v537: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA510: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA510),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v538)
,	/* FN_LAMBDA509: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v538: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA509: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA509),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v555)
,	/* FN_LAMBDA508: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CHAR_P1)
, bytes2word(46,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,ZAP_ARG_I1)
, bytes2word(EVAL,UNPACK,2,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v546: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(23),BOT(23))
, bytes2word(POP_I1,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,2,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,9,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,5)
,	/* v547: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(46),BOT(46),TOP(10),BOT(10))
,	/* v554: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v551: (byte 2) */
  bytes2word(31,0,POP_I1,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(2,HEAP_I1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,2)
, bytes2word(HEAP_I2,HEAP_CVAL_N1,2,HEAP_CHAR_P1)
, bytes2word(46,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,11)
,	/* v548: (byte 3) */
  bytes2word(HEAP_OFF_N1,5,RETURN,POP_P1)
,	/* v543: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v539: (byte 1) */
  bytes2word(0,HEAP_CVAL_P1,10,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v555: (byte 0) */
  HW(9,1)
, 0
,	/* F0_LAMBDA508: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA508),1)
, CAPTAG(useLabel(FN_Prelude_46flip),1)
, useLabel(F0_Prelude_46Eq_46Prelude_46Char_46_61_61)
, VAPTAG(useLabel(FN_Prelude_46break))
, VAPTAG(useLabel(FN_Prelude_46reverse))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_36))
, VAPTAG(useLabel(FN_LAMBDA506))
, VAPTAG(useLabel(FN_LAMBDA507))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v557)
,	/* FN_LAMBDA507: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v556)
,	/* CT_v557: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA507: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA507))
, bytes2word(0,0,0,0)
, useLabel(CT_v559)
,	/* FN_LAMBDA506: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v558)
,	/* CT_v559: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA506: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA506))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v560)
,};
Node FN_System_46IO_46openBinaryTempFileWithDefaultPermissions[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_OFF_N1)
, bytes2word(5,HEAP_CADR_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 438
, CONSTR(1,0,0)
,	/* CT_v560: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_System_46IO_46openBinaryTempFileWithDefaultPermissions[] = {
  CAPTAG(useLabel(FN_System_46IO_46openBinaryTempFileWithDefaultPermissions),2)
, VAPTAG(useLabel(FN_LAMBDA514))
, VAPTAG(useLabel(FN_System_46IO_46openTempFile_39))
, bytes2word(0,0,0,0)
, useLabel(CT_v562)
,	/* FN_LAMBDA514: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v561)
,	/* CT_v562: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA514: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA514))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v563)
,};
Node FN_System_46IO_46openTempFileWithDefaultPermissions[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_OFF_N1)
, bytes2word(5,HEAP_CADR_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 438
, CONSTR(0,0,0)
,	/* CT_v563: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_System_46IO_46openTempFileWithDefaultPermissions[] = {
  CAPTAG(useLabel(FN_System_46IO_46openTempFileWithDefaultPermissions),2)
, VAPTAG(useLabel(FN_LAMBDA515))
, VAPTAG(useLabel(FN_System_46IO_46openTempFile_39))
, bytes2word(0,0,0,0)
, useLabel(CT_v564)
,	/* FN_LAMBDA515: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v561)
,	/* CT_v564: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA515: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA515))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v565)
,};
Node FN_System_46IO_46openBinaryTempFile[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_OFF_N1)
, bytes2word(5,HEAP_CADR_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 384
, CONSTR(1,0,0)
,	/* CT_v565: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_System_46IO_46openBinaryTempFile[] = {
  CAPTAG(useLabel(FN_System_46IO_46openBinaryTempFile),2)
, VAPTAG(useLabel(FN_LAMBDA516))
, VAPTAG(useLabel(FN_System_46IO_46openTempFile_39))
, bytes2word(0,0,0,0)
, useLabel(CT_v566)
,	/* FN_LAMBDA516: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v561)
,	/* CT_v566: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA516: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA516))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v567)
,};
Node FN_System_46IO_46openTempFile[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_OFF_N1)
, bytes2word(5,HEAP_CADR_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 384
, CONSTR(0,0,0)
,	/* CT_v567: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_System_46IO_46openTempFile[] = {
  CAPTAG(useLabel(FN_System_46IO_46openTempFile),2)
, VAPTAG(useLabel(FN_LAMBDA517))
, VAPTAG(useLabel(FN_System_46IO_46openTempFile_39))
, bytes2word(0,0,0,0)
, useLabel(CT_v569)
,	/* FN_LAMBDA517: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v568)
,	/* CT_v569: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA517: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA517))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v570)
,};
Node FN_System_46IO_46hSetBinaryMode[] = {
  bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,NEEDHEAP_I32,PUSH_CVAL_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v570: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_System_46IO_46hSetBinaryMode[] = {
  CAPTAG(useLabel(FN_System_46IO_46hSetBinaryMode),3)
, useLabel(C0__40_41)
, VAPTAG(useLabel(FN_Prelude_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v571)
,};
Node FN_System_46IO_46openBinaryFile[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v571: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_System_46IO_46openBinaryFile[] = {
  VAPTAG(useLabel(FN_System_46IO_46openBinaryFile))
, useLabel(F0_IO_46openFile)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v572)
,};
Node FN_System_46IO_46withBinaryFile[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,6,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v572: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_System_46IO_46withBinaryFile[] = {
  CAPTAG(useLabel(FN_System_46IO_46withBinaryFile),2)
, VAPTAG(useLabel(FN_System_46IO_46openBinaryFile))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_IO_46bracket),1)
, useLabel(F0_IO_46hClose)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v573)
,};
Node FN_System_46IO_46withFile[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v573: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_System_46IO_46withFile[] = {
  CAPTAG(useLabel(FN_System_46IO_46withFile),2)
, VAPTAG(useLabel(FN_IO_46openFile))
, CAPTAG(useLabel(FN_IO_46bracket),1)
, useLabel(F0_IO_46hClose)
,	/* ST_v558: (byte 0) */
 	/* ST_v535: (byte 1) */
  bytes2word(0,83,121,115)
, bytes2word(116,101,109,46)
, bytes2word(73,79,58,32)
, bytes2word(80,97,116,116)
, bytes2word(101,114,110,32)
, bytes2word(109,97,116,99)
, bytes2word(104,32,102,97)
, bytes2word(105,108,117,114)
, bytes2word(101,32,105,110)
, bytes2word(32,102,117,110)
, bytes2word(99,116,105,111)
, bytes2word(110,32,97,116)
, bytes2word(32,53,57,52)
, bytes2word(58,57,45,53)
, bytes2word(57,56,58,53)
,	/* ST_v556: (byte 3) */
  bytes2word(55,46,0,98)
, bytes2word(117,103,32,105)
, bytes2word(110,32,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,73,79,46)
, bytes2word(111,112,101,110)
, bytes2word(84,101,109,112)
, bytes2word(70,105,108,101)
,	/* ST_v561: (byte 1) */
  bytes2word(0,111,112,101)
, bytes2word(110,66,105,110)
, bytes2word(97,114,121,84)
, bytes2word(101,109,112,70)
,	/* ST_v568: (byte 4) */
  bytes2word(105,108,101,0)
, bytes2word(111,112,101,110)
, bytes2word(84,101,109,112)
, bytes2word(70,105,108,101)
, bytes2word(0,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "getpid" System.IO.c_getpid# 1 :: Prelude.() -> Prelude.Int */
extern HsInt getpid(void);
#ifdef PROFILE
static SInfo pf_System_46IO_46c_95getpid_35 = {"System.IO","System.IO.c_getpid#","Prelude.Int"};
#endif
C_HEADER(FR_System_46IO_46c_95getpid_35) {
  NodePtr nodeptr;
  HsInt result;
  /* void arg1 */;

  result = getpid();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46IO_46c_95getpid_35);
  C_RETURN(nodeptr);
}
