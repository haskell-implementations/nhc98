#include "newmacros.h"
#include "runtime.h"

#define v226	((void*)startLabel+22)
#define v227	((void*)startLabel+33)
#define CT_v230	((void*)startLabel+72)
#define FN_LAMBDA223	((void*)startLabel+108)
#define CT_v232	((void*)startLabel+144)
#define F0_LAMBDA223	((void*)startLabel+152)
#define FN_LAMBDA222	((void*)startLabel+184)
#define CT_v233	((void*)startLabel+216)
#define F0_LAMBDA222	((void*)startLabel+224)
#define FN_List_46Prelude_46162_46interleave	((void*)startLabel+240)
#define v235	((void*)startLabel+254)
#define v236	((void*)startLabel+271)
#define CT_v239	((void*)startLabel+336)
#define F0_List_46Prelude_46162_46interleave	((void*)startLabel+344)
#define FN_LAMBDA221	((void*)startLabel+380)
#define CT_v241	((void*)startLabel+412)
#define F0_LAMBDA221	((void*)startLabel+420)
#define ST_v228	((void*)startLabel+424)
#define ST_v240	((void*)startLabel+442)
#define ST_v231	((void*)startLabel+466)
#define ST_v237	((void*)startLabel+494)
extern Node TM_List[];
extern Node FN_Prelude_46_95foldr[];
extern Node TMSUB_List[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46_43_43[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v230)
,};
Node FN_List_46permutations[] = {
  useLabel(TM_List)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v226: (byte 2) */
  bytes2word(TOP(15),BOT(15),POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
,	/* v227: (byte 1) */
  bytes2word(RETURN,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I4,HEAP_I1)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 60001
, useLabel(ST_v228)
,	/* CT_v230: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_List_46permutations[] = {
  CAPTAG(useLabel(FN_List_46permutations),1)
, CAPTAG(useLabel(FN_LAMBDA223),2)
, VAPTAG(useLabel(FN_List_46permutations))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v232)
,	/* FN_LAMBDA223: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,6)
, bytes2word(HEAP_ARG,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 70028
, useLabel(ST_v231)
,	/* CT_v232: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA223: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA223),3)
, CAPTAG(useLabel(FN_LAMBDA222),2)
, CAPTAG(useLabel(FN_List_46Prelude_46162_46interleave),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v233)
,	/* FN_LAMBDA222: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 70028
, useLabel(ST_v231)
,	/* CT_v233: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA222: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA222),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v239)
,	/* FN_List_46Prelude_46162_46interleave: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v235: (byte 2) */
  bytes2word(TOP(21),BOT(21),POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_N1,4,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_IN3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,5)
,	/* v236: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,UNPACK)
, bytes2word(2,HEAP_CVAL_N1,4,HEAP_P1)
, bytes2word(0,HEAP_I1,HEAP_CVAL_N1,4)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_IN3,HEAP_CVAL_N1,4,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,3,HEAP_CVAL_I3)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,1)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,14)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 90009
, useLabel(ST_v237)
,	/* CT_v239: (byte 0) */
  HW(5,2)
, 0
,	/* F0_List_46Prelude_46162_46interleave: (byte 0) */
  CAPTAG(useLabel(FN_List_46Prelude_46162_46interleave),2)
, CAPTAG(useLabel(FN_LAMBDA221),1)
, CAPTAG(useLabel(FN_List_46Prelude_46162_46interleave),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46map))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v241)
,	/* FN_LAMBDA221: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 100050
, useLabel(ST_v240)
,	/* CT_v241: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA221: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA221),2)
,	/* ST_v228: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,112,101,114)
, bytes2word(109,117,116,97)
, bytes2word(116,105,111,110)
,	/* ST_v240: (byte 2) */
  bytes2word(115,0,76,105)
, bytes2word(115,116,46,112)
, bytes2word(101,114,109,117)
, bytes2word(116,97,116,105)
, bytes2word(111,110,115,58)
, bytes2word(49,48,58,53)
,	/* ST_v231: (byte 2) */
  bytes2word(48,0,76,105)
, bytes2word(115,116,46,112)
, bytes2word(101,114,109,117)
, bytes2word(116,97,116,105)
, bytes2word(111,110,115,58)
, bytes2word(55,58,50,56)
, bytes2word(45,55,58,55)
,	/* ST_v237: (byte 2) */
  bytes2word(57,0,76,105)
, bytes2word(115,116,46,112)
, bytes2word(101,114,109,117)
, bytes2word(116,97,116,105)
, bytes2word(111,110,115,58)
, bytes2word(57,58,57,45)
, bytes2word(49,48,58,54)
, bytes2word(57,0,0,0)
,};
