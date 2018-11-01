#include "newmacros.h"
#include "runtime.h"

#define CT_v253	((void*)startLabel+44)
#define FN_LAMBDA247	((void*)startLabel+72)
#define CT_v256	((void*)startLabel+104)
#define CF_LAMBDA247	((void*)startLabel+112)
#define CT_v258	((void*)startLabel+164)
#define FN_LAMBDA248	((void*)startLabel+192)
#define CT_v261	((void*)startLabel+224)
#define CF_LAMBDA248	((void*)startLabel+232)
#define CT_v263	((void*)startLabel+280)
#define FN_LAMBDA249	((void*)startLabel+308)
#define CT_v266	((void*)startLabel+340)
#define CF_LAMBDA249	((void*)startLabel+348)
#define CT_v268	((void*)startLabel+400)
#define FN_LAMBDA250	((void*)startLabel+428)
#define CT_v271	((void*)startLabel+460)
#define CF_LAMBDA250	((void*)startLabel+468)
#define CT_v273	((void*)startLabel+504)
#define CT_v275	((void*)startLabel+548)
#define CT_v277	((void*)startLabel+592)
#define CT_v279	((void*)startLabel+636)
#define ST_v262	((void*)startLabel+648)
#define ST_v264	((void*)startLabel+665)
#define ST_v257	((void*)startLabel+688)
#define ST_v259	((void*)startLabel+706)
#define ST_v267	((void*)startLabel+730)
#define ST_v269	((void*)startLabel+747)
#define ST_v252	((void*)startLabel+770)
#define ST_v254	((void*)startLabel+790)
#define ST_v276	((void*)startLabel+816)
#define ST_v272	((void*)startLabel+831)
#define ST_v278	((void*)startLabel+847)
#define ST_v274	((void*)startLabel+862)
#define ST_v265	((void*)startLabel+880)
#define ST_v260	((void*)startLabel+923)
#define ST_v270	((void*)startLabel+967)
#define ST_v255	((void*)startLabel+1010)
extern Node TM_NHC_46Binary[];
extern Node FN_NHC_46Internal_46_95noMethodError[];
extern Node TMSUB_NHC_46Binary[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v253)
,};
Node FN_NHC_46Binary_46_95_46sizeOf[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(ST_v252)
,	/* CT_v253: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46Binary_46_95_46sizeOf[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46_95_46sizeOf),2)
, VAPTAG(useLabel(FN_LAMBDA247))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v256)
,	/* FN_LAMBDA247: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v255)
, 0
, useLabel(ST_v254)
,	/* CT_v256: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA247: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA247))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v258)
,};
Node FN_NHC_46Binary_46_95_46getF[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2)
, bytes2word(HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,ZAP_ARG_I2,ZAP_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(ST_v257)
,	/* CT_v258: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_NHC_46Binary_46_95_46getF[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46_95_46getF),3)
, VAPTAG(useLabel(FN_LAMBDA248))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v261)
,	/* FN_LAMBDA248: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v260)
, 0
, useLabel(ST_v259)
,	/* CT_v261: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA248: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA248))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v263)
,};
Node FN_NHC_46Binary_46_95_46get[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(ST_v262)
,	/* CT_v263: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46Binary_46_95_46get[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46_95_46get),2)
, VAPTAG(useLabel(FN_LAMBDA249))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v266)
,	/* FN_LAMBDA249: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v265)
, 0
, useLabel(ST_v264)
,	/* CT_v266: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA249: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA249))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v268)
,};
Node FN_NHC_46Binary_46_95_46put[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2)
, bytes2word(HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,ZAP_ARG_I2,ZAP_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(ST_v267)
,	/* CT_v268: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_NHC_46Binary_46_95_46put[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46_95_46put),3)
, VAPTAG(useLabel(FN_LAMBDA250))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v271)
,	/* FN_LAMBDA250: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v270)
, 0
, useLabel(ST_v269)
,	/* CT_v271: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA250: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA250))
, bytes2word(1,0,0,1)
, useLabel(CT_v273)
,};
Node FN_NHC_46Binary_46getF[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80007
, useLabel(ST_v272)
,	/* CT_v273: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46Binary_46getF[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46getF),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v275)
,};
Node FN_NHC_46Binary_46sizeOf[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80007
, useLabel(ST_v274)
,	/* CT_v275: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46Binary_46sizeOf[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46sizeOf),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v277)
,};
Node FN_NHC_46Binary_46get[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80007
, useLabel(ST_v276)
,	/* CT_v277: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46Binary_46get[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46get),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v279)
,};
Node FN_NHC_46Binary_46put[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80007
, useLabel(ST_v278)
,	/* CT_v279: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46Binary_46put[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46put),1)
,	/* ST_v262: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,95)
, bytes2word(46,103,101,116)
,	/* ST_v264: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(95,46,103,101)
, bytes2word(116,58,110,111)
,	/* ST_v257: (byte 4) */
  bytes2word(112,111,115,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,95)
, bytes2word(46,103,101,116)
,	/* ST_v259: (byte 2) */
  bytes2word(70,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,95,46,103)
, bytes2word(101,116,70,58)
, bytes2word(110,111,112,111)
,	/* ST_v267: (byte 2) */
  bytes2word(115,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,95,46,112)
,	/* ST_v269: (byte 3) */
  bytes2word(117,116,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,95,46)
, bytes2word(112,117,116,58)
, bytes2word(110,111,112,111)
,	/* ST_v252: (byte 2) */
  bytes2word(115,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,95,46,115)
, bytes2word(105,122,101,79)
,	/* ST_v254: (byte 2) */
  bytes2word(102,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,95,46,115)
, bytes2word(105,122,101,79)
, bytes2word(102,58,110,111)
,	/* ST_v276: (byte 4) */
  bytes2word(112,111,115,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,103)
,	/* ST_v272: (byte 3) */
  bytes2word(101,116,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,103,101)
,	/* ST_v278: (byte 3) */
  bytes2word(116,70,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,112,117)
,	/* ST_v274: (byte 2) */
  bytes2word(116,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,115,105,122)
,	/* ST_v265: (byte 4) */
  bytes2word(101,79,102,0)
, bytes2word(78,111,32,100)
, bytes2word(101,102,97,117)
, bytes2word(108,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(105,116,105,111)
, bytes2word(110,32,102,111)
, bytes2word(114,32,99,108)
, bytes2word(97,115,115,32)
, bytes2word(109,101,116,104)
, bytes2word(111,100,32,103)
,	/* ST_v260: (byte 3) */
  bytes2word(101,116,0,78)
, bytes2word(111,32,100,101)
, bytes2word(102,97,117,108)
, bytes2word(116,32,100,101)
, bytes2word(102,105,110,105)
, bytes2word(116,105,111,110)
, bytes2word(32,102,111,114)
, bytes2word(32,99,108,97)
, bytes2word(115,115,32,109)
, bytes2word(101,116,104,111)
, bytes2word(100,32,103,101)
,	/* ST_v270: (byte 3) */
  bytes2word(116,70,0,78)
, bytes2word(111,32,100,101)
, bytes2word(102,97,117,108)
, bytes2word(116,32,100,101)
, bytes2word(102,105,110,105)
, bytes2word(116,105,111,110)
, bytes2word(32,102,111,114)
, bytes2word(32,99,108,97)
, bytes2word(115,115,32,109)
, bytes2word(101,116,104,111)
, bytes2word(100,32,112,117)
,	/* ST_v255: (byte 2) */
  bytes2word(116,0,78,111)
, bytes2word(32,100,101,102)
, bytes2word(97,117,108,116)
, bytes2word(32,100,101,102)
, bytes2word(105,110,105,116)
, bytes2word(105,111,110,32)
, bytes2word(102,111,114,32)
, bytes2word(99,108,97,115)
, bytes2word(115,32,109,101)
, bytes2word(116,104,111,100)
, bytes2word(32,115,105,122)
, bytes2word(101,79,102,0)
,};
