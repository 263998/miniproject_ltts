/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __DTMANIP_H__
#define __DTMANIP_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void formDate(char *date, int y, int m, int d);




void splitDate(char *date, int *y, int *m, int *d);





int isValid(char *date);





int isLeap(int y);





void addDays(char *date,int days,char *newDate);





void addMonth(char *date,int imonth,char *newDate);




void addYear(char *date,int iyear,char *newDate);





int cmpDate(char *date1, char *date2);




int diffDays(char *date1, char *date2);




void diffYMD(char *date1, char *date2, int *y, int *m, int *d);




void subDays(char *date, int days, char *newDate);



void subMonth(char *date, int dmonth, char *newDate);




void subYear(char *date, int dyear, char *newDate);




void weekDay(char *date, char *dayWeek);




void revJulian(int j, int y, int *d, int *m);




int julian(int d, int m, int y);

#endif /* #define __CALCULATOR_OPERATIONS_H__ */
