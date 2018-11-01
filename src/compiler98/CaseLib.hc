#include "newmacros.h"
#include "runtime.h"

#define v1461	((void*)startLabel+36)
#define v1459	((void*)startLabel+40)
#define v1456	((void*)startLabel+53)
#define CT_v1462	((void*)startLabel+76)
#define FN_LAMBDA1447	((void*)startLabel+112)
#define CT_v1464	((void*)startLabel+132)
#define CF_LAMBDA1447	((void*)startLabel+140)
#define CT_v1468	((void*)startLabel+184)
#define CT_v1475	((void*)startLabel+252)
#define CT_v1482	((void*)startLabel+324)
#define CT_v1486	((void*)startLabel+384)
#define CT_v1490	((void*)startLabel+452)
#define v1494	((void*)startLabel+510)
#define v1497	((void*)startLabel+560)
#define CT_v1501	((void*)startLabel+592)
#define CT_v1505	((void*)startLabel+700)
#define FN_LAMBDA1448	((void*)startLabel+732)
#define CT_v1506	((void*)startLabel+748)
#define F0_LAMBDA1448	((void*)startLabel+756)
#define v1510	((void*)startLabel+826)
#define v1511	((void*)startLabel+840)
#define CT_v1514	((void*)startLabel+872)
#define CT_v1518	((void*)startLabel+932)
#define CT_v1522	((void*)startLabel+984)
#define v1539	((void*)startLabel+1056)
#define v1528	((void*)startLabel+1060)
#define v1532	((void*)startLabel+1076)
#define v1533	((void*)startLabel+1195)
#define v1541	((void*)startLabel+1210)
#define v1537	((void*)startLabel+1214)
#define v1534	((void*)startLabel+1222)
#define v1529	((void*)startLabel+1227)
#define v1525	((void*)startLabel+1235)
#define CT_v1542	((void*)startLabel+1280)
#define FN_LAMBDA1451	((void*)startLabel+1360)
#define CT_v1544	((void*)startLabel+1380)
#define CF_LAMBDA1451	((void*)startLabel+1388)
#define FN_LAMBDA1450	((void*)startLabel+1400)
#define CT_v1546	((void*)startLabel+1420)
#define CF_LAMBDA1450	((void*)startLabel+1428)
#define FN_LAMBDA1449	((void*)startLabel+1444)
#define CT_v1547	((void*)startLabel+1476)
#define F0_LAMBDA1449	((void*)startLabel+1484)
#define v1556	((void*)startLabel+1552)
#define v1560	((void*)startLabel+1590)
#define v1552	((void*)startLabel+1595)
#define v1548	((void*)startLabel+1600)
#define CT_v1565	((void*)startLabel+1640)
#define FN_LAMBDA1452	((void*)startLabel+1692)
#define CT_v1567	((void*)startLabel+1712)
#define CF_LAMBDA1452	((void*)startLabel+1720)
#define CT_v1571	((void*)startLabel+1764)
#define CT_v1575	((void*)startLabel+1816)
#define CT_v1579	((void*)startLabel+1868)
#define CT_v1583	((void*)startLabel+1920)
#define CT_v1587	((void*)startLabel+1972)
#define CT_v1591	((void*)startLabel+2024)
#define ST_v1463	((void*)startLabel+2036)
#define ST_v1543	((void*)startLabel+2105)
#define ST_v1545	((void*)startLabel+2172)
#define ST_v1566	((void*)startLabel+2239)
extern Node FN_IntState_46lookupIS[];
extern Node FN_Info_46arityVI[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_IntState_46uniqueISs[];
extern Node FN_IntState_46uniqueIS[];
extern Node FN_IntState_46addError[];
extern Node FN_Info_46uniqueI[];
extern Node FN_IntState_46addIS[];
extern Node FN_Data_46Map_46lookup[];
extern Node CF_Prelude_46Ord_46TokenId_46TokenId[];
extern Node FN_Data_46Map_46insert[];
extern Node FN_Prelude_46foldr[];
extern Node CF_Prelude_46Ord_46Id_46Id[];
extern Node FN_Prelude_46Enum_46Id_46Id_46toEnum[];
extern Node FN_NT_46mkNTvar[];
extern Node CF_TokenId_46tRatio[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Info_46constrsI[];
extern Node FN_NT_46mkNTcons[];
extern Node CF_TokenId_46tRatioCon[];
extern Node FN_IntState_46updateIS[];
extern Node FN_Info_46updConstrsI[];
extern Node FN_Prelude_46Eq_46Building_46Compiler_46_61_61[];
extern Node CF_Building_46compiler[];
extern Node CF_Util_46Extra_46noPos[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1462)
,};
Node FN_CaseLib_46caseArity[] = {
  bytes2word(ZAP_ARG_I2,NEEDSTACK_I16,PUSH_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_I1,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v1461: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v1459: (byte 4) */
  bytes2word(POP_I1,JUMP,15,0)
, bytes2word(UNPACK,1,HEAP_CVAL_I4,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,3)
,	/* v1456: (byte 1) */
  bytes2word(RETURN,HEAP_CVAL_I5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1462: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_CaseLib_46caseArity[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseArity),3)
, VAPTAG(useLabel(FN_IntState_46lookupIS))
, VAPTAG(useLabel(FN_Info_46arityVI))
, VAPTAG(useLabel(FN_LAMBDA1447))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v1464)
,	/* FN_LAMBDA1447: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1463)
,	/* CT_v1464: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1447: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1447))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1468)
,};
Node FN_CaseLib_46caseState[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I1,HEAP_ARG)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1468: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_CaseLib_46caseState[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseState),2)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1475)
,};
Node FN_CaseLib_46caseUniques[] = {
  bytes2word(ZAP_ARG_I2,NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_I1,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,1,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I1,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_I1)
, bytes2word(HEAP_OFF_N1,5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1475: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_CaseLib_46caseUniques[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseUniques),3)
, VAPTAG(useLabel(FN_IntState_46uniqueISs))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1482)
,};
Node FN_CaseLib_46caseUnique[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_I1,ZAP_STACK_P1,1)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,2)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I1,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I1,HEAP_OFF_N1,5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1482: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_CaseLib_46caseUnique[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseUnique),2)
, VAPTAG(useLabel(FN_IntState_46uniqueIS))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1486)
,};
Node FN_CaseLib_46caseError[] = {
  bytes2word(ZAP_ARG_I2,NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_P1,0,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
, bytes2word(4,HEAP_I2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1486: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_CaseLib_46caseError[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseError),3)
, VAPTAG(useLabel(FN_IntState_46addError))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1490)
,};
Node FN_CaseLib_46caseAdd[] = {
  bytes2word(ZAP_ARG_I2,NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_P1,0,HEAP_ARG,1)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,5,HEAP_P1,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1490: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_CaseLib_46caseAdd[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseAdd),3)
, VAPTAG(useLabel(FN_Info_46uniqueI))
, VAPTAG(useLabel(FN_IntState_46addIS))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1501)
,};
Node FN_CaseLib_46caseTuple[] = {
  bytes2word(ZAP_ARG_I2,NEEDSTACK_I16,PUSH_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_I1)
, bytes2word(HEAP_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1494: (byte 2) */
  bytes2word(TOP(54),BOT(54),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_I2,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,2)
, bytes2word(HEAP_CVAL_N1,2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_I1,HEAP_P1,3,HEAP_ARG)
, bytes2word(1,HEAP_P1,3,HEAP_OFF_N1)
, bytes2word(6,HEAP_CVAL_P1,6,HEAP_I1)
, bytes2word(HEAP_P1,0,HEAP_I2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_I4,HEAP_P1,3)
, bytes2word(HEAP_I1,HEAP_P1,5,HEAP_CVAL_N1)
, bytes2word(4,HEAP_OFF_N1,10,HEAP_OFF_N1)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_N1,4)
,	/* v1497: (byte 4) */
  bytes2word(HEAP_I2,HEAP_OFF_N1,5,RETURN)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(4,HEAP_I1,HEAP_ARG,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(12,5,0)
, CONSTR(0,0,0)
, CONSTR(0,1,0)
,	/* CT_v1501: (byte 0) */
  HW(5,3)
, 0
,};
Node F0_CaseLib_46caseTuple[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseTuple),3)
, VAPTAG(useLabel(FN_Data_46Map_46lookup))
, useLabel(CF_Prelude_46Ord_46TokenId_46TokenId)
, VAPTAG(useLabel(FN_IntState_46uniqueIS))
, VAPTAG(useLabel(FN_IntState_46addIS))
, VAPTAG(useLabel(FN_Data_46Map_46insert))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1505)
,};
Node FN_CaseLib_46caseTranslate[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,11,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,10,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,0)
, bytes2word(HEAP_I1,HEAP_I2,HEAP_P1,3)
, bytes2word(HEAP_P1,4,HEAP_P1,5)
, bytes2word(HEAP_P1,6,HEAP_P1,7)
, bytes2word(HEAP_P1,8,HEAP_P1,9)
, bytes2word(HEAP_OFF_N1,15,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,13,HEAP_ARG)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(0,11,0)
,	/* CT_v1505: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_CaseLib_46caseTranslate[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseTranslate),4)
, CAPTAG(useLabel(FN_LAMBDA1448),2)
, VAPTAG(useLabel(FN_Prelude_46foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1506)
,	/* FN_LAMBDA1448: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,2,1,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1506: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA1448: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1448),3)
, VAPTAG(useLabel(FN_Data_46Map_46insert))
, useLabel(CF_Prelude_46Ord_46Id_46Id)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1514)
,};
Node FN_CaseLib_46caseIdent[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,11,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_P1)
, bytes2word(11,ZAP_STACK_P1,11,ZAP_STACK_P1)
, bytes2word(10,ZAP_STACK_P1,9,ZAP_STACK_P1)
, bytes2word(8,ZAP_STACK_P1,7,ZAP_STACK_P1)
, bytes2word(6,ZAP_STACK_P1,5,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v1510: (byte 2) */
  bytes2word(TOP(18),BOT(18),POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_OFF_N1)
