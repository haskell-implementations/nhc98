#include "newmacros.h"
#include "runtime.h"

#define C0_SimpleLineEditor_46NoOp	((void*)startLabel+4)
#define C0_SimpleLineEditor_46Future	((void*)startLabel+8)
#define C0_SimpleLineEditor_46History	((void*)startLabel+12)
#define C0_SimpleLineEditor_46Cancel	((void*)startLabel+16)
#define C0_SimpleLineEditor_46Accept	((void*)startLabel+20)
#define C0_SimpleLineEditor_46End	((void*)startLabel+24)
#define C0_SimpleLineEditor_46Begin	((void*)startLabel+28)
#define C0_SimpleLineEditor_46R	((void*)startLabel+32)
#define C0_SimpleLineEditor_46L	((void*)startLabel+36)
#define FN_SimpleLineEditor_46lineCmd	((void*)startLabel+48)
#define CT_v826	((void*)startLabel+68)
#define CF_SimpleLineEditor_46lineCmd	((void*)startLabel+76)
#define FN_LAMBDA808	((void*)startLabel+104)
#define v836	((void*)startLabel+136)
#define v830	((void*)startLabel+140)
#define v831	((void*)startLabel+152)
#define v832	((void*)startLabel+167)
#define v833	((void*)startLabel+183)
#define v834	((void*)startLabel+195)
#define v835	((void*)startLabel+210)
#define v827	((void*)startLabel+222)
#define CT_v837	((void*)startLabel+268)
#define F0_LAMBDA808	((void*)startLabel+276)
#define FN_LAMBDA807	((void*)startLabel+316)
#define v845	((void*)startLabel+340)
#define v841	((void*)startLabel+344)
#define v842	((void*)startLabel+356)
#define v843	((void*)startLabel+369)
#define v844	((void*)startLabel+378)
#define v838	((void*)startLabel+387)
#define CT_v846	((void*)startLabel+416)
#define F0_LAMBDA807	((void*)startLabel+424)
#define FN_LAMBDA806	((void*)startLabel+460)
#define v857	((void*)startLabel+496)
#define v850	((void*)startLabel+500)
#define v851	((void*)startLabel+512)
#define v852	((void*)startLabel+525)
#define v853	((void*)startLabel+538)
#define v854	((void*)startLabel+547)
#define v855	((void*)startLabel+556)
#define v856	((void*)startLabel+568)
#define v847	((void*)startLabel+581)
#define CT_v858	((void*)startLabel+620)
#define F0_LAMBDA806	((void*)startLabel+628)
#define FN_LAMBDA805	((void*)startLabel+668)
#define v863	((void*)startLabel+680)
#define v862	((void*)startLabel+684)
#define v859	((void*)startLabel+696)
#define CT_v864	((void*)startLabel+724)
#define F0_LAMBDA805	((void*)startLabel+732)
#define FN_LAMBDA804	((void*)startLabel+748)
#define v869	((void*)startLabel+760)
#define v868	((void*)startLabel+764)
#define v865	((void*)startLabel+776)
#define CT_v870	((void*)startLabel+804)
#define F0_LAMBDA804	((void*)startLabel+812)
#define FN_LAMBDA803	((void*)startLabel+828)
#define v875	((void*)startLabel+840)
#define v874	((void*)startLabel+844)
#define v871	((void*)startLabel+856)
#define CT_v876	((void*)startLabel+884)
#define F0_LAMBDA803	((void*)startLabel+892)
#define FN_LAMBDA802	((void*)startLabel+908)
#define v884	((void*)startLabel+932)
#define v880	((void*)startLabel+936)
#define v881	((void*)startLabel+944)
#define v882	((void*)startLabel+952)
#define v883	((void*)startLabel+963)
#define v877	((void*)startLabel+975)
#define CT_v885	((void*)startLabel+1012)
#define F0_LAMBDA802	((void*)startLabel+1020)
#define v887	((void*)startLabel+1046)
#define v888	((void*)startLabel+1054)
#define CT_v890	((void*)startLabel+1088)
#define FN_LAMBDA809	((void*)startLabel+1132)
#define CT_v892	((void*)startLabel+1152)
#define CF_LAMBDA809	((void*)startLabel+1160)
#define FN_SimpleLineEditor_46history	((void*)startLabel+1172)
#define CT_v893	((void*)startLabel+1196)
#define CF_SimpleLineEditor_46history	((void*)startLabel+1204)
#define CT_v894	((void*)startLabel+1256)
#define FN_LAMBDA822	((void*)startLabel+1304)
#define CT_v895	((void*)startLabel+1352)
#define F0_LAMBDA822	((void*)startLabel+1360)
#define FN_LAMBDA821	((void*)startLabel+1396)
#define v897	((void*)startLabel+1406)
#define v898	((void*)startLabel+1412)
#define CT_v900	((void*)startLabel+1480)
#define F0_LAMBDA821	((void*)startLabel+1488)
#define FN_LAMBDA820	((void*)startLabel+1544)
#define CT_v902	((void*)startLabel+1564)
#define CF_LAMBDA820	((void*)startLabel+1572)
#define FN_SimpleLineEditor_46Prelude_46212_46gl	((void*)startLabel+1588)
#define v907	((void*)startLabel+1600)
#define v906	((void*)startLabel+1604)
#define v903	((void*)startLabel+1615)
#define CT_v908	((void*)startLabel+1636)
#define F0_SimpleLineEditor_46Prelude_46212_46gl	((void*)startLabel+1644)
#define FN_LAMBDA819	((void*)startLabel+1680)
#define v943	((void*)startLabel+1704)
#define v912	((void*)startLabel+1708)
#define v913	((void*)startLabel+1793)
#define v944	((void*)startLabel+1810)
#define v917	((void*)startLabel+1814)
#define v918	((void*)startLabel+1900)
#define v920	((void*)startLabel+1960)
#define v914	((void*)startLabel+2033)
#define v921	((void*)startLabel+2037)
#define v945	((void*)startLabel+2054)
#define v925	((void*)startLabel+2058)
#define v926	((void*)startLabel+2166)
#define v928	((void*)startLabel+2226)
#define v922	((void*)startLabel+2322)
#define v929	((void*)startLabel+2326)
#define v930	((void*)startLabel+2344)
#define v931	((void*)startLabel+2352)
#define v935	((void*)startLabel+2368)
#define v936	((void*)startLabel+2378)
#define v937	((void*)startLabel+2453)
#define v941	((void*)startLabel+2470)
#define v942	((void*)startLabel+2480)
#define v909	((void*)startLabel+2556)
#define CT_v950	((void*)startLabel+2588)
#define F0_LAMBDA819	((void*)startLabel+2596)
#define FN_LAMBDA818	((void*)startLabel+2692)
#define CT_v952	((void*)startLabel+2712)
#define CF_LAMBDA818	((void*)startLabel+2720)
#define FN_LAMBDA817	((void*)startLabel+2732)
#define CT_v953	((void*)startLabel+2752)
#define CF_LAMBDA817	((void*)startLabel+2760)
#define FN_LAMBDA816	((void*)startLabel+2772)
#define CT_v954	((void*)startLabel+2792)
#define CF_LAMBDA816	((void*)startLabel+2800)
#define FN_LAMBDA815	((void*)startLabel+2812)
#define CT_v955	((void*)startLabel+2832)
#define CF_LAMBDA815	((void*)startLabel+2840)
#define FN_LAMBDA814	((void*)startLabel+2852)
#define CT_v956	((void*)startLabel+2872)
#define CF_LAMBDA814	((void*)startLabel+2880)
#define FN_LAMBDA813	((void*)startLabel+2896)
#define v990	((void*)startLabel+2918)
#define v960	((void*)startLabel+2922)
#define v961	((void*)startLabel+2951)
#define v991	((void*)startLabel+2968)
#define v965	((void*)startLabel+2972)
#define v966	((void*)startLabel+3015)
#define v962	((void*)startLabel+3025)
#define v968	((void*)startLabel+3029)
#define v992	((void*)startLabel+3046)
#define v972	((void*)startLabel+3050)
#define v973	((void*)startLabel+3071)
#define v975	((void*)startLabel+3099)
#define v969	((void*)startLabel+3124)
#define v976	((void*)startLabel+3128)
#define v977	((void*)startLabel+3147)
#define v978	((void*)startLabel+3155)
#define v982	((void*)startLabel+3170)
#define v983	((void*)startLabel+3181)
#define v984	((void*)startLabel+3237)
#define v988	((void*)startLabel+3252)
#define v989	((void*)startLabel+3263)
#define v957	((void*)startLabel+3320)
#define CT_v997	((void*)startLabel+3352)
#define F0_LAMBDA813	((void*)startLabel+3360)
#define FN_LAMBDA812	((void*)startLabel+3436)
#define CT_v998	((void*)startLabel+3456)
#define CF_LAMBDA812	((void*)startLabel+3464)
#define FN_LAMBDA811	((void*)startLabel+3476)
#define CT_v1000	((void*)startLabel+3496)
#define CF_LAMBDA811	((void*)startLabel+3504)
#define FN_LAMBDA810	((void*)startLabel+3516)
#define CT_v1002	((void*)startLabel+3536)
#define CF_LAMBDA810	((void*)startLabel+3544)
#define CT_v1003	((void*)startLabel+3604)
#define FN_LAMBDA823	((void*)startLabel+3648)
#define CT_v1005	((void*)startLabel+3668)
#define CF_LAMBDA823	((void*)startLabel+3676)
#define CT_v1006	((void*)startLabel+3736)
#define FN_LAMBDA824	((void*)startLabel+3780)
#define CT_v1008	((void*)startLabel+3800)
#define CF_LAMBDA824	((void*)startLabel+3808)
#define ST_v901	((void*)startLabel+3812)
#define ST_v1001	((void*)startLabel+3813)
#define ST_v891	((void*)startLabel+3815)
#define ST_v951	((void*)startLabel+3819)
#define ST_v999	((void*)startLabel+3821)
#define ST_v1007	((void*)startLabel+3823)
#define ST_v1004	((void*)startLabel+3848)
extern Node FN_IO_46hGetChar[];
extern Node CF_IO_46stdin[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46putChar[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node FN_Prelude_46putStr[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_NHC_46IOExtras_46newIORef[];
extern Node FN_NHC_46Internal_46unsafePerformIO[];
extern Node FN_NHC_46IOExtras_46readIORef[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46all[];
extern Node F0_Char_46isSpace[];
extern Node FN_Prelude_46not[];
extern Node FN_Prelude_46reverse[];
extern Node FN_NHC_46IOExtras_46writeIORef[];
extern Node FN_Monad_46when[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_Prelude_46take[];
extern Node FN_Prelude_46replicate[];
extern Node FN_Prelude_46drop[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_Prelude_46length[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node FN_Prelude_46null[];
extern Node FN_Prelude_46tail[];
extern Node FN_System_46system[];
extern Node FN_IO_46hSetBuffering[];
extern Node CF_IO_46stdout[];

static Node startLabel[] = {
  42
,	/* C0_SimpleLineEditor_46NoOp: (byte 0) */
  CONSTR(7,0,0)
,	/* C0_SimpleLineEditor_46Future: (byte 0) */
  CONSTR(6,0,0)
,	/* C0_SimpleLineEditor_46History: (byte 0) */
  CONSTR(5,0,0)
,	/* C0_SimpleLineEditor_46Cancel: (byte 0) */
  CONSTR(4,0,0)
,	/* C0_SimpleLineEditor_46Accept: (byte 0) */
  CONSTR(3,0,0)
,	/* C0_SimpleLineEditor_46End: (byte 0) */
  CONSTR(3,0,0)
,	/* C0_SimpleLineEditor_46Begin: (byte 0) */
  CONSTR(2,0,0)
,	/* C0_SimpleLineEditor_46R: (byte 0) */
  CONSTR(1,0,0)
,	/* C0_SimpleLineEditor_46L: (byte 0) */
  CONSTR(0,0,0)
, bytes2word(0,0,0,0)
, useLabel(CT_v826)
,	/* FN_SimpleLineEditor_46lineCmd: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v826: (byte 0) */
  HW(4,0)
, 0
,	/* CF_SimpleLineEditor_46lineCmd: (byte 0) */
  VAPTAG(useLabel(FN_SimpleLineEditor_46lineCmd))
, VAPTAG(useLabel(FN_IO_46hGetChar))
, useLabel(CF_IO_46stdin)
, CAPTAG(useLabel(FN_LAMBDA808),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v837)
,	/* FN_LAMBDA808: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,6,TOP(8),BOT(8))
, bytes2word(TOP(30),BOT(30),TOP(10),BOT(10))
, bytes2word(TOP(42),BOT(42),TOP(11),BOT(11))
, bytes2word(TOP(57),BOT(57),TOP(12),BOT(12))
, bytes2word(TOP(73),BOT(73),TOP(27),BOT(27))
, bytes2word(TOP(85),BOT(85),TOP(127),BOT(127))
,	/* v836: (byte 4) */
  bytes2word(TOP(100),BOT(100),TOP(26),BOT(26))
,	/* v830: (byte 4) */
  bytes2word(POP_I1,JUMP,84,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,2,PUSH_HEAP)
,	/* v831: (byte 4) */
  bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(POP_I1,HEAP_CVAL_I4,HEAP_CHAR_P1,10)
, bytes2word(HEAP_CVAL_IN3,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
,	/* v832: (byte 3) */
  bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,POP_I1)
, bytes2word(HEAP_CVAL_I4,HEAP_CHAR_P1,10,HEAP_CVAL_N1)
, bytes2word(4,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
,	/* v833: (byte 3) */
  bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,POP_I1)
, bytes2word(HEAP_CVAL_N1,5,HEAP_CVAL_N1,6)
, bytes2word(HEAP_OFF_N1,2,PUSH_HEAP,HEAP_CVAL_I3)
,	/* v834: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,POP_I1)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,4,HEAP_OFF_N1)
,	/* v835: (byte 2) */
  bytes2word(3,RETURN_EVAL,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
,	/* v827: (byte 2) */
  bytes2word(3,RETURN_EVAL,HEAP_CVAL_N1,7)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, CONSTR(1,1,0)
, CONSTR(1,0,0)
, CONSTR(4,0,0)
, CONSTR(3,0,0)
, CONSTR(2,1,0)
, CONSTR(0,0,0)
,	/* CT_v837: (byte 0) */
  HW(7,1)
, 0
,	/* F0_LAMBDA808: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA808),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46putChar))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, VAPTAG(useLabel(FN_IO_46hGetChar))
, useLabel(CF_IO_46stdin)
, CAPTAG(useLabel(FN_LAMBDA807),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v846)
,	/* FN_LAMBDA807: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,4,TOP(79),BOT(79))
, bytes2word(TOP(22),BOT(22),TOP(91),BOT(91))
, bytes2word(TOP(34),BOT(34),TOP(106),BOT(106))
, bytes2word(TOP(47),BOT(47),TOP(107),BOT(107))
,	/* v845: (byte 4) */
  bytes2word(TOP(56),BOT(56),TOP(18),BOT(18))
,	/* v841: (byte 4) */
  bytes2word(POP_I1,JUMP,45,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
,	/* v842: (byte 4) */
  bytes2word(4,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_P1)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,3)
,	/* v843: (byte 1) */
  bytes2word(RETURN_EVAL,POP_I1,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
,	/* v844: (byte 2) */
  bytes2word(2,RETURN_EVAL,POP_I1,HEAP_CVAL_N1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,8)
,	/* v838: (byte 3) */
  bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(7,0,0)
, CONSTR(5,0,0)
, CONSTR(6,0,0)
,	/* CT_v846: (byte 0) */
  HW(6,1)
, 0
,	/* F0_LAMBDA807: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA807),1)
, VAPTAG(useLabel(FN_IO_46hGetChar))
, useLabel(CF_IO_46stdin)
, CAPTAG(useLabel(FN_LAMBDA802),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, CAPTAG(useLabel(FN_LAMBDA806),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v858)
,	/* FN_LAMBDA806: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,7,TOP(49),BOT(49))
, bytes2word(TOP(34),BOT(34),TOP(51),BOT(51))
, bytes2word(TOP(46),BOT(46),TOP(52),BOT(52))
, bytes2word(TOP(59),BOT(59),TOP(65),BOT(65))
, bytes2word(TOP(72),BOT(72),TOP(66),BOT(66))
, bytes2word(TOP(81),BOT(81),TOP(67),BOT(67))
, bytes2word(TOP(90),BOT(90),TOP(68),BOT(68))
,	/* v857: (byte 4) */
  bytes2word(TOP(102),BOT(102),TOP(30),BOT(30))
,	/* v850: (byte 4) */
  bytes2word(POP_I1,JUMP,83,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
,	/* v851: (byte 4) */
  bytes2word(4,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_P1)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,3)
,	/* v852: (byte 1) */
  bytes2word(RETURN_EVAL,POP_I1,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_P1,8,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_OFF_N1)
,	/* v853: (byte 2) */
  bytes2word(3,RETURN_EVAL,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,9)
,	/* v854: (byte 3) */
  bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,POP_I1)
, bytes2word(HEAP_CVAL_N1,2,PUSH_HEAP,HEAP_CVAL_P1)
,	/* v855: (byte 4) */
  bytes2word(9,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(POP_I1,HEAP_CVAL_IN3,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,2,PUSH_HEAP,HEAP_CVAL_P1)
,	/* v856: (byte 4) */
  bytes2word(9,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(POP_I1,HEAP_CVAL_N1,5,HEAP_CVAL_N1)
, bytes2word(4,HEAP_OFF_N1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,3)
,	/* v847: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_N1,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(7,0,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
, CONSTR(1,0,0)
, CONSTR(6,0,0)
, CONSTR(5,0,0)
,	/* CT_v858: (byte 0) */
  HW(7,1)
, 0
,	/* F0_LAMBDA806: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA806),1)
, VAPTAG(useLabel(FN_IO_46hGetChar))
, useLabel(CF_IO_46stdin)
, CAPTAG(useLabel(FN_LAMBDA803),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, CAPTAG(useLabel(FN_LAMBDA804),1)
, CAPTAG(useLabel(FN_LAMBDA805),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v864)
,	/* FN_LAMBDA805: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(126),BOT(126))
,	/* v863: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v862: (byte 4) */
  bytes2word(POP_I1,JUMP,14,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,2,PUSH_HEAP)
,	/* v859: (byte 4) */
  bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(7,0,0)
, CONSTR(1,1,0)
, CONSTR(3,0,0)
,	/* CT_v864: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA805: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA805),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v870)
,	/* FN_LAMBDA804: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(126),BOT(126))
,	/* v869: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v868: (byte 4) */
  bytes2word(POP_I1,JUMP,14,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,2,PUSH_HEAP)
,	/* v865: (byte 4) */
  bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(7,0,0)
, CONSTR(2,1,0)
, CONSTR(1,0,0)
,	/* CT_v870: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA804: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA804),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v876)
,	/* FN_LAMBDA803: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(126),BOT(126))
,	/* v875: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v874: (byte 4) */
  bytes2word(POP_I1,JUMP,14,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,2,PUSH_HEAP)
,	/* v871: (byte 4) */
  bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(7,0,0)
, CONSTR(1,1,0)
, CONSTR(2,0,0)
,	/* CT_v876: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA803: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA803),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v885)
,	/* FN_LAMBDA802: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,4,TOP(65),BOT(65))
, bytes2word(TOP(22),BOT(22),TOP(66),BOT(66))
, bytes2word(TOP(30),BOT(30),TOP(67),BOT(67))
, bytes2word(TOP(38),BOT(38),TOP(68),BOT(68))
,	/* v884: (byte 4) */
  bytes2word(TOP(49),BOT(49),TOP(18),BOT(18))
,	/* v880: (byte 4) */
  bytes2word(POP_I1,JUMP,41,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,PUSH_HEAP)
,	/* v881: (byte 4) */
  bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(POP_I1,HEAP_CVAL_N1,2,PUSH_HEAP)
,	/* v882: (byte 4) */
  bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(POP_I1,HEAP_CVAL_IN3,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,2,PUSH_HEAP,HEAP_CVAL_I3)
,	/* v883: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,POP_I1)
, bytes2word(HEAP_CVAL_N1,5,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,2,PUSH_HEAP,HEAP_CVAL_I3)
,	/* v877: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,HEAP_CVAL_N1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(7,0,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
, CONSTR(1,0,0)
, CONSTR(6,0,0)
, CONSTR(5,0,0)
,	/* CT_v885: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA802: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA802),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v890)
,};
Node FN_SimpleLineEditor_46delChars[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v887: (byte 2) */
  bytes2word(TOP(12),BOT(12),POP_I1,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
,	/* v888: (byte 2) */
  bytes2word(2,RETURN_EVAL,UNPACK,2)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v890: (byte 0) */
  HW(6,1)
, 0
,};
Node F0_SimpleLineEditor_46delChars[] = {
  CAPTAG(useLabel(FN_SimpleLineEditor_46delChars),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46putStr))
, VAPTAG(useLabel(FN_LAMBDA809))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_SimpleLineEditor_46delChars))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(0,0,0,0)
, useLabel(CT_v892)
,	/* FN_LAMBDA809: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v891)
,	/* CT_v892: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA809: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA809))
, bytes2word(0,0,0,0)
, useLabel(CT_v893)
,	/* FN_SimpleLineEditor_46history: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v893: (byte 0) */
  HW(2,0)
, 0
,	/* CF_SimpleLineEditor_46history: (byte 0) */
  VAPTAG(useLabel(FN_SimpleLineEditor_46history))
, VAPTAG(useLabel(FN_NHC_46IOExtras_46newIORef))
, VAPTAG(useLabel(FN_NHC_46Internal_46unsafePerformIO))
, bytes2word(1,0,0,1)
, useLabel(CT_v894)
,};
Node FN_SimpleLineEditor_46getLineEdited[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,10,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v894: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_SimpleLineEditor_46getLineEdited[] = {
  CAPTAG(useLabel(FN_SimpleLineEditor_46getLineEdited),1)
, VAPTAG(useLabel(FN_Prelude_46putStr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46IOExtras_46readIORef))
, useLabel(CF_SimpleLineEditor_46history)
, CAPTAG(useLabel(FN_LAMBDA822),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(1,0,0,1)
, useLabel(CT_v895)
,	/* FN_LAMBDA822: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,7)
, bytes2word(HEAP_INT_P1,0,HEAP_OFF_N1,7)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
,	/* CT_v895: (byte 0) */
  HW(5,1)
, 0
,	/* F0_LAMBDA822: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA822),1)
, CAPTAG(useLabel(FN_SimpleLineEditor_46Prelude_46212_46gl),3)
, VAPTAG(useLabel(FN_LAMBDA820))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, CAPTAG(useLabel(FN_LAMBDA821),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v900)
,	/* FN_LAMBDA821: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v897: (byte 2) */
  bytes2word(TOP(10),BOT(10),POP_I1,PUSH_HEAP)
,	/* v898: (byte 4) */
  bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(UNPACK,1,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,2)
, bytes2word(HEAP_P1,0,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,14)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,13)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v900: (byte 0) */
  HW(11,2)
, 0
,	/* F0_LAMBDA821: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA821),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46all))
, useLabel(F0_Char_46isSpace)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46not))
, VAPTAG(useLabel(FN_Prelude_46reverse))
, VAPTAG(useLabel(FN_NHC_46IOExtras_46writeIORef))
, useLabel(CF_SimpleLineEditor_46history)
, VAPTAG(useLabel(FN_Monad_46when))
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(0,0,0,0)
, useLabel(CT_v902)
,	/* FN_LAMBDA820: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v901)
,	/* CT_v902: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA820: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA820))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v908)
,	/* FN_SimpleLineEditor_46Prelude_46212_46gl: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(0),BOT(0))
,	/* v907: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v906: (byte 4) */
  bytes2word(POP_I1,JUMP,13,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
,	/* v903: (byte 3) */
  bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v908: (byte 0) */
  HW(4,3)
, 0
,	/* F0_SimpleLineEditor_46Prelude_46212_46gl: (byte 0) */
  CAPTAG(useLabel(FN_SimpleLineEditor_46Prelude_46212_46gl),3)
, CAPTAG(useLabel(FN_LAMBDA813),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_SimpleLineEditor_46lineCmd)
, CAPTAG(useLabel(FN_LAMBDA819),1)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v950)
,	/* FN_LAMBDA819: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_P1,45,TABLESWITCH,8)
, bytes2word(TOP(20),BOT(20),TOP(105),BOT(105))
, bytes2word(TOP(349),BOT(349),TOP(638),BOT(638))
, bytes2word(TOP(656),BOT(656),TOP(664),BOT(664))
,	/* v943: (byte 4) */
  bytes2word(TOP(765),BOT(765),TOP(16),BOT(16))
,	/* v912: (byte 4) */
  bytes2word(POP_I1,JUMP,82,3)
, bytes2word(UNPACK,1,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG_ARG,2,1)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,12)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_I3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,2,HEAP_CHAR_P1)
, bytes2word(8,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_I5,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_CVAL_P1,9,HEAP_ARG_ARG)
, bytes2word(2,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,5)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,22,HEAP_OFF_N1)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,32,HEAP_OFF_N1,5)
,	/* v913: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,1,PUSH_P1)
, bytes2word(0,EVAL,NEEDHEAP_P1,37)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(158),BOT(158),TOP(8),BOT(8))
,	/* v944: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v917: (byte 2) */
  bytes2word(221,0,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,13,HEAP_ARG,2)
, bytes2word(HEAP_INT_P1,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(14,HEAP_ARG,1,EVAL)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_P1,33)
, bytes2word(LE_W,JUMPFALSE,66,0)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_P1)
, bytes2word(0,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_N1,1,HEAP_CHAR_P1)
, bytes2word(8,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,12,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_I3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_P1,0,HEAP_CHAR_P1,8)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,2)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_OFF_N1)
,	/* v918: (byte 4) */
  bytes2word(20,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,15,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_I3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_P1,0,HEAP_CHAR_P1)
, bytes2word(8,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_OFF_N1)
,	/* v920: (byte 4) */
  bytes2word(20,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_P1,16)
, bytes2word(HEAP_ARG,2,HEAP_INT_P1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_ARG_ARG)
, bytes2word(2,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,17,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,13)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_I3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,2,HEAP_CHAR_P1)
, bytes2word(8,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_P1)
, bytes2word(0,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,10,HEAP_OFF_N1)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,20,HEAP_OFF_N1,5)
,	/* v914: (byte 1) */
  bytes2word(RETURN_EVAL,POP_I1,JUMP,9)
,	/* v921: (byte 1) */
  bytes2word(2,UNPACK,1,PUSH_P1)
, bytes2word(0,EVAL,NEEDHEAP_P1,49)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(180),BOT(180),TOP(8),BOT(8))
,	/* v945: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v925: (byte 2) */
  bytes2word(10,1,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,13,HEAP_ARG,2)
