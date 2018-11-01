#include "newmacros.h"
#include "runtime.h"

#define FN_SyntaxPos_46getPosList	((void*)startLabel+8)
#define v1193	((void*)startLabel+18)
#define v1192	((void*)startLabel+22)
#define v1189	((void*)startLabel+26)
#define CT_v1194	((void*)startLabel+52)
#define F0_SyntaxPos_46getPosList	((void*)startLabel+60)
#define v1196	((void*)startLabel+102)
#define v1197	((void*)startLabel+107)
#define CT_v1199	((void*)startLabel+120)
#define v1201	((void*)startLabel+150)
#define v1202	((void*)startLabel+155)
#define CT_v1204	((void*)startLabel+168)
#define v1206	((void*)startLabel+198)
#define v1207	((void*)startLabel+203)
#define CT_v1209	((void*)startLabel+216)
#define CT_v1210	((void*)startLabel+248)
#define v1212	((void*)startLabel+282)
#define v1221	((void*)startLabel+296)
#define v1216	((void*)startLabel+300)
#define v1213	((void*)startLabel+321)
#define v1217	((void*)startLabel+332)
#define v1218	((void*)startLabel+347)
#define v1219	((void*)startLabel+352)
#define CT_v1222	((void*)startLabel+364)
#define CT_v1223	((void*)startLabel+416)
#define CT_v1227	((void*)startLabel+476)
#define v1232	((void*)startLabel+522)
#define v1231	((void*)startLabel+526)
#define v1228	((void*)startLabel+530)
#define CT_v1233	((void*)startLabel+568)
#define v1264	((void*)startLabel+674)
#define v1237	((void*)startLabel+678)
#define v1238	((void*)startLabel+684)
#define v1239	((void*)startLabel+690)
#define v1240	((void*)startLabel+695)
#define v1241	((void*)startLabel+700)
#define v1242	((void*)startLabel+705)
#define v1243	((void*)startLabel+710)
#define v1244	((void*)startLabel+717)
#define v1245	((void*)startLabel+722)
#define v1246	((void*)startLabel+727)
#define v1247	((void*)startLabel+732)
#define v1248	((void*)startLabel+737)
#define v1249	((void*)startLabel+755)
#define v1250	((void*)startLabel+760)
#define v1251	((void*)startLabel+765)
#define v1252	((void*)startLabel+770)
#define v1253	((void*)startLabel+775)
#define v1254	((void*)startLabel+780)
#define v1255	((void*)startLabel+785)
#define v1256	((void*)startLabel+790)
#define v1257	((void*)startLabel+795)
#define v1258	((void*)startLabel+800)
#define v1259	((void*)startLabel+805)
#define v1260	((void*)startLabel+810)
#define v1261	((void*)startLabel+815)
#define v1262	((void*)startLabel+820)
#define v1263	((void*)startLabel+825)
#define v1234	((void*)startLabel+830)
#define CT_v1265	((void*)startLabel+844)
#define FN_LAMBDA1180	((void*)startLabel+896)
#define CT_v1267	((void*)startLabel+916)
#define CF_LAMBDA1180	((void*)startLabel+924)
#define FN_LAMBDA1179	((void*)startLabel+936)
#define CT_v1269	((void*)startLabel+956)
#define CF_LAMBDA1179	((void*)startLabel+964)
#define v1271	((void*)startLabel+988)
#define v1272	((void*)startLabel+1002)
#define v1273	((void*)startLabel+1008)
#define CT_v1275	((void*)startLabel+1020)
#define v1277	((void*)startLabel+1064)
#define v1278	((void*)startLabel+1070)
#define v1279	((void*)startLabel+1084)
#define CT_v1281	((void*)startLabel+1096)
#define v1283	((void*)startLabel+1138)
#define v1284	((void*)startLabel+1144)
#define CT_v1286	((void*)startLabel+1184)
#define CT_v1290	((void*)startLabel+1304)
#define CT_v1294	((void*)startLabel+1412)
#define v1296	((void*)startLabel+1460)
#define v1297	((void*)startLabel+1465)
#define v1298	((void*)startLabel+1470)
#define CT_v1300	((void*)startLabel+1480)
#define v1304	((void*)startLabel+1542)
#define v1305	((void*)startLabel+1556)
#define v1306	((void*)startLabel+1561)
#define v1307	((void*)startLabel+1627)
#define v1308	((void*)startLabel+1632)
#define v1309	((void*)startLabel+1637)
#define v1310	((void*)startLabel+1642)
#define v1311	((void*)startLabel+1647)
#define v1312	((void*)startLabel+1656)
#define v1313	((void*)startLabel+1661)
#define v1314	((void*)startLabel+1666)
#define v1315	((void*)startLabel+1671)
#define v1329	((void*)startLabel+1684)
#define v1319	((void*)startLabel+1688)
#define v1316	((void*)startLabel+1709)
#define v1322	((void*)startLabel+1714)
#define v1323	((void*)startLabel+1721)
#define v1324	((void*)startLabel+1726)
#define v1325	((void*)startLabel+1731)
#define v1326	((void*)startLabel+1736)
#define v1327	((void*)startLabel+1741)
#define v1301	((void*)startLabel+1746)
#define CT_v1331	((void*)startLabel+1768)
#define FN_LAMBDA1181	((void*)startLabel+1840)
#define CT_v1333	((void*)startLabel+1860)
#define CF_LAMBDA1181	((void*)startLabel+1868)
#define v1335	((void*)startLabel+1890)
#define v1336	((void*)startLabel+1896)
#define CT_v1338	((void*)startLabel+1908)
#define v1340	((void*)startLabel+1950)
#define v1341	((void*)startLabel+1957)
#define CT_v1343	((void*)startLabel+1972)
#define CT_v1344	((void*)startLabel+2028)
#define FN_LAMBDA1182	((void*)startLabel+2056)
#define CT_v1346	((void*)startLabel+2076)
#define CF_LAMBDA1182	((void*)startLabel+2084)
#define CT_v1347	((void*)startLabel+2108)
#define CT_v1348	((void*)startLabel+2148)
#define CT_v1349	((void*)startLabel+2192)
#define CT_v1350	((void*)startLabel+2236)
#define CT_v1351	((void*)startLabel+2280)
#define CT_v1352	((void*)startLabel+2324)
#define CT_v1353	((void*)startLabel+2368)
#define CT_v1354	((void*)startLabel+2412)
#define CT_v1355	((void*)startLabel+2456)
#define CT_v1356	((void*)startLabel+2500)
#define CT_v1357	((void*)startLabel+2544)
#define CT_v1358	((void*)startLabel+2592)
#define CT_v1359	((void*)startLabel+2644)
#define CT_v1360	((void*)startLabel+2688)
#define CT_v1361	((void*)startLabel+2732)
#define CT_v1362	((void*)startLabel+2776)
#define CT_v1363	((void*)startLabel+2820)
#define CT_v1364	((void*)startLabel+2864)
#define CT_v1365	((void*)startLabel+2908)
#define ST_v1345	((void*)startLabel+2924)
#define ST_v1268	((void*)startLabel+2970)
#define ST_v1332	((void*)startLabel+2994)
#define ST_v1266	((void*)startLabel+3054)
extern Node CF_Util_46Extra_46noPos[];
extern Node FN_Prelude_46head[];
extern Node FN_Prelude_46fst[];
extern Node FN_Prelude_46last[];
extern Node FN_Util_46Extra_46mergePos[];
extern Node FN_Prelude_46Ord_46Util_46Extra_46Pos_46min[];
extern Node FN_SyntaxPos_46HasPos_46Prelude_46_91_93_46getPos[];
extern Node CF_SyntaxPos_46HasPos_46Syntax_46Type[];
extern Node FN_SyntaxPos_46getPos[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46error[];
extern Node CF_SyntaxPos_46HasPos_46Syntax_46Field[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_SyntaxPos_46HasPos_46Syntax_46Decls_46getPos[];
extern Node CF_SyntaxPos_46HasPos_46Syntax_46Qual[];
extern Node FN_Prelude_46snd[];
extern Node CF_SyntaxPos_46HasPos_46Syntax_46Exp[];
extern Node FN_Util_46Extra_46mergePoss[];
extern Node CF_SyntaxPos_46HasPos_46Syntax_46Context[];
extern Node CF_SyntaxPos_46HasPos_46Syntax_46Constr[];
extern Node CF_SyntaxPos_46HasPos_46Syntax_46Decl[];
extern Node CF_SyntaxPos_46HasPos_46Syntax_46DeclsDepend[];
extern Node FN_NHC_46Internal_46_95noMethodError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v1194)
,	/* FN_SyntaxPos_46getPosList: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v1193: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v1192: (byte 2) */
  bytes2word(6,0,POP_I1,PUSH_CVAL_P1)
,	/* v1189: (byte 2) */
  bytes2word(3,RETURN_EVAL,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1194: (byte 0) */
  HW(5,1)
, 0
,	/* F0_SyntaxPos_46getPosList: (byte 0) */
  CAPTAG(useLabel(FN_SyntaxPos_46getPosList),1)
, useLabel(CF_Util_46Extra_46noPos)
, VAPTAG(useLabel(FN_Prelude_46head))
, VAPTAG(useLabel(FN_Prelude_46fst))
, VAPTAG(useLabel(FN_Prelude_46last))
, VAPTAG(useLabel(FN_Util_46Extra_46mergePos))
, bytes2word(1,0,0,1)
, useLabel(CT_v1199)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Constr_46getPos[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v1196: (byte 2) */
  bytes2word(TOP(9),BOT(9),UNPACK,3)
,	/* v1197: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,UNPACK)
, bytes2word(5,PUSH_P1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1199: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Syntax_46Constr_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Constr_46getPos),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1204)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Field_46getPos[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v1201: (byte 2) */
  bytes2word(TOP(9),BOT(9),UNPACK,3)
,	/* v1202: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1204: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Syntax_46Field_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Field_46getPos),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1209)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46FixId_46getPos[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v1206: (byte 2) */
  bytes2word(TOP(9),BOT(9),UNPACK,2)
,	/* v1207: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1209: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Syntax_46FixId_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46FixId_46getPos),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1210)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Context_46getPos[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1210: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Syntax_46Context_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Context_46getPos),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1222)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Type_46getPos[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(8),BOT(8))
, bytes2word(TOP(58),BOT(58),TOP(73),BOT(73))
,	/* v1212: (byte 2) */
  bytes2word(TOP(78),BOT(78),UNPACK,3)
, bytes2word(PUSH_P1,2,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v1221: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v1216: (byte 4) */
  bytes2word(POP_I1,JUMP,23,0)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_I2,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
,	/* v1213: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_I2,PUSH_HEAP,HEAP_CVAL_P1,7)
,	/* v1217: (byte 4) */
  bytes2word(HEAP_I1,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I3,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,5)
,	/* v1218: (byte 3) */
  bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,UNPACK)
,	/* v1219: (byte 4) */
  bytes2word(2,PUSH_P1,0,RETURN_EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1222: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Syntax_46Type_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Type_46getPos),1)
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Type_46getPos))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Util_46Extra_46Pos_46min))
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Prelude_46_91_93_46getPos))
, useLabel(CF_SyntaxPos_46HasPos_46Syntax_46Type)
, VAPTAG(useLabel(FN_Util_46Extra_46mergePos))
, bytes2word(1,0,0,1)
, useLabel(CT_v1223)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Simple_46getPos[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1223: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Syntax_46Simple_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Simple_46getPos),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1227)
,};
Node FN_SyntaxPos_46HasPos_46Prelude_462_46getPos[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1227: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Prelude_462_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Prelude_462_46getPos),3)
, VAPTAG(useLabel(FN_SyntaxPos_46getPos))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Util_46Extra_46mergePos))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1233)
,};
Node FN_SyntaxPos_46HasPos_46Prelude_46_91_93_46getPos[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v1232: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v1231: (byte 2) */
  bytes2word(6,0,POP_I1,PUSH_CVAL_P1)
,	/* v1228: (byte 2) */
  bytes2word(3,RETURN_EVAL,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,7,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1233: (byte 0) */
  HW(6,2)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Prelude_46_91_93_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Prelude_46_91_93_46getPos),2)
