#include "newmacros.h"
#include "runtime.h"

#define CT_v169	((void*)startLabel+84)
#define FN_LAMBDA163	((void*)startLabel+128)
#define CT_v173	((void*)startLabel+172)
#define CF_LAMBDA163	((void*)startLabel+180)
#define ST_v172	((void*)startLabel+200)
#define ST_v166	((void*)startLabel+216)
#define PP_LAMBDA163	((void*)startLabel+234)
#define PC_LAMBDA163	((void*)startLabel+234)
#define ST_v171	((void*)startLabel+234)
#define PS_v168	((void*)startLabel+264)
#define PS_v165	((void*)startLabel+276)
#define PS_v167	((void*)startLabel+288)
#define PS_v170	((void*)startLabel+300)
extern Node FN_Prelude_46error[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v169)
,};
Node FN_Prelude_46blackhole[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v168)
, 0
, 0
, 0
, 0
, useLabel(PS_v167)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v166)
,	/* CT_v169: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46blackhole[] = {
  CAPTAG(useLabel(FN_Prelude_46blackhole),1)
, useLabel(PS_v165)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA163))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v173)
,	/* FN_LAMBDA163: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v172)
, 80023
, useLabel(ST_v171)
,	/* CT_v173: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA163: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA163))
, useLabel(PS_v170)
, 0
, 0
, 0
,	/* ST_v172: (byte 0) */
  bytes2word(66,108,97,99)
, bytes2word(107,104,111,108)
, bytes2word(101,58,32,63)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46blackhole[] = {
 };
Node PC_Prelude_46blackhole[] = {
 	/* ST_v166: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(98,108,97,99)
, bytes2word(107,104,111,108)
,	/* PP_LAMBDA163: (byte 2) */
 	/* PC_LAMBDA163: (byte 2) */
 	/* ST_v171: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,98,108)
, bytes2word(97,99,107,104)
, bytes2word(111,108,101,58)
, bytes2word(56,58,50,51)
, bytes2word(45,56,58,51)
, bytes2word(54,0,0,0)
,	/* PS_v168: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46blackhole)
, useLabel(PC_Prelude_46error)
,	/* PS_v165: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46blackhole)
, useLabel(PC_Prelude_46blackhole)
,	/* PS_v167: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46blackhole)
, useLabel(PC_LAMBDA163)
,	/* PS_v170: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA163)
, useLabel(PC_LAMBDA163)
,};
