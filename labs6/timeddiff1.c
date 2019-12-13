#include<stdio.h>
#include<stdlib.h>
static char daytab[2][13]={
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};
int day_of_year(int year,int month,int day)
{
    int i,leap;
    leap = year%4 == 0 &&year%100 !=0||year%400 == 0;
    for(i=1;i<month;i++)
    day+=daytab[leap][i];
    return day;
}
void month_day(int year,int yearday,int *pmonth,int *pday)
{
    int i,leap;
    leap = year%4 == 0 && year%100 != 0||year%400 ==0;
    for(i = 1;yearday>daytab[leap][i];i++)
    yearday -= daytab[leap][i];
    *pmonth = i;
    *pday = yearday;
}
int main(int argc,char *argv[])
{
    int day;
    for(int i = atof(argv[1]) + 1;i<atof(argv[4]);i++)
        day += day_of_year(i,12,31);
    if(*argv[1] < atof(argv[4]))
        day += day_of_year(atof(argv[4]),atof(argv[5]),atof(argv[6])) + day_of_year(atof(argv[1]),12,31) - day_of_year(atof(argv[1]),atof(argv[2]),atof(argv[3])) + 1;
    else if(atof(argv[1]) == atof(argv[4]))
        day += day_of_year(atof(argv[4]),atof(argv[5]),atof(argv[6])) - day_of_year(atof(argv[1]),atof(argv[2]),atof(argv[3])) + 1;
    printf("%d\n",day);
}