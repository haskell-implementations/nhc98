#include "newmacros.h"
#include "runtime.h"

#define v394	((void*)startLabel+22)
#define v391	((void*)startLabel+26)
#define v388	((void*)startLabel+54)
#define CT_v396	((void*)startLabel+68)
#define FN_LAMBDA385	((void*)startLabel+104)
#define CT_v398	((void*)startLabel+124)
#define CF_LAMBDA385	((void*)startLabel+132)
#define CT_v399	((void*)startLabel+156)
#define v404	((void*)startLabel+190)
#define v403	((void*)startLabel+194)
#define v400	((void*)startLabel+199)
#define CT_v405	((void*)startLabel+212)
#define FN_LAMBDA386	((void*)startLabel+240)
#define CT_v407	((void*)startLabel+260)
#define CF_LAMBDA386	((void*)startLabel+268)
#define CT_v411	((void*)startLabel+312)
#define ST_v397	((void*)startLabel+324)
#define ST_v406	((void*)startLabel+394)
extern Node FN_Prelude_46concatMap[];
extern Node F0_Text_46XML_46HaXml_46Verbatim_46Verbatim_46Text_46XML_46HaXml_46Types_46Content_46verbatim[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v396)
,};
Node FN_Text_46XML_46HaXml_46Util_46tagTextContent[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v394: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v391: (byte 2) */
  bytes2word(30,0,UNPACK,2)
, bytes2word(PUSH_P1,0,ZAP_STACK_P1,2)
, bytes2word(ZAP_STACK_P1,1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,3,PUSH_P1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
,	/* v388: (byte 2) */
  bytes2word(1,RETURN_EVAL,HEAP_CVAL_I5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v396: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Text_46XML_46HaXml_46Util_46tagTextContent[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Util_46tagTextContent),1)
, VAPTAG(useLabel(FN_Prelude_46concatMap))
, useLabel(F0_Text_46XML_46HaXml_46Verbatim_46Verbatim_46Text_46XML_46HaXml_46Types_46Content_46verbatim)
, VAPTAG(useLabel(FN_LAMBDA385))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v398)
,	/* FN_LAMBDA385: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v397)
,	/* CT_v398: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA385: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA385))
, bytes2word(1,0,0,1)
, useLabel(CT_v399)
,};
Node FN_Text_46XML_46HaXml_46Util_46attrs[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v399: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Text_46XML_46HaXml_46Util_46attrs[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Util_46attrs),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v405)
,};
Node FN_Text_46XML_46HaXml_46Util_46contentElem[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v404: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v403: (byte 2) */
  bytes2word(7,0,UNPACK,2)
,	/* v400: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v405: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Text_46XML_46HaXml_46Util_46contentElem[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Util_46contentElem),1)
, VAPTAG(useLabel(FN_LAMBDA386))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v407)
,	/* FN_LAMBDA386: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v406)
,	/* CT_v407: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA386: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA386))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v411)
,};
Node FN_Text_46XML_46HaXml_46Util_46docContent[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v411: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Text_46XML_46HaXml_46Util_46docContent[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Util_46docContent),2)
,	/* ST_v397: (byte 0) */
  bytes2word(84,101,120,116)
, bytes2word(46,88,77,76)
, bytes2word(46,72,97,88)
, bytes2word(109,108,46,85)
, bytes2word(116,105,108,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,51,53)
, bytes2word(58,49,45,51)
, bytes2word(53,58,54,52)
,	/* ST_v406: (byte 2) */
  bytes2word(46,0,99,111)
, bytes2word(110,116,101,110)
, bytes2word(116,32,105,115)
, bytes2word(32,110,111,116)
, bytes2word(32,97,32,67)
, bytes2word(69,108,101,109)
, bytes2word(0,0,0,0)
,};
