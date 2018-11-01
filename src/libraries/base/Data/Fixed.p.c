#include "newmacros.h"
#include "runtime.h"

#define PS_Data_46Fixed_46MkFixed	((void*)startLabel+24)
#define PS_Data_46Fixed_46E0	((void*)startLabel+52)
#define C0_Data_46Fixed_46E0	((void*)startLabel+64)
#define PS_Data_46Fixed_46E1	((void*)startLabel+100)
#define C0_Data_46Fixed_46E1	((void*)startLabel+112)
#define PS_Data_46Fixed_46E2	((void*)startLabel+148)
#define C0_Data_46Fixed_46E2	((void*)startLabel+160)
#define PS_Data_46Fixed_46E3	((void*)startLabel+196)
#define C0_Data_46Fixed_46E3	((void*)startLabel+208)
#define PS_Data_46Fixed_46E6	((void*)startLabel+244)
#define C0_Data_46Fixed_46E6	((void*)startLabel+256)
#define PS_Data_46Fixed_46E9	((void*)startLabel+292)
#define C0_Data_46Fixed_46E9	((void*)startLabel+304)
#define PS_Data_46Fixed_46E12	((void*)startLabel+340)
#define C0_Data_46Fixed_46E12	((void*)startLabel+352)
#define CT_v1492	((void*)startLabel+432)
#define CT_v1495	((void*)startLabel+512)
#define CT_v1498	((void*)startLabel+592)
#define CT_v1501	((void*)startLabel+672)
#define CT_v1504	((void*)startLabel+752)
#define CT_v1507	((void*)startLabel+832)
#define CT_v1510	((void*)startLabel+912)
#define FN_Data_46Fixed_46withDot	((void*)startLabel+948)
#define v1517	((void*)startLabel+958)
#define v1514	((void*)startLabel+962)
#define v1511	((void*)startLabel+972)
#define CT_v1520	((void*)startLabel+1064)
#define F0_Data_46Fixed_46withDot	((void*)startLabel+1072)
#define FN_LAMBDA1453	((void*)startLabel+1104)
#define CT_v1524	((void*)startLabel+1148)
#define CF_LAMBDA1453	((void*)startLabel+1156)
#define FN_Data_46Fixed_46chopZeros	((void*)startLabel+1184)
#define v1525	((void*)startLabel+1211)
#define v1529	((void*)startLabel+1261)
#define CT_v1541	((void*)startLabel+1472)
#define F0_Data_46Fixed_46chopZeros	((void*)startLabel+1480)
#define FN_LAMBDA1454	((void*)startLabel+1536)
#define CT_v1544	((void*)startLabel+1580)
#define CF_LAMBDA1454	((void*)startLabel+1588)
#define FN_Data_46Fixed_46showIntegerZeros	((void*)startLabel+1620)
#define v1555	((void*)startLabel+1632)
#define v1548	((void*)startLabel+1636)
#define v1545	((void*)startLabel+1664)
#define CT_v1564	((void*)startLabel+1928)
#define F0_Data_46Fixed_46showIntegerZeros	((void*)startLabel+1936)
#define FN_LAMBDA1456	((void*)startLabel+2000)
#define v1565	((void*)startLabel+2018)
#define CT_v1570	((void*)startLabel+2060)
#define F0_LAMBDA1456	((void*)startLabel+2068)
#define FN_LAMBDA1455	((void*)startLabel+2100)
#define CT_v1573	((void*)startLabel+2144)
#define CF_LAMBDA1455	((void*)startLabel+2152)
#define v1574	((void*)startLabel+2264)
#define CT_v1598	((void*)startLabel+2840)
#define FN_Data_46Fixed_46Prelude_46292_46maxnum	((void*)startLabel+2964)
#define CT_v1605	((void*)startLabel+3144)
#define F0_Data_46Fixed_46Prelude_46292_46maxnum	((void*)startLabel+3152)
#define FN_Data_46Fixed_46Prelude_46291_46digits	((void*)startLabel+3204)
#define CT_v1611	((void*)startLabel+3340)
#define F0_Data_46Fixed_46Prelude_46291_46digits	((void*)startLabel+3348)
#define FN_LAMBDA1459	((void*)startLabel+3388)
#define CT_v1614	((void*)startLabel+3408)
#define F0_LAMBDA1459	((void*)startLabel+3416)
#define FN_LAMBDA1458	((void*)startLabel+3444)
#define CT_v1617	((void*)startLabel+3464)
#define F0_LAMBDA1458	((void*)startLabel+3472)
#define FN_LAMBDA1457	((void*)startLabel+3500)
#define CT_v1621	((void*)startLabel+3544)
#define CF_LAMBDA1457	((void*)startLabel+3552)
#define CT_v1626	((void*)startLabel+3684)
#define CT_v1631	((void*)startLabel+3804)
#define CT_v1636	((void*)startLabel+3928)
#define CT_v1641	((void*)startLabel+4052)
#define CT_v1646	((void*)startLabel+4180)
#define CT_v1651	((void*)startLabel+4312)
#define CT_v1656	((void*)startLabel+4444)
#define CT_v1661	((void*)startLabel+4576)
#define CT_v1670	((void*)startLabel+4892)
#define FN_Data_46Fixed_46Prelude_46265_46i	((void*)startLabel+4956)
#define CT_v1674	((void*)startLabel+5008)
#define F0_Data_46Fixed_46Prelude_46265_46i	((void*)startLabel+5016)
#define FN_Data_46Fixed_46withType	((void*)startLabel+5048)
#define CT_v1677	((void*)startLabel+5072)
#define F0_Data_46Fixed_46withType	((void*)startLabel+5080)
#define FN_Data_46Fixed_46withResolution	((void*)startLabel+5116)
#define CT_v1683	((void*)startLabel+5228)
#define F0_Data_46Fixed_46withResolution	((void*)startLabel+5236)
#define CT_v1688	((void*)startLabel+5356)
#define FN_LAMBDA1460	((void*)startLabel+5404)
#define CT_v1694	((void*)startLabel+5520)
#define F0_LAMBDA1460	((void*)startLabel+5528)
#define CT_v1701	((void*)startLabel+5720)
#define CT_v1708	((void*)startLabel+5916)
#define CT_v1715	((void*)startLabel+6120)
#define CT_v1720	((void*)startLabel+6256)
#define FN_LAMBDA1461	((void*)startLabel+6304)
#define CT_v1724	((void*)startLabel+6356)
#define F0_LAMBDA1461	((void*)startLabel+6364)
#define CT_v1729	((void*)startLabel+6476)
#define CT_v1733	((void*)startLabel+6576)
#define CT_v1737	((void*)startLabel+6672)
#define CT_v1744	((void*)startLabel+6856)
#define CT_v1748	((void*)startLabel+6964)
#define CT_v1752	((void*)startLabel+7060)
#define CT_v1757	((void*)startLabel+7184)
#define CT_v1762	((void*)startLabel+7316)
#define CT_v1767	((void*)startLabel+7448)
#define CT_v1772	((void*)startLabel+7572)
#define CT_v1776	((void*)startLabel+7672)
#define CT_v1780	((void*)startLabel+7772)
#define CT_v1784	((void*)startLabel+7872)
#define CT_v1788	((void*)startLabel+7964)
#define CT_v1793	((void*)startLabel+8088)
#define FN_LAMBDA1462	((void*)startLabel+8132)
#define CT_v1797	((void*)startLabel+8176)
#define CF_LAMBDA1462	((void*)startLabel+8184)
#define CT_v1804	((void*)startLabel+8384)
#define CT_v1814	((void*)startLabel+8724)
#define FN_Data_46Fixed_46Prelude_46207_46f	((void*)startLabel+8800)
#define CT_v1818	((void*)startLabel+8852)
#define F0_Data_46Fixed_46Prelude_46207_46f	((void*)startLabel+8860)
#define CT_v1829	((void*)startLabel+9256)
#define FN_Data_46Fixed_46Prelude_46204_46f	((void*)startLabel+9332)
#define CT_v1833	((void*)startLabel+9384)
#define F0_Data_46Fixed_46Prelude_46204_46f	((void*)startLabel+9392)
#define CT_v1837	((void*)startLabel+9480)
#define CT_v1841	((void*)startLabel+9576)
#define CT_v1845	((void*)startLabel+9672)
#define CT_v1849	((void*)startLabel+9772)
#define CT_v1853	((void*)startLabel+9872)
#define CT_v1857	((void*)startLabel+9972)
#define CT_v1861	((void*)startLabel+10072)
#define CT_v1865	((void*)startLabel+10172)
#define CT_v1869	((void*)startLabel+10268)
#define CT_v1873	((void*)startLabel+10380)
#define CT_v1877	((void*)startLabel+10504)
#define CT_v1880	((void*)startLabel+10592)
#define CT_v1884	((void*)startLabel+10708)
#define CT_v1896	((void*)startLabel+11096)
#define CT_v1902	((void*)startLabel+11296)
#define CT_v1910	((void*)startLabel+11536)
#define CT_v1921	((void*)startLabel+11880)
#define CT_v1929	((void*)startLabel+12136)
#define CT_v1933	((void*)startLabel+12256)
#define CT_v1937	((void*)startLabel+12364)
#define CT_v1941	((void*)startLabel+12472)
#define CT_v1945	((void*)startLabel+12580)
#define CT_v1949	((void*)startLabel+12688)
#define CT_v1953	((void*)startLabel+12796)
#define CT_v1957	((void*)startLabel+12904)
#define ST_v1523	((void*)startLabel+12936)
#define ST_v1620	((void*)startLabel+12937)
#define ST_v1489	((void*)startLabel+12940)
#define ST_v1931	((void*)startLabel+12952)
#define ST_v1509	((void*)startLabel+12992)
#define ST_v1935	((void*)startLabel+13044)
#define ST_v1506	((void*)startLabel+13084)
#define ST_v1955	((void*)startLabel+13136)
#define ST_v1491	((void*)startLabel+13176)
#define ST_v1939	((void*)startLabel+13228)
#define ST_v1503	((void*)startLabel+13268)
#define ST_v1943	((void*)startLabel+13320)
#define ST_v1500	((void*)startLabel+13360)
#define ST_v1947	((void*)startLabel+13412)
#define ST_v1497	((void*)startLabel+13452)
#define ST_v1951	((void*)startLabel+13504)
#define ST_v1494	((void*)startLabel+13544)
#define ST_v1790	((void*)startLabel+13596)
#define PP_LAMBDA1462	((void*)startLabel+13620)
#define PC_LAMBDA1462	((void*)startLabel+13620)
#define ST_v1795	((void*)startLabel+13620)
#define PP_Data_46Fixed_46chopZeros	((void*)startLabel+13650)
#define PC_Data_46Fixed_46chopZeros	((void*)startLabel+13650)
#define ST_v1534	((void*)startLabel+13650)
#define PP_LAMBDA1454	((void*)startLabel+13671)
#define PC_LAMBDA1454	((void*)startLabel+13671)
#define ST_v1543	((void*)startLabel+13671)
#define ST_v1799	((void*)startLabel+13708)
#define ST_v1820	((void*)startLabel+13724)
#define PP_Data_46Fixed_46Prelude_46204_46f	((void*)startLabel+13743)
#define PC_Data_46Fixed_46Prelude_46204_46f	((void*)startLabel+13743)
#define ST_v1831	((void*)startLabel+13743)
#define ST_v1806	((void*)startLabel+13776)
#define PP_Data_46Fixed_46Prelude_46207_46f	((void*)startLabel+13792)
#define PC_Data_46Fixed_46Prelude_46207_46f	((void*)startLabel+13792)
#define ST_v1816	((void*)startLabel+13792)
#define ST_v1879	((void*)startLabel+13820)
#define ST_v1579	((void*)startLabel+13844)
#define PP_LAMBDA1457	((void*)startLabel+13865)
#define PC_LAMBDA1457	((void*)startLabel+13865)
#define ST_v1619	((void*)startLabel+13865)
#define PP_LAMBDA1458	((void*)startLabel+13900)
#define PC_LAMBDA1458	((void*)startLabel+13900)
#define ST_v1616	((void*)startLabel+13900)
#define PP_LAMBDA1459	((void*)startLabel+13927)
#define PC_LAMBDA1459	((void*)startLabel+13927)
#define ST_v1613	((void*)startLabel+13927)
#define PP_Data_46Fixed_46Prelude_46291_46digits	((void*)startLabel+13954)
#define PC_Data_46Fixed_46Prelude_46291_46digits	((void*)startLabel+13954)
#define ST_v1607	((void*)startLabel+13954)
#define PP_Data_46Fixed_46Prelude_46292_46maxnum	((void*)startLabel+13988)
#define PC_Data_46Fixed_46Prelude_46292_46maxnum	((void*)startLabel+13988)
#define ST_v1600	((void*)startLabel+13988)
#define PP_Data_46Fixed_46showIntegerZeros	((void*)startLabel+14022)
#define PC_Data_46Fixed_46showIntegerZeros	((void*)startLabel+14022)
#define ST_v1554	((void*)startLabel+14022)
#define PP_LAMBDA1455	((void*)startLabel+14050)
#define PC_LAMBDA1455	((void*)startLabel+14050)
#define ST_v1572	((void*)startLabel+14050)
#define PP_LAMBDA1456	((void*)startLabel+14092)
#define PC_LAMBDA1456	((void*)startLabel+14092)
#define ST_v1568	((void*)startLabel+14092)
#define PP_Data_46Fixed_46withDot	((void*)startLabel+14134)
#define PC_Data_46Fixed_46withDot	((void*)startLabel+14134)
#define ST_v1516	((void*)startLabel+14134)
#define PP_LAMBDA1453	((void*)startLabel+14153)
#define PC_LAMBDA1453	((void*)startLabel+14153)
#define ST_v1522	((void*)startLabel+14153)
#define PP_Data_46Fixed_46withResolution	((void*)startLabel+14186)
#define PC_Data_46Fixed_46withResolution	((void*)startLabel+14186)
#define ST_v1679	((void*)startLabel+14186)
#define PP_Data_46Fixed_46withType	((void*)startLabel+14212)
#define PC_Data_46Fixed_46withType	((void*)startLabel+14212)
#define ST_v1676	((void*)startLabel+14212)
#define ST_v1796	((void*)startLabel+14232)
#define ST_v1882	((void*)startLabel+14284)
#define ST_v1769	((void*)startLabel+14316)
#define ST_v1764	((void*)startLabel+14356)
#define ST_v1754	((void*)startLabel+14400)
#define ST_v1759	((void*)startLabel+14448)
#define ST_v1774	((void*)startLabel+14492)
#define ST_v1782	((void*)startLabel+14532)
#define ST_v1786	((void*)startLabel+14568)
#define ST_v1778	((void*)startLabel+14604)
#define ST_v1871	((void*)startLabel+14644)
#define ST_v1867	((void*)startLabel+14672)
#define ST_v1863	((void*)startLabel+14704)
#define ST_v1904	((void*)startLabel+14736)
#define ST_v1703	((void*)startLabel+14772)
#define ST_v1685	((void*)startLabel+14812)
#define PP_LAMBDA1460	((void*)startLabel+14861)
#define PC_LAMBDA1460	((void*)startLabel+14861)
#define ST_v1690	((void*)startLabel+14861)
#define ST_v1696	((void*)startLabel+14924)
#define ST_v1886	((void*)startLabel+14968)
#define ST_v1739	((void*)startLabel+15000)
#define ST_v1750	((void*)startLabel+15032)
#define ST_v1746	((void*)startLabel+15064)
#define ST_v1731	((void*)startLabel+15096)
#define ST_v1717	((void*)startLabel+15132)
#define PP_LAMBDA1461	((void*)startLabel+15173)
#define PC_LAMBDA1461	((void*)startLabel+15173)
#define ST_v1722	((void*)startLabel+15173)
#define ST_v1735	((void*)startLabel+15228)
#define ST_v1726	((void*)startLabel+15264)
#define ST_v1875	((void*)startLabel+15300)
#define ST_v1859	((void*)startLabel+15332)
#define ST_v1839	((void*)startLabel+15364)
#define ST_v1851	((void*)startLabel+15396)
#define ST_v1855	((void*)startLabel+15428)
#define ST_v1835	((void*)startLabel+15460)
#define ST_v1847	((void*)startLabel+15500)
#define ST_v1843	((void*)startLabel+15536)
#define ST_v1898	((void*)startLabel+15572)
#define ST_v1710	((void*)startLabel+15604)
#define ST_v1912	((void*)startLabel+15648)
#define ST_v1648	((void*)startLabel+15684)
#define ST_v1643	((void*)startLabel+15728)
#define ST_v1663	((void*)startLabel+15768)
#define PP_Data_46Fixed_46Prelude_46265_46i	((void*)startLabel+15817)
#define PC_Data_46Fixed_46Prelude_46265_46i	((void*)startLabel+15817)
#define ST_v1672	((void*)startLabel+15817)
#define ST_v1653	((void*)startLabel+15880)
#define ST_v1658	((void*)startLabel+15920)
#define ST_v1923	((void*)startLabel+15964)
#define ST_v1623	((void*)startLabel+15996)
#define ST_v1633	((void*)startLabel+16032)
#define ST_v1638	((void*)startLabel+16072)
#define ST_v1628	((void*)startLabel+16112)
#define PS_v1801	((void*)startLabel+16152)
#define PS_v1800	((void*)startLabel+16164)
#define PS_v1798	((void*)startLabel+16176)
#define PS_v1803	((void*)startLabel+16188)
#define PS_v1802	((void*)startLabel+16200)
#define PS_v1827	((void*)startLabel+16212)
#define PS_v1822	((void*)startLabel+16224)
#define PS_v1826	((void*)startLabel+16236)
#define PS_v1828	((void*)startLabel+16248)
#define PS_v1824	((void*)startLabel+16260)
#define PS_v1825	((void*)startLabel+16272)
#define PS_v1819	((void*)startLabel+16284)
#define PS_v1821	((void*)startLabel+16296)
#define PS_v1823	((void*)startLabel+16308)
#define PS_v1812	((void*)startLabel+16320)
#define PS_v1811	((void*)startLabel+16332)
#define PS_v1813	((void*)startLabel+16344)
#define PS_v1808	((void*)startLabel+16356)
#define PS_v1809	((void*)startLabel+16368)
#define PS_v1805	((void*)startLabel+16380)
#define PS_v1810	((void*)startLabel+16392)
#define PS_v1807	((void*)startLabel+16404)
#define PS_v1878	((void*)startLabel+16416)
#define PS_v1675	((void*)startLabel+16428)
#define PS_v1681	((void*)startLabel+16440)
#define PS_v1680	((void*)startLabel+16452)
#define PS_v1682	((void*)startLabel+16464)
#define PS_v1678	((void*)startLabel+16476)
#define PS_v1535	((void*)startLabel+16488)
#define PS_v1533	((void*)startLabel+16500)
#define PS_v1538	((void*)startLabel+16512)
#define PS_v1537	((void*)startLabel+16524)
#define PS_v1539	((void*)startLabel+16536)
#define PS_v1540	((void*)startLabel+16548)
#define PS_v1536	((void*)startLabel+16560)
#define PS_v1556	((void*)startLabel+16572)
#define PS_v1563	((void*)startLabel+16584)
#define PS_v1562	((void*)startLabel+16596)
#define PS_v1560	((void*)startLabel+16608)
#define PS_v1553	((void*)startLabel+16620)
#define PS_v1558	((void*)startLabel+16632)
#define PS_v1561	((void*)startLabel+16644)
#define PS_v1557	((void*)startLabel+16656)
#define PS_v1559	((void*)startLabel+16668)
#define PS_v1519	((void*)startLabel+16680)
#define PS_v1515	((void*)startLabel+16692)
#define PS_v1518	((void*)startLabel+16704)
#define PS_v1584	((void*)startLabel+16716)
#define PS_v1587	((void*)startLabel+16728)
#define PS_v1585	((void*)startLabel+16740)
#define PS_v1582	((void*)startLabel+16752)
#define PS_v1586	((void*)startLabel+16764)
#define PS_v1596	((void*)startLabel+16776)
#define PS_v1597	((void*)startLabel+16788)
#define PS_v1578	((void*)startLabel+16800)
#define PS_v1595	((void*)startLabel+16812)
#define PS_v1591	((void*)startLabel+16824)
#define PS_v1593	((void*)startLabel+16836)
#define PS_v1594	((void*)startLabel+16848)
#define PS_v1580	((void*)startLabel+16860)
#define PS_v1583	((void*)startLabel+16872)
#define PS_v1588	((void*)startLabel+16884)
#define PS_v1592	((void*)startLabel+16896)
#define PS_v1581	((void*)startLabel+16908)
#define PS_v1589	((void*)startLabel+16920)
#define PS_v1590	((void*)startLabel+16932)
#define PS_v1832	((void*)startLabel+16944)
#define PS_v1830	((void*)startLabel+16956)
#define PS_v1817	((void*)startLabel+16968)
#define PS_v1815	((void*)startLabel+16980)
#define PS_v1792	((void*)startLabel+16992)
#define PS_v1789	((void*)startLabel+17004)
#define PS_v1791	((void*)startLabel+17016)
#define PS_v1785	((void*)startLabel+17028)
#define PS_v1787	((void*)startLabel+17040)
#define PS_v1781	((void*)startLabel+17052)
#define PS_v1783	((void*)startLabel+17064)
#define PS_v1779	((void*)startLabel+17076)
#define PS_v1777	((void*)startLabel+17088)
#define PS_v1773	((void*)startLabel+17100)
#define PS_v1775	((void*)startLabel+17112)
#define PS_v1768	((void*)startLabel+17124)
#define PS_v1771	((void*)startLabel+17136)
#define PS_v1770	((void*)startLabel+17148)
#define PS_v1763	((void*)startLabel+17160)
#define PS_v1766	((void*)startLabel+17172)
#define PS_v1765	((void*)startLabel+17184)
#define PS_v1758	((void*)startLabel+17196)
#define PS_v1761	((void*)startLabel+17208)
#define PS_v1760	((void*)startLabel+17220)
#define PS_v1753	((void*)startLabel+17232)
#define PS_v1756	((void*)startLabel+17244)
#define PS_v1755	((void*)startLabel+17256)
#define PS_v1749	((void*)startLabel+17268)
#define PS_v1751	((void*)startLabel+17280)
#define PS_v1745	((void*)startLabel+17292)
#define PS_v1747	((void*)startLabel+17304)
#define PS_v1742	((void*)startLabel+17316)
#define PS_v1741	((void*)startLabel+17328)
#define PS_v1738	((void*)startLabel+17340)
#define PS_v1743	((void*)startLabel+17352)
#define PS_v1740	((void*)startLabel+17364)
#define PS_v1734	((void*)startLabel+17376)
#define PS_v1736	((void*)startLabel+17388)
#define PS_v1730	((void*)startLabel+17400)
#define PS_v1732	((void*)startLabel+17412)
#define PS_v1725	((void*)startLabel+17424)
#define PS_v1728	((void*)startLabel+17436)
#define PS_v1727	((void*)startLabel+17448)
#define PS_v1719	((void*)startLabel+17460)
#define PS_v1716	((void*)startLabel+17472)
#define PS_v1718	((void*)startLabel+17484)
#define PS_v1713	((void*)startLabel+17496)
#define PS_v1712	((void*)startLabel+17508)
#define PS_v1709	((void*)startLabel+17520)
#define PS_v1711	((void*)startLabel+17532)
#define PS_v1714	((void*)startLabel+17544)
#define PS_v1705	((void*)startLabel+17556)
#define PS_v1704	((void*)startLabel+17568)
#define PS_v1702	((void*)startLabel+17580)
#define PS_v1707	((void*)startLabel+17592)
#define PS_v1706	((void*)startLabel+17604)
#define PS_v1698	((void*)startLabel+17616)
#define PS_v1697	((void*)startLabel+17628)
#define PS_v1695	((void*)startLabel+17640)
#define PS_v1700	((void*)startLabel+17652)
#define PS_v1699	((void*)startLabel+17664)
#define PS_v1687	((void*)startLabel+17676)
#define PS_v1684	((void*)startLabel+17688)
#define PS_v1686	((void*)startLabel+17700)
#define PS_v1665	((void*)startLabel+17712)
#define PS_v1667	((void*)startLabel+17724)
#define PS_v1669	((void*)startLabel+17736)
#define PS_v1662	((void*)startLabel+17748)
#define PS_v1664	((void*)startLabel+17760)
#define PS_v1668	((void*)startLabel+17772)
#define PS_v1666	((void*)startLabel+17784)
#define PS_v1671	((void*)startLabel+17796)
#define PS_v1673	((void*)startLabel+17808)
#define PS_v1657	((void*)startLabel+17820)
#define PS_v1659	((void*)startLabel+17832)
#define PS_v1660	((void*)startLabel+17844)
#define PS_v1652	((void*)startLabel+17856)
#define PS_v1654	((void*)startLabel+17868)
#define PS_v1655	((void*)startLabel+17880)
#define PS_v1647	((void*)startLabel+17892)
#define PS_v1649	((void*)startLabel+17904)
#define PS_v1650	((void*)startLabel+17916)
#define PS_v1642	((void*)startLabel+17928)
#define PS_v1645	((void*)startLabel+17940)
#define PS_v1644	((void*)startLabel+17952)
#define PS_v1606	((void*)startLabel+17964)
#define PS_v1610	((void*)startLabel+17976)
#define PS_v1609	((void*)startLabel+17988)
#define PS_v1608	((void*)startLabel+18000)
#define PS_v1602	((void*)startLabel+18012)
#define PS_v1604	((void*)startLabel+18024)
#define PS_v1601	((void*)startLabel+18036)
#define PS_v1603	((void*)startLabel+18048)
#define PS_v1599	((void*)startLabel+18060)
#define PS_v1624	((void*)startLabel+18072)
#define PS_v1625	((void*)startLabel+18084)
#define PS_v1622	((void*)startLabel+18096)
#define PS_v1508	((void*)startLabel+18108)
#define PS_v1505	((void*)startLabel+18120)
#define PS_v1502	((void*)startLabel+18132)
#define PS_v1499	((void*)startLabel+18144)
#define PS_v1496	((void*)startLabel+18156)
#define PS_v1493	((void*)startLabel+18168)
#define PS_v1490	((void*)startLabel+18180)
#define PS_v1640	((void*)startLabel+18192)
#define PS_v1637	((void*)startLabel+18204)
#define PS_v1639	((void*)startLabel+18216)
#define PS_v1635	((void*)startLabel+18228)
#define PS_v1632	((void*)startLabel+18240)
#define PS_v1634	((void*)startLabel+18252)
#define PS_v1630	((void*)startLabel+18264)
#define PS_v1627	((void*)startLabel+18276)
#define PS_v1629	((void*)startLabel+18288)
#define PS_v1862	((void*)startLabel+18300)
#define PS_v1864	((void*)startLabel+18312)
#define PS_v1868	((void*)startLabel+18324)
#define PS_v1866	((void*)startLabel+18336)
#define PS_v1838	((void*)startLabel+18348)
#define PS_v1840	((void*)startLabel+18360)
#define PS_v1834	((void*)startLabel+18372)
#define PS_v1836	((void*)startLabel+18384)
#define PS_v1860	((void*)startLabel+18396)
#define PS_v1858	((void*)startLabel+18408)
#define PS_v1856	((void*)startLabel+18420)
#define PS_v1854	((void*)startLabel+18432)
#define PS_v1852	((void*)startLabel+18444)
#define PS_v1850	((void*)startLabel+18456)
#define PS_v1848	((void*)startLabel+18468)
#define PS_v1846	((void*)startLabel+18480)
#define PS_v1844	((void*)startLabel+18492)
#define PS_v1842	((void*)startLabel+18504)
#define PS_v1927	((void*)startLabel+18516)
#define PS_v1924	((void*)startLabel+18528)
#define PS_v1926	((void*)startLabel+18540)
#define PS_v1925	((void*)startLabel+18552)
#define PS_v1922	((void*)startLabel+18564)
#define PS_v1928	((void*)startLabel+18576)
#define PS_v1889	((void*)startLabel+18588)
#define PS_v1890	((void*)startLabel+18600)
#define PS_v1888	((void*)startLabel+18612)
#define PS_v1891	((void*)startLabel+18624)
#define PS_v1894	((void*)startLabel+18636)
#define PS_v1892	((void*)startLabel+18648)
#define PS_v1893	((void*)startLabel+18660)
#define PS_v1887	((void*)startLabel+18672)
#define PS_v1885	((void*)startLabel+18684)
#define PS_v1895	((void*)startLabel+18696)
#define PS_v1874	((void*)startLabel+18708)
#define PS_v1876	((void*)startLabel+18720)
#define PS_v1870	((void*)startLabel+18732)
#define PS_v1872	((void*)startLabel+18744)
#define PS_v1883	((void*)startLabel+18756)
#define PS_v1881	((void*)startLabel+18768)
#define PS_v1900	((void*)startLabel+18780)
#define PS_v1899	((void*)startLabel+18792)
#define PS_v1897	((void*)startLabel+18804)
#define PS_v1901	((void*)startLabel+18816)
#define PS_v1906	((void*)startLabel+18828)
#define PS_v1908	((void*)startLabel+18840)
#define PS_v1907	((void*)startLabel+18852)
#define PS_v1905	((void*)startLabel+18864)
#define PS_v1903	((void*)startLabel+18876)
#define PS_v1909	((void*)startLabel+18888)
#define PS_v1918	((void*)startLabel+18900)
#define PS_v1916	((void*)startLabel+18912)
#define PS_v1915	((void*)startLabel+18924)
#define PS_v1917	((void*)startLabel+18936)
#define PS_v1919	((void*)startLabel+18948)
#define PS_v1913	((void*)startLabel+18960)
#define PS_v1914	((void*)startLabel+18972)
#define PS_v1911	((void*)startLabel+18984)
#define PS_v1920	((void*)startLabel+18996)
#define PS_v1932	((void*)startLabel+19008)
#define PS_v1930	((void*)startLabel+19020)
#define PS_v1936	((void*)startLabel+19032)
#define PS_v1934	((void*)startLabel+19044)
#define PS_v1940	((void*)startLabel+19056)
#define PS_v1938	((void*)startLabel+19068)
#define PS_v1944	((void*)startLabel+19080)
#define PS_v1942	((void*)startLabel+19092)
#define PS_v1948	((void*)startLabel+19104)
#define PS_v1946	((void*)startLabel+19116)
#define PS_v1952	((void*)startLabel+19128)
#define PS_v1950	((void*)startLabel+19140)
#define PS_v1956	((void*)startLabel+19152)
#define PS_v1954	((void*)startLabel+19164)
#define PS_v1521	((void*)startLabel+19176)
#define PS_v1542	((void*)startLabel+19188)
#define PS_v1571	((void*)startLabel+19200)
#define PS_v1569	((void*)startLabel+19212)
#define PS_v1567	((void*)startLabel+19224)
#define PS_v1618	((void*)startLabel+19236)
#define PS_v1615	((void*)startLabel+19248)
#define PS_v1612	((void*)startLabel+19260)
#define PS_v1693	((void*)startLabel+19272)
#define PS_v1692	((void*)startLabel+19284)
#define PS_v1691	((void*)startLabel+19296)
#define PS_v1689	((void*)startLabel+19308)
#define PS_v1723	((void*)startLabel+19320)
#define PS_v1721	((void*)startLabel+19332)
#define PS_v1794	((void*)startLabel+19344)
extern Node FN_NHC_46Internal_46_95eqInteger[];
extern Node FN_Prelude_46Integral_46Prelude_46Integer_46mod[];
extern Node FN_Prelude_46Eq_46Prelude_46Integer_46_61_61[];
extern Node FN_Prelude_46Integral_46Prelude_46Integer_46div[];
extern Node FN_Prelude_46Show_46Prelude_46Integer_46show[];
extern Node FN_Prelude_46length[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node FN_Prelude_46replicate[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46Ord_46Prelude_46Integer_46_60[];
extern Node FN_Prelude_46asTypeOf[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46negate[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Data_46Fixed_46resolution[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Integral_46Prelude_46Integer_46divMod[];
extern Node CF_Prelude_46Num_46Prelude_46Integer[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46_42[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_Prelude_46_94[];
extern Node FN_Prelude_46Num_46Prelude_46Double_46fromInteger[];
extern Node FN_Prelude_46Floating_46Prelude_46Double_46logBase[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Double_46ceiling[];
extern Node FN_Prelude_46Show_46Data_46Fixed_46Fixed[];
extern Node FN_Prelude_46_95_46showsType[];
extern Node FN_Prelude_46_95_46showList[];
extern Node FN_Prelude_46_95_46showsPrec[];
extern Node FN_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational[];
extern Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46floor[];
extern Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling[];
extern Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46round[];
extern Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46truncate[];
extern Node FN_Prelude_46Num_46Data_46Fixed_46Fixed[];
extern Node FN_Prelude_46fromIntegral[];
extern Node FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_45[];
extern Node CF_Prelude_46undefined[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46Real_46Prelude_46Integer_46toRational[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio_46_42[];
extern Node FN_Prelude_46Fractional_46Ratio_46Ratio_46_47[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46signum[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46abs[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46_45[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46_43[];
extern Node FN_Prelude_46Enum_46Prelude_46Integer_46enumFromThenTo[];
extern Node FN_Prelude_46Functor_46Prelude_46_91_93_46fmap[];
extern Node F0_NHC_46Internal_46_95id[];
extern Node FN_Prelude_46Enum_46Prelude_46Integer_46enumFromTo[];
extern Node FN_Prelude_46Enum_46Prelude_46Integer_46enumFromThen[];
extern Node FN_Prelude_46Enum_46Prelude_46Integer_46enumFrom[];
extern Node FN_Prelude_46Enum_46Prelude_46Integer_46fromEnum[];
extern Node F0_Prelude_46Enum_46Prelude_46Integer_46toEnum[];
extern Node FN_Prelude_46Enum_46Prelude_46Integer_46pred[];
extern Node FN_Prelude_46Enum_46Prelude_46Integer_46succ[];
extern Node FN_NHC_46Internal_46_95noMethodError[];
extern Node FN_Prelude_46toRational[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46_42[];
extern Node FN_Prelude_46_45[];
extern Node FN_Prelude_46Ord_46Prelude_46Integer_46compare[];
extern Node FN_Prelude_46Ord_46Prelude_46Integer_46_60_61[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46Data_46Fixed_46Fixed[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46Data_46Fixed_46Fixed[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46toRational[];
extern Node PC_Prelude_46RealFrac_46Ratio_46Ratio_46floor[];
extern Node PC_Prelude_46Fractional_46Ratio_46Ratio_46_47[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46fromIntegral[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_46_45[];
extern Node PC_Prelude_46_42[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46fromInteger[];
extern Node PC_Prelude_46_46[];
extern Node PC_NHC_46Internal_46_95eqInteger[];
extern Node PC_Prelude_46Eq_46Prelude_46Integer_46_61_61[];
extern Node PC_Prelude_46Integral_46Prelude_46Integer_46mod[];
extern Node PC_Prelude_46Integral_46Prelude_46Integer_46div[];
extern Node PC_Prelude_46Show_46Prelude_46Integer_46show[];
extern Node PC_Prelude_46_43_43[];
extern Node PC_Prelude_46replicate[];
extern Node PC_Prelude_46length[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node PC_Prelude_46_58[];
extern Node PC_Prelude_46asTypeOf[];
extern Node PC_Prelude_46Ord_46Prelude_46Integer_46_60[];
extern Node PC_Prelude_46Num_46Prelude_46Integer_46negate[];
extern Node PC_Prelude_46Integral_46Prelude_46Integer_46divMod[];
extern Node PC_Prelude_46Num_46Prelude_46Integer_46_42[];
extern Node PC_NHC_46Internal_46_95noMethodError[];
extern Node PC_Prelude_46Enum_46Prelude_46Integer_46succ[];
extern Node PC_Prelude_46Enum_46Prelude_46Integer_46pred[];
extern Node PC_Prelude_46Enum_46Prelude_46Integer_46fromEnum[];
extern Node PC_Prelude_46Functor_46Prelude_46_91_93_46fmap[];
extern Node PC_Prelude_46Enum_46Prelude_46Integer_46enumFrom[];
extern Node PC_Prelude_46Enum_46Prelude_46Integer_46enumFromThen[];
extern Node PC_Prelude_46Enum_46Prelude_46Integer_46enumFromTo[];
extern Node PC_Prelude_46Enum_46Prelude_46Integer_46enumFromThenTo[];
extern Node PC_Prelude_46Num_46Prelude_46Integer_46_43[];
extern Node PC_Prelude_46Num_46Prelude_46Integer_46_45[];
extern Node PC_Prelude_46Num_46Prelude_46Integer_46abs[];
extern Node PC_Prelude_46Num_46Prelude_46Integer_46signum[];
extern Node PC_Prelude_46Real_46Prelude_46Integer_46toRational[];
extern Node PC_Prelude_46RealFrac_46Ratio_46Ratio_46truncate[];
extern Node PC_Prelude_46RealFrac_46Ratio_46Ratio_46round[];
extern Node PC_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling[];
extern Node PC_Prelude_46RealFrac_46Prelude_46Double_46ceiling[];
extern Node PC_Prelude_46Floating_46Prelude_46Double_46logBase[];
extern Node PC_Prelude_46Num_46Prelude_46Double_46fromInteger[];
extern Node PC_Prelude_46_94[];
extern Node PC_Prelude_46False[];
extern Node PC_Prelude_46_95_46showsPrec[];
extern Node PC_Prelude_46_95_46showList[];
extern Node PC_Prelude_46_95_46showsType[];
extern Node PC_Prelude_46_95_46_47_61[];
extern Node PC_Prelude_46Ord_46Prelude_46Integer_46_60_61[];
extern Node PC_Prelude_46Ord_46Prelude_46Integer_46compare[];
extern Node PC_Prelude_46_95_46_60[];
extern Node PC_Prelude_46_95_46_62_61[];
extern Node PC_Prelude_46_95_46_62[];
extern Node PC_Prelude_46_95_46max[];
extern Node PC_Prelude_46_95_46min[];
extern Node PC_Prelude_464[];
extern Node PC_Prelude_469[];
extern Node PC_Prelude_468[];
extern Node PC_Prelude_463[];
extern Node PC_Prelude_467[];
extern Node PC_Prelude_461[];
extern Node PC_Prelude_46Num_46Ratio_46Ratio_46_42[];

static Node startLabel[] = {
  42
,};
Node PP_Data_46Fixed_46MkFixed[] = {
 };
Node PC_Data_46Fixed_46MkFixed[] = {
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,77)
, bytes2word(107,70,105,120)
, bytes2word(101,100,0,0)
,	/* PS_Data_46Fixed_46MkFixed: (byte 0) */
  useLabel(PP_Data_46Fixed_46MkFixed)
, useLabel(PP_Data_46Fixed_46MkFixed)
, useLabel(PC_Data_46Fixed_46MkFixed)
,};
Node PP_Data_46Fixed_46E0[] = {
 };
Node PC_Data_46Fixed_46E0[] = {
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,69)
, bytes2word(48,0,0,0)
,	/* PS_Data_46Fixed_46E0: (byte 0) */
  useLabel(PP_Data_46Fixed_46E0)
, useLabel(PP_Data_46Fixed_46E0)
, useLabel(PC_Data_46Fixed_46E0)
,	/* C0_Data_46Fixed_46E0: (byte 0) */
  CONSTR(0,0,0)
, useLabel(PS_Data_46Fixed_46E0)
, 0
, 0
, 0
,};
Node PP_Data_46Fixed_46E1[] = {
 };
Node PC_Data_46Fixed_46E1[] = {
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,69)
, bytes2word(49,0,0,0)
,	/* PS_Data_46Fixed_46E1: (byte 0) */
  useLabel(PP_Data_46Fixed_46E1)
, useLabel(PP_Data_46Fixed_46E1)
, useLabel(PC_Data_46Fixed_46E1)
,	/* C0_Data_46Fixed_46E1: (byte 0) */
  CONSTR(0,0,0)
, useLabel(PS_Data_46Fixed_46E1)
, 0
, 0
, 0
,};
Node PP_Data_46Fixed_46E2[] = {
 };
Node PC_Data_46Fixed_46E2[] = {
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,69)
, bytes2word(50,0,0,0)
,	/* PS_Data_46Fixed_46E2: (byte 0) */
  useLabel(PP_Data_46Fixed_46E2)
, useLabel(PP_Data_46Fixed_46E2)
, useLabel(PC_Data_46Fixed_46E2)
,	/* C0_Data_46Fixed_46E2: (byte 0) */
  CONSTR(0,0,0)
, useLabel(PS_Data_46Fixed_46E2)
, 0
, 0
, 0
,};
Node PP_Data_46Fixed_46E3[] = {
 };
Node PC_Data_46Fixed_46E3[] = {
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,69)
, bytes2word(51,0,0,0)
,	/* PS_Data_46Fixed_46E3: (byte 0) */
  useLabel(PP_Data_46Fixed_46E3)
, useLabel(PP_Data_46Fixed_46E3)
, useLabel(PC_Data_46Fixed_46E3)
,	/* C0_Data_46Fixed_46E3: (byte 0) */
  CONSTR(0,0,0)
, useLabel(PS_Data_46Fixed_46E3)
, 0
, 0
, 0
,};
Node PP_Data_46Fixed_46E6[] = {
 };
Node PC_Data_46Fixed_46E6[] = {
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,69)
, bytes2word(54,0,0,0)
,	/* PS_Data_46Fixed_46E6: (byte 0) */
  useLabel(PP_Data_46Fixed_46E6)
, useLabel(PP_Data_46Fixed_46E6)
, useLabel(PC_Data_46Fixed_46E6)
,	/* C0_Data_46Fixed_46E6: (byte 0) */
  CONSTR(0,0,0)
, useLabel(PS_Data_46Fixed_46E6)
, 0
, 0
, 0
,};
Node PP_Data_46Fixed_46E9[] = {
 };
Node PC_Data_46Fixed_46E9[] = {
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,69)
, bytes2word(57,0,0,0)
,	/* PS_Data_46Fixed_46E9: (byte 0) */
  useLabel(PP_Data_46Fixed_46E9)
, useLabel(PP_Data_46Fixed_46E9)
, useLabel(PC_Data_46Fixed_46E9)
,	/* C0_Data_46Fixed_46E9: (byte 0) */
  CONSTR(0,0,0)
, useLabel(PS_Data_46Fixed_46E9)
, 0
, 0
, 0
,};
Node PP_Data_46Fixed_46E12[] = {
 };
Node PC_Data_46Fixed_46E12[] = {
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,69)
, bytes2word(49,50,0,0)
,	/* PS_Data_46Fixed_46E12: (byte 0) */
  useLabel(PP_Data_46Fixed_46E12)
, useLabel(PP_Data_46Fixed_46E12)
, useLabel(PC_Data_46Fixed_46E12)
,	/* C0_Data_46Fixed_46E12: (byte 0) */
  CONSTR(0,0,0)
, useLabel(PS_Data_46Fixed_46E12)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1492)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12_46resolution[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_CADR_N1,9)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(2,0)
, 0
, 0
, 0
, 0
, -727379968
, 232
, 2180005
, useLabel(ST_v1491)
,	/* CT_v1492: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12_46resolution),1)
, useLabel(PS_v1490)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1495)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9_46resolution[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_CADR_N1,8)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 1000000000
, 2090005
, useLabel(ST_v1494)
,	/* CT_v1495: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9_46resolution),1)
, useLabel(PS_v1493)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1498)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6_46resolution[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_CADR_N1,8)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 1000000
, 2000005
, useLabel(ST_v1497)
,	/* CT_v1498: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6_46resolution),1)
, useLabel(PS_v1496)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1501)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3_46resolution[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_CADR_N1,8)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 1000
, 1910005
, useLabel(ST_v1500)
,	/* CT_v1501: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3_46resolution),1)
, useLabel(PS_v1499)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1504)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2_46resolution[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_CADR_N1,8)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 100
, 1820005
, useLabel(ST_v1503)
,	/* CT_v1504: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2_46resolution),1)
, useLabel(PS_v1502)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1507)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1_46resolution[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_CADR_N1,8)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 10
, 1730005
, useLabel(ST_v1506)
,	/* CT_v1507: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1_46resolution),1)
, useLabel(PS_v1505)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1510)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0_46resolution[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_CADR_N1,8)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 1
, 1640005
, useLabel(ST_v1509)
,	/* CT_v1510: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0_46resolution),1)
, useLabel(PS_v1508)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1520)
,	/* FN_Data_46Fixed_46withDot: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v1517: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v1514: (byte 2) */
  bytes2word(12,0,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
,	/* v1511: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,12,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CHAR_P1,46,HEAP_ARG,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1519)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1518)
, 0
, 0
, 0
, 0
, 1410001
, useLabel(ST_v1516)
,	/* CT_v1520: (byte 0) */
  HW(1,1)
, 0
,	/* F0_Data_46Fixed_46withDot: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46withDot),1)
, useLabel(PS_v1515)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1453))
, bytes2word(0,0,0,0)
, useLabel(CT_v1524)
,	/* FN_LAMBDA1453: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1523)
, 1410014
, useLabel(ST_v1522)
,	/* CT_v1524: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1453: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1453))
, useLabel(PS_v1521)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1541)
,	/* FN_Data_46Fixed_46chopZeros: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CADR_N1)
, bytes2word(12,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(11,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,17,HEAP_CREATE)
,	/* v1525: (byte 3) */
  bytes2word(HEAP_SPACE,HEAP_SPACE,RETURN_EVAL,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CADR_N1,28,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,33,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
, bytes2word(HEAP_CADR_N1,12,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,24,0,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,38,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CADR_N1,28,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,43,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
,	/* v1529: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,48,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1540)
, 0
, 0
, 0
, 0
, useLabel(PS_v1533)
, 0
, 0
, 0
, 0
, useLabel(PS_v1539)
, 0
, 0
, 0
, 0
, useLabel(PS_v1538)
, 0
, 0
, 0
, 0
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 10
, useLabel(PS_v1537)
, 0
, 0
, 0
, 0
, useLabel(PS_v1536)
, 0
, 0
, 0
, 0
, CONSTRW(0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1535)
, 0
, 0
, 0
, 0
, 1290001
, useLabel(ST_v1534)
,	/* CT_v1541: (byte 0) */
  HW(7,1)
, 0
,	/* F0_Data_46Fixed_46chopZeros: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46chopZeros),1)
, useLabel(PS_v1533)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95eqInteger))
, VAPTAG(useLabel(FN_LAMBDA1454))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46mod))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46div))
, VAPTAG(useLabel(FN_Data_46Fixed_46chopZeros))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Integer_46show))
, bytes2word(0,0,0,0)
, useLabel(CT_v1544)
,	/* FN_LAMBDA1454: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1523)
, 1290015
, useLabel(ST_v1543)
,	/* CT_v1544: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1454: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1454))
, useLabel(PS_v1542)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1564)
,	/* FN_Data_46Fixed_46showIntegerZeros: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_P1)
, bytes2word(41,TABLESWITCH,2,NOP)
,	/* v1555: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v1548: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,3,HEAP_CADR_N1)
, bytes2word(12,EVAL,NEEDHEAP_P1,41)
, bytes2word(JUMPFALSE,11,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,17)
,	/* v1545: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(3,HEAP_I1,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I1,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,HEAP_CHAR_P1,48)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,HEAP_I1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1563)
, 0
, 0
, 0
, 0
, useLabel(PS_v1562)
, 0
, 0
, 0
, 0
, useLabel(PS_v1561)
, 0
, 0
, 0
, 0
, useLabel(PS_v1560)
, 0
, 0
, 0
, 0
, useLabel(PS_v1559)
, 0
, 0
, 0
, 0
, useLabel(PS_v1558)
, 0
, 0
, 0
, 0
, useLabel(PS_v1557)
, 0
, 0
, 0
, 0
, CONSTRW(0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1556)
, 0
, 0
, 0
, 0
, 1350001
, useLabel(ST_v1554)
,	/* CT_v1564: (byte 0) */
  HW(8,3)
, 0
,	/* F0_Data_46Fixed_46showIntegerZeros: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46showIntegerZeros),3)
, useLabel(PS_v1553)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95eqInteger))
, VAPTAG(useLabel(FN_LAMBDA1455))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Integer_46show))
, VAPTAG(useLabel(FN_LAMBDA1456))
, VAPTAG(useLabel(FN_Prelude_46length))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Prelude_46replicate))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1570)
,	/* FN_LAMBDA1456: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,13,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
,	/* v1565: (byte 2) */
  bytes2word(2,RETURN_EVAL,PUSH_ARG_I3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1569)
, 0
, 0
, 0
, 0
, 1380010
, useLabel(ST_v1568)
,	/* CT_v1570: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA1456: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1456),3)
, useLabel(PS_v1567)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Data_46Fixed_46chopZeros))
, bytes2word(0,0,0,0)
, useLabel(CT_v1573)
,	/* FN_LAMBDA1455: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1523)
, 1350029
, useLabel(ST_v1572)
,	/* CT_v1573: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1455: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1455))
, useLabel(PS_v1571)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1598)
,};
Node FN_Data_46Fixed_46showFixed[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,3,HEAP_CADR_N1)
, bytes2word(12,EVAL,NEEDHEAP_P1,100)
, bytes2word(JUMPFALSE,63,0,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,16,HEAP_OFF_N1)
, bytes2word(12,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_OFF_N1,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
,	/* v1574: (byte 4) */
  bytes2word(37,HEAP_OFF_N1,14,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_N1,47,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,15,HEAP_CVAL_N1)
, bytes2word(52,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,16,HEAP_CVAL_N1)
, bytes2word(57,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,3,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,17,HEAP_CVAL_N1,62)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,PUSH_HEAP,HEAP_CVAL_P1,18)
, bytes2word(HEAP_CVAL_N1,67,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,18,HEAP_CVAL_P1)
, bytes2word(19,HEAP_CVAL_N1,72,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,3)
, bytes2word(HEAP_CVAL_P1,15,HEAP_CVAL_N1,52)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,20,HEAP_CVAL_P1)
, bytes2word(21,HEAP_CVAL_N1,77,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,0)
, bytes2word(HEAP_OFF_N1,13,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(22,HEAP_CVAL_N1,82,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
, bytes2word(HEAP_P1,4,HEAP_CVAL_P1,23)
, bytes2word(HEAP_CVAL_N1,87,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I2,HEAP_CVAL_P1,24)
, bytes2word(HEAP_CVAL_N1,92,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,4,HEAP_CVAL_P1)
, bytes2word(15,HEAP_CVAL_N1,52,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,25,HEAP_CVAL_P1,26)
, bytes2word(HEAP_CVAL_N1,97,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(13,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(27,HEAP_CVAL_N1,102,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,13)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,38,HEAP_OFF_N1,12)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1597)
, 0
, 0
, 0
, 0
, useLabel(PS_v1596)
, 0
, 0
, 0
, 0
, useLabel(PS_v1595)
, 0
, 0
, 0
, 0
, useLabel(PS_v1594)
, 0
, 0
, 0
, 0
, useLabel(PS_v1593)
, 0
, 0
, 0
, 0
, useLabel(PS_v1592)
, 0
, 0
, 0
, 0
, useLabel(PS_v1591)
, 0
, 0
, 0
, 0
, useLabel(PS_v1590)
, 0
, 0
, 0
, 0
, useLabel(PS_v1589)
, 0
, 0
, 0
, 0
, useLabel(PS_v1588)
, 0
, 0
, 0
, 0
, useLabel(PS_v1587)
, 0
, 0
, 0
, 0
, useLabel(PS_v1586)
, 0
, 0
, 0
, 0
, useLabel(PS_v1585)
, 0
, 0
, 0
, 0
, useLabel(PS_v1578)
, 0
, 0
, 0
, 0
, useLabel(PS_v1584)
, 0
, 0
, 0
, 0
, useLabel(PS_v1583)
, 0
, 0
, 0
, 0
, useLabel(PS_v1582)
, 0
, 0
, 0
, 0
, useLabel(PS_v1581)
, 0
, 0
, 0
, 0
, CONSTRW(0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1580)
, 0
, 0
, 0
, 0
, 1460001
, useLabel(ST_v1579)
,	/* CT_v1598: (byte 0) */
  HW(21,3)
, 0
,};
Node F0_Data_46Fixed_46showFixed[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46showFixed),3)
, useLabel(PS_v1578)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_60))
, VAPTAG(useLabel(FN_LAMBDA1457))
, VAPTAG(useLabel(FN_Prelude_46asTypeOf))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46negate))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Data_46Fixed_46showFixed))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_Data_46Fixed_46resolution))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46divMod))
, VAPTAG(useLabel(FN_LAMBDA1458))
, VAPTAG(useLabel(FN_LAMBDA1459))
, CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46292_46maxnum),1)
, useLabel(CF_Prelude_46Num_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46div))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Integer_46show))
, CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46291_46digits),1)
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, VAPTAG(useLabel(FN_Data_46Fixed_46showIntegerZeros))
, VAPTAG(useLabel(FN_Data_46Fixed_46withDot))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1605)
,	/* FN_Data_46Fixed_46Prelude_46292_46maxnum: (byte 0) */
  bytes2word(NEEDHEAP_P1,38,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CADR_N1)