, useLabel(CF_Util_46Extra_46noPos)
, VAPTAG(useLabel(FN_SyntaxPos_46getPos))
, VAPTAG(useLabel(FN_Prelude_46head))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46last))
, VAPTAG(useLabel(FN_Util_46Extra_46mergePos))
, bytes2word(1,0,0,1)
, useLabel(CT_v1265)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Exp_46getPos[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,28,TOP(60),BOT(60))
, bytes2word(TOP(66),BOT(66),TOP(72),BOT(72))
, bytes2word(TOP(77),BOT(77),TOP(82),BOT(82))
, bytes2word(TOP(87),BOT(87),TOP(56),BOT(56))
, bytes2word(TOP(92),BOT(92),TOP(99),BOT(99))
, bytes2word(TOP(104),BOT(104),TOP(109),BOT(109))
, bytes2word(TOP(114),BOT(114),TOP(119),BOT(119))
, bytes2word(TOP(137),BOT(137),TOP(142),BOT(142))
, bytes2word(TOP(147),BOT(147),TOP(152),BOT(152))
, bytes2word(TOP(157),BOT(157),TOP(162),BOT(162))
, bytes2word(TOP(167),BOT(167),TOP(172),BOT(172))
, bytes2word(TOP(177),BOT(177),TOP(182),BOT(182))
, bytes2word(TOP(187),BOT(187),TOP(192),BOT(192))
, bytes2word(TOP(197),BOT(197),TOP(202),BOT(202))
,	/* v1264: (byte 2) */
  bytes2word(TOP(207),BOT(207),POP_I1,JUMP)
