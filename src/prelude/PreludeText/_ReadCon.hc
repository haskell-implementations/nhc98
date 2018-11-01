#include "newmacros.h"
#include "runtime.h"

#define CT_v206	((void*)startLabel+24)
#define FN_LAMBDA204	((void*)startLabel+52)
#define CT_v207	((void*)startLabel+84)
#define F0_LAMBDA204	((void*)startLabel+92)
#define FN_LAMBDA203	((void*)startLabel+124)
#define CT_v211	((void*)startLabel+156)
#define F0_LAMBDA203	((void*)startLabel+164)
#define FN_LAMBDA202	((void*)startLabel+196)
#define CT_v212	((void*)startLabel+224)
#define F0_LAMBDA202	((void*)startLabel+232)
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46Eq_46Prelude_46_91_93_46_61_61[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node FN_Prelude_46_95filter[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v206)
,};
Node FN_Prelude_46_95readCon[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v206: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46_95readCon[] = {
  CAPTAG(useLabel(FN_Prelude_46_95readCon),2)
, CAPTAG(useLabel(FN_LAMBDA204),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v207)
,	/* FN_LAMBDA204: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_N1,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v207: (byte 0) */
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
, useLabel(CT_v211)
,	/* FN_LAMBDA203: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_P1,0,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,2,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v211: (byte 0) */
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
, useLabel(CT_v212)
,	/* FN_LAMBDA202: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v212: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA202: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA202),3)
,};
