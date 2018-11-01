#include "newmacros.h"
#include "runtime.h"

#define CT_v167	((void*)startLabel+32)
#define FN_LAMBDA164	((void*)startLabel+60)
#define CT_v170	((void*)startLabel+92)
#define CF_LAMBDA164	((void*)startLabel+100)
#define ST_v169	((void*)startLabel+104)
#define ST_v166	((void*)startLabel+105)
#define ST_v168	((void*)startLabel+126)
extern Node TM_NHC_46PackedString[];
extern Node FN_NHC_46PackedString_46packString[];
extern Node TMSUB_NHC_46PackedString[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v167)
,};
Node FN_NHC_46PackedString_46nil[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v166)
,	/* CT_v167: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46PackedString_46nil[] = {
  VAPTAG(useLabel(FN_NHC_46PackedString_46nil))
, VAPTAG(useLabel(FN_LAMBDA164))
, VAPTAG(useLabel(FN_NHC_46PackedString_46packString))
, bytes2word(0,0,0,0)
, useLabel(CT_v170)
,	/* FN_LAMBDA164: (byte 0) */
  useLabel(TMSUB_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v169)
, 80018
, useLabel(ST_v168)
,	/* CT_v170: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA164: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA164))
,	/* ST_v169: (byte 0) */
 	/* ST_v166: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,110,105)
,	/* ST_v168: (byte 2) */
  bytes2word(108,0,78,72)
, bytes2word(67,46,80,97)
, bytes2word(99,107,101,100)
, bytes2word(83,116,114,105)
, bytes2word(110,103,46,110)
, bytes2word(105,108,58,56)
, bytes2word(58,49,56,45)
, bytes2word(56,58,49,57)
, bytes2word(0,0,0,0)
,};
