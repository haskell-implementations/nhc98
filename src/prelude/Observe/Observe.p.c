#include "newmacros.h"
#include "runtime.h"

#define PS_NHC_46Observe_46ObserveContext	((void*)startLabel+32)
#define PS_NHC_46Observe_46NoObserveGlobal	((void*)startLabel+72)
#define PS_NHC_46Observe_46ObserveGlobal	((void*)startLabel+112)
#define C0_NHC_46Observe_46NoObserveGlobal	((void*)startLabel+124)
#define PS_NHC_46Observe_46MonadObserver	((void*)startLabel+172)
#define FN_NHC_46Observe_46observeGlobal	((void*)startLabel+192)
#define CT_v1933	((void*)startLabel+316)
#define CF_NHC_46Observe_46observeGlobal	((void*)startLabel+324)
#define FN_NHC_46Observe_46openObserveGlobal	((void*)startLabel+364)
#define CT_v1942	((void*)startLabel+556)
#define CF_NHC_46Observe_46openObserveGlobal	((void*)startLabel+564)
#define FN_LAMBDA1813	((void*)startLabel+616)
#define CT_v1953	((void*)startLabel+892)
#define F0_LAMBDA1813	((void*)startLabel+900)
#define FN_LAMBDA1812	((void*)startLabel+956)
#define CT_v1962	((void*)startLabel+1172)
#define F0_LAMBDA1812	((void*)startLabel+1180)
#define FN_LAMBDA1811	((void*)startLabel+1236)
#define CT_v1966	((void*)startLabel+1308)
#define F0_LAMBDA1811	((void*)startLabel+1316)
#define FN_LAMBDA1810	((void*)startLabel+1344)
#define CT_v1970	((void*)startLabel+1388)
#define CF_LAMBDA1810	((void*)startLabel+1396)
#define FN_LAMBDA1809	((void*)startLabel+1424)
#define CT_v1974	((void*)startLabel+1468)
#define CF_LAMBDA1809	((void*)startLabel+1476)
#define FN_LAMBDA1808	((void*)startLabel+1504)
#define CT_v1978	((void*)startLabel+1548)
#define CF_LAMBDA1808	((void*)startLabel+1556)
#define FN_LAMBDA1807	((void*)startLabel+1584)
#define CT_v1983	((void*)startLabel+1660)
#define F0_LAMBDA1807	((void*)startLabel+1668)
#define FN_LAMBDA1806	((void*)startLabel+1704)
#define CT_v1987	((void*)startLabel+1748)
#define CF_LAMBDA1806	((void*)startLabel+1756)
#define FN_LAMBDA1805	((void*)startLabel+1784)
#define CT_v1991	((void*)startLabel+1828)
#define CF_LAMBDA1805	((void*)startLabel+1836)
#define FN_NHC_46Observe_46observeHandle	((void*)startLabel+1864)
#define v1998	((void*)startLabel+1874)
#define v1995	((void*)startLabel+1878)
#define v1992	((void*)startLabel+1882)
#define CT_v2001	((void*)startLabel+1956)
#define F0_NHC_46Observe_46observeHandle	((void*)startLabel+1964)
#define FN_LAMBDA1814	((void*)startLabel+2000)
#define CT_v2005	((void*)startLabel+2044)
#define CF_LAMBDA1814	((void*)startLabel+2052)
#define FN_NHC_46Observe_46closeObserveGlobal	((void*)startLabel+2080)
#define CT_v2011	((void*)startLabel+2188)
#define CF_NHC_46Observe_46closeObserveGlobal	((void*)startLabel+2196)
#define FN_LAMBDA1816	((void*)startLabel+2240)
#define CT_v2024	((void*)startLabel+2612)
#define F0_LAMBDA1816	((void*)startLabel+2620)
#define FN_LAMBDA1815	((void*)startLabel+2684)
#define CT_v2028	((void*)startLabel+2728)
#define CF_LAMBDA1815	((void*)startLabel+2736)
#define CT_v2034	((void*)startLabel+2940)
#define CT_v2040	((void*)startLabel+3100)
#define CT_v2045	((void*)startLabel+3228)
#define FN_NHC_46Observe_46mkXmlNode	((void*)startLabel+3276)
#define CT_v2054	((void*)startLabel+3496)
#define F0_NHC_46Observe_46mkXmlNode	((void*)startLabel+3504)
#define FN_LAMBDA1823	((void*)startLabel+3556)
#define CT_v2058	((void*)startLabel+3600)
#define CF_LAMBDA1823	((void*)startLabel+3608)
#define FN_LAMBDA1822	((void*)startLabel+3636)
#define CT_v2062	((void*)startLabel+3680)
#define CF_LAMBDA1822	((void*)startLabel+3688)
#define FN_LAMBDA1821	((void*)startLabel+3716)
#define CT_v2066	((void*)startLabel+3760)
#define CF_LAMBDA1821	((void*)startLabel+3768)
#define FN_NHC_46Observe_46Prelude_46393_46showAttrs	((void*)startLabel+3796)
#define v2073	((void*)startLabel+3806)
#define v2070	((void*)startLabel+3810)
#define v2067	((void*)startLabel+3820)
#define CT_v2079	((void*)startLabel+3992)
#define F0_NHC_46Observe_46Prelude_46393_46showAttrs	((void*)startLabel+4000)
#define FN_LAMBDA1820	((void*)startLabel+4048)
#define CT_v2089	((void*)startLabel+4232)
#define F0_LAMBDA1820	((void*)startLabel+4240)
#define FN_LAMBDA1819	((void*)startLabel+4280)
#define CT_v2093	((void*)startLabel+4324)
#define CF_LAMBDA1819	((void*)startLabel+4332)
#define FN_LAMBDA1818	((void*)startLabel+4360)
#define CT_v2097	((void*)startLabel+4404)
#define CF_LAMBDA1818	((void*)startLabel+4412)
#define FN_LAMBDA1817	((void*)startLabel+4440)
#define CT_v2101	((void*)startLabel+4484)
#define CF_LAMBDA1817	((void*)startLabel+4492)
#define FN_NHC_46Observe_46observeParent	((void*)startLabel+4520)
#define CT_v2104	((void*)startLabel+4540)
#define F0_NHC_46Observe_46observeParent	((void*)startLabel+4548)
#define FN_NHC_46Observe_46observePort	((void*)startLabel+4576)
#define CT_v2107	((void*)startLabel+4596)
#define F0_NHC_46Observe_46observePort	((void*)startLabel+4604)
#define FN_NHC_46Observe_46xmlFun	((void*)startLabel+4636)
#define CT_v2121	((void*)startLabel+5092)
#define F0_NHC_46Observe_46xmlFun	((void*)startLabel+5100)
#define FN_LAMBDA1827	((void*)startLabel+5160)
#define CT_v2125	((void*)startLabel+5204)
#define CF_LAMBDA1827	((void*)startLabel+5212)
#define FN_LAMBDA1826	((void*)startLabel+5240)
#define CT_v2129	((void*)startLabel+5284)
#define CF_LAMBDA1826	((void*)startLabel+5292)
#define FN_LAMBDA1825	((void*)startLabel+5320)
#define CT_v2133	((void*)startLabel+5364)
#define CF_LAMBDA1825	((void*)startLabel+5372)
#define FN_LAMBDA1824	((void*)startLabel+5400)
#define CT_v2137	((void*)startLabel+5444)
#define CF_LAMBDA1824	((void*)startLabel+5452)
#define FN_NHC_46Observe_46xmlEnter	((void*)startLabel+5484)
#define CT_v2151	((void*)startLabel+5940)
#define F0_NHC_46Observe_46xmlEnter	((void*)startLabel+5948)
#define FN_LAMBDA1831	((void*)startLabel+6008)
#define CT_v2154	((void*)startLabel+6052)
#define CF_LAMBDA1831	((void*)startLabel+6060)
#define FN_LAMBDA1830	((void*)startLabel+6088)
#define CT_v2157	((void*)startLabel+6132)
#define CF_LAMBDA1830	((void*)startLabel+6140)
#define FN_LAMBDA1829	((void*)startLabel+6168)
#define CT_v2160	((void*)startLabel+6212)
#define CF_LAMBDA1829	((void*)startLabel+6220)
#define FN_LAMBDA1828	((void*)startLabel+6248)
#define CT_v2164	((void*)startLabel+6292)
#define CF_LAMBDA1828	((void*)startLabel+6300)
#define FN_NHC_46Observe_46xmlCons	((void*)startLabel+6336)
#define CT_v2180	((void*)startLabel+6900)
#define F0_NHC_46Observe_46xmlCons	((void*)startLabel+6908)
#define FN_LAMBDA1837	((void*)startLabel+6976)
#define CT_v2184	((void*)startLabel+7020)
#define CF_LAMBDA1837	((void*)startLabel+7028)
#define FN_LAMBDA1836	((void*)startLabel+7056)
#define CT_v2188	((void*)startLabel+7100)
#define CF_LAMBDA1836	((void*)startLabel+7108)
#define FN_LAMBDA1835	((void*)startLabel+7136)
#define CT_v2191	((void*)startLabel+7180)
#define CF_LAMBDA1835	((void*)startLabel+7188)
#define FN_LAMBDA1834	((void*)startLabel+7216)
#define CT_v2194	((void*)startLabel+7260)
#define CF_LAMBDA1834	((void*)startLabel+7268)
#define FN_LAMBDA1833	((void*)startLabel+7296)
#define CT_v2197	((void*)startLabel+7340)
#define CF_LAMBDA1833	((void*)startLabel+7348)
#define FN_LAMBDA1832	((void*)startLabel+7376)
#define CT_v2200	((void*)startLabel+7420)
#define CF_LAMBDA1832	((void*)startLabel+7428)
#define FN_NHC_46Observe_46xmlObserve	((void*)startLabel+7460)
#define CT_v2211	((void*)startLabel+7796)
#define F0_NHC_46Observe_46xmlObserve	((void*)startLabel+7804)
#define FN_LAMBDA1840	((void*)startLabel+7852)
#define CT_v2215	((void*)startLabel+7896)
#define CF_LAMBDA1840	((void*)startLabel+7904)
#define FN_LAMBDA1839	((void*)startLabel+7932)
#define CT_v2218	((void*)startLabel+7976)
#define CF_LAMBDA1839	((void*)startLabel+7984)
#define FN_LAMBDA1838	((void*)startLabel+8012)
#define CT_v2222	((void*)startLabel+8056)
#define CF_LAMBDA1838	((void*)startLabel+8064)
#define FN_NHC_46Observe_46showXmlString	((void*)startLabel+8092)
#define CT_v2227	((void*)startLabel+8164)
#define CF_NHC_46Observe_46showXmlString	((void*)startLabel+8172)
#define FN_NHC_46Observe_46Prelude_46399_46fixChar	((void*)startLabel+8208)
#define v2238	((void*)startLabel+8236)
#define v2231	((void*)startLabel+8240)
#define v2232	((void*)startLabel+8250)
#define v2233	((void*)startLabel+8260)
#define v2234	((void*)startLabel+8270)
#define v2235	((void*)startLabel+8280)
#define v2228	((void*)startLabel+8290)
#define CT_v2246	((void*)startLabel+8508)
#define F0_NHC_46Observe_46Prelude_46399_46fixChar	((void*)startLabel+8516)
#define FN_LAMBDA1845	((void*)startLabel+8564)
#define CT_v2250	((void*)startLabel+8608)
#define CF_LAMBDA1845	((void*)startLabel+8616)
#define FN_LAMBDA1844	((void*)startLabel+8644)
#define CT_v2254	((void*)startLabel+8688)
#define CF_LAMBDA1844	((void*)startLabel+8696)
#define FN_LAMBDA1843	((void*)startLabel+8724)
#define CT_v2258	((void*)startLabel+8768)
#define CF_LAMBDA1843	((void*)startLabel+8776)
#define FN_LAMBDA1842	((void*)startLabel+8804)
#define CT_v2262	((void*)startLabel+8848)
#define CF_LAMBDA1842	((void*)startLabel+8856)
#define FN_LAMBDA1841	((void*)startLabel+8884)
#define CT_v2266	((void*)startLabel+8928)
#define CF_LAMBDA1841	((void*)startLabel+8936)
#define FN_NHC_46Observe_46ourCatchAll	((void*)startLabel+8968)
#define CT_v2271	((void*)startLabel+9056)
#define F0_NHC_46Observe_46ourCatchAll	((void*)startLabel+9064)
#define FN_NHC_46Observe_46observeUniq	((void*)startLabel+9100)
#define v2278	((void*)startLabel+9110)
#define v2275	((void*)startLabel+9114)
#define v2272	((void*)startLabel+9119)
#define CT_v2281	((void*)startLabel+9192)
#define F0_NHC_46Observe_46observeUniq	((void*)startLabel+9200)
#define FN_LAMBDA1846	((void*)startLabel+9236)
#define CT_v2285	((void*)startLabel+9280)
#define CF_LAMBDA1846	((void*)startLabel+9288)
#define FN_NHC_46Observe_46runMO	((void*)startLabel+9316)
#define CT_v2288	((void*)startLabel+9336)
#define F0_NHC_46Observe_46runMO	((void*)startLabel+9344)
#define FN_NHC_46Observe_46observeDepth	((void*)startLabel+9372)
#define CT_v2291	((void*)startLabel+9392)
#define F0_NHC_46Observe_46observeDepth	((void*)startLabel+9400)
#define FN_NHC_46Observe_46sendObserveFnPacket	((void*)startLabel+9432)
#define CT_v2298	((void*)startLabel+9572)
#define F0_NHC_46Observe_46sendObserveFnPacket	((void*)startLabel+9580)
#define FN_LAMBDA1853	((void*)startLabel+9636)
#define CT_v2316	((void*)startLabel+10132)
#define F0_LAMBDA1853	((void*)startLabel+10140)
#define FN_LAMBDA1852	((void*)startLabel+10232)
#define CT_v2319	((void*)startLabel+10252)
#define F0_LAMBDA1852	((void*)startLabel+10260)
#define FN_LAMBDA1851	((void*)startLabel+10288)
#define CT_v2322	((void*)startLabel+10308)
#define F0_LAMBDA1851	((void*)startLabel+10316)
#define FN_LAMBDA1850	((void*)startLabel+10348)
#define v2329	((void*)startLabel+10358)
#define v2326	((void*)startLabel+10362)
#define v2323	((void*)startLabel+10400)
#define CT_v2334	((void*)startLabel+10536)
#define F0_LAMBDA1850	((void*)startLabel+10544)
#define FN_LAMBDA1849	((void*)startLabel+10584)
#define CT_v2338	((void*)startLabel+10628)
#define CF_LAMBDA1849	((void*)startLabel+10636)
#define FN_LAMBDA1848	((void*)startLabel+10664)
#define v2344	((void*)startLabel+10674)
#define v2342	((void*)startLabel+10678)
#define v2339	((void*)startLabel+10697)
#define CT_v2349	((void*)startLabel+10832)
#define F0_LAMBDA1848	((void*)startLabel+10840)
#define FN_LAMBDA1847	((void*)startLabel+10880)
#define CT_v2353	((void*)startLabel+10924)
#define CF_LAMBDA1847	((void*)startLabel+10932)
#define FN_NHC_46Observe_46sendEnterPacket	((void*)startLabel+10964)
#define CT_v2360	((void*)startLabel+11104)
#define F0_NHC_46Observe_46sendEnterPacket	((void*)startLabel+11112)
#define FN_LAMBDA1858	((void*)startLabel+11172)
#define CT_v2374	((void*)startLabel+11552)
#define F0_LAMBDA1858	((void*)startLabel+11560)
#define FN_LAMBDA1857	((void*)startLabel+11644)
#define v2381	((void*)startLabel+11654)
#define v2378	((void*)startLabel+11658)
#define v2375	((void*)startLabel+11696)
#define CT_v2386	((void*)startLabel+11832)
#define F0_LAMBDA1857	((void*)startLabel+11840)
#define FN_LAMBDA1856	((void*)startLabel+11880)
#define CT_v2390	((void*)startLabel+11924)
#define CF_LAMBDA1856	((void*)startLabel+11932)
#define FN_LAMBDA1855	((void*)startLabel+11960)
#define v2396	((void*)startLabel+11970)
#define v2394	((void*)startLabel+11974)
#define v2391	((void*)startLabel+11993)
#define CT_v2401	((void*)startLabel+12128)
#define F0_LAMBDA1855	((void*)startLabel+12136)
#define FN_LAMBDA1854	((void*)startLabel+12176)
#define CT_v2404	((void*)startLabel+12220)
#define CF_LAMBDA1854	((void*)startLabel+12228)
#define CT_v2411	((void*)startLabel+12400)
#define FN_LAMBDA1865	((void*)startLabel+12468)
#define CT_v2431	((void*)startLabel+13028)
#define F0_LAMBDA1865	((void*)startLabel+13036)
#define FN_LAMBDA1864	((void*)startLabel+13136)
#define CT_v2434	((void*)startLabel+13156)
#define F0_LAMBDA1864	((void*)startLabel+13164)
#define FN_LAMBDA1863	((void*)startLabel+13192)
#define CT_v2437	((void*)startLabel+13212)
#define F0_LAMBDA1863	((void*)startLabel+13220)
#define FN_LAMBDA1862	((void*)startLabel+13252)
#define v2444	((void*)startLabel+13262)
#define v2441	((void*)startLabel+13266)
#define v2438	((void*)startLabel+13304)
#define CT_v2449	((void*)startLabel+13440)
#define F0_LAMBDA1862	((void*)startLabel+13448)
#define FN_LAMBDA1861	((void*)startLabel+13488)
#define CT_v2453	((void*)startLabel+13532)
#define CF_LAMBDA1861	((void*)startLabel+13540)
#define FN_LAMBDA1860	((void*)startLabel+13568)
#define v2459	((void*)startLabel+13578)
#define v2457	((void*)startLabel+13582)
#define v2454	((void*)startLabel+13601)
#define CT_v2464	((void*)startLabel+13736)
#define F0_LAMBDA1860	((void*)startLabel+13744)
#define FN_LAMBDA1859	((void*)startLabel+13784)
#define CT_v2467	((void*)startLabel+13828)
#define CF_LAMBDA1859	((void*)startLabel+13836)
#define FN_NHC_46Observe_46generateContext	((void*)startLabel+13872)
#define CT_v2474	((void*)startLabel+14012)
#define F0_NHC_46Observe_46generateContext	((void*)startLabel+14020)
#define FN_LAMBDA1869	((void*)startLabel+14080)
#define v2481	((void*)startLabel+14092)
#define v2478	((void*)startLabel+14096)
#define v2475	((void*)startLabel+14108)
#define CT_v2495	((void*)startLabel+14532)
#define F0_LAMBDA1869	((void*)startLabel+14540)
#define FN_LAMBDA1868	((void*)startLabel+14628)
#define CT_v2499	((void*)startLabel+14704)
#define F0_LAMBDA1868	((void*)startLabel+14712)
#define FN_LAMBDA1867	((void*)startLabel+14744)
#define v2506	((void*)startLabel+14754)
#define v2503	((void*)startLabel+14758)
#define v2500	((void*)startLabel+14796)
#define CT_v2511	((void*)startLabel+14932)
#define F0_LAMBDA1867	((void*)startLabel+14940)
#define FN_LAMBDA1866	((void*)startLabel+14980)
#define CT_v2515	((void*)startLabel+15024)
#define CF_LAMBDA1866	((void*)startLabel+15032)
#define FN_NHC_46Observe_46observer_95	((void*)startLabel+15064)
#define CT_v2519	((void*)startLabel+15116)
#define F0_NHC_46Observe_46observer_95	((void*)startLabel+15124)
#define CT_v2525	((void*)startLabel+15268)
#define FN_LAMBDA1872	((void*)startLabel+15324)
#define CT_v2532	((void*)startLabel+15492)
#define F0_LAMBDA1872	((void*)startLabel+15500)
#define FN_LAMBDA1871	((void*)startLabel+15544)
#define CT_v2536	((void*)startLabel+15624)
#define F0_LAMBDA1871	((void*)startLabel+15632)
#define FN_LAMBDA1870	((void*)startLabel+15660)
#define CT_v2540	((void*)startLabel+15728)
#define F0_LAMBDA1870	((void*)startLabel+15736)
#define CT_v2545	((void*)startLabel+15868)
#define FN_LAMBDA1873	((void*)startLabel+15916)
#define CT_v2553	((void*)startLabel+16036)
#define F0_LAMBDA1873	((void*)startLabel+16044)
#define CT_v2558	((void*)startLabel+16180)
#define FN_LAMBDA1874	((void*)startLabel+16228)
#define CT_v2562	((void*)startLabel+16296)
#define F0_LAMBDA1874	((void*)startLabel+16304)
#define CT_v2566	((void*)startLabel+16384)
#define CT_v2570	((void*)startLabel+16484)
#define FN_NHC_46Observe_46_60_36_60	((void*)startLabel+16528)
#define CT_v2574	((void*)startLabel+16580)
#define CF_NHC_46Observe_46_60_36_60	((void*)startLabel+16588)
#define CT_v2578	((void*)startLabel+16688)
#define FN_LAMBDA1877	((void*)startLabel+16736)
#define CT_v2582	((void*)startLabel+16792)
#define F0_LAMBDA1877	((void*)startLabel+16800)
#define FN_NHC_46Observe_46NHC_46Observe_46Observable_46Prelude_46_45_62_46observer_39451	((void*)startLabel+16840)
#define CT_v2588	((void*)startLabel+16980)
#define F0_NHC_46Observe_46NHC_46Observe_46Observable_46Prelude_46_45_62_46observer_39451	((void*)startLabel+16988)
#define FN_LAMBDA1876	((void*)startLabel+17036)
#define CT_v2595	((void*)startLabel+17172)
#define F0_LAMBDA1876	((void*)startLabel+17180)
#define FN_LAMBDA1875	((void*)startLabel+17224)
#define CT_v2599	((void*)startLabel+17276)
#define F0_LAMBDA1875	((void*)startLabel+17284)
#define CT_v2604	((void*)startLabel+17400)
#define FN_LAMBDA1880	((void*)startLabel+17448)
#define CT_v2612	((void*)startLabel+17620)
#define F0_LAMBDA1880	((void*)startLabel+17628)
#define FN_LAMBDA1879	((void*)startLabel+17676)
#define CT_v2617	((void*)startLabel+17752)
#define F0_LAMBDA1879	((void*)startLabel+17760)
#define FN_LAMBDA1878	((void*)startLabel+17796)
#define CT_v2621	((void*)startLabel+17840)
#define CF_LAMBDA1878	((void*)startLabel+17848)
#define FN_NHC_46Observe_46observerM	((void*)startLabel+17884)
#define CT_v2626	((void*)startLabel+17976)
#define F0_NHC_46Observe_46observerM	((void*)startLabel+17984)
#define FN_LAMBDA1883	((void*)startLabel+18028)
#define CT_v2634	((void*)startLabel+18200)
#define F0_LAMBDA1883	((void*)startLabel+18208)
#define FN_LAMBDA1882	((void*)startLabel+18260)
#define CT_v2640	((void*)startLabel+18372)
#define F0_LAMBDA1882	((void*)startLabel+18380)
#define FN_LAMBDA1881	((void*)startLabel+18420)
#define CT_v2644	((void*)startLabel+18464)
#define CF_LAMBDA1881	((void*)startLabel+18472)
#define CT_v2654	((void*)startLabel+18744)
#define FN_LAMBDA1886	((void*)startLabel+18816)
#define CT_v2663	((void*)startLabel+19016)
#define F0_LAMBDA1886	((void*)startLabel+19024)
#define FN_LAMBDA1885	((void*)startLabel+19080)
#define CT_v2668	((void*)startLabel+19160)
#define F0_LAMBDA1885	((void*)startLabel+19168)
#define FN_LAMBDA1884	((void*)startLabel+19204)
#define CT_v2672	((void*)startLabel+19248)
#define CF_LAMBDA1884	((void*)startLabel+19256)
#define v2674	((void*)startLabel+19298)
#define v2675	((void*)startLabel+19337)
#define CT_v2687	((void*)startLabel+19588)
#define FN_LAMBDA1889	((void*)startLabel+19652)
#define CT_v2692	((void*)startLabel+19752)
#define F0_LAMBDA1889	((void*)startLabel+19760)
#define FN_LAMBDA1888	((void*)startLabel+19792)
#define CT_v2696	((void*)startLabel+19836)
#define CF_LAMBDA1888	((void*)startLabel+19844)
#define FN_LAMBDA1887	((void*)startLabel+19872)
#define CT_v2700	((void*)startLabel+19916)
#define CF_LAMBDA1887	((void*)startLabel+19924)
#define v2702	((void*)startLabel+19968)
#define v2703	((void*)startLabel+20007)
#define CT_v2715	((void*)startLabel+20260)
#define FN_LAMBDA1893	((void*)startLabel+20328)
#define CT_v2722	((void*)startLabel+20464)
#define F0_LAMBDA1893	((void*)startLabel+20472)
#define FN_LAMBDA1892	((void*)startLabel+20520)
#define CT_v2727	((void*)startLabel+20620)
#define F0_LAMBDA1892	((void*)startLabel+20628)
#define FN_LAMBDA1891	((void*)startLabel+20660)
#define CT_v2731	((void*)startLabel+20704)
#define CF_LAMBDA1891	((void*)startLabel+20712)
#define FN_LAMBDA1890	((void*)startLabel+20740)
#define CT_v2735	((void*)startLabel+20784)
#define CF_LAMBDA1890	((void*)startLabel+20792)
#define CT_v2746	((void*)startLabel+21024)
#define FN_LAMBDA1899	((void*)startLabel+21096)
#define CT_v2752	((void*)startLabel+21216)
#define F0_LAMBDA1899	((void*)startLabel+21224)
#define FN_LAMBDA1898	((void*)startLabel+21280)
#define CT_v2758	((void*)startLabel+21400)
#define F0_LAMBDA1898	((void*)startLabel+21408)
#define FN_LAMBDA1897	((void*)startLabel+21460)
#define CT_v2764	((void*)startLabel+21576)
#define F0_LAMBDA1897	((void*)startLabel+21584)
#define FN_LAMBDA1896	((void*)startLabel+21636)
#define CT_v2770	((void*)startLabel+21752)
#define F0_LAMBDA1896	((void*)startLabel+21760)
#define FN_LAMBDA1895	((void*)startLabel+21808)
#define CT_v2775	((void*)startLabel+21912)
#define F0_LAMBDA1895	((void*)startLabel+21920)
#define FN_LAMBDA1894	((void*)startLabel+21952)
#define CT_v2779	((void*)startLabel+21996)
#define CF_LAMBDA1894	((void*)startLabel+22004)
#define CT_v2790	((void*)startLabel+22232)
#define FN_LAMBDA1904	((void*)startLabel+22300)
#define CT_v2796	((void*)startLabel+22416)
#define F0_LAMBDA1904	((void*)startLabel+22424)
#define FN_LAMBDA1903	((void*)startLabel+22476)
#define CT_v2802	((void*)startLabel+22592)
#define F0_LAMBDA1903	((void*)startLabel+22600)
#define FN_LAMBDA1902	((void*)startLabel+22648)
#define CT_v2808	((void*)startLabel+22764)
#define F0_LAMBDA1902	((void*)startLabel+22772)
#define FN_LAMBDA1901	((void*)startLabel+22820)
#define CT_v2813	((void*)startLabel+22924)
#define F0_LAMBDA1901	((void*)startLabel+22932)
#define FN_LAMBDA1900	((void*)startLabel+22964)
#define CT_v2816	((void*)startLabel+23008)
#define CF_LAMBDA1900	((void*)startLabel+23016)
#define CT_v2827	((void*)startLabel+23236)
#define FN_LAMBDA1908	((void*)startLabel+23300)
#define CT_v2833	((void*)startLabel+23416)
#define F0_LAMBDA1908	((void*)startLabel+23424)
#define FN_LAMBDA1907	((void*)startLabel+23472)
#define CT_v2839	((void*)startLabel+23584)
#define F0_LAMBDA1907	((void*)startLabel+23592)
#define FN_LAMBDA1906	((void*)startLabel+23636)
#define CT_v2844	((void*)startLabel+23740)
#define F0_LAMBDA1906	((void*)startLabel+23748)
#define FN_LAMBDA1905	((void*)startLabel+23780)
#define CT_v2847	((void*)startLabel+23824)
#define CF_LAMBDA1905	((void*)startLabel+23832)
#define CT_v2860	((void*)startLabel+24132)
#define FN_LAMBDA1910	((void*)startLabel+24200)
#define CT_v2864	((void*)startLabel+24268)
#define F0_LAMBDA1910	((void*)startLabel+24276)
#define FN_LAMBDA1909	((void*)startLabel+24304)
#define CT_v2867	((void*)startLabel+24348)
#define CF_LAMBDA1909	((void*)startLabel+24356)
#define FN_NHC_46Observe_46observeLit	((void*)startLabel+24388)
#define CT_v2876	((void*)startLabel+24588)
#define F0_NHC_46Observe_46observeLit	((void*)startLabel+24596)
#define CT_v2880	((void*)startLabel+24704)
#define CT_v2884	((void*)startLabel+24804)
#define CT_v2888	((void*)startLabel+24904)
#define CT_v2892	((void*)startLabel+25004)
#define CT_v2896	((void*)startLabel+25104)
#define CT_v2900	((void*)startLabel+25204)
#define CT_v2904	((void*)startLabel+25304)
#define CT_v2909	((void*)startLabel+25436)
#define FN_LAMBDA1911	((void*)startLabel+25480)
#define CT_v2913	((void*)startLabel+25524)
#define CF_LAMBDA1911	((void*)startLabel+25532)
#define CT_v2917	((void*)startLabel+25620)
#define CT_v2921	((void*)startLabel+25720)
#define CT_v2924	((void*)startLabel+25784)
#define CT_v2928	((void*)startLabel+25888)
#define CT_v2932	((void*)startLabel+25996)
#define CT_v2936	((void*)startLabel+26104)
#define CT_v2940	((void*)startLabel+26212)
#define CT_v2944	((void*)startLabel+26320)
#define CT_v2948	((void*)startLabel+26428)
#define CT_v2952	((void*)startLabel+26536)
#define CT_v2957	((void*)startLabel+26680)
#define CT_v2962	((void*)startLabel+26828)
#define CT_v2967	((void*)startLabel+26980)
#define CT_v2972	((void*)startLabel+27132)
#define CT_v2977	((void*)startLabel+27272)
#define CT_v2982	((void*)startLabel+27412)
#define CT_v2987	((void*)startLabel+27560)
#define CT_v2992	((void*)startLabel+27700)
#define CT_v2997	((void*)startLabel+27844)
#define CT_v3001	((void*)startLabel+27956)
#define ST_v2100	((void*)startLabel+28000)
#define ST_v2061	((void*)startLabel+28001)
#define ST_v2092	((void*)startLabel+28003)
#define ST_v2261	((void*)startLabel+28005)
#define ST_v2257	((void*)startLabel+28011)
#define ST_v2249	((void*)startLabel+28018)
#define ST_v2253	((void*)startLabel+28023)
#define ST_v2265	((void*)startLabel+28028)
#define ST_v2778	((void*)startLabel+28035)
#define ST_v2057	((void*)startLabel+28037)
#define ST_v2730	((void*)startLabel+28040)
#define ST_v2065	((void*)startLabel+28042)
#define ST_v2027	((void*)startLabel+28044)
#define ST_v1973	((void*)startLabel+28060)
#define ST_v2620	((void*)startLabel+28082)
#define ST_v1969	((void*)startLabel+28087)
#define ST_v2643	((void*)startLabel+28120)
#define ST_v2096	((void*)startLabel+28129)
#define ST_v2695	((void*)startLabel+28132)
#define ST_v1927	((void*)startLabel+28140)
#define PP_NHC_46Observe_46_60_36_60	((void*)startLabel+28152)
#define PC_NHC_46Observe_46_60_36_60	((void*)startLabel+28152)
#define ST_v2572	((void*)startLabel+28152)
#define ST_v2950	((void*)startLabel+28168)
#define ST_v2878	((void*)startLabel+28196)
#define ST_v2984	((void*)startLabel+28232)
#define ST_v2646	((void*)startLabel+28268)
#define PP_LAMBDA1884	((void*)startLabel+28312)
#define PC_LAMBDA1884	((void*)startLabel+28312)
#define ST_v2670	((void*)startLabel+28312)
#define PP_LAMBDA1886	((void*)startLabel+28370)
#define PC_LAMBDA1886	((void*)startLabel+28370)
#define ST_v2656	((void*)startLabel+28370)
#define PP_LAMBDA1885	((void*)startLabel+28428)
#define PC_LAMBDA1885	((void*)startLabel+28428)
#define ST_v2665	((void*)startLabel+28428)
#define ST_v2989	((void*)startLabel+28488)
#define ST_v2601	((void*)startLabel+28528)
#define PP_LAMBDA1880	((void*)startLabel+28576)
#define PC_LAMBDA1880	((void*)startLabel+28576)
#define ST_v2606	((void*)startLabel+28576)
#define PP_LAMBDA1878	((void*)startLabel+28638)
#define PC_LAMBDA1878	((void*)startLabel+28638)
#define ST_v2619	((void*)startLabel+28638)
#define PP_LAMBDA1879	((void*)startLabel+28700)
#define PC_LAMBDA1879	((void*)startLabel+28700)
#define ST_v2614	((void*)startLabel+28700)
#define ST_v2994	((void*)startLabel+28764)
#define ST_v2576	((void*)startLabel+28800)
#define PP_NHC_46Observe_46NHC_46Observe_46Observable_46Prelude_46_45_62_46observer_39451	((void*)startLabel+28843)
#define PC_NHC_46Observe_46NHC_46Observe_46Observable_46Prelude_46_45_62_46observer_39451	((void*)startLabel+28843)
#define PP_LAMBDA1877	((void*)startLabel+28843)
#define PC_LAMBDA1877	((void*)startLabel+28843)
#define ST_v2580	((void*)startLabel+28843)
#define PP_LAMBDA1876	((void*)startLabel+28899)
#define PC_LAMBDA1876	((void*)startLabel+28899)
#define ST_v2590	((void*)startLabel+28899)
#define PP_LAMBDA1875	((void*)startLabel+28956)
#define PC_LAMBDA1875	((void*)startLabel+28956)
#define ST_v2597	((void*)startLabel+28956)
#define ST_v2954	((void*)startLabel+29016)
#define ST_v2851	((void*)startLabel+29052)
#define PP_LAMBDA1909	((void*)startLabel+29094)
#define PC_LAMBDA1909	((void*)startLabel+29094)
#define ST_v2866	((void*)startLabel+29094)
#define PP_LAMBDA1910	((void*)startLabel+29150)
#define PC_LAMBDA1910	((void*)startLabel+29150)
#define ST_v2862	((void*)startLabel+29150)
#define ST_v2959	((void*)startLabel+29208)
#define ST_v2820	((void*)startLabel+29244)
#define PP_LAMBDA1905	((void*)startLabel+29286)
#define PC_LAMBDA1905	((void*)startLabel+29286)
#define ST_v2846	((void*)startLabel+29286)
#define PP_LAMBDA1908	((void*)startLabel+29342)
#define PC_LAMBDA1908	((void*)startLabel+29342)
#define ST_v2829	((void*)startLabel+29342)
#define PP_LAMBDA1907	((void*)startLabel+29398)
#define PC_LAMBDA1907	((void*)startLabel+29398)
#define ST_v2835	((void*)startLabel+29398)
#define PP_LAMBDA1906	((void*)startLabel+29454)
#define PC_LAMBDA1906	((void*)startLabel+29454)
#define ST_v2841	((void*)startLabel+29454)
#define ST_v2964	((void*)startLabel+29512)
#define ST_v2783	((void*)startLabel+29548)
#define PP_LAMBDA1900	((void*)startLabel+29590)
#define PC_LAMBDA1900	((void*)startLabel+29590)
#define ST_v2815	((void*)startLabel+29590)
#define PP_LAMBDA1904	((void*)startLabel+29646)
#define PC_LAMBDA1904	((void*)startLabel+29646)
#define ST_v2792	((void*)startLabel+29646)
#define PP_LAMBDA1903	((void*)startLabel+29702)
#define PC_LAMBDA1903	((void*)startLabel+29702)
#define ST_v2798	((void*)startLabel+29702)
#define PP_LAMBDA1902	((void*)startLabel+29758)
#define PC_LAMBDA1902	((void*)startLabel+29758)
#define ST_v2804	((void*)startLabel+29758)
#define PP_LAMBDA1901	((void*)startLabel+29814)
#define PC_LAMBDA1901	((void*)startLabel+29814)
#define ST_v2810	((void*)startLabel+29814)
#define ST_v2969	((void*)startLabel+29872)
#define ST_v2739	((void*)startLabel+29908)
#define PP_LAMBDA1894	((void*)startLabel+29950)
#define PC_LAMBDA1894	((void*)startLabel+29950)
#define ST_v2777	((void*)startLabel+29950)
#define PP_LAMBDA1899	((void*)startLabel+30006)
#define PC_LAMBDA1899	((void*)startLabel+30006)
#define ST_v2748	((void*)startLabel+30006)
#define PP_LAMBDA1898	((void*)startLabel+30062)
#define PC_LAMBDA1898	((void*)startLabel+30062)
#define ST_v2754	((void*)startLabel+30062)
#define PP_LAMBDA1897	((void*)startLabel+30118)
#define PC_LAMBDA1897	((void*)startLabel+30118)
#define ST_v2760	((void*)startLabel+30118)
#define PP_LAMBDA1896	((void*)startLabel+30174)
#define PC_LAMBDA1896	((void*)startLabel+30174)
#define ST_v2766	((void*)startLabel+30174)
#define PP_LAMBDA1895	((void*)startLabel+30230)
#define PC_LAMBDA1895	((void*)startLabel+30230)
#define ST_v2772	((void*)startLabel+30230)
#define ST_v2930	((void*)startLabel+30288)
#define ST_v2898	((void*)startLabel+30324)
#define ST_v2946	((void*)startLabel+30372)
#define ST_v2882	((void*)startLabel+30408)
#define ST_v2942	((void*)startLabel+30456)
#define ST_v2886	((void*)startLabel+30496)
#define ST_v2938	((void*)startLabel+30544)
#define ST_v2890	((void*)startLabel+30584)
#define ST_v2926	((void*)startLabel+30632)
#define ST_v2902	((void*)startLabel+30668)
#define ST_v2934	((void*)startLabel+30712)
#define ST_v2894	((void*)startLabel+30752)
#define ST_v2979	((void*)startLabel+30800)
#define ST_v2677	((void*)startLabel+30840)
#define PP_LAMBDA1888	((void*)startLabel+30886)
#define PC_LAMBDA1888	((void*)startLabel+30886)
#define ST_v2694	((void*)startLabel+30886)
#define PP_LAMBDA1889	((void*)startLabel+30946)
#define PC_LAMBDA1889	((void*)startLabel+30946)
#define ST_v2689	((void*)startLabel+30946)
#define PP_LAMBDA1887	((void*)startLabel+31006)
#define PC_LAMBDA1887	((void*)startLabel+31006)
#define ST_v2698	((void*)startLabel+31006)
#define ST_v2974	((void*)startLabel+31068)
#define ST_v2705	((void*)startLabel+31104)
#define PP_LAMBDA1891	((void*)startLabel+31147)
#define PC_LAMBDA1891	((void*)startLabel+31147)
#define ST_v2729	((void*)startLabel+31147)
#define PP_LAMBDA1893	((void*)startLabel+31204)
#define PC_LAMBDA1893	((void*)startLabel+31204)
#define ST_v2717	((void*)startLabel+31204)
#define PP_LAMBDA1892	((void*)startLabel+31261)
#define PC_LAMBDA1892	((void*)startLabel+31261)
#define ST_v2724	((void*)startLabel+31261)
#define PP_LAMBDA1890	((void*)startLabel+31318)
#define PC_LAMBDA1890	((void*)startLabel+31318)
#define ST_v2733	((void*)startLabel+31318)
#define ST_v2906	((void*)startLabel+31376)
#define PP_LAMBDA1911	((void*)startLabel+31399)
#define PC_LAMBDA1911	((void*)startLabel+31399)
#define ST_v2911	((void*)startLabel+31399)
#define PP_NHC_46Observe_46closeObserveGlobal	((void*)startLabel+31428)
#define PC_NHC_46Observe_46closeObserveGlobal	((void*)startLabel+31428)
#define ST_v2007	((void*)startLabel+31428)
#define PP_LAMBDA1816	((void*)startLabel+31459)
#define PC_LAMBDA1816	((void*)startLabel+31459)
#define ST_v2013	((void*)startLabel+31459)
#define PP_LAMBDA1815	((void*)startLabel+31504)
#define PC_LAMBDA1815	((void*)startLabel+31504)
#define ST_v2026	((void*)startLabel+31504)
#define PP_NHC_46Observe_46generateContext	((void*)startLabel+31549)
#define PC_NHC_46Observe_46generateContext	((void*)startLabel+31549)
#define ST_v2469	((void*)startLabel+31549)
#define PP_LAMBDA1869	((void*)startLabel+31577)
#define PC_LAMBDA1869	((void*)startLabel+31577)
#define ST_v2480	((void*)startLabel+31577)
#define PP_LAMBDA1866	((void*)startLabel+31619)
#define PC_LAMBDA1866	((void*)startLabel+31619)
#define ST_v2513	((void*)startLabel+31619)
#define PP_LAMBDA1868	((void*)startLabel+31654)
#define PC_LAMBDA1868	((void*)startLabel+31654)
#define ST_v2497	((void*)startLabel+31654)
#define PP_LAMBDA1867	((void*)startLabel+31696)
#define PC_LAMBDA1867	((void*)startLabel+31696)
#define ST_v2505	((void*)startLabel+31696)
#define PP_NHC_46Observe_46mkXmlNode	((void*)startLabel+31730)
#define PC_NHC_46Observe_46mkXmlNode	((void*)startLabel+31730)
#define ST_v2047	((void*)startLabel+31730)
#define PP_LAMBDA1822	((void*)startLabel+31752)
#define PC_LAMBDA1822	((void*)startLabel+31752)
#define ST_v2060	((void*)startLabel+31752)
#define PP_LAMBDA1823	((void*)startLabel+31788)
#define PC_LAMBDA1823	((void*)startLabel+31788)
#define ST_v2056	((void*)startLabel+31788)
#define PP_LAMBDA1821	((void*)startLabel+31824)
#define PC_LAMBDA1821	((void*)startLabel+31824)
#define ST_v2064	((void*)startLabel+31824)
#define PP_LAMBDA1817	((void*)startLabel+31859)
#define PC_LAMBDA1817	((void*)startLabel+31859)
#define ST_v2099	((void*)startLabel+31859)
#define PP_NHC_46Observe_46Prelude_46393_46showAttrs	((void*)startLabel+31895)
#define PC_NHC_46Observe_46Prelude_46393_46showAttrs	((void*)startLabel+31895)
#define ST_v2072	((void*)startLabel+31895)
#define PP_LAMBDA1820	((void*)startLabel+31930)
#define PC_LAMBDA1820	((void*)startLabel+31930)
#define ST_v2083	((void*)startLabel+31930)
#define PP_LAMBDA1818	((void*)startLabel+31966)
#define PC_LAMBDA1818	((void*)startLabel+31966)
#define ST_v2095	((void*)startLabel+31966)
#define PP_LAMBDA1819	((void*)startLabel+32002)
#define PC_LAMBDA1819	((void*)startLabel+32002)
#define ST_v2091	((void*)startLabel+32002)
#define ST_v2919	((void*)startLabel+32040)
#define PP_NHC_46Observe_46observeDepth	((void*)startLabel+32060)
#define PC_NHC_46Observe_46observeDepth	((void*)startLabel+32060)
#define ST_v2290	((void*)startLabel+32060)
#define PP_NHC_46Observe_46observeGlobal	((void*)startLabel+32085)
#define PC_NHC_46Observe_46observeGlobal	((void*)startLabel+32085)
#define ST_v1929	((void*)startLabel+32085)
#define PP_NHC_46Observe_46observeHandle	((void*)startLabel+32111)
#define PC_NHC_46Observe_46observeHandle	((void*)startLabel+32111)
#define ST_v1997	((void*)startLabel+32111)
#define PP_LAMBDA1814	((void*)startLabel+32137)
#define PC_LAMBDA1814	((void*)startLabel+32137)
#define ST_v2003	((void*)startLabel+32137)
#define PP_NHC_46Observe_46observeLit	((void*)startLabel+32177)
#define PC_NHC_46Observe_46observeLit	((void*)startLabel+32177)
#define ST_v2869	((void*)startLabel+32177)
#define PP_NHC_46Observe_46observeParent	((void*)startLabel+32200)
#define PC_NHC_46Observe_46observeParent	((void*)startLabel+32200)
#define ST_v2103	((void*)startLabel+32200)
#define PP_NHC_46Observe_46observePort	((void*)startLabel+32226)
#define PC_NHC_46Observe_46observePort	((void*)startLabel+32226)
#define ST_v2106	((void*)startLabel+32226)
#define PP_NHC_46Observe_46observeUniq	((void*)startLabel+32250)
#define PC_NHC_46Observe_46observeUniq	((void*)startLabel+32250)
#define ST_v2277	((void*)startLabel+32250)
#define PP_LAMBDA1846	((void*)startLabel+32274)
#define PC_LAMBDA1846	((void*)startLabel+32274)
#define ST_v2283	((void*)startLabel+32274)
#define ST_v2915	((void*)startLabel+32312)
#define ST_v2923	((void*)startLabel+32336)
#define PP_NHC_46Observe_46observerM	((void*)startLabel+32357)
#define PC_NHC_46Observe_46observerM	((void*)startLabel+32357)
#define ST_v2623	((void*)startLabel+32357)
#define PP_LAMBDA1883	((void*)startLabel+32379)
#define PC_LAMBDA1883	((void*)startLabel+32379)
#define ST_v2628	((void*)startLabel+32379)
#define PP_LAMBDA1881	((void*)startLabel+32415)
#define PC_LAMBDA1881	((void*)startLabel+32415)
#define ST_v2642	((void*)startLabel+32415)
#define PP_LAMBDA1882	((void*)startLabel+32451)
#define PC_LAMBDA1882	((void*)startLabel+32451)
#define ST_v2636	((void*)startLabel+32451)
#define PP_NHC_46Observe_46observer_95	((void*)startLabel+32487)
#define PC_NHC_46Observe_46observer_95	((void*)startLabel+32487)
#define ST_v2517	((void*)startLabel+32487)
#define PP_NHC_46Observe_46openObserveGlobal	((void*)startLabel+32509)
#define PC_NHC_46Observe_46openObserveGlobal	((void*)startLabel+32509)
#define ST_v1935	((void*)startLabel+32509)
#define PP_LAMBDA1805	((void*)startLabel+32539)
#define PC_LAMBDA1805	((void*)startLabel+32539)
#define ST_v1989	((void*)startLabel+32539)
#define PP_LAMBDA1813	((void*)startLabel+32583)
#define PC_LAMBDA1813	((void*)startLabel+32583)
#define ST_v1944	((void*)startLabel+32583)
#define PP_LAMBDA1807	((void*)startLabel+32627)
#define PC_LAMBDA1807	((void*)startLabel+32627)
#define ST_v1980	((void*)startLabel+32627)
#define PP_LAMBDA1806	((void*)startLabel+32671)
#define PC_LAMBDA1806	((void*)startLabel+32671)
#define ST_v1985	((void*)startLabel+32671)
#define PP_LAMBDA1808	((void*)startLabel+32715)
#define PC_LAMBDA1808	((void*)startLabel+32715)
#define ST_v1976	((void*)startLabel+32715)
#define PP_LAMBDA1812	((void*)startLabel+32759)
#define PC_LAMBDA1812	((void*)startLabel+32759)
#define ST_v1955	((void*)startLabel+32759)
#define PP_LAMBDA1809	((void*)startLabel+32803)
#define PC_LAMBDA1809	((void*)startLabel+32803)
#define ST_v1972	((void*)startLabel+32803)
#define PP_LAMBDA1810	((void*)startLabel+32847)
#define PC_LAMBDA1810	((void*)startLabel+32847)
#define ST_v1968	((void*)startLabel+32847)
#define PP_LAMBDA1811	((void*)startLabel+32891)
#define PC_LAMBDA1811	((void*)startLabel+32891)
#define ST_v1964	((void*)startLabel+32891)
#define PP_NHC_46Observe_46ourCatchAll	((void*)startLabel+32935)
#define PC_NHC_46Observe_46ourCatchAll	((void*)startLabel+32935)
#define ST_v2268	((void*)startLabel+32935)
#define ST_v2042	((void*)startLabel+32960)
#define ST_v2036	((void*)startLabel+32980)
#define PP_NHC_46Observe_46runMO	((void*)startLabel+33000)
#define PC_NHC_46Observe_46runMO	((void*)startLabel+33000)
#define ST_v2287	((void*)startLabel+33000)
#define ST_v2030	((void*)startLabel+33020)
#define PP_NHC_46Observe_46sendEnterPacket	((void*)startLabel+33037)
#define PC_NHC_46Observe_46sendEnterPacket	((void*)startLabel+33037)
#define ST_v2355	((void*)startLabel+33037)
#define PP_LAMBDA1858	((void*)startLabel+33065)
#define PC_LAMBDA1858	((void*)startLabel+33065)
#define ST_v2362	((void*)startLabel+33065)
#define PP_LAMBDA1854	((void*)startLabel+33107)
#define PC_LAMBDA1854	((void*)startLabel+33107)
#define ST_v2403	((void*)startLabel+33107)
#define PP_LAMBDA1856	((void*)startLabel+33149)
#define PC_LAMBDA1856	((void*)startLabel+33149)
#define ST_v2388	((void*)startLabel+33149)
#define PP_LAMBDA1855	((void*)startLabel+33184)
#define PC_LAMBDA1855	((void*)startLabel+33184)
#define PP_LAMBDA1857	((void*)startLabel+33184)
#define PC_LAMBDA1857	((void*)startLabel+33184)
#define ST_v2380	((void*)startLabel+33184)
#define PP_NHC_46Observe_46sendObserveFnPacket	((void*)startLabel+33218)
#define PC_NHC_46Observe_46sendObserveFnPacket	((void*)startLabel+33218)
#define ST_v2293	((void*)startLabel+33218)
#define PP_LAMBDA1853	((void*)startLabel+33250)
#define PC_LAMBDA1853	((void*)startLabel+33250)
#define ST_v2300	((void*)startLabel+33250)
#define PP_LAMBDA1847	((void*)startLabel+33296)
#define PC_LAMBDA1847	((void*)startLabel+33296)
#define ST_v2351	((void*)startLabel+33296)
#define PP_LAMBDA1849	((void*)startLabel+33342)
#define PC_LAMBDA1849	((void*)startLabel+33342)
#define ST_v2336	((void*)startLabel+33342)
#define PP_LAMBDA1851	((void*)startLabel+33381)
#define PC_LAMBDA1851	((void*)startLabel+33381)
#define ST_v2321	((void*)startLabel+33381)
#define PP_LAMBDA1852	((void*)startLabel+33420)
#define PC_LAMBDA1852	((void*)startLabel+33420)
#define ST_v2318	((void*)startLabel+33420)
#define PP_LAMBDA1848	((void*)startLabel+33466)
#define PC_LAMBDA1848	((void*)startLabel+33466)
#define PP_LAMBDA1850	((void*)startLabel+33466)
#define PC_LAMBDA1850	((void*)startLabel+33466)
#define ST_v2328	((void*)startLabel+33466)
#define ST_v2406	((void*)startLabel+33504)
#define PP_LAMBDA1865	((void*)startLabel+33534)
#define PC_LAMBDA1865	((void*)startLabel+33534)
#define ST_v2413	((void*)startLabel+33534)
#define PP_LAMBDA1859	((void*)startLabel+33578)
#define PC_LAMBDA1859	((void*)startLabel+33578)
#define ST_v2466	((void*)startLabel+33578)
#define PP_LAMBDA1861	((void*)startLabel+33622)
#define PC_LAMBDA1861	((void*)startLabel+33622)
#define ST_v2451	((void*)startLabel+33622)
#define PP_LAMBDA1863	((void*)startLabel+33659)
#define PC_LAMBDA1863	((void*)startLabel+33659)
#define ST_v2436	((void*)startLabel+33659)
#define PP_LAMBDA1864	((void*)startLabel+33696)
#define PC_LAMBDA1864	((void*)startLabel+33696)
#define ST_v2433	((void*)startLabel+33696)
#define PP_LAMBDA1860	((void*)startLabel+33740)
#define PC_LAMBDA1860	((void*)startLabel+33740)
#define PP_LAMBDA1862	((void*)startLabel+33740)
#define PC_LAMBDA1862	((void*)startLabel+33740)
#define ST_v2443	((void*)startLabel+33740)
#define PP_NHC_46Observe_46showXmlString	((void*)startLabel+33776)
#define PC_NHC_46Observe_46showXmlString	((void*)startLabel+33776)
#define ST_v2224	((void*)startLabel+33776)
#define PP_NHC_46Observe_46Prelude_46399_46fixChar	((void*)startLabel+33802)
#define PC_NHC_46Observe_46Prelude_46399_46fixChar	((void*)startLabel+33802)
#define ST_v2237	((void*)startLabel+33802)
#define PP_LAMBDA1844	((void*)startLabel+33842)
#define PC_LAMBDA1844	((void*)startLabel+33842)
#define ST_v2252	((void*)startLabel+33842)
#define PP_LAMBDA1845	((void*)startLabel+33882)
#define PC_LAMBDA1845	((void*)startLabel+33882)
#define ST_v2248	((void*)startLabel+33882)
#define PP_LAMBDA1842	((void*)startLabel+33922)
#define PC_LAMBDA1842	((void*)startLabel+33922)
#define ST_v2260	((void*)startLabel+33922)
#define PP_LAMBDA1841	((void*)startLabel+33962)
#define PC_LAMBDA1841	((void*)startLabel+33962)
#define ST_v2264	((void*)startLabel+33962)
#define PP_LAMBDA1843	((void*)startLabel+34002)
#define PC_LAMBDA1843	((void*)startLabel+34002)
#define ST_v2256	((void*)startLabel+34002)
#define ST_v2521	((void*)startLabel+34044)
#define PP_LAMBDA1870	((void*)startLabel+34062)
#define PC_LAMBDA1870	((void*)startLabel+34062)
#define ST_v2538	((void*)startLabel+34062)
#define PP_LAMBDA1872	((void*)startLabel+34094)
#define PC_LAMBDA1872	((void*)startLabel+34094)
#define ST_v2527	((void*)startLabel+34094)
#define PP_LAMBDA1871	((void*)startLabel+34126)
#define PC_LAMBDA1871	((void*)startLabel+34126)
#define ST_v2534	((void*)startLabel+34126)
#define PP_NHC_46Observe_46xmlCons	((void*)startLabel+34158)
#define PC_NHC_46Observe_46xmlCons	((void*)startLabel+34158)
#define ST_v2166	((void*)startLabel+34158)
#define PP_LAMBDA1832	((void*)startLabel+34178)
#define PC_LAMBDA1832	((void*)startLabel+34178)
#define ST_v2199	((void*)startLabel+34178)
#define PP_LAMBDA1833	((void*)startLabel+34212)
#define PC_LAMBDA1833	((void*)startLabel+34212)
#define ST_v2196	((void*)startLabel+34212)
#define PP_LAMBDA1834	((void*)startLabel+34246)
#define PC_LAMBDA1834	((void*)startLabel+34246)
#define ST_v2193	((void*)startLabel+34246)
#define PP_LAMBDA1835	((void*)startLabel+34280)
#define PC_LAMBDA1835	((void*)startLabel+34280)
#define ST_v2190	((void*)startLabel+34280)
#define PP_LAMBDA1836	((void*)startLabel+34314)
#define PC_LAMBDA1836	((void*)startLabel+34314)
#define ST_v2186	((void*)startLabel+34314)
#define PP_LAMBDA1837	((void*)startLabel+34348)
#define PC_LAMBDA1837	((void*)startLabel+34348)
#define ST_v2182	((void*)startLabel+34348)
#define PP_NHC_46Observe_46xmlEnter	((void*)startLabel+34382)
#define PC_NHC_46Observe_46xmlEnter	((void*)startLabel+34382)
#define ST_v2139	((void*)startLabel+34382)
#define PP_LAMBDA1828	((void*)startLabel+34403)
#define PC_LAMBDA1828	((void*)startLabel+34403)
#define ST_v2162	((void*)startLabel+34403)
#define PP_LAMBDA1829	((void*)startLabel+34438)
#define PC_LAMBDA1829	((void*)startLabel+34438)
#define ST_v2159	((void*)startLabel+34438)
#define PP_LAMBDA1830	((void*)startLabel+34473)
#define PC_LAMBDA1830	((void*)startLabel+34473)
#define ST_v2156	((void*)startLabel+34473)
#define PP_LAMBDA1831	((void*)startLabel+34508)
#define PC_LAMBDA1831	((void*)startLabel+34508)
#define ST_v2153	((void*)startLabel+34508)
#define PP_NHC_46Observe_46xmlFun	((void*)startLabel+34543)
#define PC_NHC_46Observe_46xmlFun	((void*)startLabel+34543)
#define ST_v2109	((void*)startLabel+34543)
#define PP_LAMBDA1824	((void*)startLabel+34562)
#define PC_LAMBDA1824	((void*)startLabel+34562)
#define ST_v2135	((void*)startLabel+34562)
#define PP_LAMBDA1825	((void*)startLabel+34595)
#define PC_LAMBDA1825	((void*)startLabel+34595)
#define ST_v2131	((void*)startLabel+34595)
#define PP_LAMBDA1826	((void*)startLabel+34628)
#define PC_LAMBDA1826	((void*)startLabel+34628)
#define ST_v2127	((void*)startLabel+34628)
#define PP_LAMBDA1827	((void*)startLabel+34661)
#define PC_LAMBDA1827	((void*)startLabel+34661)
#define ST_v2123	((void*)startLabel+34661)
#define PP_NHC_46Observe_46xmlObserve	((void*)startLabel+34694)
#define PC_NHC_46Observe_46xmlObserve	((void*)startLabel+34694)
#define ST_v2202	((void*)startLabel+34694)
#define PP_LAMBDA1838	((void*)startLabel+34717)
#define PC_LAMBDA1838	((void*)startLabel+34717)
#define ST_v2220	((void*)startLabel+34717)
#define PP_LAMBDA1839	((void*)startLabel+34754)
#define PC_LAMBDA1839	((void*)startLabel+34754)
#define ST_v2217	((void*)startLabel+34754)
#define PP_LAMBDA1840	((void*)startLabel+34791)
#define PC_LAMBDA1840	((void*)startLabel+34791)
#define ST_v2213	((void*)startLabel+34791)
#define ST_v2514	((void*)startLabel+34828)
#define ST_v2452	((void*)startLabel+34895)
#define ST_v2389	((void*)startLabel+34962)
#define ST_v2337	((void*)startLabel+35029)
#define ST_v2284	((void*)startLabel+35096)
#define ST_v2004	((void*)startLabel+35161)
#define ST_v2912	((void*)startLabel+35226)
#define ST_v2699	((void*)startLabel+35274)
#define ST_v1990	((void*)startLabel+35282)
#define ST_v2999	((void*)startLabel+35296)
#define ST_v2568	((void*)startLabel+35336)
#define ST_v2542	((void*)startLabel+35380)
#define PP_LAMBDA1873	((void*)startLabel+35424)
#define PC_LAMBDA1873	((void*)startLabel+35424)
#define ST_v2549	((void*)startLabel+35424)
#define ST_v2564	((void*)startLabel+35484)
#define ST_v2555	((void*)startLabel+35532)
#define PP_LAMBDA1874	((void*)startLabel+35579)
#define PC_LAMBDA1874	((void*)startLabel+35579)
#define ST_v2560	((void*)startLabel+35579)
#define ST_v2352	((void*)startLabel+35640)
#define ST_v2734	((void*)startLabel+35680)
#define ST_v2671	((void*)startLabel+35683)
#define ST_v2183	((void*)startLabel+35689)
#define ST_v2163	((void*)startLabel+35694)
#define ST_v2136	((void*)startLabel+35700)
#define ST_v2132	((void*)startLabel+35704)
#define ST_v2221	((void*)startLabel+35709)
#define ST_v1986	((void*)startLabel+35717)
#define ST_v2128	((void*)startLabel+35729)
#define ST_v2187	((void*)startLabel+35735)
#define ST_v2124	((void*)startLabel+35741)
#define ST_v2214	((void*)startLabel+35747)
#define ST_v1977	((void*)startLabel+35752)
#define PS_v2918	((void*)startLabel+35760)
#define PS_v2920	((void*)startLabel+35772)
#define PS_v2914	((void*)startLabel+35784)
#define PS_v2916	((void*)startLabel+35796)
#define PS_v2516	((void*)startLabel+35808)
#define PS_v2518	((void*)startLabel+35820)
#define PS_v2922	((void*)startLabel+35832)
#define PS_v2872	((void*)startLabel+35844)
#define PS_v2875	((void*)startLabel+35856)
#define PS_v2870	((void*)startLabel+35868)
#define PS_v2871	((void*)startLabel+35880)
#define PS_v2868	((void*)startLabel+35892)
#define PS_v2874	((void*)startLabel+35904)
#define PS_v2873	((void*)startLabel+35916)
#define PS_v2625	((void*)startLabel+35928)
#define PS_v2622	((void*)startLabel+35940)
#define PS_v2624	((void*)startLabel+35952)
#define PS_v2102	((void*)startLabel+35964)
#define PS_v2105	((void*)startLabel+35976)
#define PS_v2289	((void*)startLabel+35988)
#define PS_v2280	((void*)startLabel+36000)
#define PS_v2276	((void*)startLabel+36012)
#define PS_v2279	((void*)startLabel+36024)
#define PS_v2000	((void*)startLabel+36036)
#define PS_v1996	((void*)startLabel+36048)
#define PS_v1999	((void*)startLabel+36060)
#define PS_v1939	((void*)startLabel+36072)
#define PS_v1937	((void*)startLabel+36084)
#define PS_v1934	((void*)startLabel+36096)
#define PS_v1941	((void*)startLabel+36108)
#define PS_v1936	((void*)startLabel+36120)
#define PS_v1938	((void*)startLabel+36132)
#define PS_v1940	((void*)startLabel+36144)
#define PS_v2008	((void*)startLabel+36156)
#define PS_v2006	((void*)startLabel+36168)
#define PS_v2010	((void*)startLabel+36180)
#define PS_v2009	((void*)startLabel+36192)
#define PS_v1931	((void*)startLabel+36204)
#define PS_v1932	((void*)startLabel+36216)
#define PS_v1930	((void*)startLabel+36228)
#define PS_v1928	((void*)startLabel+36240)
#define PS_v2286	((void*)startLabel+36252)
#define PS_v2573	((void*)startLabel+36264)
#define PS_v2571	((void*)startLabel+36276)
#define PS_v2524	((void*)startLabel+36288)
#define PS_v2520	((void*)startLabel+36300)
#define PS_v2522	((void*)startLabel+36312)
#define PS_v2523	((void*)startLabel+36324)
#define PS_v2470	((void*)startLabel+36336)
#define PS_v2473	((void*)startLabel+36348)
#define PS_v2468	((void*)startLabel+36360)
#define PS_v2472	((void*)startLabel+36372)
#define PS_v2471	((void*)startLabel+36384)
#define PS_v2407	((void*)startLabel+36396)
#define PS_v2410	((void*)startLabel+36408)
#define PS_v2405	((void*)startLabel+36420)
#define PS_v2409	((void*)startLabel+36432)
#define PS_v2408	((void*)startLabel+36444)
#define PS_v2356	((void*)startLabel+36456)
#define PS_v2359	((void*)startLabel+36468)
#define PS_v2354	((void*)startLabel+36480)
#define PS_v2358	((void*)startLabel+36492)
#define PS_v2357	((void*)startLabel+36504)
#define PS_v2294	((void*)startLabel+36516)
#define PS_v2297	((void*)startLabel+36528)
#define PS_v2292	((void*)startLabel+36540)
#define PS_v2296	((void*)startLabel+36552)
#define PS_v2295	((void*)startLabel+36564)
#define PS_v2270	((void*)startLabel+36576)
#define PS_v2269	((void*)startLabel+36588)
#define PS_v2267	((void*)startLabel+36600)
#define PS_v2051	((void*)startLabel+36612)
#define PS_v2053	((void*)startLabel+36624)
#define PS_v2046	((void*)startLabel+36636)
#define PS_v2050	((void*)startLabel+36648)
#define PS_v2048	((void*)startLabel+36660)
#define PS_v2049	((void*)startLabel+36672)
#define PS_v2052	((void*)startLabel+36684)
#define PS_v2226	((void*)startLabel+36696)
#define PS_v2223	((void*)startLabel+36708)
#define PS_v2225	((void*)startLabel+36720)
#define PS_v2206	((void*)startLabel+36732)
#define PS_v2208	((void*)startLabel+36744)
#define PS_v2209	((void*)startLabel+36756)
#define PS_v2210	((void*)startLabel+36768)
#define PS_v2201	((void*)startLabel+36780)
#define PS_v2205	((void*)startLabel+36792)
#define PS_v2203	((void*)startLabel+36804)
#define PS_v2204	((void*)startLabel+36816)
#define PS_v2207	((void*)startLabel+36828)
#define PS_v2170	((void*)startLabel+36840)
#define PS_v2177	((void*)startLabel+36852)
#define PS_v2178	((void*)startLabel+36864)
#define PS_v2172	((void*)startLabel+36876)
#define PS_v2174	((void*)startLabel+36888)
#define PS_v2179	((void*)startLabel+36900)
#define PS_v2165	((void*)startLabel+36912)
#define PS_v2169	((void*)startLabel+36924)
#define PS_v2167	((void*)startLabel+36936)
#define PS_v2168	((void*)startLabel+36948)
#define PS_v2171	((void*)startLabel+36960)
#define PS_v2173	((void*)startLabel+36972)
#define PS_v2175	((void*)startLabel+36984)
#define PS_v2176	((void*)startLabel+36996)
#define PS_v2143	((void*)startLabel+37008)
#define PS_v2148	((void*)startLabel+37020)
#define PS_v2149	((void*)startLabel+37032)
#define PS_v2145	((void*)startLabel+37044)
#define PS_v2147	((void*)startLabel+37056)
#define PS_v2150	((void*)startLabel+37068)
#define PS_v2138	((void*)startLabel+37080)
#define PS_v2142	((void*)startLabel+37092)
#define PS_v2140	((void*)startLabel+37104)
#define PS_v2141	((void*)startLabel+37116)
#define PS_v2144	((void*)startLabel+37128)
#define PS_v2146	((void*)startLabel+37140)
#define PS_v2113	((void*)startLabel+37152)
#define PS_v2118	((void*)startLabel+37164)
#define PS_v2119	((void*)startLabel+37176)
#define PS_v2115	((void*)startLabel+37188)
#define PS_v2117	((void*)startLabel+37200)
#define PS_v2120	((void*)startLabel+37212)
#define PS_v2108	((void*)startLabel+37224)
#define PS_v2112	((void*)startLabel+37236)
#define PS_v2110	((void*)startLabel+37248)
#define PS_v2111	((void*)startLabel+37260)
#define PS_v2114	((void*)startLabel+37272)
#define PS_v2116	((void*)startLabel+37284)
#define PS_v2031	((void*)startLabel+37296)
#define PS_v2029	((void*)startLabel+37308)
#define PS_v2032	((void*)startLabel+37320)
#define PS_v2033	((void*)startLabel+37332)
#define PS_v2043	((void*)startLabel+37344)
#define PS_v2044	((void*)startLabel+37356)
#define PS_v2041	((void*)startLabel+37368)
#define PS_v2037	((void*)startLabel+37380)
#define PS_v2038	((void*)startLabel+37392)
#define PS_v2039	((void*)startLabel+37404)
#define PS_v2035	((void*)startLabel+37416)
#define PS_v2908	((void*)startLabel+37428)
#define PS_v2905	((void*)startLabel+37440)
#define PS_v2907	((void*)startLabel+37452)
#define PS_v2903	((void*)startLabel+37464)
#define PS_v2901	((void*)startLabel+37476)
#define PS_v2899	((void*)startLabel+37488)
#define PS_v2897	((void*)startLabel+37500)
#define PS_v2895	((void*)startLabel+37512)
#define PS_v2893	((void*)startLabel+37524)
#define PS_v2891	((void*)startLabel+37536)
#define PS_v2889	((void*)startLabel+37548)
#define PS_v2887	((void*)startLabel+37560)
#define PS_v2885	((void*)startLabel+37572)
#define PS_v2883	((void*)startLabel+37584)
#define PS_v2881	((void*)startLabel+37596)
#define PS_v2879	((void*)startLabel+37608)
#define PS_v2877	((void*)startLabel+37620)
#define PS_v2858	((void*)startLabel+37632)
#define PS_v2854	((void*)startLabel+37644)
#define PS_v2857	((void*)startLabel+37656)
#define PS_v2859	((void*)startLabel+37668)
#define PS_v2850	((void*)startLabel+37680)
#define PS_v2856	((void*)startLabel+37692)
#define PS_v2853	((void*)startLabel+37704)
#define PS_v2855	((void*)startLabel+37716)
#define PS_v2823	((void*)startLabel+37728)
#define PS_v2826	((void*)startLabel+37740)
#define PS_v2819	((void*)startLabel+37752)
#define PS_v2825	((void*)startLabel+37764)
#define PS_v2822	((void*)startLabel+37776)
#define PS_v2824	((void*)startLabel+37788)
#define PS_v2786	((void*)startLabel+37800)
#define PS_v2789	((void*)startLabel+37812)
#define PS_v2782	((void*)startLabel+37824)
#define PS_v2788	((void*)startLabel+37836)
#define PS_v2785	((void*)startLabel+37848)
#define PS_v2787	((void*)startLabel+37860)
#define PS_v2742	((void*)startLabel+37872)
#define PS_v2745	((void*)startLabel+37884)
#define PS_v2738	((void*)startLabel+37896)
#define PS_v2744	((void*)startLabel+37908)
#define PS_v2741	((void*)startLabel+37920)
#define PS_v2743	((void*)startLabel+37932)
#define PS_v2708	((void*)startLabel+37944)
#define PS_v2712	((void*)startLabel+37956)
#define PS_v2710	((void*)startLabel+37968)
#define PS_v2704	((void*)startLabel+37980)
#define PS_v2714	((void*)startLabel+37992)
#define PS_v2709	((void*)startLabel+38004)
#define PS_v2707	((void*)startLabel+38016)
#define PS_v2711	((void*)startLabel+38028)
#define PS_v2713	((void*)startLabel+38040)
#define PS_v2680	((void*)startLabel+38052)
#define PS_v2684	((void*)startLabel+38064)
#define PS_v2682	((void*)startLabel+38076)
#define PS_v2676	((void*)startLabel+38088)
#define PS_v2686	((void*)startLabel+38100)
#define PS_v2681	((void*)startLabel+38112)
#define PS_v2679	((void*)startLabel+38124)
#define PS_v2683	((void*)startLabel+38136)
#define PS_v2685	((void*)startLabel+38148)
#define PS_v2649	((void*)startLabel+38160)
#define PS_v2650	((void*)startLabel+38172)
#define PS_v2653	((void*)startLabel+38184)
#define PS_v2645	((void*)startLabel+38196)
#define PS_v2652	((void*)startLabel+38208)
#define PS_v2648	((void*)startLabel+38220)
#define PS_v2647	((void*)startLabel+38232)
#define PS_v2651	((void*)startLabel+38244)
#define PS_v2600	((void*)startLabel+38256)
#define PS_v2603	((void*)startLabel+38268)
#define PS_v2602	((void*)startLabel+38280)
#define PS_v2575	((void*)startLabel+38292)
#define PS_v2577	((void*)startLabel+38304)
#define PS_v2557	((void*)startLabel+38316)
#define PS_v2554	((void*)startLabel+38328)
#define PS_v2556	((void*)startLabel+38340)
#define PS_v2544	((void*)startLabel+38352)
#define PS_v2541	((void*)startLabel+38364)
#define PS_v2543	((void*)startLabel+38376)
#define PS_v2078	((void*)startLabel+38388)
#define PS_v2077	((void*)startLabel+38400)
#define PS_v2076	((void*)startLabel+38412)
#define PS_v2071	((void*)startLabel+38424)
#define PS_v2074	((void*)startLabel+38436)
#define PS_v2075	((void*)startLabel+38448)
#define PS_v2244	((void*)startLabel+38460)
#define PS_v2245	((void*)startLabel+38472)
#define PS_v2236	((void*)startLabel+38484)
#define PS_v2239	((void*)startLabel+38496)
#define PS_v2240	((void*)startLabel+38508)
#define PS_v2241	((void*)startLabel+38520)
#define PS_v2242	((void*)startLabel+38532)
#define PS_v2243	((void*)startLabel+38544)
#define PS_v2569	((void*)startLabel+38556)
#define PS_v2567	((void*)startLabel+38568)
#define PS_v2565	((void*)startLabel+38580)
#define PS_v2563	((void*)startLabel+38592)
#define PS_v2584	((void*)startLabel+38604)
#define PS_v2587	((void*)startLabel+38616)
#define PS_v2583	((void*)startLabel+38628)
#define PS_v2586	((void*)startLabel+38640)
#define PS_v2585	((void*)startLabel+38652)
#define PS_v2998	((void*)startLabel+38664)
#define PS_v3000	((void*)startLabel+38676)
#define PS_v2955	((void*)startLabel+38688)
#define PS_v2953	((void*)startLabel+38700)
#define PS_v2956	((void*)startLabel+38712)
#define PS_v2975	((void*)startLabel+38724)
#define PS_v2973	((void*)startLabel+38736)
#define PS_v2976	((void*)startLabel+38748)
#define PS_v2927	((void*)startLabel+38760)
#define PS_v2925	((void*)startLabel+38772)
#define PS_v2931	((void*)startLabel+38784)
#define PS_v2929	((void*)startLabel+38796)
#define PS_v2935	((void*)startLabel+38808)
#define PS_v2933	((void*)startLabel+38820)
#define PS_v2939	((void*)startLabel+38832)
#define PS_v2937	((void*)startLabel+38844)
#define PS_v2943	((void*)startLabel+38856)
#define PS_v2941	((void*)startLabel+38868)
#define PS_v2947	((void*)startLabel+38880)
#define PS_v2945	((void*)startLabel+38892)
#define PS_v2951	((void*)startLabel+38904)
#define PS_v2949	((void*)startLabel+38916)
#define PS_v2960	((void*)startLabel+38928)
#define PS_v2961	((void*)startLabel+38940)
#define PS_v2958	((void*)startLabel+38952)
#define PS_v2965	((void*)startLabel+38964)
#define PS_v2966	((void*)startLabel+38976)
#define PS_v2963	((void*)startLabel+38988)
#define PS_v2970	((void*)startLabel+39000)
#define PS_v2971	((void*)startLabel+39012)
#define PS_v2968	((void*)startLabel+39024)
#define PS_v2980	((void*)startLabel+39036)
#define PS_v2981	((void*)startLabel+39048)
#define PS_v2978	((void*)startLabel+39060)
#define PS_v2985	((void*)startLabel+39072)
#define PS_v2986	((void*)startLabel+39084)
#define PS_v2983	((void*)startLabel+39096)
#define PS_v2990	((void*)startLabel+39108)
#define PS_v2991	((void*)startLabel+39120)
#define PS_v2988	((void*)startLabel+39132)
#define PS_v2995	((void*)startLabel+39144)
#define PS_v2996	((void*)startLabel+39156)
#define PS_v2993	((void*)startLabel+39168)
#define PS_v1988	((void*)startLabel+39180)
#define PS_v1984	((void*)startLabel+39192)
#define PS_v1982	((void*)startLabel+39204)
#define PS_v1981	((void*)startLabel+39216)
#define PS_v1979	((void*)startLabel+39228)
#define PS_v1975	((void*)startLabel+39240)
#define PS_v1971	((void*)startLabel+39252)
#define PS_v1967	((void*)startLabel+39264)
#define PS_v1965	((void*)startLabel+39276)
#define PS_v1963	((void*)startLabel+39288)
#define PS_v1957	((void*)startLabel+39300)
#define PS_v1960	((void*)startLabel+39312)
#define PS_v1961	((void*)startLabel+39324)
#define PS_v1956	((void*)startLabel+39336)
#define PS_v1958	((void*)startLabel+39348)
#define PS_v1959	((void*)startLabel+39360)
#define PS_v1954	((void*)startLabel+39372)
#define PS_v1947	((void*)startLabel+39384)
#define PS_v1949	((void*)startLabel+39396)
#define PS_v1948	((void*)startLabel+39408)
#define PS_v1946	((void*)startLabel+39420)
#define PS_v1951	((void*)startLabel+39432)
#define PS_v1952	((void*)startLabel+39444)
#define PS_v1945	((void*)startLabel+39456)
#define PS_v1950	((void*)startLabel+39468)
#define PS_v1943	((void*)startLabel+39480)
#define PS_v2002	((void*)startLabel+39492)
#define PS_v2025	((void*)startLabel+39504)
#define PS_v2019	((void*)startLabel+39516)
#define PS_v2016	((void*)startLabel+39528)
#define PS_v2017	((void*)startLabel+39540)
#define PS_v2021	((void*)startLabel+39552)
#define PS_v2022	((void*)startLabel+39564)
#define PS_v2014	((void*)startLabel+39576)
#define PS_v2020	((void*)startLabel+39588)
#define PS_v2023	((void*)startLabel+39600)
#define PS_v2018	((void*)startLabel+39612)
#define PS_v2015	((void*)startLabel+39624)
#define PS_v2012	((void*)startLabel+39636)
#define PS_v2098	((void*)startLabel+39648)
#define PS_v2094	((void*)startLabel+39660)
#define PS_v2090	((void*)startLabel+39672)
#define PS_v2087	((void*)startLabel+39684)
#define PS_v2088	((void*)startLabel+39696)
#define PS_v2085	((void*)startLabel+39708)
#define PS_v2086	((void*)startLabel+39720)
#define PS_v2082	((void*)startLabel+39732)
#define PS_v2063	((void*)startLabel+39744)
#define PS_v2059	((void*)startLabel+39756)
#define PS_v2055	((void*)startLabel+39768)
#define PS_v2134	((void*)startLabel+39780)
#define PS_v2130	((void*)startLabel+39792)
#define PS_v2126	((void*)startLabel+39804)
#define PS_v2122	((void*)startLabel+39816)
#define PS_v2161	((void*)startLabel+39828)
#define PS_v2158	((void*)startLabel+39840)
#define PS_v2155	((void*)startLabel+39852)
#define PS_v2152	((void*)startLabel+39864)
#define PS_v2198	((void*)startLabel+39876)
#define PS_v2195	((void*)startLabel+39888)
#define PS_v2192	((void*)startLabel+39900)
#define PS_v2189	((void*)startLabel+39912)
#define PS_v2185	((void*)startLabel+39924)
#define PS_v2181	((void*)startLabel+39936)
#define PS_v2219	((void*)startLabel+39948)
#define PS_v2216	((void*)startLabel+39960)
#define PS_v2212	((void*)startLabel+39972)
#define PS_v2263	((void*)startLabel+39984)
#define PS_v2259	((void*)startLabel+39996)
#define PS_v2255	((void*)startLabel+40008)
#define PS_v2251	((void*)startLabel+40020)
#define PS_v2247	((void*)startLabel+40032)
#define PS_v2282	((void*)startLabel+40044)
#define PS_v2350	((void*)startLabel+40056)
#define PS_v2346	((void*)startLabel+40068)
#define PS_v2347	((void*)startLabel+40080)
#define PS_v2348	((void*)startLabel+40092)
#define PS_v2345	((void*)startLabel+40104)
#define PS_v2343	((void*)startLabel+40116)
#define PS_v2335	((void*)startLabel+40128)
#define PS_v2333	((void*)startLabel+40140)
#define PS_v2331	((void*)startLabel+40152)
#define PS_v2330	((void*)startLabel+40164)
#define PS_v2332	((void*)startLabel+40176)
#define PS_v2327	((void*)startLabel+40188)
#define PS_v2320	((void*)startLabel+40200)
#define PS_v2317	((void*)startLabel+40212)
#define PS_v2313	((void*)startLabel+40224)
#define PS_v2304	((void*)startLabel+40236)
#define PS_v2308	((void*)startLabel+40248)
#define PS_v2306	((void*)startLabel+40260)
#define PS_v2302	((void*)startLabel+40272)
#define PS_v2311	((void*)startLabel+40284)
#define PS_v2305	((void*)startLabel+40296)
#define PS_v2312	((void*)startLabel+40308)
#define PS_v2314	((void*)startLabel+40320)
#define PS_v2315	((void*)startLabel+40332)
#define PS_v2307	((void*)startLabel+40344)
#define PS_v2301	((void*)startLabel+40356)
#define PS_v2303	((void*)startLabel+40368)
#define PS_v2309	((void*)startLabel+40380)
#define PS_v2310	((void*)startLabel+40392)
#define PS_v2299	((void*)startLabel+40404)
#define PS_v2402	((void*)startLabel+40416)
#define PS_v2398	((void*)startLabel+40428)
#define PS_v2399	((void*)startLabel+40440)
#define PS_v2400	((void*)startLabel+40452)
#define PS_v2397	((void*)startLabel+40464)
#define PS_v2395	((void*)startLabel+40476)
#define PS_v2387	((void*)startLabel+40488)
#define PS_v2385	((void*)startLabel+40500)
#define PS_v2383	((void*)startLabel+40512)
#define PS_v2382	((void*)startLabel+40524)
#define PS_v2384	((void*)startLabel+40536)
#define PS_v2379	((void*)startLabel+40548)
#define PS_v2369	((void*)startLabel+40560)
#define PS_v2366	((void*)startLabel+40572)
#define PS_v2371	((void*)startLabel+40584)
#define PS_v2370	((void*)startLabel+40596)
#define PS_v2364	((void*)startLabel+40608)
#define PS_v2367	((void*)startLabel+40620)
#define PS_v2372	((void*)startLabel+40632)
#define PS_v2368	((void*)startLabel+40644)
#define PS_v2373	((void*)startLabel+40656)
#define PS_v2363	((void*)startLabel+40668)
#define PS_v2365	((void*)startLabel+40680)
#define PS_v2361	((void*)startLabel+40692)
#define PS_v2465	((void*)startLabel+40704)
#define PS_v2461	((void*)startLabel+40716)
#define PS_v2462	((void*)startLabel+40728)
#define PS_v2463	((void*)startLabel+40740)
#define PS_v2460	((void*)startLabel+40752)
#define PS_v2458	((void*)startLabel+40764)
#define PS_v2450	((void*)startLabel+40776)
#define PS_v2448	((void*)startLabel+40788)
#define PS_v2446	((void*)startLabel+40800)
#define PS_v2445	((void*)startLabel+40812)
#define PS_v2447	((void*)startLabel+40824)
#define PS_v2442	((void*)startLabel+40836)
#define PS_v2435	((void*)startLabel+40848)
#define PS_v2432	((void*)startLabel+40860)
#define PS_v2428	((void*)startLabel+40872)
#define PS_v2417	((void*)startLabel+40884)
#define PS_v2421	((void*)startLabel+40896)
#define PS_v2426	((void*)startLabel+40908)
#define PS_v2419	((void*)startLabel+40920)
#define PS_v2415	((void*)startLabel+40932)
#define PS_v2424	((void*)startLabel+40944)
#define PS_v2418	((void*)startLabel+40956)
#define PS_v2425	((void*)startLabel+40968)
#define PS_v2427	((void*)startLabel+40980)
#define PS_v2429	((void*)startLabel+40992)
#define PS_v2430	((void*)startLabel+41004)
#define PS_v2420	((void*)startLabel+41016)
#define PS_v2414	((void*)startLabel+41028)
#define PS_v2416	((void*)startLabel+41040)
#define PS_v2422	((void*)startLabel+41052)
#define PS_v2423	((void*)startLabel+41064)
#define PS_v2412	((void*)startLabel+41076)
#define PS_v2512	((void*)startLabel+41088)
#define PS_v2510	((void*)startLabel+41100)
#define PS_v2508	((void*)startLabel+41112)
#define PS_v2507	((void*)startLabel+41124)
#define PS_v2509	((void*)startLabel+41136)
#define PS_v2504	((void*)startLabel+41148)
#define PS_v2498	((void*)startLabel+41160)
#define PS_v2496	((void*)startLabel+41172)
#define PS_v2490	((void*)startLabel+41184)
#define PS_v2485	((void*)startLabel+41196)
#define PS_v2493	((void*)startLabel+41208)
#define PS_v2488	((void*)startLabel+41220)
#define PS_v2491	((void*)startLabel+41232)
#define PS_v2483	((void*)startLabel+41244)
#define PS_v2486	((void*)startLabel+41256)
#define PS_v2487	((void*)startLabel+41268)
#define PS_v2489	((void*)startLabel+41280)
#define PS_v2482	((void*)startLabel+41292)
#define PS_v2494	((void*)startLabel+41304)
#define PS_v2484	((void*)startLabel+41316)
#define PS_v2492	((void*)startLabel+41328)
#define PS_v2479	((void*)startLabel+41340)
#define PS_v2539	((void*)startLabel+41352)
#define PS_v2537	((void*)startLabel+41364)
#define PS_v2535	((void*)startLabel+41376)
#define PS_v2533	((void*)startLabel+41388)
#define PS_v2531	((void*)startLabel+41400)
#define PS_v2529	((void*)startLabel+41412)
#define PS_v2530	((void*)startLabel+41424)
#define PS_v2528	((void*)startLabel+41436)
#define PS_v2526	((void*)startLabel+41448)
#define PS_v2552	((void*)startLabel+41460)
#define PS_v2550	((void*)startLabel+41472)
#define PS_v2548	((void*)startLabel+41484)
#define PS_v2561	((void*)startLabel+41496)
#define PS_v2559	((void*)startLabel+41508)
#define PS_v2598	((void*)startLabel+41520)
#define PS_v2596	((void*)startLabel+41532)
#define PS_v2591	((void*)startLabel+41544)
#define PS_v2592	((void*)startLabel+41556)
#define PS_v2594	((void*)startLabel+41568)
#define PS_v2593	((void*)startLabel+41580)
#define PS_v2589	((void*)startLabel+41592)
#define PS_v2581	((void*)startLabel+41604)
#define PS_v2579	((void*)startLabel+41616)
#define PS_v2618	((void*)startLabel+41628)
#define PS_v2615	((void*)startLabel+41640)
#define PS_v2616	((void*)startLabel+41652)
#define PS_v2613	((void*)startLabel+41664)
#define PS_v2608	((void*)startLabel+41676)
#define PS_v2611	((void*)startLabel+41688)
#define PS_v2610	((void*)startLabel+41700)
#define PS_v2607	((void*)startLabel+41712)
#define PS_v2609	((void*)startLabel+41724)
#define PS_v2605	((void*)startLabel+41736)
#define PS_v2641	((void*)startLabel+41748)
#define PS_v2637	((void*)startLabel+41760)
#define PS_v2638	((void*)startLabel+41772)
#define PS_v2639	((void*)startLabel+41784)
#define PS_v2635	((void*)startLabel+41796)
#define PS_v2630	((void*)startLabel+41808)
#define PS_v2633	((void*)startLabel+41820)
#define PS_v2632	((void*)startLabel+41832)
#define PS_v2629	((void*)startLabel+41844)
#define PS_v2631	((void*)startLabel+41856)
#define PS_v2627	((void*)startLabel+41868)
#define PS_v2669	((void*)startLabel+41880)
#define PS_v2666	((void*)startLabel+41892)
#define PS_v2667	((void*)startLabel+41904)
#define PS_v2664	((void*)startLabel+41916)
#define PS_v2659	((void*)startLabel+41928)
#define PS_v2660	((void*)startLabel+41940)
#define PS_v2662	((void*)startLabel+41952)
#define PS_v2657	((void*)startLabel+41964)
#define PS_v2658	((void*)startLabel+41976)
#define PS_v2661	((void*)startLabel+41988)
#define PS_v2655	((void*)startLabel+42000)
#define PS_v2697	((void*)startLabel+42012)
#define PS_v2693	((void*)startLabel+42024)
#define PS_v2690	((void*)startLabel+42036)
#define PS_v2691	((void*)startLabel+42048)
#define PS_v2688	((void*)startLabel+42060)
#define PS_v2732	((void*)startLabel+42072)
#define PS_v2728	((void*)startLabel+42084)
#define PS_v2725	((void*)startLabel+42096)
#define PS_v2726	((void*)startLabel+42108)
#define PS_v2723	((void*)startLabel+42120)
#define PS_v2719	((void*)startLabel+42132)
#define PS_v2721	((void*)startLabel+42144)
#define PS_v2718	((void*)startLabel+42156)
#define PS_v2720	((void*)startLabel+42168)
#define PS_v2716	((void*)startLabel+42180)
#define PS_v2776	((void*)startLabel+42192)
#define PS_v2773	((void*)startLabel+42204)
#define PS_v2774	((void*)startLabel+42216)
#define PS_v2771	((void*)startLabel+42228)
#define PS_v2767	((void*)startLabel+42240)
#define PS_v2769	((void*)startLabel+42252)
#define PS_v2768	((void*)startLabel+42264)
#define PS_v2765	((void*)startLabel+42276)
#define PS_v2761	((void*)startLabel+42288)
#define PS_v2763	((void*)startLabel+42300)
#define PS_v2762	((void*)startLabel+42312)
#define PS_v2759	((void*)startLabel+42324)
#define PS_v2755	((void*)startLabel+42336)
#define PS_v2757	((void*)startLabel+42348)
#define PS_v2756	((void*)startLabel+42360)
#define PS_v2753	((void*)startLabel+42372)
#define PS_v2749	((void*)startLabel+42384)
#define PS_v2751	((void*)startLabel+42396)
#define PS_v2750	((void*)startLabel+42408)
#define PS_v2747	((void*)startLabel+42420)
#define PS_v2814	((void*)startLabel+42432)
#define PS_v2811	((void*)startLabel+42444)
#define PS_v2812	((void*)startLabel+42456)
#define PS_v2809	((void*)startLabel+42468)
#define PS_v2805	((void*)startLabel+42480)
#define PS_v2807	((void*)startLabel+42492)
#define PS_v2806	((void*)startLabel+42504)
#define PS_v2803	((void*)startLabel+42516)
#define PS_v2799	((void*)startLabel+42528)
#define PS_v2801	((void*)startLabel+42540)
#define PS_v2800	((void*)startLabel+42552)
#define PS_v2797	((void*)startLabel+42564)
#define PS_v2793	((void*)startLabel+42576)
#define PS_v2795	((void*)startLabel+42588)
#define PS_v2794	((void*)startLabel+42600)
#define PS_v2791	((void*)startLabel+42612)
#define PS_v2845	((void*)startLabel+42624)
#define PS_v2842	((void*)startLabel+42636)
#define PS_v2843	((void*)startLabel+42648)
#define PS_v2840	((void*)startLabel+42660)
#define PS_v2836	((void*)startLabel+42672)
#define PS_v2838	((void*)startLabel+42684)
#define PS_v2837	((void*)startLabel+42696)
#define PS_v2834	((void*)startLabel+42708)
#define PS_v2830	((void*)startLabel+42720)
#define PS_v2832	((void*)startLabel+42732)
#define PS_v2831	((void*)startLabel+42744)
#define PS_v2828	((void*)startLabel+42756)
#define PS_v2865	((void*)startLabel+42768)
#define PS_v2863	((void*)startLabel+42780)
#define PS_v2861	((void*)startLabel+42792)
#define PS_v2910	((void*)startLabel+42804)
extern Node FN_NHC_46IOExtras_46newIORef[];
extern Node FN_Prelude_46_36[];
extern Node F0_NHC_46Internal_46unsafePerformIO[];
extern Node FN_System_46getEnv[];
extern Node FN_Prelude_46catch[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46putStrLn[];
extern Node FN_IO_46openFile[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node FN_IO_46hPutStrLn[];
extern Node FN_NHC_46IOExtras_46writeIORef[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_NHC_46IOExtras_46readIORef[];
extern Node FN_IO_46hClose[];
extern Node FN_IO_46try[];
extern Node FN_Prelude_46putStr[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46print[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46unwords[];
extern Node FN_Prelude_46Show_46Prelude_46Int_46show[];
extern Node FN_Prelude_46concatMap[];
extern Node FN_Prelude_46return[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_Prelude_46error[];
extern Node FN_NHC_46Observe_46observer[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_95_46fail[];
extern Node CF_Prelude_46Monad_46NHC_46Observe_46MonadObserver[];
extern Node FN_Prelude_46_95_46_62_62[];
extern Node FN_Monad_46ap[];
extern Node FN_Prelude_46_62_62_61[];
extern Node FN_NHC_46Observe_46Observable_46Prelude_462[];
extern Node FN_Array_46bounds[];
extern Node FN_NHC_46Observe_46Observable_46Prelude_46_91_93[];
extern Node FN_Array_46assocs[];
extern Node FN_Array_46array[];
extern Node FN_Prelude_46seq[];
extern Node FN_Prelude_46show[];
extern Node CF_Prelude_46Show_46_40_41[];
extern Node CF_Prelude_46Show_46Prelude_46Char[];
extern Node CF_Prelude_46Show_46Prelude_46Double[];
extern Node CF_Prelude_46Show_46Prelude_46Float[];
extern Node CF_Prelude_46Show_46Prelude_46Integer[];
extern Node CF_Prelude_46Show_46Prelude_46Bool[];
extern Node CF_Prelude_46Show_46Prelude_46Int[];
extern Node FN_NHC_46Internal_46_95noMethodError[];
extern Node CF_Prelude_46Bounded_46Prelude_46Int_46maxBound[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46_36[];
extern Node PC_Prelude_46seq[];
extern Node PC_Prelude_46show[];
extern Node PC_Prelude_46_62_62_61[];
extern Node PC_NHC_46Internal_46_95patternMatchFail[];
extern Node PC_Prelude_46catch[];
extern Node PC_System_46getEnv[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46IOExtras_46readIORef[];
extern Node PC_NHC_46IOExtras_46newIORef[];
extern Node PC_Monad_46ap[];
extern Node PC_Prelude_46return[];
extern Node PC_Prelude_46_43_43[];
extern Node PC_Prelude_46concatMap[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_58[];
extern Node PC_Prelude_46Show_46Prelude_46Int_46show[];
extern Node PC__40_41[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node PC_Prelude_46print[];
extern Node PC_Prelude_46putStr[];
extern Node PC_NHC_46Internal_46_95noMethodError[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_Array_46bounds[];
extern Node PC_Prelude_46unwords[];
extern Node PC_Prelude_46_95foldr[];
extern Node PC_Prelude_46_95_46_62_62[];
extern Node PC_Prelude_46_95_46fail[];
extern Node PC_Prelude_464[];
extern Node PC_Prelude_461[];
extern Node PC_IO_46hPutStrLn[];
extern Node PC_NHC_46IOExtras_46writeIORef[];
extern Node PC_Prelude_46putStrLn[];
extern Node PC_IO_46openFile[];
extern Node PC_IO_46WriteMode[];
extern Node PC_IO_46try[];
extern Node PC_IO_46hClose[];
extern Node PC_Prelude_46error[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node PC_NHC_46Internal_46_95apply3[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node PC_Array_46array[];
extern Node PC_Array_46assocs[];
extern Node PC_Prelude_46Just[];
extern Node PC_Prelude_465[];
extern Node PC_Prelude_463[];

static Node startLabel[] = {
  42
,};
Node PP_NHC_46Observe_46ObserveContext[] = {
 };
Node PC_NHC_46Observe_46ObserveContext[] = {
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,67)
, bytes2word(111,110,116,101)
, bytes2word(120,116,0,0)
,	/* PS_NHC_46Observe_46ObserveContext: (byte 0) */
  useLabel(PP_NHC_46Observe_46ObserveContext)
, useLabel(PP_NHC_46Observe_46ObserveContext)
, useLabel(PC_NHC_46Observe_46ObserveContext)
,};
Node PP_NHC_46Observe_46NoObserveGlobal[] = {
 };
Node PC_NHC_46Observe_46NoObserveGlobal[] = {
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(78,111,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,71,108,111)
, bytes2word(98,97,108,0)
,	/* PS_NHC_46Observe_46NoObserveGlobal: (byte 0) */
  useLabel(PP_NHC_46Observe_46NoObserveGlobal)
, useLabel(PP_NHC_46Observe_46NoObserveGlobal)
, useLabel(PC_NHC_46Observe_46NoObserveGlobal)
,};
Node PP_NHC_46Observe_46ObserveGlobal[] = {
 };
Node PC_NHC_46Observe_46ObserveGlobal[] = {
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,71)
, bytes2word(108,111,98,97)
, bytes2word(108,0,0,0)
,	/* PS_NHC_46Observe_46ObserveGlobal: (byte 0) */
  useLabel(PP_NHC_46Observe_46ObserveGlobal)
, useLabel(PP_NHC_46Observe_46ObserveGlobal)
, useLabel(PC_NHC_46Observe_46ObserveGlobal)
,	/* C0_NHC_46Observe_46NoObserveGlobal: (byte 0) */
  CONSTR(1,0,0)
, useLabel(PS_NHC_46Observe_46NoObserveGlobal)
, 0
, 0
, 0
,};
Node PP_NHC_46Observe_46MonadObserver[] = {
 };
Node PC_NHC_46Observe_46MonadObserver[] = {
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(77,111,110,97)
, bytes2word(100,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(114,0,0,0)
,	/* PS_NHC_46Observe_46MonadObserver: (byte 0) */
  useLabel(PP_NHC_46Observe_46MonadObserver)
, useLabel(PP_NHC_46Observe_46MonadObserver)
, useLabel(PC_NHC_46Observe_46MonadObserver)
, bytes2word(0,0,0,0)
, useLabel(CT_v1933)
,	/* FN_NHC_46Observe_46observeGlobal: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1932)
, 0
, 0
, 0
, 0
, useLabel(PS_v1931)
, 0
, 0
, 0
, 0
, useLabel(PS_v1930)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, 2170001
, useLabel(ST_v1929)
,	/* CT_v1933: (byte 0) */
  HW(3,0)
, 0
,	/* CF_NHC_46Observe_46observeGlobal: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Observe_46observeGlobal))
, useLabel(PS_v1928)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46IOExtras_46newIORef))
, VAPTAG(useLabel(FN_Prelude_46_36))
, useLabel(F0_NHC_46Internal_46unsafePerformIO)
, bytes2word(0,0,0,0)
, useLabel(CT_v1942)
,	/* FN_NHC_46Observe_46openObserveGlobal: (byte 0) */
  bytes2word(NEEDHEAP_P1,36,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,16,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,11,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1941)
, 0
, 0
, 0
, 0
, useLabel(PS_v1940)
, 0
, 0
, 0
, 0
, useLabel(PS_v1939)
, 0
, 0
, 0
, 0
, useLabel(PS_v1938)
, 0
, 0
, 0
, 0
, useLabel(PS_v1937)
, 0
, 0
, 0
, 0
, useLabel(PS_v1936)
, 0
, 0
, 0
, 0
, 1900001
, useLabel(ST_v1935)
,	/* CT_v1942: (byte 0) */
  HW(6,0)
, 0
,	/* CF_NHC_46Observe_46openObserveGlobal: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Observe_46openObserveGlobal))
, useLabel(PS_v1934)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1805))
, VAPTAG(useLabel(FN_System_46getEnv))
, CAPTAG(useLabel(FN_LAMBDA1807),1)
, VAPTAG(useLabel(FN_Prelude_46catch))
, CAPTAG(useLabel(FN_LAMBDA1813),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v1953)
,	/* FN_LAMBDA1813: (byte 0) */
  bytes2word(NEEDHEAP_P1,50,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,17,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,35,HEAP_OFF_N1)
, bytes2word(13,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1952)
, 0
, 0
, 0
, 0
, useLabel(PS_v1951)
, 0
, 0
, 0
, 0
, useLabel(PS_v1950)
, 0
, 0
, 0
, 0
, useLabel(PS_v1949)
, 0
, 0
, 0
, 0
, useLabel(PS_v1948)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1947)
, 0
, 0
, 0
, 0
, useLabel(PS_v1946)
, 0
, 0
, 0
, 0
, useLabel(PS_v1945)
, 0
, 0
, 0
, 0
, 1910039
, useLabel(ST_v1944)
,	/* CT_v1953: (byte 0) */
  HW(7,1)
, 0
,	/* F0_LAMBDA1813: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1813),1)
, useLabel(PS_v1943)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1808))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_Prelude_46putStrLn))
, VAPTAG(useLabel(FN_IO_46openFile))
, CAPTAG(useLabel(FN_LAMBDA1812),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(1,0,0,1)
, useLabel(CT_v1962)
,	/* FN_LAMBDA1812: (byte 0) */
  bytes2word(NEEDHEAP_P1,52,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,12,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,25,HEAP_OFF_N1)
, bytes2word(13,PUSH_HEAP,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,44,HEAP_OFF_N1)
, bytes2word(13,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1961)
, 0
, 0
, 0
, 0
, useLabel(PS_v1960)
, 0
, 0
, 0
, 0
, useLabel(PS_v1959)
, 0
, 0
, 0
, 0
, useLabel(PS_v1958)
, 0
, 0
, 0
, 0
, useLabel(PS_v1957)
, 0
, 0
, 0
, 0
, useLabel(PS_v1956)
, 0
, 0
, 0
, 0
, 1930021
, useLabel(ST_v1955)
,	/* CT_v1962: (byte 0) */
  HW(7,1)
, 0
,	/* F0_LAMBDA1812: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1812),1)
, useLabel(PS_v1954)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1809))
, VAPTAG(useLabel(FN_IO_46hPutStrLn))
, VAPTAG(useLabel(FN_LAMBDA1810))
, VAPTAG(useLabel(FN_LAMBDA1811))
, VAPTAG(useLabel(FN_NHC_46IOExtras_46writeIORef))
, useLabel(CF_NHC_46Observe_46observeGlobal)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(1,0,0,1)
, useLabel(CT_v1966)
,	/* FN_LAMBDA1811: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_INT_P1,1,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1965)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 1970018
, useLabel(ST_v1964)
,	/* CT_v1966: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1811: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1811),1)
, useLabel(PS_v1963)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v1970)
,	/* FN_LAMBDA1810: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1969)
, 1950028
, useLabel(ST_v1968)
,	/* CT_v1970: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1810: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1810))
, useLabel(PS_v1967)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v1974)
,	/* FN_LAMBDA1809: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1973)
, 1940028
, useLabel(ST_v1972)
,	/* CT_v1974: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1809: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1809))
, useLabel(PS_v1971)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v1978)
,	/* FN_LAMBDA1808: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1977)
, 1920021
, useLabel(ST_v1976)
,	/* CT_v1978: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1808: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1808))
, useLabel(PS_v1975)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1983)
,	/* FN_LAMBDA1807: (byte 0) */
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1982)
, 0
, 0
, 0
, 0
, useLabel(PS_v1981)
, 0
, 0
, 0
, 0
, 1910047
, useLabel(ST_v1980)
,	/* CT_v1983: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA1807: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1807),1)
, useLabel(PS_v1979)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1806))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v1987)
,	/* FN_LAMBDA1806: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1986)
, 1910061
, useLabel(ST_v1985)
,	/* CT_v1987: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1806: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1806))
, useLabel(PS_v1984)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v1991)
,	/* FN_LAMBDA1805: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1990)
, 1910025
, useLabel(ST_v1989)
,	/* CT_v1991: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1805: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1805))
, useLabel(PS_v1988)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v2001)
,	/* FN_NHC_46Observe_46observeHandle: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v1998: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v1995: (byte 2) */
  bytes2word(6,0,UNPACK,2)
,	/* v1992: (byte 2) */
  bytes2word(PUSH_I1,RETURN_EVAL,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2000)
, 0
, 0
, 0
, 0
, useLabel(PS_v1999)
, 0
, 0
, 0
, 0
, 1850011
, useLabel(ST_v1997)
,	/* CT_v2001: (byte 0) */
  HW(2,1)
, 0
,	/* F0_NHC_46Observe_46observeHandle: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46observeHandle),1)
, useLabel(PS_v1996)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1814))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v2005)
,	/* FN_LAMBDA1814: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2004)
, 1850011
, useLabel(ST_v2003)
,	/* CT_v2005: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1814: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1814))
, useLabel(PS_v2002)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2011)
,	/* FN_NHC_46Observe_46closeObserveGlobal: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,16,HEAP_OFF_N1)
, bytes2word(11,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2010)
, 0
, 0
, 0
, 0
, useLabel(PS_v2009)
, 0
, 0
, 0
, 0
, useLabel(PS_v2008)
, 0
, 0
, 0
, 0
, 2040001
, useLabel(ST_v2007)
,	/* CT_v2011: (byte 0) */
  HW(4,0)
, 0
,	/* CF_NHC_46Observe_46closeObserveGlobal: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Observe_46closeObserveGlobal))
, useLabel(PS_v2006)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46IOExtras_46readIORef))
, useLabel(CF_NHC_46Observe_46observeGlobal)
, CAPTAG(useLabel(FN_LAMBDA1816),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v2024)
,	/* FN_LAMBDA1816: (byte 0) */
  bytes2word(NEEDHEAP_P1,76,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,0)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,18)
, bytes2word(HEAP_OFF_N1,12,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CVAL_N1,42,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,14,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_N1,52,HEAP_CVAL_N1)
, bytes2word(57,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,15,HEAP_CVAL_N1,62)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,23,HEAP_OFF_N1,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,41,HEAP_OFF_N1,13)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2023)
, 0
, 0
, 0
, 0
, useLabel(PS_v2022)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2021)
, 0
, 0
, 0
, 0
, useLabel(PS_v2020)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2019)
, 0
, 0
, 0
, 0
, useLabel(PS_v2018)
, 0
, 0
, 0
, 0
, useLabel(PS_v2017)
, 0
, 0
, 0
, 0
, useLabel(PS_v2016)
, 0
, 0
, 0
, 0
, useLabel(PS_v2015)
, 0
, 0
, 0
, 0
, useLabel(PS_v2014)
, 0
, 0
, 0
, 0
, 2050016
, useLabel(ST_v2013)
,	/* CT_v2024: (byte 0) */
  HW(9,1)
, 0
,	/* F0_LAMBDA1816: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1816),1)
, useLabel(PS_v2012)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46observeHandle))
, VAPTAG(useLabel(FN_LAMBDA1815))
, VAPTAG(useLabel(FN_IO_46hPutStrLn))
, VAPTAG(useLabel(FN_IO_46hClose))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, VAPTAG(useLabel(FN_IO_46try))
, VAPTAG(useLabel(FN_NHC_46IOExtras_46writeIORef))
, useLabel(CF_NHC_46Observe_46observeGlobal)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v2028)
,	/* FN_LAMBDA1815: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2027)
, 2070038
, useLabel(ST_v2026)
,	/* CT_v2028: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1815: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1815))
, useLabel(PS_v2025)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v2034)
,};
Node FN_NHC_46Observe_46runO[] = {
  bytes2word(NEEDHEAP_P1,51,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(12,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,12)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(30,HEAP_OFF_N1,13,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2033)
, 0
, 0
, 0
, 0
, useLabel(PS_v2032)
, 0
, 0
, 0
, 0
, useLabel(PS_v2031)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 3810001
, useLabel(ST_v2030)
,	/* CT_v2034: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_NHC_46Observe_46runO[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46runO),1)
, useLabel(PS_v2029)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, useLabel(CF_NHC_46Observe_46closeObserveGlobal)
, useLabel(CF_NHC_46Observe_46openObserveGlobal)
, bytes2word(1,0,0,1)
, useLabel(CT_v2040)
,};
Node FN_NHC_46Observe_46putStrO[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2039)
, 0
, 0
, 0
, 0
, useLabel(PS_v2038)
, 0
, 0
, 0
, 0
, useLabel(PS_v2037)
, 0
, 0
, 0
, 0
, 3950001
, useLabel(ST_v2036)
,	/* CT_v2040: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_NHC_46Observe_46putStrO[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46putStrO),1)
, useLabel(PS_v2035)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46putStr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Observe_46runO))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2045)
,};
Node FN_NHC_46Observe_46printO[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2044)
, 0
, 0
, 0
, 0
, useLabel(PS_v2043)
, 0
, 0
, 0
, 0
, 3920001
, useLabel(ST_v2042)
,	/* CT_v2045: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46Observe_46printO[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46printO),2)
, useLabel(PS_v2041)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46print))
, VAPTAG(useLabel(FN_NHC_46Observe_46runO))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2054)
,	/* FN_NHC_46Observe_46mkXmlNode: (byte 0) */
  bytes2word(NEEDHEAP_P1,56,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,17,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(34,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,13,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,53)
, bytes2word(HEAP_OFF_N1,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v2053)
, 0
, 0
, 0
, 0
, useLabel(PS_v2052)
, 0
, 0
, 0
, 0
, useLabel(PS_v2051)
, 0
, 0
, 0
, 0
, useLabel(PS_v2050)
, 0
, 0
, 0
, 0
, useLabel(PS_v2049)
, 0
, 0
, 0
, 0
, useLabel(PS_v2048)
, 0
, 0
, 0
, 0
, 3230001
, useLabel(ST_v2047)
,	/* CT_v2054: (byte 0) */
  HW(6,2)
, 0
,	/* F0_NHC_46Observe_46mkXmlNode: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46mkXmlNode),2)
, useLabel(PS_v2046)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1821))
, VAPTAG(useLabel(FN_LAMBDA1822))
, CAPTAG(useLabel(FN_NHC_46Observe_46Prelude_46393_46showAttrs),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA1823))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v2058)
,	/* FN_LAMBDA1823: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2057)
, 3240049
, useLabel(ST_v2056)
,	/* CT_v2058: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1823: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1823))
, useLabel(PS_v2055)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2062)
,	/* FN_LAMBDA1822: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2061)
, 3240023
, useLabel(ST_v2060)
,	/* CT_v2062: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1822: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1822))
, useLabel(PS_v2059)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2066)
,	/* FN_LAMBDA1821: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2065)
, 3240009
, useLabel(ST_v2064)
,	/* CT_v2066: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1821: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1821))
, useLabel(PS_v2063)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v2079)
,	/* FN_NHC_46Observe_46Prelude_46393_46showAttrs: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v2073: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v2070: (byte 2) */
  bytes2word(12,0,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
,	/* v2067: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,15,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,12,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(13,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2078)
, 0
, 0
, 0
, 0
, useLabel(PS_v2077)
, 0
, 0
, 0
, 0
, useLabel(PS_v2076)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2075)
, 0
, 0
, 0
, 0
, useLabel(PS_v2074)
, 0
, 0
, 0
, 0
, 3260009
, useLabel(ST_v2072)
,	/* CT_v2079: (byte 0) */
  HW(4,1)
, 0
,	/* F0_NHC_46Observe_46Prelude_46393_46showAttrs: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46Prelude_46393_46showAttrs),1)
, useLabel(PS_v2071)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1817))
, CAPTAG(useLabel(FN_LAMBDA1820),2)
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, VAPTAG(useLabel(FN_Prelude_46unwords))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2089)
,	/* FN_LAMBDA1820: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_P1)
, bytes2word(38,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I1,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,22)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,0,HEAP_OFF_N1)
, bytes2word(13,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,HEAP_ARG)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2088)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2087)
, 0
, 0
, 0
, 0
, useLabel(PS_v2086)
, 0
, 0
, 0
, 0
, useLabel(PS_v2085)
, 0
, 0
, 0
, 0
, 3270035
, useLabel(ST_v2083)
,	/* CT_v2089: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA1820: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1820),2)
, useLabel(PS_v2082)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1818))
, VAPTAG(useLabel(FN_LAMBDA1819))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v2093)
,	/* FN_LAMBDA1819: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2092)
, 3270063
, useLabel(ST_v2091)
,	/* CT_v2093: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1819: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1819))
, useLabel(PS_v2090)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2097)
,	/* FN_LAMBDA1818: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2096)
, 3270045
, useLabel(ST_v2095)
,	/* CT_v2097: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1818: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1818))
, useLabel(PS_v2094)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2101)
,	/* FN_LAMBDA1817: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2100)
, 3260024
, useLabel(ST_v2099)
,	/* CT_v2101: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1817: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1817))
, useLabel(PS_v2098)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v2104)
,	/* FN_NHC_46Observe_46observeParent: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1730011
, useLabel(ST_v2103)
,	/* CT_v2104: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Observe_46observeParent: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46observeParent),1)
, useLabel(PS_v2102)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v2107)
,	/* FN_NHC_46Observe_46observePort: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1740011
, useLabel(ST_v2106)
,	/* CT_v2107: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Observe_46observePort: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46observePort),1)
, useLabel(PS_v2105)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2121)
,	/* FN_NHC_46Observe_46xmlFun: (byte 0) */
  bytes2word(NEEDHEAP_P1,105,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,16,HEAP_OFF_N1,12)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,22,HEAP_OFF_N1,12)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,47,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,22,HEAP_OFF_N1,12)
, bytes2word(HEAP_CVAL_N1,52,HEAP_CVAL_N1,57)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_N1)
, bytes2word(62,HEAP_CVAL_N1,67,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_N1,62)
, bytes2word(HEAP_CVAL_N1,67,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,48,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_N1,62,HEAP_CVAL_N1)
, bytes2word(67,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,79,HEAP_OFF_N1,13)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(72,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,102,HEAP_OFF_N1,13)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2120)
, 0
, 0
, 0
, 0
, useLabel(PS_v2119)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2118)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2117)
, 0
, 0
, 0
, 0
, useLabel(PS_v2116)
, 0
, 0
, 0
, 0
, useLabel(PS_v2115)
, 0
, 0
, 0
, 0
, useLabel(PS_v2114)
, 0
, 0
, 0
, 0
, useLabel(PS_v2113)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2112)
, 0
, 0
, 0
, 0
, useLabel(PS_v2111)
, 0
, 0
, 0
, 0
, useLabel(PS_v2110)
, 0
, 0
, 0
, 0
, 3660001
, useLabel(ST_v2109)
,	/* CT_v2121: (byte 0) */
  HW(8,2)
, 0
,	/* F0_NHC_46Observe_46xmlFun: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46xmlFun),2)
, useLabel(PS_v2108)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1824))
, VAPTAG(useLabel(FN_LAMBDA1825))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Int_46show))
, VAPTAG(useLabel(FN_LAMBDA1826))
, VAPTAG(useLabel(FN_NHC_46Observe_46observeParent))
, VAPTAG(useLabel(FN_LAMBDA1827))
, VAPTAG(useLabel(FN_NHC_46Observe_46observePort))
, VAPTAG(useLabel(FN_NHC_46Observe_46mkXmlNode))
, bytes2word(0,0,0,0)
, useLabel(CT_v2125)
,	/* FN_LAMBDA1827: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2124)
, 3700020
, useLabel(ST_v2123)
,	/* CT_v2125: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1827: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1827))
, useLabel(PS_v2122)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2129)
,	/* FN_LAMBDA1826: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2128)
, 3690020
, useLabel(ST_v2127)
,	/* CT_v2129: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1826: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1826))
, useLabel(PS_v2126)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2133)
,	/* FN_LAMBDA1825: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2132)
, 3680020
, useLabel(ST_v2131)
,	/* CT_v2133: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1825: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1825))
, useLabel(PS_v2130)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2137)
,	/* FN_LAMBDA1824: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2136)
, 3670019
, useLabel(ST_v2135)
,	/* CT_v2137: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1824: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1824))
, useLabel(PS_v2134)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2151)
,	/* FN_NHC_46Observe_46xmlEnter: (byte 0) */
  bytes2word(NEEDHEAP_P1,105,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,16,HEAP_OFF_N1,12)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,22,HEAP_OFF_N1,12)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,47,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,22,HEAP_OFF_N1,12)
