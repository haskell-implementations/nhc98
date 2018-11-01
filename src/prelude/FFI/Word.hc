#include "newmacros.h"
#include "runtime.h"

#define CT_v2360	((void*)startLabel+48)
#define FN_LAMBDA2339	((void*)startLabel+100)
#define CT_v2362	((void*)startLabel+120)
#define CF_LAMBDA2339	((void*)startLabel+128)
#define CT_v2363	((void*)startLabel+152)
#define CT_v2364	((void*)startLabel+192)
#define CT_v2365	((void*)startLabel+232)
#define CT_v2366	((void*)startLabel+276)
#define CT_v2367	((void*)startLabel+324)
#define CT_v2368	((void*)startLabel+404)
#define CT_v2369	((void*)startLabel+480)
#define FN_NHC_46FFI_46primFromEnumWord64	((void*)startLabel+512)
#define CT_v2370	((void*)startLabel+528)
#define F0_NHC_46FFI_46primFromEnumWord64	((void*)startLabel+536)
#define CT_v2371	((void*)startLabel+560)
#define FN_NHC_46FFI_46primToEnumWord64	((void*)startLabel+584)
#define CT_v2372	((void*)startLabel+600)
#define F0_NHC_46FFI_46primToEnumWord64	((void*)startLabel+608)
#define CT_v2373	((void*)startLabel+632)
#define CT_v2374	((void*)startLabel+676)
#define CT_v2375	((void*)startLabel+720)
#define CT_v2376	((void*)startLabel+760)
#define CT_v2377	((void*)startLabel+800)
#define CT_v2381	((void*)startLabel+860)
#define v2386	((void*)startLabel+930)
#define v2388	((void*)startLabel+944)
#define v2382	((void*)startLabel+949)
#define CT_v2391	((void*)startLabel+972)
#define FN_LAMBDA2341	((void*)startLabel+1028)
#define CT_v2393	((void*)startLabel+1048)
#define CF_LAMBDA2341	((void*)startLabel+1056)
#define FN_LAMBDA2340	((void*)startLabel+1068)
#define CT_v2395	((void*)startLabel+1088)
#define CF_LAMBDA2340	((void*)startLabel+1096)
#define CT_v2399	((void*)startLabel+1124)
#define CT_v2400	((void*)startLabel+1160)
#define FN_NHC_46FFI_46primWord64ToInteger	((void*)startLabel+1188)
#define CT_v2401	((void*)startLabel+1204)
#define F0_NHC_46FFI_46primWord64ToInteger	((void*)startLabel+1212)
#define CT_v2402	((void*)startLabel+1236)
#define FN_NHC_46FFI_46primRemWord64	((void*)startLabel+1264)
#define CT_v2403	((void*)startLabel+1284)
#define F0_NHC_46FFI_46primRemWord64	((void*)startLabel+1292)
#define CT_v2404	((void*)startLabel+1320)
#define FN_NHC_46FFI_46primQuotWord64	((void*)startLabel+1348)
#define CT_v2405	((void*)startLabel+1368)
#define F0_NHC_46FFI_46primQuotWord64	((void*)startLabel+1376)
#define CT_v2406	((void*)startLabel+1404)
#define CT_v2407	((void*)startLabel+1444)
#define CT_v2408	((void*)startLabel+1488)
#define CT_v2409	((void*)startLabel+1532)
#define CT_v2410	((void*)startLabel+1576)
#define CT_v2411	((void*)startLabel+1632)
#define CT_v2412	((void*)startLabel+1692)
#define CT_v2413	((void*)startLabel+1736)
#define FN_NHC_46FFI_46primWord64FromInteger	((void*)startLabel+1760)
#define CT_v2414	((void*)startLabel+1776)
#define F0_NHC_46FFI_46primWord64FromInteger	((void*)startLabel+1784)
#define CT_v2415	((void*)startLabel+1808)
#define FN_NHC_46FFI_46primSignumWord64	((void*)startLabel+1832)
#define CT_v2416	((void*)startLabel+1848)
#define F0_NHC_46FFI_46primSignumWord64	((void*)startLabel+1856)
#define CT_v2417	((void*)startLabel+1880)
#define CT_v2418	((void*)startLabel+1916)
#define CT_v2419	((void*)startLabel+1960)
#define FN_LAMBDA2342	((void*)startLabel+1988)
#define CT_v2421	((void*)startLabel+2008)
#define CF_LAMBDA2342	((void*)startLabel+2016)
#define FN_NHC_46FFI_46primMulWord64	((void*)startLabel+2032)
#define CT_v2422	((void*)startLabel+2052)
#define F0_NHC_46FFI_46primMulWord64	((void*)startLabel+2060)
#define CT_v2423	((void*)startLabel+2088)
#define FN_NHC_46FFI_46primSubWord64	((void*)startLabel+2116)
#define CT_v2424	((void*)startLabel+2136)
#define F0_NHC_46FFI_46primSubWord64	((void*)startLabel+2144)
#define CT_v2425	((void*)startLabel+2172)
#define FN_NHC_46FFI_46primAddWord64	((void*)startLabel+2200)
#define CT_v2426	((void*)startLabel+2220)
#define F0_NHC_46FFI_46primAddWord64	((void*)startLabel+2228)
#define CT_v2427	((void*)startLabel+2256)
#define FN_NHC_46FFI_46primGeWord64	((void*)startLabel+2284)
#define CT_v2428	((void*)startLabel+2304)
#define F0_NHC_46FFI_46primGeWord64	((void*)startLabel+2312)
#define CT_v2429	((void*)startLabel+2340)
#define FN_NHC_46FFI_46primGtWord64	((void*)startLabel+2368)
#define CT_v2430	((void*)startLabel+2388)
#define F0_NHC_46FFI_46primGtWord64	((void*)startLabel+2396)
#define CT_v2431	((void*)startLabel+2424)
#define FN_NHC_46FFI_46primLeWord64	((void*)startLabel+2452)
#define CT_v2432	((void*)startLabel+2472)
#define F0_NHC_46FFI_46primLeWord64	((void*)startLabel+2480)
#define CT_v2433	((void*)startLabel+2508)
#define FN_NHC_46FFI_46primLtWord64	((void*)startLabel+2536)
#define CT_v2434	((void*)startLabel+2556)
#define F0_NHC_46FFI_46primLtWord64	((void*)startLabel+2564)
#define CT_v2435	((void*)startLabel+2592)
#define CT_v2436	((void*)startLabel+2632)
#define CT_v2437	((void*)startLabel+2676)
#define CT_v2438	((void*)startLabel+2720)
#define FN_NHC_46FFI_46primEqWord64	((void*)startLabel+2752)
#define CT_v2439	((void*)startLabel+2772)
#define F0_NHC_46FFI_46primEqWord64	((void*)startLabel+2780)
#define CT_v2440	((void*)startLabel+2808)
#define CT_v2441	((void*)startLabel+2848)
#define CT_v2442	((void*)startLabel+2916)
#define FN_LAMBDA2343	((void*)startLabel+2968)
#define CT_v2443	((void*)startLabel+2988)
#define CF_LAMBDA2343	((void*)startLabel+2996)
#define CT_v2444	((void*)startLabel+3020)
#define CT_v2445	((void*)startLabel+3060)
#define CT_v2446	((void*)startLabel+3100)
#define CT_v2447	((void*)startLabel+3144)
#define CT_v2448	((void*)startLabel+3192)
#define CT_v2449	((void*)startLabel+3272)
#define CT_v2450	((void*)startLabel+3348)
#define FN_NHC_46FFI_46primFromEnumWord32	((void*)startLabel+3380)
#define CT_v2451	((void*)startLabel+3396)
#define F0_NHC_46FFI_46primFromEnumWord32	((void*)startLabel+3404)
#define CT_v2452	((void*)startLabel+3428)
#define FN_NHC_46FFI_46primToEnumWord32	((void*)startLabel+3452)
#define CT_v2453	((void*)startLabel+3468)
#define F0_NHC_46FFI_46primToEnumWord32	((void*)startLabel+3476)
#define CT_v2454	((void*)startLabel+3500)
#define CT_v2455	((void*)startLabel+3544)
#define CT_v2456	((void*)startLabel+3588)
#define CT_v2457	((void*)startLabel+3628)
#define CT_v2458	((void*)startLabel+3668)
#define CT_v2462	((void*)startLabel+3728)
#define v2467	((void*)startLabel+3798)
#define v2469	((void*)startLabel+3812)
#define v2463	((void*)startLabel+3817)
#define CT_v2472	((void*)startLabel+3840)
#define FN_LAMBDA2345	((void*)startLabel+3896)
#define CT_v2474	((void*)startLabel+3916)
#define CF_LAMBDA2345	((void*)startLabel+3924)
#define FN_LAMBDA2344	((void*)startLabel+3936)
#define CT_v2475	((void*)startLabel+3956)
#define CF_LAMBDA2344	((void*)startLabel+3964)
#define CT_v2479	((void*)startLabel+3992)
#define CT_v2480	((void*)startLabel+4028)
#define FN_NHC_46FFI_46primWord32ToInteger	((void*)startLabel+4056)
#define CT_v2481	((void*)startLabel+4072)
#define F0_NHC_46FFI_46primWord32ToInteger	((void*)startLabel+4080)
#define CT_v2482	((void*)startLabel+4104)
#define FN_NHC_46FFI_46primRemWord32	((void*)startLabel+4132)
#define CT_v2483	((void*)startLabel+4152)
#define F0_NHC_46FFI_46primRemWord32	((void*)startLabel+4160)
#define CT_v2484	((void*)startLabel+4188)
#define FN_NHC_46FFI_46primQuotWord32	((void*)startLabel+4216)
#define CT_v2485	((void*)startLabel+4236)
#define F0_NHC_46FFI_46primQuotWord32	((void*)startLabel+4244)
#define CT_v2486	((void*)startLabel+4272)
#define CT_v2487	((void*)startLabel+4312)
#define CT_v2488	((void*)startLabel+4356)
#define CT_v2489	((void*)startLabel+4400)
#define CT_v2490	((void*)startLabel+4444)
#define CT_v2491	((void*)startLabel+4500)
#define CT_v2492	((void*)startLabel+4552)
#define CT_v2493	((void*)startLabel+4596)
#define FN_NHC_46FFI_46primWord32FromInteger	((void*)startLabel+4620)
#define CT_v2494	((void*)startLabel+4636)
#define F0_NHC_46FFI_46primWord32FromInteger	((void*)startLabel+4644)
#define CT_v2495	((void*)startLabel+4668)
#define FN_NHC_46FFI_46primSignumWord32	((void*)startLabel+4692)
#define CT_v2496	((void*)startLabel+4708)
#define F0_NHC_46FFI_46primSignumWord32	((void*)startLabel+4716)
#define CT_v2497	((void*)startLabel+4740)
#define CT_v2498	((void*)startLabel+4776)
#define CT_v2499	((void*)startLabel+4820)
#define FN_LAMBDA2346	((void*)startLabel+4848)
#define CT_v2500	((void*)startLabel+4868)
#define CF_LAMBDA2346	((void*)startLabel+4876)
#define FN_NHC_46FFI_46primMulWord32	((void*)startLabel+4892)
#define CT_v2501	((void*)startLabel+4912)
#define F0_NHC_46FFI_46primMulWord32	((void*)startLabel+4920)
#define CT_v2502	((void*)startLabel+4948)
#define FN_NHC_46FFI_46primSubWord32	((void*)startLabel+4976)
#define CT_v2503	((void*)startLabel+4996)
#define F0_NHC_46FFI_46primSubWord32	((void*)startLabel+5004)
#define CT_v2504	((void*)startLabel+5032)
#define FN_NHC_46FFI_46primAddWord32	((void*)startLabel+5060)
#define CT_v2505	((void*)startLabel+5080)
#define F0_NHC_46FFI_46primAddWord32	((void*)startLabel+5088)
#define CT_v2506	((void*)startLabel+5116)
#define FN_NHC_46FFI_46primGeWord32	((void*)startLabel+5144)
#define CT_v2507	((void*)startLabel+5164)
#define F0_NHC_46FFI_46primGeWord32	((void*)startLabel+5172)
#define CT_v2508	((void*)startLabel+5200)
#define FN_NHC_46FFI_46primGtWord32	((void*)startLabel+5228)
#define CT_v2509	((void*)startLabel+5248)
#define F0_NHC_46FFI_46primGtWord32	((void*)startLabel+5256)
#define CT_v2510	((void*)startLabel+5284)
#define FN_NHC_46FFI_46primLeWord32	((void*)startLabel+5312)
#define CT_v2511	((void*)startLabel+5332)
#define F0_NHC_46FFI_46primLeWord32	((void*)startLabel+5340)
#define CT_v2512	((void*)startLabel+5368)
#define FN_NHC_46FFI_46primLtWord32	((void*)startLabel+5396)
#define CT_v2513	((void*)startLabel+5416)
#define F0_NHC_46FFI_46primLtWord32	((void*)startLabel+5424)
#define CT_v2514	((void*)startLabel+5452)
#define CT_v2515	((void*)startLabel+5492)
#define CT_v2516	((void*)startLabel+5536)
#define CT_v2517	((void*)startLabel+5580)
#define FN_NHC_46FFI_46primEqWord32	((void*)startLabel+5612)
#define CT_v2518	((void*)startLabel+5632)
#define F0_NHC_46FFI_46primEqWord32	((void*)startLabel+5640)
#define CT_v2519	((void*)startLabel+5668)
#define CT_v2520	((void*)startLabel+5708)
#define CT_v2521	((void*)startLabel+5776)
#define FN_LAMBDA2347	((void*)startLabel+5828)
#define CT_v2522	((void*)startLabel+5848)
#define CF_LAMBDA2347	((void*)startLabel+5856)
#define CT_v2523	((void*)startLabel+5880)
#define CT_v2524	((void*)startLabel+5920)
#define CT_v2525	((void*)startLabel+5960)
#define CT_v2526	((void*)startLabel+6004)
#define CT_v2527	((void*)startLabel+6052)
#define CT_v2528	((void*)startLabel+6132)
#define CT_v2529	((void*)startLabel+6208)
#define FN_NHC_46FFI_46primFromEnumWord16	((void*)startLabel+6240)
#define CT_v2530	((void*)startLabel+6256)
#define F0_NHC_46FFI_46primFromEnumWord16	((void*)startLabel+6264)
#define CT_v2531	((void*)startLabel+6288)
#define FN_NHC_46FFI_46primToEnumWord16	((void*)startLabel+6312)
#define CT_v2532	((void*)startLabel+6328)
#define F0_NHC_46FFI_46primToEnumWord16	((void*)startLabel+6336)
#define CT_v2533	((void*)startLabel+6360)
#define CT_v2534	((void*)startLabel+6404)
#define CT_v2535	((void*)startLabel+6448)
#define CT_v2536	((void*)startLabel+6488)
#define CT_v2537	((void*)startLabel+6528)
#define CT_v2541	((void*)startLabel+6588)
#define v2546	((void*)startLabel+6658)
#define v2548	((void*)startLabel+6672)
#define v2542	((void*)startLabel+6677)
#define CT_v2551	((void*)startLabel+6700)
#define FN_LAMBDA2349	((void*)startLabel+6756)
#define CT_v2553	((void*)startLabel+6776)
#define CF_LAMBDA2349	((void*)startLabel+6784)
#define FN_LAMBDA2348	((void*)startLabel+6796)
#define CT_v2554	((void*)startLabel+6816)
#define CF_LAMBDA2348	((void*)startLabel+6824)
#define CT_v2558	((void*)startLabel+6852)
#define CT_v2559	((void*)startLabel+6888)
#define FN_NHC_46FFI_46primWord16ToInteger	((void*)startLabel+6916)
#define CT_v2560	((void*)startLabel+6932)
#define F0_NHC_46FFI_46primWord16ToInteger	((void*)startLabel+6940)
#define CT_v2561	((void*)startLabel+6964)
#define FN_NHC_46FFI_46primRemWord16	((void*)startLabel+6992)
#define CT_v2562	((void*)startLabel+7012)
#define F0_NHC_46FFI_46primRemWord16	((void*)startLabel+7020)
#define CT_v2563	((void*)startLabel+7048)
#define FN_NHC_46FFI_46primQuotWord16	((void*)startLabel+7076)
#define CT_v2564	((void*)startLabel+7096)
#define F0_NHC_46FFI_46primQuotWord16	((void*)startLabel+7104)
#define CT_v2565	((void*)startLabel+7132)
#define CT_v2566	((void*)startLabel+7172)
#define CT_v2567	((void*)startLabel+7216)
#define CT_v2568	((void*)startLabel+7260)
#define CT_v2569	((void*)startLabel+7304)
#define CT_v2570	((void*)startLabel+7360)
#define CT_v2571	((void*)startLabel+7412)
#define CT_v2572	((void*)startLabel+7456)
#define FN_NHC_46FFI_46primWord16FromInteger	((void*)startLabel+7480)
#define CT_v2573	((void*)startLabel+7496)
#define F0_NHC_46FFI_46primWord16FromInteger	((void*)startLabel+7504)
#define CT_v2574	((void*)startLabel+7528)
#define FN_NHC_46FFI_46primSignumWord16	((void*)startLabel+7552)
#define CT_v2575	((void*)startLabel+7568)
#define F0_NHC_46FFI_46primSignumWord16	((void*)startLabel+7576)
#define CT_v2576	((void*)startLabel+7600)
#define CT_v2577	((void*)startLabel+7636)
#define CT_v2578	((void*)startLabel+7680)
#define FN_LAMBDA2350	((void*)startLabel+7708)
#define CT_v2579	((void*)startLabel+7728)
#define CF_LAMBDA2350	((void*)startLabel+7736)
#define FN_NHC_46FFI_46primMulWord16	((void*)startLabel+7752)
#define CT_v2580	((void*)startLabel+7772)
#define F0_NHC_46FFI_46primMulWord16	((void*)startLabel+7780)
#define CT_v2581	((void*)startLabel+7808)
#define FN_NHC_46FFI_46primSubWord16	((void*)startLabel+7836)
#define CT_v2582	((void*)startLabel+7856)
#define F0_NHC_46FFI_46primSubWord16	((void*)startLabel+7864)
#define CT_v2583	((void*)startLabel+7892)
#define FN_NHC_46FFI_46primAddWord16	((void*)startLabel+7920)
#define CT_v2584	((void*)startLabel+7940)
#define F0_NHC_46FFI_46primAddWord16	((void*)startLabel+7948)
#define CT_v2585	((void*)startLabel+7976)
#define FN_NHC_46FFI_46primGeWord16	((void*)startLabel+8004)
#define CT_v2586	((void*)startLabel+8024)
#define F0_NHC_46FFI_46primGeWord16	((void*)startLabel+8032)
#define CT_v2587	((void*)startLabel+8060)
#define FN_NHC_46FFI_46primGtWord16	((void*)startLabel+8088)
#define CT_v2588	((void*)startLabel+8108)
#define F0_NHC_46FFI_46primGtWord16	((void*)startLabel+8116)
#define CT_v2589	((void*)startLabel+8144)
#define FN_NHC_46FFI_46primLeWord16	((void*)startLabel+8172)
#define CT_v2590	((void*)startLabel+8192)
#define F0_NHC_46FFI_46primLeWord16	((void*)startLabel+8200)
#define CT_v2591	((void*)startLabel+8228)
#define FN_NHC_46FFI_46primLtWord16	((void*)startLabel+8256)
#define CT_v2592	((void*)startLabel+8276)
#define F0_NHC_46FFI_46primLtWord16	((void*)startLabel+8284)
#define CT_v2593	((void*)startLabel+8312)
#define CT_v2594	((void*)startLabel+8352)
#define CT_v2595	((void*)startLabel+8396)
#define CT_v2596	((void*)startLabel+8440)
#define FN_NHC_46FFI_46primEqWord16	((void*)startLabel+8472)
#define CT_v2597	((void*)startLabel+8492)
#define F0_NHC_46FFI_46primEqWord16	((void*)startLabel+8500)
#define CT_v2598	((void*)startLabel+8528)
#define CT_v2599	((void*)startLabel+8568)
#define CT_v2600	((void*)startLabel+8636)
#define FN_LAMBDA2351	((void*)startLabel+8688)
#define CT_v2601	((void*)startLabel+8708)
#define CF_LAMBDA2351	((void*)startLabel+8716)
#define CT_v2602	((void*)startLabel+8740)
#define CT_v2603	((void*)startLabel+8780)
#define CT_v2604	((void*)startLabel+8820)
#define CT_v2605	((void*)startLabel+8864)
#define CT_v2606	((void*)startLabel+8912)
#define CT_v2607	((void*)startLabel+8992)
#define CT_v2608	((void*)startLabel+9068)
#define FN_NHC_46FFI_46primFromEnumWord8	((void*)startLabel+9100)
#define CT_v2609	((void*)startLabel+9116)
#define F0_NHC_46FFI_46primFromEnumWord8	((void*)startLabel+9124)
#define CT_v2610	((void*)startLabel+9148)
#define FN_NHC_46FFI_46primToEnumWord8	((void*)startLabel+9172)
#define CT_v2611	((void*)startLabel+9188)
#define F0_NHC_46FFI_46primToEnumWord8	((void*)startLabel+9196)
#define CT_v2612	((void*)startLabel+9220)
#define CT_v2613	((void*)startLabel+9264)
#define CT_v2614	((void*)startLabel+9308)
#define CT_v2615	((void*)startLabel+9348)
#define CT_v2616	((void*)startLabel+9388)
#define CT_v2620	((void*)startLabel+9448)
#define v2625	((void*)startLabel+9518)
#define v2627	((void*)startLabel+9532)
#define v2621	((void*)startLabel+9537)
#define CT_v2630	((void*)startLabel+9560)
#define FN_LAMBDA2353	((void*)startLabel+9616)
#define CT_v2632	((void*)startLabel+9636)
#define CF_LAMBDA2353	((void*)startLabel+9644)
#define FN_LAMBDA2352	((void*)startLabel+9656)
#define CT_v2633	((void*)startLabel+9676)
#define CF_LAMBDA2352	((void*)startLabel+9684)
#define CT_v2637	((void*)startLabel+9712)
#define CT_v2638	((void*)startLabel+9748)
#define FN_NHC_46FFI_46primWord8ToInteger	((void*)startLabel+9776)
#define CT_v2639	((void*)startLabel+9792)
#define F0_NHC_46FFI_46primWord8ToInteger	((void*)startLabel+9800)
#define CT_v2640	((void*)startLabel+9824)
#define FN_NHC_46FFI_46primRemWord8	((void*)startLabel+9852)
#define CT_v2641	((void*)startLabel+9872)
#define F0_NHC_46FFI_46primRemWord8	((void*)startLabel+9880)
#define CT_v2642	((void*)startLabel+9908)
#define FN_NHC_46FFI_46primQuotWord8	((void*)startLabel+9936)
#define CT_v2643	((void*)startLabel+9956)
#define F0_NHC_46FFI_46primQuotWord8	((void*)startLabel+9964)
#define CT_v2644	((void*)startLabel+9992)
#define CT_v2645	((void*)startLabel+10032)
#define CT_v2646	((void*)startLabel+10076)
#define CT_v2647	((void*)startLabel+10120)
#define CT_v2648	((void*)startLabel+10164)
#define CT_v2649	((void*)startLabel+10220)
#define CT_v2650	((void*)startLabel+10272)
#define CT_v2651	((void*)startLabel+10316)
#define FN_NHC_46FFI_46primWord8FromInteger	((void*)startLabel+10340)
#define CT_v2652	((void*)startLabel+10356)
#define F0_NHC_46FFI_46primWord8FromInteger	((void*)startLabel+10364)
#define CT_v2653	((void*)startLabel+10388)
#define FN_NHC_46FFI_46primSignumWord8	((void*)startLabel+10412)
#define CT_v2654	((void*)startLabel+10428)
#define F0_NHC_46FFI_46primSignumWord8	((void*)startLabel+10436)
#define CT_v2655	((void*)startLabel+10460)
#define CT_v2656	((void*)startLabel+10496)
#define CT_v2657	((void*)startLabel+10540)
#define FN_LAMBDA2354	((void*)startLabel+10568)
#define CT_v2658	((void*)startLabel+10588)
#define CF_LAMBDA2354	((void*)startLabel+10596)
#define FN_NHC_46FFI_46primMulWord8	((void*)startLabel+10612)
#define CT_v2659	((void*)startLabel+10632)
#define F0_NHC_46FFI_46primMulWord8	((void*)startLabel+10640)
#define CT_v2660	((void*)startLabel+10668)
#define FN_NHC_46FFI_46primSubWord8	((void*)startLabel+10696)
#define CT_v2661	((void*)startLabel+10716)
#define F0_NHC_46FFI_46primSubWord8	((void*)startLabel+10724)
#define CT_v2662	((void*)startLabel+10752)
#define FN_NHC_46FFI_46primAddWord8	((void*)startLabel+10780)
#define CT_v2663	((void*)startLabel+10800)
#define F0_NHC_46FFI_46primAddWord8	((void*)startLabel+10808)
#define CT_v2664	((void*)startLabel+10836)
#define FN_NHC_46FFI_46primGeWord8	((void*)startLabel+10864)
#define CT_v2665	((void*)startLabel+10884)
#define F0_NHC_46FFI_46primGeWord8	((void*)startLabel+10892)
#define CT_v2666	((void*)startLabel+10920)
#define FN_NHC_46FFI_46primGtWord8	((void*)startLabel+10948)
#define CT_v2667	((void*)startLabel+10968)
#define F0_NHC_46FFI_46primGtWord8	((void*)startLabel+10976)
#define CT_v2668	((void*)startLabel+11004)
#define FN_NHC_46FFI_46primLeWord8	((void*)startLabel+11032)
#define CT_v2669	((void*)startLabel+11052)
#define F0_NHC_46FFI_46primLeWord8	((void*)startLabel+11060)
#define CT_v2670	((void*)startLabel+11088)
#define FN_NHC_46FFI_46primLtWord8	((void*)startLabel+11116)
#define CT_v2671	((void*)startLabel+11136)
#define F0_NHC_46FFI_46primLtWord8	((void*)startLabel+11144)
#define CT_v2672	((void*)startLabel+11172)
#define CT_v2673	((void*)startLabel+11212)
#define CT_v2674	((void*)startLabel+11256)
#define CT_v2675	((void*)startLabel+11300)
#define FN_NHC_46FFI_46primEqWord8	((void*)startLabel+11332)
#define CT_v2676	((void*)startLabel+11352)
#define F0_NHC_46FFI_46primEqWord8	((void*)startLabel+11360)
#define CT_v2677	((void*)startLabel+11388)
#define CT_v2678	((void*)startLabel+11428)
#define CT_v2679	((void*)startLabel+11476)
#define CT_v2680	((void*)startLabel+11536)
#define CT_v2681	((void*)startLabel+11624)
#define CT_v2682	((void*)startLabel+11700)
#define CT_v2683	((void*)startLabel+11752)
#define CT_v2684	((void*)startLabel+11820)
#define CT_v2685	((void*)startLabel+11904)
#define CT_v2686	((void*)startLabel+11976)
#define CT_v2687	((void*)startLabel+12048)
#define CT_v2688	((void*)startLabel+12100)
#define CT_v2689	((void*)startLabel+12156)
#define CT_v2690	((void*)startLabel+12216)
#define CT_v2691	((void*)startLabel+12304)
#define CT_v2692	((void*)startLabel+12380)
#define CT_v2693	((void*)startLabel+12432)
#define CT_v2694	((void*)startLabel+12500)
#define CT_v2695	((void*)startLabel+12584)
#define CT_v2696	((void*)startLabel+12656)
#define CT_v2697	((void*)startLabel+12728)
#define CT_v2698	((void*)startLabel+12780)
#define CT_v2699	((void*)startLabel+12836)
#define CT_v2700	((void*)startLabel+12896)
#define CT_v2701	((void*)startLabel+12984)
#define CT_v2702	((void*)startLabel+13060)
#define CT_v2703	((void*)startLabel+13112)
#define CT_v2704	((void*)startLabel+13180)
#define CT_v2705	((void*)startLabel+13264)
#define CT_v2706	((void*)startLabel+13336)
#define CT_v2707	((void*)startLabel+13408)
#define CT_v2708	((void*)startLabel+13460)
#define CT_v2709	((void*)startLabel+13516)
#define CT_v2710	((void*)startLabel+13576)
#define CT_v2711	((void*)startLabel+13664)
#define CT_v2712	((void*)startLabel+13740)
#define CT_v2713	((void*)startLabel+13792)
#define CT_v2714	((void*)startLabel+13860)
#define CT_v2715	((void*)startLabel+13944)
#define CT_v2716	((void*)startLabel+14016)
#define CT_v2717	((void*)startLabel+14088)
#define CT_v2718	((void*)startLabel+14140)
#define ST_v2361	((void*)startLabel+14168)
#define ST_v2394	((void*)startLabel+14171)
#define ST_v2631	((void*)startLabel+14201)
#define ST_v2552	((void*)startLabel+14266)
#define ST_v2473	((void*)startLabel+14331)
#define ST_v2392	((void*)startLabel+14396)
#define ST_v2420	((void*)startLabel+14461)
extern Node FN_Prelude_46showString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Numeric_46showHex[];
extern Node CF_Prelude_46Integral_46NHC_46FFI_46Word64[];
extern Node FN_Numeric_46showSigned[];
extern Node CF_Prelude_46Real_46NHC_46FFI_46Word64[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46_95_46show[];
extern Node CF_Prelude_46Show_46NHC_46FFI_46Word64[];
extern Node FN_Prelude_46_95_46showsType[];
extern Node FN_Prelude_46_95_46showList[];
extern Node FN_Numeric_46readDec[];
extern Node FN_Numeric_46readSigned[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46NHC_46FFI_46Word64[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46Word64_46fromInteger[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46Word64_46_42[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46Word64_46_45[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46Word64_46_43[];
void FR_NHC_46FFI_46primFromEnumWord64(void);
void FR_NHC_46FFI_46primToEnumWord64(void);
extern Node FN_Prelude_46_95_46enumFromThenTo[];
extern Node CF_Prelude_46Enum_46NHC_46FFI_46Word64[];
extern Node FN_Prelude_46_95_46enumFromTo[];
extern Node FN_Prelude_46_95_46succ[];
extern Node FN_Prelude_46_95_46pred[];
extern Node FN_Prelude_46Ord_46NHC_46FFI_46Word64_46_60_61[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46fromIntegral[];
extern Node CF_Prelude_46Num_46Prelude_46Int[];
extern Node FN_Prelude_46error[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Ix_46_95_46rangeSize[];
extern Node CF_Ix_46Ix_46NHC_46FFI_46Word64[];
void FR_NHC_46FFI_46primWord64ToInteger(void);
void FR_NHC_46FFI_46primRemWord64(void);
void FR_NHC_46FFI_46primQuotWord64(void);
extern Node FN_Prelude_46_95_46quotRem[];
extern Node FN_Prelude_46_95_46divMod[];
extern Node FN_Prelude_46_95_46mod[];
extern Node FN_Prelude_46_95_46div[];
extern Node FN_Ratio_46_37[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
void FR_NHC_46FFI_46primWord64FromInteger(void);
void FR_NHC_46FFI_46primSignumWord64(void);
extern Node FN_Prelude_46id[];
void FR_NHC_46FFI_46primMulWord64(void);
void FR_NHC_46FFI_46primSubWord64(void);
void FR_NHC_46FFI_46primAddWord64(void);
void FR_NHC_46FFI_46primGeWord64(void);
void FR_NHC_46FFI_46primGtWord64(void);
void FR_NHC_46FFI_46primLeWord64(void);
void FR_NHC_46FFI_46primLtWord64(void);
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46NHC_46FFI_46Word64[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46compare[];
void FR_NHC_46FFI_46primEqWord64(void);
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46NHC_46FFI_46Word64[];
extern Node CF_Prelude_46Integral_46NHC_46FFI_46Word32[];
extern Node CF_Prelude_46Real_46NHC_46FFI_46Word32[];
extern Node CF_Prelude_46Show_46NHC_46FFI_46Word32[];
extern Node CF_Prelude_46Read_46NHC_46FFI_46Word32[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46Word32_46fromInteger[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46Word32_46_42[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46Word32_46_45[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46Word32_46_43[];
void FR_NHC_46FFI_46primFromEnumWord32(void);
void FR_NHC_46FFI_46primToEnumWord32(void);
extern Node CF_Prelude_46Enum_46NHC_46FFI_46Word32[];
extern Node FN_Prelude_46Ord_46NHC_46FFI_46Word32_46_60_61[];
extern Node CF_Ix_46Ix_46NHC_46FFI_46Word32[];
void FR_NHC_46FFI_46primWord32ToInteger(void);
void FR_NHC_46FFI_46primRemWord32(void);
void FR_NHC_46FFI_46primQuotWord32(void);
void FR_NHC_46FFI_46primWord32FromInteger(void);
void FR_NHC_46FFI_46primSignumWord32(void);
void FR_NHC_46FFI_46primMulWord32(void);
void FR_NHC_46FFI_46primSubWord32(void);
void FR_NHC_46FFI_46primAddWord32(void);
void FR_NHC_46FFI_46primGeWord32(void);
void FR_NHC_46FFI_46primGtWord32(void);
void FR_NHC_46FFI_46primLeWord32(void);
void FR_NHC_46FFI_46primLtWord32(void);
extern Node CF_Prelude_46Ord_46NHC_46FFI_46Word32[];
void FR_NHC_46FFI_46primEqWord32(void);
extern Node CF_Prelude_46Eq_46NHC_46FFI_46Word32[];
extern Node CF_Prelude_46Integral_46NHC_46FFI_46Word16[];
extern Node CF_Prelude_46Real_46NHC_46FFI_46Word16[];
extern Node CF_Prelude_46Show_46NHC_46FFI_46Word16[];
extern Node CF_Prelude_46Read_46NHC_46FFI_46Word16[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46Word16_46fromInteger[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46Word16_46_42[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46Word16_46_45[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46Word16_46_43[];
void FR_NHC_46FFI_46primFromEnumWord16(void);
void FR_NHC_46FFI_46primToEnumWord16(void);
extern Node CF_Prelude_46Enum_46NHC_46FFI_46Word16[];
extern Node FN_Prelude_46Ord_46NHC_46FFI_46Word16_46_60_61[];
extern Node CF_Ix_46Ix_46NHC_46FFI_46Word16[];
void FR_NHC_46FFI_46primWord16ToInteger(void);
void FR_NHC_46FFI_46primRemWord16(void);
void FR_NHC_46FFI_46primQuotWord16(void);
void FR_NHC_46FFI_46primWord16FromInteger(void);
void FR_NHC_46FFI_46primSignumWord16(void);
void FR_NHC_46FFI_46primMulWord16(void);
void FR_NHC_46FFI_46primSubWord16(void);
void FR_NHC_46FFI_46primAddWord16(void);
void FR_NHC_46FFI_46primGeWord16(void);
void FR_NHC_46FFI_46primGtWord16(void);
void FR_NHC_46FFI_46primLeWord16(void);
void FR_NHC_46FFI_46primLtWord16(void);
extern Node CF_Prelude_46Ord_46NHC_46FFI_46Word16[];
void FR_NHC_46FFI_46primEqWord16(void);
extern Node CF_Prelude_46Eq_46NHC_46FFI_46Word16[];
extern Node CF_Prelude_46Integral_46NHC_46FFI_46Word8[];
extern Node CF_Prelude_46Real_46NHC_46FFI_46Word8[];
extern Node CF_Prelude_46Show_46NHC_46FFI_46Word8[];
extern Node CF_Prelude_46Read_46NHC_46FFI_46Word8[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46Word8_46fromInteger[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46Word8_46_42[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46Word8_46_45[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46Word8_46_43[];
void FR_NHC_46FFI_46primFromEnumWord8(void);
void FR_NHC_46FFI_46primToEnumWord8(void);
extern Node CF_Prelude_46Enum_46NHC_46FFI_46Word8[];
extern Node FN_Prelude_46Ord_46NHC_46FFI_46Word8_46_60_61[];
extern Node CF_Ix_46Ix_46NHC_46FFI_46Word8[];
void FR_NHC_46FFI_46primWord8ToInteger(void);
void FR_NHC_46FFI_46primRemWord8(void);
void FR_NHC_46FFI_46primQuotWord8(void);
void FR_NHC_46FFI_46primWord8FromInteger(void);
void FR_NHC_46FFI_46primSignumWord8(void);
void FR_NHC_46FFI_46primMulWord8(void);
void FR_NHC_46FFI_46primSubWord8(void);
void FR_NHC_46FFI_46primAddWord8(void);
void FR_NHC_46FFI_46primGeWord8(void);
void FR_NHC_46FFI_46primGtWord8(void);
void FR_NHC_46FFI_46primLeWord8(void);
void FR_NHC_46FFI_46primLtWord8(void);
extern Node CF_Prelude_46Ord_46NHC_46FFI_46Word8[];
void FR_NHC_46FFI_46primEqWord8(void);
extern Node CF_Prelude_46Eq_46NHC_46FFI_46Word8[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2360)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word64_46showsPrec[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2360: (byte 0) */
  HW(8,2)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Word64_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word64_46showsPrec),2)
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA2339))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Numeric_46showHex))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word64)
, VAPTAG(useLabel(FN_Numeric_46showSigned))
, useLabel(CF_Prelude_46Real_46NHC_46FFI_46Word64)
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(0,0,0,0)
, useLabel(CT_v2362)
,	/* FN_LAMBDA2339: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v2361)
,	/* CT_v2362: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA2339: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA2339))
, bytes2word(1,0,0,1)
, useLabel(CT_v2363)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word64_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2363: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Word64_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word64_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Word64)
, bytes2word(1,0,0,1)
, useLabel(CT_v2364)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word64_46showsType[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2364: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Word64_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word64_46showsType),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showsType))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Word64)
, bytes2word(1,0,0,1)
, useLabel(CT_v2365)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word64_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2365: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Word64_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word64_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Word64)
, bytes2word(1,0,0,1)
, useLabel(CT_v2366)
,};
Node FN_Prelude_46Read_46NHC_46FFI_46Word64_46readsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2366: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Read_46NHC_46FFI_46Word64_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46NHC_46FFI_46Word64_46readsPrec),1)
, VAPTAG(useLabel(FN_Numeric_46readDec))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word64)
, VAPTAG(useLabel(FN_Numeric_46readSigned))
, useLabel(CF_Prelude_46Real_46NHC_46FFI_46Word64)
, bytes2word(0,0,0,0)
, useLabel(CT_v2367)
,};
Node FN_Prelude_46Read_46NHC_46FFI_46Word64_46readList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2367: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46NHC_46FFI_46Word64_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46NHC_46FFI_46Word64_46readList))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46NHC_46FFI_46Word64)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2368)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFromThen[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CADR_N1,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTRW(1,0)
, 2
,	/* CT_v2368: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFromThen),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word64_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word64_46_42))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word64_46_45))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFromThen))
, bytes2word(1,0,0,1)
, useLabel(CT_v2369)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFrom[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CADR_N1,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTRW(1,0)
, 1
,	/* CT_v2369: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFrom),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word64_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word64_46_43))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFrom))
, bytes2word(1,0,0,1)
, useLabel(CT_v2370)
,	/* FN_NHC_46FFI_46primFromEnumWord64: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primFromEnumWord64)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2370: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primFromEnumWord64: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primFromEnumWord64),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2371)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word64_46fromEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2371: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word64_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word64_46fromEnum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primFromEnumWord64))
, bytes2word(1,0,0,1)
, useLabel(CT_v2372)
,	/* FN_NHC_46FFI_46primToEnumWord64: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primToEnumWord64)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2372: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primToEnumWord64: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primToEnumWord64),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2373)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word64_46toEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2373: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word64_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word64_46toEnum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primToEnumWord64))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2374)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2374: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word64)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2375)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2375: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word64)
, bytes2word(1,0,0,1)
, useLabel(CT_v2376)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word64_46succ[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2376: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word64_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word64_46succ),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46succ))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word64)
, bytes2word(1,0,0,1)
, useLabel(CT_v2377)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word64_46pred[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2377: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word64_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word64_46pred),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46pred))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word64)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2381)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word64_46inRange[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2381: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Ix_46Ix_46NHC_46FFI_46Word64_46inRange[] = {
  CAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word64_46inRange),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word64_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2391)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word64_46index[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,23)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_I1,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
,	/* v2386: (byte 2) */
  bytes2word(1,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,JUMPFALSE,10,0)
, bytes2word(HEAP_CVAL_P1,8,PUSH_HEAP,HEAP_CVAL_P1)
,	/* v2388: (byte 4) */
  bytes2word(9,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v2382: (byte 1) */
  bytes2word(0,HEAP_CVAL_P1,10,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
,	/* CT_v2391: (byte 0) */
  HW(9,2)
, 0
,};
Node F0_Ix_46Ix_46NHC_46FFI_46Word64_46index[] = {
  CAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word64_46index),2)
, VAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word64_46inRange))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word64_46_45))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word64)
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, VAPTAG(useLabel(FN_LAMBDA2340))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_LAMBDA2341))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v2393)
,	/* FN_LAMBDA2341: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v2392)
,	/* CT_v2393: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA2341: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA2341))
, bytes2word(0,0,0,0)
, useLabel(CT_v2395)
,	/* FN_LAMBDA2340: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v2394)
,	/* CT_v2395: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA2340: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA2340))
, bytes2word(1,0,0,1)
, useLabel(CT_v2399)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word64_46range[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_I1,HEAP_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2399: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Ix_46Ix_46NHC_46FFI_46Word64_46range[] = {
  CAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word64_46range),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFromTo))
, bytes2word(1,0,0,1)
, useLabel(CT_v2400)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word64_46rangeSize[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2400: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Ix_46Ix_46NHC_46FFI_46Word64_46rangeSize[] = {
  CAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word64_46rangeSize),1)
, VAPTAG(useLabel(FN_Ix_46_95_46rangeSize))
, useLabel(CF_Ix_46Ix_46NHC_46FFI_46Word64)
, bytes2word(1,0,0,1)
, useLabel(CT_v2401)
,	/* FN_NHC_46FFI_46primWord64ToInteger: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primWord64ToInteger)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2401: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primWord64ToInteger: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primWord64ToInteger),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2402)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word64_46toInteger[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2402: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word64_46toInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word64_46toInteger),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primWord64ToInteger))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2403)
,	/* FN_NHC_46FFI_46primRemWord64: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primRemWord64)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2403: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primRemWord64: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primRemWord64),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2404)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word64_46rem[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2404: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word64_46rem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word64_46rem),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primRemWord64))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2405)
,	/* FN_NHC_46FFI_46primQuotWord64: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primQuotWord64)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2405: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primQuotWord64: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primQuotWord64),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2406)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word64_46quot[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2406: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word64_46quot[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word64_46quot),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primQuotWord64))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2407)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word64_46quotRem[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2407: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word64_46quotRem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word64_46quotRem),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46quotRem))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word64)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2408)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word64_46divMod[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2408: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word64_46divMod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word64_46divMod),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46divMod))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word64)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2409)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word64_46mod[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2409: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word64_46mod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word64_46mod),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46mod))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word64)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2410)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word64_46div[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2410: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word64_46div[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word64_46div),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46div))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word64)
, bytes2word(1,0,0,1)
, useLabel(CT_v2411)
,};
Node FN_Prelude_46Real_46NHC_46FFI_46Word64_46toRational[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_CADR_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v2411: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Real_46NHC_46FFI_46Word64_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46NHC_46FFI_46Word64_46toRational),1)
, VAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word64_46toInteger))
, VAPTAG(useLabel(FN_Ratio_46_37))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v2412)
,};
Node FN_Prelude_46Bounded_46NHC_46FFI_46Word64_46maxBound[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CADR_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(2,0)
, -1
, -1
,	/* CT_v2412: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Bounded_46NHC_46FFI_46Word64_46maxBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46NHC_46FFI_46Word64_46maxBound))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word64_46fromInteger))
, bytes2word(0,0,0,0)
, useLabel(CT_v2413)
,};
Node FN_Prelude_46Bounded_46NHC_46FFI_46Word64_46minBound[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CADR_N1)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v2413: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Bounded_46NHC_46FFI_46Word64_46minBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46NHC_46FFI_46Word64_46minBound))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word64_46fromInteger))
, bytes2word(1,0,0,1)
, useLabel(CT_v2414)
,	/* FN_NHC_46FFI_46primWord64FromInteger: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primWord64FromInteger)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2414: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primWord64FromInteger: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primWord64FromInteger),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2415)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word64_46fromInteger[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2415: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word64_46fromInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word64_46fromInteger),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primWord64FromInteger))
, bytes2word(1,0,0,1)
, useLabel(CT_v2416)
,	/* FN_NHC_46FFI_46primSignumWord64: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primSignumWord64)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2416: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primSignumWord64: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primSignumWord64),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2417)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word64_46signum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2417: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word64_46signum[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word64_46signum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primSignumWord64))
, bytes2word(1,0,0,1)
, useLabel(CT_v2418)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word64_46abs[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2418: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word64_46abs[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word64_46abs),1)
, VAPTAG(useLabel(FN_Prelude_46id))
, bytes2word(1,0,0,1)
, useLabel(CT_v2419)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word64_46negate[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2419: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word64_46negate[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word64_46negate),1)
, VAPTAG(useLabel(FN_LAMBDA2342))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v2421)
,	/* FN_LAMBDA2342: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v2420)
,	/* CT_v2421: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA2342: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA2342))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2422)
,	/* FN_NHC_46FFI_46primMulWord64: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primMulWord64)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2422: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primMulWord64: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primMulWord64),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2423)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word64_46_42[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2423: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word64_46_42[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word64_46_42),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primMulWord64))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2424)
,	/* FN_NHC_46FFI_46primSubWord64: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primSubWord64)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2424: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primSubWord64: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primSubWord64),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2425)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word64_46_45[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2425: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word64_46_45[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word64_46_45),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primSubWord64))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2426)
,	/* FN_NHC_46FFI_46primAddWord64: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primAddWord64)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2426: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primAddWord64: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primAddWord64),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2427)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word64_46_43[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2427: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word64_46_43[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word64_46_43),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primAddWord64))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2428)
,	/* FN_NHC_46FFI_46primGeWord64: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primGeWord64)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2428: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primGeWord64: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primGeWord64),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2429)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word64_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2429: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word64_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word64_46_62_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primGeWord64))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2430)
,	/* FN_NHC_46FFI_46primGtWord64: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primGtWord64)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2430: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primGtWord64: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primGtWord64),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2431)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word64_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2431: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word64_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word64_46_62),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primGtWord64))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2432)
,	/* FN_NHC_46FFI_46primLeWord64: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primLeWord64)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2432: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primLeWord64: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primLeWord64),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2433)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word64_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2433: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word64_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word64_46_60_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primLeWord64))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2434)
,	/* FN_NHC_46FFI_46primLtWord64: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primLtWord64)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2434: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primLtWord64: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primLtWord64),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2435)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word64_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2435: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word64_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word64_46_60),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primLtWord64))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2436)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word64_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2436: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word64_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word64_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word64)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2437)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word64_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2437: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word64_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word64_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word64)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2438)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word64_46compare[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2438: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word64_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word64_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46compare))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word64)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2439)
,	/* FN_NHC_46FFI_46primEqWord64: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primEqWord64)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2439: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primEqWord64: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primEqWord64),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2440)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Word64_46_61_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2440: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46Word64_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Word64_46_61_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primEqWord64))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2441)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Word64_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2441: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46Word64_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Word64_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Word64)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2442)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word32_46showsPrec[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2442: (byte 0) */
  HW(8,2)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Word32_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word32_46showsPrec),2)
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA2343))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Numeric_46showHex))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word32)
, VAPTAG(useLabel(FN_Numeric_46showSigned))
, useLabel(CF_Prelude_46Real_46NHC_46FFI_46Word32)
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(0,0,0,0)
, useLabel(CT_v2443)
,	/* FN_LAMBDA2343: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v2361)
,	/* CT_v2443: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA2343: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA2343))
, bytes2word(1,0,0,1)
, useLabel(CT_v2444)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word32_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2444: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Word32_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word32_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Word32)
, bytes2word(1,0,0,1)
, useLabel(CT_v2445)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word32_46showsType[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2445: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Word32_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word32_46showsType),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showsType))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Word32)
, bytes2word(1,0,0,1)
, useLabel(CT_v2446)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word32_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2446: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Word32_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word32_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Word32)
, bytes2word(1,0,0,1)
, useLabel(CT_v2447)
,};
Node FN_Prelude_46Read_46NHC_46FFI_46Word32_46readsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2447: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Read_46NHC_46FFI_46Word32_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46NHC_46FFI_46Word32_46readsPrec),1)
, VAPTAG(useLabel(FN_Numeric_46readDec))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word32)
, VAPTAG(useLabel(FN_Numeric_46readSigned))
, useLabel(CF_Prelude_46Real_46NHC_46FFI_46Word32)
, bytes2word(0,0,0,0)
, useLabel(CT_v2448)
,};
Node FN_Prelude_46Read_46NHC_46FFI_46Word32_46readList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2448: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46NHC_46FFI_46Word32_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46NHC_46FFI_46Word32_46readList))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46NHC_46FFI_46Word32)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2449)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFromThen[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CADR_N1,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTRW(1,0)
, 2
,	/* CT_v2449: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFromThen),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word32_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word32_46_42))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word32_46_45))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFromThen))
, bytes2word(1,0,0,1)
, useLabel(CT_v2450)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFrom[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CADR_N1,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTRW(1,0)
, 1
,	/* CT_v2450: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFrom),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word32_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word32_46_43))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFrom))
, bytes2word(1,0,0,1)
, useLabel(CT_v2451)
,	/* FN_NHC_46FFI_46primFromEnumWord32: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primFromEnumWord32)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2451: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primFromEnumWord32: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primFromEnumWord32),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2452)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word32_46fromEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2452: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word32_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word32_46fromEnum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primFromEnumWord32))
, bytes2word(1,0,0,1)
, useLabel(CT_v2453)
,	/* FN_NHC_46FFI_46primToEnumWord32: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primToEnumWord32)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2453: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primToEnumWord32: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primToEnumWord32),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2454)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word32_46toEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2454: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word32_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word32_46toEnum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primToEnumWord32))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2455)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2455: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word32)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2456)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2456: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word32)
, bytes2word(1,0,0,1)
, useLabel(CT_v2457)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word32_46succ[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2457: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word32_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word32_46succ),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46succ))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word32)
, bytes2word(1,0,0,1)
, useLabel(CT_v2458)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word32_46pred[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2458: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word32_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word32_46pred),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46pred))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word32)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2462)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word32_46inRange[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2462: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Ix_46Ix_46NHC_46FFI_46Word32_46inRange[] = {
  CAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word32_46inRange),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word32_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2472)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word32_46index[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,23)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_I1,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
,	/* v2467: (byte 2) */
  bytes2word(1,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,JUMPFALSE,10,0)
, bytes2word(HEAP_CVAL_P1,8,PUSH_HEAP,HEAP_CVAL_P1)
,	/* v2469: (byte 4) */
  bytes2word(9,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v2463: (byte 1) */
  bytes2word(0,HEAP_CVAL_P1,10,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
,	/* CT_v2472: (byte 0) */
  HW(9,2)
, 0
,};
Node F0_Ix_46Ix_46NHC_46FFI_46Word32_46index[] = {
  CAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word32_46index),2)
, VAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word32_46inRange))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word32_46_45))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word32)
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, VAPTAG(useLabel(FN_LAMBDA2344))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_LAMBDA2345))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v2474)
,	/* FN_LAMBDA2345: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v2473)
,	/* CT_v2474: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA2345: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA2345))
, bytes2word(0,0,0,0)
, useLabel(CT_v2475)
,	/* FN_LAMBDA2344: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v2394)
,	/* CT_v2475: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA2344: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA2344))
, bytes2word(1,0,0,1)
, useLabel(CT_v2479)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word32_46range[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_I1,HEAP_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2479: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Ix_46Ix_46NHC_46FFI_46Word32_46range[] = {
  CAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word32_46range),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFromTo))
, bytes2word(1,0,0,1)
, useLabel(CT_v2480)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word32_46rangeSize[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2480: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Ix_46Ix_46NHC_46FFI_46Word32_46rangeSize[] = {
  CAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word32_46rangeSize),1)
, VAPTAG(useLabel(FN_Ix_46_95_46rangeSize))
, useLabel(CF_Ix_46Ix_46NHC_46FFI_46Word32)
, bytes2word(1,0,0,1)
, useLabel(CT_v2481)
,	/* FN_NHC_46FFI_46primWord32ToInteger: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primWord32ToInteger)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2481: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primWord32ToInteger: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primWord32ToInteger),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2482)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word32_46toInteger[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2482: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word32_46toInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word32_46toInteger),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primWord32ToInteger))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2483)
,	/* FN_NHC_46FFI_46primRemWord32: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primRemWord32)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2483: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primRemWord32: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primRemWord32),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2484)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word32_46rem[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2484: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word32_46rem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word32_46rem),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primRemWord32))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2485)
,	/* FN_NHC_46FFI_46primQuotWord32: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primQuotWord32)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2485: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primQuotWord32: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primQuotWord32),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2486)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word32_46quot[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2486: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word32_46quot[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word32_46quot),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primQuotWord32))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2487)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word32_46quotRem[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2487: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word32_46quotRem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word32_46quotRem),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46quotRem))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word32)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2488)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word32_46divMod[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2488: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word32_46divMod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word32_46divMod),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46divMod))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word32)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2489)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word32_46mod[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2489: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word32_46mod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word32_46mod),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46mod))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word32)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2490)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word32_46div[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2490: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word32_46div[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word32_46div),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46div))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word32)
, bytes2word(1,0,0,1)
, useLabel(CT_v2491)
,};
Node FN_Prelude_46Real_46NHC_46FFI_46Word32_46toRational[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_CADR_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v2491: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Real_46NHC_46FFI_46Word32_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46NHC_46FFI_46Word32_46toRational),1)
, VAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word32_46toInteger))
, VAPTAG(useLabel(FN_Ratio_46_37))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v2492)
,};
Node FN_Prelude_46Bounded_46NHC_46FFI_46Word32_46maxBound[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CADR_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, -1
,	/* CT_v2492: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Bounded_46NHC_46FFI_46Word32_46maxBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46NHC_46FFI_46Word32_46maxBound))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word32_46fromInteger))
, bytes2word(0,0,0,0)
, useLabel(CT_v2493)
,};
Node FN_Prelude_46Bounded_46NHC_46FFI_46Word32_46minBound[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CADR_N1)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v2493: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Bounded_46NHC_46FFI_46Word32_46minBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46NHC_46FFI_46Word32_46minBound))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word32_46fromInteger))
, bytes2word(1,0,0,1)
, useLabel(CT_v2494)
,	/* FN_NHC_46FFI_46primWord32FromInteger: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primWord32FromInteger)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2494: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primWord32FromInteger: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primWord32FromInteger),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2495)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word32_46fromInteger[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2495: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word32_46fromInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word32_46fromInteger),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primWord32FromInteger))
, bytes2word(1,0,0,1)
, useLabel(CT_v2496)
,	/* FN_NHC_46FFI_46primSignumWord32: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primSignumWord32)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2496: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primSignumWord32: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primSignumWord32),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2497)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word32_46signum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2497: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word32_46signum[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word32_46signum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primSignumWord32))
, bytes2word(1,0,0,1)
, useLabel(CT_v2498)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word32_46abs[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2498: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word32_46abs[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word32_46abs),1)
, VAPTAG(useLabel(FN_Prelude_46id))
, bytes2word(1,0,0,1)
, useLabel(CT_v2499)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word32_46negate[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2499: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word32_46negate[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word32_46negate),1)
, VAPTAG(useLabel(FN_LAMBDA2346))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v2500)
,	/* FN_LAMBDA2346: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v2420)
,	/* CT_v2500: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA2346: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA2346))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2501)
,	/* FN_NHC_46FFI_46primMulWord32: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primMulWord32)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2501: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primMulWord32: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primMulWord32),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2502)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word32_46_42[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2502: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word32_46_42[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word32_46_42),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primMulWord32))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2503)
,	/* FN_NHC_46FFI_46primSubWord32: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primSubWord32)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2503: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primSubWord32: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primSubWord32),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2504)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word32_46_45[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2504: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word32_46_45[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word32_46_45),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primSubWord32))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2505)
,	/* FN_NHC_46FFI_46primAddWord32: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primAddWord32)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2505: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primAddWord32: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primAddWord32),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2506)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word32_46_43[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2506: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word32_46_43[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word32_46_43),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primAddWord32))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2507)
,	/* FN_NHC_46FFI_46primGeWord32: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primGeWord32)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2507: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primGeWord32: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primGeWord32),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2508)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word32_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2508: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word32_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word32_46_62_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primGeWord32))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2509)
,	/* FN_NHC_46FFI_46primGtWord32: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primGtWord32)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2509: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primGtWord32: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primGtWord32),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2510)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word32_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2510: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word32_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word32_46_62),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primGtWord32))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2511)
,	/* FN_NHC_46FFI_46primLeWord32: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primLeWord32)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2511: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primLeWord32: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primLeWord32),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2512)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word32_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2512: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word32_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word32_46_60_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primLeWord32))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2513)
,	/* FN_NHC_46FFI_46primLtWord32: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primLtWord32)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2513: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primLtWord32: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primLtWord32),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2514)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word32_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2514: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word32_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word32_46_60),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primLtWord32))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2515)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word32_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2515: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word32_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word32_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word32)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2516)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word32_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2516: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word32_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word32_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word32)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2517)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word32_46compare[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2517: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word32_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word32_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46compare))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word32)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2518)
,	/* FN_NHC_46FFI_46primEqWord32: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primEqWord32)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2518: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primEqWord32: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primEqWord32),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2519)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Word32_46_61_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2519: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46Word32_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Word32_46_61_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primEqWord32))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2520)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Word32_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2520: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46Word32_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Word32_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Word32)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2521)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word16_46showsPrec[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2521: (byte 0) */
  HW(8,2)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Word16_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word16_46showsPrec),2)
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA2347))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Numeric_46showHex))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word16)
, VAPTAG(useLabel(FN_Numeric_46showSigned))
, useLabel(CF_Prelude_46Real_46NHC_46FFI_46Word16)
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(0,0,0,0)
, useLabel(CT_v2522)
,	/* FN_LAMBDA2347: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v2361)
,	/* CT_v2522: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA2347: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA2347))
, bytes2word(1,0,0,1)
, useLabel(CT_v2523)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word16_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2523: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Word16_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word16_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Word16)
, bytes2word(1,0,0,1)
, useLabel(CT_v2524)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word16_46showsType[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2524: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Word16_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word16_46showsType),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showsType))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Word16)
, bytes2word(1,0,0,1)
, useLabel(CT_v2525)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word16_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2525: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Word16_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word16_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Word16)
, bytes2word(1,0,0,1)
, useLabel(CT_v2526)
,};
Node FN_Prelude_46Read_46NHC_46FFI_46Word16_46readsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2526: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Read_46NHC_46FFI_46Word16_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46NHC_46FFI_46Word16_46readsPrec),1)
, VAPTAG(useLabel(FN_Numeric_46readDec))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word16)
, VAPTAG(useLabel(FN_Numeric_46readSigned))
, useLabel(CF_Prelude_46Real_46NHC_46FFI_46Word16)
, bytes2word(0,0,0,0)
, useLabel(CT_v2527)
,};
Node FN_Prelude_46Read_46NHC_46FFI_46Word16_46readList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2527: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46NHC_46FFI_46Word16_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46NHC_46FFI_46Word16_46readList))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46NHC_46FFI_46Word16)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2528)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFromThen[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CADR_N1,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTRW(1,0)
, 2
,	/* CT_v2528: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFromThen),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word16_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word16_46_42))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word16_46_45))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFromThen))
, bytes2word(1,0,0,1)
, useLabel(CT_v2529)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFrom[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CADR_N1,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTRW(1,0)
, 1
,	/* CT_v2529: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFrom),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word16_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word16_46_43))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFrom))
, bytes2word(1,0,0,1)
, useLabel(CT_v2530)
,	/* FN_NHC_46FFI_46primFromEnumWord16: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primFromEnumWord16)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2530: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primFromEnumWord16: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primFromEnumWord16),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2531)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word16_46fromEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2531: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word16_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word16_46fromEnum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primFromEnumWord16))
, bytes2word(1,0,0,1)
, useLabel(CT_v2532)
,	/* FN_NHC_46FFI_46primToEnumWord16: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primToEnumWord16)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2532: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primToEnumWord16: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primToEnumWord16),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2533)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word16_46toEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2533: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word16_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word16_46toEnum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primToEnumWord16))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2534)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2534: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word16)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2535)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2535: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word16)
, bytes2word(1,0,0,1)
, useLabel(CT_v2536)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word16_46succ[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2536: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word16_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word16_46succ),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46succ))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word16)
, bytes2word(1,0,0,1)
, useLabel(CT_v2537)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word16_46pred[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2537: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word16_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word16_46pred),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46pred))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word16)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2541)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word16_46inRange[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2541: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Ix_46Ix_46NHC_46FFI_46Word16_46inRange[] = {
  CAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word16_46inRange),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word16_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2551)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word16_46index[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,23)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_I1,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
,	/* v2546: (byte 2) */
  bytes2word(1,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,JUMPFALSE,10,0)