,	/* v1511: (byte 4) */
  bytes2word(4,HEAP_ARG,4,RETURN)
, bytes2word(UNPACK,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(8,2,0)
,	/* CT_v1514: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_CaseLib_46caseIdent[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseIdent),4)
, VAPTAG(useLabel(FN_Data_46Map_46lookup))
, useLabel(CF_Prelude_46Ord_46Id_46Id)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1518)
,};
Node FN_CaseLib_46caseEqualNumEq[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,11,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I1,HEAP_ARG,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1518: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_CaseLib_46caseEqualNumEq[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseEqualNumEq),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1522)
,};
Node FN_CaseLib_46caseUndef[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,11,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,9,HEAP_ARG)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1522: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_CaseLib_46caseUndef[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseUndef),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1542)
,};
Node FN_CaseLib_46addRatioCon[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I4,HEAP_INT_P1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_N1,1,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_P1)
, bytes2word(4,HEAP_I1,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v1539: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v1528: (byte 4) */
  bytes2word(POP_I1,JUMP,177,0)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_I1,EVAL,NEEDHEAP_P1)
, bytes2word(66,TABLESWITCH,2,NOP)
,	/* v1532: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(123),BOT(123))
, bytes2word(POP_I1,HEAP_CVAL_IN3,HEAP_CVAL_N1,4)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,2)
, bytes2word(HEAP_INT_P1,7,HEAP_CVAL_I4,HEAP_INT_P1)
, bytes2word(1,HEAP_CVAL_IN3,HEAP_CVAL_N1,5)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_IN3,HEAP_CVAL_IN3,HEAP_CVAL_IN3,HEAP_CVAL_N1)
, bytes2word(5,HEAP_I2,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,10,HEAP_I1,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_IN3,HEAP_CVAL_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_N1,5,HEAP_I2,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_N1,5,HEAP_I2)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_N1,6)
, bytes2word(HEAP_OFF_N1,23,HEAP_OFF_N1,21)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,7)
, bytes2word(HEAP_CVAL_IN3,HEAP_CVAL_IN3,HEAP_CVAL_IN3,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_N1,5,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_CVAL_N1)
, bytes2word(7,HEAP_P1,3,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,47,HEAP_OFF_N1)
, bytes2word(46,HEAP_OFF_N1,19,HEAP_OFF_N1)
, bytes2word(9,HEAP_I1,HEAP_CVAL_P1,12)
, bytes2word(HEAP_P1,0,HEAP_P1,3)
, bytes2word(HEAP_CVAL_P1,13,HEAP_P1,4)
, bytes2word(HEAP_I1,HEAP_OFF_N1,6,HEAP_CVAL_P1)
, bytes2word(14,HEAP_P1,3,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_P1,4)
,	/* v1533: (byte 3) */
  bytes2word(HEAP_OFF_N1,6,RETURN,UNPACK)
