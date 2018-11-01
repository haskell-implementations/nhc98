#include "newmacros.h"
#include "runtime.h"

#define CT_v216	((void*)startLabel+260)
#define FN_LAMBDA205	((void*)startLabel+324)
#define CT_v221	((void*)startLabel+424)
#define F0_LAMBDA205	((void*)startLabel+432)
#define ST_v208	((void*)startLabel+456)
#define PP_LAMBDA205	((void*)startLabel+480)
#define PC_LAMBDA205	((void*)startLabel+480)
#define ST_v218	((void*)startLabel+480)
#define PS_v212	((void*)startLabel+516)
#define PS_v209	((void*)startLabel+528)
#define PS_v210	((void*)startLabel+540)
#define PS_v213	((void*)startLabel+552)
#define PS_v211	((void*)startLabel+564)
#define PS_v207	((void*)startLabel+576)
#define PS_v215	((void*)startLabel+588)
#define PS_v214	((void*)startLabel+600)
#define PS_v219	((void*)startLabel+612)
#define PS_v220	((void*)startLabel+624)
#define PS_v217	((void*)startLabel+636)
extern Node FN_Array_46primNewVectorC[];
extern Node FN_Ix_46rangeSize[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PM_NHC_46IOExtras[];
extern Node PC_Array_46_95E[];
extern Node PC_Array_46primNewVectorC[];
extern Node PC_Ix_46rangeSize[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46IOExtras_46MkIOArray[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v216)
,};
Node FN_NHC_46IOExtras_46newIOArray[] = {
  bytes2word(NEEDHEAP_P1,46,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,29,HEAP_OFF_N1)
, bytes2word(19,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,19,HEAP_OFF_N1,12)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v215)
, 0
, 0
, 0
, 0
, useLabel(PS_v214)
, 0
, 0
, 0
, 0
, useLabel(PS_v213)
, 0
, 0
, 0
, 0
, useLabel(PS_v212)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v211)
, 0
, 0
, 0
, 0
, useLabel(PS_v210)
, 0
, 0
, 0
, 0
, useLabel(PS_v209)
, 0
, 0
, 0
, 0
, 110001
, useLabel(ST_v208)
,	/* CT_v216: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_NHC_46IOExtras_46newIOArray[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46newIOArray),3)
, useLabel(PS_v207)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Array_46primNewVectorC))
, VAPTAG(useLabel(FN_Ix_46rangeSize))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA205),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v221)
,	/* FN_LAMBDA205: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v220)
, 0
, 0
, 0
, 0
, useLabel(PS_v219)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 120010
, useLabel(ST_v218)
,	/* CT_v221: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA205: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA205),2)
, useLabel(PS_v217)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};
Node PP_NHC_46IOExtras_46newIOArray[] = {
 };
Node PC_NHC_46IOExtras_46newIOArray[] = {
 	/* ST_v208: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,110,101,119)
, bytes2word(73,79,65,114)
,	/* PP_LAMBDA205: (byte 4) */
 	/* PC_LAMBDA205: (byte 4) */
 	/* ST_v218: (byte 4) */
  bytes2word(114,97,121,0)
, bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,110,101,119)
, bytes2word(73,79,65,114)
, bytes2word(114,97,121,58)
, bytes2word(49,50,58,49)
, bytes2word(48,45,49,50)
, bytes2word(58,53,49,0)
,	/* PS_v212: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46newIOArray)
, useLabel(PC_Array_46_95E)
,	/* PS_v209: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46newIOArray)
, useLabel(PC_Array_46primNewVectorC)
,	/* PS_v210: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46newIOArray)
, useLabel(PC_Ix_46rangeSize)
,	/* PS_v213: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46newIOArray)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v211: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46newIOArray)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v207: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46newIOArray)
, useLabel(PC_NHC_46IOExtras_46newIOArray)
,	/* PS_v215: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46newIOArray)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v214: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46newIOArray)
, useLabel(PC_LAMBDA205)
,	/* PS_v219: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_LAMBDA205)
, useLabel(PC_NHC_46IOExtras_46MkIOArray)
,	/* PS_v220: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_LAMBDA205)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v217: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_LAMBDA205)
, useLabel(PC_LAMBDA205)
,};
