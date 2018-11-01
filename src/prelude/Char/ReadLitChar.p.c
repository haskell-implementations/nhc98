#include "newmacros.h"
#include "runtime.h"

#define v453	((void*)startLabel+18)
#define v446	((void*)startLabel+22)
#define v454	((void*)startLabel+36)
#define v450	((void*)startLabel+40)
#define v447	((void*)startLabel+51)
#define v443	((void*)startLabel+81)
#define CT_v461	((void*)startLabel+296)
#define FN_LAMBDA441	((void*)startLabel+344)
#define CT_v465	((void*)startLabel+388)
#define CF_LAMBDA441	((void*)startLabel+396)
#define FN_Char_46Prelude_46173_46readEsc	((void*)startLabel+424)
#define v504	((void*)startLabel+434)
#define v469	((void*)startLabel+438)
#define v505	((void*)startLabel+492)
#define v473	((void*)startLabel+496)
#define v474	((void*)startLabel+527)
#define v475	((void*)startLabel+558)
#define v476	((void*)startLabel+589)
#define v509	((void*)startLabel+600)
#define v480	((void*)startLabel+604)
#define v481	((void*)startLabel+741)
#define v483	((void*)startLabel+746)
#define v484	((void*)startLabel+777)
#define v485	((void*)startLabel+808)
#define v486	((void*)startLabel+839)
#define v487	((void*)startLabel+870)
#define v488	((void*)startLabel+901)
#define v489	((void*)startLabel+932)
#define v470	((void*)startLabel+963)
#define v490	((void*)startLabel+1026)
#define v521	((void*)startLabel+1040)
#define v495	((void*)startLabel+1044)
#define v496	((void*)startLabel+1093)
#define v492	((void*)startLabel+1142)
#define v500	((void*)startLabel+1226)
#define v501	((void*)startLabel+1236)
#define v497	((void*)startLabel+1257)
#define v466	((void*)startLabel+1262)
#define CT_v530	((void*)startLabel+1764)
#define F0_Char_46Prelude_46173_46readEsc	((void*)startLabel+1772)
#define FN_LAMBDA440	((void*)startLabel+1884)
#define CT_v542	((void*)startLabel+2128)
#define F0_LAMBDA440	((void*)startLabel+2136)
#define FN_LAMBDA439	((void*)startLabel+2188)
#define v553	((void*)startLabel+2204)
#define v550	((void*)startLabel+2208)
#define v547	((void*)startLabel+2232)
#define v543	((void*)startLabel+2237)
#define CT_v556	((void*)startLabel+2332)
#define F0_LAMBDA439	((void*)startLabel+2340)
#define FN_LAMBDA438	((void*)startLabel+2368)
#define CT_v560	((void*)startLabel+2412)
#define CF_LAMBDA438	((void*)startLabel+2420)
#define FN_LAMBDA437	((void*)startLabel+2452)
#define CT_v570	((void*)startLabel+2632)
#define F0_LAMBDA437	((void*)startLabel+2640)
#define FN_LAMBDA436	((void*)startLabel+2680)
#define CT_v580	((void*)startLabel+2860)
#define F0_LAMBDA436	((void*)startLabel+2868)
#define FN_LAMBDA435	((void*)startLabel+2908)
#define CT_v590	((void*)startLabel+3088)
#define F0_LAMBDA435	((void*)startLabel+3096)
#define FN_Char_46Prelude_46174_46match	((void*)startLabel+3136)
#define v603	((void*)startLabel+3146)
#define v594	((void*)startLabel+3150)
#define v604	((void*)startLabel+3162)
#define v598	((void*)startLabel+3166)
#define v599	((void*)startLabel+3205)
#define v595	((void*)startLabel+3210)
#define v591	((void*)startLabel+3215)
#define CT_v607	((void*)startLabel+3320)
#define F0_Char_46Prelude_46174_46match	((void*)startLabel+3328)
#define ST_v452	((void*)startLabel+3356)
#define PP_LAMBDA441	((void*)startLabel+3373)
#define PC_LAMBDA441	((void*)startLabel+3373)
#define ST_v463	((void*)startLabel+3373)
#define PP_Char_46Prelude_46173_46readEsc	((void*)startLabel+3401)
#define PC_Char_46Prelude_46173_46readEsc	((void*)startLabel+3401)
#define ST_v503	((void*)startLabel+3401)
#define PP_LAMBDA435	((void*)startLabel+3429)
#define PC_LAMBDA435	((void*)startLabel+3429)
#define ST_v584	((void*)startLabel+3429)
#define PP_LAMBDA436	((void*)startLabel+3458)
#define PC_LAMBDA436	((void*)startLabel+3458)
#define ST_v574	((void*)startLabel+3458)
#define PP_LAMBDA437	((void*)startLabel+3487)
#define PC_LAMBDA437	((void*)startLabel+3487)
#define ST_v564	((void*)startLabel+3487)
#define PP_LAMBDA438	((void*)startLabel+3516)
#define PC_LAMBDA438	((void*)startLabel+3516)
#define ST_v558	((void*)startLabel+3516)
#define PP_LAMBDA439	((void*)startLabel+3545)
#define PC_LAMBDA439	((void*)startLabel+3545)
#define PP_LAMBDA440	((void*)startLabel+3545)
#define PC_LAMBDA440	((void*)startLabel+3545)
#define ST_v534	((void*)startLabel+3545)
#define PP_Char_46Prelude_46174_46match	((void*)startLabel+3574)
#define PC_Char_46Prelude_46174_46match	((void*)startLabel+3574)
#define ST_v602	((void*)startLabel+3574)
#define ST_v464	((void*)startLabel+3602)
#define ST_v559	((void*)startLabel+3657)
#define PS_v460	((void*)startLabel+3664)
#define PS_v456	((void*)startLabel+3676)
#define PS_v457	((void*)startLabel+3688)
#define PS_v458	((void*)startLabel+3700)
#define PS_v451	((void*)startLabel+3712)
#define PS_v455	((void*)startLabel+3724)
#define PS_v459	((void*)startLabel+3736)
#define PS_v519	((void*)startLabel+3748)
#define PS_v514	((void*)startLabel+3760)
#define PS_v526	((void*)startLabel+3772)
#define PS_v513	((void*)startLabel+3784)
#define PS_v523	((void*)startLabel+3796)
#define PS_v517	((void*)startLabel+3808)
#define PS_v525	((void*)startLabel+3820)
#define PS_v515	((void*)startLabel+3832)
#define PS_v520	((void*)startLabel+3844)
#define PS_v512	((void*)startLabel+3856)
#define PS_v506	((void*)startLabel+3868)
#define PS_v507	((void*)startLabel+3880)
#define PS_v508	((void*)startLabel+3892)
#define PS_v502	((void*)startLabel+3904)
#define PS_v510	((void*)startLabel+3916)
#define PS_v511	((void*)startLabel+3928)
#define PS_v516	((void*)startLabel+3940)
#define PS_v518	((void*)startLabel+3952)
#define PS_v522	((void*)startLabel+3964)
#define PS_v524	((void*)startLabel+3976)
#define PS_v527	((void*)startLabel+3988)
#define PS_v528	((void*)startLabel+4000)
#define PS_v606	((void*)startLabel+4012)
#define PS_v605	((void*)startLabel+4024)
#define PS_v601	((void*)startLabel+4036)
#define PS_v586	((void*)startLabel+4048)
#define PS_v587	((void*)startLabel+4060)
#define PS_v588	((void*)startLabel+4072)
#define PS_v589	((void*)startLabel+4084)
#define PS_v583	((void*)startLabel+4096)
#define PS_v576	((void*)startLabel+4108)
#define PS_v577	((void*)startLabel+4120)
#define PS_v578	((void*)startLabel+4132)
#define PS_v579	((void*)startLabel+4144)
#define PS_v573	((void*)startLabel+4156)
#define PS_v566	((void*)startLabel+4168)
#define PS_v567	((void*)startLabel+4180)
#define PS_v568	((void*)startLabel+4192)
#define PS_v569	((void*)startLabel+4204)
#define PS_v563	((void*)startLabel+4216)
#define PS_v557	((void*)startLabel+4228)
#define PS_v554	((void*)startLabel+4240)
#define PS_v555	((void*)startLabel+4252)
#define PS_v551	((void*)startLabel+4264)
#define PS_v538	((void*)startLabel+4276)
#define PS_v541	((void*)startLabel+4288)
#define PS_v539	((void*)startLabel+4300)
#define PS_v540	((void*)startLabel+4312)
#define PS_v537	((void*)startLabel+4324)
#define PS_v536	((void*)startLabel+4336)
#define PS_v533	((void*)startLabel+4348)
#define PS_v462	((void*)startLabel+4360)
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_62_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_60_61[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Char_46chr[];
extern Node FN_Char_46ord[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node FN_Char_46isDigit[];
extern Node FN_Numeric_46readDec[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Numeric_46readOct[];
extern Node FN_Numeric_46readHex[];
extern Node FN_Char_46isUpper[];
extern Node CF_Char_46asciiTab[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node FN_Prelude_46_61_61[];
extern Node PM_Char[];
extern Node PC_NHC_46Internal_46_95patternMatchFail[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_58[];
extern Node PC_Numeric_46readDec[];
extern Node PC_Char_46ord[];
extern Node PC_Char_46isUpper[];
extern Node PC_Char_46chr[];
extern Node PC_Numeric_46readOct[];
extern Node PC_Char_46isDigit[];
extern Node PC_Numeric_46readHex[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46_95foldr[];
extern Node PC_Prelude_46_38_38[];
extern Node PC_Prelude_46Ord_46Prelude_46Char_46_62_61[];
extern Node PC_Prelude_46Ord_46Prelude_46Char_46_60_61[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node PC_Prelude_46_61_61[];
extern Node PC_NHC_46Internal_46_95apply3[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v461)
,};
Node FN_Char_46readLitChar[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v453: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v446: (byte 2) */
  bytes2word(61,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(92),BOT(92))
,	/* v454: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v450: (byte 4) */
  bytes2word(POP_I1,JUMP,13,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
,	/* v447: (byte 3) */
  bytes2word(HEAP_SPACE,HEAP_I2,RETURN_EVAL,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,0)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,32,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,17,HEAP_OFF_N1,11)
,	/* v443: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v460)
, 0
, 0
, 0
, 0
, useLabel(PS_v459)
, 0
, 0
, 0
, 0
, useLabel(PS_v458)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v457)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v456)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v455)
, 0
, 0
, 0
, 0
, 140001
, useLabel(ST_v452)
,	/* CT_v461: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Char_46readLitChar[] = {
  CAPTAG(useLabel(FN_Char_46readLitChar),1)
, useLabel(PS_v451)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Char_46Prelude_46173_46readEsc))
, VAPTAG(useLabel(FN_LAMBDA441))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v465)
,	/* FN_LAMBDA441: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v464)
, 140001
, useLabel(ST_v463)
,	/* CT_v465: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA441: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA441))
, useLabel(PS_v462)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v530)
,	/* FN_Char_46Prelude_46173_46readEsc: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v504: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v469: (byte 2) */
  bytes2word(58,3,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,11,TOP(34),BOT(34))
, bytes2word(TOP(50),BOT(50),TOP(39),BOT(39))
, bytes2word(TOP(81),BOT(81),TOP(92),BOT(92))
, bytes2word(TOP(112),BOT(112),TOP(94),BOT(94))
, bytes2word(TOP(143),BOT(143),TOP(97),BOT(97))
, bytes2word(TOP(300),BOT(300),TOP(98),BOT(98))
, bytes2word(TOP(331),BOT(331),TOP(102),BOT(102))
, bytes2word(TOP(362),BOT(362),TOP(110),BOT(110))
, bytes2word(TOP(393),BOT(393),TOP(114),BOT(114))
, bytes2word(TOP(424),BOT(424),TOP(116),BOT(116))
, bytes2word(TOP(455),BOT(455),TOP(118),BOT(118))
,	/* v505: (byte 4) */
  bytes2word(TOP(486),BOT(486),TOP(46),BOT(46))
,	/* v473: (byte 4) */
  bytes2word(POP_I1,JUMP,213,1)
, bytes2word(POP_I1,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CHAR_P1,34,HEAP_I1,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,17)
,	/* v474: (byte 3) */
  bytes2word(HEAP_OFF_N1,11,RETURN,POP_I1)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CHAR_P1)
, bytes2word(39,HEAP_I1,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,17,HEAP_OFF_N1)
,	/* v475: (byte 2) */
  bytes2word(11,RETURN,POP_I1,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CHAR_P1,92)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,27,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,17,HEAP_OFF_N1,11)
,	/* v476: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_I1,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v509: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v480: (byte 4) */
  bytes2word(POP_I1,JUMP,105,1)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,0,HEAP_CHAR_P1)
, bytes2word(64,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_P1,0,HEAP_CHAR_P1,95)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,19,HEAP_OFF_N1,13)
, bytes2word(EVAL,NEEDHEAP_P1,62,JUMPFALSE)
, bytes2word(97,0,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,52,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(57,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,62)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,57,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,62,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,HEAP_CHAR_P1)
, bytes2word(64,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(67,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,24,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,62)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(41,HEAP_OFF_N1,13,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,27,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,17,HEAP_OFF_N1,11)
,	/* v481: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v483: (byte 2) */
  bytes2word(219,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CHAR_P1,7)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,27,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,17,HEAP_OFF_N1,11)
,	/* v484: (byte 1) */
  bytes2word(RETURN,POP_I1,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CHAR_P1,8,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
,	/* v485: (byte 4) */
  bytes2word(17,HEAP_OFF_N1,11,RETURN)
, bytes2word(POP_I1,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CHAR_P1,12,HEAP_I1,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,17)
,	/* v486: (byte 3) */
  bytes2word(HEAP_OFF_N1,11,RETURN,POP_I1)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CHAR_P1)
, bytes2word(10,HEAP_I1,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,17,HEAP_OFF_N1)
,	/* v487: (byte 2) */
  bytes2word(11,RETURN,POP_I1,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CHAR_P1,13)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,27,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,17,HEAP_OFF_N1,11)
,	/* v488: (byte 1) */
  bytes2word(RETURN,POP_I1,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CHAR_P1,9,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
,	/* v489: (byte 4) */
  bytes2word(17,HEAP_OFF_N1,11,RETURN)
, bytes2word(POP_I1,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CHAR_P1,11,HEAP_I1,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,17)
,	/* v470: (byte 3) */
  bytes2word(HEAP_OFF_N1,11,RETURN,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_N1,72)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I1)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,51)
, bytes2word(0,HEAP_CVAL_P1,15,HEAP_CVAL_N1)
, bytes2word(77,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,16,HEAP_CVAL_N1,82)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(17,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(62,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,18,HEAP_CVAL_N1,87)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(28,HEAP_OFF_N1,18,HEAP_OFF_N1)
,	/* v490: (byte 2) */
  bytes2word(12,RETURN_EVAL,PUSH_P1,0)
, bytes2word(LOOKUPSWITCH,2,TOP(111),BOT(111))
, bytes2word(TOP(14),BOT(14),TOP(120),BOT(120))
,	/* v521: (byte 4) */
  bytes2word(TOP(63),BOT(63),TOP(10),BOT(10))
,	/* v495: (byte 4) */
  bytes2word(POP_I1,JUMP,100,0)
, bytes2word(POP_I1,HEAP_CVAL_P1,19,HEAP_CVAL_N1)
, bytes2word(92,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,20,HEAP_CVAL_N1,97)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(17,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(62,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_I1,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(18,HEAP_CVAL_N1,87,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,28)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,12)
,	/* v496: (byte 1) */
  bytes2word(RETURN_EVAL,POP_I1,HEAP_CVAL_P1,21)
, bytes2word(HEAP_CVAL_N1,102,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(107,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,17,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,62,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,18,HEAP_CVAL_N1,87)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(28,HEAP_OFF_N1,18,HEAP_OFF_N1)
,	/* v492: (byte 2) */
  bytes2word(12,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(23,HEAP_CVAL_N1,112,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_I1,EVAL)
, bytes2word(NEEDHEAP_P1,38,JUMPFALSE,102)
, bytes2word(0,HEAP_CVAL_P1,24,HEAP_CVAL_N1)
, bytes2word(117,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CHAR_P1)
, bytes2word(127,HEAP_OFF_N1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_CVAL_P1,25,HEAP_CVAL_P1)
, bytes2word(26,HEAP_CVAL_N1,122,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,18,HEAP_CVAL_N1,87)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(16,HEAP_I1,HEAP_OFF_N1,12)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v500: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
,	/* v501: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I1,HEAP_OFF_N1,11)
,	/* v497: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v466: (byte 2) */
  bytes2word(2,0,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v528)
, 0
, 0
, 0
, 0
, useLabel(PS_v527)
, 0
, 0
, 0
, 0
, useLabel(PS_v526)
, 0
, 0
, 0
, 0
, useLabel(PS_v525)
, 0
, 0
, 0
, 0
, useLabel(PS_v524)
, 0
, 0
, 0
, 0
, useLabel(PS_v523)
, 0
, 0
, 0
, 0
, useLabel(PS_v522)
, 0
, 0
, 0
, 0
, useLabel(PS_v520)
, 0
, 0
, 0
, 0
, useLabel(PS_v519)
, 0
, 0
, 0
, 0
, useLabel(PS_v518)
, 0
, 0
, 0
, 0
, useLabel(PS_v517)
, 0
, 0
, 0
, 0
, useLabel(PS_v516)
, 0
, 0
, 0
, 0
, useLabel(PS_v515)
, 0
, 0
, 0
, 0
, useLabel(PS_v514)
, 0
, 0
, 0
, 0
, useLabel(PS_v513)
, 0
, 0
, 0
, 0
, useLabel(PS_v512)
, 0
, 0
, 0
, 0
, useLabel(PS_v511)
, 0
, 0
, 0
, 0
, useLabel(PS_v510)
, 0
, 0
, 0
, 0
, useLabel(PS_v508)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v507)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v506)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 160009
, useLabel(ST_v503)
,	/* CT_v530: (byte 0) */
  HW(20,1)
, 0
,	/* F0_Char_46Prelude_46173_46readEsc: (byte 0) */
  CAPTAG(useLabel(FN_Char_46Prelude_46173_46readEsc),1)
, useLabel(PS_v502)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_62_61))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, VAPTAG(useLabel(FN_Char_46chr))
, VAPTAG(useLabel(FN_Char_46ord))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Char_46isDigit))
, CAPTAG(useLabel(FN_LAMBDA435),2)
, VAPTAG(useLabel(FN_Numeric_46readDec))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, CAPTAG(useLabel(FN_LAMBDA436),2)
, VAPTAG(useLabel(FN_Numeric_46readOct))
, CAPTAG(useLabel(FN_LAMBDA437),2)
, VAPTAG(useLabel(FN_Numeric_46readHex))
, VAPTAG(useLabel(FN_Char_46isUpper))
, VAPTAG(useLabel(FN_LAMBDA438))
, useLabel(CF_Char_46asciiTab)
, CAPTAG(useLabel(FN_LAMBDA440),2)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v542)
,	/* FN_LAMBDA440: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_P1)
, bytes2word(40,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(HEAP_CVAL_P1,10,HEAP_I1,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(19,HEAP_OFF_N1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(37,HEAP_OFF_N1,13,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v541)
, 0
, 0
, 0
, 0
, useLabel(PS_v540)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v539)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v538)
, 0
, 0
, 0
, 0
, useLabel(PS_v537)
, 0
, 0
, 0
, 0
, useLabel(PS_v536)
, 0
, 0
, 0
, 0
, 340036
, useLabel(ST_v534)
,	/* CT_v542: (byte 0) */
  HW(5,3)
