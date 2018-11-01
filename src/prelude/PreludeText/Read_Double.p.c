#include "newmacros.h"
#include "runtime.h"

#define CT_v190	((void*)startLabel+88)
#define CT_v194	((void*)startLabel+192)
#define CT_v198	((void*)startLabel+304)
#define ST_v196	((void*)startLabel+340)
#define ST_v192	((void*)startLabel+368)
#define ST_v187	((void*)startLabel+408)
#define PS_v189	((void*)startLabel+448)
#define PS_v188	((void*)startLabel+460)
#define PS_v186	((void*)startLabel+472)
#define PS_v193	((void*)startLabel+484)
#define PS_v191	((void*)startLabel+496)
#define PS_v195	((void*)startLabel+508)
#define PS_v197	((void*)startLabel+520)
extern Node FN_Numeric_46readFloat[];
extern Node CF_Prelude_46RealFrac_46Prelude_46Double[];
extern Node FN_Numeric_46readSigned[];
extern Node CF_Prelude_46Real_46Prelude_46Double[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46Prelude_46Double[];
extern Node PM_Prelude[];
extern Node PC_Numeric_46readSigned[];
extern Node PC_Numeric_46readFloat[];
extern Node PC_Prelude_46_95_46readList[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v190)
,};
Node FN_Prelude_46Read_46Prelude_46Double_46readsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
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
, 70003
, useLabel(ST_v187)
,	/* CT_v190: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Double_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Double_46readsPrec),1)
, useLabel(PS_v186)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Numeric_46readFloat),1)
, useLabel(CF_Prelude_46RealFrac_46Prelude_46Double)
, VAPTAG(useLabel(FN_Numeric_46readSigned))
, useLabel(CF_Prelude_46Real_46Prelude_46Double)
, bytes2word(0,0,0,0)
, useLabel(CT_v194)
,};
Node FN_Prelude_46Read_46Prelude_46Double_46readList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v193)
, 0
, 0
, 0
, 0
, 60010
, useLabel(ST_v192)
,	/* CT_v194: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Double_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Double_46readList))
, useLabel(PS_v191)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46Prelude_46Double)
, bytes2word(0,0,0,0)
, useLabel(CT_v198)
,};
Node FN_Prelude_46Read_46Prelude_46Double[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 60010
, useLabel(ST_v196)
,	/* CT_v198: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Double[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Double))
, useLabel(PS_v195)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Read_46Prelude_46Double_46readsPrec)
, useLabel(CF_Prelude_46Read_46Prelude_46Double_46readList)
,};
Node PP_Prelude_46Read_46Prelude_46Double[] = {
 };
Node PC_Prelude_46Read_46Prelude_46Double[] = {
 	/* ST_v196: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
, bytes2word(98,108,101,0)
,};
Node PP_Prelude_46Read_46Prelude_46Double_46readList[] = {
 };
Node PC_Prelude_46Read_46Prelude_46Double_46readList[] = {
 	/* ST_v192: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
, bytes2word(98,108,101,46)
, bytes2word(114,101,97,100)
, bytes2word(76,105,115,116)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Read_46Prelude_46Double_46readsPrec[] = {
 };
Node PC_Prelude_46Read_46Prelude_46Double_46readsPrec[] = {
 	/* ST_v187: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
, bytes2word(98,108,101,46)
, bytes2word(114,101,97,100)
, bytes2word(115,80,114,101)
, bytes2word(99,0,0,0)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Double_46readsPrec)
, useLabel(PC_Numeric_46readSigned)
,	/* PS_v188: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Double_46readsPrec)
, useLabel(PC_Numeric_46readFloat)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Double_46readsPrec)
, useLabel(PC_Prelude_46Read_46Prelude_46Double_46readsPrec)
,	/* PS_v193: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Double_46readList)
, useLabel(PC_Prelude_46_95_46readList)
,	/* PS_v191: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Double_46readList)
, useLabel(PC_Prelude_46Read_46Prelude_46Double_46readList)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Double)
, useLabel(PC_Prelude_46Read_46Prelude_46Double)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Double)
, useLabel(PC_Prelude_462)
,};