, bytes2word(18,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(23,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,28,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_I1)
, bytes2word(HEAP_OFF_N1,27,HEAP_OFF_N1,15)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1604)
, 0
, 0
, 0
, 0
, useLabel(PS_v1603)
, 0
, 0
, 0
, 0
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 10
, useLabel(PS_v1602)
, 0
, 0
, 0
, 0
, useLabel(PS_v1601)
, 0
, 0
, 0
, 0
, 1520005
, useLabel(ST_v1600)
,	/* CT_v1605: (byte 0) */
  HW(5,2)
, 0
,	/* F0_Data_46Fixed_46Prelude_46292_46maxnum: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46292_46maxnum),2)
, useLabel(PS_v1599)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46291_46digits),1)
, VAPTAG(useLabel(FN_Prelude_46_94))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1611)
,	/* FN_Data_46Fixed_46Prelude_46291_46digits: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CADR_N1,19,HEAP_OFF_N1)
, bytes2word(12,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,24,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(13,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1610)
, 0
, 0
, 0
, 0
, CONSTRW(2,0)
, 0
, 0
, 0
, 0
, 0
, 1076101120
, useLabel(PS_v1609)
, 0
, 0
, 0
, 0
, useLabel(PS_v1608)
, 0
, 0
, 0
, 0
, 1510005
, useLabel(ST_v1607)
,	/* CT_v1611: (byte 0) */
  HW(3,2)
