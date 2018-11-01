#include "newmacros.h"
#include "runtime.h"

#define C0_Overlap_46Excluded	((void*)startLabel+4)
#define C0_Overlap_46ResolvedTo	((void*)startLabel+8)
#define C0_Overlap_46Unresolved	((void*)startLabel+12)
#define FN_Overlap_46mkErrorOVD	((void*)startLabel+36)
#define CT_v1143	((void*)startLabel+148)
#define F0_Overlap_46mkErrorOVD	((void*)startLabel+156)
#define FN_LAMBDA1115	((void*)startLabel+216)
#define CT_v1145	((void*)startLabel+236)
#define CF_LAMBDA1115	((void*)startLabel+244)
#define FN_LAMBDA1114	((void*)startLabel+256)
#define CT_v1147	((void*)startLabel+276)
#define CF_LAMBDA1114	((void*)startLabel+284)
#define FN_LAMBDA1113	((void*)startLabel+296)
#define CT_v1149	((void*)startLabel+316)
#define CF_LAMBDA1113	((void*)startLabel+324)
#define FN_LAMBDA1112	((void*)startLabel+336)
#define CT_v1151	((void*)startLabel+356)
#define CF_LAMBDA1112	((void*)startLabel+364)
#define FN_Overlap_46mkErrorOVND	((void*)startLabel+388)
#define CT_v1155	((void*)startLabel+500)
#define F0_Overlap_46mkErrorOVND	((void*)startLabel+508)
#define FN_LAMBDA1119	((void*)startLabel+568)
#define CT_v1157	((void*)startLabel+588)
#define CF_LAMBDA1119	((void*)startLabel+596)
#define FN_LAMBDA1118	((void*)startLabel+608)
#define CT_v1159	((void*)startLabel+628)
#define CF_LAMBDA1118	((void*)startLabel+636)
#define FN_LAMBDA1117	((void*)startLabel+648)
#define CT_v1160	((void*)startLabel+668)
#define CF_LAMBDA1117	((void*)startLabel+676)
#define FN_LAMBDA1116	((void*)startLabel+688)
#define CT_v1161	((void*)startLabel+708)
#define CF_LAMBDA1116	((void*)startLabel+716)
#define FN_Overlap_46mkErrorND	((void*)startLabel+732)
#define v1169	((void*)startLabel+768)
#define v1167	((void*)startLabel+772)
#define v1164	((void*)startLabel+826)
#define CT_v1170	((void*)startLabel+900)
#define F0_Overlap_46mkErrorND	((void*)startLabel+908)
#define FN_LAMBDA1126	((void*)startLabel+976)
#define CT_v1172	((void*)startLabel+996)
#define CF_LAMBDA1126	((void*)startLabel+1004)
#define FN_LAMBDA1125	((void*)startLabel+1016)
#define CT_v1173	((void*)startLabel+1036)
#define CF_LAMBDA1125	((void*)startLabel+1044)
#define FN_LAMBDA1124	((void*)startLabel+1056)
#define CT_v1174	((void*)startLabel+1076)
#define CF_LAMBDA1124	((void*)startLabel+1084)
#define FN_LAMBDA1123	((void*)startLabel+1096)
#define CT_v1176	((void*)startLabel+1116)
#define CF_LAMBDA1123	((void*)startLabel+1124)
#define FN_LAMBDA1122	((void*)startLabel+1136)
#define CT_v1178	((void*)startLabel+1156)
#define CF_LAMBDA1122	((void*)startLabel+1164)
#define FN_LAMBDA1121	((void*)startLabel+1176)
#define CT_v1180	((void*)startLabel+1196)
#define CF_LAMBDA1121	((void*)startLabel+1204)
#define FN_LAMBDA1120	((void*)startLabel+1216)
#define CT_v1182	((void*)startLabel+1236)
#define CF_LAMBDA1120	((void*)startLabel+1244)
#define FN_Overlap_46mkErrorOV	((void*)startLabel+1268)
#define CT_v1186	((void*)startLabel+1352)
#define F0_Overlap_46mkErrorOV	((void*)startLabel+1360)
#define FN_LAMBDA1128	((void*)startLabel+1400)
#define CT_v1188	((void*)startLabel+1420)
#define CF_LAMBDA1128	((void*)startLabel+1428)
#define FN_LAMBDA1127	((void*)startLabel+1440)
#define CT_v1190	((void*)startLabel+1460)
#define CF_LAMBDA1127	((void*)startLabel+1468)
#define FN_Overlap_46mkErrorMD	((void*)startLabel+1488)
#define CT_v1194	((void*)startLabel+1568)
#define F0_Overlap_46mkErrorMD	((void*)startLabel+1576)
#define FN_LAMBDA1130	((void*)startLabel+1616)
#define CT_v1196	((void*)startLabel+1636)
#define CF_LAMBDA1130	((void*)startLabel+1644)
#define FN_LAMBDA1129	((void*)startLabel+1656)
#define CT_v1198	((void*)startLabel+1676)
#define CF_LAMBDA1129	((void*)startLabel+1684)
#define FN_Overlap_46resolveOverlaps	((void*)startLabel+1700)
#define CT_v1199	((void*)startLabel+1752)
#define F0_Overlap_46resolveOverlaps	((void*)startLabel+1760)
#define FN_Overlap_46Prelude_46329_46resolve	((void*)startLabel+1824)
#define v1207	((void*)startLabel+1838)
#define v1208	((void*)startLabel+1843)
#define v1237	((void*)startLabel+1854)
#define v1212	((void*)startLabel+1858)
#define v1238	((void*)startLabel+1870)
#define v1216	((void*)startLabel+1874)
#define v1213	((void*)startLabel+1889)
#define v1209	((void*)startLabel+1894)
#define v1204	((void*)startLabel+1898)
#define v1200	((void*)startLabel+1903)
#define v1241	((void*)startLabel+1924)
#define v1228	((void*)startLabel+1928)
#define v1242	((void*)startLabel+1940)
#define v1232	((void*)startLabel+1944)
#define v1233	((void*)startLabel+1990)
#define v1229	((void*)startLabel+2018)
#define v1225	((void*)startLabel+2022)
#define v1221	((void*)startLabel+2027)
#define v1217	((void*)startLabel+2032)
#define CT_v1243	((void*)startLabel+2056)
#define F0_Overlap_46Prelude_46329_46resolve	((void*)startLabel+2064)
#define FN_LAMBDA1133	((void*)startLabel+2104)
#define CT_v1245	((void*)startLabel+2124)
#define CF_LAMBDA1133	((void*)startLabel+2132)
#define FN_Overlap_46Prelude_46330_46mkUnique	((void*)startLabel+2156)
#define v1251	((void*)startLabel+2188)
#define v1252	((void*)startLabel+2197)
#define v1256	((void*)startLabel+2220)
#define v1257	((void*)startLabel+2262)
#define v1258	((void*)startLabel+2288)
#define CT_v1264	((void*)startLabel+2328)
#define F0_Overlap_46Prelude_46330_46mkUnique	((void*)startLabel+2336)
#define FN_Overlap_46Prelude_46331_46undef	((void*)startLabel+2384)
#define CT_v1265	((void*)startLabel+2420)
#define F0_Overlap_46Prelude_46331_46undef	((void*)startLabel+2428)
#define FN_LAMBDA1132	((void*)startLabel+2452)
#define CT_v1269	((void*)startLabel+2492)
#define F0_LAMBDA1132	((void*)startLabel+2500)
#define FN_Overlap_46Prelude_46332_46def	((void*)startLabel+2516)
#define CT_v1270	((void*)startLabel+2532)
#define F0_Overlap_46Prelude_46332_46def	((void*)startLabel+2540)
#define FN_LAMBDA1131	((void*)startLabel+2560)
#define CT_v1274	((void*)startLabel+2600)
#define F0_LAMBDA1131	((void*)startLabel+2608)
#define CT_v1275	((void*)startLabel+2684)
#define FN_Overlap_46Prelude_46292_46findUndef	((void*)startLabel+2736)
#define v1279	((void*)startLabel+2752)
#define v1280	((void*)startLabel+2763)
#define CT_v1283	((void*)startLabel+2772)
#define F0_Overlap_46Prelude_46292_46findUndef	((void*)startLabel+2780)
#define FN_Overlap_46Prelude_46293_46checkNonUnique	((void*)startLabel+2804)
#define v1287	((void*)startLabel+2832)
#define v1288	((void*)startLabel+2848)
#define v1292	((void*)startLabel+2872)
#define v1293	((void*)startLabel+2894)
#define v1294	((void*)startLabel+2916)
#define CT_v1299	((void*)startLabel+2936)
#define F0_Overlap_46Prelude_46293_46checkNonUnique	((void*)startLabel+2944)
#define FN_Overlap_46Prelude_46294_46newqf	((void*)startLabel+2996)
#define v1301	((void*)startLabel+3038)
#define v1302	((void*)startLabel+3050)
#define CT_v1304	((void*)startLabel+3060)
#define F0_Overlap_46Prelude_46294_46newqf	((void*)startLabel+3068)
#define FN_LAMBDA1138	((void*)startLabel+3124)
#define CT_v1305	((void*)startLabel+3136)
#define F0_LAMBDA1138	((void*)startLabel+3144)
#define FN_LAMBDA1137	((void*)startLabel+3156)
#define CT_v1306	((void*)startLabel+3168)
#define F0_LAMBDA1137	((void*)startLabel+3176)
#define FN_Overlap_46Prelude_46295_46buildqf	((void*)startLabel+3200)
#define v1314	((void*)startLabel+3236)
#define v1315	((void*)startLabel+3240)
#define v1316	((void*)startLabel+3263)
#define CT_v1321	((void*)startLabel+3272)
#define F0_Overlap_46Prelude_46295_46buildqf	((void*)startLabel+3280)
#define FN_Overlap_46Prelude_46296_46whichqf	((void*)startLabel+3316)
#define v1322	((void*)startLabel+3339)
#define CT_v1326	((void*)startLabel+3412)
#define F0_Overlap_46Prelude_46296_46whichqf	((void*)startLabel+3420)
#define FN_LAMBDA1136	((void*)startLabel+3464)
#define CT_v1328	((void*)startLabel+3484)
#define CF_LAMBDA1136	((void*)startLabel+3492)
#define FN_LAMBDA1135	((void*)startLabel+3504)
#define CT_v1330	((void*)startLabel+3524)
#define CF_LAMBDA1135	((void*)startLabel+3532)
#define FN_LAMBDA1134	((void*)startLabel+3544)
#define CT_v1332	((void*)startLabel+3564)
#define CF_LAMBDA1134	((void*)startLabel+3572)
#define CT_v1333	((void*)startLabel+3612)
#define FN_Overlap_46Prelude_46283_46add	((void*)startLabel+3648)
#define CT_v1334	((void*)startLabel+3712)
#define F0_Overlap_46Prelude_46283_46add	((void*)startLabel+3720)
#define ST_v1327	((void*)startLabel+3752)
#define ST_v1158	((void*)startLabel+3758)
#define ST_v1197	((void*)startLabel+3790)
#define ST_v1175	((void*)startLabel+3800)
#define ST_v1179	((void*)startLabel+3832)
#define ST_v1156	((void*)startLabel+3850)
#define ST_v1171	((void*)startLabel+3863)
#define ST_v1146	((void*)startLabel+3880)
#define ST_v1329	((void*)startLabel+3932)
#define ST_v1189	((void*)startLabel+3951)
#define ST_v1195	((void*)startLabel+3980)
#define ST_v1150	((void*)startLabel+3988)
#define ST_v1177	((void*)startLabel+3998)
#define ST_v1144	((void*)startLabel+4000)
#define ST_v1148	((void*)startLabel+4044)
#define ST_v1187	((void*)startLabel+4047)
#define ST_v1244	((void*)startLabel+4049)
#define ST_v1181	((void*)startLabel+4107)
#define ST_v1331	((void*)startLabel+4123)
extern Node FN_Prelude_46show[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46map[];
extern Node F0_Util_46Extra_46strPos[];
extern Node FN_Util_46Extra_46mix[];
extern Node FN_Prelude_46showList[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46Show_46IdKind_46IdKind_46show[];
extern Node FN_Prelude_46length[];
extern Node FN_Prelude_46Show_46Prelude_46Int_46show[];
extern Node FN_NHC_46Internal_46_95apply4[];
extern Node CF_Prelude_46Ord_46IdKind_46IdKind[];
extern Node CF_Prelude_46Ord_46TokenId_46TokenId[];
extern Node CF_Prelude_46Eq_46Id_46Id[];
extern Node CF_Prelude_46Show_46TokenId_46TokenId[];
extern Node CF_Prelude_46Show_46IdKind_46IdKind[];
extern Node FN_Prelude_46foldl[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_Prelude_46all[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Prelude_46Ord_46Prelude_462[];
extern Node FN_Data_46Map_46lookup[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46foldr[];
extern Node FN_Data_46Map_46update[];
extern Node FN_Data_46Map_46toList[];
extern Node CF_Prelude_46Eq_46TokenId_46TokenId[];
extern Node CF_Data_46Map_46empty[];
extern Node FN_Prelude_46head[];
extern Node FN_Data_46Map_46insertWith[];
extern Node FN_Prelude_46error[];
extern Node FN_List_46delete[];
extern Node FN_Data_46Map_46insert[];

static Node startLabel[] = {
  42
,	/* C0_Overlap_46Excluded: (byte 0) */
  CONSTR(2,0,0)
,	/* C0_Overlap_46ResolvedTo: (byte 0) */
  CONSTR(1,0,0)
,	/* C0_Overlap_46Unresolved: (byte 0) */
  CONSTR(0,0,0)
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v1143)
,	/* FN_Overlap_46mkErrorOVD: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_P1,47,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,6,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_P1,11,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,0)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,14,HEAP_OFF_N1,12)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,14,HEAP_OFF_N1,26)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,32,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CHAR_P1,32)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(14,HEAP_OFF_N1,43,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v1143: (byte 0) */
  HW(12,7)
, 0
,	/* F0_Overlap_46mkErrorOVD: (byte 0) */
  CAPTAG(useLabel(FN_Overlap_46mkErrorOVD),7)
, VAPTAG(useLabel(FN_Prelude_46show))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA1112))
, VAPTAG(useLabel(FN_LAMBDA1113))
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_Util_46Extra_46strPos)
, VAPTAG(useLabel(FN_Util_46Extra_46mix))
, VAPTAG(useLabel(FN_LAMBDA1114))
, VAPTAG(useLabel(FN_Prelude_46showList))
, VAPTAG(useLabel(FN_LAMBDA1115))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v1145)
,	/* FN_LAMBDA1115: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1144)
,	/* CT_v1145: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1115: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1115))
, bytes2word(0,0,0,0)
, useLabel(CT_v1147)
,	/* FN_LAMBDA1114: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1146)
,	/* CT_v1147: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1114: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1114))
, bytes2word(0,0,0,0)
, useLabel(CT_v1149)
,	/* FN_LAMBDA1113: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1148)
,	/* CT_v1149: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1113: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1113))
, bytes2word(0,0,0,0)
, useLabel(CT_v1151)
,	/* FN_LAMBDA1112: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1150)
,	/* CT_v1151: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1112: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1112))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v1155)
,	/* FN_Overlap_46mkErrorOVND: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_P1,47,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,6,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_P1,11,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,0)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,14,HEAP_OFF_N1,12)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,14,HEAP_OFF_N1,26)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,32,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CHAR_P1,32)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(14,HEAP_OFF_N1,43,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v1155: (byte 0) */
  HW(12,7)
, 0
,	/* F0_Overlap_46mkErrorOVND: (byte 0) */
  CAPTAG(useLabel(FN_Overlap_46mkErrorOVND),7)
, VAPTAG(useLabel(FN_Prelude_46show))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA1116))
, VAPTAG(useLabel(FN_LAMBDA1117))
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_Util_46Extra_46strPos)
, VAPTAG(useLabel(FN_Util_46Extra_46mix))
, VAPTAG(useLabel(FN_LAMBDA1118))
, VAPTAG(useLabel(FN_Prelude_46showList))
, VAPTAG(useLabel(FN_LAMBDA1119))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v1157)
,	/* FN_LAMBDA1119: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1156)
,	/* CT_v1157: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1119: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1119))
, bytes2word(0,0,0,0)
, useLabel(CT_v1159)
,	/* FN_LAMBDA1118: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1158)
,	/* CT_v1159: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1118: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1118))
, bytes2word(0,0,0,0)
, useLabel(CT_v1160)
,	/* FN_LAMBDA1117: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1148)
,	/* CT_v1160: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1117: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1117))
, bytes2word(0,0,0,0)
, useLabel(CT_v1161)
,	/* FN_LAMBDA1116: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1150)
,	/* CT_v1161: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1116: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1116))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1170)
,	/* FN_Overlap_46mkErrorND: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,13,TOP(26),BOT(26))
, bytes2word(TOP(26),BOT(26),TOP(30),BOT(30))
, bytes2word(TOP(26),BOT(26),TOP(26),BOT(26))
, bytes2word(TOP(26),BOT(26),TOP(26),BOT(26))
, bytes2word(TOP(26),BOT(26),TOP(26),BOT(26))
, bytes2word(TOP(26),BOT(26),TOP(26),BOT(26))
,	/* v1169: (byte 4) */
  bytes2word(TOP(26),BOT(26),TOP(26),BOT(26))
