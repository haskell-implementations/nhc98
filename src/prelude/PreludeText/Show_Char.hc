#include "newmacros.h"
#include "runtime.h"

#define CT_v238	((void*)startLabel+24)
#define FN_LAMBDA234	((void*)startLabel+52)
#define CT_v240	((void*)startLabel+72)
#define CF_LAMBDA234	((void*)startLabel+80)
#define CT_v241	((void*)startLabel+120)
#define FN_Prelude_46Prelude_46170_46showl	((void*)startLabel+156)
#define v243	((void*)startLabel+166)
#define v244	((void*)startLabel+176)
#define v250	((void*)startLabel+190)
#define v248	((void*)startLabel+194)
#define v245	((void*)startLabel+218)
#define CT_v251	((void*)startLabel+244)
#define F0_Prelude_46Prelude_46170_46showl	((void*)startLabel+252)
#define FN_LAMBDA235	((void*)startLabel+292)
#define CT_v253	((void*)startLabel+312)
#define CF_LAMBDA235	((void*)startLabel+320)
#define v258	((void*)startLabel+350)
#define v257	((void*)startLabel+354)
#define v254	((void*)startLabel+364)
#define CT_v259	((void*)startLabel+404)
#define FN_LAMBDA236	((void*)startLabel+448)
#define CT_v261	((void*)startLabel+468)
#define CF_LAMBDA236	((void*)startLabel+476)
#define CT_v262	((void*)startLabel+500)
#define CT_v263	((void*)startLabel+552)
#define ST_v260	((void*)startLabel+580)
#define ST_v239	((void*)startLabel+586)
#define ST_v252	((void*)startLabel+591)
extern Node FN_Prelude_46showString[];
extern Node FN_Prelude_46showChar[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46_46[];
extern Node FN_Char_46showLitChar[];
extern Node FN_Prelude_46_95_46show[];
extern Node CF_Prelude_46Show_46Prelude_46Char[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v238)
,};
Node FN_Prelude_46Show_46Prelude_46Char_46showsType[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v238: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Char_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Char_46showsType),1)
, useLabel(CF_LAMBDA234)
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(0,0,0,0)
, useLabel(CT_v240)
,	/* FN_LAMBDA234: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v239)
,	/* CT_v240: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA234: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA234))
, bytes2word(1,0,0,1)
, useLabel(CT_v241)
,};
Node FN_Prelude_46Show_46Prelude_46Char_46showList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CHAR_P1,34,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v241: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Char_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Char_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Prelude_46Prelude_46170_46showl),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(1,0,0,1)
, useLabel(CT_v251)
,	/* FN_Prelude_46Prelude_46170_46showl: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v243: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_CHAR_P1)
, bytes2word(34,PUSH_HEAP,HEAP_CVAL_I3,EVAL)
,	/* v244: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,LOOKUPSWITCH,1)
, bytes2word(TOP(34),BOT(34),TOP(10),BOT(10))
,	/* v250: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v248: (byte 2) */
  bytes2word(26,0,POP_I1,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(2,HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v245: (byte 2) */
  bytes2word(5,RETURN_EVAL,HEAP_CVAL_P1,9)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,2)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v251: (byte 0) */
  HW(7,1)
, 0
,	/* F0_Prelude_46Prelude_46170_46showl: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46170_46showl),1)
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA235))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Prelude_46Prelude_46170_46showl),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Char_46showLitChar))
, bytes2word(0,0,0,0)
, useLabel(CT_v253)
,	/* FN_LAMBDA235: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v252)
,	/* CT_v253: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA235: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA235))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v259)
,};
Node FN_Prelude_46Show_46Prelude_46Char_46showsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(39),BOT(39),TOP(10),BOT(10))
,	/* v258: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v257: (byte 2) */
  bytes2word(12,0,POP_I1,PUSH_CVAL_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I4,EVAL)
,	/* v254: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(2,HEAP_CHAR_P1,39,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,2,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,2)
, bytes2word(HEAP_CHAR_P1,39,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(13,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v259: (byte 0) */
  HW(6,2)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Char_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Char_46showsPrec),2)
, useLabel(CF_LAMBDA236)
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Char_46showLitChar))
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(0,0,0,0)
, useLabel(CT_v261)
,	/* FN_LAMBDA236: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v260)
,	/* CT_v261: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA236: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA236))
, bytes2word(1,0,0,1)
, useLabel(CT_v262)
,};
Node FN_Prelude_46Show_46Prelude_46Char_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v262: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Char_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Char_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46Prelude_46Char)
, bytes2word(0,0,0,0)
, useLabel(CT_v263)
,};
Node FN_Prelude_46Show_46Prelude_46Char[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v263: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46Prelude_46Char[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Char))
, useLabel(F0_Prelude_46Show_46Prelude_46Char_46showsPrec)
, useLabel(F0_Prelude_46Show_46Prelude_46Char_46showsType)
, useLabel(F0_Prelude_46Show_46Prelude_46Char_46showList)
, useLabel(F0_Prelude_46Show_46Prelude_46Char_46show)
,	/* ST_v260: (byte 0) */
  bytes2word(39,92,92,39)
,	/* ST_v239: (byte 2) */
  bytes2word(39,0,67,104)
,	/* ST_v252: (byte 3) */
  bytes2word(97,114,0,92)
, bytes2word(92,34,0,0)
,};
