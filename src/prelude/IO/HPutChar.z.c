#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46cHPutChar	((void*)startLabel+12)
#define CT_v184	((void*)startLabel+40)
#define F0_IO_46cHPutChar	((void*)startLabel+48)
#define CT_v186	((void*)startLabel+88)
#define FN_LAMBDA181	((void*)startLabel+116)
#define CT_v188	((void*)startLabel+140)
#define F0_LAMBDA181	((void*)startLabel+148)
#define ST_v183	((void*)startLabel+156)
#define ST_v185	((void*)startLabel+169)
#define ST_v187	((void*)startLabel+181)
extern Node TM_IO[];
extern Node TMSUB_IO[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v184)
,	/* FN_IO_46cHPutChar: (byte 0) */
  useLabel(TM_IO)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,HPUTC,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v183)
,	/* CT_v184: (byte 0) */
  HW(0,2)
, 0
,	/* F0_IO_46cHPutChar: (byte 0) */
  CAPTAG(useLabel(FN_IO_46cHPutChar),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v186)
,};
Node FN_IO_46hPutChar[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v185)
,	/* CT_v186: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_IO_46hPutChar[] = {
  CAPTAG(useLabel(FN_IO_46hPutChar),2)
, CAPTAG(useLabel(FN_LAMBDA181),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v188)
,	/* FN_LAMBDA181: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(ZAP_ARG_I3,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 70030
, useLabel(ST_v187)
,	/* CT_v188: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA181: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA181),3)
, VAPTAG(useLabel(FN_IO_46cHPutChar))
,	/* ST_v183: (byte 0) */
  bytes2word(73,79,46,99)
, bytes2word(72,80,117,116)
, bytes2word(67,104,97,114)
,	/* ST_v185: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,80,117,116)
, bytes2word(67,104,97,114)
,	/* ST_v187: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,80,117,116)
, bytes2word(67,104,97,114)
, bytes2word(58,55,58,51)
, bytes2word(48,45,55,58)
, bytes2word(53,50,0,0)
,};
