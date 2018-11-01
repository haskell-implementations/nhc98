
#ifndef _DRAWTYPE_H

#define _DRAWTYPE_H


typedef union {
          struct {
            char reserved;
            char red;
            char green;
            char blue;
          } components;
          unsigned int colour;
        } DrawColour;

#define TRANSPARENT ~0
#define COLOUR(r,g,b)  (((unsigned int)(b)<<24)+((unsigned int)(g)<<16)+((unsigned int)(r)<<8))
#define GREY(x)        COLOUR(x,x,x)
#define BLACK          GREY((unsigned int)0)
#define WHITE          GREY((unsigned int)255)



typedef struct {
        int x,y;
      } DrawPoint;

typedef struct {
        DrawPoint lowerLeft;
        DrawPoint upperRight;
      } DrawBox;

typedef struct {
         int magic;
         int major;
         int minor;
         char creator[12];
         DrawBox bounding;
       } DrawFileHeader;

typedef struct {
         int type;
         int size;
       } DrawHeader;

#define DRAW_FONTTABLEOBJECT 0

typedef struct {
        DrawHeader header;
       } DrawFontTableObject;

#define DRAW_TEXTOBJECT 1

typedef struct {
        DrawHeader   header;
        DrawBox      bounding;
        DrawColour   forground;
        DrawColour   background;
        unsigned int fontNumber;
        unsigned int xSize;
        unsigned int ySize;
        DrawPoint    start;
        } DrawTextObject;

#define DRAW_TRANSTEXTOBJECT 12

#define KernedFont  1
#define RightToLeft 2

typedef struct {
       int xfx,xfy;
       int yfx,yfy;
       int tx,ty;
     } TransMat;

typedef struct {
        DrawHeader   header;
        DrawBox      bounding;
        TransMat     trans;
        unsigned int fontFlag;
        DrawColour   forground;
        DrawColour   background;
        unsigned int fontNumber;
        unsigned int xSize;
        unsigned int ySize;
        DrawPoint    start;
        } DrawTransTextObject;

#define TRANS_SIZE 28

#define DRAW_PATHOBJECT 2

#define mitredJoind  0
#define roundJoin    1
#define bevelledJoin 2

#define buttCap      0
#define roundCap     1
#define squareCap    2
#define triCap       3

typedef struct {
        unsigned int joinStyle      :2;
        unsigned int endCapStyle    :2;
        unsigned int startCapStyle  :2;
        unsigned int evenOddWinding :1;
        unsigned int useDashPattern :1;
        unsigned int unused         :8;
        unsigned int triCapWidth    :8;
        unsigned int triCapLength   :8;
      } PathStyle;

typedef struct {
        DrawHeader    header;
        DrawBox       bounding;
        DrawColour    fill;
        DrawColour    outline;
        unsigned int  outlineWidth;
        PathStyle     pathStyle;
        } DrawPathObject;

typedef struct {
        int           type;
        DrawPoint     p[3];
        } DrawPathObject3;

typedef struct {
        int           type;
        DrawPoint     p[2];
        } DrawPathObject2;

typedef struct {
        int           type;
        DrawPoint     p[1];
        } DrawPathObject1;

typedef struct {
        int           type;
        } DrawPathObject0;

#define DRAWPATH_END     0
#define DRAWPATH_MOVE    2
#define DRAWPATH_CLOSE   5
#define DRAWPATH_DRAW    8
#define DRAWPATH_BEIZER  6

#define SIZE_DRAWPATH_END     sizeof(DrawPathObject0)
#define SIZE_DRAWPATH_MOVE    sizeof(DrawPathObject1)
#define SIZE_DRAWPATH_CLOSE   sizeof(DrawPathObject0)
#define SIZE_DRAWPATH_DRAW    sizeof(DrawPathObject1)
#define SIZE_DRAWPATH_BEIZER  sizeof(DrawPathObject3)



typedef struct {
        unsigned int offset;
        unsigned int size;
        unsigned int len[1];
      } DashPattern;

#define MM(n) ((n)*1800)

#endif

