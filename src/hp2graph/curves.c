#include "hp2graph.h"
#include "output.h"
#include "format.h"

static double* x;                                /* x and y values  */
static double* y;
static double* py;                               /* previous y values */

void curvesInit(void)
{
  int i;
  double sf;

  x  =  (double*) xmalloc(samplesize * sizeof(double));
  y  =  (double*) xmalloc(samplesize * sizeof(double));
  py =  (double*) xmalloc(samplesize * sizeof(double));
  
  sf = graphwidth / xrange;
  
  for (i = 0; i < samplesize; i++) {
    x [ i ] = sampledata[ i ] * sf;
    y [ i ] = 0;
    py[ i ] = 0;
  }
}


/*
 *      Map virtual x coord to physical x coord
 */

double xpage(double x)
{
    return (x + graphx0);
}

/*
 *      Map virtual y coord to physical y coord
 */

double ypage(double y)
{
    return (y + graphy0);
}

static void PlotCurveLeftToRight(double *x, double *y)
{
  int i;

  output->PathLineTo(xpage(0), ypage(0));
  for (i = 0; i < samplesize; i++)
    output->PathLineTo(xpage(x[i]), ypage(y[i]));
}


static void PlotCurveRightToLeft(double *x, double *y)
{
  int i;

  for (i = samplesize - 1; i >= 0; i-- )
    output->PathLineTo(xpage(x[i]), ypage(y[i]));
  output->PathLineTo(xpage(0), ypage(0));
}

/*
 *      Save the curve coordinates stored in y[] in py[].
 */

static void SaveCurve(double* y, double* py)
{
  int i;

  for (i = 0; i < samplesize; i++)
    py[i] = y[i];
}

static void TopCurve(double* y, double* py)
{
  int i;
  double m = 0.0;

  for (i = 0; i < samplesize; i++)
    m = max(m,y[i]);

  for (i = 0; i < samplesize; i++)
    y[i] = py[i] = m;
}

static void ShadeCurve(int no, double *x, double *y, double *py)
{
  output->PathNew(Closed,2*samplesize);
  output->PathFill(no);
  output->PathWidth(0.1);
  output->PathMoveTo(xpage(x[0]), ypage(py[0]));
  PlotCurveLeftToRight(x, py);
  output->PathLineTo(xpage(x[samplesize - 1]), ypage(y[samplesize - 1]));
  PlotCurveRightToLeft(x, y);
  output->PathStroke();

  if (showExploded)
    TopCurve(y, py);
  else
    SaveCurve(y, py);
}


/*
 * Curve() -- Draw a curve, and fill the area that is below it and above
 *            the previous curve.
 */

static void Curve(int no,Entry *ep)
{
  Value *vp;
  double sf = graphheight / yrange;

  for (vp = ep->value; vp; vp = vp->next)
        y[vp->census] += sf*(double)vp->size;

  ShadeCurve(no,x, y, py);
}

/*
 * Draw vertical line at sample points
 */

static void SampleLine(double x, double y1, double y2)
{
    outputLineTo(xpage(x),ypage(y1),xpage(x),ypage(y2));
}

void Samples(void)
{
  int i;
  for (i = 0; i < samplesize; i++) {
    SampleLine(x[i],py[i],graphheight);
  }
}



void curves(void)
{
  int i;

  for (i = entrysize-1; i>=0;  i--) {
    Curve(i,entrydata[i]);
  }
  if (showSample) Samples();
}

/******************/

void comments(void)
{
  int i;
  double m;
  for (i = 0; i < commentsize; i++) {
    m = (commentdata[i].time / xrange) * graphwidth;
    SampleLine(m,0.0,graphheight);
    output->Text(JustifyVertical,xpage(m),ypage(0.0)+graphheight,SCALE_FONT,commentdata[i].comment);
  }
}

void marks(void)
{
  int i;
  double m;

  for (i = 0; i < marksize; i++) {
    m = ((double)markdata[i] / xrange) * graphwidth;
 /* Possible bugfix for the line above if the x-axis does not start at 0 */
 /* m = ((double)(markdata[i] - sampledata[0]) / xrange) * graphwidth;   */
    outputCaret(xpage(m), ypage(0.0), 4.0);
  }
}


