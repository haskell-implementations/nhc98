#include "newmacros.h"
#include "runtime.h"

#define CT_v272	((void*)startLabel+172)
#define FN_Numeric_46Prelude_46162_46read_39	((void*)startLabel+224)
#define CT_v282	((void*)startLabel+472)
#define F0_Numeric_46Prelude_46162_46read_39	((void*)startLabel+480)
#define FN_LAMBDA264	((void*)startLabel+540)
#define v302	((void*)startLabel+554)
#define v290	((void*)startLabel+558)
#define v303	((void*)startLabel+572)
#define v294	((void*)startLabel+576)
#define v304	((void*)startLabel+586)
#define v298	((void*)startLabel+590)
#define v291	((void*)startLabel+635)
#define v287	((void*)startLabel+640)
#define v283	((void*)startLabel+645)
#define CT_v309	((void*)startLabel+744)
#define F0_LAMBDA264	((void*)startLabel+752)
#define FN_LAMBDA263	((void*)startLabel+800)
#define CT_v318	((void*)startLabel+984)
#define F0_LAMBDA263	((void*)startLabel+992)
#define FN_Numeric_46Prelude_46163_46read_39_39	((void*)startLabel+1032)
#define CT_v325	((void*)startLabel+1192)
#define F0_Numeric_46Prelude_46163_46read_39_39	((void*)startLabel+1200)
#define FN_LAMBDA262	((void*)startLabel+1244)
#define CT_v334	((void*)startLabel+1364)
#define F0_LAMBDA262	((void*)startLabel+1372)
#define FN_LAMBDA261	((void*)startLabel+1416)
#define v345	((void*)startLabel+1430)
#define v342	((void*)startLabel+1434)
#define v339	((void*)startLabel+1459)
#define v335	((void*)startLabel+1464)
#define CT_v348	((void*)startLabel+1560)
#define F0_LAMBDA261	((void*)startLabel+1568)
#define ST_v267	((void*)startLabel+1588)
#define PP_Numeric_46Prelude_46162_46read_39	((void*)startLabel+1607)
#define PC_Numeric_46Prelude_46162_46read_39	((void*)startLabel+1607)
#define ST_v274	((void*)startLabel+1607)
#define PP_LAMBDA263	((void*)startLabel+1636)
#define PC_LAMBDA263	((void*)startLabel+1636)
#define PP_LAMBDA264	((void*)startLabel+1636)
#define PC_LAMBDA264	((void*)startLabel+1636)
#define ST_v300	((void*)startLabel+1636)
#define PP_Numeric_46Prelude_46163_46read_39_39	((void*)startLabel+1665)
#define PC_Numeric_46Prelude_46163_46read_39_39	((void*)startLabel+1665)
#define ST_v320	((void*)startLabel+1665)
#define PP_LAMBDA261	((void*)startLabel+1695)
#define PC_LAMBDA261	((void*)startLabel+1695)
#define PP_LAMBDA262	((void*)startLabel+1695)
#define PC_LAMBDA262	((void*)startLabel+1695)
#define ST_v329	((void*)startLabel+1695)
#define PS_v271	((void*)startLabel+1728)
#define PS_v269	((void*)startLabel+1740)
#define PS_v266	((void*)startLabel+1752)
#define PS_v270	((void*)startLabel+1764)
#define PS_v268	((void*)startLabel+1776)
#define PS_v276	((void*)startLabel+1788)
#define PS_v278	((void*)startLabel+1800)
#define PS_v281	((void*)startLabel+1812)
#define PS_v280	((void*)startLabel+1824)
#define PS_v279	((void*)startLabel+1836)
#define PS_v273	((void*)startLabel+1848)
#define PS_v275	((void*)startLabel+1860)
#define PS_v277	((void*)startLabel+1872)
#define PS_v322	((void*)startLabel+1884)
#define PS_v324	((void*)startLabel+1896)
#define PS_v323	((void*)startLabel+1908)
#define PS_v319	((void*)startLabel+1920)
#define PS_v321	((void*)startLabel+1932)
#define PS_v346	((void*)startLabel+1944)
#define PS_v347	((void*)startLabel+1956)
#define PS_v343	((void*)startLabel+1968)
#define PS_v332	((void*)startLabel+1980)
#define PS_v333	((void*)startLabel+1992)
#define PS_v331	((void*)startLabel+2004)
#define PS_v328	((void*)startLabel+2016)
#define PS_v315	((void*)startLabel+2028)
#define PS_v316	((void*)startLabel+2040)
#define PS_v314	((void*)startLabel+2052)
#define PS_v317	((void*)startLabel+2064)
#define PS_v312	((void*)startLabel+2076)
#define PS_v307	((void*)startLabel+2088)
#define PS_v308	((void*)startLabel+2100)
#define PS_v306	((void*)startLabel+2112)
#define PS_v305	((void*)startLabel+2124)
#define PS_v299	((void*)startLabel+2136)
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46readParen[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46negate[];
extern Node PM_Numeric[];
extern Node PC_Prelude_46readParen[];
extern Node PC_Prelude_46False[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46lex[];
extern Node PC_Prelude_46_43_43[];
extern Node PC_Prelude_46_95foldr[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_46_58[];
extern Node PC_Prelude_46negate[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v272)
,};
Node FN_Numeric_46readSigned[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,0,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,17,HEAP_OFF_N1)
, bytes2word(13,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v271)
, 0
, 0
, 0
, 0
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
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v268)
, 0
, 0
, 0
, 0
, 50001
, useLabel(ST_v267)
,	/* CT_v272: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Numeric_46readSigned[] = {
  CAPTAG(useLabel(FN_Numeric_46readSigned),2)
, useLabel(PS_v266)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, CAPTAG(useLabel(FN_Numeric_46Prelude_46162_46read_39),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v282)
,	/* FN_Numeric_46Prelude_46162_46read_39: (byte 0) */
  bytes2word(NEEDHEAP_P1,47,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_N1,27,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(23,HEAP_OFF_N1,17,HEAP_OFF_N1)
, bytes2word(12,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,38,HEAP_OFF_N1)
, bytes2word(14,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v281)
, 0
, 0
, 0
, 0
, useLabel(PS_v280)
, 0
, 0
, 0
, 0
, useLabel(PS_v279)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v278)
, 0
, 0
, 0
, 0
, useLabel(PS_v277)
, 0
, 0
, 0
, 0
, useLabel(PS_v276)
, 0
, 0
, 0
, 0
, useLabel(PS_v275)
, 0
, 0
, 0
, 0
, 60028
, useLabel(ST_v274)
,	/* CT_v282: (byte 0) */
  HW(6,3)
, 0
,	/* F0_Numeric_46Prelude_46162_46read_39: (byte 0) */
  CAPTAG(useLabel(FN_Numeric_46Prelude_46162_46read_39),3)
, useLabel(PS_v273)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Numeric_46Prelude_46163_46read_39_39),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA264),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v309)
,	/* FN_LAMBDA264: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v302: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v290: (byte 2) */
  bytes2word(84,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(45),BOT(45))
