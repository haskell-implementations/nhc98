#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46cHPutChar	((void*)startLabel+12)
#define CT_v185	((void*)startLabel+36)
#define F0_IO_46cHPutChar	((void*)startLabel+44)
#define CT_v189	((void*)startLabel+128)
#define FN_LAMBDA181	((void*)startLabel+172)
#define CT_v193	((void*)startLabel+224)
#define F0_LAMBDA181	((void*)startLabel+232)
#define PP_IO_46cHPutChar	((void*)startLabel+256)
#define PC_IO_46cHPutChar	((void*)startLabel+256)
#define ST_v184	((void*)startLabel+256)
#define ST_v187	((void*)startLabel+272)
#define PP_LAMBDA181	((void*)startLabel+284)
#define PC_LAMBDA181	((void*)startLabel+284)
#define ST_v191	((void*)startLabel+284)
#define PS_v186	((void*)startLabel+308)
#define PS_v188	((void*)startLabel+320)
#define PS_v183	((void*)startLabel+332)
#define PS_v192	((void*)startLabel+344)
#define PS_v190	((void*)startLabel+356)
extern Node PM_IO[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v185)
,	/* FN_IO_46cHPutChar: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,HPUTC,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v184)
,	/* CT_v185: (byte 0) */
  HW(0,2)
, 0
,	/* F0_IO_46cHPutChar: (byte 0) */
  CAPTAG(useLabel(FN_IO_46cHPutChar),2)
, useLabel(PS_v183)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v189)
,};
Node FN_IO_46hPutChar[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v188)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v187)
,	/* CT_v189: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_IO_46hPutChar[] = {
  CAPTAG(useLabel(FN_IO_46hPutChar),2)
, useLabel(PS_v186)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA181),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v193)
,	/* FN_LAMBDA181: (byte 0) */
  bytes2word(ZAP_ARG_I3,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1)
, bytes2word(2,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v192)
, 0
, 0
, 0
, 0
, 70030
, useLabel(ST_v191)
,	/* CT_v193: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA181: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA181),3)
, useLabel(PS_v190)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46cHPutChar))
,	/* PP_IO_46cHPutChar: (byte 0) */
 	/* PC_IO_46cHPutChar: (byte 0) */
 	/* ST_v184: (byte 0) */
  bytes2word(73,79,46,99)
, bytes2word(72,80,117,116)
, bytes2word(67,104,97,114)
, bytes2word(0,0,0,0)
,};
Node PP_IO_46hPutChar[] = {
 };
Node PC_IO_46hPutChar[] = {
 	/* ST_v187: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(80,117,116,67)
,	/* PP_LAMBDA181: (byte 4) */
 	/* PC_LAMBDA181: (byte 4) */
 	/* ST_v191: (byte 4) */
  bytes2word(104,97,114,0)
, bytes2word(73,79,46,104)
, bytes2word(80,117,116,67)
, bytes2word(104,97,114,58)
, bytes2word(55,58,51,48)
, bytes2word(45,55,58,53)
, bytes2word(50,0,0,0)
,	/* PS_v186: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hPutChar)
, useLabel(PC_IO_46hPutChar)
,	/* PS_v188: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hPutChar)
, useLabel(PC_LAMBDA181)
,	/* PS_v183: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46cHPutChar)
, useLabel(PC_IO_46cHPutChar)
,	/* PS_v192: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA181)
, useLabel(PC_IO_46cHPutChar)
,	/* PS_v190: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA181)
, useLabel(PC_LAMBDA181)
,};
