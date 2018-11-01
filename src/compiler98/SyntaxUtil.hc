#include "newmacros.h"
#include "runtime.h"

#define v495	((void*)startLabel+22)
#define v494	((void*)startLabel+26)
#define v491	((void*)startLabel+32)
#define CT_v496	((void*)startLabel+52)
#define FN_SyntaxUtil_46isExpVarOp	((void*)startLabel+72)
#define v501	((void*)startLabel+134)
#define v500	((void*)startLabel+138)
#define v497	((void*)startLabel+144)
#define CT_v502	((void*)startLabel+164)
#define F0_SyntaxUtil_46isExpVarOp	((void*)startLabel+172)
#define v516	((void*)startLabel+206)
#define v510	((void*)startLabel+210)
#define v517	((void*)startLabel+274)
#define v514	((void*)startLabel+278)
#define v511	((void*)startLabel+316)
#define v507	((void*)startLabel+321)
#define v503	((void*)startLabel+326)
#define CT_v518	((void*)startLabel+352)
#define v523	((void*)startLabel+450)
#define v522	((void*)startLabel+454)
#define v519	((void*)startLabel+460)
#define CT_v524	((void*)startLabel+480)
#define v529	((void*)startLabel+562)
#define v528	((void*)startLabel+566)
#define v525	((void*)startLabel+573)
#define CT_v530	((void*)startLabel+580)
#define v535	((void*)startLabel+666)
#define v534	((void*)startLabel+670)
#define v531	((void*)startLabel+676)
#define CT_v536	((void*)startLabel+696)
#define v541	((void*)startLabel+778)
#define v540	((void*)startLabel+782)
#define v537	((void*)startLabel+788)
#define CT_v542	((void*)startLabel+808)
#define v551	((void*)startLabel+890)
#define v546	((void*)startLabel+894)
#define v552	((void*)startLabel+916)
#define v550	((void*)startLabel+920)
#define v547	((void*)startLabel+926)
#define v543	((void*)startLabel+931)
#define CT_v553	((void*)startLabel+948)
#define v562	((void*)startLabel+1030)
#define v557	((void*)startLabel+1034)
#define v563	((void*)startLabel+1056)
#define v561	((void*)startLabel+1060)
#define v558	((void*)startLabel+1066)
#define v554	((void*)startLabel+1071)
#define CT_v564	((void*)startLabel+1088)
#define v574	((void*)startLabel+1170)
#define v568	((void*)startLabel+1174)
#define v575	((void*)startLabel+1186)
#define v572	((void*)startLabel+1190)
#define v569	((void*)startLabel+1196)
#define v573	((void*)startLabel+1201)
#define v565	((void*)startLabel+1207)
#define CT_v576	((void*)startLabel+1224)
#define v582	((void*)startLabel+1310)
#define v580	((void*)startLabel+1314)
#define v581	((void*)startLabel+1320)
#define v577	((void*)startLabel+1326)
#define CT_v583	((void*)startLabel+1344)
extern Node FN_Prelude_46break[];
extern Node FN_SyntaxPos_46HasPos_46Prelude_46_91_93_46getPos[];
extern Node CF_SyntaxPos_46HasPos_46Syntax_46Exp[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v496)
,};
Node FN_SyntaxUtil_46isTypeVar[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(8),BOT(8))
, bytes2word(TOP(8),BOT(8),TOP(12),BOT(12))
,	/* v495: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v494: (byte 2) */
  bytes2word(8,0,UNPACK,2)
,	/* v491: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,RETURN)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v496: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_SyntaxUtil_46isTypeVar[] = {
  CAPTAG(useLabel(FN_SyntaxUtil_46isTypeVar),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v502)
,	/* FN_SyntaxUtil_46isExpVarOp: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,28,TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(60),BOT(60),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
,	/* v501: (byte 2) */
  bytes2word(TOP(56),BOT(56),POP_I1,JUMP)
,	/* v500: (byte 2) */
  bytes2word(8,0,UNPACK,2)
,	/* v497: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,RETURN)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v502: (byte 0) */
  HW(0,1)
, 0
,	/* F0_SyntaxUtil_46isExpVarOp: (byte 0) */
  CAPTAG(useLabel(FN_SyntaxUtil_46isExpVarOp),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v518)
,};
Node FN_SyntaxUtil_46infixFun[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v516: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v510: (byte 2) */
  bytes2word(113,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,28,TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(60),BOT(60),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
,	/* v517: (byte 2) */
  bytes2word(TOP(56),BOT(56),POP_I1,JUMP)
,	/* v514: (byte 2) */
  bytes2word(40,0,UNPACK,2)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_P1)
, bytes2word(4,HEAP_CVAL_N1,1,HEAP_OFF_N1)
, bytes2word(4,HEAP_P1,4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_P1,3)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,4)
, bytes2word(HEAP_P1,3,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,10,HEAP_P1,0)
, bytes2word(HEAP_I1,HEAP_OFF_N1,7,PUSH_HEAP)
,	/* v511: (byte 4) */
  bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,6,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v507: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v503: (byte 2) */
  bytes2word(2,0,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,4,0)
, CONSTR(16,2,0)
,	/* CT_v518: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_SyntaxUtil_46infixFun[] = {
  CAPTAG(useLabel(FN_SyntaxUtil_46infixFun),1)
, VAPTAG(useLabel(FN_Prelude_46break))
, useLabel(F0_SyntaxUtil_46isExpVarOp)
, VAPTAG(useLabel(FN_SyntaxPos_46HasPos_46Prelude_46_91_93_46getPos))
, useLabel(CF_SyntaxPos_46HasPos_46Syntax_46Exp)
, bytes2word(1,0,0,1)
, useLabel(CT_v524)
,};
Node FN_SyntaxUtil_46isExpVar[] = {
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
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
,	/* v523: (byte 2) */
  bytes2word(TOP(56),BOT(56),POP_I1,JUMP)
