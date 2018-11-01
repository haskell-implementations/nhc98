#include "newmacros.h"
#include "runtime.h"

#define CT_v186	((void*)startLabel+44)
#define CT_v188	((void*)startLabel+100)
#define CT_v190	((void*)startLabel+152)
#define ST_v189	((void*)startLabel+172)
#define ST_v185	((void*)startLabel+186)
#define ST_v187	((void*)startLabel+203)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v186)
,};
Node FN_Prelude_46Eq_46_40_41_46_47_61[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 50003
, useLabel(ST_v185)
,	/* CT_v186: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46_40_41_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46_40_41_46_47_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v188)
,};
Node FN_Prelude_46Eq_46_40_41_46_61_61[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
, 40003
, useLabel(ST_v187)
,	/* CT_v188: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46_40_41_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46_40_41_46_61_61),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v190)
,};
Node FN_Prelude_46Eq_46_40_41[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30010
, useLabel(ST_v189)
,	/* CT_v190: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46_40_41[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46_40_41))
, useLabel(F0_Prelude_46Eq_46_40_41_46_47_61)
, useLabel(F0_Prelude_46Eq_46_40_41_46_61_61)
,	/* ST_v189: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,40)
,	/* ST_v185: (byte 2) */
  bytes2word(41,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,113)
, bytes2word(46,40,41,46)
,	/* ST_v187: (byte 3) */
  bytes2word(47,61,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(113,46,40,41)
, bytes2word(46,61,61,0)
,};
