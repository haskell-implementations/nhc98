#include "newmacros.h"
#include "runtime.h"

#define CT_v257	((void*)startLabel+44)
#define FN_LAMBDA254	((void*)startLabel+72)
#define CT_v259	((void*)startLabel+152)
#define F0_LAMBDA254	((void*)startLabel+160)
#define FN_LAMBDA253	((void*)startLabel+200)
#define v286	((void*)startLabel+218)
#define v267	((void*)startLabel+222)
#define v287	((void*)startLabel+236)
#define v271	((void*)startLabel+240)
#define v288	((void*)startLabel+250)
#define v275	((void*)startLabel+254)
#define v289	((void*)startLabel+268)
#define v279	((void*)startLabel+272)
#define v290	((void*)startLabel+282)
#define v283	((void*)startLabel+286)
#define v276	((void*)startLabel+302)
#define v268	((void*)startLabel+307)
#define v264	((void*)startLabel+312)
#define v260	((void*)startLabel+317)
#define CT_v291	((void*)startLabel+348)
#define F0_LAMBDA253	((void*)startLabel+356)
#define FN_LAMBDA252	((void*)startLabel+372)
#define v318	((void*)startLabel+390)
#define v299	((void*)startLabel+394)
#define v319	((void*)startLabel+408)
#define v303	((void*)startLabel+412)
#define v320	((void*)startLabel+422)
#define v307	((void*)startLabel+426)
#define v321	((void*)startLabel+440)
#define v311	((void*)startLabel+444)
#define v322	((void*)startLabel+454)
#define v315	((void*)startLabel+458)
#define v308	((void*)startLabel+474)
#define v300	((void*)startLabel+479)
#define v296	((void*)startLabel+484)
#define v292	((void*)startLabel+489)
#define CT_v323	((void*)startLabel+520)
#define F0_LAMBDA252	((void*)startLabel+528)
#define FN_LAMBDA251	((void*)startLabel+544)
#define v350	((void*)startLabel+562)
#define v331	((void*)startLabel+566)
#define v351	((void*)startLabel+580)
#define v335	((void*)startLabel+584)
#define v352	((void*)startLabel+594)
#define v339	((void*)startLabel+598)
#define v353	((void*)startLabel+612)
#define v343	((void*)startLabel+616)
#define v354	((void*)startLabel+626)
#define v347	((void*)startLabel+630)
#define v340	((void*)startLabel+646)
#define v332	((void*)startLabel+651)
#define v328	((void*)startLabel+656)
#define v324	((void*)startLabel+661)
#define CT_v355	((void*)startLabel+692)
#define F0_LAMBDA251	((void*)startLabel+700)
#define CT_v357	((void*)startLabel+736)
#define CT_v359	((void*)startLabel+796)
#define ST_v358	((void*)startLabel+816)
#define ST_v356	((void*)startLabel+846)
#define ST_v256	((void*)startLabel+885)
#define ST_v258	((void*)startLabel+925)
#define ST_v348	((void*)startLabel+975)
#define ST_v316	((void*)startLabel+1025)
#define ST_v284	((void*)startLabel+1075)
extern Node TM_Prelude[];
extern Node FN_Prelude_46readParen[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46Prelude_46Ordering[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v257)
,};
Node FN_Prelude_46Read_46Prelude_46Ordering_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40003
, useLabel(ST_v256)
,	/* CT_v257: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Ordering_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Ordering_46readsPrec),1)
, CAPTAG(useLabel(FN_LAMBDA254),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(1,0,0,1)
, useLabel(CT_v259)
,	/* FN_LAMBDA254: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_IN3,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,6,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_IN3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,24,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 50020
, useLabel(ST_v258)
,	/* CT_v259: (byte 0) */
  HW(6,1)
, 0
,	/* F0_LAMBDA254: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA254),1)
, CAPTAG(useLabel(FN_LAMBDA251),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, CAPTAG(useLabel(FN_LAMBDA252),2)
, CAPTAG(useLabel(FN_LAMBDA253),2)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v291)
,	/* FN_LAMBDA253: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v286: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v267: (byte 2) */
  bytes2word(92,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(71),BOT(71))
