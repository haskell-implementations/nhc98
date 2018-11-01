#include "newmacros.h"
#include "runtime.h"

#define CT_v363	((void*)startLabel+36)
#define CT_v365	((void*)startLabel+88)
#define FN_NHC_46FFI_46charsToCChars	((void*)startLabel+112)
#define CT_v367	((void*)startLabel+136)
#define CF_NHC_46FFI_46charsToCChars	((void*)startLabel+144)
#define FN_NHC_46FFI_46cCharsToChars	((void*)startLabel+164)
#define CT_v369	((void*)startLabel+188)
#define CF_NHC_46FFI_46cCharsToChars	((void*)startLabel+196)
#define FN_NHC_46FFI_46pairLength	((void*)startLabel+216)
#define CT_v371	((void*)startLabel+248)
#define CF_NHC_46FFI_46pairLength	((void*)startLabel+256)
#define FN_LAMBDA357	((void*)startLabel+288)
#define CT_v373	((void*)startLabel+320)
#define F0_LAMBDA357	((void*)startLabel+328)
#define FN_NHC_46FFI_46nUL	((void*)startLabel+340)
#define CT_v375	((void*)startLabel+364)
#define CF_NHC_46FFI_46nUL	((void*)startLabel+372)
#define CT_v377	((void*)startLabel+444)
#define CT_v379	((void*)startLabel+524)
#define CT_v381	((void*)startLabel+608)
#define FN_LAMBDA358	((void*)startLabel+656)
#define CT_v383	((void*)startLabel+688)
#define F0_LAMBDA358	((void*)startLabel+696)
#define CT_v385	((void*)startLabel+752)
#define CT_v390	((void*)startLabel+832)
#define FN_LAMBDA359	((void*)startLabel+868)
#define CT_v392	((void*)startLabel+900)
#define F0_LAMBDA359	((void*)startLabel+908)
#define CT_v394	((void*)startLabel+968)
#define FN_LAMBDA360	((void*)startLabel+1012)
#define CT_v396	((void*)startLabel+1044)
#define F0_LAMBDA360	((void*)startLabel+1052)
#define ST_v368	((void*)startLabel+1068)
#define ST_v364	((void*)startLabel+1090)
#define ST_v362	((void*)startLabel+1114)
#define ST_v366	((void*)startLabel+1138)
#define ST_v374	((void*)startLabel+1160)
#define ST_v384	((void*)startLabel+1172)
#define ST_v380	((void*)startLabel+1191)
#define ST_v382	((void*)startLabel+1213)
#define ST_v370	((void*)startLabel+1247)
#define ST_v372	((void*)startLabel+1266)
#define ST_v393	((void*)startLabel+1297)
#define ST_v395	((void*)startLabel+1317)
#define ST_v388	((void*)startLabel+1349)
#define ST_v391	((void*)startLabel+1372)
#define ST_v378	((void*)startLabel+1407)
#define ST_v376	((void*)startLabel+1427)
extern Node TM_NHC_46FFI[];
extern Node FN_Prelude_46Enum_46Prelude_46Char_46fromEnum[];
extern Node FN_Prelude_46Enum_46NHC_46FFI_46CChar_46toEnum[];
extern Node FN_Prelude_46Enum_46NHC_46FFI_46CChar_46fromEnum[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46flip[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46length[];
extern Node TMSUB_NHC_46FFI[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_NHC_46FFI_46withArray[];
extern Node CF_NHC_46FFI_46Storable_46NHC_46FFI_46CChar[];
extern Node FN_Prelude_46_36[];
extern Node FN_NHC_46FFI_46withArray0[];
extern Node FN_NHC_46FFI_46newArray[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NHC_46FFI_46newArray0[];
extern Node FN_NHC_46FFI_46peekArray[];
extern Node FN_NHC_46FFI_46peekArray0[];
extern Node CF_Prelude_46Eq_46NHC_46FFI_46CChar[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v363)
,};
Node FN_NHC_46FFI_46castCharToCChar[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 1060001
, useLabel(ST_v362)
,	/* CT_v363: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_NHC_46FFI_46castCharToCChar[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46castCharToCChar),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46CChar_46toEnum))
, bytes2word(1,0,0,1)
, useLabel(CT_v365)
,};
Node FN_NHC_46FFI_46castCCharToChar[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 1030001
, useLabel(ST_v364)
,	/* CT_v365: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46FFI_46castCCharToChar[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46castCCharToChar),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46CChar_46fromEnum))
, bytes2word(0,0,0,0)
, useLabel(CT_v367)
,	/* FN_NHC_46FFI_46charsToCChars: (byte 0) */
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 1000001
, useLabel(ST_v366)
,	/* CT_v367: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46FFI_46charsToCChars: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46FFI_46charsToCChars))
, CAPTAG(useLabel(FN_Prelude_46map),1)
, useLabel(F0_NHC_46FFI_46castCharToCChar)
, bytes2word(0,0,0,0)
, useLabel(CT_v369)
,	/* FN_NHC_46FFI_46cCharsToChars: (byte 0) */
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 960001
, useLabel(ST_v368)
,	/* CT_v369: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46FFI_46cCharsToChars: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46FFI_46cCharsToChars))
, CAPTAG(useLabel(FN_Prelude_46map),1)
, useLabel(F0_NHC_46FFI_46castCCharToChar)
, bytes2word(0,0,0,0)
, useLabel(CT_v371)
,	/* FN_NHC_46FFI_46pairLength: (byte 0) */
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 920001
, useLabel(ST_v370)
,	/* CT_v371: (byte 0) */
  HW(4,0)
, 0
,	/* CF_NHC_46FFI_46pairLength: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46FFI_46pairLength))
, CAPTAG(useLabel(FN_LAMBDA357),2)
, CAPTAG(useLabel(FN_Prelude_46flip),2)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46length)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v373)
,	/* FN_LAMBDA357: (byte 0) */
  useLabel(TMSUB_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 920020
, useLabel(ST_v372)
,	/* CT_v373: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA357: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA357),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v375)
,	/* FN_NHC_46FFI_46nUL: (byte 0) */
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_INT_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 880001
, useLabel(ST_v374)
,	/* CT_v375: (byte 0) */
  HW(1,0)
, 0
,	/* CF_NHC_46FFI_46nUL: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46FFI_46nUL))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46CChar_46toEnum))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v377)
,};
Node FN_NHC_46FFI_46withCStringLen[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 810001
, useLabel(ST_v376)
,	/* CT_v377: (byte 0) */
  HW(7,2)
, 0
,};
Node F0_NHC_46FFI_46withCStringLen[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46withCStringLen),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46charsToCChars))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_NHC_46FFI_46withArray),1)
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CChar)
, VAPTAG(useLabel(FN_NHC_46FFI_46pairLength))
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(0,0,0,0)
, useLabel(CT_v379)
,};
Node FN_NHC_46FFI_46withCString[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,7,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 740001
, useLabel(ST_v378)
,	/* CT_v379: (byte 0) */
  HW(5,0)
, 0
,};
Node CF_NHC_46FFI_46withCString[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46withCString))
, CAPTAG(useLabel(FN_NHC_46FFI_46withArray0),2)
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CChar)
, useLabel(CF_NHC_46FFI_46nUL)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(CF_NHC_46FFI_46charsToCChars)
, bytes2word(1,0,0,1)
, useLabel(CT_v381)
,};
Node FN_NHC_46FFI_46newCStringLen[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 660001
, useLabel(ST_v380)
,	/* CT_v381: (byte 0) */
  HW(6,1)
, 0
,};
Node F0_NHC_46FFI_46newCStringLen[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46newCStringLen),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46charsToCChars))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46FFI_46newArray))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CChar)
, CAPTAG(useLabel(FN_LAMBDA358),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v383)
,	/* FN_LAMBDA358: (byte 0) */
  useLabel(TMSUB_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 660030
, useLabel(ST_v382)
,	/* CT_v383: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA358: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA358),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46pairLength))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v385)
,};
Node FN_NHC_46FFI_46newCString[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,7,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 600001
, useLabel(ST_v384)
,	/* CT_v385: (byte 0) */
  HW(5,0)
, 0
,};
Node CF_NHC_46FFI_46newCString[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46newCString))
, CAPTAG(useLabel(FN_NHC_46FFI_46newArray0),1)
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CChar)
, useLabel(CF_NHC_46FFI_46nUL)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(CF_NHC_46FFI_46charsToCChars)
, bytes2word(1,0,0,1)
, useLabel(CT_v390)
,};
Node FN_NHC_46FFI_46peekCStringLen[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,HEAP_P1,0,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 540001
, useLabel(ST_v388)
,	/* CT_v390: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_NHC_46FFI_46peekCStringLen[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46peekCStringLen),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46peekArray))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CChar)
, CAPTAG(useLabel(FN_LAMBDA359),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v392)
,	/* FN_LAMBDA359: (byte 0) */
  useLabel(TMSUB_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 540038
, useLabel(ST_v391)
,	/* CT_v392: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA359: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA359),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46cCharsToChars))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v394)
,};
Node FN_NHC_46FFI_46peekCString[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 500001
, useLabel(ST_v393)
,	/* CT_v394: (byte 0) */
  HW(6,1)
, 0
,};
Node F0_NHC_46FFI_46peekCString[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46peekCString),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46peekArray0))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46CChar)
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46CChar)
, useLabel(CF_NHC_46FFI_46nUL)
, CAPTAG(useLabel(FN_LAMBDA360),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v396)
,	/* FN_LAMBDA360: (byte 0) */
  useLabel(TMSUB_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 500028
, useLabel(ST_v395)
,	/* CT_v396: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA360: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA360),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46cCharsToChars))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* ST_v368: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(99,67,104,97)
, bytes2word(114,115,84,111)
, bytes2word(67,104,97,114)
,	/* ST_v364: (byte 2) */
  bytes2word(115,0,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,99,97)
, bytes2word(115,116,67,67)
, bytes2word(104,97,114,84)
, bytes2word(111,67,104,97)
,	/* ST_v362: (byte 2) */
  bytes2word(114,0,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,99,97)
, bytes2word(115,116,67,104)
, bytes2word(97,114,84,111)
, bytes2word(67,67,104,97)
,	/* ST_v366: (byte 2) */
  bytes2word(114,0,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,99,104)
, bytes2word(97,114,115,84)
, bytes2word(111,67,67,104)
,	/* ST_v374: (byte 4) */
  bytes2word(97,114,115,0)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
,	/* ST_v384: (byte 4) */
  bytes2word(110,85,76,0)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(110,101,119,67)
, bytes2word(83,116,114,105)
,	/* ST_v380: (byte 3) */
  bytes2word(110,103,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,110)
, bytes2word(101,119,67,83)
, bytes2word(116,114,105,110)
, bytes2word(103,76,101,110)
,	/* ST_v382: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,110,101,119)
, bytes2word(67,83,116,114)
, bytes2word(105,110,103,76)
, bytes2word(101,110,58,54)
, bytes2word(54,58,51,48)
, bytes2word(45,54,54,58)
,	/* ST_v370: (byte 3) */
  bytes2word(53,55,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,112)
, bytes2word(97,105,114,76)
, bytes2word(101,110,103,116)
,	/* ST_v372: (byte 2) */
  bytes2word(104,0,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,112,97)
, bytes2word(105,114,76,101)
, bytes2word(110,103,116,104)
, bytes2word(58,57,50,58)
, bytes2word(50,48,45,57)
, bytes2word(50,58,50,50)
,	/* ST_v393: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,112,101,101)
, bytes2word(107,67,83,116)
, bytes2word(114,105,110,103)
,	/* ST_v395: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,112,101,101)
, bytes2word(107,67,83,116)
, bytes2word(114,105,110,103)
, bytes2word(58,53,48,58)
, bytes2word(50,56,45,53)
, bytes2word(48,58,52,52)
,	/* ST_v388: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,112,101,101)
, bytes2word(107,67,83,116)
, bytes2word(114,105,110,103)
,	/* ST_v391: (byte 4) */
  bytes2word(76,101,110,0)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(112,101,101,107)
, bytes2word(67,83,116,114)
, bytes2word(105,110,103,76)
, bytes2word(101,110,58,53)
, bytes2word(52,58,51,56)
, bytes2word(45,53,52,58)
,	/* ST_v378: (byte 3) */
  bytes2word(53,51,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,119)
, bytes2word(105,116,104,67)
, bytes2word(83,116,114,105)
,	/* ST_v376: (byte 3) */
  bytes2word(110,103,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,119)
, bytes2word(105,116,104,67)
, bytes2word(83,116,114,105)
, bytes2word(110,103,76,101)
, bytes2word(110,0,0,0)
,};
