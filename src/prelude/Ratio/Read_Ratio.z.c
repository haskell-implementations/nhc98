#include "newmacros.h"
#include "runtime.h"

#define CT_v290	((void*)startLabel+48)
#define FN_LAMBDA285	((void*)startLabel+88)
#define CT_v292	((void*)startLabel+148)
#define F0_LAMBDA285	((void*)startLabel+156)
#define FN_LAMBDA284	((void*)startLabel+200)
#define CT_v297	((void*)startLabel+244)
#define F0_LAMBDA284	((void*)startLabel+252)
#define FN_LAMBDA283	((void*)startLabel+284)
#define v315	((void*)startLabel+304)
#define v305	((void*)startLabel+308)
#define v316	((void*)startLabel+322)
#define v309	((void*)startLabel+326)
#define v317	((void*)startLabel+336)
#define v313	((void*)startLabel+340)
#define v306	((void*)startLabel+371)
#define v302	((void*)startLabel+376)
#define v298	((void*)startLabel+381)
#define CT_v318	((void*)startLabel+400)
#define F0_LAMBDA283	((void*)startLabel+408)
#define FN_LAMBDA282	((void*)startLabel+452)
#define CT_v322	((void*)startLabel+504)
#define F0_LAMBDA282	((void*)startLabel+512)
#define CT_v324	((void*)startLabel+560)
#define CT_v326	((void*)startLabel+636)
#define ST_v325	((void*)startLabel+656)
#define ST_v323	((void*)startLabel+681)
#define ST_v289	((void*)startLabel+715)
#define ST_v291	((void*)startLabel+750)
#define ST_v295	((void*)startLabel+797)
extern Node TM_Ratio[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62[];
extern Node CF_Ratio_46prec[];
extern Node FN_Prelude_46readParen[];
extern Node TMSUB_Ratio[];
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
, useLabel(CT_v290)
,};
Node FN_Prelude_46Read_46Ratio_46Ratio_46readsPrec[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_ARG_ARG,2)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90005
, useLabel(ST_v289)
,	/* CT_v290: (byte 0) */
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
, useLabel(CT_v292)
,	/* FN_LAMBDA285: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_INT_P1)
, bytes2word(1,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,14,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 110020
, useLabel(ST_v291)
,	/* CT_v292: (byte 0) */
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
, useLabel(CT_v297)
,	/* FN_LAMBDA284: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110026
, useLabel(ST_v295)
,	/* CT_v297: (byte 0) */
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
, useLabel(CT_v318)
,	/* FN_LAMBDA283: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v315: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v305: (byte 4) */
  bytes2word(POP_I1,JUMP,70,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(37),BOT(37),TOP(10),BOT(10))
,	/* v316: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v309: (byte 2) */
  bytes2word(47,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v317: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v313: (byte 4) */
  bytes2word(POP_I1,JUMP,33,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_INT_P1)
, bytes2word(1,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,6)
,	/* v306: (byte 3) */
  bytes2word(HEAP_ARG,5,RETURN_EVAL,POP_P1)
,	/* v302: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v298: (byte 1) */
  bytes2word(0,PUSH_ARG,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110026
, useLabel(ST_v295)
,	/* CT_v318: (byte 0) */
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
, useLabel(CT_v322)
,	/* FN_LAMBDA282: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,5,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 110026
, useLabel(ST_v295)
,	/* CT_v322: (byte 0) */
  HW(1,4)
, 0
,	/* F0_LAMBDA282: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA282),4)
, VAPTAG(useLabel(FN_Ratio_46_37))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v324)
,};
Node FN_Prelude_46Read_46Ratio_46Ratio_46readList[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 80034
, useLabel(ST_v323)
,	/* CT_v324: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Ratio_46Ratio_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Ratio_46Ratio_46readList),2)
, VAPTAG(useLabel(FN_Prelude_46Read_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v326)
,};
Node FN_Prelude_46Read_46Ratio_46Ratio[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 80034
, useLabel(ST_v325)
,	/* CT_v326: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Ratio_46Ratio),2)
, CAPTAG(useLabel(FN_Prelude_46Read_46Ratio_46Ratio_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Ratio_46Ratio_46readList))
,	/* ST_v325: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
,	/* ST_v323: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,114,101)
, bytes2word(97,100,76,105)
,	/* ST_v289: (byte 3) */
  bytes2word(115,116,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(114,101,97,100)
, bytes2word(115,80,114,101)
,	/* ST_v291: (byte 2) */
  bytes2word(99,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,100,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,49,49,58)
, bytes2word(50,48,45,49)
, bytes2word(51,58,55,50)
,	/* ST_v295: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,114,101)
, bytes2word(97,100,115,80)
, bytes2word(114,101,99,58)
, bytes2word(49,49,58,50)
, bytes2word(54,45,49,51)
, bytes2word(58,55,50,0)
,};
