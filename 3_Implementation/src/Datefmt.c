/*To split and form
void splitDate(char
{
the date* /
*date, int *y, int *m,int *d)
L
date[2]=date[5]='\0';
*d=atoi (date) ;
*m=atoi(date+3) ;
*y=atoi(date+6);
date[2]=date[5]='/' ;
}/*End of splitDate( )*/
void formDate (char *date, int y, int m, int d)
{
char arr [ 9] [3] = { "01" , "02 " , "03 " , "04 II , "05 " , "06 II , "07 " , "08 II , "09 " } ;
if (d<lO)
strcpy(date,arr[d-l]);
else
sprintf(date,"%d",d);
if(m<lO)
strcpy(date+3,arr[m-l]) ;
else
sprintf(date+3, "%d",m);
sprintf(date+6, "%d",y);
date[2]=date[5]='/' ;
} /*End of formDate ( ) */
