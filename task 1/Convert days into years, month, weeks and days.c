#include <stdio.h>
int main ()
{
    int day,month,year,week,days;
    printf("Enter the day you want to convert:");
    scanf("%d",&day);
    year=day/365;
    month=(day-(365*year))/30;
    week=(day-(365*year)-(30*month))/7;
    days=(day-(365*year)-(30*month)-(7*week));
    printf("it is %d years %d months %d weeks and %d days",year,month,week,days);
}
