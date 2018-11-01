#include "newmacros.h"
#include "runtime.h"

#define v323	((void*)startLabel+22)
#define v325	((void*)startLabel+32)
#define v326	((void*)startLabel+37)
#define v327	((void*)startLabel+43)
#define v329	((void*)startLabel+54)
#define v330	((void*)startLabel+58)
#define CT_v334	((void*)startLabel+100)
#define CT_v335	((void*)startLabel+144)
#define CT_v336	((void*)startLabel+192)
#define CT_v337	((void*)startLabel+240)
#define CT_v338	((void*)startLabel+288)
#define CT_v339	((void*)startLabel+336)
#define CT_v340	((void*)startLabel+384)
#define CT_v341	((void*)startLabel+488)
extern Node FN_Prelude_46compare[];
extern Node FN_Prelude_46Ord_46Prelude_46Maybe[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_Prelude_46Eq_46Prelude_46Maybe[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v334)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v323: (byte 2) */
  bytes2word(TOP(25),BOT(25),POP_I1,PUSH_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v325: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(9),BOT(9))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v326: (byte 1) */
  bytes2word(RETURN,UNPACK,1,PUSH_HEAP)
,	/* v327: (byte 3) */
  bytes2word(HEAP_CVAL_N1,2,RETURN,UNPACK)
, bytes2word(1,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v329: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v330: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,1)
, bytes2word(PUSH_P1,0,PUSH_P1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v334: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46compare),3)
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v335)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v335: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46min),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v336)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v336: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46max),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v337)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v337: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_62),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v338)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v338: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_62_61),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v339)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v339: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_60),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v340)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v340: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_60_61),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v341)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe[] = {
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
,	/* CT_v341: (byte 0) */
  HW(9,1)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe),1)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Maybe))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46max),2)
,};