,	/* v1237: (byte 2) */
  bytes2word(154,0,UNPACK,2)
,	/* v1238: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_I2,RETURN_EVAL)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_I3)
,	/* v1239: (byte 2) */
  bytes2word(HEAP_I1,RETURN_EVAL,UNPACK,3)
,	/* v1240: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,UNPACK)
,	/* v1241: (byte 4) */
  bytes2word(3,PUSH_P1,0,RETURN_EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
,	/* v1242: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,3,PUSH_P1)
,	/* v1243: (byte 2) */
  bytes2word(0,RETURN_EVAL,POP_I1,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,2)
,	/* v1244: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,4,PUSH_P1)
,	/* v1245: (byte 2) */
  bytes2word(0,RETURN_EVAL,UNPACK,4)
,	/* v1246: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,UNPACK)
,	/* v1247: (byte 4) */
  bytes2word(3,PUSH_P1,0,RETURN_EVAL)
, bytes2word(UNPACK,4,PUSH_P1,0)
,	/* v1248: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,6)
,	/* v1249: (byte 3) */
  bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,UNPACK)
,	/* v1250: (byte 4) */
  bytes2word(2,PUSH_P1,0,RETURN_EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
,	/* v1251: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_P1)
,	/* v1252: (byte 2) */
  bytes2word(0,RETURN_EVAL,UNPACK,2)
,	/* v1253: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,UNPACK)
,	/* v1254: (byte 4) */
  bytes2word(2,PUSH_P1,0,RETURN_EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
,	/* v1255: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_P1)
,	/* v1256: (byte 2) */
  bytes2word(0,RETURN_EVAL,UNPACK,2)
,	/* v1257: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,UNPACK)
,	/* v1258: (byte 4) */
  bytes2word(2,PUSH_P1,0,RETURN_EVAL)
, bytes2word(UNPACK,3,PUSH_P1,0)
,	/* v1259: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,3,PUSH_P1)
,	/* v1260: (byte 2) */
  bytes2word(0,RETURN_EVAL,UNPACK,1)
,	/* v1261: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,UNPACK)
,	/* v1262: (byte 4) */
  bytes2word(2,PUSH_P1,0,RETURN_EVAL)
, bytes2word(UNPACK,6,PUSH_P1,0)
,	/* v1263: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_P1)
,	/* v1234: (byte 2) */
  bytes2word(0,RETURN_EVAL,HEAP_CVAL_P1,9)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1265: (byte 0) */
  HW(8,1)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Syntax_46Exp_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Exp_46getPos),1)
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Exp_46getPos))
, VAPTAG(useLabel(FN_LAMBDA1179))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Prelude_46_91_93_46getPos))
, useLabel(CF_SyntaxPos_46HasPos_46Syntax_46Field)
, VAPTAG(useLabel(FN_Util_46Extra_46mergePos))
, VAPTAG(useLabel(FN_LAMBDA1180))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v1267)
,	/* FN_LAMBDA1180: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1266)
,	/* CT_v1267: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1180: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1180))
, bytes2word(0,0,0,0)
, useLabel(CT_v1269)
,	/* FN_LAMBDA1179: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1268)
,	/* CT_v1269: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1179: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1179))
, bytes2word(1,0,0,1)
, useLabel(CT_v1275)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Qual_46getPos[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v1271: (byte 4) */
  bytes2word(TOP(20),BOT(20),TOP(26),BOT(26))
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I3,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
,	/* v1272: (byte 2) */
  bytes2word(4,RETURN_EVAL,UNPACK,1)
