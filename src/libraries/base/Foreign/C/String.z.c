#include "newmacros.h"
#include "runtime.h"

#define FN_Foreign_46C_46String_46castCharToCWchar	((void*)startLabel+8)
#define CT_v614	((void*)startLabel+52)
#define F0_Foreign_46C_46String_46castCharToCWchar	((void*)startLabel+60)
#define FN_Foreign_46C_46String_46castCWcharToChar	((void*)startLabel+92)
#define CT_v616	((void*)startLabel+136)
#define F0_Foreign_46C_46String_46castCWcharToChar	((void*)startLabel+144)
#define FN_Foreign_46C_46String_46charsToCWchars	((void*)startLabel+176)
#define CT_v618	((void*)startLabel+200)
#define F0_Foreign_46C_46String_46charsToCWchars	((void*)startLabel+208)
#define FN_Foreign_46C_46String_46cWcharsToChars	((void*)startLabel+228)
#define CT_v620	((void*)startLabel+252)
#define F0_Foreign_46C_46String_46cWcharsToChars	((void*)startLabel+260)
#define FN_Foreign_46C_46String_46wNUL	((void*)startLabel+280)
#define CT_v622	((void*)startLabel+312)
#define CF_Foreign_46C_46String_46wNUL	((void*)startLabel+320)
#define CT_v624	((void*)startLabel+380)
#define FN_LAMBDA599	((void*)startLabel+424)
#define CT_v626	((void*)startLabel+468)
#define F0_LAMBDA599	((void*)startLabel+476)
#define CT_v628	((void*)startLabel+520)
#define FN_Foreign_46C_46String_46newArrayLen	((void*)startLabel+564)
#define CT_v630	((void*)startLabel+596)
#define F0_Foreign_46C_46String_46newArrayLen	((void*)startLabel+604)
#define FN_LAMBDA600	((void*)startLabel+632)
#define CT_v632	((void*)startLabel+672)
#define F0_LAMBDA600	((void*)startLabel+680)
#define CT_v634	((void*)startLabel+728)
#define CT_v636	((void*)startLabel+792)
#define CT_v641	((void*)startLabel+872)
#define FN_LAMBDA601	((void*)startLabel+908)
#define CT_v643	((void*)startLabel+936)
#define F0_LAMBDA601	((void*)startLabel+944)
#define CT_v645	((void*)startLabel+1000)
#define FN_LAMBDA602	((void*)startLabel+1044)
#define CT_v647	((void*)startLabel+1072)
#define F0_LAMBDA602	((void*)startLabel+1080)
#define CT_v649	((void*)startLabel+1144)
#define FN_Foreign_46C_46String_46charsToCChars	((void*)startLabel+1184)
#define CT_v651	((void*)startLabel+1208)
#define F0_Foreign_46C_46String_46charsToCChars	((void*)startLabel+1216)
#define CT_v653	((void*)startLabel+1288)
#define FN_Foreign_46C_46String_46cCharsToChars	((void*)startLabel+1336)
#define CT_v655	((void*)startLabel+1360)
#define F0_Foreign_46C_46String_46cCharsToChars	((void*)startLabel+1368)
#define FN_Foreign_46C_46String_46nUL	((void*)startLabel+1388)
#define CT_v657	((void*)startLabel+1420)
#define CF_Foreign_46C_46String_46nUL	((void*)startLabel+1428)
#define CT_v659	((void*)startLabel+1488)
#define FN_LAMBDA603	((void*)startLabel+1532)
#define CT_v661	((void*)startLabel+1576)
#define F0_LAMBDA603	((void*)startLabel+1584)
#define CT_v663	((void*)startLabel+1628)
#define CT_v665	((void*)startLabel+1696)
#define CT_v667	((void*)startLabel+1760)
#define CT_v672	((void*)startLabel+1840)
#define FN_LAMBDA604	((void*)startLabel+1876)
#define CT_v674	((void*)startLabel+1904)
#define F0_LAMBDA604	((void*)startLabel+1912)
#define CT_v676	((void*)startLabel+1968)
#define FN_LAMBDA605	((void*)startLabel+2012)
#define CT_v678	((void*)startLabel+2040)
#define F0_LAMBDA605	((void*)startLabel+2048)
#define CT_v680	((void*)startLabel+2112)
#define CT_v682	((void*)startLabel+2172)
#define CT_v684	((void*)startLabel+2220)
#define CT_v686	((void*)startLabel+2268)
#define CT_v688	((void*)startLabel+2316)
#define CT_v690	((void*)startLabel+2364)
#define CT_v692	((void*)startLabel+2412)
#define ST_v612	((void*)startLabel+2428)
#define ST_v654	((void*)startLabel+2445)
#define ST_v619	((void*)startLabel+2476)
#define ST_v652	((void*)startLabel+2508)
#define ST_v615	((void*)startLabel+2541)
#define ST_v648	((void*)startLabel+2575)
#define ST_v613	((void*)startLabel+2608)
#define ST_v679	((void*)startLabel+2642)
#define ST_v650	((void*)startLabel+2679)
#define ST_v617	((void*)startLabel+2710)
#define ST_v656	((void*)startLabel+2742)
#define ST_v629	((void*)startLabel+2763)
#define ST_v631	((void*)startLabel+2792)
#define ST_v666	((void*)startLabel+2834)
#define ST_v664	((void*)startLabel+2863)
#define ST_v687	((void*)startLabel+2895)
#define ST_v685	((void*)startLabel+2923)
#define ST_v635	((void*)startLabel+2954)
#define ST_v633	((void*)startLabel+2983)
#define ST_v675	((void*)startLabel+3015)
#define ST_v677	((void*)startLabel+3045)
#define ST_v670	((void*)startLabel+3088)
#define ST_v673	((void*)startLabel+3121)
#define ST_v691	((void*)startLabel+3167)
#define ST_v689	((void*)startLabel+3196)
#define ST_v644	((void*)startLabel+3228)
#define ST_v646	((void*)startLabel+3258)
#define ST_v639	((void*)startLabel+3301)
#define ST_v642	((void*)startLabel+3334)
#define ST_v621	((void*)startLabel+3380)
#define ST_v662	((void*)startLabel+3402)
#define ST_v658	((void*)startLabel+3432)
#define ST_v660	((void*)startLabel+3465)
#define ST_v683	((void*)startLabel+3512)
#define ST_v681	((void*)startLabel+3541)
#define ST_v627	((void*)startLabel+3573)
#define ST_v623	((void*)startLabel+3603)
#define ST_v625	((void*)startLabel+3636)
extern Node TM_Foreign_46C_46String[];
extern Node FN_Char_46ord[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46fromIntegral[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node CF_Prelude_46Num_46NHC_46FFI_46CWchar[];
extern Node CF_Prelude_46Integral_46NHC_46FFI_46CWchar[];
extern Node CF_Prelude_46Num_46Prelude_46Int[];
extern Node FN_Char_46chr[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46CWchar_46fromInteger[];
extern Node FN_Foreign_46Marshal_46Array_46withArrayLen[];
extern Node CF_NHC_46FFI_46Storable_46NHC_46FFI_46CWchar[];
extern Node FN_Prelude_46_36[];
extern Node TMSUB_Foreign_46C_46String[];
extern Node FN_Foreign_46Marshal_46Array_46withArray0[];
extern Node FN_Prelude_46_46[];
extern Node FN_Foreign_46Marshal_46Array_46newArray[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46length[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Foreign_46Marshal_46Array_46newArray0[];
extern Node FN_Foreign_46Marshal_46Array_46peekArray[];
extern Node FN_Foreign_46Marshal_46Array_46peekArray0[];
extern Node CF_Prelude_46Eq_46NHC_46FFI_46CWchar[];
extern Node CF_Prelude_46Num_46NHC_46FFI_46CChar[];
extern Node CF_Prelude_46Integral_46NHC_46FFI_46Word8[];
extern Node CF_Prelude_46Integral_46NHC_46FFI_46CChar[];
extern Node CF_Prelude_46Num_46NHC_46FFI_46Word8[];
extern Node FN_Prelude_46Num_46NHC_46FFI_46CChar_46fromInteger[];
extern Node CF_NHC_46FFI_46Storable_46NHC_46FFI_46CChar[];
extern Node CF_Prelude_46Eq_46NHC_46FFI_46CChar[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_60[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v614)
,	/* FN_Foreign_46C_46String_46castCharToCWchar: (byte 0) */
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,1)
, bytes2word(PUSH_P1,0,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,2,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 4730001
, useLabel(ST_v613)
,	/* CT_v614: (byte 0) */
  HW(5,1)
, 0
,	/* F0_Foreign_46C_46String_46castCharToCWchar: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46C_46String_46castCharToCWchar),1)
, VAPTAG(useLabel(FN_Char_46ord))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CWchar)
, bytes2word(1,0,0,1)
, useLabel(CT_v616)
,	/* FN_Foreign_46C_46String_46castCWcharToChar: (byte 0) */
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,1,PUSH_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,2,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 4700001
, useLabel(ST_v615)
,	/* CT_v616: (byte 0) */
  HW(5,1)
, 0
,	/* F0_Foreign_46C_46String_46castCWcharToChar: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46C_46String_46castCWcharToChar),1)
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46CWchar)
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Char_46chr))
, bytes2word(1,0,0,1)
, useLabel(CT_v618)
,	/* FN_Foreign_46C_46String_46charsToCWchars: (byte 0) */
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 4640001
, useLabel(ST_v617)
,	/* CT_v618: (byte 0) */
  HW(2,1)
, 0
,	/* F0_Foreign_46C_46String_46charsToCWchars: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46C_46String_46charsToCWchars),1)
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_Foreign_46C_46String_46castCharToCWchar)
, bytes2word(1,0,0,1)
, useLabel(CT_v620)
,	/* FN_Foreign_46C_46String_46cWcharsToChars: (byte 0) */
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 4630001
, useLabel(ST_v619)
,	/* CT_v620: (byte 0) */
  HW(2,1)
, 0
,	/* F0_Foreign_46C_46String_46cWcharsToChars: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46C_46String_46cWcharsToChars),1)
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_Foreign_46C_46String_46castCWcharToChar)
, bytes2word(0,0,0,0)
, useLabel(CT_v622)
,	/* FN_Foreign_46C_46String_46wNUL: (byte 0) */
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CADR_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
, 4350001
, useLabel(ST_v621)
,	/* CT_v622: (byte 0) */
  HW(1,0)
, 0
,	/* CF_Foreign_46C_46String_46wNUL: (byte 0) */
  VAPTAG(useLabel(FN_Foreign_46C_46String_46wNUL))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46CWchar_46fromInteger))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v624)
,};
Node FN_Foreign_46C_46String_46withCWStringLen[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 4280001
, useLabel(ST_v623)
,	/* CT_v624: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Foreign_46C_46String_46withCWStringLen[] = {
  CAPTAG(useLabel(FN_Foreign_46C_46String_46withCWStringLen),2)
, VAPTAG(useLabel(FN_Foreign_46C_46String_46charsToCWchars))
, CAPTAG(useLabel(FN_Foreign_46Marshal_46Array_46withArrayLen),1)
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CWchar)
, CAPTAG(useLabel(FN_LAMBDA599),2)
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v626)
,	/* FN_LAMBDA599: (byte 0) */
  useLabel(TMSUB_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(3,2,PUSH_P1,0)
, bytes2word(PUSH_ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 4290039
, useLabel(ST_v625)
,	/* CT_v626: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA599: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA599),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v628)
,};
Node FN_Foreign_46C_46String_46withCWString[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,7,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 4160001
, useLabel(ST_v627)
,	/* CT_v628: (byte 0) */
  HW(5,0)
, 0
,};
Node CF_Foreign_46C_46String_46withCWString[] = {
  VAPTAG(useLabel(FN_Foreign_46C_46String_46withCWString))
, CAPTAG(useLabel(FN_Foreign_46Marshal_46Array_46withArray0),1)
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CWchar)
, useLabel(CF_Foreign_46C_46String_46wNUL)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Foreign_46C_46String_46charsToCWchars)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v630)
,	/* FN_Foreign_46C_46String_46newArrayLen: (byte 0) */
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 3400001
, useLabel(ST_v629)
,	/* CT_v630: (byte 0) */
  HW(3,2)
, 0
,	/* F0_Foreign_46C_46String_46newArrayLen: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46C_46String_46newArrayLen),2)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Array_46newArray))
, CAPTAG(useLabel(FN_LAMBDA600),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v632)
,	/* FN_LAMBDA600: (byte 0) */
  useLabel(TMSUB_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_IN3,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 3410008
, useLabel(ST_v631)
,	/* CT_v632: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA600: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA600),2)
, VAPTAG(useLabel(FN_Prelude_46length))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v634)
,};
Node FN_Foreign_46C_46String_46newCWStringLen[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 4040001
, useLabel(ST_v633)
,	/* CT_v634: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Foreign_46C_46String_46newCWStringLen[] = {
  CAPTAG(useLabel(FN_Foreign_46C_46String_46newCWStringLen),1)
, VAPTAG(useLabel(FN_Foreign_46C_46String_46charsToCWchars))
, VAPTAG(useLabel(FN_Foreign_46C_46String_46newArrayLen))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CWchar)
, bytes2word(0,0,0,0)
, useLabel(CT_v636)
,};
Node FN_Foreign_46C_46String_46newCWString[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,7,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 3940001
, useLabel(ST_v635)
,	/* CT_v636: (byte 0) */
  HW(5,0)
, 0
,};
Node CF_Foreign_46C_46String_46newCWString[] = {
  VAPTAG(useLabel(FN_Foreign_46C_46String_46newCWString))
, CAPTAG(useLabel(FN_Foreign_46Marshal_46Array_46newArray0),1)
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CWchar)
, useLabel(CF_Foreign_46C_46String_46wNUL)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Foreign_46C_46String_46charsToCWchars)
, bytes2word(1,0,0,1)
, useLabel(CT_v641)
,};
Node FN_Foreign_46C_46String_46peekCWStringLen[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,HEAP_P1,0,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 3810001
, useLabel(ST_v639)
,	/* CT_v641: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Foreign_46C_46String_46peekCWStringLen[] = {
  CAPTAG(useLabel(FN_Foreign_46C_46String_46peekCWStringLen),1)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Array_46peekArray))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CWchar)
, CAPTAG(useLabel(FN_LAMBDA601),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v643)
,	/* FN_LAMBDA601: (byte 0) */
  useLabel(TMSUB_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 3820009
, useLabel(ST_v642)
,	/* CT_v643: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA601: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA601),1)
, VAPTAG(useLabel(FN_Foreign_46C_46String_46cWcharsToChars))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v645)
,};
Node FN_Foreign_46C_46String_46peekCWString[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 3740001
, useLabel(ST_v644)
,	/* CT_v645: (byte 0) */
  HW(6,1)
, 0
,};
Node F0_Foreign_46C_46String_46peekCWString[] = {
  CAPTAG(useLabel(FN_Foreign_46C_46String_46peekCWString),1)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Array_46peekArray0))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CWchar)
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46CWchar)
, useLabel(CF_Foreign_46C_46String_46wNUL)
, CAPTAG(useLabel(FN_LAMBDA602),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v647)
,	/* FN_LAMBDA602: (byte 0) */
  useLabel(TMSUB_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 3750009
, useLabel(ST_v646)
,	/* CT_v647: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA602: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA602),1)
, VAPTAG(useLabel(FN_Foreign_46C_46String_46cWcharsToChars))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v649)
,};
Node FN_Foreign_46C_46String_46castCharToCChar[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,1)
, bytes2word(PUSH_P1,0,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,2,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 2000001
, useLabel(ST_v648)
,	/* CT_v649: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_Foreign_46C_46String_46castCharToCChar[] = {
  CAPTAG(useLabel(FN_Foreign_46C_46String_46castCharToCChar),1)
, VAPTAG(useLabel(FN_Char_46ord))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CChar)
, bytes2word(1,0,0,1)
, useLabel(CT_v651)
,	/* FN_Foreign_46C_46String_46charsToCChars: (byte 0) */
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 3530001
, useLabel(ST_v650)
,	/* CT_v651: (byte 0) */
  HW(2,1)
, 0
,	/* F0_Foreign_46C_46String_46charsToCChars: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46C_46String_46charsToCChars),1)
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_Foreign_46C_46String_46castCharToCChar)
, bytes2word(1,0,0,1)
, useLabel(CT_v653)
,};
Node FN_Foreign_46C_46String_46castCCharToChar[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,5,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 1950001
, useLabel(ST_v652)
,	/* CT_v653: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_Foreign_46C_46String_46castCCharToChar[] = {
  CAPTAG(useLabel(FN_Foreign_46C_46String_46castCCharToChar),1)
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46Word8)
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, useLabel(CF_Prelude_46Integral_46NHC_46FFI_46CChar)
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46Word8)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Char_46chr))
, bytes2word(1,0,0,1)
, useLabel(CT_v655)
,	/* FN_Foreign_46C_46String_46cCharsToChars: (byte 0) */
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 3480001
, useLabel(ST_v654)
,	/* CT_v655: (byte 0) */
  HW(2,1)
, 0
,	/* F0_Foreign_46C_46String_46cCharsToChars: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46C_46String_46cCharsToChars),1)
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_Foreign_46C_46String_46castCCharToChar)
, bytes2word(0,0,0,0)
, useLabel(CT_v657)
,	/* FN_Foreign_46C_46String_46nUL: (byte 0) */
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CADR_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
, 3360001
, useLabel(ST_v656)
,	/* CT_v657: (byte 0) */
  HW(1,0)
, 0
,	/* CF_Foreign_46C_46String_46nUL: (byte 0) */
  VAPTAG(useLabel(FN_Foreign_46C_46String_46nUL))
, VAPTAG(useLabel(FN_Prelude_46Num_46NHC_46FFI_46CChar_46fromInteger))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v659)
,};
Node FN_Foreign_46C_46String_46withCAStringLen[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 3150001
, useLabel(ST_v658)
,	/* CT_v659: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Foreign_46C_46String_46withCAStringLen[] = {
  CAPTAG(useLabel(FN_Foreign_46C_46String_46withCAStringLen),2)
, VAPTAG(useLabel(FN_Foreign_46C_46String_46charsToCChars))
, CAPTAG(useLabel(FN_Foreign_46Marshal_46Array_46withArrayLen),1)
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CChar)
, CAPTAG(useLabel(FN_LAMBDA603),2)
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v661)
,	/* FN_LAMBDA603: (byte 0) */
  useLabel(TMSUB_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(3,2,PUSH_P1,0)
, bytes2word(PUSH_ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 3170038
, useLabel(ST_v660)
,	/* CT_v661: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA603: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA603),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v663)
,};
Node FN_Foreign_46C_46String_46withCAString[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,7,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 2950001
, useLabel(ST_v662)
,	/* CT_v663: (byte 0) */
  HW(5,0)
, 0
,};
Node CF_Foreign_46C_46String_46withCAString[] = {
  VAPTAG(useLabel(FN_Foreign_46C_46String_46withCAString))
, CAPTAG(useLabel(FN_Foreign_46Marshal_46Array_46withArray0),1)
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CChar)
, useLabel(CF_Foreign_46C_46String_46nUL)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Foreign_46C_46String_46charsToCChars)
, bytes2word(1,0,0,1)
, useLabel(CT_v665)
,};
Node FN_Foreign_46C_46String_46newCAStringLen[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 2710001
, useLabel(ST_v664)
,	/* CT_v665: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Foreign_46C_46String_46newCAStringLen[] = {
  CAPTAG(useLabel(FN_Foreign_46C_46String_46newCAStringLen),1)
, VAPTAG(useLabel(FN_Foreign_46C_46String_46charsToCChars))
, VAPTAG(useLabel(FN_Foreign_46C_46String_46newArrayLen))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CChar)
, bytes2word(0,0,0,0)
, useLabel(CT_v667)
,};
Node FN_Foreign_46C_46String_46newCAString[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,7,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 2510001
, useLabel(ST_v666)
,	/* CT_v667: (byte 0) */
  HW(5,0)
, 0
,};
Node CF_Foreign_46C_46String_46newCAString[] = {
  VAPTAG(useLabel(FN_Foreign_46C_46String_46newCAString))
, CAPTAG(useLabel(FN_Foreign_46Marshal_46Array_46newArray0),1)
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CChar)
, useLabel(CF_Foreign_46C_46String_46nUL)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Foreign_46C_46String_46charsToCChars)
, bytes2word(1,0,0,1)
, useLabel(CT_v672)
,};
Node FN_Foreign_46C_46String_46peekCAStringLen[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,HEAP_P1,0,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 2240001
, useLabel(ST_v670)
,	/* CT_v672: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Foreign_46C_46String_46peekCAStringLen[] = {
  CAPTAG(useLabel(FN_Foreign_46C_46String_46peekCAStringLen),1)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Array_46peekArray))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CChar)
, CAPTAG(useLabel(FN_LAMBDA604),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v674)
,	/* FN_LAMBDA604: (byte 0) */
  useLabel(TMSUB_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 2250009
, useLabel(ST_v673)
,	/* CT_v674: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA604: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA604),1)
, VAPTAG(useLabel(FN_Foreign_46C_46String_46cCharsToChars))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v676)
,};
Node FN_Foreign_46C_46String_46peekCAString[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 2060001
, useLabel(ST_v675)
,	/* CT_v676: (byte 0) */
  HW(6,1)
, 0
,};
Node F0_Foreign_46C_46String_46peekCAString[] = {
  CAPTAG(useLabel(FN_Foreign_46C_46String_46peekCAString),1)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Array_46peekArray0))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CChar)
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46CChar)
, useLabel(CF_Foreign_46C_46String_46nUL)
, CAPTAG(useLabel(FN_LAMBDA605),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v678)
,	/* FN_LAMBDA605: (byte 0) */
  useLabel(TMSUB_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 2070009
, useLabel(ST_v677)
,	/* CT_v678: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA605: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA605),1)
, VAPTAG(useLabel(FN_Foreign_46C_46String_46cCharsToChars))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v680)
,};
Node FN_Foreign_46C_46String_46charIsRepresentable[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,HEAP_CADR_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 256
, 1850001
, useLabel(ST_v679)
,	/* CT_v680: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Foreign_46C_46String_46charIsRepresentable[] = {
  CAPTAG(useLabel(FN_Foreign_46C_46String_46charIsRepresentable),1)
, VAPTAG(useLabel(FN_Char_46ord))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_60))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v682)
,};
Node FN_Foreign_46C_46String_46withCStringLen[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1780001
, useLabel(ST_v681)
,	/* CT_v682: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Foreign_46C_46String_46withCStringLen[] = {
  VAPTAG(useLabel(FN_Foreign_46C_46String_46withCStringLen))
, useLabel(F0_Foreign_46C_46String_46withCAStringLen)
, bytes2word(0,0,0,0)
, useLabel(CT_v684)
,};
Node FN_Foreign_46C_46String_46withCString[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1680001
, useLabel(ST_v683)
,	/* CT_v684: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Foreign_46C_46String_46withCString[] = {
  VAPTAG(useLabel(FN_Foreign_46C_46String_46withCString))
, useLabel(CF_Foreign_46C_46String_46withCAString)
, bytes2word(0,0,0,0)
, useLabel(CT_v686)
,};
Node FN_Foreign_46C_46String_46newCStringLen[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1560001
, useLabel(ST_v685)
,	/* CT_v686: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Foreign_46C_46String_46newCStringLen[] = {
  VAPTAG(useLabel(FN_Foreign_46C_46String_46newCStringLen))
, useLabel(F0_Foreign_46C_46String_46newCAStringLen)
, bytes2word(0,0,0,0)
, useLabel(CT_v688)
,};
Node FN_Foreign_46C_46String_46newCString[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1460001
, useLabel(ST_v687)
,	/* CT_v688: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Foreign_46C_46String_46newCString[] = {
  VAPTAG(useLabel(FN_Foreign_46C_46String_46newCString))
, useLabel(CF_Foreign_46C_46String_46newCAString)
, bytes2word(0,0,0,0)
, useLabel(CT_v690)
,};
Node FN_Foreign_46C_46String_46peekCStringLen[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1350001
, useLabel(ST_v689)
,	/* CT_v690: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Foreign_46C_46String_46peekCStringLen[] = {
  VAPTAG(useLabel(FN_Foreign_46C_46String_46peekCStringLen))
, useLabel(F0_Foreign_46C_46String_46peekCAStringLen)
, bytes2word(0,0,0,0)
, useLabel(CT_v692)
,};
Node FN_Foreign_46C_46String_46peekCString[] = {
  useLabel(TM_Foreign_46C_46String)
, bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1300001
, useLabel(ST_v691)
,	/* CT_v692: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Foreign_46C_46String_46peekCString[] = {
  VAPTAG(useLabel(FN_Foreign_46C_46String_46peekCString))
, useLabel(F0_Foreign_46C_46String_46peekCAString)
,};
Node PM_Foreign_46C_46String[] = {
 	/* ST_v612: (byte 0) */
  bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(67,46,83,116)
, bytes2word(114,105,110,103)
,	/* ST_v654: (byte 1) */
  bytes2word(0,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(46,67,46,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,99,67)
, bytes2word(104,97,114,115)
, bytes2word(84,111,67,104)
,	/* ST_v619: (byte 4) */
  bytes2word(97,114,115,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(67,46,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,99,87,99)
, bytes2word(104,97,114,115)
, bytes2word(84,111,67,104)
,	/* ST_v652: (byte 4) */
  bytes2word(97,114,115,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(67,46,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,99,97,115)
, bytes2word(116,67,67,104)
, bytes2word(97,114,84,111)
, bytes2word(67,104,97,114)
,	/* ST_v615: (byte 1) */
  bytes2word(0,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(46,67,46,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,99,97)
, bytes2word(115,116,67,87)
, bytes2word(99,104,97,114)
, bytes2word(84,111,67,104)
,	/* ST_v648: (byte 3) */
  bytes2word(97,114,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,67)
, bytes2word(46,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(99,97,115,116)
, bytes2word(67,104,97,114)
, bytes2word(84,111,67,67)
,	/* ST_v613: (byte 4) */
  bytes2word(104,97,114,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(67,46,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,99,97,115)
, bytes2word(116,67,104,97)
, bytes2word(114,84,111,67)
, bytes2word(87,99,104,97)
,	/* ST_v679: (byte 2) */
  bytes2word(114,0,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,46,67,46)
, bytes2word(83,116,114,105)
, bytes2word(110,103,46,99)
, bytes2word(104,97,114,73)
, bytes2word(115,82,101,112)
, bytes2word(114,101,115,101)
, bytes2word(110,116,97,98)
,	/* ST_v650: (byte 3) */
  bytes2word(108,101,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,67)
, bytes2word(46,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(99,104,97,114)
, bytes2word(115,84,111,67)
, bytes2word(67,104,97,114)
,	/* ST_v617: (byte 2) */
  bytes2word(115,0,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,46,67,46)
, bytes2word(83,116,114,105)
, bytes2word(110,103,46,99)
, bytes2word(104,97,114,115)
, bytes2word(84,111,67,87)
, bytes2word(99,104,97,114)
,	/* ST_v656: (byte 2) */
  bytes2word(115,0,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,46,67,46)
, bytes2word(83,116,114,105)
, bytes2word(110,103,46,110)
,	/* ST_v629: (byte 3) */
  bytes2word(85,76,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,67)
, bytes2word(46,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(110,101,119,65)
, bytes2word(114,114,97,121)
,	/* ST_v631: (byte 4) */
  bytes2word(76,101,110,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(67,46,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,110,101,119)
, bytes2word(65,114,114,97)
, bytes2word(121,76,101,110)
, bytes2word(58,51,52,49)
, bytes2word(58,56,45,51)
, bytes2word(52,49,58,49)
,	/* ST_v666: (byte 2) */
  bytes2word(56,0,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,46,67,46)
, bytes2word(83,116,114,105)
, bytes2word(110,103,46,110)
, bytes2word(101,119,67,65)
, bytes2word(83,116,114,105)
,	/* ST_v664: (byte 3) */
  bytes2word(110,103,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,67)
, bytes2word(46,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(110,101,119,67)
, bytes2word(65,83,116,114)
, bytes2word(105,110,103,76)
,	/* ST_v687: (byte 3) */
  bytes2word(101,110,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,67)
, bytes2word(46,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(110,101,119,67)
, bytes2word(83,116,114,105)
,	/* ST_v685: (byte 3) */
  bytes2word(110,103,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,67)
, bytes2word(46,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(110,101,119,67)
, bytes2word(83,116,114,105)
, bytes2word(110,103,76,101)
,	/* ST_v635: (byte 2) */
  bytes2word(110,0,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,46,67,46)
, bytes2word(83,116,114,105)
, bytes2word(110,103,46,110)
, bytes2word(101,119,67,87)
, bytes2word(83,116,114,105)
,	/* ST_v633: (byte 3) */
  bytes2word(110,103,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,67)
, bytes2word(46,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(110,101,119,67)
, bytes2word(87,83,116,114)
, bytes2word(105,110,103,76)
,	/* ST_v675: (byte 3) */
  bytes2word(101,110,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,67)
, bytes2word(46,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(112,101,101,107)
, bytes2word(67,65,83,116)
, bytes2word(114,105,110,103)
,	/* ST_v677: (byte 1) */
  bytes2word(0,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(46,67,46,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,112,101)
, bytes2word(101,107,67,65)
, bytes2word(83,116,114,105)
, bytes2word(110,103,58,50)
, bytes2word(48,55,58,57)
, bytes2word(45,50,48,55)
,	/* ST_v670: (byte 4) */
  bytes2word(58,50,53,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(67,46,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,112,101,101)
, bytes2word(107,67,65,83)
, bytes2word(116,114,105,110)
, bytes2word(103,76,101,110)
,	/* ST_v673: (byte 1) */
  bytes2word(0,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(46,67,46,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,112,101)
, bytes2word(101,107,67,65)
, bytes2word(83,116,114,105)
, bytes2word(110,103,76,101)
, bytes2word(110,58,50,50)
, bytes2word(53,58,57,45)
, bytes2word(50,50,53,58)
,	/* ST_v691: (byte 3) */
  bytes2word(50,52,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,67)
, bytes2word(46,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(112,101,101,107)
, bytes2word(67,83,116,114)
,	/* ST_v689: (byte 4) */
  bytes2word(105,110,103,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(67,46,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,112,101,101)
, bytes2word(107,67,83,116)
, bytes2word(114,105,110,103)
,	/* ST_v644: (byte 4) */
  bytes2word(76,101,110,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(67,46,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,112,101,101)
, bytes2word(107,67,87,83)
, bytes2word(116,114,105,110)
,	/* ST_v646: (byte 2) */
  bytes2word(103,0,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,46,67,46)
, bytes2word(83,116,114,105)
, bytes2word(110,103,46,112)
, bytes2word(101,101,107,67)
, bytes2word(87,83,116,114)
, bytes2word(105,110,103,58)
, bytes2word(51,55,53,58)
, bytes2word(57,45,51,55)
, bytes2word(53,58,50,54)
,	/* ST_v639: (byte 1) */
  bytes2word(0,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(46,67,46,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,112,101)
, bytes2word(101,107,67,87)
, bytes2word(83,116,114,105)
, bytes2word(110,103,76,101)
,	/* ST_v642: (byte 2) */
  bytes2word(110,0,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,46,67,46)
, bytes2word(83,116,114,105)
, bytes2word(110,103,46,112)
, bytes2word(101,101,107,67)
, bytes2word(87,83,116,114)
, bytes2word(105,110,103,76)
, bytes2word(101,110,58,51)
, bytes2word(56,50,58,57)
, bytes2word(45,51,56,50)
,	/* ST_v621: (byte 4) */
  bytes2word(58,50,52,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(67,46,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,119,78,85)
,	/* ST_v662: (byte 2) */
  bytes2word(76,0,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,46,67,46)
, bytes2word(83,116,114,105)
, bytes2word(110,103,46,119)
, bytes2word(105,116,104,67)
, bytes2word(65,83,116,114)
,	/* ST_v658: (byte 4) */
  bytes2word(105,110,103,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(67,46,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,119,105,116)
, bytes2word(104,67,65,83)
, bytes2word(116,114,105,110)
, bytes2word(103,76,101,110)
,	/* ST_v660: (byte 1) */
  bytes2word(0,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(46,67,46,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,119,105)
, bytes2word(116,104,67,65)
, bytes2word(83,116,114,105)
, bytes2word(110,103,76,101)
, bytes2word(110,58,51,49)
, bytes2word(55,58,51,56)
, bytes2word(45,51,49,55)
,	/* ST_v683: (byte 4) */
  bytes2word(58,54,50,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(67,46,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,119,105,116)
, bytes2word(104,67,83,116)
, bytes2word(114,105,110,103)
,	/* ST_v681: (byte 1) */
  bytes2word(0,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(46,67,46,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,119,105)
, bytes2word(116,104,67,83)
, bytes2word(116,114,105,110)
, bytes2word(103,76,101,110)
,	/* ST_v627: (byte 1) */
  bytes2word(0,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(46,67,46,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,119,105)
, bytes2word(116,104,67,87)
, bytes2word(83,116,114,105)
,	/* ST_v623: (byte 3) */
  bytes2word(110,103,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,67)
, bytes2word(46,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(119,105,116,104)
, bytes2word(67,87,83,116)
, bytes2word(114,105,110,103)
,	/* ST_v625: (byte 4) */
  bytes2word(76,101,110,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(67,46,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,119,105,116)
, bytes2word(104,67,87,83)
, bytes2word(116,114,105,110)
, bytes2word(103,76,101,110)
, bytes2word(58,52,50,57)
, bytes2word(58,51,57,45)
, bytes2word(52,50,57,58)
, bytes2word(54,51,0,0)
,};
