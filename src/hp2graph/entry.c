#include "hp2graph.h"

Entry **entrydata;
int entrysize;

static int hashStr(char *s)
{
  int r;
  for (r = 0; *s; s++) {
    r = r + r + r + *s;
  }
  if (r < 0) r = -r;
  
  return r % ENTRYMAX;
}

static int hashInt(UInt i)
{
  int r;
  union {
    struct {
      char c1,c2,c3,c4;
    } c;
    int i;
  } v;

  v.i = i;

  r = 3*v.c.c1+2*v.c.c2+v.c.c3+v.c.c4;
  if (r < 0) r = -r;

  return r % ENTRYMAX;
}

Entry *newEntry(Key key, Entry *next)
{
  Entry *ep = (Entry *)new(sizeof(Entry));

  if(ep) {
    ep->next = next;
    ep->key = key;
    ep->value = 0;
  } else {
    fprintf(stderr,"Out of memory when allocating memory for new entry at %d\n",lexline);
    abort();
  }
  return ep;
}

Entry *lookupEntryStr(SharedToken s)
{
  int hash = hashStr(s);
  Key key;
  Entry *ep;

  for(ep = entrydata[hash]; ep; ep = ep->next)
    if(!strcmp(ep->key.token,s))
      return ep;
  key.token = clone(s);
  entrydata[hash] = ep = newEntry(key,entrydata[hash]);
  return ep;
}

Entry *lookupEntryInt(UInt i)
{
  int hash = hashInt(i);
  Key key;
  Entry *ep;

  for(ep = entrydata[hash]; ep; ep = ep->next)
    if(ep->key.binfo.all == i)
      return ep;
  key.binfo.all = i;
  entrydata[hash] = ep = newEntry(key,entrydata[hash]);
  return ep;
}

void addValue(Entry *ep, int census, BInfo binfo, UInt size)
{
  Value *vp = (Value *)new(sizeof(Value));

  if(vp) {
    vp->next = ep->value;
    vp->census = census;
    vp->binfo = binfo;
    vp->size = size;
    ep->value = vp;
  } else {
    fprintf(stderr,"Out of memory when allocating memory for new value at %d\n",lexline);
    abort();
  }
}

void freeEntries(Entry *ep)
{
  while(ep) {
    Entry *t = ep;
    ep = ep->next;
    free(t);
  }
}

void freeEntriesT(void)
{
  int i;
  for(i=0; i<ENTRYMAX; i++) {
    freeEntries(entrydata[i]);
    entrydata[i] = 0;
  }
}



Entry *allEntries(void)
{
  int i;
  Entry *l = 0;
  for (i = 0; i < ENTRYMAX; i++) {
    Entry *ep = entrydata[i];
    while (ep) {
      Entry *t = ep->next;
      ep->next = l;
      l = ep;
      ep = t;
    }
  }
  return l;
}
