#include "newmacros.h"
#include "runtime.h"

#define CT_v209	((void*)startLabel+192)
#define FN_LAMBDA200	((void*)startLabel+244)
#define CT_v213	((void*)startLabel+296)
#define F0_LAMBDA200	((void*)startLabel+304)
#define ST_v203	((void*)startLabel+328)
#define PP_LAMBDA200	((void*)startLabel+350)
#define PC_LAMBDA200	((void*)startLabel+350)
#define ST_v211	((void*)startLabel+350)
#define PS_v205	((void*)startLabel+384)
#define PS_v204	((void*)startLabel+396)
#define PS_v206	((void*)startLabel+408)
#define PS_v202	((void*)startLabel+420)
#define PS_v208	((void*)startLabel+432)
#define PS_v207	((void*)startLabel+444)
#define PS_v212	((void*)startLabel+456)
#define PS_v210	((void*)startLabel+468)
extern Node FN_Array_46primNewVectorC[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PM_NHC_46IOExtras[];
extern Node PC_Array_46_95E[];
extern Node PC_Array_46primNewVectorC[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v209)
,};
Node FN_NHC_46IOExtras_46newIORef[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,16,HEAP_INT_P1,1)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(11,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v208)
, 0
, 0
, 0
, 0
, useLabel(PS_v207)
, 0
, 0
, 0
, 0
, useLabel(PS_v206)
, 0
, 0
, 0
, 0
, useLabel(PS_v205)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v204)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v203)
,	/* CT_v209: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_NHC_46IOExtras_46newIORef[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46newIORef),1)
, useLabel(PS_v202)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Array_46primNewVectorC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA200),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v213)
,	/* FN_LAMBDA200: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v212)
, 0
, 0
, 0
, 0
, 100022
, useLabel(ST_v211)
,	/* CT_v213: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA200: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA200),1)
, useLabel(PS_v210)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};
Node PP_NHC_46IOExtras_46newIORef[] = {
 };
Node PC_NHC_46IOExtras_46newIORef[] = {
 	/* ST_v203: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,110,101,119)
, bytes2word(73,79,82,101)
,	/* PP_LAMBDA200: (byte 2) */
 	/* PC_LAMBDA200: (byte 2) */
 	/* ST_v211: (byte 2) */
  bytes2word(102,0,78,72)
, bytes2word(67,46,73,79)
, bytes2word(69,120,116,114)
, bytes2word(97,115,46,110)
, bytes2word(101,119,73,79)
, bytes2word(82,101,102,58)
, bytes2word(49,48,58,50)
, bytes2word(50,45,49,48)
, bytes2word(58,52,52,0)
,	/* PS_v205: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46newIORef)
, useLabel(PC_Array_46_95E)
,	/* PS_v204: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46newIORef)
, useLabel(PC_Array_46primNewVectorC)
,	/* PS_v206: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46newIORef)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v202: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46newIORef)
, useLabel(PC_NHC_46IOExtras_46newIORef)
,	/* PS_v208: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46newIORef)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v207: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46newIORef)
, useLabel(PC_LAMBDA200)
,	/* PS_v212: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_LAMBDA200)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v210: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_LAMBDA200)
, useLabel(PC_LAMBDA200)
,};
