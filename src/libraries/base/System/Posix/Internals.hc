#include "newmacros.h"
#include "runtime.h"

#define CT_v1296	((void*)startLabel+24)
#define CT_v1297	((void*)startLabel+60)
#define CT_v1298	((void*)startLabel+96)
#define CT_v1299	((void*)startLabel+132)
#define CT_v1300	((void*)startLabel+168)
#define CT_v1301	((void*)startLabel+216)
#define FN_System_46Posix_46Internals_46ptr_95c_95cc_35	((void*)startLabel+248)
#define CT_v1302	((void*)startLabel+264)
#define F0_System_46Posix_46Internals_46ptr_95c_95cc_35	((void*)startLabel+272)
#define CT_v1303	((void*)startLabel+296)
#define FN_System_46Posix_46Internals_46poke_95c_95lflag_35	((void*)startLabel+328)
#define CT_v1304	((void*)startLabel+348)
#define F0_System_46Posix_46Internals_46poke_95c_95lflag_35	((void*)startLabel+356)
#define CT_v1305	((void*)startLabel+380)
#define FN_System_46Posix_46Internals_46c_95lflag_35	((void*)startLabel+408)
#define CT_v1306	((void*)startLabel+424)
#define F0_System_46Posix_46Internals_46c_95lflag_35	((void*)startLabel+432)
#define CT_v1307	((void*)startLabel+456)
#define CT_v1308	((void*)startLabel+500)
#define CT_v1309	((void*)startLabel+536)
#define CT_v1310	((void*)startLabel+572)
#define CT_v1311	((void*)startLabel+608)
#define CT_v1312	((void*)startLabel+644)
#define CT_v1313	((void*)startLabel+680)
#define CT_v1314	((void*)startLabel+716)
#define CT_v1315	((void*)startLabel+752)
#define CT_v1316	((void*)startLabel+788)
#define CT_v1317	((void*)startLabel+824)
#define CT_v1318	((void*)startLabel+860)
#define CT_v1319	((void*)startLabel+896)
#define CT_v1320	((void*)startLabel+932)
#define CT_v1321	((void*)startLabel+968)
#define FN_System_46Posix_46Internals_46st_95ino_35	((void*)startLabel+988)
#define CT_v1322	((void*)startLabel+1004)
#define F0_System_46Posix_46Internals_46st_95ino_35	((void*)startLabel+1012)
#define CT_v1323	((void*)startLabel+1036)
#define FN_System_46Posix_46Internals_46st_95dev_35	((void*)startLabel+1064)
#define CT_v1324	((void*)startLabel+1080)
#define F0_System_46Posix_46Internals_46st_95dev_35	((void*)startLabel+1088)
#define CT_v1325	((void*)startLabel+1112)
#define FN_System_46Posix_46Internals_46st_95mode_35	((void*)startLabel+1140)
#define CT_v1326	((void*)startLabel+1156)
#define F0_System_46Posix_46Internals_46st_95mode_35	((void*)startLabel+1164)
#define CT_v1327	((void*)startLabel+1188)
#define FN_System_46Posix_46Internals_46st_95size_35	((void*)startLabel+1216)
#define CT_v1328	((void*)startLabel+1232)
#define F0_System_46Posix_46Internals_46st_95size_35	((void*)startLabel+1240)
#define CT_v1329	((void*)startLabel+1264)
#define FN_System_46Posix_46Internals_46st_95mtime_35	((void*)startLabel+1292)
#define CT_v1330	((void*)startLabel+1308)
#define F0_System_46Posix_46Internals_46st_95mtime_35	((void*)startLabel+1316)
#define CT_v1331	((void*)startLabel+1340)
#define CT_v1332	((void*)startLabel+1384)
#define CT_v1333	((void*)startLabel+1420)
#define CT_v1334	((void*)startLabel+1468)
#define CT_v1335	((void*)startLabel+1516)
#define CT_v1336	((void*)startLabel+1564)
#define CT_v1337	((void*)startLabel+1612)
#define CT_v1338	((void*)startLabel+1660)
#define CT_v1339	((void*)startLabel+1708)
#define CT_v1340	((void*)startLabel+1756)
#define CT_v1341	((void*)startLabel+1804)
#define CT_v1342	((void*)startLabel+1852)
#define CT_v1343	((void*)startLabel+1900)
#define CT_v1344	((void*)startLabel+1936)
#define CT_v1345	((void*)startLabel+1972)
#define CT_v1346	((void*)startLabel+2008)
#define CT_v1347	((void*)startLabel+2044)
#define CT_v1348	((void*)startLabel+2080)
#define CT_v1349	((void*)startLabel+2116)
#define CT_v1350	((void*)startLabel+2152)
#define CT_v1351	((void*)startLabel+2188)
#define CT_v1352	((void*)startLabel+2224)
#define FN_System_46Posix_46Internals_46c_95waitpid_35	((void*)startLabel+2248)
#define CT_v1353	((void*)startLabel+2272)
#define F0_System_46Posix_46Internals_46c_95waitpid_35	((void*)startLabel+2280)
#define CT_v1354	((void*)startLabel+2304)
#define FN_System_46Posix_46Internals_46c_95utime_35	((void*)startLabel+2336)
#define CT_v1355	((void*)startLabel+2356)
#define F0_System_46Posix_46Internals_46c_95utime_35	((void*)startLabel+2364)
#define CT_v1356	((void*)startLabel+2388)
#define FN_System_46Posix_46Internals_46c_95tcsetattr_35	((void*)startLabel+2420)
#define CT_v1357	((void*)startLabel+2444)
#define F0_System_46Posix_46Internals_46c_95tcsetattr_35	((void*)startLabel+2452)
#define CT_v1358	((void*)startLabel+2476)
#define FN_System_46Posix_46Internals_46c_95tcgetattr_35	((void*)startLabel+2508)
#define CT_v1359	((void*)startLabel+2528)
#define F0_System_46Posix_46Internals_46c_95tcgetattr_35	((void*)startLabel+2536)
#define CT_v1360	((void*)startLabel+2560)
#define FN_System_46Posix_46Internals_46c_95sigprocmask_35	((void*)startLabel+2592)
#define CT_v1361	((void*)startLabel+2616)
#define F0_System_46Posix_46Internals_46c_95sigprocmask_35	((void*)startLabel+2624)
#define CT_v1362	((void*)startLabel+2648)
#define FN_System_46Posix_46Internals_46c_95sigaddset_35	((void*)startLabel+2680)
#define CT_v1363	((void*)startLabel+2700)
#define F0_System_46Posix_46Internals_46c_95sigaddset_35	((void*)startLabel+2708)
#define CT_v1364	((void*)startLabel+2732)
#define FN_System_46Posix_46Internals_46c_95sigemptyset_35	((void*)startLabel+2760)
#define CT_v1365	((void*)startLabel+2776)
#define F0_System_46Posix_46Internals_46c_95sigemptyset_35	((void*)startLabel+2784)
#define CT_v1366	((void*)startLabel+2808)
#define FN_System_46Posix_46Internals_46c_95pipe_35	((void*)startLabel+2836)
#define CT_v1367	((void*)startLabel+2852)
#define F0_System_46Posix_46Internals_46c_95pipe_35	((void*)startLabel+2860)
#define CT_v1368	((void*)startLabel+2884)
#define FN_System_46Posix_46Internals_46c_95mkfifo_35	((void*)startLabel+2916)
#define CT_v1369	((void*)startLabel+2936)
#define F0_System_46Posix_46Internals_46c_95mkfifo_35	((void*)startLabel+2944)
#define CT_v1370	((void*)startLabel+2968)
#define FN_System_46Posix_46Internals_46c_95link_35	((void*)startLabel+3000)
#define CT_v1371	((void*)startLabel+3020)
#define F0_System_46Posix_46Internals_46c_95link_35	((void*)startLabel+3028)
#define CT_v1372	((void*)startLabel+3052)
#define FN_System_46Posix_46Internals_46c_95fork_35	((void*)startLabel+3080)
#define CT_v1373	((void*)startLabel+3096)
#define F0_System_46Posix_46Internals_46c_95fork_35	((void*)startLabel+3104)
#define CT_v1374	((void*)startLabel+3128)
#define FN_System_46Posix_46Internals_46c_95fcntl_95lock_35	((void*)startLabel+3160)
#define CT_v1375	((void*)startLabel+3184)
#define F0_System_46Posix_46Internals_46c_95fcntl_95lock_35	((void*)startLabel+3192)
#define CT_v1376	((void*)startLabel+3216)
#define FN_System_46Posix_46Internals_46c_95fcntl_95write_35	((void*)startLabel+3248)
#define CT_v1377	((void*)startLabel+3272)
#define F0_System_46Posix_46Internals_46c_95fcntl_95write_35	((void*)startLabel+3280)
#define CT_v1378	((void*)startLabel+3304)
#define FN_System_46Posix_46Internals_46c_95fcntl_95read_35	((void*)startLabel+3336)
#define CT_v1379	((void*)startLabel+3356)
#define F0_System_46Posix_46Internals_46c_95fcntl_95read_35	((void*)startLabel+3364)
#define CT_v1380	((void*)startLabel+3388)
#define FN_System_46Posix_46Internals_46c_95getpid_35	((void*)startLabel+3416)
#define CT_v1381	((void*)startLabel+3432)
#define F0_System_46Posix_46Internals_46c_95getpid_35	((void*)startLabel+3440)
#define CT_v1382	((void*)startLabel+3464)
#define FN_System_46Posix_46Internals_46c_95unlink_35	((void*)startLabel+3492)
#define CT_v1383	((void*)startLabel+3508)
#define F0_System_46Posix_46Internals_46c_95unlink_35	((void*)startLabel+3516)
#define CT_v1384	((void*)startLabel+3540)
#define FN_System_46Posix_46Internals_46c_95ftruncate_35	((void*)startLabel+3572)
#define CT_v1385	((void*)startLabel+3592)
#define F0_System_46Posix_46Internals_46c_95ftruncate_35	((void*)startLabel+3600)
#define CT_v1386	((void*)startLabel+3624)
#define FN_System_46Posix_46Internals_46c_95safe_95write_35	((void*)startLabel+3656)
#define CT_v1387	((void*)startLabel+3680)
#define F0_System_46Posix_46Internals_46c_95safe_95write_35	((void*)startLabel+3688)
#define CT_v1388	((void*)startLabel+3712)
#define FN_System_46Posix_46Internals_46c_95write_35	((void*)startLabel+3744)
#define CT_v1389	((void*)startLabel+3768)
#define F0_System_46Posix_46Internals_46c_95write_35	((void*)startLabel+3776)
#define CT_v1390	((void*)startLabel+3800)
#define FN_System_46Posix_46Internals_46c_95umask_35	((void*)startLabel+3828)
#define CT_v1391	((void*)startLabel+3844)
#define F0_System_46Posix_46Internals_46c_95umask_35	((void*)startLabel+3852)
#define CT_v1392	((void*)startLabel+3876)
#define FN_System_46Posix_46Internals_46c_95stat_35	((void*)startLabel+3908)
#define CT_v1393	((void*)startLabel+3928)
#define F0_System_46Posix_46Internals_46c_95stat_35	((void*)startLabel+3936)
#define CT_v1394	((void*)startLabel+3960)
#define FN_System_46Posix_46Internals_46c_95safe_95read_35	((void*)startLabel+3992)
#define CT_v1395	((void*)startLabel+4016)
#define F0_System_46Posix_46Internals_46c_95safe_95read_35	((void*)startLabel+4024)
#define CT_v1396	((void*)startLabel+4048)
#define FN_System_46Posix_46Internals_46c_95read_35	((void*)startLabel+4080)
#define CT_v1397	((void*)startLabel+4104)
#define F0_System_46Posix_46Internals_46c_95read_35	((void*)startLabel+4112)
#define CT_v1398	((void*)startLabel+4136)
#define FN_System_46Posix_46Internals_46c_95open_35	((void*)startLabel+4168)
#define CT_v1399	((void*)startLabel+4192)
#define F0_System_46Posix_46Internals_46c_95open_35	((void*)startLabel+4200)
#define CT_v1400	((void*)startLabel+4224)
#define FN_System_46Posix_46Internals_46lstat_35	((void*)startLabel+4256)
#define CT_v1401	((void*)startLabel+4276)
#define F0_System_46Posix_46Internals_46lstat_35	((void*)startLabel+4284)
#define CT_v1402	((void*)startLabel+4308)
#define FN_System_46Posix_46Internals_46c_95lseek_35	((void*)startLabel+4340)
#define CT_v1403	((void*)startLabel+4364)
#define F0_System_46Posix_46Internals_46c_95lseek_35	((void*)startLabel+4372)
#define CT_v1404	((void*)startLabel+4396)
#define FN_System_46Posix_46Internals_46c_95isatty_35	((void*)startLabel+4424)
#define CT_v1405	((void*)startLabel+4440)
#define F0_System_46Posix_46Internals_46c_95isatty_35	((void*)startLabel+4448)
#define CT_v1406	((void*)startLabel+4472)
#define FN_System_46Posix_46Internals_46c_95fstat_35	((void*)startLabel+4504)
#define CT_v1407	((void*)startLabel+4524)
#define F0_System_46Posix_46Internals_46c_95fstat_35	((void*)startLabel+4532)
#define CT_v1408	((void*)startLabel+4556)
#define FN_System_46Posix_46Internals_46c_95dup2_35	((void*)startLabel+4588)
#define CT_v1409	((void*)startLabel+4608)
#define F0_System_46Posix_46Internals_46c_95dup2_35	((void*)startLabel+4616)
#define CT_v1410	((void*)startLabel+4640)
#define FN_System_46Posix_46Internals_46c_95dup_35	((void*)startLabel+4668)
#define CT_v1411	((void*)startLabel+4684)
#define F0_System_46Posix_46Internals_46c_95dup_35	((void*)startLabel+4692)
#define CT_v1412	((void*)startLabel+4716)
#define FN_System_46Posix_46Internals_46c_95creat_35	((void*)startLabel+4748)
#define CT_v1413	((void*)startLabel+4768)
#define F0_System_46Posix_46Internals_46c_95creat_35	((void*)startLabel+4776)
#define CT_v1414	((void*)startLabel+4800)
#define FN_System_46Posix_46Internals_46c_95close_35	((void*)startLabel+4828)
#define CT_v1415	((void*)startLabel+4844)
#define F0_System_46Posix_46Internals_46c_95close_35	((void*)startLabel+4852)
#define CT_v1416	((void*)startLabel+4876)
#define FN_System_46Posix_46Internals_46c_95chmod_35	((void*)startLabel+4908)
#define CT_v1417	((void*)startLabel+4928)
#define F0_System_46Posix_46Internals_46c_95chmod_35	((void*)startLabel+4936)
#define CT_v1418	((void*)startLabel+4960)
#define FN_System_46Posix_46Internals_46c_95access_35	((void*)startLabel+4992)
#define CT_v1419	((void*)startLabel+5012)
#define F0_System_46Posix_46Internals_46c_95access_35	((void*)startLabel+5020)
#define CT_v1420	((void*)startLabel+5044)
#define CT_v1421	((void*)startLabel+5108)
#define FN_LAMBDA1243	((void*)startLabel+5164)
#define CT_v1423	((void*)startLabel+5184)
#define CF_LAMBDA1243	((void*)startLabel+5192)
#define CT_v1424	((void*)startLabel+5248)
#define FN_LAMBDA1248	((void*)startLabel+5304)
#define CT_v1425	((void*)startLabel+5368)
#define F0_LAMBDA1248	((void*)startLabel+5376)
#define FN_LAMBDA1247	((void*)startLabel+5444)
#define CT_v1426	((void*)startLabel+5468)
#define F0_LAMBDA1247	((void*)startLabel+5476)
#define FN_LAMBDA1246	((void*)startLabel+5496)
#define v1427	((void*)startLabel+5509)
#define v1429	((void*)startLabel+5527)
#define CT_v1431	((void*)startLabel+5540)
#define F0_LAMBDA1246	((void*)startLabel+5548)
#define FN_LAMBDA1245	((void*)startLabel+5588)
#define CT_v1433	((void*)startLabel+5608)
#define CF_LAMBDA1245	((void*)startLabel+5616)
#define FN_LAMBDA1244	((void*)startLabel+5628)
#define CT_v1435	((void*)startLabel+5648)
#define CF_LAMBDA1244	((void*)startLabel+5656)
#define CT_v1436	((void*)startLabel+5692)
#define FN_LAMBDA1258	((void*)startLabel+5732)
#define CT_v1437	((void*)startLabel+5784)
#define F0_LAMBDA1258	((void*)startLabel+5792)
#define FN_LAMBDA1257	((void*)startLabel+5852)
#define CT_v1438	((void*)startLabel+5876)
#define F0_LAMBDA1257	((void*)startLabel+5884)
#define FN_LAMBDA1256	((void*)startLabel+5920)
#define CT_v1439	((void*)startLabel+6044)
#define F0_LAMBDA1256	((void*)startLabel+6052)
#define FN_LAMBDA1255	((void*)startLabel+6140)
#define CT_v1440	((void*)startLabel+6224)
#define F0_LAMBDA1255	((void*)startLabel+6232)
#define FN_LAMBDA1254	((void*)startLabel+6304)
#define CT_v1442	((void*)startLabel+6324)
#define CF_LAMBDA1254	((void*)startLabel+6332)
#define FN_LAMBDA1253	((void*)startLabel+6344)
#define CT_v1444	((void*)startLabel+6364)
#define CF_LAMBDA1253	((void*)startLabel+6372)
#define FN_LAMBDA1252	((void*)startLabel+6384)
#define CT_v1445	((void*)startLabel+6404)
#define CF_LAMBDA1252	((void*)startLabel+6412)
#define FN_LAMBDA1251	((void*)startLabel+6424)
#define CT_v1447	((void*)startLabel+6444)
#define CF_LAMBDA1251	((void*)startLabel+6452)
#define FN_LAMBDA1250	((void*)startLabel+6464)
#define CT_v1449	((void*)startLabel+6484)
#define CF_LAMBDA1250	((void*)startLabel+6492)
#define FN_LAMBDA1249	((void*)startLabel+6504)
#define CT_v1450	((void*)startLabel+6524)
#define CF_LAMBDA1249	((void*)startLabel+6532)
#define CT_v1451	((void*)startLabel+6568)
#define FN_LAMBDA1263	((void*)startLabel+6604)
#define CT_v1452	((void*)startLabel+6628)
#define F0_LAMBDA1263	((void*)startLabel+6636)
#define FN_LAMBDA1262	((void*)startLabel+6668)
#define CT_v1453	((void*)startLabel+6732)
#define F0_LAMBDA1262	((void*)startLabel+6740)
#define FN_LAMBDA1261	((void*)startLabel+6804)
#define CT_v1454	((void*)startLabel+6888)
#define F0_LAMBDA1261	((void*)startLabel+6896)
#define FN_LAMBDA1260	((void*)startLabel+6952)
#define v1455	((void*)startLabel+6988)
#define v1457	((void*)startLabel+7036)
#define CT_v1459	((void*)startLabel+7052)
#define F0_LAMBDA1260	((void*)startLabel+7060)
#define FN_LAMBDA1259	((void*)startLabel+7116)
#define CT_v1461	((void*)startLabel+7136)
#define CF_LAMBDA1259	((void*)startLabel+7144)
#define CT_v1462	((void*)startLabel+7176)
#define FN_LAMBDA1265	((void*)startLabel+7208)
#define CT_v1463	((void*)startLabel+7232)
#define F0_LAMBDA1265	((void*)startLabel+7240)
#define FN_LAMBDA1264	((void*)startLabel+7268)
#define CT_v1464	((void*)startLabel+7316)
#define F0_LAMBDA1264	((void*)startLabel+7324)
#define CT_v1465	((void*)startLabel+7396)
#define FN_LAMBDA1269	((void*)startLabel+7432)
#define CT_v1466	((void*)startLabel+7456)
#define F0_LAMBDA1269	((void*)startLabel+7464)
#define FN_LAMBDA1268	((void*)startLabel+7496)
#define CT_v1467	((void*)startLabel+7528)
#define F0_LAMBDA1268	((void*)startLabel+7536)
#define FN_LAMBDA1267	((void*)startLabel+7564)
#define v1468	((void*)startLabel+7600)
#define v1470	((void*)startLabel+7648)
#define CT_v1472	((void*)startLabel+7664)
#define F0_LAMBDA1267	((void*)startLabel+7672)
#define FN_LAMBDA1266	((void*)startLabel+7728)
#define CT_v1474	((void*)startLabel+7748)
#define CF_LAMBDA1266	((void*)startLabel+7756)
#define CT_v1475	((void*)startLabel+7780)
#define CT_v1476	((void*)startLabel+7844)
#define FN_LAMBDA1273	((void*)startLabel+7896)
#define CT_v1477	((void*)startLabel+7968)
#define F0_LAMBDA1273	((void*)startLabel+7976)
#define FN_LAMBDA1272	((void*)startLabel+8024)
#define v1478	((void*)startLabel+8040)
#define v1480	((void*)startLabel+8050)
#define v1482	((void*)startLabel+8059)
#define v1484	((void*)startLabel+8070)
#define CT_v1486	((void*)startLabel+8100)
#define F0_LAMBDA1272	((void*)startLabel+8108)
#define FN_LAMBDA1271	((void*)startLabel+8136)
#define CT_v1488	((void*)startLabel+8156)
#define CF_LAMBDA1271	((void*)startLabel+8164)
#define FN_LAMBDA1270	((void*)startLabel+8176)
#define CT_v1490	((void*)startLabel+8196)
#define CF_LAMBDA1270	((void*)startLabel+8204)
#define CT_v1491	((void*)startLabel+8240)
#define FN_LAMBDA1275	((void*)startLabel+8268)
#define CT_v1493	((void*)startLabel+8288)
#define CF_LAMBDA1275	((void*)startLabel+8296)
#define FN_LAMBDA1274	((void*)startLabel+8308)
#define CT_v1495	((void*)startLabel+8328)
#define CF_LAMBDA1274	((void*)startLabel+8336)
#define CT_v1496	((void*)startLabel+8372)
#define FN_LAMBDA1277	((void*)startLabel+8408)
#define v1497	((void*)startLabel+8425)
#define v1499	((void*)startLabel+8461)
#define v1501	((void*)startLabel+8477)
#define v1503	((void*)startLabel+8495)
#define v1505	((void*)startLabel+8508)
#define CT_v1507	((void*)startLabel+8540)
#define F0_LAMBDA1277	((void*)startLabel+8548)
#define FN_LAMBDA1276	((void*)startLabel+8612)
#define CT_v1509	((void*)startLabel+8632)
#define CF_LAMBDA1276	((void*)startLabel+8640)
#define CT_v1510	((void*)startLabel+8672)
#define FN_LAMBDA1282	((void*)startLabel+8712)
#define CT_v1511	((void*)startLabel+8764)
#define F0_LAMBDA1282	((void*)startLabel+8772)
#define FN_LAMBDA1281	((void*)startLabel+8832)
#define CT_v1512	((void*)startLabel+8856)
#define F0_LAMBDA1281	((void*)startLabel+8864)
#define FN_LAMBDA1280	((void*)startLabel+8896)
#define CT_v1513	((void*)startLabel+8920)
#define F0_LAMBDA1280	((void*)startLabel+8928)
#define FN_LAMBDA1279	((void*)startLabel+8960)
#define CT_v1514	((void*)startLabel+8988)
#define F0_LAMBDA1279	((void*)startLabel+8996)
#define FN_LAMBDA1278	((void*)startLabel+9012)
#define CT_v1515	((void*)startLabel+9032)
#define CF_LAMBDA1278	((void*)startLabel+9040)
#define CT_v1516	((void*)startLabel+9072)
#define FN_LAMBDA1283	((void*)startLabel+9104)
#define CT_v1520	((void*)startLabel+9120)
#define F0_LAMBDA1283	((void*)startLabel+9128)
#define CT_v1521	((void*)startLabel+9164)
#define FN_LAMBDA1286	((void*)startLabel+9204)
#define CT_v1522	((void*)startLabel+9228)
#define F0_LAMBDA1286	((void*)startLabel+9236)
#define FN_LAMBDA1285	((void*)startLabel+9268)
#define CT_v1523	((void*)startLabel+9312)
#define F0_LAMBDA1285	((void*)startLabel+9320)
#define FN_LAMBDA1284	((void*)startLabel+9368)
#define CT_v1525	((void*)startLabel+9388)
#define CF_LAMBDA1284	((void*)startLabel+9396)
#define CT_v1526	((void*)startLabel+9428)
#define FN_LAMBDA1290	((void*)startLabel+9468)
#define CT_v1527	((void*)startLabel+9524)
#define F0_LAMBDA1290	((void*)startLabel+9532)
#define FN_LAMBDA1289	((void*)startLabel+9592)
#define v1528	((void*)startLabel+9611)
#define CT_v1530	((void*)startLabel+9644)
#define F0_LAMBDA1289	((void*)startLabel+9652)
#define FN_LAMBDA1288	((void*)startLabel+9692)
#define CT_v1531	((void*)startLabel+9716)
#define F0_LAMBDA1288	((void*)startLabel+9724)
#define FN_LAMBDA1287	((void*)startLabel+9756)
#define CT_v1533	((void*)startLabel+9776)
#define CF_LAMBDA1287	((void*)startLabel+9784)
#define ST_v1508	((void*)startLabel+9788)
#define ST_v1487	((void*)startLabel+9872)
#define ST_v1473	((void*)startLabel+9947)
#define ST_v1460	((void*)startLabel+10022)
#define ST_v1432	((void*)startLabel+10097)
#define ST_v1489	((void*)startLabel+10172)
#define ST_v1494	((void*)startLabel+10182)
#define ST_v1532	((void*)startLabel+10189)
#define ST_v1524	((void*)startLabel+10198)
#define ST_v1422	((void*)startLabel+10207)
#define ST_v1434	((void*)startLabel+10222)
#define ST_v1446	((void*)startLabel+10239)
#define ST_v1448	((void*)startLabel+10249)
#define ST_v1441	((void*)startLabel+10261)
#define ST_v1443	((void*)startLabel+10273)
#define ST_v1492	((void*)startLabel+10283)
void FR_System_46Posix_46Internals_46sEEK_95END(void);
void FR_System_46Posix_46Internals_46sEEK_95SET(void);
void FR_System_46Posix_46Internals_46sEEK_95CUR(void);
void FR_System_46Posix_46Internals_46dEFAULT_95BUFFER_95SIZE(void);
void FR_System_46Posix_46Internals_46c_95s_95issock(void);
extern Node FN_Prelude_46Num_46NHC_46FFI_46CInt_46fromInteger[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46CInt_46_47_61[];
void FR_System_46Posix_46Internals_46ptr_95c_95cc_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
void FR_System_46Posix_46Internals_46poke_95c_95lflag_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
void FR_System_46Posix_46Internals_46c_95lflag_35(void);
void FR_System_46Posix_46Internals_46sizeof_95sigset_95t(void);
void FR_System_46Posix_46Internals_46sizeof_95termios(void);
void FR_System_46Posix_46Internals_46const_95fd_95cloexec(void);
void FR_System_46Posix_46Internals_46const_95f_95setfd(void);
void FR_System_46Posix_46Internals_46const_95f_95setfl(void);
void FR_System_46Posix_46Internals_46const_95f_95getfl(void);
void FR_System_46Posix_46Internals_46const_95sig_95setmask(void);
void FR_System_46Posix_46Internals_46const_95sig_95block(void);
void FR_System_46Posix_46Internals_46const_95sigttou(void);
void FR_System_46Posix_46Internals_46const_95vtime(void);
void FR_System_46Posix_46Internals_46const_95vmin(void);
void FR_System_46Posix_46Internals_46const_95icanon(void);
void FR_System_46Posix_46Internals_46const_95tcsanow(void);
void FR_System_46Posix_46Internals_46const_95echo(void);
void FR_System_46Posix_46Internals_46st_95ino_35(void);
void FR_System_46Posix_46Internals_46st_95dev_35(void);
void FR_System_46Posix_46Internals_46st_95mode_35(void);
void FR_System_46Posix_46Internals_46st_95size_35(void);
void FR_System_46Posix_46Internals_46st_95mtime_35(void);
void FR_System_46Posix_46Internals_46sizeof_95stat(void);
void FR_System_46Posix_46Internals_46c_95s_95isfifo(void);
void FR_System_46Posix_46Internals_46c_95s_95isdir(void);
void FR_System_46Posix_46Internals_46c_95s_95isblk(void);
void FR_System_46Posix_46Internals_46c_95s_95ischr(void);
void FR_System_46Posix_46Internals_46c_95s_95isreg(void);
void FR_System_46Posix_46Internals_46o_95BINARY(void);
void FR_System_46Posix_46Internals_46o_95NONBLOCK(void);
void FR_System_46Posix_46Internals_46o_95NOCTTY(void);
void FR_System_46Posix_46Internals_46o_95TRUNC(void);
void FR_System_46Posix_46Internals_46o_95EXCL(void);
void FR_System_46Posix_46Internals_46o_95CREAT(void);
void FR_System_46Posix_46Internals_46o_95APPEND(void);
void FR_System_46Posix_46Internals_46o_95RDWR(void);
void FR_System_46Posix_46Internals_46o_95WRONLY(void);
void FR_System_46Posix_46Internals_46o_95RDONLY(void);
void FR_System_46Posix_46Internals_46c_95waitpid_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
void FR_System_46Posix_46Internals_46c_95utime_35(void);
void FR_System_46Posix_46Internals_46c_95tcsetattr_35(void);
void FR_System_46Posix_46Internals_46c_95tcgetattr_35(void);
void FR_System_46Posix_46Internals_46c_95sigprocmask_35(void);
void FR_System_46Posix_46Internals_46c_95sigaddset_35(void);
void FR_System_46Posix_46Internals_46c_95sigemptyset_35(void);
void FR_System_46Posix_46Internals_46c_95pipe_35(void);
void FR_System_46Posix_46Internals_46c_95mkfifo_35(void);
void FR_System_46Posix_46Internals_46c_95link_35(void);
void FR_System_46Posix_46Internals_46c_95fork_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];
void FR_System_46Posix_46Internals_46c_95fcntl_95lock_35(void);
void FR_System_46Posix_46Internals_46c_95fcntl_95write_35(void);
void FR_System_46Posix_46Internals_46c_95fcntl_95read_35(void);
void FR_System_46Posix_46Internals_46c_95getpid_35(void);
void FR_System_46Posix_46Internals_46c_95unlink_35(void);
void FR_System_46Posix_46Internals_46c_95ftruncate_35(void);
void FR_System_46Posix_46Internals_46c_95safe_95write_35(void);
void FR_System_46Posix_46Internals_46c_95write_35(void);
void FR_System_46Posix_46Internals_46c_95umask_35(void);
void FR_System_46Posix_46Internals_46c_95stat_35(void);
void FR_System_46Posix_46Internals_46c_95safe_95read_35(void);
void FR_System_46Posix_46Internals_46c_95read_35(void);
void FR_System_46Posix_46Internals_46c_95open_35(void);
void FR_System_46Posix_46Internals_46lstat_35(void);
void FR_System_46Posix_46Internals_46c_95lseek_35(void);
void FR_System_46Posix_46Internals_46c_95isatty_35(void);
void FR_System_46Posix_46Internals_46c_95fstat_35(void);
void FR_System_46Posix_46Internals_46c_95dup2_35(void);
void FR_System_46Posix_46Internals_46c_95dup_35(void);
void FR_System_46Posix_46Internals_46c_95creat_35(void);
void FR_System_46Posix_46Internals_46c_95close_35(void);
void FR_System_46Posix_46Internals_46c_95chmod_35(void);
void FR_System_46Posix_46Internals_46c_95access_35(void);
extern Node FN_Foreign_46C_46Error_46throwErrnoIfMinus1_95[];
extern Node CF_Prelude_46Num_46NHC_46FFI_46CInt[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46_36[];
extern Node FN_Foreign_46C_46Error_46throwErrnoIfMinus1Retry[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46CInt_46_61_61[];
extern Node FN_Control_46Monad_46unless[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_Prelude_46fromIntegral[];
extern Node CF_Prelude_46Integral_46NHC_46FFI_46CInt[];
extern Node CF_Prelude_46Num_46NHC_46FFI_46CLong[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Data_46Bits_46Bits_46NHC_46FFI_46CInt_46_46_124_46[];
extern Node CF_Prelude_46otherwise[];
extern Node FN_Data_46Bits_46Bits_46NHC_46FFI_46CInt_46complement[];
extern Node FN_Data_46Bits_46Bits_46NHC_46FFI_46CInt_46_46_38_46[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Foreign_46Marshal_46Alloc_46allocaBytes[];
extern Node FN_Foreign_46C_46Error_46throwErrnoIfMinus1Retry_95[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node CF_NHC_46FFI_46nullPtr[];
extern Node CF_Data_46Bits_46Bits_46NHC_46PosixTypes_46CTcflag[];
extern Node FN_Prelude_46not[];
extern Node FN_Control_46Monad_46when[];
extern Node CF_Prelude_46Num_46Prelude_46Int[];
extern Node FN_NHC_46FFI_46plusPtr[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46Word8_46fromInteger[];
extern Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46Word8_46poke[];
extern Node FN_Data_46Bits_46Bits_46Prelude_46Num[];
extern Node FN_Data_46Bits_46_46_124_46[];
extern Node FN_Data_46Bits_46complement[];
extern Node FN_Data_46Bits_46_46_38_46[];
extern Node CF_Prelude_46Num_46NHC_46PosixTypes_46CTcflag[];
extern Node FN_Data_46Bits_46Bits_46NHC_46PosixTypes_46CTcflag_46_46_38_46[];
extern Node FN_Prelude_46Num_46NHC_46PosixTypes_46CTcflag_46fromInteger[];
extern Node FN_Prelude_46Eq_46NHC_46PosixTypes_46CTcflag_46_47_61[];
extern Node CF_Foreign_46C_46String_46withCString[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46_124_124[];
extern Node FN_Prelude_46ioError[];
extern Node CF_Prelude_46Integral_46NHC_46PosixTypes_46COff[];
extern Node CF_Prelude_46Num_46Prelude_46Integer[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v1296)
,};
Node FN_System_46Posix_46Internals_46sEEK_95END[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46sEEK_95END)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1296: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46sEEK_95END[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46sEEK_95END))
, bytes2word(0,0,0,0)
, useLabel(CT_v1297)
,};
Node FN_System_46Posix_46Internals_46sEEK_95SET[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46sEEK_95SET)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1297: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46sEEK_95SET[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46sEEK_95SET))
, bytes2word(0,0,0,0)
, useLabel(CT_v1298)
,};
Node FN_System_46Posix_46Internals_46sEEK_95CUR[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46sEEK_95CUR)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1298: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46sEEK_95CUR[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46sEEK_95CUR))
, bytes2word(0,0,0,0)
, useLabel(CT_v1299)
,};
Node FN_System_46Posix_46Internals_46dEFAULT_95BUFFER_95SIZE[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46dEFAULT_95BUFFER_95SIZE)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1299: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46dEFAULT_95BUFFER_95SIZE[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46dEFAULT_95BUFFER_95SIZE))
, bytes2word(1,0,0,1)
, useLabel(CT_v1300)
,};
Node FN_System_46Posix_46Internals_46c_95s_95issock[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46c_95s_95issock)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1300: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_System_46Posix_46Internals_46c_95s_95issock[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95s_95issock),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1301)
,};
Node FN_System_46Posix_46Internals_46s_95issock[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_CADR_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v1301: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_System_46Posix_46Internals_46s_95issock[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46s_95issock),1)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95s_95issock))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46CInt_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46CInt_46_47_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v1302)
,	/* FN_System_46Posix_46Internals_46ptr_95c_95cc_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46ptr_95c_95cc_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1302: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46Posix_46Internals_46ptr_95c_95cc_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46ptr_95c_95cc_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1303)
,};
Node FN_System_46Posix_46Internals_46ptr_95c_95cc[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1303: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46ptr_95c_95cc[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46ptr_95c_95cc))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46Posix_46Internals_46ptr_95c_95cc_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1304)
,	/* FN_System_46Posix_46Internals_46poke_95c_95lflag_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_System_46Posix_46Internals_46poke_95c_95lflag_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1304: (byte 0) */
  HW(0,2)
