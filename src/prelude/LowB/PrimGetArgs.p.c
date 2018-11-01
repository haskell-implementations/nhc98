#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+32)
#define CT_v183	((void*)startLabel+116)
#define FN_LAMBDA175	((void*)startLabel+156)
#define CT_v189	((void*)startLabel+288)
#define F0_LAMBDA175	((void*)startLabel+296)
#define ST_v178	((void*)startLabel+332)
#define ST_v181	((void*)startLabel+348)
#define PP_LAMBDA175	((void*)startLabel+367)
#define PC_LAMBDA175	((void*)startLabel+367)
#define ST_v185	((void*)startLabel+367)
#define PS_v177	((void*)startLabel+396)
#define PS_v180	((void*)startLabel+408)
#define PS_v182	((void*)startLabel+420)
#define PS_v186	((void*)startLabel+432)
#define PS_v188	((void*)startLabel+444)
#define PS_v187	((void*)startLabel+456)
#define PS_v184	((void*)startLabel+468)
extern void *cGetArgs();
extern Node FN_Prelude_46map[];
extern Node F0_NHC_46PackedString_46unpackPS[];
extern Node FN_Prelude_46seq[];
extern Node PM_System[];
extern Node PC_Prelude_46map[];
extern Node PC_Prelude_46seq[];
extern Node PC_Prelude_46Right[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v179)
,};
Node FN_System_46cGetArgs[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(cGetArgs)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v178)
,	/* CT_v179: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46cGetArgs[] = {
  VAPTAG(useLabel(FN_System_46cGetArgs))
, useLabel(PS_v177)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v183)
,};
Node FN_System_46primGetArgs[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v182)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v181)
,	/* CT_v183: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_System_46primGetArgs[] = {
  VAPTAG(useLabel(FN_System_46primGetArgs))
, useLabel(PS_v180)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA175),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v189)
,	/* FN_LAMBDA175: (byte 0) */
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,9,HEAP_P1,0)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I1,HEAP_OFF_N1,12)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v188)
, 0
, 0
, 0
, 0
, useLabel(PS_v187)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v186)
, 0
, 0
, 0
, 0
, 90008
, useLabel(ST_v185)
,	/* CT_v189: (byte 0) */
  HW(4,1)
, 0
,	/* F0_LAMBDA175: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA175),1)
, useLabel(PS_v184)
, 0
, 0
, 0
, useLabel(CF_System_46cGetArgs)
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_NHC_46PackedString_46unpackPS)
, VAPTAG(useLabel(FN_Prelude_46seq))
,};
Node PP_System_46cGetArgs[] = {
 };
Node PC_System_46cGetArgs[] = {
 	/* ST_v178: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,99)
, bytes2word(71,101,116,65)
, bytes2word(114,103,115,0)
,};
Node PP_System_46primGetArgs[] = {
 };
Node PC_System_46primGetArgs[] = {
 	/* ST_v181: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,112)
, bytes2word(114,105,109,71)
, bytes2word(101,116,65,114)
,	/* PP_LAMBDA175: (byte 3) */
 	/* PC_LAMBDA175: (byte 3) */
 	/* ST_v185: (byte 3) */
  bytes2word(103,115,0,83)
, bytes2word(121,115,116,101)
, bytes2word(109,46,112,114)
, bytes2word(105,109,71,101)
, bytes2word(116,65,114,103)
, bytes2word(115,58,57,58)
, bytes2word(56,45,49,49)
, bytes2word(58,52,55,0)
,	/* PS_v177: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46cGetArgs)
, useLabel(PC_System_46cGetArgs)
,	/* PS_v180: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46primGetArgs)
, useLabel(PC_System_46primGetArgs)
,	/* PS_v182: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46primGetArgs)
, useLabel(PC_LAMBDA175)
,	/* PS_v186: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA175)
, useLabel(PC_Prelude_46map)
,	/* PS_v188: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA175)
, useLabel(PC_Prelude_46seq)
,	/* PS_v187: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA175)
, useLabel(PC_Prelude_46Right)
,	/* PS_v184: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA175)
, useLabel(PC_LAMBDA175)
,};
