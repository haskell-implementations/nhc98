#include "newmacros.h"
#include "runtime.h"

#define CT_v163	((void*)startLabel+60)
#define ST_v161	((void*)startLabel+96)
#define PS_v162	((void*)startLabel+116)
#define PS_v160	((void*)startLabel+128)
extern Node FN_IO_46hGetContents[];
extern Node CF_IO_46stdin[];
extern Node PM_Prelude[];
extern Node PC_IO_46hGetContents[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v163)
,};
Node FN_Prelude_46getContents[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
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
Node CF_Prelude_46getContents[] = {
  VAPTAG(useLabel(FN_Prelude_46getContents))
, useLabel(PS_v160)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46hGetContents))
, useLabel(CF_IO_46stdin)
,};
Node PP_Prelude_46getContents[] = {
 };
Node PC_Prelude_46getContents[] = {
 	/* ST_v161: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(103,101,116,67)
, bytes2word(111,110,116,101)
, bytes2word(110,116,115,0)
,	/* PS_v162: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46getContents)
, useLabel(PC_IO_46hGetContents)
,	/* PS_v160: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46getContents)
, useLabel(PC_Prelude_46getContents)
,};