, 0
,	/* F0_System_46Posix_46Internals_46poke_95c_95lflag_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46poke_95c_95lflag_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v1305)
,};
Node FN_System_46Posix_46Internals_46poke_95c_95lflag[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1305: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46poke_95c_95lflag[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46poke_95c_95lflag))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_System_46Posix_46Internals_46poke_95c_95lflag_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v1306)
,	/* FN_System_46Posix_46Internals_46c_95lflag_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46c_95lflag_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1306: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46Posix_46Internals_46c_95lflag_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95lflag_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1307)
,};
Node FN_System_46Posix_46Internals_46c_95lflag[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1307: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95lflag[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95lflag))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46Posix_46Internals_46c_95lflag_35)
, bytes2word(0,0,0,0)
, useLabel(CT_v1308)
,};
Node FN_System_46Posix_46Internals_46sizeof_95sigset_95t[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46sizeof_95sigset_95t)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1308: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46sizeof_95sigset_95t[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46sizeof_95sigset_95t))
, bytes2word(0,0,0,0)
, useLabel(CT_v1309)
,};
Node FN_System_46Posix_46Internals_46sizeof_95termios[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46sizeof_95termios)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1309: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46sizeof_95termios[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46sizeof_95termios))
, bytes2word(0,0,0,0)
, useLabel(CT_v1310)
,};
Node FN_System_46Posix_46Internals_46const_95fd_95cloexec[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46const_95fd_95cloexec)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1310: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46const_95fd_95cloexec[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46const_95fd_95cloexec))
, bytes2word(0,0,0,0)
, useLabel(CT_v1311)
,};
Node FN_System_46Posix_46Internals_46const_95f_95setfd[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46const_95f_95setfd)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1311: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46const_95f_95setfd[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46const_95f_95setfd))
, bytes2word(0,0,0,0)
, useLabel(CT_v1312)
,};
Node FN_System_46Posix_46Internals_46const_95f_95setfl[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46const_95f_95setfl)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1312: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46const_95f_95setfl[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46const_95f_95setfl))
, bytes2word(0,0,0,0)
, useLabel(CT_v1313)
,};
Node FN_System_46Posix_46Internals_46const_95f_95getfl[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46const_95f_95getfl)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1313: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46const_95f_95getfl[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46const_95f_95getfl))
, bytes2word(0,0,0,0)
, useLabel(CT_v1314)
,};
Node FN_System_46Posix_46Internals_46const_95sig_95setmask[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46const_95sig_95setmask)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1314: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46const_95sig_95setmask[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46const_95sig_95setmask))
, bytes2word(0,0,0,0)
, useLabel(CT_v1315)
,};
Node FN_System_46Posix_46Internals_46const_95sig_95block[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46const_95sig_95block)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1315: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46const_95sig_95block[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46const_95sig_95block))
, bytes2word(0,0,0,0)
, useLabel(CT_v1316)
,};
Node FN_System_46Posix_46Internals_46const_95sigttou[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46const_95sigttou)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1316: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46const_95sigttou[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46const_95sigttou))
, bytes2word(0,0,0,0)
, useLabel(CT_v1317)
,};
Node FN_System_46Posix_46Internals_46const_95vtime[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46const_95vtime)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1317: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46const_95vtime[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46const_95vtime))
, bytes2word(0,0,0,0)
, useLabel(CT_v1318)
,};
Node FN_System_46Posix_46Internals_46const_95vmin[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46const_95vmin)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1318: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46const_95vmin[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46const_95vmin))
, bytes2word(0,0,0,0)
, useLabel(CT_v1319)
,};
Node FN_System_46Posix_46Internals_46const_95icanon[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46const_95icanon)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1319: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46const_95icanon[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46const_95icanon))
, bytes2word(0,0,0,0)
, useLabel(CT_v1320)
,};
Node FN_System_46Posix_46Internals_46const_95tcsanow[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46const_95tcsanow)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1320: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46const_95tcsanow[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46const_95tcsanow))
, bytes2word(0,0,0,0)
, useLabel(CT_v1321)
,};
Node FN_System_46Posix_46Internals_46const_95echo[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46const_95echo)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1321: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46const_95echo[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46const_95echo))
, bytes2word(1,0,0,1)
, useLabel(CT_v1322)
,	/* FN_System_46Posix_46Internals_46st_95ino_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46st_95ino_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1322: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46Posix_46Internals_46st_95ino_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46st_95ino_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1323)
,};
Node FN_System_46Posix_46Internals_46st_95ino[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1323: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46st_95ino[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46st_95ino))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46Posix_46Internals_46st_95ino_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v1324)
,	/* FN_System_46Posix_46Internals_46st_95dev_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46st_95dev_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1324: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46Posix_46Internals_46st_95dev_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46st_95dev_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1325)
,};
Node FN_System_46Posix_46Internals_46st_95dev[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1325: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46st_95dev[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46st_95dev))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46Posix_46Internals_46st_95dev_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v1326)
,	/* FN_System_46Posix_46Internals_46st_95mode_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46st_95mode_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1326: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46Posix_46Internals_46st_95mode_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46st_95mode_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1327)
,};
Node FN_System_46Posix_46Internals_46st_95mode[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1327: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46st_95mode[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46st_95mode))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46Posix_46Internals_46st_95mode_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v1328)
,	/* FN_System_46Posix_46Internals_46st_95size_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46st_95size_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1328: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46Posix_46Internals_46st_95size_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46st_95size_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1329)
,};
Node FN_System_46Posix_46Internals_46st_95size[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1329: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46st_95size[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46st_95size))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46Posix_46Internals_46st_95size_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v1330)
,	/* FN_System_46Posix_46Internals_46st_95mtime_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46st_95mtime_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1330: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46Posix_46Internals_46st_95mtime_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46st_95mtime_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1331)
,};
Node FN_System_46Posix_46Internals_46st_95mtime[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1331: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46st_95mtime[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46st_95mtime))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46Posix_46Internals_46st_95mtime_35)
, bytes2word(0,0,0,0)
, useLabel(CT_v1332)
,};
Node FN_System_46Posix_46Internals_46sizeof_95stat[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46sizeof_95stat)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1332: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46sizeof_95stat[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46sizeof_95stat))
, bytes2word(1,0,0,1)
, useLabel(CT_v1333)
,};
Node FN_System_46Posix_46Internals_46c_95s_95isfifo[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46c_95s_95isfifo)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1333: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_System_46Posix_46Internals_46c_95s_95isfifo[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95s_95isfifo),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1334)
,};
Node FN_System_46Posix_46Internals_46s_95isfifo[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_CADR_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v1334: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_System_46Posix_46Internals_46s_95isfifo[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46s_95isfifo),1)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95s_95isfifo))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46CInt_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46CInt_46_47_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v1335)
,};
Node FN_System_46Posix_46Internals_46c_95s_95isdir[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46c_95s_95isdir)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1335: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_System_46Posix_46Internals_46c_95s_95isdir[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95s_95isdir),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1336)
,};
Node FN_System_46Posix_46Internals_46s_95isdir[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_CADR_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v1336: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_System_46Posix_46Internals_46s_95isdir[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46s_95isdir),1)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95s_95isdir))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46CInt_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46CInt_46_47_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v1337)
,};
Node FN_System_46Posix_46Internals_46c_95s_95isblk[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46c_95s_95isblk)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1337: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_System_46Posix_46Internals_46c_95s_95isblk[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95s_95isblk),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1338)
,};
Node FN_System_46Posix_46Internals_46s_95isblk[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_CADR_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v1338: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_System_46Posix_46Internals_46s_95isblk[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46s_95isblk),1)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95s_95isblk))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46CInt_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46CInt_46_47_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v1339)
,};
Node FN_System_46Posix_46Internals_46c_95s_95ischr[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46c_95s_95ischr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1339: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_System_46Posix_46Internals_46c_95s_95ischr[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95s_95ischr),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1340)
,};
Node FN_System_46Posix_46Internals_46s_95ischr[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_CADR_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v1340: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_System_46Posix_46Internals_46s_95ischr[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46s_95ischr),1)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95s_95ischr))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46CInt_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46CInt_46_47_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v1341)
,};
Node FN_System_46Posix_46Internals_46c_95s_95isreg[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46c_95s_95isreg)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1341: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_System_46Posix_46Internals_46c_95s_95isreg[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95s_95isreg),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1342)
,};
Node FN_System_46Posix_46Internals_46s_95isreg[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_CADR_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v1342: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_System_46Posix_46Internals_46s_95isreg[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46s_95isreg),1)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95s_95isreg))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46CInt_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46CInt_46_47_61))
, bytes2word(0,0,0,0)
, useLabel(CT_v1343)
,};
Node FN_System_46Posix_46Internals_46o_95BINARY[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46o_95BINARY)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1343: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46o_95BINARY[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46o_95BINARY))
, bytes2word(0,0,0,0)
, useLabel(CT_v1344)
,};
Node FN_System_46Posix_46Internals_46o_95NONBLOCK[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46o_95NONBLOCK)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1344: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46o_95NONBLOCK[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46o_95NONBLOCK))
, bytes2word(0,0,0,0)
, useLabel(CT_v1345)
,};
Node FN_System_46Posix_46Internals_46o_95NOCTTY[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46o_95NOCTTY)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1345: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46o_95NOCTTY[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46o_95NOCTTY))
, bytes2word(0,0,0,0)
, useLabel(CT_v1346)
,};
Node FN_System_46Posix_46Internals_46o_95TRUNC[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46o_95TRUNC)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1346: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46o_95TRUNC[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46o_95TRUNC))
, bytes2word(0,0,0,0)
, useLabel(CT_v1347)
,};
Node FN_System_46Posix_46Internals_46o_95EXCL[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46o_95EXCL)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1347: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46o_95EXCL[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46o_95EXCL))
, bytes2word(0,0,0,0)
, useLabel(CT_v1348)
,};
Node FN_System_46Posix_46Internals_46o_95CREAT[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46o_95CREAT)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1348: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46o_95CREAT[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46o_95CREAT))
, bytes2word(0,0,0,0)
, useLabel(CT_v1349)
,};
Node FN_System_46Posix_46Internals_46o_95APPEND[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46o_95APPEND)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1349: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46o_95APPEND[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46o_95APPEND))
, bytes2word(0,0,0,0)
, useLabel(CT_v1350)
,};
Node FN_System_46Posix_46Internals_46o_95RDWR[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46o_95RDWR)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1350: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46o_95RDWR[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46o_95RDWR))
, bytes2word(0,0,0,0)
, useLabel(CT_v1351)
,};
Node FN_System_46Posix_46Internals_46o_95WRONLY[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46o_95WRONLY)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1351: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46o_95WRONLY[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46o_95WRONLY))
, bytes2word(0,0,0,0)
, useLabel(CT_v1352)
,};
Node FN_System_46Posix_46Internals_46o_95RDONLY[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46o_95RDONLY)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1352: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46Posix_46Internals_46o_95RDONLY[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46o_95RDONLY))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1353)
,	/* FN_System_46Posix_46Internals_46c_95waitpid_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95waitpid_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1353: (byte 0) */
  HW(0,3)
