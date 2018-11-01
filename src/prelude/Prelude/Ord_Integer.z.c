#include "newmacros.h"
#include "runtime.h"

#define CT_v252	((void*)startLabel+36)
#define CT_v254	((void*)startLabel+88)
#define CT_v256	((void*)startLabel+140)
#define CT_v258	((void*)startLabel+192)
#define CT_v260	((void*)startLabel+244)
#define CT_v262	((void*)startLabel+300)
#define CT_v264	((void*)startLabel+356)
#define CT_v266	((void*)startLabel+428)
#define ST_v265	((void*)startLabel+472)
#define ST_v257	((void*)startLabel+500)
#define ST_v255	((void*)startLabel+530)
#define ST_v251	((void*)startLabel+561)
#define ST_v253	((void*)startLabel+591)
#define ST_v263	((void*)startLabel+622)
#define ST_v261	((void*)startLabel+658)
#define ST_v259	((void*)startLabel+690)
extern Node TM_Prelude[];
extern Node FN_Prelude_46primIntegerGt[];
extern Node FN_Prelude_46primIntegerGe[];
extern Node FN_Prelude_46primIntegerLe[];
extern Node FN_Prelude_46primIntegerLt[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46Prelude_46Integer[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46compare[];
extern Node CF_Prelude_46Eq_46Prelude_46Integer[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v252)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46_62[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 120003
, useLabel(ST_v251)
,	/* CT_v252: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerGt))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v254)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46_62_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 110003
, useLabel(ST_v253)
,	/* CT_v254: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerGe))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v256)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46_60_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 100003
, useLabel(ST_v255)
,	/* CT_v256: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_60_61),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerLe))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v258)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46_60[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 90003
, useLabel(ST_v257)
,	/* CT_v258: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerLt))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v260)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46min[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 80010
, useLabel(ST_v259)
,	/* CT_v260: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46Prelude_46Integer)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v262)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46max[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 80010
, useLabel(ST_v261)
,	/* CT_v262: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46Prelude_46Integer)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v264)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer_46compare[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 80010
, useLabel(ST_v263)
,	/* CT_v264: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Integer_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46compare))
, useLabel(CF_Prelude_46Ord_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v266)
,};
Node FN_Prelude_46Ord_46Prelude_46Integer[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 80010
, useLabel(ST_v265)
,	/* CT_v266: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer))
, useLabel(CF_Prelude_46Eq_46Prelude_46Integer)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46_60)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46_60_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46_62_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46_62)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46compare)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46min)
, useLabel(F0_Prelude_46Ord_46Prelude_46Integer_46max)
,	/* ST_v265: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
,	/* ST_v257: (byte 4) */
  bytes2word(103,101,114,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
,	/* ST_v255: (byte 2) */
  bytes2word(60,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,101)
, bytes2word(114,46,60,61)
,	/* ST_v251: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
,	/* ST_v253: (byte 3) */
  bytes2word(46,62,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,101,103)
, bytes2word(101,114,46,62)
,	/* ST_v263: (byte 2) */
  bytes2word(61,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,101)
, bytes2word(114,46,99,111)
, bytes2word(109,112,97,114)
,	/* ST_v261: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,101)
, bytes2word(114,46,109,97)
,	/* ST_v259: (byte 2) */
  bytes2word(120,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,101)
, bytes2word(114,46,109,105)
, bytes2word(110,0,0,0)
,};
