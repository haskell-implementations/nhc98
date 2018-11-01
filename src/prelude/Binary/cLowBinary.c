/* cLowBinary.c  - Underlying routines for the new Binary functions.
 */

#include "cLowBinary.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
void clearcache (BinHandle bh) {
  int i;
  for (i=CACHESIZE; i>0;) {
    bh->cache[--i]=0;
  }
  bh->cptr = 0;
  /*fprintf(stderr,"clearcache: cache=%x cptr=%d\n",bh->cache[0],bh->cptr);*/
}

/* invariant: virtual fileptr is at beginning of cache */
void nextcache (BinHandle bh) {
  if (bh->file) {
    switch (bh->mode) {
    case RO: bh->adjust.vptr += CACHESIZE - bh->attrib.eof;
             vread(bh);
             break;
    case WO: vwrite(bh);
             bh->adjust.vptr += CACHESIZE;
             clearcache(bh);
             break;
    case RW: vwrite(bh);
             bh->adjust.vptr += CACHESIZE;
             vread(bh);
             break;
    }
  } else { /*MEMORY*/
    switch (bh->mode) {
    case RO: bh->adjust.here += CACHESIZE;
             mread(bh);
             break;
    case RW: mwrite(bh);
             bh->adjust.here += CACHESIZE;
             mread(bh);
             break;
    default: break;
    }
  }
  bh->cptr = 0;
  /*fprintf(stderr,"nextcache: cache=%x cptr=%d\n",bh->cache[0],bh->cptr);*/
}
 
void vread (BinHandle bh) { /* reads from the virtual fileptr */
  vsync(bh);
  if (bh->attrib.eof = CACHESIZE - read(bh->loc.fd,bh->cache,CACHESIZE)) {
    int i;
    for (i=bh->attrib.eof; i>0; i--) {
      bh->cache[CACHESIZE-i]=0;
    }
    bh->adjust.vptr -= CACHESIZE - bh->attrib.eof;
  } else {
    bh->adjust.vptr -= CACHESIZE;
  }
  bh->cptr = 0;
  /*fprintf(stderr,"vread: cache=%x cptr=%d\n",bh->cache[0],bh->cptr);*/
} /* invariant now holds again -> vptr is at start of cache */
 
void vwrite (BinHandle bh) {
  if (bh->w) {
    vsync(bh);
    write(bh->loc.fd,bh->cache,bh->w);
    bh->adjust.vptr = -bh->w;
    bh->w = CACHESIZE - bh->w;	/* invert w */
    bh->attrib.eof = (bh->attrib.eof<=bh->w ? bh->attrib.eof : bh->w);
    bh->w = 0;
  } /* invariant holds -> vptr still at *start* of cache */
  /*fprintf(stderr,"vwrite: cache=%x cptr=%d\n",bh->cache[0],bh->cptr);*/
}

void opencache (BinHandle bh) {
  bh->w = 0;
  if (bh->file) bh->adjust.vptr = 0;
  switch (bh->mode) {
  case RO:
  case RW: if (bh->file) vread(bh); else mread(bh);
           break;
  case WO: clearcache(bh); break;
  }
  /*fprintf(stderr,"opencache: opened\n");*/
  /*fprintf(stderr,"opencache: cache=%x cptr=%d\n",bh->cache[0],bh->cptr);*/
}
 
void closecache (BinHandle bh) {
  int end;
  /*fprintf(stderr,"before closecache: cache[0]=%x cptr=%d vptr=%d w=%d\n",
                 bh->cache[0],bh->cptr,bh->adjust.vptr,bh->w);*/
  switch (bh->mode) {
  case RO: break;
  case WO:
  case RW: if (bh->file) vwrite(bh); else mwrite(bh);
           break;
  }
  if (bh->file) bh->adjust.vptr += (bh->cptr/8);
  else          bh->adjust.here += (bh->cptr/8);
  bh->cptr = 0;
  /*fprintf(stderr,"closecache: closed\n");*/
  /*fprintf(stderr,"after  closecache: cache[0]=%x cptr=%d vptr=%d w=%d\n",
                 bh->cache[0],bh->cptr,bh->fm.f.vptr,bh->fm.f.w);*/
}

