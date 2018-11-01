#include "newmacros.h"
#include "runtime.h"

#define FN_GetOptSOF_46split	((void*)startLabel+16)
#define v988	((void*)startLabel+26)
#define v982	((void*)startLabel+30)
#define v979	((void*)startLabel+35)
#define v986	((void*)startLabel+64)
#define v987	((void*)startLabel+74)
#define CT_v991	((void*)startLabel+104)
#define F0_GetOptSOF_46split	((void*)startLabel+112)
#define FN_GetOptSOF_46prefix	((void*)startLabel+144)
#define v1012	((void*)startLabel+154)
#define v995	((void*)startLabel+158)
#define v992	((void*)startLabel+165)
#define v1013	((void*)startLabel+174)
#define v999	((void*)startLabel+178)
#define v996	((void*)startLabel+183)
#define v1014	((void*)startLabel+190)
#define v1003	((void*)startLabel+194)
#define v1015	((void*)startLabel+204)
#define v1007	((void*)startLabel+208)
#define v1008	((void*)startLabel+237)
#define v1010	((void*)startLabel+249)
#define v1004	((void*)startLabel+254)
#define v1000	((void*)startLabel+259)
#define CT_v1016	((void*)startLabel+280)
#define F0_GetOptSOF_46prefix	((void*)startLabel+288)
#define FN_LAMBDA943	((void*)startLabel+320)
#define CT_v1018	((void*)startLabel+340)
#define CF_LAMBDA943	((void*)startLabel+348)
#define FN_GetOptSOF_46bindOpt	((void*)startLabel+364)
#define CT_v1022	((void*)startLabel+396)
#define F0_GetOptSOF_46bindOpt	((void*)startLabel+404)
#define FN_LAMBDA944	((void*)startLabel+428)
#define v1024	((void*)startLabel+448)
#define v1025	((void*)startLabel+453)
#define CT_v1033	((void*)startLabel+504)
#define F0_LAMBDA944	((void*)startLabel+512)
#define FN_GetOptSOF_46popArg	((void*)startLabel+524)
#define CT_v1034	((void*)startLabel+548)
#define CF_GetOptSOF_46popArg	((void*)startLabel+556)
#define FN_LAMBDA945	((void*)startLabel+576)
#define v1036	((void*)startLabel+586)
#define v1037	((void*)startLabel+591)
#define CT_v1039	((void*)startLabel+628)
#define F0_LAMBDA945	((void*)startLabel+636)
#define CT_v1040	((void*)startLabel+672)
#define FN_LAMBDA946	((void*)startLabel+700)
#define CT_v1041	((void*)startLabel+720)
#define F0_LAMBDA946	((void*)startLabel+728)
#define CT_v1042	((void*)startLabel+760)
#define FN_LAMBDA947	((void*)startLabel+796)
#define v1043	((void*)startLabel+815)
#define CT_v1045	((void*)startLabel+824)
#define F0_LAMBDA947	((void*)startLabel+832)
#define CT_v1046	((void*)startLabel+872)
#define FN_LAMBDA948	((void*)startLabel+900)
#define CT_v1047	((void*)startLabel+944)
#define F0_LAMBDA948	((void*)startLabel+952)
#define CT_v1048	((void*)startLabel+988)
#define FN_LAMBDA950	((void*)startLabel+1020)
#define CT_v1049	((void*)startLabel+1036)
#define F0_LAMBDA950	((void*)startLabel+1044)
#define FN_LAMBDA949	((void*)startLabel+1068)
#define CT_v1050	((void*)startLabel+1096)
#define F0_LAMBDA949	((void*)startLabel+1104)
#define CT_v1051	((void*)startLabel+1140)
#define FN_LAMBDA951	((void*)startLabel+1176)
#define v1053	((void*)startLabel+1192)
#define v1054	((void*)startLabel+1196)
#define CT_v1056	((void*)startLabel+1208)
#define F0_LAMBDA951	((void*)startLabel+1216)
#define CT_v1057	((void*)startLabel+1268)
#define FN_LAMBDA953	((void*)startLabel+1308)
#define CT_v1058	((void*)startLabel+1324)
#define F0_LAMBDA953	((void*)startLabel+1332)
#define FN_LAMBDA952	((void*)startLabel+1356)
#define CT_v1059	((void*)startLabel+1388)
#define F0_LAMBDA952	((void*)startLabel+1396)
#define CT_v1060	((void*)startLabel+1432)
#define FN_LAMBDA955	((void*)startLabel+1468)
#define v1062	((void*)startLabel+1486)
#define v1063	((void*)startLabel+1490)
#define CT_v1065	((void*)startLabel+1512)
#define F0_LAMBDA955	((void*)startLabel+1520)
#define FN_LAMBDA954	((void*)startLabel+1560)
#define CT_v1066	((void*)startLabel+1576)
#define F0_LAMBDA954	((void*)startLabel+1584)
#define CT_v1067	((void*)startLabel+1616)
#define FN_LAMBDA957	((void*)startLabel+1648)
#define CT_v1068	((void*)startLabel+1664)
#define F0_LAMBDA957	((void*)startLabel+1672)
#define FN_LAMBDA956	((void*)startLabel+1696)
#define CT_v1069	((void*)startLabel+1724)
#define F0_LAMBDA956	((void*)startLabel+1732)
#define CT_v1070	((void*)startLabel+1768)
#define FN_LAMBDA958	((void*)startLabel+1804)
#define v1072	((void*)startLabel+1822)
#define v1073	((void*)startLabel+1826)
#define CT_v1075	((void*)startLabel+1848)
#define F0_LAMBDA958	((void*)startLabel+1856)
#define CT_v1076	((void*)startLabel+1908)
#define FN_LAMBDA960	((void*)startLabel+1940)
#define CT_v1077	((void*)startLabel+1952)
#define F0_LAMBDA960	((void*)startLabel+1960)
#define FN_LAMBDA959	((void*)startLabel+1980)
#define CT_v1078	((void*)startLabel+2008)
#define F0_LAMBDA959	((void*)startLabel+2016)
#define CT_v1079	((void*)startLabel+2052)
#define FN_LAMBDA961	((void*)startLabel+2088)
#define v1081	((void*)startLabel+2106)
#define v1082	((void*)startLabel+2110)
#define CT_v1084	((void*)startLabel+2124)
#define F0_LAMBDA961	((void*)startLabel+2132)
#define CT_v1085	((void*)startLabel+2180)
#define FN_LAMBDA962	((void*)startLabel+2212)
#define CT_v1086	((void*)startLabel+2236)
#define F0_LAMBDA962	((void*)startLabel+2244)
#define FN_GetOptSOF_46returnOpt	((void*)startLabel+2256)
#define CT_v1087	((void*)startLabel+2280)
#define F0_GetOptSOF_46returnOpt	((void*)startLabel+2288)
#define FN_LAMBDA963	((void*)startLabel+2308)
#define CT_v1088	((void*)startLabel+2336)
#define F0_LAMBDA963	((void*)startLabel+2344)
#define CT_v1089	((void*)startLabel+2372)
#define FN_LAMBDA964	((void*)startLabel+2408)
#define v1091	((void*)startLabel+2426)
#define v1092	((void*)startLabel+2430)
#define CT_v1094	((void*)startLabel+2444)
#define F0_LAMBDA964	((void*)startLabel+2452)
#define CT_v1095	((void*)startLabel+2500)
#define FN_LAMBDA965	((void*)startLabel+2532)
#define v1100	((void*)startLabel+2542)
#define v1099	((void*)startLabel+2546)
#define v1096	((void*)startLabel+2554)
#define CT_v1101	((void*)startLabel+2572)
#define F0_LAMBDA965	((void*)startLabel+2580)
#define CT_v1108	((void*)startLabel+2640)
#define FN_LAMBDA966	((void*)startLabel+2672)
#define v1110	((void*)startLabel+2690)
#define v1111	((void*)startLabel+2703)
#define CT_v1113	((void*)startLabel+2724)
#define F0_LAMBDA966	((void*)startLabel+2732)
#define CT_v1114	((void*)startLabel+2756)
#define CT_v1115	((void*)startLabel+2792)
#define FN_GetOptSOF_46seqOpt	((void*)startLabel+2824)
#define CT_v1116	((void*)startLabel+2840)
#define F0_GetOptSOF_46seqOpt	((void*)startLabel+2848)
#define FN_LAMBDA967	((void*)startLabel+2872)
#define CT_v1117	((void*)startLabel+2884)
#define F0_LAMBDA967	((void*)startLabel+2892)
#define CT_v1118	((void*)startLabel+2928)
#define FN_LAMBDA968	((void*)startLabel+2956)
#define CT_v1119	((void*)startLabel+3000)
#define F0_LAMBDA968	((void*)startLabel+3008)
#define CT_v1120	((void*)startLabel+3044)
#define FN_LAMBDA969	((void*)startLabel+3080)
#define CT_v1121	((void*)startLabel+3096)
#define F0_LAMBDA969	((void*)startLabel+3104)
#define CT_v1122	((void*)startLabel+3188)
#define FN_LAMBDA970	((void*)startLabel+3236)
#define CT_v1123	((void*)startLabel+3264)
#define F0_LAMBDA970	((void*)startLabel+3272)
#define CT_v1124	((void*)startLabel+3328)
#define FN_LAMBDA971	((void*)startLabel+3364)
#define CT_v1128	((void*)startLabel+3384)
#define F0_LAMBDA971	((void*)startLabel+3392)
#define CT_v1129	((void*)startLabel+3428)
#define FN_LAMBDA972	((void*)startLabel+3460)
#define CT_v1133	((void*)startLabel+3476)
#define F0_LAMBDA972	((void*)startLabel+3484)
#define CT_v1134	((void*)startLabel+3516)
#define v1152	((void*)startLabel+3554)
#define v1138	((void*)startLabel+3558)
#define v1135	((void*)startLabel+3569)
#define v1154	((void*)startLabel+3582)
#define v1146	((void*)startLabel+3586)
#define v1148	((void*)startLabel+3606)
#define v1149	((void*)startLabel+3632)
#define v1143	((void*)startLabel+3654)
#define v1139	((void*)startLabel+3658)
#define CT_v1157	((void*)startLabel+3688)
#define FN_LAMBDA975	((void*)startLabel+3728)
#define CT_v1159	((void*)startLabel+3748)
#define CF_LAMBDA975	((void*)startLabel+3756)
#define FN_LAMBDA974	((void*)startLabel+3768)
#define CT_v1160	((void*)startLabel+3780)
#define F0_LAMBDA974	((void*)startLabel+3788)
#define FN_LAMBDA973	((void*)startLabel+3800)
#define CT_v1161	((void*)startLabel+3812)
#define F0_LAMBDA973	((void*)startLabel+3820)
#define FN_GetOptSOF_46mapOpt	((void*)startLabel+3836)
#define CT_v1165	((void*)startLabel+3868)
#define F0_GetOptSOF_46mapOpt	((void*)startLabel+3876)
#define FN_LAMBDA976	((void*)startLabel+3900)
#define v1167	((void*)startLabel+3920)
#define v1168	((void*)startLabel+3925)
#define CT_v1173	((void*)startLabel+3972)
#define F0_LAMBDA976	((void*)startLabel+3980)
#define FN_GetOptSOF_46result	((void*)startLabel+3996)
#define CT_v1174	((void*)startLabel+4012)
#define F0_GetOptSOF_46result	((void*)startLabel+4020)
#define FN_LAMBDA977	((void*)startLabel+4044)
#define CT_v1175	((void*)startLabel+4056)
#define F0_LAMBDA977	((void*)startLabel+4064)
#define ST_v1158	((void*)startLabel+4068)
#define ST_v1017	((void*)startLabel+4130)
extern Node FN_Prelude_46flip[];
extern Node F0_Prelude_46Eq_46Prelude_46Char_46_61_61[];
extern Node FN_Prelude_46break[];
extern Node FN_Prelude_46_61_61[];
extern Node CF_Prelude_46otherwise[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node FN_Prelude_46foldl1[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46map[];

static Node startLabel[] = {
  42
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v991)
,	/* FN_GetOptSOF_46split: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v988: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v982: (byte 2) */
  bytes2word(7,0,POP_I1,PUSH_HEAP)
,	/* v979: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,PUSH_ARG_I2)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,EVAL,UNPACK,2)
, bytes2word(PUSH_I1,ZAP_STACK_P1,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v986: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(14),BOT(14))
, bytes2word(POP_I1,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_I1,HEAP_OFF_N1)
,	/* v987: (byte 2) */
  bytes2word(3,RETURN,UNPACK,2)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_P1,3,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v991: (byte 0) */
  HW(4,2)
, 0
,	/* F0_GetOptSOF_46split: (byte 0) */
  CAPTAG(useLabel(FN_GetOptSOF_46split),2)
, CAPTAG(useLabel(FN_Prelude_46flip),1)
, useLabel(F0_Prelude_46Eq_46Prelude_46Char_46_61_61)
, VAPTAG(useLabel(FN_Prelude_46break))
, VAPTAG(useLabel(FN_GetOptSOF_46split))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1016)
,	/* FN_GetOptSOF_46prefix: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v1012: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v995: (byte 2) */
  bytes2word(9,0,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_ARG,3)
,	/* v992: (byte 1) */
  bytes2word(RETURN,PUSH_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v1013: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v999: (byte 2) */
  bytes2word(7,0,POP_I1,PUSH_HEAP)
,	/* v996: (byte 3) */
  bytes2word(HEAP_CVAL_N1,2,RETURN,PUSH_ARG_I2)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1014: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1003: (byte 2) */
  bytes2word(67,0,UNPACK,2)
, bytes2word(PUSH_ARG_I3,TABLESWITCH,2,NOP)
,	/* v1015: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v1007: (byte 4) */
  bytes2word(POP_I1,JUMP,48,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(PUSH_P1,3,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,10)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_P1,4,HEAP_I2)
,	/* v1008: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_CVAL_P1,5,ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,6)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v1010: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v1004: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v1000: (byte 3) */
  bytes2word(JUMP,2,0,HEAP_CVAL_P1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
,	/* CT_v1016: (byte 0) */
  HW(5,3)
, 0
,	/* F0_GetOptSOF_46prefix: (byte 0) */
  CAPTAG(useLabel(FN_GetOptSOF_46prefix),3)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_GetOptSOF_46prefix))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_LAMBDA943))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v1018)