,	/* v1167: (byte 4) */
  bytes2word(POP_I1,JUMP,56,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,25,HEAP_OFF_N1)
,	/* v1164: (byte 2) */
  bytes2word(5,RETURN_EVAL,HEAP_CVAL_P1,13)
, bytes2word(HEAP_I1,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,14,HEAP_CVAL_P1)
, bytes2word(15,HEAP_CVAL_P1,8,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,16,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(13,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,19,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_N1,1,HEAP_CHAR_P1)
, bytes2word(32,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,29)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v1170: (byte 0) */
  HW(14,3)
, 0
,	/* F0_Overlap_46mkErrorND: (byte 0) */
  CAPTAG(useLabel(FN_Overlap_46mkErrorND),3)
, VAPTAG(useLabel(FN_LAMBDA1120))
, VAPTAG(useLabel(FN_Prelude_46show))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA1121))
, VAPTAG(useLabel(FN_LAMBDA1122))
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_Util_46Extra_46strPos)
, VAPTAG(useLabel(FN_Util_46Extra_46mix))
, VAPTAG(useLabel(FN_LAMBDA1123))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_Prelude_46Show_46IdKind_46IdKind_46show))
, VAPTAG(useLabel(FN_LAMBDA1124))
, VAPTAG(useLabel(FN_LAMBDA1125))
, VAPTAG(useLabel(FN_LAMBDA1126))
, bytes2word(0,0,0,0)
, useLabel(CT_v1172)
,	/* FN_LAMBDA1126: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1171)
,	/* CT_v1172: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1126: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1126))
, bytes2word(0,0,0,0)
, useLabel(CT_v1173)
,	/* FN_LAMBDA1125: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1148)
,	/* CT_v1173: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1125: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1125))
, bytes2word(0,0,0,0)
, useLabel(CT_v1174)
,	/* FN_LAMBDA1124: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1150)
,	/* CT_v1174: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1124: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1124))
, bytes2word(0,0,0,0)
, useLabel(CT_v1176)
,	/* FN_LAMBDA1123: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1175)
,	/* CT_v1176: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1123: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1123))
, bytes2word(0,0,0,0)
, useLabel(CT_v1178)
,	/* FN_LAMBDA1122: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1177)
,	/* CT_v1178: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1122: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1122))
, bytes2word(0,0,0,0)
, useLabel(CT_v1180)
,	/* FN_LAMBDA1121: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1179)
,	/* CT_v1180: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1121: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1121))
, bytes2word(0,0,0,0)
, useLabel(CT_v1182)
,	/* FN_LAMBDA1120: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1181)
,	/* CT_v1182: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1120: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1120))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v1186)
,	/* FN_Overlap_46mkErrorOV: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_P1,33,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,5,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,0)
, bytes2word(HEAP_ARG,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,12)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CHAR_P1,32)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,29,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v1186: (byte 0) */
  HW(7,6)
