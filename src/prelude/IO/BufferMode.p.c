#include "newmacros.h"
#include "runtime.h"

#define PS_IO_46BlockBuffering	((void*)startLabel+24)
#define PS_IO_46LineBuffering	((void*)startLabel+56)
#define PS_IO_46NoBuffering	((void*)startLabel+84)
#define CT_v448	((void*)startLabel+200)
#define FN_LAMBDA435	((void*)startLabel+244)
#define CT_v452	((void*)startLabel+288)
#define CF_LAMBDA435	((void*)startLabel+296)
#define v454	((void*)startLabel+342)
#define v455	((void*)startLabel+358)
#define v456	((void*)startLabel+374)
#define CT_v468	((void*)startLabel+652)
#define FN_LAMBDA438	((void*)startLabel+732)
#define CT_v472	((void*)startLabel+776)
#define CF_LAMBDA438	((void*)startLabel+784)
#define FN_LAMBDA437	((void*)startLabel+812)
#define CT_v475	((void*)startLabel+856)
#define CF_LAMBDA437	((void*)startLabel+864)
#define FN_LAMBDA436	((void*)startLabel+892)
#define CT_v478	((void*)startLabel+936)
#define CF_LAMBDA436	((void*)startLabel+944)
#define CT_v482	((void*)startLabel+1024)
#define CT_v486	((void*)startLabel+1120)
#define CT_v490	((void*)startLabel+1216)
#define FN_LAMBDA443	((void*)startLabel+1260)
#define CT_v494	((void*)startLabel+1312)
#define F0_LAMBDA443	((void*)startLabel+1320)
#define FN_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235	((void*)startLabel+1356)
#define CT_v511	((void*)startLabel+1908)
#define F0_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235	((void*)startLabel+1916)
#define FN_LAMBDA442	((void*)startLabel+1996)
#define CT_v513	((void*)startLabel+2040)
#define CF_LAMBDA442	((void*)startLabel+2048)
#define FN_LAMBDA441	((void*)startLabel+2076)
#define CT_v515	((void*)startLabel+2120)
#define CF_LAMBDA441	((void*)startLabel+2128)
#define FN_LAMBDA440	((void*)startLabel+2156)
#define CT_v518	((void*)startLabel+2224)
#define F0_LAMBDA440	((void*)startLabel+2232)
#define FN_LAMBDA439	((void*)startLabel+2260)
#define CT_v520	((void*)startLabel+2304)
#define CF_LAMBDA439	((void*)startLabel+2312)
#define CT_v524	((void*)startLabel+2392)
#define v528	((void*)startLabel+2452)
#define v546	((void*)startLabel+2464)
#define v532	((void*)startLabel+2468)
#define v533	((void*)startLabel+2478)
#define v548	((void*)startLabel+2490)
#define v537	((void*)startLabel+2494)
#define v538	((void*)startLabel+2504)
#define v549	((void*)startLabel+2518)
#define v542	((void*)startLabel+2522)
#define v539	((void*)startLabel+2537)
#define v525	((void*)startLabel+2541)
#define CT_v553	((void*)startLabel+2692)
#define v557	((void*)startLabel+2760)
#define v575	((void*)startLabel+2772)
#define v561	((void*)startLabel+2776)
#define v562	((void*)startLabel+2786)
#define v577	((void*)startLabel+2798)
#define v566	((void*)startLabel+2802)
#define v567	((void*)startLabel+2812)
#define v578	((void*)startLabel+2826)
#define v571	((void*)startLabel+2830)
#define v568	((void*)startLabel+2845)
#define v554	((void*)startLabel+2849)
#define CT_v580	((void*)startLabel+2932)
#define CT_v584	((void*)startLabel+3032)
#define CT_v588	((void*)startLabel+3132)
#define CT_v592	((void*)startLabel+3232)
#define CT_v596	((void*)startLabel+3332)
#define CT_v600	((void*)startLabel+3432)
#define v604	((void*)startLabel+3492)
#define v622	((void*)startLabel+3504)
#define v608	((void*)startLabel+3508)
#define v609	((void*)startLabel+3518)
#define v624	((void*)startLabel+3530)
#define v613	((void*)startLabel+3534)
#define v614	((void*)startLabel+3544)
#define v625	((void*)startLabel+3558)
#define v618	((void*)startLabel+3562)
#define v615	((void*)startLabel+3577)
#define v601	((void*)startLabel+3581)
#define CT_v628	((void*)startLabel+3708)
#define CT_v632	((void*)startLabel+3808)
#define CT_v636	((void*)startLabel+3920)
#define CT_v640	((void*)startLabel+4044)
#define CT_v644	((void*)startLabel+4180)
#define CT_v648	((void*)startLabel+4296)
#define ST_v471	((void*)startLabel+4340)
#define ST_v451	((void*)startLabel+4355)
#define ST_v474	((void*)startLabel+4366)
#define ST_v477	((void*)startLabel+4380)
#define ST_v634	((void*)startLabel+4392)
#define ST_v630	((void*)startLabel+4420)
#define ST_v620	((void*)startLabel+4448)
#define ST_v638	((void*)startLabel+4476)
#define ST_v598	((void*)startLabel+4504)
#define ST_v573	((void*)startLabel+4532)
#define ST_v590	((void*)startLabel+4564)
#define ST_v594	((void*)startLabel+4592)
#define ST_v544	((void*)startLabel+4624)
#define ST_v586	((void*)startLabel+4660)
#define ST_v582	((void*)startLabel+4692)
#define ST_v642	((void*)startLabel+4724)
#define ST_v522	((void*)startLabel+4752)
#define ST_v488	((void*)startLabel+4788)
#define PP_LAMBDA439	((void*)startLabel+4825)
#define PC_LAMBDA439	((void*)startLabel+4825)
#define PP_LAMBDA440	((void*)startLabel+4825)
#define PC_LAMBDA440	((void*)startLabel+4825)
#define PP_LAMBDA441	((void*)startLabel+4825)
#define PC_LAMBDA441	((void*)startLabel+4825)
#define PP_LAMBDA442	((void*)startLabel+4825)
#define PC_LAMBDA442	((void*)startLabel+4825)
#define PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235	((void*)startLabel+4825)
#define PC_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235	((void*)startLabel+4825)
#define PP_LAMBDA443	((void*)startLabel+4825)
#define PC_LAMBDA443	((void*)startLabel+4825)
#define ST_v492	((void*)startLabel+4825)
#define ST_v646	((void*)startLabel+4872)
#define ST_v480	((void*)startLabel+4900)
#define ST_v484	((void*)startLabel+4932)
#define ST_v458	((void*)startLabel+4968)
#define PP_LAMBDA436	((void*)startLabel+5005)
#define PC_LAMBDA436	((void*)startLabel+5005)
#define PP_LAMBDA437	((void*)startLabel+5005)
#define PC_LAMBDA437	((void*)startLabel+5005)
#define PP_LAMBDA438	((void*)startLabel+5005)
#define PC_LAMBDA438	((void*)startLabel+5005)
#define ST_v470	((void*)startLabel+5005)
#define ST_v446	((void*)startLabel+5052)
#define PP_LAMBDA435	((void*)startLabel+5089)
#define PC_LAMBDA435	((void*)startLabel+5089)
#define ST_v450	((void*)startLabel+5089)
#define PS_v627	((void*)startLabel+5136)
#define PS_v623	((void*)startLabel+5148)
#define PS_v619	((void*)startLabel+5160)
#define PS_v626	((void*)startLabel+5172)
#define PS_v631	((void*)startLabel+5184)
#define PS_v629	((void*)startLabel+5196)
#define PS_v576	((void*)startLabel+5208)
#define PS_v572	((void*)startLabel+5220)
#define PS_v579	((void*)startLabel+5232)
#define PS_v551	((void*)startLabel+5244)
#define PS_v547	((void*)startLabel+5256)
#define PS_v543	((void*)startLabel+5268)
#define PS_v550	((void*)startLabel+5280)
#define PS_v552	((void*)startLabel+5292)
#define PS_v599	((void*)startLabel+5304)
#define PS_v597	((void*)startLabel+5316)
#define PS_v595	((void*)startLabel+5328)
#define PS_v593	((void*)startLabel+5340)
#define PS_v591	((void*)startLabel+5352)
#define PS_v589	((void*)startLabel+5364)
#define PS_v587	((void*)startLabel+5376)
#define PS_v585	((void*)startLabel+5388)
#define PS_v583	((void*)startLabel+5400)
#define PS_v581	((void*)startLabel+5412)
#define PS_v487	((void*)startLabel+5424)
#define PS_v489	((void*)startLabel+5436)
#define PS_v523	((void*)startLabel+5448)
#define PS_v521	((void*)startLabel+5460)
#define PS_v463	((void*)startLabel+5472)
#define PS_v460	((void*)startLabel+5484)
#define PS_v467	((void*)startLabel+5496)
#define PS_v464	((void*)startLabel+5508)
#define PS_v465	((void*)startLabel+5520)
#define PS_v457	((void*)startLabel+5532)
#define PS_v461	((void*)startLabel+5544)
#define PS_v466	((void*)startLabel+5556)
#define PS_v462	((void*)startLabel+5568)
#define PS_v447	((void*)startLabel+5580)
#define PS_v445	((void*)startLabel+5592)
#define PS_v485	((void*)startLabel+5604)
#define PS_v483	((void*)startLabel+5616)
#define PS_v481	((void*)startLabel+5628)
#define PS_v479	((void*)startLabel+5640)
#define PS_v500	((void*)startLabel+5652)
#define PS_v499	((void*)startLabel+5664)
#define PS_v506	((void*)startLabel+5676)
#define PS_v507	((void*)startLabel+5688)
#define PS_v505	((void*)startLabel+5700)
#define PS_v510	((void*)startLabel+5712)
#define PS_v496	((void*)startLabel+5724)
#define PS_v508	((void*)startLabel+5736)
#define PS_v497	((void*)startLabel+5748)
#define PS_v495	((void*)startLabel+5760)
#define PS_v501	((void*)startLabel+5772)
#define PS_v502	((void*)startLabel+5784)
#define PS_v498	((void*)startLabel+5796)
#define PS_v503	((void*)startLabel+5808)
#define PS_v504	((void*)startLabel+5820)
#define PS_v509	((void*)startLabel+5832)
#define PS_v645	((void*)startLabel+5844)
#define PS_v647	((void*)startLabel+5856)
#define PS_v641	((void*)startLabel+5868)
#define PS_v643	((void*)startLabel+5880)
#define PS_v637	((void*)startLabel+5892)
#define PS_v639	((void*)startLabel+5904)
#define PS_v633	((void*)startLabel+5916)
#define PS_v635	((void*)startLabel+5928)
#define PS_v449	((void*)startLabel+5940)
#define PS_v476	((void*)startLabel+5952)
#define PS_v473	((void*)startLabel+5964)
#define PS_v469	((void*)startLabel+5976)
#define PS_v519	((void*)startLabel+5988)
#define PS_v517	((void*)startLabel+6000)
#define PS_v516	((void*)startLabel+6012)
#define PS_v514	((void*)startLabel+6024)
#define PS_v512	((void*)startLabel+6036)
#define PS_v493	((void*)startLabel+6048)
#define PS_v491	((void*)startLabel+6060)
extern Node FN_Prelude_46showString[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_60[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46showChar[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46Show_46Prelude_46Maybe_46showsPrec[];
extern Node CF_Prelude_46Show_46Prelude_46Int[];
extern Node FN_Prelude_46showParen[];
extern Node FN_Prelude_46_95_46show[];
extern Node CF_Prelude_46Show_46IO_46BufferMode[];
extern Node FN_Prelude_46_95_46showList[];
extern Node FN_Prelude_46_95readCon0[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62[];
extern Node FN_Prelude_46Read_46Prelude_46Maybe[];
extern Node CF_Prelude_46Read_46Prelude_46Int[];
extern Node FN_Prelude_46_95readCon[];
extern Node FN_Prelude_46_95readConArg[];
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46IO_46BufferMode[];
extern Node FN_Prelude_46Ord_46Prelude_46Maybe_46compare[];
extern Node CF_Prelude_46Ord_46Prelude_46Int[];
extern Node FN_Prelude_46_95fromEnum[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node FN_Prelude_46Ord_46Prelude_46Maybe_46_60_61[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46IO_46BufferMode[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46Eq_46Prelude_46Maybe_46_61_61[];
extern Node CF_Prelude_46Eq_46Prelude_46Int[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46IO_46BufferMode[];
extern Node PM_IO[];
extern Node PC_Prelude_46False[];
extern Node PC_Prelude_46True[];
extern Node PC_Prelude_46Eq_46Prelude_46Maybe_46_61_61[];
extern Node PC_Prelude_46_95_46_47_61[];
extern Node PC_Prelude_46Ord_46Prelude_46Maybe_46_60_61[];
extern Node PC_Prelude_46_95fromEnum[];
extern Node PC_Prelude_46EQ[];
extern Node PC_Prelude_46Ord_46Prelude_46Maybe_46compare[];
extern Node PC_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node PC_Prelude_46_95_46_60[];
extern Node PC_Prelude_46_95_46_62_61[];
extern Node PC_Prelude_46_95_46_62[];
extern Node PC_Prelude_46_95_46max[];
extern Node PC_Prelude_46_95_46min[];
extern Node PC_Prelude_46_95_46readList[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46showString[];
extern Node PC_Prelude_46showParen[];
extern Node PC_Prelude_46showChar[];
extern Node PC_Prelude_46_46[];
extern Node PC_Prelude_46Ord_46Prelude_46Int_46_60[];
extern Node PC_Prelude_46Show_46Prelude_46Maybe_46showsPrec[];
extern Node PC_Prelude_46_95_46showList[];
extern Node PC_Prelude_46_95_46show[];
extern Node PC_Prelude_46_95readCon0[];
extern Node PC_Prelude_46_95readConArg[];
extern Node PC_Prelude_46readParen[];
extern Node PC_Prelude_46_95readCon[];
extern Node PC_Prelude_46_43_43[];
extern Node PC_Prelude_46Ord_46Prelude_46Int_46_62[];
extern Node PC_Prelude_46Read_46Prelude_46Maybe[];
extern Node PC_Prelude_464[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_468[];

static Node startLabel[] = {
  42
,};
Node PP_IO_46BlockBuffering[] = {
 };
Node PC_IO_46BlockBuffering[] = {
  bytes2word(73,79,46,66)
, bytes2word(108,111,99,107)
, bytes2word(66,117,102,102)
, bytes2word(101,114,105,110)
, bytes2word(103,0,0,0)
,	/* PS_IO_46BlockBuffering: (byte 0) */
  useLabel(PP_IO_46BlockBuffering)
, useLabel(PP_IO_46BlockBuffering)
, useLabel(PC_IO_46BlockBuffering)
,};
Node PP_IO_46LineBuffering[] = {
 };
Node PC_IO_46LineBuffering[] = {
  bytes2word(73,79,46,76)
, bytes2word(105,110,101,66)
, bytes2word(117,102,102,101)
, bytes2word(114,105,110,103)
, bytes2word(0,0,0,0)
,	/* PS_IO_46LineBuffering: (byte 0) */
  useLabel(PP_IO_46LineBuffering)
, useLabel(PP_IO_46LineBuffering)
, useLabel(PC_IO_46LineBuffering)
,};
Node PP_IO_46NoBuffering[] = {
 };
Node PC_IO_46NoBuffering[] = {
  bytes2word(73,79,46,78)
, bytes2word(111,66,117,102)
, bytes2word(102,101,114,105)
, bytes2word(110,103,0,0)
,	/* PS_IO_46NoBuffering: (byte 0) */
  useLabel(PP_IO_46NoBuffering)
, useLabel(PP_IO_46NoBuffering)
, useLabel(PC_IO_46NoBuffering)
,};
Node C0_IO_46LineBuffering[] = {
  CONSTR(1,0,0)
, useLabel(PS_IO_46LineBuffering)
, 0
, 0
, 0
,};
Node C0_IO_46NoBuffering[] = {
  CONSTR(0,0,0)
, useLabel(PS_IO_46NoBuffering)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v448)
,};
Node FN_Prelude_46Show_46IO_46BufferMode_46showsType[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_CVAL_P1,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v447)
, 0
, 0
, 0
, 0
, 40047
, useLabel(ST_v446)
,	/* CT_v448: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46IO_46BufferMode_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46IO_46BufferMode_46showsType),1)
, useLabel(PS_v445)
, 0
, 0
, 0
, useLabel(CF_LAMBDA435)
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(0,0,0,0)
, useLabel(CT_v452)
,	/* FN_LAMBDA435: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v451)
, 40047
, useLabel(ST_v450)
,	/* CT_v452: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA435: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA435))
, useLabel(PS_v449)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v468)
,};
Node FN_Prelude_46Show_46IO_46BufferMode_46showsPrec[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_P1)
, bytes2word(65,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(22),BOT(22))
,	/* v454: (byte 2) */
  bytes2word(TOP(38),BOT(38),POP_I1,PUSH_CVAL_P1)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,EVAL,NEEDHEAP_I32,APPLY)
,	/* v455: (byte 2) */
  bytes2word(1,RETURN_EVAL,POP_I1,PUSH_CVAL_P1)
, bytes2word(9,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,EVAL,NEEDHEAP_I32,APPLY)
,	/* v456: (byte 2) */
  bytes2word(1,RETURN_EVAL,UNPACK,1)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_INT_P1)
, bytes2word(9,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,15,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(HEAP_CHAR_P1,32,HEAP_CVAL_P1,14)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,24,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,15,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,16,HEAP_INT_P1,10)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,14)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,20,HEAP_OFF_N1)
, bytes2word(14,PUSH_HEAP,HEAP_CVAL_P1,17)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,63,HEAP_OFF_N1)
, bytes2word(13,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v467)
, 0
, 0
, 0
, 0
, useLabel(PS_v466)
, 0
, 0
, 0
, 0
, useLabel(PS_v465)
, 0
, 0
, 0
, 0
, useLabel(PS_v464)
, 0
, 0
, 0
, 0
, useLabel(PS_v463)
, 0
, 0
, 0
, 0
, useLabel(PS_v462)
, 0
, 0
, 0
, 0
, useLabel(PS_v461)
, 0
, 0
, 0
, 0
, useLabel(PS_v460)
, 0
, 0
, 0
, 0
, 40047
, useLabel(ST_v458)
,	/* CT_v468: (byte 0) */
  HW(11,2)
, 0
,};
Node F0_Prelude_46Show_46IO_46BufferMode_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46IO_46BufferMode_46showsPrec),2)
, useLabel(PS_v457)
, 0
, 0
, 0
, useLabel(CF_LAMBDA436)
, VAPTAG(useLabel(FN_Prelude_46showString))
, useLabel(CF_LAMBDA437)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_60))
, VAPTAG(useLabel(FN_LAMBDA438))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Maybe_46showsPrec))
, useLabel(CF_Prelude_46Show_46Prelude_46Int)
, VAPTAG(useLabel(FN_Prelude_46showParen))
, bytes2word(0,0,0,0)
, useLabel(CT_v472)
,	/* FN_LAMBDA438: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v471)
, 40047
, useLabel(ST_v470)
,	/* CT_v472: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA438: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA438))
, useLabel(PS_v469)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v475)
,	/* FN_LAMBDA437: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v474)
, 40047
, useLabel(ST_v470)
,	/* CT_v475: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA437: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA437))
, useLabel(PS_v473)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v478)
,	/* FN_LAMBDA436: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v477)
, 40047
, useLabel(ST_v470)
,	/* CT_v478: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA436: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA436))
, useLabel(PS_v476)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v482)
,};
Node FN_Prelude_46Show_46IO_46BufferMode_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v481)
, 0
, 0
, 0
, 0
, 40047
, useLabel(ST_v480)
,	/* CT_v482: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46IO_46BufferMode_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46IO_46BufferMode_46show),1)
, useLabel(PS_v479)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46IO_46BufferMode)
, bytes2word(1,0,0,1)
, useLabel(CT_v486)
,};
Node FN_Prelude_46Show_46IO_46BufferMode_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v485)
, 0
, 0
, 0
, 0
, 40047
, useLabel(ST_v484)
,	/* CT_v486: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46IO_46BufferMode_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46IO_46BufferMode_46showList),1)
, useLabel(PS_v483)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46IO_46BufferMode)
, bytes2word(1,0,0,1)
, useLabel(CT_v490)
,};
Node FN_Prelude_46Read_46IO_46BufferMode_46readsPrec[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v489)
, 0
, 0
, 0
, 0
, 40041
, useLabel(ST_v488)
,	/* CT_v490: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Read_46IO_46BufferMode_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46IO_46BufferMode_46readsPrec),1)
, useLabel(PS_v487)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA443),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v494)
,	/* FN_LAMBDA443: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v493)
, 0
, 0
, 0
, 0
, 40041
, useLabel(ST_v492)
,	/* CT_v494: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA443: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA443),2)
, useLabel(PS_v491)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v511)
,	/* FN_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235: (byte 0) */
  bytes2word(NEEDHEAP_P1,126,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,20)
