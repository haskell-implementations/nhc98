#include "newmacros.h"
#include "runtime.h"

#define CT_v207	((void*)startLabel+36)
#define FN_LAMBDA204	((void*)startLabel+64)
#define CT_v209	((void*)startLabel+108)
#define F0_LAMBDA204	((void*)startLabel+116)
#define FN_LAMBDA203	((void*)startLabel+148)
#define CT_v214	((void*)startLabel+192)
#define F0_LAMBDA203	((void*)startLabel+200)
#define FN_LAMBDA202	((void*)startLabel+232)
#define CT_v215	((void*)startLabel+272)
#define F0_LAMBDA202	((void*)startLabel+280)
#define ST_v206	((void*)startLabel+284)
#define ST_v208	((void*)startLabel+301)
#define ST_v212	((void*)startLabel+328)
extern Node TM_Prelude[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46Eq_46Prelude_46_91_93_46_61_61[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node FN_Prelude_46_95filter[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v207)
,};
Node FN_Prelude_46_95readCon[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v206)
,	/* CT_v207: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46_95readCon[] = {
  CAPTAG(useLabel(FN_Prelude_46_95readCon),2)
, CAPTAG(useLabel(FN_LAMBDA204),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v209)
,	/* FN_LAMBDA204: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 80010
, useLabel(ST_v208)
,	/* CT_v209: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA204: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA204),3)
, CAPTAG(useLabel(FN_LAMBDA203),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v214)
,	/* FN_LAMBDA203: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_P1,0,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,2,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 80017
, useLabel(ST_v212)
,	/* CT_v214: (byte 0) */
  HW(4,4)
, 0
,	/* F0_LAMBDA203: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA203),4)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46_91_93_46_61_61))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, CAPTAG(useLabel(FN_LAMBDA202),1)
, VAPTAG(useLabel(FN_Prelude_46_95filter))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v215)
,	/* FN_LAMBDA202: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 80017
, useLabel(ST_v212)
,	/* CT_v215: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA202: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA202),3)
,	/* ST_v206: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,114,101,97)
, bytes2word(100,67,111,110)
,	/* ST_v208: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,95,114,101)
, bytes2word(97,100,67,111)
, bytes2word(110,58,56,58)
, bytes2word(49,48,45,57)
,	/* ST_v212: (byte 4) */
  bytes2word(58,52,54,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,114,101,97)
, bytes2word(100,67,111,110)
, bytes2word(58,56,58,49)
, bytes2word(55,45,57,58)
, bytes2word(52,54,0,0)
,};
