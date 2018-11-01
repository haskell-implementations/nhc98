#include "newmacros.h"
#include "runtime.h"

#define CT_v289	((void*)startLabel+36)
#define FN_LAMBDA285	((void*)startLabel+76)
#define CT_v290	((void*)startLabel+124)
#define F0_LAMBDA285	((void*)startLabel+132)
#define FN_LAMBDA284	((void*)startLabel+176)
#define CT_v294	((void*)startLabel+208)
#define F0_LAMBDA284	((void*)startLabel+216)
#define FN_LAMBDA283	((void*)startLabel+248)
#define v312	((void*)startLabel+264)
#define v302	((void*)startLabel+268)
#define v313	((void*)startLabel+282)
#define v306	((void*)startLabel+286)
#define v314	((void*)startLabel+296)
#define v310	((void*)startLabel+300)
#define v303	((void*)startLabel+331)
#define v299	((void*)startLabel+336)
#define v295	((void*)startLabel+341)
#define CT_v315	((void*)startLabel+352)
#define F0_LAMBDA283	((void*)startLabel+360)
#define FN_LAMBDA282	((void*)startLabel+404)
#define CT_v319	((void*)startLabel+444)
#define F0_LAMBDA282	((void*)startLabel+452)
#define CT_v320	((void*)startLabel+488)
#define CT_v321	((void*)startLabel+552)
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62[];
extern Node CF_Ratio_46prec[];
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46readsPrec[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46lex[];
extern Node FN_Ratio_46_37[];
extern Node FN_Prelude_46Read_46Ratio_46Ratio[];
extern Node FN_Prelude_46_95_46readList[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v289)
,};
Node FN_Prelude_46Read_46Ratio_46Ratio_46readsPrec[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_ARG_ARG,2)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v289: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_Prelude_46Read_46Ratio_46Ratio_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Ratio_46Ratio_46readsPrec),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62))
, useLabel(CF_Ratio_46prec)
, CAPTAG(useLabel(FN_LAMBDA285),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v290)
,	/* FN_LAMBDA285: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_INT_P1)
, bytes2word(1,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,14)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v290: (byte 0) */
  HW(6,3)
, 0
,	/* F0_LAMBDA285: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA285),3)
, CAPTAG(useLabel(FN_LAMBDA284),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, useLabel(CF_Ratio_46prec)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v294)
,	/* FN_LAMBDA284: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v294: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA284: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA284),4)
, CAPTAG(useLabel(FN_LAMBDA283),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v315)
,	/* FN_LAMBDA283: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v312: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v302: (byte 4) */
  bytes2word(POP_I1,JUMP,70,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(37),BOT(37),TOP(10),BOT(10))
,	/* v313: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v306: (byte 2) */
  bytes2word(47,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v314: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v310: (byte 4) */
  bytes2word(POP_I1,JUMP,33,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_INT_P1)
, bytes2word(1,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,6)
,	/* v303: (byte 3) */
  bytes2word(HEAP_ARG,5,RETURN_EVAL,POP_P1)
,	/* v299: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v295: (byte 1) */
  bytes2word(0,PUSH_ARG,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v315: (byte 0) */
  HW(6,5)
, 0
,	/* F0_LAMBDA283: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA283),5)
, CAPTAG(useLabel(FN_LAMBDA282),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, useLabel(CF_Ratio_46prec)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v319)
,	/* FN_LAMBDA282: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,5)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v319: (byte 0) */
  HW(1,4)
, 0
,	/* F0_LAMBDA282: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA282),4)
, VAPTAG(useLabel(FN_Ratio_46_37))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v320)
,};
Node FN_Prelude_46Read_46Ratio_46Ratio_46readList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v320: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Ratio_46Ratio_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Ratio_46Ratio_46readList),2)
, VAPTAG(useLabel(FN_Prelude_46Read_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v321)
,};
Node FN_Prelude_46Read_46Ratio_46Ratio[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v321: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Ratio_46Ratio),2)
, CAPTAG(useLabel(FN_Prelude_46Read_46Ratio_46Ratio_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Ratio_46Ratio_46readList))
,};
