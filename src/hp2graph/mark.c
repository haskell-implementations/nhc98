#include "hp2graph.h"

int marksize = 0;
Mark *markdata = 0;

static int markmax = 32;

void addMark(double t)
{
  if(!markdata || marksize == markmax) {
    markmax *= 2;
    if(!(markdata = (Mark *)extend(markdata, markmax*sizeof(Mark)))) {
      fprintf(stderr,"Out of memory when allocating memory for MARK at %d\n",lexline);
      abort();
    }
  }
  markdata[marksize++]=t;
}
  




