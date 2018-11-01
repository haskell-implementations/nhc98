#include "newmacros.h"
#include "runtime.h"

#define CT_v573	((void*)startLabel+20)
#define CT_v574	((void*)startLabel+52)
#define CT_v575	((void*)startLabel+84)
#define CT_v576	((void*)startLabel+116)
#define CT_v577	((void*)startLabel+148)
#define CT_v578	((void*)startLabel+180)
#define CT_v579	((void*)startLabel+212)
#define CT_v580	((void*)startLabel+244)
#define CT_v581	((void*)startLabel+276)
#define CT_v582	((void*)startLabel+308)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v573)
,};
Node FN_PreImp_46sFix[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v573: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_PreImp_46sFix[] = {
  CAPTAG(useLabel(FN_PreImp_46sFix),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v574)
,};
Node FN_PreImp_46sExp[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v574: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_PreImp_46sExp[] = {
  CAPTAG(useLabel(FN_PreImp_46sExp),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v575)
,};
Node FN_PreImp_46sQual[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v575: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_PreImp_46sQual[] = {
  CAPTAG(useLabel(FN_PreImp_46sQual),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v576)
,};
Node FN_PreImp_46sLG[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v576: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_PreImp_46sLG[] = {
  CAPTAG(useLabel(FN_PreImp_46sLG),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v577)
,};
Node FN_PreImp_46hVarsType[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,6)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v577: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_PreImp_46hVarsType[] = {
  CAPTAG(useLabel(FN_PreImp_46hVarsType),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v578)
,};
Node FN_PreImp_46hInstance[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,5)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v578: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_PreImp_46hInstance[] = {
  CAPTAG(useLabel(FN_PreImp_46hInstance),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v579)
,};
Node FN_PreImp_46hClass[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v579: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_PreImp_46hClass[] = {
  CAPTAG(useLabel(FN_PreImp_46hClass),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v580)
,};
Node FN_PreImp_46hDataPrim[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v580: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_PreImp_46hDataPrim[] = {
  CAPTAG(useLabel(FN_PreImp_46hDataPrim),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v581)
,};
Node FN_PreImp_46hData[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v581: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_PreImp_46hData[] = {
  CAPTAG(useLabel(FN_PreImp_46hData),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v582)
,};
Node FN_PreImp_46hType[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v582: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_PreImp_46hType[] = {
  CAPTAG(useLabel(FN_PreImp_46hType),1)
,};
