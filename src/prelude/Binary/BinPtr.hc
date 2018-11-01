#include "newmacros.h"
#include "runtime.h"

#define CT_v571	((void*)startLabel+24)
#define CT_v572	((void*)startLabel+56)
#define CT_v573	((void*)startLabel+88)
#define CT_v574	((void*)startLabel+124)
#define CT_v575	((void*)startLabel+164)
#define CT_v576	((void*)startLabel+204)
#define CT_v577	((void*)startLabel+248)
#define CT_v578	((void*)startLabel+292)
#define CT_v579	((void*)startLabel+336)
#define CT_v580	((void*)startLabel+384)
#define CT_v581	((void*)startLabel+416)
#define CT_v582	((void*)startLabel+448)
#define CT_v583	((void*)startLabel+496)
#define CT_v584	((void*)startLabel+544)
#define CT_v585	((void*)startLabel+584)
#define CT_v586	((void*)startLabel+612)
#define CT_v587	((void*)startLabel+652)
#define CT_v588	((void*)startLabel+696)
#define CT_v589	((void*)startLabel+736)
#define CT_v590	((void*)startLabel+776)
#define CT_v591	((void*)startLabel+820)
#define FN_LAMBDA568	((void*)startLabel+848)
#define CT_v593	((void*)startLabel+868)
#define CF_LAMBDA568	((void*)startLabel+876)
#define CT_v594	((void*)startLabel+948)
#define FN_LAMBDA569	((void*)startLabel+1000)
#define CT_v596	((void*)startLabel+1020)
#define CF_LAMBDA569	((void*)startLabel+1028)
#define CT_v597	((void*)startLabel+1052)
#define CT_v598	((void*)startLabel+1092)
#define CT_v599	((void*)startLabel+1136)
#define CT_v600	((void*)startLabel+1176)
#define CT_v601	((void*)startLabel+1212)
#define CT_v602	((void*)startLabel+1256)
#define CT_v603	((void*)startLabel+1300)
#define CT_v604	((void*)startLabel+1344)
#define CT_v605	((void*)startLabel+1388)
#define CT_v606	((void*)startLabel+1432)
#define CT_v607	((void*)startLabel+1468)
#define CT_v608	((void*)startLabel+1516)
#define CT_v609	((void*)startLabel+1576)
#define CT_v610	((void*)startLabel+1652)
#define CT_v611	((void*)startLabel+1720)
#define CT_v612	((void*)startLabel+1808)
#define ST_v595	((void*)startLabel+1856)
#define ST_v592	((void*)startLabel+1859)
extern Node F0_NHC_46Internal_46_95id[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46fromInteger[];
extern Node FN_Prelude_46_95_46signum[];
extern Node CF_Prelude_46Num_46NHC_46Binary_46BinPtr[];
extern Node FN_Prelude_46_95_46abs[];
extern Node FN_Prelude_46_95_46negate[];
extern Node FN_Prelude_46_95_46_42[];
extern Node FN_Prelude_46_95_46_43[];
extern Node FN_Prelude_46_95_46_45[];
extern Node FN_Prelude_46Enum_46Prelude_46Int_46enumFromThen[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46Enum_46Prelude_46Int_46enumFrom[];
extern Node FN_Prelude_46_95_46enumFromThenTo[];
extern Node CF_Prelude_46Enum_46NHC_46Binary_46BinPtr[];
extern Node FN_Prelude_46_95_46enumFromTo[];
extern Node FN_Prelude_46_95_46succ[];
extern Node FN_Prelude_46_95_46pred[];
extern Node FN_Prelude_46showString[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_60[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46showChar[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46Show_46Prelude_46Int_46showsPrec[];
extern Node FN_Prelude_46showParen[];
extern Node FN_Prelude_46_95_46show[];
extern Node CF_Prelude_46Show_46NHC_46Binary_46BinPtr[];
extern Node FN_Prelude_46_95_46showList[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46NHC_46Binary_46BinPtr[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46NHC_46Binary_46BinPtr[];

static Node startLabel[] = {
  42
, bytes2word(0,0,0,0)
, useLabel(CT_v571)
,};
Node FN_NHC_46Binary_46int2BinPtr[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v571: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46Binary_46int2BinPtr[] = {
  VAPTAG(useLabel(FN_NHC_46Binary_46int2BinPtr))
, useLabel(F0_NHC_46Internal_46_95id)
, bytes2word(1,0,0,1)
, useLabel(CT_v572)
,};
Node FN_NHC_46Binary_46binPtr2Int[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v572: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46Binary_46binPtr2Int[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46binPtr2Int),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v573)
,};
Node FN_Prelude_46Num_46NHC_46Binary_46BinPtr_46fromInteger[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v573: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46Binary_46BinPtr_46fromInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46Binary_46BinPtr_46fromInteger),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46fromInteger))
, bytes2word(1,0,0,1)
, useLabel(CT_v574)
,};
Node FN_Prelude_46Num_46NHC_46Binary_46BinPtr_46signum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v574: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46Binary_46BinPtr_46signum[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46Binary_46BinPtr_46signum),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46signum))
, useLabel(CF_Prelude_46Num_46NHC_46Binary_46BinPtr)
, bytes2word(1,0,0,1)
, useLabel(CT_v575)
,};
Node FN_Prelude_46Num_46NHC_46Binary_46BinPtr_46abs[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v575: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46Binary_46BinPtr_46abs[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46Binary_46BinPtr_46abs),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46abs))
, useLabel(CF_Prelude_46Num_46NHC_46Binary_46BinPtr)
, bytes2word(1,0,0,1)
, useLabel(CT_v576)
,};
Node FN_Prelude_46Num_46NHC_46Binary_46BinPtr_46negate[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v576: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Num_46NHC_46Binary_46BinPtr_46negate[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46Binary_46BinPtr_46negate),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46negate))
, useLabel(CF_Prelude_46Num_46NHC_46Binary_46BinPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v577)
,};
Node FN_Prelude_46Num_46NHC_46Binary_46BinPtr_46_42[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v577: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Num_46NHC_46Binary_46BinPtr_46_42[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46Binary_46BinPtr_46_42),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_42))
, useLabel(CF_Prelude_46Num_46NHC_46Binary_46BinPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v578)
,};
Node FN_Prelude_46Num_46NHC_46Binary_46BinPtr_46_43[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v578: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Num_46NHC_46Binary_46BinPtr_46_43[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46Binary_46BinPtr_46_43),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_43))
, useLabel(CF_Prelude_46Num_46NHC_46Binary_46BinPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v579)
,};
Node FN_Prelude_46Num_46NHC_46Binary_46BinPtr_46_45[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v579: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Num_46NHC_46Binary_46BinPtr_46_45[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46NHC_46Binary_46BinPtr_46_45),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_45))
, useLabel(CF_Prelude_46Num_46NHC_46Binary_46BinPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v580)
,};
Node FN_NHC_46Binary_46unsafeShiftBinPtr[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,ADD_W,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v580: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_NHC_46Binary_46unsafeShiftBinPtr[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46unsafeShiftBinPtr),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v581)
,};
Node FN_NHC_46Binary_46sizeofBinPtr[] = {
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,32,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v581: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_NHC_46Binary_46sizeofBinPtr[] = {
  VAPTAG(useLabel(FN_NHC_46Binary_46sizeofBinPtr))
, bytes2word(0,0,0,0)
, useLabel(CT_v582)
,};
Node FN_NHC_46Binary_46incBinPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v582: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46Binary_46incBinPtr[] = {
  VAPTAG(useLabel(FN_NHC_46Binary_46incBinPtr))
, CAPTAG(useLabel(FN_NHC_46Binary_46unsafeShiftBinPtr),1)
, useLabel(CF_NHC_46Binary_46sizeofBinPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v583)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46enumFromThen[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v583: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinPtr_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46enumFromThen),2)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Int_46enumFromThen))
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_NHC_46Internal_46_95id)
, bytes2word(1,0,0,1)
, useLabel(CT_v584)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46enumFrom[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v584: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinPtr_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46enumFrom),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Int_46enumFrom))
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_NHC_46Internal_46_95id)
, bytes2word(1,0,0,1)
, useLabel(CT_v585)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46toEnum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v585: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinPtr_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46toEnum),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v586)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46fromEnum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v586: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinPtr_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46fromEnum),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v587)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v587: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinPtr_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46NHC_46Binary_46BinPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v588)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v588: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinPtr_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46NHC_46Binary_46BinPtr)
, bytes2word(1,0,0,1)
, useLabel(CT_v589)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46succ[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v589: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinPtr_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46succ),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46succ))
, useLabel(CF_Prelude_46Enum_46NHC_46Binary_46BinPtr)
, bytes2word(1,0,0,1)
, useLabel(CT_v590)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46pred[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v590: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46NHC_46Binary_46BinPtr_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46pred),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46pred))
, useLabel(CF_Prelude_46Enum_46NHC_46Binary_46BinPtr)
, bytes2word(1,0,0,1)
, useLabel(CT_v591)
,};
Node FN_Prelude_46Show_46NHC_46Binary_46BinPtr_46showsType[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v591: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46Binary_46BinPtr_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46Binary_46BinPtr_46showsType),1)
, useLabel(CF_LAMBDA568)
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(0,0,0,0)
, useLabel(CT_v593)
,	/* FN_LAMBDA568: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v592)
,	/* CT_v593: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA568: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA568))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v594)
,};
Node FN_Prelude_46Show_46NHC_46Binary_46BinPtr_46showsPrec[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_INT_P1,9)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,2)
, bytes2word(HEAP_CHAR_P1,32,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_INT_P1,10)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(22,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v594: (byte 0) */
  HW(8,2)
