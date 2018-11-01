#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46octal	((void*)startLabel+8)
#define v269	((void*)startLabel+32)
#define v253	((void*)startLabel+36)
#define v271	((void*)startLabel+52)
#define v261	((void*)startLabel+56)
#define v272	((void*)startLabel+66)
#define v265	((void*)startLabel+70)
#define v258	((void*)startLabel+74)
#define v254	((void*)startLabel+79)
#define v250	((void*)startLabel+84)
#define CT_v273	((void*)startLabel+124)
#define F0_Directory_46octal	((void*)startLabel+132)
#define FN_Directory_46mkdir_35	((void*)startLabel+172)
#define CT_v276	((void*)startLabel+200)
#define F0_Directory_46mkdir_35	((void*)startLabel+208)
#define FN_Directory_46mkdir	((void*)startLabel+236)
#define CT_v280	((void*)startLabel+288)
#define CF_Directory_46mkdir	((void*)startLabel+296)
#define CT_v290	((void*)startLabel+560)
#define FN_LAMBDA248	((void*)startLabel+628)
#define CT_v297	((void*)startLabel+768)
#define F0_LAMBDA248	((void*)startLabel+776)
#define FN_LAMBDA247	((void*)startLabel+832)
#define CT_v304	((void*)startLabel+1008)
#define F0_LAMBDA247	((void*)startLabel+1016)
#define FN_LAMBDA246	((void*)startLabel+1052)
#define CT_v308	((void*)startLabel+1096)
#define CF_LAMBDA246	((void*)startLabel+1104)
#define FN_LAMBDA245	((void*)startLabel+1132)
#define CT_v312	((void*)startLabel+1176)
#define CF_LAMBDA245	((void*)startLabel+1184)
#define ST_v311	((void*)startLabel+1204)
#define ST_v282	((void*)startLabel+1212)
#define PP_LAMBDA248	((void*)startLabel+1238)
#define PC_LAMBDA248	((void*)startLabel+1238)
#define ST_v292	((void*)startLabel+1238)
#define PP_LAMBDA245	((void*)startLabel+1276)
#define PC_LAMBDA245	((void*)startLabel+1276)
#define ST_v310	((void*)startLabel+1276)
#define PP_LAMBDA247	((void*)startLabel+1314)
#define PC_LAMBDA247	((void*)startLabel+1314)
#define ST_v299	((void*)startLabel+1314)
#define PP_LAMBDA246	((void*)startLabel+1352)
#define PC_LAMBDA246	((void*)startLabel+1352)
#define ST_v306	((void*)startLabel+1352)
#define PP_Directory_46mkdir	((void*)startLabel+1390)
#define PC_Directory_46mkdir	((void*)startLabel+1390)
#define ST_v278	((void*)startLabel+1390)
#define PP_Directory_46mkdir_35	((void*)startLabel+1406)
#define PC_Directory_46mkdir_35	((void*)startLabel+1406)
#define ST_v275	((void*)startLabel+1406)
#define PP_Directory_46octal	((void*)startLabel+1423)
#define PC_Directory_46octal	((void*)startLabel+1423)
#define ST_v267	((void*)startLabel+1423)
#define ST_v307	((void*)startLabel+1439)
#define PS_v279	((void*)startLabel+1456)
#define PS_v277	((void*)startLabel+1468)
#define PS_v284	((void*)startLabel+1480)
#define PS_v287	((void*)startLabel+1492)
#define PS_v283	((void*)startLabel+1504)
#define PS_v281	((void*)startLabel+1516)
#define PS_v286	((void*)startLabel+1528)
#define PS_v289	((void*)startLabel+1540)
#define PS_v285	((void*)startLabel+1552)
#define PS_v288	((void*)startLabel+1564)
#define PS_v268	((void*)startLabel+1576)
#define PS_v266	((void*)startLabel+1588)
#define PS_v274	((void*)startLabel+1600)
#define PS_v309	((void*)startLabel+1612)
#define PS_v305	((void*)startLabel+1624)
#define PS_v303	((void*)startLabel+1636)
#define PS_v302	((void*)startLabel+1648)
#define PS_v301	((void*)startLabel+1660)
#define PS_v300	((void*)startLabel+1672)
#define PS_v298	((void*)startLabel+1684)
#define PS_v296	((void*)startLabel+1696)
#define PS_v295	((void*)startLabel+1708)
#define PS_v293	((void*)startLabel+1720)
#define PS_v294	((void*)startLabel+1732)
#define PS_v291	((void*)startLabel+1744)
extern Node FN_Numeric_46readOct[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
void FR_Directory_46mkdir_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Int_46_61_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Monad_46when[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_NHC_46FFI_46throwIOError[];
extern Node PM_Directory[];
extern Node PC_NHC_46Internal_46_95mkIOok2[];
extern Node PC_CString_46toCString[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_Numeric_46readOct[];
extern Node PC_NHC_46FFI_46throwIOError[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_Prelude_46Just[];
extern Node PC_Monad_46when[];
extern Node PC_Prelude_46Eq_46Prelude_46Int_46_61_61[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v273)
,	/* FN_Directory_46octal: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,8)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,EVAL,TABLESWITCH,2)
,	/* v269: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v253: (byte 4) */
  bytes2word(POP_I1,JUMP,50,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,UNPACK,2,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v271: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v261: (byte 4) */
  bytes2word(POP_I1,JUMP,20,0)
, bytes2word(POP_I1,PUSH_P1,3,EVAL)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v272: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v265: (byte 2) */
  bytes2word(6,0,POP_I1,PUSH_P1)
,	/* v258: (byte 2) */
  bytes2word(0,RETURN_EVAL,POP_P1,2)
,	/* v254: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v250: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_INT_P1,0,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v268)
, 0
, 0
, 0
, 0
, 180001
, useLabel(ST_v267)
,	/* CT_v273: (byte 0) */
  HW(2,1)
, 0
,	/* F0_Directory_46octal: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46octal),1)
, useLabel(PS_v266)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Numeric_46readOct))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v276)
,	/* FN_Directory_46mkdir_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Directory_46mkdir_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v275)
,	/* CT_v276: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Directory_46mkdir_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46mkdir_35),2)
, useLabel(PS_v274)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v280)
,	/* FN_Directory_46mkdir: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v279)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v278)
,	/* CT_v280: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46mkdir: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46mkdir))
, useLabel(PS_v277)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_Directory_46mkdir_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v290)
,};
Node FN_Directory_46createDirectory[] = {
  bytes2word(NEEDHEAP_P1,44,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,27,HEAP_OFF_N1)
, bytes2word(23,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,19,HEAP_OFF_N1,12)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v289)
, 0
, 0
, 0
, 0
, useLabel(PS_v288)
, 0
, 0
, 0
, 0
, useLabel(PS_v287)
, 0
, 0
, 0
, 0
, useLabel(PS_v286)
, 0
, 0
, 0
, 0
, useLabel(PS_v285)
, 0
, 0
, 0
, 0
, useLabel(PS_v284)
, 0
, 0
, 0
, 0
, useLabel(PS_v283)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v282)
,	/* CT_v290: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_Directory_46createDirectory[] = {
  CAPTAG(useLabel(FN_Directory_46createDirectory),1)
, useLabel(PS_v281)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Directory_46mkdir))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_LAMBDA245))
, VAPTAG(useLabel(FN_Directory_46octal))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA248),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v297)
,	/* FN_LAMBDA248: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_INT_N1,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,26)
, bytes2word(HEAP_OFF_N1,14,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v296)
, 0
, 0
, 0
, 0
, useLabel(PS_v295)
, 0
, 0
, 0
, 0
, useLabel(PS_v294)
, 0
, 0
, 0
, 0
, useLabel(PS_v293)
, 0
, 0
, 0
, 0
, 110012
, useLabel(ST_v292)
,	/* CT_v297: (byte 0) */
  HW(6,2)
, 0
,	/* F0_LAMBDA248: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA248),2)
, useLabel(PS_v291)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Int_46_61_61))
, CAPTAG(useLabel(FN_LAMBDA247),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Monad_46when))
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v304)
,	/* FN_LAMBDA247: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,12,HEAP_ARG,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v303)
, 0
, 0
, 0
, 0
, useLabel(PS_v302)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v301)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v300)
, 0
, 0
, 0
, 0
, 130023
, useLabel(ST_v299)
,	/* CT_v304: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA247: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA247),2)
, useLabel(PS_v298)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA246))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v308)
,	/* FN_LAMBDA246: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v307)
, 140027
, useLabel(ST_v306)
,	/* CT_v308: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA246: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA246))
, useLabel(PS_v305)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v312)
,	/* FN_LAMBDA245: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v311)
, 110040
, useLabel(ST_v310)
,	/* CT_v312: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA245: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA245))
, useLabel(PS_v309)
, 0
, 0
, 0
,	/* ST_v311: (byte 0) */
  bytes2word(48,55,53,53)
, bytes2word(0,0,0,0)
,};
Node PP_Directory_46createDirectory[] = {
 };
Node PC_Directory_46createDirectory[] = {
 	/* ST_v282: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,99,114)
, bytes2word(101,97,116,101)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
,	/* PP_LAMBDA248: (byte 2) */
 	/* PC_LAMBDA248: (byte 2) */
 	/* ST_v292: (byte 2) */
  bytes2word(121,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(99,114,101,97)
, bytes2word(116,101,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,58)
, bytes2word(49,49,58,49)
, bytes2word(50,45,49,49)
,	/* PP_LAMBDA245: (byte 4) */
 	/* PC_LAMBDA245: (byte 4) */
 	/* ST_v310: (byte 4) */
  bytes2word(58,52,54,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,99,114)
, bytes2word(101,97,116,101)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,58,49,49)
, bytes2word(58,52,48,45)
, bytes2word(49,49,58,52)
,	/* PP_LAMBDA247: (byte 2) */
 	/* PC_LAMBDA247: (byte 2) */
 	/* ST_v299: (byte 2) */
  bytes2word(53,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(99,114,101,97)
, bytes2word(116,101,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,58)
, bytes2word(49,51,58,50)
, bytes2word(51,45,49,51)
,	/* PP_LAMBDA246: (byte 4) */
 	/* PC_LAMBDA246: (byte 4) */
 	/* ST_v306: (byte 4) */
  bytes2word(58,51,48,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,99,114)
, bytes2word(101,97,116,101)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,58,49,52)
, bytes2word(58,50,55,45)
, bytes2word(49,52,58,52)
,	/* PP_Directory_46mkdir: (byte 2) */
 	/* PC_Directory_46mkdir: (byte 2) */
 	/* ST_v278: (byte 2) */
  bytes2word(51,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(109,107,100,105)
,	/* PP_Directory_46mkdir_35: (byte 2) */
 	/* PC_Directory_46mkdir_35: (byte 2) */
 	/* ST_v275: (byte 2) */
  bytes2word(114,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(109,107,100,105)
,	/* PP_Directory_46octal: (byte 3) */
 	/* PC_Directory_46octal: (byte 3) */
 	/* ST_v267: (byte 3) */
  bytes2word(114,35,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,111,99,116)
,	/* ST_v307: (byte 3) */
  bytes2word(97,108,0,99)
, bytes2word(114,101,97,116)
, bytes2word(101,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,0,0)
,	/* PS_v279: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46mkdir)
, useLabel(PC_NHC_46Internal_46_95mkIOok2)
,	/* PS_v277: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46mkdir)
, useLabel(PC_Directory_46mkdir)
,	/* PS_v284: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46createDirectory)
, useLabel(PC_CString_46toCString)
,	/* PS_v287: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46createDirectory)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v283: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46createDirectory)
, useLabel(PC_Directory_46mkdir)
,	/* PS_v281: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46createDirectory)
, useLabel(PC_Directory_46createDirectory)
,	/* PS_v286: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46createDirectory)
, useLabel(PC_Directory_46octal)
,	/* PS_v289: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46createDirectory)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v285: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46createDirectory)
, useLabel(PC_LAMBDA245)
,	/* PS_v288: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46createDirectory)
, useLabel(PC_LAMBDA248)
,	/* PS_v268: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46octal)
, useLabel(PC_Numeric_46readOct)
,	/* PS_v266: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46octal)
, useLabel(PC_Directory_46octal)
,	/* PS_v274: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46mkdir_35)
, useLabel(PC_Directory_46mkdir_35)
,	/* PS_v309: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA245)
, useLabel(PC_LAMBDA245)
,	/* PS_v305: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA246)
, useLabel(PC_LAMBDA246)
,	/* PS_v303: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA247)
, useLabel(PC_NHC_46FFI_46throwIOError)
,	/* PS_v302: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA247)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v301: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA247)
, useLabel(PC_Prelude_46Just)
,	/* PS_v300: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA247)
, useLabel(PC_LAMBDA246)
,	/* PS_v298: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA247)
, useLabel(PC_LAMBDA247)
,	/* PS_v296: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA248)
, useLabel(PC_Monad_46when)
,	/* PS_v295: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA248)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v293: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA248)
, useLabel(PC_Prelude_46Eq_46Prelude_46Int_46_61_61)
,	/* PS_v294: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA248)
, useLabel(PC_LAMBDA247)
,	/* PS_v291: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA248)
, useLabel(PC_LAMBDA248)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "mkdir" Directory.mkdir# 2 :: PackedString.PackedString -> Prelude.Int -> Prelude.Int */
extern HsInt mkdir(char*,HsInt);
#ifdef PROFILE
static SInfo pf_Directory_46mkdir_35 = {"Directory","Directory.mkdir#","Prelude.Int"};
#endif
C_HEADER(FR_Directory_46mkdir_35) {
  NodePtr nodeptr;
  HsInt result;
  char* arg1;
  HsInt arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);

  result = mkdir(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_Directory_46mkdir_35);
  C_RETURN(nodeptr);
}
