#include "newmacros.h"
#include "runtime.h"

#define CT_v187	((void*)startLabel+44)
#define FN_LAMBDA184	((void*)startLabel+72)
#define CT_v190	((void*)startLabel+104)
#define CF_LAMBDA184	((void*)startLabel+112)
#define CT_v192	((void*)startLabel+148)
#define CT_v194	((void*)startLabel+192)
#define CT_v196	((void*)startLabel+236)
#define ST_v189	((void*)startLabel+248)
#define ST_v191	((void*)startLabel+298)
#define ST_v193	((void*)startLabel+323)
#define ST_v186	((void*)startLabel+348)
#define ST_v188	((void*)startLabel+369)
#define ST_v195	((void*)startLabel+396)
extern Node TM_Prelude[];
extern Node FN_NHC_46Internal_46_95noMethodError[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v187)
,};
Node FN_Prelude_46_95_46toRational[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(ST_v186)
,	/* CT_v187: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46toRational),2)
, VAPTAG(useLabel(FN_LAMBDA184))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v190)
,	/* FN_LAMBDA184: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v189)
, 0
, useLabel(ST_v188)
,	/* CT_v190: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA184: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA184))
, bytes2word(1,0,0,1)
, useLabel(CT_v192)
,};
Node FN_Prelude_46Real_46Prelude_46Num[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80025
, useLabel(ST_v191)
,	/* CT_v192: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Real_46Prelude_46Num[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v194)
,};
Node FN_Prelude_46Real_46Prelude_46Ord[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80025
, useLabel(ST_v193)
,	/* CT_v194: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Real_46Prelude_46Ord[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v196)
,};
Node FN_Prelude_46toRational[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80025
, useLabel(ST_v195)
,	/* CT_v196: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46toRational),1)
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
, bytes2word(111,100,32,116)
, bytes2word(111,82,97,116)
, bytes2word(105,111,110,97)
,	/* ST_v191: (byte 2) */
  bytes2word(108,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,108,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,78)
,	/* ST_v193: (byte 3) */
  bytes2word(117,109,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,108,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* ST_v186: (byte 4) */
  bytes2word(79,114,100,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,46,116,111)
, bytes2word(82,97,116,105)
, bytes2word(111,110,97,108)
,	/* ST_v188: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,95,46,116)
, bytes2word(111,82,97,116)
, bytes2word(105,111,110,97)
, bytes2word(108,58,110,111)
,	/* ST_v195: (byte 4) */
  bytes2word(112,111,115,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(116,111,82,97)
, bytes2word(116,105,111,110)
, bytes2word(97,108,0,0)
,};
