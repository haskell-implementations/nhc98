#include "newmacros.h"
#include "runtime.h"

#define CT_v245	((void*)startLabel+48)
#define FN_LAMBDA243	((void*)startLabel+80)
#define CT_v249	((void*)startLabel+156)
#define F0_LAMBDA243	((void*)startLabel+164)
#define FN_LAMBDA242	((void*)startLabel+196)
#define CT_v250	((void*)startLabel+208)
#define F0_LAMBDA242	((void*)startLabel+216)
#define FN_LAMBDA241	((void*)startLabel+228)
#define CT_v251	((void*)startLabel+240)
#define F0_LAMBDA241	((void*)startLabel+248)
#define FN_LAMBDA240	((void*)startLabel+260)
#define CT_v252	((void*)startLabel+272)
#define F0_LAMBDA240	((void*)startLabel+280)
#define FN_LAMBDA239	((void*)startLabel+292)
#define CT_v253	((void*)startLabel+304)
#define F0_LAMBDA239	((void*)startLabel+312)
#define FN_LAMBDA238	((void*)startLabel+324)
#define CT_v257	((void*)startLabel+356)
#define F0_LAMBDA238	((void*)startLabel+364)
extern Node FN_Prelude_46foldr[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v245)
,};
Node FN_List_46unzip4[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,7,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,4,0)
, CONSTR(0,0,0)
,	/* CT_v245: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_List_46unzip4[] = {
  VAPTAG(useLabel(FN_List_46unzip4))
, CAPTAG(useLabel(FN_LAMBDA243),2)
, CAPTAG(useLabel(FN_Prelude_46foldr),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v249)
,	/* FN_LAMBDA243: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,4,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,9)
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,5)
, bytes2word(HEAP_P1,0,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,6,HEAP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,7,HEAP_I2)
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,8)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(7,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,4,0)
, CONSTR(1,2,0)
,	/* CT_v249: (byte 0) */
  HW(5,2)
, 0
,	/* F0_LAMBDA243: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA243),2)
, VAPTAG(useLabel(FN_LAMBDA238))
, VAPTAG(useLabel(FN_LAMBDA239))
, VAPTAG(useLabel(FN_LAMBDA240))
, VAPTAG(useLabel(FN_LAMBDA241))
, VAPTAG(useLabel(FN_LAMBDA242))
, bytes2word(1,0,0,1)
, useLabel(CT_v250)
,	/* FN_LAMBDA242: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v250: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA242: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA242),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v251)
,	/* FN_LAMBDA241: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v251: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA241: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA241),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v252)
,	/* FN_LAMBDA240: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v252: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA240: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA240),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v253)
,	/* FN_LAMBDA239: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v253: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA239: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA239),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v257)
,	/* FN_LAMBDA238: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v257: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA238: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA238),1)
,};
