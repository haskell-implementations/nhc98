#include "newmacros.h"
#include "runtime.h"

#define FN_HandParse_46name	((void*)startLabel+8)
#define CT_v1359	((void*)startLabel+20)
#define CF_HandParse_46name	((void*)startLabel+28)
#define FN_LAMBDA1259	((void*)startLabel+44)
#define v1372	((void*)startLabel+54)
#define v1363	((void*)startLabel+58)
#define v1374	((void*)startLabel+132)
#define v1371	((void*)startLabel+136)
#define v1368	((void*)startLabel+153)
#define v1364	((void*)startLabel+158)
#define v1360	((void*)startLabel+163)
#define CT_v1375	((void*)startLabel+188)
#define F0_LAMBDA1259	((void*)startLabel+196)
#define FN_HandParse_46disname	((void*)startLabel+208)
#define CT_v1376	((void*)startLabel+220)
#define CF_HandParse_46disname	((void*)startLabel+228)
#define FN_LAMBDA1260	((void*)startLabel+244)
#define v1389	((void*)startLabel+254)
#define v1380	((void*)startLabel+258)
#define v1391	((void*)startLabel+332)
#define v1388	((void*)startLabel+336)
#define v1385	((void*)startLabel+353)
#define v1381	((void*)startLabel+358)
#define v1377	((void*)startLabel+363)
#define CT_v1392	((void*)startLabel+388)
#define F0_LAMBDA1260	((void*)startLabel+396)
#define FN_HandParse_46nName	((void*)startLabel+408)
#define CT_v1393	((void*)startLabel+420)
#define CF_HandParse_46nName	((void*)startLabel+428)
#define FN_HandParse_46baseTy	((void*)startLabel+452)
#define CT_v1394	((void*)startLabel+464)
#define CF_HandParse_46baseTy	((void*)startLabel+472)
#define FN_LAMBDA1261	((void*)startLabel+488)
#define v1407	((void*)startLabel+498)
#define v1398	((void*)startLabel+502)
#define v1409	((void*)startLabel+576)
#define v1406	((void*)startLabel+580)
#define v1403	((void*)startLabel+597)
#define v1399	((void*)startLabel+602)
#define v1395	((void*)startLabel+607)
#define CT_v1410	((void*)startLabel+632)
#define F0_LAMBDA1261	((void*)startLabel+640)
#define FN_HandParse_46cexp	((void*)startLabel+652)
#define CT_v1411	((void*)startLabel+664)
#define CF_HandParse_46cexp	((void*)startLabel+672)
#define FN_LAMBDA1262	((void*)startLabel+688)
#define v1424	((void*)startLabel+698)
#define v1415	((void*)startLabel+702)
#define v1426	((void*)startLabel+776)
#define v1423	((void*)startLabel+780)
#define v1420	((void*)startLabel+797)
#define v1416	((void*)startLabel+802)
#define v1412	((void*)startLabel+807)
#define CT_v1427	((void*)startLabel+832)
#define F0_LAMBDA1262	((void*)startLabel+840)
#define FN_HandParse_46dis	((void*)startLabel+852)
#define CT_v1428	((void*)startLabel+1076)
#define CF_HandParse_46dis	((void*)startLabel+1084)
#define FN_LAMBDA1301	((void*)startLabel+1188)
#define CT_v1429	((void*)startLabel+1212)
#define F0_LAMBDA1301	((void*)startLabel+1220)
#define FN_LAMBDA1300	((void*)startLabel+1256)
#define CT_v1430	((void*)startLabel+1308)
#define F0_LAMBDA1300	((void*)startLabel+1316)
#define FN_LAMBDA1299	((void*)startLabel+1364)
#define CT_v1431	((void*)startLabel+1416)
#define F0_LAMBDA1299	((void*)startLabel+1424)
#define FN_LAMBDA1298	((void*)startLabel+1444)
#define CT_v1433	((void*)startLabel+1464)
#define CF_LAMBDA1298	((void*)startLabel+1472)
#define FN_LAMBDA1297	((void*)startLabel+1484)
#define CT_v1435	((void*)startLabel+1504)
#define CF_LAMBDA1297	((void*)startLabel+1512)
#define FN_LAMBDA1296	((void*)startLabel+1524)
#define CT_v1437	((void*)startLabel+1544)
#define CF_LAMBDA1296	((void*)startLabel+1552)
#define FN_LAMBDA1295	((void*)startLabel+1564)
#define CT_v1439	((void*)startLabel+1584)
#define CF_LAMBDA1295	((void*)startLabel+1592)
#define FN_LAMBDA1294	((void*)startLabel+1604)
#define CT_v1440	((void*)startLabel+1628)
#define F0_LAMBDA1294	((void*)startLabel+1636)
#define FN_LAMBDA1293	((void*)startLabel+1652)
#define CT_v1441	((void*)startLabel+1696)
#define F0_LAMBDA1293	((void*)startLabel+1704)
#define FN_LAMBDA1292	((void*)startLabel+1740)
#define CT_v1442	((void*)startLabel+1788)
#define F0_LAMBDA1292	((void*)startLabel+1796)
#define FN_LAMBDA1291	((void*)startLabel+1828)
#define CT_v1443	((void*)startLabel+1840)
#define F0_LAMBDA1291	((void*)startLabel+1848)
#define FN_LAMBDA1290	((void*)startLabel+1860)
#define CT_v1444	((void*)startLabel+1872)
#define F0_LAMBDA1290	((void*)startLabel+1880)
#define FN_LAMBDA1289	((void*)startLabel+1892)
#define v1505	((void*)startLabel+1902)
#define v1448	((void*)startLabel+1906)
#define v1506	((void*)startLabel+1920)
#define v1452	((void*)startLabel+1924)
#define v1507	((void*)startLabel+1934)
#define v1456	((void*)startLabel+1938)
#define v1508	((void*)startLabel+1952)
#define v1460	((void*)startLabel+1956)
#define v1509	((void*)startLabel+1966)
#define v1464	((void*)startLabel+1970)
#define v1510	((void*)startLabel+1984)
#define v1468	((void*)startLabel+1988)
#define v1511	((void*)startLabel+1998)
#define v1472	((void*)startLabel+2002)
#define v1512	((void*)startLabel+2016)
#define v1476	((void*)startLabel+2020)
#define v1513	((void*)startLabel+2030)
#define v1480	((void*)startLabel+2034)
#define v1514	((void*)startLabel+2048)
#define v1484	((void*)startLabel+2052)
#define v1515	((void*)startLabel+2062)
#define v1488	((void*)startLabel+2066)
#define v1516	((void*)startLabel+2080)
#define v1492	((void*)startLabel+2084)
#define v1517	((void*)startLabel+2094)
#define v1496	((void*)startLabel+2098)
#define v1518	((void*)startLabel+2112)
#define v1500	((void*)startLabel+2116)
#define v1519	((void*)startLabel+2126)
#define v1504	((void*)startLabel+2130)
#define v1497	((void*)startLabel+2152)
#define v1489	((void*)startLabel+2157)
#define v1481	((void*)startLabel+2162)
#define v1473	((void*)startLabel+2167)
#define v1465	((void*)startLabel+2172)
#define v1457	((void*)startLabel+2177)
#define v1449	((void*)startLabel+2182)
#define v1445	((void*)startLabel+2187)
#define CT_v1520	((void*)startLabel+2212)
#define F0_LAMBDA1289	((void*)startLabel+2220)
#define FN_LAMBDA1288	((void*)startLabel+2276)
#define CT_v1521	((void*)startLabel+2324)
#define F0_LAMBDA1288	((void*)startLabel+2332)
#define FN_LAMBDA1287	((void*)startLabel+2356)
#define CT_v1523	((void*)startLabel+2376)
#define CF_LAMBDA1287	((void*)startLabel+2384)
#define FN_LAMBDA1286	((void*)startLabel+2396)
#define CT_v1524	((void*)startLabel+2420)
#define F0_LAMBDA1286	((void*)startLabel+2428)
#define FN_LAMBDA1285	((void*)startLabel+2464)
#define CT_v1525	((void*)startLabel+2512)
#define F0_LAMBDA1285	((void*)startLabel+2520)
#define FN_LAMBDA1284	((void*)startLabel+2540)
#define CT_v1527	((void*)startLabel+2560)
#define CF_LAMBDA1284	((void*)startLabel+2568)
#define FN_LAMBDA1283	((void*)startLabel+2580)
#define CT_v1529	((void*)startLabel+2600)
#define CF_LAMBDA1283	((void*)startLabel+2608)
#define FN_LAMBDA1282	((void*)startLabel+2620)
#define CT_v1530	((void*)startLabel+2672)
#define F0_LAMBDA1282	((void*)startLabel+2680)
#define FN_LAMBDA1281	((void*)startLabel+2728)
#define CT_v1531	((void*)startLabel+2784)
#define F0_LAMBDA1281	((void*)startLabel+2792)
#define FN_LAMBDA1280	((void*)startLabel+2844)
#define CT_v1532	((void*)startLabel+2880)
#define F0_LAMBDA1280	((void*)startLabel+2888)
#define FN_LAMBDA1279	((void*)startLabel+2908)
#define CT_v1534	((void*)startLabel+2928)
#define CF_LAMBDA1279	((void*)startLabel+2936)
#define FN_LAMBDA1278	((void*)startLabel+2948)
#define CT_v1536	((void*)startLabel+2968)
#define CF_LAMBDA1278	((void*)startLabel+2976)
#define FN_LAMBDA1277	((void*)startLabel+2988)
#define CT_v1538	((void*)startLabel+3008)
#define CF_LAMBDA1277	((void*)startLabel+3016)
#define FN_LAMBDA1276	((void*)startLabel+3028)
#define CT_v1540	((void*)startLabel+3048)
#define CF_LAMBDA1276	((void*)startLabel+3056)
#define FN_LAMBDA1275	((void*)startLabel+3068)
#define CT_v1541	((void*)startLabel+3088)
#define CF_LAMBDA1275	((void*)startLabel+3096)
#define FN_LAMBDA1274	((void*)startLabel+3108)
#define CT_v1542	((void*)startLabel+3160)
#define F0_LAMBDA1274	((void*)startLabel+3168)
#define FN_LAMBDA1273	((void*)startLabel+3216)
#define CT_v1543	((void*)startLabel+3272)
#define F0_LAMBDA1273	((void*)startLabel+3280)
#define FN_LAMBDA1272	((void*)startLabel+3332)
#define CT_v1544	((void*)startLabel+3368)
#define F0_LAMBDA1272	((void*)startLabel+3376)
#define FN_LAMBDA1271	((void*)startLabel+3396)
#define CT_v1546	((void*)startLabel+3416)
#define CF_LAMBDA1271	((void*)startLabel+3424)
#define FN_LAMBDA1270	((void*)startLabel+3436)
#define CT_v1548	((void*)startLabel+3456)
#define CF_LAMBDA1270	((void*)startLabel+3464)
#define FN_LAMBDA1269	((void*)startLabel+3476)
#define CT_v1550	((void*)startLabel+3496)
#define CF_LAMBDA1269	((void*)startLabel+3504)
#define FN_LAMBDA1268	((void*)startLabel+3516)
#define CT_v1552	((void*)startLabel+3536)
#define CF_LAMBDA1268	((void*)startLabel+3544)
#define FN_LAMBDA1267	((void*)startLabel+3556)
#define CT_v1553	((void*)startLabel+3576)
#define CF_LAMBDA1267	((void*)startLabel+3584)
#define FN_LAMBDA1266	((void*)startLabel+3596)
#define CT_v1554	((void*)startLabel+3616)
#define F0_LAMBDA1266	((void*)startLabel+3624)
#define FN_LAMBDA1265	((void*)startLabel+3656)
#define CT_v1555	((void*)startLabel+3684)
#define F0_LAMBDA1265	((void*)startLabel+3692)
#define FN_LAMBDA1264	((void*)startLabel+3712)
#define CT_v1556	((void*)startLabel+3732)
#define F0_LAMBDA1264	((void*)startLabel+3740)
#define FN_LAMBDA1263	((void*)startLabel+3772)
#define CT_v1557	((void*)startLabel+3800)
#define F0_LAMBDA1263	((void*)startLabel+3808)
#define FN_HandParse_46arg	((void*)startLabel+3828)
#define CT_v1558	((void*)startLabel+3912)
#define CF_HandParse_46arg	((void*)startLabel+3920)
#define FN_LAMBDA1304	((void*)startLabel+3980)
#define CT_v1559	((void*)startLabel+4004)
#define F0_LAMBDA1304	((void*)startLabel+4012)
#define FN_LAMBDA1303	((void*)startLabel+4028)
#define CT_v1560	((void*)startLabel+4052)
#define F0_LAMBDA1303	((void*)startLabel+4060)
#define FN_LAMBDA1302	((void*)startLabel+4076)
#define CT_v1561	((void*)startLabel+4100)
#define F0_LAMBDA1302	((void*)startLabel+4108)
#define FN_HandParse_46tuple	((void*)startLabel+4124)
#define CT_v1562	((void*)startLabel+4216)
#define CF_HandParse_46tuple	((void*)startLabel+4224)
#define FN_HandParse_46tuples	((void*)startLabel+4276)
#define CT_v1563	((void*)startLabel+4292)
#define CF_HandParse_46tuples	((void*)startLabel+4300)
#define FN_LAMBDA1306	((void*)startLabel+4324)
#define CT_v1564	((void*)startLabel+4372)
#define F0_LAMBDA1306	((void*)startLabel+4380)
#define FN_LAMBDA1305	((void*)startLabel+4420)
#define CT_v1565	((void*)startLabel+4444)
#define F0_LAMBDA1305	((void*)startLabel+4452)
#define FN_HandParse_46fieldDISs	((void*)startLabel+4468)
#define CT_v1566	((void*)startLabel+4496)
#define CF_HandParse_46fieldDISs	((void*)startLabel+4504)
#define FN_HandParse_46field_95elt	((void*)startLabel+4528)
#define CT_v1567	((void*)startLabel+4544)
#define CF_HandParse_46field_95elt	((void*)startLabel+4552)
#define FN_LAMBDA1308	((void*)startLabel+4576)
#define CT_v1568	((void*)startLabel+4612)
#define F0_LAMBDA1308	((void*)startLabel+4620)
#define FN_LAMBDA1307	((void*)startLabel+4656)
#define CT_v1569	((void*)startLabel+4680)
#define F0_LAMBDA1307	((void*)startLabel+4688)
#define FN_HandParse_46args	((void*)startLabel+4704)
#define CT_v1570	((void*)startLabel+4716)
#define CF_HandParse_46args	((void*)startLabel+4724)
#define FN_HandParse_46mbresult	((void*)startLabel+4744)
#define CT_v1571	((void*)startLabel+4800)
#define CF_HandParse_46mbresult	((void*)startLabel+4808)
#define FN_LAMBDA1310	((void*)startLabel+4856)
#define CT_v1572	((void*)startLabel+4880)
#define F0_LAMBDA1310	((void*)startLabel+4888)
#define FN_LAMBDA1309	((void*)startLabel+4904)
#define CT_v1574	((void*)startLabel+4924)
#define CF_LAMBDA1309	((void*)startLabel+4932)
#define FN_HandParse_46ccode	((void*)startLabel+4944)
#define CT_v1575	((void*)startLabel+4956)
#define CF_HandParse_46ccode	((void*)startLabel+4964)
#define FN_LAMBDA1311	((void*)startLabel+4980)
#define v1588	((void*)startLabel+4990)
#define v1579	((void*)startLabel+4994)
#define v1590	((void*)startLabel+5068)
#define v1587	((void*)startLabel+5072)
#define v1584	((void*)startLabel+5089)
#define v1580	((void*)startLabel+5094)
#define v1576	((void*)startLabel+5099)
#define CT_v1591	((void*)startLabel+5124)
#define F0_LAMBDA1311	((void*)startLabel+5132)
#define FN_HandParse_46cCode	((void*)startLabel+5144)
#define CT_v1592	((void*)startLabel+5168)
#define CF_HandParse_46cCode	((void*)startLabel+5176)
#define FN_HandParse_46fails	((void*)startLabel+5216)
#define CT_v1593	((void*)startLabel+5264)
#define CF_HandParse_46fails	((void*)startLabel+5272)
#define FN_LAMBDA1315	((void*)startLabel+5316)
#define CT_v1594	((void*)startLabel+5340)
#define F0_LAMBDA1315	((void*)startLabel+5348)
#define FN_LAMBDA1314	((void*)startLabel+5384)
#define CT_v1595	((void*)startLabel+5408)
#define F0_LAMBDA1314	((void*)startLabel+5416)
#define FN_LAMBDA1313	((void*)startLabel+5432)
#define CT_v1597	((void*)startLabel+5452)
#define CF_LAMBDA1313	((void*)startLabel+5460)
#define FN_LAMBDA1312	((void*)startLabel+5472)
#define CT_v1599	((void*)startLabel+5492)
#define CF_LAMBDA1312	((void*)startLabel+5500)
#define FN_HandParse_46mbfail	((void*)startLabel+5512)
#define CT_v1600	((void*)startLabel+5552)
#define CF_HandParse_46mbfail	((void*)startLabel+5560)
#define FN_LAMBDA1316	((void*)startLabel+5600)
#define CT_v1601	((void*)startLabel+5620)
#define F0_LAMBDA1316	((void*)startLabel+5628)
#define FN_HandParse_46mbccode	((void*)startLabel+5640)
#define CT_v1602	((void*)startLabel+5680)
#define CF_HandParse_46mbccode	((void*)startLabel+5688)
#define FN_LAMBDA1317	((void*)startLabel+5728)
#define CT_v1603	((void*)startLabel+5748)
#define F0_LAMBDA1317	((void*)startLabel+5756)
#define FN_HandParse_46mbcall	((void*)startLabel+5768)
#define CT_v1604	((void*)startLabel+5824)
#define CF_HandParse_46mbcall	((void*)startLabel+5832)
#define FN_LAMBDA1319	((void*)startLabel+5880)
#define CT_v1605	((void*)startLabel+5904)
#define F0_LAMBDA1319	((void*)startLabel+5912)
#define FN_LAMBDA1318	((void*)startLabel+5928)
#define CT_v1607	((void*)startLabel+5948)
#define CF_LAMBDA1318	((void*)startLabel+5956)
#define FN_HandParse_46tType	((void*)startLabel+5968)
#define CT_v1608	((void*)startLabel+5988)
#define CF_HandParse_46tType	((void*)startLabel+5996)
#define FN_LAMBDA1321	((void*)startLabel+6024)
#define CT_v1609	((void*)startLabel+6060)
#define F0_LAMBDA1321	((void*)startLabel+6068)
#define FN_LAMBDA1320	((void*)startLabel+6104)
#define CT_v1610	((void*)startLabel+6128)
#define F0_LAMBDA1320	((void*)startLabel+6136)
#define FN_HandParse_46simpletype	((void*)startLabel+6152)
#define CT_v1611	((void*)startLabel+6248)
#define CF_HandParse_46simpletype	((void*)startLabel+6256)
#define FN_LAMBDA1324	((void*)startLabel+6312)
#define CT_v1612	((void*)startLabel+6332)
#define F0_LAMBDA1324	((void*)startLabel+6340)
#define FN_LAMBDA1323	((void*)startLabel+6352)
#define CT_v1613	((void*)startLabel+6368)
#define F0_LAMBDA1323	((void*)startLabel+6376)
#define FN_LAMBDA1322	((void*)startLabel+6404)
#define CT_v1614	((void*)startLabel+6432)
#define F0_LAMBDA1322	((void*)startLabel+6440)
#define FN_HandParse_46atypes	((void*)startLabel+6460)
#define CT_v1615	((void*)startLabel+6472)
#define CF_HandParse_46atypes	((void*)startLabel+6480)
#define FN_HandParse_46atype	((void*)startLabel+6500)
#define CT_v1616	((void*)startLabel+6552)
#define CF_HandParse_46atype	((void*)startLabel+6560)
#define FN_LAMBDA1325	((void*)startLabel+6604)
#define CT_v1617	((void*)startLabel+6628)
#define F0_LAMBDA1325	((void*)startLabel+6636)
#define FN_HandParse_46typetuple	((void*)startLabel+6652)
#define CT_v1618	((void*)startLabel+6744)
#define CF_HandParse_46typetuple	((void*)startLabel+6752)
#define FN_LAMBDA1326	((void*)startLabel+6804)
#define CT_v1619	((void*)startLabel+6824)
#define F0_LAMBDA1326	((void*)startLabel+6832)
#define FN_HandParse_46typetuples	((void*)startLabel+6844)
#define CT_v1620	((void*)startLabel+6860)
#define CF_HandParse_46typetuples	((void*)startLabel+6868)
#define FN_LAMBDA1328	((void*)startLabel+6892)
#define CT_v1621	((void*)startLabel+6940)
#define F0_LAMBDA1328	((void*)startLabel+6948)
#define FN_LAMBDA1327	((void*)startLabel+6988)
#define CT_v1622	((void*)startLabel+7012)
#define F0_LAMBDA1327	((void*)startLabel+7020)
#define FN_HandParse_46sig	((void*)startLabel+7036)
#define CT_v1623	((void*)startLabel+7080)
#define CF_HandParse_46sig	((void*)startLabel+7088)
#define FN_LAMBDA1333	((void*)startLabel+7128)
#define CT_v1624	((void*)startLabel+7192)
#define F0_LAMBDA1333	((void*)startLabel+7200)
#define FN_LAMBDA1332	((void*)startLabel+7260)
#define CT_v1625	((void*)startLabel+7284)
#define F0_LAMBDA1332	((void*)startLabel+7292)
#define FN_LAMBDA1331	((void*)startLabel+7308)
#define CT_v1627	((void*)startLabel+7328)
#define CF_LAMBDA1331	((void*)startLabel+7336)
#define FN_LAMBDA1330	((void*)startLabel+7348)
#define CT_v1629	((void*)startLabel+7368)
#define CF_LAMBDA1330	((void*)startLabel+7376)
#define FN_LAMBDA1329	((void*)startLabel+7388)
#define CT_v1631	((void*)startLabel+7408)
#define CF_LAMBDA1329	((void*)startLabel+7416)
#define FN_HandParse_46procspec	((void*)startLabel+7428)
#define CT_v1632	((void*)startLabel+7444)
#define CF_HandParse_46procspec	((void*)startLabel+7452)
#define FN_LAMBDA1338	((void*)startLabel+7476)
#define CT_v1633	((void*)startLabel+7492)
#define F0_LAMBDA1338	((void*)startLabel+7500)
#define FN_LAMBDA1337	((void*)startLabel+7528)
#define CT_v1634	((void*)startLabel+7544)
#define F0_LAMBDA1337	((void*)startLabel+7552)
#define FN_LAMBDA1336	((void*)startLabel+7580)
#define CT_v1635	((void*)startLabel+7600)
#define F0_LAMBDA1336	((void*)startLabel+7608)
#define FN_LAMBDA1335	((void*)startLabel+7640)
#define CT_v1636	((void*)startLabel+7660)
#define F0_LAMBDA1335	((void*)startLabel+7668)
#define FN_LAMBDA1334	((void*)startLabel+7700)
#define CT_v1637	((void*)startLabel+7732)
#define F0_LAMBDA1334	((void*)startLabel+7740)
#define FN_HandParse_46constName	((void*)startLabel+7756)
#define CT_v1638	((void*)startLabel+7784)
#define CF_HandParse_46constName	((void*)startLabel+7792)
#define FN_LAMBDA1341	((void*)startLabel+7824)
#define CT_v1639	((void*)startLabel+7848)
#define F0_LAMBDA1341	((void*)startLabel+7856)
#define FN_LAMBDA1340	((void*)startLabel+7872)
#define CT_v1640	((void*)startLabel+7916)
#define F0_LAMBDA1340	((void*)startLabel+7924)
#define FN_LAMBDA1339	((void*)startLabel+7968)
#define CT_v1641	((void*)startLabel+7992)
#define F0_LAMBDA1339	((void*)startLabel+8000)
#define FN_HandParse_46constnames	((void*)startLabel+8016)
#define CT_v1642	((void*)startLabel+8044)
#define CF_HandParse_46constnames	((void*)startLabel+8052)
#define FN_HandParse_46vars	((void*)startLabel+8076)
#define CT_v1643	((void*)startLabel+8088)
#define CF_HandParse_46vars	((void*)startLabel+8096)
#define FN_HandParse_46haskell	((void*)startLabel+8116)
#define CT_v1644	((void*)startLabel+8128)
#define CF_HandParse_46haskell	((void*)startLabel+8136)
#define FN_LAMBDA1342	((void*)startLabel+8152)
#define v1657	((void*)startLabel+8162)
#define v1648	((void*)startLabel+8166)
#define v1659	((void*)startLabel+8240)
#define v1656	((void*)startLabel+8244)
#define v1653	((void*)startLabel+8261)
#define v1649	((void*)startLabel+8266)
#define v1645	((void*)startLabel+8271)
#define CT_v1660	((void*)startLabel+8296)
#define F0_LAMBDA1342	((void*)startLabel+8304)
#define FN_HandParse_46c	((void*)startLabel+8316)
#define CT_v1661	((void*)startLabel+8328)
#define CF_HandParse_46c	((void*)startLabel+8336)
#define FN_LAMBDA1343	((void*)startLabel+8352)
#define v1674	((void*)startLabel+8362)
#define v1665	((void*)startLabel+8366)
#define v1676	((void*)startLabel+8440)
#define v1673	((void*)startLabel+8444)
#define v1670	((void*)startLabel+8461)
#define v1666	((void*)startLabel+8466)
#define v1662	((void*)startLabel+8471)
#define CT_v1677	((void*)startLabel+8496)
#define F0_LAMBDA1343	((void*)startLabel+8504)
#define FN_HandParse_46decl	((void*)startLabel+8516)
#define CT_v1678	((void*)startLabel+8680)
#define CF_HandParse_46decl	((void*)startLabel+8688)
#define FN_LAMBDA1357	((void*)startLabel+8784)
#define CT_v1679	((void*)startLabel+8808)
#define F0_LAMBDA1357	((void*)startLabel+8816)
#define FN_LAMBDA1356	((void*)startLabel+8832)
#define CT_v1681	((void*)startLabel+8852)
#define CF_LAMBDA1356	((void*)startLabel+8860)
#define FN_LAMBDA1355	((void*)startLabel+8872)
#define CT_v1682	((void*)startLabel+8916)
#define F0_LAMBDA1355	((void*)startLabel+8924)
#define FN_LAMBDA1354	((void*)startLabel+8960)
#define CT_v1683	((void*)startLabel+8984)
#define F0_LAMBDA1354	((void*)startLabel+8992)
#define FN_LAMBDA1353	((void*)startLabel+9008)
#define CT_v1685	((void*)startLabel+9028)
#define CF_LAMBDA1353	((void*)startLabel+9036)
#define FN_LAMBDA1352	((void*)startLabel+9048)
#define CT_v1686	((void*)startLabel+9084)
#define F0_LAMBDA1352	((void*)startLabel+9092)
#define FN_LAMBDA1351	((void*)startLabel+9140)
#define CT_v1687	((void*)startLabel+9192)
#define F0_LAMBDA1351	((void*)startLabel+9200)
#define FN_LAMBDA1350	((void*)startLabel+9248)
#define CT_v1688	((void*)startLabel+9276)
#define F0_LAMBDA1350	((void*)startLabel+9284)
#define FN_LAMBDA1349	((void*)startLabel+9300)
#define CT_v1690	((void*)startLabel+9320)
#define CF_LAMBDA1349	((void*)startLabel+9328)
#define FN_LAMBDA1348	((void*)startLabel+9340)
#define CT_v1692	((void*)startLabel+9360)
#define CF_LAMBDA1348	((void*)startLabel+9368)
#define FN_LAMBDA1347	((void*)startLabel+9380)
#define CT_v1694	((void*)startLabel+9400)
#define CF_LAMBDA1347	((void*)startLabel+9408)
#define FN_LAMBDA1346	((void*)startLabel+9420)
#define CT_v1696	((void*)startLabel+9440)
#define CF_LAMBDA1346	((void*)startLabel+9448)
#define FN_LAMBDA1345	((void*)startLabel+9460)
#define CT_v1697	((void*)startLabel+9480)
#define F0_LAMBDA1345	((void*)startLabel+9488)
#define FN_LAMBDA1344	((void*)startLabel+9500)
#define CT_v1698	((void*)startLabel+9520)
#define F0_LAMBDA1344	((void*)startLabel+9528)
#define FN_HandParse_46decls	((void*)startLabel+9540)
#define CT_v1699	((void*)startLabel+9552)
#define CF_HandParse_46decls	((void*)startLabel+9560)
#define CT_v1700	((void*)startLabel+9600)
#define ST_v1438	((void*)startLabel+9632)
#define ST_v1628	((void*)startLabel+9668)
#define ST_v1596	((void*)startLabel+9694)
#define ST_v1598	((void*)startLabel+9729)
#define ST_v1432	((void*)startLabel+9760)
#define ST_v1695	((void*)startLabel+9794)
#define ST_v1528	((void*)startLabel+9824)
#define ST_v1630	((void*)startLabel+9865)
#define ST_v1434	((void*)startLabel+9901)
#define ST_v1680	((void*)startLabel+9945)
#define ST_v1684	((void*)startLabel+9975)
#define ST_v1526	((void*)startLabel+10004)
#define ST_v1522	((void*)startLabel+10037)
#define ST_v1693	((void*)startLabel+10076)
#define ST_v1691	((void*)startLabel+10104)
#define ST_v1626	((void*)startLabel+10134)
#define ST_v1436	((void*)startLabel+10174)
#define ST_v1606	((void*)startLabel+10216)
#define ST_v1573	((void*)startLabel+10248)
#define ST_v1689	((void*)startLabel+10288)
#define ST_v1551	((void*)startLabel+10319)
#define ST_v1539	((void*)startLabel+10343)
#define ST_v1545	((void*)startLabel+10369)
#define ST_v1533	((void*)startLabel+10395)
#define ST_v1547	((void*)startLabel+10423)
#define ST_v1535	((void*)startLabel+10451)
#define ST_v1549	((void*)startLabel+10482)
#define ST_v1537	((void*)startLabel+10509)
extern Node FN_ParseLib_46_43_43_43[];
extern Node FN_ParseLib_46tok[];
extern Node FN_ParseLib_46bracket[];
extern Node FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61[];
extern Node FN_ParseLib_46elserror[];
extern Node FN_ParseLib_46cut[];
extern Node FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62[];
extern Node FN_DIS_46apply[];
extern Node FN_Prelude_46Monad_46ParseLib_46Parser_46return[];
extern Node FN_Prelude_46unzip[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Casm_46lookupBaseTy[];
extern Node FN_ParseLib_46many1[];
extern Node FN_ParseLib_46many[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46Monad_46ParseLib_46Parser_46return[];
extern Node FN_ParseLib_46sepby1[];
extern Node CF_Prelude_46unlines[];
extern Node FN_Type_46typeApply[];
extern Node FN_Prelude_46Show_46Prelude_46_91_93_46show[];
extern Node CF_Prelude_46Show_46Prelude_46Char[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_ParseLib_46papply[];
extern Node F0_Prelude_46head[];
extern Node F0_Prelude_46fst[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v1359)
,	/* FN_HandParse_46name: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1359: (byte 0) */
  HW(1,0)
, 0
,	/* CF_HandParse_46name: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46name))
, CAPTAG(useLabel(FN_LAMBDA1259),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1375)
,	/* FN_LAMBDA1259: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1372: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1363: (byte 2) */
  bytes2word(107,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,31,TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(66),BOT(66))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
,	/* v1374: (byte 4) */
  bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
,	/* v1371: (byte 4) */
  bytes2word(POP_I1,JUMP,19,0)
, bytes2word(UNPACK,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_P1,4)
, bytes2word(HEAP_CVAL_N1,2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
,	/* v1368: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v1364: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v1360: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
,	/* CT_v1375: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1259: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1259),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1376)
,	/* FN_HandParse_46disname: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1376: (byte 0) */
  HW(1,0)
, 0
,	/* CF_HandParse_46disname: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46disname))
, CAPTAG(useLabel(FN_LAMBDA1260),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1392)
,	/* FN_LAMBDA1260: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1389: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1380: (byte 2) */
  bytes2word(107,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,31,TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(66),BOT(66),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
,	/* v1391: (byte 4) */
  bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
,	/* v1388: (byte 4) */
  bytes2word(POP_I1,JUMP,19,0)
, bytes2word(UNPACK,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_P1,4)
, bytes2word(HEAP_CVAL_N1,2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
,	/* v1385: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v1381: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v1377: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
,	/* CT_v1392: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1260: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1260),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1393)
,	/* FN_HandParse_46nName: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1393: (byte 0) */
  HW(3,0)
, 0
,	/* CF_HandParse_46nName: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46nName))
, VAPTAG(useLabel(FN_ParseLib_46_43_43_43))
, useLabel(CF_HandParse_46name)
, useLabel(CF_HandParse_46disname)
, bytes2word(0,0,0,0)
, useLabel(CT_v1394)
,	/* FN_HandParse_46baseTy: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1394: (byte 0) */
  HW(1,0)
, 0
,	/* CF_HandParse_46baseTy: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46baseTy))
, CAPTAG(useLabel(FN_LAMBDA1261),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1410)
,	/* FN_LAMBDA1261: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1407: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1398: (byte 2) */
  bytes2word(107,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,31,TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(66),BOT(66))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
,	/* v1409: (byte 4) */
  bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
,	/* v1406: (byte 4) */
  bytes2word(POP_I1,JUMP,19,0)
, bytes2word(UNPACK,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_P1,4)
, bytes2word(HEAP_CVAL_N1,2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
,	/* v1403: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v1399: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v1395: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
,	/* CT_v1410: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1261: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1261),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1411)
,	/* FN_HandParse_46cexp: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1411: (byte 0) */
  HW(1,0)
, 0
,	/* CF_HandParse_46cexp: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46cexp))
, CAPTAG(useLabel(FN_LAMBDA1262),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1427)
,	/* FN_LAMBDA1262: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1424: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1415: (byte 2) */
  bytes2word(107,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,31,TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
,	/* v1426: (byte 4) */
  bytes2word(TOP(66),BOT(66),TOP(62),BOT(62))
,	/* v1423: (byte 4) */
  bytes2word(POP_I1,JUMP,19,0)
, bytes2word(UNPACK,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_P1,4)
, bytes2word(HEAP_CVAL_N1,2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
,	/* v1420: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v1416: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v1412: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
,	/* CT_v1427: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1262: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1262),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1428)
,	/* FN_HandParse_46dis: (byte 0) */
  bytes2word(NEEDHEAP_P1,100,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,6,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_N1,4,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_P1,15,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,16,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,14,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(17,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(18,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(19,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(20,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(21,HEAP_OFF_N1,3,HEAP_CVAL_N1)
, bytes2word(5,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(HEAP_CVAL_P1,22,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_P1,21,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,23,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,14,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,24)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,24,HEAP_CVAL_P1,25)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,24)
, bytes2word(HEAP_OFF_N1,28,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,24,HEAP_OFF_N1,35)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,24)
, bytes2word(HEAP_OFF_N1,42,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,24,HEAP_OFF_N1,59)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,24)
, bytes2word(HEAP_OFF_N1,76,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,24,HEAP_OFF_N1,83)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(24,HEAP_OFF_N1,91,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(22,0,0)
, CONSTR(15,0,0)
, CONSTR(13,0,0)
, CONSTR(8,0,0)
, CONSTR(7,0,0)
,	/* CT_v1428: (byte 0) */
  HW(23,0)
, 0
,	/* CF_HandParse_46dis: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46dis))
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_ParseLib_46bracket))
, useLabel(CF_HandParse_46dis)
, CAPTAG(useLabel(FN_LAMBDA1264),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46disname)
, CAPTAG(useLabel(FN_LAMBDA1266),1)
, useLabel(CF_HandParse_46name)
, VAPTAG(useLabel(FN_LAMBDA1267))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, CAPTAG(useLabel(FN_LAMBDA1274),1)
, VAPTAG(useLabel(FN_ParseLib_46cut))
, VAPTAG(useLabel(FN_LAMBDA1275))
, CAPTAG(useLabel(FN_LAMBDA1282),1)
, CAPTAG(useLabel(FN_LAMBDA1289),1)
, useLabel(CF_HandParse_46baseTy)
, CAPTAG(useLabel(FN_LAMBDA1293),1)
, CAPTAG(useLabel(FN_LAMBDA1294),1)
, useLabel(CF_HandParse_46cexp)
, VAPTAG(useLabel(FN_LAMBDA1295))
, CAPTAG(useLabel(FN_LAMBDA1301),1)
, VAPTAG(useLabel(FN_ParseLib_46_43_43_43))
, useLabel(CF_HandParse_46tuple)
, bytes2word(1,0,0,1)
, useLabel(CT_v1429)
,	/* FN_LAMBDA1301: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1429: (byte 0) */
  HW(5,1)
, 0
,	/* F0_LAMBDA1301: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1301),1)
, VAPTAG(useLabel(FN_LAMBDA1296))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, useLabel(CF_HandParse_46disname)
, CAPTAG(useLabel(FN_LAMBDA1300),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1430)
,	/* FN_LAMBDA1300: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,14,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(23,0,0)
,	/* CT_v1430: (byte 0) */
  HW(8,2)
, 0
,	/* F0_LAMBDA1300: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1300),2)
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_LAMBDA1297))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, VAPTAG(useLabel(FN_LAMBDA1298))
, useLabel(CF_HandParse_46dis)
, CAPTAG(useLabel(FN_LAMBDA1299),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1431)
,	/* FN_LAMBDA1299: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_N1,2,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,4,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_N1,4,HEAP_ARG,3)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(3,2,0)
, CONSTR(8,1,0)
,	/* CT_v1431: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA1299: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1299),3)
, VAPTAG(useLabel(FN_DIS_46apply))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1433)
,	/* FN_LAMBDA1298: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1432)
,	/* CT_v1433: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1298: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1298))
, bytes2word(0,0,0,0)
, useLabel(CT_v1435)
,	/* FN_LAMBDA1297: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1434)
,	/* CT_v1435: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1297: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1297))
, bytes2word(0,0,0,0)
, useLabel(CT_v1437)
,	/* FN_LAMBDA1296: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1436)
,	/* CT_v1437: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1296: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1296))
, bytes2word(0,0,0,0)
, useLabel(CT_v1439)
,	/* FN_LAMBDA1295: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1438)
,	/* CT_v1439: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1295: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1295))
, bytes2word(1,0,0,1)
, useLabel(CT_v1440)
,	/* FN_LAMBDA1294: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(4,1,0)
,	/* CT_v1440: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA1294: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1294),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v1441)
,	/* FN_LAMBDA1293: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_N1,2)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(10,0,0)
, CONSTR(9,0,0)
,	/* CT_v1441: (byte 0) */
  HW(5,1)
, 0
,	/* F0_LAMBDA1293: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1293),1)
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_ParseLib_46bracket))
, useLabel(CF_HandParse_46fieldDISs)
, CAPTAG(useLabel(FN_LAMBDA1292),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1442)
,	/* FN_LAMBDA1292: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,2,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,6)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(5,2,0)
,	/* CT_v1442: (byte 0) */
  HW(5,2)
, 0
,	/* F0_LAMBDA1292: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1292),2)
, VAPTAG(useLabel(FN_Prelude_46unzip))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA1290))
, VAPTAG(useLabel(FN_LAMBDA1291))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v1443)
,	/* FN_LAMBDA1291: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1443: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1291: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1291),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1444)
,	/* FN_LAMBDA1290: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1444: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1290: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1290),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1520)
,	/* FN_LAMBDA1289: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1505: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1448: (byte 2) */
  bytes2word(27,1,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(70),BOT(70))
,	/* v1506: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v1452: (byte 4) */
  bytes2word(POP_I1,JUMP,4,1)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1507: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1456: (byte 2) */
  bytes2word(246,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(111),BOT(111))
,	/* v1508: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v1460: (byte 4) */
  bytes2word(POP_I1,JUMP,223,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1509: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1464: (byte 2) */
  bytes2word(209,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(114),BOT(114))
,	/* v1510: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v1468: (byte 4) */
  bytes2word(POP_I1,JUMP,186,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1511: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1472: (byte 2) */
  bytes2word(172,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(101),BOT(101))
,	/* v1512: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v1476: (byte 4) */
  bytes2word(POP_I1,JUMP,149,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1513: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1480: (byte 2) */
  bytes2word(135,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(105),BOT(105))
,	/* v1514: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v1484: (byte 4) */
  bytes2word(POP_I1,JUMP,112,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1515: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1488: (byte 2) */
  bytes2word(98,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(103),BOT(103))
,	/* v1516: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v1492: (byte 4) */
  bytes2word(POP_I1,JUMP,75,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1517: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1496: (byte 2) */
  bytes2word(61,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(110),BOT(110))
,	/* v1518: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v1500: (byte 4) */
  bytes2word(POP_I1,JUMP,38,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v1519: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v1504: (byte 2) */
  bytes2word(24,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,8)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_OFF_N1)
,	/* v1497: (byte 4) */
  bytes2word(5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v1489: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v1481: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v1473: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v1465: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v1457: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v1449: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v1445: (byte 3) */
  bytes2word(JUMP,2,0,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(12,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1520: (byte 0) */
  HW(10,1)
, 0
,	/* F0_LAMBDA1289: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1289),1)
, VAPTAG(useLabel(FN_ParseLib_46_43_43_43))
, useLabel(CF_HandParse_46nName)
, useLabel(CF_HandParse_46cexp)
, VAPTAG(useLabel(FN_LAMBDA1283))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, CAPTAG(useLabel(FN_LAMBDA1286),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, VAPTAG(useLabel(FN_LAMBDA1287))
, useLabel(CF_HandParse_46arg)
, CAPTAG(useLabel(FN_LAMBDA1288),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1521)
,	/* FN_LAMBDA1288: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_N1,2,HEAP_CVAL_IN3,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
,	/* CT_v1521: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA1288: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1288),2)
, VAPTAG(useLabel(FN_Casm_46lookupBaseTy))
, VAPTAG(useLabel(FN_DIS_46apply))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1523)
,	/* FN_LAMBDA1287: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1522)
,	/* CT_v1523: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1287: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1287))
, bytes2word(1,0,0,1)
, useLabel(CT_v1524)
,	/* FN_LAMBDA1286: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1524: (byte 0) */
  HW(5,1)
, 0
,	/* F0_LAMBDA1286: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1286),1)
, VAPTAG(useLabel(FN_LAMBDA1284))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, useLabel(CF_HandParse_46arg)
, CAPTAG(useLabel(FN_LAMBDA1285),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1525)
,	/* FN_LAMBDA1285: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_IN3,HEAP_CVAL_N1,4)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
, CONSTR(9,1,0)
,	/* CT_v1525: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA1285: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1285),2)
, VAPTAG(useLabel(FN_DIS_46apply))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1527)
,	/* FN_LAMBDA1284: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1526)
,	/* CT_v1527: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1284: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1284))
, bytes2word(0,0,0,0)
, useLabel(CT_v1529)
,	/* FN_LAMBDA1283: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1528)
,	/* CT_v1529: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1283: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1283))
, bytes2word(1,0,0,1)
, useLabel(CT_v1530)
,	/* FN_LAMBDA1282: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(17,0,0)
,	/* CT_v1530: (byte 0) */
  HW(8,1)
, 0
,	/* F0_LAMBDA1282: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1282),1)
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_LAMBDA1276))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, VAPTAG(useLabel(FN_LAMBDA1277))
, useLabel(CF_HandParse_46name)
, CAPTAG(useLabel(FN_LAMBDA1281),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1531)
,	/* FN_LAMBDA1281: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,16,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(16,0,0)
,	/* CT_v1531: (byte 0) */
  HW(9,2)
, 0
,	/* F0_LAMBDA1281: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1281),2)
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_LAMBDA1278))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, VAPTAG(useLabel(FN_ParseLib_46many1))
, useLabel(CF_HandParse_46arg)
, VAPTAG(useLabel(FN_LAMBDA1279))
, CAPTAG(useLabel(FN_LAMBDA1280),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1532)
,	/* FN_LAMBDA1280: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,2,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(5,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(7,3,0)
, CONSTR(0,0,0)
,	/* CT_v1532: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA1280: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1280),3)
, VAPTAG(useLabel(FN_DIS_46apply))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1534)
,	/* FN_LAMBDA1279: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1533)
,	/* CT_v1534: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1279: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1279))
, bytes2word(0,0,0,0)
, useLabel(CT_v1536)
,	/* FN_LAMBDA1278: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1535)
,	/* CT_v1536: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1278: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1278))
, bytes2word(0,0,0,0)
, useLabel(CT_v1538)
,	/* FN_LAMBDA1277: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1537)
,	/* CT_v1538: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1277: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1277))
, bytes2word(0,0,0,0)
, useLabel(CT_v1540)
,	/* FN_LAMBDA1276: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1539)
,	/* CT_v1540: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1276: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1276))
, bytes2word(0,0,0,0)
, useLabel(CT_v1541)
,	/* FN_LAMBDA1275: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1537)
,	/* CT_v1541: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1275: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1275))
, bytes2word(1,0,0,1)
, useLabel(CT_v1542)
,	/* FN_LAMBDA1274: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(17,0,0)
,	/* CT_v1542: (byte 0) */
  HW(8,1)
, 0
,	/* F0_LAMBDA1274: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1274),1)
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_LAMBDA1268))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, VAPTAG(useLabel(FN_LAMBDA1269))
, useLabel(CF_HandParse_46name)
, CAPTAG(useLabel(FN_LAMBDA1273),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1543)
,	/* FN_LAMBDA1273: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,16,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(14,0,0)
,	/* CT_v1543: (byte 0) */
  HW(9,2)
, 0
,	/* F0_LAMBDA1273: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1273),2)
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_LAMBDA1270))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, VAPTAG(useLabel(FN_ParseLib_46many1))
, useLabel(CF_HandParse_46arg)
, VAPTAG(useLabel(FN_LAMBDA1271))
, CAPTAG(useLabel(FN_LAMBDA1272),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1544)
,	/* FN_LAMBDA1272: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,2,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(5,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(7,3,0)
, CONSTR(1,0,0)
,	/* CT_v1544: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA1272: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1272),3)
, VAPTAG(useLabel(FN_DIS_46apply))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1546)
,	/* FN_LAMBDA1271: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1545)
,	/* CT_v1546: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1271: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1271))
, bytes2word(0,0,0,0)
, useLabel(CT_v1548)
,	/* FN_LAMBDA1270: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1547)
,	/* CT_v1548: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1270: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1270))
, bytes2word(0,0,0,0)
, useLabel(CT_v1550)
,	/* FN_LAMBDA1269: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1549)
,	/* CT_v1550: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1269: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1269))
, bytes2word(0,0,0,0)
, useLabel(CT_v1552)
,	/* FN_LAMBDA1268: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1551)
,	/* CT_v1552: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1268: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1268))
, bytes2word(0,0,0,0)
, useLabel(CT_v1553)
,	/* FN_LAMBDA1267: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1549)
,	/* CT_v1553: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1267: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1267))
, bytes2word(1,0,0,1)
, useLabel(CT_v1554)
,	/* FN_LAMBDA1266: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1554: (byte 0) */
  HW(4,1)
, 0
,	/* F0_LAMBDA1266: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1266),1)
, VAPTAG(useLabel(FN_ParseLib_46many))
, useLabel(CF_HandParse_46arg)
, CAPTAG(useLabel(FN_LAMBDA1265),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1555)
,	/* FN_LAMBDA1265: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,1,0)
,	/* CT_v1555: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA1265: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1265),2)
, VAPTAG(useLabel(FN_DIS_46apply))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v1556)
,	/* FN_LAMBDA1264: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1556: (byte 0) */
  HW(4,1)
, 0
,	/* F0_LAMBDA1264: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1264),1)
, VAPTAG(useLabel(FN_ParseLib_46many1))
, useLabel(CF_HandParse_46arg)
, CAPTAG(useLabel(FN_LAMBDA1263),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1557)
,	/* FN_LAMBDA1263: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(8,1,0)
,	/* CT_v1557: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA1263: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1263),2)
, VAPTAG(useLabel(FN_DIS_46apply))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1558)
,	/* FN_HandParse_46arg: (byte 0) */
  bytes2word(NEEDHEAP_P1,35,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,6,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,13)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,14)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,13)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,13,HEAP_OFF_N1)
, bytes2word(26,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(8,0,0)
, CONSTR(7,0,0)
,	/* CT_v1558: (byte 0) */
  HW(12,0)
, 0
,	/* CF_HandParse_46arg: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46arg))
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_ParseLib_46bracket))
, useLabel(CF_HandParse_46dis)
, CAPTAG(useLabel(FN_LAMBDA1302),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46disname)
, CAPTAG(useLabel(FN_LAMBDA1303),1)
, useLabel(CF_HandParse_46name)
, CAPTAG(useLabel(FN_LAMBDA1304),1)
, useLabel(CF_HandParse_46cexp)
, VAPTAG(useLabel(FN_ParseLib_46_43_43_43))
, useLabel(CF_HandParse_46tuple)
, bytes2word(1,0,0,1)
, useLabel(CT_v1559)
,	/* FN_LAMBDA1304: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(4,1,0)
,	/* CT_v1559: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA1304: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1304),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v1560)
,	/* FN_LAMBDA1303: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,1,0)
,	/* CT_v1560: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA1303: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1303),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v1561)
,	/* FN_LAMBDA1302: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(8,1,0)
,	/* CT_v1561: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA1302: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1302),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1562)
,	/* FN_HandParse_46tuple: (byte 0) */
  bytes2word(NEEDHEAP_P1,38,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_IN3,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_IN3,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,23,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(6,0,0)
, CONSTR(8,0,0)
, CONSTR(7,0,0)
,	/* CT_v1562: (byte 0) */
  HW(10,0)
, 0
,	/* CF_HandParse_46tuple: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46tuple))
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, VAPTAG(useLabel(FN_ParseLib_46bracket))
, useLabel(CF_HandParse_46tuples)
, CAPTAG(useLabel(FN_DIS_46apply),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46Monad_46ParseLib_46Parser_46return)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, VAPTAG(useLabel(FN_ParseLib_46_43_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v1563)
,	/* FN_HandParse_46tuples: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1563: (byte 0) */
  HW(3,0)
, 0
,	/* CF_HandParse_46tuples: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46tuples))
, CAPTAG(useLabel(FN_LAMBDA1306),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46dis)
, bytes2word(1,0,0,1)
, useLabel(CT_v1564)
,	/* FN_LAMBDA1306: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(18,0,0)
,	/* CT_v1564: (byte 0) */
  HW(6,1)
, 0
,	/* F0_LAMBDA1306: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1306),1)
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_ParseLib_46sepby1))
, useLabel(CF_HandParse_46dis)
, CAPTAG(useLabel(FN_LAMBDA1305),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1565)
,	/* FN_LAMBDA1305: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v1565: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA1305: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1305),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1566)
,	/* FN_HandParse_46fieldDISs: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(18,0,0)
,	/* CT_v1566: (byte 0) */
  HW(3,0)
, 0
,	/* CF_HandParse_46fieldDISs: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46fieldDISs))
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_ParseLib_46sepby1))
, useLabel(CF_HandParse_46field_95elt)
, bytes2word(0,0,0,0)
, useLabel(CT_v1567)
,	/* FN_HandParse_46field_95elt: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1567: (byte 0) */
  HW(3,0)
, 0
,	/* CF_HandParse_46field_95elt: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46field_95elt))
, CAPTAG(useLabel(FN_LAMBDA1308),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46nName)
, bytes2word(1,0,0,1)
, useLabel(CT_v1568)
,	/* FN_LAMBDA1308: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(19,0,0)
,	/* CT_v1568: (byte 0) */
  HW(5,1)
, 0
,	/* F0_LAMBDA1308: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1308),1)
, VAPTAG(useLabel(FN_ParseLib_46tok))
, CAPTAG(useLabel(FN_LAMBDA1307),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46dis)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1569)
,	/* FN_LAMBDA1307: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1569: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA1307: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1307),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1570)
,	/* FN_HandParse_46args: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1570: (byte 0) */
  HW(2,0)
, 0
,	/* CF_HandParse_46args: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46args))
, VAPTAG(useLabel(FN_ParseLib_46many1))
, useLabel(CF_HandParse_46arg)
, bytes2word(0,0,0,0)
, useLabel(CT_v1571)
,	/* FN_HandParse_46mbresult: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_N1,2)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(2,0,0)
,	/* CT_v1571: (byte 0) */
  HW(9,0)
, 0
,	/* CF_HandParse_46mbresult: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46mbresult))
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_LAMBDA1309))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, useLabel(CF_HandParse_46dis)
, CAPTAG(useLabel(FN_LAMBDA1310),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, VAPTAG(useLabel(FN_ParseLib_46cut))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, VAPTAG(useLabel(FN_ParseLib_46_43_43_43))
, bytes2word(1,0,0,1)
, useLabel(CT_v1572)
,	/* FN_LAMBDA1310: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v1572: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA1310: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1310),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1574)
,	/* FN_LAMBDA1309: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1573)
,	/* CT_v1574: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1309: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1309))
, bytes2word(0,0,0,0)
, useLabel(CT_v1575)
,	/* FN_HandParse_46ccode: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1575: (byte 0) */
  HW(1,0)
, 0
,	/* CF_HandParse_46ccode: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46ccode))
, CAPTAG(useLabel(FN_LAMBDA1311),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1591)
,	/* FN_LAMBDA1311: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1588: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1579: (byte 2) */
  bytes2word(107,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,31,TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
,	/* v1590: (byte 4) */
  bytes2word(TOP(62),BOT(62),TOP(66),BOT(66))
,	/* v1587: (byte 4) */
  bytes2word(POP_I1,JUMP,19,0)
, bytes2word(UNPACK,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_P1,4)
, bytes2word(HEAP_CVAL_N1,2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
,	/* v1584: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v1580: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v1576: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
,	/* CT_v1591: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1311: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1311),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1592)
,	/* FN_HandParse_46cCode: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(9,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1592: (byte 0) */
  HW(7,0)
, 0
,	/* CF_HandParse_46cCode: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46cCode))
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46Monad_46ParseLib_46Parser_46return)
, useLabel(CF_Prelude_46unlines)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46ccode)
, VAPTAG(useLabel(FN_ParseLib_46_43_43_43))
, useLabel(CF_HandParse_46cexp)
, bytes2word(0,0,0,0)
, useLabel(CT_v1593)
,	/* FN_HandParse_46fails: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(3,0,0)
,	/* CT_v1593: (byte 0) */
  HW(8,0)
, 0
,	/* CF_HandParse_46fails: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46fails))
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_LAMBDA1312))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, useLabel(CF_HandParse_46cCode)
, CAPTAG(useLabel(FN_LAMBDA1315),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, VAPTAG(useLabel(FN_ParseLib_46cut))
, VAPTAG(useLabel(FN_ParseLib_46many1))
, bytes2word(1,0,0,1)
, useLabel(CT_v1594)
,	/* FN_LAMBDA1315: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1594: (byte 0) */
  HW(5,1)
, 0
,	/* F0_LAMBDA1315: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1315),1)
, VAPTAG(useLabel(FN_LAMBDA1313))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, useLabel(CF_HandParse_46cCode)
, CAPTAG(useLabel(FN_LAMBDA1314),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1595)
,	/* FN_LAMBDA1314: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1595: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA1314: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1314),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1597)
,	/* FN_LAMBDA1313: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1596)
,	/* CT_v1597: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1313: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1313))
, bytes2word(0,0,0,0)
, useLabel(CT_v1599)
,	/* FN_LAMBDA1312: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1598)
,	/* CT_v1599: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1312: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1312))
, bytes2word(0,0,0,0)
, useLabel(CT_v1600)
,	/* FN_HandParse_46mbfail: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v1600: (byte 0) */
  HW(7,0)
, 0
,	/* CF_HandParse_46mbfail: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46mbfail))
, CAPTAG(useLabel(FN_LAMBDA1316),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46Monad_46ParseLib_46Parser_46return)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46fails)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, VAPTAG(useLabel(FN_ParseLib_46_43_43_43))
, bytes2word(1,0,0,1)
, useLabel(CT_v1601)
,	/* FN_LAMBDA1316: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v1601: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1316: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1316),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1602)
,	/* FN_HandParse_46mbccode: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v1602: (byte 0) */
  HW(7,0)
, 0
,	/* CF_HandParse_46mbccode: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46mbccode))
, CAPTAG(useLabel(FN_LAMBDA1317),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46Monad_46ParseLib_46Parser_46return)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46ccode)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, VAPTAG(useLabel(FN_ParseLib_46_43_43_43))
, bytes2word(1,0,0,1)
, useLabel(CT_v1603)
,	/* FN_LAMBDA1317: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v1603: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1317: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1317),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1604)
,	/* FN_HandParse_46mbcall: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_N1,2)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v1604: (byte 0) */
  HW(9,0)
, 0
,	/* CF_HandParse_46mbcall: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46mbcall))
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_LAMBDA1318))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, useLabel(CF_HandParse_46args)
, CAPTAG(useLabel(FN_LAMBDA1319),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, VAPTAG(useLabel(FN_ParseLib_46cut))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, VAPTAG(useLabel(FN_ParseLib_46_43_43_43))
, bytes2word(1,0,0,1)
, useLabel(CT_v1605)
,	/* FN_LAMBDA1319: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v1605: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA1319: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1319),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1607)
,	/* FN_LAMBDA1318: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1606)
,	/* CT_v1607: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1318: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1318))
, bytes2word(0,0,0,0)
, useLabel(CT_v1608)
,	/* FN_HandParse_46tType: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_CVAL_I5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1608: (byte 0) */
  HW(4,0)
, 0
,	/* CF_HandParse_46tType: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46tType))
, CAPTAG(useLabel(FN_LAMBDA1321),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46simpletype)
, VAPTAG(useLabel(FN_ParseLib_46_43_43_43))
, bytes2word(1,0,0,1)
, useLabel(CT_v1609)
,	/* FN_LAMBDA1321: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(20,0,0)
,	/* CT_v1609: (byte 0) */
  HW(5,1)
, 0
,	/* F0_LAMBDA1321: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1321),1)
, VAPTAG(useLabel(FN_ParseLib_46tok))
, CAPTAG(useLabel(FN_LAMBDA1320),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46tType)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1610)
,	/* FN_LAMBDA1320: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1610: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA1320: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1320),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1611)
,	/* FN_HandParse_46simpletype: (byte 0) */
  bytes2word(NEEDHEAP_P1,41,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,6,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_N1,4)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,21,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,12,HEAP_CVAL_P1)
, bytes2word(13,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,32)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(12,0,0)
, CONSTR(11,0,0)
, CONSTR(8,0,0)
, CONSTR(7,0,0)
,	/* CT_v1611: (byte 0) */
  HW(11,0)
, 0
,	/* CF_HandParse_46simpletype: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46simpletype))
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_ParseLib_46bracket))
, useLabel(CF_HandParse_46tType)
, CAPTAG(useLabel(FN_LAMBDA1323),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46nName)
, CAPTAG(useLabel(FN_LAMBDA1324),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46Monad_46ParseLib_46Parser_46return)
, VAPTAG(useLabel(FN_ParseLib_46_43_43_43))
, useLabel(CF_HandParse_46typetuple)
, bytes2word(1,0,0,1)
, useLabel(CT_v1612)
,	/* FN_LAMBDA1324: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v1612: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1324: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1324),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1613)
,	/* FN_LAMBDA1323: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1613: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA1323: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1323),1)
, CAPTAG(useLabel(FN_LAMBDA1322),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46atypes)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1614)
,	/* FN_LAMBDA1322: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(4,1,0)
,	/* CT_v1614: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA1322: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1322),2)
, VAPTAG(useLabel(FN_Type_46typeApply))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1615)
,	/* FN_HandParse_46atypes: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1615: (byte 0) */
  HW(2,0)
, 0
,	/* CF_HandParse_46atypes: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46atypes))
, VAPTAG(useLabel(FN_ParseLib_46many))
, useLabel(CF_HandParse_46atype)
, bytes2word(0,0,0,0)
, useLabel(CT_v1616)
,	/* FN_HandParse_46atype: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_N1,2)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,12)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(8,0,0)
, CONSTR(7,0,0)
,	/* CT_v1616: (byte 0) */
  HW(8,0)
, 0
,	/* CF_HandParse_46atype: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46atype))
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_ParseLib_46bracket))
, useLabel(CF_HandParse_46tType)
, CAPTAG(useLabel(FN_LAMBDA1325),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46nName)
, VAPTAG(useLabel(FN_ParseLib_46_43_43_43))
, useLabel(CF_HandParse_46typetuple)
, bytes2word(1,0,0,1)
, useLabel(CT_v1617)
,	/* FN_LAMBDA1325: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(4,1,0)
,	/* CT_v1617: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA1325: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1325),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1618)
,	/* FN_HandParse_46typetuple: (byte 0) */
  bytes2word(NEEDHEAP_P1,38,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_IN3,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I4,HEAP_OFF_N1,9)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,9)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,21,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(2,1,0)
, CONSTR(0,0,0)
, CONSTR(8,0,0)
, CONSTR(7,0,0)
,	/* CT_v1618: (byte 0) */
  HW(10,0)
, 0
,	/* CF_HandParse_46typetuple: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46typetuple))
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, VAPTAG(useLabel(FN_ParseLib_46bracket))
, useLabel(CF_HandParse_46typetuples)
, CAPTAG(useLabel(FN_LAMBDA1326),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46Monad_46ParseLib_46Parser_46return)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, VAPTAG(useLabel(FN_ParseLib_46_43_43_43))
, bytes2word(1,0,0,1)
, useLabel(CT_v1619)
,	/* FN_LAMBDA1326: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,1,0)
,	/* CT_v1619: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1326: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1326),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1620)
,	/* FN_HandParse_46typetuples: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1620: (byte 0) */
  HW(3,0)
, 0
,	/* CF_HandParse_46typetuples: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46typetuples))
, CAPTAG(useLabel(FN_LAMBDA1328),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46tType)
, bytes2word(1,0,0,1)
, useLabel(CT_v1621)
,	/* FN_LAMBDA1328: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(18,0,0)
,	/* CT_v1621: (byte 0) */
  HW(6,1)
, 0
,	/* F0_LAMBDA1328: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1328),1)
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_ParseLib_46sepby1))
, useLabel(CF_HandParse_46tType)
, CAPTAG(useLabel(FN_LAMBDA1327),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1622)
,	/* FN_LAMBDA1327: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v1622: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA1327: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1327),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1623)
,	/* FN_HandParse_46sig: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v1623: (byte 0) */
  HW(7,0)
, 0
,	/* CF_HandParse_46sig: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46sig))
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_LAMBDA1329))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, useLabel(CF_HandParse_46nName)
, CAPTAG(useLabel(FN_LAMBDA1333),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, VAPTAG(useLabel(FN_ParseLib_46cut))
, bytes2word(1,0,0,1)
, useLabel(CT_v1624)
,	/* FN_LAMBDA1333: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,11,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(21,0,0)
,	/* CT_v1624: (byte 0) */
  HW(11,1)
, 0
,	/* F0_LAMBDA1333: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1333),1)
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_LAMBDA1330))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46show))
, useLabel(CF_Prelude_46Show_46Prelude_46Char)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, VAPTAG(useLabel(FN_LAMBDA1331))
, useLabel(CF_HandParse_46tType)
, CAPTAG(useLabel(FN_LAMBDA1332),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1625)
,	/* FN_LAMBDA1332: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1625: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA1332: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1332),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1627)
,	/* FN_LAMBDA1331: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1626)
,	/* CT_v1627: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1331: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1331))
, bytes2word(0,0,0,0)
, useLabel(CT_v1629)
,	/* FN_LAMBDA1330: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1628)
,	/* CT_v1629: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1330: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1330))
, bytes2word(0,0,0,0)
, useLabel(CT_v1631)
,	/* FN_LAMBDA1329: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1630)
,	/* CT_v1631: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1329: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1329))
, bytes2word(0,0,0,0)
, useLabel(CT_v1632)
,	/* FN_HandParse_46procspec: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1632: (byte 0) */
  HW(3,0)
, 0
,	/* CF_HandParse_46procspec: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46procspec))
, CAPTAG(useLabel(FN_LAMBDA1338),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46sig)
, bytes2word(1,0,0,1)
, useLabel(CT_v1633)
,	/* FN_LAMBDA1338: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1633: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA1338: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1338),1)
, CAPTAG(useLabel(FN_LAMBDA1337),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46mbcall)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1634)
,	/* FN_LAMBDA1337: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1634: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA1337: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1337),2)
, CAPTAG(useLabel(FN_LAMBDA1336),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46mbccode)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1635)
,	/* FN_LAMBDA1336: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1635: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA1336: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1336),3)
, CAPTAG(useLabel(FN_LAMBDA1335),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46mbfail)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1636)
,	/* FN_LAMBDA1335: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(7,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1636: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA1335: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1335),4)
, CAPTAG(useLabel(FN_LAMBDA1334),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46mbresult)
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v1637)
,	/* FN_LAMBDA1334: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,7,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,5,0)
,	/* CT_v1637: (byte 0) */
  HW(1,5)
, 0
,	/* F0_LAMBDA1334: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1334),5)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1638)
,	/* FN_HandParse_46constName: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1638: (byte 0) */
  HW(5,0)
, 0
,	/* CF_HandParse_46constName: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46constName))
, CAPTAG(useLabel(FN_LAMBDA1340),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46nName)
, CAPTAG(useLabel(FN_LAMBDA1341),1)
, VAPTAG(useLabel(FN_ParseLib_46_43_43_43))
, bytes2word(1,0,0,1)
, useLabel(CT_v1639)
,	/* FN_LAMBDA1341: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1639: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA1341: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1341),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v1640)
,	/* FN_LAMBDA1340: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(19,0,0)
,	/* CT_v1640: (byte 0) */
  HW(7,1)
, 0
,	/* F0_LAMBDA1340: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1340),1)
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_ParseLib_46_43_43_43))
, useLabel(CF_HandParse_46nName)
, useLabel(CF_HandParse_46cexp)
, CAPTAG(useLabel(FN_LAMBDA1339),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1641)
,	/* FN_LAMBDA1339: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1641: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA1339: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1339),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1642)
,	/* FN_HandParse_46constnames: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(18,0,0)
,	/* CT_v1642: (byte 0) */
  HW(3,0)
, 0
,	/* CF_HandParse_46constnames: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46constnames))
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_ParseLib_46sepby1))
, useLabel(CF_HandParse_46constName)
, bytes2word(0,0,0,0)
, useLabel(CT_v1643)
,	/* FN_HandParse_46vars: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1643: (byte 0) */
  HW(2,0)
, 0
,	/* CF_HandParse_46vars: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46vars))
, VAPTAG(useLabel(FN_ParseLib_46many))
, useLabel(CF_HandParse_46disname)
, bytes2word(0,0,0,0)
, useLabel(CT_v1644)
,	/* FN_HandParse_46haskell: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1644: (byte 0) */
  HW(1,0)
, 0
,	/* CF_HandParse_46haskell: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46haskell))
, CAPTAG(useLabel(FN_LAMBDA1342),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1660)
,	/* FN_LAMBDA1342: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1657: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1648: (byte 2) */
  bytes2word(107,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,31,TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(66),BOT(66),TOP(62),BOT(62))
,	/* v1659: (byte 4) */
  bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
,	/* v1656: (byte 4) */
  bytes2word(POP_I1,JUMP,19,0)
, bytes2word(UNPACK,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_P1,4)
, bytes2word(HEAP_CVAL_N1,2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
,	/* v1653: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v1649: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v1645: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
,	/* CT_v1660: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1342: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1342),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1661)
,	/* FN_HandParse_46c: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1661: (byte 0) */
  HW(1,0)
, 0
,	/* CF_HandParse_46c: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46c))
, CAPTAG(useLabel(FN_LAMBDA1343),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1677)
,	/* FN_LAMBDA1343: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1674: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1665: (byte 2) */
  bytes2word(107,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,31,TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
, bytes2word(TOP(62),BOT(62),TOP(66),BOT(66))
,	/* v1676: (byte 4) */
  bytes2word(TOP(62),BOT(62),TOP(62),BOT(62))
,	/* v1673: (byte 4) */
  bytes2word(POP_I1,JUMP,19,0)
, bytes2word(UNPACK,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_P1,4)
, bytes2word(HEAP_CVAL_N1,2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
,	/* v1670: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v1666: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v1662: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
,	/* CT_v1677: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1343: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1343),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1678)
,	/* FN_HandParse_46decl: (byte 0) */
  bytes2word(NEEDHEAP_P1,72,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,8,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_N1,1,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,2,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_P1,12,HEAP_CVAL_P1)
, bytes2word(13,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_N1,2,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,2,HEAP_CVAL_P1)
, bytes2word(16,HEAP_CVAL_P1,12,HEAP_CVAL_P1)
, bytes2word(17,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(18,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_IN3,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_P1,19)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_P1,20)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,21)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,15)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,22,HEAP_OFF_N1,18)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,22)
, bytes2word(HEAP_OFF_N1,35,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,22,HEAP_OFF_N1,52)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,22)
, bytes2word(HEAP_OFF_N1,62,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,22,HEAP_CVAL_P1)
, bytes2word(23,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(6,0,0)
, CONSTR(4,0,0)
, CONSTR(5,0,0)
,	/* CT_v1678: (byte 0) */
  HW(21,0)
, 0
,	/* CF_HandParse_46decl: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46decl))
, CAPTAG(useLabel(FN_LAMBDA1344),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46Monad_46ParseLib_46Parser_46return)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, useLabel(CF_HandParse_46haskell)
, CAPTAG(useLabel(FN_LAMBDA1345),1)
, useLabel(CF_HandParse_46c)
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_LAMBDA1346))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, useLabel(CF_HandParse_46disname)
, CAPTAG(useLabel(FN_LAMBDA1352),1)
, VAPTAG(useLabel(FN_ParseLib_46cut))
, VAPTAG(useLabel(FN_LAMBDA1353))
, useLabel(CF_HandParse_46tType)
, CAPTAG(useLabel(FN_LAMBDA1355),1)
, VAPTAG(useLabel(FN_LAMBDA1356))
, useLabel(CF_HandParse_46nName)
, CAPTAG(useLabel(FN_LAMBDA1357),1)
, VAPTAG(useLabel(FN_ParseLib_46_43_43_43))
, useLabel(CF_HandParse_46procspec)
, bytes2word(1,0,0,1)
, useLabel(CT_v1679)
,	/* FN_LAMBDA1357: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(5,1,0)
,	/* CT_v1679: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA1357: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1357),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1681)
,	/* FN_LAMBDA1356: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1680)
,	/* CT_v1681: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1356: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1356))
, bytes2word(1,0,0,1)
, useLabel(CT_v1682)
,	/* FN_LAMBDA1355: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_N1,2)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(12,0,0)
, CONSTR(11,0,0)
,	/* CT_v1682: (byte 0) */
  HW(5,1)
, 0
,	/* F0_LAMBDA1355: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1355),1)
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_ParseLib_46bracket))
, useLabel(CF_HandParse_46constnames)
, CAPTAG(useLabel(FN_LAMBDA1354),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1683)
,	/* FN_LAMBDA1354: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(4,2,0)
,	/* CT_v1683: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA1354: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1354),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1685)
,	/* FN_LAMBDA1353: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1684)
,	/* CT_v1685: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1353: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1353))
, bytes2word(1,0,0,1)
, useLabel(CT_v1686)
,	/* FN_LAMBDA1352: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1686: (byte 0) */
  HW(8,1)
, 0
,	/* F0_LAMBDA1352: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1352),1)
, VAPTAG(useLabel(FN_LAMBDA1347))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46show))
, useLabel(CF_Prelude_46Show_46Prelude_46Char)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, useLabel(CF_HandParse_46vars)
, CAPTAG(useLabel(FN_LAMBDA1351),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1687)
,	/* FN_LAMBDA1351: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,14,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(19,0,0)
,	/* CT_v1687: (byte 0) */
  HW(8,2)
, 0
,	/* F0_LAMBDA1351: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1351),2)
, VAPTAG(useLabel(FN_ParseLib_46tok))
, VAPTAG(useLabel(FN_LAMBDA1348))
, VAPTAG(useLabel(FN_ParseLib_46elserror))
, VAPTAG(useLabel(FN_LAMBDA1349))
, useLabel(CF_HandParse_46dis)
, CAPTAG(useLabel(FN_LAMBDA1350),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46_62_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1688)
,	/* FN_LAMBDA1350: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(3,3,0)
,	/* CT_v1688: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA1350: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1350),3)
, VAPTAG(useLabel(FN_Prelude_46Monad_46ParseLib_46Parser_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1690)
,	/* FN_LAMBDA1349: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1689)
,	/* CT_v1690: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1349: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1349))
, bytes2word(0,0,0,0)
, useLabel(CT_v1692)
,	/* FN_LAMBDA1348: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1691)
,	/* CT_v1692: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1348: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1348))
, bytes2word(0,0,0,0)
, useLabel(CT_v1694)
,	/* FN_LAMBDA1347: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1693)
,	/* CT_v1694: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1347: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1347))
, bytes2word(0,0,0,0)
, useLabel(CT_v1696)
,	/* FN_LAMBDA1346: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1695)
,	/* CT_v1696: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1346: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1346))
, bytes2word(1,0,0,1)
, useLabel(CT_v1697)
,	/* FN_LAMBDA1345: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,1,0)
,	/* CT_v1697: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1345: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1345),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1698)
,	/* FN_LAMBDA1344: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v1698: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1344: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1344),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1699)
,	/* FN_HandParse_46decls: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1699: (byte 0) */
  HW(2,0)
, 0
,	/* CF_HandParse_46decls: (byte 0) */
  VAPTAG(useLabel(FN_HandParse_46decls))
, VAPTAG(useLabel(FN_ParseLib_46many))
, useLabel(CF_HandParse_46decl)
, bytes2word(0,0,0,0)
, useLabel(CT_v1700)
,};
Node FN_HandParse_46gcParse[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1700: (byte 0) */
  HW(5,0)
, 0
,};
Node CF_HandParse_46gcParse[] = {
  VAPTAG(useLabel(FN_HandParse_46gcParse))
, CAPTAG(useLabel(FN_ParseLib_46papply),1)
, useLabel(CF_HandParse_46decls)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46head)
, useLabel(F0_Prelude_46fst)
,	/* ST_v1438: (byte 0) */
  bytes2word(101,120,112,101)
, bytes2word(99,116,101,100)
, bytes2word(32,34,99,116)
, bytes2word(121,112,101,34)
, bytes2word(32,105,110,32)
, bytes2word(60,100,101,99)
, bytes2word(108,97,114,101)
, bytes2word(62,32,98,108)
,	/* ST_v1628: (byte 4) */
  bytes2word(111,99,107,0)
, bytes2word(101,120,112,101)
, bytes2word(99,116,101,100)
, bytes2word(32,39,58,58)
, bytes2word(39,32,97,102)
, bytes2word(116,101,114,32)
, bytes2word(37,102,117,110)
,	/* ST_v1596: (byte 2) */
  bytes2word(32,0,101,120)
, bytes2word(112,101,99,116)
, bytes2word(101,100,32,50)
, bytes2word(110,100,32,60)
, bytes2word(67,99,111,100)
, bytes2word(101,62,32,105)
, bytes2word(110,32,37,102)
, bytes2word(97,105,108,32)
, bytes2word(100,101,99,108)
,	/* ST_v1598: (byte 1) */
  bytes2word(0,101,120,112)
, bytes2word(101,99,116,101)
, bytes2word(100,32,60,67)
, bytes2word(99,111,100,101)
, bytes2word(62,32,105,110)
, bytes2word(32,37,102,97)
, bytes2word(105,108,32,100)
,	/* ST_v1432: (byte 4) */
  bytes2word(101,99,108,0)
, bytes2word(101,120,112,101)
, bytes2word(99,116,101,100)
, bytes2word(32,60,100,105)
, bytes2word(115,62,32,105)
, bytes2word(110,32,60,100)
, bytes2word(101,99,108,97)
, bytes2word(114,101,62,32)
, bytes2word(98,108,111,99)
,	/* ST_v1695: (byte 2) */
  bytes2word(107,0,101,120)
, bytes2word(112,101,99,116)
, bytes2word(101,100,32,60)
, bytes2word(100,105,115,110)
, bytes2word(97,109,101,62)
, bytes2word(32,97,102,116)
, bytes2word(101,114,32,37)
,	/* ST_v1528: (byte 4) */
  bytes2word(100,105,115,0)
, bytes2word(101,120,112,101)
, bytes2word(99,116,101,100)
, bytes2word(32,60,102,114)
, bytes2word(101,101,105,110)
, bytes2word(103,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,62,32)
, bytes2word(105,110,32,37)
, bytes2word(37,70,111,114)
, bytes2word(101,105,103,110)
,	/* ST_v1630: (byte 1) */
  bytes2word(0,101,120,112)
, bytes2word(101,99,116,101)
, bytes2word(100,32,60,102)
, bytes2word(117,110,99,116)
, bytes2word(105,111,110,32)
, bytes2word(110,97,109,101)
, bytes2word(62,32,97,102)
, bytes2word(116,101,114,32)
, bytes2word(37,102,117,110)
,	/* ST_v1434: (byte 1) */
  bytes2word(0,101,120,112)
, bytes2word(101,99,116,101)
, bytes2word(100,32,60,105)
, bytes2word(110,62,32,105)
, bytes2word(110,32,60,100)
, bytes2word(101,99,108,97)
, bytes2word(114,101,32,46)
, bytes2word(46,46,32,105)
, bytes2word(110,32,46,46)
, bytes2word(46,62,32,98)
, bytes2word(108,111,99,107)
,	/* ST_v1680: (byte 1) */
  bytes2word(0,101,120,112)
, bytes2word(101,99,116,101)
, bytes2word(100,32,60,110)
, bytes2word(97,109,101,62)
, bytes2word(32,97,102,116)
, bytes2word(101,114,32,37)
, bytes2word(112,114,101,102)
,	/* ST_v1684: (byte 3) */
  bytes2word(105,120,0,101)
, bytes2word(120,112,101,99)
, bytes2word(116,101,100,32)
, bytes2word(60,116,121,112)
, bytes2word(101,62,32,97)
, bytes2word(102,116,101,114)
, bytes2word(32,37,99,111)
,	/* ST_v1526: (byte 4) */
  bytes2word(110,115,116,0)
, bytes2word(101,120,112,101)
, bytes2word(99,116,101,100)
, bytes2word(32,60,118,97)
, bytes2word(114,105,97,98)
, bytes2word(108,101,62,32)
, bytes2word(105,110,32,37)
, bytes2word(37,70,111,114)
, bytes2word(101,105,103,110)
,	/* ST_v1522: (byte 1) */
  bytes2word(0,101,120,112)
, bytes2word(101,99,116,101)
, bytes2word(100,32,60,118)
, bytes2word(97,114,105,97)
, bytes2word(98,108,101,62)
, bytes2word(32,105,110,32)
, bytes2word(37,37,98,97)
, bytes2word(115,101,116,121)
, bytes2word(112,101,32,100)
,	/* ST_v1693: (byte 4) */
  bytes2word(101,99,108,0)
, bytes2word(101,120,112,101)
, bytes2word(99,116,101,100)
, bytes2word(32,60,118,97)
, bytes2word(114,115,62,32)
, bytes2word(97,102,116,101)
, bytes2word(114,32,37,100)
,	/* ST_v1691: (byte 4) */
  bytes2word(105,115,32,0)
, bytes2word(101,120,112,101)
, bytes2word(99,116,101,100)
, bytes2word(32,61,32,105)
, bytes2word(110,32,37,100)
, bytes2word(105,115,32,100)
, bytes2word(101,102,105,110)
, bytes2word(105,116,105,111)
,	/* ST_v1626: (byte 2) */
  bytes2word(110,0,101,120)
, bytes2word(112,101,99,116)
, bytes2word(101,100,32,118)
, bytes2word(97,108,105,100)
, bytes2word(32,116,121,112)
, bytes2word(101,32,105,110)
, bytes2word(32,37,102,117)
, bytes2word(110,32,100,101)
, bytes2word(99,108,97,114)
, bytes2word(97,116,105,111)
,	/* ST_v1436: (byte 2) */
  bytes2word(110,0,101,120)
, bytes2word(112,101,99,116)
, bytes2word(101,100,32,118)
, bytes2word(97,114,105,97)
, bytes2word(98,108,101,32)
, bytes2word(110,97,109,101)
, bytes2word(32,105,110,32)
, bytes2word(60,100,101,99)
, bytes2word(108,97,114,101)
, bytes2word(62,32,98,108)
,	/* ST_v1606: (byte 4) */
  bytes2word(111,99,107,0)
, bytes2word(105,109,112,114)
, bytes2word(111,112,101,114)
, bytes2word(108,121,32,102)
, bytes2word(111,114,109,101)
, bytes2word(100,32,37,99)
, bytes2word(97,108,108,32)
, bytes2word(115,101,99,116)
,	/* ST_v1573: (byte 4) */
  bytes2word(105,111,110,0)
, bytes2word(105,109,112,114)
, bytes2word(111,112,101,114)
, bytes2word(108,121,32,102)
, bytes2word(111,114,109,101)
, bytes2word(100,32,60,100)
, bytes2word(105,115,62,32)
, bytes2word(105,110,32,37)
, bytes2word(114,101,115,117)
, bytes2word(108,116,32,100)
,	/* ST_v1689: (byte 4) */
  bytes2word(101,99,108,0)
, bytes2word(105,110,118,97)
, bytes2word(108,105,100,32)
, bytes2word(114,104,115,32)
, bytes2word(111,102,32,37)
, bytes2word(100,105,115,32)
, bytes2word(100,101,102,105)
, bytes2word(110,105,116,105)
,	/* ST_v1551: (byte 3) */
  bytes2word(111,110,0,110)
, bytes2word(101,101,100,32)
, bytes2word(47,32,105,110)
, bytes2word(115,105,100,101)
, bytes2word(32,60,46,46)
, bytes2word(46,47,46,46)
,	/* ST_v1539: (byte 3) */
  bytes2word(46,62,0,110)
, bytes2word(101,101,100,32)
, bytes2word(47,32,105,110)
, bytes2word(115,105,100,101)
, bytes2word(32,60,60,46)
, bytes2word(46,46,47,46)
, bytes2word(46,46,62,62)
,	/* ST_v1545: (byte 1) */
  bytes2word(0,110,101,101)
, bytes2word(100,32,97,114)
, bytes2word(103,115,32,97)
, bytes2word(102,116,101,114)
, bytes2word(32,60,46,46)
, bytes2word(46,47,46,46)
,	/* ST_v1533: (byte 3) */
  bytes2word(46,62,0,110)
, bytes2word(101,101,100,32)
, bytes2word(97,114,103,115)
, bytes2word(32,97,102,116)
, bytes2word(101,114,32,60)
, bytes2word(60,46,46,46)
, bytes2word(47,46,46,46)
,	/* ST_v1547: (byte 3) */
  bytes2word(62,62,0,110)
, bytes2word(101,101,100,32)
, bytes2word(99,108,111,115)
, bytes2word(105,110,103,32)
, bytes2word(62,32,105,110)
, bytes2word(32,60,46,46)
, bytes2word(46,47,46,46)
,	/* ST_v1535: (byte 3) */
  bytes2word(46,62,0,110)
, bytes2word(101,101,100,32)
, bytes2word(99,108,111,115)
, bytes2word(105,110,103,32)
, bytes2word(62,62,32,105)
, bytes2word(110,32,60,60)
, bytes2word(46,46,46,47)
, bytes2word(46,46,46,62)
,	/* ST_v1549: (byte 2) */
  bytes2word(62,0,110,101)
, bytes2word(101,100,32,110)
, bytes2word(97,109,101,32)
, bytes2word(105,110,115,105)
, bytes2word(100,101,32,60)
, bytes2word(46,46,46,47)
, bytes2word(46,46,46,62)
,	/* ST_v1537: (byte 1) */
  bytes2word(0,110,101,101)
, bytes2word(100,32,110,97)
, bytes2word(109,101,32,105)
, bytes2word(110,115,105,100)
, bytes2word(101,32,60,60)
, bytes2word(46,46,46,47)
, bytes2word(46,46,46,62)
, bytes2word(62,0,0,0)
,};
