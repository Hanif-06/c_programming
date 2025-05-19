#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b,c;
    float x1,x2;
    printf("enter the value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(b*b-4*a*c<0)
    {
        printf("There are imaginary roots for this equation ");
    }
    else
        {
    x1=(-b+sqrt(b*b-4*a*c))/2*a;
    x2=(-b-sqrt(b*b-4*a*c))/2*a;
    printf("The roots of this equation %.2f and %.2f",x1,x2);
    }
    return 0;
}
