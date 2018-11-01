#include "newmacros.h"
#include "runtime.h"

#define CT_v213	((void*)startLabel+32)
#define FN_LAMBDA210	((void*)startLabel+60)
#define CT_v215	((void*)startLabel+84)
#define F0_LAMBDA210	((void*)startLabel+92)
#define FN_Prelude_46Prelude_46Read_46Prelude_46Int_46readsPrec_39164	((void*)startLabel+116)
#define CT_v216	((void*)startLabel+156)
#define F0_Prelude_46Prelude_46Read_46Prelude_46Int_46readsPrec_39164	((void*)startLabel+164)
#define FN_LAMBDA209	((void*)startLabel+196)
#define CT_v221	((void*)startLabel+244)
#define F0_LAMBDA209	((void*)startLabel+252)
#define CT_v223	((void*)startLabel+296)
#define CT_v225	((void*)startLabel+356)
#define ST_v224	((void*)startLabel+376)
#define ST_v222	((void*)startLabel+401)
#define ST_v212	((void*)startLabel+435)
#define ST_v219	((void*)startLabel+470)
#define ST_v214	((void*)startLabel+515)
extern Node TM_Prelude[];
extern Node TMSUB_Prelude[];
extern Node CF_Prelude_46Num_46Prelude_46Int[];
extern Node FN_Prelude_46Read_46Prelude_46Integer_46readsPrec[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46Prelude_46Int[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v213)
,};
Node FN_Prelude_46Read_46Prelude_46Int_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 60003
, useLabel(ST_v212)
,	/* CT_v213: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Int_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Int_46readsPrec),1)
, CAPTAG(useLabel(FN_LAMBDA210),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v215)
,	/* FN_LAMBDA210: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 60003
, useLabel(ST_v214)
,	/* CT_v215: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA210: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA210),2)
, VAPTAG(useLabel(FN_Prelude_46Prelude_46Read_46Prelude_46Int_46readsPrec_39164))
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v216)
,	/* FN_Prelude_46Prelude_46Read_46Prelude_46Int_46readsPrec_39164: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 60003
, useLabel(ST_v214)
,	/* CT_v216: (byte 0) */
  HW(4,3)
, 0
,	/* F0_Prelude_46Prelude_46Read_46Prelude_46Int_46readsPrec_39164: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46Read_46Prelude_46Int_46readsPrec_39164),3)
, CAPTAG(useLabel(FN_LAMBDA209),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Integer_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46map))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v221)
,	/* FN_LAMBDA209: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,4,HEAP_I2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 60024
, useLabel(ST_v219)
,	/* CT_v221: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA209: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA209),2)
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,0,0)
, useLabel(CT_v223)
,};
Node FN_Prelude_46Read_46Prelude_46Int_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50010
, useLabel(ST_v222)
,	/* CT_v223: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Int_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Int_46readList))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46Prelude_46Int)
, bytes2word(0,0,0,0)
, useLabel(CT_v225)
,};
Node FN_Prelude_46Read_46Prelude_46Int[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 50010
, useLabel(ST_v224)
,	/* CT_v225: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Int[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Int))
, useLabel(F0_Prelude_46Read_46Prelude_46Int_46readsPrec)
, useLabel(CF_Prelude_46Read_46Prelude_46Int_46readList)
,	/* ST_v224: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
,	/* ST_v222: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,46,114,101)
, bytes2word(97,100,76,105)
,	/* ST_v212: (byte 3) */
  bytes2word(115,116,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(114,101,97,100)
, bytes2word(115,80,114,101)
,	/* ST_v219: (byte 2) */
  bytes2word(99,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,54,58,50)
, bytes2word(52,45,54,58)
,	/* ST_v214: (byte 3) */
  bytes2word(53,48,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(114,101,97,100)
, bytes2word(115,80,114,101)
, bytes2word(99,58,54,58)
, bytes2word(51,45,54,58)
, bytes2word(54,55,0,0)
,};
