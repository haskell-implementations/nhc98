#include "newmacros.h"
#include "runtime.h"

#define FN_Numeric_46minExpt	((void*)startLabel+8)
#define CT_v240	((void*)startLabel+28)
#define CF_Numeric_46minExpt	((void*)startLabel+36)
#define FN_Numeric_46maxExpt	((void*)startLabel+64)
#define CT_v243	((void*)startLabel+108)
#define CF_Numeric_46maxExpt	((void*)startLabel+116)
#define FN_Numeric_46expts	((void*)startLabel+144)
#define CT_v252	((void*)startLabel+384)
#define CF_Numeric_46expts	((void*)startLabel+392)
#define FN_LAMBDA236	((void*)startLabel+452)
#define CT_v258	((void*)startLabel+636)
#define F0_LAMBDA236	((void*)startLabel+644)
#define v259	((void*)startLabel+766)
#define CT_v269	((void*)startLabel+940)
#define ST_v262	((void*)startLabel+1016)
#define PP_Numeric_46expts	((void*)startLabel+1029)
#define PC_Numeric_46expts	((void*)startLabel+1029)
#define ST_v245	((void*)startLabel+1029)
#define PP_LAMBDA236	((void*)startLabel+1043)
#define PC_LAMBDA236	((void*)startLabel+1043)
#define ST_v254	((void*)startLabel+1043)
#define PP_Numeric_46maxExpt	((void*)startLabel+1069)
#define PC_Numeric_46maxExpt	((void*)startLabel+1069)
#define ST_v242	((void*)startLabel+1069)
#define PP_Numeric_46minExpt	((void*)startLabel+1085)
#define PC_Numeric_46minExpt	((void*)startLabel+1085)
#define ST_v239	((void*)startLabel+1085)
#define PS_v238	((void*)startLabel+1104)
#define PS_v241	((void*)startLabel+1116)
#define PS_v267	((void*)startLabel+1128)
#define PS_v268	((void*)startLabel+1140)
#define PS_v266	((void*)startLabel+1152)
#define PS_v261	((void*)startLabel+1164)
#define PS_v263	((void*)startLabel+1176)
#define PS_v264	((void*)startLabel+1188)
#define PS_v265	((void*)startLabel+1200)
#define PS_v251	((void*)startLabel+1212)
#define PS_v250	((void*)startLabel+1224)
#define PS_v246	((void*)startLabel+1236)
#define PS_v249	((void*)startLabel+1248)
#define PS_v244	((void*)startLabel+1260)
#define PS_v248	((void*)startLabel+1272)
#define PS_v247	((void*)startLabel+1284)
#define PS_v255	((void*)startLabel+1296)
#define PS_v256	((void*)startLabel+1308)
#define PS_v257	((void*)startLabel+1320)
#define PS_v253	((void*)startLabel+1332)
extern Node FN_Prelude_46Enum_46Prelude_46Int_46enumFromTo[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Array_46array[];
extern Node CF_Ix_46Ix_46Prelude_46Int[];
extern Node FN_Prelude_46_94[];
extern Node CF_Prelude_46Num_46Prelude_46Integer[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node FN_Prelude_46Eq_46Prelude_46Integer_46_61_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_60_61[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Array_46_33[];
extern Node PM_Numeric[];
extern Node PC_Array_46_33[];
extern Node PC_Prelude_46_94[];
extern Node PC_Prelude_46_38_38[];
extern Node PC_Prelude_46Eq_46Prelude_46Integer_46_61_61[];
extern Node PC_Prelude_46Ord_46Prelude_46Int_46_62_61[];
extern Node PC_Prelude_46Ord_46Prelude_46Int_46_60_61[];
extern Node PC_Array_46array[];
extern Node PC_Prelude_46_95foldr[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46Enum_46Prelude_46Int_46enumFromTo[];
extern Node PC_Prelude_46_58[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v240)
,	/* FN_Numeric_46minExpt: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v239)
,	/* CT_v240: (byte 0) */
  HW(0,0)
, 0
,	/* CF_Numeric_46minExpt: (byte 0) */
  VAPTAG(useLabel(FN_Numeric_46minExpt))
, useLabel(PS_v238)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v243)
,	/* FN_Numeric_46maxExpt: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_CADR_N1,8,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 1100
, 70001
, useLabel(ST_v242)
,	/* CT_v243: (byte 0) */
  HW(0,0)
, 0
,	/* CF_Numeric_46maxExpt: (byte 0) */
  VAPTAG(useLabel(FN_Numeric_46maxExpt))
, useLabel(PS_v241)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v252)
,	/* FN_Numeric_46expts: (byte 0) */
  bytes2word(NEEDHEAP_P1,41,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,22,HEAP_OFF_N1)
, bytes2word(18,HEAP_OFF_N1,12,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(13,HEAP_OFF_N1,38,HEAP_OFF_N1)
, bytes2word(15,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v251)
, 0
, 0
, 0
, 0
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
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v248)
, 0
, 0
, 0
, 0
, useLabel(PS_v247)
, 0
, 0
, 0
, 0
, useLabel(PS_v246)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 160001
, useLabel(ST_v245)
,	/* CT_v252: (byte 0) */
  HW(7,0)
, 0
,	/* CF_Numeric_46expts: (byte 0) */
  VAPTAG(useLabel(FN_Numeric_46expts))
, useLabel(PS_v244)
, 0
, 0
, 0
, useLabel(CF_Numeric_46minExpt)
, useLabel(CF_Numeric_46maxExpt)
, CAPTAG(useLabel(FN_LAMBDA236),2)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Int_46enumFromTo))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, VAPTAG(useLabel(FN_Array_46array))
, useLabel(CF_Ix_46Ix_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v258)
,	/* FN_LAMBDA236: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CADR_N1,13,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_N1,18,HEAP_CVAL_N1,23)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,28,HEAP_CVAL_N1,33)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_ARG,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v257)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v256)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 2
, useLabel(PS_v255)
, 0
, 0
, 0
, 0
, 160033
, useLabel(ST_v254)
,	/* CT_v258: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA236: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA236),2)
, useLabel(PS_v253)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_94))
, useLabel(CF_Prelude_46Num_46Prelude_46Integer)
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v269)
,};
Node FN_Numeric_46expt[] = {
  bytes2word(NEEDHEAP_P1,36,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CADR_N1)
, bytes2word(13,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(18,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,23)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,28,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,13,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,28,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,33)
, bytes2word(HEAP_OFF_N1,13,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,17,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,33)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_P1,15,HEAP_ARG)
,	/* v259: (byte 2) */
  bytes2word(2,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(16,HEAP_CVAL_N1,38,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,17)
, bytes2word(HEAP_CVAL_P1,18,HEAP_ARG_ARG_RET_EVAL,1)
, bytes2word(2,ENDCODE,0,0)
, bytes2word(0,0,0,0)
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
, useLabel(PS_v266)
, 0
, 0
, 0
, 0
, useLabel(PS_v265)
, 0
, 0
, 0
, 0
, useLabel(PS_v264)
, 0
, 0
, 0
, 0
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 2
, useLabel(PS_v263)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v262)
,	/* CT_v269: (byte 0) */
  HW(12,2)