, 0
,	/* F0_Overlap_46mkErrorOV: (byte 0) */
  CAPTAG(useLabel(FN_Overlap_46mkErrorOV),6)
, VAPTAG(useLabel(FN_Prelude_46show))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA1127))
, VAPTAG(useLabel(FN_Prelude_46showList))
, VAPTAG(useLabel(FN_LAMBDA1128))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v1188)
,	/* FN_LAMBDA1128: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1187)
,	/* CT_v1188: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1128: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1128))
, bytes2word(0,0,0,0)
, useLabel(CT_v1190)
,	/* FN_LAMBDA1127: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1189)
,	/* CT_v1190: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1127: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1127))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1194)
,	/* FN_Overlap_46mkErrorMD: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,16)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CHAR_P1,32,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(27,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v1194: (byte 0) */
  HW(7,4)
, 0
,	/* F0_Overlap_46mkErrorMD: (byte 0) */
  CAPTAG(useLabel(FN_Overlap_46mkErrorMD),4)
, VAPTAG(useLabel(FN_Prelude_46show))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA1129))
, VAPTAG(useLabel(FN_Prelude_46length))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Int_46show))
, VAPTAG(useLabel(FN_LAMBDA1130))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v1196)
,	/* FN_LAMBDA1130: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1195)
,	/* CT_v1196: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1130: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1130))
, bytes2word(0,0,0,0)
, useLabel(CT_v1198)
,	/* FN_LAMBDA1129: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1197)
,	/* CT_v1198: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1129: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1129))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1199)
,	/* FN_Overlap_46resolveOverlaps: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,7)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
,	/* CT_v1199: (byte 0) */
  HW(9,2)
