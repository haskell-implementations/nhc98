/* 
 * Things that can be altered.
 */

#define HP_SUFFIX           ".hp"  /* input file                             */
#define AUX_SUFFIX          ".aux" /* auxiliary file                         */

#define THRESHOLD_PERCENT        1 /* all values below 1% insignificant      */
#define MAXKEY                  20 /* show top 20 bands, grouping excess     */ 


#define TITLE_FONT              0
#define SCALE_FONT              1
#define KEY_FONT                2
#define SMALLKEY_FONT           3

#define LARGE_FONT              12  /* Helvetica 12pt                        */
#define NORMAL_FONT             10  /* Helvetica 10pt                        */
#define SMALL_FONT               6  /* Helvetica  6pt                        */

#define BORDER_HEIGHT        432  /* page border box 432pt (6 inches high) */
#define BORDER_WIDTH         648  /* page border box 648pt (9 inches wide) */
#define BORDER_SPACE           5  /* page border space                      */
#define BORDER_RADIUS          8  /* corner radius is 8pt                  */

#define LINE_THICK             (float)0.5  /* page border line thickness 0.5pt      */

#define TITLE_HEIGHT          20  /* title box is 20pt high                 */
#define TITLE_TEXT_FONT LARGE_FONT  /* title in large font                   */
#define TITLE_RADIUS           4  /* corner radius is 8pt                  */
#define TITLE_TEXT_SPACE       6  /* space between title text and box      */


#define AXIS_THICK             (float)0.5  /* axis thickness 0.5pt                  */
#define AXIS_TEXT_SPACE          6  /* space between axis legends and axis   */
#define AXIS_TEXT_FONT NORMAL_FONT  /* axis legends in normal font           */
#define AXIS_Y_TEXT_SPACE       35  /* space for y axis text                 */ 

#define KEY_BOX_WIDTH           14  /* key boxes are 14pt high               */

#define SMALL_JOB_STRING_WIDTH  35  /* small title for 35 characters or less */
#define BIG_JOB_STRING_WIDTH    80  /* big title for everything else         */ 

#define GRAPH_X0        (AXIS_Y_TEXT_SPACE + (2 * BORDER_SPACE)) 
#define GRAPH_Y0        (AXIS_TEXT_FONT + (2 * BORDER_SPACE)) 


/*
 * Things that should be left well alone.
 */



#define START_X  72     /* start  72pt (1 inch)   from left   (portrait)  */
#define START_Y 108     /* start 108pt (1.5 inch) from bottom (portrait)  */

#define IDENT_LENGTH            256
#define STRING_LENGTH           256
#define NUMBER_LENGTH            32

#define NCHUNK                   16 

#define VERSION                 "0.1"           /* as of 960426           */

#define max(x,y) ((x) > (y) ? (x) : (y))        /* not everyone has this */
#define min(x,y) ((x) < (y) ? (x) : (y))        /* not everyone has this */



/* dimensions.c */

extern double borderheight;
extern double borderwidth;
extern double borderspace;
extern double borderradius;

extern double titlewidth;
extern double titleheight;
extern double titleradius;
extern double titletextspace;

extern double linethick;

extern double graphx0;
extern double graphy0;


extern double xrange;
extern double yrange;
extern double graphwidth;
extern double graphheight;

extern double stringSize(char *s);
extern void dimensions(void);

/* scale.c */

extern double maxCombinedHeight(void);

/* putfile.c */

extern char *jobstring;

extern void putFile(void);
extern void outputBox(int fill,double x,double y,double w,double h);
extern void outputLine(double x,double y,double dx,double dy);
extern void outputLineTo(double x,double y,double x2,double y2);
extern void outputCaret(double x,double y,double d);
extern int fontSize(int font);

/* curves.c */

extern double xpage(double x);
extern double ypage(double y);
extern void curvesInit(void);
extern void curves(void);
extern void comments(void);
extern void marks(void);

/* key.c */

extern int keycolour[MAXKEY+1];
extern void key(void);
extern void initKeys(void);

/* axes.c */

void axes(void);

/* aux.c */

extern double auxxrange;
extern double auxyrange;

extern void useAuxFile(void);
extern void writeAuxFile(void);
