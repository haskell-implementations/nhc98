#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46FFI_46ptrToInt	((void*)startLabel+8)
#define CT_v553	((void*)startLabel+36)
#define F0_NHC_46FFI_46ptrToInt	((void*)startLabel+44)
#define CT_v555	((void*)startLabel+96)
#define FN_NHC_46FFI_46intToPtr	((void*)startLabel+120)
#define CT_v557	((void*)startLabel+148)
#define F0_NHC_46FFI_46intToPtr	((void*)startLabel+156)
#define CT_v559	((void*)startLabel+212)
#define CT_v561	((void*)startLabel+284)
#define CT_v563	((void*)startLabel+340)
#define CT_v565	((void*)startLabel+388)
#define CT_v567	((void*)startLabel+436)
#define CT_v569	((void*)startLabel+492)
#define CT_v571	((void*)startLabel+548)
#define CT_v573	((void*)startLabel+604)
#define CT_v575	((void*)startLabel+656)
#define CT_v577	((void*)startLabel+708)
#define CT_v579	((void*)startLabel+760)
#define CT_v581	((void*)startLabel+840)
#define FN_LAMBDA550	((void*)startLabel+888)
#define CT_v584	((void*)startLabel+920)
#define CF_LAMBDA550	((void*)startLabel+928)
#define CT_v586	((void*)startLabel+964)
#define CT_v588	((void*)startLabel+1016)
#define CT_v590	((void*)startLabel+1068)
#define CT_v592	((void*)startLabel+1132)
#define CT_v594	((void*)startLabel+1188)
#define CT_v596	((void*)startLabel+1244)
#define CT_v598	((void*)startLabel+1300)
#define CT_v600	((void*)startLabel+1356)
#define CT_v602	((void*)startLabel+1412)
#define CT_v604	((void*)startLabel+1468)
#define CT_v606	((void*)startLabel+1536)
#define CT_v608	((void*)startLabel+1588)
#define CT_v610	((void*)startLabel+1644)
#define CT_v612	((void*)startLabel+1696)
#define CT_v614	((void*)startLabel+1768)
#define CT_v616	((void*)startLabel+1856)
#define CT_v618	((void*)startLabel+1936)
#define ST_v583	((void*)startLabel+1980)
#define ST_v558	((void*)startLabel+1983)
#define ST_v609	((void*)startLabel+2000)
#define ST_v556	((void*)startLabel+2016)
#define ST_v554	((void*)startLabel+2033)
#define ST_v562	((void*)startLabel+2050)
#define ST_v560	((void*)startLabel+2066)
#define ST_v552	((void*)startLabel+2082)
#define ST_v617	((void*)startLabel+2099)
#define ST_v574	((void*)startLabel+2124)
#define ST_v572	((void*)startLabel+2158)
#define ST_v568	((void*)startLabel+2196)
#define ST_v570	((void*)startLabel+2236)
#define ST_v564	((void*)startLabel+2272)
#define ST_v578	((void*)startLabel+2306)
#define ST_v576	((void*)startLabel+2336)
#define ST_v566	((void*)startLabel+2366)
#define ST_v611	((void*)startLabel+2398)
#define ST_v607	((void*)startLabel+2421)
#define ST_v605	((void*)startLabel+2447)
#define ST_v613	((void*)startLabel+2473)
#define ST_v601	((void*)startLabel+2497)
#define ST_v603	((void*)startLabel+2523)
#define ST_v597	((void*)startLabel+2550)
#define ST_v599	((void*)startLabel+2576)
#define ST_v591	((void*)startLabel+2603)
#define ST_v595	((void*)startLabel+2635)
#define ST_v593	((void*)startLabel+2663)
#define ST_v615	((void*)startLabel+2691)
#define ST_v585	((void*)startLabel+2716)
#define ST_v589	((void*)startLabel+2746)
#define ST_v580	((void*)startLabel+2780)
#define ST_v582	((void*)startLabel+2815)
#define ST_v587	((void*)startLabel+2862)
extern Node TM_NHC_46FFI[];
void FR_NHC_46FFI_46ptrToInt(void);
void FR_NHC_46FFI_46intToPtr(void);
extern Node FN_Prelude_46Integral_46Prelude_46Int_46rem[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_Prelude_46_95_46enumFromThenTo[];
extern Node CF_Prelude_46Enum_46NHC_46FFI_46Ptr[];
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
extern Node CF_Prelude_46Show_46NHC_46FFI_46Ptr[];
extern Node FN_Prelude_46_95_46showsType[];
extern Node FN_Prelude_46_95_46showList[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46NHC_46FFI_46Ptr[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46NHC_46FFI_46Ptr[];
void FR_NHC_46FFI_46castPtr(void);

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v553)
,	/* FN_NHC_46FFI_46ptrToInt: (byte 0) */
  useLabel(TM_NHC_46FFI)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46ptrToInt)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 410001
, useLabel(ST_v552)
,	/* CT_v553: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46ptrToInt: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46ptrToInt),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v555)
,};
Node FN_NHC_46FFI_46minusPtr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,SUB_W)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 660001
, useLabel(ST_v554)
,	/* CT_v555: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46FFI_46minusPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46minusPtr),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46ptrToInt))
, bytes2word(1,0,0,1)
, useLabel(CT_v557)
,	/* FN_NHC_46FFI_46intToPtr: (byte 0) */
  useLabel(TM_NHC_46FFI)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46intToPtr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 420001
, useLabel(ST_v556)
,	/* CT_v557: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46intToPtr: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46intToPtr),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v559)
,};
Node FN_NHC_46FFI_46alignPtr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 630001
, useLabel(ST_v558)
,	/* CT_v559: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_NHC_46FFI_46alignPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46alignPtr),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46ptrToInt))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46rem))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46intToPtr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v561)
,};
Node FN_NHC_46FFI_46plusPtr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 600001
, useLabel(ST_v560)
,	/* CT_v561: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46FFI_46plusPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46plusPtr),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46ptrToInt))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46intToPtr))
, bytes2word(0,0,0,0)
, useLabel(CT_v563)
,};
Node FN_NHC_46FFI_46nullPtr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_INT_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 570001
, useLabel(ST_v562)
,	/* CT_v563: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46FFI_46nullPtr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46nullPtr))
, VAPTAG(useLabel(FN_NHC_46FFI_46intToPtr))
, bytes2word(1,0,0,1)
, useLabel(CT_v565)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46fromEnum[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 530003
, useLabel(ST_v564)
,	/* CT_v565: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46fromEnum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46ptrToInt))
, bytes2word(1,0,0,1)
, useLabel(CT_v567)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46toEnum[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 520003
, useLabel(ST_v566)
,	/* CT_v567: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46toEnum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46intToPtr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v569)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromThenTo[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 510010
, useLabel(ST_v568)
,	/* CT_v569: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v571)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromTo[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 510010
, useLabel(ST_v570)
,	/* CT_v571: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v573)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromThen[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 510010
, useLabel(ST_v572)
,	/* CT_v573: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromThen),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThen))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Ptr)
, bytes2word(1,0,0,1)
, useLabel(CT_v575)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFrom[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 510010
, useLabel(ST_v574)
,	/* CT_v575: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFrom),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFrom))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Ptr)
, bytes2word(1,0,0,1)
, useLabel(CT_v577)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46succ[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 510010
, useLabel(ST_v576)
,	/* CT_v577: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46succ),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46succ))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Ptr)
, bytes2word(1,0,0,1)
, useLabel(CT_v579)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46pred[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 510010
, useLabel(ST_v578)
,	/* CT_v579: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46pred),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46pred))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v581)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Ptr_46showsPrec[] = {
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
, 500003
, useLabel(ST_v580)
,	/* CT_v581: (byte 0) */
  HW(7,2)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Ptr_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Ptr_46showsPrec),2)
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA550))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Numeric_46showHex))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, VAPTAG(useLabel(FN_NHC_46FFI_46ptrToInt))
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(0,0,0,0)
, useLabel(CT_v584)
,	/* FN_LAMBDA550: (byte 0) */
  useLabel(TMSUB_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v583)
