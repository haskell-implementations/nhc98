#include "newmacros.h"
#include "runtime.h"

#define CT_v180	((void*)startLabel+84)
#define FN_LAMBDA173	((void*)startLabel+136)
#define CT_v185	((void*)startLabel+220)
#define F0_LAMBDA173	((void*)startLabel+228)
#define ST_v177	((void*)startLabel+256)
#define PP_LAMBDA173	((void*)startLabel+273)
#define PC_LAMBDA173	((void*)startLabel+273)
#define ST_v182	((void*)startLabel+273)
#define PS_v176	((void*)startLabel+300)
#define PS_v179	((void*)startLabel+312)
#define PS_v178	((void*)startLabel+324)
#define PS_v183	((void*)startLabel+336)
#define PS_v184	((void*)startLabel+348)
#define PS_v181	((void*)startLabel+360)
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_Prelude_46getContents[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46putStr[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46putStr[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v180)
,};
Node FN_Prelude_46interact[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v179)
, 0
, 0
, 0
, 0
, useLabel(PS_v178)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v177)
,	/* CT_v180: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46interact[] = {
  CAPTAG(useLabel(FN_Prelude_46interact),1)
, useLabel(PS_v176)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA173),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_Prelude_46getContents)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v185)
,	/* FN_LAMBDA173: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_P1,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v184)
, 0
, 0
, 0
, 0
, useLabel(PS_v183)
, 0
, 0
, 0
, 0
, 40022
, useLabel(ST_v182)
,	/* CT_v185: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA173: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA173),2)
, useLabel(PS_v181)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46putStr))
,};
Node PP_Prelude_46interact[] = {
 };
Node PC_Prelude_46interact[] = {
 	/* ST_v177: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(105,110,116,101)
, bytes2word(114,97,99,116)
,	/* PP_LAMBDA173: (byte 1) */
 	/* PC_LAMBDA173: (byte 1) */
 	/* ST_v182: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,105,110,116)
, bytes2word(101,114,97,99)
, bytes2word(116,58,52,58)
, bytes2word(50,50,45,52)
, bytes2word(58,51,50,0)
,	/* PS_v176: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46interact)
, useLabel(PC_Prelude_46interact)
,	/* PS_v179: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46interact)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v178: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46interact)
, useLabel(PC_LAMBDA173)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA173)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v184: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA173)
, useLabel(PC_Prelude_46putStr)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA173)
, useLabel(PC_LAMBDA173)
,};
