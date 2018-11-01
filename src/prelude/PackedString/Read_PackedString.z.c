#include "newmacros.h"
#include "runtime.h"

#define CT_v221	((void*)startLabel+32)
#define FN_LAMBDA218	((void*)startLabel+60)
#define CT_v223	((void*)startLabel+84)
#define F0_LAMBDA218	((void*)startLabel+92)
#define FN_NHC_46PackedString_46Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec_39174	((void*)startLabel+112)
#define CT_v224	((void*)startLabel+160)
#define F0_NHC_46PackedString_46Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec_39174	((void*)startLabel+168)
#define FN_LAMBDA217	((void*)startLabel+204)
#define CT_v229	((void*)startLabel+252)
#define F0_LAMBDA217	((void*)startLabel+260)
#define CT_v231	((void*)startLabel+300)
#define CT_v233	((void*)startLabel+360)
#define ST_v232	((void*)startLabel+380)
#define ST_v230	((void*)startLabel+423)
#define ST_v220	((void*)startLabel+475)
#define ST_v227	((void*)startLabel+528)
#define ST_v222	((void*)startLabel+591)
extern Node TM_NHC_46PackedString[];
extern Node TMSUB_NHC_46PackedString[];
extern Node FN_Prelude_46Read_46Prelude_46_91_93_46readsPrec[];
extern Node CF_Prelude_46Read_46Prelude_46Char[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_NHC_46PackedString_46packString[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46NHC_46PackedString_46PackedString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v221)
,};
Node FN_Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70005
, useLabel(ST_v220)
,	/* CT_v221: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec),1)
, CAPTAG(useLabel(FN_LAMBDA218),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v223)
,	/* FN_LAMBDA218: (byte 0) */
  useLabel(TMSUB_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70005
, useLabel(ST_v222)
,	/* CT_v223: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA218: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA218),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec_39174))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v224)
,	/* FN_NHC_46PackedString_46Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec_39174: (byte 0) */
  useLabel(TMSUB_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 70005
, useLabel(ST_v222)
,	/* CT_v224: (byte 0) */
  HW(5,2)
, 0
,	/* F0_NHC_46PackedString_46Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec_39174: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec_39174),2)
, CAPTAG(useLabel(FN_LAMBDA217),2)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93_46readsPrec))
, useLabel(CF_Prelude_46Read_46Prelude_46Char)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v229)
,	/* FN_LAMBDA217: (byte 0) */
  useLabel(TMSUB_NHC_46PackedString)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_IN3,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 70021
, useLabel(ST_v227)
,	/* CT_v229: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA217: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA217),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46packString))
, bytes2word(0,0,0,0)
, useLabel(CT_v231)
,};
Node FN_Prelude_46Read_46NHC_46PackedString_46PackedString_46readList[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60010
, useLabel(ST_v230)
,	/* CT_v231: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46NHC_46PackedString_46PackedString_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46NHC_46PackedString_46PackedString_46readList))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,0,0)
, useLabel(CT_v233)
,};
Node FN_Prelude_46Read_46NHC_46PackedString_46PackedString[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 60010
, useLabel(ST_v232)
,	/* CT_v233: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46NHC_46PackedString_46PackedString[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46NHC_46PackedString_46PackedString))
, useLabel(F0_Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec)
, useLabel(CF_Prelude_46Read_46NHC_46PackedString_46PackedString_46readList)
,	/* ST_v232: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,78,72,67)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,80,97)
, bytes2word(99,107,101,100)
, bytes2word(83,116,114,105)
,	/* ST_v230: (byte 3) */
  bytes2word(110,103,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,114,101)
, bytes2word(97,100,76,105)
,	/* ST_v220: (byte 3) */
  bytes2word(115,116,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,114,101)
, bytes2word(97,100,115,80)
,	/* ST_v227: (byte 4) */
  bytes2word(114,101,99,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,78,72,67)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,80,97)
, bytes2word(99,107,101,100)
, bytes2word(83,116,114,105)
, bytes2word(110,103,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,55,58,50)
, bytes2word(49,45,55,58)
,	/* ST_v222: (byte 3) */
  bytes2word(54,53,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,114,101)
, bytes2word(97,100,115,80)
, bytes2word(114,101,99,58)
, bytes2word(55,58,53,45)
, bytes2word(55,58,54,53)
, bytes2word(0,0,0,0)
,};
