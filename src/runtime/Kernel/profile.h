#ifndef _PROFILE_H
#define _PROFILE_H



#define TABLELOG  10

typedef union {
  Int  i;
  char *s;
#ifdef DYNAMIC
  Retainer *r;
#endif
} Key;

typedef struct COUNT {
  struct COUNT *next;
  int           key_i;
  int           size;
} Count;

typedef struct ELEMENT {
  struct ELEMENT *next;
  Key            key;
  Count          *count;
} Element;


#define BIO_DRAG   1
#define BIO_LAG    2
#define BIO_USE    4
#define BIO_VOID   8


typedef struct RESTRICTION {
   struct RESTRICTION *next;
   int           address;
   char          *str;
   } Restriction;


extern Restriction *restriction[9]; /* Only 1 2 4 and 8 is used */
extern int    RestrictionKind;
extern int    lifetimeLow,lifetimeHigh;
extern int    PrintUse;
extern int    TotalUse;
extern int    TotalLive;



extern void profile_start(int argc,char **argv);
extern void profile_stop(NodePtr hp);
extern void profile_again(int argc,char **argv);
extern void addRestrictions(char *restrictions,int kind);



#ifdef DYNAMIC
extern int dynamicRestrictions(Info *info);
extern int RestrictionBiography;
extern Retainer     *RetainerTable[];
extern void printTableRetainer(FILE *fp);
extern int keepFunction(char *function);
extern int memberAdr(int keep,char *function,Retainer *rinfo);
extern void saveLastUse(Info *info);
#endif


extern int hashInt(Int);


#endif
