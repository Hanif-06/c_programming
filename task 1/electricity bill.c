#include <stdio.h>
int main ()
{
    int unit;
    float a,bill;
    printf("Enter the electricity unit:");
    scanf("%d",&unit);
    if(unit<=50)
    {
        a=0.50*unit;
    }
    else if((unit>50)&&(unit<=150))
    {
        a=0.50*50+0.75*(unit-50);
    }
    else if((unit>150)&&(unit<=250))
    {
        a=0.50*50+0.75*100+1.20*(unit-150);
    }
    else if(unit>250)
    {
        a=0.50*50+0.75*100+1.20*100+1.50*(unit-250);
    }
    bill=a+((a*20)/100);
        printf("Total electricity bill is %.3f",bill);
        return 0;
}
