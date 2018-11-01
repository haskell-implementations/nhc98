#include "newmacros.h"
#include "runtime.h"

#define CT_v476	((void*)startLabel+48)
#define CT_v480	((void*)startLabel+116)
#define CT_v484	((void*)startLabel+188)
#define v493	((void*)startLabel+240)
#define v488	((void*)startLabel+244)
#define v489	((void*)startLabel+248)
#define v490	((void*)startLabel+252)
#define v491	((void*)startLabel+256)
#define v492	((void*)startLabel+263)
#define v485	((void*)startLabel+270)
#define CT_v494	((void*)startLabel+284)
#define FN_LAMBDA465	((void*)startLabel+328)
#define CT_v496	((void*)startLabel+348)
#define CF_LAMBDA465	((void*)startLabel+356)
#define CT_v500	((void*)startLabel+388)
#define CT_v504	((void*)startLabel+516)
#define FN_LAMBDA470	((void*)startLabel+572)
#define v506	((void*)startLabel+582)
#define v507	((void*)startLabel+586)
#define CT_v509	((void*)startLabel+620)
#define F0_LAMBDA470	((void*)startLabel+628)
#define FN_LAMBDA469	((void*)startLabel+668)
#define CT_v511	((void*)startLabel+688)
#define CF_LAMBDA469	((void*)startLabel+696)
#define FN_LAMBDA468	((void*)startLabel+708)
#define CT_v513	((void*)startLabel+728)
#define CF_LAMBDA468	((void*)startLabel+736)
#define FN_LAMBDA467	((void*)startLabel+748)
#define CT_v515	((void*)startLabel+768)
#define CF_LAMBDA467	((void*)startLabel+776)
#define FN_LAMBDA466	((void*)startLabel+788)
#define CT_v517	((void*)startLabel+808)
#define CF_LAMBDA466	((void*)startLabel+816)
#define CT_v518	((void*)startLabel+840)
#define CT_v519	((void*)startLabel+880)
#define CT_v520	((void*)startLabel+920)
#define CT_v521	((void*)startLabel+980)
#define CT_v522	((void*)startLabel+1032)
#define FN_LAMBDA471	((void*)startLabel+1056)
#define CT_v524	((void*)startLabel+1076)
#define CF_LAMBDA471	((void*)startLabel+1084)
#define CT_v525	((void*)startLabel+1108)
#define CT_v526	((void*)startLabel+1140)
#define CT_v527	((void*)startLabel+1172)
#define CT_v534	((void*)startLabel+1256)
#define CT_v535	((void*)startLabel+1316)
#define CT_v536	((void*)startLabel+1364)
#define CT_v537	((void*)startLabel+1416)
#define ST_v510	((void*)startLabel+1444)
#define ST_v514	((void*)startLabel+1459)
#define ST_v512	((void*)startLabel+1470)
#define ST_v516	((void*)startLabel+1476)
#define ST_v523	((void*)startLabel+1482)
#define ST_v495	((void*)startLabel+1503)
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46div[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_42[];
extern Node F0_Prelude_46id[];
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46seq[];
extern Node FN_Prelude_46showString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46shows[];
extern Node CF_Prelude_46Show_46Prelude_46Int[];
extern Node FN_Prelude_46_46[];
extern Node CF_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn[];
extern Node FN_Prelude_46_95_46show[];
extern Node FN_Prelude_46_95_46showsType[];
extern Node FN_Prelude_46_95_46showList[];
extern Node FN_Prelude_46Eq_46Prelude_46_91_93_46_61_61[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node FN_Prelude_46Eq_46Prelude_46Int_46_61_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Maybe_46_61_61[];
extern Node CF_Prelude_46Eq_46Text_46XML_46HaXml_46Posn_46Posn[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46_95_46_47_61[];

static Node startLabel[] = {
  42
, bytes2word(1,0,0,1)
, useLabel(CT_v476)
,};
Node FN_Text_46XML_46HaXml_46Posn_46newline[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,4,HEAP_CVAL_I3,HEAP_I1)
, bytes2word(HEAP_INT_P1,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I1,HEAP_OFF_N1,5)
, bytes2word(HEAP_INT_P1,1,HEAP_P1,4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v476: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Text_46XML_46HaXml_46Posn_46newline[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Posn_46newline),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, bytes2word(1,0,0,1)
, useLabel(CT_v480)
,};
Node FN_Text_46XML_46HaXml_46Posn_46tab[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,4,HEAP_CVAL_I3,HEAP_I2)
, bytes2word(HEAP_INT_P1,8,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_INT_P1,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,HEAP_INT_P1,8)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_I1)
, bytes2word(HEAP_I2,HEAP_OFF_N1,6,HEAP_P1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v480: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Text_46XML_46HaXml_46Posn_46tab[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Posn_46tab),1)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46div))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_42))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v484)
,};
Node FN_Text_46XML_46HaXml_46Posn_46addcol[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,4,HEAP_CVAL_I3,HEAP_I2)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I1,HEAP_I2,HEAP_OFF_N1)
, bytes2word(6,HEAP_P1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v484: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Text_46XML_46HaXml_46Posn_46addcol[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Posn_46addcol),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, bytes2word(1,0,0,1)
, useLabel(CT_v494)
,};
Node FN_Text_46XML_46HaXml_46Posn_46white[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,5,TOP(9),BOT(9))
, bytes2word(TOP(26),BOT(26),TOP(10),BOT(10))
, bytes2word(TOP(30),BOT(30),TOP(13),BOT(13))
, bytes2word(TOP(34),BOT(34),TOP(32),BOT(32))
, bytes2word(TOP(38),BOT(38),TOP(160),BOT(160))
,	/* v493: (byte 4) */
  bytes2word(TOP(45),BOT(45),TOP(22),BOT(22))
