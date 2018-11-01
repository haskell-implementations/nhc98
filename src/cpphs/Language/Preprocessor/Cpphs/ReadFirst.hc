#include "newmacros.h"
#include "runtime.h"

#define CT_v284	((void*)startLabel+64)
#define FN_LAMBDA282	((void*)startLabel+104)
#define CT_v286	((void*)startLabel+124)
#define CF_LAMBDA282	((void*)startLabel+132)
#define FN_Language_46Preprocessor_46Cpphs_46ReadFirst_46Prelude_46186_46try	((void*)startLabel+156)
#define v288	((void*)startLabel+168)
#define v289	((void*)startLabel+286)
#define CT_v291	((void*)startLabel+340)
#define F0_Language_46Preprocessor_46Cpphs_46ReadFirst_46Prelude_46186_46try	((void*)startLabel+348)
#define FN_LAMBDA281	((void*)startLabel+472)
#define v292	((void*)startLabel+495)
#define CT_v294	((void*)startLabel+516)
#define F0_LAMBDA281	((void*)startLabel+524)
#define FN_LAMBDA280	((void*)startLabel+560)
#define CT_v295	((void*)startLabel+584)
#define F0_LAMBDA280	((void*)startLabel+592)
#define FN_LAMBDA279	((void*)startLabel+608)
#define CT_v297	((void*)startLabel+628)
#define CF_LAMBDA279	((void*)startLabel+636)
#define FN_LAMBDA278	((void*)startLabel+648)
#define CT_v299	((void*)startLabel+668)
#define CF_LAMBDA278	((void*)startLabel+676)
#define FN_LAMBDA277	((void*)startLabel+688)
#define CT_v301	((void*)startLabel+708)
#define CF_LAMBDA277	((void*)startLabel+716)
#define FN_LAMBDA276	((void*)startLabel+728)
#define CT_v302	((void*)startLabel+748)
#define CF_LAMBDA276	((void*)startLabel+756)
#define FN_LAMBDA275	((void*)startLabel+768)
#define CT_v304	((void*)startLabel+788)
#define CF_LAMBDA275	((void*)startLabel+796)
#define FN_LAMBDA274	((void*)startLabel+808)
#define CT_v306	((void*)startLabel+828)
#define CF_LAMBDA274	((void*)startLabel+836)
#define FN_LAMBDA273	((void*)startLabel+848)
#define CT_v308	((void*)startLabel+868)
#define CF_LAMBDA273	((void*)startLabel+876)
#define FN_Language_46Preprocessor_46Cpphs_46ReadFirst_46Prelude_46185_46cons	((void*)startLabel+892)
#define v309	((void*)startLabel+904)
#define CT_v311	((void*)startLabel+924)
#define F0_Language_46Preprocessor_46Cpphs_46ReadFirst_46Prelude_46185_46cons	((void*)startLabel+932)
#define ST_v296	((void*)startLabel+940)
#define ST_v303	((void*)startLabel+941)
#define ST_v300	((void*)startLabel+944)
#define ST_v305	((void*)startLabel+962)
#define ST_v285	((void*)startLabel+981)
#define ST_v307	((void*)startLabel+983)
#define ST_v298	((void*)startLabel+1010)
extern Node FN_Language_46Preprocessor_46Cpphs_46Position_46directory[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Monad_46when[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_Prelude_46concat[];
extern Node FN_List_46intersperse[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Show_46Language_46Preprocessor_46Cpphs_46Position_46Posn_46show[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_IO_46hPutStrLn[];
extern Node CF_IO_46stderr[];
extern Node FN_Prelude_46_36[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node FN_Directory_46doesFileExist[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46not[];
extern Node FN_Prelude_46readFile[];
extern Node FN_Prelude_46null[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v284)
,};
Node FN_Language_46Preprocessor_46Cpphs_46ReadFirst_46readFirst[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,2,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(6,HEAP_P1,0,HEAP_OFF_N1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_ARG,4,HEAP_I1,HEAP_ARG_ARG)
, bytes2word(3,2,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,10,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v284: (byte 0) */
  HW(5,4)
, 0
,};
Node F0_Language_46Preprocessor_46Cpphs_46ReadFirst_46readFirst[] = {
  CAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46ReadFirst_46readFirst),4)
, VAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46Position_46directory))
, CAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46ReadFirst_46Prelude_46185_46cons),2)
, VAPTAG(useLabel(FN_LAMBDA282))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46ReadFirst_46Prelude_46186_46try))
, bytes2word(0,0,0,0)
, useLabel(CT_v286)
,	/* FN_LAMBDA282: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v285)
,	/* CT_v286: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA282: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA282))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v291)
,	/* FN_Language_46Preprocessor_46Cpphs_46ReadFirst_46Prelude_46186_46try: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(NEEDHEAP_P1,59,TABLESWITCH,2)
,	/* v288: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(122),BOT(122))
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,2)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,6,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,6)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,15)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,14)
, bytes2word(HEAP_CVAL_P1,15,HEAP_ARG,4)
, bytes2word(HEAP_CVAL_P1,16,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,16)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,16,HEAP_OFF_N1,28)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,16)
, bytes2word(HEAP_ARG,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,16,HEAP_OFF_N1,35)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,17)
, bytes2word(HEAP_CVAL_P1,18,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,19,HEAP_OFF_N1,44)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,20)
, bytes2word(HEAP_CVAL_P1,16,HEAP_OFF_N1,2)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_P1,21)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,22)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(23,HEAP_OFF_N1,14,HEAP_OFF_N1)
,	/* v289: (byte 2) */
  bytes2word(4,RETURN_EVAL,UNPACK,2)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CHAR_P1,47)