, bytes2word(HEAP_OFF_N1,16,HEAP_OFF_N1,12)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(13,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,42,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_INT_P1,9,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,12,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,52,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,14)
, bytes2word(HEAP_CVAL_N1,57,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,15,HEAP_CVAL_N1)
, bytes2word(62,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,15,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,16,HEAP_CVAL_N1,67)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(28,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(17,HEAP_CVAL_N1,72,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,42)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(18,HEAP_CVAL_N1,82,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,20,HEAP_OFF_N1)
, bytes2word(16,HEAP_OFF_N1,12,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,13)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,19)
, bytes2word(HEAP_CVAL_N1,87,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,42,HEAP_OFF_N1)
, bytes2word(13,PUSH_HEAP,HEAP_CVAL_P1,19)
, bytes2word(HEAP_CVAL_N1,87,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,100,HEAP_OFF_N1)
, bytes2word(13,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v510)
, 0
, 0
, 0
, 0
, useLabel(PS_v509)
, 0
, 0
, 0
, 0
, useLabel(PS_v508)
, 0
, 0
, 0
, 0
, useLabel(PS_v507)
, 0
, 0
, 0
, 0
, useLabel(PS_v506)
, 0
, 0
, 0
, 0
, useLabel(PS_v505)
, 0
, 0
, 0
, 0
, useLabel(PS_v504)
, 0
, 0
, 0
, 0
, useLabel(PS_v503)
, 0
, 0
, 0
, 0
, useLabel(PS_v502)
, 0
, 0
, 0
, 0
, useLabel(PS_v501)
, 0
, 0
, 0
, 0
, useLabel(PS_v500)
, 0
, 0
, 0
, 0
, useLabel(PS_v499)
, 0
, 0
, 0
, 0
, useLabel(PS_v498)
, 0
, 0
, 0
, 0
, useLabel(PS_v497)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v496)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 40041
, useLabel(ST_v492)
,	/* CT_v511: (byte 0) */
  HW(13,2)