,	/* v488: (byte 4) */
  bytes2word(POP_I1,JUMP,28,0)
,	/* v489: (byte 4) */
  bytes2word(POP_I1,PUSH_CVAL_P1,3,RETURN_EVAL)
,	/* v490: (byte 4) */
  bytes2word(POP_I1,PUSH_CVAL_P1,4,RETURN_EVAL)
,	/* v491: (byte 4) */
  bytes2word(POP_I1,PUSH_CVAL_P1,5,RETURN_EVAL)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_P1,6)
,	/* v492: (byte 3) */
  bytes2word(HEAP_INT_P1,1,RETURN,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_INT_P1)
,	/* v485: (byte 2) */
  bytes2word(1,RETURN,HEAP_CVAL_P1,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v494: (byte 0) */
  HW(6,1)
, 0
,};
Node F0_Text_46XML_46HaXml_46Posn_46white[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Posn_46white),1)
, useLabel(F0_Text_46XML_46HaXml_46Posn_46tab)
, useLabel(F0_Text_46XML_46HaXml_46Posn_46newline)
, useLabel(F0_Prelude_46id)
, CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Posn_46addcol),1)
, VAPTAG(useLabel(FN_LAMBDA465))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v496)
,	/* FN_LAMBDA465: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v495)
,	/* CT_v496: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA465: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA465))
, bytes2word(1,0,0,1)
, useLabel(CT_v500)
,};
Node FN_Text_46XML_46HaXml_46Posn_46forcep[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,4,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_P1,3,HEAP_I2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v500: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Text_46XML_46HaXml_46Posn_46forcep[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Posn_46forcep),1)
, VAPTAG(useLabel(FN_Prelude_46seq))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v504)
,};
Node FN_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn_46showsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_P1,49,UNPACK,4)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_OFF_N1,3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,2,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,HEAP_CVAL_I3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_I2,HEAP_CVAL_P1,10,HEAP_P1)
, bytes2word(3,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,14,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(22,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,30,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(38,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,45)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v504: (byte 0) */
  HW(9,2)
, 0
,};
Node F0_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn_46showsPrec),2)
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA466))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA467))
, VAPTAG(useLabel(FN_Prelude_46shows))
, useLabel(CF_Prelude_46Show_46Prelude_46Int)
, VAPTAG(useLabel(FN_LAMBDA468))
, VAPTAG(useLabel(FN_LAMBDA470))
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(1,0,0,1)
, useLabel(CT_v509)
,	/* FN_LAMBDA470: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v506: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_CVAL_P1)
,	/* v507: (byte 2) */
  bytes2word(3,RETURN_EVAL,UNPACK,1)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v509: (byte 0) */
  HW(7,1)
