#include "hp2graph.h"

void sortEntries(void)
{
  int i,j;
  
  for (i = 0; i < entrysize - 1; i++) {
    int max = i;
    double area = entrydata[max]->area;
    for (j = i+1; j < entrysize; j++) {
      if (entrydata[j]->area > area) {
	max = j;
	area = entrydata[max]->area;
      }
    }
    if(max!=i) {
      Entry *t = entrydata[i]; 
      entrydata[i] =  entrydata[max];
      entrydata[max] = t;
    }
  }    
}

  
