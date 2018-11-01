#include "newmacros.h"
#include "runtime.h"

#define v897	((void*)startLabel+70)
#define v895	((void*)startLabel+74)
#define v896	((void*)startLabel+87)
#define v892	((void*)startLabel+92)
#define CT_v898	((void*)startLabel+120)
#define FN_LAMBDA882	((void*)startLabel+148)
#define CT_v900	((void*)startLabel+168)
#define CF_LAMBDA882	((void*)startLabel+176)
#define v915	((void*)startLabel+256)
#define v904	((void*)startLabel+260)
#define v916	((void*)startLabel+272)
#define v908	((void*)startLabel+276)
#define v917	((void*)startLabel+340)
#define v912	((void*)startLabel+344)
#define v909	((void*)startLabel+368)
#define v905	((void*)startLabel+373)
#define v901	((void*)startLabel+378)
#define CT_v919	((void*)startLabel+404)
#define FN_LAMBDA883	((void*)startLabel+432)
#define v920	((void*)startLabel+520)
#define CT_v922	((void*)startLabel+540)
#define F0_LAMBDA883	((void*)startLabel+548)
#define v934	((void*)startLabel+628)
#define v926	((void*)startLabel+632)
#define v928	((void*)startLabel+646)
#define v931	((void*)startLabel+750)
#define v923	((void*)startLabel+776)
#define CT_v938	((void*)startLabel+808)
#define FN_LAMBDA886	((void*)startLabel+892)
#define CT_v940	((void*)startLabel+912)
#define CF_LAMBDA886	((void*)startLabel+920)
#define FN_LAMBDA885	((void*)startLabel+932)
#define v945	((void*)startLabel+942)
#define v944	((void*)startLabel+946)
#define v941	((void*)startLabel+950)
#define CT_v946	((void*)startLabel+964)
#define F0_LAMBDA885	((void*)startLabel+972)
#define FN_LAMBDA884	((void*)startLabel+992)
#define CT_v948	((void*)startLabel+1012)
#define CF_LAMBDA884	((void*)startLabel+1020)
#define v957	((void*)startLabel+1074)
#define v952	((void*)startLabel+1078)
#define v953	((void*)startLabel+1085)
#define v954	((void*)startLabel+1099)
#define v955	((void*)startLabel+1106)
#define v956	((void*)startLabel+1115)
#define v949	((void*)startLabel+1122)
#define CT_v958	((void*)startLabel+1144)
#define FN_LAMBDA888	((void*)startLabel+1188)
#define CT_v959	((void*)startLabel+1212)
#define F0_LAMBDA888	((void*)startLabel+1220)
#define FN_LAMBDA887	((void*)startLabel+1252)
#define CT_v960	((void*)startLabel+1276)
#define F0_LAMBDA887	((void*)startLabel+1284)
#define v962	((void*)startLabel+1322)
#define v963	((void*)startLabel+1329)
#define CT_v965	((void*)startLabel+1344)
#define CT_v966	((void*)startLabel+1392)
#define FN_LAMBDA890	((void*)startLabel+1428)
#define v967	((void*)startLabel+1449)
#define CT_v969	((void*)startLabel+1460)
#define F0_LAMBDA890	((void*)startLabel+1468)
#define FN_LAMBDA889	((void*)startLabel+1500)
#define CT_v970	((void*)startLabel+1528)
#define F0_LAMBDA889	((void*)startLabel+1536)
#define ST_v939	((void*)startLabel+1544)
#define ST_v899	((void*)startLabel+1602)
#define ST_v947	((void*)startLabel+1660)
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Prelude_46Eq_46Prelude_46Int_46_61_61[];
extern Node FN_IntState_46lookupIS[];
extern Node FN_Prelude_46_46[];
extern Node F0_Maybe_46fromJust[];
extern Node F0_Info_46belongstoI[];
extern Node F0_Info_46constrsI[];
extern Node F0_Prelude_46length[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46all[];
extern Node F0_SyntaxUtil_46isVar[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46notElem[];
extern Node CF_Prelude_46Eq_46Id_46Id[];
extern Node FN_Prelude_46flip[];
extern Node FN_Prelude_46filter[];
extern Node F0_Prelude_46null[];
extern Node F0_Prelude_46not[];
extern Node FN_State_46_62_62_62_61[];
extern Node FN_State_46unitS[];
extern Node FN_State_46mapS[];
extern Node F0_CaseOpt_46failAlt[];
extern Node FN_Prelude_46or[];
extern Node FN_Prelude_46_124_124[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v898)
,};
Node FN_CaseOpt_46getPosI[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,28,TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(60),BOT(60))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(73),BOT(73))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
,	/* v897: (byte 2) */
  bytes2word(TOP(56),BOT(56),POP_I1,JUMP)
