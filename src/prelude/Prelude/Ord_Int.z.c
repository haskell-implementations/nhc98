#include "newmacros.h"
#include "runtime.h"

#define CT_v260	((void*)startLabel+36)
#define CT_v262	((void*)startLabel+84)
#define CT_v264	((void*)startLabel+132)
#define CT_v266	((void*)startLabel+180)
#define CT_v268	((void*)startLabel+228)
#define CT_v270	((void*)startLabel+284)
#define CT_v272	((void*)startLabel+340)
#define CT_v274	((void*)startLabel+412)
#define ST_v273	((void*)startLabel+456)
#define ST_v265	((void*)startLabel+480)
#define ST_v263	((void*)startLabel+506)
#define ST_v259	((void*)startLabel+533)
#define ST_v261	((void*)startLabel+559)
#define ST_v271	((void*)startLabel+586)
#define ST_v269	((void*)startLabel+618)
#define ST_v267	((void*)startLabel+646)
extern Node TM_Prelude[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46Prelude_46Int[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46compare[];
extern Node CF_Prelude_46Eq_46Prelude_46Int[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v260)
,};
Node FN_Prelude_46Ord_46Prelude_46Int_46_62[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,GT_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 80003
, useLabel(ST_v259)
,	/* CT_v260: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Int_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v262)
,};
Node FN_Prelude_46Ord_46Prelude_46Int_46_62_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,GE_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 70003
, useLabel(ST_v261)
,	/* CT_v262: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Int_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v264)
,};
Node FN_Prelude_46Ord_46Prelude_46Int_46_60_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,LE_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 60003
, useLabel(ST_v263)
,	/* CT_v264: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Int_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_60_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v266)
,};
Node FN_Prelude_46Ord_46Prelude_46Int_46_60[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,LT_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 50003
, useLabel(ST_v265)
,	/* CT_v266: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Int_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_60),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v268)
,};
Node FN_Prelude_46Ord_46Prelude_46Int_46min[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 40010
, useLabel(ST_v267)
,	/* CT_v268: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Int_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v270)
,};
Node FN_Prelude_46Ord_46Prelude_46Int_46max[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 40010
, useLabel(ST_v269)
,	/* CT_v270: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Int_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v272)
,};
Node FN_Prelude_46Ord_46Prelude_46Int_46compare[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 40010
, useLabel(ST_v271)
,	/* CT_v272: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Int_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46compare))
, useLabel(CF_Prelude_46Ord_46Prelude_46Int)
, bytes2word(0,0,0,0)
, useLabel(CT_v274)
,};
Node FN_Prelude_46Ord_46Prelude_46Int[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 40010
, useLabel(ST_v273)
,	/* CT_v274: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46Prelude_46Int[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int))
, useLabel(CF_Prelude_46Eq_46Prelude_46Int)
, useLabel(F0_Prelude_46Ord_46Prelude_46Int_46_60)
, useLabel(F0_Prelude_46Ord_46Prelude_46Int_46_60_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Int_46_62_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Int_46_62)
, useLabel(F0_Prelude_46Ord_46Prelude_46Int_46compare)
, useLabel(F0_Prelude_46Ord_46Prelude_46Int_46min)
, useLabel(F0_Prelude_46Ord_46Prelude_46Int_46max)
,	/* ST_v273: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* ST_v265: (byte 4) */
  bytes2word(73,110,116,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
,	/* ST_v263: (byte 2) */
  bytes2word(60,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,46,60,61)
,	/* ST_v259: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
,	/* ST_v261: (byte 3) */
  bytes2word(46,62,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,46,62)
,	/* ST_v271: (byte 2) */
  bytes2word(61,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,46,99,111)
, bytes2word(109,112,97,114)
,	/* ST_v269: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,46,109,97)
,	/* ST_v267: (byte 2) */
  bytes2word(120,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,46,109,105)
, bytes2word(110,0,0,0)
,};
