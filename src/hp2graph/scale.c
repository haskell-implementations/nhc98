#include "hp2graph.h"
#include "output.h"


/*
 * maxCombinedHeight() -- Return the maximum combined height that all the 
 *                        sample curves will reach. This (absolute) figure 
 *                        can then be used to scale the samples automatically 
 *                        so that they fit on the page.
 *                        if showExploded then add max height from each curve
 */

double maxCombinedHeight(void)
{
  double maxima = 0;

  if(showExploded) {
    int i;
    for(i=0; i<entrysize; i++) {
      UInt m = 0;
      Value *vp = entrydata[i]->value;
      while(vp) {
	if(m<vp->size) m = vp->size;
	vp = vp->next;
      }
      maxima += (double)m;
    }
  } else {
    int i;
    memset(yUInts,0,samplesize*sizeof(UInt));
    for(i=0; i<entrysize; i++) {
      UInt m = 0;
      Value *vp = entrydata[i]->value;
      while(vp) {
	yUInts[vp->census] += vp->size;
	vp = vp->next;
      }
    }
    for(i=0; i<samplesize; i++)
      if(maxima< (double)yUInts[i])
	maxima = (double)yUInts[i];
  }
  return maxima;
}
