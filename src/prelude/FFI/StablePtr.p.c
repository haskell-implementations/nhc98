#include "newmacros.h"
#include "runtime.h"

#define CT_v386	((void*)startLabel+32)
#define CT_v392	((void*)startLabel+184)
#define CT_v395	((void*)startLabel+256)
#define CT_v402	((void*)startLabel+424)
#define FN_LAMBDA382	((void*)startLabel+476)
#define CT_v407	((void*)startLabel+552)
#define F0_LAMBDA382	((void*)startLabel+560)
#define CT_v411	((void*)startLabel+648)
#define CT_v415	((void*)startLabel+740)
#define CT_v419	((void*)startLabel+832)
#define CT_v423	((void*)startLabel+936)
#define CT_v427	((void*)startLabel+1036)
#define CT_v431	((void*)startLabel+1140)
#define CT_v435	((void*)startLabel+1240)
#define FN_NHC_46FFI_46freeStablePtr_35	((void*)startLabel+1284)
#define CT_v438	((void*)startLabel+1308)
#define F0_NHC_46FFI_46freeStablePtr_35	((void*)startLabel+1316)
#define CT_v442	((void*)startLabel+1396)
#define FN_NHC_46FFI_46deRefStablePtr_35	((void*)startLabel+1440)
#define CT_v445	((void*)startLabel+1464)
#define F0_NHC_46FFI_46deRefStablePtr_35	((void*)startLabel+1472)
#define CT_v449	((void*)startLabel+1552)
#define FN_NHC_46FFI_46newStablePtr_35	((void*)startLabel+1596)
#define CT_v452	((void*)startLabel+1620)
#define F0_NHC_46FFI_46newStablePtr_35	((void*)startLabel+1628)
#define CT_v456	((void*)startLabel+1708)
#define CT_v460	((void*)startLabel+1836)
#define ST_v458	((void*)startLabel+1900)
#define ST_v409	((void*)startLabel+1936)
#define ST_v417	((void*)startLabel+1984)
#define ST_v397	((void*)startLabel+2028)
#define PP_LAMBDA382	((void*)startLabel+2068)
#define PC_LAMBDA382	((void*)startLabel+2068)
#define ST_v404	((void*)startLabel+2068)
#define ST_v425	((void*)startLabel+2120)
#define ST_v433	((void*)startLabel+2168)
#define ST_v388	((void*)startLabel+2216)
#define ST_v421	((void*)startLabel+2256)
#define ST_v429	((void*)startLabel+2304)
#define ST_v413	((void*)startLabel+2352)
#define ST_v394	((void*)startLabel+2396)
#define ST_v385	((void*)startLabel+2424)
#define ST_v447	((void*)startLabel+2452)
#define PP_NHC_46FFI_46deRefStablePtr_35	((void*)startLabel+2475)
#define PC_NHC_46FFI_46deRefStablePtr_35	((void*)startLabel+2475)
#define ST_v444	((void*)startLabel+2475)
#define ST_v440	((void*)startLabel+2500)
#define PP_NHC_46FFI_46freeStablePtr_35	((void*)startLabel+2522)
#define PC_NHC_46FFI_46freeStablePtr_35	((void*)startLabel+2522)
#define ST_v437	((void*)startLabel+2522)
#define ST_v454	((void*)startLabel+2548)
#define PP_NHC_46FFI_46newStablePtr_35	((void*)startLabel+2569)
#define PC_NHC_46FFI_46newStablePtr_35	((void*)startLabel+2569)
#define ST_v451	((void*)startLabel+2569)
#define PS_v455	((void*)startLabel+2592)
#define PS_v453	((void*)startLabel+2604)
#define PS_v448	((void*)startLabel+2616)
#define PS_v446	((void*)startLabel+2628)
#define PS_v441	((void*)startLabel+2640)
#define PS_v439	((void*)startLabel+2652)
#define PS_v384	((void*)startLabel+2664)
#define PS_v393	((void*)startLabel+2676)
#define PS_v414	((void*)startLabel+2688)
#define PS_v412	((void*)startLabel+2700)
#define PS_v410	((void*)startLabel+2712)
#define PS_v408	((void*)startLabel+2724)
#define PS_v398	((void*)startLabel+2736)
#define PS_v396	((void*)startLabel+2748)
#define PS_v401	((void*)startLabel+2760)
#define PS_v399	((void*)startLabel+2772)
#define PS_v400	((void*)startLabel+2784)
#define PS_v389	((void*)startLabel+2796)
#define PS_v390	((void*)startLabel+2808)
#define PS_v387	((void*)startLabel+2820)
#define PS_v391	((void*)startLabel+2832)
#define PS_v434	((void*)startLabel+2844)
#define PS_v432	((void*)startLabel+2856)
#define PS_v430	((void*)startLabel+2868)
#define PS_v428	((void*)startLabel+2880)
#define PS_v426	((void*)startLabel+2892)
#define PS_v424	((void*)startLabel+2904)
#define PS_v422	((void*)startLabel+2916)
#define PS_v420	((void*)startLabel+2928)
#define PS_v418	((void*)startLabel+2940)
#define PS_v416	((void*)startLabel+2952)
#define PS_v450	((void*)startLabel+2964)
#define PS_v443	((void*)startLabel+2976)
#define PS_v436	((void*)startLabel+2988)
#define PS_v457	((void*)startLabel+3000)
#define PS_v459	((void*)startLabel+3012)
#define PS_v405	((void*)startLabel+3024)
#define PS_v406	((void*)startLabel+3036)
#define PS_v403	((void*)startLabel+3048)
void FR_NHC_46FFI_46castStablePtrToPtr(void);
extern Node FN_NHC_46FFI_46castPtr[];
extern Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46poke[];
void FR_NHC_46FFI_46castPtrToStablePtr(void);
extern Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46peek[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46const[];
extern Node FN_NHC_46FFI_46_95_46destruct[];
extern Node CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr[];
extern Node FN_NHC_46FFI_46_95_46pokeByteOff[];
extern Node FN_NHC_46FFI_46_95_46peekByteOff[];
extern Node FN_NHC_46FFI_46_95_46pokeElemOff[];
extern Node FN_NHC_46FFI_46_95_46peekElemOff[];
void FR_NHC_46FFI_46freeStablePtr_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
void FR_NHC_46FFI_46deRefStablePtr_35(void);
void FR_NHC_46FFI_46newStablePtr_35(void);
extern Node PM_NHC_46FFI[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];
extern Node PC_Prelude_46const[];
extern Node PC_NHC_46FFI_46castPtr[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46peek[];
extern Node PC_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46poke[];
extern Node PC_NHC_46FFI_46_95_46peekElemOff[];
extern Node PC_NHC_46FFI_46_95_46pokeElemOff[];
extern Node PC_NHC_46FFI_46_95_46peekByteOff[];
extern Node PC_NHC_46FFI_46_95_46pokeByteOff[];
extern Node PC_NHC_46FFI_46_95_46destruct[];
extern Node PC_Prelude_469[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v386)
,};
Node FN_NHC_46FFI_46castStablePtrToPtr[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46castStablePtrToPtr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 190001
, useLabel(ST_v385)
,	/* CT_v386: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46castStablePtrToPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46castStablePtrToPtr),1)
, useLabel(PS_v384)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v392)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v391)
, 0
, 0
, 0
, 0
, useLabel(PS_v390)
, 0
, 0
, 0
, 0
, useLabel(PS_v389)
, 0
, 0
, 0
, 0
, 260003
, useLabel(ST_v388)
,	/* CT_v392: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke),2)
, useLabel(PS_v387)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46FFI_46castPtr))
, VAPTAG(useLabel(FN_NHC_46FFI_46castStablePtrToPtr))
, VAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46poke))
, bytes2word(1,0,0,1)
, useLabel(CT_v395)
,};
Node FN_NHC_46FFI_46castPtrToStablePtr[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46castPtrToStablePtr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 200001
, useLabel(ST_v394)
,	/* CT_v395: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46castPtrToStablePtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46castPtrToStablePtr),1)
, useLabel(PS_v393)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v402)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,16)
, bytes2word(HEAP_OFF_N1,11,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v401)
, 0
, 0
, 0
, 0
, useLabel(PS_v400)
, 0
, 0
, 0
, 0
, useLabel(PS_v399)
, 0
, 0
, 0
, 0
, useLabel(PS_v398)
, 0
, 0
, 0
, 0
, 250003
, useLabel(ST_v397)
,	/* CT_v402: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek),1)
, useLabel(PS_v396)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46FFI_46castPtr))
, VAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46peek))
, CAPTAG(useLabel(FN_LAMBDA382),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v407)
,	/* FN_LAMBDA382: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v406)
, 0
, 0
, 0
, 0
, useLabel(PS_v405)
, 0
, 0
, 0
, 0
, 250023
, useLabel(ST_v404)
,	/* CT_v407: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA382: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA382),1)
, useLabel(PS_v403)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46FFI_46castPtrToStablePtr))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v411)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46alignment[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_INT_P1,4,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v410)
, 0
, 0
, 0
, 0
, 240003
, useLabel(ST_v409)
,	/* CT_v411: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46alignment[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46alignment),1)
, useLabel(PS_v408)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46const))
, bytes2word(1,0,0,1)
, useLabel(CT_v415)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46sizeOf[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_INT_P1,4,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v414)
, 0
, 0
, 0
, 0
, 230003
, useLabel(ST_v413)
,	/* CT_v415: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46sizeOf[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46sizeOf),1)
, useLabel(PS_v412)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46const))
, bytes2word(1,0,0,1)
, useLabel(CT_v419)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46destruct[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v418)
, 0
, 0
, 0
, 0
, 220010
, useLabel(ST_v417)
,	/* CT_v419: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46destruct[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46destruct),1)
, useLabel(PS_v416)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46destruct))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v423)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeByteOff[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v422)
, 0
, 0
, 0
, 0
, 220010
, useLabel(ST_v421)
,	/* CT_v423: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeByteOff[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeByteOff),3)
, useLabel(PS_v420)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46pokeByteOff))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v427)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekByteOff[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v426)
, 0
, 0
, 0
, 0
, 220010
, useLabel(ST_v425)
,	/* CT_v427: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekByteOff[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekByteOff),2)
, useLabel(PS_v424)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46peekByteOff))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v431)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeElemOff[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v430)
, 0
, 0
, 0
, 0
, 220010
, useLabel(ST_v429)
,	/* CT_v431: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeElemOff[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeElemOff),3)
, useLabel(PS_v428)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46pokeElemOff))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v435)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekElemOff[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v434)
, 0
, 0
, 0
, 0
, 220010
, useLabel(ST_v433)
,	/* CT_v435: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekElemOff[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekElemOff),2)
, useLabel(PS_v432)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46peekElemOff))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
, bytes2word(1,0,0,1)
, useLabel(CT_v438)
,	/* FN_NHC_46FFI_46freeStablePtr_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46freeStablePtr_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 170001
, useLabel(ST_v437)
,	/* CT_v438: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46freeStablePtr_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46freeStablePtr_35),1)
, useLabel(PS_v436)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v442)
,};
Node FN_NHC_46FFI_46freeStablePtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v441)
, 0
, 0
, 0
, 0
, 170001
, useLabel(ST_v440)
,	/* CT_v442: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46FFI_46freeStablePtr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46freeStablePtr))
, useLabel(PS_v439)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46FFI_46freeStablePtr_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v445)
,	/* FN_NHC_46FFI_46deRefStablePtr_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46deRefStablePtr_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 160001
, useLabel(ST_v444)
,	/* CT_v445: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46deRefStablePtr_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46deRefStablePtr_35),1)
, useLabel(PS_v443)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v449)
,};
Node FN_NHC_46FFI_46deRefStablePtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v448)
, 0
, 0
, 0
, 0
, 160001
, useLabel(ST_v447)
,	/* CT_v449: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46FFI_46deRefStablePtr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46deRefStablePtr))
, useLabel(PS_v446)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46FFI_46deRefStablePtr_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v452)
,	/* FN_NHC_46FFI_46newStablePtr_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46newStablePtr_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 150001
, useLabel(ST_v451)
,	/* CT_v452: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46newStablePtr_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46newStablePtr_35),1)
, useLabel(PS_v450)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v456)
,};
Node FN_NHC_46FFI_46newStablePtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v455)
, 0
, 0
, 0
, 0
, 150001
, useLabel(ST_v454)
,	/* CT_v456: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46FFI_46newStablePtr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46newStablePtr))
, useLabel(PS_v453)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46FFI_46newStablePtr_35)
, bytes2word(0,0,0,0)
, useLabel(CT_v460)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_P1,15,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v459)
, 0
, 0
, 0
, 0
, CONSTR(0,9,0)
, 0
, 0
, 0
, 0
, 220010
, useLabel(ST_v458)
,	/* CT_v460: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr))
, useLabel(PS_v457)
, 0
, 0
, 0
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46sizeOf)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeByteOff)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekByteOff)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeElemOff)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekElemOff)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46destruct)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46alignment)
,};
Node PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr[] = {
 };
Node PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr[] = {
 	/* ST_v458: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,111,114)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,0,0)
,};
Node PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46alignment[] = {
 };
Node PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46alignment[] = {
 	/* ST_v409: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,111,114)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,46,97)
, bytes2word(108,105,103,110)
, bytes2word(109,101,110,116)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46destruct[] = {
 };
Node PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46destruct[] = {
 	/* ST_v417: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,111,114)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,46,100)
, bytes2word(101,115,116,114)
, bytes2word(117,99,116,0)
,};
Node PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek[] = {
 };
Node PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek[] = {
 	/* ST_v397: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,111,114)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,46,112)
,	/* PP_LAMBDA382: (byte 4) */
 	/* PC_LAMBDA382: (byte 4) */
 	/* ST_v404: (byte 4) */
  bytes2word(101,101,107,0)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,111,114)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,46,112)