,	/* FN_LAMBDA943: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1017)
,	/* CT_v1018: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA943: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA943))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1022)
,	/* FN_GetOptSOF_46bindOpt: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,1,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1022: (byte 0) */
  HW(1,2)
, 0
,	/* F0_GetOptSOF_46bindOpt: (byte 0) */
  CAPTAG(useLabel(FN_GetOptSOF_46bindOpt),2)
, CAPTAG(useLabel(FN_LAMBDA944),2)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1033)
,	/* FN_LAMBDA944: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG,4,PUSH_ARG_I3)
, bytes2word(PUSH_ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG,4)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v1024: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(9),BOT(9))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v1025: (byte 1) */
  bytes2word(RETURN,UNPACK,1,PUSH_P1)
, bytes2word(0,ZAP_STACK_P1,1,EVAL)
, bytes2word(UNPACK,3,PUSH_P1,2)
, bytes2word(PUSH_ZAP_ARG_I1,ZAP_STACK_P1,4,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,EVAL)
, bytes2word(UNPACK,1,PUSH_P1,2)
, bytes2word(PUSH_P1,2,PUSH_P1,2)
, bytes2word(ZAP_STACK_P1,5,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v1033: (byte 0) */
  HW(0,4)
, 0
,	/* F0_LAMBDA944: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA944),4)
, bytes2word(0,0,0,0)
, useLabel(CT_v1034)
,	/* FN_GetOptSOF_46popArg: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1034: (byte 0) */
  HW(1,0)
, 0
,	/* CF_GetOptSOF_46popArg: (byte 0) */
  VAPTAG(useLabel(FN_GetOptSOF_46popArg))
, CAPTAG(useLabel(FN_LAMBDA945),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1039)
,	/* FN_LAMBDA945: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1036: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v1037: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(2,HEAP_CVAL_N1,2,HEAP_I1)
, bytes2word(HEAP_ARG,2,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, CONSTR(0,3,0)
, CONSTR(0,0,0)
,	/* CT_v1039: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA945: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA945),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v1040)
,};
Node FN_GetOptSOF_46failed[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1040: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_GetOptSOF_46failed[] = {
  VAPTAG(useLabel(FN_GetOptSOF_46failed))
, CAPTAG(useLabel(FN_LAMBDA946),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1041)
,	/* FN_LAMBDA946: (byte 0) */
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v1041: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA946: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA946),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1042)
,};
Node FN_GetOptSOF_46matches[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1042: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_GetOptSOF_46matches[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46matches),2)
, CAPTAG(useLabel(FN_LAMBDA947),1)
, VAPTAG(useLabel(FN_GetOptSOF_46bindOpt))
, useLabel(CF_GetOptSOF_46popArg)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1045)
,	/* FN_LAMBDA947: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I3,PUSH_ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,EVAL)
, bytes2word(JUMPFALSE,10,0,PUSH_ARG_I3)
, bytes2word(PUSH_ZAP_ARG_I2,ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
,	/* v1043: (byte 3) */
  bytes2word(APPLY,1,RETURN_EVAL,PUSH_CVAL_P1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1045: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA947: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA947),3)
