#include "newmacros.h"
#include "runtime.h"

#define v227	((void*)startLabel+40)
#define CT_v229	((void*)startLabel+52)
#define FN_LAMBDA225	((void*)startLabel+108)
#define CT_v231	((void*)startLabel+128)
#define CF_LAMBDA225	((void*)startLabel+136)
#define FN_LAMBDA224	((void*)startLabel+148)
#define CT_v233	((void*)startLabel+168)
#define CF_LAMBDA224	((void*)startLabel+176)
#define FN_LAMBDA223	((void*)startLabel+188)
#define CT_v235	((void*)startLabel+208)
#define CF_LAMBDA223	((void*)startLabel+216)
#define CT_v236	((void*)startLabel+248)
#define ST_v232	((void*)startLabel+268)
#define ST_v230	((void*)startLabel+276)
#define ST_v234	((void*)startLabel+284)
extern Node FN_Prelude_46Eq_46Prelude_46_91_93_46_61_61[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node CF_System_46Info_46compilerName[];
extern Node FN_Prelude_46Eq_46Prelude_46_91_93_46_47_61[];
extern Node CF_System_46Info_46os[];
extern Node FN_Prelude_46_124_124[];
extern Node C0_IO_46WriteMode[];
extern Node FN_System_46IO_46openBinaryFile[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v229)
,};
Node FN_SysDeps_46osName[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,6)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,5)
,	/* v227: (byte 4) */
  bytes2word(0,PUSH_CVAL_P1,9,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v229: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_SysDeps_46osName[] = {
  VAPTAG(useLabel(FN_SysDeps_46osName))
, VAPTAG(useLabel(FN_LAMBDA223))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46_91_93_46_61_61))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, useLabel(CF_System_46Info_46compilerName)
, VAPTAG(useLabel(FN_LAMBDA224))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46_91_93_46_47_61))
, useLabel(CF_System_46Info_46os)
, VAPTAG(useLabel(FN_Prelude_46_124_124))
, VAPTAG(useLabel(FN_LAMBDA225))
, bytes2word(0,0,0,0)
, useLabel(CT_v231)
,	/* FN_LAMBDA225: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v230)
,	/* CT_v231: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA225: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA225))
, bytes2word(0,0,0,0)
, useLabel(CT_v233)
,	/* FN_LAMBDA224: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v232)
,	/* CT_v233: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA224: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA224))
, bytes2word(0,0,0,0)
, useLabel(CT_v235)
,	/* FN_LAMBDA223: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v234)
,	/* CT_v235: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA223: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA223))
, bytes2word(1,0,0,1)
, useLabel(CT_v236)
,};
Node FN_SysDeps_46openBinaryFileWrite[] = {
  bytes2word(NEEDHEAP_I32,PUSH_CVAL_P1,3,PUSH_ARG_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v236: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_SysDeps_46openBinaryFileWrite[] = {
  CAPTAG(useLabel(FN_SysDeps_46openBinaryFileWrite),1)
, useLabel(C0_IO_46WriteMode)
, VAPTAG(useLabel(FN_System_46IO_46openBinaryFile))
,	/* ST_v232: (byte 0) */
  bytes2word(109,105,110,103)
,	/* ST_v230: (byte 4) */
  bytes2word(119,51,50,0)
, bytes2word(119,105,110,100)
,	/* ST_v234: (byte 4) */
  bytes2word(111,119,115,0)
, bytes2word(121,104,99,0)
,};