, 0
,	/* F0_Data_46Fixed_46Prelude_46291_46digits: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46291_46digits),2)
, useLabel(PS_v1606)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Double_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Floating_46Prelude_46Double_46logBase))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Double_46ceiling))
, bytes2word(1,0,0,1)
, useLabel(CT_v1614)
,	/* FN_LAMBDA1459: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1490008
, useLabel(ST_v1613)
,	/* CT_v1614: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1459: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1459),1)
, useLabel(PS_v1612)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1617)
,	/* FN_LAMBDA1458: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1490006
, useLabel(ST_v1616)
,	/* CT_v1617: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1458: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1458),1)
, useLabel(PS_v1615)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v1621)
,	/* FN_LAMBDA1457: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1620)
, 1460054
, useLabel(ST_v1619)
,	/* CT_v1621: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1457: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1457))
, useLabel(PS_v1618)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1626)
,};
Node FN_Prelude_46Show_46Data_46Fixed_46Fixed_46show[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1625)
, 0
, 0
, 0
, 0
, useLabel(PS_v1624)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 1560005
, useLabel(ST_v1623)
,	/* CT_v1626: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Show_46Data_46Fixed_46Fixed_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed_46show),2)
, useLabel(PS_v1622)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Data_46Fixed_46showFixed))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1631)
,};
Node FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showsType[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1630)
, 0
, 0
, 0
, 0
, useLabel(PS_v1629)
, 0
, 0
, 0
, 0
, 1550031
, useLabel(ST_v1628)
,	/* CT_v1631: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46Data_46Fixed_46Fixed_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showsType),2)
, useLabel(PS_v1627)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed))
, VAPTAG(useLabel(FN_Prelude_46_95_46showsType))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1636)
,};
Node FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1635)
, 0
, 0
, 0
, 0
, useLabel(PS_v1634)
, 0
, 0
, 0
, 0
, 1550031
, useLabel(ST_v1633)
,	/* CT_v1636: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46Data_46Fixed_46Fixed_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showList),2)
, useLabel(PS_v1632)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed))
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1641)
,};
Node FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showsPrec[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1640)
, 0
, 0
, 0
, 0
, useLabel(PS_v1639)
, 0
, 0
, 0
, 0
, 1550031
, useLabel(ST_v1638)
,	/* CT_v1641: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Show_46Data_46Fixed_46Fixed_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showsPrec),3)
, useLabel(PS_v1637)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed))
, VAPTAG(useLabel(FN_Prelude_46_95_46showsPrec))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1646)
,};
Node FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46floor[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(14,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1645)
, 0
, 0
, 0
, 0
, useLabel(PS_v1644)
, 0
, 0
, 0
, 0
, 1260005
, useLabel(ST_v1643)
,	/* CT_v1646: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46floor[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46floor),3)
, useLabel(PS_v1642)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46floor))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1651)
,};
Node FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46ceiling[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(14,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1650)
, 0
, 0
, 0
, 0
, useLabel(PS_v1649)
, 0
, 0
, 0
, 0
, 1250005
, useLabel(ST_v1648)
,	/* CT_v1651: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46ceiling[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46ceiling),3)
, useLabel(PS_v1647)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1656)
,};
Node FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46round[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(14,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1655)
, 0
, 0
, 0
, 0
, useLabel(PS_v1654)
, 0
, 0
, 0
, 0
, 1240005
, useLabel(ST_v1653)
,	/* CT_v1656: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46round[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46round),3)
, useLabel(PS_v1652)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46round))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1661)
,};
Node FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(14,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1660)
, 0
, 0
, 0
, 0
, useLabel(PS_v1659)
, 0
, 0
, 0
, 0
, 1230005
, useLabel(ST_v1658)
,	/* CT_v1661: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate),3)
, useLabel(PS_v1657)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46truncate))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1670)
,};
Node FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction[] = {
  bytes2word(NEEDHEAP_P1,68,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,PUSH_HEAP,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(0,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_I1,HEAP_OFF_N1)
, bytes2word(12,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_P1,0,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_I1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,26,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,3,HEAP_OFF_N1)
, bytes2word(14,PUSH_HEAP,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,54,HEAP_OFF_N1)
, bytes2word(14,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1669)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1668)
, 0
, 0
, 0
, 0
, useLabel(PS_v1667)
, 0
, 0
, 0
, 0
, useLabel(PS_v1666)
, 0
, 0
, 0
, 0
, useLabel(PS_v1665)
, 0
, 0
, 0
, 0
, useLabel(PS_v1664)
, 0
, 0
, 0
, 0
, 1210005
, useLabel(ST_v1663)
,	/* CT_v1670: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction),3)
, useLabel(PS_v1662)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46265_46i),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, VAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_45))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1674)
,	/* FN_Data_46Fixed_46Prelude_46265_46i: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1673)
, 0
, 0
, 0
, 0
, 1220009
, useLabel(ST_v1672)
,	/* CT_v1674: (byte 0) */
  HW(1,3)
