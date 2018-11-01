#include "newmacros.h"
#include "runtime.h"

#define C0_Main_46DumpGCSafe	((void*)startLabel+4)
#define C0_Main_46DumpVerbose	((void*)startLabel+8)
#define C0_Main_46DumpDebug	((void*)startLabel+12)
#define C0_Main_46DumpHelp	((void*)startLabel+16)
#define C0_Main_46DumpVersion	((void*)startLabel+20)
#define FN_Main_46options	((void*)startLabel+32)
#define CT_v586	((void*)startLabel+388)
#define CF_Main_46options	((void*)startLabel+396)
#define FN_LAMBDA562	((void*)startLabel+548)
#define CT_v587	((void*)startLabel+568)
#define F0_LAMBDA562	((void*)startLabel+576)
#define FN_LAMBDA561	((void*)startLabel+588)
#define CT_v588	((void*)startLabel+608)
#define F0_LAMBDA561	((void*)startLabel+616)
#define FN_LAMBDA560	((void*)startLabel+628)
#define CT_v590	((void*)startLabel+648)
#define CF_LAMBDA560	((void*)startLabel+656)
#define FN_LAMBDA559	((void*)startLabel+668)
#define CT_v591	((void*)startLabel+688)
#define F0_LAMBDA559	((void*)startLabel+696)
#define FN_LAMBDA558	((void*)startLabel+708)
#define CT_v593	((void*)startLabel+728)
#define CF_LAMBDA558	((void*)startLabel+736)
#define FN_LAMBDA557	((void*)startLabel+748)
#define CT_v594	((void*)startLabel+768)
#define F0_LAMBDA557	((void*)startLabel+776)
#define FN_LAMBDA556	((void*)startLabel+788)
#define CT_v596	((void*)startLabel+808)
#define CF_LAMBDA556	((void*)startLabel+816)
#define FN_LAMBDA555	((void*)startLabel+828)
#define CT_v597	((void*)startLabel+848)
#define F0_LAMBDA555	((void*)startLabel+856)
#define FN_LAMBDA554	((void*)startLabel+868)
#define CT_v599	((void*)startLabel+888)
#define CF_LAMBDA554	((void*)startLabel+896)
#define FN_LAMBDA553	((void*)startLabel+908)
#define CT_v601	((void*)startLabel+928)
#define CF_LAMBDA553	((void*)startLabel+936)
#define FN_LAMBDA552	((void*)startLabel+948)
#define CT_v603	((void*)startLabel+968)
#define CF_LAMBDA552	((void*)startLabel+976)
#define FN_LAMBDA551	((void*)startLabel+988)
#define CT_v605	((void*)startLabel+1008)
#define CF_LAMBDA551	((void*)startLabel+1016)
#define FN_LAMBDA550	((void*)startLabel+1028)
#define CT_v607	((void*)startLabel+1048)
#define CF_LAMBDA550	((void*)startLabel+1056)
#define FN_LAMBDA549	((void*)startLabel+1068)
#define CT_v608	((void*)startLabel+1088)
#define F0_LAMBDA549	((void*)startLabel+1096)
#define FN_LAMBDA548	((void*)startLabel+1108)
#define CT_v610	((void*)startLabel+1128)
#define CF_LAMBDA548	((void*)startLabel+1136)
#define FN_LAMBDA547	((void*)startLabel+1148)
#define CT_v611	((void*)startLabel+1168)
#define F0_LAMBDA547	((void*)startLabel+1176)
#define FN_LAMBDA546	((void*)startLabel+1188)
#define CT_v613	((void*)startLabel+1208)
#define CF_LAMBDA546	((void*)startLabel+1216)
#define FN_LAMBDA545	((void*)startLabel+1228)
#define CT_v614	((void*)startLabel+1248)
#define F0_LAMBDA545	((void*)startLabel+1256)
#define FN_LAMBDA544	((void*)startLabel+1268)
#define CT_v616	((void*)startLabel+1288)
#define CF_LAMBDA544	((void*)startLabel+1296)
#define FN_LAMBDA543	((void*)startLabel+1308)
#define CT_v618	((void*)startLabel+1328)
#define CF_LAMBDA543	((void*)startLabel+1336)
#define FN_LAMBDA542	((void*)startLabel+1348)
#define CT_v620	((void*)startLabel+1368)
#define CF_LAMBDA542	((void*)startLabel+1376)
#define FN_LAMBDA541	((void*)startLabel+1388)
#define CT_v622	((void*)startLabel+1408)
#define CF_LAMBDA541	((void*)startLabel+1416)
#define FN_LAMBDA540	((void*)startLabel+1428)
#define CT_v624	((void*)startLabel+1448)
#define CF_LAMBDA540	((void*)startLabel+1456)
#define FN_LAMBDA539	((void*)startLabel+1468)
#define CT_v626	((void*)startLabel+1488)
#define CF_LAMBDA539	((void*)startLabel+1496)
#define FN_LAMBDA538	((void*)startLabel+1508)
#define CT_v628	((void*)startLabel+1528)
#define CF_LAMBDA538	((void*)startLabel+1536)
#define FN_LAMBDA537	((void*)startLabel+1548)
#define CT_v629	((void*)startLabel+1568)
#define CF_LAMBDA537	((void*)startLabel+1576)
#define FN_Main_46greencard	((void*)startLabel+1588)
#define v630	((void*)startLabel+1782)
#define v632	((void*)startLabel+1796)
#define v635	((void*)startLabel+1808)
#define v636	((void*)startLabel+1814)
#define v640	((void*)startLabel+1834)
#define v641	((void*)startLabel+1852)
#define v767	((void*)startLabel+1864)
#define v645	((void*)startLabel+1868)
#define v768	((void*)startLabel+1890)
#define v649	((void*)startLabel+1894)
#define v769	((void*)startLabel+1904)
#define v653	((void*)startLabel+1908)
#define v770	((void*)startLabel+1922)
#define v657	((void*)startLabel+1926)
#define v771	((void*)startLabel+1936)
#define v661	((void*)startLabel+1940)
#define v772	((void*)startLabel+1954)
#define v665	((void*)startLabel+1958)
#define v773	((void*)startLabel+1968)
#define v669	((void*)startLabel+1972)
#define v774	((void*)startLabel+1986)
#define v673	((void*)startLabel+1990)
#define v775	((void*)startLabel+2000)
#define v677	((void*)startLabel+2004)
#define v776	((void*)startLabel+2016)
#define v681	((void*)startLabel+2020)
#define v670	((void*)startLabel+2039)
#define v662	((void*)startLabel+2044)
#define v654	((void*)startLabel+2049)
#define v682	((void*)startLabel+2054)
#define v777	((void*)startLabel+2064)
#define v686	((void*)startLabel+2068)
#define v778	((void*)startLabel+2082)
#define v690	((void*)startLabel+2086)
#define v779	((void*)startLabel+2096)
#define v694	((void*)startLabel+2100)
#define v780	((void*)startLabel+2114)
#define v698	((void*)startLabel+2118)
#define v781	((void*)startLabel+2128)
#define v702	((void*)startLabel+2132)
#define v782	((void*)startLabel+2144)
#define v706	((void*)startLabel+2148)
#define v695	((void*)startLabel+2167)
#define v687	((void*)startLabel+2172)
#define v707	((void*)startLabel+2177)
#define v783	((void*)startLabel+2188)
#define v711	((void*)startLabel+2192)
#define v784	((void*)startLabel+2206)
#define v715	((void*)startLabel+2210)
#define v785	((void*)startLabel+2220)
#define v719	((void*)startLabel+2224)
#define v786	((void*)startLabel+2238)
#define v723	((void*)startLabel+2242)
#define v787	((void*)startLabel+2252)
#define v727	((void*)startLabel+2256)
#define v788	((void*)startLabel+2274)
#define v731	((void*)startLabel+2278)
#define v789	((void*)startLabel+2288)
#define v735	((void*)startLabel+2292)
#define v790	((void*)startLabel+2306)
#define v739	((void*)startLabel+2310)
#define v791	((void*)startLabel+2320)
#define v743	((void*)startLabel+2324)
#define v792	((void*)startLabel+2336)
#define v747	((void*)startLabel+2340)
#define v736	((void*)startLabel+2359)
#define v748	((void*)startLabel+2364)
#define v793	((void*)startLabel+2374)
#define v752	((void*)startLabel+2378)
#define v794	((void*)startLabel+2392)
#define v756	((void*)startLabel+2396)
#define v795	((void*)startLabel+2406)
#define v760	((void*)startLabel+2410)
#define v796	((void*)startLabel+2422)
#define v764	((void*)startLabel+2426)
#define v753	((void*)startLabel+2445)
#define v728	((void*)startLabel+2450)
#define v720	((void*)startLabel+2455)
#define v712	((void*)startLabel+2460)
#define v646	((void*)startLabel+2465)
#define v642	((void*)startLabel+2470)
#define v637	((void*)startLabel+2475)
#define CT_v797	((void*)startLabel+2512)
#define F0_Main_46greencard	((void*)startLabel+2520)
#define FN_LAMBDA572	((void*)startLabel+2616)
#define CT_v799	((void*)startLabel+2636)
#define CF_LAMBDA572	((void*)startLabel+2644)
#define FN_Main_46Prelude_46232_46greencard_39	((void*)startLabel+2668)
#define CT_v800	((void*)startLabel+2712)
#define F0_Main_46Prelude_46232_46greencard_39	((void*)startLabel+2720)
#define FN_LAMBDA571	((void*)startLabel+2752)
#define CT_v802	((void*)startLabel+2772)
#define CF_LAMBDA571	((void*)startLabel+2780)
#define FN_LAMBDA570	((void*)startLabel+2792)
#define CT_v804	((void*)startLabel+2812)
#define CF_LAMBDA570	((void*)startLabel+2820)
#define FN_LAMBDA569	((void*)startLabel+2832)
#define CT_v806	((void*)startLabel+2852)
#define CF_LAMBDA569	((void*)startLabel+2860)
#define FN_LAMBDA568	((void*)startLabel+2872)
#define CT_v808	((void*)startLabel+2892)
#define CF_LAMBDA568	((void*)startLabel+2900)
#define FN_LAMBDA567	((void*)startLabel+2916)
#define v813	((void*)startLabel+2940)
#define v812	((void*)startLabel+2944)
#define v809	((void*)startLabel+2953)
#define CT_v814	((void*)startLabel+2968)
#define F0_LAMBDA567	((void*)startLabel+2976)
#define FN_LAMBDA566	((void*)startLabel+2992)
#define v819	((void*)startLabel+3016)
#define v818	((void*)startLabel+3020)
#define v815	((void*)startLabel+3029)
#define CT_v820	((void*)startLabel+3044)
#define F0_LAMBDA566	((void*)startLabel+3052)
#define FN_LAMBDA565	((void*)startLabel+3068)
#define v825	((void*)startLabel+3092)
#define v824	((void*)startLabel+3096)
#define v821	((void*)startLabel+3105)
#define CT_v826	((void*)startLabel+3120)
#define F0_LAMBDA565	((void*)startLabel+3128)
#define FN_LAMBDA564	((void*)startLabel+3144)
#define v831	((void*)startLabel+3168)
#define v830	((void*)startLabel+3172)
#define v827	((void*)startLabel+3181)
#define CT_v832	((void*)startLabel+3196)
#define F0_LAMBDA564	((void*)startLabel+3204)
#define FN_Main_46Prelude_46244_46ensuredir	((void*)startLabel+3216)
#define v841	((void*)startLabel+3232)
#define v836	((void*)startLabel+3236)
#define v842	((void*)startLabel+3250)
#define v840	((void*)startLabel+3254)
#define v837	((void*)startLabel+3257)
#define v833	((void*)startLabel+3262)
#define CT_v843	((void*)startLabel+3276)
#define F0_Main_46Prelude_46244_46ensuredir	((void*)startLabel+3284)
#define FN_LAMBDA563	((void*)startLabel+3308)
#define CT_v845	((void*)startLabel+3328)
#define CF_LAMBDA563	((void*)startLabel+3336)
#define FN_Main_46main2	((void*)startLabel+3348)
#define CT_v846	((void*)startLabel+3384)
#define F0_Main_46main2	((void*)startLabel+3392)
#define FN_Main_46tsth	((void*)startLabel+3424)
#define CT_v847	((void*)startLabel+3480)
#define F0_Main_46tsth	((void*)startLabel+3488)
#define FN_LAMBDA575	((void*)startLabel+3520)
#define CT_v849	((void*)startLabel+3540)
#define CF_LAMBDA575	((void*)startLabel+3548)
#define FN_LAMBDA574	((void*)startLabel+3560)
#define CT_v851	((void*)startLabel+3580)
#define CF_LAMBDA574	((void*)startLabel+3588)
#define FN_LAMBDA573	((void*)startLabel+3600)
#define CT_v853	((void*)startLabel+3620)
#define CF_LAMBDA573	((void*)startLabel+3628)
#define FN_Main_46tstn	((void*)startLabel+3640)
#define CT_v854	((void*)startLabel+3696)
#define F0_Main_46tstn	((void*)startLabel+3704)
#define FN_LAMBDA578	((void*)startLabel+3736)
#define CT_v856	((void*)startLabel+3756)
#define CF_LAMBDA578	((void*)startLabel+3764)
#define FN_LAMBDA577	((void*)startLabel+3776)
#define CT_v857	((void*)startLabel+3796)
#define CF_LAMBDA577	((void*)startLabel+3804)
#define FN_LAMBDA576	((void*)startLabel+3816)
#define CT_v858	((void*)startLabel+3836)
#define CF_LAMBDA576	((void*)startLabel+3844)
#define FN_Main_46tstg	((void*)startLabel+3856)
#define CT_v859	((void*)startLabel+3912)
#define F0_Main_46tstg	((void*)startLabel+3920)
#define FN_LAMBDA581	((void*)startLabel+3952)
#define CT_v861	((void*)startLabel+3972)
#define CF_LAMBDA581	((void*)startLabel+3980)
#define FN_LAMBDA580	((void*)startLabel+3992)
#define CT_v862	((void*)startLabel+4012)
#define CF_LAMBDA580	((void*)startLabel+4020)
#define FN_LAMBDA579	((void*)startLabel+4032)
#define CT_v863	((void*)startLabel+4052)
#define CF_LAMBDA579	((void*)startLabel+4060)
#define CT_v864	((void*)startLabel+4088)
#define FN_LAMBDA582	((void*)startLabel+4120)
#define CT_v865	((void*)startLabel+4152)
#define F0_LAMBDA582	((void*)startLabel+4160)
#define v869	((void*)startLabel+4216)
#define v915	((void*)startLabel+4240)
#define v873	((void*)startLabel+4244)
#define v874	((void*)startLabel+4249)
#define v916	((void*)startLabel+4274)
#define v878	((void*)startLabel+4278)
#define v879	((void*)startLabel+4283)
#define v917	((void*)startLabel+4308)
#define v883	((void*)startLabel+4312)
#define v884	((void*)startLabel+4317)
#define v918	((void*)startLabel+4342)
#define v888	((void*)startLabel+4346)
#define v889	((void*)startLabel+4351)
#define v919	((void*)startLabel+4376)
#define v893	((void*)startLabel+4380)
#define v894	((void*)startLabel+4385)
#define v920	((void*)startLabel+4410)
#define v898	((void*)startLabel+4414)
#define v895	((void*)startLabel+4422)
#define v899	((void*)startLabel+4426)
#define v921	((void*)startLabel+4452)
#define v903	((void*)startLabel+4456)
#define v900	((void*)startLabel+4464)
#define v904	((void*)startLabel+4468)
#define v922	((void*)startLabel+4494)
#define v908	((void*)startLabel+4498)
#define v905	((void*)startLabel+4506)
#define v909	((void*)startLabel+4510)
#define v923	((void*)startLabel+4536)
#define v913	((void*)startLabel+4540)
#define v910	((void*)startLabel+4548)
#define v866	((void*)startLabel+4552)
#define CT_v924	((void*)startLabel+4572)
#define CT_v925	((void*)startLabel+4616)
#define CT_v926	((void*)startLabel+4664)
#define ST_v805	((void*)startLabel+4684)
#define ST_v627	((void*)startLabel+4686)
#define ST_v852	((void*)startLabel+4688)
#define ST_v850	((void*)startLabel+4696)
#define ST_v848	((void*)startLabel+4712)
#define ST_v860	((void*)startLabel+4726)
#define ST_v855	((void*)startLabel+4739)
#define ST_v803	((void*)startLabel+4754)
#define ST_v801	((void*)startLabel+4757)
#define ST_v844	((void*)startLabel+4761)
#define ST_v798	((void*)startLabel+4763)
#define ST_v592	((void*)startLabel+4818)
#define ST_v589	((void*)startLabel+4820)
#define ST_v807	((void*)startLabel+4822)
#define ST_v609	((void*)startLabel+4860)
#define ST_v604	((void*)startLabel+4869)
#define ST_v621	((void*)startLabel+4871)
#define ST_v617	((void*)startLabel+4877)
#define ST_v600	((void*)startLabel+4886)
#define ST_v606	((void*)startLabel+4888)
#define ST_v623	((void*)startLabel+4890)
#define ST_v595	((void*)startLabel+4895)
#define ST_v612	((void*)startLabel+4897)
#define ST_v598	((void*)startLabel+4909)
#define ST_v615	((void*)startLabel+4911)
#define ST_v602	((void*)startLabel+4918)
#define ST_v619	((void*)startLabel+4920)
#define ST_v625	((void*)startLabel+4928)
extern Node FN_GetOptSOF_46prefixed[];
extern Node FN_GetOptSOF_46_45_61[];
extern Node FN_GetOptSOF_46_45_61_61_61[];
extern Node FN_GetOptSOF_46opts[];
extern Node FN_Prelude_46_36[];
extern Node FN_GetOptSOF_46_45_61_61[];
extern Node FN_Prelude_46const[];
extern Node FN_GetOptSOF_46_45_63[];
extern Node FN_GetOptSOF_46orOpt[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46reverse[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46head[];
extern Node FN_Prelude_46Eq_46Main_46CLIOptions_46_61_61[];
extern Node FN_Prelude_46any[];
extern Node FN_Prelude_46_43_43[];
extern Node CF_Package_46version[];
extern Node CF_Package_46name[];
extern Node FN_Prelude_46putStrLn[];
extern Node FN_ListUtils_46dropSuffix[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node FN_Process_46processFile[];
extern Node FN_Prelude_46words[];
extern Node FN_GetOptSOF_46getOpts[];
extern Node FN_Prelude_46snd[];
extern Node FN_Prelude_46unwords[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_System_46getArgs[];
extern Node FN_Prelude_46Eq_46Prelude_46_91_93_46_61_61[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46Main_46CLIOptions[];

static Node startLabel[] = {
  42
,	/* C0_Main_46DumpGCSafe: (byte 0) */
  CONSTR(4,0,0)
,	/* C0_Main_46DumpVerbose: (byte 0) */
  CONSTR(3,0,0)
,	/* C0_Main_46DumpDebug: (byte 0) */
  CONSTR(2,0,0)
,	/* C0_Main_46DumpHelp: (byte 0) */
  CONSTR(1,0,0)
,	/* C0_Main_46DumpVersion: (byte 0) */
  CONSTR(0,0,0)
, bytes2word(0,0,0,0)
, useLabel(CT_v586)
,	/* FN_Main_46options: (byte 0) */
  bytes2word(NEEDHEAP_P1,162,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I5,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_IN3,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,4,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(5,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,15,HEAP_CVAL_P1)
, bytes2word(16,HEAP_CVAL_P1,14,HEAP_OFF_N1)
, bytes2word(3,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(17,HEAP_CVAL_P1,18,HEAP_CVAL_P1)
, bytes2word(14,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_N1,1,HEAP_CVAL_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_N1,6,HEAP_OFF_N1)
, bytes2word(13,HEAP_OFF_N1,5,HEAP_CVAL_N1)
, bytes2word(6,HEAP_OFF_N1,21,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_N1,6,HEAP_OFF_N1)
, bytes2word(29,HEAP_OFF_N1,5,HEAP_CVAL_N1)
, bytes2word(6,HEAP_OFF_N1,37,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_N1,6,HEAP_OFF_N1)
, bytes2word(45,HEAP_OFF_N1,5,HEAP_CVAL_N1)
, bytes2word(6,HEAP_OFF_N1,53,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_N1,6,HEAP_OFF_N1)
, bytes2word(61,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(19,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(20,HEAP_OFF_N1,70,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,21,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(22,HEAP_CVAL_IN3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,23,HEAP_CVAL_N1,4)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,24)
, bytes2word(HEAP_CVAL_N1,5,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,25,HEAP_CVAL_P1,26)
, bytes2word(HEAP_CVAL_P1,27,HEAP_OFF_N1,3)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,28)
, bytes2word(HEAP_CVAL_P1,29,HEAP_CVAL_P1,27)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,30,HEAP_CVAL_P1,31)
, bytes2word(HEAP_CVAL_P1,27,HEAP_OFF_N1,3)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,32)
, bytes2word(HEAP_CVAL_P1,33,HEAP_CVAL_P1,27)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_N1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_N1,6,HEAP_OFF_N1,13)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_N1,6)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_N1,6,HEAP_OFF_N1,29)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_N1,6)
, bytes2word(HEAP_OFF_N1,37,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_N1,6,HEAP_OFF_N1,45)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_N1,6)
, bytes2word(HEAP_OFF_N1,53,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_N1,6,HEAP_OFF_N1,61)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_N1,6)
, bytes2word(HEAP_OFF_N1,69,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,19,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,20,HEAP_OFF_N1)
, bytes2word(146,HEAP_OFF_N1,4,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CVAL_P1,34,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_P1,35,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,36,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,3,PUSH_P1,0)
, bytes2word(PUSH_P1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(37,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(4,0,0)
, CONSTR(3,0,0)
, CONSTR(2,0,0)
, CONSTR(1,0,0)
, CONSTR(0,0,0)
,	/* CT_v586: (byte 0) */
  HW(35,0)
, 0
,	/* CF_Main_46options: (byte 0) */
  VAPTAG(useLabel(FN_Main_46options))
, VAPTAG(useLabel(FN_LAMBDA537))
, CAPTAG(useLabel(FN_GetOptSOF_46prefixed),1)
, VAPTAG(useLabel(FN_LAMBDA538))
, VAPTAG(useLabel(FN_LAMBDA539))
, VAPTAG(useLabel(FN_GetOptSOF_46_45_61))
, VAPTAG(useLabel(FN_LAMBDA540))
, VAPTAG(useLabel(FN_LAMBDA541))
, VAPTAG(useLabel(FN_LAMBDA542))
, VAPTAG(useLabel(FN_LAMBDA543))
, VAPTAG(useLabel(FN_LAMBDA544))
, CAPTAG(useLabel(FN_LAMBDA545),1)
, VAPTAG(useLabel(FN_GetOptSOF_46_45_61_61_61))
, VAPTAG(useLabel(FN_LAMBDA546))
, CAPTAG(useLabel(FN_LAMBDA547),1)
, VAPTAG(useLabel(FN_LAMBDA548))
, CAPTAG(useLabel(FN_LAMBDA549),1)
, VAPTAG(useLabel(FN_GetOptSOF_46opts))
, VAPTAG(useLabel(FN_Prelude_46_36))
, VAPTAG(useLabel(FN_LAMBDA550))
, VAPTAG(useLabel(FN_LAMBDA551))
, VAPTAG(useLabel(FN_LAMBDA552))
, VAPTAG(useLabel(FN_LAMBDA553))
, VAPTAG(useLabel(FN_LAMBDA554))
, CAPTAG(useLabel(FN_LAMBDA555),1)
, VAPTAG(useLabel(FN_GetOptSOF_46_45_61_61))
, VAPTAG(useLabel(FN_LAMBDA556))
, CAPTAG(useLabel(FN_LAMBDA557),1)
, VAPTAG(useLabel(FN_LAMBDA558))
, CAPTAG(useLabel(FN_LAMBDA559),1)
, VAPTAG(useLabel(FN_LAMBDA560))
, CAPTAG(useLabel(FN_LAMBDA561),1)
, CAPTAG(useLabel(FN_Prelude_46const),1)
, CAPTAG(useLabel(FN_LAMBDA562),1)
, VAPTAG(useLabel(FN_GetOptSOF_46_45_63))
, VAPTAG(useLabel(FN_GetOptSOF_46orOpt))
, bytes2word(1,0,0,1)
, useLabel(CT_v587)
,	/* FN_LAMBDA562: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(8,1,0)
,	/* CT_v587: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA562: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA562),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v588)
,	/* FN_LAMBDA561: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(7,1,0)
,	/* CT_v588: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA561: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA561),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v590)
,	/* FN_LAMBDA560: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v589)
,	/* CT_v590: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA560: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA560))
, bytes2word(1,0,0,1)
, useLabel(CT_v591)
,	/* FN_LAMBDA559: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(7,1,0)
,	/* CT_v591: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA559: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA559),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v593)
,	/* FN_LAMBDA558: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v592)
,	/* CT_v593: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA558: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA558))
, bytes2word(1,0,0,1)
, useLabel(CT_v594)
,	/* FN_LAMBDA557: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(7,1,0)
,	/* CT_v594: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA557: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA557),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v596)
,	/* FN_LAMBDA556: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v595)
,	/* CT_v596: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA556: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA556))
, bytes2word(1,0,0,1)
, useLabel(CT_v597)
,	/* FN_LAMBDA555: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(5,1,0)
,	/* CT_v597: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA555: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA555),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v599)
,	/* FN_LAMBDA554: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v598)
,	/* CT_v599: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA554: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA554))
, bytes2word(0,0,0,0)
, useLabel(CT_v601)
,	/* FN_LAMBDA553: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v600)
,	/* CT_v601: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA553: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA553))
, bytes2word(0,0,0,0)
, useLabel(CT_v603)
,	/* FN_LAMBDA552: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v602)
,	/* CT_v603: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA552: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA552))
, bytes2word(0,0,0,0)
, useLabel(CT_v605)
,	/* FN_LAMBDA551: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v604)
,	/* CT_v605: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA551: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA551))
, bytes2word(0,0,0,0)
, useLabel(CT_v607)
,	/* FN_LAMBDA550: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v606)
,	/* CT_v607: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA550: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA550))
, bytes2word(1,0,0,1)
, useLabel(CT_v608)
,	/* FN_LAMBDA549: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(6,1,0)
,	/* CT_v608: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA549: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA549),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v610)
,	/* FN_LAMBDA548: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v609)
,	/* CT_v610: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA548: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA548))
, bytes2word(1,0,0,1)
, useLabel(CT_v611)
,	/* FN_LAMBDA547: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(7,1,0)
,	/* CT_v611: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA547: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA547),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v613)
,	/* FN_LAMBDA546: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v612)
,	/* CT_v613: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA546: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA546))
, bytes2word(1,0,0,1)
, useLabel(CT_v614)
,	/* FN_LAMBDA545: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(5,1,0)
,	/* CT_v614: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA545: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA545),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v616)
,	/* FN_LAMBDA544: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v615)
,	/* CT_v616: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA544: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA544))
, bytes2word(0,0,0,0)
, useLabel(CT_v618)
,	/* FN_LAMBDA543: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v617)
,	/* CT_v618: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA543: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA543))
, bytes2word(0,0,0,0)
, useLabel(CT_v620)
,	/* FN_LAMBDA542: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v619)
,	/* CT_v620: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA542: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA542))
, bytes2word(0,0,0,0)
, useLabel(CT_v622)
,	/* FN_LAMBDA541: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v621)
,	/* CT_v622: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA541: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA541))
, bytes2word(0,0,0,0)
, useLabel(CT_v624)
,	/* FN_LAMBDA540: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v623)
,	/* CT_v624: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA540: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA540))
, bytes2word(0,0,0,0)
, useLabel(CT_v626)
,	/* FN_LAMBDA539: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v625)
,	/* CT_v626: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA539: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA539))
, bytes2word(0,0,0,0)
, useLabel(CT_v628)
,	/* FN_LAMBDA538: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v627)
,	/* CT_v628: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA538: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA538))
, bytes2word(0,0,0,0)
, useLabel(CT_v629)
,	/* FN_LAMBDA537: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v627)
,	/* CT_v629: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA537: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA537))
, bytes2word(1,0,0,1)
, useLabel(CT_v797)
,	/* FN_Main_46greencard: (byte 0) */
  bytes2word(NEEDHEAP_P1,110,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,6)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,4,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CVAL_P1,14,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_P1,15,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_IN3,HEAP_CVAL_P1,14,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_P1,15,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_N1,4,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_P1,15)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,5,HEAP_CVAL_P1)
, bytes2word(14,HEAP_OFF_N1,2,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_P1,14,HEAP_OFF_N1,2)
, bytes2word(HEAP_CVAL_P1,15,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,16,HEAP_CVAL_P1,17)
, bytes2word(HEAP_CVAL_P1,18,HEAP_OFF_N1,2)
, bytes2word(HEAP_CVAL_P1,19,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(18,HEAP_CVAL_P1,20,HEAP_OFF_N1)
, bytes2word(5,PUSH_P1,2,ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,7,ZAP_STACK_P1,3)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,7)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,21)
,	/* v630: (byte 2) */
  bytes2word(HEAP_I1,RETURN_EVAL,PUSH_P1,3)
