#include "newmacros.h"
#include "runtime.h"

#define CT_v269	((void*)startLabel+52)
#define FN_LAMBDA267	((void*)startLabel+84)
#define CT_v273	((void*)startLabel+176)
#define F0_LAMBDA267	((void*)startLabel+184)
#define FN_LAMBDA266	((void*)startLabel+220)
#define CT_v274	((void*)startLabel+232)
#define F0_LAMBDA266	((void*)startLabel+240)
#define FN_LAMBDA265	((void*)startLabel+252)
#define CT_v275	((void*)startLabel+264)
#define F0_LAMBDA265	((void*)startLabel+272)
#define FN_LAMBDA264	((void*)startLabel+284)
#define CT_v276	((void*)startLabel+296)
#define F0_LAMBDA264	((void*)startLabel+304)
#define FN_LAMBDA263	((void*)startLabel+316)
#define CT_v277	((void*)startLabel+328)
#define F0_LAMBDA263	((void*)startLabel+336)
#define FN_LAMBDA262	((void*)startLabel+348)
#define CT_v278	((void*)startLabel+360)
#define F0_LAMBDA262	((void*)startLabel+368)
#define FN_LAMBDA261	((void*)startLabel+380)
#define CT_v282	((void*)startLabel+412)
#define F0_LAMBDA261	((void*)startLabel+420)
extern Node FN_Prelude_46foldr[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v269)
,};
Node FN_List_46unzip5[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,13)
, bytes2word(HEAP_OFF_N1,8,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,5,0)
, CONSTR(0,0,0)
,	/* CT_v269: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_List_46unzip5[] = {
  VAPTAG(useLabel(FN_List_46unzip5))
, CAPTAG(useLabel(FN_LAMBDA267),2)
, CAPTAG(useLabel(FN_Prelude_46foldr),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v273)
,	/* FN_LAMBDA267: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_P1)
, bytes2word(33,UNPACK,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(9,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,6,HEAP_P1,0)
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,7)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,1,HEAP_P1)
, bytes2word(8,HEAP_I2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,9,HEAP_P1,3)
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,10)
, bytes2word(HEAP_P1,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,16,HEAP_OFF_N1)
, bytes2word(14,HEAP_OFF_N1,12,HEAP_OFF_N1)
, bytes2word(10,HEAP_OFF_N1,8,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,5,0)
, CONSTR(1,2,0)
,	/* CT_v273: (byte 0) */
  HW(6,2)
, 0
,	/* F0_LAMBDA267: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA267),2)
, VAPTAG(useLabel(FN_LAMBDA261))
, VAPTAG(useLabel(FN_LAMBDA262))
, VAPTAG(useLabel(FN_LAMBDA263))
, VAPTAG(useLabel(FN_LAMBDA264))
, VAPTAG(useLabel(FN_LAMBDA265))
, VAPTAG(useLabel(FN_LAMBDA266))
, bytes2word(1,0,0,1)
, useLabel(CT_v274)
,	/* FN_LAMBDA266: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,5)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v274: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA266: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA266),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v275)
,	/* FN_LAMBDA265: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v275: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA265: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA265),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v276)
,	/* FN_LAMBDA264: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v276: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA264: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA264),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v277)
,	/* FN_LAMBDA263: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v277: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA263: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA263),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v278)
,	/* FN_LAMBDA262: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v278: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA262: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA262),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v282)
,	/* FN_LAMBDA261: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,5,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,5,HEAP_P1)
, bytes2word(4,HEAP_P1,3,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,5,0)
,	/* CT_v282: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA261: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA261),1)
,};
