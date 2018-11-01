#include "hp2graph.h"
#include "format.h"
#include "output.h"
#include "draw.h"

#define USE_FONT 1

static double xOffset = 30;
static double yOffset = 30;
static double drawscale = 0.4;
static int landscape = 1;

static void DrawScale(double f)
{
  drawscale = f;
}

static void DrawPortrait(void)
{
  landscape = 0;
}

static void DrawLandscape(void)
{
  landscape = 1;
}

static DrawPoint ll;
static DrawPoint ur;

static void pointZero(void)
{
  ll.x = ll.y =  2000000000;
  ur.x = ur.y = -2000000000;
}

static DrawPoint pointInc(DrawPoint p)
{
  p.x++;
  p.y++;
  return p;
}

static DrawPoint pointBound(DrawPoint p)
{
  if(p.x < ll.x)
    ll.x = p.x;
  if(p.y < ll.y)
    ll.y = p.y;
  if(p.x > ur.x)
    ur.x = p.x;
  if(p.y > ur.y)
    ur.y = p.y;
  return p;
}

static DrawPoint point(double x,double y)
{
  DrawPoint p;

  if(landscape) {
    p.x = (int)MM((xOffset+x)*drawscale);
    p.y = (int)MM((yOffset+y)*drawscale);
  } else {
    p.x = (int)MM((yOffset+y)*drawscale);
    p.y = (int)MM((xOffset+x)*drawscale);
  }
  return pointBound(p);
}

static void DrawPrelude(double scale,int embedded)
{
  DrawFileHeader dfh;

  dfh.magic = 'D' | ('r'<<8) | ('a'<<16) | ('w'<<24);
  dfh.major = 201;
  dfh.minor = 0;
  strncpy(dfh.creator,"hp2draw     ",12);

  dfh.bounding.lowerLeft  = point(0.0,0.0);
  dfh.bounding.upperRight = point(291.0,211.0);

  fwrite(&dfh,sizeof(dfh),1,outFile);
}

#define MAXPATHSIZE 1024

static char *DrawBuffer;
static int   DrawBufferSize;
static char *DrawBufferPos;
static double DrawPosX,DrawPosY;
static Kind DrawKind;

#ifndef max
#define max(a,b) ((a)>(b)?(a):(b))
#endif

static void buffer(void *object,int size)
{
  if(size+DrawBufferPos >= &DrawBuffer[DrawBufferSize]) {
    int used = DrawBufferPos-DrawBuffer;
    DrawBufferSize+=max(size,MAXPATHSIZE);
    DrawBuffer = realloc(DrawBuffer,DrawBufferSize);
    if(!DrawBuffer) {
      fprintf(stderr,"DrawBuffer couldn't grow to %d bytes!\n",DrawBufferSize);
      exit(-1);
    }
    DrawBufferPos = &DrawBuffer[used];
  }
  memcpy(DrawBufferPos,object,size);
  DrawBufferPos += size;
}

#define BUFFER(object)           buffer(&object,sizeof(object))

#define BUFFERSIZE(object,size) buffer(&object,size)

/* Draw Path */

static void DrawPathNew(Kind kind,int size)
{
  DrawPathObject dpo;

  size = size; /* Don't care */

  DrawBufferPos = DrawBuffer;
  DrawPosX = DrawPosY = 0;
  DrawKind = kind;

  dpo.header.type = DRAW_PATHOBJECT;
  dpo.header.size = 0;  /* size not known yte */
  dpo.bounding.lowerLeft = point(0.0,0.0);
  dpo.bounding.upperRight = point(0.0,0.0);
  dpo.fill.colour = TRANSPARENT;
  dpo.outline.colour = BLACK;
  dpo.outlineWidth = 0;
  dpo.pathStyle.joinStyle = mitredJoind;
  dpo.pathStyle.endCapStyle = buttCap;
  dpo.pathStyle.startCapStyle = buttCap;
  dpo.pathStyle.evenOddWinding = 0;
  dpo.pathStyle.useDashPattern = 0;
  dpo.pathStyle.unused = 0;
  dpo.pathStyle.triCapWidth = 0;
  dpo.pathStyle.triCapLength = 0;
  BUFFER(dpo);
  pointZero();

}