, bytes2word(2,PUSH_I1,ZAP_STACK_P1,6)
, bytes2word(ZAP_STACK_P1,5,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v1541: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v1537: (byte 2) */
  bytes2word(10,0,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_I1,HEAP_P1)
,	/* v1534: (byte 2) */
  bytes2word(7,RETURN,POP_P1,2)
,	/* v1529: (byte 3) */
  bytes2word(JUMP,2,0,HEAP_CVAL_P1)
, bytes2word(15,PUSH_HEAP,HEAP_CVAL_P1,16)
,	/* v1525: (byte 3) */
  bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,HEAP_CVAL_P1)
, bytes2word(17,PUSH_HEAP,HEAP_CVAL_P1,16)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(6,7,0)
, CONSTR(1,4,0)
, CONSTR(1,2,0)
, CONSTR(1,0,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
, CONSTR(5,0,0)
,	/* CT_v1542: (byte 0) */
  HW(15,2)
, 0
,};
Node F0_CaseLib_46addRatioCon[] = {
  CAPTAG(useLabel(FN_CaseLib_46addRatioCon),2)
, VAPTAG(useLabel(FN_IntState_46uniqueIS))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Id_46Id_46toEnum))
, VAPTAG(useLabel(FN_NT_46mkNTvar))
, useLabel(CF_TokenId_46tRatio)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_IntState_46lookupIS))
, VAPTAG(useLabel(FN_Info_46constrsI))
, VAPTAG(useLabel(FN_NT_46mkNTcons))
, useLabel(CF_TokenId_46tRatioCon)
, CAPTAG(useLabel(FN_LAMBDA1449),1)
, VAPTAG(useLabel(FN_IntState_46updateIS))
, VAPTAG(useLabel(FN_IntState_46addIS))
, VAPTAG(useLabel(FN_LAMBDA1450))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, VAPTAG(useLabel(FN_LAMBDA1451))
, bytes2word(0,0,0,0)
, useLabel(CT_v1544)
,	/* FN_LAMBDA1451: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1543)
,	/* CT_v1544: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1451: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1451))
, bytes2word(0,0,0,0)
, useLabel(CT_v1546)
,	/* FN_LAMBDA1450: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1545)
,	/* CT_v1546: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1450: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1450))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1547)
,	/* FN_LAMBDA1449: (byte 0) */
  bytes2word(ZAP_ARG_I3,NEEDHEAP_I32,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v1547: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA1449: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1449),3)