, 0
,	/* F0_Overlap_46resolveOverlaps: (byte 0) */
  CAPTAG(useLabel(FN_Overlap_46resolveOverlaps),2)
, CAPTAG(useLabel(FN_Overlap_46Prelude_46329_46resolve),8)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply4))
, useLabel(CF_Prelude_46Ord_46IdKind_46IdKind)
, useLabel(CF_Prelude_46Ord_46TokenId_46TokenId)
, useLabel(CF_Prelude_46Eq_46Id_46Id)
, useLabel(CF_Prelude_46Show_46TokenId_46TokenId)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, useLabel(CF_Prelude_46Show_46IdKind_46IdKind)
, VAPTAG(useLabel(FN_Prelude_46foldl))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v1243)
,	/* FN_Overlap_46Prelude_46329_46resolve: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG,8,EVAL)
, bytes2word(UNPACK,2,PUSH_I1,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1207: (byte 2) */
  bytes2word(TOP(9),BOT(9),UNPACK,1)
,	/* v1208: (byte 3) */
  bytes2word(PUSH_ARG,7,RETURN_EVAL,UNPACK)
, bytes2word(1,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1237: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1212: (byte 2) */
  bytes2word(38,0,UNPACK,2)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(8),BOT(8))
,	/* v1238: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v1216: (byte 2) */
  bytes2word(17,0,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,4,5,HEAP_ARG_ARG)
