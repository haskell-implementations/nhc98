#include "newmacros.h"
#include "runtime.h"

#define v687	((void*)startLabel+40)
#define v688	((void*)startLabel+45)
#define v689	((void*)startLabel+51)
#define v690	((void*)startLabel+57)
#define v691	((void*)startLabel+68)
#define v692	((void*)startLabel+79)
#define v693	((void*)startLabel+90)
#define v694	((void*)startLabel+96)
#define v695	((void*)startLabel+102)
#define v696	((void*)startLabel+108)
#define v697	((void*)startLabel+114)
#define v698	((void*)startLabel+120)
#define v699	((void*)startLabel+126)
#define CT_v701	((void*)startLabel+152)
#define CT_v702	((void*)startLabel+188)
#define CT_v703	((void*)startLabel+240)
#define CT_v704	((void*)startLabel+400)
#define FN_LAMBDA683	((void*)startLabel+492)
#define CT_v706	((void*)startLabel+512)
#define CF_LAMBDA683	((void*)startLabel+520)
#define FN_LAMBDA682	((void*)startLabel+532)
#define CT_v707	((void*)startLabel+568)
#define F0_LAMBDA682	((void*)startLabel+576)
#define FN_LAMBDA681	((void*)startLabel+604)
#define CT_v714	((void*)startLabel+628)
#define F0_LAMBDA681	((void*)startLabel+636)
#define FN_LAMBDA680	((void*)startLabel+660)
#define CT_v721	((void*)startLabel+684)
#define F0_LAMBDA680	((void*)startLabel+692)
#define FN_LAMBDA679	((void*)startLabel+712)
#define CT_v722	((void*)startLabel+780)
#define F0_LAMBDA679	((void*)startLabel+788)
#define FN_LAMBDA678	((void*)startLabel+848)
#define CT_v724	((void*)startLabel+868)
#define CF_LAMBDA678	((void*)startLabel+876)
#define FN_LAMBDA677	((void*)startLabel+888)
#define CT_v726	((void*)startLabel+908)
#define CF_LAMBDA677	((void*)startLabel+916)
#define FN_LAMBDA676	((void*)startLabel+928)
#define CT_v728	((void*)startLabel+948)
#define CF_LAMBDA676	((void*)startLabel+956)
#define FN_LAMBDA675	((void*)startLabel+968)
#define CT_v730	((void*)startLabel+988)
#define CF_LAMBDA675	((void*)startLabel+996)
#define CT_v731	((void*)startLabel+1100)
#define FN_LAMBDA684	((void*)startLabel+1180)
#define CT_v732	((void*)startLabel+1200)
#define CF_LAMBDA684	((void*)startLabel+1208)
#define ST_v727	((void*)startLabel+1212)
#define ST_v723	((void*)startLabel+1215)
#define ST_v725	((void*)startLabel+1217)
#define ST_v705	((void*)startLabel+1220)
#define ST_v729	((void*)startLabel+1228)
extern Node FN_Prelude_46_46[];
extern Node F0_NHC_46PackedString_46unpackPS[];
extern Node F0_TokenId_46extractV[];
extern Node CF_Prelude_46reverse[];
extern Node F0_TokenId_46extractM[];
extern Node FN_Prelude_46map[];
extern Node FN_List_46groupBy[];
extern Node FN_List_46sortBy[];
extern Node FN_Prelude_46Eq_46Prelude_46_91_93_46_47_61[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node FN_Prelude_46filter[];
extern Node F0_Prelude_46snd[];
extern Node FN_Prelude_46concatMap[];
extern Node F0_Data_46Map_46toList[];
extern Node F0_IntState_46getSymbolTable[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Ord_46Prelude_46_91_93_46compare[];
extern Node CF_Prelude_46Ord_46Prelude_46Char[];
extern Node FN_Prelude_46Eq_46Prelude_46_91_93_46_61_61[];
extern Node FN_Prelude_46head[];
extern Node FN_Prelude_46fst[];
extern Node FN_Prelude_46concat[];
extern Node FN_List_46intersperse[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46Eq_46Prelude_46_91_93[];
extern Node FN_List_46nub[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v701)
,};
Node FN_ReportImports_46possibleTid[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,13,TOP(26),BOT(26))
, bytes2word(TOP(31),BOT(31),TOP(37),BOT(37))
, bytes2word(TOP(43),BOT(43),TOP(54),BOT(54))
, bytes2word(TOP(65),BOT(65),TOP(76),BOT(76))
, bytes2word(TOP(82),BOT(82),TOP(88),BOT(88))
, bytes2word(TOP(94),BOT(94),TOP(100),BOT(100))
,	/* v687: (byte 4) */
  bytes2word(TOP(106),BOT(106),TOP(112),BOT(112))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v688: (byte 1) */
  bytes2word(RETURN,UNPACK,2,PUSH_HEAP)
,	/* v689: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v690: (byte 1) */
  bytes2word(RETURN,UNPACK,5,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v691: (byte 4) */
  bytes2word(HEAP_I2,HEAP_OFF_N1,3,RETURN)
, bytes2word(UNPACK,7,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_I2)
,	/* v692: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,UNPACK)
, bytes2word(6,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_I2,HEAP_OFF_N1)
,	/* v693: (byte 2) */
  bytes2word(3,RETURN,UNPACK,7)
,	/* v694: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,RETURN)
, bytes2word(UNPACK,6,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v695: (byte 2) */
  bytes2word(1,RETURN,UNPACK,7)
,	/* v696: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,RETURN)
, bytes2word(UNPACK,5,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v697: (byte 2) */
  bytes2word(1,RETURN,UNPACK,5)
,	/* v698: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,RETURN)
, bytes2word(UNPACK,4,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v699: (byte 2) */
  bytes2word(1,RETURN,UNPACK,5)
, bytes2word(HEAP_CVAL_N1,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_I2,HEAP_OFF_N1,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v701: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_ReportImports_46possibleTid[] = {
  CAPTAG(useLabel(FN_ReportImports_46possibleTid),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v702)
,};
Node FN_ReportImports_46varName[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v702: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_ReportImports_46varName[] = {
  VAPTAG(useLabel(FN_ReportImports_46varName))
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_NHC_46PackedString_46unpackPS)
, useLabel(F0_TokenId_46extractV)
, useLabel(CF_Prelude_46reverse)
, bytes2word(0,0,0,0)
, useLabel(CT_v703)
,};
Node FN_ReportImports_46moduleName[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v703: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_ReportImports_46moduleName[] = {
  VAPTAG(useLabel(FN_ReportImports_46moduleName))
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_NHC_46PackedString_46unpackPS)
, useLabel(F0_TokenId_46extractM)
, useLabel(CF_Prelude_46reverse)
, bytes2word(1,0,0,1)
, useLabel(CT_v704)
,};
Node FN_ReportImports_46reportFnImports[] = {
  bytes2word(NEEDHEAP_P1,59,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_P1,9,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,13)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,14)
, bytes2word(HEAP_CVAL_P1,15,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_P1,12)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,13)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,14)
, bytes2word(HEAP_CVAL_P1,15,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_P1,16)
, bytes2word(HEAP_CVAL_P1,17,HEAP_CVAL_P1,18)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_P1,19,HEAP_CVAL_P1,20)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,13)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,25)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,13)
, bytes2word(HEAP_OFF_N1,37,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,43)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,13)
, bytes2word(HEAP_OFF_N1,49,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,13,HEAP_OFF_N1)
, bytes2word(55,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v704: (byte 0) */
  HW(18,1)
, 0
,};
Node F0_ReportImports_46reportFnImports[] = {
  CAPTAG(useLabel(FN_ReportImports_46reportFnImports),1)
, CAPTAG(useLabel(FN_LAMBDA679),1)
, CAPTAG(useLabel(FN_Prelude_46map),1)
, CAPTAG(useLabel(FN_LAMBDA680),2)
, CAPTAG(useLabel(FN_List_46groupBy),1)
, CAPTAG(useLabel(FN_LAMBDA681),2)
, VAPTAG(useLabel(FN_List_46sortBy))
, CAPTAG(useLabel(FN_LAMBDA682),1)
, VAPTAG(useLabel(FN_LAMBDA683))
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46_91_93_46_47_61),1)
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(CF_ReportImports_46moduleName)
, CAPTAG(useLabel(FN_Prelude_46filter),1)
, useLabel(F0_ReportImports_46possibleTid)
, useLabel(F0_Prelude_46snd)
, VAPTAG(useLabel(FN_Prelude_46concatMap))
, useLabel(F0_Data_46Map_46toList)
, useLabel(F0_IntState_46getSymbolTable)
, bytes2word(0,0,0,0)
, useLabel(CT_v706)
,	/* FN_LAMBDA683: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v705)
,	/* CT_v706: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA683: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA683))
, bytes2word(1,0,0,1)
, useLabel(CT_v707)
,	/* FN_LAMBDA682: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v707: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA682: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA682),1)
, VAPTAG(useLabel(FN_ReportImports_46moduleName))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_ReportImports_46varName))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v714)
,	/* FN_LAMBDA681: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I2,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_P1)
, bytes2word(3,HEAP_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v714: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA681: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA681),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46compare))
, useLabel(CF_Prelude_46Ord_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v721)
,	/* FN_LAMBDA680: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I2,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_P1)
, bytes2word(3,HEAP_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v721: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA680: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA680),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46_91_93_46_61_61))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, bytes2word(1,0,0,1)
, useLabel(CT_v722)
,	/* FN_LAMBDA679: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_P1,10,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,14,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,22,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,14,HEAP_OFF_N1)
, bytes2word(28,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v722: (byte 0) */
  HW(12,1)
