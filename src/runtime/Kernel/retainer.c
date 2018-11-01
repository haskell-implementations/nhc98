#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include "runtime.h"
#include "xmem.h"
#include "profile.h"

#ifdef PROFILE

int maxSet = 1;

int memberAdr(int keep,char *function,Retainer *rinfo)
{
  int l = 0;
  int h;
  if(!rinfo) {fprintf(stderr,"No retainer set\n"); return 1;}
  if(!rinfo->no)
    return !keep || rinfo->keep;

  h = rinfo->no-1;
  if(rinfo->member[l] == function)
    return 1;
  if(rinfo->member[h] == function)
    return 1;
  while(l+1<h) {
    int m = (l+h)/2;
    if(rinfo->member[m] == function)
      return 1;
    if(rinfo->member[m] < function)
      l = m;
    else
      h = m;
  }
  return 0;
}

int memberStr(int keep,Restriction *f,Retainer *rinfo)
{
  int i;
  char *function = f->str;

  if(!rinfo) {fprintf(stderr,"No retainer set\n"); return 1;}
  if(!rinfo->no)
    return !keep || rinfo->keep;

  for(i=0; i<rinfo->no; i++) {
    if (!strcmp(rinfo->member[i],function)) {
      f->address = 1;
      f->str = rinfo->member[i];
      return 1;
    }
  }
  return 0;
}

int keepFunction(char *function)
{
  Restriction *f = restriction[PROFILE_RETAINER];
  if(f) {
    while(f) {
      if(f->address) {if(f->str == function) return 1;}
      else           {if(!strcmp(f->str,function)) {f->address = 1; f->str = function; return 1;}}
      f = f->next;
    }
  } else
    return 1;
  return 0;
}

static int helpFilterR(Retainer *retainer)
{
#if 1
  return !retainer || retainer->keep;
#else
  Restriction *f = restriction[PROFILE_RETAINER];
  if(f) {
    while(f) {
      if(f->address) {if(memberAdr(1,f->str,retainer)) return 1;}
      else           {if(memberStr(1,f,retainer)) return 1;}
      f = f->next;
    }
  } else
    return 1;
  return 0;
#endif
}

void saveLastUse(Info *info)
{
  pm_data pm;
  long offset = info->unique*sizeof(pm_data);

  pm.lastused = info->binfo.parts.last;
  pm.dead = year;
  pm.used = info->binfo.parts.used;

  if (offset) { /* this node is visible during at least one census */
    if(0 != fseek(lastFILE,offset,SEEK_SET)) {
      fprintf(stderr,"offset == %ld\n",offset);
      perror("Failed when trying to seek in last");
    }
    if(1 !=  fwrite(&pm,sizeof(pm_data),1,lastFILE))
      perror("Failed when trying to write post-mortem data");
  }
  return;
}

static int helpFilterB(Info *info)
{
  BInfo binfo = info->binfo;
  pm_data pm;

  if(!RestrictionBiography && lifetimeLow == -1 && lifetimeHigh == -1)
    return 1;

  if(useUnique && lastAREA) {
    long offset = info->unique;               /* Need to look into the future */
    if (offset) {          /* this node is visible during at least one census */
      if(offset > 0 && offset < lastSIZE) {
	pm = lastAREA[offset];
      } else {
	fprintf(stderr,"Skipping offset %ld",offset);
	return 0;
      }
    } else {
      fprintf(stderr,"Found cell without enumeration");
      return 0;
    }      

    if(lifetimeLow > (signed int) (pm.dead-binfo.parts.created))
      return 0;
    if(lifetimeHigh > -1 && lifetimeHigh < (signed int)(pm.dead-binfo.parts.created))
      return 0;

    if(!pm.used) {
      return (RestrictionBiography & BIO_VOID);
    } else {
      if(info->binfo.parts.used) {  /* used before this census ? */
	if(pm.lastused>year) return (RestrictionBiography & BIO_USE);
	else	    return (RestrictionBiography & BIO_DRAG);
      } else {
	return (RestrictionBiography & BIO_LAG);
      }
    }
  }
  return 1; /* Filter in hp2graph instead */
}

int dynamicRestrictions(Info *info)
{
  return helpFilterR(info->rinfo)
    && helpFilterB(info);
}

/**********************************************************/

Retainer *newRetainer(int hashv, int keep, int no, char **members,Retainer *next)
{
  Retainer *re = xmalloc(sizeof(Retainer)+(no-1)*sizeof(char *));
  char **s = &re->member[0];

  re->next = next;
  re->size = 0;
  re->hashv = hashv;
  re->keep = keep;
  re->no = no;
  while(no--)
    *s++ = *members++;
  return re;
}
/*******************************************/


int identical(int n,char **s1,char **s2)
{
  while(n--)
    if(*s1++ != *s2++)
      return 0;
  return 1;
}

char *ugly[10];

char *check(char *s)
{
  char *t;
  if(!s) {
    fprintf(stderr,"Nullpointer instead of function name\n");
    return s;
  }
  if(!*s) {
    fprintf(stderr,"Empty string as function name\n");
    return s;
  }
  for(t=s; *t; t++) {
    if(!isprint(*t)) {
      fprintf(stderr,"Nonprintable character in function name\n");
      return s;
    }
  }
  return s;
}


Retainer *findRetainer(Retainer *rinfo,int keep,char *function)
{
  int hashv = hashInt((Int)function);
  Retainer *es;
  int i=0;
  char **tmp = ugly;
  check(function);
  if(rinfo) {
    if(rinfo->no && rinfo->no+1 <= maxSet) {
      hashv = rinfo->hashv ^ hashv;
      if(function<rinfo->member[rinfo->no-1]) {
        while(function>rinfo->member[i])
          *tmp++ = rinfo->member[i++];
        *tmp++ = function;
        while(i < rinfo->no)
          *tmp++ = rinfo->member[i++];
      } else {
        while(i < rinfo->no)
          *tmp++ = rinfo->member[i++];
        *tmp++ = function;
      }
      i = rinfo->no+1;
      keep |= rinfo->keep;
    } else {      
      if(rinfo->no)  /* Extending old set to U */
	keep |= rinfo->keep;
      else          /* Old set is U */
	if (keep == rinfo->keep) return rinfo;
      hashv = 1;
      i = 0;
    }
  } else {
    ugly[0] = function;
    i = 1;
  }

  { int j;
    for(j=0; j<i; j++)
      check(ugly[j]);
  }

  es = RetainerTable[hashv];
  for(; es; es = es->next) {
    if(i == es->no && keep == es->keep && identical(i,&es->member[0],ugly))
      return es;
  }
  es =  RetainerTable[hashv] = newRetainer(hashv,keep,i,ugly,RetainerTable[hashv]);
  return  es;
}

/*******************************************/

void printTableRetainer(FILE *fp)
{
  int i;
  for(i = 0; i<TABLESIZE; i++) {
    Retainer *rs;
    for(rs = RetainerTable[i]; rs; rs = rs->next) {
      if(rs->size) {
	if(rs->no) {
	  int j = rs->no;
	  putc('{',fp);
	  while(j--) {
	    fprintf(fp,"%s",rs->member[j]);
	    if(j) putc(',',fp);
	  }
	  putc('}',fp);
	} else
	  fprintf(fp," U ");
	
	fprintf(fp,"\t%d\n",rs->size);
      }
    }
  }
}



#endif


