#include "newmacros.h"
#include "runtime.h"

#define CT_v248	((void*)startLabel+44)
#define CT_v250	((void*)startLabel+100)
#define CT_v252	((void*)startLabel+156)
#define CT_v254	((void*)startLabel+212)
#define CT_v256	((void*)startLabel+260)
#define CT_v258	((void*)startLabel+316)
#define CT_v260	((void*)startLabel+372)
#define CT_v262	((void*)startLabel+444)
#define ST_v261	((void*)startLabel+488)
#define ST_v253	((void*)startLabel+503)
#define ST_v251	((void*)startLabel+520)
#define ST_v247	((void*)startLabel+538)
#define ST_v249	((void*)startLabel+555)
#define ST_v259	((void*)startLabel+573)
#define ST_v257	((void*)startLabel+596)
#define ST_v255	((void*)startLabel+615)
extern Node TM_Prelude[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46_40_41[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46compare[];
extern Node CF_Prelude_46Eq_46_40_41[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v248)
,};
Node FN_Prelude_46Ord_46_40_41_46_62[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 70003
, useLabel(ST_v247)
,	/* CT_v248: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46_62),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v250)
,};
Node FN_Prelude_46Ord_46_40_41_46_62_61[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
, 60003
, useLabel(ST_v249)
,	/* CT_v250: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46_62_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v252)
,};
Node FN_Prelude_46Ord_46_40_41_46_60_61[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
, 50003
, useLabel(ST_v251)
,	/* CT_v252: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46_60_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v254)
,};
Node FN_Prelude_46Ord_46_40_41_46_60[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40003
, useLabel(ST_v253)
,	/* CT_v254: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46_60),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v256)
,};
Node FN_Prelude_46Ord_46_40_41_46min[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v255)
,	/* CT_v256: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46_40_41)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v258)
,};
Node FN_Prelude_46Ord_46_40_41_46max[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v257)
,	/* CT_v258: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46_40_41)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v260)
,};
Node FN_Prelude_46Ord_46_40_41_46compare[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v259)
,	/* CT_v260: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46_40_41_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46_40_41_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46compare))
, useLabel(CF_Prelude_46Ord_46_40_41)
, bytes2word(0,0,0,0)
, useLabel(CT_v262)
,};
Node FN_Prelude_46Ord_46_40_41[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 30010
, useLabel(ST_v261)
,	/* CT_v262: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46_40_41[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46_40_41))
, useLabel(CF_Prelude_46Eq_46_40_41)
, useLabel(F0_Prelude_46Ord_46_40_41_46_60)
, useLabel(F0_Prelude_46Ord_46_40_41_46_60_61)
, useLabel(F0_Prelude_46Ord_46_40_41_46_62_61)
, useLabel(F0_Prelude_46Ord_46_40_41_46_62)
, useLabel(F0_Prelude_46Ord_46_40_41_46compare)
, useLabel(F0_Prelude_46Ord_46_40_41_46min)
, useLabel(F0_Prelude_46Ord_46_40_41_46max)
,	/* ST_v261: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
,	/* ST_v253: (byte 3) */
  bytes2word(40,41,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,40)
,	/* ST_v251: (byte 4) */
  bytes2word(41,46,60,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(40,41,46,60)
,	/* ST_v247: (byte 2) */
  bytes2word(61,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,40,41)
,	/* ST_v249: (byte 3) */
  bytes2word(46,62,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,40)
, bytes2word(41,46,62,61)
,	/* ST_v259: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,40,41,46)
, bytes2word(99,111,109,112)
,	/* ST_v257: (byte 4) */
  bytes2word(97,114,101,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(40,41,46,109)
,	/* ST_v255: (byte 3) */
  bytes2word(97,120,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,40)
, bytes2word(41,46,109,105)
, bytes2word(110,0,0,0)
,};
