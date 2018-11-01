#include "newmacros.h"
#include "runtime.h"

#define CT_v452	((void*)startLabel+32)
#define FN_LAMBDA449	((void*)startLabel+56)
#define CT_v455	((void*)startLabel+88)
#define CF_LAMBDA449	((void*)startLabel+96)
#define ST_v450	((void*)startLabel+100)
#define ST_v451	((void*)startLabel+115)
#define ST_v453	((void*)startLabel+138)
#define ST_v454	((void*)startLabel+173)
extern Node TM_Text_46XML_46HaXml[];
extern Node TMSUB_Text_46XML_46HaXml[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v452)
,};
Node FN_Text_46XML_46HaXml_46version[] = {
  useLabel(TM_Text_46XML_46HaXml)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 350001
, useLabel(ST_v451)
,	/* CT_v452: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Text_46XML_46HaXml_46version[] = {
  VAPTAG(useLabel(FN_Text_46XML_46HaXml_46version))
, VAPTAG(useLabel(FN_LAMBDA449))
, bytes2word(0,0,0,0)
, useLabel(CT_v455)
,	/* FN_LAMBDA449: (byte 0) */
  useLabel(TMSUB_Text_46XML_46HaXml)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v454)
, 350012
, useLabel(ST_v453)
,	/* CT_v455: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA449: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA449))
,};
Node PM_Text_46XML_46HaXml[] = {
 	/* ST_v450: (byte 0) */
  bytes2word(84,101,120,116)
, bytes2word(46,88,77,76)
, bytes2word(46,72,97,88)
,	/* ST_v451: (byte 3) */
  bytes2word(109,108,0,84)
, bytes2word(101,120,116,46)
, bytes2word(88,77,76,46)
, bytes2word(72,97,88,109)
, bytes2word(108,46,118,101)
, bytes2word(114,115,105,111)
,	/* ST_v453: (byte 2) */
  bytes2word(110,0,84,101)
, bytes2word(120,116,46,88)
, bytes2word(77,76,46,72)
, bytes2word(97,88,109,108)
, bytes2word(46,118,101,114)
, bytes2word(115,105,111,110)
, bytes2word(58,51,53,58)
, bytes2word(49,50,45,51)
, bytes2word(53,58,50,48)
,	/* ST_v454: (byte 1) */
  bytes2word(0,86,69,82)
, bytes2word(83,73,79,78)
, bytes2word(0,0,0,0)
,};
