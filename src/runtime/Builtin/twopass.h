
#define RECORD(x) fwrite((void *)&(x),sizeof(x),1,inputFILE)
#define RECORD_STR(l,s) fwrite((void *)(s),sizeof(char),l,inputFILE)
#define RECORD_BOOL(x) putc(x,inputFILE)



#define REPLAY(x) fread((void *)&(x),sizeof(x),1,inputFILE)
#define REPLAY_STR(l,s) fread((void *)(s),sizeof(char),l,inputFILE)
#define REPLAY_BOOL(x) x = getc(inputFILE)