, bytes2word(HEAP_CVAL_N1,52,HEAP_CVAL_N1,57)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_N1)
, bytes2word(62,HEAP_CVAL_N1,67,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_N1,62)
, bytes2word(HEAP_CVAL_N1,67,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,48,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_N1,62,HEAP_CVAL_N1)
, bytes2word(67,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,79,HEAP_OFF_N1,13)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(72,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,102,HEAP_OFF_N1,13)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2150)
, 0
, 0
, 0
, 0
, useLabel(PS_v2149)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2148)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2147)
, 0
, 0
, 0
, 0
, useLabel(PS_v2146)
, 0
, 0
, 0
, 0
, useLabel(PS_v2145)
, 0
, 0
, 0
, 0
, useLabel(PS_v2144)
, 0
, 0
, 0
, 0
, useLabel(PS_v2143)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2142)
, 0
, 0
, 0
, 0
, useLabel(PS_v2141)
, 0
, 0
, 0
, 0
, useLabel(PS_v2140)
, 0
, 0
, 0
, 0
, 3580001
, useLabel(ST_v2139)
,	/* CT_v2151: (byte 0) */
  HW(8,2)
, 0
,	/* F0_NHC_46Observe_46xmlEnter: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46xmlEnter),2)
, useLabel(PS_v2138)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1828))
, VAPTAG(useLabel(FN_LAMBDA1829))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Int_46show))
, VAPTAG(useLabel(FN_LAMBDA1830))
, VAPTAG(useLabel(FN_NHC_46Observe_46observeParent))
, VAPTAG(useLabel(FN_LAMBDA1831))
, VAPTAG(useLabel(FN_NHC_46Observe_46observePort))
, VAPTAG(useLabel(FN_NHC_46Observe_46mkXmlNode))
, bytes2word(0,0,0,0)
, useLabel(CT_v2154)
,	/* FN_LAMBDA1831: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2124)
, 3620020
, useLabel(ST_v2153)
,	/* CT_v2154: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1831: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1831))
, useLabel(PS_v2152)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2157)
,	/* FN_LAMBDA1830: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2128)
, 3610020
, useLabel(ST_v2156)
,	/* CT_v2157: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1830: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1830))
, useLabel(PS_v2155)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2160)
,	/* FN_LAMBDA1829: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2132)
, 3600020
, useLabel(ST_v2159)
,	/* CT_v2160: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1829: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1829))
, useLabel(PS_v2158)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2164)
,	/* FN_LAMBDA1828: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2163)
, 3590019
, useLabel(ST_v2162)
,	/* CT_v2164: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1828: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1828))
, useLabel(PS_v2161)
, 0
, 0
, 0
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v2180)
,	/* FN_NHC_46Observe_46xmlCons: (byte 0) */
  bytes2word(NEEDHEAP_P1,149,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,16,HEAP_OFF_N1,12)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,22,HEAP_OFF_N1,12)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,47,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,22,HEAP_OFF_N1,12)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_N1,52)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,4)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(16,HEAP_OFF_N1,12,HEAP_CVAL_P1)
