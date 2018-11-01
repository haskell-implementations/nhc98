#include "hp2graph.h"

int samplesize = 0;
Sample *sampledata = 0;

static int samplemax = 32;

void addSample(int census,double t)
{
  if(!sampledata || samplesize == samplemax) {
    samplemax *= 2;
    if(!(sampledata = (Sample *)extend(sampledata, samplemax*sizeof(Sample)))){
      fprintf(stderr,"Out of memory when allocating memory for SAMPLE at %d\n",lexline);
      abort();
    }
  }
  if (timebyallocation)
       sampledata[samplesize++] = census;
  else sampledata[samplesize++] = t;
}