, VAPTAG(useLabel(FN_Info_46updConstrsI))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1565)
,};
Node FN_CaseLib_46caseRatioCon[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(11,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(28,0,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_P1,10,HEAP_I1,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CVAL_P1,6,HEAP_P1)
, bytes2word(0,HEAP_CVAL_IN3,HEAP_I1,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1)
,	/* v1556: (byte 4) */
  bytes2word(7,HEAP_OFF_N1,5,RETURN)
, bytes2word(HEAP_CVAL_N1,4,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,28,0)
, bytes2word(HEAP_CVAL_N1,5,HEAP_CVAL_IN3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_P1,9,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_I1,HEAP_ARG)
,	/* v1560: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v1552: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v1548: (byte 4) */
  bytes2word(11,JUMP,2,0)
, bytes2word(HEAP_CVAL_P1,9,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(4,0,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
, CONSTR(9,2,0)
, CONSTR(1,0,0)
,	/* CT_v1565: (byte 0) */
  HW(8,2)
, 0
,};
Node F0_CaseLib_46caseRatioCon[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseRatioCon),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Building_46Compiler_46_61_61))
, useLabel(CF_Building_46compiler)
, VAPTAG(useLabel(FN_CaseLib_46addRatioCon))
, useLabel(CF_Util_46Extra_46noPos)
, useLabel(CF_TokenId_46tRatioCon)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA1452))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v1567)
,	/* FN_LAMBDA1452: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1566)
,	/* CT_v1567: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1452: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1452))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1571)
,};
Node FN_CaseLib_46caseTrue[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,11,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,5,HEAP_ARG)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1571: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_CaseLib_46caseTrue[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseTrue),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1575)
,};
Node FN_CaseLib_46caseEqDouble[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,11,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,4,HEAP_ARG)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1575: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_CaseLib_46caseEqDouble[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseEqDouble),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1579)
,};
Node FN_CaseLib_46caseEqFloat[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,11,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,3,HEAP_ARG)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1579: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_CaseLib_46caseEqFloat[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseEqFloat),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1583)
,};
Node FN_CaseLib_46caseEqInteger[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,11,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I2,HEAP_ARG,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1583: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_CaseLib_46caseEqInteger[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseEqInteger),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1587)
,};
Node FN_CaseLib_46caseList[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,11,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,6,HEAP_ARG)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1587: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_CaseLib_46caseList[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseList),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1591)
,};
Node FN_CaseLib_46caseTidFun[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,11,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,8,HEAP_ARG)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1591: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_CaseLib_46caseTidFun[] = {
  CAPTAG(useLabel(FN_CaseLib_46caseTidFun),2)
,	/* ST_v1463: (byte 0) */
  bytes2word(67,97,115,101)