, bytes2word(HEAP_INT_P1,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(14,HEAP_ARG,1,EVAL)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_P1,46)
, bytes2word(LE_W,JUMPFALSE,88,0)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_ARG_ARG)
, bytes2word(2,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,18,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CHAR_P1,8)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,16,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_P1,7,HEAP_P1)
, bytes2word(0,HEAP_CHAR_P1,8,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,8,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG_ARG,2,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_P1,0,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(5,HEAP_ARG_ARG,2,3)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,29,HEAP_OFF_N1)
,	/* v926: (byte 2) */
  bytes2word(5,RETURN_EVAL,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,2)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,19)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_P1,7,HEAP_P1)
, bytes2word(0,HEAP_CHAR_P1,8,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,8,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,2,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,20,HEAP_OFF_N1)
,	/* v928: (byte 2) */
  bytes2word(5,RETURN_EVAL,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,16,HEAP_ARG,2)
, bytes2word(HEAP_INT_P1,1,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_P1,0,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(20,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_I3,HEAP_CVAL_P1,13)
, bytes2word(HEAP_P1,0,HEAP_INT_P1,1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,4)
, bytes2word(HEAP_CHAR_P1,8,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_I5,HEAP_P1)
, bytes2word(0,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG_ARG,2,1)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,5)
, bytes2word(HEAP_P1,0,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,32,HEAP_OFF_N1)
,	/* v922: (byte 2) */
  bytes2word(5,RETURN_EVAL,POP_I1,JUMP)