, 0
,	/* F0_Data_46Fixed_46Prelude_46265_46i: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46265_46i),3)
, useLabel(PS_v1671)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate))
, bytes2word(1,0,0,1)
, useLabel(CT_v1677)
,	/* FN_Data_46Fixed_46withType: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,7,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 870001
, useLabel(ST_v1676)
,	/* CT_v1677: (byte 0) */
  HW(1,1)
, 0
,	/* F0_Data_46Fixed_46withType: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46withType),1)
, useLabel(PS_v1675)
, 0
, 0
, 0
, useLabel(CF_Prelude_46undefined)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1683)
,	/* FN_Data_46Fixed_46withResolution: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(12,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1682)
, 0
, 0
, 0
, 0
, useLabel(PS_v1681)
, 0
, 0
, 0
, 0
, useLabel(PS_v1680)
, 0
, 0
, 0
, 0
, 900001
, useLabel(ST_v1679)
,	/* CT_v1683: (byte 0) */
  HW(3,2)
, 0
,	/* F0_Data_46Fixed_46withResolution: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46withResolution),2)
, useLabel(PS_v1678)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Data_46Fixed_46resolution))
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Data_46Fixed_46withType))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1688)
,};
Node FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46fromRational[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1687)
, 0
, 0
, 0
, 0
, useLabel(PS_v1686)
, 0
, 0
, 0
, 0
, 1180005
, useLabel(ST_v1685)
,	/* CT_v1688: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Fractional_46Data_46Fixed_46Fixed_46fromRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46fromRational),2)
, useLabel(PS_v1684)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA1460),1)
, VAPTAG(useLabel(FN_Data_46Fixed_46withResolution))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1694)
,	/* FN_LAMBDA1460: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,13,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(15,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1693)
, 0
, 0
, 0
, 0
, useLabel(PS_v1692)
, 0
, 0
, 0
, 0
, useLabel(PS_v1691)
, 0
, 0
, 0
, 0
, 1180038
, useLabel(ST_v1690)
,	/* CT_v1694: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA1460: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1460),2)
, useLabel(PS_v1689)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Integer_46toRational))
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_42))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46floor))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1701)
,};
Node FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46recip[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_P1,0,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,HEAP_ARG,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1700)
, 0
, 0
, 0
, 0
, useLabel(PS_v1699)
, 0
, 0
, 0
, 0
, useLabel(PS_v1698)
, 0
, 0
, 0
, 0
, useLabel(PS_v1697)
, 0
, 0
, 0
, 0
, 1160005
, useLabel(ST_v1696)
,	/* CT_v1701: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Fractional_46Data_46Fixed_46Fixed_46recip[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46recip),2)
, useLabel(PS_v1695)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Data_46Fixed_46resolution))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46div))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1708)
,};
Node FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46_47[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,13)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,HEAP_ARG,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1707)
, 0
, 0
, 0
, 0
, useLabel(PS_v1706)
, 0
, 0
, 0
, 0
, useLabel(PS_v1705)
, 0
, 0
, 0
, 0
, useLabel(PS_v1704)
, 0
, 0
, 0
, 0
, 1150005
, useLabel(ST_v1703)
,	/* CT_v1708: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_Prelude_46Fractional_46Data_46Fixed_46Fixed_46_47[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46_47),3)
, useLabel(PS_v1702)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Data_46Fixed_46resolution))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46div))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1715)
,};
Node FN_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational[] = {
  bytes2word(NEEDHEAP_P1,34,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,31)
, bytes2word(HEAP_OFF_N1,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1714)
, 0
, 0
, 0
, 0
, useLabel(PS_v1713)
, 0
, 0
, 0
, 0
, useLabel(PS_v1712)
, 0
, 0
, 0
, 0
, useLabel(PS_v1711)
, 0
, 0
, 0
, 0
, 1120005
, useLabel(ST_v1710)
,	/* CT_v1715: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational),2)
, useLabel(PS_v1709)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Integer_46toRational))
, VAPTAG(useLabel(FN_Data_46Fixed_46resolution))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46_47))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1720)
,};
Node FN_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1719)
, 0
, 0
, 0
, 0
, useLabel(PS_v1718)
, 0
, 0
, 0
, 0
, 1090005
, useLabel(ST_v1717)
,	/* CT_v1720: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger),2)
, useLabel(PS_v1716)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA1461),1)
, VAPTAG(useLabel(FN_Data_46Fixed_46withResolution))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1724)
,	/* FN_LAMBDA1461: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1723)
, 0
, 0
, 0
, 0
, 1090037
, useLabel(ST_v1722)
,	/* CT_v1724: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA1461: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1461),2)
, useLabel(PS_v1721)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1729)
,};
Node FN_Prelude_46Num_46Data_46Fixed_46Fixed_46signum[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1728)
, 0
, 0
, 0
, 0
, useLabel(PS_v1727)
, 0
, 0
, 0
, 0
, 1080005
, useLabel(ST_v1726)
,	/* CT_v1729: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Num_46Data_46Fixed_46Fixed_46signum[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46signum),2)
, useLabel(PS_v1725)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46signum))
, VAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1733)
,};
Node FN_Prelude_46Num_46Data_46Fixed_46Fixed_46abs[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1732)
, 0
, 0
, 0
, 0
, 1070005
, useLabel(ST_v1731)
,	/* CT_v1733: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46Data_46Fixed_46Fixed_46abs[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46abs),2)
, useLabel(PS_v1730)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46abs))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1737)
,};
Node FN_Prelude_46Num_46Data_46Fixed_46Fixed_46negate[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1736)
, 0
, 0
, 0
, 0
, 1060005
, useLabel(ST_v1735)
,	/* CT_v1737: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46Data_46Fixed_46Fixed_46negate[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46negate),2)
, useLabel(PS_v1734)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46negate))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1744)
,};
Node FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_42[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(25,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1743)
, 0
, 0
, 0
, 0
, useLabel(PS_v1742)
, 0
, 0
, 0
, 0
, useLabel(PS_v1741)
, 0
, 0
, 0
, 0
, useLabel(PS_v1740)
, 0
, 0
, 0
, 0
, 1050005
, useLabel(ST_v1739)
,	/* CT_v1744: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_Prelude_46Num_46Data_46Fixed_46Fixed_46_42[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_42),3)
, useLabel(PS_v1738)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42))
, VAPTAG(useLabel(FN_Data_46Fixed_46resolution))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46div))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1748)
,};
Node FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_45[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,2)
, bytes2word(3,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1747)
, 0
, 0
, 0
, 0
, 1040005
, useLabel(ST_v1746)
,	/* CT_v1748: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46Num_46Data_46Fixed_46Fixed_46_45[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_45),3)
, useLabel(PS_v1745)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_45))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1752)
,};
Node FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_43[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,2)
, bytes2word(3,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1751)
, 0
, 0
, 0
, 0
, 1030005
, useLabel(ST_v1750)
,	/* CT_v1752: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46Num_46Data_46Fixed_46Fixed_46_43[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_43),3)
, useLabel(PS_v1749)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_43))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1757)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(14,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1756)
, 0
, 0
, 0
, 0
, useLabel(PS_v1755)
, 0
, 0
, 0
, 0
, 1000005
, useLabel(ST_v1754)
,	/* CT_v1757: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThenTo),3)
, useLabel(PS_v1753)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46enumFromThenTo))
, VAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46_91_93_46fmap))
, useLabel(F0_NHC_46Internal_46_95id)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1762)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1761)
, 0
, 0
, 0
, 0
, useLabel(PS_v1760)
, 0
, 0
, 0
, 0
, 990005
, useLabel(ST_v1759)
,	/* CT_v1762: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromTo),2)
, useLabel(PS_v1758)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46enumFromTo))
, VAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46_91_93_46fmap))
, useLabel(F0_NHC_46Internal_46_95id)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1767)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThen[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1766)
, 0
, 0
, 0
, 0
, useLabel(PS_v1765)
, 0
, 0
, 0
, 0
, 980005
, useLabel(ST_v1764)
,	/* CT_v1767: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThen),2)
, useLabel(PS_v1763)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46enumFromThen))
, VAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46_91_93_46fmap))
, useLabel(F0_NHC_46Internal_46_95id)
, bytes2word(1,0,0,1)
, useLabel(CT_v1772)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFrom[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1771)
, 0
, 0
, 0
, 0
, useLabel(PS_v1770)
, 0
, 0
, 0
, 0
, 970005
, useLabel(ST_v1769)
,	/* CT_v1772: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFrom),1)
, useLabel(PS_v1768)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46enumFrom))
, VAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46_91_93_46fmap))
, useLabel(F0_NHC_46Internal_46_95id)
, bytes2word(1,0,0,1)
, useLabel(CT_v1776)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46fromEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1775)
, 0
, 0
, 0
, 0
, 960005
, useLabel(ST_v1774)
,	/* CT_v1776: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46fromEnum),1)
, useLabel(PS_v1773)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46fromEnum))
, bytes2word(1,0,0,1)
, useLabel(CT_v1780)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46toEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1779)
, 0
, 0
, 0
, 0
, 950005
, useLabel(ST_v1778)
,	/* CT_v1780: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46toEnum),1)
, useLabel(PS_v1777)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_NHC_46Internal_46_95id)
, useLabel(F0_Prelude_46Enum_46Prelude_46Integer_46toEnum)
, bytes2word(1,0,0,1)
, useLabel(CT_v1784)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46pred[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1783)
, 0
, 0
, 0
, 0
, 940005
, useLabel(ST_v1782)
,	/* CT_v1784: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46pred),1)
, useLabel(PS_v1781)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46pred))
, bytes2word(1,0,0,1)
, useLabel(CT_v1788)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46succ[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1787)
, 0
, 0
, 0
, 0
, 930005
, useLabel(ST_v1786)
,	/* CT_v1788: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46succ),1)
, useLabel(PS_v1785)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46succ))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1793)
,};
Node FN_Data_46Fixed_46_95_46resolution[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1792)
, 0
, 0
, 0
, 0
, useLabel(PS_v1791)
, 0
, 0
, 0
, 0
, 0
, useLabel(ST_v1790)
,	/* CT_v1793: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Data_46Fixed_46_95_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46_95_46resolution),2)
, useLabel(PS_v1789)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1462))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v1797)
,	/* FN_LAMBDA1462: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1796)
, 0
, useLabel(ST_v1795)
,	/* CT_v1797: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1462: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1462))
, useLabel(PS_v1794)
, 0
, 0
, 0
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1804)
,};
Node FN_Data_46Fixed_46div_39[] = {
  bytes2word(NEEDHEAP_P1,43,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(26,HEAP_OFF_N1,14,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(10,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(15,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1803)
, 0
, 0
, 0
, 0
, useLabel(PS_v1802)
, 0
, 0
, 0
, 0
, useLabel(PS_v1801)
, 0
, 0
, 0
, 0
, useLabel(PS_v1800)
, 0
, 0
, 0
, 0
, 490001
, useLabel(ST_v1799)
,	/* CT_v1804: (byte 0) */
  HW(5,4)
