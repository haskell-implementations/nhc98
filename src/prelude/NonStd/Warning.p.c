#include "newmacros.h"
#include "runtime.h"

#define CT_v178	((void*)startLabel+116)
#define FN_LAMBDA171	((void*)startLabel+164)
#define CT_v182	((void*)startLabel+208)
#define CF_LAMBDA171	((void*)startLabel+216)
#define ST_v181	((void*)startLabel+236)
#define ST_v172	((void*)startLabel+248)
#define ST_v174	((void*)startLabel+256)
#define PP_LAMBDA171	((void*)startLabel+272)
#define PC_LAMBDA171	((void*)startLabel+272)
#define ST_v180	((void*)startLabel+272)
#define PS_v177	((void*)startLabel+300)
#define PS_v176	((void*)startLabel+312)
#define PS_v173	((void*)startLabel+324)
#define PS_v175	((void*)startLabel+336)
#define PS_v179	((void*)startLabel+348)
extern Node FN_Prelude_46_43_43[];
extern Node FN_NonStdTrace_46trace[];
extern Node PC_NonStdTrace_46trace[];
extern Node PC_Prelude_46_43_43[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v178)
,};
Node FN_Warning_46warning[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v177)
, 0
, 0
, 0
, 0
, useLabel(PS_v176)
, 0
, 0
, 0
, 0
, useLabel(PS_v175)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v174)
,	/* CT_v178: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Warning_46warning[] = {
  CAPTAG(useLabel(FN_Warning_46warning),1)
, useLabel(PS_v173)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA171))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, CAPTAG(useLabel(FN_NonStdTrace_46trace),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v182)
,	/* FN_LAMBDA171: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v181)
, 60020
, useLabel(ST_v180)
,	/* CT_v182: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA171: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA171))
, useLabel(PS_v179)
, 0
, 0
, 0
,	/* ST_v181: (byte 0) */
  bytes2word(87,65,82,78)
, bytes2word(73,78,71,33)
, bytes2word(33,32,0,0)
,};
Node PM_Warning[] = {
 	/* ST_v172: (byte 0) */
  bytes2word(87,97,114,110)
, bytes2word(105,110,103,0)
,};
Node PP_Warning_46warning[] = {
 };
Node PC_Warning_46warning[] = {
 	/* ST_v174: (byte 0) */
  bytes2word(87,97,114,110)
, bytes2word(105,110,103,46)
, bytes2word(119,97,114,110)
,	/* PP_LAMBDA171: (byte 4) */
 	/* PC_LAMBDA171: (byte 4) */
 	/* ST_v180: (byte 4) */
  bytes2word(105,110,103,0)
, bytes2word(87,97,114,110)
, bytes2word(105,110,103,46)
, bytes2word(119,97,114,110)
, bytes2word(105,110,103,58)
, bytes2word(54,58,50,48)
, bytes2word(45,54,58,51)
, bytes2word(49,0,0,0)
,	/* PS_v177: (byte 0) */
  useLabel(PM_Warning)
, useLabel(PP_Warning_46warning)
, useLabel(PC_NonStdTrace_46trace)
,	/* PS_v176: (byte 0) */
  useLabel(PM_Warning)
, useLabel(PP_Warning_46warning)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Warning)
, useLabel(PP_Warning_46warning)
, useLabel(PC_Warning_46warning)
,	/* PS_v175: (byte 0) */
  useLabel(PM_Warning)
, useLabel(PP_Warning_46warning)
, useLabel(PC_LAMBDA171)
,	/* PS_v179: (byte 0) */
  useLabel(PM_Warning)
, useLabel(PP_LAMBDA171)
, useLabel(PC_LAMBDA171)
,};
