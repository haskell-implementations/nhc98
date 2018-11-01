#include "hp2graph.h"
#include "output.h"
#include "format.h"

typedef enum {MEGA, KILO, UNIT} mkb; 

/*
 *      Find a "nice round" value to use on the axis.
 */

static double Round(double y)
{
  int i;

  for (i = 0; y > (double)10.0e-3; y /= 10, i++)
    ;

  if (y > 4.0e-3) {
    y = (double)5.0e-3;
  } else if (y > 1.0e-3) {
    y = (double)2.0e-3;
  } else {
    y = (double)1.0e-3;
  }   

  for ( ; i > 0; y = y * 10, i--)
    ;

  return y;
}


static void XAxisMark(double x, double num, mkb unit)
{
  char info[100];
  /* calibration mark */
  outputLine(xpage(x), ypage(0.0), 0.0, -4.0);

  switch (unit) {
    case MEGA :
      sprintf(info, "%dM", (int) (num / 1e6));
      break;
    case KILO :
      sprintf(info, "%dk", (int) (num / 1e3));
      break;
    case UNIT :
      if (timebyallocation)
           sprintf(info, "%d", (int)num);
      else sprintf(info, "%.1f", num);
      break;
  }

  output->Text(JustifyCenter,xpage(x),borderspace,SCALE_FONT,info);
}

#define N_X_MARKS        7
#define XFUDGE          15      

static void XAxis(void)
{
  double increment, i; 
  double t, x;
  double legendlen;
  mkb unit;
 
  /* draw the x axis line */
  outputLine(xpage(0.0), ypage(0.0), graphwidth,0);

    /* draw x axis legend */
  output->Text(JustifyLeft,xpage(0.0) + graphwidth, borderspace,SCALE_FONT
              ,(timebyallocation?"sample":"second"));
    /* draw x axis scaling */

  increment = Round(xrange / (double) N_X_MARKS);

  if (increment >= 1e6) {
      unit = MEGA;
  } else if (increment >= 1e3) {
      unit = KILO;
  } else {
      unit = UNIT;
  }   
  if (increment < 0.01) increment = 0.01;

  t = graphwidth / xrange;
  legendlen = stringSize("seconds") + (double) XFUDGE;
 
  for (i = 0; i < sampledata[ samplesize - 1]; i += increment) {
    x = i * t;  
 
    if (x < (graphwidth - legendlen)) { 
      XAxisMark(x,i,unit);
    } 
  } 
}


static void YAxisMark(double y, double num, mkb unit)
{
  char info[100];

    /* calibration mark */
  outputLine(xpage(0.0), ypage(y), -4.0, 0.0);
 
    /* number */

  switch (unit) {
    case MEGA :
      sprintf(info, "%dM", (int) (num / 1e6));
      break;
    case KILO :
      sprintf(info, "%dk", (int) (num / 1e3));
      break;
    case UNIT :
      sprintf(info, "%d", (int) (num));
      break;
  }

  output->Text(JustifyRight,graphx0 - borderspace,ypage(y),SCALE_FONT,info);
}


#define N_Y_MARKS        7      
#define YFUDGE          15 

static void YAxis(void)
{
  double increment, i;
  double t, y;
  double legendlen;
  mkb unit;
  
    /* draw the y axis line */
  outputLine(xpage(0.0), ypage(0.0), 0.0, graphheight);

  /* draw y axis legend */

  output->Text(JustifyVertical,xpage(0.0) - borderspace,ypage(0.0)+graphheight,SCALE_FONT,"byte");

    /* draw y axis scaling */
  increment = Round(yrange / (double) N_Y_MARKS);

  if (increment < (double)1.0) increment = (double)1.0;

  if (increment >= 1e6) {
      unit = MEGA;
  } else if (increment >= 1e3) {
      unit = KILO;
  } else {
      unit = UNIT;
  }   

  t = graphheight / yrange; 
  legendlen = stringSize("bytes") + (double) YFUDGE; 

  for (i = 0; i <= yrange; i += increment) {
    y = i * t;

    if (y < (graphheight - legendlen)) {
      YAxisMark(y, i, unit);
    }
  } 
}

void axes(void)
{
    XAxis();
    YAxis();
}