, bytes2word(HEAP_CVAL_P1,8,PUSH_HEAP,HEAP_CVAL_P1)
,	/* v2548: (byte 4) */
  bytes2word(9,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v2542: (byte 1) */
  bytes2word(0,HEAP_CVAL_P1,10,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
,	/* CT_v2551: (byte 0) */
  HW(9,2)
, 0
,};
Node F0_Ix_46Ix_46NHC_46FFI_46Word16_46index[] = {
  CAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word16_46index),2)
, VAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word16_46inRange))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word16_46_45))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word16)
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, VAPTAG(useLabel(FN_LAMBDA2348))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_LAMBDA2349))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v2553)
,	/* FN_LAMBDA2349: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v2552)
,	/* CT_v2553: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA2349: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA2349))
, bytes2word(0,0,0,0)
, useLabel(CT_v2554)
,	/* FN_LAMBDA2348: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v2394)
,	/* CT_v2554: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA2348: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA2348))
, bytes2word(1,0,0,1)
, useLabel(CT_v2558)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word16_46range[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_I1,HEAP_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2558: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Ix_46Ix_46NHC_46FFI_46Word16_46range[] = {
  CAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word16_46range),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFromTo))
, bytes2word(1,0,0,1)
, useLabel(CT_v2559)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word16_46rangeSize[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2559: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Ix_46Ix_46NHC_46FFI_46Word16_46rangeSize[] = {
  CAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word16_46rangeSize),1)
, VAPTAG(useLabel(FN_Ix_46_95_46rangeSize))
, useLabel(CF_Ix_46Ix_46NHC_46FFI_46Word16)
, bytes2word(1,0,0,1)
, useLabel(CT_v2560)
,	/* FN_NHC_46FFI_46primWord16ToInteger: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primWord16ToInteger)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2560: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primWord16ToInteger: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primWord16ToInteger),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2561)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word16_46toInteger[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2561: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word16_46toInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word16_46toInteger),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primWord16ToInteger))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2562)
,	/* FN_NHC_46FFI_46primRemWord16: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primRemWord16)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2562: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primRemWord16: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primRemWord16),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2563)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word16_46rem[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2563: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word16_46rem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word16_46rem),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primRemWord16))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2564)
,	/* FN_NHC_46FFI_46primQuotWord16: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primQuotWord16)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2564: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primQuotWord16: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primQuotWord16),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2565)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word16_46quot[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2565: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word16_46quot[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word16_46quot),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primQuotWord16))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2566)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word16_46quotRem[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2566: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word16_46quotRem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word16_46quotRem),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46quotRem))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word16)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2567)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word16_46divMod[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2567: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word16_46divMod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word16_46divMod),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46divMod))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word16)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2568)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word16_46mod[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2568: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word16_46mod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word16_46mod),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46mod))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word16)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2569)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word16_46div[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2569: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word16_46div[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word16_46div),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46div))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word16)
, bytes2word(1,0,0,1)
, useLabel(CT_v2570)
,};
Node FN_Prelude_46Real_46NHC_46FFI_46Word16_46toRational[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_CADR_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v2570: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Real_46NHC_46FFI_46Word16_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46NHC_46FFI_46Word16_46toRational),1)
, VAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word16_46toInteger))
, VAPTAG(useLabel(FN_Ratio_46_37))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v2571)
,};
Node FN_Prelude_46Bounded_46NHC_46FFI_46Word16_46maxBound[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CADR_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 65535
,	/* CT_v2571: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Bounded_46NHC_46FFI_46Word16_46maxBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46NHC_46FFI_46Word16_46maxBound))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word16_46fromInteger))
, bytes2word(0,0,0,0)
, useLabel(CT_v2572)
,};
Node FN_Prelude_46Bounded_46NHC_46FFI_46Word16_46minBound[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CADR_N1)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v2572: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Bounded_46NHC_46FFI_46Word16_46minBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46NHC_46FFI_46Word16_46minBound))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word16_46fromInteger))
, bytes2word(1,0,0,1)
, useLabel(CT_v2573)
,	/* FN_NHC_46FFI_46primWord16FromInteger: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primWord16FromInteger)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2573: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primWord16FromInteger: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primWord16FromInteger),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2574)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word16_46fromInteger[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2574: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word16_46fromInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word16_46fromInteger),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primWord16FromInteger))
, bytes2word(1,0,0,1)
, useLabel(CT_v2575)
,	/* FN_NHC_46FFI_46primSignumWord16: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primSignumWord16)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2575: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primSignumWord16: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primSignumWord16),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2576)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word16_46signum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2576: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word16_46signum[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word16_46signum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primSignumWord16))
, bytes2word(1,0,0,1)
, useLabel(CT_v2577)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word16_46abs[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2577: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word16_46abs[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word16_46abs),1)
, VAPTAG(useLabel(FN_Prelude_46id))
, bytes2word(1,0,0,1)
, useLabel(CT_v2578)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word16_46negate[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2578: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word16_46negate[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word16_46negate),1)
, VAPTAG(useLabel(FN_LAMBDA2350))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v2579)
,	/* FN_LAMBDA2350: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v2420)
,	/* CT_v2579: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA2350: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA2350))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2580)
,	/* FN_NHC_46FFI_46primMulWord16: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primMulWord16)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2580: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primMulWord16: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primMulWord16),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2581)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word16_46_42[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2581: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word16_46_42[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word16_46_42),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primMulWord16))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2582)
,	/* FN_NHC_46FFI_46primSubWord16: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primSubWord16)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2582: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primSubWord16: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primSubWord16),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2583)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word16_46_45[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2583: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word16_46_45[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word16_46_45),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primSubWord16))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2584)
,	/* FN_NHC_46FFI_46primAddWord16: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primAddWord16)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2584: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primAddWord16: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primAddWord16),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2585)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word16_46_43[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2585: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word16_46_43[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word16_46_43),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primAddWord16))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2586)
,	/* FN_NHC_46FFI_46primGeWord16: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primGeWord16)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2586: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primGeWord16: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primGeWord16),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2587)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word16_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2587: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word16_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word16_46_62_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primGeWord16))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2588)
,	/* FN_NHC_46FFI_46primGtWord16: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primGtWord16)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2588: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primGtWord16: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primGtWord16),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2589)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word16_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2589: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word16_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word16_46_62),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primGtWord16))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2590)
,	/* FN_NHC_46FFI_46primLeWord16: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primLeWord16)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2590: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primLeWord16: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primLeWord16),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2591)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word16_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2591: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word16_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word16_46_60_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primLeWord16))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2592)
,	/* FN_NHC_46FFI_46primLtWord16: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primLtWord16)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2592: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primLtWord16: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primLtWord16),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2593)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word16_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2593: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word16_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word16_46_60),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primLtWord16))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2594)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word16_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2594: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word16_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word16_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word16)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2595)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word16_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2595: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word16_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word16_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word16)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2596)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word16_46compare[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2596: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word16_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word16_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46compare))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word16)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2597)
,	/* FN_NHC_46FFI_46primEqWord16: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primEqWord16)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2597: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primEqWord16: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primEqWord16),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2598)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Word16_46_61_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2598: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46Word16_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Word16_46_61_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primEqWord16))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2599)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Word16_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2599: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46Word16_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Word16_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Word16)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2600)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word8_46showsPrec[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2600: (byte 0) */
  HW(8,2)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Word8_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word8_46showsPrec),2)
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA2351))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Numeric_46showHex))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word8)
, VAPTAG(useLabel(FN_Numeric_46showSigned))
, useLabel(CF_Prelude_46Real_46NHC_46FFI_46Word8)
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(0,0,0,0)
, useLabel(CT_v2601)
,	/* FN_LAMBDA2351: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v2361)
,	/* CT_v2601: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA2351: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA2351))
, bytes2word(1,0,0,1)
, useLabel(CT_v2602)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word8_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2602: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Word8_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word8_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Word8)
, bytes2word(1,0,0,1)
, useLabel(CT_v2603)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word8_46showsType[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2603: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Word8_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word8_46showsType),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showsType))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Word8)
, bytes2word(1,0,0,1)
, useLabel(CT_v2604)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word8_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2604: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Word8_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word8_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Word8)
, bytes2word(1,0,0,1)
, useLabel(CT_v2605)
,};
Node FN_Prelude_46Read_46NHC_46FFI_46Word8_46readsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2605: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Read_46NHC_46FFI_46Word8_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46NHC_46FFI_46Word8_46readsPrec),1)
, VAPTAG(useLabel(FN_Numeric_46readDec))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word8)
, VAPTAG(useLabel(FN_Numeric_46readSigned))
, useLabel(CF_Prelude_46Real_46NHC_46FFI_46Word8)
, bytes2word(0,0,0,0)
, useLabel(CT_v2606)
,};
Node FN_Prelude_46Read_46NHC_46FFI_46Word8_46readList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2606: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46NHC_46FFI_46Word8_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46NHC_46FFI_46Word8_46readList))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46NHC_46FFI_46Word8)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2607)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFromThen[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CADR_N1,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTRW(1,0)
, 2
,	/* CT_v2607: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFromThen),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word8_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word8_46_42))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word8_46_45))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFromThen))
, bytes2word(1,0,0,1)
, useLabel(CT_v2608)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFrom[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CADR_N1,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTRW(1,0)
, 1
,	/* CT_v2608: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFrom),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word8_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word8_46_43))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFrom))
, bytes2word(1,0,0,1)
, useLabel(CT_v2609)
,	/* FN_NHC_46FFI_46primFromEnumWord8: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primFromEnumWord8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2609: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primFromEnumWord8: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primFromEnumWord8),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2610)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word8_46fromEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2610: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word8_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word8_46fromEnum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primFromEnumWord8))
, bytes2word(1,0,0,1)
, useLabel(CT_v2611)
,	/* FN_NHC_46FFI_46primToEnumWord8: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primToEnumWord8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2611: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primToEnumWord8: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primToEnumWord8),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2612)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word8_46toEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2612: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word8_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word8_46toEnum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primToEnumWord8))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v2613)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2613: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word8)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2614)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2614: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word8)
, bytes2word(1,0,0,1)
, useLabel(CT_v2615)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word8_46succ[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2615: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word8_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word8_46succ),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46succ))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word8)
, bytes2word(1,0,0,1)
, useLabel(CT_v2616)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word8_46pred[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2616: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Word8_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word8_46pred),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46pred))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word8)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2620)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word8_46inRange[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2620: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Ix_46Ix_46NHC_46FFI_46Word8_46inRange[] = {
  CAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word8_46inRange),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word8_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2630)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word8_46index[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,23)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_I1,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
,	/* v2625: (byte 2) */
  bytes2word(1,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,JUMPFALSE,10,0)