, 0
,	/* F0_LAMBDA679: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA679),1)
, VAPTAG(useLabel(FN_LAMBDA675))
, VAPTAG(useLabel(FN_Prelude_46head))
, VAPTAG(useLabel(FN_Prelude_46fst))
, VAPTAG(useLabel(FN_LAMBDA676))
, VAPTAG(useLabel(FN_Prelude_46concat))
, VAPTAG(useLabel(FN_LAMBDA677))
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_Prelude_46snd)
, VAPTAG(useLabel(FN_List_46intersperse))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA678))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v724)
,	/* FN_LAMBDA678: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v723)
,	/* CT_v724: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA678: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA678))
, bytes2word(0,0,0,0)
, useLabel(CT_v726)
,	/* FN_LAMBDA677: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v725)
,	/* CT_v726: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA677: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA677))
, bytes2word(0,0,0,0)
, useLabel(CT_v728)
,	/* FN_LAMBDA676: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v727)
,	/* CT_v728: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA676: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA676))
, bytes2word(0,0,0,0)
, useLabel(CT_v730)
,	/* FN_LAMBDA675: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v729)
,	/* CT_v730: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA675: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA675))
, bytes2word(1,0,0,1)
, useLabel(CT_v731)
,};
Node FN_ReportImports_46reportImports[] = {
  bytes2word(NEEDHEAP_P1,43,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_P1,7)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_P1,15)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_P1,16,HEAP_CVAL_P1,17)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,25)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,30,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(37,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v731: (byte 0) */
  HW(15,1)
