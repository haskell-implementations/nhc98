#include "newmacros.h"
#include "runtime.h"

#define CT_v212	((void*)startLabel+28)
#define CT_v216	((void*)startLabel+116)
#define FN_LAMBDA208	((void*)startLabel+160)
#define CT_v220	((void*)startLabel+212)
#define F0_LAMBDA208	((void*)startLabel+220)
#define FN_IO_46Prelude_46172_46input	((void*)startLabel+260)
#define v221	((void*)startLabel+309)
#define CT_v232	((void*)startLabel+556)
#define F0_IO_46Prelude_46172_46input	((void*)startLabel+564)
#define FN_LAMBDA207	((void*)startLabel+608)
#define CT_v236	((void*)startLabel+652)
#define CF_LAMBDA207	((void*)startLabel+660)
#define ST_v211	((void*)startLabel+680)
#define ST_v214	((void*)startLabel+696)
#define PP_LAMBDA208	((void*)startLabel+708)
#define PC_LAMBDA208	((void*)startLabel+708)
#define ST_v218	((void*)startLabel+708)
#define PP_IO_46Prelude_46172_46input	((void*)startLabel+732)
#define PC_IO_46Prelude_46172_46input	((void*)startLabel+732)
#define ST_v224	((void*)startLabel+732)
#define PP_LAMBDA207	((void*)startLabel+755)
#define PC_LAMBDA207	((void*)startLabel+755)
#define ST_v234	((void*)startLabel+755)
#define ST_v235	((void*)startLabel+779)
#define PS_v213	((void*)startLabel+788)
#define PS_v215	((void*)startLabel+800)
#define PS_v210	((void*)startLabel+812)
#define PS_v227	((void*)startLabel+824)
#define PS_v230	((void*)startLabel+836)
#define PS_v228	((void*)startLabel+848)
#define PS_v231	((void*)startLabel+860)
#define PS_v229	((void*)startLabel+872)
#define PS_v225	((void*)startLabel+884)
#define PS_v223	((void*)startLabel+896)
#define PS_v226	((void*)startLabel+908)
#define PS_v233	((void*)startLabel+920)
#define PS_v219	((void*)startLabel+932)
#define PS_v217	((void*)startLabel+944)
extern Node CF_Prelude_46Enum_46Prelude_46Char[];
extern Node FN_Prelude_46toEnum[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node PM_IO[];
extern Node PC_Prelude_46EOFError[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46Left[];
extern Node PC_Prelude_46Right[];
extern Node PC_Prelude_46toEnum[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v212)
,};
Node FN_IO_46cHGetChar[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(HGETC,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 280001
, useLabel(ST_v211)
,	/* CT_v212: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_IO_46cHGetChar[] = {
  CAPTAG(useLabel(FN_IO_46cHGetChar),1)
, useLabel(PS_v210)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v216)
,};
Node FN_IO_46hGetChar[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v215)
, 0
, 0
, 0
, 0
, 190001
, useLabel(ST_v214)
,	/* CT_v216: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46hGetChar[] = {
  CAPTAG(useLabel(FN_IO_46hGetChar),1)
, useLabel(PS_v213)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA208),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v220)
,	/* FN_LAMBDA208: (byte 0) */
  bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,8)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v219)
, 0
, 0
, 0
, 0
, 190021
, useLabel(ST_v218)
,	/* CT_v220: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA208: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA208),2)
, useLabel(PS_v217)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46Prelude_46172_46input))
, useLabel(CF_Prelude_46Enum_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v232)
,	/* FN_IO_46Prelude_46172_46input: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,PUSH_INT_P1)
, bytes2word(0,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(LT_W,JUMPFALSE,31,0)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
,	/* v221: (byte 1) */
  bytes2word(RETURN,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_N1,47)
, bytes2word(HEAP_CVAL_N1,52,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v231)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v230)
, 0
, 0
, 0
, 0
, useLabel(PS_v229)
, 0
, 0
, 0
, 0
, useLabel(PS_v228)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v227)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v226)
, 0
, 0
, 0
, 0
, useLabel(PS_v225)
, 0
, 0
, 0
, 0
, 210003
, useLabel(ST_v224)
,	/* CT_v232: (byte 0) */
  HW(4,2)
