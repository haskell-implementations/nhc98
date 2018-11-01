#include "newmacros.h"
#include "runtime.h"

#define CT_v174	((void*)startLabel+64)
#define ST_v172	((void*)startLabel+96)
#define PS_v173	((void*)startLabel+120)
#define PS_v171	((void*)startLabel+132)
extern Node FN_Directory_46renameDirectory[];
extern Node PM_Directory[];
extern Node PC_Directory_46renameDirectory[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v174)
,};
Node FN_Directory_46renameFile[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v173)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v172)
,	/* CT_v174: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Directory_46renameFile[] = {
  CAPTAG(useLabel(FN_Directory_46renameFile),2)
, useLabel(PS_v171)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Directory_46renameDirectory))
,};
Node PP_Directory_46renameFile[] = {
 };
Node PC_Directory_46renameFile[] = {
 	/* ST_v172: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,114,101)
, bytes2word(110,97,109,101)
, bytes2word(70,105,108,101)
, bytes2word(0,0,0,0)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46renameFile)
, useLabel(PC_Directory_46renameDirectory)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46renameFile)
, useLabel(PC_Directory_46renameFile)
,};