, bytes2word(ZAP_STACK_P1,4,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,7,0,PUSH_HEAP)
,	/* v632: (byte 4) */
  bytes2word(HEAP_CVAL_P1,21,HEAP_I2,RETURN_EVAL)
, bytes2word(PUSH_P1,8,ZAP_STACK_P1,9)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v635: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(10),BOT(10))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_P1,21)
,	/* v636: (byte 2) */
  bytes2word(HEAP_I2,RETURN_EVAL,UNPACK,2)
, bytes2word(PUSH_P1,9,ZAP_STACK_P1,10)
, bytes2word(ZAP_STACK_P1,4,ZAP_STACK_P1,3)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v640: (byte 2) */
  bytes2word(TOP(22),BOT(22),POP_I1,HEAP_CVAL_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,22)
, bytes2word(HEAP_P1,7,HEAP_P1,8)
, bytes2word(HEAP_P1,13,HEAP_P1,12)
,	/* v641: (byte 4) */
  bytes2word(HEAP_OFF_N1,6,HEAP_I1,RETURN_EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v767: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v645: (byte 4) */
  bytes2word(POP_I1,JUMP,92,2)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,LOOKUPSWITCH,3)
, bytes2word(TOP(72),BOT(72),TOP(18),BOT(18))
, bytes2word(TOP(103),BOT(103),TOP(178),BOT(178))
, bytes2word(TOP(110),BOT(110),TOP(301),BOT(301))
,	/* v768: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,JUMP)
,	/* v649: (byte 2) */
  bytes2word(61,2,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v769: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v653: (byte 4) */
  bytes2word(POP_I1,JUMP,47,2)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,LOOKUPSWITCH,1)
