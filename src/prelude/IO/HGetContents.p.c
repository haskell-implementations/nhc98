#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46cHGetStr	((void*)startLabel+8)
#define CT_v189	((void*)startLabel+28)
#define F0_IO_46cHGetStr	((void*)startLabel+36)
#define CT_v193	((void*)startLabel+116)
#define FN_LAMBDA185	((void*)startLabel+160)
#define CT_v198	((void*)startLabel+260)
#define F0_LAMBDA185	((void*)startLabel+268)
#define PP_IO_46cHGetStr	((void*)startLabel+292)
#define PC_IO_46cHGetStr	((void*)startLabel+292)
#define ST_v188	((void*)startLabel+292)
#define ST_v191	((void*)startLabel+304)
#define PP_LAMBDA185	((void*)startLabel+320)
#define PC_LAMBDA185	((void*)startLabel+320)
#define ST_v195	((void*)startLabel+320)
#define PS_v190	((void*)startLabel+348)
#define PS_v192	((void*)startLabel+360)
#define PS_v187	((void*)startLabel+372)
#define PS_v197	((void*)startLabel+384)
#define PS_v196	((void*)startLabel+396)
#define PS_v194	((void*)startLabel+408)
extern Node PM_IO[];
extern Node PC_Prelude_46Right[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v189)
,	/* FN_IO_46cHGetStr: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(HGETS,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 270001
, useLabel(ST_v188)
,	/* CT_v189: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46cHGetStr: (byte 0) */
  CAPTAG(useLabel(FN_IO_46cHGetStr),1)
, useLabel(PS_v187)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v193)
,};
Node FN_IO_46hGetContents[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v192)
, 0
, 0
, 0
, 0
, 160001
, useLabel(ST_v191)
,	/* CT_v193: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46hGetContents[] = {
  CAPTAG(useLabel(FN_IO_46hGetContents),1)
, useLabel(PS_v190)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA185),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v198)
,	/* FN_LAMBDA185: (byte 0) */
  bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v196)
, 0
, 0
, 0
, 0
, 160032
, useLabel(ST_v195)
,	/* CT_v198: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA185: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA185),2)
, useLabel(PS_v194)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46cHGetStr))
,	/* PP_IO_46cHGetStr: (byte 0) */
 	/* PC_IO_46cHGetStr: (byte 0) */
 	/* ST_v188: (byte 0) */
  bytes2word(73,79,46,99)
, bytes2word(72,71,101,116)
, bytes2word(83,116,114,0)
,};
Node PP_IO_46hGetContents[] = {
 };
Node PC_IO_46hGetContents[] = {
 	/* ST_v191: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(71,101,116,67)
, bytes2word(111,110,116,101)
,	/* PP_LAMBDA185: (byte 4) */
 	/* PC_LAMBDA185: (byte 4) */
 	/* ST_v195: (byte 4) */
  bytes2word(110,116,115,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,67)
, bytes2word(111,110,116,101)
, bytes2word(110,116,115,58)
, bytes2word(49,54,58,51)
, bytes2word(50,45,49,54)
, bytes2word(58,53,57,0)
,	/* PS_v190: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetContents)
, useLabel(PC_IO_46hGetContents)
,	/* PS_v192: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetContents)
, useLabel(PC_LAMBDA185)
,	/* PS_v187: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46cHGetStr)
, useLabel(PC_IO_46cHGetStr)
,	/* PS_v197: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA185)
, useLabel(PC_Prelude_46Right)
,	/* PS_v196: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA185)
, useLabel(PC_IO_46cHGetStr)
,	/* PS_v194: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA185)
, useLabel(PC_LAMBDA185)
,};