, bytes2word(101,101,107,58)
, bytes2word(50,53,58,50)
, bytes2word(51,45,50,53)
, bytes2word(58,51,56,0)
,};
Node PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekByteOff[] = {
 };
Node PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekByteOff[] = {
 	/* ST_v425: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,111,114)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,46,112)
, bytes2word(101,101,107,66)
, bytes2word(121,116,101,79)
, bytes2word(102,102,0,0)
,};
Node PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekElemOff[] = {
 };
Node PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekElemOff[] = {
 	/* ST_v433: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,111,114)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,46,112)
, bytes2word(101,101,107,69)
, bytes2word(108,101,109,79)
, bytes2word(102,102,0,0)
,};
Node PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke[] = {
 };
Node PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke[] = {
 	/* ST_v388: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,111,114)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,46,112)
, bytes2word(111,107,101,0)
,};
Node PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeByteOff[] = {
 };
Node PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeByteOff[] = {
 	/* ST_v421: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,111,114)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,46,112)
, bytes2word(111,107,101,66)
, bytes2word(121,116,101,79)
, bytes2word(102,102,0,0)
,};
Node PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeElemOff[] = {
 };
Node PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeElemOff[] = {
 	/* ST_v429: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,111,114)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,46,112)
, bytes2word(111,107,101,69)
, bytes2word(108,101,109,79)
, bytes2word(102,102,0,0)
,};
Node PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46sizeOf[] = {
 };
Node PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46sizeOf[] = {
 	/* ST_v413: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,111,114)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,46,115)
, bytes2word(105,122,101,79)
, bytes2word(102,0,0,0)
,};
Node PP_NHC_46FFI_46castPtrToStablePtr[] = {
 };
Node PC_NHC_46FFI_46castPtrToStablePtr[] = {
 	/* ST_v394: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(99,97,115,116)
, bytes2word(80,116,114,84)
, bytes2word(111,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,0,0)
,};
Node PP_NHC_46FFI_46castStablePtrToPtr[] = {
 };
Node PC_NHC_46FFI_46castStablePtrToPtr[] = {
 	/* ST_v385: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(99,97,115,116)
, bytes2word(83,116,97,98)
, bytes2word(108,101,80,116)
, bytes2word(114,84,111,80)
, bytes2word(116,114,0,0)
,};
Node PP_NHC_46FFI_46deRefStablePtr[] = {
 };
Node PC_NHC_46FFI_46deRefStablePtr[] = {
 	/* ST_v447: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(100,101,82,101)
, bytes2word(102,83,116,97)
, bytes2word(98,108,101,80)
,	/* PP_NHC_46FFI_46deRefStablePtr_35: (byte 3) */
 	/* PC_NHC_46FFI_46deRefStablePtr_35: (byte 3) */
 	/* ST_v444: (byte 3) */
  bytes2word(116,114,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,100)
, bytes2word(101,82,101,102)
, bytes2word(83,116,97,98)
, bytes2word(108,101,80,116)
, bytes2word(114,35,0,0)
,};
Node PP_NHC_46FFI_46freeStablePtr[] = {
 };