, bytes2word(15,HEAP_CVAL_N1,57,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_N1,62,HEAP_CVAL_N1)
, bytes2word(67,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_N1,72,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,11,HEAP_CVAL_N1)
, bytes2word(72,HEAP_CVAL_N1,77,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,36)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_N1,72)
, bytes2word(HEAP_CVAL_N1,77,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,61,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_N1,72,HEAP_CVAL_N1)
, bytes2word(77,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,92,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_N1,72,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(123,HEAP_OFF_N1,13,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,16,HEAP_CVAL_N1,82)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(146,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2179)
, 0
, 0
, 0
, 0
, useLabel(PS_v2178)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2177)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2176)
, 0
, 0
, 0
, 0
, useLabel(PS_v2175)
, 0
, 0
, 0
, 0
, useLabel(PS_v2174)
, 0
, 0
, 0
, 0
, useLabel(PS_v2173)
, 0
, 0
, 0
, 0
, useLabel(PS_v2172)
, 0
, 0
, 0
, 0
, useLabel(PS_v2171)
, 0
, 0
, 0
, 0
, useLabel(PS_v2170)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2169)
, 0
, 0
, 0
, 0
, useLabel(PS_v2168)
, 0
, 0
, 0
, 0
, useLabel(PS_v2167)
, 0
, 0
, 0
, 0
, 3480001
, useLabel(ST_v2166)
,	/* CT_v2180: (byte 0) */
  HW(10,4)