, bytes2word(76,105,98,58)
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
, bytes2word(97,116,32,49)
, bytes2word(51,52,58,51)
, bytes2word(45,49,51,53)
, bytes2word(58,51,52,46)
,	/* ST_v1543: (byte 1) */
  bytes2word(0,67,97,115)
, bytes2word(101,76,105,98)
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
, bytes2word(52,52,58,53)
, bytes2word(45,53,49,58)
,	/* ST_v1545: (byte 4) */
  bytes2word(55,54,46,0)
, bytes2word(67,97,115,101)
, bytes2word(76,105,98,58)
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
, bytes2word(97,116,32,52)
, bytes2word(54,58,55,45)
, bytes2word(53,49,58,55)
,	/* ST_v1566: (byte 3) */
  bytes2word(54,46,0,67)
, bytes2word(97,115,101,76)
, bytes2word(105,98,58,32)
, bytes2word(80,97,116,116)
, bytes2word(101,114,110,32)
, bytes2word(109,97,116,99)
, bytes2word(104,32,102,97)
, bytes2word(105,108,117,114)
, bytes2word(101,32,105,110)
, bytes2word(32,102,117,110)
, bytes2word(99,116,105,111)
, bytes2word(110,32,97,116)
, bytes2word(32,55,53,58)
, bytes2word(49,45,56,50)
, bytes2word(58,50,50,46)
, bytes2word(0,0,0,0)
,};