, bytes2word(HEAP_CVAL_P1,8,PUSH_HEAP,HEAP_CVAL_P1)
,	/* v2627: (byte 4) */
  bytes2word(9,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v2621: (byte 1) */
  bytes2word(0,HEAP_CVAL_P1,10,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
,	/* CT_v2630: (byte 0) */
  HW(9,2)
, 0
,};
Node F0_Ix_46Ix_46NHC_46FFI_46Word8_46index[] = {
  CAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word8_46index),2)
, VAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word8_46inRange))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word8_46_45))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word8)
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, VAPTAG(useLabel(FN_LAMBDA2352))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_LAMBDA2353))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v2632)
,	/* FN_LAMBDA2353: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v2631)
,	/* CT_v2632: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA2353: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA2353))
, bytes2word(0,0,0,0)
, useLabel(CT_v2633)
,	/* FN_LAMBDA2352: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v2394)
,	/* CT_v2633: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA2352: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA2352))
, bytes2word(1,0,0,1)
, useLabel(CT_v2637)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word8_46range[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_I1,HEAP_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2637: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Ix_46Ix_46NHC_46FFI_46Word8_46range[] = {
  CAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word8_46range),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFromTo))
, bytes2word(1,0,0,1)
, useLabel(CT_v2638)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word8_46rangeSize[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2638: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Ix_46Ix_46NHC_46FFI_46Word8_46rangeSize[] = {
  CAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word8_46rangeSize),1)
, VAPTAG(useLabel(FN_Ix_46_95_46rangeSize))
, useLabel(CF_Ix_46Ix_46NHC_46FFI_46Word8)
, bytes2word(1,0,0,1)
, useLabel(CT_v2639)
,	/* FN_NHC_46FFI_46primWord8ToInteger: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primWord8ToInteger)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2639: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primWord8ToInteger: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primWord8ToInteger),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2640)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word8_46toInteger[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2640: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word8_46toInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word8_46toInteger),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primWord8ToInteger))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2641)
,	/* FN_NHC_46FFI_46primRemWord8: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primRemWord8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2641: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primRemWord8: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primRemWord8),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2642)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word8_46rem[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2642: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word8_46rem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word8_46rem),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primRemWord8))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2643)
,	/* FN_NHC_46FFI_46primQuotWord8: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primQuotWord8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2643: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primQuotWord8: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primQuotWord8),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2644)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word8_46quot[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2644: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word8_46quot[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word8_46quot),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primQuotWord8))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2645)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word8_46quotRem[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2645: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word8_46quotRem[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word8_46quotRem),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46quotRem))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word8)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2646)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word8_46divMod[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2646: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word8_46divMod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word8_46divMod),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46divMod))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word8)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2647)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word8_46mod[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2647: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word8_46mod[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word8_46mod),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46mod))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word8)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2648)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word8_46div[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2648: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Integral_46NHC_46FFI_46Word8_46div[] = {
  CAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word8_46div),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46div))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word8)
, bytes2word(1,0,0,1)
, useLabel(CT_v2649)
,};
Node FN_Prelude_46Real_46NHC_46FFI_46Word8_46toRational[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_CADR_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v2649: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Real_46NHC_46FFI_46Word8_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46NHC_46FFI_46Word8_46toRational),1)
, VAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word8_46toInteger))
, VAPTAG(useLabel(FN_Ratio_46_37))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v2650)
,};
Node FN_Prelude_46Bounded_46NHC_46FFI_46Word8_46maxBound[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CADR_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 255
,	/* CT_v2650: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Bounded_46NHC_46FFI_46Word8_46maxBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46NHC_46FFI_46Word8_46maxBound))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word8_46fromInteger))
, bytes2word(0,0,0,0)
, useLabel(CT_v2651)
,};
Node FN_Prelude_46Bounded_46NHC_46FFI_46Word8_46minBound[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CADR_N1)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v2651: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Bounded_46NHC_46FFI_46Word8_46minBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46NHC_46FFI_46Word8_46minBound))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word8_46fromInteger))
, bytes2word(1,0,0,1)
, useLabel(CT_v2652)
,	/* FN_NHC_46FFI_46primWord8FromInteger: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primWord8FromInteger)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2652: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primWord8FromInteger: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primWord8FromInteger),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2653)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word8_46fromInteger[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2653: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word8_46fromInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word8_46fromInteger),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primWord8FromInteger))
, bytes2word(1,0,0,1)
, useLabel(CT_v2654)
,	/* FN_NHC_46FFI_46primSignumWord8: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46primSignumWord8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2654: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46primSignumWord8: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primSignumWord8),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v2655)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word8_46signum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2655: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word8_46signum[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word8_46signum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46primSignumWord8))
, bytes2word(1,0,0,1)
, useLabel(CT_v2656)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word8_46abs[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2656: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word8_46abs[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word8_46abs),1)
, VAPTAG(useLabel(FN_Prelude_46id))
, bytes2word(1,0,0,1)
, useLabel(CT_v2657)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word8_46negate[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2657: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word8_46negate[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word8_46negate),1)
, VAPTAG(useLabel(FN_LAMBDA2354))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v2658)
,	/* FN_LAMBDA2354: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v2420)
,	/* CT_v2658: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA2354: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA2354))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2659)
,	/* FN_NHC_46FFI_46primMulWord8: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primMulWord8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2659: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primMulWord8: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primMulWord8),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2660)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word8_46_42[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2660: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word8_46_42[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word8_46_42),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primMulWord8))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2661)
,	/* FN_NHC_46FFI_46primSubWord8: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primSubWord8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2661: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primSubWord8: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primSubWord8),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2662)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word8_46_45[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2662: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word8_46_45[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word8_46_45),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primSubWord8))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2663)
,	/* FN_NHC_46FFI_46primAddWord8: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primAddWord8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2663: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primAddWord8: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primAddWord8),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2664)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word8_46_43[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2664: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46NHC_46FFI_46Word8_46_43[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word8_46_43),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primAddWord8))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2665)
,	/* FN_NHC_46FFI_46primGeWord8: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primGeWord8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2665: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primGeWord8: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primGeWord8),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2666)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word8_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2666: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word8_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word8_46_62_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primGeWord8))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2667)
,	/* FN_NHC_46FFI_46primGtWord8: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primGtWord8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2667: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primGtWord8: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primGtWord8),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2668)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word8_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2668: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word8_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word8_46_62),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primGtWord8))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2669)
,	/* FN_NHC_46FFI_46primLeWord8: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primLeWord8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2669: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primLeWord8: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primLeWord8),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2670)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word8_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2670: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word8_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word8_46_60_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primLeWord8))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2671)
,	/* FN_NHC_46FFI_46primLtWord8: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primLtWord8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2671: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primLtWord8: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primLtWord8),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2672)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word8_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2672: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word8_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word8_46_60),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primLtWord8))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2673)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word8_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2673: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word8_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word8_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word8)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2674)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word8_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2674: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word8_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word8_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word8)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2675)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word8_46compare[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2675: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Word8_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word8_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46compare))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word8)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2676)
,	/* FN_NHC_46FFI_46primEqWord8: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primEqWord8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2676: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primEqWord8: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primEqWord8),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2677)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Word8_46_61_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2677: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46Word8_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Word8_46_61_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46primEqWord8))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v2678)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Word8_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2678: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46Word8_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Word8_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Word8)
, bytes2word(0,0,0,0)
, useLabel(CT_v2679)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Word8[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v2679: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46NHC_46FFI_46Word8[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Word8))
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46Word8_46_47_61)
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46Word8_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v2680)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word8[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v2680: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46NHC_46FFI_46Word8[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word8))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Word8)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word8_46_60)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word8_46_60_61)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word8_46_62_61)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word8_46_62)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word8_46compare)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word8_46min)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word8_46max)
, bytes2word(0,0,0,0)
, useLabel(CT_v2681)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word8[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
,	/* CT_v2681: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_Prelude_46Num_46NHC_46FFI_46Word8[] = {
  VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word8))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Word8)
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Word8)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word8_46_42)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word8_46_43)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word8_46_45)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word8_46negate)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word8_46signum)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word8_46fromInteger)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word8_46abs)
, bytes2word(0,0,0,0)
, useLabel(CT_v2682)
,};
Node FN_Prelude_46Bounded_46NHC_46FFI_46Word8[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v2682: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Bounded_46NHC_46FFI_46Word8[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46NHC_46FFI_46Word8))
, useLabel(CF_Prelude_46Bounded_46NHC_46FFI_46Word8_46minBound)
, useLabel(CF_Prelude_46Bounded_46NHC_46FFI_46Word8_46maxBound)
, bytes2word(0,0,0,0)
, useLabel(CT_v2683)
,};
Node FN_Prelude_46Real_46NHC_46FFI_46Word8[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
,	/* CT_v2683: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Prelude_46Real_46NHC_46FFI_46Word8[] = {
  VAPTAG(useLabel(FN_Prelude_46Real_46NHC_46FFI_46Word8))
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46Word8)
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word8)
, useLabel(F0_Prelude_46Real_46NHC_46FFI_46Word8_46toRational)
, bytes2word(0,0,0,0)
, useLabel(CT_v2684)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word8[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
,	/* CT_v2684: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_Prelude_46Integral_46NHC_46FFI_46Word8[] = {
  VAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word8))
, useLabel(CF_Prelude_46Real_46NHC_46FFI_46Word8)
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word8)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word8_46divMod)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word8_46mod)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word8_46quotRem)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word8_46rem)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word8_46toInteger)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word8_46quot)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word8_46div)
, bytes2word(0,0,0,0)
, useLabel(CT_v2685)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word8[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,5,0)
,	/* CT_v2685: (byte 0) */
  HW(5,0)
