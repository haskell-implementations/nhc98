#include "newmacros.h"
#include "runtime.h"

#define CT_v362	((void*)startLabel+24)
#define CT_v363	((void*)startLabel+64)
#define FN_NHC_46FFI_46charsToCChars	((void*)startLabel+88)
#define CT_v364	((void*)startLabel+100)
#define CF_NHC_46FFI_46charsToCChars	((void*)startLabel+108)
#define FN_NHC_46FFI_46cCharsToChars	((void*)startLabel+128)
#define CT_v365	((void*)startLabel+140)
#define CF_NHC_46FFI_46cCharsToChars	((void*)startLabel+148)
#define FN_NHC_46FFI_46pairLength	((void*)startLabel+168)
#define CT_v366	((void*)startLabel+188)
#define CF_NHC_46FFI_46pairLength	((void*)startLabel+196)
#define FN_LAMBDA357	((void*)startLabel+228)
#define CT_v367	((void*)startLabel+252)
#define F0_LAMBDA357	((void*)startLabel+260)
#define FN_NHC_46FFI_46nUL	((void*)startLabel+272)
#define CT_v368	((void*)startLabel+284)
#define CF_NHC_46FFI_46nUL	((void*)startLabel+292)
#define CT_v369	((void*)startLabel+352)
#define CT_v370	((void*)startLabel+420)
#define CT_v371	((void*)startLabel+492)
#define FN_LAMBDA358	((void*)startLabel+540)
#define CT_v372	((void*)startLabel+560)
#define F0_LAMBDA358	((void*)startLabel+568)
#define CT_v373	((void*)startLabel+612)
#define CT_v377	((void*)startLabel+680)
#define FN_LAMBDA359	((void*)startLabel+716)
#define CT_v378	((void*)startLabel+736)
#define F0_LAMBDA359	((void*)startLabel+744)
#define CT_v379	((void*)startLabel+792)
#define FN_LAMBDA360	((void*)startLabel+836)
#define CT_v380	((void*)startLabel+856)
#define F0_LAMBDA360	((void*)startLabel+864)
extern Node FN_Prelude_46Enum_46Prelude_46Char_46fromEnum[];
extern Node FN_Prelude_46Enum_46NHC_46FFI_46CChar_46toEnum[];
extern Node FN_Prelude_46Enum_46NHC_46FFI_46CChar_46fromEnum[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46flip[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46length[];
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
, useLabel(CT_v362)
,};
Node FN_NHC_46FFI_46castCharToCChar[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v362: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_NHC_46FFI_46castCharToCChar[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46castCharToCChar),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46CChar_46toEnum))
, bytes2word(1,0,0,1)
, useLabel(CT_v363)
,};
Node FN_NHC_46FFI_46castCCharToChar[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v363: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46FFI_46castCCharToChar[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46castCCharToChar),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46CChar_46fromEnum))
, bytes2word(0,0,0,0)
, useLabel(CT_v364)
,	/* FN_NHC_46FFI_46charsToCChars: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v364: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46FFI_46charsToCChars: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46FFI_46charsToCChars))
, CAPTAG(useLabel(FN_Prelude_46map),1)
, useLabel(F0_NHC_46FFI_46castCharToCChar)
, bytes2word(0,0,0,0)
, useLabel(CT_v365)
,	/* FN_NHC_46FFI_46cCharsToChars: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v365: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46FFI_46cCharsToChars: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46FFI_46cCharsToChars))
, CAPTAG(useLabel(FN_Prelude_46map),1)
, useLabel(F0_NHC_46FFI_46castCCharToChar)
, bytes2word(0,0,0,0)
, useLabel(CT_v366)
,	/* FN_NHC_46FFI_46pairLength: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v366: (byte 0) */
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
, useLabel(CT_v367)
,	/* FN_LAMBDA357: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v367: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA357: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA357),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v368)
,	/* FN_NHC_46FFI_46nUL: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_INT_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v368: (byte 0) */
  HW(1,0)
, 0
,	/* CF_NHC_46FFI_46nUL: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46FFI_46nUL))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46FFI_46CChar_46toEnum))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v369)
,};
Node FN_NHC_46FFI_46withCStringLen[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v369: (byte 0) */
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
, useLabel(CT_v370)
,};
Node FN_NHC_46FFI_46withCString[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,7,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v370: (byte 0) */
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
, useLabel(CT_v371)
,};
Node FN_NHC_46FFI_46newCStringLen[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v371: (byte 0) */
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
, useLabel(CT_v372)
,	/* FN_LAMBDA358: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v372: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA358: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA358),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46pairLength))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v373)
,};
Node FN_NHC_46FFI_46newCString[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,7,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v373: (byte 0) */
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
, useLabel(CT_v377)
,};
Node FN_NHC_46FFI_46peekCStringLen[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,HEAP_P1,0,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v377: (byte 0) */
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
, useLabel(CT_v378)
,	/* FN_LAMBDA359: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v378: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA359: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA359),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46cCharsToChars))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v379)
,};
Node FN_NHC_46FFI_46peekCString[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v379: (byte 0) */
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
, useLabel(CT_v380)
,	/* FN_LAMBDA360: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v380: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA360: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA360),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46cCharsToChars))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};