, 500030
, useLabel(ST_v582)
,	/* CT_v584: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA550: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA550))
, bytes2word(1,0,0,1)
, useLabel(CT_v586)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Ptr_46show[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 490010
, useLabel(ST_v585)
,	/* CT_v586: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Ptr_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Ptr_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Ptr)
, bytes2word(1,0,0,1)
, useLabel(CT_v588)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Ptr_46showsType[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 490010
, useLabel(ST_v587)
,	/* CT_v588: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Ptr_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Ptr_46showsType),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showsType))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Ptr)
, bytes2word(1,0,0,1)
, useLabel(CT_v590)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Ptr_46showList[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 490010
, useLabel(ST_v589)
,	/* CT_v590: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Ptr_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Ptr_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v592)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46compare[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 480003
, useLabel(ST_v591)
,	/* CT_v592: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46compare),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46ptrToInt))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v594)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46min[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 470010
, useLabel(ST_v593)
,	/* CT_v594: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v596)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46max[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 470010
, useLabel(ST_v595)
,	/* CT_v596: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v598)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46_62[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 470010
, useLabel(ST_v597)
,	/* CT_v598: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v600)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46_62_61[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 470010
, useLabel(ST_v599)
,	/* CT_v600: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v602)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46_60[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 470010
, useLabel(ST_v601)
,	/* CT_v602: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v604)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46_60_61[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 470010
, useLabel(ST_v603)
,	/* CT_v604: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46_60_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v606)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,EQ_W,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 460003
, useLabel(ST_v605)
,	/* CT_v606: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46ptrToInt))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v608)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_47_61[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 450010
, useLabel(ST_v607)
,	/* CT_v608: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46Ptr_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Ptr)
, bytes2word(1,0,0,1)
, useLabel(CT_v610)
,};
Node FN_NHC_46FFI_46castPtr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46castPtr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 430001
, useLabel(ST_v609)
,	/* CT_v610: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46castPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46castPtr),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v612)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 450010
, useLabel(ST_v611)
,	/* CT_v612: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46NHC_46FFI_46Ptr[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Ptr))
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46Ptr_46_47_61)
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v614)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Ptr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 470010
, useLabel(ST_v613)
,	/* CT_v614: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46NHC_46FFI_46Ptr[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Ptr))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Ptr)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46_60)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46_60_61)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46_62_61)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46_62)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46compare)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46min)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46max)
, bytes2word(0,0,0,0)
, useLabel(CT_v616)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Ptr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
, 490010
, useLabel(ST_v615)
,	/* CT_v616: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46NHC_46FFI_46Ptr[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Ptr))
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Ptr_46showsPrec)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Ptr_46showsType)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Ptr_46showList)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46Ptr_46show)
, bytes2word(0,0,0,0)
, useLabel(CT_v618)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 510010
, useLabel(ST_v617)
,	/* CT_v618: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Enum_46NHC_46FFI_46Ptr[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Ptr))
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46succ)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46pred)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFrom)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46fromEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46toEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromThenTo)
,	/* ST_v583: (byte 0) */
 	/* ST_v558: (byte 3) */
  bytes2word(48,120,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,97)
