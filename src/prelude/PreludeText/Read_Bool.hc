#include "newmacros.h"
#include "runtime.h"

#define CT_v241	((void*)startLabel+36)
#define FN_LAMBDA239	((void*)startLabel+64)
#define CT_v242	((void*)startLabel+116)
#define F0_LAMBDA239	((void*)startLabel+124)
#define FN_LAMBDA238	((void*)startLabel+160)
#define v284	((void*)startLabel+174)
#define v250	((void*)startLabel+178)
#define v285	((void*)startLabel+192)
#define v254	((void*)startLabel+196)
#define v286	((void*)startLabel+206)
#define v258	((void*)startLabel+210)
#define v287	((void*)startLabel+224)
#define v262	((void*)startLabel+228)
#define v288	((void*)startLabel+238)
#define v266	((void*)startLabel+242)
#define v289	((void*)startLabel+256)
#define v270	((void*)startLabel+260)
#define v290	((void*)startLabel+270)
#define v274	((void*)startLabel+274)
#define v291	((void*)startLabel+288)
#define v278	((void*)startLabel+292)
#define v292	((void*)startLabel+302)
#define v282	((void*)startLabel+306)
#define v275	((void*)startLabel+322)
#define v267	((void*)startLabel+327)
#define v259	((void*)startLabel+332)
#define v251	((void*)startLabel+337)
#define v247	((void*)startLabel+342)
#define v243	((void*)startLabel+347)
#define CT_v293	((void*)startLabel+372)
#define F0_LAMBDA238	((void*)startLabel+380)
#define FN_LAMBDA237	((void*)startLabel+396)
#define v343	((void*)startLabel+410)
#define v301	((void*)startLabel+414)
#define v344	((void*)startLabel+428)
#define v305	((void*)startLabel+432)
#define v345	((void*)startLabel+442)
#define v309	((void*)startLabel+446)
#define v346	((void*)startLabel+460)
#define v313	((void*)startLabel+464)
#define v347	((void*)startLabel+474)
#define v317	((void*)startLabel+478)
#define v348	((void*)startLabel+492)
#define v321	((void*)startLabel+496)
#define v349	((void*)startLabel+506)
#define v325	((void*)startLabel+510)
#define v350	((void*)startLabel+524)
#define v329	((void*)startLabel+528)
#define v351	((void*)startLabel+538)
#define v333	((void*)startLabel+542)
#define v352	((void*)startLabel+556)
#define v337	((void*)startLabel+560)
#define v353	((void*)startLabel+570)
#define v341	((void*)startLabel+574)
#define v334	((void*)startLabel+590)
#define v326	((void*)startLabel+595)
#define v318	((void*)startLabel+600)
#define v310	((void*)startLabel+605)
#define v302	((void*)startLabel+610)
#define v298	((void*)startLabel+615)
#define v294	((void*)startLabel+620)
#define CT_v354	((void*)startLabel+644)
#define F0_LAMBDA237	((void*)startLabel+652)
#define CT_v355	((void*)startLabel+676)
#define CT_v356	((void*)startLabel+724)
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46Prelude_46Bool[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v241)
,};
Node FN_Prelude_46Read_46Prelude_46Bool_46readsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v241: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Bool_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Bool_46readsPrec),1)
, CAPTAG(useLabel(FN_LAMBDA239),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(1,0,0,1)
, useLabel(CT_v242)
,	/* FN_LAMBDA239: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(13,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v242: (byte 0) */
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
, useLabel(CT_v293)
,	/* FN_LAMBDA238: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v284: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v250: (byte 2) */
  bytes2word(166,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(84),BOT(84))
,	/* v285: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v254: (byte 4) */
  bytes2word(POP_I1,JUMP,143,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v286: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v258: (byte 2) */
  bytes2word(129,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(114),BOT(114))
,	/* v287: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v262: (byte 4) */
  bytes2word(POP_I1,JUMP,106,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v288: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v266: (byte 2) */
  bytes2word(92,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(117),BOT(117))
,	/* v289: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v270: (byte 4) */
  bytes2word(POP_I1,JUMP,69,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v290: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v274: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(101),BOT(101))
,	/* v291: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v278: (byte 4) */
  bytes2word(POP_I1,JUMP,32,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v292: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v282: (byte 2) */
  bytes2word(18,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(2,HEAP_P1,9,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v275: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v267: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v259: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v251: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v247: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v243: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG_I2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(1,0,0)
,	/* CT_v293: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA238: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA238),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v354)
,	/* FN_LAMBDA237: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v343: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v301: (byte 2) */
  bytes2word(203,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(70),BOT(70))
,	/* v344: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v305: (byte 4) */
  bytes2word(POP_I1,JUMP,180,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v345: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v309: (byte 2) */
  bytes2word(166,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(97),BOT(97))
,	/* v346: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v313: (byte 4) */
  bytes2word(POP_I1,JUMP,143,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v347: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v317: (byte 2) */
  bytes2word(129,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(108),BOT(108))
,	/* v348: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v321: (byte 4) */
  bytes2word(POP_I1,JUMP,106,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v349: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v325: (byte 2) */
  bytes2word(92,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(115),BOT(115))
,	/* v350: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v329: (byte 4) */
  bytes2word(POP_I1,JUMP,69,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v351: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v333: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(101),BOT(101))
,	/* v352: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v337: (byte 4) */
  bytes2word(POP_I1,JUMP,32,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v353: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v341: (byte 2) */
  bytes2word(18,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(2,HEAP_P1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v334: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v326: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v318: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v310: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v302: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v298: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v294: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
,	/* CT_v354: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA237: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA237),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v355)
,};
Node FN_Prelude_46Read_46Prelude_46Bool_46readList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v355: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Bool_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Bool_46readList))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46Prelude_46Bool)
, bytes2word(0,0,0,0)
, useLabel(CT_v356)
,};
Node FN_Prelude_46Read_46Prelude_46Bool[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v356: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Bool[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Bool))
, useLabel(F0_Prelude_46Read_46Prelude_46Bool_46readsPrec)
, useLabel(CF_Prelude_46Read_46Prelude_46Bool_46readList)
,};
