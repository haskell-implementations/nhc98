#include <haskell2c.h>
#include <time.h>


int hs_toClockTime (int y,int mon,int d,int h,int min,int s,int pc,int wd,int yd,char* tzn,int tz,int dst)
{ time_t ct;
  
   struct tm cal;
   cal.tm_year = y;
   cal.tm_mon  = mon;
   cal.tm_mday = d;
   cal.tm_hour = h;
   cal.tm_min  = min;
   cal.tm_sec  = s;
   cal.tm_wday = wd;
   cal.tm_yday = yd;
   cal.tm_isdst = dst;
   ct = mktime(&cal);
  return ct;
}
