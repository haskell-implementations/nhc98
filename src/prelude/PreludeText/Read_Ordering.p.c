#include "newmacros.h"
#include "runtime.h"

#define CT_v261	((void*)startLabel+132)
#define FN_LAMBDA254	((void*)startLabel+176)
#define CT_v271	((void*)startLabel+484)
#define F0_LAMBDA254	((void*)startLabel+492)
#define FN_LAMBDA253	((void*)startLabel+548)
#define v299	((void*)startLabel+562)
#define v279	((void*)startLabel+566)
#define v300	((void*)startLabel+580)
#define v283	((void*)startLabel+584)
#define v301	((void*)startLabel+594)
#define v287	((void*)startLabel+598)
#define v302	((void*)startLabel+612)
#define v291	((void*)startLabel+616)
#define v303	((void*)startLabel+626)
#define v295	((void*)startLabel+630)
#define v288	((void*)startLabel+662)
#define v280	((void*)startLabel+667)
#define v276	((void*)startLabel+672)
#define v272	((void*)startLabel+677)
#define CT_v307	((void*)startLabel+812)
#define F0_LAMBDA253	((void*)startLabel+820)
#define FN_LAMBDA252	((void*)startLabel+852)
#define v335	((void*)startLabel+866)
#define v315	((void*)startLabel+870)
#define v336	((void*)startLabel+884)
#define v319	((void*)startLabel+888)
#define v337	((void*)startLabel+898)
#define v323	((void*)startLabel+902)
#define v338	((void*)startLabel+916)
#define v327	((void*)startLabel+920)
#define v339	((void*)startLabel+930)
#define v331	((void*)startLabel+934)
#define v324	((void*)startLabel+966)
#define v316	((void*)startLabel+971)
#define v312	((void*)startLabel+976)
#define v308	((void*)startLabel+981)
#define CT_v343	((void*)startLabel+1116)
#define F0_LAMBDA252	((void*)startLabel+1124)
#define FN_LAMBDA251	((void*)startLabel+1156)
#define v371	((void*)startLabel+1170)
#define v351	((void*)startLabel+1174)
#define v372	((void*)startLabel+1188)
#define v355	((void*)startLabel+1192)
#define v373	((void*)startLabel+1202)
#define v359	((void*)startLabel+1206)
#define v374	((void*)startLabel+1220)
#define v363	((void*)startLabel+1224)
#define v375	((void*)startLabel+1234)
#define v367	((void*)startLabel+1238)
#define v360	((void*)startLabel+1270)
#define v352	((void*)startLabel+1275)
#define v348	((void*)startLabel+1280)
#define v344	((void*)startLabel+1285)
#define CT_v379	((void*)startLabel+1420)
#define F0_LAMBDA251	((void*)startLabel+1428)
#define CT_v383	((void*)startLabel+1508)
#define CT_v387	((void*)startLabel+1620)
#define ST_v385	((void*)startLabel+1656)
#define ST_v381	((void*)startLabel+1688)
#define ST_v257	((void*)startLabel+1728)
#define PP_LAMBDA254	((void*)startLabel+1768)
#define PC_LAMBDA254	((void*)startLabel+1768)
#define ST_v263	((void*)startLabel+1768)
#define PP_LAMBDA251	((void*)startLabel+1818)
#define PC_LAMBDA251	((void*)startLabel+1818)
#define ST_v369	((void*)startLabel+1818)
#define PP_LAMBDA252	((void*)startLabel+1868)
#define PC_LAMBDA252	((void*)startLabel+1868)
#define ST_v333	((void*)startLabel+1868)
#define PP_LAMBDA253	((void*)startLabel+1918)
#define PC_LAMBDA253	((void*)startLabel+1918)
#define ST_v297	((void*)startLabel+1918)
#define PS_v260	((void*)startLabel+1968)
#define PS_v258	((void*)startLabel+1980)
#define PS_v256	((void*)startLabel+1992)
#define PS_v259	((void*)startLabel+2004)
#define PS_v382	((void*)startLabel+2016)
#define PS_v380	((void*)startLabel+2028)
#define PS_v384	((void*)startLabel+2040)
#define PS_v386	((void*)startLabel+2052)
#define PS_v377	((void*)startLabel+2064)
#define PS_v376	((void*)startLabel+2076)
#define PS_v378	((void*)startLabel+2088)
#define PS_v368	((void*)startLabel+2100)
#define PS_v341	((void*)startLabel+2112)
#define PS_v340	((void*)startLabel+2124)
#define PS_v342	((void*)startLabel+2136)
#define PS_v332	((void*)startLabel+2148)
#define PS_v305	((void*)startLabel+2160)
#define PS_v304	((void*)startLabel+2172)
#define PS_v306	((void*)startLabel+2184)
#define PS_v296	((void*)startLabel+2196)
#define PS_v265	((void*)startLabel+2208)
#define PS_v270	((void*)startLabel+2220)
#define PS_v267	((void*)startLabel+2232)
#define PS_v266	((void*)startLabel+2244)
#define PS_v264	((void*)startLabel+2256)
#define PS_v268	((void*)startLabel+2268)
#define PS_v269	((void*)startLabel+2280)
#define PS_v262	((void*)startLabel+2292)
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46Prelude_46Ordering[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46readParen[];
extern Node PC_Prelude_46False[];
extern Node PC_Prelude_46_95_46readList[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_46LT[];
extern Node PC_Prelude_46_58[];
extern Node PC_Prelude_46EQ[];
extern Node PC_Prelude_46GT[];
extern Node PC_Prelude_46lex[];
extern Node PC_Prelude_46_43_43[];
extern Node PC_Prelude_46_95foldr[];
extern Node PC_Prelude_46_91_93[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v261)
,};
Node FN_Prelude_46Read_46Prelude_46Ordering_46readsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,15,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v260)
, 0
, 0
, 0
, 0
, useLabel(PS_v259)
, 0
, 0
, 0
, 0
, useLabel(PS_v258)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 40003
, useLabel(ST_v257)
,	/* CT_v261: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Ordering_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Ordering_46readsPrec),1)
, useLabel(PS_v256)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA254),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(1,0,0,1)
, useLabel(CT_v271)
,	/* FN_LAMBDA254: (byte 0) */
  bytes2word(NEEDHEAP_P1,87,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,12,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,12,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,12,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,37,HEAP_OFF_N1)