, 0
,};
Node F0_Data_46Fixed_46div_39[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46div_39),4)
, useLabel(PS_v1798)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46toRational))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46_47))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46floor))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1814)
,};
Node FN_Data_46Fixed_46mod_39[] = {
  bytes2word(NEEDHEAP_P1,72,PUSH_HEAP,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_P1,0,HEAP_ARG_ARG,2)
, bytes2word(3,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(26,HEAP_OFF_N1,13,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(45,HEAP_OFF_N1,13,HEAP_ARG)
, bytes2word(3,PUSH_P1,0,PUSH_ARG_I2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,14)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1813)
, 0
, 0
, 0
, 0
, useLabel(PS_v1812)
, 0
, 0
, 0
, 0
, useLabel(PS_v1811)
, 0
, 0
, 0
, 0
, useLabel(PS_v1810)
, 0
, 0
, 0
, 0
, useLabel(PS_v1809)
, 0
, 0
, 0
, 0
, useLabel(PS_v1808)
, 0
, 0
, 0
, 0
, useLabel(PS_v1807)
, 0
, 0
, 0
, 0
, 580001
, useLabel(ST_v1806)
,	/* CT_v1814: (byte 0) */
  HW(8,3)
, 0
,};
Node F0_Data_46Fixed_46mod_39[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46mod_39),3)
, useLabel(PS_v1805)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46207_46f),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_45))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1818)
,	/* FN_Data_46Fixed_46Prelude_46207_46f: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1817)
, 0
, 0
, 0
, 0
, 590005
, useLabel(ST_v1816)
,	/* CT_v1818: (byte 0) */
  HW(1,4)
, 0
,	/* F0_Data_46Fixed_46Prelude_46207_46f: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46207_46f),4)
, useLabel(PS_v1815)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Data_46Fixed_46div_39))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1829)
,};
Node FN_Data_46Fixed_46divMod_39[] = {
  bytes2word(NEEDHEAP_P1,102,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,PUSH_HEAP,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(0,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(13,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I1)
, bytes2word(HEAP_OFF_N1,12,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,0,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,13,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(27,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,46)
, bytes2word(HEAP_OFF_N1,13,HEAP_ARG,4)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(66,HEAP_ARG,3,HEAP_OFF_N1)
, bytes2word(15,PUSH_HEAP,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,87,HEAP_OFF_N1)
, bytes2word(14,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1828)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1827)
, 0
, 0
, 0
, 0
, useLabel(PS_v1826)
, 0
, 0
, 0
, 0
, useLabel(PS_v1825)
, 0
, 0
, 0
, 0
, useLabel(PS_v1824)
, 0
, 0
, 0
, 0
, useLabel(PS_v1823)
, 0
, 0
, 0
, 0
, useLabel(PS_v1822)
, 0
, 0
, 0
, 0
, useLabel(PS_v1821)
, 0
, 0
, 0
, 0
, 530001
, useLabel(ST_v1820)
,	/* CT_v1829: (byte 0) */
  HW(8,4)
, 0
,};
Node F0_Data_46Fixed_46divMod_39[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46divMod_39),4)
, useLabel(PS_v1819)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46204_46f),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_45))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1833)
,	/* FN_Data_46Fixed_46Prelude_46204_46f: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1832)
, 0
, 0
, 0
, 0
, 540005
, useLabel(ST_v1831)
,	/* CT_v1833: (byte 0) */
  HW(1,4)
, 0
,	/* F0_Data_46Fixed_46Prelude_46204_46f: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46204_46f),4)
, useLabel(PS_v1830)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Data_46Fixed_46div_39))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1837)
,};
Node FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46compare[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1836)
, 0
, 0
, 0
, 0
, 660022
, useLabel(ST_v1835)
,	/* CT_v1837: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46compare),2)
, useLabel(PS_v1834)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1841)
,};
Node FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1840)
, 0
, 0
, 0
, 0
, 660022
, useLabel(ST_v1839)
,	/* CT_v1841: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60_61),2)
, useLabel(PS_v1838)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_60_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1845)
,};
Node FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1844)
, 0
, 0
, 0
, 0
, 660022
, useLabel(ST_v1843)
,	/* CT_v1845: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46min),2)
, useLabel(PS_v1842)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46Data_46Fixed_46Fixed)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1849)
,};
Node FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1848)
, 0
, 0
, 0
, 0
, 660022
, useLabel(ST_v1847)
,	/* CT_v1849: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46max),2)
, useLabel(PS_v1846)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46Data_46Fixed_46Fixed)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1853)
,};
Node FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1852)
, 0
, 0
, 0
, 0
, 660022
, useLabel(ST_v1851)
,	/* CT_v1853: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62),2)
, useLabel(PS_v1850)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46Data_46Fixed_46Fixed)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1857)
,};
Node FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1856)
, 0
, 0
, 0
, 0
, 660022
, useLabel(ST_v1855)
,	/* CT_v1857: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62_61),2)
, useLabel(PS_v1854)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46Data_46Fixed_46Fixed)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1861)
,};
Node FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1860)
, 0
, 0
, 0
, 0
, 660022
, useLabel(ST_v1859)
,	/* CT_v1861: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60),2)
, useLabel(PS_v1858)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46Data_46Fixed_46Fixed)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1865)
,};
Node FN_Prelude_46Eq_46Data_46Fixed_46Fixed_46_61_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1864)
, 0
, 0
, 0
, 0
, 660019
, useLabel(ST_v1863)
,	/* CT_v1865: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46Data_46Fixed_46Fixed_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Data_46Fixed_46Fixed_46_61_61),2)
, useLabel(PS_v1862)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer_46_61_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1869)
,};
Node FN_Prelude_46Eq_46Data_46Fixed_46Fixed_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1868)
, 0
, 0
, 0
, 0
, 660019
, useLabel(ST_v1867)
,	/* CT_v1869: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46Data_46Fixed_46Fixed_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Data_46Fixed_46Fixed_46_47_61),2)
, useLabel(PS_v1866)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46Data_46Fixed_46Fixed)
, bytes2word(0,0,0,0)
, useLabel(CT_v1873)
,};
Node FN_Prelude_46Eq_46Data_46Fixed_46Fixed[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1872)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 660019
, useLabel(ST_v1871)
,	/* CT_v1873: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Data_46Fixed_46Fixed[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Data_46Fixed_46Fixed))
, useLabel(PS_v1870)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Eq_46Data_46Fixed_46Fixed_46_47_61)
, useLabel(F0_Prelude_46Eq_46Data_46Fixed_46Fixed_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v1877)
,};
Node FN_Prelude_46Ord_46Data_46Fixed_46Fixed[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1876)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
, 0
, 0
, 0
, 0
, 660022
, useLabel(ST_v1875)
,	/* CT_v1877: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46Data_46Fixed_46Fixed[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46Data_46Fixed_46Fixed))
, useLabel(PS_v1874)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Eq_46Data_46Fixed_46Fixed)
, useLabel(F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60)
, useLabel(F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60_61)
, useLabel(F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62_61)
, useLabel(F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62)
, useLabel(F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46compare)
, useLabel(F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46min)
, useLabel(F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46max)
, bytes2word(1,0,0,1)
, useLabel(CT_v1880)
,};
Node FN_Data_46Fixed_46resolution[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 830007
, useLabel(ST_v1879)
,	/* CT_v1880: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Fixed_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46resolution),1)
, useLabel(PS_v1878)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v1884)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1883)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
, 0
, 0
, 0
, 0
, 920010
, useLabel(ST_v1882)
,	/* CT_v1884: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Enum_46Data_46Fixed_46Fixed[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed))
, useLabel(PS_v1881)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46succ)
, useLabel(F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46pred)
, useLabel(F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFrom)
, useLabel(F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46fromEnum)
, useLabel(F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46toEnum)
, useLabel(F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThenTo)
, bytes2word(1,0,0,1)
, useLabel(CT_v1896)
,};
Node FN_Prelude_46Num_46Data_46Fixed_46Fixed[] = {
  bytes2word(NEEDHEAP_P1,71,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CVAL_N1,52,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,15)
, bytes2word(HEAP_P1,8,HEAP_P1,7)
, bytes2word(HEAP_P1,6,HEAP_P1,5)
, bytes2word(HEAP_P1,4,HEAP_P1,3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1895)
, 0
, 0
, 0
, 0
, CONSTR(0,9,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1894)
, 0
, 0
, 0
, 0
, useLabel(PS_v1893)
, 0
, 0
, 0
, 0
, useLabel(PS_v1892)
, 0
, 0
, 0
, 0
, useLabel(PS_v1891)
, 0
, 0
, 0
, 0
, useLabel(PS_v1890)
, 0
, 0
, 0
, 0
, useLabel(PS_v1889)
, 0
, 0
, 0
, 0
, useLabel(PS_v1888)
, 0
, 0
, 0
, 0
, useLabel(PS_v1887)
, 0
, 0
, 0
, 0
, 1020031
, useLabel(ST_v1886)
,	/* CT_v1896: (byte 0) */
  HW(9,1)
, 0
,};
Node F0_Prelude_46Num_46Data_46Fixed_46Fixed[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed),1)
, useLabel(PS_v1885)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed))
, CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_42),2)
, CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_43),2)
, CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_45),2)
, CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46negate),1)
, CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46signum),1)
, CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger),1)
, CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46abs),1)
, useLabel(CF_Prelude_46Eq_46Data_46Fixed_46Fixed)
, bytes2word(1,0,0,1)
, useLabel(CT_v1902)
,};
Node FN_Prelude_46Real_46Data_46Fixed_46Fixed[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I2,HEAP_CVAL_P1,9)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1901)
, 0
, 0
, 0
, 0
, CONSTR(0,3,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1900)
, 0
, 0
, 0
, 0
, useLabel(PS_v1899)
, 0
, 0
, 0
, 0
, 1110031
, useLabel(ST_v1898)
,	/* CT_v1902: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Real_46Data_46Fixed_46Fixed[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Data_46Fixed_46Fixed),1)
, useLabel(PS_v1897)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed))
, CAPTAG(useLabel(FN_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational),1)
, useLabel(CF_Prelude_46Ord_46Data_46Fixed_46Fixed)
, bytes2word(1,0,0,1)
, useLabel(CT_v1910)
,};
Node FN_Prelude_46Fractional_46Data_46Fixed_46Fixed[] = {
  bytes2word(NEEDHEAP_P1,38,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,4)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1909)
, 0
, 0
, 0
, 0
, CONSTR(0,4,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1908)
, 0
, 0
, 0
, 0
, useLabel(PS_v1907)
, 0
, 0
, 0
, 0
, useLabel(PS_v1906)
, 0
, 0
, 0
, 0
, useLabel(PS_v1905)
, 0
, 0
, 0
, 0
, 1140031
, useLabel(ST_v1904)
,	/* CT_v1910: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Fractional_46Data_46Fixed_46Fixed[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Data_46Fixed_46Fixed),1)
, useLabel(PS_v1903)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed))
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46_47),2)
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46fromRational),1)
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46recip),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1921)
,};
Node FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed[] = {
  bytes2word(NEEDHEAP_P1,62,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,42,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_P1,7,HEAP_P1,6)
, bytes2word(HEAP_P1,5,HEAP_P1,4)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1920)
, 0
, 0
, 0
, 0
, CONSTR(0,7,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1919)
, 0
, 0
, 0
, 0
, useLabel(PS_v1918)
, 0
, 0
, 0
, 0
, useLabel(PS_v1917)
, 0
, 0
, 0
, 0
, useLabel(PS_v1916)
, 0
, 0
, 0
, 0
, useLabel(PS_v1915)
, 0
, 0
, 0
, 0
, useLabel(PS_v1914)
, 0
, 0
, 0
, 0
, useLabel(PS_v1913)
, 0
, 0
, 0
, 0
, 1200031
, useLabel(ST_v1912)
,	/* CT_v1921: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_Prelude_46RealFrac_46Data_46Fixed_46Fixed[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed),1)
, useLabel(PS_v1911)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Real_46Data_46Fixed_46Fixed))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Data_46Fixed_46Fixed))
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46round),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46ceiling),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46floor),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v1929)
,};
Node FN_Prelude_46Show_46Data_46Fixed_46Fixed[] = {
  bytes2word(NEEDHEAP_P1,38,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,4)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1928)
, 0
, 0
, 0
, 0
, CONSTR(0,4,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1927)
, 0
, 0
, 0
, 0
, useLabel(PS_v1926)
, 0
, 0
, 0
, 0
, useLabel(PS_v1925)
, 0
, 0
, 0
, 0
, useLabel(PS_v1924)
, 0
, 0
, 0
, 0
, 1550031
, useLabel(ST_v1923)
,	/* CT_v1929: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Show_46Data_46Fixed_46Fixed[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed),1)
, useLabel(PS_v1922)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showsPrec),2)
, CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showsType),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showList),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed_46show),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1933)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1932)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 1630010
, useLabel(ST_v1931)
,	/* CT_v1933: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0[] = {
  VAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0))
, useLabel(PS_v1930)
, 0
, 0
, 0
, useLabel(F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0_46resolution)
, bytes2word(0,0,0,0)
, useLabel(CT_v1937)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1936)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 1720010
, useLabel(ST_v1935)
,	/* CT_v1937: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1[] = {
  VAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1))
, useLabel(PS_v1934)
, 0
, 0
, 0
, useLabel(F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1_46resolution)
, bytes2word(0,0,0,0)
, useLabel(CT_v1941)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1940)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 1810010
, useLabel(ST_v1939)
,	/* CT_v1941: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2[] = {
  VAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2))
, useLabel(PS_v1938)
, 0
, 0
, 0
, useLabel(F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2_46resolution)
, bytes2word(0,0,0,0)
, useLabel(CT_v1945)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1944)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 1900010
, useLabel(ST_v1943)
,	/* CT_v1945: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3[] = {
  VAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3))
, useLabel(PS_v1942)
, 0
, 0
, 0
, useLabel(F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3_46resolution)
, bytes2word(0,0,0,0)
, useLabel(CT_v1949)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1948)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 1990010
, useLabel(ST_v1947)
,	/* CT_v1949: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6[] = {
  VAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6))
, useLabel(PS_v1946)
, 0
, 0
, 0
, useLabel(F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6_46resolution)
, bytes2word(0,0,0,0)
, useLabel(CT_v1953)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1952)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 2080010
, useLabel(ST_v1951)
,	/* CT_v1953: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9[] = {
  VAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9))
, useLabel(PS_v1950)
, 0
, 0
, 0
, useLabel(F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9_46resolution)
, bytes2word(0,0,0,0)
, useLabel(CT_v1957)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1956)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 2170010
, useLabel(ST_v1955)
,	/* CT_v1957: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12[] = {
  VAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12))
, useLabel(PS_v1954)
, 0
, 0
, 0
, useLabel(F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12_46resolution)
,	/* ST_v1523: (byte 0) */
 	/* ST_v1620: (byte 1) */
  bytes2word(0,45,0,0)
