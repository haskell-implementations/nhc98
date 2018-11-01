#include "newmacros.h"
#include "runtime.h"

#define CT_v187	((void*)startLabel+48)
#define CT_v189	((void*)startLabel+100)
#define FN_LAMBDA184	((void*)startLabel+132)
#define CT_v191	((void*)startLabel+164)
#define F0_LAMBDA184	((void*)startLabel+172)
#define ST_v186	((void*)startLabel+184)
#define ST_v188	((void*)startLabel+204)
#define ST_v190	((void*)startLabel+227)
extern Node TM_Prelude[];
extern void *cOpenSocket();
extern Node TMSUB_Prelude[];
extern Node FN_CString_46toCString[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v187)
,};
Node FN_Prelude_46cOpenSocket[] = {
  useLabel(TM_Prelude)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(cOpenSocket)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v186)
,	/* CT_v187: (byte 0) */
  HW(0,3)
, 0
,};
Node F0_Prelude_46cOpenSocket[] = {
  CAPTAG(useLabel(FN_Prelude_46cOpenSocket),3)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v189)
,};
Node FN_Prelude_46primOpenSocket[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v188)
,	/* CT_v189: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46primOpenSocket[] = {
  CAPTAG(useLabel(FN_Prelude_46primOpenSocket),3)
, CAPTAG(useLabel(FN_LAMBDA184),1)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v191)
,	/* FN_LAMBDA184: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(ZAP_ARG,4,NEEDHEAP_I32,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG_ARG_RET_EVAL,2)
, bytes2word(3,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 120008
, useLabel(ST_v190)
,	/* CT_v191: (byte 0) */
  HW(2,4)
, 0
,	/* F0_LAMBDA184: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA184),4)
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Prelude_46cOpenSocket))
,	/* ST_v186: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(99,79,112,101)
, bytes2word(110,83,111,99)
,	/* ST_v188: (byte 4) */
  bytes2word(107,101,116,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(79,112,101,110)
, bytes2word(83,111,99,107)
,	/* ST_v190: (byte 3) */
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
,};
