#include "newmacros.h"
#include "runtime.h"

#define CT_v456	((void*)startLabel+24)
#define CT_v457	((void*)startLabel+60)
#define CT_v458	((void*)startLabel+104)
#define CT_v459	((void*)startLabel+148)
#define CT_v460	((void*)startLabel+184)
#define CT_v461	((void*)startLabel+220)
#define CT_v462	((void*)startLabel+264)
#define CT_v463	((void*)startLabel+308)
#define CT_v464	((void*)startLabel+352)
#define CT_v465	((void*)startLabel+392)
#define CT_v466	((void*)startLabel+432)
#define CT_v467	((void*)startLabel+472)
#define CT_v468	((void*)startLabel+540)
#define FN_LAMBDA454	((void*)startLabel+588)
#define CT_v470	((void*)startLabel+608)
#define CF_LAMBDA454	((void*)startLabel+616)
#define CT_v471	((void*)startLabel+640)
#define CT_v472	((void*)startLabel+680)
#define CT_v473	((void*)startLabel+720)
#define CT_v474	((void*)startLabel+772)
#define CT_v475	((void*)startLabel+816)
#define CT_v476	((void*)startLabel+860)
#define CT_v477	((void*)startLabel+904)
#define CT_v478	((void*)startLabel+948)
#define CT_v479	((void*)startLabel+992)
#define CT_v480	((void*)startLabel+1036)
#define CT_v481	((void*)startLabel+1092)
#define CT_v482	((void*)startLabel+1132)
#define CT_v483	((void*)startLabel+1180)
#define CT_v484	((void*)startLabel+1240)
#define CT_v485	((void*)startLabel+1316)
#define CT_v486	((void*)startLabel+1384)
#define ST_v469	((void*)startLabel+1428)
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
, useLabel(CT_v456)
,};
Node FN_NHC_46FFI_46intToAddr[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46intToAddr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v456: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46intToAddr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46intToAddr),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v457)
,};
Node FN_NHC_46FFI_46addrToInt[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46addrToInt)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v457: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46addrToInt[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46addrToInt),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v458)
,};
Node FN_NHC_46FFI_46plusAddr[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v458: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46FFI_46plusAddr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46plusAddr),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46addrToInt))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46intToAddr))
, bytes2word(0,0,0,0)
, useLabel(CT_v459)
,};
Node FN_NHC_46FFI_46nullAddr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_INT_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v459: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46FFI_46nullAddr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46nullAddr))
, VAPTAG(useLabel(FN_NHC_46FFI_46intToAddr))
, bytes2word(1,0,0,1)
, useLabel(CT_v460)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr_46fromEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v460: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Addr_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Addr_46fromEnum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46addrToInt))
, bytes2word(1,0,0,1)
, useLabel(CT_v461)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr_46toEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v461: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Addr_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Addr_46toEnum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46intToAddr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v462)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v462: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v463)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v463: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v464)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromThen[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v464: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFromThen),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThen))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Addr)
, bytes2word(1,0,0,1)
, useLabel(CT_v465)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFrom[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v465: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Addr_46enumFrom),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFrom))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Addr)
, bytes2word(1,0,0,1)
, useLabel(CT_v466)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr_46succ[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v466: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Addr_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Addr_46succ),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46succ))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Addr)
, bytes2word(1,0,0,1)
, useLabel(CT_v467)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr_46pred[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v467: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Addr_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Addr_46pred),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46pred))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v468)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Addr_46showsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v468: (byte 0) */
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
, useLabel(CT_v470)
,	/* FN_LAMBDA454: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v469)
,	/* CT_v470: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA454: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA454))
, bytes2word(1,0,0,1)
, useLabel(CT_v471)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Addr_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v471: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Addr_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Addr_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Addr)
, bytes2word(1,0,0,1)
, useLabel(CT_v472)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Addr_46showsType[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v472: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Addr_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Addr_46showsType),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showsType))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Addr)
, bytes2word(1,0,0,1)
, useLabel(CT_v473)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Addr_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v473: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Addr_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Addr_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v474)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Addr_46compare[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v474: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Addr_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Addr_46compare),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46addrToInt))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v475)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Addr_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v475: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Addr_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Addr_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v476)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Addr_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v476: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Addr_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Addr_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v477)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Addr_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v477: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Addr_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Addr_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v478)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Addr_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v478: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Addr_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Addr_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v479)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Addr_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v479: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Addr_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Addr_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v480)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Addr_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v480: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Addr_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Addr_46_60_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Addr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v481)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,EQ_W,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v481: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46addrToInt))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v482)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Addr_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v482: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46Addr_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Addr_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Addr)
, bytes2word(0,0,0,0)
, useLabel(CT_v483)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Addr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v483: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46NHC_46FFI_46Addr[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Addr))
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46Addr_46_47_61)
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v484)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Addr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v484: (byte 0) */
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
, useLabel(CT_v485)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Addr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v485: (byte 0) */
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
, useLabel(CT_v486)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Addr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v486: (byte 0) */
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
,	/* ST_v469: (byte 0) */
  bytes2word(48,120,0,0)
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
