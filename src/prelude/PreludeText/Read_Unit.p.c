#include "newmacros.h"
#include "runtime.h"

#define CT_v226	((void*)startLabel+132)
#define FN_LAMBDA219	((void*)startLabel+176)
#define CT_v233	((void*)startLabel+332)
#define F0_LAMBDA219	((void*)startLabel+340)
#define FN_LAMBDA218	((void*)startLabel+384)
#define v253	((void*)startLabel+398)
#define v241	((void*)startLabel+402)
#define v254	((void*)startLabel+416)
#define v245	((void*)startLabel+420)
#define v255	((void*)startLabel+430)
#define v249	((void*)startLabel+434)
#define v242	((void*)startLabel+466)
#define v238	((void*)startLabel+471)
#define v234	((void*)startLabel+476)
#define CT_v259	((void*)startLabel+556)
#define F0_LAMBDA218	((void*)startLabel+564)
#define FN_LAMBDA217	((void*)startLabel+608)
#define v278	((void*)startLabel+622)
#define v267	((void*)startLabel+626)
#define v279	((void*)startLabel+640)
#define v271	((void*)startLabel+644)
#define v280	((void*)startLabel+654)
#define v275	((void*)startLabel+658)
#define v268	((void*)startLabel+690)
#define v264	((void*)startLabel+695)
#define v260	((void*)startLabel+700)
#define CT_v284	((void*)startLabel+836)
#define F0_LAMBDA217	((void*)startLabel+844)
#define CT_v288	((void*)startLabel+924)
#define CT_v292	((void*)startLabel+1036)
#define ST_v290	((void*)startLabel+1072)
#define ST_v286	((void*)startLabel+1088)
#define ST_v222	((void*)startLabel+1116)
#define PP_LAMBDA219	((void*)startLabel+1142)
#define PC_LAMBDA219	((void*)startLabel+1142)
#define ST_v228	((void*)startLabel+1142)
#define PP_LAMBDA217	((void*)startLabel+1178)
#define PC_LAMBDA217	((void*)startLabel+1178)
#define PP_LAMBDA218	((void*)startLabel+1178)
#define PC_LAMBDA218	((void*)startLabel+1178)
#define ST_v251	((void*)startLabel+1178)
#define PS_v225	((void*)startLabel+1216)
#define PS_v223	((void*)startLabel+1228)
#define PS_v221	((void*)startLabel+1240)
#define PS_v224	((void*)startLabel+1252)
#define PS_v287	((void*)startLabel+1264)
#define PS_v285	((void*)startLabel+1276)
#define PS_v289	((void*)startLabel+1288)
#define PS_v291	((void*)startLabel+1300)
#define PS_v282	((void*)startLabel+1312)
#define PS_v281	((void*)startLabel+1324)
#define PS_v283	((void*)startLabel+1336)
#define PS_v276	((void*)startLabel+1348)
#define PS_v257	((void*)startLabel+1360)
#define PS_v258	((void*)startLabel+1372)
#define PS_v256	((void*)startLabel+1384)
#define PS_v250	((void*)startLabel+1396)
#define PS_v230	((void*)startLabel+1408)
#define PS_v232	((void*)startLabel+1420)
#define PS_v231	((void*)startLabel+1432)
#define PS_v229	((void*)startLabel+1444)
#define PS_v227	((void*)startLabel+1456)
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46_40_41[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46readParen[];
extern Node PC_Prelude_46False[];
extern Node PC_Prelude_46_95_46readList[];
extern Node PC_Prelude_462[];
extern Node PC__40_41[];
extern Node PC_Prelude_46_58[];
extern Node PC_Prelude_46lex[];
extern Node PC_Prelude_46_95foldr[];
extern Node PC_Prelude_46_91_93[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v226)
,};
Node FN_Prelude_46Read_46_40_41_46readsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,15,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v225)
, 0
, 0
, 0
, 0
, useLabel(PS_v224)
, 0
, 0
, 0
, 0
, useLabel(PS_v223)
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
, useLabel(ST_v222)
,	/* CT_v226: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46_40_41_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46_40_41_46readsPrec),1)
, useLabel(PS_v221)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA219),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(1,0,0,1)
, useLabel(CT_v233)
,	/* FN_LAMBDA219: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v232)
, 0
, 0
, 0
, 0
, useLabel(PS_v231)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v230)
, 0
, 0
, 0
, 0
, useLabel(PS_v229)
, 0
, 0
, 0
, 0
, 50020
, useLabel(ST_v228)
,	/* CT_v233: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA219: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA219),1)
, useLabel(PS_v227)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA218),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v259)
,	/* FN_LAMBDA218: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v253: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v241: (byte 2) */
  bytes2word(71,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(40),BOT(40))
