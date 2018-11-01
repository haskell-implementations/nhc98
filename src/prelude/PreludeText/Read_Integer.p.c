#include "newmacros.h"
#include "runtime.h"

#define CT_v191	((void*)startLabel+88)
#define CT_v195	((void*)startLabel+192)
#define CT_v199	((void*)startLabel+304)
#define ST_v197	((void*)startLabel+340)
#define ST_v193	((void*)startLabel+372)
#define ST_v188	((void*)startLabel+412)
#define PS_v190	((void*)startLabel+452)
#define PS_v189	((void*)startLabel+464)
#define PS_v187	((void*)startLabel+476)
#define PS_v194	((void*)startLabel+488)
#define PS_v192	((void*)startLabel+500)
#define PS_v196	((void*)startLabel+512)
#define PS_v198	((void*)startLabel+524)
extern Node FN_Numeric_46readDec[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node FN_Numeric_46readSigned[];
extern Node CF_Prelude_46Real_46Prelude_46Integer[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46Prelude_46Integer[];
extern Node PM_Prelude[];
extern Node PC_Numeric_46readSigned[];
extern Node PC_Numeric_46readDec[];
extern Node PC_Prelude_46_95_46readList[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v191)
,};
Node FN_Prelude_46Read_46Prelude_46Integer_46readsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v190)
, 0
, 0
, 0
, 0
, useLabel(PS_v189)
, 0
, 0
, 0
, 0
, 60003
, useLabel(ST_v188)
,	/* CT_v191: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Integer_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Integer_46readsPrec),1)
, useLabel(PS_v187)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Numeric_46readDec))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Numeric_46readSigned))
, useLabel(CF_Prelude_46Real_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v195)
,};
Node FN_Prelude_46Read_46Prelude_46Integer_46readList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v194)
, 0
, 0
, 0
, 0
, 50010
, useLabel(ST_v193)
,	/* CT_v195: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Integer_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Integer_46readList))
, useLabel(PS_v192)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v199)
,};
Node FN_Prelude_46Read_46Prelude_46Integer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v198)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 50010
, useLabel(ST_v197)
,	/* CT_v199: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Integer))
, useLabel(PS_v196)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Read_46Prelude_46Integer_46readsPrec)
, useLabel(CF_Prelude_46Read_46Prelude_46Integer_46readList)
,};
Node PP_Prelude_46Read_46Prelude_46Integer[] = {
 };
Node PC_Prelude_46Read_46Prelude_46Integer[] = {
 	/* ST_v197: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Read_46Prelude_46Integer_46readList[] = {
 };
Node PC_Prelude_46Read_46Prelude_46Integer_46readList[] = {
 	/* ST_v193: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
, bytes2word(46,114,101,97)
, bytes2word(100,76,105,115)
, bytes2word(116,0,0,0)
,};
Node PP_Prelude_46Read_46Prelude_46Integer_46readsPrec[] = {
 };
Node PC_Prelude_46Read_46Prelude_46Integer_46readsPrec[] = {
 	/* ST_v188: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
, bytes2word(46,114,101,97)
, bytes2word(100,115,80,114)
, bytes2word(101,99,0,0)
,	/* PS_v190: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Integer_46readsPrec)
, useLabel(PC_Numeric_46readSigned)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Integer_46readsPrec)
, useLabel(PC_Numeric_46readDec)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Integer_46readsPrec)
, useLabel(PC_Prelude_46Read_46Prelude_46Integer_46readsPrec)
,	/* PS_v194: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Integer_46readList)
, useLabel(PC_Prelude_46_95_46readList)
,	/* PS_v192: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Integer_46readList)
, useLabel(PC_Prelude_46Read_46Prelude_46Integer_46readList)
,	/* PS_v196: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Integer)
, useLabel(PC_Prelude_46Read_46Prelude_46Integer)
,	/* PS_v198: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Integer)
, useLabel(PC_Prelude_462)
,};
