#include "hp2graph.h"
#include "output.h"
#include "format.h"

#define MIN_SAMPLESIZE    4 /* Minimum number of samples to produce a heap profile */
#define THRESHOLD_PERCENT 1

int pflag = 0;          /* read auxiliary file                  */
int eflag = 0;          /* scaled EPSF                          */
int dflag = 0;          /* sort by standard deviation           */
int gflag = 0;          /* output suitable for previewer        */
int showMark = 1;
int showComment = 1;
int showSample = 1;
int showExploded = 0;
int verbose = 0;

int threshold_percent = THRESHOLD_PERCENT;
int epsfwidth;
UInt *yUInts;
double areabelow;

int hpProfile;

int filter;             /* hp2graph used as a filter        */
FILE *inFile;
FILE *outFile;
FILE *auxFile;

char *inName;
char *outName;
char *auxName;
char *programName;

typedef enum {POINTS, INCHES, MILLIMETRES} pim;

static pim Units(char *wstr)
{
  int i;

  i = strlen(wstr) - 2;
  if (wstr[i] == 'p' && wstr[i+1] == 't') {
    return POINTS;
  } else if (wstr[i] == 'i' && wstr[i+1] == 'n') {
    return INCHES;
  } else if (wstr[i] == 'm' && wstr[i+1] == 'm') {
    return MILLIMETRES;
  } else {
    return POINTS;
  }
}


static double WidthInPoints(char *wstr)
{
  double result;

  result = atof(wstr);
  switch (Units(wstr)) {
  case INCHES:
    result *= 72;
    break;
  case MILLIMETRES:
    result = (double)(result*2.834646);
    break;
  case POINTS:
  default: ;
  }
  return result;
}

static void printSample(int);