,	/* v254: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v245: (byte 4) */
  bytes2word(POP_I1,JUMP,48,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v255: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v249: (byte 2) */
  bytes2word(34,0,POP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(16,HEAP_OFF_N1,12,HEAP_ARG)
,	/* v242: (byte 2) */
  bytes2word(2,RETURN_EVAL,POP_P1,2)
,	/* v238: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v234: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v258)
, 0
, 0
, 0
, 0
, useLabel(PS_v257)
, 0
, 0
, 0
, 0
, useLabel(PS_v256)
, 0
, 0
, 0
, 0
, 50026
, useLabel(ST_v251)
,	/* CT_v259: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA218: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA218),2)
, useLabel(PS_v250)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA217),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v284)
,	/* FN_LAMBDA217: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v278: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v267: (byte 2) */
  bytes2word(71,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(41),BOT(41))
,	/* v279: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v271: (byte 4) */
  bytes2word(POP_I1,JUMP,48,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v280: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v275: (byte 2) */
  bytes2word(34,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,HEAP_ARG)
,	/* v268: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v264: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v260: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v283)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v282)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v281)
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
, useLabel(ST_v251)
,	/* CT_v284: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA217: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA217),2)
, useLabel(PS_v276)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v288)
,};
Node FN_Prelude_46Read_46_40_41_46readList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v287)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v286)
,	/* CT_v288: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46_40_41_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46_40_41_46readList))
, useLabel(PS_v285)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46_40_41)
, bytes2word(0,0,0,0)
, useLabel(CT_v292)
,};
Node FN_Prelude_46Read_46_40_41[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v291)
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
, useLabel(ST_v290)
,	/* CT_v292: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46_40_41[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46_40_41))
, useLabel(PS_v289)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Read_46_40_41_46readsPrec)
, useLabel(CF_Prelude_46Read_46_40_41_46readList)
,};
Node PP_Prelude_46Read_46_40_41[] = {
 };
Node PC_Prelude_46Read_46_40_41[] = {
 	/* ST_v290: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,40,41,0)
,};
Node PP_Prelude_46Read_46_40_41_46readList[] = {
 };
Node PC_Prelude_46Read_46_40_41_46readList[] = {
 	/* ST_v286: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,40,41,46)
, bytes2word(114,101,97,100)
, bytes2word(76,105,115,116)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Read_46_40_41_46readsPrec[] = {
 };
Node PC_Prelude_46Read_46_40_41_46readsPrec[] = {
 	/* ST_v222: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,40,41,46)
, bytes2word(114,101,97,100)
, bytes2word(115,80,114,101)
,	/* PP_LAMBDA219: (byte 2) */
 	/* PC_LAMBDA219: (byte 2) */
 	/* ST_v228: (byte 2) */
  bytes2word(99,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,100,46,40)
, bytes2word(41,46,114,101)
, bytes2word(97,100,115,80)
, bytes2word(114,101,99,58)
, bytes2word(53,58,50,48)
, bytes2word(45,54,58,53)
,	/* PP_LAMBDA217: (byte 2) */
 	/* PC_LAMBDA217: (byte 2) */
 	/* PP_LAMBDA218: (byte 2) */
 	/* PC_LAMBDA218: (byte 2) */
 	/* ST_v251: (byte 2) */
  bytes2word(51,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,100,46,40)
, bytes2word(41,46,114,101)
, bytes2word(97,100,115,80)
, bytes2word(114,101,99,58)
, bytes2word(53,58,50,54)
, bytes2word(45,54,58,53)
, bytes2word(51,0,0,0)
,	/* PS_v225: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46_40_41_46readsPrec)
, useLabel(PC_Prelude_46readParen)
,	/* PS_v223: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46_40_41_46readsPrec)
, useLabel(PC_Prelude_46False)
,	/* PS_v221: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46_40_41_46readsPrec)
, useLabel(PC_Prelude_46Read_46_40_41_46readsPrec)
,	/* PS_v224: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46_40_41_46readsPrec)
, useLabel(PC_LAMBDA219)
,	/* PS_v287: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46_40_41_46readList)
, useLabel(PC_Prelude_46_95_46readList)
,	/* PS_v285: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46_40_41_46readList)
, useLabel(PC_Prelude_46Read_46_40_41_46readList)
,	/* PS_v289: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46_40_41)
, useLabel(PC_Prelude_46Read_46_40_41)
,	/* PS_v291: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46_40_41)
, useLabel(PC_Prelude_462)
,	/* PS_v282: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA217)
, useLabel(PC_Prelude_462)
,	/* PS_v281: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA217)
, useLabel(PC__40_41)
,	/* PS_v283: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA217)
, useLabel(PC_Prelude_46_58)
,	/* PS_v276: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA217)
, useLabel(PC_LAMBDA217)
,	/* PS_v257: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA218)
, useLabel(PC_Prelude_46lex)
,	/* PS_v258: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA218)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v256: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA218)
, useLabel(PC_LAMBDA217)
,	/* PS_v250: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA218)
, useLabel(PC_LAMBDA218)
,	/* PS_v230: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA219)
, useLabel(PC_Prelude_46lex)
,	/* PS_v232: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA219)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v231: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA219)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v229: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA219)
, useLabel(PC_LAMBDA218)
,	/* PS_v227: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA219)
, useLabel(PC_LAMBDA219)
,};
