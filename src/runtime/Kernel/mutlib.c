
#include "runtime.h"
#include "mutlib.h"
#include "newmacros.h"

void mk_float(NodePtr p,float f)
{
  union {
    float f;
    int   i;
  } conv;
  
  conv.f = f;
  p[0] = CONSTR_FLOAT;
  p[EXTRA+1] = conv.i;
}

float get_float_value(NodePtr p)
{
  union {
    float  f;
    Int    i;
  } conv;
  conv.i = p[EXTRA+1];
  return conv.f;
}

void mk_double(NodePtr p,double f)
{
  union {
    double d;
    int i[2];
  } conv;
  conv.d = f;
  p[0] = CONSTR_DOUBLE;
  p[EXTRA+1] = conv.i[DOUBLE_L];
  p[EXTRA+2] = conv.i[DOUBLE_H];
}

double get_double_value(NodePtr p)
{
  union {
    double d;
    int i[2];
  } conv;
  conv.i[DOUBLE_L] = p[EXTRA+1];
  conv.i[DOUBLE_H] = p[EXTRA+2];
  return conv.d;
}