int forceCacheTo (BinHandle bh, int bp) {
  int cacheStart;
  int bpbyte = bp / 8;
  if (bh->file)
    cacheStart=lseek(bh->loc.fd,0,SEEK_CUR) + bh->adjust.vptr;
  else
    cacheStart=bh->adjust.here;
  if ((cacheStart <= bpbyte) && (bpbyte < cacheStart + CACHESIZE)) {
    return cacheStart;
  } else {
    closecache(bh);
    if (bh->file)
      lseek(bh->loc.fd,bpbyte,SEEK_SET);
    else
      bh->adjust.here = bpbyte;  /* ???? Maybe need to word-align ???? */
    opencache(bh);
    return bpbyte;
  }
  /*fprintf(stderr,"forceCacheTo: cache=%x cptr=%d\n",bh->cache[0],bh->cptr);*/
}

void preFinaliseBH (BinHandle bh) {
  char c; int i;
  if (bh->file) {
    closecache(bh);
    if (bh->mode != RO) {
      c = (char)(bh->highwater%8);
      i = (c ? 1+(bh->highwater/8) : (bh->highwater/8));
      c = (c ? 16-c : 8);
      lseek(bh->loc.fd,i,SEEK_SET);
      write(bh->loc.fd,&c,1);
      close(bh->loc.fd);
    }
  } else stableRelease(bh->loc.sp);
}

void finaliseBH (BinHandle bh) {
  preFinaliseBH(bh);
  free(bh);
}
 
void mread (BinHandle bh) { /* reads from heap space */
  int avail = bh->attrib.size - bh->adjust.here;
  if (avail > 0) {
    if (avail < CACHESIZE) {
      clearcache(bh);
      memcpy (bh->cache,
              (void*)(stableRef(bh->loc.sp)+1+EXTRA)+bh->adjust.here,avail);
    /*fprintf(stderr,"mread: cached %d bytes from location 0x%x\n", avail,
              (void*)(stableRef(bh->loc.sp)+1+EXTRA)+bh->adjust.here);*/
    } else {
      memcpy (bh->cache,
              (void*)(stableRef(bh->loc.sp)+1+EXTRA)+bh->adjust.here,CACHESIZE);
    /*fprintf(stderr,"mread: cached %d bytes from location 0x%x\n", CACHESIZE,
              (void*)(stableRef(bh->loc.sp)+1+EXTRA)+bh->adjust.here);*/
    }
  } else {
    clearcache(bh);
  }
  bh->cptr = 0;
  /*fprintf(stderr,"vread: cache=%x cptr=%d\n",bh->cache[0],bh->cptr);*/
} /* invariant holds -> adjust.here is at start of cache */
 
void mwrite (BinHandle bh) {
  /*fprintf(stderr,"mwrite: cache=0x%x cptr=%d\n",bh->cache[0],bh->cptr);*/
  /*fprintf(stderr,"        w=%d size=%d here=%d sp=%d\n",bh->w,*/
  /*                bh->attrib.size,bh->adjust.here,bh->loc.sp);*/
  if (bh->w) {
    memcheck(bh,bh->w);
    /*fprintf(stderr,"        memcpy(sp,cache)\n");*/
    memcpy((void*)(stableRef(bh->loc.sp)+1+EXTRA)+bh->adjust.here,
           bh->cache,bh->w);
  /*fprintf(stderr,"mwrite: flushed %d bytes from cache to mem at 0x%x\n",
            bh->w, (void*)(stableRef(bh->loc.sp)+1+EXTRA)+bh->adjust.here);*/
    bh->w = 0;
  } /* invariant holds -> adjust.here still at *start* of cache */
}

void memcheck(BinHandle bh,int extrarequired) {
  int avail = bh->attrib.size - bh->adjust.here;
  if (avail<extrarequired) {
    NodePtr new, old;
    int words =
        bh->attrib.size = bh->adjust.here + extrarequired;
    words = words/sizeof(NodePtr) + (words%sizeof(NodePtr) ? 1 : 0) ;
    C_CHECK(words);	/* call garbage collector if needed */
    /* allocate more space, then copy old data across */
    new = C_ALLOC(1+EXTRA+words);
    new[0] = CONSTRW(words,EXTRA);
    old = stableRef(bh->loc.sp);
    if (bh->adjust.here) {
      memcpy((void*)(&new[1+EXTRA]),(void*)(&old[1+EXTRA]),bh->adjust.here);
    }
    for (avail=1+(bh->adjust.here/sizeof(NodePtr)); avail<words; avail++)
      new[1+EXTRA+avail] = 0;
  /*fprintf(stderr,"memcheck: moved %d bytes from 0x%x to 0x%x\n",
            bh->adjust.here,
            (void*)(&old[1+EXTRA]), (void*)(&new[1+EXTRA]));*/
    /* and release old pointer */
    stableRelease(bh->loc.sp);
    bh->loc.sp = stableInsert(new);
  }
}
