#include "newmacros.h"
#include "runtime.h"

#define v306	((void*)startLabel+31)
#define v308	((void*)startLabel+39)
#define CT_v310	((void*)startLabel+60)
#define FN_LAMBDA302	((void*)startLabel+92)
#define CT_v312	((void*)startLabel+112)
#define CF_LAMBDA302	((void*)startLabel+120)
#define v313	((void*)startLabel+155)
#define v315	((void*)startLabel+163)
#define CT_v317	((void*)startLabel+184)
#define FN_LAMBDA303	((void*)startLabel+216)
#define CT_v319	((void*)startLabel+236)
#define CF_LAMBDA303	((void*)startLabel+244)
#define CT_v320	((void*)startLabel+292)
#define CT_v321	((void*)startLabel+360)
#define CT_v322	((void*)startLabel+428)
#define CT_v323	((void*)startLabel+496)
#define v324	((void*)startLabel+555)
#define v326	((void*)startLabel+577)
#define v328	((void*)startLabel+586)
#define CT_v330	((void*)startLabel+616)
#define FN_LAMBDA304	((void*)startLabel+656)
#define CT_v332	((void*)startLabel+676)
#define CF_LAMBDA304	((void*)startLabel+684)
#define CT_v333	((void*)startLabel+708)
#define CT_v334	((void*)startLabel+740)
#define CT_v335	((void*)startLabel+772)
#define CT_v336	((void*)startLabel+804)
#define CT_v337	((void*)startLabel+836)
#define CT_v338	((void*)startLabel+868)
#define CT_v339	((void*)startLabel+900)
#define CT_v340	((void*)startLabel+932)
#define ST_v331	((void*)startLabel+944)
#define ST_v318	((void*)startLabel+1012)
#define ST_v311	((void*)startLabel+1080)
extern Node FN_Prelude_46_60_61[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Prelude_46_62_61[];
extern Node FN_Prelude_46compare[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Ordering_46_47_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_Prelude_46_61_61[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v310)
,};
Node FN_Prelude_46_95_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,4)
,	/* v306: (byte 3) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,JUMPFALSE,4)
,	/* v308: (byte 3) */
  bytes2word(0,PUSH_ARG_I3,RETURN_EVAL,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
,	/* CT_v310: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46_95_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46min),3)
, VAPTAG(useLabel(FN_Prelude_46_60_61))
, VAPTAG(useLabel(FN_LAMBDA302))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v312)
,	/* FN_LAMBDA302: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v311)
,	/* CT_v312: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA302: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA302))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v317)
,};
Node FN_Prelude_46_95_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,4)
,	/* v313: (byte 3) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,JUMPFALSE,4)
,	/* v315: (byte 3) */
  bytes2word(0,PUSH_ARG_I3,RETURN_EVAL,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
,	/* CT_v317: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46_95_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46max),3)
, VAPTAG(useLabel(FN_Prelude_46_62_61))
, VAPTAG(useLabel(FN_LAMBDA303))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v319)
,	/* FN_LAMBDA303: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v318)
,	/* CT_v319: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA303: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA303))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v320)
,};
Node FN_Prelude_46_95_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,0,0)
,	/* CT_v320: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46_95_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46_62),3)
, VAPTAG(useLabel(FN_Prelude_46compare))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v321)
,};
Node FN_Prelude_46_95_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v321: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46_95_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46_62_61),3)
, VAPTAG(useLabel(FN_Prelude_46compare))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_47_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v322)
,};
Node FN_Prelude_46_95_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v322: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46_95_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46_60),3)
, VAPTAG(useLabel(FN_Prelude_46compare))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v323)
,};
Node FN_Prelude_46_95_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,0,0)
,	/* CT_v323: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46_95_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46_60_61),3)
, VAPTAG(useLabel(FN_Prelude_46compare))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_47_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v330)
,};
Node FN_Prelude_46_95_46compare[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,6,0,PUSH_HEAP)
,	/* v324: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,PUSH_ARG_I3)
, bytes2word(PUSH_ARG_I2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,6)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v326: (byte 1) */
  bytes2word(RETURN,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(JUMPFALSE,5,0,PUSH_HEAP)
,	/* v328: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,HEAP_CVAL_P1,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v330: (byte 0) */
  HW(5,3)
, 0
,};
Node F0_Prelude_46_95_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46compare),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46_60_61))
, VAPTAG(useLabel(FN_LAMBDA304))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v332)
,	/* FN_LAMBDA304: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v331)
,	/* CT_v332: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA304: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA304))
, bytes2word(1,0,0,1)
, useLabel(CT_v333)
,};
Node FN_Prelude_46Ord_46Prelude_46Eq[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v333: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Eq[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v334)
,};
Node FN_Prelude_46_60[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v334: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46_60),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v335)
,};
Node FN_Prelude_46_60_61[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v335: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46_60_61),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v336)
,};
Node FN_Prelude_46_62_61[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v336: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46_62_61),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v337)
,};
Node FN_Prelude_46_62[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,5)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v337: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46_62),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v338)
,};
Node FN_Prelude_46compare[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,6)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v338: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46compare),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v339)
,};
Node FN_Prelude_46min[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,7)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v339: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46min),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v340)
,};
Node FN_Prelude_46max[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,8)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v340: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46max),1)
,	/* ST_v331: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,58)
, bytes2word(46,47,67,79)
, bytes2word(114,100,46,104)
, bytes2word(115,58,32,80)
, bytes2word(97,116,116,101)
, bytes2word(114,110,32,109)
, bytes2word(97,116,99,104)
, bytes2word(32,102,97,105)
, bytes2word(108,117,114,101)
, bytes2word(32,105,110,32)
, bytes2word(102,117,110,99)
, bytes2word(116,105,111,110)
, bytes2word(32,97,116,32)
, bytes2word(49,48,58,53)
, bytes2word(45,49,51,58)
,	/* ST_v318: (byte 4) */
  bytes2word(50,56,46,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,58)
, bytes2word(46,47,67,79)
, bytes2word(114,100,46,104)
, bytes2word(115,58,32,80)
, bytes2word(97,116,116,101)
, bytes2word(114,110,32,109)
, bytes2word(97,116,99,104)
, bytes2word(32,102,97,105)
, bytes2word(108,117,114,101)
, bytes2word(32,105,110,32)
, bytes2word(102,117,110,99)
, bytes2word(116,105,111,110)
, bytes2word(32,97,116,32)
, bytes2word(50,48,58,53)
, bytes2word(45,50,49,58)
,	/* ST_v311: (byte 4) */
  bytes2word(50,56,46,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,58)
, bytes2word(46,47,67,79)
, bytes2word(114,100,46,104)
, bytes2word(115,58,32,80)
, bytes2word(97,116,116,101)
, bytes2word(114,110,32,109)
, bytes2word(97,116,99,104)
, bytes2word(32,102,97,105)
, bytes2word(108,117,114,101)
, bytes2word(32,105,110,32)
, bytes2word(102,117,110,99)
, bytes2word(116,105,111,110)
, bytes2word(32,97,116,32)
, bytes2word(50,50,58,53)
, bytes2word(45,50,51,58)
, bytes2word(50,56,46,0)
,};