, 0
,	/* F0_NHC_46Observe_46xmlCons: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46xmlCons),4)
, useLabel(PS_v2165)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1832))
, VAPTAG(useLabel(FN_LAMBDA1833))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Int_46show))
, VAPTAG(useLabel(FN_LAMBDA1834))
, VAPTAG(useLabel(FN_NHC_46Observe_46observeParent))
, VAPTAG(useLabel(FN_LAMBDA1835))
, VAPTAG(useLabel(FN_NHC_46Observe_46observePort))
, VAPTAG(useLabel(FN_LAMBDA1836))
, VAPTAG(useLabel(FN_LAMBDA1837))
, VAPTAG(useLabel(FN_NHC_46Observe_46mkXmlNode))
, bytes2word(0,0,0,0)
, useLabel(CT_v2184)
,	/* FN_LAMBDA1837: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2183)
, 3540020
, useLabel(ST_v2182)
,	/* CT_v2184: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1837: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1837))
, useLabel(PS_v2181)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2188)
,	/* FN_LAMBDA1836: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2187)
, 3530020
, useLabel(ST_v2186)
,	/* CT_v2188: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1836: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1836))
, useLabel(PS_v2185)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2191)
,	/* FN_LAMBDA1835: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2124)
, 3520020
, useLabel(ST_v2190)
,	/* CT_v2191: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1835: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1835))
, useLabel(PS_v2189)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2194)
,	/* FN_LAMBDA1834: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2128)
, 3510020
, useLabel(ST_v2193)
,	/* CT_v2194: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1834: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1834))
, useLabel(PS_v2192)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2197)
,	/* FN_LAMBDA1833: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2132)
, 3500020
, useLabel(ST_v2196)
,	/* CT_v2197: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1833: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1833))
, useLabel(PS_v2195)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2200)
,	/* FN_LAMBDA1832: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2183)
, 3490019
, useLabel(ST_v2199)
,	/* CT_v2200: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1832: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1832))
, useLabel(PS_v2198)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2211)
,	/* FN_NHC_46Observe_46xmlObserve: (byte 0) */
  bytes2word(NEEDHEAP_P1,62,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,16,HEAP_OFF_N1,12)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_N1,47,HEAP_CVAL_N1)
, bytes2word(52,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,17,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CVAL_N1,52)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(36,HEAP_OFF_N1,13,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,57)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(59,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2210)
, 0
, 0
, 0
, 0
, useLabel(PS_v2209)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2208)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2207)
, 0
, 0
, 0
, 0
, useLabel(PS_v2206)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2205)
, 0
, 0
, 0
, 0
, useLabel(PS_v2204)
, 0
, 0
, 0
, 0
, useLabel(PS_v2203)
, 0
, 0
, 0
, 0
, 3400001
, useLabel(ST_v2202)
,	/* CT_v2211: (byte 0) */
  HW(5,2)
, 0
,	/* F0_NHC_46Observe_46xmlObserve: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46xmlObserve),2)
, useLabel(PS_v2201)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1838))
, VAPTAG(useLabel(FN_LAMBDA1839))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Int_46show))
, VAPTAG(useLabel(FN_LAMBDA1840))
, VAPTAG(useLabel(FN_NHC_46Observe_46mkXmlNode))
, bytes2word(0,0,0,0)
, useLabel(CT_v2215)
,	/* FN_LAMBDA1840: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2214)
, 3430019
, useLabel(ST_v2213)
,	/* CT_v2215: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1840: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1840))
, useLabel(PS_v2212)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2218)
,	/* FN_LAMBDA1839: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2132)
, 3420019
, useLabel(ST_v2217)
,	/* CT_v2218: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1839: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1839))
, useLabel(PS_v2216)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2222)
,	/* FN_LAMBDA1838: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2221)
, 3410019
, useLabel(ST_v2220)
,	/* CT_v2222: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1838: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1838))
, useLabel(PS_v2219)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2227)
,	/* FN_NHC_46Observe_46showXmlString: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v2226)
, 0
, 0
, 0
, 0
, useLabel(PS_v2225)
, 0
, 0
, 0
, 0
, 3300001
, useLabel(ST_v2224)
,	/* CT_v2227: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Observe_46showXmlString: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Observe_46showXmlString))
, useLabel(PS_v2223)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_NHC_46Observe_46Prelude_46399_46fixChar),1)
, VAPTAG(useLabel(FN_Prelude_46concatMap))
, bytes2word(1,0,0,1)
, useLabel(CT_v2246)
,	/* FN_NHC_46Observe_46Prelude_46399_46fixChar: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,5,TOP(34),BOT(34))
, bytes2word(TOP(26),BOT(26),TOP(38),BOT(38))
, bytes2word(TOP(36),BOT(36),TOP(39),BOT(39))
, bytes2word(TOP(46),BOT(46),TOP(60),BOT(60))
, bytes2word(TOP(56),BOT(56),TOP(62),BOT(62))
,	/* v2238: (byte 4) */
  bytes2word(TOP(66),BOT(66),TOP(22),BOT(22))
,	/* v2231: (byte 4) */
  bytes2word(POP_I1,JUMP,52,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
,	/* v2232: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN_EVAL,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
,	/* v2233: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN_EVAL)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v2234: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN_EVAL,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
,	/* v2235: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN_EVAL)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
,	/* v2228: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN_EVAL,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(11,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2245)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2244)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2243)
, 0
, 0
, 0
, 0
, useLabel(PS_v2242)
, 0
, 0
, 0
, 0
, useLabel(PS_v2241)
, 0
, 0
, 0
, 0
, useLabel(PS_v2240)
, 0
, 0
, 0
, 0
, useLabel(PS_v2239)
, 0
, 0
, 0
, 0
, 3320015
, useLabel(ST_v2237)
,	/* CT_v2246: (byte 0) */
  HW(5,1)
, 0
,	/* F0_NHC_46Observe_46Prelude_46399_46fixChar: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46Prelude_46399_46fixChar),1)
, useLabel(PS_v2236)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1841))
, VAPTAG(useLabel(FN_LAMBDA1842))
, VAPTAG(useLabel(FN_LAMBDA1843))
, VAPTAG(useLabel(FN_LAMBDA1844))
, VAPTAG(useLabel(FN_LAMBDA1845))
, bytes2word(0,0,0,0)
, useLabel(CT_v2250)
,	/* FN_LAMBDA1845: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2249)
, 3330029
, useLabel(ST_v2248)
,	/* CT_v2250: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1845: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1845))
, useLabel(PS_v2247)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2254)
,	/* FN_LAMBDA1844: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2253)
, 3320029
, useLabel(ST_v2252)
,	/* CT_v2254: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1844: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1844))
, useLabel(PS_v2251)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2258)
,	/* FN_LAMBDA1843: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2257)
, 3360030
, useLabel(ST_v2256)
,	/* CT_v2258: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1843: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1843))
, useLabel(PS_v2255)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2262)
,	/* FN_LAMBDA1842: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2261)
, 3340029
, useLabel(ST_v2260)
,	/* CT_v2262: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1842: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1842))
, useLabel(PS_v2259)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2266)
,	/* FN_LAMBDA1841: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2265)
, 3350029
, useLabel(ST_v2264)
,	/* CT_v2266: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1841: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1841))
, useLabel(PS_v2263)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2271)
,	/* FN_NHC_46Observe_46ourCatchAll: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,2,3)
, bytes2word(PUSH_P1,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2270)
, 0
, 0
, 0
, 0
, useLabel(PS_v2269)
, 0
, 0
, 0
, 0
, 3150001
, useLabel(ST_v2268)
,	/* CT_v2271: (byte 0) */
  HW(2,3)
, 0
,	/* F0_NHC_46Observe_46ourCatchAll: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46ourCatchAll),3)
, useLabel(PS_v2267)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v2281)
,	/* FN_NHC_46Observe_46observeUniq: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v2278: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v2275: (byte 2) */
  bytes2word(7,0,UNPACK,2)
,	/* v2272: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2280)
, 0
, 0
, 0
, 0
, useLabel(PS_v2279)
, 0
, 0
, 0
, 0
, 1840011
, useLabel(ST_v2277)
,	/* CT_v2281: (byte 0) */
  HW(2,1)
, 0
,	/* F0_NHC_46Observe_46observeUniq: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46observeUniq),1)
, useLabel(PS_v2276)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1846))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v2285)
,	/* FN_LAMBDA1846: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2284)
, 1840011
, useLabel(ST_v2283)
,	/* CT_v2285: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1846: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1846))
, useLabel(PS_v2282)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v2288)
,	/* FN_NHC_46Observe_46runMO: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 2240040
, useLabel(ST_v2287)
,	/* CT_v2288: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Observe_46runMO: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46runMO),1)
, useLabel(PS_v2286)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v2291)
,	/* FN_NHC_46Observe_46observeDepth: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1750011
, useLabel(ST_v2290)
,	/* CT_v2291: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Observe_46observeDepth: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46observeDepth),1)
, useLabel(PS_v2289)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2298)
,	/* FN_NHC_46Observe_46sendObserveFnPacket: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(18,HEAP_OFF_N1,13,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2297)
, 0
, 0
, 0
, 0
, useLabel(PS_v2296)
, 0
, 0
, 0
, 0
, useLabel(PS_v2295)
, 0
, 0
, 0
, 0
, useLabel(PS_v2294)
, 0
, 0
, 0
, 0
, 2980001
, useLabel(ST_v2293)
,	/* CT_v2298: (byte 0) */
  HW(6,2)
, 0
,	/* F0_NHC_46Observe_46sendObserveFnPacket: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46sendObserveFnPacket),2)
, useLabel(PS_v2292)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46IOExtras_46readIORef))
, useLabel(CF_NHC_46Observe_46observeGlobal)
, CAPTAG(useLabel(FN_LAMBDA1853),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46_36))
, useLabel(F0_NHC_46Internal_46unsafePerformIO)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2316)
,	/* FN_LAMBDA1853: (byte 0) */
  bytes2word(NEEDHEAP_P1,114,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_INT_P1,1,HEAP_CVAL_P1)
, bytes2word(15,HEAP_CVAL_N1,42,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,24)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,46)
, bytes2word(HEAP_INT_P1,0,HEAP_CVAL_P1,16)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,14,HEAP_CVAL_P1)
, bytes2word(17,HEAP_CVAL_N1,52,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,20)
, bytes2word(HEAP_CVAL_P1,18,HEAP_CVAL_N1,57)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,19,HEAP_CVAL_N1)
, bytes2word(62,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,71,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,20,HEAP_CVAL_N1,67)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(18,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(21,HEAP_CVAL_N1,72,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,37)
, bytes2word(HEAP_CVAL_P1,22,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(18,HEAP_OFF_N1,12,HEAP_CVAL_P1)
, bytes2word(22,HEAP_CVAL_N1,77,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,85)
, bytes2word(HEAP_OFF_N1,13,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(22,HEAP_CVAL_N1,77,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,111)
, bytes2word(HEAP_OFF_N1,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2315)
, 0
, 0
, 0
, 0
, useLabel(PS_v2314)
, 0
, 0
, 0
, 0
, useLabel(PS_v2313)
, 0
, 0
, 0
, 0
, useLabel(PS_v2312)
, 0
, 0
, 0
, 0
, useLabel(PS_v2311)
, 0
, 0
, 0
, 0
, useLabel(PS_v2310)
, 0
, 0
, 0
, 0
, useLabel(PS_v2309)
, 0
, 0
, 0
, 0
, useLabel(PS_v2308)
, 0
, 0
, 0
, 0
, useLabel(PS_v2307)
, 0
, 0
, 0
, 0
, useLabel(PS_v2306)
, 0
, 0
, 0
, 0
, useLabel(PS_v2305)
, 0
, 0
, 0
, 0
, useLabel(PS_v2304)
, 0
, 0
, 0
, 0
, useLabel(PS_v2303)
, 0
, 0
, 0
, 0
, useLabel(PS_v2302)
, 0
, 0
, 0
, 0
, useLabel(PS_v2301)
, 0
, 0
, 0
, 0
, 2990016
, useLabel(ST_v2300)
,	/* CT_v2316: (byte 0) */
  HW(16,3)
, 0
,	/* F0_LAMBDA1853: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1853),3)
, useLabel(PS_v2299)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1848))
, VAPTAG(useLabel(FN_NHC_46Observe_46observeUniq))
, VAPTAG(useLabel(FN_LAMBDA1850))
, VAPTAG(useLabel(FN_NHC_46IOExtras_46writeIORef))
, useLabel(CF_NHC_46Observe_46observeGlobal)
, VAPTAG(useLabel(FN_NHC_46Observe_46runMO))
, VAPTAG(useLabel(FN_NHC_46Observe_46observeDepth))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, VAPTAG(useLabel(FN_LAMBDA1851))
, VAPTAG(useLabel(FN_LAMBDA1852))
, VAPTAG(useLabel(FN_NHC_46Observe_46observeHandle))
, VAPTAG(useLabel(FN_NHC_46Observe_46xmlFun))
, VAPTAG(useLabel(FN_IO_46hPutStrLn))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(1,0,0,1)
, useLabel(CT_v2319)
,	/* FN_LAMBDA1852: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 3060018
, useLabel(ST_v2318)
,	/* CT_v2319: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1852: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1852),1)
, useLabel(PS_v2317)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v2322)
,	/* FN_LAMBDA1851: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 3060016
, useLabel(ST_v2321)
,	/* CT_v2322: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1851: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1851),1)
, useLabel(PS_v2320)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2334)
,	/* FN_LAMBDA1850: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v2329: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v2326: (byte 2) */
  bytes2word(40,0,UNPACK,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_INT_P1,1)
, bytes2word(PUSH_P1,0,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(2,EVAL,POP_I1,PUSH_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,12,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
,	/* v2323: (byte 4) */
  bytes2word(HEAP_I1,HEAP_P1,3,RETURN)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2333)
, 0
, 0
, 0
, 0
, useLabel(PS_v2332)
, 0
, 0
, 0
, 0
, useLabel(PS_v2331)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2330)
, 0
, 0
, 0
, 0
, 0
, useLabel(ST_v2328)
,	/* CT_v2334: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA1850: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1850),2)
, useLabel(PS_v2327)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_LAMBDA1849))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v2338)
,	/* FN_LAMBDA1849: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2337)
, 3050037
, useLabel(ST_v2336)
,	/* CT_v2338: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1849: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1849))
, useLabel(PS_v2335)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v2349)
,	/* FN_LAMBDA1848: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v2344: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v2342: (byte 2) */
  bytes2word(21,0,POP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
,	/* v2339: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2348)
, 0
, 0
, 0
, 0
, useLabel(PS_v2347)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2346)
, 0
, 0
, 0
, 0
, useLabel(PS_v2345)
, 0
, 0
, 0
, 0
, 0
, useLabel(ST_v2328)
,	/* CT_v2349: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA1848: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1848),1)
, useLabel(PS_v2343)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1847))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v2353)
,	/* FN_LAMBDA1847: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2352)
, 3020023
, useLabel(ST_v2351)
,	/* CT_v2353: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1847: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1847))
, useLabel(PS_v2350)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2360)
,	/* FN_NHC_46Observe_46sendEnterPacket: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,19,HEAP_OFF_N1)
, bytes2word(14,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(13,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2359)
, 0
, 0
, 0
, 0
, useLabel(PS_v2358)
, 0
, 0
, 0
, 0
, useLabel(PS_v2357)
, 0
, 0
, 0
, 0
, useLabel(PS_v2356)
, 0
, 0
, 0
, 0
, 2840001
, useLabel(ST_v2355)
,	/* CT_v2360: (byte 0) */
  HW(6,3)
, 0
,	/* F0_NHC_46Observe_46sendEnterPacket: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46sendEnterPacket),3)
, useLabel(PS_v2354)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46IOExtras_46readIORef))
, useLabel(CF_NHC_46Observe_46observeGlobal)
, CAPTAG(useLabel(FN_LAMBDA1858),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46_36))
, useLabel(F0_NHC_46Internal_46unsafePerformIO)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v2374)
,	/* FN_LAMBDA1858: (byte 0) */
  bytes2word(NEEDHEAP_P1,89,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,4,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,4)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_ARG,4,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,4,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,31)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,14)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,15,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,16)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,17,HEAP_CVAL_N1)
, bytes2word(52,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,18,HEAP_OFF_N1,13)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,19)
, bytes2word(HEAP_CVAL_N1,57,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,33,HEAP_OFF_N1)
, bytes2word(14,HEAP_CVAL_P1,19,HEAP_CVAL_N1)
, bytes2word(57,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,60,HEAP_OFF_N1,13)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,19,HEAP_CVAL_N1)
, bytes2word(57,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,86,HEAP_OFF_N1,13)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2373)
, 0
, 0
, 0
, 0
, useLabel(PS_v2372)
, 0
, 0
, 0
, 0
, useLabel(PS_v2371)
, 0
, 0
, 0
, 0
, useLabel(PS_v2370)
, 0
, 0
, 0
, 0
, useLabel(PS_v2369)
, 0
, 0
, 0
, 0
, useLabel(PS_v2368)
, 0
, 0
, 0
, 0
, useLabel(PS_v2367)
, 0
, 0
, 0
, 0
, useLabel(PS_v2366)
, 0
, 0
, 0
, 0
, useLabel(PS_v2365)
, 0
, 0
, 0
, 0
, useLabel(PS_v2364)
, 0
, 0
, 0
, 0
, useLabel(PS_v2363)
, 0
, 0
, 0
, 0
, 2850016
, useLabel(ST_v2362)
,	/* CT_v2374: (byte 0) */
  HW(13,4)
, 0
,	/* F0_LAMBDA1858: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1858),4)
, useLabel(PS_v2361)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1855))
, VAPTAG(useLabel(FN_NHC_46Observe_46observeUniq))
, VAPTAG(useLabel(FN_LAMBDA1857))
, VAPTAG(useLabel(FN_NHC_46IOExtras_46writeIORef))
, useLabel(CF_NHC_46Observe_46observeGlobal)
, VAPTAG(useLabel(FN_NHC_46Observe_46observeHandle))
, VAPTAG(useLabel(FN_NHC_46Observe_46xmlEnter))
, VAPTAG(useLabel(FN_IO_46hPutStrLn))
, VAPTAG(useLabel(FN_NHC_46Observe_46observer))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Observe_46ourCatchAll))
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2386)
,	/* FN_LAMBDA1857: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v2381: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v2378: (byte 2) */
  bytes2word(40,0,UNPACK,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_INT_P1,1)
, bytes2word(PUSH_P1,0,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(2,EVAL,POP_I1,PUSH_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,12,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
,	/* v2375: (byte 4) */
  bytes2word(HEAP_I1,HEAP_P1,3,RETURN)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2385)
, 0
, 0
, 0
, 0
, useLabel(PS_v2384)
, 0
, 0
, 0
, 0
, useLabel(PS_v2383)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2382)
, 0
, 0
, 0
, 0
, 0
, useLabel(ST_v2380)
,	/* CT_v2386: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA1857: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1857),2)
, useLabel(PS_v2379)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_LAMBDA1856))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v2390)
,	/* FN_LAMBDA1856: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2389)
, 2910037
, useLabel(ST_v2388)
,	/* CT_v2390: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1856: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1856))
, useLabel(PS_v2387)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v2401)
,	/* FN_LAMBDA1855: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v2396: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v2394: (byte 2) */
  bytes2word(21,0,POP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
,	/* v2391: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2400)
, 0
, 0
, 0
, 0
, useLabel(PS_v2399)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2398)
, 0
, 0
, 0
, 0
, useLabel(PS_v2397)
, 0
, 0
, 0
, 0
, 0
, useLabel(ST_v2380)
,	/* CT_v2401: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA1855: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1855),1)
, useLabel(PS_v2395)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1854))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v2404)
,	/* FN_LAMBDA1854: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2352)
, 2880023
, useLabel(ST_v2403)
,	/* CT_v2404: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1854: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1854))
, useLabel(PS_v2402)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2411)
,};
Node FN_NHC_46Observe_46sendObservePacket[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,2,3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,19,HEAP_OFF_N1)
, bytes2word(14,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(13,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2410)
, 0
, 0
, 0
, 0
, useLabel(PS_v2409)
, 0
, 0
, 0
, 0
, useLabel(PS_v2408)
, 0
, 0
, 0
, 0
, useLabel(PS_v2407)
, 0
, 0
, 0
, 0
, 2690001
, useLabel(ST_v2406)
,	/* CT_v2411: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_NHC_46Observe_46sendObservePacket[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46sendObservePacket),3)
, useLabel(PS_v2405)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46IOExtras_46readIORef))
, useLabel(CF_NHC_46Observe_46observeGlobal)
, CAPTAG(useLabel(FN_LAMBDA1865),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46_36))
, useLabel(F0_NHC_46Internal_46unsafePerformIO)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v2431)
,	/* FN_LAMBDA1865: (byte 0) */
  bytes2word(NEEDHEAP_P1,128,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,4,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,4)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_ARG,4,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_INT_P1,1,HEAP_CVAL_P1)
, bytes2word(15,HEAP_CVAL_N1,42,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,24)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,46)
, bytes2word(HEAP_INT_P1,0,HEAP_CVAL_P1,16)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,14,HEAP_CVAL_P1)
, bytes2word(17,HEAP_CVAL_N1,52,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,20)
, bytes2word(HEAP_CVAL_P1,18,HEAP_CVAL_N1,57)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_P1,19,HEAP_CVAL_N1)
, bytes2word(62,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,20,HEAP_CVAL_N1,67)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(21,HEAP_CVAL_N1,72,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,83)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,14)
, bytes2word(HEAP_OFF_N1,32,HEAP_CVAL_P1,22)
, bytes2word(HEAP_CVAL_N1,77,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,32,HEAP_OFF_N1)
, bytes2word(15,HEAP_CVAL_P1,23,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,51,HEAP_CVAL_P1,24)
, bytes2word(HEAP_CVAL_N1,87,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(12,HEAP_CVAL_P1,24,HEAP_CVAL_N1)
, bytes2word(87,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,99,HEAP_OFF_N1,13)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,24,HEAP_CVAL_N1)
, bytes2word(87,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,125,HEAP_OFF_N1,13)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2430)
, 0
, 0
, 0
, 0
, useLabel(PS_v2429)
, 0
, 0
, 0
, 0
, useLabel(PS_v2428)
, 0
, 0
, 0
, 0
, useLabel(PS_v2427)
, 0
, 0
, 0
, 0
, useLabel(PS_v2426)
, 0
, 0
, 0
, 0
, useLabel(PS_v2425)
, 0
, 0
, 0
, 0
, useLabel(PS_v2424)
, 0
, 0
, 0
, 0
, useLabel(PS_v2423)
, 0
, 0
, 0
, 0
, useLabel(PS_v2422)
, 0
, 0
, 0
, 0
, useLabel(PS_v2421)
, 0
, 0
, 0
, 0
, useLabel(PS_v2420)
, 0
, 0
, 0
, 0
, useLabel(PS_v2419)
, 0
, 0
, 0
, 0
, useLabel(PS_v2418)
, 0
, 0
, 0
, 0
, useLabel(PS_v2417)
, 0
, 0
, 0
, 0
, useLabel(PS_v2416)
, 0
, 0
, 0
, 0
, useLabel(PS_v2415)
, 0
, 0
, 0
, 0
, useLabel(PS_v2414)
, 0
, 0
, 0
, 0
, 2700016
, useLabel(ST_v2413)
,	/* CT_v2431: (byte 0) */
  HW(18,4)
, 0
,	/* F0_LAMBDA1865: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1865),4)
, useLabel(PS_v2412)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1860))
, VAPTAG(useLabel(FN_NHC_46Observe_46observeUniq))
, VAPTAG(useLabel(FN_LAMBDA1862))
, VAPTAG(useLabel(FN_NHC_46IOExtras_46writeIORef))
, useLabel(CF_NHC_46Observe_46observeGlobal)
, VAPTAG(useLabel(FN_NHC_46Observe_46runMO))
, VAPTAG(useLabel(FN_NHC_46Observe_46observeDepth))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, VAPTAG(useLabel(FN_LAMBDA1863))
, VAPTAG(useLabel(FN_LAMBDA1864))
, VAPTAG(useLabel(FN_NHC_46Observe_46observeHandle))
, VAPTAG(useLabel(FN_NHC_46Observe_46showXmlString))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Observe_46xmlCons))
, VAPTAG(useLabel(FN_IO_46hPutStrLn))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(1,0,0,1)
, useLabel(CT_v2434)
,	/* FN_LAMBDA1864: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 2770018
, useLabel(ST_v2433)
,	/* CT_v2434: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1864: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1864),1)
, useLabel(PS_v2432)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v2437)
,	/* FN_LAMBDA1863: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 2770016
, useLabel(ST_v2436)
,	/* CT_v2437: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1863: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1863),1)
, useLabel(PS_v2435)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2449)
,	/* FN_LAMBDA1862: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v2444: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v2441: (byte 2) */
  bytes2word(40,0,UNPACK,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_INT_P1,1)
