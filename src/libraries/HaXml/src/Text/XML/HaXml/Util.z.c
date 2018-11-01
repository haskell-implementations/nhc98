#include "newmacros.h"
#include "runtime.h"

#define v395	((void*)startLabel+26)
#define v391	((void*)startLabel+30)
#define v388	((void*)startLabel+58)
#define CT_v397	((void*)startLabel+80)
#define FN_LAMBDA385	((void*)startLabel+116)
#define CT_v400	((void*)startLabel+148)
#define CF_LAMBDA385	((void*)startLabel+156)
#define CT_v402	((void*)startLabel+192)
#define v408	((void*)startLabel+230)
#define v406	((void*)startLabel+234)
#define v403	((void*)startLabel+239)
#define CT_v409	((void*)startLabel+260)
#define FN_LAMBDA386	((void*)startLabel+288)
#define CT_v412	((void*)startLabel+320)
#define CF_LAMBDA386	((void*)startLabel+328)
#define CT_v417	((void*)startLabel+384)
#define ST_v387	((void*)startLabel+396)
#define ST_v401	((void*)startLabel+416)
#define ST_v407	((void*)startLabel+442)
#define ST_v410	((void*)startLabel+474)
#define ST_v415	((void*)startLabel+518)
#define ST_v394	((void*)startLabel+549)
#define ST_v398	((void*)startLabel+584)
#define ST_v399	((void*)startLabel+630)
#define ST_v411	((void*)startLabel+700)
extern Node TM_Text_46XML_46HaXml_46Util[];
extern Node FN_Prelude_46concatMap[];
extern Node F0_Text_46XML_46HaXml_46Verbatim_46Verbatim_46Text_46XML_46HaXml_46Types_46Content_46verbatim[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node TMSUB_Text_46XML_46HaXml_46Util[];
extern Node FN_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v397)
,};
Node FN_Text_46XML_46HaXml_46Util_46tagTextContent[] = {
  useLabel(TM_Text_46XML_46HaXml_46Util)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v395: (byte 2) */
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
, 350001
, useLabel(ST_v394)
,	/* CT_v397: (byte 0) */
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
, useLabel(CT_v400)
,	/* FN_LAMBDA385: (byte 0) */
  useLabel(TMSUB_Text_46XML_46HaXml_46Util)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v399)
, 350001
, useLabel(ST_v398)
,	/* CT_v400: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA385: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA385))
, bytes2word(1,0,0,1)
, useLabel(CT_v402)
,};
Node FN_Text_46XML_46HaXml_46Util_46attrs[] = {
  useLabel(TM_Text_46XML_46HaXml_46Util)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 320001
, useLabel(ST_v401)
,	/* CT_v402: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Text_46XML_46HaXml_46Util_46attrs[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Util_46attrs),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v409)
,};
Node FN_Text_46XML_46HaXml_46Util_46contentElem[] = {
  useLabel(TM_Text_46XML_46HaXml_46Util)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v408: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v406: (byte 2) */
  bytes2word(7,0,UNPACK,2)
,	/* v403: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 280001
, useLabel(ST_v407)
,	/* CT_v409: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Text_46XML_46HaXml_46Util_46contentElem[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Util_46contentElem),1)
, VAPTAG(useLabel(FN_LAMBDA386))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v412)
,	/* FN_LAMBDA386: (byte 0) */
  useLabel(TMSUB_Text_46XML_46HaXml_46Util)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v411)
, 290023
, useLabel(ST_v410)
,	/* CT_v412: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA386: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA386))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v417)
,};
Node FN_Text_46XML_46HaXml_46Util_46docContent[] = {
  useLabel(TM_Text_46XML_46HaXml_46Util)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,4,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_P1,3,HEAP_ARG,1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 230001
, useLabel(ST_v415)
,	/* CT_v417: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Text_46XML_46HaXml_46Util_46docContent[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Util_46docContent),2)
,};
Node PM_Text_46XML_46HaXml_46Util[] = {
 	/* ST_v387: (byte 0) */
  bytes2word(84,101,120,116)
, bytes2word(46,88,77,76)
, bytes2word(46,72,97,88)
, bytes2word(109,108,46,85)
,	/* ST_v401: (byte 4) */
  bytes2word(116,105,108,0)
, bytes2word(84,101,120,116)
, bytes2word(46,88,77,76)
, bytes2word(46,72,97,88)
, bytes2word(109,108,46,85)
, bytes2word(116,105,108,46)
, bytes2word(97,116,116,114)
,	/* ST_v407: (byte 2) */
  bytes2word(115,0,84,101)
, bytes2word(120,116,46,88)
, bytes2word(77,76,46,72)
, bytes2word(97,88,109,108)
, bytes2word(46,85,116,105)
, bytes2word(108,46,99,111)
, bytes2word(110,116,101,110)
, bytes2word(116,69,108,101)
,	/* ST_v410: (byte 2) */
  bytes2word(109,0,84,101)
, bytes2word(120,116,46,88)
, bytes2word(77,76,46,72)
, bytes2word(97,88,109,108)
, bytes2word(46,85,116,105)
, bytes2word(108,46,99,111)
, bytes2word(110,116,101,110)
, bytes2word(116,69,108,101)
, bytes2word(109,58,50,57)
, bytes2word(58,50,51,45)
, bytes2word(50,57,58,52)
,	/* ST_v415: (byte 2) */
  bytes2word(54,0,84,101)
, bytes2word(120,116,46,88)
, bytes2word(77,76,46,72)
, bytes2word(97,88,109,108)
, bytes2word(46,85,116,105)
, bytes2word(108,46,100,111)
, bytes2word(99,67,111,110)
, bytes2word(116,101,110,116)
,	/* ST_v394: (byte 1) */
  bytes2word(0,84,101,120)
, bytes2word(116,46,88,77)
, bytes2word(76,46,72,97)
, bytes2word(88,109,108,46)
, bytes2word(85,116,105,108)
, bytes2word(46,116,97,103)
, bytes2word(84,101,120,116)
, bytes2word(67,111,110,116)
,	/* ST_v398: (byte 4) */
  bytes2word(101,110,116,0)
, bytes2word(84,101,120,116)
, bytes2word(46,88,77,76)
, bytes2word(46,72,97,88)
, bytes2word(109,108,46,85)
, bytes2word(116,105,108,46)
, bytes2word(116,97,103,84)
, bytes2word(101,120,116,67)
, bytes2word(111,110,116,101)
, bytes2word(110,116,58,51)
, bytes2word(53,58,49,45)
, bytes2word(51,53,58,54)
,	/* ST_v399: (byte 2) */
  bytes2word(52,0,84,101)
, bytes2word(120,116,46,88)
, bytes2word(77,76,46,72)
, bytes2word(97,88,109,108)
, bytes2word(46,85,116,105)
, bytes2word(108,58,32,80)
, bytes2word(97,116,116,101)
, bytes2word(114,110,32,109)
, bytes2word(97,116,99,104)
, bytes2word(32,102,97,105)
, bytes2word(108,117,114,101)
, bytes2word(32,105,110,32)
, bytes2word(102,117,110,99)
, bytes2word(116,105,111,110)
, bytes2word(32,97,116,32)
, bytes2word(51,53,58,49)
, bytes2word(45,51,53,58)
,	/* ST_v411: (byte 4) */
  bytes2word(54,52,46,0)
, bytes2word(99,111,110,116)
, bytes2word(101,110,116,32)
, bytes2word(105,115,32,110)
, bytes2word(111,116,32,97)
, bytes2word(32,67,69,108)
, bytes2word(101,109,0,0)
,};
