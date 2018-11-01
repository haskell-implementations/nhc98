#include "newmacros.h"
#include "runtime.h"

#define CT_v186	((void*)startLabel+32)
#define FN_LAMBDA184	((void*)startLabel+60)
#define CT_v188	((void*)startLabel+80)
#define CF_LAMBDA184	((void*)startLabel+88)
#define CT_v189	((void*)startLabel+112)
#define CT_v190	((void*)startLabel+144)
#define CT_v191	((void*)startLabel+176)
#define ST_v187	((void*)startLabel+188)
extern Node FN_NHC_46Internal_46_95noMethodError[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v186)
,};
Node FN_Prelude_46_95_46toRational[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v186: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46toRational),2)
, VAPTAG(useLabel(FN_LAMBDA184))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v188)
,	/* FN_LAMBDA184: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v187)
,	/* CT_v188: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA184: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA184))
, bytes2word(1,0,0,1)
, useLabel(CT_v189)
,};
Node FN_Prelude_46Real_46Prelude_46Num[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v189: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Real_46Prelude_46Num[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v190)
,};
Node FN_Prelude_46Real_46Prelude_46Ord[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v190: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Real_46Prelude_46Ord[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v191)
,};
Node FN_Prelude_46toRational[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v191: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46toRational),1)
,	/* ST_v187: (byte 0) */
  bytes2word(78,111,32,100)
, bytes2word(101,102,97,117)
, bytes2word(108,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(105,116,105,111)
, bytes2word(110,32,102,111)
, bytes2word(114,32,99,108)
, bytes2word(97,115,115,32)
, bytes2word(109,101,116,104)
, bytes2word(111,100,32,116)
, bytes2word(111,82,97,116)
, bytes2word(105,111,110,97)
, bytes2word(108,0,0,0)
,};
