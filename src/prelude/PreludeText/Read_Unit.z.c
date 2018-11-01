#include "newmacros.h"
#include "runtime.h"

#define CT_v222	((void*)startLabel+44)
#define FN_LAMBDA219	((void*)startLabel+72)
#define CT_v224	((void*)startLabel+112)
#define F0_LAMBDA219	((void*)startLabel+120)
#define FN_LAMBDA218	((void*)startLabel+148)
#define v243	((void*)startLabel+166)
#define v232	((void*)startLabel+170)
#define v244	((void*)startLabel+184)
#define v236	((void*)startLabel+188)
#define v245	((void*)startLabel+198)
#define v240	((void*)startLabel+202)
#define v233	((void*)startLabel+216)
#define v229	((void*)startLabel+221)
#define v225	((void*)startLabel+226)
#define CT_v246	((void*)startLabel+244)
#define F0_LAMBDA218	((void*)startLabel+252)
#define FN_LAMBDA217	((void*)startLabel+280)
#define v264	((void*)startLabel+298)
#define v254	((void*)startLabel+302)
#define v265	((void*)startLabel+316)
#define v258	((void*)startLabel+320)
#define v266	((void*)startLabel+330)
#define v262	((void*)startLabel+334)
#define v255	((void*)startLabel+350)
#define v251	((void*)startLabel+355)
#define v247	((void*)startLabel+360)
#define CT_v267	((void*)startLabel+392)
#define F0_LAMBDA217	((void*)startLabel+400)
#define CT_v269	((void*)startLabel+436)
#define CT_v271	((void*)startLabel+496)
#define ST_v270	((void*)startLabel+516)
#define ST_v268	((void*)startLabel+532)
#define ST_v221	((void*)startLabel+557)
#define ST_v223	((void*)startLabel+583)
#define ST_v241	((void*)startLabel+619)
extern Node TM_Prelude[];
extern Node FN_Prelude_46readParen[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46_40_41[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v222)
,};
Node FN_Prelude_46Read_46_40_41_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40003
, useLabel(ST_v221)
,	/* CT_v222: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46_40_41_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46_40_41_46readsPrec),1)
, CAPTAG(useLabel(FN_LAMBDA219),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(1,0,0,1)
, useLabel(CT_v224)
,	/* FN_LAMBDA219: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 50020
, useLabel(ST_v223)
,	/* CT_v224: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA219: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA219),1)
, CAPTAG(useLabel(FN_LAMBDA218),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v246)
,	/* FN_LAMBDA218: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v243: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v232: (byte 2) */
  bytes2word(53,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(40),BOT(40))
,	/* v244: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v236: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v245: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v240: (byte 2) */
  bytes2word(16,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,HEAP_OFF_N1)
,	/* v233: (byte 4) */
  bytes2word(4,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v229: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v225: (byte 2) */
  bytes2word(2,0,PUSH_ARG_I2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50026
, useLabel(ST_v241)
,	/* CT_v246: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA218: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA218),2)
, CAPTAG(useLabel(FN_LAMBDA217),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v267)
,	/* FN_LAMBDA217: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v264: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v254: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(41),BOT(41))
,	/* v265: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v258: (byte 4) */
  bytes2word(POP_I1,JUMP,32,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v266: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v262: (byte 2) */
  bytes2word(18,0,POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,2)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v255: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v251: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v247: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
, 50026
, useLabel(ST_v241)
,	/* CT_v267: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA217: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA217),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v269)
,};
Node FN_Prelude_46Read_46_40_41_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v268)
,	/* CT_v269: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46_40_41_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46_40_41_46readList))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46_40_41)
, bytes2word(0,0,0,0)
, useLabel(CT_v271)
,};
Node FN_Prelude_46Read_46_40_41[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30010
, useLabel(ST_v270)
,	/* CT_v271: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46_40_41[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46_40_41))
, useLabel(F0_Prelude_46Read_46_40_41_46readsPrec)
, useLabel(CF_Prelude_46Read_46_40_41_46readList)
,	/* ST_v270: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
,	/* ST_v268: (byte 4) */
  bytes2word(46,40,41,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,40,41,46)
, bytes2word(114,101,97,100)
, bytes2word(76,105,115,116)
,	/* ST_v221: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,40,41)
, bytes2word(46,114,101,97)
, bytes2word(100,115,80,114)
,	/* ST_v223: (byte 3) */
  bytes2word(101,99,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(40,41,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,53,58,50)
, bytes2word(48,45,54,58)
,	/* ST_v241: (byte 3) */
  bytes2word(53,51,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(40,41,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,53,58,50)
, bytes2word(54,45,54,58)
, bytes2word(53,51,0,0)
,};