, bytes2word(HEAP_ARG,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(16,HEAP_I1,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,24,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,25,HEAP_I2,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG,5,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,26)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,10)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(1,2,0)
,	/* CT_v291: (byte 0) */
  HW(24,6)
, 0
,	/* F0_Language_46Preprocessor_46Cpphs_46ReadFirst_46Prelude_46186_46try: (byte 0) */
  CAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46ReadFirst_46Prelude_46186_46try),6)
, CAPTAG(useLabel(FN_Monad_46when),1)
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, VAPTAG(useLabel(FN_LAMBDA273))
, VAPTAG(useLabel(FN_LAMBDA274))
, VAPTAG(useLabel(FN_Prelude_46concat))
, VAPTAG(useLabel(FN_LAMBDA275))
, CAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46ReadFirst_46Prelude_46185_46cons),2)
, VAPTAG(useLabel(FN_LAMBDA276))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_List_46intersperse))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA277))
, VAPTAG(useLabel(FN_Prelude_46Show_46Language_46Preprocessor_46Cpphs_46Position_46Posn_46show))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_IO_46hPutStrLn))
, useLabel(CF_IO_46stderr)
, VAPTAG(useLabel(FN_Prelude_46_36))
, VAPTAG(useLabel(FN_LAMBDA278))
, VAPTAG(useLabel(FN_LAMBDA279))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, VAPTAG(useLabel(FN_Directory_46doesFileExist))
, CAPTAG(useLabel(FN_LAMBDA281),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v294)
,	/* FN_LAMBDA281: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(8,ZAP_ARG,8,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,13,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,2)
, bytes2word(3,HEAP_ARG_ARG,4,5)
,	/* v292: (byte 3) */
  bytes2word(HEAP_ARG_ARG_RET_EVAL,6,1,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v294: (byte 0) */
  HW(5,8)
, 0
,	/* F0_LAMBDA281: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA281),8)
, VAPTAG(useLabel(FN_Prelude_46not))
, VAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46ReadFirst_46Prelude_46186_46try))
, VAPTAG(useLabel(FN_Prelude_46readFile))
, CAPTAG(useLabel(FN_LAMBDA280),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v295)
,	/* FN_LAMBDA280: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v295: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA280: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA280),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v297)
,	/* FN_LAMBDA279: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v296)
,	/* CT_v297: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA279: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA279))
, bytes2word(0,0,0,0)
, useLabel(CT_v299)
,	/* FN_LAMBDA278: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v298)
,	/* CT_v299: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA278: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA278))
, bytes2word(0,0,0,0)
, useLabel(CT_v301)
,	/* FN_LAMBDA277: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v300)
,	/* CT_v301: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA277: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA277))
, bytes2word(0,0,0,0)
, useLabel(CT_v302)
,	/* FN_LAMBDA276: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v285)
,	/* CT_v302: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA276: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA276))
, bytes2word(0,0,0,0)
, useLabel(CT_v304)
,	/* FN_LAMBDA275: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v303)
,	/* CT_v304: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA275: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA275))
, bytes2word(0,0,0,0)
, useLabel(CT_v306)
,	/* FN_LAMBDA274: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v305)
,	/* CT_v306: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA274: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA274))
, bytes2word(0,0,0,0)
, useLabel(CT_v308)
,	/* FN_LAMBDA273: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v307)
,	/* CT_v308: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA273: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA273))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v311)
,	/* FN_Language_46Preprocessor_46Cpphs_46ReadFirst_46Prelude_46185_46cons: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
,	/* v309: (byte 4) */
  bytes2word(4,0,PUSH_ARG_I2,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v311: (byte 0) */
  HW(1,2)
, 0
,	/* F0_Language_46Preprocessor_46Cpphs_46ReadFirst_46Prelude_46185_46cons: (byte 0) */
  CAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46ReadFirst_46Prelude_46185_46cons),2)
, VAPTAG(useLabel(FN_Prelude_46null))
,	/* ST_v296: (byte 0) */
 	/* ST_v303: (byte 1) */
 	/* ST_v300: (byte 4) */
  bytes2word(0,10,9,0)
, bytes2word(10,32,32,65)
, bytes2word(115,107,101,100)
, bytes2word(32,102,111,114)
, bytes2word(32,98,121,58)
,	/* ST_v305: (byte 2) */
  bytes2word(32,0,34,32)
, bytes2word(105,110,32,100)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,105)
, bytes2word(101,115,10,9)
,	/* ST_v285: (byte 1) */
 	/* ST_v307: (byte 3) */
  bytes2word(0,46,0,87)
, bytes2word(97,114,110,105)
, bytes2word(110,103,58,32)
, bytes2word(67,97,110,39)
, bytes2word(116,32,102,105)
, bytes2word(110,100,32,102)
, bytes2word(105,108,101,32)
,	/* ST_v298: (byte 2) */
  bytes2word(34,0,109,105)
, bytes2word(115,115,105,110)
, bytes2word(103,32,102,105)
, bytes2word(108,101,58,32)
, bytes2word(0,0,0,0)
,};