, 0
,	/* F0_LAMBDA470: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA470),1)
, useLabel(F0_Prelude_46id)
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA469))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46shows))
, useLabel(CF_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn)
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(0,0,0,0)
, useLabel(CT_v511)
,	/* FN_LAMBDA469: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v510)
,	/* CT_v511: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA469: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA469))
, bytes2word(0,0,0,0)
, useLabel(CT_v513)
,	/* FN_LAMBDA468: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v512)
,	/* CT_v513: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA468: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA468))
, bytes2word(0,0,0,0)
, useLabel(CT_v515)
,	/* FN_LAMBDA467: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v514)
,	/* CT_v515: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA467: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA467))
, bytes2word(0,0,0,0)
, useLabel(CT_v517)
,	/* FN_LAMBDA466: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v516)
,	/* CT_v517: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA466: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA466))
, bytes2word(1,0,0,1)
, useLabel(CT_v518)
,};
Node FN_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v518: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn)
, bytes2word(1,0,0,1)
, useLabel(CT_v519)
,};
Node FN_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn_46showsType[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v519: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn_46showsType),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showsType))
, useLabel(CF_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn)
, bytes2word(1,0,0,1)
, useLabel(CT_v520)
,};
Node FN_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v520: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v521)
,};
Node FN_Text_46XML_46HaXml_46Posn_46posInNewCxt[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,HEAP_INT_P1,1)
, bytes2word(HEAP_INT_P1,1,HEAP_ARG,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v521: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Text_46XML_46HaXml_46Posn_46posInNewCxt[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Posn_46posInNewCxt),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v522)
,};
Node FN_Text_46XML_46HaXml_46Posn_46noPos[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(3,HEAP_INT_P1,0,HEAP_INT_P1)
, bytes2word(0,HEAP_OFF_N1,5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,4,0)
, CONSTR(0,0,0)
,	/* CT_v522: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Text_46XML_46HaXml_46Posn_46noPos[] = {
  VAPTAG(useLabel(FN_Text_46XML_46HaXml_46Posn_46noPos))
, VAPTAG(useLabel(FN_LAMBDA471))
, bytes2word(0,0,0,0)
, useLabel(CT_v524)
,	/* FN_LAMBDA471: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v523)
,	/* CT_v524: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA471: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA471))
, bytes2word(1,0,0,1)
, useLabel(CT_v525)
,};
Node FN_Text_46XML_46HaXml_46Posn_46posnColumn[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v525: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Text_46XML_46HaXml_46Posn_46posnColumn[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Posn_46posnColumn),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v526)
,};
Node FN_Text_46XML_46HaXml_46Posn_46posnLine[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v526: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Text_46XML_46HaXml_46Posn_46posnLine[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Posn_46posnLine),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v527)
,};
Node FN_Text_46XML_46HaXml_46Posn_46posnFilename[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v527: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Text_46XML_46HaXml_46Posn_46posnFilename[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Posn_46posnFilename),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v534)
,};
Node FN_Prelude_46Eq_46Text_46XML_46HaXml_46Posn_46Posn_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(4,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,4,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_P1,4,HEAP_P1,0)
, bytes2word(HEAP_CVAL_I5,HEAP_P1,5,HEAP_I1)
, bytes2word(HEAP_CVAL_I5,HEAP_P1,6,HEAP_I2)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_P1,7,HEAP_P1,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(21,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v534: (byte 0) */
  HW(6,2)
, 0
,};
Node F0_Prelude_46Eq_46Text_46XML_46HaXml_46Posn_46Posn_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Text_46XML_46HaXml_46Posn_46Posn_46_61_61),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46_91_93_46_61_61))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Int_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Maybe_46_61_61))
, useLabel(CF_Prelude_46Eq_46Text_46XML_46HaXml_46Posn_46Posn)
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v535)
,};
Node FN_Prelude_46Eq_46Text_46XML_46HaXml_46Posn_46Posn_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v535: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46Text_46XML_46HaXml_46Posn_46Posn_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Text_46XML_46HaXml_46Posn_46Posn_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46Text_46XML_46HaXml_46Posn_46Posn)
, bytes2word(0,0,0,0)
, useLabel(CT_v536)
,};
Node FN_Prelude_46Eq_46Text_46XML_46HaXml_46Posn_46Posn[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v536: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Text_46XML_46HaXml_46Posn_46Posn[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Text_46XML_46HaXml_46Posn_46Posn))
, useLabel(F0_Prelude_46Eq_46Text_46XML_46HaXml_46Posn_46Posn_46_47_61)
, useLabel(F0_Prelude_46Eq_46Text_46XML_46HaXml_46Posn_46Posn_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v537)
,};
Node FN_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v537: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn))
, useLabel(F0_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn_46showsPrec)
, useLabel(F0_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn_46showsType)
, useLabel(F0_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn_46showList)
, useLabel(F0_Prelude_46Show_46Text_46XML_46HaXml_46Posn_46Posn_46show)
,	/* ST_v510: (byte 0) */
  bytes2word(10,32,32,32)
, bytes2word(32,117,115,101)
, bytes2word(100,32,98,121)
,	/* ST_v514: (byte 3) */
  bytes2word(32,32,0,32)
, bytes2word(32,97,116,32)
, bytes2word(108,105,110,101)
,	/* ST_v512: (byte 2) */
  bytes2word(32,0,32,99)
,	/* ST_v516: (byte 4) */
  bytes2word(111,108,32,0)
, bytes2word(102,105,108,101)
,	/* ST_v523: (byte 2) */
  bytes2word(32,0,110,111)
, bytes2word(32,114,101,99)
, bytes2word(111,114,100,101)
, bytes2word(100,32,112,111)
, bytes2word(115,105,116,105)
,	/* ST_v495: (byte 3) */
  bytes2word(111,110,0,112)
, bytes2word(114,101,99,111)
, bytes2word(110,100,105,116)
, bytes2word(105,111,110,32)
, bytes2word(110,111,116,32)
, bytes2word(115,97,116,105)
, bytes2word(115,102,105,101)
, bytes2word(100,58,32,80)
, bytes2word(111,115,110,46)
, bytes2word(119,104,105,116)
, bytes2word(101,32,99,32)
, bytes2word(124,32,105,115)
, bytes2word(83,112,97,99)
, bytes2word(101,32,99,0)
,};