,	/* v1273: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_I1,RETURN_EVAL)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_I1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1275: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Syntax_46Qual_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Qual_46getPos),1)
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Exp_46getPos))
, VAPTAG(useLabel(FN_Util_46Extra_46mergePos))
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Decls_46getPos))
, bytes2word(1,0,0,1)
, useLabel(CT_v1281)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Stmt_46getPos[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v1277: (byte 4) */
  bytes2word(TOP(12),BOT(12),TOP(26),BOT(26))
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_I3)
,	/* v1278: (byte 2) */
  bytes2word(HEAP_I1,RETURN_EVAL,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_P1,0,HEAP_CVAL_I3)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
,	/* v1279: (byte 4) */
  bytes2word(5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_I1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1281: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Syntax_46Stmt_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Stmt_46getPos),1)
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Exp_46getPos))
, VAPTAG(useLabel(FN_Util_46Extra_46mergePos))
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Decls_46getPos))
, bytes2word(1,0,0,1)
, useLabel(CT_v1286)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Rhs_46getPos[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1283: (byte 2) */
  bytes2word(TOP(10),BOT(10),UNPACK,1)
,	/* v1284: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_I1,RETURN_EVAL)
, bytes2word(UNPACK,1,HEAP_CVAL_I4,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,8)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1286: (byte 0) */
  HW(8,1)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Syntax_46Rhs_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Rhs_46getPos),1)
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Exp_46getPos))
, VAPTAG(useLabel(FN_Prelude_46head))
, VAPTAG(useLabel(FN_Prelude_46fst))
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Prelude_46_91_93_46getPos))
, useLabel(CF_SyntaxPos_46HasPos_46Syntax_46Qual)
, VAPTAG(useLabel(FN_Prelude_46last))
, VAPTAG(useLabel(FN_Prelude_46snd))
, VAPTAG(useLabel(FN_Util_46Extra_46mergePos))
, bytes2word(1,0,0,1)
, useLabel(CT_v1290)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Fun_46getPos[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,3,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I5,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,6,HEAP_I2,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,3,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,15,HEAP_OFF_N1,5)
, bytes2word(PUSH_P1,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,ZAP_STACK_P1,5,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v1290: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Syntax_46Fun_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Fun_46getPos),1)
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Prelude_46_91_93_46getPos))
, useLabel(CF_SyntaxPos_46HasPos_46Syntax_46Exp)
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Rhs_46getPos))
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Decls_46getPos))
, VAPTAG(useLabel(FN_Util_46Extra_46mergePoss))
, bytes2word(1,0,0,1)
, useLabel(CT_v1294)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Alt_46getPos[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,3,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_I1,HEAP_CVAL_I5)
, bytes2word(HEAP_I2,HEAP_CVAL_N1,1,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,14)
, bytes2word(HEAP_OFF_N1,5,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,ZAP_STACK_P1)
, bytes2word(5,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,ZAP_STACK_P1,2,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v1294: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Syntax_46Alt_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Alt_46getPos),1)
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Exp_46getPos))
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Rhs_46getPos))
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Decls_46getPos))
, VAPTAG(useLabel(FN_Util_46Extra_46mergePoss))
, bytes2word(1,0,0,1)
, useLabel(CT_v1300)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Entity_46getPos[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1296: (byte 4) */
  bytes2word(TOP(11),BOT(11),TOP(16),BOT(16))
, bytes2word(UNPACK,2,PUSH_P1,0)
,	/* v1297: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_P1)
,	/* v1298: (byte 2) */
  bytes2word(0,RETURN_EVAL,UNPACK,3)
, bytes2word(PUSH_P1,0,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1300: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Syntax_46Entity_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Entity_46getPos),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1331)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Decl_46getPos[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,18,TOP(36),BOT(36))
, bytes2word(TOP(50),BOT(50),TOP(55),BOT(55))
, bytes2word(TOP(121),BOT(121),TOP(126),BOT(126))
, bytes2word(TOP(131),BOT(131),TOP(136),BOT(136))
, bytes2word(TOP(141),BOT(141),TOP(150),BOT(150))
, bytes2word(TOP(155),BOT(155),TOP(160),BOT(160))
, bytes2word(TOP(165),BOT(165),TOP(208),BOT(208))
, bytes2word(TOP(215),BOT(215),TOP(220),BOT(220))
, bytes2word(TOP(225),BOT(225),TOP(230),BOT(230))
,	/* v1304: (byte 2) */
  bytes2word(TOP(235),BOT(235),UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_P1,0,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
,	/* v1305: (byte 4) */
  bytes2word(5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
,	/* v1306: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_I1)
, bytes2word(HEAP_CVAL_I3,HEAP_I2,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,8,HEAP_P1,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_P1,4)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,15,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(21,HEAP_OFF_N1,5,PUSH_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(ZAP_STACK_P1,6,ZAP_STACK_P1,5)
, bytes2word(ZAP_STACK_P1,4,ZAP_STACK_P1,3)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
,	/* v1307: (byte 3) */
  bytes2word(APPLY,1,RETURN_EVAL,UNPACK)
,	/* v1308: (byte 4) */
  bytes2word(3,PUSH_P1,0,RETURN_EVAL)
, bytes2word(UNPACK,3,PUSH_P1,0)
,	/* v1309: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,6,PUSH_P1)
,	/* v1310: (byte 2) */
  bytes2word(0,RETURN_EVAL,UNPACK,5)
,	/* v1311: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,UNPACK)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
,	/* v1312: (byte 4) */
  bytes2word(HEAP_CVAL_P1,11,HEAP_I1,RETURN_EVAL)
, bytes2word(UNPACK,4,PUSH_P1,0)
,	/* v1313: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,8,PUSH_P1)
,	/* v1314: (byte 2) */
  bytes2word(0,RETURN_EVAL,UNPACK,5)
,	/* v1315: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,UNPACK)
, bytes2word(3,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v1329: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v1319: (byte 4) */
  bytes2word(POP_I1,JUMP,23,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(ZAP_STACK_P1,2,ZAP_STACK_P1,1)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,2)
, bytes2word(HEAP_CVAL_I4,HEAP_P1,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_I1,HEAP_OFF_N1,4)
,	/* v1316: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,3,JUMP)
,	/* v1322: (byte 2) */
  bytes2word(34,0,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_I1)
,	/* v1323: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,3,PUSH_P1)
,	/* v1324: (byte 2) */
  bytes2word(0,RETURN_EVAL,UNPACK,1)
,	/* v1325: (byte 3) */
  bytes2word(PUSH_CVAL_P1,13,RETURN_EVAL,UNPACK)
,	/* v1326: (byte 4) */
  bytes2word(1,PUSH_CVAL_P1,13,RETURN_EVAL)
, bytes2word(UNPACK,2,PUSH_CVAL_P1,13)
,	/* v1327: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,1,PUSH_CVAL_P1)
,	/* v1301: (byte 2) */
  bytes2word(13,RETURN_EVAL,HEAP_CVAL_P1,14)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,15,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v1331: (byte 0) */
  HW(13,1)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Syntax_46Decl_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Decl_46getPos),1)
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Simple_46getPos))
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Type_46getPos))
, VAPTAG(useLabel(FN_Util_46Extra_46mergePos))
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Prelude_46_91_93_46getPos))
, useLabel(CF_SyntaxPos_46HasPos_46Syntax_46Context)
, useLabel(CF_SyntaxPos_46HasPos_46Syntax_46Constr)
, VAPTAG(useLabel(FN_SyntaxPos_46getPosList))
, VAPTAG(useLabel(FN_Util_46Extra_46mergePoss))
, useLabel(CF_SyntaxPos_46HasPos_46Syntax_46Type)
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Alt_46getPos))
, useLabel(CF_Util_46Extra_46noPos)
, VAPTAG(useLabel(FN_LAMBDA1181))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v1333)
,	/* FN_LAMBDA1181: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1332)
,	/* CT_v1333: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1181: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1181))
, bytes2word(1,0,0,1)
, useLabel(CT_v1338)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46DeclsDepend_46getPos[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1335: (byte 2) */
  bytes2word(TOP(10),BOT(10),UNPACK,1)
