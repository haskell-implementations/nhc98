#include "hp2graph.h"
#include "format.h"
#include "output.h"

/*
 *      Print a string s in width w, escaping characters where necessary.
 */

static void EscapePrint(char* s)

{
    for ( ; *s; s++) {
        if (*s == '(') {                /* escape required */
            fputc('\\', outFile);
        } else if (*s == ')') {
            fputc('\\', outFile);
        }

        fputc(*s, outFile);
    }
}

static void PsScale(double scale)
{
  fprintf(outFile, "%f %f scale\n", scale, scale);
}

static void PsLandscape(void)
{
  fprintf(outFile, "-90 rotate\n");
  fprintf(outFile, "%f %f translate\n", (float)-(borderwidth + START_Y),
                  (float)START_X);
}

static void PsPortrait(void)
{
  fprintf(outFile, "%f %f translate\n", (float) START_X, (float) START_Y);
}

static void StandardSpecialComments(void)
{
    fprintf(outFile, "%%!PS-Adobe-2.0\n");
    fprintf(outFile, "%%%%Title: %s\n", jobstring);
    fprintf(outFile, "%%%%Creator: %s (version %s)\n", programName, VERSION);
    fprintf(outFile, "%%%%CreationDate: %s\n", datedata);
    fprintf(outFile, "%%%%EndComments\n");
}

static void EPSFSpecialComments(double scale)
{
    fprintf(outFile, "%%!PS-Adobe-2.0\n");
    fprintf(outFile, "%%%%Title: %s\n", jobstring);
    fprintf(outFile, "%%%%Creator: %s (version %s)\n", programName, VERSION);
    fprintf(outFile, "%%%%CreationDate: %s\n", datedata);
    fprintf(outFile, "%%%%BoundingBox: 0 0 %d %d\n",
                (int) (borderwidth  * scale + 0.5),
                (int) (borderheight * scale + 0.5) );
    fprintf(outFile, "%%%%EndComments\n");
}

static void PsPrelude(double scale,int embedded)
{
  if (embedded) {
    EPSFSpecialComments(scale);
  } else {
    StandardSpecialComments();
  }
}

static void PsFonts(void)
{
    fprintf(outFile, "/HE%d /Helvetica findfont %d scalefont def\n",
                  TITLE_FONT, FontSize(TITLE_FONT));

    fprintf(outFile, "/HE%d /Helvetica findfont %d scalefont def\n",
                  SCALE_FONT, FontSize(SCALE_FONT));

    fprintf(outFile, "/HE%d /Helvetica findfont %d scalefont def\n",
                  KEY_FONT, FontSize(KEY_FONT));
    fprintf(outFile, "/HE%d /Helvetica findfont %d scalefont def\n",
                  SMALLKEY_FONT, FontSize(SMALLKEY_FONT));
}

static void PsText(Justify just,double x,double y,int font,char *str)
{
  fprintf(outFile, "HE%d setfont\n", font);
  switch(just) {
    case JustifyLeft:
      fprintf(outFile, "%f %f moveto\n", x, y);
      fputc('(', outFile);
      EscapePrint(str);
      fprintf(outFile, ")\n");
      fprintf(outFile, "show\n");
      break;
    case JustifyCenter:
      fputc('(', outFile);
      EscapePrint(str);
      fprintf(outFile, ")\n");
      fprintf(outFile, "dup stringwidth pop\n");
      fprintf(outFile, "2 div\n");
      fprintf(outFile, "%f\n", x);
      fprintf(outFile, "exch sub\n");
      fprintf(outFile, "%f moveto\n", y);
      fprintf(outFile, "show\n");
      break;
    case JustifyRight:
      fputc('(', outFile);
      EscapePrint(str);
      fprintf(outFile, ")\n");
      fprintf(outFile, "dup stringwidth pop\n");
      fprintf(outFile, "%f\n", x);
      fprintf(outFile, "exch sub\n");
      fprintf(outFile, "%f moveto\n", y);
      fprintf(outFile, "show\n");
      break;
    case JustifyVertical:
      fprintf(outFile, "gsave\n");
      fputc('(', outFile);
      EscapePrint(str);
      fprintf(outFile, ")\n");
      fprintf(outFile, "dup stringwidth pop\n");
      fprintf(outFile, "%f\n", y);
      fprintf(outFile, "exch sub\n");
      fprintf(outFile, "%f exch\n", x);
      fprintf(outFile, "translate\n");
      fprintf(outFile, "90 rotate\n");
      fprintf(outFile, "0 0 moveto\n");
      fprintf(outFile, "show\n");
      fprintf(outFile, "grestore\n");
  }
}

static void PsPrologue(void)
{
  fprintf(outFile, "showpage\n");
}

static int PathColour;
static double PathWidth;
static int PsKind;

static void PsPathNew(Kind kind,int size)
{
  size = size; /* Ignore size */
  PathColour = -1;
  PathWidth = -1;
  PsKind = kind;
  fprintf(outFile, "newpath\n");
}

static void PsPathMoveTo(double x, double y)
{
  fprintf(outFile, "%f %f moveto\n", x, y);
}

static void PsPathLineTo(double x, double y)
{
  fprintf(outFile, "%f %f lineto\n", x, y);
}

static void PsPathLine(double x, double y)
{
  fprintf(outFile, "%f %f rlineto\n", x, y);
}

static void PsPathFill(int fill)
{
    PathColour = fill;
}

static void PsPathWidth(double width)
{
    PathWidth = width;
}

static double colours[] =
 { 0.3, 0.6, 0.9, 0.2, 0.5, 0.8, 0.1, 0.4, 0.7, 0.0
 , 0.3, 0.6, 0.9, 0.2, 0.5, 0.8, 0.1, 0.4, 0.7, 0.0
 , 0.3, 0.6
 };

static void PsPathStroke(void)
{
  if(PsKind == Closed)
    fprintf(outFile, "closepath\n");

  if(PathWidth >= 0)
    fprintf(outFile, "%f  setlinewidth\n",PathWidth);

  if(PathColour>=0) {
    fprintf(outFile, "gsave\n");

    fprintf(outFile, "%f setgray\n", colours[PathColour%22]);
    fprintf(outFile, "fill\n");

    fprintf(outFile, "grestore\n");
  }
  fprintf(outFile, "stroke\n");
}

Format PsOutput =
 {".ps"
 ,PsPrelude
 ,PsPrologue
 ,PsScale
 ,PsLandscape
 ,PsPortrait
 ,PsFonts
 ,PsText

 ,PsPathNew
 ,PsPathMoveTo
 ,PsPathLineTo
 ,PsPathLine
 ,PsPathFill
 ,PsPathWidth
 ,PsPathStroke
 };