, bytes2word(PUSH_P1,0,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(2,EVAL,POP_I1,PUSH_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,12,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
,	/* v2438: (byte 4) */
  bytes2word(HEAP_I1,HEAP_P1,3,RETURN)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2448)
, 0
, 0
, 0
, 0
, useLabel(PS_v2447)
, 0
, 0
, 0
, 0
, useLabel(PS_v2446)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2445)
, 0
, 0
, 0
, 0
, 0
, useLabel(ST_v2443)
,	/* CT_v2449: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA1862: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1862),2)
, useLabel(PS_v2442)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_LAMBDA1861))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v2453)
,	/* FN_LAMBDA1861: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2452)
, 2760037
, useLabel(ST_v2451)
,	/* CT_v2453: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1861: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1861))
, useLabel(PS_v2450)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v2464)
,	/* FN_LAMBDA1860: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v2459: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v2457: (byte 2) */
  bytes2word(21,0,POP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
,	/* v2454: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2463)
, 0
, 0
, 0
, 0
, useLabel(PS_v2462)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2461)
, 0
, 0
, 0
, 0
, useLabel(PS_v2460)
, 0
, 0
, 0
, 0
, 0
, useLabel(ST_v2443)
,	/* CT_v2464: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA1860: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1860),1)
, useLabel(PS_v2458)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1859))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v2467)
,	/* FN_LAMBDA1859: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2352)
, 2730023
, useLabel(ST_v2466)
,	/* CT_v2467: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1859: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1859))
, useLabel(PS_v2465)
, 0
, 0
, 0
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v2474)
,	/* FN_NHC_46Observe_46generateContext: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,2,1)
, bytes2word(HEAP_ARG_ARG,4,3,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,20)
, bytes2word(HEAP_OFF_N1,15,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v2473)
, 0
, 0
, 0
, 0
, useLabel(PS_v2472)
, 0
, 0
, 0
, 0
, useLabel(PS_v2471)
, 0
, 0
, 0
, 0
, useLabel(PS_v2470)
, 0
, 0
, 0
, 0
, 2500001
, useLabel(ST_v2469)
,	/* CT_v2474: (byte 0) */
  HW(6,4)
, 0
,	/* F0_NHC_46Observe_46generateContext: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46generateContext),4)
, useLabel(PS_v2468)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46IOExtras_46readIORef))
, useLabel(CF_NHC_46Observe_46observeGlobal)
, CAPTAG(useLabel(FN_LAMBDA1869),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46_36))
, useLabel(F0_NHC_46Internal_46unsafePerformIO)
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v2495)
,	/* FN_LAMBDA1869: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG,5,EVAL)
, bytes2word(NEEDHEAP_P1,93,TABLESWITCH,2)
,	/* v2481: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v2478: (byte 4) */
  bytes2word(POP_I1,JUMP,14,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
,	/* v2475: (byte 4) */
  bytes2word(HEAP_SPACE,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,0,HEAP_ARG)
, bytes2word(5,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(5,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(15,HEAP_CVAL_N1,42,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,0)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,16)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,30,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,17,HEAP_CVAL_N1)
, bytes2word(52,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,18)
, bytes2word(HEAP_CVAL_N1,57,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,0,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_P1,19,HEAP_CVAL_N1)
, bytes2word(62,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,18,HEAP_ARG,3)
, bytes2word(HEAP_OFF_N1,14,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(20,HEAP_CVAL_N1,67,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,39)
, bytes2word(HEAP_OFF_N1,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(20,HEAP_CVAL_N1,67,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,78)
, bytes2word(HEAP_OFF_N1,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2494)
, 0
, 0
, 0
, 0
, useLabel(PS_v2493)
, 0
, 0
, 0
, 0
, useLabel(PS_v2492)
, 0
, 0
, 0
, 0
, useLabel(PS_v2491)
, 0
, 0
, 0
, 0
, useLabel(PS_v2490)
, 0
, 0
, 0
, 0
, useLabel(PS_v2489)
, 0
, 0
, 0
, 0
, useLabel(PS_v2488)
, 0
, 0
, 0
, 0
, useLabel(PS_v2487)
, 0
, 0
, 0
, 0
, useLabel(PS_v2486)
, 0
, 0
, 0
, 0
, useLabel(PS_v2485)
, 0
, 0
, 0
, 0
, useLabel(PS_v2484)
, 0
, 0
, 0
, 0
, useLabel(PS_v2483)
, 0
, 0
, 0
, 0
, useLabel(PS_v2482)
, 0
, 0
, 0
, 0
, 2520016
, useLabel(ST_v2480)
,	/* CT_v2495: (byte 0) */
  HW(14,5)
, 0
,	/* F0_LAMBDA1869: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1869),5)
, useLabel(PS_v2479)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_NHC_46Observe_46observeUniq))
, VAPTAG(useLabel(FN_LAMBDA1867))
, VAPTAG(useLabel(FN_NHC_46IOExtras_46writeIORef))
, useLabel(CF_NHC_46Observe_46observeGlobal)
, VAPTAG(useLabel(FN_NHC_46Observe_46observeHandle))
, VAPTAG(useLabel(FN_NHC_46Observe_46showXmlString))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Observe_46xmlObserve))
, VAPTAG(useLabel(FN_IO_46hPutStrLn))
, VAPTAG(useLabel(FN_NHC_46Observe_46observer))
, VAPTAG(useLabel(FN_LAMBDA1868))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2499)
,	/* FN_LAMBDA1868: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,POP_I1)
, bytes2word(PUSH_ARG_I2,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_INT_P1,0)
, bytes2word(HEAP_ARG,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v2498)
, 0
, 0
, 0
, 0
, CONSTR(0,3,0)
, 0
, 0
, 0
, 0
, 2600045
, useLabel(ST_v2497)
,	/* CT_v2499: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA1868: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1868),2)
, useLabel(PS_v2496)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2511)
,	/* FN_LAMBDA1867: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v2506: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v2503: (byte 2) */
  bytes2word(40,0,UNPACK,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_INT_P1,1)
, bytes2word(PUSH_P1,0,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(2,EVAL,POP_I1,PUSH_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,12,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
,	/* v2500: (byte 4) */
  bytes2word(HEAP_I1,HEAP_P1,3,RETURN)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2510)
, 0
, 0
, 0
, 0
, useLabel(PS_v2509)
, 0
, 0
, 0
, 0
, useLabel(PS_v2508)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2507)
, 0
, 0
, 0
, 0
, 0
, useLabel(ST_v2505)
,	/* CT_v2511: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA1867: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1867),2)
, useLabel(PS_v2504)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_LAMBDA1866))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v2515)
,	/* FN_LAMBDA1866: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2514)
, 2570048
, useLabel(ST_v2513)
,	/* CT_v2515: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1866: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1866))
, useLabel(PS_v2512)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2519)
,	/* FN_NHC_46Observe_46observer_95: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2518)
, 0
, 0
, 0
, 0
, 660001
, useLabel(ST_v2517)
,	/* CT_v2519: (byte 0) */
  HW(1,3)
, 0
,	/* F0_NHC_46Observe_46observer_95: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46observer_95),3)
, useLabel(PS_v2516)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46sendEnterPacket))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2525)
,};
Node FN_NHC_46Observe_46thunk[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2524)
, 0
, 0
, 0
, 0
, useLabel(PS_v2523)
, 0
, 0
, 0
, 0
, useLabel(PS_v2522)
, 0
, 0
, 0
, 0
, 2370001
, useLabel(ST_v2521)
,	/* CT_v2525: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46Observe_46thunk[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46thunk),2)
, useLabel(PS_v2520)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA1870),1)
, CAPTAG(useLabel(FN_LAMBDA1872),3)
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v2532)
,	/* FN_LAMBDA1872: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,4,5,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_OFF_N1)
, bytes2word(15,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,5,HEAP_INT_P1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,20,HEAP_OFF_N1,13)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2531)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2530)
, 0
, 0
, 0
, 0
, useLabel(PS_v2529)
, 0
, 0
, 0
, 0
, useLabel(PS_v2528)
, 0
, 0
, 0
, 0
, 2370027
, useLabel(ST_v2527)
,	/* CT_v2532: (byte 0) */
  HW(3,5)
, 0
,	/* F0_LAMBDA1872: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1872),5)
, useLabel(PS_v2526)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1871))
, VAPTAG(useLabel(FN_NHC_46Observe_46observer_95))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2536)
,	/* FN_LAMBDA1871: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,POP_I1)
, bytes2word(PUSH_ARG_I2,EVAL,POP_I1,PUSH_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2535)
, 0
, 0
, 0
, 0
, CONSTR(0,3,0)
, 0
, 0
, 0
, 0
, 2380032
, useLabel(ST_v2534)
,	/* CT_v2536: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA1871: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1871),3)
, useLabel(PS_v2533)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v2540)
,	/* FN_LAMBDA1870: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2539)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 2370011
, useLabel(ST_v2538)
,	/* CT_v2540: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1870: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1870),1)
, useLabel(PS_v2537)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2545)
,};
Node FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,2,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2544)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2543)
, 0
, 0
, 0
, 0
, 2310009
, useLabel(ST_v2542)
,	/* CT_v2545: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61),2)
, useLabel(PS_v2541)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA1873),3)
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v2553)
,	/* FN_LAMBDA1873: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_ARG,5,PUSH_ARG)
, bytes2word(4,PUSH_ARG_I3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(ZAP_ARG_I2,ZAP_ARG,5,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,3,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,PUSH_I1)
, bytes2word(PUSH_ARG,4,PUSH_ARG_I3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I3,ZAP_ARG,4)
, bytes2word(ZAP_STACK_P1,5,ZAP_STACK_P1,4)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2552)
, 0
, 0
, 0
, 0
, useLabel(PS_v2550)
, 0
, 0
, 0
, 0
, 2310035
, useLabel(ST_v2549)
,	/* CT_v2553: (byte 0) */
  HW(2,5)
, 0
,	/* F0_LAMBDA1873: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1873),5)
, useLabel(PS_v2548)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46runMO))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(1,0,0,1)
, useLabel(CT_v2558)
,};
Node FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2557)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2556)
, 0
, 0
, 0
, 0
, 2300009
, useLabel(ST_v2555)
,	/* CT_v2558: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return),1)
, useLabel(PS_v2554)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA1874),3)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v2562)
,	/* FN_LAMBDA1874: (byte 0) */
  bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v2561)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 2300035
, useLabel(ST_v2560)
,	/* CT_v2562: (byte 0) */
  HW(0,4)
, 0
,	/* F0_LAMBDA1874: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1874),4)
, useLabel(PS_v2559)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v2566)
,};
Node FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46fail[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2565)
, 0
, 0
, 0
, 0
, 2290010
, useLabel(ST_v2564)
,	/* CT_v2566: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46fail[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46fail),1)
, useLabel(PS_v2563)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46fail))
, useLabel(CF_Prelude_46Monad_46NHC_46Observe_46MonadObserver)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2570)
,};
Node FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2569)
, 0
, 0
, 0
, 0
, 2290010
, useLabel(ST_v2568)
,	/* CT_v2570: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62),2)
, useLabel(PS_v2567)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_62))
, useLabel(CF_Prelude_46Monad_46NHC_46Observe_46MonadObserver)
, bytes2word(0,0,0,0)
, useLabel(CT_v2574)
,	/* FN_NHC_46Observe_46_60_36_60: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2573)
, 0
, 0
, 0
, 0
, 2270002
, useLabel(ST_v2572)
,	/* CT_v2574: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Observe_46_60_36_60: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Observe_46_60_36_60))
, useLabel(PS_v2571)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Monad_46ap))
, useLabel(CF_Prelude_46Monad_46NHC_46Observe_46MonadObserver)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v2578)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46_45_62_46observer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,2,1)
, bytes2word(HEAP_ARG_ARG,3,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2577)
, 0
, 0
, 0
, 0
, 1620009
, useLabel(ST_v2576)
,	/* CT_v2578: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_46_45_62_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46_45_62_46observer),4)
, useLabel(PS_v2575)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA1877),1)
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v2582)
,	/* FN_LAMBDA1877: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2581)
, 0
, 0
, 0
, 0
, 1620009
, useLabel(ST_v2580)
,	/* CT_v2582: (byte 0) */
  HW(1,5)
, 0
,	/* F0_LAMBDA1877: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1877),5)
, useLabel(PS_v2579)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46NHC_46Observe_46Observable_46Prelude_46_45_62_46observer_39451))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v2588)
,	/* FN_NHC_46Observe_46NHC_46Observe_46Observable_46Prelude_46_45_62_46observer_39451: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,2,5,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(3,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,19,HEAP_OFF_N1,13)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,HEAP_ARG,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2587)
, 0
, 0
, 0
, 0
, useLabel(PS_v2586)
, 0
, 0
, 0
, 0
, useLabel(PS_v2585)
, 0
, 0
, 0
, 0
, useLabel(PS_v2584)
, 0
, 0
, 0
, 0
, 1620009
, useLabel(ST_v2580)
,	/* CT_v2588: (byte 0) */
  HW(4,5)
, 0
,	/* F0_NHC_46Observe_46NHC_46Observe_46Observable_46Prelude_46_45_62_46observer_39451: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46NHC_46Observe_46Observable_46Prelude_46_45_62_46observer_39451),5)
, useLabel(PS_v2583)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1876),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, VAPTAG(useLabel(FN_NHC_46Observe_46sendObserveFnPacket))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2595)
,	/* FN_LAMBDA1876: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,17,HEAP_OFF_N1)
, bytes2word(11,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2594)
, 0
, 0
, 0
, 0
, useLabel(PS_v2593)
, 0
, 0
, 0
, 0
, useLabel(PS_v2592)
, 0
, 0
, 0
, 0
, useLabel(PS_v2591)
, 0
, 0
, 0
, 0
, 1630024
, useLabel(ST_v2590)
,	/* CT_v2595: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA1876: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1876),3)
, useLabel(PS_v2589)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1875),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v2599)
,	/* FN_LAMBDA1875: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2598)
, 0
, 0
, 0
, 0
, 1640023
, useLabel(ST_v2597)
,	/* CT_v2599: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA1875: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1875),1)
, useLabel(PS_v2596)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2604)
,};
Node FN_NHC_46Observe_46Observable_46NHC_46Internal_46IO_46observer[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2603)
, 0
, 0
, 0
, 0
, useLabel(PS_v2602)
, 0
, 0
, 0
, 0
, 1550009
, useLabel(ST_v2601)
,	/* CT_v2604: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_NHC_46Observe_46Observable_46NHC_46Internal_46IO_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46NHC_46Internal_46IO_46observer),3)
, useLabel(PS_v2600)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA1880),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2612)
,	/* FN_LAMBDA1880: (byte 0) */
  bytes2word(NEEDHEAP_P1,33,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,3,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,17,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,29,HEAP_OFF_N1)
, bytes2word(13,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2611)
, 0
, 0
, 0
, 0
, useLabel(PS_v2610)
, 0
, 0
, 0
, 0
, useLabel(PS_v2609)
, 0
, 0
, 0
, 0
, useLabel(PS_v2608)
, 0
, 0
, 0
, 0
, useLabel(PS_v2607)
, 0
, 0
, 0
, 0
, 1560027
, useLabel(ST_v2606)
,	/* CT_v2612: (byte 0) */
  HW(5,3)
, 0
,	/* F0_LAMBDA1880: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1880),3)
, useLabel(PS_v2605)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1878))
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1879),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, VAPTAG(useLabel(FN_NHC_46Observe_46sendObservePacket))
, bytes2word(1,0,0,1)
, useLabel(CT_v2617)
,	/* FN_LAMBDA1879: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2616)
, 0
, 0
, 0
, 0
, useLabel(PS_v2615)
, 0
, 0
, 0
, 0
, 1580036
, useLabel(ST_v2614)
,	/* CT_v2617: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA1879: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1879),1)
, useLabel(PS_v2613)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v2621)
,	/* FN_LAMBDA1878: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2620)
, 1570038
, useLabel(ST_v2619)
,	/* CT_v2621: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1878: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1878))
, useLabel(PS_v2618)
, 0
, 0
, 0
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v2626)
,	/* FN_NHC_46Observe_46observerM: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,4,PUSH_P1,0)
, bytes2word(PUSH_ARG_I3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v2625)
, 0
, 0
, 0
, 0
, useLabel(PS_v2624)
, 0
, 0
, 0
, 0
, 1480001
, useLabel(ST_v2623)
,	/* CT_v2626: (byte 0) */
  HW(2,4)
, 0
,	/* F0_NHC_46Observe_46observerM: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46observerM),4)
, useLabel(PS_v2622)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA1883),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v2634)
,	/* FN_LAMBDA1883: (byte 0) */
  bytes2word(NEEDHEAP_P1,34,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,4,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(18,HEAP_OFF_N1,12,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(30,HEAP_OFF_N1,13,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2633)
, 0
, 0
, 0
, 0
, useLabel(PS_v2632)
, 0
, 0
, 0
, 0
, useLabel(PS_v2631)
, 0
, 0
, 0
, 0
, useLabel(PS_v2630)
, 0
, 0
, 0
, 0
, useLabel(PS_v2629)
, 0
, 0
, 0
, 0
, 1490027
, useLabel(ST_v2628)
,	/* CT_v2634: (byte 0) */
  HW(5,4)
, 0
,	/* F0_LAMBDA1883: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1883),4)
, useLabel(PS_v2627)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1881))
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1882),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, VAPTAG(useLabel(FN_NHC_46Observe_46sendObservePacket))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2640)
,	/* FN_LAMBDA1882: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2639)
, 0
, 0
, 0
, 0
, useLabel(PS_v2638)
, 0
, 0
, 0
, 0
, useLabel(PS_v2637)
, 0
, 0
, 0
, 0
, 1510036
, useLabel(ST_v2636)
,	/* CT_v2640: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA1882: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1882),2)
, useLabel(PS_v2635)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46return))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v2644)
,	/* FN_LAMBDA1881: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2643)
, 1500038
, useLabel(ST_v2642)
,	/* CT_v2644: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1881: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1881))
, useLabel(PS_v2641)
, 0
, 0
, 0
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v2654)
,};
Node FN_NHC_46Observe_46Observable_46Array_46Array_46observer[] = {
  bytes2word(NEEDHEAP_P1,51,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,2,2,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(4,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,19,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_ARG_ARG,4)
, bytes2word(1,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,15)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,47,HEAP_OFF_N1,13)
, bytes2word(HEAP_ARG,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2653)
, 0
, 0
, 0
, 0
, useLabel(PS_v2652)
, 0
, 0
, 0
, 0
, useLabel(PS_v2651)
, 0
, 0
, 0
, 0
, useLabel(PS_v2650)
, 0
, 0
, 0
, 0
, useLabel(PS_v2649)
, 0
, 0
, 0
, 0
, useLabel(PS_v2648)
, 0
, 0
, 0
, 0
, useLabel(PS_v2647)
, 0
, 0
, 0
, 0
, 1420009
, useLabel(ST_v2646)
,	/* CT_v2654: (byte 0) */
  HW(7,5)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Array_46Array_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Array_46Array_46observer),5)
, useLabel(PS_v2645)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1884))
, VAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_462))
, VAPTAG(useLabel(FN_Array_46bounds))
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1886),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, VAPTAG(useLabel(FN_NHC_46Observe_46sendObservePacket))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v2663)
,	/* FN_LAMBDA1886: (byte 0) */
  bytes2word(NEEDHEAP_P1,42,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,4,3,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,18)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,4,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,19,HEAP_OFF_N1,13)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2662)
, 0
, 0
, 0
, 0
, useLabel(PS_v2661)
, 0
, 0
, 0
, 0
, useLabel(PS_v2660)
, 0
, 0
, 0
, 0
, useLabel(PS_v2659)
, 0
, 0
, 0
, 0
, useLabel(PS_v2658)
, 0
, 0
, 0
, 0
, useLabel(PS_v2657)
, 0
, 0
, 0
, 0
, 1430026
, useLabel(ST_v2656)
,	/* CT_v2663: (byte 0) */
  HW(6,5)
, 0
,	/* F0_LAMBDA1886: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1886),5)
, useLabel(PS_v2655)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_462))
, VAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Array_46assocs))
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1885),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2668)
,	/* FN_LAMBDA1885: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2667)
, 0
, 0
, 0
, 0
, useLabel(PS_v2666)
, 0
, 0
, 0
, 0
, 1440026
, useLabel(ST_v2665)
,	/* CT_v2668: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA1885: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1885),3)
, useLabel(PS_v2664)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Array_46array))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v2672)
,	/* FN_LAMBDA1884: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2671)
, 1420042
, useLabel(ST_v2670)
,	/* CT_v2672: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1884: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1884))
, useLabel(PS_v2669)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2687)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46Maybe_46observer[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v2674: (byte 2) */
  bytes2word(TOP(43),BOT(43),POP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,21)
, bytes2word(HEAP_OFF_N1,12,HEAP_ARG,3)
,	/* v2675: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,1,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,47)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(29,HEAP_OFF_N1,13,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2686)
, 0
, 0
, 0
, 0
, useLabel(PS_v2685)
, 0
, 0
, 0
, 0
, useLabel(PS_v2684)
, 0
, 0
, 0
, 0
, useLabel(PS_v2683)
, 0
, 0
, 0
, 0
, useLabel(PS_v2682)
, 0
, 0
, 0
, 0
, useLabel(PS_v2681)
, 0
, 0
, 0
, 0
, useLabel(PS_v2680)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2679)
, 0
, 0
, 0
, 0
, 1360009
, useLabel(ST_v2677)
,	/* CT_v2687: (byte 0) */
  HW(7,3)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_46Maybe_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46Maybe_46observer),3)
, useLabel(PS_v2676)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1887))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return))
, VAPTAG(useLabel(FN_NHC_46Observe_46sendObservePacket))
, VAPTAG(useLabel(FN_LAMBDA1888))
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1889),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v2692)
,	/* FN_LAMBDA1889: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2691)
, 0
, 0
, 0
, 0
, useLabel(PS_v2690)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, 1370022
, useLabel(ST_v2689)
,	/* CT_v2692: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA1889: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1889),1)
, useLabel(PS_v2688)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v2696)
,	/* FN_LAMBDA1888: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2695)
, 1360047
, useLabel(ST_v2694)
,	/* CT_v2696: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1888: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1888))
, useLabel(PS_v2693)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2700)
,	/* FN_LAMBDA1887: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2699)
, 1390046
, useLabel(ST_v2698)
,	/* CT_v2700: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1887: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1887))
, useLabel(PS_v2697)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2715)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46_91_93_46observer[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_P1)
, bytes2word(34,TABLESWITCH,2,NOP)
,	/* v2702: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(43),BOT(43))
, bytes2word(POP_I1,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,12)
,	/* v2703: (byte 3) */
  bytes2word(HEAP_ARG,3,RETURN_EVAL,UNPACK)
, bytes2word(2,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,42,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,19,HEAP_OFF_N1,13)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,31,HEAP_OFF_N1,13)
, bytes2word(HEAP_ARG,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2714)
, 0
, 0
, 0
, 0
, useLabel(PS_v2713)
, 0
, 0
, 0
, 0
, useLabel(PS_v2712)
, 0
, 0
, 0
, 0
, useLabel(PS_v2711)
, 0
, 0
, 0
, 0
, useLabel(PS_v2710)
, 0
, 0
, 0
, 0
, useLabel(PS_v2709)
, 0
, 0
, 0
, 0
, useLabel(PS_v2708)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2707)
, 0
, 0
, 0
, 0
, 1290009
, useLabel(ST_v2705)
,	/* CT_v2715: (byte 0) */
  HW(7,3)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_46_91_93_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46_91_93_46observer),3)
, useLabel(PS_v2704)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1890))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return))
, VAPTAG(useLabel(FN_NHC_46Observe_46sendObservePacket))
, VAPTAG(useLabel(FN_LAMBDA1891))
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1893),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2722)
,	/* FN_LAMBDA1893: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,18)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v2721)
, 0
, 0
, 0
, 0
, useLabel(PS_v2720)
, 0
, 0
, 0
, 0
, useLabel(PS_v2719)
, 0
, 0
, 0
, 0
, useLabel(PS_v2718)
, 0
, 0
, 0
, 0
, 1300022
, useLabel(ST_v2717)
,	/* CT_v2722: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA1893: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1893),3)
, useLabel(PS_v2716)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1892),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2727)
,	/* FN_LAMBDA1892: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2726)
, 0
, 0
, 0
, 0
, useLabel(PS_v2725)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, 1310023
, useLabel(ST_v2724)
,	/* CT_v2727: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA1892: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1892),2)
, useLabel(PS_v2723)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v2731)
,	/* FN_LAMBDA1891: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2730)
, 1290045
, useLabel(ST_v2729)
,	/* CT_v2731: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1891: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1891))
, useLabel(PS_v2728)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2735)
,	/* FN_LAMBDA1890: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2734)
, 1330041
, useLabel(ST_v2733)
,	/* CT_v2735: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1890: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1890))
, useLabel(PS_v2732)
, 0
, 0
, 0
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v2746)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_465_46observer[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(NEEDHEAP_P1,40,UNPACK,5)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_I1)
, bytes2word(HEAP_ARG,3,HEAP_I2,HEAP_ARG)
, bytes2word(4,HEAP_P1,3,HEAP_ARG)
, bytes2word(5,HEAP_P1,4,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,25)
, bytes2word(HEAP_OFF_N1,19,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,37)
, bytes2word(HEAP_OFF_N1,13,HEAP_ARG,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2745)
, 0
, 0
, 0
, 0
, useLabel(PS_v2744)
, 0
, 0
, 0
, 0
, useLabel(PS_v2743)
, 0
, 0
, 0
, 0
, useLabel(PS_v2742)
, 0
, 0
, 0
, 0
, useLabel(PS_v2741)
, 0
, 0
, 0
, 0
, 1200009
, useLabel(ST_v2739)
,	/* CT_v2746: (byte 0) */
  HW(5,7)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_465_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_465_46observer),7)
, useLabel(PS_v2738)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1894))
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1899),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, VAPTAG(useLabel(FN_NHC_46Observe_46sendObservePacket))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v2752)
,	/* FN_LAMBDA1899: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG_ARG,7,8,HEAP_ARG)
, bytes2word(9,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,24,HEAP_OFF_N1)
, bytes2word(18,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2751)
, 0
, 0
, 0
, 0
, useLabel(PS_v2750)
, 0
, 0
, 0
, 0
, useLabel(PS_v2749)
, 0
, 0
, 0
, 0
, 1210022
, useLabel(ST_v2748)
,	/* CT_v2752: (byte 0) */
  HW(3,9)
, 0
,	/* F0_LAMBDA1899: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1899),9)
, useLabel(PS_v2747)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1898),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v2758)
,	/* FN_LAMBDA1898: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG_ARG,7,8,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(23,HEAP_OFF_N1,17,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2757)
, 0
, 0
, 0
, 0
, useLabel(PS_v2756)
, 0
, 0
, 0
, 0
, useLabel(PS_v2755)
, 0
, 0
, 0
, 0
, 1220022
, useLabel(ST_v2754)
,	/* CT_v2758: (byte 0) */
  HW(3,8)
, 0
,	/* F0_LAMBDA1898: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1898),8)
, useLabel(PS_v2753)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1897),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v2764)
,	/* FN_LAMBDA1897: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,22)
, bytes2word(HEAP_OFF_N1,16,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2763)
, 0
, 0
, 0
, 0
, useLabel(PS_v2762)
, 0
, 0
, 0
, 0
, useLabel(PS_v2761)
, 0
, 0
, 0
, 0
, 1230022
, useLabel(ST_v2760)
,	/* CT_v2764: (byte 0) */
  HW(3,7)
, 0
,	/* F0_LAMBDA1897: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1897),7)
, useLabel(PS_v2759)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1896),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v2770)
,	/* FN_LAMBDA1896: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,15)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2769)
, 0
, 0
, 0
, 0
, useLabel(PS_v2768)
, 0
, 0
, 0
, 0
, useLabel(PS_v2767)
, 0
, 0
, 0
, 0
, 1240022
, useLabel(ST_v2766)
,	/* CT_v2770: (byte 0) */
  HW(3,6)
, 0
,	/* F0_LAMBDA1896: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1896),6)
, useLabel(PS_v2765)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1895),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v2775)
,	/* FN_LAMBDA1895: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,15,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2774)
, 0
, 0
, 0
, 0
, useLabel(PS_v2773)
, 0
, 0
, 0
, 0
, CONSTR(0,5,0)
, 0
, 0
, 0
, 0
, 1250022
, useLabel(ST_v2772)
,	/* CT_v2775: (byte 0) */
  HW(1,5)
, 0
,	/* F0_LAMBDA1895: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1895),5)
, useLabel(PS_v2771)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v2779)
,	/* FN_LAMBDA1894: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2778)
, 1200050
, useLabel(ST_v2777)
,	/* CT_v2779: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1894: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1894))
, useLabel(PS_v2776)
, 0
, 0
, 0
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v2790)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_464_46observer[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(NEEDHEAP_P1,38,UNPACK,4)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_I1)
, bytes2word(HEAP_ARG,3,HEAP_I2,HEAP_ARG)
, bytes2word(4,HEAP_P1,3,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,23)
, bytes2word(HEAP_OFF_N1,17,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,35)
, bytes2word(HEAP_OFF_N1,13,HEAP_ARG,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2789)
, 0
, 0
, 0
, 0
, useLabel(PS_v2788)
, 0
, 0
, 0
, 0
, useLabel(PS_v2787)
, 0
, 0
, 0
, 0
, useLabel(PS_v2786)
, 0
, 0
, 0
, 0
, useLabel(PS_v2785)
, 0
, 0
, 0
, 0
, 1110009
, useLabel(ST_v2783)
,	/* CT_v2790: (byte 0) */
  HW(5,6)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_464_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_464_46observer),6)
, useLabel(PS_v2782)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1900))
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1904),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, VAPTAG(useLabel(FN_NHC_46Observe_46sendObservePacket))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v2796)
,	/* FN_LAMBDA1904: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,22)
, bytes2word(HEAP_OFF_N1,16,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2795)
, 0
, 0
, 0
, 0
, useLabel(PS_v2794)
, 0
, 0
, 0
, 0
, useLabel(PS_v2793)
, 0
, 0
, 0
, 0
, 1120022
, useLabel(ST_v2792)
,	/* CT_v2796: (byte 0) */
  HW(3,7)
, 0
,	/* F0_LAMBDA1904: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1904),7)
, useLabel(PS_v2791)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1903),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v2802)
,	/* FN_LAMBDA1903: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,15)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2801)
, 0
, 0
, 0
, 0
, useLabel(PS_v2800)
, 0
, 0
, 0
, 0
, useLabel(PS_v2799)
, 0
, 0
, 0
, 0
, 1130022
, useLabel(ST_v2798)
,	/* CT_v2802: (byte 0) */
  HW(3,6)
, 0
,	/* F0_LAMBDA1903: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1903),6)
, useLabel(PS_v2797)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1902),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v2808)
,	/* FN_LAMBDA1902: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(20,HEAP_OFF_N1,14,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2807)
, 0
, 0
, 0
, 0
, useLabel(PS_v2806)
, 0
, 0
, 0
, 0
, useLabel(PS_v2805)
, 0
, 0
, 0
, 0
, 1140022
, useLabel(ST_v2804)
,	/* CT_v2808: (byte 0) */
  HW(3,5)
, 0
,	/* F0_LAMBDA1902: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1902),5)
, useLabel(PS_v2803)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1901),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v2813)
,	/* FN_LAMBDA1901: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,14)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2812)
, 0
, 0
, 0
, 0
, useLabel(PS_v2811)
, 0
, 0
, 0
, 0
, CONSTR(0,4,0)
, 0
, 0
, 0
, 0
, 1150022
, useLabel(ST_v2810)
,	/* CT_v2813: (byte 0) */
  HW(1,4)
, 0
,	/* F0_LAMBDA1901: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1901),4)
, useLabel(PS_v2809)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v2816)
,	/* FN_LAMBDA1900: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2778)
, 1110048
, useLabel(ST_v2815)
,	/* CT_v2816: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1900: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1900))
, useLabel(PS_v2814)
, 0
, 0
, 0
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v2827)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_463_46observer[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_P1,36,UNPACK,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_I1)
, bytes2word(HEAP_ARG,3,HEAP_I2,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,21)
, bytes2word(HEAP_OFF_N1,15,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,33)
, bytes2word(HEAP_OFF_N1,13,HEAP_ARG,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2826)
, 0
, 0
, 0
, 0
, useLabel(PS_v2825)
, 0
, 0
, 0
, 0
, useLabel(PS_v2824)
, 0
, 0
, 0
, 0
, useLabel(PS_v2823)
, 0
, 0
, 0
, 0
, useLabel(PS_v2822)
, 0
, 0
, 0
, 0
, 1040009
, useLabel(ST_v2820)
,	/* CT_v2827: (byte 0) */
  HW(5,5)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_463_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_463_46observer),5)
, useLabel(PS_v2819)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1905))
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1908),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, VAPTAG(useLabel(FN_NHC_46Observe_46sendObservePacket))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v2833)
,	/* FN_LAMBDA1908: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(20,HEAP_OFF_N1,14,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2832)
, 0
, 0
, 0
, 0
, useLabel(PS_v2831)
, 0
, 0
, 0
, 0
, useLabel(PS_v2830)
, 0
, 0
, 0
, 0
, 1050022
, useLabel(ST_v2829)
,	/* CT_v2833: (byte 0) */
  HW(3,5)
, 0
,	/* F0_LAMBDA1908: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1908),5)
, useLabel(PS_v2828)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1907),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v2839)
,	/* FN_LAMBDA1907: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,19,HEAP_OFF_N1)
, bytes2word(13,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2838)
, 0
, 0
, 0
, 0
, useLabel(PS_v2837)
, 0
, 0
, 0
, 0
, useLabel(PS_v2836)
, 0
, 0
, 0
, 0
, 1060022
, useLabel(ST_v2835)
,	/* CT_v2839: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA1907: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1907),4)
, useLabel(PS_v2834)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, CAPTAG(useLabel(FN_LAMBDA1906),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2844)
,	/* FN_LAMBDA1906: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2843)
, 0
, 0
, 0
, 0
, useLabel(PS_v2842)
, 0
, 0
, 0
, 0
, CONSTR(0,3,0)
, 0
, 0
, 0
, 0
, 1070022
, useLabel(ST_v2841)
,	/* CT_v2844: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA1906: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1906),3)
, useLabel(PS_v2840)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v2847)
,	/* FN_LAMBDA1905: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2778)
, 1040046
, useLabel(ST_v2846)
,	/* CT_v2847: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1905: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1905))
, useLabel(PS_v2845)
, 0
, 0
, 0
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v2860)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_462_46observer[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(64,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,28)
, bytes2word(HEAP_OFF_N1,19,HEAP_OFF_N1,14)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_I1,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,48,HEAP_OFF_N1)
, bytes2word(21,HEAP_OFF_N1,14,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(61,HEAP_OFF_N1,14,HEAP_ARG)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2859)
, 0
, 0
, 0
, 0
, useLabel(PS_v2858)
, 0
, 0
, 0
, 0
, useLabel(PS_v2857)
, 0
, 0
, 0
, 0
, useLabel(PS_v2856)
, 0
, 0
, 0
, 0
, useLabel(PS_v2855)
, 0
, 0
, 0
, 0
, useLabel(PS_v2854)
, 0
, 0
, 0
, 0
, useLabel(PS_v2853)
, 0
, 0
, 0
, 0
, 1000009
, useLabel(ST_v2851)
,	/* CT_v2860: (byte 0) */
  HW(7,4)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_462_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_462_46observer),4)
, useLabel(PS_v2850)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1909))
, VAPTAG(useLabel(FN_NHC_46Observe_46_60_36_60))
, CAPTAG(useLabel(FN_LAMBDA1910),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return))
, VAPTAG(useLabel(FN_NHC_46Observe_46thunk))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_NHC_46Observe_46sendObservePacket))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2864)
,	/* FN_LAMBDA1910: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2863)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 1010025
, useLabel(ST_v2862)
,	/* CT_v2864: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA1910: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1910),2)
, useLabel(PS_v2861)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2867)
,	/* FN_LAMBDA1909: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2778)
, 1000044
, useLabel(ST_v2866)
,	/* CT_v2867: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1909: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1909))
, useLabel(PS_v2865)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2876)
,	/* FN_NHC_46Observe_46observeLit: (byte 0) */
  bytes2word(NEEDHEAP_P1,41,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(18,HEAP_OFF_N1,12,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,38,HEAP_OFF_N1)
, bytes2word(14,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2875)
, 0
, 0
, 0
, 0
, useLabel(PS_v2874)
, 0
, 0
, 0
, 0
, useLabel(PS_v2873)
, 0
, 0
, 0
, 0
, useLabel(PS_v2872)
, 0
, 0
, 0
, 0
, useLabel(PS_v2871)
, 0
, 0
, 0
, 0
, useLabel(PS_v2870)
, 0
, 0
, 0
, 0
, 930001
, useLabel(ST_v2869)
,	/* CT_v2876: (byte 0) */
  HW(6,3)
, 0
,	/* F0_NHC_46Observe_46observeLit: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Observe_46observeLit),3)
, useLabel(PS_v2868)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46seq),1)
, VAPTAG(useLabel(FN_Prelude_46show))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return))
, VAPTAG(useLabel(FN_NHC_46Observe_46sendObservePacket))
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2880)
,};
Node FN_NHC_46Observe_46Observable_46_40_41_46observer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2879)
, 0
, 0
, 0
, 0
, 890041
, useLabel(ST_v2878)
,	/* CT_v2880: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46Observe_46Observable_46_40_41_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46_40_41_46observer),2)
, useLabel(PS_v2877)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46observeLit))
, useLabel(CF_Prelude_46Show_46_40_41)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2884)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46Char_46observer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2883)
, 0
, 0
, 0
, 0
, 880041
, useLabel(ST_v2882)
,	/* CT_v2884: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_46Char_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46Char_46observer),2)
, useLabel(PS_v2881)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46observeLit))
, useLabel(CF_Prelude_46Show_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2888)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46Double_46observer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2887)
, 0
, 0
, 0
, 0
, 870041
, useLabel(ST_v2886)
,	/* CT_v2888: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_46Double_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46Double_46observer),2)
, useLabel(PS_v2885)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46observeLit))
, useLabel(CF_Prelude_46Show_46Prelude_46Double)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2892)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46Float_46observer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2891)
, 0
, 0
, 0
, 0
, 860041
, useLabel(ST_v2890)
,	/* CT_v2892: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_46Float_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46Float_46observer),2)
, useLabel(PS_v2889)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46observeLit))
, useLabel(CF_Prelude_46Show_46Prelude_46Float)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2896)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46Integer_46observer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2895)
, 0
, 0
, 0
, 0
, 850041
, useLabel(ST_v2894)
,	/* CT_v2896: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_46Integer_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46Integer_46observer),2)
, useLabel(PS_v2893)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46observeLit))
, useLabel(CF_Prelude_46Show_46Prelude_46Integer)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2900)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46Bool_46observer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2899)
, 0
, 0
, 0
, 0
, 840041
, useLabel(ST_v2898)
,	/* CT_v2900: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_46Bool_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46Bool_46observer),2)
, useLabel(PS_v2897)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46observeLit))
, useLabel(CF_Prelude_46Show_46Prelude_46Bool)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2904)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46Int_46observer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2903)
, 0
, 0
, 0
, 0
, 830041
, useLabel(ST_v2902)
,	/* CT_v2904: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_46Int_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46Int_46observer),2)
, useLabel(PS_v2901)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46observeLit))
, useLabel(CF_Prelude_46Show_46Prelude_46Int)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2909)
,};
Node FN_NHC_46Observe_46_95_46observer[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,ZAP_ARG_I2,ZAP_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2908)
, 0
, 0
, 0
, 0
, useLabel(PS_v2907)
, 0
, 0
, 0
, 0
, 0
, useLabel(ST_v2906)
,	/* CT_v2909: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_NHC_46Observe_46_95_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46_95_46observer),3)
, useLabel(PS_v2905)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA1911))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v2913)
,	/* FN_LAMBDA1911: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v2912)
, 0
, useLabel(ST_v2911)
,	/* CT_v2913: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1911: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1911))
, useLabel(PS_v2910)
, 0
, 0
, 0
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v2917)
,};
Node FN_NHC_46Observe_46observe_95[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,4,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2916)
, 0
, 0
, 0
, 0
, 570001
, useLabel(ST_v2915)
,	/* CT_v2917: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_NHC_46Observe_46observe_95[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46observe_95),4)
, useLabel(PS_v2914)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46generateContext))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2921)
,};
Node FN_NHC_46Observe_46observe[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2920)
, 0
, 0
, 0
, 0
, 540001
, useLabel(ST_v2919)
,	/* CT_v2921: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_NHC_46Observe_46observe[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46observe),3)
, useLabel(PS_v2918)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Observe_46generateContext))
, useLabel(CF_Prelude_46Bounded_46Prelude_46Int_46maxBound)
, bytes2word(1,0,0,1)
, useLabel(CT_v2924)
,};
Node FN_NHC_46Observe_46observer[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 680007
, useLabel(ST_v2923)
,	/* CT_v2924: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46Observe_46observer[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46observer),1)
, useLabel(PS_v2922)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v2928)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46Int[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2927)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 830010
, useLabel(ST_v2926)
,	/* CT_v2928: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46Observe_46Observable_46Prelude_46Int[] = {
  VAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46Int))
, useLabel(PS_v2925)
, 0
, 0
, 0
, useLabel(F0_NHC_46Observe_46Observable_46Prelude_46Int_46observer)
, bytes2word(0,0,0,0)
, useLabel(CT_v2932)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46Bool[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2931)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 840010
, useLabel(ST_v2930)
,	/* CT_v2932: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46Observe_46Observable_46Prelude_46Bool[] = {
  VAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46Bool))
, useLabel(PS_v2929)
, 0
, 0
, 0
, useLabel(F0_NHC_46Observe_46Observable_46Prelude_46Bool_46observer)
, bytes2word(0,0,0,0)
, useLabel(CT_v2936)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46Integer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2935)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 850010
, useLabel(ST_v2934)
,	/* CT_v2936: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46Observe_46Observable_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46Integer))
, useLabel(PS_v2933)
, 0
, 0
, 0
, useLabel(F0_NHC_46Observe_46Observable_46Prelude_46Integer_46observer)
, bytes2word(0,0,0,0)
, useLabel(CT_v2940)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46Float[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2939)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 860010
, useLabel(ST_v2938)
,	/* CT_v2940: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46Observe_46Observable_46Prelude_46Float[] = {
  VAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46Float))
, useLabel(PS_v2937)
, 0
, 0
, 0
, useLabel(F0_NHC_46Observe_46Observable_46Prelude_46Float_46observer)
, bytes2word(0,0,0,0)
, useLabel(CT_v2944)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46Double[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2943)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 870010
, useLabel(ST_v2942)
,	/* CT_v2944: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46Observe_46Observable_46Prelude_46Double[] = {
  VAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46Double))
, useLabel(PS_v2941)
, 0
, 0
, 0
, useLabel(F0_NHC_46Observe_46Observable_46Prelude_46Double_46observer)
, bytes2word(0,0,0,0)
, useLabel(CT_v2948)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46Char[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2947)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 880010
, useLabel(ST_v2946)
,	/* CT_v2948: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46Observe_46Observable_46Prelude_46Char[] = {
  VAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46Char))
, useLabel(PS_v2945)
, 0
, 0
, 0
, useLabel(F0_NHC_46Observe_46Observable_46Prelude_46Char_46observer)
, bytes2word(0,0,0,0)
, useLabel(CT_v2952)
,};
Node FN_NHC_46Observe_46Observable_46_40_41[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2951)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 890010
, useLabel(ST_v2950)
,	/* CT_v2952: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46Observe_46Observable_46_40_41[] = {
  VAPTAG(useLabel(FN_NHC_46Observe_46Observable_46_40_41))
, useLabel(PS_v2949)
, 0
, 0
, 0
, useLabel(F0_NHC_46Observe_46Observable_46_40_41_46observer)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2957)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_462[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,12,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2956)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2955)
, 0
, 0
, 0
, 0
, 990041
, useLabel(ST_v2954)
,	/* CT_v2957: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_462[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_462),2)
, useLabel(PS_v2953)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_462_46observer),2)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2962)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_463[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2961)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2960)
, 0
, 0
, 0
, 0
, 1030054
, useLabel(ST_v2959)
,	/* CT_v2962: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_463[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_463),3)
, useLabel(PS_v2958)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_463_46observer),2)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v2967)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_464[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2966)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2965)
, 0
, 0
, 0
, 0
, 1100067
, useLabel(ST_v2964)
,	/* CT_v2967: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_464[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_464),4)
, useLabel(PS_v2963)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_464_46observer),2)
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v2972)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_465[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2971)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2970)
, 0
, 0
, 0
, 0
, 1190020
, useLabel(ST_v2969)
,	/* CT_v2972: (byte 0) */
  HW(1,5)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_465[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_465),5)