, bytes2word(14,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,68,HEAP_OFF_N1)
, bytes2word(13,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v270)
, 0
, 0
, 0
, 0
, useLabel(PS_v269)
, 0
, 0
, 0
, 0
, useLabel(PS_v268)
, 0
, 0
, 0
, 0
, useLabel(PS_v267)
, 0
, 0
, 0
, 0
, useLabel(PS_v266)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v265)
, 0
, 0
, 0
, 0
, useLabel(PS_v264)
, 0
, 0
, 0
, 0
, 50020
, useLabel(ST_v263)
,	/* CT_v271: (byte 0) */
  HW(6,1)
, 0
,	/* F0_LAMBDA254: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA254),1)
, useLabel(PS_v262)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA251),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, CAPTAG(useLabel(FN_LAMBDA252),2)
, CAPTAG(useLabel(FN_LAMBDA253),2)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v307)
,	/* FN_LAMBDA253: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v299: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v279: (byte 2) */
  bytes2word(108,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(71),BOT(71))
,	/* v300: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v283: (byte 4) */
  bytes2word(POP_I1,JUMP,85,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v301: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v287: (byte 2) */
  bytes2word(71,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(84),BOT(84))
,	/* v302: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v291: (byte 4) */
  bytes2word(POP_I1,JUMP,48,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v303: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v295: (byte 2) */
  bytes2word(34,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,HEAP_P1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,HEAP_ARG)
,	/* v288: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v280: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v276: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v272: (byte 1) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v306)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v305)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v304)
, 0
, 0
, 0
, 0
, CONSTR(2,0,0)
, 0
, 0
, 0
, 0
, 70026
, useLabel(ST_v297)
,	/* CT_v307: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA253: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA253),2)
, useLabel(PS_v296)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v343)
,	/* FN_LAMBDA252: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v335: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v315: (byte 2) */
  bytes2word(108,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(69),BOT(69))
,	/* v336: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v319: (byte 4) */
  bytes2word(POP_I1,JUMP,85,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v337: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v323: (byte 2) */
  bytes2word(71,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(81),BOT(81))
,	/* v338: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v327: (byte 4) */
  bytes2word(POP_I1,JUMP,48,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v339: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v331: (byte 2) */
  bytes2word(34,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,HEAP_P1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,HEAP_ARG)
,	/* v324: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v316: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v312: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v308: (byte 1) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v342)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v341)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v340)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, 60026
, useLabel(ST_v333)
,	/* CT_v343: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA252: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA252),2)
, useLabel(PS_v332)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v379)
,	/* FN_LAMBDA251: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v371: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v351: (byte 2) */
  bytes2word(108,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(76),BOT(76))
,	/* v372: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v355: (byte 4) */
  bytes2word(POP_I1,JUMP,85,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v373: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v359: (byte 2) */
  bytes2word(71,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(84),BOT(84))
,	/* v374: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v363: (byte 4) */
  bytes2word(POP_I1,JUMP,48,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v375: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v367: (byte 2) */
  bytes2word(34,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,HEAP_P1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,HEAP_ARG)
,	/* v360: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v352: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v348: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v344: (byte 1) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v378)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v377)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v376)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 50026
, useLabel(ST_v369)
,	/* CT_v379: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA251: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA251),2)
, useLabel(PS_v368)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v383)
,};
Node FN_Prelude_46Read_46Prelude_46Ordering_46readList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v382)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v381)
,	/* CT_v383: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Ordering_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Ordering_46readList))
, useLabel(PS_v380)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46Prelude_46Ordering)
, bytes2word(0,0,0,0)
, useLabel(CT_v387)
,};
Node FN_Prelude_46Read_46Prelude_46Ordering[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v386)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v385)
,	/* CT_v387: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Ordering[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Ordering))
, useLabel(PS_v384)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Read_46Prelude_46Ordering_46readsPrec)
, useLabel(CF_Prelude_46Read_46Prelude_46Ordering_46readList)
,};
Node PP_Prelude_46Read_46Prelude_46Ordering[] = {
 };
Node PC_Prelude_46Read_46Prelude_46Ordering[] = {
 	/* ST_v385: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,0,0,0)
,};
Node PP_Prelude_46Read_46Prelude_46Ordering_46readList[] = {
 };
Node PC_Prelude_46Read_46Prelude_46Ordering_46readList[] = {
 	/* ST_v381: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,46,114,101)
, bytes2word(97,100,76,105)
, bytes2word(115,116,0,0)
,};
Node PP_Prelude_46Read_46Prelude_46Ordering_46readsPrec[] = {
 };
Node PC_Prelude_46Read_46Prelude_46Ordering_46readsPrec[] = {
 	/* ST_v257: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,46,114,101)
, bytes2word(97,100,115,80)
,	/* PP_LAMBDA254: (byte 4) */
 	/* PC_LAMBDA254: (byte 4) */
 	/* ST_v263: (byte 4) */
  bytes2word(114,101,99,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,46,114,101)
, bytes2word(97,100,115,80)
, bytes2word(114,101,99,58)
, bytes2word(53,58,50,48)
, bytes2word(45,55,58,53)
,	/* PP_LAMBDA251: (byte 2) */
 	/* PC_LAMBDA251: (byte 2) */
 	/* ST_v369: (byte 2) */
  bytes2word(51,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,101,114)
, bytes2word(105,110,103,46)
, bytes2word(114,101,97,100)
, bytes2word(115,80,114,101)
, bytes2word(99,58,53,58)
, bytes2word(50,54,45,53)
,	/* PP_LAMBDA252: (byte 4) */
 	/* PC_LAMBDA252: (byte 4) */
 	/* ST_v333: (byte 4) */
  bytes2word(58,53,51,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,46,114,101)
, bytes2word(97,100,115,80)
, bytes2word(114,101,99,58)
, bytes2word(54,58,50,54)
, bytes2word(45,54,58,53)
,	/* PP_LAMBDA253: (byte 2) */
 	/* PC_LAMBDA253: (byte 2) */
 	/* ST_v297: (byte 2) */
  bytes2word(51,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,101,114)
, bytes2word(105,110,103,46)
, bytes2word(114,101,97,100)
, bytes2word(115,80,114,101)
, bytes2word(99,58,55,58)
, bytes2word(50,54,45,55)
, bytes2word(58,53,51,0)
,	/* PS_v260: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Ordering_46readsPrec)
, useLabel(PC_Prelude_46readParen)
,	/* PS_v258: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Ordering_46readsPrec)
, useLabel(PC_Prelude_46False)
,	/* PS_v256: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Ordering_46readsPrec)
, useLabel(PC_Prelude_46Read_46Prelude_46Ordering_46readsPrec)
,	/* PS_v259: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Ordering_46readsPrec)
, useLabel(PC_LAMBDA254)
,	/* PS_v382: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Ordering_46readList)
, useLabel(PC_Prelude_46_95_46readList)
,	/* PS_v380: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Ordering_46readList)
, useLabel(PC_Prelude_46Read_46Prelude_46Ordering_46readList)
,	/* PS_v384: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Ordering)
, useLabel(PC_Prelude_46Read_46Prelude_46Ordering)
,	/* PS_v386: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Ordering)
, useLabel(PC_Prelude_462)
,	/* PS_v377: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA251)
, useLabel(PC_Prelude_462)
,	/* PS_v376: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA251)
, useLabel(PC_Prelude_46LT)
,	/* PS_v378: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA251)
, useLabel(PC_Prelude_46_58)
,	/* PS_v368: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA251)
, useLabel(PC_LAMBDA251)
,	/* PS_v341: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA252)
, useLabel(PC_Prelude_462)
,	/* PS_v340: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA252)
, useLabel(PC_Prelude_46EQ)
,	/* PS_v342: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA252)
, useLabel(PC_Prelude_46_58)
,	/* PS_v332: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA252)
, useLabel(PC_LAMBDA252)
,	/* PS_v305: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA253)
, useLabel(PC_Prelude_462)
,	/* PS_v304: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA253)
, useLabel(PC_Prelude_46GT)
,	/* PS_v306: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA253)
, useLabel(PC_Prelude_46_58)
,	/* PS_v296: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA253)
, useLabel(PC_LAMBDA253)
,	/* PS_v265: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA254)
, useLabel(PC_Prelude_46lex)
,	/* PS_v270: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA254)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v267: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA254)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v266: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA254)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v264: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA254)
, useLabel(PC_LAMBDA251)
,	/* PS_v268: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA254)
, useLabel(PC_LAMBDA252)
,	/* PS_v269: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA254)
, useLabel(PC_LAMBDA253)
,	/* PS_v262: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA254)
, useLabel(PC_LAMBDA254)
,};
