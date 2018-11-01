#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95sameBH	((void*)startLabel+12)
#define CT_v400	((void*)startLabel+32)
#define F0_NHC_46Binary_46hs_95sameBH	((void*)startLabel+40)
#define FN_NHC_46Binary_46sameBH	((void*)startLabel+56)
#define CT_v401	((void*)startLabel+72)
#define F0_NHC_46Binary_46sameBH	((void*)startLabel+80)
#define FN_NHC_46Binary_46rehearse	((void*)startLabel+100)
#define CT_v402	((void*)startLabel+120)
#define F0_NHC_46Binary_46rehearse	((void*)startLabel+128)
#define FN_LAMBDA388	((void*)startLabel+156)
#define v404	((void*)startLabel+166)
#define v405	((void*)startLabel+174)
#define CT_v407	((void*)startLabel+196)
#define F0_LAMBDA388	((void*)startLabel+204)
#define v408	((void*)startLabel+273)
#define CT_v410	((void*)startLabel+328)
#define FN_LAMBDA398	((void*)startLabel+380)
#define CT_v414	((void*)startLabel+436)
#define F0_LAMBDA398	((void*)startLabel+444)
#define FN_LAMBDA397	((void*)startLabel+496)
#define CT_v415	((void*)startLabel+520)
#define F0_LAMBDA397	((void*)startLabel+528)
#define FN_LAMBDA396	((void*)startLabel+552)
#define CT_v416	((void*)startLabel+564)
#define F0_LAMBDA396	((void*)startLabel+572)
#define FN_LAMBDA395	((void*)startLabel+584)
#define CT_v417	((void*)startLabel+596)
#define F0_LAMBDA395	((void*)startLabel+604)
#define FN_LAMBDA394	((void*)startLabel+624)
#define v418	((void*)startLabel+652)
#define CT_v420	((void*)startLabel+700)
#define F0_LAMBDA394	((void*)startLabel+708)
#define FN_LAMBDA393	((void*)startLabel+744)
#define CT_v424	((void*)startLabel+836)
#define F0_LAMBDA393	((void*)startLabel+844)
#define FN_LAMBDA392	((void*)startLabel+920)
#define CT_v425	((void*)startLabel+968)
#define F0_LAMBDA392	((void*)startLabel+976)
#define FN_NHC_46Binary_46Prelude_46200_46pos	((void*)startLabel+1020)
#define v426	((void*)startLabel+1038)
#define CT_v428	((void*)startLabel+1060)
#define F0_NHC_46Binary_46Prelude_46200_46pos	((void*)startLabel+1068)
#define FN_LAMBDA391	((void*)startLabel+1080)
#define CT_v429	((void*)startLabel+1092)
#define F0_LAMBDA391	((void*)startLabel+1100)
#define FN_LAMBDA390	((void*)startLabel+1112)
#define CT_v430	((void*)startLabel+1124)
#define F0_LAMBDA390	((void*)startLabel+1132)
#define FN_LAMBDA389	((void*)startLabel+1152)
#define v431	((void*)startLabel+1180)
#define CT_v433	((void*)startLabel+1228)
#define F0_LAMBDA389	((void*)startLabel+1236)
void FR_NHC_46Binary_46hs_95sameBH(void);
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_60[];
extern Node FN_NHC_46Binary_46seekBin[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node CF_Prelude_46Num_46Prelude_46Int[];
extern Node CF_Prelude_46Ord_46Prelude_46Int[];
extern Node FN_NHC_46Binary_46getBits[];
extern Node FN_NHC_46Binary_46putBits[];
extern Node FN_Prelude_46_60[];
extern Node FN_Prelude_46_45[];
extern Node FN_NHC_46Internal_46_95apply2[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v400)
,	/* FN_NHC_46Binary_46hs_95sameBH: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46Binary_46hs_95sameBH)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v400: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46Binary_46hs_95sameBH: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95sameBH),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v401)
,	/* FN_NHC_46Binary_46sameBH: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_P1,0)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v401: (byte 0) */
  HW(1,2)
, 0
,	/* F0_NHC_46Binary_46sameBH: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46sameBH),2)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95sameBH))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v402)
,	/* FN_NHC_46Binary_46rehearse: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v402: (byte 0) */
  HW(3,2)
, 0
,	/* F0_NHC_46Binary_46rehearse: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46rehearse),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA388),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v407)
,	/* FN_LAMBDA388: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v404: (byte 2) */
  bytes2word(TOP(12),BOT(12),POP_I1,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
,	/* v405: (byte 2) */
  bytes2word(2,RETURN_EVAL,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_I1,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v407: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA388: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA388),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_NHC_46Binary_46rehearse))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v410)
,};
Node FN_NHC_46Binary_46copyBits[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,3,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,32,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,2,4)
, bytes2word(HEAP_CVAL_N1,1,HEAP_ARG,5)
, bytes2word(HEAP_INT_P1,32,HEAP_CVAL_I5,HEAP_P1)
, bytes2word(0,HEAP_ARG_ARG,5,2)
, bytes2word(HEAP_ARG_ARG,1,4,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,9)
,	/* v408: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_P1,7,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(5,HEAP_INT_P1,32,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG_ARG,1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v410: (byte 0) */
  HW(7,5)