, 0
,	/* F0_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235: (byte 0) */
  CAPTAG(useLabel(FN_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235),2)
, useLabel(PS_v495)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA439))
, VAPTAG(useLabel(FN_Prelude_46_95readCon0))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62))
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe))
, useLabel(CF_Prelude_46Read_46Prelude_46Int)
, CAPTAG(useLabel(FN_LAMBDA440),1)
, VAPTAG(useLabel(FN_LAMBDA441))
, VAPTAG(useLabel(FN_Prelude_46_95readCon))
, VAPTAG(useLabel(FN_Prelude_46_95readConArg))
, VAPTAG(useLabel(FN_Prelude_46readParen))
, VAPTAG(useLabel(FN_LAMBDA442))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v513)
,	/* FN_LAMBDA442: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v477)
, 40041
, useLabel(ST_v492)
,	/* CT_v513: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA442: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA442))
, useLabel(PS_v512)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v515)
,	/* FN_LAMBDA441: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v471)
, 40041
, useLabel(ST_v492)
,	/* CT_v515: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA441: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA441))
, useLabel(PS_v514)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v518)
,	/* FN_LAMBDA440: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v517)
, 0
, 0
, 0
, 0
, CONSTR(2,1,0)
, 0
, 0
, 0
, 0
, 40041
, useLabel(ST_v492)
,	/* CT_v518: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA440: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA440),1)
, useLabel(PS_v516)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v520)
,	/* FN_LAMBDA439: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v474)
, 40041
, useLabel(ST_v492)
,	/* CT_v520: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA439: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA439))
, useLabel(PS_v519)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v524)
,};
Node FN_Prelude_46Read_46IO_46BufferMode_46readList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v523)
, 0
, 0
, 0
, 0
, 40041
, useLabel(ST_v522)
,	/* CT_v524: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46IO_46BufferMode_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46IO_46BufferMode_46readList))
, useLabel(PS_v521)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46IO_46BufferMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v553)
,};
Node FN_Prelude_46Ord_46IO_46BufferMode_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v528: (byte 4) */
  bytes2word(TOP(32),BOT(32),TOP(58),BOT(58))