, useLabel(CF_GetOptSOF_46failed)
, bytes2word(1,0,0,1)
, useLabel(CT_v1046)
,};
Node FN_GetOptSOF_46updState[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
, bytes2word(3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1046: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_GetOptSOF_46updState[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46updState),1)
, CAPTAG(useLabel(FN_LAMBDA948),2)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1047)
,	/* FN_LAMBDA948: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(3,HEAP_CVAL_N1,1,HEAP_CVAL_N1)
, bytes2word(2,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, CONSTR(0,3,0)
, CONSTR(0,0,0)
,	/* CT_v1047: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA948: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA948),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1048)
,};
Node FN_GetOptSOF_46_45_63[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1048: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_GetOptSOF_46_45_63[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46_45_63),2)
, CAPTAG(useLabel(FN_LAMBDA950),1)
, VAPTAG(useLabel(FN_GetOptSOF_46matches))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1049)
,	/* FN_LAMBDA950: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1049: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA950: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA950),2)
, CAPTAG(useLabel(FN_LAMBDA949),1)
, VAPTAG(useLabel(FN_GetOptSOF_46updState))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1050)
,	/* FN_LAMBDA949: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v1050: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA949: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA949),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1051)
,};
Node FN_GetOptSOF_46optionWithOptArg[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1051: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_GetOptSOF_46optionWithOptArg[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46optionWithOptArg),2)
, CAPTAG(useLabel(FN_LAMBDA951),1)
, VAPTAG(useLabel(FN_GetOptSOF_46bindOpt))
, useLabel(CF_GetOptSOF_46popArg)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1056)
,	/* FN_LAMBDA951: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,2,3,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,EVAL,TABLESWITCH,2)
,	/* v1053: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v1054: (byte 4) */
  bytes2word(POP_I1,PUSH_CVAL_P1,5,RETURN_EVAL)