, 0
,};
Node F0_ReportImports_46reportImports[] = {
  CAPTAG(useLabel(FN_ReportImports_46reportImports),1)
, VAPTAG(useLabel(FN_LAMBDA684))
, CAPTAG(useLabel(FN_Prelude_46_43_43),1)
, CAPTAG(useLabel(FN_Prelude_46map),1)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46_91_93))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, VAPTAG(useLabel(FN_List_46nub))
, useLabel(CF_ReportImports_46moduleName)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46_91_93_46_47_61),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, CAPTAG(useLabel(FN_Prelude_46filter),1)
, useLabel(F0_ReportImports_46possibleTid)
, useLabel(F0_Prelude_46snd)
, VAPTAG(useLabel(FN_Prelude_46concatMap))
, useLabel(F0_Data_46Map_46toList)
, useLabel(F0_IntState_46getSymbolTable)
, bytes2word(0,0,0,0)
, useLabel(CT_v732)
,	/* FN_LAMBDA684: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v729)
,	/* CT_v732: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA684: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA684))
,	/* ST_v727: (byte 0) */
 	/* ST_v723: (byte 3) */
  bytes2word(9,40,0,41)
,	/* ST_v725: (byte 1) */
 	/* ST_v705: (byte 4) */
  bytes2word(0,44,32,0)
, bytes2word(80,114,101,108)
,	/* ST_v729: (byte 4) */
  bytes2word(117,100,101,0)
, bytes2word(105,109,112,111)
, bytes2word(114,116,32,0)
,};
