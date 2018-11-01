#include "newmacros.h"
#include "runtime.h"

#define CT_v454	((void*)startLabel+56)
#define FN_LAMBDA449	((void*)startLabel+96)
#define CT_v458	((void*)startLabel+140)
#define CF_LAMBDA449	((void*)startLabel+148)
#define ST_v450	((void*)startLabel+168)
#define ST_v452	((void*)startLabel+184)
#define PP_LAMBDA449	((void*)startLabel+207)
#define PC_LAMBDA449	((void*)startLabel+207)
#define ST_v456	((void*)startLabel+207)
#define ST_v457	((void*)startLabel+242)
#define PS_v451	((void*)startLabel+252)
#define PS_v453	((void*)startLabel+264)
#define PS_v455	((void*)startLabel+276)

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v454)
,};
Node FN_Text_46XML_46HaXml_46version[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v453)
, 0
, 0
, 0
, 0
, 350001
, useLabel(ST_v452)
,	/* CT_v454: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Text_46XML_46HaXml_46version[] = {
  VAPTAG(useLabel(FN_Text_46XML_46HaXml_46version))
, useLabel(PS_v451)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA449))
, bytes2word(0,0,0,0)
, useLabel(CT_v458)
,	/* FN_LAMBDA449: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v457)
, 350012
, useLabel(ST_v456)
,	/* CT_v458: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA449: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA449))
, useLabel(PS_v455)
, 0
, 0
, 0
,};
Node PM_Text_46XML_46HaXml[] = {
 	/* ST_v450: (byte 0) */
  bytes2word(84,101,120,116)
, bytes2word(46,88,77,76)
, bytes2word(46,72,97,88)
, bytes2word(109,108,0,0)
,};
Node PP_Text_46XML_46HaXml_46version[] = {
 };
Node PC_Text_46XML_46HaXml_46version[] = {
 	/* ST_v452: (byte 0) */
  bytes2word(84,101,120,116)
, bytes2word(46,88,77,76)
, bytes2word(46,72,97,88)
, bytes2word(109,108,46,118)
, bytes2word(101,114,115,105)
,	/* PP_LAMBDA449: (byte 3) */
 	/* PC_LAMBDA449: (byte 3) */
 	/* ST_v456: (byte 3) */
  bytes2word(111,110,0,84)
, bytes2word(101,120,116,46)
, bytes2word(88,77,76,46)
, bytes2word(72,97,88,109)
, bytes2word(108,46,118,101)
, bytes2word(114,115,105,111)
, bytes2word(110,58,51,53)
, bytes2word(58,49,50,45)
, bytes2word(51,53,58,50)
,	/* ST_v457: (byte 2) */
  bytes2word(48,0,86,69)
, bytes2word(82,83,73,79)
, bytes2word(78,0,0,0)
,	/* PS_v451: (byte 0) */
  useLabel(PM_Text_46XML_46HaXml)
, useLabel(PP_Text_46XML_46HaXml_46version)
, useLabel(PC_Text_46XML_46HaXml_46version)
,	/* PS_v453: (byte 0) */
  useLabel(PM_Text_46XML_46HaXml)
, useLabel(PP_Text_46XML_46HaXml_46version)
, useLabel(PC_LAMBDA449)
,	/* PS_v455: (byte 0) */
  useLabel(PM_Text_46XML_46HaXml)
, useLabel(PP_LAMBDA449)
, useLabel(PC_LAMBDA449)
,};
