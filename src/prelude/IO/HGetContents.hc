#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46cHGetStr	((void*)startLabel+8)
#define CT_v187	((void*)startLabel+20)
#define F0_IO_46cHGetStr	((void*)startLabel+28)
#define CT_v188	((void*)startLabel+52)
#define FN_LAMBDA185	((void*)startLabel+80)
#define CT_v189	((void*)startLabel+104)
#define F0_LAMBDA185	((void*)startLabel+112)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v187)
,	/* FN_IO_46cHGetStr: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(HGETS,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v187: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46cHGetStr: (byte 0) */
  CAPTAG(useLabel(FN_IO_46cHGetStr),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v188)
,};
Node FN_IO_46hGetContents[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v188: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46hGetContents[] = {
  CAPTAG(useLabel(FN_IO_46hGetContents),1)
, CAPTAG(useLabel(FN_LAMBDA185),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v189)
,	/* FN_LAMBDA185: (byte 0) */
  bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,3,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v189: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA185: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA185),2)
, VAPTAG(useLabel(FN_IO_46cHGetStr))
,};
