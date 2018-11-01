#include "newmacros.h"
#include "runtime.h"

#define CT_v242	((void*)startLabel+44)
#define FN_LAMBDA239	((void*)startLabel+72)
#define CT_v244	((void*)startLabel+132)
#define F0_LAMBDA239	((void*)startLabel+140)
#define FN_LAMBDA238	((void*)startLabel+176)
#define v287	((void*)startLabel+194)
#define v252	((void*)startLabel+198)
#define v288	((void*)startLabel+212)
#define v256	((void*)startLabel+216)
#define v289	((void*)startLabel+226)
#define v260	((void*)startLabel+230)
#define v290	((void*)startLabel+244)
#define v264	((void*)startLabel+248)
#define v291	((void*)startLabel+258)
#define v268	((void*)startLabel+262)
#define v292	((void*)startLabel+276)
#define v272	((void*)startLabel+280)
#define v293	((void*)startLabel+290)
#define v276	((void*)startLabel+294)
#define v294	((void*)startLabel+308)
#define v280	((void*)startLabel+312)
#define v295	((void*)startLabel+322)
#define v284	((void*)startLabel+326)
#define v277	((void*)startLabel+342)
#define v269	((void*)startLabel+347)
#define v261	((void*)startLabel+352)
#define v253	((void*)startLabel+357)
#define v249	((void*)startLabel+362)
#define v245	((void*)startLabel+367)
#define CT_v296	((void*)startLabel+400)
#define F0_LAMBDA238	((void*)startLabel+408)
#define FN_LAMBDA237	((void*)startLabel+424)
#define v347	((void*)startLabel+442)
#define v304	((void*)startLabel+446)
#define v348	((void*)startLabel+460)
#define v308	((void*)startLabel+464)
#define v349	((void*)startLabel+474)
#define v312	((void*)startLabel+478)
#define v350	((void*)startLabel+492)
#define v316	((void*)startLabel+496)
#define v351	((void*)startLabel+506)
#define v320	((void*)startLabel+510)
#define v352	((void*)startLabel+524)
#define v324	((void*)startLabel+528)
#define v353	((void*)startLabel+538)
#define v328	((void*)startLabel+542)
#define v354	((void*)startLabel+556)
#define v332	((void*)startLabel+560)
#define v355	((void*)startLabel+570)
#define v336	((void*)startLabel+574)
#define v356	((void*)startLabel+588)
#define v340	((void*)startLabel+592)
#define v357	((void*)startLabel+602)
#define v344	((void*)startLabel+606)
#define v337	((void*)startLabel+622)
#define v329	((void*)startLabel+627)
#define v321	((void*)startLabel+632)
#define v313	((void*)startLabel+637)
#define v305	((void*)startLabel+642)
#define v301	((void*)startLabel+647)
#define v297	((void*)startLabel+652)
#define CT_v358	((void*)startLabel+684)
#define F0_LAMBDA237	((void*)startLabel+692)
#define CT_v360	((void*)startLabel+728)
#define CT_v362	((void*)startLabel+788)
#define ST_v361	((void*)startLabel+808)
#define ST_v359	((void*)startLabel+834)
#define ST_v241	((void*)startLabel+869)
#define ST_v243	((void*)startLabel+905)
#define ST_v345	((void*)startLabel+951)
#define ST_v285	((void*)startLabel+997)
extern Node TM_Prelude[];
extern Node FN_Prelude_46readParen[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46Prelude_46Bool[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v242)
,};
Node FN_Prelude_46Read_46Prelude_46Bool_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40003
, useLabel(ST_v241)
,	/* CT_v242: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Bool_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Bool_46readsPrec),1)
, CAPTAG(useLabel(FN_LAMBDA239),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(1,0,0,1)
, useLabel(CT_v244)
,	/* FN_LAMBDA239: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_IN3,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,6,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_IN3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 50020
, useLabel(ST_v243)
,	/* CT_v244: (byte 0) */
  HW(5,1)
