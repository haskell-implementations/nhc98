#include "newmacros.h"
#include "runtime.h"

#define CT_v212	((void*)startLabel+248)
#define ST_v205	((void*)startLabel+296)
#define PS_v206	((void*)startLabel+316)
#define PS_v207	((void*)startLabel+328)
#define PS_v208	((void*)startLabel+340)
#define PS_v210	((void*)startLabel+352)
#define PS_v204	((void*)startLabel+364)
#define PS_v209	((void*)startLabel+376)
#define PS_v211	((void*)startLabel+388)
extern Node FN_NHC_46Binary_46seekBin[];
extern Node FN_NHC_46Binary_46put[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PM_NHC_46Binary[];
extern Node PC_NHC_46Binary_46seekBin[];
extern Node PC_NHC_46Binary_46put[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC__40_41[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v212)
,};
Node FN_NHC_46Binary_46putAt[] = {
  bytes2word(NEEDHEAP_P1,47,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,2,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_ARG_ARG,2)
, bytes2word(4,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,26,HEAP_OFF_N1,14)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,23,HEAP_OFF_N1,12)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
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
, CONSTR(0,0,0)
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
, useLabel(PS_v206)
, 0
, 0
, 0
, 0
, 110001
, useLabel(ST_v205)
,	/* CT_v212: (byte 0) */
  HW(5,4)
, 0
,};
Node F0_NHC_46Binary_46putAt[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46putAt),4)
, useLabel(PS_v204)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46seekBin))
, VAPTAG(useLabel(FN_NHC_46Binary_46put))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};
Node PP_NHC_46Binary_46putAt[] = {
 };
Node PC_NHC_46Binary_46putAt[] = {
 	/* ST_v205: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,112)
, bytes2word(117,116,65,116)
, bytes2word(0,0,0,0)
,	/* PS_v206: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46putAt)
, useLabel(PC_NHC_46Binary_46seekBin)
,	/* PS_v207: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46putAt)
, useLabel(PC_NHC_46Binary_46put)
,	/* PS_v208: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46putAt)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v210: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46putAt)
, useLabel(PC__40_41)
,	/* PS_v204: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46putAt)
, useLabel(PC_NHC_46Binary_46putAt)
,	/* PS_v209: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46putAt)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,	/* PS_v211: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46putAt)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,};