int main(int argc, char *argv[])
{
  int i = 1;
  int bioRestriction = 0;
  int lifeRestriction = 0;
  int lifetimeHigh = -1;
  int lifetimeLow = -1;
  int fewFlag = 0;

  programName = argv[0];

  while (i < argc && argv[i][0] == '-') {
    switch(argv[i][1]) {
      case '\0':
	filter++;
	goto nextarg;
      case '0':
	fewFlag++;
	goto nextarg;
      case 'v':
	verbose++;
	goto nextarg;
      case 't':
	threshold_percent = atoi(&argv[i][2]);
	if(verbose) fprintf(stderr,"threshold_percent = %d\n",threshold_percent);
	goto nextarg;
      case 'p':
	pflag++;
	if(argv[i][2]) auxName = &argv[i][2];
	if(verbose) fprintf(stderr,"auxName = %s\n",auxName?auxName:"<>");
	goto nextarg;
      case 'e':
	eflag++;
	epsfwidth = WidthInPoints(&argv[i][2]);
	goto nextarg;
      case 'd':
	dflag++;
	goto nextarg;
      case 'x':
	showExploded++;
	goto nextarg;
      case 'c':
	showComment = 0;
	goto nextarg;
      case 'y':
	showSample = 0;
	goto nextarg;
      case 'm':
	showMark = 0;
	goto nextarg;
      case 'b':
	if(!hpProfile && !argv[i][2])
	  hpProfile = PROFILE_BIOGRAPHY;
	else 
	  bioRestriction |= str2bio(&argv[i][2]);
	goto nextarg;
      case 'l':
	if(!hpProfile && !argv[i][2])
	  hpProfile = PROFILE_LIFETIME;
	else {
	  lifeRestriction = 1;
	  str2life(&argv[i][2],&lifetimeLow,&lifetimeHigh);
	}
	goto nextarg;
      case 'f':
	if(output) {
	  fprintf(stderr,"Only one -f allowed!\n");
	  exit(-1);
	} else if (!strcmp(&argv[i][2],"draw")) {
	  output = &DrawOutput;
	} else if (!strcmp(&argv[i][2],"ps")) {
	  output = &PsOutput;
	} else if (!strcmp(&argv[i][2],"mif")) {
	  output = &MifOutput;
	} else {
	  fprintf(stderr,"Unrecognized format %s!\n",&argv[i][2]);
	  exit(-1);
	}
	goto nextarg;
#if 0
      case '?':
      case 'h':
      default:
	Usage();
#endif
      }
  nextarg: ;
    i++;
  }

  if(!output) {
    output = &PsOutput;
  }

  if(gflag && output != &PsOutput) {
    fprintf(stderr,"'-g' only allowed for postscript output.");
    exit(-1);
  }

  if (i<argc) {
    char *baseName = clone(argv[i]);
    char *suff = strrchr(baseName,'.');
    if(suff && !strcmp(suff,HP_SUFFIX)) 
      *suff = 0;
    inName = append(baseName, HP_SUFFIX);
    if(!(inFile = fopen(inName,"r"))) {
      fprintf(stderr,"Cannot open %s for input.",inName);
      exit(-1);
    }
    
    outName  = append(baseName, output->suffix);
    if(!(outFile = fopen(outName,"w"))) {
      fprintf(stderr,"Cannot open %s for output.",outName);
      exit(-1);
    }
    
    if (!auxName)
      auxName = append(baseName,AUX_SUFFIX);
    
  } else { /* filter */
    filter = 1;
    inName = "<stdin>";
    outName = "<stdout>";
    inFile = stdin;
    outFile = stdout;
    if (!auxName)		/* amended 19.03.1999, malcolm */
      auxName = "stdin.aux";
  }
  
  if(pflag) {
    if(!(auxFile = fopen(auxName,"r"))) {
      fprintf(stderr,"Cannot open %s for input.",auxName);
      exit(-1);
    }
  } else {
    if(!(auxFile = fopen(auxName,"w"))) {
      fprintf(stderr,"Cannot open %s for output.",auxName);
      exit(-1);
    }
  }

  if(!(entrydata = (Entry **)new(ENTRYMAX*sizeof(Entry *)))) {
    fprintf(stderr,"No space for entry data in main.");
    abort();
  }  

  parseInFile();

  if(!(yUInts = (UInt *)new(samplesize*sizeof(UInt)))) {
    fprintf(stderr,"No space for census data in main.");
    abort();
  }  

  if(hpProfile) {
    if(profile == PROFILE_BIOGRAPHY && hpProfile == PROFILE_LIFETIME) {
      profile = hpProfile;
      changeProfile(profile);
    } else if(profile == PROFILE_LIFETIME && hpProfile == PROFILE_BIOGRAPHY) {
      profile = hpProfile;
      changeProfile(profile);
    } else {
      fprintf(stderr,"Sorry , can not change profile type for this hp-file.");
      exit(-1);
    }
  }

  switch (profile) {
  case PROFILE_MODULE:
  case PROFILE_PRODUCER:
  case PROFILE_CONSTRUCTOR:
    if(restriction & PROFILE_BIOGRAPHY) {
      if(bioRestriction) {
	updateBioRestriction(bioRestriction);
      } else {
	bioRestriction = decodeBioRestriction();
      }
      if(lifeRestriction) {
	updateLifeRestriction(lifetimeLow,lifetimeHigh);
      } else {
	decodeLifeRestriction(&lifetimeLow,&lifetimeHigh);
      }
      bioStatic(bioRestriction,lifetimeLow,lifetimeHigh);
      bioRestriction = 0;
      lifeRestriction = 0;
    } break;
  case PROFILE_RETAINER:
    break;
  case PROFILE_BIOGRAPHY:
  case PROFILE_LIFETIME:
    if(lifeRestriction) {
      updateLifeRestriction(lifetimeLow,lifetimeHigh);
    } else {
      decodeLifeRestriction(&lifetimeLow,&lifetimeHigh);
    }
    if(bioRestriction) {
      updateBioRestriction(bioRestriction);
    } else {
      bioRestriction = decodeBioRestriction();
    }
    if(profile== PROFILE_BIOGRAPHY)
      bioBio(!(restriction & PROFILE_RETAINER),(bioRestriction?bioRestriction:BIO_ALL),lifetimeLow,lifetimeHigh);
    else
      life(!(restriction & PROFILE_RETAINER),(bioRestriction?bioRestriction:BIO_ALL),lifetimeLow,lifetimeHigh);
    lifeRestriction = 0;
    bioRestriction = 0;
    break;
  default:
    fprintf(stderr,"Unknown profile %d\n",profile);
    abort();
  }

  if(bioRestriction)
    fprintf(stderr,"Not enough informatin in %d to use bioraphical filtering.",outName);      
  if(lifeRestriction)
    fprintf(stderr,"Not enough informatin in %d to use life time filtering.",outName);      

  { Entry *ep = allEntries();
    int i=0;
    entrysize = areaEntries(ep);
    if(entrysize >= ENTRYMAX) 
      free(entrydata);
      if(!(entrydata = (Entry **)new(entrysize*sizeof(Entry *)))) {
	fprintf(stderr,"No space to extend entry data in main.");
	abort();
      }
    while(ep) {
      entrydata[i++] = ep;
      ep = ep->next;
    }
    if(i!=entrysize) {
      fprintf(stderr,"Inconsistent in main %d != %d.",i,entrysize);
      abort();
    }      
  }

  if(profile != PROFILE_LIFETIME)
    sortEntries();

  trcelement(threshold_percent);

#if 0
  if (dflag) Deviation();
#endif

  initKeys(); /* prepare key colours so that useAuxFlag can reoder them */

  if(samplesize<MIN_SAMPLESIZE) {
    if(!fewFlag || verbose) {
      if(samplesize) 
	fprintf(stderr,"Only %d",samplesize);
      else
	fprintf(stderr,"No");
      fprintf(stderr," samples in profile read from %s, need at least %d to produce a decent profile.\n"
	      ,inName,MIN_SAMPLESIZE);
    }
    if(samplesize) {
      if(!fewFlag) {
	fprintf(stderr,"Use -0 to force a heap profile anyway.\n");
	exit(-1);
      }
    } else {
      fprintf(stderr,"There is no way to produce a profile from zero samples!\n");
      exit(-1);
    }
  }

  if(pflag)
    useAuxFile();

  areabelow = areaAll();

  topkeys(!pflag);

  dimensions();

  putFile();

  if(!pflag)
    writeAuxFile();

  return(0);
}


