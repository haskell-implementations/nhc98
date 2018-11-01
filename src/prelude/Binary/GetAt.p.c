#include "newmacros.h"
#include "runtime.h"

#define CT_v199	((void*)startLabel+152)
#define ST_v194	((void*)startLabel+196)
#define PS_v195	((void*)startLabel+216)
#define PS_v196	((void*)startLabel+228)
#define PS_v197	((void*)startLabel+240)
#define PS_v193	((void*)startLabel+252)
#define PS_v198	((void*)startLabel+264)
extern Node FN_NHC_46Binary_46seekBin[];
extern Node FN_NHC_46Binary_46get[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node PM_NHC_46Binary[];
extern Node PC_NHC_46Binary_46seekBin[];
extern Node PC_NHC_46Binary_46get[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v199)
,};
Node FN_NHC_46Binary_46getAt[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(25,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v198)
, 0
, 0
, 0
, 0
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, useLabel(PS_v196)
, 0
, 0
, 0
, 0
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, 110001
, useLabel(ST_v194)
,	/* CT_v199: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_NHC_46Binary_46getAt[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46getAt),3)
, useLabel(PS_v193)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46seekBin))
, VAPTAG(useLabel(FN_NHC_46Binary_46get))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,};
Node PP_NHC_46Binary_46getAt[] = {
 };
Node PC_NHC_46Binary_46getAt[] = {
 	/* ST_v194: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,103)
, bytes2word(101,116,65,116)
, bytes2word(0,0,0,0)
,	/* PS_v195: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getAt)
, useLabel(PC_NHC_46Binary_46seekBin)
,	/* PS_v196: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getAt)
, useLabel(PC_NHC_46Binary_46get)
,	/* PS_v197: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getAt)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v193: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getAt)
, useLabel(PC_NHC_46Binary_46getAt)
,	/* PS_v198: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getAt)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,};
