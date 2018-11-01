#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HP_SUFFIX ".hp"
#define AUX_SUFFIX ".aux"



/* types */

typedef unsigned int UInt;
typedef char *SharedToken;
typedef char *Token;

typedef union {
  struct {
    unsigned int created:9;
    unsigned int first:9;
    unsigned int last:9;
    unsigned int used:5;
  } parts;
  UInt all;
} BInfo;

#define PROFILE_MODULE        1
#define PROFILE_PRODUCER      2
#define PROFILE_CONSTRUCTOR   4
#define PROFILE_RETAINER      8
#define PROFILE_LIFETIME     16
#define PROFILE_KIND         32
#define PROFILE_BIOGRAPHY   128
#define PROFILE_FIRST       256
#define PROFILE_SCC         512

#define BIO_DRAG   1
#define BIO_LAG    2
#define BIO_USE    4
#define BIO_VOID   8
#define BIO_ALL    (BIO_DRAG|BIO_LAG|BIO_USE|BIO_VOID)

/* main.c */

extern FILE *inFile;
extern FILE *outFile;
extern FILE *auxFile;
extern UInt *yUInts;
extern int eflag;
extern int gflag;
extern int epsfwidth;
extern int showMark;
extern int showComment;
extern int showExploded;
extern int showSample;
extern double areabelow;

extern char *programName;

/* mark.c */

typedef double Mark;

extern void addMark(double t);
extern int marksize;
extern Mark *markdata;

/* mem.c */

extern Token clone(SharedToken token);
extern char *append(char *s1, char *s2);
extern void *extend(void *p, int s);
extern void *new(int s);
extern void *xmalloc(int s);

/* entry.c */

typedef union {
  BInfo binfo;
  Token token;
} Key;

typedef struct VALUE{
  struct VALUE *next;
  int census;
  BInfo binfo;
  UInt size;
} Value;

typedef struct ENTRY {
  struct ENTRY *next;
  Key key;
  Value *value;
  double area;
  UInt height;
} Entry;

#define ENTRYMAX 513
extern int entrysize; 
extern Entry **entrydata;

extern Entry *newEntry(Key key, Entry *next);
extern Entry *lookupEntryStr(SharedToken s);
extern Entry *lookupEntryInt(UInt i);

void addValue(Entry *entry, int census, BInfo binfo, UInt size);
extern void freeEntries(Entry *ep);
extern void freeEntriesT(void);
extern Entry *allEntries(void);

/* area.c */

extern double areaID(double *xs, UInt *ys, int size);
extern int areaEntries(Entry *ep);
extern double areaAll(void);

/* sort.c */

extern void sortEntries(void);

/* sample.c */

typedef double Sample;

extern void addSample(int year, double t);
extern int samplesize;
extern Sample *sampledata;

/* comment.c */

typedef struct {
  double time;
  Token comment;
} Comment;

extern void addComment(double t, Token str);
extern int commentsize;
extern Comment *commentdata;

/* trcelement.c */

extern void topkeys(int sorted);
extern void trcelement(int threshold);


/* lex.c */
extern void initlex(FILE *fp);
extern SharedToken getToken(void);
extern SharedToken getString(void);
extern SharedToken lextoken;
extern int   lexline; /* Line number, may point one line to far */

/* parse.c */

extern int profile;
extern int restriction;

extern void literal(char *lit);
extern void parseInFile(void);

/* bioStatic.c */

extern void bioStatic(int bio,int low,int high);

/* bioBio.c */

extern Value *vector2value(UInt *vector,Entry *ep, Value *ovp);
extern void bioBio(int keepall, int bio, int low, int high);

/* life.c */

extern double lifeRestrictionLow;
extern double lifeRestrictionHigh;
extern void life(int keepall, int bio, int low, int high);

/* job.c */

extern int timebyallocation;
void checkForMinusI(char *s);

typedef Token Argv;
typedef Token Date;

extern Date datedata;

extern void addArgv(Argv s);
extern int str2bio(char *s);
extern int decodeBioRestriction(void);
extern void changeBioRestriction(int bioRestriction);
extern char *argv2str(void);

extern void str2life(char *s,int *low, int *high);
extern void decodeLifeRestriction(int *low,int *high);
extern void changeLifeRestriction(int low, int high);

extern char profile2char(int profile);
extern void changeProfile(int profile);