, 0
,};
Node CF_Ix_46Ix_46NHC_46FFI_46Word8[] = {
  VAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word8))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word8)
, useLabel(F0_Ix_46Ix_46NHC_46FFI_46Word8_46inRange)
, useLabel(F0_Ix_46Ix_46NHC_46FFI_46Word8_46range)
, useLabel(F0_Ix_46Ix_46NHC_46FFI_46Word8_46rangeSize)
, useLabel(F0_Ix_46Ix_46NHC_46FFI_46Word8_46index)
, bytes2word(0,0,0,0)
, useLabel(CT_v2686)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word8[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v2686: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Enum_46NHC_46FFI_46Word8[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word8))
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word8_46succ)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word8_46pred)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFrom)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word8_46fromEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word8_46toEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word8_46enumFromThenTo)
, bytes2word(0,0,0,0)
, useLabel(CT_v2687)
,};
Node FN_Prelude_46Read_46NHC_46FFI_46Word8[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v2687: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46NHC_46FFI_46Word8[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46NHC_46FFI_46Word8))
, useLabel(F0_Prelude_46Read_46NHC_46FFI_46Word8_46readsPrec)
, useLabel(CF_Prelude_46Read_46NHC_46FFI_46Word8_46readList)
, bytes2word(0,0,0,0)
, useLabel(CT_v2688)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word8[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v2688: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46NHC_46FFI_46Word8[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word8))
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Word8_46showsPrec)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Word8_46showsType)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Word8_46showList)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Word8_46show)
, bytes2word(0,0,0,0)
, useLabel(CT_v2689)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Word16[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v2689: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46NHC_46FFI_46Word16[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Word16))
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46Word16_46_47_61)
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46Word16_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v2690)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word16[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v2690: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46NHC_46FFI_46Word16[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word16))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Word16)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word16_46_60)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word16_46_60_61)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word16_46_62_61)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word16_46_62)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word16_46compare)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word16_46min)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word16_46max)
, bytes2word(0,0,0,0)
, useLabel(CT_v2691)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word16[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
,	/* CT_v2691: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_Prelude_46Num_46NHC_46FFI_46Word16[] = {
  VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word16))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Word16)
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Word16)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word16_46_42)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word16_46_43)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word16_46_45)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word16_46negate)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word16_46signum)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word16_46fromInteger)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word16_46abs)
, bytes2word(0,0,0,0)
, useLabel(CT_v2692)
,};
Node FN_Prelude_46Bounded_46NHC_46FFI_46Word16[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v2692: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Bounded_46NHC_46FFI_46Word16[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46NHC_46FFI_46Word16))
, useLabel(CF_Prelude_46Bounded_46NHC_46FFI_46Word16_46minBound)
, useLabel(CF_Prelude_46Bounded_46NHC_46FFI_46Word16_46maxBound)
, bytes2word(0,0,0,0)
, useLabel(CT_v2693)
,};
Node FN_Prelude_46Real_46NHC_46FFI_46Word16[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
,	/* CT_v2693: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Prelude_46Real_46NHC_46FFI_46Word16[] = {
  VAPTAG(useLabel(FN_Prelude_46Real_46NHC_46FFI_46Word16))
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46Word16)
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word16)
, useLabel(F0_Prelude_46Real_46NHC_46FFI_46Word16_46toRational)
, bytes2word(0,0,0,0)
, useLabel(CT_v2694)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word16[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
,	/* CT_v2694: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_Prelude_46Integral_46NHC_46FFI_46Word16[] = {
  VAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word16))
, useLabel(CF_Prelude_46Real_46NHC_46FFI_46Word16)
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word16)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word16_46divMod)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word16_46mod)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word16_46quotRem)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word16_46rem)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word16_46toInteger)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word16_46quot)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word16_46div)
, bytes2word(0,0,0,0)
, useLabel(CT_v2695)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word16[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,5,0)
,	/* CT_v2695: (byte 0) */
  HW(5,0)
, 0
,};
Node CF_Ix_46Ix_46NHC_46FFI_46Word16[] = {
  VAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word16))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word16)
