#include "newmacros.h"
#include "runtime.h"

#define CT_v294	((void*)startLabel+76)
#define FN_LAMBDA291	((void*)startLabel+144)
#define CT_v295	((void*)startLabel+180)
#define F0_LAMBDA291	((void*)startLabel+188)
#define FN_LAMBDA290	((void*)startLabel+228)
#define CT_v296	((void*)startLabel+256)
#define F0_LAMBDA290	((void*)startLabel+264)
#define FN_LAMBDA289	((void*)startLabel+296)
#define v297	((void*)startLabel+329)
#define CT_v299	((void*)startLabel+336)
#define F0_LAMBDA289	((void*)startLabel+344)
#define FN_LAMBDA288	((void*)startLabel+380)
#define v300	((void*)startLabel+396)
#define CT_v302	((void*)startLabel+404)
#define F0_LAMBDA288	((void*)startLabel+412)
#define FN_LAMBDA287	((void*)startLabel+440)
#define v307	((void*)startLabel+450)
#define v306	((void*)startLabel+454)
#define v303	((void*)startLabel+458)
#define CT_v308	((void*)startLabel+500)
#define F0_LAMBDA287	((void*)startLabel+508)
#define FN_LAMBDA286	((void*)startLabel+548)
#define CT_v310	((void*)startLabel+568)
#define CF_LAMBDA286	((void*)startLabel+576)
#define FN_LAMBDA285	((void*)startLabel+588)
#define CT_v312	((void*)startLabel+608)
#define CF_LAMBDA285	((void*)startLabel+616)
#define FN_LAMBDA284	((void*)startLabel+628)
#define CT_v313	((void*)startLabel+648)
#define F0_LAMBDA284	((void*)startLabel+656)
#define FN_LAMBDA283	((void*)startLabel+680)
#define CT_v314	((void*)startLabel+700)
#define CF_LAMBDA283	((void*)startLabel+708)
#define FN_LAMBDA282	((void*)startLabel+720)
#define CT_v316	((void*)startLabel+740)
#define CF_LAMBDA282	((void*)startLabel+748)
#define FN_LAMBDA281	((void*)startLabel+760)
#define CT_v318	((void*)startLabel+780)
#define CF_LAMBDA281	((void*)startLabel+788)
#define ST_v317	((void*)startLabel+792)
#define ST_v309	((void*)startLabel+793)
#define ST_v315	((void*)startLabel+796)
#define ST_v311	((void*)startLabel+807)
extern Node FN_Language_46Preprocessor_46Cpphs_46Options_46preInclude[];
extern Node FN_Language_46Preprocessor_46Cpphs_46Options_46boolopts[];
extern Node FN_Language_46Preprocessor_46Cpphs_46Options_46defines[];
extern Node FN_Language_46Preprocessor_46Cpphs_46Options_46includes[];
extern Node FN_Language_46Preprocessor_46Cpphs_46CppIfdef_46cppIfdef[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Language_46Preprocessor_46Cpphs_46MacroPass_46macroPass[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Language_46Preprocessor_46Cpphs_46Options_46macros[];
extern Node FN_Prelude_46not[];
extern Node FN_Prelude_46map[];
extern Node F0_Prelude_46snd[];
extern Node FN_Prelude_46unlines[];
extern Node FN_Language_46Preprocessor_46Cpphs_46Options_46literate[];
extern Node FN_Language_46Preprocessor_46Unlit_46unlit[];
extern Node F0_Prelude_46id[];
extern Node FN_Prelude_46concatMap[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v294)
,};
Node FN_Language_46Preprocessor_46Cpphs_46RunCpphs_46runCpphs[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,9,HEAP_I1,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(11,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v294: (byte 0) */
  HW(10,3)
, 0
,};
Node F0_Language_46Preprocessor_46Cpphs_46RunCpphs_46runCpphs[] = {
  CAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46RunCpphs_46runCpphs),3)
, VAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46Options_46preInclude))
, VAPTAG(useLabel(FN_LAMBDA287))
, VAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46Options_46boolopts))
, VAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46Options_46defines))
, VAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46Options_46includes))
, VAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46CppIfdef_46cppIfdef))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA291),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v295)
,	/* FN_LAMBDA291: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_ARG)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v295: (byte 0) */
  HW(5,4)
