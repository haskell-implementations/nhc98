#include "hp2graph.h"
#include <ctype.h>

#define DEL ";"

int profile;   /* PROFILE_ */
int restriction;    /* RESTRICTION_ */

static int literalOpt(char *lit)
{
  if(lextoken && !strcmp(lextoken,lit)) {
    getToken();
    return 1;
  }
  return 0;
}

static int literalOptStr(char *lit)
{
  if(lextoken && !strcmp(lextoken,lit)) {
    getString();
    return 1;
  }
  return 0;
}

void literal(char *lit)
{
  if(!literalOpt(lit)) {
    fprintf(stderr,"Found %s instead of %s at line %d\n",(lextoken?lextoken:"<eof>"),lit,lexline);
    abort();
  }
}  

static void header(void)
{
  literal("JOB");
  for( ; strcmp(lextoken,DEL); getToken()) {
    checkForMinusI(lextoken);
    addArgv(clone(lextoken));
  }
  getToken();
  
  if(literalOptStr("DATE")) {
    datedata = clone(lextoken);
    getToken();
  } else {
    datedata = "";
  }

  profile |= literalOpt("PROFILE_MODULE")     ?PROFILE_MODULE : 0;
  profile |= literalOpt("PROFILE_PRODUCER")   ?PROFILE_PRODUCER : 0;
  profile |= literalOpt("PROFILE_CONSTRUCTOR")?PROFILE_CONSTRUCTOR : 0;
  profile |= literalOpt("PROFILE_RETAINER")   ?PROFILE_RETAINER : 0;
  profile |= literalOpt("PROFILE_LIFETIME")   ?PROFILE_LIFETIME : 0;
  profile |= literalOpt("PROFILE_KIND")       ?PROFILE_KIND : 0;
  profile |= literalOpt("PROFILE_BIOGRAPHY")  ?PROFILE_BIOGRAPHY : 0;

  restriction |= literalOpt("RESTRICTION_MODULE")     ?PROFILE_MODULE : 0;
  restriction |= literalOpt("RESTRICTION_PRODUCER")   ?PROFILE_PRODUCER : 0;
  restriction |= literalOpt("RESTRICTION_CONSTRUCTOR")?PROFILE_CONSTRUCTOR : 0;
  restriction |= literalOpt("RESTRICTION_RETAINER")   ?PROFILE_RETAINER : 0;
  restriction |= literalOpt("RESTRICTION_LIFETIME")   ?PROFILE_LIFETIME : 0;
  restriction |= literalOpt("RESTRICTION_KIND")       ?PROFILE_KIND : 0;
  restriction |= literalOpt("RESTRICTION_BIOGRAPHY")  ?PROFILE_BIOGRAPHY : 0;
}


static void mark(void)
{
  if (!timebyallocation)
    addMark(atof(lextoken));
  getToken();
}

static void comment(void)
{
  double t = atof(lextoken);
  getString();
  addComment(t,clone(lextoken));
  getToken();
}

static void value(Entry *ep, int year)
{
  BInfo b;
  b.all = 0;
  addValue(ep,year,b,atoi(lextoken));
  getToken();
}

static void values(Entry *ep, int year)
{
  while(lextoken && strcmp(lextoken,DEL)) {
    BInfo binfo;
    binfo.all = atoi(lextoken);
    getToken();
    addValue(ep,year,binfo,atoi(lextoken));
    getToken();
  }
  getToken(); /* Skip DEL */
}

static void sample(void)
{
  int year = atoi(lextoken);
  double t;
  getToken();
  t = atof(lextoken);
  addSample(year,t);
  getToken();
  switch (profile) {
  case PROFILE_MODULE:
  case PROFILE_PRODUCER:
  case PROFILE_CONSTRUCTOR:
  case PROFILE_RETAINER:
    while(lextoken && strcmp(DEL,lextoken)) {
      Entry *ep;
      ep = lookupEntryStr(lextoken);
      getToken();
      if(restriction & PROFILE_BIOGRAPHY)
	values(ep,year);
      else
	value(ep,year);
    } break;
  case PROFILE_LIFETIME:
  case PROFILE_BIOGRAPHY:
    while(lextoken && strcmp(DEL,lextoken)) {
      Entry *ep;
      ep = lookupEntryInt(atoi(lextoken));
      getToken();
      value(ep,year);
    } break;
  default:
    fprintf(stderr,"Unknown profile %d\n",profile);
    abort();
  }
  if (lextoken) getToken();
}


void parseInFile(void)
{
  initlex(inFile);
  getToken();  /* Load first token */
  header();
  do {
    SharedToken oldlextoken = lextoken;
    if(literalOpt("SAMPLE"))  sample();
    if(literalOpt("MARK"))    mark();
    if(literalOpt("COMMENT")) comment();
    if(lextoken && lextoken == oldlextoken) {
      fprintf(stderr,"Illegal token %s at %d\n",lextoken,lexline);
      abort();
    }
  } while (lextoken);
}






  