, bytes2word(6,7,HEAP_P1,4)
,	/* v1213: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v1209: (byte 2) */
  bytes2word(2,0,POP_I1,JUMP)
,	/* v1204: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v1200: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ZAP_ARG)
, bytes2word(7,EVAL,UNPACK,2)
, bytes2word(PUSH_ARG,8,UNPACK,2)
, bytes2word(PUSH_I1,ZAP_ARG,8,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v1241: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v1228: (byte 4) */
  bytes2word(POP_I1,JUMP,96,0)
, bytes2word(UNPACK,1,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v1242: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v1232: (byte 4) */
  bytes2word(POP_I1,JUMP,76,0)
, bytes2word(UNPACK,2,PUSH_I1,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,23)
, bytes2word(0,HEAP_CVAL_N1,1,HEAP_P1)
, bytes2word(5,HEAP_P1,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,4,5,HEAP_ARG)
, bytes2word(6,HEAP_OFF_N1,9,HEAP_P1)
,	/* v1233: (byte 2) */
  bytes2word(4,RETURN_EVAL,HEAP_CVAL_N1,2)
, bytes2word(HEAP_P1,0,HEAP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG_ARG,6,5)
, bytes2word(HEAP_P1,3,HEAP_OFF_N1,7)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,6)
, bytes2word(HEAP_P1,5,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,4,HEAP_P1)
,	/* v1229: (byte 2) */
  bytes2word(7,RETURN_EVAL,POP_I1,JUMP)
,	/* v1225: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v1221: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v1217: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(HEAP_CVAL_P1,8,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v1243: (byte 0) */
  HW(7,8)
, 0
,	/* F0_Overlap_46Prelude_46329_46resolve: (byte 0) */
  CAPTAG(useLabel(FN_Overlap_46Prelude_46329_46resolve),8)
, VAPTAG(useLabel(FN_Overlap_46Prelude_46330_46mkUnique))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46all))
, VAPTAG(useLabel(FN_Overlap_46mkErrorMD))
, VAPTAG(useLabel(FN_LAMBDA1133))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v1245)
,	/* FN_LAMBDA1133: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1244)
,	/* CT_v1245: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1133: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1133))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v1264)
,	/* FN_Overlap_46Prelude_46330_46mkUnique: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(UNPACK,2,PUSH_ARG,7)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,2,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,7,HEAP_P1,4)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v1251: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(13),BOT(13))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,3,HEAP_P1,4)
,	/* v1252: (byte 1) */
  bytes2word(RETURN,UNPACK,1,PUSH_P1)
, bytes2word(0,ZAP_STACK_P1,2,ZAP_STACK_P1)
, bytes2word(1,EVAL,UNPACK,3)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v1256: (byte 4) */
  bytes2word(TOP(48),BOT(48),TOP(74),BOT(74))
, bytes2word(POP_I1,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_P1,5,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(7,HEAP_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,15,HEAP_OFF_N1)
, bytes2word(7,HEAP_I2,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,7,HEAP_OFF_N1)
,	/* v1257: (byte 2) */
  bytes2word(6,RETURN,POP_I1,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,2)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_P1)
