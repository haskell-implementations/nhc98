#include "newmacros.h"
#include "runtime.h"

#define CT_v339	((void*)startLabel+100)
#define FN_LAMBDA326	((void*)startLabel+160)
#define CT_v341	((void*)startLabel+200)
#define F0_LAMBDA326	((void*)startLabel+208)
#define FN_LAMBDA325	((void*)startLabel+220)
#define CT_v343	((void*)startLabel+244)
#define F0_LAMBDA325	((void*)startLabel+252)
#define FN_LAMBDA324	((void*)startLabel+264)
#define CT_v345	((void*)startLabel+288)
#define F0_LAMBDA324	((void*)startLabel+296)
#define CT_v347	((void*)startLabel+340)
#define CT_v349	((void*)startLabel+400)
#define CT_v351	((void*)startLabel+460)
#define CT_v353	((void*)startLabel+520)
#define CT_v355	((void*)startLabel+624)
#define ST_v354	((void*)startLabel+664)
#define ST_v348	((void*)startLabel+693)
#define ST_v346	((void*)startLabel+730)
#define ST_v337	((void*)startLabel+765)
#define ST_v344	((void*)startLabel+809)
#define ST_v342	((void*)startLabel+859)
#define ST_v340	((void*)startLabel+909)
#define ST_v350	((void*)startLabel+963)
#define ST_v352	((void*)startLabel+998)
extern Node TM_Ratio[];
extern Node FN_Prelude_46quotRem[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromIntegral[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node TMSUB_Ratio[];
extern Node FN_Prelude_46RealFrac_46Ratio_46Ratio[];
extern Node FN_Prelude_46_95_46floor[];
extern Node FN_Prelude_46_95_46ceiling[];
extern Node FN_Prelude_46_95_46round[];
extern Node FN_Prelude_46_95_46truncate[];
extern Node FN_Prelude_46Real_46Ratio_46Ratio[];
extern Node FN_Prelude_46Fractional_46Ratio_46Ratio[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v339)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_I2,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,7)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,4,HEAP_I1,HEAP_CVAL_P1)
, bytes2word(11,HEAP_P1,0,HEAP_P1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 90005
, useLabel(ST_v337)
,	/* CT_v339: (byte 0) */
  HW(9,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction),3)
, VAPTAG(useLabel(FN_Prelude_46quotRem))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_LAMBDA324))
, VAPTAG(useLabel(FN_LAMBDA325))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA326))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v341)
,	/* FN_LAMBDA326: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,POP_I1)
, bytes2word(PUSH_ARG_I2,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG,1)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 90050
, useLabel(ST_v340)
,	/* CT_v341: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA326: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA326),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v343)
,	/* FN_LAMBDA325: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 100040
, useLabel(ST_v342)
,	/* CT_v343: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA325: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA325),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v345)
,	/* FN_LAMBDA324: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 100038
, useLabel(ST_v344)
,	/* CT_v345: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA324: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA324),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v347)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46floor[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 80028
, useLabel(ST_v346)
,	/* CT_v347: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio_46floor[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46floor),3)
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46floor))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v349)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 80028
, useLabel(ST_v348)
,	/* CT_v349: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling),3)
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46ceiling))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v351)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46round[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 80028
, useLabel(ST_v350)
,	/* CT_v351: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio_46round[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46round),3)
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46round))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v353)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46truncate[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 80028
, useLabel(ST_v352)
,	/* CT_v353: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio_46truncate[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46truncate),3)
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46truncate))
, bytes2word(1,0,0,1)
, useLabel(CT_v355)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_P1)
, bytes2word(7,HEAP_P1,6,HEAP_P1)
, bytes2word(5,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,7,0)
, 80028
, useLabel(ST_v354)
,	/* CT_v355: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio),1)
, VAPTAG(useLabel(FN_Prelude_46Real_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio))
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46round),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46truncate),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46floor),2)
,	/* ST_v354: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
,	/* ST_v348: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(108,70,114,97)
, bytes2word(99,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,99,101)
, bytes2word(105,108,105,110)
,	/* ST_v346: (byte 2) */
  bytes2word(103,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,108,70,114)
, bytes2word(97,99,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,102)
, bytes2word(108,111,111,114)
,	/* ST_v337: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(108,70,114,97)
, bytes2word(99,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,112,114)
, bytes2word(111,112,101,114)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
,	/* ST_v344: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(108,70,114,97)
, bytes2word(99,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,112,114)
, bytes2word(111,112,101,114)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(58,49,48,58)
,	/* ST_v342: (byte 3) */
  bytes2word(51,56,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,108,70)
, bytes2word(114,97,99,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(112,114,111,112)
, bytes2word(101,114,70,114)
, bytes2word(97,99,116,105)
, bytes2word(111,110,58,49)
, bytes2word(48,58,52,48)
,	/* ST_v340: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(108,70,114,97)
, bytes2word(99,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,112,114)
, bytes2word(111,112,101,114)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(58,57,58,53)
, bytes2word(48,45,57,58)
,	/* ST_v350: (byte 3) */
  bytes2word(53,49,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,108,70)
, bytes2word(114,97,99,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(114,111,117,110)
,	/* ST_v352: (byte 2) */
  bytes2word(100,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,108,70,114)
, bytes2word(97,99,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,116)
, bytes2word(114,117,110,99)
, bytes2word(97,116,101,0)
,};
