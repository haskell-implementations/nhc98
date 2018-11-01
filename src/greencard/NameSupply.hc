#include "newmacros.h"
#include "runtime.h"

#define CT_v379	((void*)startLabel+72)
#define FN_LAMBDA367	((void*)startLabel+128)
#define CT_v380	((void*)startLabel+168)
#define F0_LAMBDA367	((void*)startLabel+176)
#define CT_v381	((void*)startLabel+224)
#define CT_v382	((void*)startLabel+256)
#define FN_LAMBDA368	((void*)startLabel+280)
#define CT_v383	((void*)startLabel+308)
#define F0_LAMBDA368	((void*)startLabel+316)
#define CT_v384	((void*)startLabel+348)
#define FN_LAMBDA369	((void*)startLabel+376)
#define CT_v385	((void*)startLabel+388)
#define F0_LAMBDA369	((void*)startLabel+396)
#define CT_v386	((void*)startLabel+424)
#define FN_LAMBDA370	((void*)startLabel+452)
#define CT_v387	((void*)startLabel+476)
#define F0_LAMBDA370	((void*)startLabel+484)
#define CT_v388	((void*)startLabel+512)
#define FN_LAMBDA374	((void*)startLabel+540)
#define CT_v389	((void*)startLabel+604)
#define F0_LAMBDA374	((void*)startLabel+612)
#define FN_LAMBDA373	((void*)startLabel+640)
#define CT_v390	((void*)startLabel+652)
#define F0_LAMBDA373	((void*)startLabel+660)
#define FN_LAMBDA372	((void*)startLabel+672)
#define CT_v391	((void*)startLabel+684)
#define F0_LAMBDA372	((void*)startLabel+692)
#define FN_LAMBDA371	((void*)startLabel+704)
#define CT_v392	((void*)startLabel+716)
#define F0_LAMBDA371	((void*)startLabel+724)
#define CT_v393	((void*)startLabel+748)
#define CT_v394	((void*)startLabel+792)
#define CT_v395	((void*)startLabel+836)
#define FN_LAMBDA377	((void*)startLabel+864)
#define CT_v396	((void*)startLabel+904)
#define F0_LAMBDA377	((void*)startLabel+912)
#define FN_LAMBDA376	((void*)startLabel+936)
#define CT_v397	((void*)startLabel+948)
#define F0_LAMBDA376	((void*)startLabel+956)
#define FN_LAMBDA375	((void*)startLabel+968)
#define CT_v398	((void*)startLabel+980)
#define F0_LAMBDA375	((void*)startLabel+988)
#define CT_v399	((void*)startLabel+1020)
#define CT_v400	((void*)startLabel+1068)
extern Node CF_Prelude_46Num_46Prelude_46Integer[];
extern Node CF_Prelude_46Enum_46Prelude_46Integer[];
extern Node FN_Prelude_46enumFrom[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46Num_46Prelude_46Show[];
extern Node FN_Prelude_46show[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46head[];
extern Node FN_Prelude_46tail[];
extern Node FN_Prelude_46splitAt[];
extern Node FN_Prelude_46_95_46fail[];
extern Node CF_Prelude_46Monad_46NameSupply_46NSM[];
extern Node FN_Prelude_46_95_46_62_62[];

static Node startLabel[] = {
  42
, bytes2word(1,0,0,1)
, useLabel(CT_v379)
,};
Node FN_NameSupply_46nameSupply[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,6,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,7,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(HEAP_CADR_N1,2,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,15,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v379: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_NameSupply_46nameSupply[] = {
  CAPTAG(useLabel(FN_NameSupply_46nameSupply),1)
, useLabel(CF_Prelude_46Num_46Prelude_46Integer)
, useLabel(CF_Prelude_46Enum_46Prelude_46Integer)
, CAPTAG(useLabel(FN_LAMBDA367),2)
, VAPTAG(useLabel(FN_Prelude_46enumFrom))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v380)
,	/* FN_LAMBDA367: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v380: (byte 0) */
  HW(4,4)
, 0
,	/* F0_LAMBDA367: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA367),4)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Show))
, VAPTAG(useLabel(FN_Prelude_46show))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v381)
,};
Node FN_NameSupply_46initNS[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,PUSH_ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v381: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_NameSupply_46initNS[] = {
  CAPTAG(useLabel(FN_NameSupply_46initNS),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v382)
,};
Node FN_NameSupply_46getNewName[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v382: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NameSupply_46getNewName[] = {
  VAPTAG(useLabel(FN_NameSupply_46getNewName))
, CAPTAG(useLabel(FN_LAMBDA368),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v383)
,	/* FN_LAMBDA368: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v383: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA368: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA368),1)
, VAPTAG(useLabel(FN_Prelude_46head))
, VAPTAG(useLabel(FN_Prelude_46tail))
, bytes2word(1,0,0,1)
, useLabel(CT_v384)
,};
Node FN_NameSupply_46getNewNames[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v384: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NameSupply_46getNewNames[] = {
  CAPTAG(useLabel(FN_NameSupply_46getNewNames),1)
, CAPTAG(useLabel(FN_LAMBDA369),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v385)
,	/* FN_LAMBDA369: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v385: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA369: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA369),2)
, VAPTAG(useLabel(FN_Prelude_46splitAt))
, bytes2word(1,0,0,1)
, useLabel(CT_v386)
,};
Node FN_Prelude_46Monad_46NameSupply_46NSM_46return[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v386: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Monad_46NameSupply_46NSM_46return[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46NameSupply_46NSM_46return),1)
, CAPTAG(useLabel(FN_LAMBDA370),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v387)
,	/* FN_LAMBDA370: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v387: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA370: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA370),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v388)
,};
Node FN_Prelude_46Monad_46NameSupply_46NSM_46_62_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v388: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Monad_46NameSupply_46NSM_46_62_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46NameSupply_46NSM_46_62_62_61),2)
, CAPTAG(useLabel(FN_LAMBDA374),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v389)
,	/* FN_LAMBDA374: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(PUSH_P1,2,PUSH_I1,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1,6)
, bytes2word(ZAP_STACK_P1,5,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v389: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA374: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA374),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA371))
, VAPTAG(useLabel(FN_LAMBDA372))
, VAPTAG(useLabel(FN_LAMBDA373))
, bytes2word(1,0,0,1)
, useLabel(CT_v390)
,	/* FN_LAMBDA373: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v390: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA373: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA373),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v391)
,	/* FN_LAMBDA372: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v391: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA372: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA372),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v392)
,	/* FN_LAMBDA371: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v392: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA371: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA371),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v393)
,};
Node FN_Prelude_46Monad_46NameSupply_46NSM_46fail[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v393: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Monad_46NameSupply_46NSM_46fail[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46NameSupply_46NSM_46fail),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46fail))
, useLabel(CF_Prelude_46Monad_46NameSupply_46NSM)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v394)
,};
Node FN_Prelude_46Monad_46NameSupply_46NSM_46_62_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v394: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Monad_46NameSupply_46NSM_46_62_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46NameSupply_46NSM_46_62_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_62))
, useLabel(CF_Prelude_46Monad_46NameSupply_46NSM)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v395)
,};
Node FN_Prelude_46Functor_46NameSupply_46NSM_46fmap[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v395: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Functor_46NameSupply_46NSM_46fmap[] = {
  CAPTAG(useLabel(FN_Prelude_46Functor_46NameSupply_46NSM_46fmap),2)
, CAPTAG(useLabel(FN_LAMBDA377),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v396)
,	/* FN_LAMBDA377: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,4,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v396: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA377: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA377),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA375))
, VAPTAG(useLabel(FN_LAMBDA376))
, bytes2word(1,0,0,1)
, useLabel(CT_v397)
,	/* FN_LAMBDA376: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v397: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA376: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA376),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v398)
,	/* FN_LAMBDA375: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v398: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA375: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA375),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v399)
,};
Node FN_Prelude_46Functor_46NameSupply_46NSM[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v399: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Functor_46NameSupply_46NSM[] = {
  VAPTAG(useLabel(FN_Prelude_46Functor_46NameSupply_46NSM))
, useLabel(F0_Prelude_46Functor_46NameSupply_46NSM_46fmap)
, bytes2word(0,0,0,0)
, useLabel(CT_v400)
,};
Node FN_Prelude_46Monad_46NameSupply_46NSM[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v400: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Monad_46NameSupply_46NSM[] = {
  VAPTAG(useLabel(FN_Prelude_46Monad_46NameSupply_46NSM))
, useLabel(F0_Prelude_46Monad_46NameSupply_46NSM_46_62_62_61)
, useLabel(F0_Prelude_46Monad_46NameSupply_46NSM_46_62_62)
, useLabel(F0_Prelude_46Monad_46NameSupply_46NSM_46fail)
, useLabel(F0_Prelude_46Monad_46NameSupply_46NSM_46return)
,};
