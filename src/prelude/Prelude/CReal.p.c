#include "newmacros.h"
#include "runtime.h"

#define CT_v190	((void*)startLabel+92)
#define FN_LAMBDA184	((void*)startLabel+136)
#define CT_v194	((void*)startLabel+180)
#define CF_LAMBDA184	((void*)startLabel+188)
#define CT_v197	((void*)startLabel+236)
#define CT_v200	((void*)startLabel+292)
#define CT_v203	((void*)startLabel+348)
#define ST_v193	((void*)startLabel+376)
#define ST_v196	((void*)startLabel+428)
#define ST_v199	((void*)startLabel+456)
#define ST_v187	((void*)startLabel+484)
#define PP_LAMBDA184	((void*)startLabel+505)
#define PC_LAMBDA184	((void*)startLabel+505)
#define ST_v192	((void*)startLabel+505)
#define ST_v202	((void*)startLabel+532)
#define PS_v201	((void*)startLabel+552)
#define PS_v189	((void*)startLabel+564)
#define PS_v186	((void*)startLabel+576)
#define PS_v188	((void*)startLabel+588)
#define PS_v195	((void*)startLabel+600)
#define PS_v198	((void*)startLabel+612)
#define PS_v191	((void*)startLabel+624)
extern Node FN_NHC_46Internal_46_95noMethodError[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95noMethodError[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v190)
,};
Node FN_Prelude_46_95_46toRational[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v189)
, 0
, 0
, 0
, 0
, useLabel(PS_v188)
, 0
, 0
, 0
, 0
, 0
, useLabel(ST_v187)
,	/* CT_v190: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46toRational),2)
, useLabel(PS_v186)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA184))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v194)
,	/* FN_LAMBDA184: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v193)
, 0
, useLabel(ST_v192)
,	/* CT_v194: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA184: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA184))
, useLabel(PS_v191)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v197)
,};
Node FN_Prelude_46Real_46Prelude_46Num[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80025
, useLabel(ST_v196)
,	/* CT_v197: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Real_46Prelude_46Num[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num),1)
, useLabel(PS_v195)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v200)
,};
Node FN_Prelude_46Real_46Prelude_46Ord[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80025
, useLabel(ST_v199)
,	/* CT_v200: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Real_46Prelude_46Ord[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord),1)
, useLabel(PS_v198)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v203)
,};
Node FN_Prelude_46toRational[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80025
, useLabel(ST_v202)
,	/* CT_v203: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46toRational),1)
, useLabel(PS_v201)
, 0
, 0
, 0
,	/* ST_v193: (byte 0) */
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
Node PP_Prelude_46Real_46Prelude_46Num[] = {
 };
Node PC_Prelude_46Real_46Prelude_46Num[] = {
 	/* ST_v196: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,78,117,109)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Real_46Prelude_46Ord[] = {
 };
Node PC_Prelude_46Real_46Prelude_46Ord[] = {
 	/* ST_v199: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46_95_46toRational[] = {
 };
Node PC_Prelude_46_95_46toRational[] = {
 	/* ST_v187: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,46,116,111)
, bytes2word(82,97,116,105)
, bytes2word(111,110,97,108)
,	/* PP_LAMBDA184: (byte 1) */
 	/* PC_LAMBDA184: (byte 1) */
 	/* ST_v192: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,95,46,116)
, bytes2word(111,82,97,116)
, bytes2word(105,111,110,97)
, bytes2word(108,58,110,111)
, bytes2word(112,111,115,0)
,};
Node PP_Prelude_46toRational[] = {
 };
Node PC_Prelude_46toRational[] = {
 	/* ST_v202: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(116,111,82,97)
, bytes2word(116,105,111,110)
, bytes2word(97,108,0,0)
,	/* PS_v201: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46toRational)
, useLabel(PC_Prelude_46toRational)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46toRational)
, useLabel(PC_NHC_46Internal_46_95noMethodError)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46toRational)
, useLabel(PC_Prelude_46_95_46toRational)
,	/* PS_v188: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46toRational)
, useLabel(PC_LAMBDA184)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Real_46Prelude_46Num)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v198: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Real_46Prelude_46Ord)
, useLabel(PC_Prelude_46Real_46Prelude_46Ord)
,	/* PS_v191: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA184)
, useLabel(PC_LAMBDA184)
,};
