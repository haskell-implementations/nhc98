#include "newmacros.h"
#include "runtime.h"

#define CT_v204	((void*)startLabel+172)
#define FN_LAMBDA196	((void*)startLabel+224)
#define CT_v211	((void*)startLabel+364)
#define F0_LAMBDA196	((void*)startLabel+372)
#define ST_v199	((void*)startLabel+412)
#define PP_LAMBDA196	((void*)startLabel+430)
#define PC_LAMBDA196	((void*)startLabel+430)
#define ST_v206	((void*)startLabel+430)
#define PS_v201	((void*)startLabel+460)
#define PS_v200	((void*)startLabel+472)
#define PS_v198	((void*)startLabel+484)
#define PS_v203	((void*)startLabel+496)
#define PS_v202	((void*)startLabel+508)
#define PS_v207	((void*)startLabel+520)
#define PS_v209	((void*)startLabel+532)
#define PS_v208	((void*)startLabel+544)
#define PS_v210	((void*)startLabel+556)
#define PS_v205	((void*)startLabel+568)
extern Node FN_IO_46openFile[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_IO_46hPutChar[];
extern Node FN_Prelude_46mapM_95[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_IO_46hClose[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node PM_Prelude[];
extern Node PC_IO_46openFile[];
extern Node PC_IO_46WriteMode[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_IO_46hPutChar[];
extern Node PC_IO_46hClose[];
extern Node PC_Prelude_46mapM_95[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v204)
,};
Node FN_Prelude_46writeFile[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,12)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v203)
, 0
, 0
, 0
, 0
, useLabel(PS_v202)
, 0
, 0
, 0
, 0
, useLabel(PS_v201)
, 0
, 0
, 0
, 0
, useLabel(PS_v200)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v199)
,	/* CT_v204: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46writeFile[] = {
  CAPTAG(useLabel(FN_Prelude_46writeFile),2)
, useLabel(PS_v198)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46openFile))
, CAPTAG(useLabel(FN_LAMBDA196),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v211)
,	/* FN_LAMBDA196: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(12,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,19,HEAP_OFF_N1,12)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
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
, 80029
, useLabel(ST_v206)
,	/* CT_v211: (byte 0) */
  HW(5,2)
, 0
,	/* F0_LAMBDA196: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA196),2)
, useLabel(PS_v205)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_IO_46hPutChar),1)
, VAPTAG(useLabel(FN_Prelude_46mapM_95))
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, VAPTAG(useLabel(FN_IO_46hClose))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,};
Node PP_Prelude_46writeFile[] = {
 };
Node PC_Prelude_46writeFile[] = {
 	/* ST_v199: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(119,114,105,116)
, bytes2word(101,70,105,108)
,	/* PP_LAMBDA196: (byte 2) */
 	/* PC_LAMBDA196: (byte 2) */
 	/* ST_v206: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,119,114)
, bytes2word(105,116,101,70)
, bytes2word(105,108,101,58)
, bytes2word(56,58,50,57)
, bytes2word(45,49,48,58)
, bytes2word(49,53,0,0)
,	/* PS_v201: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46writeFile)
, useLabel(PC_IO_46openFile)
,	/* PS_v200: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46writeFile)
, useLabel(PC_IO_46WriteMode)
,	/* PS_v198: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46writeFile)
, useLabel(PC_Prelude_46writeFile)
,	/* PS_v203: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46writeFile)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v202: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46writeFile)
, useLabel(PC_LAMBDA196)
,	/* PS_v207: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA196)
, useLabel(PC_IO_46hPutChar)
,	/* PS_v209: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA196)
, useLabel(PC_IO_46hClose)
,	/* PS_v208: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA196)
, useLabel(PC_Prelude_46mapM_95)
,	/* PS_v210: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA196)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,	/* PS_v205: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA196)
, useLabel(PC_LAMBDA196)
,};
