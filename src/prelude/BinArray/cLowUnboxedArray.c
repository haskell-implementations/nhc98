#include "cLowUnboxedArray.h"
#include <stdlib.h>

void finaliseUBA (UBA uba) {
  free(uba->block);
  free(uba);
}