, 0
,	/* F0_LAMBDA291: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA291),4)
, VAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46Options_46defines))
, VAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46MacroPass_46macroPass))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA290),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v296)
,	/* FN_LAMBDA290: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_I5,HEAP_I1,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v296: (byte 0) */
  HW(4,4)
, 0
,	/* F0_LAMBDA290: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA290),4)
, VAPTAG(useLabel(FN_LAMBDA288))
, VAPTAG(useLabel(FN_LAMBDA289))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v299)
,	/* FN_LAMBDA289: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(21,0,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,2)
, bytes2word(PUSH_P1,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,ZAP_ARG_I2,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
,	/* v297: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_ARG_I3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v299: (byte 0) */
  HW(5,3)
, 0
,	/* F0_LAMBDA289: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA289),3)
, VAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46Options_46macros))
, VAPTAG(useLabel(FN_Prelude_46not))
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_Prelude_46snd)
, VAPTAG(useLabel(FN_Prelude_46unlines))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v302)
,	/* FN_LAMBDA288: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,7,0,PUSH_HEAP)
,	/* v300: (byte 4) */
  bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,RETURN)
, bytes2word(PUSH_CVAL_P1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v302: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA288: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA288),2)
, VAPTAG(useLabel(FN_Language_46Preprocessor_46Cpphs_46Options_46literate))
, CAPTAG(useLabel(FN_Language_46Preprocessor_46Unlit_46unlit),1)
, useLabel(F0_Prelude_46id)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v308)
,	/* FN_LAMBDA287: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v307: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v306: (byte 2) */
  bytes2word(6,0,POP_I1,PUSH_HEAP)
,	/* v303: (byte 2) */
  bytes2word(HEAP_CVAL_I3,RETURN_EVAL,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(12,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v308: (byte 0) */
  HW(7,2)
, 0
,	/* F0_LAMBDA287: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA287),2)
, VAPTAG(useLabel(FN_LAMBDA281))
, CAPTAG(useLabel(FN_LAMBDA284),1)
, VAPTAG(useLabel(FN_Prelude_46concatMap))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA285))
, VAPTAG(useLabel(FN_LAMBDA286))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v310)
,	/* FN_LAMBDA286: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v309)
,	/* CT_v310: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA286: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA286))
, bytes2word(0,0,0,0)
, useLabel(CT_v312)
,	/* FN_LAMBDA285: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v311)
,	/* CT_v312: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA285: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA285))
, bytes2word(1,0,0,1)
, useLabel(CT_v313)
,	/* FN_LAMBDA284: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v313: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA284: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA284),1)
, VAPTAG(useLabel(FN_LAMBDA282))
, VAPTAG(useLabel(FN_LAMBDA283))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v314)
,	/* FN_LAMBDA283: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v309)
,	/* CT_v314: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA283: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA283))
, bytes2word(0,0,0,0)
, useLabel(CT_v316)
,	/* FN_LAMBDA282: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v315)
,	/* CT_v316: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA282: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA282))
, bytes2word(0,0,0,0)
, useLabel(CT_v318)
,	/* FN_LAMBDA281: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v317)
,	/* CT_v318: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA281: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA281))
,	/* ST_v317: (byte 0) */
 	/* ST_v309: (byte 1) */
 	/* ST_v315: (byte 4) */
  bytes2word(0,34,10,0)
, bytes2word(35,105,110,99)
, bytes2word(108,117,100,101)
,	/* ST_v311: (byte 3) */
  bytes2word(32,34,0,35)
, bytes2word(108,105,110,101)
, bytes2word(32,49,32,34)
, bytes2word(0,0,0,0)
,};
