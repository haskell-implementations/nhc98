#include "hp2graph.h"

void bioStatic(int bio,int low,int high)
{
  int i;
  Value *ovp = 0;

  for(i=0; i<ENTRYMAX; i++) {
    Entry *ep;
    for(ep = entrydata[i]; ep; ep = ep->next) {
      Value *vp = ep->value;
      ep->value = 0;
      memset(yUInts,0,samplesize*sizeof(UInt));
      while(vp) {
	BInfo binfo = vp->binfo;
	int j;
	int lifetime  = vp->census - binfo.parts.created;
	if(low <= lifetime && (high<0 || high>=lifetime)) {
	  if(binfo.parts.used) {
	    if(bio & BIO_LAG)
	      for(j=binfo.parts.created; j < binfo.parts.first; j++)
		yUInts[j] += vp->size;
	    if(bio & BIO_USE)
	      for(j=binfo.parts.first; j < binfo.parts.last; j++)
		yUInts[j] += vp->size;
	    if(bio & BIO_DRAG)
	      for(j=binfo.parts.last; j < vp->census; j++)
		yUInts[j] += vp->size;
	  } else {
	    if(bio & BIO_VOID)
	      for(j=binfo.parts.created; j < vp->census; j++)
		yUInts[j] += vp->size;
	  }
	}
	{Value *t = vp;
	 vp = vp ->next;
	 t->next = ovp;
	 ovp = t;}
      }
      ovp = vector2value(yUInts,ep,ovp);
    } /* End list of Entry */
  } /* End entrydata */
}

