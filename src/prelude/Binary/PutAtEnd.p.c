#include "newmacros.h"
#include "runtime.h"

#define CT_v207	((void*)startLabel+124)
#define FN_LAMBDA200	((void*)startLabel+180)
#define CT_v214	((void*)startLabel+320)
#define F0_LAMBDA200	((void*)startLabel+328)
#define ST_v203	((void*)startLabel+364)
#define PP_LAMBDA200	((void*)startLabel+384)
#define PC_LAMBDA200	((void*)startLabel+384)
#define ST_v209	((void*)startLabel+384)
#define PS_v204	((void*)startLabel+416)
#define PS_v202	((void*)startLabel+428)
#define PS_v206	((void*)startLabel+440)
#define PS_v205	((void*)startLabel+452)
#define PS_v210	((void*)startLabel+464)
#define PS_v211	((void*)startLabel+476)
#define PS_v212	((void*)startLabel+488)
#define PS_v213	((void*)startLabel+500)
#define PS_v208	((void*)startLabel+512)
extern Node FN_NHC_46Binary_46endBin[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_NHC_46Binary_46seekBin[];
extern Node FN_NHC_46Binary_46put[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node PM_NHC_46Binary[];
extern Node PC_NHC_46Binary_46endBin[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46Binary_46seekBin[];
extern Node PC_NHC_46Binary_46put[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v207)
,};
Node FN_NHC_46Binary_46putAtEnd[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,14,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
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
, useLabel(PS_v204)
, 0
, 0
, 0
, 0
, 120001
, useLabel(ST_v203)
,	/* CT_v207: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_NHC_46Binary_46putAtEnd[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46putAtEnd),3)
, useLabel(PS_v202)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46endBin))
, CAPTAG(useLabel(FN_LAMBDA200),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v214)
,	/* FN_LAMBDA200: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,2,4,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_ARG_ARG,2,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,26,HEAP_OFF_N1,14)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
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
, 130008
, useLabel(ST_v209)
,	/* CT_v214: (byte 0) */
  HW(4,4)
, 0
,	/* F0_LAMBDA200: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA200),4)
, useLabel(PS_v208)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46seekBin))
, VAPTAG(useLabel(FN_NHC_46Binary_46put))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,};
Node PP_NHC_46Binary_46putAtEnd[] = {
 };
Node PC_NHC_46Binary_46putAtEnd[] = {
 	/* ST_v203: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,112)
, bytes2word(117,116,65,116)
,	/* PP_LAMBDA200: (byte 4) */
 	/* PC_LAMBDA200: (byte 4) */
 	/* ST_v209: (byte 4) */
  bytes2word(69,110,100,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,112)
, bytes2word(117,116,65,116)
, bytes2word(69,110,100,58)
, bytes2word(49,51,58,56)
, bytes2word(45,49,51,58)
, bytes2word(49,53,0,0)
,	/* PS_v204: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46putAtEnd)
, useLabel(PC_NHC_46Binary_46endBin)
,	/* PS_v202: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46putAtEnd)
, useLabel(PC_NHC_46Binary_46putAtEnd)
,	/* PS_v206: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46putAtEnd)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v205: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46putAtEnd)
, useLabel(PC_LAMBDA200)
,	/* PS_v210: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA200)
, useLabel(PC_NHC_46Binary_46seekBin)
,	/* PS_v211: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA200)
, useLabel(PC_NHC_46Binary_46put)
,	/* PS_v212: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA200)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v213: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA200)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,	/* PS_v208: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA200)
, useLabel(PC_LAMBDA200)
,};