, bytes2word(108,105,103,110)
,	/* ST_v609: (byte 4) */
  bytes2word(80,116,114,0)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(99,97,115,116)
,	/* ST_v556: (byte 4) */
  bytes2word(80,116,114,0)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(105,110,116,84)
, bytes2word(111,80,116,114)
,	/* ST_v554: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,109,105,110)
, bytes2word(117,115,80,116)
,	/* ST_v562: (byte 2) */
  bytes2word(114,0,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,110,117)
, bytes2word(108,108,80,116)
,	/* ST_v560: (byte 2) */
  bytes2word(114,0,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,112,108)
, bytes2word(117,115,80,116)
,	/* ST_v552: (byte 2) */
  bytes2word(114,0,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,112,116)
, bytes2word(114,84,111,73)
,	/* ST_v617: (byte 3) */
  bytes2word(110,116,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(110,117,109,46)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
,	/* ST_v574: (byte 4) */
  bytes2word(80,116,114,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,80,116,114)
, bytes2word(46,101,110,117)
, bytes2word(109,70,114,111)
,	/* ST_v572: (byte 2) */
  bytes2word(109,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,110)
, bytes2word(117,109,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,80)
, bytes2word(116,114,46,101)
, bytes2word(110,117,109,70)
, bytes2word(114,111,109,84)
,	/* ST_v568: (byte 4) */
  bytes2word(104,101,110,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,80,116,114)
, bytes2word(46,101,110,117)
, bytes2word(109,70,114,111)
, bytes2word(109,84,104,101)
,	/* ST_v570: (byte 4) */
  bytes2word(110,84,111,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,80,116,114)
, bytes2word(46,101,110,117)
, bytes2word(109,70,114,111)
,	/* ST_v564: (byte 4) */
  bytes2word(109,84,111,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,80,116,114)
, bytes2word(46,102,114,111)
, bytes2word(109,69,110,117)
,	/* ST_v578: (byte 2) */
  bytes2word(109,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,110)
, bytes2word(117,109,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,80)
, bytes2word(116,114,46,112)
,	/* ST_v576: (byte 4) */
  bytes2word(114,101,100,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,80,116,114)
, bytes2word(46,115,117,99)
,	/* ST_v566: (byte 2) */
  bytes2word(99,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,110)
, bytes2word(117,109,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,80)
, bytes2word(116,114,46,116)
, bytes2word(111,69,110,117)
,	/* ST_v611: (byte 2) */
  bytes2word(109,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,113)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,80,116,114)
