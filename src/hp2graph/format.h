

typedef enum {JustifyLeft,JustifyRight,JustifyCenter,JustifyVertical} Justify;

typedef enum {Closed,Open} Kind;

typedef struct {
 char *suffix;
 void (*Prelude)(double,int);
 void (*Prologue)(void);
 void (*Scale)(double scale);
 void (*Landscape)(void);
 void (*Portrait)(void);
 void (*Fonts)(void);
 void (*Text)(Justify,double,double,int,char *);
 void (*PathNew)(Kind,int);
 void (*PathMoveTo)(double,double);
 void (*PathLineTo)(double,double);
 void (*PathLine)(double,double);
 void (*PathFill)(int);
 void (*PathWidth)(double);
 void (*PathStroke)(void);

} Format;

extern Format DrawOutput;
extern Format PsOutput;
extern Format MifOutput;

extern Format *output;