,};
Node PM_Data_46Fixed[] = {
 	/* ST_v1489: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,0,0)
,};
Node PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0[] = {
 };
Node PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0[] = {
 	/* ST_v1931: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,72)
, bytes2word(97,115,82,101)
, bytes2word(115,111,108,117)
, bytes2word(116,105,111,110)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(69,48,0,0)
,};
Node PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0_46resolution[] = {
 };
Node PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0_46resolution[] = {
 	/* ST_v1509: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,72)
, bytes2word(97,115,82,101)
, bytes2word(115,111,108,117)
, bytes2word(116,105,111,110)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(69,48,46,114)
, bytes2word(101,115,111,108)
, bytes2word(117,116,105,111)
, bytes2word(110,0,0,0)
,};
Node PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1[] = {
 };
Node PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1[] = {
 	/* ST_v1935: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,72)
, bytes2word(97,115,82,101)
, bytes2word(115,111,108,117)
, bytes2word(116,105,111,110)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(69,49,0,0)
,};
Node PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1_46resolution[] = {
 };
Node PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1_46resolution[] = {
 	/* ST_v1506: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,72)
, bytes2word(97,115,82,101)
, bytes2word(115,111,108,117)
, bytes2word(116,105,111,110)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(69,49,46,114)
, bytes2word(101,115,111,108)
, bytes2word(117,116,105,111)
, bytes2word(110,0,0,0)
,};
Node PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12[] = {
 };
Node PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12[] = {
 	/* ST_v1955: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,72)
, bytes2word(97,115,82,101)
, bytes2word(115,111,108,117)
, bytes2word(116,105,111,110)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(69,49,50,0)
,};
Node PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12_46resolution[] = {
 };
Node PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12_46resolution[] = {
 	/* ST_v1491: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,72)
, bytes2word(97,115,82,101)
, bytes2word(115,111,108,117)
, bytes2word(116,105,111,110)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(69,49,50,46)
, bytes2word(114,101,115,111)
, bytes2word(108,117,116,105)
, bytes2word(111,110,0,0)
,};
Node PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2[] = {
 };
Node PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2[] = {
 	/* ST_v1939: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,72)
, bytes2word(97,115,82,101)
, bytes2word(115,111,108,117)
, bytes2word(116,105,111,110)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(69,50,0,0)
,};
Node PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2_46resolution[] = {
 };
Node PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2_46resolution[] = {
 	/* ST_v1503: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,72)
, bytes2word(97,115,82,101)
, bytes2word(115,111,108,117)
, bytes2word(116,105,111,110)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(69,50,46,114)
, bytes2word(101,115,111,108)
, bytes2word(117,116,105,111)
, bytes2word(110,0,0,0)
,};
Node PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3[] = {
 };
Node PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3[] = {
 	/* ST_v1943: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,72)
, bytes2word(97,115,82,101)
, bytes2word(115,111,108,117)
, bytes2word(116,105,111,110)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(69,51,0,0)
,};
Node PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3_46resolution[] = {
 };
Node PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3_46resolution[] = {
 	/* ST_v1500: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,72)
, bytes2word(97,115,82,101)
, bytes2word(115,111,108,117)
, bytes2word(116,105,111,110)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(69,51,46,114)
, bytes2word(101,115,111,108)
, bytes2word(117,116,105,111)
, bytes2word(110,0,0,0)
,};
Node PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6[] = {
 };
Node PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6[] = {
 	/* ST_v1947: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,72)
, bytes2word(97,115,82,101)
, bytes2word(115,111,108,117)
, bytes2word(116,105,111,110)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(69,54,0,0)
,};
Node PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6_46resolution[] = {
 };
Node PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6_46resolution[] = {
 	/* ST_v1497: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,72)
, bytes2word(97,115,82,101)
, bytes2word(115,111,108,117)
, bytes2word(116,105,111,110)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(69,54,46,114)
, bytes2word(101,115,111,108)
, bytes2word(117,116,105,111)
, bytes2word(110,0,0,0)
,};
Node PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9[] = {
 };
Node PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9[] = {
 	/* ST_v1951: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,72)
, bytes2word(97,115,82,101)
, bytes2word(115,111,108,117)
, bytes2word(116,105,111,110)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(69,57,0,0)
,};
Node PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9_46resolution[] = {
 };
Node PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9_46resolution[] = {
 	/* ST_v1494: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,72)
, bytes2word(97,115,82,101)
, bytes2word(115,111,108,117)
, bytes2word(116,105,111,110)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(69,57,46,114)
, bytes2word(101,115,111,108)
, bytes2word(117,116,105,111)
, bytes2word(110,0,0,0)
,};
Node PP_Data_46Fixed_46_95_46resolution[] = {
 };
Node PC_Data_46Fixed_46_95_46resolution[] = {
 	/* ST_v1790: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,95)
, bytes2word(46,114,101,115)
, bytes2word(111,108,117,116)
,	/* PP_LAMBDA1462: (byte 4) */
 	/* PC_LAMBDA1462: (byte 4) */
 	/* ST_v1795: (byte 4) */
  bytes2word(105,111,110,0)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,95)
, bytes2word(46,114,101,115)
, bytes2word(111,108,117,116)
, bytes2word(105,111,110,58)
, bytes2word(110,111,112,111)
,	/* PP_Data_46Fixed_46chopZeros: (byte 2) */
 	/* PC_Data_46Fixed_46chopZeros: (byte 2) */
 	/* ST_v1534: (byte 2) */
  bytes2word(115,0,68,97)
, bytes2word(116,97,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,99,104,111)
, bytes2word(112,90,101,114)
,	/* PP_LAMBDA1454: (byte 3) */
 	/* PC_LAMBDA1454: (byte 3) */
 	/* ST_v1543: (byte 3) */
  bytes2word(111,115,0,68)
, bytes2word(97,116,97,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,99,104)
, bytes2word(111,112,90,101)
, bytes2word(114,111,115,58)
, bytes2word(49,50,57,58)
, bytes2word(49,53,45,49)
, bytes2word(50,57,58,49)
, bytes2word(54,0,0,0)
,};
Node PP_Data_46Fixed_46div_39[] = {
 };
Node PC_Data_46Fixed_46div_39[] = {
 	/* ST_v1799: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,100)
, bytes2word(105,118,39,0)
,};
Node PP_Data_46Fixed_46divMod_39[] = {
 };
Node PC_Data_46Fixed_46divMod_39[] = {
 	/* ST_v1820: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,100)
, bytes2word(105,118,77,111)
,	/* PP_Data_46Fixed_46Prelude_46204_46f: (byte 3) */
 	/* PC_Data_46Fixed_46Prelude_46204_46f: (byte 3) */
 	/* ST_v1831: (byte 3) */
  bytes2word(100,39,0,68)
, bytes2word(97,116,97,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,100,105)
, bytes2word(118,77,111,100)
, bytes2word(39,58,53,52)
, bytes2word(58,53,45,53)
, bytes2word(52,58,49,54)
, bytes2word(0,0,0,0)
,};
Node PP_Data_46Fixed_46mod_39[] = {
 };
Node PC_Data_46Fixed_46mod_39[] = {
 	/* ST_v1806: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,109)
,	/* PP_Data_46Fixed_46Prelude_46207_46f: (byte 4) */
 	/* PC_Data_46Fixed_46Prelude_46207_46f: (byte 4) */
 	/* ST_v1816: (byte 4) */
  bytes2word(111,100,39,0)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,109)
, bytes2word(111,100,39,58)
, bytes2word(53,57,58,53)
, bytes2word(45,53,57,58)
, bytes2word(49,54,0,0)
,};
Node PP_Data_46Fixed_46resolution[] = {
 };
Node PC_Data_46Fixed_46resolution[] = {
 	/* ST_v1879: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,114)
, bytes2word(101,115,111,108)
, bytes2word(117,116,105,111)
, bytes2word(110,0,0,0)
,};
Node PP_Data_46Fixed_46showFixed[] = {
 };
Node PC_Data_46Fixed_46showFixed[] = {
 	/* ST_v1579: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,115)
, bytes2word(104,111,119,70)
, bytes2word(105,120,101,100)
,	/* PP_LAMBDA1457: (byte 1) */
 	/* PC_LAMBDA1457: (byte 1) */
 	/* ST_v1619: (byte 1) */
  bytes2word(0,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(115,104,111,119)
, bytes2word(70,105,120,101)
, bytes2word(100,58,49,52)
, bytes2word(54,58,53,52)
, bytes2word(45,49,52,54)
,	/* PP_LAMBDA1458: (byte 4) */
 	/* PC_LAMBDA1458: (byte 4) */
 	/* ST_v1616: (byte 4) */
  bytes2word(58,53,54,0)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,115)
, bytes2word(104,111,119,70)
, bytes2word(105,120,101,100)
, bytes2word(58,49,52,57)
,	/* PP_LAMBDA1459: (byte 3) */
 	/* PC_LAMBDA1459: (byte 3) */
 	/* ST_v1613: (byte 3) */
  bytes2word(58,54,0,68)
, bytes2word(97,116,97,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,115,104)
, bytes2word(111,119,70,105)
, bytes2word(120,101,100,58)
, bytes2word(49,52,57,58)
,	/* PP_Data_46Fixed_46Prelude_46291_46digits: (byte 2) */
 	/* PC_Data_46Fixed_46Prelude_46291_46digits: (byte 2) */
 	/* ST_v1607: (byte 2) */
  bytes2word(56,0,68,97)
, bytes2word(116,97,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,115,104,111)
, bytes2word(119,70,105,120)
, bytes2word(101,100,58,49)
, bytes2word(53,49,58,53)
, bytes2word(45,49,53,49)
,	/* PP_Data_46Fixed_46Prelude_46292_46maxnum: (byte 4) */
 	/* PC_Data_46Fixed_46Prelude_46292_46maxnum: (byte 4) */
 	/* ST_v1600: (byte 4) */
  bytes2word(58,54,49,0)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,115)
, bytes2word(104,111,119,70)
, bytes2word(105,120,101,100)
, bytes2word(58,49,53,50)
, bytes2word(58,53,45,49)
, bytes2word(53,50,58,50)
,	/* PP_Data_46Fixed_46showIntegerZeros: (byte 2) */
 	/* PC_Data_46Fixed_46showIntegerZeros: (byte 2) */
 	/* ST_v1554: (byte 2) */
  bytes2word(52,0,68,97)
, bytes2word(116,97,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,115,104,111)
, bytes2word(119,73,110,116)
, bytes2word(101,103,101,114)
, bytes2word(90,101,114,111)
,	/* PP_LAMBDA1455: (byte 2) */
 	/* PC_LAMBDA1455: (byte 2) */
 	/* ST_v1572: (byte 2) */
  bytes2word(115,0,68,97)
, bytes2word(116,97,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,115,104,111)
, bytes2word(119,73,110,116)
, bytes2word(101,103,101,114)
, bytes2word(90,101,114,111)
, bytes2word(115,58,49,51)
, bytes2word(53,58,50,57)
, bytes2word(45,49,51,53)
,	/* PP_LAMBDA1456: (byte 4) */
 	/* PC_LAMBDA1456: (byte 4) */
 	/* ST_v1568: (byte 4) */
  bytes2word(58,51,48,0)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,115)
, bytes2word(104,111,119,73)
, bytes2word(110,116,101,103)
, bytes2word(101,114,90,101)
, bytes2word(114,111,115,58)
, bytes2word(49,51,56,58)
, bytes2word(49,48,45,49)
, bytes2word(51,56,58,53)
,	/* PP_Data_46Fixed_46withDot: (byte 2) */
 	/* PC_Data_46Fixed_46withDot: (byte 2) */
 	/* ST_v1516: (byte 2) */
  bytes2word(51,0,68,97)
, bytes2word(116,97,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,119,105,116)
, bytes2word(104,68,111,116)
,	/* PP_LAMBDA1453: (byte 1) */
 	/* PC_LAMBDA1453: (byte 1) */
 	/* ST_v1522: (byte 1) */
  bytes2word(0,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(119,105,116,104)
, bytes2word(68,111,116,58)
, bytes2word(49,52,49,58)
, bytes2word(49,52,45,49)
, bytes2word(52,49,58,49)
,	/* PP_Data_46Fixed_46withResolution: (byte 2) */
 	/* PC_Data_46Fixed_46withResolution: (byte 2) */
 	/* ST_v1679: (byte 2) */
  bytes2word(53,0,68,97)
, bytes2word(116,97,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,119,105,116)
, bytes2word(104,82,101,115)
, bytes2word(111,108,117,116)
,	/* PP_Data_46Fixed_46withType: (byte 4) */
 	/* PC_Data_46Fixed_46withType: (byte 4) */
 	/* ST_v1676: (byte 4) */
  bytes2word(105,111,110,0)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,119)
, bytes2word(105,116,104,84)
,	/* ST_v1796: (byte 4) */
  bytes2word(121,112,101,0)
, bytes2word(78,111,32,100)
, bytes2word(101,102,97,117)
, bytes2word(108,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(105,116,105,111)
, bytes2word(110,32,102,111)
, bytes2word(114,32,99,108)
, bytes2word(97,115,115,32)
, bytes2word(109,101,116,104)
, bytes2word(111,100,32,114)
, bytes2word(101,115,111,108)
, bytes2word(117,116,105,111)
, bytes2word(110,0,0,0)
,};
Node PP_Prelude_46Enum_46Data_46Fixed_46Fixed[] = {
 };
