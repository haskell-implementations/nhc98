#include "newmacros.h"
#include "runtime.h"

#define v337	((void*)startLabel+22)
#define v339	((void*)startLabel+32)
#define v340	((void*)startLabel+37)
#define v341	((void*)startLabel+43)
#define v343	((void*)startLabel+54)
#define v344	((void*)startLabel+58)
#define v346	((void*)startLabel+84)
#define v347	((void*)startLabel+89)
#define v348	((void*)startLabel+98)
#define CT_v353	((void*)startLabel+124)
#define CT_v354	((void*)startLabel+172)
#define CT_v355	((void*)startLabel+220)
#define CT_v356	((void*)startLabel+268)
#define CT_v357	((void*)startLabel+316)
#define CT_v358	((void*)startLabel+364)
#define CT_v359	((void*)startLabel+412)
#define CT_v360	((void*)startLabel+516)
extern Node FN_Prelude_46compare[];
extern Node FN_Prelude_46Ord_46Prelude_46_91_93[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_Prelude_46Eq_46Prelude_46_91_93[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v353)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v337: (byte 2) */
  bytes2word(TOP(25),BOT(25),POP_I1,PUSH_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v339: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(9),BOT(9))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v340: (byte 1) */
  bytes2word(RETURN,UNPACK,2,PUSH_HEAP)
,	/* v341: (byte 3) */
  bytes2word(HEAP_CVAL_N1,2,RETURN,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v343: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v344: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,2)
, bytes2word(PUSH_P1,0,PUSH_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_STACK_P1,5,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v346: (byte 4) */
  bytes2word(TOP(11),BOT(11),TOP(20),BOT(20))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v347: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_P1,4)
,	/* v348: (byte 2) */
  bytes2word(HEAP_I2,RETURN_EVAL,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v353: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46compare),3)
, VAPTAG(useLabel(FN_Prelude_46compare))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46compare))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v354)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v354: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46min),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v355)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v355: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46max),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v356)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v356: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_62),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v357)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v357: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_62_61),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v358)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v358: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_60),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v359)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v359: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_60_61),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v360)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93[] = {
  bytes2word(NEEDHEAP_P1,36,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,8)
, bytes2word(HEAP_P1,7,HEAP_P1,6)
, bytes2word(HEAP_P1,5,HEAP_P1,4)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v360: (byte 0) */
  HW(9,1)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93),1)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46_91_93))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46max),2)
,};