static void DrawPathWidth(double lw)
{
  ((DrawPathObject *)DrawBuffer)->outlineWidth = (int)(16*lw);  /* ??? */
}

static unsigned int colours[] = {
   COLOUR(  0,  0,255), COLOUR(  0,255,  0), COLOUR(255,  0,  0), COLOUR(127,  0,255),
   COLOUR(  0,  0,127), COLOUR(  0,127,  0), COLOUR(200,  0,  0), COLOUR(127,  0,127),
   COLOUR(127,  0,255), COLOUR(127,127,  0), COLOUR(127,255,255), COLOUR(127,127,127),
   COLOUR(255,255,255), COLOUR(  0,255,  0), COLOUR(  0,  0,255), COLOUR(255,  0,  0),
   COLOUR(  0,255,  0), COLOUR(  0,  0,  0)
 };

static void DrawPathFill(int fill)
{
  ((DrawPathObject *)DrawBuffer)->fill.colour = colours[fill%22];
}

static void DrawPathEnd(void)
{
  DrawPathObject0 end;
  end.type =  DRAWPATH_END;
  BUFFER(end); 
}

static void DrawPathStroke(void)
{
  if(DrawKind == Closed) {
    DrawPathObject0 close;  
    close.type =  DRAWPATH_CLOSE;
    BUFFER(close); 
  }
  DrawPathEnd();
  ((DrawPathObject *)DrawBuffer)->header.size = (DrawBufferPos - DrawBuffer);
  ((DrawPathObject *)DrawBuffer)->bounding.lowerLeft = ll;
  ((DrawPathObject *)DrawBuffer)->bounding.upperRight = pointInc(ur);
  fwrite(DrawBuffer,DrawBufferPos - DrawBuffer,1,outFile);
}

static void DrawPathLine(double x,double y)
{
  DrawPathObject1 draw;
  DrawPosX += x;
  DrawPosY += y;
  draw.type = DRAWPATH_DRAW;
  draw.p[0] = point(DrawPosX,DrawPosY);
  BUFFER(draw);
}

static void DrawPathLineTo(double x,double y)
{
  DrawPathObject1 draw;
  DrawPosX = x;
  DrawPosY = y;
  draw.type = DRAWPATH_DRAW;
  draw.p[0] = point(DrawPosX,DrawPosY);
  BUFFER(draw);
}

static void DrawPathMoveTo(double x,double y)
{
  DrawPathObject1 draw;
  DrawPosX = x;
  DrawPosY = y;
  draw.type = DRAWPATH_MOVE;
  draw.p[0] = point(x,y);
  BUFFER(draw);
}


/* Text */

static void DrawTextNew(double x,double y, int font)
{
  DrawTextObject dto;

  DrawBufferPos = DrawBuffer;
  DrawPosX = DrawPosY = 0;

  dto.header.type = DRAW_TEXTOBJECT;
  dto.header.size = 0;  /* size not known yet */
  dto.bounding.lowerLeft = point(0.0,0.0);
  dto.bounding.upperRight = point(0.0,0.0);
  dto.forground.colour = BLACK;
  dto.background.colour = WHITE;
  dto.fontNumber = USE_FONT;
  dto.xSize = dto.ySize = 640*FontSize(font);
  dto.start = point(x,y);
  BUFFER(dto);
  pointZero();
}


static void DrawTextAdd(char *str)
{
  BUFFERSIZE(str[0],strlen(str));
}

TransMat idTrans(void) 
{
  TransMat t;
  t.xfx = t.yfy = 1<<16;
  t.xfy = t.yfx = 0<<16;
  t.tx = t.ty = 0;
  return t;
}

TransMat rot90Trans(TransMat x)
{
  x.xfx =  0<<16;
  x.xfy =  1<<16;

  x.yfx = -1<<16;
  x.yfy =  0<<16;

  return x;
}

  

