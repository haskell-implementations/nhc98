#include "newmacros.h"
#include "runtime.h"

#define CT_v190	((void*)startLabel+24)
#define CT_v191	((void*)startLabel+64)
#define CT_v192	((void*)startLabel+120)
extern Node FN_Prelude_46readList[];
extern Node FN_Prelude_46Read_46Prelude_46_91_93[];
extern Node FN_Prelude_46_95_46readList[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v190)
,};
Node FN_Prelude_46Read_46Prelude_46_91_93_46readsPrec[] = {
  bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v190: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46_91_93_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93_46readsPrec),2)
, VAPTAG(useLabel(FN_Prelude_46readList))
, bytes2word(1,0,0,1)
, useLabel(CT_v191)
,};
Node FN_Prelude_46Read_46Prelude_46_91_93_46readList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v191: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46_91_93_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93_46readList),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(1,0,0,1)
, useLabel(CT_v192)
,};
Node FN_Prelude_46Read_46Prelude_46_91_93[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v192: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46_91_93[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93),1)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93_46readList))
,};
