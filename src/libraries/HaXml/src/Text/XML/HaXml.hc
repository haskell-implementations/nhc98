#include "newmacros.h"
#include "runtime.h"

#define CT_v451	((void*)startLabel+20)
#define FN_LAMBDA449	((void*)startLabel+44)
#define CT_v453	((void*)startLabel+64)
#define CF_LAMBDA449	((void*)startLabel+72)
#define ST_v452	((void*)startLabel+76)

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v451)
,};
Node FN_Text_46XML_46HaXml_46version[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v451: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Text_46XML_46HaXml_46version[] = {
  VAPTAG(useLabel(FN_Text_46XML_46HaXml_46version))
, VAPTAG(useLabel(FN_LAMBDA449))
, bytes2word(0,0,0,0)
, useLabel(CT_v453)
,	/* FN_LAMBDA449: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v452)
,	/* CT_v453: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA449: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA449))
,	/* ST_v452: (byte 0) */
  bytes2word(86,69,82,83)
, bytes2word(73,79,78,0)
,};
