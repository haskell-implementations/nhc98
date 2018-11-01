#include "newmacros.h"
#include "runtime.h"

#define CT_v171	((void*)startLabel+108)
#define FN_LAMBDA165	((void*)startLabel+148)
#define CT_v175	((void*)startLabel+192)
#define CF_LAMBDA165	((void*)startLabel+200)
#define ST_v168	((void*)startLabel+220)
#define PP_LAMBDA165	((void*)startLabel+238)
#define PC_LAMBDA165	((void*)startLabel+238)
#define ST_v173	((void*)startLabel+238)
#define ST_v174	((void*)startLabel+266)
#define PS_v170	((void*)startLabel+296)
#define PS_v167	((void*)startLabel+308)
#define PS_v169	((void*)startLabel+320)
#define PS_v172	((void*)startLabel+332)
extern Node PM_Prelude[];
extern Node PC_Prelude_46UserError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v171)
,};
Node FN_Prelude_46userError[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,12,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_ARG,1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v170)
, 0
, 0
, 0
, 0
, CONSTR(3,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v169)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v168)
,	/* CT_v171: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46userError[] = {
  CAPTAG(useLabel(FN_Prelude_46userError),1)
, useLabel(PS_v167)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA165))
, bytes2word(0,0,0,0)
, useLabel(CT_v175)
,	/* FN_LAMBDA165: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v174)
, 60025
, useLabel(ST_v173)
,	/* CT_v175: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA165: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA165))
, useLabel(PS_v172)
, 0
, 0
, 0
,};
Node PP_Prelude_46userError[] = {
 };
Node PC_Prelude_46userError[] = {
 	/* ST_v168: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(117,115,101,114)
, bytes2word(69,114,114,111)
,	/* PP_LAMBDA165: (byte 2) */
 	/* PC_LAMBDA165: (byte 2) */
 	/* ST_v173: (byte 2) */
  bytes2word(114,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,117,115)
, bytes2word(101,114,69,114)
, bytes2word(114,111,114,58)
, bytes2word(54,58,50,53)
, bytes2word(45,54,58,53)
,	/* ST_v174: (byte 2) */
  bytes2word(52,0,99,97)
, bytes2word(108,108,32,116)
, bytes2word(111,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,96)
, bytes2word(117,115,101,114)
, bytes2word(69,114,114,111)
, bytes2word(114,39,0,0)
,	/* PS_v170: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46userError)
, useLabel(PC_Prelude_46UserError)
,	/* PS_v167: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46userError)
, useLabel(PC_Prelude_46userError)
,	/* PS_v169: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46userError)
, useLabel(PC_LAMBDA165)
,	/* PS_v172: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA165)
, useLabel(PC_LAMBDA165)
,};
