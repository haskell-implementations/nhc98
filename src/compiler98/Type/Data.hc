#include "newmacros.h"
#include "runtime.h"

#define v595	((void*)startLabel+48)
#define v596	((void*)startLabel+53)
#define v597	((void*)startLabel+60)
#define CT_v601	((void*)startLabel+80)
#define CT_v608	((void*)startLabel+160)
#define CT_v609	((void*)startLabel+216)
#define CT_v610	((void*)startLabel+260)
#define CT_v611	((void*)startLabel+304)
#define CT_v612	((void*)startLabel+348)
#define CT_v613	((void*)startLabel+392)
#define CT_v620	((void*)startLabel+460)
#define CT_v621	((void*)startLabel+508)
#define CT_v622	((void*)startLabel+552)
#define FN_LAMBDA587	((void*)startLabel+580)
#define CT_v624	((void*)startLabel+600)
#define CF_LAMBDA587	((void*)startLabel+608)
#define CT_v628	((void*)startLabel+744)
#define FN_LAMBDA588	((void*)startLabel+816)
#define CT_v629	((void*)startLabel+836)
#define CF_LAMBDA588	((void*)startLabel+844)
#define CT_v630	((void*)startLabel+868)
#define CT_v631	((void*)startLabel+908)
#define CT_v632	((void*)startLabel+960)
#define CT_v633	((void*)startLabel+1016)
#define CT_v634	((void*)startLabel+1076)
#define ST_v623	((void*)startLabel+1120)
extern Node FN_Prelude_46Ord_46Id_46Id_46compare[];
extern Node FN_Prelude_46Ord_46NT_46NT_46compare[];
extern Node FN_Prelude_46Ord_46Id_46Id_46_60[];
extern Node FN_Prelude_46Eq_46Id_46Id_46_61_61[];
extern Node FN_Prelude_46Ord_46NT_46NT_46_60_61[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46_124_124[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46Type_46Data_46TypeDict[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46Eq_46NT_46NT_46_61_61[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46Type_46Data_46TypeDict[];
extern Node FN_Prelude_46showString[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_60[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46showChar[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46Show_46Id_46Id_46showsPrec[];
extern Node FN_Prelude_46Show_46NT_46NT_46showsPrec[];
extern Node FN_Prelude_46Show_46Prelude_462[];
extern Node CF_Prelude_46Show_46Id_46Id[];
extern Node CF_Prelude_46Show_46Util_46Extra_46Pos[];
extern Node FN_Prelude_46Show_46Prelude_46_91_93_46showsPrec[];
extern Node FN_Prelude_46showParen[];
extern Node FN_Prelude_46_95_46show[];
extern Node CF_Prelude_46Show_46Type_46Data_46TypeDict[];
extern Node FN_Prelude_46_95_46showList[];

static Node startLabel[] = {
  42
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v601)
,};
Node FN_Prelude_46Ord_46Type_46Data_46TypeDict_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(3,PUSH_ZAP_ARG_I2,ZAP_STACK_P1,3)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_P1,4)
, bytes2word(HEAP_I1,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v595: (byte 4) */
  bytes2word(TOP(11),BOT(11),TOP(18),BOT(18))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v596: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_I4)
,	/* v597: (byte 4) */
  bytes2word(HEAP_P1,5,HEAP_I2,RETURN_EVAL)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(2,0,0)
, CONSTR(0,0,0)
,	/* CT_v601: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Type_46Data_46TypeDict_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Type_46Data_46TypeDict_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Id_46Id_46compare))
, VAPTAG(useLabel(FN_Prelude_46Ord_46NT_46NT_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v608)
,};
Node FN_Prelude_46Ord_46Type_46Data_46TypeDict_46_60_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(3,PUSH_ZAP_ARG_I2,ZAP_STACK_P1,3)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,3)
, bytes2word(HEAP_CVAL_I3,HEAP_P1,3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_P1,3)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I5,HEAP_P1)
, bytes2word(4,HEAP_I1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(13,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v608: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Prelude_46Ord_46Type_46Data_46TypeDict_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Type_46Data_46TypeDict_46_60_61),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Id_46Id_46_60))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Id_46Id_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46Ord_46NT_46NT_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v609)
,};
Node FN_Prelude_46Ord_46Type_46Data_46TypeDict_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v609: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Type_46Data_46TypeDict_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Type_46Data_46TypeDict_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46Type_46Data_46TypeDict)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v610)
,};
Node FN_Prelude_46Ord_46Type_46Data_46TypeDict_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v610: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Type_46Data_46TypeDict_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Type_46Data_46TypeDict_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46Type_46Data_46TypeDict)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v611)
,};
Node FN_Prelude_46Ord_46Type_46Data_46TypeDict_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v611: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Type_46Data_46TypeDict_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Type_46Data_46TypeDict_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46Type_46Data_46TypeDict)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v612)
,};
Node FN_Prelude_46Ord_46Type_46Data_46TypeDict_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v612: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Type_46Data_46TypeDict_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Type_46Data_46TypeDict_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46Type_46Data_46TypeDict)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v613)
,};
Node FN_Prelude_46Ord_46Type_46Data_46TypeDict_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v613: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Type_46Data_46TypeDict_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Type_46Data_46TypeDict_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46Type_46Data_46TypeDict)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v620)
,};
Node FN_Prelude_46Eq_46Type_46Data_46TypeDict_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(3,PUSH_ZAP_ARG_I2,ZAP_STACK_P1,3)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,3)
, bytes2word(HEAP_CVAL_I3,HEAP_P1,3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_P1,4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v620: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46Eq_46Type_46Data_46TypeDict_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Type_46Data_46TypeDict_46_61_61),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Id_46Id_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46Eq_46NT_46NT_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v621)
,};
Node FN_Prelude_46Eq_46Type_46Data_46TypeDict_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v621: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46Type_46Data_46TypeDict_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Type_46Data_46TypeDict_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46Type_46Data_46TypeDict)
, bytes2word(1,0,0,1)
, useLabel(CT_v622)
,};
Node FN_Prelude_46Show_46Type_46Data_46TypeDict_46showsType[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v622: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Type_46Data_46TypeDict_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Type_46Data_46TypeDict_46showsType),1)
, useLabel(CF_LAMBDA587)
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(0,0,0,0)
, useLabel(CT_v624)
,	/* FN_LAMBDA587: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v623)
,	/* CT_v624: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA587: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA587))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v628)
,};
Node FN_Prelude_46Show_46Type_46Data_46TypeDict_46showsPrec[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_P1)
, bytes2word(54,UNPACK,3,HEAP_CVAL_I3)
, bytes2word(HEAP_INT_P1,9,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,2,HEAP_CHAR_P1,32)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,9)
, bytes2word(HEAP_INT_P1,10,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,2)
, bytes2word(HEAP_CHAR_P1,32,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,10,HEAP_INT_P1,10)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(2,HEAP_CHAR_P1,32,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,HEAP_OFF_N1,4,HEAP_INT_P1)
, bytes2word(10,HEAP_I2,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,15,HEAP_OFF_N1)
, bytes2word(52,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v628: (byte 0) */
  HW(13,2)
, 0
,};
Node F0_Prelude_46Show_46Type_46Data_46TypeDict_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Type_46Data_46TypeDict_46showsPrec),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_60))
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA588))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Prelude_46Show_46Id_46Id_46showsPrec))
, VAPTAG(useLabel(FN_Prelude_46Show_46NT_46NT_46showsPrec))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462))
, useLabel(CF_Prelude_46Show_46Id_46Id)
, useLabel(CF_Prelude_46Show_46Util_46Extra_46Pos)
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46showsPrec))
, VAPTAG(useLabel(FN_Prelude_46showParen))
, bytes2word(0,0,0,0)
, useLabel(CT_v629)
,	/* FN_LAMBDA588: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v623)
,	/* CT_v629: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA588: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA588))
, bytes2word(1,0,0,1)
, useLabel(CT_v630)
,};
Node FN_Prelude_46Show_46Type_46Data_46TypeDict_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v630: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Type_46Data_46TypeDict_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Type_46Data_46TypeDict_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46Type_46Data_46TypeDict)
, bytes2word(1,0,0,1)
, useLabel(CT_v631)
,};
Node FN_Prelude_46Show_46Type_46Data_46TypeDict_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v631: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Type_46Data_46TypeDict_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Type_46Data_46TypeDict_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46Type_46Data_46TypeDict)
, bytes2word(0,0,0,0)
, useLabel(CT_v632)
,};
Node FN_Prelude_46Show_46Type_46Data_46TypeDict[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v632: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46Type_46Data_46TypeDict[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46Type_46Data_46TypeDict))
, useLabel(F0_Prelude_46Show_46Type_46Data_46TypeDict_46showsPrec)
, useLabel(F0_Prelude_46Show_46Type_46Data_46TypeDict_46showsType)
, useLabel(F0_Prelude_46Show_46Type_46Data_46TypeDict_46showList)
, useLabel(F0_Prelude_46Show_46Type_46Data_46TypeDict_46show)
, bytes2word(0,0,0,0)
, useLabel(CT_v633)
,};
Node FN_Prelude_46Eq_46Type_46Data_46TypeDict[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v633: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Type_46Data_46TypeDict[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Type_46Data_46TypeDict))
, useLabel(F0_Prelude_46Eq_46Type_46Data_46TypeDict_46_47_61)
, useLabel(F0_Prelude_46Eq_46Type_46Data_46TypeDict_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v634)
,};
Node FN_Prelude_46Ord_46Type_46Data_46TypeDict[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v634: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46Type_46Data_46TypeDict[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46Type_46Data_46TypeDict))
, useLabel(CF_Prelude_46Eq_46Type_46Data_46TypeDict)
, useLabel(F0_Prelude_46Ord_46Type_46Data_46TypeDict_46_60)
, useLabel(F0_Prelude_46Ord_46Type_46Data_46TypeDict_46_60_61)
, useLabel(F0_Prelude_46Ord_46Type_46Data_46TypeDict_46_62_61)
, useLabel(F0_Prelude_46Ord_46Type_46Data_46TypeDict_46_62)
, useLabel(F0_Prelude_46Ord_46Type_46Data_46TypeDict_46compare)
, useLabel(F0_Prelude_46Ord_46Type_46Data_46TypeDict_46min)
, useLabel(F0_Prelude_46Ord_46Type_46Data_46TypeDict_46max)
,	/* ST_v623: (byte 0) */
  bytes2word(84,121,112,101)
, bytes2word(68,105,99,116)
, bytes2word(0,0,0,0)
,};