, useLabel(PS_v2968)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_465_46observer),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v2977)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46_91_93[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2976)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2975)
, 0
, 0
, 0
, 0
, 1280028
, useLabel(ST_v2974)
,	/* CT_v2977: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_46_91_93[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46_91_93),1)
, useLabel(PS_v2973)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46_91_93_46observer),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v2982)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46Maybe[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2981)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2980)
, 0
, 0
, 0
, 0
, 1350028
, useLabel(ST_v2979)
,	/* CT_v2982: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_46Maybe[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46Maybe),1)
, useLabel(PS_v2978)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46Maybe_46observer),2)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2987)
,};
Node FN_NHC_46Observe_46Observable_46Array_46Array[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2986)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2985)
, 0
, 0
, 0
, 0
, 1410046
, useLabel(ST_v2984)
,	/* CT_v2987: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Array_46Array[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Array_46Array),3)
, useLabel(PS_v2983)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Array_46Array_46observer),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v2992)
,};
Node FN_NHC_46Observe_46Observable_46NHC_46Internal_46IO[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2991)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2990)
, 0
, 0
, 0
, 0
, 1540028
, useLabel(ST_v2989)
,	/* CT_v2992: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46Observe_46Observable_46NHC_46Internal_46IO[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46NHC_46Internal_46IO),1)
, useLabel(PS_v2988)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46NHC_46Internal_46IO_46observer),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2997)
,};
Node FN_NHC_46Observe_46Observable_46Prelude_46_45_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,12,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2996)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2995)
, 0
, 0
, 0
, 0
, 1610041
, useLabel(ST_v2994)
,	/* CT_v2997: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46Observe_46Observable_46Prelude_46_45_62[] = {
  CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46_45_62),2)
, useLabel(PS_v2993)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_NHC_46Observe_46Observable_46Prelude_46_45_62_46observer),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v3001)
,};
Node FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v3000)
, 0
, 0
, 0
, 0
, CONSTR(0,4,0)
, 0
, 0
, 0
, 0
, 2290010
, useLabel(ST_v2999)
,	/* CT_v3001: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Monad_46NHC_46Observe_46MonadObserver[] = {
  VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Observe_46MonadObserver))
, useLabel(PS_v2998)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
, useLabel(F0_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62)
, useLabel(F0_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46fail)
, useLabel(F0_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
,	/* ST_v2100: (byte 0) */
 	/* ST_v2061: (byte 1) */
 	/* ST_v2092: (byte 3) */
  bytes2word(0,32,0,34)
,	/* ST_v2261: (byte 1) */
  bytes2word(0,38,97,109)
,	/* ST_v2257: (byte 3) */
  bytes2word(112,59,0,38)
, bytes2word(97,112,111,115)
,	/* ST_v2249: (byte 2) */
  bytes2word(59,0,38,103)
,	/* ST_v2253: (byte 3) */
  bytes2word(116,59,0,38)
,	/* ST_v2265: (byte 4) */
  bytes2word(108,116,59,0)
, bytes2word(38,113,117,111)
,	/* ST_v2778: (byte 3) */
  bytes2word(116,59,0,44)
,	/* ST_v2057: (byte 1) */
 	/* ST_v2730: (byte 4) */
  bytes2word(0,47,62,0)
,	/* ST_v2065: (byte 2) */
 	/* ST_v2027: (byte 4) */
  bytes2word(58,0,60,0)
, bytes2word(60,47,111,98)
, bytes2word(115,101,114,118)
, bytes2word(97,116,105,111)
,	/* ST_v1973: (byte 4) */
  bytes2word(110,115,62,0)
, bytes2word(60,63,120,109)
, bytes2word(108,32,118,101)
, bytes2word(114,115,105,111)
, bytes2word(110,61,34,49)
, bytes2word(46,48,34,63)
,	/* ST_v2620: (byte 2) */
  bytes2word(62,0,60,73)
,	/* ST_v1969: (byte 3) */
  bytes2word(79,62,0,60)
, bytes2word(111,98,115,101)
, bytes2word(114,118,97,116)
, bytes2word(105,111,110,115)
, bytes2word(32,104,111,111)
, bytes2word(100,118,101,114)
, bytes2word(115,105,111,110)
, bytes2word(61,34,48,46)
,	/* ST_v2643: (byte 4) */
  bytes2word(49,34,62,0)
, bytes2word(60,114,101,116)
, bytes2word(117,114,110,62)
,	/* ST_v2096: (byte 1) */
 	/* ST_v2695: (byte 4) */
  bytes2word(0,61,34,0)
