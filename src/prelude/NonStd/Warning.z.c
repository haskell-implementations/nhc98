#include "newmacros.h"
#include "runtime.h"

#define CT_v174	((void*)startLabel+40)
#define FN_LAMBDA171	((void*)startLabel+72)
#define CT_v177	((void*)startLabel+104)
#define CF_LAMBDA171	((void*)startLabel+112)
#define ST_v176	((void*)startLabel+116)
#define ST_v172	((void*)startLabel+128)
#define ST_v173	((void*)startLabel+136)
#define ST_v175	((void*)startLabel+152)
extern Node TM_Warning[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NonStdTrace_46trace[];
extern Node TMSUB_Warning[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v174)
,};
Node FN_Warning_46warning[] = {
  useLabel(TM_Warning)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v173)
,	/* CT_v174: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Warning_46warning[] = {
  CAPTAG(useLabel(FN_Warning_46warning),1)
, VAPTAG(useLabel(FN_LAMBDA171))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, CAPTAG(useLabel(FN_NonStdTrace_46trace),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v177)
,	/* FN_LAMBDA171: (byte 0) */
  useLabel(TMSUB_Warning)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v176)
, 60020
, useLabel(ST_v175)
,	/* CT_v177: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA171: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA171))
,	/* ST_v176: (byte 0) */
  bytes2word(87,65,82,78)
, bytes2word(73,78,71,33)
, bytes2word(33,32,0,0)
,};
Node PM_Warning[] = {
 	/* ST_v172: (byte 0) */
  bytes2word(87,97,114,110)
,	/* ST_v173: (byte 4) */
  bytes2word(105,110,103,0)
, bytes2word(87,97,114,110)
, bytes2word(105,110,103,46)
, bytes2word(119,97,114,110)
,	/* ST_v175: (byte 4) */
  bytes2word(105,110,103,0)
, bytes2word(87,97,114,110)
, bytes2word(105,110,103,46)
, bytes2word(119,97,114,110)
, bytes2word(105,110,103,58)
, bytes2word(54,58,50,48)
, bytes2word(45,54,58,51)
, bytes2word(49,0,0,0)
,};