, 0
,};
Node F0_Prelude_46Show_46NHC_46Binary_46BinPtr_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46Binary_46BinPtr_46showsPrec),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_60))
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA569))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Int_46showsPrec))
, VAPTAG(useLabel(FN_Prelude_46showParen))
, bytes2word(0,0,0,0)
, useLabel(CT_v596)
,	/* FN_LAMBDA569: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v595)
,	/* CT_v596: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA569: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA569))
, bytes2word(1,0,0,1)
, useLabel(CT_v597)
,};
Node FN_Prelude_46Show_46NHC_46Binary_46BinPtr_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v597: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46Binary_46BinPtr_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46Binary_46BinPtr_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46NHC_46Binary_46BinPtr)
, bytes2word(1,0,0,1)
, useLabel(CT_v598)
,};
Node FN_Prelude_46Show_46NHC_46Binary_46BinPtr_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v598: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46Binary_46BinPtr_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46Binary_46BinPtr_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46NHC_46Binary_46BinPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v599)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinPtr_46compare[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v599: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinPtr_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinPtr_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v600)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinPtr_46_60_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,LE_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v600: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinPtr_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinPtr_46_60_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v601)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinPtr_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v601: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinPtr_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinPtr_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46NHC_46Binary_46BinPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v602)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinPtr_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v602: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinPtr_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinPtr_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46NHC_46Binary_46BinPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v603)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinPtr_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v603: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinPtr_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinPtr_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46NHC_46Binary_46BinPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v604)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinPtr_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v604: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinPtr_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinPtr_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46NHC_46Binary_46BinPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v605)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinPtr_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v605: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46Binary_46BinPtr_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinPtr_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46NHC_46Binary_46BinPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v606)
,};
Node FN_Prelude_46Eq_46NHC_46Binary_46BinPtr_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,EQ_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v606: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46Binary_46BinPtr_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46Binary_46BinPtr_46_61_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v607)
,};
Node FN_Prelude_46Eq_46NHC_46Binary_46BinPtr_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v607: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46Binary_46BinPtr_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46Binary_46BinPtr_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46NHC_46Binary_46BinPtr)
, bytes2word(0,0,0,0)
, useLabel(CT_v608)
,};
Node FN_Prelude_46Eq_46NHC_46Binary_46BinPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v608: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46NHC_46Binary_46BinPtr[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46Binary_46BinPtr))
, useLabel(F0_Prelude_46Eq_46NHC_46Binary_46BinPtr_46_47_61)
, useLabel(F0_Prelude_46Eq_46NHC_46Binary_46BinPtr_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v609)
,};
Node FN_Prelude_46Ord_46NHC_46Binary_46BinPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v609: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46NHC_46Binary_46BinPtr[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46Binary_46BinPtr))
, useLabel(CF_Prelude_46Eq_46NHC_46Binary_46BinPtr)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinPtr_46_60)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinPtr_46_60_61)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinPtr_46_62_61)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinPtr_46_62)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinPtr_46compare)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinPtr_46min)
, useLabel(F0_Prelude_46Ord_46NHC_46Binary_46BinPtr_46max)
, bytes2word(0,0,0,0)
, useLabel(CT_v610)
,};
Node FN_Prelude_46Show_46NHC_46Binary_46BinPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v610: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46NHC_46Binary_46BinPtr[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46NHC_46Binary_46BinPtr))
, useLabel(F0_Prelude_46Show_46NHC_46Binary_46BinPtr_46showsPrec)
, useLabel(F0_Prelude_46Show_46NHC_46Binary_46BinPtr_46showsType)
, useLabel(F0_Prelude_46Show_46NHC_46Binary_46BinPtr_46showList)
, useLabel(F0_Prelude_46Show_46NHC_46Binary_46BinPtr_46show)
, bytes2word(0,0,0,0)
, useLabel(CT_v611)
,};
Node FN_Prelude_46Enum_46NHC_46Binary_46BinPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v611: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Enum_46NHC_46Binary_46BinPtr[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinPtr))
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinPtr_46succ)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinPtr_46pred)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinPtr_46enumFrom)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinPtr_46fromEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinPtr_46toEnum)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinPtr_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinPtr_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46NHC_46Binary_46BinPtr_46enumFromThenTo)
, bytes2word(0,0,0,0)
, useLabel(CT_v612)
,};
Node FN_Prelude_46Num_46NHC_46Binary_46BinPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
,	/* CT_v612: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_Prelude_46Num_46NHC_46Binary_46BinPtr[] = {
  VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46Binary_46BinPtr))
, useLabel(CF_Prelude_46Eq_46NHC_46Binary_46BinPtr)
, useLabel(CF_Prelude_46Show_46NHC_46Binary_46BinPtr)
, useLabel(F0_Prelude_46Num_46NHC_46Binary_46BinPtr_46_42)
, useLabel(F0_Prelude_46Num_46NHC_46Binary_46BinPtr_46_43)
, useLabel(F0_Prelude_46Num_46NHC_46Binary_46BinPtr_46_45)
, useLabel(F0_Prelude_46Num_46NHC_46Binary_46BinPtr_46negate)
, useLabel(F0_Prelude_46Num_46NHC_46Binary_46BinPtr_46signum)
, useLabel(F0_Prelude_46Num_46NHC_46Binary_46BinPtr_46fromInteger)
, useLabel(F0_Prelude_46Num_46NHC_46Binary_46BinPtr_46abs)
,	/* ST_v595: (byte 0) */
 	/* ST_v592: (byte 3) */
  bytes2word(66,80,0,66)
, bytes2word(105,110,80,116)
, bytes2word(114,0,0,0)
,};
