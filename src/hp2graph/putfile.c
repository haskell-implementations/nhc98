#include "hp2graph.h"
#include "output.h"
#include "format.h"

Format *output;

static void Prologue(void)
{
  double scale;
  if (eflag) scale = epsfwidth / (double) borderwidth;

  output->Prelude(scale,eflag);

  if (eflag) {
      output->Scale(scale);
  } else if (gflag) {
      output->Portrait();
  } else {
      output->Landscape();
  }
}

static void BorderOutlineBox(void)
{
  outputBox(-1,0.0,0.0,borderwidth,borderheight);
}


static void TitleOutlineBox(void)
{
  outputBox(-1,borderspace,borderheight - titleheight - borderspace
                     ,titlewidth,titleheight);
}

static void TitleText(void)
{
  double x, y;
  char info[100];

  x = borderspace + titletextspace;
  y = borderheight - titleheight - borderspace + titletextspace;

  sprintf(info,"%d %s x %s",(int) areabelow,"bytes"
                           ,(timebyallocation?"samples":"seconds"));


    /* job identifier goes at far left */
  output->Text(JustifyLeft,x,y,TITLE_FONT,jobstring);

    /* area below curve is centered */
  output->Text(JustifyRight,titlewidth,y,TITLE_FONT,info);
}

void outputBox(int fill,double x,double y,double w,double h)
{
  output->PathNew(Closed,4);
  if (fill>= 0)
    output->PathFill(fill);
  output->PathWidth(0.2);
  output->PathMoveTo(x,y);
  output->PathLine(0.0, h);
  output->PathLine(w, 0.0);
  output->PathLine(0.0, -h);
  output->PathStroke();
}

void outputLine(double x,double y,double dx,double dy)
{
  output->PathNew(Open,2);
  output->PathWidth(0.3);
  output->PathMoveTo(x, y);
  output->PathLine(dx, dy);
  output->PathStroke();
}

void outputLineTo(double x,double y,double x2,double y2)
{
  output->PathNew(Open,2);
  output->PathWidth(0.1);
  output->PathMoveTo(x, y);
  output->PathLineTo(x2,y2);
  output->PathStroke();
}

void outputCaret(double x,double y,double d)
{
    output->PathNew(Closed,3);
    output->PathFill(22);
    output->PathWidth(0.5);
    output->PathMoveTo(x - d, y);
    output->PathLine(d, -d);
    output->PathLine(d,  d);
    output->PathStroke();
}

int FontSize(int font)
{
  switch(font) {
  case TITLE_FONT:    return LARGE_FONT;
  case SCALE_FONT:    return NORMAL_FONT;
  case KEY_FONT:      return NORMAL_FONT;
  case SMALLKEY_FONT: return SMALL_FONT;
  }
  return NORMAL_FONT;
}

void putFile(void)
{
  jobstring = argv2str();
  
  Prologue();
  output->Fonts();
  BorderOutlineBox();
  
  TitleOutlineBox();
  TitleText();
  
  curvesInit();
  
  key();
  
  curves();
  axes();
  if (showMark) marks();
  if (showComment) comments();
  
  output->Prologue();
}