, bytes2word(UNPACK,1,PUSH_ARG_I1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1056: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA951: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA951),3)
, VAPTAG(useLabel(FN_GetOptSOF_46prefix))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, useLabel(CF_GetOptSOF_46failed)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1057)
,};
Node FN_GetOptSOF_46_45_61_61_61_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1057: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_GetOptSOF_46_45_61_61_61_61[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46_45_61_61_61_61),2)
, CAPTAG(useLabel(FN_LAMBDA953),1)
, VAPTAG(useLabel(FN_GetOptSOF_46bindOpt))
, useLabel(CF_GetOptSOF_46popArg)
, VAPTAG(useLabel(FN_GetOptSOF_46optionWithOptArg))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1058)
,	/* FN_LAMBDA953: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1058: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA953: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA953),2)
, CAPTAG(useLabel(FN_LAMBDA952),1)
, VAPTAG(useLabel(FN_GetOptSOF_46updState))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1059)
,	/* FN_LAMBDA952: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(1,1,0)
,	/* CT_v1059: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA952: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA952),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1060)
,};
Node FN_GetOptSOF_46optionArg[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1060: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_GetOptSOF_46optionArg[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46optionArg),2)
, CAPTAG(useLabel(FN_LAMBDA955),1)
, VAPTAG(useLabel(FN_GetOptSOF_46bindOpt))
, useLabel(CF_GetOptSOF_46popArg)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1065)
,	/* FN_LAMBDA955: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,2,3,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v1062: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_CVAL_P1)
,	/* v1063: (byte 2) */
  bytes2word(5,RETURN_EVAL,UNPACK,1)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1065: (byte 0) */
  HW(6,3)
