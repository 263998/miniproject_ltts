/*To subtract years from a date*/
#include "dtmanip.h"
void subYear(char *date,int dyear,char *newDate)
{
   int d,m,y;
   splitDate(date,&y,&m,&d); 
   y=y-dyear;
   if(d==29 && m==2 && !isLeap(y))
        d=28;
   formDate(newDate,y,m,d);
}/*End of subYear () */