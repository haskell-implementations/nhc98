#include <haskell2c.h>
#include <time.h>


NodePtr hs_toUTCTime (time_t ct)
{ 
   struct tm *cal;
   cal = gmtime(&ct);
  return nhc_mkTuple12(nhc_mkInt(1900+cal->tm_year),nhc_mkInt(cal->tm_mon),nhc_mkInt(cal->tm_mday),nhc_mkInt(cal->tm_hour),nhc_mkInt(cal->tm_min),nhc_mkInt(cal->tm_sec),nhc_mkInt(0),nhc_mkInt(cal->tm_wday),nhc_mkInt(cal->tm_yday),nhc_mkString((char*)0),nhc_mkInt(0),nhc_mkBool(cal->tm_isdst));
}
