#include <stdio.h>
int main ()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("It is a positive number");
    }
    else if(a<0)
    {
        printf("It is a negative number.");
    }
    else
    {
        printf("It is zero.");
    }
    return 0;
}
