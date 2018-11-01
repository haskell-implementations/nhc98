#include "hp2graph.h"
#include "output.h"
#include "format.h"

char buffer[10];

static void KeyEntry(double centreline, char* name, float percentage, int colour)
{
  double namebase;
  double keyboxbase;
  double kstart;


  namebase = centreline - (double) (NORMAL_FONT / 2);
  keyboxbase = centreline - ((double) KEY_BOX_WIDTH / 2);
  
  kstart = graphx0 + graphwidth;

  outputBox(colour,kstart + borderspace, keyboxbase, KEY_BOX_WIDTH, KEY_BOX_WIDTH);

  sprintf(buffer,"%2d%%",(int)(percentage*100+0.5));
  output->Text(JustifyRight
              ,kstart + (double)2.6* KEY_BOX_WIDTH + 2 * borderspace, namebase
              ,KEY_FONT
              ,buffer);

  output->Text(JustifyLeft
              ,kstart + (double)2.9* KEY_BOX_WIDTH + 2 * borderspace, namebase
              ,KEY_FONT
              ,name);
}


void key(void)
{
  int i;
  double c;
  double dc;

  dc = graphheight / (double)(entrysize + 1);
  c  = graphy0+dc*entrysize;

  for (i = 0; i < entrysize; i++) {
    Entry *ep = entrydata[i];
    KeyEntry(c, ep->key.token, ep->area/areabelow, i);
    c -= dc;
  }
}

int keycolour[MAXKEY+1];


void initKeys(void) /* prepare key colours so that useAuxFlag can reoder them */
{
  int i;
  for(i=0; i<=MAXKEY; i++)
    keycolour[i] = i;
}

    
