#include "newmacros.h"
#include "runtime.h"

#define CT_v191	((void*)startLabel+36)
#define CT_v193	((void*)startLabel+88)
#define CT_v195	((void*)startLabel+156)
#define ST_v194	((void*)startLabel+176)
#define ST_v192	((void*)startLabel+200)
#define ST_v190	((void*)startLabel+233)
extern Node TM_Prelude[];
extern Node FN_Prelude_46readList[];
extern Node FN_Prelude_46Read_46Prelude_46_91_93[];
extern Node FN_Prelude_46_95_46readList[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v191)
,};
Node FN_Prelude_46Read_46Prelude_46_91_93_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40003
, useLabel(ST_v190)
,	/* CT_v191: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46_91_93_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93_46readsPrec),2)
, VAPTAG(useLabel(FN_Prelude_46readList))
, bytes2word(1,0,0,1)
, useLabel(CT_v193)
,};
Node FN_Prelude_46Read_46Prelude_46_91_93_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 30022
, useLabel(ST_v192)
,	/* CT_v193: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46_91_93_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93_46readList),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(1,0,0,1)
, useLabel(CT_v195)
,};
Node FN_Prelude_46Read_46Prelude_46_91_93[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30022
, useLabel(ST_v194)
,	/* CT_v195: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46_91_93[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93),1)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93_46readList))
,	/* ST_v194: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
,	/* ST_v192: (byte 4) */
  bytes2word(46,91,93,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,91,93,46)
, bytes2word(114,101,97,100)
, bytes2word(76,105,115,116)
,	/* ST_v190: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,91,93)
, bytes2word(46,114,101,97)
, bytes2word(100,115,80,114)
, bytes2word(101,99,0,0)
,};
