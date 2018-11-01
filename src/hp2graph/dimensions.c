#include "hp2graph.h"
#include "output.h"


/*
 *      Get page and other dimensions before printing.
 */

double borderheight   = BORDER_HEIGHT;
double borderwidth    = BORDER_WIDTH;
double borderspace    = BORDER_SPACE;
double borderradius   = BORDER_RADIUS;

double titlewidth     = (BORDER_WIDTH  - (2 * BORDER_SPACE)); 
double titleheight    = TITLE_HEIGHT;
double titleradius    = TITLE_RADIUS;
double titletextspace = TITLE_TEXT_SPACE;

double linethick = LINE_THICK;

double graphx0 = GRAPH_X0;
double graphy0 = GRAPH_Y0;

double graphheight;
double graphwidth;

/*
 *      A desperately grim solution.
 */


int fonttab[] = {
    /*  20 (' ') = */ 3,
    /*  21 ('!') = */ 1,
    /*  22 ('"') = */ 1,
    /*  23 ('#') = */ 3,
    /*  24 ('$') = */ 3,
    /*  25 ('%') = */ 3,
    /*  26 ('&') = */ 3,
    /*  27 (''') = */ 1,
    /*  28 ('(') = */ 3,
    /*  29 (')') = */ 3,
    /*  2a ('*') = */ 2,
    /*  2b ('+') = */ 3,
    /*  2c (',') = */ 1,
    /*  2d ('-') = */ 3,
    /*  2e ('.') = */ 1,
    /*  2f ('/') = */ 3,
    /*  30 ('0') = */ 4,
    /*  31 ('1') = */ 4,
    /*  32 ('2') = */ 4,
    /*  33 ('3') = */ 4,
    /*  34 ('4') = */ 4,
    /*  35 ('5') = */ 4,
    /*  36 ('6') = */ 4,
    /*  37 ('7') = */ 4,
    /*  38 ('8') = */ 4,
    /*  39 ('9') = */ 4,
    /*  3a (':') = */ 1,
    /*  3b (';') = */ 1,
    /*  3c ('<') = */ 3,
    /*  3d ('=') = */ 3,
    /*  3e ('>') = */ 3,
    /*  3f ('?') = */ 2,
    /*  40 ('@') = */ 3,
    /*  41 ('A') = */ 5,
    /*  42 ('B') = */ 5,
    /*  43 ('C') = */ 5,
    /*  44 ('D') = */ 5,
    /*  45 ('E') = */ 5,
    /*  46 ('F') = */ 5,
    /*  47 ('G') = */ 5,
    /*  48 ('H') = */ 5,
    /*  49 ('I') = */ 1,
    /*  4a ('J') = */ 5,
    /*  4b ('K') = */ 5,
    /*  4c ('L') = */ 5,
    /*  4d ('M') = */ 5,
    /*  4e ('N') = */ 5,
    /*  4f ('O') = */ 5,
    /*  50 ('P') = */ 5,
    /*  51 ('Q') = */ 5,
    /*  52 ('R') = */ 5,
    /*  53 ('S') = */ 5,
    /*  54 ('T') = */ 5,
    /*  55 ('U') = */ 5,
    /*  56 ('V') = */ 5,
    /*  57 ('W') = */ 5,
    /*  58 ('X') = */ 5,
    /*  59 ('Y') = */ 5,
    /*  5a ('Z') = */ 5,
    /*  5b ('[') = */ 2,
    /*  5c ('\') = */ 3,
    /*  5d (']') = */ 2,
    /*  5e ('^') = */ 1,
    /*  5f ('_') = */ 3,
    /*  60 ('`') = */ 1,
    /*  61 ('a') = */ 3,
    /*  62 ('b') = */ 3,
    /*  63 ('c') = */ 3,
    /*  64 ('d') = */ 3,
    /*  65 ('e') = */ 3,
    /*  66 ('f') = */ 3,
    /*  67 ('g') = */ 3,
    /*  68 ('h') = */ 3,
    /*  69 ('i') = */ 1,
    /*  6a ('j') = */ 2,
    /*  6b ('k') = */ 3,
    /*  6c ('l') = */ 1,
    /*  6d ('m') = */ 5,
    /*  6e ('n') = */ 3,
    /*  6f ('o') = */ 3,
    /*  70 ('p') = */ 3,
    /*  71 ('q') = */ 3,
    /*  72 ('r') = */ 2,
    /*  73 ('s') = */ 3,
    /*  74 ('t') = */ 2,
    /*  75 ('u') = */ 3,
    /*  76 ('v') = */ 3,
    /*  77 ('w') = */ 3,
    /*  78 ('x') = */ 3,
    /*  79 ('y') = */ 3,
    /*  7a ('z') = */ 3,
    /*  7b ('{') = */ 2,
    /*  7c ('|') = */ 1,
    /*  7d ('}') = */ 2,
    /*  7e ('~') = */ 2
};


/*
 *      What size is a string (in points)?
 */

#define FUDGE 1.7 

double stringSize(char *s)
{
  double r;

  for (r = 0; *s; s++)
    if(*s>=0x20 && *s <= 0x7e)
      r += fonttab[(*s) - 0x20];

  return (FUDGE * r);
}

/*
 *      Calculate the width of the key.
 */

static double keyWidth(void)
{
  int i;
  double c;

  c = 0;

  for (i = 0; i < entrysize; i++)
    c = max(c, stringSize(entrydata[i]->key.token));

  c += 3 * borderspace;

  c += 2.8*KEY_BOX_WIDTH;

  return c;
}

double xrange;
double yrange;
double graphwidth;
double graphheight;

void dimensions(void)
{
    xrange = sampledata[ samplesize - 1 ];
    xrange = max(xrange, auxxrange);
 
    yrange = maxCombinedHeight();
    yrange = max(yrange, auxyrange);

    graphwidth  = titlewidth - graphx0 - keyWidth();
    graphheight = borderheight - titleheight - (2 * borderspace) - graphy0;

}
