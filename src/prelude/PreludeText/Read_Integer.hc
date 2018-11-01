#include "newmacros.h"
#include "runtime.h"

#define CT_v187	((void*)startLabel+24)
#define CT_v188	((void*)startLabel+72)
#define CT_v189	((void*)startLabel+120)
extern Node FN_Numeric_46readDec[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node FN_Numeric_46readSigned[];
extern Node CF_Prelude_46Real_46Prelude_46Integer[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46Prelude_46Integer[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v187)
,};
Node FN_Prelude_46Read_46Prelude_46Integer_46readsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v187: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Integer_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Integer_46readsPrec),1)
, VAPTAG(useLabel(FN_Numeric_46readDec))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Numeric_46readSigned))
, useLabel(CF_Prelude_46Real_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v188)
,};
Node FN_Prelude_46Read_46Prelude_46Integer_46readList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v188: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Integer_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Integer_46readList))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v189)
,};
Node FN_Prelude_46Read_46Prelude_46Integer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v189: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Integer))
, useLabel(F0_Prelude_46Read_46Prelude_46Integer_46readsPrec)
, useLabel(CF_Prelude_46Read_46Prelude_46Integer_46readList)
,};
