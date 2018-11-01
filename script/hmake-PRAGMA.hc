#include "newmacros.h"
#include "runtime.h"

#define v262	((void*)startLabel+30)
#define v264	((void*)startLabel+42)
#define CT_v266	((void*)startLabel+56)
#define FN_LAMBDA255	((void*)startLabel+108)
#define CT_v268	((void*)startLabel+128)
#define CF_LAMBDA255	((void*)startLabel+136)
#define FN_LAMBDA254	((void*)startLabel+148)
#define CT_v270	((void*)startLabel+168)
#define CF_LAMBDA254	((void*)startLabel+176)
#define FN_LAMBDA253	((void*)startLabel+188)
#define CT_v272	((void*)startLabel+208)
#define CF_LAMBDA253	((void*)startLabel+216)
#define CT_v273	((void*)startLabel+240)
#define FN_LAMBDA256	((void*)startLabel+268)
#define CT_v274	((void*)startLabel+292)
#define F0_LAMBDA256	((void*)startLabel+300)
#define v275	((void*)startLabel+346)
#define v277	((void*)startLabel+358)
#define CT_v279	((void*)startLabel+372)
#define FN_LAMBDA259	((void*)startLabel+424)
#define CT_v281	((void*)startLabel+444)
#define CF_LAMBDA259	((void*)startLabel+452)
#define FN_LAMBDA258	((void*)startLabel+464)
#define CT_v282	((void*)startLabel+484)
#define CF_LAMBDA258	((void*)startLabel+492)
#define FN_LAMBDA257	((void*)startLabel+504)
#define CT_v284	((void*)startLabel+524)
#define CF_LAMBDA257	((void*)startLabel+532)
#define CT_v285	((void*)startLabel+556)
#define CT_v286	((void*)startLabel+632)
#define CT_v287	((void*)startLabel+716)
#define FN_LAMBDA260	((void*)startLabel+768)
#define CT_v289	((void*)startLabel+788)
#define CF_LAMBDA260	((void*)startLabel+796)
#define ST_v269	((void*)startLabel+800)
#define ST_v288	((void*)startLabel+801)
#define ST_v280	((void*)startLabel+803)
#define ST_v267	((void*)startLabel+858)
#define ST_v283	((void*)startLabel+913)
#define ST_v271	((void*)startLabel+917)
extern Node FN_List_46isPrefixOf[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node FN_Prelude_46drop[];
extern Node CF_Prelude_46otherwise[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Prelude_46dropWhile[];
extern Node FN_Char_46isAlphaNum[];
extern Node FN_Prelude_46Eq_46Prelude_46Char_46_61_61[];
extern Node FN_Prelude_46_124_124[];
extern Node F0_Char_46isSpace[];
extern Node FN_Prelude_46_46[];
extern Node CF_Prelude_46reverse[];
extern Node FN_List_46intersperse[];
extern Node FN_Prelude_46map[];
extern Node F0_Prelude_46lines[];
extern Node CF_Prelude_46concat[];
extern Node FN_Prelude_46interact[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v266)
,};
Node FN_Main_46ket[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(10,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_INT_P1,3,HEAP_ARG)
,	/* v262: (byte 2) */
  bytes2word(1,RETURN_EVAL,PUSH_CVAL_P1,7)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(6,0,PUSH_HEAP,HEAP_CVAL_P1)
,	/* v264: (byte 2) */
  bytes2word(8,RETURN_EVAL,HEAP_CVAL_P1,9)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v266: (byte 0) */
  HW(8,1)
, 0
,};
Node F0_Main_46ket[] = {
  CAPTAG(useLabel(FN_Main_46ket),1)
, VAPTAG(useLabel(FN_LAMBDA253))
, VAPTAG(useLabel(FN_List_46isPrefixOf))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, VAPTAG(useLabel(FN_Prelude_46drop))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_LAMBDA254))
, VAPTAG(useLabel(FN_LAMBDA255))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v268)
,	/* FN_LAMBDA255: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v267)
,	/* CT_v268: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA255: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA255))
, bytes2word(0,0,0,0)
, useLabel(CT_v270)
,	/* FN_LAMBDA254: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v269)
,	/* CT_v270: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA254: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA254))
, bytes2word(0,0,0,0)
, useLabel(CT_v272)
,	/* FN_LAMBDA253: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v271)
,	/* CT_v272: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA253: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA253))
, bytes2word(0,0,0,0)
, useLabel(CT_v273)
,};
Node FN_Main_46name[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v273: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Main_46name[] = {
  VAPTAG(useLabel(FN_Main_46name))
, CAPTAG(useLabel(FN_LAMBDA256),1)
, CAPTAG(useLabel(FN_Prelude_46dropWhile),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v274)
,	/* FN_LAMBDA256: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CHAR_P1)
, bytes2word(95,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v274: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA256: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA256),1)
, VAPTAG(useLabel(FN_Char_46isAlphaNum))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Char_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
, bytes2word(1,0,0,1)
, useLabel(CT_v279)
,};
Node FN_Main_46bra[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(10,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_INT_P1,3,HEAP_ARG)
,	/* v275: (byte 2) */
  bytes2word(1,RETURN_EVAL,PUSH_CVAL_P1,7)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(6,0,PUSH_HEAP,HEAP_CVAL_P1)
