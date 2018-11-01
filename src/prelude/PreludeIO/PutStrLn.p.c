#include "newmacros.h"
#include "runtime.h"

#define CT_v178	((void*)startLabel+144)
#define ST_v173	((void*)startLabel+188)
#define PS_v175	((void*)startLabel+208)
#define PS_v176	((void*)startLabel+220)
#define PS_v174	((void*)startLabel+232)
#define PS_v172	((void*)startLabel+244)
#define PS_v177	((void*)startLabel+256)
extern Node FN_Prelude_46putStr[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46putChar[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46putChar[];
extern Node PC_Prelude_46putStr[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v178)
,};
Node FN_Prelude_46putStrLn[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CHAR_P1,10)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,12)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v177)
, 0
, 0
, 0
, 0
, useLabel(PS_v176)
, 0
, 0
, 0
, 0
, useLabel(PS_v175)
, 0
, 0
, 0
, 0
, useLabel(PS_v174)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v173)
,	/* CT_v178: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46putStrLn[] = {
  CAPTAG(useLabel(FN_Prelude_46putStrLn),1)
, useLabel(PS_v172)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46putStr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46putChar))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,};
Node PP_Prelude_46putStrLn[] = {
 };
Node PC_Prelude_46putStrLn[] = {
 	/* ST_v173: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,117,116,83)
, bytes2word(116,114,76,110)
, bytes2word(0,0,0,0)
,	/* PS_v175: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46putStrLn)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v176: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46putStrLn)
, useLabel(PC_Prelude_46putChar)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46putStrLn)
, useLabel(PC_Prelude_46putStr)
,	/* PS_v172: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46putStrLn)
, useLabel(PC_Prelude_46putStrLn)
,	/* PS_v177: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46putStrLn)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,};
