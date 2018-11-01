#include "newmacros.h"
#include "runtime.h"

#define CT_v166	((void*)startLabel+20)
#define FN_LAMBDA164	((void*)startLabel+48)
#define CT_v168	((void*)startLabel+68)
#define CF_LAMBDA164	((void*)startLabel+76)
#define ST_v167	((void*)startLabel+80)
extern Node FN_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v166)
,};
Node FN_Prelude_46_95zap_95stack[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v166: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46_95zap_95stack[] = {
  VAPTAG(useLabel(FN_Prelude_46_95zap_95stack))
, VAPTAG(useLabel(FN_LAMBDA164))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v168)
,	/* FN_LAMBDA164: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v167)
,	/* CT_v168: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA164: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA164))
,	/* ST_v167: (byte 0) */
  bytes2word(69,118,97,108)
, bytes2word(117,97,116,105)
, bytes2word(110,103,32,122)
, bytes2word(97,112,112,101)
, bytes2word(100,32,112,97)
, bytes2word(114,116,32,111)
, bytes2word(102,32,116,104)
, bytes2word(101,32,115,116)
, bytes2word(97,99,107,0)
,};
