#include "newmacros.h"
#include "runtime.h"

#define CT_v457	((void*)startLabel+36)
#define CT_v459	((void*)startLabel+84)
#define CT_v461	((void*)startLabel+140)
#define CT_v463	((void*)startLabel+196)
#define CT_v465	((void*)startLabel+244)
#define CT_v467	((void*)startLabel+292)
#define CT_v469	((void*)startLabel+348)
#define CT_v471	((void*)startLabel+404)
#define CT_v473	((void*)startLabel+460)
#define CT_v475	((void*)startLabel+512)
#define CT_v477	((void*)startLabel+564)
#define CT_v479	((void*)startLabel+616)
#define CT_v481	((void*)startLabel+696)
#define FN_LAMBDA454	((void*)startLabel+744)
#define CT_v484	((void*)startLabel+776)
#define CF_LAMBDA454	((void*)startLabel+784)
#define CT_v486	((void*)startLabel+820)
#define CT_v488	((void*)startLabel+872)
#define CT_v490	((void*)startLabel+924)
#define CT_v492	((void*)startLabel+988)
#define CT_v494	((void*)startLabel+1044)
#define CT_v496	((void*)startLabel+1100)
#define CT_v498	((void*)startLabel+1156)
#define CT_v500	((void*)startLabel+1212)
#define CT_v502	((void*)startLabel+1268)
#define CT_v504	((void*)startLabel+1324)
#define CT_v506	((void*)startLabel+1392)
#define CT_v508	((void*)startLabel+1444)
#define CT_v510	((void*)startLabel+1504)
#define CT_v512	((void*)startLabel+1576)
#define CT_v514	((void*)startLabel+1664)
#define CT_v516	((void*)startLabel+1744)
#define ST_v483	((void*)startLabel+1788)
#define ST_v458	((void*)startLabel+1791)
#define ST_v456	((void*)startLabel+1809)
#define ST_v462	((void*)startLabel+1827)
#define ST_v460	((void*)startLabel+1844)
#define ST_v515	((void*)startLabel+1861)
#define ST_v474	((void*)startLabel+1887)
#define ST_v472	((void*)startLabel+1922)
#define ST_v468	((void*)startLabel+1961)
#define ST_v470	((void*)startLabel+2002)
#define ST_v464	((void*)startLabel+2039)
#define ST_v478	((void*)startLabel+2074)
#define ST_v476	((void*)startLabel+2105)
#define ST_v466	((void*)startLabel+2136)
#define ST_v509	((void*)startLabel+2169)
#define ST_v507	((void*)startLabel+2193)
#define ST_v505	((void*)startLabel+2220)
#define ST_v511	((void*)startLabel+2247)
#define ST_v501	((void*)startLabel+2272)
#define ST_v503	((void*)startLabel+2299)
#define ST_v497	((void*)startLabel+2327)
#define ST_v499	((void*)startLabel+2354)
#define ST_v491	((void*)startLabel+2382)
#define ST_v495	((void*)startLabel+2415)
#define ST_v493	((void*)startLabel+2444)
#define ST_v513	((void*)startLabel+2473)
#define ST_v485	((void*)startLabel+2499)
#define ST_v489	((void*)startLabel+2530)
#define ST_v480	((void*)startLabel+2565)
#define ST_v482	((void*)startLabel+2601)
#define ST_v487	((void*)startLabel+2649)
extern Node TM_NHC_46FFI[];
void FR_NHC_46FFI_46intToAddr(void);
void FR_NHC_46FFI_46addrToInt(void);
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_Prelude_46_95_46enumFromThenTo[];
extern Node CF_Prelude_46Enum_46NHC_46FFI_46Addr[];
extern Node FN_Prelude_46_95_46enumFromTo[];
extern Node FN_Prelude_46_95_46enumFromThen[];
extern Node FN_Prelude_46_95_46enumFrom[];
extern Node FN_Prelude_46_95_46succ[];
extern Node FN_Prelude_46_95_46pred[];
extern Node FN_Prelude_46showString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Numeric_46showHex[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node FN_Prelude_46_46[];
extern Node TMSUB_NHC_46FFI[];
extern Node FN_Prelude_46_95_46show[];
extern Node CF_Prelude_46Show_46NHC_46FFI_46Addr[];
extern Node FN_Prelude_46_95_46showsType[];
extern Node FN_Prelude_46_95_46showList[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46NHC_46FFI_46Addr[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46NHC_46FFI_46Addr[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v457)
,};
Node FN_NHC_46FFI_46intToAddr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46intToAddr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 140001
, useLabel(ST_v456)
,	/* CT_v457: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46intToAddr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46intToAddr),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v459)
,};
Node FN_NHC_46FFI_46addrToInt[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46addrToInt)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 130001
, useLabel(ST_v458)
,	/* CT_v459: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46addrToInt[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46addrToInt),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v461)
,};
Node FN_NHC_46FFI_46plusAddr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 320001
, useLabel(ST_v460)
,	/* CT_v461: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46FFI_46plusAddr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46plusAddr),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46addrToInt))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46intToAddr))
, bytes2word(0,0,0,0)
, useLabel(CT_v463)
,};
Node FN_NHC_46FFI_46nullAddr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_INT_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 310001
, useLabel(ST_v462)
,	/* CT_v463: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46FFI_46nullAddr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46nullAddr))
, VAPTAG(useLabel(FN_NHC_46FFI_46intToAddr))
, bytes2word(1,0,0,1)
, useLabel(CT_v465)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr_46fromEnum[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 250003
, useLabel(ST_v464)
,	/* CT_v465: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Addr_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Addr_46fromEnum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46addrToInt))
, bytes2word(1,0,0,1)
, useLabel(CT_v467)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr_46toEnum[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 240003
, useLabel(ST_v466)
,	/* CT_v467: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Addr_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Addr_46toEnum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46intToAddr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v469)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromThenTo[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 230010
, useLabel(ST_v468)
,	/* CT_v469: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v471)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromTo[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 230010
, useLabel(ST_v470)
,	/* CT_v471: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v473)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromThen[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 230010
, useLabel(ST_v472)
,	/* CT_v473: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromThen),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThen))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Addr)
, bytes2word(1,0,0,1)
, useLabel(CT_v475)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFrom[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 230010
, useLabel(ST_v474)
,	/* CT_v475: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFrom),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFrom))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Addr)
, bytes2word(1,0,0,1)
, useLabel(CT_v477)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr_46succ[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 230010
, useLabel(ST_v476)
,	/* CT_v477: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Addr_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Addr_46succ),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46succ))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Addr)
, bytes2word(1,0,0,1)
, useLabel(CT_v479)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr_46pred[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 230010
, useLabel(ST_v478)
,	/* CT_v479: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Addr_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Addr_46pred),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46pred))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v481)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Addr_46showsPrec[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 220003
, useLabel(ST_v480)
,	/* CT_v481: (byte 0) */
  HW(7,2)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Addr_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Addr_46showsPrec),2)
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA454))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Numeric_46showHex))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, VAPTAG(useLabel(FN_NHC_46FFI_46addrToInt))
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(0,0,0,0)
, useLabel(CT_v484)
,	/* FN_LAMBDA454: (byte 0) */
  useLabel(TMSUB_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v483)