, 0
,};
Node F0_NHC_46Binary_46copyBits[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46copyBits),5)
, VAPTAG(useLabel(FN_NHC_46Binary_46sameBH))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_60))
, CAPTAG(useLabel(FN_LAMBDA393),1)
, VAPTAG(useLabel(FN_NHC_46Binary_46rehearse))
, VAPTAG(useLabel(FN_NHC_46Binary_46seekBin))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, CAPTAG(useLabel(FN_LAMBDA398),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v414)
,	/* FN_LAMBDA398: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_I1,HEAP_I2,HEAP_P1,3)
, bytes2word(HEAP_P1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,8)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,1)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(2,HEAP_I1,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v414: (byte 0) */
  HW(8,3)
, 0
,	/* F0_LAMBDA398: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA398),3)
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, useLabel(CF_Prelude_46Ord_46Prelude_46Int)
, VAPTAG(useLabel(FN_LAMBDA394))
, VAPTAG(useLabel(FN_LAMBDA395))
, VAPTAG(useLabel(FN_LAMBDA396))
, VAPTAG(useLabel(FN_NHC_46Binary_46getBits))
, CAPTAG(useLabel(FN_LAMBDA397),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v415)
,	/* FN_LAMBDA397: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,4,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v415: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA397: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA397),4)
, VAPTAG(useLabel(FN_NHC_46Binary_46putBits))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(1,0,0,1)
, useLabel(CT_v416)
,	/* FN_LAMBDA396: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v416: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA396: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA396),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v417)
,	/* FN_LAMBDA395: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v417: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA395: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA395),1)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v420)
,	/* FN_LAMBDA394: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_ARG,4,PUSH_ARG_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(12,0,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_ARG)
,	/* v418: (byte 4) */
  bytes2word(3,HEAP_OFF_N1,3,RETURN)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(5,HEAP_ARG,4,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_ARG,4,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
,	/* CT_v420: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA394: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA394),4)
, VAPTAG(useLabel(FN_Prelude_46_60))
, VAPTAG(useLabel(FN_Prelude_46_45))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v424)
,	/* FN_LAMBDA393: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(NEEDHEAP_P1,39,UNPACK,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_I1,HEAP_I2)
, bytes2word(HEAP_P1,3,HEAP_P1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,8,HEAP_CVAL_P1,8)
, bytes2word(HEAP_ARG,1,HEAP_I1,HEAP_ARG)
, bytes2word(2,HEAP_P1,5,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,6,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,10,HEAP_ARG)
, bytes2word(4,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(11,HEAP_ARG,4,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,13)
, bytes2word(HEAP_ARG_ARG,5,1,HEAP_ARG)
, bytes2word(2,HEAP_P1,5,HEAP_ARG)
, bytes2word(6,HEAP_I1,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,14,HEAP_OFF_N1)
, bytes2word(12,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v424: (byte 0) */
  HW(12,7)
, 0
,	/* F0_LAMBDA393: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA393),7)
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, useLabel(CF_Prelude_46Ord_46Prelude_46Int)
, VAPTAG(useLabel(FN_LAMBDA389))
, VAPTAG(useLabel(FN_LAMBDA390))
, VAPTAG(useLabel(FN_LAMBDA391))
, CAPTAG(useLabel(FN_NHC_46Binary_46Prelude_46200_46pos),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Binary_46seekBin))
, VAPTAG(useLabel(FN_NHC_46Binary_46getBits))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, CAPTAG(useLabel(FN_LAMBDA392),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v425)
,	/* FN_LAMBDA392: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(6,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,6,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_ARG,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(8,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v425: (byte 0) */
  HW(6,8)
, 0
,	/* F0_LAMBDA392: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA392),8)
, CAPTAG(useLabel(FN_NHC_46Binary_46Prelude_46200_46pos),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Binary_46seekBin))
, VAPTAG(useLabel(FN_NHC_46Binary_46putBits))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v428)
,	/* FN_NHC_46Binary_46Prelude_46200_46pos: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,JUMPFALSE)
, bytes2word(14,0,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(PUSH_ARG,4,EVAL,PUSH_ARG)
, bytes2word(5,EVAL,NEEDHEAP_I32,ADD_W)
,	/* v426: (byte 2) */
  bytes2word(SUB_W,RETURN,PUSH_ARG,4)
, bytes2word(ZAP_ARG_I2,ZAP_ARG,4,EVAL)
, bytes2word(PUSH_ZAP_ARG_I3,EVAL,PUSH_ZAP_ARG,5)
, bytes2word(EVAL,NEEDHEAP_I32,ADD_W,SUB_W)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v428: (byte 0) */
  HW(0,5)
, 0
,	/* F0_NHC_46Binary_46Prelude_46200_46pos: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46Prelude_46200_46pos),5)
, bytes2word(1,0,0,1)
, useLabel(CT_v429)
,	/* FN_LAMBDA391: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v429: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA391: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA391),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v430)
,	/* FN_LAMBDA390: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v430: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA390: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA390),1)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v433)
,	/* FN_LAMBDA389: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_ARG,4,PUSH_ARG_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(12,0,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_ARG)
,	/* v431: (byte 4) */
  bytes2word(3,HEAP_OFF_N1,3,RETURN)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(5,HEAP_ARG,4,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_ARG,4,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
,	/* CT_v433: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA389: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA389),4)
, VAPTAG(useLabel(FN_Prelude_46_60))
, VAPTAG(useLabel(FN_Prelude_46_45))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_sameBH" NHC.Binary.hs_sameBH 2 :: FFI.ForeignObj -> FFI.ForeignObj -> Prelude.Bool */
extern HsBool hs_sameBH(void*,void*);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95sameBH = {"NHC.Binary","NHC.Binary.hs_sameBH","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95sameBH) {
  NodePtr nodeptr;
  HsBool result;
  void* arg1;
  void* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hs_sameBH(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95sameBH);
  C_RETURN(nodeptr);
}
