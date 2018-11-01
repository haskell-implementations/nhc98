#include "newmacros.h"
#include "runtime.h"

#define CT_v186	((void*)startLabel+24)
#define FN_LAMBDA183	((void*)startLabel+52)
#define CT_v188	((void*)startLabel+72)
#define CF_LAMBDA183	((void*)startLabel+80)
#define CT_v189	((void*)startLabel+108)
#define FN_LAMBDA184	((void*)startLabel+136)
#define CT_v191	((void*)startLabel+156)
#define CF_LAMBDA184	((void*)startLabel+164)
#define CT_v192	((void*)startLabel+188)
#define CT_v193	((void*)startLabel+220)
#define ST_v187	((void*)startLabel+232)
#define ST_v190	((void*)startLabel+280)
extern Node FN_NHC_46Internal_46_95noMethodError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v186)
,};
Node FN_Prelude_46_95_46maxBound[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v186: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46_95_46maxBound[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46maxBound),1)
, VAPTAG(useLabel(FN_LAMBDA183))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v188)
,	/* FN_LAMBDA183: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v187)
,	/* CT_v188: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA183: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA183))
, bytes2word(1,0,0,1)
, useLabel(CT_v189)
,};
Node FN_Prelude_46_95_46minBound[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v189: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46_95_46minBound[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46minBound),1)
, VAPTAG(useLabel(FN_LAMBDA184))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v191)
,	/* FN_LAMBDA184: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v190)
,	/* CT_v191: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA184: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA184))
, bytes2word(1,0,0,1)
, useLabel(CT_v192)
,};
Node FN_Prelude_46minBound[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v192: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46minBound[] = {
  CAPTAG(useLabel(FN_Prelude_46minBound),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v193)
,};
Node FN_Prelude_46maxBound[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v193: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46maxBound[] = {
  CAPTAG(useLabel(FN_Prelude_46maxBound),1)
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
, bytes2word(111,100,32,109)
, bytes2word(97,120,66,111)
,	/* ST_v190: (byte 4) */
  bytes2word(117,110,100,0)
, bytes2word(78,111,32,100)
, bytes2word(101,102,97,117)
, bytes2word(108,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(105,116,105,111)
, bytes2word(110,32,102,111)
, bytes2word(114,32,99,108)
, bytes2word(97,115,115,32)
, bytes2word(109,101,116,104)
, bytes2word(111,100,32,109)
, bytes2word(105,110,66,111)
, bytes2word(117,110,100,0)
,};