, 0
,};
Node F0_Numeric_46expt[] = {
  CAPTAG(useLabel(FN_Numeric_46expt),2)
, useLabel(PS_v261)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62_61))
, useLabel(CF_Numeric_46minExpt)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_60_61))
, useLabel(CF_Numeric_46maxExpt)
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, VAPTAG(useLabel(FN_Array_46_33))
, useLabel(CF_Ix_46Ix_46Prelude_46Int)
, useLabel(CF_Numeric_46expts)
, VAPTAG(useLabel(FN_Prelude_46_94))
, useLabel(CF_Prelude_46Num_46Prelude_46Integer)
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
,};
Node PP_Numeric_46expt[] = {
 };
Node PC_Numeric_46expt[] = {
 	/* ST_v262: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(101,120,112,116)
,	/* PP_Numeric_46expts: (byte 1) */
 	/* PC_Numeric_46expts: (byte 1) */
 	/* ST_v245: (byte 1) */
  bytes2word(0,78,117,109)
, bytes2word(101,114,105,99)
, bytes2word(46,101,120,112)
,	/* PP_LAMBDA236: (byte 3) */
 	/* PC_LAMBDA236: (byte 3) */
 	/* ST_v254: (byte 3) */
  bytes2word(116,115,0,78)
, bytes2word(117,109,101,114)
, bytes2word(105,99,46,101)
, bytes2word(120,112,116,115)
, bytes2word(58,49,54,58)
, bytes2word(51,51,45,49)
, bytes2word(54,58,54,57)
,	/* PP_Numeric_46maxExpt: (byte 1) */
 	/* PC_Numeric_46maxExpt: (byte 1) */
 	/* ST_v242: (byte 1) */
  bytes2word(0,78,117,109)
, bytes2word(101,114,105,99)
, bytes2word(46,109,97,120)
, bytes2word(69,120,112,116)
,	/* PP_Numeric_46minExpt: (byte 1) */
 	/* PC_Numeric_46minExpt: (byte 1) */
 	/* ST_v239: (byte 1) */
  bytes2word(0,78,117,109)
, bytes2word(101,114,105,99)
, bytes2word(46,109,105,110)
, bytes2word(69,120,112,116)
, bytes2word(0,0,0,0)
,	/* PS_v238: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46minExpt)
, useLabel(PC_Numeric_46minExpt)
,	/* PS_v241: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46maxExpt)
, useLabel(PC_Numeric_46maxExpt)
,	/* PS_v267: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46expt)
, useLabel(PC_Array_46_33)
,	/* PS_v268: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46expt)
, useLabel(PC_Prelude_46_94)
,	/* PS_v266: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46expt)
, useLabel(PC_Prelude_46_38_38)
,	/* PS_v261: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46expt)
, useLabel(PC_Numeric_46expt)
,	/* PS_v263: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46expt)
, useLabel(PC_Prelude_46Eq_46Prelude_46Integer_46_61_61)
,	/* PS_v264: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46expt)
, useLabel(PC_Prelude_46Ord_46Prelude_46Int_46_62_61)
,	/* PS_v265: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46expt)
, useLabel(PC_Prelude_46Ord_46Prelude_46Int_46_60_61)
,	/* PS_v251: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46expts)
, useLabel(PC_Array_46array)
,	/* PS_v250: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46expts)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v246: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46expts)
, useLabel(PC_Prelude_462)
,	/* PS_v249: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46expts)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v244: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46expts)
, useLabel(PC_Numeric_46expts)
,	/* PS_v248: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46expts)
, useLabel(PC_Prelude_46Enum_46Prelude_46Int_46enumFromTo)
,	/* PS_v247: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46expts)
, useLabel(PC_LAMBDA236)
,	/* PS_v255: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA236)
, useLabel(PC_Prelude_46_94)
,	/* PS_v256: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA236)
, useLabel(PC_Prelude_462)
,	/* PS_v257: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA236)
, useLabel(PC_Prelude_46_58)
,	/* PS_v253: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA236)
, useLabel(PC_LAMBDA236)
,};