, 0
,	/* F0_LAMBDA239: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA239),1)
, CAPTAG(useLabel(FN_LAMBDA237),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, CAPTAG(useLabel(FN_LAMBDA238),2)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v296)
,	/* FN_LAMBDA238: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v287: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v252: (byte 2) */
  bytes2word(166,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(84),BOT(84))
,	/* v288: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v256: (byte 4) */
  bytes2word(POP_I1,JUMP,143,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v289: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v260: (byte 2) */
  bytes2word(129,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(114),BOT(114))
,	/* v290: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v264: (byte 4) */
  bytes2word(POP_I1,JUMP,106,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v291: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v268: (byte 2) */
  bytes2word(92,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(117),BOT(117))
,	/* v292: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v272: (byte 4) */
  bytes2word(POP_I1,JUMP,69,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v293: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v276: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(101),BOT(101))
,	/* v294: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v280: (byte 4) */
  bytes2word(POP_I1,JUMP,32,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v295: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v284: (byte 2) */
  bytes2word(18,0,POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,2)
, bytes2word(HEAP_P1,9,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v277: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v269: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v261: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v253: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v249: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v245: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG_I2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(1,0,0)
, 60026
, useLabel(ST_v285)
,	/* CT_v296: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA238: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA238),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v358)
,	/* FN_LAMBDA237: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v347: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v304: (byte 2) */
  bytes2word(203,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(70),BOT(70))
,	/* v348: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v308: (byte 4) */
  bytes2word(POP_I1,JUMP,180,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v349: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v312: (byte 2) */
  bytes2word(166,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(97),BOT(97))
,	/* v350: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v316: (byte 4) */
  bytes2word(POP_I1,JUMP,143,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v351: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v320: (byte 2) */
  bytes2word(129,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(108),BOT(108))
,	/* v352: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v324: (byte 4) */
  bytes2word(POP_I1,JUMP,106,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v353: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v328: (byte 2) */
  bytes2word(92,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(115),BOT(115))
,	/* v354: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v332: (byte 4) */
  bytes2word(POP_I1,JUMP,69,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v355: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v336: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(101),BOT(101))
,	/* v356: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v340: (byte 4) */
  bytes2word(POP_I1,JUMP,32,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v357: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v344: (byte 2) */
  bytes2word(18,0,POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,2)
, bytes2word(HEAP_P1,11,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v337: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v329: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v321: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v313: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v305: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v301: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v297: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
, 50026
, useLabel(ST_v345)
,	/* CT_v358: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA237: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA237),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v360)
,};
Node FN_Prelude_46Read_46Prelude_46Bool_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v359)
,	/* CT_v360: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Bool_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Bool_46readList))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46Prelude_46Bool)
, bytes2word(0,0,0,0)
, useLabel(CT_v362)
,};
Node FN_Prelude_46Read_46Prelude_46Bool[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30010
, useLabel(ST_v361)
,	/* CT_v362: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Bool[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Bool))
, useLabel(F0_Prelude_46Read_46Prelude_46Bool_46readsPrec)
, useLabel(CF_Prelude_46Read_46Prelude_46Bool_46readList)
,	/* ST_v361: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,66,111,111)
,	/* ST_v359: (byte 2) */
  bytes2word(108,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,66)
, bytes2word(111,111,108,46)
, bytes2word(114,101,97,100)
, bytes2word(76,105,115,116)
,	/* ST_v241: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,66,111)
, bytes2word(111,108,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
,	/* ST_v243: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,66,111)
, bytes2word(111,108,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,53,58,50)
, bytes2word(48,45,54,58)
,	/* ST_v345: (byte 3) */
  bytes2word(53,56,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,111,108)
, bytes2word(46,114,101,97)
, bytes2word(100,115,80,114)
, bytes2word(101,99,58,53)
, bytes2word(58,50,54,45)
, bytes2word(53,58,53,57)
,	/* ST_v285: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,66,111)
, bytes2word(111,108,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,54,58,50)
, bytes2word(54,45,54,58)
, bytes2word(53,56,0,0)
,};