, useLabel(F0_Ix_46Ix_46NHC_46FFI_46Word16_46inRange)
, useLabel(F0_Ix_46Ix_46NHC_46FFI_46Word16_46range)
, useLabel(F0_Ix_46Ix_46NHC_46FFI_46Word16_46rangeSize)
, useLabel(F0_Ix_46Ix_46NHC_46FFI_46Word16_46index)
, bytes2word(0,0,0,0)
, useLabel(CT_v2696)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word16[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v2696: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Enum_46NHC_46FFI_46Word16[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word16))
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word16_46succ)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word16_46pred)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFrom)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word16_46fromEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word16_46toEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word16_46enumFromThenTo)
, bytes2word(0,0,0,0)
, useLabel(CT_v2697)
,};
Node FN_Prelude_46Read_46NHC_46FFI_46Word16[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v2697: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46NHC_46FFI_46Word16[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46NHC_46FFI_46Word16))
, useLabel(F0_Prelude_46Read_46NHC_46FFI_46Word16_46readsPrec)
, useLabel(CF_Prelude_46Read_46NHC_46FFI_46Word16_46readList)
, bytes2word(0,0,0,0)
, useLabel(CT_v2698)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word16[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v2698: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46NHC_46FFI_46Word16[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word16))
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Word16_46showsPrec)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Word16_46showsType)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Word16_46showList)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Word16_46show)
, bytes2word(0,0,0,0)
, useLabel(CT_v2699)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Word32[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v2699: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46NHC_46FFI_46Word32[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Word32))
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46Word32_46_47_61)
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46Word32_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v2700)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word32[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v2700: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46NHC_46FFI_46Word32[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word32))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Word32)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word32_46_60)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word32_46_60_61)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word32_46_62_61)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word32_46_62)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word32_46compare)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word32_46min)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word32_46max)
, bytes2word(0,0,0,0)
, useLabel(CT_v2701)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word32[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
,	/* CT_v2701: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_Prelude_46Num_46NHC_46FFI_46Word32[] = {
  VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word32))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Word32)
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Word32)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word32_46_42)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word32_46_43)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word32_46_45)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word32_46negate)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word32_46signum)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word32_46fromInteger)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word32_46abs)
, bytes2word(0,0,0,0)
, useLabel(CT_v2702)
,};
Node FN_Prelude_46Bounded_46NHC_46FFI_46Word32[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v2702: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Bounded_46NHC_46FFI_46Word32[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46NHC_46FFI_46Word32))
, useLabel(CF_Prelude_46Bounded_46NHC_46FFI_46Word32_46minBound)
, useLabel(CF_Prelude_46Bounded_46NHC_46FFI_46Word32_46maxBound)
, bytes2word(0,0,0,0)
, useLabel(CT_v2703)
,};
Node FN_Prelude_46Real_46NHC_46FFI_46Word32[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
,	/* CT_v2703: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Prelude_46Real_46NHC_46FFI_46Word32[] = {
  VAPTAG(useLabel(FN_Prelude_46Real_46NHC_46FFI_46Word32))
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46Word32)
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word32)
, useLabel(F0_Prelude_46Real_46NHC_46FFI_46Word32_46toRational)
, bytes2word(0,0,0,0)
, useLabel(CT_v2704)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word32[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
,	/* CT_v2704: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_Prelude_46Integral_46NHC_46FFI_46Word32[] = {
  VAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word32))
, useLabel(CF_Prelude_46Real_46NHC_46FFI_46Word32)
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word32)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word32_46divMod)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word32_46mod)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word32_46quotRem)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word32_46rem)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word32_46toInteger)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word32_46quot)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word32_46div)
, bytes2word(0,0,0,0)
, useLabel(CT_v2705)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word32[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,5,0)
,	/* CT_v2705: (byte 0) */
  HW(5,0)
, 0
,};
Node CF_Ix_46Ix_46NHC_46FFI_46Word32[] = {
  VAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word32))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word32)