, 0
,	/* F0_System_46Posix_46Internals_46c_95waitpid_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95waitpid_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v1354)
,};
Node FN_System_46Posix_46Internals_46c_95waitpid[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1354: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95waitpid[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95waitpid))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_System_46Posix_46Internals_46c_95waitpid_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1355)
,	/* FN_System_46Posix_46Internals_46c_95utime_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95utime_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1355: (byte 0) */
  HW(0,2)
, 0
,	/* F0_System_46Posix_46Internals_46c_95utime_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95utime_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v1356)
,};
Node FN_System_46Posix_46Internals_46c_95utime[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1356: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95utime[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95utime))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_System_46Posix_46Internals_46c_95utime_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1357)
,	/* FN_System_46Posix_46Internals_46c_95tcsetattr_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95tcsetattr_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1357: (byte 0) */
  HW(0,3)
, 0
,	/* F0_System_46Posix_46Internals_46c_95tcsetattr_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95tcsetattr_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v1358)
,};
Node FN_System_46Posix_46Internals_46c_95tcsetattr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1358: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95tcsetattr[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95tcsetattr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_System_46Posix_46Internals_46c_95tcsetattr_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1359)
,	/* FN_System_46Posix_46Internals_46c_95tcgetattr_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95tcgetattr_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1359: (byte 0) */
  HW(0,2)
