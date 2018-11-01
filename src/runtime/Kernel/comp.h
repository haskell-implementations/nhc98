
#ifdef __mips
#define STR(s) "s"
#else
#define STR(s) #s
#endif

#ifdef __arm
typedef struct stat {
        int     st_dev;
        int     st_ino;
        int     st_mode;
        int     st_nlink;
        int     st_uid;
        int     st_gid;
        int     st_rdev;
        int     st_size;
        int     st_atime;
        int     st_spare1;
        int     st_mtime;
        int     st_spare2;
        int     st_ctime;
        int     st_spare3;
        int     st_blksize;
        int     st_blocks;
        int     st_spare4[2];
};

int stat(char *,struct stat*);  /* defined in timeRO.s */

#else

#include <sys/time.h>

#ifdef __hppa__
#ifndef _NEXT_SOURCE
#endif
#endif
#include <sys/types.h>
#include <sys/stat.h>
#endif