Node PC_NHC_46FFI_46freeStablePtr[] = {
 	/* ST_v440: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(102,114,101,101)
, bytes2word(83,116,97,98)
, bytes2word(108,101,80,116)
,	/* PP_NHC_46FFI_46freeStablePtr_35: (byte 2) */
 	/* PC_NHC_46FFI_46freeStablePtr_35: (byte 2) */
 	/* ST_v437: (byte 2) */
  bytes2word(114,0,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,102,114)
, bytes2word(101,101,83,116)
, bytes2word(97,98,108,101)
, bytes2word(80,116,114,35)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46FFI_46newStablePtr[] = {
 };
Node PC_NHC_46FFI_46newStablePtr[] = {
 	/* ST_v454: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(110,101,119,83)
, bytes2word(116,97,98,108)
, bytes2word(101,80,116,114)
,	/* PP_NHC_46FFI_46newStablePtr_35: (byte 1) */
 	/* PC_NHC_46FFI_46newStablePtr_35: (byte 1) */
 	/* ST_v451: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,110,101,119)
, bytes2word(83,116,97,98)
, bytes2word(108,101,80,116)
, bytes2word(114,35,0,0)
,	/* PS_v455: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46newStablePtr)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v453: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46newStablePtr)
, useLabel(PC_NHC_46FFI_46newStablePtr)
,	/* PS_v448: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46deRefStablePtr)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v446: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46deRefStablePtr)
, useLabel(PC_NHC_46FFI_46deRefStablePtr)
,	/* PS_v441: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46freeStablePtr)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v439: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46freeStablePtr)
, useLabel(PC_NHC_46FFI_46freeStablePtr)
,	/* PS_v384: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46castStablePtrToPtr)
, useLabel(PC_NHC_46FFI_46castStablePtrToPtr)
,	/* PS_v393: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46castPtrToStablePtr)
, useLabel(PC_NHC_46FFI_46castPtrToStablePtr)
,	/* PS_v414: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46sizeOf)
, useLabel(PC_Prelude_46const)
,	/* PS_v412: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46sizeOf)
, useLabel(PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46sizeOf)
,	/* PS_v410: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46alignment)
, useLabel(PC_Prelude_46const)
,	/* PS_v408: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46alignment)
, useLabel(PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46alignment)
,	/* PS_v398: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek)
, useLabel(PC_NHC_46FFI_46castPtr)
,	/* PS_v396: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek)
, useLabel(PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek)
,	/* PS_v401: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v399: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek)
, useLabel(PC_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46peek)
,	/* PS_v400: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek)
, useLabel(PC_LAMBDA382)
,	/* PS_v389: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke)
, useLabel(PC_NHC_46FFI_46castPtr)
,	/* PS_v390: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke)
, useLabel(PC_NHC_46FFI_46castStablePtrToPtr)
,	/* PS_v387: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke)
, useLabel(PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke)
,	/* PS_v391: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke)
, useLabel(PC_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46poke)
,	/* PS_v434: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekElemOff)
, useLabel(PC_NHC_46FFI_46_95_46peekElemOff)
,	/* PS_v432: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekElemOff)
, useLabel(PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekElemOff)
,	/* PS_v430: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeElemOff)
, useLabel(PC_NHC_46FFI_46_95_46pokeElemOff)
,	/* PS_v428: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeElemOff)
, useLabel(PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeElemOff)
,	/* PS_v426: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekByteOff)
, useLabel(PC_NHC_46FFI_46_95_46peekByteOff)
,	/* PS_v424: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekByteOff)
, useLabel(PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekByteOff)
,	/* PS_v422: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeByteOff)
, useLabel(PC_NHC_46FFI_46_95_46pokeByteOff)
,	/* PS_v420: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeByteOff)
, useLabel(PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeByteOff)
,	/* PS_v418: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46destruct)
, useLabel(PC_NHC_46FFI_46_95_46destruct)
,	/* PS_v416: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46destruct)
, useLabel(PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46destruct)
,	/* PS_v450: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46newStablePtr_35)
, useLabel(PC_NHC_46FFI_46newStablePtr_35)
,	/* PS_v443: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46deRefStablePtr_35)
, useLabel(PC_NHC_46FFI_46deRefStablePtr_35)
,	/* PS_v436: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46freeStablePtr_35)
, useLabel(PC_NHC_46FFI_46freeStablePtr_35)
,	/* PS_v457: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
, useLabel(PC_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
,	/* PS_v459: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
, useLabel(PC_Prelude_469)
,	/* PS_v405: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_LAMBDA382)
, useLabel(PC_NHC_46FFI_46castPtrToStablePtr)
,	/* PS_v406: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_LAMBDA382)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v403: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_LAMBDA382)
, useLabel(PC_LAMBDA382)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import cast "castStablePtrToPtr" NHC.FFI.castStablePtrToPtr 1 :: FFI.StablePtr -> FFI.Ptr */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46castStablePtrToPtr = {"NHC.FFI","NHC.FFI.castStablePtrToPtr","FFI.Ptr"};
#endif
C_HEADER(FR_NHC_46FFI_46castStablePtrToPtr) {
  NodePtr nodeptr;
  void* result;
  StablePtr arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (StablePtr)GET_INT_VALUE(nodeptr);

  result = (void*)(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46castStablePtrToPtr);
  C_RETURN(nodeptr);
}

/* foreign import cast "castPtrToStablePtr" NHC.FFI.castPtrToStablePtr 1 :: FFI.Ptr -> FFI.StablePtr */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46castPtrToStablePtr = {"NHC.FFI","NHC.FFI.castPtrToStablePtr","FFI.StablePtr"};
#endif
C_HEADER(FR_NHC_46FFI_46castPtrToStablePtr) {
  NodePtr nodeptr;
  StablePtr result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = (StablePtr)(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46castPtrToStablePtr);
  C_RETURN(nodeptr);
}

/* foreign import ccall "freeStablePtr" NHC.FFI.freeStablePtr# 1 :: FFI.StablePtr -> Prelude.() */
extern void freeStablePtr(StablePtr);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46freeStablePtr_35 = {"NHC.FFI","NHC.FFI.freeStablePtr#","Prelude.()"};
#endif
C_HEADER(FR_NHC_46FFI_46freeStablePtr_35) {
  NodePtr nodeptr;
  StablePtr arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (StablePtr)GET_INT_VALUE(nodeptr);

  freeStablePtr(arg1);

  nodeptr = nhc_mkUnit();
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46freeStablePtr_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "derefStablePtr" NHC.FFI.deRefStablePtr# 1 :: FFI.StablePtr -> 1 */
extern Node* derefStablePtr(StablePtr);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46deRefStablePtr_35 = {"NHC.FFI","NHC.FFI.deRefStablePtr#","1"};
#endif
C_HEADER(FR_NHC_46FFI_46deRefStablePtr_35) {
  NodePtr nodeptr;
  Node* result;
  StablePtr arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (StablePtr)GET_INT_VALUE(nodeptr);

  result = derefStablePtr(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46deRefStablePtr_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "makeStablePtr" NHC.FFI.newStablePtr# 1 :: 1 -> FFI.StablePtr */
extern StablePtr makeStablePtr(Node*);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46newStablePtr_35 = {"NHC.FFI","NHC.FFI.newStablePtr#","FFI.StablePtr"};
#endif
C_HEADER(FR_NHC_46FFI_46newStablePtr_35) {
  NodePtr nodeptr;
  StablePtr result;
  Node* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (Node*)nodeptr;

  result = makeStablePtr(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46newStablePtr_35);
  C_RETURN(nodeptr);
}
