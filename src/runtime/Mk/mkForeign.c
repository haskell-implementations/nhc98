/* mkForeign() added by MW */

#include "mk.h"

NodePtr nhc_mkForeign (void *x, gcCval final)
{
    ForeignObj *fo;
    fo = allocForeignObj(x,final,gcNow);
    return nhc_mkCInt((Int)fo);
}