, 0
,	/* F0_System_46Posix_46Internals_46c_95tcgetattr_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95tcgetattr_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v1360)
,};
Node FN_System_46Posix_46Internals_46c_95tcgetattr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1360: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95tcgetattr[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95tcgetattr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_System_46Posix_46Internals_46c_95tcgetattr_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1361)
,	/* FN_System_46Posix_46Internals_46c_95sigprocmask_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95sigprocmask_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1361: (byte 0) */
  HW(0,3)
, 0
,	/* F0_System_46Posix_46Internals_46c_95sigprocmask_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95sigprocmask_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v1362)
,};
Node FN_System_46Posix_46Internals_46c_95sigprocmask[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1362: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95sigprocmask[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95sigprocmask))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_System_46Posix_46Internals_46c_95sigprocmask_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1363)
,	/* FN_System_46Posix_46Internals_46c_95sigaddset_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95sigaddset_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1363: (byte 0) */
  HW(0,2)
, 0
,	/* F0_System_46Posix_46Internals_46c_95sigaddset_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95sigaddset_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v1364)
,};
Node FN_System_46Posix_46Internals_46c_95sigaddset[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1364: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95sigaddset[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95sigaddset))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_System_46Posix_46Internals_46c_95sigaddset_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v1365)
,	/* FN_System_46Posix_46Internals_46c_95sigemptyset_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46c_95sigemptyset_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1365: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46Posix_46Internals_46c_95sigemptyset_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95sigemptyset_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1366)
,};
Node FN_System_46Posix_46Internals_46c_95sigemptyset[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1366: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95sigemptyset[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95sigemptyset))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46Posix_46Internals_46c_95sigemptyset_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v1367)
,	/* FN_System_46Posix_46Internals_46c_95pipe_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46c_95pipe_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1367: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46Posix_46Internals_46c_95pipe_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95pipe_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1368)
,};
Node FN_System_46Posix_46Internals_46c_95pipe[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1368: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95pipe[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95pipe))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46Posix_46Internals_46c_95pipe_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1369)
,	/* FN_System_46Posix_46Internals_46c_95mkfifo_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95mkfifo_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1369: (byte 0) */
  HW(0,2)
, 0
,	/* F0_System_46Posix_46Internals_46c_95mkfifo_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95mkfifo_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v1370)
,};
Node FN_System_46Posix_46Internals_46c_95mkfifo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1370: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95mkfifo[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95mkfifo))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_System_46Posix_46Internals_46c_95mkfifo_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1371)
,	/* FN_System_46Posix_46Internals_46c_95link_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95link_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1371: (byte 0) */
  HW(0,2)
, 0
,	/* F0_System_46Posix_46Internals_46c_95link_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95link_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v1372)
,};
Node FN_System_46Posix_46Internals_46c_95link[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1372: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95link[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95link))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_System_46Posix_46Internals_46c_95link_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v1373)
,	/* FN_System_46Posix_46Internals_46c_95fork_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46c_95fork_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1373: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46Posix_46Internals_46c_95fork_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95fork_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1374)
,};
Node FN_System_46Posix_46Internals_46c_95fork[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1374: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95fork[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95fork))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_System_46Posix_46Internals_46c_95fork_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1375)
,	/* FN_System_46Posix_46Internals_46c_95fcntl_95lock_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95fcntl_95lock_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1375: (byte 0) */
  HW(0,3)
, 0
,	/* F0_System_46Posix_46Internals_46c_95fcntl_95lock_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95fcntl_95lock_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v1376)
,};
Node FN_System_46Posix_46Internals_46c_95fcntl_95lock[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1376: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95fcntl_95lock[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95fcntl_95lock))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_System_46Posix_46Internals_46c_95fcntl_95lock_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1377)
,	/* FN_System_46Posix_46Internals_46c_95fcntl_95write_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95fcntl_95write_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1377: (byte 0) */
  HW(0,3)
, 0
,	/* F0_System_46Posix_46Internals_46c_95fcntl_95write_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95fcntl_95write_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v1378)
,};
Node FN_System_46Posix_46Internals_46c_95fcntl_95write[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1378: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95fcntl_95write[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95fcntl_95write))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_System_46Posix_46Internals_46c_95fcntl_95write_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1379)
,	/* FN_System_46Posix_46Internals_46c_95fcntl_95read_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95fcntl_95read_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1379: (byte 0) */
  HW(0,2)
, 0
,	/* F0_System_46Posix_46Internals_46c_95fcntl_95read_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95fcntl_95read_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v1380)
,};
Node FN_System_46Posix_46Internals_46c_95fcntl_95read[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1380: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95fcntl_95read[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95fcntl_95read))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_System_46Posix_46Internals_46c_95fcntl_95read_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v1381)
,	/* FN_System_46Posix_46Internals_46c_95getpid_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46c_95getpid_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1381: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46Posix_46Internals_46c_95getpid_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95getpid_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1382)
,};
Node FN_System_46Posix_46Internals_46c_95getpid[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1382: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95getpid[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95getpid))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_System_46Posix_46Internals_46c_95getpid_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v1383)
,	/* FN_System_46Posix_46Internals_46c_95unlink_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46c_95unlink_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1383: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46Posix_46Internals_46c_95unlink_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95unlink_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1384)
,};
Node FN_System_46Posix_46Internals_46c_95unlink[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1384: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95unlink[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95unlink))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46Posix_46Internals_46c_95unlink_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1385)
,	/* FN_System_46Posix_46Internals_46c_95ftruncate_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95ftruncate_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1385: (byte 0) */
  HW(0,2)
, 0
,	/* F0_System_46Posix_46Internals_46c_95ftruncate_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95ftruncate_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v1386)
,};
Node FN_System_46Posix_46Internals_46c_95ftruncate[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1386: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95ftruncate[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95ftruncate))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_System_46Posix_46Internals_46c_95ftruncate_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1387)
,	/* FN_System_46Posix_46Internals_46c_95safe_95write_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95safe_95write_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1387: (byte 0) */
  HW(0,3)
, 0
,	/* F0_System_46Posix_46Internals_46c_95safe_95write_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95safe_95write_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v1388)
,};
Node FN_System_46Posix_46Internals_46c_95safe_95write[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1388: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95safe_95write[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95safe_95write))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_System_46Posix_46Internals_46c_95safe_95write_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1389)
,	/* FN_System_46Posix_46Internals_46c_95write_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95write_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1389: (byte 0) */
  HW(0,3)
, 0
,	/* F0_System_46Posix_46Internals_46c_95write_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95write_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v1390)
,};
Node FN_System_46Posix_46Internals_46c_95write[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1390: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95write[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95write))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_System_46Posix_46Internals_46c_95write_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v1391)
,	/* FN_System_46Posix_46Internals_46c_95umask_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46c_95umask_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1391: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46Posix_46Internals_46c_95umask_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95umask_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1392)
,};
Node FN_System_46Posix_46Internals_46c_95umask[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1392: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95umask[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95umask))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46Posix_46Internals_46c_95umask_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1393)
,	/* FN_System_46Posix_46Internals_46c_95stat_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95stat_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1393: (byte 0) */
  HW(0,2)
, 0
,	/* F0_System_46Posix_46Internals_46c_95stat_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95stat_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v1394)
,};
Node FN_System_46Posix_46Internals_46c_95stat[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1394: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95stat[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95stat))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_System_46Posix_46Internals_46c_95stat_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1395)
,	/* FN_System_46Posix_46Internals_46c_95safe_95read_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95safe_95read_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1395: (byte 0) */
  HW(0,3)
, 0
,	/* F0_System_46Posix_46Internals_46c_95safe_95read_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95safe_95read_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v1396)
,};
Node FN_System_46Posix_46Internals_46c_95safe_95read[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1396: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95safe_95read[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95safe_95read))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_System_46Posix_46Internals_46c_95safe_95read_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1397)
,	/* FN_System_46Posix_46Internals_46c_95read_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95read_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1397: (byte 0) */
  HW(0,3)
, 0
,	/* F0_System_46Posix_46Internals_46c_95read_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95read_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v1398)
,};
Node FN_System_46Posix_46Internals_46c_95read[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1398: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95read[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95read))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_System_46Posix_46Internals_46c_95read_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1399)
,	/* FN_System_46Posix_46Internals_46c_95open_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95open_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1399: (byte 0) */
  HW(0,3)
, 0
,	/* F0_System_46Posix_46Internals_46c_95open_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95open_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v1400)
,};
Node FN_System_46Posix_46Internals_46c_95open[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1400: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95open[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95open))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_System_46Posix_46Internals_46c_95open_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1401)
,	/* FN_System_46Posix_46Internals_46lstat_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_System_46Posix_46Internals_46lstat_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1401: (byte 0) */
  HW(0,2)
, 0
,	/* F0_System_46Posix_46Internals_46lstat_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46lstat_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v1402)
,};
Node FN_System_46Posix_46Internals_46lstat[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1402: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46lstat[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46lstat))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_System_46Posix_46Internals_46lstat_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1403)
,	/* FN_System_46Posix_46Internals_46c_95lseek_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95lseek_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1403: (byte 0) */
  HW(0,3)
, 0
,	/* F0_System_46Posix_46Internals_46c_95lseek_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95lseek_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v1404)
,};
Node FN_System_46Posix_46Internals_46c_95lseek[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1404: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95lseek[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95lseek))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_System_46Posix_46Internals_46c_95lseek_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v1405)
,	/* FN_System_46Posix_46Internals_46c_95isatty_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46c_95isatty_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1405: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46Posix_46Internals_46c_95isatty_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95isatty_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1406)
,};
Node FN_System_46Posix_46Internals_46c_95isatty[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1406: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95isatty[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95isatty))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46Posix_46Internals_46c_95isatty_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1407)
,	/* FN_System_46Posix_46Internals_46c_95fstat_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95fstat_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1407: (byte 0) */
  HW(0,2)