, 0
,	/* F0_LAMBDA955: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA955),3)
, VAPTAG(useLabel(FN_GetOptSOF_46prefix))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, useLabel(CF_GetOptSOF_46failed)
, CAPTAG(useLabel(FN_LAMBDA954),1)
, VAPTAG(useLabel(FN_GetOptSOF_46bindOpt))
, useLabel(CF_GetOptSOF_46popArg)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1066)
,	/* FN_LAMBDA954: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,PUSH_ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1066: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA954: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA954),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1067)
,};
Node FN_GetOptSOF_46_45_61_61_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1067: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_GetOptSOF_46_45_61_61_61[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46_45_61_61_61),2)
, CAPTAG(useLabel(FN_LAMBDA957),1)
, VAPTAG(useLabel(FN_GetOptSOF_46optionArg))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1068)
,	/* FN_LAMBDA957: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1068: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA957: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA957),2)
, CAPTAG(useLabel(FN_LAMBDA956),1)
, VAPTAG(useLabel(FN_GetOptSOF_46updState))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1069)
,	/* FN_LAMBDA956: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v1069: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA956: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA956),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1070)
,};
Node FN_GetOptSOF_46prefixArg[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1070: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_GetOptSOF_46prefixArg[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46prefixArg),2)
, CAPTAG(useLabel(FN_LAMBDA958),1)
, VAPTAG(useLabel(FN_GetOptSOF_46bindOpt))
, useLabel(CF_GetOptSOF_46popArg)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1075)
,	/* FN_LAMBDA958: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,2,3,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v1072: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_CVAL_P1)
,	/* v1073: (byte 2) */
  bytes2word(5,RETURN_EVAL,UNPACK,1)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1075: (byte 0) */
  HW(5,3)
