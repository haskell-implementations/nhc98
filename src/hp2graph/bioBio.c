#include "hp2graph.h"

Value *vector2value(UInt *vector,Entry *ep, Value *ovp)
{
  int i;

  for(i=0; i<samplesize; i++) {
    if(vector[i]) {
      if(ovp) { /* reuse old */
	Value *t = ovp;
	ovp = ovp->next;
	t->next = ep ->value;
	t->census = i;
	t->binfo.all = 0;
	t->size = vector[i];
	ep->value = t;
      } else {
	BInfo b;
	b.all = 0;
	addValue(ep,i,b,vector[i]);
      }
    }
  } 
  return ovp;
}


void bioBio(int keepall, int bio, int low, int high)
{
  int i;
  UInt *lagsize,*dragsize,*voidsize;
  Value *ovp=0;
  Entry *ep;

  if(!(lagsize = (UInt *)new(samplesize*sizeof(UInt)))) {
    fprintf(stderr,"No space for lag data in bioBio.");
    abort();
  }  
  memset(lagsize,0,samplesize*sizeof(UInt));
  memset(yUInts,0,samplesize*sizeof(UInt));

  if(!(dragsize = (UInt *)new(samplesize*sizeof(UInt)))) {
    fprintf(stderr,"No space for drag data in bioBio.");
    abort();
  }  
  memset(dragsize,0,samplesize*sizeof(UInt));
  if(!(voidsize = (UInt *)new(samplesize*sizeof(UInt)))) {
    fprintf(stderr,"No space for void data in bioBio.");
    abort();
  }  
  memset(voidsize,0,samplesize*sizeof(UInt));

  for(i=0; i<ENTRYMAX; i++) {
    for(ep = entrydata[i]; ep; ep = ep->next) {
      Value *vp = ep->value;
      BInfo binfo = ep->key.binfo;
      ep->value = 0;
      while(vp) {
	int j;
	int lifetime  = vp->census - binfo.parts.created;
	if(low <= lifetime && (high<0 || high>=lifetime)) {
	  if(keepall) {
	    if(binfo.parts.used) {
	      for(j=binfo.parts.created; j < binfo.parts.first; j++)
		lagsize[j] += vp->size;
	      for(j=binfo.parts.first; j < binfo.parts.last; j++)
		yUInts[j] += vp->size;
	      for(j=binfo.parts.last; j < vp->census; j++)
		dragsize[j] += vp->size;
	    } else {
	      for(j=binfo.parts.created; j < vp->census; j++)
		voidsize[j] += vp->size;
	    }
	  } else { /* filtered on retainers, count only once */
	    if(binfo.parts.used) {
	      if(vp->census < binfo.parts.first)
		lagsize[vp->census] += vp->size;
	      else if(vp->census< binfo.parts.last)		  
		yUInts[vp->census] += vp->size;
	      else 
		dragsize[vp->census] += vp->size;
	    } else {
	      voidsize[vp->census] += vp->size;
	    }
	  }
	}
	{Value *t = vp;
	 vp = vp ->next;
	 t->next = ovp;
	 ovp = t;}
      } /* End one entry */
    } /* End list of entries */
  } /* End all entries */

  ep = 0;
  if(bio & BIO_LAG) {
    Key key;
    key.token = "lag";
    ep = newEntry(key,ep);
    ovp = vector2value(lagsize,ep,ovp);
  }
  free(lagsize);
  if(bio & BIO_USE) {
    Key key;
    key.token = "use";
    ep = newEntry(key,ep);
    ovp = vector2value(yUInts,ep,ovp);
  }
  if(bio & BIO_DRAG) {
    Key key;
    key.token = "drag";
    ep = newEntry(key,ep);
    ovp = vector2value(dragsize,ep,ovp);
  }
  free(dragsize);
  if(bio & BIO_VOID) {
    Key key;
    key.token = "void";
    ep = newEntry(key,ep);
    ovp = vector2value(voidsize,ep,ovp);
  }
  free(voidsize);
  freeEntriesT();
  entrydata[0] = ep;
}