static void DrawTextRotate90(void)
{
  DrawTransTextObject *dto = (DrawTransTextObject *)DrawBuffer;
  if(dto->header.type == DRAW_TEXTOBJECT) {
    char *dst = DrawBufferPos + TRANS_SIZE;
    char *src = DrawBufferPos;
    while(src >= DrawBuffer)
      *dst-- = *src--;
    dto->header.type = DRAW_TRANSTEXTOBJECT;
    dto->fontFlag = 0;
    dto->trans = idTrans();
    DrawBufferPos += TRANS_SIZE;
  }
  dto->trans = rot90Trans(dto->trans);
}

static void DrawTextStroke(void)
{
  char str[4];
  int pad = (unsigned int)DrawBufferPos;
  DrawTextObject *dto = (DrawTextObject *)DrawBuffer;
  DrawTextObject *dtto = (DrawTextObject *)DrawBuffer;

  str[0] = str[1] = str[2] = str[3] = 0;

  BUFFERSIZE(str[0],4-(3 & pad));
  
  dto->header.size = (DrawBufferPos - DrawBuffer);
  if(dto->header.type == DRAW_TRANSTEXTOBJECT)
    dtto = (DrawTextObject *)(DrawBuffer+TRANS_SIZE);
  dto->bounding.lowerLeft.x  = dtto->start.x +                                         0;
  dto->bounding.lowerLeft.y  = dtto->start.y +                                         0;
  dto->bounding.upperRight.x = dtto->start.x +                                         1*2560;
  dto->bounding.upperRight.y = dtto->start.y + strlen(DrawBuffer+sizeof(DrawTextObject))*2560;
  fwrite(DrawBuffer,DrawBufferPos - DrawBuffer,1,outFile);
}

/* Font Table */

static void DrawFontTableNew(void)
{
  DrawFontTableObject dfto;

  DrawBufferPos = DrawBuffer;
  DrawPosX = DrawPosY = 0;

  dfto.header.type = DRAW_FONTTABLEOBJECT;
  dfto.header.size = 0;  /* size not known yte */
  BUFFER(dfto);
  pointZero();
}

static void DrawFontTableAdd(unsigned char fontnumber, char *fontname)
{
  char str[4];
  int pad = (unsigned int)DrawBufferPos;
  BUFFERSIZE(fontnumber,1);
  BUFFERSIZE(fontname[0],strlen(fontname));
  str[0] = str[1] = str[2] = str[3] = 0;
  BUFFERSIZE(str[0],4-(3 & pad));

}


static void DrawFontTableStroke(void)
{
  DrawFontTableObject *dfto = (DrawFontTableObject *)DrawBuffer;

  dfto->header.size = (DrawBufferPos - DrawBuffer);
  fwrite(DrawBuffer,DrawBufferPos - DrawBuffer,1,outFile);
}

static void DrawFonts(void)
{
    DrawFontTableNew();
    DrawFontTableAdd(USE_FONT,"Homerton.Medium");
    DrawFontTableStroke();
}

static void DrawText(Justify just,double x,double y,int font,char *str)
{
  switch(just) {
    case JustifyLeft:
      break;
    case JustifyCenter:
      x -= stringSize(str)/2;
      break;
    case JustifyRight:
      x -= stringSize(str);
      break;
    case JustifyVertical:
      y -= stringSize(str);
      break;
  }
  DrawTextNew(x,y,font);
  DrawTextAdd(str);
  if(just == JustifyVertical)
    DrawTextRotate90();
  DrawTextStroke();
}

static void DrawPrologue(void)
{
  return;
}


Format DrawOutput =
 {".draw"
 ,DrawPrelude
 ,DrawPrologue
 ,DrawScale
 ,DrawLandscape
 ,DrawPortrait
 ,DrawFonts
 ,DrawText

 ,DrawPathNew
 ,DrawPathMoveTo
 ,DrawPathLineTo
 ,DrawPathLine
 ,DrawPathFill
 ,DrawPathWidth
 ,DrawPathStroke
 };
