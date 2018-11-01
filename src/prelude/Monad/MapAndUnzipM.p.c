#include "newmacros.h"
#include "runtime.h"

#define CT_v211	((void*)startLabel+228)
#define ST_v204	((void*)startLabel+284)
#define PS_v207	((void*)startLabel+304)
#define PS_v206	((void*)startLabel+316)
#define PS_v209	((void*)startLabel+328)
#define PS_v205	((void*)startLabel+340)
#define PS_v210	((void*)startLabel+352)
#define PS_v208	((void*)startLabel+364)
#define PS_v203	((void*)startLabel+376)
extern Node FN_Prelude_46sequence[];
extern Node FN_Prelude_46map[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46return[];
extern Node FN_Prelude_46_46[];
extern Node CF_Prelude_46unzip[];
extern Node FN_Prelude_46_62_62_61[];
extern Node PM_Monad[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46map[];
extern Node PC_Prelude_46_46[];
extern Node PC_Prelude_46sequence[];
extern Node PC_Prelude_46_62_62_61[];
extern Node PC_Prelude_46return[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v211)
,};
Node FN_Monad_46mapAndUnzipM[] = {
  bytes2word(NEEDHEAP_P1,44,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,2)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,12,PUSH_P1,0)
, bytes2word(PUSH_P1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
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
, 40001
, useLabel(ST_v204)
,	/* CT_v211: (byte 0) */
  HW(7,3)
, 0
,};
Node F0_Monad_46mapAndUnzipM[] = {
  CAPTAG(useLabel(FN_Monad_46mapAndUnzipM),3)
, useLabel(PS_v203)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46sequence))
, VAPTAG(useLabel(FN_Prelude_46map))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46return))
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(CF_Prelude_46unzip)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
,};
Node PP_Monad_46mapAndUnzipM[] = {
 };
Node PC_Monad_46mapAndUnzipM[] = {
 	/* ST_v204: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,109,97)
, bytes2word(112,65,110,100)
, bytes2word(85,110,122,105)
, bytes2word(112,77,0,0)
,	/* PS_v207: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46mapAndUnzipM)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v206: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46mapAndUnzipM)
, useLabel(PC_Prelude_46map)
,	/* PS_v209: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46mapAndUnzipM)
, useLabel(PC_Prelude_46_46)
,	/* PS_v205: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46mapAndUnzipM)
, useLabel(PC_Prelude_46sequence)
,	/* PS_v210: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46mapAndUnzipM)
, useLabel(PC_Prelude_46_62_62_61)
,	/* PS_v208: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46mapAndUnzipM)
, useLabel(PC_Prelude_46return)
,	/* PS_v203: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46mapAndUnzipM)
, useLabel(PC_Monad_46mapAndUnzipM)
,};