, bytes2word(POP_I1,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(10),BOT(10))
,	/* v546: (byte 4) */
  bytes2word(TOP(6),BOT(6),TOP(6),BOT(6))
,	/* v532: (byte 4) */
  bytes2word(POP_I1,JUMP,75,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
,	/* v533: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(10),BOT(10))
,	/* v548: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v537: (byte 2) */
  bytes2word(49,0,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v538: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(UNPACK,1,PUSH_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(6),BOT(6))
,	/* v549: (byte 2) */
  bytes2word(TOP(10),BOT(10),POP_I1,JUMP)
,	/* v542: (byte 2) */
  bytes2word(17,0,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_I2,HEAP_I1)
,	/* v539: (byte 1) */
  bytes2word(RETURN_EVAL,POP_I1,JUMP,2)
,	/* v525: (byte 1) */
  bytes2word(0,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v552)
, 0
, 0
, 0
, 0
, useLabel(PS_v551)
, 0
, 0
, 0
, 0
, useLabel(PS_v550)
, 0
, 0
, 0
, 0
, useLabel(PS_v547)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, 40036
, useLabel(ST_v544)
,	/* CT_v553: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Ord_46IO_46BufferMode_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46IO_46BufferMode_46compare),2)
, useLabel(PS_v543)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46compare))
, useLabel(CF_Prelude_46Ord_46Prelude_46Int)
, VAPTAG(useLabel(FN_Prelude_46_95fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v580)
,};
Node FN_Prelude_46Ord_46IO_46BufferMode_46_60_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v557: (byte 4) */
  bytes2word(TOP(32),BOT(32),TOP(58),BOT(58))
, bytes2word(POP_I1,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(10),BOT(10))
,	/* v575: (byte 4) */
  bytes2word(TOP(6),BOT(6),TOP(6),BOT(6))
,	/* v561: (byte 4) */
  bytes2word(POP_I1,JUMP,75,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
,	/* v562: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(10),BOT(10))
,	/* v577: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v566: (byte 2) */
  bytes2word(49,0,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v567: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(UNPACK,1,PUSH_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(6),BOT(6))
,	/* v578: (byte 2) */
  bytes2word(TOP(10),BOT(10),POP_I1,JUMP)
,	/* v571: (byte 2) */
  bytes2word(17,0,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_I2,HEAP_I1)
,	/* v568: (byte 1) */
  bytes2word(RETURN_EVAL,POP_I1,JUMP,2)
,	/* v554: (byte 1) */
  bytes2word(0,PUSH_ARG_I2,ORD,PUSH_ARG_I1)
, bytes2word(ORD,LE_W,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v579)
, 0
, 0
, 0
, 0
, useLabel(PS_v576)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, 40036
, useLabel(ST_v573)
,	/* CT_v580: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46IO_46BufferMode_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46IO_46BufferMode_46_60_61),2)
, useLabel(PS_v572)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_60_61))
, useLabel(CF_Prelude_46Ord_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v584)
,};
Node FN_Prelude_46Ord_46IO_46BufferMode_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v583)
, 0
, 0
, 0
, 0
, 40036
, useLabel(ST_v582)
,	/* CT_v584: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46IO_46BufferMode_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46IO_46BufferMode_46min),2)
, useLabel(PS_v581)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46IO_46BufferMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v588)
,};
Node FN_Prelude_46Ord_46IO_46BufferMode_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v587)
, 0
, 0
, 0
, 0
, 40036
, useLabel(ST_v586)
,	/* CT_v588: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46IO_46BufferMode_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46IO_46BufferMode_46max),2)
, useLabel(PS_v585)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46IO_46BufferMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v592)
,};
Node FN_Prelude_46Ord_46IO_46BufferMode_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v591)
, 0
, 0
, 0
, 0
, 40036
, useLabel(ST_v590)
,	/* CT_v592: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46IO_46BufferMode_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46IO_46BufferMode_46_62),2)
, useLabel(PS_v589)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46IO_46BufferMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v596)
,};
Node FN_Prelude_46Ord_46IO_46BufferMode_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v595)
, 0
, 0
, 0
, 0
, 40036
, useLabel(ST_v594)
,	/* CT_v596: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46IO_46BufferMode_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46IO_46BufferMode_46_62_61),2)
, useLabel(PS_v593)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46IO_46BufferMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v600)
,};
Node FN_Prelude_46Ord_46IO_46BufferMode_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v599)
, 0
, 0
, 0
, 0
, 40036
, useLabel(ST_v598)
,	/* CT_v600: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46IO_46BufferMode_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46IO_46BufferMode_46_60),2)
, useLabel(PS_v597)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46IO_46BufferMode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v628)
,};
Node FN_Prelude_46Eq_46IO_46BufferMode_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v604: (byte 4) */
  bytes2word(TOP(32),BOT(32),TOP(58),BOT(58))
, bytes2word(POP_I1,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(10),BOT(10))
,	/* v622: (byte 4) */
  bytes2word(TOP(6),BOT(6),TOP(6),BOT(6))
,	/* v608: (byte 4) */
  bytes2word(POP_I1,JUMP,75,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
,	/* v609: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(10),BOT(10))
,	/* v624: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v613: (byte 2) */
  bytes2word(49,0,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v614: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(UNPACK,1,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(6),BOT(6))
,	/* v625: (byte 2) */
  bytes2word(TOP(10),BOT(10),POP_I1,JUMP)
,	/* v618: (byte 2) */
  bytes2word(17,0,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_I2,HEAP_I1)
,	/* v615: (byte 1) */
  bytes2word(RETURN_EVAL,POP_I1,JUMP,2)
,	/* v601: (byte 1) */
  bytes2word(0,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v627)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v626)
, 0
, 0
, 0
, 0
, useLabel(PS_v623)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, 40032
, useLabel(ST_v620)
,	/* CT_v628: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46IO_46BufferMode_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46IO_46BufferMode_46_61_61),2)
, useLabel(PS_v619)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Maybe_46_61_61))
, useLabel(CF_Prelude_46Eq_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v632)
,};
Node FN_Prelude_46Eq_46IO_46BufferMode_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v631)
, 0
, 0
, 0
, 0
, 40032
, useLabel(ST_v630)
,	/* CT_v632: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46IO_46BufferMode_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46IO_46BufferMode_46_47_61),2)
, useLabel(PS_v629)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46IO_46BufferMode)
, bytes2word(0,0,0,0)
, useLabel(CT_v636)
,};
Node FN_Prelude_46Eq_46IO_46BufferMode[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v635)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 40032
, useLabel(ST_v634)
,	/* CT_v636: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46IO_46BufferMode[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46IO_46BufferMode))
, useLabel(PS_v633)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Eq_46IO_46BufferMode_46_47_61)
, useLabel(F0_Prelude_46Eq_46IO_46BufferMode_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v640)
,};
Node FN_Prelude_46Ord_46IO_46BufferMode[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v639)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
, 0
, 0
, 0
, 0
, 40036
, useLabel(ST_v638)
,	/* CT_v640: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46IO_46BufferMode[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46IO_46BufferMode))
, useLabel(PS_v637)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Eq_46IO_46BufferMode)
, useLabel(F0_Prelude_46Ord_46IO_46BufferMode_46_60)
, useLabel(F0_Prelude_46Ord_46IO_46BufferMode_46_60_61)
, useLabel(F0_Prelude_46Ord_46IO_46BufferMode_46_62_61)
, useLabel(F0_Prelude_46Ord_46IO_46BufferMode_46_62)
, useLabel(F0_Prelude_46Ord_46IO_46BufferMode_46compare)
, useLabel(F0_Prelude_46Ord_46IO_46BufferMode_46min)
, useLabel(F0_Prelude_46Ord_46IO_46BufferMode_46max)
, bytes2word(0,0,0,0)
, useLabel(CT_v644)
,};
Node FN_Prelude_46Read_46IO_46BufferMode[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v643)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 40041
, useLabel(ST_v642)
,	/* CT_v644: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46IO_46BufferMode[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46IO_46BufferMode))
, useLabel(PS_v641)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Read_46IO_46BufferMode_46readsPrec)
, useLabel(CF_Prelude_46Read_46IO_46BufferMode_46readList)
, bytes2word(0,0,0,0)
, useLabel(CT_v648)
,};
Node FN_Prelude_46Show_46IO_46BufferMode[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v647)
, 0
, 0
, 0
, 0
, CONSTR(0,4,0)
, 0
, 0
, 0
, 0
, 40047
, useLabel(ST_v646)
,	/* CT_v648: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46IO_46BufferMode[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46IO_46BufferMode))
, useLabel(PS_v645)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Show_46IO_46BufferMode_46showsPrec)
, useLabel(F0_Prelude_46Show_46IO_46BufferMode_46showsType)
, useLabel(F0_Prelude_46Show_46IO_46BufferMode_46showList)
, useLabel(F0_Prelude_46Show_46IO_46BufferMode_46show)
,	/* ST_v471: (byte 0) */
  bytes2word(66,108,111,99)
, bytes2word(107,66,117,102)
, bytes2word(102,101,114,105)
,	/* ST_v451: (byte 3) */
  bytes2word(110,103,0,66)
, bytes2word(117,102,102,101)
, bytes2word(114,77,111,100)
,	/* ST_v474: (byte 2) */
  bytes2word(101,0,76,105)
, bytes2word(110,101,66,117)
, bytes2word(102,102,101,114)
,	/* ST_v477: (byte 4) */
  bytes2word(105,110,103,0)
, bytes2word(78,111,66,117)
, bytes2word(102,102,101,114)
, bytes2word(105,110,103,0)
,};
Node PP_Prelude_46Eq_46IO_46BufferMode[] = {
 };
Node PC_Prelude_46Eq_46IO_46BufferMode[] = {
 	/* ST_v634: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,73)
, bytes2word(79,46,66,117)
, bytes2word(102,102,101,114)
, bytes2word(77,111,100,101)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Eq_46IO_46BufferMode_46_47_61[] = {
 };
Node PC_Prelude_46Eq_46IO_46BufferMode_46_47_61[] = {
 	/* ST_v630: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,73)
, bytes2word(79,46,66,117)
, bytes2word(102,102,101,114)
, bytes2word(77,111,100,101)
, bytes2word(46,47,61,0)
,};
Node PP_Prelude_46Eq_46IO_46BufferMode_46_61_61[] = {
 };
Node PC_Prelude_46Eq_46IO_46BufferMode_46_61_61[] = {
 	/* ST_v620: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,73)
, bytes2word(79,46,66,117)
, bytes2word(102,102,101,114)
, bytes2word(77,111,100,101)
, bytes2word(46,61,61,0)
,};
Node PP_Prelude_46Ord_46IO_46BufferMode[] = {
 };
Node PC_Prelude_46Ord_46IO_46BufferMode[] = {
 	/* ST_v638: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(73,79,46,66)
, bytes2word(117,102,102,101)
, bytes2word(114,77,111,100)
, bytes2word(101,0,0,0)
,};
Node PP_Prelude_46Ord_46IO_46BufferMode_46_60[] = {
 };
Node PC_Prelude_46Ord_46IO_46BufferMode_46_60[] = {
 	/* ST_v598: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(73,79,46,66)
, bytes2word(117,102,102,101)
, bytes2word(114,77,111,100)
, bytes2word(101,46,60,0)
,};
Node PP_Prelude_46Ord_46IO_46BufferMode_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46IO_46BufferMode_46_60_61[] = {
 	/* ST_v573: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(73,79,46,66)
, bytes2word(117,102,102,101)
, bytes2word(114,77,111,100)
, bytes2word(101,46,60,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46IO_46BufferMode_46_62[] = {
 };
Node PC_Prelude_46Ord_46IO_46BufferMode_46_62[] = {
 	/* ST_v590: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(73,79,46,66)
, bytes2word(117,102,102,101)
, bytes2word(114,77,111,100)
, bytes2word(101,46,62,0)
,};
Node PP_Prelude_46Ord_46IO_46BufferMode_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46IO_46BufferMode_46_62_61[] = {
 	/* ST_v594: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(73,79,46,66)
, bytes2word(117,102,102,101)
, bytes2word(114,77,111,100)
, bytes2word(101,46,62,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46IO_46BufferMode_46compare[] = {
 };
Node PC_Prelude_46Ord_46IO_46BufferMode_46compare[] = {
 	/* ST_v544: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(73,79,46,66)
, bytes2word(117,102,102,101)
, bytes2word(114,77,111,100)
, bytes2word(101,46,99,111)
, bytes2word(109,112,97,114)
, bytes2word(101,0,0,0)
,};
Node PP_Prelude_46Ord_46IO_46BufferMode_46max[] = {
 };
Node PC_Prelude_46Ord_46IO_46BufferMode_46max[] = {
 	/* ST_v586: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(73,79,46,66)
, bytes2word(117,102,102,101)
, bytes2word(114,77,111,100)
, bytes2word(101,46,109,97)
, bytes2word(120,0,0,0)
,};
Node PP_Prelude_46Ord_46IO_46BufferMode_46min[] = {
 };
Node PC_Prelude_46Ord_46IO_46BufferMode_46min[] = {
 	/* ST_v582: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(73,79,46,66)
, bytes2word(117,102,102,101)
, bytes2word(114,77,111,100)
, bytes2word(101,46,109,105)
, bytes2word(110,0,0,0)
,};
Node PP_Prelude_46Read_46IO_46BufferMode[] = {
 };
Node PC_Prelude_46Read_46IO_46BufferMode[] = {
 	/* ST_v642: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,73,79,46)
, bytes2word(66,117,102,102)
, bytes2word(101,114,77,111)
, bytes2word(100,101,0,0)
,};
Node PP_Prelude_46Read_46IO_46BufferMode_46readList[] = {
 };
Node PC_Prelude_46Read_46IO_46BufferMode_46readList[] = {
 	/* ST_v522: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,73,79,46)
, bytes2word(66,117,102,102)
, bytes2word(101,114,77,111)
, bytes2word(100,101,46,114)
, bytes2word(101,97,100,76)
, bytes2word(105,115,116,0)
,};
Node PP_Prelude_46Read_46IO_46BufferMode_46readsPrec[] = {
 };
Node PC_Prelude_46Read_46IO_46BufferMode_46readsPrec[] = {
 	/* ST_v488: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,73,79,46)
, bytes2word(66,117,102,102)
, bytes2word(101,114,77,111)
, bytes2word(100,101,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
,	/* PP_LAMBDA439: (byte 1) */
 	/* PC_LAMBDA439: (byte 1) */
 	/* PP_LAMBDA440: (byte 1) */
 	/* PC_LAMBDA440: (byte 1) */
 	/* PP_LAMBDA441: (byte 1) */
 	/* PC_LAMBDA441: (byte 1) */
 	/* PP_LAMBDA442: (byte 1) */
 	/* PC_LAMBDA442: (byte 1) */
 	/* PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235: (byte 1) */
 	/* PC_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235: (byte 1) */
 	/* PP_LAMBDA443: (byte 1) */
 	/* PC_LAMBDA443: (byte 1) */
 	/* ST_v492: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,73,79)
, bytes2word(46,66,117,102)
, bytes2word(102,101,114,77)
, bytes2word(111,100,101,46)
, bytes2word(114,101,97,100)
, bytes2word(115,80,114,101)
, bytes2word(99,58,52,58)
, bytes2word(52,49,45,52)
, bytes2word(58,52,52,0)
,};
Node PP_Prelude_46Show_46IO_46BufferMode[] = {
 };
Node PC_Prelude_46Show_46IO_46BufferMode[] = {
 	/* ST_v646: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,73,79,46)
, bytes2word(66,117,102,102)
, bytes2word(101,114,77,111)
, bytes2word(100,101,0,0)
,};
Node PP_Prelude_46Show_46IO_46BufferMode_46show[] = {
 };
Node PC_Prelude_46Show_46IO_46BufferMode_46show[] = {
 	/* ST_v480: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,73,79,46)
, bytes2word(66,117,102,102)
, bytes2word(101,114,77,111)
, bytes2word(100,101,46,115)
, bytes2word(104,111,119,0)
,};
Node PP_Prelude_46Show_46IO_46BufferMode_46showList[] = {
 };
Node PC_Prelude_46Show_46IO_46BufferMode_46showList[] = {
 	/* ST_v484: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,73,79,46)
, bytes2word(66,117,102,102)
, bytes2word(101,114,77,111)
, bytes2word(100,101,46,115)
, bytes2word(104,111,119,76)
, bytes2word(105,115,116,0)
,};
Node PP_Prelude_46Show_46IO_46BufferMode_46showsPrec[] = {
 };
Node PC_Prelude_46Show_46IO_46BufferMode_46showsPrec[] = {
 	/* ST_v458: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,73,79,46)
, bytes2word(66,117,102,102)
, bytes2word(101,114,77,111)
, bytes2word(100,101,46,115)
, bytes2word(104,111,119,115)
, bytes2word(80,114,101,99)
,	/* PP_LAMBDA436: (byte 1) */
 	/* PC_LAMBDA436: (byte 1) */
 	/* PP_LAMBDA437: (byte 1) */
 	/* PC_LAMBDA437: (byte 1) */
 	/* PP_LAMBDA438: (byte 1) */
 	/* PC_LAMBDA438: (byte 1) */
 	/* ST_v470: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,73,79)
, bytes2word(46,66,117,102)
, bytes2word(102,101,114,77)
, bytes2word(111,100,101,46)
, bytes2word(115,104,111,119)
, bytes2word(115,80,114,101)
, bytes2word(99,58,52,58)
, bytes2word(52,55,45,52)
, bytes2word(58,53,48,0)
,};
Node PP_Prelude_46Show_46IO_46BufferMode_46showsType[] = {
 };
Node PC_Prelude_46Show_46IO_46BufferMode_46showsType[] = {
 	/* ST_v446: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,73,79,46)
, bytes2word(66,117,102,102)
, bytes2word(101,114,77,111)
, bytes2word(100,101,46,115)
, bytes2word(104,111,119,115)
, bytes2word(84,121,112,101)
,	/* PP_LAMBDA435: (byte 1) */
 	/* PC_LAMBDA435: (byte 1) */
 	/* ST_v450: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,73,79)
, bytes2word(46,66,117,102)
, bytes2word(102,101,114,77)
, bytes2word(111,100,101,46)
, bytes2word(115,104,111,119)
, bytes2word(115,84,121,112)
, bytes2word(101,58,52,58)
, bytes2word(52,55,45,52)
, bytes2word(58,53,48,0)
,	/* PS_v627: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46BufferMode_46_61_61)
, useLabel(PC_Prelude_46False)
,	/* PS_v623: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46BufferMode_46_61_61)
, useLabel(PC_Prelude_46True)
,	/* PS_v619: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46BufferMode_46_61_61)
, useLabel(PC_Prelude_46Eq_46IO_46BufferMode_46_61_61)
,	/* PS_v626: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46BufferMode_46_61_61)
, useLabel(PC_Prelude_46Eq_46Prelude_46Maybe_46_61_61)
,	/* PS_v631: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46BufferMode_46_47_61)
, useLabel(PC_Prelude_46_95_46_47_61)
,	/* PS_v629: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46BufferMode_46_47_61)
, useLabel(PC_Prelude_46Eq_46IO_46BufferMode_46_47_61)
,	/* PS_v576: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46_60_61)
, useLabel(PC_Prelude_46True)
,	/* PS_v572: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46_60_61)
, useLabel(PC_Prelude_46Ord_46IO_46BufferMode_46_60_61)
,	/* PS_v579: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe_46_60_61)
,	/* PS_v551: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46compare)
, useLabel(PC_Prelude_46_95fromEnum)
,	/* PS_v547: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46compare)
, useLabel(PC_Prelude_46EQ)
,	/* PS_v543: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46compare)
, useLabel(PC_Prelude_46Ord_46IO_46BufferMode_46compare)
,	/* PS_v550: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe_46compare)
,	/* PS_v552: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_46Int_46compare)
,	/* PS_v599: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46_60)
, useLabel(PC_Prelude_46_95_46_60)
,	/* PS_v597: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46_60)
, useLabel(PC_Prelude_46Ord_46IO_46BufferMode_46_60)
,	/* PS_v595: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v593: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46_62_61)
, useLabel(PC_Prelude_46Ord_46IO_46BufferMode_46_62_61)
,	/* PS_v591: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v589: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46_62)
, useLabel(PC_Prelude_46Ord_46IO_46BufferMode_46_62)
,	/* PS_v587: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v585: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46max)
, useLabel(PC_Prelude_46Ord_46IO_46BufferMode_46max)
,	/* PS_v583: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v581: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode_46min)
, useLabel(PC_Prelude_46Ord_46IO_46BufferMode_46min)
,	/* PS_v487: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Read_46IO_46BufferMode_46readsPrec)
, useLabel(PC_Prelude_46Read_46IO_46BufferMode_46readsPrec)
,	/* PS_v489: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Read_46IO_46BufferMode_46readsPrec)
, useLabel(PC_LAMBDA443)
,	/* PS_v523: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Read_46IO_46BufferMode_46readList)
, useLabel(PC_Prelude_46_95_46readList)
,	/* PS_v521: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Read_46IO_46BufferMode_46readList)
, useLabel(PC_Prelude_46Read_46IO_46BufferMode_46readList)
,	/* PS_v463: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Show_46IO_46BufferMode_46showsPrec)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v460: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Show_46IO_46BufferMode_46showsPrec)
, useLabel(PC_Prelude_46showString)
,	/* PS_v467: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Show_46IO_46BufferMode_46showsPrec)
, useLabel(PC_Prelude_46showParen)
,	/* PS_v464: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Show_46IO_46BufferMode_46showsPrec)
, useLabel(PC_Prelude_46showChar)
,	/* PS_v465: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Show_46IO_46BufferMode_46showsPrec)
, useLabel(PC_Prelude_46_46)
,	/* PS_v457: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Show_46IO_46BufferMode_46showsPrec)
, useLabel(PC_Prelude_46Show_46IO_46BufferMode_46showsPrec)
,	/* PS_v461: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Show_46IO_46BufferMode_46showsPrec)
, useLabel(PC_Prelude_46Ord_46Prelude_46Int_46_60)
,	/* PS_v466: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Show_46IO_46BufferMode_46showsPrec)
, useLabel(PC_Prelude_46Show_46Prelude_46Maybe_46showsPrec)
,	/* PS_v462: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Show_46IO_46BufferMode_46showsPrec)
, useLabel(PC_LAMBDA438)
,	/* PS_v447: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Show_46IO_46BufferMode_46showsType)
, useLabel(PC_Prelude_46showString)
,	/* PS_v445: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Show_46IO_46BufferMode_46showsType)
, useLabel(PC_Prelude_46Show_46IO_46BufferMode_46showsType)
,	/* PS_v485: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Show_46IO_46BufferMode_46showList)
, useLabel(PC_Prelude_46_95_46showList)
,	/* PS_v483: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Show_46IO_46BufferMode_46showList)
, useLabel(PC_Prelude_46Show_46IO_46BufferMode_46showList)
,	/* PS_v481: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Show_46IO_46BufferMode_46show)
, useLabel(PC_Prelude_46_95_46show)
,	/* PS_v479: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Show_46IO_46BufferMode_46show)
, useLabel(PC_Prelude_46Show_46IO_46BufferMode_46show)
,	/* PS_v500: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v499: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
, useLabel(PC_Prelude_46_95readCon0)
,	/* PS_v506: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
, useLabel(PC_Prelude_46_95readConArg)
,	/* PS_v507: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
, useLabel(PC_Prelude_46readParen)
,	/* PS_v505: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
, useLabel(PC_Prelude_46_95readCon)
,	/* PS_v510: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v496: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
, useLabel(PC_Prelude_46False)
,	/* PS_v508: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
, useLabel(PC_IO_46NoBuffering)
,	/* PS_v497: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
, useLabel(PC_IO_46LineBuffering)
,	/* PS_v495: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
, useLabel(PC_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
,	/* PS_v501: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
, useLabel(PC_Prelude_46Ord_46Prelude_46Int_46_62)
,	/* PS_v502: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
, useLabel(PC_Prelude_46Read_46Prelude_46Maybe)
,	/* PS_v498: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
, useLabel(PC_LAMBDA439)
,	/* PS_v503: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
, useLabel(PC_LAMBDA440)
,	/* PS_v504: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
, useLabel(PC_LAMBDA441)
,	/* PS_v509: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
, useLabel(PC_LAMBDA442)
,	/* PS_v645: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Show_46IO_46BufferMode)
, useLabel(PC_Prelude_46Show_46IO_46BufferMode)
,	/* PS_v647: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Show_46IO_46BufferMode)
, useLabel(PC_Prelude_464)
,	/* PS_v641: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Read_46IO_46BufferMode)
, useLabel(PC_Prelude_46Read_46IO_46BufferMode)
,	/* PS_v643: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Read_46IO_46BufferMode)
, useLabel(PC_Prelude_462)
,	/* PS_v637: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode)
, useLabel(PC_Prelude_46Ord_46IO_46BufferMode)
,	/* PS_v639: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Ord_46IO_46BufferMode)
, useLabel(PC_Prelude_468)
,	/* PS_v633: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46BufferMode)
, useLabel(PC_Prelude_46Eq_46IO_46BufferMode)
,	/* PS_v635: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46BufferMode)
, useLabel(PC_Prelude_462)
,	/* PS_v449: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA435)
, useLabel(PC_LAMBDA435)
,	/* PS_v476: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA436)
, useLabel(PC_LAMBDA436)
,	/* PS_v473: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA437)
, useLabel(PC_LAMBDA437)
,	/* PS_v469: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA438)
, useLabel(PC_LAMBDA438)
,	/* PS_v519: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA439)
, useLabel(PC_LAMBDA439)
,	/* PS_v517: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA440)
, useLabel(PC_IO_46BlockBuffering)
,	/* PS_v516: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA440)
, useLabel(PC_LAMBDA440)
,	/* PS_v514: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA441)
, useLabel(PC_LAMBDA441)
,	/* PS_v512: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA442)
, useLabel(PC_LAMBDA442)
,	/* PS_v493: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA443)
, useLabel(PC_IO_46Prelude_46Read_46IO_46BufferMode_46readsPrec_39235)
,	/* PS_v491: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA443)
, useLabel(PC_LAMBDA443)
,};
