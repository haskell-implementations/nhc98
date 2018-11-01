#include <stdlib.h>
#include <stdio.h>
main(int argc, char **argv)
{
  int prefix = 1;
  int i = 0;
  char *s;
  if (argc==1) {
    i = DefaultHeap;
  } else if ((argc==2) && (*argv[1]=='T')) {
    i = 5 * DefaultHeap;
  } else {
    s = argv[argc-1];
    while(isdigit(*s)) {
      i = i*10 + *s++ - '0';
    }

    switch(*s) {
    case 'k': 
    case 'K': prefix *= 1000;    s++; break;
    case 'm':
    case 'M': prefix *=  1000000; s++; break;
    }

    switch(*s) {
      case 'b': case 'B': s++; i = i*prefix/sizeof(unsigned); break;
      case 'w': case 'W': s++; i = i*prefix; break;
      default: i = i*prefix/sizeof(unsigned); break;
    }
  }

  printf("int hpSize = %d;\n",i);
  exit(0);
}
