#include "hp2graph.h"
#include "output.h"

/*
 * trcelement() -- Drop entries from entrysize-1 and downwards.
 *                 Stop just before total dropped area exceeds threshold
 *
 */

void trcelement(int threshold)
{
  double area = 0;
  double limit;

  int i;
  for(i=0; i<entrysize; i++)
    limit += entrydata[i]->area;

  limit *= (double)threshold;
  limit /= 100.0;

  for(i=entrysize; i>1 && (area+=entrydata[i-1]->area) < limit; i--)
    ;
  
  entrysize = i;
}



/*
 * topkeys()   -- We only have room in the key for a maximum of 20 identifiers. 
 *                We therefore choose to keep the top 20 bands --- these will 
 *                be the most important ones, since this pass is performed 
 *                after the threshold and standard deviation passes. If there 
 *                are more than 20 bands, the excess are gathered together as 
 *                an "OTHER" band which appears as band 20.
 *                (If are is 0 % of total area, and we are sorted, then collect rest as OTHER)
 */

int visiblePercentage(double area)
{
  return  0 != (int)(100*area/areabelow+0.5);
}

void topkeys(int sorted)
{
  int i;
  int j;
  int maxkey;
  Value *ovp = 0;
  if (entrysize < MAXKEY)
    maxkey = entrysize;
  else
    maxkey = MAXKEY;
  
  if(sorted)
    while(maxkey>0 && !visiblePercentage(entrydata[maxkey-1]->area))
      maxkey--;
  
  if(maxkey<entrysize) {
    /* build a list of samples for "OTHER" */ 
    memset(yUInts,0,samplesize*sizeof(UInt));
    
    for (i = maxkey; i < entrysize; i++) {
      Value *vp = entrydata[i]->value;
      while(vp) {
	Value *t = vp;
	yUInts[vp->census] += vp->size;
	vp = vp ->next;
	t->next = ovp;
	ovp = t;
      }
    }
    entrydata[maxkey]->key.token = "OTHER";
    entrydata[maxkey]->value = 0;
    entrydata[maxkey]->area = areaID(sampledata,yUInts,samplesize);
    ovp = vector2value(yUInts,entrydata[maxkey],ovp);
    
    {
      UInt height = 0;
      for(i=0; i<samplesize; i++)
	if(yUInts[i]>height)
	  height = yUInts[i];
      entrydata[maxkey]->height = height;
    }
    if(visiblePercentage(entrydata[maxkey]->area))
      entrysize = maxkey+1;
    else
      entrysize = maxkey;
  }
}
