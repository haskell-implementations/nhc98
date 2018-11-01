#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46getcwd_35	((void*)startLabel+12)
#define CT_v239	((void*)startLabel+40)
#define F0_Directory_46getcwd_35	((void*)startLabel+48)
#define FN_Directory_46getcwd	((void*)startLabel+76)
#define CT_v243	((void*)startLabel+128)
#define CF_Directory_46getcwd	((void*)startLabel+136)
#define FN_Directory_46addrToCString	((void*)startLabel+172)
#define CT_v246	((void*)startLabel+196)
#define F0_Directory_46addrToCString	((void*)startLabel+204)
#define CT_v253	((void*)startLabel+392)
#define FN_LAMBDA235	((void*)startLabel+448)
#define CT_v264	((void*)startLabel+708)
#define F0_LAMBDA235	((void*)startLabel+716)
#define FN_LAMBDA234	((void*)startLabel+792)
#define CT_v272	((void*)startLabel+1000)
#define F0_LAMBDA234	((void*)startLabel+1008)
#define FN_LAMBDA233	((void*)startLabel+1048)
#define CT_v276	((void*)startLabel+1092)
#define CF_LAMBDA233	((void*)startLabel+1100)
#define PP_Directory_46addrToCString	((void*)startLabel+1120)
#define PC_Directory_46addrToCString	((void*)startLabel+1120)
#define ST_v245	((void*)startLabel+1120)
#define ST_v248	((void*)startLabel+1144)
#define PP_LAMBDA235	((void*)startLabel+1174)
#define PC_LAMBDA235	((void*)startLabel+1174)
#define ST_v255	((void*)startLabel+1174)
#define PP_LAMBDA234	((void*)startLabel+1215)
#define PC_LAMBDA234	((void*)startLabel+1215)
#define ST_v266	((void*)startLabel+1215)
#define PP_LAMBDA233	((void*)startLabel+1257)
#define PC_LAMBDA233	((void*)startLabel+1257)
#define ST_v274	((void*)startLabel+1257)
#define PP_Directory_46getcwd	((void*)startLabel+1299)
#define PC_Directory_46getcwd	((void*)startLabel+1299)
#define ST_v241	((void*)startLabel+1299)
#define PP_Directory_46getcwd_35	((void*)startLabel+1316)
#define PC_Directory_46getcwd_35	((void*)startLabel+1316)
#define ST_v238	((void*)startLabel+1316)
#define ST_v275	((void*)startLabel+1334)
#define PS_v242	((void*)startLabel+1356)
#define PS_v240	((void*)startLabel+1368)
#define PS_v244	((void*)startLabel+1380)
#define PS_v250	((void*)startLabel+1392)
#define PS_v249	((void*)startLabel+1404)
#define PS_v247	((void*)startLabel+1416)
#define PS_v252	((void*)startLabel+1428)
#define PS_v251	((void*)startLabel+1440)
#define PS_v237	((void*)startLabel+1452)
#define PS_v273	((void*)startLabel+1464)
#define PS_v271	((void*)startLabel+1476)
#define PS_v270	((void*)startLabel+1488)
#define PS_v269	((void*)startLabel+1500)
#define PS_v268	((void*)startLabel+1512)
#define PS_v267	((void*)startLabel+1524)
#define PS_v265	((void*)startLabel+1536)
#define PS_v261	((void*)startLabel+1548)
#define PS_v259	((void*)startLabel+1560)
#define PS_v260	((void*)startLabel+1572)
#define PS_v258	((void*)startLabel+1584)
#define PS_v263	((void*)startLabel+1596)
#define PS_v256	((void*)startLabel+1608)
#define PS_v262	((void*)startLabel+1620)
#define PS_v257	((void*)startLabel+1632)
#define PS_v254	((void*)startLabel+1644)
void FR_Directory_46getcwd_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
void FR_Directory_46addrToCString(void);
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node CF_NHC_46FFI_46nullAddr[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Monad_46when[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_CString_46fromCString[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node FN_Prelude_46Show_46NHC_46FFI_46Addr_46show[];
extern Node FN_NHC_46FFI_46throwIOError[];
extern Node PM_Directory[];
extern Node PC_NHC_46Internal_46_95mkIOok2[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46FFI_46throwIOError[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_Prelude_46Just[];
extern Node PC_Prelude_46Show_46NHC_46FFI_46Addr_46show[];
extern Node PC_CString_46fromCString[];
extern Node PC_Monad_46when[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node PC_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v239)
,	/* FN_Directory_46getcwd_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Directory_46getcwd_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v238)
,	/* CT_v239: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Directory_46getcwd_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46getcwd_35),2)
, useLabel(PS_v237)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v243)
,	/* FN_Directory_46getcwd: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v242)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v241)
,	/* CT_v243: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46getcwd: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46getcwd))
, useLabel(PS_v240)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_Directory_46getcwd_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v246)
,	/* FN_Directory_46addrToCString: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46addrToCString)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v245)
,	/* CT_v246: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46addrToCString: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46addrToCString),1)
, useLabel(PS_v244)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v253)
,};
Node FN_Directory_46getCurrentDirectory[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_CVAL_P1,9,HEAP_CADR_N1)
, bytes2word(18,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(23,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(28,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v252)
, 0
, 0
, 0
, 0
, useLabel(PS_v251)
, 0
, 0
, 0
, 0
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 1024
, useLabel(PS_v250)
, 0
, 0
, 0
, 0
, useLabel(PS_v249)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v248)
,	/* CT_v253: (byte 0) */
  HW(5,0)
, 0
,};
Node CF_Directory_46getCurrentDirectory[] = {
  VAPTAG(useLabel(FN_Directory_46getCurrentDirectory))
, useLabel(PS_v247)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Directory_46getcwd))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, useLabel(CF_NHC_46FFI_46nullAddr)
, CAPTAG(useLabel(FN_LAMBDA235),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v264)
,	/* FN_LAMBDA235: (byte 0) */
  bytes2word(NEEDHEAP_P1,54,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(12,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,26)
, bytes2word(HEAP_OFF_N1,14,HEAP_CVAL_P1,14)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(15,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,16,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,17)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,31,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v263)
, 0
, 0
, 0
, 0
, useLabel(PS_v262)
, 0
, 0
, 0
, 0
, useLabel(PS_v261)
, 0
, 0
, 0
, 0
, useLabel(PS_v260)
, 0
, 0
, 0
, 0
, useLabel(PS_v259)
, 0
, 0
, 0
, 0
, useLabel(PS_v258)
, 0
, 0
, 0
, 0
, useLabel(PS_v257)
, 0
, 0
, 0
, 0
, useLabel(PS_v256)
, 0
, 0
, 0
, 0
, 110008
, useLabel(ST_v255)
,	/* CT_v264: (byte 0) */
  HW(11,1)
, 0
,	/* F0_LAMBDA235: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA235),1)
, useLabel(PS_v254)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61))
, useLabel(CF_NHC_46FFI_46nullAddr)
, CAPTAG(useLabel(FN_LAMBDA234),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Monad_46when))
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, VAPTAG(useLabel(FN_Directory_46addrToCString))
, VAPTAG(useLabel(FN_CString_46fromCString))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v272)
,	/* FN_LAMBDA234: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,27,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,HEAP_ARG)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v271)
, 0
, 0
, 0
, 0
, useLabel(PS_v270)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v269)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v268)
, 0
, 0
, 0
, 0
, useLabel(PS_v267)
, 0
, 0
, 0
, 0
, 130021
, useLabel(ST_v266)
,	/* CT_v272: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA234: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA234),2)
, useLabel(PS_v265)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA233))
, VAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Addr_46show))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v276)
,	/* FN_LAMBDA233: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v275)
, 140025
, useLabel(ST_v274)
,	/* CT_v276: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA233: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA233))
, useLabel(PS_v273)
, 0
, 0
, 0
,	/* PP_Directory_46addrToCString: (byte 0) */
 	/* PC_Directory_46addrToCString: (byte 0) */
 	/* ST_v245: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,97,100)
, bytes2word(100,114,84,111)
, bytes2word(67,83,116,114)
, bytes2word(105,110,103,0)
,};
Node PP_Directory_46getCurrentDirectory[] = {
 };
Node PC_Directory_46getCurrentDirectory[] = {
 	/* ST_v248: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,103,101)
, bytes2word(116,67,117,114)
, bytes2word(114,101,110,116)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
,	/* PP_LAMBDA235: (byte 2) */
 	/* PC_LAMBDA235: (byte 2) */
 	/* ST_v255: (byte 2) */
  bytes2word(121,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(103,101,116,67)
, bytes2word(117,114,114,101)
, bytes2word(110,116,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,58)
, bytes2word(49,49,58,56)
, bytes2word(45,49,49,58)
,	/* PP_LAMBDA234: (byte 3) */
 	/* PC_LAMBDA234: (byte 3) */
 	/* ST_v266: (byte 3) */
  bytes2word(50,55,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,103,101,116)
, bytes2word(67,117,114,114)
, bytes2word(101,110,116,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(58,49,51,58)
, bytes2word(50,49,45,49)
, bytes2word(51,58,50,56)
,	/* PP_LAMBDA233: (byte 1) */
 	/* PC_LAMBDA233: (byte 1) */
 	/* ST_v274: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,103)
, bytes2word(101,116,67,117)
, bytes2word(114,114,101,110)
, bytes2word(116,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,58,49)
, bytes2word(52,58,50,53)
, bytes2word(45,49,52,58)
,	/* PP_Directory_46getcwd: (byte 3) */
 	/* PC_Directory_46getcwd: (byte 3) */
 	/* ST_v241: (byte 3) */
  bytes2word(52,53,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,103,101,116)
,	/* PP_Directory_46getcwd_35: (byte 4) */
 	/* PC_Directory_46getcwd_35: (byte 4) */
 	/* ST_v238: (byte 4) */
  bytes2word(99,119,100,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,103,101)
, bytes2word(116,99,119,100)
,	/* ST_v275: (byte 2) */
  bytes2word(35,0,103,101)
, bytes2word(116,67,117,114)
, bytes2word(114,101,110,116)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,0,0,0)
,	/* PS_v242: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getcwd)
, useLabel(PC_NHC_46Internal_46_95mkIOok2)
,	/* PS_v240: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getcwd)
, useLabel(PC_Directory_46getcwd)
,	/* PS_v244: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46addrToCString)
, useLabel(PC_Directory_46addrToCString)
,	/* PS_v250: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getCurrentDirectory)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v249: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getCurrentDirectory)
, useLabel(PC_Directory_46getcwd)
,	/* PS_v247: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getCurrentDirectory)
, useLabel(PC_Directory_46getCurrentDirectory)
,	/* PS_v252: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getCurrentDirectory)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v251: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getCurrentDirectory)
, useLabel(PC_LAMBDA235)
,	/* PS_v237: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getcwd_35)
, useLabel(PC_Directory_46getcwd_35)
,	/* PS_v273: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA233)
, useLabel(PC_LAMBDA233)
,	/* PS_v271: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA234)
, useLabel(PC_NHC_46FFI_46throwIOError)
,	/* PS_v270: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA234)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v269: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA234)
, useLabel(PC_Prelude_46Just)
,	/* PS_v268: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA234)
, useLabel(PC_Prelude_46Show_46NHC_46FFI_46Addr_46show)
,	/* PS_v267: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA234)
, useLabel(PC_LAMBDA233)
,	/* PS_v265: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA234)
, useLabel(PC_LAMBDA234)
,	/* PS_v261: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA235)
, useLabel(PC_CString_46fromCString)
,	/* PS_v259: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA235)
, useLabel(PC_Monad_46when)
,	/* PS_v260: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA235)
, useLabel(PC_Directory_46addrToCString)
,	/* PS_v258: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA235)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v263: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA235)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,	/* PS_v256: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA235)
, useLabel(PC_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61)
,	/* PS_v262: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA235)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v257: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA235)
, useLabel(PC_LAMBDA234)
,	/* PS_v254: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA235)
, useLabel(PC_LAMBDA235)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "getcwd" Directory.getcwd# 2 :: FFI.Addr -> Prelude.Int -> FFI.Addr */
extern void* getcwd(void*,HsInt);
#ifdef PROFILE
static SInfo pf_Directory_46getcwd_35 = {"Directory","Directory.getcwd#","FFI.Addr"};
#endif
C_HEADER(FR_Directory_46getcwd_35) {
  NodePtr nodeptr;
  void* result;
  void* arg1;
  HsInt arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);

  result = getcwd(arg1,arg2);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_Directory_46getcwd_35);
  C_RETURN(nodeptr);
}

/* foreign import cast "addrToCString" Directory.addrToCString 1 :: FFI.Addr -> PackedString.PackedString */
#ifdef PROFILE
static SInfo pf_Directory_46addrToCString = {"Directory","Directory.addrToCString","PackedString.PackedString"};
#endif
C_HEADER(FR_Directory_46addrToCString) {
  NodePtr nodeptr;
  char* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = (char*)(arg1);

  nodeptr = nhc_mkString((char*)result);
  INIT_PROFINFO(nodeptr,&pf_Directory_46addrToCString);
  C_RETURN(nodeptr);
}
