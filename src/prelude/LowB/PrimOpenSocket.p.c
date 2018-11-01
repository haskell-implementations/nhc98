#include "newmacros.h"
#include "runtime.h"

#define CT_v188	((void*)startLabel+44)
#define CT_v192	((void*)startLabel+136)
#define FN_LAMBDA184	((void*)startLabel+184)
#define CT_v197	((void*)startLabel+264)
#define F0_LAMBDA184	((void*)startLabel+272)
#define ST_v187	((void*)startLabel+300)
#define ST_v190	((void*)startLabel+320)
#define PP_LAMBDA184	((void*)startLabel+343)
#define PC_LAMBDA184	((void*)startLabel+343)
#define ST_v194	((void*)startLabel+343)
#define PS_v186	((void*)startLabel+380)
#define PS_v189	((void*)startLabel+392)
#define PS_v191	((void*)startLabel+404)
#define PS_v195	((void*)startLabel+416)
#define PS_v196	((void*)startLabel+428)
#define PS_v193	((void*)startLabel+440)
extern void *cOpenSocket();
extern Node FN_CString_46toCString[];
extern Node PM_Prelude[];
extern Node PC_CString_46toCString[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v188)
,};
Node FN_Prelude_46cOpenSocket[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(cOpenSocket)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v187)
,	/* CT_v188: (byte 0) */
  HW(0,3)
, 0
,};
Node F0_Prelude_46cOpenSocket[] = {
  CAPTAG(useLabel(FN_Prelude_46cOpenSocket),3)
, useLabel(PS_v186)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v192)
,};
Node FN_Prelude_46primOpenSocket[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v191)
, 0
, 0
, 0
, 0
, 110001
, useLabel(ST_v190)
,	/* CT_v192: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46primOpenSocket[] = {
  CAPTAG(useLabel(FN_Prelude_46primOpenSocket),3)
, useLabel(PS_v189)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA184),1)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v197)
,	/* FN_LAMBDA184: (byte 0) */
  bytes2word(ZAP_ARG,4,NEEDHEAP_I32,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_ARG_ARG_RET_EVAL,2)
, bytes2word(3,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v196)
, 0
, 0
, 0
, 0
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, 120008
, useLabel(ST_v194)
,	/* CT_v197: (byte 0) */
  HW(2,4)
, 0
,	/* F0_LAMBDA184: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA184),4)
, useLabel(PS_v193)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Prelude_46cOpenSocket))
,};
Node PP_Prelude_46cOpenSocket[] = {
 };
Node PC_Prelude_46cOpenSocket[] = {
 	/* ST_v187: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(99,79,112,101)
, bytes2word(110,83,111,99)
, bytes2word(107,101,116,0)
,};
Node PP_Prelude_46primOpenSocket[] = {
 };
Node PC_Prelude_46primOpenSocket[] = {
 	/* ST_v190: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(79,112,101,110)
, bytes2word(83,111,99,107)
,	/* PP_LAMBDA184: (byte 3) */
 	/* PC_LAMBDA184: (byte 3) */
 	/* ST_v194: (byte 3) */
  bytes2word(101,116,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,112)
, bytes2word(114,105,109,79)
, bytes2word(112,101,110,83)
, bytes2word(111,99,107,101)
, bytes2word(116,58,49,50)
, bytes2word(58,56,45,49)
, bytes2word(50,58,53,55)
, bytes2word(0,0,0,0)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46cOpenSocket)
, useLabel(PC_Prelude_46cOpenSocket)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46primOpenSocket)
, useLabel(PC_Prelude_46primOpenSocket)
,	/* PS_v191: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46primOpenSocket)
, useLabel(PC_LAMBDA184)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA184)
, useLabel(PC_CString_46toCString)
,	/* PS_v196: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA184)
, useLabel(PC_Prelude_46cOpenSocket)
,	/* PS_v193: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA184)
, useLabel(PC_LAMBDA184)
,};
