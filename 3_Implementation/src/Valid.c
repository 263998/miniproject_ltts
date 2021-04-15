/*To find whether a date entered is valid or not. */
#include "dtmanip.h"
int isValid(char *date)
{
  int d,m,y;
  if(date[2] !='/' || date[5] !='/' || strlen(date) !=10)
    return 0;
  splitDate(date,&y,&m,&d);
  if( d==0 || m==0 || y==0)
    return 0;
  if(d<1 || d>31 || m<1 || m>12)
    return 0; 
  if(m==2)
  {
/*check for number of days in February*/
    if (d==29 && isLeap(y))
      return 1;
    if ( d>28)
      return 0;
  } 
if( m==4 || m==6 || m==9 || m==11)/*Checkfor days in april, june, sept,
nov*/
{
    if(d>30)
      return 0;
}
return 1;
}/*End of isValid()*/