, 0
,	/* F0_LAMBDA958: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA958),3)
, VAPTAG(useLabel(FN_GetOptSOF_46prefix))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, useLabel(CF_GetOptSOF_46failed)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_GetOptSOF_46updState))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1076)
,};
Node FN_GetOptSOF_46_45_61_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1076: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_GetOptSOF_46_45_61_61[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46_45_61_61),2)
, CAPTAG(useLabel(FN_LAMBDA960),1)
, VAPTAG(useLabel(FN_GetOptSOF_46prefixArg))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1077)
,	/* FN_LAMBDA960: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1077: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA960: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA960),2)
, CAPTAG(useLabel(FN_LAMBDA959),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1078)
,	/* FN_LAMBDA959: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v1078: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA959: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA959),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1079)
,};
Node FN_GetOptSOF_46flag[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1079: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_GetOptSOF_46flag[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46flag),2)
, CAPTAG(useLabel(FN_LAMBDA961),1)
, VAPTAG(useLabel(FN_GetOptSOF_46bindOpt))
, useLabel(CF_GetOptSOF_46popArg)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1084)
,	/* FN_LAMBDA961: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,2,3,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v1081: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_CVAL_P1)
,	/* v1082: (byte 2) */
  bytes2word(5,RETURN_EVAL,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1084: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA961: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA961),3)
, VAPTAG(useLabel(FN_GetOptSOF_46prefix))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, useLabel(CF_GetOptSOF_46failed)
, VAPTAG(useLabel(FN_GetOptSOF_46updState))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1085)
,};
Node FN_GetOptSOF_46_45_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1085: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_GetOptSOF_46_45_61[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46_45_61),2)
, CAPTAG(useLabel(FN_LAMBDA962),1)
, VAPTAG(useLabel(FN_GetOptSOF_46flag))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1086)
,	/* FN_LAMBDA962: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v1086: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA962: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA962),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v1087)
,	/* FN_GetOptSOF_46returnOpt: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
, bytes2word(3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1087: (byte 0) */
  HW(1,1)
, 0
,	/* F0_GetOptSOF_46returnOpt: (byte 0) */
  CAPTAG(useLabel(FN_GetOptSOF_46returnOpt),1)
, CAPTAG(useLabel(FN_LAMBDA963),2)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1088)
,	/* FN_LAMBDA963: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(5,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,3,0)
,	/* CT_v1088: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA963: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA963),3)
, bytes2word(1,0,0,1)
, useLabel(CT_v1089)
,};
Node FN_GetOptSOF_46prefixMatch[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1089: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_GetOptSOF_46prefixMatch[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46prefixMatch),1)
, CAPTAG(useLabel(FN_LAMBDA964),1)
, VAPTAG(useLabel(FN_GetOptSOF_46bindOpt))
, useLabel(CF_GetOptSOF_46popArg)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1094)
,	/* FN_LAMBDA964: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v1091: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_CVAL_P1)
,	/* v1092: (byte 2) */
  bytes2word(5,RETURN_EVAL,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_I1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1094: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA964: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA964),2)
, VAPTAG(useLabel(FN_GetOptSOF_46prefix))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, useLabel(CF_GetOptSOF_46failed)
, VAPTAG(useLabel(FN_GetOptSOF_46returnOpt))
, bytes2word(1,0,0,1)
, useLabel(CT_v1095)
,};
Node FN_GetOptSOF_46string[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1095: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_GetOptSOF_46string[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46string),1)
, VAPTAG(useLabel(FN_GetOptSOF_46prefixMatch))
, CAPTAG(useLabel(FN_LAMBDA965),1)
, VAPTAG(useLabel(FN_GetOptSOF_46bindOpt))
, bytes2word(1,0,0,1)
, useLabel(CT_v1101)
,	/* FN_LAMBDA965: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v1100: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v1099: (byte 2) */
  bytes2word(10,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
,	/* v1096: (byte 2) */
  bytes2word(2,RETURN_EVAL,PUSH_CVAL_P1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v1101: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA965: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA965),1)
, VAPTAG(useLabel(FN_GetOptSOF_46returnOpt))
, useLabel(CF_GetOptSOF_46failed)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1108)
,};
Node FN_GetOptSOF_46catchOpt[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(1,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,1,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1108: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_GetOptSOF_46catchOpt[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46catchOpt),2)
, CAPTAG(useLabel(FN_LAMBDA966),2)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1113)
,	/* FN_LAMBDA966: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG,4,PUSH_ARG_I3)
, bytes2word(PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v1110: (byte 2) */
  bytes2word(TOP(17),BOT(17),POP_I1,PUSH_ARG)
, bytes2word(4,PUSH_ARG_I3,PUSH_ZAP_ARG_I1,ZAP_ARG_I3)
, bytes2word(ZAP_ARG,4,EVAL,NEEDHEAP_I32)
,	/* v1111: (byte 3) */
  bytes2word(APPLY,2,RETURN_EVAL,UNPACK)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v1113: (byte 0) */
  HW(0,4)