, useLabel(F0_Ix_46Ix_46NHC_46FFI_46Word32_46inRange)
, useLabel(F0_Ix_46Ix_46NHC_46FFI_46Word32_46range)
, useLabel(F0_Ix_46Ix_46NHC_46FFI_46Word32_46rangeSize)
, useLabel(F0_Ix_46Ix_46NHC_46FFI_46Word32_46index)
, bytes2word(0,0,0,0)
, useLabel(CT_v2706)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word32[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v2706: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Enum_46NHC_46FFI_46Word32[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word32))
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word32_46succ)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word32_46pred)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFrom)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word32_46fromEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word32_46toEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word32_46enumFromThenTo)
, bytes2word(0,0,0,0)
, useLabel(CT_v2707)
,};
Node FN_Prelude_46Read_46NHC_46FFI_46Word32[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v2707: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46NHC_46FFI_46Word32[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46NHC_46FFI_46Word32))
, useLabel(F0_Prelude_46Read_46NHC_46FFI_46Word32_46readsPrec)
, useLabel(CF_Prelude_46Read_46NHC_46FFI_46Word32_46readList)
, bytes2word(0,0,0,0)
, useLabel(CT_v2708)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word32[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v2708: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46NHC_46FFI_46Word32[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word32))
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Word32_46showsPrec)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Word32_46showsType)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Word32_46showList)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Word32_46show)
, bytes2word(0,0,0,0)
, useLabel(CT_v2709)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Word64[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v2709: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46NHC_46FFI_46Word64[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Word64))
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46Word64_46_47_61)
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46Word64_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v2710)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Word64[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v2710: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46NHC_46FFI_46Word64[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Word64))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Word64)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word64_46_60)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word64_46_60_61)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word64_46_62_61)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word64_46_62)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word64_46compare)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word64_46min)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Word64_46max)
, bytes2word(0,0,0,0)
, useLabel(CT_v2711)
,};
Node FN_Prelude_46Num_46NHC_46FFI_46Word64[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
,	/* CT_v2711: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_Prelude_46Num_46NHC_46FFI_46Word64[] = {
  VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46Word64))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Word64)
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Word64)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word64_46_42)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word64_46_43)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word64_46_45)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word64_46negate)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word64_46signum)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word64_46fromInteger)
, useLabel(F0_Prelude_46Num_46NHC_46FFI_46Word64_46abs)
, bytes2word(0,0,0,0)
, useLabel(CT_v2712)
,};
Node FN_Prelude_46Bounded_46NHC_46FFI_46Word64[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v2712: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Bounded_46NHC_46FFI_46Word64[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46NHC_46FFI_46Word64))
, useLabel(CF_Prelude_46Bounded_46NHC_46FFI_46Word64_46minBound)
, useLabel(CF_Prelude_46Bounded_46NHC_46FFI_46Word64_46maxBound)
, bytes2word(0,0,0,0)
, useLabel(CT_v2713)
,};
Node FN_Prelude_46Real_46NHC_46FFI_46Word64[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
,	/* CT_v2713: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Prelude_46Real_46NHC_46FFI_46Word64[] = {
  VAPTAG(useLabel(FN_Prelude_46Real_46NHC_46FFI_46Word64))
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46Word64)
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word64)
, useLabel(F0_Prelude_46Real_46NHC_46FFI_46Word64_46toRational)
, bytes2word(0,0,0,0)
, useLabel(CT_v2714)
,};
Node FN_Prelude_46Integral_46NHC_46FFI_46Word64[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
,	/* CT_v2714: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_Prelude_46Integral_46NHC_46FFI_46Word64[] = {
  VAPTAG(useLabel(FN_Prelude_46Integral_46NHC_46FFI_46Word64))
, useLabel(CF_Prelude_46Real_46NHC_46FFI_46Word64)
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Word64)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word64_46divMod)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word64_46mod)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word64_46quotRem)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word64_46rem)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word64_46toInteger)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word64_46quot)
, useLabel(F0_Prelude_46Integral_46NHC_46FFI_46Word64_46div)
, bytes2word(0,0,0,0)
, useLabel(CT_v2715)
,};
Node FN_Ix_46Ix_46NHC_46FFI_46Word64[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,5,0)
,	/* CT_v2715: (byte 0) */
  HW(5,0)
, 0
,};
Node CF_Ix_46Ix_46NHC_46FFI_46Word64[] = {
  VAPTAG(useLabel(FN_Ix_46Ix_46NHC_46FFI_46Word64))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Word64)
, useLabel(F0_Ix_46Ix_46NHC_46FFI_46Word64_46inRange)
, useLabel(F0_Ix_46Ix_46NHC_46FFI_46Word64_46range)
, useLabel(F0_Ix_46Ix_46NHC_46FFI_46Word64_46rangeSize)
, useLabel(F0_Ix_46Ix_46NHC_46FFI_46Word64_46index)
, bytes2word(0,0,0,0)
, useLabel(CT_v2716)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Word64[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v2716: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Enum_46NHC_46FFI_46Word64[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Word64))
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word64_46succ)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word64_46pred)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFrom)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word64_46fromEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word64_46toEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Word64_46enumFromThenTo)
, bytes2word(0,0,0,0)
, useLabel(CT_v2717)
,};
Node FN_Prelude_46Read_46NHC_46FFI_46Word64[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v2717: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46NHC_46FFI_46Word64[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46NHC_46FFI_46Word64))
, useLabel(F0_Prelude_46Read_46NHC_46FFI_46Word64_46readsPrec)
, useLabel(CF_Prelude_46Read_46NHC_46FFI_46Word64_46readList)
, bytes2word(0,0,0,0)
, useLabel(CT_v2718)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Word64[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v2718: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46NHC_46FFI_46Word64[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Word64))
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Word64_46showsPrec)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Word64_46showsType)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Word64_46showList)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Word64_46show)
,	/* ST_v2361: (byte 0) */
 	/* ST_v2394: (byte 3) */
  bytes2word(48,120,0,73)
, bytes2word(120,46,105,110)
, bytes2word(100,101,120,58)
, bytes2word(32,73,110,100)
, bytes2word(101,120,32,111)
, bytes2word(117,116,32,111)
, bytes2word(102,32,114,97)
, bytes2word(110,103,101,46)
,	/* ST_v2631: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
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
, bytes2word(50,49,58,49)
, bytes2word(54,52,53,45)
, bytes2word(49,50,49,58)
, bytes2word(49,55,52,49)
,	/* ST_v2552: (byte 2) */
  bytes2word(46,0,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,58,32,80)
, bytes2word(97,116,116,101)
, bytes2word(114,110,32,109)
, bytes2word(97,116,99,104)
, bytes2word(32,102,97,105)
, bytes2word(108,117,114,101)
, bytes2word(32,105,110,32)
, bytes2word(102,117,110,99)
, bytes2word(116,105,111,110)
, bytes2word(32,97,116,32)
, bytes2word(49,50,50,58)
, bytes2word(49,55,49,52)
, bytes2word(45,49,50,50)
, bytes2word(58,49,56,49)
,	/* ST_v2473: (byte 3) */
  bytes2word(48,46,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,58,32)
, bytes2word(80,97,116,116)
, bytes2word(101,114,110,32)
, bytes2word(109,97,116,99)
, bytes2word(104,32,102,97)
, bytes2word(105,108,117,114)
, bytes2word(101,32,105,110)
, bytes2word(32,102,117,110)
, bytes2word(99,116,105,111)
, bytes2word(110,32,97,116)
, bytes2word(32,49,50,51)
, bytes2word(58,49,55,49)
, bytes2word(57,45,49,50)
, bytes2word(51,58,49,56)
,	/* ST_v2392: (byte 4) */
  bytes2word(49,53,46,0)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,49,50)
, bytes2word(52,58,49,55)
, bytes2word(50,57,45,49)
, bytes2word(50,52,58,49)
, bytes2word(56,50,53,46)
,	/* ST_v2420: (byte 1) */
  bytes2word(0,110,101,103)
