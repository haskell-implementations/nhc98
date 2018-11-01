#include "newmacros.h"
#include "runtime.h"

#define CT_v331	((void*)startLabel+32)
#define FN_LAMBDA326	((void*)startLabel+60)
#define CT_v332	((void*)startLabel+92)
#define F0_LAMBDA326	((void*)startLabel+100)
#define FN_LAMBDA325	((void*)startLabel+128)
#define v346	((void*)startLabel+142)
#define v340	((void*)startLabel+146)
#define v347	((void*)startLabel+160)
#define v344	((void*)startLabel+164)
#define v341	((void*)startLabel+183)
#define v337	((void*)startLabel+188)
#define v333	((void*)startLabel+193)
#define CT_v348	((void*)startLabel+200)
#define F0_LAMBDA325	((void*)startLabel+208)
#define FN_LAMBDA324	((void*)startLabel+240)
#define CT_v352	((void*)startLabel+276)
#define F0_LAMBDA324	((void*)startLabel+284)
#define FN_Prelude_46Prelude_46176_46readl	((void*)startLabel+296)
#define v370	((void*)startLabel+306)
#define v356	((void*)startLabel+310)
#define v371	((void*)startLabel+328)
#define v360	((void*)startLabel+332)
#define v361	((void*)startLabel+348)
#define v372	((void*)startLabel+358)
#define v365	((void*)startLabel+362)
#define v373	((void*)startLabel+376)
#define v369	((void*)startLabel+380)
#define v366	((void*)startLabel+385)
#define v357	((void*)startLabel+390)
#define v353	((void*)startLabel+395)
#define CT_v374	((void*)startLabel+436)
#define F0_Prelude_46Prelude_46176_46readl	((void*)startLabel+444)
#define FN_LAMBDA323	((void*)startLabel+480)
#define CT_v378	((void*)startLabel+512)
#define F0_LAMBDA323	((void*)startLabel+520)
#define FN_LAMBDA322	((void*)startLabel+552)
#define CT_v382	((void*)startLabel+592)
#define F0_LAMBDA322	((void*)startLabel+600)
#define FN_LAMBDA321	((void*)startLabel+612)
#define CT_v384	((void*)startLabel+632)
#define CF_LAMBDA321	((void*)startLabel+640)
#define CT_v385	((void*)startLabel+680)
#define FN_LAMBDA329	((void*)startLabel+708)
#define CT_v386	((void*)startLabel+740)
#define F0_LAMBDA329	((void*)startLabel+748)
#define FN_LAMBDA328	((void*)startLabel+776)
#define v400	((void*)startLabel+790)
#define v394	((void*)startLabel+794)
#define v401	((void*)startLabel+808)
#define v398	((void*)startLabel+812)
#define v395	((void*)startLabel+827)
#define v391	((void*)startLabel+832)
#define v387	((void*)startLabel+837)
#define CT_v402	((void*)startLabel+844)
#define F0_LAMBDA328	((void*)startLabel+852)
#define FN_LAMBDA327	((void*)startLabel+880)
#define v420	((void*)startLabel+894)
#define v410	((void*)startLabel+898)
#define v421	((void*)startLabel+912)
#define v414	((void*)startLabel+916)
#define v422	((void*)startLabel+926)
#define v418	((void*)startLabel+930)
#define v411	((void*)startLabel+944)
#define v407	((void*)startLabel+949)
#define v403	((void*)startLabel+954)
#define CT_v423	((void*)startLabel+972)
#define F0_LAMBDA327	((void*)startLabel+980)
#define CT_v424	((void*)startLabel+1012)
#define ST_v383	((void*)startLabel+1032)
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Char_46readLitChar[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v331)
,};
Node FN_Prelude_46Read_46Prelude_46Char_46readList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v331: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Char_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Char_46readList))
, CAPTAG(useLabel(FN_LAMBDA326),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(1,0,0,1)
, useLabel(CT_v332)
,	/* FN_LAMBDA326: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v332: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA326: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA326),1)
, CAPTAG(useLabel(FN_LAMBDA325),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v348)
,	/* FN_LAMBDA325: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v346: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v340: (byte 2) */
  bytes2word(44,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(34),BOT(34))
,	/* v347: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v344: (byte 4) */
  bytes2word(POP_I1,JUMP,21,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_P1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1,2)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
,	/* v341: (byte 3) */
  bytes2word(HEAP_ARG,2,RETURN_EVAL,POP_P1)
,	/* v337: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v333: (byte 1) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v348: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA325: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA325),2)
, CAPTAG(useLabel(FN_LAMBDA324),2)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46176_46readl),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v352)
,	/* FN_LAMBDA324: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v352: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA324: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA324),3)
, bytes2word(1,0,0,1)
, useLabel(CT_v374)
,	/* FN_Prelude_46Prelude_46176_46readl: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v370: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v356: (byte 2) */
  bytes2word(87,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,2,TOP(34),BOT(34))
, bytes2word(TOP(14),BOT(14),TOP(92),BOT(92))
,	/* v371: (byte 4) */
  bytes2word(TOP(30),BOT(30),TOP(10),BOT(10))
,	/* v360: (byte 4) */
  bytes2word(POP_I1,JUMP,60,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,2,HEAP_I1,HEAP_CVAL_N1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1)
,	/* v361: (byte 4) */
  bytes2word(5,HEAP_OFF_N1,3,RETURN)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v372: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v365: (byte 2) */
  bytes2word(30,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(38),BOT(38))
,	/* v373: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v369: (byte 4) */
  bytes2word(POP_I1,JUMP,7,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_I2)
,	/* v366: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v357: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v353: (byte 3) */
  bytes2word(JUMP,2,0,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_N1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
,	/* CT_v374: (byte 0) */
  HW(5,1)
, 0
,	/* F0_Prelude_46Prelude_46176_46readl: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46176_46readl),1)
, VAPTAG(useLabel(FN_LAMBDA321))
, VAPTAG(useLabel(FN_Prelude_46Prelude_46176_46readl))
, CAPTAG(useLabel(FN_LAMBDA323),2)
, VAPTAG(useLabel(FN_Char_46readLitChar))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v378)
,	/* FN_LAMBDA323: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v378: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA323: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA323),2)
, CAPTAG(useLabel(FN_LAMBDA322),2)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46176_46readl),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v382)
,	/* FN_LAMBDA322: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(1,2,0)
,	/* CT_v382: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA322: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA322),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v384)
,	/* FN_LAMBDA321: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v383)
,	/* CT_v384: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA321: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA321))
, bytes2word(1,0,0,1)
, useLabel(CT_v385)
,};
Node FN_Prelude_46Read_46Prelude_46Char_46readsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v385: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Char_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Char_46readsPrec),1)
, CAPTAG(useLabel(FN_LAMBDA329),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(1,0,0,1)
, useLabel(CT_v386)
,	/* FN_LAMBDA329: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v386: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA329: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA329),1)
, CAPTAG(useLabel(FN_LAMBDA328),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v402)
,	/* FN_LAMBDA328: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v400: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v394: (byte 2) */
  bytes2word(40,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(39),BOT(39))
,	/* v401: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v398: (byte 4) */
  bytes2word(POP_I1,JUMP,17,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_P1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
,	/* v395: (byte 3) */
  bytes2word(HEAP_ARG,2,RETURN_EVAL,POP_P1)
,	/* v391: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v387: (byte 1) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v402: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA328: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA328),2)
, CAPTAG(useLabel(FN_LAMBDA327),2)
, VAPTAG(useLabel(FN_Char_46readLitChar))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v423)
,	/* FN_LAMBDA327: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v420: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v410: (byte 2) */
  bytes2word(53,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(39),BOT(39))
,	/* v421: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v414: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v422: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v418: (byte 2) */
  bytes2word(16,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I2,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_OFF_N1)
,	/* v411: (byte 4) */
  bytes2word(4,HEAP_ARG,3,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v407: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v403: (byte 2) */
  bytes2word(2,0,PUSH_ARG_I3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v423: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA327: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA327),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v424)
,};
Node FN_Prelude_46Read_46Prelude_46Char[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v424: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Char[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Char))
, useLabel(F0_Prelude_46Read_46Prelude_46Char_46readsPrec)
, useLabel(CF_Prelude_46Read_46Prelude_46Char_46readList)
,	/* ST_v383: (byte 0) */
  bytes2word(0,0,0,0)
,};