, 0
,	/* F0_IO_46Prelude_46172_46input: (byte 0) */
  CAPTAG(useLabel(FN_IO_46Prelude_46172_46input),2)
, useLabel(PS_v223)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46cHGetChar))
, VAPTAG(useLabel(FN_LAMBDA207))
, VAPTAG(useLabel(FN_Prelude_46toEnum))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,0,0)
, useLabel(CT_v236)
,	/* FN_LAMBDA207: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v235)
, 230033
, useLabel(ST_v234)
,	/* CT_v236: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA207: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA207))
, useLabel(PS_v233)
, 0
, 0
, 0
,};
Node PP_IO_46cHGetChar[] = {
 };
Node PC_IO_46cHGetChar[] = {
 	/* ST_v211: (byte 0) */
  bytes2word(73,79,46,99)
, bytes2word(72,71,101,116)
, bytes2word(67,104,97,114)
, bytes2word(0,0,0,0)
,};
Node PP_IO_46hGetChar[] = {
 };
Node PC_IO_46hGetChar[] = {
 	/* ST_v214: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(71,101,116,67)
,	/* PP_LAMBDA208: (byte 4) */
 	/* PC_LAMBDA208: (byte 4) */
 	/* ST_v218: (byte 4) */
  bytes2word(104,97,114,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,67)
, bytes2word(104,97,114,58)
, bytes2word(49,57,58,50)
, bytes2word(49,45,49,57)
,	/* PP_IO_46Prelude_46172_46input: (byte 4) */
 	/* PC_IO_46Prelude_46172_46input: (byte 4) */
 	/* ST_v224: (byte 4) */
  bytes2word(58,51,55,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,67)
, bytes2word(104,97,114,58)
, bytes2word(50,49,58,51)
, bytes2word(45,50,53,58)
,	/* PP_LAMBDA207: (byte 3) */
 	/* PC_LAMBDA207: (byte 3) */
 	/* ST_v234: (byte 3) */
  bytes2word(51,51,0,73)
, bytes2word(79,46,104,71)
, bytes2word(101,116,67,104)
, bytes2word(97,114,58,50)
, bytes2word(51,58,51,51)
, bytes2word(45,50,51,58)
,	/* ST_v235: (byte 3) */
  bytes2word(52,50,0,104)
, bytes2word(71,101,116,67)
, bytes2word(104,97,114,0)
,	/* PS_v213: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetChar)
, useLabel(PC_IO_46hGetChar)
,	/* PS_v215: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetChar)
, useLabel(PC_LAMBDA208)
,	/* PS_v210: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46cHGetChar)
, useLabel(PC_IO_46cHGetChar)
,	/* PS_v227: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46172_46input)
, useLabel(PC_Prelude_46EOFError)
,	/* PS_v230: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46172_46input)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v228: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46172_46input)
, useLabel(PC_Prelude_46Left)
,	/* PS_v231: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46172_46input)
, useLabel(PC_Prelude_46Right)
,	/* PS_v229: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46172_46input)
, useLabel(PC_Prelude_46toEnum)
,	/* PS_v225: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46172_46input)
, useLabel(PC_IO_46cHGetChar)
,	/* PS_v223: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46172_46input)
, useLabel(PC_IO_46Prelude_46172_46input)
,	/* PS_v226: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46Prelude_46172_46input)
, useLabel(PC_LAMBDA207)
,	/* PS_v233: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA207)
, useLabel(PC_LAMBDA207)
,	/* PS_v219: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA208)
, useLabel(PC_IO_46Prelude_46172_46input)
,	/* PS_v217: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA208)
, useLabel(PC_LAMBDA208)
,};
