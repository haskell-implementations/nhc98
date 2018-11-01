#include <math.h>

double primDoubleSignumC (double d)	{ return (d<0?-1.0:(d==0?0.0:1.0)); }
double primDoubleAbsC (double d)	{ return (d<0?-d:d); }
double primDoubleAddC (double d1, double d2)	{ return (d1+d2); }
double primDoubleSubC (double d1, double d2)	{ return (d1-d2); }
double primDoubleMulC (double d1, double d2)	{ return (d1*d2); }
double primDoubleDivC (double d1, double d2)	{ return (d1/d2); }

int    primDoubleEqC (double d1, double d2)	{ return (d1==d2); }
int    primDoubleLeC (double d1, double d2)	{ return (d1<=d2); }
int    primDoubleLtC (double d1, double d2)	{ return (d1<d2); }

double primDoubleExpC (double d)		{ return exp(d); }
double primDoubleLogC (double d)		{ return log(d); }
double primDoubleSqrtC (double d)		{ return sqrt(d); }
double primDoubleSinC (double d)		{ return sin(d); }
double primDoubleCosC (double d)		{ return cos(d); }
double primDoubleTanC (double d)		{ return tan(d); }
double primDoubleAsinC (double d)		{ return asin(d); }
double primDoubleAcosC (double d)		{ return acos(d); }
double primDoubleAtanC (double d)		{ return atan(d); }