,	/* v1336: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_I1,RETURN_EVAL)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1338: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Syntax_46DeclsDepend_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46DeclsDepend_46getPos),1)
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Decl_46getPos))
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Prelude_46_91_93_46getPos))
, useLabel(CF_SyntaxPos_46HasPos_46Syntax_46Decl)
, bytes2word(1,0,0,1)
, useLabel(CT_v1343)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Decls_46getPos[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1340: (byte 2) */
  bytes2word(TOP(11),BOT(11),UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_I1)
,	/* v1341: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I5,HEAP_I1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1343: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Syntax_46Decls_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Decls_46getPos),1)
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Prelude_46_91_93_46getPos))
, useLabel(CF_SyntaxPos_46HasPos_46Syntax_46Decl)
, useLabel(CF_SyntaxPos_46HasPos_46Syntax_46DeclsDepend)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1344)
,};
Node FN_SyntaxPos_46_95_46getPos[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1344: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_SyntaxPos_46_95_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46_95_46getPos),2)
, VAPTAG(useLabel(FN_LAMBDA1182))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v1346)
,	/* FN_LAMBDA1182: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1345)
,	/* CT_v1346: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1182: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1182))
, bytes2word(1,0,0,1)
, useLabel(CT_v1347)
,};
Node FN_SyntaxPos_46getPos[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1347: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_SyntaxPos_46getPos[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46getPos),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1348)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Decls[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1348: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_SyntaxPos_46HasPos_46Syntax_46Decls[] = {
  VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Decls))
, useLabel(F0_SyntaxPos_46HasPos_46Syntax_46Decls_46getPos)
, bytes2word(0,0,0,0)
, useLabel(CT_v1349)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46DeclsDepend[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1349: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_SyntaxPos_46HasPos_46Syntax_46DeclsDepend[] = {
  VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46DeclsDepend))
, useLabel(F0_SyntaxPos_46HasPos_46Syntax_46DeclsDepend_46getPos)
, bytes2word(0,0,0,0)
, useLabel(CT_v1350)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Decl[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1350: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_SyntaxPos_46HasPos_46Syntax_46Decl[] = {
  VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Decl))
, useLabel(F0_SyntaxPos_46HasPos_46Syntax_46Decl_46getPos)
, bytes2word(0,0,0,0)
, useLabel(CT_v1351)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Entity[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1351: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_SyntaxPos_46HasPos_46Syntax_46Entity[] = {
  VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Entity))
, useLabel(F0_SyntaxPos_46HasPos_46Syntax_46Entity_46getPos)
, bytes2word(0,0,0,0)
, useLabel(CT_v1352)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Alt[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1352: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_SyntaxPos_46HasPos_46Syntax_46Alt[] = {
  VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Alt))
, useLabel(F0_SyntaxPos_46HasPos_46Syntax_46Alt_46getPos)
, bytes2word(0,0,0,0)
, useLabel(CT_v1353)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Fun[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1353: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_SyntaxPos_46HasPos_46Syntax_46Fun[] = {
  VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Fun))
, useLabel(F0_SyntaxPos_46HasPos_46Syntax_46Fun_46getPos)
, bytes2word(0,0,0,0)
, useLabel(CT_v1354)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Rhs[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1354: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_SyntaxPos_46HasPos_46Syntax_46Rhs[] = {
  VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Rhs))
, useLabel(F0_SyntaxPos_46HasPos_46Syntax_46Rhs_46getPos)
, bytes2word(0,0,0,0)
, useLabel(CT_v1355)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Stmt[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1355: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_SyntaxPos_46HasPos_46Syntax_46Stmt[] = {
  VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Stmt))
, useLabel(F0_SyntaxPos_46HasPos_46Syntax_46Stmt_46getPos)
, bytes2word(0,0,0,0)
, useLabel(CT_v1356)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Qual[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1356: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_SyntaxPos_46HasPos_46Syntax_46Qual[] = {
  VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Qual))
, useLabel(F0_SyntaxPos_46HasPos_46Syntax_46Qual_46getPos)
, bytes2word(0,0,0,0)
, useLabel(CT_v1357)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Exp[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1357: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_SyntaxPos_46HasPos_46Syntax_46Exp[] = {
  VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Exp))
, useLabel(F0_SyntaxPos_46HasPos_46Syntax_46Exp_46getPos)
, bytes2word(1,0,0,1)
, useLabel(CT_v1358)
,};
Node FN_SyntaxPos_46HasPos_46Prelude_46_91_93[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1358: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Prelude_46_91_93[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Prelude_46_91_93),1)
, CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Prelude_46_91_93_46getPos),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1359)
,};
Node FN_SyntaxPos_46HasPos_46Prelude_462[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1359: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_SyntaxPos_46HasPos_46Prelude_462[] = {
  CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Prelude_462),2)
, CAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Prelude_462_46getPos),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1360)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Simple[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1360: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_SyntaxPos_46HasPos_46Syntax_46Simple[] = {
  VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Simple))
, useLabel(F0_SyntaxPos_46HasPos_46Syntax_46Simple_46getPos)
, bytes2word(0,0,0,0)
, useLabel(CT_v1361)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Type[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1361: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_SyntaxPos_46HasPos_46Syntax_46Type[] = {
  VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Type))
, useLabel(F0_SyntaxPos_46HasPos_46Syntax_46Type_46getPos)
, bytes2word(0,0,0,0)
, useLabel(CT_v1362)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Context[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1362: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_SyntaxPos_46HasPos_46Syntax_46Context[] = {
  VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Context))
, useLabel(F0_SyntaxPos_46HasPos_46Syntax_46Context_46getPos)
, bytes2word(0,0,0,0)
, useLabel(CT_v1363)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46FixId[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1363: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_SyntaxPos_46HasPos_46Syntax_46FixId[] = {
  VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46FixId))
, useLabel(F0_SyntaxPos_46HasPos_46Syntax_46FixId_46getPos)
, bytes2word(0,0,0,0)
, useLabel(CT_v1364)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Field[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1364: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_SyntaxPos_46HasPos_46Syntax_46Field[] = {
  VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Field))
, useLabel(F0_SyntaxPos_46HasPos_46Syntax_46Field_46getPos)
, bytes2word(0,0,0,0)
, useLabel(CT_v1365)
,};
Node FN_SyntaxPos_46HasPos_46Syntax_46Constr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1365: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_SyntaxPos_46HasPos_46Syntax_46Constr[] = {
  VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Syntax_46Constr))
, useLabel(F0_SyntaxPos_46HasPos_46Syntax_46Constr_46getPos)
,	/* ST_v1345: (byte 0) */
  bytes2word(78,111,32,100)
, bytes2word(101,102,97,117)
, bytes2word(108,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(105,116,105,111)
, bytes2word(110,32,102,111)
, bytes2word(114,32,99,108)
, bytes2word(97,115,115,32)
, bytes2word(109,101,116,104)
, bytes2word(111,100,32,103)
, bytes2word(101,116,80,111)
,	/* ST_v1268: (byte 2) */
  bytes2word(115,0,78,111)
, bytes2word(32,112,111,115)
, bytes2word(105,116,105,111)
, bytes2word(110,32,102,111)
, bytes2word(114,32,69,120)
, bytes2word(112,70,97,105)
,	/* ST_v1332: (byte 2) */
  bytes2word(108,0,83,121)
, bytes2word(110,116,97,120)
, bytes2word(80,111,115,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,49,56)
, bytes2word(58,51,45,51)
, bytes2word(54,58,52,53)
,	/* ST_v1266: (byte 2) */
  bytes2word(46,0,83,121)
, bytes2word(110,116,97,120)
, bytes2word(80,111,115,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,54,55)
, bytes2word(58,51,45,57)
, bytes2word(51,58,52,49)
, bytes2word(46,0,0,0)
,};