, bytes2word(5,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(6,HEAP_P1,7,HEAP_I2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_P1)
,	/* v1258: (byte 4) */
  bytes2word(7,HEAP_OFF_N1,6,RETURN)
, bytes2word(POP_I1,HEAP_CVAL_P1,9,HEAP_ARG_ARG)
, bytes2word(5,3,HEAP_ARG_ARG,4)
, bytes2word(7,HEAP_I1,HEAP_I2,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,8,HEAP_P1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,4,HEAP_P1,8)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v1264: (byte 0) */
  HW(7,7)
, 0
,	/* F0_Overlap_46Prelude_46330_46mkUnique: (byte 0) */
  CAPTAG(useLabel(FN_Overlap_46Prelude_46330_46mkUnique),7)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, VAPTAG(useLabel(FN_Data_46Map_46lookup))
, CAPTAG(useLabel(FN_Overlap_46Prelude_46331_46undef),5)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, CAPTAG(useLabel(FN_Overlap_46Prelude_46332_46def),3)
, VAPTAG(useLabel(FN_Prelude_46foldr))
, VAPTAG(useLabel(FN_Overlap_46mkErrorOV))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v1265)
,	/* FN_Overlap_46Prelude_46331_46undef: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_CVAL_I4,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,4,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,6,HEAP_ARG)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1265: (byte 0) */
  HW(3,5)
, 0
,	/* F0_Overlap_46Prelude_46331_46undef: (byte 0) */
  CAPTAG(useLabel(FN_Overlap_46Prelude_46331_46undef),5)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, CAPTAG(useLabel(FN_LAMBDA1132),1)
, VAPTAG(useLabel(FN_Data_46Map_46update))
, bytes2word(1,0,0,1)
, useLabel(CT_v1269)
,	/* FN_LAMBDA1132: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,2)
, bytes2word(HEAP_I1,HEAP_I2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, CONSTR(0,3,0)
, CONSTR(2,0,0)
,	/* CT_v1269: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1132: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1132),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1270)
,	/* FN_Overlap_46Prelude_46332_46def: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1270: (byte 0) */
  HW(2,3)
, 0
,	/* F0_Overlap_46Prelude_46332_46def: (byte 0) */
  CAPTAG(useLabel(FN_Overlap_46Prelude_46332_46def),3)
, CAPTAG(useLabel(FN_LAMBDA1131),1)
, VAPTAG(useLabel(FN_Data_46Map_46update))
, bytes2word(1,0,0,1)
, useLabel(CT_v1274)
,	/* FN_LAMBDA1131: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,2)
, bytes2word(HEAP_I1,HEAP_I2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, CONSTR(0,3,0)
, CONSTR(1,0,0)
,	/* CT_v1274: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1131: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1131),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1275)
,};
Node FN_Overlap_46deAlias[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_I1)
, bytes2word(HEAP_P1,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1275: (byte 0) */
  HW(7,3)
, 0
,};
Node F0_Overlap_46deAlias[] = {
  CAPTAG(useLabel(FN_Overlap_46deAlias),3)
, VAPTAG(useLabel(FN_Data_46Map_46toList))
, VAPTAG(useLabel(FN_Overlap_46resolveOverlaps))
, VAPTAG(useLabel(FN_LAMBDA1137))
, VAPTAG(useLabel(FN_LAMBDA1138))
, CAPTAG(useLabel(FN_Overlap_46Prelude_46292_46findUndef),2)
, VAPTAG(useLabel(FN_Prelude_46foldr))
, CAPTAG(useLabel(FN_Overlap_46Prelude_46294_46newqf),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1283)
,	/* FN_Overlap_46Prelude_46292_46findUndef: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v1279: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(15),BOT(15))
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_I2,HEAP_I1)
,	/* v1280: (byte 3) */
  bytes2word(HEAP_ARG,3,RETURN_EVAL,UNPACK)
, bytes2word(1,PUSH_ARG_I3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1283: (byte 0) */
  HW(1,3)
, 0
,	/* F0_Overlap_46Prelude_46292_46findUndef: (byte 0) */
  CAPTAG(useLabel(FN_Overlap_46Prelude_46292_46findUndef),3)
, VAPTAG(useLabel(FN_Overlap_46Prelude_46293_46checkNonUnique))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1299)
,	/* FN_Overlap_46Prelude_46293_46checkNonUnique: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG_ARG,2)
, bytes2word(1,ZAP_ARG_I1,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v1287: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(20),BOT(20))
, bytes2word(POP_I1,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG_ARG,2,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
,	/* v1288: (byte 4) */
  bytes2word(5,HEAP_ARG,4,RETURN)
, bytes2word(UNPACK,1,PUSH_P1,0)
, bytes2word(ZAP_STACK_P1,2,ZAP_STACK_P1,1)
, bytes2word(EVAL,UNPACK,3,PUSH_P1)
, bytes2word(0,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1292: (byte 4) */
  bytes2word(TOP(28),BOT(28),TOP(50),BOT(50))
, bytes2word(POP_I1,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,8,HEAP_CVAL_P1)
, bytes2word(10,HEAP_ARG_ARG,2,3)
, bytes2word(HEAP_I1,HEAP_I2,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,9,HEAP_ARG)
,	/* v1293: (byte 2) */
  bytes2word(4,RETURN,POP_I1,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_P1,8,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,10,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_I1,HEAP_I2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
,	/* v1294: (byte 4) */
  bytes2word(9,HEAP_ARG,4,RETURN)
, bytes2word(POP_I1,PUSH_ARG,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v1299: (byte 0) */
  HW(9,4)
, 0
,	/* F0_Overlap_46Prelude_46293_46checkNonUnique: (byte 0) */
  CAPTAG(useLabel(FN_Overlap_46Prelude_46293_46checkNonUnique),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, useLabel(CF_Prelude_46Ord_46TokenId_46TokenId)
, useLabel(CF_Prelude_46Ord_46IdKind_46IdKind)
, VAPTAG(useLabel(FN_Data_46Map_46lookup))
, VAPTAG(useLabel(FN_Overlap_46mkErrorND))
, useLabel(CF_Prelude_46Show_46TokenId_46TokenId)
, VAPTAG(useLabel(FN_Overlap_46mkErrorOVND))
, useLabel(CF_Prelude_46Show_46IdKind_46IdKind)
, VAPTAG(useLabel(FN_Overlap_46mkErrorOVD))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1304)
,	/* FN_Overlap_46Prelude_46294_46newqf: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,9)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,3,HEAP_OFF_N1,7)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v1301: (byte 2) */
  bytes2word(TOP(16),BOT(16),POP_I1,HEAP_CVAL_P1)
, bytes2word(12,HEAP_ARG_ARG,1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,13,HEAP_OFF_N1)
,	/* v1302: (byte 2) */
  bytes2word(4,RETURN_EVAL,UNPACK,1)
, bytes2word(PUSH_P1,0,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1304: (byte 0) */
  HW(11,3)
, 0
,	/* F0_Overlap_46Prelude_46294_46newqf: (byte 0) */
  CAPTAG(useLabel(FN_Overlap_46Prelude_46294_46newqf),3)
, CAPTAG(useLabel(FN_Overlap_46Prelude_46295_46buildqf),6)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply4))
, useLabel(CF_Prelude_46Ord_46TokenId_46TokenId)
, useLabel(CF_Prelude_46Eq_46TokenId_46TokenId)
, useLabel(CF_Prelude_46Show_46TokenId_46TokenId)
, VAPTAG(useLabel(FN_Data_46Map_46toList))
, VAPTAG(useLabel(FN_Prelude_46foldr))
, useLabel(CF_Data_46Map_46empty)
, VAPTAG(useLabel(FN_Data_46Map_46lookup))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46head))
, bytes2word(1,0,0,1)
, useLabel(CT_v1305)
,	/* FN_LAMBDA1138: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1305: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1138: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1138),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1306)
,	/* FN_LAMBDA1137: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1306: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1137: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1137),1)
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v1321)
,	/* FN_Overlap_46Prelude_46295_46buildqf: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(ZAP_STACK_P1,1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,3,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,2,EVAL)
, bytes2word(UNPACK,3,PUSH_P1,0)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v1314: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(33),BOT(33))
,	/* v1315: (byte 4) */
  bytes2word(POP_I1,PUSH_ARG,6,RETURN_EVAL)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG_ARG,2,4)
