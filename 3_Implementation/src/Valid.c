/*To find whether a date entered is valid or not. */
int isValid(char *date)
{
  int d,m,y;
if(date[2] !='/' II daterS] !='/' II strlen(date) !=10)
return 0;
splitDate(date,&y,&m,&d);
  if( d==O II m==O
retlfrn' 0;
if ( d<l I I d>31
return 0;
II'y==O)
II m<l II m>12)
if. (m==2)
{
/ *check for number of days in February* /
if (d==29 && isLec>.p (y) )
return 1;
if ( d>28)
return 0;
} .
if( m==4 II m==6 II m==9 II m==l1)/*Checkfor days in april, june, sept,
nov*/
{
if(d>30)
return 0;
}
     return 1;
}/*End of
1 ;
isValid()*/