, bytes2word(74,117,115,116)
, bytes2word(0,0,0,0)
,};
Node PM_NHC_46Observe[] = {
 	/* ST_v1927: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
,	/* PP_NHC_46Observe_46_60_36_60: (byte 4) */
 	/* PC_NHC_46Observe_46_60_36_60: (byte 4) */
 	/* ST_v2572: (byte 4) */
  bytes2word(114,118,101,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(60,36,60,0)
,};
Node PP_NHC_46Observe_46Observable_46_40_41[] = {
 };
Node PC_NHC_46Observe_46Observable_46_40_41[] = {
 	/* ST_v2950: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,40)
, bytes2word(41,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46_40_41_46observer[] = {
 };
Node PC_NHC_46Observe_46Observable_46_40_41_46observer[] = {
 	/* ST_v2878: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,40)
, bytes2word(41,46,111,98)
, bytes2word(115,101,114,118)
, bytes2word(101,114,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Array_46Array[] = {
 };
Node PC_NHC_46Observe_46Observable_46Array_46Array[] = {
 	/* ST_v2984: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,65)
, bytes2word(114,114,97,121)
, bytes2word(46,65,114,114)
, bytes2word(97,121,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Array_46Array_46observer[] = {
 };
Node PC_NHC_46Observe_46Observable_46Array_46Array_46observer[] = {
 	/* ST_v2646: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,65)
, bytes2word(114,114,97,121)
, bytes2word(46,65,114,114)
, bytes2word(97,121,46,111)
, bytes2word(98,115,101,114)
,	/* PP_LAMBDA1884: (byte 4) */
 	/* PC_LAMBDA1884: (byte 4) */
 	/* ST_v2670: (byte 4) */
  bytes2word(118,101,114,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,65)
, bytes2word(114,114,97,121)
, bytes2word(46,65,114,114)
, bytes2word(97,121,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,52,50,58)
, bytes2word(52,50,45,49)
, bytes2word(52,50,58,52)
,	/* PP_LAMBDA1886: (byte 2) */
 	/* PC_LAMBDA1886: (byte 2) */
 	/* ST_v2656: (byte 2) */
  bytes2word(56,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,65,114,114)
, bytes2word(97,121,46,65)
, bytes2word(114,114,97,121)
, bytes2word(46,111,98,115)
, bytes2word(101,114,118,101)
, bytes2word(114,58,49,52)
, bytes2word(51,58,50,54)
, bytes2word(45,49,52,51)
,	/* PP_LAMBDA1885: (byte 4) */
 	/* PC_LAMBDA1885: (byte 4) */
 	/* ST_v2665: (byte 4) */
  bytes2word(58,52,57,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,65)
, bytes2word(114,114,97,121)
, bytes2word(46,65,114,114)
, bytes2word(97,121,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,52,52,58)
, bytes2word(50,54,45,49)
, bytes2word(52,52,58,52)
, bytes2word(57,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46NHC_46Internal_46IO[] = {
 };
Node PC_NHC_46Observe_46Observable_46NHC_46Internal_46IO[] = {
 	/* ST_v2989: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,78)
, bytes2word(72,67,46,73)
, bytes2word(110,116,101,114)
, bytes2word(110,97,108,46)
, bytes2word(73,79,0,0)
,};
Node PP_NHC_46Observe_46Observable_46NHC_46Internal_46IO_46observer[] = {
 };
Node PC_NHC_46Observe_46Observable_46NHC_46Internal_46IO_46observer[] = {
 	/* ST_v2601: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,78)
, bytes2word(72,67,46,73)
, bytes2word(110,116,101,114)
, bytes2word(110,97,108,46)
, bytes2word(73,79,46,111)
, bytes2word(98,115,101,114)
,	/* PP_LAMBDA1880: (byte 4) */
 	/* PC_LAMBDA1880: (byte 4) */
 	/* ST_v2606: (byte 4) */
  bytes2word(118,101,114,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,78)
, bytes2word(72,67,46,73)
, bytes2word(110,116,101,114)
, bytes2word(110,97,108,46)
, bytes2word(73,79,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,53,54,58)
, bytes2word(50,55,45,49)
, bytes2word(53,54,58,50)
,	/* PP_LAMBDA1878: (byte 2) */
 	/* PC_LAMBDA1878: (byte 2) */
 	/* ST_v2619: (byte 2) */
  bytes2word(56,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,73,110,116)
, bytes2word(101,114,110,97)
, bytes2word(108,46,73,79)
, bytes2word(46,111,98,115)
, bytes2word(101,114,118,101)
, bytes2word(114,58,49,53)
, bytes2word(55,58,51,56)
, bytes2word(45,49,53,55)
,	/* PP_LAMBDA1879: (byte 4) */
 	/* PC_LAMBDA1879: (byte 4) */
 	/* ST_v2614: (byte 4) */
  bytes2word(58,52,51,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,78)
, bytes2word(72,67,46,73)
, bytes2word(110,116,101,114)
, bytes2word(110,97,108,46)
, bytes2word(73,79,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,53,56,58)
, bytes2word(51,54,45,49)
, bytes2word(53,56,58,52)
, bytes2word(52,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46_45_62[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46_45_62[] = {
 	/* ST_v2994: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,45)
, bytes2word(62,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46_45_62_46observer[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46_45_62_46observer[] = {
 	/* ST_v2576: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,45)
, bytes2word(62,46,111,98)
, bytes2word(115,101,114,118)
,	/* PP_NHC_46Observe_46NHC_46Observe_46Observable_46Prelude_46_45_62_46observer_39451: (byte 3) */
 	/* PC_NHC_46Observe_46NHC_46Observe_46Observable_46Prelude_46_45_62_46observer_39451: (byte 3) */
 	/* PP_LAMBDA1877: (byte 3) */
 	/* PC_LAMBDA1877: (byte 3) */
 	/* ST_v2580: (byte 3) */
  bytes2word(101,114,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,97,98,108)
, bytes2word(101,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,45,62)
, bytes2word(46,111,98,115)
, bytes2word(101,114,118,101)
, bytes2word(114,58,49,54)
, bytes2word(50,58,57,45)
, bytes2word(49,54,53,58)
,	/* PP_LAMBDA1876: (byte 3) */
 	/* PC_LAMBDA1876: (byte 3) */
 	/* ST_v2590: (byte 3) */
  bytes2word(51,48,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,97,98,108)
, bytes2word(101,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,45,62)
, bytes2word(46,111,98,115)
, bytes2word(101,114,118,101)
, bytes2word(114,58,49,54)
, bytes2word(51,58,50,52)
, bytes2word(45,49,54,51)
,	/* PP_LAMBDA1875: (byte 4) */
 	/* PC_LAMBDA1875: (byte 4) */
 	/* ST_v2597: (byte 4) */
  bytes2word(58,51,50,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,45)
, bytes2word(62,46,111,98)
, bytes2word(115,101,114,118)
, bytes2word(101,114,58,49)
, bytes2word(54,52,58,50)
, bytes2word(51,45,49,54)
, bytes2word(52,58,51,54)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_462[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_462[] = {
 	/* ST_v2954: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,50)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_462_46observer[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_462_46observer[] = {
 	/* ST_v2851: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,50)
, bytes2word(46,111,98,115)
, bytes2word(101,114,118,101)
,	/* PP_LAMBDA1909: (byte 2) */
 	/* PC_LAMBDA1909: (byte 2) */
 	/* ST_v2866: (byte 2) */
  bytes2word(114,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,50,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,48,48,58)
, bytes2word(52,52,45,49)
, bytes2word(48,48,58,52)
,	/* PP_LAMBDA1910: (byte 2) */
 	/* PC_LAMBDA1910: (byte 2) */
 	/* ST_v2862: (byte 2) */
  bytes2word(54,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,50,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,48,49,58)
, bytes2word(50,53,45,49)
, bytes2word(48,49,58,50)
, bytes2word(55,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_463[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_463[] = {
 	/* ST_v2959: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,51)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_463_46observer[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_463_46observer[] = {
 	/* ST_v2820: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,51)
, bytes2word(46,111,98,115)
, bytes2word(101,114,118,101)
,	/* PP_LAMBDA1905: (byte 2) */
 	/* PC_LAMBDA1905: (byte 2) */
 	/* ST_v2846: (byte 2) */
  bytes2word(114,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,51,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,48,52,58)
, bytes2word(52,54,45,49)
, bytes2word(48,52,58,52)
,	/* PP_LAMBDA1908: (byte 2) */
 	/* PC_LAMBDA1908: (byte 2) */
 	/* ST_v2829: (byte 2) */
  bytes2word(56,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,51,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,48,53,58)
, bytes2word(50,50,45,49)
, bytes2word(48,53,58,50)
,	/* PP_LAMBDA1907: (byte 2) */
 	/* PC_LAMBDA1907: (byte 2) */
 	/* ST_v2835: (byte 2) */
  bytes2word(56,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,51,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,48,54,58)
, bytes2word(50,50,45,49)
, bytes2word(48,54,58,50)
,	/* PP_LAMBDA1906: (byte 2) */
 	/* PC_LAMBDA1906: (byte 2) */
 	/* ST_v2841: (byte 2) */
  bytes2word(56,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,51,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,48,55,58)
, bytes2word(50,50,45,49)
, bytes2word(48,55,58,50)
, bytes2word(56,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_464[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_464[] = {
 	/* ST_v2964: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,52)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_464_46observer[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_464_46observer[] = {
 	/* ST_v2783: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,52)
, bytes2word(46,111,98,115)
, bytes2word(101,114,118,101)
,	/* PP_LAMBDA1900: (byte 2) */
 	/* PC_LAMBDA1900: (byte 2) */
 	/* ST_v2815: (byte 2) */
  bytes2word(114,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,52,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,49,49,58)
, bytes2word(52,56,45,49)
, bytes2word(49,49,58,53)
,	/* PP_LAMBDA1904: (byte 2) */
 	/* PC_LAMBDA1904: (byte 2) */
 	/* ST_v2792: (byte 2) */
  bytes2word(48,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,52,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,49,50,58)
, bytes2word(50,50,45,49)
, bytes2word(49,50,58,50)
,	/* PP_LAMBDA1903: (byte 2) */
 	/* PC_LAMBDA1903: (byte 2) */
 	/* ST_v2798: (byte 2) */
  bytes2word(56,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,52,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,49,51,58)
, bytes2word(50,50,45,49)
, bytes2word(49,51,58,50)
,	/* PP_LAMBDA1902: (byte 2) */
 	/* PC_LAMBDA1902: (byte 2) */
 	/* ST_v2804: (byte 2) */
  bytes2word(56,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,52,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,49,52,58)
, bytes2word(50,50,45,49)
, bytes2word(49,52,58,50)
,	/* PP_LAMBDA1901: (byte 2) */
 	/* PC_LAMBDA1901: (byte 2) */
 	/* ST_v2810: (byte 2) */
  bytes2word(56,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,52,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,49,53,58)
, bytes2word(50,50,45,49)
, bytes2word(49,53,58,50)
, bytes2word(56,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_465[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_465[] = {
 	/* ST_v2969: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,53)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_465_46observer[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_465_46observer[] = {
 	/* ST_v2739: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,53)
, bytes2word(46,111,98,115)
, bytes2word(101,114,118,101)
,	/* PP_LAMBDA1894: (byte 2) */
 	/* PC_LAMBDA1894: (byte 2) */
 	/* ST_v2777: (byte 2) */
  bytes2word(114,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,53,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,50,48,58)
, bytes2word(53,48,45,49)
, bytes2word(50,48,58,53)
,	/* PP_LAMBDA1899: (byte 2) */
 	/* PC_LAMBDA1899: (byte 2) */
 	/* ST_v2748: (byte 2) */
  bytes2word(50,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,53,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,50,49,58)
, bytes2word(50,50,45,49)
, bytes2word(50,49,58,50)
,	/* PP_LAMBDA1898: (byte 2) */
 	/* PC_LAMBDA1898: (byte 2) */
 	/* ST_v2754: (byte 2) */
  bytes2word(56,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,53,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,50,50,58)
, bytes2word(50,50,45,49)
, bytes2word(50,50,58,50)
,	/* PP_LAMBDA1897: (byte 2) */
 	/* PC_LAMBDA1897: (byte 2) */
 	/* ST_v2760: (byte 2) */
  bytes2word(56,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,53,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,50,51,58)
, bytes2word(50,50,45,49)
, bytes2word(50,51,58,50)
,	/* PP_LAMBDA1896: (byte 2) */
 	/* PC_LAMBDA1896: (byte 2) */
 	/* ST_v2766: (byte 2) */
  bytes2word(56,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,53,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,50,52,58)
, bytes2word(50,50,45,49)
, bytes2word(50,52,58,50)
,	/* PP_LAMBDA1895: (byte 2) */
 	/* PC_LAMBDA1895: (byte 2) */
 	/* ST_v2772: (byte 2) */
  bytes2word(56,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,53,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,50,53,58)
, bytes2word(50,50,45,49)
, bytes2word(50,53,58,50)
, bytes2word(56,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46Bool[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46Bool[] = {
 	/* ST_v2930: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,66)
, bytes2word(111,111,108,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46Bool_46observer[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46Bool_46observer[] = {
 	/* ST_v2898: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,66)
, bytes2word(111,111,108,46)
, bytes2word(111,98,115,101)
, bytes2word(114,118,101,114)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46Char[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46Char[] = {
 	/* ST_v2946: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,67)
, bytes2word(104,97,114,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46Char_46observer[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46Char_46observer[] = {
 	/* ST_v2882: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,67)
, bytes2word(104,97,114,46)
, bytes2word(111,98,115,101)
, bytes2word(114,118,101,114)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46Double[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46Double[] = {
 	/* ST_v2942: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,68)
, bytes2word(111,117,98,108)
, bytes2word(101,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46Double_46observer[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46Double_46observer[] = {
 	/* ST_v2886: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,68)
, bytes2word(111,117,98,108)
, bytes2word(101,46,111,98)
, bytes2word(115,101,114,118)
, bytes2word(101,114,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46Float[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46Float[] = {
 	/* ST_v2938: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,70)
, bytes2word(108,111,97,116)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46Float_46observer[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46Float_46observer[] = {
 	/* ST_v2890: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,70)
, bytes2word(108,111,97,116)
, bytes2word(46,111,98,115)
, bytes2word(101,114,118,101)
, bytes2word(114,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46Int[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46Int[] = {
 	/* ST_v2926: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46Int_46observer[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46Int_46observer[] = {
 	/* ST_v2902: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46Integer[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46Integer[] = {
 	/* ST_v2934: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,101,103)
, bytes2word(101,114,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46Integer_46observer[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46Integer_46observer[] = {
 	/* ST_v2894: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
, bytes2word(110,116,101,103)
, bytes2word(101,114,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46Maybe[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46Maybe[] = {
 	/* ST_v2979: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,77)
, bytes2word(97,121,98,101)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46Maybe_46observer[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46Maybe_46observer[] = {
 	/* ST_v2677: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,77)
, bytes2word(97,121,98,101)
, bytes2word(46,111,98,115)
, bytes2word(101,114,118,101)
,	/* PP_LAMBDA1888: (byte 2) */
 	/* PC_LAMBDA1888: (byte 2) */
 	/* ST_v2694: (byte 2) */
  bytes2word(114,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,77,97,121)
, bytes2word(98,101,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,51,54,58)
, bytes2word(52,55,45,49)
, bytes2word(51,54,58,53)
,	/* PP_LAMBDA1889: (byte 2) */
 	/* PC_LAMBDA1889: (byte 2) */
 	/* ST_v2689: (byte 2) */
  bytes2word(50,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,77,97,121)
, bytes2word(98,101,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,51,55,58)
, bytes2word(50,50,45,49)
, bytes2word(51,55,58,50)
,	/* PP_LAMBDA1887: (byte 2) */
 	/* PC_LAMBDA1887: (byte 2) */
 	/* ST_v2698: (byte 2) */
  bytes2word(56,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,77,97,121)
, bytes2word(98,101,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,51,57,58)
, bytes2word(52,54,45,49)
, bytes2word(51,57,58,53)
, bytes2word(52,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46_91_93[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46_91_93[] = {
 	/* ST_v2974: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,91)
, bytes2word(93,0,0,0)
,};
Node PP_NHC_46Observe_46Observable_46Prelude_46_91_93_46observer[] = {
 };
Node PC_NHC_46Observe_46Observable_46Prelude_46_91_93_46observer[] = {
 	/* ST_v2705: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,91)
, bytes2word(93,46,111,98)
, bytes2word(115,101,114,118)
,	/* PP_LAMBDA1891: (byte 3) */
 	/* PC_LAMBDA1891: (byte 3) */
 	/* ST_v2729: (byte 3) */
  bytes2word(101,114,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,97,98,108)
, bytes2word(101,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,91,93)
, bytes2word(46,111,98,115)
, bytes2word(101,114,118,101)
, bytes2word(114,58,49,50)
, bytes2word(57,58,52,53)
, bytes2word(45,49,50,57)
,	/* PP_LAMBDA1893: (byte 4) */
 	/* PC_LAMBDA1893: (byte 4) */
 	/* ST_v2717: (byte 4) */
  bytes2word(58,52,55,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,97,98)
, bytes2word(108,101,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,91)
, bytes2word(93,46,111,98)
, bytes2word(115,101,114,118)
, bytes2word(101,114,58,49)
, bytes2word(51,48,58,50)
, bytes2word(50,45,49,51)
, bytes2word(48,58,50,56)
,	/* PP_LAMBDA1892: (byte 1) */
 	/* PC_LAMBDA1892: (byte 1) */
 	/* ST_v2724: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,97)
, bytes2word(98,108,101,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,58)
, bytes2word(49,51,49,58)
, bytes2word(50,51,45,49)
, bytes2word(51,49,58,51)
,	/* PP_LAMBDA1890: (byte 2) */
 	/* PC_LAMBDA1890: (byte 2) */
 	/* ST_v2733: (byte 2) */
  bytes2word(48,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(97,98,108,101)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,91,93,46)
, bytes2word(111,98,115,101)
, bytes2word(114,118,101,114)
, bytes2word(58,49,51,51)
, bytes2word(58,52,49,45)
, bytes2word(49,51,51,58)
, bytes2word(52,52,0,0)
,};
Node PP_NHC_46Observe_46_95_46observer[] = {
 };
Node PC_NHC_46Observe_46_95_46observer[] = {
 	/* ST_v2906: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(95,46,111,98)
, bytes2word(115,101,114,118)
,	/* PP_LAMBDA1911: (byte 3) */
 	/* PC_LAMBDA1911: (byte 3) */
 	/* ST_v2911: (byte 3) */
  bytes2word(101,114,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,95)
, bytes2word(46,111,98,115)
, bytes2word(101,114,118,101)
, bytes2word(114,58,110,111)
,	/* PP_NHC_46Observe_46closeObserveGlobal: (byte 4) */
 	/* PC_NHC_46Observe_46closeObserveGlobal: (byte 4) */
 	/* ST_v2007: (byte 4) */
  bytes2word(112,111,115,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(99,108,111,115)
, bytes2word(101,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(71,108,111,98)
,	/* PP_LAMBDA1816: (byte 3) */
 	/* PC_LAMBDA1816: (byte 3) */
 	/* ST_v2013: (byte 3) */
  bytes2word(97,108,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,99)
, bytes2word(108,111,115,101)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,71)
, bytes2word(108,111,98,97)
, bytes2word(108,58,50,48)
, bytes2word(53,58,49,54)
, bytes2word(45,50,48,53)
,	/* PP_LAMBDA1815: (byte 4) */
 	/* PC_LAMBDA1815: (byte 4) */
 	/* ST_v2026: (byte 4) */
  bytes2word(58,51,56,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(99,108,111,115)
, bytes2word(101,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(71,108,111,98)
, bytes2word(97,108,58,50)
, bytes2word(48,55,58,51)
, bytes2word(56,45,50,48)
, bytes2word(55,58,53,52)
,	/* PP_NHC_46Observe_46generateContext: (byte 1) */
 	/* PC_NHC_46Observe_46generateContext: (byte 1) */
 	/* ST_v2469: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(46,103,101,110)
, bytes2word(101,114,97,116)
, bytes2word(101,67,111,110)
, bytes2word(116,101,120,116)
,	/* PP_LAMBDA1869: (byte 1) */
 	/* PC_LAMBDA1869: (byte 1) */
 	/* ST_v2480: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(46,103,101,110)
, bytes2word(101,114,97,116)
, bytes2word(101,67,111,110)
, bytes2word(116,101,120,116)
, bytes2word(58,50,53,50)
, bytes2word(58,49,54,45)
, bytes2word(50,53,50,58)
,	/* PP_LAMBDA1866: (byte 3) */
 	/* PC_LAMBDA1866: (byte 3) */
 	/* ST_v2513: (byte 3) */
  bytes2word(51,56,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,103)
, bytes2word(101,110,101,114)
, bytes2word(97,116,101,67)
, bytes2word(111,110,116,101)
, bytes2word(120,116,58,50)
, bytes2word(53,55,58,52)
,	/* PP_LAMBDA1868: (byte 2) */
 	/* PC_LAMBDA1868: (byte 2) */
 	/* ST_v2497: (byte 2) */
  bytes2word(56,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,103,101)
, bytes2word(110,101,114,97)
, bytes2word(116,101,67,111)
, bytes2word(110,116,101,120)
, bytes2word(116,58,50,54)
, bytes2word(48,58,52,53)
, bytes2word(45,50,54,48)
,	/* PP_LAMBDA1867: (byte 4) */
 	/* PC_LAMBDA1867: (byte 4) */
 	/* ST_v2505: (byte 4) */
  bytes2word(58,53,56,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(103,101,110,101)
, bytes2word(114,97,116,101)
, bytes2word(67,111,110,116)
, bytes2word(101,120,116,58)
, bytes2word(110,111,112,111)
,	/* PP_NHC_46Observe_46mkXmlNode: (byte 2) */
 	/* PC_NHC_46Observe_46mkXmlNode: (byte 2) */
 	/* ST_v2047: (byte 2) */
  bytes2word(115,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,109,107)
, bytes2word(88,109,108,78)
,	/* PP_LAMBDA1822: (byte 4) */
 	/* PC_LAMBDA1822: (byte 4) */
 	/* ST_v2060: (byte 4) */
  bytes2word(111,100,101,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(109,107,88,109)
, bytes2word(108,78,111,100)
, bytes2word(101,58,51,50)
, bytes2word(52,58,50,51)
, bytes2word(45,51,50,52)
,	/* PP_LAMBDA1823: (byte 4) */
 	/* PC_LAMBDA1823: (byte 4) */
 	/* ST_v2056: (byte 4) */
  bytes2word(58,50,53,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(109,107,88,109)
, bytes2word(108,78,111,100)
, bytes2word(101,58,51,50)
, bytes2word(52,58,52,57)
, bytes2word(45,51,50,52)
,	/* PP_LAMBDA1821: (byte 4) */
 	/* PC_LAMBDA1821: (byte 4) */
 	/* ST_v2064: (byte 4) */
  bytes2word(58,53,50,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(109,107,88,109)
, bytes2word(108,78,111,100)
, bytes2word(101,58,51,50)
, bytes2word(52,58,57,45)
, bytes2word(51,50,52,58)
,	/* PP_LAMBDA1817: (byte 3) */
 	/* PC_LAMBDA1817: (byte 3) */
 	/* ST_v2099: (byte 3) */
  bytes2word(49,49,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,109)
, bytes2word(107,88,109,108)
, bytes2word(78,111,100,101)
, bytes2word(58,51,50,54)
, bytes2word(58,50,52,45)
, bytes2word(51,50,54,58)
,	/* PP_NHC_46Observe_46Prelude_46393_46showAttrs: (byte 3) */
 	/* PC_NHC_46Observe_46Prelude_46393_46showAttrs: (byte 3) */
 	/* ST_v2072: (byte 3) */
  bytes2word(50,53,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,109)
, bytes2word(107,88,109,108)
, bytes2word(78,111,100,101)
, bytes2word(58,51,50,54)
, bytes2word(58,57,45,51)
, bytes2word(50,56,58,53)
,	/* PP_LAMBDA1820: (byte 2) */
 	/* PC_LAMBDA1820: (byte 2) */
 	/* ST_v2083: (byte 2) */
  bytes2word(57,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,109,107)
, bytes2word(88,109,108,78)
, bytes2word(111,100,101,58)
, bytes2word(51,50,55,58)
, bytes2word(51,53,45,51)
, bytes2word(50,56,58,53)
,	/* PP_LAMBDA1818: (byte 2) */
 	/* PC_LAMBDA1818: (byte 2) */
 	/* ST_v2095: (byte 2) */
  bytes2word(57,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,109,107)
, bytes2word(88,109,108,78)
, bytes2word(111,100,101,58)
, bytes2word(51,50,55,58)
, bytes2word(52,53,45,51)
, bytes2word(50,55,58,52)
,	/* PP_LAMBDA1819: (byte 2) */
 	/* PC_LAMBDA1819: (byte 2) */
 	/* ST_v2091: (byte 2) */
  bytes2word(57,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,109,107)
, bytes2word(88,109,108,78)
, bytes2word(111,100,101,58)
, bytes2word(51,50,55,58)
, bytes2word(54,51,45,51)
, bytes2word(50,55,58,54)
, bytes2word(54,0,0,0)
,};
Node PP_NHC_46Observe_46observe[] = {
 };
Node PC_NHC_46Observe_46observe[] = {
 	/* ST_v2919: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(111,98,115,101)
,	/* PP_NHC_46Observe_46observeDepth: (byte 4) */
 	/* PC_NHC_46Observe_46observeDepth: (byte 4) */
 	/* ST_v2290: (byte 4) */
  bytes2word(114,118,101,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(111,98,115,101)
, bytes2word(114,118,101,68)
, bytes2word(101,112,116,104)
,	/* PP_NHC_46Observe_46observeGlobal: (byte 1) */
 	/* PC_NHC_46Observe_46observeGlobal: (byte 1) */
 	/* ST_v1929: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(46,111,98,115)
, bytes2word(101,114,118,101)
, bytes2word(71,108,111,98)
,	/* PP_NHC_46Observe_46observeHandle: (byte 3) */
 	/* PC_NHC_46Observe_46observeHandle: (byte 3) */
 	/* ST_v1997: (byte 3) */
  bytes2word(97,108,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,72,97)
, bytes2word(110,100,108,101)
,	/* PP_LAMBDA1814: (byte 1) */
 	/* PC_LAMBDA1814: (byte 1) */
 	/* ST_v2003: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(46,111,98,115)
, bytes2word(101,114,118,101)
, bytes2word(72,97,110,100)
, bytes2word(108,101,58,49)
, bytes2word(56,53,58,49)
, bytes2word(49,45,49,56)
, bytes2word(53,58,50,51)
,	/* PP_NHC_46Observe_46observeLit: (byte 1) */
 	/* PC_NHC_46Observe_46observeLit: (byte 1) */
 	/* ST_v2869: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(46,111,98,115)
, bytes2word(101,114,118,101)
,	/* PP_NHC_46Observe_46observeParent: (byte 4) */
 	/* PC_NHC_46Observe_46observeParent: (byte 4) */
 	/* ST_v2103: (byte 4) */
  bytes2word(76,105,116,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(111,98,115,101)
, bytes2word(114,118,101,80)
, bytes2word(97,114,101,110)
,	/* PP_NHC_46Observe_46observePort: (byte 2) */
 	/* PC_NHC_46Observe_46observePort: (byte 2) */
 	/* ST_v2106: (byte 2) */
  bytes2word(116,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,111,98)
, bytes2word(115,101,114,118)
, bytes2word(101,80,111,114)
,	/* PP_NHC_46Observe_46observeUniq: (byte 2) */
 	/* PC_NHC_46Observe_46observeUniq: (byte 2) */
 	/* ST_v2277: (byte 2) */
  bytes2word(116,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,111,98)
, bytes2word(115,101,114,118)
, bytes2word(101,85,110,105)
,	/* PP_LAMBDA1846: (byte 2) */
 	/* PC_LAMBDA1846: (byte 2) */
 	/* ST_v2283: (byte 2) */
  bytes2word(113,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,111,98)
, bytes2word(115,101,114,118)
, bytes2word(101,85,110,105)
, bytes2word(113,58,49,56)
, bytes2word(52,58,49,49)
, bytes2word(45,49,56,52)
, bytes2word(58,50,49,0)
,};
Node PP_NHC_46Observe_46observe_95[] = {
 };
Node PC_NHC_46Observe_46observe_95[] = {
 	/* ST_v2915: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(111,98,115,101)
, bytes2word(114,118,101,95)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46Observe_46observer[] = {
 };
Node PC_NHC_46Observe_46observer[] = {
 	/* ST_v2923: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(111,98,115,101)
, bytes2word(114,118,101,114)
,	/* PP_NHC_46Observe_46observerM: (byte 1) */
 	/* PC_NHC_46Observe_46observerM: (byte 1) */
 	/* ST_v2623: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(46,111,98,115)
, bytes2word(101,114,118,101)
,	/* PP_LAMBDA1883: (byte 3) */
 	/* PC_LAMBDA1883: (byte 3) */
 	/* ST_v2628: (byte 3) */
  bytes2word(114,77,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,77)
, bytes2word(58,49,52,57)
, bytes2word(58,50,55,45)
, bytes2word(49,52,57,58)
,	/* PP_LAMBDA1881: (byte 3) */
 	/* PC_LAMBDA1881: (byte 3) */
 	/* ST_v2642: (byte 3) */
  bytes2word(50,56,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,77)
, bytes2word(58,49,53,48)
, bytes2word(58,51,56,45)
, bytes2word(49,53,48,58)
,	/* PP_LAMBDA1882: (byte 3) */
 	/* PC_LAMBDA1882: (byte 3) */
 	/* ST_v2636: (byte 3) */
  bytes2word(52,55,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,77)
, bytes2word(58,49,53,49)
, bytes2word(58,51,54,45)
, bytes2word(49,53,49,58)
,	/* PP_NHC_46Observe_46observer_95: (byte 3) */
 	/* PC_NHC_46Observe_46observer_95: (byte 3) */
 	/* ST_v2517: (byte 3) */
  bytes2word(52,52,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,95)
,	/* PP_NHC_46Observe_46openObserveGlobal: (byte 1) */
 	/* PC_NHC_46Observe_46openObserveGlobal: (byte 1) */
 	/* ST_v1935: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(46,111,112,101)
, bytes2word(110,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(71,108,111,98)
,	/* PP_LAMBDA1805: (byte 3) */
 	/* PC_LAMBDA1805: (byte 3) */
 	/* ST_v1989: (byte 3) */
  bytes2word(97,108,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,111)
, bytes2word(112,101,110,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,71,108)
, bytes2word(111,98,97,108)
, bytes2word(58,49,57,49)
, bytes2word(58,50,53,45)
, bytes2word(49,57,49,58)
,	/* PP_LAMBDA1813: (byte 3) */
 	/* PC_LAMBDA1813: (byte 3) */
 	/* ST_v1944: (byte 3) */
  bytes2word(51,54,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,111)
, bytes2word(112,101,110,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,71,108)
, bytes2word(111,98,97,108)
, bytes2word(58,49,57,49)
, bytes2word(58,51,57,45)
, bytes2word(49,57,49,58)
,	/* PP_LAMBDA1807: (byte 3) */
 	/* PC_LAMBDA1807: (byte 3) */
 	/* ST_v1980: (byte 3) */
  bytes2word(52,51,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,111)
, bytes2word(112,101,110,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,71,108)
, bytes2word(111,98,97,108)
, bytes2word(58,49,57,49)
, bytes2word(58,52,55,45)
, bytes2word(49,57,49,58)
,	/* PP_LAMBDA1806: (byte 3) */
 	/* PC_LAMBDA1806: (byte 3) */
 	/* ST_v1985: (byte 3) */
  bytes2word(55,51,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,111)
, bytes2word(112,101,110,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,71,108)
, bytes2word(111,98,97,108)
, bytes2word(58,49,57,49)
, bytes2word(58,54,49,45)
, bytes2word(49,57,49,58)
,	/* PP_LAMBDA1808: (byte 3) */
 	/* PC_LAMBDA1808: (byte 3) */
 	/* ST_v1976: (byte 3) */
  bytes2word(55,51,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,111)
, bytes2word(112,101,110,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,71,108)
, bytes2word(111,98,97,108)
, bytes2word(58,49,57,50)
, bytes2word(58,50,49,45)
, bytes2word(49,57,50,58)
,	/* PP_LAMBDA1812: (byte 3) */
 	/* PC_LAMBDA1812: (byte 3) */
 	/* ST_v1955: (byte 3) */
  bytes2word(50,56,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,111)
, bytes2word(112,101,110,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,71,108)
, bytes2word(111,98,97,108)
, bytes2word(58,49,57,51)
, bytes2word(58,50,49,45)
, bytes2word(49,57,51,58)
,	/* PP_LAMBDA1809: (byte 3) */
 	/* PC_LAMBDA1809: (byte 3) */
 	/* ST_v1972: (byte 3) */
  bytes2word(52,50,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,111)
, bytes2word(112,101,110,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,71,108)
, bytes2word(111,98,97,108)
, bytes2word(58,49,57,52)
, bytes2word(58,50,56,45)
, bytes2word(49,57,52,58)
,	/* PP_LAMBDA1810: (byte 3) */
 	/* PC_LAMBDA1810: (byte 3) */
 	/* ST_v1968: (byte 3) */
  bytes2word(53,50,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,111)
, bytes2word(112,101,110,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,71,108)
, bytes2word(111,98,97,108)
, bytes2word(58,49,57,53)
, bytes2word(58,50,56,45)
, bytes2word(49,57,53,58)
,	/* PP_LAMBDA1811: (byte 3) */
 	/* PC_LAMBDA1811: (byte 3) */
 	/* ST_v1964: (byte 3) */
  bytes2word(54,51,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,111)
, bytes2word(112,101,110,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,71,108)
, bytes2word(111,98,97,108)
, bytes2word(58,49,57,55)
, bytes2word(58,49,56,45)
, bytes2word(49,57,55,58)
,	/* PP_NHC_46Observe_46ourCatchAll: (byte 3) */
 	/* PC_NHC_46Observe_46ourCatchAll: (byte 3) */
 	/* ST_v2268: (byte 3) */
  bytes2word(51,48,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,111)
, bytes2word(117,114,67,97)
, bytes2word(116,99,104,65)
, bytes2word(108,108,0,0)
,};
Node PP_NHC_46Observe_46printO[] = {
 };
Node PC_NHC_46Observe_46printO[] = {
 	/* ST_v2042: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(112,114,105,110)
, bytes2word(116,79,0,0)
,};
Node PP_NHC_46Observe_46putStrO[] = {
 };
Node PC_NHC_46Observe_46putStrO[] = {
 	/* ST_v2036: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(112,117,116,83)
,	/* PP_NHC_46Observe_46runMO: (byte 4) */
 	/* PC_NHC_46Observe_46runMO: (byte 4) */
 	/* ST_v2287: (byte 4) */
  bytes2word(116,114,79,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(114,117,110,77)
, bytes2word(79,0,0,0)
,};
Node PP_NHC_46Observe_46runO[] = {
 };
Node PC_NHC_46Observe_46runO[] = {
 	/* ST_v2030: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(114,117,110,79)
,	/* PP_NHC_46Observe_46sendEnterPacket: (byte 1) */
 	/* PC_NHC_46Observe_46sendEnterPacket: (byte 1) */
 	/* ST_v2355: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(46,115,101,110)
, bytes2word(100,69,110,116)
, bytes2word(101,114,80,97)
, bytes2word(99,107,101,116)
,	/* PP_LAMBDA1858: (byte 1) */
 	/* PC_LAMBDA1858: (byte 1) */
 	/* ST_v2362: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(46,115,101,110)
, bytes2word(100,69,110,116)
, bytes2word(101,114,80,97)
, bytes2word(99,107,101,116)
, bytes2word(58,50,56,53)
, bytes2word(58,49,54,45)
, bytes2word(50,56,53,58)
,	/* PP_LAMBDA1854: (byte 3) */
 	/* PC_LAMBDA1854: (byte 3) */
 	/* ST_v2403: (byte 3) */
  bytes2word(51,56,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,115)
, bytes2word(101,110,100,69)
, bytes2word(110,116,101,114)
, bytes2word(80,97,99,107)
, bytes2word(101,116,58,50)
, bytes2word(56,56,58,50)
, bytes2word(51,45,50,56)
, bytes2word(56,58,54,51)
,	/* PP_LAMBDA1856: (byte 1) */
 	/* PC_LAMBDA1856: (byte 1) */
 	/* ST_v2388: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(46,115,101,110)
, bytes2word(100,69,110,116)
, bytes2word(101,114,80,97)
, bytes2word(99,107,101,116)
, bytes2word(58,50,57,49)
,	/* PP_LAMBDA1855: (byte 4) */
 	/* PC_LAMBDA1855: (byte 4) */
 	/* PP_LAMBDA1857: (byte 4) */
 	/* PC_LAMBDA1857: (byte 4) */
 	/* ST_v2380: (byte 4) */
  bytes2word(58,51,55,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(115,101,110,100)
, bytes2word(69,110,116,101)
, bytes2word(114,80,97,99)
, bytes2word(107,101,116,58)
, bytes2word(110,111,112,111)
,	/* PP_NHC_46Observe_46sendObserveFnPacket: (byte 2) */
 	/* PC_NHC_46Observe_46sendObserveFnPacket: (byte 2) */
 	/* ST_v2293: (byte 2) */
  bytes2word(115,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,115,101)
, bytes2word(110,100,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,70,110,80)
, bytes2word(97,99,107,101)
,	/* PP_LAMBDA1853: (byte 2) */
 	/* PC_LAMBDA1853: (byte 2) */
 	/* ST_v2300: (byte 2) */
  bytes2word(116,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,115,101)
, bytes2word(110,100,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,70,110,80)
, bytes2word(97,99,107,101)
, bytes2word(116,58,50,57)
, bytes2word(57,58,49,54)
, bytes2word(45,50,57,57)
,	/* PP_LAMBDA1847: (byte 4) */
 	/* PC_LAMBDA1847: (byte 4) */
 	/* ST_v2351: (byte 4) */
  bytes2word(58,51,56,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(115,101,110,100)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,70)
, bytes2word(110,80,97,99)
, bytes2word(107,101,116,58)
, bytes2word(51,48,50,58)
, bytes2word(50,51,45,51)
, bytes2word(48,50,58,54)
,	/* PP_LAMBDA1849: (byte 2) */
 	/* PC_LAMBDA1849: (byte 2) */
 	/* ST_v2336: (byte 2) */
  bytes2word(51,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,115,101)
, bytes2word(110,100,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,70,110,80)
, bytes2word(97,99,107,101)
, bytes2word(116,58,51,48)
, bytes2word(53,58,51,55)
,	/* PP_LAMBDA1851: (byte 1) */
 	/* PC_LAMBDA1851: (byte 1) */
 	/* ST_v2321: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(46,115,101,110)
, bytes2word(100,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(70,110,80,97)
, bytes2word(99,107,101,116)
, bytes2word(58,51,48,54)
,	/* PP_LAMBDA1852: (byte 4) */
 	/* PC_LAMBDA1852: (byte 4) */
 	/* ST_v2318: (byte 4) */
  bytes2word(58,49,54,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(115,101,110,100)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,70)
, bytes2word(110,80,97,99)
, bytes2word(107,101,116,58)
, bytes2word(51,48,54,58)
, bytes2word(49,56,45,51)
, bytes2word(48,54,58,50)
,	/* PP_LAMBDA1848: (byte 2) */
 	/* PC_LAMBDA1848: (byte 2) */
 	/* PP_LAMBDA1850: (byte 2) */
 	/* PC_LAMBDA1850: (byte 2) */
 	/* ST_v2328: (byte 2) */
  bytes2word(54,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,115,101)
, bytes2word(110,100,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,70,110,80)
, bytes2word(97,99,107,101)
, bytes2word(116,58,110,111)
, bytes2word(112,111,115,0)
,};
Node PP_NHC_46Observe_46sendObservePacket[] = {
 };
Node PC_NHC_46Observe_46sendObservePacket[] = {
 	/* ST_v2406: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(115,101,110,100)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,80)
, bytes2word(97,99,107,101)
,	/* PP_LAMBDA1865: (byte 2) */
 	/* PC_LAMBDA1865: (byte 2) */
 	/* ST_v2413: (byte 2) */
  bytes2word(116,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,115,101)
, bytes2word(110,100,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,80,97,99)
, bytes2word(107,101,116,58)
, bytes2word(50,55,48,58)
, bytes2word(49,54,45,50)
, bytes2word(55,48,58,51)
,	/* PP_LAMBDA1859: (byte 2) */
 	/* PC_LAMBDA1859: (byte 2) */
 	/* ST_v2466: (byte 2) */
  bytes2word(56,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,115,101)
, bytes2word(110,100,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,80,97,99)
, bytes2word(107,101,116,58)
, bytes2word(50,55,51,58)
, bytes2word(50,51,45,50)
, bytes2word(55,51,58,54)
,	/* PP_LAMBDA1861: (byte 2) */
 	/* PC_LAMBDA1861: (byte 2) */
 	/* ST_v2451: (byte 2) */
  bytes2word(51,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,115,101)
, bytes2word(110,100,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,80,97,99)
, bytes2word(107,101,116,58)
, bytes2word(50,55,54,58)
,	/* PP_LAMBDA1863: (byte 3) */
 	/* PC_LAMBDA1863: (byte 3) */
 	/* ST_v2436: (byte 3) */
  bytes2word(51,55,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,115)
, bytes2word(101,110,100,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,80,97)
, bytes2word(99,107,101,116)
, bytes2word(58,50,55,55)
,	/* PP_LAMBDA1864: (byte 4) */
 	/* PC_LAMBDA1864: (byte 4) */
 	/* ST_v2433: (byte 4) */
  bytes2word(58,49,54,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(115,101,110,100)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,80)
, bytes2word(97,99,107,101)
, bytes2word(116,58,50,55)
, bytes2word(55,58,49,56)
, bytes2word(45,50,55,55)
,	/* PP_LAMBDA1860: (byte 4) */
 	/* PC_LAMBDA1860: (byte 4) */
 	/* PP_LAMBDA1862: (byte 4) */
 	/* PC_LAMBDA1862: (byte 4) */
 	/* ST_v2443: (byte 4) */
  bytes2word(58,50,54,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(115,101,110,100)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,80)
, bytes2word(97,99,107,101)
, bytes2word(116,58,110,111)
,	/* PP_NHC_46Observe_46showXmlString: (byte 4) */
 	/* PC_NHC_46Observe_46showXmlString: (byte 4) */
 	/* ST_v2224: (byte 4) */
  bytes2word(112,111,115,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(115,104,111,119)
, bytes2word(88,109,108,83)
, bytes2word(116,114,105,110)
,	/* PP_NHC_46Observe_46Prelude_46399_46fixChar: (byte 2) */
 	/* PC_NHC_46Observe_46Prelude_46399_46fixChar: (byte 2) */
 	/* ST_v2237: (byte 2) */
  bytes2word(103,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,115,104)
, bytes2word(111,119,88,109)
, bytes2word(108,83,116,114)
, bytes2word(105,110,103,58)
, bytes2word(51,51,50,58)
, bytes2word(49,53,45,51)
, bytes2word(51,55,58,51)
,	/* PP_LAMBDA1844: (byte 2) */
 	/* PC_LAMBDA1844: (byte 2) */
 	/* ST_v2252: (byte 2) */
  bytes2word(49,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,115,104)
, bytes2word(111,119,88,109)
, bytes2word(108,83,116,114)
, bytes2word(105,110,103,58)
, bytes2word(51,51,50,58)
, bytes2word(50,57,45,51)
, bytes2word(51,50,58,51)
,	/* PP_LAMBDA1845: (byte 2) */
 	/* PC_LAMBDA1845: (byte 2) */
 	/* ST_v2248: (byte 2) */
  bytes2word(52,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,115,104)
, bytes2word(111,119,88,109)
, bytes2word(108,83,116,114)
, bytes2word(105,110,103,58)
, bytes2word(51,51,51,58)
, bytes2word(50,57,45,51)
, bytes2word(51,51,58,51)
,	/* PP_LAMBDA1842: (byte 2) */
 	/* PC_LAMBDA1842: (byte 2) */
 	/* ST_v2260: (byte 2) */
  bytes2word(52,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,115,104)
, bytes2word(111,119,88,109)
, bytes2word(108,83,116,114)
, bytes2word(105,110,103,58)
, bytes2word(51,51,52,58)
, bytes2word(50,57,45,51)
, bytes2word(51,52,58,51)
,	/* PP_LAMBDA1841: (byte 2) */
 	/* PC_LAMBDA1841: (byte 2) */
 	/* ST_v2264: (byte 2) */
  bytes2word(53,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,115,104)
, bytes2word(111,119,88,109)
, bytes2word(108,83,116,114)
, bytes2word(105,110,103,58)
, bytes2word(51,51,53,58)
, bytes2word(50,57,45,51)
, bytes2word(51,53,58,51)
,	/* PP_LAMBDA1843: (byte 2) */
 	/* PC_LAMBDA1843: (byte 2) */
 	/* ST_v2256: (byte 2) */
  bytes2word(54,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,115,104)
, bytes2word(111,119,88,109)
, bytes2word(108,83,116,114)
, bytes2word(105,110,103,58)
, bytes2word(51,51,54,58)
, bytes2word(51,48,45,51)
, bytes2word(51,54,58,51)
, bytes2word(55,0,0,0)
,};
Node PP_NHC_46Observe_46thunk[] = {
 };
Node PC_NHC_46Observe_46thunk[] = {
 	/* ST_v2521: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(116,104,117,110)
,	/* PP_LAMBDA1870: (byte 2) */
 	/* PC_LAMBDA1870: (byte 2) */
 	/* ST_v2538: (byte 2) */
  bytes2word(107,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,116,104)
, bytes2word(117,110,107,58)
, bytes2word(50,51,55,58)
, bytes2word(49,49,45,50)
, bytes2word(51,55,58,50)
,	/* PP_LAMBDA1872: (byte 2) */
 	/* PC_LAMBDA1872: (byte 2) */
 	/* ST_v2527: (byte 2) */
  bytes2word(51,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,116,104)
, bytes2word(117,110,107,58)
, bytes2word(50,51,55,58)
, bytes2word(50,55,45,50)
, bytes2word(52,51,58,50)
,	/* PP_LAMBDA1871: (byte 2) */
 	/* PC_LAMBDA1871: (byte 2) */
 	/* ST_v2534: (byte 2) */
  bytes2word(54,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,116,104)
, bytes2word(117,110,107,58)
, bytes2word(50,51,56,58)
, bytes2word(51,50,45,50)
, bytes2word(51,56,58,52)
,	/* PP_NHC_46Observe_46xmlCons: (byte 2) */
 	/* PC_NHC_46Observe_46xmlCons: (byte 2) */
 	/* ST_v2166: (byte 2) */
  bytes2word(53,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,120,109)
, bytes2word(108,67,111,110)
,	/* PP_LAMBDA1832: (byte 2) */
 	/* PC_LAMBDA1832: (byte 2) */
 	/* ST_v2199: (byte 2) */
  bytes2word(115,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,120,109)
, bytes2word(108,67,111,110)
, bytes2word(115,58,51,52)
, bytes2word(57,58,49,57)
, bytes2word(45,51,52,57)
,	/* PP_LAMBDA1833: (byte 4) */
 	/* PC_LAMBDA1833: (byte 4) */
 	/* ST_v2196: (byte 4) */
  bytes2word(58,50,52,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(120,109,108,67)
, bytes2word(111,110,115,58)
, bytes2word(51,53,48,58)
, bytes2word(50,48,45,51)
, bytes2word(53,48,58,50)
,	/* PP_LAMBDA1834: (byte 2) */
 	/* PC_LAMBDA1834: (byte 2) */
 	/* ST_v2193: (byte 2) */
  bytes2word(53,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,120,109)
, bytes2word(108,67,111,110)
, bytes2word(115,58,51,53)
, bytes2word(49,58,50,48)
, bytes2word(45,51,53,49)
,	/* PP_LAMBDA1835: (byte 4) */
 	/* PC_LAMBDA1835: (byte 4) */
 	/* ST_v2190: (byte 4) */
  bytes2word(58,50,54,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(120,109,108,67)
, bytes2word(111,110,115,58)
, bytes2word(51,53,50,58)
, bytes2word(50,48,45,51)
, bytes2word(53,50,58,50)
,	/* PP_LAMBDA1836: (byte 2) */
 	/* PC_LAMBDA1836: (byte 2) */
 	/* ST_v2186: (byte 2) */
  bytes2word(54,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,120,109)
, bytes2word(108,67,111,110)
, bytes2word(115,58,51,53)
, bytes2word(51,58,50,48)
, bytes2word(45,51,53,51)
,	/* PP_LAMBDA1837: (byte 4) */
 	/* PC_LAMBDA1837: (byte 4) */
 	/* ST_v2182: (byte 4) */
  bytes2word(58,50,54,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(120,109,108,67)
, bytes2word(111,110,115,58)
, bytes2word(51,53,52,58)
, bytes2word(50,48,45,51)
, bytes2word(53,52,58,50)
,	/* PP_NHC_46Observe_46xmlEnter: (byte 2) */
 	/* PC_NHC_46Observe_46xmlEnter: (byte 2) */
 	/* ST_v2139: (byte 2) */
  bytes2word(53,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,120,109)
, bytes2word(108,69,110,116)
,	/* PP_LAMBDA1828: (byte 3) */
 	/* PC_LAMBDA1828: (byte 3) */
 	/* ST_v2162: (byte 3) */
  bytes2word(101,114,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,120)
, bytes2word(109,108,69,110)
, bytes2word(116,101,114,58)
, bytes2word(51,53,57,58)
, bytes2word(49,57,45,51)
, bytes2word(53,57,58,50)
,	/* PP_LAMBDA1829: (byte 2) */
 	/* PC_LAMBDA1829: (byte 2) */
 	/* ST_v2159: (byte 2) */
  bytes2word(53,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,120,109)
, bytes2word(108,69,110,116)
, bytes2word(101,114,58,51)
, bytes2word(54,48,58,50)
, bytes2word(48,45,51,54)
, bytes2word(48,58,50,53)
,	/* PP_LAMBDA1830: (byte 1) */
 	/* PC_LAMBDA1830: (byte 1) */
 	/* ST_v2156: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(46,120,109,108)
, bytes2word(69,110,116,101)
, bytes2word(114,58,51,54)
, bytes2word(49,58,50,48)
, bytes2word(45,51,54,49)
,	/* PP_LAMBDA1831: (byte 4) */
 	/* PC_LAMBDA1831: (byte 4) */
 	/* ST_v2153: (byte 4) */
  bytes2word(58,50,54,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(120,109,108,69)
, bytes2word(110,116,101,114)
, bytes2word(58,51,54,50)
, bytes2word(58,50,48,45)
, bytes2word(51,54,50,58)
,	/* PP_NHC_46Observe_46xmlFun: (byte 3) */
 	/* PC_NHC_46Observe_46xmlFun: (byte 3) */
 	/* ST_v2109: (byte 3) */
  bytes2word(50,54,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,120)
, bytes2word(109,108,70,117)
,	/* PP_LAMBDA1824: (byte 2) */
 	/* PC_LAMBDA1824: (byte 2) */
 	/* ST_v2135: (byte 2) */
  bytes2word(110,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,120,109)
, bytes2word(108,70,117,110)
, bytes2word(58,51,54,55)
, bytes2word(58,49,57,45)
, bytes2word(51,54,55,58)
,	/* PP_LAMBDA1825: (byte 3) */
 	/* PC_LAMBDA1825: (byte 3) */
 	/* ST_v2131: (byte 3) */
  bytes2word(50,51,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,120)
, bytes2word(109,108,70,117)
, bytes2word(110,58,51,54)
, bytes2word(56,58,50,48)
, bytes2word(45,51,54,56)
,	/* PP_LAMBDA1826: (byte 4) */
 	/* PC_LAMBDA1826: (byte 4) */
 	/* ST_v2127: (byte 4) */
  bytes2word(58,50,53,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,46)
, bytes2word(120,109,108,70)
, bytes2word(117,110,58,51)
, bytes2word(54,57,58,50)
, bytes2word(48,45,51,54)
, bytes2word(57,58,50,54)
,	/* PP_LAMBDA1827: (byte 1) */
 	/* PC_LAMBDA1827: (byte 1) */
 	/* ST_v2123: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(46,120,109,108)
, bytes2word(70,117,110,58)
, bytes2word(51,55,48,58)
, bytes2word(50,48,45,51)
, bytes2word(55,48,58,50)
,	/* PP_NHC_46Observe_46xmlObserve: (byte 2) */
 	/* PC_NHC_46Observe_46xmlObserve: (byte 2) */
 	/* ST_v2202: (byte 2) */
  bytes2word(54,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,120,109)
, bytes2word(108,79,98,115)
, bytes2word(101,114,118,101)
,	/* PP_LAMBDA1838: (byte 1) */
 	/* PC_LAMBDA1838: (byte 1) */
 	/* ST_v2220: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(46,120,109,108)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,58)
, bytes2word(51,52,49,58)
, bytes2word(49,57,45,51)
, bytes2word(52,49,58,50)
,	/* PP_LAMBDA1839: (byte 2) */
 	/* PC_LAMBDA1839: (byte 2) */
 	/* ST_v2217: (byte 2) */
  bytes2word(55,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,120,109)
, bytes2word(108,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(58,51,52,50)
, bytes2word(58,49,57,45)
, bytes2word(51,52,50,58)
,	/* PP_LAMBDA1840: (byte 3) */
 	/* PC_LAMBDA1840: (byte 3) */
 	/* ST_v2213: (byte 3) */
  bytes2word(50,52,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,46,120)
, bytes2word(109,108,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,58,51,52)
, bytes2word(51,58,49,57)
, bytes2word(45,51,52,51)
,	/* ST_v2514: (byte 4) */
  bytes2word(58,50,52,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,58)
, bytes2word(32,78,111,32)
, bytes2word(109,97,116,99)
, bytes2word(104,105,110,103)
, bytes2word(32,97,108,116)
, bytes2word(101,114,110,97)
, bytes2word(116,105,118,101)
, bytes2word(32,105,110,32)
, bytes2word(99,97,115,101)
, bytes2word(32,101,120,112)
, bytes2word(114,101,115,115)
, bytes2word(105,111,110,32)
, bytes2word(97,116,32,50)
, bytes2word(53,55,58,52)
,	/* ST_v2452: (byte 3) */
  bytes2word(56,46,0,78)
, bytes2word(72,67,46,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,58,32)
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
, bytes2word(116,32,50,55)
, bytes2word(54,58,51,55)
,	/* ST_v2389: (byte 2) */
  bytes2word(46,0,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,58,32,78)
, bytes2word(111,32,109,97)
, bytes2word(116,99,104,105)
, bytes2word(110,103,32,97)
, bytes2word(108,116,101,114)
, bytes2word(110,97,116,105)
, bytes2word(118,101,32,105)
, bytes2word(110,32,99,97)
, bytes2word(115,101,32,101)
, bytes2word(120,112,114,101)
, bytes2word(115,115,105,111)
, bytes2word(110,32,97,116)
, bytes2word(32,50,57,49)
, bytes2word(58,51,55,46)
,	/* ST_v2337: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(58,32,78,111)
, bytes2word(32,109,97,116)
, bytes2word(99,104,105,110)
, bytes2word(103,32,97,108)
, bytes2word(116,101,114,110)
, bytes2word(97,116,105,118)
, bytes2word(101,32,105,110)
, bytes2word(32,99,97,115)
, bytes2word(101,32,101,120)
, bytes2word(112,114,101,115)
, bytes2word(115,105,111,110)
, bytes2word(32,97,116,32)
, bytes2word(51,48,53,58)
,	/* ST_v2284: (byte 4) */
  bytes2word(51,55,46,0)
, bytes2word(78,72,67,46)
, bytes2word(79,98,115,101)
, bytes2word(114,118,101,58)
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
, bytes2word(52,58,49,49)
, bytes2word(45,49,56,52)
, bytes2word(58,50,49,46)
,	/* ST_v2004: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(58,32,80,97)
, bytes2word(116,116,101,114)
, bytes2word(110,32,109,97)
, bytes2word(116,99,104,32)
, bytes2word(102,97,105,108)
, bytes2word(117,114,101,32)
, bytes2word(105,110,32,102)
, bytes2word(117,110,99,116)
, bytes2word(105,111,110,32)
, bytes2word(97,116,32,49)
, bytes2word(56,53,58,49)
, bytes2word(49,45,49,56)
, bytes2word(53,58,50,51)
,	/* ST_v2912: (byte 2) */
  bytes2word(46,0,78,111)
, bytes2word(32,100,101,102)
, bytes2word(97,117,108,116)
, bytes2word(32,100,101,102)
, bytes2word(105,110,105,116)
, bytes2word(105,111,110,32)
, bytes2word(102,111,114,32)
, bytes2word(99,108,97,115)
, bytes2word(115,32,109,101)
, bytes2word(116,104,111,100)
, bytes2word(32,111,98,115)
, bytes2word(101,114,118,101)
,	/* ST_v2699: (byte 2) */
  bytes2word(114,0,78,111)
, bytes2word(116,104,105,110)
,	/* ST_v1990: (byte 2) */
  bytes2word(103,0,79,66)
, bytes2word(83,69,82,86)
, bytes2word(69,76,79,71)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Monad_46NHC_46Observe_46MonadObserver[] = {
 };
Node PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver[] = {
 	/* ST_v2999: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,111,110,97)
, bytes2word(100,46,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,77,111)
, bytes2word(110,97,100,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,0)
,};
Node PP_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62[] = {
 };
Node PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62[] = {
 	/* ST_v2568: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,111,110,97)
, bytes2word(100,46,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,77,111)
, bytes2word(110,97,100,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,46)
, bytes2word(62,62,0,0)
,};
Node PP_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61[] = {
 };
Node PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61[] = {
 	/* ST_v2542: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,111,110,97)
, bytes2word(100,46,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,77,111)
, bytes2word(110,97,100,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,46)
,	/* PP_LAMBDA1873: (byte 4) */
 	/* PC_LAMBDA1873: (byte 4) */
 	/* ST_v2549: (byte 4) */
  bytes2word(62,62,61,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,111,110,97)
, bytes2word(100,46,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,77,111)
, bytes2word(110,97,100,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,46)
, bytes2word(62,62,61,58)
, bytes2word(50,51,49,58)
, bytes2word(51,53,45,50)
, bytes2word(51,51,58,52)
, bytes2word(54,0,0,0)
,};
Node PP_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46fail[] = {
 };
Node PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46fail[] = {
 	/* ST_v2564: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,111,110,97)
, bytes2word(100,46,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,77,111)
, bytes2word(110,97,100,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,46)
, bytes2word(102,97,105,108)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return[] = {
 };
Node PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return[] = {
 	/* ST_v2555: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,111,110,97)
, bytes2word(100,46,78,72)
, bytes2word(67,46,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,46,77,111)
, bytes2word(110,97,100,79)
, bytes2word(98,115,101,114)
, bytes2word(118,101,114,46)
, bytes2word(114,101,116,117)
,	/* PP_LAMBDA1874: (byte 3) */
 	/* PC_LAMBDA1874: (byte 3) */
 	/* ST_v2560: (byte 3) */
  bytes2word(114,110,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,77)
, bytes2word(111,110,97,100)
, bytes2word(46,78,72,67)
, bytes2word(46,79,98,115)
, bytes2word(101,114,118,101)
, bytes2word(46,77,111,110)
, bytes2word(97,100,79,98)
, bytes2word(115,101,114,118)
, bytes2word(101,114,46,114)
, bytes2word(101,116,117,114)
, bytes2word(110,58,50,51)
, bytes2word(48,58,51,53)
, bytes2word(45,50,51,48)
,	/* ST_v2352: (byte 4) */
  bytes2word(58,53,48,0)
, bytes2word(84,104,101,32)
, bytes2word(103,108,111,98)
, bytes2word(97,108,32,111)
, bytes2word(98,115,101,114)
, bytes2word(118,101,32,115)
, bytes2word(116,97,116,101)
, bytes2word(32,105,115,32)
, bytes2word(110,111,116,32)
, bytes2word(101,110,97,98)
,	/* ST_v2734: (byte 4) */
  bytes2word(108,101,100,0)
,	/* ST_v2671: (byte 3) */
  bytes2word(91,93,0,97)
, bytes2word(114,114,97,121)
,	/* ST_v2183: (byte 1) */
  bytes2word(0,99,111,110)
,	/* ST_v2163: (byte 2) */
  bytes2word(115,0,101,110)
,	/* ST_v2136: (byte 4) */
  bytes2word(116,101,114,0)
,	/* ST_v2132: (byte 4) */
  bytes2word(102,117,110,0)
, bytes2word(110,111,100,101)
,	/* ST_v2221: (byte 1) */
  bytes2word(0,111,98,115)
, bytes2word(101,114,118,101)
,	/* ST_v1986: (byte 1) */
  bytes2word(0,111,98,115)
, bytes2word(101,114,118,101)
, bytes2word(46,120,109,108)
,	/* ST_v2128: (byte 1) */
  bytes2word(0,112,110,111)
,	/* ST_v2187: (byte 3) */
  bytes2word(100,101,0,112)
, bytes2word(111,114,116,115)
,	/* ST_v2124: (byte 1) */
  bytes2word(0,112,112,111)
,	/* ST_v2214: (byte 3) */
  bytes2word(114,116,0,116)
,	/* ST_v1977: (byte 4) */
  bytes2word(101,120,116,0)
, bytes2word(116,120,116,32)
, bytes2word(61,32,0,0)
,	/* PS_v2918: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observe)
, useLabel(PC_NHC_46Observe_46observe)
,	/* PS_v2920: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observe)
, useLabel(PC_NHC_46Observe_46generateContext)
,	/* PS_v2914: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observe_95)
, useLabel(PC_NHC_46Observe_46observe_95)
,	/* PS_v2916: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observe_95)
, useLabel(PC_NHC_46Observe_46generateContext)
,	/* PS_v2516: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observer_95)
, useLabel(PC_NHC_46Observe_46observer_95)
,	/* PS_v2518: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observer_95)
, useLabel(PC_NHC_46Observe_46sendEnterPacket)
,	/* PS_v2922: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observer)
, useLabel(PC_NHC_46Observe_46observer)
,	/* PS_v2872: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeLit)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v2875: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeLit)
, useLabel(PC_Prelude_46_36)
,	/* PS_v2870: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeLit)
, useLabel(PC_Prelude_46seq)
,	/* PS_v2871: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeLit)
, useLabel(PC_Prelude_46show)
,	/* PS_v2868: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeLit)
, useLabel(PC_NHC_46Observe_46observeLit)
,	/* PS_v2874: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeLit)
, useLabel(PC_NHC_46Observe_46sendObservePacket)
,	/* PS_v2873: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeLit)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
,	/* PS_v2625: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observerM)
, useLabel(PC_Prelude_46_62_62_61)
,	/* PS_v2622: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observerM)
, useLabel(PC_NHC_46Observe_46observerM)
,	/* PS_v2624: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observerM)
, useLabel(PC_LAMBDA1883)
,	/* PS_v2102: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeParent)
, useLabel(PC_NHC_46Observe_46observeParent)
,	/* PS_v2105: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observePort)
, useLabel(PC_NHC_46Observe_46observePort)
,	/* PS_v2289: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeDepth)
, useLabel(PC_NHC_46Observe_46observeDepth)
,	/* PS_v2280: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeUniq)
, useLabel(PC_NHC_46Internal_46_95patternMatchFail)
,	/* PS_v2276: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeUniq)
, useLabel(PC_NHC_46Observe_46observeUniq)
,	/* PS_v2279: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeUniq)
, useLabel(PC_LAMBDA1846)
,	/* PS_v2000: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeHandle)
, useLabel(PC_NHC_46Internal_46_95patternMatchFail)
,	/* PS_v1996: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeHandle)
, useLabel(PC_NHC_46Observe_46observeHandle)
,	/* PS_v1999: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeHandle)
, useLabel(PC_LAMBDA1814)
,	/* PS_v1939: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46openObserveGlobal)
, useLabel(PC_Prelude_46catch)
,	/* PS_v1937: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46openObserveGlobal)
, useLabel(PC_System_46getEnv)
,	/* PS_v1934: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46openObserveGlobal)
, useLabel(PC_NHC_46Observe_46openObserveGlobal)
,	/* PS_v1941: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46openObserveGlobal)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v1936: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46openObserveGlobal)
, useLabel(PC_LAMBDA1805)
,	/* PS_v1938: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46openObserveGlobal)
, useLabel(PC_LAMBDA1807)
,	/* PS_v1940: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46openObserveGlobal)
, useLabel(PC_LAMBDA1813)
,	/* PS_v2008: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46closeObserveGlobal)
, useLabel(PC_NHC_46IOExtras_46readIORef)
,	/* PS_v2006: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46closeObserveGlobal)
, useLabel(PC_NHC_46Observe_46closeObserveGlobal)
,	/* PS_v2010: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46closeObserveGlobal)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v2009: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46closeObserveGlobal)
, useLabel(PC_LAMBDA1816)
,	/* PS_v1931: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeGlobal)
, useLabel(PC_NHC_46IOExtras_46newIORef)
,	/* PS_v1932: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeGlobal)
, useLabel(PC_Prelude_46_36)
,	/* PS_v1930: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeGlobal)
, useLabel(PC_NHC_46Observe_46NoObserveGlobal)
,	/* PS_v1928: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46observeGlobal)
, useLabel(PC_NHC_46Observe_46observeGlobal)
,	/* PS_v2286: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46runMO)
, useLabel(PC_NHC_46Observe_46runMO)
,	/* PS_v2573: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46_60_36_60)
, useLabel(PC_Monad_46ap)
,	/* PS_v2571: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46_60_36_60)
, useLabel(PC_NHC_46Observe_46_60_36_60)
,	/* PS_v2524: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46thunk)
, useLabel(PC_Prelude_46_36)
,	/* PS_v2520: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46thunk)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2522: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46thunk)
, useLabel(PC_LAMBDA1870)
,	/* PS_v2523: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46thunk)
, useLabel(PC_LAMBDA1872)
,	/* PS_v2470: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46generateContext)
, useLabel(PC_NHC_46IOExtras_46readIORef)
,	/* PS_v2473: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46generateContext)
, useLabel(PC_Prelude_46_36)
,	/* PS_v2468: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46generateContext)
, useLabel(PC_NHC_46Observe_46generateContext)
,	/* PS_v2472: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46generateContext)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v2471: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46generateContext)
, useLabel(PC_LAMBDA1869)
,	/* PS_v2407: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46sendObservePacket)
, useLabel(PC_NHC_46IOExtras_46readIORef)
,	/* PS_v2410: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46sendObservePacket)
, useLabel(PC_Prelude_46_36)
,	/* PS_v2405: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46sendObservePacket)
, useLabel(PC_NHC_46Observe_46sendObservePacket)
,	/* PS_v2409: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46sendObservePacket)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v2408: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46sendObservePacket)
, useLabel(PC_LAMBDA1865)
,	/* PS_v2356: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46sendEnterPacket)
, useLabel(PC_NHC_46IOExtras_46readIORef)
,	/* PS_v2359: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46sendEnterPacket)
, useLabel(PC_Prelude_46_36)
,	/* PS_v2354: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46sendEnterPacket)
, useLabel(PC_NHC_46Observe_46sendEnterPacket)
,	/* PS_v2358: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46sendEnterPacket)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v2357: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46sendEnterPacket)
, useLabel(PC_LAMBDA1858)
,	/* PS_v2294: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46sendObserveFnPacket)
, useLabel(PC_NHC_46IOExtras_46readIORef)
,	/* PS_v2297: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46sendObserveFnPacket)
, useLabel(PC_Prelude_46_36)
,	/* PS_v2292: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46sendObserveFnPacket)
, useLabel(PC_NHC_46Observe_46sendObserveFnPacket)
,	/* PS_v2296: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46sendObserveFnPacket)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v2295: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46sendObserveFnPacket)
, useLabel(PC_LAMBDA1853)
,	/* PS_v2270: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46ourCatchAll)
, useLabel(PC_Prelude_46return)
,	/* PS_v2269: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46ourCatchAll)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v2267: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46ourCatchAll)
, useLabel(PC_NHC_46Observe_46ourCatchAll)
,	/* PS_v2051: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46mkXmlNode)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v2053: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46mkXmlNode)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v2046: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46mkXmlNode)
, useLabel(PC_NHC_46Observe_46mkXmlNode)
,	/* PS_v2050: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46mkXmlNode)
, useLabel(PC_NHC_46Observe_46Prelude_46393_46showAttrs)
,	/* PS_v2048: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46mkXmlNode)
, useLabel(PC_LAMBDA1821)
,	/* PS_v2049: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46mkXmlNode)
, useLabel(PC_LAMBDA1822)
,	/* PS_v2052: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46mkXmlNode)
, useLabel(PC_LAMBDA1823)
,	/* PS_v2226: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46showXmlString)
, useLabel(PC_Prelude_46concatMap)
,	/* PS_v2223: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46showXmlString)
, useLabel(PC_NHC_46Observe_46showXmlString)
,	/* PS_v2225: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46showXmlString)
, useLabel(PC_NHC_46Observe_46Prelude_46399_46fixChar)
,	/* PS_v2206: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlObserve)
, useLabel(PC_Prelude_462)
,	/* PS_v2208: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlObserve)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v2209: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlObserve)
, useLabel(PC_Prelude_46_58)
,	/* PS_v2210: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlObserve)
, useLabel(PC_NHC_46Observe_46mkXmlNode)
,	/* PS_v2201: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlObserve)
, useLabel(PC_NHC_46Observe_46xmlObserve)
,	/* PS_v2205: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlObserve)
, useLabel(PC_Prelude_46Show_46Prelude_46Int_46show)
,	/* PS_v2203: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlObserve)
, useLabel(PC_LAMBDA1838)
,	/* PS_v2204: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlObserve)
, useLabel(PC_LAMBDA1839)
,	/* PS_v2207: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlObserve)
, useLabel(PC_LAMBDA1840)
,	/* PS_v2170: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlCons)
, useLabel(PC_Prelude_462)
,	/* PS_v2177: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlCons)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v2178: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlCons)
, useLabel(PC_Prelude_46_58)
,	/* PS_v2172: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlCons)
, useLabel(PC_NHC_46Observe_46observeParent)
,	/* PS_v2174: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlCons)
, useLabel(PC_NHC_46Observe_46observePort)
,	/* PS_v2179: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlCons)
, useLabel(PC_NHC_46Observe_46mkXmlNode)
,	/* PS_v2165: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlCons)
, useLabel(PC_NHC_46Observe_46xmlCons)
,	/* PS_v2169: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlCons)
, useLabel(PC_Prelude_46Show_46Prelude_46Int_46show)
,	/* PS_v2167: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlCons)
, useLabel(PC_LAMBDA1832)
,	/* PS_v2168: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlCons)
, useLabel(PC_LAMBDA1833)
,	/* PS_v2171: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlCons)
, useLabel(PC_LAMBDA1834)
,	/* PS_v2173: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlCons)
, useLabel(PC_LAMBDA1835)
,	/* PS_v2175: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlCons)
, useLabel(PC_LAMBDA1836)
,	/* PS_v2176: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlCons)
, useLabel(PC_LAMBDA1837)
,	/* PS_v2143: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlEnter)
, useLabel(PC_Prelude_462)
,	/* PS_v2148: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlEnter)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v2149: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlEnter)
, useLabel(PC_Prelude_46_58)
,	/* PS_v2145: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlEnter)
, useLabel(PC_NHC_46Observe_46observeParent)
,	/* PS_v2147: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlEnter)
, useLabel(PC_NHC_46Observe_46observePort)
,	/* PS_v2150: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlEnter)
, useLabel(PC_NHC_46Observe_46mkXmlNode)
,	/* PS_v2138: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlEnter)
, useLabel(PC_NHC_46Observe_46xmlEnter)
,	/* PS_v2142: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlEnter)
, useLabel(PC_Prelude_46Show_46Prelude_46Int_46show)
,	/* PS_v2140: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlEnter)
, useLabel(PC_LAMBDA1828)
,	/* PS_v2141: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlEnter)
, useLabel(PC_LAMBDA1829)
,	/* PS_v2144: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlEnter)
, useLabel(PC_LAMBDA1830)
,	/* PS_v2146: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlEnter)
, useLabel(PC_LAMBDA1831)
,	/* PS_v2113: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlFun)
, useLabel(PC_Prelude_462)
,	/* PS_v2118: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlFun)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v2119: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlFun)
, useLabel(PC_Prelude_46_58)
,	/* PS_v2115: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlFun)
, useLabel(PC_NHC_46Observe_46observeParent)
,	/* PS_v2117: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlFun)
, useLabel(PC_NHC_46Observe_46observePort)
,	/* PS_v2120: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlFun)
, useLabel(PC_NHC_46Observe_46mkXmlNode)
,	/* PS_v2108: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlFun)
, useLabel(PC_NHC_46Observe_46xmlFun)
,	/* PS_v2112: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlFun)
, useLabel(PC_Prelude_46Show_46Prelude_46Int_46show)
,	/* PS_v2110: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlFun)
, useLabel(PC_LAMBDA1824)
,	/* PS_v2111: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlFun)
, useLabel(PC_LAMBDA1825)
,	/* PS_v2114: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlFun)
, useLabel(PC_LAMBDA1826)
,	/* PS_v2116: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46xmlFun)
, useLabel(PC_LAMBDA1827)
,	/* PS_v2031: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46runO)
, useLabel(PC__40_41)
,	/* PS_v2029: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46runO)
, useLabel(PC_NHC_46Observe_46runO)
,	/* PS_v2032: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46runO)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v2033: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46runO)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,	/* PS_v2043: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46printO)
, useLabel(PC_Prelude_46print)
,	/* PS_v2044: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46printO)
, useLabel(PC_NHC_46Observe_46runO)
,	/* PS_v2041: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46printO)
, useLabel(PC_NHC_46Observe_46printO)
,	/* PS_v2037: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46putStrO)
, useLabel(PC_Prelude_46putStr)
,	/* PS_v2038: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46putStrO)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v2039: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46putStrO)
, useLabel(PC_NHC_46Observe_46runO)
,	/* PS_v2035: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46putStrO)
, useLabel(PC_NHC_46Observe_46putStrO)
,	/* PS_v2908: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46_95_46observer)
, useLabel(PC_NHC_46Internal_46_95noMethodError)
,	/* PS_v2905: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46_95_46observer)
, useLabel(PC_NHC_46Observe_46_95_46observer)
,	/* PS_v2907: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46_95_46observer)
, useLabel(PC_LAMBDA1911)
,	/* PS_v2903: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Int_46observer)
, useLabel(PC_NHC_46Observe_46observeLit)
,	/* PS_v2901: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Int_46observer)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46Int_46observer)
,	/* PS_v2899: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Bool_46observer)
, useLabel(PC_NHC_46Observe_46observeLit)
,	/* PS_v2897: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Bool_46observer)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46Bool_46observer)
,	/* PS_v2895: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Integer_46observer)
, useLabel(PC_NHC_46Observe_46observeLit)
,	/* PS_v2893: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Integer_46observer)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46Integer_46observer)
,	/* PS_v2891: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Float_46observer)
, useLabel(PC_NHC_46Observe_46observeLit)
,	/* PS_v2889: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Float_46observer)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46Float_46observer)
,	/* PS_v2887: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Double_46observer)
, useLabel(PC_NHC_46Observe_46observeLit)
,	/* PS_v2885: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Double_46observer)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46Double_46observer)
,	/* PS_v2883: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Char_46observer)
, useLabel(PC_NHC_46Observe_46observeLit)
,	/* PS_v2881: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Char_46observer)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46Char_46observer)
,	/* PS_v2879: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46_40_41_46observer)
, useLabel(PC_NHC_46Observe_46observeLit)
,	/* PS_v2877: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46_40_41_46observer)
, useLabel(PC_NHC_46Observe_46Observable_46_40_41_46observer)
,	/* PS_v2858: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_462_46observer)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v2854: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_462_46observer)
, useLabel(PC_NHC_46Observe_46_60_36_60)
,	/* PS_v2857: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_462_46observer)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2859: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_462_46observer)
, useLabel(PC_NHC_46Observe_46sendObservePacket)
,	/* PS_v2850: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_462_46observer)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_462_46observer)
,	/* PS_v2856: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_462_46observer)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
,	/* PS_v2853: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_462_46observer)
, useLabel(PC_LAMBDA1909)
,	/* PS_v2855: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_462_46observer)
, useLabel(PC_LAMBDA1910)
,	/* PS_v2823: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_463_46observer)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2826: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_463_46observer)
, useLabel(PC_NHC_46Observe_46sendObservePacket)
,	/* PS_v2819: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_463_46observer)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_463_46observer)
,	/* PS_v2825: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_463_46observer)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2822: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_463_46observer)
, useLabel(PC_LAMBDA1905)
,	/* PS_v2824: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_463_46observer)
, useLabel(PC_LAMBDA1908)
,	/* PS_v2786: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_464_46observer)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2789: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_464_46observer)
, useLabel(PC_NHC_46Observe_46sendObservePacket)
,	/* PS_v2782: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_464_46observer)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_464_46observer)
,	/* PS_v2788: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_464_46observer)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2785: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_464_46observer)
, useLabel(PC_LAMBDA1900)
,	/* PS_v2787: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_464_46observer)
, useLabel(PC_LAMBDA1904)
,	/* PS_v2742: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_465_46observer)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2745: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_465_46observer)
, useLabel(PC_NHC_46Observe_46sendObservePacket)
,	/* PS_v2738: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_465_46observer)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_465_46observer)
,	/* PS_v2744: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_465_46observer)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2741: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_465_46observer)
, useLabel(PC_LAMBDA1894)
,	/* PS_v2743: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_465_46observer)
, useLabel(PC_LAMBDA1899)
,	/* PS_v2708: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46_91_93_46observer)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v2712: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46_91_93_46observer)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2710: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46_91_93_46observer)
, useLabel(PC_NHC_46Observe_46sendObservePacket)
,	/* PS_v2704: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46_91_93_46observer)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46_91_93_46observer)
,	/* PS_v2714: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46_91_93_46observer)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2709: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46_91_93_46observer)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
,	/* PS_v2707: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46_91_93_46observer)
, useLabel(PC_LAMBDA1890)
,	/* PS_v2711: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46_91_93_46observer)
, useLabel(PC_LAMBDA1891)
,	/* PS_v2713: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46_91_93_46observer)
, useLabel(PC_LAMBDA1893)
,	/* PS_v2680: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Maybe_46observer)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v2684: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Maybe_46observer)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2682: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Maybe_46observer)
, useLabel(PC_NHC_46Observe_46sendObservePacket)
,	/* PS_v2676: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Maybe_46observer)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46Maybe_46observer)
,	/* PS_v2686: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Maybe_46observer)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2681: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Maybe_46observer)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
,	/* PS_v2679: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Maybe_46observer)
, useLabel(PC_LAMBDA1887)
,	/* PS_v2683: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Maybe_46observer)
, useLabel(PC_LAMBDA1888)
,	/* PS_v2685: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Maybe_46observer)
, useLabel(PC_LAMBDA1889)
,	/* PS_v2649: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Array_46Array_46observer)
, useLabel(PC_Array_46bounds)
,	/* PS_v2650: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Array_46Array_46observer)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2653: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Array_46Array_46observer)
, useLabel(PC_NHC_46Observe_46sendObservePacket)
,	/* PS_v2645: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Array_46Array_46observer)
, useLabel(PC_NHC_46Observe_46Observable_46Array_46Array_46observer)
,	/* PS_v2652: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Array_46Array_46observer)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2648: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Array_46Array_46observer)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_462)
,	/* PS_v2647: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Array_46Array_46observer)
, useLabel(PC_LAMBDA1884)
,	/* PS_v2651: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Array_46Array_46observer)
, useLabel(PC_LAMBDA1886)
,	/* PS_v2600: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46NHC_46Internal_46IO_46observer)
, useLabel(PC_NHC_46Observe_46Observable_46NHC_46Internal_46IO_46observer)
,	/* PS_v2603: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46NHC_46Internal_46IO_46observer)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v2602: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46NHC_46Internal_46IO_46observer)
, useLabel(PC_LAMBDA1880)
,	/* PS_v2575: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46_45_62_46observer)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46_45_62_46observer)
,	/* PS_v2577: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46_45_62_46observer)
, useLabel(PC_LAMBDA1877)
,	/* PS_v2557: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
, useLabel(PC_NHC_46Observe_46MonadObserver)
,	/* PS_v2554: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
,	/* PS_v2556: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
, useLabel(PC_LAMBDA1874)
,	/* PS_v2544: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
, useLabel(PC_NHC_46Observe_46MonadObserver)
,	/* PS_v2541: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2543: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
, useLabel(PC_LAMBDA1873)
,	/* PS_v2078: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Prelude_46393_46showAttrs)
, useLabel(PC_Prelude_46unwords)
,	/* PS_v2077: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Prelude_46393_46showAttrs)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v2076: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Prelude_46393_46showAttrs)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v2071: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Prelude_46393_46showAttrs)
, useLabel(PC_NHC_46Observe_46Prelude_46393_46showAttrs)
,	/* PS_v2074: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Prelude_46393_46showAttrs)
, useLabel(PC_LAMBDA1817)
,	/* PS_v2075: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Prelude_46393_46showAttrs)
, useLabel(PC_LAMBDA1820)
,	/* PS_v2244: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Prelude_46399_46fixChar)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v2245: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Prelude_46399_46fixChar)
, useLabel(PC_Prelude_46_58)
,	/* PS_v2236: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Prelude_46399_46fixChar)
, useLabel(PC_NHC_46Observe_46Prelude_46399_46fixChar)
,	/* PS_v2239: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Prelude_46399_46fixChar)
, useLabel(PC_LAMBDA1841)
,	/* PS_v2240: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Prelude_46399_46fixChar)
, useLabel(PC_LAMBDA1842)
,	/* PS_v2241: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Prelude_46399_46fixChar)
, useLabel(PC_LAMBDA1843)
,	/* PS_v2242: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Prelude_46399_46fixChar)
, useLabel(PC_LAMBDA1844)
,	/* PS_v2243: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Prelude_46399_46fixChar)
, useLabel(PC_LAMBDA1845)
,	/* PS_v2569: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62)
, useLabel(PC_Prelude_46_95_46_62_62)
,	/* PS_v2567: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62)
,	/* PS_v2565: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46fail)
, useLabel(PC_Prelude_46_95_46fail)
,	/* PS_v2563: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46fail)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46fail)
,	/* PS_v2584: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46NHC_46Observe_46Observable_46Prelude_46_45_62_46observer_39451)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2587: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46NHC_46Observe_46Observable_46Prelude_46_45_62_46observer_39451)
, useLabel(PC_NHC_46Observe_46sendObserveFnPacket)
,	/* PS_v2583: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46NHC_46Observe_46Observable_46Prelude_46_45_62_46observer_39451)
, useLabel(PC_NHC_46Observe_46NHC_46Observe_46Observable_46Prelude_46_45_62_46observer_39451)
,	/* PS_v2586: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46NHC_46Observe_46Observable_46Prelude_46_45_62_46observer_39451)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2585: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46NHC_46Observe_46Observable_46Prelude_46_45_62_46observer_39451)
, useLabel(PC_LAMBDA1876)
,	/* PS_v2998: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_Prelude_46Monad_46NHC_46Observe_46MonadObserver)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver)
,	/* PS_v3000: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_Prelude_46Monad_46NHC_46Observe_46MonadObserver)
, useLabel(PC_Prelude_464)
,	/* PS_v2955: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_462)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_462_46observer)
,	/* PS_v2953: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_462)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_462)
,	/* PS_v2956: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_462)
, useLabel(PC_Prelude_461)
,	/* PS_v2975: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46_91_93)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46_91_93_46observer)
,	/* PS_v2973: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46_91_93)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46_91_93)
,	/* PS_v2976: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46_91_93)
, useLabel(PC_Prelude_461)
,	/* PS_v2927: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Int)
, useLabel(PC_Prelude_461)
,	/* PS_v2925: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Int)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46Int)
,	/* PS_v2931: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Bool)
, useLabel(PC_Prelude_461)
,	/* PS_v2929: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Bool)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46Bool)
,	/* PS_v2935: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Integer)
, useLabel(PC_Prelude_461)
,	/* PS_v2933: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Integer)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46Integer)
,	/* PS_v2939: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Float)
, useLabel(PC_Prelude_461)
,	/* PS_v2937: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Float)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46Float)
,	/* PS_v2943: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Double)
, useLabel(PC_Prelude_461)
,	/* PS_v2941: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Double)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46Double)
,	/* PS_v2947: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Char)
, useLabel(PC_Prelude_461)
,	/* PS_v2945: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Char)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46Char)
,	/* PS_v2951: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46_40_41)
, useLabel(PC_Prelude_461)
,	/* PS_v2949: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46_40_41)
, useLabel(PC_NHC_46Observe_46Observable_46_40_41)
,	/* PS_v2960: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_463)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_463_46observer)
,	/* PS_v2961: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_463)
, useLabel(PC_Prelude_461)
,	/* PS_v2958: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_463)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_463)
,	/* PS_v2965: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_464)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_464_46observer)
,	/* PS_v2966: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_464)
, useLabel(PC_Prelude_461)
,	/* PS_v2963: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_464)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_464)
,	/* PS_v2970: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_465)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_465_46observer)
,	/* PS_v2971: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_465)
, useLabel(PC_Prelude_461)
,	/* PS_v2968: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_465)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_465)
,	/* PS_v2980: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Maybe)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46Maybe_46observer)
,	/* PS_v2981: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Maybe)
, useLabel(PC_Prelude_461)
,	/* PS_v2978: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46Maybe)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46Maybe)
,	/* PS_v2985: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Array_46Array)
, useLabel(PC_NHC_46Observe_46Observable_46Array_46Array_46observer)
,	/* PS_v2986: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Array_46Array)
, useLabel(PC_Prelude_461)
,	/* PS_v2983: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Array_46Array)
, useLabel(PC_NHC_46Observe_46Observable_46Array_46Array)
,	/* PS_v2990: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46NHC_46Internal_46IO)
, useLabel(PC_NHC_46Observe_46Observable_46NHC_46Internal_46IO_46observer)
,	/* PS_v2991: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46NHC_46Internal_46IO)
, useLabel(PC_Prelude_461)
,	/* PS_v2988: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46NHC_46Internal_46IO)
, useLabel(PC_NHC_46Observe_46Observable_46NHC_46Internal_46IO)
,	/* PS_v2995: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46_45_62)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46_45_62_46observer)
,	/* PS_v2996: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46_45_62)
, useLabel(PC_Prelude_461)
,	/* PS_v2993: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_NHC_46Observe_46Observable_46Prelude_46_45_62)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46_45_62)
,	/* PS_v1988: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1805)
, useLabel(PC_LAMBDA1805)
,	/* PS_v1984: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1806)
, useLabel(PC_LAMBDA1806)
,	/* PS_v1982: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1807)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v1981: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1807)
, useLabel(PC_LAMBDA1806)
,	/* PS_v1979: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1807)
, useLabel(PC_LAMBDA1807)
,	/* PS_v1975: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1808)
, useLabel(PC_LAMBDA1808)
,	/* PS_v1971: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1809)
, useLabel(PC_LAMBDA1809)
,	/* PS_v1967: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1810)
, useLabel(PC_LAMBDA1810)
,	/* PS_v1965: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1811)
, useLabel(PC_NHC_46Observe_46ObserveGlobal)
,	/* PS_v1963: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1811)
, useLabel(PC_LAMBDA1811)
,	/* PS_v1957: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1812)
, useLabel(PC_IO_46hPutStrLn)
,	/* PS_v1960: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1812)
, useLabel(PC_NHC_46IOExtras_46writeIORef)
,	/* PS_v1961: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1812)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,	/* PS_v1956: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1812)
, useLabel(PC_LAMBDA1809)
,	/* PS_v1958: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1812)
, useLabel(PC_LAMBDA1810)
,	/* PS_v1959: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1812)
, useLabel(PC_LAMBDA1811)
,	/* PS_v1954: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1812)
, useLabel(PC_LAMBDA1812)
,	/* PS_v1947: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1813)
, useLabel(PC_Prelude_46putStrLn)
,	/* PS_v1949: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1813)
, useLabel(PC_IO_46openFile)
,	/* PS_v1948: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1813)
, useLabel(PC_IO_46WriteMode)
,	/* PS_v1946: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1813)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v1951: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1813)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v1952: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1813)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,	/* PS_v1945: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1813)
, useLabel(PC_LAMBDA1808)
,	/* PS_v1950: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1813)
, useLabel(PC_LAMBDA1812)
,	/* PS_v1943: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1813)
, useLabel(PC_LAMBDA1813)
,	/* PS_v2002: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1814)
, useLabel(PC_LAMBDA1814)
,	/* PS_v2025: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1815)
, useLabel(PC_LAMBDA1815)
,	/* PS_v2019: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1816)
, useLabel(PC_IO_46try)
,	/* PS_v2016: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1816)
, useLabel(PC_IO_46hPutStrLn)
,	/* PS_v2017: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1816)
, useLabel(PC_IO_46hClose)
,	/* PS_v2021: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1816)
, useLabel(PC_NHC_46IOExtras_46writeIORef)
,	/* PS_v2022: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1816)
, useLabel(PC__40_41)
,	/* PS_v2014: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1816)
, useLabel(PC_NHC_46Observe_46observeHandle)
,	/* PS_v2020: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1816)
, useLabel(PC_NHC_46Observe_46NoObserveGlobal)
,	/* PS_v2023: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1816)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v2018: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1816)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,	/* PS_v2015: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1816)
, useLabel(PC_LAMBDA1815)
,	/* PS_v2012: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1816)
, useLabel(PC_LAMBDA1816)
,	/* PS_v2098: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1817)
, useLabel(PC_LAMBDA1817)
,	/* PS_v2094: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1818)
, useLabel(PC_LAMBDA1818)
,	/* PS_v2090: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1819)
, useLabel(PC_LAMBDA1819)
,	/* PS_v2087: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1820)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v2088: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1820)
, useLabel(PC_Prelude_46_58)
,	/* PS_v2085: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1820)
, useLabel(PC_LAMBDA1818)
,	/* PS_v2086: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1820)
, useLabel(PC_LAMBDA1819)
,	/* PS_v2082: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1820)
, useLabel(PC_LAMBDA1820)
,	/* PS_v2063: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1821)
, useLabel(PC_LAMBDA1821)
,	/* PS_v2059: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1822)
, useLabel(PC_LAMBDA1822)
,	/* PS_v2055: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1823)
, useLabel(PC_LAMBDA1823)
,	/* PS_v2134: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1824)
, useLabel(PC_LAMBDA1824)
,	/* PS_v2130: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1825)
, useLabel(PC_LAMBDA1825)
,	/* PS_v2126: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1826)
, useLabel(PC_LAMBDA1826)
,	/* PS_v2122: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1827)
, useLabel(PC_LAMBDA1827)
,	/* PS_v2161: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1828)
, useLabel(PC_LAMBDA1828)
,	/* PS_v2158: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1829)
, useLabel(PC_LAMBDA1829)
,	/* PS_v2155: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1830)
, useLabel(PC_LAMBDA1830)
,	/* PS_v2152: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1831)
, useLabel(PC_LAMBDA1831)
,	/* PS_v2198: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1832)
, useLabel(PC_LAMBDA1832)
,	/* PS_v2195: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1833)
, useLabel(PC_LAMBDA1833)
,	/* PS_v2192: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1834)
, useLabel(PC_LAMBDA1834)
,	/* PS_v2189: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1835)
, useLabel(PC_LAMBDA1835)
,	/* PS_v2185: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1836)
, useLabel(PC_LAMBDA1836)
,	/* PS_v2181: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1837)
, useLabel(PC_LAMBDA1837)
,	/* PS_v2219: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1838)
, useLabel(PC_LAMBDA1838)
,	/* PS_v2216: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1839)
, useLabel(PC_LAMBDA1839)
,	/* PS_v2212: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1840)
, useLabel(PC_LAMBDA1840)
,	/* PS_v2263: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1841)
, useLabel(PC_LAMBDA1841)
,	/* PS_v2259: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1842)
, useLabel(PC_LAMBDA1842)
,	/* PS_v2255: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1843)
, useLabel(PC_LAMBDA1843)
,	/* PS_v2251: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1844)
, useLabel(PC_LAMBDA1844)
,	/* PS_v2247: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1845)
, useLabel(PC_LAMBDA1845)
,	/* PS_v2282: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1846)
, useLabel(PC_LAMBDA1846)
,	/* PS_v2350: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1847)
, useLabel(PC_LAMBDA1847)
,	/* PS_v2346: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1848)
, useLabel(PC_Prelude_46error)
,	/* PS_v2347: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1848)
, useLabel(PC__40_41)
,	/* PS_v2348: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1848)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v2345: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1848)
, useLabel(PC_LAMBDA1847)
,	/* PS_v2343: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1848)
, useLabel(PC_LAMBDA1848)
,	/* PS_v2335: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1849)
, useLabel(PC_LAMBDA1849)
,	/* PS_v2333: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1850)
, useLabel(PC_NHC_46Internal_46_95patternMatchFail)
,	/* PS_v2331: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1850)
, useLabel(PC_NHC_46Observe_46ObserveGlobal)
,	/* PS_v2330: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1850)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_43)
,	/* PS_v2332: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1850)
, useLabel(PC_LAMBDA1849)
,	/* PS_v2327: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1850)
, useLabel(PC_LAMBDA1850)
,	/* PS_v2320: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1851)
, useLabel(PC_LAMBDA1851)
,	/* PS_v2317: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1852)
, useLabel(PC_LAMBDA1852)
,	/* PS_v2313: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1853)
, useLabel(PC_IO_46hPutStrLn)
,	/* PS_v2304: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1853)
, useLabel(PC_NHC_46IOExtras_46writeIORef)
,	/* PS_v2308: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1853)
, useLabel(PC_NHC_46Internal_46_95apply3)
,	/* PS_v2306: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1853)
, useLabel(PC_NHC_46Observe_46observeDepth)
,	/* PS_v2302: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1853)
, useLabel(PC_NHC_46Observe_46observeUniq)
,	/* PS_v2311: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1853)
, useLabel(PC_NHC_46Observe_46observeHandle)
,	/* PS_v2305: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1853)
, useLabel(PC_NHC_46Observe_46runMO)
,	/* PS_v2312: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1853)
, useLabel(PC_NHC_46Observe_46xmlFun)
,	/* PS_v2314: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1853)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v2315: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1853)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,	/* PS_v2307: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1853)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_45)
,	/* PS_v2301: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1853)
, useLabel(PC_LAMBDA1848)
,	/* PS_v2303: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1853)
, useLabel(PC_LAMBDA1850)
,	/* PS_v2309: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1853)
, useLabel(PC_LAMBDA1851)
,	/* PS_v2310: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1853)
, useLabel(PC_LAMBDA1852)
,	/* PS_v2299: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1853)
, useLabel(PC_LAMBDA1853)
,	/* PS_v2402: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1854)
, useLabel(PC_LAMBDA1854)
,	/* PS_v2398: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1855)
, useLabel(PC_Prelude_46error)
,	/* PS_v2399: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1855)
, useLabel(PC__40_41)
,	/* PS_v2400: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1855)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v2397: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1855)
, useLabel(PC_LAMBDA1854)
,	/* PS_v2395: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1855)
, useLabel(PC_LAMBDA1855)
,	/* PS_v2387: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1856)
, useLabel(PC_LAMBDA1856)
,	/* PS_v2385: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1857)
, useLabel(PC_NHC_46Internal_46_95patternMatchFail)
,	/* PS_v2383: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1857)
, useLabel(PC_NHC_46Observe_46ObserveGlobal)
,	/* PS_v2382: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1857)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_43)
,	/* PS_v2384: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1857)
, useLabel(PC_LAMBDA1856)
,	/* PS_v2379: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1857)
, useLabel(PC_LAMBDA1857)
,	/* PS_v2369: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1858)
, useLabel(PC_IO_46hPutStrLn)
,	/* PS_v2366: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1858)
, useLabel(PC_NHC_46IOExtras_46writeIORef)
,	/* PS_v2371: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1858)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v2370: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1858)
, useLabel(PC_NHC_46Observe_46observer)
,	/* PS_v2364: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1858)
, useLabel(PC_NHC_46Observe_46observeUniq)
,	/* PS_v2367: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1858)
, useLabel(PC_NHC_46Observe_46observeHandle)
,	/* PS_v2372: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1858)
, useLabel(PC_NHC_46Observe_46ourCatchAll)
,	/* PS_v2368: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1858)
, useLabel(PC_NHC_46Observe_46xmlEnter)
,	/* PS_v2373: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1858)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,	/* PS_v2363: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1858)
, useLabel(PC_LAMBDA1855)
,	/* PS_v2365: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1858)
, useLabel(PC_LAMBDA1857)
,	/* PS_v2361: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1858)
, useLabel(PC_LAMBDA1858)
,	/* PS_v2465: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1859)
, useLabel(PC_LAMBDA1859)
,	/* PS_v2461: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1860)
, useLabel(PC_Prelude_46error)
,	/* PS_v2462: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1860)
, useLabel(PC__40_41)
,	/* PS_v2463: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1860)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v2460: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1860)
, useLabel(PC_LAMBDA1859)
,	/* PS_v2458: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1860)
, useLabel(PC_LAMBDA1860)
,	/* PS_v2450: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1861)
, useLabel(PC_LAMBDA1861)
,	/* PS_v2448: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1862)
, useLabel(PC_NHC_46Internal_46_95patternMatchFail)
,	/* PS_v2446: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1862)
, useLabel(PC_NHC_46Observe_46ObserveGlobal)
,	/* PS_v2445: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1862)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_43)
,	/* PS_v2447: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1862)
, useLabel(PC_LAMBDA1861)
,	/* PS_v2442: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1862)
, useLabel(PC_LAMBDA1862)
,	/* PS_v2435: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1863)
, useLabel(PC_LAMBDA1863)
,	/* PS_v2432: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1864)
, useLabel(PC_LAMBDA1864)
,	/* PS_v2428: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_IO_46hPutStrLn)
,	/* PS_v2417: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_NHC_46IOExtras_46writeIORef)
,	/* PS_v2421: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_NHC_46Internal_46_95apply3)
,	/* PS_v2426: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v2419: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_NHC_46Observe_46observeDepth)
,	/* PS_v2415: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_NHC_46Observe_46observeUniq)
,	/* PS_v2424: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_NHC_46Observe_46observeHandle)
,	/* PS_v2418: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_NHC_46Observe_46runMO)
,	/* PS_v2425: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_NHC_46Observe_46showXmlString)
,	/* PS_v2427: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_NHC_46Observe_46xmlCons)
,	/* PS_v2429: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v2430: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,	/* PS_v2420: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_45)
,	/* PS_v2414: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_LAMBDA1860)
,	/* PS_v2416: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_LAMBDA1862)
,	/* PS_v2422: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_LAMBDA1863)
,	/* PS_v2423: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_LAMBDA1864)
,	/* PS_v2412: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1865)
, useLabel(PC_LAMBDA1865)
,	/* PS_v2512: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1866)
, useLabel(PC_LAMBDA1866)
,	/* PS_v2510: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1867)
, useLabel(PC_NHC_46Internal_46_95patternMatchFail)
,	/* PS_v2508: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1867)
, useLabel(PC_NHC_46Observe_46ObserveGlobal)
,	/* PS_v2507: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1867)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_43)
,	/* PS_v2509: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1867)
, useLabel(PC_LAMBDA1866)
,	/* PS_v2504: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1867)
, useLabel(PC_LAMBDA1867)
,	/* PS_v2498: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1868)
, useLabel(PC_NHC_46Observe_46ObserveContext)
,	/* PS_v2496: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1868)
, useLabel(PC_LAMBDA1868)
,	/* PS_v2490: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1869)
, useLabel(PC_IO_46hPutStrLn)
,	/* PS_v2485: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1869)
, useLabel(PC_NHC_46IOExtras_46writeIORef)
,	/* PS_v2493: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1869)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v2488: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1869)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v2491: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1869)
, useLabel(PC_NHC_46Observe_46observer)
,	/* PS_v2483: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1869)
, useLabel(PC_NHC_46Observe_46observeUniq)
,	/* PS_v2486: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1869)
, useLabel(PC_NHC_46Observe_46observeHandle)
,	/* PS_v2487: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1869)
, useLabel(PC_NHC_46Observe_46showXmlString)
,	/* PS_v2489: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1869)
, useLabel(PC_NHC_46Observe_46xmlObserve)
,	/* PS_v2482: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1869)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v2494: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1869)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,	/* PS_v2484: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1869)
, useLabel(PC_LAMBDA1867)
,	/* PS_v2492: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1869)
, useLabel(PC_LAMBDA1868)
,	/* PS_v2479: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1869)
, useLabel(PC_LAMBDA1869)
,	/* PS_v2539: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1870)
, useLabel(PC_NHC_46Observe_46MonadObserver)
,	/* PS_v2537: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1870)
, useLabel(PC_LAMBDA1870)
,	/* PS_v2535: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1871)
, useLabel(PC_NHC_46Observe_46ObserveContext)
,	/* PS_v2533: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1871)
, useLabel(PC_LAMBDA1871)
,	/* PS_v2531: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1872)
, useLabel(PC_Prelude_462)
,	/* PS_v2529: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1872)
, useLabel(PC_NHC_46Observe_46observer_95)
,	/* PS_v2530: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1872)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_43)
,	/* PS_v2528: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1872)
, useLabel(PC_LAMBDA1871)
,	/* PS_v2526: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1872)
, useLabel(PC_LAMBDA1872)
,	/* PS_v2552: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1873)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v2550: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1873)
, useLabel(PC_NHC_46Observe_46runMO)
,	/* PS_v2548: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1873)
, useLabel(PC_LAMBDA1873)
,	/* PS_v2561: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1874)
, useLabel(PC_Prelude_462)
,	/* PS_v2559: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1874)
, useLabel(PC_LAMBDA1874)
,	/* PS_v2598: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1875)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
,	/* PS_v2596: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1875)
, useLabel(PC_LAMBDA1875)
,	/* PS_v2591: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1876)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v2592: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1876)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2594: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1876)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2593: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1876)
, useLabel(PC_LAMBDA1875)
,	/* PS_v2589: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1876)
, useLabel(PC_LAMBDA1876)
,	/* PS_v2581: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1877)
, useLabel(PC_NHC_46Observe_46NHC_46Observe_46Observable_46Prelude_46_45_62_46observer_39451)
,	/* PS_v2579: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1877)
, useLabel(PC_LAMBDA1877)
,	/* PS_v2618: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1878)
, useLabel(PC_LAMBDA1878)
,	/* PS_v2615: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1879)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v2616: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1879)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
,	/* PS_v2613: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1879)
, useLabel(PC_LAMBDA1879)
,	/* PS_v2608: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1880)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2611: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1880)
, useLabel(PC_NHC_46Observe_46sendObservePacket)
,	/* PS_v2610: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1880)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2607: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1880)
, useLabel(PC_LAMBDA1878)
,	/* PS_v2609: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1880)
, useLabel(PC_LAMBDA1879)
,	/* PS_v2605: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1880)
, useLabel(PC_LAMBDA1880)
,	/* PS_v2641: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1881)
, useLabel(PC_LAMBDA1881)
,	/* PS_v2637: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1882)
, useLabel(PC_Prelude_46return)
,	/* PS_v2638: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1882)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v2639: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1882)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
,	/* PS_v2635: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1882)
, useLabel(PC_LAMBDA1882)
,	/* PS_v2630: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1883)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2633: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1883)
, useLabel(PC_NHC_46Observe_46sendObservePacket)
,	/* PS_v2632: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1883)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2629: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1883)
, useLabel(PC_LAMBDA1881)
,	/* PS_v2631: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1883)
, useLabel(PC_LAMBDA1882)
,	/* PS_v2627: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1883)
, useLabel(PC_LAMBDA1883)
,	/* PS_v2669: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1884)
, useLabel(PC_LAMBDA1884)
,	/* PS_v2666: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1885)
, useLabel(PC_Array_46array)
,	/* PS_v2667: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1885)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
,	/* PS_v2664: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1885)
, useLabel(PC_LAMBDA1885)
,	/* PS_v2659: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1886)
, useLabel(PC_Array_46assocs)
,	/* PS_v2660: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1886)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2662: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1886)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2657: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1886)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_462)
,	/* PS_v2658: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1886)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46_91_93)
,	/* PS_v2661: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1886)
, useLabel(PC_LAMBDA1885)
,	/* PS_v2655: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1886)
, useLabel(PC_LAMBDA1886)
,	/* PS_v2697: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1887)
, useLabel(PC_LAMBDA1887)
,	/* PS_v2693: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1888)
, useLabel(PC_LAMBDA1888)
,	/* PS_v2690: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1889)
, useLabel(PC_Prelude_46Just)
,	/* PS_v2691: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1889)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
,	/* PS_v2688: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1889)
, useLabel(PC_LAMBDA1889)
,	/* PS_v2732: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1890)
, useLabel(PC_LAMBDA1890)
,	/* PS_v2728: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1891)
, useLabel(PC_LAMBDA1891)
,	/* PS_v2725: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1892)
, useLabel(PC_Prelude_46_58)
,	/* PS_v2726: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1892)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
,	/* PS_v2723: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1892)
, useLabel(PC_LAMBDA1892)
,	/* PS_v2719: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1893)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2721: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1893)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2718: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1893)
, useLabel(PC_NHC_46Observe_46Observable_46Prelude_46_91_93)
,	/* PS_v2720: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1893)
, useLabel(PC_LAMBDA1892)
,	/* PS_v2716: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1893)
, useLabel(PC_LAMBDA1893)
,	/* PS_v2776: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1894)
, useLabel(PC_LAMBDA1894)
,	/* PS_v2773: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1895)
, useLabel(PC_Prelude_465)
,	/* PS_v2774: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1895)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
,	/* PS_v2771: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1895)
, useLabel(PC_LAMBDA1895)
,	/* PS_v2767: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1896)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2769: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1896)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2768: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1896)
, useLabel(PC_LAMBDA1895)
,	/* PS_v2765: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1896)
, useLabel(PC_LAMBDA1896)
,	/* PS_v2761: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1897)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2763: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1897)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2762: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1897)
, useLabel(PC_LAMBDA1896)
,	/* PS_v2759: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1897)
, useLabel(PC_LAMBDA1897)
,	/* PS_v2755: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1898)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2757: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1898)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2756: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1898)
, useLabel(PC_LAMBDA1897)
,	/* PS_v2753: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1898)
, useLabel(PC_LAMBDA1898)
,	/* PS_v2749: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1899)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2751: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1899)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2750: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1899)
, useLabel(PC_LAMBDA1898)
,	/* PS_v2747: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1899)
, useLabel(PC_LAMBDA1899)
,	/* PS_v2814: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1900)
, useLabel(PC_LAMBDA1900)
,	/* PS_v2811: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1901)
, useLabel(PC_Prelude_464)
,	/* PS_v2812: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1901)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
,	/* PS_v2809: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1901)
, useLabel(PC_LAMBDA1901)
,	/* PS_v2805: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1902)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2807: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1902)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2806: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1902)
, useLabel(PC_LAMBDA1901)
,	/* PS_v2803: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1902)
, useLabel(PC_LAMBDA1902)
,	/* PS_v2799: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1903)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2801: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1903)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2800: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1903)
, useLabel(PC_LAMBDA1902)
,	/* PS_v2797: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1903)
, useLabel(PC_LAMBDA1903)
,	/* PS_v2793: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1904)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2795: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1904)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2794: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1904)
, useLabel(PC_LAMBDA1903)
,	/* PS_v2791: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1904)
, useLabel(PC_LAMBDA1904)
,	/* PS_v2845: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1905)
, useLabel(PC_LAMBDA1905)
,	/* PS_v2842: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1906)
, useLabel(PC_Prelude_463)
,	/* PS_v2843: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1906)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46return)
,	/* PS_v2840: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1906)
, useLabel(PC_LAMBDA1906)
,	/* PS_v2836: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1907)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2838: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1907)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2837: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1907)
, useLabel(PC_LAMBDA1906)
,	/* PS_v2834: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1907)
, useLabel(PC_LAMBDA1907)
,	/* PS_v2830: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1908)
, useLabel(PC_NHC_46Observe_46thunk)
,	/* PS_v2832: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1908)
, useLabel(PC_Prelude_46Monad_46NHC_46Observe_46MonadObserver_46_62_62_61)
,	/* PS_v2831: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1908)
, useLabel(PC_LAMBDA1907)
,	/* PS_v2828: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1908)
, useLabel(PC_LAMBDA1908)
,	/* PS_v2865: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1909)
, useLabel(PC_LAMBDA1909)
,	/* PS_v2863: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1910)
, useLabel(PC_Prelude_462)
,	/* PS_v2861: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1910)
, useLabel(PC_LAMBDA1910)
,	/* PS_v2910: (byte 0) */
  useLabel(PM_NHC_46Observe)
, useLabel(PP_LAMBDA1911)
, useLabel(PC_LAMBDA1911)
,};
