#include "newmacros.h"
#include "runtime.h"

#define CT_v267	((void*)startLabel+44)
#define CT_v269	((void*)startLabel+100)
#define CT_v271	((void*)startLabel+148)
#define CT_v273	((void*)startLabel+204)
#define CT_v275	((void*)startLabel+260)
#define CT_v277	((void*)startLabel+316)
#define CT_v279	((void*)startLabel+372)
#define CT_v281	((void*)startLabel+444)
#define ST_v280	((void*)startLabel+488)
#define ST_v278	((void*)startLabel+513)
#define ST_v268	((void*)startLabel+540)
#define ST_v274	((void*)startLabel+568)
#define ST_v276	((void*)startLabel+595)
#define ST_v266	((void*)startLabel+623)
#define ST_v272	((void*)startLabel+656)
#define ST_v270	((void*)startLabel+685)
extern Node TM_Prelude[];
extern Node FN_Prelude_46Enum_46Prelude_46Char_46fromEnum[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46Prelude_46Char[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v267)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46compare[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50003
, useLabel(ST_v266)
,	/* CT_v267: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v269)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46_60_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,LE_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 40003
, useLabel(ST_v268)
,	/* CT_v269: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_60_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v271)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46min[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v270)
,	/* CT_v271: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v273)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46max[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v272)
,	/* CT_v273: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v275)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46_62[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v274)
,	/* CT_v275: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v277)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46_62_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v276)
,	/* CT_v277: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v279)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46_60[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v278)
,	/* CT_v279: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46Prelude_46Char)
, bytes2word(0,0,0,0)
, useLabel(CT_v281)
,};
Node FN_Prelude_46Ord_46Prelude_46Char[] = {
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
, useLabel(ST_v280)
,	/* CT_v281: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46Prelude_46Char[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46_60)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46_60_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46_62_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46_62)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46compare)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46min)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46max)
,	/* ST_v280: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
,	/* ST_v278: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,67,104,97)
,	/* ST_v268: (byte 4) */
  bytes2word(114,46,60,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
,	/* ST_v274: (byte 4) */
  bytes2word(46,60,61,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
,	/* ST_v276: (byte 3) */
  bytes2word(46,62,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,67)
, bytes2word(104,97,114,46)
,	/* ST_v266: (byte 3) */
  bytes2word(62,61,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,67)
, bytes2word(104,97,114,46)
, bytes2word(99,111,109,112)
,	/* ST_v272: (byte 4) */
  bytes2word(97,114,101,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
, bytes2word(46,109,97,120)
,	/* ST_v270: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,67,104,97)
, bytes2word(114,46,109,105)
, bytes2word(110,0,0,0)
,};
