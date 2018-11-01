#include "hp2graph.h"


double areaID(double *xs, UInt *ys, int size)
{
  double area = 0;
  int i;
  for(i=1; i<size; i++)
    area += (xs[i]-xs[i-1])/2*(double)(ys[i]+ys[i-1]);
  return area;
}
   
int areaEntries(Entry *ep)
{
  int no = 0;
  while (ep) {
    UInt height = 0;
    Value *vp = ep->value;
    memset(yUInts,0,samplesize*sizeof(UInt));
    no++;
    while(vp) {
      yUInts[vp->census] = vp->size;
      if(vp->size > height) height = vp->size;
      vp = vp->next;
    }
    ep->height = height;
    ep->area = areaID(sampledata,yUInts,samplesize);
    ep = ep->next;
  }
  return no;
}

double areaAll(void)
{
  int i;
  double area = 0;
  for(i=0; i<entrysize; i++)
    area += entrydata[i]->area;
  return area;
}
