#include "hp2graph.h"

double lifeRestrictionLow = -1;
double lifeRestrictionHigh = -1;


void life(int keepall, int bio, int low, int high)
{
  int i,step;
  UInt *lifedata;
  Value *ovp=0;
  Entry *oep=0;
  Entry *ep;
  char buffer[20];

  if(!(lifedata = (UInt *)new(samplesize*samplesize*sizeof(UInt)))) {
    fprintf(stderr,"No space for life data in life matrice (%i*%i).",samplesize,samplesize);
    abort();
  }  
  memset(lifedata,0,samplesize*samplesize*sizeof(UInt));

  for(i=0; i<ENTRYMAX; i++) {
    for(ep = entrydata[i]; ep; ) {
      Value *vp = ep->value;
      BInfo binfo = ep->key.binfo;
      ep->value = 0;
      
      while(vp) {
	int  bitfield = vp->binfo.all;
	int j;
	int l = vp->census - binfo.parts.created;
	if(low <= l && (high<0 || high>=l)) {
	  if(binfo.parts.used) {
	    for(j=binfo.parts.created; j < binfo.parts.first; j++)
	      if(keepall || (bitfield & (1<<j))) lifedata[l*samplesize+j] += vp->size;
	    for(j=binfo.parts.first; j < binfo.parts.last; j++)
	      if(keepall || (bitfield & (1<<j))) lifedata[l*samplesize+j] += vp->size;
	    for(j=binfo.parts.last; j < vp->census; j++)
	      if(keepall || (bitfield & (1<<j))) lifedata[l*samplesize+j] += vp->size;
	  } else {
	    for(j=binfo.parts.created; j < vp->census; j++)
	      if(keepall || (bitfield & (1<<j))) lifedata[l*samplesize+j] += vp->size;
	  }
	}
	{Value *t = vp;
	 vp = vp ->next;
	 t->next = ovp;
	 ovp = t;}
      } /* End one entry */
      {Entry *t = ep;
       ep = ep ->next;
       t->next = oep;
       oep = t;}
      entrydata[i] = 0;
    } /* End list of entries */
  } /* End all entries */
  
  for(ep=0,i=1,step=0; i<samplesize; i += 1+step, step++) {
    int l;
    Key key; 
    if(i==1)
      sprintf(buffer,"   .. %d",i);
    else
      sprintf(buffer,"%d .. %d",i,i+step);
    key.token = clone(buffer);
    memset(yUInts,0,samplesize*sizeof(UInt));      

    for(l=i; l<=i+step && l < samplesize ; l++) {
      int j;
      for(j=0; j<=samplesize; j++) 
	yUInts[j] += lifedata[l*samplesize+j];
    }
    if(oep) {
      Entry *t = ep;
      ep = oep;
      oep = oep->next;
      ep->next = t;
      ep->key = key;
      ep->value = 0;
    } else {
      ep = newEntry(key,ep);
    }
    ovp = vector2value(yUInts,ep,ovp);
  }
  entrydata[0] = ep;
/*  free(lifedata); */
}