/*   For debugging */

static void printKeyStr(Key k)
{
  printf("%s",k.token);
}

static void printKeyInt(Key k)
{
  printf("%d",k.binfo.all);
}


static void printSample(int late)
{
  void (*pK)(Key) ;
  int i;

  for(i=0; i<samplesize; i++)
    printf("SAMPLE %2d: time = %f\n",i,sampledata[i]);

  for(i=0; i<marksize; i++)
    printf("MARK: time = %f\n",markdata[i]);

  for(i=0; i<commentsize; i++)
    printf("COMMENT: time = %f \"%s\"\n",commentdata[i].time,commentdata[i].comment);


  switch (profile) {
  case PROFILE_MODULE:
  case PROFILE_PRODUCER:
  case PROFILE_CONSTRUCTOR:
  case PROFILE_RETAINER:
    pK = printKeyStr;
    break;
  case PROFILE_LIFETIME:
  case PROFILE_BIOGRAPHY:
    pK = late?printKeyStr:printKeyInt;
    break;
  default:
    fprintf(stderr,"Unknown profile %d\n",profile);
    abort();
  }

  for(i=0; i<ENTRYMAX; i++) {
    Entry *ep;
    if(entrydata[i])
      printf("--------------------------------------------------- %3d\n",i);
    for(ep = entrydata[i]; ep; ep = ep->next) {
      Value *vp;
      pK(ep->key);
      printf("\n");
      for(vp = ep->value; vp; vp = vp->next)
	printf("  census = %2d info = %8x size = %d\n",vp->census,vp->binfo.all,vp->size);
    }
  }
}
      

