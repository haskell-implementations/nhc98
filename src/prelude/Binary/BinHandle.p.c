#include "newmacros.h"
#include "runtime.h"

#define PS_NHC_46Binary_46BH	((void*)startLabel+20)

static Node startLabel[] = {
  42
,};
Node PP_NHC_46Binary_46BH[] = {
 };
Node PC_NHC_46Binary_46BH[] = {
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,66)
, bytes2word(72,0,0,0)
,	/* PS_NHC_46Binary_46BH: (byte 0) */
  useLabel(PP_NHC_46Binary_46BH)
, useLabel(PP_NHC_46Binary_46BH)
, useLabel(PC_NHC_46Binary_46BH)
,};