, bytes2word(97,116,101,58)
, bytes2word(32,110,111,116)
, bytes2word(32,112,101,114)
, bytes2word(109,105,116,116)
, bytes2word(101,100,32,111)
, bytes2word(110,32,87,111)
, bytes2word(114,100,32,118)
, bytes2word(97,108,117,101)
, bytes2word(115,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primFromEnumWord64" NHC.FFI.primFromEnumWord64 1 :: FFI.Word64 -> Prelude.Int */
extern HsInt primFromEnumWord64(HsWord64);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primFromEnumWord64 = {"NHC.FFI","NHC.FFI.primFromEnumWord64","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46FFI_46primFromEnumWord64) {
  NodePtr nodeptr;
  HsInt result;
  HsWord64 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord64)nhc_get_64bit_value(nodeptr);

  result = primFromEnumWord64(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primFromEnumWord64);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primToEnumWord64" NHC.FFI.primToEnumWord64 1 :: Prelude.Int -> FFI.Word64 */
extern HsWord64 primToEnumWord64(HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primToEnumWord64 = {"NHC.FFI","NHC.FFI.primToEnumWord64","FFI.Word64"};
#endif
C_HEADER(FR_NHC_46FFI_46primToEnumWord64) {
  NodePtr nodeptr;
  HsWord64 result;
  HsInt arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);

  result = primToEnumWord64(arg1);

  nodeptr = nhc_mkWord64(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primToEnumWord64);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primWord64ToInteger" NHC.FFI.primWord64ToInteger 1 :: FFI.Word64 -> Prelude.Integer */
extern Node* primWord64ToInteger(HsWord64);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primWord64ToInteger = {"NHC.FFI","NHC.FFI.primWord64ToInteger","Prelude.Integer"};
#endif
C_HEADER(FR_NHC_46FFI_46primWord64ToInteger) {
  NodePtr nodeptr;
  Node* result;
  HsWord64 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord64)nhc_get_64bit_value(nodeptr);

  result = primWord64ToInteger(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primWord64ToInteger);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primRemWord64" NHC.FFI.primRemWord64 2 :: FFI.Word64 -> FFI.Word64 -> FFI.Word64 */
extern HsWord64 primRemWord64(HsWord64,HsWord64);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primRemWord64 = {"NHC.FFI","NHC.FFI.primRemWord64","FFI.Word64"};
#endif
C_HEADER(FR_NHC_46FFI_46primRemWord64) {
  NodePtr nodeptr;
  HsWord64 result;
  HsWord64 arg1;
  HsWord64 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord64)nhc_get_64bit_value(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord64)nhc_get_64bit_value(nodeptr);

  result = primRemWord64(arg1,arg2);

  nodeptr = nhc_mkWord64(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primRemWord64);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primQuotWord64" NHC.FFI.primQuotWord64 2 :: FFI.Word64 -> FFI.Word64 -> FFI.Word64 */
extern HsWord64 primQuotWord64(HsWord64,HsWord64);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primQuotWord64 = {"NHC.FFI","NHC.FFI.primQuotWord64","FFI.Word64"};
#endif
C_HEADER(FR_NHC_46FFI_46primQuotWord64) {
  NodePtr nodeptr;
  HsWord64 result;
  HsWord64 arg1;
  HsWord64 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord64)nhc_get_64bit_value(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord64)nhc_get_64bit_value(nodeptr);

  result = primQuotWord64(arg1,arg2);

  nodeptr = nhc_mkWord64(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primQuotWord64);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primWord64FromInteger" NHC.FFI.primWord64FromInteger 1 :: Prelude.Integer -> FFI.Word64 */
extern HsWord64 primWord64FromInteger(Node*);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primWord64FromInteger = {"NHC.FFI","NHC.FFI.primWord64FromInteger","FFI.Word64"};
#endif
C_HEADER(FR_NHC_46FFI_46primWord64FromInteger) {
  NodePtr nodeptr;
  HsWord64 result;
  Node* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (Node*)nodeptr;

  result = primWord64FromInteger(arg1);

  nodeptr = nhc_mkWord64(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primWord64FromInteger);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primSignumWord64" NHC.FFI.primSignumWord64 1 :: FFI.Word64 -> FFI.Word64 */
extern HsWord64 primSignumWord64(HsWord64);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primSignumWord64 = {"NHC.FFI","NHC.FFI.primSignumWord64","FFI.Word64"};
#endif
C_HEADER(FR_NHC_46FFI_46primSignumWord64) {
  NodePtr nodeptr;
  HsWord64 result;
  HsWord64 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord64)nhc_get_64bit_value(nodeptr);

  result = primSignumWord64(arg1);

  nodeptr = nhc_mkWord64(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primSignumWord64);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primMulWord64" NHC.FFI.primMulWord64 2 :: FFI.Word64 -> FFI.Word64 -> FFI.Word64 */
extern HsWord64 primMulWord64(HsWord64,HsWord64);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primMulWord64 = {"NHC.FFI","NHC.FFI.primMulWord64","FFI.Word64"};
#endif
C_HEADER(FR_NHC_46FFI_46primMulWord64) {
  NodePtr nodeptr;
  HsWord64 result;
  HsWord64 arg1;
  HsWord64 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord64)nhc_get_64bit_value(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord64)nhc_get_64bit_value(nodeptr);

  result = primMulWord64(arg1,arg2);

  nodeptr = nhc_mkWord64(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primMulWord64);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primSubWord64" NHC.FFI.primSubWord64 2 :: FFI.Word64 -> FFI.Word64 -> FFI.Word64 */
extern HsWord64 primSubWord64(HsWord64,HsWord64);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primSubWord64 = {"NHC.FFI","NHC.FFI.primSubWord64","FFI.Word64"};
#endif
C_HEADER(FR_NHC_46FFI_46primSubWord64) {
  NodePtr nodeptr;
  HsWord64 result;
  HsWord64 arg1;
  HsWord64 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord64)nhc_get_64bit_value(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord64)nhc_get_64bit_value(nodeptr);

  result = primSubWord64(arg1,arg2);

  nodeptr = nhc_mkWord64(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primSubWord64);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primAddWord64" NHC.FFI.primAddWord64 2 :: FFI.Word64 -> FFI.Word64 -> FFI.Word64 */
extern HsWord64 primAddWord64(HsWord64,HsWord64);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primAddWord64 = {"NHC.FFI","NHC.FFI.primAddWord64","FFI.Word64"};
#endif
C_HEADER(FR_NHC_46FFI_46primAddWord64) {
  NodePtr nodeptr;
  HsWord64 result;
  HsWord64 arg1;
  HsWord64 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord64)nhc_get_64bit_value(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord64)nhc_get_64bit_value(nodeptr);

  result = primAddWord64(arg1,arg2);

  nodeptr = nhc_mkWord64(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primAddWord64);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primGeWord64" NHC.FFI.primGeWord64 2 :: FFI.Word64 -> FFI.Word64 -> Prelude.Bool */
extern HsBool primGeWord64(HsWord64,HsWord64);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primGeWord64 = {"NHC.FFI","NHC.FFI.primGeWord64","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primGeWord64) {
  NodePtr nodeptr;
  HsBool result;
  HsWord64 arg1;
  HsWord64 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord64)nhc_get_64bit_value(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord64)nhc_get_64bit_value(nodeptr);

  result = primGeWord64(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primGeWord64);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primGtWord64" NHC.FFI.primGtWord64 2 :: FFI.Word64 -> FFI.Word64 -> Prelude.Bool */
extern HsBool primGtWord64(HsWord64,HsWord64);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primGtWord64 = {"NHC.FFI","NHC.FFI.primGtWord64","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primGtWord64) {
  NodePtr nodeptr;
  HsBool result;
  HsWord64 arg1;
  HsWord64 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord64)nhc_get_64bit_value(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord64)nhc_get_64bit_value(nodeptr);

  result = primGtWord64(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primGtWord64);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primLeWord64" NHC.FFI.primLeWord64 2 :: FFI.Word64 -> FFI.Word64 -> Prelude.Bool */
extern HsBool primLeWord64(HsWord64,HsWord64);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primLeWord64 = {"NHC.FFI","NHC.FFI.primLeWord64","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primLeWord64) {
  NodePtr nodeptr;
  HsBool result;
  HsWord64 arg1;
  HsWord64 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord64)nhc_get_64bit_value(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord64)nhc_get_64bit_value(nodeptr);

  result = primLeWord64(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primLeWord64);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primLtWord64" NHC.FFI.primLtWord64 2 :: FFI.Word64 -> FFI.Word64 -> Prelude.Bool */
extern HsBool primLtWord64(HsWord64,HsWord64);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primLtWord64 = {"NHC.FFI","NHC.FFI.primLtWord64","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primLtWord64) {
  NodePtr nodeptr;
  HsBool result;
  HsWord64 arg1;
  HsWord64 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord64)nhc_get_64bit_value(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord64)nhc_get_64bit_value(nodeptr);

  result = primLtWord64(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primLtWord64);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primEqWord64" NHC.FFI.primEqWord64 2 :: FFI.Word64 -> FFI.Word64 -> Prelude.Bool */
extern HsBool primEqWord64(HsWord64,HsWord64);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primEqWord64 = {"NHC.FFI","NHC.FFI.primEqWord64","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primEqWord64) {
  NodePtr nodeptr;
  HsBool result;
  HsWord64 arg1;
  HsWord64 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord64)nhc_get_64bit_value(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord64)nhc_get_64bit_value(nodeptr);

  result = primEqWord64(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primEqWord64);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primFromEnumWord32" NHC.FFI.primFromEnumWord32 1 :: FFI.Word32 -> Prelude.Int */
extern HsInt primFromEnumWord32(HsWord32);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primFromEnumWord32 = {"NHC.FFI","NHC.FFI.primFromEnumWord32","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46FFI_46primFromEnumWord32) {
  NodePtr nodeptr;
  HsInt result;
  HsWord32 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord32)GET_32BIT_VALUE(nodeptr);

  result = primFromEnumWord32(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primFromEnumWord32);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primToEnumWord32" NHC.FFI.primToEnumWord32 1 :: Prelude.Int -> FFI.Word32 */
extern HsWord32 primToEnumWord32(HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primToEnumWord32 = {"NHC.FFI","NHC.FFI.primToEnumWord32","FFI.Word32"};
#endif
C_HEADER(FR_NHC_46FFI_46primToEnumWord32) {
  NodePtr nodeptr;
  HsWord32 result;
  HsInt arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);

  result = primToEnumWord32(arg1);

  nodeptr = nhc_mkWord32(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primToEnumWord32);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primWord32ToInteger" NHC.FFI.primWord32ToInteger 1 :: FFI.Word32 -> Prelude.Integer */
extern Node* primWord32ToInteger(HsWord32);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primWord32ToInteger = {"NHC.FFI","NHC.FFI.primWord32ToInteger","Prelude.Integer"};
#endif
C_HEADER(FR_NHC_46FFI_46primWord32ToInteger) {
  NodePtr nodeptr;
  Node* result;
  HsWord32 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord32)GET_32BIT_VALUE(nodeptr);

  result = primWord32ToInteger(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primWord32ToInteger);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primRemWord32" NHC.FFI.primRemWord32 2 :: FFI.Word32 -> FFI.Word32 -> FFI.Word32 */
extern HsWord32 primRemWord32(HsWord32,HsWord32);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primRemWord32 = {"NHC.FFI","NHC.FFI.primRemWord32","FFI.Word32"};
#endif
C_HEADER(FR_NHC_46FFI_46primRemWord32) {
  NodePtr nodeptr;
  HsWord32 result;
  HsWord32 arg1;
  HsWord32 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord32)GET_32BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord32)GET_32BIT_VALUE(nodeptr);

  result = primRemWord32(arg1,arg2);

  nodeptr = nhc_mkWord32(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primRemWord32);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primQuotWord32" NHC.FFI.primQuotWord32 2 :: FFI.Word32 -> FFI.Word32 -> FFI.Word32 */
extern HsWord32 primQuotWord32(HsWord32,HsWord32);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primQuotWord32 = {"NHC.FFI","NHC.FFI.primQuotWord32","FFI.Word32"};
#endif
C_HEADER(FR_NHC_46FFI_46primQuotWord32) {
  NodePtr nodeptr;
  HsWord32 result;
  HsWord32 arg1;
  HsWord32 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord32)GET_32BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord32)GET_32BIT_VALUE(nodeptr);

  result = primQuotWord32(arg1,arg2);

  nodeptr = nhc_mkWord32(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primQuotWord32);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primWord32FromInteger" NHC.FFI.primWord32FromInteger 1 :: Prelude.Integer -> FFI.Word32 */
extern HsWord32 primWord32FromInteger(Node*);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primWord32FromInteger = {"NHC.FFI","NHC.FFI.primWord32FromInteger","FFI.Word32"};
#endif
C_HEADER(FR_NHC_46FFI_46primWord32FromInteger) {
  NodePtr nodeptr;
  HsWord32 result;
  Node* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (Node*)nodeptr;

  result = primWord32FromInteger(arg1);

  nodeptr = nhc_mkWord32(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primWord32FromInteger);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primSignumWord32" NHC.FFI.primSignumWord32 1 :: FFI.Word32 -> FFI.Word32 */
extern HsWord32 primSignumWord32(HsWord32);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primSignumWord32 = {"NHC.FFI","NHC.FFI.primSignumWord32","FFI.Word32"};
#endif
C_HEADER(FR_NHC_46FFI_46primSignumWord32) {
  NodePtr nodeptr;
  HsWord32 result;
  HsWord32 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord32)GET_32BIT_VALUE(nodeptr);

  result = primSignumWord32(arg1);

  nodeptr = nhc_mkWord32(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primSignumWord32);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primMulWord32" NHC.FFI.primMulWord32 2 :: FFI.Word32 -> FFI.Word32 -> FFI.Word32 */
extern HsWord32 primMulWord32(HsWord32,HsWord32);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primMulWord32 = {"NHC.FFI","NHC.FFI.primMulWord32","FFI.Word32"};
#endif
C_HEADER(FR_NHC_46FFI_46primMulWord32) {
  NodePtr nodeptr;
  HsWord32 result;
  HsWord32 arg1;
  HsWord32 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord32)GET_32BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord32)GET_32BIT_VALUE(nodeptr);

  result = primMulWord32(arg1,arg2);

  nodeptr = nhc_mkWord32(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primMulWord32);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primSubWord32" NHC.FFI.primSubWord32 2 :: FFI.Word32 -> FFI.Word32 -> FFI.Word32 */
extern HsWord32 primSubWord32(HsWord32,HsWord32);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primSubWord32 = {"NHC.FFI","NHC.FFI.primSubWord32","FFI.Word32"};
#endif
C_HEADER(FR_NHC_46FFI_46primSubWord32) {
  NodePtr nodeptr;
  HsWord32 result;
  HsWord32 arg1;
  HsWord32 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord32)GET_32BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord32)GET_32BIT_VALUE(nodeptr);

  result = primSubWord32(arg1,arg2);

  nodeptr = nhc_mkWord32(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primSubWord32);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primAddWord32" NHC.FFI.primAddWord32 2 :: FFI.Word32 -> FFI.Word32 -> FFI.Word32 */
extern HsWord32 primAddWord32(HsWord32,HsWord32);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primAddWord32 = {"NHC.FFI","NHC.FFI.primAddWord32","FFI.Word32"};
#endif
C_HEADER(FR_NHC_46FFI_46primAddWord32) {
  NodePtr nodeptr;
  HsWord32 result;
  HsWord32 arg1;
  HsWord32 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord32)GET_32BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord32)GET_32BIT_VALUE(nodeptr);

  result = primAddWord32(arg1,arg2);

  nodeptr = nhc_mkWord32(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primAddWord32);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primGeWord32" NHC.FFI.primGeWord32 2 :: FFI.Word32 -> FFI.Word32 -> Prelude.Bool */
extern HsBool primGeWord32(HsWord32,HsWord32);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primGeWord32 = {"NHC.FFI","NHC.FFI.primGeWord32","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primGeWord32) {
  NodePtr nodeptr;
  HsBool result;
  HsWord32 arg1;
  HsWord32 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord32)GET_32BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord32)GET_32BIT_VALUE(nodeptr);

  result = primGeWord32(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primGeWord32);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primGtWord32" NHC.FFI.primGtWord32 2 :: FFI.Word32 -> FFI.Word32 -> Prelude.Bool */
extern HsBool primGtWord32(HsWord32,HsWord32);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primGtWord32 = {"NHC.FFI","NHC.FFI.primGtWord32","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primGtWord32) {
  NodePtr nodeptr;
  HsBool result;
  HsWord32 arg1;
  HsWord32 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord32)GET_32BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord32)GET_32BIT_VALUE(nodeptr);

  result = primGtWord32(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primGtWord32);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primLeWord32" NHC.FFI.primLeWord32 2 :: FFI.Word32 -> FFI.Word32 -> Prelude.Bool */
extern HsBool primLeWord32(HsWord32,HsWord32);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primLeWord32 = {"NHC.FFI","NHC.FFI.primLeWord32","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primLeWord32) {
  NodePtr nodeptr;
  HsBool result;
  HsWord32 arg1;
  HsWord32 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord32)GET_32BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord32)GET_32BIT_VALUE(nodeptr);

  result = primLeWord32(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primLeWord32);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primLtWord32" NHC.FFI.primLtWord32 2 :: FFI.Word32 -> FFI.Word32 -> Prelude.Bool */
extern HsBool primLtWord32(HsWord32,HsWord32);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primLtWord32 = {"NHC.FFI","NHC.FFI.primLtWord32","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primLtWord32) {
  NodePtr nodeptr;
  HsBool result;
  HsWord32 arg1;
  HsWord32 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord32)GET_32BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord32)GET_32BIT_VALUE(nodeptr);

  result = primLtWord32(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primLtWord32);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primEqWord32" NHC.FFI.primEqWord32 2 :: FFI.Word32 -> FFI.Word32 -> Prelude.Bool */
extern HsBool primEqWord32(HsWord32,HsWord32);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primEqWord32 = {"NHC.FFI","NHC.FFI.primEqWord32","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primEqWord32) {
  NodePtr nodeptr;
  HsBool result;
  HsWord32 arg1;
  HsWord32 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord32)GET_32BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord32)GET_32BIT_VALUE(nodeptr);

  result = primEqWord32(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primEqWord32);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primFromEnumWord16" NHC.FFI.primFromEnumWord16 1 :: FFI.Word16 -> Prelude.Int */
