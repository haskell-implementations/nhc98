#include "newmacros.h"
#include "runtime.h"

#define CT_v244	((void*)startLabel+72)
#define CT_v246	((void*)startLabel+148)
#define CT_v248	((void*)startLabel+204)
#define CT_v250	((void*)startLabel+264)
#define CT_v252	((void*)startLabel+344)
#define ST_v251	((void*)startLabel+372)
#define ST_v247	((void*)startLabel+396)
#define ST_v249	((void*)startLabel+425)
#define ST_v245	((void*)startLabel+458)
#define ST_v243	((void*)startLabel+492)
extern Node TM_Prelude[];
extern Node FN_Prelude_46showChar[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46showsType[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46head[];
extern Node FN_Prelude_46showList[];
extern Node FN_Prelude_46Show_46Prelude_46_91_93[];
extern Node FN_Prelude_46_95_46show[];
extern Node FN_Prelude_46_95_46showList[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v244)
,};
Node FN_Prelude_46Show_46Prelude_46_91_93_46showsType[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CHAR_P1,91,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CHAR_P1,93,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,19,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60003
, useLabel(ST_v243)
,	/* CT_v244: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46_91_93_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46showsType),2)
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46showsType))
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46head)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v246)
,};
Node FN_Prelude_46Show_46Prelude_46_91_93_46showsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,PUSH_ARG_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40003
, useLabel(ST_v245)
,	/* CT_v246: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46_91_93_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46showsPrec),3)
, VAPTAG(useLabel(FN_Prelude_46showList))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v248)
,};
Node FN_Prelude_46Show_46Prelude_46_91_93_46show[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 30022
, useLabel(ST_v247)
,	/* CT_v248: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46_91_93_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46show),2)
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v250)
,};
Node FN_Prelude_46Show_46Prelude_46_91_93_46showList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 30022
, useLabel(ST_v249)
,	/* CT_v250: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46_91_93_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46showList),2)
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, bytes2word(1,0,0,1)
, useLabel(CT_v252)
,};
Node FN_Prelude_46Show_46Prelude_46_91_93[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_P1,4,HEAP_P1,3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
, 30022
, useLabel(ST_v251)
,	/* CT_v252: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46_91_93[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46showsPrec),2)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46showsType),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46showList),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46show),1)
,	/* ST_v251: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
,	/* ST_v247: (byte 4) */
  bytes2word(46,91,93,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,91,93,46)
, bytes2word(115,104,111,119)
,	/* ST_v249: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,91,93)
, bytes2word(46,115,104,111)
, bytes2word(119,76,105,115)
,	/* ST_v245: (byte 2) */
  bytes2word(116,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,91)
, bytes2word(93,46,115,104)
, bytes2word(111,119,115,80)
,	/* ST_v243: (byte 4) */
  bytes2word(114,101,99,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,91,93,46)
, bytes2word(115,104,111,119)
, bytes2word(115,84,121,112)
, bytes2word(101,0,0,0)
,};