,	/* ST_v607: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(80,116,114,46)
,	/* ST_v605: (byte 3) */
  bytes2word(47,61,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(113,46,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,80,116)
, bytes2word(114,46,61,61)
,	/* ST_v613: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,80,116,114)
,	/* ST_v601: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,80,116,114)
,	/* ST_v603: (byte 3) */
  bytes2word(46,60,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,80)
, bytes2word(116,114,46,60)
,	/* ST_v597: (byte 2) */
  bytes2word(61,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,80,116)
,	/* ST_v599: (byte 4) */
  bytes2word(114,46,62,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(80,116,114,46)
,	/* ST_v591: (byte 3) */
  bytes2word(62,61,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,80)
, bytes2word(116,114,46,99)
, bytes2word(111,109,112,97)
,	/* ST_v595: (byte 3) */
  bytes2word(114,101,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,80)
, bytes2word(116,114,46,109)
,	/* ST_v593: (byte 3) */
  bytes2word(97,120,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,80)
, bytes2word(116,114,46,109)
,	/* ST_v615: (byte 3) */
  bytes2word(105,110,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
,	/* ST_v585: (byte 4) */
  bytes2word(80,116,114,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,80,116,114)
, bytes2word(46,115,104,111)
,	/* ST_v589: (byte 2) */
  bytes2word(119,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,80)
, bytes2word(116,114,46,115)
, bytes2word(104,111,119,76)
,	/* ST_v580: (byte 4) */
  bytes2word(105,115,116,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,80,116,114)
, bytes2word(46,115,104,111)
, bytes2word(119,115,80,114)
,	/* ST_v582: (byte 3) */
  bytes2word(101,99,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(80,116,114,46)
, bytes2word(115,104,111,119)
, bytes2word(115,80,114,101)
, bytes2word(99,58,53,48)
, bytes2word(58,51,48,45)
, bytes2word(53,48,58,51)
,	/* ST_v587: (byte 2) */
  bytes2word(51,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,80)
, bytes2word(116,114,46,115)
, bytes2word(104,111,119,115)
, bytes2word(84,121,112,101)
, bytes2word(0,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import cast "ptrToInt" NHC.FFI.ptrToInt 1 :: FFI.Ptr -> Prelude.Int */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46ptrToInt = {"NHC.FFI","NHC.FFI.ptrToInt","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46FFI_46ptrToInt) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = (HsInt)(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46ptrToInt);
  C_RETURN(nodeptr);
}

/* foreign import cast "intToPtr" NHC.FFI.intToPtr 1 :: Prelude.Int -> FFI.Ptr */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46intToPtr = {"NHC.FFI","NHC.FFI.intToPtr","FFI.Ptr"};
#endif
C_HEADER(FR_NHC_46FFI_46intToPtr) {
  NodePtr nodeptr;
  void* result;
  HsInt arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);

  result = (void*)(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46intToPtr);
  C_RETURN(nodeptr);
}

/* foreign import cast "castPtr" NHC.FFI.castPtr 1 :: FFI.Ptr -> FFI.Ptr */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46castPtr = {"NHC.FFI","NHC.FFI.castPtr","FFI.Ptr"};
#endif
C_HEADER(FR_NHC_46FFI_46castPtr) {
  NodePtr nodeptr;
  void* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = (void*)(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46castPtr);
  C_RETURN(nodeptr);
}
