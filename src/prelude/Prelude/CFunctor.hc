#include "newmacros.h"
#include "runtime.h"

#define CT_v188	((void*)startLabel+36)
#define FN_LAMBDA186	((void*)startLabel+64)
#define CT_v190	((void*)startLabel+84)
#define CF_LAMBDA186	((void*)startLabel+92)
#define CT_v191	((void*)startLabel+116)
#define ST_v189	((void*)startLabel+128)
extern Node FN_NHC_46Internal_46_95noMethodError[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v188)
,};
Node FN_Prelude_46_95_46fmap[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2)
, bytes2word(HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,ZAP_ARG_I2,ZAP_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v188: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46_95_46fmap[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46fmap),3)
, VAPTAG(useLabel(FN_LAMBDA186))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v190)
,	/* FN_LAMBDA186: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v189)
,	/* CT_v190: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA186: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA186))
, bytes2word(1,0,0,1)
, useLabel(CT_v191)
,};
Node FN_Prelude_46fmap[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v191: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46fmap[] = {
  CAPTAG(useLabel(FN_Prelude_46fmap),1)
,	/* ST_v189: (byte 0) */
  bytes2word(78,111,32,100)
, bytes2word(101,102,97,117)
, bytes2word(108,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(105,116,105,111)
, bytes2word(110,32,102,111)
, bytes2word(114,32,99,108)
, bytes2word(97,115,115,32)
, bytes2word(109,101,116,104)
, bytes2word(111,100,32,102)
, bytes2word(109,97,112,0)
,};
