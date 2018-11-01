#include <haskell2c.h>

int hs_floatToInt (float fl)
{ 
   union {
     float f;
     int   i;
   } tmp;
   tmp.f = fl;
  return tmp.i;
}


NodePtr hs_doubleToInts (double db)
{ 
   union {
     double d;
     int    i[2];
   } tmp;
   tmp.d = db;
  return nhc_mkTuple2(nhc_mkInt(tmp.i[0]),nhc_mkInt(tmp.i[1]));
}