, 0
,	/* F0_LAMBDA440: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA440),3)
, useLabel(PS_v533)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA439),2)
, CAPTAG(useLabel(FN_Char_46Prelude_46174_46match),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v556)
,	/* FN_LAMBDA439: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v553: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v550: (byte 4) */
  bytes2word(POP_I1,JUMP,26,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
,	/* v547: (byte 4) */
  bytes2word(12,HEAP_ARG,3,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v543: (byte 1) */
  bytes2word(0,PUSH_ARG_I3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v555)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v554)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 340036
, useLabel(ST_v534)
,	/* CT_v556: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA439: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA439),3)
, useLabel(PS_v551)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v560)
,	/* FN_LAMBDA438: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v559)
, 330049
, useLabel(ST_v558)
,	/* CT_v560: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA438: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA438))
, useLabel(PS_v557)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v570)
,	/* FN_LAMBDA437: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_P1,0)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
, bytes2word(HEAP_ARG,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v569)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v568)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v567)
, 0
, 0
, 0
, 0
, useLabel(PS_v566)
, 0
, 0
, 0
, 0
, 310028
, useLabel(ST_v564)
,	/* CT_v570: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA437: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA437),2)
, useLabel(PS_v563)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Char_46chr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v580)
,	/* FN_LAMBDA436: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_P1,0)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
, bytes2word(HEAP_ARG,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v579)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v578)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v577)
, 0
, 0
, 0
, 0
, useLabel(PS_v576)
, 0
, 0
, 0
, 0
, 300028
, useLabel(ST_v574)
,	/* CT_v580: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA436: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA436),2)
, useLabel(PS_v573)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Char_46chr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v590)
,	/* FN_LAMBDA435: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_P1,0)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
, bytes2word(HEAP_ARG,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v589)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v588)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v587)
, 0
, 0
, 0
, 0
, useLabel(PS_v586)
, 0
, 0
, 0
, 0
, 290028
, useLabel(ST_v584)
,	/* CT_v590: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA435: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA435),2)
, useLabel(PS_v583)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Char_46chr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v607)
,	/* FN_Char_46Prelude_46174_46match: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v603: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v594: (byte 2) */
  bytes2word(67,0,UNPACK,2)
, bytes2word(PUSH_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v604: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v598: (byte 2) */
  bytes2word(46,0,UNPACK,2)
, bytes2word(PUSH_P1,0,PUSH_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,16,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_P1,4,HEAP_I2)
,	/* v599: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v595: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v591: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(2,3,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v606)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v601)
, 0
, 0
, 0
, 0
, useLabel(PS_v605)
, 0
, 0
, 0
, 0
, 410009
, useLabel(ST_v602)
,	/* CT_v607: (byte 0) */
  HW(2,3)
, 0
,	/* F0_Char_46Prelude_46174_46match: (byte 0) */
  CAPTAG(useLabel(FN_Char_46Prelude_46174_46match),3)
, useLabel(PS_v601)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Char_46Prelude_46174_46match))
,};
Node PP_Char_46readLitChar[] = {
 };