, bytes2word(HEAP_ARG,3,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(8,HEAP_I2,HEAP_P1,4)
,	/* v1316: (byte 3) */
  bytes2word(HEAP_ARG,6,RETURN_EVAL,POP_I1)
, bytes2word(PUSH_ARG,6,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1321: (byte 0) */
  HW(3,6)
, 0
,	/* F0_Overlap_46Prelude_46295_46buildqf: (byte 0) */
  CAPTAG(useLabel(FN_Overlap_46Prelude_46295_46buildqf),6)
, CAPTAG(useLabel(FN_Overlap_46Prelude_46296_46whichqf),6)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply4))
, VAPTAG(useLabel(FN_Data_46Map_46insertWith))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v1326)
,	/* FN_Overlap_46Prelude_46296_46whichqf: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_ARG,6,PUSH_ARG)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_P1)
, bytes2word(35,JUMPFALSE,5,0)
,	/* v1322: (byte 3) */
  bytes2word(PUSH_ARG,6,RETURN_EVAL,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_P1,7,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,6,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(13,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,19,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(25,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,31,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1326: (byte 0) */
  HW(8,6)
, 0
,	/* F0_Overlap_46Prelude_46296_46whichqf: (byte 0) */
  CAPTAG(useLabel(FN_Overlap_46Prelude_46296_46whichqf),6)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_LAMBDA1134))
, VAPTAG(useLabel(FN_Prelude_46show))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA1135))
, VAPTAG(useLabel(FN_LAMBDA1136))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v1328)
,	/* FN_LAMBDA1136: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1327)
,	/* CT_v1328: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1136: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1136))
, bytes2word(0,0,0,0)
, useLabel(CT_v1330)
,	/* FN_LAMBDA1135: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1329)
,	/* CT_v1330: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1135: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1135))
, bytes2word(0,0,0,0)
, useLabel(CT_v1332)
,	/* FN_LAMBDA1134: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1331)
,	/* CT_v1332: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1134: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1134))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1333)
,};
Node FN_Overlap_46addOverlap[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_ARG,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(3,4,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1333: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Overlap_46addOverlap[] = {
  CAPTAG(useLabel(FN_Overlap_46addOverlap),4)
, CAPTAG(useLabel(FN_Overlap_46Prelude_46283_46add),2)
, VAPTAG(useLabel(FN_Prelude_46foldr))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v1334)
,	/* FN_Overlap_46Prelude_46283_46add: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_N1,1,HEAP_ARG_ARG,4)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_ARG_ARG)
, bytes2word(4,3,HEAP_CVAL_IN3,HEAP_OFF_N1)
, bytes2word(8,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,16)
, bytes2word(HEAP_OFF_N1,7,HEAP_ARG,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
,	/* CT_v1334: (byte 0) */
  HW(7,5)
