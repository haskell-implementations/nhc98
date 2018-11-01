
int floatToInt (float fl) {
  union {
    float f;
    int   i;
  } tmp;
  tmp.f = fl;
  return tmp.i;
}

int doubleToInt0 (double db) {
  union {
    double d;
    int    i[2];
  } tmp;
  tmp.d = db;
  return tmp.i[0];
}

int doubleToInt1 (double db) {
  union {
    double d;
    int    i[2];
  } tmp;
  tmp.d = db;
  return tmp.i[1];
}