,	/* v303: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v294: (byte 4) */
  bytes2word(POP_I1,JUMP,61,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v304: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v298: (byte 2) */
  bytes2word(47,0,POP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,24,HEAP_OFF_N1,13)
,	/* v291: (byte 3) */
  bytes2word(HEAP_ARG,4,RETURN_EVAL,POP_P1)
,	/* v287: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v283: (byte 1) */
  bytes2word(0,PUSH_ARG,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v308)
, 0
, 0
, 0
, 0
, useLabel(PS_v307)
, 0
, 0
, 0
, 0
, useLabel(PS_v306)
, 0
, 0
, 0
, 0
, useLabel(PS_v305)
, 0
, 0
, 0
, 0
, 70039
, useLabel(ST_v300)
,	/* CT_v309: (byte 0) */
  HW(4,4)
, 0
,	/* F0_LAMBDA264: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA264),4)
, useLabel(PS_v299)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA263),2)
, CAPTAG(useLabel(FN_Numeric_46Prelude_46163_46read_39_39),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v318)
,	/* FN_LAMBDA263: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,0,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,27,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,HEAP_ARG,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v317)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v316)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v315)
, 0
, 0
, 0
, 0
, useLabel(PS_v314)
, 0
, 0
, 0
, 0
, 70039
, useLabel(ST_v300)
,	/* CT_v318: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA263: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA263),3)
, useLabel(PS_v312)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46negate))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v325)
,	/* FN_Numeric_46Prelude_46163_46read_39_39: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,22)
, bytes2word(HEAP_OFF_N1,17,HEAP_OFF_N1,12)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v324)
, 0
, 0
, 0
, 0
, useLabel(PS_v323)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v322)
, 0
, 0
, 0
, 0
, useLabel(PS_v321)
, 0
, 0
, 0
, 0
, 90028
, useLabel(ST_v320)
,	/* CT_v325: (byte 0) */
  HW(3,2)
, 0
,	/* F0_Numeric_46Prelude_46163_46read_39_39: (byte 0) */
  CAPTAG(useLabel(FN_Numeric_46Prelude_46163_46read_39_39),2)
, useLabel(PS_v319)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA262),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v334)
,	/* FN_LAMBDA262: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(13,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v333)
, 0
, 0
, 0
, 0
, useLabel(PS_v332)
, 0
, 0
, 0
, 0
, useLabel(PS_v331)
, 0
, 0
, 0
, 0
, 90039
, useLabel(ST_v329)
,	/* CT_v334: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA262: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA262),3)
, useLabel(PS_v328)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA261),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v348)
,	/* FN_LAMBDA261: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v345: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v342: (byte 2) */
  bytes2word(27,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,0)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
,	/* v339: (byte 3) */
  bytes2word(HEAP_ARG,3,RETURN,POP_P1)
