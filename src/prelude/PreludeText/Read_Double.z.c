#include "newmacros.h"
#include "runtime.h"

#define CT_v187	((void*)startLabel+36)
#define CT_v189	((void*)startLabel+96)
#define CT_v191	((void*)startLabel+156)
#define ST_v190	((void*)startLabel+176)
#define ST_v188	((void*)startLabel+204)
#define ST_v186	((void*)startLabel+241)
extern Node TM_Prelude[];
extern Node FN_Numeric_46readFloat[];
extern Node CF_Prelude_46RealFrac_46Prelude_46Double[];
extern Node FN_Numeric_46readSigned[];
extern Node CF_Prelude_46Real_46Prelude_46Double[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46Prelude_46Double[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v187)
,};
Node FN_Prelude_46Read_46Prelude_46Double_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 70003
, useLabel(ST_v186)
,	/* CT_v187: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Double_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Double_46readsPrec),1)
, CAPTAG(useLabel(FN_Numeric_46readFloat),1)
, useLabel(CF_Prelude_46RealFrac_46Prelude_46Double)
, VAPTAG(useLabel(FN_Numeric_46readSigned))
, useLabel(CF_Prelude_46Real_46Prelude_46Double)
, bytes2word(0,0,0,0)
, useLabel(CT_v189)
,};
Node FN_Prelude_46Read_46Prelude_46Double_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60010
, useLabel(ST_v188)
,	/* CT_v189: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Double_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Double_46readList))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46Prelude_46Double)
, bytes2word(0,0,0,0)
, useLabel(CT_v191)
,};
Node FN_Prelude_46Read_46Prelude_46Double[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 60010
, useLabel(ST_v190)
,	/* CT_v191: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Double[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Double))
, useLabel(F0_Prelude_46Read_46Prelude_46Double_46readsPrec)
, useLabel(CF_Prelude_46Read_46Prelude_46Double_46readList)
,	/* ST_v190: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
,	/* ST_v188: (byte 4) */
  bytes2word(98,108,101,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
, bytes2word(98,108,101,46)
, bytes2word(114,101,97,100)
, bytes2word(76,105,115,116)
,	/* ST_v186: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,68,111)
, bytes2word(117,98,108,101)
, bytes2word(46,114,101,97)
, bytes2word(100,115,80,114)
, bytes2word(101,99,0,0)
,};