, bytes2word(TOP(117),BOT(117),TOP(10),BOT(10))
,	/* v770: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v657: (byte 2) */
  bytes2word(125,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v771: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v661: (byte 4) */
  bytes2word(POP_I1,JUMP,111,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,LOOKUPSWITCH,1)
, bytes2word(TOP(103),BOT(103),TOP(10),BOT(10))
,	/* v772: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v665: (byte 2) */
  bytes2word(88,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v773: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v669: (byte 4) */
  bytes2word(POP_I1,JUMP,74,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,LOOKUPSWITCH,1)
, bytes2word(TOP(115),BOT(115),TOP(10),BOT(10))
,	/* v774: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v673: (byte 2) */
  bytes2word(51,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v775: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v677: (byte 4) */
  bytes2word(POP_I1,JUMP,37,0)
, bytes2word(POP_I1,PUSH_P1,9,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v776: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v681: (byte 4) */
  bytes2word(POP_I1,JUMP,21,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,22,HEAP_P1,17)
, bytes2word(HEAP_P1,18,HEAP_P1,23)
, bytes2word(HEAP_P1,22,HEAP_OFF_N1,6)
,	/* v670: (byte 3) */
  bytes2word(HEAP_P1,11,RETURN_EVAL,POP_P1)
,	/* v662: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v654: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v682: (byte 2) */
  bytes2word(157,1,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v777: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v686: (byte 4) */
  bytes2word(POP_I1,JUMP,143,1)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,LOOKUPSWITCH,1)
, bytes2word(TOP(104),BOT(104),TOP(10),BOT(10))
,	/* v778: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v690: (byte 2) */
  bytes2word(88,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v779: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v694: (byte 4) */
  bytes2word(POP_I1,JUMP,74,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,LOOKUPSWITCH,1)
, bytes2word(TOP(99),BOT(99),TOP(10),BOT(10))
,	/* v780: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v698: (byte 2) */
  bytes2word(51,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v781: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v702: (byte 4) */
  bytes2word(POP_I1,JUMP,37,0)
, bytes2word(POP_I1,PUSH_P1,7,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v782: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v706: (byte 4) */
  bytes2word(POP_I1,JUMP,21,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,22,HEAP_P1,15)
, bytes2word(HEAP_P1,16,HEAP_P1,21)
, bytes2word(HEAP_P1,20,HEAP_OFF_N1,6)
,	/* v695: (byte 3) */
  bytes2word(HEAP_P1,9,RETURN_EVAL,POP_P1)
,	/* v687: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,34)
,	/* v707: (byte 1) */
  bytes2word(1,POP_I1,PUSH_I1,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v783: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v711: (byte 4) */
  bytes2word(POP_I1,JUMP,19,1)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,LOOKUPSWITCH,1)
, bytes2word(TOP(104),BOT(104),TOP(10),BOT(10))
,	/* v784: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v715: (byte 2) */
  bytes2word(252,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v785: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v719: (byte 4) */
  bytes2word(POP_I1,JUMP,238,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,LOOKUPSWITCH,1)
, bytes2word(TOP(99),BOT(99),TOP(10),BOT(10))
,	/* v786: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v723: (byte 2) */
  bytes2word(215,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v787: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v727: (byte 4) */
  bytes2word(POP_I1,JUMP,201,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,LOOKUPSWITCH,2)
, bytes2word(TOP(49),BOT(49),TOP(14),BOT(14))
, bytes2word(TOP(57),BOT(57),TOP(100),BOT(100))
,	/* v788: (byte 2) */
  bytes2word(TOP(10),BOT(10),POP_I1,JUMP)
,	/* v731: (byte 2) */
  bytes2word(174,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v789: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v735: (byte 4) */
  bytes2word(POP_I1,JUMP,160,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,LOOKUPSWITCH,1)
, bytes2word(TOP(51),BOT(51),TOP(10),BOT(10))
,	/* v790: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v739: (byte 2) */
  bytes2word(51,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v791: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v743: (byte 4) */
  bytes2word(POP_I1,JUMP,37,0)
, bytes2word(POP_I1,PUSH_P1,11,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v792: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v747: (byte 4) */
  bytes2word(POP_I1,JUMP,21,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,22,HEAP_P1,19)
, bytes2word(HEAP_P1,20,HEAP_P1,25)
, bytes2word(HEAP_P1,24,HEAP_OFF_N1,6)
,	/* v736: (byte 3) */
  bytes2word(HEAP_P1,13,RETURN_EVAL,POP_P1)
,	/* v748: (byte 4) */
  bytes2word(2,JUMP,88,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v793: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v752: (byte 2) */
  bytes2word(74,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(56),BOT(56))
,	/* v794: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v756: (byte 4) */
  bytes2word(POP_I1,JUMP,51,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v795: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v760: (byte 2) */
  bytes2word(37,0,POP_I1,PUSH_P1)
, bytes2word(11,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(8),BOT(8))
,	/* v796: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v764: (byte 2) */
  bytes2word(21,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,22)
, bytes2word(HEAP_P1,19,HEAP_P1,20)
, bytes2word(HEAP_P1,25,HEAP_P1,24)
, bytes2word(HEAP_OFF_N1,6,HEAP_P1,13)
,	/* v753: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v728: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v720: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v712: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v646: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v642: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v637: (byte 3) */
  bytes2word(JUMP,2,0,HEAP_CVAL_P1)
, bytes2word(23,PUSH_HEAP,HEAP_CVAL_P1,21)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
, CONSTR(2,0,0)
, CONSTR(3,0,0)
, CONSTR(4,0,0)
, CONSTR(0,0,0)
,	/* CT_v797: (byte 0) */
  HW(21,1)
, 0
,	/* F0_Main_46greencard: (byte 0) */
  CAPTAG(useLabel(FN_Main_46greencard),1)
, CAPTAG(useLabel(FN_Main_46Prelude_46244_46ensuredir),1)
, CAPTAG(useLabel(FN_Prelude_46map),1)
, CAPTAG(useLabel(FN_LAMBDA564),2)
, VAPTAG(useLabel(FN_Prelude_46reverse))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, VAPTAG(useLabel(FN_Prelude_46_36))
, CAPTAG(useLabel(FN_LAMBDA565),2)
, VAPTAG(useLabel(FN_Prelude_46head))
, CAPTAG(useLabel(FN_LAMBDA566),2)
, CAPTAG(useLabel(FN_LAMBDA567),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Main_46CLIOptions_46_61_61),1)
, VAPTAG(useLabel(FN_Prelude_46any))
, VAPTAG(useLabel(FN_LAMBDA568))
, VAPTAG(useLabel(FN_LAMBDA569))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, useLabel(CF_Package_46version)
, useLabel(CF_Package_46name)
, VAPTAG(useLabel(FN_Prelude_46putStrLn))
, VAPTAG(useLabel(FN_Main_46Prelude_46232_46greencard_39))
, VAPTAG(useLabel(FN_LAMBDA572))
, bytes2word(0,0,0,0)
, useLabel(CT_v799)
,	/* FN_LAMBDA572: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v798)
,	/* CT_v799: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA572: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA572))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v800)
,	/* FN_Main_46Prelude_46232_46greencard_39: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,6,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_ARG_ARG)
, bytes2word(5,1,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,12,HEAP_OFF_N1,9)
, bytes2word(HEAP_ARG,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v800: (byte 0) */
  HW(5,6)
, 0
,	/* F0_Main_46Prelude_46232_46greencard_39: (byte 0) */
  CAPTAG(useLabel(FN_Main_46Prelude_46232_46greencard_39),6)
, VAPTAG(useLabel(FN_LAMBDA570))
, VAPTAG(useLabel(FN_LAMBDA571))
, VAPTAG(useLabel(FN_ListUtils_46dropSuffix))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, VAPTAG(useLabel(FN_Process_46processFile))
, bytes2word(0,0,0,0)
, useLabel(CT_v802)
,	/* FN_LAMBDA571: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v801)
,	/* CT_v802: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA571: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA571))
, bytes2word(0,0,0,0)
, useLabel(CT_v804)
,	/* FN_LAMBDA570: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v803)
,	/* CT_v804: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA570: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA570))
, bytes2word(0,0,0,0)
, useLabel(CT_v806)
,	/* FN_LAMBDA569: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v805)
,	/* CT_v806: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA569: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA569))
, bytes2word(0,0,0,0)
, useLabel(CT_v808)
,	/* FN_LAMBDA568: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v807)
,	/* CT_v808: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA568: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA568))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v814)
,	/* FN_LAMBDA567: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,9,TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(22),BOT(22),TOP(18),BOT(18))
,	/* v813: (byte 4) */
  bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
,	/* v812: (byte 4) */
  bytes2word(POP_I1,JUMP,11,0)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I1,HEAP_ARG,2)
,	/* v809: (byte 1) */
  bytes2word(RETURN,PUSH_ARG_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v814: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA567: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA567),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v820)
,	/* FN_LAMBDA566: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,9,TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
,	/* v819: (byte 4) */
  bytes2word(TOP(18),BOT(18),TOP(22),BOT(22))
,	/* v818: (byte 4) */
  bytes2word(POP_I1,JUMP,11,0)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I1,HEAP_ARG,2)
,	/* v815: (byte 1) */
  bytes2word(RETURN,PUSH_ARG_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v820: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA566: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA566),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v826)
,	/* FN_LAMBDA565: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,9,TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(22),BOT(22))
,	/* v825: (byte 4) */
  bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
,	/* v824: (byte 4) */
  bytes2word(POP_I1,JUMP,11,0)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I1,HEAP_ARG,2)
,	/* v821: (byte 1) */
  bytes2word(RETURN,PUSH_ARG_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v826: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA565: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA565),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v832)
,	/* FN_LAMBDA564: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,9,TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
,	/* v831: (byte 4) */
  bytes2word(TOP(22),BOT(22),TOP(18),BOT(18))
,	/* v830: (byte 4) */
  bytes2word(POP_I1,JUMP,11,0)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I1,HEAP_ARG,2)
,	/* v827: (byte 1) */
  bytes2word(RETURN,PUSH_ARG_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v832: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA564: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA564),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v843)
,	/* FN_Main_46Prelude_46244_46ensuredir: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v841: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v836: (byte 4) */
  bytes2word(POP_I1,JUMP,28,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,LOOKUPSWITCH,1)
, bytes2word(TOP(47),BOT(47),TOP(10),BOT(10))
,	/* v842: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v840: (byte 2) */
  bytes2word(5,0,POP_I1,PUSH_ARG_I1)
,	/* v837: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v833: (byte 2) */
  bytes2word(2,0,HEAP_CVAL_I4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v843: (byte 0) */
  HW(3,1)
, 0
,	/* F0_Main_46Prelude_46244_46ensuredir: (byte 0) */
  CAPTAG(useLabel(FN_Main_46Prelude_46244_46ensuredir),1)
, VAPTAG(useLabel(FN_Prelude_46reverse))
, VAPTAG(useLabel(FN_LAMBDA563))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v845)
,	/* FN_LAMBDA563: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v844)
,	/* CT_v845: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA563: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA563))
, bytes2word(1,0,0,1)
, useLabel(CT_v846)
,	/* FN_Main_46main2: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v846: (byte 0) */
  HW(5,1)
, 0
,	/* F0_Main_46main2: (byte 0) */
  CAPTAG(useLabel(FN_Main_46main2),1)
, VAPTAG(useLabel(FN_Prelude_46words))
, VAPTAG(useLabel(FN_GetOptSOF_46getOpts))
, useLabel(CF_Main_46options)
, VAPTAG(useLabel(FN_Prelude_46snd))
, VAPTAG(useLabel(FN_Main_46greencard))
, bytes2word(1,0,0,1)
, useLabel(CT_v847)
,	/* FN_Main_46tsth: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_N1,2,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v847: (byte 0) */
  HW(5,1)
, 0
,	/* F0_Main_46tsth: (byte 0) */
  CAPTAG(useLabel(FN_Main_46tsth),1)
, VAPTAG(useLabel(FN_LAMBDA573))
, VAPTAG(useLabel(FN_LAMBDA574))
, VAPTAG(useLabel(FN_LAMBDA575))
, VAPTAG(useLabel(FN_Prelude_46unwords))
, VAPTAG(useLabel(FN_Main_46main2))
, bytes2word(0,0,0,0)
, useLabel(CT_v849)
,	/* FN_LAMBDA575: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v848)
,	/* CT_v849: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA575: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA575))
, bytes2word(0,0,0,0)
, useLabel(CT_v851)
,	/* FN_LAMBDA574: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v850)
,	/* CT_v851: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA574: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA574))
, bytes2word(0,0,0,0)
, useLabel(CT_v853)
,	/* FN_LAMBDA573: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v852)
,	/* CT_v853: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA573: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA573))
, bytes2word(1,0,0,1)
, useLabel(CT_v854)
,	/* FN_Main_46tstn: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_N1,2,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v854: (byte 0) */
  HW(5,1)
, 0
,	/* F0_Main_46tstn: (byte 0) */
  CAPTAG(useLabel(FN_Main_46tstn),1)
, VAPTAG(useLabel(FN_LAMBDA576))
, VAPTAG(useLabel(FN_LAMBDA577))
, VAPTAG(useLabel(FN_LAMBDA578))
, VAPTAG(useLabel(FN_Prelude_46unwords))
, VAPTAG(useLabel(FN_Main_46main2))
, bytes2word(0,0,0,0)
, useLabel(CT_v856)
,	/* FN_LAMBDA578: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v855)
,	/* CT_v856: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA578: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA578))
, bytes2word(0,0,0,0)
, useLabel(CT_v857)
,	/* FN_LAMBDA577: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v850)
,	/* CT_v857: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA577: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA577))
, bytes2word(0,0,0,0)
, useLabel(CT_v858)
,	/* FN_LAMBDA576: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v852)
,	/* CT_v858: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA576: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA576))
, bytes2word(1,0,0,1)
, useLabel(CT_v859)
,	/* FN_Main_46tstg: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_N1,2,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v859: (byte 0) */
  HW(5,1)
, 0
,	/* F0_Main_46tstg: (byte 0) */
  CAPTAG(useLabel(FN_Main_46tstg),1)
, VAPTAG(useLabel(FN_LAMBDA579))
, VAPTAG(useLabel(FN_LAMBDA580))
, VAPTAG(useLabel(FN_LAMBDA581))
, VAPTAG(useLabel(FN_Prelude_46unwords))
, VAPTAG(useLabel(FN_Main_46main2))
, bytes2word(0,0,0,0)
, useLabel(CT_v861)
,	/* FN_LAMBDA581: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v860)
,	/* CT_v861: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA581: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA581))
, bytes2word(0,0,0,0)
, useLabel(CT_v862)
,	/* FN_LAMBDA580: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v850)
,	/* CT_v862: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA580: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA580))
, bytes2word(0,0,0,0)
, useLabel(CT_v863)
,	/* FN_LAMBDA579: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v852)
,	/* CT_v863: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA579: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA579))
, bytes2word(0,0,0,0)
, useLabel(CT_v864)
,};
Node FN_Main_46main[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v864: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Main_46main[] = {
  VAPTAG(useLabel(FN_Main_46main))
, CAPTAG(useLabel(FN_LAMBDA582),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_System_46getArgs)
, bytes2word(1,0,0,1)
, useLabel(CT_v865)
,	/* FN_LAMBDA582: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v865: (byte 0) */
  HW(4,1)
, 0
,	/* F0_LAMBDA582: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA582),1)
, VAPTAG(useLabel(FN_GetOptSOF_46getOpts))
, useLabel(CF_Main_46options)
, VAPTAG(useLabel(FN_Prelude_46snd))
, VAPTAG(useLabel(FN_Main_46greencard))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v924)
,};
Node FN_Prelude_46Eq_46Main_46CLIOptions_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(9,NOP,TOP(18),BOT(18))
, bytes2word(TOP(51),BOT(51),TOP(85),BOT(85))
, bytes2word(TOP(119),BOT(119),TOP(153),BOT(153))
, bytes2word(TOP(187),BOT(187),TOP(228),BOT(228))
,	/* v869: (byte 4) */
  bytes2word(TOP(270),BOT(270),TOP(312),BOT(312))
, bytes2word(POP_I1,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,9,TOP(22),BOT(22))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
,	/* v915: (byte 4) */
  bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
,	/* v873: (byte 4) */
  bytes2word(POP_I1,JUMP,54,1)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v874: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,9,NOP)
, bytes2word(TOP(18),BOT(18),TOP(22),BOT(22))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
,	/* v916: (byte 2) */
  bytes2word(TOP(18),BOT(18),POP_I1,JUMP)
,	/* v878: (byte 2) */
  bytes2word(20,1,POP_I1,PUSH_HEAP)
,	/* v879: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_ARG_I2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(9,NOP,TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(22),BOT(22))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
,	/* v917: (byte 4) */
  bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
,	/* v883: (byte 4) */
  bytes2word(POP_I1,JUMP,242,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v884: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,9,NOP)
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(22),BOT(22))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
,	/* v918: (byte 2) */
  bytes2word(TOP(18),BOT(18),POP_I1,JUMP)
,	/* v888: (byte 2) */
  bytes2word(208,0,POP_I1,PUSH_HEAP)
,	/* v889: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_ARG_I2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(9,NOP,TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(22),BOT(22))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
,	/* v919: (byte 4) */
  bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
,	/* v893: (byte 4) */
  bytes2word(POP_I1,JUMP,174,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v894: (byte 1) */
  bytes2word(RETURN,UNPACK,1,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,9)
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(22),BOT(22))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
,	/* v920: (byte 2) */
  bytes2word(TOP(18),BOT(18),POP_I1,JUMP)
,	/* v898: (byte 2) */
  bytes2word(10,0,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_I2)
,	/* v895: (byte 2) */
  bytes2word(HEAP_I1,RETURN_EVAL,POP_I1,JUMP)
,	/* v899: (byte 2) */
  bytes2word(128,0,UNPACK,1)
, bytes2word(PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(9,NOP,TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(22),BOT(22))
,	/* v921: (byte 4) */
  bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
,	/* v903: (byte 4) */
  bytes2word(POP_I1,JUMP,10,0)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_I3)
,	/* v900: (byte 4) */
  bytes2word(HEAP_CVAL_I4,HEAP_I2,HEAP_I1,RETURN_EVAL)
,	/* v904: (byte 4) */
  bytes2word(POP_I1,JUMP,86,0)
, bytes2word(UNPACK,1,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,9,NOP)
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(22),BOT(22))
,	/* v922: (byte 2) */
  bytes2word(TOP(18),BOT(18),POP_I1,JUMP)
,	/* v908: (byte 2) */
  bytes2word(10,0,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_I2)
,	/* v905: (byte 2) */
  bytes2word(HEAP_I1,RETURN_EVAL,POP_I1,JUMP)
,	/* v909: (byte 2) */
  bytes2word(44,0,UNPACK,1)
, bytes2word(PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(9,NOP,TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
, bytes2word(TOP(18),BOT(18),TOP(18),BOT(18))
,	/* v923: (byte 4) */
  bytes2word(TOP(18),BOT(18),TOP(22),BOT(22))
,	/* v913: (byte 4) */
  bytes2word(POP_I1,JUMP,10,0)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_I3)
,	/* v910: (byte 4) */
  bytes2word(HEAP_CVAL_I4,HEAP_I2,HEAP_I1,RETURN_EVAL)
,	/* v866: (byte 4) */
  bytes2word(POP_I1,JUMP,2,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v924: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46Main_46CLIOptions_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Main_46CLIOptions_46_61_61),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46_91_93_46_61_61))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v925)