extern HsInt primFromEnumWord16(HsWord16);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primFromEnumWord16 = {"NHC.FFI","NHC.FFI.primFromEnumWord16","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46FFI_46primFromEnumWord16) {
  NodePtr nodeptr;
  HsInt result;
  HsWord16 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = primFromEnumWord16(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primFromEnumWord16);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primToEnumWord16" NHC.FFI.primToEnumWord16 1 :: Prelude.Int -> FFI.Word16 */
extern HsWord16 primToEnumWord16(HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primToEnumWord16 = {"NHC.FFI","NHC.FFI.primToEnumWord16","FFI.Word16"};
#endif
C_HEADER(FR_NHC_46FFI_46primToEnumWord16) {
  NodePtr nodeptr;
  HsWord16 result;
  HsInt arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);

  result = primToEnumWord16(arg1);

  nodeptr = nhc_mkWord16(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primToEnumWord16);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primWord16ToInteger" NHC.FFI.primWord16ToInteger 1 :: FFI.Word16 -> Prelude.Integer */
extern Node* primWord16ToInteger(HsWord16);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primWord16ToInteger = {"NHC.FFI","NHC.FFI.primWord16ToInteger","Prelude.Integer"};
#endif
C_HEADER(FR_NHC_46FFI_46primWord16ToInteger) {
  NodePtr nodeptr;
  Node* result;
  HsWord16 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = primWord16ToInteger(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primWord16ToInteger);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primRemWord16" NHC.FFI.primRemWord16 2 :: FFI.Word16 -> FFI.Word16 -> FFI.Word16 */
extern HsWord16 primRemWord16(HsWord16,HsWord16);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primRemWord16 = {"NHC.FFI","NHC.FFI.primRemWord16","FFI.Word16"};
#endif
C_HEADER(FR_NHC_46FFI_46primRemWord16) {
  NodePtr nodeptr;
  HsWord16 result;
  HsWord16 arg1;
  HsWord16 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = primRemWord16(arg1,arg2);

  nodeptr = nhc_mkWord16(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primRemWord16);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primQuotWord16" NHC.FFI.primQuotWord16 2 :: FFI.Word16 -> FFI.Word16 -> FFI.Word16 */
extern HsWord16 primQuotWord16(HsWord16,HsWord16);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primQuotWord16 = {"NHC.FFI","NHC.FFI.primQuotWord16","FFI.Word16"};
#endif
C_HEADER(FR_NHC_46FFI_46primQuotWord16) {
  NodePtr nodeptr;
  HsWord16 result;
  HsWord16 arg1;
  HsWord16 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = primQuotWord16(arg1,arg2);

  nodeptr = nhc_mkWord16(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primQuotWord16);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primWord16FromInteger" NHC.FFI.primWord16FromInteger 1 :: Prelude.Integer -> FFI.Word16 */
extern HsWord16 primWord16FromInteger(Node*);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primWord16FromInteger = {"NHC.FFI","NHC.FFI.primWord16FromInteger","FFI.Word16"};
#endif
C_HEADER(FR_NHC_46FFI_46primWord16FromInteger) {
  NodePtr nodeptr;
  HsWord16 result;
  Node* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (Node*)nodeptr;

  result = primWord16FromInteger(arg1);

  nodeptr = nhc_mkWord16(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primWord16FromInteger);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primSignumWord16" NHC.FFI.primSignumWord16 1 :: FFI.Word16 -> FFI.Word16 */
extern HsWord16 primSignumWord16(HsWord16);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primSignumWord16 = {"NHC.FFI","NHC.FFI.primSignumWord16","FFI.Word16"};
#endif
C_HEADER(FR_NHC_46FFI_46primSignumWord16) {
  NodePtr nodeptr;
  HsWord16 result;
  HsWord16 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = primSignumWord16(arg1);

  nodeptr = nhc_mkWord16(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primSignumWord16);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primMulWord16" NHC.FFI.primMulWord16 2 :: FFI.Word16 -> FFI.Word16 -> FFI.Word16 */
extern HsWord16 primMulWord16(HsWord16,HsWord16);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primMulWord16 = {"NHC.FFI","NHC.FFI.primMulWord16","FFI.Word16"};
#endif
C_HEADER(FR_NHC_46FFI_46primMulWord16) {
  NodePtr nodeptr;
  HsWord16 result;
  HsWord16 arg1;
  HsWord16 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = primMulWord16(arg1,arg2);

  nodeptr = nhc_mkWord16(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primMulWord16);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primSubWord16" NHC.FFI.primSubWord16 2 :: FFI.Word16 -> FFI.Word16 -> FFI.Word16 */
extern HsWord16 primSubWord16(HsWord16,HsWord16);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primSubWord16 = {"NHC.FFI","NHC.FFI.primSubWord16","FFI.Word16"};
#endif
C_HEADER(FR_NHC_46FFI_46primSubWord16) {
  NodePtr nodeptr;
  HsWord16 result;
  HsWord16 arg1;
  HsWord16 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = primSubWord16(arg1,arg2);

  nodeptr = nhc_mkWord16(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primSubWord16);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primAddWord16" NHC.FFI.primAddWord16 2 :: FFI.Word16 -> FFI.Word16 -> FFI.Word16 */
extern HsWord16 primAddWord16(HsWord16,HsWord16);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primAddWord16 = {"NHC.FFI","NHC.FFI.primAddWord16","FFI.Word16"};
#endif
C_HEADER(FR_NHC_46FFI_46primAddWord16) {
  NodePtr nodeptr;
  HsWord16 result;
  HsWord16 arg1;
  HsWord16 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = primAddWord16(arg1,arg2);

  nodeptr = nhc_mkWord16(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primAddWord16);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primGeWord16" NHC.FFI.primGeWord16 2 :: FFI.Word16 -> FFI.Word16 -> Prelude.Bool */
extern HsBool primGeWord16(HsWord16,HsWord16);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primGeWord16 = {"NHC.FFI","NHC.FFI.primGeWord16","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primGeWord16) {
  NodePtr nodeptr;
  HsBool result;
  HsWord16 arg1;
  HsWord16 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = primGeWord16(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primGeWord16);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primGtWord16" NHC.FFI.primGtWord16 2 :: FFI.Word16 -> FFI.Word16 -> Prelude.Bool */
extern HsBool primGtWord16(HsWord16,HsWord16);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primGtWord16 = {"NHC.FFI","NHC.FFI.primGtWord16","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primGtWord16) {
  NodePtr nodeptr;
  HsBool result;
  HsWord16 arg1;
  HsWord16 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = primGtWord16(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primGtWord16);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primLeWord16" NHC.FFI.primLeWord16 2 :: FFI.Word16 -> FFI.Word16 -> Prelude.Bool */
extern HsBool primLeWord16(HsWord16,HsWord16);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primLeWord16 = {"NHC.FFI","NHC.FFI.primLeWord16","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primLeWord16) {
  NodePtr nodeptr;
  HsBool result;
  HsWord16 arg1;
  HsWord16 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = primLeWord16(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primLeWord16);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primLtWord16" NHC.FFI.primLtWord16 2 :: FFI.Word16 -> FFI.Word16 -> Prelude.Bool */
extern HsBool primLtWord16(HsWord16,HsWord16);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primLtWord16 = {"NHC.FFI","NHC.FFI.primLtWord16","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primLtWord16) {
  NodePtr nodeptr;
  HsBool result;
  HsWord16 arg1;
  HsWord16 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = primLtWord16(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primLtWord16);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primEqWord16" NHC.FFI.primEqWord16 2 :: FFI.Word16 -> FFI.Word16 -> Prelude.Bool */
extern HsBool primEqWord16(HsWord16,HsWord16);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primEqWord16 = {"NHC.FFI","NHC.FFI.primEqWord16","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primEqWord16) {
  NodePtr nodeptr;
  HsBool result;
  HsWord16 arg1;
  HsWord16 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord16)GET_16BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord16)GET_16BIT_VALUE(nodeptr);

  result = primEqWord16(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primEqWord16);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primFromEnumWord8" NHC.FFI.primFromEnumWord8 1 :: FFI.Word8 -> Prelude.Int */
extern HsInt primFromEnumWord8(HsWord8);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primFromEnumWord8 = {"NHC.FFI","NHC.FFI.primFromEnumWord8","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46FFI_46primFromEnumWord8) {
  NodePtr nodeptr;
  HsInt result;
  HsWord8 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord8)GET_8BIT_VALUE(nodeptr);

  result = primFromEnumWord8(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primFromEnumWord8);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primToEnumWord8" NHC.FFI.primToEnumWord8 1 :: Prelude.Int -> FFI.Word8 */
extern HsWord8 primToEnumWord8(HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primToEnumWord8 = {"NHC.FFI","NHC.FFI.primToEnumWord8","FFI.Word8"};
#endif
C_HEADER(FR_NHC_46FFI_46primToEnumWord8) {
  NodePtr nodeptr;
  HsWord8 result;
  HsInt arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);

  result = primToEnumWord8(arg1);

  nodeptr = nhc_mkWord8(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primToEnumWord8);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primWord8ToInteger" NHC.FFI.primWord8ToInteger 1 :: FFI.Word8 -> Prelude.Integer */
extern Node* primWord8ToInteger(HsWord8);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primWord8ToInteger = {"NHC.FFI","NHC.FFI.primWord8ToInteger","Prelude.Integer"};
#endif
C_HEADER(FR_NHC_46FFI_46primWord8ToInteger) {
  NodePtr nodeptr;
  Node* result;
  HsWord8 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord8)GET_8BIT_VALUE(nodeptr);

  result = primWord8ToInteger(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primWord8ToInteger);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primRemWord8" NHC.FFI.primRemWord8 2 :: FFI.Word8 -> FFI.Word8 -> FFI.Word8 */
extern HsWord8 primRemWord8(HsWord8,HsWord8);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primRemWord8 = {"NHC.FFI","NHC.FFI.primRemWord8","FFI.Word8"};
#endif
C_HEADER(FR_NHC_46FFI_46primRemWord8) {
  NodePtr nodeptr;
  HsWord8 result;
  HsWord8 arg1;
  HsWord8 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord8)GET_8BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord8)GET_8BIT_VALUE(nodeptr);

  result = primRemWord8(arg1,arg2);

  nodeptr = nhc_mkWord8(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primRemWord8);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primQuotWord8" NHC.FFI.primQuotWord8 2 :: FFI.Word8 -> FFI.Word8 -> FFI.Word8 */
extern HsWord8 primQuotWord8(HsWord8,HsWord8);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primQuotWord8 = {"NHC.FFI","NHC.FFI.primQuotWord8","FFI.Word8"};
#endif
C_HEADER(FR_NHC_46FFI_46primQuotWord8) {
  NodePtr nodeptr;
  HsWord8 result;
  HsWord8 arg1;
  HsWord8 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord8)GET_8BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord8)GET_8BIT_VALUE(nodeptr);

  result = primQuotWord8(arg1,arg2);

  nodeptr = nhc_mkWord8(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primQuotWord8);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primWord8FromInteger" NHC.FFI.primWord8FromInteger 1 :: Prelude.Integer -> FFI.Word8 */
extern HsWord8 primWord8FromInteger(Node*);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primWord8FromInteger = {"NHC.FFI","NHC.FFI.primWord8FromInteger","FFI.Word8"};
#endif
C_HEADER(FR_NHC_46FFI_46primWord8FromInteger) {
  NodePtr nodeptr;
  HsWord8 result;
  Node* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (Node*)nodeptr;

  result = primWord8FromInteger(arg1);

  nodeptr = nhc_mkWord8(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primWord8FromInteger);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primSignumWord8" NHC.FFI.primSignumWord8 1 :: FFI.Word8 -> FFI.Word8 */
extern HsWord8 primSignumWord8(HsWord8);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primSignumWord8 = {"NHC.FFI","NHC.FFI.primSignumWord8","FFI.Word8"};
#endif
C_HEADER(FR_NHC_46FFI_46primSignumWord8) {
  NodePtr nodeptr;
  HsWord8 result;
  HsWord8 arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord8)GET_8BIT_VALUE(nodeptr);

  result = primSignumWord8(arg1);

  nodeptr = nhc_mkWord8(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primSignumWord8);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primMulWord8" NHC.FFI.primMulWord8 2 :: FFI.Word8 -> FFI.Word8 -> FFI.Word8 */
extern HsWord8 primMulWord8(HsWord8,HsWord8);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primMulWord8 = {"NHC.FFI","NHC.FFI.primMulWord8","FFI.Word8"};
#endif
C_HEADER(FR_NHC_46FFI_46primMulWord8) {
  NodePtr nodeptr;
  HsWord8 result;
  HsWord8 arg1;
  HsWord8 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord8)GET_8BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord8)GET_8BIT_VALUE(nodeptr);

  result = primMulWord8(arg1,arg2);

  nodeptr = nhc_mkWord8(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primMulWord8);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primSubWord8" NHC.FFI.primSubWord8 2 :: FFI.Word8 -> FFI.Word8 -> FFI.Word8 */
extern HsWord8 primSubWord8(HsWord8,HsWord8);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primSubWord8 = {"NHC.FFI","NHC.FFI.primSubWord8","FFI.Word8"};
#endif
C_HEADER(FR_NHC_46FFI_46primSubWord8) {
  NodePtr nodeptr;
  HsWord8 result;
  HsWord8 arg1;
  HsWord8 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord8)GET_8BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord8)GET_8BIT_VALUE(nodeptr);

  result = primSubWord8(arg1,arg2);

  nodeptr = nhc_mkWord8(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primSubWord8);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primAddWord8" NHC.FFI.primAddWord8 2 :: FFI.Word8 -> FFI.Word8 -> FFI.Word8 */
extern HsWord8 primAddWord8(HsWord8,HsWord8);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primAddWord8 = {"NHC.FFI","NHC.FFI.primAddWord8","FFI.Word8"};
#endif
C_HEADER(FR_NHC_46FFI_46primAddWord8) {
  NodePtr nodeptr;
  HsWord8 result;
  HsWord8 arg1;
  HsWord8 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord8)GET_8BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord8)GET_8BIT_VALUE(nodeptr);

  result = primAddWord8(arg1,arg2);

  nodeptr = nhc_mkWord8(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primAddWord8);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primGeWord8" NHC.FFI.primGeWord8 2 :: FFI.Word8 -> FFI.Word8 -> Prelude.Bool */
extern HsBool primGeWord8(HsWord8,HsWord8);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primGeWord8 = {"NHC.FFI","NHC.FFI.primGeWord8","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primGeWord8) {
  NodePtr nodeptr;
  HsBool result;
  HsWord8 arg1;
  HsWord8 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord8)GET_8BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord8)GET_8BIT_VALUE(nodeptr);

  result = primGeWord8(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primGeWord8);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primGtWord8" NHC.FFI.primGtWord8 2 :: FFI.Word8 -> FFI.Word8 -> Prelude.Bool */
extern HsBool primGtWord8(HsWord8,HsWord8);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primGtWord8 = {"NHC.FFI","NHC.FFI.primGtWord8","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primGtWord8) {
  NodePtr nodeptr;
  HsBool result;
  HsWord8 arg1;
  HsWord8 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord8)GET_8BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord8)GET_8BIT_VALUE(nodeptr);

  result = primGtWord8(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primGtWord8);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primLeWord8" NHC.FFI.primLeWord8 2 :: FFI.Word8 -> FFI.Word8 -> Prelude.Bool */
extern HsBool primLeWord8(HsWord8,HsWord8);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primLeWord8 = {"NHC.FFI","NHC.FFI.primLeWord8","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primLeWord8) {
  NodePtr nodeptr;
  HsBool result;
  HsWord8 arg1;
  HsWord8 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord8)GET_8BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord8)GET_8BIT_VALUE(nodeptr);

  result = primLeWord8(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primLeWord8);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primLtWord8" NHC.FFI.primLtWord8 2 :: FFI.Word8 -> FFI.Word8 -> Prelude.Bool */
extern HsBool primLtWord8(HsWord8,HsWord8);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primLtWord8 = {"NHC.FFI","NHC.FFI.primLtWord8","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primLtWord8) {
  NodePtr nodeptr;
  HsBool result;
  HsWord8 arg1;
  HsWord8 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord8)GET_8BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord8)GET_8BIT_VALUE(nodeptr);

  result = primLtWord8(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primLtWord8);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primEqWord8" NHC.FFI.primEqWord8 2 :: FFI.Word8 -> FFI.Word8 -> Prelude.Bool */
extern HsBool primEqWord8(HsWord8,HsWord8);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primEqWord8 = {"NHC.FFI","NHC.FFI.primEqWord8","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46FFI_46primEqWord8) {
  NodePtr nodeptr;
  HsBool result;
  HsWord8 arg1;
  HsWord8 arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsWord8)GET_8BIT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsWord8)GET_8BIT_VALUE(nodeptr);

  result = primEqWord8(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primEqWord8);
  C_RETURN(nodeptr);
}