,	/* v895: (byte 2) */
  bytes2word(20,0,UNPACK,2)
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,0)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v896: (byte 3) */
  bytes2word(HEAP_OFF_N1,4,RETURN,UNPACK)
,	/* v892: (byte 4) */
  bytes2word(1,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
, bytes2word(HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,2,0)
,	/* CT_v898: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_CaseOpt_46getPosI[] = {
  CAPTAG(useLabel(FN_CaseOpt_46getPosI),1)
, VAPTAG(useLabel(FN_LAMBDA882))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v900)
,	/* FN_LAMBDA882: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v899)
,	/* CT_v900: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA882: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA882))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v919)
,};
Node FN_CaseOpt_46singleVars[] = {
  bytes2word(ZAP_ARG_I2,NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,28,NOP)
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(60),BOT(60))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
,	/* v915: (byte 4) */
  bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
,	/* v904: (byte 4) */
  bytes2word(POP_I1,JUMP,120,0)
, bytes2word(UNPACK,2,PUSH_I1,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v916: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v908: (byte 4) */
  bytes2word(POP_I1,JUMP,99,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,28)
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(60),BOT(60))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
,	/* v917: (byte 4) */
  bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
,	/* v912: (byte 4) */
  bytes2word(POP_I1,JUMP,26,0)
, bytes2word(UNPACK,2,PUSH_ARG_I3,ZAP_STACK_P1)
, bytes2word(1,EVAL,NEEDHEAP_I32,UNPACK)
, bytes2word(2,HEAP_CVAL_I3,HEAP_P1,0)
, bytes2word(HEAP_P1,3,HEAP_P1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
,	/* v909: (byte 4) */
  bytes2word(5,HEAP_ARG,3,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v905: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v901: (byte 2) */
  bytes2word(2,0,HEAP_CVAL_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
,	/* CT_v919: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_CaseOpt_46singleVars[] = {
  CAPTAG(useLabel(FN_CaseOpt_46singleVars),3)
, VAPTAG(useLabel(FN_LAMBDA883))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v922)
,	/* FN_LAMBDA883: (byte 0) */
  bytes2word(NEEDHEAP_P1,39,HEAP_CVAL_I3,HEAP_INT_P1)
, bytes2word(1,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_I5,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_I5,HEAP_OFF_N1,25)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(5,ZAP_ARG_I1,ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,14,0)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_P1,15)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v920: (byte 4) */
  bytes2word(1,HEAP_OFF_N1,4,RETURN)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
,	/* CT_v922: (byte 0) */
  HW(13,3)
, 0
,	/* F0_LAMBDA883: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA883),3)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Int_46_61_61),1)
, CAPTAG(useLabel(FN_IntState_46lookupIS),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Maybe_46fromJust)
, useLabel(F0_Info_46belongstoI)
, useLabel(F0_Info_46constrsI)
, useLabel(F0_Prelude_46length)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46all))
, useLabel(F0_SyntaxUtil_46isVar)
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_CaseOpt_46getPosI)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v938)
,};
Node FN_CaseOpt_46anyMissing[] = {
  bytes2word(ZAP_ARG_I2,NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v934: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v926: (byte 4) */
  bytes2word(POP_I1,JUMP,146,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(ZAP_STACK_P1,1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v928: (byte 2) */
  bytes2word(TOP(108),BOT(108),UNPACK,4)
, bytes2word(PUSH_ARG_I3,ZAP_STACK_P1,3,ZAP_STACK_P1)
, bytes2word(1,EVAL,NEEDHEAP_P1,48)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_P1,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_P1)
, bytes2word(4,HEAP_OFF_N1,5,HEAP_CVAL_I5)
, bytes2word(HEAP_I1,HEAP_CVAL_I5,HEAP_I1,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,4,HEAP_P1,5)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,14,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,16,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_I1,HEAP_ARG)
,	/* v931: (byte 2) */
  bytes2word(3,RETURN,UNPACK,4)
, bytes2word(PUSH_ARG_I3,ZAP_STACK_P1,6,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,ZAP_STACK_P1)
, bytes2word(2,ZAP_STACK_P1,1,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_OFF_N1)
,	/* v923: (byte 4) */
  bytes2word(2,HEAP_ARG,3,RETURN)
, bytes2word(HEAP_CVAL_P1,17,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(18,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
, CONSTR(0,2,0)
, CONSTR(1,2,0)
,	/* CT_v938: (byte 0) */
  HW(16,3)
, 0
,};
Node F0_CaseOpt_46anyMissing[] = {
  CAPTAG(useLabel(FN_CaseOpt_46anyMissing),3)
, CAPTAG(useLabel(FN_LAMBDA885),1)
, VAPTAG(useLabel(FN_Prelude_46map))
, CAPTAG(useLabel(FN_IntState_46lookupIS),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Maybe_46fromJust)
, useLabel(F0_Info_46belongstoI)
, useLabel(F0_Info_46constrsI)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Prelude_46notElem),1)
, useLabel(CF_Prelude_46Eq_46Id_46Id)
, CAPTAG(useLabel(FN_Prelude_46flip),1)
, CAPTAG(useLabel(FN_Prelude_46filter),1)
, useLabel(F0_Prelude_46null)
, useLabel(F0_Prelude_46not)
, VAPTAG(useLabel(FN_LAMBDA886))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v940)
,	/* FN_LAMBDA886: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v939)
,	/* CT_v940: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA886: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA886))
, bytes2word(1,0,0,1)
, useLabel(CT_v946)
,	/* FN_LAMBDA885: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v945: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v944: (byte 2) */
  bytes2word(6,0,UNPACK,4)
,	/* v941: (byte 2) */
  bytes2word(PUSH_I1,RETURN_EVAL,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v946: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA885: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA885),1)
, VAPTAG(useLabel(FN_LAMBDA884))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v948)
,	/* FN_LAMBDA884: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v947)
,	/* CT_v948: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA884: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA884))
, bytes2word(1,0,0,1)
, useLabel(CT_v958)
,};
Node FN_CaseOpt_46failExp[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,18,TOP(36),BOT(36))
, bytes2word(TOP(40),BOT(40),TOP(47),BOT(47))
, bytes2word(TOP(36),BOT(36),TOP(36),BOT(36))
, bytes2word(TOP(61),BOT(61),TOP(68),BOT(68))
, bytes2word(TOP(77),BOT(77),TOP(36),BOT(36))
, bytes2word(TOP(36),BOT(36),TOP(36),BOT(36))
, bytes2word(TOP(36),BOT(36),TOP(36),BOT(36))
, bytes2word(TOP(36),BOT(36),TOP(36),BOT(36))
, bytes2word(TOP(36),BOT(36),TOP(36),BOT(36))
,	/* v957: (byte 2) */
  bytes2word(TOP(36),BOT(36),POP_I1,JUMP)