,};
Node FN_Prelude_46Eq_46Main_46CLIOptions_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v925: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46Main_46CLIOptions_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Main_46CLIOptions_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46Main_46CLIOptions)
, bytes2word(0,0,0,0)
, useLabel(CT_v926)
,};
Node FN_Prelude_46Eq_46Main_46CLIOptions[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v926: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Main_46CLIOptions[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Main_46CLIOptions))
, useLabel(F0_Prelude_46Eq_46Main_46CLIOptions_46_47_61)
, useLabel(F0_Prelude_46Eq_46Main_46CLIOptions_46_61_61)
,	/* ST_v805: (byte 0) */
 	/* ST_v627: (byte 2) */
 	/* ST_v852: (byte 4) */
  bytes2word(32,0,45,0)
, bytes2word(45,45,100,101)
,	/* ST_v850: (byte 4) */
  bytes2word(98,117,103,0)
, bytes2word(45,45,105,110)
, bytes2word(99,108,117,100)
, bytes2word(101,45,100,105)
,	/* ST_v848: (byte 4) */
  bytes2word(114,32,46,0)
, bytes2word(45,45,116,97)
, bytes2word(114,103,101,116)
, bytes2word(32,72,117,103)
,	/* ST_v860: (byte 2) */
  bytes2word(115,0,45,45)