Node PC_Char_46readLitChar[] = {
 	/* ST_v452: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,114,101,97)
, bytes2word(100,76,105,116)
, bytes2word(67,104,97,114)
,	/* PP_LAMBDA441: (byte 1) */
 	/* PC_LAMBDA441: (byte 1) */
 	/* ST_v463: (byte 1) */
  bytes2word(0,67,104,97)
, bytes2word(114,46,114,101)
, bytes2word(97,100,76,105)
, bytes2word(116,67,104,97)
, bytes2word(114,58,49,52)
, bytes2word(58,49,45,52)
, bytes2word(52,58,51,52)
,	/* PP_Char_46Prelude_46173_46readEsc: (byte 1) */
 	/* PC_Char_46Prelude_46173_46readEsc: (byte 1) */
 	/* ST_v503: (byte 1) */
  bytes2word(0,67,104,97)
, bytes2word(114,46,114,101)
, bytes2word(97,100,76,105)
, bytes2word(116,67,104,97)
, bytes2word(114,58,49,54)
, bytes2word(58,57,45,51)
, bytes2word(56,58,50,57)
,	/* PP_LAMBDA435: (byte 1) */
 	/* PC_LAMBDA435: (byte 1) */
 	/* ST_v584: (byte 1) */
  bytes2word(0,67,104,97)
, bytes2word(114,46,114,101)
, bytes2word(97,100,76,105)
, bytes2word(116,67,104,97)
, bytes2word(114,58,50,57)
, bytes2word(58,50,56,45)
, bytes2word(50,57,58,54)
,	/* PP_LAMBDA436: (byte 2) */
 	/* PC_LAMBDA436: (byte 2) */
 	/* ST_v574: (byte 2) */
  bytes2word(48,0,67,104)
, bytes2word(97,114,46,114)
, bytes2word(101,97,100,76)
, bytes2word(105,116,67,104)
, bytes2word(97,114,58,51)
, bytes2word(48,58,50,56)
, bytes2word(45,51,48,58)
,	/* PP_LAMBDA437: (byte 3) */
 	/* PC_LAMBDA437: (byte 3) */
 	/* ST_v564: (byte 3) */
  bytes2word(54,48,0,67)
, bytes2word(104,97,114,46)
, bytes2word(114,101,97,100)
, bytes2word(76,105,116,67)
, bytes2word(104,97,114,58)
, bytes2word(51,49,58,50)
, bytes2word(56,45,51,49)
,	/* PP_LAMBDA438: (byte 4) */
 	/* PC_LAMBDA438: (byte 4) */
 	/* ST_v558: (byte 4) */
  bytes2word(58,54,48,0)
, bytes2word(67,104,97,114)
, bytes2word(46,114,101,97)
, bytes2word(100,76,105,116)
, bytes2word(67,104,97,114)
, bytes2word(58,51,51,58)
, bytes2word(52,57,45,51)
, bytes2word(51,58,53,51)
,	/* PP_LAMBDA439: (byte 1) */
 	/* PC_LAMBDA439: (byte 1) */
 	/* PP_LAMBDA440: (byte 1) */
 	/* PC_LAMBDA440: (byte 1) */
 	/* ST_v534: (byte 1) */
  bytes2word(0,67,104,97)
, bytes2word(114,46,114,101)
, bytes2word(97,100,76,105)
, bytes2word(116,67,104,97)
, bytes2word(114,58,51,52)
, bytes2word(58,51,54,45)
, bytes2word(51,53,58,55)
,	/* PP_Char_46Prelude_46174_46match: (byte 2) */
 	/* PC_Char_46Prelude_46174_46match: (byte 2) */
 	/* ST_v602: (byte 2) */
  bytes2word(48,0,67,104)
, bytes2word(97,114,46,114)
, bytes2word(101,97,100,76)
, bytes2word(105,116,67,104)
, bytes2word(97,114,58,52)
, bytes2word(49,58,57,45)
, bytes2word(52,50,58,52)
,	/* ST_v464: (byte 2) */
  bytes2word(56,0,67,104)
, bytes2word(97,114,58,32)
, bytes2word(80,97,116,116)
, bytes2word(101,114,110,32)
, bytes2word(109,97,116,99)
, bytes2word(104,32,102,97)
, bytes2word(105,108,117,114)
, bytes2word(101,32,105,110)
, bytes2word(32,102,117,110)
, bytes2word(99,116,105,111)
, bytes2word(110,32,97,116)
, bytes2word(32,49,52,58)
, bytes2word(49,45,52,52)
, bytes2word(58,51,52,46)
,	/* ST_v559: (byte 1) */
  bytes2word(0,68,69,76)
, bytes2word(0,0,0,0)
,	/* PS_v460: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46readLitChar)
, useLabel(PC_NHC_46Internal_46_95patternMatchFail)
,	/* PS_v456: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46readLitChar)
, useLabel(PC_Prelude_462)
,	/* PS_v457: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46readLitChar)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v458: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46readLitChar)
, useLabel(PC_Prelude_46_58)
,	/* PS_v451: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46readLitChar)
, useLabel(PC_Char_46readLitChar)
,	/* PS_v455: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46readLitChar)
, useLabel(PC_Char_46Prelude_46173_46readEsc)
,	/* PS_v459: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46readLitChar)
, useLabel(PC_LAMBDA441)
,	/* PS_v519: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_Numeric_46readDec)
,	/* PS_v514: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_Char_46ord)
,	/* PS_v526: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_Char_46isUpper)
,	/* PS_v513: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_Char_46chr)
,	/* PS_v523: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_Numeric_46readOct)
,	/* PS_v517: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_Char_46isDigit)
,	/* PS_v525: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_Numeric_46readHex)
,	/* PS_v515: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v520: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v512: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_Prelude_46_38_38)
,	/* PS_v506: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_Prelude_462)
,	/* PS_v507: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v508: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_Prelude_46_58)
,	/* PS_v502: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_Char_46Prelude_46173_46readEsc)
,	/* PS_v510: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_Prelude_46Ord_46Prelude_46Char_46_62_61)
,	/* PS_v511: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_Prelude_46Ord_46Prelude_46Char_46_60_61)
,	/* PS_v516: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_45)
,	/* PS_v518: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_LAMBDA435)
,	/* PS_v522: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_LAMBDA436)
,	/* PS_v524: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_LAMBDA437)
,	/* PS_v527: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_LAMBDA438)
,	/* PS_v528: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46173_46readEsc)
, useLabel(PC_LAMBDA440)
,	/* PS_v606: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46174_46match)
, useLabel(PC_Prelude_462)
,	/* PS_v605: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46174_46match)
, useLabel(PC_Prelude_46_61_61)
,	/* PS_v601: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46Prelude_46174_46match)
, useLabel(PC_Char_46Prelude_46174_46match)
,	/* PS_v586: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA435)
, useLabel(PC_Char_46chr)
,	/* PS_v587: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA435)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v588: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA435)
, useLabel(PC_Prelude_462)
,	/* PS_v589: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA435)
, useLabel(PC_Prelude_46_58)
,	/* PS_v583: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA435)
, useLabel(PC_LAMBDA435)
,	/* PS_v576: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA436)
, useLabel(PC_Char_46chr)
,	/* PS_v577: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA436)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v578: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA436)
, useLabel(PC_Prelude_462)
,	/* PS_v579: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA436)
, useLabel(PC_Prelude_46_58)
,	/* PS_v573: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA436)
, useLabel(PC_LAMBDA436)
,	/* PS_v566: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA437)
, useLabel(PC_Char_46chr)
,	/* PS_v567: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA437)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v568: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA437)
, useLabel(PC_Prelude_462)
,	/* PS_v569: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA437)
, useLabel(PC_Prelude_46_58)
,	/* PS_v563: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA437)
, useLabel(PC_LAMBDA437)
,	/* PS_v557: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA438)
, useLabel(PC_LAMBDA438)
,	/* PS_v554: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA439)
, useLabel(PC_Prelude_462)
,	/* PS_v555: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA439)
, useLabel(PC_Prelude_46_58)
,	/* PS_v551: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA439)
, useLabel(PC_LAMBDA439)
,	/* PS_v538: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA440)
, useLabel(PC_NHC_46Internal_46_95apply3)
,	/* PS_v541: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA440)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v539: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA440)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v540: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA440)
, useLabel(PC_Prelude_46_58)
,	/* PS_v537: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA440)
, useLabel(PC_Char_46Prelude_46174_46match)
,	/* PS_v536: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA440)
, useLabel(PC_LAMBDA439)
,	/* PS_v533: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA440)
, useLabel(PC_LAMBDA440)
,	/* PS_v462: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA441)
, useLabel(PC_LAMBDA441)
,};