, 0
,	/* F0_System_46Posix_46Internals_46c_95fstat_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95fstat_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v1408)
,};
Node FN_System_46Posix_46Internals_46c_95fstat[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1408: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95fstat[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95fstat))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_System_46Posix_46Internals_46c_95fstat_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1409)
,	/* FN_System_46Posix_46Internals_46c_95dup2_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95dup2_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1409: (byte 0) */
  HW(0,2)
, 0
,	/* F0_System_46Posix_46Internals_46c_95dup2_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95dup2_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v1410)
,};
Node FN_System_46Posix_46Internals_46c_95dup2[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1410: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95dup2[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95dup2))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_System_46Posix_46Internals_46c_95dup2_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v1411)
,	/* FN_System_46Posix_46Internals_46c_95dup_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46c_95dup_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1411: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46Posix_46Internals_46c_95dup_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95dup_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1412)
,};
Node FN_System_46Posix_46Internals_46c_95dup[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1412: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95dup[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95dup))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46Posix_46Internals_46c_95dup_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1413)
,	/* FN_System_46Posix_46Internals_46c_95creat_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95creat_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1413: (byte 0) */
  HW(0,2)
, 0
,	/* F0_System_46Posix_46Internals_46c_95creat_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95creat_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v1414)
,};
Node FN_System_46Posix_46Internals_46c_95creat[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1414: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95creat[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95creat))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_System_46Posix_46Internals_46c_95creat_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v1415)
,	/* FN_System_46Posix_46Internals_46c_95close_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46Posix_46Internals_46c_95close_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1415: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46Posix_46Internals_46c_95close_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95close_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1416)
,};
Node FN_System_46Posix_46Internals_46c_95close[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1416: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95close[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95close))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46Posix_46Internals_46c_95close_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1417)
,	/* FN_System_46Posix_46Internals_46c_95chmod_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95chmod_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1417: (byte 0) */
  HW(0,2)
, 0
,	/* F0_System_46Posix_46Internals_46c_95chmod_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95chmod_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v1418)
,};
Node FN_System_46Posix_46Internals_46c_95chmod[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1418: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95chmod[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95chmod))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_System_46Posix_46Internals_46c_95chmod_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1419)
,	/* FN_System_46Posix_46Internals_46c_95access_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_System_46Posix_46Internals_46c_95access_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1419: (byte 0) */
  HW(0,2)
, 0
,	/* F0_System_46Posix_46Internals_46c_95access_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95access_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v1420)
,};
Node FN_System_46Posix_46Internals_46c_95access[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1420: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46c_95access[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95access))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_System_46Posix_46Internals_46c_95access_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v1421)
,};
Node FN_System_46Posix_46Internals_46setCloseOnExec[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,2)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_P1,10,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,10,HEAP_OFF_N1)
, bytes2word(7,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1421: (byte 0) */
  HW(9,1)
, 0
,};
Node F0_System_46Posix_46Internals_46setCloseOnExec[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46setCloseOnExec),1)
, VAPTAG(useLabel(FN_Foreign_46C_46Error_46throwErrnoIfMinus1_95))
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CInt)
, VAPTAG(useLabel(FN_LAMBDA1243))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95fcntl_95write))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, useLabel(CF_System_46Posix_46Internals_46const_95f_95setfd)
, useLabel(CF_System_46Posix_46Internals_46const_95fd_95cloexec)
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(0,0,0,0)
, useLabel(CT_v1423)
,	/* FN_LAMBDA1243: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1422)
,	/* CT_v1423: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1243: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1243))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1424)
,};
Node FN_System_46Posix_46Internals_46setNonBlockingFD[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,7,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG_ARG,2,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1424: (byte 0) */
  HW(8,2)
, 0
,};
Node F0_System_46Posix_46Internals_46setNonBlockingFD[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46setNonBlockingFD),2)
, VAPTAG(useLabel(FN_Foreign_46C_46Error_46throwErrnoIfMinus1Retry))
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CInt)
, VAPTAG(useLabel(FN_LAMBDA1244))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95fcntl_95read))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, useLabel(CF_System_46Posix_46Internals_46const_95f_95getfl)
, CAPTAG(useLabel(FN_LAMBDA1248),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1425)
,	/* FN_LAMBDA1248: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(3,HEAP_P1,0,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,4)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,8,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,7)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_P1,15)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,16,HEAP_OFF_N1)
, bytes2word(20,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1425: (byte 0) */
  HW(14,3)
, 0
,	/* F0_LAMBDA1248: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1248),3)
, VAPTAG(useLabel(FN_LAMBDA1246))
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46CInt_46_61_61))
, CAPTAG(useLabel(FN_Control_46Monad_46unless),1)
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95fcntl_95write))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46CInt)
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CLong)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, useLabel(CF_System_46Posix_46Internals_46const_95f_95setfl)
, CAPTAG(useLabel(FN_LAMBDA1247),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(1,0,0,1)
, useLabel(CT_v1426)
,	/* FN_LAMBDA1247: (byte 0) */
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v1426: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA1247: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1247),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1431)
,	/* FN_LAMBDA1246: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,8,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I4)
,	/* v1427: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_CVAL_P1,5,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,13,0)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_I4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,2)
,	/* v1429: (byte 3) */
  bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,HEAP_CVAL_P1)
, bytes2word(8,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1431: (byte 0) */
  HW(7,2)
, 0
,	/* F0_LAMBDA1246: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1246),2)
, VAPTAG(useLabel(FN_Data_46Bits_46Bits_46NHC_46FFI_46CInt_46_46_124_46))
, useLabel(CF_System_46Posix_46Internals_46o_95NONBLOCK)
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_Data_46Bits_46Bits_46NHC_46FFI_46CInt_46complement))
, VAPTAG(useLabel(FN_Data_46Bits_46Bits_46NHC_46FFI_46CInt_46_46_38_46))
, VAPTAG(useLabel(FN_LAMBDA1245))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v1433)
,	/* FN_LAMBDA1245: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1432)
,	/* CT_v1433: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1245: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1245))
, bytes2word(0,0,0,0)
, useLabel(CT_v1435)
,	/* FN_LAMBDA1244: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1434)
,	/* CT_v1435: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1244: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1244))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1436)
,};
Node FN_System_46Posix_46Internals_46tcSetAttr[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG_ARG,2,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1436: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_System_46Posix_46Internals_46tcSetAttr[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46tcSetAttr),2)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46allocaBytes))
, useLabel(CF_System_46Posix_46Internals_46sizeof_95termios)
, CAPTAG(useLabel(FN_LAMBDA1258),1)
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1437)
,	/* FN_LAMBDA1258: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG_ARG,2)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_P1,10,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,14,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1437: (byte 0) */
  HW(10,3)
, 0
,	/* F0_LAMBDA1258: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1258),3)
, VAPTAG(useLabel(FN_Foreign_46C_46Error_46throwErrnoIfMinus1Retry_95))
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CInt)
, VAPTAG(useLabel(FN_LAMBDA1249))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95tcgetattr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46allocaBytes))
, useLabel(CF_System_46Posix_46Internals_46sizeof_95sigset_95t)
, CAPTAG(useLabel(FN_LAMBDA1257),1)
, VAPTAG(useLabel(FN_Prelude_46_36))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1438)
,	/* FN_LAMBDA1257: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG_ARG,4,1,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(7,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1438: (byte 0) */
  HW(4,4)
, 0
,	/* F0_LAMBDA1257: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1257),4)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46allocaBytes))
, useLabel(CF_System_46Posix_46Internals_46sizeof_95sigset_95t)
, CAPTAG(useLabel(FN_LAMBDA1256),1)
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v1439)
,	/* FN_LAMBDA1256: (byte 0) */
  bytes2word(NEEDHEAP_P1,62,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,6,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,14,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,2,HEAP_CVAL_P1)
, bytes2word(16,HEAP_ARG_ARG,1,5)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,7,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG_ARG,2,4,HEAP_CVAL_P1)
, bytes2word(17,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_P1,18)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,6)
, bytes2word(HEAP_CVAL_P1,19,HEAP_OFF_N1,14)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,19)
, bytes2word(HEAP_OFF_N1,32,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,19,HEAP_OFF_N1)
, bytes2word(49,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1439: (byte 0) */
  HW(17,5)
, 0
,	/* F0_LAMBDA1256: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1256),5)
, VAPTAG(useLabel(FN_Foreign_46C_46Error_46throwErrnoIfMinus1_95))
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CInt)
, VAPTAG(useLabel(FN_LAMBDA1250))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95sigemptyset))
, VAPTAG(useLabel(FN_Prelude_46_36))
, VAPTAG(useLabel(FN_LAMBDA1251))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95sigaddset))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, useLabel(CF_System_46Posix_46Internals_46const_95sigttou)
, VAPTAG(useLabel(FN_LAMBDA1252))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95sigprocmask))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, useLabel(CF_System_46Posix_46Internals_46const_95sig_95block)
, CAPTAG(useLabel(FN_LAMBDA1255),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1440)
,	/* FN_LAMBDA1255: (byte 0) */
  bytes2word(NEEDHEAP_P1,39,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,10,HEAP_OFF_N1)
, bytes2word(7,HEAP_CVAL_P1,11,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_P1,14)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,15)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,7,HEAP_CVAL_P1,16)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_P1,17)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,17,HEAP_OFF_N1)
, bytes2word(24,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1440: (byte 0) */
  HW(15,4)
, 0
,	/* F0_LAMBDA1255: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1255),4)
, VAPTAG(useLabel(FN_Foreign_46C_46Error_46throwErrnoIfMinus1Retry_95))
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CInt)
, VAPTAG(useLabel(FN_LAMBDA1253))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95tcsetattr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, useLabel(CF_System_46Posix_46Internals_46const_95tcsanow)
, VAPTAG(useLabel(FN_Prelude_46_36))
, VAPTAG(useLabel(FN_Foreign_46C_46Error_46throwErrnoIfMinus1_95))
, VAPTAG(useLabel(FN_LAMBDA1254))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95sigprocmask))
, useLabel(CF_System_46Posix_46Internals_46const_95sig_95setmask)
, useLabel(CF_NHC_46FFI_46nullPtr)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(0,0,0,0)
, useLabel(CT_v1442)
,	/* FN_LAMBDA1254: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1441)
,	/* CT_v1442: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1254: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1254))
, bytes2word(0,0,0,0)
, useLabel(CT_v1444)
,	/* FN_LAMBDA1253: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1443)
,	/* CT_v1444: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1253: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1253))
, bytes2word(0,0,0,0)
, useLabel(CT_v1445)
,	/* FN_LAMBDA1252: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1441)
,	/* CT_v1445: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1252: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1252))
, bytes2word(0,0,0,0)
, useLabel(CT_v1447)
,	/* FN_LAMBDA1251: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1446)
,	/* CT_v1447: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1251: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1251))
, bytes2word(0,0,0,0)
, useLabel(CT_v1449)
,	/* FN_LAMBDA1250: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1448)
,	/* CT_v1449: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1250: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1250))
, bytes2word(0,0,0,0)
, useLabel(CT_v1450)
,	/* FN_LAMBDA1249: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1443)
,	/* CT_v1450: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1249: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1249))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1451)
,};
Node FN_System_46Posix_46Internals_46setCooked[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1451: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_System_46Posix_46Internals_46setCooked[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46setCooked),2)
, CAPTAG(useLabel(FN_System_46Posix_46Internals_46tcSetAttr),1)
, CAPTAG(useLabel(FN_LAMBDA1263),1)
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1452)
,	/* FN_LAMBDA1263: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,2,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1452: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA1263: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1263),2)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95lflag))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA1262),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1453)
,	/* FN_LAMBDA1262: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,1,3)
, bytes2word(HEAP_I1,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,2)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,7)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_P1,13)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,14,HEAP_OFF_N1,12)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,21,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1453: (byte 0) */
  HW(13,3)
, 0
,	/* F0_LAMBDA1262: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1262),3)
, useLabel(CF_Data_46Bits_46Bits_46NHC_46PosixTypes_46CTcflag)
, VAPTAG(useLabel(FN_LAMBDA1260))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46poke_95c_95lflag))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46not))
, CAPTAG(useLabel(FN_Control_46Monad_46when),1)
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46ptr_95c_95cc))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA1261),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46_36))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(1,0,0,1)
, useLabel(CT_v1454)
,	/* FN_LAMBDA1261: (byte 0) */
  bytes2word(NEEDHEAP_P1,34,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,9,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CADR_N1,2,HEAP_CVAL_P1,11)
, bytes2word(HEAP_P1,0,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CADR_N1,3)
, bytes2word(HEAP_CVAL_P1,11,HEAP_I1,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v1454: (byte 0) */
  HW(10,1)
, 0
,	/* F0_LAMBDA1261: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1261),1)
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46CInt)
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, useLabel(CF_System_46Posix_46Internals_46const_95vtime)
, VAPTAG(useLabel(FN_NHC_46FFI_46plusPtr))
, useLabel(CF_System_46Posix_46Internals_46const_95vmin)
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word8_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46Word8_46poke))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1459)
,	/* FN_LAMBDA1260: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,31,0,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(7,PUSH_P1,0,PUSH_ARG_I2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(3,ZAP_STACK_P1,3,EVAL)
,	/* v1455: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(PUSH_CVAL_P1,9,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,43,0,HEAP_CVAL_P1)
, bytes2word(10,HEAP_ARG,3,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,5,PUSH_P1)
, bytes2word(0,PUSH_ARG_I2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_ARG,3,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,3,EVAL)
,	/* v1457: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1459: (byte 0) */
  HW(11,3)
, 0
,	/* F0_LAMBDA1260: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1260),3)
, VAPTAG(useLabel(FN_Data_46Bits_46Bits_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46CInt)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, useLabel(CF_System_46Posix_46Internals_46const_95icanon)
, VAPTAG(useLabel(FN_Data_46Bits_46_46_124_46))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_Data_46Bits_46complement))
, VAPTAG(useLabel(FN_Data_46Bits_46_46_38_46))
, VAPTAG(useLabel(FN_LAMBDA1259))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v1461)
,	/* FN_LAMBDA1259: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1460)
,	/* CT_v1461: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1259: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1259))
, bytes2word(1,0,0,1)
, useLabel(CT_v1462)
,};
Node FN_System_46Posix_46Internals_46getEcho[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1462: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_System_46Posix_46Internals_46getEcho[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46getEcho),1)
, CAPTAG(useLabel(FN_System_46Posix_46Internals_46tcSetAttr),1)
, CAPTAG(useLabel(FN_LAMBDA1265),1)
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(1,0,0,1)
, useLabel(CT_v1463)
,	/* FN_LAMBDA1265: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1463: (byte 0) */
  HW(4,1)
, 0
,	/* F0_LAMBDA1265: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1265),1)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95lflag))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA1264),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v1464)
,	/* FN_LAMBDA1264: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CADR_N1,1)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v1464: (byte 0) */
  HW(9,1)
, 0
,	/* F0_LAMBDA1264: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1264),1)
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46CInt)
, useLabel(CF_Prelude_46Num_46NHC_46PosixTypes_46CTcflag)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, useLabel(CF_System_46Posix_46Internals_46const_95echo)
, VAPTAG(useLabel(FN_Data_46Bits_46Bits_46NHC_46PosixTypes_46CTcflag_46_46_38_46))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46PosixTypes_46CTcflag_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46PosixTypes_46CTcflag_46_47_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1465)
,};
Node FN_System_46Posix_46Internals_46setEcho[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1465: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_System_46Posix_46Internals_46setEcho[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46setEcho),2)
, CAPTAG(useLabel(FN_System_46Posix_46Internals_46tcSetAttr),1)
, CAPTAG(useLabel(FN_LAMBDA1269),1)
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1466)
,	/* FN_LAMBDA1269: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,2,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1466: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA1269: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1269),2)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95lflag))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA1268),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1467)
,	/* FN_LAMBDA1268: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,1,3)
, bytes2word(HEAP_I1,PUSH_P1,0,PUSH_ARG_I2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1467: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA1268: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1268),3)
, useLabel(CF_Data_46Bits_46Bits_46NHC_46PosixTypes_46CTcflag)
, VAPTAG(useLabel(FN_LAMBDA1267))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46poke_95c_95lflag))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1472)
,	/* FN_LAMBDA1267: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,31,0,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(7,PUSH_P1,0,PUSH_ARG_I2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(3,ZAP_STACK_P1,3,EVAL)
,	/* v1468: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(PUSH_CVAL_P1,9,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,43,0,HEAP_CVAL_P1)
, bytes2word(10,HEAP_ARG,3,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,5,PUSH_P1)
, bytes2word(0,PUSH_ARG_I2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_ARG,3,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,3,EVAL)
,	/* v1470: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1472: (byte 0) */
  HW(11,3)
, 0
,	/* F0_LAMBDA1267: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1267),3)
, VAPTAG(useLabel(FN_Data_46Bits_46Bits_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46CInt)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, useLabel(CF_System_46Posix_46Internals_46const_95echo)
, VAPTAG(useLabel(FN_Data_46Bits_46_46_124_46))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_Data_46Bits_46complement))
, VAPTAG(useLabel(FN_Data_46Bits_46_46_38_46))
, VAPTAG(useLabel(FN_LAMBDA1266))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v1474)
,	/* FN_LAMBDA1266: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1473)
,	/* CT_v1474: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1266: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1266))
, bytes2word(0,0,0,0)
, useLabel(CT_v1475)
,};
Node FN_System_46Posix_46Internals_46withFilePath[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1475: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_System_46Posix_46Internals_46withFilePath[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46withFilePath))
, useLabel(CF_Foreign_46C_46String_46withCString)
, bytes2word(1,0,0,1)
, useLabel(CT_v1476)
,};
Node FN_System_46Posix_46Internals_46fdGetMode[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,7,HEAP_CVAL_P1,9)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1476: (byte 0) */
  HW(8,1)
, 0
,};
Node F0_System_46Posix_46Internals_46fdGetMode[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46fdGetMode),1)
, VAPTAG(useLabel(FN_Foreign_46C_46Error_46throwErrnoIfMinus1Retry))
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CInt)
, VAPTAG(useLabel(FN_LAMBDA1270))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95fcntl_95read))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, useLabel(CF_System_46Posix_46Internals_46const_95f_95getfl)
, CAPTAG(useLabel(FN_LAMBDA1273),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v1477)
,	/* FN_LAMBDA1273: (byte 0) */
  bytes2word(NEEDHEAP_P1,35,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CADR_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_I5,HEAP_CADR_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_I5,HEAP_CADR_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_P1,3,HEAP_I2)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_I1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v1477: (byte 0) */
  HW(8,1)
