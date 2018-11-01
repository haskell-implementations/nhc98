#include "newmacros.h"
#include "runtime.h"

#define CT_v289	((void*)startLabel+48)
#define FN_LAMBDA284	((void*)startLabel+84)
#define CT_v291	((void*)startLabel+136)
#define F0_LAMBDA284	((void*)startLabel+144)
#define FN_LAMBDA283	((void*)startLabel+176)
#define CT_v296	((void*)startLabel+216)
#define F0_LAMBDA283	((void*)startLabel+224)
#define FN_LAMBDA282	((void*)startLabel+256)
#define v322	((void*)startLabel+276)
#define v304	((void*)startLabel+280)
#define v323	((void*)startLabel+294)
#define v308	((void*)startLabel+298)
#define v324	((void*)startLabel+308)
#define v312	((void*)startLabel+312)
#define v325	((void*)startLabel+326)
#define v316	((void*)startLabel+330)
#define v326	((void*)startLabel+340)
#define v320	((void*)startLabel+344)
#define v313	((void*)startLabel+369)
#define v305	((void*)startLabel+374)
#define v301	((void*)startLabel+379)
#define v297	((void*)startLabel+384)
#define CT_v327	((void*)startLabel+400)
#define F0_LAMBDA282	((void*)startLabel+408)
#define FN_LAMBDA281	((void*)startLabel+444)
#define CT_v331	((void*)startLabel+496)
#define F0_LAMBDA281	((void*)startLabel+504)
#define FN_LAMBDA280	((void*)startLabel+524)
#define CT_v333	((void*)startLabel+564)
#define F0_LAMBDA280	((void*)startLabel+572)
#define CT_v335	((void*)startLabel+616)
#define CT_v337	((void*)startLabel+692)
#define ST_v336	((void*)startLabel+712)
#define ST_v334	((void*)startLabel+741)
#define ST_v288	((void*)startLabel+779)
#define ST_v290	((void*)startLabel+818)
#define ST_v294	((void*)startLabel+867)
#define ST_v332	((void*)startLabel+916)
extern Node TM_Complex[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62_61[];
extern Node FN_Prelude_46readParen[];
extern Node TMSUB_Complex[];
extern Node FN_Prelude_46readsPrec[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46Read_46Complex_46Complex[];
extern Node FN_Prelude_46_95_46readList[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v289)
,};
Node FN_Prelude_46Read_46Complex_46Complex_46readsPrec[] = {
  useLabel(TM_Complex)
, bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(3,HEAP_INT_P1,6,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60003
, useLabel(ST_v288)
,	/* CT_v289: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46Read_46Complex_46Complex_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Complex_46Complex_46readsPrec),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62_61))
, CAPTAG(useLabel(FN_LAMBDA284),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v291)
,	/* FN_LAMBDA284: (byte 0) */
  useLabel(TMSUB_Complex)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_INT_P1,6)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_IN3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 60038
, useLabel(ST_v290)
,	/* CT_v291: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA284: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA284),2)
, CAPTAG(useLabel(FN_LAMBDA283),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v296)
,	/* FN_LAMBDA283: (byte 0) */
  useLabel(TMSUB_Complex)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_I1,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 60044
, useLabel(ST_v294)
,	/* CT_v296: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA283: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA283),3)
, CAPTAG(useLabel(FN_LAMBDA282),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v327)
,	/* FN_LAMBDA282: (byte 0) */
  useLabel(TMSUB_Complex)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v322: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v304: (byte 4) */
  bytes2word(POP_I1,JUMP,101,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(58),BOT(58),TOP(10),BOT(10))
,	/* v323: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v308: (byte 2) */
  bytes2word(78,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v324: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v312: (byte 4) */
  bytes2word(POP_I1,JUMP,64,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(43),BOT(43),TOP(10),BOT(10))
,	/* v325: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v316: (byte 2) */
  bytes2word(41,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v326: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v320: (byte 4) */
  bytes2word(POP_I1,JUMP,27,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_INT_P1)
, bytes2word(6,HEAP_P1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,6,HEAP_ARG,5)
,	/* v313: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v305: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v301: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v297: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 60044
, useLabel(ST_v294)
,	/* CT_v327: (byte 0) */
  HW(4,5)
, 0
,	/* F0_LAMBDA282: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA282),5)
, CAPTAG(useLabel(FN_LAMBDA281),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v331)
,	/* FN_LAMBDA281: (byte 0) */
  useLabel(TMSUB_Complex)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 60044
, useLabel(ST_v294)
,	/* CT_v331: (byte 0) */
  HW(1,4)
, 0
,	/* F0_LAMBDA281: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA281),4)
, VAPTAG(useLabel(FN_LAMBDA280))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v333)
,	/* FN_LAMBDA280: (byte 0) */
  useLabel(TMSUB_Complex)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,POP_I1)
, bytes2word(PUSH_ARG_I2,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG,1)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 60048
, useLabel(ST_v332)
,	/* CT_v333: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA280: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA280),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v335)
,};
Node FN_Prelude_46Read_46Complex_46Complex_46readList[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50035
, useLabel(ST_v334)
,	/* CT_v335: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Complex_46Complex_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Complex_46Complex_46readList),2)
, VAPTAG(useLabel(FN_Prelude_46Read_46Complex_46Complex))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v337)
,};
Node FN_Prelude_46Read_46Complex_46Complex[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 50035
, useLabel(ST_v336)
,	/* CT_v337: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Complex_46Complex[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Complex_46Complex),2)
, CAPTAG(useLabel(FN_Prelude_46Read_46Complex_46Complex_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Complex_46Complex_46readList))
,	/* ST_v336: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,67,111,109)
, bytes2word(112,108,101,120)
, bytes2word(46,67,111,109)
, bytes2word(112,108,101,120)
,	/* ST_v334: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,67,111)
, bytes2word(109,112,108,101)
, bytes2word(120,46,67,111)
, bytes2word(109,112,108,101)
, bytes2word(120,46,114,101)
, bytes2word(97,100,76,105)
,	/* ST_v288: (byte 3) */
  bytes2word(115,116,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(114,101,97,100)
, bytes2word(115,80,114,101)
,	/* ST_v290: (byte 2) */
  bytes2word(99,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,100,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,54,58,51)
, bytes2word(56,45,56,58)
,	/* ST_v294: (byte 3) */
  bytes2word(56,48,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(114,101,97,100)
, bytes2word(115,80,114,101)
, bytes2word(99,58,54,58)
, bytes2word(52,52,45,56)
,	/* ST_v332: (byte 4) */
  bytes2word(58,56,48,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,67,111,109)
, bytes2word(112,108,101,120)
, bytes2word(46,67,111,109)
, bytes2word(112,108,101,120)
, bytes2word(46,114,101,97)
, bytes2word(100,115,80,114)
, bytes2word(101,99,58,54)
, bytes2word(58,52,56,45)
, bytes2word(54,58,52,57)
, bytes2word(0,0,0,0)
,};
