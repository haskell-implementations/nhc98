#include "newmacros.h"
#include "runtime.h"

#define CT_v267	((void*)startLabel+56)
#define FN_Numeric_46Prelude_46162_46read_39	((void*)startLabel+92)
#define CT_v269	((void*)startLabel+152)
#define F0_Numeric_46Prelude_46162_46read_39	((void*)startLabel+160)
#define FN_LAMBDA264	((void*)startLabel+204)
#define v288	((void*)startLabel+222)
#define v277	((void*)startLabel+226)
#define v289	((void*)startLabel+240)
#define v281	((void*)startLabel+244)
#define v290	((void*)startLabel+254)
#define v285	((void*)startLabel+258)
#define v278	((void*)startLabel+280)
#define v274	((void*)startLabel+285)
#define v270	((void*)startLabel+290)
#define CT_v291	((void*)startLabel+308)
#define F0_LAMBDA264	((void*)startLabel+316)
#define FN_LAMBDA263	((void*)startLabel+348)
#define CT_v295	((void*)startLabel+400)
#define F0_LAMBDA263	((void*)startLabel+408)
#define FN_Numeric_46Prelude_46163_46read_39_39	((void*)startLabel+432)
#define CT_v297	((void*)startLabel+476)
#define F0_Numeric_46Prelude_46163_46read_39_39	((void*)startLabel+484)
#define FN_LAMBDA262	((void*)startLabel+512)
#define CT_v302	((void*)startLabel+552)
#define F0_LAMBDA262	((void*)startLabel+560)
#define FN_LAMBDA261	((void*)startLabel+588)
#define v312	((void*)startLabel+606)
#define v310	((void*)startLabel+610)
#define v307	((void*)startLabel+624)
#define v303	((void*)startLabel+629)
#define CT_v313	((void*)startLabel+652)
#define F0_LAMBDA261	((void*)startLabel+660)
#define ST_v266	((void*)startLabel+664)
#define ST_v268	((void*)startLabel+683)
#define ST_v286	((void*)startLabel+712)
#define ST_v296	((void*)startLabel+741)
#define ST_v300	((void*)startLabel+771)
extern Node TM_Numeric[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46readParen[];
extern Node TMSUB_Numeric[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46negate[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v267)
,};
Node FN_Numeric_46readSigned[] = {
  useLabel(TM_Numeric)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_IN3,HEAP_CVAL_I4,HEAP_P1)
, bytes2word(0,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 50001
, useLabel(ST_v266)
,	/* CT_v267: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Numeric_46readSigned[] = {
  CAPTAG(useLabel(FN_Numeric_46readSigned),2)
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, CAPTAG(useLabel(FN_Numeric_46Prelude_46162_46read_39),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v269)
,	/* FN_Numeric_46Prelude_46162_46read_39: (byte 0) */
  useLabel(TMSUB_Numeric)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_I5,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_IN3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,14,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 60028
, useLabel(ST_v268)
,	/* CT_v269: (byte 0) */
  HW(6,3)
, 0
,	/* F0_Numeric_46Prelude_46162_46read_39: (byte 0) */
  CAPTAG(useLabel(FN_Numeric_46Prelude_46162_46read_39),3)
, CAPTAG(useLabel(FN_Numeric_46Prelude_46163_46read_39_39),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA264),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v291)
,	/* FN_LAMBDA264: (byte 0) */
  useLabel(TMSUB_Numeric)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v288: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v277: (byte 2) */
  bytes2word(61,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(45),BOT(45))
,	/* v289: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v281: (byte 4) */
  bytes2word(POP_I1,JUMP,38,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v290: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v285: (byte 2) */
  bytes2word(24,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v278: (byte 4) */
  bytes2word(5,HEAP_ARG,4,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v274: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v270: (byte 2) */
  bytes2word(2,0,PUSH_ARG,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70039
, useLabel(ST_v286)
,	/* CT_v291: (byte 0) */
  HW(4,4)
, 0
,	/* F0_LAMBDA264: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA264),4)
, CAPTAG(useLabel(FN_LAMBDA263),2)
, CAPTAG(useLabel(FN_Numeric_46Prelude_46163_46read_39_39),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v295)
,	/* FN_LAMBDA263: (byte 0) */
  useLabel(TMSUB_Numeric)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,0,HEAP_CVAL_IN3,HEAP_OFF_N1)
, bytes2word(4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(4,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 70039
, useLabel(ST_v286)
,	/* CT_v295: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA263: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA263),3)
, VAPTAG(useLabel(FN_Prelude_46negate))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v297)
,	/* FN_Numeric_46Prelude_46163_46read_39_39: (byte 0) */
  useLabel(TMSUB_Numeric)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 90028
, useLabel(ST_v296)
,	/* CT_v297: (byte 0) */
  HW(3,2)
, 0
,	/* F0_Numeric_46Prelude_46163_46read_39_39: (byte 0) */
  CAPTAG(useLabel(FN_Numeric_46Prelude_46163_46read_39_39),2)
, CAPTAG(useLabel(FN_LAMBDA262),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v302)
,	/* FN_LAMBDA262: (byte 0) */
  useLabel(TMSUB_Numeric)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_I1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 90039
, useLabel(ST_v300)
,	/* CT_v302: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA262: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA262),3)
, CAPTAG(useLabel(FN_LAMBDA261),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v313)
,	/* FN_LAMBDA261: (byte 0) */
  useLabel(TMSUB_Numeric)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v312: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v310: (byte 2) */
  bytes2word(16,0,POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_P1,0,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_OFF_N1)
,	/* v307: (byte 4) */
  bytes2word(4,HEAP_ARG,3,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v303: (byte 1) */
  bytes2word(0,PUSH_ARG_I3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 90039
, useLabel(ST_v300)
,	/* CT_v313: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA261: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA261),3)
,	/* ST_v266: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(114,101,97,100)
, bytes2word(83,105,103,110)
,	/* ST_v268: (byte 3) */
  bytes2word(101,100,0,78)
, bytes2word(117,109,101,114)
, bytes2word(105,99,46,114)
, bytes2word(101,97,100,83)
, bytes2word(105,103,110,101)
, bytes2word(100,58,54,58)
, bytes2word(50,56,45,56)
,	/* ST_v286: (byte 4) */
  bytes2word(58,55,52,0)
, bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(114,101,97,100)
, bytes2word(83,105,103,110)
, bytes2word(101,100,58,55)
, bytes2word(58,51,57,45)
, bytes2word(56,58,55,52)
,	/* ST_v296: (byte 1) */
  bytes2word(0,78,117,109)
, bytes2word(101,114,105,99)
, bytes2word(46,114,101,97)
, bytes2word(100,83,105,103)
, bytes2word(110,101,100,58)
, bytes2word(57,58,50,56)
, bytes2word(45,49,48,58)
,	/* ST_v300: (byte 3) */
  bytes2word(55,49,0,78)
, bytes2word(117,109,101,114)
, bytes2word(105,99,46,114)
, bytes2word(101,97,100,83)
, bytes2word(105,103,110,101)
, bytes2word(100,58,57,58)
, bytes2word(51,57,45,49)
, bytes2word(48,58,55,49)
, bytes2word(0,0,0,0)
,};