, 0
,	/* F0_LAMBDA1273: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1273),1)
, VAPTAG(useLabel(FN_Data_46Bits_46Bits_46NHC_46FFI_46CInt_46_46_38_46))
, useLabel(CF_System_46Posix_46Internals_46o_95APPEND)
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46CInt_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46CInt_46_47_61))
, useLabel(CF_System_46Posix_46Internals_46o_95WRONLY)
, useLabel(CF_System_46Posix_46Internals_46o_95RDWR)
, VAPTAG(useLabel(FN_LAMBDA1272))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1486)
,	/* FN_LAMBDA1272: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,1,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,6,0)
,	/* v1478: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,RETURN)
, bytes2word(PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(6,0,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v1480: (byte 2) */
  bytes2word(2,RETURN,PUSH_ZAP_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,5,0)
,	/* v1482: (byte 3) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,RETURN,PUSH_CVAL_P1)
, bytes2word(4,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(6,0,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v1484: (byte 2) */
  bytes2word(4,RETURN,HEAP_CVAL_I5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(3,0,0)
, CONSTR(1,0,0)
, CONSTR(2,0,0)
,	/* CT_v1486: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA1272: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1272),3)
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_LAMBDA1271))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v1488)
,	/* FN_LAMBDA1271: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1487)
,	/* CT_v1488: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1271: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1271))
, bytes2word(0,0,0,0)
, useLabel(CT_v1490)
,	/* FN_LAMBDA1270: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1489)
,	/* CT_v1490: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1270: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1270))
, bytes2word(0,0,0,0)
, useLabel(CT_v1491)
,};
Node FN_System_46Posix_46Internals_46ioe_95unknownfiletype[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,3)
, bytes2word(HEAP_OFF_N1,3,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(3,2,0)
,	/* CT_v1491: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46Posix_46Internals_46ioe_95unknownfiletype[] = {
  VAPTAG(useLabel(FN_System_46Posix_46Internals_46ioe_95unknownfiletype))
, VAPTAG(useLabel(FN_LAMBDA1274))
, VAPTAG(useLabel(FN_LAMBDA1275))
, bytes2word(0,0,0,0)
, useLabel(CT_v1493)
,	/* FN_LAMBDA1275: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1492)
,	/* CT_v1493: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1275: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1275))
, bytes2word(0,0,0,0)
, useLabel(CT_v1495)
,	/* FN_LAMBDA1274: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1494)
,	/* CT_v1495: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1274: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1274))
, bytes2word(1,0,0,1)
, useLabel(CT_v1496)
,};
Node FN_System_46Posix_46Internals_46statGetType[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1496: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_System_46Posix_46Internals_46statGetType[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46statGetType),1)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46st_95mode))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA1277),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v1507)
,	/* FN_LAMBDA1277: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(9,0,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
,	/* v1497: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,10,HEAP_OFF_N1)
, bytes2word(5,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(9,0,HEAP_CVAL_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
,	/* v1499: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,8,0,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
,	/* v1501: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,9,0)
, bytes2word(HEAP_CVAL_N1,4,PUSH_HEAP,HEAP_CVAL_I4)
,	/* v1503: (byte 3) */
  bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,PUSH_CVAL_P1)