,	/* v929: (byte 2) */
  bytes2word(232,0,POP_I1,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,2)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
,	/* v930: (byte 4) */
  bytes2word(21,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(POP_I1,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_P1)
,	/* v931: (byte 4) */
  bytes2word(21,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(POP_I1,PUSH_ARG_I3,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,NEEDHEAP_P1)
, bytes2word(38,TABLESWITCH,2,NOP)
,	/* v935: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(14),BOT(14))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_P1,22)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
,	/* v936: (byte 2) */
  bytes2word(3,RETURN_EVAL,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_P1,7,HEAP_ARG)
, bytes2word(2,HEAP_CHAR_P1,32,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,23,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,2,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,HEAP_I2,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_I1,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,8,HEAP_P1)
, bytes2word(0,HEAP_INT_P1,0,HEAP_OFF_N1)
, bytes2word(7,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(16,HEAP_OFF_N1,7,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,26,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,32,HEAP_OFF_N1,5)
,	/* v937: (byte 1) */
  bytes2word(RETURN_EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_P1,38,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v941: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,22,HEAP_ARG_ARG,1)
,	/* v942: (byte 4) */
  bytes2word(2,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,2,HEAP_CHAR_P1)
, bytes2word(32,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(23,HEAP_ARG,1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(2,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(1,HEAP_ARG,1,HEAP_P1)
, bytes2word(3,HEAP_CVAL_N1,4,HEAP_I1)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,8,HEAP_P1,0)
, bytes2word(HEAP_INT_P1,0,HEAP_OFF_N1,7)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,16)
, bytes2word(HEAP_OFF_N1,7,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,26,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_OFF_N1)
,	/* v909: (byte 4) */
  bytes2word(32,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,22,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
, CONSTR(1,2,0)
,	/* CT_v950: (byte 0) */
  HW(21,4)
, 0
,	/* F0_LAMBDA819: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA819),4)
, VAPTAG(useLabel(FN_Prelude_46putStr))
, VAPTAG(useLabel(FN_Prelude_46reverse))
, VAPTAG(useLabel(FN_Prelude_46take))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46replicate))
, CAPTAG(useLabel(FN_SimpleLineEditor_46Prelude_46212_46gl),3)
, VAPTAG(useLabel(FN_Prelude_46drop))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Prelude_46length))
, VAPTAG(useLabel(FN_LAMBDA814))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_LAMBDA815))
, VAPTAG(useLabel(FN_LAMBDA816))
, VAPTAG(useLabel(FN_LAMBDA817))
, VAPTAG(useLabel(FN_LAMBDA818))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_SimpleLineEditor_46Prelude_46212_46gl))
, VAPTAG(useLabel(FN_SimpleLineEditor_46delChars))
, bytes2word(0,0,0,0)
, useLabel(CT_v952)
,	/* FN_LAMBDA818: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v951)
,	/* CT_v952: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA818: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA818))
, bytes2word(0,0,0,0)
, useLabel(CT_v953)
,	/* FN_LAMBDA817: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v951)
,	/* CT_v953: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA817: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA817))
, bytes2word(0,0,0,0)
, useLabel(CT_v954)
,	/* FN_LAMBDA816: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v951)
,	/* CT_v954: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA816: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA816))
, bytes2word(0,0,0,0)
, useLabel(CT_v955)
,	/* FN_LAMBDA815: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v951)
,	/* CT_v955: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA815: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA815))
, bytes2word(0,0,0,0)
, useLabel(CT_v956)
,	/* FN_LAMBDA814: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v951)
,	/* CT_v956: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA814: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA814))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v997)
,	/* FN_LAMBDA813: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,8,TOP(20),BOT(20))
, bytes2word(TOP(49),BOT(49),TOP(127),BOT(127))
, bytes2word(TOP(226),BOT(226),TOP(245),BOT(245))
, bytes2word(TOP(253),BOT(253),TOP(335),BOT(335))
,	/* v990: (byte 2) */
  bytes2word(TOP(16),BOT(16),POP_I1,JUMP)
,	/* v960: (byte 2) */
  bytes2word(144,1,UNPACK,1)
, bytes2word(HEAP_CVAL_I3,HEAP_P1,0,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,0)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_INT_P1)
, bytes2word(0,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,12)
,	/* v961: (byte 3) */
  bytes2word(HEAP_OFF_N1,7,RETURN_EVAL,UNPACK)
, bytes2word(1,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,4,NOP)
, bytes2word(TOP(12),BOT(12),TOP(8),BOT(8))
,	/* v991: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v965: (byte 4) */
  bytes2word(POP_I1,JUMP,55,0)
, bytes2word(POP_I1,HEAP_CVAL_P1,7,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,30,0,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_P1,10,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_INT_P1)
, bytes2word(1,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,10)
,	/* v966: (byte 3) */
  bytes2word(HEAP_OFF_N1,7,RETURN_EVAL,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_ARG,1)
, bytes2word(HEAP_INT_P1,0,HEAP_ARG,2)
,	/* v962: (byte 1) */
  bytes2word(RETURN_EVAL,POP_I1,JUMP,37)
,	/* v968: (byte 1) */
  bytes2word(1,UNPACK,1,PUSH_P1)
, bytes2word(0,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(4,NOP,TOP(12),BOT(12))
, bytes2word(TOP(8),BOT(8),TOP(61),BOT(61))
,	/* v992: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v972: (byte 2) */
  bytes2word(76,0,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,1)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,12)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_ARG,1,HEAP_INT_P1,0)
,	/* v973: (byte 3) */
  bytes2word(HEAP_ARG,2,RETURN_EVAL,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_P1,14,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_CVAL_P1,15)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,4,HEAP_INT_P1)
, bytes2word(0,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,11)
,	/* v975: (byte 3) */
  bytes2word(HEAP_OFF_N1,7,RETURN_EVAL,POP_I1)
, bytes2word(HEAP_CVAL_P1,14,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_P1,16,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_INT_P1,0,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
,	/* v969: (byte 4) */
  bytes2word(10,HEAP_OFF_N1,7,RETURN_EVAL)
,	/* v976: (byte 4) */
  bytes2word(POP_I1,JUMP,194,0)
, bytes2word(POP_I1,HEAP_CVAL_P1,17,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,2,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,18)
,	/* v977: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,POP_I1)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_P1,18)
,	/* v978: (byte 3) */
  bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,POP_I1)
, bytes2word(PUSH_ARG_I2,EVAL,UNPACK,2)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v982: (byte 2) */
  bytes2word(TOP(15),BOT(15),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_ARG,1)
, bytes2word(HEAP_INT_P1,0,HEAP_ARG,2)
,	/* v983: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(14,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_P1,17,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,2,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_N1,1,HEAP_ARG,1)
, bytes2word(HEAP_I2,HEAP_CVAL_N1,4,HEAP_OFF_N1)
, bytes2word(4,HEAP_I1,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(8,HEAP_P1,0,HEAP_INT_P1)
, bytes2word(0,HEAP_OFF_N1,7,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,16,HEAP_OFF_N1)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,26,HEAP_OFF_N1,5)
,	/* v984: (byte 1) */
  bytes2word(RETURN_EVAL,POP_I1,PUSH_ARG_I2,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v988: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(15),BOT(15))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_ARG,1,HEAP_INT_P1,0)
,	/* v989: (byte 3) */
  bytes2word(HEAP_ARG,2,RETURN_EVAL,UNPACK)
, bytes2word(2,HEAP_CVAL_P1,14,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(17,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(2,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_I4,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,HEAP_P1,3)
, bytes2word(HEAP_CVAL_N1,4,HEAP_I1,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_I5,HEAP_OFF_N1,8)
, bytes2word(HEAP_P1,0,HEAP_INT_P1,0)
, bytes2word(HEAP_OFF_N1,7,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,16,HEAP_OFF_N1,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
,	/* v957: (byte 4) */
  bytes2word(26,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_ARG)
, bytes2word(1,HEAP_INT_P1,0,HEAP_ARG)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
, CONSTR(1,2,0)
,	/* CT_v997: (byte 0) */
  HW(16,3)
, 0
,	/* F0_LAMBDA813: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA813),3)
, VAPTAG(useLabel(FN_Prelude_46putChar))
, CAPTAG(useLabel(FN_SimpleLineEditor_46Prelude_46212_46gl),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, VAPTAG(useLabel(FN_Prelude_46null))
, VAPTAG(useLabel(FN_Prelude_46not))
, VAPTAG(useLabel(FN_Prelude_46putStr))
, VAPTAG(useLabel(FN_LAMBDA810))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_SimpleLineEditor_46Prelude_46212_46gl))
, VAPTAG(useLabel(FN_LAMBDA811))
, VAPTAG(useLabel(FN_SimpleLineEditor_46delChars))
, VAPTAG(useLabel(FN_Prelude_46tail))
, VAPTAG(useLabel(FN_LAMBDA812))
, VAPTAG(useLabel(FN_Prelude_46reverse))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v998)
,	/* FN_LAMBDA812: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v901)
,	/* CT_v998: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA812: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA812))
, bytes2word(0,0,0,0)
, useLabel(CT_v1000)
,	/* FN_LAMBDA811: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v999)
,	/* CT_v1000: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA811: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA811))
, bytes2word(0,0,0,0)
, useLabel(CT_v1002)
,	/* FN_LAMBDA810: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1001)
,	/* CT_v1002: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA810: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA810))
, bytes2word(0,0,0,0)
, useLabel(CT_v1003)
,};
Node FN_SimpleLineEditor_46restore[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_N1,1,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
,	/* CT_v1003: (byte 0) */
  HW(6,0)
, 0
,};
Node CF_SimpleLineEditor_46restore[] = {
  VAPTAG(useLabel(FN_SimpleLineEditor_46restore))
, VAPTAG(useLabel(FN_LAMBDA823))
, VAPTAG(useLabel(FN_System_46system))
, VAPTAG(useLabel(FN_IO_46hSetBuffering))
, useLabel(CF_IO_46stdout)
, useLabel(CF_IO_46stdin)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(0,0,0,0)
, useLabel(CT_v1005)
,	/* FN_LAMBDA823: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1004)
,	/* CT_v1005: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA823: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA823))
, bytes2word(0,0,0,0)
, useLabel(CT_v1006)
,};
Node FN_SimpleLineEditor_46initialise[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_N1,1,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v1006: (byte 0) */
  HW(6,0)
, 0
,};
Node CF_SimpleLineEditor_46initialise[] = {
  VAPTAG(useLabel(FN_SimpleLineEditor_46initialise))
, VAPTAG(useLabel(FN_LAMBDA824))
, VAPTAG(useLabel(FN_System_46system))
, VAPTAG(useLabel(FN_IO_46hSetBuffering))
, useLabel(CF_IO_46stdout)
, useLabel(CF_IO_46stdin)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(0,0,0,0)
, useLabel(CT_v1008)
,	/* FN_LAMBDA824: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1007)
,	/* CT_v1008: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA824: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA824))
,	/* ST_v901: (byte 0) */
 	/* ST_v1001: (byte 1) */
 	/* ST_v891: (byte 3) */
  bytes2word(0,8,0,8)
,	/* ST_v951: (byte 3) */
  bytes2word(32,8,0,32)
,	/* ST_v999: (byte 1) */
 	/* ST_v1007: (byte 3) */
  bytes2word(0,95,0,115)
, bytes2word(116,116,121,32)
, bytes2word(45,105,99,97)
, bytes2word(110,111,110,32)
, bytes2word(109,105,110,32)
, bytes2word(49,32,45,101)
,	/* ST_v1004: (byte 4) */
  bytes2word(99,104,111,0)
, bytes2word(115,116,116,121)
, bytes2word(32,105,99,97)
, bytes2word(110,111,110,32)
, bytes2word(101,99,104,111)
, bytes2word(0,0,0,0)
,};