Node PC_Prelude_46Enum_46Data_46Fixed_46Fixed[] = {
 	/* ST_v1882: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,0,0,0)
,};
Node PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFrom[] = {
 };
Node PC_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFrom[] = {
 	/* ST_v1769: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,101,110)
, bytes2word(117,109,70,114)
, bytes2word(111,109,0,0)
,};
Node PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThen[] = {
 };
Node PC_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThen[] = {
 	/* ST_v1764: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,101,110)
, bytes2word(117,109,70,114)
, bytes2word(111,109,84,104)
, bytes2word(101,110,0,0)
,};
Node PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThenTo[] = {
 };
Node PC_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThenTo[] = {
 	/* ST_v1754: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,101,110)
, bytes2word(117,109,70,114)
, bytes2word(111,109,84,104)
, bytes2word(101,110,84,111)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromTo[] = {
 };
Node PC_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromTo[] = {
 	/* ST_v1759: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,101,110)
, bytes2word(117,109,70,114)
, bytes2word(111,109,84,111)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46fromEnum[] = {
 };
Node PC_Prelude_46Enum_46Data_46Fixed_46Fixed_46fromEnum[] = {
 	/* ST_v1774: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,102,114)
, bytes2word(111,109,69,110)
, bytes2word(117,109,0,0)
,};
Node PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46pred[] = {
 };
Node PC_Prelude_46Enum_46Data_46Fixed_46Fixed_46pred[] = {
 	/* ST_v1782: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,112,114)
, bytes2word(101,100,0,0)
,};
Node PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46succ[] = {
 };
Node PC_Prelude_46Enum_46Data_46Fixed_46Fixed_46succ[] = {
 	/* ST_v1786: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,115,117)
, bytes2word(99,99,0,0)
,};
Node PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46toEnum[] = {
 };
Node PC_Prelude_46Enum_46Data_46Fixed_46Fixed_46toEnum[] = {
 	/* ST_v1778: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,116,111)
, bytes2word(69,110,117,109)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Eq_46Data_46Fixed_46Fixed[] = {
 };
Node PC_Prelude_46Eq_46Data_46Fixed_46Fixed[] = {
 	/* ST_v1871: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,68)
, bytes2word(97,116,97,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,70,105)
, bytes2word(120,101,100,0)
,};
Node PP_Prelude_46Eq_46Data_46Fixed_46Fixed_46_47_61[] = {
 };
Node PC_Prelude_46Eq_46Data_46Fixed_46Fixed_46_47_61[] = {
 	/* ST_v1867: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,68)
, bytes2word(97,116,97,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(47,61,0,0)
,};
Node PP_Prelude_46Eq_46Data_46Fixed_46Fixed_46_61_61[] = {
 };
Node PC_Prelude_46Eq_46Data_46Fixed_46Fixed_46_61_61[] = {
 	/* ST_v1863: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,68)
, bytes2word(97,116,97,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(61,61,0,0)
,};
Node PP_Prelude_46Fractional_46Data_46Fixed_46Fixed[] = {
 };
Node PC_Prelude_46Fractional_46Data_46Fixed_46Fixed[] = {
 	/* ST_v1904: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(97,108,46,68)
, bytes2word(97,116,97,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,70,105)
, bytes2word(120,101,100,0)
,};
Node PP_Prelude_46Fractional_46Data_46Fixed_46Fixed_46_47[] = {
 };
Node PC_Prelude_46Fractional_46Data_46Fixed_46Fixed_46_47[] = {
 	/* ST_v1703: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(97,108,46,68)
, bytes2word(97,116,97,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(47,0,0,0)
,};
Node PP_Prelude_46Fractional_46Data_46Fixed_46Fixed_46fromRational[] = {
 };
Node PC_Prelude_46Fractional_46Data_46Fixed_46Fixed_46fromRational[] = {
 	/* ST_v1685: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(97,108,46,68)
, bytes2word(97,116,97,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(102,114,111,109)
, bytes2word(82,97,116,105)
, bytes2word(111,110,97,108)
,	/* PP_LAMBDA1460: (byte 1) */
 	/* PC_LAMBDA1460: (byte 1) */
 	/* ST_v1690: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,70,114,97)
, bytes2word(99,116,105,111)
, bytes2word(110,97,108,46)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,102,114,111)
, bytes2word(109,82,97,116)
, bytes2word(105,111,110,97)
, bytes2word(108,58,49,49)
, bytes2word(56,58,51,56)
, bytes2word(45,49,49,56)
, bytes2word(58,56,51,0)
,};
Node PP_Prelude_46Fractional_46Data_46Fixed_46Fixed_46recip[] = {
 };
Node PC_Prelude_46Fractional_46Data_46Fixed_46Fixed_46recip[] = {
 	/* ST_v1696: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(97,108,46,68)
, bytes2word(97,116,97,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(114,101,99,105)
, bytes2word(112,0,0,0)
,};
Node PP_Prelude_46Num_46Data_46Fixed_46Fixed[] = {
 };
Node PC_Prelude_46Num_46Data_46Fixed_46Fixed[] = {
 	/* ST_v1886: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,70)
, bytes2word(105,120,101,100)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Num_46Data_46Fixed_46Fixed_46_42[] = {
 };
Node PC_Prelude_46Num_46Data_46Fixed_46Fixed_46_42[] = {
 	/* ST_v1739: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,42,0,0)
,};
Node PP_Prelude_46Num_46Data_46Fixed_46Fixed_46_43[] = {
 };
Node PC_Prelude_46Num_46Data_46Fixed_46Fixed_46_43[] = {
 	/* ST_v1750: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,43,0,0)
,};
Node PP_Prelude_46Num_46Data_46Fixed_46Fixed_46_45[] = {
 };
Node PC_Prelude_46Num_46Data_46Fixed_46Fixed_46_45[] = {
 	/* ST_v1746: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,45,0,0)
,};
Node PP_Prelude_46Num_46Data_46Fixed_46Fixed_46abs[] = {
 };
Node PC_Prelude_46Num_46Data_46Fixed_46Fixed_46abs[] = {
 	/* ST_v1731: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,97,98,115)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger[] = {
 };
Node PC_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger[] = {
 	/* ST_v1717: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,102,114,111)
, bytes2word(109,73,110,116)
, bytes2word(101,103,101,114)
,	/* PP_LAMBDA1461: (byte 1) */
 	/* PC_LAMBDA1461: (byte 1) */
 	/* ST_v1722: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,78,117,109)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,102,114)
, bytes2word(111,109,73,110)
, bytes2word(116,101,103,101)
, bytes2word(114,58,49,48)
, bytes2word(57,58,51,55)
, bytes2word(45,49,48,57)
, bytes2word(58,54,49,0)
,};
Node PP_Prelude_46Num_46Data_46Fixed_46Fixed_46negate[] = {
 };
Node PC_Prelude_46Num_46Data_46Fixed_46Fixed_46negate[] = {
 	/* ST_v1735: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,110,101,103)
, bytes2word(97,116,101,0)
,};
Node PP_Prelude_46Num_46Data_46Fixed_46Fixed_46signum[] = {
 };
Node PC_Prelude_46Num_46Data_46Fixed_46Fixed_46signum[] = {
 	/* ST_v1726: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,115,105,103)
, bytes2word(110,117,109,0)
,};
Node PP_Prelude_46Ord_46Data_46Fixed_46Fixed[] = {
 };
Node PC_Prelude_46Ord_46Data_46Fixed_46Fixed[] = {
 	/* ST_v1875: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,70)
, bytes2word(105,120,101,100)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60[] = {
 };
Node PC_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60[] = {
 	/* ST_v1859: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,60,0,0)
,};
Node PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60_61[] = {
 	/* ST_v1839: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,60,61,0)
,};
Node PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62[] = {
 };
Node PC_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62[] = {
 	/* ST_v1851: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,62,0,0)
,};
Node PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62_61[] = {
 	/* ST_v1855: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,62,61,0)
,};
Node PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46compare[] = {
 };
Node PC_Prelude_46Ord_46Data_46Fixed_46Fixed_46compare[] = {
 	/* ST_v1835: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,99,111,109)
, bytes2word(112,97,114,101)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46max[] = {
 };
Node PC_Prelude_46Ord_46Data_46Fixed_46Fixed_46max[] = {
 	/* ST_v1847: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,109,97,120)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46min[] = {
 };
Node PC_Prelude_46Ord_46Data_46Fixed_46Fixed_46min[] = {
 	/* ST_v1843: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(68,97,116,97)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,109,105,110)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Real_46Data_46Fixed_46Fixed[] = {
 };
Node PC_Prelude_46Real_46Data_46Fixed_46Fixed[] = {
 	/* ST_v1898: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,0,0,0)
,};
Node PP_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational[] = {
 };
Node PC_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational[] = {
 	/* ST_v1710: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,116,111)
, bytes2word(82,97,116,105)
, bytes2word(111,110,97,108)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed[] = {
 };
Node PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed[] = {
 	/* ST_v1912: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,0,0,0)
,};
Node PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46ceiling[] = {
 };
Node PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46ceiling[] = {
 	/* ST_v1648: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,99,101)
, bytes2word(105,108,105,110)
, bytes2word(103,0,0,0)
,};
Node PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46floor[] = {
 };
Node PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46floor[] = {
 	/* ST_v1643: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,102,108)
, bytes2word(111,111,114,0)
,};
Node PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction[] = {
 };
Node PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction[] = {
 	/* ST_v1663: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,112,114)
, bytes2word(111,112,101,114)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
,	/* PP_Data_46Fixed_46Prelude_46265_46i: (byte 1) */
 	/* PC_Data_46Fixed_46Prelude_46265_46i: (byte 1) */
 	/* ST_v1672: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(108,70,114,97)
, bytes2word(99,46,68,97)
, bytes2word(116,97,46,70)
, bytes2word(105,120,101,100)
, bytes2word(46,70,105,120)
, bytes2word(101,100,46,112)
, bytes2word(114,111,112,101)
, bytes2word(114,70,114,97)
, bytes2word(99,116,105,111)
, bytes2word(110,58,49,50)
, bytes2word(50,58,57,45)
, bytes2word(49,50,50,58)
, bytes2word(50,50,0,0)
,};
Node PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46round[] = {
 };
Node PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46round[] = {
 	/* ST_v1653: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,114,111)
, bytes2word(117,110,100,0)
,};
Node PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate[] = {
 };
Node PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate[] = {
 	/* ST_v1658: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,116,114)
, bytes2word(117,110,99,97)
, bytes2word(116,101,0,0)
,};
Node PP_Prelude_46Show_46Data_46Fixed_46Fixed[] = {
 };
Node PC_Prelude_46Show_46Data_46Fixed_46Fixed[] = {
 	/* ST_v1923: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,0,0,0)
,};
Node PP_Prelude_46Show_46Data_46Fixed_46Fixed_46show[] = {
 };
Node PC_Prelude_46Show_46Data_46Fixed_46Fixed_46show[] = {
 	/* ST_v1623: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,115,104)
, bytes2word(111,119,0,0)
,};
Node PP_Prelude_46Show_46Data_46Fixed_46Fixed_46showList[] = {
 };
Node PC_Prelude_46Show_46Data_46Fixed_46Fixed_46showList[] = {
 	/* ST_v1633: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,115,104)
, bytes2word(111,119,76,105)
, bytes2word(115,116,0,0)
,};
Node PP_Prelude_46Show_46Data_46Fixed_46Fixed_46showsPrec[] = {
 };
Node PC_Prelude_46Show_46Data_46Fixed_46Fixed_46showsPrec[] = {
 	/* ST_v1638: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,115,104)
, bytes2word(111,119,115,80)
, bytes2word(114,101,99,0)
,};
Node PP_Prelude_46Show_46Data_46Fixed_46Fixed_46showsType[] = {
 };
Node PC_Prelude_46Show_46Data_46Fixed_46Fixed_46showsType[] = {
 	/* ST_v1628: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,68,97,116)
, bytes2word(97,46,70,105)
, bytes2word(120,101,100,46)
, bytes2word(70,105,120,101)
, bytes2word(100,46,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,0)
,	/* PS_v1801: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46div_39)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v1800: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46div_39)
, useLabel(PC_Prelude_46toRational)
,	/* PS_v1798: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46div_39)
, useLabel(PC_Data_46Fixed_46div_39)
,	/* PS_v1803: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46div_39)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46floor)
,	/* PS_v1802: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46div_39)
, useLabel(PC_Prelude_46Fractional_46Ratio_46Ratio_46_47)
,	/* PS_v1827: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46divMod_39)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v1822: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46divMod_39)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v1826: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46divMod_39)
, useLabel(PC_Prelude_46fromIntegral)
,	/* PS_v1828: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46divMod_39)
, useLabel(PC_Prelude_462)
,	/* PS_v1824: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46divMod_39)
, useLabel(PC_Prelude_46_45)
,	/* PS_v1825: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46divMod_39)
, useLabel(PC_Prelude_46_42)
,	/* PS_v1819: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46divMod_39)
, useLabel(PC_Data_46Fixed_46divMod_39)
,	/* PS_v1821: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46divMod_39)
, useLabel(PC_Data_46Fixed_46Prelude_46204_46f)
,	/* PS_v1823: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46divMod_39)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v1812: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46mod_39)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v1811: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46mod_39)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v1813: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46mod_39)
, useLabel(PC_Prelude_46_45)
,	/* PS_v1808: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46mod_39)
, useLabel(PC_Prelude_46_42)
,	/* PS_v1809: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46mod_39)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v1805: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46mod_39)
, useLabel(PC_Data_46Fixed_46mod_39)
,	/* PS_v1810: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46mod_39)
, useLabel(PC_Data_46Fixed_46Prelude_46207_46f)
,	/* PS_v1807: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46mod_39)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v1878: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46resolution)
, useLabel(PC_Data_46Fixed_46resolution)
,	/* PS_v1675: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46withType)
, useLabel(PC_Data_46Fixed_46withType)
,	/* PS_v1681: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46withResolution)
, useLabel(PC_Prelude_46_46)
,	/* PS_v1680: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46withResolution)
, useLabel(PC_Data_46Fixed_46resolution)
,	/* PS_v1682: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46withResolution)
, useLabel(PC_Data_46Fixed_46withType)
,	/* PS_v1678: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46withResolution)
, useLabel(PC_Data_46Fixed_46withResolution)
,	/* PS_v1535: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46chopZeros)
, useLabel(PC_NHC_46Internal_46_95eqInteger)
,	/* PS_v1533: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46chopZeros)
, useLabel(PC_Data_46Fixed_46chopZeros)
,	/* PS_v1538: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46chopZeros)
, useLabel(PC_Prelude_46Eq_46Prelude_46Integer_46_61_61)
,	/* PS_v1537: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46chopZeros)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46mod)
,	/* PS_v1539: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46chopZeros)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46div)
,	/* PS_v1540: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46chopZeros)
, useLabel(PC_Prelude_46Show_46Prelude_46Integer_46show)
,	/* PS_v1536: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46chopZeros)
, useLabel(PC_LAMBDA1454)
,	/* PS_v1556: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showIntegerZeros)
, useLabel(PC_NHC_46Internal_46_95eqInteger)
,	/* PS_v1563: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showIntegerZeros)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v1562: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showIntegerZeros)
, useLabel(PC_Prelude_46replicate)
,	/* PS_v1560: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showIntegerZeros)
, useLabel(PC_Prelude_46length)
,	/* PS_v1553: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showIntegerZeros)
, useLabel(PC_Data_46Fixed_46showIntegerZeros)
,	/* PS_v1558: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showIntegerZeros)
, useLabel(PC_Prelude_46Show_46Prelude_46Integer_46show)
,	/* PS_v1561: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showIntegerZeros)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_45)
,	/* PS_v1557: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showIntegerZeros)
, useLabel(PC_LAMBDA1455)
,	/* PS_v1559: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showIntegerZeros)
, useLabel(PC_LAMBDA1456)
,	/* PS_v1519: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46withDot)
, useLabel(PC_Prelude_46_58)
,	/* PS_v1515: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46withDot)
, useLabel(PC_Data_46Fixed_46withDot)
,	/* PS_v1518: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46withDot)
, useLabel(PC_LAMBDA1453)
,	/* PS_v1584: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v1587: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v1585: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v1582: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_Prelude_46asTypeOf)
,	/* PS_v1586: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_Data_46Fixed_46resolution)
,	/* PS_v1596: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_Data_46Fixed_46showIntegerZeros)
,	/* PS_v1597: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_Data_46Fixed_46withDot)
,	/* PS_v1578: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_Data_46Fixed_46showFixed)
,	/* PS_v1595: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_Data_46Fixed_46Prelude_46291_46digits)
,	/* PS_v1591: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_Data_46Fixed_46Prelude_46292_46maxnum)
,	/* PS_v1593: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46div)
,	/* PS_v1594: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_Prelude_46Show_46Prelude_46Integer_46show)
,	/* PS_v1580: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_Prelude_46Ord_46Prelude_46Integer_46_60)
,	/* PS_v1583: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46negate)
,	/* PS_v1588: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46divMod)
,	/* PS_v1592: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46_42)
,	/* PS_v1581: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_LAMBDA1457)
,	/* PS_v1589: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_LAMBDA1458)
,	/* PS_v1590: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46showFixed)
, useLabel(PC_LAMBDA1459)
,	/* PS_v1832: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46Prelude_46204_46f)
, useLabel(PC_Data_46Fixed_46div_39)
,	/* PS_v1830: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46Prelude_46204_46f)
, useLabel(PC_Data_46Fixed_46Prelude_46204_46f)
,	/* PS_v1817: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46Prelude_46207_46f)
, useLabel(PC_Data_46Fixed_46div_39)
,	/* PS_v1815: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46Prelude_46207_46f)
, useLabel(PC_Data_46Fixed_46Prelude_46207_46f)
,	/* PS_v1792: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46_95_46resolution)
, useLabel(PC_NHC_46Internal_46_95noMethodError)
,	/* PS_v1789: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46_95_46resolution)
, useLabel(PC_Data_46Fixed_46_95_46resolution)
,	/* PS_v1791: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46_95_46resolution)
, useLabel(PC_LAMBDA1462)
,	/* PS_v1785: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46succ)
, useLabel(PC_Prelude_46Enum_46Data_46Fixed_46Fixed_46succ)
,	/* PS_v1787: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46succ)
, useLabel(PC_Prelude_46Enum_46Prelude_46Integer_46succ)
,	/* PS_v1781: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46pred)
, useLabel(PC_Prelude_46Enum_46Data_46Fixed_46Fixed_46pred)
,	/* PS_v1783: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46pred)
, useLabel(PC_Prelude_46Enum_46Prelude_46Integer_46pred)
,	/* PS_v1779: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46toEnum)
, useLabel(PC_Prelude_46_46)
,	/* PS_v1777: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46toEnum)
, useLabel(PC_Prelude_46Enum_46Data_46Fixed_46Fixed_46toEnum)
,	/* PS_v1773: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46fromEnum)
, useLabel(PC_Prelude_46Enum_46Data_46Fixed_46Fixed_46fromEnum)
,	/* PS_v1775: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46fromEnum)
, useLabel(PC_Prelude_46Enum_46Prelude_46Integer_46fromEnum)
,	/* PS_v1768: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFrom)
, useLabel(PC_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFrom)
,	/* PS_v1771: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFrom)
, useLabel(PC_Prelude_46Functor_46Prelude_46_91_93_46fmap)
,	/* PS_v1770: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFrom)
, useLabel(PC_Prelude_46Enum_46Prelude_46Integer_46enumFrom)
,	/* PS_v1763: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThen)
, useLabel(PC_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThen)
,	/* PS_v1766: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThen)
, useLabel(PC_Prelude_46Functor_46Prelude_46_91_93_46fmap)
,	/* PS_v1765: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThen)
, useLabel(PC_Prelude_46Enum_46Prelude_46Integer_46enumFromThen)
,	/* PS_v1758: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromTo)
, useLabel(PC_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromTo)
,	/* PS_v1761: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromTo)
, useLabel(PC_Prelude_46Functor_46Prelude_46_91_93_46fmap)
,	/* PS_v1760: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromTo)
, useLabel(PC_Prelude_46Enum_46Prelude_46Integer_46enumFromTo)
,	/* PS_v1753: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThenTo)
, useLabel(PC_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThenTo)
,	/* PS_v1756: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThenTo)
, useLabel(PC_Prelude_46Functor_46Prelude_46_91_93_46fmap)
,	/* PS_v1755: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThenTo)
, useLabel(PC_Prelude_46Enum_46Prelude_46Integer_46enumFromThenTo)
,	/* PS_v1749: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46_43)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed_46_43)
,	/* PS_v1751: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46_43)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46_43)
,	/* PS_v1745: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46_45)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed_46_45)
,	/* PS_v1747: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46_45)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46_45)
,	/* PS_v1742: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46_42)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v1741: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46_42)
, useLabel(PC_Data_46Fixed_46resolution)
,	/* PS_v1738: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46_42)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed_46_42)
,	/* PS_v1743: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46_42)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46div)
,	/* PS_v1740: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46_42)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46_42)
,	/* PS_v1734: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46negate)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed_46negate)
,	/* PS_v1736: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46negate)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46negate)
,	/* PS_v1730: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46abs)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed_46abs)
,	/* PS_v1732: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46abs)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46abs)
,	/* PS_v1725: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46signum)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed_46signum)
,	/* PS_v1728: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46signum)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger)
,	/* PS_v1727: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46signum)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46signum)
,	/* PS_v1719: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger)
, useLabel(PC_Data_46Fixed_46withResolution)
,	/* PS_v1716: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger)
,	/* PS_v1718: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger)
, useLabel(PC_LAMBDA1461)
,	/* PS_v1713: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v1712: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational)
, useLabel(PC_Data_46Fixed_46resolution)
,	/* PS_v1709: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational)
, useLabel(PC_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational)
,	/* PS_v1711: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational)
, useLabel(PC_Prelude_46Real_46Prelude_46Integer_46toRational)
,	/* PS_v1714: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational)
, useLabel(PC_Prelude_46Fractional_46Ratio_46Ratio_46_47)
,	/* PS_v1705: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed_46_47)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v1704: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed_46_47)
, useLabel(PC_Data_46Fixed_46resolution)
,	/* PS_v1702: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed_46_47)
, useLabel(PC_Prelude_46Fractional_46Data_46Fixed_46Fixed_46_47)
,	/* PS_v1707: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed_46_47)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46div)
,	/* PS_v1706: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed_46_47)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46_42)
,	/* PS_v1698: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed_46recip)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v1697: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed_46recip)
, useLabel(PC_Data_46Fixed_46resolution)
,	/* PS_v1695: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed_46recip)
, useLabel(PC_Prelude_46Fractional_46Data_46Fixed_46Fixed_46recip)
,	/* PS_v1700: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed_46recip)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46div)
,	/* PS_v1699: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed_46recip)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46_42)
,	/* PS_v1687: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed_46fromRational)
, useLabel(PC_Data_46Fixed_46withResolution)
,	/* PS_v1684: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed_46fromRational)
, useLabel(PC_Prelude_46Fractional_46Data_46Fixed_46Fixed_46fromRational)
,	/* PS_v1686: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed_46fromRational)
, useLabel(PC_LAMBDA1460)
,	/* PS_v1665: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v1667: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction)
, useLabel(PC_Prelude_46fromIntegral)
,	/* PS_v1669: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction)
, useLabel(PC_Prelude_462)
,	/* PS_v1662: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction)
, useLabel(PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction)
,	/* PS_v1664: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction)
, useLabel(PC_Data_46Fixed_46Prelude_46265_46i)
,	/* PS_v1668: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed_46_45)
,	/* PS_v1666: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed)
,	/* PS_v1671: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46Prelude_46265_46i)
, useLabel(PC_Data_46Fixed_46Prelude_46265_46i)
,	/* PS_v1673: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46Prelude_46265_46i)
, useLabel(PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate)
,	/* PS_v1657: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate)
, useLabel(PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate)
,	/* PS_v1659: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate)
, useLabel(PC_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational)
,	/* PS_v1660: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46truncate)
,	/* PS_v1652: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46round)
, useLabel(PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46round)
,	/* PS_v1654: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46round)
, useLabel(PC_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational)
,	/* PS_v1655: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46round)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46round)
,	/* PS_v1647: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46ceiling)
, useLabel(PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46ceiling)
,	/* PS_v1649: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46ceiling)
, useLabel(PC_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational)
,	/* PS_v1650: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46ceiling)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling)
,	/* PS_v1642: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46floor)
, useLabel(PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46floor)
,	/* PS_v1645: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46floor)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46floor)
,	/* PS_v1644: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46floor)
, useLabel(PC_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational)
,	/* PS_v1606: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46Prelude_46291_46digits)
, useLabel(PC_Data_46Fixed_46Prelude_46291_46digits)
,	/* PS_v1610: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46Prelude_46291_46digits)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Double_46ceiling)
,	/* PS_v1609: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46Prelude_46291_46digits)
, useLabel(PC_Prelude_46Floating_46Prelude_46Double_46logBase)
,	/* PS_v1608: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46Prelude_46291_46digits)
, useLabel(PC_Prelude_46Num_46Prelude_46Double_46fromInteger)
,	/* PS_v1602: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46Prelude_46292_46maxnum)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v1604: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46Prelude_46292_46maxnum)
, useLabel(PC_Prelude_46_94)
,	/* PS_v1601: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46Prelude_46292_46maxnum)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v1603: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46Prelude_46292_46maxnum)
, useLabel(PC_Data_46Fixed_46Prelude_46291_46digits)
,	/* PS_v1599: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46Prelude_46292_46maxnum)
, useLabel(PC_Data_46Fixed_46Prelude_46292_46maxnum)
,	/* PS_v1624: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed_46show)
, useLabel(PC_Prelude_46False)
,	/* PS_v1625: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed_46show)
, useLabel(PC_Data_46Fixed_46showFixed)
,	/* PS_v1622: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed_46show)
, useLabel(PC_Prelude_46Show_46Data_46Fixed_46Fixed_46show)
,	/* PS_v1508: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0_46resolution)
, useLabel(PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0_46resolution)
,	/* PS_v1505: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1_46resolution)
, useLabel(PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1_46resolution)
,	/* PS_v1502: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2_46resolution)
, useLabel(PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2_46resolution)
,	/* PS_v1499: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3_46resolution)
, useLabel(PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3_46resolution)
,	/* PS_v1496: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6_46resolution)
, useLabel(PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6_46resolution)
,	/* PS_v1493: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9_46resolution)
, useLabel(PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9_46resolution)
,	/* PS_v1490: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12_46resolution)
, useLabel(PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12_46resolution)
,	/* PS_v1640: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed_46showsPrec)
, useLabel(PC_Prelude_46_95_46showsPrec)
,	/* PS_v1637: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed_46showsPrec)
, useLabel(PC_Prelude_46Show_46Data_46Fixed_46Fixed_46showsPrec)
,	/* PS_v1639: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed_46showsPrec)
, useLabel(PC_Prelude_46Show_46Data_46Fixed_46Fixed)
,	/* PS_v1635: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed_46showList)
, useLabel(PC_Prelude_46_95_46showList)
,	/* PS_v1632: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed_46showList)
, useLabel(PC_Prelude_46Show_46Data_46Fixed_46Fixed_46showList)
,	/* PS_v1634: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed_46showList)
, useLabel(PC_Prelude_46Show_46Data_46Fixed_46Fixed)
,	/* PS_v1630: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed_46showsType)
, useLabel(PC_Prelude_46_95_46showsType)
,	/* PS_v1627: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed_46showsType)
, useLabel(PC_Prelude_46Show_46Data_46Fixed_46Fixed_46showsType)
,	/* PS_v1629: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed_46showsType)
, useLabel(PC_Prelude_46Show_46Data_46Fixed_46Fixed)
,	/* PS_v1862: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Eq_46Data_46Fixed_46Fixed_46_61_61)
, useLabel(PC_Prelude_46Eq_46Data_46Fixed_46Fixed_46_61_61)
,	/* PS_v1864: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Eq_46Data_46Fixed_46Fixed_46_61_61)
, useLabel(PC_Prelude_46Eq_46Prelude_46Integer_46_61_61)
,	/* PS_v1868: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Eq_46Data_46Fixed_46Fixed_46_47_61)
, useLabel(PC_Prelude_46_95_46_47_61)
,	/* PS_v1866: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Eq_46Data_46Fixed_46Fixed_46_47_61)
, useLabel(PC_Prelude_46Eq_46Data_46Fixed_46Fixed_46_47_61)
,	/* PS_v1838: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60_61)
, useLabel(PC_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60_61)
,	/* PS_v1840: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Integer_46_60_61)
,	/* PS_v1834: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46compare)
, useLabel(PC_Prelude_46Ord_46Data_46Fixed_46Fixed_46compare)
,	/* PS_v1836: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_46Integer_46compare)
,	/* PS_v1860: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60)
, useLabel(PC_Prelude_46_95_46_60)
,	/* PS_v1858: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60)
, useLabel(PC_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60)
,	/* PS_v1856: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v1854: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62_61)
, useLabel(PC_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62_61)
,	/* PS_v1852: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v1850: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62)
, useLabel(PC_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62)
,	/* PS_v1848: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v1846: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46max)
, useLabel(PC_Prelude_46Ord_46Data_46Fixed_46Fixed_46max)
,	/* PS_v1844: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v1842: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Ord_46Data_46Fixed_46Fixed_46min)
, useLabel(PC_Prelude_46Ord_46Data_46Fixed_46Fixed_46min)
,	/* PS_v1927: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Show_46Data_46Fixed_46Fixed_46show)
,	/* PS_v1924: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Show_46Data_46Fixed_46Fixed_46showsPrec)
,	/* PS_v1926: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Show_46Data_46Fixed_46Fixed_46showList)
,	/* PS_v1925: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Show_46Data_46Fixed_46Fixed_46showsType)
,	/* PS_v1922: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Show_46Data_46Fixed_46Fixed)
,	/* PS_v1928: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Show_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_464)
,	/* PS_v1889: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed_46_43)
,	/* PS_v1890: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed_46_45)
,	/* PS_v1888: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed_46_42)
,	/* PS_v1891: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed_46negate)
,	/* PS_v1894: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed_46abs)
,	/* PS_v1892: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed_46signum)
,	/* PS_v1893: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger)
,	/* PS_v1887: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Show_46Data_46Fixed_46Fixed)
,	/* PS_v1885: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed)
,	/* PS_v1895: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Num_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_469)
,	/* PS_v1874: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Ord_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Ord_46Data_46Fixed_46Fixed)
,	/* PS_v1876: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Ord_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_468)
,	/* PS_v1870: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Eq_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Eq_46Data_46Fixed_46Fixed)
,	/* PS_v1872: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Eq_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_462)
,	/* PS_v1883: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_468)
,	/* PS_v1881: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Enum_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Enum_46Data_46Fixed_46Fixed)
,	/* PS_v1900: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Real_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational)
,	/* PS_v1899: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Real_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed)
,	/* PS_v1897: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Real_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Real_46Data_46Fixed_46Fixed)
,	/* PS_v1901: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Real_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_463)
,	/* PS_v1906: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Fractional_46Data_46Fixed_46Fixed_46_47)
,	/* PS_v1908: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Fractional_46Data_46Fixed_46Fixed_46recip)
,	/* PS_v1907: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Fractional_46Data_46Fixed_46Fixed_46fromRational)
,	/* PS_v1905: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Num_46Data_46Fixed_46Fixed)
,	/* PS_v1903: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Fractional_46Data_46Fixed_46Fixed)
,	/* PS_v1909: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46Fractional_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_464)
,	/* PS_v1918: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction)
,	/* PS_v1916: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate)
,	/* PS_v1915: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46round)
,	/* PS_v1917: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46ceiling)
,	/* PS_v1919: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46floor)
,	/* PS_v1913: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Real_46Data_46Fixed_46Fixed)
,	/* PS_v1914: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46Fractional_46Data_46Fixed_46Fixed)
,	/* PS_v1911: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_46RealFrac_46Data_46Fixed_46Fixed)
,	/* PS_v1920: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Prelude_46RealFrac_46Data_46Fixed_46Fixed)
, useLabel(PC_Prelude_467)
,	/* PS_v1932: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0)
, useLabel(PC_Prelude_461)
,	/* PS_v1930: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0)
, useLabel(PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0)
,	/* PS_v1936: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1)
, useLabel(PC_Prelude_461)
,	/* PS_v1934: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1)
, useLabel(PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1)
,	/* PS_v1940: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2)
, useLabel(PC_Prelude_461)
,	/* PS_v1938: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2)
, useLabel(PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2)
,	/* PS_v1944: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3)
, useLabel(PC_Prelude_461)
,	/* PS_v1942: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3)
, useLabel(PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3)
,	/* PS_v1948: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6)
, useLabel(PC_Prelude_461)
,	/* PS_v1946: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6)
, useLabel(PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6)
,	/* PS_v1952: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9)
, useLabel(PC_Prelude_461)
,	/* PS_v1950: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9)
, useLabel(PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9)
,	/* PS_v1956: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12)
, useLabel(PC_Prelude_461)
,	/* PS_v1954: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12)
, useLabel(PC_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12)
,	/* PS_v1521: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_LAMBDA1453)
, useLabel(PC_LAMBDA1453)
,	/* PS_v1542: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_LAMBDA1454)
, useLabel(PC_LAMBDA1454)
,	/* PS_v1571: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_LAMBDA1455)
, useLabel(PC_LAMBDA1455)
,	/* PS_v1569: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_LAMBDA1456)
, useLabel(PC_Data_46Fixed_46chopZeros)
,	/* PS_v1567: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_LAMBDA1456)
, useLabel(PC_LAMBDA1456)
,	/* PS_v1618: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_LAMBDA1457)
, useLabel(PC_LAMBDA1457)
,	/* PS_v1615: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_LAMBDA1458)
, useLabel(PC_LAMBDA1458)
,	/* PS_v1612: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_LAMBDA1459)
, useLabel(PC_LAMBDA1459)
,	/* PS_v1693: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_LAMBDA1460)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46floor)
,	/* PS_v1692: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_LAMBDA1460)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46_42)
,	/* PS_v1691: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_LAMBDA1460)
, useLabel(PC_Prelude_46Real_46Prelude_46Integer_46toRational)
,	/* PS_v1689: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_LAMBDA1460)
, useLabel(PC_LAMBDA1460)
,	/* PS_v1723: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_LAMBDA1461)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46_42)
,	/* PS_v1721: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_LAMBDA1461)
, useLabel(PC_LAMBDA1461)
,	/* PS_v1794: (byte 0) */
  useLabel(PM_Data_46Fixed)
, useLabel(PP_LAMBDA1462)
, useLabel(PC_LAMBDA1462)
,};