, bytes2word(11,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(8,0,PUSH_HEAP,HEAP_CVAL_P1)
,	/* v1505: (byte 4) */
  bytes2word(12,HEAP_CVAL_P1,13,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,14,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(3,0,0)
, CONSTR(2,0,0)
, CONSTR(1,0,0)
, CONSTR(0,0,0)
,	/* CT_v1507: (byte 0) */
  HW(13,1)
, 0
,	/* F0_LAMBDA1277: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1277),1)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46s_95isdir))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46s_95isfifo))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46s_95issock))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46s_95ischr))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46s_95isreg))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46s_95isblk))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_Prelude_46ioError))
, useLabel(CF_System_46Posix_46Internals_46ioe_95unknownfiletype)
, VAPTAG(useLabel(FN_LAMBDA1276))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v1509)
,	/* FN_LAMBDA1276: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1508)
,	/* CT_v1509: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1276: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1276))
, bytes2word(1,0,0,1)
, useLabel(CT_v1510)
,};
Node FN_System_46Posix_46Internals_46fdStat[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1510: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_System_46Posix_46Internals_46fdStat[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46fdStat),1)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46allocaBytes))
, useLabel(CF_System_46Posix_46Internals_46sizeof_95stat)
, CAPTAG(useLabel(FN_LAMBDA1282),1)
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1511)
,	/* FN_LAMBDA1282: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,2)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(6,HEAP_CVAL_P1,10,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,11,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1511: (byte 0) */
  HW(11,2)
, 0
,	/* F0_LAMBDA1282: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1282),2)
, VAPTAG(useLabel(FN_Foreign_46C_46Error_46throwErrnoIfMinus1Retry_95))
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CInt)
, VAPTAG(useLabel(FN_LAMBDA1278))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95fstat))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_36))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46statGetType))
, CAPTAG(useLabel(FN_LAMBDA1281),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1512)
,	/* FN_LAMBDA1281: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1512: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA1281: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1281),2)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46st_95dev))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA1280),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1513)
,	/* FN_LAMBDA1280: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG_ARG,2,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1513: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA1280: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1280),3)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46st_95ino))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA1279),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1514)
,	/* FN_LAMBDA1279: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
,	/* CT_v1514: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA1279: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1279),3)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1515)
,	/* FN_LAMBDA1278: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1494)
,	/* CT_v1515: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1278: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1278))
, bytes2word(1,0,0,1)
, useLabel(CT_v1516)
,};
Node FN_System_46Posix_46Internals_46fdType[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1516: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_System_46Posix_46Internals_46fdType[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46fdType),1)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46fdStat))
, CAPTAG(useLabel(FN_LAMBDA1283),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v1520)
,	/* FN_LAMBDA1283: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,3,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_I1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1520: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA1283: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1283),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v1521)
,};
Node FN_System_46Posix_46Internals_46fileType[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1521: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_System_46Posix_46Internals_46fileType[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46fileType),1)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46allocaBytes))
, useLabel(CF_System_46Posix_46Internals_46sizeof_95stat)
, CAPTAG(useLabel(FN_LAMBDA1286),1)
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1522)
,	/* FN_LAMBDA1286: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1522: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA1286: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1286),2)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46withFilePath))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA1285),1)
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1523)
,	/* FN_LAMBDA1285: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,2)
, bytes2word(HEAP_ARG_ARG,2,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(6,HEAP_CVAL_P1,10,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1523: (byte 0) */
  HW(9,2)
, 0
,	/* F0_LAMBDA1285: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1285),2)
, VAPTAG(useLabel(FN_Foreign_46C_46Error_46throwErrnoIfMinus1Retry_95))
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CInt)
, VAPTAG(useLabel(FN_LAMBDA1284))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95stat))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_36))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46statGetType))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(0,0,0,0)
, useLabel(CT_v1525)
,	/* FN_LAMBDA1284: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1524)
,	/* CT_v1525: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1284: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1284))
, bytes2word(1,0,0,1)
, useLabel(CT_v1526)
,};
Node FN_System_46Posix_46Internals_46fdFileSize[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1526: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_System_46Posix_46Internals_46fdFileSize[] = {
  CAPTAG(useLabel(FN_System_46Posix_46Internals_46fdFileSize),1)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46allocaBytes))
, useLabel(CF_System_46Posix_46Internals_46sizeof_95stat)
, CAPTAG(useLabel(FN_LAMBDA1290),1)
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1527)
,	/* FN_LAMBDA1290: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,2)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(6,HEAP_CVAL_P1,10,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,2,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,11,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,13)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1527: (byte 0) */
  HW(11,2)
, 0
,	/* F0_LAMBDA1290: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1290),2)
, VAPTAG(useLabel(FN_Foreign_46C_46Error_46throwErrnoIfMinus1Retry_95))
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CInt)
, VAPTAG(useLabel(FN_LAMBDA1287))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46c_95fstat))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_36))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46st_95mode))
, CAPTAG(useLabel(FN_LAMBDA1289),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1530)
,	/* FN_LAMBDA1289: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(7,0,PUSH_HEAP,HEAP_CVAL_I5)
,	/* v1528: (byte 3) */
  bytes2word(HEAP_CADR_N1,2,RETURN_EVAL,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,1)
, 1
,	/* CT_v1530: (byte 0) */
  HW(7,2)
, 0
,	/* F0_LAMBDA1289: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1289),2)
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46s_95isreg))
, VAPTAG(useLabel(FN_Prelude_46not))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_System_46Posix_46Internals_46st_95size))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA1288),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v1531)
,	/* FN_LAMBDA1288: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1531: (byte 0) */
  HW(5,1)
, 0
,	/* F0_LAMBDA1288: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1288),1)
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46NHC_46PosixTypes_46COff)
, useLabel(CF_Prelude_46Num_46Prelude_46Integer)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1533)
,	/* FN_LAMBDA1287: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1532)
,	/* CT_v1533: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1287: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1287))
,	/* ST_v1508: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,80)
, bytes2word(111,115,105,120)
, bytes2word(46,73,110,116)
, bytes2word(101,114,110,97)
, bytes2word(108,115,58,32)
, bytes2word(78,111,32,109)
, bytes2word(97,116,99,104)
, bytes2word(105,110,103,32)
, bytes2word(97,108,116,101)
, bytes2word(114,110,97,116)
, bytes2word(105,118,101,32)
, bytes2word(105,110,32,99)
, bytes2word(97,115,101,32)
, bytes2word(101,120,112,114)
, bytes2word(101,115,115,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,49,50)
, bytes2word(56,58,51,45)
, bytes2word(49,51,53,58)
,	/* ST_v1487: (byte 4) */
  bytes2word(54,50,46,0)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,80)
, bytes2word(111,115,105,120)
, bytes2word(46,73,110,116)
, bytes2word(101,114,110,97)
, bytes2word(108,115,58,32)
, bytes2word(80,97,116,116)
, bytes2word(101,114,110,32)
, bytes2word(109,97,116,99)
, bytes2word(104,32,102,97)
, bytes2word(105,108,117,114)
, bytes2word(101,32,105,110)
, bytes2word(32,102,117,110)
, bytes2word(99,116,105,111)
, bytes2word(110,32,97,116)
, bytes2word(32,49,54,53)
, bytes2word(58,56,45,49)
, bytes2word(54,57,58,51)
,	/* ST_v1473: (byte 3) */
  bytes2word(49,46,0,83)
, bytes2word(121,115,116,101)
, bytes2word(109,46,80,111)
, bytes2word(115,105,120,46)
, bytes2word(73,110,116,101)
, bytes2word(114,110,97,108)
, bytes2word(115,58,32,80)
, bytes2word(97,116,116,101)
, bytes2word(114,110,32,109)
, bytes2word(97,116,99,104)
, bytes2word(32,102,97,105)
, bytes2word(108,117,114,101)
, bytes2word(32,105,110,32)
, bytes2word(102,117,110,99)
, bytes2word(116,105,111,110)
, bytes2word(32,97,116,32)
, bytes2word(49,57,48,58)
, bytes2word(57,45,49,57)
, bytes2word(50,58,54,57)
,	/* ST_v1460: (byte 2) */
  bytes2word(46,0,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,80,111,115)
, bytes2word(105,120,46,73)
, bytes2word(110,116,101,114)
, bytes2word(110,97,108,115)
, bytes2word(58,32,80,97)
, bytes2word(116,116,101,114)
, bytes2word(110,32,109,97)
, bytes2word(116,99,104,32)
, bytes2word(102,97,105,108)
, bytes2word(117,114,101,32)
, bytes2word(105,110,32,102)
, bytes2word(117,110,99,116)
, bytes2word(105,111,110,32)
, bytes2word(97,116,32,50)
, bytes2word(48,55,58,57)
, bytes2word(45,50,48,56)
, bytes2word(58,56,48,46)
,	/* ST_v1432: (byte 1) */
  bytes2word(0,83,121,115)
, bytes2word(116,101,109,46)
, bytes2word(80,111,115,105)
, bytes2word(120,46,73,110)
, bytes2word(116,101,114,110)
, bytes2word(97,108,115,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,51,50)
, bytes2word(52,58,55,45)
, bytes2word(51,50,53,58)
,	/* ST_v1489: (byte 4) */
  bytes2word(53,56,46,0)
, bytes2word(102,100,71,101)
, bytes2word(116,77,111,100)
,	/* ST_v1494: (byte 2) */
  bytes2word(101,0,102,100)
, bytes2word(84,121,112,101)
,	/* ST_v1532: (byte 1) */
  bytes2word(0,102,105,108)
, bytes2word(101,83,105,122)
,	/* ST_v1524: (byte 2) */
  bytes2word(101,0,102,105)
, bytes2word(108,101,84,121)
,	/* ST_v1422: (byte 3) */
  bytes2word(112,101,0,115)
, bytes2word(101,116,67,108)
, bytes2word(111,115,101,79)
, bytes2word(110,69,120,101)
,	/* ST_v1434: (byte 2) */
  bytes2word(99,0,115,101)
, bytes2word(116,78,111,110)
, bytes2word(66,108,111,99)
, bytes2word(107,105,110,103)
,	/* ST_v1446: (byte 3) */
  bytes2word(70,68,0,115)
, bytes2word(105,103,97,100)
, bytes2word(100,115,101,116)
,	/* ST_v1448: (byte 1) */
  bytes2word(0,115,105,103)
, bytes2word(101,109,112,116)
, bytes2word(121,115,101,116)
,	/* ST_v1441: (byte 1) */
  bytes2word(0,115,105,103)
, bytes2word(112,114,111,99)
, bytes2word(109,97,115,107)
,	/* ST_v1443: (byte 1) */
  bytes2word(0,116,99,83)
, bytes2word(101,116,65,116)
,	/* ST_v1492: (byte 3) */
  bytes2word(116,114,0,117)
, bytes2word(110,107,110,111)
, bytes2word(119,110,32,102)
, bytes2word(105,108,101,32)
, bytes2word(116,121,112,101)
, bytes2word(0,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "__hscore_seek_end" System.Posix.Internals.sEEK_END 0 ::  -> Prelude.Int */
extern HsInt __hscore_seek_end();
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46sEEK_95END = {"System.Posix.Internals","System.Posix.Internals.sEEK_END","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46sEEK_95END) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_seek_end();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46sEEK_95END);
  C_RETURN(nodeptr);
}

/* foreign import ccall "__hscore_seek_set" System.Posix.Internals.sEEK_SET 0 ::  -> Prelude.Int */
extern HsInt __hscore_seek_set();
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46sEEK_95SET = {"System.Posix.Internals","System.Posix.Internals.sEEK_SET","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46sEEK_95SET) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_seek_set();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46sEEK_95SET);
  C_RETURN(nodeptr);
}

/* foreign import ccall "__hscore_seek_cur" System.Posix.Internals.sEEK_CUR 0 ::  -> Prelude.Int */
extern HsInt __hscore_seek_cur();
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46sEEK_95CUR = {"System.Posix.Internals","System.Posix.Internals.sEEK_CUR","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46sEEK_95CUR) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_seek_cur();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46sEEK_95CUR);
  C_RETURN(nodeptr);
}

/* foreign import ccall "__hscore_bufsiz" System.Posix.Internals.dEFAULT_BUFFER_SIZE 0 ::  -> Prelude.Int */
extern HsInt __hscore_bufsiz();
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46dEFAULT_95BUFFER_95SIZE = {"System.Posix.Internals","System.Posix.Internals.dEFAULT_BUFFER_SIZE","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46dEFAULT_95BUFFER_95SIZE) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_bufsiz();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46dEFAULT_95BUFFER_95SIZE);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_s_issock" System.Posix.Internals.c_s_issock 1 :: FFI.Word16 -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95s_95issock = {"System.Posix.Internals","System.Posix.Internals.c_s_issock","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95s_95issock) {
  NodePtr nodeptr;
  HsInt result;
  HsWord16 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = __hscore_s_issock(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95s_95issock);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_ptr_c_cc" System.Posix.Internals.ptr_c_cc# 1 :: FFI.Ptr -> FFI.Ptr */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46ptr_95c_95cc_35 = {"System.Posix.Internals","System.Posix.Internals.ptr_c_cc#","FFI.Ptr"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46ptr_95c_95cc_35) {
  NodePtr nodeptr;
  void* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = __hscore_ptr_c_cc(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46ptr_95c_95cc_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_poke_lflag" System.Posix.Internals.poke_c_lflag# 2 :: FFI.Ptr -> FFI.Word32 -> Prelude.() */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46poke_95c_95lflag_35 = {"System.Posix.Internals","System.Posix.Internals.poke_c_lflag#","Prelude.()"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46poke_95c_95lflag_35) {
  NodePtr nodeptr;
  void* arg1;
  HsWord32 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord32)GET_32BIT_VALUE(nodeptr);

  __hscore_poke_lflag(arg1,arg2);

  nodeptr = nhc_mkUnit();
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46poke_95c_95lflag_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_lflag" System.Posix.Internals.c_lflag# 1 :: FFI.Ptr -> FFI.Word32 */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95lflag_35 = {"System.Posix.Internals","System.Posix.Internals.c_lflag#","FFI.Word32"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95lflag_35) {
  NodePtr nodeptr;
  HsWord32 result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = __hscore_lflag(arg1);

  nodeptr = nhc_mkWord32(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95lflag_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_sizeof_sigset_t" System.Posix.Internals.sizeof_sigset_t 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46sizeof_95sigset_95t = {"System.Posix.Internals","System.Posix.Internals.sizeof_sigset_t","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46sizeof_95sigset_95t) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_sizeof_sigset_t();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46sizeof_95sigset_95t);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_sizeof_termios" System.Posix.Internals.sizeof_termios 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46sizeof_95termios = {"System.Posix.Internals","System.Posix.Internals.sizeof_termios","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46sizeof_95termios) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_sizeof_termios();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46sizeof_95termios);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_fd_cloexec" System.Posix.Internals.const_fd_cloexec 0 ::  -> FFI.Int32 */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46const_95fd_95cloexec = {"System.Posix.Internals","System.Posix.Internals.const_fd_cloexec","FFI.Int32"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46const_95fd_95cloexec) {
  NodePtr nodeptr;
  HsInt32 result;
;

  result = __hscore_fd_cloexec();

  nodeptr = nhc_mkInt32(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46const_95fd_95cloexec);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_f_setfd" System.Posix.Internals.const_f_setfd 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46const_95f_95setfd = {"System.Posix.Internals","System.Posix.Internals.const_f_setfd","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46const_95f_95setfd) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_f_setfd();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46const_95f_95setfd);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_f_setfl" System.Posix.Internals.const_f_setfl 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46const_95f_95setfl = {"System.Posix.Internals","System.Posix.Internals.const_f_setfl","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46const_95f_95setfl) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_f_setfl();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46const_95f_95setfl);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_f_getfl" System.Posix.Internals.const_f_getfl 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46const_95f_95getfl = {"System.Posix.Internals","System.Posix.Internals.const_f_getfl","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46const_95f_95getfl) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_f_getfl();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46const_95f_95getfl);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_sig_setmask" System.Posix.Internals.const_sig_setmask 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46const_95sig_95setmask = {"System.Posix.Internals","System.Posix.Internals.const_sig_setmask","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46const_95sig_95setmask) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_sig_setmask();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46const_95sig_95setmask);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_sig_block" System.Posix.Internals.const_sig_block 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46const_95sig_95block = {"System.Posix.Internals","System.Posix.Internals.const_sig_block","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46const_95sig_95block) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_sig_block();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46const_95sig_95block);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_sigttou" System.Posix.Internals.const_sigttou 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46const_95sigttou = {"System.Posix.Internals","System.Posix.Internals.const_sigttou","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46const_95sigttou) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_sigttou();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46const_95sigttou);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_vtime" System.Posix.Internals.const_vtime 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46const_95vtime = {"System.Posix.Internals","System.Posix.Internals.const_vtime","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46const_95vtime) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_vtime();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46const_95vtime);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_vmin" System.Posix.Internals.const_vmin 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46const_95vmin = {"System.Posix.Internals","System.Posix.Internals.const_vmin","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46const_95vmin) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_vmin();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46const_95vmin);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_icanon" System.Posix.Internals.const_icanon 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46const_95icanon = {"System.Posix.Internals","System.Posix.Internals.const_icanon","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46const_95icanon) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_icanon();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46const_95icanon);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_tcsanow" System.Posix.Internals.const_tcsanow 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46const_95tcsanow = {"System.Posix.Internals","System.Posix.Internals.const_tcsanow","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46const_95tcsanow) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_tcsanow();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46const_95tcsanow);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_echo" System.Posix.Internals.const_echo 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46const_95echo = {"System.Posix.Internals","System.Posix.Internals.const_echo","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46const_95echo) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_echo();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46const_95echo);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_st_ino" System.Posix.Internals.st_ino# 1 :: FFI.Ptr -> FFI.Word32 */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46st_95ino_35 = {"System.Posix.Internals","System.Posix.Internals.st_ino#","FFI.Word32"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46st_95ino_35) {
  NodePtr nodeptr;
  HsWord32 result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = __hscore_st_ino(arg1);

  nodeptr = nhc_mkWord32(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46st_95ino_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_st_dev" System.Posix.Internals.st_dev# 1 :: FFI.Ptr -> FFI.Int32 */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46st_95dev_35 = {"System.Posix.Internals","System.Posix.Internals.st_dev#","FFI.Int32"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46st_95dev_35) {
  NodePtr nodeptr;
  HsInt32 result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = __hscore_st_dev(arg1);

  nodeptr = nhc_mkInt32(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46st_95dev_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_st_mode" System.Posix.Internals.st_mode# 1 :: FFI.Ptr -> FFI.Word16 */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46st_95mode_35 = {"System.Posix.Internals","System.Posix.Internals.st_mode#","FFI.Word16"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46st_95mode_35) {
  NodePtr nodeptr;
  HsWord16 result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = __hscore_st_mode(arg1);

  nodeptr = nhc_mkWord16(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46st_95mode_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_st_size" System.Posix.Internals.st_size# 1 :: FFI.Ptr -> FFI.Int64 */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46st_95size_35 = {"System.Posix.Internals","System.Posix.Internals.st_size#","FFI.Int64"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46st_95size_35) {
  NodePtr nodeptr;
  HsInt64 result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = __hscore_st_size(arg1);

  nodeptr = nhc_mkInt64(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46st_95size_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_st_mtime" System.Posix.Internals.st_mtime# 1 :: FFI.Ptr -> FFI.Word32 */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46st_95mtime_35 = {"System.Posix.Internals","System.Posix.Internals.st_mtime#","FFI.Word32"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46st_95mtime_35) {
  NodePtr nodeptr;
  HsWord32 result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = __hscore_st_mtime(arg1);

  nodeptr = nhc_mkWord32(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46st_95mtime_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_sizeof_stat" System.Posix.Internals.sizeof_stat 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46sizeof_95stat = {"System.Posix.Internals","System.Posix.Internals.sizeof_stat","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46sizeof_95stat) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_sizeof_stat();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46sizeof_95stat);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_s_isfifo" System.Posix.Internals.c_s_isfifo 1 :: FFI.Word16 -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95s_95isfifo = {"System.Posix.Internals","System.Posix.Internals.c_s_isfifo","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95s_95isfifo) {
  NodePtr nodeptr;
  HsInt result;
  HsWord16 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = __hscore_s_isfifo(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95s_95isfifo);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_s_isdir" System.Posix.Internals.c_s_isdir 1 :: FFI.Word16 -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95s_95isdir = {"System.Posix.Internals","System.Posix.Internals.c_s_isdir","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95s_95isdir) {
  NodePtr nodeptr;
  HsInt result;
  HsWord16 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = __hscore_s_isdir(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95s_95isdir);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_s_isblk" System.Posix.Internals.c_s_isblk 1 :: FFI.Word16 -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95s_95isblk = {"System.Posix.Internals","System.Posix.Internals.c_s_isblk","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95s_95isblk) {
  NodePtr nodeptr;
  HsInt result;
  HsWord16 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = __hscore_s_isblk(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95s_95isblk);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_s_ischr" System.Posix.Internals.c_s_ischr 1 :: FFI.Word16 -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95s_95ischr = {"System.Posix.Internals","System.Posix.Internals.c_s_ischr","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95s_95ischr) {
  NodePtr nodeptr;
  HsInt result;
  HsWord16 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = __hscore_s_ischr(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95s_95ischr);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_s_isreg" System.Posix.Internals.c_s_isreg 1 :: FFI.Word16 -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95s_95isreg = {"System.Posix.Internals","System.Posix.Internals.c_s_isreg","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95s_95isreg) {
  NodePtr nodeptr;
  HsInt result;
  HsWord16 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = __hscore_s_isreg(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95s_95isreg);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_o_binary" System.Posix.Internals.o_BINARY 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46o_95BINARY = {"System.Posix.Internals","System.Posix.Internals.o_BINARY","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46o_95BINARY) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_o_binary();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46o_95BINARY);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_o_nonblock" System.Posix.Internals.o_NONBLOCK 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46o_95NONBLOCK = {"System.Posix.Internals","System.Posix.Internals.o_NONBLOCK","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46o_95NONBLOCK) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_o_nonblock();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46o_95NONBLOCK);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_o_noctty" System.Posix.Internals.o_NOCTTY 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46o_95NOCTTY = {"System.Posix.Internals","System.Posix.Internals.o_NOCTTY","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46o_95NOCTTY) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_o_noctty();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46o_95NOCTTY);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_o_trunc" System.Posix.Internals.o_TRUNC 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46o_95TRUNC = {"System.Posix.Internals","System.Posix.Internals.o_TRUNC","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46o_95TRUNC) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_o_trunc();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46o_95TRUNC);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_o_excl" System.Posix.Internals.o_EXCL 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46o_95EXCL = {"System.Posix.Internals","System.Posix.Internals.o_EXCL","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46o_95EXCL) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_o_excl();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46o_95EXCL);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_o_creat" System.Posix.Internals.o_CREAT 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46o_95CREAT = {"System.Posix.Internals","System.Posix.Internals.o_CREAT","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46o_95CREAT) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_o_creat();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46o_95CREAT);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_o_append" System.Posix.Internals.o_APPEND 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46o_95APPEND = {"System.Posix.Internals","System.Posix.Internals.o_APPEND","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46o_95APPEND) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_o_append();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46o_95APPEND);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_o_rdwr" System.Posix.Internals.o_RDWR 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46o_95RDWR = {"System.Posix.Internals","System.Posix.Internals.o_RDWR","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46o_95RDWR) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_o_rdwr();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46o_95RDWR);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_o_wronly" System.Posix.Internals.o_WRONLY 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46o_95WRONLY = {"System.Posix.Internals","System.Posix.Internals.o_WRONLY","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46o_95WRONLY) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_o_wronly();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46o_95WRONLY);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_o_rdonly" System.Posix.Internals.o_RDONLY 0 ::  -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46o_95RDONLY = {"System.Posix.Internals","System.Posix.Internals.o_RDONLY","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46o_95RDONLY) {
  NodePtr nodeptr;
  HsInt result;
;

  result = __hscore_o_rdonly();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46o_95RDONLY);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h waitpid" System.Posix.Internals.c_waitpid# 3 :: FFI.Int32 -> FFI.Ptr -> Prelude.Int -> FFI.Int32 */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95waitpid_35 = {"System.Posix.Internals","System.Posix.Internals.c_waitpid#","FFI.Int32"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95waitpid_35) {
  NodePtr nodeptr;
  HsInt32 result;
  HsInt32 arg1;
  void* arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt32)GET_32BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = waitpid(arg1,arg2,arg3);

  nodeptr = nhc_mkInt32(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95waitpid_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_utime" System.Posix.Internals.c_utime# 2 :: FFI.Ptr -> FFI.Ptr -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95utime_35 = {"System.Posix.Internals","System.Posix.Internals.c_utime#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95utime_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  void* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);

  result = __hscore_utime(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95utime_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h tcsetattr" System.Posix.Internals.c_tcsetattr# 3 :: Prelude.Int -> Prelude.Int -> FFI.Ptr -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95tcsetattr_35 = {"System.Posix.Internals","System.Posix.Internals.c_tcsetattr#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95tcsetattr_35) {
  NodePtr nodeptr;
  HsInt result;
  HsInt arg1;
  HsInt arg2;
  void* arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (void*)GET_INT_VALUE(nodeptr);

  result = tcsetattr(arg1,arg2,arg3);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95tcsetattr_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h tcgetattr" System.Posix.Internals.c_tcgetattr# 2 :: Prelude.Int -> FFI.Ptr -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95tcgetattr_35 = {"System.Posix.Internals","System.Posix.Internals.c_tcgetattr#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95tcgetattr_35) {
  NodePtr nodeptr;
  HsInt result;
  HsInt arg1;
  void* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);

  result = tcgetattr(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95tcgetattr_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h sigprocmask" System.Posix.Internals.c_sigprocmask# 3 :: Prelude.Int -> FFI.Ptr -> FFI.Ptr -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95sigprocmask_35 = {"System.Posix.Internals","System.Posix.Internals.c_sigprocmask#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95sigprocmask_35) {
  NodePtr nodeptr;
  HsInt result;
  HsInt arg1;
  void* arg2;
  void* arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (void*)GET_INT_VALUE(nodeptr);

  result = sigprocmask(arg1,arg2,arg3);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95sigprocmask_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_sigaddset" System.Posix.Internals.c_sigaddset# 2 :: FFI.Ptr -> Prelude.Int -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95sigaddset_35 = {"System.Posix.Internals","System.Posix.Internals.c_sigaddset#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95sigaddset_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  HsInt arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);

  result = __hscore_sigaddset(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95sigaddset_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_sigemptyset" System.Posix.Internals.c_sigemptyset# 1 :: FFI.Ptr -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95sigemptyset_35 = {"System.Posix.Internals","System.Posix.Internals.c_sigemptyset#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95sigemptyset_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = __hscore_sigemptyset(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95sigemptyset_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h pipe" System.Posix.Internals.c_pipe# 1 :: FFI.Ptr -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95pipe_35 = {"System.Posix.Internals","System.Posix.Internals.c_pipe#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95pipe_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = pipe(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95pipe_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h mkfifo" System.Posix.Internals.c_mkfifo# 2 :: FFI.Ptr -> FFI.Word16 -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95mkfifo_35 = {"System.Posix.Internals","System.Posix.Internals.c_mkfifo#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95mkfifo_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  HsWord16 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = mkfifo(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95mkfifo_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h link" System.Posix.Internals.c_link# 2 :: FFI.Ptr -> FFI.Ptr -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95link_35 = {"System.Posix.Internals","System.Posix.Internals.c_link#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95link_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  void* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);

  result = link(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95link_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h fork" System.Posix.Internals.c_fork# 1 :: Prelude.() -> FFI.Int32 */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95fork_35 = {"System.Posix.Internals","System.Posix.Internals.c_fork#","FFI.Int32"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95fork_35) {
  NodePtr nodeptr;
  HsInt32 result;
  /* void arg1 */;

  result = fork();

  nodeptr = nhc_mkInt32(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95fork_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h fcntl_lock" System.Posix.Internals.c_fcntl_lock# 3 :: Prelude.Int -> Prelude.Int -> FFI.Ptr -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95fcntl_95lock_35 = {"System.Posix.Internals","System.Posix.Internals.c_fcntl_lock#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95fcntl_95lock_35) {
  NodePtr nodeptr;
  HsInt result;
  HsInt arg1;
  HsInt arg2;
  void* arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (void*)GET_INT_VALUE(nodeptr);

  result = fcntl_lock(arg1,arg2,arg3);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95fcntl_95lock_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h fcntl_write" System.Posix.Internals.c_fcntl_write# 3 :: Prelude.Int -> Prelude.Int -> FFI.Int32 -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95fcntl_95write_35 = {"System.Posix.Internals","System.Posix.Internals.c_fcntl_write#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95fcntl_95write_35) {
  NodePtr nodeptr;
  HsInt result;
  HsInt arg1;
  HsInt arg2;
  HsInt32 arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt32)GET_32BIT_VALUE(nodeptr);

  result = fcntl_write(arg1,arg2,arg3);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95fcntl_95write_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h fcntl_read" System.Posix.Internals.c_fcntl_read# 2 :: Prelude.Int -> Prelude.Int -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95fcntl_95read_35 = {"System.Posix.Internals","System.Posix.Internals.c_fcntl_read#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95fcntl_95read_35) {
  NodePtr nodeptr;
  HsInt result;
  HsInt arg1;
  HsInt arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);

  result = fcntl_read(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95fcntl_95read_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h getpid" System.Posix.Internals.c_getpid# 1 :: Prelude.() -> FFI.Int32 */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95getpid_35 = {"System.Posix.Internals","System.Posix.Internals.c_getpid#","FFI.Int32"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95getpid_35) {
  NodePtr nodeptr;
  HsInt32 result;
  /* void arg1 */;

  result = getpid();

  nodeptr = nhc_mkInt32(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95getpid_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h unlink" System.Posix.Internals.c_unlink# 1 :: FFI.Ptr -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95unlink_35 = {"System.Posix.Internals","System.Posix.Internals.c_unlink#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95unlink_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = unlink(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95unlink_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_ftruncate" System.Posix.Internals.c_ftruncate# 2 :: Prelude.Int -> FFI.Int64 -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95ftruncate_35 = {"System.Posix.Internals","System.Posix.Internals.c_ftruncate#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95ftruncate_35) {
  NodePtr nodeptr;
  HsInt result;
  HsInt arg1;
  HsInt64 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt64)nhc_get_64bit_value(nodeptr);

  result = __hscore_ftruncate(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95ftruncate_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h write" System.Posix.Internals.c_safe_write# 3 :: Prelude.Int -> FFI.Ptr -> Prelude.Int -> FFI.Int32 */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95safe_95write_35 = {"System.Posix.Internals","System.Posix.Internals.c_safe_write#","FFI.Int32"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95safe_95write_35) {
  NodePtr nodeptr;
  HsInt32 result;
  HsInt arg1;
  void* arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = write(arg1,arg2,arg3);

  nodeptr = nhc_mkInt32(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95safe_95write_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h write" System.Posix.Internals.c_write# 3 :: Prelude.Int -> FFI.Ptr -> Prelude.Int -> FFI.Int32 */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95write_35 = {"System.Posix.Internals","System.Posix.Internals.c_write#","FFI.Int32"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95write_35) {
  NodePtr nodeptr;
  HsInt32 result;
  HsInt arg1;
  void* arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = write(arg1,arg2,arg3);

  nodeptr = nhc_mkInt32(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95write_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h umask" System.Posix.Internals.c_umask# 1 :: FFI.Word16 -> FFI.Word16 */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95umask_35 = {"System.Posix.Internals","System.Posix.Internals.c_umask#","FFI.Word16"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95umask_35) {
  NodePtr nodeptr;
  HsWord16 result;
  HsWord16 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = umask(arg1);

  nodeptr = nhc_mkWord16(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95umask_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_stat" System.Posix.Internals.c_stat# 2 :: FFI.Ptr -> FFI.Ptr -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95stat_35 = {"System.Posix.Internals","System.Posix.Internals.c_stat#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95stat_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  void* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);

  result = __hscore_stat(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95stat_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h read" System.Posix.Internals.c_safe_read# 3 :: Prelude.Int -> FFI.Ptr -> Prelude.Int -> FFI.Int32 */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95safe_95read_35 = {"System.Posix.Internals","System.Posix.Internals.c_safe_read#","FFI.Int32"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95safe_95read_35) {
  NodePtr nodeptr;
  HsInt32 result;
  HsInt arg1;
  void* arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = read(arg1,arg2,arg3);

  nodeptr = nhc_mkInt32(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95safe_95read_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h read" System.Posix.Internals.c_read# 3 :: Prelude.Int -> FFI.Ptr -> Prelude.Int -> FFI.Int32 */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95read_35 = {"System.Posix.Internals","System.Posix.Internals.c_read#","FFI.Int32"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95read_35) {
  NodePtr nodeptr;
  HsInt32 result;
  HsInt arg1;
  void* arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = read(arg1,arg2,arg3);

  nodeptr = nhc_mkInt32(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95read_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_open" System.Posix.Internals.c_open# 3 :: FFI.Ptr -> Prelude.Int -> FFI.Word16 -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95open_35 = {"System.Posix.Internals","System.Posix.Internals.c_open#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95open_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  HsInt arg2;
  HsWord16 arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = __hscore_open(arg1,arg2,arg3);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95open_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_lstat" System.Posix.Internals.lstat# 2 :: FFI.Ptr -> FFI.Ptr -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46lstat_35 = {"System.Posix.Internals","System.Posix.Internals.lstat#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46lstat_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  void* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);

  result = __hscore_lstat(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46lstat_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_lseek" System.Posix.Internals.c_lseek# 3 :: Prelude.Int -> FFI.Int64 -> Prelude.Int -> FFI.Int64 */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95lseek_35 = {"System.Posix.Internals","System.Posix.Internals.c_lseek#","FFI.Int64"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95lseek_35) {
  NodePtr nodeptr;
  HsInt64 result;
  HsInt arg1;
  HsInt64 arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt64)nhc_get_64bit_value(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = __hscore_lseek(arg1,arg2,arg3);

  nodeptr = nhc_mkInt64(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95lseek_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h isatty" System.Posix.Internals.c_isatty# 1 :: Prelude.Int -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95isatty_35 = {"System.Posix.Internals","System.Posix.Internals.c_isatty#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95isatty_35) {
  NodePtr nodeptr;
  HsInt result;
  HsInt arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);

  result = isatty(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95isatty_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h __hscore_fstat" System.Posix.Internals.c_fstat# 2 :: Prelude.Int -> FFI.Ptr -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95fstat_35 = {"System.Posix.Internals","System.Posix.Internals.c_fstat#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95fstat_35) {
  NodePtr nodeptr;
  HsInt result;
  HsInt arg1;
  void* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);

  result = __hscore_fstat(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95fstat_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h dup2" System.Posix.Internals.c_dup2# 2 :: Prelude.Int -> Prelude.Int -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95dup2_35 = {"System.Posix.Internals","System.Posix.Internals.c_dup2#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95dup2_35) {
  NodePtr nodeptr;
  HsInt result;
  HsInt arg1;
  HsInt arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);

  result = dup2(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95dup2_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h dup" System.Posix.Internals.c_dup# 1 :: Prelude.Int -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95dup_35 = {"System.Posix.Internals","System.Posix.Internals.c_dup#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95dup_35) {
  NodePtr nodeptr;
  HsInt result;
  HsInt arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);

  result = dup(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95dup_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h creat" System.Posix.Internals.c_creat# 2 :: FFI.Ptr -> FFI.Word16 -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95creat_35 = {"System.Posix.Internals","System.Posix.Internals.c_creat#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95creat_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  HsWord16 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = creat(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95creat_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h close" System.Posix.Internals.c_close# 1 :: Prelude.Int -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95close_35 = {"System.Posix.Internals","System.Posix.Internals.c_close#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95close_35) {
  NodePtr nodeptr;
  HsInt result;
  HsInt arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);

  result = close(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95close_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h chmod" System.Posix.Internals.c_chmod# 2 :: FFI.Ptr -> FFI.Word16 -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95chmod_35 = {"System.Posix.Internals","System.Posix.Internals.c_chmod#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95chmod_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  HsWord16 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = chmod(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95chmod_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "HsBase.h access" System.Posix.Internals.c_access# 2 :: FFI.Ptr -> Prelude.Int -> Prelude.Int */
#include "HsBase.h"
#ifdef PROFILE
static SInfo pf_System_46Posix_46Internals_46c_95access_35 = {"System.Posix.Internals","System.Posix.Internals.c_access#","Prelude.Int"};
#endif
C_HEADER(FR_System_46Posix_46Internals_46c_95access_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  HsInt arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);

  result = access(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46Posix_46Internals_46c_95access_35);
  C_RETURN(nodeptr);
}