, 0
,	/* F0_Overlap_46Prelude_46283_46add: (byte 0) */
  CAPTAG(useLabel(FN_Overlap_46Prelude_46283_46add),5)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, useLabel(CF_Prelude_46Ord_46TokenId_46TokenId)
, useLabel(CF_Prelude_46Ord_46IdKind_46IdKind)
, VAPTAG(useLabel(FN_List_46delete))
, useLabel(CF_Prelude_46Eq_46TokenId_46TokenId)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Data_46Map_46insert))
,	/* ST_v1327: (byte 0) */
  bytes2word(32,97,110,100)
,	/* ST_v1158: (byte 2) */
  bytes2word(32,0,32,99)
, bytes2word(97,110,110,111)
, bytes2word(116,32,98,101)
, bytes2word(32,114,101,115)
, bytes2word(111,108,118,101)
, bytes2word(100,58,10,32)
, bytes2word(32,110,111,110)
, bytes2word(101,32,111,102)
,	/* ST_v1197: (byte 2) */
  bytes2word(32,0,32,100)
, bytes2word(101,102,105,110)
,	/* ST_v1175: (byte 4) */
  bytes2word(101,100,32,0)
, bytes2word(32,100,111,101)
, bytes2word(115,32,110,111)
, bytes2word(116,32,98,101)
, bytes2word(108,111,110,103)
, bytes2word(32,116,111,32)
, bytes2word(116,104,105,115)
, bytes2word(32,99,108,97)
,	/* ST_v1179: (byte 4) */
  bytes2word(115,115,46,0)
, bytes2word(32,105,110,115)
, bytes2word(116,97,110,116)
, bytes2word(105,97,116,101)
, bytes2word(100,32,97,116)
,	/* ST_v1156: (byte 2) */
  bytes2word(32,0,32,105)
, bytes2word(115,32,100,101)
, bytes2word(102,105,110,101)
,	/* ST_v1171: (byte 3) */
  bytes2word(100,46,0,32)
, bytes2word(105,115,32,110)
, bytes2word(111,116,32,100)
, bytes2word(101,102,105,110)
,	/* ST_v1146: (byte 4) */
  bytes2word(101,100,46,0)
, bytes2word(32,105,115,32)
, bytes2word(116,104,101,32)
, bytes2word(99,111,114,114)
, bytes2word(101,99,116,32)
, bytes2word(113,117,97,108)
, bytes2word(105,102,105,101)
, bytes2word(100,32,114,101)
, bytes2word(115,111,108,117)
, bytes2word(116,105,111,110)
, bytes2word(32,102,111,114)
, bytes2word(32,97,108,108)
, bytes2word(32,111,102,58)
,	/* ST_v1329: (byte 4) */
  bytes2word(10,32,32,0)
, bytes2word(32,114,101,115)
, bytes2word(111,108,118,101)
, bytes2word(115,32,116,111)
, bytes2word(32,98,111,116)
,	/* ST_v1189: (byte 3) */
  bytes2word(104,32,0,32)
, bytes2word(114,101,115,111)
, bytes2word(108,118,101,115)
, bytes2word(32,116,111,32)
, bytes2word(116,119,111,32)
, bytes2word(111,114,32,109)
, bytes2word(111,114,101,32)
,	/* ST_v1195: (byte 4) */
  bytes2word(111,102,32,0)
, bytes2word(32,116,105,109)
,	/* ST_v1150: (byte 4) */
  bytes2word(101,115,46,0)
, bytes2word(32,117,115,101)
, bytes2word(100,32,97,116)
,	/* ST_v1177: (byte 2) */
 	/* ST_v1144: (byte 4) */
  bytes2word(32,0,44,0)
, bytes2word(44,10,32,98)
, bytes2word(117,116,32,116)
, bytes2word(104,101,114,101)
, bytes2word(32,105,115,32)
, bytes2word(115,116,105,108)
, bytes2word(108,32,115,111)
, bytes2word(109,101,32,117)
, bytes2word(110,107,110,111)
, bytes2word(119,110,32,112)
, bytes2word(114,111,98,108)
,	/* ST_v1148: (byte 4) */
  bytes2word(101,109,46,0)
,	/* ST_v1187: (byte 3) */
  bytes2word(44,32,0,46)
,	/* ST_v1244: (byte 1) */
  bytes2word(0,79,118,101)
, bytes2word(114,108,97,112)
, bytes2word(58,32,80,97)
, bytes2word(116,116,101,114)
, bytes2word(110,32,109,97)
, bytes2word(116,99,104,32)
, bytes2word(102,97,105,108)
, bytes2word(117,114,101,32)
, bytes2word(105,110,32,102)
, bytes2word(117,110,99,116)
, bytes2word(105,111,110,32)
, bytes2word(97,116,32,57)
, bytes2word(49,58,53,45)
, bytes2word(57,54,58,52)
,	/* ST_v1181: (byte 3) */
  bytes2word(51,46,0,84)
, bytes2word(104,101,32,105)
, bytes2word(100,101,110,116)
, bytes2word(105,102,105,101)
,	/* ST_v1331: (byte 3) */
  bytes2word(114,32,0,105)
, bytes2word(109,112,111,114)
, bytes2word(116,32,97,108)
, bytes2word(105,97,115,32)
, bytes2word(0,0,0,0)
,};