,	/* v952: (byte 2) */
  bytes2word(46,0,UNPACK,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_P1,4)
,	/* v953: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,3,HEAP_CVAL_I4)
, bytes2word(HEAP_I2,HEAP_CVAL_I5,HEAP_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,5)
,	/* v954: (byte 3) */
  bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,UNPACK)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,7)
,	/* v955: (byte 2) */
  bytes2word(HEAP_I1,RETURN_EVAL,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,7)
,	/* v956: (byte 3) */
  bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,UNPACK)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_I3,HEAP_P1)
,	/* v949: (byte 2) */
  bytes2word(5,RETURN_EVAL,HEAP_CVAL_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v958: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_CaseOpt_46failExp[] = {
  CAPTAG(useLabel(FN_CaseOpt_46failExp),1)
, VAPTAG(useLabel(FN_CaseOpt_46failExp))
, CAPTAG(useLabel(FN_CaseOpt_46anyMissing),2)
, CAPTAG(useLabel(FN_LAMBDA888),1)
, VAPTAG(useLabel(FN_State_46_62_62_62_61))
, VAPTAG(useLabel(FN_State_46unitS))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v959)
,	/* FN_LAMBDA888: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v959: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA888: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA888),2)
, VAPTAG(useLabel(FN_State_46mapS))
, useLabel(F0_CaseOpt_46failAlt)
, CAPTAG(useLabel(FN_LAMBDA887),1)
, VAPTAG(useLabel(FN_State_46_62_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v960)
,	/* FN_LAMBDA887: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,2,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v960: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA887: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA887),2)
, VAPTAG(useLabel(FN_Prelude_46or))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
, VAPTAG(useLabel(FN_State_46unitS))
, bytes2word(1,0,0,1)
, useLabel(CT_v965)
,};
Node FN_CaseOpt_46failAlt[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v962: (byte 2) */
  bytes2word(TOP(11),BOT(11),UNPACK,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_P1,4)
,	/* v963: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_P1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v965: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_CaseOpt_46failAlt[] = {
  CAPTAG(useLabel(FN_CaseOpt_46failAlt),1)
, VAPTAG(useLabel(FN_CaseOpt_46failExp))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v966)
,};
Node FN_CaseOpt_46optFatBar[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,2,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v966: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_CaseOpt_46optFatBar[] = {
  CAPTAG(useLabel(FN_CaseOpt_46optFatBar),2)
, VAPTAG(useLabel(FN_CaseOpt_46failExp))
, CAPTAG(useLabel(FN_LAMBDA890),1)
, VAPTAG(useLabel(FN_State_46_62_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v969)
,	/* FN_LAMBDA890: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,16,0,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(2,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,5)
,	/* v967: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v969: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA890: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA890),3)
, VAPTAG(useLabel(FN_CaseOpt_46failExp))
, CAPTAG(useLabel(FN_LAMBDA889),1)
, VAPTAG(useLabel(FN_State_46_62_62_62_61))
, VAPTAG(useLabel(FN_State_46unitS))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v970)
,	/* FN_LAMBDA889: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(3,1,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(5,3,0)
,	/* CT_v970: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA889: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA889),3)
, VAPTAG(useLabel(FN_State_46unitS))
,	/* ST_v939: (byte 0) */
  bytes2word(67,97,115,101)
, bytes2word(79,112,116,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,51,56)
, bytes2word(58,49,45,52)
, bytes2word(53,58,49,55)
,	/* ST_v899: (byte 2) */
  bytes2word(46,0,67,97)
, bytes2word(115,101,79,112)
, bytes2word(116,58,32,80)
, bytes2word(97,116,116,101)
, bytes2word(114,110,32,109)
, bytes2word(97,116,99,104)
, bytes2word(32,102,97,105)
, bytes2word(108,117,114,101)
, bytes2word(32,105,110,32)
, bytes2word(102,117,110,99)
, bytes2word(116,105,111,110)
, bytes2word(32,97,116,32)
, bytes2word(54,50,58,49)
, bytes2word(45,54,51,58)
,	/* ST_v947: (byte 4) */
  bytes2word(51,53,46,0)
, bytes2word(67,97,115,101)
, bytes2word(79,112,116,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,108,97)
, bytes2word(109,98,100,97)
, bytes2word(32,97,116,32)
, bytes2word(52,51,58,50)
, bytes2word(53,45,52,51)
, bytes2word(58,54,49,46)
, bytes2word(0,0,0,0)
,};