,	/* v335: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v347)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v346)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 90039
, useLabel(ST_v329)
,	/* CT_v348: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA261: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA261),3)
, useLabel(PS_v343)
, 0
, 0
, 0
,};
Node PP_Numeric_46readSigned[] = {
 };
Node PC_Numeric_46readSigned[] = {
 	/* ST_v267: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(114,101,97,100)
, bytes2word(83,105,103,110)
,	/* PP_Numeric_46Prelude_46162_46read_39: (byte 3) */
 	/* PC_Numeric_46Prelude_46162_46read_39: (byte 3) */
 	/* ST_v274: (byte 3) */
  bytes2word(101,100,0,78)
, bytes2word(117,109,101,114)
, bytes2word(105,99,46,114)
, bytes2word(101,97,100,83)
, bytes2word(105,103,110,101)
, bytes2word(100,58,54,58)
, bytes2word(50,56,45,56)
,	/* PP_LAMBDA263: (byte 4) */
 	/* PC_LAMBDA263: (byte 4) */
 	/* PP_LAMBDA264: (byte 4) */
 	/* PC_LAMBDA264: (byte 4) */
 	/* ST_v300: (byte 4) */
  bytes2word(58,55,52,0)
, bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(114,101,97,100)
, bytes2word(83,105,103,110)
, bytes2word(101,100,58,55)
, bytes2word(58,51,57,45)
, bytes2word(56,58,55,52)
,	/* PP_Numeric_46Prelude_46163_46read_39_39: (byte 1) */
 	/* PC_Numeric_46Prelude_46163_46read_39_39: (byte 1) */
 	/* ST_v320: (byte 1) */
  bytes2word(0,78,117,109)
, bytes2word(101,114,105,99)
, bytes2word(46,114,101,97)
, bytes2word(100,83,105,103)
, bytes2word(110,101,100,58)
, bytes2word(57,58,50,56)
, bytes2word(45,49,48,58)
,	/* PP_LAMBDA261: (byte 3) */
 	/* PC_LAMBDA261: (byte 3) */
 	/* PP_LAMBDA262: (byte 3) */
 	/* PC_LAMBDA262: (byte 3) */
 	/* ST_v329: (byte 3) */
  bytes2word(55,49,0,78)
, bytes2word(117,109,101,114)
, bytes2word(105,99,46,114)
, bytes2word(101,97,100,83)
, bytes2word(105,103,110,101)
, bytes2word(100,58,57,58)
, bytes2word(51,57,45,49)
, bytes2word(48,58,55,49)
, bytes2word(0,0,0,0)
,	/* PS_v271: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46readSigned)
, useLabel(PC_Prelude_46readParen)
,	/* PS_v269: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46readSigned)
, useLabel(PC_Prelude_46False)
,	/* PS_v266: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46readSigned)
, useLabel(PC_Numeric_46readSigned)
,	/* PS_v270: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46readSigned)
, useLabel(PC_Numeric_46Prelude_46162_46read_39)
,	/* PS_v268: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46readSigned)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v276: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46162_46read_39)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v278: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46162_46read_39)
, useLabel(PC_Prelude_46lex)
,	/* PS_v281: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46162_46read_39)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v280: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46162_46read_39)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v279: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46162_46read_39)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v273: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46162_46read_39)
, useLabel(PC_Numeric_46Prelude_46162_46read_39)
,	/* PS_v275: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46162_46read_39)
, useLabel(PC_Numeric_46Prelude_46163_46read_39_39)
,	/* PS_v277: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46162_46read_39)
, useLabel(PC_LAMBDA264)
,	/* PS_v322: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46163_46read_39_39)
, useLabel(PC_Prelude_46lex)
,	/* PS_v324: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46163_46read_39_39)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v323: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46163_46read_39_39)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v319: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46163_46read_39_39)
, useLabel(PC_Numeric_46Prelude_46163_46read_39_39)
,	/* PS_v321: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46163_46read_39_39)
, useLabel(PC_LAMBDA262)
,	/* PS_v346: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA261)
, useLabel(PC_Prelude_462)
,	/* PS_v347: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA261)
, useLabel(PC_Prelude_46_58)
,	/* PS_v343: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA261)
, useLabel(PC_LAMBDA261)
,	/* PS_v332: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA262)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v333: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA262)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v331: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA262)
, useLabel(PC_LAMBDA261)
,	/* PS_v328: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA262)
, useLabel(PC_LAMBDA262)
,	/* PS_v315: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA263)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v316: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA263)
, useLabel(PC_Prelude_462)
,	/* PS_v314: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA263)
, useLabel(PC_Prelude_46negate)
,	/* PS_v317: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA263)
, useLabel(PC_Prelude_46_58)
,	/* PS_v312: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA263)
, useLabel(PC_LAMBDA263)
,	/* PS_v307: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA264)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v308: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA264)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v306: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA264)
, useLabel(PC_Numeric_46Prelude_46163_46read_39_39)
,	/* PS_v305: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA264)
, useLabel(PC_LAMBDA263)
,	/* PS_v299: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA264)
, useLabel(PC_LAMBDA264)
,};
