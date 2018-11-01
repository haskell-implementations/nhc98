#include "newmacros.h"
#include "runtime.h"

#define v396	((void*)startLabel+22)
#define v391	((void*)startLabel+26)
#define v388	((void*)startLabel+61)
#define CT_v401	((void*)startLabel+156)
#define FN_LAMBDA385	((void*)startLabel+208)
#define CT_v405	((void*)startLabel+252)
#define CF_LAMBDA385	((void*)startLabel+260)
#define CT_v408	((void*)startLabel+308)
#define v415	((void*)startLabel+358)
#define v412	((void*)startLabel+362)
#define v409	((void*)startLabel+367)
#define CT_v418	((void*)startLabel+440)
#define FN_LAMBDA386	((void*)startLabel+484)
#define CT_v422	((void*)startLabel+528)
#define CF_LAMBDA386	((void*)startLabel+536)
#define CT_v429	((void*)startLabel+640)
#define ST_v387	((void*)startLabel+668)
#define ST_v407	((void*)startLabel+688)
#define ST_v414	((void*)startLabel+716)
#define PP_LAMBDA386	((void*)startLabel+748)
#define PC_LAMBDA386	((void*)startLabel+748)
#define ST_v420	((void*)startLabel+748)
#define ST_v426	((void*)startLabel+792)
#define ST_v395	((void*)startLabel+824)
#define PP_LAMBDA385	((void*)startLabel+859)
#define PC_LAMBDA385	((void*)startLabel+859)
#define ST_v403	((void*)startLabel+859)
#define ST_v404	((void*)startLabel+905)
#define ST_v421	((void*)startLabel+975)
#define PS_v428	((void*)startLabel+1000)
#define PS_v425	((void*)startLabel+1012)
#define PS_v417	((void*)startLabel+1024)
#define PS_v413	((void*)startLabel+1036)
#define PS_v416	((void*)startLabel+1048)
#define PS_v406	((void*)startLabel+1060)
#define PS_v400	((void*)startLabel+1072)
#define PS_v398	((void*)startLabel+1084)
#define PS_v394	((void*)startLabel+1096)
#define PS_v399	((void*)startLabel+1108)
#define PS_v402	((void*)startLabel+1120)
#define PS_v419	((void*)startLabel+1132)
extern Node FN_Prelude_46concatMap[];
extern Node F0_Text_46XML_46HaXml_46Verbatim_46Verbatim_46Text_46XML_46HaXml_46Types_46Content_46verbatim[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Prelude_46error[];
extern Node PC_Text_46XML_46HaXml_46Types_46CElem[];
extern Node PC_Prelude_46error[];
extern Node PC_NHC_46Internal_46_95patternMatchFail[];
extern Node PC_Prelude_46concatMap[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v401)
,};
Node FN_Text_46XML_46HaXml_46Util_46tagTextContent[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v396: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v391: (byte 2) */
  bytes2word(37,0,UNPACK,2)
, bytes2word(PUSH_P1,0,ZAP_STACK_P1,2)
, bytes2word(ZAP_STACK_P1,1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,3,PUSH_P1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
,	/* v388: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v400)
, 0
, 0
, 0
, 0
, useLabel(PS_v399)
, 0
, 0
, 0
, 0
, useLabel(PS_v398)
, 0
, 0
, 0
, 0
, 350001
, useLabel(ST_v395)
,	/* CT_v401: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Text_46XML_46HaXml_46Util_46tagTextContent[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Util_46tagTextContent),1)
, useLabel(PS_v394)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46concatMap))
, useLabel(F0_Text_46XML_46HaXml_46Verbatim_46Verbatim_46Text_46XML_46HaXml_46Types_46Content_46verbatim)
, VAPTAG(useLabel(FN_LAMBDA385))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v405)
,	/* FN_LAMBDA385: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v404)
, 350001
, useLabel(ST_v403)
,	/* CT_v405: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA385: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA385))
, useLabel(PS_v402)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v408)
,};
Node FN_Text_46XML_46HaXml_46Util_46attrs[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 320001
, useLabel(ST_v407)
,	/* CT_v408: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Text_46XML_46HaXml_46Util_46attrs[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Util_46attrs),1)
, useLabel(PS_v406)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v418)
,};
Node FN_Text_46XML_46HaXml_46Util_46contentElem[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v415: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v412: (byte 2) */
  bytes2word(7,0,UNPACK,2)
,	/* v409: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v417)
, 0
, 0
, 0
, 0
, useLabel(PS_v416)
, 0
, 0
, 0
, 0
, 280001
, useLabel(ST_v414)
,	/* CT_v418: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Text_46XML_46HaXml_46Util_46contentElem[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Util_46contentElem),1)
, useLabel(PS_v413)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA386))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v422)
,	/* FN_LAMBDA386: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v421)
, 290023
, useLabel(ST_v420)
,	/* CT_v422: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA386: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA386))
, useLabel(PS_v419)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v429)
,};
Node FN_Text_46XML_46HaXml_46Util_46docContent[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,3)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v428)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 230001
, useLabel(ST_v426)
,	/* CT_v429: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Text_46XML_46HaXml_46Util_46docContent[] = {
  CAPTAG(useLabel(FN_Text_46XML_46HaXml_46Util_46docContent),2)
, useLabel(PS_v425)
, 0
, 0
, 0
,};
Node PM_Text_46XML_46HaXml_46Util[] = {
 	/* ST_v387: (byte 0) */
  bytes2word(84,101,120,116)
, bytes2word(46,88,77,76)
, bytes2word(46,72,97,88)
, bytes2word(109,108,46,85)
, bytes2word(116,105,108,0)
,};
Node PP_Text_46XML_46HaXml_46Util_46attrs[] = {
 };
Node PC_Text_46XML_46HaXml_46Util_46attrs[] = {
 	/* ST_v407: (byte 0) */
  bytes2word(84,101,120,116)
, bytes2word(46,88,77,76)
, bytes2word(46,72,97,88)
, bytes2word(109,108,46,85)
, bytes2word(116,105,108,46)
, bytes2word(97,116,116,114)
, bytes2word(115,0,0,0)
,};
Node PP_Text_46XML_46HaXml_46Util_46contentElem[] = {
 };
Node PC_Text_46XML_46HaXml_46Util_46contentElem[] = {
 	/* ST_v414: (byte 0) */
  bytes2word(84,101,120,116)
, bytes2word(46,88,77,76)
, bytes2word(46,72,97,88)
, bytes2word(109,108,46,85)
, bytes2word(116,105,108,46)
, bytes2word(99,111,110,116)
, bytes2word(101,110,116,69)
,	/* PP_LAMBDA386: (byte 4) */
 	/* PC_LAMBDA386: (byte 4) */
 	/* ST_v420: (byte 4) */
  bytes2word(108,101,109,0)
, bytes2word(84,101,120,116)
, bytes2word(46,88,77,76)
, bytes2word(46,72,97,88)
, bytes2word(109,108,46,85)
, bytes2word(116,105,108,46)
, bytes2word(99,111,110,116)
, bytes2word(101,110,116,69)
, bytes2word(108,101,109,58)
, bytes2word(50,57,58,50)
, bytes2word(51,45,50,57)
, bytes2word(58,52,54,0)
,};
Node PP_Text_46XML_46HaXml_46Util_46docContent[] = {
 };
Node PC_Text_46XML_46HaXml_46Util_46docContent[] = {
 	/* ST_v426: (byte 0) */
  bytes2word(84,101,120,116)
, bytes2word(46,88,77,76)
, bytes2word(46,72,97,88)
, bytes2word(109,108,46,85)
, bytes2word(116,105,108,46)
, bytes2word(100,111,99,67)
, bytes2word(111,110,116,101)
, bytes2word(110,116,0,0)
,};
Node PP_Text_46XML_46HaXml_46Util_46tagTextContent[] = {
 };
Node PC_Text_46XML_46HaXml_46Util_46tagTextContent[] = {
 	/* ST_v395: (byte 0) */
  bytes2word(84,101,120,116)
, bytes2word(46,88,77,76)
, bytes2word(46,72,97,88)
, bytes2word(109,108,46,85)
, bytes2word(116,105,108,46)
, bytes2word(116,97,103,84)
, bytes2word(101,120,116,67)
, bytes2word(111,110,116,101)
,	/* PP_LAMBDA385: (byte 3) */
 	/* PC_LAMBDA385: (byte 3) */
 	/* ST_v403: (byte 3) */
  bytes2word(110,116,0,84)
, bytes2word(101,120,116,46)
, bytes2word(88,77,76,46)
, bytes2word(72,97,88,109)
, bytes2word(108,46,85,116)
, bytes2word(105,108,46,116)
, bytes2word(97,103,84,101)
, bytes2word(120,116,67,111)
, bytes2word(110,116,101,110)
, bytes2word(116,58,51,53)
, bytes2word(58,49,45,51)
, bytes2word(53,58,54,52)
,	/* ST_v404: (byte 1) */
  bytes2word(0,84,101,120)
, bytes2word(116,46,88,77)
, bytes2word(76,46,72,97)
, bytes2word(88,109,108,46)
, bytes2word(85,116,105,108)
, bytes2word(58,32,80,97)
, bytes2word(116,116,101,114)
, bytes2word(110,32,109,97)
, bytes2word(116,99,104,32)
, bytes2word(102,97,105,108)
, bytes2word(117,114,101,32)
, bytes2word(105,110,32,102)
, bytes2word(117,110,99,116)
, bytes2word(105,111,110,32)
, bytes2word(97,116,32,51)
, bytes2word(53,58,49,45)
, bytes2word(51,53,58,54)
,	/* ST_v421: (byte 3) */
  bytes2word(52,46,0,99)
, bytes2word(111,110,116,101)
, bytes2word(110,116,32,105)
, bytes2word(115,32,110,111)
, bytes2word(116,32,97,32)
, bytes2word(67,69,108,101)
, bytes2word(109,0,0,0)
,	/* PS_v428: (byte 0) */
  useLabel(PM_Text_46XML_46HaXml_46Util)
, useLabel(PP_Text_46XML_46HaXml_46Util_46docContent)
, useLabel(PC_Text_46XML_46HaXml_46Types_46CElem)
,	/* PS_v425: (byte 0) */
  useLabel(PM_Text_46XML_46HaXml_46Util)
, useLabel(PP_Text_46XML_46HaXml_46Util_46docContent)
, useLabel(PC_Text_46XML_46HaXml_46Util_46docContent)
,	/* PS_v417: (byte 0) */
  useLabel(PM_Text_46XML_46HaXml_46Util)
, useLabel(PP_Text_46XML_46HaXml_46Util_46contentElem)
, useLabel(PC_Prelude_46error)
,	/* PS_v413: (byte 0) */
  useLabel(PM_Text_46XML_46HaXml_46Util)
, useLabel(PP_Text_46XML_46HaXml_46Util_46contentElem)
, useLabel(PC_Text_46XML_46HaXml_46Util_46contentElem)
,	/* PS_v416: (byte 0) */
  useLabel(PM_Text_46XML_46HaXml_46Util)
, useLabel(PP_Text_46XML_46HaXml_46Util_46contentElem)
, useLabel(PC_LAMBDA386)
,	/* PS_v406: (byte 0) */
  useLabel(PM_Text_46XML_46HaXml_46Util)
, useLabel(PP_Text_46XML_46HaXml_46Util_46attrs)
, useLabel(PC_Text_46XML_46HaXml_46Util_46attrs)
,	/* PS_v400: (byte 0) */
  useLabel(PM_Text_46XML_46HaXml_46Util)
, useLabel(PP_Text_46XML_46HaXml_46Util_46tagTextContent)
, useLabel(PC_NHC_46Internal_46_95patternMatchFail)
,	/* PS_v398: (byte 0) */
  useLabel(PM_Text_46XML_46HaXml_46Util)
, useLabel(PP_Text_46XML_46HaXml_46Util_46tagTextContent)
, useLabel(PC_Prelude_46concatMap)
,	/* PS_v394: (byte 0) */
  useLabel(PM_Text_46XML_46HaXml_46Util)
, useLabel(PP_Text_46XML_46HaXml_46Util_46tagTextContent)
, useLabel(PC_Text_46XML_46HaXml_46Util_46tagTextContent)
,	/* PS_v399: (byte 0) */
  useLabel(PM_Text_46XML_46HaXml_46Util)
, useLabel(PP_Text_46XML_46HaXml_46Util_46tagTextContent)
, useLabel(PC_LAMBDA385)
,	/* PS_v402: (byte 0) */
  useLabel(PM_Text_46XML_46HaXml_46Util)
, useLabel(PP_LAMBDA385)
, useLabel(PC_LAMBDA385)
,	/* PS_v419: (byte 0) */
  useLabel(PM_Text_46XML_46HaXml_46Util)
, useLabel(PP_LAMBDA386)
, useLabel(PC_LAMBDA386)
,};