, 220030
, useLabel(ST_v482)
,	/* CT_v484: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA454: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA454))
, bytes2word(1,0,0,1)
, useLabel(CT_v486)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Addr_46show[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 210010
, useLabel(ST_v485)
,	/* CT_v486: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Addr_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Addr_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Addr)
, bytes2word(1,0,0,1)
, useLabel(CT_v488)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Addr_46showsType[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 210010
, useLabel(ST_v487)
,	/* CT_v488: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Addr_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Addr_46showsType),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showsType))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Addr)
, bytes2word(1,0,0,1)
, useLabel(CT_v490)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Addr_46showList[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 210010
, useLabel(ST_v489)
,	/* CT_v490: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Addr_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Addr_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v492)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Addr_46compare[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 200003
, useLabel(ST_v491)
,	/* CT_v492: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Addr_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Addr_46compare),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46addrToInt))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v494)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Addr_46min[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 190010
, useLabel(ST_v493)
,	/* CT_v494: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Addr_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Addr_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v496)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Addr_46max[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 190010
, useLabel(ST_v495)
,	/* CT_v496: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Addr_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Addr_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v498)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Addr_46_62[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 190010
, useLabel(ST_v497)
,	/* CT_v498: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Addr_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Addr_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v500)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Addr_46_62_61[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 190010
, useLabel(ST_v499)
,	/* CT_v500: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Addr_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Addr_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v502)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Addr_46_60[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 190010
, useLabel(ST_v501)
,	/* CT_v502: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Addr_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Addr_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v504)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Addr_46_60_61[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 190010
, useLabel(ST_v503)
,	/* CT_v504: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Addr_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Addr_46_60_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v506)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,EQ_W,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 180003
, useLabel(ST_v505)
,	/* CT_v506: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46addrToInt))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v508)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Addr_46_47_61[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 170010
, useLabel(ST_v507)
,	/* CT_v508: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46Addr_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Addr_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Addr)
, bytes2word(0,0,0,0)
, useLabel(CT_v510)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Addr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 170010
, useLabel(ST_v509)
,	/* CT_v510: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46NHC_46FFI_46Addr[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Addr))
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46Addr_46_47_61)
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v512)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Addr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 190010
, useLabel(ST_v511)
,	/* CT_v512: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46NHC_46FFI_46Addr[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Addr))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Addr)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Addr_46_60)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Addr_46_60_61)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Addr_46_62_61)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Addr_46_62)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Addr_46compare)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Addr_46min)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Addr_46max)
, bytes2word(0,0,0,0)
, useLabel(CT_v514)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Addr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
, 210010
, useLabel(ST_v513)
,	/* CT_v514: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46NHC_46FFI_46Addr[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Addr))
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Addr_46showsPrec)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Addr_46showsType)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Addr_46showList)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Addr_46show)
, bytes2word(0,0,0,0)
, useLabel(CT_v516)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 230010
, useLabel(ST_v515)
,	/* CT_v516: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Enum_46NHC_46FFI_46Addr[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Addr))
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Addr_46succ)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Addr_46pred)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFrom)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Addr_46fromEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Addr_46toEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromThenTo)
,	/* ST_v483: (byte 0) */
 	/* ST_v458: (byte 3) */
  bytes2word(48,120,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,97)
