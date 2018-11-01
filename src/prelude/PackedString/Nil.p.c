#include "newmacros.h"
#include "runtime.h"

#define CT_v170	((void*)startLabel+80)
#define FN_LAMBDA164	((void*)startLabel+124)
#define CT_v174	((void*)startLabel+168)
#define CF_LAMBDA164	((void*)startLabel+176)
#define ST_v173	((void*)startLabel+196)
#define ST_v167	((void*)startLabel+200)
#define PP_LAMBDA164	((void*)startLabel+221)
#define PC_LAMBDA164	((void*)startLabel+221)
#define ST_v172	((void*)startLabel+221)
#define PS_v169	((void*)startLabel+252)
#define PS_v166	((void*)startLabel+264)
#define PS_v168	((void*)startLabel+276)
#define PS_v171	((void*)startLabel+288)
extern Node FN_NHC_46PackedString_46packString[];
extern Node PM_NHC_46PackedString[];
extern Node PC_NHC_46PackedString_46packString[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v170)
,};
Node FN_NHC_46PackedString_46nil[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v169)
, 0
, 0
, 0
, 0
, useLabel(PS_v168)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v167)
,	/* CT_v170: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46PackedString_46nil[] = {
  VAPTAG(useLabel(FN_NHC_46PackedString_46nil))
, useLabel(PS_v166)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA164))
, VAPTAG(useLabel(FN_NHC_46PackedString_46packString))
, bytes2word(0,0,0,0)
, useLabel(CT_v174)
,	/* FN_LAMBDA164: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v173)
, 80018
, useLabel(ST_v172)
,	/* CT_v174: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA164: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA164))
, useLabel(PS_v171)
, 0
, 0
, 0
,	/* ST_v173: (byte 0) */
  bytes2word(0,0,0,0)
,};
Node PP_NHC_46PackedString_46nil[] = {
 };
Node PC_NHC_46PackedString_46nil[] = {
 	/* ST_v167: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,110,105,108)
,	/* PP_LAMBDA164: (byte 1) */
 	/* PC_LAMBDA164: (byte 1) */
 	/* ST_v172: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,110,105)
, bytes2word(108,58,56,58)
, bytes2word(49,56,45,56)
, bytes2word(58,49,57,0)
,	/* PS_v169: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46nil)
, useLabel(PC_NHC_46PackedString_46packString)
,	/* PS_v166: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46nil)
, useLabel(PC_NHC_46PackedString_46nil)
,	/* PS_v168: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46nil)
, useLabel(PC_LAMBDA164)
,	/* PS_v171: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_LAMBDA164)
, useLabel(PC_LAMBDA164)
,};