, bytes2word(116,97,114,103)
, bytes2word(101,116,32,103)
,	/* ST_v855: (byte 3) */
  bytes2word(104,99,0,45)
, bytes2word(45,116,97,114)
, bytes2word(103,101,116,32)
, bytes2word(110,104,99,57)
,	/* ST_v803: (byte 2) */
  bytes2word(56,0,46,47)
,	/* ST_v801: (byte 1) */
  bytes2word(0,46,103,99)
,	/* ST_v844: (byte 1) */
 	/* ST_v798: (byte 3) */
  bytes2word(0,47,0,60)
, bytes2word(116,97,114,103)
, bytes2word(101,116,62,32)
, bytes2word(109,117,115,116)
, bytes2word(32,98,101,32)
, bytes2word(96,72,117,103)
, bytes2word(115,39,32,111)
, bytes2word(114,32,96,103)
, bytes2word(104,99,39,32)
, bytes2word(111,114,32,96)
, bytes2word(110,104,99,57)
, bytes2word(56,39,32,111)
, bytes2word(114,32,96,110)
, bytes2word(104,99,49,51)
,	/* ST_v592: (byte 2) */
 	/* ST_v589: (byte 4) */
  bytes2word(39,0,73,0)
,	/* ST_v807: (byte 2) */
  bytes2word(80,0,85,115)
