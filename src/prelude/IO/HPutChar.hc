#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46cHPutChar	((void*)startLabel+12)
#define CT_v183	((void*)startLabel+28)
#define F0_IO_46cHPutChar	((void*)startLabel+36)
#define CT_v184	((void*)startLabel+64)
#define FN_LAMBDA181	((void*)startLabel+92)
#define CT_v185	((void*)startLabel+104)
#define F0_LAMBDA181	((void*)startLabel+112)

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v183)
,	/* FN_IO_46cHPutChar: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,HPUTC,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v183: (byte 0) */
  HW(0,2)
, 0
,	/* F0_IO_46cHPutChar: (byte 0) */
  CAPTAG(useLabel(FN_IO_46cHPutChar),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v184)
,};
Node FN_IO_46hPutChar[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v184: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_IO_46hPutChar[] = {
  CAPTAG(useLabel(FN_IO_46hPutChar),2)
, CAPTAG(useLabel(FN_LAMBDA181),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v185)
,	/* FN_LAMBDA181: (byte 0) */
  bytes2word(ZAP_ARG_I3,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v185: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA181: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA181),3)
, VAPTAG(useLabel(FN_IO_46cHPutChar))
,};
