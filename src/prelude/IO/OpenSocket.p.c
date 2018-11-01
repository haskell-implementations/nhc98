#include "newmacros.h"
#include "runtime.h"

#define CT_v184	((void*)startLabel+64)
#define ST_v182	((void*)startLabel+96)
#define PS_v183	((void*)startLabel+112)
#define PS_v181	((void*)startLabel+124)
extern Node FN_Prelude_46primOpenSocket[];
extern Node PM_IO[];
extern Node PC_Prelude_46primOpenSocket[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v184)
,};
Node FN_IO_46openSocket[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v183)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v182)
,	/* CT_v184: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_IO_46openSocket[] = {
  CAPTAG(useLabel(FN_IO_46openSocket),3)
, useLabel(PS_v181)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primOpenSocket))
,};
Node PP_IO_46openSocket[] = {
 };
Node PC_IO_46openSocket[] = {
 	/* ST_v182: (byte 0) */
  bytes2word(73,79,46,111)
, bytes2word(112,101,110,83)
, bytes2word(111,99,107,101)
, bytes2word(116,0,0,0)
,	/* PS_v183: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46openSocket)
, useLabel(PC_Prelude_46primOpenSocket)
,	/* PS_v181: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46openSocket)
, useLabel(PC_IO_46openSocket)
,};