, bytes2word(100,100,114,84)
, bytes2word(111,73,110,116)
,	/* ST_v456: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,105,110,116)
, bytes2word(84,111,65,100)
,	/* ST_v462: (byte 3) */
  bytes2word(100,114,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,110)
, bytes2word(117,108,108,65)
,	/* ST_v460: (byte 4) */
  bytes2word(100,100,114,0)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(112,108,117,115)
, bytes2word(65,100,100,114)
,	/* ST_v515: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,110,117)
, bytes2word(109,46,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,65,100)
,	/* ST_v474: (byte 3) */
  bytes2word(100,114,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(110,117,109,46)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(65,100,100,114)
, bytes2word(46,101,110,117)
, bytes2word(109,70,114,111)
,	/* ST_v472: (byte 2) */
  bytes2word(109,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,110)
, bytes2word(117,109,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,65)
, bytes2word(100,100,114,46)
, bytes2word(101,110,117,109)
, bytes2word(70,114,111,109)
, bytes2word(84,104,101,110)
,	/* ST_v468: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,110,117)
, bytes2word(109,46,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,65,100)
, bytes2word(100,114,46,101)
, bytes2word(110,117,109,70)
, bytes2word(114,111,109,84)
, bytes2word(104,101,110,84)
,	/* ST_v470: (byte 2) */
  bytes2word(111,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,110)
, bytes2word(117,109,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,65)
, bytes2word(100,100,114,46)
, bytes2word(101,110,117,109)
, bytes2word(70,114,111,109)
,	/* ST_v464: (byte 3) */
  bytes2word(84,111,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(110,117,109,46)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(65,100,100,114)
, bytes2word(46,102,114,111)
, bytes2word(109,69,110,117)
,	/* ST_v478: (byte 2) */
  bytes2word(109,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,110)
, bytes2word(117,109,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,65)
, bytes2word(100,100,114,46)
, bytes2word(112,114,101,100)
,	/* ST_v476: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,110,117)
, bytes2word(109,46,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,65,100)
, bytes2word(100,114,46,115)
,	/* ST_v466: (byte 4) */
  bytes2word(117,99,99,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,65,100,100)
, bytes2word(114,46,116,111)
, bytes2word(69,110,117,109)
,	/* ST_v509: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(65,100,100,114)
,	/* ST_v507: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(65,100,100,114)
,	/* ST_v505: (byte 4) */
  bytes2word(46,47,61,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,65)
, bytes2word(100,100,114,46)
,	/* ST_v511: (byte 3) */
  bytes2word(61,61,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,65)
,	/* ST_v501: (byte 4) */
  bytes2word(100,100,114,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(65,100,100,114)
,	/* ST_v503: (byte 3) */
  bytes2word(46,60,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,65)
, bytes2word(100,100,114,46)
,	/* ST_v497: (byte 3) */
  bytes2word(60,61,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,65)
, bytes2word(100,100,114,46)
,	/* ST_v499: (byte 2) */
  bytes2word(62,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,65,100)
, bytes2word(100,114,46,62)
,	/* ST_v491: (byte 2) */
  bytes2word(61,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,65,100)
, bytes2word(100,114,46,99)
, bytes2word(111,109,112,97)
,	/* ST_v495: (byte 3) */
  bytes2word(114,101,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,65)
, bytes2word(100,100,114,46)
,	/* ST_v493: (byte 4) */
  bytes2word(109,97,120,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(65,100,100,114)
, bytes2word(46,109,105,110)
,	/* ST_v513: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,65,100)
,	/* ST_v485: (byte 3) */
  bytes2word(100,114,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(65,100,100,114)
, bytes2word(46,115,104,111)
,	/* ST_v489: (byte 2) */
  bytes2word(119,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,65)
, bytes2word(100,100,114,46)
, bytes2word(115,104,111,119)
, bytes2word(76,105,115,116)
,	/* ST_v480: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,65,100)
, bytes2word(100,114,46,115)
, bytes2word(104,111,119,115)
, bytes2word(80,114,101,99)
,	/* ST_v482: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,65,100)
, bytes2word(100,114,46,115)
, bytes2word(104,111,119,115)
, bytes2word(80,114,101,99)
, bytes2word(58,50,50,58)
, bytes2word(51,48,45,50)
, bytes2word(50,58,51,51)
,	/* ST_v487: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,65,100)
, bytes2word(100,114,46,115)
, bytes2word(104,111,119,115)
, bytes2word(84,121,112,101)
, bytes2word(0,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import cast "intToAddr" NHC.FFI.intToAddr 1 :: Prelude.Int -> FFI.Addr */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46intToAddr = {"NHC.FFI","NHC.FFI.intToAddr","FFI.Addr"};
#endif
C_HEADER(FR_NHC_46FFI_46intToAddr) {
  NodePtr nodeptr;
  void* result;
  HsInt arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);

  result = (void*)(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46intToAddr);
  C_RETURN(nodeptr);
}

/* foreign import cast "addrToInt" NHC.FFI.addrToInt 1 :: FFI.Addr -> Prelude.Int */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46addrToInt = {"NHC.FFI","NHC.FFI.addrToInt","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46FFI_46addrToInt) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = (HsInt)(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46addrToInt);
  C_RETURN(nodeptr);
}
