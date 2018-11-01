#include "newmacros.h"
#include "runtime.h"

#define CT_v166	((void*)startLabel+20)
#define FN_LAMBDA164	((void*)startLabel+48)
#define CT_v168	((void*)startLabel+68)
#define CF_LAMBDA164	((void*)startLabel+76)
#define ST_v167	((void*)startLabel+80)
extern Node FN_NHC_46PackedString_46packString[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v166)
,};
Node FN_NHC_46PackedString_46nil[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v166: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46PackedString_46nil[] = {
  VAPTAG(useLabel(FN_NHC_46PackedString_46nil))
, VAPTAG(useLabel(FN_LAMBDA164))
, VAPTAG(useLabel(FN_NHC_46PackedString_46packString))
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
  bytes2word(0,0,0,0)
,};
