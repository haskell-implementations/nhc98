#include "newmacros.h"
#include "runtime.h"

#define CT_v188	((void*)startLabel+164)
#define FN_LAMBDA180	((void*)startLabel+212)
#define CT_v192	((void*)startLabel+264)
#define F0_LAMBDA180	((void*)startLabel+272)
#define ST_v183	((void*)startLabel+296)
#define PP_LAMBDA180	((void*)startLabel+313)
#define PC_LAMBDA180	((void*)startLabel+313)
#define ST_v190	((void*)startLabel+313)
#define PS_v185	((void*)startLabel+340)
#define PS_v184	((void*)startLabel+352)
#define PS_v182	((void*)startLabel+364)
#define PS_v187	((void*)startLabel+376)
#define PS_v186	((void*)startLabel+388)
#define PS_v191	((void*)startLabel+400)
#define PS_v189	((void*)startLabel+412)
extern Node FN_IO_46openFile[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_IO_46hGetContents[];
extern Node PM_Prelude[];
extern Node PC_IO_46openFile[];
extern Node PC_IO_46ReadMode[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_IO_46hGetContents[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v188)
,};
Node FN_Prelude_46readFile[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,11,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v187)
, 0
, 0
, 0
, 0
, useLabel(PS_v186)
, 0
, 0
, 0
, 0
, useLabel(PS_v185)
, 0
, 0
, 0
, 0
, useLabel(PS_v184)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v183)
,	/* CT_v188: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46readFile[] = {
  CAPTAG(useLabel(FN_Prelude_46readFile),1)
, useLabel(PS_v182)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46openFile))
, CAPTAG(useLabel(FN_LAMBDA180),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v192)
,	/* FN_LAMBDA180: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v191)
, 0
, 0
, 0
, 0
, 70029
, useLabel(ST_v190)
,	/* CT_v192: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA180: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA180),1)
, useLabel(PS_v189)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46hGetContents))
,};
Node PP_Prelude_46readFile[] = {
 };
Node PC_Prelude_46readFile[] = {
 	/* ST_v183: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,97,100)
, bytes2word(70,105,108,101)
,	/* PP_LAMBDA180: (byte 1) */
 	/* PC_LAMBDA180: (byte 1) */
 	/* ST_v190: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,114,101,97)
, bytes2word(100,70,105,108)
, bytes2word(101,58,55,58)
, bytes2word(50,57,45,56)
, bytes2word(58,50,50,0)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46readFile)
, useLabel(PC_IO_46openFile)
,	/* PS_v184: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46readFile)
, useLabel(PC_IO_46ReadMode)
,	/* PS_v182: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46readFile)
, useLabel(PC_Prelude_46readFile)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46readFile)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46readFile)
, useLabel(PC_LAMBDA180)
,	/* PS_v191: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA180)
, useLabel(PC_IO_46hGetContents)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA180)
, useLabel(PC_LAMBDA180)
,};
