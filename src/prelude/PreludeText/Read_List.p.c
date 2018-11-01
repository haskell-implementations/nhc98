#include "newmacros.h"
#include "runtime.h"

#define CT_v193	((void*)startLabel+64)
#define CT_v198	((void*)startLabel+180)
#define CT_v204	((void*)startLabel+352)
#define ST_v200	((void*)startLabel+388)
#define ST_v195	((void*)startLabel+412)
#define ST_v191	((void*)startLabel+448)
#define PS_v192	((void*)startLabel+484)
#define PS_v190	((void*)startLabel+496)
#define PS_v197	((void*)startLabel+508)
#define PS_v194	((void*)startLabel+520)
#define PS_v196	((void*)startLabel+532)
#define PS_v201	((void*)startLabel+544)
#define PS_v202	((void*)startLabel+556)
#define PS_v199	((void*)startLabel+568)
#define PS_v203	((void*)startLabel+580)
extern Node FN_Prelude_46readList[];
extern Node FN_Prelude_46Read_46Prelude_46_91_93[];
extern Node FN_Prelude_46_95_46readList[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46readList[];
extern Node PC_Prelude_46_95_46readList[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v193)
,};
Node FN_Prelude_46Read_46Prelude_46_91_93_46readsPrec[] = {
  bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v192)
, 0
, 0
, 0
, 0
, 40003
, useLabel(ST_v191)
,	/* CT_v193: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46_91_93_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93_46readsPrec),2)
, useLabel(PS_v190)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46readList))
, bytes2word(1,0,0,1)
, useLabel(CT_v198)
,};
Node FN_Prelude_46Read_46Prelude_46_91_93_46readList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
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
, 30022
, useLabel(ST_v195)
,	/* CT_v198: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46_91_93_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93_46readList),1)
, useLabel(PS_v194)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(1,0,0,1)
, useLabel(CT_v204)
,};
Node FN_Prelude_46Read_46Prelude_46_91_93[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v203)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
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
, 30022
, useLabel(ST_v200)
,	/* CT_v204: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46_91_93[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93),1)
, useLabel(PS_v199)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93_46readList))
,};
Node PP_Prelude_46Read_46Prelude_46_91_93[] = {
 };
Node PC_Prelude_46Read_46Prelude_46_91_93[] = {
 	/* ST_v200: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,91,93,0)
,};
Node PP_Prelude_46Read_46Prelude_46_91_93_46readList[] = {
 };
Node PC_Prelude_46Read_46Prelude_46_91_93_46readList[] = {
 	/* ST_v195: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,91,93,46)
, bytes2word(114,101,97,100)
, bytes2word(76,105,115,116)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Read_46Prelude_46_91_93_46readsPrec[] = {
 };
Node PC_Prelude_46Read_46Prelude_46_91_93_46readsPrec[] = {
 	/* ST_v191: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,91,93,46)
, bytes2word(114,101,97,100)
, bytes2word(115,80,114,101)
, bytes2word(99,0,0,0)
,	/* PS_v192: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46_91_93_46readsPrec)
, useLabel(PC_Prelude_46readList)
,	/* PS_v190: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46_91_93_46readsPrec)
, useLabel(PC_Prelude_46Read_46Prelude_46_91_93_46readsPrec)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46_91_93_46readList)
, useLabel(PC_Prelude_46_95_46readList)
,	/* PS_v194: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46_91_93_46readList)
, useLabel(PC_Prelude_46Read_46Prelude_46_91_93_46readList)
,	/* PS_v196: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46_91_93_46readList)
, useLabel(PC_Prelude_46Read_46Prelude_46_91_93)
,	/* PS_v201: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46_91_93)
, useLabel(PC_Prelude_46Read_46Prelude_46_91_93_46readsPrec)
,	/* PS_v202: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46_91_93)
, useLabel(PC_Prelude_46Read_46Prelude_46_91_93_46readList)
,	/* PS_v199: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46_91_93)
, useLabel(PC_Prelude_46Read_46Prelude_46_91_93)
,	/* PS_v203: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46_91_93)
, useLabel(PC_Prelude_462)
,};
