#include "newmacros.h"
#include "runtime.h"

#define CT_v252	((void*)startLabel+60)
#define CT_v255	((void*)startLabel+120)
#define CT_v258	((void*)startLabel+176)
#define CT_v261	((void*)startLabel+232)
#define CT_v264	((void*)startLabel+296)
#define CT_v267	((void*)startLabel+360)
#define CT_v270	((void*)startLabel+424)
#define CT_v274	((void*)startLabel+544)
#define ST_v272	((void*)startLabel+608)
#define ST_v263	((void*)startLabel+632)
#define ST_v269	((void*)startLabel+660)
#define ST_v266	((void*)startLabel+688)
#define ST_v257	((void*)startLabel+716)
#define ST_v250	((void*)startLabel+744)
#define ST_v260	((void*)startLabel+780)
#define ST_v254	((void*)startLabel+812)
#define PS_v268	((void*)startLabel+844)
#define PS_v265	((void*)startLabel+856)
#define PS_v262	((void*)startLabel+868)
#define PS_v259	((void*)startLabel+880)
#define PS_v256	((void*)startLabel+892)
#define PS_v253	((void*)startLabel+904)
#define PS_v251	((void*)startLabel+916)
#define PS_v249	((void*)startLabel+928)
#define PS_v271	((void*)startLabel+940)
#define PS_v273	((void*)startLabel+952)
extern Node FN_Prelude_46primIntFromInteger[];
extern Node CF_Prelude_46Eq_46Prelude_46Int[];
extern Node CF_Prelude_46Show_46Prelude_46Int[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46primIntFromInteger[];
extern Node PC_Prelude_469[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v252)
,};
Node FN_Prelude_46Num_46Prelude_46Int_46fromInteger[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v251)
, 0
, 0
, 0
, 0
, 150002
, useLabel(ST_v250)
,	/* CT_v252: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Int_46fromInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46fromInteger),1)
, useLabel(PS_v249)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntFromInteger))
, bytes2word(1,0,0,1)
, useLabel(CT_v255)
,};
Node FN_Prelude_46Num_46Prelude_46Int_46signum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(SIGNUM_W,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 130002
, useLabel(ST_v254)
,	/* CT_v255: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Int_46signum[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46signum),1)
, useLabel(PS_v253)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v258)
,};
Node FN_Prelude_46Num_46Prelude_46Int_46abs[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(ABS_W,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 120002
, useLabel(ST_v257)
,	/* CT_v258: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Int_46abs[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46abs),1)
, useLabel(PS_v256)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v261)
,};
Node FN_Prelude_46Num_46Prelude_46Int_46negate[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(NEG_W,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 110002
, useLabel(ST_v260)
,	/* CT_v261: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Int_46negate[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46negate),1)
, useLabel(PS_v259)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v264)
,};
Node FN_Prelude_46Num_46Prelude_46Int_46_42[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,MUL_W,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 90002
, useLabel(ST_v263)
,	/* CT_v264: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Int_46_42[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_42),2)
, useLabel(PS_v262)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v267)
,};
Node FN_Prelude_46Num_46Prelude_46Int_46_45[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,SUB_W,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80002
, useLabel(ST_v266)
,	/* CT_v267: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Int_46_45[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45),2)
, useLabel(PS_v265)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v270)
,};
Node FN_Prelude_46Num_46Prelude_46Int_46_43[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,ADD_W,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70002
, useLabel(ST_v269)
,	/* CT_v270: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Int_46_43[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43),2)
, useLabel(PS_v268)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v274)
,};
Node FN_Prelude_46Num_46Prelude_46Int[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_P1,15,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v273)
, 0
, 0
, 0
, 0
, CONSTR(0,9,0)
, 0
, 0
, 0
, 0
, 60010
, useLabel(ST_v272)
,	/* CT_v274: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_Prelude_46Num_46Prelude_46Int[] = {
  VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int))
, useLabel(PS_v271)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Eq_46Prelude_46Int)
, useLabel(CF_Prelude_46Show_46Prelude_46Int)
, useLabel(F0_Prelude_46Num_46Prelude_46Int_46_42)
, useLabel(F0_Prelude_46Num_46Prelude_46Int_46_43)
, useLabel(F0_Prelude_46Num_46Prelude_46Int_46_45)
, useLabel(F0_Prelude_46Num_46Prelude_46Int_46negate)
, useLabel(F0_Prelude_46Num_46Prelude_46Int_46signum)
, useLabel(F0_Prelude_46Num_46Prelude_46Int_46fromInteger)
, useLabel(F0_Prelude_46Num_46Prelude_46Int_46abs)
,};
Node PP_Prelude_46Num_46Prelude_46Int[] = {
 };
Node PC_Prelude_46Num_46Prelude_46Int[] = {
 	/* ST_v272: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,0)
,};
Node PP_Prelude_46Num_46Prelude_46Int_46_42[] = {
 };
Node PC_Prelude_46Num_46Prelude_46Int_46_42[] = {
 	/* ST_v263: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(42,0,0,0)
,};
Node PP_Prelude_46Num_46Prelude_46Int_46_43[] = {
 };
Node PC_Prelude_46Num_46Prelude_46Int_46_43[] = {
 	/* ST_v269: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(43,0,0,0)
,};
Node PP_Prelude_46Num_46Prelude_46Int_46_45[] = {
 };
Node PC_Prelude_46Num_46Prelude_46Int_46_45[] = {
 	/* ST_v266: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(45,0,0,0)
,};
Node PP_Prelude_46Num_46Prelude_46Int_46abs[] = {
 };
Node PC_Prelude_46Num_46Prelude_46Int_46abs[] = {
 	/* ST_v257: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(97,98,115,0)
,};
Node PP_Prelude_46Num_46Prelude_46Int_46fromInteger[] = {
 };
Node PC_Prelude_46Num_46Prelude_46Int_46fromInteger[] = {
 	/* ST_v250: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(102,114,111,109)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,0)
,};
Node PP_Prelude_46Num_46Prelude_46Int_46negate[] = {
 };
Node PC_Prelude_46Num_46Prelude_46Int_46negate[] = {
 	/* ST_v260: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(110,101,103,97)
, bytes2word(116,101,0,0)
,};
Node PP_Prelude_46Num_46Prelude_46Int_46signum[] = {
 };
Node PC_Prelude_46Num_46Prelude_46Int_46signum[] = {
 	/* ST_v254: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(115,105,103,110)
, bytes2word(117,109,0,0)
,	/* PS_v268: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Int_46_43)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_43)
,	/* PS_v265: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Int_46_45)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_45)
,	/* PS_v262: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Int_46_42)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_42)
,	/* PS_v259: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Int_46negate)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46negate)
,	/* PS_v256: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Int_46abs)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46abs)
,	/* PS_v253: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Int_46signum)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46signum)
,	/* PS_v251: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Int_46fromInteger)
, useLabel(PC_Prelude_46primIntFromInteger)
,	/* PS_v249: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Int_46fromInteger)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46fromInteger)
,	/* PS_v271: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Int)
, useLabel(PC_Prelude_46Num_46Prelude_46Int)
,	/* PS_v273: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Int)
, useLabel(PC_Prelude_469)
,};