,	/* v277: (byte 2) */
  bytes2word(8,RETURN_EVAL,HEAP_CVAL_P1,9)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v279: (byte 0) */
  HW(8,1)
, 0
,};
Node F0_Main_46bra[] = {
  CAPTAG(useLabel(FN_Main_46bra),1)
, VAPTAG(useLabel(FN_LAMBDA257))
, VAPTAG(useLabel(FN_List_46isPrefixOf))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, VAPTAG(useLabel(FN_Prelude_46drop))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_LAMBDA258))
, VAPTAG(useLabel(FN_LAMBDA259))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v281)
,	/* FN_LAMBDA259: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v280)
,	/* CT_v281: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA259: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA259))
, bytes2word(0,0,0,0)
, useLabel(CT_v282)
,	/* FN_LAMBDA258: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v269)
,	/* CT_v282: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA258: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA258))
, bytes2word(0,0,0,0)
, useLabel(CT_v284)
,	/* FN_LAMBDA257: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v283)
,	/* CT_v284: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA257: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA257))
, bytes2word(0,0,0,0)
, useLabel(CT_v285)
,};
Node FN_Main_46space[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v285: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Main_46space[] = {
  VAPTAG(useLabel(FN_Main_46space))
, CAPTAG(useLabel(FN_Prelude_46dropWhile),1)
, useLabel(F0_Char_46isSpace)
, bytes2word(0,0,0,0)
, useLabel(CT_v286)
,};
Node FN_Main_46pragma[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I5,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_I3,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_I3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_I3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_I3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,5,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v286: (byte 0) */
  HW(6,0)
, 0
,};
Node CF_Main_46pragma[] = {
  VAPTAG(useLabel(FN_Main_46pragma))
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Main_46bra)
, useLabel(CF_Main_46space)
, useLabel(CF_Main_46name)
, useLabel(CF_Prelude_46reverse)
, useLabel(F0_Main_46ket)
, bytes2word(0,0,0,0)
, useLabel(CT_v287)
,};
Node FN_Main_46main[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v287: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Main_46main[] = {
  VAPTAG(useLabel(FN_Main_46main))
, VAPTAG(useLabel(FN_LAMBDA260))
, CAPTAG(useLabel(FN_List_46intersperse),1)
, CAPTAG(useLabel(FN_Prelude_46map),1)
, useLabel(CF_Main_46pragma)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46lines)
, useLabel(CF_Prelude_46concat)
, VAPTAG(useLabel(FN_Prelude_46interact))
, bytes2word(0,0,0,0)
, useLabel(CT_v289)
,	/* FN_LAMBDA260: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v288)
,	/* CT_v289: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA260: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA260))
,	/* ST_v269: (byte 0) */
 	/* ST_v288: (byte 1) */
 	/* ST_v280: (byte 3) */
  bytes2word(0,32,0,77)
, bytes2word(97,105,110,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,50,53)
, bytes2word(58,49,45,50)
, bytes2word(54,58,51,53)
,	/* ST_v267: (byte 2) */
  bytes2word(46,0,77,97)
, bytes2word(105,110,58,32)
, bytes2word(80,97,116,116)
, bytes2word(101,114,110,32)
, bytes2word(109,97,116,99)
, bytes2word(104,32,102,97)
, bytes2word(105,108,117,114)
, bytes2word(101,32,105,110)
, bytes2word(32,102,117,110)
, bytes2word(99,116,105,111)
, bytes2word(110,32,97,116)
, bytes2word(32,50,55,58)
, bytes2word(49,45,50,56)
, bytes2word(58,51,53,46)
,	/* ST_v283: (byte 1) */
  bytes2word(0,123,45,35)
,	/* ST_v271: (byte 1) */
  bytes2word(0,125,45,35)
, bytes2word(0,0,0,0)
,};