, 0
,	/* F0_LAMBDA966: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA966),4)
, bytes2word(0,0,0,0)
, useLabel(CT_v1114)
,};
Node FN_GetOptSOF_46orOpt[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1114: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_GetOptSOF_46orOpt[] = {
  VAPTAG(useLabel(FN_GetOptSOF_46orOpt))
, useLabel(F0_GetOptSOF_46catchOpt)
, bytes2word(1,0,0,1)
, useLabel(CT_v1115)
,};
Node FN_GetOptSOF_46opts[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1115: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_GetOptSOF_46opts[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46opts),1)
, VAPTAG(useLabel(FN_Prelude_46foldl1))
, useLabel(CF_GetOptSOF_46orOpt)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1116)
,	/* FN_GetOptSOF_46seqOpt: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1116: (byte 0) */
  HW(2,2)
, 0
,	/* F0_GetOptSOF_46seqOpt: (byte 0) */
  CAPTAG(useLabel(FN_GetOptSOF_46seqOpt),2)
, CAPTAG(useLabel(FN_LAMBDA967),1)
, VAPTAG(useLabel(FN_GetOptSOF_46bindOpt))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1117)
,	/* FN_LAMBDA967: (byte 0) */
  bytes2word(ZAP_ARG_I2,NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1117: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA967: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA967),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v1118)
,};
Node FN_GetOptSOF_46pushArg[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
, bytes2word(3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1118: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_GetOptSOF_46pushArg[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46pushArg),1)
, CAPTAG(useLabel(FN_LAMBDA968),2)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1119)
,	/* FN_LAMBDA968: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_CVAL_N1,2)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(3,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,3,0)
, CONSTR(0,0,0)
, CONSTR(1,2,0)
,	/* CT_v1119: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA968: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA968),3)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1120)
,};
Node FN_GetOptSOF_46prefixed[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1120: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_GetOptSOF_46prefixed[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46prefixed),2)
, VAPTAG(useLabel(FN_GetOptSOF_46prefixMatch))
, CAPTAG(useLabel(FN_LAMBDA969),1)
, VAPTAG(useLabel(FN_GetOptSOF_46bindOpt))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1121)
,	/* FN_LAMBDA969: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1121: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA969: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA969),2)
, VAPTAG(useLabel(FN_GetOptSOF_46pushArg))
, VAPTAG(useLabel(FN_GetOptSOF_46seqOpt))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1122)
,};
Node FN_GetOptSOF_46toggle[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_N1,2,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_I5,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_ARG_ARG,3,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v1122: (byte 0) */
  HW(6,4)
, 0
,};
Node F0_GetOptSOF_46toggle[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46toggle),4)
, VAPTAG(useLabel(FN_GetOptSOF_46orOpt))
, VAPTAG(useLabel(FN_GetOptSOF_46returnOpt))
, VAPTAG(useLabel(FN_GetOptSOF_46prefixed))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA970),1)
, VAPTAG(useLabel(FN_GetOptSOF_46bindOpt))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1123)
,	/* FN_LAMBDA970: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(3,HEAP_CVAL_I4,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1123: (byte 0) */
  HW(5,3)
, 0
,	/* F0_LAMBDA970: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA970),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_GetOptSOF_46updState))
, VAPTAG(useLabel(FN_GetOptSOF_46seqOpt))
, useLabel(CF_GetOptSOF_46popArg)
, VAPTAG(useLabel(FN_GetOptSOF_46prefixed))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1124)
,};
Node FN_GetOptSOF_46toggles[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1124: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_GetOptSOF_46toggles[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46toggles),3)
, CAPTAG(useLabel(FN_LAMBDA971),1)
, VAPTAG(useLabel(FN_Prelude_46map))
, VAPTAG(useLabel(FN_GetOptSOF_46opts))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1128)
,	/* FN_LAMBDA971: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_I1)
, bytes2word(HEAP_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1128: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA971: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA971),3)
, VAPTAG(useLabel(FN_GetOptSOF_46toggle))
, bytes2word(1,0,0,1)
, useLabel(CT_v1129)
,};
Node FN_GetOptSOF_46flags[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1129: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_GetOptSOF_46flags[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46flags),1)
, CAPTAG(useLabel(FN_LAMBDA972),1)
, VAPTAG(useLabel(FN_Prelude_46map))
, VAPTAG(useLabel(FN_GetOptSOF_46opts))
, bytes2word(1,0,0,1)
, useLabel(CT_v1133)
,	/* FN_LAMBDA972: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_I1,HEAP_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1133: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA972: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA972),1)
, VAPTAG(useLabel(FN_GetOptSOF_46flag))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1134)
,};
Node FN_GetOptSOF_46thenOpt[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1134: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_GetOptSOF_46thenOpt[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46thenOpt),2)
, VAPTAG(useLabel(FN_GetOptSOF_46seqOpt))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1157)
,};
Node FN_GetOptSOF_46getOpts[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v1152: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v1138: (byte 2) */
  bytes2word(13,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,2)
