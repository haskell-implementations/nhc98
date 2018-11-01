#include "newmacros.h"
#include "runtime.h"

#define CT_v424	((void*)startLabel+176)
#define FN_LAMBDA415	((void*)startLabel+232)
#define CT_v425	((void*)startLabel+244)
#define F0_LAMBDA415	((void*)startLabel+252)
#define FN_LAMBDA414	((void*)startLabel+264)
#define CT_v426	((void*)startLabel+276)
#define F0_LAMBDA414	((void*)startLabel+284)
#define FN_LAMBDA413	((void*)startLabel+296)
#define CT_v427	((void*)startLabel+308)
#define F0_LAMBDA413	((void*)startLabel+316)
#define FN_LAMBDA412	((void*)startLabel+328)
#define CT_v428	((void*)startLabel+340)
#define F0_LAMBDA412	((void*)startLabel+348)
#define FN_LAMBDA411	((void*)startLabel+360)
#define CT_v432	((void*)startLabel+392)
#define F0_LAMBDA411	((void*)startLabel+400)
#define CT_v436	((void*)startLabel+560)
#define FN_LAMBDA418	((void*)startLabel+612)
#define CT_v438	((void*)startLabel+632)
#define CF_LAMBDA418	((void*)startLabel+640)
#define FN_LAMBDA417	((void*)startLabel+652)
#define CT_v439	((void*)startLabel+672)
#define CF_LAMBDA417	((void*)startLabel+680)
#define FN_LAMBDA416	((void*)startLabel+692)
#define CT_v440	((void*)startLabel+712)
#define CF_LAMBDA416	((void*)startLabel+720)
#define CT_v441	((void*)startLabel+760)
#define CT_v442	((void*)startLabel+816)
#define CT_v443	((void*)startLabel+912)
#define ST_v437	((void*)startLabel+940)
extern Node FN_Prelude_46showChar[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46showsType[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46shows[];
extern Node FN_Prelude_46showString[];
extern Node FN_Prelude_46Show_46Prelude_464[];
extern Node FN_Prelude_46_95_46show[];
extern Node FN_Prelude_46_95_46showList[];

static Node startLabel[] = {
  bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v424)
,};
Node FN_Prelude_46Show_46Prelude_464_46showsType[] = {
  bytes2word(NEEDHEAP_P1,80,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,5,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,9)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,2,HEAP_CHAR_P1,40)
, bytes2word(HEAP_CVAL_P1,10,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,2)
, bytes2word(HEAP_CHAR_P1,44,HEAP_CVAL_P1,10)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,3,HEAP_I1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(2,HEAP_CHAR_P1,44,HEAP_CVAL_P1)
, bytes2word(10,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,3,HEAP_I2)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,2,HEAP_CHAR_P1,44)
, bytes2word(HEAP_CVAL_P1,10,HEAP_ARG,4)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,2)
, bytes2word(HEAP_CHAR_P1,41,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,16)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,23,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,31)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,38,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,46)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,53,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(61,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v424: (byte 0) */
  HW(9,5)
, 0
,};
Node F0_Prelude_46Show_46Prelude_464_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_464_46showsType),5)
, VAPTAG(useLabel(FN_LAMBDA411))
, VAPTAG(useLabel(FN_LAMBDA412))
, VAPTAG(useLabel(FN_LAMBDA413))
, VAPTAG(useLabel(FN_LAMBDA414))
, VAPTAG(useLabel(FN_LAMBDA415))
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46showsType))
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(1,0,0,1)
, useLabel(CT_v425)
,	/* FN_LAMBDA415: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v425: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA415: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA415),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v426)
,	/* FN_LAMBDA414: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v426: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA414: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA414),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v427)
,	/* FN_LAMBDA413: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v427: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA413: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA413),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v428)
,	/* FN_LAMBDA412: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v428: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA412: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA412),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v432)
,	/* FN_LAMBDA411: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v432: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA411: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA411),1)
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v436)
,};
Node FN_Prelude_46Show_46Prelude_464_46showsPrec[] = {
  bytes2word(ZAP_ARG,5,NEEDSTACK_I16,PUSH_ZAP_ARG)
, bytes2word(6,EVAL,NEEDHEAP_P1,67)
, bytes2word(UNPACK,4,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_CHAR_P1,40)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_I2)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_ARG,4)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CHAR_P1,41,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(16,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,24,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(32,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,40,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(48,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,56,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,64,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v436: (byte 0) */
  HW(8,6)
, 0
,};
Node F0_Prelude_46Show_46Prelude_464_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_464_46showsPrec),6)
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46shows))
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA416))
, VAPTAG(useLabel(FN_LAMBDA417))
, VAPTAG(useLabel(FN_LAMBDA418))
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(0,0,0,0)
, useLabel(CT_v438)
,	/* FN_LAMBDA418: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v437)
,	/* CT_v438: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA418: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA418))
, bytes2word(0,0,0,0)
, useLabel(CT_v439)
,	/* FN_LAMBDA417: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v437)
,	/* CT_v439: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA417: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA417))
, bytes2word(0,0,0,0)
, useLabel(CT_v440)
,	/* FN_LAMBDA416: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v437)
,	/* CT_v440: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA416: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA416))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v441)
,};
Node FN_Prelude_46Show_46Prelude_464_46show[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(HEAP_ARG,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v441: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Show_46Prelude_464_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_464_46show),5)
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_464))
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v442)
,};
Node FN_Prelude_46Show_46Prelude_464_46showList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(HEAP_ARG,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v442: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Show_46Prelude_464_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_464_46showList),5)
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_464))
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v443)
,};
Node FN_Prelude_46Show_46Prelude_464[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v443: (byte 0) */
  HW(4,4)
, 0
,};
Node F0_Prelude_46Show_46Prelude_464[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_464),4)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_464_46showsPrec),2)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_464_46showsType),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_464_46showList),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_464_46show),1)
,	/* ST_v437: (byte 0) */
  bytes2word(44,0,0,0)
,};
