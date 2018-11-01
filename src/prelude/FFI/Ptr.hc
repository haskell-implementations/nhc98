#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46FFI_46ptrToInt	((void*)startLabel+8)
#define CT_v552	((void*)startLabel+24)
#define F0_NHC_46FFI_46ptrToInt	((void*)startLabel+32)
#define CT_v553	((void*)startLabel+72)
#define FN_NHC_46FFI_46intToPtr	((void*)startLabel+96)
#define CT_v554	((void*)startLabel+112)
#define F0_NHC_46FFI_46intToPtr	((void*)startLabel+120)
#define CT_v555	((void*)startLabel+164)
#define CT_v556	((void*)startLabel+224)
#define CT_v557	((void*)startLabel+268)
#define CT_v558	((void*)startLabel+304)
#define CT_v559	((void*)startLabel+340)
#define CT_v560	((void*)startLabel+384)
#define CT_v561	((void*)startLabel+428)
#define CT_v562	((void*)startLabel+472)
#define CT_v563	((void*)startLabel+512)
#define CT_v564	((void*)startLabel+552)
#define CT_v565	((void*)startLabel+592)
#define CT_v566	((void*)startLabel+660)
#define FN_LAMBDA550	((void*)startLabel+708)
#define CT_v568	((void*)startLabel+728)
#define CF_LAMBDA550	((void*)startLabel+736)
#define CT_v569	((void*)startLabel+760)
#define CT_v570	((void*)startLabel+800)
#define CT_v571	((void*)startLabel+840)
#define CT_v572	((void*)startLabel+892)
#define CT_v573	((void*)startLabel+936)
#define CT_v574	((void*)startLabel+980)
#define CT_v575	((void*)startLabel+1024)
#define CT_v576	((void*)startLabel+1068)
#define CT_v577	((void*)startLabel+1112)
#define CT_v578	((void*)startLabel+1156)
#define CT_v579	((void*)startLabel+1212)
#define CT_v580	((void*)startLabel+1252)
#define CT_v581	((void*)startLabel+1296)
#define CT_v582	((void*)startLabel+1336)
#define CT_v583	((void*)startLabel+1396)
#define CT_v584	((void*)startLabel+1472)
#define CT_v585	((void*)startLabel+1540)
#define ST_v567	((void*)startLabel+1584)
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
, useLabel(CT_v552)
,	/* FN_NHC_46FFI_46ptrToInt: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46ptrToInt)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v552: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46ptrToInt: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46ptrToInt),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v553)
,};
Node FN_NHC_46FFI_46minusPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,SUB_W)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v553: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46FFI_46minusPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46minusPtr),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46ptrToInt))
, bytes2word(1,0,0,1)
, useLabel(CT_v554)
,	/* FN_NHC_46FFI_46intToPtr: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46intToPtr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v554: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46intToPtr: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46intToPtr),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v555)
,};
Node FN_NHC_46FFI_46alignPtr[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v555: (byte 0) */
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
, useLabel(CT_v556)
,};
Node FN_NHC_46FFI_46plusPtr[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v556: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46FFI_46plusPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46plusPtr),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46ptrToInt))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46intToPtr))
, bytes2word(0,0,0,0)
, useLabel(CT_v557)
,};
Node FN_NHC_46FFI_46nullPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_INT_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v557: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46FFI_46nullPtr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46nullPtr))
, VAPTAG(useLabel(FN_NHC_46FFI_46intToPtr))
, bytes2word(1,0,0,1)
, useLabel(CT_v558)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46fromEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v558: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46fromEnum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46ptrToInt))
, bytes2word(1,0,0,1)
, useLabel(CT_v559)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46toEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v559: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46toEnum),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46intToPtr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v560)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v560: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v561)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v561: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v562)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromThen[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v562: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFromThen),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThen))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Ptr)
, bytes2word(1,0,0,1)
, useLabel(CT_v563)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFrom[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v563: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46enumFrom),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFrom))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Ptr)
, bytes2word(1,0,0,1)
, useLabel(CT_v564)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46succ[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v564: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46succ),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46succ))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Ptr)
, bytes2word(1,0,0,1)
, useLabel(CT_v565)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46pred[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v565: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46FFI_46Ptr_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46Ptr_46pred),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46pred))
, useLabel(CF_Prelude_46Enum_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v566)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Ptr_46showsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v566: (byte 0) */
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
, useLabel(CT_v568)
,	/* FN_LAMBDA550: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v567)
,	/* CT_v568: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA550: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA550))
, bytes2word(1,0,0,1)
, useLabel(CT_v569)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Ptr_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v569: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Ptr_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Ptr_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Ptr)
, bytes2word(1,0,0,1)
, useLabel(CT_v570)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Ptr_46showsType[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v570: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Ptr_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Ptr_46showsType),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showsType))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Ptr)
, bytes2word(1,0,0,1)
, useLabel(CT_v571)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Ptr_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v571: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46Ptr_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Ptr_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v572)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46compare[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v572: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46compare),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46ptrToInt))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v573)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v573: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v574)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v574: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v575)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v575: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v576)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v576: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v577)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v577: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v578)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v578: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46Ptr_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46_60_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46Ptr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v579)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,EQ_W,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v579: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46ptrToInt))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v580)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v580: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46Ptr_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46Ptr)
, bytes2word(1,0,0,1)
, useLabel(CT_v581)
,};
Node FN_NHC_46FFI_46castPtr[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46castPtr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v581: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46castPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46castPtr),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v582)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v582: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46NHC_46FFI_46Ptr[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Ptr))
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46Ptr_46_47_61)
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v583)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46Ptr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v583: (byte 0) */
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
, useLabel(CT_v584)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46Ptr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v584: (byte 0) */
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
, useLabel(CT_v585)
,};
Node FN_Prelude_46Enum_46NHC_46FFI_46Ptr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v585: (byte 0) */
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
,	/* ST_v567: (byte 0) */
  bytes2word(48,120,0,0)
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