,	/* v287: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v271: (byte 4) */
  bytes2word(POP_I1,JUMP,69,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v288: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v275: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(84),BOT(84))
,	/* v289: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v279: (byte 4) */
  bytes2word(POP_I1,JUMP,32,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v290: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v283: (byte 2) */
  bytes2word(18,0,POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,2)
, bytes2word(HEAP_P1,5,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v276: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v268: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v264: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v260: (byte 1) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(2,0,0)
, 70026
, useLabel(ST_v284)
,	/* CT_v291: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA253: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA253),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v323)
,	/* FN_LAMBDA252: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v318: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v299: (byte 2) */
  bytes2word(92,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(69),BOT(69))
,	/* v319: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v303: (byte 4) */
  bytes2word(POP_I1,JUMP,69,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v320: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v307: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(81),BOT(81))
,	/* v321: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v311: (byte 4) */
  bytes2word(POP_I1,JUMP,32,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v322: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v315: (byte 2) */
  bytes2word(18,0,POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,2)
, bytes2word(HEAP_P1,5,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v308: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v300: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v296: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v292: (byte 1) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(1,0,0)
, 60026
, useLabel(ST_v316)
,	/* CT_v323: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA252: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA252),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v355)
,	/* FN_LAMBDA251: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v350: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v331: (byte 2) */
  bytes2word(92,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(76),BOT(76))
,	/* v351: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v335: (byte 4) */
  bytes2word(POP_I1,JUMP,69,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v352: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v339: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(84),BOT(84))
,	/* v353: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v343: (byte 4) */
  bytes2word(POP_I1,JUMP,32,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v354: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v347: (byte 2) */
  bytes2word(18,0,POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,2)
, bytes2word(HEAP_P1,5,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v340: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v332: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v328: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v324: (byte 1) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
, 50026
, useLabel(ST_v348)
,	/* CT_v355: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA251: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA251),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v357)
,};
Node FN_Prelude_46Read_46Prelude_46Ordering_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v356)
,	/* CT_v357: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Ordering_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Ordering_46readList))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46Prelude_46Ordering)
, bytes2word(0,0,0,0)
, useLabel(CT_v359)
,};
Node FN_Prelude_46Read_46Prelude_46Ordering[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30010
, useLabel(ST_v358)
,	/* CT_v359: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Ordering[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Ordering))
, useLabel(F0_Prelude_46Read_46Prelude_46Ordering_46readsPrec)
, useLabel(CF_Prelude_46Read_46Prelude_46Ordering_46readList)
,	/* ST_v358: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
,	/* ST_v356: (byte 2) */
  bytes2word(103,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,101,114)
, bytes2word(105,110,103,46)
, bytes2word(114,101,97,100)
, bytes2word(76,105,115,116)
,	/* ST_v256: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,101,114,105)
, bytes2word(110,103,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
,	/* ST_v258: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,101,114,105)
, bytes2word(110,103,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,53,58,50)
, bytes2word(48,45,55,58)
,	/* ST_v348: (byte 3) */
  bytes2word(53,51,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,101)
, bytes2word(114,105,110,103)
, bytes2word(46,114,101,97)
, bytes2word(100,115,80,114)
, bytes2word(101,99,58,53)
, bytes2word(58,50,54,45)
, bytes2word(53,58,53,51)
,	/* ST_v316: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,101,114,105)
, bytes2word(110,103,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,54,58,50)
, bytes2word(54,45,54,58)
,	/* ST_v284: (byte 3) */
  bytes2word(53,51,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,101)
, bytes2word(114,105,110,103)
, bytes2word(46,114,101,97)
, bytes2word(100,115,80,114)
, bytes2word(101,99,58,55)
, bytes2word(58,50,54,45)
, bytes2word(55,58,53,51)
, bytes2word(0,0,0,0)
,};
