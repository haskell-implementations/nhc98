#include "newmacros.h"
#include "runtime.h"

#define CT_v163	((void*)startLabel+60)
#define ST_v161	((void*)startLabel+96)
#define PS_v162	((void*)startLabel+112)
#define PS_v160	((void*)startLabel+124)
extern Node FN_IO_46hPutStr[];
extern Node CF_IO_46stdout[];
extern Node PM_Prelude[];
extern Node PC_IO_46hPutStr[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v163)
,};
Node FN_Prelude_46putStr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v162)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v161)
,	/* CT_v163: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46putStr[] = {
  VAPTAG(useLabel(FN_Prelude_46putStr))
, useLabel(PS_v160)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_IO_46hPutStr),1)
, useLabel(CF_IO_46stdout)
,};
Node PP_Prelude_46putStr[] = {
 };
Node PC_Prelude_46putStr[] = {
 	/* ST_v161: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,117,116,83)
, bytes2word(116,114,0,0)
,	/* PS_v162: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46putStr)
, useLabel(PC_IO_46hPutStr)
,	/* PS_v160: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46putStr)
, useLabel(PC_Prelude_46putStr)
,};
