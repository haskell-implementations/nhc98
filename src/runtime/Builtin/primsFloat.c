#include <math.h>

float primFloatSignumC (float f)    { return (float)(f<0?-1.0:(f==0?0.0:1.0)); }
float primFloatAbsC (float f)			{ return (float)(f<0?-f:f); }
float primFloatAddC (float f1, float f2)	{ return (float)(f1+f2); }
float primFloatSubC (float f1, float f2)	{ return (float)(f1-f2); }
float primFloatMulC (float f1, float f2)	{ return (float)(f1*f2); }
float primFloatDivC (float f1, float f2)	{ return (float)(f1/f2); }

int   primFloatEqC (float f1, float f2)		{ return (float)(f1==f2); }
int   primFloatLeC (float f1, float f2)		{ return (float)(f1<=f2); }
int   primFloatLtC (float f1, float f2)		{ return (float)(f1<f2); }

float primFloatExpC (float f)			{ return (float)exp(f); }
float primFloatLogC (float f)			{ return (float)log(f); }
float primFloatSqrtC (float f)			{ return (float)sqrt(f); }
float primFloatSinC (float f)			{ return (float)sin(f); }
float primFloatCosC (float f)			{ return (float)cos(f); }
float primFloatTanC (float f)			{ return (float)tan(f); }
float primFloatAsinC (float f)			{ return (float)asin(f); }
float primFloatAcosC (float f)			{ return (float)acos(f); }
float primFloatAtanC (float f)			{ return (float)atan(f); }