,	/* v1135: (byte 1) */
  bytes2word(RETURN,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,1,PUSH_ARG_I3,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v1154: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1146: (byte 2) */
  bytes2word(70,0,UNPACK,2)
, bytes2word(PUSH_ARG_I2,PUSH_ARG_I3,PUSH_P1,4)
, bytes2word(ZAP_ARG_I3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v1148: (byte 2) */
  bytes2word(TOP(30),BOT(30),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_I2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(7,HEAP_CVAL_IN3,HEAP_P1,3)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v1149: (byte 4) */
  bytes2word(HEAP_OFF_N1,4,HEAP_I1,RETURN)
, bytes2word(UNPACK,1,PUSH_P1,0)
, bytes2word(ZAP_ARG_I2,ZAP_STACK_P1,3,ZAP_STACK_P1)
, bytes2word(2,ZAP_STACK_P1,1,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_I2)
,	/* v1143: (byte 2) */
  bytes2word(HEAP_I1,RETURN_EVAL,POP_I1,JUMP)
,	/* v1139: (byte 2) */
  bytes2word(2,0,HEAP_CVAL_P1,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
,	/* CT_v1157: (byte 0) */
  HW(5,3)
, 0
,};
Node F0_GetOptSOF_46getOpts[] = {
  CAPTAG(useLabel(FN_GetOptSOF_46getOpts),3)
, VAPTAG(useLabel(FN_GetOptSOF_46getOpts))
, VAPTAG(useLabel(FN_LAMBDA973))
, VAPTAG(useLabel(FN_LAMBDA974))
, VAPTAG(useLabel(FN_LAMBDA975))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v1159)
,	/* FN_LAMBDA975: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1158)
,	/* CT_v1159: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA975: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA975))
, bytes2word(1,0,0,1)
, useLabel(CT_v1160)
,	/* FN_LAMBDA974: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1160: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA974: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA974),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1161)
,	/* FN_LAMBDA973: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1161: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA973: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA973),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1165)
,	/* FN_GetOptSOF_46mapOpt: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,1,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1165: (byte 0) */
  HW(1,2)
, 0
,	/* F0_GetOptSOF_46mapOpt: (byte 0) */
  CAPTAG(useLabel(FN_GetOptSOF_46mapOpt),2)
, CAPTAG(useLabel(FN_LAMBDA976),2)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1173)
,	/* FN_LAMBDA976: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG,4,PUSH_ARG_I3)
, bytes2word(PUSH_ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG,4)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v1167: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(9),BOT(9))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v1168: (byte 1) */
  bytes2word(RETURN,UNPACK,1,PUSH_P1)
, bytes2word(0,ZAP_STACK_P1,1,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,3,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_I2,HEAP_CVAL_N1)
, bytes2word(2,HEAP_P1,0,HEAP_I1)
, bytes2word(HEAP_OFF_N1,6,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, CONSTR(0,3,0)
, CONSTR(0,0,0)
,	/* CT_v1173: (byte 0) */
  HW(1,4)
, 0
,	/* F0_LAMBDA976: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA976),4)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(1,0,0,1)
, useLabel(CT_v1174)
,	/* FN_GetOptSOF_46result: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1174: (byte 0) */
  HW(2,1)
, 0
,	/* F0_GetOptSOF_46result: (byte 0) */
  CAPTAG(useLabel(FN_GetOptSOF_46result),1)
, CAPTAG(useLabel(FN_LAMBDA977),1)
, VAPTAG(useLabel(FN_GetOptSOF_46updState))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1175)
,	/* FN_LAMBDA977: (byte 0) */
  bytes2word(ZAP_ARG_I2,NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1175: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA977: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA977),2)
,	/* ST_v1158: (byte 0) */
  bytes2word(71,101,116,79)
, bytes2word(112,116,83,79)
, bytes2word(70,58,32,80)
, bytes2word(97,116,116,101)
, bytes2word(114,110,32,109)
, bytes2word(97,116,99,104)
, bytes2word(32,102,97,105)
, bytes2word(108,117,114,101)
, bytes2word(32,105,110,32)
, bytes2word(102,117,110,99)
, bytes2word(116,105,111,110)
, bytes2word(32,97,116,32)
, bytes2word(49,55,49,58)
, bytes2word(51,45,49,55)
, bytes2word(53,58,52,53)
,	/* ST_v1017: (byte 2) */
  bytes2word(46,0,71,101)
, bytes2word(116,79,112,116)
, bytes2word(83,79,70,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,50,57)
, bytes2word(53,58,51,45)
, bytes2word(50,57,57,58)
, bytes2word(50,52,46,0)
,};
