#include "newmacros.h"
#include "runtime.h"

#define v196	((void*)startLabel+26)
#define v197	((void*)startLabel+30)
#define v202	((void*)startLabel+55)
#define v204	((void*)startLabel+70)
#define v198	((void*)startLabel+75)
#define v193	((void*)startLabel+80)
#define CT_v209	((void*)startLabel+108)
#define FN_LAMBDA191	((void*)startLabel+144)
#define CT_v212	((void*)startLabel+176)
#define CF_LAMBDA191	((void*)startLabel+184)
#define ST_v206	((void*)startLabel+188)
#define ST_v210	((void*)startLabel+202)
#define ST_v211	((void*)startLabel+225)
extern Node TM_List[];
extern Node CF_Prelude_46otherwise[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node TMSUB_List[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v209)
,};
Node FN_List_46lookupBy[] = {
  useLabel(TM_List)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v196: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v197: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,PUSH_ARG_I2)
, bytes2word(PUSH_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(7,0,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v202: (byte 3) */
  bytes2word(4,HEAP_I2,RETURN,PUSH_CVAL_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(10,0,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_P1)
,	/* v204: (byte 2) */
  bytes2word(4,RETURN_EVAL,POP_P1,2)
,	/* v198: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v193: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(HEAP_CVAL_I5,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v206)
,	/* CT_v209: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_List_46lookupBy[] = {
  CAPTAG(useLabel(FN_List_46lookupBy),3)
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_List_46lookupBy))
, VAPTAG(useLabel(FN_LAMBDA191))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v212)
,	/* FN_LAMBDA191: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v211)
, 40001
, useLabel(ST_v210)
,	/* CT_v212: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA191: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA191))
,	/* ST_v206: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,108,111,111)
, bytes2word(107,117,112,66)
,	/* ST_v210: (byte 2) */
  bytes2word(121,0,76,105)
, bytes2word(115,116,46,108)
, bytes2word(111,111,107,117)
, bytes2word(112,66,121,58)
, bytes2word(52,58,49,45)
, bytes2word(55,58,52,54)
,	/* ST_v211: (byte 1) */
  bytes2word(0,76,105,115)
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
, bytes2word(52,58,49,45)
, bytes2word(55,58,52,54)
, bytes2word(46,0,0,0)
,};