,	/* v522: (byte 2) */
  bytes2word(8,0,UNPACK,2)
,	/* v519: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,RETURN)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v524: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_SyntaxUtil_46isExpVar[] = {
  CAPTAG(useLabel(FN_SyntaxUtil_46isExpVar),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v530)
,};
Node FN_SyntaxUtil_46dropPatAs[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,28,TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(60),BOT(60),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
,	/* v529: (byte 2) */
  bytes2word(TOP(56),BOT(56),POP_I1,JUMP)
,	/* v528: (byte 2) */
  bytes2word(9,0,UNPACK,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_P1,3)
,	/* v525: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v530: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_SyntaxUtil_46dropPatAs[] = {
  CAPTAG(useLabel(FN_SyntaxUtil_46dropPatAs),1)
, VAPTAG(useLabel(FN_SyntaxUtil_46dropPatAs))
, bytes2word(1,0,0,1)
, useLabel(CT_v536)
,};
Node FN_SyntaxUtil_46isExpIrr[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,28,TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(60),BOT(60),TOP(56),BOT(56))
,	/* v535: (byte 2) */
  bytes2word(TOP(56),BOT(56),POP_I1,JUMP)
,	/* v534: (byte 2) */
  bytes2word(8,0,UNPACK,2)
,	/* v531: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,RETURN)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v536: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_SyntaxUtil_46isExpIrr[] = {
  CAPTAG(useLabel(FN_SyntaxUtil_46isExpIrr),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v542)
,};
Node FN_SyntaxUtil_46isNK[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,28,TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(60),BOT(60))
,	/* v541: (byte 2) */
  bytes2word(TOP(56),BOT(56),POP_I1,JUMP)
,	/* v540: (byte 2) */
  bytes2word(8,0,UNPACK,6)
,	/* v537: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,RETURN)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v542: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_SyntaxUtil_46isNK[] = {
  CAPTAG(useLabel(FN_SyntaxUtil_46isNK),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v553)
,};
Node FN_SyntaxUtil_46isExpChar[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,28,TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(60),BOT(60),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
,	/* v551: (byte 2) */
  bytes2word(TOP(56),BOT(56),POP_I1,JUMP)
,	/* v546: (byte 2) */
  bytes2word(39,0,UNPACK,2)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(7,NOP,TOP(14),BOT(14))
, bytes2word(TOP(14),BOT(14),TOP(14),BOT(14))
, bytes2word(TOP(14),BOT(14),TOP(14),BOT(14))
,	/* v552: (byte 4) */
  bytes2word(TOP(14),BOT(14),TOP(18),BOT(18))
,	/* v550: (byte 4) */
  bytes2word(POP_I1,JUMP,8,0)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v547: (byte 2) */
  bytes2word(1,RETURN,POP_P1,2)
,	/* v543: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v553: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_SyntaxUtil_46isExpChar[] = {
  CAPTAG(useLabel(FN_SyntaxUtil_46isExpChar),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v564)
,};
Node FN_SyntaxUtil_46isExpInt[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,28,TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(60),BOT(60),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
,	/* v562: (byte 2) */
  bytes2word(TOP(56),BOT(56),POP_I1,JUMP)
,	/* v557: (byte 2) */
  bytes2word(39,0,UNPACK,2)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(7,NOP,TOP(14),BOT(14))
, bytes2word(TOP(14),BOT(14),TOP(14),BOT(14))
, bytes2word(TOP(18),BOT(18),TOP(14),BOT(14))
,	/* v563: (byte 4) */
  bytes2word(TOP(14),BOT(14),TOP(14),BOT(14))
,	/* v561: (byte 4) */
  bytes2word(POP_I1,JUMP,8,0)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v558: (byte 2) */
  bytes2word(1,RETURN,POP_P1,2)
,	/* v554: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v564: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_SyntaxUtil_46isExpInt[] = {
  CAPTAG(useLabel(FN_SyntaxUtil_46isExpInt),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v576)
,};
Node FN_SyntaxUtil_46isCon[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,28,TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(60),BOT(60),TOP(56),BOT(56))
, bytes2word(TOP(87),BOT(87),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
,	/* v574: (byte 2) */
  bytes2word(TOP(56),BOT(56),POP_I1,JUMP)
,	/* v568: (byte 2) */
  bytes2word(35,0,UNPACK,2)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v575: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v572: (byte 2) */
  bytes2word(8,0,UNPACK,2)
,	/* v569: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_I1,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,8)
,	/* v573: (byte 1) */
  bytes2word(0,UNPACK,2,PUSH_HEAP)
,	/* v565: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v576: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_SyntaxUtil_46isCon[] = {
  CAPTAG(useLabel(FN_SyntaxUtil_46isCon),1)
, VAPTAG(useLabel(FN_SyntaxUtil_46isCon))
, bytes2word(1,0,0,1)
, useLabel(CT_v583)
,};
Node FN_SyntaxUtil_46isVar[] = {
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
, bytes2word(TOP(56),BOT(56),TOP(66),BOT(66))
, bytes2word(TOP(56),BOT(56),TOP(56),BOT(56))
,	/* v582: (byte 2) */
  bytes2word(TOP(56),BOT(56),POP_I1,JUMP)
,	/* v580: (byte 2) */
  bytes2word(14,0,UNPACK,2)
,	/* v581: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,RETURN)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v577: (byte 2) */
  bytes2word(1,RETURN,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v583: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_SyntaxUtil_46isVar[] = {
  CAPTAG(useLabel(FN_SyntaxUtil_46isVar),1)
,};