, bytes2word(97,103,101,58)
, bytes2word(32,103,114,101)
, bytes2word(101,110,45,99)
, bytes2word(97,114,100,32)
, bytes2word(91,79,80,84)
, bytes2word(73,79,78,93)
, bytes2word(46,46,46,32)
, bytes2word(70,73,76,69)
,	/* ST_v609: (byte 4) */
  bytes2word(46,46,46,0)
, bytes2word(99,45,115,117)
, bytes2word(102,102,105,120)
,	/* ST_v604: (byte 1) */
 	/* ST_v621: (byte 3) */
  bytes2word(0,100,0,100)
, bytes2word(101,98,117,103)
,	/* ST_v617: (byte 1) */
  bytes2word(0,102,103,99)
, bytes2word(45,115,97,102)
,	/* ST_v600: (byte 2) */
 	/* ST_v606: (byte 4) */
  bytes2word(101,0,103,0)
,	/* ST_v623: (byte 2) */
  bytes2word(104,0,104,101)
,	/* ST_v595: (byte 3) */
  bytes2word(108,112,0,105)
,	/* ST_v612: (byte 1) */
  bytes2word(0,105,110,99)
, bytes2word(108,117,100,101)
, bytes2word(45,100,105,114)
,	/* ST_v598: (byte 1) */
 	/* ST_v615: (byte 3) */
  bytes2word(0,116,0,116)
, bytes2word(97,114,103,101)
,	/* ST_v602: (byte 2) */
 	/* ST_v619: (byte 4) */
  bytes2word(116,0,118,0)
, bytes2word(118,101,114,98)
,	/* ST_v625: (byte 4) */
  bytes2word(111,115,101,0)
, bytes2word(118,101,114,115)
, bytes2word(105,111,110,0)
,};
