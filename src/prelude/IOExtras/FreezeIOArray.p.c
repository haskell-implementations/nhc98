#include "newmacros.h"
#include "runtime.h"

#define CT_v217	((void*)startLabel+152)
#define FN_LAMBDA206	((void*)startLabel+208)
#define CT_v222	((void*)startLabel+308)
#define F0_LAMBDA206	((void*)startLabel+316)
#define ST_v211	((void*)startLabel+340)
#define PP_LAMBDA206	((void*)startLabel+367)
#define PC_LAMBDA206	((void*)startLabel+367)
#define ST_v219	((void*)startLabel+367)
#define PS_v213	((void*)startLabel+408)
#define PS_v214	((void*)startLabel+420)
#define PS_v210	((void*)startLabel+432)
#define PS_v216	((void*)startLabel+444)
#define PS_v215	((void*)startLabel+456)
#define PS_v220	((void*)startLabel+468)
#define PS_v221	((void*)startLabel+480)
#define PS_v218	((void*)startLabel+492)
extern Node FN_Array_46primCopyVectorC[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PM_NHC_46IOExtras[];
extern Node PC_Array_46primCopyVectorC[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_Array_46MkArray[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v217)
,};
Node FN_NHC_46IOExtras_46freezeIOArray[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v216)
, 0
, 0
, 0
, 0
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
, 110001
, useLabel(ST_v211)
,	/* CT_v217: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_NHC_46IOExtras_46freezeIOArray[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46freezeIOArray),2)
, useLabel(PS_v210)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Array_46primCopyVectorC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA206),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v222)
,	/* FN_LAMBDA206: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v221)
, 0
, 0
, 0
, 0
, useLabel(PS_v220)
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
, useLabel(ST_v219)
,	/* CT_v222: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA206: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA206),2)
, useLabel(PS_v218)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};
Node PP_NHC_46IOExtras_46freezeIOArray[] = {
 };
Node PC_NHC_46IOExtras_46freezeIOArray[] = {
 	/* ST_v211: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,102,114,101)
, bytes2word(101,122,101,73)
, bytes2word(79,65,114,114)
,	/* PP_LAMBDA206: (byte 3) */
 	/* PC_LAMBDA206: (byte 3) */
 	/* ST_v219: (byte 3) */
  bytes2word(97,121,0,78)
, bytes2word(72,67,46,73)
, bytes2word(79,69,120,116)
, bytes2word(114,97,115,46)
, bytes2word(102,114,101,101)
, bytes2word(122,101,73,79)
, bytes2word(65,114,114,97)
, bytes2word(121,58,49,50)
, bytes2word(58,49,48,45)
, bytes2word(49,50,58,50)
, bytes2word(55,0,0,0)
,	/* PS_v213: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46freezeIOArray)
, useLabel(PC_Array_46primCopyVectorC)
,	/* PS_v214: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46freezeIOArray)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v210: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46freezeIOArray)
, useLabel(PC_NHC_46IOExtras_46freezeIOArray)
,	/* PS_v216: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46freezeIOArray)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v215: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46freezeIOArray)
, useLabel(PC_LAMBDA206)
,	/* PS_v220: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_LAMBDA206)
, useLabel(PC_Array_46MkArray)
,	/* PS_v221: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_LAMBDA206)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v218: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_LAMBDA206)
, useLabel(PC_LAMBDA206)
,};
