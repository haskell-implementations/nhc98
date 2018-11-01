#include "hp2graph.h"
#include "output.h"

double auxxrange = 0.0;
double auxyrange = 0.0;

void useAuxFile(void)
{
  int i = 0;
  int c;

  initlex(auxFile);
  getToken();  /* Load first token */

  literal("XRANGE");
  auxxrange = atof(lextoken);
  getToken();
  
  literal("YRANGE");
  auxyrange = atof(lextoken);
  getToken();
  
  do {
    int j;
    int pos = atoi(lextoken);
    getToken();
    for(j=0; j<entrysize; j++) {
      if(!strcmp(entrydata[j]->key.token,lextoken)) {
	Entry *t = entrydata[i];
	entrydata[i] = entrydata[j];
	entrydata[j] = t;
	i++;
	goto nextToken;
      }
    }
    c = keycolour[i];
    for(j=i; j<MAXKEY; j++)
      keycolour[j] = keycolour[j+1];
    keycolour[MAXKEY] = c;
  nextToken:
    getToken();
  } while (i<MAXKEY && lextoken);
}



void writeAuxFile(void)
{
  int i;

  fprintf(auxFile,"XRANGE %f\n",xrange);
  fprintf(auxFile,"YRANGE %f\n",yrange);

  for(i=0; i<entrysize; i++)
    fprintf(auxFile,"%i %s\n",i,entrydata[i]->key.token);
}

